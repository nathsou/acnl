// Small helpers of the escape minigame code.
#include "guest/guest.hpp"

using guest::gptr;

namespace {

// Still recompiled code:
inline constexpr guest::Function<0x402fe84c, u32(s32 second, s32 first)> dispatch_second_byte;

}  // namespace

// Does nothing observable (the original only fetches an object and calls an empty function).
void escape_noop_call(u32 unused, u32 arg1, u32 arg2) {
    (void)unused;
    (void)arg1;
    (void)arg2;
}
GUEST_EXPORT(0x402fa790, escape_noop_call);

// First byte if it is below 6 (unsigned compare); else 0 when the second byte is 12 or more; else dispatches.
u32 dispatch_by_byte_pair(gptr<s8> pair) {
    s32 first = pair[0];
    if (u32(first) < 6) {
        return u32(first);
    }
    s32 second = pair[1];
    if (u32(second) >= 12) {
        return 0;
    }
    return dispatch_second_byte(second, first);
}
GUEST_EXPORT(0x402faa80, dispatch_by_byte_pair);

// The bit for an index below 17, else 0.
u32 bit_for_index(u32 index) {
    if (index < 17) {
        return 1u << index;
    }
    return 0;
}
GUEST_EXPORT(0x402fab08, bit_for_index);
