// script::WordFix<19u>: a word descriptor (vtable, buffer, capacity) with a slot and a buffer of 19 characters,
// plus the forwarding helper that calls into the object a word refers to.
#include "guest/guest.hpp"
#include "hobj/house_object.hpp"
#include "script/script_word.hpp"

using guest::gptr;

namespace {

constexpr u32 WORD_FIX_19_VTABLE = 0x00908fd4;
constexpr u32 TEXT_CAPACITY = 19;
constexpr u32 FORWARDED_SLOT = 19;  // vtable offset 0x4c

struct WordFix19 {
    gptr<const u32> vtable;
    gptr<void> buffer;
    u32 capacity;
    ScriptWord word;
    u16 text[TEXT_CAPACITY];
    u8 flag_3e;
    u8 unknown_3f;
    u32 unknown_40;
};
GUEST_OFFSET(WordFix19, buffer, 4);
GUEST_OFFSET(WordFix19, capacity, 8);
GUEST_OFFSET(WordFix19, word, 0xc);
GUEST_OFFSET(WordFix19, text, 0x18);
GUEST_OFFSET(WordFix19, flag_3e, 0x3e);
GUEST_OFFSET(WordFix19, unknown_40, 0x40);
GUEST_SIZE(WordFix19, 0x44);

// An object that refers to another object at 4.
struct WordReference {
    u32 unknown_00;
    gptr<hobj::VirtualObject> target;
};
GUEST_OFFSET(WordReference, target, 4);

inline constexpr guest::Function<0x002f825c, void(gptr<void> buffer, u32 size)> clear_buffer;

}  // namespace

// Constructor: an empty word of capacity 19 over its own buffer.
WordFix19 &construct_word_fix_19(WordFix19 &self) {
    self.buffer = guest::addr_of(self.text).cast<void>();
    self.capacity = TEXT_CAPACITY;
    self.word.kind = ScriptWord::KIND_DEFAULT;
    self.word.value_4 = ScriptWord::UNSET;
    self.word.value_8 = ScriptWord::UNSET;
    clear_buffer(guest::addr_of(self.text).cast<void>(), sizeof(self.text));
    for (u32 i = 0; i < TEXT_CAPACITY; i++) {
        self.text[i] = 0;
    }
    self.flag_3e = 0;
    self.vtable = gptr<const u32>(WORD_FIX_19_VTABLE);
    self.unknown_40 = 0;
    return self;
}
GUEST_EXPORT(0x00312bd0, construct_word_fix_19);

// Forwards to virtual 19 of the referenced object (a tail call: two arguments pass through).
u32 forward_to_target_virtual_19(WordReference &self, u32 a, u32 b) {
    return guest::call_address<u32>(self.target->vtable[FORWARDED_SLOT], self.target, a, b);
}
GUEST_EXPORT(0x00312ca0, forward_to_target_virtual_19);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

GUEST_FUZZ(0x00312bd0, 200, [](guest::Fuzz &f) { f.arguments(f.object<WordFix19>()); });
GUEST_FUZZ(0x00312ca0, 200, [](guest::Fuzz &f) {
    auto reference = f.object<WordReference>();
    auto target = f.object<hobj::VirtualObject>();
    auto vtable = f.object<u32[32]>();
    (*vtable)[FORWARDED_SLOT] = 0x002f77e8;  // same_pointer: harmless
    target->vtable = vtable.cast<u32>();
    reference->target = target;
    f.arguments(reference, f.below(3), f.below(3));
});
