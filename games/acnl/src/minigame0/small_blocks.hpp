// Small raw byte blocks of ModuleMiniGame0 (meaning not known yet).
#pragma once

#include "guest/guest.hpp"

// A 9-byte block: two zeroed words and a zeroed byte.
struct MiniGame0Block9 {
    u8 bytes[9];
};
GUEST_SIZE(MiniGame0Block9, 9);

// A 7-byte block copied around as a word, a halfword and a byte.
struct MiniGame0Block7 {
    u8 bytes[7];
};
GUEST_SIZE(MiniGame0Block7, 7);

// A 10-byte block filled with one repeated byte.
struct MiniGame0Block10 {
    u8 bytes[10];
};
GUEST_SIZE(MiniGame0Block10, 10);
