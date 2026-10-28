// Base layout shared by the hobj house objects (MyHouseMax, Tent, MyHouse): a pointer to a child object at 0x10.
#pragma once

#include "guest/guest.hpp"

namespace hobj {

// Any object with a vtable.
struct VirtualObject {
    static constexpr u32 FORWARDED_SLOT = 15;  // vtable offset 0x3c

    guest::gptr<u32> vtable;
};
GUEST_OFFSET(VirtualObject, vtable, 0);

struct HouseObject {
    u8 unknown_00[0x10];
    guest::gptr<VirtualObject> child;  // may be null

    // virtual 16: forwards to the child's virtual 15 (the result is whatever it leaves in r0), or 0 without a child.
    u32 forward_to_child();
};
GUEST_OFFSET(HouseObject, child, 0x10);

}  // namespace hobj
