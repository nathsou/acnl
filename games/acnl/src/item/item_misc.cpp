#include "guest/guest.hpp"

#include "arm.hpp"
#include "core/random.hpp"
#include "item/item.hpp"

namespace {

// Unknown function; returns a small number that decides what the caller does.
inline constexpr guest::Function<0x00305f2c, u32()> query_305f2c;

// Unknown function called by 0x002fc288 with the caller's own arguments.
inline constexpr guest::Function<0x0024a5ec, void(u32 a, u32 b, u32 c, u32 d)> unknown_24a5ec;

// A second random generator, besides random_generator.
inline guest::global<Random, 0x00952bdc> second_random_generator;

struct UnknownStateAaef18 {
    u8 unknown_000[0x234];
    u32 unknown_234;  // zero or not
};
GUEST_OFFSET(UnknownStateAaef18, unknown_234, 0x234);
inline guest::global<UnknownStateAaef18, 0x00aaef18> state_aaef18;

inline guest::global<u8, 0x00953f68> byte_953f68;

constexpr u32 QUERY_SPECIAL_VALUE = 3;
constexpr u32 RESULT_SPECIAL = 10;
constexpr u32 RESULT_NOT_SET = 11;

// Eight item slots, one for each of the categories 0x5d-0x64.
struct CategorySlots {
    static constexpr u32 FIRST_CATEGORY = 0x5d;
    static constexpr u32 COUNT = 8;

    Item slots[COUNT];

    void store(const Item &item);
};
GUEST_SIZE(CategorySlots, 0x20);

}  // namespace

// Constructs an empty item.
static Item &construct_empty_item(Item &self) {
    self.id = Item::EMPTY;
    self.flags = 0;
    return self;
}
GUEST_EXPORT(0x002fc20c, construct_empty_item);

// Reads a value from global state depending on the result of an unknown query.
static u32 read_state_value() {
    if (query_305f2c() == QUERY_SPECIAL_VALUE) {
        return RESULT_SPECIAL;
    }
    if (state_aaef18->unknown_234 == 0) {
        return RESULT_NOT_SET;
    }
    return *byte_953f68;
}
GUEST_EXPORT(0x002fc224, read_state_value);

// A random integer in [0, max) from the second generator (truncated product with a float in [0, 1)).
static s32 second_random_below(s32 max) {
    float r = second_random_generator->next_float();
    return arm::to_s32(r * float(max));
}
GUEST_EXPORT(0x002fc25c, second_random_below);

// Calls an unknown function with the same arguments, and returns the first one.
static u32 call_24a5ec_returning_first(u32 a, u32 b, u32 c, u32 d) {
    unknown_24a5ec(a, b, c, d);
    return a;
}
GUEST_EXPORT(0x002fc288, call_24a5ec_returning_first);

// Stores a non-empty item in the slot of its category; other categories are ignored.
void CategorySlots::store(const Item &item) {
    if (item.is_empty()) {
        return;
    }
    static constexpr u8 SLOT_OF_CATEGORY[COUNT] = {4, 6, 5, 1, 3, 2, 0, 7};
    u32 index = u32(item.category()) - FIRST_CATEGORY;
    if (index >= COUNT) {
        return;
    }
    copy_item(slots[SLOT_OF_CATEGORY[index]], item);
}
GUEST_EXPORT(0x002fc814, CategorySlots::store);
