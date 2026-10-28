// A set of five flags packed in a byte (bit i of the byte is flag i), read by code around 0x00100608 and
// 0x00109c14. What the flags mean is not known yet.
#include "guest/guest.hpp"

namespace {

struct BitFlags5 {
    static constexpr u32 COUNT = 5;

    u8 bits[(COUNT + 7) / 8];

    // Whether flag `index` is set; indices of COUNT and above read as clear.
    bool test(u32 index) const;
};
GUEST_SIZE(BitFlags5, 1);

bool BitFlags5::test(u32 index) const {
    if (index >= COUNT) {
        return false;
    }
    return ((bits[index / 8] >> (index % 8)) & 1) != 0;
}

}  // namespace

GUEST_EXPORT(0x002f737c, BitFlags5::test);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

GUEST_FUZZ(0x002f737c, 300, [](guest::Fuzz &f) {
    auto flags = f.object<BitFlags5>();
    f.arguments(flags, f.pick<u32>({0, 1, 2, 3, 4, 5, 7, 8, 0xffffffff, f.below(5), f.number()}));
});
