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

// Builds a Handle pointing at a fresh node with random contents.
gptr<Handle> some_handle(guest::Fuzz &f) {
    auto handle = f.object<Handle>();
    auto node = f.object<Node>();
    handle->node = node;
    return handle;
}

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

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

GUEST_FUZZ(0x00755a98, 200, [](guest::Fuzz &f) { f.arguments(some_handle(f)); });
GUEST_FUZZ(0x00755aa4, 200, [](guest::Fuzz &f) { f.arguments(some_handle(f), f.object<u32>()); });
GUEST_FUZZ(0x00755ab4, 200, [](guest::Fuzz &f) { f.arguments(some_handle(f), f.object<u32>()); });
GUEST_FUZZ(0x00755ac4, 200, [](guest::Fuzz &f) {
    auto word = f.object<u32>();
    if (f.below(3) == 0) {
        *word = 0;
    }
    f.arguments(word);
});
static void fuzz_755ad4(guest::Fuzz &f) {
    auto a = f.object<u32>();
    auto b = f.object<u32>();
    if (f.below(2) == 0) {
        *b = *a;
    }
    f.arguments(a, b);
}
GUEST_FUZZ(0x00755ad4, 200, fuzz_755ad4);
GUEST_FUZZ(0x0072d964, 200, fuzz_755ad4);
