// Objects with four animation slots (at 0xe0): bounds-checked accessors; a limit check.
#include "guest/guest.hpp"

using guest::gptr;

namespace {

// A slot is an AnimatedObject / TypeCastHolder (games/acnl/src/g3d/animated_object.cpp): vtable, a state byte, the
// held object.
struct AnimationSlot {
    gptr<u32> vtable;
    u8 state;
    u8 unknown_05[3];
    u32 object;
    u8 unknown_0c[0xc];
};
GUEST_OFFSET(AnimationSlot, state, 4);
GUEST_SIZE(AnimationSlot, 0x18);

inline constexpr guest::Function<0x007461b4, float(gptr<AnimationSlot> slot)> slot_animation_value_38;
inline constexpr guest::Function<0x00745f8c, bool(gptr<AnimationSlot> slot, float frame)> slot_test_frame;
inline constexpr guest::Function<0x007461d4, u32(gptr<AnimationSlot> slot)> slot_object_if_of_target_type;
inline constexpr guest::Function<0x00746854, u32(u32 object_70)> object_test_70;

}  // namespace

struct AnimationSlots {
    static constexpr u32 SLOT_COUNT = 4;

    u8 unknown_00[0xe0];
    AnimationSlot slots[SLOT_COUNT];

    float animation_value_38(u32 index);
    bool test_frame(u32 index, float frame);
    u8 slot_state(u32 index);
    u32 target_object_not_70(u32 index);
};
GUEST_OFFSET(AnimationSlots, slots, 0xe0);

// The slot's animation value 38, 0 for an index out of range.
float AnimationSlots::animation_value_38(u32 index) {
    if (index >= SLOT_COUNT) {
        return 0.0f;
    }
    return slot_animation_value_38(guest::addr_of(&slots[index]));
}
GUEST_EXPORT(0x0070acac, AnimationSlots::animation_value_38);

// The slot's frame test (0x745f8c), false for an index out of range.
bool AnimationSlots::test_frame(u32 index, float frame) {
    if (index >= SLOT_COUNT) {
        return false;
    }
    return slot_test_frame(guest::addr_of(&slots[index]), frame);
}
GUEST_EXPORT(0x0070acd0, AnimationSlots::test_frame);

u8 AnimationSlots::slot_state(u32 index) {
    if (index >= SLOT_COUNT) {
        return 0;
    }
    return slots[index].state;
}
GUEST_EXPORT(0x0070acf8, AnimationSlots::slot_state);

// When the slot holds an object of the target type: the inverse of test 0x746854 on its field 0x70; else 0.
u32 AnimationSlots::target_object_not_70(u32 index) {
    if (index >= SLOT_COUNT) {
        return 0;
    }
    u32 object = slot_object_if_of_target_type(guest::addr_of(&slots[index]));
    if (object == 0) {
        return 0;
    }
    constexpr u32 FIELD_70 = 0x70;  // a member object whose type is not known yet
    return object_test_70(object + FIELD_70) ^ 1;
}
GUEST_EXPORT(0x0070ae4c, AnimationSlots::target_object_not_70);

namespace {

constexpr u16 LIMIT_72 = 0x276;  // not known yet

struct LimitedObject {
    u8 unknown_00[0x72];
    u16 value_72;
    u8 unknown_74[0xcc];
    u8 blocked;
};
GUEST_OFFSET(LimitedObject, value_72, 0x72);
GUEST_OFFSET(LimitedObject, blocked, 0x140);

}  // namespace

// Not blocked and the value at 0x72 below 0x276.
bool is_below_limit_72(gptr<LimitedObject> object) {
    return !object->blocked && object->value_72 < LIMIT_72;
}
GUEST_EXPORT(0x0070ae20, is_below_limit_72);
