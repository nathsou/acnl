// Helpers that locate blocks inside the object the global at 0x0095bf74 points to.
#include "item/item.hpp"

namespace {

inline guest::global<gptr<void>, 0x0095bf74> data_95bf74;

inline constexpr guest::Function<0x00607bdc, u32()> query_00607bdc;
inline constexpr guest::Function<0x00607474, void()> f_00607474;
inline constexpr guest::Function<0x00768800, u32(const Item &item)> item_value_768800;

constexpr u32 BASE_OFFSET = 0x80;
constexpr u32 BLOCK_COLUMNS = 5;
constexpr u32 BLOCK_ROWS = 4;
constexpr u32 BLOCK_STRIDE_SHIFT = 10;  // blocks are 1 KiB apart
constexpr u32 BLOCK_HEADER = 0x58;
constexpr u32 CELL_SIZE = 4;
constexpr u32 CELL_ROW_SHIFT = 6;
constexpr u32 CELL_MASK = 0xf;

struct AcPlayer {
    u8 unknown_000[0x100];
    Item item;

    void virtual_8(gptr<u32> out);
};
GUEST_OFFSET(AcPlayer, item, 0x100);

}  // namespace

// The base of the data blocks (after running the two player checks).
static gptr<void> get_data_base() {
    query_00607bdc();
    f_00607474();
    return *data_95bf74 + BASE_OFFSET;
}
GUEST_EXPORT(0x002fae84, get_data_base);

// The block at (column, row) of the table, or null when out of range.
static gptr<void> block_at(gptr<void> table, u32 column, u32 row) {
    if (column >= BLOCK_COLUMNS || row >= BLOCK_ROWS) {
        return nullptr;
    }
    u32 index = row * BLOCK_COLUMNS + column;
    return gptr<void>(table.addr() + (index << BLOCK_STRIDE_SHIFT) + BLOCK_HEADER);
}
GUEST_EXPORT(0x002faea4, block_at);

// The cell at (column, row) of a block (both taken modulo 16).
static gptr<void> cell_at(gptr<void> block, u32 column, u32 row) {
    return gptr<void>(block.addr() + ((row & CELL_MASK) << CELL_ROW_SHIFT) + ((column & CELL_MASK) * CELL_SIZE));
}
GUEST_EXPORT(0x002faec8, cell_at);

// Stores the value computed for the item, if the item is a valid one.
void AcPlayer::virtual_8(gptr<u32> out) {
    if (item.is_item()) {
        *out = item_value_768800(item);
    }
}
GUEST_EXPORT(0x002faf48, AcPlayer::virtual_8);
