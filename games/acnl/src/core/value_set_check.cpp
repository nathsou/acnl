// A membership test on a small set of values (what the values mean is not known yet).
#include "guest/guest.hpp"

namespace {

constexpr u32 MEMBERS[] = {4, 6, 8, 0x19};

}  // namespace

// Whether value is one of 4, 6, 8 or 25.
bool is_value_4_6_8_or_25(u32 value) {
    for (u32 member : MEMBERS) {
        if (value == member) {
            return true;
        }
    }
    return false;
}
GUEST_EXPORT(0x002fcd1c, is_value_4_6_8_or_25);

GUEST_FUZZ(0x002fcd1c, 200, [](guest::Fuzz &f) {
    f.arguments(f.pick<u32>({0, 4, 5, 6, 7, 8, 0x19, 0x18, 0xffffffff, f.below(32), f.number()}));
});
