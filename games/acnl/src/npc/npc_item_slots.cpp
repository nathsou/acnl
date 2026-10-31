#include "save/villager.hpp"

bool SaveVillager::has_flag_1() const {
    return (flags_2510 & FLAG_1) != 0;
}
GUEST_EXPORT(0x001198e9, SaveVillager::has_flag_1);

gptr<Item> SaveVillager::item_8d6_at(u32 slot) {
    if (slot >= SLOTS) {
        return nullptr;
    }
    return guest::addr_of(items_8d6[slot]);
}
GUEST_EXPORT(0x001198f9, SaveVillager::item_8d6_at);

u32 SaveVillager::count_items_8c6() const {
    u32 count = 0;
    for (u32 slot = 0; slot < SLOTS; slot++) {
        if (!items_8c6[slot].is_empty()) {
            count++;
        }
    }
    return count;
}
GUEST_EXPORT(0x00119911, SaveVillager::count_items_8c6);

bool SaveVillager::has_flag_0_only() const {
    return (flags_2510 & FLAG_0) != 0 && (flags_2510 & FLAG_1) == 0;
}
GUEST_EXPORT(0x00119fcd, SaveVillager::has_flag_0_only);
