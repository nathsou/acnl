#include "guest/guest.hpp"

// script::WordNumDigit as far as known: just the vtable pointer.
struct WordNumDigit {
    gptr<void> vtable;
};
GUEST_SIZE(WordNumDigit, 4);

constexpr u32 WORD_NUM_DIGIT_VTABLE = 0x00909c78;

// Sets the object's vtable pointer (script::WordNumDigit::virtual_0).
WordNumDigit &set_word_num_digit_vtable(WordNumDigit &self) {
    self.vtable = gptr<void>(WORD_NUM_DIGIT_VTABLE);
    return self;
}
GUEST_EXPORT(0x00312cb0, set_word_num_digit_vtable);
