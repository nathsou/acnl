// A calendar time of day (12 bytes): date and clock time down to the millisecond.
#pragma once

#include <cstring>

#include "guest/guest.hpp"

struct TimeStamp {
    s32 year;
    s8 month;
    s8 day;
    u8 weekday;     // 0 is Sunday; set when a count is converted to a time
    s8 hour;
    s8 minute;
    s8 second;
    s16 millisecond;

    static constexpr s64 MILLISECONDS_PER_SECOND = 1000;
    static constexpr s64 MILLISECONDS_PER_MINUTE = 60 * MILLISECONDS_PER_SECOND;
    static constexpr s64 MILLISECONDS_PER_HOUR = 60 * MILLISECONDS_PER_MINUTE;
    static constexpr s64 MILLISECONDS_PER_DAY = 24 * MILLISECONDS_PER_HOUR;

    static TimeStamp from_words(u32 w0, u32 w1, u32 w2) {
        u32 words[3] = {w0, w1, w2};
        TimeStamp t;
        std::memcpy(&t, words, sizeof(t));
        return t;
    }

    // Milliseconds since 2000-01-01 00:00 (the day count is only right for the years the game uses), and back.
    s64 milliseconds_since_2000() const;
    static TimeStamp from_milliseconds_since_2000(s64 count);
    // The span in nanoseconds from a fixed time (a global) to this one.
    s64 nanoseconds_since_origin() const;

    void add_milliseconds(s64 span);  // (then wrap_year)

    // The fields below set one clock field and normalise the time through a count (like advance).
    void set_hour(s32 value);
    void set_minute(s32 value);
    void set_second(s32 value);
    void set_millisecond(s32 value);

    // 0 spring (February 25th to May), 1 summer, 2 autumn (to November 25th), 3 winter; 1 when the calendar is off.
    u32 season() const;
    // The index of the first entry of a table of 23 (month, day) limits that is not before this day, 0 after the last
    // (the table is probably the 24 periods of the year); 12 when the calendar is off.
    u32 period_of_year() const;

    void add_days(s32 days);
    void add_hours(s32 hours);
    void advance(s32 days, s32 hours, s32 minutes, s32 seconds);  // (then wrap_year, even for a zero span)
    // Keeps the year in 2012..2050 by moving it by whole 39-year steps (the reason for the window is not known yet).
    void wrap_year();
    // Moves to the most recent 06:00:00.000 at or before the time (the game's day starts at 6 o'clock).
    void move_to_day_start();
};
GUEST_OFFSET(TimeStamp, month, 4);
GUEST_OFFSET(TimeStamp, day, 5);
GUEST_OFFSET(TimeStamp, weekday, 6);
GUEST_OFFSET(TimeStamp, hour, 7);
GUEST_OFFSET(TimeStamp, minute, 8);
GUEST_OFFSET(TimeStamp, second, 9);
GUEST_OFFSET(TimeStamp, millisecond, 0xa);
GUEST_SIZE(TimeStamp, 12);

// The game's reference time (the current time the game works with).
inline guest::global<TimeStamp, 0x00ad56b0> reference_time;
