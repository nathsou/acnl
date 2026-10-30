// Small accessors in 0x00700000-0x00770000 of objects whose types are not known yet.
#include "core/fuzz_helpers.hpp"
#include "guest/guest.hpp"

using guest::gptr;

namespace {

constexpr u32 BYTES_OFFSET = 0x5460;       // the table of bytes that byte_from_table_5460 reads
constexpr u32 ENTRY_LIST_COUNT = 4;
constexpr u32 PAIR_NONE_LOW = 0xfffffffd;  // an entry whose 64-bit value is this is not in use
constexpr u32 PAIR_NONE_HIGH = 0xffffffff;
constexpr u32 RECORD_COUNT_2160 = 10;
constexpr u32 RECORD_SIZE_2160 = 2160;
constexpr u32 CATALOG_ITEM_COUNT = 0x5b;
constexpr u32 CATALOG_FIRST_VALUE = 0x01000271;
constexpr s32 NO_VALUE = -1;
constexpr u16 NUMBER_LIMIT_FC = 0xfc;
constexpr u32 FLAGS_C60_BIT_5 = 0x20, FLAGS_C60_BIT_4 = 0x10;
constexpr u8 LOW_BITS_270 = 7;
constexpr u8 BYTE_69_LIMIT = 9;
constexpr u32 ENTRY_STRIDE_152 = 152;
constexpr u32 PADDING_SCRATCH = 0x1000;
constexpr u32 FUZZ_RANGE = 0x100;
constexpr u32 FUZZ_BLOCK = 0x100;
constexpr u32 FUZZ_LIST_BYTES = 0x40;
constexpr u32 FUZZ_TABLE_BYTES = 0x400;

struct ByteTableOwner {
    u8 unknown_0000[BYTES_OFFSET];
    u8 bytes[1];
};

struct PairEntry {
    u8 unknown_00[8];
    u32 low;
    u32 high;
    u8 unknown_10[8];
};
GUEST_SIZE(PairEntry, 24);

struct PairEntryList {
    u8 unknown_00[8];
    PairEntry entries[ENTRY_LIST_COUNT];
};
GUEST_OFFSET(PairEntryList, entries, 8);

struct HalfwordSource {
    u8 unknown_00[0x10];
    gptr<u16> halfwords;
};
GUEST_OFFSET(HalfwordSource, halfwords, 0x10);

struct WithPointer104 {
    u8 unknown_00[0xb4];
    gptr<u8> pointer_b4;
    u8 unknown_b8[0x104 - 0xb8];
    gptr<u8> pointer_104;
};
GUEST_OFFSET(WithPointer104, pointer_b4, 0xb4);
GUEST_OFFSET(WithPointer104, pointer_104, 0x104);
constexpr u32 VALUE_C8_OFFSET = 0xc8;

struct ChainEnd {
    u8 unknown_00[0x18];
    u32 value;
};
struct ChainLink {
    u8 unknown_00[0x18];
    gptr<ChainEnd> next;
};
struct Chain {
    u8 unknown_00[8];
    gptr<ChainLink> first;
};
GUEST_OFFSET(Chain, first, 8);
GUEST_OFFSET(ChainLink, next, 0x18);
GUEST_OFFSET(ChainEnd, value, 0x18);

struct Flags270 {
    u8 unknown_000[0x270];
    u8 flags;
};
GUEST_OFFSET(Flags270, flags, 0x270);

struct Flags69 {
    u8 unknown_00[0x69];
    u8 value;
};
GUEST_OFFSET(Flags69, value, 0x69);

struct FlagsC60 {
    u8 unknown_0000[0xc60];
    u32 flags;
};
GUEST_OFFSET(FlagsC60, flags, 0xc60);

struct EntryTable {
    u8 unknown_00[0x16];
    u16 entries_offset;
};
GUEST_OFFSET(EntryTable, entries_offset, 0x16);
struct TableOwner {
    u8 unknown_00[0x2c];
    gptr<EntryTable> table;
};
GUEST_OFFSET(TableOwner, table, 0x2c);
struct EntryTableHolder {
    u8 unknown_00[4];
    gptr<TableOwner> owner;
    u32 index;
};
GUEST_OFFSET(EntryTableHolder, owner, 4);

}  // namespace

// The byte at `index` in the table at 0x5460 of the object.
u32 byte_from_table_5460(gptr<u8> base, u32 index) {
    return (base + index + BYTES_OFFSET)[0];
}
GUEST_EXPORT(0x00712850, byte_from_table_5460);
GUEST_FUZZ(0x00712850, 100, [](guest::Fuzz &f) {
    f.allocate(PADDING_SCRATCH);
    f.arguments(f.allocate(BYTES_OFFSET + FUZZ_RANGE * 2).cast<u8>(), f.below(FUZZ_RANGE));
});

// Copies `count` halfwords from the source's list (at 0x10) to the destination.
void copy_halfwords(const HalfwordSource &source, gptr<u16> destination, u32 count) {
    for (u32 i = 0; i < count; i++) {
        destination[i] = source.halfwords[i];
    }
}
GUEST_EXPORT(0x0075a000, copy_halfwords);
GUEST_FUZZ(0x0075a000, 100, [](guest::Fuzz &f) {
    auto source = f.object<HalfwordSource>();
    source->halfwords = f.allocate(FUZZ_LIST_BYTES).cast<u16>();
    f.arguments(source, f.allocate(FUZZ_LIST_BYTES).cast<u16>(), f.below(FUZZ_LIST_BYTES / 4));
});

// The entry of the list (index below 4) unless its 64-bit value is the "not in use" one; null otherwise.
gptr<PairEntry> entry_in_use(PairEntryList &list, u32 index) {
    if (index >= ENTRY_LIST_COUNT) {
        return nullptr;
    }
    PairEntry &entry = list.entries[index];
    return entry.low == PAIR_NONE_LOW && entry.high == PAIR_NONE_HIGH ? gptr<PairEntry>(nullptr) : guest::addr_of(entry);
}
GUEST_EXPORT(0x0075f4d4, entry_in_use);
GUEST_FUZZ(0x0075f4d4, 100, [](guest::Fuzz &f) {
    auto list = f.object<PairEntryList>();
    for (PairEntry &entry : list->entries) {
        if (f.below(2) != 0) {
            entry.low = PAIR_NONE_LOW;
            entry.high = PAIR_NONE_HIGH;
        }
    }
    f.arguments(list, f.below(6));
});

// The value at 0xc8 of what the object points to at 0x104 (-1 without one), and the same for the pointer at 0xb4.
s32 value_c8_of_pointer_104(WithPointer104 &object) {
    return object.pointer_104 == nullptr ? NO_VALUE : s32(*(object.pointer_104 + VALUE_C8_OFFSET).cast<u32>());
}
GUEST_EXPORT(0x0071af38, value_c8_of_pointer_104);
GUEST_FUZZ(0x0071af38, 100, [](guest::Fuzz &f) {
    auto object = f.object<WithPointer104>();
    object->pointer_104 = f.below(4) != 0 ? f.allocate(FUZZ_BLOCK).cast<u8>() : gptr<u8>(0u);
    f.arguments(object);
});

s32 value_c8_of_pointer_b4(WithPointer104 &object) {
    return object.pointer_b4 == nullptr ? NO_VALUE : s32(*(object.pointer_b4 + VALUE_C8_OFFSET).cast<u32>());
}
GUEST_EXPORT(0x0071af84, value_c8_of_pointer_b4);
GUEST_FUZZ(0x0071af84, 100, [](guest::Fuzz &f) {
    auto object = f.object<WithPointer104>();
    object->pointer_b4 = f.below(4) != 0 ? f.allocate(FUZZ_BLOCK).cast<u8>() : gptr<u8>(0u);
    f.arguments(object);
});

// Whether the chain of pointers (at 8, then 0x18) is complete and the value at its end (0x18) is zero.
bool chain_end_is_zero(Chain &chain) {
    if (chain.first == nullptr || chain.first->next == nullptr) {
        return false;
    }
    return chain.first->next->value == 0;
}
GUEST_EXPORT(0x0075aac8, chain_end_is_zero);
GUEST_FUZZ(0x0075aac8, 100, [](guest::Fuzz &f) {
    auto chain = f.object<Chain>();
    auto link = f.object<ChainLink>();
    auto end = f.object<ChainEnd>();
    end->value = f.pick<u32>({0, 0, 1, f.number()});
    link->next = f.below(4) != 0 ? end : gptr<ChainEnd>(0u);
    chain->first = f.below(4) != 0 ? link : gptr<ChainLink>(0u);
    f.arguments(chain);
});

// Whether the flags word at 0xc60 (bit 5 left out) is something other than nothing, or other than just bit 4 when bit 4 is set.
bool flags_c60_ok(FlagsC60 &object) {
    u32 flags = object.flags;
    if ((flags & FLAGS_C60_BIT_5) != 0) {
        flags ^= FLAGS_C60_BIT_5;
    }
    if ((flags & FLAGS_C60_BIT_4) != 0) {
        return flags != FLAGS_C60_BIT_4;
    }
    return flags != 0;
}
GUEST_EXPORT(0x00767084, flags_c60_ok);
GUEST_FUZZ(0x00767084, 100, [](guest::Fuzz &f) {
    f.allocate(PADDING_SCRATCH);
    auto object = f.allocate(sizeof(FlagsC60)).cast<FlagsC60>();
    object->flags = f.pick<u32>({0, FLAGS_C60_BIT_4, FLAGS_C60_BIT_5, FLAGS_C60_BIT_4 | FLAGS_C60_BIT_5, 1, FLAGS_C60_BIT_4 | 1, f.number()});
    f.arguments(object);
});

// Whether bit 5 of the byte at 0x270 is set, and whether its three low bits are all clear.
bool byte_270_has_bit_5(Flags270 &object) {
    return (object.flags & (1u << 5)) != 0;
}
GUEST_EXPORT(0x007580f0, byte_270_has_bit_5);
bool byte_270_low_bits_clear(Flags270 &object) {
    return (object.flags & LOW_BITS_270) == 0;
}
GUEST_EXPORT(0x00758104, byte_270_low_bits_clear);
static void fuzz_flags_270(guest::Fuzz &f) {
    f.allocate(PADDING_SCRATCH);
    auto object = f.allocate(sizeof(Flags270)).cast<Flags270>();
    object->flags = u8(f.number());
    f.arguments(object);
}
GUEST_FUZZ(0x007580f0, 100, fuzz_flags_270);
GUEST_FUZZ(0x00758104, 100, fuzz_flags_270);

// Whether the byte at 0x69 is below 9.
bool byte_69_below_9(Flags69 &object) {
    return object.value < BYTE_69_LIMIT;
}
GUEST_EXPORT(0x0070bd30, byte_69_below_9);
GUEST_FUZZ(0x0070bd30, 100, [](guest::Fuzz &f) {
    auto object = f.object<Flags69>();
    object->value = f.pick<u8>({0, 8, 9, 0xb, 0xc, u8(f.number())});
    f.arguments(object);
});

// The address of the record (2160 bytes each, ten of them); the first for indexes past the last.
gptr<u8> record_2160_address(gptr<u8> base, u32 index) {
    return index < RECORD_COUNT_2160 ? base + index * RECORD_SIZE_2160 : base;
}
GUEST_EXPORT(0x00712864, record_2160_address);
GUEST_EXPORT(0x0020bf50, record_2160_address);
static void fuzz_record_2160(guest::Fuzz &f) {
    f.arguments(f.allocate(8).cast<u8>(), f.pick<u32>({f.below(RECORD_COUNT_2160 + 3), 0xffffffffu}));
}
GUEST_FUZZ(0x00712864, 100, fuzz_record_2160);
GUEST_FUZZ(0x0020bf50, 100, fuzz_record_2160);

// Whether the halfword is 0xfc or more.
bool halfword_is_fc_or_more(const u16 &value) {
    return value >= NUMBER_LIMIT_FC;
}
GUEST_EXPORT(0x00718378, halfword_is_fc_or_more);
GUEST_FUZZ(0x00718378, 100, [](guest::Fuzz &f) {
    auto value = f.object<u16>();
    *value = f.pick<u16>({0, NUMBER_LIMIT_FC - 1, NUMBER_LIMIT_FC, NUMBER_LIMIT_FC + 1, u16(f.number())});
    f.arguments(value);
});

// The address of the entry (152 bytes each) the holder's index names in the list its owner's table has, after the offset at 0x16
// of the table.
gptr<u8> entry_of_table_owner(EntryTableHolder &holder) {
    gptr<EntryTable> table = holder.owner->table;
    return table.cast<u8>() + table->entries_offset + holder.index * ENTRY_STRIDE_152;
}
GUEST_EXPORT(0x00754a9c, entry_of_table_owner);
GUEST_FUZZ(0x00754a9c, 100, [](guest::Fuzz &f) {
    auto holder = f.object<EntryTableHolder>();
    auto owner = f.object<TableOwner>();
    auto table = f.allocate(FUZZ_TABLE_BYTES).cast<EntryTable>();
    table->entries_offset = u16(f.below(FUZZ_LIST_BYTES));
    owner->table = table;
    holder->owner = owner;
    holder->index = f.below(5);
    f.arguments(holder);
});

// The catalog value of the nth catalog item (-1 for the ones past the last).
s32 catalog_value_of_index(u32 owner, u32 index) {  // (the owner is not used)
    return index < CATALOG_ITEM_COUNT ? s32(index + CATALOG_FIRST_VALUE) : NO_VALUE;
}
GUEST_EXPORT(0x0070ed50, catalog_value_of_index);
GUEST_FUZZ(0x0070ed50, 100, [](guest::Fuzz &f) {
    f.arguments(f.number(), f.pick<u32>({0, 1, CATALOG_ITEM_COUNT - 1, CATALOG_ITEM_COUNT, f.below(FUZZ_RANGE), f.number()}));
});
