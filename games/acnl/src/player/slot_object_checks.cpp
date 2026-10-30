// Questions about what the objects of the player slots are doing (the byte at 0x1a9 of the object is its state).
#include "player/slot_object.hpp"

using guest::gptr;

namespace {

inline constexpr guest::Function<0x003170f8, bool(u32 kind, u32 strict)> talk_state_matches;

constexpr u32 SLOT_COUNT = 4;
constexpr u32 MAIN_OBJECT_ID = 4;  // a number of 4 or more stands for the main object's slot
constexpr u32 EXCLUDE_IDLE = 0;    // look_up_object's second argument: objects without a state are not returned
constexpr u32 INCLUDE_IDLE = 1;
constexpr u32 NOT_STRICT = 0;
constexpr u32 TALK_KIND = 0xe;
constexpr u8 NO_BYTE_1AB = 6;  // main_object_position_and_angles returns it without an object

// The states the checks name (what they stand for is not known yet).
constexpr u8 STATE_14 = 0x14, STATE_15 = 0x15, STATE_16 = 0x16, STATE_2B = 0x2b, STATE_2F = 0x2f, STATE_36 = 0x36;
constexpr u8 STATE_RANGE_A_FIRST = 0x0f, STATE_RANGE_A_LAST = 0x12;
constexpr u8 STATE_RANGE_B_FIRST = 0x17, STATE_RANGE_B_LAST = 0x18;
constexpr u8 STATE_74 = 0x74, STATE_76 = 0x76;
constexpr u8 STATE_NOT_TALK_A = 0x3a, STATE_NOT_TALK_B = 0x89;
constexpr u8 STATE_WITH_FLAG_171 = 0xea;

u32 some_id(guest::Fuzz &f) {
    return f.pick<u32>({0, 1, 2, 3, 4, 7, 0xffffffffu});
}

template <u8 STATE>
bool slot_object_in_state(u32 id) {
    gptr<SlotObject> object = look_up_object(id, EXCLUDE_IDLE);
    return object && object->state_1a9 == STATE;
}

}  // namespace

GUEST_EXPORT(0x005c0f74, slot_object_in_state<STATE_14>);
GUEST_EXPORT(0x005c0fdc, slot_object_in_state<STATE_15>);
GUEST_EXPORT(0x005c1060, slot_object_in_state<STATE_16>);
GUEST_EXPORT(0x005c209c, slot_object_in_state<STATE_2F>);
GUEST_EXPORT(0x005c2950, slot_object_in_state<STATE_2B>);
GUEST_FUZZ(0x005c0f74, 100, [](guest::Fuzz &f) { f.arguments(some_id(f)); });
GUEST_FUZZ(0x005c0fdc, 100, [](guest::Fuzz &f) { f.arguments(some_id(f)); });
GUEST_FUZZ(0x005c1060, 100, [](guest::Fuzz &f) { f.arguments(some_id(f)); });
GUEST_FUZZ(0x005c209c, 100, [](guest::Fuzz &f) { f.arguments(some_id(f)); });
GUEST_FUZZ(0x005c2950, 100, [](guest::Fuzz &f) { f.arguments(some_id(f)); });

// Whether the main object is in state 0x36.
bool main_object_in_state_36() {
    return slot_object_in_state<STATE_36>(MAIN_OBJECT_ID);
}
GUEST_EXPORT(0x005c28f0, main_object_in_state_36);
GUEST_FUZZ(0x005c28f0, 50, [](guest::Fuzz &f) { f.arguments(); });

// Whether the slot's object is in one of the states 0x0f to 0x12.
bool slot_object_in_states_0f_to_12(u32 id) {
    gptr<SlotObject> object = look_up_object(id, EXCLUDE_IDLE);
    return object && object->state_1a9 >= STATE_RANGE_A_FIRST && object->state_1a9 <= STATE_RANGE_A_LAST;
}
GUEST_EXPORT(0x005c0fa0, slot_object_in_states_0f_to_12);
GUEST_FUZZ(0x005c0fa0, 100, [](guest::Fuzz &f) { f.arguments(some_id(f)); });

// Whether the slot's object is in state 0x17 or 0x18.
bool slot_object_in_states_17_to_18(u32 id) {
    gptr<SlotObject> object = look_up_object(id, EXCLUDE_IDLE);
    return object && object->state_1a9 >= STATE_RANGE_B_FIRST && object->state_1a9 <= STATE_RANGE_B_LAST;
}
GUEST_EXPORT(0x005c1034, slot_object_in_states_17_to_18);
GUEST_FUZZ(0x005c1034, 100, [](guest::Fuzz &f) { f.arguments(some_id(f)); });

// Whether the slot has an object that is doing something.
bool slot_object_is_active(u32 id) {
    return look_up_object(id, EXCLUDE_IDLE) != nullptr;
}
GUEST_EXPORT(0x005c28cc, slot_object_is_active);
GUEST_FUZZ(0x005c28cc, 100, [](guest::Fuzz &f) { f.arguments(some_id(f)); });

// How many of the four slots have an object that is doing something.
u32 count_active_slot_objects() {
    u32 count = 0;
    for (u32 slot = 0; slot < SLOT_COUNT; slot++) {
        if (look_up_object(slot, EXCLUDE_IDLE)) {
            count++;
        }
    }
    return count;
}
GUEST_EXPORT(0x005c1d80, count_active_slot_objects);
GUEST_FUZZ(0x005c1d80, 50, [](guest::Fuzz &f) { f.arguments(); });

// Whether the slot's object has flag 5 of byte 0x171 and is in state 0xea (idle objects count).
bool slot_object_has_flag_171_and_state_ea(u32 id) {
    gptr<SlotObject> object = look_up_object(id, INCLUDE_IDLE);
    return object && (object->flags_171 & SlotObject::FLAGS_171_BIT_5) != 0 && object->state_1a9 == STATE_WITH_FLAG_171;
}
GUEST_EXPORT(0x005c5eb8, slot_object_has_flag_171_and_state_ea);
GUEST_FUZZ(0x005c5eb8, 100, [](guest::Fuzz &f) { f.arguments(some_id(f)); });

// While talking (the state of kind 0xe matches), whether the main object (idle ones count) exists and is in neither
// of the states 0x3a and 0x89.
bool main_object_in_talk_other_state() {
    if (!talk_state_matches(TALK_KIND, NOT_STRICT)) {
        return false;
    }
    gptr<SlotObject> object = look_up_object(MAIN_OBJECT_ID, INCLUDE_IDLE);
    if (!object) {
        return false;
    }
    return object->state_1a9 != STATE_NOT_TALK_A && object->state_1a9 != STATE_NOT_TALK_B;
}
GUEST_EXPORT(0x005c1348, main_object_in_talk_other_state);
GUEST_FUZZ(0x005c1348, 50, [](guest::Fuzz &f) { f.arguments(); });

// Whether the main object (idle ones count) is in state 0x74 and has flag 2 of byte 0x17c.
bool main_object_in_state_74_with_flag() {
    gptr<SlotObject> object = look_up_object(MAIN_OBJECT_ID, INCLUDE_IDLE);
    return object && object->state_1a9 == STATE_74 && (object->flags_17c & SlotObject::FLAGS_17C_BIT_2) != 0;
}
GUEST_EXPORT(0x005c7f50, main_object_in_state_74_with_flag);
GUEST_FUZZ(0x005c7f50, 50, [](guest::Fuzz &f) { f.arguments(); });

// Whether the main object (idle ones count) is in state 0x76 and has flag 1 of byte 0x17c.
bool main_object_in_state_76_with_flag() {
    gptr<SlotObject> object = look_up_object(MAIN_OBJECT_ID, INCLUDE_IDLE);
    return object && object->state_1a9 == STATE_76 && (object->flags_17c & SlotObject::FLAGS_17C_BIT_1) != 0;
}
GUEST_EXPORT(0x005c7f8c, main_object_in_state_76_with_flag);
GUEST_FUZZ(0x005c7f8c, 50, [](guest::Fuzz &f) { f.arguments(); });

// The object, when it has flag 1 of byte 0x66 but not flag 5.
gptr<SlotObject> slot_object_if_flags_66_bit_1_without_bit_5(u32 id, u32 include_idle) {
    gptr<SlotObject> object = look_up_object(id, include_idle);
    if (object && (object->flags_66 & SlotObject::FLAGS_66_BIT_1) != 0 && (object->flags_66 & SlotObject::FLAGS_66_BIT_5) == 0) {
        return object;
    }
    return gptr<SlotObject>(0u);
}
GUEST_EXPORT(0x005c3d4c, slot_object_if_flags_66_bit_1_without_bit_5);
GUEST_FUZZ(0x005c3d4c, 100, [](guest::Fuzz &f) { f.arguments(some_id(f), f.below(2)); });

// Copies the position of the slot's object and its facing to the outputs and reports whether the slot has one.
bool get_slot_object_position(Float3 &position, u16 &facing, u32 id, u32 include_idle) {
    gptr<SlotObject> object = look_up_object(id, include_idle);
    if (!object) {
        return false;
    }
    position = object->position;
    facing = object->angles[1];
    return true;
}
GUEST_EXPORT(0x005c7cdc, get_slot_object_position);
GUEST_FUZZ(0x005c7cdc, 100, [](guest::Fuzz &f) {
    f.arguments(f.object<Float3>(), f.object<u16>(), some_id(f), f.below(2));
});

// The main object's position (of the object even when idle) and its three angles to the outputs, either of which may be
// null; the angles are zero without an object that is doing something. Returns byte 0x1ab of that object, 6 without one.
u32 main_object_position_and_angles(gptr<Float3> position, gptr<u16> angles) {
    gptr<SlotObject> active = look_up_object(MAIN_OBJECT_ID, EXCLUDE_IDLE);
    if (position) {
        gptr<SlotObject> any = look_up_object(MAIN_OBJECT_ID, INCLUDE_IDLE);
        if (any) {
            *position = any->position;
        }
    }
    if (angles) {
        for (u32 axis = 0; axis < 3; axis++) {
            angles[axis] = active ? active->angles[axis] : 0;
        }
    }
    return active ? active->byte_1ab : NO_BYTE_1AB;
}
GUEST_EXPORT(0x005c7048, main_object_position_and_angles);
GUEST_FUZZ(0x005c7048, 100, [](guest::Fuzz &f) {
    f.arguments(f.below(4) == 0 ? gptr<Float3>(0u) : f.object<Float3>(), f.below(4) == 0 ? gptr<u16>(0u) : f.allocate(6).cast<u16>());
});

namespace {

// Parts of the object whose addresses are asked for (what they hold is not known yet).
constexpr u32 PART_1B4_OFFSET = 0x1b4;
constexpr u32 PART_424_OFFSET = 0x424;
constexpr u32 PART_5EC_OFFSET = 0x5ec;

gptr<u8> address_in_object(gptr<SlotObject> object, u32 offset) {
    return object ? object.cast<u8>() + offset : gptr<u8>(0u);
}

}  // namespace

// The address of the part at 0x1b4 of the slot's object (idle objects count), null without an object.
gptr<u8> slot_object_part_1b4(u32 id) {
    return address_in_object(look_up_object(id, INCLUDE_IDLE), PART_1B4_OFFSET);
}
GUEST_EXPORT(0x005c0f5c, slot_object_part_1b4);
GUEST_EXPORT(0x005c1330, slot_object_part_1b4);
GUEST_FUZZ(0x005c0f5c, 100, [](guest::Fuzz &f) { f.arguments(some_id(f)); });
GUEST_FUZZ(0x005c1330, 100, [](guest::Fuzz &f) { f.arguments(some_id(f)); });

// The same for the part at 0x424 (`include_idle` as for look_up_object).
gptr<u8> slot_object_part_424(u32 id, u32 include_idle) {
    return address_in_object(look_up_object(id, include_idle), PART_424_OFFSET);
}
GUEST_EXPORT(0x005c1838, slot_object_part_424);
GUEST_FUZZ(0x005c1838, 100, [](guest::Fuzz &f) { f.arguments(some_id(f), f.below(2)); });

// The same for the part at 0x5ec (idle objects count).
gptr<u8> slot_object_part_5ec(u32 id) {
    return address_in_object(look_up_object(id, INCLUDE_IDLE), PART_5EC_OFFSET);
}
GUEST_EXPORT(0x005c06cc, slot_object_part_5ec);
GUEST_FUZZ(0x005c06cc, 100, [](guest::Fuzz &f) { f.arguments(some_id(f)); });

// Whether the slot's object (idle ones count) has flag 5 of byte 0x8c5.
bool slot_object_has_flag_8c5_bit_5(u32 id) {
    gptr<SlotObject> object = look_up_object(id, INCLUDE_IDLE);
    return object && (object->flags_8c5 & SlotObject::FLAGS_8C5_BIT_5) != 0;
}
GUEST_EXPORT(0x005c1940, slot_object_has_flag_8c5_bit_5);
GUEST_FUZZ(0x005c1940, 100, [](guest::Fuzz &f) { f.arguments(some_id(f)); });

// Whether the main object has flag 3 of byte 0x177; true when there is no main object.
bool main_object_has_flag_177_bit_3_or_is_missing() {
    gptr<SlotObject> object = look_up_object(MAIN_OBJECT_ID, EXCLUDE_IDLE);
    return !object || (object->flags_177 & SlotObject::FLAGS_177_BIT_3) != 0;
}
GUEST_EXPORT(0x005c6850, main_object_has_flag_177_bit_3_or_is_missing);
GUEST_FUZZ(0x005c6850, 50, [](guest::Fuzz &f) { f.arguments(); });
