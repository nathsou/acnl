// Three NPC actions that hand out one of two items at random, when the actor's table checks say so.
#include "item/item.hpp"

using guest::gptr;

Item &construct_item(Item &self, u16 id);
Item &copy_item(Item &self, const Item &other);
s32 random_below(s32 max);

namespace {

constexpr u32 FIRST_ITEM_OFFSET = 0x30;
constexpr s32 RANDOM_CHOICES = 2;

struct ItemGiver {
    u8 unknown_00[FIRST_ITEM_OFFSET];
    Item first_item;
    u8 unknown_34[4];
    Item second_item;
};
GUEST_OFFSET(ItemGiver, first_item, 0x30);
GUEST_OFFSET(ItemGiver, second_item, 0x38);

inline constexpr guest::Function<0x00303738, u32(gptr<ItemGiver> giver)> check_a;
inline constexpr guest::Function<0x00303754, u32(gptr<ItemGiver> giver)> check_b;

// When one of the two checks passes, a coin toss stores one of the two items.
void give_one_of(ItemGiver &giver, u16 first_id, u16 second_id) {
    gptr<ItemGiver> self = guest::addr_of(giver);
    if (check_a(self) == 0 && check_b(self) == 0) {
        return;
    }
    Item item;
    if (random_below(RANDOM_CHOICES) != 0) {
        construct_item(item, second_id);
        copy_item(giver.second_item, item);
    } else {
        construct_item(item, first_id);
        copy_item(giver.first_item, item);
    }
}

}  // namespace

void give_item_pair_a(ItemGiver &giver) { give_one_of(giver, 0x235d, 0x23fc); }
GUEST_EXPORT(0x00109501, give_item_pair_a);

void give_item_pair_b(ItemGiver &giver) { give_one_of(giver, 0x235e, 0x23fd); }
GUEST_EXPORT(0x0010955d, give_item_pair_b);

void give_item_pair_c(ItemGiver &giver) { give_one_of(giver, 0x235c, 0x23fb); }
GUEST_EXPORT(0x001095b9, give_item_pair_c);
