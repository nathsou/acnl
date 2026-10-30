// An object that covers a rectangle of grid cells (GridRect at 0) with per-cell tables. What it is exactly is not
// known yet.
#pragma once

#include "core/grid_rect.hpp"
#include "item/item.hpp"

// One cell of the table at 0x20 (12 bytes, contents not known yet).
struct GridCellSmall {
    static constexpr u32 LAYER_COUNT = 2;

    u32 unknown_00;
    gptr<void> layers[LAYER_COUNT];  // 16x16 cells each (may be null)

    // The cell at (x, z) of the block (0-15 each) in the layer, or null (outside the block, past the layers, no layer).
    gptr<void> cell_at(s32 x, s32 z, u32 layer);
    // Puts a copy of the item in that cell unless a save request blocks it; whether it did.
    bool place_item(const Item &item, s32 x, s32 z, u32 layer);
};
GUEST_OFFSET(GridCellSmall, layers, 4);
GUEST_SIZE(GridCellSmall, 12);

// One tile of a block's table (10 bytes).
struct GridTile {
    static constexpr u16 CORNER_HEIGHT_MASK = 0x1f;  // the low five bits of a corner halfword
    static constexpr u32 CORNER_HEIGHT_SHIFT = 3;    // are the height in steps of 8
    static constexpr u8 FLAGS_09_BIT_6 = 1 << 6;     // meaning not known yet

    u16 corners[4];  // one per corner of the tile (the height in the low five bits)
    u8 terrain;      // 0xff: none
    u8 flags_09;

    u32 corner_height(u32 corner) const;
};
GUEST_OFFSET(GridTile, terrain, 8);
GUEST_SIZE(GridTile, 10);

// One cell of the table at 0x24: the 16x16 tiles of a block.
struct GridCellLarge {
    static constexpr u32 SIDE = 16;

    u8 unknown_00[0x1c];
    GridTile tiles[SIDE][SIDE];  // [z][x]

    // The terrain byte of the tile at (x, z) of the block (taken modulo 16).
    u8 terrain_at(s32 x, s32 z) const;
    // Whether bit 6 of the flag byte of the tile at (x, z) is set.
    bool tile_has_flag_6(s32 x, s32 z) const;
    // The height of the tile at (x, z) (see the corners of GridTile).
    float tile_height(s32 x, s32 z) const;
};
GUEST_OFFSET(GridCellLarge, tiles, 0x1c);
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
    // Hands the small cell of the block the world position falls in, with the position inside the block; 0 if not found.
    u32 process_world_position(s32 x, s32 z, u32 argument);
    // Puts a copy of the item in the cell at the world position (see GridCellSmall::place_item); whether it did.
    bool place_item_at_world(const Item &item, s32 x, s32 z, u32 layer);
    // The same for a tile (cell_x, cell_z) of the block (block_x, block_z).
    bool place_item_in_block(const Item &item, s32 block_x, s32 block_z, s32 cell_x, s32 cell_z, u32 layer);
};
GUEST_OFFSET(GridMap, rect_10, 0x10);
GUEST_OFFSET(GridMap, cells_small, 0x20);
GUEST_OFFSET(GridMap, cells_large, 0x24);
