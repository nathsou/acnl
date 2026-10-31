// Flags in a word at 0x44 (the bit number is used like an ARM register shift), a check of an item, a 12-byte copy.
#include "arm.hpp"
#include "item/item.hpp"

namespace {

struct WordFlagsAt44 {
    u8 unknown_00[0x44];
    u32 flags;

    void set_flag(u32 bit);
    void clear_flag(u32 bit);
};
GUEST_OFFSET(WordFlagsAt44, flags, 0x44);

struct Words3 {
    u32 first;
    u32 second;
    u32 third;
};

constexpr u8 CATEGORY_A = 0x47, CATEGORY_B = 0x48;  // meaning not known yet
constexpr u16 SPECIAL_NUMBER = 0x9d;

}  // namespace

// (A bit number of 32 or more sets nothing, as with the CPU's shift by register.)
void WordFlagsAt44::set_flag(u32 bit) {
    flags = flags | arm::lsl(1, bit);
}
GUEST_EXPORT(0x0030e7e4, WordFlagsAt44::set_flag);

void WordFlagsAt44::clear_flag(u32 bit) {
    flags = flags & ~arm::lsl(1, bit);
}
GUEST_EXPORT(0x0030e7f8, WordFlagsAt44::clear_flag);

// Items of two categories, and the item with number 0x9d.
static bool is_special_item(const Item &item) {
    gptr<ItemData> data = item.data();
    if (data && data->category < Item::NO_CATEGORY && data->category == CATEGORY_A) {
        return true;
    }
    data = item.data();
    if (data && data->category < Item::NO_CATEGORY && data->category == CATEGORY_B) {
        return true;
    }
    return item.number() == SPECIAL_NUMBER;
}
GUEST_EXPORT(0x0030f594, is_special_item);

static void copy_3_words(Words3 &destination, const Words3 &source) {
    Words3 value = source;
    destination = value;
}
GUEST_EXPORT(0x005f4b8c, copy_3_words);
