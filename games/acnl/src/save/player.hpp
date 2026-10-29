// A player's part of the save data (garden_plus.dat holds four), as the game keeps it in memory. Only the fields
// the rewritten code uses are named so far; the rest is padding named after its offset.
#pragma once

#include "core/encrypted_int.hpp"
#include "save/counter_table.hpp"
#include "save/personal_id.hpp"
#include "save/pockets.hpp"

// An item with a halfword after it (6 bytes).
struct ListedItem {
    Item item;
    u16 value;
};
GUEST_SIZE(ListedItem, 6);

struct SavePlayer {
    static constexpr u32 BANK_MAX = 999'999'999;
    static constexpr u32 COUNTER_6B9C_MAX = 99'999;
    static constexpr u32 SIZE = 0xa480;
    static constexpr u32 LISTED_ITEM_COUNT = 3;

    u8 unknown_0000[0x55a6];
    PersonalId identity;
    u8 stamp_55d2[2];  // two bytes of a value computed by f_0035072c (meaning not known yet)
    u8 month_55d4;     // a month (items with availability rule 0x7d are on offer in it)
    u8 unknown_55d5[7];
    CounterTable counters;
    u8 unknown_56c4[0x5700 - 0x56c4];
    u8 flags_5700;
    u8 flags_5701;
    u8 unknown_5702[0x570b - 0x5702];
    u8 flags_570b;
    u8 unknown_570c[0x5712 - 0x570c];
    u8 flags_5712;
    u8 flags_5713;
    u8 unknown_5714[0x6b8c - 0x5714];
    EncryptedInt bank;  // bells in the bank, up to BANK_MAX
    EncryptedInt counter_6b94;
    EncryptedInt counter_6b9c;  // capped at COUNTER_6B9C_MAX when added to
    u8 unknown_6ba4[0x6bd0 - 0x6ba4];
    Pockets pockets;
    u8 unknown_6f10[0x8ae0 - 0x6bd0 - sizeof(Pockets)];
    u8 block_8ae0[0x8f83 - 0x8ae0];  // counters (the first argument of f_0024b448)
    u8 flags_8f83;
    u8 unknown_8f84[0xa468 - 0x8f84];
    ListedItem listed_items[LISTED_ITEM_COUNT];
    u8 unknown_a47a[SIZE - 0xa47a];

    void deposit(u32 bells);
};
GUEST_OFFSET(SavePlayer, identity, 0x55a6);
GUEST_OFFSET(SavePlayer, identity.town, 0x55bc);
GUEST_OFFSET(SavePlayer, stamp_55d2, 0x55d2);
GUEST_OFFSET(SavePlayer, month_55d4, 0x55d4);
GUEST_OFFSET(SavePlayer, counters, 0x55dc);
GUEST_OFFSET(SavePlayer, flags_5700, 0x5700);
GUEST_OFFSET(SavePlayer, flags_570b, 0x570b);
GUEST_OFFSET(SavePlayer, flags_5712, 0x5712);
GUEST_OFFSET(SavePlayer, block_8ae0, 0x8ae0);
GUEST_OFFSET(SavePlayer, flags_8f83, 0x8f83);
GUEST_OFFSET(SavePlayer, bank, 0x6b8c);
GUEST_OFFSET(SavePlayer, counter_6b94, 0x6b94);
GUEST_OFFSET(SavePlayer, listed_items, 0xa468);
GUEST_OFFSET(SavePlayer, pockets, 0x6bd0);
GUEST_OFFSET(SavePlayer, pockets.wallet, 0x6f08);
GUEST_SIZE(SavePlayer, SavePlayer::SIZE);
