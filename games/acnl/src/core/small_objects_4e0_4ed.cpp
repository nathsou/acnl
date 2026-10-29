// Small objects and lookups from 0x004e0000 to 0x004ee000: the Mii icon, a table of 34-byte entries, kind checks
// and lists of values indexed up to a per-kind count.
#include "guest/guest.hpp"
#include "item/item.hpp"

using guest::gptr;

namespace {

constexpr u32 ENTRY_SIZE = 34;                // of the table at the pointer in the global at 0x009c79c4 + 4
constexpr u32 MAX_COUNT = 0x30;               // capped_count_for_kind never returns more
constexpr u32 FLAG_BIT_1000 = 0x1000;         // a bit of the global flag table entries (meaning not known yet)
constexpr u32 FLAG_BIT_10000000 = 0x10000000;
constexpr u32 KIND_55 = 0x55;
constexpr u32 KIND_2B = 0x2b;
constexpr u32 KIND_67 = 0x67;
constexpr u32 NO_TABLE_ENTRY = 0xa5;  // table_entry_has_all_bits is false for it
constexpr u32 CATEGORY_2F = 0x2f;
constexpr s32 NO_OFFSET = -1;
constexpr u8 NODE_STATE_0 = 0;
constexpr u8 NODE_STATE_1 = 1;
constexpr u8 FLAGS_BIT_5 = 0x20;

inline constexpr guest::Function<0x002f74c8, u8()> read_global_byte_2;
inline constexpr guest::Function<0x002f74e0, u32(u32 mask, u32 index)> table_entry_has_all_bits;
inline constexpr guest::Function<0x005b42fc, u32(u32 kind)> capped_count_for_kind;
inline constexpr guest::Function<0x004ee364, void(gptr<void> node, u32 index)> call_node_slot_4;
inline constexpr guest::Function<0x004ee4ec, gptr<void>(gptr<void> node)> construct_transform_node;
inline constexpr guest::Function<0x001324a8, gptr<void>(gptr<void> self)> construct_list_node;

struct EntryTableHolder {
    u32 unknown_00;
    gptr<u8> entries;
};
GUEST_OFFSET(EntryTableHolder, entries, 4);
inline guest::global<EntryTableHolder, 0x009c79c4> entry_table_holder;

struct ByteFlagsGlobal {
    u8 unknown_00[3];
    u8 byte_03;
};
GUEST_OFFSET(ByteFlagsGlobal, byte_03, 3);
inline guest::global<ByteFlagsGlobal, 0x009529d4> byte_flags_9529d4;
inline guest::global<u8, 0x00aadad4> flags_aadad4;

// An object with a node pointer at 8 and a state at 0x2c.
struct NodeOwner {
    u8 unknown_00[8];
    gptr<void> node;
    u8 unknown_0c[0x2c - 0xc];
    u8 state_2c;
};
GUEST_OFFSET(NodeOwner, node, 8);
GUEST_OFFSET(NodeOwner, state_2c, 0x2c);

// A pair of words and a byte computed from an item.
struct ItemOffsetPair {
    u32 first;
    u32 second;
    u8 offset_08;
};
GUEST_OFFSET(ItemOffsetPair, offset_08, 8);

struct MiiIcon {
    static constexpr u32 VTABLE = 0x0090286c;
    static constexpr u32 VALUE_18 = 0x8056;
    static constexpr u32 VALUE_14 = 5;

    u32 vtable;
    u8 unknown_04[8];
    u32 value_0c;
    u32 value_10;
    u32 value_14;
    u32 value_18;
    u16 value_1c;
    u16 value_1e;
    u16 value_20;
};
GUEST_OFFSET(MiiIcon, value_0c, 0x0c);
GUEST_OFFSET(MiiIcon, value_10, 0x10);
GUEST_OFFSET(MiiIcon, value_1c, 0x1c);

struct SkeletalModel {
    static constexpr u32 VTABLE = 0x0090295c;

    u32 vtable;
    u8 unknown_04[4];
    u8 flag_08;
};
GUEST_OFFSET(SkeletalModel, flag_08, 8);

}  // namespace

MiiIcon &construct_mii_icon(MiiIcon &self) {
    auto &node = *construct_list_node(guest::addr_of(self).cast<void>()).cast<MiiIcon>();
    node.value_0c = 0;
    node.value_18 = MiiIcon::VALUE_18;
    node.vtable = MiiIcon::VTABLE;
    node.value_10 = 0;
    node.value_14 = MiiIcon::VALUE_14;
    node.value_1c = 0;
    node.value_1e = 0;
    node.value_20 = 0;
    return node;
}
GUEST_EXPORT(0x004e09fc, construct_mii_icon);
GUEST_FUZZ(0x004e09fc, 100, [](guest::Fuzz &f) { f.arguments(f.object<MiiIcon>()); });

// True while the flag byte at 3 is clear, the table entry of the global byte does not have bit 0x1000 and bit 5 of
// the flags byte is clear.
bool is_free_to_use_4e0e90() {
    if (byte_flags_9529d4->byte_03 != 0) {
        return false;
    }
    if (table_entry_has_all_bits(FLAG_BIT_1000, read_global_byte_2()) != 0) {
        return false;
    }
    return (*flags_aadad4 & FLAGS_BIT_5) == 0;
}
GUEST_EXPORT(0x004e0e90, is_free_to_use_4e0e90);
GUEST_FUZZ(0x004e0e90, 100, [](guest::Fuzz &f) {
    byte_flags_9529d4->byte_03 = u8(f.below(2));
    *flags_aadad4 = u8(f.number());
    f.arguments();
});

// The 34-byte table entry of the item's value_06 (null when there is no valid value or no table).
gptr<u8> entry_for_item_value_06(const Item &item) {
    if (!item.has_valid_value_06()) {
        return gptr<u8>(0u);
    }
    u32 value = item.data()->value_06;
    if (value >= ItemData::VALUE_06_LIMIT) {
        value = 0;
    }
    gptr<u8> entries = entry_table_holder->entries;
    if (entries == nullptr || value >= ItemData::VALUE_06_LIMIT) {
        return gptr<u8>(0u);
    }
    return entries + value * ENTRY_SIZE;
}
GUEST_EXPORT(0x004e0f14, entry_for_item_value_06);
GUEST_FUZZ(0x004e0f14, 200, [](guest::Fuzz &f) {
    auto item = f.object<Item>();
    if (f.below(4) != 0) {
        item->id = u16(Item::FIRST_ITEM + f.below(Item::ITEM_COUNT));
    }
    f.arguments(item);
});

// Whether the kind has the bit 0x10000000 in its table entry, or is kind 0x55, 0x2b or 0x67.
bool is_special_kind(u32 kind) {
    if (table_entry_has_all_bits(FLAG_BIT_10000000, kind) != 0) {
        return true;
    }
    return kind == KIND_55 || kind == KIND_2B || kind == KIND_67;
}
GUEST_EXPORT(0x004e58e8, is_special_kind);
GUEST_FUZZ(0x004e58e8, 200, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({KIND_55, KIND_2B, KIND_67, NO_TABLE_ENTRY, f.below(NO_TABLE_ENTRY)})); });

// Zeroes the first element of the list (as long as the kind's count) that equals the value; false if none does.
bool remove_value_from_list(gptr<u32> list, u32 value) {
    u32 count = capped_count_for_kind(read_global_byte_2());
    for (u32 i = 0; i < count; i++) {
        if (list[i] == value) {
            list[i] = 0;
            return true;
        }
    }
    return false;
}
GUEST_EXPORT(0x004e951c, remove_value_from_list);
GUEST_FUZZ(0x004e951c, 100, [](guest::Fuzz &f) {
    auto list = f.allocate(MAX_COUNT * sizeof(u32)).cast<u32>();
    f.arguments(list, f.pick<u32>({0, 1, f.below(4)}));
});

// The index-th element of the list when it is within the kind's count (which must not exceed the maximum), else 0.
u32 value_from_list(gptr<u32> list, u32 index) {
    u32 count = capped_count_for_kind(read_global_byte_2());
    if (count > MAX_COUNT || index >= count) {
        return 0;
    }
    return list[index];
}
GUEST_EXPORT(0x004e958c, value_from_list);
GUEST_FUZZ(0x004e958c, 100, [](guest::Fuzz &f) {
    auto list = f.allocate(MAX_COUNT * sizeof(u32)).cast<u32>();
    f.arguments(list, f.pick<u32>({0, 1, 5, MAX_COUNT, f.number()}));
});

// Stores two words (the second argument is not used); and the item's offset in its category when that category is
// 0x2f (-1 otherwise).
void set_item_offset_pair(ItemOffsetPair &self, u32 unused, u32 first, u32 second, const Item &item) {
    self.first = first;
    self.second = second;
    s32 offset = item.category() == CATEGORY_2F ? item_offset_in_category(item) : NO_OFFSET;
    self.offset_08 = u8(offset);
}
GUEST_EXPORT(0x004e9f00, set_item_offset_pair);
GUEST_FUZZ(0x004e9f00, 100, [](guest::Fuzz &f) {
    auto item = f.object<Item>();
    if (f.below(2) != 0) {
        item->id = u16(Item::FIRST_ITEM + f.below(Item::ITEM_COUNT));
    }
    f.arguments(f.object<ItemOffsetPair>(), f.number(), f.number(), f.number(), item);
});

// Passes the index to the node's slot 4 when the owner is in state 0 or 1 and has a node.
void call_node_if_active(NodeOwner &self, u32 index) {
    if (self.state_2c != NODE_STATE_0 && self.state_2c != NODE_STATE_1) {
        return;
    }
    if (self.node == nullptr) {
        return;
    }
    call_node_slot_4(self.node, index);
}
GUEST_EXPORT(0x004eba34, call_node_if_active);
GUEST_FUZZ(0x004eba34, 100, [](guest::Fuzz &f) {
    auto owner = f.object<NodeOwner>();
    owner->state_2c = f.pick<u8>({NODE_STATE_0, NODE_STATE_1, 2, 0xff});
    owner->node = gptr<void>(0u);  // no node: nothing is called
    f.arguments(owner, f.number());
});

SkeletalModel &construct_skeletal_model(SkeletalModel &self) {
    auto &node = *construct_transform_node(guest::addr_of(self).cast<void>()).cast<SkeletalModel>();
    node.flag_08 = 0;
    node.vtable = SkeletalModel::VTABLE;
    return node;
}
GUEST_EXPORT(0x004edd3c, construct_skeletal_model);
GUEST_FUZZ(0x004edd3c, 100, [](guest::Fuzz &f) { f.arguments(f.object<SkeletalModel>()); });
