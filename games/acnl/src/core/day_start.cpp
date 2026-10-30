// The start of the current game day (the day starts at 6:00): the time the game compares dates against for daily events.
#include <cstring>

#include "core/clock_state.hpp"
#include "core/day_start.hpp"
#include "save/save_data.hpp"

namespace {

inline constexpr guest::Function<0x00305f2c, u8()> read_global_object_byte;

constexpr u8 TIME_FROZEN = 3;           // read_global_object_byte's value while the time does not run
constexpr u32 FROZEN_WEEKDAY_VALUE = 7;  // value_for_weekday's answer then
constexpr u32 WEEKDAY_TABLE_OFFSET = 8;  // the seven bytes of value_for_weekday's table
constexpr u32 PERIOD_TABLE_ADDRESS = 0x0095213c;
constexpr u32 PERIOD_ROW_WORDS = 10;

// Whether the start of the day may be taken from the time the save stores (meaning of the byte not known yet).
inline guest::global<u8, 0x0095bf80> stored_time_enabled;

// The time the save stores (an 8-byte value that is not 8-aligned).
GameTime stored_time() {
    GameTime time;
    std::memcpy(&time, (*save_data)->stored_time_62232, sizeof(time));
    return time;
}

bool stored_time_in_use() {
    u8 enabled = stored_time_enabled;
    return enabled != 0 && (*save_data)->flags_621b8 != 0 && stored_time().nanoseconds != GameTime::NONE;
}

}  // namespace

// The start of the current game day: the stored time when the save has one in use (which also empties the cache),
// else the cached start, worked out from the reference time the first time it is asked for.
void cached_day_start(TimeStamp &out) {
    GameTime &cached = clock_state->day_start;
    if (stored_time_in_use()) {
        cached.set(GameTime::NONE);
        out = stored_time().to_time_stamp();
        return;
    }
    if (cached.nanoseconds == GameTime::NONE) {
        cached.set_time_stamp(*reference_time);
        cached.round_down_to_day_start();
    }
    out = cached.to_time_stamp();
}
GUEST_EXPORT(0x0056c45c, cached_day_start);
GUEST_FUZZ(0x0056c45c, 100, [](guest::Fuzz &f) {
    if (f.below(2) == 0) {
        clock_state->day_start.set(GameTime::NONE);
    }
    f.arguments(f.object<TimeStamp>());
});

// The same, but worked out from the reference time every time (as current_day_start does) when the clock state asks
// for it.
void day_start_by_clock_mode(TimeStamp &out) {
    if ((clock_state->flags_02 & ClockState::FLAG_UNCACHED_DAY_START) != 0) {
        out = *reference_time;
        out.move_to_day_start();
        return;
    }
    cached_day_start(out);
}
GUEST_EXPORT(0x00300650, day_start_by_clock_mode);
GUEST_FUZZ(0x00300650, 100, [](guest::Fuzz &f) {
    if (f.below(2) == 0) {
        clock_state->day_start.set(GameTime::NONE);
    }
    f.arguments(f.object<TimeStamp>());
});

// Whether the date of the day start the clock reports differs from the date of the day that includes the reference
// time (the cached day start is the one of an earlier day).
bool day_has_changed() {
    TimeStamp reported;
    day_start_by_clock_mode(reported);
    TimeStamp today = *reference_time;
    today.move_to_day_start();
    return reported.year != today.year || reported.month != today.month || reported.day != today.day;
}
GUEST_EXPORT(0x0056c0e4, day_has_changed);
GUEST_FUZZ(0x0056c0e4, 100, [](guest::Fuzz &f) {
    if (f.below(2) == 0) {
        clock_state->day_start.set(GameTime::NONE);
    }
    f.arguments();
});

// A word of the row (ten words) of the table at 0x0095213c for the period of the year the day start falls in.
u32 period_table_value(u32 index) {
    TimeStamp day_start;
    day_start_by_clock_mode(day_start);
    return gptr<u32>(PERIOD_TABLE_ADDRESS)[day_start.period_of_year() * PERIOD_ROW_WORDS + index];
}
GUEST_EXPORT(0x001e5e88, period_table_value);
GUEST_FUZZ(0x001e5e88, 100, [](guest::Fuzz &f) {
    f.arguments(f.below(PERIOD_ROW_WORDS));
});

// A word of the row for the period (ten words each) in the table at 0x0095213c.
u32 period_row_value(u32 period, u32 index) {
    return gptr<u32>(PERIOD_TABLE_ADDRESS)[period * PERIOD_ROW_WORDS + index];
}
GUEST_EXPORT(0x001e5e70, period_row_value);
GUEST_FUZZ(0x001e5e70, 100, [](guest::Fuzz &f) { f.arguments(f.below(24), f.below(PERIOD_ROW_WORDS)); });

// Whether the game day the time falls in is not the one the clock reports as the current day.
bool is_not_current_game_day(const TimeStamp &time) {
    GameTime game_time;
    game_time.set_time_stamp(time);
    game_time.round_down_to_day_start();
    TimeStamp current;
    day_start_by_clock_mode(current);
    TimeStamp day = game_time.to_time_stamp();
    return current.year != day.year || current.month != day.month || current.day != day.day;
}
GUEST_EXPORT(0x0074fee0, is_not_current_game_day);
GUEST_FUZZ(0x0074fee0, 100, [](guest::Fuzz &f) {
    auto time = f.object<TimeStamp>();
    *time = *reference_time;
    time->add_days(s32(f.below(5)) - 2);
    time->hour = s8(f.below(24));
    f.arguments(time);
});

// The byte of the object's table of seven (one per weekday, from Sunday) for the weekday of the game day the time falls
// in; 7 while the time is frozen.
u32 value_for_weekday(gptr<u8> table_owner, u32 time_word_0, u32 time_word_1, u32 time_word_2) {
    TimeStamp day = TimeStamp::from_words(time_word_0, time_word_1, time_word_2);
    day.move_to_day_start();
    if (read_global_object_byte() == TIME_FROZEN) {
        return FROZEN_WEEKDAY_VALUE;
    }
    return table_owner[WEEKDAY_TABLE_OFFSET + day.weekday];
}
GUEST_EXPORT(0x0075dad8, value_for_weekday);
GUEST_FUZZ(0x0075dad8, 100, [](guest::Fuzz &f) {
    auto owner = f.allocate(16).cast<u8>();
    f.bytes(owner, 16);
    TimeStamp time = *reference_time;
    time.add_days(s32(f.below(14)));
    u32 words[3];
    std::memcpy(words, &time, sizeof(words));
    f.arguments(owner, words[0], words[1], words[2]);
});
