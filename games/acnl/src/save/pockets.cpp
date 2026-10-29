#include "save/pockets.hpp"

const Item &Pockets::item_at(u32 slot) const {
    if (slot < SLOTS) {
        const Item &item = items[slot];
        if (item.is_empty() || item.has_category_flag_4()) {
            return item;
        }
    }
    return *empty_item;
}

s32 Pockets::find_empty_slot() const {
    for (u32 slot = 0; slot < SLOTS; slot++) {
        if (item_at(slot).is_empty()) {
            return slot;
        }
    }
    return -1;
}
GUEST_EXPORT(0x007241b0, Pockets::find_empty_slot);

u32 Pockets::total_bells() const {
    u32 total = wallet.get();
    for (u32 slot = 0; slot < SLOTS; slot++) {
        if (slot_locked[slot]) {
            continue;
        }
        if (item_at(slot).category() == CATEGORY_BELLS) {
            total += item_at(slot).price();
        }
    }
    return total;
}
GUEST_EXPORT(0x0071da54, Pockets::total_bells);

namespace {

// Empties the unlocked bags of bells; returns the bells that were in them.
u32 take_bell_bags(Pockets &pockets) {
    u32 total = 0;
    for (u32 slot = 0; slot < Pockets::SLOTS; slot++) {
        if (pockets.slot_locked[slot]) {
            continue;
        }
        if (pockets.item_at(slot).category() != CATEGORY_BELLS) {
            continue;
        }
        total += pockets.item_at(slot).price();
        pockets_set_slot(pockets, slot, *empty_item, 0, 1);
    }
    return total;
}

}  // namespace

// Pays from the wallet; when it is not enough, every bag of bells is emptied into it first, and the change goes
// back as bags of 99,000 bells (while there is room) and the rest in the wallet.
void Pockets::pay(u32 bells) {
    u32 total = wallet.get();
    if (bells <= total) {
        wallet.subtract(bells);
        return;
    }
    total += take_bell_bags(*this);
    s32 change = s32(total - bells);
    if (change < 0) {
        change = 0;
    }

    guest::StackObject<Item> bag;
    construct_item(*bag, BELL_BAG_99000);
    u32 bag_value = bag->price();
    while (u32(change) >= WALLET_MAX) {  // (forever, if no slot is free)
        if (pockets_add(*this, *bag, 0, 1)) {
            change -= bag_value;
        }
    }
    if (change < 0) {
        change = 0;
    }
    wallet.set(change);
}
GUEST_EXPORT(0x002bfcfc, Pockets::pay);

u32 Pockets::free_slot_count() const {
    u32 count = 0;
    for (u32 slot = 0; slot < SLOTS; slot++) {
        if (item_at(slot).is_empty()) {
            count++;
        }
    }
    return count;
}
GUEST_EXPORT(0x007244e4, Pockets::free_slot_count);

u32 Pockets::bells_room(u32 extra_bags) const {
    u32 room = WALLET_MAX - wallet.get();
    guest::StackObject<Item> bag;
    construct_item(*bag, BELL_BAG_99000);
    u32 bag_value = bag->price();
    for (u32 slot = 0; slot < SLOTS; slot++) {
        if (!slot_locked[slot] && item_at(slot).category() == CATEGORY_BELLS) {
            room += bag_value - item_at(slot).price();
        } else if (item_at(slot).is_empty()) {
            room += bag_value;
        }
    }
    return room + extra_bags * bag_value;
}
GUEST_EXPORT(0x0071db38, Pockets::bells_room);

void Pockets::add_bells(u32 bells) {
    bells = std::min(bells, bells_room(0));
    if (wallet.get() + bells <= WALLET_MAX) {
        wallet.add(bells, ~0u);
        return;
    }
    u32 total = wallet.get() + take_bell_bags(*this) + bells;
    if (s32(total) < 0) {
        total = 0;
    }
    guest::StackObject<Item> bag;
    construct_item(*bag, BELL_BAG_99000);
    u32 bag_value = bag->price();
    u32 free_slots = free_slot_count();
    if (free_slots > 0) {
        u32 added = 0;
        do {
            pockets_add(*this, *bag, 0, 1);
            total -= bag_value;
            if (total < bag_value) {
                break;
            }
            added++;
        } while (free_slots > added);
    }
    wallet.set(std::min(total, WALLET_MAX));
}
GUEST_EXPORT(0x002bfadc, Pockets::add_bells);

void Pockets::merge_bell_bags() {
    u32 total = wallet.get() + take_bell_bags(*this);
    guest::StackObject<Item> bag;
    construct_item(*bag, BELL_BAG_99000);
    u32 bag_value = bag->price();
    while (total > WALLET_MAX) {  // (forever, if no slot is free)
        if (pockets_add(*this, *bag, 0, 1)) {
            total -= bag_value;
        }
    }
    wallet.set(total);
}
GUEST_EXPORT(0x002bf69c, Pockets::merge_bell_bags);

bool Pockets::add_item_merging_bags(const Item &item, u32 unknown) {
    if (pockets_add(*this, item, unknown, 1)) {
        return true;
    }
    merge_bell_bags();
    return pockets_add(*this, item, unknown, 1);
}
GUEST_EXPORT(0x002bf90c, Pockets::add_item_merging_bags);

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
    pockets->wallet = EncryptedInt::make(f.below(4) ? f.below(Pockets::WALLET_MAX + 1) : f.number(), f.number(),
                                        f.below(EncryptedInt::ROTATIONS));
    return pockets;
}

GUEST_FUZZ(0x007241b0, 300, [](guest::Fuzz &f) { f.arguments(some_pockets(f)); });
GUEST_FUZZ(0x0071da54, 300, [](guest::Fuzz &f) { f.arguments(some_pockets(f)); });
GUEST_FUZZ(0x002bfcfc, 300, [](guest::Fuzz &f) {
    auto pockets = some_pockets(f);
    f.arguments(pockets, f.pick<u32>({0, 1, 1000, 99'999, 250'000, f.number() % 1'000'000}));
});
GUEST_FUZZ(0x007244e4, 100, [](guest::Fuzz &f) { f.arguments(some_pockets(f)); });
GUEST_FUZZ(0x0071db38, 200, [](guest::Fuzz &f) { f.arguments(some_pockets(f), f.below(4)); });
GUEST_FUZZ(0x002bfadc, 300, [](guest::Fuzz &f) {
    auto pockets = some_pockets(f);
    f.arguments(pockets, f.pick<u32>({0, 1, 1000, 99'999, 250'000, f.number() % 1'000'000}));
});

// Pockets that merge_bell_bags can always finish with: mostly empty, with a few bags of bells.
static gptr<Pockets> pockets_with_few_bags(guest::Fuzz &f) {
    auto pockets = f.object<Pockets>();
    for (u32 slot = 0; slot < Pockets::SLOTS; slot++) {
        pockets->items[slot].id = f.below(5) == 0 ? BELL_BAG_100 + f.below(BELL_BAG_99000 - BELL_BAG_100 + 1) : Item::EMPTY;
        pockets->items[slot].flags = 0;
        pockets->slot_locked[slot] = f.below(8) == 0;
    }
    pockets->wallet = EncryptedInt::make(f.below(Pockets::WALLET_MAX + 1), f.number(), f.below(EncryptedInt::ROTATIONS));
    return pockets;
}
GUEST_FUZZ(0x002bf69c, 200, [](guest::Fuzz &f) { f.arguments(pockets_with_few_bags(f)); });
GUEST_FUZZ(0x002bf90c, 200, [](guest::Fuzz &f) {
    auto pockets = pockets_with_few_bags(f);
    auto item = f.object<Item>();
    item->id = Item::FIRST_ITEM + f.below(Item::ITEM_COUNT);
    item->flags = 0;
    f.arguments(pockets, item, f.below(2));
});
