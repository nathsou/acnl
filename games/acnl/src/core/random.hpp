// The game's random numbers: one global generator (a linear congruential generator) behind random_below().
#pragma once

#include "guest/guest.hpp"

struct Random {
    u32 state;

    float next_float();  // in [0, 1)
};
GUEST_SIZE(Random, 4);

inline guest::global<Random, 0x009753e8> random_generator;

// A random integer in [0, max)
s32 random_below(s32 max);
