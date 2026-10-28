// A small set of up to 32 flags with a limit and a count, used by NPC and save code (callers pass indices 0-26).
#pragma once

#include "guest/guest.hpp"

struct BitSet32 {
    u32 limit;  // indices at or above this are ignored
    u32 bits;
    u32 count;  // decremented by clear() when a set flag is cleared

    // Clears the flag at index (when in range and set) and decrements the count.
    void clear(u32 index);
    // The assignment operator: copies the other set unless it is this one. Returns this.
    gptr<BitSet32> assign(const BitSet32 &other);
};
GUEST_OFFSET(BitSet32, limit, 0);
GUEST_OFFSET(BitSet32, bits, 4);
GUEST_OFFSET(BitSet32, count, 8);
GUEST_SIZE(BitSet32, 12);
