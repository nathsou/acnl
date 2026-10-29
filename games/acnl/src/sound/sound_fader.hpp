// SoundFader: a level that moves in equal steps towards a target (volume fades). The subclasses SoundFaderEx and
// SoundFaderPlayer share this layout.
#pragma once

#include "guest/guest.hpp"

struct SoundFader {
    static constexpr s32 NOT_FADING = -1;  // steps_left while no fade is running

    u32 vtable;
    float level;
    float target;
    float step;        // added to the level on every advance
    s32 steps_left;    // NOT_FADING, or the advances before the level reaches the target

    // virtual 2: jumps to the level.
    void set_level(float new_level);
    // virtual 3: moves one step along a running fade; returns the level.
    float advance();
    // Fades to the target in the given number of steps; no steps (or a negative number) jumps at once.
    void start_fade(float new_target, s32 steps);
};
GUEST_OFFSET(SoundFader, level, 4);
GUEST_OFFSET(SoundFader, target, 8);
GUEST_OFFSET(SoundFader, step, 0xc);
GUEST_OFFSET(SoundFader, steps_left, 0x10);
GUEST_SIZE(SoundFader, 0x14);
