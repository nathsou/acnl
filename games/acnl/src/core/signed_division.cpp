// The compiler's signed division routine: the quotient (truncated towards zero) and the remainder (which has the sign of
// the dividend) of two 32-bit integers.
#include "guest/guest.hpp"

namespace {

constexpr u32 WORD_BITS = 32;

// The handler the game calls for a division by zero (it returns).
inline constexpr guest::Function<0x0013fad4, void(u32 argument)> division_by_zero_handler;

u32 magnitude(s32 value) {
    return value < 0 ? 0u - u32(value) : u32(value);
}

}  // namespace

// Returns the quotient in the low word and the remainder in the high word. Dividing by zero calls the handler and gives a
// quotient of 0 and the dividend as the remainder.
u64 divide_with_remainder(s32 dividend, s32 divisor) {
    if (divisor == 0) {
        division_by_zero_handler(0);
        return u64(u32(dividend)) << WORD_BITS;
    }
    u32 quotient = magnitude(dividend) / magnitude(divisor);
    u32 remainder = magnitude(dividend) % magnitude(divisor);
    if ((dividend < 0) != (divisor < 0)) {
        quotient = 0u - quotient;
    }
    if (dividend < 0) {
        remainder = 0u - remainder;
    }
    return u64(remainder) << WORD_BITS | quotient;
}
GUEST_EXPORT(0x002f9e1c, divide_with_remainder);
GUEST_FUZZ(0x002f9e1c, 400, [](guest::Fuzz &f) {
    auto operand = [&f]() {
        return s32(f.pick<u32>({0, 1, 2, 7, 100, 0xffffffffu, 0xfffffff9u, 0x7fffffffu, 0x80000000u, f.number(), f.below(1000)}));
    };
    f.arguments(operand(), operand());
});
