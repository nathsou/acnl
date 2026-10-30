// Building blocks for GUEST_FUZZ generators.
#pragma once

#include <initializer_list>

#include "guest/guest.hpp"
#include "item/item.hpp"

namespace fuzz {

constexpr u32 ENCRYPTED_INT_GET = 0x00303660;  // EncryptedInt::get: reads two words of its object, writes nothing

// A vtable whose first `slots` entries all point at EncryptedInt::get (a harmless read-only function that returns a
// value computed from the object's first two words).
inline guest::gptr<u32> harmless_vtable(guest::Fuzz &f, u32 slots = 8) {
    auto vtable = f.allocate(slots * 4).cast<u32>();
    for (u32 i = 0; i < slots; i++) {
        vtable[i] = ENCRYPTED_INT_GET;
    }
    return vtable;
}

// An item with a random number of the category's range (flags zero).
inline guest::gptr<Item> item_in_category(guest::Fuzz &f, u8 category) {
    auto item = f.object<Item>();
    guest::gptr<CategoryInfo> info = category_info(category);
    item->id = u16(info->first_item_number + f.below(info->item_count));
    return item;
}

// An item for predicates over ids, categories and flags: the empty one, the first one, one of the given categories (when
// the item data is loaded) or any item, with assorted flags and sometimes the flag in the id.
inline guest::gptr<Item> assorted_item(guest::Fuzz &f, std::initializer_list<u8> categories = {}) {
    constexpr u32 FLAG_NIBBLE_SHIFT = 10;  // where some predicates look for a 4-bit value in the flags
    auto item = f.object<Item>();
    bool loaded = item_data_table->entries != nullptr;
    switch (loaded ? f.below(8) : 0) {
    case 0:
        item->id = Item::EMPTY;
        break;
    case 1:
        item->id = Item::FIRST_ITEM;
        break;
    case 2:
    case 3:
        if (categories.size() != 0) {
            guest::gptr<CategoryInfo> info = category_info(*(categories.begin() + f.below(u32(categories.size()))));
            item->id = u16(info->first_item_number + f.below(info->item_count));
            break;
        }
        [[fallthrough]];
    default:
        item->id = u16(Item::FIRST_ITEM + f.below(Item::ITEM_COUNT));
        break;
    }
    if (f.below(4) == 0) {
        item->id |= Item::ID_FLAG;
    }
    switch (f.below(3)) {
    case 0:
        item->flags = u16(f.number());
        break;
    case 1:
        item->flags = u16(f.below(16));
        break;
    default:
        item->flags = u16(f.below(16) << FLAG_NIBBLE_SHIFT | f.below(16));
        break;
    }
    return item;
}

}  // namespace fuzz
