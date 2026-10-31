// Small helpers of objects whose types are not known yet, found in several areas: lists searched for a free entry, flags of
// the global bytes, and little tables.
#include "core/fuzz_helpers.hpp"
#include "graphics/hemisphere_light.hpp"
#include "guest/guest.hpp"
#include "item/item.hpp"

using guest::gptr;

namespace {

constexpr u32 FUZZ_PAD = 0x1000;
constexpr u32 ENTRY_STRIDE_280 = 0x280;
constexpr u32 FREE_SEARCH_10 = 10;
constexpr u32 FREE_SEARCH_80 = 0x50;
constexpr u32 BYTE_270_LOW_BITS = 7;
constexpr u32 TABLE_E4EC_COUNT = 10;
constexpr u32 GRID_COLUMNS = 0x70;
constexpr u32 GRID_ROWS = 0x60;
constexpr u32 WORD_BITS = 32;
constexpr u32 SLOTS_9 = 9;
constexpr u32 FLOAT_MANTISSA_ABOVE_SIGN = 0xff000000;
constexpr u32 FLOAT_CLASS_FRACTION = 4;
constexpr u32 FLOAT_CLASS_EXPONENT = 1;
constexpr u32 FLOAT_CLASS_ALL_ONES = 2;
constexpr u32 FLOAT_CLASS_ONLY_EXPONENT = 5;
constexpr u32 EXPONENT_SHIFT = 24;
constexpr u32 FRACTION_SHIFT = 8;
constexpr u8 FLAGS_B_BIT_5 = 1 << 5;
constexpr u8 FLAGS_A_BIT_4 = 1 << 4;
constexpr u8 FLAGS_A_BIT_3 = 1 << 3;
constexpr u32 ITEM_NUMBERS[] = {0x3e, 0x43, 0x4d, 0x48, 0x52};  // item numbers of one kind (which is not known yet)
constexpr u32 NUMBER_MASK = 0x7fff;

struct EntryWithByte270 {
    u8 unknown_000[0x270];
    u8 flags;
    u8 unknown_271[ENTRY_STRIDE_280 - 0x271];
};
GUEST_OFFSET(EntryWithByte270, flags, 0x270);
GUEST_SIZE(EntryWithByte270, ENTRY_STRIDE_280);

struct Float3List {
    u8 unknown_00[8];
    Float3 vectors[10];
    u32 count;
};
GUEST_OFFSET(Float3List, vectors, 8);
GUEST_OFFSET(Float3List, count, 0x80);

struct PositionStore {
    u8 unknown_00[0x84c];
    float pair[2];
};
GUEST_OFFSET(PositionStore, pair, 0x84c);

struct BitGrid {
    u8 unknown_00[4];
    u32 words[GRID_COLUMNS * GRID_ROWS / WORD_BITS];
};
GUEST_OFFSET(BitGrid, words, 4);

struct SlotTable {
    u8 unknown_00[0x14];
    gptr<struct SlotInfo> slots[SLOTS_9];
    u32 keys[SLOTS_9];
};
struct SlotInfo {
    u8 unknown_00[0x2c];
    u8 busy;
};
GUEST_OFFSET(SlotInfo, busy, 0x2c);

struct ListLink {
    u8 unknown_00[8];
    gptr<ListLink> next;
    gptr<struct ListEntry> entry;
};
GUEST_OFFSET(ListLink, next, 8);
GUEST_OFFSET(ListLink, entry, 0xc);
struct ListEntry {
    u8 unknown_00[0x24];
    u8 value;
};
GUEST_OFFSET(ListEntry, value, 0x24);
struct ListHolder {
    u8 unknown_00[4];
    gptr<ListLink> first;
};
GUEST_OFFSET(ListHolder, first, 4);
inline guest::global<ListHolder, 0x0098c4fc> request_list;

struct Entry24 {
    u8 unknown_00[0x24];
    u8 state;
    u8 unknown_25[0x3c - 0x25];
    u32 word_3c;
    u8 byte_40;
};
GUEST_OFFSET(Entry24, state, 0x24);
GUEST_OFFSET(Entry24, word_3c, 0x3c);
GUEST_OFFSET(Entry24, byte_40, 0x40);

struct Byte75 {
    u8 unknown_00[0x75];
    u8 bits;
};
GUEST_OFFSET(Byte75, bits, 0x75);

inline guest::global<u8[TABLE_E4EC_COUNT], 0x0088e4ec> table_e4ec;
inline guest::global<Float3, 0x00ae5658> zero_vector;
inline guest::global<u8, 0x00aaef14> control_flags_b;
inline guest::global<u8, 0x00aadad4> control_flags_a;

inline constexpr guest::Function<0x0056a3cc, void(Float3 &destination, const Float3 &source)> copy_float3;

}  // namespace

// The index of the first entry (0x280 bytes each, ten of them) whose byte 0x270 has its three low bits clear; -1 for none.
s32 first_clear_entry_of_10(gptr<EntryWithByte270> entries) {
    for (u32 i = 0; i < FREE_SEARCH_10; i++) {
        if ((entries[i].flags & BYTE_270_LOW_BITS) == 0) {
            return s32(i);
        }
    }
    return -1;
}
GUEST_EXPORT(0x0071dc9c, first_clear_entry_of_10);

// The same over 80 entries.
s32 first_clear_entry_of_80(gptr<EntryWithByte270> entries) {
    for (u32 i = 0; i < FREE_SEARCH_80; i++) {
        if ((entries[i].flags & BYTE_270_LOW_BITS) == 0) {
            return s32(i);
        }
    }
    return -1;
}
GUEST_EXPORT(0x007105d4, first_clear_entry_of_80);

static void fuzz_entries(guest::Fuzz &f, u32 count) {
    f.allocate(FUZZ_PAD);
    auto entries = f.allocate(count * sizeof(EntryWithByte270)).cast<EntryWithByte270>();
    for (u32 i = 0; i < count; i++) {
        entries[i].flags = f.below(8) == 0 ? u8(f.number() & ~BYTE_270_LOW_BITS) : u8(f.number() | 1);
    }
    f.arguments(entries);
}
GUEST_FUZZ(0x0071dc9c, 100, [](guest::Fuzz &f) { fuzz_entries(f, FREE_SEARCH_10); });
GUEST_FUZZ(0x007105d4, 100, [](guest::Fuzz &f) { fuzz_entries(f, FREE_SEARCH_80); });

// Copies the nth vector of the list to the destination when the list has more than n of them, else the zero vector.
void list_vector_or_zero(Float3 &destination, Float3List &list, u32 index) {
    if (list.count > index) {
        copy_float3(destination, list.vectors[index]);
        return;
    }
    destination = *zero_vector;
}
GUEST_EXPORT(0x00765fa8, list_vector_or_zero);
GUEST_FUZZ(0x00765fa8, 100, [](guest::Fuzz &f) {
    auto list = f.object<Float3List>();
    list->count = f.below(12);
    for (Float3 &vector : list->vectors) {
        for (float &value : vector.v) {
            value = f.real();
        }
    }
    f.arguments(f.object<Float3>(), list, f.below(12));
});

// Whether the value is one of the ten bytes of the table at 0x0088e4ec.
bool value_is_in_table_e4ec(u32 value) {
    for (u8 entry : *table_e4ec) {
        if (entry == value) {
            return true;
        }
    }
    return false;
}
GUEST_EXPORT(0x006cac2c, value_is_in_table_e4ec);
GUEST_FUZZ(0x006cac2c, 100, [](guest::Fuzz &f) {
    f.arguments(f.pick<u32>({(*table_e4ec)[f.below(TABLE_E4EC_COUNT)], f.below(256), f.number()}));
});

// Whether one of the requests in the list at 0x0098c4fc has the value in the byte at 0x24 of its entry.
bool request_list_has_value(u32 value) {
    for (gptr<ListLink> link = request_list->first; link != nullptr; link = link->next) {
        if (link->entry->value == value) {
            return true;
        }
    }
    return false;
}
GUEST_EXPORT(0x006d1f38, request_list_has_value);
GUEST_FUZZ(0x006d1f38, 100, [](guest::Fuzz &f) { f.arguments(f.below(256)); });

// Clears the bit of the cell (x, z) in the grid of 0x70 by 0x60 bits; cells outside it do nothing.
void clear_grid_bit(BitGrid &grid, s32 x, s32 z) {
    if (x < 0 || z < 0 || u32(x) >= GRID_COLUMNS || u32(z) >= GRID_ROWS) {
        return;
    }
    u32 bit = u32(x) + u32(z) * GRID_COLUMNS;
    grid.words[bit / WORD_BITS] &= ~(1u << (bit % WORD_BITS));
}
GUEST_EXPORT(0x005a2708, clear_grid_bit);
GUEST_FUZZ(0x005a2708, 100, [](guest::Fuzz &f) {
    f.allocate(FUZZ_PAD);
    auto grid = f.allocate(sizeof(BitGrid)).cast<BitGrid>();
    f.arguments(grid, f.pick<s32>({0, 5, GRID_COLUMNS - 1, GRID_COLUMNS, -1, s32(f.number())}),
                f.pick<s32>({0, 5, GRID_ROWS - 1, GRID_ROWS, -1, s32(f.number())}));
});

// The slot's object when its key is the given one and it is not busy; null otherwise (and for numbers outside 0-8).
gptr<SlotInfo> free_slot_with_key(SlotTable &table, s32 index, u32 key) {
    if (index < 0 || u32(index) >= SLOTS_9 || table.keys[index] != key) {
        return nullptr;
    }
    gptr<SlotInfo> slot = table.slots[index];
    return slot->busy == 0 ? slot : gptr<SlotInfo>(nullptr);
}
GUEST_EXPORT(0x0071cc4c, free_slot_with_key);
GUEST_FUZZ(0x0071cc4c, 100, [](guest::Fuzz &f) {
    auto table = f.object<SlotTable>();
    for (u32 i = 0; i < SLOTS_9; i++) {
        table->slots[i] = f.object<SlotInfo>();
        table->keys[i] = f.below(3);
    }
    f.arguments(table, f.pick<s32>({0, 3, 8, 9, -1}), f.below(3));
});

// Whether the item's number (the flag in the id left out) is one of five.
bool item_number_in_set_76af88(const Item &item) {
    u32 number = item.id & NUMBER_MASK;
    for (u32 candidate : ITEM_NUMBERS) {
        if (number == candidate) {
            return true;
        }
    }
    return false;
}
GUEST_EXPORT(0x0076af88, item_number_in_set_76af88);
GUEST_FUZZ(0x0076af88, 100, [](guest::Fuzz &f) {
    auto item = f.object<Item>();
    item->id = u16(f.pick<u32>({ITEM_NUMBERS[f.below(5)], ITEM_NUMBERS[f.below(5)] | Item::ID_FLAG, ITEM_NUMBERS[0] + 1, f.number()}));
    f.arguments(item);
});

// A class of the bit pattern of a float: 4 when the fraction is not zero, 1 when the exponent is, 2 when the exponent is
// all ones; 5 when only the exponent is set.
u32 float_class(u32 bits) {
    u32 without_sign = bits << 1;
    u32 result = (without_sign << FRACTION_SHIFT) != 0 ? FLOAT_CLASS_FRACTION : 0;
    if ((without_sign >> EXPONENT_SHIFT) != 0) {
        result |= FLOAT_CLASS_EXPONENT;
    }
    if ((FLOAT_MANTISSA_ABOVE_SIGN & ~without_sign) == 0) {
        result |= FLOAT_CLASS_ALL_ONES;
    }
    return result == FLOAT_CLASS_EXPONENT ? FLOAT_CLASS_ONLY_EXPONENT : result;
}
GUEST_EXPORT(0x007796d8, float_class);
GUEST_FUZZ(0x007796d8, 200, [](guest::Fuzz &f) {
    f.arguments(f.pick<u32>({0, 0x80000000u, 0x3f800000u, 0x7f800000u, 0x7fc00000u, 0x00000001u, 0xff800000u, f.number()}));
});

// Puts the entry in its starting state: the state 0xa5 (none), no word, no byte.
void reset_entry_24(Entry24 &entry) {
    entry.state = 0xa5;  // (the "none" state)
    entry.word_3c = 0;
    entry.byte_40 = 0;
}
GUEST_EXPORT(0x005b5068, reset_entry_24);
GUEST_FUZZ(0x005b5068, 100, [](guest::Fuzz &f) {
    f.allocate(FUZZ_PAD);
    f.arguments(f.allocate(sizeof(Entry24)).cast<Entry24>());
});

// Sets the bit (0-5) of the byte at 0x75.
void set_bit_75(Byte75 &object, u32 bit) {
    if (bit < 6) {
        object.bits = u8(object.bits | (1u << bit));  // (six bits)
    }
}
GUEST_EXPORT(0x005be180, set_bit_75);
GUEST_FUZZ(0x005be180, 100, [](guest::Fuzz &f) {
    f.allocate(FUZZ_PAD);
    f.arguments(f.allocate(sizeof(Byte75)).cast<Byte75>(), f.pick<u32>({f.below(9), 0xffffffffu}));
});

// Bits of the global flag bytes.
bool control_flag_b_bit_5() {
    return (*control_flags_b & FLAGS_B_BIT_5) != 0;
}
GUEST_EXPORT(0x005c1774, control_flag_b_bit_5);
GUEST_FUZZ(0x005c1774, 50, [](guest::Fuzz &f) { f.arguments(); });

bool control_flag_a_bit_4() {
    return (*control_flags_a & FLAGS_A_BIT_4) != 0;
}
GUEST_EXPORT(0x005c1d64, control_flag_a_bit_4);
GUEST_FUZZ(0x005c1d64, 50, [](guest::Fuzz &f) { f.arguments(); });

bool control_flag_a_bit_3() {
    return (*control_flags_a & FLAGS_A_BIT_3) != 0;
}
GUEST_EXPORT(0x005c6c34, control_flag_a_bit_3);
GUEST_FUZZ(0x005c6c34, 50, [](guest::Fuzz &f) { f.arguments(); });

// Sets the pair of floats at 0x84c to (0, 1).
void init_position_pair(PositionStore &store) {
    store.pair[0] = 0.0f;
    store.pair[1] = 1.0f;
}
GUEST_EXPORT(0x0065393c, init_position_pair);
GUEST_FUZZ(0x0065393c, 100, [](guest::Fuzz &f) {
    f.allocate(FUZZ_PAD);
    f.arguments(f.allocate(sizeof(PositionStore)).cast<PositionStore>());
});

namespace {

constexpr u32 SET_BYTES_COUNT = 14;  // 0x6c bits
constexpr u32 CLEAR_BIT_COUNT = 0x6c;
constexpr u32 BYTE_28_BIT_COUNT = 6;
constexpr u32 SMALL_BIT_COUNT_6 = 6;
constexpr u32 LARGE_RECORD_WORDS = 0xe5;
constexpr u32 SMALL_RECORD_WORDS = 0xdb;
constexpr u32 LARGE_RECORDS_OFFSET = 0x4410;
constexpr u32 SMALL_RECORDS_OFFSET = 0x890;
constexpr u32 SELF_RELATIVE_ENTRY_OFFSET = 0x28;
constexpr u32 SELF_RELATIVE_ENTRY_SHIFT = 4;

struct Flags09 {
    u8 unknown_00[9];
    u8 flags;
};
GUEST_OFFSET(Flags09, flags, 9);

struct BitBytes1A {
    u8 unknown_00[0x1a];
    u8 bytes[SET_BYTES_COUNT];
};
GUEST_OFFSET(BitBytes1A, bytes, 0x1a);

struct Byte28Owner {
    u8 unknown_00[0x28];
    u8 bits;
};
GUEST_OFFSET(Byte28Owner, bits, 0x28);

struct RecordSizeOwner {
    u8 unknown_0000[0x8431];
    u8 large_flag;
};
GUEST_OFFSET(RecordSizeOwner, large_flag, 0x8431);

}  // namespace

// Whether the bit (0-5) of the flag byte at 9 is set (false for other numbers).
bool flags_09_bit_is_set(Flags09 &object, u32 bit) {
    return bit < SMALL_BIT_COUNT_6 && (object.flags & (1u << bit)) != 0;
}
GUEST_EXPORT(0x0075f1c4, flags_09_bit_is_set);
GUEST_FUZZ(0x0075f1c4, 100, [](guest::Fuzz &f) {
    f.allocate(FUZZ_PAD);
    auto object = f.allocate(sizeof(Flags09)).cast<Flags09>();
    object->flags = u8(f.number());
    f.arguments(object, f.pick<u32>({f.below(SMALL_BIT_COUNT_6 + 3), 0xffffffffu}));
});

// Clears a bit (0-0x6b) of the bytes from 0x1a of the object; other numbers do nothing.
void clear_bit_from_1a(BitBytes1A &object, u32 bit) {
    if (bit < CLEAR_BIT_COUNT) {
        object.bytes[bit / 8] = u8(object.bytes[bit / 8] & ~(1u << (bit % 8)));
    }
}
GUEST_EXPORT(0x0020be80, clear_bit_from_1a);
GUEST_FUZZ(0x0020be80, 100, [](guest::Fuzz &f) {
    f.allocate(FUZZ_PAD);
    f.arguments(f.allocate(sizeof(BitBytes1A)).cast<BitBytes1A>(), f.pick<u32>({f.below(CLEAR_BIT_COUNT + 3), 0xffffffffu}));
});

// Sets the bit (0-5) of the byte at 0x28.
void set_bit_28(Byte28Owner &owner, u32 bit) {
    if (bit < BYTE_28_BIT_COUNT) {
        owner.bits = u8(owner.bits | (1u << bit));
    }
}
GUEST_EXPORT(0x0020bea4, set_bit_28);
GUEST_FUZZ(0x0020bea4, 100, [](guest::Fuzz &f) {
    f.allocate(FUZZ_PAD);
    f.arguments(f.allocate(sizeof(Byte28Owner)).cast<Byte28Owner>(), f.pick<u32>({f.below(BYTE_28_BIT_COUNT + 3), 0xffffffffu}));
});

// The address of the record (words of 4 bytes: 0xe5 of them from 0x4410 when the byte at 0x8431 is set, 0xdb from 0x890 otherwise).
gptr<u8> record_by_size_flag(gptr<RecordSizeOwner> owner, u32 index) {
    bool large = owner->large_flag != 0;
    u32 words = large ? LARGE_RECORD_WORDS : SMALL_RECORD_WORDS;
    return owner.cast<u8>() + index * words * sizeof(u32) + (large ? LARGE_RECORDS_OFFSET : SMALL_RECORDS_OFFSET);
}
GUEST_EXPORT(0x0026fac4, record_by_size_flag);
GUEST_EXPORT(0x00718d08, record_by_size_flag);
static void fuzz_26fac4(guest::Fuzz &f) {
    f.allocate(FUZZ_PAD);
    auto owner = f.allocate(sizeof(RecordSizeOwner)).cast<RecordSizeOwner>();
    owner->large_flag = f.pick<u8>({0, 1, 5});
    f.arguments(owner, f.below(6));
}
GUEST_FUZZ(0x0026fac4, 100, fuzz_26fac4);
GUEST_FUZZ(0x00718d08, 100, fuzz_26fac4);

namespace {

constexpr u32 PLAYER_RECORD_COUNT = 0x10;
constexpr u32 PLAYER_RECORD_SIZE = 0xf2;
constexpr u32 PLAYER_RECORDS_OFFSET = 0x8ee;
constexpr u32 RECORD_1AC_COUNT = 0xf;
constexpr u32 RECORD_1AC_SIZE = 0x1ac;
constexpr u32 RECORD_280_COUNT = 4;
constexpr u32 RECORD_280_OFFSET = 0x1810;
constexpr u32 FLAG_WORD_MASK = 7;

struct LinkedNode {
    u8 unknown_00[4];
    gptr<LinkedNode> previous;
    gptr<LinkedNode> next;
};
GUEST_OFFSET(LinkedNode, previous, 4);
GUEST_OFFSET(LinkedNode, next, 8);
struct LinkedEnds {
    u8 unknown_00[4];
    gptr<LinkedNode> first;
    gptr<LinkedNode> last;
};
GUEST_OFFSET(LinkedEnds, first, 4);
GUEST_OFFSET(LinkedEnds, last, 8);

struct FlagWordHolder {
    u8 unknown_00[0x18];
    u32 word;
};
GUEST_OFFSET(FlagWordHolder, word, 0x18);
inline guest::global<FlagWordHolder, 0x00974ad8> flag_word_holder;

}  // namespace

// The address of the record of a villager's players (0xf2 bytes each, sixteen, from 0x8ee); null for numbers past the last
// (Thumb entry).
gptr<u8> villager_player_record_address(gptr<u8> base, u32 index) {
    return index < PLAYER_RECORD_COUNT ? base + index * PLAYER_RECORD_SIZE + PLAYER_RECORDS_OFFSET : gptr<u8>(nullptr);
}
GUEST_EXPORT(0x001198d1, villager_player_record_address);
GUEST_EXPORT(0x001126fd, villager_player_record_address);
static void fuzz_1198d1(guest::Fuzz &f) {
    f.arguments(f.allocate(FUZZ_PAD).cast<u8>(), f.pick<u32>({f.below(PLAYER_RECORD_COUNT + 3), 0xffffffffu}));
}
GUEST_FUZZ(0x001198d1, 100, fuzz_1198d1);
GUEST_FUZZ(0x001126fd, 100, fuzz_1198d1);

// The address of the record (0x1ac bytes each, fifteen of them); null for numbers past the last (Thumb entry).
gptr<u8> record_1ac_address(gptr<u8> base, u32 index) {
    return index < RECORD_1AC_COUNT ? base + index * RECORD_1AC_SIZE : gptr<u8>(nullptr);
}
GUEST_EXPORT(0x00108421, record_1ac_address);
GUEST_FUZZ(0x00108421, 100, [](guest::Fuzz &f) {
    f.arguments(f.allocate(FUZZ_PAD).cast<u8>(), f.pick<u32>({f.below(RECORD_1AC_COUNT + 3), 0xffffffffu}));
});

// The address of the record (0x280 bytes each, four of them, from 0x1810); null for numbers past the last (Thumb entry).
gptr<u8> record_280_address(gptr<u8> base, u32 index) {
    return index < RECORD_280_COUNT ? base + index * ENTRY_STRIDE_280 + RECORD_280_OFFSET : gptr<u8>(nullptr);
}
GUEST_EXPORT(0x0011a051, record_280_address);
GUEST_FUZZ(0x0011a051, 100, [](guest::Fuzz &f) {
    f.arguments(f.allocate(FUZZ_PAD).cast<u8>(), f.pick<u32>({f.below(RECORD_280_COUNT + 3), 0xffffffffu}));
});

// Whether the three low bits of the word at 0x18 of the object at 0x00974ad8 are clear.
bool flag_word_low_bits_clear() {
    return (flag_word_holder->word & FLAG_WORD_MASK) == 0;
}
GUEST_EXPORT(0x00124284, flag_word_low_bits_clear);
GUEST_FUZZ(0x00124284, 50, [](guest::Fuzz &f) { f.arguments(); });

// Whether the node is in the list that starts at the ends' first node (following the next links).
bool list_contains_node(LinkedEnds &ends, gptr<LinkedNode> node) {
    if (node == nullptr) {
        return false;
    }
    for (gptr<LinkedNode> current = ends.first; current != nullptr; current = current->next) {
        if (current == node) {
            return true;
        }
    }
    return false;
}
GUEST_EXPORT(0x00138920, list_contains_node);
GUEST_FUZZ(0x00138920, 100, [](guest::Fuzz &f) {
    auto ends = f.object<LinkedEnds>();
    auto first = f.object<LinkedNode>();
    auto second = f.object<LinkedNode>();
    first->next = second;
    second->next = gptr<LinkedNode>(0u);
    ends->first = first;
    f.arguments(ends, f.pick<gptr<LinkedNode>>({first, second, f.object<LinkedNode>(), gptr<LinkedNode>(0u)}));
});

// Takes the node out of the list the ends describe (the first and last nodes of the list are replaced when it was one of them).
void unlink_from_ends(LinkedEnds &ends, LinkedNode &node) {
    gptr<LinkedNode> self = guest::addr_of(node);
    gptr<LinkedNode> previous = node.previous;
    gptr<LinkedNode> next = node.next;
    if (previous == nullptr && next == nullptr) {
        if (ends.first == self && ends.last == self) {
            ends.first = nullptr;
            ends.last = nullptr;
        }
        return;
    }
    if (previous != nullptr) {
        previous->next = next;
    } else if (ends.first == self) {
        ends.first = next;
    }
    if (next != nullptr) {
        next->previous = previous;
    } else if (ends.last == self) {
        ends.last = previous;
    }
    node.previous = nullptr;
    node.next = nullptr;
}
GUEST_EXPORT(0x0013f000, unlink_from_ends);
GUEST_FUZZ(0x0013f000, 200, [](guest::Fuzz &f) {
    auto ends = f.object<LinkedEnds>();
    auto before = f.object<LinkedNode>();
    auto node = f.object<LinkedNode>();
    auto after = f.object<LinkedNode>();
    node->previous = f.below(3) != 0 ? before : gptr<LinkedNode>(0u);
    node->next = f.below(3) != 0 ? after : gptr<LinkedNode>(0u);
    ends->first = f.below(2) != 0 ? node.cast<LinkedNode>() : before;
    ends->last = f.below(2) != 0 ? node.cast<LinkedNode>() : after;
    f.arguments(ends, node);
});
