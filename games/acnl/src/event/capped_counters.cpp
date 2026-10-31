// Counters capped at 9,999 kept in a block that f_002fd068 returns: per slot a total, and a row of four values
// indexed by get_index_5c7408. f_00656edc bumps them for an object that has counting enabled. What is counted is not
// known yet.
#include "guest/guest.hpp"

using guest::gptr;

namespace {

constexpr s32 COUNTER_MAX = 9999;
constexpr u8 MODE_NOT_COUNTING = 3;  // the global byte read by read_global_object_byte: no counting (meaning not known)

// Four counters, picked by the two-bit index of get_index_5c7408.
struct CounterRow {
    s32 values[4];
};
GUEST_SIZE(CounterRow, 16);

// The block f_002fd068 returns. Slots come from f_002ffad8; they are applied with guest pointer arithmetic since the
// number of rows is not known.
struct CounterBlock {
    u8 unknown_0000[0x1180];
    s32 totals[3];
    CounterRow rows[1];  // (count not known)
};
GUEST_OFFSET(CounterBlock, totals, 0x1180);
GUEST_OFFSET(CounterBlock, rows, 0x118c);

// The object f_00656edc is called on (what it is, is not known yet).
struct CounterSource {
    static constexpr u8 FLAG_COUNTS = 1u << 5;  // flags_171: counting enabled

    u8 unknown_000[0x171];
    u8 flags_171;
    u8 unknown_172[0x1ac - 0x172];
    u8 id_1ac;  // passed to f_002fe8a4 and f_005c2dfc

    void count_event(u32 key);
};
GUEST_OFFSET(CounterSource, flags_171, 0x171);
GUEST_OFFSET(CounterSource, id_1ac, 0x1ac);

constexpr u32 OWNER_PART_OFFSET = 0x8ae0;  // a part of the object f_002fe8a4 returns (nothing else known about it)
constexpr u32 OWNER_PART_ARGUMENT = 4;     // passed along with that part (meaning not known yet)

inline constexpr guest::Function<0x0064c5e0, u32(u32 unknown_r0, u32 unknown_r1)> check_64c5e0;
inline constexpr guest::Function<0x005c2c80, u32()> check_5c2c80;
inline constexpr guest::Function<0x002fe8a4, gptr<void>(u32 id)> find_by_id_2fe8a4;
inline constexpr guest::Function<0x00312428, void()> call_312428;
inline constexpr guest::Function<0x005c2dfc, u32(u32 id)> check_5c2dfc;
// f_002fd068 is reached with arguments set up on one path and with leftover registers on the other: the
// argument-less declaration leaves the registers as the previous call left them, as the original does.
inline constexpr guest::Function<0x002fd068, gptr<CounterBlock>(gptr<void> part, u32 unknown_r1, u32 unknown_r2)>
    get_counter_block_with;
inline constexpr guest::Function<0x002fd068, gptr<CounterBlock>()> get_counter_block;
inline constexpr guest::Function<0x002ffad8, u32(u32 key)> slot_for_key;
inline constexpr guest::Function<0x00305f2c, u8()> read_global_object_byte;
inline constexpr guest::Function<0x005c7408, u32()> get_index_5c7408;

// value + delta, computed without overflow and kept in [0, COUNTER_MAX].
s32 add_clamped(s32 value, s32 delta) {
    s64 sum = s64(value) + s64(delta);
    if (sum < 0) {
        return 0;
    }
    if (sum > COUNTER_MAX) {
        return COUNTER_MAX;
    }
    return s32(sum);
}

// Adds delta to the slot's total (the tail at 0x006b50a0).
void add_to_total(CounterBlock &block, u32 slot, s32 delta) {
    if (read_global_object_byte() == MODE_NOT_COUNTING) {
        return;
    }
    gptr<s32> total = guest::addr_of(block.totals[0]) + slot;
    *total = add_clamped(*total, delta);
}

// Adds delta to the slot's row entry for the current index, then to its total (the tail at 0x006b5924). The index
// is asked again for the store, as the original does.
void add_to_counters(CounterBlock &block, u32 slot, s32 delta) {
    if (read_global_object_byte() == MODE_NOT_COUNTING) {
        return;
    }
    gptr<CounterRow> row = guest::addr_of(block.rows[0]) + slot;
    s32 value = add_clamped(row->values[get_index_5c7408()], delta);
    row->values[get_index_5c7408()] = value;
    add_to_total(block, slot, delta);
}

}  // namespace

// Counts one event for key when counting is enabled and the checks around the object allow it.
void CounterSource::count_event(u32 key) {
    if (!(flags_171 & FLAG_COUNTS)) {
        return;
    }
    // r0 still holds the tested bit (1) and r1 the key when the original calls this
    if (check_64c5e0(1, key) != 0) {
        return;
    }
    if (check_5c2c80() == 0) {
        return;
    }
    gptr<void> owner = find_by_id_2fe8a4(id_1ac);
    if (!owner) {
        return;
    }
    call_312428();
    gptr<CounterBlock> block;
    if (check_5c2dfc(id_1ac) != 0) {
        block = get_counter_block_with(owner + OWNER_PART_OFFSET, OWNER_PART_ARGUMENT, 1);
    } else {
        block = get_counter_block();
    }
    u32 slot = slot_for_key(key);
    add_to_counters(*block, slot, 1);
}
GUEST_EXPORT(0x00656edc, CounterSource::count_event);
