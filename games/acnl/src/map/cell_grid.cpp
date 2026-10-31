// A grid of 12-byte cells, addressed by (x, z) and bounds-checked by guest helpers.
#include "guest/guest.hpp"

namespace {

struct GridCell {
    u8 unknown_00[12];
};
GUEST_SIZE(GridCell, 12);

struct GridPosition {
    s32 x;
    s32 z;
};
GUEST_SIZE(GridPosition, 8);

struct CellGrid {
    u8 unknown_00[0x20];
    guest::gptr<GridCell> cells;
    u8 unknown_24[0x1c];

    gptr<GridCell> cell_at(s32 x, s32 z);
};
GUEST_OFFSET(CellGrid, cells, 0x20);

inline constexpr guest::Function<0x007482d0, u32(CellGrid &self, const GridPosition &position)> grid_contains;
inline constexpr guest::Function<0x007482bc, s32(CellGrid &self)> grid_row_length;

}  // namespace

// The cell at (x, z), or null if the position is outside the grid or the grid has no cells.
gptr<GridCell> CellGrid::cell_at(s32 x, s32 z) {
    guest::StackObject<GridPosition> position;
    position->x = x;
    position->z = z;
    if (!grid_contains(*this, *position) || !cells) {
        return nullptr;
    }
    s32 index = z * grid_row_length(*this) + x;
    return cells + index;
}
GUEST_EXPORT(0x00317148, CellGrid::cell_at);
