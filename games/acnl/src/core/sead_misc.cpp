#include "core/list_node.hpp"
#include "guest/guest.hpp"

using guest::gptr;

namespace {

// A global the game reads through a getter.
inline guest::global<u32, 0x00975c20> global_value_975c20;

// A list head: the first node is at offset 4.
struct ListHead {
    u32 unknown_00;
    gptr<ListNode> first;
    u32 unknown_08;
};
GUEST_SIZE(ListHead, 12);

struct FileHandle {
    u32 vtable;
    u32 fields[12];
};
GUEST_SIZE(FileHandle, 0x34);

constexpr u32 FILE_HANDLE_VTABLE = 0x00903e0c;
constexpr u32 LIST_NODE_VTABLE = 0x009062c8;

}  // namespace

// Reads the value of a global (f_001323bc takes no arguments).
u32 read_global_975c20() {
    return *global_value_975c20;
}
GUEST_EXPORT(0x001323bc, read_global_975c20);
GUEST_FUZZ(0x001323bc, 200, [](guest::Fuzz &f) { f.arguments(); });

// The constructor of sead::FileHandle: all fields cleared.
FileHandle &construct_file_handle(FileHandle &self) {
    for (u32 &field : self.fields) {
        field = 0;
    }
    self.vtable = FILE_HANDLE_VTABLE;
    return self;
}
GUEST_EXPORT(0x001323cc, construct_file_handle);
GUEST_FUZZ(0x001323cc, 200, [](guest::Fuzz &f) { f.arguments(f.object<FileHandle>()); });

// Unlinks every node of a list and empties the list.
void clear_list(ListHead &list) {
    gptr<ListNode> node = list.first;
    while (node) {
        gptr<ListNode> next = node->next;
        node->next = nullptr;
        node->prev = nullptr;
        node = next;
    }
    list.first = nullptr;
    list.unknown_08 = 0;
}
GUEST_EXPORT(0x00132478, clear_list);
GUEST_FUZZ(0x00132478, 300, [](guest::Fuzz &f) {
    auto list = f.object<ListHead>();
    u32 count = f.below(5);
    gptr<ListNode> previous;
    list->first = nullptr;
    for (u32 i = 0; i < count; i++) {
        auto node = f.object<ListNode>();
        node->next = nullptr;
        if (previous) {
            previous->next = node;
        } else {
            list->first = node;
        }
        previous = node;
    }
    f.arguments(list);
});

// The constructor of ssys::st::ListNode.
ListNode &construct_list_node(ListNode &self) {
    self.prev = nullptr;
    self.vtable = gptr<u32>(LIST_NODE_VTABLE);
    self.next = nullptr;
    return self;
}
GUEST_EXPORT(0x001324a8, construct_list_node);
GUEST_FUZZ(0x001324a8, 200, [](guest::Fuzz &f) { f.arguments(f.object<ListNode>()); });
