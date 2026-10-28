#include "guest/guest.hpp"

namespace {
constexpr u32 BIT_COUNT = 0x12;  // bits (and halfwords) the helpers below accept
}  // namespace

// Calls function(element) for `count` elements, the address advancing by `stride` bytes each time. Returns base.
// Without a function nothing is called.
static gptr<void> for_each_element(gptr<void> base, u32 function, u32 stride, u32 count) {
    if (function != 0) {
        u32 element = base.addr();
        for (; count != 0; count--) {
            guest::call_address<void>(function, gptr<void>(element));
            element += stride;
        }
    }
    return base;
}
GUEST_EXPORT(0x00301d0d, for_each_element);

// The address of the halfword at index in a table; indices out of range give the table itself.
static gptr<u16> halfword_slot(gptr<u16> table, u32 index) {
    if (index < BIT_COUNT) {
        return table + index;
    }
    return table;
}
GUEST_EXPORT(0x00301d30, halfword_slot);

struct TwoByteSource {
    u8 unknown_00[4];
    u8 first;
    u8 second;
};
GUEST_OFFSET(TwoByteSource, first, 4);
GUEST_OFFSET(TwoByteSource, second, 5);

// Copies the two bytes at offset 4 of the source to the destination.
static void copy_two_bytes(gptr<u8> out, const TwoByteSource &source) {
    u8 first = source.first;
    u8 second = source.second;
    out[0] = first;
    out[1] = second;
}
GUEST_EXPORT(0x00301d3c, copy_two_bytes);

// Sets or clears bit `index` (below BIT_COUNT, else nothing happens) of a bit array, bit 0 being the lowest of byte 0.
static void write_bit(gptr<u8> bits, s32 index, u32 value) {
    if (u32(index) >= BIT_COUNT) {
        return;
    }
    gptr<u8> byte = bits + index / 8;
    u8 mask = u8(1u << (index & 7));
    if (value != 0) {
        *byte = *byte | mask;
    } else {
        *byte = *byte & ~mask;
    }
}
GUEST_EXPORT(0x00301d50, write_bit);

GUEST_FUZZ(0x00301d0d, 200, [](guest::Fuzz &f) {
    auto base = f.allocate(64);
    f.bytes(base, 64);
    f.arguments(base, f.pick<u32>({0, 0x00301d30}), f.pick<u32>({0, 2, 4, 12}), f.below(6));
});

GUEST_FUZZ(0x00301d30, 200, [](guest::Fuzz &f) {
    auto table = f.allocate(64);
    f.arguments(table, f.pick<u32>({0, 1, 0x11, 0x12, 0x13, 0xffffffff, f.below(40)}));
});

GUEST_FUZZ(0x00301d3c, 200, [](guest::Fuzz &f) {
    auto out = f.allocate(8);
    f.bytes(out, 8);
    auto source = f.allocate(8);
    f.bytes(source, 8);
    f.arguments(out, source);
});

GUEST_FUZZ(0x00301d50, 300, [](guest::Fuzz &f) {
    auto bits = f.allocate(16);
    f.bytes(bits, 16);
    f.arguments(bits, f.pick<s32>({0, 1, 7, 8, 16, 17, 18, 19, -1, -9, s32(f.below(24))}),
                f.pick<u32>({0, 1, f.number()}));
});
