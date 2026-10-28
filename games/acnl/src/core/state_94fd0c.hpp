// A block of global state at 0x0094fd0c. Only the fields the rewritten code touches are named.
#pragma once

#include "guest/guest.hpp"

struct UnknownState94fd0c {
    u8 unknown_00[0x1f];
    u8 mode;  // set to 2 when a request succeeds (meaning not known yet)
    u8 unknown_20[0x10];
    u32 unknown_30;
    u8 unknown_34[0x10];
    s32 pocket_slot_44;  // values of 20 and above are reported minus 20
    u8 unknown_48[8];
    s32 unknown_50;
};
GUEST_OFFSET(UnknownState94fd0c, mode, 0x1f);
GUEST_OFFSET(UnknownState94fd0c, unknown_30, 0x30);
GUEST_OFFSET(UnknownState94fd0c, pocket_slot_44, 0x44);
GUEST_OFFSET(UnknownState94fd0c, unknown_50, 0x50);

inline guest::global<UnknownState94fd0c, 0x0094fd0c> state_94fd0c;
