// The start of the current game day (the day starts at 6:00): the time the game compares dates against for daily events.
#include <cstring>

#include "core/clock_state.hpp"
#include "save/save_data.hpp"

namespace {

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
