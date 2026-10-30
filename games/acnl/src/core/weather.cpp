// The weather: every game day has a weather pattern (0-0x33) that says which of the weather types (0-10) it is at every
// hour. The pattern of a day comes from the save data for today and tomorrow and from a generator for other days
// (weather_pattern_of_day), or from a three-day cycle (weather_pattern_cycled) in the modes whose flag 0x20000... see below.
#include "core/fuzz_helpers.hpp"
#include "core/time_stamp.hpp"
#include "guest/guest.hpp"
#include "save/save_data.hpp"

using guest::gptr;

s32 days_from_2000(s32 year, s32 month, s32 day);
s64 days_between(const TimeStamp &later, const TimeStamp &earlier, bool adjust);
bool day_has_changed();
u32 period_table_value(u32 index);

namespace {

inline constexpr guest::Function<0x002f74c8, u8()> read_global_byte_2;
inline constexpr guest::Function<0x002f74e0, u32(u32 mask, u32 index)> table_entry_has_all_bits;
inline constexpr guest::Function<0x00305f2c, u8()> read_global_object_byte;
inline constexpr guest::Function<0x001e5e70, u32(u32 period, u32 index)> period_row_value;
inline constexpr guest::Function<0x002fb328, gptr<SaveData>()> get_save_data;
inline constexpr guest::Function<0x0076eb40, u32(gptr<u8> user)> slot_byte_0a;
inline constexpr guest::Function<0x00318568, u32(const TimeStamp &day)> generated_weather_pattern;

constexpr u32 FLAG_OTHER_SOURCE = 0x20000;   // modes in which the weather comes from the cycle (meaning not known yet)
constexpr u32 FLAG_SLOT_SOURCE_A = 0x80000;  // modes in which it is a byte of the current record's slot
constexpr u32 FLAG_SLOT_SOURCE_B = 0x100000;
constexpr u8 STATE_ACTIVE = 7;               // the value of the weather state byte while the weather runs
constexpr u32 PATTERN_COUNT = 0x34;
constexpr u32 HOURS = 24;
constexpr s32 DAY_FIRST_HOUR = 6;            // the weather day starts at 6 o'clock
constexpr u32 CYCLE_LENGTH = 3;
constexpr u8 OBJECT_BYTE_NO_STORED_WEATHER = 3;
constexpr u32 SNOW_PERIOD_VALUE = 9;         // see is_snow_period
constexpr u32 SNOW_PERIOD_INDEX = 0;
constexpr u32 CHANGE_PERIOD_INDEX = 8;       // the period table value that turns some weather into other (the same table as above)
constexpr u32 CHANGE_PERIOD_VALUE = 1;
constexpr u32 NO_WEATHER_MODE_A = 0x5d, NO_WEATHER_MODE_B = 0x99, NO_WEATHER_MODE_C = 0x9b;  // global bytes without weather
constexpr u32 SNOWY_PATTERN_FIRST = 1, SNOWY_PATTERN_LAST = 4, SNOWY_PATTERN_EXTRA = 0x33;

constexpr u32 PATTERN_EVENT_FIRST = 0x13, PATTERN_EVENT_LAST = 0x17;  // patterns with a rain or snow event (meaning not known yet)
constexpr u32 EVENT_PATTERN_COUNT = PATTERN_EVENT_LAST - PATTERN_EVENT_FIRST + 1;
constexpr u32 PATTERN_NONE = 0;
constexpr u8 SNOW_EVENT_HOUR_1 = 0x17;                        // the start of the snow event for the patterns 1, 2, 3 and 4 (0x33)
constexpr u8 SNOW_EVENT_HOUR_2 = 0x16, SNOW_EVENT_MINUTE_2 = 0xf;
constexpr u8 SNOW_EVENT_HOUR_3 = 0x15, SNOW_EVENT_MINUTE_3 = 0x1e;
constexpr u8 SNOW_EVENT_HOUR_4 = 0x14, SNOW_EVENT_MINUTE_4 = 0x2d;
constexpr s32 NO_HOUR = -1;
constexpr u32 PHASE_BEFORE = 0, PHASE_DURING = 1, PHASE_AFTER = 2, PHASE_NONE = 3;
constexpr u32 EVENING_HOUR = 0x13;      // the window of the evening phases
constexpr s32 EVENING_HOURS = 9;
constexpr s32 ONE_HOUR = 1;
constexpr u8 TYPE_3 = 3, TYPE_4 = 4, TYPE_5 = 5, TYPE_6 = 6;  // weather types that are replaced in the changed period
constexpr u32 CLASS_2 = 2, CLASS_6 = 6, CLASS_7 = 7, CLASS_8 = 8, CLASS_9 = 9, CLASS_10 = 10;

// The weather state byte, the hourly types of every pattern (24 bytes from 6 o'clock), the classes of the patterns and the
// patterns of the cycle.
inline guest::global<u8, 0x0095df98> weather_state;
inline guest::global<gptr<u8>[PATTERN_COUNT], 0x0095df9c> hourly_types;
inline guest::global<u8[PATTERN_COUNT], 0x00895b6c> pattern_classes;
inline guest::global<u8[CYCLE_LENGTH], 0x00895064> cycle_patterns;

// The record of the current slot, whose user part starts at 0x10.
struct CurrentRecordHolder {
    u8 unknown_00[0x10];
    u8 user[1];
};
inline guest::global<gptr<CurrentRecordHolder>, 0x0095c6d0> current_record_holder;

bool mode_has(u32 mask) {
    return table_entry_has_all_bits(mask, read_global_byte_2()) != 0;
}

// The weather type at the time from the pattern: 0 for patterns past the last or hours not in 0..23 after the day start.
u8 hourly_type(u32 pattern, const TimeStamp &time) {
    s32 index = s32(time.hour) - DAY_FIRST_HOUR;
    if (index < 0) {
        index += HOURS;
    }
    if (pattern < PATTERN_COUNT && u32(index) < HOURS) {
        return (*hourly_types)[pattern][index];
    }
    return 0;
}

TimeStamp reference_copy() {
    return *reference_time;
}

}  // namespace

// The weather pattern of the day from the cycle of three (counted in days from 2000, the day starting at 6 o'clock); in
// the modes with the flag 0x80000 or 0x100000 it is a byte of the current record's slot.
u32 weather_pattern_cycled(const TimeStamp &time) {
    if (mode_has(FLAG_SLOT_SOURCE_A) || mode_has(FLAG_SLOT_SOURCE_B)) {
        return slot_byte_0a(guest::addr_of((*current_record_holder)->user[0])) & 0xff;
    }
    u32 days = u32(days_from_2000(time.year, time.month, time.day));
    if (s32(time.hour) >= DAY_FIRST_HOUR) {
        days++;
    }
    return (*cycle_patterns)[days % CYCLE_LENGTH];
}
GUEST_EXPORT(0x0062ff8c, weather_pattern_cycled);

// The weather pattern of the game day the time is in: the one stored in the save data for today and tomorrow, a generated
// one for other days.
u32 weather_pattern_of_day(const TimeStamp &time) {
    if (read_global_object_byte() != OBJECT_BYTE_NO_STORED_WEATHER) {
        TimeStamp day = time;
        day.move_to_day_start();
        TimeStamp today = reference_copy();
        today.move_to_day_start();
        s32 distance = s32(days_between(day, today, true));
        if (distance != 0 && distance != 1) {
            guest::StackObject<TimeStamp> guest_time;  // (the generator is still guest code)
            *guest_time = time;
            return generated_weather_pattern(*guest_time);
        }
        return distance == 0 ? get_save_data()->weather_pattern_today : get_save_data()->weather_pattern_tomorrow;
    }
    return get_save_data()->weather_pattern_today;
}
GUEST_EXPORT(0x0062fed4, weather_pattern_of_day);

// The pattern of the day: from the cycle in the modes with the flag 0x20000, else the stored or generated one.
u32 pattern_for(const TimeStamp &time) {
    return mode_has(FLAG_OTHER_SOURCE) ? weather_pattern_cycled(time) : weather_pattern_of_day(time);
}
GUEST_EXPORT(0x0062fea0, pattern_for);

namespace {

// The types 3 and 4 become 5 and 6 in the changed period (outside the modes with flag 0x20000).
u8 changed_type(u8 type) {
    if (mode_has(FLAG_OTHER_SOURCE) || period_table_value(CHANGE_PERIOD_INDEX) != CHANGE_PERIOD_VALUE) {
        return type;
    }
    if (type == TYPE_3) {
        return TYPE_5;
    }
    return type == TYPE_4 ? TYPE_6 : type;
}

}  // namespace

// The weather type (0-10) at the time, 0 where there is none; while the weather is not running, the state byte.
u32 weather_type_at(const TimeStamp &time) {
    u8 global_byte = read_global_byte_2();
    if (global_byte == NO_WEATHER_MODE_A || global_byte == NO_WEATHER_MODE_B || global_byte == NO_WEATHER_MODE_C) {
        return 0;
    }
    if (*weather_state != STATE_ACTIVE) {
        return *weather_state;
    }
    u32 pattern = pattern_for(time);
    u8 type = *weather_state != STATE_ACTIVE ? *weather_state : hourly_type(pattern, time);
    return changed_type(type);
}
GUEST_EXPORT(0x0062f04c, weather_type_at);

// The weather type at the time given in nanoseconds since the origin.
u32 weather_type_at_nanoseconds(s64 nanoseconds) {
    TimeStamp time = TimeStamp::from_nanoseconds_since_origin(nanoseconds);
    if (*weather_state != STATE_ACTIVE) {
        return *weather_state;
    }
    u32 pattern = weather_pattern_of_day(time);
    u8 type = *weather_state != STATE_ACTIVE ? *weather_state : hourly_type(pattern, time);
    return changed_type(type);
}
GUEST_EXPORT(0x0062f32c, weather_type_at_nanoseconds);

// The weather type in an hour and an hour ago.
u32 weather_type_in_one_hour() {
    TimeStamp time = reference_copy();
    time.add_hours(1);
    return weather_type_at(time);
}
GUEST_EXPORT(0x0062f3f0, weather_type_in_one_hour);

u32 weather_type_one_hour_ago() {
    TimeStamp time = reference_copy();
    time.add_hours(-1);
    return weather_type_at(time);
}
GUEST_EXPORT(0x0062f428, weather_type_one_hour_ago);

// The weather type at the time by the cycle (no change in the changed period); the state byte while the weather is not
// running.
u32 weather_type_cycled(const TimeStamp &time) {
    u32 pattern = weather_pattern_cycled(time);
    return *weather_state != STATE_ACTIVE ? *weather_state : hourly_type(pattern, time);
}
GUEST_EXPORT(0x0062f460, weather_type_cycled);

u32 weather_type_cycled_at_nanoseconds(s64 nanoseconds) {
    return weather_type_cycled(TimeStamp::from_nanoseconds_since_origin(nanoseconds));
}
GUEST_EXPORT(0x0062f4b8, weather_type_cycled_at_nanoseconds);

namespace {

// The class of the pattern of the day (pattern_classes), also changed in the changed period: 2, 6 and 7 become 8, 9 and 10.
u32 pattern_class_of(const TimeStamp &time) {
    u32 pattern = pattern_for(time);
    u32 pattern_class = pattern < PATTERN_COUNT ? (*pattern_classes)[pattern] : 0;
    if (pattern >= PATTERN_COUNT) {
        return 0;
    }
    TimeStamp day = time;
    day.move_to_day_start();
    if (mode_has(FLAG_OTHER_SOURCE) || period_row_value(day.period_of_year(), CHANGE_PERIOD_INDEX) != CHANGE_PERIOD_VALUE) {
        return pattern_class;
    }
    switch (pattern_class) {
    case CLASS_2:
        return CLASS_8;
    case CLASS_6:
        return CLASS_9;
    case CLASS_7:
        return CLASS_10;
    default:
        return pattern_class;
    }
}

}  // namespace

u32 weather_class_of_day(const TimeStamp &time) {
    return pattern_class_of(time);
}
GUEST_EXPORT(0x0062f658, weather_class_of_day);

u32 weather_class_of_today() {
    return pattern_class_of(reference_copy());
}
GUEST_EXPORT(0x0062f950, weather_class_of_today);

// Whether the period (of the table of ten words per period) is a snow period; never in the modes with the flag 0x20000.
bool period_is_snow(u32 period) {
    return !mode_has(FLAG_OTHER_SOURCE) && period_row_value(period, SNOW_PERIOD_INDEX) == SNOW_PERIOD_VALUE;
}
GUEST_EXPORT(0x0062f728, period_is_snow);

namespace {

// Whether today is in the snow period, has not just changed, and has a pattern of the snowy kinds (1-4 and 0x33).
bool snowy_pattern_today() {
    if (mode_has(FLAG_OTHER_SOURCE) || period_table_value(SNOW_PERIOD_INDEX) != SNOW_PERIOD_VALUE || day_has_changed()) {
        return false;
    }
    TimeStamp now = reference_copy();
    u32 pattern = pattern_for(now);
    return pattern - SNOWY_PATTERN_FIRST <= SNOWY_PATTERN_LAST - SNOWY_PATTERN_FIRST || pattern == SNOWY_PATTERN_EXTRA;
}

}  // namespace

bool snow_is_falling_today() {
    return snowy_pattern_today();
}
GUEST_EXPORT(0x0062fa38, snow_is_falling_today);

s64 nanoseconds_between(const TimeStamp &later, const TimeStamp &earlier, bool adjust);

// The pattern of the game day of the reference time.
u32 weather_pattern_today_by_mode() {
    return pattern_for(*reference_time);
}
GUEST_EXPORT(0x0062fc34, weather_pattern_today_by_mode);

// Whether the day has not changed and today's pattern is 0 (no event).
bool today_has_no_event_pattern() {
    return !day_has_changed() && pattern_for(*reference_time) == PATTERN_NONE;
}
GUEST_EXPORT(0x0062fd7c, today_has_no_event_pattern);

// Whether today's pattern is one of the event patterns 0x13-0x17 (never in the changed period).
bool today_has_event_pattern() {
    if (!mode_has(FLAG_OTHER_SOURCE) && period_table_value(CHANGE_PERIOD_INDEX) == CHANGE_PERIOD_VALUE) {
        return false;
    }
    if (day_has_changed()) {
        return false;
    }
    return pattern_for(*reference_time) - PATTERN_EVENT_FIRST < EVENT_PATTERN_COUNT;
}
GUEST_EXPORT(0x0062fdd4, today_has_event_pattern);

// The hour of today's event (0x13-0x17 patterns: hours 15, 14, 13, 14, 13), -1 when there is none.
s32 event_hour_of_today() {
    if ((!mode_has(FLAG_OTHER_SOURCE) && period_table_value(CHANGE_PERIOD_INDEX) == CHANGE_PERIOD_VALUE) || day_has_changed()) {
        return NO_HOUR;
    }
    static constexpr s32 HOURS_BY_PATTERN[EVENT_PATTERN_COUNT] = {15, 14, 13, 14, 13};  // the hour of the event for the patterns
    u32 index = pattern_for(*reference_time) - PATTERN_EVENT_FIRST;
    return index < EVENT_PATTERN_COUNT ? HOURS_BY_PATTERN[index] : NO_HOUR;
}
GUEST_EXPORT(0x0062fc6c, event_hour_of_today);

// The place of the reference time relative to the event that starts at the hour of the day (and lasts one hour):
// before, during or after it.
u32 phase_at_hour_of_today(s32 hour) {
    TimeStamp start = *reference_time;
    start.move_to_day_start();
    start.set_hour(hour);
    if (nanoseconds_between(*reference_time, start, false) < 0) {
        return PHASE_BEFORE;
    }
    start.add_hours(ONE_HOUR);
    return nanoseconds_between(*reference_time, start, false) < 0 ? PHASE_DURING : PHASE_AFTER;
}

// The phase of today's event (see event_hour_of_today); 3 when there is none.
u32 event_phase_of_today() {
    s32 hour = event_hour_of_today();
    if (hour < 0) {
        return PHASE_NONE;
    }
    return phase_at_hour_of_today(hour);
}
GUEST_EXPORT(0x00630590, event_phase_of_today);

// The phase relative to the evening window (from the hour 0x13 for nine hours) of a day with pattern 0.
u32 evening_window_phase() {
    if (day_has_changed() || pattern_for(*reference_time) != PATTERN_NONE) {
        return PHASE_NONE;
    }
    TimeStamp start = *reference_time;
    start.move_to_day_start();
    start.set_hour(EVENING_HOUR);
    if (nanoseconds_between(*reference_time, start, false) < 0) {
        return PHASE_BEFORE;
    }
    start.add_hours(EVENING_HOURS);
    return nanoseconds_between(*reference_time, start, false) < 0 ? PHASE_DURING : PHASE_AFTER;
}
GUEST_EXPORT(0x006304ac, evening_window_phase);

// The time of day (hour and minute) a snow day's event starts at, for today. Nothing is written for days outside the
// snow period, when the day has changed and for patterns that are not snowy ones; false for none of the listed patterns.
bool snow_event_time(u8 &hour, u8 &minute) {
    if (mode_has(FLAG_OTHER_SOURCE) || period_table_value(SNOW_PERIOD_INDEX) != SNOW_PERIOD_VALUE || day_has_changed()) {
        return true;
    }
    u32 pattern = pattern_for(*reference_time);
    if (!(pattern - SNOWY_PATTERN_FIRST <= SNOWY_PATTERN_LAST - SNOWY_PATTERN_FIRST || pattern == SNOWY_PATTERN_EXTRA)) {
        return true;
    }
    switch (pattern_for(*reference_time)) {
    case 1:
        hour = SNOW_EVENT_HOUR_1;
        minute = 0;
        return true;
    case 2:
        hour = SNOW_EVENT_HOUR_2;
        minute = SNOW_EVENT_MINUTE_2;
        return true;
    case 3:
        hour = SNOW_EVENT_HOUR_3;
        minute = SNOW_EVENT_MINUTE_3;
        return true;
    case 4:
    case SNOWY_PATTERN_EXTRA:
        hour = SNOW_EVENT_HOUR_4;
        minute = SNOW_EVENT_MINUTE_4;
        return true;
    default:
        return false;
    }
}
GUEST_EXPORT(0x0062f7f8, snow_event_time);

// The phase (before, during or after the hour that starts at the time snow_event_time gives); 3 without snow.
u32 snow_event_phase() {
    if (mode_has(FLAG_OTHER_SOURCE) || period_table_value(SNOW_PERIOD_INDEX) != SNOW_PERIOD_VALUE || day_has_changed()) {
        return PHASE_NONE;
    }
    u32 pattern = pattern_for(*reference_time);
    if (!(pattern - SNOWY_PATTERN_FIRST <= SNOWY_PATTERN_LAST - SNOWY_PATTERN_FIRST || pattern == SNOWY_PATTERN_EXTRA)) {
        return PHASE_NONE;
    }
    u8 hour = 0;
    u8 minute = 0;
    if (!snow_event_time(hour, minute)) {
        return PHASE_NONE;
    }
    TimeStamp start = *reference_time;
    start.move_to_day_start();
    start.set_hour(s8(hour));
    start.set_minute(s8(minute));
    if (nanoseconds_between(*reference_time, start, false) < 0) {
        return PHASE_BEFORE;
    }
    start.add_hours(ONE_HOUR);
    return nanoseconds_between(*reference_time, start, false) < 0 ? PHASE_DURING : PHASE_AFTER;
}
GUEST_EXPORT(0x00630364, snow_event_phase);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

namespace {

constexpr s64 NANOSECONDS_PER_DAY = 86'400'000'000'000;
constexpr u32 FUZZ_DAYS = 5;

// A time stamp around the reference time (in half of the cases, to hit the stored days) or anywhere in the years 2012-2015.
gptr<TimeStamp> some_time(guest::Fuzz &f) {
    auto time = f.object<TimeStamp>();
    if (f.below(2) != 0) {
        *time = *reference_time;
        time->add_days(s32(f.below(FUZZ_DAYS)) - 1);
        time->add_hours(s32(f.below(HOURS)) - s32(time->hour));
        return time;
    }
    time->year = s32(2012 + f.below(4));
    time->month = s8(1 + f.below(12));
    time->day = s8(1 + f.below(28));
    time->hour = s8(f.below(HOURS));
    time->minute = s8(f.below(60));
    time->second = s8(f.below(60));
    time->millisecond = s16(f.below(1000));
    return time;
}

s64 some_nanoseconds(guest::Fuzz &f) {
    return reference_time->nanoseconds_since_origin() + (s64(f.below(FUZZ_DAYS)) - 1) * NANOSECONDS_PER_DAY +
           s64(f.below(HOURS)) * (NANOSECONDS_PER_DAY / HOURS);
}

}  // namespace

GUEST_FUZZ(0x0062ff8c, 300, [](guest::Fuzz &f) { f.arguments(some_time(f)); });
GUEST_FUZZ(0x0062fed4, 300, [](guest::Fuzz &f) { f.arguments(some_time(f)); });
GUEST_FUZZ(0x0062f04c, 300, [](guest::Fuzz &f) { f.arguments(some_time(f)); });
GUEST_FUZZ(0x0062f32c, 300, [](guest::Fuzz &f) { f.arguments(some_nanoseconds(f)); });
GUEST_FUZZ(0x0062f3f0, 50, [](guest::Fuzz &f) { f.arguments(); });
GUEST_FUZZ(0x0062f428, 50, [](guest::Fuzz &f) { f.arguments(); });
GUEST_FUZZ(0x0062f460, 300, [](guest::Fuzz &f) { f.arguments(some_time(f)); });
GUEST_FUZZ(0x0062f4b8, 300, [](guest::Fuzz &f) { f.arguments(some_nanoseconds(f)); });
GUEST_FUZZ(0x0062f658, 300, [](guest::Fuzz &f) { f.arguments(some_time(f)); });
GUEST_FUZZ(0x0062f950, 50, [](guest::Fuzz &f) { f.arguments(); });
GUEST_FUZZ(0x0062f728, 100, [](guest::Fuzz &f) { f.arguments(f.below(HOURS)); });
GUEST_FUZZ(0x0062fa38, 50, [](guest::Fuzz &f) { f.arguments(); });
GUEST_FUZZ(0x0062fea0, 300, [](guest::Fuzz &f) { f.arguments(some_time(f)); });
GUEST_FUZZ(0x0062fc34, 50, [](guest::Fuzz &f) { f.arguments(); });
GUEST_FUZZ(0x0062fd7c, 50, [](guest::Fuzz &f) { f.arguments(); });
GUEST_FUZZ(0x0062fdd4, 50, [](guest::Fuzz &f) { f.arguments(); });
GUEST_FUZZ(0x0062fc6c, 50, [](guest::Fuzz &f) { f.arguments(); });
GUEST_FUZZ(0x00630590, 50, [](guest::Fuzz &f) { f.arguments(); });
GUEST_FUZZ(0x006304ac, 50, [](guest::Fuzz &f) { f.arguments(); });
GUEST_FUZZ(0x0062f7f8, 100, [](guest::Fuzz &f) { f.arguments(f.object<u8>(), f.object<u8>()); });
GUEST_FUZZ(0x00630364, 50, [](guest::Fuzz &f) { f.arguments(); });
