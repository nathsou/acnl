#include "save/pockets.hpp"

const Item &Pockets::item_at(u32 slot) const {
    if (slot < SLOTS) {
        const Item &item = items[slot];
        if (item.is_empty() || item_category_flag_4(item)) return item;
    }
    return *empty_item;
}

s32 Pockets::find_empty_slot() const {
    for (u32 slot = 0; slot < SLOTS; slot++)
        if (item_at(slot).is_empty()) return slot;
    return -1;
}
GUEST_EXPORT(0x007241b0, Pockets::find_empty_slot);

u32 Pockets::total_bells() const {
    u32 total = wallet.get();
    for (u32 slot = 0; slot < SLOTS; slot++) {
        if (slot_locked[slot]) continue;
        if (item_at(slot).category() == CATEGORY_BELLS) total += item_price(item_at(slot));
    }
    return total;
}
GUEST_EXPORT(0x0071da54, Pockets::total_bells);

// Pays from the wallet; when it is not enough, every bag of bells is emptied into it first, and the change goes
// back as bags of 99,000 bells (while there is room) and the rest in the wallet.
void Pockets::pay(u32 bells) {
    u32 total = wallet.get();
    if (bells <= total) {
        wallet.subtract(bells);
        return;
    }
    for (u32 slot = 0; slot < SLOTS; slot++) {
        if (slot_locked[slot]) continue;
        if (item_at(slot).category() != CATEGORY_BELLS) continue;
        total += item_price(item_at(slot));
        pockets_set_slot(*this, slot, *empty_item, 0, 1);
    }
    s32 change = s32(total - bells);
    if (change < 0) change = 0;

    guest::StackObject<Item> bag;
    construct_item(*bag, BELL_BAG_99000);
    u32 bag_value = item_price(*bag);
    while (u32(change) >= 99'999) {  // (forever, if no slot is free)
        if (pockets_add(*this, *bag, 0, 1)) change -= bag_value;
    }
    if (change < 0) change = 0;
    wallet.set(change);
}
GUEST_EXPORT(0x002bfcfc, Pockets::pay);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

static gptr<Pockets> some_pockets(guest::Fuzz &f) {
    auto pockets = f.object<Pockets>();
    for (u32 slot = 0; slot < Pockets::SLOTS; slot++) {
        Item &item = pockets->items[slot];
        switch (f.below(4)) {
        case 0: item.id = Item::EMPTY; break;
        case 1: item.id = BELL_BAG_100 + f.below(BELL_BAG_99000 - BELL_BAG_100 + 1); break;
        case 2: item.id = Item::FIRST_ITEM + f.below(Item::ITEM_COUNT); break;
        default: break;
        }
        item.flags = f.below(3) ? 0 : f.number();
        pockets->slot_locked[slot] = f.below(8) == 0;
    }
    pockets->wallet = EncryptedInt::make(f.below(4) ? f.below(100'000) : f.number(), f.number(), f.below(26));
    return pockets;
}

GUEST_FUZZ(0x007241b0, 300, [](guest::Fuzz &f) { f.arguments(some_pockets(f)); });
GUEST_FUZZ(0x0071da54, 300, [](guest::Fuzz &f) { f.arguments(some_pockets(f)); });
GUEST_FUZZ(0x002bfcfc, 300, [](guest::Fuzz &f) {
    auto pockets = some_pockets(f);
    f.arguments(pockets, f.pick<u32>({0, 1, 1000, 99'999, 250'000, f.number() % 1'000'000}));
});
