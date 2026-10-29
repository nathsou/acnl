// Small reads and edits of an item's id and flags halfwords, and a test on the type of the indexed item table.
#include "item/item.hpp"

namespace {

constexpr u32 FLAGS_BIT_15_SHIFT = 15;
constexpr u32 FLAGS_BIT_14_SHIFT = 14;
constexpr u16 FLAGS_BIT_14 = 0x4000;  // the lower of the two top flag bits
constexpr u16 LAST_INDEXED_NUMBER = 0xfd;  // item numbers above this have no entry in the indexed item table

// Types of the indexed item table that the test accepts (what they stand for is not known yet).
enum IndexedType : u32 {
    TYPE_4 = 4,
    TYPE_6 = 6,
    TYPE_8 = 8,
    TYPE_25 = 0x19,
};

inline constexpr guest::Function<0x002fccdc, u32(const Item &item)> indexed_item_type;

gptr<Item> fuzz_item(guest::Fuzz &f) {
    auto item = f.object<Item>();
    if (f.below(2) != 0) {
        item->id = u16(f.pick<u32>({0, 1, 0xfd, 0xfe, 0x80fd, 0x80fe, f.below(0x100), 0x7ffe}));
    }
    return item;
}

}  // namespace

u32 item_flags_bit_15(const Item &item) {
    return item.flags >> FLAGS_BIT_15_SHIFT;
}
GUEST_EXPORT(0x002fcb9c, item_flags_bit_15);
GUEST_FUZZ(0x002fcb9c, 100, [](guest::Fuzz &f) { f.arguments(fuzz_item(f)); });

u32 item_flags_bit_14(const Item &item) {
    return (item.flags >> FLAGS_BIT_14_SHIFT) & 1;
}
GUEST_EXPORT(0x002fd000, item_flags_bit_14);
GUEST_FUZZ(0x002fd000, 100, [](guest::Fuzz &f) { f.arguments(fuzz_item(f)); });

// Whether the item number (without ID_FLAG) has an entry in the indexed item table.
bool item_number_is_indexed(const Item &item) {
    return item.number() <= LAST_INDEXED_NUMBER;
}
GUEST_EXPORT(0x002fccc4, item_number_is_indexed);
GUEST_FUZZ(0x002fccc4, 100, [](guest::Fuzz &f) { f.arguments(fuzz_item(f)); });

// Replaces the item number, keeping ID_FLAG (bits above the number are dropped).
void set_item_number(Item &item, u32 number) {
    item.id = u16((item.id & Item::ID_FLAG) | (number & Item::NUMBER_MASK));
}
GUEST_EXPORT(0x002fd050, set_item_number);
GUEST_FUZZ(0x002fd050, 100, [](guest::Fuzz &f) { f.arguments(fuzz_item(f), f.number()); });

void set_item_flags_bit_14(Item &item) {
    item.flags = u16(item.flags | FLAGS_BIT_14);
}
GUEST_EXPORT(0x002fe3fc, set_item_flags_bit_14);
GUEST_FUZZ(0x002fe3fc, 100, [](guest::Fuzz &f) { f.arguments(fuzz_item(f)); });

// Whether the item's entry in the indexed table has one of a few types.
bool item_has_type_4_6_8_or_25(const Item &item) {
    u32 type = indexed_item_type(item);
    return type == TYPE_4 || type == TYPE_6 || type == TYPE_8 || type == TYPE_25;
}
GUEST_EXPORT(0x002fe7a0, item_has_type_4_6_8_or_25);
GUEST_FUZZ(0x002fe7a0, 200, [](guest::Fuzz &f) { f.arguments(fuzz_item(f)); });
