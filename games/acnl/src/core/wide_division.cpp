// The library routine behind 64-bit divisions by constants.
#include "core/wide_division.hpp"

// value / divisor with the divisor given as a reciprocal and a shift (the second argument is not used).
s64 divide_by_reciprocal(gptr<const s64> value, u32 unused, u64 reciprocal, u32 shift) {
    return divide_by_reciprocal_value(*value, reciprocal, shift);
}
GUEST_EXPORT(0x0013305c, divide_by_reciprocal);
