// Cleaning up an item that was built from saved or received data, and marking sets of items by a data byte.
#include "item/item_bit_set.hpp"
#include "save/save_data.hpp"

void catalog_counterpart(Item &out, const Item &item);
void pick_nth_item(Item &out, u32 n, const ItemBitSet &set);
bool convert_to_earlier_form(Item &item);

namespace {

constexpr u16 FLAGS_KIND_BITS = 0xc000;  // the two top bits of the flags
constexpr u32 SMALL_NUMBER_LIMIT = 0xfd;  // numbers up to this go through the small catalog
constexpr u32 CATEGORY_MAPPED_BY_GROUP = 0x3f;
constexpr u32 GROUP_FOR_MAPPED_CATEGORY = 0xe;
constexpr u8 CATEGORY_FLAG_BIT_4 = 1 << 4;
constexpr u32 HIDDEN_NIBBLE_SHIFT = 4;
constexpr u8 HIDDEN_ITEM_FLAG = 0x01;  // ItemData::flags_1b bit 0

inline constexpr guest::Function<0x002fb328, gptr<SaveData>()> get_save_data;

constexpr u8 GROUP_LIMIT = 0x67;  // ItemData::group_0c values at or above read as 0

}  // namespace

// The byte at 0x0c of the data (items that share it belong together), 0 when it is GROUP_LIMIT or more.
u8 ItemData::group() const {
    return group_0c >= GROUP_LIMIT ? 0 : group_0c;
}
GUEST_EXPORT(0x00748724, ItemData::group);

// Sets the bits of the items whose group is the given one; unless the save data allows it, the items the data flags as
// hidden are left out.
void mark_items_with_group(ItemBitSet &set, u32 group) {
    guest::StackObject<Item> first;
    construct_item(*first, Item::FIRST_ITEM);
    gptr<ItemData> data = first->data();
    bool include_hidden = (get_save_data()->flags_621ce >> HIDDEN_NIBBLE_SHIFT) == 0;
    for (u32 index = 0; index < Item::ITEM_COUNT; index++) {
        if (data[index].group() != group) {
            continue;
        }
        if (!include_hidden && (data[index].flags_1b & HIDDEN_ITEM_FLAG) != 0) {
            continue;
        }
        set.words[index >> 5] |= 1u << (index & 31);
    }
}
GUEST_EXPORT(0x006f34b4, mark_items_with_group);

// Empties the set.
void ItemBitSet::clear() {
    for (u32 &word : words) {
        word = 0;
    }
}
GUEST_EXPORT(0x0024a5ec, ItemBitSet::clear);

// Cleans the item: drops the two top bits of the flags, maps small numbers through the small catalog, replaces items
// of category 0x3f by the member of the group-0xe items at the same position, the first item by the empty item, and
// converts to the earlier form where there is one. True when pockets accept the result (empty, kind 2, or with the
// category flag 4).
bool Item::sanitize() {
    flags &= ~FLAGS_KIND_BITS;
    if (number() <= SMALL_NUMBER_LIMIT) {
        guest::StackObject<Item> counterpart;
        catalog_counterpart(*counterpart, *this);
        id = counterpart->id;
        flags = counterpart->flags;
    }
    gptr<ItemData> item_data = data();
    if (item_data && item_data->category < NO_CATEGORY && item_data->category == CATEGORY_MAPPED_BY_GROUP) {
        s32 position = item_offset_in_category(*this);
        guest::StackObject<ItemBitSet> group_items;
        group_items->clear();
        mark_items_with_group(*group_items, GROUP_FOR_MAPPED_CATEGORY);
        guest::StackObject<Item> picked;
        pick_nth_item(*picked, u32(position), *group_items);
        id = picked->id;
        flags = picked->flags;
    }
    if (number() == FIRST_ITEM) {
        id = empty_item->id;
        flags = empty_item->flags;
    }
    convert_to_earlier_form(*this);
    if (number() != EMPTY && (id & KIND_MASK) != (KIND_2 << KIND_SHIFT)) {
        gptr<u8> category_entry = category_flags();
        if (!category_entry || (category_entry[1] & CATEGORY_FLAG_BIT_4) == 0) {
            return false;
        }
    }
    flags &= ~FLAGS_KIND_BITS;
    return true;
}
GUEST_EXPORT(0x006ba118, Item::sanitize);
