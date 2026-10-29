// Wear classes of items and the accessors of ItemSlots built on them.
#include "item/item_slots.hpp"

namespace {

// Three items one after the other, then whether each was replaced.
struct ItemTriple {
    static constexpr u32 COUNT = 3;
    static constexpr u16 REPLACEMENT_ID = 0x2083;  // the item given for a replaced entry (meaning not known yet)

    u8 unknown_00[2];
    Item items[COUNT];
    u8 replaced[COUNT];
};
GUEST_OFFSET(ItemTriple, items, 2);
GUEST_OFFSET(ItemTriple, replaced, 0xe);

}  // namespace

gptr<WearClassEntry> Item::wear_class_entry() const {
    gptr<ItemData> d = data();
    if (!d) {
        return nullptr;
    }
    u32 index = d->wear_class_index < WearClassEntry::TABLE_SIZE ? d->wear_class_index : 0;
    gptr<WearClassEntry> entries = wear_class_table->entries;
    if (!entries) {
        return nullptr;
    }
    return entries + index;
}
GUEST_EXPORT(0x00535a68, Item::wear_class_entry);

WearClass Item::wear_class() const {
    gptr<WearClassEntry> entry = wear_class_entry();
    if (!entry) {
        return WEAR_CLASS_NONE;
    }
    u32 wear_class = entry->class_and_flags >> WearClassEntry::CLASS_SHIFT;
    return wear_class < WEAR_CLASS_LIMIT ? WearClass(wear_class) : WEAR_CLASS_NONE;
}
GUEST_EXPORT(0x0076ab28, Item::wear_class);

bool Item::is_wear_class_7() const {
    return wear_class() == WEAR_CLASS_7;
}
GUEST_EXPORT(0x0030bb10, Item::is_wear_class_7);

gptr<Item> item_if_class(gptr<Item> item, WearClass wear_class) {
    return item->wear_class() == wear_class ? item : empty_item.ptr();
}

gptr<Item> ItemSlots::slot_if_class(u32 slot, WearClass wear_class) {
    return item_if_class(guest::addr_of(slots[slot]), wear_class);
}

// ---- accessors of single slots (the game has several identical copies of some)

namespace {

constexpr u32 SLOT_1 = 1, SLOT_2 = 2, SLOT_3 = 3, SLOT_5 = 5, SLOT_6 = 6, SLOT_7 = 7;

gptr<Item> slot_1_if_class_2(ItemSlots &self) { return self.slot_if_class(SLOT_1, WEAR_CLASS_2); }
gptr<Item> slot_2_if_class_3(ItemSlots &self) { return self.slot_if_class(SLOT_2, WEAR_CLASS_3); }
gptr<Item> slot_3_if_class_4(ItemSlots &self) { return self.slot_if_class(SLOT_3, WEAR_CLASS_4); }
gptr<Item> slot_6_if_class_6(ItemSlots &self) { return self.slot_if_class(SLOT_6, WEAR_CLASS_6); }

}  // namespace

GUEST_EXPORT(0x003031c8, slot_1_if_class_2);
GUEST_EXPORT(0x0071a820, slot_1_if_class_2);
GUEST_EXPORT(0x00303110, slot_2_if_class_3);
GUEST_EXPORT(0x0071a868, slot_2_if_class_3);
GUEST_EXPORT(0x00303138, slot_3_if_class_4);
GUEST_EXPORT(0x0071a88c, slot_6_if_class_6);

gptr<Item> item_if_class_1(gptr<Item> item) {
    return item_if_class(item, WEAR_CLASS_1);
}
GUEST_EXPORT(0x003031f0, item_if_class_1);

// The item itself when it is the first item or has class 1, else the empty item.
gptr<Item> item_if_first_item_or_class_1(gptr<Item> item) {
    if (item->is_first_item()) {
        return item;
    }
    return item_if_class(item, WEAR_CLASS_1);
}
GUEST_EXPORT(0x0071a7ec, item_if_first_item_or_class_1);

// Slot 7's item when it has class 7, else the empty item.
gptr<Item> slot_7_if_class_7(ItemSlots &self) {
    return self.slots[SLOT_7].is_wear_class_7() ? guest::addr_of(self.slots[SLOT_7]) : empty_item.ptr();
}
GUEST_EXPORT(0x0071a844, slot_7_if_class_7);

// Slot 5's item if slot 2 holds a class-3 item that is not of category 8 and slot 5 has class 5; else the empty item.
gptr<Item> slot_5_if_slot_2_allows(ItemSlots &self) {
    constexpr u8 BLOCKING_CATEGORY = 8;  // meaning not known yet
    gptr<Item> slot_2 = self.slot_if_class(SLOT_2, WEAR_CLASS_3);
    if (slot_2->category() == BLOCKING_CATEGORY) {
        return empty_item.ptr();
    }
    return self.slot_if_class(SLOT_5, WEAR_CLASS_5);
}
GUEST_EXPORT(0x0071a8b0, slot_5_if_slot_2_allows);

// A copy of the item for `index` of the triple: the replacement item when it was replaced, the empty item for an
// index past the end.
Item &triple_item(Item &out, const ItemTriple &triple, u32 index) {
    if (index >= ItemTriple::COUNT) {
        return copy_item(out, *empty_item);
    }
    if (triple.replaced[index] != 0) {
        return construct_item(out, ItemTriple::REPLACEMENT_ID);
    }
    return copy_item(out, triple.items[index]);
}
GUEST_EXPORT(0x0071a96c, triple_item);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

namespace {

u16 some_item_id(guest::Fuzz &f) {
    switch (f.below(4)) {
    case 0:
        return Item::EMPTY;
    case 1:
        return Item::FIRST_ITEM;
    default:
        return item_data_table->entries ? u16(Item::FIRST_ITEM + f.below(Item::ITEM_COUNT)) : Item::EMPTY;
    }
}

gptr<Item> some_item(guest::Fuzz &f) {
    auto item = f.object<Item>();
    item->id = some_item_id(f);
    item->flags = u16(f.below(4) == 0 ? f.number() : f.below(10));
    return item;
}

gptr<ItemSlots> some_slots(guest::Fuzz &f) {
    auto slots = f.object<ItemSlots>();
    for (u32 i = 0; i < ItemSlots::SLOT_COUNT; i++) {
        slots->slots[i].id = some_item_id(f);
        slots->slots[i].flags = u16(f.below(4) == 0 ? f.number() : f.below(10));
    }
    return slots;
}

}  // namespace

GUEST_FUZZ(0x00535a68, 300, [](guest::Fuzz &f) { f.arguments(some_item(f)); });
GUEST_FUZZ(0x0076ab28, 300, [](guest::Fuzz &f) { f.arguments(some_item(f)); });
GUEST_FUZZ(0x0030bb10, 300, [](guest::Fuzz &f) { f.arguments(some_item(f)); });
GUEST_FUZZ(0x003031f0, 300, [](guest::Fuzz &f) { f.arguments(some_item(f)); });
GUEST_FUZZ(0x0071a7ec, 300, [](guest::Fuzz &f) { f.arguments(some_item(f)); });
GUEST_FUZZ(0x003031c8, 300, [](guest::Fuzz &f) { f.arguments(some_slots(f)); });
GUEST_FUZZ(0x0071a820, 300, [](guest::Fuzz &f) { f.arguments(some_slots(f)); });
GUEST_FUZZ(0x00303110, 300, [](guest::Fuzz &f) { f.arguments(some_slots(f)); });
GUEST_FUZZ(0x0071a868, 300, [](guest::Fuzz &f) { f.arguments(some_slots(f)); });
GUEST_FUZZ(0x00303138, 300, [](guest::Fuzz &f) { f.arguments(some_slots(f)); });
GUEST_FUZZ(0x0071a88c, 300, [](guest::Fuzz &f) { f.arguments(some_slots(f)); });
GUEST_FUZZ(0x0071a844, 300, [](guest::Fuzz &f) { f.arguments(some_slots(f)); });
GUEST_FUZZ(0x0071a8b0, 300, [](guest::Fuzz &f) { f.arguments(some_slots(f)); });
GUEST_FUZZ(0x0071a96c, 300, [](guest::Fuzz &f) {
    auto triple = f.object<ItemTriple>();
    for (u32 i = 0; i < ItemTriple::COUNT; i++) {
        triple->items[i].id = some_item_id(f);
        triple->replaced[i] = f.pick<u8>({0, 0, 1});
    }
    f.arguments(f.object<Item>(), triple, f.pick<u32>({0, 1, 2, 3, 4, 0xffffffffu}));
});
