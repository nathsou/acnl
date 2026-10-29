// Edits of an item's two halfwords: building it from a packed value, and changing single bits of its flags.
#include "item/item.hpp"

namespace {

constexpr u16 FLAGS_BIT_14 = 0x4000;  // the lower of the two top flag bits
constexpr u16 FLAGS_BIT_0 = 0x0001;
constexpr u32 PACKED_FLAGS_SHIFT = 16;

}  // namespace

// Sets the id from the low half of the packed value and the flags from its high half (an Item passed by value in r1).
Item &construct_item_from_packed(Item &item, u32 packed) {
    item.id = u16(packed);
    item.flags = u16(packed >> PACKED_FLAGS_SHIFT);
    return item;
}
GUEST_EXPORT(0x006bba14, construct_item_from_packed);
GUEST_FUZZ(0x006bba14, 100, [](guest::Fuzz &f) { f.arguments(f.object<Item>(), f.number()); });

void clear_item_flags_bit_14(Item &item) {
    item.flags = u16(item.flags & ~FLAGS_BIT_14);
}
GUEST_EXPORT(0x006bbbbc, clear_item_flags_bit_14);
GUEST_FUZZ(0x006bbbbc, 100, [](guest::Fuzz &f) { f.arguments(f.object<Item>()); });

void set_item_flags_bit_0(Item &item) {
    item.flags = u16(item.flags | FLAGS_BIT_0);
}
GUEST_EXPORT(0x006bbc14, set_item_flags_bit_0);
GUEST_FUZZ(0x006bbc14, 100, [](guest::Fuzz &f) { f.arguments(f.object<Item>()); });
