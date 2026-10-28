// What the console's CPU and its compiler runtime do where C++ leaves the result undefined or different: shifts by
// 32 or more, float-to-integer conversions out of range. Rewritten code uses these where the original's inputs are
// not known to be in range (e.g. data read from a save file).
#pragma once

#include <cmath>
#include <cstdint>

#include "guest/guest.hpp"

namespace arm {

// A shift by a register: the bottom byte of the amount counts, and 32 or more shifts everything out.
constexpr u32 lsl(u32 value, u32 amount) { return (amount & 0xff) >= 32 ? 0 : value << (amount & 0xff); }
constexpr u32 lsr(u32 value, u32 amount) { return (amount & 0xff) >= 32 ? 0 : value >> (amount & 0xff); }

// __aeabi_llsl, the compiler runtime's 64-bit left shift (as RVCT implements it, for any amount)
constexpr u64 llsl(u64 value, u32 amount) {
    u32 low = u32(value), high = u32(value >> 32);
    if (s32(amount - 32) >= 0) return u64(lsl(low, amount - 32)) << 32;
    return u64(lsl(high, amount) | lsr(low, 32 - amount)) << 32 | lsl(low, amount);
}

// Rotating left through a 64-bit shift, the way the game's code writes it: the two halves of value << amount, added.
constexpr u32 rotate_left(u32 value, u32 amount) {
    u64 shifted = llsl(value, amount);
    return u32(shifted) + u32(shifted >> 32);
}

// VCVT.S32.F32: toward zero, saturating, NaN to 0
inline s32 to_s32(float f) {
    if (std::isnan(f)) return 0;
    if (f >= 2147483648.0f) return INT32_MAX;
    if (f <= -2147483648.0f) return INT32_MIN;
    return s32(f);
}

}  // namespace arm
