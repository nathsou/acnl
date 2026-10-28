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
    static constexpr u16 STATE_DEFAULT = 0x1f;  // the value the constructor gives (includes STATE_ENABLED)
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

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

namespace {

// Every virtual of the fuzzed objects is same_pointer (0x002f77e8, already rewritten): it does nothing and returns
// the object's address, so every child reads as usable (virtual 2 nonzero).
constexpr u32 HARMLESS_FUNCTION = 0x002f77e8;
constexpr u32 VTABLE_SLOTS = 16;
constexpr u32 MAX_CHILDREN = 4;
constexpr u32 CHILD_IDS = 3;  // children get ids in [0, CHILD_IDS)
constexpr u32 SOME_VALUE = 1;

struct FuzzTree {
    gptr<ControlParent> parent;
    gptr<ControlChild> children[MAX_CHILDREN];
    u32 count;
};

gptr<u32> harmless_vtable(guest::Fuzz &f) {
    auto table = f.allocate(VTABLE_SLOTS * sizeof(u32)).cast<u32>();
    for (u32 slot = 0; slot < VTABLE_SLOTS; slot++) {
        table[slot] = HARMLESS_FUNCTION;
    }
    return table;
}

// A parent with up to max_children children chained in a list; the active child is null.
FuzzTree some_tree(guest::Fuzz &f, u32 max_children) {
    gptr<u32> vtable = harmless_vtable(f);
    FuzzTree tree{};
    tree.parent = f.object<ControlParent>();
    tree.parent->vtable = vtable.addr();
    tree.parent->active = nullptr;
    tree.count = f.below(max_children + 1);
    gptr<ControlChild> next = nullptr;
    for (u32 i = tree.count; i-- > 0;) {
        auto child = f.object<ControlChild>();
        child->vtable = vtable.addr();
        child->next = next;
        child->id = s32(f.below(CHILD_IDS));
        tree.children[i] = child;
        next = child;
    }
    tree.parent->first_child = next;
    return tree;
}

u32 some_id(guest::Fuzz &f) {
    return f.pick<u32>({u32(ControlChild::ANY_ID), 0, f.below(CHILD_IDS), f.number()});
}

}  // namespace

GUEST_FUZZ(0x002f67ac, 200, [](guest::Fuzz &f) {
    FuzzTree tree = some_tree(f, MAX_CHILDREN);
    if (tree.count != 0 && f.below(4) != 0) {
        tree.parent->active = tree.children[f.below(tree.count)];
    }
    f.arguments(tree.parent);
});
GUEST_FUZZ(0x002f67e4, 300, [](guest::Fuzz &f) {
    // no children, and the selection byte check is bypassed: the game's selection object is not reached
    FuzzTree tree = some_tree(f, 0);
    u16 state = f.pick<u16>({0, ControlParent::STATE_ENABLED, ControlParent::STATE_DEFAULT, u16(f.number())});
    tree.parent->state_flags = state;
    u32 options = f.number();
    if (state & ControlParent::STATE_ENABLED) {
        options |= ControlParent::OPTION_ANY_VALUE;
    }
    tree.parent->option_flags = options;
    f.arguments(tree.parent);
});
GUEST_FUZZ(0x002f68f0, 300, [](guest::Fuzz &f) {
    FuzzTree tree = some_tree(f, MAX_CHILDREN);
    if (tree.count == 0) {
        // the active child is required: one outside the list
        auto child = f.object<ControlChild>();
        child->vtable = tree.parent->vtable;
        child->next = nullptr;
        tree.parent->active = child;
    } else {
        tree.parent->active = tree.children[f.below(tree.count)];
    }
    f.arguments(tree.parent);
});
GUEST_FUZZ(0x002f6998, 300, [](guest::Fuzz &f) {
    FuzzTree tree = some_tree(f, MAX_CHILDREN);
    f.arguments(tree.parent, some_id(f), f.pick<u32>({0, 1, f.number()}));
});
GUEST_FUZZ(0x002f69c8, 300, [](guest::Fuzz &f) {
    FuzzTree tree = some_tree(f, MAX_CHILDREN);
    f.arguments(tree.parent, some_id(f), f.pick<u32>({0, SOME_VALUE, f.number()}));
});
