// CRC-32 as the game computes it: the standard byte-wise table algorithm over the data, with the start value and
// the final xor given by the caller (the game passes 0xffffffff for both, which is the usual CRC-32).
#include "guest/guest.hpp"

using guest::gptr;

namespace {

constexpr u32 TABLE_ADDRESS = 0x008ae630;
inline guest::global<u32[256], TABLE_ADDRESS> crc_table;

u32 update(u32 crc, u8 byte) {
    return crc_table[(byte ^ crc) & 0xff] ^ (crc >> 8);
}

}  // namespace

// The original always consumes the first byte, even for a size of 0 (so a size of 0 and 1 give the same result).
// Sizes that do not fit a signed 32-bit number are not supported.
u32 crc32(gptr<const u8> data, u32 size, u32 start, u32 final_xor) {
    u32 crc = start;
    u32 count = size == 0 ? 1 : size;
    for (u32 i = 0; i < count; i++) {
        crc = update(crc, data[i]);
    }
    return crc ^ final_xor;
}
GUEST_EXPORT(0x003193e8, crc32);

GUEST_FUZZ(0x003193e8, 300, [](guest::Fuzz &f) {
    u32 size = f.pick<u32>({0, 1, 2, 3, 4, 5, 7, 8, 63, 64, 100, f.below(300)});
    auto data = f.allocate(size + 1).cast<u8>();
    f.bytes(data, size + 1);
    f.arguments(data, size, f.pick<u32>({0xffffffffu, 0, f.number()}), f.pick<u32>({0xffffffffu, 0, f.number()}));
});
