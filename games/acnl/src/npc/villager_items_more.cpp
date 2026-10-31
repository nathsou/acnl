// More methods of the villager record in the save data (see npc_item_slots.cpp): the second item list, the extra
// item, the per-player records and the state byte.
#include "save/villager.hpp"

namespace {

constexpr u32 NEW_STATE_RESETS = 5;  // setting this state resets the state at 0x0094d938

inline constexpr guest::Function<0x003119d9, void(SaveVillager &villager)> compact_items_8d6;
inline constexpr guest::Function<0x0030a01c, void()> reset_state_94d938;

}  // namespace

u32 SaveVillager::count_items_8d6() const {
    u32 count = 0;
    for (const Item &item : items_8d6) {
        if (!item.is_empty()) {
            count++;
        }
    }
    return count;
}
GUEST_EXPORT(0x0011a1a1, SaveVillager::count_items_8d6);

void SaveVillager::add_item_8d6(const Item &item) {
    if (item.is_empty()) {
        return;
    }
    compact_items_8d6(*this);
    for (Item &slot : items_8d6) {
        if (slot.has_number(Item::EMPTY)) {
            slot = item;
            return;
        }
    }
    items_8d6[0] = empty_item;
    compact_items_8d6(*this);
    items_8d6[SLOTS - 1] = item;
}
GUEST_EXPORT(0x00112619, SaveVillager::add_item_8d6);

bool SaveVillager::remove_item_8d6(const Item &item) {
    if (item.is_empty()) {
        return false;
    }
    u16 number = item.number();
    for (Item &slot : items_8d6) {
        if (slot.has_number(number)) {
            slot = empty_item;
            compact_items_8d6(*this);
            return true;
        }
    }
    return false;
}
GUEST_EXPORT(0x0011271d, SaveVillager::remove_item_8d6);

bool SaveVillager::set_item_8e6(const Item &item) {
    if (item.is_empty() || item.is_wear_class_7()) {
        item_8e6 = item;
        return true;
    }
    return false;
}
GUEST_EXPORT(0x00112e09, SaveVillager::set_item_8e6);

void SaveVillager::clear_flag_bc_bit5_of_used_records() {
    for (VillagerPlayerRecord &record : player_records) {
        if (record.identity.is_set()) {
            record.flags_bc = record.flags_bc & ~VillagerPlayerRecord::FLAGS_BC_BIT5;
        }
    }
}
GUEST_EXPORT(0x00113469, SaveVillager::clear_flag_bc_bit5_of_used_records);

void SaveVillager::set_state_250f(u32 state) {
    state_250f = u8(state);
    if (state == NEW_STATE_RESETS) {
        reset_state_94d938();
    }
}
GUEST_EXPORT(0x001139fd, SaveVillager::set_state_250f);

// A copy of the villager's item at the index of the long list (the empty item past its ten slots).
void copy_item_24ae(Item &out, const SaveVillager &villager, u32 index) {
    constexpr u32 LONG_LIST_SIZE = 10;
    copy_item(out, index < LONG_LIST_SIZE ? villager.items_24ae[index] : *empty_item);
}
GUEST_EXPORT(0x0030b5a5, copy_item_24ae);
