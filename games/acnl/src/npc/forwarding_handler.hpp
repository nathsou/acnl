// An object whose field at 4 is a target object; the handler's virtual-looking thunks (npc/forwarding_handler.cpp)
// call the target's virtual functions with the same arguments.
#pragma once

#include "hobj/house_object.hpp"

struct ForwardingHandler {
    u32 unknown_00;
    guest::gptr<hobj::VirtualObject> target;
};
GUEST_OFFSET(ForwardingHandler, target, 4);
