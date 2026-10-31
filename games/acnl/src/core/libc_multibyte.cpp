// Pieces of the C library's multibyte character conversion (an mbrtowc and its per-byte helper), driven by the
// per-thread character table, plus a pointer adjustment that cancels out.
#include "guest/guest.hpp"

namespace {

using guest::gptr;

// The per-thread character table. When uses_converter is 1, conversion goes through a function whose address is
// relative to the converter_offset field itself.
#pragma pack(push, 1)
struct CharTable {
    u8 char_valid[0x100];  // nonzero: the byte is a character by itself
    u8 unknown_100;
    u8 uses_converter;  // 1: convert through the converter function
    u8 unknown_102;
    s32 converter_offset;  // the converter is at the address of this field plus its value (unaligned)
};
#pragma pack(pop)
GUEST_OFFSET(CharTable, uses_converter, 0x101);
GUEST_OFFSET(CharTable, converter_offset, 0x103);

// The library's per-thread data block (what f_002f91d4 returns).
struct LibrarySpace {
    u32 unknown_00;
    gptr<CharTable> char_table;
};
GUEST_OFFSET(LibrarySpace, char_table, 4);

inline constexpr guest::Function<0x002f91d4, gptr<LibrarySpace>()> library_space;
inline constexpr guest::Function<0x002f7a04, gptr<s32>()> error_number_location;

constexpr s32 CONVERT_INVALID = -1;
constexpr s32 CONVERT_INCOMPLETE = -2;
constexpr s32 ERROR_ILLEGAL_SEQUENCE = 4;  // stored in the error number on an invalid byte

// the byte string a null source stands for (a literal right after mbrtowc)
constexpr gptr<const u8> NULL_SOURCE_STRING{0x002f79c0};

}  // namespace

// Returns its argument unchanged (an adjustment by +0x278 and back, as for a base class at offset 0).
u32 same_pointer(u32 pointer) {
    return pointer;
}
GUEST_EXPORT(0x002f77e8, same_pointer);

// Where the per-thread character table pointer lives.
gptr<gptr<CharTable>> char_table_location() {
    gptr<LibrarySpace> space = library_space();
    return guest::addr_of(&space->char_table);
}
GUEST_EXPORT(0x002f7a10, char_table_location);

// Converts one byte to a wide character: through the table's converter if it has one, else a valid byte is its
// own character (returns 1) and an invalid one returns -1.
s32 convert_byte(gptr<u16> wide, u32 byte, gptr<void> state) {
    CharTable &table = **char_table_location();
    if (table.uses_converter == 1) {
        u32 converter = guest::addr_of(&table.converter_offset).addr() + u32(table.converter_offset);
        return guest::call_address<s32>(converter, wide, byte, state);
    }
    if (table.char_valid[byte] == 0) {
        return CONVERT_INVALID;
    }
    *wide = u16(byte);
    return 1;
}
GUEST_EXPORT(0x002f79c5, convert_byte);

// mbrtowc: converts the next multibyte character of src (at most length bytes). Returns the bytes used, 0 for the
// NUL character, -1 (error number set) for an invalid sequence, -2 when length runs out first.
s32 multibyte_to_wide(gptr<u16> dest, gptr<const u8> src, u32 length, gptr<void> state) {
    if (!src) {
        dest = nullptr;
        length = 1;
        src = NULL_SOURCE_STRING;
    }
    guest::StackObject<u16> wide;
    s32 used = 0;
    while (length-- != 0) {
        u8 byte = *src;
        src++;
        s32 result = convert_byte(wide.ptr(), byte, state);
        used++;
        if (result == CONVERT_INVALID) {
            *error_number_location() = ERROR_ILLEGAL_SEQUENCE;
            return CONVERT_INVALID;
        }
        if (result == CONVERT_INCOMPLETE) {
            continue;
        }
        if (dest) {
            *dest = *wide;
        }
        return *wide != 0 ? used : 0;
    }
    return CONVERT_INCOMPLETE;
}
GUEST_EXPORT(0x002f7951, multibyte_to_wide);
