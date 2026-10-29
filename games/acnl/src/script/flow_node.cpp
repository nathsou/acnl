// libms::FlowNode and the small "handle + argument" holder next to it.
#include "guest/guest.hpp"

using guest::gptr;

namespace {

inline constexpr guest::Function<0x00159984, u32(u32 argument)> acquire_handle;
inline constexpr guest::Function<0x001594a8, u32(u32 handle)> release_handle;
inline constexpr guest::Function<0x002fa9d0, u32(gptr<const char> text)> string_length;
inline constexpr guest::Function<0x001509dc, s32(gptr<const char> a, gptr<const char> b, u32 length)> compare_entry;

constexpr u32 FLOW_NODE_VTABLE = 0x00908034;
constexpr u32 MAX_PREFIX_LENGTH = 0x100;

}  // namespace

namespace libms {

struct FlowNode {
    u32 vtable;
    u32 argument;
};
GUEST_OFFSET(FlowNode, argument, 4);

}  // namespace libms

// A handle obtained from an argument, and that argument.
struct ArgumentHandle {
    u32 handle;
    u32 argument;
};
GUEST_OFFSET(ArgumentHandle, argument, 4);

libms::FlowNode &construct_flow_node(libms::FlowNode &self, u32 argument) {
    self.argument = argument;
    self.vtable = FLOW_NODE_VTABLE;
    return self;
}
GUEST_EXPORT(0x005b17e0, construct_flow_node);

// Remembers the argument and acquires a handle for it; returns the handle.
u32 acquire_argument_handle(ArgumentHandle &self, u32 argument) {
    self.argument = argument;
    self.handle = acquire_handle(argument);
    return self.handle;
}
GUEST_EXPORT(0x005b17fc, acquire_argument_handle);

// Releases the handle if there is one and forgets it. (r0 is always 0 afterwards.)
u32 release_argument_handle(ArgumentHandle &self) {
    if (self.handle != 0) {
        release_handle(self.handle);
        self.handle = 0;
        self.argument = 0;
    }
    return 0;
}
GUEST_EXPORT(0x005b1818, release_argument_handle);

ArgumentHandle &construct_empty_argument_handle(ArgumentHandle &self) {
    self.handle = 0;
    self.argument = 0;
    return self;
}
GUEST_EXPORT(0x005b1840, construct_empty_argument_handle);

// Whether text starts with prefix (both non-null, the prefix no longer than the text and at most 0x100 long).
bool text_starts_with(gptr<const char> text, gptr<const char> prefix) {
    if (!text || !prefix) {
        return false;
    }
    u32 text_length = string_length(text);
    u32 prefix_length = string_length(prefix);
    if (prefix_length > text_length || prefix_length > MAX_PREFIX_LENGTH) {
        return false;
    }
    return compare_entry(text, prefix, prefix_length) == 0;
}
GUEST_EXPORT(0x005b1850, text_starts_with);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

static gptr<char> some_text(guest::Fuzz &f, u32 max_length) {
    gptr<char> p = f.allocate(0x120).cast<char>();
    u32 length = f.below(max_length + 1);
    for (u32 i = 0; i < 0x120; i++) {
        p[i] = 'a' + f.below(2);
    }
    p[length] = 0;
    return p;
}

GUEST_FUZZ(0x005b17e0, 200, [](guest::Fuzz &f) { f.arguments(f.object<libms::FlowNode>(), f.number()); });
GUEST_FUZZ(0x005b17fc, 200, [](guest::Fuzz &f) { f.arguments(f.object<ArgumentHandle>(), 1 + f.below(64)); });
GUEST_FUZZ(0x005b1818, 200, [](guest::Fuzz &f) {
    auto holder = f.object<ArgumentHandle>();
    holder->handle = 0;
    f.arguments(holder);
});
GUEST_FUZZ(0x005b1840, 200, [](guest::Fuzz &f) { f.arguments(f.object<ArgumentHandle>()); });
GUEST_FUZZ(0x005b1850, 400, [](guest::Fuzz &f) {
    gptr<char> text = f.below(8) == 0 ? gptr<char>() : some_text(f, f.pick<u32>({0, 3, 10, 40}));
    gptr<char> prefix;
    if (f.below(8) != 0) {
        prefix = some_text(f, f.pick<u32>({0, 2, 5, 40}));
        if (text && f.below(2) != 0) {
            u32 n = f.below(5);
            for (u32 i = 0; i < n && text[i] != 0; i++) {
                prefix[i] = text[i];
            }
        }
    }
    f.arguments(text, prefix);
});
