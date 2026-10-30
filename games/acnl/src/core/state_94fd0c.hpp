// A block of global state at 0x0094fd0c. Only the fields the rewritten code touches are named.
#pragma once

#include "guest/guest.hpp"

struct UnknownState94fd0c {
    u8 byte_00;
    u8 unknown_01;
    u8 request_state;  // 1: ready for a request, 2: one is under way (see begin_menu_request)
    u8 request_code;
    u8 request_argument;
    u8 unknown_05;
    u8 byte_06;
    u8 byte_07;
    u8 unknown_08[7];
    u8 byte_0f;
    u8 byte_10;
    u8 unknown_11;
    u8 byte_12;
    u8 unknown_13[6];
    u8 pocket_slot_19;  // a pocket slot; values of 0x10 and above mean none
    u8 unknown_1a[4];
    u8 byte_1e;
    u8 mode;  // set to 2 when a request succeeds (meaning not known yet)
    u8 unknown_20[0xc];
    s32 value_2c;
    u32 unknown_30;
    u8 unknown_34[4];
    u32 value_38;
    u8 unknown_3c[4];
    u32 value_40;
    s32 pocket_slot_44;  // values of 20 and above are reported minus 20
    s32 value_48;
    u8 unknown_4c[4];
    s32 unknown_50;
};
GUEST_OFFSET(UnknownState94fd0c, byte_00, 0);
GUEST_OFFSET(UnknownState94fd0c, request_state, 2);
GUEST_OFFSET(UnknownState94fd0c, request_code, 3);
GUEST_OFFSET(UnknownState94fd0c, request_argument, 4);
GUEST_OFFSET(UnknownState94fd0c, byte_06, 6);
GUEST_OFFSET(UnknownState94fd0c, byte_07, 7);
GUEST_OFFSET(UnknownState94fd0c, byte_0f, 0xf);
GUEST_OFFSET(UnknownState94fd0c, byte_10, 0x10);
GUEST_OFFSET(UnknownState94fd0c, byte_12, 0x12);
GUEST_OFFSET(UnknownState94fd0c, pocket_slot_19, 0x19);
GUEST_OFFSET(UnknownState94fd0c, byte_1e, 0x1e);
GUEST_OFFSET(UnknownState94fd0c, mode, 0x1f);
GUEST_OFFSET(UnknownState94fd0c, value_2c, 0x2c);
GUEST_OFFSET(UnknownState94fd0c, unknown_30, 0x30);
GUEST_OFFSET(UnknownState94fd0c, value_38, 0x38);
GUEST_OFFSET(UnknownState94fd0c, value_40, 0x40);
GUEST_OFFSET(UnknownState94fd0c, pocket_slot_44, 0x44);
GUEST_OFFSET(UnknownState94fd0c, value_48, 0x48);
GUEST_OFFSET(UnknownState94fd0c, unknown_50, 0x50);

inline guest::global<UnknownState94fd0c, 0x0094fd0c> state_94fd0c;
