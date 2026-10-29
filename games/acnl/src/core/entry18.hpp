// An entry of the 0x276 records of 18 bytes loaded with the game's data (only one byte is known).
#pragma once

#include "guest/guest.hpp"

struct Entry18 {
    static constexpr u32 COUNT = 0x276;

    u8 unknown_00[0xf];
    u8 byte_0f;  // the high nibble is a group number (below 0xe)
    u8 unknown_10[2];
};
GUEST_OFFSET(Entry18, byte_0f, 0xf);
GUEST_SIZE(Entry18, 18);
