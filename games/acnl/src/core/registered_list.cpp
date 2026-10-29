// A linked list of records looked up by a byte id (what the records are is not known yet).
#include "guest/guest.hpp"

#include "core/global_object_byte_decl.hpp"

namespace {

struct RegisteredNode {
    u8 unknown_00[4];
    gptr<RegisteredNode> next;
    u8 unknown_08[0x1a - 8];
    u8 flags_1a;
    u8 id;
};
GUEST_OFFSET(RegisteredNode, next, 4);
GUEST_OFFSET(RegisteredNode, flags_1a, 0x1a);
GUEST_OFFSET(RegisteredNode, id, 0x1b);

constexpr u8 CLASS_MASK = 3;
constexpr u8 CLASS_0 = 0;
constexpr u8 CLASS_1 = 1;
constexpr u32 NO_ID = 0x26;  // meaning not known yet
constexpr u32 ID_LIMIT = 0x23;
constexpr u32 ID_0 = 0;
constexpr u32 ID_5 = 5;
constexpr u32 ID_7 = 7;
constexpr u32 ID_8 = 8;
constexpr u32 ID_9 = 9;
constexpr u32 ID_C = 0xc;

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

// The id of the first node whose class (the low two bits of byte 0x1a) is the given one; NO_ID when there is none or
// the list is disabled.
static u32 first_registered_id_of_class(u8 node_class) {
    if (read_global_object_byte() == REGISTRY_DISABLED) {
        return NO_ID;
    }
    for (gptr<RegisteredNode> node = registered_list->head; node; node = node->next) {
        if ((node->flags_1a & CLASS_MASK) == node_class) {
            return node->id;
        }
    }
    return NO_ID;
}

u32 first_registered_id_of_class_1() {
    return first_registered_id_of_class(CLASS_1);
}
GUEST_EXPORT(0x0030ba54, first_registered_id_of_class_1);
GUEST_FUZZ(0x0030ba54, 200, [](guest::Fuzz &f) { f.arguments(); });

u32 first_registered_id_of_class_0() {
    return first_registered_id_of_class(CLASS_0);
}
GUEST_EXPORT(0x003188f0, first_registered_id_of_class_0);
GUEST_FUZZ(0x003188f0, 200, [](guest::Fuzz &f) { f.arguments(); });

// Whether the registry is enabled.
bool registry_enabled() {
    return read_global_object_byte() != REGISTRY_DISABLED;
}
GUEST_EXPORT(0x0058ed00, registry_enabled);
GUEST_FUZZ(0x0058ed00, 20, [](guest::Fuzz &f) { f.arguments(); });

// Whether the registry has a first node and, when asked to check, that node's id is below the limit.
bool registry_head_below_limit(u32 check) {
    if (read_global_object_byte() == REGISTRY_DISABLED) {
        return false;
    }
    gptr<RegisteredNode> head = registered_list->head;
    if (head == nullptr) {
        return false;
    }
    return check == 0 || head->id < ID_LIMIT;
}
GUEST_EXPORT(0x0058eb78, registry_head_below_limit);
GUEST_FUZZ(0x0058eb78, 50, [](guest::Fuzz &f) { f.arguments(f.below(2)); });

// The id of the first node whose id is 0, 5, 7, 8, 9 or 0xc; NO_ID when there is none.
u32 first_registered_special_id() {
    if (read_global_object_byte() == REGISTRY_DISABLED) {
        return NO_ID;
    }
    for (gptr<RegisteredNode> node = registered_list->head; node; node = node->next) {
        switch (node->id) {
        case ID_0:
        case ID_5:
        case ID_7:
        case ID_8:
        case ID_9:
        case ID_C:
            return node->id;
        default:
            break;
        }
    }
    return NO_ID;
}
GUEST_EXPORT(0x0058f094, first_registered_special_id);
GUEST_FUZZ(0x0058f094, 50, [](guest::Fuzz &f) { f.arguments(); });
