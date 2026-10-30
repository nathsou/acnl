// The game's clock: the reference time (a TimeStamp the game keeps up to date), the shop opening hours, and the
// state that remembers the time as nanoseconds.
#include "core/date.hpp"
#include "core/time_stamp.hpp"
#include "core/wide_division.hpp"

namespace {

// Opening hours are kept as (minute, hour) byte pairs in two tables of eight places: when each opens and closes.
constexpr u32 PLACE_COUNT = 7;
constexpr u32 TABLE_ENTRIES = 8;
constexpr u32 HOUR_SHIFT = 8;
constexpr u8 HOUR_MASK = 0xff;
constexpr s8 FIRST_HOUR_OF_DAY = 6;                   // the game's day starts at 6:00; earlier hours belong to the day before
constexpr u16 DAY_LENGTH_OFFSET = 24 << HOUR_SHIFT;   // added to times before the start of the day (hour 24 is 0x1800)
constexpr u16 DAY_START = FIRST_HOUR_OF_DAY << HOUR_SHIFT;
constexpr u32 STATE_FLAGS_INITIALISED = 1;
constexpr u32 FLAG_SET_A = 0x80000;
constexpr u32 FLAG_SET_B = 0x100000;
constexpr u8 TIME_FROZEN = 3;

struct HourEntry {
    u8 minute;
    s8 hour;
};
GUEST_SIZE(HourEntry, 2);

// Opening and closing hour of each place; the last entry is unused.
constexpr s8 OPENING_HOURS[TABLE_ENTRIES] = {6, 6, 6, 6, 8, 6, 6, 0};
constexpr s8 CLOSING_HOURS[TABLE_ENTRIES] = {23, 12, 24, 6, 4, 6, 6, 0};

inline guest::global<HourEntry[TABLE_ENTRIES], 0x009b2be4> opening_table;
inline guest::global<HourEntry[TABLE_ENTRIES], 0x009b2bf4> closing_table;
inline guest::global<u32, 0x009524e8> opening_table_guard;
inline guest::global<u32, 0x009524e4> closing_table_guard;

// The time the game last set as the reference time, as nanoseconds, and the span since another time it keeps.
struct ClockState {
    static constexpr u8 FLAG_ADJUSTING = 1;  // bit 0 of flags_02: times before another are moved forward by the adjustment

    u8 unknown_00[2];
    u8 flags_02;
    u8 unknown_03[5];
    s64 now_nanoseconds;
    s64 other_nanoseconds;
    s64 since_other_18;
    u8 unknown_20[8];
    s64 since_other_28;
    u8 unknown_30[0x50 - 0x30];
    s64 adjustment_nanoseconds;  // added (as milliseconds) to the earlier time in nanoseconds_between
};
GUEST_OFFSET(ClockState, flags_02, 2);
GUEST_OFFSET(ClockState, now_nanoseconds, 8);
GUEST_OFFSET(ClockState, other_nanoseconds, 0x10);
GUEST_OFFSET(ClockState, since_other_18, 0x18);
GUEST_OFFSET(ClockState, since_other_28, 0x28);
GUEST_OFFSET(ClockState, adjustment_nanoseconds, 0x50);
inline guest::global<ClockState, 0x0095c4d0> clock_state;

inline constexpr guest::Function<0x00305f2c, u8()> read_global_object_byte;
inline constexpr guest::Function<0x002fe7dd, bool(gptr<u32> flag)> claim_flag;
inline constexpr guest::Function<0x002f74c8, u8()> read_global_byte_2;
inline constexpr guest::Function<0x002f74e0, u32(u32 mask, u32 index)> table_entry_has_all_bits;

// The tables are filled the first time they are needed (the guards are the compiler's static initialisation flags).
void fill_table_once(gptr<u32> guard, gptr<HourEntry> table, const s8 (&hours)[TABLE_ENTRIES]) {
    if ((*guard & STATE_FLAGS_INITIALISED) != 0 || !claim_flag(guard)) {
        return;
    }
    for (u32 i = 0; i < TABLE_ENTRIES; i++) {
        table[i].minute = 0;
        table[i].hour = hours[i];
    }
}

// A time as hours and minutes in one word, with the hours before the start of the day moved to the end of it.
u16 day_relative_time(u8 minute, s8 hour) {
    u16 packed = u16(minute | ((u32(hour) << HOUR_SHIFT) & (HOUR_MASK << HOUR_SHIFT)));
    return u16(packed + (hour < FIRST_HOUR_OF_DAY ? DAY_LENGTH_OFFSET : 0));
}

}  // namespace

// Whether the time of day of the reference time is within the place's opening hours (false for places past the
// seventh, and while the time is frozen).
bool place_is_open(u32 place) {
    if (read_global_object_byte() == TIME_FROZEN) {
        return false;
    }
    fill_table_once(opening_table_guard.ptr(), guest::addr_of(opening_table[0]), OPENING_HOURS);
    fill_table_once(closing_table_guard.ptr(), guest::addr_of(closing_table[0]), CLOSING_HOURS);
    if (place >= PLACE_COUNT) {
        return false;
    }
    u16 now = day_relative_time(reference_time->minute, reference_time->hour);
    HourEntry opens = opening_table[place];
    HourEntry closes = closing_table[place];
    u16 closing = u16(closes.minute | ((u32(closes.hour) << HOUR_SHIFT) & (HOUR_MASK << HOUR_SHIFT)));
    closing = u16(closing + (closing <= DAY_START ? DAY_LENGTH_OFFSET : 0));
    return day_relative_time(opens.minute, opens.hour) <= now && now < closing;
}
GUEST_EXPORT(0x0058dd08, place_is_open);
GUEST_FUZZ(0x0058dd08, 200, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({0, 1, 2, 3, 4, 5, 6, 7, f.number()})); });

// The season of the reference time.
u32 current_season() {
    return reference_time->season();
}
GUEST_EXPORT(0x0056d0fc, current_season);
GUEST_FUZZ(0x0056d0fc, 20, [](guest::Fuzz &f) { f.arguments(); });

// Sets the reference time and remembers it in nanoseconds, with its distance to the other time (stored apart for the
// kinds with flag 0x80000 or 0x100000).
void set_reference_time(const TimeStamp &time) {
    *reference_time = time;
    clock_state->now_nanoseconds = time.nanoseconds_since_origin();
    s64 since_other = s64(u64(clock_state->now_nanoseconds) - u64(clock_state->other_nanoseconds));
    if (table_entry_has_all_bits(FLAG_SET_A, read_global_byte_2()) != 0 ||
        table_entry_has_all_bits(FLAG_SET_B, read_global_byte_2()) != 0) {
        clock_state->since_other_28 = since_other;
    } else {
        clock_state->since_other_18 = since_other;
    }
}
GUEST_EXPORT(0x0056d19c, set_reference_time);
// (sets the time the game already has, so that the run goes on undisturbed)
GUEST_FUZZ(0x0056d19c, 50, [](guest::Fuzz &f) {
    auto time = f.object<TimeStamp>();
    *time = *reference_time;
    f.arguments(time);
});

namespace {

constexpr s32 FIRST_YEAR = 2012;       // the clock does not go back before this year ...
constexpr s32 LAST_YEAR = 2050;        // ... or on past this one (it is wrapped by 39 years)
// A time kept next to the reference time that stands in for it when the clock would be set before FIRST_YEAR.
inline guest::global<TimeStamp, 0x00ad56c8> time_before_range_replacement;

}  // namespace

// Moves the game clock to the other time plus `span` nanoseconds. A year before FIRST_YEAR is replaced by the time
// kept beside the reference time; a year past LAST_YEAR is wrapped back and the clock marked as adjusting.
void set_clock_from_span(const s64 &span) {
    clock_state->since_other_18 = span;
    clock_state->now_nanoseconds = s64(u64(clock_state->other_nanoseconds) + u64(span));
    *reference_time = TimeStamp::from_nanoseconds_since_origin(clock_state->now_nanoseconds);
    if (reference_time->year < FIRST_YEAR) {
        *reference_time = *time_before_range_replacement;
        clock_state->now_nanoseconds = reference_time->nanoseconds_since_origin();
    } else if (reference_time->year > LAST_YEAR) {
        reference_time->wrap_year();
        clock_state->now_nanoseconds = reference_time->nanoseconds_since_origin();
        clock_state->flags_02 |= ClockState::FLAG_ADJUSTING;
    }
    set_reference_time(*reference_time);
}
GUEST_EXPORT(0x0056d230, set_clock_from_span);
// (the span the clock already has, so that the run goes on undisturbed)
GUEST_FUZZ(0x0056d230, 20, [](guest::Fuzz &f) {
    auto span = f.object<s64>();
    *span = clock_state->since_other_18;
    f.arguments(span);
});

namespace {

// What changed in the reference time between two ticks.
struct TickFlags {
    u8 hour_changed;    // the hour, day, month or year differs
    u8 second_changed;  // anything down to the second differs
    u8 jumped;          // the time is not exactly one second after the previous tick's
};
GUEST_SIZE(TickFlags, 3);

inline guest::global<TimeStamp, 0x0098a0f4> previous_tick_time;
inline guest::global<TickFlags, 0x0094e4ab> tick_flags;

bool same_down_to_hour(const TimeStamp &a, const TimeStamp &b) {
    return a.hour == b.hour && a.day == b.day && a.month == b.month && a.year == b.year;
}

bool same_down_to_second(const TimeStamp &a, const TimeStamp &b) {
    return a.second == b.second && a.minute == b.minute && same_down_to_hour(a, b);
}

}  // namespace

// Compares the reference time with the one seen on the previous tick, sets the flags and remembers the new time.
// Nothing is flagged on the first tick (no previous time yet).
void update_tick_flags() {
    TimeStamp previous = *previous_tick_time;
    *previous_tick_time = *reference_time;
    if (previous.year == 0) {
        return;
    }
    tick_flags->hour_changed = !same_down_to_hour(previous, *previous_tick_time);
    bool hour_same = tick_flags->hour_changed == 0;
    tick_flags->second_changed = !hour_same || previous.second != previous_tick_time->second ||
                                 previous.minute != previous_tick_time->minute;
    if (tick_flags->second_changed == 0) {
        tick_flags->jumped = 0;
        return;
    }
    previous.add_seconds(1);
    tick_flags->jumped = !same_down_to_second(previous, *previous_tick_time);
}
GUEST_EXPORT(0x00589534, update_tick_flags);
GUEST_FUZZ(0x00589534, 20, [](guest::Fuzz &f) { f.arguments(); });

TimeStamp GameTime::to_time_stamp() const {
    if (nanoseconds == NONE || nanoseconds == 0) {
        return TimeStamp::earliest();
    }
    return TimeStamp::from_nanoseconds_since_origin(nanoseconds);
}

void GameTime::set_time_stamp(const TimeStamp &time) {
    nanoseconds = time.nanoseconds_since_origin();
}
GUEST_EXPORT(0x005cddb4, GameTime::set_time_stamp);

// The time the clock state last got from set_reference_time.
void GameTime::set_now() {
    nanoseconds = clock_state->now_nanoseconds;
}
GUEST_EXPORT(0x005cde34, GameTime::set_now);

// (The second argument register is skipped.)
void game_time_set(GameTime &time, s64 value) {
    time.set(value);
}
GUEST_EXPORT(0x005cdf48, game_time_set);

void GameTime::set_time_of_day(s32 hour, s32 minute, s32 second) {
    TimeStamp time = to_time_stamp();
    time.set_hour(s8(hour));
    time.set_minute(s8(minute));
    time.set_second(s8(second));
    time.set_millisecond(0);
    set_time_stamp(time);
}
GUEST_EXPORT(0x005cdec0, GameTime::set_time_of_day);

void GameTime::round_down_to_day_start() {
    TimeStamp time = to_time_stamp();
    time.move_to_day_start();
    set_time_stamp(time);
}
GUEST_EXPORT(0x00314cec, GameTime::round_down_to_day_start);

// ---- inputs for the shadow checker's fuzzing

namespace {

gptr<GameTime> some_game_time(guest::Fuzz &f) {
    auto time = f.object<GameTime>();
    time->nanoseconds = f.pick<s64>({0, GameTime::NONE, s64(f.below(1u << 30)) * 1'000'000 * 40, s64(f.below(1u << 30)) * 1'000'000 * 600});
    return time;
}

}  // namespace

GUEST_FUZZ(0x005cddb4, 100, [](guest::Fuzz &f) {
    auto stamp = f.object<TimeStamp>();
    *stamp = *reference_time;
    f.arguments(f.object<GameTime>(), stamp);
});
GUEST_FUZZ(0x005cde34, 50, [](guest::Fuzz &f) { f.arguments(f.object<GameTime>()); });
GUEST_FUZZ(0x005cdf48, 100, [](guest::Fuzz &f) { f.arguments(f.object<GameTime>(), 0u, s64(u64(f.number()) << 20)); });
GUEST_FUZZ(0x005cdec0, 200, [](guest::Fuzz &f) {
    f.arguments(some_game_time(f), s32(f.below(24)), s32(f.below(60)), s32(f.below(60)));
});
GUEST_FUZZ(0x00314cec, 200, [](guest::Fuzz &f) { f.arguments(some_game_time(f)); });

// Whether the date is set (year, month and day all non-zero) and is the date of the reference time, or with
// `game_day` of the game day it falls in (the day starts at 6:00).
bool Date::is_today(bool game_day) const {
    if (year == 0 || month == 0 || day == 0) {
        return false;
    }
    TimeStamp now = *reference_time;
    if (game_day) {
        now = GameTime{now.nanoseconds_since_origin()}.to_time_stamp();
        now.move_to_day_start();
    }
    return year == u16(now.year) && month == u8(now.month) && day == u8(now.day);
}
GUEST_EXPORT(0x0030031c, Date::is_today);
GUEST_FUZZ(0x0030031c, 300, [](guest::Fuzz &f) {
    auto date = f.object<Date>();
    TimeStamp now = *reference_time;
    date->year = f.below(3) ? u16(now.year) : u16(2000 + f.below(60));
    date->month = f.below(3) ? u8(now.month) : u8(f.below(13));
    date->day = f.below(3) ? u8(now.day) : u8(f.below(33));
    f.arguments(date, f.below(2));
});

// The game time (nanoseconds from the origin) moved by days, hours, minutes and seconds.
s64 game_time_advanced(s64 nanoseconds, s32 days, s32 hours, s32 minutes, s32 seconds) {
    TimeStamp time = TimeStamp::from_nanoseconds_since_origin(nanoseconds);
    time.advance(days, hours, minutes, seconds);
    return time.nanoseconds_since_origin();
}
GUEST_EXPORT(0x0056ca10, game_time_advanced);
GUEST_FUZZ(0x0056ca10, 200, [](guest::Fuzz &f) {
    f.arguments(s64(f.below(1u << 30)) * 1'000'000 * 100, s32(f.below(40)) - 20, s32(f.below(48)) - 24, s32(f.below(120)) - 60, s32(f.below(120)) - 60);
});

namespace {

constexpr u64 NANOSECONDS_PER_MILLISECOND_U64 = 1'000'000;
constexpr u64 DAY_RECIPROCAL = 0x683fff6f48f948e3ull;  // for dividing by the nanoseconds in a day
constexpr u32 DAY_SHIFT = 45;
constexpr u64 SECOND_RECIPROCAL = 0x112e0be826d694b3ull;  // for dividing by the nanoseconds in a second
constexpr u32 SECOND_SHIFT = 26;

}  // namespace

// The nanoseconds from `earlier` to `later`. With `adjust` and the clock's adjusting flag, a `later` that is before
// `earlier` is first moved forward by the clock's adjustment.
s64 nanoseconds_between(const TimeStamp &later, const TimeStamp &earlier, bool adjust) {
    s64 later_ms = later.milliseconds_since_2000();
    s64 earlier_ms = earlier.milliseconds_since_2000();
    if (adjust && (clock_state->flags_02 & ClockState::FLAG_ADJUSTING) != 0 && later_ms < earlier_ms) {
        later_ms += divide_by_reciprocal_value(clock_state->adjustment_nanoseconds, MILLION_RECIPROCAL, MILLION_SHIFT);
    }
    return s64(u64(later_ms - earlier_ms) * NANOSECONDS_PER_MILLISECOND_U64);
}
GUEST_EXPORT(0x0056beec, nanoseconds_between);

// The whole days (rounded toward zero) from `earlier` to `later`.
s64 days_between(const TimeStamp &later, const TimeStamp &earlier, bool adjust) {
    return divide_by_reciprocal_value(nanoseconds_between(later, earlier, adjust), DAY_RECIPROCAL, DAY_SHIFT);
}
GUEST_EXPORT(0x002fd4b4, days_between);

// The whole seconds from `earlier` to `later`.
s64 seconds_between(const TimeStamp &later, const TimeStamp &earlier, bool adjust) {
    return divide_by_reciprocal_value(nanoseconds_between(later, earlier, adjust), SECOND_RECIPROCAL, SECOND_SHIFT);
}
GUEST_EXPORT(0x0056c2c0, seconds_between);

namespace {

gptr<TimeStamp> valid_time_stamp(guest::Fuzz &f) {
    auto time = f.object<TimeStamp>();
    time->year = s32(2012 + f.below(40));
    time->month = s8(1 + f.below(12));
    time->day = s8(1 + f.below(28));
    time->hour = s8(f.below(24));
    time->minute = s8(f.below(60));
    time->second = s8(f.below(60));
    time->millisecond = s16(f.below(1000));
    return time;
}

}  // namespace

GUEST_FUZZ(0x0056beec, 200, [](guest::Fuzz &f) { f.arguments(valid_time_stamp(f), valid_time_stamp(f), f.below(2)); });
GUEST_FUZZ(0x002fd4b4, 200, [](guest::Fuzz &f) { f.arguments(valid_time_stamp(f), valid_time_stamp(f), f.below(2)); });
GUEST_FUZZ(0x0056c2c0, 200, [](guest::Fuzz &f) { f.arguments(valid_time_stamp(f), valid_time_stamp(f), f.below(2)); });
