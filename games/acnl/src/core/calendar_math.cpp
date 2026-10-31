// The calendar arithmetic under TimeStamp: a date and a clock time become a count of milliseconds since 2000-01-01
// 00:00, and back. The compiler replaced every division by multiplications, here they are plain divisions again.
#include <algorithm>

#include "core/time_stamp.hpp"
#include "core/wide_division.hpp"

namespace {

constexpr s32 EPOCH_YEAR = 2000;
constexpr s32 DAYS_PER_4_YEARS = 1461;
constexpr s32 DAYS_PER_400_YEARS = 146097;  // the days of a century are a quarter of this, rounded down
// The year is counted from March, so the leap day ends it: the months then add up to (153 * m + 2) / 5 days.
constexpr s32 MARCH_MONTH_DAYS_NUMERATOR = 153;
constexpr s32 MARCH_MONTH_DAYS_BIAS = 2;
constexpr s32 MARCH_MONTH_DAYS_DENOMINATOR = 5;
constexpr s32 MARCH_FIRST_MONTH = 3;
constexpr s32 MONTHS_BEFORE_MARCH_SHIFT = 9;  // January and February count as months 10 and 11 of the year before
constexpr s32 DAYS_JANUARY_FEBRUARY = 59;     // before March 1st in a year without leap day
constexpr s32 DAYS_BEFORE_MARCH_2000 = DAYS_JANUARY_FEBRUARY + 1;
constexpr s32 YEARS_PER_CENTURY = 100;
constexpr s32 YEARS_PER_LEAP_CYCLE = 400;
constexpr s32 YEARS_PER_LEAP_STEP = 4;
constexpr s32 FEBRUARY = 2;

// The way back (a day number to a date) works on the days since 2000-03-01 split into cycles of 400, 100 and 4 years.
constexpr s32 DAYS_PER_CENTURY = 36524;  // all but the last century of a cycle; the leap day of the cycle ends the last
constexpr s32 DAYS_PER_YEAR = 365;
constexpr s32 CENTURIES_WITH_LEAP_DAY_LAST = 4;  // a century index that is 4 is the cycle's last day (February 29th)
constexpr s32 YEARS_WITH_LEAP_DAY_LAST = 4;      // the same for the year index in a 4-year group
constexpr s32 LEAP_DAY = 29;
constexpr s32 FIRST_MONTH_OF_NEXT_YEAR = 10;     // March-based months 10 and 11 are January and February
constexpr s32 MARCH_BASED_JANUARY_SHIFT = 9;
constexpr s32 WEEKDAY_OF_2000_01_01 = 6;         // a Saturday
constexpr s32 DAYS_PER_WEEK = 7;

// The count of days that makes the ms count positive before dividing (so the division rounds down).
constexpr s64 COUNT_DAY_BIAS = 730119;
constexpr s32 MILLISECONDS_PER_HOUR_S32 = 3'600'000;
constexpr s32 MILLISECONDS_PER_MINUTE_S32 = 60'000;
constexpr s32 MILLISECONDS_PER_SECOND_S32 = 1000;
constexpr s32 MINUTES_PER_HOUR = 60;
constexpr s32 SECONDS_PER_MINUTE = 60;

constexpr s64 NANOSECONDS_PER_MILLISECOND = 1'000'000;

constexpr s32 YEAR_WINDOW_FIRST = 2012;
constexpr s32 YEAR_WINDOW_SIZE = 39;
constexpr s32 YEAR_WINDOW_END = YEAR_WINDOW_FIRST + YEAR_WINDOW_SIZE;  // 2051

// The time (in milliseconds since 2000-01-01) that words12_to_s64 measures from.
inline guest::global<s64, 0x0095c528> time_origin;

bool is_leap_year_count(s32 years) {
    if (years % YEARS_PER_LEAP_CYCLE == 0) {
        return true;
    }
    if (years % YEARS_PER_CENTURY == 0) {
        return false;
    }
    return years % YEARS_PER_LEAP_STEP == 0;
}

// The days from 2000-01-01 to the date. For dates before the start of March 2000 the one extra day of the epoch is only
// counted when the March-based year is a leap year; from 2000 on it is always counted.
s32 days_since_2000(s32 year, s32 month, s32 day) {
    s32 years = year - EPOCH_YEAR;
    s32 march_month;
    if (month <= FEBRUARY) {
        march_month = month + MONTHS_BEFORE_MARCH_SHIFT;
        years -= 1;
    } else {
        march_month = month - MARCH_FIRST_MONTH;
    }
    s32 extra_day = 1;
    if (years < 0) {
        extra_day = is_leap_year_count(years) ? 1 : 0;
    }
    s32 centuries = years / YEARS_PER_CENTURY;
    s32 year_of_century = years - centuries * YEARS_PER_CENTURY;
    return (centuries * DAYS_PER_400_YEARS) / 4 + (year_of_century * DAYS_PER_4_YEARS) / 4 +
           (MARCH_MONTH_DAYS_NUMERATOR * march_month + MARCH_MONTH_DAYS_BIAS) / MARCH_MONTH_DAYS_DENOMINATOR + (day - 1) +
           extra_day + DAYS_JANUARY_FEBRUARY;
}

s64 count_of_fields(s32 year, s32 month, s32 day, s32 hour, s32 minute, s32 second, s32 millisecond) {
    return s64(days_since_2000(year, month, day)) * TimeStamp::MILLISECONDS_PER_DAY + s64(hour) * TimeStamp::MILLISECONDS_PER_HOUR +
           s64(minute) * TimeStamp::MILLISECONDS_PER_MINUTE + s64(second) * TimeStamp::MILLISECONDS_PER_SECOND + s64(millisecond);
}

struct CivilDate {
    s32 year;
    s32 month;
    s32 day;
};

CivilDate date_of_day(s32 days) {
    s32 since_march = days - DAYS_BEFORE_MARCH_2000;
    s32 cycles = since_march / DAYS_PER_400_YEARS;
    s32 day_of_cycle = since_march - cycles * DAYS_PER_400_YEARS;
    if (day_of_cycle < 0) {
        cycles -= 1;
        day_of_cycle += DAYS_PER_400_YEARS;
    }
    s32 centuries = day_of_cycle / DAYS_PER_CENTURY;
    s32 day_of_century = day_of_cycle - centuries * DAYS_PER_CENTURY;
    s32 quads = day_of_century / DAYS_PER_4_YEARS;
    s32 day_of_quad = day_of_century - quads * DAYS_PER_4_YEARS;
    s32 year_in_quad = day_of_quad / DAYS_PER_YEAR;
    s32 day_of_year = day_of_quad - year_in_quad * DAYS_PER_YEAR;
    s32 march_month = (MARCH_MONTH_DAYS_DENOMINATOR * day_of_year + MARCH_MONTH_DAYS_BIAS) / MARCH_MONTH_DAYS_NUMERATOR;

    CivilDate date;
    date.year = EPOCH_YEAR + YEARS_PER_LEAP_CYCLE * cycles + YEARS_PER_CENTURY * centuries + YEARS_PER_LEAP_STEP * quads +
                year_in_quad;
    date.day = day_of_year - (MARCH_MONTH_DAYS_NUMERATOR * march_month + MARCH_MONTH_DAYS_BIAS) / MARCH_MONTH_DAYS_DENOMINATOR + 1;
    if (year_in_quad == YEARS_WITH_LEAP_DAY_LAST || centuries == CENTURIES_WITH_LEAP_DAY_LAST) {
        date.month = FEBRUARY;
        date.day = LEAP_DAY;
    } else if (march_month >= FIRST_MONTH_OF_NEXT_YEAR) {
        date.month = march_month - MARCH_BASED_JANUARY_SHIFT;
        date.year += 1;
    } else {
        date.month = march_month + MARCH_FIRST_MONTH;
    }
    return date;
}

}  // namespace

s64 TimeStamp::milliseconds_since_2000() const {
    return count_of_fields(year, month, day, hour, minute, second, millisecond);
}

s32 days_from_2000(s32 year, s32 month, s32 day) {
    return days_since_2000(year, month, day);
}
GUEST_EXPORT(0x0012f87c, days_from_2000);

// Writes the count of milliseconds since 2000-01-01 of a date and a time of day.
void fields_to_count(gptr<s64> out, s32 year, s32 month, s32 day, s32 hour, s32 minute, s32 second, s32 millisecond) {
    *out = count_of_fields(year, month, day, hour, minute, second, millisecond);
}
GUEST_EXPORT(0x00129698, fields_to_count);

// The same, returning the output pointer.
gptr<s64> make_count(gptr<s64> out, s32 year, s32 month, s32 day, s32 hour, s32 minute, s32 second, s32 millisecond) {
    *out = count_of_fields(year, month, day, hour, minute, second, millisecond);
    return out;
}
GUEST_EXPORT(0x0012f974, make_count);

// The year, month and day of a day number (days since 2000-01-01); the outputs may be null.
void date_from_days(gptr<s32> year, gptr<s32> month, gptr<s32> day, s32 days) {
    CivilDate date = date_of_day(days);
    if (year != nullptr) {
        *year = date.year;
    }
    if (month != nullptr) {
        *month = date.month;
    }
    if (day != nullptr) {
        *day = date.day;
    }
}
GUEST_EXPORT(0x00129508, date_from_days);

TimeStamp TimeStamp::from_milliseconds_since_2000(s64 count) {
    s64 biased = count + COUNT_DAY_BIAS * TimeStamp::MILLISECONDS_PER_DAY;
    s32 days = s32(biased / TimeStamp::MILLISECONDS_PER_DAY) - s32(COUNT_DAY_BIAS);
    s32 milliseconds_of_day = s32(biased % TimeStamp::MILLISECONDS_PER_DAY);
    CivilDate date = date_of_day(days);
    s32 weekday = ((days + WEEKDAY_OF_2000_01_01) % DAYS_PER_WEEK + DAYS_PER_WEEK) % DAYS_PER_WEEK;
    s32 seconds_of_day = milliseconds_of_day / MILLISECONDS_PER_SECOND_S32;
    TimeStamp time;
    time.year = date.year;
    time.month = s8(date.month);
    time.day = s8(date.day);
    time.weekday = u8(weekday);
    time.hour = s8(milliseconds_of_day / MILLISECONDS_PER_HOUR_S32);
    time.minute = s8(milliseconds_of_day / MILLISECONDS_PER_MINUTE_S32 % MINUTES_PER_HOUR);
    time.second = s8(seconds_of_day % SECONDS_PER_MINUTE);
    time.millisecond = s16(milliseconds_of_day - seconds_of_day * MILLISECONDS_PER_SECOND_S32);
    return time;
}

// Converts a count of milliseconds since 2000-01-01 to a time.
void count_to_time_stamp(gptr<TimeStamp> out, gptr<const s64> count) {
    *out = TimeStamp::from_milliseconds_since_2000(*count);
}
GUEST_EXPORT(0x001264f0, count_to_time_stamp);

void time_stamp_to_count(gptr<s64> out, const TimeStamp &time) {
    *out = time.milliseconds_since_2000();
}
GUEST_EXPORT(0x001240fc, time_stamp_to_count);

s64 TimeStamp::nanoseconds_since_origin() const {
    s64 origin = time_origin;
    return s64(u64(milliseconds_since_2000() - origin) * u64(NANOSECONDS_PER_MILLISECOND));
}
GUEST_EXPORT(0x0056be20, TimeStamp::nanoseconds_since_origin);

// The origin plus the nanoseconds (rounded toward zero to milliseconds).
TimeStamp TimeStamp::from_nanoseconds_since_origin(s64 nanoseconds) {
    s64 origin = time_origin;
    return from_milliseconds_since_2000(origin + divide_by_reciprocal_value(nanoseconds, MILLION_RECIPROCAL, MILLION_SHIFT));
}

// Writes the time that is the given nanoseconds after the origin (the second argument register is skipped).
void time_stamp_from_nanoseconds(TimeStamp &out, s64 nanoseconds) {
    out = TimeStamp::from_nanoseconds_since_origin(nanoseconds);
}
GUEST_EXPORT(0x0056c258, time_stamp_from_nanoseconds);

void TimeStamp::wrap_year() {
    s32 current = year;
    if (current >= YEAR_WINDOW_END) {
        current -= YEAR_WINDOW_SIZE;
        if (current >= YEAR_WINDOW_END) {
            current -= YEAR_WINDOW_SIZE;
        }
        year = current >= YEAR_WINDOW_END ? YEAR_WINDOW_FIRST : current;
    } else if (current < YEAR_WINDOW_FIRST) {
        current += YEAR_WINDOW_SIZE;
        if (current < YEAR_WINDOW_FIRST) {
            current += YEAR_WINDOW_SIZE;
        }
        year = std::max(YEAR_WINDOW_FIRST, current);
    }
}
GUEST_EXPORT(0x0056cb7c, TimeStamp::wrap_year);
