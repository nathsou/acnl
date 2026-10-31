#include "guest/guest.hpp"

using guest::gptr;

// Sets or clears bit `index` of a bit array; indices at or above `limit` are ignored.
static void set_limited_flag(gptr<u8> bits, u32 index, u32 value, u32 limit) {
    if (index >= limit) {
        return;
    }
    u8 mask = u8(1u << (index & 7));
    u8 byte = bits[index >> 3];
    if (value != 0) {
        byte = byte | mask;
    } else {
        byte = byte & ~mask;
    }
    bits[index >> 3] = byte;
}

constexpr u32 LIMIT_19 = 0x13;
constexpr u32 LIMIT_4 = 4;
constexpr u32 LIMIT_8 = 8;
constexpr u32 LIMIT_5 = 5;
constexpr u32 LIMIT_7 = 7;

void set_flag_below_19(gptr<u8> bits, u32 index, u32 value) { set_limited_flag(bits, index, value, LIMIT_19); }
GUEST_EXPORT(0x00813b30, set_flag_below_19);
GUEST_EXPORT(0x40142a38, set_flag_below_19);
GUEST_EXPORT(0x402076f4, set_flag_below_19);
GUEST_EXPORT(0x40613c84, set_flag_below_19);

void set_flag_below_4(gptr<u8> bits, u32 index, u32 value) { set_limited_flag(bits, index, value, LIMIT_4); }
GUEST_EXPORT(0x00813b80, set_flag_below_4);

void set_flag_below_8(gptr<u8> bits, u32 index, u32 value) { set_limited_flag(bits, index, value, LIMIT_8); }
GUEST_EXPORT(0x00813bd0, set_flag_below_8);
GUEST_EXPORT(0x00317a00, set_flag_below_8);

void set_flag_below_5(gptr<u8> bits, u32 index, u32 value) { set_limited_flag(bits, index, value, LIMIT_5); }
GUEST_EXPORT(0x00813c20, set_flag_below_5);

void set_flag_below_7(gptr<u8> bits, u32 index, u32 value) { set_limited_flag(bits, index, value, LIMIT_7); }
GUEST_EXPORT(0x00813cb4, set_flag_below_7);
GUEST_EXPORT(0x401fbfa0, set_flag_below_7);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

static void fuzz_flags(guest::Fuzz &f) {
    auto bits = f.allocate(8).cast<u8>();
    f.bytes(bits, 8);
    u32 index = f.below(4) ? f.below(24) : f.below(40);
    u32 value = f.pick<u32>({0, 1, f.number()});
    f.arguments(bits, index, value);
}

GUEST_FUZZ(0x00813b30, 300, [](guest::Fuzz &f) { fuzz_flags(f); });
GUEST_FUZZ(0x40142a38, 300, [](guest::Fuzz &f) { fuzz_flags(f); });
GUEST_FUZZ(0x402076f4, 300, [](guest::Fuzz &f) { fuzz_flags(f); });
GUEST_FUZZ(0x40613c84, 300, [](guest::Fuzz &f) { fuzz_flags(f); });
GUEST_FUZZ(0x00813b80, 300, [](guest::Fuzz &f) { fuzz_flags(f); });
GUEST_FUZZ(0x00813bd0, 300, [](guest::Fuzz &f) { fuzz_flags(f); });
GUEST_FUZZ(0x00317a00, 300, [](guest::Fuzz &f) { fuzz_flags(f); });
GUEST_FUZZ(0x00813c20, 300, [](guest::Fuzz &f) { fuzz_flags(f); });
GUEST_FUZZ(0x00813cb4, 300, [](guest::Fuzz &f) { fuzz_flags(f); });
GUEST_FUZZ(0x401fbfa0, 300, [](guest::Fuzz &f) { fuzz_flags(f); });
