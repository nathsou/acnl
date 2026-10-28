// An object made of several parts and owned objects (released together), plus a request state machine on the
// byte at 0x30, and a small "keep the greater" copy.
#include "guest/guest.hpp"

using guest::gptr;

namespace {

struct Part10 {
    u8 bytes[0xc];
};
struct Part68 {
    u8 bytes[0x68];
};
struct Part138 {
    u8 bytes[0xc];
};
struct Part144 {
    u8 flag;  // set by f_001379e4 (meaning not known yet)
    u8 unknown_01[11];
};

// Ten words copied as they are (eight floats and two words; meaning not known yet).
struct Transform {
    u32 words[10];
};
GUEST_SIZE(Transform, 0x28);

struct ComponentHolder {
    static constexpr u32 FLAG_150_SKIP_RELEASE = 8;

    u8 unknown_00[0x10];
    Part10 part_10;
    gptr<void> object_1c;
    gptr<void> object_20;  // has a vtable
    gptr<void> object_24;
    u8 active_28;
    u8 unknown_29[7];
    u8 request_30;
    u8 unknown_31[7];
    Transform transform_38;
    u8 busy_60;
    u8 result_61;
    u8 unknown_62[6];
    Part68 part_68;
    Part68 part_d0;
    Part138 part_138;
    Part144 part_144;
    u32 flags_150;
    u8 flag_154;
    u8 unknown_155[3];

    void release_objects();
    bool request_state(u32 kind, gptr<const Transform> transform);
};
GUEST_OFFSET(ComponentHolder, part_10, 0x10);
GUEST_OFFSET(ComponentHolder, object_1c, 0x1c);
GUEST_OFFSET(ComponentHolder, object_20, 0x20);
GUEST_OFFSET(ComponentHolder, object_24, 0x24);
GUEST_OFFSET(ComponentHolder, active_28, 0x28);
GUEST_OFFSET(ComponentHolder, request_30, 0x30);
GUEST_OFFSET(ComponentHolder, transform_38, 0x38);
GUEST_OFFSET(ComponentHolder, busy_60, 0x60);
GUEST_OFFSET(ComponentHolder, result_61, 0x61);
GUEST_OFFSET(ComponentHolder, part_68, 0x68);
GUEST_OFFSET(ComponentHolder, part_d0, 0xd0);
GUEST_OFFSET(ComponentHolder, part_138, 0x138);
GUEST_OFFSET(ComponentHolder, part_144, 0x144);
GUEST_OFFSET(ComponentHolder, flags_150, 0x150);
GUEST_OFFSET(ComponentHolder, flag_154, 0x154);

// Still recompiled code:
inline constexpr guest::Function<0x001379e4, void(Part144 &part)> part_144_update;
inline constexpr guest::Function<0x00135df0, gptr<void>(gptr<void> object)> object_24_finish;
inline constexpr guest::Function<0x0013796c, void(gptr<void> object)> object_1c_prepare_release;
inline constexpr guest::Function<0x001379b4, gptr<void>(gptr<void> object)> object_1c_finish;
inline constexpr guest::Function<0x002ffb64, void(gptr<void> memory)> free_memory;
inline constexpr guest::Function<0x002f75a0, gptr<void>(u32 size, gptr<void> heap, u32 alignment, u32 unknown)>
    allocate_plain;
inline constexpr guest::Function<0x003045a8, gptr<void>(gptr<void> heap)> heap_object_of;

inline guest::global<gptr<void>, 0x00975338> heap_global;

constexpr u32 ALLOCATE_UNKNOWN_ARGUMENT = 1;
constexpr u32 HEAP_ALLOCATE_SLOT = 6;
constexpr u32 OBJECT_20_SLOT_10 = 10;
constexpr u32 OBJECT_20_DESTRUCTOR_SLOT = 1;
constexpr u32 OBJECT_20_REQUEST_SLOT = 3;

u32 vtable_function(gptr<void> object, u32 slot) {
    return *gptr<u32>(*object.cast<u32>() + slot * 4);
}

}  // namespace

// Allocates from the given heap object; without one, from the global heap object, or plainly when there is none.
gptr<void> allocate_from_heap(u32 size, gptr<void> object, u32 alignment) {
    gptr<void> heap = heap_global;
    if (!heap) {
        return allocate_plain(size, heap, alignment, ALLOCATE_UNKNOWN_ARGUMENT);
    }
    if (!object) {
        object = heap_object_of(heap);
        if (!object) {
            return nullptr;
        }
    }
    return guest::call_address<gptr<void>>(vtable_function(object, HEAP_ALLOCATE_SLOT), object, size, alignment);
}
GUEST_EXPORT(0x00131280, allocate_from_heap);
GUEST_FUZZ(0x00131280, 200, [](guest::Fuzz &f) {
    f.arguments(f.pick<u32>({4, 0x20, 0x34, f.below(0x100) + 1}), gptr<void>(nullptr), f.pick<u32>({4, 0x20, 0x80}));
});

// Destroys and frees the owned objects (unless flagged to skip), then marks the holder inactive.
void ComponentHolder::release_objects() {
    if (flags_150 & FLAG_150_SKIP_RELEASE) {
        return;
    }
    if (!active_28) {
        return;
    }
    if (object_20) {
        gptr<void> object = object_20;
        guest::call_address<void>(vtable_function(object, OBJECT_20_SLOT_10), object, 0u);
        if (object_20) {
            object = object_20;
            guest::call_address<void>(vtable_function(object, OBJECT_20_DESTRUCTOR_SLOT), object);
        }
        object_20 = nullptr;
    }
    if (object_24) {
        free_memory(object_24_finish(object_24));
        object_24 = nullptr;
    }
    object_1c_prepare_release(object_1c);
    if (object_1c) {
        free_memory(object_1c_finish(object_1c));
    }
    object_1c = nullptr;
    active_28 = 0;
}
GUEST_EXPORT(0x0013138c, ComponentHolder::release_objects);
GUEST_FUZZ(0x0013138c, 200, [](guest::Fuzz &f) {
    auto holder = f.object<ComponentHolder>();
    if (f.below(2)) {
        holder->flags_150 |= ComponentHolder::FLAG_150_SKIP_RELEASE;
    } else {
        holder->flags_150 &= ~ComponentHolder::FLAG_150_SKIP_RELEASE;
        holder->active_28 = 0;
    }
    f.arguments(holder);
});

// Asks for a state (kind), optionally with a transform, and reports whether the previous request of that kind
// completed with a result of 1.
bool ComponentHolder::request_state(u32 kind, gptr<const Transform> transform) {
    if (request_30 == 0) {
        part_144_update(part_144);
        if (part_144.flag != 0 && request_30 == 0) {
            return false;
        }
        request_30 = u8(kind);
        if (transform) {
            transform_38 = *transform;
        }
        busy_60 = 1;
        result_61 = 0;
        guest::call_address<void>(vtable_function(object_20, OBJECT_20_REQUEST_SLOT), object_20, 1u, 0u);
    }
    if (request_30 != kind || busy_60 != 0) {
        return false;
    }
    u8 result = result_61;
    request_30 = 0;
    return result == 1;
}
GUEST_EXPORT(0x00131470, ComponentHolder::request_state);
GUEST_FUZZ(0x00131470, 200, [](guest::Fuzz &f) {
    auto holder = f.object<ComponentHolder>();
    holder->request_30 = u8(1 + f.below(255));
    u32 kind = f.below(2) ? u32(holder->request_30) : f.number();
    f.arguments(holder, kind, gptr<const Transform>(nullptr));
});

namespace {

// A value with a priority byte (meaning not known yet).
struct PrioritizedValue {
    u8 priority;
    u8 unknown_01[3];
    u32 value;
    u8 byte_8;
    u8 byte_9;
    u8 unknown_0a[2];
};
GUEST_SIZE(PrioritizedValue, 12);

}  // namespace

// Copies other into target when other's priority is higher.
void take_if_higher_priority(PrioritizedValue &target, const PrioritizedValue &other) {
    if (other.priority <= target.priority) {
        return;
    }
    target.priority = other.priority;
    target.value = other.value;
    target.byte_8 = other.byte_8;
    target.byte_9 = other.byte_9;
}
GUEST_EXPORT(0x00131530, take_if_higher_priority);
GUEST_FUZZ(0x00131530, 200, [](guest::Fuzz &f) {
    f.arguments(f.object<PrioritizedValue>(), f.object<PrioritizedValue>());
});
