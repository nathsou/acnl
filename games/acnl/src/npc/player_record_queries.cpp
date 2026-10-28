// Checks on the player records (16 of 0xf2 bytes from 0x8ee in an object), on villager records and a small
// classification by index.
#include <cstring>

#include "npc/npc_item_slots.hpp"
#include "save/player.hpp"

using guest::gptr;

namespace {

// A record of the player table. Only the fields the rewritten code uses are named.
struct QueryPlayerRecord {
    static constexpr u8 FLAG_BB_BIT2 = 0x04;  // flags_bb: unknown flag
    static constexpr u8 FLAG_BC_BIT5 = 0x20;  // flags_bc: unknown flag
    static constexpr u8 FLAG_BC_BIT7 = 0x80;  // flags_bc: unknown flag
    static constexpr u8 FLAGS_BE_MASK = 0x06;  // flags_be: two unknown flags

    u8 unknown_00[0xb9];
    u8 byte_b9;
    u8 byte_ba;
    u8 flags_bb;
    u8 flags_bc;
    u8 unknown_bd;
    u8 flags_be;
    u8 unknown_bf[0xf2 - 0xbf];
};
GUEST_OFFSET(QueryPlayerRecord, byte_b9, 0xb9);
GUEST_OFFSET(QueryPlayerRecord, flags_bb, 0xbb);
GUEST_OFFSET(QueryPlayerRecord, flags_bc, 0xbc);
GUEST_OFFSET(QueryPlayerRecord, flags_be, 0xbe);
GUEST_SIZE(QueryPlayerRecord, 0xf2);

struct QueryPlayerTable {
    static constexpr u32 RECORDS = 16;

    u8 unknown_0000[0x8ee];
    QueryPlayerRecord records[RECORDS];
};
GUEST_OFFSET(QueryPlayerTable, records, 0x8ee);

struct QueryReferenceValue {
    u8 unknown_00[7];
    s8 unknown_07;
    u8 unknown_08[4];
};
GUEST_SIZE(QueryReferenceValue, 12);

// The villager array of the save block (10 records), reached through get_save_block.
struct QuerySaveBlock {
    static constexpr u32 VILLAGER_COUNT = 10;
    u8 unknown_00000[0x292a4];
    u8 villagers[1];
};
GUEST_OFFSET(QuerySaveBlock, villagers, 0x292a4);

// A villager's record; the byte at 0x24f0 is a signed value (meaning not known yet).
struct QueryVillagerRecord {
    u8 unknown_0000[0x24f0];
    s8 value_24f0;
};
GUEST_OFFSET(QueryVillagerRecord, value_24f0, 0x24f0);

// Still recompiled code (or rewritten elsewhere, called through the game's ABI):
inline constexpr guest::Function<0x002fbd54, bool(gptr<void> identity)> identity_is_set;
inline constexpr guest::Function<0x00309eb9, gptr<QueryPlayerRecord>(gptr<void> table, gptr<const u8> identity)>
    find_player_record;
inline constexpr guest::Function<0x002fb378, gptr<QueryReferenceValue>()> get_reference_value;
inline constexpr guest::Function<0x0030fc18, u32(gptr<SavePlayer> player, gptr<QueryReferenceValue> reference)>
    player_check_30fc18;
inline constexpr guest::Function<0x003091e0, gptr<void>(gptr<void> argument)> get_manager_3091e0;
inline constexpr guest::Function<0x003091ec, gptr<SavePlayer>(gptr<void> manager)> get_player_3091ec;
inline constexpr guest::Function<0x002fb328, gptr<QuerySaveBlock>()> get_save_block;
inline constexpr guest::Function<0x00308971, s32(gptr<void> villager, gptr<void> villagers, u32 count)>
    expected_index_for;
inline constexpr guest::Function<0x002fe450, gptr<void>(u32 index)> table_entry;
inline constexpr guest::Function<0x00309ccc, s32(s32 index)> index_check_309ccc;
inline constexpr guest::Function<0x00309865, s32(gptr<void> villagers, u32 value)> villagers_index_309864;

// Thresholds (ascending) the combined byte value of a record is matched against.
constexpr u32 THRESHOLDS_ADDRESS = 0x0088ec60;
constexpr u32 THRESHOLD_COUNT = 6;
constexpr u32 MAX_THRESHOLD_INDEX = 3;
constexpr s32 REFERENCE_MIN = 6;

// The first record whose identity is set and that has flag bit 5 in flags_bc; null if none.
gptr<QueryPlayerRecord> find_first_flagged_record(gptr<QueryPlayerTable> table) {
    for (u32 i = 0; i < QueryPlayerTable::RECORDS; i++) {
        gptr<QueryPlayerRecord> record = guest::addr_of(table->records[i]);
        if (identity_is_set(record) && (record->flags_bc & QueryPlayerRecord::FLAG_BC_BIT5) != 0) {
            return record;
        }
    }
    return nullptr;
}

// Whether the entry matching the identity has bit 7 of flags_bc set.
bool entry_has_flag_bc_bit7(gptr<void> table, gptr<const u8> identity) {
    gptr<QueryPlayerRecord> record = find_player_record(table, identity);
    if (!record) {
        return false;
    }
    return (record->flags_bc & QueryPlayerRecord::FLAG_BC_BIT7) != 0;
}

// FLAG_1 set and FLAG_0 clear in the flag word of an NpcItemSlots.
bool has_flag_1_only(const NpcItemSlots &slots) {
    return (slots.flags_2510 & NpcItemSlots::FLAG_1) != 0 && (slots.flags_2510 & NpcItemSlots::FLAG_0) == 0;
}

// A long list of conditions on a villager and a player (the player is looked up when not given; meaning not
// known yet).
bool villager_passes_player_checks(gptr<NpcItemSlots> self, gptr<SavePlayer> player) {
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
    gptr<QueryPlayerRecord> record = find_player_record(self, guest::addr_of(player->identity));
    if (!record) {
        return false;
    }
    if ((record->flags_bc & QueryPlayerRecord::FLAG_BC_BIT7) == 0) {
        return false;
    }
    if ((record->flags_bb & QueryPlayerRecord::FLAG_BB_BIT2) != 0) {
        return false;
    }
    gptr<const u8> thresholds(THRESHOLDS_ADDRESS);
    u32 value = (record->byte_b9 >> 1) + ((record->byte_ba & 1) << 7);
    u32 threshold_index = 0;
    while (threshold_index < THRESHOLD_COUNT && thresholds[threshold_index] > value) {
        threshold_index++;
    }
    if (threshold_index > MAX_THRESHOLD_INDEX) {
        return false;
    }
    gptr<void> villagers = guest::addr_of(get_save_block()->villagers[0]);
    s32 index = expected_index_for(self, villagers, QuerySaveBlock::VILLAGER_COUNT);
    if (index < 0) {
        return false;
    }
    if (!table_entry(u32(index))) {
        return false;
    }
    if ((record->flags_be & QueryPlayerRecord::FLAGS_BE_MASK) != 0) {
        return false;
    }
    if (index_check_309ccc(index) >= 0) {
        return false;
    }
    if ((self->flags_2510 & NpcItemSlots::FLAG_0) != 0) {
        return false;
    }
    return villagers_index_309864(villagers, 0) != index;
}

// Classifies an index below 16 (3 for larger ones) depending on the signed byte at 0x24f0.
u32 classify_index(gptr<QueryVillagerRecord> villager, u32 index) {
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

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

namespace {

constexpr u32 FUZZ_VILLAGER_SIZE = 0x2600;
constexpr u32 FUZZ_PLAYER_SIZE = 0x7000;
constexpr u32 FUZZ_IDENTITY_SIZE = 0x100;

// Scratch memory whose every word holds its own address: any pointer the unknown callees load from it stays inside.
gptr<void> query_self_referencing_object(guest::Fuzz &f, u32 size) {
    gptr<u32> words = f.allocate(size).cast<u32>();
    for (u32 i = 0; i < size / 4; i++) {
        words[i] = words.addr();
    }
    return words.cast<void>();
}

gptr<QueryPlayerTable> some_query_player_table(guest::Fuzz &f) {
    auto table = query_self_referencing_object(f, sizeof(QueryPlayerTable) + 0x40).cast<QueryPlayerTable>();
    for (u32 i = 0; i < QueryPlayerTable::RECORDS; i++) {
        table->records[i].flags_bc = u8(f.number());
        if (f.below(4) == 0) {
            memset(&table->records[i], 0, sizeof(u16));
        }
    }
    return table;
}

gptr<const u8> some_query_identity(guest::Fuzz &f) {
    gptr<void> window = f.allocate(FUZZ_IDENTITY_SIZE);
    f.bytes(window, FUZZ_IDENTITY_SIZE);
    return window.cast<const u8>();
}

}  // namespace

GUEST_FUZZ(0x0011a795, 200, [](guest::Fuzz &f) { f.arguments(some_query_player_table(f)); });
GUEST_FUZZ(0x0011a7c5, 200, [](guest::Fuzz &f) {
    f.arguments(some_query_player_table(f), some_query_identity(f));
});
GUEST_FUZZ(0x0011b22d, 200, [](guest::Fuzz &f) {
    auto slots = f.allocate(sizeof(NpcItemSlots)).cast<NpcItemSlots>();
    slots->flags_2510 = f.pick<u32>({0, 1, 2, 3, f.number()});
    f.arguments(slots);
});
GUEST_FUZZ(0x0011b249, 200, [](guest::Fuzz &f) {
    auto villager = query_self_referencing_object(f, FUZZ_VILLAGER_SIZE).cast<NpcItemSlots>();
    villager->flags_2510 = f.pick<u32>({0, 1, 2, f.number()});
    gptr<void> player = f.below(3) == 0 ? gptr<void>() : query_self_referencing_object(f, FUZZ_PLAYER_SIZE);
    f.arguments(villager, player);
});
GUEST_FUZZ(0x0011b339, 300, [](guest::Fuzz &f) {
    auto villager = f.allocate(FUZZ_VILLAGER_SIZE).cast<QueryVillagerRecord>();
    f.bytes(villager, FUZZ_VILLAGER_SIZE);
    if (f.below(2) != 0) {
        villager->value_24f0 = s8(f.pick<int>({0x30, 0x31, 0x32, -1, 0x7f, -128}));
    }
    f.arguments(villager, f.pick<u32>({0, 1, 2, 4, 5, 9, 10, 11, 12, 15, 16, 0xffffffff, f.below(20)}));
});
