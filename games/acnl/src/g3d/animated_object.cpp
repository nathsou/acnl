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
constexpr u8 STATE_EXCLUDED = 1;

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

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

namespace {

constexpr u32 WIDTH_FUNCTION = 0x007482bc;   // GridRect::width: returns [this+8] - [this] + 1
constexpr u32 FLAG_14_FUNCTION = 0x00746fdc;  // returns whether [this+0x14] is non-zero

// An object whose virtual `slot` returns `result` (GridRect::width reads the object's words 0 and 2).
gptr<AnimatedObject> object_returning(guest::Fuzz &f, u32 slot, u32 result) {
    auto object = f.object<AnimatedObject>();
    auto vtable = f.allocate(0x40).cast<u32>();
    vtable[slot] = WIDTH_FUNCTION;
    object->vtable = vtable;
    object->unknown_08 = result + vtable.addr() - 1;
    return object;
}

float some_float(guest::Fuzz &f) {
    return f.pick<float>({-1.0f, 0.0f, 1.0f, 0.5f, f.real()});
}

gptr<AnimationData> some_animation_data(guest::Fuzz &f) {
    auto data = f.object<AnimationData>();
    data->value_38 = some_float(f);
    data->value_40 = some_float(f);
    data->value_44 = f.below(2) ? data->value_38 : some_float(f);
    return data;
}

gptr<AnimatedObject> some_animated_object(guest::Fuzz &f) {
    auto object = object_returning(f, ANIMATION_DATA_SLOT, some_animation_data(f).addr());
    object->state_04 = f.below(4) == 0 ? STATE_EXCLUDED : u8(f.below(4));
    return object;
}

}  // namespace

GUEST_FUZZ(0x0074619c, 200, [](guest::Fuzz &f) { f.arguments(some_animated_object(f)); });
GUEST_FUZZ(0x007461b4, 200, [](guest::Fuzz &f) { f.arguments(some_animated_object(f)); });

GUEST_FUZZ(0x007461d4, 300, [](guest::Fuzz &f) {
    auto holder = f.object<TypeCastHolder>();
    if (f.below(5) == 0) {
        holder->object = nullptr;
        f.arguments(holder);
        return;
    }
    u32 type;
    switch (f.below(3)) {
    case 0:
        type = TARGET_TYPE_ADDRESS;
        break;
    default: {
        // a short chain that ends in the target type, or in null
        gptr<TypeInfo> next = f.below(2) ? gptr<TypeInfo>(TARGET_TYPE_ADDRESS) : gptr<TypeInfo>(nullptr);
        for (u32 n = f.below(3) + 1; n > 0; n--) {
            auto node = f.object<TypeInfo>();
            node->base = next;
            next = node;
        }
        type = next.addr();
        break;
    }
    }
    auto object = object_returning(f, TYPE_INFO_SLOT, type);
    holder->object = object.cast<TypedObject>();
    f.arguments(holder);
});

GUEST_FUZZ(0x00746288, 300, [](guest::Fuzz &f) {
    auto anim = f.object<g3d::GroupTransformAnim>();
    auto vtable = f.allocate(0x40).cast<u32>();
    vtable[TEST_QUERY_SLOT] = FLAG_14_FUNCTION;
    for (u32 i = 0; i < g3d::GroupTransformAnim::CHILD_COUNT; i++) {
        if (f.below(4) == 0) {
            anim->children[i] = nullptr;
            continue;
        }
        auto child = f.object<GroupChild>();
        child->vtable = vtable;
        if (f.below(3) != 0) {
            child->flag_14 = 0;
        }
        anim->children[i] = child;
    }
    f.arguments(anim, f.number());
});
