// Small accessors from 0x004f0000 to 0x0052d000: rows of the global block at 0x00a82b90, two lookups through the
// pointer at 0x0095386c, the current player's record, talk-state checks and some list setup.
#include "core/bit_set.hpp"
#include "guest/guest.hpp"
#include "save/saved_record.hpp"

using guest::gptr;

namespace {

constexpr u32 SMALL_TABLE_SIZE = 0xb;  // entries of the u16 table at 0x00a83348 and of the one behind 0x0095386c
constexpr u32 NO_VALUE = 0xffff;
constexpr u32 ROW_COUNT = 10;
constexpr u32 FIRST_CLEARED_FLAG = 7;
constexpr u32 LAST_CLEARED_FLAG = 0x16;
constexpr u32 TALK_STATE_5 = 5;
constexpr u32 TALK_STATE_6 = 6;
constexpr u32 TALK_STATE_C = 0xc;
constexpr u8 BYTE_1A_SET = 1;
constexpr u32 RECORD_STATE_LIMIT = 3;
constexpr u32 ENTRY_COUNT = 0x20;
constexpr u8 ENTRY_DEFAULT_BYTE = 0xe;

inline constexpr guest::Function<0x0030b6c4, u32()> main_object_idle;
inline constexpr guest::Function<0x002ff6f8, s32(s32 max)> random_below;
inline constexpr guest::Function<0x005d46dc, u32()> value_for_mode;
inline constexpr guest::Function<0x003170f8, bool(u32 kind, u32 strict)> talk_state_matches;
inline constexpr guest::Function<0x00132478, void(gptr<void> list)> clear_list;
inline constexpr guest::Function<0x00303cdc, void(gptr<void> inner)> clear_inner;

// What the pointer at 0x0095386c leads to (meaning not known yet).
struct IndexedTables {
    u8 unknown_00[0x6c];
    u16 values_6c[SMALL_TABLE_SIZE];
    u8 unknown_82[0x82 - 0x6c - 2 * SMALL_TABLE_SIZE];
    u8 flags_82[2];
    u8 unknown_84[0x8e - 0x84];
    s8 signed_8e[ROW_COUNT];
};
GUEST_OFFSET(IndexedTables, values_6c, 0x6c);
GUEST_OFFSET(IndexedTables, flags_82, 0x82);
GUEST_OFFSET(IndexedTables, signed_8e, 0x8e);
inline guest::global<gptr<IndexedTables>, 0x0095386c> indexed_tables;

inline guest::global<u16[SMALL_TABLE_SIZE], 0x00a83348> small_values;
inline guest::global<u32[8], 0x0088063c> random_limits;

// One of ten 0x50-byte rows of a table at 0x00a82c58.
struct BlockRow {
    u8 unknown_00[0x4f];
    s8 value_4f;
};
GUEST_OFFSET(BlockRow, value_4f, 0x4f);
GUEST_SIZE(BlockRow, 0x50);
inline guest::global<BlockRow[ROW_COUNT], 0x00a82c58> block_rows;

struct GlobalBlock {
    u8 unknown_000[0x7fc];
    u32 value_7fc;
    u8 unknown_800[0x80d - 0x800];
    u8 byte_80d;
    u8 byte_80e;
};
GUEST_OFFSET(GlobalBlock, value_7fc, 0x7fc);
GUEST_OFFSET(GlobalBlock, byte_80d, 0x80d);
inline guest::global<GlobalBlock, 0x00a82b90> global_block;

// The pointer at 0x00aaef18 + 0x234 leads to the current player; its saved record is at 0x8e08.
struct CurrentPlayer {
    u8 unknown_0000[0x8e08];
    SavedRecordInner record;
    u8 unknown_8e13[0x8ebc - 0x8e13];
    u8 value_8ebc;
};
GUEST_OFFSET(CurrentPlayer, record, 0x8e08);
GUEST_OFFSET(CurrentPlayer, value_8ebc, 0x8ebc);
struct PlayerContext {
    u8 unknown_000[0x234];
    gptr<CurrentPlayer> player;
};
GUEST_OFFSET(PlayerContext, player, 0x234);
inline guest::global<PlayerContext, 0x00aaef18> player_context;

struct TalkObject {
    u8 unknown_00[0x1a];
    u8 byte_1a;
};
GUEST_OFFSET(TalkObject, byte_1a, 0x1a);
struct TalkGlobal {
    u8 unknown_00[0xc];
    gptr<TalkObject> current;
};
GUEST_OFFSET(TalkGlobal, current, 0xc);
inline guest::global<TalkGlobal, 0x009516a0> talk_global;

// Two modes of a setting object (meaning not known yet).
struct ModeSetting {
    u32 unknown_00;
    u32 state_04;
    u32 value_08;
    u32 value_0c;
    u32 state_10;
    u32 value_14;
    u32 value_18;
    u32 state_1c;
};
GUEST_OFFSET(ModeSetting, state_04, 4);
GUEST_OFFSET(ModeSetting, state_10, 0x10);
GUEST_OFFSET(ModeSetting, state_1c, 0x1c);
GUEST_SIZE(ModeSetting, 0x20);

struct TimedRecord {
    u8 unknown_00[0xe];
    u16 value_0e;
    u8 unknown_10[6];
    u8 byte_16;
    u8 byte_17;
    u8 byte_18;
};
GUEST_OFFSET(TimedRecord, value_0e, 0xe);
GUEST_OFFSET(TimedRecord, byte_16, 0x16);

// The first 13 bytes of a list entry, which are reset together.
struct EntryFields {
    u32 value_00;
    u32 value_04;
    u8 byte_08;
    u8 byte_09;
    u8 byte_0a;
    u8 byte_0b;
    u8 byte_0c;
    u8 unknown_0d[3];
};
GUEST_SIZE(EntryFields, 0x10);

void reset_entry_fields(EntryFields &fields) {
    fields.value_00 = 0;
    fields.value_04 = 0;
    fields.byte_08 = 0;
    fields.byte_09 = ENTRY_DEFAULT_BYTE;
    fields.byte_0a = 0;
    fields.byte_0b = 0;
    fields.byte_0c = 0;
}

// A list of thirty-two entries after the 0x1c bytes of the list header.
struct EntryList {
    u8 header[0x1c];
    struct Entry {
        EntryFields fields;
        u8 unknown_10[0x20 - sizeof(EntryFields)];
    } entries[ENTRY_COUNT];
};
GUEST_OFFSET(EntryList, entries, 0x1c);

// A node of a linked list (next at 8) with the entry fields at 0x10.
struct EntryNode {
    u8 unknown_00[8];
    gptr<EntryNode> next;
    u8 unknown_0c[4];
    EntryFields fields;
};
GUEST_OFFSET(EntryNode, next, 8);
GUEST_OFFSET(EntryNode, fields, 0x10);

struct EntryNodeList {
    u8 unknown_00[4];
    gptr<EntryNode> head;
};
GUEST_OFFSET(EntryNodeList, head, 4);

}  // namespace

// The value for an index below 11 (0xffff beyond): from the table behind 0x0095386c when the main object is idle
// and the flag is clear, else from the small table.
u32 indexed_value(u32 index, u32 flag) {
    if (index >= SMALL_TABLE_SIZE) {
        return NO_VALUE;
    }
    if ((main_object_idle() | flag) == 0) {
        return (*indexed_tables)->values_6c[index];
    }
    return small_values[index];
}
GUEST_EXPORT(0x0051d2e4, indexed_value);

// The signed byte of the row for the index (rows 0-9; 0 beyond): from the row table when the main object is idle,
// else from the table behind 0x0095386c.
s32 indexed_row_value(u32 index) {
    if (index >= ROW_COUNT) {
        return 0;
    }
    if (main_object_idle() != 0) {
        return block_rows[index].value_4f;
    }
    return (*indexed_tables)->signed_8e[index];
}
GUEST_EXPORT(0x0051d32c, indexed_row_value);

// Clears flags 7 to 22 of the set.
void clear_flags_7_to_22(BitSet32 &set) {
    for (u32 index = FIRST_CLEARED_FLAG; index <= LAST_CLEARED_FLAG; index++) {
        set.clear(index);
    }
}
GUEST_EXPORT(0x0051d6e8, clear_flags_7_to_22);

// A byte of the current player's record when it has a value below state 3; otherwise a word of the global block.
u32 current_record_byte_or_global() {
    gptr<CurrentPlayer> player = player_context->player;
    if (player != nullptr && player->record.has_value() && player->record.unknown_09 < RECORD_STATE_LIMIT) {
        return player->value_8ebc;
    }
    return global_block->value_7fc;
}
GUEST_EXPORT(0x0051d77c, current_record_byte_or_global);

// Stores a random number below the limit for the index in the global block.
void pick_random_for_index(u32 index) {
    global_block->value_7fc = u32(random_below(s32(random_limits[index])));
}
GUEST_EXPORT(0x0051d7cc, pick_random_for_index);

// A byte for the selector: from the global block when the main object is not idle or the flag is set, else from the
// table behind 0x0095386c.
u32 selected_byte(u32 selector, u32 flag) {
    if ((main_object_idle() | flag) != 0) {
        return selector != 0 ? global_block->byte_80d : global_block->byte_80e;
    }
    return (*indexed_tables)->flags_82[selector ^ 1];
}
GUEST_EXPORT(0x0051d90c, selected_byte);

// Zeroes the entry; the second form of the mode, 1 or 2, depends on the value of the current mode.
void reset_mode_setting(ModeSetting &setting) {
    setting.value_08 = 0;
    setting.value_0c = 0;
    setting.value_14 = 0;
    setting.value_18 = 0;
    if (value_for_mode() != 0) {
        setting.state_10 = 2;
        setting.state_04 = 0;
        setting.state_1c = 0;
    } else {
        setting.state_04 = 1;
        setting.state_10 = 0;
        setting.state_1c = 1;
    }
}
GUEST_EXPORT(0x00523b24, reset_mode_setting);

// Clears the inner saved record and a few fields after it.
void clear_timed_record(TimedRecord &record) {
    clear_inner(guest::addr_of(record).cast<void>());
    record.byte_16 = 0;
    record.byte_17 = 0;
    record.byte_18 = 0;
    record.value_0e = 0;
}
GUEST_EXPORT(0x0052abb4, clear_timed_record);

static bool talk_state_without_flag(u32 state) {
    return talk_state_matches(state, 0) && talk_global->current->byte_1a != BYTE_1A_SET;
}

// Whether the talk state is 5 (or 6) and the current talk object's byte 0x1a is not 1.
bool talk_state_5_without_flag() {
    return talk_state_without_flag(TALK_STATE_5);
}
GUEST_EXPORT(0x0052bf54, talk_state_5_without_flag);

bool talk_state_6_without_flag() {
    return talk_state_without_flag(TALK_STATE_6);
}
GUEST_EXPORT(0x0052c1fc, talk_state_6_without_flag);

// Sets the current talk object's byte 0x1a when the talk state is 0xc.
void set_talk_flag_in_state_c() {
    if (talk_state_matches(TALK_STATE_C, 0)) {
        talk_global->current->byte_1a = BYTE_1A_SET;
    }
}
GUEST_EXPORT(0x0052c554, set_talk_flag_in_state_c);

// Clears the list and resets its thirty-two entries.
void reset_entry_list(EntryList &list) {
    clear_list(guest::addr_of(list).cast<void>());
    for (u32 i = 0; i < ENTRY_COUNT; i++) {
        reset_entry_fields(list.entries[i].fields);
    }
}
GUEST_EXPORT(0x0052c32c, reset_entry_list);

// Resets the entry of every node, then clears the list.
void reset_entry_nodes(EntryNodeList &list) {
    for (gptr<EntryNode> node = list.head; node != nullptr; node = node->next) {
        reset_entry_fields(node->fields);
    }
    clear_list(guest::addr_of(list).cast<void>());
}
GUEST_EXPORT(0x0052c374, reset_entry_nodes);
