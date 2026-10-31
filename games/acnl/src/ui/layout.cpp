#include "guest/guest.hpp"

namespace {

// An object with a vtable whose slot 1 (offset 4) destroys it and slot 2 (offset 8) closes it.
struct GuestObject {
    gptr<u32> vtable;
    u8 unknown_04[0x78];
    s32 state;  // 3 and 4 are the states in which it may be released
};
GUEST_OFFSET(GuestObject, state, 0x7c);

constexpr u32 VTABLE_DESTROY = 1;
constexpr u32 VTABLE_CLOSE = 2;
constexpr s32 STATE_RELEASABLE_3 = 3;
constexpr s32 STATE_RELEASABLE_4 = 4;

struct Singleton5c33c {
    u8 flag_0;
    u8 unknown_01[2];
    u8 flag_3;
    u8 unknown_04[8];
    gptr<GuestObject> object;
};
GUEST_OFFSET(Singleton5c33c, flag_3, 3);
GUEST_OFFSET(Singleton5c33c, object, 0xc);

struct Holder {
    u8 unknown_00[0x20];
    gptr<GuestObject> object;
};
GUEST_OFFSET(Holder, object, 0x20);

struct State94e3ac {
    u32 unknown_00[2];
    s32 count;
};
GUEST_OFFSET(State94e3ac, count, 8);

inline guest::global<Singleton5c33c, 0x0095c33c> singleton_5c33c;
inline guest::global<gptr<Holder>, 0x0094ed4c> holder_pointer;
inline guest::global<State94e3ac, 0x0094e3ac> state_94e3ac;
inline guest::global<u32, 0x00975338> value_975338;

inline constexpr guest::Function<0x0012cb24, u32()> call_12cb24;
inline constexpr guest::Function<0x0012cb3c, void(u32 value)> call_12cb3c;
inline constexpr guest::Function<0x003045a8, u32(u32 arg)> call_3045a8;

constexpr u32 FLAGS_OFFSET_70 = 0x70;  // a halfword of flags in what 0x3045a8 returns
constexpr u16 FLAG_BIT_0 = 1;

bool is_releasable(const GuestObject &object) {
    return object.state == STATE_RELEASABLE_3 || object.state == STATE_RELEASABLE_4;
}

// Closes the object, then destroys it if it is still there.
void close_and_destroy(gptr<GuestObject> &slot) {
    gptr<GuestObject> object = slot;
    guest::call_address<void>(object->vtable[VTABLE_CLOSE], object);
    object = slot;
    if (object) {
        guest::call_address<void>(object->vtable[VTABLE_DESTROY], object);
    }
    slot = nullptr;
}

}  // namespace

bool singleton_5c33c_has_object() {
    return bool(singleton_5c33c->object);
}
GUEST_EXPORT(0x00125e54, singleton_5c33c_has_object);

// Releases the object once it reaches a releasable state, and refreshes a flag of whatever 0x3045a8 returns.
void release_singleton_5c33c_object() {
    Singleton5c33c &s = *singleton_5c33c;
    if (!s.object || !is_releasable(*s.object)) {
        return;
    }
    if (s.flag_0 != 0) {
        s.flag_0 = 0;
    }
    close_and_destroy(s.object);
    u32 value = call_12cb24();
    if (value != 0) {
        call_12cb3c(value);
    }
    u32 target = call_3045a8(*value_975338);
    u16 &flags = *gptr<u16>(target + FLAGS_OFFSET_70);
    if (s.flag_3 != 0) {
        flags = u16(flags | FLAG_BIT_0);
    } else {
        flags = u16(flags & ~FLAG_BIT_0);
    }
}
GUEST_EXPORT(0x00125e6c, release_singleton_5c33c_object);

bool state_94e3ac_count_positive() {
    return state_94e3ac->count > 0;
}
GUEST_EXPORT(0x00125f08, state_94e3ac_count_positive);

// True when there is nothing left to release; false when the object is not in a releasable state yet.
bool release_holder_object() {
    gptr<Holder> holder = *holder_pointer;
    if (!holder || !holder->object) {
        return true;
    }
    if (!is_releasable(*holder->object)) {
        return false;
    }
    close_and_destroy(holder->object);
    return true;
}
GUEST_EXPORT(0x00125f24, release_holder_object);
