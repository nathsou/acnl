#include "core/random.hpp"

namespace {
// Still recompiled code, called with the global generator (what it does is not known yet).
inline constexpr guest::Function<0x00314ce4, u32(Random &generator, u32 argument)> random_generator_function_314ce4;

constexpr u32 LCG_MULTIPLIER = 0x0019660d;
constexpr u32 LCG_INCREMENT = 0x3c6ef35f;
}  // namespace

// Calls f_00314ce4 on the global generator with the given argument.
u32 call_random_generator_function_314ce4(u32 argument) {
    return random_generator_function_314ce4(*random_generator, argument);
}
GUEST_EXPORT(0x00565e7c, call_random_generator_function_314ce4);

// Advances the generator: state * MULTIPLIER + INCREMENT, with the carries out of the 32-bit sum folded back in.
// Returns the new state.
u32 advance_random(Random &generator) {
    u64 product = u64(generator.state) * LCG_MULTIPLIER;
    u32 low = u32(product);
    u32 high = u32(product >> 32);
    u32 low_sum = low + LCG_INCREMENT;
    u32 carry = low_sum < low ? 1 : 0;
    u32 next = low_sum + high + carry;
    generator.state = next;
    return next;
}
GUEST_EXPORT(0x00565e8c, advance_random);

GUEST_FUZZ(0x00565e7c, 200, [](guest::Fuzz &f) { f.arguments(f.number()); });
GUEST_FUZZ(0x00565e8c, 300, [](guest::Fuzz &f) { f.arguments(f.object<Random>()); });
