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

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

// Objects without a child: the child's class (and so what its virtual 15 does) is not known, so the forwarding path
// is left to the real checks.
static gptr<hobj::HouseObject> some_house_object(guest::Fuzz &f) {
    auto object = f.object<hobj::HouseObject>();
    object->child = nullptr;
    return object;
}

GUEST_FUZZ(0x007483b4, 200, [](guest::Fuzz &f) { f.arguments(some_house_object(f)); });
GUEST_FUZZ(0x007484a4, 200, [](guest::Fuzz &f) { f.arguments(some_house_object(f)); });
GUEST_FUZZ(0x007484c0, 200, [](guest::Fuzz &f) { f.arguments(some_house_object(f)); });
