// Picking an item out of a set: at random, from a seed, or by position. These are what shops, events and presents
// use to choose what they offer; an empty set gives the empty item.
#include <algorithm>

#include "arm.hpp"
#include "core/random.hpp"
#include "item/item_bit_set.hpp"

namespace {

// The item standing for a bit of the set.
void construct_item_of_bit(Item &out, s32 bit) {
    construct_item(out, u16(Item::FIRST_ITEM + bit));
}

}  // namespace

// A random member of the set.
void pick_random_item(Item &out, const ItemBitSet &set) {
    s32 count = s32(set.count_all_bits());
    if (count == 0) {
        copy_item(out, *empty_item);
        return;
    }
    construct_item_of_bit(out, set.index_of_nth_set_bit(u32(random_below(count))));
}
GUEST_EXPORT(0x002fea2c, pick_random_item);

// A member of the set chosen by a generator started from the seed: the same seed gives the same item.
void pick_seeded_item(Item &out, const ItemBitSet &set, u32 seed) {
    s32 count = s32(set.count_all_bits());
    if (count == 0) {
        copy_item(out, *empty_item);
        return;
    }
    Random generator{seed};
    s32 position = arm::to_s32(generator.next_float() * float(count));
    construct_item_of_bit(out, set.index_of_nth_set_bit(u32(position)));
}
GUEST_EXPORT(0x001acd28, pick_seeded_item);

// The n-th member of the set. (The original treats the bit index 1 like an empty set; probably a slip.)
void pick_nth_item(Item &out, u32 n, const ItemBitSet &set) {
    constexpr s32 BIT_TREATED_AS_EMPTY = 1;
    if (set.count_all_bits() == 0) {
        copy_item(out, *empty_item);
        return;
    }
    s32 bit = set.index_of_nth_set_bit(n);
    if (bit == BIT_TREATED_AS_EMPTY) {
        copy_item(out, *empty_item);
        return;
    }
    construct_item_of_bit(out, bit);
}
GUEST_EXPORT(0x001acdc4, pick_nth_item);

// Fills `count` items with members of the set, each taken out of the set (but the last one stays): distinct ones while
// there are enough, then repeats of those. An empty set gives empty items.
void pick_distinct_items(gptr<Item> out, u32 count, ItemBitSet &set) {
    u32 members = set.count_all_bits();
    if (members == 0) {
        for (u32 i = 0; i < count; i++) {
            copy_item(out[i], *empty_item);
        }
        for (u32 i = 0; i < count; i++) {
            random_below(0);  // (the original draws a number for each, to copy an entry onto itself)
        }
        return;
    }
    u32 distinct = std::min(count, members);
    u32 remaining = members;
    for (u32 i = 0; i < distinct; i++) {
        construct_item_of_bit(out[i], set.index_of_nth_set_bit(u32(random_below(s32(remaining)))));
        clear_bit_keeping_one(set, out[i]);
        remaining--;
    }
    for (u32 i = distinct; i < count; i++) {
        copy_item(out[i], out[u32(random_below(s32(members)))]);
    }
}
GUEST_EXPORT(0x003004c4, pick_distinct_items);

// ---- inputs for the shadow checker's fuzzing

namespace {

gptr<ItemBitSet> some_set(guest::Fuzz &f) {
    auto set = f.object<ItemBitSet>();
    for (u32 &word : set->words) {
        word = f.below(8) == 0 ? u32(f.number()) : 0;
    }
    return set;
}

}  // namespace

GUEST_FUZZ(0x002fea2c, 300, [](guest::Fuzz &f) { f.arguments(f.object<Item>(), some_set(f)); });
GUEST_FUZZ(0x001acd28, 300, [](guest::Fuzz &f) { f.arguments(f.object<Item>(), some_set(f), f.number()); });
GUEST_FUZZ(0x001acdc4, 300, [](guest::Fuzz &f) { f.arguments(f.object<Item>(), f.below(20), some_set(f)); });
GUEST_FUZZ(0x003004c4, 300, [](guest::Fuzz &f) {
    f.arguments(f.allocate(8 * sizeof(Item)).cast<Item>(), f.pick<u32>({0, 1, 3, 8, f.below(9)}), some_set(f));
});
