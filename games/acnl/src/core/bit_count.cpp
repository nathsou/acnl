// Counting the set bits of a fixed-size bit array, and two accessors of an object holding two items.
#include "item/item.hpp"

namespace {

// A bit array of 186 words (what its bits mean is not known yet).
struct BitArray186 {
    static constexpr u32 WORDS = 186;
    u32 words[WORDS];
};
GUEST_SIZE(BitArray186, 186 * 4);

// A holder of two items, at offsets 8 and 0xc (what it is is not known yet).
struct ItemPairHolder {
    u8 unknown_00[8];
    Item item_8;
    Item item_c;

    gptr<Item> item_8_if_query_is_3();
    gptr<Item> item_c_if_query_is_4();
};
GUEST_OFFSET(ItemPairHolder, item_8, 8);
GUEST_OFFSET(ItemPairHolder, item_c, 0xc);
GUEST_SIZE(ItemPairHolder, 0x10);

// Still recompiled: a query on an item returning a small code (meaning not known yet).
inline constexpr guest::Function<0x0076ab28, u32(gptr<Item> item)> item_query;

constexpr u32 QUERY_ITEM_8 = 3;  // the code item_8 must have to be returned
constexpr u32 QUERY_ITEM_C = 4;  // the code item_c must have to be returned

}  // namespace

// The number of set bits in the array.
u32 count_set_bits(const BitArray186 &array) {
    u32 count = 0;
    for (u32 i = 0; i < BitArray186::WORDS; i++) {
        for (u32 word = array.words[i]; word != 0; word >>= 1) {
            count += word & 1;
        }
    }
    return count;
}
GUEST_EXPORT(0x003030d4, count_set_bits);

// The first item if the query reports 3 for it, else the empty item.
gptr<Item> ItemPairHolder::item_8_if_query_is_3() {
    gptr<Item> item = guest::addr_of(item_8);
    if (item_query(item) != QUERY_ITEM_8) {
        return empty_item.ptr();
    }
    return item;
}
GUEST_EXPORT(0x00303110, ItemPairHolder::item_8_if_query_is_3);

// The second item if the query reports 4 for it, else the empty item.
gptr<Item> ItemPairHolder::item_c_if_query_is_4() {
    gptr<Item> item = guest::addr_of(item_c);
    if (item_query(item) != QUERY_ITEM_C) {
        return empty_item.ptr();
    }
    return item;
}
GUEST_EXPORT(0x00303138, ItemPairHolder::item_c_if_query_is_4);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

GUEST_FUZZ(0x003030d4, 200, [](guest::Fuzz &f) {
    auto array = f.object<BitArray186>();
    for (u32 i = 0; i < BitArray186::WORDS; i++) {
        switch (f.below(4)) {
        case 0: array->words[i] = 0; break;
        case 1: array->words[i] = 0xffffffff; break;
        default: break;
        }
    }
    f.arguments(array);
});

static u16 some_item_id(guest::Fuzz &f) {
    switch (f.below(3)) {
    case 0: return Item::EMPTY;
    default: return u16(Item::FIRST_ITEM + f.below(Item::ITEM_COUNT));
    }
}

static gptr<ItemPairHolder> some_holder(guest::Fuzz &f) {
    auto holder = f.object<ItemPairHolder>();
    holder->item_8.id = some_item_id(f);
    holder->item_8.flags = u16(f.below(4) == 0 ? f.number() : f.below(10));
    holder->item_c.id = some_item_id(f);
    holder->item_c.flags = u16(f.below(4) == 0 ? f.number() : f.below(10));
    return holder;
}

GUEST_FUZZ(0x00303110, 300, [](guest::Fuzz &f) { f.arguments(some_holder(f)); });
GUEST_FUZZ(0x00303138, 300, [](guest::Fuzz &f) { f.arguments(some_holder(f)); });
