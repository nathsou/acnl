// What the game knows about each block of the map (the 16x16 tiles of the map's grid): the number of the block's kind
// in the cell, and two bytes the tables give for it. The checks ask whether the block is of some listed kinds.
#include "core/grid_map.hpp"

namespace {

inline constexpr guest::Function<0x00317148, gptr<GridCellSmall>(gptr<GridMap> self, s32 x, s32 z)> grid_cell_at;

constexpr u32 WORLD_MAP_COUNT = 32;
inline guest::global<gptr<GridMap>[WORLD_MAP_COUNT], 0x009b4a24> world_maps;

constexpr u32 ID_COUNT = 0x169;  // ids past the tables
constexpr u16 NO_ID = 0x169;
constexpr u8 DEFAULT_CATEGORY = 0x78;
constexpr u8 DEFAULT_KIND = 0x15;
inline guest::global<u8[ID_COUNT], 0x0094ea68> category_by_id;
inline guest::global<u8[ID_COUNT], 0x0094ebd1> kind_by_id;

// Lists of bytes in the game's data the checks look in.
constexpr u32 LIST_A_ADDRESS = 0x0090bc30;      // 3 categories
constexpr u32 LIST_KINDS_ADDRESS = 0x0090bc44;  // its first byte is a kind
constexpr u32 LIST_B_ADDRESS = 0x0090bc48;      // 3 kinds
constexpr u32 LIST_C_ADDRESS = 0x0090bc4c;      // 4 kinds
constexpr u8 CATEGORY_24 = 0x24, CATEGORY_28 = 0x28;
constexpr u16 ID_9C = 0x9c, ID_A6 = 0xa6;
constexpr u8 BLOCK_KIND_3 = 3;
constexpr u32 KIND_WORD_54_ADDRESS = 0x0090bc54;  // words whose low byte is a block kind
constexpr u32 KIND_WORD_58_ADDRESS = 0x0090bc58;
constexpr u32 BYTE_MASK = 0xff;
constexpr u16 IDS_3_TO_5[] = {3, 4, 5, 0xc, 0x12};

bool byte_is_in_list(u32 address, u32 count, u32 value) {
    for (u32 i = 0; i < count; i++) {
        if (gptr<u8>(address)[i] == value) {
            return true;
        }
    }
    return false;
}

}  // namespace

struct BlockInfo {
    gptr<GridCellSmall> cell;
    u16 id;
    u8 category;
    u8 kind;
};
GUEST_OFFSET(BlockInfo, id, 4);
GUEST_OFFSET(BlockInfo, category, 6);
GUEST_OFFSET(BlockInfo, kind, 7);
GUEST_SIZE(BlockInfo, 8);

// The block at (block_x, block_z) of the map with the given number: its cell, the id the cell starts with and the
// category and kind the tables have for that id (defaults without a block or for an id past the tables).
BlockInfo &block_info_at(BlockInfo &out, s32 block_x, s32 block_z, u32 map_number) {
    out.cell = nullptr;
    out.id = NO_ID;
    out.category = DEFAULT_CATEGORY;
    out.kind = DEFAULT_KIND;
    gptr<GridMap> map = world_maps[map_number];
    if (!map) {
        return out;
    }
    out.cell = grid_cell_at(map, block_x, block_z);
    if (!out.cell) {
        return out;
    }
    out.id = *out.cell.cast<u16>();
    if (out.id < ID_COUNT) {
        out.category = category_by_id[out.id];
        out.kind = kind_by_id[out.id];
    }
    return out;
}
GUEST_EXPORT(0x005cf3bc, block_info_at);

namespace {

BlockInfo info_of(s32 block_x, s32 block_z, u32 map_number) {
    BlockInfo info;
    block_info_at(info, block_x, block_z, map_number);
    return info;
}

}  // namespace

bool block_category_is_in_list_a(s32 block_x, s32 block_z, u32 map_number) {
    return byte_is_in_list(LIST_A_ADDRESS, 3, info_of(block_x, block_z, map_number).category);
}
GUEST_EXPORT(0x006cf25c, block_category_is_in_list_a);

bool block_kind_is_in_list_b_or_category_24_28(s32 block_x, s32 block_z, u32 map_number) {
    BlockInfo info = info_of(block_x, block_z, map_number);
    return byte_is_in_list(LIST_B_ADDRESS, 3, info.kind) || info.category == CATEGORY_28 || info.category == CATEGORY_24;
}
GUEST_EXPORT(0x002ffc18, block_kind_is_in_list_b_or_category_24_28);

bool block_kind_is_first_listed_or_id_9c_a6(s32 block_x, s32 block_z, u32 map_number) {
    BlockInfo info = info_of(block_x, block_z, map_number);
    return byte_is_in_list(LIST_KINDS_ADDRESS, 1, info.kind) || info.id == ID_9C || info.id == ID_A6;
}
GUEST_EXPORT(0x006cf3f0, block_kind_is_first_listed_or_id_9c_a6);

bool block_kind_is_in_list_c_or_id_9c_a6(s32 block_x, s32 block_z, u32 map_number) {
    BlockInfo info = info_of(block_x, block_z, map_number);
    return byte_is_in_list(LIST_C_ADDRESS, 4, info.kind) || info.id == ID_9C || info.id == ID_A6;
}
GUEST_EXPORT(0x006cf4b4, block_kind_is_in_list_c_or_id_9c_a6);

bool block_kind_is_3_or_id_is_listed(s32 block_x, s32 block_z, u32 map_number) {
    BlockInfo info = info_of(block_x, block_z, map_number);
    if (info.kind == BLOCK_KIND_3) {
        return true;
    }
    for (u16 id : IDS_3_TO_5) {
        if (info.id == id) {
            return true;
        }
    }
    return false;
}
GUEST_EXPORT(0x006cf44c, block_kind_is_3_or_id_is_listed);

// Whether the block's kind is the one the word at 0x0090bc54 (low byte) / 0x0090bc58 names.
bool block_kind_is_word_54(s32 block_x, s32 block_z, u32 map_number) {
    return info_of(block_x, block_z, map_number).kind == (*gptr<u32>(KIND_WORD_54_ADDRESS) & BYTE_MASK);
}
GUEST_EXPORT(0x006cf578, block_kind_is_word_54);

bool block_kind_is_word_58(s32 block_x, s32 block_z, u32 map_number) {
    return info_of(block_x, block_z, map_number).kind == (*gptr<u32>(KIND_WORD_58_ADDRESS) & BYTE_MASK);
}
GUEST_EXPORT(0x006cf5bc, block_kind_is_word_58);

namespace {

void fuzz_block(guest::Fuzz &f) {
    f.arguments(s32(f.below(8)) - 1, s32(f.below(8)) - 1, f.below(4));
}

}  // namespace

GUEST_FUZZ(0x006cf25c, 200, fuzz_block);
GUEST_FUZZ(0x002ffc18, 200, fuzz_block);
GUEST_FUZZ(0x006cf3f0, 200, fuzz_block);
GUEST_FUZZ(0x006cf4b4, 200, fuzz_block);
GUEST_FUZZ(0x006cf44c, 200, fuzz_block);
GUEST_FUZZ(0x005cf3bc, 200, [](guest::Fuzz &f) {
    f.arguments(f.object<BlockInfo>(), s32(f.below(8)) - 1, s32(f.below(8)) - 1, f.below(4));
});
GUEST_FUZZ(0x006cf578, 200, fuzz_block);
GUEST_FUZZ(0x006cf5bc, 200, fuzz_block);
