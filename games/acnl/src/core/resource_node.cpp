#include "guest/guest.hpp"

using guest::gptr;

namespace {

// A small cleared-on-construction field: a word and a flag byte.
struct ClearableSlot {
    u32 value;
    u8 flag;

    void clear();
    // Takes the word and resets the flag; a self-copy does nothing. The other slot comes as a guest pointer
    // because the self-copy check compares guest addresses.
    void copy_from(gptr<const ClearableSlot> other);
};
GUEST_OFFSET(ClearableSlot, value, 0);
GUEST_OFFSET(ClearableSlot, flag, 4);

constexpr u32 RESOURCE_NODE_VTABLE = 0x00908068;
constexpr u32 SLOT_OFFSET = 0x0c;
constexpr u32 MEMBER_OFFSET = 0x14;  // the member the other functions construct/destroy

inline constexpr guest::Function<0x001324a8, gptr<void>(gptr<void> self)> construct_list_node;
inline constexpr guest::Function<0x0012ca78, gptr<void>(gptr<void> self)> construct_node_member;
inline constexpr guest::Function<0x00200b64, gptr<void>(gptr<void> self)> destroy_node_member;
inline constexpr guest::Function<0x002ffb64, u32(gptr<void> self)> destroy_list_node;

}  // namespace

void ClearableSlot::clear() {
    value = 0;
    flag = 0;
}
GUEST_EXPORT(0x005b1a1c, ClearableSlot::clear);

void ClearableSlot::copy_from(gptr<const ClearableSlot> other) {
    if (guest::addr_of(this).addr() == other.addr()) {
        return;
    }
    value = other->value;
    flag = 0;
}
GUEST_EXPORT(0x005b1a2c, ClearableSlot::copy_from);

// mutil::BaseResourceMgr<FgDataLoader, 18>::ResourceNode constructor
gptr<void> construct_resource_node(gptr<void> self) {
    gptr<void> node = construct_list_node(self);
    *node.cast<u32>() = RESOURCE_NODE_VTABLE;
    (node + SLOT_OFFSET).cast<ClearableSlot>()->clear();
    gptr<void> member = construct_node_member(node + MEMBER_OFFSET);
    return member - MEMBER_OFFSET;
}
GUEST_EXPORT(0x005b1a48, construct_resource_node);

// ResourceNode::virtual_1: destroys the member, then the list node part
u32 resource_node_virtual_1(gptr<void> self) {
    *self.cast<u32>() = RESOURCE_NODE_VTABLE;
    gptr<void> member = destroy_node_member(self + MEMBER_OFFSET);
    return destroy_list_node(member - 8 - SLOT_OFFSET);
}
GUEST_EXPORT(0x005b1a70, resource_node_virtual_1);

// ResourceNode::virtual_0: destroys the member only
gptr<void> resource_node_virtual_0(gptr<void> self) {
    *self.cast<u32>() = RESOURCE_NODE_VTABLE;
    gptr<void> member = destroy_node_member(self + MEMBER_OFFSET);
    return member - 8 - SLOT_OFFSET;
}
GUEST_EXPORT(0x005b1a98, resource_node_virtual_0);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

static gptr<void> zeroed_node(guest::Fuzz &f) {
    gptr<void> p = f.allocate(0x40);
    memset(p.get(), 0, 0x40);
    return p;
}

GUEST_FUZZ(0x005b1a1c, 200, [](guest::Fuzz &f) { f.arguments(f.object<ClearableSlot>()); });
GUEST_FUZZ(0x005b1a2c, 200, [](guest::Fuzz &f) {
    auto a = f.object<ClearableSlot>();
    auto b = f.below(4) ? f.object<ClearableSlot>() : a;
    f.arguments(a, b);
});
GUEST_FUZZ(0x005b1a48, 200, [](guest::Fuzz &f) { f.arguments(zeroed_node(f)); });
GUEST_FUZZ(0x005b1a70, 200, [](guest::Fuzz &f) { f.arguments(zeroed_node(f)); });
GUEST_FUZZ(0x005b1a98, 200, [](guest::Fuzz &f) { f.arguments(zeroed_node(f)); });
