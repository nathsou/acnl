// Small accessors in 0x00200000-0x00530000: global tables of words, the block and cell of a position, and a record address.
#include "core/fuzz_helpers.hpp"
#include "core/grid_rect.hpp"
#include "guest/guest.hpp"

using guest::gptr;


namespace {

constexpr u32 TABLE_AB7DF4_COUNT = 14;
constexpr u32 TABLE_AB7DE4_COUNT = 4;
constexpr u32 RECORD_COUNT = 6;
constexpr u32 RECORD_SIZE = 0x302;
constexpr u32 RECORDS_OFFSET = 0x18;
constexpr u32 CELLS_PER_BLOCK_SHIFT = 4;  // 16 cells to a block
constexpr u32 FUZZ_PAD = 0x1000;
constexpr u32 FUZZ_LIST_WORDS = 8;

inline guest::global<u32[TABLE_AB7DF4_COUNT], 0x00ab7df4> words_ab7df4;
inline guest::global<u32[TABLE_AB7DE4_COUNT], 0x00ab7de4> words_ab7de4;

// A list of words: its count (at 8), the words (the pointer at 0xc) and a cursor (at 0x10).
struct WordList {
    u8 unknown_00[8];
    u32 count;
    gptr<u32> words;
    u32 cursor;
};
GUEST_OFFSET(WordList, count, 8);
GUEST_OFFSET(WordList, words, 0xc);
GUEST_OFFSET(WordList, cursor, 0x10);

inline constexpr guest::Function<0x00301444, void(gptr<void> memory, u32 size)> clear_memory;

}  // namespace

// The word of the table at 0x00ab7df4 (the first for indexes past the 14 of it).
u32 word_ab7df4(u32 index) {
    return words_ab7df4[index < TABLE_AB7DF4_COUNT ? index : 0];
}
GUEST_EXPORT(0x00314a04, word_ab7df4);
GUEST_EXPORT(0x00242194, word_ab7df4);
GUEST_FUZZ(0x00314a04, 100, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({f.below(TABLE_AB7DF4_COUNT + 3), 0xffffffffu})); });
GUEST_FUZZ(0x00242194, 100, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({f.below(TABLE_AB7DF4_COUNT + 3), 0xffffffffu})); });

// The word of the table at 0x00ab7de4 (the first for indexes past the 4 of it).
u32 word_ab7de4(u32 index) {
    return words_ab7de4[index < TABLE_AB7DE4_COUNT ? index : 0];
}
GUEST_EXPORT(0x00240010, word_ab7de4);
GUEST_FUZZ(0x00240010, 100, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({f.below(TABLE_AB7DE4_COUNT + 3), 0xffffffffu})); });

// The block (16 cells wide, rounded down also for negative cells) a cell is in.
void block_of_cell(GridPoint &block, const GridPoint &cell) {
    block.x = cell.x >> CELLS_PER_BLOCK_SHIFT;
    block.y = cell.y >> CELLS_PER_BLOCK_SHIFT;
}
GUEST_EXPORT(0x0052edfc, block_of_cell);
GUEST_FUZZ(0x0052edfc, 200, [](guest::Fuzz &f) {
    auto cell = f.object<GridPoint>();
    cell->x = f.pick<s32>({0, -1, 15, 16, -16, -17, s32(f.number())});
    cell->y = f.pick<s32>({0, -1, 15, 16, -16, -17, s32(f.number())});
    f.arguments(f.object<GridPoint>(), cell);
});

// The cell at the given position inside the given block (blocks are 16 cells wide).
void cell_of_block_and_position(GridPoint &cell, const GridPoint &block, const GridPoint &inside) {
    cell.x = inside.x + (block.x << CELLS_PER_BLOCK_SHIFT);
    cell.y = inside.y + (block.y << CELLS_PER_BLOCK_SHIFT);
}
GUEST_EXPORT(0x0052eed0, cell_of_block_and_position);
GUEST_FUZZ(0x0052eed0, 100, [](guest::Fuzz &f) {
    f.arguments(f.object<GridPoint>(), f.object<GridPoint>(), f.object<GridPoint>());
});

// The address of the record (0x302 bytes each, six of them, from 0x18) of the object; the first for indexes past the last.
gptr<u8> record_302_address(gptr<u8> base, u32 index) {
    return base + RECORDS_OFFSET + (index < RECORD_COUNT ? index * RECORD_SIZE : 0);
}
GUEST_EXPORT(0x0030512c, record_302_address);
GUEST_EXPORT(0x00716684, record_302_address);
GUEST_EXPORT(0x00317efc, record_302_address);
static void fuzz_record_302(guest::Fuzz &f) {
    f.arguments(f.allocate(FUZZ_PAD).cast<u8>(), f.pick<u32>({f.below(RECORD_COUNT + 3), 0xffffffffu}));
}
GUEST_FUZZ(0x0030512c, 100, fuzz_record_302);
GUEST_FUZZ(0x00716684, 100, fuzz_record_302);
GUEST_FUZZ(0x00317efc, 100, fuzz_record_302);

// Clears the words of the list and puts the cursor back at the start.
void reset_word_list(WordList &list) {
    clear_memory(list.words, list.count * sizeof(u32));
    list.cursor = 0;
}
GUEST_EXPORT(0x00306e58, reset_word_list);
GUEST_FUZZ(0x00306e58, 100, [](guest::Fuzz &f) {
    auto list = f.object<WordList>();
    list->count = f.below(FUZZ_LIST_WORDS);
    list->words = f.allocate(FUZZ_LIST_WORDS * sizeof(u32)).cast<u32>();
    f.arguments(list);
});

namespace {

constexpr u32 BIT_COUNT_29 = 0x1d;
constexpr u32 BITS_PER_BYTE = 8;
constexpr u32 FREE_ENTRY_COUNT = 0x20;
constexpr u32 FREE_ENTRY_SIZE = 32;
constexpr u8 NEW_ENTRY_KIND = 0xe;
constexpr u32 ENTRY_34_COUNT = 0x18f;
constexpr u32 ENTRY_34_SIZE = 34;
constexpr u8 BYTE_AD_VALUE = 2;

// An entry of a table of 32 (from 0xc of the owner): data, a used flag and a few fields.
struct TableEntry32 {
    u8 data[0x10];
    u32 word_10;
    u32 word_14;
    u8 used;
    u8 kind;
    u8 byte_1a;
    u8 byte_1b;
    u8 byte_1c;
    u8 unknown_1d[3];
};
GUEST_OFFSET(TableEntry32, used, 0x18);
GUEST_SIZE(TableEntry32, FREE_ENTRY_SIZE);

struct TableOwner32 {
    u8 unknown_00[0xc];
    TableEntry32 entries[FREE_ENTRY_COUNT];
};
GUEST_OFFSET(TableOwner32, entries, 0xc);

struct EntryOwner34 {
    u8 unknown_00[4];
    gptr<u8> entries;
};
GUEST_OFFSET(EntryOwner34, entries, 4);

struct PendingFlag {
    u8 unknown_00[0xa];
    u8 flag;
};
GUEST_OFFSET(PendingFlag, flag, 0xa);
inline guest::global<PendingFlag, 0x00950708> pending_flag_95070a;

struct ModeBytes {
    u8 unknown_00[4];
    u8 byte_04;
    u8 byte_05;
};
GUEST_OFFSET(ModeBytes, byte_04, 4);
inline guest::global<ModeBytes, 0x00957320> mode_bytes;

struct ByteAdOwner {
    u8 unknown_00[0xad];
    u8 byte_ad;
};
GUEST_OFFSET(ByteAdOwner, byte_ad, 0xad);

struct Bytes7a2 {
    u8 unknown_000[0x7a2];
    u8 byte_7a2;
    u8 byte_7a3;
};
GUEST_OFFSET(Bytes7a2, byte_7a2, 0x7a2);

}  // namespace

// Sets or clears a bit (numbered from the low bit of the first byte) of a bit array; indexes of 29 and above do nothing.
void set_bit_below_29(gptr<u8> bits, u32 index, u32 value) {
    if (index >= BIT_COUNT_29) {
        return;
    }
    u8 mask = u8(1u << (index % BITS_PER_BYTE));
    gptr<u8> byte = bits + index / BITS_PER_BYTE;
    *byte = value != 0 ? u8(*byte | mask) : u8(*byte & ~mask);
}
GUEST_EXPORT(0x00309904, set_bit_below_29);
GUEST_EXPORT(0x401fe918, set_bit_below_29);
GUEST_EXPORT(0x40530fc8, set_bit_below_29);
static void fuzz_309904(guest::Fuzz &f) {
    f.arguments(f.allocate(8).cast<u8>(), f.pick<u32>({f.below(BIT_COUNT_29 + 3), 0xffffffffu}), f.below(2));
}
GUEST_FUZZ(0x00309904, 200, fuzz_309904);
GUEST_FUZZ(0x401fe918, 200, fuzz_309904);
GUEST_FUZZ(0x40530fc8, 200, fuzz_309904);

// Takes the first unused entry of the 32 (marks it as new: kind 0xe, everything else cleared) and returns the address of
// the data part of it; null when all are used.
gptr<u8> claim_table_entry_32(TableOwner32 &owner) {
    for (TableEntry32 &entry : owner.entries) {
        if (entry.used == 0) {
            entry.word_10 = 0;
            entry.word_14 = 0;
            entry.kind = NEW_ENTRY_KIND;
            entry.byte_1a = 0;
            entry.byte_1b = 0;
            entry.byte_1c = 0;
            return guest::addr_of(entry.data[0]);
        }
    }
    return nullptr;
}
GUEST_EXPORT(0x0052c2d8, claim_table_entry_32);
GUEST_FUZZ(0x0052c2d8, 100, [](guest::Fuzz &f) {
    f.allocate(FUZZ_PAD);
    auto owner = f.allocate(sizeof(TableOwner32)).cast<TableOwner32>();
    u32 free_from = f.below(FREE_ENTRY_COUNT + 2);
    for (u32 i = 0; i < FREE_ENTRY_COUNT; i++) {
        owner->entries[i].used = i < free_from ? u8(1) : u8(f.below(2));
    }
    f.arguments(owner);
});

// The entry (34 bytes each) of the owner's table; null for numbers past the 399 and without a table.
gptr<u8> entry_34_at(EntryOwner34 &owner, u32 index) {
    if (owner.entries == nullptr || index >= ENTRY_34_COUNT) {
        return nullptr;
    }
    return owner.entries + index * ENTRY_34_SIZE;
}
GUEST_EXPORT(0x00301e6c, entry_34_at);
GUEST_FUZZ(0x00301e6c, 100, [](guest::Fuzz &f) {
    auto owner = f.object<EntryOwner34>();
    owner->entries = f.below(4) != 0 ? f.allocate(FUZZ_PAD).cast<u8>() : gptr<u8>(0u);
    f.arguments(owner, f.pick<u32>({f.below(8), ENTRY_34_COUNT - 1, ENTRY_34_COUNT, f.number()}));
});

// Takes the pending flag at 0x0095070a: true (and cleared) when it was set.
bool take_pending_flag_95070a() {
    if (pending_flag_95070a->flag == 0) {
        return false;
    }
    pending_flag_95070a->flag = 0;
    return true;
}
GUEST_EXPORT(0x00292ca8, take_pending_flag_95070a);
GUEST_FUZZ(0x00292ca8, 50, [](guest::Fuzz &f) {
    pending_flag_95070a->flag = f.pick<u8>({0, 1, 1});
    f.arguments();
});

// Whether the byte at 0xad of the object is 2.
bool byte_ad_is_2(ByteAdOwner &owner) {
    return owner.byte_ad == BYTE_AD_VALUE;
}
GUEST_EXPORT(0x00303c84, byte_ad_is_2);
GUEST_FUZZ(0x00303c84, 100, [](guest::Fuzz &f) {
    f.allocate(FUZZ_PAD);
    auto owner = f.allocate(sizeof(ByteAdOwner)).cast<ByteAdOwner>();
    owner->byte_ad = f.pick<u8>({0, 1, 2, 3});
    f.arguments(owner);
});

// Stores the two bytes at 4 and 5 of the mode block when they are not zero.
void store_mode_bytes(u32 first, u32 second) {
    if (first != 0) {
        mode_bytes->byte_04 = u8(first);
    }
    if (second != 0) {
        mode_bytes->byte_05 = u8(second);
    }
}
GUEST_EXPORT(0x00300634, store_mode_bytes);
// (the values it is called with are the ones the bytes have now or zero, so that the game's state stays as it is)
GUEST_FUZZ(0x00300634, 100, [](guest::Fuzz &f) {
    f.arguments(f.below(2) != 0 ? u32(mode_bytes->byte_04) : 0u, f.below(2) != 0 ? u32(mode_bytes->byte_05) : 0u);
});

// Stores the value in the byte at 0x7a3, and in the one at 0x7a2 too unless `only_second`.
void store_bytes_7a2(Bytes7a2 &owner, u32 value, bool only_second) {
    if (!only_second) {
        owner.byte_7a2 = u8(value);
    }
    owner.byte_7a3 = u8(value);
}
GUEST_EXPORT(0x00577410, store_bytes_7a2);
GUEST_FUZZ(0x00577410, 100, [](guest::Fuzz &f) {
    f.allocate(FUZZ_PAD);
    f.arguments(f.allocate(sizeof(Bytes7a2)).cast<Bytes7a2>(), f.number(), f.below(2));
});

namespace {

constexpr u32 RECORD_4648_COUNT = 4;
constexpr u32 RECORD_4648_SIZE = 581 * 8;
constexpr u8 KIND_RECORD_E = 0xe, KIND_RECORD_F = 0xf, KIND_RECORD_10 = 0x10, KIND_RECORD_11 = 0x11;
constexpr u8 RECORD_B_MIN_E = 2, RECORD_B_MIN_10 = 3;
constexpr u8 IDENTITY_KINDS[] = {1, 3, 6};
constexpr u32 RECORD_IDENTITY_OFFSET = 0x34;
constexpr u32 TERRAIN_BLOCKING = 3;
constexpr u32 NIBBLE_MASK = 0xf;
constexpr u32 NIBBLE_ONE = 1;

struct KindRecord {
    u8 unknown_00[0x1e];
    u8 kind;
    u8 level;
};
GUEST_OFFSET(KindRecord, kind, 0x1e);

struct IdentityKindRecord {
    u8 unknown_00[0x64];
    u8 kind;
};
GUEST_OFFSET(IdentityKindRecord, kind, 0x64);

struct Byte2e {
    u8 unknown_00[0x2e];
    u8 value;
};
GUEST_OFFSET(Byte2e, value, 0x2e);

struct VillagerSlotRecord {
    u8 unknown_00[0x1a];
    s8 slot;
    u8 unknown_1b[3];
    u8 state;
};
GUEST_OFFSET(VillagerSlotRecord, slot, 0x1a);
GUEST_OFFSET(VillagerSlotRecord, state, 0x1e);
constexpr u32 VILLAGER_SLOT_RECORDS_OFFSET = 0x17380;

inline constexpr guest::Function<0x00315788, u32(s32 x, s32 z, u32 map_number)> terrain_at_world;
inline constexpr guest::Function<0x005ce154, u32(u32 index)> byte_95da1d;

}  // namespace

// The address of the record (4648 bytes each, four of them); the base for numbers past the last.
gptr<u8> record_4648_address(gptr<u8> base, u32 index) {
    return index < RECORD_4648_COUNT ? base + index * RECORD_4648_SIZE : base;
}
GUEST_EXPORT(0x00317ee0, record_4648_address);
GUEST_FUZZ(0x00317ee0, 100, [](guest::Fuzz &f) {
    f.arguments(f.allocate(8).cast<u8>(), f.pick<u32>({f.below(RECORD_4648_COUNT + 3), 0xffffffffu}));
});

// Whether the record's level (at 0x1f) is high enough for its kind (0xe and 0xf: 2, 0x10 and 0x11: 3); true for the other kinds.
bool record_level_is_enough(KindRecord &record) {
    if (record.kind == KIND_RECORD_E || record.kind == KIND_RECORD_F) {
        return record.level >= RECORD_B_MIN_E;
    }
    if (record.kind == KIND_RECORD_10 || record.kind == KIND_RECORD_11) {
        return record.level >= RECORD_B_MIN_10;
    }
    return true;
}
GUEST_EXPORT(0x003098b0, record_level_is_enough);
GUEST_FUZZ(0x003098b0, 200, [](guest::Fuzz &f) {
    auto record = f.object<KindRecord>();
    record->kind = f.pick<u8>({0xd, 0xe, 0xf, 0x10, 0x11, 0x12, u8(f.number())});
    record->level = f.pick<u8>({0, 1, 2, 3, 4});
    f.arguments(record);
});

// The identity part (at 0x34) of a record of kind 1, 3 or 6; null for other kinds.
gptr<u8> record_identity_of_kind(IdentityKindRecord &record) {
    for (u8 kind : IDENTITY_KINDS) {
        if (record.kind == kind) {
            return guest::addr_of(record).cast<u8>() + RECORD_IDENTITY_OFFSET;
        }
    }
    return nullptr;
}
GUEST_EXPORT(0x00311c50, record_identity_of_kind);
GUEST_FUZZ(0x00311c50, 100, [](guest::Fuzz &f) {
    auto record = f.object<IdentityKindRecord>();
    record->kind = f.pick<u8>({0, 1, 2, 3, 4, 6, 7});
    f.arguments(record);
});

// 1 for the values 4 to 7 of the byte at 0x2e, 0 for all others.
u32 byte_2e_is_4_to_7(Byte2e &object) {
    return object.value >= 4 && object.value <= 7 ? 1 : 0;  // (4 is the first and 7 the last value)
}
GUEST_EXPORT(0x0030e228, byte_2e_is_4_to_7);
GUEST_FUZZ(0x0030e228, 100, [](guest::Fuzz &f) {
    auto object = f.object<Byte2e>();
    object->value = f.pick<u8>({0, 3, 4, 5, 7, 8, 9, u8(f.number())});
    f.arguments(object);
});

// Whether the value is one of 0xb-0x11, 0x14, 0x1b and 0x1c.
bool value_in_set_2fcf7c(u32 value) {
    return (value >= 0xb && value <= 0x11) || value == 0x14 || value == 0x1b || value == 0x1c;  // (what they stand for is not known yet)
}
GUEST_EXPORT(0x002fcf7c, value_in_set_2fcf7c);
GUEST_FUZZ(0x002fcf7c, 100, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({0xa, 0xb, 0xc, 0x10, 0x11, 0x12, 0x14, 0x15, 0x1b, 0x1c, 0x1d, f.number()})); });

// The terrain flag byte of the world position (x, z) unless the position one or two steps back (z - 1, z - 2) has the terrain 3.
u32 terrain_byte_unless_blocked(s32 x, s32 z, u32 map_number) {
    u32 near = terrain_at_world(x, z - 1, map_number);
    u32 far = terrain_at_world(x, z - 2, map_number);
    if (near == TERRAIN_BLOCKING || far == TERRAIN_BLOCKING) {
        return 0;
    }
    return byte_95da1d(terrain_at_world(x, z, map_number));
}
GUEST_EXPORT(0x002ff160, terrain_byte_unless_blocked);
GUEST_FUZZ(0x002ff160, 200, [](guest::Fuzz &f) { f.arguments(s32(f.below(FUZZ_PAD / 8)), s32(f.below(FUZZ_PAD / 8)), f.below(2)); });

// The slot index (at 0x1a) of the villager record the state byte (low nibble: 0 always, 1 when allowed) lets through; -1 otherwise.
s32 villager_slot_index(gptr<u8> base, bool allow_state_1) {
    VillagerSlotRecord &record = *(base + VILLAGER_SLOT_RECORDS_OFFSET).cast<VillagerSlotRecord>();
    u32 state = record.state & NIBBLE_MASK;
    if (state == 0 || (allow_state_1 && state == NIBBLE_ONE)) {
        return record.slot;
    }
    return -1;
}
GUEST_EXPORT(0x00309865, villager_slot_index);
GUEST_FUZZ(0x00309865, 100, [](guest::Fuzz &f) {
    auto save = f.allocate(VILLAGER_SLOT_RECORDS_OFFSET + 0x100).cast<u8>();
    auto record = (save + VILLAGER_SLOT_RECORDS_OFFSET).cast<VillagerSlotRecord>();
    record->state = f.pick<u8>({0, 1, 2, 0x10, 0x11, u8(f.number())});
    record->slot = s8(f.number());
    f.arguments(save, f.below(2));
});
