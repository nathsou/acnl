// Copy helpers for a family of small save records (the record layouts are not known yet).
#include <cstring>

#include "guest/guest.hpp"

namespace {

constexpr u32 ID_BITS_13_14 = 0x6000;
constexpr u32 ID_FLAGS_MASK = 0xe000;
constexpr u32 ID_KIND_4000 = 0x4000;
constexpr u32 TRANSLATION_COUNT = 0x11ad;
constexpr u32 TRANSLATION_TABLE = 0x401b9526;  // u16 per id, TRANSLATION_COUNT entries

template <typename T>
void copy_field(gptr<u8> dest, gptr<const u8> source, u32 offset) {
    T value;
    memcpy(&value, (source + offset).get(), sizeof(T));
    memcpy((dest + offset).get(), &value, sizeof(T));
}

}  // namespace

// Copies 8 bytes (both words are read before either is written).
gptr<u32> copy_8_bytes(gptr<u32> dest, gptr<const u32> source) {
    u32 first = source[0];
    u32 second = source[1];
    dest[0] = first;
    dest[1] = second;
    return dest;
}
GUEST_EXPORT(0x401ae6d0, copy_8_bytes);
GUEST_FUZZ(0x401ae6d0, 200, [](guest::Fuzz &f) {
    gptr<u32> dest = f.allocate(8).cast<u32>();
    gptr<u32> source = f.allocate(8).cast<u32>();
    f.bytes(dest, 8);
    f.bytes(source, 8);
    f.arguments(dest, source);
});

// Copies the 0x2e-byte field list of a record; always succeeds.
bool copy_item_fields(gptr<u8> dest, gptr<const u8> source) {
    copy_field<u16>(dest, source, 0x00);
    copy_field<u8>(dest, source, 0x14);
    copy_field<u32>(dest, source, 0x02);
    copy_field<u32>(dest, source, 0x06);
    copy_field<u32>(dest, source, 0x0a);
    copy_field<u32>(dest, source, 0x0e);
    copy_field<u16>(dest, source, 0x12);
    copy_field<u16>(dest, source, 0x16);
    copy_field<u32>(dest, source, 0x18);
    copy_field<u32>(dest, source, 0x1c);
    copy_field<u32>(dest, source, 0x20);
    copy_field<u32>(dest, source, 0x24);
    copy_field<u16>(dest, source, 0x28);
    copy_field<u8>(dest, source, 0x2a);
    copy_field<u8>(dest, source, 0x2c);
    copy_field<u8>(dest, source, 0x2d);
    return true;
}
GUEST_EXPORT(0x401ae85c, copy_item_fields);
GUEST_FUZZ(0x401ae85c, 200, [](guest::Fuzz &f) {
    gptr<u8> dest = f.allocate(0x40).cast<u8>();
    gptr<u8> source = f.allocate(0x40).cast<u8>();
    f.bytes(dest, 0x40);
    f.bytes(source, 0x40);
    f.arguments(dest, source);
});

// Stores an id through `out`, translating ids of the 0x2000/0x4000 kinds through a table; false if out of range.
bool translate_id(gptr<u16> out, u32 id) {
    u32 kind = id & ID_BITS_13_14;
    if (kind != 0 && kind != ID_BITS_13_14) {
        u32 index = id & ~ID_FLAGS_MASK;
        if (index >= TRANSLATION_COUNT) {
            return false;
        }
        id = gptr<u16>(TRANSLATION_TABLE)[index];
        if (kind == ID_KIND_4000) {
            id = (id & ~ID_FLAGS_MASK) | ID_KIND_4000;
        }
    }
    *out = u16(id);
    return true;
}
GUEST_EXPORT(0x401ae7a4, translate_id);
GUEST_FUZZ(0x401ae7a4, 300, [](guest::Fuzz &f) {
    u32 id = f.number();
    if (f.below(2) != 0) {
        id &= 0xffff;
    }
    gptr<u16> out = f.allocate(4).cast<u16>();
    f.bytes(out, 4);
    f.arguments(out, id);
});
