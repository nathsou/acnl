// Turning an item into its alternate form, and listing which items of a category are in a set.
#include "core/fuzz_helpers.hpp"
#include "item/item_bit_set.hpp"

u16 item_number_in_category(u32 category, u32 position);
bool convert_item_category(Item &item, u32 from, u32 to);

namespace {

// Category pairs: items of the first become the item at the same position of the second.
struct CategoryPair {
    u8 from;
    u8 to;
};
constexpr CategoryPair CATEGORY_PAIRS[] = {{0x2f, 0x31}, {0x06, 0x93}, {0x07, 0x94}, {0x54, 0x56}, {0x55, 0x57}};

// Single item numbers that turn into the next one (the flag in the id stays).
struct NumberPair {
    u16 from;
    u16 to;
};
constexpr NumberPair NUMBER_PAIRS[] = {{0x3057, 0x3058}, {0x305a, 0x305b}, {0x3064, 0x3065}, {0x3067, 0x3068}};

constexpr u32 CLEARED_CATEGORIES_ADDRESS = 0x0088e52c;  // four category numbers
constexpr u32 CLEARED_CATEGORY_COUNT = 4;
constexpr u32 MAX_POSITIONS = 0x6ed;  // categories with more items are refused
constexpr u32 NO_POSITION = 0xffffffff;
constexpr u32 WORD_SHIFT = 5;
constexpr u32 BIT_MASK = 31;

struct CategoryPositions {
    u8 category;  // Item::NO_CATEGORY when the list is not valid
    u8 unknown_01[3];
    u32 positions[MAX_POSITIONS];  // positions within the category, then NO_POSITION
};
GUEST_OFFSET(CategoryPositions, positions, 4);

}  // namespace

// Turns the item into the form of the next category pair (see CATEGORY_PAIRS), or if it is one of the numbers of
// NUMBER_PAIRS into the next number; false for other items.
bool convert_to_alternate_form(Item &item) {
    gptr<ItemData> data = item.data();
    u32 category = !data ? Item::NO_CATEGORY : (data->category < Item::NO_CATEGORY ? data->category : 0);
    for (const CategoryPair &pair : CATEGORY_PAIRS) {
        if (category == pair.from) {
            if (convert_item_category(item, pair.from, pair.to)) {
                return true;
            }
            break;
        }
    }
    for (const NumberPair &pair : NUMBER_PAIRS) {
        if (item.number() == pair.from) {
            item.id = u16((item.id & Item::ID_FLAG) | pair.to);
            return true;
        }
    }
    return false;
}
GUEST_EXPORT(0x006ba4c8, convert_to_alternate_form);
GUEST_FUZZ(0x006ba4c8, 300, [](guest::Fuzz &f) {
    if (f.below(3) == 0) {
        auto item = f.object<Item>();
        item->id = u16(NUMBER_PAIRS[f.below(4)].from | (f.below(2) ? Item::ID_FLAG : 0));
        f.arguments(item);
    } else {
        f.arguments(fuzz::item_in_category(f, CATEGORY_PAIRS[f.below(5)].from));
    }
});

// Clears the bits of every item of four categories (the numbers in a table of the game) from the set.
void clear_items_of_listed_categories(ItemBitSet &set) {
    gptr<const u8> categories(CLEARED_CATEGORIES_ADDRESS);
    for (u32 index = 0; index < CLEARED_CATEGORY_COUNT; index++) {
        gptr<CategoryInfo> info = category_info(categories[index]);
        for (u32 number = info->first_item_number; number <= info->last_item_number; number++) {
            guest::StackObject<Item> item;
            construct_item(*item, u16(number));
            set.clear_bit_of(*item);
        }
    }
}
GUEST_EXPORT(0x006ef6e0, clear_items_of_listed_categories);
GUEST_FUZZ(0x006ef6e0, 50, [](guest::Fuzz &f) {
    auto set = f.object<ItemBitSet>();
    f.arguments(set);
});

// Lists the positions within the category of the items that are in the set (words of the set are looked up by
// item index); false, with an invalid list, for categories of more than MAX_POSITIONS items.
bool list_items_in_set(CategoryPositions &out, const ItemBitSet &set, u32 category) {
    for (u32 &position : out.positions) {
        position = NO_POSITION;
    }
    out.category = Item::NO_CATEGORY;
    u32 count = category_info(category)->item_count;
    if (count > MAX_POSITIONS) {
        return false;
    }
    u32 listed = 0;
    for (u32 position = 0; position < count; position++) {
        guest::StackObject<Item> item;
        construct_item(*item, item_number_in_category(category, position));
        s32 index = item->index();
        bool in_set = index >= 0 && u32(index >> WORD_SHIFT) < ItemBitSet::WORDS &&
                      ((set.words[index >> WORD_SHIFT] >> (index & BIT_MASK)) & 1) != 0;
        if (in_set) {
            out.positions[listed++] = position;
        }
    }
    out.category = u8(category);
    return true;
}
GUEST_EXPORT(0x006ef7a4, list_items_in_set);
GUEST_FUZZ(0x006ef7a4, 100, [](guest::Fuzz &f) {
    auto set = f.object<ItemBitSet>();
    for (u32 word = 0; word < ItemBitSet::WORDS; word++) {
        set->words[word] = f.below(3) == 0 ? 0 : u32(f.number());
    }
    f.arguments(f.object<CategoryPositions>(), set, f.pick<u32>({0x54, 0x55, 0x2f, 0x06, 0x33, f.below(Item::NO_CATEGORY)}));
});
