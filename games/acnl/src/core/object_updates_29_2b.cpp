// Small functions of objects of the 0x00290000..0x002c0000 area (their classes are not known yet): copying an entry
// template, clearing a counter block, a countdown, and the constructor and destructor of a pair of animations.
#include "core/encrypted_int.hpp"
#include "net/net_session.hpp"

using guest::gptr;

gptr<u8> entry_template_address(u32 id);

namespace {

constexpr u32 TEMPLATE_ID_OFFSET = 9;
constexpr u32 TEMPLATE_ID_MASK = 0xff;
constexpr u32 COUNTER_WORDS = 11;
constexpr u32 COUNTDOWN_BLOCK_OFFSET = 0x66664;
constexpr u32 SECOND_ANIMATION_OFFSET = 0x2c;
constexpr u32 FIRST_ANIMATION_OFFSET = 4;
constexpr u8 PAIR_STATE = 2;

inline constexpr guest::Function<0x002fae84, gptr<void>()> get_data_base;
inline constexpr guest::Function<0x00125aec, gptr<void>(gptr<void> animation)> construct_layout_animation;
inline constexpr guest::Function<0x0056988c, gptr<void>(gptr<void> animation)> destroy_animation;

struct EntryWords {
    u32 words[4];
};

struct CounterBlock {
    u32 words[COUNTER_WORDS - 2];
    EncryptedInt counter;
};
GUEST_OFFSET(CounterBlock, counter, 0x24);
GUEST_SIZE(CounterBlock, 0x2c);

struct Countdown {
    u32 unknown_00;
    s32 count;
};

struct AnimationPair {
    u32 unknown_00;
    u8 first_animation[0x28];
    u8 second_animation[0x28];
    u32 unknown_54;
    u8 state_58;
};
GUEST_OFFSET(AnimationPair, first_animation, 4);
GUEST_OFFSET(AnimationPair, second_animation, 0x2c);
GUEST_OFFSET(AnimationPair, unknown_54, 0x54);
GUEST_OFFSET(AnimationPair, state_58, 0x58);

}  // namespace

// Copies the 16-byte template of entry `id` (templates are numbered from 9) to the destination.
void copy_entry_template(EntryWords &destination, u32 id) {
    gptr<EntryWords> source(entry_template_address((id + TEMPLATE_ID_OFFSET) & TEMPLATE_ID_MASK).addr());
    destination = *source;
}
GUEST_EXPORT(0x0029cf44, copy_entry_template);

// Zeroes the words, then sets the counter at 0x24 to 0 (which overwrites the last two of them).
void clear_counter_block(CounterBlock &block) {
    for (u32 &word : block.words) {
        word = 0;
    }
    block.counter.set(0);
}
GUEST_EXPORT(0x002a7ad0, clear_counter_block);

// Counts the countdown in the save data's block at 0x66664 down by one (it stops at 0).
void decrement_countdown() {
    gptr<Countdown> countdown(get_data_base().addr() + COUNTDOWN_BLOCK_OFFSET);
    if (countdown->count > 0) {
        countdown->count--;
    }
}
GUEST_EXPORT(0x002a7de4, decrement_countdown);

AnimationPair &construct_animation_pair(AnimationPair &pair) {
    pair.unknown_00 = 0;
    construct_layout_animation(guest::addr_of(pair).cast<void>() + FIRST_ANIMATION_OFFSET);
    construct_layout_animation(guest::addr_of(pair).cast<void>() + SECOND_ANIMATION_OFFSET);
    pair.unknown_54 = 0;
    pair.state_58 = PAIR_STATE;
    return pair;
}
GUEST_EXPORT(0x002b7c68, construct_animation_pair);

AnimationPair &destroy_animation_pair(AnimationPair &pair) {
    destroy_animation(guest::addr_of(pair).cast<void>() + SECOND_ANIMATION_OFFSET);
    destroy_animation(guest::addr_of(pair).cast<void>() + FIRST_ANIMATION_OFFSET);
    return pair;
}
GUEST_EXPORT(0x002b7c94, destroy_animation_pair);
