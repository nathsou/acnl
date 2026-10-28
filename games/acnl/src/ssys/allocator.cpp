// ssys::ma::Allocator, the base allocator interface of the game's ssys layer.
#include "guest/guest.hpp"

namespace ssys::ma {

struct Allocator {
    static constexpr u32 VTABLE = 0x00906288;

    u32 vtable;
    u32 unknown_04;
};
GUEST_OFFSET(Allocator, vtable, 0);
GUEST_OFFSET(Allocator, unknown_04, 4);
GUEST_SIZE(Allocator, 8);

// The constructor: sets the vtable and clears the second word.
Allocator &construct_Allocator(Allocator &self) {
    self.vtable = Allocator::VTABLE;
    self.unknown_04 = 0;
    return self;
}

}  // namespace ssys::ma

GUEST_EXPORT(0x00120840, ssys::ma::construct_Allocator);

GUEST_FUZZ(0x00120840, 200, [](guest::Fuzz &f) { f.arguments(f.object<ssys::ma::Allocator>()); });
