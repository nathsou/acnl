// Copies of the items a villager record holds (wearing or showing; what each one is is not known yet).
#include "save/villager.hpp"

Item &copy_villager_item_249a(Item &out, const SaveVillager &villager) {
    return copy_item(out, villager.item_249a);
}
GUEST_EXPORT(0x0030f588, copy_villager_item_249a);

Item &copy_villager_item_24e6(Item &out, const SaveVillager &villager) {
    return copy_item(out, villager.item_24e6);
}
GUEST_EXPORT(0x003107bc, copy_villager_item_24e6);

Item &copy_villager_item_24ea(Item &out, const SaveVillager &villager) {
    return copy_item(out, villager.item_24ea);
}
GUEST_EXPORT(0x003107c8, copy_villager_item_24ea);

namespace {

gptr<SaveVillager> some_villager(guest::Fuzz &f) {
    auto villager = f.object<SaveVillager>();
    for (Item *item : {&villager->item_249a, &villager->item_24e6, &villager->item_24ea}) {
        item->id = f.below(4) == 0 ? Item::EMPTY : u16(Item::FIRST_ITEM + f.below(Item::ITEM_COUNT));
    }
    return villager;
}

}  // namespace

GUEST_FUZZ(0x0030f588, 200, [](guest::Fuzz &f) { f.arguments(f.object<Item>(), some_villager(f)); });
GUEST_FUZZ(0x003107bc, 200, [](guest::Fuzz &f) { f.arguments(f.object<Item>(), some_villager(f)); });
GUEST_FUZZ(0x003107c8, 200, [](guest::Fuzz &f) { f.arguments(f.object<Item>(), some_villager(f)); });
