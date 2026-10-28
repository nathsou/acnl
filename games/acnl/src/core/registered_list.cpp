// A linked list of records looked up by a byte id (what the records are is not known yet).
#include "guest/guest.hpp"

#include "core/global_object_byte_decl.hpp"

namespace {

struct RegisteredNode {
    u8 unknown_00[4];
    gptr<RegisteredNode> next;
    u8 unknown_08[0x1b - 8];
    u8 id;
};
GUEST_OFFSET(RegisteredNode, next, 4);
GUEST_OFFSET(RegisteredNode, id, 0x1b);

struct RegisteredList {
    u8 unknown_00[8];
    gptr<RegisteredNode> head;
};
GUEST_OFFSET(RegisteredList, head, 8);
inline guest::global<RegisteredList, 0x009524d4> registered_list;

}  // namespace

// Whether a node with this id is in the list (never, while read_global_object_byte() is 3).
static bool is_in_registered_list(u32 id) {
    if (read_global_object_byte() == REGISTRY_DISABLED) {
        return false;
    }
    for (gptr<RegisteredNode> node = registered_list->head; node; node = node->next) {
        if (node->id == id) {
            return true;
        }
    }
    return false;
}
GUEST_EXPORT(0x002fdf10, is_in_registered_list);
GUEST_FUZZ(0x002fdf10, 200, [](guest::Fuzz &f) { f.arguments(f.below(40)); });
