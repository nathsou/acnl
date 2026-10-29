// Per-slot values kept right after the four remote players (0x00a84790), and checks that look up the object of the
// main slot.
#include "guest/guest.hpp"
#include "save/player.hpp"
#include "save/save_data.hpp"

using guest::gptr;

u32 query_current_main_object();
bool is_below_8(u32 value);

namespace {

constexpr u32 SLOT_MASK = 3;
constexpr u32 SLOT_COUNT = 4;
constexpr u32 INVALID_VALUE = 8;
constexpr u8 STATE_NONE = 0xb;
constexpr u8 STATE_C1 = 0xc1;
constexpr u32 MAIN_OBJECT_ID = 4;
constexpr u32 NOT_LOOKED_UP = 0;

struct SlotTable {
    SavePlayer players[SaveData::PLAYER_COUNT];
    u8 values[SLOT_COUNT];
    gptr<void> objects[SLOT_COUNT];
};
GUEST_OFFSET(SlotTable, values, 0x29200);
GUEST_OFFSET(SlotTable, objects, 0x29204);

inline guest::global<SlotTable, 0x00a84790> slot_table;

struct StateObject {
    u8 unknown_0000[0x870];
    u8 state_870;
};
GUEST_OFFSET(StateObject, state_870, 0x870);

struct MarkerObject {
    u8 unknown_000[0x1a9];
    u8 marker_1a9;
};
GUEST_OFFSET(MarkerObject, marker_1a9, 0x1a9);

struct FlagsGlobal {
    u8 unknown_00;
    u8 flags;
};
GUEST_OFFSET(FlagsGlobal, flags, 1);
inline guest::global<FlagsGlobal, 0x00aadad4> flags_aadad4;

constexpr u8 FLAG_BIT_2 = 0x04;

struct ModeState {
    u8 mode;
    u8 sub_mode;
};
inline guest::global<ModeState, 0x0095721c> mode_state;

// The sub-modes of mode 2 and the value each selects; sub-modes past the table select the first value.
constexpr u32 MODE_2_TABLE[] = {4, 4, 6, 8, 7, 5};
constexpr u32 MODE_2_DEFAULT = 4;

inline constexpr guest::Function<0x0027ab40, bool(u32 slot)> is_local_slot;
inline constexpr guest::Function<0x005c33d0, gptr<void>(u32 id, u32 unknown)> look_up_object;

// The value of the slot, 8 when it is not below 8.
u32 checked_slot_value(u32 slot) {
    u32 value = slot_table->values[slot & SLOT_MASK];
    return is_below_8(value) ? value : INVALID_VALUE;
}

}  // namespace

// Whether the main object's slot holds a value that names a local slot.
bool main_slot_value_is_local() {
    u32 slot = query_current_main_object() & SLOT_MASK;
    return is_local_slot(checked_slot_value(slot));
}
GUEST_EXPORT(0x005c2c80, main_slot_value_is_local);
GUEST_FUZZ(0x005c2c80, 50, [](guest::Fuzz &f) { f.arguments(); });

// The same for a given slot (a number of 4 or more stands for the main object's slot).
bool slot_value_is_local(u32 slot) {
    if (slot >= SLOT_COUNT) {
        slot = query_current_main_object();
    }
    return is_local_slot(checked_slot_value(slot & SLOT_MASK));
}
GUEST_EXPORT(0x005c2dfc, slot_value_is_local);
GUEST_FUZZ(0x005c2dfc, 100, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({0, 1, 2, 3, 4, 7, 0xffffffffu})); });

// The address of the looked up object's state byte, unless the object is missing or in the "none" state.
gptr<u8> object_state_address(u32 id) {
    gptr<StateObject> object = look_up_object(id, NOT_LOOKED_UP).cast<StateObject>();
    if (!object) {
        return gptr<u8>(0u);
    }
    if (object->state_870 == STATE_NONE) {
        return gptr<u8>(0u);
    }
    return guest::addr_of(object->state_870);
}
GUEST_EXPORT(0x005c2cbc, object_state_address);
GUEST_FUZZ(0x005c2cbc, 100, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({0, 1, 2, 3, 4, 5, 0xffffffffu})); });

// Whether the main object (id 4) carries the marker 0xc1.
bool main_object_has_marker_c1() {
    gptr<MarkerObject> object = look_up_object(MAIN_OBJECT_ID, NOT_LOOKED_UP).cast<MarkerObject>();
    return object && object->marker_1a9 == STATE_C1;
}
GUEST_EXPORT(0x005c2dcc, main_object_has_marker_c1);
GUEST_FUZZ(0x005c2dcc, 50, [](guest::Fuzz &f) { f.arguments(); });

void set_flag_bit_2_of_aadad4() {
    flags_aadad4->flags = flags_aadad4->flags | FLAG_BIT_2;
}
GUEST_EXPORT(0x005c2ec8, set_flag_bit_2_of_aadad4);
GUEST_FUZZ(0x005c2ec8, 50, [](guest::Fuzz &f) { f.arguments(); });

// A small number chosen by the mode and sub-mode bytes at 0x0095721c (0 for most modes).
u32 value_for_mode() {
    u32 mode = mode_state->mode;
    u32 sub_mode = mode_state->sub_mode;
    switch (mode) {
    case 1:
        if (sub_mode == 1) {
            return 1;
        }
        if (sub_mode == 2) {
            return 3;
        }
        return sub_mode == 5 ? 2 : 1;
    case 2:
        return sub_mode < sizeof(MODE_2_TABLE) / sizeof(MODE_2_TABLE[0]) ? MODE_2_TABLE[sub_mode] : MODE_2_DEFAULT;
    case 5:
        return 9;
    default:
        return 0;
    }
}
GUEST_EXPORT(0x005d46dc, value_for_mode);
GUEST_FUZZ(0x005d46dc, 200, [](guest::Fuzz &f) {
    mode_state->mode = f.pick<u8>({0, 1, 2, 3, 5, 6});
    mode_state->sub_mode = f.pick<u8>({0, 1, 2, 3, 4, 5, 6, 7});
    f.arguments();
});
