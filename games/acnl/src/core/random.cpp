#include "core/random.hpp"

#include <bit>

#include "arm.hpp"

// state = state * 1664525 + 1013904223, with the product's high word folded back in (and the carry of the
// addition): a variant of the "quick and dirty" generator from Numerical Recipes.
constexpr u32 MULTIPLIER = 1664525, INCREMENT = 1013904223;
constexpr u32 ONE_AS_FLOAT_BITS = 0x3f800000;  // 1.0f
constexpr u32 MANTISSA_SHIFT = 9;              // the top 23 bits of the state become the mantissa

float Random::next_float() {
    u64 product = u64(state) * MULTIPLIER;
    u64 sum = (product & 0xffffffffull) + INCREMENT;
    u32 carry = u32(sum >> 32) & 1;
    u32 high = u32(product >> 32);
    state = u32(sum) + high + carry;
    // 23 random bits as the mantissa of a float in [1, 2)
    float one = std::bit_cast<float>(ONE_AS_FLOAT_BITS);
    return std::bit_cast<float>(ONE_AS_FLOAT_BITS | (state >> MANTISSA_SHIFT)) - one;
}
GUEST_EXPORT(0x0013bb30, Random::next_float);

s32 random_below(s32 max) { return arm::to_s32(random_generator->next_float() * float(max)); }
GUEST_EXPORT(0x002ff6f8, random_below);

GUEST_FUZZ(0x0013bb30, 200, [](guest::Fuzz &f) { f.arguments(f.object<Random>()); });
GUEST_FUZZ(0x002ff6f8, 300, [](guest::Fuzz &f) {
    f.arguments(s32(f.pick<u32>({0, 1, 26, 0x10000, 0x7fffffff, 0x80000000, f.number()})));
});
