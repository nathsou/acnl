// An object with a small state machine (states 4 -> 1 -> 2 -> 3) that asks a manager (the global at 0x0094d0d0)
// for an entry. What it is exactly is not known yet; fields are named after their offsets.
#pragma once

#include "guest/guest.hpp"

struct RequestObject {
    static constexpr u32 STATE_BEGUN = 1;
    static constexpr u32 STATE_ENTRY_PICKED = 2;
    static constexpr u32 STATE_READY = 3;  // poll() reports true
    static constexpr u32 STATE_IDLE = 4;
    static constexpr s32 NO_ID = -1;

    u8 unknown_00[4];
    u32 state;
    u8 unknown_08[4];
    s32 id;  // NO_ID: none
    u8 unknown_10[0x44 - 0x10];
    u8 kind;  // from the manager's entry
    u8 unknown_45[3];
    u32 length_48;  // the entry's length, modulo 48
    u8 unknown_4c[4];

    bool poll(s32 new_id);  // true once the state is READY
    void set_idle();
};
GUEST_OFFSET(RequestObject, state, 0x04);
GUEST_OFFSET(RequestObject, id, 0x0c);
GUEST_OFFSET(RequestObject, kind, 0x44);
GUEST_OFFSET(RequestObject, length_48, 0x48);
GUEST_SIZE(RequestObject, 0x50);
