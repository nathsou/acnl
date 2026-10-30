// Flags the game rolls once a day (at random, with better odds on weekends).
#include "core/random.hpp"
#include "core/time_stamp.hpp"

namespace {

constexpr s32 PERCENT = 100;
constexpr u32 SUNDAY = 0;
constexpr u32 SATURDAY = 6;
constexpr s32 FIRST_CHANCE = 30;           // below this, the first flag of a pair
constexpr s32 SECOND_CHANCE_WEEKDAY = 50;  // below this (and not below FIRST_CHANCE), the second flag
constexpr s32 SECOND_CHANCE_WEEKEND = 80;
constexpr s32 STEP_WEEKDAY = 20;           // the thresholds of the last roll are multiples of this
constexpr s32 STEP_WEEKEND = 30;
constexpr u32 PAIRS_IN_FIRST_BYTE = 4;

// The flags of the second byte.
constexpr u8 SECOND_SINGLE = 1 << 0;
constexpr u8 SECOND_PAIR_FIRST = 1 << 1;
constexpr u8 SECOND_PAIR_SECOND = 1 << 2;
constexpr u8 SECOND_TRIPLE_FIRST = 1 << 3;
constexpr u8 SECOND_TRIPLE_SECOND = 1 << 4;
constexpr u8 SECOND_TRIPLE_THIRD = 1 << 5;
constexpr u8 SECOND_BYTE_ROLLED = 1 << 6;  // set once the flags of the day have been rolled

// The flags (two bytes).
struct DailyFlags {
    u8 first;
    u8 second;
};
GUEST_OFFSET(DailyFlags, second, 1);

bool is_weekend() {
    return reference_time->weekday == SUNDAY || reference_time->weekday == SATURDAY;
}

// Rolls a pair of flags: the first with FIRST_CHANCE percent, else the second with the odds up to `second_chance`.
u8 roll_pair(s32 second_chance, u8 first_flag, u8 second_flag) {
    s32 roll = random_below(PERCENT);
    if (roll < FIRST_CHANCE) {
        return first_flag;
    }
    return roll < second_chance ? second_flag : 0;
}

}  // namespace

// Rolls the day's flags: four pairs in the first byte, then in the second byte one flag (second chance), a pair and a
// triple (thresholds one, two and three steps). Nothing happens when they were rolled already (the top flag of the
// second byte) unless `force` is set.
void roll_daily_flags(DailyFlags &flags, bool force) {
    bool weekend = is_weekend();
    s32 second_chance = weekend ? SECOND_CHANCE_WEEKEND : SECOND_CHANCE_WEEKDAY;
    if (!force && (flags.second & SECOND_BYTE_ROLLED) != 0) {
        return;
    }
    flags.first = 0;
    flags.second = 0;
    for (u32 pair = 0; pair < PAIRS_IN_FIRST_BYTE; pair++) {
        flags.first |= u8(roll_pair(second_chance, 1u << (2 * pair), 2u << (2 * pair)));
    }
    if (random_below(PERCENT) < second_chance) {
        flags.second |= SECOND_SINGLE;
    }
    flags.second |= roll_pair(second_chance, SECOND_PAIR_FIRST, SECOND_PAIR_SECOND);
    s32 step = weekend ? STEP_WEEKEND : STEP_WEEKDAY;
    s32 roll = random_below(PERCENT);
    if (roll < step) {
        flags.second |= SECOND_TRIPLE_FIRST;
    } else if (roll < step * 2) {
        flags.second |= SECOND_TRIPLE_SECOND;
    } else if (roll < step * 3) {
        flags.second |= SECOND_TRIPLE_THIRD;
    }
    flags.second |= SECOND_BYTE_ROLLED;
}
GUEST_EXPORT(0x002d46f0, roll_daily_flags);
GUEST_FUZZ(0x002d46f0, 200, [](guest::Fuzz &f) {
    auto flags = f.object<DailyFlags>();
    flags->second = u8(f.number());
    f.arguments(flags, f.below(2));
});
