// The game keeps amounts players could edit in memory (bells, in the wallet and the bank, and other counters)
// scrambled, with a checksum: a value whose checksum does not match reads as 0. The save editors know this format
// as "EncryptedInt32".
#pragma once

#include "guest/guest.hpp"

struct EncryptedInt {
    u32 scrambled;  // (value + offset + KEY) rotated left by rotation + 4
    u16 offset;     // random, new on every write
    u8 rotation;    // random, 0-25, new on every write
    u8 checksum;    // checksum_of(scrambled)

    static constexpr u32 KEY = 0x8f187432;

    u32 get() const;
    void set(u32 value);
    void add(u32 amount, u32 max);  // adds, up to max
    void subtract(u32 amount);      // subtracts, down to 0

    // The scrambled form of a value, for given random parts (set() picks them at random)
    static EncryptedInt make(u32 value, u16 offset, u8 rotation);

    static u8 checksum_of(u32 scrambled) {
        return scrambled + (scrambled >> 8) + (scrambled >> 16) + (scrambled >> 24) + 0xba;
    }
};
GUEST_SIZE(EncryptedInt, 8);
