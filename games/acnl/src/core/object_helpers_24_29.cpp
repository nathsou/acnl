// Small functions of the 0x0020..0x002a area on objects whose type is not known yet: a global copy, a global read,
// a header initialiser, and calls forwarded to a child object or to every object of a list.
#include "core/fuzz_helpers.hpp"
#include "hobj/house_object.hpp"

using guest::gptr;
using hobj::VirtualObject;

namespace {

constexpr u8 HEADER_ID = 0x53;        // meaning not known yet
constexpr u8 HEADER_ID_MASK = 0x7f;   // the high bit of byte 0 is kept
constexpr u8 BYTE3_FLAG = 0x80;
constexpr u8 BYTE4_MASK = 0x03;
constexpr u8 BYTE4_VALUE = 0x02;
constexpr u32 CHILD_VIRTUAL_SLOT = 0x60 / 4;
constexpr u32 CHILD_FLOAT_SLOT = 0x70 / 4;
constexpr u32 NODE_SLOT_58 = 0x58 / 4;
constexpr u32 NODE_SLOT_0C = 0xc / 4;
constexpr u32 FUZZ_SLOTS = 0x70 / 4 + 1;

struct TwoWords {
    u32 first;
    u32 second;
};
inline guest::global<TwoWords, 0x009853b0> words_9853b0;
inline guest::global<u32, 0x00957308> word_957308;

// An object that starts with a header of five bytes.
struct HeaderObject {
    u8 byte_00;
    u8 unknown_01[2];
    u8 byte_03;
    u8 byte_04;
};
GUEST_OFFSET(HeaderObject, byte_03, 3);
GUEST_OFFSET(HeaderObject, byte_04, 4);

struct ByteObject {
    u8 unknown_00[0x20];
    u8 flag_20;
};
GUEST_OFFSET(ByteObject, flag_20, 0x20);

struct ChildHolder {
    u8 unknown_00[0xb4];
    gptr<VirtualObject> child;
};
GUEST_OFFSET(ChildHolder, child, 0xb4);

struct VirtualListNode {
    gptr<u32> vtable;
    u32 unknown_04;
    gptr<VirtualListNode> next;
};
GUEST_OFFSET(VirtualListNode, next, 8);

struct ListOwner {
    u32 unknown_00;
    gptr<VirtualListNode> first;
};
GUEST_OFFSET(ListOwner, first, 4);

gptr<ChildHolder> fuzz_child_holder(guest::Fuzz &f) {
    auto holder = f.object<ChildHolder>();
    auto child = f.object<VirtualObject>();
    child->vtable = fuzz::harmless_vtable(f, FUZZ_SLOTS);
    holder->child = f.below(4) != 0 ? child : gptr<VirtualObject>(0u);
    return holder;
}

gptr<ListOwner> fuzz_list(guest::Fuzz &f) {
    auto owner = f.object<ListOwner>();
    owner->first = nullptr;
    gptr<VirtualListNode> next = nullptr;
    for (u32 i = f.below(4); i > 0; i--) {
        auto node = f.object<VirtualListNode>();
        node->vtable = fuzz::harmless_vtable(f, FUZZ_SLOTS);
        node->next = next;
        next = node;
    }
    owner->first = next;
    return owner;
}

// Calls the same virtual function of every node of the list, following each node's link after the call.
void call_each_node(ListOwner &owner, u32 slot) {
    gptr<VirtualListNode> node = owner.first;
    while (node) {
        guest::call_address<void>(node->vtable[slot], node);
        node = node->next;
    }
}

}  // namespace

void copy_first_word_to_second() {
    words_9853b0->second = words_9853b0->first;
}
GUEST_EXPORT(0x0024f4e8, copy_first_word_to_second);
GUEST_FUZZ(0x0024f4e8, 50, [](guest::Fuzz &f) { f.arguments(); });

u32 read_word_957308() {
    return *word_957308;
}
GUEST_EXPORT(0x0020714c, read_word_957308);
GUEST_FUZZ(0x0020714c, 20, [](guest::Fuzz &f) { f.arguments(); });

void clear_flag_20(ByteObject &object) {
    object.flag_20 = 0;
}
GUEST_EXPORT(0x00207b10, clear_flag_20);
GUEST_FUZZ(0x00207b10, 100, [](guest::Fuzz &f) { f.arguments(f.object<ByteObject>()); });

// Gives the header its identifier (keeping the high bit of byte 0), clears a flag and sets a two-bit value.
void init_header(HeaderObject &object) {
    object.byte_00 = u8((object.byte_00 & ~HEADER_ID_MASK) | HEADER_ID);
    object.byte_03 = u8(object.byte_03 & ~BYTE3_FLAG);
    object.byte_04 = u8((object.byte_04 & ~BYTE4_MASK) | BYTE4_VALUE);
}
GUEST_EXPORT(0x002069c8, init_header);
GUEST_FUZZ(0x002069c8, 100, [](guest::Fuzz &f) { f.arguments(f.object<HeaderObject>()); });

// Calls the child's virtual function; the result is whatever it returns, 0 without a child.
u32 call_child_virtual_60(ChildHolder &holder) {
    gptr<VirtualObject> child = holder.child;
    if (!child) {
        return 0;
    }
    return guest::call_address<u32>(child->vtable[CHILD_VIRTUAL_SLOT], child);
}
GUEST_EXPORT(0x0029b464, call_child_virtual_60);
GUEST_FUZZ(0x0029b464, 100, [](guest::Fuzz &f) { f.arguments(fuzz_child_holder(f)); });

// Calls the child's virtual function returning a float; 0 without a child.
float call_child_float_70(ChildHolder &holder) {
    gptr<VirtualObject> child = holder.child;
    if (!child) {
        return 0.0f;
    }
    return guest::call_address<float>(child->vtable[CHILD_FLOAT_SLOT], child);
}
GUEST_EXPORT(0x0029b6c8, call_child_float_70);
GUEST_FUZZ(0x0029b6c8, 100, [](guest::Fuzz &f) { f.arguments(fuzz_child_holder(f)); });

void call_virtual_58_of_each_node(ListOwner &owner) {
    call_each_node(owner, NODE_SLOT_58);
}
GUEST_EXPORT(0x0029b5c4, call_virtual_58_of_each_node);
GUEST_FUZZ(0x0029b5c4, 100, [](guest::Fuzz &f) { f.arguments(fuzz_list(f)); });

void call_virtual_3_of_each_node(ListOwner &owner) {
    call_each_node(owner, NODE_SLOT_0C);
}
GUEST_EXPORT(0x002f6adc, call_virtual_3_of_each_node);
GUEST_FUZZ(0x002f6adc, 100, [](guest::Fuzz &f) { f.arguments(fuzz_list(f)); });
