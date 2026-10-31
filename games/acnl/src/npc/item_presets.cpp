// Presets of the item slots of NPC actions in the 0x002a0000 area: one or two items stored, some chosen by a coin
// toss.
#include "item/item.hpp"

Item &construct_item(Item &self, u16 id);
Item &copy_item(Item &self, const Item &other);
s32 random_below(s32 max);

namespace {

constexpr s32 COIN_TOSS = 2;

struct PresetSlots {
    Item items[4];  // (the presets use the first and the last)
};

void set_preset(PresetSlots &slots, u32 index, u16 id) {
    Item item;
    construct_item(item, id);
    copy_item(slots.items[index], item);
}

}  // namespace

void store_item_2873_a(PresetSlots &slots) { set_preset(slots, 0, 0x2873); }
GUEST_EXPORT(0x002a7900, store_item_2873_a);

void store_item_2873_b(PresetSlots &slots) { set_preset(slots, 0, 0x2873); }
GUEST_EXPORT(0x002a79e4, store_item_2873_b);

// By coin toss: item 0x2925 in the last slot or item 0x282b in the first.
void store_random_item_2925_or_282b(PresetSlots &slots) {
    if (random_below(COIN_TOSS) != 0) {
        set_preset(slots, 3, 0x2925);
    } else {
        set_preset(slots, 0, 0x282b);
    }
}
GUEST_EXPORT(0x002a7930, store_random_item_2925_or_282b);

// By coin toss: item 0x28c0 or 0x2856 in the first slot.
void store_random_item_28c0_or_2856(PresetSlots &slots) {
    set_preset(slots, 0, random_below(COIN_TOSS) != 0 ? 0x28c0 : 0x2856);
}
GUEST_EXPORT(0x002a7a14, store_random_item_28c0_or_2856);

void store_items_282b_and_2925(PresetSlots &slots) {
    set_preset(slots, 0, 0x282b);
    set_preset(slots, 3, 0x2925);
}
GUEST_EXPORT(0x002a7a7c, store_items_282b_and_2925);
