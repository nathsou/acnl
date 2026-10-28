// Counters the game keeps as signed 32-bit values, clamped when added to: grand totals up to 999,999,999 and
// per-entry tallies (72 entries, each also split four ways) up to 9,999. Nothing is counted while
// read_global_object_byte() reports mode 3.
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

struct ClampedCounters {
    s32 total;                    // sum of parts, up to TOTAL_MAX
    s32 parts[4];                 // up to TOTAL_MAX
    s32 unknown_14;               // up to TOTAL_MAX
    u8 unknown_18[0x640 - 0x18];
    s32 tally_a[ENTRIES];         // up to TALLY_MAX
    s32 tally_a_split[ENTRIES][SPLITS];
    s32 tally_b[ENTRIES];
    s32 tally_b_split[ENTRIES][SPLITS];

    void add_to_unknown_14(s32 amount);
    void add_to_part(u32 index, s32 amount);
    void add_to_tally_a(u32 index, s32 amount);
    void add_to_tally_b(u32 index, s32 amount);

private:
    void add_to_total(s32 amount);
    void add_to_tally_a_total(u32 index, s32 amount);
    void add_to_tally_b_total(u32 index, s32 amount);
};
GUEST_OFFSET(ClampedCounters, total, 0x0);
GUEST_OFFSET(ClampedCounters, parts, 0x4);
GUEST_OFFSET(ClampedCounters, unknown_14, 0x14);
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
    unknown_14 = add_clamped(unknown_14, amount, TOTAL_MAX);
}
GUEST_EXPORT(0x006b5c5c, ClampedCounters::add_to_unknown_14);

// (the original's routine at 0x006b5740)
void ClampedCounters::add_to_total(s32 amount) {
    if (!counting()) {
        return;
    }
    total = add_clamped(total, amount, TOTAL_MAX);
}

// Adds to one part, then to the total.
void ClampedCounters::add_to_part(u32 index, s32 amount) {
    if (!counting()) {
        return;
    }
    parts[index] = add_clamped(parts[index], amount, TOTAL_MAX);
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

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

static s32 some_amount(guest::Fuzz &f) {
    return s32(f.pick<u32>({0, 1, 0xffffffff, 9'999, 10'000, 999'999'999, 0x7fffffff, 0x80000000, f.number(),
                            f.below(20000) - 10000}));
}

static gptr<ClampedCounters> some_counters(guest::Fuzz &f) {
    auto counters = f.object<ClampedCounters>();
    if (f.below(2) != 0) {
        counters->total = s32(f.below(TOTAL_MAX + 1u));
        counters->unknown_14 = s32(f.below(TOTAL_MAX + 1u));
    }
    return counters;
}

GUEST_FUZZ(0x006b563c, 200, [](guest::Fuzz &f) { f.arguments(); });
GUEST_FUZZ(0x006b5c5c, 300, [](guest::Fuzz &f) { f.arguments(some_counters(f), some_amount(f)); });
GUEST_FUZZ(0x006b6624, 300, [](guest::Fuzz &f) {
    auto counters = some_counters(f);
    f.arguments(counters, f.below(4), some_amount(f));
});
GUEST_FUZZ(0x006b60d8, 300, [](guest::Fuzz &f) {
    auto counters = some_counters(f);
    f.arguments(counters, f.below(ENTRIES), some_amount(f));
});
GUEST_FUZZ(0x006b59ac, 300, [](guest::Fuzz &f) {
    auto counters = some_counters(f);
    f.arguments(counters, f.below(ENTRIES), some_amount(f));
});
