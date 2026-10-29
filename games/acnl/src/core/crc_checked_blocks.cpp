// Blocks that start with a CRC-32 of the bytes after it (the game's seed and final xor are both all ones).
#include "guest/guest.hpp"

namespace {

constexpr u32 CRC_START = 0xffffffff;
constexpr u32 CRC_FINAL_XOR = 0xffffffff;
constexpr u32 SMALL_SIZE = 0x20;
constexpr u32 LARGE_SIZE = 0x6b84;

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

}  // namespace

void seal_small_block(SmallBlock &block) {
    block.crc = crc32(guest::addr_of(block.data[0]), SMALL_SIZE, CRC_START, CRC_FINAL_XOR);
}
GUEST_EXPORT(0x0070f624, seal_small_block);
GUEST_FUZZ(0x0070f624, 100, [](guest::Fuzz &f) { f.arguments(f.object<SmallBlock>()); });

bool small_block_is_sealed(SmallBlock &block) {
    return block.crc == crc32(guest::addr_of(block.data[0]), SMALL_SIZE, CRC_START, CRC_FINAL_XOR);
}
GUEST_EXPORT(0x0070f648, small_block_is_sealed);
GUEST_FUZZ(0x0070f648, 100, [](guest::Fuzz &f) {
    auto block = f.object<SmallBlock>();
    if (f.below(2) != 0) {
        seal_small_block(*block);
    }
    f.arguments(block);
});

void seal_large_block(LargeBlock &block) {
    block.crc = crc32(guest::addr_of(block.data[0]), LARGE_SIZE, CRC_START, CRC_FINAL_XOR);
}
GUEST_EXPORT(0x00712bac, seal_large_block);
GUEST_FUZZ(0x00712bac, 30, [](guest::Fuzz &f) { f.arguments(f.object<LargeBlock>()); });
