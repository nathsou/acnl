// Flag bits of a record's byte at 0x24 and the update that follows a state change.
#include "guest/guest.hpp"

namespace {

// The record seen by these helpers (only touched bytes named).
struct FlaggedRecord {
    u8 unknown_00[0x1e];
    u8 kind_1e;
    u8 state_1f;
    u8 unknown_20;
    s8 table_index;
    u8 unknown_22[2];
    u8 flags;
    u8 unknown_25[3];
};
GUEST_OFFSET(FlaggedRecord, kind_1e, 0x1e);
GUEST_OFFSET(FlaggedRecord, state_1f, 0x1f);
GUEST_OFFSET(FlaggedRecord, table_index, 0x21);
GUEST_OFFSET(FlaggedRecord, flags, 0x24);

// An entry of the table behind table_a82b90_entry (only the flag word is touched).
struct TableEntry {
    u8 unknown_00[0x44];
    u32 flags;
};
GUEST_OFFSET(TableEntry, flags, 0x44);

inline constexpr guest::Function<0x006f00ec, void(u32 a, gptr<FlaggedRecord> record, u32 b)> notify_record;
inline constexpr guest::Function<0x002fae84, gptr<u8>()> get_data_base;
inline constexpr guest::Function<0x0030dc84, gptr<u8>(gptr<u8> base, gptr<FlaggedRecord> record)> find_for_record;
inline constexpr guest::Function<0x0024b8a8, void(gptr<u8> target, u32 a, u32 b)> update_target;
inline constexpr guest::Function<0x002fe450, gptr<TableEntry>(s32 index)> table_a82b90_entry;

constexpr u32 NOTIFY_ARGUMENT = 0xf;
constexpr u32 DATA_BASE_SUB_OFFSET = 0x20;   // into the object get_data_base returns
constexpr u32 FOUND_TARGET_OFFSET = 0x55dc;  // into the object find_for_record returns
constexpr u32 UPDATE_ARGUMENT = 0x16;

constexpr u8 FLAG_4 = 0x04;
constexpr u8 FLAG_8 = 0x08;
constexpr u32 ENTRY_FLAG_2 = 0x02;
constexpr u32 ENTRY_FLAG_4 = 0x04;
constexpr u8 KIND_E = 0x0e;
constexpr u8 KIND_10 = 0x10;
constexpr u8 STATE_DONE = 3;
constexpr u32 BIT_COUNT = 8;

}  // namespace

// Whether bit `index` (below 8) of the flags byte is set.
static u32 record_has_flag_bit(gptr<FlaggedRecord> record, u32 index) {
    if (index >= BIT_COUNT) {
        return 0;
    }
    return (record->flags >> index) & 1;
}
GUEST_EXPORT(0x0030b90c, record_has_flag_bit);

// Applies a mode (0: nothing, 1: set flag 4, other: notify and clear flag 8), then clears the matching flag of the
// record's table entry according to its kind and marks the state done.
static void apply_record_mode(gptr<FlaggedRecord> record, u32 mode) {
    if (mode != 0) {
        if (mode == 1) {
            record->flags |= FLAG_4;
        } else {
            notify_record(NOTIFY_ARGUMENT, record, 1);
            gptr<u8> base = get_data_base();
            gptr<u8> found = find_for_record(base + DATA_BASE_SUB_OFFSET, record);
            if (found) {
                update_target(found + FOUND_TARGET_OFFSET, UPDATE_ARGUMENT, 1);
            }
            record->flags &= ~FLAG_8;
        }
    }
    gptr<TableEntry> entry = table_a82b90_entry(record->table_index);
    if (entry) {
        if (record->kind_1e == KIND_10) {
            entry->flags &= ~ENTRY_FLAG_4;
        } else if (record->kind_1e == KIND_E) {
            entry->flags &= ~ENTRY_FLAG_2;
        }
    }
    record->state_1f = STATE_DONE;
}
GUEST_EXPORT(0x0030b924, apply_record_mode);
