// A small value slot used by script::WordFix<N> (byte kind, two words).
#pragma once

#include "guest/guest.hpp"

struct ScriptWord {
    static constexpr u8 KIND_DEFAULT = 4;  // the kind a fresh slot gets (meaning not known yet)
    static constexpr s32 UNSET = -1;

    u8 kind;
    u8 unknown_01[3];
    s32 value_4;
    s32 value_8;

    // Puts the slot back in its initial state (kind 4, both values -1).
    void reset();
};
GUEST_OFFSET(ScriptWord, kind, 0);
GUEST_OFFSET(ScriptWord, value_4, 4);
GUEST_OFFSET(ScriptWord, value_8, 8);
GUEST_SIZE(ScriptWord, 12);

ScriptWord &construct_script_word(ScriptWord &self);
