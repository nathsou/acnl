// Building blocks for GUEST_FUZZ generators.
#pragma once

#include "guest/guest.hpp"

namespace fuzz {

constexpr u32 ENCRYPTED_INT_GET = 0x00303660;  // EncryptedInt::get: reads two words of its object, writes nothing

// A vtable whose first `slots` entries all point at EncryptedInt::get (a harmless read-only function that returns a
// value computed from the object's first two words).
inline guest::gptr<u32> harmless_vtable(guest::Fuzz &f, u32 slots = 8) {
    auto vtable = f.allocate(slots * 4).cast<u32>();
    for (u32 i = 0; i < slots; i++) {
        vtable[i] = ENCRYPTED_INT_GET;
    }
    return vtable;
}

}  // namespace fuzz
