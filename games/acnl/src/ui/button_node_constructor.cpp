// The constructor of ButtonActionNode (the base of many button-like layout nodes) and the call that starts or
// stops its animations.
#include "core/fuzz_helpers.hpp"
#include "guest/guest.hpp"

using guest::gptr;

namespace {

constexpr u32 VTABLE = 0x008f183c;
constexpr u32 ANIMATION_COUNT = 4;
constexpr u32 ANIMATION_SIZE = 0x28;
constexpr u32 VALUE_D0 = 0x01000398;
constexpr u16 NO_INDEX = 0xffff;
constexpr u32 START_SLOT = 0x34 / 4;
constexpr u32 STOP_SLOT = 0x1c / 4;
constexpr u32 FIRST_ANIMATION_OFFSET = 0x20;
constexpr u32 SECOND_ANIMATION_OFFSET = 0x48;

inline constexpr guest::Function<0x001324a8, gptr<void>(gptr<void> self)> construct_list_node;
inline constexpr guest::Function<0x00125aec, void(gptr<void> self)> construct_animation;

struct ButtonNode {
    u32 vtable;
    u8 unknown_04[8];
    u32 value_0c;
    u32 value_10;
    float float_14;
    float float_18;
    u32 value_1c;
    u8 animations[ANIMATION_COUNT * ANIMATION_SIZE];
    u32 value_c0;
    u32 value_c4;
    u32 value_c8;
    u32 value_cc;
    u32 value_d0;
    u16 index_d4;
    u8 byte_d6;
    u8 byte_d7;
    u8 byte_d8;
    u8 byte_d9;
    u8 byte_da;
    u8 byte_db;
    u8 byte_dc;
    u8 byte_dd;
};
GUEST_OFFSET(ButtonNode, value_0c, 0x0c);
GUEST_OFFSET(ButtonNode, float_14, 0x14);
GUEST_OFFSET(ButtonNode, animations, 0x20);
GUEST_OFFSET(ButtonNode, value_c0, 0xc0);
GUEST_OFFSET(ButtonNode, value_d0, 0xd0);
GUEST_OFFSET(ButtonNode, index_d4, 0xd4);
GUEST_OFFSET(ButtonNode, byte_d6, 0xd6);

}  // namespace

ButtonNode &construct_button_node(ButtonNode &self) {
    ButtonNode &node = *construct_list_node(guest::addr_of(self).cast<void>()).cast<ButtonNode>();
    node.vtable = VTABLE;
    node.value_0c = 0;
    node.value_10 = 0;
    node.float_14 = 0.0f;
    node.float_18 = 0.0f;
    node.value_1c = 0;
    for (u32 i = 0; i < ANIMATION_COUNT; i++) {
        construct_animation(guest::addr_of(node.animations[i * ANIMATION_SIZE]).cast<void>());
    }
    node.value_c0 = 0;
    node.value_c4 = 0;
    node.value_c8 = 0;
    node.value_d0 = VALUE_D0;
    node.value_cc = 0;
    node.index_d4 = NO_INDEX;
    node.byte_d6 = 0;
    node.byte_d7 = 0;
    node.byte_d8 = 0;
    node.byte_d9 = 1;
    node.byte_da = 0;
    node.byte_db = 1;
    node.byte_dc = 0;
    node.byte_dd = 0;
    return node;
}
GUEST_EXPORT(0x002b6de0, construct_button_node);
GUEST_FUZZ(0x002b6de0, 100, [](guest::Fuzz &f) { f.arguments(f.object<ButtonNode>()); });

// With the flag: marks the node and passes both animation groups to virtual 13 (start); without: calls virtual 7.
u32 start_or_stop_button_node(ButtonNode &node, u32 start) {
    gptr<u32> vtable(node.vtable);
    gptr<void> self = guest::addr_of(node).cast<void>();
    if (start == 0) {
        return guest::call_address<u32>(vtable[STOP_SLOT], self, 0u, 0u);
    }
    node.byte_d7 = 1;
    guest::call_address<u32>(vtable[START_SLOT], self, gptr<u8>(self.addr() + FIRST_ANIMATION_OFFSET), 1u);
    gptr<u32> again(node.vtable);
    return guest::call_address<u32>(again[START_SLOT], self, gptr<u8>(self.addr() + SECOND_ANIMATION_OFFSET), 1u);
}
GUEST_EXPORT(0x002b6d20, start_or_stop_button_node);
GUEST_FUZZ(0x002b6d20, 100, [](guest::Fuzz &f) {
    auto node = f.object<ButtonNode>();
    node->vtable = fuzz::harmless_vtable(f, 16).addr();
    f.arguments(node, f.below(2));
});
