// Address of an element in an array that lives inside a larger object: `base + offset + index * stride`, where an
// index at or past the element count counts as index 0 (the object's own start plus the offset).
#include "guest/guest.hpp"

using guest::gptr;

namespace {

template <u32 Count, u32 Stride, u32 Offset>
gptr<u8> element_address(gptr<u8> base, u32 index) {
    u32 position = index < Count ? index * Stride : 0;
    return gptr<u8>(base.addr() + Offset + position);
}

// The element tables: count, stride in bytes, offset of the first element in its object.
constexpr u32 RECORD_COUNT = 10;
constexpr u32 RECORD_STRIDE = 0x870;
constexpr u32 SMALL_RECORD_STRIDE = 0x280;
constexpr u32 PAGE_COUNT = 4;
constexpr u32 PAGE_STRIDE = 0xb98;
constexpr u32 PAGE_OFFSET = 0x55c;
constexpr u32 CELL_COUNT = 0x20;
constexpr u32 CELL_STRIDE = 0x14b0;
constexpr u32 CELL_OFFSET = 8;
constexpr u32 SLOT_COUNT = 16;
constexpr u32 SLOT_STRIDE = 0x7dd8;
constexpr u32 BLOCK_COUNT = 3;
constexpr u32 BLOCK_STRIDE = 0x7dd80;
constexpr u32 BLOCK_OFFSET = 0x2588;

}  // namespace

gptr<u8> record_address(gptr<u8> base, u32 index) {
    return element_address<RECORD_COUNT, RECORD_STRIDE, 0>(base, index);
}
GUEST_EXPORT(0x00712838, record_address);

gptr<u8> small_record_address(gptr<u8> base, u32 index) {
    return element_address<RECORD_COUNT, SMALL_RECORD_STRIDE, 0>(base, index);
}
GUEST_EXPORT(0x0071dcdc, small_record_address);
GUEST_EXPORT(0x002c002c, small_record_address);

gptr<u8> page_address(gptr<u8> base, u32 index) {
    return element_address<PAGE_COUNT, PAGE_STRIDE, PAGE_OFFSET>(base, index);
}
GUEST_EXPORT(0x006bc388, page_address);

gptr<u8> cell_address(gptr<u8> base, u32 index) {
    return element_address<CELL_COUNT, CELL_STRIDE, CELL_OFFSET>(base, index);
}
GUEST_EXPORT(0x0071d4c0, cell_address);

gptr<u8> slot_address(gptr<u8> base, u32 index) {
    return element_address<SLOT_COUNT, SLOT_STRIDE, 0>(base, index);
}
GUEST_EXPORT(0x0071d648, slot_address);
GUEST_EXPORT(0x002be920, slot_address);

gptr<u8> block_address(gptr<u8> base, u32 index) {
    return element_address<BLOCK_COUNT, BLOCK_STRIDE, BLOCK_OFFSET>(base, index);
}
GUEST_EXPORT(0x0071d7cc, block_address);
