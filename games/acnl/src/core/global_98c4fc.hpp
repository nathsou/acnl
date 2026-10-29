// The global at 0x0098c4fc: a word at 4 that is zero until the menu code has something to work with (when it is not
// zero, it is a pointer to an object).
#pragma once

#include "guest/guest.hpp"

struct Global98c4fc {
    u32 unknown_00;
    u32 value_04;
};
GUEST_OFFSET(Global98c4fc, value_04, 4);

inline guest::global<Global98c4fc, 0x0098c4fc> global_98c4fc;
