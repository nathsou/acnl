// A block of the save data that starts with its CRC-32: refreshing it and checking it.
#include "guest/guest.hpp"

u32 crc32(guest::gptr<const u8> data, u32 size, u32 start, u32 final_xor);

namespace {

constexpr u32 CRC_START = 0xffffffff;
constexpr u32 CRC_FINAL_XOR = 0xffffffff;
constexpr u32 DATA_SIZE = 0x22bc8;

struct CrcBlock {
    u32 crc;
    u8 data[DATA_SIZE];

    u32 compute() { return crc32(guest::addr_of(data[0]), DATA_SIZE, CRC_START, CRC_FINAL_XOR); }
};
GUEST_SIZE(CrcBlock, DATA_SIZE + 4);

}  // namespace

void refresh_crc(CrcBlock &block) {
    block.crc = block.compute();
}
GUEST_EXPORT(0x00119859, refresh_crc);
GUEST_FUZZ(0x00119859, 40, [](guest::Fuzz &f) { f.arguments(f.object<CrcBlock>()); });

bool crc_matches(CrcBlock &block) {
    return block.crc == block.compute();
}
GUEST_EXPORT(0x00119875, crc_matches);
GUEST_FUZZ(0x00119875, 40, [](guest::Fuzz &f) {
    auto block = f.object<CrcBlock>();
    if (f.below(2) != 0) {
        block->crc = block->compute();
    }
    f.arguments(block);
});
