// More methods of the villager record in the save data (see npc_item_slots.cpp): the second item list, the extra
// item, the per-player records and the state byte.
#include "save/villager.hpp"

namespace {

constexpr u32 NEW_STATE_RESETS = 5;  // setting this state resets the state at 0x0094d938

inline constexpr guest::Function<0x003119d9, void(SaveVillager &villager)> compact_items_8d6;
inline constexpr guest::Function<0x0030a01c, void()> reset_state_94d938;

gptr<SaveVillager> fuzz_villager(guest::Fuzz &f) {
    auto villager = f.object<SaveVillager>();
    for (Item &item : villager->items_8d6) {
        item.id = f.pick<u16>({Item::EMPTY, 0x2000, 0x2001, 0x2002, u16(f.number())});
    }
    villager->item_8e6.id = f.pick<u16>({Item::EMPTY, 0x2000, 0x2002, u16(f.number())});
    return villager;
}

gptr<Item> fuzz_item(guest::Fuzz &f, gptr<SaveVillager> villager) {
    auto item = f.object<Item>();
    if (f.below(2) != 0) {
        *item = villager->items_8d6[f.below(SaveVillager::SLOTS)];
    } else {
        item->id = f.pick<u16>({Item::EMPTY, 0x2000, 0x2001, 0x2003, u16(f.number())});
    }
    return item;
}

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
GUEST_FUZZ(0x0011a1a1, 100, [](guest::Fuzz &f) { f.arguments(fuzz_villager(f)); });

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
GUEST_FUZZ(0x0011271d, 200, [](guest::Fuzz &f) {
    auto villager = fuzz_villager(f);
    f.arguments(villager, fuzz_item(f, villager));
});

bool SaveVillager::set_item_8e6(const Item &item) {
    if (item.is_empty() || item.is_wear_class_7()) {
        item_8e6 = item;
        return true;
    }
    return false;
}
GUEST_EXPORT(0x00112e09, SaveVillager::set_item_8e6);
GUEST_FUZZ(0x00112e09, 200, [](guest::Fuzz &f) {
    auto villager = fuzz_villager(f);
    f.arguments(villager, fuzz_item(f, villager));
});

void SaveVillager::clear_flag_bc_bit5_of_used_records() {
    for (VillagerPlayerRecord &record : player_records) {
        if (record.identity.is_set()) {
            record.flags_bc = record.flags_bc & ~VillagerPlayerRecord::FLAGS_BC_BIT5;
        }
    }
}
GUEST_EXPORT(0x00113469, SaveVillager::clear_flag_bc_bit5_of_used_records);
GUEST_FUZZ(0x00113469, 100, [](guest::Fuzz &f) { f.arguments(f.object<SaveVillager>()); });

void SaveVillager::set_state_250f(u32 state) {
    state_250f = u8(state);
    if (state == NEW_STATE_RESETS) {
        reset_state_94d938();
    }
}
GUEST_EXPORT(0x001139fd, SaveVillager::set_state_250f);
GUEST_FUZZ(0x001139fd, 100, [](guest::Fuzz &f) {
    f.arguments(f.object<SaveVillager>(), f.pick<u32>({0, 1, 4, 5, 6, 0x105, 0xffffffffu}));
});
