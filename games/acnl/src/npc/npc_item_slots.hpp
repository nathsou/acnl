// An object reached from NPC code (AcNpcNml::TalkRcpt, BsNpcMgr::SearchFunction...) holding two groups of four
// items and a word of flags. What the object is, is not known yet.
#pragma once

#include "item/item.hpp"

struct NpcItemSlots {
    static constexpr u32 SLOTS = 4;
    static constexpr u32 FLAG_0 = 1u << 0;  // unknown flag
    static constexpr u32 FLAG_1 = 1u << 1;  // unknown flag
    static constexpr u32 FLAGS_16_17 = 3u << 16;  // two unknown flags, cleared together

    u8 unknown_0000[0x8c6];
    Item items_8c6[SLOTS];
    Item items_8d6[SLOTS];
    u8 unknown_08e6[0x2510 - 0x8e6];
    u32 flags_2510;

    bool has_flag_1() const;
    gptr<Item> item_8d6_at(u32 slot);  // null when slot is out of range
    u32 count_items_8c6() const;       // the non-empty slots
    bool has_flag_0_only() const;      // FLAG_0 set and FLAG_1 clear
    void clear_flags_16_17();
};
GUEST_OFFSET(NpcItemSlots, items_8c6, 0x8c6);
GUEST_OFFSET(NpcItemSlots, items_8d6, 0x8d6);
GUEST_OFFSET(NpcItemSlots, flags_2510, 0x2510);
