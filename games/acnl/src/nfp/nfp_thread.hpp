// nfp::Thread (the NFP / amiibo thread object). Only the fields the rewritten code touches are named.
#pragma once

#include "guest/guest.hpp"
#include "hobj/house_object.hpp"

namespace nfp {

struct Thread {
    static constexpr u32 OWN_VIRTUAL_12 = 12;  // vtable offset 0x30: returns a value
    static constexpr u32 OWN_VIRTUAL_11 = 11;  // vtable offset 0x2c: takes that value plus 2
    static constexpr u32 VALUE_ADJUST = 2;

    guest::gptr<u32> vtable;
    u8 unknown_04[0x8c];
    guest::gptr<hobj::VirtualObject> object_90;  // may be null

    // virtual 16: if there is an object, calls its virtual 0, hands this thread's virtual 12 result (plus 2) to its
    // virtual 11, and forgets the object.
    void virtual_16();
};
GUEST_OFFSET(Thread, object_90, 0x90);

}  // namespace nfp
