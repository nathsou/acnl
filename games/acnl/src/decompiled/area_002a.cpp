// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_002a2850: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a2850 {

inline constexpr guest::Function<0x001323bc, u32(u32)> call_001323bc;  // (from the original)
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> call_00569e6c;  // (from the original)

u32 f_002a2850(u32 r0) {
    guest::cpu()->r[13] -= 8u;
    u32 r0_1 = call_001323bc(r0);
    guest::cpu()->r[13] += 8u;
    return call_00569e6c(r0_1, r0 + 0x24u, 0u);  // (from the original)
}

}  // namespace d_002a2850
GUEST_EXPORT(0x002a2850, d_002a2850::f_002a2850);

// f_002a2ad0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a2ad0 {

inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> call_001323b4;  // (from the original)

u32 f_002a2ad0(u32 r0) {
    return call_001323b4(r0 + 0x24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_002a2ad0
GUEST_EXPORT(0x002a2ad0, d_002a2ad0::f_002a2ad0);

// f_002a324c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a324c {


u32 f_002a324c(u32 r0, u32 r1, u32 r2) {
    u32 r5 = 0xffu;  // (from the original)
    u32 r12 = ~0u;
    u32 r3 = 0u;
L_2a325c:;
    u32 r4_1 = r0 + 0x10u;  // (from the original)
    if (r3 < 0xau) {  // (from the original)
        r4_1 += (r3 << 3);
    }
    if (*gptr<u32>(r4_1) + 1u != 0) {
        u32 r4_2 = r0 + 0x10u;  // (from the original)
        if (r3 < 0xau) {  // (from the original)
            r4_2 += (r3 << 3);
        }
        if (u32(*gptr<u8>(r4_2 + 4u)) < r5) {
            u32 r4_3 = r0 + 0x10u;  // (from the original)
            if (r3 < 0xau) {  // (from the original)
                r4_3 += (r3 << 3);
            }
            r12 = r3;
            r5 = *gptr<u8>(r4_3 + 4u);
        }
        r3 += 1u;
        if (s32(r3) < 0xa) {  // (from the original)
            guest::preempt();
            goto L_2a325c;
        }
        u32 r3_1 = r0 + 0x10u;  // (from the original)
        u32 cf_1 = r12 >= 0xau;  // (from the original)
        if (!cf_1) {
            r3_1 += (r12 << 3);
        }
        u32 r0_1 = r0 + 0x10u;  // (from the original)
        if (!cf_1) {
            r0_1 += (r12 << 3);
        }
        *gptr<u32>(r3_1) = r1;
        *gptr<u8>(r0_1 + 4u) = u8(r2);
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    u32 cf_2 = r3 >= 0xau;  // (from the original)
    u32 r12_1 = r0 + 0x10u;  // (from the original)
    if (!cf_2) {
        r12_1 += (r3 << 3);
    }
    *gptr<u32>(r12_1) = r1;
    u32 r1_1 = r0 + 0x10u;  // (from the original)
    if (!cf_2) {
        r1_1 += (r3 << 3);
    }
    *gptr<u8>(r1_1 + 4u) = u8(r2);
    u32 r1_2 = *gptr<u32>(r0 + 0x60u) + 1u;  // (from the original)
    *gptr<u32>(r0 + 0x60u) = r1_2;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0;
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
GUEST_OFFSET(Object_002a3e08_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_002a3e08_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_002a3e08_0, word_1c, 0x1c);  // (from the original)

struct __attribute__((packed)) Local_002a3e08_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002a3e08_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002a3e08_ea_3, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_002a3e08_ea_8 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_002a3e08_ea_8, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002a3e08_ea_8, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002a3e08_ea_8, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_002a3e08_r1_5 {
    u8 unknown_0[0x98];  // (not used here)
    u32 word_98;
    u8 byte_9c;
    u8 unknown_9d[0x7];  // (not used here)
    u32 word_a4;
};
GUEST_OFFSET(Local_002a3e08_r1_5, word_98, 0x98);  // (from the original)
GUEST_OFFSET(Local_002a3e08_r1_5, byte_9c, 0x9c);  // (from the original)
GUEST_OFFSET(Local_002a3e08_r1_5, word_a4, 0xa4);  // (from the original)

inline guest::global<u32, 0x002a3f58> global_002a3f58;  // (from the original)
inline guest::global<u32, 0x0083a8f0> global_0083a8f0;  // (from the original)
inline guest::global<u32, 0x0094d004> global_0094d004;  // (from the original)
inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x004c5104, u32(u32, u32)> call_004c5104;  // (from the original)
inline constexpr guest::Function<0x006b4170, u32(u32, u32, u32)> call_006b4170;  // (from the original)
inline constexpr guest::Function<0x006b41a4, u32(u32, u32, u32, u32)> call_006b41a4;  // (from the original)
inline constexpr guest::Function<0x0070eb14, u32(u32, u32, u32, u32)> call_0070eb14;  // (from the original)

u32 f_002a3e08(gptr<Object_002a3e08_0> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrame frame(0xa8);  // the original's stack frame
    u32 r0 = arg0.addr();
    float S0_1 = 0;
    u32 r7_1 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    float S0_2 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    gptr<Local_002a3e08_ea_3> ea_3 = gptr<Local_002a3e08_ea_3>(0u);
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    float S0_3 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    gptr<Local_002a3e08_r1_5> r1_5 = gptr<Local_002a3e08_r1_5>(0u);
    u32 ea_7 = 0;
    gptr<Local_002a3e08_ea_8> ea_8 = gptr<Local_002a3e08_ea_8>(0u);
    u32 r3_1 = 0;
    u32 r2_2 = 0;
    u32 r0_8 = 0;
    u32 r1_6 = 0;
    if (r1 != 0) {
        u32 r1_1 = arg0->word_14;
        u32 r0_1 = *global_0094d004;
        u32 r0_2 = call_0070eb14(r0_1, r1_1, r2, r3);
        S0_1 = guest::cpu()->s[0];
        r7_1 = ~0u;
        if (r0_2 > r1) {
            goto L_2a3e6c;
        }
        arg0->word_14 = r7_1;
        arg0->word_18 = r7_1;
        return 0u;
    }
    r2_1 = arg0->word_18;
    r0_3 = *global_0094d080;
    r1_3 = r0 + 0x1cu;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0_4 = call_006b4170(r0_3, r1_3, r2_1);
    r1_4 = guest::cpu()->r[1];
    S0_2 = guest::cpu()->s[0];
    goto L_2a3f20;
L_2a3e6c:;
    ea_1 = frame.at(0).addr();
    *gptr<u32>(ea_1) = 0;
    ea_2 = frame.at(0x18).addr();  // (from the original)
    *gptr<u32>(ea_2) = 0;
    ea_3 = gptr<Local_002a3e08_ea_3>(frame.at(0x1c).addr());  // (from the original)
    ea_3->word_0 = 0;
    ea_3->word_4 = r7_1;
    *frame.at<u32>(0x34) = 0;  // (from the original)
    *frame.at<u32>(0x24) = r7_1;  // (from the original)
    *frame.at<u32>(0x28) = r7_1;  // (from the original)
    *frame.at<u32>(0x30) = 0;  // (from the original)
    *frame.at<u32>(0x2c) = r7_1;  // (from the original)
    *frame.at<u16>(0x48) = 0;  // (from the original)
    r0_5 = frame.at(0x4c).addr();  // (from the original)
    *frame.at<u32>(0x38) = 0;  // (from the original)
    *frame.at<u32>(0x3c) = 0;  // (from the original)
    *frame.at<u32>(0x40) = 0;  // (from the original)
    *frame.at<u32>(0x44) = 0;  // (from the original)
    *frame.at<u16>(0x4a) = 0;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    r0_6 = call_00301d0c(r0_5, 0x4bfb50u, 0xdu, 4u);  // (from the original)
    r0_7 = r0_6 - 4u;
    S0_3 = std::bit_cast<float>(*global_002a3f58);
    *gptr<u32>(r0_7 + 0x38u) = std::bit_cast<u32>(S0_3);  // (from the original)
    ea_4 = r0_7 + 0x3cu;  // (from the original)
    *gptr<u8>(ea_4) = 0x7f;  // (from the original)
    ea_5 = r0_7 + 0x3fu;  // (from the original)
    *gptr<u8>(ea_5) = 0;
    ea_6 = r0_7 + 0x40u;  // (from the original)
    *gptr<u32>(ea_6) = r7_1;
    r1_5 = gptr<Local_002a3e08_r1_5>(r0_7 - 0x48u);  // (from the original)
    ea_7 = r0_7 + 0x3du;  // (from the original)
    *gptr<u16>(ea_7) = 0;
    ea_8 = gptr<Local_002a3e08_ea_8>(r0_7 + 0x44u);  // (from the original)
    ea_8->byte_0 = 0;
    r3_1 = frame.at(0).addr();
    ea_8->word_4 = 0;
    ea_8->word_8 = 0;
    r1_5->word_98 = 0;
    r1_5->byte_9c = 0;
    r1_5->word_a4 = 0;
    *frame.at<u32>(0) = 1;
    *frame.at<u8>(4) = 1;
    *frame.at<u32>(8) = r1;
    r2_2 = arg0->word_18;
    r0_8 = *global_0094d080;
    r1_6 = r0 + 0x1cu;  // (from the original)
    guest::cpu()->s[0] = S0_3;
    r0_4 = call_006b41a4(r0_8, r1_6, r2_2, r3_1);
    r1_4 = guest::cpu()->r[1];
    S0_2 = guest::cpu()->s[0];
L_2a3f20:;
    if (r0_4 != 0) {
        u32 r0_9 = arg0->word_1c;
        r1_4 = 0u;
        S0_2 = std::bit_cast<float>(*global_0083a8f0);
        if (r0_9 != 0) {
            guest::cpu()->s[0] = S0_2;
            call_004c5104(r0_9, r1_4);
            r1_4 = guest::cpu()->r[1];
            S0_2 = guest::cpu()->s[0];
        }
    }
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->s[0] = S0_2;
    return r0_4;
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
    u32 word_23b4;
    u32 word_23b8;
    u32 word_23bc;
    u8 byte_23c0;
    u8 byte_23c1;
    u8 unknown_23c2[0x2];  // (not used here)
    u32 word_23c4;
};
GUEST_OFFSET(Object_002a4abc_0, byte_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, word_600, 0x600);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, word_604, 0x604);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, word_608, 0x608);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, word_60c, 0x60c);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, half_22a8, 0x22a8);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, half_22aa, 0x22aa);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, half_22ac, 0x22ac);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, half_22ae, 0x22ae);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, half_22b0, 0x22b0);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, half_22b2, 0x22b2);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, word_22b4, 0x22b4);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, word_22b8, 0x22b8);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, word_22bc, 0x22bc);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, word_22c0, 0x22c0);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, word_23b4, 0x23b4);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, word_23b8, 0x23b8);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, word_23bc, 0x23bc);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, byte_23c0, 0x23c0);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, byte_23c1, 0x23c1);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, word_23c4, 0x23c4);  // (from the original)

inline guest::global<u32, 0x002a4b80> global_002a4b80;  // (from the original)

u32 f_002a4abc(gptr<Object_002a4abc_0> arg0) {
    u32 r0 = arg0.addr();
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
    u32 ea_1 = r0 + 0x600u;  // (from the original)
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
    float S0_1 = std::bit_cast<float>(*global_002a4b80);
    arg0->word_23b4 = std::bit_cast<u32>(S0_1);
    arg0->word_23b8 = std::bit_cast<u32>(S0_1);
    arg0->word_23bc = std::bit_cast<u32>(S0_1);
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
GUEST_OFFSET(Object_002a4b84_0, word_0, 0x0);  // (from the original)

inline guest::global<u32, 0x0094d548> global_0094d548;  // (from the original)

void f_002a4b84(gptr<Object_002a4b84_0> arg0) {
    u32 r1_1 = *global_0094d548;
    arg0->word_0 = r1_1;
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_002a4b84
GUEST_EXPORT(0x002a4b84, d_002a4b84::f_002a4b84);

// f_002a4b98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a4b98 {

inline guest::global<u32, 0x0094d560> global_0094d560;  // (from the original)
inline constexpr guest::Function<0x002783c4, u32(u32, u32, u32, u32)> call_002783c4;  // (from the original)
inline constexpr guest::Function<0x00278484, u32(u32, u32, u32, u32)> call_00278484;  // (from the original)

void f_002a4b98(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r5_1 = *global_0094d560;
    if (r5_1 != 0) {
        call_002783c4(r5_1, r1, r2, r3);
        *frame.at<u32>(0) = 0x46;  // (from the original)
        call_00278484(r5_1, r0 + 0xd4u, 0xfu, 0x20u);  // (from the original)
        *frame.at<u32>(0) = 0x46;  // (from the original)
        call_00278484(r5_1, r0 + 0x304u, 0xfu, 0x21u);  // (from the original)
        r1 = guest::cpu()->r[1];
        *gptr<u8>(r0 + 0x534u) = 1;  // (from the original)
    }
    guest::cpu()->r[1] = r1;
    return;
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
GUEST_OFFSET(Object_002a4bfc_0, word_53c, 0x53c);  // (from the original)
GUEST_OFFSET(Object_002a4bfc_0, word_540, 0x540);  // (from the original)
GUEST_OFFSET(Object_002a4bfc_0, byte_545, 0x545);  // (from the original)
GUEST_OFFSET(Object_002a4bfc_0, word_548, 0x548);  // (from the original)


void f_002a4bfc(gptr<Object_002a4bfc_0> arg0) {
    arg0->word_540 = 0;
    arg0->word_53c = arg0->word_53c + 1u;
    if (u32(arg0->byte_545) == 1u && arg0->word_548 == 0) {
        arg0->word_548 = 0x78;  // (from the original)
    } else {
        return;
    }
    return;
}

}  // namespace d_002a4bfc
GUEST_EXPORT(0x002a4bfc, d_002a4bfc::f_002a4bfc);

// f_002a4c30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a4c30 {

struct __attribute__((packed)) Object_002a4c30_0 {
    u8 unknown_0[0xc4];  // (not used here)
    u32 word_c4;
};
GUEST_OFFSET(Object_002a4c30_0, word_c4, 0xc4);  // (from the original)

struct __attribute__((packed)) Local_002a4c30_r1_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Local_002a4c30_r1_1, word_4, 0x4);  // (from the original)


void f_002a4c30(gptr<Object_002a4c30_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    if (r1 >= 0x30u) {  // (from the original)
        return;
    }
    gptr<Local_002a4c30_r1_1> r1_1 = gptr<Local_002a4c30_r1_1>(r0 + (r1 << 2));
    if (r1_1->word_4 == 0) {
        return;
    }
    r1_1->word_4 = 0;
    arg0->word_c4 = arg0->word_c4 - 1u;
    return;
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
GUEST_OFFSET(Object_002a4c60_0, word_538, 0x538);  // (from the original)
GUEST_OFFSET(Object_002a4c60_0, word_53c, 0x53c);  // (from the original)
GUEST_OFFSET(Object_002a4c60_0, word_540, 0x540);  // (from the original)
GUEST_OFFSET(Object_002a4c60_0, byte_544, 0x544);  // (from the original)
GUEST_OFFSET(Object_002a4c60_0, byte_545, 0x545);  // (from the original)
GUEST_OFFSET(Object_002a4c60_0, word_548, 0x548);  // (from the original)


void f_002a4c60(gptr<Object_002a4c60_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r3_1 = r0 + 0x500u;  // (from the original)
    u32 r2_1 = arg0->word_540 + 1u;
    arg0->word_540 = r2_1;
    u32 r12_1 = r0 + 0x548u;  // (from the original)
    u32 r5_1 = arg0->word_538 + 1u;
    arg0->word_538 = r5_1;
    if (u32(arg0->byte_544) != 0) {
        if (r2_1 >= 0x78u) {  // (from the original)
            arg0->byte_544 = 0;
            arg0->byte_545 = 0;
            arg0->word_548 = 0;
            arg0->word_538 = 0;
            arg0->word_53c = 0;
            goto L_2a4cec;
        }
        if (r2_1 >= 0x1eu) {  // (from the original)
            arg0->byte_545 = 1;
        }
        goto L_2a4cec;
    }
    if (r2_1 >= 0x5au) {  // (from the original)
        arg0->word_538 = 0;
        arg0->word_53c = 0;
        goto L_2a4cec;
    }
    if (r5_1 < 0x78u) {  // (from the original)
        goto L_2a4cec;
    }
    if (r2_1 < 0x1eu) {  // (from the original)
        arg0->byte_544 = 1;
        arg0->word_540 = 0;
    }
L_2a4cec:;
    u32 r2_2 = *gptr<u8>(r3_1 + 0x45u);  // (from the original)
    u32 zf_1 = r2_2 == 0;
    if (!zf_1) {
        r2_2 = arg0->word_548;
        zf_1 = r2_2 == 0;
    }
    if (!zf_1) {
        u32 res_1 = r2_2 - 1u;
        *gptr<u32>(r12_1) = res_1;
        if (res_1 == 0) {
            arg0->byte_545 = 0;
        }
    }
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_002a4c60
GUEST_EXPORT_FRAMED(0x002a4c60, d_002a4c60::f_002a4c60, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_002a502c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a502c {

struct __attribute__((packed)) Object_002a502c_0 {
    u8 unknown_0[0xc4];  // (not used here)
    u32 word_c4;
};
GUEST_OFFSET(Object_002a502c_0, word_c4, 0xc4);  // (from the original)


u32 f_002a502c(gptr<Object_002a502c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = r0;
    r0 = arg0->word_c4;
    u32 zf_1 = r0 == 0x30u;  // (from the original)
    u32 cf_1 = r0 >= 0x30u;  // (from the original)
    if (cf_1 && !zf_1) {
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
GUEST_OFFSET(Object_002a5080_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002a5080_0, word_c4, 0xc4);  // (from the original)
GUEST_OFFSET(Object_002a5080_0, word_c8, 0xc8);  // (from the original)
GUEST_OFFSET(Object_002a5080_0, half_cc, 0xcc);  // (from the original)
GUEST_OFFSET(Object_002a5080_0, half_ce, 0xce);  // (from the original)
GUEST_OFFSET(Object_002a5080_0, half_d0, 0xd0);  // (from the original)
GUEST_OFFSET(Object_002a5080_0, byte_d2, 0xd2);  // (from the original)
GUEST_OFFSET(Object_002a5080_0, byte_534, 0x534);  // (from the original)
GUEST_OFFSET(Object_002a5080_0, word_538, 0x538);  // (from the original)
GUEST_OFFSET(Object_002a5080_0, word_53c, 0x53c);  // (from the original)
GUEST_OFFSET(Object_002a5080_0, word_540, 0x540);  // (from the original)
GUEST_OFFSET(Object_002a5080_0, byte_544, 0x544);  // (from the original)
GUEST_OFFSET(Object_002a5080_0, byte_545, 0x545);  // (from the original)
GUEST_OFFSET(Object_002a5080_0, word_548, 0x548);  // (from the original)
GUEST_OFFSET(Object_002a5080_0, half_54c, 0x54c);  // (from the original)
GUEST_OFFSET(Object_002a5080_0, half_54e, 0x54e);  // (from the original)


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
    return;
}

}  // namespace d_002a5080
GUEST_EXPORT_FRAMED(0x002a5080, d_002a5080::f_002a5080, 0x10);  // pushes {r4} first, as the original

// f_002a5fa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a5fa8 {

struct __attribute__((packed)) Object_002a5fa8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_002a5fa8_0, word_0, 0x0);  // (from the original)


void f_002a5fa8(gptr<Object_002a5fa8_0> arg0, u32 r1) {
    if (arg0->word_0 == 0) {
        arg0->word_0 = r1;
    }
    return;
}

}  // namespace d_002a5fa8
GUEST_EXPORT(0x002a5fa8, d_002a5fa8::f_002a5fa8);

// f_002a6594: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a6594 {

struct __attribute__((packed)) Object_002a6594_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_002a6594_0, word_0, 0x0);  // (from the original)


void f_002a6594(gptr<Object_002a6594_0> arg0) {
    u32 r1_1 = arg0->word_0;
    if (r1_1 != 0) {
        r1_1 = 0u;
        arg0->word_0 = r1_1;
    }
    guest::cpu()->r[1] = r1_1;
    return;
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
    u32 word_14;
};
GUEST_OFFSET(Object_002a65d0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002a65d0_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002a65d0_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_002a65d0_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002a65d0_0, byte_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_002a65d0_0, byte_11, 0x11);  // (from the original)
GUEST_OFFSET(Object_002a65d0_0, word_14, 0x14);  // (from the original)

inline guest::global<u32, 0x002a65fc> global_002a65fc;  // (from the original)

void f_002a65d0(gptr<Object_002a65d0_0> arg0) {
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    arg0->byte_8 = 0;
    arg0->word_c = 1;
    float S0_1 = std::bit_cast<float>(*global_002a65fc);
    arg0->byte_10 = 0;
    arg0->byte_11 = 0;
    arg0->word_14 = std::bit_cast<u32>(S0_1);
    return;
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
GUEST_OFFSET(Object_002a661c_0, half_1418, 0x1418);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, byte_141a, 0x141a);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, byte_141b, 0x141b);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, half_141c, 0x141c);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, byte_141e, 0x141e);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, byte_141f, 0x141f);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, half_1420, 0x1420);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, byte_1422, 0x1422);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, byte_1423, 0x1423);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, half_1424, 0x1424);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, byte_1426, 0x1426);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, byte_1427, 0x1427);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, half_1428, 0x1428);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, byte_142a, 0x142a);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, byte_142b, 0x142b);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, half_142c, 0x142c);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, byte_142e, 0x142e);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, byte_142f, 0x142f);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, half_1430, 0x1430);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, byte_1432, 0x1432);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, byte_1433, 0x1433);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, half_1434, 0x1434);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, byte_1436, 0x1436);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, byte_1437, 0x1437);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, half_1438, 0x1438);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, byte_143a, 0x143a);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, byte_143b, 0x143b);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, half_143c, 0x143c);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, byte_143e, 0x143e);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, byte_143f, 0x143f);  // (from the original)


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
    return;
}

}  // namespace d_002a661c
GUEST_EXPORT(0x002a661c, d_002a661c::f_002a661c);

// f_002a684c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a684c {

struct __attribute__((packed)) Local_002a684c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002a684c_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002a684c_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_002a684c_ea_11 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002a684c_ea_11, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002a684c_ea_11, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_002a684c_ea_13 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002a684c_ea_13, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002a684c_ea_13, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_002a684c_ea_15 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002a684c_ea_15, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002a684c_ea_15, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_002a684c_ea_17 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002a684c_ea_17, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002a684c_ea_17, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_002a684c_ea_19 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002a684c_ea_19, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002a684c_ea_19, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_002a684c_ea_21 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002a684c_ea_21, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002a684c_ea_21, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_002a684c_ea_23 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002a684c_ea_23, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002a684c_ea_23, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_002a684c_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002a684c_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002a684c_ea_3, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_002a684c_ea_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002a684c_ea_5, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002a684c_ea_5, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_002a684c_ea_7 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002a684c_ea_7, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002a684c_ea_7, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_002a684c_ea_9 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002a684c_ea_9, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002a684c_ea_9, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_002a684c_r1_22 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_002a684c_r1_22, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002a684c_r1_22, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Local_002a684c_r1_22, byte_3, 0x3);  // (from the original)

struct __attribute__((packed)) Local_002a684c_r1_23 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_002a684c_r1_23, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002a684c_r1_23, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Local_002a684c_r1_23, byte_3, 0x3);  // (from the original)

inline guest::global<u32, 0x0088e544> global_0088e544;  // (from the original)
inline guest::global<u32, 0x0088e548> global_0088e548;  // (from the original)
inline constexpr guest::Function<0x002a66ec, u32(u32, u32, u32, u32)> call_002a66ec;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb338, u32(u32, u32, u32, u32)> call_002fb338;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> call_002fb430;  // (from the original)
inline constexpr guest::Function<0x002fb4a0, u32(u32, u32, u32, u32)> call_002fb4a0;  // (from the original)

u32 f_002a684c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    u32 r0_1 = call_002fb328(r0, r1, r2, r3);
    u32 r0_3 = call_002fb338(r0_1 + 0x80u + 0x6e212u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (r0_3 != 0) {
        u32 r0_4 = call_002fb378(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r5_1 = *gptr<u32>(r0_4);
        u32 r7_1 = *gptr<u32>(r0_4 + 4);
        u32 r8_1 = *gptr<u32>(r0_4 + 8);
        u32 r0_5 = call_002fb328(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        call_002fb430(frame.at(8).addr(), r0_5 + 0x80u + 0x6e212u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        gptr<Local_002a684c_ea_1> ea_1 = gptr<Local_002a684c_ea_1>(frame.at(0xc).addr());  // (from the original)
        u32 r1_5 = ea_1->word_4;
        u32 r3_5 = *frame.at<u32>(8);
        *frame.at<u32>(0) = ea_1->word_0;
        *frame.at<u32>(4) = r1_5;
        call_002fb4a0(r5_1, r7_1, r8_1, r3_5);
    }
    *frame.at<u32>(8) = 0;
    u32 r1_6 = *global_0088e548;
    *frame.at<u32>(0) = *global_0088e544;
    *frame.at<u32>(4) = r1_6;
    call_002a66ec(r0, r0 + 0x1418u, r1, 0x31u);  // (from the original)
    *frame.at<u32>(8) = 0;
    gptr<Local_002a684c_ea_3> ea_3 = gptr<Local_002a684c_ea_3>(0x88e54cu);  // (from the original)
    u32 r1_8 = ea_3->word_4;
    *frame.at<u32>(0) = ea_3->word_0;
    *frame.at<u32>(4) = r1_8;
    call_002a66ec(r0, r0 + 0x141cu, r1, 0x32u);  // (from the original)
    *frame.at<u32>(8) = 0;
    gptr<Local_002a684c_ea_5> ea_5 = gptr<Local_002a684c_ea_5>(0x88e554u);  // (from the original)
    u32 r1_10 = ea_5->word_4;
    *frame.at<u32>(0) = ea_5->word_0;
    *frame.at<u32>(4) = r1_10;
    call_002a66ec(r0, r0 + 0x1420u, r1, 0x33u);  // (from the original)
    *frame.at<u32>(8) = 0;
    gptr<Local_002a684c_ea_7> ea_7 = gptr<Local_002a684c_ea_7>(0x88e55cu);  // (from the original)
    u32 r1_12 = ea_7->word_4;
    *frame.at<u32>(0) = ea_7->word_0;
    *frame.at<u32>(4) = r1_12;
    call_002a66ec(r0, r0 + 0x1424u, r1, 0x34u);  // (from the original)
    *frame.at<u32>(8) = 0;
    gptr<Local_002a684c_ea_9> ea_9 = gptr<Local_002a684c_ea_9>(0x88e564u);  // (from the original)
    u32 r1_14 = ea_9->word_4;
    *frame.at<u32>(0) = ea_9->word_0;
    *frame.at<u32>(4) = r1_14;
    call_002a66ec(r0, r0 + 0x1428u, r1, 0x35u);  // (from the original)
    *frame.at<u32>(8) = 0;
    gptr<Local_002a684c_ea_11> ea_11 = gptr<Local_002a684c_ea_11>(0x88e56cu);  // (from the original)
    u32 r1_16 = ea_11->word_4;
    *frame.at<u32>(0) = ea_11->word_0;
    *frame.at<u32>(4) = r1_16;
    call_002a66ec(r0, r0 + 0x142cu, r1, 0x36u);  // (from the original)
    *frame.at<u32>(8) = 0;
    gptr<Local_002a684c_ea_13> ea_13 = gptr<Local_002a684c_ea_13>(0x88e574u);  // (from the original)
    u32 r1_18 = ea_13->word_4;
    *frame.at<u32>(0) = ea_13->word_0;
    *frame.at<u32>(4) = r1_18;
    call_002a66ec(r0, r0 + 0x1430u, r1, 0x37u);  // (from the original)
    *frame.at<u32>(8) = 0;
    gptr<Local_002a684c_ea_15> ea_15 = gptr<Local_002a684c_ea_15>(0x88e57cu);  // (from the original)
    u32 r1_20 = ea_15->word_4;
    *frame.at<u32>(0) = ea_15->word_0;
    *frame.at<u32>(4) = r1_20;
    call_002a66ec(r0, r0 + 0x1434u, r1, 0x38u);  // (from the original)
    u32 r0_7 = s32(s8(*gptr<u8>(r1 + 4u)));
    u32 res_1 = r0_7 - 0xau;  // (from the original)
    u32 r0_8 = *gptr<u32>(r1);
    gptr<Local_002a684c_r1_22> r1_22 = gptr<Local_002a684c_r1_22>(r0 + 0x1438u);  // (from the original)
    u32 r8_2 = 0x7dcu;  // (from the original)
    if (res_1 != 0 && res_1 >> 0x1f == (((r0_7 ^ 0xau) & (r0_7 ^ res_1)) >> 0x1f)) {  // (from the original)
        r0_8 += 1u;
    }
    u32 r7_2 = 0u;
    u32 r5_2 = uxth(r0_8);
    u32 r0_9 = r1_22->half_0;
    if (r5_2 >= 0x803u) {  // (from the original)
        r5_2 = r8_2;
    }
    if (r0_9 != 0 && u32(r1_22->byte_2) != 0 && u32(r1_22->byte_3) != 0) {
        if (r0_9 > 0xau) {  // (from the original)
            r0_9 += 1u;
        }
        u32 r0_10 = uxth(r0_9);
        if (r0_10 >= 0x803u) {  // (from the original)
            r0_10 = r8_2;
        }
        r7_2 = r5_2 == r0_10 ? 1u : 0u;
    }
    *frame.at<u32>(8) = 0;
    gptr<Local_002a684c_ea_17> ea_17 = gptr<Local_002a684c_ea_17>(0x88e584u);  // (from the original)
    u32 r2_5 = ea_17->word_4;
    *frame.at<u32>(0) = ea_17->word_0;
    *frame.at<u32>(4) = r2_5;
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
    if (r0_11 != 0 && u32(r1_23->byte_2) != 0 && u32(r1_23->byte_3) != 0) {
        if (r0_11 > 0xau) {  // (from the original)
            r0_11 += 1u;
        }
        u32 r0_12 = uxth(r0_11);
        if (r0_12 >= 0x803u) {  // (from the original)
            r0_12 = r8_2;
        }
        r2_6 = r5_2 == r0_12 ? 1u : 0u;
    }
    *frame.at<u32>(8) = r2_6;
    gptr<Local_002a684c_ea_19> ea_19 = gptr<Local_002a684c_ea_19>(0x88e58cu);  // (from the original)
    u32 r2_7 = ea_19->word_4;
    *frame.at<u32>(0) = ea_19->word_0;
    *frame.at<u32>(4) = r2_7;
    call_002a66ec(r0, r1_23.addr(), r1, 0x3du);  // (from the original)
    *frame.at<u32>(8) = 0;
    gptr<Local_002a684c_ea_21> ea_21 = gptr<Local_002a684c_ea_21>(0x88e594u);  // (from the original)
    u32 r1_24 = ea_21->word_4;
    *frame.at<u32>(0) = ea_21->word_0;
    *frame.at<u32>(4) = r1_24;
    call_002a66ec(r0, r0 + 0x143cu, r1, 0x3au);  // (from the original)
    *frame.at<u32>(8) = 0;
    gptr<Local_002a684c_ea_23> ea_23 = gptr<Local_002a684c_ea_23>(0x88e59cu);  // (from the original)
    u32 r1_26 = ea_23->word_4;
    *frame.at<u32>(0) = ea_23->word_0;
    *frame.at<u32>(4) = r1_26;
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
GUEST_OFFSET(Local_002a6b44_r1_1, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002a6b44_r1_1, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Local_002a6b44_r1_1, byte_3, 0x3);  // (from the original)

struct __attribute__((packed)) Local_002a6b44_r1_10 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_002a6b44_r1_10, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002a6b44_r1_10, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Local_002a6b44_r1_10, byte_3, 0x3);  // (from the original)

struct __attribute__((packed)) Local_002a6b44_r1_11 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_002a6b44_r1_11, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002a6b44_r1_11, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Local_002a6b44_r1_11, byte_3, 0x3);  // (from the original)

struct __attribute__((packed)) Local_002a6b44_r1_12 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_002a6b44_r1_12, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002a6b44_r1_12, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Local_002a6b44_r1_12, byte_3, 0x3);  // (from the original)

struct __attribute__((packed)) Local_002a6b44_r1_2 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_002a6b44_r1_2, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002a6b44_r1_2, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Local_002a6b44_r1_2, byte_3, 0x3);  // (from the original)

struct __attribute__((packed)) Local_002a6b44_r1_3 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_002a6b44_r1_3, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002a6b44_r1_3, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Local_002a6b44_r1_3, byte_3, 0x3);  // (from the original)

struct __attribute__((packed)) Local_002a6b44_r1_4 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_002a6b44_r1_4, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002a6b44_r1_4, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Local_002a6b44_r1_4, byte_3, 0x3);  // (from the original)

struct __attribute__((packed)) Local_002a6b44_r1_5 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_002a6b44_r1_5, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002a6b44_r1_5, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Local_002a6b44_r1_5, byte_3, 0x3);  // (from the original)

struct __attribute__((packed)) Local_002a6b44_r1_6 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_002a6b44_r1_6, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002a6b44_r1_6, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Local_002a6b44_r1_6, byte_3, 0x3);  // (from the original)

struct __attribute__((packed)) Local_002a6b44_r1_7 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_002a6b44_r1_7, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002a6b44_r1_7, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Local_002a6b44_r1_7, byte_3, 0x3);  // (from the original)

struct __attribute__((packed)) Local_002a6b44_r1_8 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_002a6b44_r1_8, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002a6b44_r1_8, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Local_002a6b44_r1_8, byte_3, 0x3);  // (from the original)

struct __attribute__((packed)) Local_002a6b44_r1_9 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_002a6b44_r1_9, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002a6b44_r1_9, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Local_002a6b44_r1_9, byte_3, 0x3);  // (from the original)

inline constexpr guest::Function<0x002a661c, u32(u32)> call_002a661c;  // (from the original)
inline constexpr guest::Function<0x006b9038, u32(u32, u32, u32, u32)> call_006b9038;  // (from the original)

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
GUEST_OFFSET(Object_002a70d0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002a70d0_0, half_32, 0x32);  // (from the original)
GUEST_OFFSET(Object_002a70d0_0, byte_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_002a70d0_0, byte_35, 0x35);  // (from the original)

inline constexpr guest::Function<0x003052f0, u32(u32, u32, u32, u32)> call_003052f0;  // (from the original)
inline constexpr guest::Function<0x0030589c, u32(u32, u32, u32, u32)> call_0030589c;  // (from the original)

u32 f_002a70d0(gptr<Object_002a70d0_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    u32 r4 = r0;
    arg0->half_32 = 0;
    arg0->byte_34 = 0;
    arg0->byte_35 = 0;
    arg0->word_0 = 0;
    call_003052f0(r4 + 4u, r1, r2, r3);
    *gptr<u16>(r4 + 0x32u) = 0;  // (from the original)
    *gptr<u8>(r4 + 0x34u) = 0;  // (from the original)
    *gptr<u8>(r4 + 0x35u) = 0;  // (from the original)
    call_0030589c(r4 + 0x36u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r2 = 0xffffu;  // (from the original)
    r1 = 0u;
    r0 = r1;
    do {
        u32 r1_2 = r1 + 1u;
        r0 += 2u;
        *gptr<u16>((r4 + (r1 << 1)) + 0x4cu) = u16(r2);  // (from the original)
        res_1 = r0 - 0xau;  // (from the original)
        r1 = r1_2 + 1u;
        *gptr<u16>((r4 + (r1_2 << 1)) + 0x4cu) = u16(r2);  // (from the original)
        guest::preempt();
    } while (res_1 >> 0x1f != ((r0 ^ 0xau) & (r0 ^ res_1)) >> 0x1f);  // (from the original)
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
    return;
}

}  // namespace d_002a71a0
GUEST_EXPORT(0x002a71a0, d_002a71a0::f_002a71a0);

// f_002a71b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a71b4 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)

void f_002a71b4(u32 r0) {
    u32 r1_1 = 0;
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
        r1_1 = guest::cpu()->r[1];
        r5 += 1u;
        guest::preempt();
    } while (r5 < 4u);
    *gptr<u8>(r6 + 0x60u) = 0;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_002a71b4
GUEST_EXPORT_FRAMED(0x002a71b4, d_002a71b4::f_002a71b4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002a722c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a722c {

inline constexpr guest::Function<0x002a7270, u32(u32, u32, u32, u32)> call_002a7270;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb7e8, u32(u32, u32)> call_002fb7e8;  // (from the original)
inline constexpr guest::Function<0x002fbd54, u32(u32, u32)> call_002fbd54;  // (from the original)

void f_002a722c(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    u32 r0_1 = call_002fae84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_3 = call_002fb7e8(r0_1 + 0x20u, 0u);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        guest::cpu()->r[13] += 8u;
        return;
    }
    u32 r0_5 = call_002fbd54(r0_3 + 0x55a6u, r1_1);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_5 == 0) {
        guest::cpu()->r[13] += 8u;
        return;
    }
    guest::cpu()->r[13] += 8u;
    call_002a7270((r0_3 + 0x5400u) + 0x144u, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return;
}

}  // namespace d_002a722c
GUEST_EXPORT(0x002a722c, d_002a722c::f_002a722c);

// f_002a75dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a75dc {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x0076ab28, u32(u32, u32, u32, u32)> call_0076ab28;  // (from the original)
inline constexpr guest::Function<0x0076aff4, u32(u32, u32, u32, u32)> call_0076aff4;  // (from the original)

void f_002a75dc(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r5 = 0u;
    u32 r7 = r0;
    u32 r6 = r1;
    do {
        u32 r4_1 = r7 + (r5 + (r5 << 1) << 3);
        u32 r0_1 = call_0076ab28(r4_1, r1, r2, r3);
        u32 r0_2 = r0_1 == 1u ? r4_1 : 0x95bfdcu;  // (from the original)
        u32 r0_3 = call_002fcaf4(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r1_2 = guest::cpu()->r[1];
        u32 r2_2 = guest::cpu()->r[2];
        u32 r3_2 = guest::cpu()->r[3];
        if (r0_3 == 0) {
            u32 r0_4 = call_0076ab28(r4_1, r1_2, r2_2, r3_2);
            call_0076aff4(frame.at(0).addr(), r0_4 == 1u ? r4_1 : 0x95bfdcu, r6, guest::cpu()->r[3]);  // (from the original)
            call_002fc8e8(r4_1, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
            r1_2 = guest::cpu()->r[1];
            r2_2 = guest::cpu()->r[2];
            r3_2 = guest::cpu()->r[3];
        }
        u32 r0_7 = call_0076ab28(r4_1 + 8u, r1_2, r2_2, r3_2);
        u32 r0_8 = r0_7 == 3u ? r4_1 + 8u : 0x95bfdcu;  // (from the original)
        u32 r0_9 = call_002fcaf4(r0_8, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_9 == 0) {
            u32 r0_11 = call_0076ab28(r4_1 + 8u, r1, r2, r3);
            call_0076aff4(frame.at(0).addr(), r0_11 == 3u ? r4_1 + 8u : 0x95bfdcu, r6, guest::cpu()->r[3]);  // (from the original)
            call_002fc8e8(r4_1 + 8u, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r5 += 1u;
        guest::preempt();
    } while (r5 < 4u);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_002a75dc
GUEST_EXPORT_FRAMED(0x002a75dc, d_002a75dc::f_002a75dc, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_002a76c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a76c0 {

inline constexpr guest::Function<0x002fc288, u32(u32, u32, u32, u32)> call_002fc288;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fe9c8, u32(u32, u32, u32, u32)> call_002fe9c8;  // (from the original)
inline constexpr guest::Function<0x003004c4, u32(u32, u32, u32, u32)> call_003004c4;  // (from the original)

void f_002a76c0(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x2e8);  // the original's stack frame
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 r4 = 0u;
    u32 r5 = r0;
    u32 r6 = r4;
    do {
        call_002fc8e8(r5 + (r4 << 2), 0x95bfdcu, r2, r3);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        u32 r0_2 = r5 + r4;
        r4 += 1u;
        res_1 = r4 - 7u;
        *gptr<u8>(r0_2 + 0x1cu) = u8(r6);  // (from the original)
        guest::preempt();
    } while (res_1 >> 0x1f != ((r4 ^ 7u) & (r4 ^ res_1)) >> 0x1f);  // (from the original)
    call_002fc288(frame.at(0).addr(), r1_1, r2, r3);
    call_002fe9c8(frame.at(0).addr(), 0xcu, 0x2du, 0u);  // (from the original)
    call_003004c4(r5, 3u, frame.at(0).addr(), guest::cpu()->r[3]);
    call_002fc288(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002fe9c8(frame.at(0).addr(), 0xdu, 0x2du, 0u);  // (from the original)
    call_003004c4(r5 + 0xcu, 3u, frame.at(0).addr(), guest::cpu()->r[3]);  // (from the original)
    call_002fc288(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002fe9c8(frame.at(0).addr(), 0x19u, 0x2du, 0u);  // (from the original)
    call_003004c4(r5 + 0x18u, 1u, frame.at(0).addr(), guest::cpu()->r[3]);  // (from the original)
    return;
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
GUEST_OFFSET(Local_002a77bc_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002a77bc_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002a77bc_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_002a77bc_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_002a77bc_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_002a77bc_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_002a77bc_ea_1, word_18, 0x18);  // (from the original)

struct __attribute__((packed)) Local_002a77bc_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002a77bc_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002a77bc_ea_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_002a77bc_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_002a77bc_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002a77bc_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002a77bc_ea_3, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_002a77bc_ea_3, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_002a77bc_ea_3, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_002a77bc_ea_3, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_002a77bc_ea_3, word_18, 0x18);  // (from the original)

struct __attribute__((packed)) Local_002a77bc_r4_1 {
    u8 unknown_0[0x1c];  // (not used here)
    u8 byte_1c;
};
GUEST_OFFSET(Local_002a77bc_r4_1, byte_1c, 0x1c);  // (from the original)

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x00303acc, u32(u32, u32, u32, u32)> call_00303acc;  // (from the original)
inline constexpr guest::Function<0x0030b654, u32(u32, u32, u32, u32)> call_0030b654;  // (from the original)
inline constexpr guest::Function<0x004e9a78, u32(u32, u32, u32, u32)> call_004e9a78;  // (from the original)
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32, u32)> call_0059e65c;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)

void f_002a77bc(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x28);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r14 = guest::cpu()->r[14];
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r0_1 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r3_6 = 0;
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
    if (u32(r4_1->byte_1c) != 0) {
        call_002fcbb0(r3_1, 0x2084u, r2, r3_1);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
    } else {
        call_002fc934(r3_1, r0 + (r2 << 2), r2, r3_1);
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
    }
    if (u32(r4_1->byte_1c) == 0) {
        r4_1->byte_1c = 1;
    } else {
        goto L_2a78ec;
    }
    r0_1 = call_002f74c8(1u, r1_1, r2_1, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_1 != r1) {
        goto L_2a78ec;
    }
    r0_2 = frame.at(4).addr();
    r0_3 = call_0030b654(r0_2, r1_3, r2_2, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_3 != 0) {
        u32 r0_5 = call_00303acc(frame.at(4).addr(), r1_4, r2_3, r3_4);
        if (r0_5 != 0) {
            call_004e9a78(r3, r6_1, 4u, r7_1);
            goto L_2a78ec;
        }
        call_004e9a78(r3, r6_1, 3u, r7_1);
        goto L_2a78ec;
    }
    r0_6 = call_006a5e34(r0_3, r1_4, r2_3, r3_4);
    r2_4 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_6 == 0) {
        goto L_2a78ec;
    }
    r0_7 = frame.at(8).addr();
    r0_8 = call_002fcbb0(r0_7, 0x2084u, r2_4, r3_5);  // (from the original)
    *frame.at<u32>(0) = 0;
    call_002fc994(r0_6, r0_8, r3, r6_1);
    r3_6 = guest::cpu()->r[3];
    call_0059e65c(r3, r6_1, 1u, r3_6);
L_2a78ec:;
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
    return;
}

}  // namespace d_002a77bc
GUEST_EXPORT(0x002a77bc, d_002a77bc::f_002a77bc);

// f_002a799c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a799c {

inline constexpr guest::Function<0x002fc288, u32(u32, u32, u32, u32)> call_002fc288;  // (from the original)
inline constexpr guest::Function<0x002fe9c8, u32(u32, u32, u32, u32)> call_002fe9c8;  // (from the original)
inline constexpr guest::Function<0x003004c4, u32(u32, u32, u32, u32)> call_003004c4;  // (from the original)

u32 f_002a799c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x2e8);  // the original's stack frame
    call_002fc288(frame.at(0).addr(), r1, r2, r3);
    call_002fe9c8(frame.at(0).addr(), 0xcu, 0x73u, 0u);  // (from the original)
    call_003004c4(r0, 1u, frame.at(0).addr(), guest::cpu()->r[3]);
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
GUEST_OFFSET(Local_002a7c74_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002a7c74_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002a7c74_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_002a7c74_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_002a7c74_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_002a7c74_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_002a7c74_ea_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_002a7c74_ea_1, word_1c, 0x1c);  // (from the original)

struct __attribute__((packed)) Local_002a7c74_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002a7c74_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002a7c74_ea_2, word_4, 0x4);  // (from the original)

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
GUEST_OFFSET(Local_002a7c74_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002a7c74_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002a7c74_ea_3, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_002a7c74_ea_3, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_002a7c74_ea_3, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_002a7c74_ea_3, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_002a7c74_ea_3, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_002a7c74_ea_3, word_1c, 0x1c);  // (from the original)

struct __attribute__((packed)) Local_002a7c74_r4_1 {
    u8 unknown_0[0x3e];  // (not used here)
    u8 byte_3e;
};
GUEST_OFFSET(Local_002a7c74_r4_1, byte_3e, 0x3e);  // (from the original)

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x00303acc, u32(u32, u32, u32, u32)> call_00303acc;  // (from the original)
inline constexpr guest::Function<0x0030b654, u32(u32, u32, u32, u32)> call_0030b654;  // (from the original)
inline constexpr guest::Function<0x004e9a78, u32(u32, u32, u32, u32)> call_004e9a78;  // (from the original)
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32, u32)> call_0059e65c;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)

void f_002a7c74(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x30);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r14 = guest::cpu()->r[14];
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_4 = 0;
    u32 r0_4 = 0;
    u32 r1_5 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_6 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_9 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r3_6 = 0;
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
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        if (r0_3 == 0) {
            goto L_2a7ce8;
        }
        call_002fcbb0(r6_1, 0x2086u, r2_1, r3_1);  // (from the original)
        r1_3 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        goto L_2a7cf4;
    }
    r1_4 = r0_1 + 0x12u;  // (from the original)
    call_002fc934(r6_1, r1_4, r2, r3);
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    goto L_2a7cf4;
L_2a7ce8:;
    call_002fcbb0(r6_1, 0x2083u, r2_1, r3_1);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
L_2a7cf4:;
    if (u32(r4_1->byte_3e) == 0) {
        r4_1->byte_3e = 1;
    } else {
        goto L_2a7dd0;
    }
    r0_4 = call_002f74c8(1u, r1_3, r2_2, r3_2);
    r1_5 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_4 != r1) {
        goto L_2a7dd0;
    }
    r0_5 = frame.at(4).addr();
    r0_6 = call_0030b654(r0_5, r1_5, r2_3, r3_3);
    r1_6 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_6 != 0) {
        u32 r0_8 = call_00303acc(frame.at(4).addr(), r1_6, r2_4, r3_4);
        if (r0_8 != 0) {
            call_004e9a78(r3, r7_1, 2u, r8_1);
            goto L_2a7dd0;
        }
        call_004e9a78(r3, r7_1, 1u, r8_1);
        goto L_2a7dd0;
    }
    r0_9 = call_006a5e34(r0_6, r1_6, r2_4, r3_4);
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_9 == 0) {
        goto L_2a7dd0;
    }
    r0_10 = frame.at(8).addr();
    r0_11 = call_002fcbb0(r0_10, 0x2083u, r2_5, r3_5);  // (from the original)
    *frame.at<u32>(0) = 0;
    call_002fc994(r0_9, r0_11, r3, r7_1);
    r3_6 = guest::cpu()->r[3];
    call_0059e65c(r3, r7_1, 1u, r3_6);
L_2a7dd0:;
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
    return;
}

}  // namespace d_002a7c74
GUEST_EXPORT(0x002a7c74, d_002a7c74::f_002a7c74);

// f_002a8560: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a8560 {

inline constexpr guest::Function<0x006e47a0, u32(u32, u32, u32, u32)> call_006e47a0;  // (from the original)

u32 f_002a8560(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = call_006e47a0(r0, r1, r2, guest::cpu()->r[3]);
    *gptr<u8>(r0_1 + 0x66u) = 0;  // (from the original)
    *gptr<u32>(r0_1) = 0x8f1078;  // (from the original)
    *gptr<u32>(r0_1 + 0x68u) = r1;  // (from the original)
    *gptr<u8>(r0_1 + 0x6cu) = 1;  // (from the original)
    return r0_1;
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
GUEST_OFFSET(Object_002a9294_0, byte_8a, 0x8a);  // (from the original)
GUEST_OFFSET(Object_002a9294_0, byte_59c, 0x59c);  // (from the original)
GUEST_OFFSET(Object_002a9294_0, word_660, 0x660);  // (from the original)

inline constexpr guest::Function<0x002a93e8, u32(u32, u32, u32, u32)> call_002a93e8;  // (from the original)

void f_002a9294(gptr<Object_002a9294_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    if ((u32(arg0->byte_8a) >> 1u & 1u) == 0) {
        return;
    }
    u32 r2_1 = arg0->byte_59c;
    if (r2_1 != 0) {
        return;
    }
    arg0->word_660 = r1;
    call_002a93e8(r0, 1u, r2_1, guest::cpu()->r[3]);
    return;
}

}  // namespace d_002a9294
GUEST_EXPORT(0x002a9294, d_002a9294::f_002a9294);

// f_002a9cd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a9cd8 {

struct __attribute__((packed)) Object_002a9cd8_0 {
    u8 unknown_0[0x68];  // (not used here)
    u32 word_68;
};
GUEST_OFFSET(Object_002a9cd8_0, word_68, 0x68);  // (from the original)

inline constexpr guest::Function<0x0030f48c, u32(u32, u32, u32, u32)> call_0030f48c;  // (from the original)

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

inline constexpr guest::Function<0x00246f64, u32(u32)> call_00246f64;  // (from the original)

void f_002aa08c(u32 r0) {
    call_00246f64(r0);
    *gptr<u8>(r0 + 0x98u) = 1;  // (from the original)
    return;
}

}  // namespace d_002aa08c
GUEST_EXPORT_FRAMED(0x002aa08c, d_002aa08c::f_002aa08c, 0x4010);  // pushes {r4, lr} first, as the original

// f_002aa0dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002aa0dc {

struct __attribute__((packed)) Object_002aa0dc_0 {
    u8 unknown_0[0x98];  // (not used here)
    u8 byte_98;
};
GUEST_OFFSET(Object_002aa0dc_0, byte_98, 0x98);  // (from the original)

inline constexpr guest::Function<0x0024727c, u32(u32, u32, u32, u32)> call_0024727c;  // (from the original)

void f_002aa0dc(gptr<Object_002aa0dc_0> arg0) {
    u32 r0 = arg0.addr();
    if (u32(arg0->byte_98) == 0) {
        return;
    }
    call_0024727c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    arg0->byte_98 = 0;
    return;
}

}  // namespace d_002aa0dc
GUEST_EXPORT_FRAMED(0x002aa0dc, d_002aa0dc::f_002aa0dc, 0x4010);  // pushes {r4, lr} first, as the original

// f_002aa104: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002aa104 {

inline constexpr guest::Function<0x00247294, u32(u32, u32, u32, u32)> call_00247294;  // (from the original)

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
GUEST_OFFSET(Object_002aa6c0_0, word_1c, 0x1c);  // (from the original)

struct __attribute__((packed)) Local_002aa6c0_r0_5 {
    u8 unknown_0[0x1f8];  // (not used here)
    u32 word_1f8;
    u32 word_1fc;
};
GUEST_OFFSET(Local_002aa6c0_r0_5, word_1f8, 0x1f8);  // (from the original)
GUEST_OFFSET(Local_002aa6c0_r0_5, word_1fc, 0x1fc);  // (from the original)

inline constexpr guest::Function<0x001f499c, u32(u32, u32, u32, u32)> call_001f499c;  // (from the original)
inline constexpr guest::Function<0x002ab460, u32(u32, u32, u32, u32)> call_002ab460;  // (from the original)
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)

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
            if (r2_1 != 0 && u32(*gptr<u8>(r2_1 + 0xc9u)) == r3) {  // (from the original)
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
    u32 r0_3 = call_001f499c(frame.at(0).addr(), 0x42u, 1u, guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    u32 r3_2 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        goto L_2aa750;
    }
    return 0u;
L_2aa750:;
    u32 r0_4 = call_002ab460(r4, 0x42u, r5, r3_2);  // (from the original)
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

}  // namespace d_002aa6c0
GUEST_EXPORT_FRAMED(0x002aa6c0, d_002aa6c0::f_002aa6c0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002aa92c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002aa92c {

struct __attribute__((packed)) Object_002aa92c_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_002aa92c_1, word_0, 0x0);  // (from the original)

inline guest::global<u32, 0x00000138> global_00000138;  // (from the original)

void f_002aa92c(u32 r0, gptr<Object_002aa92c_1> arg1, u32 r2) {
    if (u32(*gptr<u8>(0x868888u + (r2 + (r2 << 2) << 4) + 0x4du)) != 0) {  // (from the original)
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
        if (u32(*gptr<u8>(r0)) == r2) {
            *gptr<u32>(r0 + 0x138u) = *gptr<u32>(r0 + 0x138u) + 1u;  // (from the original)
            arg1->word_0 = r0 + 0x2cu;  // (from the original)
            return;
        }
        r0 = *gptr<u32>(r0 + 0x13cu);  // (from the original)
        guest::preempt();
    } while (r0 != 0);
    *global_00000138 = *global_00000138 + 1u;
    arg1->word_0 = 0x2c;  // (from the original)
    return;
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
GUEST_OFFSET(Local_002aafd4_r3_5, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002aafd4_r3_5, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> call_00305f2c;  // (from the original)
inline constexpr guest::Function<0x00700974, u32(u32, u32, u32, u32)> call_00700974;  // (from the original)
inline constexpr guest::Function<0x00701900, u32(u32, u32, u32, u32)> call_00701900;  // (from the original)
inline constexpr guest::Function<0x007019f0, u32(u32, u32, u32, u32)> call_007019f0;  // (from the original)
inline constexpr guest::Function<0x007701f8, u32(u32, u32, u32, u32)> call_007701f8;  // (from the original)

u32 f_002aafd4(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x34);  // the original's stack frame
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r0_9 = 0;
    gptr<Local_002aafd4_r3_5> r3_5 = gptr<Local_002aafd4_r3_5>(0u);
    u32 r0_10 = 0;
    u32 r2_6 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r5 = r0;
    u32 r8 = r1;
    u32 r0_1 = call_00305f2c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    u32 r3_1 = guest::cpu()->r[3];
    if (r0_1 != 3u) {
        return 1u;
    }
    if (r8 == 0x48u) {  // (from the original)
        return 0u;
    }
    *frame.at<u32>(0x2c) = 0;  // (from the original)
    *frame.at<u32>(0x28) = 0x24;  // (from the original)
    call_007019f0(frame.at(0x2c).addr(), frame.at(0x28).addr(), r8, r3_1);  // (from the original)
    r1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    u32 r0_4 = *frame.at<u32>(0x28);  // (from the original)
    if (r0_4 != 0x24u) {  // (from the original)
        return 1u;
    }
    r0_2 = call_002fb94c(r0_4, r1, r2_1, r3_2);
    r1 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_3 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        return r0_2;
    }
    u32 r0_5 = r0_2 + 0x6c20u;  // (from the original)
    *frame.at<u32>(0x14) = r0_5;  // (from the original)
    u32 r0_6 = call_002fb378(r0_5, r1, r2_2, r3_3);
    u32 r0_7 = call_00700974(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r3 = guest::cpu()->r[3];
    u32 r6 = r5 + 0x1000u;  // (from the original)
    r1 = *gptr<u8>(r6 + 0x1f4u);  // (from the original)
    if (r1 != r0_7) {
        *gptr<u8>(r6 + 0x1f4u) = u8(r0_7);  // (from the original)
        call_00701900(r5 + 0x13b8u, r1, guest::cpu()->r[2], r3);  // (from the original)
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        *frame.at<u32>(0x18) = 0;  // (from the original)
        *frame.at<u32>(0) = 0x24;  // (from the original)
        u32 r7 = 0u;
        *frame.at<u32>(4) = 0;
        *frame.at<u32>(8) = 0;
        *frame.at<u32>(0xc) = 0;  // (from the original)
        u32 r4 = r7;
        u32 r10 = 1u;
        u32 r11 = frame.at(4).addr();
        u32 r9 = r5 + 0x1002u;  // (from the original)
        do {
            u32 r2_5 = *gptr<u8>(r5 + r4 + 0x13b8u);  // (from the original)
            if (r2_5 >= 0x53u) {  // (from the original)
                goto L_2ab124;
            }
            r1_3 = frame.at(0).addr();
            r0_9 = frame.at(0x18).addr();  // (from the original)
            call_007019f0(r0_9, r1_3, r2_5, r3);
            r1 = guest::cpu()->r[1];
            r3 = guest::cpu()->r[3];
            if (*frame.at<u32>(0) != 0x24u) {  // (from the original)
                goto L_2ab124;
            }
            r3_5 = gptr<Local_002aafd4_r3_5>(frame.at(0x14).addr());  // (from the original)
            r0_10 = r3_5->word_0;
            r2_6 = r3_5->word_4;
            r0_11 = call_007701f8(r0_10, 0x24u, r2_6, r3_5.addr());  // (from the original)
            r1 = guest::cpu()->r[1];
            r3 = guest::cpu()->r[3];
            if (r0_11 == 0) {
                goto L_2ab124;
            }
            r7 += 1u;
            *gptr<u32>(r11 + (r4 << 2)) = r10;
            if (r4 != 2u) {
                goto L_2ab124;
            }
            r0_12 = 0u;
            if (r7 != 1u && r7 == 2u) {
                r0_12 = *frame.at<u32>(4);
                if (r0_12 != 0) {
                    r0_12 = 1u;
                }
            }
            r1 = r0_12 + r5 + 0x1000u;  // (from the original)
            r0_13 = *gptr<u8>(r1 + 0x3b8u);  // (from the original)
            *gptr<u8>(r1 + 0x3b8u) = u8(u32(*gptr<u8>(r9 + 0x3b8u)));  // (from the original)
            *gptr<u8>(r9 + 0x3b8u) = u8(r0_13);  // (from the original)
L_2ab124:;
            r4 += 1u;
            guest::preempt();
        } while (s32(r4) < 3);
    }
    if (u32(*gptr<u8>(r6 + 0x3b8u)) == r8 || u32(*gptr<u8>(r6 + 0x3b9u)) == r8) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    r0_2 = call_007701f8(*frame.at<u32>(0x14), 0x24u, r8, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        return r0_2;
    }
    return 1u;
}

}  // namespace d_002aafd4
GUEST_EXPORT_FRAMED(0x002aafd4, d_002aafd4::f_002aafd4, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_002ab16c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ab16c {

inline guest::global<u8, 0x0094f520> global_0094f520;  // (from the original)

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
GUEST_OFFSET(Object_002ab240_0, word_1c, 0x1c);  // (from the original)

struct __attribute__((packed)) Local_002ab240_r12 {
    u8 unknown_0[0x202];  // (not used here)
    u8 byte_202;
};
GUEST_OFFSET(Local_002ab240_r12, byte_202, 0x202);  // (from the original)


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
            if (r3_1 != 0) {
                if (u32(*gptr<u8>(r3_1 + 0x18cu)) == r2) {  // (from the original)
                    guest::preempt();
                    goto L_2ab24c;
                }
            }
            r1 = *gptr<u32>(r1 + 4u);
            guest::preempt();
        } while (r1 != 0);
    }
    r1 = 0u;
    do {
        u32 r3_2 = *gptr<u32>(r0 + (r1 + (r1 << 1) << 3) + 0x1340u);  // (from the original)
        if (r3_2 != 0) {
            if (u32(*gptr<u8>(r3_2 + 0x18cu)) == r2) {  // (from the original)
                guest::preempt();
                goto L_2ab24c;
            }
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
GUEST_OFFSET(Object_002ab3bc_0, word_11fc, 0x11fc);  // (from the original)

struct __attribute__((packed)) Local_002ab3bc_r4_1 {
    u8 unknown_0[0x1f8];  // (not used here)
    u32 word_1f8;
    u32 word_1fc;
};
GUEST_OFFSET(Local_002ab3bc_r4_1, word_1f8, 0x1f8);  // (from the original)
GUEST_OFFSET(Local_002ab3bc_r4_1, word_1fc, 0x1fc);  // (from the original)

inline guest::global<u8, 0x0094f522> global_0094f522;  // (from the original)
inline guest::global<u8, 0x0094f523> global_0094f523;  // (from the original)
inline constexpr guest::Function<0x002aa6c0, u32(u32, u32, u32)> call_002aa6c0;  // (from the original)
inline constexpr guest::Function<0x002ab460, u32(u32, u32, u32, u32)> call_002ab460;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32)> call_002f74e0;  // (from the original)

void f_002ab3bc(gptr<Object_002ab3bc_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r0_2 = 0;
    u32 r0_4 = 0;
    u32 r2_1 = 0;
    u32 r0_5 = 0;
    u32 r2_2 = 0;
    u32 r0_6 = 0;
    u32 r1_1 = 0;
    u32 r0_7 = 0;
    gptr<Local_002ab3bc_r4_1> r4_1 = gptr<Local_002ab3bc_r4_1>(r0 + 0x1000u);  // (from the original)
    u32 r0_1 = arg0->word_11fc;
    if (s32(r0_1) > 0) {
        r0_2 = r0_1 - 1u;
        r4_1->word_1fc = r0_2;
        return;
    }
    u32 r0_3 = *global_0094f522;
    if (r0_3 == 0) {
        goto L_2ab434;
    }
    r0_4 = call_002f74c8(r0_3, r1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    r0_5 = call_002f74e0(0x20000u, r0_4, r2_1);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    if (r0_5 != 0) {
        goto L_2ab434;
    }
    r0_6 = *global_0094f523;
    if (r0_6 == 3u || r0_6 == 4u || r0_6 == 5u || r0_6 == 6u) {
        goto L_2ab434;
    }
    r1_1 = r0 + 0x11e8u;  // (from the original)
    r0_7 = call_002aa6c0(r0, r1_1, r2_2);
    r1 = guest::cpu()->r[1];
    if (r0_7 != 0) {
        return;
    }
L_2ab434:;
    r0_2 = call_002ab460(r0, 0x53u, 0u, guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        r4_1->word_1fc = r4_1->word_1f8;
        return;
    }
    r4_1->word_1fc = r0_2;
    return;
}

}  // namespace d_002ab3bc
GUEST_EXPORT_FRAMED(0x002ab3bc, d_002ab3bc::f_002ab3bc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002abba8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002abba8 {

struct __attribute__((packed)) Local_002abba8_r4_1 {
    u8 unknown_0[0x1e8];  // (not used here)
    u32 word_1e8;
    u32 word_1ec;
    u32 word_1f0;
};
GUEST_OFFSET(Local_002abba8_r4_1, word_1e8, 0x1e8);  // (from the original)
GUEST_OFFSET(Local_002abba8_r4_1, word_1ec, 0x1ec);  // (from the original)
GUEST_OFFSET(Local_002abba8_r4_1, word_1f0, 0x1f0);  // (from the original)

inline guest::global<u8, 0x0094f521> global_0094f521;  // (from the original)
inline guest::global<u8, 0x0094f522> global_0094f522;  // (from the original)
inline guest::global<u32, 0x0094f530> global_0094f530;  // (from the original)
inline guest::global<u32, 0x0094f534> global_0094f534;  // (from the original)
inline constexpr guest::Function<0x00598164, u32(u32, u32, u32, u32)> call_00598164;  // (from the original)
inline constexpr guest::Function<0x006c5c60, u32(u32, u32, u32, u32)> call_006c5c60;  // (from the original)

void f_002abba8(u32 r0, u32 r1, float S0) {
    u32 r0_1 = 0;
    float S0_2 = 0;
    gptr<Local_002abba8_r4_1> r4_1 = gptr<Local_002abba8_r4_1>(r0 + 0x1000u);  // (from the original)
    u32 r5_1 = r0 + 0x11e8u;  // (from the original)
    if (u32(*global_0094f521) == 0) {
        goto L_2abc10;
    }
    *global_0094f521 = 0;
    *global_0094f522 = 0;
    r0_1 = call_00598164(r5_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        return;
    }
    call_006c5c60(r5_1, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0_2 = guest::cpu()->s[0];
    r4_1->word_1ec = std::bit_cast<u32>(S0_2);
    *global_0094f522 = 1;
    *global_0094f530 = r4_1->word_1e8;
    *global_0094f534 = r4_1->word_1f0;
    return;
L_2abc10:;
    if (u32(*global_0094f522) == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    r4_1->word_1e8 = *global_0094f530;
    r4_1->word_1f0 = *global_0094f534;
    guest::cpu()->s[0] = S0;
    call_006c5c60(r5_1, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    float S0_3 = guest::cpu()->s[0];
    r4_1->word_1ec = std::bit_cast<u32>(S0_3);
    return;
}

}  // namespace d_002abba8
GUEST_EXPORT_FRAMED(0x002abba8, d_002abba8::f_002abba8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002abdfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002abdfc {

inline guest::global<u32, 0x0086c2f0> global_0086c2f0;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fdf10, u32(u32, u32, u32, u32)> call_002fdf10;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> call_005c33cc;  // (from the original)
inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> call_006bbd54;  // (from the original)
inline constexpr guest::Function<0x00700adc, u32(u32, u32, u32, u32)> call_00700adc;  // (from the original)
inline constexpr guest::Function<0x00700f58, u32(u32, u32, u32, u32)> call_00700f58;  // (from the original)

u32 f_002abdfc(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r4_1 = 0;
    u32 r1_2 = 0;
    u32 r2_4 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_5 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    *frame.at<u32>(0) = r3;
    u32 r5_1 = r0;
    u32 r0_1 = call_002fb94c(r0, r1, r2, r3);
    u32 r0_2 = call_002f74c8(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = call_002f74e0(0x20000u, r0_2, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    u32 r2_3 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_2abf14;
    }
    r0 = call_005c33cc(4u, 0u, r2_3, r3);
    r1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0 || r0_1 == 0) {
        goto L_2abf14;
    }
    r0 = u32(*gptr<u8>(0x5701u + r0_1)) << 0x1e;  // (from the original)
    if (!(r0 >> 0x1f)) {  // (from the original)
        goto L_2abf14;
    }
    r4_1 = r0_1 + 0x572bu;  // (from the original)
    r0 = u32(*gptr<u8>(r4_1)) >> 7;
    if (r0 != 0) {
        goto L_2abf14;
    }
    r0 = call_002fdf10(9u, r1, r2_3, r3);
    r1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_2abf14;
    }
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
    if (r0 >= 0x5fu) {  // (from the original)
        goto L_2abf14;
    }
    r1_2 = u32(u64(r0) * 0x49249249u + (u64(0u) << 0x20 | 0x49249249u) >> 0x20) >> 1;  // (from the original)
    r2_4 = r1_2 - (r1_2 << 3) + r0;
    r0_3 = frame.at(0).addr();
    call_006bbd54(r0_3, 0x25u, r2_4, r3);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_4 = frame.at(0).addr();
    r0_5 = call_00700adc(r0_4, r1_3, r2_5, r3_3);
    return r0_5;
L_2abf14:;
    u32 r0_6 = call_002fb378(r0, r1, r2_3, r3);
    u32 r0_7 = call_00700f58(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r4 = r0_7;
    u32 r0_9 = call_002ff6f8(*global_0086c2f0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0_9;
L_2abf3c:;
    if (u32(*gptr<u16>(r4 + 2u)) <= r1) {
        r4 += 4u;
        guest::preempt();
        goto L_2abf3c;
    }
    u32 r0_10 = *gptr<u8>(r4);
    guest::cpu()->r[1] = r1;
    return r0_10;
}

}  // namespace d_002abdfc
GUEST_EXPORT_FRAMED(0x002abdfc, d_002abdfc::f_002abdfc, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_002abf60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002abf60 {

struct __attribute__((packed)) Object_002abf60_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Object_002abf60_0, word_1c, 0x1c);  // (from the original)

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
GUEST_OFFSET(Local_002abf60_r0_1, word_340, 0x340);  // (from the original)
GUEST_OFFSET(Local_002abf60_r0_1, byte_350, 0x350);  // (from the original)
GUEST_OFFSET(Local_002abf60_r0_1, word_358, 0x358);  // (from the original)
GUEST_OFFSET(Local_002abf60_r0_1, byte_368, 0x368);  // (from the original)


u32 f_002abf60(gptr<Object_002abf60_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = r0;
    r0 = arg0->word_1c;
    if (r0 != 0) {
        do {
            if (u32(*gptr<u8>(r0 + 0x10u)) == r1) {  // (from the original)
                return r0;
            }
            r0 = *gptr<u32>(r0 + 4u);
            guest::preempt();
        } while (r0 != 0);
    }
    gptr<Local_002abf60_r0_1> r0_1 = gptr<Local_002abf60_r0_1>(r2 + 0x1000u);  // (from the original)
    if (r0_1->word_340 != 0) {
        if (u32(r0_1->byte_350) == r1) {
            return r2 + 0x1340u;  // (from the original)
        }
    }
    if (r0_1->word_358 == 0) {
        return 0u;
    }
    if (u32(r0_1->byte_368) == r1) {
        return r2 + 0x1358u;  // (from the original)
    }
    return 0u;
}

}  // namespace d_002abf60
GUEST_EXPORT(0x002abf60, d_002abf60::f_002abf60);

// f_002ac76c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ac76c {

inline constexpr guest::Function<0x0056cce4, u32(u32, u32, u32, u32)> call_0056cce4;  // (from the original)
inline constexpr guest::Function<0x0062f04c, u32(u32, u32, u32)> call_0062f04c;  // (from the original)
inline constexpr guest::Function<0x00700f58, u32(u32, u32, u32)> call_00700f58;  // (from the original)

u32 f_002ac76c(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r5 = r0;
    u32 r7 = r1;
    u32 r9 = 0x846fb0u;  // (from the original)
    u32 r8 = 0x86c2f0u;  // (from the original)
    u32 r6 = r2;
    u32 r4 = 0u;
    do {
        u32 r1_1 = *gptr<u32>(r6 + 4);
        u32 r2_1 = *gptr<u32>(r6 + 8);
        *frame.at<u32>(0) = *gptr<u32>(r6);
        *frame.at<u32>(4) = r1_1;
        *frame.at<u32>(8) = r2_1;
        u32 r1_2 = s32(s8(*gptr<u8>(r9 + r4)));
        call_0056cce4(frame.at(0).addr(), r1_2, r2_1, guest::cpu()->r[3]);
        r0 = call_00700f58(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2]);
        r1 = guest::cpu()->r[1];
L_2ac7ac:;
        u32 r2_3 = *gptr<u8>(r0);
        if (r2_3 == r5) {
            if (r7 == 1u) {
                goto L_2ac7e4;
            }
            if (r7 == 2u) {
                goto L_2ac808;
            }
            guest::cpu()->r[1] = r1;
            return 1u;
        }
        r1 = *gptr<u32>(r8);
        if (u32(*gptr<u16>(r0 + 2u)) != r1) {
            r0 += 4u;
            guest::preempt();
            goto L_2ac7ac;
        }
        goto L_2ac81c;
L_2ac7e4:;
        r0_3 = frame.at(0).addr();
        r0_4 = call_0062f04c(r0_3, r1, r2_3);
        r1 = guest::cpu()->r[1];
        if (r0_4 == 3u || r0_4 == 4u || r0_4 == 5u || r0_4 == 6u) {
            goto L_2ac81c;
        }
        return 1u;
L_2ac808:;
        r0_5 = frame.at(0).addr();
        r0_6 = call_0062f04c(r0_5, r1, r2_3);
        r1 = guest::cpu()->r[1];
        if (r0_6 == 5u || r0_6 == 6u) {
            return 1u;
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

inline constexpr guest::Function<0x002ad0a0, u32(u32, u32, u32, u32)> call_002ad0a0;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002ffad8, u32(u32)> call_002ffad8;  // (from the original)

u32 f_002ad1fc(u32 r0) {
    guest::cpu()->r[13] -= 8u;
    u32 r0_1 = call_002fcb34(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0x24u) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        return 0u;
    }
    u32 r0_2 = call_002ffad8(r0);
    guest::cpu()->r[13] += 8u;
    return call_002ad0a0(r0_2 & 0xffu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_002ad1fc
GUEST_EXPORT(0x002ad1fc, d_002ad1fc::f_002ad1fc);

// f_002ae274: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ae274 {

inline guest::global<u8, 0x0094fd2b> global_0094fd2b;  // (from the original)
inline constexpr guest::Function<0x0026d328, u32(u32, u32, u32, u32)> call_0026d328;  // (from the original)
inline constexpr guest::Function<0x002bf9cc, u32(u32, u32, u32, u32)> call_002bf9cc;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)

void f_002ae274(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_002fb94c(r0, r1, r2, r3);
    *global_0094fd2b = 1;
    call_002fc934(frame.at(4).addr(), 0x94fd64u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *frame.at<u32>(0) = 1;
    call_002bf9cc(r0_1 + 0x6bd0u, *gptr<u32>(r0 + 0xc8u), frame.at(4).addr(), 0u);  // (from the original)
    call_0026d328(r0 + 0xf4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return;
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
GUEST_OFFSET(Local_002afa70_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002afa70_ea_1, word_398, 0x398);  // (from the original)
GUEST_OFFSET(Local_002afa70_ea_1, word_47c, 0x47c);  // (from the original)

inline constexpr guest::Function<0x0026fe3c, u32(u32, u32, u32, u32)> call_0026fe3c;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f770c, u32(u32, u32, u32, u32)> call_002f770c;  // (from the original)
inline constexpr guest::Function<0x003170d0, u32(u32, u32)> call_003170d0;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)
inline constexpr guest::Function<0x005e8a7c, u32(u32, u32, u32, u32)> call_005e8a7c;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> call_006aaa30;  // (from the original)

u32 f_002afa70(gptr<BsMenuItemChange> arg0) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    r13 -= 8;
    u32 r3_1 = 0x8f1480u;  // (from the original)
    u32 r2_1 = r3_1 + 0x104u;  // (from the original)
    arg0->word_0 = 0x8f1414;  // (from the original)
    arg0->word_a4 = r2_1;
    arg0->word_28 = r3_1;
    guest::cpu()->r[13] = r13;
    u32 r0_2 = call_005bf744(r0 + 0xa078u, 0x8f1414u, r2_1, r3_1);  // (from the original)
    gptr<Local_002afa70_ea_1> ea_1 = gptr<Local_002afa70_ea_1>(r0_2 - 0x9c8u);  // (from the original)
    ea_1->word_0 = 0x8ee218;  // (from the original)
    ea_1->word_398 = 0x8ef22c;  // (from the original)
    ea_1->word_47c = 0x8ef270;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(ea_1.addr() + 0x4b0u, 0x2e0b3cu, 0x518u, 1u);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_4 = call_002f770c(ea_1.addr() + 0x398u, r1_1, r2_2, r3_2);  // (from the original)
    u32 r2_3 = guest::cpu()->r[2];
    u32 r3_3 = guest::cpu()->r[3];
    *gptr<u32>(r0_4 - 0x398u) = 0x8f18f4;  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_6 = call_00567ef0(r0_4 - 0x248u, 0x8f18f4u, r2_3, r3_3);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_4 = guest::cpu()->r[2];
    u32 r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_8 = call_005bf744(r0_6 - 0x14cu, r1_2, r2_4, r3_4);  // (from the original)
    u32 r1_3 = guest::cpu()->r[1];
    u32 r2_5 = guest::cpu()->r[2];
    u32 r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_10 = call_005e8a7c(r0_8 - 0xc68u, r1_3, r2_5, r3_5);  // (from the original)
    u32 r2_6 = guest::cpu()->r[2];
    u32 r3_6 = guest::cpu()->r[3];
    *gptr<u32>(r0_10 - 0x4f0u) = 0x8f47a0;  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_12 = call_005e3194(r0_10 - 0xd4u, 0x8f47a0u, r2_6, r3_6);  // (from the original)
    u32 r1_4 = guest::cpu()->r[1];
    u32 r2_7 = guest::cpu()->r[2];
    u32 r3_7 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_14 = call_0056988c(r0_12 - 0x28u, r1_4, r2_7, r3_7);  // (from the original)
    u32 r1_5 = guest::cpu()->r[1];
    u32 r2_8 = guest::cpu()->r[2];
    u32 r3_8 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_16 = call_0056988c(r0_14 - 0x28u, r1_5, r2_8, r3_8);  // (from the original)
    u32 r1_6 = guest::cpu()->r[1];
    u32 r2_9 = guest::cpu()->r[2];
    u32 r3_9 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_18 = call_005bf744(r0_16 - 0x15cu, r1_6, r2_9, r3_9);  // (from the original)
    u32 r1_7 = guest::cpu()->r[1];
    u32 r2_10 = guest::cpu()->r[2];
    u32 r3_10 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_20 = call_00567ef0(r0_18 - 0x24cu, r1_7, r2_10, r3_10);  // (from the original)
    u32 r1_8 = guest::cpu()->r[1];
    u32 r2_11 = guest::cpu()->r[2];
    u32 r3_11 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_22 = call_0026fe3c(r0_20 - 0x848cu, r1_8, r2_11, r3_11);  // (from the original)
    u32 r1_9 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    u32 r0_24 = call_003170d0(r0_22 - 0xccu, r1_9);  // (from the original)
    u32 r1_10 = guest::cpu()->r[1];
    r13 += 8;
    guest::cpu()->r[13] = r13;
    return call_006aaa30(r0_24 - 0x28u, r1_10);  // (from the original)
}

}  // namespace d_002afa70
GUEST_EXPORT(0x002afa70, d_002afa70::f_002afa70);
