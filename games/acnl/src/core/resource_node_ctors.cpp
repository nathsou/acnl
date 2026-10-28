// Constructors of mutil::BaseResourceMgr<g3d::ResourceLoader, N>::ResourceNode, and a tiny "value plus cleared
// flag" constructor.
#include "guest/guest.hpp"

using guest::gptr;

namespace {

inline constexpr guest::Function<0x001324a8, gptr<void>(gptr<void> self)> construct_list_node;
inline constexpr guest::Function<0x005b1a1c, gptr<void>(gptr<void> self)> clear_slot;
inline constexpr guest::Function<0x004ee594, gptr<void>(gptr<void> self)> construct_resource_loader;

constexpr u32 NODE_VTABLE_13 = 0x00908078;
constexpr u32 NODE_VTABLE_15 = 0x00908088;
constexpr u32 SLOT_OFFSET = 0xc;     // the clearable slot inside the node
constexpr u32 LOADER_OFFSET = 0x14;  // the ResourceLoader inside the node
constexpr u32 SLOT_TO_LOADER = LOADER_OFFSET - SLOT_OFFSET;

// The size of a ResourceLoader is not known: scratch nodes are made generously large.
constexpr u32 FUZZ_NODE_SIZE = 0x1000;

gptr<void> construct_node(gptr<void> node, u32 vtable) {
    gptr<void> list_node = construct_list_node(node);
    *list_node.cast<u32>() = vtable;
    gptr<void> slot = clear_slot(list_node + SLOT_OFFSET);
    gptr<void> loader = construct_resource_loader(slot + SLOT_TO_LOADER);
    return loader - LOADER_OFFSET;
}

}  // namespace

struct ValueWithFlag {
    u32 value;
    u8 flag;
};

// Copies the 32-bit value from source and clears the flag.
ValueWithFlag &construct_value_with_flag(ValueWithFlag &self, const u32 &source) {
    self.value = source;
    self.flag = 0;
    return self;
}
GUEST_EXPORT(0x005b1a08, construct_value_with_flag);
GUEST_FUZZ(0x005b1a08, 200, [](guest::Fuzz &f) { f.arguments(f.object<ValueWithFlag>(), f.object<u32>()); });

gptr<void> construct_resource_node_13(gptr<void> node) { return construct_node(node, NODE_VTABLE_13); }
GUEST_EXPORT(0x005b1abc, construct_resource_node_13);
GUEST_FUZZ(0x005b1abc, 200, [](guest::Fuzz &f) { f.arguments(f.allocate(FUZZ_NODE_SIZE)); });

gptr<void> construct_resource_node_15(gptr<void> node) { return construct_node(node, NODE_VTABLE_15); }
GUEST_EXPORT(0x005b1b30, construct_resource_node_15);
GUEST_FUZZ(0x005b1b30, 200, [](guest::Fuzz &f) { f.arguments(f.allocate(FUZZ_NODE_SIZE)); });
