// Guest memory as C++ types.
//
// The game's 32-bit address space lives in one host reservation (g_mem). A guest pointer is a 32-bit address in
// that space, so it cannot be a host pointer: structs that the game keeps in memory store their pointers as
// gptr<T> (4 bytes, the same layout as on the console) and every other field with its usual fixed-size type.
//
//     struct Node { gptr<Node> next; u32 value; };
//     gptr<Node> n = ...;
//     n->value += 1;          // reads and writes guest memory
//     n = n->next;
//
// Objects in guest memory are accessed through host references (n.get(), *n, n->field) that point into g_mem;
// guest::addr_of(obj) goes back from such a reference to the guest address.
#pragma once

#include <cstddef>
#include <cstring>
#include <string_view>
#include <type_traits>

#include "cpu.h"  // 3dsrecomp runtime: CPU, g_mem, u8..s64

namespace guest {

template <typename T>
class gptr {
public:
    constexpr gptr() = default;
    constexpr explicit gptr(u32 address) : addr_(address) {}
    constexpr gptr(std::nullptr_t) {}
    template <typename U, typename = std::enable_if_t<std::is_convertible_v<U *, T *>>>
    constexpr gptr(gptr<U> other) : addr_(other.addr()) {}

    constexpr u32 addr() const { return addr_; }
    T *get() const { return reinterpret_cast<T *>(g_mem + addr_); }
    T *operator->() const { return get(); }
    template <typename U = T, typename = std::enable_if_t<!std::is_void_v<U>>>
    U &operator*() const { return *get(); }
    template <typename U = T, typename = std::enable_if_t<!std::is_void_v<U>>>
    U &operator[](std::ptrdiff_t i) const { return get()[i]; }

    constexpr explicit operator bool() const { return addr_ != 0; }
    constexpr bool operator==(const gptr &o) const = default;
    constexpr bool operator==(std::nullptr_t) const { return addr_ == 0; }

    // pointer arithmetic in elements, like a host pointer (void: in bytes)
    constexpr gptr operator+(std::ptrdiff_t n) const { return gptr(addr_ + u32(n * stride())); }
    constexpr gptr operator-(std::ptrdiff_t n) const { return gptr(addr_ - u32(n * stride())); }
    constexpr std::ptrdiff_t operator-(gptr o) const { return std::ptrdiff_t(s32(addr_ - o.addr_)) / stride(); }
    gptr &operator+=(std::ptrdiff_t n) { return *this = *this + n; }
    gptr &operator-=(std::ptrdiff_t n) { return *this = *this - n; }
    gptr &operator++() { return *this += 1; }
    gptr operator++(int) { gptr t = *this; *this += 1; return t; }

    template <typename U>
    constexpr gptr<U> cast() const { return gptr<U>(addr_); }

private:
    static constexpr std::ptrdiff_t stride() {
        if constexpr (std::is_void_v<T> || std::is_function_v<T>) return 1;
        else return sizeof(T);
    }
    u32 addr_ = 0;
};
static_assert(sizeof(gptr<int>) == 4, "guest pointers are 32-bit");

// the guest address of an object that lives in guest memory
template <typename T>
inline gptr<T> addr_of(T *host) {
    return gptr<T>(u32(reinterpret_cast<const u8 *>(host) - g_mem));
}
template <typename T>
inline gptr<T> addr_of(T &host) { return addr_of(&host); }

// a NUL-terminated guest string
inline std::string_view str(gptr<const char> s) { return s ? std::string_view(s.get()) : std::string_view(); }

// A string literal copied to guest memory (once), for passing to guest functions: fopen("data.bin"_g, "rb"_g)
gptr<const char> guest_string(const char *text, size_t length);

// A global variable of the game, at a fixed guest address:
//     inline guest::global<Settings, 0x0013f000> settings;
//     settings->volume = 3;
template <typename T, u32 Address>
struct global {
    static constexpr u32 address = Address;
    T *get() const { return reinterpret_cast<T *>(g_mem + Address); }
    T *operator->() const { return get(); }
    T &operator*() const { return *get(); }
    operator T &() const { return *get(); }
    template <typename U>
    T &operator=(U &&v) const { return *get() = std::forward<U>(v); }
    auto &operator[](std::ptrdiff_t i) const { return (*get())[i]; }
    constexpr gptr<T> ptr() const { return gptr<T>(Address); }
};

// Layout checks for structs mirrored from the game: GUEST_LAYOUT(Player, 0x60, money, 0x10, name, 0x20)
#define GUEST_SIZE(type, size) static_assert(sizeof(type) == (size), #type " has the wrong size")
#define GUEST_OFFSET(type, field, off) static_assert(offsetof(type, field) == (off), #type "::" #field " is misplaced")

}  // namespace guest

inline guest::gptr<const char> operator""_g(const char *text, size_t length) { return guest::guest_string(text, length); }
