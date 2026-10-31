// Reads through the pointer at offset 4 of small handle objects: the record's fields (several copies compiled for
// different classes) and two tests on handles.
#include "guest/guest.hpp"

using guest::gptr;

namespace {

constexpr u16 NO_VALUE = 0xffff;
constexpr u32 FIRST_HALF_MASK = 0xffff;
constexpr u32 SECOND_HALF_SHIFT = 16;

struct Record {
    u8 byte_00;
    u8 byte_01;
    u8 unknown_02[2];
    u32 word_04;
    u16 value_08;
    u16 value_0a;
};
GUEST_OFFSET(Record, word_04, 4);
GUEST_OFFSET(Record, value_08, 8);
GUEST_OFFSET(Record, value_0a, 0xa);

struct RecordHandle {
    u32 unknown_00;
    gptr<Record> record;
};
GUEST_OFFSET(RecordHandle, record, 4);

// A handle whose first word is a pointer (or null).
struct PointerHandle {
    gptr<void> target;
};

// An object with a word at 0x150.
struct BigObject {
    u8 unknown_000[0x150];
    u32 value_150;
    u32 value_154;
};
GUEST_OFFSET(BigObject, value_150, 0x150);

}  // namespace

u16 handle_value_0a(const RecordHandle &handle) { return handle.record->value_0a; }
GUEST_EXPORT(0x007558f4, handle_value_0a);

bool handle_value_0a_is_unset(const RecordHandle &handle) { return handle.record->value_0a == NO_VALUE; }
GUEST_EXPORT(0x00755900, handle_value_0a_is_unset);

bool handle_value_08_is_set_a(const RecordHandle &handle) { return handle.record->value_08 != NO_VALUE; }
GUEST_EXPORT(0x0075591c, handle_value_08_is_set_a);

bool handle_value_08_is_set_b(const RecordHandle &handle) { return handle.record->value_08 != NO_VALUE; }
GUEST_EXPORT(0x00755944, handle_value_08_is_set_b);

u16 handle_value_08_a(const RecordHandle &handle) { return handle.record->value_08; }
GUEST_EXPORT(0x00755938, handle_value_08_a);

u16 handle_value_08_b(const RecordHandle &handle) { return handle.record->value_08; }
GUEST_EXPORT(0x00755960, handle_value_08_b);

u16 handle_value_08_c(const RecordHandle &handle) { return handle.record->value_08; }
GUEST_EXPORT(0x00755a24, handle_value_08_c);

bool handle_has_target(const PointerHandle &handle) { return handle.target != nullptr; }
GUEST_EXPORT(0x00755a30, handle_has_target);

// Splits the record's word at 4 into its two halves.
void handle_split_word_04(const RecordHandle &handle, gptr<u16> low, gptr<u16> high) {
    u32 word = handle.record->word_04;
    *low = u16(word & FIRST_HALF_MASK);
    *high = u16(word >> SECOND_HALF_SHIFT);
}
GUEST_EXPORT(0x00755a68, handle_split_word_04);

u8 handle_byte_00(const RecordHandle &handle) { return handle.record->byte_00; }
GUEST_EXPORT(0x00755a80, handle_byte_00);

u8 handle_byte_01(const RecordHandle &handle) { return handle.record->byte_01; }
GUEST_EXPORT(0x00755a8c, handle_byte_01);

u32 object_value_150(const BigObject &object) { return object.value_150; }
GUEST_EXPORT(0x00755aec, object_value_150);
