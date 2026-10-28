#include "guest/guest.hpp"

namespace {

// Node of the intrusive list used by layout objects: next, previous, payload.
struct ListNode {
    guest::gptr<ListNode> next;
    guest::gptr<ListNode> prev;
    guest::gptr<void> object;
};

constexpr u32 LIST_FIRST_OFFSET = 0x10;  // the head pointer; the node's own address marks the end
constexpr u32 VTABLE_SLOT_40 = 0x40;
constexpr u32 VTABLE_SLOT_2C = 0x2c;

u32 virtual_target(guest::gptr<void> object, u32 offset) {
    u32 vtable = *object.cast<u32>();
    return *guest::gptr<u32>(vtable + offset);
}

}  // namespace

using guest::gptr;

// Calls virtual function 0x40 of every object in the list, with a value taken from `self` and `arg`.
// Also clears the byte at self+0x1c first.
void notify_list_objects(u32 /*unused*/, gptr<u8> self, gptr<u8> list, u32 arg) {
    self[0x1c] = 0;
    gptr<ListNode> end(list.addr() + LIST_FIRST_OFFSET);
    gptr<ListNode> node = *gptr<gptr<ListNode>>(list.addr() + LIST_FIRST_OFFSET);
    while (node != end) {
        gptr<void> object = node->object;
        u32 first = *gptr<u32>(self.addr() + 0x18);
        guest::call_address<void>(virtual_target(object, VTABLE_SLOT_40), object, first, arg);
        node = node->next;
    }
}
GUEST_EXPORT(0x00568984, notify_list_objects);

GUEST_FUZZ(0x00568984, 200, [](guest::Fuzz &f) {
    auto self = f.object<u8[0x30]>();
    auto list = f.allocate(0x20);
    *gptr<u32>(list.addr() + LIST_FIRST_OFFSET) = list.addr() + LIST_FIRST_OFFSET;
    f.arguments(f.number(), self, list, f.number());
});

// Forwards to virtual function 0x2c of the object stored at this+0x20, with r2 = 1.
u32 forward_to_child_slot_2c(gptr<u8> self, u32 r1) {
    gptr<void> child = *gptr<gptr<void>>(self.addr() + 0x20);
    return guest::call_address<u32>(virtual_target(child, VTABLE_SLOT_2C), child, r1, 1u);
}
GUEST_EXPORT(0x0056878c, forward_to_child_slot_2c);

// A read-only guest function (EncryptedInt::get, reads 8 bytes of its `this`) used as a safe virtual target.
constexpr u32 SAFE_VIRTUAL_TARGET = 0x00303660;

GUEST_FUZZ(0x0056878c, 200, [](guest::Fuzz &f) {
    auto self = f.object<u8[0x30]>();
    auto child = f.object<u8[0x10]>();
    auto vtable = f.object<u8[0x40]>();
    *gptr<u32>(vtable.addr() + VTABLE_SLOT_2C) = SAFE_VIRTUAL_TARGET;
    *gptr<u32>(child.addr()) = vtable.addr();
    *gptr<u32>(self.addr() + 0x20) = child.addr();
    f.arguments(self, f.pick<u32>({0, 1, 0xffffffff, f.number()}));
});
