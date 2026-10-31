// Per-slot values kept right after the four remote players (0x00a84790), and checks that look up the object of the
// main slot.
#include "guest/guest.hpp"
#include "player/slot_object.hpp"
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
constexpr u32 EXCLUDE_UNMARKED = 0;  // look_up_object's second argument: objects whose state is zero are not returned

// A slot's record, refreshed from two entry templates (see refresh_slot_record).
struct SlotRecord {
    static constexpr u32 HEAD_SIZE = 13;
    static constexpr u32 TAIL_SIZE = 24;

    u8 head[HEAD_SIZE];  // the first byte is the mode the slot's object belongs to
    u8 unknown_0d;
    u8 tail[TAIL_SIZE];
};
GUEST_OFFSET(SlotRecord, tail, 0x0e);
GUEST_SIZE(SlotRecord, 38);

struct SlotTable {
    SavePlayer players[SaveData::PLAYER_COUNT];
    u8 values[SLOT_COUNT];
    gptr<void> objects[SLOT_COUNT];
    SlotRecord records[SLOT_COUNT];
    SlotRecord snapshots[SLOT_COUNT];  // copies of the records, made by snapshot_slot_records
};
GUEST_OFFSET(SlotTable, values, 0x29200);
GUEST_OFFSET(SlotTable, objects, 0x29204);
GUEST_OFFSET(SlotTable, records, 0x29214);
GUEST_OFFSET(SlotTable, snapshots, 0x292ac);

inline guest::global<SlotTable, 0x00a84790> slot_table;

struct StateObject {
    u8 unknown_0000[0x870];
    u8 state_870;
};
GUEST_OFFSET(StateObject, state_870, 0x870);

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
inline constexpr guest::Function<0x006268f8, gptr<u8>(u32 id)> entry_template_address;
inline constexpr guest::Function<0x002f74c8, u8()> read_global_byte_2;

// For each slot, the ids of the entry templates its record's head and tail are copied from.
inline guest::global<u8[SLOT_COUNT], 0x00881b8c> head_template_ids;
inline guest::global<u8[SLOT_COUNT], 0x00881b90> tail_template_ids;
inline guest::global<SlotRecord, 0x00aad9a4> default_slot_record;  // for slots that are not below 4

// The value of the slot, 8 when it is not below 8.
u32 checked_slot_value(u32 slot) {
    u32 value = slot_table->values[slot & SLOT_MASK];
    return is_below_8(value) ? value : INVALID_VALUE;
}

}  // namespace

// The value kept for the slot (a number of 4 or more stands for the main object's slot); 8 when it is not below 8.
u32 slot_value(u32 slot) {
    if (slot >= SLOT_COUNT) {
        slot = query_current_main_object();
    }
    return checked_slot_value(slot);
}
GUEST_EXPORT(0x002ff8b0, slot_value);

// Whether the main object's slot holds a value that names a local slot.
bool main_slot_value_is_local() {
    u32 slot = query_current_main_object() & SLOT_MASK;
    return is_local_slot(checked_slot_value(slot));
}
GUEST_EXPORT(0x005c2c80, main_slot_value_is_local);

// The same for a given slot (a number of 4 or more stands for the main object's slot).
bool slot_value_is_local(u32 slot) {
    if (slot >= SLOT_COUNT) {
        slot = query_current_main_object();
    }
    return is_local_slot(checked_slot_value(slot & SLOT_MASK));
}
GUEST_EXPORT(0x005c2dfc, slot_value_is_local);

// The record of a slot (the default one for slots past the four), after copying its head and tail from their entry
// templates when those exist.
gptr<SlotRecord> refresh_slot_record(u32 slot) {
    if (slot >= SLOT_COUNT) {
        return guest::addr_of(*default_slot_record);
    }
    gptr<SlotRecord> record = guest::addr_of(slot_table->records[slot]);
    gptr<u8> head = entry_template_address(head_template_ids[slot]);
    if (head) {
        for (u32 i = 0; i < SlotRecord::HEAD_SIZE; i++) {
            record->head[i] = head[i];
        }
    }
    gptr<u8> tail = entry_template_address(tail_template_ids[slot]);
    if (tail) {
        for (u32 i = 0; i < SlotRecord::TAIL_SIZE; i++) {
            record->tail[i] = tail[i];
        }
    }
    return record;
}
GUEST_EXPORT(0x005c330c, refresh_slot_record);

// Copies the (refreshed) record of every slot to its snapshot.
void snapshot_slot_records() {
    for (u32 slot = 0; slot < SLOT_COUNT; slot++) {
        slot_table->snapshots[slot] = *refresh_slot_record(slot);
    }
}
GUEST_EXPORT(0x005c4da4, snapshot_slot_records);

// Copies the snapshot of one slot over the snapshot of another (the slot numbers count modulo 4).
void copy_slot_snapshot(u32 from, u32 to) {
    slot_table->snapshots[to & SLOT_MASK] = slot_table->snapshots[from & SLOT_MASK];
}
GUEST_EXPORT(0x005c5b3c, copy_slot_snapshot);

// The object of a slot (a number of 4 or more stands for the main object's slot), or null: when it has none, when its
// record's mode is not the current one (unless flag 5 of the object is set), and, unless `include_idle`, when its
// state is zero.
gptr<SlotObject> look_up_object(u32 id, u32 include_idle) {
    u32 slot = id < SLOT_COUNT ? id & SLOT_MASK : query_current_main_object();
    if (slot >= SLOT_COUNT) {
        return gptr<SlotObject>(0u);
    }
    gptr<SlotObject> object = slot_table->objects[slot].cast<SlotObject>();
    if (!object) {
        return gptr<SlotObject>(0u);
    }
    if ((object->flags_171 & SlotObject::FLAGS_171_BIT_5) == 0 && refresh_slot_record(slot)->head[0] != read_global_byte_2()) {
        return gptr<SlotObject>(0u);
    }
    if (include_idle == 0 && object->state_1a9 == 0) {
        return gptr<SlotObject>(0u);
    }
    return object;
}
GUEST_EXPORT(0x005c33d0, look_up_object);

// The address of the looked up object's state byte, unless the object is missing or in the "none" state.
gptr<u8> object_state_address(u32 id) {
    gptr<StateObject> object = look_up_object(id, EXCLUDE_UNMARKED).cast<StateObject>();
    if (!object) {
        return gptr<u8>(0u);
    }
    if (object->state_870 == STATE_NONE) {
        return gptr<u8>(0u);
    }
    return guest::addr_of(object->state_870);
}
GUEST_EXPORT(0x005c2cbc, object_state_address);

// Whether the main object (id 4) carries the marker 0xc1.
bool main_object_has_marker_c1() {
    gptr<SlotObject> object = look_up_object(MAIN_OBJECT_ID, EXCLUDE_UNMARKED);
    return object && object->state_1a9 == STATE_C1;
}
GUEST_EXPORT(0x005c2dcc, main_object_has_marker_c1);

void set_flag_bit_2_of_aadad4() {
    flags_aadad4->flags = flags_aadad4->flags | FLAG_BIT_2;
}
GUEST_EXPORT(0x005c2ec8, set_flag_bit_2_of_aadad4);

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
