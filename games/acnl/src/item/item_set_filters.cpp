// Narrowing an item set by price or by an attribute, and picking the n-th member of a set. The game builds the set of
// items a shop or an event may hand out, then removes the ones that are too cheap or too dear (or of the wrong kind);
// if that would leave nothing it keeps one item that was in the set to begin with, chosen at random.
#include "item/item_bit_set.hpp"

namespace {

constexpr s32 NOT_FOUND = -1;
constexpr u32 WORD_SHIFT = 5;
constexpr u32 BIT_MASK = 31;

// Attributes the filters compare; values at or above the limit read as 0.
constexpr u8 FIELD_1A_MASK = 3;
constexpr u8 FIELD_1A_LIMIT = 3;
constexpr u8 FIELD_16_MASK = 0xf;
constexpr u8 FIELD_16_LIMIT = 10;
constexpr u32 FIELD_18_SHIFT = 4;
constexpr u8 FIELD_18_LIMIT = 0xf;
constexpr u32 FIELD_15_SHIFT = 4;
constexpr u32 FIELD_15_LIMIT = 7;
constexpr u32 FIELD_15_ALSO_KEPT = 4;
constexpr u8 FLAGS_1C_BIT_4 = 1 << 4;
constexpr u8 FLAGS_1C_BIT_7 = 1 << 7;

u8 below_limit_or_zero(u8 value, u8 limit) {
    return value < limit ? value : 0;
}

inline constexpr guest::Function<0x002ff6f8, s32(s32 max)> random_below;

u32 count_bits(const ItemBitSet &set) {
    u32 count = 0;
    for (u32 word : set.words) {
        for (; word != 0; word >>= 1) {
            count += word & 1;
        }
    }
    return count;
}

gptr<ItemBitSet> fuzz_set(guest::Fuzz &f) {
    auto set = f.object<ItemBitSet>();
    for (u32 &word : set->words) {
        word = f.below(4) == 0 ? u32(f.number()) : 0;
    }
    return set;
}

// Clears the bits of the items whose data entry `remove` returns true for, then reports whether any bit is left; when none is, the
// bit of a randomly chosen member of the original set comes back.
template <typename Predicate>
bool filter_set(ItemBitSet &set, Predicate remove) {
    s32 chosen = set.index_of_nth_set_bit(u32(random_below(s32(count_bits(set)))));
    guest::StackObject<Item> first;
    construct_item(*first, Item::FIRST_ITEM);
    gptr<ItemData> data = first->data();
    for (u32 index = 0; index < Item::ITEM_COUNT; index++) {
        if (remove(data + index)) {
            set.words[index >> WORD_SHIFT] &= ~(1u << (index & BIT_MASK));
        }
    }
    if (count_bits(set) != 0) {
        return true;
    }
    if (chosen != NOT_FOUND && u32(chosen) <= Item::ITEM_COUNT) {
        set.words[u32(chosen) >> WORD_SHIFT] |= 1u << (u32(chosen) & BIT_MASK);
    }
    return false;
}

}  // namespace

// The index of the bit that is the n-th set bit of the set (counting from 0), or -1 when there are fewer.
s32 ItemBitSet::index_of_nth_set_bit(u32 n) const {
    u32 seen = 0;
    for (u32 word_index = 0; word_index < WORDS; word_index++) {
        u32 word = words[word_index];
        for (u32 bit = 0; word != 0; bit++, word >>= 1) {
            if ((word & 1) == 0) {
                continue;
            }
            if (seen == n) {
                return s32(word_index * 32 + bit);
            }
            seen++;
        }
    }
    return NOT_FOUND;
}
GUEST_EXPORT(0x007703e0, ItemBitSet::index_of_nth_set_bit);
GUEST_FUZZ(0x007703e0, 200, [](guest::Fuzz &f) { f.arguments(fuzz_set(f), f.below(40)); });

// Removes the items that cost the limit or more; false when none was left (then one original member is restored).
bool keep_items_cheaper_than(ItemBitSet &set, u32 limit) {
    return filter_set(set, [limit](gptr<ItemData> entry) { return entry->base_price() >= limit; });
}
GUEST_EXPORT(0x006f1b1c, keep_items_cheaper_than);
GUEST_FUZZ(0x006f1b1c, 100, [](guest::Fuzz &f) { f.arguments(fuzz_set(f), f.pick<u32>({0, 10, 100, 1000, 100000, f.number()})); });

// Removes the items that cost less than the limit.
bool keep_items_at_least(ItemBitSet &set, u32 limit) {
    return filter_set(set, [limit](gptr<ItemData> entry) { return entry->base_price() < limit; });
}
GUEST_EXPORT(0x006f0b08, keep_items_at_least);
GUEST_FUZZ(0x006f0b08, 100, [](guest::Fuzz &f) { f.arguments(fuzz_set(f), f.pick<u32>({0, 10, 100, 1000, 100000, f.number()})); });

// Keeps the items whose attribute equals `wanted` (a value at or above the limit counts as 0): the filters below only
// differ in which byte of the data entry they read. Their meanings are not known yet.
bool keep_items_with_field_1a(ItemBitSet &set, u32 wanted) {
    return filter_set(set, [wanted](gptr<ItemData> entry) {
        return below_limit_or_zero(entry->byte_1a & FIELD_1A_MASK, FIELD_1A_LIMIT) != wanted;
    });
}
GUEST_EXPORT(0x006f1f8c, keep_items_with_field_1a);
GUEST_FUZZ(0x006f1f8c, 100, [](guest::Fuzz &f) { f.arguments(fuzz_set(f), f.below(4)); });

bool keep_items_with_field_16(ItemBitSet &set, u32 wanted) {
    return filter_set(set, [wanted](gptr<ItemData> entry) {
        return below_limit_or_zero(entry->byte_16 & FIELD_16_MASK, FIELD_16_LIMIT) != wanted;
    });
}
GUEST_EXPORT(0x006f22dc, keep_items_with_field_16);
GUEST_FUZZ(0x006f22dc, 100, [](guest::Fuzz &f) { f.arguments(fuzz_set(f), f.below(12)); });

// Keeps the items of one category.
bool keep_items_of_category(ItemBitSet &set, u32 wanted) {
    return filter_set(set, [wanted](gptr<ItemData> entry) {
        return below_limit_or_zero(entry->category, Item::NO_CATEGORY) != wanted;
    });
}
GUEST_EXPORT(0x006f3110, keep_items_of_category);
GUEST_FUZZ(0x006f3110, 100, [](guest::Fuzz &f) { f.arguments(fuzz_set(f), f.pick<u32>({f.below(Item::NO_CATEGORY), f.below(0x20)})); });

bool keep_items_with_field_15(ItemBitSet &set, u32 wanted) {
    return filter_set(set, [wanted](gptr<ItemData> entry) {
        return below_limit_or_zero(entry->unknown_15 & ItemData::UNKNOWN_15_MASK, ItemData::UNKNOWN_15_LIMIT) != wanted;
    });
}
GUEST_EXPORT(0x006f3244, keep_items_with_field_15);
GUEST_FUZZ(0x006f3244, 100, [](guest::Fuzz &f) { f.arguments(fuzz_set(f), f.below(12)); });

bool keep_items_with_field_18(ItemBitSet &set, u32 wanted) {
    return filter_set(set, [wanted](gptr<ItemData> entry) {
        return below_limit_or_zero(entry->byte_18 >> FIELD_18_SHIFT, FIELD_18_LIMIT) != wanted;
    });
}
GUEST_EXPORT(0x006f337c, keep_items_with_field_18);
GUEST_FUZZ(0x006f337c, 100, [](guest::Fuzz &f) { f.arguments(fuzz_set(f), f.below(16)); });

// Keeps the items with one wear class table index.
bool keep_items_with_wear_class_index(ItemBitSet &set, u32 wanted) {
    return filter_set(set, [wanted](gptr<ItemData> entry) {
        return below_limit_or_zero(entry->wear_class_index, WearClassEntry::TABLE_SIZE) != wanted;
    });
}
GUEST_EXPORT(0x006f3564, keep_items_with_wear_class_index);
GUEST_FUZZ(0x006f3564, 100, [](guest::Fuzz &f) { f.arguments(fuzz_set(f), f.below(WearClassEntry::TABLE_SIZE + 2)); });

// Keeps the items with bit 4 of flags_1c set and bit 7 clear.
bool keep_items_with_flags_1c_bit4_only(ItemBitSet &set) {
    return filter_set(set, [](gptr<ItemData> entry) {
        return (entry->flags_1c & FLAGS_1C_BIT_4) == 0 || (entry->flags_1c & FLAGS_1C_BIT_7) != 0;
    });
}
GUEST_EXPORT(0x006f2728, keep_items_with_flags_1c_bit4_only);
GUEST_FUZZ(0x006f2728, 100, [](guest::Fuzz &f) { f.arguments(fuzz_set(f)); });

// Keeps the items for which ItemData::flag_1c_bit3 is false when `invert` is set, true otherwise.
bool keep_items_by_flag_1c_bit3(ItemBitSet &set, u32 invert) {
    return filter_set(set, [invert](gptr<ItemData> entry) {
        return invert != 0 ? entry->flag_1c_bit3() : !entry->flag_1c_bit3();
    });
}
GUEST_EXPORT(0x006f2504, keep_items_by_flag_1c_bit3);
GUEST_FUZZ(0x006f2504, 100, [](guest::Fuzz &f) { f.arguments(fuzz_set(f), f.below(2)); });

// Keeps the items whose high nibble of byte 0x15 equals `wanted` (a nibble of 7 or more counts as 0), and with
// `keep_also_4` those with nibble 4 too.
bool keep_items_with_field_15_high(ItemBitSet &set, u32 wanted, u32 keep_also_4) {
    return filter_set(set, [wanted, keep_also_4](gptr<ItemData> entry) {
        u32 nibble = entry->unknown_15 >> FIELD_15_SHIFT;
        u32 value = nibble < FIELD_15_LIMIT ? nibble : 0;
        return !(value == wanted || (keep_also_4 != 0 && nibble == FIELD_15_ALSO_KEPT));
    });
}
GUEST_EXPORT(0x00304d30, keep_items_with_field_15_high);
GUEST_FUZZ(0x00304d30, 150, [](guest::Fuzz &f) { f.arguments(fuzz_set(f), f.below(9), f.below(2)); });
