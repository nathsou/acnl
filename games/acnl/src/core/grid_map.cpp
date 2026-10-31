#include "core/grid_map.hpp"

#include "core/block_rect.hpp"

namespace {

inline constexpr guest::Function<0x00607474, bool()> request_matches_current_source;
inline constexpr guest::Function<0x00607bdc, bool()> request_is_reserved;
inline constexpr guest::Function<0x006074b4, bool()> request_matches_slot_table;
inline constexpr guest::Function<0x006077c0, bool(u32 slot)> request_is_for_player;

constexpr u32 PLAYER_SLOTS = 4;
constexpr u32 BLOCK_SHIFT = 4;
constexpr s32 BLOCK_MASK = 0xf;

// Writes a point (unknown meaning of the source).
inline constexpr guest::Function<0x0052ee54, void(GridPoint &out)> get_reported_point;
// Produces a point and two more values from a query.
inline constexpr guest::Function<0x006a69ec, void(s32 &x, s32 &y, u32 &first, u32 &second, u32 query)>
    get_reported_cell;
inline constexpr guest::Function<0x0075281c, u32(gptr<GridCellSmall> cell, u32 a, u32 b, u32 c)> process_small_cell;
inline constexpr guest::Function<0x002faec8, gptr<void>(gptr<void> block, u32 column, u32 row)> block_cell_at;

gptr<GridCellSmall> small_cell(GridMap &map, s32 x, s32 y) {
    GridPoint point{x, y};
    if (!map.rect.contains(point) || !map.cells_small) {
        return nullptr;
    }
    s32 index = s32(u32(y) * u32(map.rect.width()) + u32(x));
    return map.cells_small + index;
}

}  // namespace

gptr<GridCellLarge> GridMap::large_cell_at(s32 x, s32 y) {
    GridPoint point{x, y};
    if (!rect.contains(point) || !cells_large) {
        return nullptr;
    }
    s32 index = s32(u32(y) * u32(rect.width()) + u32(x));
    return cells_large + index;
}
GUEST_EXPORT(0x0075291c, GridMap::large_cell_at);

bool GridMap::reported_point_in_rect_10() {
    guest::StackObject<GridPoint> point;
    get_reported_point(*point);
    return rect_10.contains(*point);
}
GUEST_EXPORT(0x007529a0, GridMap::reported_point_in_rect_10);

bool GridMap::rect_10_contains(s32 x, s32 y) {
    GridPoint point{x, y};
    return rect_10.contains(point);
}
GUEST_EXPORT(0x007529d8, GridMap::rect_10_contains);

u32 GridMap::process_reported_cell(u32 query, u32 argument) {
    guest::StackObject<s32> x;
    guest::StackObject<s32> y;
    guest::StackObject<u32> first;
    guest::StackObject<u32> second;
    *x = 0;
    *y = 0;
    *first = 0;
    *second = 0;
    get_reported_cell(*x, *y, *first, *second, query);
    gptr<GridCellSmall> cell = small_cell(*this, *x, *y);
    if (!cell) {
        return 0;
    }
    return process_small_cell(cell, *first, *second, argument);
}
GUEST_EXPORT(0x00752a80, GridMap::process_reported_cell);

u32 GridMap::process_cell(s32 x, s32 y, u32 a, u32 b, u32 c) {
    gptr<GridCellSmall> cell = small_cell(*this, x, y);
    if (!cell) {
        return 0;
    }
    return process_small_cell(cell, a, b, c);
}
GUEST_EXPORT(0x00752b44, GridMap::process_cell);

gptr<void> GridCellSmall::cell_at(s32 x, s32 z, u32 layer) {
    if (layer >= LAYER_COUNT) {
        return nullptr;
    }
    GridPoint point{x, z};
    if (!block_cell_rect()->contains(point) || !layers[layer]) {
        return nullptr;
    }
    return block_cell_at(layers[layer], u32(x), u32(z));
}
GUEST_EXPORT(0x0075281c, GridCellSmall::cell_at);
GUEST_EXPORT(0x00752820, GridCellSmall::cell_at);

// Puts a copy of the item in the cell at (x, z) of the layer, unless a save request is using the save data (for the
// current source, the slot table or one of the players); returns whether it was put there.
bool GridCellSmall::place_item(const Item &item, s32 x, s32 z, u32 layer) {
    if (request_matches_current_source() || request_is_reserved() || request_matches_slot_table()) {
        return false;
    }
    for (u32 slot = 0; slot < PLAYER_SLOTS; slot++) {
        if (request_is_for_player(slot)) {
            return false;
        }
    }
    gptr<Item> cell = cell_at(x, z, layer).cast<Item>();
    if (!cell) {
        return false;
    }
    copy_item(*cell, item);
    return true;
}
GUEST_EXPORT(0x0057bce0, GridCellSmall::place_item);

// Splits a world position into the block it falls in and the position inside the block (blocks are 16 units wide, and
// the position inside is never negative).
void split_world_position(s32 &block_x, s32 &block_z, s32 &cell_x, s32 &cell_z, s32 x, s32 z) {
    block_x = x >> BLOCK_SHIFT;
    block_z = z >> BLOCK_SHIFT;
    cell_x = x & BLOCK_MASK;
    cell_z = z & BLOCK_MASK;
}
GUEST_EXPORT(0x006a6ec0, split_world_position);

u32 GridMap::process_world_position(s32 x, s32 z, u32 argument) {
    s32 block_x, block_z, cell_x, cell_z;
    split_world_position(block_x, block_z, cell_x, cell_z, x, z);
    return process_cell(block_x, block_z, u32(cell_x), u32(cell_z), argument);
}
GUEST_EXPORT(0x002feb00, GridMap::process_world_position);

bool GridMap::place_item_in_block(const Item &item, s32 block_x, s32 block_z, s32 cell_x, s32 cell_z, u32 layer) {
    gptr<GridCellSmall> cell = small_cell(*this, block_x, block_z);
    if (!cell) {
        return false;
    }
    return cell->place_item(item, cell_x, cell_z, layer);
}
GUEST_EXPORT(0x00581428, GridMap::place_item_in_block);

bool GridMap::place_item_at_world(const Item &item, s32 x, s32 z, u32 layer) {
    s32 block_x, block_z, cell_x, cell_z;
    split_world_position(block_x, block_z, cell_x, cell_z, x, z);
    return place_item_in_block(item, block_x, block_z, cell_x, cell_z, layer);
}
GUEST_EXPORT(0x002fc994, GridMap::place_item_at_world);
