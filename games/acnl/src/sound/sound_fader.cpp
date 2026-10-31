#include "sound/sound_fader.hpp"

void SoundFader::set_level(float new_level) {
    level = new_level;
    target = new_level;
    steps_left = NOT_FADING;
}
GUEST_EXPORT(0x0012e804, SoundFader::set_level);

float SoundFader::advance() {
    if (steps_left == 0) {
        steps_left = NOT_FADING;
    }
    if (steps_left > 0) {
        steps_left = steps_left - 1;
        if (steps_left == 0) {
            level = target;
        } else {
            level = level + step;
        }
    }
    return level;
}
GUEST_EXPORT(0x001b0504, SoundFader::advance);

void SoundFader::start_fade(float new_target, s32 steps) {
    if (steps < 0) {
        steps = 0;
    }
    target = new_target;
    if (steps == 0) {
        level = new_target;
        steps_left = NOT_FADING;
        return;
    }
    steps_left = steps;
    step = (new_target - level) / static_cast<float>(steps);
}
GUEST_EXPORT(0x001b0544, SoundFader::start_fade);

// A thunk that adds and removes the same offset: it returns its argument.
u32 offset_identity_thunk(u32 object) {
    return object;
}
GUEST_EXPORT(0x0012e858, offset_identity_thunk);
GUEST_EXPORT(0x0032a4b8, offset_identity_thunk);
