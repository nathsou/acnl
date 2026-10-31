#include "guest/guest.hpp"
#include "save/save_data.hpp"

namespace {

constexpr u32 LIST_HEAD = 0x00a21d44;      // list object; its first-node pointer is at +4
constexpr u32 LIST_SENTINEL = 0x00a21d48;  // the node that ends the list
constexpr u32 NODE_OFFSET = 0x108;         // where the list node sits inside a registered object
constexpr u32 NODE_KEY_OFFSET = 8;
constexpr u32 NODE_OWNER_OFFSET = 0x100;   // the owner pointer, stored 0x100 bytes before the node
constexpr u32 BASE_OFFSET_FIELD = 0x28;    // self-relative offset to another sub-object

inline constexpr guest::Function<0x001408d4, u32(u32 list, u32 node)> list_remove;
inline constexpr guest::Function<0x001b35b0, void(u32 key, u32 target, u32 a, u32 b, u32 c)> notify_target;

inline constexpr guest::Function<0x002fb96c, u32(u32 index)> f_2fb96c;
inline constexpr guest::Function<0x0020bf50, u32(u32 object, u32 index)> f_20bf50;
// called with whatever the caller left in r0 (passed along so it matches either way)
inline constexpr guest::Function<0x002fae84, u32(u32 leftover_r0)> get_base_2fae84;
inline constexpr guest::Function<0x00304ed8, u32(u32 object, u32 index)> f_304ed8;
inline constexpr guest::Function<0x002fb310, u32(u32 leftover_r0)> f_2fb310;
inline constexpr guest::Function<0x003058c9, u32(u32 object, u32 index)> f_3058c8;  // Thumb
inline constexpr guest::Function<0x006bc388, u32(u32 object, u32 index)> f_6bc388;

// Follows a self-relative offset stored at base + 0x28 (0 offset: null).
u32 follow_base_offset(u32 base) {
    u32 field = base + BASE_OFFSET_FIELD;
    u32 offset = *gptr<u32>(field);
    return offset != 0 ? field + offset : 0;
}

}  // namespace

// Notifies, for every registered node whose key equals `key`, the sub-object found through its owner.
void notify_registered(u32 key, u32 a, u32 b, u32 c) {
    for (u32 node = *gptr<u32>(LIST_SENTINEL); node != LIST_SENTINEL; node = *gptr<u32>(node)) {
        if (*gptr<u32>(node + NODE_KEY_OFFSET) != key) {
            continue;
        }
        u32 owner = *gptr<u32>(node - NODE_OWNER_OFFSET);
        u32 first = follow_base_offset(owner);
        u32 target = first != 0 ? follow_base_offset(first) : 0;
        notify_target(key, target, a, b, c);
    }
}
GUEST_EXPORT(0x006aaa58, notify_registered);

// Finds a data address from a packed id: bits 8-11 select the table, the low two nibbles are indices.
u32 locate_by_packed_id(u32 packed) {
    u32 low = packed & 0xf;
    u32 high = (packed >> 4) & 0xf;
    u32 table = (packed >> 8) & 0xf;
    switch (table) {
    case 0:
        return f_20bf50(f_2fb96c(high) + 0x2c, low);
    case 1: {
        u32 base = get_base_2fae84(table);
        u32 object = f_2fb310(base);
        return f_3058c8(object + 4, high) + 0x30;
    }
    case 2:
        return f_304ed8(guest::addr_of(save_data_of_base(get_base_2fae84(table))->part_62338).addr(), low);
    case 3:
        return guest::addr_of(save_data_of_base(get_base_2fae84(table))->entries_668a0[low & 7].field_7c).addr();
    case 4:
        return f_6bc388(guest::addr_of(save_data_of_base(get_base_2fae84(table))->part_6aeb8).addr(), high) + 0x304;
    case 5:
        return guest::addr_of(save_data_of_base(get_base_2fae84(table))->part_70f1c).addr();
    case 6:
        return guest::addr_of(save_data_of_base(get_base_2fae84(table))->entries_4bf70[low]).addr();
    default:
        return 0;
    }
}
GUEST_EXPORT(0x006aaae8, locate_by_packed_id);

// Removes the object from the global list of menus if registered; otherwise returns its argument unchanged.
u32 unregister_from_menu_list(u32 object) {
    for (u32 node = *gptr<u32>(LIST_SENTINEL); node != LIST_SENTINEL; node = *gptr<u32>(node)) {
        if (node - NODE_OFFSET == object) {
            return list_remove(LIST_HEAD, object + NODE_OFFSET);
        }
    }
    return object;
}
GUEST_EXPORT(0x006aac18, unregister_from_menu_list);
