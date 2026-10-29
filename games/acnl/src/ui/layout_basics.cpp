#include "core/list_node.hpp"
#include "guest/guest.hpp"

using guest::gptr;

namespace {

constexpr u32 ANIMATION_VTABLE = 0x00906210;
constexpr u32 LIST_VTABLE = 0x009062b8;
// The two float constants the original loads from its literal pool (read from the code itself).
constexpr u32 ANIMATION_CONSTANT_A_ADDRESS = 0x00125b2c;
constexpr u32 ANIMATION_CONSTANT_B_ADDRESS = 0x00125b30;

constexpr u32 NODE_VTABLE_BEFORE_TAIL = 2;     // (node, tail): zero when the node goes at the end
constexpr u32 NODE_VTABLE_FIND_SUCCESSOR = 3;  // (node, head): the node to insert before, or null

}  // namespace

// The start of a layout animation (the object is at least 0x28 bytes).
struct AnimationHeader {
    gptr<void> vtable;
    u32 value_04;
    u32 value_08;
    u32 value_0c;
    u32 value_10;
    u8 unknown_14;
    u8 unknown_15[3];
    u32 unknown_18;
    u8 unknown_1c;
    u8 unknown_1d;
    u16 unknown_1e;
    u32 unknown_20;
    u8 unknown_24;
};
GUEST_OFFSET(AnimationHeader, value_0c, 0x0c);
GUEST_OFFSET(AnimationHeader, unknown_14, 0x14);
GUEST_OFFSET(AnimationHeader, unknown_18, 0x18);
GUEST_OFFSET(AnimationHeader, unknown_1c, 0x1c);
GUEST_OFFSET(AnimationHeader, unknown_1e, 0x1e);
GUEST_OFFSET(AnimationHeader, unknown_20, 0x20);
GUEST_OFFSET(AnimationHeader, unknown_24, 0x24);

// Constructor of the layout animation.
AnimationHeader &construct_layout_animation(AnimationHeader &self) {
    u32 constant_a = *gptr<u32>(ANIMATION_CONSTANT_A_ADDRESS);
    u32 constant_b = *gptr<u32>(ANIMATION_CONSTANT_B_ADDRESS);
    self.value_04 = constant_a;
    self.value_08 = constant_a;
    self.value_0c = constant_a;
    self.value_10 = constant_b;
    self.unknown_14 = 0;
    self.unknown_18 = 0;
    self.vtable = gptr<void>(ANIMATION_VTABLE);
    self.unknown_1c = 0;
    self.unknown_1e = 0;
    self.unknown_20 = 0;
    self.unknown_24 = 0;
    return self;
}
GUEST_EXPORT(0x00125aec, construct_layout_animation);
GUEST_FUZZ(0x00125aec, 200, [](guest::Fuzz &f) { f.arguments(f.object<AnimationHeader>()); });

struct LayoutList {
    gptr<void> vtable;
    gptr<ListNode> head;
    gptr<ListNode> tail;

    bool insert(gptr<ListNode> node);

private:
    void start_with(gptr<ListNode> node);
    void append(gptr<ListNode> node);
    void add_at_end(gptr<ListNode> node);
};
GUEST_OFFSET(LayoutList, head, 4);
GUEST_OFFSET(LayoutList, tail, 8);
GUEST_SIZE(LayoutList, 12);

LayoutList &construct_layout_list(LayoutList &self) {
    self.head = nullptr;
    self.vtable = gptr<void>(LIST_VTABLE);
    self.tail = nullptr;
    return self;
}
GUEST_EXPORT(0x00125e08, construct_layout_list);
GUEST_FUZZ(0x00125e08, 200, [](guest::Fuzz &f) { f.arguments(f.object<LayoutList>()); });

static bool is_linked(const ListNode &node) {
    return node.next || node.prev;
}

void LayoutList::start_with(gptr<ListNode> node) {
    head = node;
    tail = node;
    node->prev = nullptr;
    head->next = nullptr;
}

void LayoutList::append(gptr<ListNode> node) {
    tail->next = node;
    node->prev = tail;
    tail = node;
    node->next = nullptr;
}

// Adds an unlinked node after the last one (or as the only one).
void LayoutList::add_at_end(gptr<ListNode> node) {
    if (is_linked(*node)) {
        return;
    }
    if (head) {
        append(node);
    } else {
        start_with(node);
    }
}

// Links a node into the list, at the place its virtual functions pick (before the node returned by virtual 3,
// else at the end). A node that is already linked stays where it is. Always returns true.
bool LayoutList::insert(gptr<ListNode> node) {
    if (!head) {
        add_at_end(node);
        return true;
    }
    u32 before_tail = guest::call_address<u32>(node->vtable[NODE_VTABLE_BEFORE_TAIL], node, tail);
    if (before_tail == 0) {
        add_at_end(node);
        return true;
    }
    gptr<ListNode> successor =
        guest::call_address<gptr<ListNode>>(node->vtable[NODE_VTABLE_FIND_SUCCESSOR], node, head);
    if (!successor) {
        add_at_end(node);
        return true;
    }
    gptr<ListNode> first = head;
    if (!first) {
        head = successor;
        tail = successor;
        successor->prev = nullptr;
        head->next = nullptr;
    } else if (first == successor) {
        if (!is_linked(*node)) {
            first->prev = node;
            node->next = head;
            head = node;
            node->prev = nullptr;
        }
    } else {
        gptr<ListNode> before = successor->prev;
        node->next = successor;
        node->prev = before;
        successor->prev = node;
        if (node->prev) {
            node->prev->next = node;
        }
    }
    return true;
}
GUEST_EXPORT(0x00125ca8, LayoutList::insert);
// Only empty lists: the node's virtual functions are not called, so no vtable is needed.
GUEST_FUZZ(0x00125ca8, 300, [](guest::Fuzz &f) {
    auto list = f.object<LayoutList>();
    auto node = f.object<ListNode>();
    auto other = f.object<ListNode>();
    node->vtable = nullptr;
    list->head = nullptr;
    if (f.below(2) != 0) {
        list->tail = nullptr;
    } else {
        list->tail = other;
    }
    switch (f.below(4)) {
    case 0:
        node->prev = other;
        node->next = nullptr;
        break;
    case 1:
        node->prev = nullptr;
        node->next = other;
        break;
    default:
        node->prev = nullptr;
        node->next = nullptr;
        break;
    }
    f.arguments(list, node);
});

// A binding between an owner object and a handle made by recompiled code (what they are is not known yet).
struct ObjectBinding {
    gptr<void> owner;
    gptr<void> handle;
    u32 unknown_08;
    u8 owns_handle;

    bool bind(u32 unknown_1, gptr<void> new_owner, u32 unknown_3);
};
GUEST_OFFSET(ObjectBinding, handle, 4);
GUEST_OFFSET(ObjectBinding, unknown_08, 8);
GUEST_OFFSET(ObjectBinding, owns_handle, 0xc);

namespace {

// The block passed to the handle creator (layout partly unknown).
struct BindRequest {
    gptr<void> vtable;
    u32 unknown_04;
    u32 unknown_08;
    u32 unknown_0c;
    gptr<void> owner;
    u32 unknown_14;
    u32 unknown_18;
    u8 flag_1c;
    u8 flag_1d;
    u8 unknown_1e[2];
    u32 result_20;  // set by the creator
    u32 unknown_24;
    u8 unknown_28;
};
GUEST_OFFSET(BindRequest, owner, 0x10);
GUEST_OFFSET(BindRequest, result_20, 0x20);

constexpr u32 REQUEST_VTABLE = 0x009047f8;
constexpr u32 OWNER_VTABLE_RELEASE = 7;
constexpr u32 SINGLE_USE = 1;

inline guest::global<gptr<void>, 0x009752e0> handle_creator;  // the object that creates handles
inline guest::global<gptr<void>, 0x00975338> service;         // the object the helpers act on

inline constexpr guest::Function<0x0012bc4c, gptr<void>(gptr<void> creator, BindRequest &request)> create_handle;
inline constexpr guest::Function<0x0012c95c, void(gptr<void> handle, u32 value)> adopt_handle;
inline constexpr guest::Function<0x0012c40c, u32(gptr<void> service, u32 value)> service_call;
inline constexpr guest::Function<0x002ffb5c, void(gptr<void> creator, gptr<void> handle)> release_handle;

}  // namespace

// Creates the handle on first use and records the owner; with a null/failed creation returns false. When called
// with an existing handle, returns true. A request that yields nothing to adopt tears the binding down again.
bool ObjectBinding::bind(u32 unknown_1, gptr<void> new_owner, u32 unknown_3) {
    if (handle) {
        return true;
    }
    if (owner) {
        return false;
    }
    guest::StackObject<BindRequest> request;
    request->vtable = gptr<void>(REQUEST_VTABLE);
    request->unknown_04 = unknown_1;
    request->unknown_08 = 0;
    request->unknown_0c = 0;
    request->owner = new_owner;
    request->unknown_14 = unknown_3;
    request->unknown_18 = 0;
    request->flag_1c = 1;
    request->flag_1d = 1;
    request->result_20 = 0;
    request->unknown_24 = 0;
    request->unknown_28 = 0;

    handle = create_handle(*handle_creator, *request);
    if (!handle) {
        return false;
    }
    owner = new_owner;
    u32 value = request->result_20;
    if (value != 0) {
        unknown_08 = value;
        adopt_handle(handle, value);
        owns_handle = 1;
        return true;
    }
    if (owns_handle != 0) {
        if (new_owner) {
            u32 previous = service_call(*service, new_owner.addr());
            release_handle(*handle_creator, handle);
            if (previous != SINGLE_USE) {
                service_call(*service, previous);
            }
        }
    } else if (new_owner && unknown_08 != 0) {
        gptr<u32> owner_vtable = *new_owner.cast<gptr<u32>>();
        guest::call_address<void>(owner_vtable[OWNER_VTABLE_RELEASE], new_owner, handle);
    }
    owner = nullptr;
    handle = nullptr;
    unknown_08 = 0;
    owns_handle = 0;
    return false;
}
GUEST_EXPORT(0x00125b3c, ObjectBinding::bind);
// Only the paths that do not call into other game code are fuzzed.
GUEST_FUZZ(0x00125b3c, 200, [](guest::Fuzz &f) {
    auto binding = f.object<ObjectBinding>();
    if (f.below(2) != 0) {
        binding->handle = gptr<void>(f.below(1000) + 1);
    } else {
        binding->handle = nullptr;
        binding->owner = gptr<void>(f.below(1000) + 1);
    }
    f.arguments(binding, f.number(), gptr<void>(nullptr), 0u);
});

// A signed byte of global state (meaning not known yet).
inline guest::global<s8, 0x0094e43f> value_94e43f;

s8 global_value_94e43f() {
    return *value_94e43f;
}
GUEST_EXPORT(0x00125e28, global_value_94e43f);
GUEST_FUZZ(0x00125e28, 200, [](guest::Fuzz &f) { f.arguments(); });
