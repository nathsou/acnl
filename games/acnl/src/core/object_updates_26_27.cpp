// Callbacks and initialisers of objects of the 0x00260000..0x00280000 area (their classes are not known yet): a
// callback that fires for one tag, item category tests, a player search and some resets.
#include "core/fuzz_helpers.hpp"
#include "item/item.hpp"
#include "save/player.hpp"
#include "save/save_data.hpp"

using guest::gptr;

Item &copy_item(Item &self, const Item &other);
u8 read_global_byte_2();
bool table_entry_has_all_bits(u32 mask, u32 index);

namespace {

constexpr u32 TAG_RULE_TABLE = 0x0087919c;
constexpr u32 TABLE_MASK_4 = 4;
constexpr u32 CATEGORY_27 = 0x27;
constexpr u32 CATEGORY_28 = 0x28;
constexpr u32 CATEGORY_24 = 0x24;
constexpr u32 CHILD_COUNT = 0x40;
constexpr u32 STATE_5 = 5;
constexpr u8 PLAYER_FLAG_BIT_4 = 0x10;
constexpr u32 SET_ITEMS = 8;
constexpr u32 HEAP_ALLOCATOR_OFFSET = 4;
constexpr u32 VTABLE_OBJECT_RESOURCE = 0x008ef578;

inline constexpr guest::Function<0x00817bd0, u32(gptr<void> object, u32 first, u32 second)> dispatch;
inline constexpr guest::Function<0x002fcb34, u32(const Item &item)> item_category;
inline constexpr guest::Function<0x00276cd0, void(gptr<void> child)> reset_child;
inline constexpr guest::Function<0x005673c8, gptr<void>(gptr<void> allocator)> construct_heap_allocator;

// The pair of words that says which tag fires and the pairs the callbacks dispatch (the rule at the start, the
// pairs after it).
struct TagRule {
    u32 tag;
    u32 value;
};
struct DispatchPair {
    u32 first;
    u32 second;
};

struct TaggedObject {
    u8 unknown_00[0xc];
    u32 tag;
    u32 value;
};
GUEST_OFFSET(TaggedObject, tag, 0xc);
GUEST_OFFSET(TaggedObject, value, 0x10);

// Dispatches the pair at `offset` of the rule table when the object carries the rule's tag (a tag of 0 also needs a
// value that matches, or an odd one) and value. Otherwise returns the object.
u32 dispatch_when_tagged(TaggedObject &object, u32 pair_offset) {
    gptr<void> self = guest::addr_of(object).cast<void>();
    const TagRule &rule = *gptr<TagRule>(TAG_RULE_TABLE);
    if (object.tag != rule.tag) {
        return self.addr();
    }
    bool value_checked = object.tag != 0 || ((object.value | rule.value) & 1) != 0;
    if (value_checked && object.value != rule.value) {
        return self.addr();
    }
    const DispatchPair &pair = *gptr<DispatchPair>(TAG_RULE_TABLE + pair_offset);
    return dispatch(self, pair.first, pair.second);
}

gptr<TaggedObject> fuzz_tagged(guest::Fuzz &f) {
    // inputs that never reach the callback: a tag that differs from the rule's
    auto object = f.object<TaggedObject>();
    const TagRule &rule = *gptr<TagRule>(TAG_RULE_TABLE);
    object->tag = rule.tag + 1 + f.below(5);
    return object;
}

struct EmptiedSet {
    Item items[SET_ITEMS];
    u8 flag;
};
GUEST_OFFSET(EmptiedSet, flag, 0x20);

struct ChildList {
    u8 unknown_00[0x14];
    gptr<void> children[CHILD_COUNT];
    u8 unknown_114[0x1c0 - 0x114];
    u32 state_1c0;
};
GUEST_OFFSET(ChildList, children, 0x14);
GUEST_OFFSET(ChildList, state_1c0, 0x1c0);

struct PlayerList {
    SavePlayer players[SaveData::PLAYER_COUNT];
};

struct ResourceObject {
    u32 vtable;
    u8 unknown_04[8];
    u32 value_0c;
    u32 value_10;
};
GUEST_OFFSET(ResourceObject, value_0c, 0xc);
GUEST_OFFSET(ResourceObject, value_10, 0x10);

}  // namespace

u32 dispatch_when_tagged_28(TaggedObject &object) { return dispatch_when_tagged(object, 0x28); }
GUEST_EXPORT(0x0026d3e4, dispatch_when_tagged_28);
GUEST_FUZZ(0x0026d3e4, 100, [](guest::Fuzz &f) { f.arguments(fuzz_tagged(f)); });
u32 dispatch_when_tagged_30(TaggedObject &object) { return dispatch_when_tagged(object, 0x30); }
GUEST_EXPORT(0x0026d5ec, dispatch_when_tagged_30);
GUEST_FUZZ(0x0026d5ec, 100, [](guest::Fuzz &f) { f.arguments(fuzz_tagged(f)); });
u32 dispatch_when_tagged_38(TaggedObject &object) { return dispatch_when_tagged(object, 0x38); }
GUEST_EXPORT(0x0026e3bc, dispatch_when_tagged_38);
GUEST_FUZZ(0x0026e3bc, 100, [](guest::Fuzz &f) { f.arguments(fuzz_tagged(f)); });
u32 dispatch_when_tagged_18(TaggedObject &object) { return dispatch_when_tagged(object, 0x18); }
GUEST_EXPORT(0x0026f6a8, dispatch_when_tagged_18);
GUEST_FUZZ(0x0026f6a8, 100, [](guest::Fuzz &f) { f.arguments(fuzz_tagged(f)); });
u32 dispatch_when_tagged_20(TaggedObject &object) { return dispatch_when_tagged(object, 0x20); }
GUEST_EXPORT(0x0026f970, dispatch_when_tagged_20);
GUEST_FUZZ(0x0026f970, 100, [](guest::Fuzz &f) { f.arguments(fuzz_tagged(f)); });

// Whether the table entry for the global byte has bit 4 and the item's category is 0x27 or 0x28.
bool item_category_27_or_28(const Item &item) {
    if (!table_entry_has_all_bits(TABLE_MASK_4, read_global_byte_2())) {
        return false;
    }
    u32 category = item_category(item);
    return category == CATEGORY_27 || category == CATEGORY_28;
}
GUEST_EXPORT(0x0026d5b0, item_category_27_or_28);
GUEST_FUZZ(0x0026d5b0, 200, [](guest::Fuzz &f) {
    auto item = f.object<Item>();
    item->id = u16(Item::FIRST_ITEM + f.below(Item::ITEM_COUNT));
    f.arguments(item);
});

bool item_category_24(const Item &item) {
    if (!table_entry_has_all_bits(TABLE_MASK_4, read_global_byte_2())) {
        return false;
    }
    return item_category(item) == CATEGORY_24;
}
GUEST_EXPORT(0x0026e2a0, item_category_24);
GUEST_FUZZ(0x0026e2a0, 200, [](guest::Fuzz &f) {
    auto item = f.object<Item>();
    item->id = u16(Item::FIRST_ITEM + f.below(Item::ITEM_COUNT));
    f.arguments(item);
});

// Resets the flag at 0x37-style children: each non-null child is reset, then the state becomes 5.
void reset_children(ChildList &list) {
    for (gptr<void> child : list.children) {
        if (child) {
            reset_child(child);
        }
    }
    list.state_1c0 = STATE_5;
}
GUEST_EXPORT(0x00276408, reset_children);
GUEST_FUZZ(0x00276408, 100, [](guest::Fuzz &f) {
    auto list = f.object<ChildList>();
    for (gptr<void> &child : list->children) {
        child = nullptr;
    }
    f.arguments(list);
});

// The first player that has an identity and the flag bit 4 set (null when none).
gptr<SavePlayer> first_player_with_flag(PlayerList &list) {
    for (u32 i = 0; i < SaveData::PLAYER_COUNT; i++) {
        SavePlayer &player = list.players[i];
        if (player.identity.is_set() && (player.flags_5700 & PLAYER_FLAG_BIT_4) != 0) {
            return guest::addr_of(player);
        }
    }
    return gptr<SavePlayer>(0u);
}
GUEST_EXPORT(0x0027a650, first_player_with_flag);
GUEST_FUZZ(0x0027a650, 40, [](guest::Fuzz &f) {
    auto list = f.object<PlayerList>();
    for (SavePlayer &player : list->players) {
        player.flags_5700 = f.pick<u8>({0, 0x10, 0xff});
    }
    f.arguments(list);
});

// Empties the eight items of the set and raises its flag.
void empty_item_set(EmptiedSet &set) {
    for (Item &item : set.items) {
        copy_item(item, *empty_item);
    }
    set.flag = 1;
}
GUEST_EXPORT(0x0027ab7c, empty_item_set);
GUEST_FUZZ(0x0027ab7c, 100, [](guest::Fuzz &f) { f.arguments(f.object<EmptiedSet>()); });

ResourceObject &construct_object_resource(ResourceObject &self) {
    self.vtable = VTABLE_OBJECT_RESOURCE;
    construct_heap_allocator(guest::addr_of(self).cast<void>() + HEAP_ALLOCATOR_OFFSET);
    self.value_0c = 0;
    self.value_10 = 0;
    return self;
}
GUEST_EXPORT(0x0027068c, construct_object_resource);
GUEST_FUZZ(0x0027068c, 100, [](guest::Fuzz &f) { f.arguments(f.object<ResourceObject>()); });

// The index of the first player that has an identity and the flag bit 4 set; 4 when none.
u32 first_player_index_with_flag(PlayerList &list) {
    for (u32 i = 0; i < SaveData::PLAYER_COUNT; i++) {
        SavePlayer &player = list.players[i];
        if (player.identity.is_set() && (player.flags_5700 & PLAYER_FLAG_BIT_4) != 0) {
            return i & 0xff;
        }
    }
    return SaveData::PLAYER_COUNT;
}
GUEST_EXPORT(0x00302204, first_player_index_with_flag);
GUEST_FUZZ(0x00302204, 40, [](guest::Fuzz &f) {
    auto list = f.object<PlayerList>();
    for (SavePlayer &player : list->players) {
        player.flags_5700 = f.pick<u8>({0, 0x10, 0xff});
    }
    f.arguments(list);
});
