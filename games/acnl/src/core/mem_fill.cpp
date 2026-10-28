// Small fixed-size fill helpers (the compiler runtime's memset specializations): each repeats the low byte of the
// value over a few bytes.
#include "guest/guest.hpp"

namespace {

// the low byte of value, repeated in every byte of a word
constexpr u32 repeat_byte(u32 value) {
    u32 byte = value & 0xff;
    u32 half = byte | (byte << 8);
    return half | (half << 16);
}

}  // namespace

// Fills 12 bytes with the low byte of value.
static void fill_12_bytes(gptr<u32> dest, u32 value) {
    u32 word = repeat_byte(value);
    for (u32 i = 0; i < 3; i++) {
        dest[i] = word;
    }
}
GUEST_EXPORT(0x00779600, fill_12_bytes);

// Fills 3 bytes with the low byte of value.
static void fill_3_bytes(gptr<u8> dest, u32 value) {
    u32 word = repeat_byte(value);
    *dest.cast<u16>() = u16(word);
    dest[2] = u8(word);
}
GUEST_EXPORT(0x0077961c, fill_3_bytes);

// Fills 4 bytes with the low byte of value.
static void fill_4_bytes(gptr<u32> dest, u32 value) {
    *dest = repeat_byte(value);
}
GUEST_EXPORT(0x00779638, fill_4_bytes);

// Fills 5 bytes with the low byte of value.
static void fill_5_bytes(gptr<u8> dest, u32 value) {
    u32 word = repeat_byte(value);
    *dest.cast<u32>() = word;
    dest[4] = u8(word);
}
GUEST_EXPORT(0x0077964c, fill_5_bytes);

GUEST_FUZZ(0x00779600, 200, [](guest::Fuzz &f) {
    auto dest = f.allocate(16).cast<u32>();
    f.bytes(dest, 16);
    f.arguments(dest, f.pick<u32>({0, 0xff, 0xffffffff, f.number()}));
});
GUEST_FUZZ(0x0077961c, 200, [](guest::Fuzz &f) {
    auto dest = f.allocate(8).cast<u8>();
    f.bytes(dest, 8);
    f.arguments(dest, f.pick<u32>({0, 0xff, 0xffffffff, f.number()}));
});
GUEST_FUZZ(0x00779638, 200, [](guest::Fuzz &f) {
    auto dest = f.allocate(8).cast<u32>();
    f.bytes(dest, 8);
    f.arguments(dest, f.pick<u32>({0, 0xc, 0xff, 0xffffffff, f.number()}));
});
GUEST_FUZZ(0x0077964c, 200, [](guest::Fuzz &f) {
    auto dest = f.allocate(8).cast<u8>();
    f.bytes(dest, 8);
    f.arguments(dest, f.pick<u32>({0, 0x80, 0xff, f.number()}));
});
