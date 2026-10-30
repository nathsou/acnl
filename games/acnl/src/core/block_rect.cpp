#include "core/block_rect.hpp"

#include "core/word_pair.hpp"

namespace {

inline constexpr guest::Function<0x002fe7dd, bool(gptr<u32> flag)> claim_flag;
inline constexpr guest::Function<0x0052f074, gptr<GridPoint>()> zero_point;

constexpr s32 BLOCK_LAST_CELL = 15;
constexpr s32 GRID_LAST_CELL = 3;  // the 4x4 grid of entries
constexpr u32 ENTRY_BYTES = 2;
constexpr u32 GRID_ROW_BYTES = 4 * ENTRY_BYTES;
constexpr u32 GRID_FIRST_ENTRY = 2;  // where the entries start in the table

inline guest::global<u32, 0x0094e4c0> block_rect_guard;
inline guest::global<GridRect, 0x0098a124> block_rect;
inline guest::global<u32, 0x0095c000> grid_rect_guard;
inline guest::global<GridRect, 0x00ad5384> grid_rect;

}  // namespace

gptr<GridRect> block_cell_rect() {
    if ((*block_rect_guard & 1) == 0 && claim_flag(block_rect_guard.ptr())) {
        block_rect->min = *zero_point();
        block_rect->max = GridPoint{BLOCK_LAST_CELL, BLOCK_LAST_CELL};
    }
    return block_rect.ptr();
}
GUEST_EXPORT(0x0057bb98, block_cell_rect);
GUEST_FUZZ(0x0057bb98, 50, [](guest::Fuzz &f) { f.arguments(); });

// Whether the cell is inside a block.
bool cell_is_valid(u32 column, u32 row) {
    GridPoint point{s32(column), s32(row)};
    return block_cell_rect()->contains(point);
}
GUEST_EXPORT(0x0057bc2c, cell_is_valid);
GUEST_FUZZ(0x0057bc2c, 200, [](guest::Fuzz &f) {
    f.arguments(f.pick<u32>({0, 5, 15, 16, 0xffffffffu, f.below(20)}), f.pick<u32>({0, 7, 15, 16, 0xffffffffu, f.below(20)}));
});

// The address of the entry at (x, z) in a table of 4x4 entries of two bytes that starts at 2 (the first entry when the
// position is outside the grid).
gptr<u8> grid_entry_address(gptr<u8> table, s32 x, s32 z) {
    if ((*grid_rect_guard & 1) == 0 && claim_flag(grid_rect_guard.ptr())) {
        grid_rect->min = *zero_point();
        grid_rect->max = GridPoint{GRID_LAST_CELL, GRID_LAST_CELL};
    }
    GridPoint point{x, z};
    if (!grid_rect->contains(point)) {
        return table + GRID_FIRST_ENTRY;
    }
    return table + u32(z) * GRID_ROW_BYTES + u32(x) * ENTRY_BYTES + GRID_FIRST_ENTRY;
}
GUEST_EXPORT(0x002ebc04, grid_entry_address);
GUEST_FUZZ(0x002ebc04, 200, [](guest::Fuzz &f) {
    f.arguments(f.allocate(0x40), s32(f.below(8)) - 2, s32(f.below(8)) - 2);
});
