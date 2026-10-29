// Small helpers on items: marking an item number in a bit set, resetting a flags halfword, and picking an item
// by what the item query reports for it.
#include "item/item.hpp"

namespace {

inline constexpr guest::Function<0x0076ab28, u32(gptr<Item> item)> item_query;

constexpr u32 QUERY_AT_OFFSET_4 = 2;  // the code the item at offset 4 must have to be returned
constexpr u32 QUERY_SELF = 1;         // the code the item must have to be returned
constexpr u32 FIRST_ITEM_NUMBER = 0x2000;
constexpr u32 LAST_ITEM_NUMBER = 0x372a;

// An object whose item sits at offset 4 (what the object is is not known yet).
struct ItemHolderAt4 {
    u8 unknown_00[4];
    Item item;
};
GUEST_OFFSET(ItemHolderAt4, item, 4);

// An object with a halfword at 2: top two bits are flags, the rest is a value (meaning not known yet).
struct FlagsHalfwordHolder {
    u8 unknown_00[2];
    u16 flags;

    static constexpr u16 KEEP_MASK = 0xc000;
    static constexpr u16 CLEARED_VALUE = 0x200;
};
GUEST_OFFSET(FlagsHalfwordHolder, flags, 2);

}  // namespace

// Sets the bit of the item's number (counted from the first item) in a bit set of 32-bit words. Numbers above the
// last item are ignored; numbers below the first one wrap around, as in the original.
static void set_item_bit(gptr<u32> bits, const Item &item) {
    u32 number = item.number();
    if (number > LAST_ITEM_NUMBER) {
        return;
    }
    u32 index = number - FIRST_ITEM_NUMBER;
    gptr<u32> word = bits + (index >> 5);
    *word = *word | (1u << (index & 0x1f));
}
GUEST_EXPORT(0x00303094, set_item_bit);

// The item at offset 4 if the query reports 2 for it, else the empty item.
static gptr<Item> item_if_query_is_2(ItemHolderAt4 &self) {
    gptr<Item> item = guest::addr_of(self.item);
    if (item_query(item) != QUERY_AT_OFFSET_4) {
        return empty_item.ptr();
    }
    return item;
}
GUEST_EXPORT(0x003031c8, item_if_query_is_2);

// Keeps the two flag bits of the halfword and sets the value to 0x200.
static void clear_item_flags_set_0x200(FlagsHalfwordHolder &self) {
    self.flags = (self.flags & FlagsHalfwordHolder::KEEP_MASK) | FlagsHalfwordHolder::CLEARED_VALUE;
}
GUEST_EXPORT(0x003031ec, clear_item_flags_set_0x200);

// The item itself if the query reports 1 for it, else the empty item.
static gptr<Item> item_if_query_is_1(gptr<Item> item) {
    if (item_query(item) != QUERY_SELF) {
        return empty_item.ptr();
    }
    return item;
}
GUEST_EXPORT(0x003031f0, item_if_query_is_1);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

static gptr<Item> some_valid_item(guest::Fuzz &f) {
    auto item = f.object<Item>();
    item->id = f.below(5) == 0 ? Item::EMPTY : u16(Item::FIRST_ITEM + f.below(Item::ITEM_COUNT));
    item->flags = u16(f.below(4) == 0 ? f.number() : f.below(10));
    return item;
}

GUEST_FUZZ(0x00303094, 300, [](guest::Fuzz &f) {
    auto bits = f.allocate(200 * 4);
    f.bytes(bits, 200 * 4);
    auto item = f.object<Item>();
    item->id = u16(f.pick<u32>({0x2000, 0x372a, 0x372b, 0x3800, 0x7ffe, 0x2000 + f.below(0x1800)}) |
                   (f.below(2) ? 0x8000 : 0));
    item->flags = u16(f.number());
    f.arguments(bits, item);
});
GUEST_FUZZ(0x003031c8, 300, [](guest::Fuzz &f) {
    auto holder = f.allocate(8);
    f.bytes(holder, 8);
    holder.cast<ItemHolderAt4>()->item = *some_valid_item(f);
    f.arguments(holder);
});
GUEST_FUZZ(0x003031ec, 200, [](guest::Fuzz &f) { f.arguments(f.object<FlagsHalfwordHolder>()); });
GUEST_FUZZ(0x003031f0, 300, [](guest::Fuzz &f) { f.arguments(some_valid_item(f)); });
