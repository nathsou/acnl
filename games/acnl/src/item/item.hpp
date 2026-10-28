// Items: everything a player can hold, plant, place or wear, and the objects on the map. An item is 4 bytes
// (pockets, storage, the town map, mail attachments all hold them).
//
// The id's bit 15 is a flag; the rest, the item number, has a kind in bits 13-14:
//   0x0000-0x1FFF  map objects (trees, weeds, rocks...)
//   0x2000-0x372A  items (each with an ItemData entry)
//   0x7FFE         empty
#pragma once

#include "guest/guest.hpp"

struct ItemData;

struct Item {
    u16 id;
    u16 flags;

    static constexpr u16 EMPTY = 0x7ffe;
    static constexpr u16 FIRST_ITEM = 0x2000;
    static constexpr u16 ITEM_COUNT = 0x172b;  // items with data: 0x2000-0x372A
    static constexpr u8 NO_CATEGORY = 0x9b;

    u16 number() const { return id & 0x7fff; }  // the id without its flag bit
    bool is_empty() const;
    bool is_item() const;                       // in the range with ItemData
    bool has_number(u16 number) const;
    s32 index() const;                          // into the item data table, or -1
    gptr<ItemData> data() const;                // null for map objects and empty slots
    u8 category() const;                        // NO_CATEGORY without data
};
GUEST_SIZE(Item, 4);

Item &construct_item(Item &self, u16 id);       // the constructor Item(u16)
Item &copy_item(Item &self, const Item &other);

// An entry of the item data table (30 bytes). Only the category is known so far.
struct ItemData {
    u8 unknown_00[0xa];
    u8 category;
    u8 unknown_0b[0x13];
};
GUEST_SIZE(ItemData, 30);

// The loaded item data table (from the RomFS)
struct ItemDataTable {
    u32 unknown_00;
    gptr<ItemData> entries;  // ITEM_COUNT of them, once loaded
};
inline guest::global<ItemDataTable, 0x00a1838c> item_data_table;

// Still recompiled code:
// how much an item sells for; for a bag of bells, the bells in it
inline constexpr guest::Function<0x00305630, u32(const Item &item)> item_price;
// true for kind 2 items; otherwise bit 4 of the item's category flags. Pockets treat items that fail it as empty.
inline constexpr guest::Function<0x00769840, bool(const Item &item)> item_category_flag_4;

// Bags of bells: 0x20AC-0x20B4 hold 100-900 bells, 0x20B5-0x2117 1,000-99,000.
constexpr u16 BELL_BAG_100 = 0x20ac;
constexpr u16 BELL_BAG_99000 = 0x2117;
constexpr u8 CATEGORY_BELLS = 2;

// An empty item, for slots that hold nothing usable
inline guest::global<Item, 0x0095bfdc> empty_item;
