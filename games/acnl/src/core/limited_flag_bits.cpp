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
