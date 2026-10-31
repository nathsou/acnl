// The child list of ButtonActionControl (and its subclasses such as DragIconControl): children are chained through a
// `next` pointer, and one of them can be the active child. Only the fields these functions touch are named.
#include "core/state_94fd0c.hpp"
#include "guest/guest.hpp"

using guest::gptr;

namespace {

struct ControlChild {
    u32 vtable;
    u8 unknown_04[4];
    gptr<ControlChild> next;
    u8 unknown_0c[0xc4 - 0x0c];
    u32 value_c4;
    s32 id;  // ANY_ID matches every child
    u8 unknown_cc[0xd9 - 0xcc];
    u8 flag_d9;

    static constexpr s32 ANY_ID = -1;

    u32 virtual_2() { return call_virtual<u32>(2); }  // zero: the child is skipped
    void virtual_7(u32 enable, u32 unknown) { call_virtual<void>(7, enable, unknown); }
    void virtual_8(u32 value, u32 unknown) { call_virtual<void>(8, value, unknown); }
    void virtual_9() { call_virtual<void>(9); }

    template <typename R, typename... A>
    R call_virtual(u32 slot, A... args) {
        u32 function = *gptr<u32>(vtable + slot * 4);
        return guest::call_address<R>(function, guest::addr_of(this), args...);
    }
};
GUEST_OFFSET(ControlChild, next, 8);
GUEST_OFFSET(ControlChild, value_c4, 0xc4);
GUEST_OFFSET(ControlChild, id, 0xc8);
GUEST_OFFSET(ControlChild, flag_d9, 0xd9);

constexpr u32 RESET_PAIR_ADDRESS = 0x00857264;  // two words copied into pair_b8 by the reset

struct ControlParent {
    u32 vtable;
    gptr<ControlChild> first_child;
    u8 unknown_08[0xb4 - 0x08];
    gptr<ControlChild> active;
    u32 pair_b8[2];
    u32 unknown_c0;
    u32 unknown_c4;
    u32 unknown_c8;
    u32 expected_value;  // the selection byte must equal it (or be one less)
    u16 state_flags;
    u8 unknown_d2[2];
    u32 option_flags;
    u8 unknown_d8[0xe4 - 0xd8];

    static constexpr u16 STATE_ENABLED = 8;     // unknown meaning
    static constexpr u32 OPTION_ANY_VALUE = 0x40;  // skips the selection byte check
    static constexpr u32 OPTION_RESET = 2;      // set by the reset

    void virtual_11() {
        guest::call_address<void>(*gptr<u32>(vtable + 11 * 4), guest::addr_of(this));
    }
};
GUEST_OFFSET(ControlParent, first_child, 4);
GUEST_OFFSET(ControlParent, active, 0xb4);
GUEST_OFFSET(ControlParent, pair_b8, 0xb8);
GUEST_OFFSET(ControlParent, expected_value, 0xcc);
GUEST_OFFSET(ControlParent, state_flags, 0xd0);
GUEST_OFFSET(ControlParent, option_flags, 0xd4);
GUEST_SIZE(ControlParent, 0xe4);

// The object the global selection pointer refers to (extent not known).
struct SelectionState {
    u8 unknown_000[0x1fc];
    u8 selected_value;
};
GUEST_OFFSET(SelectionState, selected_value, 0x1fc);

inline constexpr guest::Function<0x006d1e64, u32()> get_state_30;
inline constexpr guest::Function<0x006d40d4, u32(gptr<SelectionState> state, u32 value)> selection_accepts;
inline constexpr guest::Function<0x007d1728, gptr<ControlChild>(ControlParent &self, gptr<ControlChild> child)>
    find_next_usable_child;

gptr<ControlChild> next_child(const ControlParent &parent, gptr<ControlChild> child) {
    return child ? child->next : parent.first_child;
}

// The child after `child` (the first for null) that is usable, or null at the end of the list.
gptr<ControlChild> next_usable_child(ControlParent &parent, gptr<ControlChild> child) {
    child = next_child(parent, child);
    if (!child) {
        return nullptr;
    }
    if (child->virtual_2() == 0) {
        child = find_next_usable_child(parent, child);
    }
    return child;
}

gptr<SelectionState> selection_state() {
    return gptr<SelectionState>(state_94fd0c->unknown_30);
}

}  // namespace

// Deactivates the active child, if any.
void release_active_child(ControlParent &self) {
    if (self.active) {
        self.active->virtual_7(0, 0);
        self.active = nullptr;
    }
}
GUEST_EXPORT(0x002f67ac, release_active_child);

// Makes the first usable child the selection state accepts the active one. Returns whether one was found.
bool activate_accepted_child(ControlParent &self) {
    get_state_30();
    if (!(self.state_flags & ControlParent::STATE_ENABLED)) {
        return false;
    }
    if (!(self.option_flags & ControlParent::OPTION_ANY_VALUE)) {
        u32 selected = selection_state()->selected_value;
        if (selected != self.expected_value && selected != self.expected_value - 1) {
            return false;
        }
    }
    gptr<ControlChild> child = nullptr;
    while (true) {
        child = next_usable_child(self, child);
        if (!child) {
            return false;
        }
        if (selection_accepts(selection_state(), child->value_c4) != 0) {
            break;
        }
    }
    if (self.active) {
        self.active->virtual_8(0, 0);
    }
    self.active = child;
    child->virtual_7(1, 0);
    self.virtual_11();
    return true;
}
GUEST_EXPORT(0x002f67e4, activate_accepted_child);

// Tells every usable child except the active one (virtual 8), then the active one (virtual 9), and resets the
// parent's option flag and pair.
void reset_children(ControlParent &self) {
    gptr<ControlChild> child = nullptr;
    while (true) {
        child = next_usable_child(self, child);
        if (!child) {
            break;
        }
        if (self.active != child) {
            child->virtual_8(0, 0);
        }
    }
    self.active->virtual_9();
    self.option_flags |= ControlParent::OPTION_RESET;
    gptr<u32> pair(RESET_PAIR_ADDRESS);
    self.pair_b8[0] = pair[0];
    self.pair_b8[1] = pair[1];
}
GUEST_EXPORT(0x002f68f0, reset_children);

// Sets flag_d9 of the child with the given id (of every child for ANY_ID).
void set_child_flag(ControlParent &self, s32 id, u32 flag) {
    for (gptr<ControlChild> child = next_child(self, nullptr); child; child = child->next) {
        if (id == ControlChild::ANY_ID || child->id == id) {
            child->flag_d9 = u8(flag);
        }
    }
}
GUEST_EXPORT(0x002f6998, set_child_flag);

// Passes `value` to virtual 8 of the child with the given id (every child for ANY_ID); the child becomes the
// active one when value is non-zero, else there is no active child.
void set_child_value(ControlParent &self, s32 id, u32 value) {
    for (gptr<ControlChild> child = next_child(self, nullptr); child; child = child->next) {
        if (id != ControlChild::ANY_ID && child->id != id) {
            continue;
        }
        child->virtual_8(value, 0);
        self.active = value != 0 ? child : nullptr;
    }
}
GUEST_EXPORT(0x002f69c8, set_child_value);
