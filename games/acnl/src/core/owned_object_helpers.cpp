// Small helpers: releasing an owned polymorphic object, a flag reset, and the compiler runtime's array
// destructor loop.
#include "guest/guest.hpp"

namespace {

using guest::gptr;

// A polymorphic object; only its vtable is known.
struct PolymorphicObject {
    gptr<const u32> vtable;
};

constexpr u32 DESTRUCTOR_SLOT = 4;  // vtable offset 0x10

struct ObjectOwner {
    u32 unknown_00;
    gptr<PolymorphicObject> object;

    void release_object();
};
GUEST_OFFSET(ObjectOwner, object, 4);

struct FlaggedObject {
    u8 unknown_00[0x10];
    u8 flag_10;

    void reset();
};
GUEST_OFFSET(FlaggedObject, flag_10, 0x10);

inline constexpr guest::Function<0x001329a8, void(gptr<void> self)> prepare_flagged_object;

// Size of the bookkeeping before an array of objects (the pointer returned points past it).
constexpr u32 ARRAY_HEADER_SIZE = 8;

}  // namespace

// Calls the owned object's virtual function in slot 4 (its destructor) and forgets the object.
void ObjectOwner::release_object() {
    if (!object) {
        return;
    }
    guest::call_address<void>(object->vtable[DESTRUCTOR_SLOT], object);
    object = nullptr;
}
GUEST_EXPORT(0x002f747c, ObjectOwner::release_object);

// Runs the guest helper on the object, then clears the flag.
void FlaggedObject::reset() {
    prepare_flagged_object(guest::addr_of(this));
    flag_10 = 0;
}
GUEST_EXPORT(0x002f74b0, FlaggedObject::reset);

// Array destructor loop: calls destructor on each of count elements (size bytes each), last to first.
// Returns the start of the allocation (the array minus its header).
u32 destroy_array_elements(u32 array, u32 destructor, u32 element_size, u32 count) {
    if (count != 0) {
        u32 element = array + element_size * count;
        do {
            element -= element_size;
            guest::call_address<u32>(destructor, element);
        } while (element != array);
    }
    return array - ARRAY_HEADER_SIZE;
}
GUEST_EXPORT(0x002f76ad, destroy_array_elements);
