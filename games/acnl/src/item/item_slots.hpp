// A row of eight item slots (the pockets of something; slot i is meant for items of one wear class) with accessors
// that return the slot's item only if it has the expected class.
#pragma once

#include "item/item.hpp"

struct ItemSlots {
    static constexpr u32 SLOT_COUNT = 8;

    Item slots[SLOT_COUNT];

    // The slot's item when it has the wear class, else the empty item.
    gptr<Item> slot_if_class(u32 slot, WearClass wear_class);
};
GUEST_OFFSET(ItemSlots, slots, 0);
GUEST_SIZE(ItemSlots, 32);

// The item if it has the wear class, else the empty item.
gptr<Item> item_if_class(gptr<Item> item, WearClass wear_class);
