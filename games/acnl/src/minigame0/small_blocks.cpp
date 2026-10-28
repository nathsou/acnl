#include "minigame0/small_blocks.hpp"

#include <cstring>

using guest::gptr;

// Zeroes the block.
void clear_block9(gptr<MiniGame0Block9> block) {
    memset(block->bytes, 0, sizeof(block->bytes));
}
GUEST_EXPORT(0x40347e78, clear_block9);
GUEST_FUZZ(0x40347e78, 200, [](guest::Fuzz &f) { f.arguments(f.object<MiniGame0Block9>()); });

// Copies the 7 bytes of a block.
void copy_block7(gptr<MiniGame0Block7> dest, gptr<MiniGame0Block7> source) {
    u8 temp[7];
    memcpy(temp, source->bytes, 7);
    memcpy(dest->bytes, temp, 7);
}
GUEST_EXPORT(0x40347e8c, copy_block7);
GUEST_FUZZ(0x40347e8c, 200, [](guest::Fuzz &f) {
    auto dest = f.object<MiniGame0Block7>();
    auto source = f.object<MiniGame0Block7>();
    f.arguments(dest, source);
});

// Fills the 10 bytes of a block with the low byte of value.
void fill_block10(gptr<MiniGame0Block10> block, u32 value) {
    u32 repeated = value & 0xff;
    repeated |= repeated << 8;
    repeated |= repeated << 16;
    memcpy(block->bytes, &repeated, 4);
    memcpy(block->bytes + 4, &repeated, 4);
    u16 half = u16(repeated);
    memcpy(block->bytes + 8, &half, 2);
}
GUEST_EXPORT(0x40347ea8, fill_block10);
GUEST_FUZZ(0x40347ea8, 200, [](guest::Fuzz &f) {
    auto block = f.object<MiniGame0Block10>();
    f.arguments(block, f.number());
});
