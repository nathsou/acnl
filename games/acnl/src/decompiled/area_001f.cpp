// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_001f4e30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f4e30 {

inline constexpr guest::Function<0x0057ba2c, u32(u32)> Actor__virtual_11;

u32 AcFishCommon__virtual_11(u32 r0) {
    u32 r0_1 = Actor__virtual_11(r0);
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_001f4e30
GUEST_EXPORT_FRAMED(0x001f4e30, d_001f4e30::AcFishCommon__virtual_11, 0x4010);  // pushes {r4, lr} first, as the original

// f_001f4fec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f4fec {

struct __attribute__((packed)) Object_001f4fec_0 {
    u32 word_0;
    u8 unknown_4[0x44];  // (not used here)
    float float_48;
    float float_4c;
    float float_50;
    u8 unknown_54[0xc];  // (not used here)
    float float_60;
    float float_64;
    float float_68;
    u8 unknown_6c[0xc];  // (not used here)
    float float_78;
    float float_7c;
    float float_80;
    u16 half_84;
    u16 half_86;
    u16 half_88;
    u16 half_8a;
    float float_8c;
    float float_90;
    float float_94;
    u16 half_98;
    u8 unknown_9a[0x2];  // (not used here)
    float float_9c;
    float float_a0;
    float float_a4;
    u8 byte_a8;
    u8 unknown_a9[0x13];  // (not used here)
    float float_bc;
    float float_c0;
    u16 half_c4;
    u8 byte_c6;
    u8 byte_c7;
    u8 byte_c8;
};
GUEST_OFFSET(Object_001f4fec_0, word_0, 0x0);
GUEST_OFFSET(Object_001f4fec_0, float_48, 0x48);
GUEST_OFFSET(Object_001f4fec_0, float_4c, 0x4c);
GUEST_OFFSET(Object_001f4fec_0, float_50, 0x50);
GUEST_OFFSET(Object_001f4fec_0, float_60, 0x60);
GUEST_OFFSET(Object_001f4fec_0, float_64, 0x64);
GUEST_OFFSET(Object_001f4fec_0, float_68, 0x68);
GUEST_OFFSET(Object_001f4fec_0, float_78, 0x78);
GUEST_OFFSET(Object_001f4fec_0, float_7c, 0x7c);
GUEST_OFFSET(Object_001f4fec_0, float_80, 0x80);
GUEST_OFFSET(Object_001f4fec_0, half_84, 0x84);
GUEST_OFFSET(Object_001f4fec_0, half_86, 0x86);
GUEST_OFFSET(Object_001f4fec_0, half_88, 0x88);
GUEST_OFFSET(Object_001f4fec_0, half_8a, 0x8a);
GUEST_OFFSET(Object_001f4fec_0, float_8c, 0x8c);
GUEST_OFFSET(Object_001f4fec_0, float_90, 0x90);
GUEST_OFFSET(Object_001f4fec_0, float_94, 0x94);
GUEST_OFFSET(Object_001f4fec_0, half_98, 0x98);
GUEST_OFFSET(Object_001f4fec_0, float_9c, 0x9c);
GUEST_OFFSET(Object_001f4fec_0, float_a0, 0xa0);
GUEST_OFFSET(Object_001f4fec_0, float_a4, 0xa4);
GUEST_OFFSET(Object_001f4fec_0, byte_a8, 0xa8);
GUEST_OFFSET(Object_001f4fec_0, float_bc, 0xbc);
GUEST_OFFSET(Object_001f4fec_0, float_c0, 0xc0);
GUEST_OFFSET(Object_001f4fec_0, half_c4, 0xc4);
GUEST_OFFSET(Object_001f4fec_0, byte_c6, 0xc6);
GUEST_OFFSET(Object_001f4fec_0, byte_c7, 0xc7);
GUEST_OFFSET(Object_001f4fec_0, byte_c8, 0xc8);

struct __attribute__((packed)) Object_001f4fec_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_001f4fec_1, word_0, 0x0);
GUEST_OFFSET(Object_001f4fec_1, word_4, 0x4);

inline constexpr guest::Function<0x0057ba68, u32(u32, u32, u32, u32)> construct_actor;

u32 f_001f4fec(gptr<Object_001f4fec_0> arg0, gptr<Object_001f4fec_1> arg1, u32 r2, u32 r3, float S0, float S1) {
    construct_actor(arg0.addr(), arg1.addr(), r2, r3);
    u32 r1_1 = arg1->word_0;
    float S0_1 = 0.0f;
    arg0->word_0 = r1_1;
    float S1_1 = 1.0f;
    *gptr<u32>(arg0.addr() + *gptr<u32>(r1_1 - 0xcu)) = arg1->word_4;  // (from the original)
    arg0->float_48 = S0_1;
    arg0->float_4c = S0_1;
    arg0->float_50 = S0_1;
    arg0->float_60 = S0_1;
    arg0->float_64 = S0_1;
    arg0->float_68 = S0_1;
    arg0->float_78 = S0_1;
    arg0->float_7c = S0_1;
    arg0->float_80 = S0_1;
    arg0->half_84 = 0;
    arg0->half_86 = 0;
    arg0->half_88 = 0;
    arg0->half_8a = 0;
    arg0->float_8c = S0_1;
    arg0->float_90 = S0_1;
    arg0->float_94 = S1_1;
    arg0->half_98 = 0;
    arg0->float_9c = S0_1;
    arg0->float_a0 = S0_1;
    arg0->float_a4 = S0_1;
    arg0->byte_a8 = 1;
    arg0->float_bc = S0_1;
    arg0->float_c0 = S0_1;
    arg0->half_c4 = 0;
    arg0->byte_c6 = 0;
    arg0->byte_c7 = 1;
    arg0->byte_c8 = 0;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return arg0.addr();
}

}  // namespace d_001f4fec
GUEST_EXPORT_FRAMED(0x001f4fec, d_001f4fec::f_001f4fec, 0x4010);  // pushes {r4, lr} first, as the original

// f_001f581c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f581c {

inline constexpr guest::Function<0x002d58b0, u32(u32, u32, u32)> call_002d58b0;
inline constexpr guest::Function<0x002d595c, u32(u32, u32)> change_mode_002d595c;
inline constexpr guest::Function<0x002e8cc8, u32(u32, u32, u32, u32)> call_002e8cc8;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> copy_item_002fc8e8;
inline constexpr guest::Function<0x002fcb34, u32(u32, u32)> Item__category;
inline constexpr guest::Function<0x00305f44, u32(u32)> query_current_main_object;
inline constexpr guest::Function<0x00615b2c, u32(u32, u32)> call_00615b2c;
inline constexpr guest::Function<0x00615e8c, u32(u32, u32, u32, u32)> call_00615e8c;
inline constexpr guest::Function<0x00700558, u32(u32, u32)> call_00700558;
inline constexpr guest::Function<0x00701150, u32(u32, u32, u32, u32)> call_00701150;

void f_001f581c(gptr<AcObjectShow> arg0, u32 r1_unused, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r1_1 = arg0->byte_200;
    u32 r0_1 = arg0->word_204;
    if (r1_1 != 0) {
        u32 r0_2 = call_00701150(r0_1, r1_1, r2, guest::cpu()->r[3]);
        call_00700558(r0_2, arg0->word_204);
    } else {
        u32 r0_3 = call_00615e8c(r0_1, r1_1, r2, guest::cpu()->r[3]);
        call_00615b2c(r0_3, arg0->word_204);
    }
    u32 r0_5 = call_002d58b0(arg0.addr() + 0x260u, arg0.addr() + 0x14u, uxth(*gptr<u8>(arg0.addr() + 0x200u) == 0 ? 0x53u : arg0->word_204));  // (from the original)
    u32 r0_6 = query_current_main_object(r0_5);
    u32 r1_6 = r0_6 == arg0->byte_255;
    change_mode_002d595c(arg0.addr() + 0x260u, r1_6);  // (from the original)
    copy_item_002fc8e8(arg0.addr() + 0x20cu, arg0.addr() + 0x208u);  // (from the original)
    u32 r1_8 = 0x350u;  // (from the original)
    *gptr<u16>(r1_8 + arg0.addr()) = 0;
    if (arg0->byte_248 == 4u) {
        u32 r0_10 = Item__category(arg0.addr() + 0x20cu, r1_8);  // (from the original)
        r1_8 = guest::cpu()->r[1];
        if (r0_10 == 0x27u || r0_10 == 0x28u) {  // (from the original)
            frame.release();
            call_002e8cc8(arg0.addr() + 0x260u, 0x1000613u, guest::cpu()->r[2], guest::cpu()->r[3]);
            return;  // (from the original)
        }
    }
    guest::cpu()->r[1] = r1_8;
}

}  // namespace d_001f581c
GUEST_EXPORT(0x001f581c, d_001f581c::f_001f581c);

// f_001f6cc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f6cc8 {

inline constexpr guest::Function<0x001f581c, u32(u32, u32, u32, u32)> call_001f581c;
inline constexpr guest::Function<0x002d59a4, u32(u32, u32, u32, u32)> call_002d59a4;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> copy_item_002fc8e8;
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> Item__is_empty;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x002fe574, u32(u32, u32, u32, u32)> Item__same_number_as;

struct __attribute__((packed)) Frame_001f6cc8 {
    u32 word_0;
    u8 unknown_4[0x14];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001f6cc8, word_0, 0x0);
GUEST_SIZE(Frame_001f6cc8, 0x18);

void f_001f6cc8(gptr<AcObjectShow> arg0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_001f6cc8> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 ea_1 = 0;
    u32 r3_4 = 0;
    frame->word_0 = r3;
    u32 r4 = r0;
    u32 r5 = r1;
    u32 r0_2 = Item__is_empty(r0 + 0x20cu, r1, guest::cpu()->r[2], r3);  // (from the original)
    r3 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        u32 r0_3 = arg0->byte_24a;
        u32 r7 = 0x7ffeu;  // (from the original)
        u32 r6 = 0u;
        u32 r0_4 = arg0->byte_249;
        if (r0_3 == 1u || r0_3 == 2u) {
            goto L_1f6d6c;
        }
        if (r0_4 != 1u && r0_4 != 2u) {
            return;
        }
L_1f6d0c:;
        r1_2 = r4 + 0x208u;  // (from the original)
        r0_5 = r4 + 0x20cu;  // (from the original)
        r0_6 = Item__same_number_as(r0_5, r1_2, guest::cpu()->r[2], r3);
        if (r0_6 != 0) {
            return;
        }
        r0_7 = r4 + 0x260u;  // (from the original)
        *gptr<u8>(r4 + 0x254u) = u8(r6);  // (from the original)
        call_002d59a4(r0_7, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r0_8 = frame.at(0).addr();
        construct_item(r0_8, r7);
        r0_9 = r4 + 0x20cu;  // (from the original)
        copy_item_002fc8e8(r0_9, r0_8);
        if (r5 == 0) {
            return;
        }
        ea_1 = frame.at(0).addr();
        r3_4 = *gptr<u32>(ea_1);
        frame.release();
        call_001f581c(r4, guest::cpu()->r[1], guest::cpu()->r[2], r3_4);
        return;
L_1f6d6c:;
        if (r0_4 == 1u || r0_4 == 2u) {
            guest::preempt();
            goto L_1f6d0c;
        }
        *gptr<u8>(r4 + 0x254u) = u8(r6);  // (from the original)
        call_002d59a4(r4 + 0x260u, guest::cpu()->r[1], guest::cpu()->r[2], r3);  // (from the original)
        u32 r0_11 = frame.at(0).addr();
        construct_item(r0_11, r7);
        copy_item_002fc8e8(r4 + 0x20cu, r0_11);  // (from the original)
    }
}

}  // namespace d_001f6cc8
GUEST_EXPORT(0x001f6cc8, d_001f6cc8::f_001f6cc8);

// f_001f815c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f815c {

inline constexpr u32 vtable_AutoCampBook = 0x008ecf74u;
inline guest::global<u32, 0x00986a10> global_00986a10;
inline guest::global<u32, 0x00986a14> global_00986a14;
inline guest::global<u8, 0x00986a18> global_00986a18;
inline guest::global<u32, 0x00986a1c> global_00986a1c;
inline guest::global<u32, 0x00986a20> global_00986a20;
inline guest::global<u32, 0x00986a24> global_00986a24;
inline guest::global<u8, 0x00986a28> global_00986a28;
inline guest::global<u32, 0x00986a2c> global_00986a2c;
inline guest::global<u32, 0x00986a30> global_00986a30;
inline guest::global<u32, 0x00986a34> global_00986a34;
inline guest::global<u8, 0x00986a38> global_00986a38;
inline guest::global<u32, 0x00986a3c> global_00986a3c;
inline guest::global<u32, 0x00986a40> global_00986a40;
inline guest::global<u32, 0x00986a44> global_00986a44;
inline guest::global<u8, 0x00986a48> global_00986a48;
inline guest::global<u32, 0x00986a4c> global_00986a4c;
inline guest::global<u32, 0x00986a50> global_00986a50;
inline guest::global<u32, 0x00986a54> global_00986a54;
inline guest::global<u8, 0x00986a58> global_00986a58;
inline guest::global<u32, 0x00986a5c> global_00986a5c;

void AutoCampBook__AutoCampBook(gptr<AutoCampBook> arg0) {
    arg0->word_0 = vtable_AutoCampBook;
    u32 r12_1 = ~0u;
    *global_00986a10 = 0;
    *global_00986a14 = 0;
    *global_00986a18 = 0xfc;  // (from the original)
    *global_00986a20 = 0;
    *global_00986a1c = r12_1;
    *global_00986a24 = 0;
    *global_00986a28 = 0xfc;  // (from the original)
    *global_00986a30 = 0;
    *global_00986a2c = r12_1;
    *global_00986a34 = 0;
    *global_00986a38 = 0xfc;  // (from the original)
    *global_00986a40 = 0;
    *global_00986a3c = r12_1;
    *global_00986a44 = 0;
    *global_00986a48 = 0xfc;  // (from the original)
    *global_00986a50 = 0;
    *global_00986a4c = r12_1;
    *global_00986a54 = 0;
    *global_00986a58 = 0xfc;  // (from the original)
    *global_00986a5c = r12_1;
}

}  // namespace d_001f815c
GUEST_EXPORT(0x001f815c, d_001f815c::AutoCampBook__AutoCampBook);

// f_001f8798: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f8798 {

struct __attribute__((packed)) Object_001f8798_0 {
    u8 unknown_0[0x1c4];  // (not used here)
    u32 word_1c4;
    u8 unknown_1c8[0x38];  // (not used here)
    u32 word_200;
    u8 unknown_204[0xcc];  // (not used here)
    u32 word_2d0;
    u32 word_2d4;
    u8 unknown_2d8[0x6];  // (not used here)
    u8 byte_2de;
    u8 byte_2df;
    u8 byte_2e0;
    u8 unknown_2e1[0xd3];  // (not used here)
    u16 half_3b4;
    u8 unknown_3b6[0x2];  // (not used here)
    u32 word_3b8;
};
GUEST_OFFSET(Object_001f8798_0, word_1c4, 0x1c4);
GUEST_OFFSET(Object_001f8798_0, word_200, 0x200);
GUEST_OFFSET(Object_001f8798_0, word_2d0, 0x2d0);
GUEST_OFFSET(Object_001f8798_0, word_2d4, 0x2d4);
GUEST_OFFSET(Object_001f8798_0, byte_2de, 0x2de);
GUEST_OFFSET(Object_001f8798_0, byte_2df, 0x2df);
GUEST_OFFSET(Object_001f8798_0, byte_2e0, 0x2e0);
GUEST_OFFSET(Object_001f8798_0, half_3b4, 0x3b4);
GUEST_OFFSET(Object_001f8798_0, word_3b8, 0x3b8);

struct __attribute__((packed)) Local_001f8798_r0_2 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_001f8798_r0_2, float_0, 0x0);
GUEST_OFFSET(Local_001f8798_r0_2, float_4, 0x4);

struct __attribute__((packed)) Local_001f8798_r3_1 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
};
GUEST_OFFSET(Local_001f8798_r3_1, float_0, 0x0);
GUEST_OFFSET(Local_001f8798_r3_1, float_4, 0x4);
GUEST_OFFSET(Local_001f8798_r3_1, float_8, 0x8);
GUEST_OFFSET(Local_001f8798_r3_1, float_c, 0xc);
GUEST_OFFSET(Local_001f8798_r3_1, float_10, 0x10);
GUEST_OFFSET(Local_001f8798_r3_1, float_14, 0x14);

inline guest::global<u32, 0x00848490> global_00848490;
inline guest::global<u32, 0x00848494> global_00848494;
inline guest::global<u32, 0x00848498> global_00848498;
inline guest::global<u32, 0x0084849c> global_0084849c;
inline guest::global<u32, 0x008484a0> global_008484a0;
inline guest::global<u32, 0x008484a4> global_008484a4;
inline constexpr guest::Function<0x002b6a00, u32(u32, u32)> set_node_values;
inline constexpr guest::Function<0x002f6a30, u32(u32, u32)> call_002f6a30;
inline constexpr guest::Function<0x002f6e98, u32(u32, u32, u32, u32)> ButtonActionControl__setup;
inline constexpr guest::Function<0x002f7508, u32(u32, u32, u32)> call_002f7508;

struct __attribute__((packed)) Frame_001f8798 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u8 unknown_24[0x18];  // (not read or written by name)
    u32 word_3c;
    u8 unknown_40[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001f8798, word_0, 0x0);
GUEST_OFFSET(Frame_001f8798, word_4, 0x4);
GUEST_OFFSET(Frame_001f8798, word_8, 0x8);
GUEST_OFFSET(Frame_001f8798, word_c, 0xc);
GUEST_OFFSET(Frame_001f8798, word_10, 0x10);
GUEST_OFFSET(Frame_001f8798, word_14, 0x14);
GUEST_OFFSET(Frame_001f8798, word_18, 0x18);
GUEST_OFFSET(Frame_001f8798, word_1c, 0x1c);
GUEST_OFFSET(Frame_001f8798, word_20, 0x20);
GUEST_OFFSET(Frame_001f8798, word_3c, 0x3c);
GUEST_SIZE(Frame_001f8798, 0x44);

void f_001f8798(gptr<Object_001f8798_0> arg0, u32 r1) {
    guest::StackFrameOf<Frame_001f8798> frame;  // the original's stack frame
    float S0_1 = 0.0f;
    float S1_1 = std::bit_cast<float>(*global_00848490);
    float S2_1 = std::bit_cast<float>(*global_00848494);
    float S3_1 = std::bit_cast<float>(*global_00848498);
    float S4_1 = std::bit_cast<float>(*global_0084849c);
    float S5_1 = std::bit_cast<float>(*global_008484a0);
    gptr<Local_001f8798_r3_1> r3_1 = gptr<Local_001f8798_r3_1>(frame.at(0x24).addr());  // (from the original)
    r3_1->float_0 = S0_1;
    r3_1->float_4 = S1_1;
    r3_1->float_8 = S2_1;
    r3_1->float_c = S3_1;
    r3_1->float_10 = S4_1;
    r3_1->float_14 = S5_1;
    u32 r2_1 = *global_008484a4;
    frame->word_20 = arg0.addr() + 0x24u;  // (from the original)
    frame->word_1c = r1;
    frame->word_3c = r2_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    ButtonActionControl__setup(arg0.addr() + 0x2e4u, frame.at(0x1c).addr(), 0u, r3_1.addr());  // (from the original)
    float S0_2 = 0.0f;
    float S1_2 = -60.0f;
    arg0->word_3b8 = arg0->word_3b8 | 0x40u;  // (from the original)
    frame->word_0 = 0;
    frame->word_4 = 0;
    frame->word_8 = 0;
    frame->word_c = 0;
    frame->word_10 = 0;
    frame->word_14 = 0;
    frame->word_18 = 0;
    gptr<Local_001f8798_r0_2> r0_2 = gptr<Local_001f8798_r0_2>(frame.at(8).addr());
    r0_2->float_0 = S0_2;
    r0_2->float_4 = S1_2;
    frame->word_0 = arg0->word_1c4;
    frame->word_4 = arg0->word_200;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    set_node_values(arg0.addr() + 0x204u, frame.at(0).addr());  // (from the original)
    call_002f7508(arg0.addr() + 0x2e4u, arg0.addr() + 0x204u, 1u);  // (from the original)
    arg0->word_2d0 = 0x1000413;  // (from the original)
    arg0->byte_2de = 1;
    arg0->word_2d4 = 0x1000399;  // (from the original)
    arg0->byte_2df = 1;
    arg0->byte_2e0 = 1;
    call_002f6a30(arg0.addr() + 0x2e4u, 0u);  // (from the original)
    arg0->half_3b4 = 3;
}

}  // namespace d_001f8798
GUEST_EXPORT_FRAMED(0x001f8798, d_001f8798::f_001f8798, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001f891c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f891c {

struct __attribute__((packed)) Object_001f891c_0 {
    u8 unknown_0[0x1c4];  // (not used here)
    u32 word_1c4;
    u32 word_1c8;
    u32 word_1cc;
    u32 word_1d0;
    u32 word_1d4;
    u32 word_1d8;
    u32 word_1dc;
    u32 word_1e0;
    u32 word_1e4;
    u32 word_1e8;
    u32 word_1ec;
    u32 word_1f0;
    u32 word_1f4;
    u32 word_1f8;
    u32 word_1fc;
    u32 word_200;
};
GUEST_OFFSET(Object_001f891c_0, word_1c4, 0x1c4);
GUEST_OFFSET(Object_001f891c_0, word_1c8, 0x1c8);
GUEST_OFFSET(Object_001f891c_0, word_1cc, 0x1cc);
GUEST_OFFSET(Object_001f891c_0, word_1d0, 0x1d0);
GUEST_OFFSET(Object_001f891c_0, word_1d4, 0x1d4);
GUEST_OFFSET(Object_001f891c_0, word_1d8, 0x1d8);
GUEST_OFFSET(Object_001f891c_0, word_1dc, 0x1dc);
GUEST_OFFSET(Object_001f891c_0, word_1e0, 0x1e0);
GUEST_OFFSET(Object_001f891c_0, word_1e4, 0x1e4);
GUEST_OFFSET(Object_001f891c_0, word_1e8, 0x1e8);
GUEST_OFFSET(Object_001f891c_0, word_1ec, 0x1ec);
GUEST_OFFSET(Object_001f891c_0, word_1f0, 0x1f0);
GUEST_OFFSET(Object_001f891c_0, word_1f4, 0x1f4);
GUEST_OFFSET(Object_001f891c_0, word_1f8, 0x1f8);
GUEST_OFFSET(Object_001f891c_0, word_1fc, 0x1fc);
GUEST_OFFSET(Object_001f891c_0, word_200, 0x200);

struct __attribute__((packed)) Local_001f891c_r1_1 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_001f891c_r1_1, byte_b7, 0xb7);

struct __attribute__((packed)) Local_001f891c_r1_10 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_001f891c_r1_10, byte_b7, 0xb7);

struct __attribute__((packed)) Local_001f891c_r1_2 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_001f891c_r1_2, byte_b7, 0xb7);

struct __attribute__((packed)) Local_001f891c_r1_3 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_001f891c_r1_3, byte_b7, 0xb7);

struct __attribute__((packed)) Local_001f891c_r1_5 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_001f891c_r1_5, byte_b7, 0xb7);

struct __attribute__((packed)) Local_001f891c_r1_6 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_001f891c_r1_6, byte_b7, 0xb7);

struct __attribute__((packed)) Local_001f891c_r1_7 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_001f891c_r1_7, byte_b7, 0xb7);

struct __attribute__((packed)) Local_001f891c_r1_8 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_001f891c_r1_8, byte_b7, 0xb7);

struct __attribute__((packed)) Local_001f891c_r1_9 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_001f891c_r1_9, byte_b7, 0xb7);

struct __attribute__((packed)) Local_001f891c_r2_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_001f891c_r2_1, float_0, 0x0);
GUEST_OFFSET(Local_001f891c_r2_1, float_4, 0x4);

inline constexpr guest::Function<0x002b6a00, u32(u32, u32)> set_node_values;

struct __attribute__((packed)) Frame_001f891c {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Frame_001f891c, word_0, 0x0);
GUEST_OFFSET(Frame_001f891c, word_4, 0x4);
GUEST_OFFSET(Frame_001f891c, word_8, 0x8);
GUEST_OFFSET(Frame_001f891c, word_c, 0xc);
GUEST_OFFSET(Frame_001f891c, word_10, 0x10);
GUEST_OFFSET(Frame_001f891c, word_14, 0x14);
GUEST_OFFSET(Frame_001f891c, word_18, 0x18);
GUEST_SIZE(Frame_001f891c, 0x1c);

void f_001f891c(gptr<Object_001f891c_0> r0, u32 r1) {
    guest::StackFrameOf<Frame_001f891c> frame;  // the original's stack frame
    u32 r1_4 = 0;
    gptr<Local_001f891c_r1_8> r1_8 = gptr<Local_001f891c_r1_8>(0u);
    gptr<Local_001f891c_r1_9> r1_9 = gptr<Local_001f891c_r1_9>(0u);
    gptr<Local_001f891c_r1_10> r1_10 = gptr<Local_001f891c_r1_10>(0u);
    if (r1 != 0) {
        if (r1 == 1u) {
            gptr<Local_001f891c_r1_1> r1_1 = gptr<Local_001f891c_r1_1>(r0->word_1c8);
            r1_1->byte_b7 = u8(u32(r1_1->byte_b7) & 0xfeu);  // (from the original)
            gptr<Local_001f891c_r1_2> r1_2 = gptr<Local_001f891c_r1_2>(r0->word_1cc);
            r1_2->byte_b7 = u8(u32(r1_2->byte_b7) & 0xfeu | 1u);  // (from the original)
            gptr<Local_001f891c_r1_3> r1_3 = gptr<Local_001f891c_r1_3>(r0->word_1d0);
            r1_3->byte_b7 = u8(u32(r1_3->byte_b7) & 0xfeu);  // (from the original)
            r0->word_1f8 = r0->word_1e8;
            r0->word_1fc = r0->word_1ec;
            r1_4 = r0->word_1d8;
            goto L_1f89d8;
        }
        if (r1 != 2u) {
            goto L_1f8a2c;
        }
        gptr<Local_001f891c_r1_5> r1_5 = gptr<Local_001f891c_r1_5>(r0->word_1c8);
        r1_5->byte_b7 = u8(u32(r1_5->byte_b7) & 0xfeu);  // (from the original)
        gptr<Local_001f891c_r1_6> r1_6 = gptr<Local_001f891c_r1_6>(r0->word_1cc);
        r1_6->byte_b7 = u8(u32(r1_6->byte_b7) & 0xfeu);  // (from the original)
        gptr<Local_001f891c_r1_7> r1_7 = gptr<Local_001f891c_r1_7>(r0->word_1d0);
        r1_7->byte_b7 = u8(u32(r1_7->byte_b7) & 0xfeu | 1u);  // (from the original)
        r0->word_1f8 = r0->word_1f0;
        r0->word_1fc = r0->word_1f4;
        r0->word_200 = r0->word_1dc;
        goto L_1f8a2c;
    }
    r1_8 = gptr<Local_001f891c_r1_8>(r0->word_1c8);
    r1_8->byte_b7 = u8(u32(r1_8->byte_b7) & 0xfeu | 1u);  // (from the original)
    r1_9 = gptr<Local_001f891c_r1_9>(r0->word_1cc);
    r1_9->byte_b7 = u8(u32(r1_9->byte_b7) & 0xfeu);  // (from the original)
    r1_10 = gptr<Local_001f891c_r1_10>(r0->word_1d0);
    r1_10->byte_b7 = u8(u32(r1_10->byte_b7) & 0xfeu);  // (from the original)
    r0->word_1f8 = r0->word_1e0;
    r0->word_1fc = r0->word_1e4;
    r1_4 = r0->word_1d4;
L_1f89d8:;
    r0->word_200 = r1_4;
L_1f8a2c:;
    frame->word_4 = 0;
    frame->word_8 = 0;
    frame->word_c = 0;
    frame->word_10 = 0;
    frame->word_14 = 0;
    frame->word_18 = 0;
    float S0_1 = 0.0f;
    float S1_1 = -60.0f;
    frame->word_0 = r0->word_1c4;
    u32 r1_11 = r0->word_200;
    gptr<Local_001f891c_r2_1> r2_1 = gptr<Local_001f891c_r2_1>(frame.at(8).addr());
    frame->word_4 = r1_11;
    r2_1->float_0 = S0_1;
    r2_1->float_4 = S1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    set_node_values(r0.addr() + 0x204u, frame.at(0).addr());  // (from the original)
}

}  // namespace d_001f891c
GUEST_EXPORT_FRAMED(0x001f891c, d_001f891c::f_001f891c, 0x4000);  // pushes {lr} first, as the original

// f_001f8bac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f8bac {

inline constexpr u32 global_0094edc4_address = 0x0094edc4u;
inline constexpr u32 global_0094edc8_address = 0x0094edc8u;
inline guest::global<u32, 0x0014f898> global_0014f898;
inline guest::global<u32, 0x0094edc4> global_0094edc4;
inline guest::global<u32, 0x0094edc8> global_0094edc8;
inline constexpr guest::Function<0x0014f89c, u32(u32, u32, u32, u32)> call_0014f89c;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> read_global_byte_2;

u32 f_001f8bac(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = read_global_byte_2(r0, r1, r2, guest::cpu()->r[3]);
    if (r0_1 != 0) {
        u32 r0_2 = read_global_byte_2(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_2 == 0x71u) {  // (from the original)
            u32 r0_3 = *global_0094edc8;
            if (r0_3 != 0) {
                frame.release();
                return call_0014f89c(r0_3, r0, r1, guest::cpu()->r[3]);
            }
        }
    } else {
        u32 r0_4 = *global_0094edc4;
        if (r0_4 != 0 && s32(r0) < 3) {
            frame.release();
            return guest::call_address<u32>(*global_0014f898, r0_4, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
        }
    }
    return 0u;
}

}  // namespace d_001f8bac
GUEST_EXPORT(0x001f8bac, d_001f8bac::f_001f8bac);

// f_001f9290: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f9290 {

struct __attribute__((packed)) Object_001f9290_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_001f9290_1, word_8, 0x8);

inline guest::global<u16, 0x00887314> global_00887314;
inline guest::global<u32, 0x0094f344> global_0094f344;
inline guest::global<u32, 0x0094f348> global_0094f348;
inline guest::global<u32, 0x0094f34c> global_0094f34c;
inline constexpr guest::Function<0x002b7f74, u32(u32)> set_global_flag;
inline constexpr guest::Function<0x00529c80, u32(u32, u32, u32, u32)> call_00529c80;

u32 f_001f9290(u32 r0, gptr<Object_001f9290_1> arg1, u32 r2, u32 r3) {
    *global_0094f344 = r2;
    *global_0094f348 = r3;
    *global_0094f34c = arg1.addr();
    u32 r2_1 = arg1->word_8;
    u32 r0_1 = *global_00887314;
    u32 r0_2 = call_00529c80(r0_1, r0, r2_1, 0u);
    if (r0_2 != 0) {
        set_global_flag(arg1->word_8);
    }
    return r0_2;
}

}  // namespace d_001f9290
GUEST_EXPORT_FRAMED(0x001f9290, d_001f9290::f_001f9290, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001f9660: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f9660 {

struct __attribute__((packed)) Object_001f9660_0 {
    u8 unknown_0[0xf0];  // (not used here)
    u32 word_f0;
    u32 word_f4;
    u32 word_f8;
};
GUEST_OFFSET(Object_001f9660_0, word_f0, 0xf0);
GUEST_OFFSET(Object_001f9660_0, word_f4, 0xf4);
GUEST_OFFSET(Object_001f9660_0, word_f8, 0xf8);


void f_001f9660(gptr<Object_001f9660_0> arg0, u32 r1) {
    u32 r2_1 = arg0->word_f0;
    if (s32(r2_1) >= s32(arg0->word_f4)) {
        return;
    }
    *gptr<u32>(arg0->word_f8 + (r2_1 << 2)) = r1;
    u32 r1_1 = arg0->word_f0 + 1u;
    arg0->word_f0 = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_001f9660
GUEST_EXPORT(0x001f9660, d_001f9660::f_001f9660);

// f_001f9884: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f9884 {

struct __attribute__((packed)) Object_001f9884_0 {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Object_001f9884_0, word_20, 0x20);
GUEST_OFFSET(Object_001f9884_0, word_24, 0x24);

inline guest::global<u32, 0x00846f00> global_00846f00;
inline guest::global<u32, 0x00846f04> global_00846f04;
inline guest::global<u32, 0x00846f08> global_00846f08;
inline guest::global<u32, 0x00846f0c> global_00846f0c;
inline constexpr guest::Function<0x004b9b64, u32(u32, u32, u32, u32)> call_004b9b64;
inline constexpr guest::Function<0x00568c10, u32(u32)> Layout__virtual_3;
inline constexpr guest::Function<0x00569420, u32(u32, u32)> notify_object_00569420;
inline constexpr guest::Function<0x00569508, u32(u32)> apply_value;
inline constexpr guest::Function<0x005697e0, u32(u32)> Animation__set_value;
inline constexpr guest::Function<0x00816c20, u32(u32, u32, u32)> call_00816c20;

void f_001f9884(gptr<Object_001f9884_0> arg0, u32 r1, float S0) {
    u32 r0 = arg0.addr();
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = arg0->word_20;
    u32 r0_1 = *global_00846f04;
    if (r3_1 == *global_00846f00) {
        if (r3_1 == 0) {
            r2_1 = arg0->word_24 | r0_1;
            if ((r2_1 & 1u) == 0) {
                goto L_1f98fc;
            }
        }
        r2_1 = arg0->word_24;
        if (r2_1 == r0_1) {
            goto L_1f98fc;
        }
    }
    r0_2 = *global_00846f0c;
    if (r3_1 != *global_00846f08) {
        return;
    }
    if (r3_1 == 0) {
        r2_1 = arg0->word_24 | r0_2;
        if ((r2_1 & 1u) == 0) {
            goto L_1f98fc;
        }
    }
    r2_1 = arg0->word_24;
    if (r2_1 != r0_2) {
        return;
    }
L_1f98fc:;
    if (r1 == 0) {
        guest::cpu()->s[0] = S0;
        call_004b9b64(r0 + 0x38u, r0 + 0x494u, r2_1, r3_1);  // (from the original)
        float S0_1 = 0.0f;
        guest::cpu()->s[0] = S0_1;
        Animation__set_value(r0 + 0x494u);  // (from the original)
        Layout__virtual_3(r0 + 0x38u);  // (from the original)
        notify_object_00569420(r0 + 0x38u, r0 + 0x494u);  // (from the original)
        call_00816c20(r0 + 0x14u, *global_00846f00, *global_00846f04);  // (from the original)
    } else {
        guest::cpu()->s[0] = S0;
        call_004b9b64(r0 + 0x38u, r0 + 0x494u, r2_1, r3_1);  // (from the original)
        apply_value(r0 + 0x494u);  // (from the original)
        Layout__virtual_3(r0 + 0x38u);  // (from the original)
        notify_object_00569420(r0 + 0x38u, r0 + 0x494u);  // (from the original)
        call_00816c20(r0 + 0x14u, *global_00846f08, *global_00846f0c);  // (from the original)
    }
}

}  // namespace d_001f9884
GUEST_EXPORT_FRAMED(0x001f9884, d_001f9884::f_001f9884, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001f99b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f99b4 {

struct __attribute__((packed)) Object_001f99b4_0 {
    u8 unknown_0[0x4bc];  // (not used here)
    u32 word_4bc;
};
GUEST_OFFSET(Object_001f99b4_0, word_4bc, 0x4bc);

struct __attribute__((packed)) Object_001f99b4_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Object_001f99b4_1, float_0, 0x0);
GUEST_OFFSET(Object_001f99b4_1, float_4, 0x4);

struct __attribute__((packed)) Local_001f99b4_r2_1 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_001f99b4_r2_1, byte_b7, 0xb7);

struct __attribute__((packed)) Local_001f99b4_r3_1 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_001f99b4_r3_1, float_0, 0x0);
GUEST_OFFSET(Local_001f99b4_r3_1, float_4, 0x4);
GUEST_OFFSET(Local_001f99b4_r3_1, float_8, 0x8);

inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> Layout__virtual_3;

void f_001f99b4(gptr<Object_001f99b4_0> arg0, gptr<Object_001f99b4_1> arg1) {
    gptr<Local_001f99b4_r2_1> r2_1 = gptr<Local_001f99b4_r2_1>(arg0->word_4bc);
    float S2_1 = 0.0f;
    float S0_1 = arg1->float_0;
    float S1_1 = arg1->float_4;
    gptr<Local_001f99b4_r3_1> r3_1 = gptr<Local_001f99b4_r3_1>(r2_1.addr() + 0x28u);  // (from the original)
    r3_1->float_0 = S0_1;
    r3_1->float_4 = S1_1;
    r3_1->float_8 = S2_1;
    u32 r1_1 = u32(r2_1->byte_b7) & 0xcfu;  // (from the original)
    r2_1->byte_b7 = u8(r1_1);
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    Layout__virtual_3(arg0.addr() + 0x38u, r1_1, r2_1.addr(), r3_1.addr());  // (from the original)
}

}  // namespace d_001f99b4
GUEST_EXPORT(0x001f99b4, d_001f99b4::f_001f99b4);

// f_001f99e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f99e4 {

struct __attribute__((packed)) Object_001f99e4_0 {
    u8 unknown_0[0x4bc];  // (not used here)
    u32 word_4bc;
};
GUEST_OFFSET(Object_001f99e4_0, word_4bc, 0x4bc);

struct __attribute__((packed)) Object_001f99e4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_001f99e4_1, word_0, 0x0);
GUEST_OFFSET(Object_001f99e4_1, word_4, 0x4);
GUEST_OFFSET(Object_001f99e4_1, word_8, 0x8);

struct __attribute__((packed)) Local_001f99e4_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001f99e4_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_001f99e4_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_001f99e4_r1_1 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_001f99e4_r1_1, byte_b7, 0xb7);

inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> Layout__virtual_3;

u32 f_001f99e4(gptr<Object_001f99e4_0> arg0, gptr<Object_001f99e4_1> arg1) {
    u32 r2_1 = arg1->word_0;
    u32 r3_1 = arg1->word_4;
    gptr<Local_001f99e4_r1_1> r1_1 = gptr<Local_001f99e4_r1_1>(arg0->word_4bc);
    *gptr<u32>(r1_1.addr() + 0x30u) = arg1->word_8;  // (from the original)
    gptr<Local_001f99e4_ea_2> ea_2 = gptr<Local_001f99e4_ea_2>(r1_1.addr() + 0x28u);  // (from the original)
    ea_2->word_0 = r2_1;
    ea_2->word_4 = r3_1;
    u32 r2_2 = u32(r1_1->byte_b7) & 0xcfu;  // (from the original)
    r1_1->byte_b7 = u8(r2_2);
    return Layout__virtual_3(arg0.addr() + 0x38u, r1_1.addr(), r2_2, r3_1);  // (from the original)
}

}  // namespace d_001f99e4
GUEST_EXPORT(0x001f99e4, d_001f99e4::f_001f99e4);

// f_001f9a08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f9a08 {

inline guest::global<u32, 0x00846f10> global_00846f10;
inline guest::global<u32, 0x00846f14> global_00846f14;
inline constexpr guest::Function<0x00569420, u32(u32, u32, u32, u32)> notify_object_00569420;
inline constexpr guest::Function<0x00816c20, u32(u32, u32, u32)> call_00816c20;

struct __attribute__((packed)) Frame_001f9a08 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Frame_001f9a08, word_0, 0x0);
GUEST_OFFSET(Frame_001f9a08, word_4, 0x4);
GUEST_OFFSET(Frame_001f9a08, word_8, 0x8);
GUEST_OFFSET(Frame_001f9a08, word_c, 0xc);
GUEST_OFFSET(Frame_001f9a08, word_10, 0x10);
GUEST_OFFSET(Frame_001f9a08, word_14, 0x14);
GUEST_SIZE(Frame_001f9a08, 0x18);

u32 f_001f9a08(u32 r0) {
    guest::StackFrameOf<Frame_001f9a08> frame;  // the original's stack frame
    u32 r5 = r0;
    u32 r2 = r5 + 0x41cu;  // (from the original)
    u32 r3 = r5 + 0x444u;  // (from the original)
    frame->word_0 = r0 + 0x3ccu;  // (from the original)
    frame->word_4 = r5 + 0x3f4u;  // (from the original)
    frame->word_8 = r2;
    frame->word_c = r3;
    frame->word_10 = r5 + 0x46cu;  // (from the original)
    frame->word_14 = r5 + 0x494u;  // (from the original)
    u32 r6 = frame.at(0).addr();
    u32 r4 = 0u;
    do {
        u32 r1_1 = gptr<u32>(r6)[r4];
        if (*gptr<u8>(r1_1 + 0x1cu) != 0) {  // (from the original)
            notify_object_00569420(r5 + 0x38u, r1_1, r2, r3);  // (from the original)
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 6u);
    u32 r0_3 = call_00816c20(r5 + 0x14u, *global_00846f10, *global_00846f14);  // (from the original)
    return r0_3;
}

}  // namespace d_001f9a08
GUEST_EXPORT_FRAMED(0x001f9a08, d_001f9a08::f_001f9a08, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001f9a84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f9a84 {

struct __attribute__((packed)) Object_001f9a84_0 {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Object_001f9a84_0, word_20, 0x20);
GUEST_OFFSET(Object_001f9a84_0, word_24, 0x24);

inline guest::global<u32, 0x00846f00> global_00846f00;
inline guest::global<u32, 0x00846f04> global_00846f04;
inline guest::global<u32, 0x00846f08> global_00846f08;
inline guest::global<u32, 0x00846f0c> global_00846f0c;

u32 f_001f9a84(gptr<Object_001f9a84_0> arg0) {
    u32 r3_1 = arg0->word_20;
    u32 r1_1 = *global_00846f04;
    if (r3_1 == *global_00846f00 && (r3_1 == 0 && ((arg0->word_24 | r1_1) & 1u) == 0 || arg0->word_24 == r1_1)) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    u32 r1_2 = *global_00846f0c;
    if (r3_1 != *global_00846f08) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    if (r3_1 == 0 && ((arg0->word_24 | r1_2) & 1u) == 0) {
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    if (arg0->word_24 != r1_2) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_001f9a84
GUEST_EXPORT(0x001f9a84, d_001f9a84::f_001f9a84);

// f_001f9b08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f9b08 {

inline guest::global<u32, 0x00846f18> global_00846f18;
inline guest::global<u32, 0x00846f1c> global_00846f1c;
inline constexpr guest::Function<0x00569420, u32(u32, u32, u32, u32)> notify_object_00569420;
inline constexpr guest::Function<0x00816c20, u32(u32, u32, u32)> call_00816c20;

struct __attribute__((packed)) Frame_001f9b08 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001f9b08, word_0, 0x0);
GUEST_OFFSET(Frame_001f9b08, word_4, 0x4);
GUEST_OFFSET(Frame_001f9b08, word_8, 0x8);
GUEST_OFFSET(Frame_001f9b08, word_c, 0xc);
GUEST_OFFSET(Frame_001f9b08, word_10, 0x10);
GUEST_OFFSET(Frame_001f9b08, word_14, 0x14);
GUEST_SIZE(Frame_001f9b08, 0x1c);

u32 f_001f9b08(u32 r0, u32 r1) {
    guest::StackFrameOf<Frame_001f9b08> frame;  // the original's stack frame
    u32 r5 = r0;
    u32 r6 = r1;
    u32 r2 = r5 + 0x41cu;  // (from the original)
    u32 r3 = r5 + 0x444u;  // (from the original)
    frame->word_0 = r0 + 0x3ccu;  // (from the original)
    frame->word_4 = r5 + 0x3f4u;  // (from the original)
    frame->word_8 = r2;
    frame->word_c = r3;
    frame->word_10 = r5 + 0x46cu;  // (from the original)
    frame->word_14 = r5 + 0x494u;  // (from the original)
    u32 r7 = frame.at(0).addr();
    u32 r4 = 0u;
    do {
        u32 r1_1 = gptr<u32>(r7)[r4];
        if (*gptr<u8>(r1_1 + 0x1cu) != 0) {  // (from the original)
            notify_object_00569420(r5 + 0x38u, r1_1, r2, r3);  // (from the original)
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 6u);
    *gptr<u8>(r5 + 0x4d3u) = u8(r6);  // (from the original)
    u32 r0_3 = call_00816c20(r5 + 0x14u, *global_00846f18, *global_00846f1c);  // (from the original)
    return r0_3;
}

}  // namespace d_001f9b08
GUEST_EXPORT_FRAMED(0x001f9b08, d_001f9b08::f_001f9b08, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_001fa354: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001fa354 {

struct __attribute__((packed)) Object_001fa354_0 {
    u8 unknown_0[0x4d0];  // (not used here)
    u8 byte_4d0;
    u8 byte_4d1;
};
GUEST_OFFSET(Object_001fa354_0, byte_4d0, 0x4d0);
GUEST_OFFSET(Object_001fa354_0, byte_4d1, 0x4d1);

struct __attribute__((packed)) Local_001fa354_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_001fa354_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_001fa354_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_001fa354_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_001fa354_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_001fa354_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001fa354_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_001fa354_ea_2, word_4, 0x4);

inline guest::global<u32, 0x00846f08> global_00846f08;
inline guest::global<u32, 0x00846f0c> global_00846f0c;
inline constexpr guest::Function<0x004b9b64, u32(u32, u32)> call_004b9b64;
inline constexpr guest::Function<0x00568c10, u32(u32)> Layout__virtual_3;
inline constexpr guest::Function<0x00569420, u32(u32, u32, u32, u32)> notify_object_00569420;
inline constexpr guest::Function<0x00569508, u32(u32)> apply_value;
inline constexpr guest::Function<0x006d1e64, u32(u32, u32, u32, u32)> get_state_30;
inline constexpr guest::Function<0x00816c20, u32(u32, u32, u32)> call_00816c20;

u32 f_001fa354(gptr<Object_001fa354_0> arg0) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r5 = r0;
    u32 r7 = 0u;
    arg0->byte_4d1 = u8(r7);
    arg0->byte_4d0 = u8(r7);
    u32 r2 = r5 + 0x41cu;  // (from the original)
    u32 r6 = r5 + 0x444u;  // (from the original)
    gptr<Local_001fa354_ea_1> ea_1 = gptr<Local_001fa354_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r0 + 0x3ccu;  // (from the original)
    ea_1->word_4 = r5 + 0x3f4u;  // (from the original)
    ea_1->word_8 = r2;
    ea_1->word_c = r6;
    u32 r3 = r5 + 0x46cu;  // (from the original)
    gptr<Local_001fa354_ea_2> ea_2 = gptr<Local_001fa354_ea_2>(frame.at(0x10).addr());  // (from the original)
    ea_2->word_0 = r3;
    ea_2->word_4 = r5 + 0x494u;  // (from the original)
    u32 r4 = r7;
    u32 r8 = frame.at(0).addr();
    do {
        r1_1 = gptr<u32>(r8)[r4];
        r0_1 = *gptr<u8>(r1_1 + 0x1cu);  // (from the original)
        if (r0_1 != 0) {
            r0_1 = notify_object_00569420(r5 + 0x38u, r1_1, r2, r3);  // (from the original)
            r1_1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 6u);
    u32 r0_3 = get_state_30(r0_1, r1_1, r2, r3);
    *gptr<u8>(r0_3 + 0x40u) = u8(r7);  // (from the original)
    call_004b9b64(r5 + 0x38u, r6);  // (from the original)
    apply_value(r6);
    Layout__virtual_3(r5 + 0x38u);  // (from the original)
    notify_object_00569420(r5 + 0x38u, r6, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_8 = call_00816c20(r5 + 0x14u, *global_00846f08, *global_00846f0c);  // (from the original)
    return r0_8;
}

}  // namespace d_001fa354
GUEST_EXPORT_FRAMED(0x001fa354, d_001fa354::f_001fa354, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_001fa744: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001fa744 {

struct __attribute__((packed)) Local_001fa744_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_001fa744_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_001fa744_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_001fa744_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_001fa744_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_001fa744_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_001fa744_ea_1, word_14, 0x14);

struct __attribute__((packed)) Local_001fa744_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001fa744_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_001fa744_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_001fa744_ea_2, word_8, 0x8);

inline constexpr u32 global_0095362c_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> global_0095362c;
inline constexpr guest::Function<0x00108421, u32(u32, u32)> record_1ac_address;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> main_object_value;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;
inline constexpr guest::Function<0x0075dfe8, u32(u32)> NetSession__station;

struct __attribute__((packed)) Frame_001fa744 {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001fa744, word_8, 0x8);
GUEST_SIZE(Frame_001fa744, 0x18);

void f_001fa744(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_001fa744> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    u32 r3_4 = 0;
    u32 r2_4 = 0;
    u32 r1_4 = 0;
    u32 r0_7 = 0;
    gptr<Local_001fa744_ea_1> ea_1 = gptr<Local_001fa744_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r4;
    ea_1->word_10 = r5;
    ea_1->word_14 = r14;
    u32 r0_1 = main_object_value(r0, r1, r2, r3);
    if (r0_1 != 0) {
        if (r1 != 0) {
            u32 r0_2 = get_data_base(r0_1);
            u32 r0_4 = record_1ac_address(r0_2 + 0x6e238u, frame->word_8);  // (from the original)
            u32 r0_6 = NetSession__station(*global_0095362c);
            r3_4 = 0x1acu;  // (from the original)
            r2_4 = r0_4;
            r1_4 = r0_6 == 0 ? 4u : 0u;
            r0_7 = 0x81u;  // (from the original)
        } else {
            u32 r0_9 = NetSession__station(*global_0095362c);
            r2_4 = frame.at(8).addr();
            if (r0_9 == 0) {
                r3_4 = 4u;
                r1_4 = 4u;
            } else {
                r3_4 = 0x1acu;  // (from the original)
                r1_4 = 0u;
            }
            r0_7 = 0x82u;  // (from the original)
        }
        send_message(r0_7, r1_4, r2_4, r3_4);
    }
    gptr<Local_001fa744_ea_2> ea_2 = gptr<Local_001fa744_ea_2>(frame.at(0xc).addr());  // (from the original)
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
}

}  // namespace d_001fa744
GUEST_EXPORT(0x001fa744, d_001fa744::f_001fa744);

// f_001fad34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001fad34 {

struct __attribute__((packed)) Object_001fad34_0 {
    u8 unknown_0[0x60];  // (not used here)
    u32 word_60;
};
GUEST_OFFSET(Object_001fad34_0, word_60, 0x60);

inline guest::global<u16, 0x008c9f1e> global_008c9f1e;

void f_001fad34(gptr<Object_001fad34_0> arg0) {
    *gptr<u16>(arg0->word_60) = *global_008c9f1e;
}

}  // namespace d_001fad34
GUEST_EXPORT(0x001fad34, d_001fad34::f_001fad34);

// f_001fbec8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001fbec8 {

inline constexpr u32 global_0094fba0_address = 0x0094fba0u;
inline constexpr u32 global_0094fd3c_address = 0x0094fd3cu;
inline guest::global<u32, 0x0094fd3c> global_0094fd3c;
inline guest::global<u32, 0x0094fd58> global_0094fd58;
inline constexpr guest::Function<0x001fc044, u32(u32, u32)> call_001fc044;
inline constexpr guest::Function<0x00568a80, u32(u32, u32, u32, u32)> find_of_type_b;
inline constexpr guest::Function<0x005e2c98, u32(u32, u32, u32)> call_005e2c98;

void f_001fbec8(u32 r0, u32 r1_unused, u32 r2) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r12 = guest::cpu()->r[12];
    *frame.at<u32>(0x20) = r12;  // (from the original)
    u32 r5 = r0;
    u32 r4 = 0u;
    u32 r6 = global_0094fba0_address;
    do {
        u32 r0_2 = find_of_type_b(r5 + 0x4cu, gptr<u32>(r6)[r4], r2, guest::cpu()->r[3]);  // (from the original)
        r2 = guest::cpu()->r[2];
        u32 r1_2 = r5 + (r4 << 2);
        r4 += 1u;
        *gptr<u32>(r1_2 + 0x61cu) = r0_2;  // (from the original)
        guest::preempt();
    } while (s32(r4) < 8);
    u32 r0_3 = r5 + 0xbd4u;  // (from the original)
    call_005e2c98(r0_3, *gptr<u32>(r5 + 0x61cu), 0u);  // (from the original)
    u32 r0_4 = r5 + 0xc98u;  // (from the original)
    call_005e2c98(r0_4, *gptr<u32>(r5 + 0x620u), 0u);  // (from the original)
    u32 r0_5 = r5 + 0xd5cu;  // (from the original)
    call_005e2c98(r0_5, *gptr<u32>(r5 + 0x624u), 0u);  // (from the original)
    call_005e2c98(r5 + 0xe20u, *gptr<u32>(r5 + 0x628u), 0u);  // (from the original)
    u32 r0_7 = r5 + 0xee4u;  // (from the original)
    call_005e2c98(r0_7, *gptr<u32>(r5 + 0x62cu), 0u);  // (from the original)
    u32 r0_8 = r5 + 0xfa8u;  // (from the original)
    call_005e2c98(r0_8, *gptr<u32>(r5 + 0x630u), 0u);  // (from the original)
    u32 r0_9 = r5 + 0x106cu;  // (from the original)
    call_005e2c98(r0_9, *gptr<u32>(r5 + 0x634u), 0u);  // (from the original)
    u32 r0_10 = r5 + 0x1130u;  // (from the original)
    call_005e2c98(r0_10, *gptr<u32>(r5 + 0x638u), 0u);  // (from the original)
    *gptr<u8>(r0_3 + 0x38u) = 1;  // (from the original)
    *gptr<u8>(r0_4 + 0x38u) = 1;  // (from the original)
    *gptr<u8>(r0_5 + 0x38u) = 1;  // (from the original)
    *gptr<u8>(r5 + 0xe58u) = 1;  // (from the original)
    *gptr<u8>(r0_7 + 0x38u) = 1;  // (from the original)
    *gptr<u8>(r0_8 + 0x38u) = 1;  // (from the original)
    *gptr<u8>(r0_9 + 0x38u) = 1;  // (from the original)
    *gptr<u8>(r0_10 + 0x38u) = 1;  // (from the original)
    call_001fc044(r5, *gptr<u32>(*global_0094fd3c + 0x200u));  // (from the original)
    *global_0094fd58 = *global_0094fd58 & ~0x10u;  // (from the original)
}

}  // namespace d_001fbec8
GUEST_EXPORT_FRAMED(0x001fbec8, d_001fbec8::f_001fbec8, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_001fc5a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001fc5a8 {

inline constexpr u32 vtable_BsMenuLetter = 0x008ed158u;
inline constexpr u32 vtable_BsMenuLetter_at_28 = 0x008ed1c4u;
inline constexpr u32 vtable_ComButton1Lyt = 0x008ee218u;
inline constexpr u32 vtable_Control1Button = 0x008ef22cu;
inline constexpr u32 vtable_Control1Button_at_e4 = 0x008ef270u;
inline constexpr u32 vtable_ComButtonLytBase = 0x008f18f4u;
inline constexpr guest::Function<0x002b6ef8, u32(u32)> ButtonActionNode__virtual_0;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002f770c, u32(u32)> ControlButtonBase__virtual_0_002f770c;
inline constexpr guest::Function<0x002f7710, u32(u32)> destroy_button_action_control;
inline constexpr guest::Function<0x0053721c, u32(u32, u32, u32, u32)> item__ResLoader__virtual_0;
inline constexpr guest::Function<0x00567ef0, u32(u32, u32)> ssys__ma__lyt__ArcResAccReader__virtual_0;
inline constexpr guest::Function<0x0056988c, u32(u32)> destroy_animation;
inline constexpr guest::Function<0x005bf744, u32(u32)> Layout__virtual_0;
inline constexpr guest::Function<0x005e3194, u32(u32)> script__RenderMain__RenderMain_005e3194;
inline constexpr guest::Function<0x006aa8a0, u32(u32)> destroy_array_owner_c;
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> MenuBase__virtual_0;

u32 BsMenuLetter__virtual_0_001fc5a8(gptr<BsMenuLetter> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    arg0->word_0 = vtable_BsMenuLetter;
    arg0->word_28 = vtable_BsMenuLetter_at_28;
    u32 r0_1 = arg0.addr() + 0x1bbcu;  // (from the original)
    item__ResLoader__virtual_0(r0_1, vtable_BsMenuLetter, vtable_BsMenuLetter_at_28, r3);
    arg0->word_11f4 = vtable_ComButton1Lyt;
    arg0->word_1670 = vtable_Control1Button_at_e4;
    arg0->word_158c = vtable_Control1Button;
    destroy_array_elements(r0_1 - 0x518u, 0x2e0b3cu, 0x518u, 1u);  // (from the original)
    ControlButtonBase__virtual_0_002f770c(r0_1 - 0x630u);  // (from the original)
    arg0->word_11f4 = vtable_ComButtonLytBase;
    u32 r0_4 = ssys__ma__lyt__ArcResAccReader__virtual_0(r0_1 - 0x878u, vtable_ComButtonLytBase);  // (from the original)
    u32 r0_6 = Layout__virtual_0(r0_4 - 0x14cu);  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_6 - 0xc8u);  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_6 - 0x18cu);  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_6 - 0x250u);  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_6 - 0x314u);  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_6 - 0x3d8u);  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_6 - 0x49cu);  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_6 - 0x560u);  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_6 - 0x624u);  // (from the original)
    ButtonActionNode__virtual_0(r0_6 - 0x704u);  // (from the original)
    destroy_button_action_control(r0_6 - 0x7e8u);  // (from the original)
    destroy_array_owner_c(r0_6 - 0xbbcu);  // (from the original)
    destroy_animation(r0_6 - 0xc04u);  // (from the original)
    destroy_animation(r0_6 - 0xc2cu);  // (from the original)
    destroy_animation(r0_6 - 0xc54u);  // (from the original)
    destroy_animation(r0_6 - 0xc7cu);  // (from the original)
    destroy_animation(r0_6 - 0xca4u);  // (from the original)
    destroy_animation(r0_6 - 0xcccu);  // (from the original)
    u32 r0_25 = ssys__ma__lyt__ArcResAccReader__virtual_0(r0_6 - 0xf14u, guest::cpu()->r[1]);  // (from the original)
    u32 r0_27 = Layout__virtual_0(r0_25 - 0x14cu);  // (from the original)
    u32 r0_29 = Layout__virtual_0(r0_27 - 0x14cu);  // (from the original)
    frame.release();
    return MenuBase__virtual_0(r0_29 - 0x4cu, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_001fc5a8
GUEST_EXPORT(0x001fc5a8, d_001fc5a8::BsMenuLetter__virtual_0_001fc5a8);

// f_001fdc84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001fdc84 {

inline constexpr u32 vtable_BsMenuMelody = 0x008ed1d8u;
inline constexpr u32 vtable_BsMenuMelody_at_28 = 0x008ed244u;
inline constexpr u32 vtable_ComButton2Lyt = 0x008ee228u;
inline constexpr u32 vtable_Control2Button = 0x008ef284u;
inline constexpr u32 vtable_Control2Button_at_e4 = 0x008ef2c8u;
inline constexpr u32 vtable_ComButtonLytBase = 0x008f18f4u;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002f770c, u32(u32)> ControlButtonBase__virtual_0_002f770c;
inline constexpr guest::Function<0x0031c92c, u32(u32)> ButtonActionCstmNode__virtual_0;
inline constexpr guest::Function<0x00567ef0, u32(u32, u32)> ssys__ma__lyt__ArcResAccReader__virtual_0;
inline constexpr guest::Function<0x0056988c, u32(u32)> destroy_animation;
inline constexpr guest::Function<0x005bf744, u32(u32)> Layout__virtual_0;
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> MenuBase__virtual_0;

u32 BsMenuMelody__virtual_0_001fdc84(gptr<BsMenuMelody> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    arg0->word_0 = vtable_BsMenuMelody;
    arg0->word_28 = vtable_BsMenuMelody_at_28;
    destroy_array_elements(arg0.addr() + 0x5400u, 0x81dfb4u, 0x20u, 0x10u);  // (from the original)
    arg0->word_4510 = vtable_ComButton2Lyt;
    arg0->word_498c = vtable_Control2Button_at_e4;
    arg0->word_48a8 = vtable_Control2Button;
    destroy_array_elements(arg0.addr() + 0x49c0u, 0x2e0b3cu, 0x518u, 2u);  // (from the original)
    ControlButtonBase__virtual_0_002f770c(arg0.addr() + 0x48a8u);  // (from the original)
    arg0->word_4510 = vtable_ComButtonLytBase;
    u32 r0_4 = ssys__ma__lyt__ArcResAccReader__virtual_0(arg0.addr() + 0x4660u, vtable_ComButtonLytBase);  // (from the original)
    u32 r0_6 = Layout__virtual_0(r0_4 - 0x14cu);  // (from the original)
    ButtonActionCstmNode__virtual_0(r0_6 - 0xe4u);  // (from the original)
    destroy_animation(r0_6 - 0x10cu);  // (from the original)
    destroy_animation(r0_6 - 0x134u);  // (from the original)
    destroy_animation(r0_6 - 0x15cu);  // (from the original)
    destroy_animation(r0_6 - 0x184u);  // (from the original)
    destroy_animation(r0_6 - 0x1acu);  // (from the original)
    destroy_animation(r0_6 - 0x1d4u);  // (from the original)
    destroy_animation(r0_6 - 0x1fcu);  // (from the original)
    destroy_animation(r0_6 - 0x224u);  // (from the original)
    destroy_array_elements(r0_6 - 0x3fe8u, 0x1ad16cu, 0x3dcu, 0x10u);  // (from the original)
    u32 r0_18 = Layout__virtual_0(r0_6 - 0x4134u);  // (from the original)
    u32 r0_20 = Layout__virtual_0(r0_18 - 0x14cu);  // (from the original)
    u32 r0_22 = ssys__ma__lyt__ArcResAccReader__virtual_0(r0_20 - 0x248u, guest::cpu()->r[1]);  // (from the original)
    frame.release();
    return MenuBase__virtual_0(r0_22 - 0x4cu, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_001fdc84
GUEST_EXPORT(0x001fdc84, d_001fdc84::BsMenuMelody__virtual_0_001fdc84);

// f_001fde44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001fde44 {

inline constexpr u32 global_00950124_address = 0x00950124u;
inline guest::global<u16, 0x00887330> global_00887330;
inline guest::global<u32, 0x00950128> global_00950128;
inline constexpr guest::Function<0x00529d08, u32(u32, u32, u32, u32)> call_00529d08;

void f_001fde44(u32 r0) {
    u32 r0_1 = *global_00887330;
    u32 r0_2 = call_00529d08(r0_1, r0, 0u, guest::cpu()->r[3]);
    *global_00950128 = r0_2;
    guest::cpu()->r[1] = global_00950124_address;
}

}  // namespace d_001fde44
GUEST_EXPORT_FRAMED(0x001fde44, d_001fde44::f_001fde44, 0x4010);  // pushes {r4, lr} first, as the original

// f_001fde7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001fde7c {

inline constexpr u32 global_00993068_address = 0x00993068u;
inline guest::global<u16, 0x008c9f1e> global_008c9f1e;
inline guest::global<u32, 0x00993068> global_00993068;

u32 f_001fde7c() {
    u32 r1_1 = *global_00993068;
    u32 r0_1 = *global_008c9f1e;
    *gptr<u16>(r1_1) = u16(r0_1);
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_001fde7c
GUEST_EXPORT(0x001fde7c, d_001fde7c::f_001fde7c);

// f_001fde9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001fde9c {

inline constexpr u32 global_00950124_address = 0x00950124u;
inline constexpr u32 global_00950128_address = 0x00950128u;
inline guest::global<u32, 0x00950128> global_00950128;
inline constexpr guest::Function<0x005204b0, u32(u32, u32, u32, u32)> call_005204b0;

u32 f_001fde9c() {
    call_005204b0(*global_00950128, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *global_00950128 = 0;
    return 0u;
}

}  // namespace d_001fde9c
GUEST_EXPORT_FRAMED(0x001fde9c, d_001fde9c::f_001fde9c, 0x4010);  // pushes {r4, lr} first, as the original

// f_001fdf44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001fdf44 {

inline constexpr u32 global_00950124_address = 0x00950124u;
inline constexpr u32 global_00950128_address = 0x00950128u;
inline constexpr u32 global_0095012c_address = 0x0095012cu;
inline guest::global<u32, 0x00950128> global_00950128;
inline guest::global<u32, 0x0095012c> global_0095012c;
inline constexpr guest::Function<0x005204b0, u32(u32, u32, u32, u32)> call_005204b0;

u32 f_001fdf44(u32 r0_unused, u32 r1) {
    u32 r0_2 = 0;
    u32 r0_1 = *global_00950128;
    if (r0_1 == 0) {
        r0_2 = 1u;
    } else {
        r1 = *global_0095012c;
        if (r1 == 0) {
            call_005204b0(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            *global_0095012c = *global_0095012c + 1u;
        }
        r0_2 = 0u;
    }
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_001fdf44
GUEST_EXPORT_FRAMED(0x001fdf44, d_001fdf44::f_001fdf44, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001fefa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001fefa4 {

struct __attribute__((packed)) Local_001fefa4_r1_5 {
    u8 unknown_0[0x244];  // (not used here)
    float float_244;
    float float_248;
};
GUEST_OFFSET(Local_001fefa4_r1_5, float_244, 0x244);
GUEST_OFFSET(Local_001fefa4_r1_5, float_248, 0x248);

inline constexpr u32 vtable_CensusWindow = 0x008ed2e8u;
inline constexpr u32 vtable_CensusWindow_at_24 = 0x008ed31cu;
inline constexpr u32 vtable_CensusContentList = 0x008f2638u;
inline constexpr u32 vtable_CensusBG = 0x008f8b10u;
inline constexpr u32 vtable_state__Mode_CensusWindow_ = 0x009081c4u;
inline guest::global<u32, 0x00879db8> global_00879db8;
inline guest::global<u32, 0x00879dbc> global_00879dbc;
inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32)> ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8;
inline constexpr guest::Function<0x00125aec, u32(u32)> construct_layout_animation;
inline constexpr guest::Function<0x001cb884, u32(u32)> InOutWindow__InOutWindow_001cb884;
inline constexpr guest::Function<0x00299b30, u32(u32, u32)> CommonScrollBar__CommonScrollBar;
inline constexpr guest::Function<0x002b7c68, u32(u32, u32, u32, u32)> construct_animation_pair;
inline constexpr guest::Function<0x002bc928, u32(u32, u32, u32, u32)> SoPaCaWindowBase__SoPaCaWindowBase;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x005e3128, u32(u32, u32)> script__RenderTrace__RenderTrace;

u32 state__Mode_CensusWindow___Mode(gptr<CensusWindow> arg0, float S0) {
    arg0->word_4 = 0;
    arg0->byte_8 = 0;
    u32 r2_1 = *global_00879dbc;
    arg0->word_c = *global_00879db8;
    arg0->word_10 = r2_1;
    arg0->word_14 = 0;
    arg0->word_0 = vtable_state__Mode_CensusWindow_;
    arg0->byte_18 = 0;
    arg0->word_1c = 0;
    arg0->word_20 = 0;
    u32 r0_1 = (arg0.addr() + 0x20u) + 4u;  // (from the original)
    SoPaCaWindowBase__SoPaCaWindowBase(r0_1, vtable_state__Mode_CensusWindow_, r2_1, arg0.addr() + 0xcu);  // (from the original)
    arg0->word_0 = vtable_CensusWindow;
    arg0->word_24 = vtable_CensusWindow_at_24;
    u32 r0_3 = ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8(r0_1 + 8u, vtable_CensusWindow, vtable_CensusWindow_at_24);
    u32 r0_5 = InOutWindow__InOutWindow_001cb884(r0_3 + 0x248u);  // (from the original)
    *gptr<u32>(r0_5) = vtable_CensusBG;
    u32 r0_6 = r0_5 + 0x1b0u;  // (from the original)
    construct_animation_pair(r0_6, vtable_CensusBG, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_8 = InOutWindow__InOutWindow_001cb884(r0_6 + 0x5cu);  // (from the original)
    *gptr<u32>(r0_8) = vtable_CensusContentList;
    u32 r0_10 = for_each_element(r0_8 + 0x1b0u, 0x2caec8u, 0x198u, 7u);  // (from the original)
    u32 r0_11 = r0_10 + 0xb28u;  // (from the original)
    construct_layout_animation(r0_11);
    u32 r0_12 = r0_11 - 0xcd8u;  // (from the original)
    *gptr<u32>(r0_12 + 0xd00u) = 0;  // (from the original)
    u32 ea_3 = r0_12 + 0xd04u;  // (from the original)
    *gptr<u32>(ea_3) = 0;
    u32 r0_14 = script__RenderTrace__RenderTrace(ea_3 + 0x20u, 0x40u);  // (from the original)
    u32 r0_16 = CommonScrollBar__CommonScrollBar(r0_14 + 0xc4u, r0_14 - 0xd24u);  // (from the original)
    u32 r0_18 = for_each_element(r0_16 + 0x798u, 0x1c81a8u, 0x1cu, 7u);  // (from the original)
    u32 r0_19 = r0_18 - 0x1580u;  // (from the original)
    float S0_10 = 0.0f;
    gptr<Local_001fefa4_r1_5> r1_5 = gptr<Local_001fefa4_r1_5>(r0_19 + 0x1400u);  // (from the original)
    r1_5->float_244 = S0_10;
    r1_5->float_248 = S0_10;
    *gptr<u32>(r0_19 + 0x164cu) = 0;  // (from the original)
    u32 r0_20 = r0_19 + 0x1650u;  // (from the original)
    guest::cpu()->s[0] = S0_10;
    construct_animation_pair(r0_20, r1_5.addr(), 0x1cu, 7u);  // (from the original)
    return r0_20 - 0x1ad0u;  // (from the original)
}

}  // namespace d_001fefa4
GUEST_EXPORT_FRAMED(0x001fefa4, d_001fefa4::state__Mode_CensusWindow___Mode, 0x4010);  // pushes {r4, lr} first, as the original

// f_001ff124: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ff124 {

inline constexpr u32 vtable_CensusWindow = 0x008ed2e8u;
inline constexpr u32 vtable_CensusWindow_at_24 = 0x008ed31cu;
inline constexpr u32 vtable_CensusBG = 0x008f8b10u;
inline constexpr guest::Function<0x001cb8fc, u32(u32)> InOutWindow__virtual_0;
inline constexpr guest::Function<0x002b7c94, u32(u32, u32)> destroy_animation_pair;
inline constexpr guest::Function<0x002cbad8, u32(u32, u32, u32, u32)> CensusContentList__virtual_0;
inline constexpr guest::Function<0x00567ef0, u32(u32)> ssys__ma__lyt__ArcResAccReader__virtual_0;

u32 CensusWindow__virtual_0_001ff124(gptr<CensusWindow> arg0) {
    arg0->word_0 = vtable_CensusWindow;
    arg0->word_24 = vtable_CensusWindow_at_24;
    u32 r0_2 = CensusContentList__virtual_0(arg0.addr() + 0x480u, vtable_CensusWindow, vtable_CensusWindow_at_24, guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_2 - 0x20cu) = vtable_CensusBG;  // (from the original)
    u32 r0_3 = r0_2 - 0x5cu;  // (from the original)
    destroy_animation_pair(r0_3, vtable_CensusBG);
    u32 r0_5 = InOutWindow__virtual_0(r0_3 - 0x1b0u);  // (from the original)
    u32 r0_7 = ssys__ma__lyt__ArcResAccReader__virtual_0(r0_5 - 0x248u);  // (from the original)
    return r0_7 - 0x2cu;  // (from the original)
}

}  // namespace d_001ff124
GUEST_EXPORT_FRAMED(0x001ff124, d_001ff124::CensusWindow__virtual_0_001ff124, 0x4010);  // pushes {r4, lr} first, as the original

// f_001ff5c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ff5c0 {

struct __attribute__((packed)) Object_001ff5c0_0 {
    u8 unknown_0[0x108];  // (not used here)
    u32 word_108;
    float float_10c;
    float float_110;
    float float_114;
    float float_118;
    float float_11c;
    float float_120;
};
GUEST_OFFSET(Object_001ff5c0_0, word_108, 0x108);
GUEST_OFFSET(Object_001ff5c0_0, float_10c, 0x10c);
GUEST_OFFSET(Object_001ff5c0_0, float_110, 0x110);
GUEST_OFFSET(Object_001ff5c0_0, float_114, 0x114);
GUEST_OFFSET(Object_001ff5c0_0, float_118, 0x118);
GUEST_OFFSET(Object_001ff5c0_0, float_11c, 0x11c);
GUEST_OFFSET(Object_001ff5c0_0, float_120, 0x120);

struct __attribute__((packed)) Local_001ff5c0_r1_1 {
    u8 unknown_0[0xc];  // (not used here)
    float float_c;
    u8 unknown_10[0xc];  // (not used here)
    float float_1c;
    u8 unknown_20[0xc];  // (not used here)
    float float_2c;
};
GUEST_OFFSET(Local_001ff5c0_r1_1, float_c, 0xc);
GUEST_OFFSET(Local_001ff5c0_r1_1, float_1c, 0x1c);
GUEST_OFFSET(Local_001ff5c0_r1_1, float_2c, 0x2c);


void f_001ff5c0(gptr<Object_001ff5c0_0> arg0) {
    gptr<Local_001ff5c0_r1_1> r1_1 = gptr<Local_001ff5c0_r1_1>(arg0->word_108 + 0x80u);  // (from the original)
    float S1_1 = r1_1->float_c;
    float S0_1 = r1_1->float_1c;
    float S2_1 = r1_1->float_2c;
    float S3_1 = arg0->float_11c - S0_1;
    float S4_1 = arg0->float_120 - S2_1;
    arg0->float_10c = arg0->float_10c + (arg0->float_118 - S1_1);
    arg0->float_110 = arg0->float_110 + S3_1;
    arg0->float_114 = arg0->float_114 + S4_1;
    arg0->float_118 = S1_1;
    arg0->float_11c = S0_1;
    arg0->float_120 = S2_1;
}

}  // namespace d_001ff5c0
GUEST_EXPORT(0x001ff5c0, d_001ff5c0::f_001ff5c0);

// f_001ff92c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ff92c {

inline constexpr u32 vtable_DragIconNode = 0x008ed374u;
inline constexpr guest::Function<0x00125aec, u32(u32)> construct_layout_animation;
inline constexpr guest::Function<0x002b6de0, u32(u32, u32, u32, u32)> construct_button_node;

u32 DragIconNode__DragIconNode(gptr<DragIconNode> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    construct_button_node(arg0.addr(), r1, r2, r3);
    arg0->word_0 = vtable_DragIconNode;
    construct_layout_animation(arg0.addr() + 0xe0u);  // (from the original)
    arg0->word_108 = 0;
    arg0->word_124 = 0;
    arg0->half_128 = 0;
    arg0->half_12a = 0;
    arg0->byte_12c = 0;
    float S0_1 = 0.0f;
    arg0->byte_12d = 1;
    arg0->float_10c = S0_1;
    arg0->float_110 = S0_1;
    arg0->float_114 = S0_1;
    arg0->float_118 = S0_1;
    arg0->float_11c = S0_1;
    arg0->float_120 = S0_1;
    arg0->word_cc = 0x100038e;  // (from the original)
    arg0->byte_da = 1;
    guest::cpu()->s[0] = S0_1;
    return arg0.addr();
}

}  // namespace d_001ff92c
GUEST_EXPORT_FRAMED(0x001ff92c, d_001ff92c::DragIconNode__DragIconNode, 0x4010);  // pushes {r4, lr} first, as the original

// f_001ff9d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ff9d8 {

inline constexpr u32 vtable_DragIconNode = 0x008ed374u;
inline constexpr guest::Function<0x002b6ef8, u32(u32, u32, u32, u32)> ButtonActionNode__virtual_0;
inline constexpr guest::Function<0x00569774, u32(u32, u32, u32, u32)> copy_animation_target;
inline constexpr guest::Function<0x0056988c, u32(u32)> destroy_animation;

u32 DragIconNode__virtual_0(gptr<DragIconNode> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    arg0->word_0 = vtable_DragIconNode;
    copy_animation_target(arg0.addr() + 0xe0u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_animation(arg0.addr() + 0xe0u);  // (from the original)
    frame.release();
    return ButtonActionNode__virtual_0(arg0.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_001ff9d8
GUEST_EXPORT(0x001ff9d8, d_001ff9d8::DragIconNode__virtual_0);
