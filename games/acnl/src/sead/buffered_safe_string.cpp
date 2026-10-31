// sead::BufferedSafeStringBase<char>: sead's string with its characters stored inline after the header. The game
// instantiates it for several buffer sizes, each with its own vtables.
#include "guest/guest.hpp"

using guest::gptr;

// The header shared by all sead::SafeStringBase<char> / BufferedSafeStringBase<char> objects.
struct SafeStringHeader {
    u32 vtable;
    gptr<char> buffer;
    s32 capacity;
};
GUEST_SIZE(SafeStringHeader, 12);

// A string with its characters stored inline.
template <u32 N>
struct BufferedSafeString : SafeStringHeader {
    char storage[N];
};

// The character that ends strings (a global byte).
inline guest::global<char, 0x008c9f1c> string_terminator;

static constexpr u32 VTABLE_SLOT_2_OFFSET = 8;  // virtual called on the source of a copy (not known what it does)
static constexpr s32 MAX_SCAN_LENGTH = 0x80000;

// Vtable of the base class every constructor stores first.
static constexpr u32 SAFE_STRING_VTABLE = 0x0090558c;

// The vtables a constructor of each buffer size stores in turn: an intermediate class, then the final one.
struct VtableChain {
    u32 intermediate;
    u32 final_vtable;
};
static constexpr VtableChain CHAIN_CAPACITY_8 = {0x009051ac, 0x009049a0};
static constexpr VtableChain CHAIN_CAPACITY_32 = {0x00905120, 0x009048ec};
static constexpr VtableChain CHAIN_CAPACITY_64 = {0x00905170, 0x00904950};
static constexpr VtableChain CHAIN_CAPACITY_96 = {0x009051c0, 0x009049b4};

static constexpr u32 CAPACITY_8 = 8;
static constexpr u32 CAPACITY_32 = 0x20;
static constexpr u32 CAPACITY_64 = 0x40;
static constexpr u32 CAPACITY_96 = 0x60;

inline constexpr guest::Function<0x00134544, void(gptr<void> destination, gptr<const void> source, s32 size)>
    string_copy_bytes;

// The common part of the default constructors: the vtables of the base classes are stored on the way.
template <u32 N>
static BufferedSafeString<N> &construct_empty_string(BufferedSafeString<N> &self, VtableChain chain) {
    self.buffer = gptr<char>(guest::addr_of(&self.storage[0]));
    self.vtable = SAFE_STRING_VTABLE;
    self.capacity = N;
    self.buffer[N - 1] = *string_terminator;
    self.vtable = chain.intermediate;
    self.buffer[0] = *string_terminator;
    self.vtable = chain.final_vtable;
    return self;
}

BufferedSafeString<CAPACITY_32> &construct_buffered_string_20(BufferedSafeString<CAPACITY_32> &self) {
    return construct_empty_string(self, CHAIN_CAPACITY_32);
}
GUEST_EXPORT(0x00810f00, construct_buffered_string_20);

BufferedSafeString<CAPACITY_64> &construct_buffered_string_40(BufferedSafeString<CAPACITY_64> &self) {
    return construct_empty_string(self, CHAIN_CAPACITY_64);
}
GUEST_EXPORT(0x00811048, construct_buffered_string_40);

BufferedSafeString<CAPACITY_8> &construct_buffered_string_8(BufferedSafeString<CAPACITY_8> &self) {
    return construct_empty_string(self, CHAIN_CAPACITY_8);
}
GUEST_EXPORT(0x00811190, construct_buffered_string_8);

BufferedSafeString<CAPACITY_96> &construct_buffered_string_60(BufferedSafeString<CAPACITY_96> &self) {
    return construct_empty_string(self, CHAIN_CAPACITY_96);
}
GUEST_EXPORT(0x008111ec, construct_buffered_string_60);

// Copy constructor: copies the characters of another string, cut to fit (the terminator always fits).
BufferedSafeString<CAPACITY_64> &construct_buffered_string_40_copy(BufferedSafeString<CAPACITY_64> &self,
                                                                   SafeStringHeader &source) {
    self.buffer = gptr<char>(guest::addr_of(&self.storage[0]));
    self.vtable = SAFE_STRING_VTABLE;
    self.capacity = CAPACITY_64;
    self.buffer[CAPACITY_64 - 1] = *string_terminator;
    self.vtable = CHAIN_CAPACITY_64.intermediate;

    gptr<char> destination = self.buffer;
    guest::call_address<void>(*gptr<u32>(source.vtable + VTABLE_SLOT_2_OFFSET), guest::addr_of(&source));
    gptr<char> source_chars = source.buffer;
    if (destination != source_chars) {
        guest::call_address<void>(*gptr<u32>(source.vtable + VTABLE_SLOT_2_OFFSET), guest::addr_of(&source));
        gptr<char> scanned = source.buffer;
        s32 length = 0;
        while (scanned[length] != *string_terminator) {
            length++;
            if (length > MAX_SCAN_LENGTH) {
                length = 0;  // unterminated: treated as empty
                break;
            }
        }
        if (self.capacity <= length) {
            length = self.capacity - 1;
        }
        string_copy_bytes(destination, source_chars, length);
        destination[length] = *string_terminator;
    }
    self.vtable = CHAIN_CAPACITY_64.final_vtable;
    return self;
}
GUEST_EXPORT(0x00810f5c, construct_buffered_string_40_copy);
