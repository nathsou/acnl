#include "core/bit_set.hpp"

#include "arm.hpp"

void BitSet32::set(u32 index) {
    if (limit <= index) {
        return;
    }
    u32 mask = arm::lsl(1, index);  // indices of 32 and more give no bit
    if ((bits & mask) != 0) {
        return;
    }
    bits |= mask;
    count += 1;
}
GUEST_EXPORT(0x00116e31, BitSet32::set);

GUEST_FUZZ(0x00116e31, 400, [](guest::Fuzz &f) {
    auto set = f.object<BitSet32>();
    if (f.below(4) != 0) {
        set->limit = f.below(40);
    }
    if (f.below(4) == 0) {
        set->bits = 0xffffffff;
    }
    f.arguments(set, f.pick<u32>({0, 1, 31, 32, 33, 0xff, 0x100, 0xffffffff, f.below(40), f.below(40), f.number()}));
});
