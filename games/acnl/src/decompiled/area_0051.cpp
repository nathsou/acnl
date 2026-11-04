// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen. Hexadecimal constants are the original's
// (addresses, offsets, sizes and ids as the game has them).
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00510878: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Shuts the online client down when nothing uses it: releases the service, the shared state at 0x96b930 and the buffer
// (+0x24).
namespace d_00510878 {

struct __attribute__((packed)) OnlineClient {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u8 unknown_18[0x4];  // (not used here)
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 word_24;
    u8 byte_28;
    u8 unknown_29[0xf];  // (not used here)
    u32 word_38;
    u8 unknown_3c[0x4];  // (not used here)
    u8 byte_40;
    u8 byte_41;
};
GUEST_OFFSET(OnlineClient, word_14, 0x14);
GUEST_OFFSET(OnlineClient, word_1c, 0x1c);
GUEST_OFFSET(OnlineClient, word_24, 0x24);
GUEST_OFFSET(OnlineClient, byte_28, 0x28);
GUEST_OFFSET(OnlineClient, word_38, 0x38);
GUEST_OFFSET(OnlineClient, byte_40, 0x40);
GUEST_OFFSET(OnlineClient, byte_41, 0x41);

inline constexpr u32 nex_thread_callback_b_address = 0x0096b930u;
inline guest::global<u32, 0x0096b92c> nex_thread_callback_a;
inline guest::global<u32, 0x0096b930> nex_thread_callback_b;
inline constexpr guest::Function<0x002ffb64, u32(u32)> free_memory;
inline constexpr guest::Function<0x00377160, u32(u32)> Nex__shutdown_threads;
inline constexpr guest::Function<0x00489ec8, u32(u32)> Pia__finalize;
inline constexpr guest::Function<0x0050cd1c, u32(u32)> SharedService__release;
inline constexpr guest::Function<0x00515d1c, u32(u32, u32, u32, u32)> NetGame__release_client;

void OnlineClient__shutdown(gptr<OnlineClient> online_client) {
    NetGame__release_client(online_client.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (online_client->word_14 == 0) {
        u32 r0_1 = online_client->word_38;
        if (r0_1 == 0) {
            SharedService__release(Pia__finalize(r0_1));
            online_client->byte_40 = 0;
            online_client->byte_41 = 0;
        }
        if (online_client->byte_40 == 0) {
            *nex_thread_callback_a = 0;
            *nex_thread_callback_b = 0;
            Nex__shutdown_threads(nex_thread_callback_b_address);
            online_client->byte_28 = 0;
            u32 r0_3 = online_client->word_24;
            if (r0_3 != 0) {
                free_memory(r0_3);
                online_client->word_24 = 0;
            }
            online_client->word_1c = 0;
        }
    }
}

}  // namespace d_00510878
GUEST_EXPORT_FRAMED(0x00510878, d_00510878::OnlineClient__shutdown, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00510b68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Logs out of the online service (waiting for the call to finish), then resets the session's state and timeouts.
namespace d_00510b68 {

inline constexpr u32 online_facade_address = 0x00974a64u;
inline constexpr guest::Function<0x0044acbc, u32(u32, u32)> OnlineFacade__update;
inline constexpr guest::Function<0x0044badc, u32(u32, u32)> Pia__wait;
inline constexpr guest::Function<0x0044c1ac, u32(u32, u32)> store_word_constant_pack_0x60;
inline constexpr guest::Function<0x0044c1ec, u32(u32)> OnlineSession__leave_gathering;
inline constexpr guest::Function<0x004ddc34, u32(u32)> Online__local_station;
inline constexpr guest::Function<0x0073394c, u32(u32, u32, u32, u32)> NexConnection__status_b;
inline constexpr guest::Function<0x00733a8c, u32(u32)> NexSession__set_state_5;
inline constexpr guest::Function<0x00733ae4, u32(u32, u32)> NexSession__is_state_5;
inline constexpr guest::Function<0x00733e00, u32(u32, u32)> NexConnection__status;

void OnlineSession__logout(u32 online_session, u32 r1) {
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 res_2 = 0;
    u32 r4 = online_session;
    u32 r5 = online_facade_address;
    u32 r0_2 = NexConnection__status_b(*gptr<u32>(r5), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 res_1 = r0_2 & 0x80000000u;
    u32 r6 = 0u;
    if (s32(res_1) < 0) {
        r1 = 0xd8a14825u;
        if (r0_2 == r1) {
            goto L_510bdc;
        }
    } else {
        u32 r0_4 = NexConnection__status(*gptr<u32>(r5), res_1);
        r1 = guest::cpu()->r[1];
        if (r0_4 == 0) {
            goto L_510bdc;
        }
    }
    r0_5 = *gptr<u32>(r5);
    r0_6 = OnlineFacade__update(r0_5, r1);
    r1 = guest::cpu()->r[1];
    res_2 = r0_6 & 0x80000000u;
    if (s32(res_2) >= 0) {
L_510bc0:;
        u32 r0_8 = NexSession__is_state_5(*gptr<u32>(r5), r1);
        if (r0_8 == 0) {
            Online__local_station(r0_8);
            r1 = guest::cpu()->r[1];
            guest::preempt();
            goto L_510bc0;
        }
        NexSession__set_state_5(*gptr<u32>(r5));
        r1 = guest::cpu()->r[1];
    }
L_510bdc:;
    store_word_constant_pack_0x60(*gptr<u32>(r5), r1);
    u32 r0_11 = *gptr<u32>(r5);
    if (r0_11 != 0) {
        Pia__wait(r0_11, 0x7d0u);
    }
    *gptr<u8>(r4 + 0x6bu) = u8(r6);
    u32 r0_12 = *gptr<u32>(r5);
    if (r0_12 != 0) {
        OnlineSession__leave_gathering(r0_12);
    }
    *gptr<u8>(r4 + 0x69u) = u8(r6);
    *gptr<u8>(r4 + 0x68u) = u8(r6);
}

}  // namespace d_00510b68
GUEST_EXPORT_FRAMED(0x00510b68, d_00510b68::OnlineSession__logout, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0051139c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Logs into the online service and waits for the result; reports the error (level 3) on failure. True when logged in
// (+0x6b).
namespace d_0051139c {

inline constexpr u32 online_facade_address = 0x00974a64u;
inline constexpr guest::Function<0x0044af48, u32(u32, u32, u32, u32)> OnlineFacade__set_session;
inline constexpr guest::Function<0x0044c1ac, u32(u32, u32, u32, u32)> store_word_constant_pack_0x60;
inline constexpr guest::Function<0x004ddc34, u32(u32)> Online__local_station;
inline constexpr guest::Function<0x0051207c, u32(u32, u32, u32, u32)> check_network_error_level;
inline constexpr guest::Function<0x00733aac, u32(u32)> NexSession__set_state_3;
inline constexpr guest::Function<0x00733b4c, u32(u32, u32, u32, u32)> NexSession__is_state_3;

struct __attribute__((packed)) OnlineSessionLoginFrame {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(OnlineSessionLoginFrame, word_0, 0x0);
GUEST_OFFSET(OnlineSessionLoginFrame, word_4, 0x4);
GUEST_SIZE(OnlineSessionLoginFrame, 0x8);

u32 OnlineSession__login(u32 online_session, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<OnlineSessionLoginFrame> frame;  // the original's stack frame
    u32 r4 = online_session;
    u32 r6 = online_facade_address;
    frame->word_4 = 0xe7e3ffff;
    *gptr<u32>(*gptr<u32>(r6) + 0x60u) = 0x515344;
    u32 r0_2 = OnlineFacade__set_session(*gptr<u32>(r6), r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    frame->word_4 = r0_2;
    u32 r5 = 0u;
    if (s32(r0_2) < 0) {
        store_word_constant_pack_0x60(*gptr<u32>(r6), r1, r2, r3);
    } else {
L_5113ec:;
        u32 r0_5 = NexSession__is_state_3(*gptr<u32>(r6), r1, r2, r3);
        if (r0_5 == 0) {
            Online__local_station(r0_5);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            guest::preempt();
            goto L_5113ec;
        }
        u32 r0_7 = NexSession__set_state_3(*gptr<u32>(r6));
        frame->word_4 = r0_7;
        if (s32(r0_7) >= 0) {
            *gptr<u8>(r4 + 0x6bu) = 1;
            return 1u;
        }
    }
    frame->word_0 = r5;
    check_network_error_level(r4, 3u, frame.at(4).addr(), 0u);
    return 0u;
}

}  // namespace d_0051139c
GUEST_EXPORT_FRAMED(0x0051139c, d_0051139c::OnlineSession__login, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00511468: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Joins the online gathering and waits for the result; reports the error on failure. Marks it joined (+0x6a).
namespace d_00511468 {

inline constexpr u32 online_facade_address = 0x00974a64u;
inline constexpr guest::Function<0x0044b7d8, u32(u32, u32, u32, u32)> OnlineFacade__update_state_b;
inline constexpr guest::Function<0x004ddc34, u32(u32)> Online__local_station;
inline constexpr guest::Function<0x0051207c, u32(u32, u32, u32, u32)> check_network_error_level;
inline constexpr guest::Function<0x00733b84, u32(u32)> NexSession__set_state_6;
inline constexpr guest::Function<0x00733c20, u32(u32, u32, u32, u32)> NexSession__is_state_6;

struct __attribute__((packed)) OnlineSessionJoinFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(OnlineSessionJoinFrame, word_0, 0x0);
GUEST_OFFSET(OnlineSessionJoinFrame, word_4, 0x4);
GUEST_SIZE(OnlineSessionJoinFrame, 0xc);

void OnlineSession__join(u32 online_session, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<OnlineSessionJoinFrame> frame;  // the original's stack frame
    u32 r4 = online_session;
    u32 r5 = online_facade_address;
    u32 r0_2 = OnlineFacade__update_state_b(*gptr<u32>(r5), r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    frame->word_4 = r0_2;
    if (s32(r0_2) >= 0) {
        do {
            u32 r0_4 = NexSession__is_state_6(*gptr<u32>(r5), r1, r2, r3);
            if (r0_4 != 0) {
                u32 r0_6 = NexSession__set_state_6(*gptr<u32>(r5));
                frame->word_4 = r0_6;
                if (s32(r0_6) < 0) {
                    break;
                }
                *gptr<u8>(r4 + 0x6au) = 1;
                return;
            }
            Online__local_station(r0_4);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            guest::preempt();
        } while (1);
    }
    frame->word_0 = 0;
    check_network_error_level(r4, 3u, frame.at(4).addr(), 0u);
}

}  // namespace d_00511468
GUEST_EXPORT_FRAMED(0x00511468, d_00511468::OnlineSession__join, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00511504: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the online state check passes.
namespace d_00511504 {

inline constexpr guest::Function<0x0050ee4c, u32(u32, u32, u32, u32)> NetGame__allocate_heap;

u32 OnlineSession__is_ready(u32 online_session) {
    u32 r0_1 = NetGame__allocate_heap(online_session, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_00511504
GUEST_EXPORT_FRAMED(0x00511504, d_00511504::OnlineSession__is_ready, 0x4010);  // pushes {r4, lr} first, as the original

// f_00511a04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Leaves the online gathering and waits for the result; reports the error on failure.
namespace d_00511a04 {

inline constexpr u32 online_facade_address = 0x00974a64u;
inline constexpr guest::Function<0x0044b868, u32(u32, u32, u32, u32)> OnlineFacade__update_state;
inline constexpr guest::Function<0x004ddc34, u32(u32)> Online__local_station;
inline constexpr guest::Function<0x0051207c, u32(u32, u32, u32, u32)> check_network_error_level;
inline constexpr guest::Function<0x00733bbc, u32(u32)> NexSession__set_state_8;
inline constexpr guest::Function<0x00733c50, u32(u32, u32, u32, u32)> NexSession__is_state_8;

struct __attribute__((packed)) OnlineSessionLeaveFrame {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(OnlineSessionLeaveFrame, word_0, 0x0);
GUEST_OFFSET(OnlineSessionLeaveFrame, word_4, 0x4);
GUEST_SIZE(OnlineSessionLeaveFrame, 0x8);

void OnlineSession__leave(u32 online_session, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<OnlineSessionLeaveFrame> frame;  // the original's stack frame
    u32 r4 = online_session;
    u32 r5 = online_facade_address;
    u32 r0_2 = OnlineFacade__update_state(*gptr<u32>(r5), r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    frame->word_4 = r0_2;
    u32 r6 = 0u;
    if (s32(r0_2) >= 0) {
L_511a2c:;
        u32 r0_4 = NexSession__is_state_8(*gptr<u32>(r5), r1, r2, r3);
        if (r0_4 == 0) {
            Online__local_station(r0_4);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            guest::preempt();
            goto L_511a2c;
        }
        u32 r0_6 = NexSession__set_state_8(*gptr<u32>(r5));
        frame->word_4 = r0_6;
        if (s32(r0_6) >= 0) {
            *gptr<u8>(r4 + 0x6au) = u8(r6);
            return;
        }
    }
    frame->word_0 = r6;
    check_network_error_level(r4, 3u, frame.at(4).addr(), 0u);
}

}  // namespace d_00511a04
GUEST_EXPORT_FRAMED(0x00511a04, d_00511a04::OnlineSession__leave, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0051207c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Maps the level from 00413478 (0 -> 0, 1/2 -> 1, else 3) and keeps the requested one when they differ.
namespace d_0051207c {

inline constexpr u32 pia_local_state_address = 0x00974a58u;
inline guest::global<u32, 0x00974a58> pia_local_state;
inline constexpr guest::Function<0x004133a0, u32(u32)> PiaResult__is_retryable;
inline constexpr guest::Function<0x00413478, u32(u32, u32, u32, u32)> PiaResult__is_network_error;
inline constexpr guest::Function<0x004137d8, u32(u32)> PiaResult__to_error;
inline constexpr guest::Function<0x0072f380, u32(u32)> NexClient__is_connected;
inline constexpr guest::Function<0x0072f3a4, u32(u32)> NexClient__is_logged_in;

void check_network_error_level(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0_5 = 0;
    u32 r0_1 = PiaResult__is_network_error(r2, r1, r2, guest::cpu()->r[3]);
    u32 r4_1 = r0_1 == 0 ? 0u : (r0_1 == 1u || r0_1 == 2u) ? 1u : 3u;
    if (r4_1 != r1) {
        r4_1 = r1;
    }
    u32 r0_2 = PiaResult__is_retryable(r2);
    if (r0_2 != 3u && r0_2 != 0) {
        u32 r5_1 = *pia_local_state;
        if (r5_1 == 0) {
            goto L_51210c;
        }
        if (NexClient__is_connected(r5_1) == 0) {
            if (NexClient__is_logged_in(r5_1) == 0) {
                goto L_51210c;
            }
        }
    }
    r0_5 = 0u;
    goto L_512114;
L_51210c:;
    r0_5 = PiaResult__to_error(r2);
L_512114:;
    u32 r2_4 = *gptr<u32>(r0 + 0x54u);
    if (r2_4 != 0) {
        frame.release();
        guest::call_address<u32>(r2_4, r4_1, r0_5, r2_4, guest::cpu()->r[3]);
        return;
    }
    guest::cpu()->r[1] = r0_5;
}

}  // namespace d_0051207c
GUEST_EXPORT(0x0051207c, d_0051207c::check_network_error_level);

// f_005122a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Connects to the online service with the game's server key and credentials, then logs in and opens the gathering.
namespace d_005122a8 {

struct __attribute__((packed)) Object_005122a8_0 {
    u8 unknown_0[0x68];  // (not used here)
    u8 byte_68;
    u8 byte_69;
    u8 byte_6a;
};
GUEST_OFFSET(Object_005122a8_0, byte_68, 0x68);
GUEST_OFFSET(Object_005122a8_0, byte_69, 0x69);
GUEST_OFFSET(Object_005122a8_0, byte_6a, 0x6a);

struct __attribute__((packed)) Local_005122a8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u32 word_30;
    u32 word_34;
};
GUEST_OFFSET(Local_005122a8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005122a8_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_005122a8_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_005122a8_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_005122a8_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_005122a8_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_005122a8_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_005122a8_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_005122a8_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_005122a8_ea_1, word_24, 0x24);
GUEST_OFFSET(Local_005122a8_ea_1, word_28, 0x28);
GUEST_OFFSET(Local_005122a8_ea_1, word_2c, 0x2c);
GUEST_OFFSET(Local_005122a8_ea_1, word_30, 0x30);
GUEST_OFFSET(Local_005122a8_ea_1, word_34, 0x34);

struct __attribute__((packed)) Local_005122a8_ea_7 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005122a8_ea_7, word_0, 0x0);
GUEST_OFFSET(Local_005122a8_ea_7, word_4, 0x4);

struct __attribute__((packed)) Local_005122a8_ea_8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 word_24;
};
GUEST_OFFSET(Local_005122a8_ea_8, word_0, 0x0);
GUEST_OFFSET(Local_005122a8_ea_8, word_4, 0x4);
GUEST_OFFSET(Local_005122a8_ea_8, word_8, 0x8);
GUEST_OFFSET(Local_005122a8_ea_8, word_c, 0xc);
GUEST_OFFSET(Local_005122a8_ea_8, word_10, 0x10);
GUEST_OFFSET(Local_005122a8_ea_8, word_14, 0x14);
GUEST_OFFSET(Local_005122a8_ea_8, word_18, 0x18);
GUEST_OFFSET(Local_005122a8_ea_8, word_1c, 0x1c);
GUEST_OFFSET(Local_005122a8_ea_8, word_24, 0x24);

struct __attribute__((packed)) Local_005122a8_ea_9 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 word_24;
};
GUEST_OFFSET(Local_005122a8_ea_9, word_0, 0x0);
GUEST_OFFSET(Local_005122a8_ea_9, word_4, 0x4);
GUEST_OFFSET(Local_005122a8_ea_9, word_8, 0x8);
GUEST_OFFSET(Local_005122a8_ea_9, word_c, 0xc);
GUEST_OFFSET(Local_005122a8_ea_9, word_10, 0x10);
GUEST_OFFSET(Local_005122a8_ea_9, word_14, 0x14);
GUEST_OFFSET(Local_005122a8_ea_9, word_18, 0x18);
GUEST_OFFSET(Local_005122a8_ea_9, word_1c, 0x1c);
GUEST_OFFSET(Local_005122a8_ea_9, word_24, 0x24);

inline constexpr u32 pia_local_state_address = 0x00974a58u;
inline constexpr u32 online_facade_address = 0x00974a64u;
inline guest::global<u32, 0x00974a58> pia_local_state;
inline guest::global<u32, 0x00974a64> online_facade;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x00301444, u32(u32, u32)> clear;
inline constexpr guest::Function<0x0041f11c, u32(u32, u32)> nn__pia__local__UdsCreateSessionSetting__virtual_3;
inline constexpr guest::Function<0x0041f184, u32(u32)> nn__pia__local__UdsCreateSessionSetting__UdsCreateSessionSetting;
inline constexpr guest::Function<0x0041fc80, u32(u32, u32, u32)> call_0041fc80;
inline constexpr guest::Function<0x0041fd0c, u32(u32)> nn__pia__local__UdsCreateSessionSetting__destructor;
inline constexpr guest::Function<0x0044c1ec, u32(u32)> OnlineSession__leave_gathering;
inline constexpr guest::Function<0x0051139c, u32(u32, u32)> OnlineSession__login;
inline constexpr guest::Function<0x0051207c, u32(u32, u32, u32, u32)> check_network_error_level;
inline constexpr guest::Function<0x005124b8, u32(u32, u32, u32, u32)> OnlineSession__create_gathering;
inline constexpr guest::Function<0x0072f038, u32(u32)> call_virtual_1a_72f038;
inline constexpr guest::Function<0x0072f26c, u32(u32, u32, u32)> call_virtual_c_72f26c;
inline constexpr guest::Function<0x0072f300, u32(u32)> call_virtual_15_72f300;

struct __attribute__((packed)) Frame_005122a8 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x6];  // (not read or written by name)
    u16 half_e;
    u8 unknown_10[0x200];  // (not read or written by name)
    u8 byte_210;
    u8 byte_211;
    u8 unknown_212[0x2];  // (not read or written by name)
    u32 word_214;
    u8 unknown_218[0x100];  // (not read or written by name)
    u32 word_318;
    u8 byte_31c;
    u8 unknown_31d[0xcb];  // (not read or written by name)
    u32 word_3e8;
    u8 unknown_3ec[0x4];  // (not read or written by name)
    u8 byte_3f0;
    u8 unknown_3f1[0x3];  // (not read or written by name)
    u32 word_3f4;
    u8 byte_3f8;
    u8 unknown_3f9[0x3];  // (not read or written by name)
    u32 word_3fc;
    u8 unknown_400[0x8];  // (not read or written by name)
    u32 word_408;
    u32 word_40c;
    u8 byte_410;
    u8 unknown_411[0x3];  // (not read or written by name)
    u32 word_414;
    u8 unknown_418[0x10];  // (not read or written by name)
    u32 word_428;
    u8 unknown_42c[0x2c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005122a8, word_0, 0x0);
GUEST_OFFSET(Frame_005122a8, word_4, 0x4);
GUEST_OFFSET(Frame_005122a8, half_e, 0xe);
GUEST_OFFSET(Frame_005122a8, byte_210, 0x210);
GUEST_OFFSET(Frame_005122a8, byte_211, 0x211);
GUEST_OFFSET(Frame_005122a8, word_214, 0x214);
GUEST_OFFSET(Frame_005122a8, word_318, 0x318);
GUEST_OFFSET(Frame_005122a8, byte_31c, 0x31c);
GUEST_OFFSET(Frame_005122a8, word_3e8, 0x3e8);
GUEST_OFFSET(Frame_005122a8, byte_3f0, 0x3f0);
GUEST_OFFSET(Frame_005122a8, word_3f4, 0x3f4);
GUEST_OFFSET(Frame_005122a8, byte_3f8, 0x3f8);
GUEST_OFFSET(Frame_005122a8, word_3fc, 0x3fc);
GUEST_OFFSET(Frame_005122a8, word_408, 0x408);
GUEST_OFFSET(Frame_005122a8, word_40c, 0x40c);
GUEST_OFFSET(Frame_005122a8, byte_410, 0x410);
GUEST_OFFSET(Frame_005122a8, word_414, 0x414);
GUEST_OFFSET(Frame_005122a8, word_428, 0x428);
GUEST_SIZE(Frame_005122a8, 0x458);

u32 OnlineSession__connect(gptr<Object_005122a8_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005122a8> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r12 = guest::cpu()->r[12];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_6 = 0;
    gptr<Local_005122a8_ea_1> ea_1 = gptr<Local_005122a8_ea_1>(frame.at(0x420).addr());
    ea_1->word_0 = arg0.addr();
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    ea_1->word_10 = r4;
    ea_1->word_14 = r5;
    ea_1->word_18 = r6;
    ea_1->word_1c = r7;
    ea_1->word_20 = r8;
    ea_1->word_24 = r9;
    ea_1->word_28 = r10;
    ea_1->word_2c = r11;
    ea_1->word_30 = r12;
    ea_1->word_34 = r14;
    frame->byte_3f0 = 1;
    frame->word_3f4 = 0;
    frame->byte_3f8 = 0;
    frame->word_3fc = 0x2710;
    frame->word_408 = 0;
    gptr<Local_005122a8_ea_7> ea_7 = gptr<Local_005122a8_ea_7>(frame.at(0x400).addr());
    ea_7->word_0 = 0x3e8;
    ea_7->word_4 = ~0u;
    u32 r2_1 = frame.at(0x3f0).addr();
    frame->word_40c = 0x3e8;
    frame->byte_410 = 0;
    frame->word_414 = 0;
    u32 r0_1 = OnlineSession__create_gathering(arg0.addr(), r2_1, r2_1, 0x2710u);
    frame->word_4 = r0_1;
    if (s32(r0_1) < 0) {
        u32 r0_2 = *online_facade;
        if (r0_2 != 0) {
            OnlineSession__leave_gathering(r0_2);
        }
        arg0->byte_69 = 0;
        arg0->byte_68 = 0;
        frame->word_0 = 0;
        check_network_error_level(arg0.addr(), 3u, frame.at(4).addr(), 0u);
    } else {
        frame->word_214 = 0;
        u32 r9_1 = frame.at(0x210).addr();
        frame->word_318 = 0;
        frame->word_3e8 = 0;
        clear_aligned(frame.at(0x218).addr(), 0xffu);
        u32 r0_4 = frame.at(0x31d).addr();
        frame->word_0 = r0_4;
        clear(r0_4, 0xc8u);
        frame->byte_210 = u8(r1 + 8u);
        frame->byte_31c = 0xb;
        frame->byte_211 = 4;
        if (r1 == 0) {
            r0_6 = call_virtual_c_72f26c(*pia_local_state, 0x198du, 0u);
        } else {
            r0_6 = call_virtual_c_72f26c(*pia_local_state, 0x198eu, 0u);
        }
        frame->word_214 = r0_6;
        copy_bytes_at_any_alignment(r9_1 + 8u, 0x87be2fu, 0x21u);
        frame->word_318 = 0x21;
        if (call_virtual_15_72f300(*pia_local_state) >= r3) {
            copy_bytes_at_any_alignment(frame->word_0, frame->word_428, r3);
            frame->word_3e8 = r3;
        }
        u32 r5_1 = frame.at(8).addr();
        nn__pia__local__UdsCreateSessionSetting__UdsCreateSessionSetting(r5_1);
        nn__pia__local__UdsCreateSessionSetting__virtual_3(r5_1, r9_1);
        frame->half_e = 4;
        call_0041fc80(r5_1, 0x87be50u, 0x14u);
        if (OnlineSession__login(arg0.addr(), r5_1) != 0) {
            arg0->byte_6a = 1;
            u32 r0_13 = *pia_local_state;
            call_virtual_1a_72f038(r0_13);
            nn__pia__local__UdsCreateSessionSetting__destructor(r0_13);
            gptr<Local_005122a8_ea_8> ea_8 = gptr<Local_005122a8_ea_8>(frame.at(0x430).addr());
            u32 r4_1 = ea_8->word_0;
            u32 r5_2 = ea_8->word_4;
            u32 r6_1 = ea_8->word_8;
            u32 r7_1 = ea_8->word_c;
            u32 r8_1 = ea_8->word_10;
            u32 r9_2 = ea_8->word_14;
            u32 r10_1 = ea_8->word_18;
            u32 r11_1 = ea_8->word_1c;
            guest::cpu()->r[4] = r4_1;
            guest::cpu()->r[5] = r5_2;
            guest::cpu()->r[6] = r6_1;
            guest::cpu()->r[7] = r7_1;
            guest::cpu()->r[8] = r8_1;
            guest::cpu()->r[9] = r9_2;
            guest::cpu()->r[10] = r10_1;
            guest::cpu()->r[11] = r11_1;
            return 0u;
        }
        u32 r0_14 = *online_facade;
        if (r0_14 != 0) {
            OnlineSession__leave_gathering(r0_14);
        }
        arg0->byte_69 = 0;
        arg0->byte_68 = 0;
        nn__pia__local__UdsCreateSessionSetting__destructor(r0_14);
    }
    gptr<Local_005122a8_ea_9> ea_9 = gptr<Local_005122a8_ea_9>(frame.at(0x430).addr());
    u32 r4_2 = ea_9->word_0;
    u32 r5_3 = ea_9->word_4;
    u32 r6_2 = ea_9->word_8;
    u32 r7_2 = ea_9->word_c;
    u32 r8_2 = ea_9->word_10;
    u32 r9_3 = ea_9->word_14;
    u32 r10_2 = ea_9->word_18;
    u32 r11_2 = ea_9->word_1c;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_3;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_2;
    guest::cpu()->r[9] = r9_3;
    guest::cpu()->r[10] = r10_2;
    guest::cpu()->r[11] = r11_2;
    return 0x80000006u;
}

}  // namespace d_005122a8
GUEST_EXPORT(0x005122a8, d_005122a8::OnlineSession__connect);

// f_005124b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the online gathering (its name, timeouts of 30000 and 2000 ms, and its parameters) once; marks it created
// (+0x69).
namespace d_005124b8 {

struct __attribute__((packed)) OnlineSession {
    u8 unknown_0[0x69];  // (not used here)
    u8 byte_69;
    u8 unknown_6a[0x2];  // (not used here)
    float float_6c;
    float float_70;
    float float_74;
    float float_78;
    float float_7c;
    float float_80;
    float float_84;
    float float_88;
};
GUEST_OFFSET(OnlineSession, byte_69, 0x69);
GUEST_OFFSET(OnlineSession, float_6c, 0x6c);
GUEST_OFFSET(OnlineSession, float_70, 0x70);
GUEST_OFFSET(OnlineSession, float_74, 0x74);
GUEST_OFFSET(OnlineSession, float_78, 0x78);
GUEST_OFFSET(OnlineSession, float_7c, 0x7c);
GUEST_OFFSET(OnlineSession, float_80, 0x80);
GUEST_OFFSET(OnlineSession, float_84, 0x84);
GUEST_OFFSET(OnlineSession, float_88, 0x88);

struct __attribute__((packed)) OnlineSessionCreateGatheringArg1 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x4];  // (not used here)
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x10];  // (not used here)
    u32 word_24;
};
GUEST_OFFSET(OnlineSessionCreateGatheringArg1, byte_0, 0x0);
GUEST_OFFSET(OnlineSessionCreateGatheringArg1, word_4, 0x4);
GUEST_OFFSET(OnlineSessionCreateGatheringArg1, word_c, 0xc);
GUEST_OFFSET(OnlineSessionCreateGatheringArg1, word_10, 0x10);
GUEST_OFFSET(OnlineSessionCreateGatheringArg1, word_24, 0x24);

struct __attribute__((packed)) Local_005124b8_ea_1 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
    float float_18;
    float float_1c;
};
GUEST_OFFSET(Local_005124b8_ea_1, float_0, 0x0);
GUEST_OFFSET(Local_005124b8_ea_1, float_4, 0x4);
GUEST_OFFSET(Local_005124b8_ea_1, float_8, 0x8);
GUEST_OFFSET(Local_005124b8_ea_1, float_c, 0xc);
GUEST_OFFSET(Local_005124b8_ea_1, float_10, 0x10);
GUEST_OFFSET(Local_005124b8_ea_1, float_14, 0x14);
GUEST_OFFSET(Local_005124b8_ea_1, float_18, 0x18);
GUEST_OFFSET(Local_005124b8_ea_1, float_1c, 0x1c);

inline constexpr u32 online_facade_address = 0x00974a64u;
inline guest::global<u32, 0x00974a64> online_facade;
inline constexpr guest::Function<0x003081b4, u32(u32, u32, u32, u32)> copy_8_bytes;
inline constexpr guest::Function<0x0044c5e8, u32(u32, u32)> OnlineFacade__start_matchmake;

struct __attribute__((packed)) OnlineSessionCreateGatheringFrame {
    u8 unknown_0[0x22];  // (not read or written by name)
    u8 byte_22;
    u8 byte_23;
    u8 unknown_24[0x28];  // (not read or written by name)
};
GUEST_OFFSET(OnlineSessionCreateGatheringFrame, byte_22, 0x22);
GUEST_OFFSET(OnlineSessionCreateGatheringFrame, byte_23, 0x23);
GUEST_SIZE(OnlineSessionCreateGatheringFrame, 0x4c);

u32 OnlineSession__create_gathering(gptr<OnlineSession> online_session, gptr<OnlineSessionCreateGatheringArg1> arg1, float S0, float S1) {
    guest::StackFrameOf<OnlineSessionCreateGatheringFrame> frame;  // the original's stack frame
    u32 r1 = arg1.addr();
    u32 r0_1 = 0;
    if (online_session->byte_69 != 0) {
        r0_1 = 0u;
    } else {
        float S0_1 = online_session->float_6c;
        float S1_1 = online_session->float_70;
        float S2_1 = online_session->float_74;
        float S3_1 = online_session->float_78;
        float S4_1 = online_session->float_7c;
        float S5_1 = online_session->float_80;
        float S6_1 = online_session->float_84;
        float S7_1 = online_session->float_88;
        u32 r7_1 = frame.at(0).addr();
        gptr<Local_005124b8_ea_1> ea_1 = gptr<Local_005124b8_ea_1>(frame.at(0x28).addr());
        ea_1->float_0 = S0_1;
        ea_1->float_4 = S1_1;
        ea_1->float_8 = S2_1;
        ea_1->float_c = S3_1;
        ea_1->float_10 = S4_1;
        ea_1->float_14 = S5_1;
        ea_1->float_18 = S6_1;
        ea_1->float_1c = S7_1;
        arg1->word_24 = frame.at(0x28).addr();
        arg1->byte_0 = 0;
        arg1->word_c = 0x7530;
        arg1->word_10 = 0x7d0;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        guest::cpu()->s[2] = S2_1;
        guest::cpu()->s[3] = S3_1;
        guest::cpu()->s[4] = S4_1;
        guest::cpu()->s[5] = S5_1;
        guest::cpu()->s[6] = S6_1;
        guest::cpu()->s[7] = S7_1;
        copy_8_bytes(r7_1, 0x512550u, 0x7530u, 0x7d0u);
        frame->byte_22 = 4;
        frame->byte_23 = 0;
        arg1->word_4 = r7_1;
        r0_1 = OnlineFacade__start_matchmake(*online_facade, r1);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r1 = r0_1 & 0x80000000u;
        if (s32(r1) >= 0) {
            r1 = 1u;
            online_session->byte_69 = u8(r1);
        }
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0_1;
}

}  // namespace d_005124b8
GUEST_EXPORT_FRAMED(0x005124b8, d_005124b8::OnlineSession__create_gathering, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00512940: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Logs out and clears the joined flag.
namespace d_00512940 {

struct __attribute__((packed)) OnlineSession {
    u8 unknown_0[0x6a];  // (not used here)
    u8 byte_6a;
};
GUEST_OFFSET(OnlineSession, byte_6a, 0x6a);

inline constexpr guest::Function<0x00510b68, u32(u32, u32, u32, u32)> OnlineSession__logout;

void OnlineSession__close(gptr<OnlineSession> online_session) {
    OnlineSession__logout(online_session.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    online_session->byte_6a = 0;
}

}  // namespace d_00512940
GUEST_EXPORT_FRAMED(0x00512940, d_00512940::OnlineSession__close, 0x4010);  // pushes {r4, lr} first, as the original

// f_00512a98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Searches the online gatherings matching the parameters and waits for the results.
namespace d_00512a98 {

struct __attribute__((packed)) Local_00512a98_r3_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00512a98_r3_1, word_0, 0x0);
GUEST_OFFSET(Local_00512a98_r3_1, word_4, 0x4);
GUEST_OFFSET(Local_00512a98_r3_1, word_8, 0x8);

inline constexpr u32 online_facade_address = 0x00974a64u;
inline constexpr guest::Function<0x0044b700, u32(u32, u32, u32, u32)> OnlineFacade__join;
inline constexpr guest::Function<0x0044c1ac, u32(u32, u32, u32, u32)> store_word_constant_pack_0x60;
inline constexpr guest::Function<0x0044c1ec, u32(u32, u32, u32, u32)> OnlineSession__leave_gathering;
inline constexpr guest::Function<0x004ddc34, u32(u32)> Online__local_station;
inline constexpr guest::Function<0x0051207c, u32(u32, u32, u32, u32)> check_network_error_level;
inline constexpr guest::Function<0x005124b8, u32(u32, u32, u32, u32)> OnlineSession__create_gathering;
inline constexpr guest::Function<0x00733b7c, u32(u32)> NexSession__set_state_1;
inline constexpr guest::Function<0x00733bf0, u32(u32, u32, u32, u32)> NexSession__is_state_1;

struct __attribute__((packed)) OnlineSessionSearchGatheringsFrame {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 unknown_9[0x3];  // (not read or written by name)
    u32 word_c;
    u8 byte_10;
    u8 unknown_11[0x3];  // (not read or written by name)
    u32 word_14;
    u8 unknown_18[0xc];  // (not read or written by name)
    u32 word_24;
    u8 byte_28;
    u8 unknown_29[0x3];  // (not read or written by name)
    u32 word_2c;
    u8 unknown_30[0x4];  // (not read or written by name)
};
GUEST_OFFSET(OnlineSessionSearchGatheringsFrame, word_0, 0x0);
GUEST_OFFSET(OnlineSessionSearchGatheringsFrame, word_4, 0x4);
GUEST_OFFSET(OnlineSessionSearchGatheringsFrame, byte_8, 0x8);
GUEST_OFFSET(OnlineSessionSearchGatheringsFrame, word_c, 0xc);
GUEST_OFFSET(OnlineSessionSearchGatheringsFrame, byte_10, 0x10);
GUEST_OFFSET(OnlineSessionSearchGatheringsFrame, word_14, 0x14);
GUEST_OFFSET(OnlineSessionSearchGatheringsFrame, word_24, 0x24);
GUEST_OFFSET(OnlineSessionSearchGatheringsFrame, byte_28, 0x28);
GUEST_OFFSET(OnlineSessionSearchGatheringsFrame, word_2c, 0x2c);
GUEST_SIZE(OnlineSessionSearchGatheringsFrame, 0x34);

u32 OnlineSession__search_gatherings(u32 online_session, u32 r1, u32 r2) {
    guest::StackFrameOf<OnlineSessionSearchGatheringsFrame> frame;  // the original's stack frame
    u32 r3 = 0;
    u32 r2_3 = 0;
    u32 r4 = online_session;
    u32 r8 = 0u;
    u32 r9 = 1u;
    gptr<Local_00512a98_r3_1> r3_1 = gptr<Local_00512a98_r3_1>(frame.at(0x18).addr());
    frame->word_4 = 0xe7e3ffff;
    frame->word_14 = 0x2710;
    u32 r2_1 = ~0u;
    frame->byte_8 = u8(r9);
    frame->word_c = r8;
    frame->byte_10 = u8(r8);
    r3_1->word_0 = 0x3e8;
    r3_1->word_4 = r2_1;
    r3_1->word_8 = r8;
    frame->word_24 = 0x3e8;
    frame->byte_28 = u8(r8);
    frame->word_2c = r8;
    u32 r0_1 = OnlineSession__create_gathering(r4, frame.at(8).addr(), r2_1, r3_1.addr());
    u32 r7 = online_facade_address;
    frame->word_4 = r0_1;
    if (s32(r0_1) >= 0) {
        *gptr<u32>(*gptr<u32>(r7) + 0x60u) = 0x515344;
        u32 r0_3 = OnlineFacade__join(*gptr<u32>(r7), r1, r2, 1u);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        frame->word_4 = r0_3;
        if (s32(r0_3) < 0) {
            store_word_constant_pack_0x60(*gptr<u32>(r7), r1, r2, r3);
            frame->word_0 = r8;
            check_network_error_level(r4, 3u, frame.at(4).addr(), 0u);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            online_session = *gptr<u32>(r7);
            if (online_session == 0) {
                *gptr<u8>(r4 + 0x69u) = u8(r8);
                *gptr<u8>(r4 + 0x68u) = u8(r8);
                return 0u;
            }
            goto L_512b2c;
        }
        goto L_512b9c;
    }
    r2_3 = frame.at(4).addr();
    frame->word_0 = r8;
    check_network_error_level(r4, 3u, r2_3, 0u);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    online_session = *gptr<u32>(r7);
    if (online_session == 0) {
        *gptr<u8>(r4 + 0x69u) = u8(r8);
        *gptr<u8>(r4 + 0x68u) = u8(r8);
        return 0u;
    }
L_512b2c:;
    OnlineSession__leave_gathering(online_session, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r4 + 0x69u) = u8(r8);
    *gptr<u8>(r4 + 0x68u) = u8(r8);
    return 0u;
L_512b9c:;
    u32 r0_6 = NexSession__is_state_1(*gptr<u32>(r7), r1, r2, r3);
    if (r0_6 == 0) {
        Online__local_station(r0_6);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::preempt();
        goto L_512b9c;
    }
    u32 r0_8 = NexSession__set_state_1(*gptr<u32>(r7));
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0_8 & 0x80000000u;
    frame->word_4 = r0_8;
    if (s32(r1) >= 0) {
        *gptr<u8>(r4 + 0x6bu) = u8(r9);
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    r1 = 0xd8a148e5u;
    u32 zf_1 = r0_8 == r1;
    if (!zf_1) {
        r1 += 0xeu;
        zf_1 = r0_8 == r1;
    }
    if (!zf_1) {
        r1 = 0xd8a148e0u;
        zf_1 = r0_8 == r1;
    }
    if (!zf_1) {
        if (r0_8 != 0xe0e14826u && r0_8 != 0xe0a14827u && r0_8 != 0xd8a14825u && r0_8 != 0xd8a148f7u) {
            r1 = 0xf8a148c4u;
            u32 zf_2 = r0_8 == r1;
            if (!zf_2) {
                r1 = 0xd8a14903u;
                zf_2 = r0_8 == r1;
            }
            if (!zf_2) {
                goto L_512c40;
            }
        }
        frame->word_0 = r8;
        check_network_error_level(r4, 3u, frame.at(4).addr(), 0u);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
L_512c40:;
    online_session = *gptr<u32>(r7);
    if (online_session != 0) {
        guest::preempt();
        goto L_512b2c;
    }
    *gptr<u8>(r4 + 0x69u) = u8(r8);
    *gptr<u8>(r4 + 0x68u) = u8(r8);
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00512a98
GUEST_EXPORT_FRAMED(0x00512a98, d_00512a98::OnlineSession__search_gatherings, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_00512d88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a station address from a session: its station and friend profile.
namespace d_00512d88 {

struct __attribute__((packed)) NnPiaCommonStationAddressStationAddress00512d88Arg3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(NnPiaCommonStationAddressStationAddress00512d88Arg3, word_0, 0x0);
GUEST_OFFSET(NnPiaCommonStationAddressStationAddress00512d88Arg3, word_4, 0x4);

struct __attribute__((packed)) Local_00512d88_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00512d88_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00512d88_ea_1, word_4, 0x4);

inline constexpr u32 vtable_nn__pia__common__StationAddress = 0x00900484u;
inline constexpr u32 pia_local_state_address = 0x00974a58u;
inline constexpr u32 pia_session_station_list_address = 0x00974a6cu;
inline guest::global<u32, 0x00974a58> pia_local_state;
inline guest::global<u32, 0x00974a6c> pia_session_station_list;
inline constexpr guest::Function<0x00426900, u32(u32, u32, u32, u32)> nn__pia__common__StationAddress__StationAddress_00426900;
inline constexpr guest::Function<0x0048a908, u32(u32, u32, u32)> Friends__get_profile;
inline constexpr guest::Function<0x0072ef34, u32(u32, u32, u32)> NexClient__call_method;
inline constexpr guest::Function<0x007344dc, u32(u32, u32, u32, u32)> PiaSession__station_of;

struct __attribute__((packed)) NnPiaCommonStationAddressStationAddress00512d88Frame {
    u8 byte_0;
    u8 unknown_1[0x27];  // (not read or written by name)
    u32 object_28_vtable;
    u8 unknown_2c[0x1c];  // (not read or written by name)
};
GUEST_OFFSET(NnPiaCommonStationAddressStationAddress00512d88Frame, byte_0, 0x0);
GUEST_OFFSET(NnPiaCommonStationAddressStationAddress00512d88Frame, object_28_vtable, 0x28);
GUEST_SIZE(NnPiaCommonStationAddressStationAddress00512d88Frame, 0x48);

void nn__pia__common__StationAddress__StationAddress_00512d88(u32 r0_unused, u32 r1, u32 r2, gptr<NnPiaCommonStationAddressStationAddress00512d88Arg3> arg3) {
    guest::StackFrameOf<NnPiaCommonStationAddressStationAddress00512d88Frame> frame;  // the original's stack frame
    u32 r5_1 = *pia_session_station_list;
    if (r5_1 != 0) {
        nn__pia__common__StationAddress__StationAddress_00426900(frame.at(0x28).addr(), r1, r2, arg3.addr());
        u32 station_2 = PiaSession__station_of(r5_1, frame.at(0x28).addr(), r1, r2);
        r1 = guest::cpu()->r[1];
        if (s32(station_2) >= 0) {
            u32 r0_3 = *pia_local_state;
            if (r0_3 != 0) {
                frame->byte_0 = 0;
                u32 r0_4 = NexClient__call_method(r0_3, frame.at(0).addr(), frame.at(0x28).addr());
                r1 = guest::cpu()->r[1];
                if (s32(r0_4) >= 0) {
                    u32 profile = Friends__get_profile(frame.at(0x40).addr(), frame.at(2).addr(), 1u);
                    r1 = guest::cpu()->r[1];
                    if (s32(profile) >= 0) {
                        gptr<Local_00512d88_ea_1> ea_1 = gptr<Local_00512d88_ea_1>(frame.at(0x40).addr());
                        u32 r1_4 = ea_1->word_4;
                        arg3->word_0 = ea_1->word_0;
                        arg3->word_4 = r1_4;
                        frame->object_28_vtable = vtable_nn__pia__common__StationAddress;
                        guest::cpu()->r[1] = r1_4;
                        return;
                    }
                }
            }
        }
        frame->object_28_vtable = vtable_nn__pia__common__StationAddress;
    }
    arg3->word_0 = 0;
    arg3->word_4 = 0;
    guest::cpu()->r[1] = r1;
}

}  // namespace d_00512d88
GUEST_EXPORT_FRAMED(0x00512d88, d_00512d88::nn__pia__common__StationAddress__StationAddress_00512d88, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00512e64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Reports event 0x66 with the string (when given).
namespace d_00512e64 {

inline constexpr guest::Function<0x003d0cbc, u32(u32, u32, u32, u32)> nn__nex__String__String_003d0cbc;
inline constexpr guest::Function<0x003d0d6c, u32(u32)> nn__nex__String__virtual_0;
inline constexpr guest::Function<0x005148a4, u32(u32, u32, u32, u32)> NetMessenger__post;

struct __attribute__((packed)) OnlineSessionReportString66Frame {
    u32 word_0;
    u8 unknown_4[0xc];  // (not read or written by name)
};
GUEST_OFFSET(OnlineSessionReportString66Frame, word_0, 0x0);
GUEST_SIZE(OnlineSessionReportString66Frame, 0x10);

u32 OnlineSession__report_string_66(u32 online_session, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<OnlineSessionReportString66Frame> frame;  // the original's stack frame
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    frame->word_0 = nn__nex__String__String_003d0cbc(frame.at(8).addr(), r1, r2, r3);
    u32 r0_2 = NetMessenger__post(online_session, 0x66u, 0u, 0u);
    nn__nex__String__virtual_0(frame.at(8).addr());
    return r0_2;
}

}  // namespace d_00512e64
GUEST_EXPORT_FRAMED(0x00512e64, d_00512e64::OnlineSession__report_string_66, 0x4010);  // pushes {r4, lr} first, as the original

// f_005132e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs session search criteria: its game mode, player counts, attributes and openness.
namespace d_005132e8 {

struct __attribute__((packed)) nn__pia__inet__NexSessionSearchCriteriaUnused {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x40];  // (not used here)
    u32 word_60;
};
GUEST_OFFSET(nn__pia__inet__NexSessionSearchCriteriaUnused, word_18, 0x18);
GUEST_OFFSET(nn__pia__inet__NexSessionSearchCriteriaUnused, word_1c, 0x1c);
GUEST_OFFSET(nn__pia__inet__NexSessionSearchCriteriaUnused, word_60, 0x60);

struct __attribute__((packed)) Local_005132e8_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005132e8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005132e8_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_005132e8_r0_1 {
    u32 vtable;
    u8 byte_4;
};
GUEST_OFFSET(Local_005132e8_r0_1, vtable, 0x0);
GUEST_OFFSET(Local_005132e8_r0_1, byte_4, 0x4);

struct __attribute__((packed)) Local_005132e8_r7_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x423];  // (not used here)
    u8 byte_430;
};
GUEST_OFFSET(Local_005132e8_r7_1, word_8, 0x8);
GUEST_OFFSET(Local_005132e8_r7_1, byte_c, 0xc);
GUEST_OFFSET(Local_005132e8_r7_1, byte_430, 0x430);

inline constexpr u32 vtable_nn__pia__inet__NexSessionSearchCriteriaUnused_rec = 0x008ff6bcu;
inline constexpr u32 online_facade_address = 0x00974a64u;
inline constexpr u32 pia_session_station_list_address = 0x00974a6cu;
inline guest::global<u8, 0x00953660> net_match_mode;
inline guest::global<u32, 0x00974a64> online_facade;
inline guest::global<u32, 0x00974a6c> pia_session_station_list;
inline constexpr guest::Function<0x00403828, u32(u32, u32, u32)> set_value_210;
inline constexpr guest::Function<0x00403838, u32(u32, u32, u32, u32)> nn__pia__inet__NexCreateSessionSetting__NexCreateSessionSetting;
inline constexpr guest::Function<0x0040aca8, u32(u32, u32, u32)> NetMatch__set_game_mode;
inline constexpr guest::Function<0x0040acc4, u32(u32, u32, u32)> NetMatch__set_attribute;
inline constexpr guest::Function<0x0040ad14, u32(u32, u32)> NetMatch__set_vacant_only;
inline constexpr guest::Function<0x0040ad30, u32(u32, u32)> NetMatch__set_open;
inline constexpr guest::Function<0x0040ad4c, u32(u32, u32)> NetMatch__set_flag_20;
inline constexpr guest::Function<0x0040ad68, u32(u32, u32)> NetMatch__set_max_players;
inline constexpr guest::Function<0x0040ad88, u32(u32, u32)> NetMatch__set_min_players;
inline constexpr guest::Function<0x0040b620, u32(u32)> nn__pia__inet__NexSessionSearchCriteria__NexSessionSearchCriteria;
inline constexpr guest::Function<0x0044badc, u32(u32, u32)> Pia__wait;
inline constexpr guest::Function<0x0044f0f4, u32(u32, u32, u32)> PiaSession__station_state;
inline constexpr guest::Function<0x0045ee4c, u32(u32, u32)> PiaTransport__send;
inline constexpr guest::Function<0x00512a98, u32(u32, u32, u32)> OnlineSession__search_gatherings;
inline constexpr guest::Function<0x00733cf0, u32(u32)> NexSession__is_current;

struct __attribute__((packed)) NnPiaInetNexSessionSearchCriteriaUnusedNexSessionSearchCriteriaUnusedFrame {
    u8 unknown_0[0x4];  // (not read or written by name)
    u16 half_4;
    u16 half_6;
    u8 unknown_8[0xed8];  // (not read or written by name)
};
GUEST_OFFSET(NnPiaInetNexSessionSearchCriteriaUnusedNexSessionSearchCriteriaUnusedFrame, half_4, 0x4);
GUEST_OFFSET(NnPiaInetNexSessionSearchCriteriaUnusedNexSessionSearchCriteriaUnusedFrame, half_6, 0x6);
GUEST_SIZE(NnPiaInetNexSessionSearchCriteriaUnusedNexSessionSearchCriteriaUnusedFrame, 0xee0);

u32 nn__pia__inet__NexSessionSearchCriteriaUnused__NexSessionSearchCriteriaUnused(gptr<nn__pia__inet__NexSessionSearchCriteriaUnused> nex_session_search_criteria_unused, u32 r1, u32 r2) {
    guest::StackFrameOf<NnPiaInetNexSessionSearchCriteriaUnusedNexSessionSearchCriteriaUnusedFrame> frame;  // the original's stack frame
    u32 online_session = nex_session_search_criteria_unused.addr();
    u32 r0_6 = 0;
    gptr<Local_005132e8_r7_1> r7_1 = gptr<Local_005132e8_r7_1>(frame.at(0).addr());
    nn__pia__inet__NexCreateSessionSetting__NexCreateSessionSetting(r7_1.addr(), r1, r2, guest::cpu()->r[3]);
    frame->half_4 = 1;
    frame->half_6 = 4;
    r7_1->byte_430 = 0;
    set_value_210(r7_1.addr(), 3u, 8u);
    set_value_210(r7_1.addr(), 4u, 2u);
    set_value_210(r7_1.addr(), 5u, nex_session_search_criteria_unused->word_60);
    r7_1->word_8 = 0xbba;
    r7_1->byte_c = 0;
    set_value_210(r7_1.addr(), 1u, r1);
    set_value_210(r7_1.addr(), 3u, 8u | u32(*net_match_mode) << 5);
    set_value_210(r7_1.addr(), 2u, 1u);
    u32 r5_1 = frame.at(0x4c0).addr();
    gptr<Local_005132e8_r0_1> r0_1 = gptr<Local_005132e8_r0_1>(nn__pia__inet__NexSessionSearchCriteria__NexSessionSearchCriteria(r5_1));
    r0_1->vtable = vtable_nn__pia__inet__NexSessionSearchCriteriaUnused_rec;
    r0_1->byte_4 = 2;
    NetMatch__set_game_mode(r5_1, 0xbbau, vtable_nn__pia__inet__NexSessionSearchCriteriaUnused_rec);
    NetMatch__set_min_players(r5_1, 1u);
    NetMatch__set_max_players(r5_1, 4u);
    NetMatch__set_flag_20(r5_1, 0u);
    *gptr<u8>(r5_1 + 0x9d4u) = 0;
    NetMatch__set_vacant_only(r5_1, 1u);
    NetMatch__set_open(r5_1, 1u);
    NetMatch__set_attribute(r5_1, 3u, 8u | u32(*net_match_mode) << 5);
    NetMatch__set_attribute(r5_1, 4u, 2u);
    NetMatch__set_attribute(r5_1, 5u, nex_session_search_criteria_unused->word_60);
    NetMatch__set_attribute(r5_1, 2u, 1u);
    NetMatch__set_attribute(r5_1, 1u, r1);
    if (OnlineSession__search_gatherings(online_session, r7_1.addr(), r5_1) != 0) {
        u32 r0_3 = *online_facade;
        nex_session_search_criteria_unused->word_1c = *gptr<u32>(r0_3 + (u32(*gptr<u8>(r0_3 + 0xb5u)) << 2) + 0xc4u);
        gptr<Local_005132e8_ea_1> ea_1 = gptr<Local_005132e8_ea_1>(r0_3 + 0x7cu);
        PiaTransport__send(PiaSession__station_state(*pia_session_station_list, ea_1->word_0, ea_1->word_4), online_session + 0x20u);
        r0_6 = nex_session_search_criteria_unused->word_18;
        u32 zf_1 = r0_6 == 0;
        if (!zf_1) {
            r0_6 = *online_facade;
            zf_1 = r0_6 == 0;
        }
        if (zf_1) {
            goto L_5134fc;
        }
        r0_6 = NexSession__is_current(r0_6);
        if (r0_6 == 0) {
            goto L_5134fc;
        }
        return 1u;
    }
    return 0u;
L_5134fc:;
    if (*online_facade != 0) {
        Pia__wait(r0_6, 0x1f4u);
    }
    return 1u;
}

}  // namespace d_005132e8
GUEST_EXPORT_FRAMED(0x005132e8, d_005132e8::nn__pia__inet__NexSessionSearchCriteriaUnused__NexSessionSearchCriteriaUnused, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_00513e6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the session's application data (up to 0xb8 bytes).
namespace d_00513e6c {

inline constexpr u32 pia_local_state_address = 0x00974a58u;
inline guest::global<u32, 0x00974a58> pia_local_state;
inline constexpr guest::Function<0x00415b1c, u32(u32, u32, u32, u32)> PiaLocal__setup;

void OnlineSession__set_app_data(u32 r0_unused, u32 r1, u32 r2) {
    if (r1 == 0 || r2 == 0) {
        return;
    }
    if (r2 > 0xb8u) {
        r2 = 0xb8u;
    }
    PiaLocal__setup(*pia_local_state, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_00513e6c
GUEST_EXPORT(0x00513e6c, d_00513e6c::OnlineSession__set_app_data);

// f_00514264: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Joins the session with the setting; maps the service's errors to the game's codes (0x80000001 to 3, else reports it
// and gives 0x80000006).
namespace d_00514264 {

struct __attribute__((packed)) Local_00514264_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00514264_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00514264_ea_1, word_4, 0x4);

inline constexpr u32 online_facade_address = 0x00974a64u;
inline constexpr u32 pia_session_station_list_address = 0x00974a6cu;
inline guest::global<u32, 0x00974a64> online_facade;
inline guest::global<u32, 0x00974a6c> pia_session_station_list;
inline constexpr guest::Function<0x0044badc, u32(u32, u32)> Pia__wait;
inline constexpr guest::Function<0x0044f0f4, u32(u32, u32, u32)> PiaSession__station_state;
inline constexpr guest::Function<0x0045ee4c, u32(u32, u32)> PiaTransport__send;
inline constexpr guest::Function<0x00510738, u32(u32, u32, u32, u32)> NetGame__wait_result;
inline constexpr guest::Function<0x0051207c, u32(u32, u32, u32, u32)> check_network_error_level;

struct __attribute__((packed)) OnlineSessionJoinWithSettingFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(OnlineSessionJoinWithSettingFrame, word_0, 0x0);
GUEST_OFFSET(OnlineSessionJoinWithSettingFrame, word_4, 0x4);
GUEST_SIZE(OnlineSessionJoinWithSettingFrame, 0xc);

u32 OnlineSession__join_with_setting(u32 online_session, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<OnlineSessionJoinWithSettingFrame> frame;  // the original's stack frame
    u32 r0_1 = NetGame__wait_result(online_session, r1, r2, r3);
    frame->word_4 = r0_1;
    if (s32(r0_1) >= 0) {
        gptr<Local_00514264_ea_1> ea_1 = gptr<Local_00514264_ea_1>(*online_facade + 0x7cu);
        PiaTransport__send(PiaSession__station_state(*pia_session_station_list, ea_1->word_0, ea_1->word_4), online_session + 0x20u);
        u32 r0_4 = *online_facade;
        if (r0_4 != 0) {
            Pia__wait(r0_4, 0x1f4u);
        }
        return 0u;
    }
    if (r0_1 == 0xd8a148f4u || r0_1 == 0xd8a148e5u) {
        return 0x80000002u;
    }
    if (r0_1 == 0xd8a148f3u || r0_1 == (0xd8a148f3u | 0xd8a148f3u >> 0x18)) {
        return 0x80000001u;
    }
    if (r0_1 == 0xd8a148e0u) {
        return 0x80000003u;
    }
    frame->word_0 = 0;
    check_network_error_level(online_session, 3u, frame.at(4).addr(), 0u);
    return 0x80000006u;
}

}  // namespace d_00514264
GUEST_EXPORT_FRAMED(0x00514264, d_00514264::OnlineSession__join_with_setting, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0051433c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates a session for up to 4 players with the game's attributes (mode, region, version); true on success.
namespace d_0051433c {

struct __attribute__((packed)) OnlineSession {
    u8 unknown_0[0x60];  // (not used here)
    u32 word_60;
};
GUEST_OFFSET(OnlineSession, word_60, 0x60);

struct __attribute__((packed)) Local_0051433c_r6_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x423];  // (not used here)
    u8 byte_430;
};
GUEST_OFFSET(Local_0051433c_r6_1, word_8, 0x8);
GUEST_OFFSET(Local_0051433c_r6_1, byte_c, 0xc);
GUEST_OFFSET(Local_0051433c_r6_1, byte_430, 0x430);

inline guest::global<u8, 0x00953660> net_match_mode;
inline constexpr guest::Function<0x00403828, u32(u32, u32, u32)> set_value_210;
inline constexpr guest::Function<0x00403838, u32(u32, u32, u32, u32)> nn__pia__inet__NexCreateSessionSetting__NexCreateSessionSetting;
inline constexpr guest::Function<0x00514acc, u32(u32, u32)> OnlineSession__create_and_login;

struct __attribute__((packed)) OnlineSessionCreateSessionFrame {
    u8 unknown_0[0x4];  // (not read or written by name)
    u16 half_4;
    u16 half_6;
    u8 unknown_8[0x4b8];  // (not read or written by name)
};
GUEST_OFFSET(OnlineSessionCreateSessionFrame, half_4, 0x4);
GUEST_OFFSET(OnlineSessionCreateSessionFrame, half_6, 0x6);
GUEST_SIZE(OnlineSessionCreateSessionFrame, 0x4c0);

u32 OnlineSession__create_session(gptr<OnlineSession> online_session, u32 r1, u32 r2) {
    guest::StackFrameOf<OnlineSessionCreateSessionFrame> frame;  // the original's stack frame
    gptr<Local_0051433c_r6_1> r6_1 = gptr<Local_0051433c_r6_1>(frame.at(0).addr());
    nn__pia__inet__NexCreateSessionSetting__NexCreateSessionSetting(r6_1.addr(), r1, r2, guest::cpu()->r[3]);
    frame->half_4 = 1;
    frame->half_6 = 4;
    r6_1->byte_430 = 0;
    set_value_210(r6_1.addr(), 3u, 8u);
    set_value_210(r6_1.addr(), 4u, 2u);
    set_value_210(r6_1.addr(), 5u, online_session->word_60);
    r6_1->word_8 = 0xbba;
    r6_1->byte_c = 0;
    set_value_210(r6_1.addr(), 1u, r1);
    set_value_210(r6_1.addr(), 3u, 8u | u32(*net_match_mode) << 5);
    set_value_210(r6_1.addr(), 2u, 2u);
    return OnlineSession__create_and_login(online_session.addr(), r6_1.addr()) != 0;
}

}  // namespace d_0051433c
GUEST_EXPORT_FRAMED(0x0051433c, d_0051433c::OnlineSession__create_session, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00514524: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Joins the session with the id.
namespace d_00514524 {

struct __attribute__((packed)) OnlineSession {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(OnlineSession, word_1c, 0x1c);

inline constexpr guest::Function<0x00400fd8, u32(u32, u32, u32, u32)> nn__pia__inet__NexJoinSessionSetting__NexJoinSessionSetting;
inline constexpr guest::Function<0x004394b8, u32(u32)> nn__pia__inet__NexJoinSessionSetting__destructor;
inline constexpr guest::Function<0x00514264, u32(u32, u32)> OnlineSession__join_with_setting;

struct __attribute__((packed)) OnlineSessionJoinSessionFrame {
    u8 unknown_0[0x6c];  // (not read or written by name)
    u32 word_6c;
    u8 unknown_70[0x4];  // (not read or written by name)
};
GUEST_OFFSET(OnlineSessionJoinSessionFrame, word_6c, 0x6c);
GUEST_SIZE(OnlineSessionJoinSessionFrame, 0x74);

u32 OnlineSession__join_session(gptr<OnlineSession> online_session, u32 r1) {
    guest::StackFrameOf<OnlineSessionJoinSessionFrame> frame;  // the original's stack frame
    online_session->word_1c = r1;
    nn__pia__inet__NexJoinSessionSetting__NexJoinSessionSetting(frame.at(0).addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    frame->word_6c = r1;
    u32 r0_2 = OnlineSession__join_with_setting(online_session.addr(), frame.at(0).addr());
    nn__pia__inet__NexJoinSessionSetting__destructor(r0_2);
    return r0_2;
}

}  // namespace d_00514524
GUEST_EXPORT_FRAMED(0x00514524, d_00514524::OnlineSession__join_session, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00514acc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the gathering and logs into it, remembering its id and station address; cleans up on failure.
namespace d_00514acc {

struct __attribute__((packed)) Local_00514acc_ea_5 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00514acc_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_00514acc_ea_5, word_4, 0x4);
GUEST_OFFSET(Local_00514acc_ea_5, word_8, 0x8);

struct __attribute__((packed)) Local_00514acc_ea_7 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00514acc_ea_7, word_0, 0x0);
GUEST_OFFSET(Local_00514acc_ea_7, word_4, 0x4);

inline constexpr u32 online_facade_address = 0x00974a64u;
inline constexpr u32 pia_session_station_list_address = 0x00974a6cu;
inline guest::global<u32, 0x00974a64> online_facade;
inline guest::global<u32, 0x00974a6c> pia_session_station_list;
inline constexpr guest::Function<0x0044c1ec, u32(u32)> OnlineSession__leave_gathering;
inline constexpr guest::Function<0x0044f0f4, u32(u32, u32, u32)> PiaSession__station_state;
inline constexpr guest::Function<0x0045ee4c, u32(u32, u32)> PiaTransport__send;
inline constexpr guest::Function<0x0051139c, u32(u32, u32)> OnlineSession__login;
inline constexpr guest::Function<0x0051207c, u32(u32, u32, u32, u32)> check_network_error_level;
inline constexpr guest::Function<0x005124b8, u32(u32, u32, u32, u32)> OnlineSession__create_gathering;

struct __attribute__((packed)) OnlineSessionCreateAndLoginFrame {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 unknown_9[0x3];  // (not read or written by name)
    u32 word_c;
    u8 byte_10;
    u8 unknown_11[0x3];  // (not read or written by name)
    u32 word_14;
    u8 unknown_18[0xc];  // (not read or written by name)
    u32 word_24;
    u8 byte_28;
    u8 unknown_29[0x3];  // (not read or written by name)
    u32 word_2c;
    u8 unknown_30[0x4];  // (not read or written by name)
};
GUEST_OFFSET(OnlineSessionCreateAndLoginFrame, word_0, 0x0);
GUEST_OFFSET(OnlineSessionCreateAndLoginFrame, word_4, 0x4);
GUEST_OFFSET(OnlineSessionCreateAndLoginFrame, byte_8, 0x8);
GUEST_OFFSET(OnlineSessionCreateAndLoginFrame, word_c, 0xc);
GUEST_OFFSET(OnlineSessionCreateAndLoginFrame, byte_10, 0x10);
GUEST_OFFSET(OnlineSessionCreateAndLoginFrame, word_14, 0x14);
GUEST_OFFSET(OnlineSessionCreateAndLoginFrame, word_24, 0x24);
GUEST_OFFSET(OnlineSessionCreateAndLoginFrame, byte_28, 0x28);
GUEST_OFFSET(OnlineSessionCreateAndLoginFrame, word_2c, 0x2c);
GUEST_SIZE(OnlineSessionCreateAndLoginFrame, 0x34);

u32 OnlineSession__create_and_login(u32 online_session, u32 r1) {
    guest::StackFrameOf<OnlineSessionCreateAndLoginFrame> frame;  // the original's stack frame
    u32 r0_3 = 0;
    u32 r2_5 = 0;
    frame->byte_8 = 1;
    u32 r3_1 = ~0u;
    frame->word_c = 0;
    frame->byte_10 = 0;
    frame->word_14 = 0x2710;
    gptr<Local_00514acc_ea_5> ea_5 = gptr<Local_00514acc_ea_5>(frame.at(0x18).addr());
    ea_5->word_0 = 0x3e8;
    ea_5->word_4 = r3_1;
    ea_5->word_8 = 0;
    frame->word_24 = 0x3e8;
    frame->byte_28 = 0;
    frame->word_2c = 0;
    u32 r0_1 = OnlineSession__create_gathering(online_session, frame.at(8).addr(), 0x2710u, r3_1);
    frame->word_4 = r0_1;
    if (s32(r0_1) >= 0) {
        u32 zf_1 = OnlineSession__login(online_session, r1) == 0;
        r0_3 = *online_facade;
        if (!zf_1) {
            *gptr<u32>(online_session + 0x1cu) = *gptr<u32>(r0_3 + (u32(*gptr<u8>(r0_3 + 0xb5u)) << 2) + 0xc4u);
            gptr<Local_00514acc_ea_7> ea_7 = gptr<Local_00514acc_ea_7>(r0_3 + 0x7cu);
            PiaTransport__send(PiaSession__station_state(*pia_session_station_list, ea_7->word_0, ea_7->word_4), online_session + 0x20u);
            return 1u;
        }
        if (r0_3 != 0) {
            goto L_514b54;
        }
        *gptr<u8>(online_session + 0x69u) = 0;
        *gptr<u8>(online_session + 0x68u) = 0;
        return 0u;
    }
    r2_5 = frame.at(4).addr();
    frame->word_0 = 0;
    check_network_error_level(online_session, 3u, r2_5, 0u);
    r0_3 = *online_facade;
    if (r0_3 == 0) {
        *gptr<u8>(online_session + 0x69u) = 0;
        *gptr<u8>(online_session + 0x68u) = 0;
        return 0u;
    }
L_514b54:;
    OnlineSession__leave_gathering(r0_3);
    *gptr<u8>(online_session + 0x69u) = 0;
    *gptr<u8>(online_session + 0x68u) = 0;
    return 0u;
}

}  // namespace d_00514acc
GUEST_EXPORT_FRAMED(0x00514acc, d_00514acc::OnlineSession__create_and_login, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00514c3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Opens the session to participants and waits for the result; reports the error on failure.
namespace d_00514c3c {

inline constexpr u32 online_facade_address = 0x00974a64u;
inline constexpr guest::Function<0x0044b0fc, u32(u32, u32, u32, u32)> OnlineFacade__start_step;
inline constexpr guest::Function<0x004ddc34, u32(u32)> Online__local_station;
inline constexpr guest::Function<0x0051207c, u32(u32, u32, u32, u32)> check_network_error_level;
inline constexpr guest::Function<0x00733b14, u32(u32)> NexSession__set_state_23;
inline constexpr guest::Function<0x00733b8c, u32(u32, u32, u32, u32)> NexSession__is_state_23;

struct __attribute__((packed)) OnlineSessionOpenParticipationFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(OnlineSessionOpenParticipationFrame, word_0, 0x0);
GUEST_OFFSET(OnlineSessionOpenParticipationFrame, word_4, 0x4);
GUEST_SIZE(OnlineSessionOpenParticipationFrame, 0xc);

u32 OnlineSession__open_participation(u32 online_session, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<OnlineSessionOpenParticipationFrame> frame;  // the original's stack frame
    u32 r4 = online_session;
    u32 r5 = online_facade_address;
    u32 r0_2 = OnlineFacade__start_step(*gptr<u32>(r5), 2u, 1u, r3);
    u32 r1 = guest::cpu()->r[1];
    u32 r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    frame->word_4 = r0_2;
    if (s32(r0_2) >= 0) {
L_514c68:;
        u32 r0_4 = NexSession__is_state_23(*gptr<u32>(r5), r1, r2, r3);
        if (r0_4 == 0) {
            Online__local_station(r0_4);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            guest::preempt();
            goto L_514c68;
        }
        u32 r0_6 = NexSession__set_state_23(*gptr<u32>(r5));
        frame->word_4 = r0_6;
        if (s32(r0_6) >= 0) {
            return 1u;
        }
    }
    frame->word_0 = 0;
    check_network_error_level(r4, 3u, frame.at(4).addr(), 0u);
    return 0u;
}

}  // namespace d_00514c3c
GUEST_EXPORT_FRAMED(0x00514c3c, d_00514c3c::OnlineSession__open_participation, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00515148: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Reports the end of the session (event 0x65) when connected, logs out and clears its state.
namespace d_00515148 {

struct __attribute__((packed)) OnlineSession {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u8 unknown_24[0x46];  // (not used here)
    u8 byte_6a;
    u8 unknown_6b[0x23];  // (not used here)
    u16 half_8e;
};
GUEST_OFFSET(OnlineSession, word_18, 0x18);
GUEST_OFFSET(OnlineSession, word_1c, 0x1c);
GUEST_OFFSET(OnlineSession, word_20, 0x20);
GUEST_OFFSET(OnlineSession, byte_6a, 0x6a);
GUEST_OFFSET(OnlineSession, half_8e, 0x8e);

inline constexpr u32 online_facade_address = 0x00974a64u;
inline guest::global<u32, 0x00974a64> online_facade;
inline constexpr guest::Function<0x003d0cbc, u32(u32, u32, u32, u32)> nn__nex__String__String_003d0cbc;
inline constexpr guest::Function<0x003d0d6c, u32(u32)> nn__nex__String__virtual_0;
inline constexpr guest::Function<0x00510b68, u32(u32, u32, u32, u32)> OnlineSession__logout;
inline constexpr guest::Function<0x005148a4, u32(u32, u32, u32, u32)> NetMessenger__post;
inline constexpr guest::Function<0x00733cf0, u32(u32, u32, u32, u32)> NexSession__is_current;

struct __attribute__((packed)) OnlineSessionEndFrame {
    u32 word_0;
    u8 unknown_4[0x10];  // (not read or written by name)
};
GUEST_OFFSET(OnlineSessionEndFrame, word_0, 0x0);
GUEST_SIZE(OnlineSessionEndFrame, 0x14);

void OnlineSession__end(gptr<OnlineSession> online_session, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<OnlineSessionEndFrame> frame;  // the original's stack frame
    if (online_session->word_18 != 0) {
        u32 r0_1 = *online_facade;
        if (r0_1 != 0) {
            u32 r0_2 = NexSession__is_current(r0_1, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_2 != 0) {
                frame->word_0 = nn__nex__String__String_003d0cbc(frame.at(8).addr(), 0x5151d4u, r2, r3);
                NetMessenger__post(online_session.addr(), 0x65u, online_session->word_1c, 0x8020000u);
                nn__nex__String__virtual_0(frame.at(8).addr());
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
            }
        }
    }
    OnlineSession__logout(online_session.addr(), r1, r2, r3);
    online_session->word_20 = 0;
    online_session->byte_6a = 0;
    online_session->half_8e = 0;
    *gptr<u16>(online_session.addr() + 0x28eu) = 0;
}

}  // namespace d_00515148
GUEST_EXPORT_FRAMED(0x00515148, d_00515148::OnlineSession__end, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005152d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the service's timeout to 2000 ms when it exists.
namespace d_005152d4 {

inline guest::global<u32, 0x00974a64> online_facade;
inline constexpr guest::Function<0x0044badc, u32(u32, u32)> Pia__wait;

void OnlineSession__set_default_timeout(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    if (*online_facade == 0) {
        return;
    }
    Pia__wait(r0, 0x7d0u);
    return;
}

}  // namespace d_005152d4
GUEST_EXPORT(0x005152d4, d_005152d4::OnlineSession__set_default_timeout);

// f_005152f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Reports event 0x67 with the string and the two values.
namespace d_005152f4 {

inline constexpr guest::Function<0x003d0cbc, u32(u32, u32, u32, u32)> nn__nex__String__String_003d0cbc;
inline constexpr guest::Function<0x003d0d6c, u32(u32)> nn__nex__String__virtual_0;
inline constexpr guest::Function<0x005148a4, u32(u32, u32, u32, u32)> NetMessenger__post;

struct __attribute__((packed)) OnlineSessionReportString67Frame {
    u32 word_0;
    u8 unknown_4[0xc];  // (not read or written by name)
};
GUEST_OFFSET(OnlineSessionReportString67Frame, word_0, 0x0);
GUEST_SIZE(OnlineSessionReportString67Frame, 0x10);

u32 OnlineSession__report_string_67(u32 online_session, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<OnlineSessionReportString67Frame> frame;  // the original's stack frame
    frame->word_0 = nn__nex__String__String_003d0cbc(frame.at(8).addr(), r3, r2, r3);
    u32 r0_2 = NetMessenger__post(online_session, 0x67u, r1, r2);
    nn__nex__String__virtual_0(frame.at(8).addr());
    return r0_2;
}

}  // namespace d_005152f4
GUEST_EXPORT_FRAMED(0x005152f4, d_005152f4::OnlineSession__report_string_67, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00515cdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the session and, under its lock, the service at 0x974a14.
namespace d_00515cdc {

inline constexpr u32 online_session_lock_address = 0x00974a14u;
inline guest::global<u32, 0x00974a14> online_session_lock;
inline constexpr guest::Function<0x00135740, u32(u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> unlock_member_lock;
inline constexpr guest::Function<0x00426174, u32(u32)> PiaQueue__flush;
inline constexpr guest::Function<0x0050f7a0, u32(u32, u32, u32, u32)> NetGame__release_station;
inline constexpr guest::Function<0x005118d4, u32(u32)> NetGame__update;

void OnlineSession__update_locked(u32 online_session) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    NetGame__release_station(online_session, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    NetGame__update(online_session);
    lock_member_lock(online_session + 0x290u);
    u32 r0_2 = *online_session_lock;
    if (r0_2 != 0) {
        PiaQueue__flush(r0_2);
    }
    frame.release();
    unlock_member_lock(online_session + 0x290u, guest::cpu()->r[1]);
    return;
}

}  // namespace d_00515cdc
GUEST_EXPORT(0x00515cdc, d_00515cdc::OnlineSession__update_locked);

// f_005164c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the notification event handler: a messaging notification handler with a lock.
namespace d_005164c0 {

struct __attribute__((packed)) net__nex__Impl__NotificationEventHandler {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x3];  // (not used here)
    u32 notification_event_handler_vtable;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u8 byte_28;
    u8 unknown_29[0x3];  // (not used here)
    u32 message_recv_handler_vtable;
    u32 word_30;
    u32 word_34;
    u32 word_38;
    u32 word_3c;
    u8 byte_40;
    u8 byte_41;
    u8 byte_42;
    u8 unknown_43[0x1];  // (not used here)
    u32 word_44;
    u32 word_48;
    u32 word_4c;
    u32 word_50;
    u32 word_54;
    u32 word_58;
    u32 word_5c;
    u32 word_60;
    u32 word_64;
    u8 byte_68;
    u8 byte_69;
    u8 byte_6a;
    u8 byte_6b;
    u8 unknown_6c[0x22];  // (not used here)
    u16 half_8e;
    u8 unknown_90[0x1fe];  // (not used here)
    u16 half_28e;
};
GUEST_OFFSET(net__nex__Impl__NotificationEventHandler, word_0, 0x0);
GUEST_OFFSET(net__nex__Impl__NotificationEventHandler, word_4, 0x4);
GUEST_OFFSET(net__nex__Impl__NotificationEventHandler, word_8, 0x8);
GUEST_OFFSET(net__nex__Impl__NotificationEventHandler, byte_c, 0xc);
GUEST_OFFSET(net__nex__Impl__NotificationEventHandler, notification_event_handler_vtable, 0x10);
GUEST_OFFSET(net__nex__Impl__NotificationEventHandler, word_14, 0x14);
GUEST_OFFSET(net__nex__Impl__NotificationEventHandler, word_18, 0x18);
GUEST_OFFSET(net__nex__Impl__NotificationEventHandler, word_1c, 0x1c);
GUEST_OFFSET(net__nex__Impl__NotificationEventHandler, word_20, 0x20);
GUEST_OFFSET(net__nex__Impl__NotificationEventHandler, word_24, 0x24);
GUEST_OFFSET(net__nex__Impl__NotificationEventHandler, byte_28, 0x28);
GUEST_OFFSET(net__nex__Impl__NotificationEventHandler, message_recv_handler_vtable, 0x2c);
GUEST_OFFSET(net__nex__Impl__NotificationEventHandler, word_30, 0x30);
GUEST_OFFSET(net__nex__Impl__NotificationEventHandler, word_34, 0x34);
GUEST_OFFSET(net__nex__Impl__NotificationEventHandler, word_38, 0x38);
GUEST_OFFSET(net__nex__Impl__NotificationEventHandler, word_3c, 0x3c);
GUEST_OFFSET(net__nex__Impl__NotificationEventHandler, byte_40, 0x40);
GUEST_OFFSET(net__nex__Impl__NotificationEventHandler, byte_41, 0x41);
GUEST_OFFSET(net__nex__Impl__NotificationEventHandler, byte_42, 0x42);
GUEST_OFFSET(net__nex__Impl__NotificationEventHandler, word_44, 0x44);
GUEST_OFFSET(net__nex__Impl__NotificationEventHandler, word_48, 0x48);
GUEST_OFFSET(net__nex__Impl__NotificationEventHandler, word_4c, 0x4c);
GUEST_OFFSET(net__nex__Impl__NotificationEventHandler, word_50, 0x50);
GUEST_OFFSET(net__nex__Impl__NotificationEventHandler, word_54, 0x54);
GUEST_OFFSET(net__nex__Impl__NotificationEventHandler, word_58, 0x58);
GUEST_OFFSET(net__nex__Impl__NotificationEventHandler, word_5c, 0x5c);
GUEST_OFFSET(net__nex__Impl__NotificationEventHandler, word_60, 0x60);
GUEST_OFFSET(net__nex__Impl__NotificationEventHandler, word_64, 0x64);
GUEST_OFFSET(net__nex__Impl__NotificationEventHandler, byte_68, 0x68);
GUEST_OFFSET(net__nex__Impl__NotificationEventHandler, byte_69, 0x69);
GUEST_OFFSET(net__nex__Impl__NotificationEventHandler, byte_6a, 0x6a);
GUEST_OFFSET(net__nex__Impl__NotificationEventHandler, byte_6b, 0x6b);
GUEST_OFFSET(net__nex__Impl__NotificationEventHandler, half_8e, 0x8e);
GUEST_OFFSET(net__nex__Impl__NotificationEventHandler, half_28e, 0x28e);

inline constexpr u32 vtable_net__nex__Impl__MessageRecvHandler = 0x009035fcu;
inline constexpr u32 vtable_net__nex__Impl__NotificationEventHandler_rec = 0x00903610u;
inline constexpr u32 net_heap_address = 0x00952c9cu;
inline guest::global<u32, 0x00952c9c> net_heap;
inline guest::global<u32, 0x00953664> global_00953664;
inline constexpr guest::Function<0x0012bfec, u32(u32, u32)> CriticalSection__construct;
inline constexpr guest::Function<0x003bd7f0, u32(u32, u32, u32, u32)> nn__nex__MessagingNotificationHandler__MessagingNotificationHandler;

u32 net__nex__Impl__NotificationEventHandler__NotificationEventHandler(gptr<net__nex__Impl__NotificationEventHandler> notification_event_handler, u32 r1) {
    notification_event_handler->word_0 = 0;
    notification_event_handler->word_4 = 0;
    notification_event_handler->word_8 = 0;
    notification_event_handler->byte_c = 0;
    notification_event_handler->notification_event_handler_vtable = vtable_net__nex__Impl__NotificationEventHandler_rec;
    notification_event_handler->word_14 = 0;
    notification_event_handler->word_18 = 0;
    notification_event_handler->word_1c = 0;
    notification_event_handler->word_20 = 0;
    notification_event_handler->word_24 = 0;
    notification_event_handler->byte_28 = 0;
    u32 r0_1 = notification_event_handler.addr() + 0x2cu;
    nn__nex__MessagingNotificationHandler__MessagingNotificationHandler(r0_1, r1, vtable_net__nex__Impl__NotificationEventHandler_rec, guest::cpu()->r[3]);
    notification_event_handler->message_recv_handler_vtable = vtable_net__nex__Impl__MessageRecvHandler;
    notification_event_handler->word_30 = 0;
    notification_event_handler->word_34 = 0;
    notification_event_handler->word_38 = 0;
    notification_event_handler->word_3c = 0;
    notification_event_handler->byte_40 = 0;
    notification_event_handler->byte_41 = 0;
    notification_event_handler->byte_42 = 0;
    notification_event_handler->word_44 = 0;
    notification_event_handler->word_48 = 0;
    notification_event_handler->word_4c = 0;
    notification_event_handler->word_50 = 0;
    notification_event_handler->word_54 = 0;
    notification_event_handler->word_58 = 0;
    notification_event_handler->word_5c = 0;
    notification_event_handler->word_60 = 0;
    notification_event_handler->word_64 = 0;
    notification_event_handler->byte_68 = 0;
    notification_event_handler->byte_69 = 0;
    notification_event_handler->byte_6a = 0;
    notification_event_handler->byte_6b = 0;
    notification_event_handler->half_28e = 0;
    CriticalSection__construct(r0_1 + 0x264u, r1);
    *global_00953664 = r0_1 - 0x2cu;
    u32 r1_1 = *net_heap;
    notification_event_handler->word_0 = r1_1;
    notification_event_handler->half_8e = 0;
    guest::cpu()->r[1] = r1_1;
    return r0_1 - 0x2cu;
}

}  // namespace d_005164c0
GUEST_EXPORT_FRAMED(0x005164c0, d_005164c0::net__nex__Impl__NotificationEventHandler__NotificationEventHandler, 0x4010);  // pushes {r4, lr} first, as the original

// f_0051659c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets up the network clock once: its time source and callbacks.
namespace d_0051659c {

struct __attribute__((packed)) NetClock {
    u8 unknown_0[0x54];  // (not used here)
    u32 word_54;
    u32 word_58;
    u32 word_5c;
    u32 word_60;
    u32 word_64;
    u32 word_68;
    u8 unknown_6c[0x25c];  // (not used here)
    u32 word_2c8;
    u32 word_2cc;
    u8 byte_2d0;
};
GUEST_OFFSET(NetClock, word_54, 0x54);
GUEST_OFFSET(NetClock, word_58, 0x58);
GUEST_OFFSET(NetClock, word_5c, 0x5c);
GUEST_OFFSET(NetClock, word_60, 0x60);
GUEST_OFFSET(NetClock, word_64, 0x64);
GUEST_OFFSET(NetClock, word_68, 0x68);
GUEST_OFFSET(NetClock, word_2c8, 0x2c8);
GUEST_OFFSET(NetClock, word_2cc, 0x2cc);
GUEST_OFFSET(NetClock, byte_2d0, 0x2d0);

inline constexpr u32 net_event_handler_address = 0x00953658u;
inline guest::global<u32, 0x0087bdbc> global_0087bdbc;
inline guest::global<u32, 0x0087bdc0> global_0087bdc0;
inline guest::global<u32, 0x00953658> net_event_handler;
inline constexpr guest::Function<0x0050e1d0, u32(u32, u32)> create_nex_heap;

u32 NetClock__init(gptr<NetClock> net_clock, u32 r1) {
    if (net_clock->byte_2d0 != 0) {
        return 1u;
    }
    u32 r0_2 = create_nex_heap(net_clock.addr() + 0xcu, r1);
    if (r0_2 == 0) {
        return r0_2;
    }
    net_clock->word_54 = 0x5168e0;
    net_clock->word_58 = 0x516844;
    net_clock->word_5c = 0x516954;
    net_clock->word_60 = 0x5167e8;
    net_clock->word_64 = 0x516914;
    net_clock->word_68 = 0x517a1c;
    u32 r2_1 = *global_0087bdc0;
    net_clock->word_2c8 = *global_0087bdbc;
    net_clock->word_2cc = r2_1;
    net_clock->byte_2d0 = 1;
    *net_event_handler = 0;
    guest::cpu()->r[1] = net_event_handler_address;
    return 1u;
}

}  // namespace d_0051659c
GUEST_EXPORT_FRAMED(0x0051659c, d_0051659c::NetClock__init, 0x4010);  // pushes {r4, lr} first, as the original

// f_005166a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Fills the status record with the clock's addresses, times and flags (cleared when not set up).
namespace d_005166a8 {

struct __attribute__((packed)) NetClock {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0x8];  // (not used here)
    u8 byte_34;
    u8 unknown_35[0x283];  // (not used here)
    u32 word_2b8;
    u8 byte_2bc;
    u8 unknown_2bd[0x13];  // (not used here)
    u8 byte_2d0;
    u8 unknown_2d1[0xb];  // (not used here)
    u32 word_2dc;
    u32 word_2e0;
    u8 unknown_2e4[0x4];  // (not used here)
    u32 word_2e8;
    u32 word_2ec;
    u32 word_2f0;
    u8 unknown_2f4[0x4];  // (not used here)
    u32 word_2f8;
    u32 word_2fc;
    u32 word_300;
    u8 unknown_304[0x4];  // (not used here)
    u32 word_308;
    u32 word_30c;
    u32 word_310;
    u8 unknown_314[0x4];  // (not used here)
    u32 word_318;
    u32 word_31c;
    u32 word_320;
    u8 unknown_324[0x4];  // (not used here)
    u8 byte_328;
};
GUEST_OFFSET(NetClock, word_28, 0x28);
GUEST_OFFSET(NetClock, byte_34, 0x34);
GUEST_OFFSET(NetClock, word_2b8, 0x2b8);
GUEST_OFFSET(NetClock, byte_2bc, 0x2bc);
GUEST_OFFSET(NetClock, byte_2d0, 0x2d0);
GUEST_OFFSET(NetClock, word_2dc, 0x2dc);
GUEST_OFFSET(NetClock, word_2e0, 0x2e0);
GUEST_OFFSET(NetClock, word_2e8, 0x2e8);
GUEST_OFFSET(NetClock, word_2ec, 0x2ec);
GUEST_OFFSET(NetClock, word_2f0, 0x2f0);
GUEST_OFFSET(NetClock, word_2f8, 0x2f8);
GUEST_OFFSET(NetClock, word_2fc, 0x2fc);
GUEST_OFFSET(NetClock, word_300, 0x300);
GUEST_OFFSET(NetClock, word_308, 0x308);
GUEST_OFFSET(NetClock, word_30c, 0x30c);
GUEST_OFFSET(NetClock, word_310, 0x310);
GUEST_OFFSET(NetClock, word_318, 0x318);
GUEST_OFFSET(NetClock, word_31c, 0x31c);
GUEST_OFFSET(NetClock, word_320, 0x320);
GUEST_OFFSET(NetClock, byte_328, 0x328);

struct __attribute__((packed)) NetAddressSet {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x4];  // (not used here)
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u8 unknown_24[0x4];  // (not used here)
    u32 word_28;
    u32 word_2c;
    u32 word_30;
    u8 unknown_34[0x4];  // (not used here)
    u32 word_38;
    u32 word_3c;
    u32 word_40;
    u8 unknown_44[0x4];  // (not used here)
    u32 word_48;
    u32 word_4c;
    u32 word_50;
    u32 word_54;
    u32 word_58;
    u32 word_5c;
    u8 byte_60;
    u8 byte_61;
};
GUEST_OFFSET(NetAddressSet, word_0, 0x0);
GUEST_OFFSET(NetAddressSet, word_4, 0x4);
GUEST_OFFSET(NetAddressSet, word_8, 0x8);
GUEST_OFFSET(NetAddressSet, word_c, 0xc);
GUEST_OFFSET(NetAddressSet, word_10, 0x10);
GUEST_OFFSET(NetAddressSet, word_18, 0x18);
GUEST_OFFSET(NetAddressSet, word_1c, 0x1c);
GUEST_OFFSET(NetAddressSet, word_20, 0x20);
GUEST_OFFSET(NetAddressSet, word_28, 0x28);
GUEST_OFFSET(NetAddressSet, word_2c, 0x2c);
GUEST_OFFSET(NetAddressSet, word_30, 0x30);
GUEST_OFFSET(NetAddressSet, word_38, 0x38);
GUEST_OFFSET(NetAddressSet, word_3c, 0x3c);
GUEST_OFFSET(NetAddressSet, word_40, 0x40);
GUEST_OFFSET(NetAddressSet, word_48, 0x48);
GUEST_OFFSET(NetAddressSet, word_4c, 0x4c);
GUEST_OFFSET(NetAddressSet, word_50, 0x50);
GUEST_OFFSET(NetAddressSet, word_54, 0x54);
GUEST_OFFSET(NetAddressSet, word_58, 0x58);
GUEST_OFFSET(NetAddressSet, word_5c, 0x5c);
GUEST_OFFSET(NetAddressSet, byte_60, 0x60);
GUEST_OFFSET(NetAddressSet, byte_61, 0x61);

struct __attribute__((packed)) Local_005166a8_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005166a8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005166a8_ea_1, word_4, 0x4);

inline guest::global<u32, 0x00953658> net_event_handler;
inline constexpr guest::Function<0x00131530, u32(u32, u32)> take_if_higher_priority;
inline constexpr guest::Function<0x00135748, u32(u32, u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32)> RecursiveLock__unlock;
inline constexpr guest::Function<0x00137878, u32(u32, u32)> NetAddressSet__clear;
inline constexpr guest::Function<0x00137a0c, u32(u32)> RankedValue__clear_00137a0c;
inline constexpr guest::Function<0x00747094, u32(u32)> network_time_value;
inline constexpr guest::Function<0x007472b0, u32(u32, u32, u32, u32)> network_clock_time;

void NetClock__get_status(gptr<NetClock> net_clock, gptr<NetAddressSet> net_address_set, u32 r2) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    if (net_clock->byte_2d0 != 0) {
        u32 r3_1 = net_clock->word_2ec;
        net_address_set->word_8 = net_clock->word_2e8;
        net_address_set->word_c = r3_1;
        net_address_set->word_10 = net_clock->word_2f0;
        u32 r3_2 = net_clock->word_2fc;
        net_address_set->word_18 = net_clock->word_2f8;
        net_address_set->word_1c = r3_2;
        net_address_set->word_20 = net_clock->word_300;
        u32 r3_3 = net_clock->word_30c;
        net_address_set->word_28 = net_clock->word_308;
        net_address_set->word_2c = r3_3;
        net_address_set->word_30 = net_clock->word_310;
        u32 r2_1 = net_clock->word_318;
        u32 r3_4 = net_clock->word_31c;
        net_address_set->word_38 = r2_1;
        net_address_set->word_3c = r3_4;
        net_address_set->word_40 = net_clock->word_320;
        u32 r1_1 = net_clock->word_2e0;
        net_address_set->word_48 = net_clock->word_2dc;
        net_address_set->word_4c = r1_1;
        network_clock_time(frame.at(0).addr(), net_clock.addr() + 0xcu, r2_1, r3_4);
        gptr<Local_005166a8_ea_1> ea_1 = gptr<Local_005166a8_ea_1>(frame.at(0).addr());
        u32 r1_3 = ea_1->word_4;
        net_address_set->word_50 = ea_1->word_0;
        net_address_set->word_54 = r1_3;
        net_address_set->byte_60 = net_clock->byte_328;
        RecursiveLock__lock(net_clock.addr(), r1_3);
        if (net_clock->byte_2bc != 0 && net_clock->word_2b8 == 0) {
            take_if_higher_priority(r2, net_clock.addr() + 0x2bcu);
            RankedValue__clear_00137a0c(net_clock.addr() + 0x2bcu);
        }
    } else {
        frame.release();
        NetAddressSet__clear(net_address_set.addr(), net_address_set.addr());
        return;
    }
    RecursiveLock__unlock(net_clock.addr());
    net_address_set->word_58 = net_clock->word_28;
    u32 r0_4 = network_time_value(net_clock.addr() + 0xcu);
    u32 r1_8 = guest::cpu()->r[1];
    net_address_set->word_0 = r0_4;
    net_address_set->word_4 = r1_8;
    net_address_set->byte_61 = 0;
    if (net_clock->byte_34 != 0) {
        net_address_set->byte_61 = 1;
    }
    net_address_set->word_5c = *net_event_handler;
    guest::cpu()->r[1] = r1_8;
}

}  // namespace d_005166a8
GUEST_EXPORT(0x005166a8, d_005166a8::NetClock__get_status);

// f_005182f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the network clock: its lock, notification handler, four address records and cleared times; registers it
// at 0x95365c.
namespace d_005182f4 {

struct __attribute__((packed)) NetClockNetClockArg0 {
    u32 word_0;
    u8 unknown_4[0x2b4];  // (not used here)
    u32 word_2b8;
    u8 unknown_2bc[0x18];  // (not used here)
    u32 word_2d4;
    u32 word_2d8;
    u32 word_2dc;
    u32 word_2e0;
};
GUEST_OFFSET(NetClockNetClockArg0, word_0, 0x0);
GUEST_OFFSET(NetClockNetClockArg0, word_2b8, 0x2b8);
GUEST_OFFSET(NetClockNetClockArg0, word_2d4, 0x2d4);
GUEST_OFFSET(NetClockNetClockArg0, word_2d8, 0x2d8);
GUEST_OFFSET(NetClockNetClockArg0, word_2dc, 0x2dc);
GUEST_OFFSET(NetClockNetClockArg0, word_2e0, 0x2e0);

struct __attribute__((packed)) Local_005182f4_ea_11 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005182f4_ea_11, word_0, 0x0);
GUEST_OFFSET(Local_005182f4_ea_11, word_4, 0x4);

struct __attribute__((packed)) Local_005182f4_ea_12 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005182f4_ea_12, word_0, 0x0);
GUEST_OFFSET(Local_005182f4_ea_12, word_4, 0x4);

struct __attribute__((packed)) Local_005182f4_ea_8 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005182f4_ea_8, word_0, 0x0);
GUEST_OFFSET(Local_005182f4_ea_8, word_4, 0x4);

struct __attribute__((packed)) Local_005182f4_ea_9 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_005182f4_ea_9, word_0, 0x0);
GUEST_OFFSET(Local_005182f4_ea_9, word_4, 0x4);
GUEST_OFFSET(Local_005182f4_ea_9, word_8, 0x8);

inline constexpr u32 net_clock_b_address = 0x00953678u;
inline guest::global<u32, 0x0087bdb4> net_clock_handler;
inline guest::global<u32, 0x0087bdb8> net_clock_handler_adjust;
inline guest::global<u32, 0x00953658> net_event_handler;
inline guest::global<u32, 0x0095365c> net_clock;
inline guest::global<u32, 0x00953678> net_clock_b;
inline guest::global<u32, 0x0095367c> global_0095367c;
inline constexpr guest::Function<0x0012f154, u32(u32, u32, u32, u32)> RecursiveLock__initialize;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x005164c0, u32(u32)> net__nex__Impl__NotificationEventHandler__NotificationEventHandler;
inline constexpr guest::Function<0x0051b0e4, u32(u32)> RankedValue__clear_0051b0e4;

u32 NetClock__NetClock(gptr<NetClockNetClockArg0> block, u32 r1, u32 r2, u32 r3) {
    block->word_0 = 0;
    RecursiveLock__initialize(block.addr(), r1, r2, r3);
    u32 notification_event_handler = block.addr() + 0xcu;
    net__nex__Impl__NotificationEventHandler__NotificationEventHandler(notification_event_handler);
    block->word_2b8 = 0;
    u32 r0_2 = (notification_event_handler + 0x2acu) + 4u;
    RankedValue__clear_0051b0e4(r0_2);
    u32 r0_3 = r0_2 - 0x2bcu;
    u32 r8_1 = r0_3 + 0x2dcu;
    block->word_2d4 = r1;
    block->word_2d8 = r2;
    u32 r2_3 = *global_0095367c;
    block->word_2dc = *net_clock_b;
    block->word_2e0 = r2_3;
    u32 r0_6 = for_each_element(r0_3 + 0x2e8u, 0x51b084u, 0x10u, 4u) - 0x2e8u;
    u32 r12_1 = ~2u;
    u32 r9_1 = ~0u;
    *gptr<u8>(r0_6 + 0x328u) = 0;
    *gptr<u8>(r0_6 + 0x329u) = 0;
    *net_clock = r0_6;
    *gptr<u32>(r0_6 + 0x2ecu) = r9_1;
    *gptr<u32>(r0_6 + 0x2e8u) = r12_1;
    *gptr<u32>(r0_6 + 0x2f0u) = 0;
    *gptr<u32>(r0_6 + 0x300u) = 0;
    gptr<Local_005182f4_ea_8> ea_8 = gptr<Local_005182f4_ea_8>(r0_6 + 0x2f8u);
    ea_8->word_0 = r12_1;
    ea_8->word_4 = r9_1;
    gptr<Local_005182f4_ea_9> ea_9 = gptr<Local_005182f4_ea_9>(r0_6 + 0x308u);
    ea_9->word_0 = r12_1;
    ea_9->word_4 = r9_1;
    ea_9->word_8 = 0;
    *gptr<u32>(r0_6 + 0x320u) = 0;
    gptr<Local_005182f4_ea_11> ea_11 = gptr<Local_005182f4_ea_11>(r0_6 + 0x318u);
    ea_11->word_0 = r12_1;
    ea_11->word_4 = r9_1;
    u32 r1_3 = *net_clock_handler;
    u32 r3_3 = *net_clock_handler_adjust;
    gptr<Local_005182f4_ea_12> ea_12 = gptr<Local_005182f4_ea_12>(r0_6 + 0x2c8u);
    ea_12->word_0 = r1_3;
    ea_12->word_4 = r3_3;
    *gptr<u8>(r0_6 + 0x2d0u) = 0;
    *net_event_handler = 0;
    guest::cpu()->r[1] = r1_3;
    return r0_6;
}

}  // namespace d_005182f4
GUEST_EXPORT_FRAMED(0x005182f4, d_005182f4::NetClock__NetClock, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_005183e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates and sets up the network clock once (from the network heap); true when it is running.
namespace d_005183e0 {

struct __attribute__((packed)) OnlineComponent {
    u8 unknown_0[0x1c];  // (not used here)
    u32 net_clock;
    u8 unknown_20[0x8];  // (not used here)
    u8 byte_28;
    u8 unknown_29[0x12c];  // (not used here)
    u8 byte_155;
};
GUEST_OFFSET(OnlineComponent, net_clock, 0x1c);
GUEST_OFFSET(OnlineComponent, byte_28, 0x28);
GUEST_OFFSET(OnlineComponent, byte_155, 0x155);

inline constexpr u32 net_heap_address = 0x00952c9cu;
inline guest::global<u32, 0x00952c9c> net_heap;
inline constexpr guest::Function<0x0013133c, u32(u32, u32)> NetAddressBook__clear;
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> allocate_on_heap;
inline constexpr guest::Function<0x0051659c, u32(u32)> NetClock__init;
inline constexpr guest::Function<0x005182f4, u32(u32, u32, u32)> NetClock__NetClock;
inline constexpr guest::Function<0x00518574, u32(u32)> create_net_command_thread;

u32 OnlineComponent__start_clock(gptr<OnlineComponent> online_component, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r5_1 = 0;
    if (online_component->byte_155 != 0) {
        r0_1 = 0u;
    } else if (online_component->byte_28 != 0) {
        r0_1 = 1u;
    } else {
        u32 block = allocate_on_heap(0x330u, *net_heap, 4u, guest::cpu()->r[3]);
        u32 net_clock = NetClock__NetClock(block, r1, r2);
        online_component->net_clock = net_clock;
        u32 r0_4 = NetClock__init(net_clock);
        r1 = guest::cpu()->r[1];
        if (r0_4 == 0) {
            r5_1 = 0u;
        } else {
            NetAddressBook__clear(online_component.addr(), r1);
            r5_1 = 1u;
            online_component->byte_28 = u8(r5_1);
            create_net_command_thread(online_component.addr());
            r1 = guest::cpu()->r[1];
        }
        r0_1 = r5_1;
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_005183e0
GUEST_EXPORT_FRAMED(0x005183e0, d_005183e0::OnlineComponent__start_clock, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00518468: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests operation 0x1e with the id and two bytes when logged in (flag 4) and the id is set; otherwise records the
// error.
namespace d_00518468 {

struct __attribute__((packed)) OnlineComponent {
    u8 unknown_0[0x150];  // (not used here)
    u32 word_150;
};
GUEST_OFFSET(OnlineComponent, word_150, 0x150);

inline constexpr guest::Function<0x00131470, u32(u32, u32, u32, u32)> ComponentHolder__request_state;
inline constexpr guest::Function<0x0051b094, u32(u32, u32, u32)> RankedValue__set_info;

struct __attribute__((packed)) OnlineComponentRequest1eFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x1];  // (not read or written by name)
    u8 byte_9;
    u8 unknown_a[0x2];  // (not read or written by name)
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(OnlineComponentRequest1eFrame, word_0, 0x0);
GUEST_OFFSET(OnlineComponentRequest1eFrame, word_4, 0x4);
GUEST_OFFSET(OnlineComponentRequest1eFrame, byte_9, 0x9);
GUEST_OFFSET(OnlineComponentRequest1eFrame, word_c, 0xc);
GUEST_OFFSET(OnlineComponentRequest1eFrame, word_10, 0x10);
GUEST_OFFSET(OnlineComponentRequest1eFrame, word_14, 0x14);
GUEST_OFFSET(OnlineComponentRequest1eFrame, word_18, 0x18);
GUEST_OFFSET(OnlineComponentRequest1eFrame, word_1c, 0x1c);
GUEST_OFFSET(OnlineComponentRequest1eFrame, word_20, 0x20);
GUEST_OFFSET(OnlineComponentRequest1eFrame, word_24, 0x24);
GUEST_SIZE(OnlineComponentRequest1eFrame, 0x28);

u32 OnlineComponent__request_1e(gptr<OnlineComponent> online_component, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<OnlineComponentRequest1eFrame> frame;  // the original's stack frame
    u32 r4_1 = *frame.at<u32>(0x34);
    u32 r12_1 = *frame.at<u32>(0x30);
    if ((online_component->word_150 & 4u) == 0 || (r2 | r3) == 0) {
        RankedValue__set_info(online_component.addr() + 0x144u, 0x1eu, 6u);
        return 0u;
    }
    frame->word_0 = 0;
    frame->word_4 = 0;
    *frame.at<u32>(8) = 0;
    frame->word_14 = 0;
    frame->word_18 = 0;
    frame->word_1c = 0;
    frame->word_c = 0;
    frame->word_10 = 0;
    frame->word_0 = r2;
    frame->word_4 = r3;
    frame->word_20 = 0;
    frame->word_24 = 0;
    *frame.at<u8>(8) = u8(r12_1);
    frame->byte_9 = u8(r4_1);
    return ComponentHolder__request_state(online_component.addr(), 0x1eu, frame.at(0).addr(), r3);
}

}  // namespace d_00518468
GUEST_EXPORT_FRAMED(0x00518468, d_00518468::OnlineComponent__request_1e, 0x4010);  // pushes {r4, lr} first, as the original

// f_005184f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests operation 4 (send) with the data and two bytes when connected (state 2, flag 1); otherwise records the
// error.
namespace d_005184f0 {

struct __attribute__((packed)) OnlineComponent {
    u8 unknown_0[0x28];  // (not used here)
    u8 byte_28;
    u8 unknown_29[0x127];  // (not used here)
    u32 word_150;
};
GUEST_OFFSET(OnlineComponent, byte_28, 0x28);
GUEST_OFFSET(OnlineComponent, word_150, 0x150);

struct __attribute__((packed)) Local_005184f0_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005184f0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005184f0_ea_1, word_4, 0x4);

inline constexpr guest::Function<0x00131470, u32(u32, u32, u32, u32)> ComponentHolder__request_state;
inline constexpr guest::Function<0x0051b094, u32(u32, u32, u32)> RankedValue__set_info;

struct __attribute__((packed)) OnlineComponentRequestSendFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x1];  // (not read or written by name)
    u8 byte_d;
    u8 unknown_e[0x2];  // (not read or written by name)
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u8 unknown_28[0x4];  // (not read or written by name)
};
GUEST_OFFSET(OnlineComponentRequestSendFrame, word_0, 0x0);
GUEST_OFFSET(OnlineComponentRequestSendFrame, word_4, 0x4);
GUEST_OFFSET(OnlineComponentRequestSendFrame, word_8, 0x8);
GUEST_OFFSET(OnlineComponentRequestSendFrame, byte_d, 0xd);
GUEST_OFFSET(OnlineComponentRequestSendFrame, word_10, 0x10);
GUEST_OFFSET(OnlineComponentRequestSendFrame, word_14, 0x14);
GUEST_OFFSET(OnlineComponentRequestSendFrame, word_18, 0x18);
GUEST_OFFSET(OnlineComponentRequestSendFrame, word_1c, 0x1c);
GUEST_OFFSET(OnlineComponentRequestSendFrame, word_20, 0x20);
GUEST_OFFSET(OnlineComponentRequestSendFrame, word_24, 0x24);
GUEST_SIZE(OnlineComponentRequestSendFrame, 0x2c);

u32 OnlineComponent__request_send(gptr<OnlineComponent> online_component, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<OnlineComponentRequestSendFrame> frame;  // the original's stack frame
    gptr<Local_005184f0_ea_1> ea_1 = gptr<Local_005184f0_ea_1>(frame.at(0x38).addr());
    u32 r5_1 = ea_1->word_0;
    u32 r12_1 = ea_1->word_4;
    u32 r4_1 = online_component->byte_28;
    if (r4_1 == 2u) {
        if ((online_component->word_150 & 1u) != 0) {
            *frame.at<u32>(0xc) = 0;
            frame->word_10 = 0;
            frame->word_14 = 0;
            frame->word_18 = 0;
            frame->word_1c = 0;
            frame->word_20 = 0;
            frame->word_24 = 0;
            frame->word_0 = r1;
            frame->word_4 = r2;
            frame->word_8 = r3;
            frame->byte_d = u8(r5_1);
            *frame.at<u8>(0xc) = u8(r12_1);
            return ComponentHolder__request_state(online_component.addr(), 4u, frame.at(0).addr(), r3);
        }
    }
    RankedValue__set_info(online_component.addr() + 0x144u, 4u, 6u);
    return 0u;
}

}  // namespace d_005184f0
GUEST_EXPORT_FRAMED(0x005184f0, d_005184f0::OnlineComponent__request_send, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0051868c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests operation 3 with the data when connected (state 2, flag 1) and moves to state 3; true when already there or
// nothing to do.
namespace d_0051868c {

struct __attribute__((packed)) OnlineComponent {
    u8 unknown_0[0x28];  // (not used here)
    u8 byte_28;
    u8 unknown_29[0x7];  // (not used here)
    u8 byte_30;
    u8 unknown_31[0x11f];  // (not used here)
    u32 word_150;
};
GUEST_OFFSET(OnlineComponent, byte_28, 0x28);
GUEST_OFFSET(OnlineComponent, byte_30, 0x30);
GUEST_OFFSET(OnlineComponent, word_150, 0x150);

inline constexpr guest::Function<0x00131470, u32(u32, u32, u32, u32)> ComponentHolder__request_state;
inline constexpr guest::Function<0x0051b094, u32(u32, u32, u32)> RankedValue__set_info;

struct __attribute__((packed)) OnlineComponentRequestConnectFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x2];  // (not read or written by name)
    u8 byte_a;
    u8 unknown_b[0x1];  // (not read or written by name)
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(OnlineComponentRequestConnectFrame, word_0, 0x0);
GUEST_OFFSET(OnlineComponentRequestConnectFrame, word_4, 0x4);
GUEST_OFFSET(OnlineComponentRequestConnectFrame, byte_a, 0xa);
GUEST_OFFSET(OnlineComponentRequestConnectFrame, word_c, 0xc);
GUEST_OFFSET(OnlineComponentRequestConnectFrame, word_10, 0x10);
GUEST_OFFSET(OnlineComponentRequestConnectFrame, word_14, 0x14);
GUEST_OFFSET(OnlineComponentRequestConnectFrame, word_18, 0x18);
GUEST_OFFSET(OnlineComponentRequestConnectFrame, word_1c, 0x1c);
GUEST_OFFSET(OnlineComponentRequestConnectFrame, word_20, 0x20);
GUEST_OFFSET(OnlineComponentRequestConnectFrame, word_24, 0x24);
GUEST_SIZE(OnlineComponentRequestConnectFrame, 0x28);

u32 OnlineComponent__request_connect(gptr<OnlineComponent> online_component, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<OnlineComponentRequestConnectFrame> frame;  // the original's stack frame
    u32 r0_1 = online_component->byte_28;
    u32 r12_1 = *frame.at<u32>(0x30);
    if (r0_1 == 3u) {
        return 1u;
    }
    if (r0_1 == 2u && (online_component->word_150 & 1u) != 0) {
        if (online_component->byte_30 == 0 && r2 >= 0x5cu) {
            return 1u;
        }
    } else {
        RankedValue__set_info(online_component.addr() + 0x144u, 3u, 6u);
        return 0u;
    }
    *frame.at<u32>(8) = 0;
    frame->word_c = 0;
    frame->word_10 = 0;
    frame->word_14 = 0;
    frame->word_18 = 0;
    frame->word_1c = 0;
    frame->word_20 = 0;
    frame->word_24 = 0;
    frame->word_0 = r1;
    frame->word_4 = r2;
    *frame.at<u16>(8) = u16(r3);
    frame->byte_a = u8(r12_1);
    u32 r0_3 = ComponentHolder__request_state(online_component.addr(), 3u, frame.at(0).addr(), r3);
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_3 != 0) {
        r1_2 = 3u;
        online_component->byte_28 = u8(r1_2);
    }
    guest::cpu()->r[1] = r1_2;
    return r0_3;
}

}  // namespace d_0051868c
GUEST_EXPORT_FRAMED(0x0051868c, d_0051868c::OnlineComponent__request_connect, 0x4010);  // pushes {r4, lr} first, as the original

// f_00518750: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests the list operation with the entries when allowed; otherwise records the error.
namespace d_00518750 {

struct __attribute__((packed)) OnlineComponent {
    u8 unknown_0[0x150];  // (not used here)
    u32 word_150;
};
GUEST_OFFSET(OnlineComponent, word_150, 0x150);

struct __attribute__((packed)) OnlineComponentRequestListArg2 {
    u16 half_0;
};
GUEST_OFFSET(OnlineComponentRequestListArg2, half_0, 0x0);

inline constexpr guest::Function<0x00131470, u32(u32, u32, u32, u32)> ComponentHolder__request_state;
inline constexpr guest::Function<0x0051b094, u32(u32, u32, u32)> RankedValue__set_info;

struct __attribute__((packed)) OnlineComponentRequestListFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    float float_c;
    u8 unknown_10[0x2];  // (not read or written by name)
    u16 half_12;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(OnlineComponentRequestListFrame, word_0, 0x0);
GUEST_OFFSET(OnlineComponentRequestListFrame, word_4, 0x4);
GUEST_OFFSET(OnlineComponentRequestListFrame, word_8, 0x8);
GUEST_OFFSET(OnlineComponentRequestListFrame, float_c, 0xc);
GUEST_OFFSET(OnlineComponentRequestListFrame, half_12, 0x12);
GUEST_OFFSET(OnlineComponentRequestListFrame, word_14, 0x14);
GUEST_OFFSET(OnlineComponentRequestListFrame, word_18, 0x18);
GUEST_OFFSET(OnlineComponentRequestListFrame, word_1c, 0x1c);
GUEST_OFFSET(OnlineComponentRequestListFrame, word_20, 0x20);
GUEST_OFFSET(OnlineComponentRequestListFrame, word_24, 0x24);
GUEST_SIZE(OnlineComponentRequestListFrame, 0x28);

u32 OnlineComponent__request_list(gptr<OnlineComponent> online_component, u32 r1, gptr<OnlineComponentRequestListArg2> arg2, u32 i) {
    guest::StackFrameOf<OnlineComponentRequestListFrame> frame;  // the original's stack frame
    u32 r0 = online_component.addr();
    u32 r2 = arg2.addr();
    u32 res_1 = 0;
    u32 r5_1 = *frame.at<u32>(0x3c);
    float S0 = std::bit_cast<float>(*frame.at<u32>(0x38));
    if ((online_component->word_150 & 4u) != 0) {
        frame->word_0 = 0;
        frame->word_4 = 0;
        *frame.at<u32>(0x10) = 0;
        frame->word_1c = 0;
        frame->word_14 = 0;
        frame->word_18 = 0;
        frame->word_20 = 0;
        frame->word_24 = 0;
        frame->word_8 = r1;
        u32 zf_1 = i == 8u;
        u32 cf_1 = i >= 8u;
        frame->word_0 = 0;
        frame->word_4 = 0;
        frame->float_c = S0;
        if (i > 8u) {
            i = 8u;
        }
        if (!cf_1 || zf_1) {
            zf_1 = i == 0;
        }
        u32 r4 = frame.at(0).addr();
        *frame.at<u8>(0x10) = u8(r5_1);
        if (!zf_1) {
            r1 = r2 - 2u;
            r2 = r4 + 0x10u;
            if ((i & 1u) != 0) {
                r1 = r1 + 2u;
                r2 += 2u;
                frame->half_12 = arg2->half_0;
            }
            u32 r12 = i >> 1;
            if (r12 != 0) {
                do {
                    u32 r5_2 = *gptr<u16>(r1 + 2u);
                    res_1 = r12 - 1u;
                    r12 = res_1;
                    *gptr<u16>(r2 + 2u) = u16(r5_2);
                    u32 ea_4 = r1 + 4u;
                    r1 = ea_4;
                    u32 r5_3 = *gptr<u16>(ea_4);
                    u32 ea_5 = r2 + 4u;
                    *gptr<u16>(ea_5) = u16(r5_3);
                    r2 = ea_5;
                    guest::preempt();
                } while (res_1 != 0);
            }
            if (i >= 8u) {
                goto L_518814;
            }
        }
        r1 = 0xffffu;
        do {
            u32 r2_1 = r4 + (i << 1);
            i += 1u;
            *gptr<u16>(r2_1 + 0x12u) = u16(r1);
            guest::preempt();
        } while (i < 8u);
L_518814:;
        guest::cpu()->s[0] = S0;
        return ComponentHolder__request_state(r0, 0x1bu, r4, i);
    }
    guest::cpu()->s[0] = S0;
    RankedValue__set_info(r0 + 0x144u, 0x1bu, 6u);
    return 0u;
}

}  // namespace d_00518750
GUEST_EXPORT_FRAMED(0x00518750, d_00518750::OnlineComponent__request_list, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00518848: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests operation 0x1b with the id, two floats and a half when logged in and the id is set; otherwise records the
// error.
namespace d_00518848 {

struct __attribute__((packed)) OnlineComponent {
    u8 unknown_0[0x150];  // (not used here)
    u32 word_150;
};
GUEST_OFFSET(OnlineComponent, word_150, 0x150);

struct __attribute__((packed)) Local_00518848_r1_2 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_00518848_r1_2, float_0, 0x0);
GUEST_OFFSET(Local_00518848_r1_2, float_4, 0x4);

inline constexpr guest::Function<0x00131470, u32(u32, u32, u32, u32)> ComponentHolder__request_state;
inline constexpr guest::Function<0x0051b094, u32(u32, u32, u32)> RankedValue__set_info;

struct __attribute__((packed)) OnlineComponentRequest1bFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x10];  // (not read or written by name)
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u8 unknown_28[0x4];  // (not read or written by name)
};
GUEST_OFFSET(OnlineComponentRequest1bFrame, word_0, 0x0);
GUEST_OFFSET(OnlineComponentRequest1bFrame, word_4, 0x4);
GUEST_OFFSET(OnlineComponentRequest1bFrame, word_18, 0x18);
GUEST_OFFSET(OnlineComponentRequest1bFrame, word_1c, 0x1c);
GUEST_OFFSET(OnlineComponentRequest1bFrame, word_20, 0x20);
GUEST_OFFSET(OnlineComponentRequest1bFrame, word_24, 0x24);
GUEST_SIZE(OnlineComponentRequest1bFrame, 0x2c);

u32 OnlineComponent__request_1b(gptr<OnlineComponent> online_component, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<OnlineComponentRequest1bFrame> frame;  // the original's stack frame
    u32 r0 = online_component.addr();
    u32 res_1 = 0;
    u32 r12_1 = *frame.at<u32>(0x34);
    float S0 = std::bit_cast<float>(*frame.at<u32>(0x30));
    u32 zf_1 = (online_component->word_150 & 4u) == 0;
    float S1 = std::bit_cast<float>(*frame.at<u32>(0x38));
    if (!zf_1) {
        zf_1 = (r2 | r3) == 0;
    }
    if (zf_1) {
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        RankedValue__set_info(r0 + 0x144u, 0x1bu, 6u);
        return 0u;
    }
    frame->word_0 = 0;
    frame->word_4 = 0;
    *frame.at<u32>(0x14) = 0;
    frame->word_18 = 0;
    *frame.at<u32>(0x10) = 0;
    frame->word_0 = r2;
    frame->word_4 = r3;
    frame->word_1c = 0;
    frame->word_20 = 0;
    frame->word_24 = 0;
    gptr<Local_00518848_r1_2> r1_2 = gptr<Local_00518848_r1_2>(frame.at(8).addr());
    r3 = 3u;
    r1_2->float_0 = S0;
    r1_2->float_4 = S1;
    r2 = frame.at(0x14).addr();
    u32 r1 = 0xffffu;
    *frame.at<u16>(0x12) = u16(r12_1);
    *frame.at<u16>(0x14) = u16(r1);
    do {
        *gptr<u16>(r2 + 2u) = u16(r1);
        res_1 = r3 - 1u;
        r3 = res_1;
        u32 ea_2 = r2 + 4u;
        *gptr<u16>(ea_2) = u16(r1);
        r2 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return ComponentHolder__request_state(r0, 0x1bu, frame.at(0).addr(), r3);
}

}  // namespace d_00518848
GUEST_EXPORT_FRAMED(0x00518848, d_00518848::OnlineComponent__request_1b, 0x4000);  // pushes {lr} first, as the original

// f_005189e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests operation 0x19 with the three words, a float and a word when logged in; otherwise records the error.
namespace d_005189e4 {

struct __attribute__((packed)) OnlineComponent {
    u8 unknown_0[0x150];  // (not used here)
    u32 word_150;
};
GUEST_OFFSET(OnlineComponent, word_150, 0x150);

inline constexpr guest::Function<0x00131470, u32(u32, u32, u32, u32)> ComponentHolder__request_state;
inline constexpr guest::Function<0x0051b094, u32(u32, u32, u32)> RankedValue__set_info;

struct __attribute__((packed)) OnlineComponentRequest19Frame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    float float_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(OnlineComponentRequest19Frame, word_0, 0x0);
GUEST_OFFSET(OnlineComponentRequest19Frame, word_4, 0x4);
GUEST_OFFSET(OnlineComponentRequest19Frame, word_8, 0x8);
GUEST_OFFSET(OnlineComponentRequest19Frame, float_c, 0xc);
GUEST_OFFSET(OnlineComponentRequest19Frame, word_10, 0x10);
GUEST_OFFSET(OnlineComponentRequest19Frame, word_14, 0x14);
GUEST_OFFSET(OnlineComponentRequest19Frame, word_18, 0x18);
GUEST_OFFSET(OnlineComponentRequest19Frame, word_1c, 0x1c);
GUEST_OFFSET(OnlineComponentRequest19Frame, word_20, 0x20);
GUEST_OFFSET(OnlineComponentRequest19Frame, word_24, 0x24);
GUEST_SIZE(OnlineComponentRequest19Frame, 0x28);

u32 OnlineComponent__request_19(gptr<OnlineComponent> online_component, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<OnlineComponentRequest19Frame> frame;  // the original's stack frame
    u32 r4_1 = online_component->word_150;
    u32 r12_1 = *frame.at<u32>(0x34);
    float S0_1 = std::bit_cast<float>(*frame.at<u32>(0x30));
    if ((r4_1 & 4u) != 0) {
        frame->word_14 = 0;
        frame->word_18 = 0;
        frame->word_1c = 0;
        frame->word_20 = 0;
        frame->word_24 = 0;
        frame->word_0 = r1;
        frame->word_4 = r2;
        frame->word_8 = r3;
        frame->float_c = S0_1;
        frame->word_10 = r12_1;
        guest::cpu()->s[0] = S0_1;
        return ComponentHolder__request_state(online_component.addr(), 0x19u, frame.at(0).addr(), r3);
    }
    guest::cpu()->s[0] = S0_1;
    RankedValue__set_info(online_component.addr() + 0x144u, 0x19u, 6u);
    return 0u;
}

}  // namespace d_005189e4
GUEST_EXPORT_FRAMED(0x005189e4, d_005189e4::OnlineComponent__request_19, 0x4010);  // pushes {r4, lr} first, as the original

// f_00518c3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests operation 0x1f with the three words and a float when logged in; otherwise records the error.
namespace d_00518c3c {

struct __attribute__((packed)) OnlineComponent {
    u8 unknown_0[0x150];  // (not used here)
    u32 word_150;
};
GUEST_OFFSET(OnlineComponent, word_150, 0x150);

inline constexpr guest::Function<0x00131470, u32(u32, u32, u32, u32)> ComponentHolder__request_state;
inline constexpr guest::Function<0x0051b094, u32(u32, u32, u32)> RankedValue__set_info;

struct __attribute__((packed)) OnlineComponentRequest1fFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    float float_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u8 unknown_28[0x4];  // (not read or written by name)
};
GUEST_OFFSET(OnlineComponentRequest1fFrame, word_0, 0x0);
GUEST_OFFSET(OnlineComponentRequest1fFrame, word_4, 0x4);
GUEST_OFFSET(OnlineComponentRequest1fFrame, word_8, 0x8);
GUEST_OFFSET(OnlineComponentRequest1fFrame, word_c, 0xc);
GUEST_OFFSET(OnlineComponentRequest1fFrame, float_10, 0x10);
GUEST_OFFSET(OnlineComponentRequest1fFrame, word_14, 0x14);
GUEST_OFFSET(OnlineComponentRequest1fFrame, word_18, 0x18);
GUEST_OFFSET(OnlineComponentRequest1fFrame, word_1c, 0x1c);
GUEST_OFFSET(OnlineComponentRequest1fFrame, word_20, 0x20);
GUEST_OFFSET(OnlineComponentRequest1fFrame, word_24, 0x24);
GUEST_SIZE(OnlineComponentRequest1fFrame, 0x2c);

u32 OnlineComponent__request_1f(gptr<OnlineComponent> online_component, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<OnlineComponentRequest1fFrame> frame;  // the original's stack frame
    float S0_1 = std::bit_cast<float>(*frame.at<u32>(0x30));
    if ((online_component->word_150 & 4u) != 0) {
        frame->word_c = 0;
        frame->word_14 = 0;
        frame->word_18 = 0;
        frame->word_1c = 0;
        frame->word_20 = 0;
        frame->word_24 = 0;
        frame->word_0 = r1;
        frame->word_4 = r2;
        frame->word_8 = r3;
        frame->float_10 = S0_1;
        guest::cpu()->s[0] = S0_1;
        return ComponentHolder__request_state(online_component.addr(), 0x1fu, frame.at(0).addr(), r3);
    }
    guest::cpu()->s[0] = S0_1;
    RankedValue__set_info(online_component.addr() + 0x144u, 0x1fu, 6u);
    return 0u;
}

}  // namespace d_00518c3c
GUEST_EXPORT_FRAMED(0x00518c3c, d_00518c3c::OnlineComponent__request_1f, 0x4000);  // pushes {lr} first, as the original

// f_00518ca8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests operation 0x1c with the id, a float and a vector when logged in; otherwise records the error.
namespace d_00518ca8 {

struct __attribute__((packed)) OnlineComponent {
    u8 unknown_0[0x150];  // (not used here)
    u32 word_150;
};
GUEST_OFFSET(OnlineComponent, word_150, 0x150);

struct __attribute__((packed)) Local_00518ca8_r1_1 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_00518ca8_r1_1, float_0, 0x0);
GUEST_OFFSET(Local_00518ca8_r1_1, float_4, 0x4);
GUEST_OFFSET(Local_00518ca8_r1_1, float_8, 0x8);

struct __attribute__((packed)) Local_00518ca8_r1_2 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_00518ca8_r1_2, float_0, 0x0);
GUEST_OFFSET(Local_00518ca8_r1_2, float_4, 0x4);
GUEST_OFFSET(Local_00518ca8_r1_2, float_8, 0x8);

inline constexpr guest::Function<0x00131470, u32(u32, u32, u32, u32)> ComponentHolder__request_state;
inline constexpr guest::Function<0x0051b094, u32(u32, u32, u32)> RankedValue__set_info;

struct __attribute__((packed)) OnlineComponentRequest1cFrame {
    u32 word_0;
    u32 word_4;
    float float_8;
    u8 unknown_c[0xc];  // (not read or written by name)
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u8 unknown_28[0x4];  // (not read or written by name)
};
GUEST_OFFSET(OnlineComponentRequest1cFrame, word_0, 0x0);
GUEST_OFFSET(OnlineComponentRequest1cFrame, word_4, 0x4);
GUEST_OFFSET(OnlineComponentRequest1cFrame, float_8, 0x8);
GUEST_OFFSET(OnlineComponentRequest1cFrame, word_18, 0x18);
GUEST_OFFSET(OnlineComponentRequest1cFrame, word_1c, 0x1c);
GUEST_OFFSET(OnlineComponentRequest1cFrame, word_20, 0x20);
GUEST_OFFSET(OnlineComponentRequest1cFrame, word_24, 0x24);
GUEST_SIZE(OnlineComponentRequest1cFrame, 0x2c);

u32 OnlineComponent__request_1c(gptr<OnlineComponent> online_component, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<OnlineComponentRequest1cFrame> frame;  // the original's stack frame
    gptr<Local_00518ca8_r1_1> r1_1 = gptr<Local_00518ca8_r1_1>(frame.at(0x34).addr());
    float S3_1 = std::bit_cast<float>(*frame.at<u32>(0x30));
    float S0_1 = r1_1->float_0;
    float S1_1 = r1_1->float_4;
    float S2_1 = r1_1->float_8;
    if ((online_component->word_150 & 4u) != 0) {
        frame->word_4 = 0;
        frame->word_0 = 0;
        frame->word_18 = 0;
        frame->word_1c = 0;
        frame->word_20 = 0;
        frame->word_24 = 0;
        frame->float_8 = S3_1;
        gptr<Local_00518ca8_r1_2> r1_2 = gptr<Local_00518ca8_r1_2>(frame.at(0xc).addr());
        r1_2->float_0 = S0_1;
        r1_2->float_4 = S1_1;
        r1_2->float_8 = S2_1;
        frame->word_0 = r2;
        frame->word_4 = r3;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        guest::cpu()->s[2] = S2_1;
        guest::cpu()->s[3] = S3_1;
        return ComponentHolder__request_state(online_component.addr(), 0x1cu, frame.at(0).addr(), r3);
    }
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    RankedValue__set_info(online_component.addr() + 0x144u, 0x1cu, 6u);
    return 0u;
}

}  // namespace d_00518ca8
GUEST_EXPORT_FRAMED(0x00518ca8, d_00518ca8::OnlineComponent__request_1c, 0x4000);  // pushes {lr} first, as the original

// f_00518edc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests operation 0x1d with the id, a float and a half when logged in and the id is set; otherwise records the
// error (true for a missing id).
namespace d_00518edc {

struct __attribute__((packed)) OnlineComponent {
    u8 unknown_0[0x150];  // (not used here)
    u32 word_150;
};
GUEST_OFFSET(OnlineComponent, word_150, 0x150);

inline constexpr guest::Function<0x00131470, u32(u32, u32, u32, u32)> ComponentHolder__request_state;
inline constexpr guest::Function<0x0051b094, u32(u32, u32, u32)> RankedValue__set_info;

struct __attribute__((packed)) OnlineComponentRequest1dFrame {
    u32 word_0;
    u32 word_4;
    float float_8;
    u8 unknown_c[0x4];  // (not read or written by name)
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u8 unknown_28[0x4];  // (not read or written by name)
};
GUEST_OFFSET(OnlineComponentRequest1dFrame, word_0, 0x0);
GUEST_OFFSET(OnlineComponentRequest1dFrame, word_4, 0x4);
GUEST_OFFSET(OnlineComponentRequest1dFrame, float_8, 0x8);
GUEST_OFFSET(OnlineComponentRequest1dFrame, word_10, 0x10);
GUEST_OFFSET(OnlineComponentRequest1dFrame, word_14, 0x14);
GUEST_OFFSET(OnlineComponentRequest1dFrame, word_18, 0x18);
GUEST_OFFSET(OnlineComponentRequest1dFrame, word_1c, 0x1c);
GUEST_OFFSET(OnlineComponentRequest1dFrame, word_20, 0x20);
GUEST_OFFSET(OnlineComponentRequest1dFrame, word_24, 0x24);
GUEST_SIZE(OnlineComponentRequest1dFrame, 0x2c);

u32 OnlineComponent__request_1d(gptr<OnlineComponent> online_component, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<OnlineComponentRequest1dFrame> frame;  // the original's stack frame
    u32 r12_1 = *frame.at<u32>(0x30);
    float S0_1 = std::bit_cast<float>(*frame.at<u32>(0x34));
    if ((online_component->word_150 & 4u) != 0) {
        if ((r2 | r3) != 0) {
            frame->word_0 = 0;
            frame->word_4 = 0;
            *frame.at<u32>(0xc) = 0;
            frame->word_14 = 0;
            frame->word_18 = 0;
            frame->word_10 = 0;
            frame->word_20 = 0;
            frame->word_0 = r2;
            frame->word_4 = r3;
            frame->word_1c = 0;
            frame->word_24 = 0;
            *frame.at<u16>(0xc) = u16(r12_1);
            frame->float_8 = S0_1;
            guest::cpu()->s[0] = S0_1;
            return ComponentHolder__request_state(online_component.addr(), 0x1du, frame.at(0).addr(), r3);
        }
        guest::cpu()->s[0] = S0_1;
        RankedValue__set_info(online_component.addr() + 0x144u, 0x1du, 6u);
        return 1u;
    }
    guest::cpu()->s[0] = S0_1;
    RankedValue__set_info(online_component.addr() + 0x144u, 0x1du, 6u);
    return 0u;
}

}  // namespace d_00518edc
GUEST_EXPORT_FRAMED(0x00518edc, d_00518edc::OnlineComponent__request_1d, 0x4000);  // pushes {lr} first, as the original

// f_005196cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005196cc {

struct __attribute__((packed)) Local_005196cc_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005196cc_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005196cc_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_005196cc_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005196cc_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_005196cc_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_005196cc_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005196cc_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_005196cc_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_005196cc_r0_10 {
    u8 unknown_0[0x150];  // (not used here)
    u32 word_150;
    u8 byte_154;
    u8 byte_155;
};
GUEST_OFFSET(Local_005196cc_r0_10, word_150, 0x150);
GUEST_OFFSET(Local_005196cc_r0_10, byte_154, 0x154);
GUEST_OFFSET(Local_005196cc_r0_10, byte_155, 0x155);

struct __attribute__((packed)) Local_005196cc_r2_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005196cc_r2_1, word_0, 0x0);
GUEST_OFFSET(Local_005196cc_r2_1, word_4, 0x4);

inline constexpr u32 vtable_sead__Delegate2_net__nex__Framework__sead__Thread___int_ = 0x00905ea4u;
inline guest::global<u32, 0x0087bdf4> global_0087bdf4;
inline guest::global<u32, 0x0087bdf8> global_0087bdf8;
inline constexpr guest::Function<0x0012f154, u32(u32, u32, u32, u32)> RecursiveLock__initialize;
inline constexpr guest::Function<0x00137878, u32(u32, u32, u32, u32)> NetAddressSet__clear;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x0051b0e4, u32(u32)> RankedValue__clear_0051b0e4;

u32 sead__Delegate2_net__nex__Framework__sead__Thread___int____int_(gptr<sead__Delegate2_net__nex__Framework__sead__Thread___int_> the_int, u32 r1_unused, u32 r2, u32 r3) {
    u32 r1_1 = *global_0087bdf8;
    the_int->word_8 = *global_0087bdf4;
    the_int->word_c = r1_1;
    the_int->vtable = vtable_sead__Delegate2_net__nex__Framework__sead__Thread___int_;
    the_int->word_4 = the_int.addr();
    the_int->word_10 = 0;
    RecursiveLock__initialize(the_int.addr() + 0x10u, r1_1, r2, r3);
    the_int->word_1c = 0;
    the_int->word_20 = 0;
    the_int->word_24 = 0;
    the_int->byte_28 = 0;
    the_int->byte_30 = 0;
    the_int->word_38 = 0;
    the_int->word_3c = 0;
    the_int->word_40 = 0;
    the_int->word_44 = 0;
    the_int->word_48 = 0;
    the_int->word_4c = 0;
    the_int->word_50 = 0;
    the_int->word_54 = 0;
    the_int->word_58 = 0;
    the_int->word_5c = 0;
    the_int->byte_60 = 0;
    the_int->byte_61 = 0;
    u32 net_address_set = for_each_element(the_int.addr() + 0x70u, 0x51b084u, 0x10u, 4u) - 8u;
    u32 r0_4 = ~2u;
    u32 r1_2 = ~0u;
    gptr<Local_005196cc_ea_1> ea_1 = gptr<Local_005196cc_ea_1>(net_address_set + 0x48u);
    ea_1->word_0 = r0_4;
    ea_1->word_4 = r1_2;
    gptr<Local_005196cc_r2_1> r2_1 = gptr<Local_005196cc_r2_1>(net_address_set + 0x50u);
    r2_1->word_0 = r0_4;
    r2_1->word_4 = r1_2;
    NetAddressSet__clear(net_address_set, r1_2, r2_1.addr(), guest::cpu()->r[3]);
    u32 r4_2 = for_each_element(net_address_set + 0x70u, 0x51b084u, 0x10u, 4u) - 8u;
    u32 r0_7 = ~2u;
    u32 r1_3 = ~0u;
    gptr<Local_005196cc_ea_2> ea_2 = gptr<Local_005196cc_ea_2>(r4_2 + 0x48u);
    ea_2->word_0 = r0_7;
    ea_2->word_4 = r1_3;
    gptr<Local_005196cc_ea_3> ea_3 = gptr<Local_005196cc_ea_3>(r4_2 + 0x50u);
    ea_3->word_0 = r0_7;
    ea_3->word_4 = r1_3;
    NetAddressSet__clear(r4_2, r1_3, 0x10u, 4u);
    u32 r0_8 = r4_2 + 0x68u;
    RankedValue__clear_0051b0e4(r0_8);
    u32 r0_9 = r0_8 + 0xcu;
    RankedValue__clear_0051b0e4(r0_9);
    gptr<Local_005196cc_r0_10> r0_10 = gptr<Local_005196cc_r0_10>(r0_9 - 0x144u);
    r0_10->word_150 = 0;
    r0_10->byte_154 = 0;
    r0_10->byte_155 = 0;
    return r0_10.addr();
}

}  // namespace d_005196cc
GUEST_EXPORT_FRAMED(0x005196cc, d_005196cc::sead__Delegate2_net__nex__Framework__sead__Thread___int____int_, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005197dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the component's objects.
namespace d_005197dc {

inline constexpr guest::Function<0x0013138c, u32(u32, u32, u32, u32)> ComponentHolder__release_objects;

u32 OnlineComponent__release(u32 online_component) {
    ComponentHolder__release_objects(online_component, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return online_component;
}

}  // namespace d_005197dc
GUEST_EXPORT_FRAMED(0x005197dc, d_005197dc::OnlineComponent__release, 0x4010);  // pushes {r4, lr} first, as the original

// f_005197f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the SpotPass opt-out flag (with the network daemon suspended).
namespace d_005197f0 {

inline constexpr guest::Function<0x0046a174, u32(u32, u32, u32, u32)> ndm_suspend_once;
inline constexpr guest::Function<0x0046aa80, u32(u32)> PiaSession__set_option;
inline constexpr guest::Function<0x0046eaf0, u32(u32, u32, u32, u32)> ndm_resume_once;

void Boss__opt_in(u32 boss, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    if (s32(ndm_suspend_once(boss, r1, guest::cpu()->r[2], guest::cpu()->r[3])) >= 0) {
    } else {
        return;
    }
    u32 r0_2 = PiaSession__set_option(0u);
    frame.release();
    ndm_resume_once(r0_2, r0_2 & 0x80000000u, guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_005197f0
GUEST_EXPORT(0x005197f0, d_005197f0::Boss__opt_in);

// f_0051981c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Reads the SpotPass data list of the kind (with the network daemon suspended).
namespace d_0051981c {

inline constexpr guest::Function<0x0046a174, u32(u32, u32, u32, u32)> ndm_suspend_once;
inline constexpr guest::Function<0x0046eaf0, u32(u32, u32, u32)> ndm_resume_once;
inline constexpr guest::Function<0x00519cc0, u32(u32, u32, u32)> Boss__read_new_data;

struct __attribute__((packed)) BossReadDataListFrame {
    u32 word_0;
};
GUEST_OFFSET(BossReadDataListFrame, word_0, 0x0);
GUEST_SIZE(BossReadDataListFrame, 0x4);

u32 Boss__read_data_list(u32 boss, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<BossReadDataListFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_2 = ndm_suspend_once(boss, r1, r2, r3) & 0x80000000u;
    if (s32(r0_2) < 0) {
        return r0_2;
    }
    u32 r0_4 = Boss__read_new_data(frame.at(0).addr(), boss, r1);
    return ndm_resume_once(r0_4, guest::cpu()->r[1], r1);
}

}  // namespace d_0051981c
GUEST_EXPORT_FRAMED(0x0051981c, d_0051981c::Boss__read_data_list, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0051984c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Runs the SpotPass data operation on the id (with the network daemon suspended).
namespace d_0051984c {

inline constexpr guest::Function<0x0046a174, u32(u32, u32, u32, u32)> ndm_suspend_once;
inline constexpr guest::Function<0x0046eaf0, u32(u32)> ndm_resume_once;
inline constexpr guest::Function<0x00519fc0, u32(u32, u32)> Boss__delete_task_data;

struct __attribute__((packed)) BossDeleteDataFrame {
    u32 word_0;
};
GUEST_OFFSET(BossDeleteDataFrame, word_0, 0x0);
GUEST_SIZE(BossDeleteDataFrame, 0x4);

u32 Boss__delete_data(u32 boss, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<BossDeleteDataFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_2 = ndm_suspend_once(boss, r1, guest::cpu()->r[2], r3) & 0x80000000u;
    if (s32(r0_2) < 0) {
        return r0_2;
    }
    return ndm_resume_once(Boss__delete_task_data(frame.at(0).addr(), boss));
}

}  // namespace d_0051984c
GUEST_EXPORT_FRAMED(0x0051984c, d_0051984c::Boss__delete_data, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00519874: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True unless the SpotPass opt-out flag is set.
namespace d_00519874 {

inline constexpr guest::Function<0x0046a174, u32(u32, u32, u32, u32)> ndm_suspend_once;
inline constexpr guest::Function<0x0046aa14, u32(u32)> PiaSession__get_station_id;
inline constexpr guest::Function<0x0046eaf0, u32(u32, u32)> ndm_resume_once;

u32 Boss__is_opted_in(u32 boss, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r4_1 = 0u;
    if (s32(ndm_suspend_once(boss, r1, guest::cpu()->r[2], r3) & 0x80000000u) >= 0) {
        u32 station_id = PiaSession__get_station_id(frame.at(0).addr());
        u32 r1_2 = station_id & 0x80000000u;
        r4_1 = s32(r1_2) >= 0 ? u32(s8(*frame.at<u8>(0))) : 0u;
        ndm_resume_once(station_id, r1_2);
    }
    return r4_1 ^ 1u;
}

}  // namespace d_00519874
GUEST_EXPORT_FRAMED(0x00519874, d_00519874::Boss__is_opted_in, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005198b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Makes sure the SpotPass storage is registered (registering it with the id and size when it is not); true when it is.
namespace d_005198b0 {

inline constexpr guest::Function<0x0046a174, u32(u32, u32, u32, u32)> ndm_suspend_once;
inline constexpr guest::Function<0x0046aad8, u32(u32, u32, u32)> PiaSession__local_station_id;
inline constexpr guest::Function<0x0046b320, u32(u32, u32, u32)> PiaSocket__open;
inline constexpr guest::Function<0x0046eaf0, u32(u32, u32, u32)> ndm_resume_once;

u32 Boss__register_storage(u32 boss, u32 r1, u32 r2) {
    u32 r4_1 = 0u;
    u32 r0_1 = ndm_suspend_once(boss, r1, r2, guest::cpu()->r[3]);
    u32 r2_1 = guest::cpu()->r[2];
    if (s32(r0_1) >= 0) {
        u32 r0_2 = PiaSession__local_station_id(0u, guest::cpu()->r[1], r2_1);
        u32 r1_2 = r0_2 & 0x80000000u;
        if (s32(r1_2) < 0) {
            r1_2 = 0xc8a0f842u;
            if (r0_2 == r1_2) {
                r2_1 = 0u;
                r0_2 = PiaSocket__open(boss, r1, r2_1);
                r1_2 = r0_2 & 0x80000000u;
                if (!(s32(r1_2) < 0)) {
                    r4_1 = 1u;
                }
            }
        } else {
            r4_1 = 1u;
        }
        ndm_resume_once(r0_2, r1_2, r2_1);
    }
    return r4_1;
}

}  // namespace d_005198b0
GUEST_EXPORT_FRAMED(0x005198b0, d_005198b0::Boss__register_storage, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00519960: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the SpotPass storage is registered.
namespace d_00519960 {

inline constexpr guest::Function<0x0046a174, u32(u32, u32, u32, u32)> ndm_suspend_once;
inline constexpr guest::Function<0x0046aad8, u32(u32)> PiaSession__local_station_id;
inline constexpr guest::Function<0x0046eaf0, u32(u32, u32)> ndm_resume_once;

u32 Boss__storage_is_registered(u32 boss, u32 r1) {
    u32 r4_1 = 0u;
    if (s32(ndm_suspend_once(boss, r1, guest::cpu()->r[2], guest::cpu()->r[3])) >= 0) {
        r4_1 = 1u;
        u32 r0_2 = PiaSession__local_station_id(0u);
        u32 r1_2 = r0_2 & 0x80000000u;
        if (s32(r1_2) < 0) {
            r4_1 = 0u;
        }
        ndm_resume_once(r0_2, r1_2);
    }
    return r4_1;
}

}  // namespace d_00519960
GUEST_EXPORT_FRAMED(0x00519960, d_00519960::Boss__storage_is_registered, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005199a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the SpotPass task (the foreground one for a null id) is not running.
namespace d_005199a0 {

inline constexpr guest::Function<0x0046a134, u32(u32)> nn__boss__FgOnlyTask__FgOnlyTask;
inline constexpr guest::Function<0x0046a174, u32(u32, u32, u32, u32)> ndm_suspend_once;
inline constexpr guest::Function<0x0046bb74, u32(u32, u32)> PiaStation__address_of;
inline constexpr guest::Function<0x0046beec, u32(u32)> PiaStation__update;
inline constexpr guest::Function<0x0046c1ec, u32(u32)> nn__boss__Task__Task;
inline constexpr guest::Function<0x0046c214, u32(u32)> nn__boss__FgOnlyTask__destructor;
inline constexpr guest::Function<0x0046eaf0, u32(u32)> ndm_resume_once;

u32 Boss__task_is_idle(u32 boss, u32 r1) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 zf_1 = 0;
    u32 r4_1 = 0u;
    if (s32(ndm_suspend_once(boss, r1, guest::cpu()->r[2], guest::cpu()->r[3]) & 0x80000000u) >= 0) {
        r4_1 = 1u;
        u32 r0_2 = frame.at(0).addr();
        if (boss != 0) {
            nn__boss__Task__Task(r0_2);
            u32 address = PiaStation__address_of(frame.at(0).addr(), boss);
            r0_5 = frame.at(0).addr();
            if (s32(address) < 0) {
                goto L_519a50;
            }
            r0_5 = PiaStation__update(r0_5);
            if (r0_5 != 0) {
                r4_1 = 0u;
                goto L_519a54;
            }
            goto L_519a54;
        }
        nn__boss__FgOnlyTask__FgOnlyTask(r0_2);
        r0_6 = frame.at(0).addr();
        r0_7 = PiaStation__update(r0_6);
        zf_1 = r0_7 == 0;
        r0_5 = frame.at(0).addr();
        if (zf_1) {
            nn__boss__FgOnlyTask__destructor(r0_5);
            goto L_519a54;
        }
        nn__boss__FgOnlyTask__destructor(r0_5);
L_519a50:;
        r4_1 = 0u;
L_519a54:;
        ndm_resume_once(r0_5);
    }
    return r4_1;
}

}  // namespace d_005199a0
GUEST_EXPORT_FRAMED(0x005199a0, d_005199a0::Boss__task_is_idle, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00519a7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Registers the SpotPass download task (its URL action, interval and policy) unless it already exists.
namespace d_00519a7c {

struct __attribute__((packed)) Boss {
    u32 word_0;
    u8 unknown_4[0x8];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Boss, word_0, 0x0);
GUEST_OFFSET(Boss, word_c, 0xc);

struct __attribute__((packed)) Local_00519a7c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00519a7c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00519a7c_ea_1, word_4, 0x4);

inline constexpr guest::Function<0x0046a174, u32(u32, u32, u32, u32)> ndm_suspend_once;
inline constexpr guest::Function<0x0046a2c0, u32(u32, u32, u32)> nn__boss__NsaDownloadAction__destructor;
inline constexpr guest::Function<0x0046a424, u32(u32, u32, u32)> PiaTimeout__init;
inline constexpr guest::Function<0x0046a45c, u32(u32, u32, u32, u32)> nn__boss__TaskPolicy__TaskPolicy;
inline constexpr guest::Function<0x0046aad8, u32(u32, u32, u32)> PiaSession__local_station_id;
inline constexpr guest::Function<0x0046b3b0, u32(u32, u32)> PiaSocket__set_name;
inline constexpr guest::Function<0x0046b4c4, u32(u32, u32, u32, u32)> nn__boss__NsaDownloadAction__NsaDownloadAction;
inline constexpr guest::Function<0x0046bb74, u32(u32, u32)> PiaStation__address_of;
inline constexpr guest::Function<0x0046c1ec, u32(u32, u32, u32, u32)> nn__boss__Task__Task;
inline constexpr guest::Function<0x0046eaf0, u32(u32, u32, u32, u32)> ndm_resume_once;
inline constexpr guest::Function<0x00519e3c, u32(u32, u32, u32, u32)> Boss__task_start;
inline constexpr guest::Function<0x00519ed0, u32(u32, u32, u32, u32)> Boss__register_task;

u32 Boss__register_download_task(gptr<Boss> boss, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x810);  // the original's stack frame
    u32 r0 = boss.addr();
    u32 r4_1 = r0;
    u32 r5 = 0u;
    u32 r0_1 = ndm_suspend_once(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    if (s32(r0_1) >= 0) {
        r0 = PiaSession__local_station_id(0u, guest::cpu()->r[1], r2);
        r3 = guest::cpu()->r[3];
        r1 = r0 & 0x80000000u;
        if (s32(r1) >= 0) {
            u32 r8_1 = frame.at(0x800).addr();
            r0 = Boss__task_start(r8_1, boss->word_0, boss->word_c, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0 == 0) {
                u32 r6_1 = frame.at(0x7d8).addr();
                nn__boss__Task__Task(r6_1, r1, r2, r3);
                r0 = PiaStation__address_of(r6_1, boss->word_0);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (s32(r0) < 0) {
                    goto L_519bc8;
                }
                u32 r7_1 = frame.at(0x7ec).addr();
                nn__boss__TaskPolicy__TaskPolicy(r7_1, r1, r2, r3);
                gptr<Local_00519a7c_ea_1> ea_1 = gptr<Local_00519a7c_ea_1>(r4_1 + 8u);
                r0 = PiaTimeout__init(r7_1, ea_1->word_0 * 0xe10u, ea_1->word_4);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (s32(r0) >= 0) {
                    goto L_519b48;
                }
                goto L_519bc8;
L_519b48:;
                u32 r9_1 = frame.at(0).addr();
                nn__boss__NsaDownloadAction__NsaDownloadAction(r9_1, r1, r2, r3);
                u32 r0_2 = PiaSocket__set_name(r9_1, *gptr<u32>(r4_1 + 4u));
                r2 = guest::cpu()->r[2];
                if (s32(r0_2) < 0) {
                    r0 = r9_1;
                    nn__boss__NsaDownloadAction__destructor(r0, guest::cpu()->r[1], r2);
                    r1 = guest::cpu()->r[1];
                    r3 = guest::cpu()->r[3];
                    goto L_519bc8;
                }
                u32 r0_3 = Boss__register_task(r8_1, r6_1, r7_1, r9_1);
                r2 = guest::cpu()->r[2];
                r0 = r9_1;
                nn__boss__NsaDownloadAction__destructor(r0, guest::cpu()->r[1], r2);
                r1 = guest::cpu()->r[1];
                r3 = guest::cpu()->r[3];
                if (r0_3 == 0) {
                    goto L_519bc8;
                }
            }
            r5 = 1u;
        }
L_519bc8:;
        ndm_resume_once(r0, r1, r2, r3);
    }
    return r5;
}

}  // namespace d_00519a7c
GUEST_EXPORT_FRAMED(0x00519a7c, d_00519a7c::Boss__register_download_task, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_00519bdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the SpotPass opt-out flag (with the network daemon suspended).
namespace d_00519bdc {

inline constexpr guest::Function<0x0046a174, u32(u32, u32, u32, u32)> ndm_suspend_once;
inline constexpr guest::Function<0x0046aa80, u32(u32)> PiaSession__set_option;
inline constexpr guest::Function<0x0046eaf0, u32(u32, u32, u32, u32)> ndm_resume_once;

void Boss__opt_out(u32 boss, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    if (s32(ndm_suspend_once(boss, r1, guest::cpu()->r[2], guest::cpu()->r[3])) >= 0) {
    } else {
        return;
    }
    u32 r0_2 = PiaSession__set_option(1u);
    frame.release();
    ndm_resume_once(r0_2, r0_2 & 0x80000000u, guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_00519bdc
GUEST_EXPORT(0x00519bdc, d_00519bdc::Boss__opt_out);

// f_00519c08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Checks the state of the SpotPass task; true when no storage is registered.
namespace d_00519c08 {

inline constexpr guest::Function<0x0046a174, u32(u32, u32, u32, u32)> ndm_suspend_once;
inline constexpr guest::Function<0x0046aad8, u32(u32, u32, u32)> PiaSession__local_station_id;
inline constexpr guest::Function<0x0046eaf0, u32(u32, u32, u32)> ndm_resume_once;
inline constexpr guest::Function<0x0051a044, u32(u32, u32, u32)> RequestPool__read_response;

struct __attribute__((packed)) BossCheckTaskStateFrame {
    u32 word_0;
};
GUEST_OFFSET(BossCheckTaskStateFrame, word_0, 0x0);
GUEST_SIZE(BossCheckTaskStateFrame, 0x4);

u32 Boss__check_task_state(u32 boss, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<BossCheckTaskStateFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r4_1 = 1u;
    u32 r0_1 = ndm_suspend_once(boss, r1, r2, r3);
    u32 r2_1 = guest::cpu()->r[2];
    if (s32(r0_1) >= 0) {
        u32 r0_2 = PiaSession__local_station_id(0u, guest::cpu()->r[1], r2_1);
        u32 r1_2 = r0_2 & 0x80000000u;
        if (s32(r1_2) >= 0) {
            r2_1 = r1;
            r0_2 = RequestPool__read_response(frame.at(0).addr(), boss, r2_1);
            r1_2 = guest::cpu()->r[1];
            r4_1 = r0_2;
        }
        ndm_resume_once(r0_2, r1_2, r2_1);
    }
    return r4_1;
}

}  // namespace d_00519c08
GUEST_EXPORT_FRAMED(0x00519c08, d_00519c08::Boss__check_task_state, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00519c58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the SpotPass task, or runs it in the foreground when it cannot be started.
namespace d_00519c58 {

struct __attribute__((packed)) Boss {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Boss, word_0, 0x0);
GUEST_OFFSET(Boss, word_8, 0x8);

inline constexpr guest::Function<0x0046a174, u32(u32, u32, u32, u32)> ndm_suspend_once;
inline constexpr guest::Function<0x0046aad8, u32(u32, u32)> PiaSession__local_station_id;
inline constexpr guest::Function<0x0046eaf0, u32(u32, u32)> ndm_resume_once;
inline constexpr guest::Function<0x00519e3c, u32(u32, u32, u32)> Boss__task_start;
inline constexpr guest::Function<0x0051a2c4, u32(u32, u32)> Boss__register_datastore_task;

struct __attribute__((packed)) BossStartTaskFrame {
    u32 word_0;
};
GUEST_OFFSET(BossStartTaskFrame, word_0, 0x0);
GUEST_SIZE(BossStartTaskFrame, 0x4);

void Boss__start_task(gptr<Boss> boss, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<BossStartTaskFrame> frame;  // the original's stack frame
    u32 r0 = boss.addr();
    frame->word_0 = r3;
    u32 r0_1 = ndm_suspend_once(r0, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    if (s32(r0_1) < 0) {
        return;
    }
    u32 r0_2 = PiaSession__local_station_id(0u, r1_1);
    if (s32(r0_2) >= 0) {
        r1_1 = boss->word_0;
        r0_2 = Boss__task_start(frame.at(0).addr(), r1_1, boss->word_8);
        if (r0_2 == 0) {
            r1_1 = r0;
            r0_2 = Boss__register_datastore_task(frame.at(0).addr(), r1_1);
            if (r0_2 == 0) {
                goto L_519cb0;
            }
        }
    }
L_519cb0:;
    ndm_resume_once(r0_2, r1_1);
}

}  // namespace d_00519c58
GUEST_EXPORT_FRAMED(0x00519c58, d_00519c58::Boss__start_task, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00519cc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Reads the new SpotPass data of the list into a buffer.
namespace d_00519cc0 {

struct __attribute__((packed)) BossReadNewDataArg1 {
    u32 word_0;
    u32 word_4;
    u16 half_8;
};
GUEST_OFFSET(BossReadNewDataArg1, word_0, 0x0);
GUEST_OFFSET(BossReadNewDataArg1, word_4, 0x4);
GUEST_OFFSET(BossReadNewDataArg1, half_8, 0x8);

struct __attribute__((packed)) Local_00519cc0_r0_7 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
    u16 half_2c;
};
GUEST_OFFSET(Local_00519cc0_r0_7, word_28, 0x28);
GUEST_OFFSET(Local_00519cc0_r0_7, half_2c, 0x2c);

inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> allocate_on_heap_entry;
inline constexpr guest::Function<0x002f88b8, u32(u32, u32, u32, u32)> release_owned_object;
inline constexpr guest::Function<0x0046a7bc, u32(u32)> store_constants_46a7bc;
inline constexpr guest::Function<0x0046a7cc, u32(u32, u32, u32, u32)> PiaStationTable__entry;
inline constexpr guest::Function<0x0046a7f8, u32(u32, u32, u32)> nn__boss__NsDataIdList__NsDataIdList;
inline constexpr guest::Function<0x0046b218, u32(u32, u32)> PiaSocket__get_address;
inline constexpr guest::Function<0x0046c21c, u32(u32, u32)> PiaStation__init_buffer;
inline constexpr guest::Function<0x0046c23c, u32(u32, u32, u32, u32)> PiaStation__receive;
inline constexpr guest::Function<0x0046c380, u32(u32, u32, u32, u32)> PiaStation__send;
inline constexpr guest::Function<0x0046c44c, u32(u32, u32, u32, u32)> PiaStation__connect;
inline constexpr guest::Function<0x0046c570, u32(u32, u32, u32, u32)> PiaStation__close;
inline constexpr guest::Function<0x0046c8a0, u32(u32, u32, u32, u32)> nn__boss__NsData__NsData;

struct __attribute__((packed)) BossReadNewDataFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x28];  // (not read or written by name)
    u32 word_30;
    u16 half_34;
    u8 unknown_36[0xe];  // (not read or written by name)
    u8 byte_44;
    u8 unknown_45[0xf];  // (not read or written by name)
    u32 word_54;
    u32 word_58;
    u8 unknown_5c[0x10];  // (not read or written by name)
    u16 half_6c;
    u8 unknown_6e[0x12];  // (not read or written by name)
};
GUEST_OFFSET(BossReadNewDataFrame, word_0, 0x0);
GUEST_OFFSET(BossReadNewDataFrame, word_4, 0x4);
GUEST_OFFSET(BossReadNewDataFrame, word_30, 0x30);
GUEST_OFFSET(BossReadNewDataFrame, half_34, 0x34);
GUEST_OFFSET(BossReadNewDataFrame, byte_44, 0x44);
GUEST_OFFSET(BossReadNewDataFrame, word_54, 0x54);
GUEST_OFFSET(BossReadNewDataFrame, word_58, 0x58);
GUEST_OFFSET(BossReadNewDataFrame, half_6c, 0x6c);
GUEST_SIZE(BossReadNewDataFrame, 0x80);

u32 Boss__read_new_data(u32 boss, gptr<BossReadNewDataArg1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<BossReadNewDataFrame> frame;  // the original's stack frame
    u32 r1 = arg1.addr();
    u32 r4 = 0;
    u32 r6 = 0;
    gptr<Local_00519cc0_r0_7> r0_7 = gptr<Local_00519cc0_r0_7>(0u);
    u32 r5_1 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 res_1 = 0;
    u32 r0_16 = 0;
    u32 r1_1 = arg1->word_0;
    u32 r7 = r2;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return boss;
    }
    u32 block_2 = allocate_on_heap_entry(u32(arg1->half_8) << 2, r1_1, 4u, r3);
    u32 r8 = block_2;
    u32 r2_1 = arg1->half_8;
    nn__boss__NsDataIdList__NsDataIdList(frame.at(0x68).addr(), block_2, r2_1);
    store_constants_46a7bc(frame.at(0x68).addr());
    u32 address = PiaSocket__get_address(arg1->word_4, frame.at(0x68).addr());
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 b_1 = address >> 0x1f;
    u32 zf_1 = b_1 == 0;
    r1 = b_1;
    if (!zf_1) {
        r1 = 0xd840f845u;
        zf_1 = address == r1;
    }
    if (!zf_1) {
        goto L_519df4;
    }
    r6 = frame->half_6c;
    r0_7 = gptr<Local_00519cc0_r0_7>(frame.at(8).addr());
    frame->word_0 = 0;
    frame->word_4 = 0;
    nn__boss__NsData__NsData(r0_7.addr(), 0u, 0u, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0_7->word_28 = 0;
    r0_7->half_2c = 0;
    r4 = 0u;
    if (r6 < 0u || r6 == 0) {
        goto L_519dec;
    }
L_519d5c:;
    r5_1 = frame.at(0).addr();
    r0_8 = frame.at(0x68).addr();
    r0_9 = PiaStationTable__entry(r0_8, r4, r2, r3);
    r0_10 = r5_1 + 8u;
    r0_11 = PiaStation__init_buffer(r0_10, r0_9);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res_1 = r0_11 & 0x80000000u;
    if (s32(res_1) >= 0) {
        u32 r0_13 = PiaStation__send(r5_1 + 8u, 6u, frame.at(0x48).addr(), 0x20u);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (s32(r0_13) >= 0) {
            frame->half_34 = u16(frame->word_54);
            frame->word_30 = frame->word_58;
            u32 r0_15 = PiaStation__connect(r5_1 + 8u, r5_1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (s32(r0_15) >= 0 && r7 == 0) {
                goto L_519e10;
            }
        }
    }
L_519dd4:;
    r0_16 = frame.at(8).addr();
    PiaStation__close(r0_16, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_519ddc:;
    r4 = uxth(r4 + 1u);
    if (r4 < r6) {
        guest::preempt();
        goto L_519d5c;
    }
L_519dec:;
L_519df4:;
    release_owned_object(r8, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    return frame.at(0x68).addr();
L_519e10:;
    u32 r0_18 = PiaStation__receive(frame.at(8).addr(), frame.at(0x44).addr(), r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (s32(r0_18) >= 0 && frame->byte_44 != 0) {
        guest::preempt();
        goto L_519dd4;
    }
    guest::preempt();
    goto L_519ddc;
}

}  // namespace d_00519cc0
GUEST_EXPORT_FRAMED(0x00519cc0, d_00519cc0::Boss__read_new_data, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00519e3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Initializes the SpotPass task of the id and starts it; true on success.
namespace d_00519e3c {

inline constexpr guest::Function<0x0046bb74, u32(u32, u32)> PiaStation__address_of;
inline constexpr guest::Function<0x0046bcc4, u32(u32, u32)> PiaStation__set_address;
inline constexpr guest::Function<0x0046c1ec, u32(u32, u32, u32, u32)> nn__boss__Task__Task;

u32 Boss__task_start(u32 r0_unused, u32 r1, u32 r2) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    nn__boss__Task__Task(frame.at(0).addr(), r1, r2, guest::cpu()->r[3]);
    u32 address = PiaStation__address_of(frame.at(0).addr(), r1);
    u32 r1_1 = guest::cpu()->r[1];
    if (s32(address) >= 0) {
        u32 r0_5 = PiaStation__set_address(frame.at(0).addr(), r2);
        u32 r1_2 = r0_5 & 0x80000000u;
        if (s32(r1_2) >= 0) {
            guest::cpu()->r[1] = r1_2;
            return 1u;
        }
        r1_1 = 0xd8e0f81au;
        u32 zf_1 = r0_5 == r1_1;
        if (!zf_1) {
            r1_1 = 0xc8a0f832u;
            zf_1 = r0_5 == r1_1;
        }
        if (!zf_1) {
            r1_1 = 0xc8a0f833u;
            if (r0_5 != r1_1) {
                r1_1 -= 8u;
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_00519e3c
GUEST_EXPORT_FRAMED(0x00519e3c, d_00519e3c::Boss__task_start, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00519ed0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Registers the SpotPass task with its policy and action, then starts it; true on success (the known errors give
// false).
namespace d_00519ed0 {

inline constexpr guest::Function<0x0046a82c, u32(u32, u32, u32, u32)> PiaSession__create;
inline constexpr guest::Function<0x0046bf88, u32(u32, u32, u32)> PiaStation__disconnect;

struct __attribute__((packed)) BossRegisterTaskFrame {
    u32 word_0;
};
GUEST_OFFSET(BossRegisterTaskFrame, word_0, 0x0);
GUEST_SIZE(BossRegisterTaskFrame, 0x4);

u32 Boss__register_task(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<BossRegisterTaskFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = 0;
    u32 r0_1 = PiaSession__create(r1, r2, r3, 0u);
    u32 r1_1 = 0xc8a0f82bu;
    u32 r2_1 = r0_1 & 0x80000000u;
    if (s32(r2_1) < 0) {
        if (r0_1 != r1_1 + 0xbu && r0_1 != r1_1 + 0x17u && r0_1 != r1_1 && r0_1 != 0xd8e0f81au) {
            r1_1 = 0xd8e0f801u;
            u32 zf_1 = r0_1 == r1_1;
            if (!zf_1) {
                r1_1 += 1u;
                zf_1 = r0_1 == r1_1;
            }
            if (!zf_1) {
                r1_1 = 0xd8e0f81fu;
                u32 zf_2 = r0_1 == r1_1;
                if (!zf_2) {
                    r1_1 += 9u;
                    zf_2 = r0_1 == r1_1;
                }
                if (!zf_2) {
                    r1_1 = 0xd8e0f826u;
                    u32 zf_3 = r0_1 == r1_1;
                    if (!zf_3) {
                        r1_1 -= 6u;
                        zf_3 = r0_1 == r1_1;
                    }
                    if (!zf_3) {
                        r1_1 = 0xd8e0f821u;
                        u32 zf_4 = r0_1 == r1_1;
                        if (!zf_4) {
                            r1_1 -= 4u;
                            zf_4 = r0_1 == r1_1;
                        }
                        if (!zf_4) {
                            r1_1 = 0xd8e0f827u;
                            if (r0_1 != r1_1) {
                                r1_1 += 0x9au;
                            }
                        }
                    }
                }
            }
        }
    } else {
        r1_1 = PiaStation__disconnect(r1, r1_1, r2_1) & 0x80000000u;
        if (s32(r1_1) >= 0) {
            guest::cpu()->r[1] = r1_1;
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_00519ed0
GUEST_EXPORT_FRAMED(0x00519ed0, d_00519ed0::Boss__register_task, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00519fc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Initializes the SpotPass task of the id and deletes its data; true on success.
namespace d_00519fc0 {

inline constexpr guest::Function<0x0046b174, u32(u32, u32)> PiaSocket__close;
inline constexpr guest::Function<0x0046bb74, u32(u32, u32)> PiaStation__address_of;
inline constexpr guest::Function<0x0046c1ec, u32(u32, u32, u32, u32)> nn__boss__Task__Task;

u32 Boss__delete_task_data(u32 r0_unused, u32 boss) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    nn__boss__Task__Task(frame.at(0).addr(), boss, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 address = PiaStation__address_of(frame.at(0).addr(), boss);
    if (s32(address) < 0) {
        return 0u;
    }
    u32 r0_5 = PiaSocket__close(frame.at(0).addr(), 0u);
    u32 r1_2 = r0_5 & 0x80000000u;
    if (s32(r1_2) >= 0) {
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    u32 r1_3 = 0xd8e0f81au;
    u32 zf_1 = r0_5 == r1_3;
    if (!zf_1) {
        r1_3 = 0xc8a0f832u;
        zf_1 = r0_5 == r1_3;
    }
    if (!zf_1) {
        r1_3 = 0xc8a0f833u;
    }
    guest::cpu()->r[1] = r1_3;
    return 0u;
}

}  // namespace d_00519fc0
GUEST_EXPORT_FRAMED(0x00519fc0, d_00519fc0::Boss__delete_task_data, 0x4010);  // pushes {r4, lr} first, as the original

// f_0051a2c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Registers a SpotPass data store download task (its interval in hours and policy) and starts it.
namespace d_0051a2c4 {

struct __attribute__((packed)) BossRegisterDatastoreTaskArg1 {
    u32 word_0;
};
GUEST_OFFSET(BossRegisterDatastoreTaskArg1, word_0, 0x0);

struct __attribute__((packed)) Local_0051a2c4_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0051a2c4_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0051a2c4_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_0051a2c4_r4_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0051a2c4_r4_1, word_0, 0x0);
GUEST_OFFSET(Local_0051a2c4_r4_1, word_4, 0x4);

inline constexpr guest::Function<0x0046a2c8, u32(u32, u32, u32, u32)> PiaSession__set_attribute;
inline constexpr guest::Function<0x0046a424, u32(u32, u32, u32)> PiaTimeout__init;
inline constexpr guest::Function<0x0046a45c, u32(u32)> nn__boss__TaskPolicy__TaskPolicy;
inline constexpr guest::Function<0x0046b8ac, u32(u32, u32, u32)> PiaSocket__bind;
inline constexpr guest::Function<0x0046baec, u32(u32)> PiaStation__check_ready;
inline constexpr guest::Function<0x0046bb48, u32(u32)> nn__boss__DataStoreDownloadAction__DataStoreDownloadAction;
inline constexpr guest::Function<0x0046bb70, u32(u32, u32, u32, u32)> nn__boss__DataStoreDownloadAction__destructor;
inline constexpr guest::Function<0x0046bb74, u32(u32, u32)> PiaStation__address_of;
inline constexpr guest::Function<0x0046c1ec, u32(u32, u32, u32, u32)> nn__boss__Task__Task;
inline constexpr guest::Function<0x00519ed0, u32(u32, u32, u32, u32)> Boss__register_task;

struct __attribute__((packed)) BossRegisterDatastoreTaskFrame {
    u8 unknown_0[0x804];  // (not read or written by name)
    u8 byte_804;
    u8 unknown_805[0xb];  // (not read or written by name)
};
GUEST_OFFSET(BossRegisterDatastoreTaskFrame, byte_804, 0x804);
GUEST_SIZE(BossRegisterDatastoreTaskFrame, 0x810);

u32 Boss__register_datastore_task(u32 boss, gptr<BossRegisterDatastoreTaskArg1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<BossRegisterDatastoreTaskFrame> frame;  // the original's stack frame
    u32 r5_1 = frame.at(0x7ec).addr();
    nn__boss__Task__Task(r5_1, arg1.addr(), r2, r3);
    u32 address = PiaStation__address_of(r5_1, arg1->word_0);
    if (s32(address) >= 0) {
        u32 r8_1 = frame.at(0x7d8).addr();
        nn__boss__TaskPolicy__TaskPolicy(r8_1);
        gptr<Local_0051a2c4_ea_1> ea_1 = gptr<Local_0051a2c4_ea_1>(arg1.addr() + 4u);
        if (s32(PiaTimeout__init(r8_1, ea_1->word_0 * 0xe10u, ea_1->word_4) & 0x80000000u) >= 0) {
            frame->byte_804 = 0;
            if (s32(PiaSession__set_attribute(r8_1, 5u, frame.at(0x804).addr(), 1u) & 0x80000000u) >= 0) {
                u32 r7_1 = frame.at(0).addr();
                nn__boss__DataStoreDownloadAction__DataStoreDownloadAction(r7_1);
                gptr<Local_0051a2c4_r4_1> r4_1 = gptr<Local_0051a2c4_r4_1>(arg1.addr() + 0xcu);
                if (s32(PiaSocket__bind(r7_1, r4_1->word_0, r4_1->word_4) & 0x80000000u) >= 0) {
                    if (s32(PiaStation__check_ready(r7_1) & 0x80000000u) >= 0) {
                        u32 r0_6 = Boss__register_task(boss, r5_1, r8_1, r7_1);
                        nn__boss__DataStoreDownloadAction__destructor(r0_6, r5_1, r8_1, r7_1);
                        return r0_6;
                    }
                }
                nn__boss__DataStoreDownloadAction__destructor(r7_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                return 0u;
            }
        }
    }
    return 0u;
}

}  // namespace d_0051a2c4
GUEST_EXPORT_FRAMED(0x0051a2c4, d_0051a2c4::Boss__register_datastore_task, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0051a740: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Reads the SpotPass data (with the network daemon suspended).
namespace d_0051a740 {

inline constexpr guest::Function<0x0046a174, u32(u32, u32, u32, u32)> ndm_suspend_once;
inline constexpr guest::Function<0x0046eaf0, u32(u32, u32, u32)> ndm_resume_once;
inline constexpr guest::Function<0x0051a414, u32(u32, u32, u32)> RequestPool__parse_response;

struct __attribute__((packed)) BossReadDataFrame {
    u32 word_0;
};
GUEST_OFFSET(BossReadDataFrame, word_0, 0x0);
GUEST_SIZE(BossReadDataFrame, 0x4);

u32 Boss__read_data(u32 boss, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<BossReadDataFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r4_1 = 0u;
    if (s32(ndm_suspend_once(boss, r1, r2, r3) & 0x80000000u) >= 0) {
        u32 r0_3 = RequestPool__parse_response(frame.at(0).addr(), boss, r1);
        r4_1 = r0_3;
        ndm_resume_once(r0_3, guest::cpu()->r[1], r1);
    }
    return r4_1;
}

}  // namespace d_0051a740
GUEST_EXPORT_FRAMED(0x0051a740, d_0051a740::Boss__read_data, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0051a874: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Reads the string of the id into the UTF-16 buffer (up to `size` characters, terminated); the number of characters
// read.
namespace d_0051a874 {

struct __attribute__((packed)) Local_0051a874_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_0051a874_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0051a874_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0051a874_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0051a874_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_0051a874_ea_1, word_10, 0x10);

struct __attribute__((packed)) Local_0051a874_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_0051a874_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0051a874_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_0051a874_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_0051a874_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_0051a874_ea_2, word_10, 0x10);

inline constexpr guest::Function<0x002fa9d0, u32(u32)> string_length;
inline constexpr guest::Function<0x0035153c, u32(u32, u32, u32, u32)> DataStore__search_b;
inline constexpr guest::Function<0x0047ec00, u32(u32, u32, u32, u32)> Ac__write_config;

struct __attribute__((packed)) ReadUtf16StringFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x18];  // (not read or written by name)
};
GUEST_OFFSET(ReadUtf16StringFrame, word_0, 0x0);
GUEST_OFFSET(ReadUtf16StringFrame, word_4, 0x4);
GUEST_SIZE(ReadUtf16StringFrame, 0x20);

u32 read_utf16_string(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<ReadUtf16StringFrame> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = 0;
    gptr<Local_0051a874_ea_1> ea_1 = gptr<Local_0051a874_ea_1>(frame.at(0xc).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r7;
    ea_1->word_10 = r14;
    u32 r6_1 = *frame.at<u32>(0x20);
    u32 r3_1 = *frame.at<u32>(0x24);
    if (r6_1 == 0) {
        r0_1 = 0u;
    } else {
        u32 r5_1 = 0u;
        if (s32(Ac__write_config(r0, r1, r6_1, r3_1) & 0x80000000u) >= 0) {
            u32 length = string_length(r6_1);
            frame->word_4 = length;
            frame->word_0 = r3;
            if (s32(DataStore__search_b(r2, frame.at(0).addr(), r6_1, frame.at(4).addr()) & 0x80000000u) >= 0) {
                if (frame->word_0 > r3) {
                    frame->word_0 = r3;
                }
                r5_1 = frame->word_0;
                *gptr<u16>(r2 + (r5_1 << 1)) = 0;
            }
        }
        r0_1 = r5_1;
    }
    gptr<Local_0051a874_ea_2> ea_2 = gptr<Local_0051a874_ea_2>(frame.at(0xc).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_2 = ea_2->word_4;
    u32 r6_2 = ea_2->word_8;
    u32 r7_1 = ea_2->word_c;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_1;
    return r0_1;
}

}  // namespace d_0051a874
GUEST_EXPORT(0x0051a874, d_0051a874::read_utf16_string);

// f_0051a9f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Converts the string to UTF-8 into the buffer (terminated) and writes it; the number of bytes written.
namespace d_0051a9f0 {

inline constexpr guest::Function<0x00351528, u32(u32, u32, u32, u32)> DataStore__search;
inline constexpr guest::Function<0x0047edb8, u32(u32, u32, u32, u32)> Ac__read_config;

struct __attribute__((packed)) WriteUtf8StringFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(WriteUtf8StringFrame, word_0, 0x0);
GUEST_OFFSET(WriteUtf8StringFrame, word_4, 0x4);
GUEST_OFFSET(WriteUtf8StringFrame, word_8, 0x8);
GUEST_SIZE(WriteUtf8StringFrame, 0x10);

u32 write_utf8_string(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<WriteUtf8StringFrame> frame;  // the original's stack frame
    u32 r0_1 = 0;
    u32 r5_1 = *frame.at<u32>(0x28);
    u32 r4_1 = *frame.at<u32>(0x2c);
    if (r5_1 == 0) {
        r0_1 = 0u;
    } else {
        frame->word_4 = r1;
        u32 r6_1 = 0u;
        frame->word_0 = r4_1;
        u32 r0_2 = DataStore__search(r5_1, frame.at(0).addr(), r0, frame.at(4).addr());
        r1 = guest::cpu()->r[1];
        if (s32(r0_2) >= 0) {
            if (frame->word_0 >= r4_1) {
                frame->word_0 = r4_1 - 1u;
            }
            *gptr<u8>(r5_1 + frame->word_0) = 0;
            u32 r0_3 = Ac__read_config(r5_1, r2, r3, frame.at(8).addr());
            r1 = guest::cpu()->r[1];
            if (s32(r0_3) >= 0) {
                r6_1 = frame->word_8;
            }
        }
        r0_1 = r6_1;
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_0051a9f0
GUEST_EXPORT_FRAMED(0x0051a9f0, d_0051a9f0::write_utf8_string, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0051aa84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the request (under the locks) and puts it back on the pool's free list.
namespace d_0051aa84 {

struct __attribute__((packed)) RequestPoolReleaseArg1 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u8 byte_28;
};
GUEST_OFFSET(RequestPoolReleaseArg1, word_18, 0x18);
GUEST_OFFSET(RequestPoolReleaseArg1, word_1c, 0x1c);
GUEST_OFFSET(RequestPoolReleaseArg1, word_20, 0x20);
GUEST_OFFSET(RequestPoolReleaseArg1, word_24, 0x24);
GUEST_OFFSET(RequestPoolReleaseArg1, byte_28, 0x28);

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32, u32)> RecursiveLock__unlock;
inline constexpr guest::Function<0x0013f134, u32(u32, u32)> queue_append;

void RequestPool__release(u32 request_pool, gptr<RequestPoolReleaseArg1> arg1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 lock = request_pool + 0xa8u;
    RecursiveLock__lock(lock, arg1.addr(), r2, r3);
    RecursiveLock__lock(arg1.addr() + 0xcu, arg1.addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
    arg1->word_20 = 0;
    arg1->word_24 = 0;
    arg1->word_18 = ~2u;
    arg1->word_1c = ~0u;
    arg1->byte_28 = 0;
    RecursiveLock__unlock(arg1.addr() + 0xcu, arg1.addr());
    queue_append(request_pool + 0x90u, arg1.addr());
    frame.release();
    RecursiveLock__unlock(lock, arg1.addr());
    return;
}

}  // namespace d_0051aa84
GUEST_EXPORT(0x0051aa84, d_0051aa84::RequestPool__release);

// f_0051ad60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Takes a free request from the pool for the key and the two values (all set), moving it to the used list; null when
// none is free.
namespace d_0051ad60 {

struct __attribute__((packed)) RequestPool {
    u8 unknown_0[0x94];  // (not used here)
    u32 word_94;
};
GUEST_OFFSET(RequestPool, word_94, 0x94);

struct __attribute__((packed)) RequestPoolAcquireArg1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(RequestPoolAcquireArg1, word_0, 0x0);
GUEST_OFFSET(RequestPoolAcquireArg1, word_4, 0x4);

struct __attribute__((packed)) Local_0051ad60_r2_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0051ad60_r2_3, word_0, 0x0);
GUEST_OFFSET(Local_0051ad60_r2_3, word_4, 0x4);
GUEST_OFFSET(Local_0051ad60_r2_3, word_8, 0x8);
GUEST_OFFSET(Local_0051ad60_r2_3, word_c, 0xc);

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32)> RecursiveLock__unlock;
inline constexpr guest::Function<0x0013f000, u32(u32, u32)> unlink_from_ends;
inline constexpr guest::Function<0x0013f134, u32(u32, u32)> queue_append;

u32 RequestPool__acquire(gptr<RequestPool> request_pool, gptr<RequestPoolAcquireArg1> arg1, u32 r2, u32 r3) {
    u32 r3_1 = ~2u;
    u32 r2_1 = ~0u;
    u32 r1_1 = arg1->word_0 ^ r3_1;
    if ((arg1->word_4 ^ r2_1 | r1_1) != 0 && r2 != 0 && r3 != 0) {
        RecursiveLock__lock(request_pool.addr() + 0xa8u, r1_1, r2_1, r3_1);
        u32 r5_1 = request_pool->word_94;
        RecursiveLock__unlock(request_pool.addr() + 0xa8u, guest::cpu()->r[1], guest::cpu()->r[2]);
        r1_1 = guest::cpu()->r[1];
        if (r5_1 != 0) {
            u32 r1_3 = arg1->word_4;
            gptr<Local_0051ad60_r2_3> r2_3 = gptr<Local_0051ad60_r2_3>(r5_1 + 0x18u);
            r2_3->word_0 = arg1->word_0;
            r2_3->word_4 = r1_3;
            r2_3->word_8 = r2;
            r2_3->word_c = r3;
            RecursiveLock__lock(request_pool.addr() + 0xa8u, r1_3, r2_3.addr(), guest::cpu()->r[3]);
            unlink_from_ends(request_pool.addr() + 0x90u, r5_1);
            queue_append(request_pool.addr() + 0x9cu, r5_1);
            RecursiveLock__unlock(request_pool.addr() + 0xa8u, guest::cpu()->r[1], r2_3.addr());
            return r5_1;
        }
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_0051ad60
GUEST_EXPORT_FRAMED(0x0051ad60, d_0051ad60::RequestPool__acquire, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0051ae04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the pool's 3 requests (0x30 bytes each), its two lists and lock, with every request free.
namespace d_0051ae04 {

inline constexpr guest::Function<0x00125e08, u32(u32)> construct_layout_list;
inline constexpr guest::Function<0x0012f154, u32(u32, u32)> RecursiveLock__initialize;
inline constexpr guest::Function<0x0013f134, u32(u32, u32, u32, u32)> queue_append;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 RequestPool__RequestPool(u32 request_pool) {
    u32 r0_1 = for_each_element(request_pool, 0x51ab9cu, 0x30u, 3u);
    construct_layout_list(r0_1 + 0x90u);
    construct_layout_list(r0_1 + 0x9cu);
    u32 r5 = r0_1 + 0u;
    u32 ea_1 = r0_1 + 0xa8u;
    *gptr<u32>(ea_1) = 0;
    RecursiveLock__initialize(ea_1, 0u);
    u32 r2 = guest::cpu()->r[2];
    u32 r3 = guest::cpu()->r[3];
    u32 i = 0u;
    do {
        queue_append(r5 + 0x90u, r5 + i * 0x30u, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        i += 1u;
        guest::preempt();
    } while (s32(i) < 3);
    return r5;
}

}  // namespace d_0051ae04
GUEST_EXPORT_FRAMED(0x0051ae04, d_0051ae04::RequestPool__RequestPool, 0x4070);  // pushes {i, r5, r6, lr} first, as the original

// f_0051b048: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Forwards to the function at 0x47f3a0.
namespace d_0051b048 {

inline constexpr guest::Function<0x0047f3a0, u32(u32, u32, u32, u32)> Ac__connect;

u32 veneer_47f3a0() {
    return Ac__connect(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0051b048
GUEST_EXPORT(0x0051b048, d_0051b048::veneer_47f3a0);

// f_0051b04c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the flag at 0x953644 is clear.
namespace d_0051b04c {

inline guest::global<u8, 0x00953644> online_flag;

u32 online_flag_clear() {
    return u32(s8(*online_flag)) ^ 1u;
}

}  // namespace d_0051b04c
GUEST_EXPORT(0x0051b04c, d_0051b04c::online_flag_clear);

// f_0051b060: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Runs the check and, when it passes, sets the flag at 0x953644.
namespace d_0051b060 {

inline constexpr u32 online_flag_address = 0x00953644u;
inline guest::global<u8, 0x00953644> online_flag;
inline constexpr guest::Function<0x0047f3a0, u32(u32, u32, u32, u32)> Ac__connect;

u32 set_online_flag(u32 r0, u32 r1) {
    u32 r0_1 = Ac__connect(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        return r0_1;
    }
    *online_flag = 1;
    guest::cpu()->r[1] = online_flag_address;
    return 1u;
}

}  // namespace d_0051b060
GUEST_EXPORT_FRAMED(0x0051b060, d_0051b060::set_online_flag, 0x4010);  // pushes {r4, lr} first, as the original

// f_0051b728: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the scene state (0xa827f4) is one of the two idle handlers; otherwise marks it busy (0xa82b88).
namespace d_0051b728 {

inline constexpr u32 scene_state_address = 0x00a827e8u;
inline constexpr u32 scene_load_state_a_address = 0x00a827f4u;
inline constexpr u32 scene_load_state_b_address = 0x00a827f8u;
inline guest::global<u32, 0x0087c084> scene_idle_handler_a;
inline guest::global<u32, 0x0087c088> scene_idle_handler_a_adjust;
inline guest::global<u32, 0x0087c08c> scene_idle_handler_b;
inline guest::global<u32, 0x0087c090> scene_idle_handler_b_adjust;
inline guest::global<u32, 0x00a827f4> scene_load_state_a;
inline guest::global<u32, 0x00a827f8> scene_load_state_b;
inline guest::global<u8, 0x00a82b88> scene_load_done;

u32 scene_state_is_idle() {
    u32 r3_1 = *scene_load_state_a;
    u32 r0_1 = *scene_idle_handler_a_adjust;
    u32 r2_1 = *scene_load_state_b;
    if (r3_1 == *scene_idle_handler_a && (r3_1 == 0 && ((r2_1 | r0_1) & 1u) == 0 || r2_1 == r0_1)) {
        return 1u;
    }
    u32 r0_2 = *scene_idle_handler_b_adjust;
    if (r3_1 == *scene_idle_handler_b && (r3_1 == 0 && ((r2_1 | r0_2) & 1u) == 0 || r2_1 == r0_2)) {
        return 1u;
    }
    *scene_load_done = 1;
    return 0u;
}

}  // namespace d_0051b728
GUEST_EXPORT_FRAMED(0x0051b728, d_0051b728::scene_state_is_idle, 0x10);  // pushes {r4} first, as the original

// f_0051b87c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When pending (+0xb0), finishes the work at +0xb4, remembers its value and starts the sleep check.
namespace d_0051b87c {

struct __attribute__((packed)) FinishPendingSleepCheckArg0 {
    u8 unknown_0[0xb0];  // (not used here)
    u8 byte_b0;
    u8 unknown_b1[0x167];  // (not used here)
    u32 word_218;
    u8 unknown_21c[0x15c];  // (not used here)
    u32 word_378;
};
GUEST_OFFSET(FinishPendingSleepCheckArg0, byte_b0, 0xb0);
GUEST_OFFSET(FinishPendingSleepCheckArg0, word_218, 0x218);
GUEST_OFFSET(FinishPendingSleepCheckArg0, word_378, 0x378);

inline constexpr guest::Function<0x003da354, u32(u32, u32, u32, u32)> NetConfig__load;
inline constexpr guest::Function<0x005cecfc, u32(u32, u32, u32, u32)> start_sleep_check_once;

u32 finish_pending_sleep_check(gptr<FinishPendingSleepCheckArg0> arg0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = arg0->byte_b0;
    if (r0_1 == 0) {
        return r0_1;
    }
    NetConfig__load(arg0.addr() + 0xb4u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = arg0->word_218;
    arg0->word_378 = r1_1;
    arg0->byte_b0 = 0;
    frame.release();
    return start_sleep_check_once(0u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0051b87c
GUEST_EXPORT(0x0051b87c, d_0051b87c::finish_pending_sleep_check);

// f_0051bbbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests the scene change of `kind` (kind 3 not in New 3DS mode) when the scene is idle.
namespace d_0051bbbc {

inline constexpr u32 scene_state_address = 0x00a827e8u;
inline constexpr u32 scene_load_state_a_address = 0x00a827f4u;
inline constexpr u32 scene_load_state_b_address = 0x00a827f8u;
inline constexpr u32 scene_change_request_address = 0x00a8289cu;
inline guest::global<u32, 0x0087c084> scene_idle_handler_a;
inline guest::global<u32, 0x0087c088> scene_idle_handler_a_adjust;
inline guest::global<u32, 0x00a827f4> scene_load_state_a;
inline guest::global<u32, 0x00a827f8> scene_load_state_b;
inline guest::global<u8, 0x00a82898> scene_change_requested;
inline guest::global<u32, 0x00a8289c> scene_change_request;
inline guest::global<u32, 0x00a82b60> global_00a82b60;
inline constexpr guest::Function<0x0011d258, u32(u32, u32)> is_new_3ds_mode;
inline constexpr guest::Function<0x003da4ac, u32(u32, u32, u32, u32)> Ac__check_config;
inline constexpr guest::Function<0x003da4cc, u32(u32)> NetConfig__init;

void request_scene_change(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = Ac__check_config(r0, r1, r2, guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        if (r0 == 3u) {
            u32 r0_2 = is_new_3ds_mode(r0_1, r1_1);
            r1_1 = guest::cpu()->r[1];
            if (r0_2 != 0) {
                return;
            }
            NetConfig__init(scene_change_request_address);
        }
        u32 r2_2 = *scene_load_state_a;
        r1_1 = *scene_idle_handler_a;
        u32 r0_3 = *scene_idle_handler_a_adjust;
        if (r2_2 == r1_1) {
            if (r2_2 != 0 || ((*scene_load_state_b | r0_3) & 1u) != 0) {
                r1_1 = *scene_load_state_b;
                if (r1_1 != r0_3) {
                    guest::cpu()->r[1] = r1_1;
                    return;
                }
            }
            r1_1 = 1u;
            *scene_change_requested = u8(r1_1);
            *scene_change_request = r0;
            *global_00a82b60 = ~0u;
        }
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0051bbbc
GUEST_EXPORT_FRAMED(0x0051bbbc, d_0051bbbc::request_scene_change, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0051bc4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// From the second idle handler, starts the scene handler and marks it running.
namespace d_0051bc4c {

inline constexpr u32 scene_state_address = 0x00a827e8u;
inline constexpr u32 scene_load_state_a_address = 0x00a827f4u;
inline constexpr u32 scene_load_state_b_address = 0x00a827f8u;
inline guest::global<u32, 0x0087c08c> scene_idle_handler_b;
inline guest::global<u32, 0x0087c090> scene_idle_handler_b_adjust;
inline guest::global<u32, 0x0087c0a4> global_0087c0a4;
inline guest::global<u32, 0x0087c0a8> global_0087c0a8;
inline guest::global<u32, 0x00a827f4> scene_load_state_a;
inline guest::global<u32, 0x00a827f8> scene_load_state_b;
inline guest::global<u32, 0x00a82888> scene_idle_state;
inline guest::global<u32, 0x00a8288c> global_00a8288c;
inline constexpr guest::Function<0x0081bf98, u32(u32, u32, u32)> CallbackTable__dispatch_0081bf98;

void start_scene_from_second_idle() {
    u32 r3_1 = *scene_idle_handler_b;
    u32 r1_1 = *global_0087c0a4;
    u32 r2_1 = *global_0087c0a8;
    u32 r12_1 = *scene_load_state_a;
    u32 r0_1 = *scene_idle_handler_b_adjust;
    if (r12_1 != r3_1) {
        return;
    }
    u32 r3_2 = *scene_load_state_b;
    if ((r12_1 != 0 || ((r3_2 | r0_1) & 1u) != 0) && r3_2 != r0_1) {
        return;
    }
    CallbackTable__dispatch_0081bf98(scene_state_address, r1_1, r2_1);
    *scene_idle_state = 1;
    *global_00a8288c = 0;
}

}  // namespace d_0051bc4c
GUEST_EXPORT_FRAMED(0x0051bc4c, d_0051bc4c::start_scene_from_second_idle, 0x4010);  // pushes {r4, lr} first, as the original

// f_0051c098: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Selects the entry (0xc bytes each) whose handler pair matches, remembering it and its index.
namespace d_0051c098 {

struct __attribute__((packed)) CallbackTable {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x8];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(CallbackTable, word_4, 0x4);
GUEST_OFFSET(CallbackTable, word_8, 0x8);
GUEST_OFFSET(CallbackTable, word_14, 0x14);
GUEST_OFFSET(CallbackTable, word_18, 0x18);
GUEST_OFFSET(CallbackTable, word_1c, 0x1c);

struct __attribute__((packed)) Local_0051c098_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0051c098_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0051c098_ea_1, word_4, 0x4);


void CallbackTable__select(gptr<CallbackTable> callback_table, u32 r1, u32 r2) {
    u32 r3 = 0u;
    u32 r4 = callback_table->word_4;
    u32 r6 = callback_table->word_8;
    if (r4 == 0) {
        return;
    }
L_51c0b0:;
    gptr<Local_0051c098_ea_1> ea_1 = gptr<Local_0051c098_ea_1>(r6 + r3 * 0xcu + 4u);
    u32 r5_1 = ea_1->word_0;
    u32 r12_1 = ea_1->word_4;
    if (r5_1 != r1) {
        goto L_51c0f8;
    }
    if ((r5_1 != 0 || ((r12_1 | r2) & 1u) != 0) && r12_1 != r2) {
        goto L_51c0f8;
    }
    callback_table->word_14 = r1;
    callback_table->word_18 = r2;
    callback_table->word_1c = r3;
    return;
L_51c0f8:;
    r3 += 1u;
    if (r3 == r4) {
        return;
    }
    guest::preempt();
    goto L_51c0b0;
}

}  // namespace d_0051c098
GUEST_EXPORT_FRAMED(0x0051c098, d_0051c098::CallbackTable__select, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_0051c170: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs an NFC (amiibo) framework step for an owner (arg 1): not started, no delegate.
namespace d_0051c170 {

inline constexpr u32 vtable_nfp__Framework__Step = 0x00903690u;
inline constexpr u32 vtable_nfp__Framework__Delegate = 0x009036a0u;
inline guest::global<u32, 0x0087c118> global_0087c118;

void nfp__Framework__Step__Step(gptr<nfp__Framework__Step> step, u32 r1) {
    step->vtable = vtable_nfp__Framework__Step;
    step->word_4 = 0;
    step->word_8 = 0;
    float S0_1 = 0.0f;
    float S1_1 = std::bit_cast<float>(*global_0087c118);
    step->float_14 = S0_1;
    step->float_18 = S1_1;
    step->word_1c = 0;
    step->delegate_vtable = vtable_nfp__Framework__Delegate;
    step->word_20 = 0;
    step->byte_24 = 0;
    step->word_10 = r1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_0051c170
GUEST_EXPORT(0x0051c170, d_0051c170::nfp__Framework__Step__Step);

// f_0051ca20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether 00308e80 gives 0x26 or 0xa.
namespace d_0051ca20 {

inline constexpr guest::Function<0x00308e80, u32(u32, u32, u32, u32)> current_event_kind;

u32 mode_308e80_is_26_or_a(u32 r0) {
    u32 event_kind = current_event_kind(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return event_kind == 0x26u || event_kind == 0xau;
}

}  // namespace d_0051ca20
GUEST_EXPORT_FRAMED(0x0051ca20, d_0051ca20::mode_308e80_is_26_or_a, 0x4010);  // pushes {r4, lr} first, as the original

// f_0051cbdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The count at +0x9ac, or 399 when the cap flag (+0x9a8) is set.
namespace d_0051cbdc {

struct __attribute__((packed)) CappedCount9acArg0 {
    u8 unknown_0[0x9a8];  // (not used here)
    u8 byte_9a8;
    u8 unknown_9a9[0x3];  // (not used here)
    u16 half_9ac;
};
GUEST_OFFSET(CappedCount9acArg0, byte_9a8, 0x9a8);
GUEST_OFFSET(CappedCount9acArg0, half_9ac, 0x9ac);


u32 capped_count_9ac(gptr<CappedCount9acArg0> arg0) {
    u32 r1_1 = 0x18fu;
    if (arg0->byte_9a8 == 0) {
        r1_1 = arg0->half_9ac;
    }
    guest::cpu()->r[1] = r1_1;
    return r1_1;
}

}  // namespace d_0051cbdc
GUEST_EXPORT(0x0051cbdc, d_0051cbdc::capped_count_9ac);

// f_0051ccc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Entry `index` (below 8, 0x30 bytes each) of the table at 0xa83108; out-of-range gives the first.
namespace d_0051ccc0 {

inline constexpr u32 global_00a83108_address = 0x00a83108u;

u32 entry_30_of_8_a83108(u32 r0) {
    u32 r0_1 = global_00a83108_address;
    if (!(r0 >= 8u)) {
        r0_1 += r0 * 0x30u;
    }
    return r0_1;
}

}  // namespace d_0051ccc0
GUEST_EXPORT(0x0051ccc0, d_0051ccc0::entry_30_of_8_a83108);

// f_0051cd48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Refreshes the slot records from the villager data at +0x62138; true.
namespace d_0051cd48 {

inline constexpr guest::Function<0x00111611, u32(u32, u32)> Town__reset_villager_parts;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;

u32 refresh_town_villager_records(u32 r0, u32 r1) {
    u32 data_base = get_data_base(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 records = slot_records_of(data_base);
    u32 data_base_2 = get_data_base(records, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    Town__reset_villager_parts(records + 4u, data_base_2 + 0x62138u);
    return 1u;
}

}  // namespace d_0051cd48
GUEST_EXPORT_FRAMED(0x0051cd48, d_0051cd48::refresh_town_villager_records, 0x4010);  // pushes {r4, lr} first, as the original

// f_0051d168: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The relation tier of the two villagers by their score: 0 (200 or more), 1 (61 or more), else 2.
namespace d_0051d168 {

inline constexpr guest::Function<0x0051f9cc, u32(u32, u32)> VillagerRecords__same_villager;

u32 villager_relation_tier(u32 r0) {
    u32 r0_1 = VillagerRecords__same_villager(r0, guest::cpu()->r[1]);
    if (r0_1 >= 0xc8u) {
        return 0u;
    }
    return r0_1 >= 0x3du ? 1u : 2u;
}

}  // namespace d_0051d168
GUEST_EXPORT_FRAMED(0x0051d168, d_0051d168::villager_relation_tier, 0x4010);  // pushes {r4, lr} first, as the original

// f_0051d18c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The relation tier of the villagers in the two slots; 2 when either is missing.
namespace d_0051d18c {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x003009a9, u32(u32, u32)> villager_record_at;
inline constexpr guest::Function<0x0051f9cc, u32(u32, u32)> VillagerRecords__same_villager;

u32 villager_relation_tier_of_slots(u32 r0, u32 r1) {
    u32 save_data = get_save_data(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 villager_record = villager_record_at(save_data + 0x292a4u, r0);
    u32 villager_record_2 = villager_record_at(save_data + 0x292a4u, r1);
    if (villager_record != 0 && villager_record_2 != 0) {
        u32 r0_4 = VillagerRecords__same_villager(villager_record, villager_record_2);
        if (r0_4 >= 0xc8u) {
            return 0u;
        }
        if (r0_4 >= 0x3du) {
            return 1u;
        }
    }
    return 2u;
}

}  // namespace d_0051d18c
GUEST_EXPORT_FRAMED(0x0051d18c, d_0051d18c::villager_relation_tier_of_slots, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0051d264: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the current player's state (bits 2 to 5 of +0x8f88, when active and not 0xa) in the shared NPC info (+0x9a);
// 0xff otherwise.
namespace d_0051d264 {

struct __attribute__((packed)) Local_0051d264_r1_1 {
    u8 unknown_0[0x9a];  // (not used here)
    u8 byte_9a;
};
GUEST_OFFSET(Local_0051d264_r1_1, byte_9a, 0x9a);

inline constexpr u32 npc_net_share_info_instance_address = 0x0095386cu;
inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x0095386c> npc_net_share_info_instance;
inline guest::global<u32, 0x00aaf14c> current_player_data;

u32 NpcNetShareInfo__set_player_state() {
    gptr<Local_0051d264_r1_1> r1_1 = gptr<Local_0051d264_r1_1>(*npc_net_share_info_instance);
    u32 r0_1 = *current_player_data;
    r1_1->byte_9a = 0xff;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1_1.addr();
        return r0_1;
    }
    u32 r0_2 = *gptr<u8>(r0_1 + 0x8f88u);
    if ((r0_2 & 0x40u) == 0) {
        guest::cpu()->r[1] = r1_1.addr();
        return r0_2;
    }
    if ((r0_2 >> 7) != 0) {
        guest::cpu()->r[1] = r1_1.addr();
        return r0_2;
    }
    u32 r0_3 = r0_2 << 0x1a;
    if (0xau != r0_3 >> 0x1c) {
        r0_3 >>= 0x1c;
        r1_1->byte_9a = u8(r0_3);
    }
    guest::cpu()->r[1] = r1_1.addr();
    return r0_3;
}

}  // namespace d_0051d264
GUEST_EXPORT(0x0051d264, d_0051d264::NpcNetShareInfo__set_player_state);

// f_0051d710: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies 0x32 bytes into entry `index` (below 4) of the table at 0xa82b90.
namespace d_0051d710 {

inline constexpr u32 villager_runtime_table_address = 0x00a82b90u;
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> clear;
inline constexpr guest::Function<0x0051e7d4, u32(u32, u32, u32, u32)> ItemCatalogStore__update;

void set_villager_runtime_entry(u32 r0, u32 own, u32 r2) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r5_1 = (own + (own << 3) + (own << 4) << 1) + villager_runtime_table_address;
    clear(own >= 4u ? villager_runtime_table_address : r5_1, 0x32u, r2, guest::cpu()->r[3]);
    u32 r0_2 = villager_runtime_table_address;
    if (own < 4u) {
        r0_2 = r5_1;
    }
    copy_bytes_at_any_alignment(r0_2, r0, 0x32u);
    if (own != 0) {
        frame.release();
        ItemCatalogStore__update(villager_runtime_table_address, 2u, guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
    }
}

}  // namespace d_0051d710
GUEST_EXPORT(0x0051d710, d_0051d710::set_villager_runtime_entry);

// f_0051d7f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears entry `index` (below 4, 0x32 bytes) of the villager table and, for a nonzero index, refreshes it.
namespace d_0051d7f0 {

inline constexpr u32 villager_runtime_table_address = 0x00a82b90u;
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> clear;
inline constexpr guest::Function<0x0051e7d4, u32(u32, u32, u32, u32)> ItemCatalogStore__update;

u32 VillagerTable__clear_entry(u32 villager_table, u32 r1_unused, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = villager_runtime_table_address;
    if (villager_table < 4u) {
        r2 = villager_table * 9u;
        r0_1 = (r2 + (villager_table << 4) << 1) + villager_runtime_table_address;
    }
    u32 r0_2 = clear(r0_1, 0x32u, r2, guest::cpu()->r[3]);
    if (villager_table != 0) {
        frame.release();
        return ItemCatalogStore__update(villager_runtime_table_address, 3u, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    return r0_2;
}

}  // namespace d_0051d7f0
GUEST_EXPORT(0x0051d7f0, d_0051d7f0::VillagerTable__clear_entry);

// f_0051d8e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Address of word `index` (below 0x30) of the table at 0xa83288.
namespace d_0051d8e8 {

inline constexpr u32 global_00a83288_address = 0x00a83288u;

u32 word_of_48_a83288(u32 r0) {
    u32 r0_1 = global_00a83288_address;
    if (!(r0 >= 0x30u)) {
        r0_1 += (r0 << 2);
    }
    guest::cpu()->r[1] = r0;
    return r0_1;
}

}  // namespace d_0051d8e8
GUEST_EXPORT(0x0051d8e8, d_0051d8e8::word_of_48_a83288);

// f_0051dacc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the four 0x32-byte entries of the table at 0xa82b90.
namespace d_0051dacc {

inline constexpr u32 villager_runtime_table_address = 0x00a82b90u;
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> clear;
inline constexpr guest::Function<0x0051e7d4, u32(u32, u32, u32)> ItemCatalogStore__update;

void clear_villager_runtime_table(u32 r0_unused, u32 r1_unused, u32 r2) {
    u32 i = 0u;
    do {
        u32 r5_1 = i & 0xffu;
        u32 r0_1 = villager_runtime_table_address;
        if (r5_1 < 4u) {
            r2 = r5_1 * 9u;
            r0_1 = (r2 + (r5_1 << 4) << 1) + villager_runtime_table_address;
        }
        clear(r0_1, 0x32u, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        if (r5_1 != 0) {
            ItemCatalogStore__update(villager_runtime_table_address, 3u, r2);
            r2 = guest::cpu()->r[2];
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 4);
}

}  // namespace d_0051dacc
GUEST_EXPORT_FRAMED(0x0051dacc, d_0051dacc::clear_villager_runtime_table, 0x4070);  // pushes {i, r5, r6, lr} first, as the original

// f_0051dbbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Picks a random villager for the villager, weighting by their relation score.
namespace d_0051dbbc {

inline constexpr guest::Function<0x001198e9, u32(u32, u32)> SaveVillager__has_flag_1;
inline constexpr guest::Function<0x0011a1c9, u32(u32, u32)> SaveVillager__has_flag_2510_bit0;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x003009a9, u32(u32, u32)> villager_record_at;
inline constexpr guest::Function<0x0051f9cc, u32(u32, u32)> VillagerRecords__same_villager;
inline constexpr guest::Function<0x00565c10, u32(u32, u32)> random_up_to;

u32 pick_villager_partner(u32 r0, u32 r1, float S0) {
    u32 r1_2 = 0;
    u32 save_data = get_save_data(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 villager_record = villager_record_at(save_data + 0x292a4u, r0);
    u32 r8 = 0u;
    u32 r6 = villager_record;
    u32 r7 = ~0u;
    u32 r9 = r8;
    u32 save_data_2 = get_save_data(villager_record, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    u32 r10 = save_data_2 + 0x292a4u;
    u32 i = 0u;
    do {
        guest::cpu()->s[0] = S0;
        u32 villager_record_2 = villager_record_at(r10, i);
        r1_2 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        u32 zf_1 = villager_record_2 == 0;
        if (!zf_1) {
            zf_1 = r6 == villager_record_2;
        }
        if (!zf_1) {
            u32 r0_6 = SaveVillager__has_flag_1(villager_record_2, r1_2);
            r1_2 = guest::cpu()->r[1];
            S0 = guest::cpu()->s[0];
            if (r0_6 == 0) {
                u32 r0_7 = SaveVillager__has_flag_2510_bit0(villager_record_2, r1_2);
                r1_2 = guest::cpu()->r[1];
                S0 = guest::cpu()->s[0];
                if (r0_7 == 0) {
                    u32 r0_8 = 0u;
                    r1_2 = villager_record_2;
                    if (r6 != 0) {
                        r0_8 = VillagerRecords__same_villager(r6, r1_2);
                        r1_2 = guest::cpu()->r[1];
                        S0 = guest::cpu()->s[0];
                    }
                    if (r0_8 > r8) {
                        r8 = r0_8;
                        r7 = i;
                        r9 = 0u;
                    } else if (r8 != 0 && r0_8 == r8) {
                        r9 += 1u;
                        float S0_3 = float(r9);
                        guest::cpu()->s[0] = S0_3;
                        random_up_to(r0_8, r1_2);
                        r1_2 = guest::cpu()->r[1];
                        S0 = guest::cpu()->s[0];
                        if (s32(std::bit_cast<u32>(S0)) < 0x3f800000) {
                            r7 = i;
                        }
                    }
                }
            }
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 0xa);
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0;
    return r7;
}

}  // namespace d_0051dbbc
GUEST_EXPORT_FRAMED(0x0051dbbc, d_0051dbbc::pick_villager_partner, 0x47f0);  // pushes {i, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0051dd50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Forwards to make_adjusted_words.
namespace d_0051dd50 {

inline constexpr u32 global_00a83394_address = 0x00a83394u;
inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> make_adjusted_words;

void make_adjusted_words_veneer() {
    make_adjusted_words(guest::cpu()->r[0], global_00a83394_address, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0051dd50
GUEST_EXPORT(0x0051dd50, d_0051dd50::make_adjusted_words_veneer);

// f_0051dfe4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finishes a normal NPC's part: state 7, no data.
namespace d_0051dfe4 {

struct __attribute__((packed)) FinishNpcNmlPartArg0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
};
GUEST_OFFSET(FinishNpcNmlPartArg0, word_0, 0x0);
GUEST_OFFSET(FinishNpcNmlPartArg0, word_4, 0x4);
GUEST_OFFSET(FinishNpcNmlPartArg0, byte_8, 0x8);


void finish_npc_nml_part(gptr<FinishNpcNmlPartArg0> arg0) {
    arg0->byte_8 = 7;
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_0051dfe4
GUEST_EXPORT(0x0051dfe4, d_0051dfe4::finish_npc_nml_part);

// f_0051dffc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a normal NPC's base part: empty.
namespace d_0051dffc {

struct __attribute__((packed)) ConstructNpcNmlBaseArg0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 unknown_9[0x1];  // (not used here)
    u16 half_a;
    u8 byte_c;
};
GUEST_OFFSET(ConstructNpcNmlBaseArg0, word_0, 0x0);
GUEST_OFFSET(ConstructNpcNmlBaseArg0, word_4, 0x4);
GUEST_OFFSET(ConstructNpcNmlBaseArg0, byte_8, 0x8);
GUEST_OFFSET(ConstructNpcNmlBaseArg0, half_a, 0xa);
GUEST_OFFSET(ConstructNpcNmlBaseArg0, byte_c, 0xc);


void construct_npc_nml_base(gptr<ConstructNpcNmlBaseArg0> arg0) {
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    arg0->byte_8 = 0;
    arg0->half_a = 0;
    arg0->byte_c = 0;
}

}  // namespace d_0051dffc
GUEST_EXPORT(0x0051dffc, d_0051dffc::construct_npc_nml_base);

// f_0051e018: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys the particle handle at +0x1c.
namespace d_0051e018 {

inline constexpr guest::Function<0x002e6944, u32(u32)> SeadParticleHandle__destructor;

u32 ParticleHolder__destroy(u32 particle_holder) {
    u32 sead_particle_handle_rec = particle_holder + 0x1cu;
    SeadParticleHandle__destructor(sead_particle_handle_rec);
    return sead_particle_handle_rec - 0x1cu;
}

}  // namespace d_0051e018
GUEST_EXPORT_FRAMED(0x0051e018, d_0051e018::ParticleHolder__destroy, 0x4010);  // pushes {r4, lr} first, as the original

// f_0051e6fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the 11 villager ids (+0x7b8) and their checks, optionally the 10 ids at +0x7ce, and the shared NPC info's
// ids.
namespace d_0051e6fc {

inline constexpr u32 npc_net_share_info_instance_address = 0x0095386cu;
inline guest::global<u32, 0x0095386c> npc_net_share_info_instance;

u32 reset_villager_ids(u32 r0, u32 r1) {
    u32 r3 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r2 = 0xffffu;
    u32 r4 = 0u;
    u32 r5 = 0xbu;
    u32 r6 = r0 + 0x7b8u;
    do {
        u32 r12_1 = r6;
        if (r4 < 0xbu) {
            r12_1 = r6 + (r4 << 1);
        }
        res_1 = r5 - 1u;
        r5 = res_1;
        r4 += 1u;
        *gptr<u16>(r12_1) = u16(r2);
        guest::preempt();
    } while (res_1 != 0);
    *gptr<u8>(r0 + 0x80eu) = 0xa5;
    *gptr<u8>(r0 + 0x80du) = 0xa5;
    if (r1 != 0) {
        r1 = r0 + 0x7ceu;
        r4 = 1u;
        r3 = r2;
        u32 r12 = r4;
        *gptr<u16>(r1) = u16(r2);
        do {
            u32 r4_1 = r4 + 1u;
            *gptr<u16>(r1 + (r4 << 1)) = u16(r3);
            r12 += 2u;
            r4 = r4_1 + 1u;
            *gptr<u16>(r1 + (r4_1 << 1)) = u16(r3);
            guest::preempt();
        } while (s32(r12) < 9);
    }
    r1 = 0u;
    *gptr<u16>(r0 + 0x811u) = u16(r1);
    r0 = *npc_net_share_info_instance;
    if (r0 != 0) {
        r3 = 0xbu;
        do {
            u32 r12_2 = r0 + (r1 << 1);
            res_2 = r3 - 1u;
            r3 = res_2;
            r1 += 1u;
            *gptr<u16>(r12_2 + 0x6cu) = u16(r2);
            guest::preempt();
        } while (res_2 != 0);
        r1 = 0xa5u;
        *gptr<u8>(r0 + 0x82u) = u8(r1);
        *gptr<u8>(r0 + 0x83u) = u8(r1);
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0051e6fc
GUEST_EXPORT_FRAMED(0x0051e6fc, d_0051e6fc::reset_villager_ids, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_0051f568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds to the counter byte, clamped to 0 to 32.
namespace d_0051f568 {

struct __attribute__((packed)) Counter32 {
    u8 byte_0;
};
GUEST_OFFSET(Counter32, byte_0, 0x0);


void Counter32__add(gptr<Counter32> counter32, u32 r1) {
    u32 r1_1 = r1 + u32(counter32->byte_0);
    if (s32(r1_1) < 0) {
        counter32->byte_0 = 0;
        guest::cpu()->r[1] = 0u;
        return;
    }
    if (r1_1 >= 0x20u) {
        r1_1 = 0x20u;
    }
    counter32->byte_0 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0051f568
GUEST_EXPORT(0x0051f568, d_0051f568::Counter32__add);

// f_0051f58c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Halves the counter byte (at most 32).
namespace d_0051f58c {

struct __attribute__((packed)) Counter32 {
    u8 byte_0;
};
GUEST_OFFSET(Counter32, byte_0, 0x0);


void Counter32__halve(gptr<Counter32> counter32) {
    u32 r1_1 = u32(counter32->byte_0) >> 1;
    if (r1_1 > 0x20u) {
        r1_1 = 0x20u;
    }
    counter32->byte_0 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0051f58c
GUEST_EXPORT(0x0051f58c, d_0051f58c::Counter32__halve);

// f_0051f84c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The current state (below 8) of the record at +0x9ac, or 0 when capped (+0x9a8) or out of range.
namespace d_0051f84c {

struct __attribute__((packed)) CurrentStateBelow8Arg0 {
    u8 unknown_0[0x9a8];  // (not used here)
    u8 byte_9a8;
};
GUEST_OFFSET(CurrentStateBelow8Arg0, byte_9a8, 0x9a8);

inline constexpr guest::Function<0x0071b8d0, u32(u32, u32, u32, u32)> npc_text_entry_kind;

u32 current_state_below_8(gptr<CurrentStateBelow8Arg0> arg0) {
    u32 r1_1 = arg0->byte_9a8;
    if (r1_1 != 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 text_kind = npc_text_entry_kind((arg0.addr() + 0x9a8u) + 4u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    return text_kind < 8u ? text_kind : 0u;
}

}  // namespace d_0051f84c
GUEST_EXPORT_FRAMED(0x0051f84c, d_0051f84c::current_state_below_8, 0x4010);  // pushes {r4, lr} first, as the original

// f_0051f874: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The relation score of the two personality kinds from the table.
namespace d_0051f874 {


u32 relation_score_table_lookup(u32 r0, u32 r1) {
    u32 r3 = 0u;
    if (r0 < 0x23u && r1 < 0x23u) {
        u32 r2 = 0x880624u;
        u32 r4 = 1u;
        u32 i = r4;
        u32 r6 = r4 + u32(s32(r2 + 0xcu - r2) >> 1);
        do {
            u32 r5_1 = *gptr<u8>(r2);
            if (r5_1 == r0 && *gptr<u8>(r2 + 1u) == r1 || r5_1 == r1 && *gptr<u8>(r2 + 1u) == r0) {
                if (r2 != 0) {
                    return 0x80u;
                }
                break;
            }
            i += 1u;
            r2 += 2u;
            guest::preempt();
        } while (s32(r6) > s32(i));
        if (r0 != r1) {
            r2 = 0x880540u;
            if (r0 >= 0x23u || r1 >= 0x23u) {
                goto L_51f950;
            }
            i = 1u;
            r6 = r4 + u32(s32(r2 + 8u - r2) >> 1);
L_51f90c:;
            u32 r5_2 = *gptr<u8>(r2);
            if ((r5_2 != r0 || *gptr<u8>(r2 + 1u) != r1) && (r5_2 != r1 || *gptr<u8>(r2 + 1u) != r0)) {
                i += 1u;
                r2 += 2u;
                if (s32(r6) > s32(i)) {
                    guest::preempt();
                    goto L_51f90c;
                }
                goto L_51f950;
            }
            if (r2 == 0) {
                goto L_51f950;
            }
        }
        return 0x40u;
L_51f950:;
        r2 = 0x880630u;
        if (r0 < 0x23u && r1 < 0x23u) {
            i = 1u;
            r4 += u32(s32(r2 + 0xau - r2) >> 1);
            do {
                u32 r5_3 = *gptr<u8>(r2);
                if (r5_3 == r0 && *gptr<u8>(r2 + 1u) == r1 || r5_3 == r1 && *gptr<u8>(r2 + 1u) == r0) {
                    if (r2 != 0) {
                        return r3;
                    }
                    break;
                }
                i += 1u;
                r2 += 2u;
                guest::preempt();
            } while (s32(r4) > s32(i));
        }
        r3 = 0x20u;
    }
    return r3;
}

}  // namespace d_0051f874
GUEST_EXPORT_FRAMED(0x0051f874, d_0051f874::relation_score_table_lookup, 0x1f0);  // pushes {r4, r5, r6, r7, r8} first, as the original

// f_0051fb04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Picks a random town villager for the villager, weighting each by their relation score and skipping the ones who are
// away or moving.
namespace d_0051fb04 {

struct __attribute__((packed)) Local_0051fb04_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0051fb04_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0051fb04_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_0051fb04_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0051fb04_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0051fb04_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_0051fb04_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_0051fb04_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_0051fb04_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_0051fb04_ea_3, word_8, 0x8);
GUEST_OFFSET(Local_0051fb04_ea_3, word_c, 0xc);
GUEST_OFFSET(Local_0051fb04_ea_3, word_10, 0x10);
GUEST_OFFSET(Local_0051fb04_ea_3, word_14, 0x14);
GUEST_OFFSET(Local_0051fb04_ea_3, word_18, 0x18);
GUEST_OFFSET(Local_0051fb04_ea_3, word_1c, 0x1c);

struct __attribute__((packed)) Local_0051fb04_ea_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_0051fb04_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_0051fb04_ea_4, word_4, 0x4);
GUEST_OFFSET(Local_0051fb04_ea_4, word_8, 0x8);
GUEST_OFFSET(Local_0051fb04_ea_4, word_c, 0xc);
GUEST_OFFSET(Local_0051fb04_ea_4, word_10, 0x10);
GUEST_OFFSET(Local_0051fb04_ea_4, word_14, 0x14);
GUEST_OFFSET(Local_0051fb04_ea_4, word_18, 0x18);
GUEST_OFFSET(Local_0051fb04_ea_4, word_1c, 0x1c);

struct __attribute__((packed)) Local_0051fb04_ea_5 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_0051fb04_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_0051fb04_ea_5, word_4, 0x4);
GUEST_OFFSET(Local_0051fb04_ea_5, word_8, 0x8);
GUEST_OFFSET(Local_0051fb04_ea_5, word_c, 0xc);
GUEST_OFFSET(Local_0051fb04_ea_5, word_10, 0x10);
GUEST_OFFSET(Local_0051fb04_ea_5, word_14, 0x14);
GUEST_OFFSET(Local_0051fb04_ea_5, word_18, 0x18);
GUEST_OFFSET(Local_0051fb04_ea_5, word_1c, 0x1c);

inline constexpr guest::Function<0x001198e9, u32(u32, u32)> SaveVillager__has_flag_1;
inline constexpr guest::Function<0x0011a1c9, u32(u32, u32)> SaveVillager__has_flag_2510_bit0;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x003009a9, u32(u32, u32)> villager_record_at;
inline constexpr guest::Function<0x00301e20, u32(u32)> is_villager_record;
inline constexpr guest::Function<0x0051f9cc, u32(u32, u32)> VillagerRecords__same_villager;
inline constexpr guest::Function<0x00565c10, u32(u32, u32)> random_up_to;

u32 pick_villager_partner_weighted(u32 r0, u32 r1, float S0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 zf_1 = 0;
    u32 r0_7 = 0;
    gptr<Local_0051fb04_ea_4> ea_4 = gptr<Local_0051fb04_ea_4>(0u);
    u32 r4_2 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    u32 r10_1 = 0;
    gptr<Local_0051fb04_ea_1> ea_1 = gptr<Local_0051fb04_ea_1>(r13 - 8);
    ea_1->word_0 = r4;
    ea_1->word_4 = r14;
    r13 -= 8;
    guest::cpu()->r[13] = r13;
    u32 save_data = get_save_data(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] = r13;
    u32 villager_record = villager_record_at(save_data + 0x292a4u, r0);
    gptr<Local_0051fb04_ea_2> ea_2 = gptr<Local_0051fb04_ea_2>(r13);
    r13 += 8;
    u32 r4_1 = ea_2->word_0;
    r14 = ea_2->word_4;
    gptr<Local_0051fb04_ea_3> ea_3 = gptr<Local_0051fb04_ea_3>(r13 - 0x20);
    ea_3->word_0 = r4_1;
    ea_3->word_4 = r5;
    ea_3->word_8 = r6;
    ea_3->word_c = r7;
    ea_3->word_10 = r8;
    ea_3->word_14 = r9;
    ea_3->word_18 = r10;
    ea_3->word_1c = r14;
    r13 -= 0x20;
    r6 = villager_record;
    if (villager_record == 0) {
        goto L_51fb88;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = is_villager_record(villager_record);
    if (r0_4 == 0) {
        goto L_51fb88;
    }
    r7 = ~0u;
    r9 = r7;
    r8 = 0u;
    guest::cpu()->r[13] = r13;
    r0_5 = get_save_data(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    r10 = r0_5 + 0x292a4u;
    r4 = 0u;
L_51fb5c:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0_6 = villager_record_at(r10, r4);
    r1_2 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    zf_1 = r0_6 == 0;
    if (!zf_1) {
        zf_1 = r6 == r0_6;
    }
    if (zf_1) {
        goto L_51fc00;
    }
    guest::cpu()->r[13] = r13;
    r0_7 = SaveVillager__has_flag_2510_bit0(r0_6, r1_2);
    r1_2 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    if (r0_7 == 0) {
        guest::cpu()->r[13] = r13;
        u32 r0_8 = SaveVillager__has_flag_1(r0_6, r1_2);
        r1_2 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        if (r0_8 == 0) {
            u32 r0_9 = 0u;
            r1_2 = r0_6;
            if (r6 != 0) {
                guest::cpu()->r[13] = r13;
                r0_9 = VillagerRecords__same_villager(r6, r1_2);
                r1_2 = guest::cpu()->r[1];
                S0 = guest::cpu()->s[0];
            }
            if (r7 > r0_9) {
                r7 = r0_9;
                r9 = r4;
                r8 = 0u;
            } else if (r7 + 1u != 0 && r0_9 == r7) {
                r8 += 1u;
                float S0_3 = float(r8);
                guest::cpu()->r[13] = r13;
                guest::cpu()->s[0] = S0_3;
                random_up_to(r0_9, r1_2);
                r1_2 = guest::cpu()->r[1];
                S0 = guest::cpu()->s[0];
                if (s32(std::bit_cast<u32>(S0)) < 0x3f800000) {
                    r9 = r4;
                }
            }
        }
        goto L_51fc00;
    }
    goto L_51fc00;
L_51fb88:;
    ea_4 = gptr<Local_0051fb04_ea_4>(r13);
    r13 += 0x20;
    r4_2 = ea_4->word_0;
    r5_1 = ea_4->word_4;
    r6_1 = ea_4->word_8;
    r7_1 = ea_4->word_c;
    r8_1 = ea_4->word_10;
    r9_1 = ea_4->word_14;
    r10_1 = ea_4->word_18;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[13] = r13;
    return ~0u;
L_51fc00:;
    r4 += 1u;
    if (s32(r4) >= 0xa) {
        gptr<Local_0051fb04_ea_5> ea_5 = gptr<Local_0051fb04_ea_5>(r13);
        r13 += 0x20;
        u32 r4_3 = ea_5->word_0;
        u32 r5_2 = ea_5->word_4;
        u32 r6_2 = ea_5->word_8;
        u32 r7_2 = ea_5->word_c;
        u32 r8_2 = ea_5->word_10;
        u32 r9_2 = ea_5->word_14;
        u32 r10_2 = ea_5->word_18;
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[4] = r4_3;
        guest::cpu()->r[5] = r5_2;
        guest::cpu()->r[6] = r6_2;
        guest::cpu()->r[7] = r7_2;
        guest::cpu()->r[8] = r8_2;
        guest::cpu()->r[9] = r9_2;
        guest::cpu()->r[10] = r10_2;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        return r9;
    }
    guest::preempt();
    goto L_51fb5c;
}

}  // namespace d_0051fb04
GUEST_EXPORT(0x0051fb04, d_0051fb04::pick_villager_partner_weighted);

// f_0051fc14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the resource of the table entry for the id.
namespace d_0051fc14 {

inline constexpr guest::Function<0x0051ff28, u32(u32, u32, u32, u32)> VillagerRecords__find;
inline constexpr guest::Function<0x00520ce8, u32(u32, u32, u32, u32)> ResourceTable__entry;

struct __attribute__((packed)) ResourceTableLoadEntryFrame {
    u32 word_0;
};
GUEST_OFFSET(ResourceTableLoadEntryFrame, word_0, 0x0);
GUEST_SIZE(ResourceTableLoadEntryFrame, 0x4);

u32 ResourceTable__load_entry(u32 resource_table, u32 string_pool, u32 notice, u32 r3) {
    guest::StackFrameOf<ResourceTableLoadEntryFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = ResourceTable__entry(string_pool, string_pool, notice, r3);
    frame->word_0 = r3;
    return VillagerRecords__find(resource_table, r0_1, 0u, notice);
}

}  // namespace d_0051fc14
GUEST_EXPORT_FRAMED(0x0051fc14, d_0051fc14::ResourceTable__load_entry, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original
