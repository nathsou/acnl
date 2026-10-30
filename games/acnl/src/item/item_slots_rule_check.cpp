// Whether one of the items worn in the slots of an object has a certain availability rule.
#include "item/item_slots.hpp"

namespace {

constexpr u8 SPECIAL_RULE = 0x6e;  // the availability rule the items looked for have (meaning not known yet)
constexpr u32 SLOTS_OFFSET = 0x0a;

// An object that holds eight item slots from byte 0x0a on (the rest of it is not known yet).
struct SlotsHolder {
    u8 unknown_00[SLOTS_OFFSET];
    ItemSlots slots;
    u8 unknown_2a[0x30 - SLOTS_OFFSET - sizeof(ItemSlots)];
};
GUEST_OFFSET(SlotsHolder, slots, SLOTS_OFFSET);

inline constexpr guest::Function<0x0071a868, gptr<Item>(gptr<ItemSlots> slots)> slot_2_if_class_3;
inline constexpr guest::Function<0x0071a3a8, gptr<Item>(gptr<ItemSlots> slots)> slot_4_if_slot_2_allows;
inline constexpr guest::Function<0x0071a7ec, gptr<Item>(gptr<Item> item)> first_item_or_class_1;
inline constexpr guest::Function<0x0071a820, gptr<Item>(gptr<ItemSlots> slots)> slot_1_if_class_2;
inline constexpr guest::Function<0x0071a88c, gptr<Item>(gptr<ItemSlots> slots)> slot_6_if_class_6;
inline constexpr guest::Function<0x0071a8b0, gptr<Item>(gptr<ItemSlots> slots)> slot_5_if_slot_2_allows;
inline constexpr guest::Function<0x0071a844, gptr<Item>(gptr<ItemSlots> slots)> slot_7_if_class_7;

}  // namespace

// Whether the item that any of the slot pickers (slot 2, 4, 0 or the first item, 1, 6, 5 and 7, in that order) gives has
// the availability rule SPECIAL_RULE.
bool holder_has_item_with_special_rule(SlotsHolder &holder) {
    gptr<ItemSlots> slots = guest::addr_of(holder.slots);
    gptr<Item> picked[] = {slot_2_if_class_3(slots),   slot_4_if_slot_2_allows(slots), first_item_or_class_1(guest::addr_of(holder.slots.slots[0])),
                           slot_1_if_class_2(slots),   slot_6_if_class_6(slots),        slot_5_if_slot_2_allows(slots),
                           slot_7_if_class_7(slots)};
    for (gptr<Item> item : picked) {
        if (item->availability_rule() == SPECIAL_RULE) {
            return true;
        }
    }
    return false;
}
GUEST_EXPORT(0x0023e254, holder_has_item_with_special_rule);
GUEST_FUZZ(0x0023e254, 200, [](guest::Fuzz &f) {
    auto holder = f.object<SlotsHolder>();
    for (Item &item : holder->slots.slots) {
        item.id = item_data_table->entries ? u16(Item::FIRST_ITEM + f.below(Item::ITEM_COUNT)) : Item::EMPTY;
        item.flags = u16(f.below(16));
    }
    f.arguments(holder);
});
