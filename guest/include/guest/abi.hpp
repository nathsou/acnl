// Calls between the recompiled code and rewritten C++ functions.
//
// Rewriting a function:
//
//     u32 count_lives(gptr<Player> player) { ... }
//     GUEST_EXPORT(0x00104a20, count_lives);
//
// From then on every call the game makes to 0x00104a20 runs count_lives: its arguments are read from the guest
// registers and stack following the ARM procedure call standard, and its result goes back to r0 (or s0).
// The recompiled original stays in the binary (GUEST_OVERLAY=0 or GUEST_DISABLE run it instead).
//
// Calling a function that is still recompiled code:
//
//     inline constexpr guest::Function<0x00105c40, void(gptr<Player> player, s32 delta)> add_lives;
//     add_lives(player, -1);
//
// Member functions work too: GUEST_EXPORT(addr, Player::update) passes r0 as `this`.
#pragma once

#include <atomic>
#include <initializer_list>
#include <tuple>
#include <type_traits>

#include "guest/memory.hpp"

const GuestEntry *dispatch_lookup(u32 addr);  // 3dsrecomp runtime (core.cpp)

#ifndef GUEST_HARDFP
#define GUEST_HARDFP 1  // float arguments and results in VFP registers (AAPCS-VFP), as devkitARM and the SDK use
#endif

namespace guest {

// the CPU of the guest thread running on this host thread
CPU *cpu();

// A system call from rewritten code: rt_svc on the guest CPU, which reads and writes the CPU's registers.
void svc(u32 number);

// the return address rewritten code gives the functions it calls: a guest function returning there is back in C++
constexpr u32 RETURN_TO_HOST = 0xFFFF1000u;

[[noreturn]] void fatal(const char *fmt, ...) __attribute__((format(printf, 1, 2)));

namespace detail {

template <typename T> struct is_gptr : std::false_type {};
template <typename T> struct is_gptr<gptr<T>> : std::true_type {};

enum class Slot { Core, Core64, Single, Double };

template <typename T>
constexpr Slot slot_of() {
    if constexpr (std::is_reference_v<T>) {
        return Slot::Core;  // a reference to a guest object: its address
    } else if constexpr (std::is_same_v<T, float>) {
        return GUEST_HARDFP ? Slot::Single : Slot::Core;
    } else if constexpr (std::is_same_v<T, double>) {
        return GUEST_HARDFP ? Slot::Double : Slot::Core64;
    } else if constexpr (is_gptr<T>::value) {
        return Slot::Core;
    } else if constexpr (std::is_integral_v<T> || std::is_enum_v<T>) {
        return sizeof(T) == 8 ? Slot::Core64 : Slot::Core;
    } else {
        static_assert(sizeof(T) == 0, "unsupported argument type: use integers, enums, float, double or gptr<T>");
        return Slot::Core;
    }
}

// raw register bits <-> C++ values (T is the declared parameter or result type)
template <typename T>
u64 to_bits(const std::remove_reference_t<T> &v) {
    if constexpr (std::is_reference_v<T>) {
        return addr_of(&v).addr();
    } else if constexpr (std::is_same_v<T, float>) {
        return F2U(v);
    } else if constexpr (std::is_same_v<T, double>) { u64 b; memcpy(&b, &v, 8); return b; } else if constexpr (is_gptr<T>::value) {
        return v.addr();
    } else if constexpr (sizeof(T) == 8) {
        return u64(v);
    } else {
        return u32(v);  // sign-extended to 32 bits like the ABI wants
    }
}
template <typename T>
T from_bits(u64 b) {
    if constexpr (std::is_reference_v<T>) {
        return *gptr<std::remove_reference_t<T>>(u32(b));
    } else if constexpr (std::is_same_v<T, float>) {
        return U2F(u32(b));
    } else if constexpr (std::is_same_v<T, double>) { double d; memcpy(&d, &b, 8); return d; } else if constexpr (is_gptr<T>::value) {
        return T(u32(b));
    } else if constexpr (std::is_same_v<T, bool>) {
        return (b & 0xff) != 0;
    } else {
        return T(b);
    }
}

// where each argument goes (AAPCS with the VFP variant when GUEST_HARDFP)
struct Location {
    enum Kind { Reg, RegPair, S, D, Stack, Stack64 } kind;
    u32 index;  // register number, or byte offset from sp
};

class ArgAllocator {
public:
    template <typename T>
    Location next() {
        switch (slot_of<T>()) {
        case Slot::Core:
            if (ncrn_ < 4) {
                return {Location::Reg, u32(ncrn_++)};
            }
            return stack(4);
        case Slot::Core64:
            ncrn_ = (ncrn_ + 1) & ~1;
            if (ncrn_ + 1 < 4) { ncrn_ += 2; return {Location::RegPair, u32(ncrn_ - 2)}; }
            ncrn_ = 4;
            return stack(8);
        case Slot::Single:
            if (!vfp_on_stack_)
                for (u32 s = 0; s < 16; s++)
                    if (!(vfp_used_ & (1u << s))) { vfp_used_ |= 1u << s; return {Location::S, s}; }
            vfp_on_stack_ = true;
            return stack(4);
        case Slot::Double:
            if (!vfp_on_stack_)
                for (u32 s = 0; s < 16; s += 2)
                    if (!(vfp_used_ & (3u << s))) { vfp_used_ |= 3u << s; return {Location::D, s}; }
            vfp_on_stack_ = true;
            return stack(8);
        }
        return {};
    }
    u32 stack_size() const { return (nsaa_ + 7) & ~7u; }

private:
    Location stack(u32 size) {
        nsaa_ = (nsaa_ + size - 1) & ~(size - 1);
        Location l{size == 8 ? Location::Stack64 : Location::Stack, nsaa_};
        nsaa_ += size;
        return l;
    }
    int ncrn_ = 0;
    u32 nsaa_ = 0;
    u32 vfp_used_ = 0;
    bool vfp_on_stack_ = false;
};

inline u64 read_location(CPU *c, Location l, u32 sp) {
    switch (l.kind) {
    case Location::Reg: return c->r[l.index];
    case Location::RegPair: return c->r[l.index] | (u64(c->r[l.index + 1]) << 32);
    case Location::S: return F2U(c->s[l.index]);
    case Location::D: return F2U(c->s[l.index]) | (u64(F2U(c->s[l.index + 1])) << 32);
    case Location::Stack: return *gptr<u32>(sp + l.index);
    case Location::Stack64: return *gptr<u32>(sp + l.index) | (u64(*gptr<u32>(sp + l.index + 4)) << 32);
    }
    return 0;
}
inline void write_location(CPU *c, Location l, u32 sp, u64 v) {
    switch (l.kind) {
    case Location::Reg: c->r[l.index] = u32(v); break;
    case Location::RegPair: c->r[l.index] = u32(v); c->r[l.index + 1] = u32(v >> 32); break;
    case Location::S: c->s[l.index] = U2F(u32(v)); break;
    case Location::D: c->s[l.index] = U2F(u32(v)); c->s[l.index + 1] = U2F(u32(v >> 32)); break;
    case Location::Stack: *gptr<u32>(sp + l.index) = u32(v); break;
    case Location::Stack64: *gptr<u32>(sp + l.index) = u32(v); *gptr<u32>(sp + l.index + 4) = u32(v >> 32); break;
    }
}

// how a function returns its result
enum class Ret : u8 { Void, R0, R0R1, S0, D0 };
template <typename R>
constexpr Ret ret_of() {
    if constexpr (std::is_void_v<R>) {
        return Ret::Void;
    } else {
        switch (slot_of<R>()) {
        case Slot::Core: return Ret::R0;
        case Slot::Core64: return Ret::R0R1;
        case Slot::Single: return Ret::S0;
        case Slot::Double: return Ret::D0;
        }
        return Ret::R0;
    }
}
template <typename R>
void write_result(CPU *c, const std::remove_reference_t<R> &v) {
    u64 b = to_bits<R>(v);
    switch (ret_of<R>()) {
    case Ret::R0: c->r[0] = u32(b); break;
    case Ret::R0R1: c->r[0] = u32(b); c->r[1] = u32(b >> 32); break;
    case Ret::S0: c->s[0] = U2F(u32(b)); break;
    case Ret::D0: c->s[0] = U2F(u32(b)); c->s[1] = U2F(u32(b >> 32)); break;
    case Ret::Void: break;
    }
}
template <typename R>
R read_result(CPU *c) {
    if constexpr (std::is_reference_v<R>) {
        return from_bits<R>(c->r[0]);
    }
    switch (ret_of<R>()) {
    case Ret::R0: return from_bits<R>(c->r[0]);
    case Ret::R0R1: return from_bits<R>(c->r[0] | (u64(c->r[1]) << 32));
    case Ret::S0: return from_bits<R>(F2U(c->s[0]));
    case Ret::D0: return from_bits<R>(F2U(c->s[0]) | (u64(F2U(c->s[1])) << 32));
    default: return from_bits<R>(c->r[0]);
    }
}

// ---- guest -> C++

template <typename F> struct FnTraits;
template <typename R, typename... A>
struct FnTraits<R (*)(A...)> {
    using Result = R;
    using Class = void;
    using Args = std::tuple<A...>;
};
template <typename R, typename C, typename... A>
struct FnTraits<R (C::*)(A...)> {
    using Result = R;
    using Class = C;
    using Args = std::tuple<A...>;
};
template <typename R, typename C, typename... A>
struct FnTraits<R (C::*)(A...) const> : FnTraits<R (C::*)(A...)> {};

template <typename... A>
std::tuple<A...> read_args(CPU *c, ArgAllocator &al, std::tuple<A...> *) {
    u32 sp = c->r[13];
    return std::tuple<A...>{from_bits<A>(read_location(c, al.next<A>(), sp))...};  // braced: left to right
}

void set_cpu(CPU *c);

// The stack frame the original function pushes (`push {r4, r5, lr}`: bit n of the mask is register n): while the
// rewrite runs, guest code it calls sees the stack where the original's callees would have seen it, with the
// registers stored the same way. Some game code reads stack it never wrote, so this changes what it computes.
class PushedFrame {
public:
    PushedFrame(CPU *c, u32 mask) : c_(c), saved_sp_(c->r[13]) {
        if (mask == 0) {
            return;
        }
        u32 sp = saved_sp_;
        for (int r = 15; r >= 0; r--) {
            if (mask >> r & 1) {
                sp -= 4;
                *gptr<u32>(sp) = c->r[r];
            }
        }
        c->r[13] = sp;
    }
    ~PushedFrame() { c_->r[13] = saved_sp_; }
    PushedFrame(const PushedFrame &) = delete;
    PushedFrame &operator=(const PushedFrame &) = delete;

private:
    CPU *c_;
    u32 saved_sp_;
};

// runs the C++ function Fn on the arguments in c, as if the guest had called it
template <auto Fn, u32 FrameMask = 0>
void invoke(CPU *c) {
    using T = FnTraits<decltype(Fn)>;
    using R = typename T::Result;
    set_cpu(c);
    u32 ret = c->r[14];
    ArgAllocator al;
    if constexpr (std::is_void_v<typename T::Class>) {
        auto args = read_args(c, al, static_cast<typename T::Args *>(nullptr));
        PushedFrame frame(c, FrameMask);
        if constexpr (std::is_void_v<R>) {
            std::apply(Fn, args);
        } else {
            write_result<R>(c, std::apply(Fn, args));
        }
    } else {
        auto *self = gptr<typename T::Class>(u32(read_location(c, al.next<u32>(), c->r[13]))).get();
        auto args = read_args(c, al, static_cast<typename T::Args *>(nullptr));
        auto call = [self](auto &&...a) -> decltype(auto) { return (self->*Fn)(std::forward<decltype(a)>(a)...); };
        PushedFrame frame(c, FrameMask);
        if constexpr (std::is_void_v<R>) {
            std::apply(call, args);
        } else {
            write_result<R>(c, std::apply(call, args));
        }
    }
    c->pc = ret;
}

// one rewritten function (static data of a GUEST_EXPORT)
struct Export {
    u32 address;
    const char *name;
    Ret ret;
    void (*overlay)(CPU *);
    GuestFn original;
    Export(u32 address, const char *name, Ret ret, void (*overlay)(CPU *), GuestFn original);
};
void enter(Export &e, CPU *c, u32 entry);

// ---- C++ -> guest

template <typename R, typename... A>
R call(const GuestEntry *e, u32 address, A... args) {
    CPU *c = cpu();
    ArgAllocator layout;
    (layout.next<A>(), ...);
    u32 sp = c->r[13];
    u32 frame = layout.stack_size();
    c->r[13] = sp - frame;
    ArgAllocator al;
    (write_location(c, al.next<A>(), c->r[13], to_bits<A>(args)), ...);
    c->r[14] = RETURN_TO_HOST;
    c->pc = address;
    e->fn(c, e->entry);
    if (c->pc != RETURN_TO_HOST) {
        fatal("guest function %08x returned to %08x instead of the rewritten caller", address, c->pc);
    }
    c->r[13] = sp;
    if constexpr (!std::is_void_v<R>) {
        return read_result<R>(c);
    }
}

const GuestEntry *lookup(u32 address);

}  // namespace detail

// A guest function called from C++ (still recompiled code, or a rewritten one called through the game's ABI).
template <u32 Address, typename Sig> struct Function;
template <u32 Address, typename R, typename... A>
struct Function<Address, R(A...)> {
    static constexpr u32 address = Address;
    R operator()(A... args) const {
        // (no static-local initializer: kept as a plain atomic, set on the first call)
        static std::atomic<const GuestEntry *> cached{nullptr};
        const GuestEntry *e = cached.load(std::memory_order_relaxed);
        if (!e) {
            e = detail::lookup(Address);
            cached.store(e, std::memory_order_relaxed);
        }
        return detail::call<R, A...>(e, Address, args...);
    }
};

// Calls the guest function at a run-time address (function pointers, virtual functions).
template <typename R, typename... A>
R call_address(u32 address, A... args) {
    return detail::call<R, A...>(detail::lookup(address), address, args...);
}

// A pointer to member function as the ARM C++ ABI stores it: the function, or for a virtual one its offset in the
// vtable; `adjust` is twice the this-adjustment, plus 1 for virtual.
struct MemberFunctionPointer {
    u32 function;
    s32 adjust;

    // The ABI's comparison: equal functions, and equal adjustments (which only matter for a null function when one of
    // the pointers is virtual).
    bool operator==(const MemberFunctionPointer &other) const {
        if (function != other.function) {
            return false;
        }
        if (function == 0 && ((adjust | other.adjust) & 1) == 0) {
            return true;
        }
        return adjust == other.adjust;
    }
};
GUEST_SIZE(MemberFunctionPointer, 8);

// Calls (object->*pointer)(args...) for a guest pointer to member function.
template <typename R, typename... A>
R call_member(const MemberFunctionPointer &pointer, gptr<void> object, A... args) {
    gptr<void> self = gptr<void>(object.addr() + (pointer.adjust >> 1));
    u32 target = pointer.function;
    if (pointer.adjust & 1) {
        target = *gptr<u32>(*self.cast<u32>() + pointer.function);  // through the vtable
    }
    return call_address<R>(target, self, args...);
}

// Lowers the guest stack pointer by `bytes` for the duration of a scope, like the frame of the original function
// (its pushes and locals): guest code called from the scope, and uninitialised locals in the frame, then sit at the
// addresses they had in the original. `at(offset)` is an address inside the frame, counted from the new stack pointer.
class StackFrame {
public:
    explicit StackFrame(u32 bytes) : saved_sp_(cpu()->r[13]) { cpu()->r[13] = saved_sp_ - bytes; }
    ~StackFrame() { cpu()->r[13] = saved_sp_; }
    StackFrame(const StackFrame &) = delete;
    StackFrame &operator=(const StackFrame &) = delete;
    template <typename T = void> gptr<T> at(u32 offset) const { return gptr<T>(cpu()->r[13] + offset); }

private:
    u32 saved_sp_;
};

// Space on the guest stack for the duration of a scope, for objects whose address is passed to guest code.
template <typename T>
class StackObject {
public:
    StackObject() : saved_sp_(cpu()->r[13]) {
        cpu()->r[13] = (saved_sp_ - u32(sizeof(T))) & ~7u;
        ptr_ = gptr<T>(cpu()->r[13]);
    }
    ~StackObject() { cpu()->r[13] = saved_sp_; }
    StackObject(const StackObject &) = delete;
    StackObject &operator=(const StackObject &) = delete;
    gptr<T> ptr() const { return ptr_; }
    T *operator->() const { return ptr_.get(); }
    T &operator*() const { return *ptr_; }

private:
    u32 saved_sp_;
    gptr<T> ptr_;
};

}  // namespace guest

// Replaces the guest function at `address` with the C++ function `fn`: a free function (`count_lives`, or a template
// specialization such as `lda<absolute>`) or a member function (`Player::update`, called with r0 as `this`).
// The recompiled original is kept as guest_gen_<address> (tools/overlay.py renames it).
#define GUEST_EXPORT(address, fn) GUEST_EXPORT_FRAMED(address, fn, 0)

// The same for a function whose callees must see the stack as the original leaves it: `pushed_registers` is the mask of
// the registers the original pushes first (bit n is register n, e.g. (1 << 4) | (1 << 5) | (1 << 14) for r4, r5, lr).
#define GUEST_EXPORT_FRAMED(address, fn, pushed_registers)                                                       \
    extern "C" void guest_gen_##address(CPU *, u32);                                                            \
    static guest::detail::Export guest_export_##address(                                                        \
        address, #fn, guest::detail::ret_of<guest::detail::FnTraits<decltype(&fn)>::Result>(),                   \
        &guest::detail::invoke<&fn, pushed_registers>, &guest_gen_##address);                                    \
    extern "C" void guest_entry_##address(CPU *c, u32 entry) { guest::detail::enter(guest_export_##address, c, entry); }
