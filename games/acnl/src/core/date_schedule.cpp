// Schedules that say on which days and at what time of day something happens (an event's record keeps a day pattern and a
// time pattern), and whether a time stamp fits them.
#include "core/fuzz_helpers.hpp"
#include "core/time_stamp.hpp"
#include "guest/guest.hpp"

using guest::gptr;

namespace {

inline constexpr guest::Function<0x0056b4d4, u32(s32 year, u32 month)> days_in_month;
inline constexpr guest::Function<0x0056b970, u32(const TimeStamp &time)> time_of_day_group;

// Day patterns: 1-31 is that day of the month, then these (patterns from NO_DAY_LIMIT on, and 0, mean every day).
constexpr u32 LAST_DAY_OF_MONTH = 0x20;
constexpr u32 FIRST_TEN_DAYS = 0x21;
constexpr u32 SECOND_TEN_DAYS = 0x22;
constexpr u32 LAST_DAYS = 0x23;
constexpr u32 EVEN_DAYS = 0x24;
constexpr u32 ODD_DAYS = 0x25;
constexpr u32 NO_DAY_LIMIT = 0x26;
constexpr u32 LAST_DAY_NUMBER = 31;
constexpr u32 TEN_DAYS = 10;
constexpr u32 LAST_DAYS_FIRST = 21;
constexpr u32 LAST_DAYS_COUNT = 11;

// Time patterns: 1-6 is that time of day group, 7-9 are two groups each, 10-33 is that hour (10 for hour 0).
constexpr u32 GROUP_PATTERN_LAST = 6;
constexpr u32 GROUP_PAIR_FIRST = 7;
constexpr u32 GROUP_PAIR_LAST = 9;
constexpr u32 HOUR_PATTERN_FIRST = 10;
constexpr u32 HOUR_PATTERN_COUNT = 24;
constexpr u32 NO_TIME_LIMIT = 0x22;

struct Schedule {
    u8 unknown_00[6];
    u8 time_pattern;
    u8 unknown_07[2];
    u8 day_pattern;
};
GUEST_OFFSET(Schedule, time_pattern, 6);
GUEST_OFFSET(Schedule, day_pattern, 9);

}  // namespace

// Whether the day of the time stamp fits the schedule's day pattern.
bool schedule_matches_day(gptr<gptr<Schedule>> schedule_pointer, gptr<gptr<TimeStamp>> time_pointer) {
    u32 pattern = (*schedule_pointer)->day_pattern;
    if (pattern >= NO_DAY_LIMIT || pattern == 0) {
        return true;
    }
    const TimeStamp &time = **time_pointer;
    u32 day = u32(s32(time.day));
    if (pattern < LAST_DAY_OF_MONTH) {
        return s32(day) == s32(pattern);
    }
    switch (pattern) {
    case LAST_DAY_OF_MONTH:
        return s32(day) == s32(days_in_month(time.year, u32(s32(time.month))));
    case FIRST_TEN_DAYS:
        return day - 1 < TEN_DAYS;
    case SECOND_TEN_DAYS:
        return day - TEN_DAYS - 1 < TEN_DAYS;
    case LAST_DAYS:
        return day - LAST_DAYS_FIRST < LAST_DAYS_COUNT;
    case EVEN_DAYS:
        return (day & 1) == 0;
    default:
        return (day & 1) != 0;
    }
}
GUEST_EXPORT(0x0075b464, schedule_matches_day);

// Whether the hour of the time stamp fits the schedule's time pattern.
bool schedule_matches_time(gptr<gptr<Schedule>> schedule_pointer, gptr<gptr<TimeStamp>> time_pointer) {
    u32 pattern = (*schedule_pointer)->time_pattern;
    if (pattern >= NO_TIME_LIMIT || pattern == 0) {
        return true;
    }
    const TimeStamp &time = **time_pointer;
    if (pattern - HOUR_PATTERN_FIRST < HOUR_PATTERN_COUNT) {
        return s32(time.hour) == s32(pattern - HOUR_PATTERN_FIRST);
    }
    u32 group = time_of_day_group(time);
    if (pattern <= GROUP_PATTERN_LAST) {
        return group == pattern - 1;
    }
    if (pattern >= GROUP_PAIR_FIRST && pattern <= GROUP_PAIR_LAST) {
        u32 first = (pattern - GROUP_PAIR_FIRST) * 2;
        return group == first || group == first + 1;
    }
    return false;
}
GUEST_EXPORT(0x0075b374, schedule_matches_time);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

static void fuzz_schedule(guest::Fuzz &f, bool day) {
    auto schedule = f.object<Schedule>();
    auto time = f.object<TimeStamp>();
    time->year = f.pick<s32>({2012, 2016, 2100, 2024, 2023});
    time->month = s8(1 + f.below(12));
    time->day = s8(1 + f.below(31));
    time->hour = s8(f.below(24));
    u8 pattern = u8(f.pick<u32>({0, 1 + f.below(31), 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 1 + f.below(9), 10 + f.below(24), 0x22}));
    if (day) {
        schedule->day_pattern = pattern;
        if (pattern == LAST_DAY_OF_MONTH && f.below(2) != 0) {
            time->day = s8(days_in_month(time->year, u32(time->month)));
        } else if (pattern > 0 && pattern <= LAST_DAY_NUMBER && f.below(3) == 0) {
            time->day = s8(pattern);
        }
    } else {
        schedule->time_pattern = pattern;
        if (pattern >= HOUR_PATTERN_FIRST && f.below(3) == 0) {
            time->hour = s8(pattern - HOUR_PATTERN_FIRST);
        }
    }
    auto schedule_pointer = f.object<gptr<Schedule>>();
    auto time_pointer = f.object<gptr<TimeStamp>>();
    *schedule_pointer = schedule;
    *time_pointer = time;
    f.arguments(schedule_pointer, time_pointer);
}
GUEST_FUZZ(0x0075b464, 400, [](guest::Fuzz &f) { fuzz_schedule(f, true); });
GUEST_FUZZ(0x0075b374, 400, [](guest::Fuzz &f) { fuzz_schedule(f, false); });
