// An object that covers a rectangle of grid cells (GridRect at 0) with per-cell tables. What it is exactly is not
// known yet.
#pragma once

#include "core/grid_rect.hpp"

// One cell of the table at 0x20 (12 bytes, contents not known yet).
struct GridCellSmall {
    u8 unknown_00[12];
};
GUEST_SIZE(GridCellSmall, 12);

// One cell of the table at 0x24 (0xa1c bytes, contents not known yet).
struct GridCellLarge {
    u8 unknown_00[0xa1c];
};
GUEST_SIZE(GridCellLarge, 0xa1c);

struct GridMap {
    GridRect rect;
    GridRect rect_10;  // a second area (meaning not known yet)
    gptr<GridCellSmall> cells_small;  // may be null; one per cell of rect
    gptr<GridCellLarge> cells_large;  // may be null; one per cell of rect

    // The large cell at (x, y), or null when outside rect or without a table.
    gptr<GridCellLarge> large_cell_at(s32 x, s32 y);
    // Whether the point the recompiled f_0052ee54 reports is inside rect_10.
    bool reported_point_in_rect_10();
    bool rect_10_contains(s32 x, s32 y);
    // Looks up the small cell at the point f_006a69ec reports and hands it to f_0075281c; 0 if not found.
    u32 process_reported_cell(u32 query, u32 argument);
    // Hands the small cell at (x, y) to f_0075281c; 0 if not found.
    u32 process_cell(s32 x, s32 y, u32 a, u32 b, u32 c);
};
GUEST_OFFSET(GridMap, rect_10, 0x10);
GUEST_OFFSET(GridMap, cells_small, 0x20);
GUEST_OFFSET(GridMap, cells_large, 0x24);
