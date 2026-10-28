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
    gptr<u8> category_flags() const;            // the 3-byte entry of the item's category (null: not loaded)
    bool has_category_flag_4() const;           // true for kind 2 ids, else bit 4 of category_flags()[1]
    u32 price() const;                          // for a bag of bells, the bells in it
};
GUEST_SIZE(Item, 4);

// A category's entry (12 bytes): the item number of its first item is the one thing known.
struct CategoryInfo {
    u16 first_item_number;
    u8 unknown_02[10];
};
GUEST_SIZE(CategoryInfo, 12);
gptr<CategoryInfo> category_info(u32 category);  // categories >= NO_CATEGORY get a shared default entry

Item &construct_item(Item &self, u16 id);       // the constructor Item(u16)
Item &copy_item(Item &self, const Item &other);

// An entry of the item data table (30 bytes). Only the price and the category are known so far.
struct ItemData {
    u8 unknown_00[2];
    u16 price_unit;
    u8 unknown_04[6];
    u8 category;
    u8 unknown_0b[3];
    s8 price_multiplier;  // the base price is price_unit * price_multiplier
    u8 unknown_0f[15];

    u32 base_price() const { return u32(price_unit) * u32(s32(price_multiplier)); }
};
GUEST_SIZE(ItemData, 30);

// The loaded item data table (from the RomFS)
struct ItemDataTable {
    u32 unknown_00;
    gptr<ItemData> entries;  // ITEM_COUNT of them, once loaded
};
inline guest::global<ItemDataTable, 0x00a1838c> item_data_table;

// the per-category flag table (3 bytes per category)
struct CategoryFlagTable {
    u32 unknown_00;
    gptr<u8> entries;
};
inline guest::global<CategoryFlagTable, 0x00a1839c> category_flag_table;

// Bags of bells: 0x20AC-0x20B4 hold 100-900 bells, 0x20B5-0x2117 1,000-99,000.
constexpr u16 BELL_BAG_100 = 0x20ac;
constexpr u16 BELL_BAG_99000 = 0x2117;
constexpr u8 CATEGORY_BELLS = 2;

// An empty item, for slots that hold nothing usable
inline guest::global<Item, 0x0095bfdc> empty_item;
