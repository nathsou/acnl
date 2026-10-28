// AcNpc: the town's non-player characters. Only the fields the rewritten code uses are named.
#pragma once

#include "guest/guest.hpp"

struct AcNpc {
    u8 unknown_0000[0xeb54];
    guest::gptr<u32> list_begin;  // array of 32-bit values
    guest::gptr<u32> list_end;

    // Clears the first list entry equal to value. Returns 0 if one was found, else the list length plus 1.
};
GUEST_OFFSET(AcNpc, list_begin, 0xeb54);
GUEST_OFFSET(AcNpc, list_end, 0xeb58);
