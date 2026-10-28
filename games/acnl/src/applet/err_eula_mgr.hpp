// applet::ErrEulaMgr: a singleton of the system applets code (error / EULA). Only the fields the rewritten code
// touches are named so far.
#pragma once

#include "guest/guest.hpp"

struct ErrEulaMgr {
    static constexpr u32 SIZE = 0xfb4;
    static constexpr u8 INITIAL_STATE = 2;
    static constexpr u8 INITIAL_BYTE_24 = 0x3f;

    u8 unknown_00[0x10];                       // the sead::IDisposer base
    u8 state;
    u8 unknown_11[3];
    guest::MemberFunctionPointer callback_14;  // null function and even adjust: none
    guest::MemberFunctionPointer callback_1c;
    u8 byte_24;
    u8 unknown_25[0xfa8 - 0x25];
    u16 unknown_fa8;
    u8 unknown_faa;
    u8 byte_fab;
    u8 byte_fac;
    u8 byte_fad;
    u8 byte_fae;
    u8 unknown_faf;
    u8 byte_fb0;
    u8 unknown_fb1[3];

    bool is_idle_with_byte_fac() const;
    void reset();
};
GUEST_OFFSET(ErrEulaMgr, state, 0x10);
GUEST_OFFSET(ErrEulaMgr, callback_14, 0x14);
GUEST_OFFSET(ErrEulaMgr, callback_1c, 0x1c);
GUEST_OFFSET(ErrEulaMgr, byte_24, 0x24);
GUEST_OFFSET(ErrEulaMgr, unknown_fa8, 0xfa8);
GUEST_OFFSET(ErrEulaMgr, byte_fac, 0xfac);
GUEST_OFFSET(ErrEulaMgr, byte_fb0, 0xfb0);
GUEST_SIZE(ErrEulaMgr, 0xfb4);

struct ErrEulaGlobals {
    guest::gptr<ErrEulaMgr> instance;
    guest::gptr<void> disposer;
};
inline guest::global<ErrEulaGlobals, 0x0094e3c8> err_eula_globals;
