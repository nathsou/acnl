// The terrain of the map: each block has a table of 16x16 tiles, one of whose bytes is the terrain.
#include "core/grid_map.hpp"

namespace {

constexpr u32 TILE_MASK = GridCellLarge::SIDE - 1;
constexpr u32 WORLD_MAP_COUNT = 32;
constexpr u32 BLOCK_SHIFT = 4;
constexpr u32 BLOCK_MASK = 0xf;
constexpr u8 NO_TERRAIN = 0xff;

// The special terrains is_special_terrain asks for (what they are is not known yet).
constexpr u8 SPECIAL_TERRAINS[] = {2, 3, 4, 0xa2, 0xa3, 0xa4, 0xa5, 0xf8};

// Properties of the terrains, by terrain number (the number 0xff and above reads as 0): flag bits and a signed value.
constexpr u32 TERRAIN_TABLE_SIZE = 0xff;
constexpr u8 TERRAIN_FLAG_0 = 1 << 0;
constexpr u8 TERRAIN_FLAG_3 = 1 << 3;
constexpr u32 TERRAIN_FLAG_3_SHIFT = 3;
inline guest::global<u8[TERRAIN_TABLE_SIZE], 0x0095dd1a> terrain_flags;
inline guest::global<s8[TERRAIN_TABLE_SIZE], 0x0095d720> terrain_values;

// Terrains that come in pairs of the lists the checks look for (what they are is not known yet).
constexpr u32 LIST_A_BYTES = 6;
constexpr u32 LIST_B_BYTES = 16;
constexpr u32 LIST_A_ADDRESS = 0x0089065e;
constexpr u32 LIST_B_ADDRESS = 0x00890672;
constexpr u32 LIST_C_ADDRESS = 0x0089066a;
constexpr u32 LIST_C_BYTES = 8;
constexpr u32 TERRAIN_0X10 = 0x10;
constexpr u32 TERRAIN_0XF9 = 0xf9;
constexpr u32 TERRAIN_0X11 = 0x11;

u32 table_index(u32 terrain) {
    return terrain >= TERRAIN_TABLE_SIZE ? 0 : terrain;
}

bool is_special_terrain(u32 terrain) {
    for (u8 special : SPECIAL_TERRAINS) {
        if (terrain == special) {
            return true;
        }
    }
    return false;
}

bool is_in_list(u32 address, u32 count, u32 terrain) {
    for (u32 i = 0; i < count; i++) {
        if (gptr<u8>(address)[i] == terrain) {
            return true;
        }
    }
    return false;
}

inline guest::global<gptr<GridMap>[WORLD_MAP_COUNT], 0x009b4a24> world_maps;

}  // namespace

u8 GridCellLarge::terrain_at(s32 x, s32 z) const {
    return tiles[u32(z) & TILE_MASK][u32(x) & TILE_MASK].terrain;
}
GUEST_EXPORT(0x0075d608, GridCellLarge::terrain_at);
GUEST_FUZZ(0x0075d608, 200, [](guest::Fuzz &f) {
    f.arguments(f.object<GridCellLarge>(), s32(f.number()), s32(f.number()));
});

// The terrain of the tile (cell_x, cell_z) of the block (block_x, block_z) of the map with the given number; 0 when the
// map or the block does not exist and for the no-terrain value.
u32 terrain_at_block_tile(s32 block_x, s32 block_z, s32 cell_x, s32 cell_z, u32 map_number) {
    gptr<GridMap> map = world_maps[map_number];
    if (!map) {
        return 0;
    }
    gptr<GridCellLarge> block = map->large_cell_at(block_x, block_z);
    if (!block) {
        return 0;
    }
    u8 terrain = block->terrain_at(cell_x, cell_z);
    return terrain < NO_TERRAIN ? terrain : 0;
}
GUEST_EXPORT(0x006c5ad8, terrain_at_block_tile);
GUEST_FUZZ(0x006c5ad8, 200, [](guest::Fuzz &f) {
    f.arguments(s32(f.below(10)) - 2, s32(f.below(10)) - 2, s32(f.below(20)) - 2, s32(f.below(20)) - 2, f.below(4));
});

// The terrain at a world position (see split_world_position).
u32 terrain_at_world(s32 x, s32 z, u32 map_number) {
    return terrain_at_block_tile(x >> BLOCK_SHIFT, z >> BLOCK_SHIFT, x & BLOCK_MASK, z & BLOCK_MASK, map_number);
}
GUEST_EXPORT(0x00315788, terrain_at_world);
GUEST_FUZZ(0x00315788, 200, [](guest::Fuzz &f) {
    f.arguments(s32(f.below(200)) - 20, s32(f.below(200)) - 20, f.below(4));
});

// Whether the terrain at a world position is one of the special ones.
bool is_special_terrain_at(s32 x, s32 z, u32 map_number) {
    return is_special_terrain(terrain_at_world(x, z, map_number));
}
GUEST_EXPORT(0x002fca6c, is_special_terrain_at);

// ... and the same for a tile of a block.
bool is_special_terrain_at_block_tile(s32 block_x, s32 block_z, s32 cell_x, s32 cell_z, u32 map_number) {
    return is_special_terrain(terrain_at_block_tile(block_x, block_z, cell_x, cell_z, map_number));
}
GUEST_EXPORT(0x006c5a3c, is_special_terrain_at_block_tile);

// Terrain flag 0 of the terrain at a world position.
bool terrain_flag_0_at(s32 x, s32 z, u32 map_number) {
    return (terrain_flags[table_index(terrain_at_world(x, z, map_number))] & TERRAIN_FLAG_0) != 0;
}
GUEST_EXPORT(0x005ce300, terrain_flag_0_at);

// Terrain flag 3 of the terrain at a world position, and of a tile of a block.
u32 terrain_flag_3_at(s32 x, s32 z, u32 map_number) {
    return (terrain_flags[table_index(terrain_at_world(x, z, map_number))] & TERRAIN_FLAG_3) >> TERRAIN_FLAG_3_SHIFT;
}
GUEST_EXPORT(0x005cdf88, terrain_flag_3_at);

u32 terrain_flag_3_at_block_tile(s32 block_x, s32 block_z, s32 cell_x, s32 cell_z, u32 map_number) {
    u32 terrain = terrain_at_block_tile(block_x, block_z, cell_x, cell_z, map_number);
    return (terrain_flags[table_index(terrain)] & TERRAIN_FLAG_3) >> TERRAIN_FLAG_3_SHIFT;
}
GUEST_EXPORT(0x006c5744, terrain_flag_3_at_block_tile);

bool terrain_is_0x10_at(s32 x, s32 z, u32 map_number) {
    return terrain_at_world(x, z, map_number) == TERRAIN_0X10;
}
GUEST_EXPORT(0x006c5ed4, terrain_is_0x10_at);

bool terrain_is_0xf9_at(s32 x, s32 z, u32 map_number) {
    return terrain_at_world(x, z, map_number) == TERRAIN_0XF9;
}
GUEST_EXPORT(0x006c56c8, terrain_is_0xf9_at);

bool terrain_is_0x11_at(s32 x, s32 z, u32 map_number) {
    return terrain_at_world(x, z, map_number) == TERRAIN_0X11;
}
GUEST_EXPORT(0x006c86f8, terrain_is_0x11_at);

bool terrain_is_in_list_a_at(s32 x, s32 z, u32 map_number) {
    return is_in_list(LIST_A_ADDRESS, LIST_A_BYTES, terrain_at_world(x, z, map_number));
}
GUEST_EXPORT(0x006c778c, terrain_is_in_list_a_at);

bool terrain_is_in_list_b_at(s32 x, s32 z, u32 map_number) {
    return is_in_list(LIST_B_ADDRESS, LIST_B_BYTES, terrain_at_world(x, z, map_number));
}
GUEST_EXPORT(0x006c79c8, terrain_is_in_list_b_at);

bool terrain_is_in_list_c_at(s32 x, s32 z, u32 map_number) {
    return is_in_list(LIST_C_ADDRESS, LIST_C_BYTES, terrain_at_world(x, z, map_number));
}
GUEST_EXPORT(0x006c77d8, terrain_is_in_list_c_at);

// The signed value the terrain table has for the terrain at a world position.
s32 terrain_value_at(s32 x, s32 z, u32 map_number) {
    return terrain_values[table_index(terrain_at_world(x, z, map_number))];
}
GUEST_EXPORT(0x006c8928, terrain_value_at);

namespace {

// Fuzzing: a world position and a map number
void fuzz_world_position(guest::Fuzz &f) {
    f.arguments(s32(f.below(200)) - 20, s32(f.below(200)) - 20, f.below(4));
}
void fuzz_block_tile(guest::Fuzz &f) {
    f.arguments(s32(f.below(10)) - 2, s32(f.below(10)) - 2, s32(f.below(20)) - 2, s32(f.below(20)) - 2, f.below(4));
}

}  // namespace

GUEST_FUZZ(0x002fca6c, 200, fuzz_world_position);
GUEST_FUZZ(0x006c5a3c, 200, fuzz_block_tile);
GUEST_FUZZ(0x005ce300, 200, fuzz_world_position);
GUEST_FUZZ(0x005cdf88, 200, fuzz_world_position);
GUEST_FUZZ(0x006c5744, 200, fuzz_block_tile);
GUEST_FUZZ(0x006c5ed4, 200, fuzz_world_position);
GUEST_FUZZ(0x006c86f8, 200, fuzz_world_position);
GUEST_FUZZ(0x006c56c8, 200, fuzz_world_position);
GUEST_FUZZ(0x006c778c, 200, fuzz_world_position);
GUEST_FUZZ(0x006c79c8, 200, fuzz_world_position);
GUEST_FUZZ(0x006c77d8, 200, fuzz_world_position);
GUEST_FUZZ(0x006c8928, 200, fuzz_world_position);
