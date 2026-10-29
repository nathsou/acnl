// The start of an object class (which one is not known yet) whose byte at 0x171 holds state flags.
#pragma once

#include "guest/guest.hpp"

struct ObjectWithFlags171 {
    static constexpr u8 FLAG_BIT_3 = 1 << 3;  // unknown flag
    static constexpr u8 FLAG_BIT_5 = 1 << 5;  // unknown flag

    u8 unknown_000[0x171];
    u8 flags_171;
};
GUEST_OFFSET(ObjectWithFlags171, flags_171, 0x171);
