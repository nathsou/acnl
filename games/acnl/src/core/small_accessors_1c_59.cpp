// Small accessors in 0x001c0000-0x005a0000 of objects whose types are not known yet: a linked list, packed bits, record
// addresses and a few flags.
#include "graphics/hemisphere_light.hpp"
#include "guest/guest.hpp"

using guest::gptr;

namespace {

constexpr u32 TOP_BITS_SHIFT = 30;
constexpr u32 TOP_BITS_MASK = 0xc0000000;
constexpr u32 NUMBER_NONE_FC = 0xfc;
constexpr u32 CLEAR_SIZE_32 = 0x32;
constexpr u32 FLAG_BITS_600 = 0x600;
constexpr u32 BYTE_MASK = 0xff;
constexpr u32 WORD_BITS = 32;
constexpr u32 SET_BIT_COUNT_6C = 0x6c;
constexpr u32 RECORD_9_SIZE = 18;
constexpr u32 PACK_FIELD_MASK_4 = 0xf;
constexpr u32 PACK_FIELD_MASK_8 = 0xff;
constexpr u32 TABLE_9B417C_COUNT = 0x40;

struct ChainNode {
    gptr<ChainNode> next;
    gptr<ChainNode> previous;
};
GUEST_SIZE(ChainNode, 8);

struct TopBitsOwner {
    u8 unknown_00[8];
    u32 word;
};
GUEST_OFFSET(TopBitsOwner, word, 8);

struct NumberPair {
    u16 number;
    u8 byte_02;
    u8 byte_03;
};
GUEST_SIZE(NumberPair, 4);

struct SlotWords {
    u8 unknown_00[0xcc];
    u32 value_cc;
    u8 unknown_d0[0xda - 0xd0];
    u8 flag_da;
};
GUEST_OFFSET(SlotWords, value_cc, 0xcc);
GUEST_OFFSET(SlotWords, flag_da, 0xda);
struct SlotWordsOwner {
    u8 unknown_000[0x108];
    gptr<SlotWords> words;
};
GUEST_OFFSET(SlotWordsOwner, words, 0x108);

struct Flags44 {
    u8 unknown_00[0x44];
    u32 flags;
};
GUEST_OFFSET(Flags44, flags, 0x44);

struct Flags2510 {
    u8 unknown_0000[0x2510];
    u32 flags;
};
GUEST_OFFSET(Flags2510, flags, 0x2510);

struct HalfwordMaskOwner {
    u8 unknown_00[0x14];
    gptr<u16> halfwords;
};
GUEST_OFFSET(HalfwordMaskOwner, halfwords, 0x14);

struct Fields5245BC {
    u32 word_00;
    u32 word_04;
    u8 byte_08;
    u8 byte_09;
    u8 byte_0a;
    u8 unknown_0b;
    u32 word_0c;
};
GUEST_SIZE(Fields5245BC, 16);

struct LinkedIndex {
    u8 unknown_00[0x44];
    gptr<u8> record;
};
GUEST_OFFSET(LinkedIndex, record, 0x44);
constexpr u32 RECORD_INDEX_OFFSET = 0xb0;

struct BitBytes {
    u8 unknown_00[0x1a];
    u8 bytes[SET_BIT_COUNT_6C / 8 + 1];
};
GUEST_OFFSET(BitBytes, bytes, 0x1a);

struct Row18 {
    u8 unknown_00[0xe];
    u8 byte_0e;
    u8 unknown_0f[3];
};
GUEST_SIZE(Row18, RECORD_9_SIZE);
inline guest::global<Row18[TABLE_9B417C_COUNT], 0x009b417c> rows_9b417c;

inline constexpr guest::Function<0x00301444, void(gptr<void> memory, u32 size)> clear_memory;

}  // namespace

// Takes the node out of its list: its neighbours point at each other, and it points at nothing.
void unlink_node(ChainNode &node) {
    if (node.next != nullptr) {
        node.next->previous = node.previous;
    }
    if (node.previous != nullptr) {
        node.previous->next = node.next;
    }
    node.previous = nullptr;
    node.next = nullptr;
}
GUEST_EXPORT(0x0053d284, unlink_node);

// Puts the node into the list right after the head (the head's next pointer is where the list starts).
void insert_node_after(ChainNode &head, ChainNode &node) {
    gptr<ChainNode> old_first = head.next;
    head.next = guest::addr_of(node);
    node.previous = guest::addr_of(head);
    node.next = old_first;
    if (old_first != nullptr) {
        old_first->previous = guest::addr_of(node);
    }
}
GUEST_EXPORT(0x0053d268, insert_node_after);
GUEST_EXPORT(0x00138560, insert_node_after);

// Replaces the two top bits of the word at 8 with the value (0-3).
void set_top_bits_8(TopBitsOwner &owner, u32 value) {
    owner.word = (owner.word & ~TOP_BITS_MASK) | (value << TOP_BITS_SHIFT);
}
GUEST_EXPORT(0x001cddec, set_top_bits_8);

// Clears the number (0xfc stands for none) and the two bytes after it.
void clear_number_pair(NumberPair &pair) {
    pair.number = NUMBER_NONE_FC;
    pair.byte_02 = 0;
    pair.byte_03 = 0;
}
GUEST_EXPORT(0x0024ea1c, clear_number_pair);

// Replaces the number with a new one when both are real numbers (below 0xfc).
void replace_number(NumberPair &pair, u32 number) {
    if (pair.number < NUMBER_NONE_FC && number < NUMBER_NONE_FC) {
        pair.number = u16(number);
    }
}
GUEST_EXPORT(0x0024e988, replace_number);

// Clears 0x32 bytes of the object and gives it back.
gptr<u8> clear_32_bytes(gptr<u8> object) {
    clear_memory(object, CLEAR_SIZE_32);
    return object;
}
GUEST_EXPORT(0x0029b870, clear_32_bytes);

// Stores the value in the word at 0xcc of the words the owner points to (at 0x108) and marks them with a flag at 0xda.
void store_slot_word(SlotWordsOwner &owner, u32 value) {
    owner.words->value_cc = value;
    owner.words->flag_da = 1;
}
GUEST_EXPORT(0x002686c0, store_slot_word);

// Whether the bit (0-31) of the flags word at 0x44 is set.
bool flag_bit_44(Flags44 &object, u32 bit) {
    u32 amount = bit & BYTE_MASK;  // (a register shift counts the low byte of the register; 32 and more shift everything out)
    return amount < WORD_BITS && (object.flags & (1u << amount)) != 0;
}
GUEST_EXPORT(0x00309958, flag_bit_44);

// Whether the word at 0x2510 has one of the bits 0x600.
bool flags_2510_has_600(Flags2510 &object) {
    return (object.flags & FLAG_BITS_600) != 0;
}
GUEST_EXPORT(0x0031118c, flags_2510_has_600);

// Whether the halfword at the index of the owner's list has one of the mask's bits (Thumb entry).
bool halfword_has_bits(HalfwordMaskOwner &owner, u32 mask, u32 index) {
    return (owner.halfwords[index] & mask) != 0;
}
GUEST_EXPORT(0x0031b759, halfword_has_bits);

// Puts the record in its starting state: all zero.
void clear_fields_5245bc(Fields5245BC &fields) {
    fields.word_00 = 0;
    fields.word_04 = 0;
    fields.byte_08 = 0;
    fields.byte_09 = 0;
    fields.byte_0a = 0;
    fields.word_0c = 0;
}
GUEST_EXPORT(0x005245bc, clear_fields_5245bc);

// The byte at 0xe of the row (18 bytes each) of the table at 0x009b417c.
u32 row_byte_0e(u32 index) {
    return (*rows_9b417c)[index].byte_0e;
}
GUEST_EXPORT(0x0059ec30, row_byte_0e);

// Whether the record the owner points to (at 0x44) has the number at 0xb0 (a missing record has -1).
bool record_number_is(LinkedIndex &owner, s32 number) {
    s32 current = owner.record != nullptr ? s32(*(owner.record + RECORD_INDEX_OFFSET).cast<u32>()) : -1;
    return current == number;
}
GUEST_EXPORT(0x002d5b78, record_number_is);
GUEST_EXPORT(0x002a9da4, record_number_is);
GUEST_EXPORT(0x002d5900, record_number_is);

// Packs five values: the first byte, the second above it, the third's low nibble at bit 16, the fourth and fifth at bit 20.
u32 pack_five(u32 first, u32 second, u32 third, u32 fourth, u32 fifth) {
    return (first & PACK_FIELD_MASK_8) | (second << 8) | ((third & PACK_FIELD_MASK_4) << 16) | (fourth << 20) | (fifth << 20);
}
GUEST_EXPORT(0x001f4360, pack_five);

// Sets a bit (0-0x6b) of the bytes from 0x1a of the object; other numbers do nothing.
void set_bit_from_1a(BitBytes &object, u32 bit) {
    if (bit < SET_BIT_COUNT_6C) {
        object.bytes[bit / 8] = u8(object.bytes[bit / 8] | (1u << (bit % 8)));
    }
}
GUEST_EXPORT(0x0020be5c, set_bit_from_1a);

namespace {

constexpr u16 NUMBER_START_1E = 0x1e;
constexpr u32 RECORD_FBB_COUNT = 3;
constexpr u32 RECORD_FBB_SIZE = 0xfbb * 0x80;
constexpr u32 RECORD_FBB_OFFSET = 0x2588;
constexpr u32 RECORD_8_COUNT = 8;
constexpr u32 RECORD_2160_SIZE = 2160;
constexpr s32 CELL_LIMIT_2 = 2;
constexpr u32 CELL_ROW_SHIFT = 11;
constexpr u32 CELL_COLUMN_SHIFT = 10;
constexpr u32 CELL_BASE_OFFSET = 0x22;
constexpr u32 MODE_FIELD_SHIFT = 9;
constexpr u32 MODE_FIELD_MASK = 3;
constexpr u32 MODE_FIELD_WANTED = 2;
constexpr u32 WORDS_7E0_COUNT = 2;

struct OneHalfAndByte {
    u16 half;
    u8 byte_02;
};

struct GlobalWordBlock {
    u8 unknown_000[0x7e0];
    u32 words_7e0[WORDS_7E0_COUNT];
};
GUEST_OFFSET(GlobalWordBlock, words_7e0, 0x7e0);
inline guest::global<GlobalWordBlock, 0x00a82b90> global_word_block;

struct FlagsB18 {
    u8 unknown_000[0xb18];
    u32 flag;
};
GUEST_OFFSET(FlagsB18, flag, 0xb18);
inline guest::global<gptr<FlagsB18>, 0x0094d080> flags_b18_holder;

struct TableHolder14 {
    u8 unknown_00[0x14];
    u32 word;
};
GUEST_OFFSET(TableHolder14, word, 0x14);
inline guest::global<TableHolder14, 0x0094ee4c> table_holder_14;

inline guest::global<u8, 0x00982064> gate_byte_982064;
inline guest::global<u32, 0x00982068> gated_word_982068;
inline guest::global<s8, 0x00982014> signed_byte_982014;
inline guest::global<s8, 0x0098202c> signed_byte_98202c;
inline guest::global<u32, 0x00982018> gated_word_982018;

}  // namespace

// Gives the number pair the "never" number 0 and the byte 0x1e after it.
void init_number_start(OneHalfAndByte &object) {
    object.half = 0;
    object.byte_02 = u8(NUMBER_START_1E);
}
GUEST_EXPORT(0x001de834, init_number_start);

// The address of the record (0xfbb * 0x80 bytes each, three of them, from 0x2588); the first-past one for others.
gptr<u8> record_fbb_address(gptr<u8> base, u32 index) {
    return base + RECORD_FBB_OFFSET + (index < RECORD_FBB_COUNT ? index * RECORD_FBB_SIZE : 0);
}
GUEST_EXPORT(0x002bedd8, record_fbb_address);

// The address of the cell at (column, row) of two columns and two rows (1 KiB and 2 KiB apart, from 0x22); null outside.
gptr<u8> cell_address_2x2(gptr<u8> base, s32 column, s32 row) {
    if (column >= CELL_LIMIT_2 || row >= CELL_LIMIT_2) {
        return nullptr;
    }
    return base + (u32(row) << CELL_ROW_SHIFT) + (u32(column) << CELL_COLUMN_SHIFT) + CELL_BASE_OFFSET;
}
GUEST_EXPORT(0x002ff34c, cell_address_2x2);

// The address of the record (2160 bytes each, eight of them); the base for others.
gptr<u8> record_2160_address_of_8(gptr<u8> base, u32 index) {
    return index < RECORD_8_COUNT ? base + index * RECORD_2160_SIZE : base;
}
GUEST_EXPORT(0x00304ed8, record_2160_address_of_8);
GUEST_EXPORT(0x0070f51c, record_2160_address_of_8);

// Whether the two bits 9-10 of the word at 0x2510 are 2.
bool field_2510_is_2(Flags2510 &object) {
    return ((object.flags >> MODE_FIELD_SHIFT) & MODE_FIELD_MASK) == MODE_FIELD_WANTED;
}
GUEST_EXPORT(0x0030e430, field_2510_is_2);

// Whether the global object at 0x0094d080 exists and has a flag at 0xb18.
bool global_flag_b18() {
    return *flags_b18_holder != nullptr && (*flags_b18_holder)->flag != 0;
}
GUEST_EXPORT(0x00583be8, global_flag_b18);

// Whether the word at 0x14 of the table holder at 0x0094ee4c is not zero.
bool table_holder_word_set() {
    return table_holder_14->word != 0;
}
GUEST_EXPORT(0x0059daa0, table_holder_word_set);

// The word at 0x00982068 while the byte at 0x00982064 is not zero, else 0.
u32 gated_word_982068_value() {
    return *gate_byte_982064 != 0 ? *gated_word_982068 : 0;
}
GUEST_EXPORT(0x001df40c, gated_word_982068_value);

// The word at 0x00982018 when the signed byte at 0x00982014 has bits the one at 0x0098202c does not, else 0.
u32 gated_word_982018_value() {
    return (*signed_byte_982014 & ~*signed_byte_98202c) != 0 ? *gated_word_982018 : 0;
}
GUEST_EXPORT(0x001df2f8, gated_word_982018_value);

// Replaces the number (and the two bytes after it) when the current number is none (0xfc or more) and the new one is real.
void replace_number_with_bytes(NumberPair &pair, u32 number, u32 byte_02, u32 byte_03) {
    if (pair.number >= NUMBER_NONE_FC && number < NUMBER_NONE_FC) {
        pair.byte_02 = u8(byte_02);
        pair.number = u16(number);
        pair.byte_03 = u8(byte_03);
    }
}
GUEST_EXPORT(0x0024e9d8, replace_number_with_bytes);

// The word at 0x7e0 (index 0) or 0x7e4 (index 1) of the global block at 0x00a82b90; -1 for other indexes.
s32 global_word_7e0(u32 index) {
    return index < WORDS_7E0_COUNT ? s32(global_word_block->words_7e0[index]) : -1;
}
GUEST_EXPORT(0x0030befc, global_word_7e0);

// Adds the second vector to the first (in place) and gives back the address after the second one.
gptr<u8> add_vector(gptr<void> unused, Float3 &first, const Float3 &second) {  // (the first argument is not used)
    for (u32 i = 0; i < 3; i++) {
        first.v[i] += second.v[i];
    }
    return guest::addr_of(second).cast<u8>() + sizeof(Float3);
}
GUEST_EXPORT(0x00552214, add_vector);

// Moves the first vector towards the second's by the fraction stored in the fourth float after the second's three; gives back
// the address after the record.
gptr<u8> move_vector_towards(gptr<void> unused, Float3 &first, const float (&target)[4]) {
    for (u32 i = 0; i < 3; i++) {
        float difference = target[i] - first.v[i];
        float step = difference * target[3];
        first.v[i] = first.v[i] + step;
    }
    return guest::addr_of(target[0]).cast<u8>() + sizeof(float) * 4;
}
GUEST_EXPORT(0x00552810, move_vector_towards);
