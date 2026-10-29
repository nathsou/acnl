// A set of items: one bit per item with data (counted from the first item), in 186 words.
#pragma once

#include "item/item.hpp"

struct ItemBitSet {
    static constexpr u32 WORDS = 186;
    static constexpr u32 ITEM_BITS = Item::ITEM_COUNT;  // the bits that stand for items; the rest is spare

    u32 words[WORDS];

    void clear();
    void add(const Item &item);          // numbers past the last item are ignored
    u32 count_items() const;             // the set bits among the first ITEM_BITS
    u32 count_all_bits() const;          // every set bit
    bool contains(const Item &item) const;  // false for items without data
    bool set_bit_of(const Item &item);      // false when the item has no bit
    bool clear_bit_of(const Item &item);
    s32 index_of_nth_set_bit(u32 n) const;  // the bit index of the n-th set bit (from 0), -1 if there are fewer
};
GUEST_SIZE(ItemBitSet, ItemBitSet::WORDS * 4);

// Removes the item from the set unless it is the only one left; whether it was removed.
bool clear_bit_keeping_one(ItemBitSet &set, const Item &item);
