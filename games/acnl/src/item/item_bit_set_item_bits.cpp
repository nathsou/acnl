// Setting and clearing the bit of an item in an item set.
#include "item/item_bit_set.hpp"

namespace {

gptr<ItemBitSet> fuzz_set(guest::Fuzz &f) {
    auto set = f.object<ItemBitSet>();
    return set;
}

gptr<Item> fuzz_item(guest::Fuzz &f) {
    auto item = f.object<Item>();
    if (f.below(4) != 0) {
        item->id = u16(Item::FIRST_ITEM + f.below(Item::ITEM_COUNT));
    }
    return item;
}

}  // namespace

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
GUEST_FUZZ(0x0024a5f4, 200, [](guest::Fuzz &f) { f.arguments(fuzz_set(f), fuzz_item(f)); });

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
GUEST_FUZZ(0x0024a63c, 200, [](guest::Fuzz &f) { f.arguments(fuzz_set(f), fuzz_item(f)); });
