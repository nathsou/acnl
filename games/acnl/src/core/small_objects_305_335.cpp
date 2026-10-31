// Small objects and accessors from 0x00305000 to 0x00336000: an item picked from a villager, a held item's price
// table, a particle handle, rows of sixteen items, a few item-number setters and some one-line state checks.
#include "guest/guest.hpp"
#include "item/item.hpp"
#include "save/save_data.hpp"
#include "save/villager.hpp"

using guest::gptr;

namespace {

constexpr u32 OWNER_ITEM_COUNT = 4;
constexpr u32 TABLE_CATEGORY = 0x33;
constexpr u32 TABLE_SIZE = 5;
constexpr u32 NO_TABLE_VALUE = 0x3e;
constexpr u8 STATE_NONE = 0;
constexpr u8 STATE_4 = 4;
constexpr u16 STATE_ITEM_NUMBER = 0x27a4;
constexpr u32 ROW_SIZE = 16;
constexpr u32 AMOUNT_LIMIT = 10;
constexpr u32 AMOUNT_CATEGORY_6 = 6;
constexpr u32 AMOUNT_CATEGORY_47 = 0x47;
constexpr u32 FIRST_RANGE_END_NUMBER = 0x3452;
constexpr u32 CALLBACK_ENABLED = 1;
// The item number maps to an index by adding a base; indices at or above the limit read as 0.
constexpr u32 INDEX_10_BASE = 0x5f;
constexpr u32 INDEX_10_LIMIT = 0x20;
constexpr u32 INDEX_11_BASE = 0x99;
constexpr u32 INDEX_11_LIMIT = 0x23;
constexpr u32 INDEX_13_BASE = 0x76;
constexpr u32 INDEX_13_LIMIT = 0x17;
constexpr u32 INDEX_15_BASE = 0xda;
constexpr u32 INDEX_15_LIMIT = 0x16;
constexpr u32 DISPATCH_KEYS_ADDRESS = 0x0087942c;

inline constexpr guest::Function<0x002fc900, u32()> mode_above_1;
inline constexpr guest::Function<0x001324a8, gptr<void>(gptr<void> self)> construct_list_node;
inline guest::global<u16[TABLE_SIZE], 0x0095bfc8> table_95bfc8;
inline constexpr guest::Function<0x002fb328, gptr<SaveData>()> get_save_data;
inline guest::global<u32, 0x009503cc> value_9503cc;
inline constexpr guest::Function<0x002f88b8, void(gptr<void> owned)> release_owned_object;
inline constexpr guest::Function<0x00819f50, void(gptr<void> table, u32 key1, u32 key2)> dispatch_offset_0;

// An object with an item at 8.
struct HeldItem {
    u32 unknown_00[2];
    Item item;
};
GUEST_OFFSET(HeldItem, item, 8);

// An object with a byte at 8.
struct ByteHolder {
    u8 unknown_00[8];
    u8 byte_08;
};
GUEST_OFFSET(ByteHolder, byte_08, 8);

// An object with an item at 0x12.
struct ItemHolder {
    u8 unknown_00[0x12];
    Item item_12;
};
GUEST_OFFSET(ItemHolder, item_12, 0x12);

// A numbered pair of bytes (4 bytes).
struct NumberedPair {
    u16 number;
    u8 first;
    u8 second;
};
GUEST_SIZE(NumberedPair, 4);

struct SeadParticleHandle {
    static constexpr u32 VTABLE = 0x008f39ec;

    u32 vtable;
    u8 unknown_04[8];
    u32 value_0c;
    u8 unknown_10[4];
    u8 flag_14;
};
GUEST_OFFSET(SeadParticleHandle, value_0c, 0x0c);
GUEST_OFFSET(SeadParticleHandle, flag_14, 0x14);

// A holder of three owned objects, the first of which is released only when the flag says it is owned.
struct OwnerHolder {
    static constexpr u32 VTABLE = 0x0090b608;

    u32 vtable;
    u8 unknown_04[0x10];
    gptr<void> owned_14;
    u8 owns_14;
    u8 unknown_19[0x2c - 0x19];
    gptr<void> owned_2c;
    gptr<void> owned_30;
};
GUEST_OFFSET(OwnerHolder, owned_14, 0x14);
GUEST_OFFSET(OwnerHolder, owns_14, 0x18);
GUEST_OFFSET(OwnerHolder, owned_2c, 0x2c);
GUEST_OFFSET(OwnerHolder, owned_30, 0x30);

// An object that dispatches a callback when its flag at 0x4ec is 1.
struct CallbackOwner {
    u8 unknown_000[0x4ec];
    u8 enabled_4ec;
};
GUEST_OFFSET(CallbackOwner, enabled_4ec, 0x4ec);

// Sixteen items and a byte for each.
struct ItemRow {
    Item items[ROW_SIZE];
    u8 bytes[ROW_SIZE];
};
GUEST_SIZE(ItemRow, 0x50);

// An item number with a small count (3 bytes used).
struct ItemAmount {
    u16 number;
    u8 count;
};

// Indices (byte-sized) the item numbers map to; see the setters below.
struct AppearanceIndices {
    u8 unknown_00[0xf];
    u8 flag_0f;
    u8 index_10;
    u8 index_11;
    u8 index_12;
    u8 index_13;
    u8 unknown_14;
    u8 index_15;
};
GUEST_OFFSET(AppearanceIndices, flag_0f, 0x0f);
GUEST_OFFSET(AppearanceIndices, index_15, 0x15);

// A record with a type byte, two words, an item and four bytes.
struct TypedEntry {
    static constexpr u8 DEFAULT_TYPE = 0x22;
    static constexpr u8 DEFAULT_BYTE = 0xc8;

    u8 type;
    u8 unknown_01[3];
    s32 value_04;
    s32 value_08;
    Item item;
    u8 flag_10;
    u8 byte_11;
    u8 byte_12;
    u8 byte_13;
};
GUEST_OFFSET(TypedEntry, value_04, 4);
GUEST_OFFSET(TypedEntry, item, 0xc);
GUEST_OFFSET(TypedEntry, flag_10, 0x10);
GUEST_SIZE(TypedEntry, 0x14);

struct BsScene {
    static constexpr u32 VTABLE = 0x008f7dc4;

    u32 vtable;
};
GUEST_SIZE(BsScene, 4);

}  // namespace

// Copies the villager's item in the slot (0-3) to out; any other slot copies the empty item.
void get_owner_item(Item &out, gptr<SaveVillager> owner, u32 slot) {
    if (slot < OWNER_ITEM_COUNT) {
        copy_item(out, owner->items_24d6[slot]);
    } else {
        copy_item(out, *empty_item);
    }
}
GUEST_EXPORT(0x003107d5, get_owner_item);

// Sets the item number and the two bytes.
void set_numbered_pair(NumberedPair &self, u32 first, const Item &item, u32 second) {
    self.number = item.number();
    self.first = u8(first);
    self.second = u8(second);
}
GUEST_EXPORT(0x0031224c, set_numbered_pair);

// The scene's vtable; clears a global.
BsScene &construct_bs_scene(BsScene &self) {
    self.vtable = BsScene::VTABLE;
    *value_9503cc = 0;
    return self;
}
GUEST_EXPORT(0x00313a98, construct_bs_scene);

// Stores the item 0x27a4 at 0x12.
void set_item_12_to_27a4(ItemHolder &holder) {
    Item item;
    construct_item(item, STATE_ITEM_NUMBER);
    copy_item(holder.item_12, item);
}
GUEST_EXPORT(0x00314228, set_item_12_to_27a4);

// Whether the save data's byte 0x6e2a6 is neither 0 nor 4.
bool save_state_6e2a6_is_active() {
    u8 state = get_save_data()->state_6e2a6;
    return state != STATE_NONE && state != STATE_4;
}
GUEST_EXPORT(0x00314bc4, save_state_6e2a6_is_active);

// For a held item of category 0x33: the table value of its offset in the category when that is below 5. 0x3e else.
u32 held_item_table_value(const HeldItem &held) {
    if (held.item.category() == TABLE_CATEGORY) {
        s32 offset = item_offset_in_category(held.item);
        if (offset >= 0 && u32(offset) < TABLE_SIZE) {
            return table_95bfc8[offset];
        }
    }
    return NO_TABLE_VALUE;
}
GUEST_EXPORT(0x00314c1c, held_item_table_value);

SeadParticleHandle &construct_sead_particle_handle(SeadParticleHandle &self) {
    auto &node = *construct_list_node(guest::addr_of(self).cast<void>()).cast<SeadParticleHandle>();
    node.vtable = SeadParticleHandle::VTABLE;
    node.value_0c = 0;
    node.flag_14 = 0;
    return node;
}
GUEST_EXPORT(0x003166a8, construct_sead_particle_handle);

// The byte at 8, unless the mode is above 1.
u32 byte_08_unless_mode_above_1(const ByteHolder &holder) {
    if (mode_above_1() != 0) {
        return 0;
    }
    return holder.byte_08;
}
GUEST_EXPORT(0x00318944, byte_08_unless_mode_above_1);

// Releases what the holder owns.
OwnerHolder &destroy_owner_holder(OwnerHolder &self) {
    self.vtable = OwnerHolder::VTABLE;
    if (self.owns_14 != 0) {
        release_owned_object(self.owned_14);
    }
    release_owned_object(self.owned_2c);
    release_owned_object(self.owned_30);
    return self;
}
GUEST_EXPORT(0x0031bb51, destroy_owner_holder);

// Calls the dispatcher of the object's own callback table when the flag is on.
void dispatch_if_enabled(CallbackOwner &self) {
    if (self.enabled_4ec != CALLBACK_ENABLED) {
        return;
    }
    gptr<u32> keys(DISPATCH_KEYS_ADDRESS);
    dispatch_offset_0(guest::addr_of(self).cast<void>(), keys[0], keys[1]);
}
GUEST_EXPORT(0x0031e570, dispatch_if_enabled);

// Empties the sixteen items and zeroes their bytes.
void clear_item_row(ItemRow &row) {
    for (u32 i = 0; i < ROW_SIZE; i++) {
        copy_item(row.items[i], *empty_item);
        row.bytes[i] = 0;
    }
}
GUEST_EXPORT(0x00322e58, clear_item_row);

// Swaps two entries of the row (items and bytes); false when an index is out of range.
bool swap_item_row_entries(ItemRow &row, u32 a, u32 b) {
    if (a >= ROW_SIZE || b >= ROW_SIZE) {
        return false;
    }
    guest::StackObject<Item> saved;
    copy_item(*saved, row.items[a]);
    u8 saved_byte = row.bytes[a];
    copy_item(row.items[a], row.items[b]);
    row.bytes[a] = row.bytes[b];
    copy_item(row.items[b], *saved);
    row.bytes[b] = saved_byte;
    return true;
}
GUEST_EXPORT(0x00323234, swap_item_row_entries);

void construct_typed_entry(TypedEntry &self, u32 type, s32 first, s32 second, const Item &item, u32 flag) {
    self.type = u8(type);
    self.value_04 = first;
    self.value_08 = second;
    self.flag_10 = u8(flag);
    copy_item(self.item, item);
}
GUEST_EXPORT(0x0032a31c, construct_typed_entry);

// The default entry: no values, an empty item. Two copies exist, which only differ in the copy routine they call.
void construct_default_typed_entry(TypedEntry &self) {
    self.type = TypedEntry::DEFAULT_TYPE;
    self.value_04 = -1;
    self.value_08 = -1;
    copy_item(self.item, *empty_item);
    self.flag_10 = 0;
    self.byte_11 = TypedEntry::DEFAULT_BYTE;
    self.byte_12 = TypedEntry::DEFAULT_BYTE;
    self.byte_13 = 0;
}
GUEST_EXPORT(0x0032a344, construct_default_typed_entry);
GUEST_EXPORT(0x0032a470, construct_default_typed_entry);

// Copy constructor; the flag becomes 0 or 1.
TypedEntry &copy_typed_entry(TypedEntry &self, const TypedEntry &other) {
    self.type = other.type;
    self.value_04 = other.value_04;
    self.value_08 = other.value_08;
    self.byte_11 = other.byte_11;
    self.byte_12 = other.byte_12;
    self.byte_13 = other.byte_13;
    self.flag_10 = other.flag_10 != 0 ? 1 : 0;
    copy_item(self.item, other.item);
    return self;
}
GUEST_EXPORT(0x0032a4cc, copy_typed_entry);

// Stores the number's offset from the base as an index of one of two ranges (the flag tells which); 0 when it falls
// outside the range.
void set_appearance_index_12(AppearanceIndices &self, const Item &item) {
    constexpr u32 FIRST_BASE = 0xc4;
    constexpr u32 FIRST_LIMIT = 0x16;
    constexpr u32 SECOND_BASE = 0xae;
    constexpr u32 SECOND_LIMIT = 0x15;
    u32 number = item.number();
    u32 base = FIRST_BASE;
    u32 limit = FIRST_LIMIT;
    self.flag_0f = 0;
    if (number >= FIRST_RANGE_END_NUMBER) {
        self.flag_0f = 1;
        base = SECOND_BASE;
        limit = SECOND_LIMIT;
    }
    self.index_12 = u8(number + base);
    if (u8(number + base) >= limit) {
        self.index_12 = 0;
    }
}
GUEST_EXPORT(0x0032c9e8, set_appearance_index_12);

// Stores the item number plus a base as a byte index; 0 when it is not below the limit.
template <u8 AppearanceIndices::*FIELD, u32 BASE, u32 LIMIT>
void set_appearance_index(AppearanceIndices &self, const Item &item) {
    u8 index = u8(item.number() + BASE);
    self.*FIELD = index < LIMIT ? index : 0;
}
void set_appearance_index_15(AppearanceIndices &self, const Item &item) {
    set_appearance_index<&AppearanceIndices::index_15, INDEX_15_BASE, INDEX_15_LIMIT>(self, item);
}
void set_appearance_index_11(AppearanceIndices &self, const Item &item) {
    set_appearance_index<&AppearanceIndices::index_11, INDEX_11_BASE, INDEX_11_LIMIT>(self, item);
}
void set_appearance_index_10(AppearanceIndices &self, const Item &item) {
    set_appearance_index<&AppearanceIndices::index_10, INDEX_10_BASE, INDEX_10_LIMIT>(self, item);
}
void set_appearance_index_13(AppearanceIndices &self, const Item &item) {
    set_appearance_index<&AppearanceIndices::index_13, INDEX_13_BASE, INDEX_13_LIMIT>(self, item);
}
GUEST_EXPORT(0x0032ca78, set_appearance_index_15);
GUEST_EXPORT(0x0032cab8, set_appearance_index_11);
GUEST_EXPORT(0x0032caf4, set_appearance_index_10);
GUEST_EXPORT(0x0032cb30, set_appearance_index_13);

// Records the item and the count when the count is small and the item is empty or in wear class 7.
bool set_wearable_amount(ItemAmount &out, const Item &item, u32 count) {
    if (!item.is_wear_class_7() && !item.is_empty()) {
        return false;
    }
    if (count >= AMOUNT_LIMIT) {
        return false;
    }
    out.number = item.number();
    out.count = u8(count);
    return true;
}
GUEST_EXPORT(0x003314f8, set_wearable_amount);

// Records the item and the count when the count is small and the item is of category 6 or 0x47.
bool set_item_amount(ItemAmount &out, const Item &item, u32 count) {
    if (!item.is_item() || count >= AMOUNT_LIMIT) {
        return false;
    }
    u32 category = item.category();
    if (category != AMOUNT_CATEGORY_6 && category != AMOUNT_CATEGORY_47) {
        return false;
    }
    out.number = item.number();
    out.count = u8(count);
    return true;
}
GUEST_EXPORT(0x00335214, set_item_amount);
