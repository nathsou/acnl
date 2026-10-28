#include "arm.hpp"

// __aeabi_lasr, the compiler runtime's 64-bit arithmetic right shift (as RVCT implements it, for any amount).
s64 aeabi_lasr(s64 value, u32 amount) {
    u32 low = u32(u64(value));
    s32 high = s32(u64(value) >> 32);
    u32 result_low;
    s32 result_high;
    if (s32(amount - 32) < 0) {
        result_low = arm::lsr(low, amount) | arm::lsl(u32(high), 32 - amount);
        result_high = arm::asr(high, amount);
    } else {
        result_low = u32(arm::asr(high, amount - 32));
        result_high = high >> 31;
    }
    return s64(u64(u32(result_high)) << 32 | result_low);
}
GUEST_EXPORT(0x00134cb4, aeabi_lasr);

GUEST_FUZZ(0x00134cb4, 400, [](guest::Fuzz &f) {
    s64 value = s64(u64(f.number()) << 32 | f.number());
    u32 amount = f.pick<u32>({0, 1, 31, 32, 33, 63, 64, 255, 256, 0x80000020u, f.below(64), f.number()});
    f.arguments(value, amount);
});
