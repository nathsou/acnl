// The property byte of an item's data entry, and a save data check built on a byte of the save data.
#include "item/furniture_ref.hpp"
#include "item/item.hpp"

namespace {

constexpr u32 NO_DATA_PROPERTY = 5;
constexpr u8 PROPERTY_MASK = 0x0f;
constexpr u8 PROPERTY_LIMIT = 5;
constexpr u32 BLOCK_OFFSET = 0x62250;
constexpr u32 LEVEL_LIMIT = 4;

struct LevelBlock {
    u8 unknown_00[0x14];
    u8 level_14;
};
GUEST_OFFSET(LevelBlock, level_14, 0x14);

struct FlagHolder {
    u8 unknown_00;
    u8 flag_01;
};
GUEST_OFFSET(FlagHolder, flag_01, 1);

inline constexpr guest::Function<0x002fb328, gptr<u8>()> get_save_data;

}  // namespace

// The low nibble of byte 0x17 of the item's data when it is below 5, else 0; 5 for an item without data.
u32 item_property_17(const Item &item) {
    gptr<ItemData> data = item.data();
    if (!data) {
        return NO_DATA_PROPERTY;
    }
    u32 property = data.cast<FurnitureRef>()->byte_17 & PROPERTY_MASK;
    return property >= PROPERTY_LIMIT ? 0 : property;
}
GUEST_EXPORT(0x00302fec, item_property_17);

// False while the save data's level is below 4; otherwise whether the holder's flag is set.
bool level_allows_flag(const FlagHolder &holder) {
    gptr<LevelBlock> block(get_save_data().addr() + BLOCK_OFFSET);
    if (block->level_14 < LEVEL_LIMIT) {
        return false;
    }
    return holder.flag_01 != 0;
}
GUEST_EXPORT(0x0030290c, level_allows_flag);
