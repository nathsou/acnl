// A set of items: one bit per item with data (counted from the first item), in 186 words.
#pragma once

#include "item/item.hpp"

struct ItemBitSet {
    static constexpr u32 WORDS = 186;
    static constexpr u32 ITEM_BITS = Item::ITEM_COUNT;  // the bits that stand for items; the rest is spare

    u32 words[WORDS];

    void add(const Item &item);          // numbers past the last item are ignored
    u32 count_items() const;             // the set bits among the first ITEM_BITS
    u32 count_all_bits() const;          // every set bit
    bool contains(const Item &item) const;  // false for items without data
};
GUEST_SIZE(ItemBitSet, ItemBitSet::WORDS * 4);
