#include "guest/guest.hpp"

using guest::gptr;

namespace {
constexpr u32 FLAG_COUNT = 0x28;  // indices at or above this are ignored
}

// Sets (value != 0) or clears the flag at index in a bit array of FLAG_COUNT bits, 8 flags per byte.
static void set_flag_bit(gptr<u8> bits, u32 index, u32 value) {
    if (index >= FLAG_COUNT) {
        return;
    }
    u8 mask = u8(1u << (index & 7));
    u8 &byte = bits[index >> 3];
    if (value != 0) {
        byte = byte | mask;
    } else {
        byte = byte & ~mask;
    }
}
GUEST_EXPORT(0x40207938, set_flag_bit);
