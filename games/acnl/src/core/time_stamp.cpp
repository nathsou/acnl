// Moving a TimeStamp (a calendar date and a clock time, see time_stamp.hpp and calendar_math.cpp) by days, hours and
// so on, checking that a time falls in a range, and asking a table of handlers about each day of a range.
#include <cstring>

#include "core/time_stamp.hpp"
#include "guest/guest.hpp"

namespace {

// A handler of the table at 0x009524ec: asked through its second virtual function whether it accepts a day.
struct DayHandler {
    u32 vtable;
    u8 unknown_04[0x17];
    u8 kind;
};
GUEST_OFFSET(DayHandler, kind, 0x1b);

constexpr u32 DAY_HANDLER_COUNT = 56;
constexpr u32 ACCEPTS_DAY_VTABLE_SLOT = 1;
inline guest::global<guest::gptr<DayHandler>[DAY_HANDLER_COUNT], 0x009524ec> day_handlers;

// The global byte read by read_global_object_byte: 3 disables the day handlers (meaning not known yet).
constexpr u8 HANDLERS_DISABLED = 3;

inline guest::global<u8, 0x0095721c> mode_95721c;

// mode_95721c values and the index each maps to (meaning not known yet)
enum Mode95721c : u8 {
    MODE_0 = 0,
    MODE_1 = 1,
    MODE_2 = 2,
    MODE_5 = 5,
};

inline constexpr guest::Function<0x00305f2c, u8()> read_global_object_byte;

}  // namespace

// Maps the mode byte at 0x0095721c to a small index: 0, 1, 2 stay, 5 becomes 3, anything else 0.
u32 mode_95721c_index() {
    u8 mode = mode_95721c;
    switch (mode) {
    case MODE_0:
    case MODE_1:
    case MODE_2:
        return mode;
    case MODE_5:
        return 3;
    default:
        return 0;
    }
}
GUEST_EXPORT(0x00301484, mode_95721c_index);

void TimeStamp::add_milliseconds(s64 span) {
    *this = from_milliseconds_since_2000(milliseconds_since_2000() + span);
    wrap_year();
}

// Moves the time by a number of days (any sign).
void TimeStamp::add_days(s32 days) {
    if (days == 0) {
        return;
    }
    add_milliseconds(s64(days) * MILLISECONDS_PER_DAY);
}
GUEST_EXPORT(0x003014b4, TimeStamp::add_days);

// Moves the time by a number of hours (any sign).
void TimeStamp::add_hours(s32 hours) {
    if (hours == 0) {
        return;
    }
    add_milliseconds(s64(hours) * MILLISECONDS_PER_HOUR);
}
GUEST_EXPORT(0x0056cc38, TimeStamp::add_hours);

// Moves the time by a number of minutes or seconds (any sign).
void TimeStamp::add_minutes(s32 minutes) {
    if (minutes == 0) {
        return;
    }
    add_milliseconds(s64(minutes) * MILLISECONDS_PER_MINUTE);
}
GUEST_EXPORT(0x0056cd34, TimeStamp::add_minutes);

void TimeStamp::add_seconds(s32 seconds) {
    if (seconds == 0) {
        return;
    }
    add_milliseconds(s64(seconds) * MILLISECONDS_PER_SECOND);
}
GUEST_EXPORT(0x0056cddc, TimeStamp::add_seconds);

// Moves the time by days, hours, minutes and seconds (any sign).
void TimeStamp::advance(s32 days, s32 hours, s32 minutes, s32 seconds) {
    add_milliseconds(s64(days) * MILLISECONDS_PER_DAY + s64(hours) * MILLISECONDS_PER_HOUR +
                     s64(minutes) * MILLISECONDS_PER_MINUTE + s64(seconds) * MILLISECONDS_PER_SECOND);
}
GUEST_EXPORT(0x0030a488, TimeStamp::advance);

namespace {

constexpr s32 DAY_START_HOUR = 6;
constexpr s32 HOURS_BACK = -DAY_START_HOUR;

// Rebuilds the time from its date and the given clock fields (the conversion through a count normalises it).
void reset_clock(TimeStamp &time, s32 hour, s32 minute, s32 second, s32 millisecond) {
    TimeStamp fields{time.year, time.month, time.day, 0, s8(hour), s8(minute), s8(second), s16(millisecond)};
    time = TimeStamp::from_milliseconds_since_2000(fields.milliseconds_since_2000());
}

}  // namespace

void TimeStamp::move_to_day_start() {
    add_hours(HOURS_BACK);
    reset_clock(*this, DAY_START_HOUR, minute, second, millisecond);
    reset_clock(*this, hour, 0, second, millisecond);
    reset_clock(*this, hour, minute, 0, millisecond);
    reset_clock(*this, hour, minute, second, 0);
}
GUEST_EXPORT(0x00308efc, TimeStamp::move_to_day_start);

// Whether time is in [begin, end), where a range with begin >= end wraps around.
// The three times are passed by value (12 bytes each).
bool value12_in_range(u32 time0, u32 time1, u32 time2, u32 begin0, u32 begin1, u32 begin2, u32 end0, u32 end1,
                      u32 end2) {
    s64 time = TimeStamp::from_words(time0, time1, time2).nanoseconds_since_origin();
    s64 begin = TimeStamp::from_words(begin0, begin1, begin2).nanoseconds_since_origin();
    s64 end = TimeStamp::from_words(end0, end1, end2).nanoseconds_since_origin();
    if (begin < end) {
        return time >= begin && time < end;
    }
    return time < end || time >= begin;
}
GUEST_EXPORT(0x00301564, value12_in_range);

// For each day from start + min(a, b) to start + max(a, b) days, asks every handler of the given kind whether it
// accepts that day; true as soon as one does. With `adjust` set each day goes through adjust_time_stamp first.
bool any_day_handler_accepts(u32 kind, u32 start0, u32 start1, u32 start2, s32 offset_a, s32 offset_b, u32 adjust) {
    if (read_global_object_byte() == HANDLERS_DISABLED) {
        return false;
    }
    s32 first = offset_a < offset_b ? offset_a : offset_b;
    s32 last = offset_a < offset_b ? offset_b : offset_a;

    guest::StackObject<TimeStamp> day;
    *day = TimeStamp::from_words(start0, start1, start2);
    day->add_days(first);
    guest::StackObject<TimeStamp> asked;
    for (s32 offset = first; offset <= last; offset++) {
        *asked = *day;
        if (read_global_object_byte() != HANDLERS_DISABLED) {
            if (adjust != 0) {
                asked->move_to_day_start();
            }
            for (u32 i = 0; i < DAY_HANDLER_COUNT; i++) {
                gptr<DayHandler> handler = day_handlers[i];
                if (handler->kind != kind) {
                    continue;
                }
                u32 accepts = *gptr<u32>(handler->vtable + ACCEPTS_DAY_VTABLE_SLOT * 4);
                if (guest::call_address<u32>(accepts, handler, asked->year, s32(asked->month),
                                             s32(asked->day)) != 0) {
                    return true;
                }
            }
        }
        day->add_days(1);
    }
    return false;
}
GUEST_EXPORT(0x003015ec, any_day_handler_accepts);
