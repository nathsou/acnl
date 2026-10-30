// Questions and sweeps over the ten villagers of the town.
#include "save/save_data.hpp"

namespace {

inline constexpr guest::Function<0x00301e20, bool(gptr<SaveVillager> villager)> is_villager_record;
inline constexpr guest::Function<0x003009a9, gptr<SaveVillager>(gptr<SaveVillager> records, u32 index)> villager_record_at;
inline constexpr guest::Function<0x0011b22d, bool(gptr<SaveVillager> villager)> has_flag_1_only;
inline constexpr guest::Function<0x002fb328, gptr<SaveData>()> get_save_data;

constexpr u32 ACTOR_IDS_ADDRESS = 0x0088e4ec;  // five pairs of actor ids
constexpr u32 ACTOR_ID_PAIRS = 5;
constexpr u32 FIRST_VILLAGER_ACTOR_ID = 8;     // villager number plus this

gptr<SaveVillager> some_villagers(guest::Fuzz &f) {
    return f.allocate(SaveData::VILLAGER_COUNT * sizeof(SaveVillager)).cast<SaveVillager>();
}

}  // namespace

// How many valid villagers are in state 0 or 1.
u32 count_villagers_in_state_0_or_1(gptr<SaveVillager> villagers) {
    u32 count = 0;
    for (u32 index = 0; index < SaveData::VILLAGER_COUNT; index++) {
        gptr<SaveVillager> villager = villagers + index;
        if (is_villager_record(villager) && villager->state_250f <= 1) {
            count++;
        }
    }
    return count;
}
GUEST_EXPORT(0x00118e5d, count_villagers_in_state_0_or_1);
GUEST_FUZZ(0x00118e5d, 100, [](guest::Fuzz &f) { f.arguments(some_villagers(f)); });

// The index of the first valid villager with the id among the ten, -1 if none.
s32 index_of_villager_with_id(gptr<SaveVillager> villagers, u32 id) {
    for (u32 index = 0; index < SaveData::VILLAGER_COUNT; index++) {
        gptr<SaveVillager> villager = villagers + index;
        if (is_villager_record(villager) && villager->id == id) {
            return s32(index);
        }
    }
    return -1;
}
GUEST_EXPORT(0x001193d1, index_of_villager_with_id);
GUEST_FUZZ(0x001193d1, 100, [](guest::Fuzz &f) { f.arguments(some_villagers(f), f.pick<u32>({0, 1, 100, 0x18e, f.number()})); });

// The same in a list of `count` villager records, with the id first.
s32 index_of_villager_with_id_in(u32 id, gptr<SaveVillager> villagers, u32 count) {
    for (u32 index = 0; index < count; index++) {
        gptr<SaveVillager> villager = villagers + index;
        if (is_villager_record(villager) && villager->id == id) {
            return s32(index);
        }
    }
    return -1;
}
GUEST_EXPORT(0x001121f1, index_of_villager_with_id_in);
GUEST_FUZZ(0x001121f1, 100, [](guest::Fuzz &f) {
    f.arguments(f.pick<u32>({0, 1, 100, 0x18e, f.number()}), some_villagers(f), f.below(SaveData::VILLAGER_COUNT + 1));
});

// Clears flag bit 6 in the byte at 0xbd of every used player record of every valid villager (meaning not known yet).
void clear_flag_bd_bit6_of_all_player_records(gptr<SaveVillager> villagers) {
    for (u32 index = 0; index < SaveData::VILLAGER_COUNT; index++) {
        gptr<SaveVillager> villager = villagers + index;
        if (!is_villager_record(villager)) {
            continue;
        }
        for (VillagerPlayerRecord &record : villager->player_records) {
            if (record.identity.is_set()) {
                record.flags_bd &= u8(~VillagerPlayerRecord::FLAGS_BD_BIT6);
            }
        }
    }
}
GUEST_EXPORT(0x0010f48d, clear_flag_bd_bit6_of_all_player_records);
GUEST_FUZZ(0x0010f48d, 100, [](guest::Fuzz &f) { f.arguments(some_villagers(f)); });

// Sets the flag of a player slot (0 to 3) on every valid villager, except those that have only FLAG_1.
void set_slot_flag_on_villagers(gptr<SaveVillager> villagers, u32 slot) {
    for (u32 index = 0; index < SaveData::VILLAGER_COUNT; index++) {
        gptr<SaveVillager> villager = villagers + index;
        if (!is_villager_record(villager)) {
            continue;
        }
        bool flag_1_only = (villager->flags_2510 & SaveVillager::FLAG_1) != 0 && (villager->flags_2510 & SaveVillager::FLAG_0) == 0;
        if (flag_1_only || slot >= SaveVillager::SLOTS) {
            continue;
        }
        villager->flags_2510 |= (1u << slot) << SaveVillager::SLOT_FLAGS_SHIFT;
    }
}
GUEST_EXPORT(0x0010d645, set_slot_flag_on_villagers);
GUEST_FUZZ(0x0010d645, 100, [](guest::Fuzz &f) { f.arguments(some_villagers(f), f.pick<u32>({0, 1, 2, 3, 4, 31, 32, f.number()})); });

// For an actor id of the game's table (five pairs of ids): whether the villager that has the id minus 8 as its number
// is a valid one with only FLAG_1.
bool is_flag_1_only_villager_actor(u32 actor_id) {
    gptr<const u8> ids(ACTOR_IDS_ADDRESS);
    for (u32 pair = 0; pair < ACTOR_ID_PAIRS; pair++) {
        if (ids[pair * 2] != actor_id && ids[pair * 2 + 1] != actor_id) {
            continue;
        }
        gptr<SaveVillager> villager = villager_record_at(guest::addr_of(get_save_data()->villagers[0]), actor_id - FIRST_VILLAGER_ACTOR_ID);
        return villager && has_flag_1_only(villager);
    }
    return false;
}
GUEST_EXPORT(0x006cbf6c, is_flag_1_only_villager_actor);
GUEST_FUZZ(0x006cbf6c, 100, [](guest::Fuzz &f) {
    gptr<const u8> ids(ACTOR_IDS_ADDRESS);
    f.arguments(f.pick<u32>({0, 8, ids[f.below(ACTOR_ID_PAIRS * 2)], ids[f.below(ACTOR_ID_PAIRS * 2)], f.number()}));
});
