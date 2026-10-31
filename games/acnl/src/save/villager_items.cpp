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
