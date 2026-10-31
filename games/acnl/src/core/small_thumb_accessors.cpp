// Small Thumb routines of the C library and of objects with a null check at the start (the entries are the odd addresses).
#include "guest/guest.hpp"

using guest::gptr;

namespace {

inline guest::global<u32, 0x00af75e8> stored_word_af75e8;

// An object with a byte at 3, one at 2 and the flag bytes at 0x20 and 0x1d.
struct NullGuarded {
    u8 unknown_00[2];
    s8 byte_02;
    s8 byte_03;
    u8 unknown_04[0x1d - 4];
    u8 byte_1d;
    u8 unknown_1e[2];
    u8 flags_20[2];
};
GUEST_OFFSET(NullGuarded, byte_02, 2);
GUEST_OFFSET(NullGuarded, byte_1d, 0x1d);
GUEST_OFFSET(NullGuarded, flags_20, 0x20);

}  // namespace

// The first place of the string with the character (its low byte), or null (the terminator's place for the character 0).
gptr<u8> find_char(gptr<u8> text, u32 character) {
    u8 wanted = u8(character);
    for (u32 i = 0;; i++) {
        if (text[i] == wanted) {
            return text + i;
        }
        if (text[i] == 0) {
            return nullptr;
        }
    }
}
GUEST_EXPORT(0x00101785, find_char);

// The last place of the string with the character, or null (the terminator's place for the character 0).
gptr<u8> find_last_char(gptr<u8> text, u32 character) {
    u8 wanted = u8(character);
    gptr<u8> found = nullptr;
    for (u32 i = 0;; i++) {
        if (text[i] == wanted) {
            found = text + i;
        }
        if (text[i] == 0) {
            return found;
        }
    }
}
GUEST_EXPORT(0x001017c3, find_last_char);

// The first place of the character among the first `count` bytes, or null.
gptr<u8> find_byte(gptr<u8> memory, u32 character, u32 count) {
    u8 wanted = u8(character);
    for (u32 i = 0; i < count; i++) {
        if (memory[i] == wanted) {
            return memory + i;
        }
    }
    return nullptr;
}
GUEST_EXPORT(0x001019a3, find_byte);

// Stores the word in the global at 0x00af75e8.
void store_word_af75e8(u32 value) {
    *stored_word_af75e8 = value;
}
GUEST_EXPORT(0x00101a13, store_word_af75e8);

// The signed byte at 3 of the object (1 without an object).
s32 guarded_byte_03_or_1(gptr<NullGuarded> object) {
    return object == nullptr ? 1 : s32(object->byte_03);
}
GUEST_EXPORT(0x00112775, guarded_byte_03_or_1);

// The signed byte at 2 of the object (0 without an object).
s32 guarded_byte_02(gptr<NullGuarded> object) {
    return object == nullptr ? 0 : s32(object->byte_02);
}
GUEST_EXPORT(0x001139e9, guarded_byte_02);

// Bit 6 and bit 7 of the byte at 0x21 (0 without an object).
u32 guarded_flag_21_bit_6(gptr<NullGuarded> object) {
    return object == nullptr ? 0 : (object->flags_20[1] >> 6) & 1;
}
GUEST_EXPORT(0x00112785, guarded_flag_21_bit_6);
u32 guarded_flag_21_bit_7(gptr<NullGuarded> object) {
    return object == nullptr ? 0 : object->flags_20[1] >> 7;
}
GUEST_EXPORT(0x00112793, guarded_flag_21_bit_7);

// The high nibble of the byte at 0x1d (1 without an object).
u32 guarded_nibble_1d(gptr<NullGuarded> object) {
    return object == nullptr ? 1 : object->byte_1d >> 4;
}
GUEST_EXPORT(0x00112fd5, guarded_nibble_1d);

// Copies three words unless the source is the destination.
struct ThreeWords {
    u32 words[3];
};
void copy_three_words(ThreeWords &destination, const ThreeWords &source) {
    if (&destination != &source) {
        destination = source;
    }
}
GUEST_EXPORT(0x00116f1b, copy_three_words);

namespace {

constexpr u32 SET_5_COUNT = 6;
constexpr u32 SET_16_COUNT = 0x10;
constexpr u32 BYTE_TABLE_OFFSET = 0x5460;

struct TwoSmallBytes {
    u8 unknown_00;
    u8 byte_01;
    u8 unknown_02;
    u8 byte_03;
};
GUEST_OFFSET(TwoSmallBytes, byte_01, 1);
GUEST_OFFSET(TwoSmallBytes, byte_03, 3);

struct HalfAndBytes {
    u16 half;
    u8 byte_02;
    u8 byte_03;
};

struct BoundedList {
    u8 unknown_00[0x94];
    s32 count;
    s32 capacity;
    gptr<u32> values;
};
GUEST_OFFSET(BoundedList, count, 0x94);
GUEST_OFFSET(BoundedList, capacity, 0x98);
GUEST_OFFSET(BoundedList, values, 0x9c);

struct ModeWord {
    u8 unknown_00[0x3c];
    u32 value;
};
GUEST_OFFSET(ModeWord, value, 0x3c);

}  // namespace

// Whether the value is one of 5, 0xb, 0x11, 0x17 and 0x94.
bool value_in_set_1e7e44(u32 value) {
    return value == 5 || value == 0xb || value == 0x11 || value == 0x17 || value == 0x94;  // (what they stand for is not known yet)
}
GUEST_EXPORT(0x001e7e44, value_in_set_1e7e44);

// Appends the value to the list when it is not full.
void append_if_room(BoundedList &list, u32 value) {
    if (list.count < list.capacity) {
        list.values[list.count] = value;
        list.count++;
    }
}
GUEST_EXPORT(0x001f963c, append_if_room);

// Stores the value in the byte at 3 when it is below 6, in the byte at 1 when it is below 0x10.
void store_byte_03_below_6(TwoSmallBytes &object, u32 value) {
    if (value < SET_5_COUNT) {
        object.byte_03 = u8(value);
    }
}
GUEST_EXPORT(0x0020ce74, store_byte_03_below_6);

void store_byte_01_below_16(TwoSmallBytes &object, u32 value) {
    if (value < SET_16_COUNT) {
        object.byte_01 = u8(value);
    }
}
GUEST_EXPORT(0x0020ce80, store_byte_01_below_16);

// Stores a halfword and two bytes.
void store_half_and_bytes(HalfAndBytes &object, u32 half, u32 first, u32 second) {
    object.half = u16(half);
    object.byte_02 = u8(first);
    object.byte_03 = u8(second);
}
GUEST_EXPORT(0x0020d848, store_half_and_bytes);

// Swaps two bytes of the table at 0x5460 of the object (the numbers are the places).
void swap_table_bytes(gptr<u8> base, u32 first, u32 second) {
    gptr<u8> a = base + first + BYTE_TABLE_OFFSET;
    gptr<u8> b = base + second + BYTE_TABLE_OFFSET;
    u8 kept = *b;
    *b = *a;
    *a = kept;
}
GUEST_EXPORT(0x0020bff8, swap_table_bytes);
