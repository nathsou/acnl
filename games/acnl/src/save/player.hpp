// A player's part of the save data (garden_plus.dat holds four), as the game keeps it in memory. Only the fields
// the rewritten code uses are named so far; the rest is padding named after its offset.
#pragma once

#include "core/encrypted_int.hpp"
#include "save/counter_table.hpp"
#include "save/personal_id.hpp"
#include "save/pockets.hpp"

struct SavePlayer {
    static constexpr u32 BANK_MAX = 999'999'999;
    static constexpr u32 COUNTER_6B9C_MAX = 99'999;
    static constexpr u32 SIZE = 0xa480;

    u8 unknown_0000[0x55a6];
    PersonalId identity;
    u8 stamp_55d2[2];  // two bytes of a value computed by f_0035072c (meaning not known yet)
    u8 unknown_55d4[8];
    CounterTable counters;
    u8 unknown_56c4[0x5700 - 0x56c4];
    u8 flags_5700;
    u8 flags_5701;
    u8 unknown_5702[0x6b8c - 0x5702];
    EncryptedInt bank;  // bells in the bank, up to BANK_MAX
    u8 unknown_6b94[8];
    EncryptedInt counter_6b9c;  // capped at COUNTER_6B9C_MAX when added to
    u8 unknown_6ba4[0x6bd0 - 0x6ba4];
    Pockets pockets;
    u8 unknown_tail[SIZE - 0x6bd0 - sizeof(Pockets)];

    void deposit(u32 bells);
};
GUEST_OFFSET(SavePlayer, identity, 0x55a6);
GUEST_OFFSET(SavePlayer, identity.town, 0x55bc);
GUEST_OFFSET(SavePlayer, stamp_55d2, 0x55d2);
GUEST_OFFSET(SavePlayer, counters, 0x55dc);
GUEST_OFFSET(SavePlayer, flags_5700, 0x5700);
GUEST_OFFSET(SavePlayer, bank, 0x6b8c);
GUEST_OFFSET(SavePlayer, pockets, 0x6bd0);
GUEST_OFFSET(SavePlayer, pockets.wallet, 0x6f08);
GUEST_SIZE(SavePlayer, SavePlayer::SIZE);
