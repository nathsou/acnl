// Times of day that something is scheduled for, kept as an hour and a minute next to a game time (the date).
#include <cstring>

#include "core/time_stamp.hpp"
#include "guest/guest.hpp"

void make_time(TimeStamp &out, s32 year, s32 month, s32 day, s32 hour, s32 minute, s32 second);

namespace {

inline constexpr guest::Function<0x002fb4a0, bool(u32 a0, u32 a1, u32 a2, u32 b0, u32 b1, u32 b2)> words_not_less;

constexpr s32 ONE_DAY = 1;

// A scheduled time: the date comes from `date`, the time of day from the hour and the minute.
struct ScheduledTime {
    static constexpr u8 FLAG_NEXT_DAY_WHEN_PAST = 1;  // when the time of day is before that of `date`, it is the next day's

    u8 unknown_00[0x16];
    u8 date[sizeof(GameTime)];  // a GameTime (not aligned)
    u8 unknown_1e[0x22 - 0x1e];
    u8 hour;
    u8 minute;
    u8 flags;
};
GUEST_OFFSET(ScheduledTime, date, 0x16);
GUEST_OFFSET(ScheduledTime, hour, 0x22);
GUEST_OFFSET(ScheduledTime, minute, 0x23);
GUEST_OFFSET(ScheduledTime, flags, 0x24);

bool is_not_before(const TimeStamp &later, const TimeStamp &earlier) {
    u32 a[3];
    u32 b[3];
    std::memcpy(a, &later, sizeof(a));
    std::memcpy(b, &earlier, sizeof(b));
    return words_not_less(a[0], a[1], a[2], b[0], b[1], b[2]);
}

}  // namespace

// Whether `now` is at or after the scheduled time plus the extra minutes: the hour and minute on the date of the
// schedule's game time (with the second of that time), moved to the next day when the flag asks for it and the time of
// day has already passed on that date.
bool scheduled_time_has_passed(const ScheduledTime &schedule, const TimeStamp &now, s32 extra_minutes) {
    GameTime game_time;
    std::memcpy(&game_time, schedule.date, sizeof(game_time));
    TimeStamp date = game_time.to_time_stamp();
    TimeStamp due;
    make_time(due, date.year, date.month, date.day, schedule.hour, schedule.minute, date.second);
    if ((schedule.flags & ScheduledTime::FLAG_NEXT_DAY_WHEN_PAST) != 0 && !is_not_before(due, date)) {
        due.add_days(ONE_DAY);
    }
    due.add_minutes(extra_minutes);
    return is_not_before(now, due);
}
GUEST_EXPORT(0x00757620, scheduled_time_has_passed);
