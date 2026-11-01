// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_002a2850: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a2850 {

inline constexpr guest::Function<0x001323bc, u32(u32)> call_001323bc;
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> call_00569e6c;

u32 f_002a2850(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_001323bc(r0);
    frame.release();
    return call_00569e6c(r0_1, r0 + 0x24u, 0u);  // (from the original)
}

}  // namespace d_002a2850
GUEST_EXPORT(0x002a2850, d_002a2850::f_002a2850);

// f_002a2ad0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a2ad0 {

inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> call_001323b4;

u32 f_002a2ad0(u32 r0) {
    return call_001323b4(r0 + 0x24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_002a2ad0
GUEST_EXPORT(0x002a2ad0, d_002a2ad0::f_002a2ad0);

// f_002a324c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a324c {

struct __attribute__((packed)) Object_002a324c_0 {
    u8 unknown_0[0x60];  // (not used here)
    u32 word_60;
};
GUEST_OFFSET(Object_002a324c_0, word_60, 0x60);


u32 f_002a324c(gptr<Object_002a324c_0> r0, u32 r1, u32 r2) {
    u32 r5 = 0xffu;  // (from the original)
    u32 r12 = ~0u;
    u32 r3 = 0u;
    do {
        u32 r4_1 = r0.addr() + 0x10u;  // (from the original)
        if (r3 < 0xau) {  // (from the original)
            r4_1 += (r3 << 3);
        }
        if (*gptr<u32>(r4_1) + 1u == 0) {
            u32 r12_1 = r0.addr() + 0x10u;  // (from the original)
            if (r3 < 0xau) {  // (from the original)
                r12_1 += (r3 << 3);
            }
            *gptr<u32>(r12_1) = r1;
            u32 r1_1 = r0.addr() + 0x10u;  // (from the original)
            if (r3 < 0xau) {  // (from the original)
                r1_1 += (r3 << 3);
            }
            *gptr<u8>(r1_1 + 4u) = u8(r2);
            u32 r1_2 = r0->word_60 + 1u;
            r0->word_60 = r1_2;
            guest::cpu()->r[1] = r1_2;
            return r0.addr();
        }
        u32 r4_2 = r0.addr() + 0x10u;  // (from the original)
        if (r3 < 0xau) {  // (from the original)
            r4_2 += (r3 << 3);
        }
        if (*gptr<u8>(r4_2 + 4u) < r5) {
            u32 r4_3 = r0.addr() + 0x10u;  // (from the original)
            if (r3 < 0xau) {  // (from the original)
                r4_3 += (r3 << 3);
            }
            r12 = r3;
            r5 = *gptr<u8>(r4_3 + 4u);
        }
        r3 += 1u;
        guest::preempt();
    } while (s32(r3) < 0xa);  // (from the original)
    u32 r3_1 = r0.addr() + 0x10u;  // (from the original)
    if (r12 < 0xau) {  // (from the original)
        r3_1 += (r12 << 3);
    }
    u32 r0_1 = r0.addr() + 0x10u;  // (from the original)
    if (r12 < 0xau) {  // (from the original)
        r0_1 += (r12 << 3);
    }
    *gptr<u32>(r3_1) = r1;
    *gptr<u8>(r0_1 + 4u) = u8(r2);
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_002a324c
GUEST_EXPORT_FRAMED(0x002a324c, d_002a324c::f_002a324c, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_002a3e08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a3e08 {

struct __attribute__((packed)) Object_002a3e08_0 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Object_002a3e08_0, word_14, 0x14);
GUEST_OFFSET(Object_002a3e08_0, word_18, 0x18);
GUEST_OFFSET(Object_002a3e08_0, word_1c, 0x1c);

struct __attribute__((packed)) Local_002a3e08_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002a3e08_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_002a3e08_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_002a3e08_ea_8 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_002a3e08_ea_8, byte_0, 0x0);
GUEST_OFFSET(Local_002a3e08_ea_8, word_4, 0x4);
GUEST_OFFSET(Local_002a3e08_ea_8, word_8, 0x8);

struct __attribute__((packed)) Local_002a3e08_r1_3 {
    u8 unknown_0[0x98];  // (not used here)
    u32 word_98;
    u8 byte_9c;
    u8 unknown_9d[0x7];  // (not used here)
    u32 word_a4;
};
GUEST_OFFSET(Local_002a3e08_r1_3, word_98, 0x98);
GUEST_OFFSET(Local_002a3e08_r1_3, byte_9c, 0x9c);
GUEST_OFFSET(Local_002a3e08_r1_3, word_a4, 0xa4);

inline guest::global<u32, 0x0094d004> global_0094d004;
inline guest::global<u32, 0x0094d080> global_0094d080;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;
inline constexpr guest::Function<0x004c5104, u32(u32, u32)> call_004c5104;
inline constexpr guest::Function<0x006b4170, u32(u32, u32, u32)> call_006b4170;
inline constexpr guest::Function<0x006b41a4, u32(u32, u32, u32, u32)> call_006b41a4;
inline constexpr guest::Function<0x0070eb14, u32(u32, u32, u32, u32)> call_0070eb14;

struct __attribute__((packed)) Frame_002a3e08 {
    u32 word_0;
    u8 byte_4;
    u8 unknown_5[0x3];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0xc];  // (not read or written by name)
    u32 word_18;
    u8 unknown_1c[0x8];  // (not read or written by name)
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u32 word_30;
    u32 word_34;
    u32 word_38;
    u32 word_3c;
    u32 word_40;
    u32 word_44;
    u16 half_48;
    u16 half_4a;
    u8 unknown_4c[0x5c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002a3e08, word_0, 0x0);
GUEST_OFFSET(Frame_002a3e08, byte_4, 0x4);
GUEST_OFFSET(Frame_002a3e08, word_8, 0x8);
GUEST_OFFSET(Frame_002a3e08, word_18, 0x18);
GUEST_OFFSET(Frame_002a3e08, word_24, 0x24);
GUEST_OFFSET(Frame_002a3e08, word_28, 0x28);
GUEST_OFFSET(Frame_002a3e08, word_2c, 0x2c);
GUEST_OFFSET(Frame_002a3e08, word_30, 0x30);
GUEST_OFFSET(Frame_002a3e08, word_34, 0x34);
GUEST_OFFSET(Frame_002a3e08, word_38, 0x38);
GUEST_OFFSET(Frame_002a3e08, word_3c, 0x3c);
GUEST_OFFSET(Frame_002a3e08, word_40, 0x40);
GUEST_OFFSET(Frame_002a3e08, word_44, 0x44);
GUEST_OFFSET(Frame_002a3e08, half_48, 0x48);
GUEST_OFFSET(Frame_002a3e08, half_4a, 0x4a);
GUEST_SIZE(Frame_002a3e08, 0xa8);

u32 f_002a3e08(gptr<Object_002a3e08_0> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrameOf<Frame_002a3e08> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_7 = 0;
    u32 r1_5 = 0;
    float S0_3 = 0;
    u32 r2_2 = 0;
    u32 r0_8 = 0;
    u32 r1_6 = 0;
    if (r1 != 0) {
        u32 r1_1 = arg0->word_14;
        u32 r0_1 = *global_0094d004;
        u32 r0_2 = call_0070eb14(r0_1, r1_1, r2, r3);
        u32 r7_1 = ~0u;
        if (r0_2 > r1) {
            frame->word_0 = 0;
            frame->word_18 = 0;
            gptr<Local_002a3e08_ea_3> ea_3 = gptr<Local_002a3e08_ea_3>(frame.at(0x1c).addr());  // (from the original)
            ea_3->word_0 = 0;
            ea_3->word_4 = r7_1;
            frame->word_34 = 0;
            frame->word_24 = r7_1;
            frame->word_28 = r7_1;
            frame->word_30 = 0;
            frame->word_2c = r7_1;
            frame->half_48 = 0;
            frame->word_38 = 0;
            frame->word_3c = 0;
            frame->word_40 = 0;
            frame->word_44 = 0;
            frame->half_4a = 0;
            u32 r0_4 = call_00301d0c(frame.at(0x4c).addr(), 0x4bfb50u, 0xdu, 4u);  // (from the original)
            u32 r0_5 = r0_4 - 4u;
            float S0_2 = 1.0f;
            *gptr<u32>(r0_5 + 0x38u) = std::bit_cast<u32>(S0_2);  // (from the original)
            *gptr<u8>(r0_5 + 0x3cu) = 0x7f;  // (from the original)
            *gptr<u8>(r0_5 + 0x3fu) = 0;  // (from the original)
            *gptr<u32>(r0_5 + 0x40u) = r7_1;  // (from the original)
            gptr<Local_002a3e08_r1_3> r1_3 = gptr<Local_002a3e08_r1_3>(r0_5 - 0x48u);  // (from the original)
            *gptr<u16>(r0_5 + 0x3du) = 0;  // (from the original)
            gptr<Local_002a3e08_ea_8> ea_8 = gptr<Local_002a3e08_ea_8>(r0_5 + 0x44u);  // (from the original)
            ea_8->byte_0 = 0;
            ea_8->word_4 = 0;
            ea_8->word_8 = 0;
            r1_3->word_98 = 0;
            r1_3->byte_9c = 0;
            r1_3->word_a4 = 0;
            frame->word_0 = 1;
            frame->byte_4 = 1;
            frame->word_8 = r1;
            u32 r2_1 = arg0->word_18;
            u32 r0_6 = *global_0094d080;
            guest::cpu()->s[0] = S0_2;
            r0_7 = call_006b41a4(r0_6, r0 + 0x1cu, r2_1, frame.at(0).addr());  // (from the original)
            r1_5 = guest::cpu()->r[1];
            S0_3 = guest::cpu()->s[0];
            goto L_2a3f20;
        }
        arg0->word_14 = r7_1;
        arg0->word_18 = r7_1;
        return 0u;
    }
    r2_2 = arg0->word_18;
    r0_8 = *global_0094d080;
    r1_6 = r0 + 0x1cu;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0_7 = call_006b4170(r0_8, r1_6, r2_2);
    r1_5 = guest::cpu()->r[1];
    S0_3 = guest::cpu()->s[0];
L_2a3f20:;
    if (r0_7 != 0) {
        u32 r0_9 = arg0->word_1c;
        r1_5 = 0u;
        S0_3 = 0.4f;
        if (r0_9 != 0) {
            guest::cpu()->s[0] = S0_3;
            call_004c5104(r0_9, r1_5);
            r1_5 = guest::cpu()->r[1];
            S0_3 = guest::cpu()->s[0];
        }
    }
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->s[0] = S0_3;
    return r0_7;
}

}  // namespace d_002a3e08
GUEST_EXPORT_FRAMED(0x002a3e08, d_002a3e08::f_002a3e08, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_002a4abc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a4abc {

struct __attribute__((packed)) Object_002a4abc_0 {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
    u8 unknown_11[0x3];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u32 word_30;
    u8 unknown_34[0x5cc];  // (not used here)
    u32 word_600;
    u32 word_604;
    u32 word_608;
    u32 word_60c;
    u8 unknown_610[0x1c98];  // (not used here)
    u16 half_22a8;
    u16 half_22aa;
    u16 half_22ac;
    u16 half_22ae;
    u16 half_22b0;
    u16 half_22b2;
    u32 word_22b4;
    u32 word_22b8;
    u32 word_22bc;
    u32 word_22c0;
    u8 unknown_22c4[0xf0];  // (not used here)
    float float_23b4;
    float float_23b8;
    float float_23bc;
    u8 byte_23c0;
    u8 byte_23c1;
    u8 unknown_23c2[0x2];  // (not used here)
    u32 word_23c4;
};
GUEST_OFFSET(Object_002a4abc_0, byte_10, 0x10);
GUEST_OFFSET(Object_002a4abc_0, word_14, 0x14);
GUEST_OFFSET(Object_002a4abc_0, word_18, 0x18);
GUEST_OFFSET(Object_002a4abc_0, word_1c, 0x1c);
GUEST_OFFSET(Object_002a4abc_0, word_20, 0x20);
GUEST_OFFSET(Object_002a4abc_0, word_24, 0x24);
GUEST_OFFSET(Object_002a4abc_0, word_28, 0x28);
GUEST_OFFSET(Object_002a4abc_0, word_2c, 0x2c);
GUEST_OFFSET(Object_002a4abc_0, word_30, 0x30);
GUEST_OFFSET(Object_002a4abc_0, word_600, 0x600);
GUEST_OFFSET(Object_002a4abc_0, word_604, 0x604);
GUEST_OFFSET(Object_002a4abc_0, word_608, 0x608);
GUEST_OFFSET(Object_002a4abc_0, word_60c, 0x60c);
GUEST_OFFSET(Object_002a4abc_0, half_22a8, 0x22a8);
GUEST_OFFSET(Object_002a4abc_0, half_22aa, 0x22aa);
GUEST_OFFSET(Object_002a4abc_0, half_22ac, 0x22ac);
GUEST_OFFSET(Object_002a4abc_0, half_22ae, 0x22ae);
GUEST_OFFSET(Object_002a4abc_0, half_22b0, 0x22b0);
GUEST_OFFSET(Object_002a4abc_0, half_22b2, 0x22b2);
GUEST_OFFSET(Object_002a4abc_0, word_22b4, 0x22b4);
GUEST_OFFSET(Object_002a4abc_0, word_22b8, 0x22b8);
GUEST_OFFSET(Object_002a4abc_0, word_22bc, 0x22bc);
GUEST_OFFSET(Object_002a4abc_0, word_22c0, 0x22c0);
GUEST_OFFSET(Object_002a4abc_0, float_23b4, 0x23b4);
GUEST_OFFSET(Object_002a4abc_0, float_23b8, 0x23b8);
GUEST_OFFSET(Object_002a4abc_0, float_23bc, 0x23bc);
GUEST_OFFSET(Object_002a4abc_0, byte_23c0, 0x23c0);
GUEST_OFFSET(Object_002a4abc_0, byte_23c1, 0x23c1);
GUEST_OFFSET(Object_002a4abc_0, word_23c4, 0x23c4);


u32 f_002a4abc(gptr<Object_002a4abc_0> arg0) {
    u32 r3_1 = ~0u;
    arg0->byte_10 = 0;
    arg0->word_14 = r3_1;
    arg0->word_1c = 0;
    arg0->word_20 = 0x78;  // (from the original)
    arg0->word_18 = r3_1;
    arg0->word_24 = 0;
    arg0->word_28 = 0;
    arg0->word_2c = 0;
    arg0->word_30 = 0;
    u32 ea_1 = arg0.addr() + 0x600u;  // (from the original)
    arg0->word_600 = 0;
    arg0->word_604 = 0;
    arg0->word_608 = 0;
    u32 res_1 = ea_1 + 0x10u;  // (from the original)
    arg0->word_60c = 0;
    if (res_1 != 0) {
        arg0->word_600 = res_1;
        arg0->word_604 = 0x262;  // (from the original)
    }
    arg0->half_22a8 = u16(r3_1);
    arg0->half_22aa = u16(r3_1);
    arg0->half_22ac = 0;
    arg0->half_22ae = u16(r3_1);
    arg0->half_22b0 = u16(r3_1);
    u32 r0_1 = ea_1 + 0x1cb4u;  // (from the original)
    arg0->half_22b2 = 4;
    arg0->word_22b4 = 0;
    arg0->word_22b8 = 0;
    arg0->word_22bc = 0;
    u32 res_2 = r0_1 + 0x10u;  // (from the original)
    arg0->word_22c0 = 0;
    if (res_2 != 0) {
        arg0->word_22b4 = res_2;
        arg0->word_22b8 = 0x14;  // (from the original)
    }
    float S0_1 = 0.0f;
    arg0->float_23b4 = S0_1;
    arg0->float_23b8 = S0_1;
    arg0->float_23bc = S0_1;
    arg0->byte_23c0 = 0;
    arg0->byte_23c1 = 1;
    arg0->word_23c4 = 0;
    guest::cpu()->r[1] = 0u;
    guest::cpu()->s[0] = S0_1;
    return r0_1 - 0x22b4u;  // (from the original)
}

}  // namespace d_002a4abc
GUEST_EXPORT(0x002a4abc, d_002a4abc::f_002a4abc);

// f_002a4b84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a4b84 {

struct __attribute__((packed)) Object_002a4b84_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_002a4b84_0, word_0, 0x0);

inline guest::global<u32, 0x0094d548> global_0094d548;

void f_002a4b84(gptr<Object_002a4b84_0> arg0) {
    u32 r1_1 = *global_0094d548;
    arg0->word_0 = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_002a4b84
GUEST_EXPORT(0x002a4b84, d_002a4b84::f_002a4b84);

// f_002a4b98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a4b98 {

inline guest::global<u32, 0x0094d560> global_0094d560;
inline constexpr guest::Function<0x002783c4, u32(u32, u32, u32, u32)> call_002783c4;
inline constexpr guest::Function<0x00278484, u32(u32, u32, u32, u32)> call_00278484;

struct __attribute__((packed)) Frame_002a4b98 {
    u32 word_0;
};
GUEST_OFFSET(Frame_002a4b98, word_0, 0x0);
GUEST_SIZE(Frame_002a4b98, 0x4);

void f_002a4b98(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_002a4b98> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r5_1 = *global_0094d560;
    if (r5_1 != 0) {
        call_002783c4(r5_1, r1, r2, r3);
        frame->word_0 = 0x46;  // (from the original)
        call_00278484(r5_1, r0 + 0xd4u, 0xfu, 0x20u);  // (from the original)
        frame->word_0 = 0x46;  // (from the original)
        call_00278484(r5_1, r0 + 0x304u, 0xfu, 0x21u);  // (from the original)
        r1 = guest::cpu()->r[1];
        *gptr<u8>(r0 + 0x534u) = 1;  // (from the original)
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_002a4b98
GUEST_EXPORT_FRAMED(0x002a4b98, d_002a4b98::f_002a4b98, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_002a4bfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a4bfc {

struct __attribute__((packed)) Object_002a4bfc_0 {
    u8 unknown_0[0x53c];  // (not used here)
    u32 word_53c;
    u32 word_540;
    u8 unknown_544[0x1];  // (not used here)
    u8 byte_545;
    u8 unknown_546[0x2];  // (not used here)
    u32 word_548;
};
GUEST_OFFSET(Object_002a4bfc_0, word_53c, 0x53c);
GUEST_OFFSET(Object_002a4bfc_0, word_540, 0x540);
GUEST_OFFSET(Object_002a4bfc_0, byte_545, 0x545);
GUEST_OFFSET(Object_002a4bfc_0, word_548, 0x548);


void f_002a4bfc(gptr<Object_002a4bfc_0> arg0) {
    arg0->word_540 = 0;
    arg0->word_53c = arg0->word_53c + 1u;
    if (arg0->byte_545 == 1u && arg0->word_548 == 0) {
        arg0->word_548 = 0x78;  // (from the original)
    } else {
        return;
    }
}

}  // namespace d_002a4bfc
GUEST_EXPORT(0x002a4bfc, d_002a4bfc::f_002a4bfc);

// f_002a4c30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a4c30 {

struct __attribute__((packed)) Object_002a4c30_0 {
    u8 unknown_0[0xc4];  // (not used here)
    u32 word_c4;
};
GUEST_OFFSET(Object_002a4c30_0, word_c4, 0xc4);

struct __attribute__((packed)) Local_002a4c30_r1_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Local_002a4c30_r1_1, word_4, 0x4);


void f_002a4c30(gptr<Object_002a4c30_0> arg0, u32 r1) {
    if (r1 >= 0x30u) {  // (from the original)
        return;
    }
    gptr<Local_002a4c30_r1_1> r1_1 = gptr<Local_002a4c30_r1_1>(arg0.addr() + (r1 << 2));
    if (r1_1->word_4 == 0) {
        return;
    }
    r1_1->word_4 = 0;
    arg0->word_c4 = arg0->word_c4 - 1u;
}

}  // namespace d_002a4c30
GUEST_EXPORT(0x002a4c30, d_002a4c30::f_002a4c30);

// f_002a4c60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a4c60 {

struct __attribute__((packed)) Object_002a4c60_0 {
    u8 unknown_0[0x538];  // (not used here)
    u32 word_538;
    u32 word_53c;
    u32 word_540;
    u8 byte_544;
    u8 byte_545;
    u8 unknown_546[0x2];  // (not used here)
    u32 word_548;
};
GUEST_OFFSET(Object_002a4c60_0, word_538, 0x538);
GUEST_OFFSET(Object_002a4c60_0, word_53c, 0x53c);
GUEST_OFFSET(Object_002a4c60_0, word_540, 0x540);
GUEST_OFFSET(Object_002a4c60_0, byte_544, 0x544);
GUEST_OFFSET(Object_002a4c60_0, byte_545, 0x545);
GUEST_OFFSET(Object_002a4c60_0, word_548, 0x548);


void f_002a4c60(gptr<Object_002a4c60_0> arg0) {
    u32 r2_1 = arg0->word_540 + 1u;
    arg0->word_540 = r2_1;
    u32 r5_1 = arg0->word_538 + 1u;
    arg0->word_538 = r5_1;
    if (arg0->byte_544 != 0) {
        if (r2_1 >= 0x78u) {  // (from the original)
            arg0->byte_544 = 0;
            arg0->byte_545 = 0;
            arg0->word_548 = 0;
            arg0->word_538 = 0;
            arg0->word_53c = 0;
        } else if (r2_1 >= 0x1eu) {  // (from the original)
            arg0->byte_545 = 1;
        }
    } else if (r2_1 >= 0x5au) {  // (from the original)
        arg0->word_538 = 0;
        arg0->word_53c = 0;
    } else if (r5_1 >= 0x78u && r2_1 < 0x1eu) {  // (from the original)
        arg0->byte_544 = 1;
        arg0->word_540 = 0;
    }
    u32 r2_2 = *gptr<u8>((arg0.addr() + 0x500u) + 0x45u);  // (from the original)
    u32 zf_1 = r2_2 == 0;
    if (!zf_1) {
        r2_2 = arg0->word_548;
        zf_1 = r2_2 == 0;
    }
    if (!zf_1) {
        u32 res_1 = r2_2 - 1u;
        *gptr<u32>(arg0.addr() + 0x548u) = res_1;  // (from the original)
        if (res_1 == 0) {
            arg0->byte_545 = 0;
        }
    }
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_002a4c60
GUEST_EXPORT_FRAMED(0x002a4c60, d_002a4c60::f_002a4c60, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_002a502c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a502c {

struct __attribute__((packed)) Object_002a502c_0 {
    u8 unknown_0[0xc4];  // (not used here)
    u32 word_c4;
};
GUEST_OFFSET(Object_002a502c_0, word_c4, 0xc4);


u32 f_002a502c(gptr<Object_002a502c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = r0;
    r0 = arg0->word_c4;
    u32 zf_1 = r0 == 0x30u;  // (from the original)
    u32 cf_1 = r0 >= 0x30u;  // (from the original)
    if (r0 > 0x30u) {  // (from the original)
        r0 = 0x31u;  // (from the original)
    }
    if (!cf_1 || zf_1) {
        r0 = 0u;
    }
    if (cf_1 && !zf_1) {
        return r0;
    }
    do {
        if (*gptr<u32>(r2 + (r0 << 2) + 4u) == 0) {
            *gptr<u32>(r2 + (r0 << 2) + 4u) = r1;
            u32 r1_1 = *gptr<u32>(r2 + 0xc4u) + 1u;  // (from the original)
            *gptr<u32>(r2 + 0xc4u) = r1_1;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            return r0;
        }
        r0 += 1u;
        guest::preempt();
    } while (r0 < 0x30u);  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_002a502c
GUEST_EXPORT(0x002a502c, d_002a502c::f_002a502c);

// f_002a5080: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a5080 {

struct __attribute__((packed)) Object_002a5080_0 {
    u32 word_0;
    u8 unknown_4[0xc0];  // (not used here)
    u32 word_c4;
    u32 word_c8;
    u16 half_cc;
    u16 half_ce;
    u16 half_d0;
    u8 byte_d2;
    u8 unknown_d3[0x461];  // (not used here)
    u8 byte_534;
    u8 unknown_535[0x3];  // (not used here)
    u32 word_538;
    u32 word_53c;
    u32 word_540;
    u8 byte_544;
    u8 byte_545;
    u8 unknown_546[0x2];  // (not used here)
    u32 word_548;
    u16 half_54c;
    u16 half_54e;
};
GUEST_OFFSET(Object_002a5080_0, word_0, 0x0);
GUEST_OFFSET(Object_002a5080_0, word_c4, 0xc4);
GUEST_OFFSET(Object_002a5080_0, word_c8, 0xc8);
GUEST_OFFSET(Object_002a5080_0, half_cc, 0xcc);
GUEST_OFFSET(Object_002a5080_0, half_ce, 0xce);
GUEST_OFFSET(Object_002a5080_0, half_d0, 0xd0);
GUEST_OFFSET(Object_002a5080_0, byte_d2, 0xd2);
GUEST_OFFSET(Object_002a5080_0, byte_534, 0x534);
GUEST_OFFSET(Object_002a5080_0, word_538, 0x538);
GUEST_OFFSET(Object_002a5080_0, word_53c, 0x53c);
GUEST_OFFSET(Object_002a5080_0, word_540, 0x540);
GUEST_OFFSET(Object_002a5080_0, byte_544, 0x544);
GUEST_OFFSET(Object_002a5080_0, byte_545, 0x545);
GUEST_OFFSET(Object_002a5080_0, word_548, 0x548);
GUEST_OFFSET(Object_002a5080_0, half_54c, 0x54c);
GUEST_OFFSET(Object_002a5080_0, half_54e, 0x54e);


void f_002a5080(gptr<Object_002a5080_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0u;
    arg0->word_0 = r1;
    arg0->word_c4 = r1;
    arg0->word_c8 = r1;
    arg0->half_cc = u16(r1);
    arg0->half_ce = 1;
    arg0->half_d0 = u16(r1);
    arg0->byte_d2 = u8(r1);
    arg0->byte_534 = u8(r1);
    arg0->word_538 = r1;
    arg0->word_53c = r1;
    arg0->word_540 = r1;
    arg0->byte_544 = u8(r1);
    arg0->byte_545 = u8(r1);
    arg0->word_548 = r1;
    arg0->half_54c = u16(r1);
    u32 r3 = 0u;
    arg0->half_54e = u16(r1);
    u32 r2 = r3;
    do {
        u32 r3_1 = r3 + 1u;
        r2 += 2u;
        *gptr<u32>((r0 + (r3 << 2)) + 4u) = r1;
        r3 = r3_1 + 1u;
        *gptr<u32>((r0 + (r3_1 << 2)) + 4u) = r1;
        guest::preempt();
    } while (r2 < 0x30u);  // (from the original)
}

}  // namespace d_002a5080
GUEST_EXPORT_FRAMED(0x002a5080, d_002a5080::f_002a5080, 0x10);  // pushes {r4} first, as the original

// f_002a5fa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a5fa8 {

struct __attribute__((packed)) Object_002a5fa8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_002a5fa8_0, word_0, 0x0);


void f_002a5fa8(gptr<Object_002a5fa8_0> arg0, u32 r1) {
    if (arg0->word_0 == 0) {
        arg0->word_0 = r1;
    }
}

}  // namespace d_002a5fa8
GUEST_EXPORT(0x002a5fa8, d_002a5fa8::f_002a5fa8);

// f_002a6594: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a6594 {

struct __attribute__((packed)) Object_002a6594_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_002a6594_0, word_0, 0x0);


void f_002a6594(gptr<Object_002a6594_0> arg0) {
    u32 r1_1 = arg0->word_0;
    if (r1_1 != 0) {
        r1_1 = 0u;
        arg0->word_0 = r1_1;
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_002a6594
GUEST_EXPORT(0x002a6594, d_002a6594::f_002a6594);

// f_002a65d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a65d0 {

struct __attribute__((packed)) Object_002a65d0_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 unknown_9[0x3];  // (not used here)
    u32 word_c;
    u8 byte_10;
    u8 byte_11;
    u8 unknown_12[0x2];  // (not used here)
    float float_14;
};
GUEST_OFFSET(Object_002a65d0_0, word_0, 0x0);
GUEST_OFFSET(Object_002a65d0_0, word_4, 0x4);
GUEST_OFFSET(Object_002a65d0_0, byte_8, 0x8);
GUEST_OFFSET(Object_002a65d0_0, word_c, 0xc);
GUEST_OFFSET(Object_002a65d0_0, byte_10, 0x10);
GUEST_OFFSET(Object_002a65d0_0, byte_11, 0x11);
GUEST_OFFSET(Object_002a65d0_0, float_14, 0x14);


void f_002a65d0(gptr<Object_002a65d0_0> arg0) {
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    arg0->byte_8 = 0;
    arg0->word_c = 1;
    float S0_1 = 0.0f;
    arg0->byte_10 = 0;
    arg0->byte_11 = 0;
    arg0->float_14 = S0_1;
}

}  // namespace d_002a65d0
GUEST_EXPORT(0x002a65d0, d_002a65d0::f_002a65d0);

// f_002a661c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a661c {

struct __attribute__((packed)) Object_002a661c_0 {
    u8 unknown_0[0x1418];  // (not used here)
    u16 half_1418;
    u8 byte_141a;
    u8 byte_141b;
    u16 half_141c;
    u8 byte_141e;
    u8 byte_141f;
    u16 half_1420;
    u8 byte_1422;
    u8 byte_1423;
    u16 half_1424;
    u8 byte_1426;
    u8 byte_1427;
    u16 half_1428;
    u8 byte_142a;
    u8 byte_142b;
    u16 half_142c;
    u8 byte_142e;
    u8 byte_142f;
    u16 half_1430;
    u8 byte_1432;
    u8 byte_1433;
    u16 half_1434;
    u8 byte_1436;
    u8 byte_1437;
    u16 half_1438;
    u8 byte_143a;
    u8 byte_143b;
    u16 half_143c;
    u8 byte_143e;
    u8 byte_143f;
};
GUEST_OFFSET(Object_002a661c_0, half_1418, 0x1418);
GUEST_OFFSET(Object_002a661c_0, byte_141a, 0x141a);
GUEST_OFFSET(Object_002a661c_0, byte_141b, 0x141b);
GUEST_OFFSET(Object_002a661c_0, half_141c, 0x141c);
GUEST_OFFSET(Object_002a661c_0, byte_141e, 0x141e);
GUEST_OFFSET(Object_002a661c_0, byte_141f, 0x141f);
GUEST_OFFSET(Object_002a661c_0, half_1420, 0x1420);
GUEST_OFFSET(Object_002a661c_0, byte_1422, 0x1422);
GUEST_OFFSET(Object_002a661c_0, byte_1423, 0x1423);
GUEST_OFFSET(Object_002a661c_0, half_1424, 0x1424);
GUEST_OFFSET(Object_002a661c_0, byte_1426, 0x1426);
GUEST_OFFSET(Object_002a661c_0, byte_1427, 0x1427);
GUEST_OFFSET(Object_002a661c_0, half_1428, 0x1428);
GUEST_OFFSET(Object_002a661c_0, byte_142a, 0x142a);
GUEST_OFFSET(Object_002a661c_0, byte_142b, 0x142b);
GUEST_OFFSET(Object_002a661c_0, half_142c, 0x142c);
GUEST_OFFSET(Object_002a661c_0, byte_142e, 0x142e);
GUEST_OFFSET(Object_002a661c_0, byte_142f, 0x142f);
GUEST_OFFSET(Object_002a661c_0, half_1430, 0x1430);
GUEST_OFFSET(Object_002a661c_0, byte_1432, 0x1432);
GUEST_OFFSET(Object_002a661c_0, byte_1433, 0x1433);
GUEST_OFFSET(Object_002a661c_0, half_1434, 0x1434);
GUEST_OFFSET(Object_002a661c_0, byte_1436, 0x1436);
GUEST_OFFSET(Object_002a661c_0, byte_1437, 0x1437);
GUEST_OFFSET(Object_002a661c_0, half_1438, 0x1438);
GUEST_OFFSET(Object_002a661c_0, byte_143a, 0x143a);
GUEST_OFFSET(Object_002a661c_0, byte_143b, 0x143b);
GUEST_OFFSET(Object_002a661c_0, half_143c, 0x143c);
GUEST_OFFSET(Object_002a661c_0, byte_143e, 0x143e);
GUEST_OFFSET(Object_002a661c_0, byte_143f, 0x143f);


void f_002a661c(gptr<Object_002a661c_0> arg0) {
    arg0->half_1418 = 0;
    arg0->byte_141a = 0;
    arg0->byte_141b = 0;
    arg0->half_141c = 0;
    arg0->byte_141e = 0;
    arg0->byte_141f = 0;
    arg0->half_1420 = 0;
    arg0->byte_1422 = 0;
    arg0->byte_1423 = 0;
    arg0->half_1424 = 0;
    arg0->byte_1426 = 0;
    arg0->byte_1427 = 0;
    arg0->half_1428 = 0;
    arg0->byte_142a = 0;
    arg0->byte_142b = 0;
    arg0->half_142c = 0;
    arg0->byte_142e = 0;
    arg0->byte_142f = 0;
    arg0->half_1430 = 0;
    arg0->byte_1432 = 0;
    arg0->byte_1433 = 0;
    arg0->half_1434 = 0;
    arg0->byte_1436 = 0;
    arg0->byte_1437 = 0;
    arg0->half_1438 = 0;
    arg0->byte_143a = 0;
    arg0->byte_143b = 0;
    arg0->half_143c = 0;
    arg0->byte_143e = 0;
    arg0->byte_143f = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_002a661c
GUEST_EXPORT(0x002a661c, d_002a661c::f_002a661c);

// f_002a684c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a684c {

struct __attribute__((packed)) Local_002a684c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002a684c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_002a684c_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_002a684c_r0_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_002a684c_r0_4, word_0, 0x0);
GUEST_OFFSET(Local_002a684c_r0_4, word_4, 0x4);
GUEST_OFFSET(Local_002a684c_r0_4, word_8, 0x8);

struct __attribute__((packed)) Local_002a684c_r1_22 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_002a684c_r1_22, half_0, 0x0);
GUEST_OFFSET(Local_002a684c_r1_22, byte_2, 0x2);
GUEST_OFFSET(Local_002a684c_r1_22, byte_3, 0x3);

struct __attribute__((packed)) Local_002a684c_r1_23 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_002a684c_r1_23, half_0, 0x0);
GUEST_OFFSET(Local_002a684c_r1_23, byte_2, 0x2);
GUEST_OFFSET(Local_002a684c_r1_23, byte_3, 0x3);

inline guest::global<u32, 0x0088e544> global_0088e544;
inline guest::global<u32, 0x0088e548> global_0088e548;
inline guest::global<u32, 0x0088e54c> global_0088e54c;
inline guest::global<u32, 0x0088e550> global_0088e550;
inline guest::global<u32, 0x0088e554> global_0088e554;
inline guest::global<u32, 0x0088e558> global_0088e558;
inline guest::global<u32, 0x0088e55c> global_0088e55c;
inline guest::global<u32, 0x0088e560> global_0088e560;
inline guest::global<u32, 0x0088e564> global_0088e564;
inline guest::global<u32, 0x0088e568> global_0088e568;
inline guest::global<u32, 0x0088e56c> global_0088e56c;
inline guest::global<u32, 0x0088e570> global_0088e570;
inline guest::global<u32, 0x0088e574> global_0088e574;
inline guest::global<u32, 0x0088e578> global_0088e578;
inline guest::global<u32, 0x0088e57c> global_0088e57c;
inline guest::global<u32, 0x0088e580> global_0088e580;
inline guest::global<u32, 0x0088e584> global_0088e584;
inline guest::global<u32, 0x0088e588> global_0088e588;
inline guest::global<u32, 0x0088e58c> global_0088e58c;
inline guest::global<u32, 0x0088e590> global_0088e590;
inline guest::global<u32, 0x0088e594> global_0088e594;
inline guest::global<u32, 0x0088e598> global_0088e598;
inline guest::global<u32, 0x0088e59c> global_0088e59c;
inline guest::global<u32, 0x0088e5a0> global_0088e5a0;
inline constexpr guest::Function<0x002a66ec, u32(u32, u32, u32, u32)> call_002a66ec;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;
inline constexpr guest::Function<0x002fb338, u32(u32)> call_002fb338;
inline constexpr guest::Function<0x002fb378, u32(u32)> call_002fb378;
inline constexpr guest::Function<0x002fb430, u32(u32, u32)> call_002fb430;
inline constexpr guest::Function<0x002fb4a0, u32(u32, u32, u32, u32)> call_002fb4a0;

struct __attribute__((packed)) Frame_002a684c {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002a684c, word_0, 0x0);
GUEST_OFFSET(Frame_002a684c, word_4, 0x4);
GUEST_OFFSET(Frame_002a684c, word_8, 0x8);
GUEST_SIZE(Frame_002a684c, 0x14);

u32 f_002a684c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_002a684c> frame;  // the original's stack frame
    u32 r0_1 = call_002fb328(r0, r1, r2, r3);
    u32 r0_3 = call_002fb338(r0_1 + 0x80u + 0x6e212u);  // (from the original)
    if (r0_3 != 0) {
        gptr<Local_002a684c_r0_4> r0_4 = gptr<Local_002a684c_r0_4>(call_002fb378(r0_3));
        u32 r5_1 = r0_4->word_0;
        u32 r7_1 = r0_4->word_4;
        u32 r8_1 = r0_4->word_8;
        u32 r0_5 = call_002fb328(r0_4.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        call_002fb430(frame.at(8).addr(), r0_5 + 0x80u + 0x6e212u);  // (from the original)
        gptr<Local_002a684c_ea_1> ea_1 = gptr<Local_002a684c_ea_1>(frame.at(0xc).addr());  // (from the original)
        u32 r1_5 = ea_1->word_4;
        u32 r3_5 = frame->word_8;
        frame->word_0 = ea_1->word_0;
        frame->word_4 = r1_5;
        call_002fb4a0(r5_1, r7_1, r8_1, r3_5);
    }
    frame->word_8 = 0;
    u32 r1_6 = *global_0088e548;
    frame->word_0 = *global_0088e544;
    frame->word_4 = r1_6;
    call_002a66ec(r0, r0 + 0x1418u, r1, 0x31u);  // (from the original)
    frame->word_8 = 0;
    u32 r1_8 = *global_0088e550;
    frame->word_0 = *global_0088e54c;
    frame->word_4 = r1_8;
    call_002a66ec(r0, r0 + 0x141cu, r1, 0x32u);  // (from the original)
    frame->word_8 = 0;
    u32 r1_10 = *global_0088e558;
    frame->word_0 = *global_0088e554;
    frame->word_4 = r1_10;
    call_002a66ec(r0, r0 + 0x1420u, r1, 0x33u);  // (from the original)
    frame->word_8 = 0;
    u32 r1_12 = *global_0088e560;
    frame->word_0 = *global_0088e55c;
    frame->word_4 = r1_12;
    call_002a66ec(r0, r0 + 0x1424u, r1, 0x34u);  // (from the original)
    frame->word_8 = 0;
    u32 r1_14 = *global_0088e568;
    frame->word_0 = *global_0088e564;
    frame->word_4 = r1_14;
    call_002a66ec(r0, r0 + 0x1428u, r1, 0x35u);  // (from the original)
    frame->word_8 = 0;
    u32 r1_16 = *global_0088e570;
    frame->word_0 = *global_0088e56c;
    frame->word_4 = r1_16;
    call_002a66ec(r0, r0 + 0x142cu, r1, 0x36u);  // (from the original)
    frame->word_8 = 0;
    u32 r1_18 = *global_0088e578;
    frame->word_0 = *global_0088e574;
    frame->word_4 = r1_18;
    call_002a66ec(r0, r0 + 0x1430u, r1, 0x37u);  // (from the original)
    frame->word_8 = 0;
    u32 r1_20 = *global_0088e580;
    frame->word_0 = *global_0088e57c;
    frame->word_4 = r1_20;
    call_002a66ec(r0, r0 + 0x1434u, r1, 0x38u);  // (from the original)
    u32 r0_7 = *gptr<s8>(r1 + 4u);
    u32 res_1 = r0_7 - 0xau;  // (from the original)
    u32 r0_8 = *gptr<u32>(r1);
    gptr<Local_002a684c_r1_22> r1_22 = gptr<Local_002a684c_r1_22>(r0 + 0x1438u);  // (from the original)
    if (res_1 != 0 && res_1 >> 0x1f == (((r0_7 ^ 0xau) & (r0_7 ^ res_1)) >> 0x1f)) {  // (from the original)
        r0_8 += 1u;
    }
    u32 r7_2 = 0u;
    u32 r5_2 = uxth(r0_8);
    u32 r0_9 = r1_22->half_0;
    if (r5_2 >= 0x803u) {  // (from the original)
        r5_2 = 0x7dcu;  // (from the original)
    }
    if (r0_9 != 0 && r1_22->byte_2 != 0 && r1_22->byte_3 != 0) {
        if (r0_9 > 0xau) {  // (from the original)
            r0_9 += 1u;
        }
        u32 r0_10 = uxth(r0_9);
        if (r0_10 >= 0x803u) {  // (from the original)
            r0_10 = 0x7dcu;  // (from the original)
        }
        r7_2 = r5_2 == r0_10;
    }
    frame->word_8 = 0;
    u32 r2_5 = *global_0088e588;
    frame->word_0 = *global_0088e584;
    frame->word_4 = r2_5;
    call_002a66ec(r0, r1_22.addr(), r1, 0x39u);  // (from the original)
    if (r7_2 != 0) {
        *gptr<u32>(r0 + 0x4a0u) = 0;  // (from the original)
        *gptr<u32>(r0 + 0x4a4u) = 0;  // (from the original)
        *gptr<u32>(r0 + 0x4a8u) = 0;  // (from the original)
        *gptr<u32>(r0 + 0x4acu) = 0;  // (from the original)
        *gptr<u32>(r0 + 0x4b0u) = 0;  // (from the original)
    }
    gptr<Local_002a684c_r1_23> r1_23 = gptr<Local_002a684c_r1_23>(r0 + 0x1444u);  // (from the original)
    u32 r2_6 = 0u;
    u32 r0_11 = r1_23->half_0;
    if (r0_11 != 0 && r1_23->byte_2 != 0 && r1_23->byte_3 != 0) {
        if (r0_11 > 0xau) {  // (from the original)
            r0_11 += 1u;
        }
        u32 r0_12 = uxth(r0_11);
        if (r0_12 >= 0x803u) {  // (from the original)
            r0_12 = 0x7dcu;  // (from the original)
        }
        r2_6 = r5_2 == r0_12;
    }
    frame->word_8 = r2_6;
    u32 r2_7 = *global_0088e590;
    frame->word_0 = *global_0088e58c;
    frame->word_4 = r2_7;
    call_002a66ec(r0, r1_23.addr(), r1, 0x3du);  // (from the original)
    frame->word_8 = 0;
    u32 r1_24 = *global_0088e598;
    frame->word_0 = *global_0088e594;
    frame->word_4 = r1_24;
    call_002a66ec(r0, r0 + 0x143cu, r1, 0x3au);  // (from the original)
    frame->word_8 = 0;
    u32 r1_26 = *global_0088e5a0;
    frame->word_0 = *global_0088e59c;
    frame->word_4 = r1_26;
    u32 r0_13 = call_002a66ec(r0, r0 + 0x1440u, r1, 0x3cu);  // (from the original)
    return r0_13;
}

}  // namespace d_002a684c
GUEST_EXPORT_FRAMED(0x002a684c, d_002a684c::f_002a684c, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_002a6b44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a6b44 {

struct __attribute__((packed)) Local_002a6b44_r1_1 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_002a6b44_r1_1, half_0, 0x0);
GUEST_OFFSET(Local_002a6b44_r1_1, byte_2, 0x2);
GUEST_OFFSET(Local_002a6b44_r1_1, byte_3, 0x3);

struct __attribute__((packed)) Local_002a6b44_r1_10 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_002a6b44_r1_10, half_0, 0x0);
GUEST_OFFSET(Local_002a6b44_r1_10, byte_2, 0x2);
GUEST_OFFSET(Local_002a6b44_r1_10, byte_3, 0x3);

struct __attribute__((packed)) Local_002a6b44_r1_11 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_002a6b44_r1_11, half_0, 0x0);
GUEST_OFFSET(Local_002a6b44_r1_11, byte_2, 0x2);
GUEST_OFFSET(Local_002a6b44_r1_11, byte_3, 0x3);

struct __attribute__((packed)) Local_002a6b44_r1_12 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_002a6b44_r1_12, half_0, 0x0);
GUEST_OFFSET(Local_002a6b44_r1_12, byte_2, 0x2);
GUEST_OFFSET(Local_002a6b44_r1_12, byte_3, 0x3);

struct __attribute__((packed)) Local_002a6b44_r1_2 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_002a6b44_r1_2, half_0, 0x0);
GUEST_OFFSET(Local_002a6b44_r1_2, byte_2, 0x2);
GUEST_OFFSET(Local_002a6b44_r1_2, byte_3, 0x3);

struct __attribute__((packed)) Local_002a6b44_r1_3 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_002a6b44_r1_3, half_0, 0x0);
GUEST_OFFSET(Local_002a6b44_r1_3, byte_2, 0x2);
GUEST_OFFSET(Local_002a6b44_r1_3, byte_3, 0x3);

struct __attribute__((packed)) Local_002a6b44_r1_4 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_002a6b44_r1_4, half_0, 0x0);
GUEST_OFFSET(Local_002a6b44_r1_4, byte_2, 0x2);
GUEST_OFFSET(Local_002a6b44_r1_4, byte_3, 0x3);

struct __attribute__((packed)) Local_002a6b44_r1_5 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_002a6b44_r1_5, half_0, 0x0);
GUEST_OFFSET(Local_002a6b44_r1_5, byte_2, 0x2);
GUEST_OFFSET(Local_002a6b44_r1_5, byte_3, 0x3);

struct __attribute__((packed)) Local_002a6b44_r1_6 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_002a6b44_r1_6, half_0, 0x0);
GUEST_OFFSET(Local_002a6b44_r1_6, byte_2, 0x2);
GUEST_OFFSET(Local_002a6b44_r1_6, byte_3, 0x3);

struct __attribute__((packed)) Local_002a6b44_r1_7 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_002a6b44_r1_7, half_0, 0x0);
GUEST_OFFSET(Local_002a6b44_r1_7, byte_2, 0x2);
GUEST_OFFSET(Local_002a6b44_r1_7, byte_3, 0x3);

struct __attribute__((packed)) Local_002a6b44_r1_8 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_002a6b44_r1_8, half_0, 0x0);
GUEST_OFFSET(Local_002a6b44_r1_8, byte_2, 0x2);
GUEST_OFFSET(Local_002a6b44_r1_8, byte_3, 0x3);

struct __attribute__((packed)) Local_002a6b44_r1_9 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_002a6b44_r1_9, half_0, 0x0);
GUEST_OFFSET(Local_002a6b44_r1_9, byte_2, 0x2);
GUEST_OFFSET(Local_002a6b44_r1_9, byte_3, 0x3);

inline constexpr guest::Function<0x002a661c, u32(u32)> call_002a661c;
inline constexpr guest::Function<0x006b9038, u32(u32, u32, u32, u32)> call_006b9038;

u32 f_002a6b44(u32 r0, u32 r1) {
    call_006b9038(r0 + 4u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    gptr<Local_002a6b44_r1_1> r1_1 = gptr<Local_002a6b44_r1_1>(r0 + 0x1418u);  // (from the original)
    r1_1->half_0 = 0;
    r1_1->byte_2 = 0;
    r1_1->byte_3 = 0;
    gptr<Local_002a6b44_r1_2> r1_2 = gptr<Local_002a6b44_r1_2>(r0 + 0x141cu);  // (from the original)
    r1_2->half_0 = 0;
    r1_2->byte_2 = 0;
    r1_2->byte_3 = 0;
    gptr<Local_002a6b44_r1_3> r1_3 = gptr<Local_002a6b44_r1_3>(r0 + 0x1420u);  // (from the original)
    r1_3->half_0 = 0;
    r1_3->byte_2 = 0;
    r1_3->byte_3 = 0;
    gptr<Local_002a6b44_r1_4> r1_4 = gptr<Local_002a6b44_r1_4>(r0 + 0x1424u);  // (from the original)
    r1_4->half_0 = 0;
    r1_4->byte_2 = 0;
    r1_4->byte_3 = 0;
    gptr<Local_002a6b44_r1_5> r1_5 = gptr<Local_002a6b44_r1_5>(r0 + 0x1428u);  // (from the original)
    r1_5->half_0 = 0;
    r1_5->byte_2 = 0;
    r1_5->byte_3 = 0;
    gptr<Local_002a6b44_r1_6> r1_6 = gptr<Local_002a6b44_r1_6>(r0 + 0x142cu);  // (from the original)
    r1_6->half_0 = 0;
    r1_6->byte_2 = 0;
    r1_6->byte_3 = 0;
    gptr<Local_002a6b44_r1_7> r1_7 = gptr<Local_002a6b44_r1_7>(r0 + 0x1430u);  // (from the original)
    r1_7->half_0 = 0;
    r1_7->byte_2 = 0;
    r1_7->byte_3 = 0;
    gptr<Local_002a6b44_r1_8> r1_8 = gptr<Local_002a6b44_r1_8>(r0 + 0x1434u);  // (from the original)
    r1_8->half_0 = 0;
    r1_8->byte_2 = 0;
    r1_8->byte_3 = 0;
    gptr<Local_002a6b44_r1_9> r1_9 = gptr<Local_002a6b44_r1_9>(r0 + 0x1438u);  // (from the original)
    r1_9->half_0 = 0;
    r1_9->byte_2 = 0;
    r1_9->byte_3 = 0;
    gptr<Local_002a6b44_r1_10> r1_10 = gptr<Local_002a6b44_r1_10>(r0 + 0x143cu);  // (from the original)
    r1_10->half_0 = 0;
    r1_10->byte_2 = 0;
    r1_10->byte_3 = 0;
    gptr<Local_002a6b44_r1_11> r1_11 = gptr<Local_002a6b44_r1_11>(r0 + 0x1440u);  // (from the original)
    r1_11->half_0 = 0;
    r1_11->byte_2 = 0;
    r1_11->byte_3 = 0;
    gptr<Local_002a6b44_r1_12> r1_12 = gptr<Local_002a6b44_r1_12>(r0 + 0x1444u);  // (from the original)
    r1_12->half_0 = 0;
    r1_12->byte_2 = 0;
    r1_12->byte_3 = 0;
    call_002a661c(r0);
    return r0;
}

}  // namespace d_002a6b44
GUEST_EXPORT_FRAMED(0x002a6b44, d_002a6b44::f_002a6b44, 0x4010);  // pushes {r4, lr} first, as the original

// f_002a70d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a70d0 {

struct __attribute__((packed)) Object_002a70d0_0 {
    u32 word_0;
    u8 unknown_4[0x2e];  // (not used here)
    u16 half_32;
    u8 byte_34;
    u8 byte_35;
};
GUEST_OFFSET(Object_002a70d0_0, word_0, 0x0);
GUEST_OFFSET(Object_002a70d0_0, half_32, 0x32);
GUEST_OFFSET(Object_002a70d0_0, byte_34, 0x34);
GUEST_OFFSET(Object_002a70d0_0, byte_35, 0x35);

inline constexpr guest::Function<0x003052f0, u32(u32, u32, u32, u32)> call_003052f0;
inline constexpr guest::Function<0x0030589c, u32(u32)> call_0030589c;

u32 f_002a70d0(gptr<Object_002a70d0_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = r0;
    arg0->half_32 = 0;
    arg0->byte_34 = 0;
    arg0->byte_35 = 0;
    arg0->word_0 = 0;
    call_003052f0(r4 + 4u, r1, r2, r3);
    *gptr<u16>(r4 + 0x32u) = 0;  // (from the original)
    *gptr<u8>(r4 + 0x34u) = 0;  // (from the original)
    *gptr<u8>(r4 + 0x35u) = 0;  // (from the original)
    call_0030589c(r4 + 0x36u);  // (from the original)
    r2 = 0xffffu;  // (from the original)
    r1 = 0u;
    r0 = r1;
    do {
        u32 r1_2 = r1 + 1u;
        r0 += 2u;
        *gptr<u16>((r4 + (r1 << 1)) + 0x4cu) = u16(r2);  // (from the original)
        r1 = r1_2 + 1u;
        *gptr<u16>((r4 + (r1_2 << 1)) + 0x4cu) = u16(r2);  // (from the original)
        guest::preempt();
    } while (s32(r0) < 0xa);  // (from the original)
    u32 r1_3 = ~0u;
    *gptr<u32>(r4 + 0x60u) = r1_3;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return r4;
}

}  // namespace d_002a70d0
GUEST_EXPORT_FRAMED(0x002a70d0, d_002a70d0::f_002a70d0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002a7190: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a7190 {


u32 f_002a7190(u32 r0, u32 r1) {
    if (r1 < 4u) {
        r1 += (r1 << 1);
        r0 += (r1 << 3);
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002a7190
GUEST_EXPORT(0x002a7190, d_002a7190::f_002a7190);

// f_002a71a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a71a0 {


void f_002a71a0() {
    u32 r0 = 0u;
    do {
        r0 += 1u;
        guest::preempt();
    } while (r0 < 4u);
}

}  // namespace d_002a71a0
GUEST_EXPORT(0x002a71a0, d_002a71a0::f_002a71a0);

// f_002a71b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a71b4 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;

void f_002a71b4(u32 r0) {
    u32 r6 = r0;
    u32 r5 = 0u;
    do {
        u32 r4_1 = r6 + (r5 + (r5 << 1) << 3);
        call_002fc8e8(r4_1, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        call_002fc8e8(r4_1 + 4u, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        call_002fc8e8(r4_1 + 8u, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        call_002fc8e8(r4_1 + 0xcu, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        call_002fc8e8(r4_1 + 0x10u, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        call_002fc8e8(r4_1 + 0x14u, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r5 += 1u;
        guest::preempt();
    } while (r5 < 4u);
    *gptr<u8>(r6 + 0x60u) = 0;  // (from the original)
}

}  // namespace d_002a71b4
GUEST_EXPORT_FRAMED(0x002a71b4, d_002a71b4::f_002a71b4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002a722c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a722c {

inline constexpr guest::Function<0x002a7270, u32(u32, u32, u32, u32)> call_002a7270;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;
inline constexpr guest::Function<0x002fb7e8, u32(u32, u32)> call_002fb7e8;
inline constexpr guest::Function<0x002fbd54, u32(u32)> call_002fbd54;

void f_002a722c(u32 r0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_002fae84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_3 = call_002fb7e8(r0_1 + 0x20u, 0u);  // (from the original)
    if (r0_3 == 0) {
        return;
    }
    u32 r0_5 = call_002fbd54(r0_3 + 0x55a6u);  // (from the original)
    if (r0_5 == 0) {
        return;
    }
    frame.release();
    call_002a7270((r0_3 + 0x5400u) + 0x144u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return;
}

}  // namespace d_002a722c
GUEST_EXPORT(0x002a722c, d_002a722c::f_002a722c);

// f_002a75dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a75dc {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;
inline constexpr guest::Function<0x002fcaf4, u32(u32)> call_002fcaf4;
inline constexpr guest::Function<0x0076ab28, u32(u32, u32, u32, u32)> call_0076ab28;
inline constexpr guest::Function<0x0076aff4, u32(u32, u32, u32)> call_0076aff4;

struct __attribute__((packed)) Frame_002a75dc {
    u32 word_0;
};
GUEST_OFFSET(Frame_002a75dc, word_0, 0x0);
GUEST_SIZE(Frame_002a75dc, 0x4);

void f_002a75dc(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_002a75dc> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r5 = 0u;
    u32 r7 = r0;
    u32 r6 = r1;
    do {
        u32 r4_1 = r7 + (r5 + (r5 << 1) << 3);
        u32 r0_1 = call_0076ab28(r4_1, r1, r2, r3);
        u32 r0_3 = call_002fcaf4(r0_1 == 1u ? r4_1 : 0x95bfdcu);  // (from the original)
        if (r0_3 == 0) {
            u32 r0_4 = call_0076ab28(r4_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            call_0076aff4(frame.at(0).addr(), r0_4 == 1u ? r4_1 : 0x95bfdcu, r6);  // (from the original)
            call_002fc8e8(r4_1, frame.at(0).addr());
        }
        u32 r0_7 = call_0076ab28(r4_1 + 8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_9 = call_002fcaf4(r0_7 == 3u ? r4_1 + 8u : 0x95bfdcu);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_9 == 0) {
            u32 r0_11 = call_0076ab28(r4_1 + 8u, r1, r2, r3);
            call_0076aff4(frame.at(0).addr(), r0_11 == 3u ? r4_1 + 8u : 0x95bfdcu, r6);  // (from the original)
            call_002fc8e8(r4_1 + 8u, frame.at(0).addr());
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r5 += 1u;
        guest::preempt();
    } while (r5 < 4u);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_002a75dc
GUEST_EXPORT_FRAMED(0x002a75dc, d_002a75dc::f_002a75dc, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_002a76c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a76c0 {

inline constexpr guest::Function<0x002fc288, u32(u32, u32, u32, u32)> call_002fc288;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;
inline constexpr guest::Function<0x002fe9c8, u32(u32, u32, u32, u32)> call_002fe9c8;
inline constexpr guest::Function<0x003004c4, u32(u32, u32, u32)> call_003004c4;

void f_002a76c0(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x2e8);  // the original's stack frame
    u32 r4 = 0u;
    u32 r5 = r0;
    u32 r6 = r4;
    do {
        call_002fc8e8(r5 + (r4 << 2), 0x95bfdcu, r2, r3);  // (from the original)
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        u32 r0_2 = r5 + r4;
        r4 += 1u;
        *gptr<u8>(r0_2 + 0x1cu) = u8(r6);  // (from the original)
        guest::preempt();
    } while (s32(r4) < 7);
    call_002fc288(frame.at(0).addr(), guest::cpu()->r[1], r2, r3);
    call_002fe9c8(frame.at(0).addr(), 0xcu, 0x2du, 0u);  // (from the original)
    call_003004c4(r5, 3u, frame.at(0).addr());
    call_002fc288(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002fe9c8(frame.at(0).addr(), 0xdu, 0x2du, 0u);  // (from the original)
    call_003004c4(r5 + 0xcu, 3u, frame.at(0).addr());  // (from the original)
    call_002fc288(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002fe9c8(frame.at(0).addr(), 0x19u, 0x2du, 0u);  // (from the original)
    call_003004c4(r5 + 0x18u, 1u, frame.at(0).addr());  // (from the original)
}

}  // namespace d_002a76c0
GUEST_EXPORT_FRAMED(0x002a76c0, d_002a76c0::f_002a76c0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002a77bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a77bc {

struct __attribute__((packed)) Local_002a77bc_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_002a77bc_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_002a77bc_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_002a77bc_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_002a77bc_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_002a77bc_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_002a77bc_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_002a77bc_ea_1, word_18, 0x18);

struct __attribute__((packed)) Local_002a77bc_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002a77bc_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_002a77bc_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_002a77bc_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_002a77bc_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_002a77bc_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_002a77bc_ea_3, word_8, 0x8);
GUEST_OFFSET(Local_002a77bc_ea_3, word_c, 0xc);
GUEST_OFFSET(Local_002a77bc_ea_3, word_10, 0x10);
GUEST_OFFSET(Local_002a77bc_ea_3, word_14, 0x14);
GUEST_OFFSET(Local_002a77bc_ea_3, word_18, 0x18);

struct __attribute__((packed)) Local_002a77bc_r4_1 {
    u8 unknown_0[0x1c];  // (not used here)
    u8 byte_1c;
};
GUEST_OFFSET(Local_002a77bc_r4_1, byte_1c, 0x1c);

inline constexpr guest::Function<0x002f74c8, u32(u32)> call_002f74c8;
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;
inline constexpr guest::Function<0x00303acc, u32(u32)> call_00303acc;
inline constexpr guest::Function<0x0030b654, u32(u32)> call_0030b654;
inline constexpr guest::Function<0x004e9a78, u32(u32, u32, u32, u32)> call_004e9a78;
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32)> call_0059e65c;
inline constexpr guest::Function<0x006a5e34, u32(u32)> call_006a5e34;

struct __attribute__((packed)) Frame_002a77bc {
    u32 word_0;
    u8 unknown_4[0x24];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002a77bc, word_0, 0x0);
GUEST_SIZE(Frame_002a77bc, 0x28);

void f_002a77bc(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_002a77bc> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r14 = guest::cpu()->r[14];
    if (r2 >= 7u) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[9] = r9;
        return;
    }
    gptr<Local_002a77bc_ea_1> ea_1 = gptr<Local_002a77bc_ea_1>(frame.at(0xc).addr());  // (from the original)
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r7;
    ea_1->word_10 = r8;
    ea_1->word_14 = r9;
    ea_1->word_18 = r14;
    gptr<Local_002a77bc_r4_1> r4_1 = gptr<Local_002a77bc_r4_1>(r0 + r2);
    gptr<Local_002a77bc_ea_2> ea_2 = gptr<Local_002a77bc_ea_2>(frame.at(0x28).addr());  // (from the original)
    u32 r6_1 = ea_2->word_0;
    u32 r7_1 = ea_2->word_4;
    u32 r3_1 = frame.at(4).addr();
    if (r4_1->byte_1c != 0) {
        call_002fcbb0(r3_1, 0x2084u, r2, r3_1);  // (from the original)
    } else {
        call_002fc934(r3_1, r0 + (r2 << 2), r2, r3_1);
    }
    if (r4_1->byte_1c == 0) {
        r4_1->byte_1c = 1;
        u32 r0_1 = call_002f74c8(1u);
        if (r0_1 == r1) {
            u32 r0_3 = call_0030b654(frame.at(4).addr());
            if (r0_3 != 0) {
                u32 r0_5 = call_00303acc(frame.at(4).addr());
                if (r0_5 != 0) {
                    call_004e9a78(r3, r6_1, 4u, r7_1);
                } else {
                    call_004e9a78(r3, r6_1, 3u, r7_1);
                }
            } else {
                u32 r0_6 = call_006a5e34(r0_3);
                if (r0_6 != 0) {
                    u32 r0_8 = call_002fcbb0(frame.at(8).addr(), 0x2084u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                    frame->word_0 = 0;
                    call_002fc994(r0_6, r0_8, r3, r6_1);
                    call_0059e65c(r3, r6_1, 1u);
                }
            }
        }
    }
    gptr<Local_002a77bc_ea_3> ea_3 = gptr<Local_002a77bc_ea_3>(frame.at(0xc).addr());  // (from the original)
    u32 r4_2 = ea_3->word_0;
    u32 r5_1 = ea_3->word_4;
    u32 r6_2 = ea_3->word_8;
    u32 r7_2 = ea_3->word_c;
    u32 r8_1 = ea_3->word_10;
    u32 r9_1 = ea_3->word_14;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
}

}  // namespace d_002a77bc
GUEST_EXPORT(0x002a77bc, d_002a77bc::f_002a77bc);

// f_002a799c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a799c {

inline constexpr guest::Function<0x002fc288, u32(u32, u32, u32, u32)> call_002fc288;
inline constexpr guest::Function<0x002fe9c8, u32(u32, u32, u32, u32)> call_002fe9c8;
inline constexpr guest::Function<0x003004c4, u32(u32, u32, u32)> call_003004c4;

u32 f_002a799c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x2e8);  // the original's stack frame
    call_002fc288(frame.at(0).addr(), r1, r2, r3);
    call_002fe9c8(frame.at(0).addr(), 0xcu, 0x73u, 0u);  // (from the original)
    call_003004c4(r0, 1u, frame.at(0).addr());
    return frame.at(0).addr();
}

}  // namespace d_002a799c
GUEST_EXPORT_FRAMED(0x002a799c, d_002a799c::f_002a799c, 0x4010);  // pushes {r4, lr} first, as the original

// f_002a7c74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a7c74 {

struct __attribute__((packed)) Local_002a7c74_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_002a7c74_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_002a7c74_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_002a7c74_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_002a7c74_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_002a7c74_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_002a7c74_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_002a7c74_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_002a7c74_ea_1, word_1c, 0x1c);

struct __attribute__((packed)) Local_002a7c74_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002a7c74_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_002a7c74_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_002a7c74_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_002a7c74_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_002a7c74_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_002a7c74_ea_3, word_8, 0x8);
GUEST_OFFSET(Local_002a7c74_ea_3, word_c, 0xc);
GUEST_OFFSET(Local_002a7c74_ea_3, word_10, 0x10);
GUEST_OFFSET(Local_002a7c74_ea_3, word_14, 0x14);
GUEST_OFFSET(Local_002a7c74_ea_3, word_18, 0x18);
GUEST_OFFSET(Local_002a7c74_ea_3, word_1c, 0x1c);

struct __attribute__((packed)) Local_002a7c74_r4_1 {
    u8 unknown_0[0x3e];  // (not used here)
    u8 byte_3e;
};
GUEST_OFFSET(Local_002a7c74_r4_1, byte_3e, 0x3e);

inline constexpr guest::Function<0x002f74c8, u32(u32)> call_002f74c8;
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> call_002fcbb0;
inline constexpr guest::Function<0x00303acc, u32(u32, u32, u32, u32)> call_00303acc;
inline constexpr guest::Function<0x0030b654, u32(u32)> call_0030b654;
inline constexpr guest::Function<0x004e9a78, u32(u32, u32, u32, u32)> call_004e9a78;
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32)> call_0059e65c;
inline constexpr guest::Function<0x006a5e34, u32(u32)> call_006a5e34;

struct __attribute__((packed)) Frame_002a7c74 {
    u32 word_0;
    u8 unknown_4[0x2c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002a7c74, word_0, 0x0);
GUEST_SIZE(Frame_002a7c74, 0x30);

void f_002a7c74(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_002a7c74> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r14 = guest::cpu()->r[14];
    if (r2 >= 0xbu) {  // (from the original)
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[9] = r9;
        guest::cpu()->r[10] = r10;
        return;
    }
    gptr<Local_002a7c74_ea_1> ea_1 = gptr<Local_002a7c74_ea_1>(frame.at(0x10).addr());  // (from the original)
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r7;
    ea_1->word_10 = r8;
    ea_1->word_14 = r9;
    ea_1->word_18 = r10;
    ea_1->word_1c = r14;
    gptr<Local_002a7c74_r4_1> r4_1 = gptr<Local_002a7c74_r4_1>(r0 + r2);
    gptr<Local_002a7c74_ea_2> ea_2 = gptr<Local_002a7c74_ea_2>(frame.at(0x30).addr());  // (from the original)
    u32 r7_1 = ea_2->word_0;
    u32 r8_1 = ea_2->word_4;
    u32 r1_1 = r4_1->byte_3e;
    u32 r6_1 = frame.at(4).addr();
    u32 r0_1 = r0 + (r2 << 2);
    if (r1_1 != 0) {
        u32 r0_3 = call_00303acc(r0_1 + 0x12u, r1_1, r2, r3);  // (from the original)
        if (r0_3 == 0) {
            call_002fcbb0(r6_1, 0x2083u);  // (from the original)
        } else {
            call_002fcbb0(r6_1, 0x2086u);  // (from the original)
        }
    } else {
        call_002fc934(r6_1, r0_1 + 0x12u, r2, r3);  // (from the original)
    }
    if (r4_1->byte_3e == 0) {
        r4_1->byte_3e = 1;
        u32 r0_4 = call_002f74c8(1u);
        if (r0_4 == r1) {
            u32 r0_6 = call_0030b654(frame.at(4).addr());
            if (r0_6 != 0) {
                u32 r0_8 = call_00303acc(frame.at(4).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                if (r0_8 != 0) {
                    call_004e9a78(r3, r7_1, 2u, r8_1);
                } else {
                    call_004e9a78(r3, r7_1, 1u, r8_1);
                }
            } else {
                u32 r0_9 = call_006a5e34(r0_6);
                if (r0_9 != 0) {
                    u32 r0_11 = call_002fcbb0(frame.at(8).addr(), 0x2083u);  // (from the original)
                    frame->word_0 = 0;
                    call_002fc994(r0_9, r0_11, r3, r7_1);
                    call_0059e65c(r3, r7_1, 1u);
                }
            }
        }
    }
    gptr<Local_002a7c74_ea_3> ea_3 = gptr<Local_002a7c74_ea_3>(frame.at(0x10).addr());  // (from the original)
    u32 r4_2 = ea_3->word_0;
    u32 r5_1 = ea_3->word_4;
    u32 r6_2 = ea_3->word_8;
    u32 r7_2 = ea_3->word_c;
    u32 r8_2 = ea_3->word_10;
    u32 r9_1 = ea_3->word_14;
    u32 r10_1 = ea_3->word_18;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_2;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
}

}  // namespace d_002a7c74
GUEST_EXPORT(0x002a7c74, d_002a7c74::f_002a7c74);

// f_002a8560: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a8560 {

struct __attribute__((packed)) Local_002a8560_r0_1 {
    u32 word_0;
    u8 unknown_4[0x62];  // (not used here)
    u8 byte_66;
    u8 unknown_67[0x1];  // (not used here)
    u32 word_68;
    u8 byte_6c;
};
GUEST_OFFSET(Local_002a8560_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_002a8560_r0_1, byte_66, 0x66);
GUEST_OFFSET(Local_002a8560_r0_1, word_68, 0x68);
GUEST_OFFSET(Local_002a8560_r0_1, byte_6c, 0x6c);

inline constexpr u32 vtable_AcSimpleTalkBase = 0x008f1078u;
inline constexpr guest::Function<0x006e47a0, u32(u32, u32, u32, u32)> call_006e47a0;

u32 f_002a8560(u32 r0, u32 r1, u32 r2) {
    gptr<Local_002a8560_r0_1> r0_1 = gptr<Local_002a8560_r0_1>(call_006e47a0(r0, r1, r2, guest::cpu()->r[3]));
    r0_1->byte_66 = 0;
    r0_1->word_0 = vtable_AcSimpleTalkBase;
    r0_1->word_68 = r1;
    r0_1->byte_6c = 1;
    return r0_1.addr();
}

}  // namespace d_002a8560
GUEST_EXPORT_FRAMED(0x002a8560, d_002a8560::f_002a8560, 0x4010);  // pushes {r4, lr} first, as the original

// f_002a9294: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a9294 {

struct __attribute__((packed)) Object_002a9294_0 {
    u8 unknown_0[0x8a];  // (not used here)
    u8 byte_8a;
    u8 unknown_8b[0x511];  // (not used here)
    u8 byte_59c;
    u8 unknown_59d[0xc3];  // (not used here)
    u32 word_660;
};
GUEST_OFFSET(Object_002a9294_0, byte_8a, 0x8a);
GUEST_OFFSET(Object_002a9294_0, byte_59c, 0x59c);
GUEST_OFFSET(Object_002a9294_0, word_660, 0x660);

inline constexpr guest::Function<0x002a93e8, u32(u32, u32, u32, u32)> call_002a93e8;

void f_002a9294(gptr<Object_002a9294_0> arg0, u32 r1) {
    if ((u32(arg0->byte_8a) >> 1u & 1u) == 0) {
        return;
    }
    u32 r2_1 = arg0->byte_59c;
    if (r2_1 != 0) {
        return;
    }
    arg0->word_660 = r1;
    call_002a93e8(arg0.addr(), 1u, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_002a9294
GUEST_EXPORT(0x002a9294, d_002a9294::f_002a9294);

// f_002a9cd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a9cd8 {

struct __attribute__((packed)) Object_002a9cd8_0 {
    u8 unknown_0[0x68];  // (not used here)
    u32 word_68;
};
GUEST_OFFSET(Object_002a9cd8_0, word_68, 0x68);

inline constexpr guest::Function<0x0030f48c, u32(u32, u32, u32, u32)> call_0030f48c;

u32 f_002a9cd8(gptr<Object_002a9cd8_0> arg0, u32 r1, u32 r2) {
    u32 r4_1 = arg0->word_68;
    u32 r0_2 = call_0030f48c(r4_1 + 0x104u, 0x845170u, r1, guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r4_1 + 0x130u) = r2;  // (from the original)
    return r0_2;
}

}  // namespace d_002a9cd8
GUEST_EXPORT_FRAMED(0x002a9cd8, d_002a9cd8::f_002a9cd8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002aa08c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002aa08c {

inline constexpr guest::Function<0x00246f64, u32(u32)> call_00246f64;

void f_002aa08c(u32 r0) {
    call_00246f64(r0);
    *gptr<u8>(r0 + 0x98u) = 1;  // (from the original)
}

}  // namespace d_002aa08c
GUEST_EXPORT_FRAMED(0x002aa08c, d_002aa08c::f_002aa08c, 0x4010);  // pushes {r4, lr} first, as the original

// f_002aa0dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002aa0dc {

struct __attribute__((packed)) Object_002aa0dc_0 {
    u8 unknown_0[0x98];  // (not used here)
    u8 byte_98;
};
GUEST_OFFSET(Object_002aa0dc_0, byte_98, 0x98);

inline constexpr guest::Function<0x0024727c, u32(u32, u32, u32, u32)> call_0024727c;

void f_002aa0dc(gptr<Object_002aa0dc_0> arg0) {
    if (arg0->byte_98 == 0) {
        return;
    }
    call_0024727c(arg0.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    arg0->byte_98 = 0;
}

}  // namespace d_002aa0dc
GUEST_EXPORT_FRAMED(0x002aa0dc, d_002aa0dc::f_002aa0dc, 0x4010);  // pushes {r4, lr} first, as the original

// f_002aa104: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002aa104 {

inline constexpr guest::Function<0x00247294, u32(u32, u32, u32, u32)> call_00247294;

u32 f_002aa104(u32 r0, u32 r1) {
    u32 r0_1 = call_00247294(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r0_1 + 0x98u) = 0;  // (from the original)
    return r0_1;
}

}  // namespace d_002aa104
GUEST_EXPORT_FRAMED(0x002aa104, d_002aa104::f_002aa104, 0x4010);  // pushes {r4, lr} first, as the original

// f_002aa6c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002aa6c0 {

struct __attribute__((packed)) Object_002aa6c0_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Object_002aa6c0_0, word_1c, 0x1c);

struct __attribute__((packed)) Local_002aa6c0_r0_5 {
    u8 unknown_0[0x1f8];  // (not used here)
    u32 word_1f8;
    u32 word_1fc;
};
GUEST_OFFSET(Local_002aa6c0_r0_5, word_1f8, 0x1f8);
GUEST_OFFSET(Local_002aa6c0_r0_5, word_1fc, 0x1fc);

inline constexpr guest::Function<0x001f499c, u32(u32, u32, u32)> call_001f499c;
inline constexpr guest::Function<0x002ab460, u32(u32, u32, u32)> call_002ab460;
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;

u32 f_002aa6c0(gptr<Object_002aa6c0_0> arg0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4 = r0;
    r0 = arg0->word_1c;
    u32 r5 = r1;
    u32 r6 = 0u;
    u32 r3 = 0x42u;  // (from the original)
    r1 = r6;
    if (r0 != 0) {
        do {
            u32 r2_1 = *gptr<u32>(r0);
            if (r2_1 != 0 && *gptr<u8>(r2_1 + 0xc9u) == r3) {  // (from the original)
                r1 += 1u;
                if (r1 >= 4u) {
                    guest::cpu()->r[1] = r1;
                    return 0u;
                }
            }
            r0 = *gptr<u32>(r0 + 4u);
            guest::preempt();
        } while (r0 != 0);
    }
    call_003171b4(frame.at(0).addr(), frame.at(4).addr(), r5, r3);
    u32 r0_3 = call_001f499c(frame.at(0).addr(), 0x42u, 1u);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        u32 r0_4 = call_002ab460(r4, 0x42u, r5);  // (from the original)
        u32 r1_2 = guest::cpu()->r[1];
        u32 zf_1 = r0_4 == 0;
        gptr<Local_002aa6c0_r0_5> r0_5 = gptr<Local_002aa6c0_r0_5>(r4 + 0x1000u);  // (from the original)
        if (zf_1) {
            r0_5->word_1fc = r6;
        } else {
            r1_2 = r0_5->word_1f8;
            r0_5->word_1fc = r1_2;
        }
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_002aa6c0
GUEST_EXPORT_FRAMED(0x002aa6c0, d_002aa6c0::f_002aa6c0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002aa92c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002aa92c {

struct __attribute__((packed)) Object_002aa92c_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_002aa92c_1, word_0, 0x0);

inline guest::global<u32, 0x00000138> global_00000138;

void f_002aa92c(u32 r0, gptr<Object_002aa92c_1> arg1, u32 r2) {
    if (*gptr<u8>((r2 + (r2 << 2) << 4) + 0x868888u + 0x4du) != 0) {  // (from the original)
        u32 zf_1 = r2 == 0x1du;  // (from the original)
        u32 r2_1 = 0u;
        if (zf_1) {
            r2_1 = 1u;
        }
        u32 r0_1 = r0 + 0xf5cu;  // (from the original)
        if (r2_1 >= 2u) {
            arg1->word_0 = r0_1 + 0x2cu;  // (from the original)
            return;
        }
        arg1->word_0 = (r0_1 + (r2_1 + (r2_1 << 4) + (r2_1 << 6) << 2)) + 0x2cu;  // (from the original)
        return;
    }
    r0 = *gptr<u32>(r0 + 0x24u);  // (from the original)
    if (r0 == 0) {
        *global_00000138 = *global_00000138 + 1u;
        arg1->word_0 = 0x2c;  // (from the original)
        return;
    }
    do {
        if (*gptr<u8>(r0) == r2) {
            *gptr<u32>(r0 + 0x138u) = *gptr<u32>(r0 + 0x138u) + 1u;  // (from the original)
            arg1->word_0 = r0 + 0x2cu;  // (from the original)
            return;
        }
        r0 = *gptr<u32>(r0 + 0x13cu);  // (from the original)
        guest::preempt();
    } while (r0 != 0);
    *global_00000138 = *global_00000138 + 1u;
    arg1->word_0 = 0x2c;  // (from the original)
}

}  // namespace d_002aa92c
GUEST_EXPORT(0x002aa92c, d_002aa92c::f_002aa92c);

// f_002aab48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002aab48 {


u32 f_002aab48(u32 r0, u32 r1) {
    u32 zf_1 = r1 == 0x1du;  // (from the original)
    u32 r1_1 = 0u;
    if (zf_1) {
        r1_1 = 1u;
    }
    return r0 + (r1_1 + (r1_1 << 1) << 3) + 0x1340u;  // (from the original)
}

}  // namespace d_002aab48
GUEST_EXPORT(0x002aab48, d_002aab48::f_002aab48);

// f_002aafd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002aafd4 {

struct __attribute__((packed)) Local_002aafd4_r3_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002aafd4_r3_5, word_0, 0x0);
GUEST_OFFSET(Local_002aafd4_r3_5, word_4, 0x4);

inline constexpr guest::Function<0x002fb378, u32(u32, u32)> call_002fb378;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32)> call_002fb94c;
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> call_00305f2c;
inline constexpr guest::Function<0x00700974, u32(u32)> call_00700974;
inline constexpr guest::Function<0x00701900, u32(u32, u32, u32, u32)> call_00701900;
inline constexpr guest::Function<0x007019f0, u32(u32, u32, u32, u32)> call_007019f0;
inline constexpr guest::Function<0x007701f8, u32(u32, u32, u32, u32)> call_007701f8;

struct __attribute__((packed)) Frame_002aafd4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x4];  // (not read or written by name)
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0xc];  // (not read or written by name)
    u32 word_28;
    u32 word_2c;
    u8 unknown_30[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002aafd4, word_0, 0x0);
GUEST_OFFSET(Frame_002aafd4, word_4, 0x4);
GUEST_OFFSET(Frame_002aafd4, word_8, 0x8);
GUEST_OFFSET(Frame_002aafd4, word_c, 0xc);
GUEST_OFFSET(Frame_002aafd4, word_14, 0x14);
GUEST_OFFSET(Frame_002aafd4, word_18, 0x18);
GUEST_OFFSET(Frame_002aafd4, word_28, 0x28);
GUEST_OFFSET(Frame_002aafd4, word_2c, 0x2c);
GUEST_SIZE(Frame_002aafd4, 0x34);

u32 f_002aafd4(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_002aafd4> frame;  // the original's stack frame
    u32 r0_2 = 0;
    u32 r5 = r0;
    u32 r8 = r1;
    u32 r0_1 = call_00305f2c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0_1 == 3u) {
        if (r8 == 0x48u) {  // (from the original)
            return 0u;
        }
        frame->word_2c = 0;
        frame->word_28 = 0x24;  // (from the original)
        call_007019f0(frame.at(0x2c).addr(), frame.at(0x28).addr(), r8, guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        u32 r0_4 = frame->word_28;
        if (r0_4 == 0x24u) {  // (from the original)
            r0_2 = call_002fb94c(r0_4, r1);
            r1 = guest::cpu()->r[1];
            if (r0_2 == 0) {
                return r0_2;
            }
            u32 r0_5 = r0_2 + 0x6c20u;  // (from the original)
            frame->word_14 = r0_5;
            u32 r0_6 = call_002fb378(r0_5, r1);
            u32 r0_7 = call_00700974(r0_6);
            r3 = guest::cpu()->r[3];
            u32 r6 = r5 + 0x1000u;  // (from the original)
            r1 = *gptr<u8>(r6 + 0x1f4u);  // (from the original)
            if (r1 != r0_7) {
                *gptr<u8>(r6 + 0x1f4u) = u8(r0_7);  // (from the original)
                call_00701900(r5 + 0x13b8u, r1, guest::cpu()->r[2], r3);  // (from the original)
                r1 = guest::cpu()->r[1];
                r3 = guest::cpu()->r[3];
                frame->word_18 = 0;
                frame->word_0 = 0x24;  // (from the original)
                u32 r7 = 0u;
                frame->word_4 = 0;
                frame->word_8 = 0;
                frame->word_c = 0;
                u32 r4 = r7;
                u32 r10 = 1u;
                u32 r11 = frame.at(4).addr();
                u32 r9 = r5 + 0x1002u;  // (from the original)
                do {
                    u32 r2_5 = *gptr<u8>(r5 + r4 + 0x13b8u);  // (from the original)
                    if (r2_5 < 0x53u) {  // (from the original)
                        call_007019f0(frame.at(0x18).addr(), frame.at(0).addr(), r2_5, r3);  // (from the original)
                        r1 = guest::cpu()->r[1];
                        r3 = guest::cpu()->r[3];
                        if (frame->word_0 == 0x24u) {  // (from the original)
                            gptr<Local_002aafd4_r3_5> r3_5 = gptr<Local_002aafd4_r3_5>(frame.at(0x14).addr());  // (from the original)
                            u32 r0_11 = call_007701f8(r3_5->word_0, 0x24u, r3_5->word_4, r3_5.addr());  // (from the original)
                            r1 = guest::cpu()->r[1];
                            r3 = guest::cpu()->r[3];
                            if (r0_11 != 0) {
                                r7 += 1u;
                                *gptr<u32>(r11 + (r4 << 2)) = r10;
                                if (r4 == 2u) {
                                    u32 r0_12 = 0u;
                                    if (r7 != 1u && r7 == 2u) {
                                        r0_12 = frame->word_4;
                                        if (r0_12 != 0) {
                                            r0_12 = 1u;
                                        }
                                    }
                                    r1 = r0_12 + r5 + 0x1000u;  // (from the original)
                                    u32 r0_13 = *gptr<u8>(r1 + 0x3b8u);  // (from the original)
                                    *gptr<u8>(r1 + 0x3b8u) = u8(u32(*gptr<u8>(r9 + 0x3b8u)));  // (from the original)
                                    *gptr<u8>(r9 + 0x3b8u) = u8(r0_13);  // (from the original)
                                }
                            }
                        }
                    }
                    r4 += 1u;
                    guest::preempt();
                } while (s32(r4) < 3);
            }
            if (*gptr<u8>(r6 + 0x3b8u) != r8 && *gptr<u8>(r6 + 0x3b9u) != r8) {  // (from the original)
                r0_2 = call_007701f8(frame->word_14, 0x24u, r8, r3);  // (from the original)
                r1 = guest::cpu()->r[1];
                if (r0_2 == 0) {
                    return r0_2;
                }
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_002aafd4
GUEST_EXPORT_FRAMED(0x002aafd4, d_002aafd4::f_002aafd4, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_002ab16c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ab16c {

inline guest::global<u8, 0x0094f520> global_0094f520;

u32 f_002ab16c() {
    u32 r1_1 = *global_0094f520;
    if (r1_1 == 0) {
        r1_1 = 1u;
        *global_0094f520 = u8(r1_1);
    }
    guest::cpu()->r[1] = r1_1;
    return 0x94f520u;  // (from the original)
}

}  // namespace d_002ab16c
GUEST_EXPORT(0x002ab16c, d_002ab16c::f_002ab16c);

// f_002ab240: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ab240 {

struct __attribute__((packed)) Object_002ab240_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Object_002ab240_0, word_1c, 0x1c);

struct __attribute__((packed)) Local_002ab240_r12 {
    u8 unknown_0[0x202];  // (not used here)
    u8 byte_202;
};
GUEST_OFFSET(Local_002ab240_r12, byte_202, 0x202);


u32 f_002ab240(gptr<Object_002ab240_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r4 = arg0->word_1c;
    gptr<Local_002ab240_r12> r12 = gptr<Local_002ab240_r12>(r0 + 0x1000u);  // (from the original)
L_2ab24c:;
    u32 r1 = r4;
    u32 r2 = u32(r12->byte_202) + 1u & 0xffu;  // (from the original)
    r12->byte_202 = u8(r2);
    if (r4 != 0) {
        do {
            u32 r3_1 = *gptr<u32>(r1);
            if (r3_1 != 0 && *gptr<u8>(r3_1 + 0x18cu) == r2) {  // (from the original)
                guest::preempt();
                goto L_2ab24c;
            }
            r1 = *gptr<u32>(r1 + 4u);
            guest::preempt();
        } while (r1 != 0);
    }
    r1 = 0u;
    do {
        u32 r3_2 = *gptr<u32>(r0 + (r1 + (r1 << 1) << 3) + 0x1340u);  // (from the original)
        if (r3_2 != 0 && *gptr<u8>(r3_2 + 0x18cu) == r2) {  // (from the original)
            guest::preempt();
            goto L_2ab24c;
        }
        r1 += 1u;
        guest::preempt();
    } while (s32(r1) < 2);
    return r2 & 0xffu;  // (from the original)
}

}  // namespace d_002ab240
GUEST_EXPORT_FRAMED(0x002ab240, d_002ab240::f_002ab240, 0x10);  // pushes {r4} first, as the original

// f_002ab3bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ab3bc {

struct __attribute__((packed)) Object_002ab3bc_0 {
    u8 unknown_0[0x11fc];  // (not used here)
    u32 word_11fc;
};
GUEST_OFFSET(Object_002ab3bc_0, word_11fc, 0x11fc);

struct __attribute__((packed)) Local_002ab3bc_r4_1 {
    u8 unknown_0[0x1f8];  // (not used here)
    u32 word_1f8;
    u32 word_1fc;
};
GUEST_OFFSET(Local_002ab3bc_r4_1, word_1f8, 0x1f8);
GUEST_OFFSET(Local_002ab3bc_r4_1, word_1fc, 0x1fc);

inline guest::global<u8, 0x0094f522> global_0094f522;
inline guest::global<u8, 0x0094f523> global_0094f523;
inline constexpr guest::Function<0x002aa6c0, u32(u32, u32)> call_002aa6c0;
inline constexpr guest::Function<0x002ab460, u32(u32, u32, u32, u32)> call_002ab460;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> call_002f74e0;

void f_002ab3bc(gptr<Object_002ab3bc_0> arg0, u32 r1, u32 r2) {
    u32 r0_2 = 0;
    gptr<Local_002ab3bc_r4_1> r4_1 = gptr<Local_002ab3bc_r4_1>(arg0.addr() + 0x1000u);  // (from the original)
    u32 r0_1 = arg0->word_11fc;
    if (s32(r0_1) > 0) {
        r0_2 = r0_1 - 1u;
    } else {
        u32 r0_3 = *global_0094f522;
        if (r0_3 != 0) {
            u32 r0_4 = call_002f74c8(r0_3, r1, r2, guest::cpu()->r[3]);
            u32 r0_5 = call_002f74e0(0x20000u, r0_4);  // (from the original)
            if (r0_5 == 0) {
                u32 r0_6 = *global_0094f523;
                if (r0_6 != 3u && r0_6 != 4u && r0_6 != 5u && r0_6 != 6u) {
                    u32 r0_7 = call_002aa6c0(arg0.addr(), arg0.addr() + 0x11e8u);  // (from the original)
                    r1 = guest::cpu()->r[1];
                    if (r0_7 != 0) {
                        return;
                    }
                }
            }
        }
        r0_2 = call_002ab460(arg0.addr(), 0x53u, 0u, guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_2 != 0) {
            r4_1->word_1fc = r4_1->word_1f8;
            return;
        }
    }
    r4_1->word_1fc = r0_2;
    guest::cpu()->r[1] = r1;
}

}  // namespace d_002ab3bc
GUEST_EXPORT_FRAMED(0x002ab3bc, d_002ab3bc::f_002ab3bc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002abba8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002abba8 {

struct __attribute__((packed)) Local_002abba8_r4_1 {
    u8 unknown_0[0x1e8];  // (not used here)
    u32 word_1e8;
    float float_1ec;
    u32 word_1f0;
};
GUEST_OFFSET(Local_002abba8_r4_1, word_1e8, 0x1e8);
GUEST_OFFSET(Local_002abba8_r4_1, float_1ec, 0x1ec);
GUEST_OFFSET(Local_002abba8_r4_1, word_1f0, 0x1f0);

inline guest::global<u8, 0x0094f521> global_0094f521;
inline guest::global<u8, 0x0094f522> global_0094f522;
inline guest::global<u32, 0x0094f530> global_0094f530;
inline guest::global<u32, 0x0094f534> global_0094f534;
inline constexpr guest::Function<0x00598164, u32(u32, u32, u32, u32)> call_00598164;
inline constexpr guest::Function<0x006c5c60, u32(u32, u32, u32, u32)> call_006c5c60;

void f_002abba8(u32 r0, u32 r1, float S0) {
    gptr<Local_002abba8_r4_1> r4_1 = gptr<Local_002abba8_r4_1>(r0 + 0x1000u);  // (from the original)
    u32 r5_1 = r0 + 0x11e8u;  // (from the original)
    if (*global_0094f521 == 0) {
        if (*global_0094f522 != 0) {
            r4_1->word_1e8 = *global_0094f530;
            r4_1->word_1f0 = *global_0094f534;
            call_006c5c60(r5_1, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
            float S0_1 = guest::cpu()->s[0];
            r4_1->float_1ec = S0_1;
            return;
        }
    } else {
        *global_0094f521 = 0;
        *global_0094f522 = 0;
        guest::cpu()->s[0] = S0;
        u32 r0_1 = call_00598164(r5_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_1 != 0) {
            call_006c5c60(r5_1, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            float S0_3 = guest::cpu()->s[0];
            r4_1->float_1ec = S0_3;
            *global_0094f522 = 1;
            *global_0094f530 = r4_1->word_1e8;
            *global_0094f534 = r4_1->word_1f0;
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_002abba8
GUEST_EXPORT_FRAMED(0x002abba8, d_002abba8::f_002abba8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002abdfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002abdfc {

inline guest::global<u32, 0x0086c2f0> global_0086c2f0;
inline constexpr guest::Function<0x002f74c8, u32(u32)> call_002f74c8;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> call_002f74e0;
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;
inline constexpr guest::Function<0x002fdf10, u32(u32, u32, u32, u32)> call_002fdf10;
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;
inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> call_005c33cc;
inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> call_006bbd54;
inline constexpr guest::Function<0x00700adc, u32(u32)> call_00700adc;
inline constexpr guest::Function<0x00700f58, u32(u32)> call_00700f58;

struct __attribute__((packed)) Frame_002abdfc {
    u32 word_0;
};
GUEST_OFFSET(Frame_002abdfc, word_0, 0x0);
GUEST_SIZE(Frame_002abdfc, 0x4);

u32 f_002abdfc(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_002abdfc> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r5_1 = r0;
    u32 r0_1 = call_002fb94c(r0, r1, r2, r3);
    u32 r0_2 = call_002f74c8(r0_1);
    r0 = call_002f74e0(0x20000u, r0_2);  // (from the original)
    r1 = guest::cpu()->r[1];
    u32 r2_3 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r0 = call_005c33cc(4u, 0u, r2_3, r3);
        r1 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0 && r0_1 != 0) {
            r0 = u32(*gptr<u8>(r0_1 + 0x5701u)) << 0x1e;  // (from the original)
            if (r0 >> 0x1f) {  // (from the original)
                r0 = u32(*gptr<u8>(r0_1 + 0x572bu)) >> 7;  // (from the original)
                if (r0 == 0) {
                    r0 = call_002fdf10(9u, r1, r2_3, r3);
                    r1 = guest::cpu()->r[1];
                    r2_3 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0 != 0) {
                        r0 = *gptr<u32>(r5_1 + 0x1cu);  // (from the original)
                        r1 = 0u;
                        if (r0 != 0) {
                            do {
                                r2_3 = *gptr<u32>(r0);
                                if (r2_3 != 0) {
                                    r2_3 = u32(*gptr<u8>(r2_3 + 0xc9u)) - 0x49u;  // (from the original)
                                    if (r2_3 <= 7u) {
                                        r1 += 1u;
                                    }
                                }
                                r0 = *gptr<u32>(r0 + 4u);
                                guest::preempt();
                            } while (r0 != 0);
                            if (r1 >= 5u) {
                                goto L_2abf14;
                            }
                        }
                        r0 = call_002ff6f8(0x64u, r1, r2_3, r3);  // (from the original)
                        r1 = guest::cpu()->r[1];
                        r2_3 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        if (r0 < 5u) {
                            return 0x50u;  // (from the original)
                        }
                        if (r0 < 0x5fu) {  // (from the original)
                            u32 r1_2 = u32(u64(r0) * 0x49249249u + (u64(0u) << 0x20 | 0x49249249u) >> 0x20) >> 1;  // (from the original)
                            call_006bbd54(frame.at(0).addr(), 0x25u, r1_2 - (r1_2 << 3) + r0, r3);  // (from the original)
                            u32 r0_5 = call_00700adc(frame.at(0).addr());
                            return r0_5;
                        }
                    }
                }
            }
        }
    }
L_2abf14:;
    u32 r0_6 = call_002fb378(r0, r1, r2_3, r3);
    u32 r0_7 = call_00700f58(r0_6);
    u32 r4 = r0_7;
    u32 r0_9 = call_002ff6f8(*global_0086c2f0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0_9;
    do {
        if (*gptr<u16>(r4 + 2u) > r1) {
            u32 r0_10 = *gptr<u8>(r4);
            guest::cpu()->r[1] = r1;
            return r0_10;
        }
        r4 += 4u;
        guest::preempt();
    } while (1);
}

}  // namespace d_002abdfc
GUEST_EXPORT_FRAMED(0x002abdfc, d_002abdfc::f_002abdfc, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_002abf60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002abf60 {

struct __attribute__((packed)) Object_002abf60_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Object_002abf60_0, word_1c, 0x1c);

struct __attribute__((packed)) Local_002abf60_r0_1 {
    u8 unknown_0[0x340];  // (not used here)
    u32 word_340;
    u8 unknown_344[0xc];  // (not used here)
    u8 byte_350;
    u8 unknown_351[0x7];  // (not used here)
    u32 word_358;
    u8 unknown_35c[0xc];  // (not used here)
    u8 byte_368;
};
GUEST_OFFSET(Local_002abf60_r0_1, word_340, 0x340);
GUEST_OFFSET(Local_002abf60_r0_1, byte_350, 0x350);
GUEST_OFFSET(Local_002abf60_r0_1, word_358, 0x358);
GUEST_OFFSET(Local_002abf60_r0_1, byte_368, 0x368);


u32 f_002abf60(gptr<Object_002abf60_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = r0;
    r0 = arg0->word_1c;
    if (r0 != 0) {
        do {
            if (*gptr<u8>(r0 + 0x10u) == r1) {  // (from the original)
                return r0;
            }
            r0 = *gptr<u32>(r0 + 4u);
            guest::preempt();
        } while (r0 != 0);
    }
    gptr<Local_002abf60_r0_1> r0_1 = gptr<Local_002abf60_r0_1>(r2 + 0x1000u);  // (from the original)
    if (r0_1->word_340 != 0 && r0_1->byte_350 == r1) {
        return r2 + 0x1340u;  // (from the original)
    }
    if (r0_1->word_358 == 0) {
        return 0u;
    }
    if (r0_1->byte_368 == r1) {
        return r2 + 0x1358u;  // (from the original)
    }
    return 0u;
}

}  // namespace d_002abf60
GUEST_EXPORT(0x002abf60, d_002abf60::f_002abf60);

// f_002ac76c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ac76c {

inline constexpr guest::Function<0x0056cce4, u32(u32, u32, u32, u32)> call_0056cce4;
inline constexpr guest::Function<0x0062f04c, u32(u32, u32, u32)> call_0062f04c;
inline constexpr guest::Function<0x00700f58, u32(u32)> call_00700f58;

struct __attribute__((packed)) Frame_002ac76c {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Frame_002ac76c, word_0, 0x0);
GUEST_OFFSET(Frame_002ac76c, word_4, 0x4);
GUEST_OFFSET(Frame_002ac76c, word_8, 0x8);
GUEST_SIZE(Frame_002ac76c, 0xc);

u32 f_002ac76c(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_002ac76c> frame;  // the original's stack frame
    u32 r5 = r0;
    u32 r7 = r1;
    u32 r9 = 0x846fb0u;  // (from the original)
    u32 r8 = 0x86c2f0u;  // (from the original)
    u32 r6 = r2;
    u32 r4 = 0u;
    do {
        u32 r1_1 = *gptr<u32>(r6 + 4);
        u32 r2_1 = *gptr<u32>(r6 + 8);
        frame->word_0 = *gptr<u32>(r6);
        frame->word_4 = r1_1;
        frame->word_8 = r2_1;
        u32 r1_2 = *gptr<s8>(r9 + r4);
        call_0056cce4(frame.at(0).addr(), r1_2, r2_1, guest::cpu()->r[3]);
        r0 = call_00700f58(frame.at(0).addr());
        r1 = guest::cpu()->r[1];
L_2ac7ac:;
        u32 r2_3 = *gptr<u8>(r0);
        if (r2_3 == r5) {
            if (r7 == 1u) {
                u32 r0_4 = call_0062f04c(frame.at(0).addr(), r1, r2_3);
                r1 = guest::cpu()->r[1];
                if (r0_4 == 3u || r0_4 == 4u || r0_4 == 5u || r0_4 == 6u) {
                    goto L_2ac81c;
                }
                return 1u;
            }
            if (r7 == 2u) {
                u32 r0_6 = call_0062f04c(frame.at(0).addr(), r1, r2_3);
                r1 = guest::cpu()->r[1];
                if (r0_6 == 5u || r0_6 == 6u) {
                    return 1u;
                }
                goto L_2ac81c;
            }
            guest::cpu()->r[1] = r1;
            return 1u;
        }
        r1 = *gptr<u32>(r8);
        if (*gptr<u16>(r0 + 2u) != r1) {
            r0 += 4u;
            guest::preempt();
            goto L_2ac7ac;
        }
L_2ac81c:;
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 6);
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_002ac76c
GUEST_EXPORT_FRAMED(0x002ac76c, d_002ac76c::f_002ac76c, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_002ad1fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ad1fc {

inline constexpr guest::Function<0x002ad0a0, u32(u32, u32, u32, u32)> call_002ad0a0;
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;
inline constexpr guest::Function<0x002ffad8, u32(u32)> call_002ffad8;

u32 f_002ad1fc(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_002fcb34(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0x24u) {  // (from the original)
        return 0u;
    }
    u32 r0_2 = call_002ffad8(r0);
    frame.release();
    return call_002ad0a0(r0_2 & 0xffu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_002ad1fc
GUEST_EXPORT(0x002ad1fc, d_002ad1fc::f_002ad1fc);

// f_002ae274: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ae274 {

inline guest::global<u8, 0x0094fd2b> global_0094fd2b;
inline constexpr guest::Function<0x0026d328, u32(u32)> call_0026d328;
inline constexpr guest::Function<0x002bf9cc, u32(u32, u32, u32, u32)> call_002bf9cc;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> call_002fc934;

struct __attribute__((packed)) Frame_002ae274 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002ae274, word_0, 0x0);
GUEST_SIZE(Frame_002ae274, 0x8);

void f_002ae274(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_002ae274> frame;  // the original's stack frame
    u32 r0_1 = call_002fb94c(r0, r1, r2, r3);
    *global_0094fd2b = 1;
    call_002fc934(frame.at(4).addr(), 0x94fd64u);  // (from the original)
    frame->word_0 = 1;
    call_002bf9cc(r0_1 + 0x6bd0u, *gptr<u32>(r0 + 0xc8u), frame.at(4).addr(), 0u);  // (from the original)
    call_0026d328(r0 + 0xf4u);  // (from the original)
}

}  // namespace d_002ae274
GUEST_EXPORT_FRAMED(0x002ae274, d_002ae274::f_002ae274, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002afa70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002afa70 {

struct __attribute__((packed)) Local_002afa70_ea_1 {
    u32 word_0;
    u8 unknown_4[0x394];  // (not used here)
    u32 word_398;
    u8 unknown_39c[0xe0];  // (not used here)
    u32 word_47c;
};
GUEST_OFFSET(Local_002afa70_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_002afa70_ea_1, word_398, 0x398);
GUEST_OFFSET(Local_002afa70_ea_1, word_47c, 0x47c);

inline constexpr u32 vtable_ComButton1Lyt = 0x008ee218u;
inline constexpr u32 vtable_Control1Button = 0x008ef22cu;
inline constexpr u32 vtable_Control1Button_at_e4 = 0x008ef270u;
inline constexpr u32 vtable_BsMenuItemChange = 0x008f1414u;
inline constexpr u32 vtable_BsMenuItemChange_at_28 = 0x008f1480u;
inline constexpr u32 vtable_BsMenuItemChange_at_a4 = 0x008f1584u;
inline constexpr u32 vtable_ComButtonLytBase = 0x008f18f4u;
inline constexpr u32 vtable_ItemSelectNameWindow = 0x008f47a0u;
inline constexpr guest::Function<0x0026fe3c, u32(u32)> call_0026fe3c;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;
inline constexpr guest::Function<0x002f770c, u32(u32)> call_002f770c;
inline constexpr guest::Function<0x003170d0, u32(u32)> call_003170d0;
inline constexpr guest::Function<0x00567ef0, u32(u32, u32)> call_00567ef0;
inline constexpr guest::Function<0x0056988c, u32(u32)> call_0056988c;
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;
inline constexpr guest::Function<0x005e3194, u32(u32, u32)> call_005e3194;
inline constexpr guest::Function<0x005e8a7c, u32(u32)> call_005e8a7c;
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> call_006aaa30;

u32 f_002afa70(gptr<BsMenuItemChange> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    arg0->word_0 = vtable_BsMenuItemChange;
    arg0->word_a4 = vtable_BsMenuItemChange_at_a4;
    arg0->word_28 = vtable_BsMenuItemChange_at_28;
    u32 r0_2 = call_005bf744(arg0.addr() + 0xa078u, 0x8f1414u, 0x8f1584u, 0x8f1480u);  // (from the original)
    gptr<Local_002afa70_ea_1> ea_1 = gptr<Local_002afa70_ea_1>(r0_2 - 0x9c8u);  // (from the original)
    ea_1->word_0 = vtable_ComButton1Lyt;
    ea_1->word_398 = vtable_Control1Button;
    ea_1->word_47c = vtable_Control1Button_at_e4;
    call_002f76ac(ea_1.addr() + 0x4b0u, 0x2e0b3cu, 0x518u, 1u);  // (from the original)
    u32 r0_4 = call_002f770c(ea_1.addr() + 0x398u);  // (from the original)
    *gptr<u32>(r0_4 - 0x398u) = vtable_ComButtonLytBase;  // (from the original)
    u32 r0_6 = call_00567ef0(r0_4 - 0x248u, 0x8f18f4u);  // (from the original)
    u32 r0_8 = call_005bf744(r0_6 - 0x14cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_10 = call_005e8a7c(r0_8 - 0xc68u);  // (from the original)
    *gptr<u32>(r0_10 - 0x4f0u) = vtable_ItemSelectNameWindow;  // (from the original)
    u32 r0_12 = call_005e3194(r0_10 - 0xd4u, 0x8f47a0u);  // (from the original)
    u32 r0_14 = call_0056988c(r0_12 - 0x28u);  // (from the original)
    u32 r0_16 = call_0056988c(r0_14 - 0x28u);  // (from the original)
    u32 r0_18 = call_005bf744(r0_16 - 0x15cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_20 = call_00567ef0(r0_18 - 0x24cu, guest::cpu()->r[1]);  // (from the original)
    u32 r0_22 = call_0026fe3c(r0_20 - 0x848cu);  // (from the original)
    u32 r0_24 = call_003170d0(r0_22 - 0xccu);  // (from the original)
    frame.release();
    return call_006aaa30(r0_24 - 0x28u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_002afa70
GUEST_EXPORT(0x002afa70, d_002afa70::f_002afa70);
