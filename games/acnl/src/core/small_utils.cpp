// Small utilities the game code uses everywhere: a second random number generator, handle comparison, flag bits, tree
// nodes and global state that is taken.
#include "core/word_pair.hpp"
#include "guest/guest.hpp"

using guest::gptr;

namespace {

inline constexpr guest::Function<0x002f74e0, u32(u32 mask, u32 index)> table_entry_has_all_bits;

constexpr u32 SHIFT_BYTE_MASK = 0xff;
constexpr u32 WORD_BITS = 32;
constexpr u32 FLAG_BIT_LIMIT = 7;  // set_flag_bit_below_7 ignores bit numbers from here on
constexpr u32 FLAG_40 = 0x40;      // the mode flag next_mode_with_flag_40... counts
constexpr u32 MODE_COUNT = 0xa5;
constexpr s32 NOT_FLAGGED = -1;

// The ARM shift by a register: amounts of 32 and more (of the low byte) give 0.
u32 shift_left(u32 value, u32 amount) {
    amount &= SHIFT_BYTE_MASK;
    return amount >= WORD_BITS ? 0 : value << amount;
}

}  // namespace

// Marsaglia's xorshift128 generator: the state is four words, oldest first.
struct Xorshift128 {
    u32 state[4];

    u32 next();
};
GUEST_SIZE(Xorshift128, 16);

// Returns the new number, which becomes the newest word of the state.
u32 Xorshift128::next() {
    constexpr u32 FIRST_SHIFT = 11, SECOND_SHIFT = 8, THIRD_SHIFT = 19;
    u32 mixed = state[0] ^ (state[0] << FIRST_SHIFT);
    u32 result = mixed ^ (mixed >> SECOND_SHIFT) ^ state[3] ^ (state[3] >> THIRD_SHIFT);
    state[0] = state[1];
    state[1] = state[2];
    state[2] = state[3];
    state[3] = result;
    return result;
}
GUEST_EXPORT(0x0055cb58, Xorshift128::next);
GUEST_EXPORT(0x0053b8b8, Xorshift128::next);

// A handle: a value that only counts when the flag next to it is set.
struct Handle {
    u32 value;
    u32 valid;
};
GUEST_SIZE(Handle, 8);

// Whether the handles differ: they do unless both are valid and have the same value.
bool handles_differ(const Handle &first, const Handle &second) {
    return !(first.valid != 0 && second.valid != 0 && first.value == second.value);
}
GUEST_EXPORT(0x00314b04, handles_differ);

// Sets or clears bit `index` of the first byte; bit numbers of 7 and more do nothing.
void set_flag_bit_below_7(gptr<u8> flags, u32 index, u32 value) {
    if (index >= FLAG_BIT_LIMIT) {
        return;
    }
    u8 mask = u8(1u << index);
    flags[0] = value != 0 ? u8(flags[0] | mask) : u8(flags[0] & ~mask);
}
GUEST_EXPORT(0x00316efc, set_flag_bit_below_7);

// How many modes with flag 0x40 come before the mode (counting only the modes below it); -1 when the mode does not have
// the flag.
s32 flagged_mode_ordinal(u32 mode) {
    if (mode == MODE_COUNT || table_entry_has_all_bits(FLAG_40, mode) == 0) {
        return NOT_FLAGGED;
    }
    s32 ordinal = 0;
    for (u32 candidate = 0; candidate < mode; candidate++) {
        if (table_entry_has_all_bits(FLAG_40, candidate) != 0) {
            ordinal++;
        }
    }
    return ordinal;
}
GUEST_EXPORT(0x00313440, flagged_mode_ordinal);

// A mask of the low `count` bits and how many of them are enabled.
struct BitMask {
    u32 count;
    u32 mask;
    u32 enabled_count;
};
GUEST_SIZE(BitMask, 12);

// Sets the count; with `enabled`, the mask has all `count` bits set and counts them, else it is empty.
void init_bit_mask(BitMask &self, u32 count, u32 enabled) {
    self.count = count;
    if (enabled == 0) {
        self.mask = 0;
        self.enabled_count = 0;
        return;
    }
    self.mask = shift_left(1, count) - 1;
    self.enabled_count = count;
}
GUEST_EXPORT(0x00116ea5, init_bit_mask);

// The word at 0x00974a84 is taken: its value is returned and it is cleared.
inline guest::global<u32, 0x00974a84> taken_word;
u32 take_word_974a84() {
    u32 value = *taken_word;
    *taken_word = 0;
    return value;
}
GUEST_EXPORT(0x00127680, take_word_974a84);

// A node of a tree that points to its parent; the parent points to its first and last child.
struct TreeNode {
    gptr<TreeNode> parent;
    u8 unknown_04[4];
    gptr<TreeNode> first_child;
    gptr<TreeNode> last_child;
};
GUEST_OFFSET(TreeNode, first_child, 8);
GUEST_OFFSET(TreeNode, last_child, 0xc);

// Takes the node out of its parent: the parent forgets it as first and last child, and the node forgets the parent.
void detach_from_parent(TreeNode &node) {
    gptr<TreeNode> parent = node.parent;
    if (!parent) {
        return;
    }
    gptr<TreeNode> self = guest::addr_of(node);
    if (parent->first_child == self) {
        parent->first_child = nullptr;
    }
    if (parent->last_child == self) {
        parent->last_child = nullptr;
    }
    node.parent = nullptr;
}
GUEST_EXPORT(0x00136cc8, detach_from_parent);
