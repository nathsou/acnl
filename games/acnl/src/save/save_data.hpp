// The save data as the game keeps it in memory (the global at 0x0095bf74 points to it): the four players, the
// villagers and many other parts. Only the parts the rewritten code touches are named; the rest is padding named
// after its offset.
#pragma once

#include "guest/guest.hpp"
#include "item/item.hpp"
#include "save/player.hpp"
#include "save/saved_record.hpp"
#include "save/villager.hpp"

// A part of the save data whose type and extent are not known yet.
struct SaveDataPart {
    u8 unknown;
};

// Elements of two tables of the save data (what they hold is not known yet).
struct SaveDataEntry2168 {
    u8 unknown[2168];
};
GUEST_SIZE(SaveDataEntry2168, 2168);

struct SaveDataEntry2160 {
    u8 unknown_00[0x7c];
    u8 field_7c;
    u8 unknown_7d[2160 - 0x7d];
};
GUEST_OFFSET(SaveDataEntry2160, field_7c, 0x7c);
GUEST_SIZE(SaveDataEntry2160, 2160);

struct SaveData {
    static constexpr u32 ENTRIES_4BF70_COUNT = 16;
    static constexpr u32 ENTRIES_668A0_COUNT = 8;
    static constexpr u32 PLAYERS_OFFSET = 0xa0;
    static constexpr u32 BASE_OFFSET = 0x80;  // what get_data_base adds to the address of the save data
    static constexpr u32 PLAYER_COUNT = 4;
    static constexpr u32 VILLAGER_COUNT = 10;
    static constexpr u32 NO_PLAYER = PLAYER_COUNT;  // player_index of a null player or one not in the array
    static constexpr u8 FLAGS_621CF_BIT_1 = 1 << 1;  // unknown flag
    static constexpr u8 FLAGS_621CF_BIT_2 = 1 << 2;  // unknown flag

    u8 header[PLAYERS_OFFSET];
    SavePlayer players[PLAYER_COUNT];
    u8 unknown_292a0[0x292a4 - PLAYERS_OFFSET - PLAYER_COUNT * SavePlayer::SIZE];
    SaveVillager villagers[VILLAGER_COUNT];
    u8 unknown_40594[0x40644 - 0x40594];
    SavedRecord record_b;  // kind 7
    u8 unknown_40669;
    SavedRecord record_a;  // kind 8
    u8 unknown_4068f[0x42a06 - 0x4068f];
    s8 index_42a06;  // an index of a villager (meaning not known yet)
    s8 index_42a07;  // compared with a villager's index (meaning not known yet)
    u8 unknown_42a08[0x4bf70 - 0x42a08];
    SaveDataEntry2168 entries_4bf70[ENTRIES_4BF70_COUNT];
    u8 unknown_546f0[0x621cf - 0x546f0];
    u8 flags_621cf;
    u8 unknown_621d0[0x6223a - 0x621d0];
    Item reference_item;  // the item some prices are compared against (what it represents is not known yet)
    u8 unknown_6223e[0x62338 - 0x6223e];
    SaveDataPart part_62338;
    u8 unknown_62339[0x668a0 - 0x62339];
    SaveDataEntry2160 entries_668a0[ENTRIES_668A0_COUNT];
    u8 unknown_6ac20[0x6ad82 - 0x6ac20];
    SaveDataPart part_6ad82;
    u8 unknown_6ad83[0x6aeb8 - 0x6ad83];
    SaveDataPart part_6aeb8;
    u8 unknown_6aeb9[0x6e2a6 - 0x6aeb9];
    u8 state_6e2a6;
    u8 unknown_6e2a7[0x70f1c - 0x6e2a7];
    SaveDataPart part_70f1c;
};
GUEST_OFFSET(SaveData, players, SaveData::PLAYERS_OFFSET);
GUEST_OFFSET(SaveData, villagers, 0x292a4);
GUEST_OFFSET(SaveData, record_b, 0x40644);
GUEST_OFFSET(SaveData, record_a, 0x4066a);
GUEST_OFFSET(SaveData, index_42a06, 0x42a06);
GUEST_OFFSET(SaveData, state_6e2a6, 0x6e2a6);
GUEST_OFFSET(SaveData, index_42a07, 0x42a07);
GUEST_OFFSET(SaveData, entries_4bf70, 0x4bf70);
GUEST_OFFSET(SaveData, flags_621cf, 0x621cf);
GUEST_OFFSET(SaveData, reference_item, 0x6223a);
GUEST_OFFSET(SaveData, part_62338, 0x62338);
GUEST_OFFSET(SaveData, entries_668a0, 0x668a0);
GUEST_OFFSET(SaveData, part_6ad82, 0x6ad82);
GUEST_OFFSET(SaveData, part_6aeb8, 0x6aeb8);
GUEST_OFFSET(SaveData, part_70f1c, 0x70f1c);

// The "data base" (what get_data_base returns) of the save data whose players start at `players`.
inline u32 save_data_base_of_players(guest::gptr<const SavePlayer> players) {
    return players.addr() - SaveData::PLAYERS_OFFSET + SaveData::BASE_OFFSET;
}

// The save data a "data base" (what get_data_base returns) belongs to.
inline guest::gptr<SaveData> save_data_of_base(u32 base) {
    return guest::gptr<SaveData>(base - SaveData::BASE_OFFSET);
}

inline guest::global<guest::gptr<SaveData>, 0x0095bf74> save_data;
