// Copy helpers for a family of small save records (the record layouts are not known yet).
#include <cstring>

#include "guest/guest.hpp"

namespace {

constexpr u32 ID_BITS_13_14 = 0x6000;
constexpr u32 ID_FLAGS_MASK = 0xe000;
constexpr u32 ID_KIND_4000 = 0x4000;
constexpr u32 TRANSLATION_COUNT = 0x11ad;
constexpr u32 TRANSLATION_TABLE = 0x401b9526;  // u16 per id, TRANSLATION_COUNT entries

// The fields copied by copy_item_fields, at their offsets in the 0x2e-byte record (some words are unaligned).
#pragma pack(push, 1)
struct ItemFields {
    u16 half_00;
    u32 word_02;
    u32 word_06;
    u32 word_0a;
    u32 word_0e;
    u16 half_12;
    u8 byte_14;
    u8 unknown_15;
    u16 half_16;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u16 half_28;
    u8 byte_2a;
    u8 unknown_2b;
    u8 byte_2c;
    u8 byte_2d;
};
#pragma pack(pop)
GUEST_SIZE(ItemFields, 0x2e);

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

// Copies the fields of a record of 0x2e bytes (the bytes between them are left alone); always succeeds.
bool copy_item_fields(ItemFields &dest, const ItemFields &source) {
    dest.half_00 = source.half_00;
    dest.byte_14 = source.byte_14;
    dest.word_02 = source.word_02;
    dest.word_06 = source.word_06;
    dest.word_0a = source.word_0a;
    dest.word_0e = source.word_0e;
    dest.half_12 = source.half_12;
    dest.half_16 = source.half_16;
    dest.word_18 = source.word_18;
    dest.word_1c = source.word_1c;
    dest.word_20 = source.word_20;
    dest.word_24 = source.word_24;
    dest.half_28 = source.half_28;
    dest.byte_2a = source.byte_2a;
    dest.byte_2c = source.byte_2c;
    dest.byte_2d = source.byte_2d;
    return true;
}
GUEST_EXPORT(0x401ae85c, copy_item_fields);
GUEST_FUZZ(0x401ae85c, 200, [](guest::Fuzz &f) { f.arguments(f.object<ItemFields>(), f.object<ItemFields>()); });

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
