// A node of the game's doubly linked lists (ssys::st::ListNode); the vtable decides where a node goes.
#pragma once

#include "guest/guest.hpp"

struct ListNode {
    guest::gptr<u32> vtable;
    guest::gptr<ListNode> prev;
    guest::gptr<ListNode> next;
};
GUEST_OFFSET(ListNode, prev, 4);
GUEST_OFFSET(ListNode, next, 8);
GUEST_SIZE(ListNode, 12);
