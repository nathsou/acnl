// The save data as the game keeps it in memory (the global at 0x0095bf74 points to it): the four players, the
// villagers and many other parts. Only the parts the rewritten code touches are named; the rest is padding named
// after its offset.
#pragma once

#include "guest/guest.hpp"
#include "item/item.hpp"
#include "save/villager.hpp"

// A part of the save data whose type and extent are not known yet.
struct SaveDataPart {
    u8 unknown;
};

struct SaveData {
    static constexpr u32 VILLAGER_COUNT = 10;
    static constexpr u8 FLAGS_621CF_BIT_2 = 1 << 2;  // unknown flag

    u8 unknown_00000[0x292a4];
    SaveVillager villagers[VILLAGER_COUNT];
    u8 unknown_40594[0x42a06 - 0x40594];
    s8 index_42a06;  // an index of a villager (meaning not known yet)
    s8 index_42a07;  // compared with a villager's index (meaning not known yet)
    u8 unknown_42a08[0x621cf - 0x42a08];
    u8 flags_621cf;
    u8 unknown_621d0[0x6223a - 0x621d0];
    Item reference_item;  // the item some prices are compared against (what it represents is not known yet)
    u8 unknown_6223e[0x6ad82 - 0x6223e];
    SaveDataPart part_6ad82;
    u8 unknown_6ad83[0x6aeb8 - 0x6ad83];
    SaveDataPart part_6aeb8;
};
GUEST_OFFSET(SaveData, villagers, 0x292a4);
GUEST_OFFSET(SaveData, index_42a06, 0x42a06);
GUEST_OFFSET(SaveData, index_42a07, 0x42a07);
GUEST_OFFSET(SaveData, flags_621cf, 0x621cf);
GUEST_OFFSET(SaveData, reference_item, 0x6223a);
GUEST_OFFSET(SaveData, part_6ad82, 0x6ad82);
GUEST_OFFSET(SaveData, part_6aeb8, 0x6aeb8);

inline guest::global<guest::gptr<SaveData>, 0x0095bf74> save_data;
