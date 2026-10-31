// Furniture covers several tiles: the first tile holds the furniture's item and the others hold a marker item. Finding what
// is on a tile therefore looks at the neighbours when the tile holds a marker.
#include <cstring>
#include <vector>

#include "guest/guest.hpp"
#include "item/item.hpp"
#include "core/grid_map.hpp"

namespace {

inline constexpr guest::Function<0x0030b654, bool(const Item &item)> item_has_valid_data;
inline constexpr guest::Function<0x00305570, u32(const Item &item)> item_kind_11_byte_17;
inline constexpr guest::Function<0x0076936c, u32(const Item &item)> item_kind_11_top_bits;

constexpr u32 LAYER_COUNT = 2;
constexpr u32 FOOTPRINT_KINDS = 5;  // the kinds (the byte 17 of the item data) that have a footprint
constexpr u32 ROTATIONS = 4;
constexpr u32 KIND_MASK = 0xff;
constexpr s32 SEARCH_RADIUS = 1;

// The tiles a kind of furniture covers, for each of the four rotations: offsets from the first tile (the entry 0 of each
// rotation is the first tile itself).
struct TileOffset {
    s32 x;
    s32 z;
};
GUEST_SIZE(TileOffset, 8);

struct Footprint {
    gptr<TileOffset> rotations[ROTATIONS];
    u8 tile_count;
};
GUEST_OFFSET(Footprint, tile_count, 0x10);

// The item that fills the other tiles of a furniture (the number of the item at 0x0095bfe0).
inline guest::global<Item, 0x0095bfe0> marker_item;
inline guest::global<gptr<Footprint>[FOOTPRINT_KINDS], 0x009529fc> footprints;

}  // namespace

namespace {

// The furniture whose footprint covers the tile (x, z), looked for in the eight tiles around (where its first tile is):
// its item, and where its first tile is. Null when there is none.
gptr<Item> furniture_covering(gptr<GridMap> map, s32 x, s32 z, u32 layer, s32 &first_x, s32 &first_z) {
    for (s32 z_step = -SEARCH_RADIUS; z_step <= SEARCH_RADIUS; z_step++) {
        for (s32 x_step = -SEARCH_RADIUS; x_step <= SEARCH_RADIUS; x_step++) {
            if (x_step == 0 && z_step == 0) {
                continue;
            }
            s32 candidate_x = x + x_step;
            s32 candidate_z = z + z_step;
            gptr<Item> first(map->process_world_position(candidate_x, candidate_z, layer));
            if (first == nullptr || !item_has_valid_data(*first)) {
                continue;
            }
            u32 kind = item_kind_11_byte_17(*first) & KIND_MASK;
            u32 rotation = item_kind_11_top_bits(*first) % ROTATIONS;
            if (kind >= FOOTPRINT_KINDS) {
                continue;
            }
            gptr<Footprint> footprint = (*footprints)[kind];
            for (u32 tile_index = 1; tile_index < footprint->tile_count; tile_index++) {
                const TileOffset &offset = footprint->rotations[rotation][tile_index];
                if (candidate_x + offset.x == x && candidate_z + offset.z == z) {
                    first_x = candidate_x;
                    first_z = candidate_z;
                    return first;
                }
            }
        }
    }
    return nullptr;
}

}  // namespace

// The item at a tile of a layer of the map. With `exact` that is the tile's own item (a marker for the tiles that a
// furniture covers besides its first); otherwise a marker is replaced by the item of the furniture that covers the tile (the
// first tile is searched for in the eight tiles around). The empty item when there is none.
gptr<Item> item_covering_tile(s32 x, s32 z, u32 layer, gptr<GridMap> map, bool exact) {
    if (map == nullptr || layer >= LAYER_COUNT) {
        return empty_item.ptr();
    }
    gptr<Item> tile(map->process_world_position(x, z, layer));
    if (tile == nullptr || tile->is_empty()) {
        return empty_item.ptr();
    }
    if (!tile->same_number_as(*marker_item) || exact) {
        return tile;
    }
    s32 first_x = 0;
    s32 first_z = 0;
    gptr<Item> first = furniture_covering(map, x, z, layer, first_x, first_z);
    return first != nullptr ? first : empty_item.ptr();
}
GUEST_EXPORT(0x004e0cec, item_covering_tile);

// Where the first tile of the furniture covering the tile (x, z) is: the tile itself when it holds something other than a
// marker, (-1, -1) when nothing covers it (and nothing is written for missing outputs, map or layer).
void furniture_first_tile(gptr<s32> out_x, gptr<s32> out_z, s32 x, s32 z, u32 layer, gptr<GridMap> map) {
    if (out_x == nullptr || out_z == nullptr || map == nullptr || layer >= LAYER_COUNT) {
        return;
    }
    *out_z = -1;
    *out_x = -1;
    gptr<Item> tile(map->process_world_position(x, z, layer));
    if (tile == nullptr) {
        return;
    }
    if (!tile->same_number_as(*marker_item)) {
        *out_x = x;
        *out_z = z;
        return;
    }
    s32 first_x = 0;
    s32 first_z = 0;
    if (furniture_covering(map, x, z, layer, first_x, first_z) != nullptr) {
        *out_x = first_x;
        *out_z = first_z;
    }
}
GUEST_EXPORT(0x004e424c, furniture_first_tile);

// What a furniture item is made of: its kind (byte 0) and the rotation (the low two bits of byte 1).
struct FurnitureShape {
    u8 kind;
    u8 rotation_byte;
};

// The tile offset (from the first tile) of the tile with the number in the footprint of the shape; the zero offset for tiles
// past the footprint or kinds without one.
gptr<TileOffset> footprint_tile_offset(const FurnitureShape &shape, u32 tile_index) {
    static constexpr u32 ZERO_OFFSET_ADDRESS = 0x00865620;
    gptr<Footprint> footprint = shape.kind < FOOTPRINT_KINDS ? (*footprints)[shape.kind] : gptr<Footprint>(0u);
    u32 count = shape.kind < FOOTPRINT_KINDS ? footprint->tile_count : 0;
    if (count <= tile_index) {
        return gptr<TileOffset>(ZERO_OFFSET_ADDRESS);
    }
    return footprint->rotations[shape.rotation_byte % ROTATIONS] + tile_index;
}
GUEST_EXPORT(0x007457a4, footprint_tile_offset);

namespace {

// A map of 2x2 blocks with empty layers.

// A map with a furniture and its markers (or the live map); the tile to ask about and the layer.
struct FurnitureScene {
    gptr<GridMap> map;
    s32 x;
    s32 z;
    u32 layer;
};

}  // namespace
