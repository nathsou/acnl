// The items of a villager record by one running index: the long list, then two single items, then the owner's four.
#include "save/villager.hpp"

namespace {

constexpr u32 LONG_LIST_SIZE = 10;
constexpr u32 INDEX_ITEM_24E6 = 10;
constexpr u32 INDEX_ITEM_24EA = 11;
constexpr u32 INDEX_FIRST_OWNER_ITEM = 12;
constexpr u32 INDEX_LIMIT = 16;  // indices at or above give the empty item

inline constexpr guest::Function<0x003107d5, void(Item &out, const SaveVillager &owner, u32 slot)> get_owner_item;

}  // namespace

// A copy of the villager's item with the index (0-9 the long list, 10 and 11 the single items, 12-15 the owner's
// items; the empty item for any other).
Item &copy_villager_item_by_index(Item &out, const SaveVillager &villager, u32 index) {
    if (index >= INDEX_LIMIT) {
        return copy_item(out, *empty_item);
    }
    if (index < LONG_LIST_SIZE) {
        return copy_item(out, villager.items_24ae[index]);
    }
    if (index == INDEX_ITEM_24E6) {
        return copy_item(out, villager.item_24e6);
    }
    if (index == INDEX_ITEM_24EA) {
        return copy_item(out, villager.item_24ea);
    }
    get_owner_item(out, villager, index - INDEX_FIRST_OWNER_ITEM);
    return out;
}
GUEST_EXPORT(0x00310829, copy_villager_item_by_index);
