// Small helpers on items: resetting a flags halfword.
#include "item/item.hpp"

namespace {

// An object with a halfword at 2: top two bits are flags, the rest is a value (meaning not known yet).
struct FlagsHalfwordHolder {
    u8 unknown_00[2];
    u16 flags;

    static constexpr u16 KEEP_MASK = 0xc000;
    static constexpr u16 CLEARED_VALUE = 0x200;
};
GUEST_OFFSET(FlagsHalfwordHolder, flags, 2);

}  // namespace

// Keeps the two flag bits of the halfword and sets the value to 0x200.
static void clear_item_flags_set_0x200(FlagsHalfwordHolder &self) {
    self.flags = (self.flags & FlagsHalfwordHolder::KEEP_MASK) | FlagsHalfwordHolder::CLEARED_VALUE;
}
GUEST_EXPORT(0x003031ec, clear_item_flags_set_0x200);


// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

GUEST_FUZZ(0x003031ec, 200, [](guest::Fuzz &f) { f.arguments(f.object<FlagsHalfwordHolder>()); });
