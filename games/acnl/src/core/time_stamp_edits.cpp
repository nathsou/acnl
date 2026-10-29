// Building and editing TimeStamps: from a date, from single clock fields, and the seasons the calendar knows.
#include "core/time_stamp.hpp"

namespace {

constexpr s32 EARLIEST_YEAR = 2012;

// The kind flag (of the global byte's kind) that switches the calendar off.
constexpr u32 FLAG_CALENDAR_OFF = 0x20000;
constexpr u32 PERIOD_COUNT = 23;
constexpr u32 PERIOD_CALENDAR_OFF = 12;
constexpr u32 SEASON_CALENDAR_OFF = 1;
constexpr u32 MONTH_SHIFT = 8;

enum Season : u32 {
    SEASON_SPRING = 0,
    SEASON_SUMMER = 1,
    SEASON_AUTUMN = 2,
    SEASON_WINTER = 3,
};

enum Month : s8 {
    FEBRUARY = 2,
    MARCH = 3,
    MAY = 5,
    JUNE = 6,
    AUGUST = 8,
    SEPTEMBER = 9,
    OCTOBER = 10,
    NOVEMBER = 11,
};
constexpr s8 SPRING_STARTS_FEBRUARY_DAY = 25;
constexpr s8 WINTER_STARTS_NOVEMBER_DAY = 26;

inline constexpr guest::Function<0x002f74c8, u8()> read_global_byte_2;
inline constexpr guest::Function<0x002f74e0, u32(u32 mask, u32 index)> table_entry_has_all_bits;
inline guest::global<u16[PERIOD_COUNT], 0x0089027e> period_limits;

bool calendar_off() {
    return table_entry_has_all_bits(FLAG_CALENDAR_OFF, read_global_byte_2()) != 0;
}

// The time with the given fields (the conversion through a count normalises it).
TimeStamp from_fields(s32 year, s32 month, s32 day, s32 hour, s32 minute, s32 second, s32 millisecond) {
    TimeStamp fields{year, s8(month), s8(day), 0, s8(hour), s8(minute), s8(second), s16(millisecond)};
    return TimeStamp::from_milliseconds_since_2000(fields.milliseconds_since_2000());
}

gptr<TimeStamp> some_time(guest::Fuzz &f) {
    auto time = f.object<TimeStamp>();
    time->year = s32(2000 + f.below(60));
    time->month = s8(f.below(14));
    time->day = s8(s32(f.below(34)) - 2);
    time->hour = s8(f.below(24));
    time->minute = s8(f.below(60));
    time->second = s8(f.below(60));
    time->millisecond = s16(f.below(1000));
    return time;
}

}  // namespace

// The earliest time the game uses: 2012-01-01 00:00.
void construct_earliest_time(TimeStamp &out) {
    out = from_fields(EARLIEST_YEAR, 1, 1, 0, 0, 0, 0);
}
GUEST_EXPORT(0x0056bb88, construct_earliest_time);
GUEST_EXPORT(0x0056d00c, construct_earliest_time);
GUEST_FUZZ(0x0056bb88, 100, [](guest::Fuzz &f) { f.arguments(f.object<TimeStamp>()); });
GUEST_FUZZ(0x0056d00c, 100, [](guest::Fuzz &f) { f.arguments(f.object<TimeStamp>()); });

// The time of a date and a time of day.
void make_time(TimeStamp &out, s32 year, s32 month, s32 day, s32 hour, s32 minute, s32 second) {
    out = from_fields(year, month, day, hour, minute, second, 0);
}
GUEST_EXPORT(0x0056ca68, make_time);
GUEST_FUZZ(0x0056ca68, 200, [](guest::Fuzz &f) {
    f.arguments(f.object<TimeStamp>(), s32(2000 + f.below(100)), s32(1 + f.below(12)), s32(1 + f.below(31)), s32(f.below(24)),
                s32(f.below(60)), s32(f.below(60)));
});

// The nanoseconds from the fixed origin time to a date and a time of day.
s64 nanoseconds_of_date_time(s32 year, s32 month, s32 day, s32 hour, s32 minute, s32 second) {
    return from_fields(year, month, day, hour, minute, second, 0).nanoseconds_since_origin();
}
GUEST_EXPORT(0x0056caac, nanoseconds_of_date_time);
GUEST_FUZZ(0x0056caac, 200, [](guest::Fuzz &f) {
    f.arguments(s32(2000 + f.below(100)), s32(1 + f.below(12)), s32(1 + f.below(31)), s32(f.below(24)), s32(f.below(60)),
                s32(f.below(60)));
});

// The weekday (0 is Sunday) of a date.
u32 weekday_of_date(s32 year, s32 month, s32 day) {
    return from_fields(year, month, day, 0, 0, 0, 0).weekday;
}
GUEST_EXPORT(0x0056cb28, weekday_of_date);
GUEST_FUZZ(0x0056cb28, 200, [](guest::Fuzz &f) {
    f.arguments(s32(2000 + f.below(100)), s32(1 + f.below(12)), s32(1 + f.below(31)));
});

// The start of the game's day (6:00) at or before the reference time.
void current_day_start(TimeStamp &out) {
    TimeStamp time = *reference_time;
    time.move_to_day_start();
    out = time;
}
GUEST_EXPORT(0x0056c3ec, current_day_start);
GUEST_FUZZ(0x0056c3ec, 100, [](guest::Fuzz &f) { f.arguments(f.object<TimeStamp>()); });

void TimeStamp::set_hour(s32 value) {
    *this = from_fields(year, month, day, value, minute, second, millisecond);
}
GUEST_EXPORT(0x0056cce4, TimeStamp::set_hour);

void TimeStamp::set_minute(s32 value) {
    *this = from_fields(year, month, day, hour, value, second, millisecond);
}
GUEST_EXPORT(0x0056ce84, TimeStamp::set_minute);

void TimeStamp::set_second(s32 value) {
    *this = from_fields(year, month, day, hour, minute, value, millisecond);
}
GUEST_EXPORT(0x0056cedc, TimeStamp::set_second);

void TimeStamp::set_millisecond(s32 value) {
    *this = from_fields(year, month, day, hour, minute, second, value);
}
GUEST_EXPORT(0x0056cbe8, TimeStamp::set_millisecond);

GUEST_FUZZ(0x0056cce4, 150, [](guest::Fuzz &f) { f.arguments(some_time(f), s32(f.below(30))); });
GUEST_FUZZ(0x0056ce84, 150, [](guest::Fuzz &f) { f.arguments(some_time(f), s32(f.below(100)) - 20); });
GUEST_FUZZ(0x0056cedc, 150, [](guest::Fuzz &f) { f.arguments(some_time(f), s32(f.below(100)) - 20); });
GUEST_FUZZ(0x0056cbe8, 150, [](guest::Fuzz &f) { f.arguments(some_time(f), s32(f.below(1200)) - 100); });

u32 TimeStamp::season() const {
    if (calendar_off()) {
        return SEASON_CALENDAR_OFF;
    }
    if (month == FEBRUARY) {
        return day >= SPRING_STARTS_FEBRUARY_DAY ? SEASON_SPRING : SEASON_WINTER;
    }
    if (month >= MARCH && month <= MAY) {
        return SEASON_SPRING;
    }
    if (month >= JUNE && month <= AUGUST) {
        return SEASON_SUMMER;
    }
    if (month == SEPTEMBER || month == OCTOBER) {
        return SEASON_AUTUMN;
    }
    if (month == NOVEMBER) {
        return day >= WINTER_STARTS_NOVEMBER_DAY ? SEASON_WINTER : SEASON_AUTUMN;
    }
    return SEASON_WINTER;
}
GUEST_EXPORT(0x0056d060, TimeStamp::season);
GUEST_FUZZ(0x0056d060, 200, [](guest::Fuzz &f) { f.arguments(some_time(f)); });

u32 TimeStamp::period_of_year() const {
    if (calendar_off()) {
        return PERIOD_CALENDAR_OFF;
    }
    u16 value = u16(s32(day) | (u32(u8(month)) << MONTH_SHIFT));
    for (u32 index = 0; index < PERIOD_COUNT; index++) {
        if (period_limits[index] >= value) {
            return index;
        }
    }
    return 0;
}
GUEST_EXPORT(0x0056bc28, TimeStamp::period_of_year);
GUEST_FUZZ(0x0056bc28, 200, [](guest::Fuzz &f) { f.arguments(some_time(f)); });
