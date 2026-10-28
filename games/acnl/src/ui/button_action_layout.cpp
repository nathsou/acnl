// ButtonActionControl: reset, setup of its four layout animations (touch, select, touch_ok, select_ok), and adding
// layout nodes to its intrusive list. (The constructor is in button_action_control.cpp.)
#include "core/safe_string.hpp"

namespace {

using guest::gptr;

// A layout animation slot (the Animation class of ssys::ma::lyt, 0x28 bytes); only its target is read here.
struct LayoutAnimation {
    u8 unknown_00[0x18];
    gptr<void> target;
    u8 unknown_1c[0x28 - 0x1c];
};
GUEST_OFFSET(LayoutAnimation, target, 0x18);
GUEST_SIZE(LayoutAnimation, 0x28);

constexpr u32 ANIMATION_COUNT = 4;

// A node of the control's list, holding copies of the control's animations.
struct LayoutNode {
    u8 unknown_00[4];
    gptr<LayoutNode> prev;
    gptr<LayoutNode> next;
    u8 unknown_0c[0x10];
    u32 unknown_1c;
    LayoutAnimation animations[ANIMATION_COUNT];
};
GUEST_OFFSET(LayoutNode, prev, 4);
GUEST_OFFSET(LayoutNode, next, 8);
GUEST_OFFSET(LayoutNode, unknown_1c, 0x1c);
GUEST_OFFSET(LayoutNode, animations, 0x20);
GUEST_SIZE(LayoutNode, 0xc0);

// What ButtonActionControl::setup reads (the full size is not known).
struct ButtonActionInfo {
    u32 layout;  // given to every animation
    u32 unknown_04;
    u32 unknown_08;
    gptr<const char> names[ANIMATION_COUNT];  // per animation; null: the animation is left alone
    u32 unknown_1c;
    u32 unknown_20;
};
GUEST_OFFSET(ButtonActionInfo, names, 0x0c);
GUEST_OFFSET(ButtonActionInfo, unknown_1c, 0x1c);
GUEST_OFFSET(ButtonActionInfo, unknown_20, 0x20);

struct ButtonActionControl {
    static constexpr u32 STATE_MASK = 3;  // unknown_d4: two unknown flags that virtual_3 clears
    static constexpr u32 INITIAL_STATE = 0xc;

    gptr<void> vtable;
    gptr<LayoutNode> list_head;
    gptr<LayoutNode> list_tail;
    u32 unknown_0c;
    LayoutAnimation animations[ANIMATION_COUNT];
    u32 unknown_b0;
    u32 unknown_b4;
    u32 unknown_b8[2];
    u32 unknown_c0;
    u32 unknown_c4;
    u32 unknown_c8;
    u32 unknown_cc;
    u8 unknown_d0[4];
    u32 unknown_d4;
    u8 unknown_d8[0xe4 - 0xd8];

    // virtual 3: when one of the STATE_MASK flags is set, calls virtual 13 and goes back to the default state.
    void virtual_3();
    // Takes the settings from info and sets up the animations (named "touch", "select"... formatted with name_arg
    // when it is not 0). Returns the result of get_state_30.
    u32 setup(const ButtonActionInfo &info, u32 name_arg);
    // Inserts node before `before` in the list (an empty list becomes just `before`); with copy_state, first copies
    // the animation targets into node.
    void add_node(LayoutNode &before, LayoutNode &node, u32 copy_state);
};
GUEST_OFFSET(ButtonActionControl, list_head, 4);
GUEST_OFFSET(ButtonActionControl, list_tail, 8);
GUEST_OFFSET(ButtonActionControl, unknown_0c, 0xc);
GUEST_OFFSET(ButtonActionControl, animations, 0x10);
GUEST_OFFSET(ButtonActionControl, unknown_b0, 0xb0);
GUEST_OFFSET(ButtonActionControl, unknown_b4, 0xb4);
GUEST_OFFSET(ButtonActionControl, unknown_b8, 0xb8);
GUEST_OFFSET(ButtonActionControl, unknown_c0, 0xc0);
GUEST_OFFSET(ButtonActionControl, unknown_cc, 0xcc);
GUEST_OFFSET(ButtonActionControl, unknown_d4, 0xd4);
GUEST_SIZE(ButtonActionControl, 0xe4);

constexpr u32 RESET_VIRTUAL_SLOT = 13;
constexpr u32 FORMAT_BUFFER_UPDATE_SLOT = 2;    // virtual of the format buffer, called after formatting
constexpr u32 RESET_PAIR_ADDRESS = 0x0085725c;  // two words copied into unknown_b8
constexpr u32 FORMAT_ADDRESS = 0x00857274;      // format taking the name argument and the animation name
// "touch", "select", "touch_ok", "select_ok": the names of the four animations, in order
constexpr u32 ANIMATION_NAME_ADDRESSES[ANIMATION_COUNT] = {0x008572a0, 0x00857298, 0x0085728c, 0x00857280};

inline guest::global<SafeString, 0x00af76f8> format_buffer;
inline guest::global<float, 0x002f70b0> copied_animation_value;  // a constant in the code's literal pool

inline constexpr guest::Function<0x0030f48c, void(gptr<SafeString> dest, gptr<const char> format, u32 argument,
                                                  u32 name)>
    format_string;
inline constexpr guest::Function<0x005695e4, void(LayoutAnimation &self, gptr<const char> name, u32 layout)>
    construct_dummy_layout;
inline constexpr guest::Function<0x00569774, void(LayoutAnimation &dest, gptr<void> target)> copy_animation_target;
inline constexpr guest::Function<0x005697e0, void(LayoutAnimation &self, float value)> animation_set_value;
inline constexpr guest::Function<0x006d1e64, u32()> get_state_30;

void ButtonActionControl::virtual_3() {
    if ((unknown_d4 & STATE_MASK) == 0) {
        return;
    }
    gptr<const u32> table = vtable.cast<const u32>();
    guest::call_address<void>(table[RESET_VIRTUAL_SLOT], guest::addr_of(this));
    unknown_b4 = 0;
    unknown_d4 &= ~STATE_MASK;
    gptr<u32> pair(RESET_PAIR_ADDRESS);
    unknown_b8[0] = pair[0];
    unknown_b8[1] = pair[1];
}

u32 ButtonActionControl::setup(const ButtonActionInfo &info, u32 name_arg) {
    unknown_cc = info.unknown_1c;
    unknown_0c = info.unknown_04;
    unknown_c0 = info.unknown_20;
    unknown_b0 = info.unknown_08;
    unknown_d4 = INITIAL_STATE;
    for (u32 i = 0; i < ANIMATION_COUNT; i++) {
        gptr<const char> name;
        if (name_arg != 0) {
            format_string(format_buffer.ptr(), gptr<const char>(FORMAT_ADDRESS), name_arg,
                          ANIMATION_NAME_ADDRESSES[i]);
            guest::call_address<void>(format_buffer->vtable[FORMAT_BUFFER_UPDATE_SLOT], format_buffer.ptr());
            name = format_buffer->text;
        } else {
            name = info.names[i];
            if (!name) {
                continue;
            }
        }
        construct_dummy_layout(animations[i], name, info.layout);
    }
    return get_state_30();
}

// Links node in front of `before` in the control's list.
void link_before(ButtonActionControl &list, LayoutNode &before, LayoutNode &node) {
    gptr<LayoutNode> before_ptr = guest::addr_of(before);
    gptr<LayoutNode> node_ptr = guest::addr_of(node);
    if (!list.list_head) {
        list.list_head = before_ptr;
        list.list_tail = before_ptr;
        before.prev = nullptr;
        before.next = nullptr;
        return;
    }
    if (list.list_head == before_ptr) {
        if (node.next == nullptr && node.prev == nullptr) {
            before.prev = node_ptr;
            node.next = list.list_head;
            list.list_head = node_ptr;
            node.prev = nullptr;
        }
        return;
    }
    node.prev = before.prev;
    node.next = before_ptr;
    before.prev = node_ptr;
    if (node.prev) {
        node.prev->next = node_ptr;
    }
}

void ButtonActionControl::add_node(LayoutNode &before, LayoutNode &node, u32 copy_state) {
    if (copy_state != 0) {
        gptr<void> targets[ANIMATION_COUNT];
        for (u32 i = 0; i < ANIMATION_COUNT; i++) {
            targets[i] = animations[i].target;
        }
        node.unknown_1c = unknown_0c;
        for (u32 i = 0; i < ANIMATION_COUNT; i++) {
            copy_animation_target(node.animations[i], targets[i]);
        }
        float value = *copied_animation_value;
        animation_set_value(node.animations[0], value);
        animation_set_value(node.animations[1], value);
    }
    link_before(*this, before, node);
}

}  // namespace

GUEST_EXPORT(0x002f6e14, ButtonActionControl::virtual_3);
GUEST_EXPORT(0x002f6e98, ButtonActionControl::setup);
GUEST_EXPORT(0x002f701c, ButtonActionControl::add_node);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)
// (Only paths through known code: callers always pass copy_state 0, and the names stay null.)

namespace {

constexpr u32 HARMLESS_FUNCTION = 0x002f77e8;  // same_pointer: returns r0, writes nothing

}  // namespace

GUEST_FUZZ(0x002f6e14, 300, [](guest::Fuzz &f) {
    auto control = f.object<ButtonActionControl>();
    auto table = f.object<u32[16]>();
    (*table)[RESET_VIRTUAL_SLOT] = HARMLESS_FUNCTION;
    control->vtable = table.cast<void>();
    control->unknown_d4 = f.pick<u32>({0, 1, 2, 3, 0xc, 0xd, f.number(), f.number() & ~ButtonActionControl::STATE_MASK});
    f.arguments(control);
});

GUEST_FUZZ(0x002f6e98, 200, [](guest::Fuzz &f) {
    auto control = f.object<ButtonActionControl>();
    auto info = f.object<ButtonActionInfo>();
    for (auto &name : info->names) {
        name = nullptr;
    }
    f.arguments(control, info, u32(0));
});

GUEST_FUZZ(0x002f701c, 300, [](guest::Fuzz &f) {
    auto control = f.object<ButtonActionControl>();
    auto before = f.object<LayoutNode>();
    auto node = f.object<LayoutNode>();
    switch (f.below(3)) {
    case 0: control->list_head = nullptr; break;
    case 1: control->list_head = before; break;
    default: control->list_head = f.object<LayoutNode>(); break;
    }
    if (f.below(2) != 0) {
        before->prev = nullptr;
    } else {
        before->prev = f.object<LayoutNode>();
    }
    if (f.below(2) != 0) {
        node->prev = nullptr;
        node->next = nullptr;
    }
    f.arguments(control, before, node, u32(0));
});
