// Setting and clearing the bit of an item in an item set.
#include "item/item_bit_set.hpp"

bool ItemBitSet::set_bit_of(const Item &item) {
    s32 bit = item.index();
    if (bit < 0) {
        return false;
    }
    u32 word = u32(bit) >> 5;
    if (word >= WORDS) {
        return false;
    }
    words[word] = words[word] | (1u << (bit & 31));
    return true;
}
GUEST_EXPORT(0x0024a5f4, ItemBitSet::set_bit_of);

bool ItemBitSet::clear_bit_of(const Item &item) {
    s32 bit = item.index();
    if (bit < 0) {
        return false;
    }
    u32 word = u32(bit) >> 5;
    if (word >= WORDS) {
        return false;
    }
    words[word] = words[word] & ~(1u << (bit & 31));
    return true;
}
GUEST_EXPORT(0x0024a63c, ItemBitSet::clear_bit_of);
