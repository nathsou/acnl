// Reads of one byte of an object that read as 0 when the value is out of range, a bit read, and the check of a
// stored CRC-32 over a block (the CRC is the object's first word, the data follows).
#include "guest/guest.hpp"

using guest::gptr;

u32 crc32(gptr<const u8> data, u32 size, u32 start, u32 final_xor);

namespace {

template <u32 Offset, u32 Limit>
u32 byte_below_limit_or_zero(gptr<u8> object) {
    u8 value = object[Offset];
    return value >= Limit ? 0 : value;
}

constexpr u32 CRC_START = 0xffffffff;
constexpr u32 CRC_FINAL_XOR = 0xffffffff;
constexpr u32 SAVE_BLOCK_SIZE = 0x6b84;
constexpr u32 CRC_FIELD_SIZE = 4;

struct SavedBlock {
    u32 crc;
    u8 data[SAVE_BLOCK_SIZE];
};
GUEST_SIZE(SavedBlock, SAVE_BLOCK_SIZE + CRC_FIELD_SIZE);

constexpr u32 FIELD_LIMIT_C = 0xc;
constexpr u32 FIELD_LIMIT_22 = 0x22;
constexpr u32 FIELD_LIMIT_6 = 6;
constexpr u32 FIELD_LIMIT_10 = 0x10;
constexpr u32 HALVED_LIMIT = 8;
constexpr u8 FLAG_BIT_0 = 0x01;

void fuzz_byte_object(guest::Fuzz &f) {
    auto object = f.allocate(8).cast<u8>();
    f.bytes(object, 8);
    for (u32 i = 0; i < 5; i++) {
        object[i] = f.pick<u8>({0, 1, 5, 6, 7, 0xb, 0xc, 0xf, 0x10, 0x11, 0x21, 0x22, 0xff, u8(f.below(256))});
    }
    f.arguments(object);
}

}  // namespace

u32 byte_2_below_12(gptr<u8> object) { return byte_below_limit_or_zero<2, FIELD_LIMIT_C>(object); }
GUEST_EXPORT(0x00712c08, byte_2_below_12);
GUEST_FUZZ(0x00712c08, 200, [](guest::Fuzz &f) { fuzz_byte_object(f); });

u32 byte_0_below_34(gptr<u8> object) { return byte_below_limit_or_zero<0, FIELD_LIMIT_22>(object); }
GUEST_EXPORT(0x00712c18, byte_0_below_34);
GUEST_FUZZ(0x00712c18, 200, [](guest::Fuzz &f) { fuzz_byte_object(f); });

u32 byte_3_below_6(gptr<u8> object) { return byte_below_limit_or_zero<3, FIELD_LIMIT_6>(object); }
GUEST_EXPORT(0x00712c28, byte_3_below_6);
GUEST_FUZZ(0x00712c28, 200, [](guest::Fuzz &f) { fuzz_byte_object(f); });

u32 byte_1_below_16(gptr<u8> object) { return byte_below_limit_or_zero<1, FIELD_LIMIT_10>(object); }
GUEST_EXPORT(0x00712c38, byte_1_below_16);
GUEST_FUZZ(0x00712c38, 200, [](guest::Fuzz &f) { fuzz_byte_object(f); });

// Byte 4 halved, with a value of 16 or more reading as 0 first.
u32 byte_4_halved(gptr<u8> object) {
    u32 value = byte_below_limit_or_zero<4, FIELD_LIMIT_10>(object) >> 1;
    return value >= HALVED_LIMIT ? 0 : value;
}
GUEST_EXPORT(0x00712c48, byte_4_halved);
GUEST_FUZZ(0x00712c48, 200, [](guest::Fuzz &f) { fuzz_byte_object(f); });

u32 byte_8_bit_0(gptr<u8> object) {
    return object[8] & FLAG_BIT_0;
}
GUEST_EXPORT(0x007133ac, byte_8_bit_0);
GUEST_FUZZ(0x007133ac, 100, [](guest::Fuzz &f) { fuzz_byte_object(f); });

// Whether the stored CRC matches the one computed over the data.
bool stored_crc_matches(SavedBlock &block) {
    return block.crc == crc32(guest::addr_of(block.data[0]), SAVE_BLOCK_SIZE, CRC_START, CRC_FINAL_XOR);
}
GUEST_EXPORT(0x00712bd4, stored_crc_matches);
GUEST_FUZZ(0x00712bd4, 100, [](guest::Fuzz &f) {
    auto block = f.object<SavedBlock>();
    if (f.below(2) != 0) {
        block->crc = crc32(guest::addr_of(block->data[0]), SAVE_BLOCK_SIZE, CRC_START, CRC_FINAL_XOR);
    }
    f.arguments(block);
});
