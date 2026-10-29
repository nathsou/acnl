// Checks on the player records kept in an object (16 records of 0xf2 bytes starting at 0x8ee, each beginning with
// a player identity) and on villagers (records of the save data), plus one flag lookup of SaveVillager.
#include "save/save_data.hpp"
#include "save/villager.hpp"
#include "save/player.hpp"

using guest::gptr;

namespace {

// A record of the player table. Only the fields the rewritten code uses are named.
struct PlayerRecord {
    static constexpr u8 FLAGS_B8_BIT1 = 0x02;  // unknown flag
    static constexpr u8 FLAGS_BC_BIT1 = 0x02;  // unknown flag: the record is in use
    static constexpr u8 FLAGS_BC_BIT3 = 0x08;  // unknown flag
    static constexpr u8 FLAGS_BC_BIT7 = 0x80;  // unknown flag

    u8 unknown_00[0xb8];
    u8 flags_b8;
    u8 unknown_b9[3];
    u8 flags_bc;
    u8 unknown_bd[0xf2 - 0xbd];
};
GUEST_OFFSET(PlayerRecord, flags_b8, 0xb8);
GUEST_OFFSET(PlayerRecord, flags_bc, 0xbc);
GUEST_SIZE(PlayerRecord, 0xf2);

struct PlayerTable {
    static constexpr u32 RECORDS = 16;

    u8 unknown_0000[0x8ee];
    PlayerRecord records[RECORDS];
};
GUEST_OFFSET(PlayerTable, records, 0x8ee);

// A bit more than a villager record (flags_2510 is its last word), for the fuzzing of functions that read past it.
constexpr u32 FUZZ_VILLAGER_SIZE = 0x2600;

// A table entry (of the table behind 0x002fe450); only one word is used.
struct TableEntry {
    u8 unknown_00[0x44];
    u32 word_44;
};
GUEST_OFFSET(TableEntry, word_44, 0x44);

// Still recompiled code (or rewritten elsewhere, called through the game's ABI):
inline constexpr guest::Function<0x003091e0, gptr<void>(gptr<void> argument)> get_manager_3091e0;
inline constexpr guest::Function<0x003091ec, gptr<SavePlayer>(gptr<void> manager)> get_player_3091ec;
inline constexpr guest::Function<0x00309eb9, gptr<PlayerRecord>(gptr<void> villager, gptr<const PersonalId> identity)>
    find_player_record;
inline constexpr guest::Function<0x00308971, s32(gptr<void> villager, gptr<void> villagers, u32 count)>
    expected_index_for;
inline constexpr guest::Function<0x0011a651, u32(gptr<void> villager)> villager_check_11a650;
inline constexpr guest::Function<0x00309ccc, s32(s32 index)> index_check_309ccc;
inline constexpr guest::Function<0x0030ddb0, u32(gptr<SavePlayer> player, gptr<void> villager, u32 value)>
    player_villager_check_30ddb0;
inline constexpr guest::Function<0x0030b9d5, u32(gptr<void> villagers, gptr<void> villager)> villagers_check_30b9d4;
inline constexpr guest::Function<0x00309ac9, u32(gptr<void> villager, u32 value)> villager_check_309ac8;
inline constexpr guest::Function<0x002fe450, gptr<TableEntry>(u32 index)> table_entry;
inline constexpr guest::Function<0x0030e5cc, u32(gptr<TableEntry> entry, u32 value)> table_entry_check_30e5cc;
inline constexpr guest::Function<0x002fbd54, bool(gptr<PlayerRecord> record)> record_identity_is_set;
inline constexpr guest::Function<0x002fe940, u32(gptr<PlayerRecord> record, gptr<const PersonalId> identity)>
    compare_identity;
inline constexpr guest::Function<0x00301e20, u32(gptr<void> villager)> is_valid_id;

constexpr u32 VILLAGER_CHECK_VALUE = 2;      // third argument of f_0030ddb0
constexpr u32 VILLAGERS_CHECK_EXPECTED = 3;  // what f_0030b9d4 must return
constexpr u32 TABLE_ENTRY_CHECK_VALUE = 14;  // second argument of f_0030e5cc

// A record that is in use: its identity is set and its bit 1 of flags_bc is set.
bool record_in_use(gptr<PlayerRecord> record) {
    return record_identity_is_set(record) && (record->flags_bc & PlayerRecord::FLAGS_BC_BIT1) != 0;
}

// Whether a villager passes a long list of conditions (meaning not known yet); `table_id` selects a table entry
// whose word at 0x44 must be zero.
bool villager_passes_checks(gptr<SaveVillager> villager, u32 table_id) {
    get_manager_3091e0(villager);
    // (the result of the first call is what the second one is given)
    gptr<SavePlayer> player = get_player_3091ec(gptr<void>(guest::cpu()->r[0]));
    if (!player) {
        return false;
    }
    gptr<PlayerRecord> record = find_player_record(villager, guest::addr_of(player->identity));
    gptr<SaveData> block = *save_data;
    gptr<void> villagers = guest::addr_of(block->villagers[0]);
    s32 index = expected_index_for(villager, villagers, SaveData::VILLAGER_COUNT);
    if (!record) {
        return false;
    }
    if ((record->flags_bc & PlayerRecord::FLAGS_BC_BIT7) == 0) {
        return false;
    }
    if (villager_check_11a650(villager) != 0) {
        return false;
    }
    if (index_check_309ccc(index) >= 0) {
        return false;
    }
    if (player_villager_check_30ddb0(player, villager, VILLAGER_CHECK_VALUE) != 0) {
        return false;
    }
    villagers = guest::addr_of((*save_data)->villagers[0]);
    if (villagers_check_30b9d4(villagers, villager) != VILLAGERS_CHECK_EXPECTED) {
        return false;
    }
    if (villager_check_309ac8(villager, 0) != 0) {
        return false;
    }
    if ((villager->flags_2510 & (SaveVillager::FLAG_0 | SaveVillager::FLAG_1)) != 0) {
        return false;
    }
    gptr<TableEntry> entry = table_entry(table_id);
    if (!entry || entry->word_44 != 0) {
        return false;
    }
    return table_entry_check_30e5cc(entry, TABLE_ENTRY_CHECK_VALUE) == 0;
}

// The first record in use decides: it is returned when its identity compares equal (f_002fe940 returns 0) to the
// given one. Null when the villager has no record, or does not have the flags the search needs.
gptr<PlayerRecord> find_record_for_identity(gptr<PlayerTable> table, gptr<const PersonalId> identity) {
    gptr<PlayerRecord> villager_record = find_player_record(table, identity);
    if (!villager_record) {
        return nullptr;
    }
    if ((villager_record->flags_b8 & PlayerRecord::FLAGS_B8_BIT1) == 0) {
        return nullptr;
    }
    if ((villager_record->flags_bc & PlayerRecord::FLAGS_BC_BIT3) != 0) {
        return nullptr;
    }
    for (u32 i = 0; i < PlayerTable::RECORDS; i++) {
        gptr<PlayerRecord> record = guest::addr_of(table->records[i]);
        if (!record_in_use(record)) {
            continue;
        }
        if (compare_identity(record, identity) == 0) {
            return record;
        }
        return nullptr;
    }
    return nullptr;
}

// The index of the first record in use, or -1.
s32 first_record_in_use(gptr<PlayerTable> table) {
    for (u32 i = 0; i < PlayerTable::RECORDS; i++) {
        if (record_in_use(guest::addr_of(table->records[i]))) {
            return s32(i);
        }
    }
    return -1;
}

// Whether a villager's id is valid, its index in the save is below 10 and matches the expected index, and its
// player record is in use with bit 7 set and bit 1 of flags_b8 clear.
bool villager_matches_identity(gptr<void> villager, gptr<const PersonalId> identity) {
    gptr<SaveData> block = *save_data;
    gptr<void> villagers = guest::addr_of(block->villagers[0]);
    if (is_valid_id(villager) == 0) {
        return false;
    }
    s32 saved_index = block->index_42a06;
    if (u32(saved_index) >= SaveData::VILLAGER_COUNT) {
        return false;
    }
    if (expected_index_for(villager, villagers, SaveData::VILLAGER_COUNT) != saved_index) {
        return false;
    }
    gptr<PlayerRecord> record = find_player_record(villager, identity);
    if (!record) {
        return false;
    }
    if (!record_identity_is_set(record)) {
        return false;
    }
    if ((record->flags_bc & PlayerRecord::FLAGS_BC_BIT7) == 0) {
        return false;
    }
    return (record->flags_b8 & PlayerRecord::FLAGS_B8_BIT1) == 0;
}

}  // namespace

bool SaveVillager::has_slot_flag(u32 slot) const {
    if (slot >= SLOTS) {
        return false;
    }
    u32 slot_flags = (flags_2510 >> SLOT_FLAGS_SHIFT) & SLOT_FLAGS_MASK;
    return (slot_flags & (1u << slot)) != 0;
}
GUEST_EXPORT(0x0011a7df, SaveVillager::has_slot_flag);
GUEST_EXPORT(0x0011ab05, villager_passes_checks);
GUEST_EXPORT(0x0011abc9, find_record_for_identity);
GUEST_EXPORT(0x0011af49, first_record_in_use);
GUEST_EXPORT(0x0011af89, villager_matches_identity);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

namespace {

constexpr u32 ALL_SLOT_FLAGS = SaveVillager::SLOT_FLAGS_MASK << SaveVillager::SLOT_FLAGS_SHIFT;
constexpr u32 ALL_BITS = 0xffffffff;
constexpr u32 HIGH_BIT = 0x80000000;
constexpr u32 FUZZ_TABLE_ID_LIMIT = 12;  // table ids a little past the 10 entries
constexpr u32 FUZZ_LAST_ENTRY = 9;
constexpr u32 FUZZ_FIRST_INVALID_ENTRY = 10;
constexpr u32 FUZZ_SLOT_LIMIT = 6;  // slots a little past the 4 that exist
constexpr u32 FUZZ_IDENTITY_SIZE = 0x100;

// Scratch memory whose every word holds its own address: any pointer the unknown callees load from it stays inside.
gptr<void> self_referencing_object(guest::Fuzz &f, u32 size) {
    gptr<u32> words = f.allocate(size).cast<u32>();
    for (u32 i = 0; i < size / 4; i++) {
        words[i] = words.addr();
    }
    return words.cast<void>();
}

gptr<PlayerTable> some_player_table(guest::Fuzz &f) {
    auto table = self_referencing_object(f, sizeof(PlayerTable) + 0x40).cast<PlayerTable>();
    for (u32 i = 0; i < PlayerTable::RECORDS; i++) {
        table->records[i].flags_b8 = u8(f.number());
        table->records[i].flags_bc = u8(f.number());
        if (f.below(4) == 0) {
            memset(&table->records[i], 0, sizeof(u16));  // no identity id
        }
    }
    return table;
}

gptr<const u8> some_identity(guest::Fuzz &f) {
    gptr<void> window = f.allocate(FUZZ_IDENTITY_SIZE);
    f.bytes(window, FUZZ_IDENTITY_SIZE);
    return window.cast<const u8>();
}

}  // namespace

GUEST_FUZZ(0x0011a7df, 200, [](guest::Fuzz &f) {
    auto slots = f.allocate(sizeof(SaveVillager)).cast<SaveVillager>();
    slots->flags_2510 = f.pick<u32>({0, ALL_SLOT_FLAGS, ALL_BITS, f.number()});
    f.arguments(slots, f.pick<u32>({0, 1, SaveVillager::SLOTS - 1, SaveVillager::SLOTS, FUZZ_SLOT_LIMIT, ALL_BITS,
                                    HIGH_BIT, f.number()}));
});
GUEST_FUZZ(0x0011ab05, 200, [](guest::Fuzz &f) {
    auto villager = self_referencing_object(f, FUZZ_VILLAGER_SIZE).cast<SaveVillager>();
    villager->flags_2510 = f.pick<u32>({0, SaveVillager::FLAG_0, SaveVillager::FLAG_1,
                                        SaveVillager::FLAG_0 | SaveVillager::FLAG_1, f.number()});
    f.arguments(villager, f.pick<u32>({0, FUZZ_LAST_ENTRY / 2, FUZZ_LAST_ENTRY, FUZZ_FIRST_INVALID_ENTRY, ALL_BITS,
                                       f.below(FUZZ_TABLE_ID_LIMIT)}));
});
GUEST_FUZZ(0x0011abc9, 200, [](guest::Fuzz &f) { f.arguments(some_player_table(f), some_identity(f)); });
GUEST_FUZZ(0x0011af49, 200, [](guest::Fuzz &f) { f.arguments(some_player_table(f)); });
GUEST_FUZZ(0x0011af89, 200, [](guest::Fuzz &f) {
    f.arguments(self_referencing_object(f, FUZZ_VILLAGER_SIZE), some_identity(f));
});
