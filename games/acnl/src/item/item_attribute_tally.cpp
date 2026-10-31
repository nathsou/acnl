// A tally of the attributes of the items added to it, and which items were added (for the catalog-like lists the game
// shows). An item counts for every attribute flag it has.
#include "item/item.hpp"

namespace {

constexpr u32 ATTRIBUTE_COUNT = 8;
constexpr u32 SEEN_BYTES = (Item::ITEM_COUNT + 7) / 8;
constexpr u32 BITS_PER_BYTE_SHIFT = 3;
constexpr u32 BIT_IN_BYTE_MASK = 7;
constexpr u32 FLAGS_1D_SHIFT = 8;

// The flags of the item data as one halfword (flags_1c in the low byte, flags_1d in the high byte) that make up each
// attribute.
constexpr u16 ATTRIBUTE_MASKS[ATTRIBUTE_COUNT] = {0x0002, 0x8000, 0x0001, 0x4000, 0x2000, 0x0800, 0x1000, 0x0400};

}  // namespace

struct ItemAttributeTally {
    u8 attribute_counts[ATTRIBUTE_COUNT];
    u8 items_added;
    u8 seen[SEEN_BYTES];  // one bit per item, counted from the first item

    void add(const Item &item);
};
GUEST_OFFSET(ItemAttributeTally, items_added, 8);
GUEST_OFFSET(ItemAttributeTally, seen, 9);

// Counts the item (nothing happens for numbers without data).
void ItemAttributeTally::add(const Item &item) {
    if (!item.is_item()) {
        return;
    }
    gptr<ItemData> data = item.data();
    if (data == nullptr) {
        return;
    }
    u32 index = item.number() - Item::FIRST_ITEM;
    seen[index >> BITS_PER_BYTE_SHIFT] |= u8(1u << (index & BIT_IN_BYTE_MASK));
    items_added++;
    u16 flags = u16(data->flags_1c | (data->flags_1d << FLAGS_1D_SHIFT));
    for (u32 attribute = 0; attribute < ATTRIBUTE_COUNT; attribute++) {
        if ((flags & ATTRIBUTE_MASKS[attribute]) != 0) {
            attribute_counts[attribute]++;
        }
    }
}
GUEST_EXPORT(0x0022d518, ItemAttributeTally::add);
