// Setters of a small object (a process of the game's framework, by its constructor at 0x00521a8c) and of two animation
// helpers next to it.
#include "guest/guest.hpp"

struct ProcessState {
    u32 vtable;
    s32 handle;
    u32 word_08;
    u16 half_0c;
    u16 half_0e;
    u8 byte_10;
    u8 byte_11;
    u8 byte_12;

    void set(u16 value, u32 word, u8 byte);
    void clear_first_word();
    void set_both_halves(u16 value);
    void copy_half_0e_to_0c();
};
GUEST_OFFSET(ProcessState, handle, 4);
GUEST_OFFSET(ProcessState, word_08, 8);
GUEST_OFFSET(ProcessState, half_0c, 0xc);
GUEST_OFFSET(ProcessState, half_0e, 0xe);
GUEST_OFFSET(ProcessState, byte_12, 0x12);

void ProcessState::set(u16 value, u32 word, u8 byte) {
    half_0c = value;
    word_08 = word;
    byte_12 = byte;
}
GUEST_EXPORT(0x005210c0, ProcessState::set);

void ProcessState::clear_first_word() {
    vtable = 0;
}
GUEST_EXPORT(0x00521bec, ProcessState::clear_first_word);

void ProcessState::set_both_halves(u16 value) {
    half_0c = value;
    half_0e = value;
}
GUEST_EXPORT(0x00521bf8, ProcessState::set_both_halves);

void ProcessState::copy_half_0e_to_0c() {
    half_0c = half_0e;
}
GUEST_EXPORT(0x00521c04, ProcessState::copy_half_0e_to_0c);

// Three (start, current) pairs of words, and a flag: back to the start values.
struct AnimationCursor {
    u8 unknown_00[8];
    u32 start_08;
    u32 current_0c;
    u8 unknown_10[4];
    u32 start_14;
    u32 current_18;
    u8 unknown_1c[4];
    u32 start_20;
    u32 current_24;
    u8 unknown_28[0x14];
    u8 flag_3c;

    void rewind();
};
GUEST_OFFSET(AnimationCursor, start_08, 8);
GUEST_OFFSET(AnimationCursor, start_14, 0x14);
GUEST_OFFSET(AnimationCursor, start_20, 0x20);
GUEST_OFFSET(AnimationCursor, flag_3c, 0x3c);

void AnimationCursor::rewind() {
    flag_3c = 0;
    current_0c = start_08;
    current_18 = start_14;
    current_24 = start_20;
}
GUEST_EXPORT(0x004edd88, AnimationCursor::rewind);

// Three floats (or any words) spaced 0x10 apart in a target, plus a "changed" flag.
struct PositionTarget {
    u8 unknown_00[0x58];
    u32 x;
    u8 unknown_5c[0xc];
    u32 y;
    u8 unknown_6c[0xc];
    u32 z;
    u8 unknown_7c[0xc];
    u32 flags_88;
};
GUEST_OFFSET(PositionTarget, x, 0x58);
GUEST_OFFSET(PositionTarget, y, 0x68);
GUEST_OFFSET(PositionTarget, z, 0x78);
GUEST_OFFSET(PositionTarget, flags_88, 0x88);

struct Vector3Words {
    u32 x;
    u32 y;
    u32 z;
};

struct PositionSetter {
    static constexpr u32 FLAG_CHANGED = 0x800;  // unknown flag

    u8 unknown_00[4];
    gptr<PositionTarget> target;

    void set_position(const Vector3Words &position);
};
GUEST_OFFSET(PositionSetter, target, 4);

void PositionSetter::set_position(const Vector3Words &position) {
    target->z = position.z;
    target->y = position.y;
    target->x = position.x;
    target->flags_88 = target->flags_88 | FLAG_CHANGED;
}
GUEST_EXPORT(0x004ee2b0, PositionSetter::set_position);
