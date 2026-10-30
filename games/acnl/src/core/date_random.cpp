// The random numbers the game draws for a given day: a generator that is started from the date, so that everyone's
// game gets the same numbers for the same date (and town).
#include "core/random.hpp"
#include "core/time_stamp.hpp"
#include "save/save_data.hpp"

namespace {

constexpr u32 DAYS_PER_YEAR = 365;  // years are counted in 365 days
constexpr u32 DATE_SEED_BIAS = 31;
constexpr u32 TOWN_SEED_OFFSET = 0x53424;  // a word of the save data that is part of every seed
constexpr u32 WARM_UP_MASK = 7;            // the offset's low bits ...
constexpr u32 WARM_UP_BASE = 3;            // ... plus this many numbers are drawn and thrown away

inline guest::global<Random, 0x00952bdc> date_random;
inline constexpr guest::Function<0x002fb328, gptr<SaveData>()> get_save_data;

}  // namespace

// Starts the date generator for the day (at midnight of the date's year, month and day) and an offset that tells
// the uses apart, then throws away the first (offset & 7) + 3 numbers.
void seed_date_random(const TimeStamp &date, u32 offset) {
    u32 days = u32(date.year) * DAYS_PER_YEAR + DATE_SEED_BIAS + u32(s32(date.month)) + u32(s32(date.day));
    gptr<SaveData> save = get_save_data();
    u32 town_seed = *gptr<u32>(save.addr() + TOWN_SEED_OFFSET);
    date_random->state = town_seed + days + offset + save->flags_621b8;
    for (u32 draw = 0; draw < (offset & WARM_UP_MASK) + WARM_UP_BASE; draw++) {
        date_random->next_float();
    }
}
GUEST_EXPORT(0x002fd844, seed_date_random);
GUEST_FUZZ(0x002fd844, 200, [](guest::Fuzz &f) {
    auto date = f.object<TimeStamp>();
    date->year = s32(f.pick<u32>({2012, 2013, 2050, f.below(3000)}));
    date->month = s8(f.below(14) - 1);
    date->day = s8(f.below(33) - 1);
    f.arguments(date, f.pick<u32>({0, 1, 0x2239, 0x224b, f.number()}));
});
