// Counters the game keeps as signed 32-bit values, clamped when added to. The block starts with 80 entries of five
// words each (a total and the same count split four ways, the split being chosen by get_index_5c7408()), most
// clamped to 9,999 and a few to 999,999,999, followed by two tables of per-entry tallies (72 entries, each also split
// four ways, up to 9,999). Nothing is counted while read_global_object_byte() reports mode 3.
#include "guest/guest.hpp"

namespace {

inline constexpr guest::Function<0x002fb328, u32()> get_word_95bf74;
inline constexpr guest::Function<0x00305f2c, u32()> read_global_object_byte;
inline constexpr guest::Function<0x005c7408, u32()> get_index_5c7408;  // selects one of the four splits

constexpr u32 MODE_NOT_COUNTING = 3;  // read_global_object_byte() value in which counters are left alone
constexpr s32 TOTAL_MAX = 999'999'999;
constexpr s32 TALLY_MAX = 9'999;
constexpr u32 ENTRIES = 72;  // from the spacing of the tables
constexpr u32 SPLITS = 4;
constexpr s32 VALUE_118_MAX = 99;
constexpr u32 SPLIT_ENTRY_COUNT = 80;  // entries of five words before the tallies (0x640 bytes)
constexpr u32 PARTS_ENTRY = 0;         // the entry whose total is the sum of the parts
constexpr u32 UNKNOWN_14_ENTRY = 1;
constexpr u32 VALUE_118_ENTRY = 14;    // only its total is used: set, up to VALUE_118_MAX
constexpr u32 VALUE_2BC_ENTRY = 35;    // only its total is used

// Entries whose counts go up to TOTAL_MAX instead of TALLY_MAX (among those that have an adding routine).
constexpr bool entry_is_large(u32 entry) {
    return entry == 0 || entry == 1 || entry == 2 || entry == 3 || entry == 8;
}

constexpr s32 entry_max(u32 entry) {
    return entry_is_large(entry) ? TOTAL_MAX : TALLY_MAX;
}
constexpr u32 BLOCK_OFFSET = 0x72510;  // where the counters block is in the object of word 0x95bf74 (assumed)

bool counting() {
    return read_global_object_byte() != MODE_NOT_COUNTING;
}

// value + amount, computed without overflow and clamped to [0, max]
s32 add_clamped(s32 value, s32 amount, s32 max) {
    s64 sum = s64(value) + s64(amount);
    if (sum < 0) {
        return 0;
    }
    if (sum > max) {
        return max;
    }
    return s32(sum);
}

}  // namespace

// A count and the same count split four ways.
struct SplitCounter {
    s32 total;
    s32 splits[SPLITS];
};

struct ClampedCounters {
    SplitCounter entries[SPLIT_ENTRY_COUNT];
    s32 tally_a[ENTRIES];         // up to TALLY_MAX
    s32 tally_a_split[ENTRIES][SPLITS];
    s32 tally_b[ENTRIES];
    s32 tally_b_split[ENTRIES][SPLITS];

    void add_to_unknown_14(s32 amount);
    void set_count(u32 index, s32 value);
    void set_current_count(s32 value);
    void add_to_value_2bc(s32 amount);
    void set_value_118(s32 value);
    void add_to_part(u32 index, s32 amount);

    // Adds to the entry's current split, then to its total.
    template <u32 ENTRY>
    void add_to_current_split(s32 amount);
    // Adds to the entry's given split (no check of the index), then to its total.
    template <u32 ENTRY>
    void add_to_split(u32 split, s32 amount);
    void add_to_tally_a(u32 index, s32 amount);
    void add_to_tally_b(u32 index, s32 amount);

private:
    template <u32 ENTRY>
    void add_to_entry_total(s32 amount);
    s32 *counts();
    void add_to_total(s32 amount);
    void add_to_tally_a_total(u32 index, s32 amount);
    void add_to_tally_b_total(u32 index, s32 amount);
};
GUEST_OFFSET(ClampedCounters, entries, 0x0);
GUEST_OFFSET(ClampedCounters, tally_a, 0x640);
GUEST_OFFSET(ClampedCounters, tally_a_split, 0x760);
GUEST_OFFSET(ClampedCounters, tally_b, 0xbe0);
GUEST_OFFSET(ClampedCounters, tally_b_split, 0xd00);

// The address of a block inside the object the word at 0x95bf74 holds.
gptr<void> block_72510_of_word_95bf74() {
    return gptr<void>(get_word_95bf74() + BLOCK_OFFSET);
}
GUEST_EXPORT(0x006b563c, block_72510_of_word_95bf74);

void ClampedCounters::add_to_unknown_14(s32 amount) {
    if (!counting()) {
        return;
    }
    entries[UNKNOWN_14_ENTRY].total = add_clamped(entries[UNKNOWN_14_ENTRY].total, amount, TOTAL_MAX);
}
GUEST_EXPORT(0x006b5c5c, ClampedCounters::add_to_unknown_14);

// (the original's routine at 0x006b5740)
void ClampedCounters::add_to_total(s32 amount) {
    if (!counting()) {
        return;
    }
    entries[PARTS_ENTRY].total = add_clamped(entries[PARTS_ENTRY].total, amount, TOTAL_MAX);
}

// Adds to one part, then to the total.
void ClampedCounters::add_to_part(u32 index, s32 amount) {
    if (!counting()) {
        return;
    }
    entries[PARTS_ENTRY].splits[index] = add_clamped(entries[PARTS_ENTRY].splits[index], amount, TOTAL_MAX);
    add_to_total(amount);
}
GUEST_EXPORT(0x006b6624, ClampedCounters::add_to_part);

// (the original's routine at 0x006b5154)
void ClampedCounters::add_to_tally_a_total(u32 index, s32 amount) {
    if (!counting()) {
        return;
    }
    tally_a[index] = add_clamped(tally_a[index], amount, TALLY_MAX);
}

// Adds to the entry's current split (the split is looked up again for the store), then to the entry.
void ClampedCounters::add_to_tally_a(u32 index, s32 amount) {
    if (!counting()) {
        return;
    }
    s32 value = add_clamped(tally_a_split[index][get_index_5c7408()], amount, TALLY_MAX);
    tally_a_split[index][get_index_5c7408()] = value;
    add_to_tally_a_total(index, amount);
}
GUEST_EXPORT(0x006b60d8, ClampedCounters::add_to_tally_a);

// (the original's routine at 0x006b50fc)
void ClampedCounters::add_to_tally_b_total(u32 index, s32 amount) {
    if (!counting()) {
        return;
    }
    tally_b[index] = add_clamped(tally_b[index], amount, TALLY_MAX);
}

// Adds to the entry's current split (the split is looked up again for the store), then to the entry.
void ClampedCounters::add_to_tally_b(u32 index, s32 amount) {
    if (!counting()) {
        return;
    }
    s32 value = add_clamped(tally_b_split[index][get_index_5c7408()], amount, TALLY_MAX);
    tally_b_split[index][get_index_5c7408()] = value;
    add_to_tally_b_total(index, amount);
}
GUEST_EXPORT(0x006b59ac, ClampedCounters::add_to_tally_b);

// The counts set by set_count: the splits of entry 1 and, running on past them, the words that follow.
s32 *ClampedCounters::counts() {
    return entries[UNKNOWN_14_ENTRY].splits;
}

// Stores the value, clamped to [0, TOTAL_MAX], as the index-th count; the difference goes to unknown_14 first.
void ClampedCounters::set_count(u32 index, s32 value) {
    add_to_unknown_14(value - counts()[index]);
    counts()[index] = value < 0 ? 0 : (value > TOTAL_MAX ? TOTAL_MAX : value);
}
GUEST_EXPORT(0x006b84c8, ClampedCounters::set_count);

// The same for the count the current split selects (the split is looked up again for the store).
void ClampedCounters::set_current_count(s32 value) {
    add_to_unknown_14(value - counts()[get_index_5c7408()]);
    counts()[get_index_5c7408()] = value < 0 ? 0 : (value > TOTAL_MAX ? TOTAL_MAX : value);
}
GUEST_EXPORT(0x006b8cb8, ClampedCounters::set_current_count);

void ClampedCounters::add_to_value_2bc(s32 amount) {
    if (!counting()) {
        return;
    }
    entries[VALUE_2BC_ENTRY].total = add_clamped(entries[VALUE_2BC_ENTRY].total, amount, TALLY_MAX);
}
GUEST_EXPORT(0x006b5240, ClampedCounters::add_to_value_2bc);

void ClampedCounters::set_value_118(s32 value) {
    if (!counting()) {
        return;
    }
    entries[VALUE_118_ENTRY].total = value < 0 ? 0 : (value > VALUE_118_MAX ? VALUE_118_MAX : value);
}
GUEST_EXPORT(0x006b69d4, ClampedCounters::set_value_118);

template <u32 ENTRY>
void ClampedCounters::add_to_entry_total(s32 amount) {
    static_assert(ENTRY < SPLIT_ENTRY_COUNT);
    if (!counting()) {
        return;
    }
    entries[ENTRY].total = add_clamped(entries[ENTRY].total, amount, entry_max(ENTRY));
}

template <u32 ENTRY>
void ClampedCounters::add_to_current_split(s32 amount) {
    if (!counting()) {
        return;
    }
    s32 value = add_clamped(entries[ENTRY].splits[get_index_5c7408()], amount, entry_max(ENTRY));
    entries[ENTRY].splits[get_index_5c7408()] = value;  // (the split is looked up again for the store)
    add_to_entry_total<ENTRY>(amount);
}

template <u32 ENTRY>
void ClampedCounters::add_to_split(u32 split, s32 amount) {
    if (!counting()) {
        return;
    }
    entries[ENTRY].splits[split] = add_clamped(entries[ENTRY].splits[split], amount, entry_max(ENTRY));
    add_to_entry_total<ENTRY>(amount);
}

// Counters of the entries with an adding routine; the first add to the current split, the last three to a given one.
GUEST_EXPORT(0x006b7380, ClampedCounters::add_to_current_split<0>);
GUEST_EXPORT(0x006b8918, ClampedCounters::add_to_current_split<2>);
GUEST_EXPORT(0x006b8830, ClampedCounters::add_to_current_split<3>);
GUEST_EXPORT(0x006b7db0, ClampedCounters::add_to_current_split<8>);
GUEST_EXPORT(0x006b8454, ClampedCounters::add_to_current_split<10>);
GUEST_EXPORT(0x006b7c54, ClampedCounters::add_to_current_split<11>);
GUEST_EXPORT(0x006b8140, ClampedCounters::add_to_current_split<12>);
GUEST_EXPORT(0x006b7628, ClampedCounters::add_to_current_split<13>);
GUEST_EXPORT(0x006b6870, ClampedCounters::add_to_current_split<20>);
GUEST_EXPORT(0x006b7ff4, ClampedCounters::add_to_current_split<37>);
GUEST_EXPORT(0x006b786c, ClampedCounters::add_to_current_split<38>);
GUEST_EXPORT(0x006b730c, ClampedCounters::add_to_current_split<47>);
GUEST_EXPORT(0x006b898c, ClampedCounters::add_to_current_split<49>);
GUEST_EXPORT(0x006b8d80, ClampedCounters::add_to_current_split<50>);
GUEST_EXPORT(0x006b80cc, ClampedCounters::add_to_current_split<51>);
GUEST_EXPORT(0x006b85ec, ClampedCounters::add_to_current_split<58>);
GUEST_EXPORT(0x006b7b90, ClampedCounters::add_to_current_split<60>);
GUEST_EXPORT(0x006b77f8, ClampedCounters::add_to_current_split<62>);
GUEST_EXPORT(0x006b8a74, ClampedCounters::add_to_current_split<64>);
GUEST_EXPORT(0x006b7e24, ClampedCounters::add_to_current_split<71>);
GUEST_EXPORT(0x006b8a00, ClampedCounters::add_to_current_split<76>);
GUEST_EXPORT(0x006b7a44, ClampedCounters::add_to_current_split<78>);
GUEST_EXPORT(0x006b72a4, ClampedCounters::add_to_split<54>);
GUEST_EXPORT(0x006b8378, ClampedCounters::add_to_split<69>);
GUEST_EXPORT(0x006b8228, ClampedCounters::add_to_split<76>);
