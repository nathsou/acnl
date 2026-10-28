// A small record of a rank byte and a value word, plus two info bytes. What it belongs to is not known yet.
#pragma once

#include "guest/guest.hpp"

struct RankedValue {
    static constexpr u8 INITIAL_INFO_9 = 6;

    u8 rank;
    u8 unknown_01[3];
    u32 value;
    u8 byte_8;
    u8 byte_9;
    u8 unknown_0a[2];

    // Sets both info bytes; a record of rank 0 becomes rank 1 with value 0.
    void set_info(u8 info_8, u8 info_9);
    // A higher rank replaces rank and value; the same rank only fills in a value that is still 0 (with a non-zero one).
    void raise(u32 new_rank, u32 new_value);
    // Back to the initial state.
    void clear();
};
GUEST_OFFSET(RankedValue, value, 4);
GUEST_OFFSET(RankedValue, byte_8, 8);
GUEST_OFFSET(RankedValue, byte_9, 9);
