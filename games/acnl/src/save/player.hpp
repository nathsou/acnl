// A player's part of the save data (garden_plus.dat holds four), as the game keeps it in memory. Only the fields
// the rewritten code uses are named so far; the rest is padding named after its offset.
#pragma once

#include "core/encrypted_int.hpp"
#include "save/pockets.hpp"

struct SavePlayer {
    static constexpr u32 BANK_MAX = 999'999'999;
    static constexpr u32 COUNTER_6B9C_MAX = 99'999;

    u8 unknown_0000[0x55a6];
    u8 identity;  // first byte of the player's identity block, which f_002fe940 is given (extent not known yet)
    u8 unknown_55a7[0x6b8c - 0x55a7];
    EncryptedInt bank;  // bells in the bank, up to BANK_MAX
    u8 unknown_6b94[8];
    EncryptedInt counter_6b9c;  // capped at COUNTER_6B9C_MAX when added to
    u8 unknown_6ba4[0x6bd0 - 0x6ba4];
    Pockets pockets;

    void deposit(u32 bells);
};
GUEST_OFFSET(SavePlayer, identity, 0x55a6);
GUEST_OFFSET(SavePlayer, bank, 0x6b8c);
GUEST_OFFSET(SavePlayer, pockets, 0x6bd0);
GUEST_OFFSET(SavePlayer, pockets.wallet, 0x6f08);
