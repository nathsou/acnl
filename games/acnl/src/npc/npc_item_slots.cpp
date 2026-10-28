#include "npc/npc_item_slots.hpp"

bool NpcItemSlots::has_flag_1() const {
    return (flags_2510 & FLAG_1) != 0;
}
GUEST_EXPORT(0x001198e9, NpcItemSlots::has_flag_1);

gptr<Item> NpcItemSlots::item_8d6_at(u32 slot) {
    if (slot >= SLOTS) {
        return nullptr;
    }
    return guest::addr_of(items_8d6[slot]);
}
GUEST_EXPORT(0x001198f9, NpcItemSlots::item_8d6_at);

u32 NpcItemSlots::count_items_8c6() const {
    u32 count = 0;
    for (u32 slot = 0; slot < SLOTS; slot++) {
        if (!items_8c6[slot].is_empty()) {
            count++;
        }
    }
    return count;
}
GUEST_EXPORT(0x00119911, NpcItemSlots::count_items_8c6);

bool NpcItemSlots::has_flag_0_only() const {
    return (flags_2510 & FLAG_0) != 0 && (flags_2510 & FLAG_1) == 0;
}
GUEST_EXPORT(0x00119fcd, NpcItemSlots::has_flag_0_only);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

static gptr<NpcItemSlots> some_slots(guest::Fuzz &f) {
    auto slots = f.allocate(sizeof(NpcItemSlots)).cast<NpcItemSlots>();
    slots->flags_2510 = f.pick<u32>({0, 1, 2, 3, 0xffffffff, f.number()});
    for (u32 slot = 0; slot < NpcItemSlots::SLOTS; slot++) {
        Item &item = slots->items_8c6[slot];
        switch (f.below(4)) {
        case 0: item.id = Item::EMPTY; break;
        case 1: item.id = Item::FIRST_ITEM + f.below(Item::ITEM_COUNT); break;
        case 2: item.id = u16(f.number()); break;
        default: item.id = Item::EMPTY | Item::ID_FLAG; break;
        }
        item.flags = u16(f.number());
        slots->items_8d6[slot].id = u16(f.number());
        slots->items_8d6[slot].flags = u16(f.number());
    }
    return slots;
}

GUEST_FUZZ(0x001198e9, 200, [](guest::Fuzz &f) { f.arguments(some_slots(f)); });
GUEST_FUZZ(0x001198f9, 200, [](guest::Fuzz &f) {
    f.arguments(some_slots(f), f.pick<u32>({0, 1, 2, 3, 4, 5, 0xffffffff, 0x80000000, f.number()}));
});
GUEST_FUZZ(0x00119911, 300, [](guest::Fuzz &f) { f.arguments(some_slots(f)); });
GUEST_FUZZ(0x00119fcd, 200, [](guest::Fuzz &f) { f.arguments(some_slots(f)); });
