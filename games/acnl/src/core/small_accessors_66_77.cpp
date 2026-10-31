// Small accessors in 0x00650000-0x00780000 of objects whose types are not known yet.
#include "core/word_pair.hpp"
#include "guest/guest.hpp"
#include "item/furniture_ref.hpp"
#include "item/item.hpp"
#include "save/player.hpp"

using guest::gptr;

gptr<SavePlayer> player_of_slot_index(u32 index);

namespace {

constexpr u32 ENTRY_SHIFT_16 = 4;
constexpr u32 LIST_COUNT_12 = 0x12;
constexpr u32 RECORD_4_COUNT = 4;
constexpr u32 RECORD_4_SIZE = 0x173 * 8;
constexpr u32 RECORD_4_OFFSET = 0x55c;
constexpr u32 TILE_COLUMNS = 7;
constexpr u32 TILE_ROWS = 6;
constexpr s32 HALF_LIMIT_384 = 0x384;
constexpr s32 HALF_LIMIT_270E = 0x270e;
constexpr u32 NUMBER_9D = 0x9d;
constexpr u32 RULE_COUNT = ItemData::RULE_LIMIT;
constexpr u8 KIND_BYTE_FIRST = 0x14, KIND_BYTE_LAST = 0x16;  // the kinds that get the larger size (what they are is not known yet)
constexpr u8 BYTE_8_HIGH_KIND = 6;
constexpr u8 BYTE_8_LOW_KIND = 4;
constexpr u32 SMALL_BIT_COUNT = 5;
constexpr s32 AGE_WINDOW = 10;
constexpr u32 NUMBER_MASK = 0x7fff;
constexpr u16 KIND_BITS_MASK = 0x6000;
constexpr u16 KIND_BITS_2 = 0x4000;
constexpr u16 KIND_BITS_1 = 0x2000;
constexpr u32 POINTER_VALUE_FILL = 0x01010101;
constexpr u32 BYTE_MASK = 0xff;
constexpr u32 LIST_CAPACITY = 16;

// An entry table: its entries start at the offset kept at 0x16 of it.
struct EntryTableHeader {
    u8 unknown_00[0x16];
    u16 entries_offset;
};
GUEST_OFFSET(EntryTableHeader, entries_offset, 0x16);

struct EntrySource {
    u8 unknown_00[0x34];
    u32 has_entries;
    u8 unknown_38[8];
    gptr<EntryTableHeader> table;
};
GUEST_OFFSET(EntrySource, has_entries, 0x34);
GUEST_OFFSET(EntrySource, table, 0x40);

struct EntryRef {
    u8 unknown_00[4];
    gptr<EntrySource> source;
    u32 index;
};
GUEST_OFFSET(EntryRef, source, 4);

struct ListAtC14 {
    u8 unknown_00[0xc14];
    u32 values[LIST_COUNT_12];
};
GUEST_OFFSET(ListAtC14, values, 0xc14);

struct FlagsRecord {
    u8 unknown_00[4];
    u8 flags;
};
GUEST_OFFSET(FlagsRecord, flags, 4);

struct PointerOwner {
    u8 unknown_000[0x5f0];
    gptr<FurnitureRef> furniture;
    gptr<FlagsRecord> record;
};
GUEST_OFFSET(PointerOwner, furniture, 0x5f0);
GUEST_OFFSET(PointerOwner, record, 0x5f4);

struct TileGrid {
    u8 unknown_00[4];
    u16 tiles[TILE_ROWS][TILE_COLUMNS];
};
GUEST_OFFSET(TileGrid, tiles, 4);

struct PairHolder {
    u8 unknown_00[0x74];
    WordPair pair;
};
GUEST_OFFSET(PairHolder, pair, 0x74);
inline guest::global<gptr<PairHolder>, 0x00974a64> pair_holder;
inline guest::global<WordPair, 0x00953678> default_pair;

struct EmptyCheck {
    u8 unknown_00[0x18];
    u32 word_18;
    u8 unknown_1c[0x2c - 0x1c];
    u8 byte_2c;
};
GUEST_OFFSET(EmptyCheck, word_18, 0x18);
GUEST_OFFSET(EmptyCheck, byte_2c, 0x2c);

struct FlagWord28 {
    u8 unknown_00[0x28];
    u32 flags;
};
GUEST_OFFSET(FlagWord28, flags, 0x28);

struct Byte14 {
    u8 unknown_00[0x14];
    u8 value;
};
GUEST_OFFSET(Byte14, value, 0x14);

struct Reset1C {
    u8 byte_00;
    u8 unknown_01[3];
    float floats[4];
    u16 half_14;
    u16 half_16;
    u8 byte_18;
    u8 unknown_19[3];
};
GUEST_OFFSET(Reset1C, floats, 4);
GUEST_OFFSET(Reset1C, half_14, 0x14);
GUEST_SIZE(Reset1C, 0x1c);

struct LinkedWords {
    u32 value;
    gptr<u8> link;
};

struct AgeHolder {
    u8 unknown_0000[0x3ca0];
    s32 age;
};
GUEST_OFFSET(AgeHolder, age, 0x3ca0);

struct Byte8 {
    u8 unknown_00[8];
    u8 value;
};
GUEST_OFFSET(Byte8, value, 8);

struct Bits74 {
    u8 unknown_00[0x74];
    u8 bits;
};
GUEST_OFFSET(Bits74, bits, 0x74);

struct TenBytes {
    u8 bytes[10];
};
GUEST_SIZE(TenBytes, 10);

struct PushList {
    u8 unknown_00[4];
    u32 count;
    u32 values[LIST_CAPACITY];
};
GUEST_OFFSET(PushList, count, 4);
GUEST_OFFSET(PushList, values, 8);

struct FirstPointerObject {
    u8 unknown_00[0x1c];
    u32 value;
};

inline guest::global<u32[RULE_COUNT], 0x00877eb4> rule_values;

struct RuleItemData {
    u8 unknown_00[0xd];
    u8 rule;
};
GUEST_OFFSET(RuleItemData, rule, 0xd);

struct PairOfPointers {
    gptr<u32> first;
    gptr<u32> second;
};

struct LinkOwner {
    u32 value;
    gptr<u32> link;
};

}  // namespace

// The entry (16 bytes each) the reference names in the entry table of its source; null when the source has no entries.
gptr<u8> entry_of_reference(EntryRef &reference) {
    gptr<EntrySource> source = reference.source;
    if (source->has_entries == 0) {
        return nullptr;
    }
    gptr<EntryTableHeader> table = source->table;
    return table.cast<u8>() + table->entries_offset + (reference.index << ENTRY_SHIFT_16);
}
GUEST_EXPORT(0x00754a70, entry_of_reference);

// The value at the index in the list at 0xc14 of the object (the first for indexes past the 18).
u32 list_value_c14(ListAtC14 &object, u32 index) {
    return object.values[index < LIST_COUNT_12 ? index : 0];
}
GUEST_EXPORT(0x00766f04, list_value_c14);

// The address of the record (0x173 * 8 bytes each, four of them, from 0x55c); the first for numbers past the last.
gptr<u8> record_173_address(gptr<u8> base, u32 index) {
    return base + RECORD_4_OFFSET + (index < RECORD_4_COUNT ? index * RECORD_4_SIZE : 0);
}
GUEST_EXPORT(0x0076ce3c, record_173_address);

// Whether bit 2 of the byte at 4 of the record the owner points to (at 0x5f4) is set (false without a record).
bool record_flag_bit_2(PointerOwner &owner) {
    return owner.record != nullptr && (owner.record->flags & (1u << 2)) != 0;  // (bit 2: meaning not known yet)
}
GUEST_EXPORT(0x00750894, record_flag_bit_2);

// Whether the furniture the owner points to (at 0x5f0) has a class 4 or 5 byte 0x19 (false without furniture).
bool furniture_has_class_4_or_5(PointerOwner &owner) {
    return owner.furniture != nullptr && owner.furniture->has_byte_19_class_4_or_5();
}
GUEST_EXPORT(0x007500b4, furniture_has_class_4_or_5);

// The address of the tile (2 bytes each, rows of 7, six rows, from 4) at (column, row); the first for positions outside.
gptr<u16> tile_address(TileGrid &grid, u32 column, u32 row) {
    if (column >= TILE_COLUMNS || row >= TILE_ROWS) {
        return guest::addr_of(grid).cast<u16>() + 2;  // (the first tile is at 4)
    }
    return guest::addr_of(grid.tiles[row][column]);
}
GUEST_EXPORT(0x0075db98, tile_address);
GUEST_EXPORT(0x00613734, tile_address);

// Stores the value in the halfword when it is below 0x384 (signed); whether it was stored.
bool store_half_below_384(u16 &half, s32 value) {
    if (value >= HALF_LIMIT_384) {
        return false;
    }
    half = u16(value);
    return true;
}
GUEST_EXPORT(0x005b0640, store_half_below_384);

// The same for the halfword at 2 and the limit 0x270e (inclusive).
bool store_half_at_2_up_to_270e(gptr<u16> base, s32 value) {
    if (value > HALF_LIMIT_270E) {
        return false;
    }
    base[1] = u16(value);
    return true;
}
GUEST_EXPORT(0x005b060c, store_half_at_2_up_to_270e);

// Copies the pair of words (from the holder's pair when there is a holder, else the default one) to the destination.
void copy_current_pair(WordPair &destination) {
    destination = *pair_holder != nullptr ? (*pair_holder)->pair : *default_pair;
}
GUEST_EXPORT(0x00747288, copy_current_pair);

// Whether the first word of the empty check is 0 and its byte at 0x2c is 0.
bool empty_check_is_clear(EmptyCheck &object) {
    return object.word_18 == 0 && object.byte_2c == 0;
}
GUEST_EXPORT(0x0075cd14, empty_check_is_clear);

// Fills eight bytes with the byte.
void fill_eight_bytes(gptr<u32> destination, u32 value) {
    u32 filled = (value & BYTE_MASK) * POINTER_VALUE_FILL;
    destination[0] = filled;
    destination[1] = filled;
}
GUEST_EXPORT(0x007796a0, fill_eight_bytes);
GUEST_EXPORT(0x402fdfd8, fill_eight_bytes);

// Sets or clears bit 0 of the word at 0x28.
void set_flag_bit_0_at_28(FlagWord28 &object, bool value) {
    object.flags = value ? object.flags | 1u : object.flags & ~1u;
}
GUEST_EXPORT(0x005b0450, set_flag_bit_0_at_28);

// Whether the byte at 0x14 is below 8.
bool byte_14_below_8(Byte14 &object) {
    return object.value < 8;  // (what 8 is: not known yet)
}
GUEST_EXPORT(0x0070eebc, byte_14_below_8);

// Puts the record in its starting state (a byte, four floats, two halfwords and a byte, all zero).
void reset_record_1c(Reset1C &record) {
    record.byte_00 = 0;
    for (float &value : record.floats) {
        value = 0.0f;
    }
    record.half_14 = 0;
    record.half_16 = 0;
    record.byte_18 = 0;
}
GUEST_EXPORT(0x006a9b3c, reset_record_1c);

// Whether both objects have a link (word at 4) and the same first word.
bool linked_values_match(LinkOwner &first, LinkOwner &second) {
    return first.link != nullptr && second.link != nullptr && first.value == second.value;
}
GUEST_EXPORT(0x0070d83c, linked_values_match);

// Whether the number is from the age at 0x3ca0 of the holder up to nine more.
bool within_age_window(AgeHolder &holder, s32 value) {
    s32 age = holder.age;
    return age <= value && u32(age + AGE_WINDOW) > u32(value);
}
GUEST_EXPORT(0x0071ecc4, within_age_window);

// The value for the availability rule of an item's data (the one for rule 0 for rules past the last).
u32 rule_value(const RuleItemData &data) {
    u32 rule = data.rule;
    return (*rule_values)[rule < RULE_COUNT ? rule : 0];
}
GUEST_EXPORT(0x007485b4, rule_value);

// 6 for the kinds 0x14-0x16 of the byte at 8, 4 for the others.
u32 size_for_kind_byte_8(Byte8 &object) {
    return object.value >= KIND_BYTE_FIRST && object.value <= KIND_BYTE_LAST ? BYTE_8_HIGH_KIND : BYTE_8_LOW_KIND;
}
GUEST_EXPORT(0x00757004, size_for_kind_byte_8);

// Whether the bit (0-4) of the byte at 0x74 is set.
bool small_bit_74_is_set(Bits74 &object, u32 bit) {
    return bit < SMALL_BIT_COUNT && (object.bits & (1u << bit)) != 0;
}
GUEST_EXPORT(0x00757a68, small_bit_74_is_set);

// Copies ten bytes.
void copy_ten_bytes(TenBytes &destination, const TenBytes &source) {
    destination = source;
}
GUEST_EXPORT(0x007795d0, copy_ten_bytes);
GUEST_EXPORT(0x401b81b4, copy_ten_bytes);

// The pockets of the player of the slot (null without a player).
gptr<Pockets> pockets_of_slot_player(u32 slot) {
    gptr<SavePlayer> player = player_of_slot_index(slot);
    return player == nullptr ? gptr<Pockets>(nullptr) : guest::addr_of(player->pockets);
}
GUEST_EXPORT(0x00659738, pockets_of_slot_player);

// Turns an item of kind 2 (the kind bits 0x4000) into kind 1; whether it was one.
bool demote_kind_2_item(Item &item) {
    if ((item.id & KIND_BITS_MASK) != KIND_BITS_2) {
        return false;
    }
    item.id = u16((item.id & ~KIND_BITS_MASK) | KIND_BITS_1);
    return true;
}
GUEST_EXPORT(0x006baa64, demote_kind_2_item);

// Whether the value is 0xf or 0x10.
bool value_is_f_or_10(u32 value) {
    return value == 0xf || value == 0x10;  // (what they stand for is not known yet)
}
GUEST_EXPORT(0x006e4c44, value_is_f_or_10);

// Appends the value to the list (count at 4, values from 8).
void append_to_list(PushList &list, u32 value) {
    list.values[list.count] = value;
    list.count++;
}
GUEST_EXPORT(0x006f7e90, append_to_list);

// Whether the item's number (the flag in the id left out) is 0x9d.
bool item_number_is_9d(const Item &item) {
    return (item.id & NUMBER_MASK) == NUMBER_9D;
}
GUEST_EXPORT(0x00768c28, item_number_is_9d);
