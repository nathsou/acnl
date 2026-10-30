// Whether the item on the map at a world position is one that gets in the way (trees, rocks and the like).
#include "core/grid_map.hpp"

namespace {

inline constexpr guest::Function<0x006a5e34, gptr<GridMap>()> world_map;
inline constexpr guest::Function<0x002fccc4, bool(const Item &item)> item_number_is_indexed;
inline constexpr guest::Function<0x002fe7a0, bool(const Item &item)> item_has_type_4_6_8_or_25;
inline constexpr guest::Function<0x007698a4, bool(const Item &item)> item_type_is_17;
inline constexpr guest::Function<0x002fccdc, u32(const Item &item)> indexed_item_type;
inline constexpr guest::Function<0x002fd010, gptr<u8>(const Item &item)> map_object_entry;

constexpr u32 SOLID_BYTE_OFFSET = 0xd;     // a signed byte of the map object entry: 1 and more block (meaning not known yet)
constexpr u32 OBSTACLE_TYPE = 0x12;        // the types of this one always block
constexpr u32 FIRST_LAYER = 0;
constexpr u32 WORLD_COORDINATE_RANGE = 0x100;

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
GUEST_FUZZ(0x005980c0, 400, [](guest::Fuzz &f) {
    f.arguments(s32(f.below(WORLD_COORDINATE_RANGE)), s32(f.below(WORLD_COORDINATE_RANGE)));
});
