#include "guest/guest.hpp"

// Small accessors over a two-level indirection: word 1 of the object points to a node whose word 1 is the value.
namespace {

struct Node {
    u32 unknown_00;
    u32 value;
};
GUEST_SIZE(Node, 8);

struct Handle {
    u32 unknown_00;
    guest::gptr<Node> node;
};
GUEST_SIZE(Handle, 8);

using guest::gptr;

}  // namespace

// The value held by the node a handle refers to.
static u32 handle_value(gptr<Handle> handle) {
    return handle->node->value;
}
GUEST_EXPORT(0x00755a98, handle_value);

// Stores the handle's value into *out.
static void handle_value_to(gptr<Handle> handle, gptr<u32> out) {
    *out = handle->node->value;
}
GUEST_EXPORT(0x00755aa4, handle_value_to);

// Same as handle_value_to (a second copy of the code in the binary).
static void handle_value_to_copy(gptr<Handle> handle, gptr<u32> out) {
    *out = handle->node->value;
}
GUEST_EXPORT(0x00755ab4, handle_value_to_copy);

// Whether the word at the pointer is non-zero.
static bool word_is_set(gptr<u32> word) {
    return *word != 0;
}
GUEST_EXPORT(0x00755ac4, word_is_set);

// Whether two words are equal.
static bool words_equal(gptr<u32> a, gptr<u32> b) {
    return *a == *b;
}
GUEST_EXPORT(0x00755ad4, words_equal);
GUEST_EXPORT(0x0072d964, words_equal);
