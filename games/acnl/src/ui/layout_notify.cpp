// Helpers of layout objects: notifying the objects of a list, and searching an object's type chain.
#include "core/encrypted_int.hpp"
#include "guest/guest.hpp"

using guest::gptr;

namespace {

constexpr u32 NOTIFY_SLOT = 0x3c;  // vtable byte offset

struct PolymorphicObject {
    gptr<u32> vtable;
};

struct ObjectNode {
    gptr<ObjectNode> next;
    gptr<ObjectNode> prev;
    gptr<PolymorphicObject> object;
};

struct ObjectList {
    u8 unknown_00[0x10];
    gptr<ObjectNode> first;  // the address of this field marks the end of the list
};
GUEST_OFFSET(ObjectList, first, 0x10);

struct NotifierOwner {
    u8 unknown_00[0x18];
    u32 first_argument;
    u8 unknown_1c_flag;
    u8 unknown_1d[3];
};
GUEST_OFFSET(NotifierOwner, first_argument, 0x18);
GUEST_OFFSET(NotifierOwner, unknown_1c_flag, 0x1c);

}  // namespace

// Marks the owner and calls virtual slot 0x3c of every object in the list.
void notify_objects_of_list(u32 /*unused*/, NotifierOwner &owner, ObjectList &list, u32 argument) {
    owner.unknown_1c_flag = 1;
    gptr<ObjectNode> end(guest::addr_of(list.first).addr());
    for (gptr<ObjectNode> node = list.first; node != end; node = node->next) {
        gptr<PolymorphicObject> object = node->object;
        guest::call_address<void>(object->vtable[NOTIFY_SLOT / 4], object, owner.first_argument, argument, 0u);
    }
}
GUEST_EXPORT(0x00568630, notify_objects_of_list);

namespace {

// An object with a child whose type chain is searched.
struct TypeSearchOwner {
    u8 unknown_00[0x20];
    gptr<PolymorphicObject> child;
};
GUEST_OFFSET(TypeSearchOwner, child, 0x20);

constexpr u32 FIND_SLOT = 0x2c;
constexpr u32 TYPE_SLOT = 8;

// Asks the child for an object (virtual 0x2c, with key and 1); returns it when its type chain reaches target.
gptr<PolymorphicObject> find_of_type(TypeSearchOwner &owner, u32 key, u32 target) {
    gptr<PolymorphicObject> child = owner.child;
    gptr<PolymorphicObject> found =
        guest::call_address<gptr<PolymorphicObject>>(child->vtable[FIND_SLOT / 4], child, key, 1u);
    if (!found) {
        return found;
    }
    u32 type = guest::call_address<u32>(found->vtable[TYPE_SLOT / 4], found);
    while (type != target) {
        type = *gptr<u32>(type);
        if (type == 0) {
            return nullptr;
        }
    }
    return found;
}

constexpr u32 TYPE_A = 0x00975148;
constexpr u32 TYPE_B = 0x0097514c;

}  // namespace

gptr<PolymorphicObject> find_of_type_a(TypeSearchOwner &owner, u32 key) {
    return find_of_type(owner, key, TYPE_A);
}
GUEST_EXPORT(0x00568a24, find_of_type_a);

gptr<PolymorphicObject> find_of_type_b(TypeSearchOwner &owner, u32 key) {
    return find_of_type(owner, key, TYPE_B);
}
GUEST_EXPORT(0x00568a80, find_of_type_b);

