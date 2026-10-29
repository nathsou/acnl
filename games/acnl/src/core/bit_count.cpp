// Counting the set bits of a fixed-size bit array.
#include "item/item.hpp"

namespace {

// A bit array of 186 words (what its bits mean is not known yet).
struct BitArray186 {
    static constexpr u32 WORDS = 186;
    u32 words[WORDS];
};
GUEST_SIZE(BitArray186, 186 * 4);

}  // namespace

// The number of set bits in the array.
u32 count_set_bits(const BitArray186 &array) {
    u32 count = 0;
    for (u32 i = 0; i < BitArray186::WORDS; i++) {
        for (u32 word = array.words[i]; word != 0; word >>= 1) {
            count += word & 1;
        }
    }
    return count;
}
GUEST_EXPORT(0x003030d4, count_set_bits);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

GUEST_FUZZ(0x003030d4, 200, [](guest::Fuzz &f) {
    auto array = f.object<BitArray186>();
    for (u32 i = 0; i < BitArray186::WORDS; i++) {
        switch (f.below(4)) {
        case 0: array->words[i] = 0; break;
        case 1: array->words[i] = 0xffffffff; break;
        default: break;
        }
    }
    f.arguments(array);
});

static u16 some_item_id(guest::Fuzz &f) {
    switch (f.below(3)) {
    case 0: return Item::EMPTY;
    default: return u16(Item::FIRST_ITEM + f.below(Item::ITEM_COUNT));
    }
}
