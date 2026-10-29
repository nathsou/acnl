// The library routine behind 64-bit divisions by constants.
#include "core/wide_division.hpp"

// value / divisor with the divisor given as a reciprocal and a shift (the second argument is not used).
s64 divide_by_reciprocal(gptr<const s64> value, u32 unused, u64 reciprocal, u32 shift) {
    return divide_by_reciprocal_value(*value, reciprocal, shift);
}
GUEST_EXPORT(0x0013305c, divide_by_reciprocal);
GUEST_FUZZ(0x0013305c, 400, [](guest::Fuzz &f) {
    auto value = f.object<s64>();
    *value = f.pick<s64>({0, 1, -1, 999'999, 1'000'000, -1'000'000, s64(f.number()) * 1'000'000, s64(u64(f.number()) << 32 | f.number())});
    f.arguments(value, f.number(), f.pick<u64>({MILLION_RECIPROCAL, 0x51eb851f, 0x66666667, u64(f.number()) << 32 | f.number()}),
                f.below(64));
});
