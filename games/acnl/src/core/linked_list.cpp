// An intrusive doubly linked list: nodes are {next, prev}, and the list keeps a count of its nodes.
#include "guest/guest.hpp"

using guest::gptr;

namespace {

struct SeadListNode {
    gptr<SeadListNode> next;
    gptr<SeadListNode> prev;
};
GUEST_SIZE(SeadListNode, 8);

struct LinkedList {
    u32 count;
};
GUEST_OFFSET(LinkedList, count, 0);

// Links node in before position and counts it. Returns node.
gptr<SeadListNode> linked_list_insert_before(LinkedList &list, SeadListNode &position, SeadListNode &node) {
    gptr<SeadListNode> previous = position.prev;
    gptr<SeadListNode> self = guest::addr_of(node);
    node.next = guest::addr_of(position);
    node.prev = previous;
    position.prev = self;
    previous->next = self;
    list.count += 1;
    return self;
}

}  // namespace

GUEST_EXPORT(0x0013e7d8, linked_list_insert_before);
