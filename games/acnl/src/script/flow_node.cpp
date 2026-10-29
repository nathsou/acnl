// libms::FlowNode and the small "handle + argument" holder next to it.
#include "guest/guest.hpp"

using guest::gptr;

namespace {

inline constexpr guest::Function<0x00159984, u32(u32 argument)> acquire_handle;
inline constexpr guest::Function<0x001594a8, u32(u32 handle)> release_handle;
inline constexpr guest::Function<0x002fa9d0, u32(gptr<const char> text)> string_length;
inline constexpr guest::Function<0x001509dc, s32(gptr<const char> a, gptr<const char> b, u32 length)> compare_entry;

constexpr u32 FLOW_NODE_VTABLE = 0x00908034;
constexpr u32 FLOW_NODE_BRANCH_VTABLE = 0x00908014;
constexpr u32 FLOW_NODE_MESSAGE_VTABLE = 0x00908024;

inline constexpr guest::Function<0x00159a0c, u32(u32 argument)> acquire_handle_kind_b;
inline constexpr guest::Function<0x00159acc, u32(u32 argument)> acquire_handle_kind_c;
inline constexpr guest::Function<0x00134f5c, void(u32 first, u32 second)> store_pair_95e0c0;
inline guest::global<u8, 0x00953340> pair_95e0c0_stored;
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

// FlowNodeBranch and FlowNodeMessage copy constructors: the vtable of the subclass, the argument of the other node.
libms::FlowNode &construct_flow_node_branch(libms::FlowNode &self, const libms::FlowNode &other) {
    self.argument = other.argument;
    self.vtable = FLOW_NODE_BRANCH_VTABLE;
    return self;
}
GUEST_EXPORT(0x005b1708, construct_flow_node_branch);

libms::FlowNode &construct_flow_node_message(libms::FlowNode &self, const libms::FlowNode &other) {
    self.argument = other.argument;
    self.vtable = FLOW_NODE_MESSAGE_VTABLE;
    return self;
}
GUEST_EXPORT(0x005b1734, construct_flow_node_message);

// Remembers the argument and acquires a handle for it; returns the handle.
u32 acquire_argument_handle(ArgumentHandle &self, u32 argument) {
    self.argument = argument;
    self.handle = acquire_handle(argument);
    return self.handle;
}
GUEST_EXPORT(0x005b17fc, acquire_argument_handle);

// The same with the other kinds of handle (not fuzzed: acquiring takes handles from a shared pool, which differ
// between the original's and the rewrite's run).
u32 acquire_argument_handle_kind_b(ArgumentHandle &self, u32 argument) {
    self.argument = argument;
    self.handle = acquire_handle_kind_b(argument);
    return self.handle;
}
GUEST_EXPORT(0x005b1760, acquire_argument_handle_kind_b);

u32 acquire_argument_handle_kind_c(ArgumentHandle &self, u32 argument) {
    self.argument = argument;
    self.handle = acquire_handle_kind_c(argument);
    return self.handle;
}
GUEST_EXPORT(0x005b17b4, acquire_argument_handle_kind_c);

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

// Stores the two words in the global pair (0x0095e0c0).
void store_pair(u32 first, u32 second) {
    struct Pair {
        u32 first;
        u32 second;
    };
    static guest::global<Pair, 0x0095e0c0> pair;
    pair->first = first;
    pair->second = second;
}
GUEST_EXPORT(0x00134f5c, store_pair);

// Stores the pair the first time only (a static initialisation guard).
void store_pair_once(u32 first, u32 second) {
    if (*pair_95e0c0_stored != 0) {
        return;
    }
    store_pair_95e0c0(first, second);
    *pair_95e0c0_stored = 1;
}
GUEST_EXPORT(0x005b178c, store_pair_once);

ArgumentHandle &construct_empty_argument_handle(ArgumentHandle &self) {
    self.handle = 0;
    self.argument = 0;
    return self;
}
GUEST_EXPORT(0x005b1840, construct_empty_argument_handle);

// Clears the handle and the argument without releasing anything (also at 0x005b177c and 0x005b17d0).
ArgumentHandle &clear_argument_handle(ArgumentHandle &self) {
    self.handle = 0;
    self.argument = 0;
    return self;
}
GUEST_EXPORT(0x005b177c, clear_argument_handle);
GUEST_EXPORT(0x005b17d0, clear_argument_handle);

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
GUEST_FUZZ(0x005b1708, 200, [](guest::Fuzz &f) { f.arguments(f.object<libms::FlowNode>(), f.object<libms::FlowNode>()); });
GUEST_FUZZ(0x005b1734, 200, [](guest::Fuzz &f) { f.arguments(f.object<libms::FlowNode>(), f.object<libms::FlowNode>()); });
GUEST_FUZZ(0x005b177c, 100, [](guest::Fuzz &f) { f.arguments(f.object<ArgumentHandle>()); });
GUEST_FUZZ(0x005b17d0, 100, [](guest::Fuzz &f) { f.arguments(f.object<ArgumentHandle>()); });
GUEST_FUZZ(0x00134f5c, 100, [](guest::Fuzz &f) { f.arguments(f.number(), f.number()); });
GUEST_FUZZ(0x005b178c, 100, [](guest::Fuzz &f) { f.arguments(f.number(), f.number()); });
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
