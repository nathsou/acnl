// BsMiniGame1Mgr: the manager of ModuleMiniGame1. Only the fields the rewritten code touches are named.
#pragma once

#include "guest/guest.hpp"

struct BsMiniGame1Mgr {
    static constexpr u32 FLAG_8 = 8;  // unknown flag in flags_444

    u32 words_00[8];
    u8 unknown_20[3];
    u8 byte_23;
    u8 byte_24;  // starts at 1
    u8 byte_25;
    u16 halfword_26;
    u32 word_28;
    u32 word_2c;
    u8 unknown_30[4];
    u32 word_34;
    u32 word_38;
    u8 bytes_3c[8];  // 0x3c-0x43, all start at 0
    u8 unknown_44[0x18];  // a sub-object, constructed by f_403d0558
    guest::gptr<void> pointer_5c;
    u8 unknown_60[0x370 - 0x60];
    u8 unknown_370[0x444 - 0x370];  // a sub-object used by f_403d0560 .. f_403d0578
    u32 flags_444;
    u8 unknown_448[4];

    u32 set_flag_8(u32 enable);
};
GUEST_OFFSET(BsMiniGame1Mgr, byte_23, 0x23);
GUEST_OFFSET(BsMiniGame1Mgr, byte_24, 0x24);
GUEST_OFFSET(BsMiniGame1Mgr, halfword_26, 0x26);
GUEST_OFFSET(BsMiniGame1Mgr, word_28, 0x28);
GUEST_OFFSET(BsMiniGame1Mgr, word_34, 0x34);
GUEST_OFFSET(BsMiniGame1Mgr, bytes_3c, 0x3c);
GUEST_OFFSET(BsMiniGame1Mgr, unknown_44, 0x44);
GUEST_OFFSET(BsMiniGame1Mgr, pointer_5c, 0x5c);
GUEST_OFFSET(BsMiniGame1Mgr, unknown_370, 0x370);
GUEST_OFFSET(BsMiniGame1Mgr, flags_444, 0x444);
GUEST_SIZE(BsMiniGame1Mgr, 0x44c);

// The running manager (set by its constructor).
inline guest::global<guest::gptr<BsMiniGame1Mgr>, 0x4040a0b0> bs_mini_game1_instance;

BsMiniGame1Mgr &construct_bs_mini_game1_mgr(BsMiniGame1Mgr &self);
