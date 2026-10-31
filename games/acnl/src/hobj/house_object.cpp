#include "hobj/house_object.hpp"

namespace hobj {

u32 HouseObject::forward_to_child() {
    if (!child) {
        return 0;
    }
    u32 target = child->vtable[VirtualObject::FORWARDED_SLOT];
    return guest::call_address<u32>(target, child);
}

}  // namespace hobj

GUEST_EXPORT(0x007483b4, hobj::HouseObject::forward_to_child);
GUEST_EXPORT(0x007484a4, hobj::HouseObject::forward_to_child);
GUEST_EXPORT(0x007484c0, hobj::HouseObject::forward_to_child);
