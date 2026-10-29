// A villager's record in the save data (0x2518 bytes, ten of them in SaveData::villagers). Only the fields the
// rewritten code uses are named so far.
#pragma once

#include "guest/guest.hpp"
#include "item/item.hpp"
#include "save/personal_id.hpp"

// A 12-byte value passed by value between the villager helpers (probably a date; layout not known yet).
struct Value12 {
    u32 words[3];
};
GUEST_SIZE(Value12, 12);

// What a villager keeps for each player (0xf2 bytes; 16 of them): the player's identity, then flags whose meaning is
// not known yet.
struct VillagerPlayerRecord {
    static constexpr u8 FLAGS_B8_BIT1 = 0x02;
    static constexpr u8 FLAGS_BB_BIT2 = 0x04;
    static constexpr u8 FLAGS_BC_BIT1 = 0x02;  // the record is in use
    static constexpr u8 FLAGS_BC_BIT3 = 0x08;
    static constexpr u8 FLAGS_BC_BIT5 = 0x20;
    static constexpr u8 FLAGS_BC_BIT7 = 0x80;
    static constexpr u8 FLAGS_BE_MASK = 0x06;  // two flags

    PersonalId identity;
    u8 unknown_2c[0xb8 - sizeof(PersonalId)];
    u8 flags_b8;
    u8 byte_b9;
    u8 byte_ba;
    u8 flags_bb;
    u8 flags_bc;
    u8 unknown_bd;
    u8 flags_be;
    u8 unknown_bf[0xf2 - 0xbf];
};
GUEST_OFFSET(VillagerPlayerRecord, flags_b8, 0xb8);
GUEST_OFFSET(VillagerPlayerRecord, byte_b9, 0xb9);
GUEST_OFFSET(VillagerPlayerRecord, flags_bb, 0xbb);
GUEST_OFFSET(VillagerPlayerRecord, flags_bc, 0xbc);
GUEST_OFFSET(VillagerPlayerRecord, flags_be, 0xbe);
GUEST_SIZE(VillagerPlayerRecord, 0xf2);

struct SaveVillager {
    static constexpr u32 SLOTS = 4;
    static constexpr u32 PLAYER_RECORDS = 16;
    static constexpr u32 FLAG_0 = 1u << 0;  // unknown flag
    static constexpr u32 FLAG_1 = 1u << 1;  // unknown flag
    static constexpr u32 FLAGS_16_17 = 3u << 16;  // two unknown flags, cleared together
    static constexpr u32 SLOT_FLAGS_SHIFT = 3;    // bits 3-6: one unknown flag per slot
    static constexpr u32 SLOT_FLAGS_MASK = 0xf;

    u8 unknown_0000[0x8c6];
    Item items_8c6[SLOTS];
    Item items_8d6[SLOTS];
    Item item_8e6;
    u8 unknown_08ea[4];
    VillagerPlayerRecord player_records[PLAYER_RECORDS];
    u8 unknown_180e[0x249a - 0x180e];
    Item item_249a;
    u8 unknown_249e[0x24ae - 0x249e];
    Item items_24ae[10];
    Item items_24d6[4];
    Item item_24e6;
    Item item_24ea;
    u8 unknown_24ee[2];
    s8 value_24f0;         // a signed value (meaning not known yet)
    u8 unknown_24f1[0x2508 - 0x24f1];
    u8 flag_2508;          // when clear, check_11a440 fails
    u8 unknown_2509;
    u8 unknown_250a[5];    // turned into a Value12 by f_0030a34c
    u8 state_250f;         // a state; 5 resets the state at 0x0094d938
    u32 flags_2510;
    u8 unknown_2514[4];

    bool has_flag_1() const;
    bool has_flag_0_only() const;      // FLAG_0 set and FLAG_1 clear
    bool has_flag_2510_bit0() const;
    // The first player record whose identity matches (null if none).
    gptr<VillagerPlayerRecord> find_player_record(const PersonalId &identity);
    gptr<Item> item_8d6_at(u32 slot);  // null when slot is out of range
    u32 count_items_8c6() const;       // the non-empty slots
    u32 count_items_8d6() const;       // the non-empty slots of the second list
    // Removes the item of the second list that has the same number; false if there is none (or the item is empty).
    bool remove_item_8d6(const Item &item);
    // Stores the item in item_8e6 when it is empty or of wear class 7; false otherwise.
    bool set_item_8e6(const Item &item);
    void clear_flag_bc_bit5_of_used_records();
    void set_state_250f(u32 state);
    // Puts the item in the first empty slot of the second list (after compacting it); when all slots are taken the
    // first one is dropped to make room. Empty items are ignored.
    void add_item_8d6(const Item &item);
    void clear_flags_16_17();
    bool has_slot_flag(u32 slot) const;  // the unknown flag of a slot (bits 3-6); false for slots out of range
    bool check_11a440(gptr<void> object, u32 unused_r2, gptr<const Value12> value) const;
};
GUEST_OFFSET(SaveVillager, items_8c6, 0x8c6);
GUEST_OFFSET(SaveVillager, items_8d6, 0x8d6);
GUEST_OFFSET(SaveVillager, item_8e6, 0x8e6);
GUEST_OFFSET(SaveVillager, player_records, 0x8ee);
GUEST_OFFSET(SaveVillager, item_249a, 0x249a);
GUEST_OFFSET(SaveVillager, items_24ae, 0x24ae);
GUEST_OFFSET(SaveVillager, items_24d6, 0x24d6);
GUEST_OFFSET(SaveVillager, item_24e6, 0x24e6);
GUEST_OFFSET(SaveVillager, item_24ea, 0x24ea);
GUEST_OFFSET(SaveVillager, value_24f0, 0x24f0);
GUEST_OFFSET(SaveVillager, flag_2508, 0x2508);
GUEST_OFFSET(SaveVillager, unknown_250a, 0x250a);
GUEST_OFFSET(SaveVillager, state_250f, 0x250f);
GUEST_OFFSET(SaveVillager, flags_2510, 0x2510);
GUEST_SIZE(SaveVillager, 0x2518);
