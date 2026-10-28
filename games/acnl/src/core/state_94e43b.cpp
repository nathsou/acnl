// Two flag bytes in global state at 0x0094e43b, used by f_0011edd8. What they mean is not known yet.
#include "guest/guest.hpp"

namespace {

struct UnknownFlags94e43b {
    s8 enabled;   // read as a signed byte
    u8 unknown_01[3];
    u8 latched;   // set once while enabled
};
GUEST_OFFSET(UnknownFlags94e43b, enabled, 0);
GUEST_OFFSET(UnknownFlags94e43b, latched, 4);

inline guest::global<UnknownFlags94e43b, 0x0094e43b> flags_94e43b;

}  // namespace

// The first flag byte, sign-extended.
s8 flags_94e43b_enabled() {
    return flags_94e43b->enabled;
}
GUEST_EXPORT(0x00120854, flags_94e43b_enabled);

// Sets the second flag when the first is set and the second is not yet.
void flags_94e43b_latch() {
    if (flags_94e43b->enabled == 0) {
        return;
    }
    if (flags_94e43b->latched != 0) {
        return;
    }
    flags_94e43b->latched = 1;
}
GUEST_EXPORT(0x00120864, flags_94e43b_latch);

GUEST_FUZZ(0x00120854, 200, [](guest::Fuzz &f) { f.arguments(); });
GUEST_FUZZ(0x00120864, 200, [](guest::Fuzz &f) { f.arguments(); });
