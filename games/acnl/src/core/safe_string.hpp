// sead::SafeStringBase<char>: a vtable and a pointer to the text.
#pragma once

#include "guest/guest.hpp"

struct SafeString {
    static constexpr u32 VTABLE = 0x009047f8;

    guest::gptr<const u32> vtable;
    guest::gptr<const char> text;
};
GUEST_OFFSET(SafeString, text, 4);
GUEST_SIZE(SafeString, 8);

SafeString &construct_safe_string(SafeString &self, guest::gptr<const char> text);
