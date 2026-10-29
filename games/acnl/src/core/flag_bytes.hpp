// A set of flags kept one bit each in as few bytes as needed (bit i is bit i % 8 of byte i / 8). Indices past the end
// are ignored when setting and read as clear.
#pragma once

#include "guest/guest.hpp"

template <u32 BITS>
struct FlagBytes {
    static constexpr u32 FLAG_COUNT = BITS;

    u8 bytes[(BITS + 7) / 8];

    bool test(u32 index) const {
        return index < BITS && (bytes[index / 8] >> (index % 8) & 1) != 0;
    }
    void set(u32 index) {
        if (index < BITS) {
            bytes[index / 8] = bytes[index / 8] | u8(1u << (index % 8));
        }
    }
    void assign(u32 index, bool value) {
        if (index >= BITS) {
            return;
        }
        u8 mask = u8(1u << (index % 8));
        bytes[index / 8] = value ? (bytes[index / 8] | mask) : (bytes[index / 8] & ~mask);
    }
    u32 count_equal_to(u32 value) const {  // the number of flags whose state (0 or 1) equals `value`
        u32 count = 0;
        for (u32 index = 0; index < BITS; index++) {
            if (u32(test(index)) == value) {
                count++;
            }
        }
        return count;
    }
};
