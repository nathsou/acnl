// Villager state that is reset or handed over in bulk: who is the designated villager, the memories of the players,
// and the flag of the current player's record.
#include "core/time_stamp.hpp"
#include "save/personal_id.hpp"
#include "save/player.hpp"
#include "save/save_data.hpp"

using guest::gptr;

namespace {

constexpr u32 DESIGNATED_INFO_OFFSET = SaveData::VILLAGER_COUNT * sizeof(SaveVillager) + 0x104;  // after the villagers
constexpr u8 DESIGNATED_STATE_MASK = 0x0f;
constexpr u8 DESIGNATED_STATE_NONE = 2;  // nobody is designated
constexpr u16 RESET_YEAR = 2011;         // the year the per-slot years go back to

// Who the game has picked among the villagers, kept in the save data right after them.
struct DesignatedInfo {
    u8 unknown_00[6];
    s8 villager_index;
    u8 unknown_07[3];
    u8 state_0a;  // the low nibble is the state
};
GUEST_OFFSET(DesignatedInfo, villager_index, 6);
GUEST_OFFSET(DesignatedInfo, state_0a, 0xa);

inline constexpr guest::Function<0x00308971, s32(gptr<SaveVillager> villager, gptr<SaveVillager> villagers, u32 count)>
    index_of_same_villager;
inline constexpr guest::Function<0x003091e0, gptr<void>(gptr<void> argument)> get_manager;
inline constexpr guest::Function<0x003091ec, gptr<SavePlayer>(gptr<void> manager)> get_player;
inline constexpr guest::Function<0x00301e20, bool(gptr<SaveVillager> villager)> is_villager_record;
inline constexpr guest::Function<0x0030f56c, void(gptr<Date> out, gptr<const TimeStamp> date)> narrow_reference_date;

gptr<SaveVillager> some_villagers(guest::Fuzz &f) {
    return f.allocate(DESIGNATED_INFO_OFFSET + sizeof(DesignatedInfo)).cast<SaveVillager>();
}

}  // namespace

// Whether the villager (one of the town's ten) is the one the save data designates (probably the villager who is
// moving out): its index is the designated one and the designation is in a state other than DESIGNATED_STATE_NONE.
bool is_designated_villager(gptr<SaveVillager> villagers, gptr<SaveVillager> villager) {
    s32 index = index_of_same_villager(villager, villagers, SaveData::VILLAGER_COUNT);
    if (u32(index) >= SaveData::VILLAGER_COUNT) {
        return false;
    }
    gptr<DesignatedInfo> info = (villagers.cast<u8>() + DESIGNATED_INFO_OFFSET).cast<DesignatedInfo>();
    if ((info->state_0a & DESIGNATED_STATE_MASK) == DESIGNATED_STATE_NONE) {
        return false;
    }
    return info->villager_index == index;
}
GUEST_EXPORT(0x00118e25, is_designated_villager);
GUEST_FUZZ(0x00118e25, 200, [](guest::Fuzz &f) {
    gptr<SaveVillager> villagers = some_villagers(f);
    gptr<DesignatedInfo> info = (villagers.cast<u8>() + DESIGNATED_INFO_OFFSET).cast<DesignatedInfo>();
    info->villager_index = s8(f.below(SaveData::VILLAGER_COUNT + 1));
    info->state_0a = u8(f.pick<u32>({0, 1, DESIGNATED_STATE_NONE, 0x12, f.number()}));
    f.arguments(villagers, f.below(4) ? villagers + f.below(SaveData::VILLAGER_COUNT) : villagers + SaveData::VILLAGER_COUNT);
});

// Forgets what the villager remembers of the players' visits: the four per-slot years go back to RESET_YEAR, the flag
// in bit 5 of byte 0xbd is cleared in every used player record, and the date is set to the current one.
void reset_player_memories(gptr<SaveVillager> villager) {
    for (u16 &year : villager->years_2492) {
        year = RESET_YEAR;
    }
    for (VillagerPlayerRecord &record : villager->player_records) {
        if (record.identity.is_set()) {
            record.flags_bd &= u8(~VillagerPlayerRecord::FLAGS_BD_BIT5);
        }
    }
    narrow_reference_date(guest::addr_of(villager->date_250a), guest::addr_of(*reference_time));
}
GUEST_EXPORT(0x00113275, reset_player_memories);
GUEST_FUZZ(0x00113275, 100, [](guest::Fuzz &f) { f.arguments(f.object<SaveVillager>()); });

// For the current player: takes the BYTE_BA_BIT7 flag over to FLAGS_B6_BIT7 in the record each valid villager keeps of
// that player (clearing it in byte_ba), when the record is used.
void take_over_flag_ba_bit7(gptr<SaveVillager> villagers) {
    gptr<SavePlayer> player = get_player(get_manager(villagers.cast<void>()));
    if (!player) {
        return;
    }
    for (u32 index = 0; index < SaveData::VILLAGER_COUNT; index++) {
        gptr<SaveVillager> villager = villagers + index;
        if (!is_villager_record(villager)) {
            continue;
        }
        gptr<VillagerPlayerRecord> record = villager->find_player_record(player->identity);
        if (!record || !record->identity.is_set()) {
            continue;
        }
        if ((record->byte_ba & VillagerPlayerRecord::BYTE_BA_BIT7) == 0) {
            continue;
        }
        record->byte_ba &= u8(~VillagerPlayerRecord::BYTE_BA_BIT7);
        record->flags_b6 |= VillagerPlayerRecord::FLAGS_B6_BIT7;
    }
}
GUEST_EXPORT(0x00110dc1, take_over_flag_ba_bit7);
GUEST_FUZZ(0x00110dc1, 100, [](guest::Fuzz &f) {
    gptr<SaveVillager> villagers = f.allocate(SaveData::VILLAGER_COUNT * sizeof(SaveVillager)).cast<SaveVillager>();
    gptr<SavePlayer> player = get_player(get_manager(villagers.cast<void>()));
    for (u32 index = 0; index < SaveData::VILLAGER_COUNT && player; index++) {
        gptr<VillagerPlayerRecord> record = guest::addr_of(villagers[index].player_records[f.below(SaveVillager::PLAYER_RECORDS)]);
        if (f.below(4) != 0) {
            record->identity = player->identity;
        }
    }
    f.arguments(villagers);
});
