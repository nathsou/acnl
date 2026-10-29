// Small predicates of the 0x002fcfc8 area.
#include "guest/guest.hpp"

namespace {

// Kinds the first predicate accepts (what they stand for is not known yet).
constexpr u32 ACCEPTED_KINDS[] = {0xb, 0xc, 0xd, 0xe, 0x10, 0x1b, 0x1c};

constexpr u32 SMALL_LIMIT = 8;

struct BitsObject {
    u8 unknown_00[0x18];
    u8 bits_18;
};
GUEST_OFFSET(BitsObject, bits_18, 0x18);

}  // namespace

bool is_accepted_kind(u32 kind) {
    for (u32 accepted : ACCEPTED_KINDS) {
        if (kind == accepted) {
            return true;
        }
    }
    return false;
}
GUEST_EXPORT(0x002fcfc8, is_accepted_kind);
GUEST_FUZZ(0x002fcfc8, 200, [](guest::Fuzz &f) {
    f.arguments(f.pick<u32>({0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x1a, 0x1b, 0x1c, 0x1d, f.number()}));
});

bool is_below_8(u32 value) {
    return value < SMALL_LIMIT;
}
GUEST_EXPORT(0x002fdf00, is_below_8);
GUEST_FUZZ(0x002fdf00, 100, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({0, 7, 8, 9, 0xffffffffu})); });

// Whether any of the mask's bits (low byte) is set in the byte at 0x18.
bool has_bits_18(BitsObject &object, u32 mask) {
    return (object.bits_18 & mask) != 0;
}
GUEST_EXPORT(0x002fd638, has_bits_18);
GUEST_FUZZ(0x002fd638, 100, [](guest::Fuzz &f) { f.arguments(f.object<BitsObject>(), f.pick<u32>({1, 2, 4, 0x100, f.number()})); });
