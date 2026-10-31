// Small accessors of objects whose virtual 3 returns an animation data block, and two virtual-call helpers.
#include "guest/guest.hpp"

using guest::gptr;

namespace {

// The block an AnimatedObject's virtual 3 returns (only the touched floats are named).
struct AnimationData {
    u8 unknown_00[0x38];
    float value_38;
    u8 unknown_3c[4];
    float value_40;
    float value_44;
};
GUEST_OFFSET(AnimationData, value_38, 0x38);
GUEST_OFFSET(AnimationData, value_40, 0x40);
GUEST_OFFSET(AnimationData, value_44, 0x44);

constexpr u32 ANIMATION_DATA_SLOT = 3;  // vtable slot returning the AnimationData

}  // namespace

struct AnimatedObject {
    gptr<u32> vtable;
    u8 state_04;
    u8 unknown_05[3];
    u32 unknown_08;

    gptr<AnimationData> animation_data() {
        return guest::call_address<gptr<AnimationData>>(vtable[ANIMATION_DATA_SLOT], gptr<AnimatedObject>(guest::addr_of(this)));
    }

    float animation_value_40();
    float animation_value_38();
};
GUEST_OFFSET(AnimatedObject, state_04, 4);

float AnimatedObject::animation_value_40() {
    return animation_data()->value_40;
}
GUEST_EXPORT(0x0074619c, AnimatedObject::animation_value_40);

float AnimatedObject::animation_value_38() {
    return animation_data()->value_38;
}
GUEST_EXPORT(0x007461b4, AnimatedObject::animation_value_38);

namespace {

// The root of the type information chain: each node's first word is its base.
struct TypeInfo {
    gptr<TypeInfo> base;
};

constexpr u32 TARGET_TYPE_ADDRESS = 0x00952a70;
constexpr u32 TYPE_INFO_SLOT = 2;  // vtable slot returning the object's TypeInfo

struct TypedObject {
    gptr<u32> vtable;
    u8 unknown_04[4];
    u32 unknown_08;
};

}  // namespace

struct TypeCastHolder {
    u8 unknown_00[8];
    gptr<TypedObject> object;  // may be null

    gptr<TypedObject> object_if_of_target_type();
};
GUEST_OFFSET(TypeCastHolder, object, 8);

// The held object when its type chain reaches the target type, else null (a checked downcast).
gptr<TypedObject> TypeCastHolder::object_if_of_target_type() {
    if (!object) {
        return nullptr;
    }
    gptr<TypeInfo> type = guest::call_address<gptr<TypeInfo>>(object->vtable[TYPE_INFO_SLOT], object);
    do {
        if (type.addr() == TARGET_TYPE_ADDRESS) {
            return object;
        }
        type = type->base;
    } while (type);
    return nullptr;
}
GUEST_EXPORT(0x007461d4, TypeCastHolder::object_if_of_target_type);

namespace {

constexpr u32 TEST_QUERY_SLOT = 7;  // vtable slot (offset 0x1c) taking an argument, result non-zero: yes

struct GroupChild {
    gptr<u32> vtable;
    u8 unknown_04[0x10];
    u32 flag_14;
};

}  // namespace

namespace g3d {

struct GroupTransformAnim {
    static constexpr u32 CHILD_COUNT = 4;

    u8 unknown_00[0x10];
    gptr<GroupChild> children[CHILD_COUNT];  // may be null

    // virtual 7: true as soon as one child's virtual 7 accepts the argument.
    bool virtual_7(u32 argument);
};
GUEST_OFFSET(GroupTransformAnim, children, 0x10);

bool GroupTransformAnim::virtual_7(u32 argument) {
    for (u32 i = 0; i < CHILD_COUNT; i++) {
        gptr<GroupChild> child = children[i];
        if (!child) {
            continue;
        }
        if (guest::call_address<u32>(child->vtable[TEST_QUERY_SLOT], child, argument) != 0) {
            return true;
        }
    }
    return false;
}

}  // namespace g3d
GUEST_EXPORT(0x00746288, g3d::GroupTransformAnim::virtual_7);

namespace {

}  // namespace
