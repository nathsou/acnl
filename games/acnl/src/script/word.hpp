// script::WordPtr and relatives: small descriptors of a text buffer (a vtable, the buffer and its capacity) used by
// the script/message code. script::WordFix<N> builds one around a buffer of N.
#pragma once

#include "guest/guest.hpp"

namespace script {

struct WordPtr {
    static constexpr u32 VTABLE = 0x0090a538;

    u32 vtable;
    guest::gptr<void> buffer;
    u32 capacity;  // the N of WordFix<N>
};
GUEST_OFFSET(WordPtr, buffer, 4);
GUEST_OFFSET(WordPtr, capacity, 8);
GUEST_SIZE(WordPtr, 12);

// A WordPtr of fixed capacity with its own vtable.
struct WordPtrSv : WordPtr {
    static constexpr u32 VTABLE = 0x0090aadc;
    static constexpr u32 CAPACITY = 11;
};
GUEST_SIZE(WordPtrSv, 12);

WordPtr &construct_word_ptr(WordPtr &self, guest::gptr<void> buffer, u32 capacity);
WordPtrSv &construct_word_ptr_sv(WordPtrSv &self, guest::gptr<void> buffer);

}  // namespace script
