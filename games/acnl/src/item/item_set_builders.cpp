// Building a set of items from their data: every item whose attribute has a given value is added to the set. The
// items the game hides until it has progressed (flag 0 of ItemData::flags_1b) are left out once the stage (the top
// nibble of flags_621ce) is not 0.
#include "item/item_bit_set.hpp"
#include "save/save_data.hpp"

namespace {

constexpr u32 STAGE_SHIFT = 4;
constexpr u8 HIDDEN_FLAG = 1 << 0;
constexpr u8 NIBBLE_MASK = 0x0f;
constexpr u32 NIBBLE_SHIFT = 4;
constexpr u8 BITS_BELOW_3 = 0x03;
constexpr u32 WORD_SHIFT = 5;
constexpr u32 BIT_MASK = 31;
constexpr u8 CATEGORY_5 = 5;
constexpr u32 FIRST_BYTE_16_HIGH_LIMIT = 0x0f;  // each attribute reads as 0 from its limit on
constexpr u32 BYTE_16_LOW_LIMIT = 0x0a;
constexpr u32 BYTE_17_HIGH_LIMIT = 0x0d;
constexpr u32 BYTE_19_LOW_LIMIT = 0x0e;
constexpr u32 BYTE_1A_LIMIT = 3;
constexpr u32 RULE_FIRST = 9;  // availability rules below this are refused by the combined builder
constexpr u32 RULE_REFUSED[] = {0x14, 0x15, 0x16, 0x17};

inline constexpr guest::Function<0x002fb328, gptr<SaveData>()> get_save_data;

u32 limited(u32 value, u32 limit) {
    return value >= limit ? 0 : value;
}

// Adds the items of `count` entries of the data table starting at the item number `first` for which `matches` holds
// (hidden ones only before the first stage).
template <typename Matches>
void add_matching(ItemBitSet &set, u32 first, u32 count, Matches matches) {
    bool include_hidden = (get_save_data()->flags_621ce >> STAGE_SHIFT) == 0;
    guest::StackObject<Item> start;
    construct_item(*start, u16(first));
    gptr<ItemData> data = start->data();
    for (u32 offset = 0; offset < count; offset++) {
        const ItemData &entry = data[offset];
        u32 bit = first + offset - Item::FIRST_ITEM;
        if (matches(entry) && (include_hidden || (entry.flags_1b & HIDDEN_FLAG) == 0) && bit <= ItemBitSet::ITEM_BITS) {
            set.words[bit >> WORD_SHIFT] |= 1u << (bit & BIT_MASK);
        }
    }
}

template <typename Matches>
void add_matching_everywhere(ItemBitSet &set, Matches matches) {
    add_matching(set, Item::FIRST_ITEM, Item::ITEM_COUNT, matches);
}

// Sets the stage to a random value and passes a set and a value that is often one an attribute can have.
void fuzz_builder(guest::Fuzz &f, u32 limit) {
    gptr<SaveData> save = get_save_data();
    save->flags_621ce = u8((save->flags_621ce & NIBBLE_MASK) | (f.below(3) << STAGE_SHIFT));
    f.arguments(f.object<ItemBitSet>(), f.pick<u32>({0, 1, 2, limit - 1, limit, f.below(limit)}));
}

}  // namespace

// Items whose ItemData::byte_16 high nibble is the value.
void add_items_with_byte_16_high(ItemBitSet &set, u32 value) {
    add_matching_everywhere(set, [value](const ItemData &entry) {
        return limited(entry.byte_16 >> NIBBLE_SHIFT, FIRST_BYTE_16_HIGH_LIMIT) == value;
    });
}
GUEST_EXPORT(0x006f1c48, add_items_with_byte_16_high);
GUEST_FUZZ(0x006f1c48, 50, [](guest::Fuzz &f) { fuzz_builder(f, FIRST_BYTE_16_HIGH_LIMIT); });

// Items whose ItemData::byte_16 low nibble is the value.
void add_items_with_byte_16_low(ItemBitSet &set, u32 value) {
    add_matching_everywhere(set, [value](const ItemData &entry) {
        return limited(entry.byte_16 & NIBBLE_MASK, BYTE_16_LOW_LIMIT) == value;
    });
}
GUEST_EXPORT(0x006f20c4, add_items_with_byte_16_low);
GUEST_FUZZ(0x006f20c4, 50, [](guest::Fuzz &f) { fuzz_builder(f, BYTE_16_LOW_LIMIT); });

// Items whose ItemData::byte_17 high nibble is the value.
void add_items_with_byte_17_high(ItemBitSet &set, u32 value) {
    add_matching_everywhere(set, [value](const ItemData &entry) {
        return limited(entry.byte_17 >> NIBBLE_SHIFT, BYTE_17_HIGH_LIMIT) == value;
    });
}
GUEST_EXPORT(0x006f2674, add_items_with_byte_17_high);
GUEST_FUZZ(0x006f2674, 50, [](guest::Fuzz &f) { fuzz_builder(f, BYTE_17_HIGH_LIMIT); });

// Items whose ItemData::byte_1a low two bits are the value.
void add_items_with_byte_1a(ItemBitSet &set, u32 value) {
    add_matching_everywhere(set, [value](const ItemData &entry) {
        return limited(entry.byte_1a & BITS_BELOW_3, BYTE_1A_LIMIT) == value;
    });
}
GUEST_EXPORT(0x006f1e60, add_items_with_byte_1a);
GUEST_FUZZ(0x006f1e60, 50, [](guest::Fuzz &f) { fuzz_builder(f, BYTE_1A_LIMIT); });

// Items of category 5 whose low nibble of ItemData::class_and_flags_19 is the value.
void add_category_5_items_with_byte_19_low(ItemBitSet &set, u32 value) {
    gptr<CategoryInfo> info = category_info(CATEGORY_5);
    add_matching(set, info->first_item_number, info->item_count, [value](const ItemData &entry) {
        return limited(entry.class_and_flags_19 & NIBBLE_MASK, BYTE_19_LOW_LIMIT) == value;
    });
}
GUEST_EXPORT(0x006f0900, add_category_5_items_with_byte_19_low);
GUEST_FUZZ(0x006f0900, 50, [](guest::Fuzz &f) { fuzz_builder(f, BYTE_19_LOW_LIMIT); });

// Items whose byte_16 high nibble is `high` and whose availability rule (0 from RULE_LIMIT on) is `rule`; nothing
// is added for rules below RULE_FIRST or for the rules of RULE_REFUSED.
void add_items_with_byte_16_high_and_rule(ItemBitSet &set, u32 high, u32 rule) {
    if (rule < RULE_FIRST) {
        return;
    }
    for (u32 refused : RULE_REFUSED) {
        if (rule == refused) {
            return;
        }
    }
    add_matching_everywhere(set, [high, rule](const ItemData &entry) {
        return limited(entry.byte_16 >> NIBBLE_SHIFT, FIRST_BYTE_16_HIGH_LIMIT) == high &&
               limited(entry.availability_rule, ItemData::RULE_LIMIT) == rule;
    });
}
GUEST_EXPORT(0x006f2414, add_items_with_byte_16_high_and_rule);
GUEST_FUZZ(0x006f2414, 100, [](guest::Fuzz &f) {
    gptr<SaveData> save = get_save_data();
    save->flags_621ce = u8((save->flags_621ce & NIBBLE_MASK) | (f.below(3) << STAGE_SHIFT));
    f.arguments(f.object<ItemBitSet>(), f.pick<u32>({0, 1, 5, 10, f.below(FIRST_BYTE_16_HIGH_LIMIT)}),
                f.pick<u32>({0, 8, 9, 0x14, 0x17, 0x18, 0x30, 0xb8, 0xb9, f.below(0xb9)}));
});
