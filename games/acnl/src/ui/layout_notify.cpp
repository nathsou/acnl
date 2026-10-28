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

constexpr u32 HARMLESS_FUNCTION = 0x00303660;  // EncryptedInt::get: only reads 8 bytes at r0

// Fuzz scaffolding: fake vtables whose every slot is HARMLESS_FUNCTION.
constexpr u32 FUZZ_VTABLE_ENTRIES = 0x20;
constexpr u32 FUZZ_VTABLE_BYTES = FUZZ_VTABLE_ENTRIES * sizeof(u32);

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

GUEST_FUZZ(0x00568630, 200, [](guest::Fuzz &f) {
    auto owner = f.object<NotifierOwner>();
    auto list = f.object<ObjectList>();
    auto vtable = f.allocate(FUZZ_VTABLE_BYTES).cast<u32>();
    for (u32 i = 0; i < FUZZ_VTABLE_ENTRIES; i++) {
        vtable[i] = HARMLESS_FUNCTION;
    }
    u32 count = f.below(4);
    gptr<ObjectNode> end(guest::addr_of(list->first).addr());
    list->first = end;
    gptr<ObjectNode> previous;
    for (u32 i = 0; i < count; i++) {
        auto node = f.object<ObjectNode>();
        auto object = f.object<PolymorphicObject>();
        object->vtable = vtable;
        node->object = object;
        node->next = end;
        if (previous) {
            previous->next = node;
        } else {
            list->first = node;
        }
        previous = node;
    }
    f.arguments(f.number(), owner, list, f.number());
});

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

namespace {

// The fake child is shaped like an EncryptedInt (word 0: its vtable, bytes 4-7: value part and checksum) so that
// EncryptedInt::get, used as its virtual 0x2c, reads it harmlessly and returns 0 (bad checksum).
constexpr u32 FUZZ_CHILD_SIZE = 8;
constexpr u32 FUZZ_CHILD_VTABLE_ENTRIES = 0x10;
constexpr u32 FUZZ_CHILD_VTABLE_BYTES = FUZZ_CHILD_VTABLE_ENTRIES * sizeof(u32);
constexpr u32 FUZZ_CHILD_CHECKSUM_OFFSET = 7;

gptr<TypeSearchOwner> some_type_search_owner(guest::Fuzz &f) {
    auto owner = f.object<TypeSearchOwner>();
    auto child = f.allocate(FUZZ_CHILD_SIZE).cast<u32>();
    auto vtable = f.allocate(FUZZ_CHILD_VTABLE_BYTES).cast<u32>();
    for (u32 i = 0; i < FUZZ_CHILD_VTABLE_ENTRIES; i++) {
        vtable[i] = HARMLESS_FUNCTION;
    }
    child[0] = vtable.addr();
    child[1] = 0;
    gptr<u8> bytes = child.cast<u8>();
    bytes[FUZZ_CHILD_CHECKSUM_OFFSET] = u8(EncryptedInt::checksum_of(child[0]) + 1);
    owner->child = child.cast<PolymorphicObject>();
    return owner;
}

}  // namespace

GUEST_FUZZ(0x00568a24, 200, [](guest::Fuzz &f) { f.arguments(some_type_search_owner(f), f.number()); });
GUEST_FUZZ(0x00568a80, 200, [](guest::Fuzz &f) { f.arguments(some_type_search_owner(f), f.number()); });
