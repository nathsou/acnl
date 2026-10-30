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

bool GridMap::place_item_at_world(const Item &item, s32 x, s32 z, u32 layer) {
    s32 block_x, block_z, cell_x, cell_z;
    split_world_position(block_x, block_z, cell_x, cell_z, x, z);
    gptr<GridCellSmall> cell = small_cell(*this, block_x, block_z);
    if (!cell) {
        return false;
    }
    return cell->place_item(item, cell_x, cell_z, layer);
}
GUEST_EXPORT(0x002fc994, GridMap::place_item_at_world);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

static gptr<GridMap> some_map(guest::Fuzz &f) {
    auto map = f.object<GridMap>();
    s32 x0 = f.below(3), y0 = f.below(3);
    map->rect.min = {x0, y0};
    map->rect.max = {x0 + s32(f.below(4)), y0 + s32(f.below(4))};
    map->rect_10.min = {s32(f.below(3)), s32(f.below(3))};
    map->rect_10.max = {map->rect_10.min.x + s32(f.below(4)), map->rect_10.min.y + s32(f.below(4))};
    u32 cells = 64;
    auto small = f.allocate(cells * sizeof(GridCellSmall));
    memset(small.get(), 0, cells * sizeof(GridCellSmall));
    map->cells_small = f.below(5) ? small.cast<GridCellSmall>() : gptr<GridCellSmall>(nullptr);
    map->cells_large = f.below(5) ? f.allocate(16).cast<GridCellLarge>() : gptr<GridCellLarge>(nullptr);
    return map;
}

// A cell whose layers (when it has them) are 16x16 cells of 4 bytes.
static gptr<GridCellSmall> some_layered_cell(guest::Fuzz &f) {
    constexpr u32 LAYER_BYTES = 16 * 16 * sizeof(Item);
    auto cell = f.object<GridCellSmall>();
    for (gptr<void> &layer : cell->layers) {
        layer = f.below(4) ? f.allocate(LAYER_BYTES) : gptr<void>(nullptr);
    }
    return cell;
}

static s32 some_coordinate(guest::Fuzz &f) {
    return s32(f.below(8)) - 2;
}

GUEST_FUZZ(0x0075291c, 300, [](guest::Fuzz &f) { f.arguments(some_map(f), some_coordinate(f), some_coordinate(f)); });
GUEST_FUZZ(0x007529a0, 200, [](guest::Fuzz &f) { f.arguments(some_map(f)); });
GUEST_FUZZ(0x007529d8, 300, [](guest::Fuzz &f) { f.arguments(some_map(f), some_coordinate(f), some_coordinate(f)); });
GUEST_FUZZ(0x00752a80, 200, [](guest::Fuzz &f) { f.arguments(some_map(f), f.below(4), f.below(2)); });
GUEST_FUZZ(0x00752b44, 300, [](guest::Fuzz &f) {
    f.arguments(some_map(f), some_coordinate(f), some_coordinate(f), f.below(4), f.below(4), f.below(2));
});
GUEST_FUZZ(0x006a6ec0, 200, [](guest::Fuzz &f) {
    f.arguments(f.object<s32>(), f.object<s32>(), f.object<s32>(), f.object<s32>(), s32(f.below(100)) - 50,
                s32(f.below(100)) - 50);
});
GUEST_FUZZ(0x002feb00, 300, [](guest::Fuzz &f) {
    f.arguments(some_map(f), s32(f.below(100)) - 20, s32(f.below(100)) - 20, f.below(2));
});
GUEST_FUZZ(0x0075281c, 300, [](guest::Fuzz &f) {
    auto cell = some_layered_cell(f);
    f.arguments(cell, s32(f.below(20)) - 2, s32(f.below(20)) - 2, f.below(4));
});
GUEST_FUZZ(0x00752820, 300, [](guest::Fuzz &f) {
    auto cell = some_layered_cell(f);
    f.arguments(cell, s32(f.below(20)) - 2, s32(f.below(20)) - 2, f.below(4));
});
GUEST_FUZZ(0x0057bce0, 300, [](guest::Fuzz &f) {
    auto cell = some_layered_cell(f);
    f.arguments(cell, f.object<Item>(), s32(f.below(20)) - 2, s32(f.below(20)) - 2, f.below(3));
});
GUEST_FUZZ(0x002fc994, 300, [](guest::Fuzz &f) {
    auto map = some_map(f);
    constexpr u32 CELLS = 16;
    auto cells = f.allocate(CELLS * sizeof(GridCellSmall)).cast<GridCellSmall>();
    for (u32 i = 0; i < CELLS; i++) {
        cells[i].layers[0] = f.allocate(16 * 16 * sizeof(Item));
        cells[i].layers[1] = f.allocate(16 * 16 * sizeof(Item));
    }
    map->cells_small = cells;
    map->rect.min = {0, 0};
    map->rect.max = {3, 3};
    f.arguments(map, f.object<Item>(), s32(f.below(80)) - 8, s32(f.below(80)) - 8, f.below(3));
});
