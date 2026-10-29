// Destructors and constructors of objects that hold arrays of sub-objects: each runs the array helper with the
// element's own destructor (or constructor) and gives the object back.
#include "guest/guest.hpp"

namespace {

inline constexpr guest::Function<0x002f76ad, u32(gptr<void> array, u32 destructor, u32 element_size, u32 count)>
    destroy_array_elements;
inline constexpr guest::Function<0x00301d0d, gptr<void>(gptr<void> base, u32 function, u32 stride, u32 count)>
    for_each_element;

constexpr u32 DESTRUCTOR_NOTHING = 0x002f777c;
constexpr u32 DESTRUCTOR_NOTHING_2 = 0x003084cc;
constexpr u32 CONSTRUCTOR_PARTICLE_HANDLE = 0x003166a8;

constexpr u32 WORD_SIZE = 4;
constexpr u32 WORD_COUNT = 0x100;
constexpr u32 ENTRY_C_SIZE = 0xc;
constexpr u32 ENTRY_C_COUNT = 8;
constexpr u32 FOOT_MARK_VTABLE = 0x008f8b60;
constexpr u32 FOOT_MARK_HANDLES = 0x10;
constexpr u32 PARTICLE_HANDLE_SIZE = 0x18;

// Objects are made generously large for fuzzing; only the real calls reach the destructors of the game.
constexpr u32 FUZZ_SIZE = 0x2000;

struct VtableOnly {
    u32 vtable;
};

struct FootMark {
    u32 vtable;
    u8 handles[FOOT_MARK_HANDLES * PARTICLE_HANDLE_SIZE];
    u8 unknown_184[0x184 - 4 - FOOT_MARK_HANDLES * PARTICLE_HANDLE_SIZE];
    u32 value_184;
    u32 value_188;
    u8 flag_18c;
};
GUEST_OFFSET(FootMark, handles, 4);
GUEST_OFFSET(FootMark, value_184, 0x184);
GUEST_OFFSET(FootMark, flag_18c, 0x18c);

}  // namespace

// Destroys 256 four-byte elements (which have nothing to destroy).
gptr<void> destroy_array_owner_100_words(gptr<void> self) {
    destroy_array_elements(self, DESTRUCTOR_NOTHING, WORD_SIZE, WORD_COUNT);
    return self;
}
GUEST_EXPORT(0x00138b98, destroy_array_owner_100_words);
GUEST_FUZZ(0x00138b98, 50, [](guest::Fuzz &f) { f.arguments(f.allocate(FUZZ_SIZE)); });

gptr<void> destroy_array_owner_c(gptr<void> self) {
    destroy_array_elements(self, DESTRUCTOR_NOTHING_2, ENTRY_C_SIZE, ENTRY_C_COUNT);
    return self;
}
GUEST_EXPORT(0x006aa8a0, destroy_array_owner_c);
GUEST_FUZZ(0x006aa8a0, 50, [](guest::Fuzz &f) { f.arguments(f.allocate(FUZZ_SIZE)); });

FootMark &construct_foot_mark(FootMark &self) {
    self.vtable = FOOT_MARK_VTABLE;
    for_each_element(guest::addr_of(self.handles[0]).cast<void>(), CONSTRUCTOR_PARTICLE_HANDLE, PARTICLE_HANDLE_SIZE,
                     FOOT_MARK_HANDLES);
    self.value_184 = 0;
    self.value_188 = FOOT_MARK_HANDLES;
    self.flag_18c = 0;
    return self;
}
GUEST_EXPORT(0x006a88e0, construct_foot_mark);
GUEST_FUZZ(0x006a88e0, 50, [](guest::Fuzz &f) { f.arguments(f.object<FootMark>()); });
