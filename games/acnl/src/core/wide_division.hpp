// Division by a constant with the multiply-and-shift the compiler uses for 64-bit values (the game calls the library
// routine for it, see divide_by_reciprocal).
#pragma once

#include "guest/guest.hpp"

// value / divisor, rounded toward zero, for the reciprocal (2^(64 + shift) / divisor, rounded up) and the shift.
inline s64 divide_by_reciprocal_value(s64 value, u64 reciprocal, u32 shift) {
    __int128 product = static_cast<__int128>(value) * static_cast<__int128>(reciprocal);
    s64 high = s64(product >> 64);
    s64 quotient = high >> shift;
    return quotient + (value < 0 ? 1 : 0);
}

constexpr u64 MILLION_RECIPROCAL = 0x431bde82d7b634dbull;  // for dividing by 1,000,000
constexpr u32 MILLION_SHIFT = 18;
