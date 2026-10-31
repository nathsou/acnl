// ssys::ma::lyt::Animation: a layout animation driving an optional target object.
#include "guest/guest.hpp"

using guest::gptr;

namespace {

// The object an animation drives (polymorphic; only the field the animation writes is known).
struct AnimationTarget {
    gptr<const u32> vtable;
    u8 unknown_04[0xc];
    float value_10;  // receives the animation's value_08
};
GUEST_OFFSET(AnimationTarget, value_10, 0x10);

struct Animation {
    static constexpr u32 VTABLE = 0x00906210;

    gptr<const u32> vtable;
    float unknown_04;
    float value_08;  // mirrored into the target
    float value_0c;
    float unknown_10;
    u8 unknown_14;
    u8 unknown_15[3];
    gptr<AnimationTarget> target;
    u32 unknown_1c;
    gptr<void> owned_20;

    void set_value(float value);
    void setup(u32 unknown_byte, float unknown_04_value, float unknown_10_value, float value);
};
GUEST_OFFSET(Animation, unknown_04, 0x04);
GUEST_OFFSET(Animation, value_08, 0x08);
GUEST_OFFSET(Animation, value_0c, 0x0c);
GUEST_OFFSET(Animation, unknown_10, 0x10);
GUEST_OFFSET(Animation, unknown_14, 0x14);
GUEST_OFFSET(Animation, target, 0x18);
GUEST_OFFSET(Animation, owned_20, 0x20);

// The lower bound setup() applies to its value: a constant in the code's literal pool (value not known here).
inline guest::global<float, 0x00569834> setup_min_value;

inline constexpr guest::Function<0x0013ad90, void(gptr<AnimationTarget> target)> release_target;
inline constexpr guest::Function<0x002f88b8, void(gptr<void> owned)> release_owned_20;

}  // namespace

// Sets the value (both copies), and the target's.
void Animation::set_value(float value) {
    value_0c = value;
    value_08 = value;
    if (target) {
        target->value_10 = value;
    }
}
GUEST_EXPORT(0x005697e0, Animation::set_value);

// Sets up the animation; the value is raised to setup_min_value.
void Animation::setup(u32 unknown_byte, float unknown_04_value, float unknown_10_value, float value) {
    float min = *setup_min_value;
    if (value < min) {
        value = min;
    }
    unknown_04 = unknown_04_value;
    value_08 = value;
    unknown_10 = unknown_10_value;
    unknown_14 = u8(unknown_byte);
    value_0c = value;
    if (target) {
        *gptr<u32>(guest::addr_of(target->value_10).addr()) = *gptr<u32>(guest::addr_of(value_08).addr());
    }
}
GUEST_EXPORT(0x005697f8, Animation::setup);

// The destructor: destroys and releases the target and the owned object.
Animation &destroy_animation(Animation &self) {
    self.vtable = gptr<const u32>(Animation::VTABLE);
    if (self.target) {
        guest::call_address<void>(self.target->vtable[0], self.target);
        release_target(self.target);
        self.target = nullptr;
        release_owned_20(self.owned_20);
        self.owned_20 = nullptr;
    }
    return self;
}
GUEST_EXPORT(0x0056988c, destroy_animation);
