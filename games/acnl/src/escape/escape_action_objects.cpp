#include "guest/guest.hpp"
#include "hobj/house_object.hpp"

namespace {

using hobj::VirtualObject;

constexpr u32 CHILD_COUNT = 32;
constexpr u32 CLEARED_WORDS_A = 10;
constexpr u32 CLEARED_WORDS_B = 4;
constexpr u32 RELEASE_SLOT = 3;   // vtable offset 0xc
constexpr u32 FINISH_SLOT = 4;    // vtable offset 0x10

// An object owning up to 32 child objects (an escape action chain).
struct EscapeChildOwner {
    u8 unknown_00[0x14];
    u8 flag_14;
    u8 unknown_15[3];
    gptr<VirtualObject> children[CHILD_COUNT];
    gptr<VirtualObject> last;
    u32 words_9c[CLEARED_WORDS_A];
    u32 words_c4[CLEARED_WORDS_B];
};
GUEST_OFFSET(EscapeChildOwner, flag_14, 0x14);
GUEST_OFFSET(EscapeChildOwner, children, 0x18);
GUEST_OFFSET(EscapeChildOwner, last, 0x98);
GUEST_OFFSET(EscapeChildOwner, words_9c, 0x9c);
GUEST_OFFSET(EscapeChildOwner, words_c4, 0xc4);
GUEST_SIZE(EscapeChildOwner, 0xd4);

}  // namespace

// Clears the owner: releases every child through its virtual 3, finishes the last object (virtual 4) and zeroes
// the state words.
static void release_children(EscapeChildOwner &self) {
    for (u32 i = 0; i < CLEARED_WORDS_A; i++) {
        self.words_9c[i] = 0;
    }
    for (u32 i = 0; i < CHILD_COUNT; i++) {
        gptr<VirtualObject> child = self.children[i];
        if (child) {
            guest::call_address<void>(child->vtable[RELEASE_SLOT], child);
            self.children[i] = nullptr;
        }
    }
    gptr<VirtualObject> last = self.last;
    guest::call_address<void>(last->vtable[FINISH_SLOT], last);
    self.flag_14 = 0;
    for (u32 i = 0; i < CLEARED_WORDS_B; i++) {
        self.words_c4[i] = 0;
    }
}
GUEST_EXPORT(0x402fdff0, release_children);

static gptr<VirtualObject> fuzz_virtual_object(guest::Fuzz &f, gptr<u32> vtable) {
    auto object = f.object<VirtualObject>();
    object->vtable = vtable;
    return object;
}

GUEST_FUZZ(0x402fdff0, 200, [](guest::Fuzz &f) {
    auto vtable = f.allocate(0x14).cast<u32>();
    for (u32 i = 0; i < 5; i++) {
        vtable[i] = 0x402fcbc4;  // a harmless rewritten function reading two bytes of its argument
    }
    auto owner = f.object<EscapeChildOwner>();
    for (u32 i = 0; i < CHILD_COUNT; i++) {
        owner->children[i] = f.below(2) ? fuzz_virtual_object(f, vtable) : gptr<VirtualObject>();
    }
    owner->last = fuzz_virtual_object(f, vtable);
    f.arguments(owner);
});
