// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_006002e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006002e4 {

struct __attribute__((packed)) script__FlowEngine {
    u32 word_0;
    u8 unknown_4[0x10];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 byte_20;
    u8 unknown_21[0x3];  // (not used here)
    u32 word_24;
    u32 word_28;
    u8 byte_2c;
    u8 unknown_2d[0x3];  // (not used here)
    u32 word_30;
    u32 word_34;
    u8 unknown_38[0x14];  // (not used here)
    u8 byte_4c;
    u8 unknown_4d[0x2f];  // (not used here)
    u8 byte_7c;
    u8 unknown_7d[0x3];  // (not used here)
    u32 word_80;
    u32 word_84;
    u32 word_88;
};
GUEST_OFFSET(script__FlowEngine, word_0, 0x0);
GUEST_OFFSET(script__FlowEngine, word_14, 0x14);
GUEST_OFFSET(script__FlowEngine, word_18, 0x18);
GUEST_OFFSET(script__FlowEngine, word_1c, 0x1c);
GUEST_OFFSET(script__FlowEngine, byte_20, 0x20);
GUEST_OFFSET(script__FlowEngine, word_24, 0x24);
GUEST_OFFSET(script__FlowEngine, word_28, 0x28);
GUEST_OFFSET(script__FlowEngine, byte_2c, 0x2c);
GUEST_OFFSET(script__FlowEngine, word_30, 0x30);
GUEST_OFFSET(script__FlowEngine, word_34, 0x34);
GUEST_OFFSET(script__FlowEngine, byte_4c, 0x4c);
GUEST_OFFSET(script__FlowEngine, byte_7c, 0x7c);
GUEST_OFFSET(script__FlowEngine, word_80, 0x80);
GUEST_OFFSET(script__FlowEngine, word_84, 0x84);
GUEST_OFFSET(script__FlowEngine, word_88, 0x88);

struct __attribute__((packed)) Local_006002e4_ea_8 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006002e4_ea_8, word_0, 0x0);
GUEST_OFFSET(Local_006002e4_ea_8, word_4, 0x4);

struct __attribute__((packed)) Local_006002e4_r0_11 {
    u8 unknown_0[0x5c];  // (not used here)
    u32 word_5c;
    u32 word_60;
};
GUEST_OFFSET(Local_006002e4_r0_11, word_5c, 0x5c);
GUEST_OFFSET(Local_006002e4_r0_11, word_60, 0x60);

struct __attribute__((packed)) Block {
    u32 word_0;
    u8 unknown_4[0x1e0];  // (not used here)
    u8 byte_1e4;
    u8 byte_1e5;
    u8 byte_1e6;
    u8 byte_1e7;
};
GUEST_OFFSET(Block, word_0, 0x0);
GUEST_OFFSET(Block, byte_1e4, 0x1e4);
GUEST_OFFSET(Block, byte_1e5, 0x1e5);
GUEST_OFFSET(Block, byte_1e6, 0x1e6);
GUEST_OFFSET(Block, byte_1e7, 0x1e7);

struct __attribute__((packed)) Local_006002e4_r0_6 {
    u32 word_0;
    u8 unknown_4[0x24];  // (not used here)
    u8 byte_28;
    u8 byte_29;
};
GUEST_OFFSET(Local_006002e4_r0_6, word_0, 0x0);
GUEST_OFFSET(Local_006002e4_r0_6, byte_28, 0x28);
GUEST_OFFSET(Local_006002e4_r0_6, byte_29, 0x29);

inline constexpr u32 vtable_script__FlowEngine = 0x009084d0u;
inline constexpr u32 vtable_script__FlowSeq = 0x009097c8u;
inline constexpr guest::Function<0x001391d8, u32(u32, u32, u32)> allocate;
inline constexpr guest::Function<0x005b1840, u32(u32, u32, u32)> construct_empty_argument_handle;
inline constexpr guest::Function<0x005f1138, u32(u32, u32)> script__Loader__LoadSplit__LoadSplit;
inline constexpr guest::Function<0x00810f00, u32(u32)> construct_buffered_string_20;
inline constexpr guest::Function<0x00811048, u32(u32)> construct_buffered_string_40;
inline constexpr guest::Function<0x00811190, u32(u32, u32, u32, u32)> construct_buffered_string_8;

u32 script__FlowEngine__FlowEngine(gptr<script__FlowEngine> flow_engine, u32 r1, u32 r2) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r0 = flow_engine.addr();
    u32 r12 = guest::cpu()->r[12];
    *frame.at<u32>(0x20) = r12;  // (from the original)
    u32 r9 = 0u;
    u32 r10 = ~0u;
    flow_engine->word_0 = r1;
    flow_engine->word_14 = r9;
    flow_engine->word_18 = r9;
    flow_engine->word_1c = r9;
    flow_engine->byte_20 = u8(r9);
    flow_engine->word_24 = r9;
    flow_engine->word_28 = r9;
    flow_engine->byte_2c = u8(r9);
    flow_engine->word_30 = r10;
    flow_engine->word_34 = r10;
    u32 r0_1 = ((r0 + 0x24u) + 0x10u) + 4u;  // (from the original)
    construct_buffered_string_8(r0_1, r1, r2, guest::cpu()->r[3]);
    flow_engine->byte_4c = u8(r9);
    u32 r0_2 = r0_1 + 0x18u;  // (from the original)
    construct_buffered_string_20(r0_2);
    r1 = guest::cpu()->r[1];
    u32 r0_3 = r0_2 - 0x2cu;  // (from the original)
    r2 = r0_3 + 0x60u;  // (from the original)
    flow_engine->byte_7c = u8(r9);
    u32 r7 = vtable_script__FlowEngine;
    u32 r8 = vtable_script__FlowSeq;
    flow_engine->word_80 = r9;
    flow_engine->word_84 = r9;
    flow_engine->word_88 = r10;
    u32 r5 = r0_3 - 0x24u;  // (from the original)
    u32 r4 = 0u;
    u32 r11 = 4u;
    do {
        gptr<Block> block_2 = gptr<Block>(allocate(0x1e8u, r1, r2));  // (from the original)
        r2 = guest::cpu()->r[2];
        if (block_2.addr() != 0) {
            block_2->word_0 = r7;
            u32 r0_5 = block_2.addr() + 4u;
            construct_empty_argument_handle(r0_5, guest::cpu()->r[1], r2);
            gptr<Local_006002e4_r0_6> r0_6 = gptr<Local_006002e4_r0_6>(r0_5 - 4u);
            *gptr<u32>(r0_6.addr() + 0xcu) = r10;  // (from the original)
            *gptr<u32>(r0_6.addr() + 0x14u) = r9;  // (from the original)
            *gptr<u32>(r0_6.addr() + 0x10u) = r10;  // (from the original)
            *gptr<u32>(r0_6.addr() + 0x18u) = r9;  // (from the original)
            *gptr<u8>(r0_6.addr() + 0x1cu) = u8(r9);  // (from the original)
            r0_6->word_0 = r8;
            gptr<Local_006002e4_ea_8> ea_8 = gptr<Local_006002e4_ea_8>(r0_6.addr() + 0x20u);  // (from the original)
            ea_8->word_0 = r5;
            ea_8->word_4 = r5 + 0x24u;  // (from the original)
            r0_6->byte_28 = u8(r9);
            r0_6->byte_29 = u8(r11);
            u32 load_split = r0_6.addr() + 0x2cu;  // (from the original)
            script__Loader__LoadSplit__LoadSplit(load_split, 0u);
            u32 ea_9 = load_split + 0x100u;  // (from the original)
            *gptr<u32>(ea_9) = r9;
            u32 r0_8 = ea_9 + 4u;
            construct_buffered_string_40(r0_8);
            u32 ea_10 = r0_8 + 0x4cu;  // (from the original)
            *gptr<u32>(ea_10) = r9;
            u32 ea_11 = ea_10 + 4u;
            *gptr<u32>(ea_11) = r10;
            u32 r0_9 = ea_11 + 4u;
            construct_buffered_string_20(r0_9);
            u32 r0_10 = r0_9 + 0x2cu;  // (from the original)
            construct_buffered_string_20(r0_10);
            r2 = guest::cpu()->r[2];
            gptr<Local_006002e4_r0_11> r0_11 = gptr<Local_006002e4_r0_11>(r0_10 - 0x30u);  // (from the original)
            r0_11->word_5c = r9;
            r0_11->word_60 = r10;
            block_2 = gptr<Block>(r0_11.addr() - 0x180u);  // (from the original)
            block_2->byte_1e4 = u8(r9);
            block_2->byte_1e5 = u8(r9);
            block_2->byte_1e6 = u8(r9);
            block_2->byte_1e7 = u8(r9);
        }
        r1 = r5 + (r4 << 2);
        r4 += 1u;
        *gptr<u32>(r1 + 4u) = block_2.addr();
        guest::preempt();
    } while (r4 < 4u);
    guest::cpu()->r[1] = r1;
    return r5;
}

}  // namespace d_006002e4
GUEST_EXPORT_FRAMED(0x006002e4, d_006002e4::script__FlowEngine__FlowEngine, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0060143c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Binds the resource of the current mode's entry (from the normal or the alternative table) as the talk's argument.
namespace d_0060143c {

struct __attribute__((packed)) Talk {
    u8 unknown_0[0x18];  // (not used here)
    u8 byte_18;
    u8 unknown_19[0x7];  // (not used here)
    u32 word_20;
    u8 unknown_24[0xd8];  // (not used here)
    u32 word_fc;
};
GUEST_OFFSET(Talk, byte_18, 0x18);
GUEST_OFFSET(Talk, word_20, 0x20);
GUEST_OFFSET(Talk, word_fc, 0xfc);

inline constexpr guest::Function<0x005b1760, u32(u32, u32, u32, u32)> acquire_argument_handle_kind_b;
inline constexpr guest::Function<0x005d46dc, u32(u32, u32, u32, u32)> value_for_mode;

void Talk__bind_mode_resource(gptr<Talk> talk) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = talk->byte_18;
    u32 r5_1 = r0_1 == 0 ? talk->word_20 : talk->word_fc;
    u32 r1_1 = 0u;
    if (r5_1 != 0) {
        u32 value_2 = value_for_mode(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = r5_1 + *gptr<u32>(r5_1 + ((value_2 >= 0xau ? 0u : u32(*gptr<u8>(value_2 + 0x890f08u))) << 3));  // (from the original)
    }
    frame.release();
    acquire_argument_handle_kind_b(talk.addr() + 0x168u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    return;  // (from the original)
}

}  // namespace d_0060143c
GUEST_EXPORT(0x0060143c, d_0060143c::Talk__bind_mode_resource);

// f_00601f20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the wait and, unless asked to keep it, the flag and the window's vertical scroll.
namespace d_00601f20 {

struct __attribute__((packed)) TalkWindow {
    u8 unknown_0[0x14];  // (not used here)
    u8 byte_14;
    u8 unknown_15[0x3];  // (not used here)
    u32 word_18;
    u8 unknown_1c[0x324];  // (not used here)
    u32 word_340;
};
GUEST_OFFSET(TalkWindow, byte_14, 0x14);
GUEST_OFFSET(TalkWindow, word_18, 0x18);
GUEST_OFFSET(TalkWindow, word_340, 0x340);

inline constexpr guest::Function<0x006e5f58, u32(u32, u32)> NameWindow__set_scroll_vertical;

u32 TalkWindow__reset_wait(gptr<TalkWindow> talk_window, u32 r1) {
    talk_window->word_18 = 0;
    if (r1 != 0) {
        guest::cpu()->r[1] = 0u;
        return talk_window.addr();
    }
    talk_window->byte_14 = 0;
    return NameWindow__set_scroll_vertical(talk_window->word_340 + 0x14u, 0u);  // (from the original)
}

}  // namespace d_00601f20
GUEST_EXPORT(0x00601f20, d_00601f20::TalkWindow__reset_wait);

// f_00602144: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Links the talk window and its owner and, during a talk with no special partner, marks the talk as shown.
namespace d_00602144 {

struct __attribute__((packed)) TalkWindow {
    u8 unknown_0[0x364];  // (not used here)
    u32 word_364;
};
GUEST_OFFSET(TalkWindow, word_364, 0x364);

struct __attribute__((packed)) TalkRecept {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(TalkRecept, word_4, 0x4);

struct __attribute__((packed)) Local_00602144_r0_1 {
    u8 unknown_0[0x14];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Local_00602144_r0_1, byte_14, 0x14);

struct __attribute__((packed)) Local_00602144_r0_2 {
    u8 unknown_0[0xc];  // (not used here)
    u16 half_c;
};
GUEST_OFFSET(Local_00602144_r0_2, half_c, 0xc);

inline constexpr u32 talk_manager_address = 0x0094ee44u;
inline guest::global<u16, 0x00887254> talk_window_handler_a;
inline guest::global<u16, 0x008872d0> talk_window_handler_b;
inline guest::global<u32, 0x0094ee44> talk_manager;
inline constexpr guest::Function<0x003170f8, u32(u32, u32)> talk_state_matches;
inline constexpr guest::Function<0x0052c878, u32(u32)> Talk__notify_first_partner;

u32 TalkWindow__attach(gptr<TalkWindow> talk_window, gptr<TalkRecept> talk_recept) {
    u32 r1 = talk_recept.addr();
    talk_window->word_364 = r1;
    talk_recept->word_4 = talk_window.addr();
    gptr<Local_00602144_r0_1> r0_1 = gptr<Local_00602144_r0_1>(*talk_manager);
    if (r0_1.addr() != 0) {
        r0_1 = gptr<Local_00602144_r0_1>(talk_state_matches(0xeu, 0u));  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_1.addr() != 0) {
            gptr<Local_00602144_r0_2> r0_2 = gptr<Local_00602144_r0_2>(Talk__notify_first_partner(r0_1.addr()));
            if (r0_2.addr() != 0) {
                r0_1 = gptr<Local_00602144_r0_1>(u32(r0_2->half_c));
                r1 = *talk_window_handler_b;
                if (r0_1.addr() == r1) {
                    guest::cpu()->r[1] = r1;
                    return r0_1.addr();
                }
                r0_1 = gptr<Local_00602144_r0_1>(u32(r0_2->half_c));
                r1 = *talk_window_handler_a;
                if (r0_1.addr() == r1) {
                    guest::cpu()->r[1] = r1;
                    return r0_1.addr();
                }
            }
            r0_1 = gptr<Local_00602144_r0_1>(*talk_manager);
            r1 = r0_1->byte_14;
            if (r1 == 0) {
                r1 = 1u;
                r0_1->byte_14 = u8(r1);
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return r0_1.addr();
}

}  // namespace d_00602144
GUEST_EXPORT_FRAMED(0x00602144, d_00602144::TalkWindow__attach, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00602350: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets a positive wait in frames with its flag.
namespace d_00602350 {

struct __attribute__((packed)) TalkWindow {
    u8 unknown_0[0x14];  // (not used here)
    u8 byte_14;
    u8 unknown_15[0x3];  // (not used here)
    u32 word_18;
};
GUEST_OFFSET(TalkWindow, byte_14, 0x14);
GUEST_OFFSET(TalkWindow, word_18, 0x18);


void TalkWindow__set_wait(gptr<TalkWindow> talk_window, u32 r1, u32 r2) {
    if (r2 != 0 && s32(r2) >= 0) {
        talk_window->word_18 = r2;
        talk_window->byte_14 = u8(r1);
    }
}

}  // namespace d_00602350
GUEST_EXPORT(0x00602350, d_00602350::TalkWindow__set_wait);

// f_00602604: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the choice's message, resets the selection and sets its flag.
namespace d_00602604 {

struct __attribute__((packed)) TalkWindow {
    u8 unknown_0[0x370];  // (not used here)
    u32 word_370;
    u32 word_374;
    u8 byte_378;
};
GUEST_OFFSET(TalkWindow, word_370, 0x370);
GUEST_OFFSET(TalkWindow, word_374, 0x374);
GUEST_OFFSET(TalkWindow, byte_378, 0x378);


void TalkWindow__set_choice(gptr<TalkWindow> talk_window, u32 r1, u32 r2) {
    talk_window->word_374 = r1;
    talk_window->word_370 = ~0u;
    talk_window->byte_378 = u8(r2);
}

}  // namespace d_00602604
GUEST_EXPORT(0x00602604, d_00602604::TalkWindow__set_choice);

// f_00602938: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests closing the window with the flag, and closes the choice when one is open (state 8).
namespace d_00602938 {

struct __attribute__((packed)) TalkWindow {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 byte_5;
    u8 unknown_6[0x1a];  // (not used here)
    u8 byte_20;
    u8 unknown_21[0x327];  // (not used here)
    u32 word_348;
};
GUEST_OFFSET(TalkWindow, byte_4, 0x4);
GUEST_OFFSET(TalkWindow, byte_5, 0x5);
GUEST_OFFSET(TalkWindow, byte_20, 0x20);
GUEST_OFFSET(TalkWindow, word_348, 0x348);

inline constexpr guest::Function<0x005fbc20, u32(u32, u32, u32, u32)> MsgWindow__close;

u32 TalkWindow__request_close(gptr<TalkWindow> talk_window, u32 r1) {
    talk_window->byte_20 = u8(r1);
    talk_window->byte_5 = 1;
    u32 r1_1 = talk_window->byte_4;
    if (r1_1 != 8u) {
        guest::cpu()->r[1] = r1_1;
        return talk_window.addr();
    }
    return MsgWindow__close(talk_window->word_348, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00602938
GUEST_EXPORT(0x00602938, d_00602938::TalkWindow__request_close);

// f_00602a90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the window's state, page icon and (when asked) its text; restamps the owner's time.
namespace d_00602a90 {

struct __attribute__((packed)) TalkWindow {
    u32 word_0;
    u8 unknown_4[0x18];  // (not used here)
    u8 byte_1c;
    u8 unknown_1d[0x323];  // (not used here)
    u32 word_340;
    u8 unknown_344[0x4];  // (not used here)
    u32 word_348;
    u8 unknown_34c[0xc];  // (not used here)
    u32 word_358;
    u8 unknown_35c[0xc];  // (not used here)
    u8 byte_368;
    u8 unknown_369[0x3];  // (not used here)
    u32 word_36c;
};
GUEST_OFFSET(TalkWindow, word_0, 0x0);
GUEST_OFFSET(TalkWindow, byte_1c, 0x1c);
GUEST_OFFSET(TalkWindow, word_340, 0x340);
GUEST_OFFSET(TalkWindow, word_348, 0x348);
GUEST_OFFSET(TalkWindow, word_358, 0x358);
GUEST_OFFSET(TalkWindow, byte_368, 0x368);
GUEST_OFFSET(TalkWindow, word_36c, 0x36c);

struct __attribute__((packed)) Now {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Now, word_0, 0x0);
GUEST_OFFSET(Now, word_4, 0x4);
GUEST_OFFSET(Now, word_8, 0x8);

struct __attribute__((packed)) Local_00602a90_r5_1 {
    u8 unknown_0[0x90];  // (not used here)
    u32 render_base;
    u32 word_94;
    u8 unknown_98[0xc];  // (not used here)
    u32 word_a4;
    u32 word_a8;
    float float_ac;
    u8 unknown_b0[0x1b];  // (not used here)
    u8 byte_cb;
    u8 byte_cc;
    u8 byte_cd;
    u8 unknown_ce[0x127];  // (not used here)
    u8 byte_1f5;
    u8 byte_1f6;
};
GUEST_OFFSET(Local_00602a90_r5_1, render_base, 0x90);
GUEST_OFFSET(Local_00602a90_r5_1, word_94, 0x94);
GUEST_OFFSET(Local_00602a90_r5_1, word_a4, 0xa4);
GUEST_OFFSET(Local_00602a90_r5_1, word_a8, 0xa8);
GUEST_OFFSET(Local_00602a90_r5_1, float_ac, 0xac);
GUEST_OFFSET(Local_00602a90_r5_1, byte_cb, 0xcb);
GUEST_OFFSET(Local_00602a90_r5_1, byte_cc, 0xcc);
GUEST_OFFSET(Local_00602a90_r5_1, byte_cd, 0xcd);
GUEST_OFFSET(Local_00602a90_r5_1, byte_1f5, 0x1f5);
GUEST_OFFSET(Local_00602a90_r5_1, byte_1f6, 0x1f6);

struct __attribute__((packed)) Local_00602a90_r5_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00602a90_r5_2, word_0, 0x0);
GUEST_OFFSET(Local_00602a90_r5_2, word_4, 0x4);
GUEST_OFFSET(Local_00602a90_r5_2, word_8, 0x8);

inline constexpr guest::Function<0x002fb378, u32(u32)> game_time_now;
inline constexpr guest::Function<0x005d60d4, u32(u32)> RenderBase__clear;
inline constexpr guest::Function<0x006e5e94, u32(u32, u32, u32, u32)> NameWindow__show_page_icon;

u32 TalkWindow__reset(gptr<TalkWindow> talk_window, u32 r1, u32 r2, float S0) {
    *gptr<u8>(talk_window->word_348 + 0xc8u) = 0;  // (from the original)
    talk_window->word_36c = ~0u;
    talk_window->byte_368 = 0;
    talk_window->byte_1c = 0;
    u32 name_window = talk_window->word_340 + 0x14u;  // (from the original)
    u32 r0_2 = NameWindow__show_page_icon(name_window, 0u, r2, guest::cpu()->r[3]);
    if (r1 != 0) {
        gptr<Local_00602a90_r5_1> r5_1 = gptr<Local_00602a90_r5_1>(talk_window->word_348);
        float S0_2 = 0.0f;
        r5_1->word_a4 = 0;
        r5_1->word_a8 = 0;
        r5_1->float_ac = S0_2;
        r5_1->byte_cb = 1;
        r5_1->byte_cc = 1;
        r5_1->byte_cd = 0;
        u32 render_base = r5_1->render_base;
        guest::cpu()->s[0] = S0_2;
        RenderBase__clear(render_base);
        r0_2 = RenderBase__clear(r5_1->word_94);
        r5_1->byte_1f5 = 0;
        r5_1->byte_1f6 = 0;
    }
    gptr<Local_00602a90_r5_2> r5_2 = gptr<Local_00602a90_r5_2>(talk_window->word_0);
    gptr<Now> now = gptr<Now>(game_time_now(r0_2));
    u32 r1_3 = now->word_0;
    u32 r2_3 = now->word_4;
    r5_2->word_8 = now->word_8;
    r5_2->word_0 = r1_3;
    r5_2->word_4 = r2_3;
    u32 r0_6 = talk_window->word_358;
    *gptr<u8>(r0_6 + 5u) = 1;
    guest::cpu()->r[1] = r1_3;
    return r0_6;
}

}  // namespace d_00602a90
GUEST_EXPORT_FRAMED(0x00602a90, d_00602a90::TalkWindow__reset, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00603598: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00603598 {

struct __attribute__((packed)) Local_00603598_r0_3 {
    u8 unknown_0[0x13];  // (not used here)
    u8 byte_13;
    u8 byte_14;
};
GUEST_OFFSET(Local_00603598_r0_3, byte_13, 0x13);
GUEST_OFFSET(Local_00603598_r0_3, byte_14, 0x14);

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr u32 talk_manager_address = 0x0094ee44u;
inline guest::global<u32, 0x0094ee44> talk_manager;
inline constexpr guest::Function<0x0028499c, u32(u32, u32, u32, u32)> in_mode_67_or_68;
inline constexpr guest::Function<0x00300768, u32(u32, u32, u32, u32)> Iterator__equals;
inline constexpr guest::Function<0x0071ad3c, u32(u32, u32)> count_within_limit;
inline constexpr guest::Function<0x0075cf88, u32(u32, u32, u32, u32)> StateObject__state_check;

struct __attribute__((packed)) Frame_00603598 {
    u32 object_0_vtable;
    u32 word_4;
};
GUEST_OFFSET(Frame_00603598, object_0_vtable, 0x0);
GUEST_OFFSET(Frame_00603598, word_4, 0x4);
GUEST_SIZE(Frame_00603598, 0x8);

void show_system_error_message(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00603598> frame;  // the original's stack frame
    u32 r5_1 = r1;
    u32 r0_1 = *talk_manager;
    if (r0_1 != 0) {
        u32 r0_2 = in_mode_67_or_68(r0_1, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        if (r0_2 != 0) {
            gptr<Local_00603598_r0_3> r0_3 = gptr<Local_00603598_r0_3>(*talk_manager);
            r1 = r0_3->byte_13;
            if (r1 != 0) {
                u32 r6_1 = ~0u;
                if (r5_1 != 3u) {
                    if (r5_1 != 5u) {
                        guest::cpu()->r[1] = r1;
                        return;
                    }
                    u32 r1_1 = r0_3->byte_14;
                    if (r1_1 != 2u) {
                        *gptr<u32>(r0 + 0x374u) = 1;  // (from the original)
                        *gptr<u32>(r0 + 0x370u) = r6_1;  // (from the original)
                        *gptr<u8>(r0 + 0x378u) = 1;  // (from the original)
                        guest::cpu()->r[1] = 1u;
                        return;
                    }
                    u32 r0_4 = count_within_limit(r0_3.addr(), r1_1);
                    r1 = guest::cpu()->r[1];
                    if (r0_4 == 0) {
                        return;
                    }
                    *gptr<u32>(r0 + 0x374u) = 1;  // (from the original)
                    *gptr<u32>(r0 + 0x370u) = r6_1;  // (from the original)
                    *gptr<u8>(r0 + 0x378u) = 1;  // (from the original)
                    guest::cpu()->r[1] = 1u;
                    return;
                }
                u32 r0_5 = r0_3->byte_14;
                if (r0_5 != 1u && r0_5 != 2u) {
                    u32 r1_2 = *gptr<u32>(r0 + 0x35cu);  // (from the original)
                    u32 r5_2 = *gptr<u32>(r1_2 + 4u);
                    frame->word_4 = 0x894ba4;  // (from the original)
                    frame->object_0_vtable = vtable_sead__SafeStringBase_char_;
                    u32 r0_7 = Iterator__equals(r1_2 + 0x20u, frame.at(0).addr(), 0x894ba4u, vtable_sead__SafeStringBase_char_);  // (from the original)
                    if ((r0_7 != 0 ? r5_2 == 0x16u : 0u) == 0 && *gptr<u32>(r0 + 0xcu) == 0) {  // (from the original)
                        u32 r0_9 = StateObject__state_check(r0, 1u, guest::cpu()->r[2], 1u);
                        r1 = guest::cpu()->r[1];
                        u32 r3_1 = guest::cpu()->r[3];
                        if (r0_9 == 0) {
                            return;
                        }
                        *gptr<u8>(r0 + 6u) = 0;
                        *gptr<u8>(r0 + 7u) = u8(r3_1);
                        *gptr<u8>(r0 + 8u) = 0;
                        return;
                    }
                }
                r1 = 1u;
                *gptr<u32>(r0 + 0x374u) = r1;  // (from the original)
                *gptr<u32>(r0 + 0x370u) = r6_1;  // (from the original)
                *gptr<u8>(r0 + 0x378u) = 0;  // (from the original)
            }
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_00603598
GUEST_EXPORT_FRAMED(0x00603598, d_00603598::show_system_error_message, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00603a58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Opens the choice with its message and, when the default is in range, preselects it; the choice's mode.
namespace d_00603a58 {

struct __attribute__((packed)) TalkWindow {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 unknown_10[0x11];  // (not used here)
    u8 byte_21;
    u8 unknown_22[0x32a];  // (not used here)
    u32 word_34c;
};
GUEST_OFFSET(TalkWindow, word_c, 0xc);
GUEST_OFFSET(TalkWindow, byte_21, 0x21);
GUEST_OFFSET(TalkWindow, word_34c, 0x34c);

struct __attribute__((packed)) Local_00603a58_r4_1 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 unknown_5[0x3];  // (not used here)
    u32 word_8;
    u8 unknown_c[0xb4];  // (not used here)
    u32 word_c0;
    u8 byte_c4;
    u8 unknown_c5[0x4];  // (not used here)
    u8 byte_c9;
};
GUEST_OFFSET(Local_00603a58_r4_1, byte_4, 0x4);
GUEST_OFFSET(Local_00603a58_r4_1, word_8, 0x8);
GUEST_OFFSET(Local_00603a58_r4_1, word_c0, 0xc0);
GUEST_OFFSET(Local_00603a58_r4_1, byte_c4, 0xc4);
GUEST_OFFSET(Local_00603a58_r4_1, byte_c9, 0xc9);

inline constexpr guest::Function<0x005e4a28, u32(u32, u32, u32, u32)> MessageChoice__reset;

u32 TalkWindow__open_choice_range(gptr<TalkWindow> talk_window, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    talk_window->byte_21 = 1;
    u32 r3_1 = talk_window->word_c | 1u;
    talk_window->word_c = r3_1;
    gptr<Local_00603a58_r4_1> r4_1 = gptr<Local_00603a58_r4_1>(talk_window->word_34c);
    MessageChoice__reset(r4_1.addr(), r1, r2, r3_1);
    u32 nf_1 = r2 >> 0x1f;  // (from the original)
    u32 vf_1 = (r2 & (r2 ^ r2)) >> 0x1f;  // (from the original)
    r4_1->byte_4 = 4;
    if (nf_1 == vf_1) {
        u32 res_1 = r1 - r2;
        nf_1 = res_1 >> 0x1f;  // (from the original)
        vf_1 = ((r1 ^ r2) & (r1 ^ res_1)) >> 0x1f;  // (from the original)
    }
    r4_1->word_8 = r1;
    if (nf_1 != vf_1) {
        r0_1 = 0u;
    } else {
        r0_1 = 2u;
        r4_1->word_c0 = r2;
    }
    r4_1->byte_c4 = u8(r0_1);
    r4_1->byte_c9 = 1;
    return r0_1;
}

}  // namespace d_00603a58
GUEST_EXPORT_FRAMED(0x00603a58, d_00603a58::TalkWindow__open_choice_range, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00603ab0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Opens the choice.
namespace d_00603ab0 {

struct __attribute__((packed)) TalkWindow {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 unknown_10[0x11];  // (not used here)
    u8 byte_21;
    u8 unknown_22[0x32a];  // (not used here)
    u32 word_34c;
};
GUEST_OFFSET(TalkWindow, word_c, 0xc);
GUEST_OFFSET(TalkWindow, byte_21, 0x21);
GUEST_OFFSET(TalkWindow, word_34c, 0x34c);

struct __attribute__((packed)) Local_00603ab0_r4_1 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 unknown_5[0xc4];  // (not used here)
    u8 byte_c9;
};
GUEST_OFFSET(Local_00603ab0_r4_1, byte_4, 0x4);
GUEST_OFFSET(Local_00603ab0_r4_1, byte_c9, 0xc9);

inline constexpr guest::Function<0x005e4a28, u32(u32, u32, u32, u32)> MessageChoice__reset;

u32 TalkWindow__open_choice(gptr<TalkWindow> talk_window) {
    talk_window->byte_21 = 1;
    u32 r1_1 = talk_window->word_c | 1u;
    talk_window->word_c = r1_1;
    gptr<Local_00603ab0_r4_1> r4_1 = gptr<Local_00603ab0_r4_1>(talk_window->word_34c);
    MessageChoice__reset(r4_1.addr(), r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r4_1->byte_4 = 4;
    r4_1->byte_c9 = 1;
    return 4u;
}

}  // namespace d_00603ab0
GUEST_EXPORT_FRAMED(0x00603ab0, d_00603ab0::TalkWindow__open_choice, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006045f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Scans the message's tags for the one in the range.
namespace d_006045f8 {

inline constexpr guest::Function<0x0056b038, u32(u32, u32, u32, u32)> between_ints;

u32 text_tag_in_range(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r2 = 0;
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r4 = r0;
    if (r0 - 0x30u <= 9u) {  // (from the original)
        r4 += 0x27u;  // (from the original)
        goto L_604764;
    }
    if (r4 - 0x3041u <= 0x55u) {  // (from the original)
        r4 -= 0x3040u;  // (from the original)
        goto L_604764;
    }
    r0_1 = r4 - 0x30a1u;  // (from the original)
    zf_1 = r0_1 == 0x55u;  // (from the original)
    cf_1 = r0_1 >= 0x55u;  // (from the original)
    if (r0_1 > 0x55u) {  // (from the original)
        r0_1 = r4 - 0x61u;  // (from the original)
    }
    if (!cf_1 || zf_1) {
        r4 -= 0x30a0u;  // (from the original)
    }
    if (cf_1 && !zf_1) {
        zf_1 = r0_1 == 0x19u;  // (from the original)
        cf_1 = r0_1 >= 0x19u;  // (from the original)
    }
    if (!cf_1 || zf_1) {
        goto L_604764;
    }
    if (r4 - 0x41u <= 0x19u) {  // (from the original)
        r4 += 0x20u;  // (from the original)
        goto L_604764;
    }
    if (r4 - 0xff41u <= 0x19u) {  // (from the original)
        r4 -= 0xfee0u;  // (from the original)
        goto L_604764;
    }
    if (r4 - 0xff21u <= 0x19u) {  // (from the original)
        r4 -= 0xfec0u;  // (from the original)
        goto L_604764;
    }
    if (r4 != 0xf7u && r4 - 0xe0u <= 0x1eu) {  // (from the original)
        r4 -= 0x65u;  // (from the original)
        goto L_604764;
    }
    if (r4 != 0xd7u && r4 - 0xc0u <= 0x1eu) {  // (from the original)
        r4 -= 0x45u;  // (from the original)
        goto L_604764;
    }
    if (r4 - 0x3b1u <= 0x18u) {  // (from the original)
        r4 -= 0x305u;  // (from the original)
        goto L_604764;
    }
    if (r4 - 0x391u <= 0x18u) {  // (from the original)
        r4 -= 0x2e5u;  // (from the original)
        goto L_604764;
    }
    r0_2 = between_ints(r4, 0xac00u, 0xd7a3u, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        goto L_604764;
    }
    r0_3 = between_ints(r4, 0x1100u, 0x11f9u, guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_3 != 0) {
        goto L_604764;
    }
    r0_4 = between_ints(r4, 0x3131u, 0x318eu, guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_4 != 0) {
        goto L_604764;
    }
    r1 = 1u;
    r0 = 0x892218u;  // (from the original)
    r2 = u32(s32(0xb0u) >> 2) + 1u;  // (from the original)
L_604754:;
    if (*gptr<u16>(r0) != r4) {
        goto L_604778;
    }
    r4 = *gptr<u16>(r0 + 2u);
L_604764:;
    if (r4 < 0x10000u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return uxth(r4);
    }
    guest::cpu()->r[1] = r1;
    return uxth(0xdau);  // (from the original)
L_604778:;
    r1 += 1u;
    r0 += 4u;
    if (s32(r2) > s32(r1)) {
        guest::preempt();
        goto L_604754;
    }
    guest::cpu()->r[1] = r1;
    return uxth(0xdau);  // (from the original)
}

}  // namespace d_006045f8
GUEST_EXPORT_FRAMED(0x006045f8, d_006045f8::text_tag_in_range, 0x4010);  // pushes {r4, lr} first, as the original

// f_00605068: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Begins the NPC's turn toward the player.
namespace d_00605068 {

inline constexpr u32 player_angle_y_address = 0x009537c2u;
inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> find_object;
inline constexpr guest::Function<0x006e9be8, u32(u32, u32, u32, u32)> begin_action_4;
inline constexpr guest::Function<0x007521a4, u32(u32, u32, u32)> angle_to_object;

struct __attribute__((packed)) Frame_00605068 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_00605068, word_0, 0x0);
GUEST_OFFSET(Frame_00605068, word_4, 0x4);
GUEST_SIZE(Frame_00605068, 0x8);

u32 Npc__turn_to_player(u32 npc, u32 r1_unused, u32 r2, u32 r3, float S0) {
    guest::StackFrameOf<Frame_00605068> frame;  // the original's stack frame
    u32 object_2 = find_object(4u, 0u, r2, r3);
    u32 r0_2 = angle_to_object(npc, object_2, r2);
    frame->word_4 = r0_2;
    frame->word_0 = 0;
    float S0_1 = 6.0f;
    guest::cpu()->s[0] = S0_1;
    u32 r0_4 = begin_action_4(npc + 0x78u, 0u, frame.at(4).addr(), player_angle_y_address);  // (from the original)
    return r0_4;
}

}  // namespace d_00605068
GUEST_EXPORT_FRAMED(0x00605068, d_00605068::Npc__turn_to_player, 0x4010);  // pushes {r4, lr} first, as the original

// f_006050c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Turns the player to face the NPC during the talk.
namespace d_006050c4 {

inline constexpr guest::Function<0x005c1198, u32(u32, u32, u32, u32)> player_request_state_21_in_talk_e;
inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> find_object;
inline constexpr guest::Function<0x007521a4, u32(u32, u32)> angle_to_object;

struct __attribute__((packed)) Frame_006050c4 {
    u32 word_0;
    u16 half_4;
    u8 unknown_6[0x6];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006050c4, word_0, 0x0);
GUEST_OFFSET(Frame_006050c4, half_4, 0x4);
GUEST_SIZE(Frame_006050c4, 0xc);

u32 Player__face_npc(u32 player, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006050c4> frame;  // the original's stack frame
    u32 object_2 = find_object(4u, 0u, r2, r3);
    u32 r0_2 = angle_to_object(player, object_2);
    frame->half_4 = u16(r0_2 - 0x8000u);  // (from the original)
    frame->word_0 = 0;
    u32 r0_3 = player_request_state_21_in_talk_e(frame.at(4).addr(), 1u, 9u, 0u);
    return r0_3;
}

}  // namespace d_006050c4
GUEST_EXPORT_FRAMED(0x006050c4, d_006050c4::Player__face_npc, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0060511c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Claims the talk event slot (when free and armed) with the kind and the value.
namespace d_0060511c {

inline guest::global<u8, 0x00950130> talk_event_kind;
inline guest::global<u32, 0x0095014c> talk_event_value;

void TalkEvent__claim(u32 r0_unused, u32 r1, u32 r2) {
    if (*talk_event_value != 0) {
        return;
    }
    if (*talk_event_kind == 0xa5u) {  // (from the original)
        *talk_event_value = r2;
        *talk_event_kind = u8(r1);
        return;
    }
}

}  // namespace d_0060511c
GUEST_EXPORT(0x0060511c, d_0060511c::TalkEvent__claim);

// f_00605514: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the sound; when it started, marks it playing.
namespace d_00605514 {

struct __attribute__((packed)) SoundHandle {
    u32 word_0;
    u8 unknown_4[0x1];  // (not used here)
    u8 byte_5;
};
GUEST_OFFSET(SoundHandle, word_0, 0x0);
GUEST_OFFSET(SoundHandle, byte_5, 0x5);

inline constexpr guest::Function<0x001db118, u32(u32, u32, u32, u32)> Sound3d__start_loaded;

u32 SoundHandle__start(gptr<SoundHandle> sound_handle, u32 r1) {
    u32 r0_2 = Sound3d__start_loaded(sound_handle->word_0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        r1_1 = 1u;
        sound_handle->byte_5 = u8(r1_1);
    }
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_00605514
GUEST_EXPORT_FRAMED(0x00605514, d_00605514::SoundHandle__start, 0x4010);  // pushes {r4, lr} first, as the original

// f_00605534: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls the handler of the kind with the argument.
namespace d_00605534 {


u32 call_handler_of_kind(u32 r0, u32 r1) {
    u32 r2_1 = gptr<u32>(0x84531cu)[r0];  // (from the original)
    return guest::call_address<u32>(r2_1, r1, r1, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_00605534
GUEST_EXPORT(0x00605534, d_00605534::call_handler_of_kind);

// f_00605584: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the sound at the world position, seen from the camera.
namespace d_00605584 {

struct __attribute__((packed)) SoundHandle {
    u32 word_0;
};
GUEST_OFFSET(SoundHandle, word_0, 0x0);

inline constexpr guest::Function<0x001db214, u32(u32, u32, u32, u32)> Sound3d__start;
inline constexpr guest::Function<0x001e5894, u32(u32, u32, u32, u32)> camera_transform_point;

void SoundHandle__start_at(gptr<SoundHandle> sound_handle, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    camera_transform_point(frame.at(0).addr(), r3, r2, r3);
    Sound3d__start(sound_handle->word_0, r1, r2, frame.at(0).addr());
}

}  // namespace d_00605584
GUEST_EXPORT_FRAMED(0x00605584, d_00605584::SoundHandle__start_at, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006055c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stops the sound and clears its flags.
namespace d_006055c0 {

struct __attribute__((packed)) SoundHandle {
    u32 word_0;
    u8 byte_4;
    u8 byte_5;
};
GUEST_OFFSET(SoundHandle, word_0, 0x0);
GUEST_OFFSET(SoundHandle, byte_4, 0x4);
GUEST_OFFSET(SoundHandle, byte_5, 0x5);

inline constexpr guest::Function<0x001db3d4, u32(u32, u32, u32, u32)> Sound3d__stop;

void SoundHandle__stop(gptr<SoundHandle> sound_handle) {
    Sound3d__stop(sound_handle->word_0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    sound_handle->byte_4 = 0;
    sound_handle->byte_5 = 0;
}

}  // namespace d_006055c0
GUEST_EXPORT_FRAMED(0x006055c0, d_006055c0::SoundHandle__stop, 0x4010);  // pushes {r4, lr} first, as the original

// f_006055e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The word of the table at 0x94e4c4 for the index.
namespace d_006055e0 {

inline constexpr u32 table_94e4c4_address = 0x0094e4c4u;

u32 table_94e4c4_at(u32 r0) {
    guest::cpu()->r[1] = table_94e4c4_address;
    return gptr<u32>(table_94e4c4_address)[r0];
}

}  // namespace d_006055e0
GUEST_EXPORT(0x006055e0, d_006055e0::table_94e4c4_at);

// f_006055f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the NPC id is a villager's (up to 0x108).
namespace d_006055f0 {


u32 is_villager_id(u32 r0) {
    u32 zf_1 = r0 == 0x108u;  // (from the original)
    u32 cf_1 = r0 >= 0x108u;  // (from the original)
    if (r0 <= 0x108u) {  // (from the original)
        r0 = 1u;
    }
    if (cf_1 && !zf_1) {
        r0 = 0u;
    }
    return r0;
}

}  // namespace d_006055f0
GUEST_EXPORT(0x006055f0, d_006055f0::is_villager_id);

// f_00605600: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the NPC id is a special NPC's (0x109 to 0x168).
namespace d_00605600 {


u32 is_special_npc_id(u32 r0) {
    return !(r0 - 0x109u >= 0x60u);  // (from the original)
}

}  // namespace d_00605600
GUEST_EXPORT(0x00605600, d_00605600::is_special_npc_id);

// f_00605618: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The byte of the table at 0x94ea68 for the index.
namespace d_00605618 {

inline constexpr u32 table_94ea68_address = 0x0094ea68u;

u32 table_94ea68_at(u32 r0) {
    u32 r0_1 = *gptr<u8>(r0 + table_94ea68_address);
    guest::cpu()->r[1] = table_94ea68_address;
    return r0_1;
}

}  // namespace d_00605618
GUEST_EXPORT(0x00605618, d_00605618::table_94ea68_at);

// f_00605628: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The byte of the table at 0x94ebd1 for the index.
namespace d_00605628 {

inline constexpr u32 table_94ebd1_address = 0x0094ebd1u;

u32 table_94ebd1_at(u32 r0) {
    u32 r0_1 = *gptr<u8>(r0 + table_94ebd1_address);
    guest::cpu()->r[1] = table_94ebd1_address;
    return r0_1;
}

}  // namespace d_00605628
GUEST_EXPORT(0x00605628, d_00605628::table_94ebd1_at);

// f_00605ca0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00605ca0 {

struct __attribute__((packed)) Local_00605ca0_ea_1 {
    u32 vtable;
    u32 word_4;
};
GUEST_OFFSET(Local_00605ca0_ea_1, vtable, 0x0);
GUEST_OFFSET(Local_00605ca0_ea_1, word_4, 0x4);

struct __attribute__((packed)) Block {
    u32 vtable;
    u8 unknown_4[0x1c];  // (not used here)
    u32 word_20;
    u32 word_24;
    u8 byte_28;
};
GUEST_OFFSET(Block, vtable, 0x0);
GUEST_OFFSET(Block, word_20, 0x20);
GUEST_OFFSET(Block, word_24, 0x24);
GUEST_OFFSET(Block, byte_28, 0x28);

struct __attribute__((packed)) Local_00605ca0_r3_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00605ca0_r3_2, word_0, 0x0);
GUEST_OFFSET(Local_00605ca0_r3_2, word_4, 0x4);

inline constexpr u32 vtable_sead__Delegate2_BossSys__sead__Thread___int_ = 0x00905e94u;
inline constexpr u32 vtable_BossSys__SingletonDisposer_ = 0x0090ab24u;
inline constexpr u32 boss_sys_instance_address = 0x0094ed4cu;
inline guest::global<u32, 0x0084607c> global_0084607c;
inline guest::global<u32, 0x00846080> global_00846080;
inline guest::global<u32, 0x0094ed4c> boss_sys_instance;
inline guest::global<u32, 0x0094ed50> boss_sys_disposer;
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> allocate_on_heap_entry;
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32)> sead__IDisposer__IDisposer_001320cc;
inline constexpr guest::Function<0x002fc20c, u32(u32, u32)> construct_empty_item;

u32 BossSys__SingletonDisposer___SingletonDisposer_(u32 singleton_disposer, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0_1 = *boss_sys_instance;
    if (r0_1 == 0) {
        gptr<Block> block_2 = gptr<Block>(allocate_on_heap_entry(0x34u, singleton_disposer, 4u, r3));  // (from the original)
        r1 = guest::cpu()->r[1];
        if (block_2.addr() == 0) {
            r0_1 = 0u;
            *boss_sys_disposer = r0_1;
        } else {
            sead__IDisposer__IDisposer_001320cc(block_2.addr(), singleton_disposer, 3u);
            gptr<Local_00605ca0_r3_2> r3_2 = gptr<Local_00605ca0_r3_2>(block_2.addr() + 0x18u);  // (from the original)
            block_2->vtable = vtable_BossSys__SingletonDisposer_;
            *boss_sys_disposer = block_2.addr();
            u32 r1_1 = *global_0084607c;
            u32 r2_1 = *global_00846080;
            r3_2->word_0 = r1_1;
            r3_2->word_4 = r2_1;
            gptr<Local_00605ca0_ea_1> ea_1 = gptr<Local_00605ca0_ea_1>(block_2.addr() + 0x10u);  // (from the original)
            ea_1->vtable = vtable_sead__Delegate2_BossSys__sead__Thread___int_;
            ea_1->word_4 = block_2.addr();
            block_2->word_20 = 0;
            block_2->word_24 = 0;
            block_2->byte_28 = 0;
            construct_empty_item(block_2.addr() + 0x2cu, 0u);  // (from the original)
            r1 = guest::cpu()->r[1];
            r0_1 = block_2.addr() + 0u;
        }
        *boss_sys_instance = r0_1;
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00605ca0
GUEST_EXPORT_FRAMED(0x00605ca0, d_00605ca0::BossSys__SingletonDisposer___SingletonDisposer_, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00605d44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Registers the background download storage on the stage heap when the save allows it.
namespace d_00605d44 {

inline constexpr u32 stage_heap_address = 0x00952c3cu;
inline constexpr u32 spotpass_storage_a_address = 0x009c9f80u;
inline constexpr u32 spotpass_storage_b_address = 0x009c9fa8u;
inline guest::global<u32, 0x00952c3c> stage_heap;
inline guest::global<u32, 0x009c9fa8> spotpass_storage_b;
inline guest::global<u32, 0x009c9fac> global_009c9fac;
inline constexpr guest::Function<0x001e885c, u32(u32, u32, u32, u32)> SceneEnv__load;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x003505c0, u32(u32)> Boss__init;
inline constexpr guest::Function<0x005198b0, u32(u32, u32)> Boss__register_storage;
inline constexpr guest::Function<0x005cec18, u32(u32)> read_s8_0x0094e3b0_;
inline constexpr guest::Function<0x005ced94, u32(u32, u32, u32, u32)> read_s8_0x0094e3b1_;
inline constexpr guest::Function<0x006a8a0c, u32(u32, u32)> load_ext_save_data_icon;
inline constexpr guest::Function<0x006a8b34, u32(u32)> ResourceHolder24__release;

struct __attribute__((packed)) Frame_00605d44 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00605d44, word_0, 0x0);
GUEST_SIZE(Frame_00605d44, 0x4);

u32 SpotPass__register_storage(u32 spot_pass, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00605d44> frame;  // the original's stack frame
    u32 r0_2 = 0;
    frame->word_0 = r3;
    u32 r0_1 = read_s8_0x0094e3b1_(spot_pass, r1, r2, r3);
    if (r0_1 != 0) {
        r0_2 = read_s8_0x0094e3b0_(r0_1);
    } else {
        r0_2 = Boss__init(r0_1);
    }
    if (r0_2 != 0) {
        u32 scene = current_scene_id(r0_2);
        if (scene != 0x99u) {  // (from the original)
            load_ext_save_data_icon(spotpass_storage_a_address, *stage_heap);
        }
        frame->word_0 = 0x198e;  // (from the original)
        u32 r0_5 = SceneEnv__load(*spotpass_storage_b, *global_009c9fac, 2u, 0x22u);  // (from the original)
        u32 scene_2 = current_scene_id(r0_5);
        if (scene_2 != 0x99u) {  // (from the original)
            scene_2 = ResourceHolder24__release(spotpass_storage_a_address);
        }
        if (r0_5 == 0) {
            u32 r0_7 = Boss__register_storage(0x198eu, 0x100000u);  // (from the original)
            if (r0_7 != 0) {
                *gptr<u8>(spot_pass + 0x28u) = 0;  // (from the original)
                *gptr<u32>(spot_pass + 0x24u) = 0;  // (from the original)
                return 0u;
            }
            *gptr<u8>(spot_pass + 0x28u) = 0x85;  // (from the original)
            *gptr<u32>(spot_pass + 0x24u) = 0;  // (from the original)
            guest::cpu()->r[1] = 0u;
            return r0_7;
        }
        if (r0_5 == 1u) {
            *gptr<u8>(spot_pass + 0x28u) = 0x81;  // (from the original)
            *gptr<u32>(spot_pass + 0x24u) = 0;  // (from the original)
            guest::cpu()->r[1] = 0u;
            return scene_2;
        }
        if (r0_5 == 2u) {
            *gptr<u8>(spot_pass + 0x28u) = 0x82;  // (from the original)
            *gptr<u32>(spot_pass + 0x24u) = 0;  // (from the original)
            guest::cpu()->r[1] = 0u;
            return scene_2;
        }
        if (r0_5 == 3u) {
            *gptr<u8>(spot_pass + 0x28u) = 0x83;  // (from the original)
            *gptr<u32>(spot_pass + 0x24u) = 0;  // (from the original)
            guest::cpu()->r[1] = 0u;
            return scene_2;
        }
        *gptr<u8>(spot_pass + 0x28u) = 0x84;  // (from the original)
        *gptr<u32>(spot_pass + 0x24u) = 0;  // (from the original)
        guest::cpu()->r[1] = 0u;
        return scene_2;
    }
    *gptr<u8>(spot_pass + 0x28u) = 0x80;  // (from the original)
    *gptr<u32>(spot_pass + 0x24u) = 0x76bf;  // (from the original)
    guest::cpu()->r[1] = 0x76bfu;  // (from the original)
    return r0_2;
}

}  // namespace d_00605d44
GUEST_EXPORT_FRAMED(0x00605d44, d_00605d44::SpotPass__register_storage, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00606704: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00606704 {

struct __attribute__((packed)) Local_00606704_r0_7 {
    u8 unknown_0[0x1c0];  // (not used here)
    u8 byte_1c0;
};
GUEST_OFFSET(Local_00606704_r0_7, byte_1c0, 0x1c0);

struct __attribute__((packed)) Local_00606704_r1_1 {
    u8 unknown_0[0x1c0];  // (not used here)
    u8 byte_1c0;
    u8 unknown_1c1[0x22];  // (not used here)
    u8 byte_1e3;
};
GUEST_OFFSET(Local_00606704_r1_1, byte_1c0, 0x1c0);
GUEST_OFFSET(Local_00606704_r1_1, byte_1e3, 0x1e3);

inline constexpr u32 popup_window_address = 0x0094e4b8u;
inline constexpr u32 announcement_shown_address = 0x009503bcu;
inline constexpr u32 scene_pre_execute_a_address = 0x009503d4u;
inline constexpr u32 scene_pre_execute_b_address = 0x009503d8u;
inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0094e3c8> err_eula_mgr_instance;
inline guest::global<u32, 0x0094e4b8> popup_window;
inline guest::global<u8, 0x009503bd> bs_scene_flag_a;
inline guest::global<u8, 0x009503be> bs_scene_flag_b;
inline guest::global<u8, 0x009503bf> announcement_flag_a;
inline guest::global<u8, 0x009503c0> announcement_flag_b;
inline guest::global<u8, 0x009503c1> announcement_flag_c;
inline guest::global<u8, 0x009503c2> announcement_flag_d;
inline guest::global<u8, 0x009503c3> bs_scene_pre_executed;
inline guest::global<u16, 0x009503c4> announcement_message_id;
inline guest::global<u32, 0x009503d4> scene_pre_execute_a;
inline guest::global<u32, 0x009503d8> scene_pre_execute_b;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x0024ebc0, u32(u32, u32)> read_u32_0x009529c8_;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x0051fe30, u32(u32, u32)> read_u32_0x0097528c_;
inline constexpr guest::Function<0x00520584, u32(u32, u32)> clear_scene_flag_2;
inline constexpr guest::Function<0x00520a18, u32(u32, u32)> clear_scene_flag_0;
inline constexpr guest::Function<0x005210a8, u32(u32, u32)> StringPool__release;
inline constexpr guest::Function<0x00529cf4, u32(u32, u32, u32, u32)> Base__pre_execute;
inline constexpr guest::Function<0x00565fe8, u32(u32, u32)> all_report_one_00565fe8;
inline constexpr guest::Function<0x00566044, u32(u32, u32)> all_report_zero;
inline constexpr guest::Function<0x00584074, u32(u32, u32)> bgm_queue;
inline constexpr guest::Function<0x0058afb4, u32(u32, u32, u32)> BgmParamList__contains;
inline constexpr guest::Function<0x0058d7fc, u32(u32)> set_bgm_override_active;
inline constexpr guest::Function<0x00625cbc, u32(u32, u32)> NetSession__send_entry_all;
inline constexpr guest::Function<0x00625fa8, u32(u32, u32)> NetSession__send_entry;
inline constexpr guest::Function<0x006264fc, u32(u32, u32)> NetSession__send_entry_update;
inline constexpr guest::Function<0x006a5b88, u32(u32)> start_scene_change;
inline constexpr guest::Function<0x006a5c00, u32(u32)> finish_scene_change;
inline constexpr guest::Function<0x006a5d0c, u32(u32, u32, u32)> SceneEnvs__select;
inline constexpr guest::Function<0x006ce770, u32(u32, u32)> black_wait_byte_a10;
inline constexpr guest::Function<0x006ceedc, u32(u32, u32)> black_wait_check_ready;
inline constexpr guest::Function<0x006cef28, u32(u32, u32)> Window94e4b8__is_opening;
inline constexpr guest::Function<0x007479b4, u32(u32, u32)> HashTable__contains_live;
inline constexpr guest::Function<0x00747a90, u32(u32, u32)> HashTable__bucket_flag;
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32)> NetSession__station;
inline constexpr guest::Function<0x0075e410, u32(u32, u32, u32)> all_stations_in_bits;

u32 BsScene__pre_execute(u32 bs_scene, u32 r1, u32 r2) {
    u32 r1_2 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_30 = 0;
    u32 r0_1 = Base__pre_execute(bs_scene, r1, r2, guest::cpu()->r[3]);
    gptr<Local_00606704_r1_1> r1_1 = gptr<Local_00606704_r1_1>(guest::cpu()->r[1]);
    if (r0_1 != 0) {
        r1_2 = *announcement_message_id;
        u32 r0_2 = r1_2 - 0xffffu;  // (from the original)
        if (r0_2 != 0) {
            u32 r0_3 = all_report_one_00565fe8(r0_2, r1_2);
            if (r0_3 != 0) {
                set_bgm_override_active(r0_3);
                u32 r1_4 = *announcement_flag_c;
                u32 r0_4 = *announcement_flag_a;
                SceneEnvs__select(r0_4, r1_4, 0u);
                finish_scene_change(*scene_pre_execute_a);
                r1_1 = gptr<Local_00606704_r1_1>(guest::cpu()->r[1]);
                *bs_scene_pre_executed = 1;
            } else {
                u32 r0_6 = all_report_zero(r0_3, guest::cpu()->r[1]);
                r1_1 = gptr<Local_00606704_r1_1>(guest::cpu()->r[1]);
                u32 r2_4 = guest::cpu()->r[2];
                if (r0_6 != 0) {
                    *bs_scene_pre_executed = 1;
                    r1_1 = gptr<Local_00606704_r1_1>(*net_session);
                    gptr<Local_00606704_r0_7> r0_7 = gptr<Local_00606704_r0_7>(u32(r1_1->byte_1c0));
                    if (r0_7.addr() != 0) {
                        r2_4 = *gptr<u8>(*err_eula_mgr_instance + 0xfb0u);  // (from the original)
                        if (r2_4 == 0) {
                            if (r0_7.addr() != 3u) {
                                if (r0_7.addr() == 5u) {
                                    r0_1 = r1_1->byte_1e3;
                                    if (r0_1 == 0) {
                                        guest::cpu()->r[1] = r1_1.addr();
                                        return r0_1;
                                    }
                                    u32 r0_8 = NetSession__station(r1_1.addr(), r1_1.addr(), r2_4);
                                    NetSession__send_entry_update(*net_session, r0_8);
                                    r2_4 = guest::cpu()->r[2];
                                    r0_7 = gptr<Local_00606704_r0_7>(*net_session);
                                    r1_1 = gptr<Local_00606704_r1_1>(6u);
                                    goto L_606830;
                                }
                                if (r0_7.addr() == 8u) {
                                    r0_1 = all_stations_in_bits(r1_1.addr() + 0x1c0u, r1_1.addr(), r2_4);  // (from the original)
                                    r1_1 = gptr<Local_00606704_r1_1>(guest::cpu()->r[1]);
                                    if (r0_1 == 0) {
                                        guest::cpu()->r[1] = r1_1.addr();
                                        return r0_1;
                                    }
                                    NetSession__send_entry_all(*net_session, r1_1.addr());
                                    r2_4 = guest::cpu()->r[2];
                                    r0_7 = gptr<Local_00606704_r0_7>(*net_session);
                                    r1_1 = gptr<Local_00606704_r1_1>(9u);
                                    goto L_606830;
                                }
                                goto L_60699c;
                            }
                            r0_12 = NetSession__station(r1_1.addr(), r1_1.addr(), r2_4);
                            r0_13 = *net_session;
                            NetSession__send_entry(r0_13, r0_12);
                            r2_4 = guest::cpu()->r[2];
                            r0_7 = gptr<Local_00606704_r0_7>(*net_session);
                            r1_1 = gptr<Local_00606704_r1_1>(4u);
                            r0_7->byte_1c0 = u8(r1_1.addr());
                            goto L_606834;
L_606830:;
                            r0_7->byte_1c0 = u8(r1_1.addr());
                        }
                    }
L_606834:;
                    u32 scene = current_scene_id(r0_7.addr(), r1_1.addr(), r2_4);
                    r1_1 = gptr<Local_00606704_r1_1>(guest::cpu()->r[1]);
                    if (scene == 0x5bu) {  // (from the original)
                        u32 r0_15 = bgm_queue(scene, r1_1.addr());
                        u32 r0_16 = BgmParamList__contains(r0_15, 0xfu, 0x10000b7u);  // (from the original)
                        r1_1 = gptr<Local_00606704_r1_1>(guest::cpu()->r[1]);
                        if (r0_16 != 0) {
                            goto L_60699c;
                        }
                    }
                    StringPool__release(bs_scene, r1_1.addr());
                    r1_1 = gptr<Local_00606704_r1_1>(guest::cpu()->r[1]);
                }
            }
        } else {
            u32 r5_1 = *gptr<u32>(bs_scene + 4u);
            u32 r0_17 = *gptr<u8>(bs_scene + 0x14u);  // (from the original)
            if (r0_17 != 0) {
                goto L_6069a4;
            }
            u32 hash_table = read_u32_0x0097528c_(r0_17, r1_2);
            u32 r0_19 = HashTable__bucket_flag(hash_table, r5_1);
            r1_2 = guest::cpu()->r[1];
            if (r0_19 == 0) {
                goto L_6069a4;
            }
            u32 r0_20 = read_u32_0x0097528c_(r0_19, r1_2);
            u32 r0_21 = HashTable__contains_live(r0_20, bs_scene);
            r1_1 = gptr<Local_00606704_r1_1>(guest::cpu()->r[1]);
            if ((r0_21 ^ 1u) != 0 && *gptr<u8>(bs_scene + 0x13u) == 0) {  // (from the original)
                u32 r0_22 = *bs_scene_flag_b;
                if (r0_22 != 0) {
                    u32 r0_23 = black_wait_byte_a10(r0_22, r1_1.addr());
                    r1_1 = gptr<Local_00606704_r1_1>(guest::cpu()->r[1]);
                    if (r0_23 == 0) {
                        r0_23 = Window94e4b8__is_opening(r0_23, r1_1.addr());
                        r1_1 = gptr<Local_00606704_r1_1>(guest::cpu()->r[1]);
                        if (r0_23 != 0) {
                            goto L_60699c;
                        }
                    }
                    u32 r0_24 = read_u32_0x0097528c_(r0_23, r1_1.addr());
                    u32 r0_25 = clear_scene_flag_0(r0_24, r5_1);
                    u32 r0_26 = read_u32_0x0097528c_(r0_25, r5_1);
                    clear_scene_flag_2(r0_26, r5_1);
                    r1_1 = gptr<Local_00606704_r1_1>(guest::cpu()->r[1]);
                    *gptr<u8>(bs_scene + 0x14u) = 1;  // (from the original)
                } else {
                    u32 r0_27 = *gptr<u8>(*net_session + 0x1c0u);  // (from the original)
                    if (r0_27 == 0) {
                        u32 r0_28 = black_wait_check_ready(r0_27, r1_1.addr());
                        r1_1 = gptr<Local_00606704_r1_1>(guest::cpu()->r[1]);
                        if (r0_28 != 0) {
                            *bs_scene_flag_b = 1;
                            u32 scene_2 = current_scene_id(r0_28, r1_1.addr(), guest::cpu()->r[2]);
                            r1_1 = gptr<Local_00606704_r1_1>(guest::cpu()->r[1]);
                            if (scene_2 != 0x5eu) {  // (from the original)
                                if (scene_2 == 0x62u) {  // (from the original)
                                    goto L_60698c;
                                }
                                goto L_60699c;
                            }
                            r0_30 = read_u32_0x009529c8_(scene_2, r1_1.addr());
                            r1_1 = gptr<Local_00606704_r1_1>(guest::cpu()->r[1]);
                            if (r0_30 != 0) {
                                *gptr<u8>(r0_30 + 0x168u) = 0;  // (from the original)
                            }
L_60698c:;
                            u32 r0_31 = *popup_window;
                            if (r0_31 != 0) {
                                *gptr<u8>(r0_31 + 0xa10u) = 0;  // (from the original)
                            }
                        }
                    }
                }
            }
        }
L_60699c:;
        r0_1 = 0u;
    }
    guest::cpu()->r[1] = r1_1.addr();
    return r0_1;
L_6069a4:;
    u32 r0_32 = *bs_scene_pre_executed;
    if (r0_32 != 0) {
        r0_32 = all_report_zero(r0_32, r1_2);
        r1_2 = guest::cpu()->r[1];
        if (r0_32 != 0) {
            u32 r1_6 = *announcement_flag_d;
            u32 r0_33 = *announcement_flag_b;
            SceneEnvs__select(r0_33, r1_6, 0u);
            start_scene_change(*scene_pre_execute_b);
            *bs_scene_pre_executed = 0;
            *bs_scene_flag_a = 0;
            return 1u;
        }
    }
    u32 r0_35 = all_report_one_00565fe8(r0_32, r1_2);
    if (r0_35 != 0) {
        *bs_scene_pre_executed = 0;
    }
    *bs_scene_flag_a = 0;
    return 1u;
}

}  // namespace d_00606704
GUEST_EXPORT_FRAMED(0x00606704, d_00606704::BsScene__pre_execute, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_00606a24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the pending announcement: its message id, four flags and a value.
namespace d_00606a24 {

inline constexpr u32 announcement_message_id_b_address = 0x0094e474u;
inline guest::global<u16, 0x0094e474> announcement_message_id_b;
inline guest::global<u8, 0x009503bf> announcement_flag_a;
inline guest::global<u8, 0x009503c0> announcement_flag_b;
inline guest::global<u8, 0x009503c1> announcement_flag_c;
inline guest::global<u8, 0x009503c2> announcement_flag_d;
inline guest::global<u16, 0x009503c4> announcement_message_id;
inline guest::global<u32, 0x009503d0> announcement_value;

void Announcement__set(u32 announcement, u32 r1, u32 r2, u32 r3) {
    u32 r4_1 = *gptr<u32>(guest::cpu()->r[13] + 4u);
    float S0_1 = std::bit_cast<float>(*gptr<u32>(guest::cpu()->r[13] + 8u));
    *announcement_message_id = u16(announcement);
    *announcement_flag_a = u8(r1);
    *announcement_flag_b = u8(r2);
    *announcement_flag_c = u8(r3);
    *announcement_flag_d = u8(r4_1);
    *announcement_value = std::bit_cast<u32>(S0_1);
    *announcement_message_id_b = u16(announcement);
    guest::cpu()->r[1] = announcement_message_id_b_address;
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_00606a24
GUEST_EXPORT_FRAMED(0x00606a24, d_00606a24::Announcement__set, 0x10);  // pushes {r4} first, as the original

// f_00606a64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the pending announcement to the default message and clears it.
namespace d_00606a64 {

inline constexpr u32 announcement_shown_address = 0x009503bcu;
inline guest::global<u16, 0x0088731e> global_0088731e;
inline guest::global<u16, 0x0094e474> announcement_message_id_b;
inline guest::global<u8, 0x009503bc> announcement_shown;
inline guest::global<u8, 0x009503bf> announcement_flag_a;
inline guest::global<u8, 0x009503c0> announcement_flag_b;
inline guest::global<u8, 0x009503c1> announcement_flag_c;
inline guest::global<u8, 0x009503c2> announcement_flag_d;
inline guest::global<u16, 0x009503c4> announcement_message_id;
inline guest::global<u32, 0x009503d0> announcement_value;

u32 Announcement__reset() {
    u32 r1_1 = *global_0088731e;
    *announcement_message_id = u16(r1_1);
    *announcement_flag_a = 0;
    *announcement_flag_b = 0;
    *announcement_flag_c = 1;
    *announcement_flag_d = 1;
    *announcement_value = 0;
    *announcement_message_id_b = u16(r1_1);
    *announcement_shown = 0;
    guest::cpu()->r[1] = r1_1;
    return announcement_shown_address;
}

}  // namespace d_00606a64
GUEST_EXPORT_FRAMED(0x00606a64, d_00606a64::Announcement__reset, 0x30);  // pushes {r4, r5} first, as the original

// f_00606ab4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Shows the pending announcement when nothing blocks it (no announcement shown, no error screen, the session idle);
// whether it was shown.
namespace d_00606ab4 {

inline constexpr u32 announcement_shown_address = 0x009503bcu;
inline constexpr u32 announcement_value_address = 0x009503d0u;
inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u16, 0x00886e28> global_00886e28;
inline guest::global<u32, 0x0094e3c8> err_eula_mgr_instance;
inline guest::global<u32, 0x009503ac> global_009503ac;
inline guest::global<u8, 0x009503bc> announcement_shown;
inline guest::global<u16, 0x009503c4> announcement_message_id;
inline guest::global<u16, 0x009503c6> announcement_flag;
inline guest::global<u16, 0x009503c8> global_009503c8;
inline guest::global<u32, 0x009503d0> announcement_value;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x00529d08, u32(u32, u32, u32, u32)> StringPool__find_message_2;
inline constexpr guest::Function<0x00606bd0, u32(u32, u32, u32, u32)> Announcement__can_show;
inline constexpr guest::Function<0x006213c8, u32(u32, u32, u32, u32)> refresh_station_and_send;

u32 Announcement__try_show(u32 r0_unused, u32 r1, u32 r2) {
    u32 r0 = 0;
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    if (*announcement_shown == 0) {
        if (*announcement_message_id != 0xffffu && *gptr<u8>(*err_eula_mgr_instance + 0xfb0u) == 0) {  // (from the original)
            r0_1 = *net_session;
            r4_1 = *gptr<u8>(r0_1 + 0x1c0u);  // (from the original)
            if (r4_1 == 0) {
                goto L_606b2c;
            }
            if (r4_1 == 0xeu) {  // (from the original)
                goto L_606b18;
            }
            if (r4_1 == 0xfu) {  // (from the original)
                goto L_606b2c;
            }
        }
    }
    return 0u;
L_606b18:;
    r0_2 = r0_1 + 0x1c0u;  // (from the original)
    refresh_station_and_send(r0_2, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = 0xfu;  // (from the original)
    *gptr<u8>(*net_session + 0x1c0u) = u8(r1);  // (from the original)
L_606b2c:;
    if (*global_009503ac == 0) {
        u32 string_pool = *global_00886e28;
        StringPool__find_message_2(string_pool, 0u, 0u, guest::cpu()->r[3]);
        return 0u;
    }
    u32 r0_4 = *announcement_message_id;
    r0 = Announcement__can_show(r0_4, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        *global_009503c8 = *announcement_flag;
        u32 r0_5 = *announcement_message_id;
        *announcement_flag = u16(r0_5);
        r0 = StringPool__find_message_2(r0_5, *announcement_value, 1u, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            return r0;
        }
        if (r4_1 != 0) {
            *gptr<u8>(*net_session + 0x1c0u) = 0x10;  // (from the original)
        }
        *announcement_message_id = 0xffff;  // (from the original)
        *announcement_shown = 1;
        guest::cpu()->r[1] = 1u;
        return r0;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00606ab4
GUEST_EXPORT_FRAMED(0x00606ab4, d_00606ab4::Announcement__try_show, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00606d20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the scene flag when it is set, and the cached state.
namespace d_00606d20 {

struct __attribute__((packed)) SceneFlagRef {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0xb];  // (not used here)
    u8 byte_13;
};
GUEST_OFFSET(SceneFlagRef, word_4, 0x4);
GUEST_OFFSET(SceneFlagRef, byte_13, 0x13);

inline constexpr guest::Function<0x0051fe30, u32(u32)> read_u32_0x0097528c_;
inline constexpr guest::Function<0x00520a18, u32(u32, u32)> clear_scene_flag_0;
inline constexpr guest::Function<0x00747a90, u32(u32, u32)> HashTable__bucket_flag;

u32 SceneFlagRef__clear(gptr<SceneFlagRef> scene_flag_ref) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    scene_flag_ref->byte_13 = 0;
    u32 hash_table = read_u32_0x0097528c_(0u);
    u32 r0_2 = HashTable__bucket_flag(hash_table, scene_flag_ref->word_4);
    if (r0_2 != 0) {
        u32 r1_2 = scene_flag_ref->word_4;
        frame.release();
        return clear_scene_flag_0(hash_table, r1_2);
    }
    return r0_2;
}

}  // namespace d_00606d20
GUEST_EXPORT(0x00606d20, d_00606d20::SceneFlagRef__clear);

// f_00606d70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the scene flag when it is clear, and the cached state.
namespace d_00606d70 {

struct __attribute__((packed)) SceneFlagRef {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0xb];  // (not used here)
    u8 byte_13;
};
GUEST_OFFSET(SceneFlagRef, word_4, 0x4);
GUEST_OFFSET(SceneFlagRef, byte_13, 0x13);

inline constexpr guest::Function<0x0051fe30, u32(u32)> read_u32_0x0097528c_;
inline constexpr guest::Function<0x00520a4c, u32(u32, u32)> set_scene_flag_0;
inline constexpr guest::Function<0x00747a90, u32(u32, u32)> HashTable__bucket_flag;

u32 SceneFlagRef__set(gptr<SceneFlagRef> scene_flag_ref) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    scene_flag_ref->byte_13 = 1;
    u32 hash_table = read_u32_0x0097528c_(1u);
    u32 r0_2 = HashTable__bucket_flag(hash_table, scene_flag_ref->word_4);
    if (r0_2 == 0) {
        u32 r1_2 = scene_flag_ref->word_4;
        frame.release();
        return set_scene_flag_0(hash_table, r1_2);
    }
    return r0_2;
}

}  // namespace d_00606d70
GUEST_EXPORT(0x00606d70, d_00606d70::SceneFlagRef__set);

// f_00606e60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00606e60 {

inline constexpr u32 vtable_BsScene_rec = 0x008f7dc4u;
inline guest::global<u8, 0x009503bd> bs_scene_flag_a;
inline guest::global<u8, 0x009503be> bs_scene_flag_b;
inline guest::global<u32, 0x009503cc> global_009503cc;
inline constexpr guest::Function<0x00521a8c, u32(u32)> construct_process;

u32 BsScene__BsScene(gptr<BsScene_rec> bs_scene_rec) {
    construct_process(bs_scene_rec.addr());
    bs_scene_rec->vtable = vtable_BsScene_rec;
    bs_scene_rec->byte_13 = 0;
    bs_scene_rec->byte_14 = 0;
    *global_009503cc = bs_scene_rec.addr();
    *bs_scene_flag_a = 1;
    *bs_scene_flag_b = 0;
    return bs_scene_rec.addr();
}

}  // namespace d_00606e60
GUEST_EXPORT_FRAMED(0x00606e60, d_00606e60::BsScene__BsScene, 0x4010);  // pushes {r4, lr} first, as the original

// f_00606ec8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the talk script from the text and attaches it to the talk window, then requests the window close.
namespace d_00606ec8 {

struct __attribute__((packed)) TalkScript {
    u8 unknown_0[0x18];  // (not used here)
    u32 talk_window;
};
GUEST_OFFSET(TalkScript, talk_window, 0x18);

inline constexpr u32 talk_script_state_address = 0x009506c8u;
inline constexpr u32 talk_window_holder_address = 0x0095deacu;
inline guest::global<u32, 0x009506c8> talk_script_state;
inline guest::global<u32, 0x0095deac> talk_window_holder;
inline constexpr guest::Function<0x005dd51c, u32(u32, u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_005dd51c;
inline constexpr guest::Function<0x005dd5b8, u32(u32, u32)> SafeString__format_3_digits;
inline constexpr guest::Function<0x00602144, u32(u32, u32)> TalkWindow__attach;
inline constexpr guest::Function<0x00602938, u32(u32, u32, u32, u32)> TalkWindow__request_close;

void TalkScript__start(gptr<TalkScript> talk_script, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    sead__SafeStringBase_char___SafeStringBase_005dd51c(talk_script.addr() + 0x14u, *talk_script_state, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    SafeString__format_3_digits(talk_script.addr() + 0x14u, r1);  // (from the original)
    TalkWindow__attach(*gptr<u32>(*talk_window_holder + 0x14u), talk_script.addr() + 0x14u);  // (from the original)
    u32 talk_window = talk_script->talk_window;
    frame.release();
    TalkWindow__request_close(talk_window, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_00606ec8
GUEST_EXPORT(0x00606ec8, d_00606ec8::TalkScript__start);

// f_00606f20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds one to the town's count (capped at 1000), flags the current player and counts it.
namespace d_00606f20 {

struct __attribute__((packed)) Local_00606f20_r0_2 {
    u8 unknown_0[0x7];  // (not used here)
    u8 byte_7;
    u8 byte_8;
};
GUEST_OFFSET(Local_00606f20_r0_2, byte_7, 0x7);
GUEST_OFFSET(Local_00606f20_r0_2, byte_8, 0x8);

struct __attribute__((packed)) Local_00606f20_r0_4 {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
};
GUEST_OFFSET(Local_00606f20_r0_4, byte_c, 0xc);

inline constexpr guest::Function<0x0024b7b8, u32(u32, u32, u32, u32)> add_to_current_player_counter;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;

u32 Town__count_visit(u32 town, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 data_base_2 = get_data_base(town, r1, r2, r3);
    gptr<Local_00606f20_r0_2> r0_2 = gptr<Local_00606f20_r0_2>(data_base_2 + 0x6214fu);  // (from the original)
    u32 r2_1 = r0_2->byte_7;
    u32 r1_1 = (r2_1 >> 3) + ((u32(r0_2->byte_8) & 0x1fu) << 5);  // (from the original)
    u32 r1_2 = r1_1 + 1u > 0x3e8u ? 0x3e8u : r1_1 + 1u;  // (from the original)
    u32 r1_3 = r2_1 & ~0xf8u | r1_2 << 3;  // (from the original)
    u32 r3_1 = u32(r0_2->byte_8) & ~0x1fu;  // (from the original)
    u32 r2_2 = r3_1 | (r1_2 & 0x3e0u) >> 5;  // (from the original)
    r0_2->byte_7 = u8(r1_3);
    r0_2->byte_8 = u8(r2_2);
    u32 player_2 = get_current_player(r0_2.addr(), r1_3, r2_2, r3_1);
    if (player_2 == 0) {
        return player_2;
    }
    gptr<Local_00606f20_r0_4> r0_4 = gptr<Local_00606f20_r0_4>(player_2 + 0x5700u);  // (from the original)
    r0_4->byte_c = u8(u32(r0_4->byte_c) | 0x80u);  // (from the original)
    frame.release();
    return add_to_current_player_counter(8u, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00606f20
GUEST_EXPORT(0x00606f20, d_00606f20::Town__count_visit);

// f_00607218: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Opens a two-way choice, in the order of the mode, with the default.
namespace d_00607218 {

struct __attribute__((packed)) TalkScript {
    u8 unknown_0[0x18];  // (not used here)
    u32 talk_window;
    u8 unknown_1c[0x108];  // (not used here)
    u32 word_124;
    u32 word_128;
};
GUEST_OFFSET(TalkScript, talk_window, 0x18);
GUEST_OFFSET(TalkScript, word_124, 0x124);
GUEST_OFFSET(TalkScript, word_128, 0x128);

inline constexpr guest::Function<0x005e34c4, u32(u32, u32, u32, u32)> MessageRef__set;
inline constexpr guest::Function<0x005e35dc, u32(u32, u32, u32, u32)> MessageRef__clear;
inline constexpr guest::Function<0x006039ec, u32(u32, u32, u32)> set_table_range;
inline constexpr guest::Function<0x00603a28, u32(u32, u32, u32, u32)> script__CapitalTopEngine__CapitalTopEngine_00603a28;
inline constexpr guest::Function<0x00603ab0, u32(u32)> TalkWindow__open_choice;

struct __attribute__((packed)) Frame_00607218 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x24];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00607218, word_0, 0x0);
GUEST_OFFSET(Frame_00607218, word_4, 0x4);
GUEST_OFFSET(Frame_00607218, word_8, 0x8);
GUEST_SIZE(Frame_00607218, 0x30);

void TalkScript__open_yes_no(gptr<TalkScript> talk_script, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00607218> frame;  // the original's stack frame
    MessageRef__clear(frame.at(0x10).addr(), r1, r2, r3);  // (from the original)
    u32 talk_window = talk_script->talk_window;
    TalkWindow__open_choice(talk_window);
    u32 r0_3 = talk_script->word_128;
    if (r0_3 != 0) {
        if (r0_3 == 1u) {
            frame->word_0 = 0;
            frame->word_4 = 0;
            frame->word_8 = 0;
            MessageRef__set(frame.at(0x10).addr(), 0x85687cu, 0x51u, 0u);  // (from the original)
            script__CapitalTopEngine__CapitalTopEngine_00603a28(talk_window, 0u, frame.at(0x10).addr(), guest::cpu()->r[3]);  // (from the original)
            frame->word_0 = 0;
            frame->word_4 = 0;
            frame->word_8 = 0;
            MessageRef__set(frame.at(0x10).addr(), 0x85687cu, 0x50u, 0u);  // (from the original)
            script__CapitalTopEngine__CapitalTopEngine_00603a28(talk_window, 1u, frame.at(0x10).addr(), 0u);  // (from the original)
            set_table_range(talk_window, 2u, ~0u);
        }
    } else {
        frame->word_0 = 0;
        frame->word_4 = 0;
        frame->word_8 = 0;
        MessageRef__set(frame.at(0x10).addr(), 0x85687cu, 0x50u, 0u);  // (from the original)
        script__CapitalTopEngine__CapitalTopEngine_00603a28(talk_window, 0u, frame.at(0x10).addr(), guest::cpu()->r[3]);  // (from the original)
        frame->word_0 = 0;
        frame->word_4 = 0;
        frame->word_8 = 0;
        MessageRef__set(frame.at(0x10).addr(), 0x85687cu, 0x51u, 0u);  // (from the original)
        script__CapitalTopEngine__CapitalTopEngine_00603a28(talk_window, 1u, frame.at(0x10).addr(), 0u);  // (from the original)
        set_table_range(talk_window, 2u, 1u);
    }
    talk_script->word_124 = ~0u;
}

}  // namespace d_00607218
GUEST_EXPORT_FRAMED(0x00607218, d_00607218::TalkScript__open_yes_no, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0060b230: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the scene (or the online requests) block the gate, for the region of the time.
namespace d_0060b230 {

inline constexpr guest::Function<0x00281cc8, u32(u32)> read_npc_net_share_info_instance;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x005896c4, u32(u32)> read_s8_0x0094e4a9_;
inline constexpr guest::Function<0x0060b2ec, u32(u32)> hour_period;
inline constexpr guest::Function<0x006d1f38, u32(u32)> request_list_has_value;
inline constexpr guest::Function<0x0071e9e8, u32(u32)> station_byte_or_one;

u32 scene_blocks_gate(u32 r0, u32 r1) {
    u32 scene = current_scene_id(r0, r1);
    if (scene == 0x5eu) {  // (from the original)
        return 1u;
    }
    u32 scene_2 = current_scene_id(scene, guest::cpu()->r[1]);
    u32 scene_flagged = scene_has_flags(0x800u, scene_2);  // (from the original)
    if (scene_flagged != 0) {
        return 1u;
    }
    u32 scene_3 = current_scene_id(scene_flagged, guest::cpu()->r[1]);
    if (scene_3 == 0x5cu) {  // (from the original)
        return 1u;
    }
    u32 r0_5 = request_list_has_value(0x80u);  // (from the original)
    if (r0_5 != 0) {
        return 1u;
    }
    u32 r0_6 = request_list_has_value(0x81u);  // (from the original)
    if (r0_6 != 0) {
        return 1u;
    }
    u32 r0_7 = read_s8_0x0094e4a9_(r0_6);
    if (r0_7 == 0) {
        u32 r0_8 = read_npc_net_share_info_instance(r0_7);
        u32 r0_9 = station_byte_or_one(r0_8);
        if (r0_9 == 0) {
            u32 scene_4 = current_scene_id(r0_9, guest::cpu()->r[1]);
            if (scene_4 != 0x27u) {  // (from the original)
                u32 scene_5 = current_scene_id(scene_4, guest::cpu()->r[1]);
                if (scene_5 != 0x29u) {  // (from the original)
                    u32 scene_6 = current_scene_id(scene_5, guest::cpu()->r[1]);
                    if (scene_6 != 0x28u) {  // (from the original)
                        return 0u;
                    }
                }
            }
        }
    }
    u32 period = hour_period(r0);
    return period != 0;
}

}  // namespace d_0060b230
GUEST_EXPORT_FRAMED(0x0060b230, d_0060b230::scene_blocks_gate, 0x4010);  // pushes {r4, lr} first, as the original

// f_0060b2ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The period (0 to 9) of the value, by its range.
namespace d_0060b2ec {


u32 hour_period(u32 r0, u32 r1) {
    if (r0 < 0xfu) {  // (from the original)
        return 3u;
    }
    u32 r1_1 = r0 - 0xfu;  // (from the original)
    if (r1_1 < 6u) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r1_2 = r0 - 0x15u;  // (from the original)
    if (r1_2 < 4u) {
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    u32 r1_3 = r0 - 0x19u;  // (from the original)
    if (r1_3 < 2u) {
        guest::cpu()->r[1] = r1_3;
        return 2u;
    }
    if (r0 == 0x1bu) {  // (from the original)
        guest::cpu()->r[1] = r1_3;
        return 4u;
    }
    u32 r1_4 = r0 - 0x1cu;  // (from the original)
    if (r1_4 < 3u) {
        guest::cpu()->r[1] = r1_4;
        return 5u;
    }
    u32 r1_5 = r0 - 0x1fu;  // (from the original)
    if (r1_5 < 2u) {
        guest::cpu()->r[1] = r1_5;
        return 6u;
    }
    u32 r1_6 = r0 - 0x21u;  // (from the original)
    if (r1_6 < 3u) {
        guest::cpu()->r[1] = r1_6;
        return 7u;
    }
    guest::cpu()->r[1] = r1_6;
    return r0 - 0x24u >= 3u ? 9u : 8u;  // (from the original)
}

}  // namespace d_0060b2ec
GUEST_EXPORT(0x0060b2ec, d_0060b2ec::hour_period);

// f_0060bdd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0060bdd0 {

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr u32 global_00997e8c_address = 0x00997e8cu;
inline constexpr guest::Function<0x00569dc4, u32(u32, u32, u32, u32)> layout_allocator_8;
inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> load_split_start;

struct __attribute__((packed)) Frame_0060bdd0 {
    u32 object_0_vtable;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0060bdd0, object_0_vtable, 0x0);
GUEST_OFFSET(Frame_0060bdd0, word_4, 0x4);
GUEST_SIZE(Frame_0060bdd0, 0xc);

u32 load_telop_layout(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0060bdd0> frame;  // the original's stack frame
    u32 r0_1 = layout_allocator_8(r0, r1, r2, r3);
    frame->word_4 = 0x60be08;  // (from the original)
    frame->object_0_vtable = vtable_sead__SafeStringBase_char_;
    u32 r0_2 = load_split_start(global_00997e8c_address, frame.at(0).addr(), *gptr<u32>(r0_1 + 4u), 0x80u);  // (from the original)
    return r0_2;
}

}  // namespace d_0060bdd0
GUEST_EXPORT_FRAMED(0x0060bdd0, d_0060bdd0::load_telop_layout, 0x4000);  // pushes {lr} first, as the original

// f_0060c284: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Marks the caution window hidden and, in the matching state, tells its owner.
namespace d_0060c284 {

struct __attribute__((packed)) CautionWindow {
    u8 unknown_0[0x418];  // (not used here)
    u8 byte_418;
};
GUEST_OFFSET(CautionWindow, byte_418, 0x418);

inline constexpr guest::Function<0x001fa354, u32(u32, u32)> LayoutWindow__show_now;
inline constexpr guest::Function<0x006d1e64, u32(u32, u32, u32, u32)> get_state_30;

void CautionWindow__hide(gptr<CautionWindow> caution_window) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    caution_window->byte_418 = 0;
    u32 r0_1 = get_state_30(caution_window.addr(), 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = *gptr<u8>(*gptr<u32>(r0_1 + 0x1f4u) + 0x4d1u);  // (from the original)
    if (r0_2 != 1u) {
        return;
    }
    u32 r0_3 = get_state_30(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 layout_window = *gptr<u32>(r0_3 + 0x1f4u);  // (from the original)
    frame.release();
    LayoutWindow__show_now(layout_window, guest::cpu()->r[1]);
    return;
}

}  // namespace d_0060c284
GUEST_EXPORT(0x0060c284, d_0060c284::CautionWindow__hide);

// f_0060c360: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Draws the caution layout while it is shown.
namespace d_0060c360 {

struct __attribute__((packed)) CautionWindow {
    u8 unknown_0[0x418];  // (not used here)
    u8 byte_418;
};
GUEST_OFFSET(CautionWindow, byte_418, 0x418);

inline constexpr guest::Function<0x001323bc, u32(u32)> read_global_975c20;
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> LayoutRenderer__draw_on_screen;

u32 CautionWindow__draw(gptr<CautionWindow> caution_window, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = caution_window->byte_418;
    if (r0_1 != 1u) {
        return r0_1;
    }
    u32 r0_2 = read_global_975c20(r0_1);
    frame.release();
    return LayoutRenderer__draw_on_screen(r0_2, caution_window.addr() + 0x27cu, 0u);  // (from the original)
}

}  // namespace d_0060c360
GUEST_EXPORT(0x0060c360, d_0060c360::CautionWindow__draw);

// f_0060c38c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the caution layout archive and sets its draw order.
namespace d_0060c38c {

struct __attribute__((packed)) CautionWindow {
    u8 unknown_0[0x288];  // (not used here)
    u8 byte_288;
    u8 unknown_289[0xdf];  // (not used here)
    u32 word_368;
    u8 unknown_36c[0xad];  // (not used here)
    u8 byte_419;
};
GUEST_OFFSET(CautionWindow, byte_288, 0x288);
GUEST_OFFSET(CautionWindow, word_368, 0x368);
GUEST_OFFSET(CautionWindow, byte_419, 0x419);

inline constexpr guest::Function<0x00567dac, u32(u32, u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_00567dac;
inline constexpr guest::Function<0x00569184, u32(u32, u32, u32, u32)> Layout__virtual_4;

void CautionWindow__load_layout(gptr<CautionWindow> caution_window, u32 r1_unused, u32 r2_unused, u32 r3) {
    sead__SafeStringBase_char___SafeStringBase_00567dac(caution_window.addr() + 0x34u, 0x60c3d4u, 0x80u, r3);  // (from the original)
    caution_window->word_368 = caution_window.addr() + 0x34u;  // (from the original)
    Layout__virtual_4(caution_window.addr() + 0x27cu, 0x60c3f0u, 0u, 0x1000u);  // (from the original)
    caution_window->byte_288 = 0x8d;  // (from the original)
    caution_window->byte_419 = 0;
}

}  // namespace d_0060c38c
GUEST_EXPORT_FRAMED(0x0060c38c, d_0060c38c::CautionWindow__load_layout, 0x4010);  // pushes {r4, lr} first, as the original

// f_0060c400: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Advances the caution window's in or out animation and, when it ends, notifies its panes (hiding it after the out
// one); then updates the layout.
namespace d_0060c400 {

struct __attribute__((packed)) CautionWindow {
    u8 unknown_0[0x418];  // (not used here)
    u8 byte_418;
    u8 byte_419;
};
GUEST_OFFSET(CautionWindow, byte_418, 0x418);
GUEST_OFFSET(CautionWindow, byte_419, 0x419);

inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32)> Layout__find_pane;
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> notify_list_objects;
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> Layout__virtual_3;
inline constexpr guest::Function<0x00569544, u32(u32)> FrameControl__advance;
inline constexpr guest::Function<0x0074fdd0, u32(u32, u32, u32, u32)> button_slot_check;

u32 CautionWindow__update(gptr<CautionWindow> caution_window, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0 = caution_window.addr();
    u32 control = 0;
    u32 r0_8 = 0;
    u32 r0_1 = caution_window->byte_419;
    if (r0_1 != 0) {
        if ((r0_1 & 1u) != 0) {
            u32 r0_3 = button_slot_check(r0 + 0x3c8u, r1, r2, r3);  // (from the original)
            if (r0_3 == 0) {
                control = r0 + 0x3c8u;  // (from the original)
                goto L_60c4cc;
            }
            u32 pane_3 = Layout__find_pane(r0 + 0x27cu, 0x8575d8u, 1u);  // (from the original)
            notify_list_objects(r0 + 0x27cu, r0 + 0x3c8u, pane_3, 0u);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r0_8 = u32(caution_window->byte_419) ^ 1u;
        } else {
            if ((r0_1 & 2u) == 0) {
                frame.release();
                return Layout__virtual_3(r0 + 0x27cu, r1, r2, r3);  // (from the original)
            }
            u32 r0_10 = button_slot_check(r0 + 0x3f0u, r1, r2, r3);  // (from the original)
            if (r0_10 == 0) {
                control = r0 + 0x3f0u;  // (from the original)
                goto L_60c4cc;
            }
            u32 pane_4 = Layout__find_pane(r0 + 0x27cu, 0x8575d8u, 1u);  // (from the original)
            notify_list_objects(r0 + 0x27cu, r0 + 0x3f0u, pane_4, 0u);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            caution_window->byte_418 = 0;
            r0_8 = u32(caution_window->byte_419) ^ 2u;
        }
        *gptr<u8>((r0 + 0x400u) + 0x19u) = u8(r0_8);  // (from the original)
        frame.release();
        return Layout__virtual_3(r0 + 0x27cu, r1, r2, r3);  // (from the original)
L_60c4cc:;
        FrameControl__advance(control);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    frame.release();
    return Layout__virtual_3(r0 + 0x27cu, r1, r2, r3);  // (from the original)
}

}  // namespace d_0060c400
GUEST_EXPORT(0x0060c400, d_0060c400::CautionWindow__update);

// f_0060c560: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the spiral's turn rate and step from its radius, speed and start angle, and its center.
namespace d_0060c560 {

struct __attribute__((packed)) Spiral {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Spiral, float_0, 0x0);
GUEST_OFFSET(Spiral, float_4, 0x4);
GUEST_OFFSET(Spiral, float_8, 0x8);
GUEST_OFFSET(Spiral, float_c, 0xc);
GUEST_OFFSET(Spiral, float_10, 0x10);
GUEST_OFFSET(Spiral, float_14, 0x14);
GUEST_OFFSET(Spiral, word_18, 0x18);
GUEST_OFFSET(Spiral, word_1c, 0x1c);
GUEST_OFFSET(Spiral, word_20, 0x20);

struct __attribute__((packed)) Object_0060c560_1 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Object_0060c560_1, float_0, 0x0);
GUEST_OFFSET(Object_0060c560_1, float_4, 0x4);
GUEST_OFFSET(Object_0060c560_1, float_8, 0x8);

struct __attribute__((packed)) Object_0060c560_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0060c560_2, word_0, 0x0);
GUEST_OFFSET(Object_0060c560_2, word_4, 0x4);
GUEST_OFFSET(Object_0060c560_2, word_8, 0x8);


void Spiral__init(gptr<Spiral> spiral, gptr<Object_0060c560_1> arg1, gptr<Object_0060c560_2> arg2, float S0) {
    spiral->float_0 = arg1->float_4 * 360.0f / (6.2831855f * arg1->float_0) + arg1->float_8;
    spiral->float_4 = arg1->float_0 / arg1->float_4;
    float S1_1 = arg1->float_0;
    float S2_1 = arg1->float_4;
    float S3_1 = arg1->float_8;
    spiral->float_c = S1_1;
    spiral->float_10 = S2_1;
    spiral->float_14 = S3_1;
    u32 r1_1 = arg2->word_0;
    u32 r3_1 = arg2->word_4;
    spiral->word_20 = arg2->word_8;
    spiral->word_18 = r1_1;
    spiral->word_1c = r3_1;
    spiral->float_8 = S0;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_0060c560
GUEST_EXPORT(0x0060c560, d_0060c560::Spiral__init);

// f_0060c5c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// A zero vector (with a zero word after it), initialized once.
namespace d_0060c5c4 {

inline constexpr u32 zero_vector_guard_address = 0x00951738u;
inline constexpr u32 zero_vector_address = 0x009ab614u;
inline guest::global<u32, 0x00951738> zero_vector_guard;
inline guest::global<u32, 0x009ab614> zero_vector;
inline guest::global<u32, 0x009ab618> global_009ab618;
inline guest::global<u32, 0x009ab61c> global_009ab61c;
inline guest::global<u32, 0x009ab620> global_009ab620;
inline guest::global<u32, 0x009ab624> global_009ab624;
inline guest::global<u32, 0x009ab628> global_009ab628;
inline guest::global<u32, 0x009ab62c> global_009ab62c;
inline guest::global<u32, 0x009ab630> global_009ab630;
inline guest::global<u32, 0x009ab634> global_009ab634;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32)> static_guard_acquire;

u32 static_zero_vector(u32 r0_unused, u32 r1, float S0) {
    if ((*zero_vector_guard & 1u) != 0) {
        return zero_vector_address;
    }
    u32 first_time = static_guard_acquire(zero_vector_guard_address, r1);
    if (first_time == 0) {
        return zero_vector_address;
    }
    float S0_2 = 0.0f;
    *zero_vector = std::bit_cast<u32>(S0_2);
    *global_009ab618 = std::bit_cast<u32>(S0_2);
    *global_009ab61c = std::bit_cast<u32>(S0_2);
    *global_009ab620 = 0;
    *global_009ab624 = 0;
    *global_009ab628 = 0;
    *global_009ab62c = 0;
    *global_009ab630 = 0;
    *global_009ab634 = 0;
    guest::cpu()->r[1] = 0u;
    guest::cpu()->s[0] = S0_2;
    return zero_vector_address;
}

}  // namespace d_0060c5c4
GUEST_EXPORT_FRAMED(0x0060c5c4, d_0060c5c4::static_zero_vector, 0x4010);  // pushes {r4, lr} first, as the original

// f_0060d0d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds the four 15-bit colors of `other` to the four colors.
namespace d_0060d0d0 {

struct __attribute__((packed)) Color4x555 {
    u16 half_0;
    u16 half_2;
    u16 half_4;
    u16 half_6;
};
GUEST_OFFSET(Color4x555, half_0, 0x0);
GUEST_OFFSET(Color4x555, half_2, 0x2);
GUEST_OFFSET(Color4x555, half_4, 0x4);
GUEST_OFFSET(Color4x555, half_6, 0x6);

struct __attribute__((packed)) Object_0060d0d0_1 {
    u16 half_0;
    u16 half_2;
    u16 half_4;
    u16 half_6;
};
GUEST_OFFSET(Object_0060d0d0_1, half_0, 0x0);
GUEST_OFFSET(Object_0060d0d0_1, half_2, 0x2);
GUEST_OFFSET(Object_0060d0d0_1, half_4, 0x4);
GUEST_OFFSET(Object_0060d0d0_1, half_6, 0x6);


void Color4x555__add(gptr<Color4x555> color4x555, gptr<Object_0060d0d0_1> arg1) {
    color4x555->half_0 = u16(u32(color4x555->half_0) + u32(arg1->half_0));
    color4x555->half_2 = u16(u32(color4x555->half_2) + u32(arg1->half_2));
    color4x555->half_4 = u16(u32(color4x555->half_4) + u32(arg1->half_4));
    color4x555->half_6 = u16(u32(arg1->half_6) + u32(color4x555->half_6));
}

}  // namespace d_0060d0d0
GUEST_EXPORT(0x0060d0d0, d_0060d0d0::Color4x555__add);

// f_0060d12c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds the amount to each channel of the four 15-bit colors (as 8-bit values, back to 5 bits).
namespace d_0060d12c {

struct __attribute__((packed)) Color4x555 {
    u16 half_0;
    u16 half_2;
    u16 half_4;
    u16 half_6;
};
GUEST_OFFSET(Color4x555, half_0, 0x0);
GUEST_OFFSET(Color4x555, half_2, 0x2);
GUEST_OFFSET(Color4x555, half_4, 0x4);
GUEST_OFFSET(Color4x555, half_6, 0x6);


void Color4x555__brighten(gptr<Color4x555> color4x555, u32 r1) {
    u32 r12_1 = color4x555->half_0;
    u32 r7_1 = color4x555->half_2;
    u32 r10_1 = color4x555->half_4;
    u32 r2_1 = color4x555->half_6;
    color4x555->half_0 = u16((r1 + (r12_1 << 0x1b >> 0x18) >> 3) + (((r12_1 & 0x3e0u) >> 2) + r1 >> 3 << 5) + (((r12_1 & 0x7c00u) >> 7) + r1 >> 3 << 0xa));  // (from the original)
    color4x555->half_2 = u16((r1 + (r7_1 << 0x1b >> 0x18) >> 3) + (r1 + ((r7_1 & 0x3e0u) >> 2) >> 3 << 5) + (r1 + ((r7_1 & 0x7c00u) >> 7) >> 3 << 0xa));  // (from the original)
    color4x555->half_4 = u16((r1 + ((r10_1 & 0x1fu) << 3) >> 3) + (r1 + ((r10_1 & 0x3e0u) >> 2) >> 3 << 5) + (r1 + ((r10_1 & 0x7c00u) >> 7) >> 3 << 0xa));  // (from the original)
    color4x555->half_6 = u16((r1 + ((r2_1 & 0x1fu) << 3) >> 3) + (r1 + ((r2_1 & 0x3e0u) >> 2) >> 3 << 5) + (r1 + ((r2_1 & 0x7c00u) >> 7) >> 3 << 0xa));  // (from the original)
}

}  // namespace d_0060d12c
GUEST_EXPORT_FRAMED(0x0060d12c, d_0060d12c::Color4x555__brighten, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0060d264: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the colors entry at the cell (x, y) of the 16x16 grid.
namespace d_0060d264 {

struct __attribute__((packed)) Object_0060d264_3 {
    u16 half_0;
    u16 half_2;
    u16 half_4;
    u16 half_6;
    u8 byte_8;
    u8 byte_9;
};
GUEST_OFFSET(Object_0060d264_3, half_0, 0x0);
GUEST_OFFSET(Object_0060d264_3, half_2, 0x2);
GUEST_OFFSET(Object_0060d264_3, half_4, 0x4);
GUEST_OFFSET(Object_0060d264_3, half_6, 0x6);
GUEST_OFFSET(Object_0060d264_3, byte_8, 0x8);
GUEST_OFFSET(Object_0060d264_3, byte_9, 0x9);

struct __attribute__((packed)) Local_0060d264_r0_1 {
    u16 half_0;
    u16 half_2;
    u16 half_4;
    u16 half_6;
    u8 byte_8;
    u8 byte_9;
};
GUEST_OFFSET(Local_0060d264_r0_1, half_0, 0x0);
GUEST_OFFSET(Local_0060d264_r0_1, half_2, 0x2);
GUEST_OFFSET(Local_0060d264_r0_1, half_4, 0x4);
GUEST_OFFSET(Local_0060d264_r0_1, half_6, 0x6);
GUEST_OFFSET(Local_0060d264_r0_1, byte_8, 0x8);
GUEST_OFFSET(Local_0060d264_r0_1, byte_9, 0x9);


void ColorGrid16__set(u32 color_grid16, u32 r1, u32 r2, gptr<Object_0060d264_3> arg3) {
    gptr<Local_0060d264_r0_1> r0_1 = gptr<Local_0060d264_r0_1>(color_grid16 + (r2 & 0xfu) * 0xa0u + (r1 & 0xfu) * 0xau + 0x1cu);  // (from the original)
    r0_1->half_0 = arg3->half_0;
    r0_1->half_2 = arg3->half_2;
    r0_1->half_4 = arg3->half_4;
    r0_1->half_6 = arg3->half_6;
    r0_1->byte_8 = arg3->byte_8;
    u32 r1_1 = arg3->byte_9;
    r0_1->byte_9 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0060d264
GUEST_EXPORT(0x0060d264, d_0060d264::ColorGrid16__set);

// f_0060de20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the window's pane at +0x310.
namespace d_0060de20 {

struct __attribute__((packed)) Window {
    u8 unknown_0[0x310];  // (not used here)
    u32 word_310;
};
GUEST_OFFSET(Window, word_310, 0x310);

inline constexpr guest::Function<0x004b71c8, u32(u32, u32)> Pane__set_position;

u32 Window__update_pane_310(gptr<Window> window) {
    u32 r0_1 = window->word_310;
    Pane__set_position(r0_1, guest::cpu()->r[1]);
    return r0_1;
}

}  // namespace d_0060de20
GUEST_EXPORT_FRAMED(0x0060de20, d_0060de20::Window__update_pane_310, 0x4010);  // pushes {r4, lr} first, as the original

// f_0060e094: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Notifies the part's panes and restarts its animation from the start.
namespace d_0060e094 {

struct __attribute__((packed)) LayoutPart {
    u8 unknown_0[0xf4];  // (not used here)
    u32 word_f4;
    u8 unknown_f8[0x173];  // (not used here)
    u8 byte_26b;
};
GUEST_OFFSET(LayoutPart, word_f4, 0xf4);
GUEST_OFFSET(LayoutPart, byte_26b, 0x26b);

inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> notify_objects_of_list;
inline constexpr guest::Function<0x005697e0, u32(u32)> Animation__set_value;

u32 LayoutPart__restart_animation(gptr<LayoutPart> layout_part, float S0) {
    u32 r2_1 = layout_part->word_f4;
    notify_objects_of_list(layout_part.addr(), layout_part.addr() + 0x270u, r2_1, 0u);  // (from the original)
    float S0_1 = 0.0f;
    guest::cpu()->s[0] = S0_1;
    Animation__set_value(layout_part.addr() + 0x270u);  // (from the original)
    layout_part->byte_26b = 1;
    return 1u;
}

}  // namespace d_0060e094
GUEST_EXPORT_FRAMED(0x0060e094, d_0060e094::LayoutPart__restart_animation, 0x4010);  // pushes {r4, lr} first, as the original

// f_0060e190: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0060e190 {

inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> Layout__virtual_3;
inline constexpr guest::Function<0x00569544, u32(u32, u32, u32, u32)> FrameControl__advance;

u32 MapIcon__virtual_3(gptr<MapIcon> map_icon) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    if (map_icon->byte_26b == 1u) {
        FrameControl__advance(map_icon.addr() + 0x270u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    }
    frame.release();
    return Layout__virtual_3(map_icon.addr() + 0x108u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0060e190
GUEST_EXPORT(0x0060e190, d_0060e190::MapIcon__virtual_3);

// f_0060e47c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0060e47c {

inline constexpr guest::Function<0x001323bc, u32(u32)> read_global_975c20;
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> LayoutRenderer__draw_on_screen;

u32 MapIcon__virtual_4(gptr<MapIcon> map_icon) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r4_1 = map_icon.addr() + 0x108u;  // (from the original)
    if (map_icon->byte_26c != 1u) {
        u32 r0_1 = read_global_975c20(map_icon.addr());
        frame.release();
        return LayoutRenderer__draw_on_screen(r0_1, r4_1, 1u);
    }
    u32 r0_2 = read_global_975c20(map_icon.addr());
    frame.release();
    return LayoutRenderer__draw_on_screen(r0_2, r4_1, 0u);
}

}  // namespace d_0060e47c
GUEST_EXPORT(0x0060e47c, d_0060e47c::MapIcon__virtual_4);

// f_0060e5c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0060e5c0 {

struct __attribute__((packed)) Local_0060e5c0_r0_9 {
    u32 vtable;
    u8 unknown_4[0x250];  // (not used here)
    u32 word_254;
    u32 word_258;
    u8 byte_25c;
    u8 byte_25d;
    u8 unknown_25e[0x2];  // (not used here)
    u32 word_260;
    u32 word_264;
    u8 byte_268;
    u8 byte_269;
    u8 byte_26a;
    u8 byte_26b;
    u8 byte_26c;
};
GUEST_OFFSET(Local_0060e5c0_r0_9, vtable, 0x0);
GUEST_OFFSET(Local_0060e5c0_r0_9, word_254, 0x254);
GUEST_OFFSET(Local_0060e5c0_r0_9, word_258, 0x258);
GUEST_OFFSET(Local_0060e5c0_r0_9, byte_25c, 0x25c);
GUEST_OFFSET(Local_0060e5c0_r0_9, byte_25d, 0x25d);
GUEST_OFFSET(Local_0060e5c0_r0_9, word_260, 0x260);
GUEST_OFFSET(Local_0060e5c0_r0_9, word_264, 0x264);
GUEST_OFFSET(Local_0060e5c0_r0_9, byte_268, 0x268);
GUEST_OFFSET(Local_0060e5c0_r0_9, byte_269, 0x269);
GUEST_OFFSET(Local_0060e5c0_r0_9, byte_26a, 0x26a);
GUEST_OFFSET(Local_0060e5c0_r0_9, byte_26b, 0x26b);
GUEST_OFFSET(Local_0060e5c0_r0_9, byte_26c, 0x26c);

inline constexpr u32 vtable_MapIcon = 0x008f80b8u;
inline constexpr u32 vtable_IconBase = 0x008f8b80u;
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> construct_layout_animation;
inline constexpr guest::Function<0x00125e3c, u32(u32)> Layout__Layout;

u32 IconBase__IconBase(gptr<IconBase> icon_base) {
    icon_base->vtable = vtable_IconBase;
    u32 r0_1 = icon_base.addr() + 4u;
    construct_layout_animation(r0_1, vtable_IconBase, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = r0_1 + 0x28u;  // (from the original)
    construct_layout_animation(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_3 = r0_2 + 0x28u;  // (from the original)
    construct_layout_animation(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_4 = r0_3 + 0x28u;  // (from the original)
    construct_layout_animation(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_5 = r0_4 + 0x28u;  // (from the original)
    construct_layout_animation(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_6 = r0_5 + 0x28u;  // (from the original)
    construct_layout_animation(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    icon_base->word_f4 = 0;
    icon_base->byte_f8 = 0;
    icon_base->byte_f9 = 0;
    icon_base->byte_fa = 0;
    icon_base->word_fc = 0;
    u32 r0_8 = Layout__Layout(r0_6 + 0x3cu);  // (from the original)
    gptr<Local_0060e5c0_r0_9> r0_9 = gptr<Local_0060e5c0_r0_9>(r0_8 - 0x108u);  // (from the original)
    r0_9->word_254 = 0;
    r0_9->word_258 = 0;
    r0_9->byte_25c = 0;
    r0_9->byte_25d = 0;
    r0_9->word_260 = 0;
    r0_9->vtable = vtable_MapIcon;
    r0_9->word_264 = 0;
    r0_9->byte_268 = 0;
    r0_9->byte_269 = 0;
    r0_9->byte_26a = 0;
    r0_9->byte_26b = 0;
    r0_9->byte_26c = 0;
    u32 r0_10 = r0_9.addr() + 0x270u;  // (from the original)
    construct_layout_animation(r0_10, vtable_MapIcon, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_11 = r0_10 + 0x28u;  // (from the original)
    construct_layout_animation(r0_11, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_12 = r0_11 + 0x28u;  // (from the original)
    construct_layout_animation(r0_12, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_13 = r0_12 + 0x28u;  // (from the original)
    construct_layout_animation(r0_13, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_14 = r0_13 - 0x2e8u;  // (from the original)
    *gptr<u32>(r0_14 + 0x310u) = 0;  // (from the original)
    return r0_14;
}

}  // namespace d_0060e5c0
GUEST_EXPORT_FRAMED(0x0060e5c0, d_0060e5c0::IconBase__IconBase, 0x4010);  // pushes {r4, lr} first, as the original

// f_0060e914: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Turns the angle toward the target by up to the step, in the forced direction (1 or 2) when the target is beyond it;
// the change.
namespace d_0060e914 {

struct __attribute__((packed)) Angle {
    u16 half_0;
};
GUEST_OFFSET(Angle, half_0, 0x0);

inline constexpr guest::Function<0x0056ae38, u32(u32, u32, u32, u32)> Angle__approach;
inline constexpr guest::Function<0x0056af2c, u32(u32, u32, u32, u32)> AngleS16__approach_min;

struct __attribute__((packed)) Frame_0060e914 {
    u8 unknown_0[0x4];  // (not read or written by name)
    u16 half_4;
    u8 unknown_6[0xa];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0060e914, half_4, 0x4);
GUEST_SIZE(Frame_0060e914, 0x10);

u32 Angle__turn_toward(gptr<Angle> angle, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0060e914> frame;  // the original's stack frame
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    u32 r0_6 = 0;
    u32 r5_1 = sxth(r2);
    frame->half_4 = angle->half_0;
    if (r5_1 != 0) {
        u32 r12_1 = s16(angle->half_0);
        u32 r1_1 = sxth(r1);
        u32 r2_1 = sxth(r2);
        u32 r0_1 = s32(r2_1) >> 1;
        u32 r6_1 = sxth(r1_1 - r12_1);
        u32 r2_2 = r2_1 << 2;
        if (s32(r5_1) < s32(r6_1) && r3 == 2u) {
            *frame.at<u32>(0) = r0_1;
            *frame.at<u32>(8) = r12_1;
            Angle__approach(frame.at(8).addr(), r1_1 - 0x10000u, 8u, r2_2);  // (from the original)
            r0_3 = *frame.at<u32>(8);
        } else {
            if (s32(r5_1) > s32(r6_1) && r3 == 1u) {
                *frame.at<u32>(0) = r0_1;
                *frame.at<u32>(8) = r12_1;
                Angle__approach(frame.at(8).addr(), r1_1 + 0x10000u, 8u, r2_2);  // (from the original)
                angle->half_0 = u16(*frame.at<u32>(8));
                r1_4 = frame->half_4;
                r0_6 = u32(angle->half_0) - r1_4;
                *frame.at<u16>(0) = u16(r0_6);
                guest::cpu()->r[1] = r1_4;
                return uxth(r0_6);
            }
            *frame.at<u32>(0) = r0_1;
            *frame.at<u16>(8) = u16(r12_1);
            AngleS16__approach_min(frame.at(8).addr(), r1_1, 8u, sxth(r2_2));
            r0_3 = *frame.at<u16>(8);
        }
        angle->half_0 = u16(r0_3);
    }
    r1_4 = frame->half_4;
    r0_6 = u32(angle->half_0) - r1_4;
    *frame.at<u16>(0) = u16(r0_6);
    guest::cpu()->r[1] = r1_4;
    return uxth(r0_6);
}

}  // namespace d_0060e914
GUEST_EXPORT_FRAMED(0x0060e914, d_0060e914::Angle__turn_toward, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0060ea4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Initializes the shaker with the default ranges and no motion.
namespace d_0060ea4c {

struct __attribute__((packed)) Shaker {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 byte_10;
    u8 unknown_11[0x3];  // (not used here)
    u32 word_14;
    u32 word_18;
    float float_1c;
    u8 unknown_20[0x6];  // (not used here)
    u8 byte_26;
};
GUEST_OFFSET(Shaker, word_4, 0x4);
GUEST_OFFSET(Shaker, word_8, 0x8);
GUEST_OFFSET(Shaker, word_c, 0xc);
GUEST_OFFSET(Shaker, byte_10, 0x10);
GUEST_OFFSET(Shaker, word_14, 0x14);
GUEST_OFFSET(Shaker, word_18, 0x18);
GUEST_OFFSET(Shaker, float_1c, 0x1c);
GUEST_OFFSET(Shaker, byte_26, 0x26);

inline guest::global<u32, 0x008806bc> npc_action_handler;
inline guest::global<u32, 0x008806c0> npc_action_handler_adjust;
inline guest::global<u32, 0x00ae5658> origin_x;
inline guest::global<u32, 0x00ae565c> origin_y;
inline guest::global<u32, 0x00ae5660> origin_z;

void Shaker__init(gptr<Shaker> shaker) {
    float S0_1 = 0.0f;
    u32 r2_1 = *npc_action_handler_adjust;
    shaker->word_14 = *npc_action_handler;
    shaker->word_18 = r2_1;
    shaker->word_4 = *origin_x;
    shaker->word_8 = *origin_y;
    shaker->word_c = *origin_z;
    shaker->byte_10 = 0;
    shaker->float_1c = S0_1;
    shaker->byte_26 = 0;
    guest::cpu()->r[1] = 0u;
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_0060ea4c
GUEST_EXPORT(0x0060ea4c, d_0060ea4c::Shaker__init);
