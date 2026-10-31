// The weather: every game day has a weather pattern (0-0x33) that says which of the weather types (0-10) it is at every
// hour. The pattern of a day comes from the save data for today and tomorrow and from a generator for other days
// (weather_pattern_of_day), or from a three-day cycle (weather_pattern_cycled) in the modes whose flag 0x20000... see below.
#include <algorithm>
#include <cstring>

#include "arm.hpp"
#include "core/random.hpp"
#include "core/time_stamp.hpp"
#include "guest/guest.hpp"
#include "save/save_data.hpp"

using guest::gptr;

s32 days_from_2000(s32 year, s32 month, s32 day);
s64 days_between(const TimeStamp &later, const TimeStamp &earlier, bool adjust);
bool day_has_changed();
u32 period_table_value(u32 index);
u32 advance_random(Random &generator);

namespace {

inline constexpr guest::Function<0x002f74c8, u8()> read_global_byte_2;
inline constexpr guest::Function<0x002f74e0, u32(u32 mask, u32 index)> table_entry_has_all_bits;
inline constexpr guest::Function<0x00305f2c, u8()> read_global_object_byte;
inline constexpr guest::Function<0x001e5e70, u32(u32 period, u32 index)> period_row_value;
inline constexpr guest::Function<0x002fb328, gptr<SaveData>()> get_save_data;
inline constexpr guest::Function<0x0076eb40, u32(gptr<u8> user)> slot_byte_0a;
inline constexpr guest::Function<0x0058dc80, u32(u32 kind, u32 w0, u32 w1, u32 w2, u32 unknown_stack)> check_words12;

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

namespace {

constexpr u32 YEAR_SEED_SHIFT = 9, MONTH_SEED_SHIFT = 5, SEED_SHIFT = 16;
constexpr s32 DAY_START_HOUR_BACK = -6;     // the weather day starts at 6 o'clock
constexpr u32 EVENT_KIND_A = 0x1b, EVENT_KIND_B = 0x1e, EVENT_KIND_C = 4;
constexpr u32 PATTERN_FOR_EVENT_A = 0x32, PATTERN_FOR_EVENT_B = 0x33;
constexpr u32 PATTERN_FOR_EVENT_C_LUCKY = 0x1c, PATTERN_FOR_EVENT_C = 4;
constexpr float PERCENT = 100.0f;
constexpr s32 EVENT_C_LUCKY_BELOW = 0x32;
constexpr u8 DAY_BYTE_ENABLED_BIT_3 = 1 << 3;
constexpr u8 FLAGS_621DD_BIT_0 = 1;
constexpr u32 SEASON_GROUP_COUNT = 0x13;
constexpr u32 DEFAULT_SEASON_GROUP = 0x12;
constexpr u32 MONTH_KEY_SHIFT = 8;
constexpr u32 FLAG_EVENTS_ENABLED_ADDRESS = 0x0095bf80;  // see the stored time of the save data
constexpr u32 CHECK_FLAG = 1;

constexpr u32 EVENT_OBJECT_COUNT = 0x38;
constexpr u32 EVENT_IS_ON_SLOT = 1;                    // the virtual function that says whether the event is on at a date
constexpr u8 EVENT_KIND_LIMIT_WHEN_STRICT = 0x23;     // `strict` leaves out the events of these kinds and above
constexpr u8 EVENT_SKIPPED_KINDS[] = {1, 6, 3, 0xe, 0x25};  // kinds that are not counted as events of the day (meaning not known yet)

struct EventObject {
    gptr<u32> vtable;
    u8 unknown_04[0x1b - 4];
    u8 kind;
};
GUEST_OFFSET(EventObject, kind, 0x1b);

inline guest::global<gptr<EventObject>[EVENT_OBJECT_COUNT], 0x009524ec> event_objects;

// A season group: its id and the last day (month in the high byte) it covers.
struct SeasonLimit {
    u8 group;
    u8 unknown_01;
    s16 last_day;
};
GUEST_SIZE(SeasonLimit, 4);

inline guest::global<u8, FLAG_EVENTS_ENABLED_ADDRESS> events_enabled;
inline guest::global<SeasonLimit[SEASON_GROUP_COUNT], 0x00895068> season_limits;
inline guest::global<gptr<u8>[SEASON_GROUP_COUNT], 0x0095e06c> group_weights;  // the weights of the 0x34 patterns for each group

}  // namespace

// Whether one of the day's events is on at the date (the day start of the time given as three words): asked of every event
// object but the ones of a few kinds; with `strict` also leaving out the events of kind 0x23 and above. False while the
// global object byte is 3.
bool day_has_special_event(u32 word_0, u32 word_1, u32 word_2, bool strict) {
    if (read_global_object_byte() == OBJECT_BYTE_NO_STORED_WEATHER) {
        return false;
    }
    u32 words[3] = {word_0, word_1, word_2};
    TimeStamp day;
    std::memcpy(&day, words, sizeof(day));
    day.move_to_day_start();
    for (gptr<EventObject> event : *event_objects) {
        u8 kind = event->kind;
        if (strict && kind >= EVENT_KIND_LIMIT_WHEN_STRICT) {
            continue;
        }
        if (std::find(std::begin(EVENT_SKIPPED_KINDS), std::end(EVENT_SKIPPED_KINDS), kind) != std::end(EVENT_SKIPPED_KINDS)) {
            continue;
        }
        if (guest::call_address<u32>(event->vtable[EVENT_IS_ON_SLOT], event, u32(day.year), u32(s32(day.month)), u32(s32(day.day))) != 0) {
            return true;
        }
    }
    return false;
}
GUEST_EXPORT(0x0058efe8, day_has_special_event);

// The pattern a game day gets when it is neither today nor tomorrow: from a generator seeded with the date (and the town
// flags), by the event kinds of the day first (patterns 0x32 and 0x33 and the like) and then by the weights of the season
// group the date is in.
u32 generated_weather_pattern(const TimeStamp &day) {
    TimeStamp date = day;
    date.advance(0, DAY_START_HOUR_BACK, 0, 0);
    u32 flags = (*get_save_data()).flags_621b8;
    Random seed;
    seed.state = flags + (((u32(date.year) << YEAR_SEED_SHIFT) + (u32(s32(date.month)) << MONTH_SEED_SHIFT) + u32(s32(date.day))) << SEED_SHIFT);
    advance_random(seed);
    advance_random(seed);
    u32 words[3];
    std::memcpy(words, &day, sizeof(words));
    if (check_words12(EVENT_KIND_A, words[0], words[1], words[2], CHECK_FLAG) != 0) {
        return PATTERN_FOR_EVENT_A;
    }
    if (check_words12(EVENT_KIND_B, words[0], words[1], words[2], CHECK_FLAG) != 0) {
        return PATTERN_FOR_EVENT_B;
    }
    if (*events_enabled != 0) {
        gptr<SaveData> save = get_save_data();
        if ((save->byte_621d0 & DAY_BYTE_ENABLED_BIT_3) != 0 || (save->flags_621dd & FLAGS_621DD_BIT_0) != 0) {
            return PATTERN_FOR_EVENT_C;
        }
    }
    if (check_words12(EVENT_KIND_C, words[0], words[1], words[2], CHECK_FLAG) != 0) {
        s32 roll = arm::to_s32(seed.next_float() * PERCENT);
        return roll < EVENT_C_LUCKY_BELOW ? PATTERN_FOR_EVENT_C_LUCKY : PATTERN_FOR_EVENT_C;
    }
    if (day_has_special_event(words[0], words[1], words[2], CHECK_FLAG != 0)) {
        return PATTERN_FOR_EVENT_C;
    }
    s16 key = s16((u32(u8(date.month)) << MONTH_KEY_SHIFT) | u32(u8(date.day)));
    u32 group = DEFAULT_SEASON_GROUP;
    for (u32 index = 0; index < SEASON_GROUP_COUNT; index++) {
        if ((*season_limits)[index].last_day >= key) {
            group = (*season_limits)[index].group;
            break;
        }
    }
    gptr<u8> weights = (*group_weights)[group];
    u32 roll = u32(arm::to_s32(seed.next_float() * PERCENT));
    u32 total = 0;
    for (u32 pattern = 0; pattern < PATTERN_COUNT; pattern++) {
        total += weights[pattern];
        if (roll < total) {
            return pattern;
        }
    }
    return 0;
}
GUEST_EXPORT(0x00318568, generated_weather_pattern);

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
            return generated_weather_pattern(time);
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

namespace {

constexpr u8 SPECIAL_MONTH = 8;           // the month in which special event hours are drawn (without `any_month`)
constexpr u32 EVENT_HOUR_FIRST = 9;       // the hours drawn are 9 to 14
constexpr float HALF_CHANCE_SCALE = 2.0f;
constexpr float HOUR_SCALE = 6.0f;
constexpr u32 SEED_MONTH_SHIFT = 6, SEED_DAY_SHIFT = 6, SEED_YEAR_SHIFT_B = 12;
constexpr u32 FLAG_EVENT_HOURS_FROM_SEED = 0x40000;  // modes in which an event hour is drawn from the date
constexpr u32 FLAG_FIXED_EVENT_HOUR = 0x80000;
constexpr s32 FIXED_EVENT_HOUR = 0xc;
constexpr u32 MAX_EVENT_PATTERN = 4;
constexpr s32 NO_EVENT_HOUR = -1;

}  // namespace

// The hour (9-14) of an event drawn from a generator seeded with the date, or -1 on days without one (half of them, and
// all outside August unless `any_month`).
s32 seeded_event_hour(const TimeStamp &date, bool any_month) {
    u32 town_flags = 0;
    if (!any_month) {
        if (u8(date.month) != SPECIAL_MONTH) {
            return NO_EVENT_HOUR;
        }
        if ((*get_save_data()).flags_621b8 != 0) {
            town_flags = (*get_save_data()).flags_621b8;
        }
    }
    Random seed;
    u32 date_value = (((u32(date.year) << SEED_MONTH_SHIFT) + u32(s32(date.month))) << SEED_DAY_SHIFT) + u32(s32(date.day));
    seed.state = town_flags + (date_value << SEED_YEAR_SHIFT_B);
    advance_random(seed);
    advance_random(seed);
    if (arm::to_s32(seed.next_float() * HALF_CHANCE_SCALE) != 0) {
        return NO_EVENT_HOUR;
    }
    return arm::to_s32(seed.next_float() * HOUR_SCALE) + s32(EVENT_HOUR_FIRST);
}
GUEST_EXPORT(0x0063061c, seeded_event_hour);

// The hour of today's special event: in the modes with flag 0x20000 from the cycle pattern (patterns up to 4: drawn from
// the date, or 12), else the hour stored in the save data when it is for today; -1 for none.
s32 special_event_hour_today() {
    if (mode_has(FLAG_OTHER_SOURCE)) {
        if (weather_pattern_cycled(*reference_time) > MAX_EVENT_PATTERN) {
            return NO_EVENT_HOUR;
        }
        if (mode_has(FLAG_EVENT_HOURS_FROM_SEED)) {
            return s8(seeded_event_hour(*reference_time, true));
        }
        return mode_has(FLAG_FIXED_EVENT_HOUR) ? FIXED_EVENT_HOUR : NO_EVENT_HOUR;
    }
    gptr<SaveData> save = get_save_data();
    if (save->event_hour_today < 0 || day_has_changed()) {
        return NO_EVENT_HOUR;
    }
    return get_save_data()->event_hour_today;
}
GUEST_EXPORT(0x006301e8, special_event_hour_today);

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

namespace {

}  // namespace
