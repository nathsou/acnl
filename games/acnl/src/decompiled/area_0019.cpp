// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_001904f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001904f0 {


u32 f_001904f0(u32 r0, u32 r1) {
    u32 r2 = 0u;
    do {
        u32 r3_1 = gptr<u32>(r0 + 0x4cu)[r2];  // (from the original)
        if (r3_1 == r1) {
            return 1u;
        }
        if (r3_1 == 0) {
            *gptr<u32>(r0 + 0x4cu + (r2 << 2)) = r1;  // (from the original)
            return 1u;
        }
        r2 += 1u;
        guest::preempt();
    } while (r2 < 4u);
    return 0u;
}

}  // namespace d_001904f0
GUEST_EXPORT(0x001904f0, d_001904f0::f_001904f0);

// f_001905b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001905b0 {


u32 f_001905b0(u32 r0, u32 r1) {
    u32 r2 = 0u;
    do {
        u32 r3_1 = gptr<u32>(r0 + 0x1cu)[r2];  // (from the original)
        if (r3_1 == r1) {
            return 1u;
        }
        if (r3_1 == 0) {
            *gptr<u32>(r0 + 0x1cu + (r2 << 2)) = r1;  // (from the original)
            return 1u;
        }
        r2 += 1u;
        guest::preempt();
    } while (r2 < 0xcu);  // (from the original)
    return 0u;
}

}  // namespace d_001905b0
GUEST_EXPORT(0x001905b0, d_001905b0::f_001905b0);

// f_00190670: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00190670 {


u32 f_00190670(u32 r0, u32 r1) {
    u32 r2 = 0u;
    do {
        u32 r3_1 = gptr<u32>(r0 + 0x5cu)[r2];  // (from the original)
        if (r3_1 == r1) {
            return 1u;
        }
        if (r3_1 == 0) {
            *gptr<u32>(r0 + 0x5cu + (r2 << 2)) = r1;  // (from the original)
            return 1u;
        }
        r2 += 1u;
        guest::preempt();
    } while (r2 < 4u);
    return 0u;
}

}  // namespace d_00190670
GUEST_EXPORT(0x00190670, d_00190670::f_00190670);

// f_00191368: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00191368 {

struct __attribute__((packed)) Local_00191368_r0_2 {
    u32 word_0;
};
GUEST_OFFSET(Local_00191368_r0_2, word_0, 0x0);

struct __attribute__((packed)) Local_00191368_r1_2 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_00191368_r1_2, word_10, 0x10);
GUEST_OFFSET(Local_00191368_r1_2, word_14, 0x14);
GUEST_OFFSET(Local_00191368_r1_2, word_18, 0x18);

struct __attribute__((packed)) Local_00191368_r1_3 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_00191368_r1_3, float_0, 0x0);
GUEST_OFFSET(Local_00191368_r1_3, float_4, 0x4);

struct __attribute__((packed)) Local_00191368_r3_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00191368_r3_1, word_4, 0x4);
GUEST_OFFSET(Local_00191368_r3_1, word_8, 0x8);

inline guest::global<u32, 0x008485c8> global_008485c8;
inline guest::global<u32, 0x008485cc> global_008485cc;
inline guest::global<u32, 0x008485d0> global_008485d0;
inline guest::global<u32, 0x008485d8> global_008485d8;
inline constexpr guest::Function<0x00297b60, u32(u32, u32)> call_00297b60;
inline constexpr guest::Function<0x002999a0, u32(u32, u32, u32, u32)> append_to_queue;
inline constexpr guest::Function<0x0031d258, u32(u32, u32, u32, u32)> call_0031d258;
inline constexpr guest::Function<0x0056878c, u32(u32, u32)> LayoutObjectWithChild__forward_to_child;

struct __attribute__((packed)) Frame_00191368 {
    float float_0;
    float float_4;
    float float_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00191368, float_0, 0x0);
GUEST_OFFSET(Frame_00191368, float_4, 0x4);
GUEST_OFFSET(Frame_00191368, float_8, 0x8);
GUEST_OFFSET(Frame_00191368, word_c, 0xc);
GUEST_OFFSET(Frame_00191368, word_10, 0x10);
GUEST_SIZE(Frame_00191368, 0x20);

void f_00191368(u32 r0, float S0, float S1, float S2, float S3, float S4, float S5, float S6, float S7, float S8) {
    guest::StackFrameOf<Frame_00191368> frame;  // the original's stack frame
    u32 r5 = r0;
    u32 r4 = 0u;
    u32 r6 = r0 + 0x78acu;  // (from the original)
    do {
        u32 r1_1 = r5 + ((r4 << 3) - r4 << 2);
        u32 r0_1 = *gptr<u32>(r5 + ((r4 << 7) - ((r4 << 3) - r4) << 3) + 0x904u);  // (from the original)
        u32 r2_1 = r1_1 + 0x8000u;  // (from the original)
        gptr<Local_00191368_r3_1> r3_1 = gptr<Local_00191368_r3_1>(r0_1 + 0x28u);  // (from the original)
        *gptr<u32>(r2_1 + 0x50u) = r0_1;  // (from the original)
        gptr<Local_00191368_r1_2> r1_2 = gptr<Local_00191368_r1_2>(r1_1 + 0x8044u);  // (from the original)
        r1_2->word_10 = *gptr<u32>(r0_1 + 0x28u);  // (from the original)
        r1_2->word_14 = r3_1->word_4;
        r1_2->word_18 = r3_1->word_8;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        guest::cpu()->s[5] = S5;
        guest::cpu()->s[6] = S6;
        guest::cpu()->s[7] = S7;
        guest::cpu()->s[8] = S8;
        append_to_queue(r6, r1_2.addr(), r2_1, r3_1.addr());
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        S3 = guest::cpu()->s[3];
        S4 = guest::cpu()->s[4];
        S5 = guest::cpu()->s[5];
        S6 = guest::cpu()->s[6];
        S7 = guest::cpu()->s[7];
        S8 = guest::cpu()->s[8];
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 0x1b);  // (from the original)
    float S0_1 = 0.0f;
    float S1_1 = 0.0f;
    float S2_1 = std::bit_cast<float>(*global_008485c8);
    float S3_1 = std::bit_cast<float>(*global_008485cc);
    float S4_1 = std::bit_cast<float>(*global_008485d0);
    gptr<Local_00191368_r0_2> r0_2 = gptr<Local_00191368_r0_2>(r5 + 0x7890u);  // (from the original)
    float S7_1 = std::bit_cast<float>(*gptr<u32>(*gptr<u32>(r5 + 0x145cu) + 0x28u));  // (from the original)
    float S8_1 = std::bit_cast<float>(*gptr<u32>(*gptr<u32>(r5 + 0x904u) + 0x28u));  // (from the original)
    gptr<Local_00191368_r1_3> r1_3 = gptr<Local_00191368_r1_3>(frame.at(0x14).addr());  // (from the original)
    float S5_1 = 2.300613e-39f;
    float S6_1 = std::bit_cast<float>(*global_008485d8);
    frame->float_0 = S0_1;
    frame->float_4 = S1_1;
    frame->float_8 = S2_1;
    frame->word_c = std::bit_cast<u32>(S3_1);
    frame->word_10 = std::bit_cast<u32>(S4_1);
    float S0_2 = S7_1 - S8_1;
    frame->float_4 = S0_2;
    r1_3->float_0 = S5_1;
    r1_3->float_4 = S6_1;
    frame->word_c = r0_2->word_0;
    frame->word_10 = r0_2->word_0;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    guest::cpu()->s[6] = S6_1;
    guest::cpu()->s[7] = S7_1;
    guest::cpu()->s[8] = S8_1;
    call_0031d258(r6, frame.at(0).addr(), 0u, 0x8485d4u);  // (from the original)
    u32 r0_4 = LayoutObjectWithChild__forward_to_child(r5 + 0x4e8u, 0x848798u);  // (from the original)
    call_00297b60(r6, r0_4);
    *gptr<u8>(r5 + 0x7fa8u) = 0;  // (from the original)
}

}  // namespace d_00191368
GUEST_EXPORT_FRAMED(0x00191368, d_00191368::f_00191368, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001916f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001916f0 {

struct __attribute__((packed)) Local_001916f0_ea_12 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001916f0_ea_12, word_0, 0x0);
GUEST_OFFSET(Local_001916f0_ea_12, word_4, 0x4);
GUEST_OFFSET(Local_001916f0_ea_12, word_8, 0x8);

struct __attribute__((packed)) Local_001916f0_r0_4 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_001916f0_r0_4, float_0, 0x0);
GUEST_OFFSET(Local_001916f0_r0_4, float_4, 0x4);

struct __attribute__((packed)) Local_001916f0_r5_2 {
    u8 unknown_0[0xd0];  // (not used here)
    u32 word_d0;
    u8 unknown_d4[0x7];  // (not used here)
    u8 byte_db;
    u8 byte_dc;
};
GUEST_OFFSET(Local_001916f0_r5_2, word_d0, 0xd0);
GUEST_OFFSET(Local_001916f0_r5_2, byte_db, 0xdb);
GUEST_OFFSET(Local_001916f0_r5_2, byte_dc, 0xdc);

struct __attribute__((packed)) Local_001916f0_r9_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_001916f0_r9_1, word_0, 0x0);
GUEST_OFFSET(Local_001916f0_r9_1, word_4, 0x4);
GUEST_OFFSET(Local_001916f0_r9_1, word_8, 0x8);
GUEST_OFFSET(Local_001916f0_r9_1, word_c, 0xc);
GUEST_OFFSET(Local_001916f0_r9_1, word_10, 0x10);
GUEST_OFFSET(Local_001916f0_r9_1, word_14, 0x14);

inline guest::global<u32, 0x008485e4> global_008485e4;
inline guest::global<u32, 0x008485e8> global_008485e8;
inline guest::global<u32, 0x008485ec> global_008485ec;
inline guest::global<u32, 0x008485f0> global_008485f0;
inline guest::global<u32, 0x008485f4> global_008485f4;
inline guest::global<u32, 0x008485f8> global_008485f8;
inline guest::global<u32, 0x008485fc> global_008485fc;
inline guest::global<u32, 0x00848600> global_00848600;
inline guest::global<u32, 0x00848604> global_00848604;
inline guest::global<u32, 0x00848608> global_00848608;
inline guest::global<u32, 0x0084860c> global_0084860c;
inline guest::global<u32, 0x00848610> global_00848610;
inline guest::global<u32, 0x00848614> global_00848614;
inline constexpr guest::Function<0x002b6a00, u32(u32, u32)> set_node_values;
inline constexpr guest::Function<0x002f6a30, u32(u32, u32)> call_002f6a30;
inline constexpr guest::Function<0x002f6e98, u32(u32, u32, u32, u32)> ButtonActionControl__setup;
inline constexpr guest::Function<0x002f7508, u32(u32, u32, u32)> call_002f7508;
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32)> call_004b4fc0;
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> LayoutObjectWithChild__forward_to_child;
inline constexpr guest::Function<0x006aa944, u32(u32)> scaled_value_8c;

struct __attribute__((packed)) Frame_001916f0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u8 unknown_24[0x20];  // (not read or written by name)
    u32 word_44;
    u32 word_48;
    u8 unknown_4c[0x18];  // (not read or written by name)
    u32 word_64;
    u8 unknown_68[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001916f0, word_0, 0x0);
GUEST_OFFSET(Frame_001916f0, word_4, 0x4);
GUEST_OFFSET(Frame_001916f0, word_8, 0x8);
GUEST_OFFSET(Frame_001916f0, word_c, 0xc);
GUEST_OFFSET(Frame_001916f0, word_10, 0x10);
GUEST_OFFSET(Frame_001916f0, word_14, 0x14);
GUEST_OFFSET(Frame_001916f0, word_18, 0x18);
GUEST_OFFSET(Frame_001916f0, word_1c, 0x1c);
GUEST_OFFSET(Frame_001916f0, word_20, 0x20);
GUEST_OFFSET(Frame_001916f0, word_44, 0x44);
GUEST_OFFSET(Frame_001916f0, word_48, 0x48);
GUEST_OFFSET(Frame_001916f0, word_64, 0x64);
GUEST_SIZE(Frame_001916f0, 0x6c);

void f_001916f0(u32 r0, float S0, float S1) {
    guest::StackFrameOf<Frame_001916f0> frame;  // the original's stack frame
    u32 r7 = r0;
    u32 r0_1 = r0 + 0x4e8u;  // (from the original)
    gptr<Local_001916f0_r9_1> r9_1 = gptr<Local_001916f0_r9_1>(frame.at(0x4c).addr());  // (from the original)
    u32 r1_1 = *global_008485e4;
    frame->word_1c = r0_1;
    u32 r3_1 = *global_008485e8;
    u32 r5_1 = *global_008485ec;
    u32 r6_1 = *global_008485f0;
    u32 r8_1 = *global_008485f4;
    u32 r12_1 = *global_008485f8;
    r9_1->word_0 = r1_1;
    r9_1->word_4 = r3_1;
    r9_1->word_8 = r5_1;
    r9_1->word_c = r6_1;
    r9_1->word_10 = r8_1;
    r9_1->word_14 = r12_1;
    u32 r1_2 = *global_008485fc;
    frame->word_48 = r0_1;
    u32 r0_2 = r7 + 0x7798u;  // (from the original)
    frame->word_44 = r0 + 0x58u;  // (from the original)
    frame->word_64 = r1_2;
    frame->word_20 = r0_2;
    ButtonActionControl__setup(r0_2, frame.at(0x44).addr(), 0u, r3_1);  // (from the original)
    u32 r0_3 = frame->word_20;
    u32 r9 = 0u;
    S0 = 0.0f;
    S1 = -60.0f;
    u32 r11 = 0x1000411u;  // (from the original)
    *gptr<u32>(r0_3 + 0xd4u) = *gptr<u32>(r0_3 + 0xd4u) | 0x40u;  // (from the original)
    frame->word_0 = r9;
    frame->word_4 = r9;
    gptr<Local_001916f0_r0_4> r0_4 = gptr<Local_001916f0_r0_4>(frame.at(8).addr());
    frame->word_8 = r9;
    frame->word_c = r9;
    frame->word_10 = r9;
    frame->word_14 = r9;
    frame->word_18 = r9;
    u32 r8 = 1u;
    r0_4->float_0 = S0;
    r0_4->float_4 = S1;
    u32 r0_5 = *global_00848600;
    u32 r1_5 = *global_00848604;
    u32 r2_2 = *global_00848608;
    u32 r10 = r11 & ~r8;
    gptr<Local_001916f0_ea_12> ea_12 = gptr<Local_001916f0_ea_12>(frame.at(0x2c).addr());  // (from the original)
    ea_12->word_0 = r0_5;
    ea_12->word_4 = r1_5;
    ea_12->word_8 = r2_2;
    u32 r3 = frame.at(0x38).addr();  // (from the original)
    u32 r1_6 = *global_00848610;
    u32 r2 = *global_00848614;
    u32 r4 = 0u;
    *gptr<u32>(r3) = *global_0084860c;
    *gptr<u32>(r3 + 4) = r1_6;
    *gptr<u32>(r3 + 8) = r2;
    do {
        u32 r1_7 = gptr<u32>(frame.at(0x2c).addr())[r4];  // (from the original)
        u32 r0_6 = frame->word_1c;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        u32 r0_7 = LayoutObjectWithChild__forward_to_child(r0_6, r1_7, r2, r3);
        frame->word_0 = r0_7;
        u32 r0_9 = call_004b4fc0(frame->word_1c, gptr<u32>(frame.at(0x38).addr())[r4], 1u);  // (from the original)
        frame->word_4 = r0_9;
        u32 r6_2 = r7 + ((r4 << 3) - r4 << 5);
        gptr<Local_001916f0_r5_2> r5_2 = gptr<Local_001916f0_r5_2>(r6_2 + 0x74f8u);  // (from the original)
        frame->word_14 = r4;
        frame->word_10 = r9;
        set_node_values(r5_2.addr(), frame.at(0).addr());
        call_002f7508(frame->word_20, r5_2.addr(), 1u);
        *gptr<u32>(r6_2 + 0x75c4u) = r11;  // (from the original)
        *gptr<u8>(r6_2 + 0x75d2u) = u8(r8);  // (from the original)
        r5_2->word_d0 = r10;
        r5_2->byte_db = u8(r8);
        r5_2->byte_dc = u8(r8);
        scaled_value_8c(frame->word_0);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        u32 r0_13 = r7 + (r4 << 2) + 0x7800u;  // (from the original)
        r4 += 1u;
        *gptr<u32>(r0_13 + 0x9cu) = std::bit_cast<u32>(S0);  // (from the original)
        guest::preempt();
    } while (s32(r4) < 3);
    u32 r0_14 = frame->word_20;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    call_002f6a30(r0_14, 0u);
    *gptr<u16>(r7 + 0x7868u) = 3;  // (from the original)
}

}  // namespace d_001916f0
GUEST_EXPORT_FRAMED(0x001916f0, d_001916f0::f_001916f0, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_00194504: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00194504 {

struct __attribute__((packed)) Object_00194504_0 {
    u8 unknown_0[0x9c0];  // (not used here)
    u32 word_9c0;
    u8 unknown_9c4[0x6188];  // (not used here)
    u32 word_6b4c;
    u8 unknown_6b50[0x4];  // (not used here)
    u32 word_6b54;
    u8 unknown_6b58[0x18];  // (not used here)
    u32 word_6b70;
    u32 word_6b74;
};
GUEST_OFFSET(Object_00194504_0, word_9c0, 0x9c0);
GUEST_OFFSET(Object_00194504_0, word_6b4c, 0x6b4c);
GUEST_OFFSET(Object_00194504_0, word_6b54, 0x6b54);
GUEST_OFFSET(Object_00194504_0, word_6b70, 0x6b70);
GUEST_OFFSET(Object_00194504_0, word_6b74, 0x6b74);

struct __attribute__((packed)) Object_00194504_2 {
    u32 word_0;
};
GUEST_OFFSET(Object_00194504_2, word_0, 0x0);

struct __attribute__((packed)) Object_00194504_3 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Object_00194504_3, float_0, 0x0);
GUEST_OFFSET(Object_00194504_3, float_4, 0x4);

struct __attribute__((packed)) Local_00194504_r4_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_00194504_r4_1, float_0, 0x0);
GUEST_OFFSET(Local_00194504_r4_1, float_4, 0x4);


void f_00194504(gptr<Object_00194504_0> arg0, u32 r1, gptr<Object_00194504_2> arg2, gptr<Object_00194504_3> arg3, float S0) {
    float S1_1 = 0.5f;
    gptr<Local_00194504_r4_1> r4_1 = gptr<Local_00194504_r4_1>(arg0->word_9c0 + 0x48u);  // (from the original)
    u32 r5_1 = *gptr<u32>((arg0->word_6b4c << 3) + 0x8495e8u) - 1u;  // (from the original)
    u32 r12_1 = vcvt_sz_f((arg3->float_0 + r4_1->float_0 * S1_1) / std::bit_cast<float>(gptr<u32>(0x849648u)[arg0->word_6b54]) + S0) + arg0->word_6b70;  // (from the original)
    if (s32(r12_1) < 0) {
        r12_1 = 0u;
    } else if (s32(r5_1) < s32(r12_1)) {
        r12_1 = r5_1;
    }
    *gptr<u32>(r1) = r12_1;
    float S2_1 = -arg3->float_4 + r4_1->float_4 * S1_1;
    float S1_2 = S2_1 / std::bit_cast<float>(gptr<u32>(0x849648u)[*gptr<u32>(arg0.addr() + 0x6b54u)]);  // (from the original)
    u32 r1_1 = *gptr<u32>((*gptr<u32>(arg0.addr() + 0x6b4cu) << 3) + 0x8495e8u + 4u) - 1u;  // (from the original)
    float S0_1 = std::bit_cast<float>(vcvt_sz_f(S1_2 + S0));
    u32 r0_1 = std::bit_cast<u32>(S0_1) + arg0->word_6b74;
    if (s32(r0_1) < 0) {
        r0_1 = 0u;
    } else if (s32(r1_1) < s32(r0_1)) {
        r0_1 = r1_1;
    }
    arg2->word_0 = r0_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_2;
}

}  // namespace d_00194504
GUEST_EXPORT_FRAMED(0x00194504, d_00194504::f_00194504, 0xff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11} first, as the original

// f_00194bc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00194bc0 {

inline guest::global<u32, 0x0094f860> global_0094f860;

void notify_object_00194bc0(u32 r0, u32 r1) {
    *global_0094f860 = r0 & 0xfu | (r1 & 0xfu) << 4;  // (from the original)
    guest::cpu()->r[1] = 0x94f85cu;  // (from the original)
}

}  // namespace d_00194bc0
GUEST_EXPORT(0x00194bc0, d_00194bc0::notify_object_00194bc0);

// f_00194ff4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00194ff4 {

struct __attribute__((packed)) Object_00194ff4_0 {
    u8 unknown_0[0x9c0];  // (not used here)
    u32 word_9c0;
    u8 unknown_9c4[0x6190];  // (not used here)
    u32 word_6b54;
    u8 unknown_6b58[0x18];  // (not used here)
    u32 word_6b70;
    u32 word_6b74;
};
GUEST_OFFSET(Object_00194ff4_0, word_9c0, 0x9c0);
GUEST_OFFSET(Object_00194ff4_0, word_6b54, 0x6b54);
GUEST_OFFSET(Object_00194ff4_0, word_6b70, 0x6b70);
GUEST_OFFSET(Object_00194ff4_0, word_6b74, 0x6b74);

struct __attribute__((packed)) Object_00194ff4_1 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Object_00194ff4_1, float_0, 0x0);
GUEST_OFFSET(Object_00194ff4_1, float_4, 0x4);
GUEST_OFFSET(Object_00194ff4_1, float_8, 0x8);

struct __attribute__((packed)) Local_00194ff4_r0_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_00194ff4_r0_1, float_0, 0x0);
GUEST_OFFSET(Local_00194ff4_r0_1, float_4, 0x4);


void f_00194ff4(gptr<Object_00194ff4_0> arg0, gptr<Object_00194ff4_1> arg1, u32 r2, u32 r3) {
    float S0_1 = 0.5f;
    gptr<Local_00194ff4_r0_1> r0_1 = gptr<Local_00194ff4_r0_1>(arg0->word_9c0 + 0x48u);  // (from the original)
    float S3_1 = 0.0f;
    arg1->float_0 = (float(s32(r2 - arg0->word_6b70)) + S0_1) * std::bit_cast<float>(gptr<u32>(0x849648u)[arg0->word_6b54]) - r0_1->float_0 * S0_1;  // (from the original)
    float S1_1 = r0_1->float_4 * S0_1;
    float S0_2 = float(s32(r3 - arg0->word_6b74)) + S0_1;
    float S1_2 = S1_1 - S0_2 * std::bit_cast<float>(gptr<u32>(0x849648u)[arg0->word_6b54]);  // (from the original)
    arg1->float_4 = S1_2;
    arg1->float_8 = S3_1;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
}

}  // namespace d_00194ff4
GUEST_EXPORT_FRAMED(0x00194ff4, d_00194ff4::f_00194ff4, 0xf0);  // pushes {r4, r5, r6, r7} first, as the original

// f_00195488: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00195488 {

inline guest::global<u32, 0x0094f860> global_0094f860;

void f_00195488(u32 r0, u32 r1) {
    *global_0094f860 = (r1 & 0xfu | (r0 & 0xfu) << 8) | 0x1000u;  // (from the original)
    guest::cpu()->r[1] = 0x94f85cu;  // (from the original)
}

}  // namespace d_00195488
GUEST_EXPORT(0x00195488, d_00195488::f_00195488);

// f_00195d74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00195d74 {

struct __attribute__((packed)) Object_00195d74_0 {
    u8 unknown_0[0x9f0];  // (not used here)
    u32 word_9f0;
    u8 unknown_9f4[0x6164];  // (not used here)
    u32 word_6b58;
    u32 word_6b5c;
    u8 unknown_6b60[0xc];  // (not used here)
    u32 word_6b6c;
};
GUEST_OFFSET(Object_00195d74_0, word_9f0, 0x9f0);
GUEST_OFFSET(Object_00195d74_0, word_6b58, 0x6b58);
GUEST_OFFSET(Object_00195d74_0, word_6b5c, 0x6b5c);
GUEST_OFFSET(Object_00195d74_0, word_6b6c, 0x6b6c);

inline constexpr guest::Function<0x001b3340, u32(u32, u32, u32, u32)> call_001b3340;

struct __attribute__((packed)) Frame_00195d74 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00195d74, word_0, 0x0);
GUEST_OFFSET(Frame_00195d74, word_4, 0x4);
GUEST_OFFSET(Frame_00195d74, word_8, 0x8);
GUEST_SIZE(Frame_00195d74, 0x10);

u32 f_00195d74(gptr<Object_00195d74_0> arg0) {
    guest::StackFrameOf<Frame_00195d74> frame;  // the original's stack frame
    u32 r3_1 = arg0->word_6b5c;
    u32 r2_1 = arg0->word_6b58;
    frame->word_0 = arg0->word_9f0;
    frame->word_4 = r2_1;
    frame->word_8 = r3_1;
    u32 r4_1 = arg0.addr() + 0x6b6cu;  // (from the original)
    call_001b3340(0x98b2b8u, frame.at(0).addr(), arg0->word_6b6c & 0xffu, r3_1);  // (from the original)
    return frame.at(0).addr();
}

}  // namespace d_00195d74
GUEST_EXPORT_FRAMED(0x00195d74, d_00195d74::f_00195d74, 0x4010);  // pushes {r4, lr} first, as the original

// f_00195dd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00195dd4 {

struct __attribute__((packed)) Object_00195dd4_0 {
    u8 unknown_0[0x9f0];  // (not used here)
    u32 word_9f0;
    u8 unknown_9f4[0x38];  // (not used here)
    u8 byte_a2c;
    u8 unknown_a2d[0x6133];  // (not used here)
    u32 word_6b60;
    u8 unknown_6b64[0x8];  // (not used here)
    u32 word_6b6c;
};
GUEST_OFFSET(Object_00195dd4_0, word_9f0, 0x9f0);
GUEST_OFFSET(Object_00195dd4_0, byte_a2c, 0xa2c);
GUEST_OFFSET(Object_00195dd4_0, word_6b60, 0x6b60);
GUEST_OFFSET(Object_00195dd4_0, word_6b6c, 0x6b6c);

inline guest::global<u8, 0x0094f85e> global_0094f85e;
inline constexpr guest::Function<0x00134544, u32(u32, u32, u32)> copy_bytes_small_sizes_first;
inline constexpr guest::Function<0x0070ba0c, u32(u32, u32, u32, u32)> call_0070ba0c;

void f_00195dd4(gptr<Object_00195dd4_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r12 = guest::cpu()->r[12];
    u32 res_2 = 0;
    *frame.at<u32>(0x20) = r12;  // (from the original)
    call_0070ba0c(0x98b2b8u, *gptr<u32>(r0 + (u32(arg0->byte_a2c) << 2) + 0xa1cu), arg0->word_6b6c & 0xffu, r3);  // (from the original)
    copy_bytes_small_sizes_first(arg0->word_9f0, *gptr<u32>(r0 + (u32(arg0->byte_a2c) << 2) + 0xa24u), arg0->word_6b60);  // (from the original)
    u32 r1 = guest::cpu()->r[1];
    if (*global_0094f85e != 0) {
        u32 r7 = 0x849148u;  // (from the original)
        u32 r14 = arg0->word_9f0;
        u32 r4 = 0u;
        u32 r10 = 0x8fu;  // (from the original)
        r1 = r4;
        u32 r6 = 1u;
        u32 r8 = r7 + 0x200u;  // (from the original)
        u32 r11 = r10 + 0x8800u;  // (from the original)
        u32 r9 = 0xfu;  // (from the original)
        do {
            u32 r2 = 0u;
            r3 = 0x20u;  // (from the original)
            r0 = r14 + (r4 << 1);
            do {
                u32 r5_1 = lsl_r(r6, r2 & 0xff);  // (from the original)
                if ((gptr<u32>(r7)[r1] & r5_1) != 0) {
                    if ((gptr<u32>(r8)[r1] & r5_1) == 0) {
                        *gptr<u16>(r0) = u16(r11);
                    } else {
                        *gptr<u16>(r0) = u16(r10);
                    }
                } else {
                    u32 r12_1 = *gptr<u16>(r0);
                    if ((r9 & ~r12_1) == 0) {
                        *gptr<u16>(r0) = u16(r12_1 & ~0xfu | 0xcu);  // (from the original)
                    }
                }
                res_2 = r3 - 1u;
                r3 = res_2;
                r0 += 2u;
                r2 += 1u;
                guest::preempt();
            } while (res_2 != 0);
            r1 += 1u;
            r4 += 0x20u;  // (from the original)
            guest::preempt();
        } while (s32(r1) < 0x80);  // (from the original)
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_00195dd4
GUEST_EXPORT_FRAMED(0x00195dd4, d_00195dd4::f_00195dd4, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_00197fa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00197fa4 {

struct __attribute__((packed)) Object_00197fa4_0 {
    u8 unknown_0[0x9e6];  // (not used here)
    u16 half_9e6;
    u8 unknown_9e8[0xc];  // (not used here)
    u8 byte_9f4;
};
GUEST_OFFSET(Object_00197fa4_0, half_9e6, 0x9e6);
GUEST_OFFSET(Object_00197fa4_0, byte_9f4, 0x9f4);

struct __attribute__((packed)) Local_00197fa4_ea_1 {
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
};
GUEST_OFFSET(Local_00197fa4_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00197fa4_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00197fa4_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00197fa4_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_00197fa4_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_00197fa4_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_00197fa4_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_00197fa4_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_00197fa4_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_00197fa4_ea_1, word_24, 0x24);
GUEST_OFFSET(Local_00197fa4_ea_1, word_28, 0x28);
GUEST_OFFSET(Local_00197fa4_ea_1, word_2c, 0x2c);
GUEST_OFFSET(Local_00197fa4_ea_1, word_30, 0x30);

struct __attribute__((packed)) Local_00197fa4_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Local_00197fa4_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00197fa4_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_00197fa4_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_00197fa4_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_00197fa4_ea_2, word_10, 0x10);
GUEST_OFFSET(Local_00197fa4_ea_2, word_14, 0x14);
GUEST_OFFSET(Local_00197fa4_ea_2, word_18, 0x18);
GUEST_OFFSET(Local_00197fa4_ea_2, word_1c, 0x1c);
GUEST_OFFSET(Local_00197fa4_ea_2, word_20, 0x20);

struct __attribute__((packed)) Local_00197fa4_r0_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00197fa4_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_00197fa4_r0_1, word_4, 0x4);

struct __attribute__((packed)) Local_00197fa4_r1_2 {
    u8 byte_0;
};
GUEST_OFFSET(Local_00197fa4_r1_2, byte_0, 0x0);

struct __attribute__((packed)) Local_00197fa4_r2_2 {
    u8 byte_0;
};
GUEST_OFFSET(Local_00197fa4_r2_2, byte_0, 0x0);

inline constexpr guest::Function<0x001c4bf4, u32(u32, u32, u32, u32)> call_001c4bf4;
inline constexpr guest::Function<0x001c4c14, u32(u32, u32)> call_001c4c14;
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> clear_aligned;
inline constexpr guest::Function<0x0070d904, u32(u32, u32, u32, u32)> call_0070d904;

struct __attribute__((packed)) Frame_00197fa4 {
    u8 unknown_0[0x40c];  // (not read or written by name)
    u32 word_40c;
    u8 unknown_410[0x10];  // (not read or written by name)
    u32 word_420;
    u8 unknown_424[0x24];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00197fa4, word_40c, 0x40c);
GUEST_OFFSET(Frame_00197fa4, word_420, 0x420);
GUEST_SIZE(Frame_00197fa4, 0x448);

void f_00197fa4(gptr<Object_00197fa4_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00197fa4> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00197fa4_ea_1> ea_1 = gptr<Local_00197fa4_ea_1>(frame.at(0x414).addr());  // (from the original)
    ea_1->word_0 = r0;
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
    ea_1->word_30 = r14;
    r6 = r1;
    r8 = frame.at(0).addr();
    r7 = r2;
    clear_aligned(r8, 0x400u, r2, r3);  // (from the original)
    u32 r9_1 = frame.at(0x400).addr();  // (from the original)
    r4 = 0u;
    call_001c4c14(r9_1, *gptr<u32>(r0 + (u32(arg0->byte_9f4) << 2) + 0x9e8u));  // (from the original)
    frame->word_40c = r0 + 0x900u;  // (from the original)
    u32 r3_2 = arg0->half_9e6;
    call_001c4bf4(r9_1, r6, r7, r3_2);
    r3 = guest::cpu()->r[3];
    r9 = 0x849ef0u;  // (from the original)
    r11 = r0 + 0x6b4cu;  // (from the original)
    r10 = r9 + 0x10u;  // (from the original)
L_198014:;
    u32 r5_1 = lsr_r(u32(*gptr<u8>(r8 + u32(s32(r4) >> 2))), r4 << 0x1e >> 0x1d & 0xff) & 3u;  // (from the original)
    u32 res_1 = r6 + gptr<u32>(r9)[r5_1];
    r6 = res_1;
    r7 += gptr<u32>(r10)[r5_1];
    if (s32(res_1) >= 0) {
        gptr<Local_00197fa4_r0_1> r0_1 = gptr<Local_00197fa4_r0_1>((*gptr<u32>(r11) << 3) + 0x8495e8u);  // (from the original)
        if (s32(r6) < s32(r0_1->word_0) && s32(r7) >= 0 && s32(r0_1->word_4) > s32(r7)) {
            u32 r0_3 = call_0070d904(frame.at(0x400).addr(), r6, r7, r3);  // (from the original)
            if (r0_3 == frame->word_420) {
                u32 r3_3 = *gptr<u16>(frame->word_40c + 0xe6u);  // (from the original)
                call_001c4bf4(frame.at(0x400).addr(), r6, r7, r3_3);  // (from the original)
                r4 += 1u;
                u32 r0_5 = r4 & 3u;
                gptr<Local_00197fa4_r1_2> r1_2 = gptr<Local_00197fa4_r1_2>(r8 + u32(s32(r4) >> 2));
                r3 = *gptr<u8>(r0_5 + 0x848f53u);  // (from the original)
                r1_2->byte_0 = u8(u32(r1_2->byte_0) & r3 | lsl_r(0u, r0_5 << 1 & 0xff));  // (from the original)
                guest::preempt();
                goto L_198014;
            }
        }
    }
    r1 = gptr<u32>(r10)[r5_1];
    r6 -= gptr<u32>(r9)[r5_1];
    r7 -= r1;
    if (r5_1 == 3u) {
        do {
            r4 -= 1u;
            if (s32(r4) < 0) {
                gptr<Local_00197fa4_ea_2> ea_2 = gptr<Local_00197fa4_ea_2>(frame.at(0x424).addr());  // (from the original)
                u32 r4_1 = ea_2->word_0;
                u32 r5_2 = ea_2->word_4;
                u32 r6_1 = ea_2->word_8;
                u32 r7_1 = ea_2->word_c;
                u32 r8_1 = ea_2->word_10;
                u32 r9_2 = ea_2->word_14;
                u32 r10_1 = ea_2->word_18;
                u32 r11_1 = ea_2->word_1c;
                guest::cpu()->r[1] = r1;
                guest::cpu()->r[4] = r4_1;
                guest::cpu()->r[5] = r5_2;
                guest::cpu()->r[6] = r6_1;
                guest::cpu()->r[7] = r7_1;
                guest::cpu()->r[8] = r8_1;
                guest::cpu()->r[9] = r9_2;
                guest::cpu()->r[10] = r10_1;
                guest::cpu()->r[11] = r11_1;
                return;
            }
            r5_1 = lsr_r(u32(*gptr<u8>(r8 + u32(s32(r4) >> 2))), r4 << 0x1e >> 0x1d & 0xff) & 3u;  // (from the original)
            r1 = gptr<u32>(r10)[r5_1];
            r6 -= gptr<u32>(r9)[r5_1];
            r7 -= r1;
            guest::preempt();
        } while (r5_1 == 3u);
    }
    u32 r0_6 = r4 & 3u;
    gptr<Local_00197fa4_r2_2> r2_2 = gptr<Local_00197fa4_r2_2>(r8 + u32(s32(r4) >> 2));
    r3 = *gptr<u8>(r0_6 + 0x848f53u);  // (from the original)
    r2_2->byte_0 = u8(u32(r2_2->byte_0) & r3 | lsl_r(r5_1 + 1u & 3u, r0_6 << 1 & 0xff));  // (from the original)
    guest::preempt();
    goto L_198014;
}

}  // namespace d_00197fa4
GUEST_EXPORT(0x00197fa4, d_00197fa4::f_00197fa4);

// f_001982d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001982d0 {

struct __attribute__((packed)) Object_001982d0_0 {
    u8 unknown_0[0x9f4];  // (not used here)
    u8 byte_9f4;
};
GUEST_OFFSET(Object_001982d0_0, byte_9f4, 0x9f4);

inline constexpr guest::Function<0x001c4bf4, u32(u32, u32, u32, u32)> call_001c4bf4;
inline constexpr guest::Function<0x001c4c14, u32(u32, u32, u32, u32)> call_001c4c14;
inline constexpr guest::Function<0x0070d904, u32(u32, u32, u32, u32)> call_0070d904;

struct __attribute__((packed)) Frame_001982d0 {
    u8 unknown_0[0xc];  // (not read or written by name)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Frame_001982d0, word_c, 0xc);
GUEST_OFFSET(Frame_001982d0, word_10, 0x10);
GUEST_SIZE(Frame_001982d0, 0x14);

void f_001982d0(gptr<Object_001982d0_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_001982d0> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r11 = r3;
    frame->word_c = r1 - 8u;
    u32 r6 = r2 - 8u;
    call_001c4c14(frame.at(0).addr(), *gptr<u32>(r0 + (u32(arg0->byte_9f4) << 2) + 0x9e8u), r2, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    u32 r8 = 0u;
    u32 r7 = r0 + 0x6b4cu;  // (from the original)
    frame->word_10 = r0 + 0x900u;  // (from the original)
    do {
        u32 r9 = frame->word_c + r8;
        if (s32(r9) >= 0) {
            r1 = *gptr<u32>((*gptr<u32>(r7) << 3) + 0x8495e8u);  // (from the original)
            if (s32(r1) > s32(r9)) {
                r1 = 1u;
                u32 r10 = lsl_r(r1, r8 & 0xff);  // (from the original)
                u32 r4 = 0u;
                do {
                    u32 r5_1 = r6 + r4;
                    if (s32(r5_1) >= 0) {
                        r1 = *gptr<u32>(r7);
                        if (s32(*gptr<u32>((r1 << 3) + 0x8495e8u + 4u)) > s32(r5_1) && (u32(gptr<u16>(r11)[r4]) & r10) != 0) {  // (from the original)
                            u32 r0_3 = call_0070d904(frame.at(0).addr(), r9, r5_1, r3);
                            r3 = guest::cpu()->r[3];
                            r1 = 0xfu;  // (from the original)
                            if ((r1 & ~r0_3) != 0) {
                                u32 r3_1 = *gptr<u16>(frame->word_10 + 0xe6u);  // (from the original)
                                call_001c4bf4(frame.at(0).addr(), r9, r5_1, r3_1);
                                r1 = guest::cpu()->r[1];
                                r3 = guest::cpu()->r[3];
                            }
                        }
                    }
                    r4 += 1u;
                    guest::preempt();
                } while (s32(r4) < 0x10);  // (from the original)
            }
        }
        r8 += 1u;
        guest::preempt();
    } while (s32(r8) < 0x10);  // (from the original)
    guest::cpu()->r[1] = r1;
}

}  // namespace d_001982d0
GUEST_EXPORT_FRAMED(0x001982d0, d_001982d0::f_001982d0, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_00198d64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00198d64 {

inline constexpr u32 vtable_BsMenuEdit = 0x008eae94u;
inline constexpr u32 vtable_BsMenuEdit_at_28 = 0x008eaf00u;
inline constexpr u32 vtable_ComButton2Lyt = 0x008ee228u;
inline constexpr u32 vtable_Control2Button = 0x008ef284u;
inline constexpr u32 vtable_Control2Button_at_e4 = 0x008ef2c8u;
inline constexpr u32 vtable_GridButtonNode = 0x008ef364u;
inline constexpr u32 vtable_ToolButtonNode = 0x008ef958u;
inline constexpr u32 vtable_ToolButtonNode_at_e0 = 0x008ef9a0u;
inline constexpr u32 vtable_ComButtonLytBase = 0x008f18f4u;
inline constexpr u32 vtable_Palette = 0x008f80dcu;
inline constexpr guest::Function<0x0023fb5c, u32(u32)> ProButtonNode__virtual_0_0023fb5c;
inline constexpr guest::Function<0x002b6ef8, u32(u32)> ButtonActionNode__virtual_0;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002f770c, u32(u32)> ControlButtonBase__virtual_0_002f770c;
inline constexpr guest::Function<0x002f7710, u32(u32)> destroy_button_action_control;
inline constexpr guest::Function<0x00317dec, u32(u32)> ssys__ma__HeapAllocator__virtual_0;
inline constexpr guest::Function<0x0031c92c, u32(u32)> ButtonActionCstmNode__virtual_0;
inline constexpr guest::Function<0x00567ef0, u32(u32, u32)> ssys__ma__lyt__ArcResAccReader__virtual_0;
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32)> destroy_animation;
inline constexpr guest::Function<0x005bf744, u32(u32, u32)> Layout__virtual_0;
inline constexpr guest::Function<0x005e3194, u32(u32, u32)> script__RenderMain__RenderMain_005e3194;
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> MenuBase__virtual_0;

u32 BsMenuEdit__virtual_0_00198d64(gptr<BsMenuEdit> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    arg0->word_0 = vtable_BsMenuEdit;
    arg0->word_28 = vtable_BsMenuEdit_at_28;
    u32 r0_1 = arg0.addr() + 0x5c6cu;  // (from the original)
    u32 r4_1 = r0_1 + 0x398u;  // (from the original)
    arg0->word_5c6c = vtable_ComButton2Lyt;
    arg0->word_6004 = vtable_Control2Button;
    arg0->word_60e8 = vtable_Control2Button_at_e4;
    destroy_array_elements(r0_1 + 0x4b0u, 0x2e0b3cu, 0x518u, 2u);  // (from the original)
    ControlButtonBase__virtual_0_002f770c(r4_1);
    arg0->word_5c6c = vtable_ComButtonLytBase;
    u32 r0_4 = ssys__ma__lyt__ArcResAccReader__virtual_0(r4_1 - 0x248u, 0x8f18f4u);  // (from the original)
    u32 r0_6 = Layout__virtual_0(r0_4 - 0x14cu, guest::cpu()->r[1]);  // (from the original)
    u32 r0_7 = r0_6 - 0x1f54u;  // (from the original)
    *gptr<u32>(r0_7) = vtable_Palette;
    u32 r0_8 = r0_7 + 0x1e5cu;  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_8, 0x8f80dcu);  // (from the original)
    u32 r0_9 = r0_8 - 0xc4u;  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_9, guest::cpu()->r[1]);
    u32 r0_10 = r0_9 - 0x140u;  // (from the original)
    destroy_button_action_control(r0_10);
    u32 r0_11 = r0_10 - 0xe4u;  // (from the original)
    destroy_button_action_control(r0_11);
    destroy_array_elements(r0_11 - 0x1260u, 0x2b6ef8u, 0xe0u, 0x15u);  // (from the original)
    u32 r0_14 = Layout__virtual_0(r0_11 - 0x176cu, guest::cpu()->r[1]);  // (from the original)
    u32 r0_15 = r0_14 - 0x2cu;  // (from the original)
    destroy_animation(r0_15, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_16 = r0_15 - 0x28u;  // (from the original)
    destroy_animation(r0_16, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_17 = r0_16 - 0x28u;  // (from the original)
    destroy_animation(r0_17, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_18 = r0_17 - 0x28u;  // (from the original)
    destroy_animation(r0_18, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_19 = r0_18 - 0x28u;  // (from the original)
    destroy_animation(r0_19, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_20 = r0_19 - 0x28u;  // (from the original)
    destroy_animation(r0_20, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_21 = r0_20 - 0x28u;  // (from the original)
    destroy_animation(r0_21, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_22 = r0_21 - 0x28u;  // (from the original)
    destroy_animation(r0_22, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_24 = Layout__virtual_0(r0_22 - 0x14cu, guest::cpu()->r[1]);  // (from the original)
    u32 r0_26 = Layout__virtual_0(r0_24 - 0x14cu, guest::cpu()->r[1]);  // (from the original)
    u32 r0_27 = r0_26 - 8u;
    ssys__ma__HeapAllocator__virtual_0(r0_27);
    u32 r0_28 = r0_27 - 0x108u;  // (from the original)
    destroy_button_action_control(r0_28);
    u32 r0_29 = r0_28 - 0xe0u;  // (from the original)
    ButtonActionCstmNode__virtual_0(r0_29);
    destroy_array_elements(r0_29 - 0x2a0u, 0x2b6ef8u, 0xe0u, 3u);  // (from the original)
    u32 r0_32 = ProButtonNode__virtual_0_0023fb5c(r0_29 - 0x1f54u);  // (from the original)
    *gptr<u32>(r0_32 - 0xd80u) = vtable_ToolButtonNode_at_e0;  // (from the original)
    *gptr<u32>(r0_32 - 0xe60u) = vtable_ToolButtonNode;  // (from the original)
    u32 r0_33 = r0_32 - 0x84u;  // (from the original)
    destroy_animation(r0_33, 0x8ef958u, 0x8ef9a0u);  // (from the original)
    u32 r0_34 = r0_33 - 0x28u;  // (from the original)
    destroy_animation(r0_34, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_36 = Layout__virtual_0(r0_34 - 0x14cu, guest::cpu()->r[1]);  // (from the original)
    u32 r0_37 = r0_36 - 0xe4u;  // (from the original)
    destroy_button_action_control(r0_37);
    u32 r4_4 = r0_37 - 0xb84u;  // (from the original)
    destroy_array_elements(r0_37 - 0xa80u, 0x2b6ef8u, 0xe0u, 0xcu);  // (from the original)
    ButtonActionNode__virtual_0(r4_4);
    *gptr<u32>(r4_4 - 0x36cu) = vtable_GridButtonNode;  // (from the original)
    u32 r0_40 = Layout__virtual_0(r4_4 - 0x14cu, 0x8ef364u);  // (from the original)
    u32 r0_41 = r0_40 - 0x28u;  // (from the original)
    destroy_animation(r0_41, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_42 = r0_41 - 0x28u;  // (from the original)
    destroy_animation(r0_42, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_43 = r0_42 - 0x28u;  // (from the original)
    destroy_animation(r0_43, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_44 = r0_43 - 0x28u;  // (from the original)
    destroy_animation(r0_44, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_45 = r0_44 - 0x28u;  // (from the original)
    destroy_animation(r0_45, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_46 = r0_45 - 0x28u;  // (from the original)
    destroy_animation(r0_46, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_47 = r0_46 - 0x28u;  // (from the original)
    destroy_animation(r0_47, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_48 = r0_47 - 0x28u;  // (from the original)
    destroy_animation(r0_48, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_49 = r0_48 - 0xe0u;  // (from the original)
    ButtonActionNode__virtual_0(r0_49);
    u32 r0_50 = r0_49 - 0xd8u;  // (from the original)
    destroy_animation(r0_50, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_51 = r0_50 - 0x28u;  // (from the original)
    destroy_animation(r0_51, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_52 = r0_51 - 0x28u;  // (from the original)
    destroy_animation(r0_52, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_53 = r0_52 - 0x28u;  // (from the original)
    destroy_animation(r0_53, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_54 = r0_53 - 0x28u;  // (from the original)
    destroy_animation(r0_54, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_55 = r0_54 - 0x28u;  // (from the original)
    destroy_animation(r0_55, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_56 = r0_55 - 0x28u;  // (from the original)
    destroy_animation(r0_56, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_57 = r0_56 - 0x28u;  // (from the original)
    destroy_animation(r0_57, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_58 = r0_57 - 0x28u;  // (from the original)
    destroy_animation(r0_58, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_59 = r0_58 - 0x28u;  // (from the original)
    destroy_animation(r0_59, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_60 = r0_59 - 0x28u;  // (from the original)
    destroy_animation(r0_60, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_62 = Layout__virtual_0(r0_60 - 0x14cu, guest::cpu()->r[1]);  // (from the original)
    u32 r0_64 = Layout__virtual_0(r0_62 - 0x14cu, guest::cpu()->r[1]);  // (from the original)
    u32 r0_66 = Layout__virtual_0(r0_64 - 0x14cu, guest::cpu()->r[1]);  // (from the original)
    u32 r0_68 = Layout__virtual_0(r0_66 - 0x14cu, guest::cpu()->r[1]);  // (from the original)
    u32 r0_70 = ssys__ma__lyt__ArcResAccReader__virtual_0(r0_68 - 0x248u, guest::cpu()->r[1]);  // (from the original)
    u32 r0_71 = r0_70 - 8u;
    ssys__ma__HeapAllocator__virtual_0(r0_71);
    frame.release();
    return MenuBase__virtual_0(r0_71 - 0x50u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_00198d64
GUEST_EXPORT(0x00198d64, d_00198d64::BsMenuEdit__virtual_0_00198d64);

// f_001990f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001990f0 {

inline constexpr guest::Function<0x0026d644, u32(u32, u32)> call_0026d644;
inline constexpr guest::Function<0x002bf9cc, u32(u32, u32, u32, u32)> Pockets__set_slot;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> copy_item_002fc8e8;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> copy_item_002fc934;
inline constexpr guest::Function<0x002fd050, u32(u32, u32)> set_item_number;
inline constexpr guest::Function<0x0030b6b8, u32(u32, u32)> Item__number;
inline constexpr guest::Function<0x00724400, u32(u32, u32)> call_00724400;

struct __attribute__((packed)) Frame_001990f0 {
    u32 word_0;
    u8 unknown_4[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001990f0, word_0, 0x0);
GUEST_SIZE(Frame_001990f0, 0x10);

void f_001990f0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_001990f0> frame;  // the original's stack frame
    u32 r0_1 = get_current_player(r0, r1, r2, r3);
    u32 r0_3 = call_00724400(r0 + 0x1ec0u, r1);  // (from the original)
    copy_item_002fc934(frame.at(4).addr(), r0_3);
    u32 r0_6 = call_00724400(r0 + 0x1ec0u, r2);  // (from the original)
    copy_item_002fc934(frame.at(8).addr(), r0_6);
    u32 r0_9 = Item__number(frame.at(4).addr(), guest::cpu()->r[1]);
    u32 r0_10 = frame.at(4).addr();
    if (!(r0_9 >= 0x20b4u) || (r0_9 == 0x20b4u)) {  // (from the original)
        u32 r0_11 = Item__number(r0_10, 0x20b4u);  // (from the original)
        u32 r0_13 = Item__number(frame.at(8).addr(), guest::cpu()->r[1]);
        u32 r5_2 = r0_11 - 0x20abu + (r0_13 - 0x20abu);  // (from the original)
        if (s32(r5_2) > 0xa) {  // (from the original)
            set_item_number(frame.at(8).addr(), 0x20b5u);  // (from the original)
            set_item_number(frame.at(4).addr(), uxth(r5_2 + 0x20a1u));  // (from the original)
        } else {
            set_item_number(frame.at(8).addr(), uxth(r5_2 + 0x20abu));  // (from the original)
            copy_item_002fc8e8(frame.at(4).addr(), 0x95bfdcu);  // (from the original)
        }
    } else {
        u32 r0_18 = Item__number(r0_10, 0x20b4u);  // (from the original)
        u32 r0_20 = Item__number(frame.at(8).addr(), guest::cpu()->r[1]);
        u32 r5_4 = r0_18 - 0x20b4u + (r0_20 - 0x20b4u);  // (from the original)
        if (s32(r5_4) > 0x63) {  // (from the original)
            set_item_number(frame.at(8).addr(), 0x2117u);  // (from the original)
            set_item_number(frame.at(4).addr(), uxth(r5_4 + 0x2051u));  // (from the original)
        } else {
            set_item_number(frame.at(8).addr(), uxth(r5_4 + 0x20b4u));  // (from the original)
            copy_item_002fc8e8(frame.at(4).addr(), 0x95bfdcu);  // (from the original)
        }
    }
    frame->word_0 = 1;
    Pockets__set_slot(r0_1 + 0x6bd0u, r1, frame.at(4).addr(), 0u);  // (from the original)
    frame->word_0 = 1;
    Pockets__set_slot(r0_1 + 0x6bd0u, r2, frame.at(8).addr(), 0u);  // (from the original)
    call_0026d644(r0 + 0x1ec0u, r1);  // (from the original)
    call_0026d644(r0 + 0x1ec0u, r2);  // (from the original)
}

}  // namespace d_001990f0
GUEST_EXPORT_FRAMED(0x001990f0, d_001990f0::f_001990f0, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00199704: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00199704 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> read_global_byte_2;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> copy_item_002fc934;
inline constexpr guest::Function<0x002fcb34, u32(u32)> Item__category;
inline constexpr guest::Function<0x0030b6b8, u32(u32)> Item__number;
inline constexpr guest::Function<0x00718c0c, u32(u32, u32)> slot_index_is_valid;
inline constexpr guest::Function<0x00724400, u32(u32, u32)> call_00724400;
inline constexpr guest::Function<0x007693d0, u32(u32)> stack_unit_number;
inline constexpr guest::Function<0x0076b9b0, u32(u32)> item_stack_count;

u32 f_00199704(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_15 = 0;
    u32 r5_1 = 0;
    u32 r4_5 = 0;
    u32 r0_1 = read_global_byte_2(r0, r1, r2, guest::cpu()->r[3]);
    if (r0_1 != 0x77u) {  // (from the original)
        u32 r0_3 = slot_index_is_valid(r0 + 0x1ec0u, r1);  // (from the original)
        if (r0_3 != 0) {
            u32 r0_5 = slot_index_is_valid(r0 + 0x1ec0u, r2);  // (from the original)
            if (r0_5 != 0) {
                u32 r0_7 = call_00724400(r0 + 0x1ec0u, r1);  // (from the original)
                copy_item_002fc934(frame.at(0).addr(), r0_7);
                u32 r0_10 = call_00724400(r0 + 0x1ec0u, r2);  // (from the original)
                copy_item_002fc934(frame.at(4).addr(), r0_10);
                u32 r4_1 = frame.at(0).addr();
                u32 r0_12 = Item__category(r4_1);
                if (r0_12 == 0x75u || r0_12 == 0x76u) {  // (from the original)
                    u32 r0_13 = item_stack_count(r4_1);
                    if (r0_13 >= 9u) {
                        return 0u;
                    }
                    goto L_1997c4;
                }
                if (r0_12 == 0x33u || r0_12 == 0x34u) {  // (from the original)
                    goto L_1997c4;
                }
                return 0u;
            }
        }
    }
    return 0u;
L_1997c4:;
    u32 r4_2 = frame.at(4).addr();
    u32 r0_14 = Item__category(r4_2);
    if (r0_14 != 0x75u && r0_14 != 0x76u) {  // (from the original)
        if (r0_14 == 0x33u || r0_14 == 0x34u) {  // (from the original)
            goto L_199800;
        }
        return 0u;
    }
    r0_15 = item_stack_count(r4_2);
    if (r0_15 >= 9u) {
        return 0u;
    }
L_199800:;
    u32 r4_3 = frame.at(0).addr();
    u32 r0_16 = Item__category(r4_3);
    if (r0_16 == 0x33u || r0_16 == 0x34u) {  // (from the original)
        u32 r0_17 = Item__number(r4_3);
        r5_1 = r0_17;
    } else if (r0_16 == 0x75u || r0_16 == 0x76u) {  // (from the original)
        copy_item_002fc934(frame.at(8).addr(), r4_3);
        u32 r0_20 = stack_unit_number(frame.at(8).addr());
        r5_1 = r0_20;
    } else {
        r5_1 = 0x7ffeu;  // (from the original)
    }
    u32 r4_4 = frame.at(4).addr();
    u32 r0_21 = Item__category(r4_4);
    if (r0_21 == 0x33u || r0_21 == 0x34u) {  // (from the original)
        u32 r0_22 = Item__number(r4_4);
        r4_5 = r0_22;
    } else if (r0_21 == 0x75u || r0_21 == 0x76u) {  // (from the original)
        copy_item_002fc934(frame.at(8).addr(), r4_4);
        u32 r0_25 = stack_unit_number(frame.at(8).addr());
        r4_5 = r0_25;
    } else {
        r4_5 = 0x7ffeu;  // (from the original)
    }
    return r5_1 == r4_5;
}

}  // namespace d_00199704
GUEST_EXPORT_FRAMED(0x00199704, d_00199704::f_00199704, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00199928: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00199928 {

struct __attribute__((packed)) Object_00199928_0 {
    u8 unknown_0[0xcc];  // (not used here)
    u32 word_cc;
    u8 unknown_d0[0x5a0];  // (not used here)
    u32 word_670;
    u8 unknown_674[0x1c];  // (not used here)
    u32 word_690;
    u32 word_694;
    u32 word_698;
    u8 unknown_69c[0x3];  // (not used here)
    u8 byte_69f;
};
GUEST_OFFSET(Object_00199928_0, word_cc, 0xcc);
GUEST_OFFSET(Object_00199928_0, word_670, 0x670);
GUEST_OFFSET(Object_00199928_0, word_690, 0x690);
GUEST_OFFSET(Object_00199928_0, word_694, 0x694);
GUEST_OFFSET(Object_00199928_0, word_698, 0x698);
GUEST_OFFSET(Object_00199928_0, byte_69f, 0x69f);

inline constexpr guest::Function<0x0019b288, u32(u32, u32)> script__WordFix_40u___WordFix_0019b288;
inline constexpr guest::Function<0x0019c440, u32(u32, u32)> call_0019c440;
inline constexpr guest::Function<0x0019cfd8, u32(u32, u32)> script__WordFix_33u___WordFix_0019cfd8;
inline constexpr guest::Function<0x0019d500, u32(u32, u32)> call_0019d500;
inline constexpr guest::Function<0x0029b464, u32(u32, u32, u32, u32)> call_child_virtual_60;
inline constexpr guest::Function<0x00718c0c, u32(u32, u32)> slot_index_is_valid;
inline constexpr guest::Function<0x0071af4c, u32(u32, u32)> call_0071af4c;
inline constexpr guest::Function<0x00723f84, u32(u32, u32)> call_00723f84;

struct __attribute__((packed)) Frame_00199928 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Frame_00199928, word_0, 0x0);
GUEST_OFFSET(Frame_00199928, word_4, 0x4);
GUEST_OFFSET(Frame_00199928, word_8, 0x8);
GUEST_SIZE(Frame_00199928, 0xc);

void f_00199928(gptr<Object_00199928_0> arg0) {
    guest::StackFrameOf<Frame_00199928> frame;  // the original's stack frame
    arg0->byte_69f = 1;
    u32 r0_2 = call_child_virtual_60(arg0.addr() + 0xa1b0u, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    arg0->word_670 = r0_2;
    call_0071af4c(arg0.addr() + 0xa1b0u, frame.at(0).addr());  // (from the original)
    arg0->word_690 = frame->word_0;
    arg0->word_694 = frame->word_4;
    arg0->word_698 = frame->word_8;
    u32 r0_4 = slot_index_is_valid(arg0.addr() + 0x1ec0u, arg0->word_cc);  // (from the original)
    u32 r1_3 = arg0->word_cc;
    if (r0_4 != 0) {
        script__WordFix_40u___WordFix_0019b288(arg0.addr(), r1_3);
        return;
    }
    if (r1_3 != 0x11u) {  // (from the original)
        if (r1_3 == 0x10u) {  // (from the original)
            call_0019c440(arg0.addr(), r1_3);
            return;
        }
        u32 r0_5 = *gptr<u32>(arg0.addr() + 0xa328u);  // (from the original)
        if (r0_5 == 0) {
            return;
        }
        u32 r0_6 = call_00723f84(r0_5, r1_3);
        if (r0_6 == 0) {
            return;
        }
        script__WordFix_33u___WordFix_0019cfd8(arg0.addr(), arg0->word_cc);
        return;
    }
    call_0019d500(arg0.addr(), r1_3);
}

}  // namespace d_00199928
GUEST_EXPORT_FRAMED(0x00199928, d_00199928::f_00199928, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0019a938: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0019a938 {

struct __attribute__((packed)) Object_0019a938_0 {
    u8 unknown_0[0xcc];  // (not used here)
    u32 word_cc;
    u8 unknown_d0[0xc];  // (not used here)
    u32 word_dc;
};
GUEST_OFFSET(Object_0019a938_0, word_cc, 0xcc);
GUEST_OFFSET(Object_0019a938_0, word_dc, 0xdc);

inline guest::global<u32, 0x0084a538> global_0084a538;
inline guest::global<u32, 0x0084a53c> global_0084a53c;
inline guest::global<u32, 0x0084a548> global_0084a548;
inline guest::global<u32, 0x0084a54c> global_0084a54c;
inline constexpr guest::Function<0x0026d644, u32(u32, u32)> call_0026d644;
inline constexpr guest::Function<0x002bf9cc, u32(u32, u32, u32, u32)> Pockets__set_slot;
inline constexpr guest::Function<0x002bfcb8, u32(u32, u32)> set_capped_counter;
inline constexpr guest::Function<0x002bfcfc, u32(u32, u32)> Pockets__pay;
inline constexpr guest::Function<0x002fb94c, u32(u32)> get_current_player;
inline constexpr guest::Function<0x00303660, u32(u32)> EncryptedInt__get;
inline constexpr guest::Function<0x00305630, u32(u32)> Item__price;
inline constexpr guest::Function<0x006bba30, u32(u32, u32, u32, u32)> bell_bag_for_amount;
inline constexpr guest::Function<0x00724400, u32(u32, u32, u32, u32)> call_00724400;
inline constexpr guest::Function<0x008165e4, u32(u32, u32, u32)> dispatch_offset_a4_008165e4;

struct __attribute__((packed)) Frame_0019a938 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 word_8;
};
GUEST_OFFSET(Frame_0019a938, word_0, 0x0);
GUEST_OFFSET(Frame_0019a938, word_8, 0x8);
GUEST_SIZE(Frame_0019a938, 0xc);

u32 f_0019a938(gptr<Object_0019a938_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0019a938> frame;  // the original's stack frame
    u32 r0_2 = call_00724400(arg0.addr() + 0x1ec0u, arg0->word_cc, r2, r3);  // (from the original)
    u32 r0_3 = Item__price(r0_2);
    u32 r0_4 = get_current_player(r0_3);
    u32 r0_6 = EncryptedInt__get(r0_4 + 0x6f08u);  // (from the original)
    u32 r0_7 = set_capped_counter(r0_4 + 0x6bd0u, r0_6 + r0_3);  // (from the original)
    if (r0_7 != 0) {
        bell_bag_for_amount(frame.at(4).addr(), r0_7, 1u, frame.at(8).addr());
        u32 r1_6 = frame->word_8;
        if (r0_7 + r1_6 == r0_3) {
            Pockets__pay(r0_4 + 0x6bd0u, r1_6);  // (from the original)
            arg0->word_dc = 0x26;  // (from the original)
            dispatch_offset_a4_008165e4(arg0.addr() + 0xa4u, *global_0084a538, *global_0084a53c);  // (from the original)
            return 0u;
        }
        Pockets__pay(r0_4 + 0x6bd0u, r1_6);  // (from the original)
        frame->word_0 = 1;
        Pockets__set_slot(r0_4 + 0x6bd0u, arg0->word_cc, frame.at(4).addr(), 0u);  // (from the original)
    } else {
        u32 r1_10 = arg0->word_cc;
        frame->word_0 = 1;
        Pockets__set_slot(r0_4 + 0x6bd0u, r1_10, 0x95bfdcu, 0u);  // (from the original)
    }
    call_0026d644(arg0.addr() + 0x1ec0u, arg0->word_cc);  // (from the original)
    dispatch_offset_a4_008165e4(arg0.addr() + 0xa4u, *global_0084a548, *global_0084a54c);  // (from the original)
    return 1u;
}

}  // namespace d_0019a938
GUEST_EXPORT_FRAMED(0x0019a938, d_0019a938::f_0019a938, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0019b14c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0019b14c {

struct __attribute__((packed)) Object_0019b14c_0 {
    u8 unknown_0[0xcc];  // (not used here)
    u32 word_cc;
    u32 word_d0;
    u8 unknown_d4[0xa254];  // (not used here)
    u32 word_a328;
};
GUEST_OFFSET(Object_0019b14c_0, word_cc, 0xcc);
GUEST_OFFSET(Object_0019b14c_0, word_d0, 0xd0);
GUEST_OFFSET(Object_0019b14c_0, word_a328, 0xa328);

struct __attribute__((packed)) Local_0019b14c_r0_3 {
    u8 unknown_0[0x26e];  // (not used here)
    u8 byte_26e;
    u8 byte_26f;
    u8 byte_270;
    u8 byte_271;
    u8 byte_272;
};
GUEST_OFFSET(Local_0019b14c_r0_3, byte_26e, 0x26e);
GUEST_OFFSET(Local_0019b14c_r0_3, byte_26f, 0x26f);
GUEST_OFFSET(Local_0019b14c_r0_3, byte_270, 0x270);
GUEST_OFFSET(Local_0019b14c_r0_3, byte_271, 0x271);
GUEST_OFFSET(Local_0019b14c_r0_3, byte_272, 0x272);

inline constexpr guest::Function<0x002bff84, u32(u32, u32, u32)> call_002bff84;
inline constexpr guest::Function<0x002e354c, u32(u32, u32)> call_002e354c;
inline constexpr guest::Function<0x002f77e8, u32(u32)> same_pointer;
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> copy_item_002fc8e8;
inline constexpr guest::Function<0x002ff368, u32(u32)> call_002ff368;
inline constexpr guest::Function<0x00311c70, u32(u32, u32)> copy_8_bytes_returning_destination;
inline constexpr guest::Function<0x00723f68, u32(u32, u32)> call_00723f68;
inline constexpr guest::Function<0x00723fa0, u32(u32, u32)> call_00723fa0;

struct __attribute__((packed)) Frame_0019b14c {
    u8 unknown_0[0x26e];  // (not read or written by name)
    u8 byte_26e;
    u8 byte_26f;
    u8 byte_270;
    u8 byte_271;
    u8 byte_272;
    u8 unknown_273[0x11];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0019b14c, byte_26e, 0x26e);
GUEST_OFFSET(Frame_0019b14c, byte_26f, 0x26f);
GUEST_OFFSET(Frame_0019b14c, byte_270, 0x270);
GUEST_OFFSET(Frame_0019b14c, byte_271, 0x271);
GUEST_OFFSET(Frame_0019b14c, byte_272, 0x272);
GUEST_SIZE(Frame_0019b14c, 0x284);

void f_0019b14c(gptr<Object_0019b14c_0> arg0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_0019b14c> frame;  // the original's stack frame
    u32 r0_1 = get_current_player(arg0.addr(), r1, r2, guest::cpu()->r[3]);
    u32 r7_1 = arg0.addr() + 0xa000u;  // (from the original)
    gptr<Local_0019b14c_r0_3> r0_3 = gptr<Local_0019b14c_r0_3>(call_00723f68(arg0->word_a328, arg0->word_d0));
    u32 r0_5 = call_00723f68(arg0->word_a328, arg0->word_cc);
    call_002ff368(frame.at(0).addr());
    u32 r6_1 = frame.at(0).addr();
    copy_aligned_bytes(r6_1, r0_3.addr(), 0x31u);  // (from the original)
    copy_aligned_bytes(r6_1 + 0x34u, r0_3.addr() + 0x34u, 0x31u);  // (from the original)
    copy_aligned_bytes(r6_1 + 0x68u, r0_3.addr() + 0x68u, 0x42u);  // (from the original)
    copy_bytes_at_any_alignment(r6_1 + 0xaau, r0_3.addr() + 0xaau, 0x182u);  // (from the original)
    copy_aligned_bytes(r6_1 + 0x22cu, r0_3.addr() + 0x22cu, 0x42u);  // (from the original)
    frame->byte_26e = r0_3->byte_26e;
    frame->byte_26f = r0_3->byte_26f;
    frame->byte_270 = r0_3->byte_270;
    frame->byte_271 = r0_3->byte_271;
    frame->byte_272 = r0_3->byte_272;
    copy_item_002fc8e8(r6_1 + 0x274u, r0_3.addr() + 0x274u);  // (from the original)
    copy_8_bytes_returning_destination(r6_1 + 0x278u, r0_3.addr() + 0x278u);  // (from the original)
    u32 r0_14 = call_00723fa0(arg0->word_a328, arg0->word_d0);
    call_002bff84(r0_1 + 0x7008u, r0_14, r0_5);  // (from the original)
    u32 r0_16 = call_00723fa0(arg0->word_a328, arg0->word_cc);
    call_002bff84(r0_1 + 0x7008u, r0_16, frame.at(0).addr());  // (from the original)
    call_002e354c(arg0->word_a328, arg0->word_d0);
    u32 r1_13 = arg0->word_cc;
    u32 r0_18 = arg0->word_a328;
    call_002e354c(r0_18, r1_13);
    same_pointer(r0_18);
}

}  // namespace d_0019b14c
GUEST_EXPORT_FRAMED(0x0019b14c, d_0019b14c::f_0019b14c, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0019c440: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0019c440 {

struct __attribute__((packed)) Object_0019c440_0 {
    u8 unknown_0[0x69e];  // (not used here)
    u8 byte_69e;
};
GUEST_OFFSET(Object_0019c440_0, byte_69e, 0x69e);

struct __attribute__((packed)) Local_0019c440_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0019c440_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0019c440_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_0019c440_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0019c440_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_0019c440_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_0019c440_r4_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0019c440_r4_2, word_0, 0x0);
GUEST_OFFSET(Local_0019c440_r4_2, word_4, 0x4);

struct __attribute__((packed)) Local_0019c440_r6_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0019c440_r6_1, word_0, 0x0);
GUEST_OFFSET(Local_0019c440_r6_1, word_4, 0x4);
GUEST_OFFSET(Local_0019c440_r6_1, word_8, 0x8);

inline guest::global<u32, 0x0084a878> global_0084a878;
inline guest::global<u32, 0x0084a87c> global_0084a87c;
inline guest::global<u32, 0x0084a880> global_0084a880;
inline constexpr guest::Function<0x002b9aa4, u32(u32, u32)> call_002b9aa4;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002fb94c, u32(u32)> get_current_player;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x00303660, u32(u32)> EncryptedInt__get;
inline constexpr guest::Function<0x005d4a78, u32(u32, u32, u32, u32)> call_005d4a78;
inline constexpr guest::Function<0x005e34c4, u32(u32, u32, u32, u32)> call_005e34c4;
inline constexpr guest::Function<0x005e4988, u32(u32, u32, u32, u32)> store_byte_constant_pack_0x4_005e4988;
inline constexpr guest::Function<0x005e4994, u32(u32, u32, u32, u32)> script__CapitalTopEngine__CapitalTopEngine_005e4994;
inline constexpr guest::Function<0x005e49c0, u32(u32, u32, u32)> call_005e49c0;
inline constexpr guest::Function<0x0068f114, u32(u32, u32, u32, u32)> call_0068f114;

struct __attribute__((packed)) Frame_0019c440 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0xd0];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0019c440, word_0, 0x0);
GUEST_OFFSET(Frame_0019c440, word_4, 0x4);
GUEST_OFFSET(Frame_0019c440, word_8, 0x8);
GUEST_SIZE(Frame_0019c440, 0xdc);

void f_0019c440(gptr<Object_0019c440_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0019c440> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r5 = r0;
    call_0068f114(r0, r1, r2, r3);
    call_002b9aa4(r5 + 0x1bcu, 0u);  // (from the original)
    arg0->byte_69e = 0;
    gptr<Local_0019c440_r6_1> r6_1 = gptr<Local_0019c440_r6_1>(frame.at(0xd0).addr());  // (from the original)
    u32 r1_1 = *global_0084a87c;
    u32 r2_2 = *global_0084a880;
    u32 r4_1 = 0u;
    r6_1->word_0 = *global_0084a878;
    r6_1->word_4 = r1_1;
    r6_1->word_8 = r2_2;
    u32 r0_3 = for_each_element(frame.at(0x10).addr(), 0x5e35dcu, 0x20u, 6u);  // (from the original)
    u32 r0_4 = get_current_player(r0_3);
    u32 r0_6 = EncryptedInt__get(r0_4 + 0x6f08u);  // (from the original)
    u32 r7 = frame.at(0x10).addr();  // (from the original)
    if (s32(r0_6) >= 0x64) {  // (from the original)
        gptr<Local_0019c440_r4_2> r4_2 = gptr<Local_0019c440_r4_2>(frame.at(4).addr());
        frame->word_0 = 0;
        r4_2->word_0 = 0x1e;  // (from the original)
        r4_2->word_4 = 7;
        call_005e34c4(r7, frame.at(0xd0).addr(), 0xe5u, 0u);  // (from the original)
        frame->word_0 = 0;
        r4_2->word_0 = 0x1f;  // (from the original)
        r4_2->word_4 = 7;
        call_005e34c4(r7 + 0x20u, frame.at(0xd0).addr(), 0xe6u, 0u);  // (from the original)
        r4_1 = 2u;
    }
    if (s32(r0_6) >= 0x3e8) {  // (from the original)
        frame->word_0 = 0;
        gptr<Local_0019c440_ea_2> ea_2 = gptr<Local_0019c440_ea_2>(frame.at(4).addr());
        ea_2->word_0 = 0x20;  // (from the original)
        ea_2->word_4 = 7;
        call_005e34c4(r7 + (r4_1 << 5), frame.at(0xd0).addr(), 0xe7u, 0u);  // (from the original)
        r4_1 += 1u;
    }
    if (s32(r0_6) >= s32(0x2710u)) {  // (from the original)
        frame->word_0 = 0;
        gptr<Local_0019c440_ea_4> ea_4 = gptr<Local_0019c440_ea_4>(frame.at(4).addr());
        ea_4->word_0 = 0x21;  // (from the original)
        ea_4->word_4 = 7;
        call_005e34c4(r7 + (r4_1 << 5), frame.at(0xd0).addr(), 0xe8u, 0u);  // (from the original)
        r4_1 += 1u;
    }
    frame->word_8 = 1;
    frame->word_4 = 0x29;  // (from the original)
    frame->word_0 = 0;
    call_005e34c4(r7 + (r4_1 << 5), frame.at(0xd0).addr(), 0xbu, 0u);  // (from the original)
    u32 r6 = r4_1 + 1u;
    call_005e49c0(r5 + 0xe0u, r6, r4_1);  // (from the original)
    r3 = guest::cpu()->r[3];
    u32 r4 = 0u;
    if (s32(r6) > 0) {
        do {
            script__CapitalTopEngine__CapitalTopEngine_005e4994(r5 + 0xe0u, r4, r7 + (r4 << 5), r3);  // (from the original)
            r3 = guest::cpu()->r[3];
            r4 += 1u;
            guest::preempt();
        } while (s32(r6) > s32(r4));
    }
    store_byte_constant_pack_0x4_005e4988(r5 + 0xe0u, guest::cpu()->r[1], guest::cpu()->r[2], r3);  // (from the original)
    call_005d4a78(r5 + 0xe0u, 0u, 0u, 0u);  // (from the original)
    destroy_array_elements(frame.at(0x10).addr(), 0x5e3618u, 0x20u, 6u);  // (from the original)
}

}  // namespace d_0019c440
GUEST_EXPORT_FRAMED(0x0019c440, d_0019c440::f_0019c440, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original
