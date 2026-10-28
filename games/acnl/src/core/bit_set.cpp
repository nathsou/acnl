#include "core/bit_set.hpp"

#include "arm.hpp"

void BitSet32::clear(u32 index) {
    if (index >= limit) {
        return;
    }
    u32 mask = arm::lsl(1, index);  // indices of 32 and more give no bit
    if ((bits & mask) == 0) {
        return;
    }
    bits &= ~mask;
    count -= 1;
}
GUEST_EXPORT(0x00116e4f, BitSet32::clear);

gptr<BitSet32> BitSet32::assign(const BitSet32 &other) {
    if (&other != this) {
        limit = other.limit;
        bits = other.bits;
        count = other.count;
    }
    return guest::addr_of(this);
}
GUEST_EXPORT(0x00116e93, BitSet32::assign);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

static gptr<BitSet32> some_bit_set(guest::Fuzz &f) {
    auto set = f.object<BitSet32>();
    if (f.below(4) != 0) {
        set->limit = f.below(40);
    }
    if (f.below(4) == 0) {
        set->bits = 0xffffffff;
    }
    return set;
}

GUEST_FUZZ(0x00116e4f, 400, [](guest::Fuzz &f) {
    auto set = some_bit_set(f);
    f.arguments(set, f.pick<u32>({0, 1, 31, 32, 33, 0xff, 0x100, 0xffffffff, f.below(40), f.below(40), f.number()}));
});
GUEST_FUZZ(0x00116e93, 200, [](guest::Fuzz &f) {
    auto a = some_bit_set(f);
    auto b = some_bit_set(f);
    f.arguments(a, f.below(4) == 0 ? a : b);
});
