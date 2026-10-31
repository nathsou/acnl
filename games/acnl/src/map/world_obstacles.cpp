// What is on the map at a position: whether an item gets in the way (trees, rocks and the like), the terrain, the ground item.
#include "guest/guest.hpp"
#include "item/item.hpp"
#include "core/grid_map.hpp"
#include "graphics/hemisphere_light.hpp"

void split_world_position(s32 &block_x, s32 &block_z, s32 &cell_x, s32 &cell_z, s32 x, s32 z);

namespace {

inline constexpr guest::Function<0x003171b4, void(gptr<s32> cell_x, gptr<s32> cell_z, const Float3 &position)> position_to_cell;
inline constexpr guest::Function<0x006a69ec, void(gptr<s32> cell_x, gptr<s32> cell_z, gptr<s32> tile_x, gptr<s32> tile_z, const Float3 &position)>
    cell_and_tile_of_position;
inline constexpr guest::Function<0x002fe7cc, gptr<GridMap>(u32 index)> map_of_number;
inline constexpr guest::Function<0x006a5e34, gptr<GridMap>()> world_map_object;
inline constexpr guest::Function<0x002f74c8, u8()> read_global_byte_2;
inline constexpr guest::Function<0x002fca6c, bool(s32 x, s32 z, u32 map_number)> is_special_terrain_at;
inline constexpr guest::Function<0x005ce300, bool(s32 x, s32 z, u32 map_number)> terrain_flag_0_at;
inline constexpr guest::Function<0x00300298, bool(s32 x, s32 z, u32 map_number)> terrain_flag_1_unless_blocked;
inline constexpr guest::Function<0x002fe748, bool(const Item &item)> item_entry_flag_3;
inline constexpr guest::Function<0x00315788, u32(s32 x, s32 z, u32 map_number)> terrain_at_world_guest;
inline constexpr guest::Function<0x006c5ad8, u32(s32 block_x, s32 block_z, s32 cell_x, s32 cell_z, u32 map_number)> terrain_at_block_tile;

inline constexpr guest::Function<0x006a5e34, gptr<GridMap>()> world_map;
inline constexpr guest::Function<0x002fccc4, bool(const Item &item)> item_number_is_indexed;
inline constexpr guest::Function<0x002fe7a0, bool(const Item &item)> item_has_type_4_6_8_or_25;
inline constexpr guest::Function<0x007698a4, bool(const Item &item)> item_type_is_17;
inline constexpr guest::Function<0x002fccdc, u32(const Item &item)> indexed_item_type;
inline constexpr guest::Function<0x002fd010, gptr<u8>(const Item &item)> map_object_entry;

constexpr u32 SOLID_BYTE_OFFSET = 0xd;     // a signed byte of the map object entry: 1 and more block (meaning not known yet)
constexpr u32 OBSTACLE_TYPE = 0x12;        // the types of this one always block
constexpr u32 FIRST_LAYER = 0;

bool entry_is_solid(const Item &item) {
    gptr<u8> entry = map_object_entry(item);
    return entry && s8(entry[SOLID_BYTE_OFFSET]) >= 1;
}

}  // namespace

// Whether the item on the ground at the world position blocks it: an item with a map object entry of type 4, 6, 8 or 25 or
// of type 17 whose solid byte is positive, or one of the obstacle type. False when there is no item there.
bool item_blocks_world_position(s32 x, s32 z) {
    u32 cell = world_map()->process_world_position(x, z, FIRST_LAYER);
    if (cell == 0) {
        return false;
    }
    const Item &item = *gptr<Item>(cell);
    if (item_number_is_indexed(item) && item_has_type_4_6_8_or_25(item) && entry_is_solid(item)) {
        return true;
    }
    if (item_type_is_17(item) && entry_is_solid(item)) {
        return true;
    }
    return indexed_item_type(item) == OBSTACLE_TYPE;
}
GUEST_EXPORT(0x005980c0, item_blocks_world_position);

// The terrain at a position given in world units.
u32 terrain_at_position(const Float3 &position, u32 map_number) {
    guest::StackObject<s32> cell_x;
    guest::StackObject<s32> cell_z;
    guest::StackObject<s32> tile_x;
    guest::StackObject<s32> tile_z;
    cell_and_tile_of_position(cell_x.ptr(), cell_z.ptr(), tile_x.ptr(), tile_z.ptr(), position);
    return terrain_at_block_tile(*cell_x, *cell_z, *tile_x, *tile_z, map_number);
}
GUEST_EXPORT(0x006c5a88, terrain_at_position);

// The ground item (the first layer's cell) at a position given in world units, for the layer; 0 without the world map.
gptr<Item> item_at_position(const Float3 &position, u32 layer) {
    guest::StackObject<s32> cell_x;
    guest::StackObject<s32> cell_z;
    position_to_cell(cell_x.ptr(), cell_z.ptr(), position);
    gptr<GridMap> map = world_map();
    if (map == nullptr) {
        return nullptr;
    }
    return gptr<Item>(map->process_world_position(*cell_x, *cell_z, layer));
}
GUEST_EXPORT(0x006500f8, item_at_position);

namespace {

constexpr u32 SECOND_MAP = 1;
constexpr u32 MARKER_NUMBERS[] = {0x7ff8, 0x7ff9, 0x7ffa, 0x7ffb};  // item numbers that stand for something that is not an item

}  // namespace

// Whether the item on the ground of the second map at (x, z) is one of the numbers 0x7ff8-0x7ffb.
bool second_map_has_marker_at(s32 x, s32 z) {
    gptr<GridMap> map = map_of_number(SECOND_MAP);
    if (map == nullptr) {
        return false;
    }
    gptr<Item> item(map->process_world_position(x, z, 0));
    if (item == nullptr) {
        return false;
    }
    for (u32 number : MARKER_NUMBERS) {
        if (item->has_number(u16(number))) {
            return true;
        }
    }
    return false;
}
GUEST_EXPORT(0x002260c4, second_map_has_marker_at);

// ---- tiles that are free

namespace {

struct TerrainRecord {
    u8 bytes[8];
};
GUEST_SIZE(TerrainRecord, 8);

constexpr u32 TERRAIN_COUNT = 0xff;
constexpr u32 BLOCK_SIZE_SHIFT = 4;
constexpr s32 BLOCK_CELL_MASK = 0xf;
constexpr u32 MAP_ZERO = 0;
constexpr u32 OBJECT_SLOTS = 6;
constexpr u32 WEED_NUMBER = 0x9e;
constexpr u32 LAST_MODE = 0xa5;  // global bytes from here on have no map
constexpr u32 TERRAIN_BYTES_COUNT = 0xff;
constexpr u8 NO_TERRAIN_BYTE = 0xff;

inline guest::global<TerrainRecord[TERRAIN_COUNT], 0x0095c730> terrain_records;
inline guest::global<u8[TERRAIN_BYTES_COUNT], 0x0095d91e> terrain_bytes_d91e;
inline guest::global<u32, 0x00950694> objects_present;
inline guest::global<gptr<Float3>[OBJECT_SLOTS], 0x00997c30> tracked_objects;
inline constexpr guest::Function<0x002fe7cc, gptr<GridMap>(u32 index)> map_by_number;

}  // namespace

// The byte of the table at 0x0095d91e (the first for numbers past it).
u8 terrain_byte_d91e(u32 index) {
    return (*terrain_bytes_d91e)[index < TERRAIN_BYTES_COUNT ? index : 0];
}

// The record the terrain has in the table at 0x0095c730 (eight bytes; all 0xff for numbers past the table).
void terrain_record(TerrainRecord &out, u32 terrain) {
    if (terrain >= TERRAIN_COUNT) {
        for (u8 &byte : out.bytes) {
            byte = NO_TERRAIN_BYTE;
        }
        return;
    }
    out = (*terrain_records)[terrain];
}
GUEST_EXPORT(0x005cdfe8, terrain_record);

// Whether the terrain of the tile at the world position (x, z) of the map has record bytes 0 or 2 with a non-zero byte in
// the table at 0x0095d91e.
bool terrain_blocks_at(s32 x, s32 z, u32 map_number) {
    s32 block_x = x >> BLOCK_SIZE_SHIFT;
    s32 block_z = z >> BLOCK_SIZE_SHIFT;
    gptr<GridMap> map = map_by_number(map_number);
    if (map == nullptr) {
        return false;
    }
    gptr<GridCellLarge> block = map->large_cell_at(block_x, block_z);
    if (block == nullptr) {
        return false;
    }
    u32 terrain = block->terrain_at(x & BLOCK_CELL_MASK, z & BLOCK_CELL_MASK);
    TerrainRecord record;
    terrain_record(record, terrain);
    return (terrain_byte_d91e(record.bytes[0]) | terrain_byte_d91e(record.bytes[2])) != 0;
}
GUEST_EXPORT(0x006c6590, terrain_blocks_at);

// Whether one of the six tracked objects is in the cell (the cell of its position).
bool object_in_cell(s32 cell_x, s32 cell_z) {
    if (*objects_present == 0) {
        return false;
    }
    for (gptr<Float3> position : *tracked_objects) {
        if (position == nullptr) {
            continue;
        }
        guest::StackObject<s32> x;
        guest::StackObject<s32> z;
        position_to_cell(x.ptr(), z.ptr(), *position);
        if (*x == cell_x && *z == cell_z) {
            return true;
        }
    }
    return false;
}
GUEST_EXPORT(0x002266c8, object_in_cell);

// Whether the tile can be used for something that needs it free: the map exists and the global byte is below 0xa5, the terrain
// is not a special one, has flag 0 (`ground`) or flag 1 away from blocked tiles (otherwise), does not block, has no marker of the
// second map and no tracked object; the tile holds nothing, or a weed (unless `skip_weed_check`), or something without the entry
// flag 3.
bool tile_is_free(s32 x, s32 z, bool skip_weed_check, bool ground) {
    gptr<GridMap> map = world_map_object();
    u8 mode = read_global_byte_2();
    if (map == nullptr || mode >= LAST_MODE) {
        return false;
    }
    if (is_special_terrain_at(x, z, MAP_ZERO)) {
        return false;
    }
    if (ground ? !terrain_flag_0_at(x, z, MAP_ZERO) : !terrain_flag_1_unless_blocked(x, z, MAP_ZERO)) {
        return false;
    }
    if (terrain_blocks_at(x, z, MAP_ZERO) || second_map_has_marker_at(x, z) || object_in_cell(x, z)) {
        return false;
    }
    gptr<Item> item(map->process_world_position(x, z, 0));
    if (item == nullptr) {
        return false;
    }
    if (item->is_empty()) {
        return true;
    }
    if (!skip_weed_check && item->has_number(u16(WEED_NUMBER))) {
        return true;
    }
    return !item_entry_flag_3(*item);
}
GUEST_EXPORT(0x0051f70c, tile_is_free);

// The height of the tile at a world position (x, z) of the map with the number; 0 without the map or the block.
float tile_height_at_world(s32 x, s32 z, u32 map_number) {
    s32 block_x, block_z, cell_x, cell_z;
    split_world_position(block_x, block_z, cell_x, cell_z, x, z);
    gptr<GridMap> map = map_by_number(map_number);
    if (map == nullptr) {
        return 0.0f;
    }
    gptr<GridCellLarge> block = map->large_cell_at(block_x, block_z);
    if (block == nullptr) {
        return 0.0f;
    }
    return block->tile_height(cell_x, cell_z);
}
GUEST_EXPORT(0x006c602c, tile_height_at_world);

// The height of the tile at a position given in world units, in the map with the number; 0 without the map or the block.
float tile_height_at_position(const Float3 &position, u32 map_number) {
    guest::StackObject<s32> cell_x;
    guest::StackObject<s32> cell_z;
    guest::StackObject<s32> tile_x;
    guest::StackObject<s32> tile_z;
    cell_and_tile_of_position(cell_x.ptr(), cell_z.ptr(), tile_x.ptr(), tile_z.ptr(), position);
    gptr<GridMap> map = map_by_number(map_number);
    if (map == nullptr) {
        return 0.0f;
    }
    gptr<GridCellLarge> block = map->large_cell_at(*cell_x, *cell_z);
    if (block == nullptr) {
        return 0.0f;
    }
    return block->tile_height(*tile_x, *tile_z);
}
GUEST_EXPORT(0x006c5fa0, tile_height_at_position);

// The height of the tile (cell_x, cell_z) of the block (block_x, block_z) of the map with the number; 0 without the map or block.
float tile_height_of_block_tile(s32 block_x, s32 block_z, s32 cell_x, s32 cell_z, u32 map_number) {
    gptr<GridMap> map = map_by_number(map_number);
    if (map == nullptr) {
        return 0.0f;
    }
    gptr<GridCellLarge> block = map->large_cell_at(block_x, block_z);
    if (block == nullptr) {
        return 0.0f;
    }
    return block->tile_height(cell_x, cell_z);
}
GUEST_EXPORT(0x006c60b8, tile_height_of_block_tile);

namespace {

constexpr u32 CELL_SHIFT = 5;  // a cell is 32 world units wide
inline guest::global<s32, 0x0085f2e8> cell_origin_x;
inline guest::global<s32, 0x0085f2ec> cell_origin_z;

}  // namespace

// The position of the corner of the cell (x, z): its x and z in world units, and the height of the tile there.
void cell_corner_with_height(Float3 &out, s32 x, s32 z) {
    out.v[0] = float(s32(u32(*cell_origin_x) + (u32(x) << CELL_SHIFT)));
    out.v[1] = 0.0f;
    out.v[2] = float(s32(u32(*cell_origin_z) + (u32(z) << CELL_SHIFT)));
    out.v[1] = tile_height_at_world(x, z, MAP_ZERO);
}
GUEST_EXPORT(0x006a6dbc, cell_corner_with_height);

namespace {

constexpr u32 BLOCK_CELLS_SHIFT = 4;         // 16 cells to a block
constexpr u32 CELL_WORLD_SHIFT_512 = 9;      // a block cell of the position helper is 512 units
constexpr u8 TERRAIN_FIRST_BYTE_WANTED = 0xf;

}  // namespace

// Whether the tile at the world position (x, z) of the map has flag 6 in its flag byte (false without the map or block).
bool tile_has_flag_6_at_world(s32 x, s32 z, u32 map_number) {
    s32 block_x, block_z, cell_x, cell_z;
    split_world_position(block_x, block_z, cell_x, cell_z, x, z);
    gptr<GridMap> map = map_by_number(map_number);
    if (map == nullptr) {
        return false;
    }
    gptr<GridCellLarge> block = map->large_cell_at(block_x, block_z);
    return block != nullptr && block->tile_has_flag_6(cell_x, cell_z);
}
GUEST_EXPORT(0x006c8368, tile_has_flag_6_at_world);

// The position of the corner of the tile (cell_x, cell_z) of the block (block_x, block_z): x and z in world units, and the height.
void tile_corner_with_height(Float3 &out, s32 block_x, s32 block_z, s32 cell_x, s32 cell_z) {
    s32 column = cell_x + (block_x << BLOCK_CELLS_SHIFT);
    s32 row = cell_z + (block_z << BLOCK_CELLS_SHIFT);
    out.v[0] = float(s32(u32(*cell_origin_x) + (u32(column) << CELL_SHIFT)));
    out.v[1] = 0.0f;
    out.v[2] = float(s32(u32(*cell_origin_z) + (u32(row) << CELL_SHIFT)));
    out.v[1] = tile_height_of_block_tile(block_x, block_z, cell_x, cell_z, MAP_ZERO);
}
GUEST_EXPORT(0x006a6e1c, tile_corner_with_height);

// Whether the first byte of the terrain's record at (x, z) is 0xf.
bool terrain_record_starts_with_f(s32 x, s32 z, u32 map_number) {
    TerrainRecord record;
    terrain_record(record, terrain_at_world_guest(x, z, map_number));
    return record.bytes[0] == TERRAIN_FIRST_BYTE_WANTED;
}
GUEST_EXPORT(0x006c8560, terrain_record_starts_with_f);

// The position of the corner of the block (x, z) in world units (512 units a block), at height 0.
void block_corner_position(Float3 &out, s32 x, s32 z) {
    out.v[1] = 0.0f;
    out.v[0] = float(s32(u32(x) << CELL_WORLD_SHIFT_512));
    out.v[2] = float(s32(u32(z) << CELL_WORLD_SHIFT_512));
}
GUEST_EXPORT(0x006a5e04, block_corner_position);
