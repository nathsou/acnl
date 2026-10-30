// Bell bags worth a given amount of bells.
#include "guest/guest.hpp"
#include "item/item.hpp"

using guest::gptr;

// The bag of bells for an amount, written to `out` (the empty item when none fits): with `round_up` the smallest bag
// worth at least the amount, otherwise the largest worth at most the amount. The bells left over (or missing, when
// rounding up) go to `remainder` when it is given.
void bell_bag_for_amount(Item &out, u32 amount, bool round_up, gptr<u32> remainder) {
    if (remainder) {
        *remainder = 0;
    }
    guest::StackObject<Item> bag;
    if (round_up) {
        construct_item(*bag, BELL_BAG_99000);
        if (bag->price() >= amount) {
            for (u16 number = BELL_BAG_100; number <= BELL_BAG_99000; number++) {
                construct_item(*bag, number);
                if (amount <= bag->price()) {
                    if (remainder) {
                        *remainder = bag->price() - amount;
                    }
                    out.id = bag->id;
                    out.flags = bag->flags;
                    return;
                }
            }
        }
    } else {
        construct_item(*bag, BELL_BAG_100);
        if (bag->price() <= amount) {
            for (u16 number = BELL_BAG_99000; number >= BELL_BAG_100; number--) {
                construct_item(*bag, number);
                if (amount >= bag->price()) {
                    if (remainder) {
                        *remainder = amount - bag->price();
                    }
                    out.id = bag->id;
                    out.flags = bag->flags;
                    return;
                }
            }
        }
    }
    out.id = empty_item->id;
    out.flags = empty_item->flags;
}
GUEST_EXPORT(0x006bba30, bell_bag_for_amount);
GUEST_FUZZ(0x006bba30, 300, [](guest::Fuzz &f) {
    gptr<u32> remainder = f.below(3) ? f.allocate(sizeof(u32)).cast<u32>() : gptr<u32>(0u);
    f.arguments(f.object<Item>(), f.pick<u32>({0, 1, 99, 100, 150, 900, 1000, 54'321, 99'000, 99'001, 1'000'000, f.number()}),
                f.below(2), remainder);
});
