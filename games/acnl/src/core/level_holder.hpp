// An object with a signed level byte at 0x59 kept in [-2, 10] and two bytes that gate an update (f_0030b250).
// What the object is, is not known yet.
#pragma once

#include "guest/guest.hpp"

struct LevelHolder {
    static constexpr s32 LEVEL_MIN = -2;
    static constexpr s32 LEVEL_MAX = 10;
    static constexpr u8 VALUE_4E_LIMIT = 0x21;  // the update only runs for unknown_4e below this
    static constexpr u8 VALUE_4F_LIMIT = 4;     // ...and, without a change, for unknown_4f below this

    u8 unknown_00[0x4e];
    u8 unknown_4e;  // passed to the update
    u8 unknown_4f;
    u8 unknown_50[9];
    s8 level;

    u32 add_to_level(s32 delta);
};
GUEST_OFFSET(LevelHolder, unknown_4e, 0x4e);
GUEST_OFFSET(LevelHolder, unknown_4f, 0x4f);
GUEST_OFFSET(LevelHolder, level, 0x59);
