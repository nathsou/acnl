// A villager's record in the save data (0x2518 bytes, ten of them in SaveData::villagers). Only the fields the
// rewritten code uses are named so far.
#pragma once

#include "guest/guest.hpp"
#include "item/item.hpp"

// A 12-byte value passed by value between the villager helpers (probably a date; layout not known yet).
struct Value12 {
    u32 words[3];
};
GUEST_SIZE(Value12, 12);

struct SaveVillager {
    static constexpr u32 SLOTS = 4;
    static constexpr u32 FLAG_0 = 1u << 0;  // unknown flag
    static constexpr u32 FLAG_1 = 1u << 1;  // unknown flag
    static constexpr u32 FLAGS_16_17 = 3u << 16;  // two unknown flags, cleared together
    static constexpr u32 SLOT_FLAGS_SHIFT = 3;    // bits 3-6: one unknown flag per slot
    static constexpr u32 SLOT_FLAGS_MASK = 0xf;

    u8 unknown_0000[0x8c6];
    Item items_8c6[SLOTS];
    Item items_8d6[SLOTS];
    u8 unknown_08e6[0x249a - 0x8e6];
    Item item_249a;
    u8 unknown_249e[0x24e6 - 0x249e];
    Item item_24e6;
    Item item_24ea;
    u8 unknown_24ee[2];
    s8 value_24f0;         // a signed value (meaning not known yet)
    u8 unknown_24f1[0x2508 - 0x24f1];
    u8 flag_2508;          // when clear, check_11a440 fails
    u8 unknown_2509;
    u8 unknown_250a[6];    // turned into a Value12 by f_0030a34c
    u32 flags_2510;
    u8 unknown_2514[4];

    bool has_flag_1() const;
    bool has_flag_0_only() const;      // FLAG_0 set and FLAG_1 clear
    bool has_flag_2510_bit0() const;
    gptr<Item> item_8d6_at(u32 slot);  // null when slot is out of range
    u32 count_items_8c6() const;       // the non-empty slots
    void clear_flags_16_17();
    bool has_slot_flag(u32 slot) const;  // the unknown flag of a slot (bits 3-6); false for slots out of range
    bool check_11a440(gptr<void> object, u32 unused_r2, gptr<const Value12> value) const;
};
GUEST_OFFSET(SaveVillager, items_8c6, 0x8c6);
GUEST_OFFSET(SaveVillager, items_8d6, 0x8d6);
GUEST_OFFSET(SaveVillager, item_249a, 0x249a);
GUEST_OFFSET(SaveVillager, item_24e6, 0x24e6);
GUEST_OFFSET(SaveVillager, item_24ea, 0x24ea);
GUEST_OFFSET(SaveVillager, value_24f0, 0x24f0);
GUEST_OFFSET(SaveVillager, flag_2508, 0x2508);
GUEST_OFFSET(SaveVillager, unknown_250a, 0x250a);
GUEST_OFFSET(SaveVillager, flags_2510, 0x2510);
GUEST_SIZE(SaveVillager, 0x2518);
