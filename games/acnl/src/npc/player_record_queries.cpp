// Checks on the player records (16 of 0xf2 bytes from 0x8ee in an object), on villager records and a small
// classification by index.
#include <cstring>

#include "save/villager.hpp"
#include "save/player.hpp"
#include "save/save_data.hpp"

using guest::gptr;

namespace {

struct QueryReferenceValue {
    u8 unknown_00[7];
    s8 unknown_07;
    u8 unknown_08[4];
};
GUEST_SIZE(QueryReferenceValue, 12);

// Still recompiled code (or rewritten elsewhere, called through the game's ABI):
inline constexpr guest::Function<0x002fbd54, bool(gptr<void> identity)> identity_is_set;
inline constexpr guest::Function<0x00309eb9, gptr<VillagerPlayerRecord>(gptr<void> table, gptr<const PersonalId> identity)>
    find_player_record;
inline constexpr guest::Function<0x002fb378, gptr<QueryReferenceValue>()> get_reference_value;
inline constexpr guest::Function<0x0030fc18, u32(gptr<SavePlayer> player, gptr<QueryReferenceValue> reference)>
    player_check_30fc18;
inline constexpr guest::Function<0x003091e0, gptr<void>(gptr<void> argument)> get_manager_3091e0;
inline constexpr guest::Function<0x003091ec, gptr<SavePlayer>(gptr<void> manager)> get_player_3091ec;
inline constexpr guest::Function<0x00308971, s32(gptr<void> villager, gptr<void> villagers, u32 count)>
    expected_index_for;
inline constexpr guest::Function<0x002fe450, gptr<void>(u32 index)> table_entry;
inline constexpr guest::Function<0x00309ccc, s32(s32 index)> index_check_309ccc;
inline constexpr guest::Function<0x00309865, s32(gptr<void> villagers, u32 value)> villagers_index_309864;

constexpr s32 REFERENCE_MIN = 6;

// The first record whose identity is set and that has flag bit 5 in flags_bc; null if none.
gptr<VillagerPlayerRecord> find_first_flagged_record(gptr<SaveVillager> table) {
    for (u32 i = 0; i < SaveVillager::PLAYER_RECORDS; i++) {
        gptr<VillagerPlayerRecord> record = guest::addr_of(table->player_records[i]);
        if (identity_is_set(record) && (record->flags_bc & VillagerPlayerRecord::FLAGS_BC_BIT5) != 0) {
            return record;
        }
    }
    return nullptr;
}

// Whether the entry matching the identity has bit 7 of flags_bc set.
bool entry_has_flag_bc_bit7(gptr<void> table, gptr<const PersonalId> identity) {
    gptr<VillagerPlayerRecord> record = find_player_record(table, identity);
    if (!record) {
        return false;
    }
    return (record->flags_bc & VillagerPlayerRecord::FLAGS_BC_BIT7) != 0;
}

// FLAG_1 set and FLAG_0 clear in the flag word of an SaveVillager.
bool has_flag_1_only(const SaveVillager &slots) {
    return (slots.flags_2510 & SaveVillager::FLAG_1) != 0 && (slots.flags_2510 & SaveVillager::FLAG_0) == 0;
}

// A long list of conditions on a villager and a player (the player is looked up when not given; meaning not
// known yet).
bool villager_passes_player_checks(gptr<SaveVillager> self, gptr<SavePlayer> player) {
    if (!player) {
        gptr<void> manager = get_manager_3091e0(self);
        player = get_player_3091ec(manager);
        if (!player) {
            return false;
        }
    }
    gptr<QueryReferenceValue> reference = get_reference_value();
    if (player_check_30fc18(player, reference) == 0) {
        return false;
    }
    if (reference->unknown_07 < REFERENCE_MIN) {
        return false;
    }
    gptr<VillagerPlayerRecord> record = find_player_record(self, guest::addr_of(player->identity));
    if (!record) {
        return false;
    }
    if ((record->flags_bc & VillagerPlayerRecord::FLAGS_BC_BIT7) == 0) {
        return false;
    }
    if ((record->flags_bb & VillagerPlayerRecord::FLAGS_BB_BIT2) != 0) {
        return false;
    }
    if (!record->is_close()) {
        return false;
    }
    gptr<void> villagers = guest::addr_of((*save_data)->villagers[0]);
    s32 index = expected_index_for(self, villagers, SaveData::VILLAGER_COUNT);
    if (index < 0) {
        return false;
    }
    if (!table_entry(u32(index))) {
        return false;
    }
    if ((record->flags_be & VillagerPlayerRecord::FLAGS_BE_MASK) != 0) {
        return false;
    }
    if (index_check_309ccc(index) >= 0) {
        return false;
    }
    if ((self->flags_2510 & SaveVillager::FLAG_0) != 0) {
        return false;
    }
    return villagers_index_309864(villagers, 0) != index;
}

// Classifies an index below 16 (3 for larger ones) depending on the signed byte at 0x24f0.
u32 classify_index(gptr<SaveVillager> villager, u32 index) {
    constexpr u32 INDEX_LIMIT = 16;
    constexpr u32 SPECIAL_LIMIT = 10;
    constexpr s32 VALUE_LIMIT = 0x31;
    constexpr u32 SPECIAL_INDEX = 11;
    if (index >= INDEX_LIMIT) {
        return 3;
    }
    if (index >= SPECIAL_LIMIT) {
        return index == SPECIAL_INDEX ? 1 : 0;
    }
    u32 first_class_limit = villager->value_24f0 >= VALUE_LIMIT ? 2 : 1;
    if (index < first_class_limit) {
        return 2;
    }
    return index < 5 ? 1 : 0;
}

}  // namespace

GUEST_EXPORT(0x0011a795, find_first_flagged_record);
GUEST_EXPORT(0x0011a7c5, entry_has_flag_bc_bit7);
GUEST_EXPORT(0x0011b22d, has_flag_1_only);
GUEST_EXPORT(0x0011b249, villager_passes_player_checks);
GUEST_EXPORT(0x0011b339, classify_index);

