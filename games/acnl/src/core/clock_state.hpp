// The state behind the game's clock: the time the game last set as the reference time, as nanoseconds, the span since
// another time and the cached start of the current game day.
#pragma once

#include "core/time_stamp.hpp"
#include "guest/guest.hpp"

struct ClockState {
    static constexpr u8 FLAG_ADJUSTING = 1;  // bit 0 of flags_02: times before another are moved forward by the adjustment
    static constexpr u8 FLAG_UNCACHED_DAY_START = 1 << 3;  // bit 3 of flags_02: the day start is worked out every time

    u8 unknown_00[2];
    u8 flags_02;
    u8 unknown_03[5];
    s64 now_nanoseconds;
    s64 other_nanoseconds;
    s64 since_other_18;
    u8 unknown_20[8];
    s64 since_other_28;
    u8 unknown_30[8];
    GameTime day_start;  // the start of the current game day (NONE until it is first asked for)
    u8 unknown_40[0x50 - 0x40];
    s64 adjustment_nanoseconds;  // added (as milliseconds) to the earlier time in nanoseconds_between
};
GUEST_OFFSET(ClockState, flags_02, 2);
GUEST_OFFSET(ClockState, now_nanoseconds, 8);
GUEST_OFFSET(ClockState, other_nanoseconds, 0x10);
GUEST_OFFSET(ClockState, since_other_18, 0x18);
GUEST_OFFSET(ClockState, since_other_28, 0x28);
GUEST_OFFSET(ClockState, day_start, 0x38);
GUEST_OFFSET(ClockState, adjustment_nanoseconds, 0x50);
inline guest::global<ClockState, 0x0095c4d0> clock_state;
