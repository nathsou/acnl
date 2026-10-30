// What an item is worth to the shops: the price after the town's price flag, whether the item can be sold at all and
// a reduced price in small units.
#include "core/fuzz_helpers.hpp"
#include "item/item.hpp"
#include "save/save_data.hpp"

namespace {

constexpr u8 RULE_NOT_BOOSTED = 0x73;           // items with this availability rule keep their price
constexpr s32 BOOST_NUMERATOR = 6;              // the flag raises prices by a fifth
constexpr s32 BOOST_DENOMINATOR = 5;
constexpr s32 SELL_PRICE_DIVISOR = 5;           // shops pay a fifth of the price
constexpr s32 REDUCED_PRICE_DIVISOR = 80;       // reduced_price() divides the price by this at the end
constexpr s32 REDUCED_PRICE_MINIMUM = 1;
constexpr u8 FLAGS_1C_NOT_SOLD = 1 << 7;        // ItemData::flags_1c: the item is never bought
constexpr u8 CATEGORY_FLAG_2_SELLABLE = 1 << 4;  // the third byte of the category's flags
constexpr u32 CATEGORY_FLAGS_SELLABLE_BYTE = 2;

// Whether the price flag (bit 3 of SaveData::flags_621cf, probably the Bell Boom ordinance) raises this item's price.
bool price_flag_applies(const Item &item) {
    return item.availability_rule() != RULE_NOT_BOOSTED &&
           ((*save_data)->flags_621cf & SaveData::FLAGS_621CF_BIT_3) != 0;
}

}  // namespace

// The price, raised by a fifth while the price flag is set (except for the items with availability rule 0x73).
u32 Item::price_with_boost() const {
    s32 value = s32(price());
    if (price_flag_applies(*this)) {
        value = value * BOOST_NUMERATOR / BOOST_DENOMINATOR;
    }
    return u32(value);
}
GUEST_EXPORT(0x007699fc, Item::price_with_boost);

// Whether the item can be sold: it is not of kind 2, its data does not forbid it, a fifth of its price (raised by the
// price flag) is positive, it is not in id set a and its category's flags allow selling.
bool Item::can_be_sold() const {
    if (is_kind_2()) {
        return false;
    }
    gptr<ItemData> d = data();
    if (!d || (d->flags_1c & FLAGS_1C_NOT_SOLD) != 0) {
        return false;
    }
    s32 sell_price = s32(price()) / SELL_PRICE_DIVISOR;
    if (price_flag_applies(*this)) {
        sell_price = sell_price * BOOST_NUMERATOR / BOOST_DENOMINATOR;
    }
    if (sell_price <= 0 || is_in_id_set_a()) {
        return false;
    }
    gptr<u8> category_flags_entry = category_flags();
    return category_flags_entry && (category_flags_entry[CATEGORY_FLAGS_SELLABLE_BYTE] & CATEGORY_FLAG_2_SELLABLE) != 0;
}
GUEST_EXPORT(0x007690dc, Item::can_be_sold);

// A fifth of the base price for the categories priced by reference and for stacks (times the stack's count), then an
// eightieth of that, at least 1 for anything worth more than nothing. Bags of bells give their bells; items without
// data give 0.
u32 Item::reduced_price() const {
    gptr<ItemData> d = data();
    if (!d) {
        return 0;
    }
    s32 value = s32(d->base_price());
    u8 category = d->category;
    if (category < NO_CATEGORY) {
        if (category == CATEGORY_BELLS) {
            return u32(value);
        }
        bool stack = category == CATEGORY_STACK_75 || category == CATEGORY_STACK_76;
        if (stack || category == CATEGORY_PRICED_BY_REFERENCE_33 || category == CATEGORY_PRICED_BY_REFERENCE_34) {
            value /= SELL_PRICE_DIVISOR;
            if (stack) {
                value = s32(u32(value) * valid_stack_count());
            }
        }
    }
    if (value <= 0) {
        return 0;
    }
    value /= REDUCED_PRICE_DIVISOR;
    return u32(value < REDUCED_PRICE_MINIMUM ? REDUCED_PRICE_MINIMUM : value);
}
GUEST_EXPORT(0x00768ffc, Item::reduced_price);

GUEST_FUZZ(0x007699fc, 300, [](guest::Fuzz &f) { f.arguments(fuzz::assorted_item(f)); });
GUEST_FUZZ(0x007690dc, 400, [](guest::Fuzz &f) { f.arguments(fuzz::assorted_item(f)); });
GUEST_FUZZ(0x00768ffc, 400, [](guest::Fuzz &f) {
    f.arguments(fuzz::assorted_item(f, {CATEGORY_BELLS, CATEGORY_PRICED_BY_REFERENCE_33, CATEGORY_PRICED_BY_REFERENCE_34,
                                        CATEGORY_STACK_75, CATEGORY_STACK_76}));
});
