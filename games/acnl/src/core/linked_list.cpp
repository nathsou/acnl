// An intrusive doubly linked list: nodes are {next, prev}, and the list keeps a count of its nodes.
#include "guest/guest.hpp"

using guest::gptr;

namespace {

struct ListNode {
    gptr<ListNode> next;
    gptr<ListNode> prev;
};
GUEST_SIZE(ListNode, 8);

struct LinkedList {
    u32 count;
};
GUEST_OFFSET(LinkedList, count, 0);

// Links node in before position and counts it. Returns node.
gptr<ListNode> linked_list_insert_before(LinkedList &list, ListNode &position, ListNode &node) {
    gptr<ListNode> previous = position.prev;
    gptr<ListNode> self = guest::addr_of(node);
    node.next = guest::addr_of(position);
    node.prev = previous;
    position.prev = self;
    previous->next = self;
    list.count += 1;
    return self;
}

}  // namespace

GUEST_EXPORT(0x0013e7d8, linked_list_insert_before);

GUEST_FUZZ(0x0013e7d8, 300, [](guest::Fuzz &f) {
    auto list = f.object<LinkedList>();
    auto position = f.object<ListNode>();
    auto node = f.object<ListNode>();
    if (f.below(4) == 0) {
        position->prev = position;  // a list holding just position
    } else {
        position->prev = f.object<ListNode>();
    }
    f.arguments(list, position, node);
});
