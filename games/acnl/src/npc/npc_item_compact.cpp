#include "save/villager.hpp"

// Moves the items of the second group (items_8d6) towards the front: each empty slot takes the next
// non-empty one, which is emptied. Stops as soon as only empty slots remain.
void compact_items_8d6(SaveVillager &slots) {
    for (u32 slot = 0; slot < SaveVillager::SLOTS - 1; slot++) {
        if (!slots.items_8d6[slot].is_empty()) {
            continue;
        }
        u32 next = slot + 1;
        while (next < SaveVillager::SLOTS && slots.items_8d6[next].is_empty()) {
            next++;
        }
        if (next >= SaveVillager::SLOTS) {
            return;
        }
        copy_item(slots.items_8d6[slot], slots.items_8d6[next]);
        copy_item(slots.items_8d6[next], *empty_item);
    }
}
GUEST_EXPORT(0x003119d9, compact_items_8d6);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

GUEST_FUZZ(0x003119d9, 300, [](guest::Fuzz &f) {
    constexpr u32 SIZE = 0x8e8;  // up to the end of items_8d6
    auto slots = f.allocate(SIZE).cast<SaveVillager>();
    for (u32 i = 0; i < SaveVillager::SLOTS; i++) {
        Item &item = slots->items_8d6[i];
        item.id = f.below(2) != 0 ? Item::EMPTY : u16(Item::FIRST_ITEM + f.below(Item::ITEM_COUNT));
        item.flags = u16(f.number());
    }
    f.arguments(slots);
});
