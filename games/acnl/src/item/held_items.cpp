// An object that holds up to two items (in hand): taking an item in decides where the item goes and what happens to
// the one already held. Items of category 8 (and wear class 3 items) may be held together with another item.
#include "item/item.hpp"

namespace {

constexpr u32 HAND_CATEGORY = 8;  // (what the category stands for is not known yet)

}  // namespace

struct HeldItems {
    u8 unknown_00[8];
    Item first;
    Item second;

    void take(const Item &item);
};
GUEST_OFFSET(HeldItems, first, 8);
GUEST_OFFSET(HeldItems, second, 0xc);
GUEST_SIZE(HeldItems, 0x10);

void HeldItems::take(const Item &item) {
    u32 held_category = first.category();
    if (item.category() != HAND_CATEGORY) {
        if (item.wear_class() != WEAR_CLASS_3 && held_category == HAND_CATEGORY) {
            first = second;
            second = *empty_item;
            return;
        }
        first = item;
        second = *empty_item;
        return;
    }
    if (held_category == HAND_CATEGORY) {
        first = item;
        return;
    }
    if (first.wear_class() == WEAR_CLASS_3) {
        second = first;
        first = item;
        return;
    }
    first = item;
    second = *empty_item;
}
GUEST_EXPORT(0x0027ac38, HeldItems::take);

// An object that may have two holders of items in hand.
struct HeldItemsOwner {
    gptr<HeldItems> primary;
    gptr<HeldItems> secondary;

    void hold(const Item &item);
};

// Hands the item to the primary holder, which takes it in; without one, the secondary holder just gets it as its
// first item. Nothing happens when there is neither.
void HeldItemsOwner::hold(const Item &item) {
    if (primary != nullptr) {
        primary->take(item);
        return;
    }
    if (secondary != nullptr) {
        secondary->first = item;
    }
}
GUEST_EXPORT(0x001ad250, HeldItemsOwner::hold);
