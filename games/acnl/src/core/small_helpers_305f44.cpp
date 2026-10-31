// Small helpers around 0x00305f44: a query on the main object, a 12-byte copy and a flag setter.
#include "guest/guest.hpp"

namespace {

inline constexpr guest::Function<0x0075dfe8, u32(u32 object)> query_main_object;

// the object query_main_object() is asked about (a guest pointer kept in a global)
inline guest::global<u32, 0x0095362c> main_object;

}  // namespace

// Asks query_main_object() about the object in the global at 0x0095362c.
u32 query_current_main_object() {
    return query_main_object(main_object);
}
GUEST_EXPORT(0x00305f44, query_current_main_object);

// Three 32-bit words (meaning not known yet).
struct WordTriple {
    u32 words[3];
};
GUEST_SIZE(WordTriple, 12);

// Copies three words, one after the other (the copy assignment).
WordTriple &copy_word_triple(WordTriple &self, const WordTriple &other) {
    for (u32 i = 0; i < 3; i++) {
        self.words[i] = other.words[i];
    }
    return self;
}
GUEST_EXPORT(0x00306084, copy_word_triple);

struct FlagBytes {
    u8 unknown_00;
    u8 flags;
};
GUEST_OFFSET(FlagBytes, flags, 1);

constexpr u8 FLAG_BIT_1 = 0x02;  // meaning not known yet

// Sets or clears bit 1 of the flags byte.
void set_flag_bit_1(FlagBytes &self, u32 enable) {
    if (enable != 0) {
        self.flags = self.flags | FLAG_BIT_1;
    } else {
        self.flags = self.flags & ~FLAG_BIT_1;
    }
}
GUEST_EXPORT(0x00306134, set_flag_bit_1);
