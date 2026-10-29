// Operations on ItemBitSet.
#include "core/fuzz_helpers.hpp"
#include "item/item_bit_set.hpp"

namespace {

constexpr u32 BITS_PER_WORD = 32;

inline constexpr guest::Function<0x006b9b30, u32(u32 first, u32 second)> item_id_for;

}  // namespace

// Numbers below the first item wrap around, as in the original.
void ItemBitSet::add(const Item &item) {
    u32 number = item.number();
    if (number > Item::FIRST_ITEM + ITEM_BITS - 1) {
        return;
    }
    u32 index = number - Item::FIRST_ITEM;
    words[index / BITS_PER_WORD] |= 1u << (index % BITS_PER_WORD);
}
GUEST_EXPORT(0x00303094, ItemBitSet::add);

u32 ItemBitSet::count_all_bits() const {
    u32 count = 0;
    for (u32 word : words) {
        for (; word != 0; word >>= 1) {
            count += word & 1;
        }
    }
    return count;
}
GUEST_EXPORT(0x003030d4, ItemBitSet::count_all_bits);

u32 ItemBitSet::count_items() const {
    u32 count = 0;
    for (u32 bit = 0; bit < ITEM_BITS; bit++) {
        if ((words[bit / BITS_PER_WORD] >> (bit % BITS_PER_WORD) & 1) != 0) {
            count++;
        }
    }
    return count;
}
GUEST_EXPORT(0x0076f9b4, ItemBitSet::count_items);

bool ItemBitSet::contains(const Item &item) const {
    s32 index = item.index();
    if (index < 0) {
        return false;
    }
    u32 word = u32(index) / BITS_PER_WORD;
    if (word >= WORDS) {
        return false;
    }
    return (words[word] >> (index % BITS_PER_WORD) & 1) != 0;
}
GUEST_EXPORT(0x007701b8, ItemBitSet::contains);

// Whether the set contains the item that item_id_for gives for the two values.
static bool contains_item_for(const ItemBitSet &set, u32 first, u32 second) {
    Item item;
    construct_item(item, u16(item_id_for(first, second)));
    return set.contains(item);
}
GUEST_EXPORT(0x007701f8, contains_item_for);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

namespace {

gptr<ItemBitSet> some_set(guest::Fuzz &f) {
    auto set = f.object<ItemBitSet>();
    for (u32 i = 0; i < ItemBitSet::WORDS; i++) {
        switch (f.below(4)) {
        case 0:
            set->words[i] = 0;
            break;
        case 1:
            set->words[i] = 0xffffffff;
            break;
        default:
            break;
        }
    }
    return set;
}

gptr<Item> some_item(guest::Fuzz &f) {
    auto item = f.object<Item>();
    item->id = f.pick<u32>({0x2000, 0x372a, 0x372b, 0x3800, 0x7ffe, 0x2000 + f.below(Item::ITEM_COUNT)}) |
               (f.below(2) ? 0x8000 : 0);
    item->flags = u16(f.number());
    return item;
}

}  // namespace

GUEST_FUZZ(0x00303094, 300, [](guest::Fuzz &f) { f.arguments(some_set(f), some_item(f)); });
GUEST_FUZZ(0x003030d4, 200, [](guest::Fuzz &f) { f.arguments(some_set(f)); });
GUEST_FUZZ(0x0076f9b4, 200, [](guest::Fuzz &f) { f.arguments(some_set(f)); });
GUEST_FUZZ(0x007701b8, 300, [](guest::Fuzz &f) { f.arguments(some_set(f), some_item(f)); });
GUEST_FUZZ(0x007701f8, 200, [](guest::Fuzz &f) { f.arguments(some_set(f), f.below(40), f.below(40)); });
