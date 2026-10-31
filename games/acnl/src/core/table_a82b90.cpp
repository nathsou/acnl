// Lookups and checks on records whose meaning is not known yet: a global table of ten 0x50-byte entries, a
// record validated by two calls to the same checker, and two counters clamped to [0, 9999].
#include "guest/guest.hpp"

namespace {

// An entry of the table at 0x00a82c58 (contents not known yet).
struct TableEntry50 {
    u8 unknown_00[0x50];
};
GUEST_SIZE(TableEntry50, 0x50);

// The global block at 0x00a82b90 holding the table.
struct GlobalBlockA82b90 {
    static constexpr u32 ENTRIES = 10;

    u8 unknown_00[0xc8];
    TableEntry50 entries[ENTRIES];
};
GUEST_OFFSET(GlobalBlockA82b90, entries, 0xc8);

inline guest::global<GlobalBlockA82b90, 0x00a82b90> global_block_a82b90;

// A record checked by is_record_valid: two sub-blocks checked by the same function and two small limits.
struct CheckedRecord {
    static constexpr u16 NUMBER_LIMIT = 0x18f;  // the number must be below this
    static constexpr u8 INDEX_LIMIT = 8;        // the index must be below this

    u8 block_00[0x16];  // checked by check_block
    u8 block_16[0x16];  // checked by check_block
    u16 number_2c;
    u8 index_2e;
    u8 unknown_2f;
};
GUEST_OFFSET(CheckedRecord, block_16, 0x16);
GUEST_OFFSET(CheckedRecord, number_2c, 0x2c);
GUEST_OFFSET(CheckedRecord, index_2e, 0x2e);

// A value with flags in its second half-word.
struct FlaggedValue {
    u16 unknown_00;
    u16 flags;

    static constexpr u16 FLAG_3 = 0x0008;           // reported as 3
    static constexpr u16 OTHER_FLAGS = 0x0388;      // any of these (bit 3 already excluded) is reported as 1
};
GUEST_SIZE(FlaggedValue, 4);

// An object with two counters kept in [0, COUNTER_MAX].
struct CounterObject {
    static constexpr s64 COUNTER_MAX = 9999;

    u8 unknown_000[0x12c];
    s32 counter_12c;
    u8 unknown_130[0x10];
    s32 counter_140;

    void add_counter_140(s32 delta);
    void add_counter_12c(s32 delta);
};
GUEST_OFFSET(CounterObject, counter_12c, 0x12c);
GUEST_OFFSET(CounterObject, counter_140, 0x140);

// Still recompiled code (or rewritten elsewhere):
inline constexpr guest::Function<0x0076c6d4, u32(gptr<void> block)> check_block;
inline constexpr guest::Function<0x0076af88, u32(gptr<FlaggedValue> value)> check_flagged_value;
inline constexpr guest::Function<0x00305f2c, u32()> read_global_object_byte;

// read_global_object_byte's value that freezes the counters
constexpr u32 COUNTERS_FROZEN = 3;

// The table entry at an index, or null past the end.
gptr<TableEntry50> table_a82b90_entry(u32 index) {
    if (index >= GlobalBlockA82b90::ENTRIES) {
        return nullptr;
    }
    return guest::addr_of(global_block_a82b90->entries[index]);
}

// True when both limits hold and both sub-blocks pass check_block (the second block is checked first).
bool is_record_valid(gptr<CheckedRecord> record) {
    if (record->number_2c >= CheckedRecord::NUMBER_LIMIT || record->index_2e >= CheckedRecord::INDEX_LIMIT) {
        return false;
    }
    if (check_block(guest::addr_of(record->block_16).cast<void>()) == 0) {
        return false;
    }
    return check_block(record.cast<void>()) != 0;
}

// 0 when the value fails check_flagged_value, else 3 for FLAG_3, 1 for any of the other flags, 0 for none.
// (The original keeps the argument in r1 across the call: the callee leaves r1 untouched.)
u32 flagged_value_state(gptr<FlaggedValue> value) {
    if (check_flagged_value(value) == 0) {
        return 0;
    }
    u16 flags = value->flags;
    if (flags & FlaggedValue::FLAG_3) {
        return 3;
    }
    return (flags & FlaggedValue::OTHER_FLAGS) != 0 ? 1 : 0;
}

// Adds to a counter, clamping the exact (64-bit) sum to [0, COUNTER_MAX].
s32 clamped_sum(s32 counter, s32 delta) {
    s64 sum = s64(counter) + s64(delta);
    if (sum < 0) {
        return 0;
    }
    if (sum > CounterObject::COUNTER_MAX) {
        return s32(CounterObject::COUNTER_MAX);
    }
    return s32(sum);
}

void CounterObject::add_counter_140(s32 delta) {
    if (read_global_object_byte() == COUNTERS_FROZEN) {
        return;
    }
    counter_140 = clamped_sum(counter_140, delta);
}

void CounterObject::add_counter_12c(s32 delta) {
    if (read_global_object_byte() == COUNTERS_FROZEN) {
        return;
    }
    counter_12c = clamped_sum(counter_12c, delta);
}

}  // namespace

GUEST_EXPORT(0x002fe450, table_a82b90_entry);
GUEST_EXPORT(0x002fe470, is_record_valid);
GUEST_EXPORT(0x002fe594, flagged_value_state);
GUEST_EXPORT(0x002fe5c8, CounterObject::add_counter_140);
GUEST_EXPORT(0x002fe618, CounterObject::add_counter_12c);
