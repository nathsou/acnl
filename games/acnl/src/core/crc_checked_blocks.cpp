// Blocks that start with a CRC-32 of the bytes after it (the game's seed and final xor are both all ones).
#include "guest/guest.hpp"

namespace {

constexpr u32 CRC_START = 0xffffffff;
constexpr u32 CRC_FINAL_XOR = 0xffffffff;
constexpr u32 SMALL_SIZE = 0x20;
constexpr u32 LARGE_SIZE = 0x6b84;
constexpr u32 SAVE_PART_SIZE = 0x1c204;
constexpr u32 SAVE_PART_B_SIZE = 0x25f8c;
constexpr u32 TINY_SIZE = 0x1c;

inline constexpr guest::Function<0x003193e8, u32(gptr<const u8> data, u32 size, u32 start, u32 final_xor)> crc32;

struct SmallBlock {
    u32 crc;
    u8 data[SMALL_SIZE];
};
GUEST_SIZE(SmallBlock, 4 + SMALL_SIZE);

struct LargeBlock {
    u32 crc;
    u8 data[LARGE_SIZE];
};
GUEST_SIZE(LargeBlock, 4 + LARGE_SIZE);

struct SavePartA {
    u32 crc;
    u8 data[SAVE_PART_SIZE];
};

struct SavePartB {
    u32 crc;
    u8 data[SAVE_PART_B_SIZE];
};

struct TinyBlock {
    u32 crc;
    u8 data[TINY_SIZE];
};

}  // namespace

void seal_small_block(SmallBlock &block) {
    block.crc = crc32(guest::addr_of(block.data[0]), SMALL_SIZE, CRC_START, CRC_FINAL_XOR);
}
GUEST_EXPORT(0x0070f624, seal_small_block);

bool small_block_is_sealed(SmallBlock &block) {
    return block.crc == crc32(guest::addr_of(block.data[0]), SMALL_SIZE, CRC_START, CRC_FINAL_XOR);
}
GUEST_EXPORT(0x0070f648, small_block_is_sealed);

void seal_large_block(LargeBlock &block) {
    block.crc = crc32(guest::addr_of(block.data[0]), LARGE_SIZE, CRC_START, CRC_FINAL_XOR);
}
GUEST_EXPORT(0x00712bac, seal_large_block);

// The CRC of the data after the stored one (not stored).
u32 save_part_a_crc(SavePartA &block) {
    return crc32(guest::addr_of(block.data[0]), SAVE_PART_SIZE, CRC_START, CRC_FINAL_XOR);
}
GUEST_EXPORT(0x0076ee28, save_part_a_crc);

bool save_part_a_crc_matches(SavePartA &block) {
    return block.crc == save_part_a_crc(block);
}
GUEST_EXPORT(0x0076ee40, save_part_a_crc_matches);

u32 save_part_b_crc(SavePartB &block) {
    return crc32(guest::addr_of(block.data[0]), SAVE_PART_B_SIZE, CRC_START, CRC_FINAL_XOR);
}
GUEST_EXPORT(0x0076ef48, save_part_b_crc);

bool save_part_b_crc_matches(SavePartB &block) {
    return block.crc == save_part_b_crc(block);
}
GUEST_EXPORT(0x0076ef94, save_part_b_crc_matches);

void seal_tiny_block(TinyBlock &block) {
    block.crc = crc32(guest::addr_of(block.data[0]), TINY_SIZE, CRC_START, CRC_FINAL_XOR);
}
GUEST_EXPORT(0x00757cfc, seal_tiny_block);

bool tiny_block_is_sealed(TinyBlock &block) {
    return block.crc == crc32(guest::addr_of(block.data[0]), TINY_SIZE, CRC_START, CRC_FINAL_XOR);
}
GUEST_EXPORT(0x00757d20, tiny_block_is_sealed);
