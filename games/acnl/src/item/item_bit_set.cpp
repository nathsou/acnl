// Small helpers on items: marking an item number in a bit set, resetting a flags halfword.
#include "item/item.hpp"

namespace {

constexpr u32 FIRST_ITEM_NUMBER = 0x2000;
constexpr u32 LAST_ITEM_NUMBER = 0x372a;

// An object with a halfword at 2: top two bits are flags, the rest is a value (meaning not known yet).
struct FlagsHalfwordHolder {
    u8 unknown_00[2];
    u16 flags;

    static constexpr u16 KEEP_MASK = 0xc000;
    static constexpr u16 CLEARED_VALUE = 0x200;
};
GUEST_OFFSET(FlagsHalfwordHolder, flags, 2);

}  // namespace

// Sets the bit of the item's number (counted from the first item) in a bit set of 32-bit words. Numbers above the
// last item are ignored; numbers below the first one wrap around, as in the original.
static void set_item_bit(gptr<u32> bits, const Item &item) {
    u32 number = item.number();
    if (number > LAST_ITEM_NUMBER) {
        return;
    }
    u32 index = number - FIRST_ITEM_NUMBER;
    gptr<u32> word = bits + (index >> 5);
    *word = *word | (1u << (index & 0x1f));
}
GUEST_EXPORT(0x00303094, set_item_bit);

// Keeps the two flag bits of the halfword and sets the value to 0x200.
static void clear_item_flags_set_0x200(FlagsHalfwordHolder &self) {
    self.flags = (self.flags & FlagsHalfwordHolder::KEEP_MASK) | FlagsHalfwordHolder::CLEARED_VALUE;
}
GUEST_EXPORT(0x003031ec, clear_item_flags_set_0x200);


// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

GUEST_FUZZ(0x00303094, 300, [](guest::Fuzz &f) {
    auto bits = f.allocate(200 * 4);
    f.bytes(bits, 200 * 4);
    auto item = f.object<Item>();
    item->id = u16(f.pick<u32>({0x2000, 0x372a, 0x372b, 0x3800, 0x7ffe, 0x2000 + f.below(0x1800)}) |
                   (f.below(2) ? 0x8000 : 0));
    item->flags = u16(f.number());
    f.arguments(bits, item);
});
GUEST_FUZZ(0x003031ec, 200, [](guest::Fuzz &f) { f.arguments(f.object<FlagsHalfwordHolder>()); });
