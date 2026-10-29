// Layout objects keep an intrusive circular list of child objects (each with a vtable).
#pragma once

#include "hobj/house_object.hpp"

// Node of the circular list: next, previous, payload. The list object embeds the sentinel node.
struct ChildNode {
    guest::gptr<ChildNode> next;
    guest::gptr<ChildNode> prev;
    guest::gptr<hobj::VirtualObject> object;
};
GUEST_SIZE(ChildNode, 12);

struct ChildList {
    u8 unknown_00[0x10];
    ChildNode sentinel;  // the list ends where `next` leads back to the sentinel itself
    u8 unknown_1c[4];
};
GUEST_OFFSET(ChildList, sentinel, 0x10);
GUEST_SIZE(ChildList, 0x20);

// The start of layout objects (the classes continue differently).
struct LayoutObject {
    guest::gptr<void> vtable;
    u8 unknown_04[0x14];
    u32 first_value;  // given to every notified object
    u8 notified;      // cleared by notify_list_objects
    u8 unknown_1d[3];
};
GUEST_OFFSET(LayoutObject, first_value, 0x18);
GUEST_OFFSET(LayoutObject, notified, 0x1c);
GUEST_SIZE(LayoutObject, 0x20);

// Clears the notified byte of `self`, then calls the notify virtual of every object in the list with the object's
// first value and `argument`. (The first argument, an owner object, is not used.)
void notify_list_objects(guest::gptr<void> owner, LayoutObject &self, ChildList &list, u32 argument);
