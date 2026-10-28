// Global tables of ModuleMiniGame0 near 0x403b2d00 and 0x403b404e. Only the touched parts are named.
#pragma once

#include "guest/guest.hpp"

// The globals at 0x403b2d00 (meaning not known yet).
struct MiniGame0Globals {
    u8 unknown_00[0x0c];
    u32 value_0c;
};
GUEST_OFFSET(MiniGame0Globals, value_0c, 0x0c);
inline guest::global<MiniGame0Globals, 0x403b2d00> minigame0_globals;

// An entry of the table at 0x403b404e (6 bytes; the first 5 are copied out by copy_tag_entry).
struct MiniGame0TagEntry {
    static constexpr u32 TABLE_ADDRESS = 0x403b404e;
    static constexpr u32 COPIED_SIZE = 5;

    u8 bytes[COPIED_SIZE];
    u8 unknown_05;
};
GUEST_SIZE(MiniGame0TagEntry, 6);
