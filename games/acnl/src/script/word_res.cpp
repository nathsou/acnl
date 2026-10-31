// script::WordRes, a small polymorphic object of the script code (the base of WordFix, WordPtrSv...).
#include "guest/guest.hpp"

namespace {

constexpr u32 WORD_RES_VTABLE = 0x0090a570;

struct WordRes {
    u32 vtable;
    u32 unknown_04;
    u32 unknown_08;
};
GUEST_OFFSET(WordRes, unknown_04, 0x04);
GUEST_OFFSET(WordRes, unknown_08, 0x08);

// The constructor: both fields cleared.
WordRes &construct_word_res(WordRes &self) {
    self.unknown_04 = 0;
    self.unknown_08 = 0;
    self.vtable = WORD_RES_VTABLE;
    return self;
}

}  // namespace

GUEST_EXPORT(0x005fcfd8, construct_word_res);
