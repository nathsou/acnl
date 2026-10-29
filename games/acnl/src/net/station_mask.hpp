// A set of local-play stations (0-3): one bit per station and a counter of the stations added.
#pragma once

#include "guest/guest.hpp"

struct StationMask {
    static constexpr u32 STATION_COUNT = 4;
    static constexpr u8 MAX_COUNT = 4;

    u8 bits;
    u8 count;  // stops growing at MAX_COUNT

    void add(u32 station);
    void remove(u32 station);
    void set_from_mask(u32 mask);
};
GUEST_OFFSET(StationMask, count, 1);
GUEST_SIZE(StationMask, 2);
