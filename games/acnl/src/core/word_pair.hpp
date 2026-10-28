// Small value types made of 32-bit words (an x/y pair and a four-word block), used by the game's vector helpers.
#pragma once

#include "guest/guest.hpp"

// Two 32-bit words (an x/y pair; signedness is not known yet).
struct WordPair {
    u32 first;
    u32 second;
};
GUEST_SIZE(WordPair, 8);

// Four 32-bit words (meaning not known yet).
struct WordQuad {
    u32 words[4];
};
GUEST_SIZE(WordQuad, 16);
