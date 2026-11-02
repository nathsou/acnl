// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_007c28f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007c28f0 {

struct __attribute__((packed)) Object_007c28f0_0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u8 unknown_1c[0x4];  // (not used here)
    u32 word_20;
};
GUEST_OFFSET(Object_007c28f0_0, word_18, 0x18);
GUEST_OFFSET(Object_007c28f0_0, word_20, 0x20);

struct __attribute__((packed)) Local_007c28f0_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007c28f0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_007c28f0_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_007c28f0_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_007c28f0_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007c28f0_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_007c28f0_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_007c28f0_r0_5 {
    u8 unknown_0[0x11];  // (not used here)
    u8 byte_11;
    u8 byte_12;
    u8 unknown_13[0x8d];  // (not used here)
    u32 word_a0;
};
GUEST_OFFSET(Local_007c28f0_r0_5, byte_11, 0x11);
GUEST_OFFSET(Local_007c28f0_r0_5, byte_12, 0x12);
GUEST_OFFSET(Local_007c28f0_r0_5, word_a0, 0xa0);

struct __attribute__((packed)) Local_007c28f0_r2_1 {
    u8 byte_0;
    u8 unknown_1[0xb];  // (not used here)
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_007c28f0_r2_1, byte_0, 0x0);
GUEST_OFFSET(Local_007c28f0_r2_1, word_c, 0xc);
GUEST_OFFSET(Local_007c28f0_r2_1, word_10, 0x10);
GUEST_OFFSET(Local_007c28f0_r2_1, word_14, 0x14);
GUEST_OFFSET(Local_007c28f0_r2_1, word_18, 0x18);

struct __attribute__((packed)) Local_007c28f0_r8_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007c28f0_r8_1, word_0, 0x0);
GUEST_OFFSET(Local_007c28f0_r8_1, word_4, 0x4);

inline constexpr guest::Function<0x0012de78, u32(u32, u32, u32)> call_0012de78;
inline constexpr guest::Function<0x0012ffcc, u32(u32, u32, u32, u32)> call_0012ffcc;
inline constexpr guest::Function<0x0012ffdc, u32(u32, u32)> call_0012ffdc;

u32 f_007c28f0(gptr<Object_007c28f0_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_3 = 0;
    gptr<Local_007c28f0_ea_1> ea_1 = gptr<Local_007c28f0_ea_1>(frame.at(0x28).addr());  // (from the original)
    u32 r5_1 = ea_1->word_0;
    u32 r6_1 = ea_1->word_4;
    u32 r12_1 = ea_1->word_8;
    u32 r9_1 = arg0->word_20;
    gptr<Local_007c28f0_ea_2> ea_2 = gptr<Local_007c28f0_ea_2>(frame.at(0x20).addr());  // (from the original)
    u32 r7_1 = ea_2->word_0;
    u32 r14 = ea_2->word_4;
    gptr<Local_007c28f0_r2_1> r2_1 = gptr<Local_007c28f0_r2_1>(arg0->word_18 + ((r9_1 << 3) - r9_1 << 2));
    r2_1->byte_0 = 2;
    gptr<Local_007c28f0_r8_1> r8_1 = gptr<Local_007c28f0_r8_1>(r2_1.addr() + 4u);
    r8_1->word_0 = r1;
    r8_1->word_4 = r3;
    u32 r0_2 = (r2 & 0x7fffffu) | r2_1->word_c >> 0x17 << 0x17;  // (from the original)
    r2_1->word_c = r0_2;
    if (r7_1 == 0x10u) {  // (from the original)
        r2_1->word_c = r0_2 & ~0x1800000u;  // (from the original)
    } else {
        if (r7_1 == 0x18u) {  // (from the original)
            r0_3 = r0_2 & ~0x1800000u | 0x800000u;  // (from the original)
        } else if (r7_1 == 0x20u) {  // (from the original)
            r0_3 = r0_2 & ~0x1800000u | 0x1000000u;  // (from the original)
        } else {
            goto L_7c2978;
        }
        r2_1->word_c = r0_3;
    }
L_7c2978:;
    u32 r1_1 = r5_1 & 0x7fffffu;  // (from the original)
    u32 r0_4 = r2_1->word_18 >> 0x17 << 0x17 | r1_1;  // (from the original)
    r2_1->word_18 = r0_4;
    r2_1->word_14 = r6_1;
    if (r12_1 == 0x10u) {  // (from the original)
        r0_4 &= ~0x1800000u;  // (from the original)
    }
    r2_1->word_10 = r14;
    if (r12_1 == 0x10u) {  // (from the original)
        r2_1->word_18 = r0_4;
    } else {
        if (r12_1 == 0x18u) {  // (from the original)
            r0_4 = r0_4 & ~0x1800000u | 0x800000u;  // (from the original)
        } else if (r12_1 == 0x20u) {  // (from the original)
            r0_4 = r0_4 & ~0x1800000u | 0x1000000u;  // (from the original)
        } else {
            goto L_7c29d0;
        }
        r2_1->word_18 = r0_4;
    }
L_7c29d0:;
    call_0012ffcc(r0_4, r1_1, r2_1.addr(), r3);
    gptr<Local_007c28f0_r0_5> r0_5 = gptr<Local_007c28f0_r0_5>(0xadf8c0u);  // (from the original)
    arg0->word_20 = arg0->word_20 + 1u;
    u32 r1_2 = r0_5->word_a0;
    if (r1_2 == r0) {
        r1_2 = r0_5->byte_12;
        if (r1_2 != 0) {
            r1_2 = r0_5->byte_11;
            if (r1_2 == 0) {
                r0_5->byte_11 = 1;
                r0_5 = gptr<Local_007c28f0_r0_5>(call_0012de78(r0_5.addr(), 1u, r2_1.addr()));
                r1_2 = guest::cpu()->r[1];
            }
        }
    }
    frame.release();
    return call_0012ffdc(r0_5.addr(), r1_2);
}

}  // namespace d_007c28f0
GUEST_EXPORT(0x007c28f0, d_007c28f0::f_007c28f0);

// f_007c3094: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007c3094 {

struct __attribute__((packed)) Object_007c3094_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_007c3094_0, word_c, 0xc);

struct __attribute__((packed)) Local_007c3094_r2_1 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Local_007c3094_r2_1, word_10, 0x10);

inline guest::global<u32, 0x0097d7ac> global_0097d7ac;

void f_007c3094(gptr<Object_007c3094_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    gptr<Local_007c3094_r2_1> r2_1 = gptr<Local_007c3094_r2_1>(*global_0097d7ac + ((r1 & 0x1ffu) << 2));  // (from the original)
    u32 r3 = r2_1->word_10;
    if (r3 == 0) {
        r2_1->word_10 = r0;
        return;
    }
    if (*gptr<u32>(r3 + 8u) > r1) {
        arg0->word_c = r3;
        r2_1->word_10 = r0;
        return;
    }
    u32 r2 = *gptr<u32>(r3 + 0xcu);  // (from the original)
    if (r2 == 0) {
        *gptr<u32>(r3 + 0xcu) = r0;  // (from the original)
        return;
    }
    do {
        if (*gptr<u32>(r2 + 8u) > r1) {
            *gptr<u32>(r3 + 0xcu) = r0;  // (from the original)
            arg0->word_c = r2;
            if (r2 != 0) {
                return;
            }
            *gptr<u32>(r3 + 0xcu) = r0;  // (from the original)
            return;
        }
        r3 = r2;
        r2 = *gptr<u32>(r2 + 0xcu);  // (from the original)
        guest::preempt();
    } while (r2 != 0);
    *gptr<u32>(r3 + 0xcu) = r0;  // (from the original)
}

}  // namespace d_007c3094
GUEST_EXPORT(0x007c3094, d_007c3094::f_007c3094);

// f_007c513c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007c513c {

struct __attribute__((packed)) Object_007c513c_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_007c513c_0, half_0, 0x0);


u32 f_007c513c(gptr<Object_007c513c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 ea_1 = 0;
    u32 r1 = 0u;
    if (arg0->half_0 == 0) {
        guest::cpu()->r[1] = r1;
        return r1;
    }
    do {
        ea_1 = r0 + 2u;
        r0 = ea_1;
        r1 += 1u;
        guest::preempt();
    } while (*gptr<u16>(ea_1) != 0);
    guest::cpu()->r[1] = r1;
    return r1;
}

}  // namespace d_007c513c
GUEST_EXPORT(0x007c513c, d_007c513c::f_007c513c);

// f_007c5518: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007c5518 {

struct __attribute__((packed)) Object_007c5518_1 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
};
GUEST_OFFSET(Object_007c5518_1, float_0, 0x0);
GUEST_OFFSET(Object_007c5518_1, float_4, 0x4);
GUEST_OFFSET(Object_007c5518_1, float_8, 0x8);
GUEST_OFFSET(Object_007c5518_1, float_c, 0xc);

struct __attribute__((packed)) Local_007c5518_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007c5518_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_007c5518_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_007c5518_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_007c5518_r2_1 {
    u8 unknown_0[0x298];  // (not used here)
    float float_298;
    float float_29c;
    float float_2a0;
    float float_2a4;
};
GUEST_OFFSET(Local_007c5518_r2_1, float_298, 0x298);
GUEST_OFFSET(Local_007c5518_r2_1, float_29c, 0x29c);
GUEST_OFFSET(Local_007c5518_r2_1, float_2a0, 0x2a0);
GUEST_OFFSET(Local_007c5518_r2_1, float_2a4, 0x2a4);

struct __attribute__((packed)) Local_007c5518_r3_1 {
    u32 word_0;
};
GUEST_OFFSET(Local_007c5518_r3_1, word_0, 0x0);

inline guest::global<u32, 0x0097d784> global_0097d784;

void f_007c5518(u32 r0, gptr<Object_007c5518_1> arg1) {
    gptr<Local_007c5518_r3_1> r3_1 = gptr<Local_007c5518_r3_1>(*global_0097d784);
    gptr<Local_007c5518_r2_1> r2_1 = gptr<Local_007c5518_r2_1>(r3_1.addr() + (r0 << 4));
    r2_1->float_298 = arg1->float_0;
    r2_1->float_29c = arg1->float_4;
    r2_1->float_2a0 = arg1->float_8;
    r2_1->float_2a4 = arg1->float_c;
    u32 r2_2 = std::bit_cast<u32>(arg1->float_0);
    u32 r12_1 = r2_2 & ~0x80000000u;  // (from the original)
    if (r12_1 != 0) {
        r12_1 = (r2_2 >> 0x17u & 0xffu) - 0x40u;  // (from the original)
    }
    u32 res_1 = r12_1;
    u32 vf_1 = (r12_1 & (r12_1 ^ res_1)) >> 0x1f;  // (from the original)
    u32 r2_3 = r2_2 >> 0x1f;  // (from the original)
    if (s32(r12_1) >= 0) {
        r12_1 = (r2_2 >> 7u & 0xffffu) | r12_1 << 0x10;  // (from the original)
    }
    u32 r2_4 = std::bit_cast<u32>(arg1->float_4);
    u32 r12_2 = r2_4 & ~0x80000000u;  // (from the original)
    if (r12_2 != 0) {
        r12_2 = (r2_4 >> 0x17u & 0xffu) - 0x40u;  // (from the original)
    }
    u32 res_2 = r12_2;
    u32 vf_2 = (r12_2 & (r12_2 ^ res_2)) >> 0x1f;  // (from the original)
    u32 r2_5 = r2_4 >> 0x1f;  // (from the original)
    if (s32(r12_2) >= 0) {
        r12_2 = (r2_4 >> 7u & 0xffffu) | r12_2 << 0x10 | r2_5 << 0x17;  // (from the original)
    }
    if (res_2 >> 0x1f != vf_2) {  // (from the original)
        r12_2 = r2_5 << 0x17;  // (from the original)
    }
    u32 r2_6 = std::bit_cast<u32>(arg1->float_8);
    u32 r5_2 = r2_6 & ~0x80000000u;  // (from the original)
    if (r5_2 != 0) {
        r5_2 = (r2_6 >> 0x17u & 0xffu) - 0x40u;  // (from the original)
    }
    u32 r2_7 = r2_6 >> 0x1f;  // (from the original)
    float S0_1 = arg1->float_c;
    if (s32(r5_2) >= 0) {
        r2_7 = (r2_6 >> 7u & 0xffffu) | r5_2 << 0x10 | r2_7 << 0x17;  // (from the original)
    }
    u32 r1_1 = std::bit_cast<u32>(S0_1);
    if (s32(r5_2) < 0) {
        r2_7 <<= 0x17;  // (from the original)
    }
    u32 r5_3 = r1_1 & ~0x80000000u;  // (from the original)
    if (r5_3 != 0) {
        r5_3 = (r1_1 >> 0x17u & 0xffu) - 0x40u;  // (from the original)
    }
    u32 r6_2 = r1_1 >> 7u & 0xffffu;  // (from the original)
    u32 r1_2 = r1_1 >> 0x1f;  // (from the original)
    u32 r1_3 = r2_7 >> 0x10 | (s32(r5_3) >= 0 ? r6_2 | r5_3 << 0x10 | r1_2 << 0x17 : r1_2 << 0x17) << 8;  // (from the original)
    gptr<Local_007c5518_ea_1> ea_1 = gptr<Local_007c5518_ea_1>(r3_1.addr() + r0 * 0xcu + 0x398u);  // (from the original)
    ea_1->word_0 = r1_3;
    ea_1->word_4 = r12_2 >> 8u & 0xffffu | r2_7 << 0x10;  // (from the original)
    ea_1->word_8 = (res_1 >> 0x1f == vf_1 ? r12_1 | r2_3 << 0x17 : r2_3 << 0x17) | r12_2 << 0x18;  // (from the original)
    r3_1->word_0 = r3_1->word_0 | 0x80u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_007c5518
GUEST_EXPORT_FRAMED(0x007c5518, d_007c5518::f_007c5518, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_007c5cd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007c5cd0 {

struct __attribute__((packed)) Object_007c5cd0_0 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Object_007c5cd0_0, float_0, 0x0);
GUEST_OFFSET(Object_007c5cd0_0, float_4, 0x4);
GUEST_OFFSET(Object_007c5cd0_0, float_8, 0x8);

inline guest::global<u8, 0x009751b8> global_009751b8;
inline guest::global<u8, 0x009751b9> global_009751b9;
inline guest::global<u8, 0x009751ba> global_009751ba;
inline guest::global<u8, 0x009751bb> global_009751bb;
inline guest::global<u8, 0x009751bc> global_009751bc;
inline guest::global<u8, 0x009751bd> global_009751bd;

void f_007c5cd0(gptr<Object_007c5cd0_0> arg0) {
    float S2_1 = arg0->float_0;
    float S0_1 = arg0->float_4;
    float S1_1 = arg0->float_8;
    if (*global_009751ba != 0) {
        S2_1 = -S2_1;
    }
    if (*global_009751b8 != 0) {
        S0_1 = -S0_1;
    }
    if (*global_009751b9 != 0) {
        S1_1 = -S1_1;
    }
    *gptr<u32>(arg0.addr() + (u32(*global_009751bd) << 2)) = std::bit_cast<u32>(S2_1);
    *gptr<u32>(arg0.addr() + (u32(*global_009751bb) << 2)) = std::bit_cast<u32>(S0_1);
    u32 r1_1 = *global_009751bc;
    *gptr<u32>(arg0.addr() + (r1_1 << 2)) = std::bit_cast<u32>(S1_1);
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_007c5cd0
GUEST_EXPORT(0x007c5cd0, d_007c5cd0::f_007c5cd0);

// f_007c7610: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007c7610 {

struct __attribute__((packed)) Local_007c7610_r0_6 {
    u8 unknown_0[0x220];  // (not used here)
    u32 word_220;
    u8 unknown_224[0x79c];  // (not used here)
    u32 word_9c0;
    u8 unknown_9c4[0x38];  // (not used here)
    u32 word_9fc;
};
GUEST_OFFSET(Local_007c7610_r0_6, word_220, 0x220);
GUEST_OFFSET(Local_007c7610_r0_6, word_9c0, 0x9c0);
GUEST_OFFSET(Local_007c7610_r0_6, word_9fc, 0x9fc);

inline constexpr u32 vtable_InstSelect_8_ = 0x008eb1a8u;
inline constexpr guest::Function<0x001b02c0, u32(u32, u32, u32, u32)> call_001b02c0;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;

u32 f_007c7610(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = call_001b02c0(r0, r1, r2, r3);
    *gptr<u32>(r0_1) = vtable_InstSelect_8_;
    u32 r0_3 = call_00301d0c(r0_1 + 0xaecu, 0x1c81a8u, 0x1cu, 8u);  // (from the original)
    u32 r0_5 = call_00301d0c(r0_3 + 0xe0u, 0x2b6de0u, 0xe0u, 8u);  // (from the original)
    gptr<Local_007c7610_r0_6> r0_6 = gptr<Local_007c7610_r0_6>(r0_5 - 0xbccu);  // (from the original)
    r0_6->word_9c0 = 8;
    r0_6->word_220 = r0_6.addr() + 0xaecu;  // (from the original)
    r0_6->word_9fc = r0_6.addr() + 0xbccu;  // (from the original)
    return r0_6.addr();
}

}  // namespace d_007c7610
GUEST_EXPORT_FRAMED(0x007c7610, d_007c7610::f_007c7610, 0x4010);  // pushes {r4, lr} first, as the original

// f_007c769c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007c769c {

struct __attribute__((packed)) Local_007c769c_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_007c769c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_007c769c_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_007c769c_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_007c769c_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_007c769c_ea_1, word_10, 0x10);

struct __attribute__((packed)) Local_007c769c_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_007c769c_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_007c769c_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_007c769c_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_007c769c_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_007c769c_ea_2, word_10, 0x10);
GUEST_OFFSET(Local_007c769c_ea_2, word_14, 0x14);

struct __attribute__((packed)) Local_007c769c_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_007c769c_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_007c769c_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_007c769c_ea_3, word_8, 0x8);
GUEST_OFFSET(Local_007c769c_ea_3, word_c, 0xc);
GUEST_OFFSET(Local_007c769c_ea_3, word_10, 0x10);

inline constexpr guest::Function<0x00314a1c, u32(u32, u32)> call_00314a1c;
inline constexpr guest::Function<0x00314a9c, u32(u32, u32, u32, u32)> call_00314a9c;
inline constexpr guest::Function<0x00314b04, u32(u32, u32)> call_00314b04;
inline constexpr guest::Function<0x00314b58, u32(u32, u32, u32, u32)> call_00314b58;

struct __attribute__((packed)) Frame_007c769c {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0x40];  // (not read or written by name)
};
GUEST_OFFSET(Frame_007c769c, word_0, 0x0);
GUEST_OFFSET(Frame_007c769c, word_4, 0x4);
GUEST_OFFSET(Frame_007c769c, word_8, 0x8);
GUEST_OFFSET(Frame_007c769c, word_c, 0xc);
GUEST_OFFSET(Frame_007c769c, word_10, 0x10);
GUEST_OFFSET(Frame_007c769c, word_14, 0x14);
GUEST_SIZE(Frame_007c769c, 0x58);

void f_007c769c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_007c769c> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r4_1 = 0;
    u32 r12_1 = 0;
    u32 r0_5 = 0;
    gptr<Local_007c769c_ea_1> ea_1 = gptr<Local_007c769c_ea_1>(frame.at(0x44).addr());  // (from the original)
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r7;
    ea_1->word_10 = r14;
    r5 = r0;
    r4 = r2;
    call_00314a9c(frame.at(0x20).addr(), r1, r2, r3);  // (from the original)
    r7 = frame.at(0x20).addr();  // (from the original)
    call_00314a1c(frame.at(0).addr(), r1);
    r6 = frame.at(0).addr();
    u32 r0_3 = call_00314b04(r7, r6);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_3 != 0) {
        do {
            if (r4 == *gptr<u32>(r7 + 0x14u)) {  // (from the original)
                gptr<Local_007c769c_ea_2> ea_2 = gptr<Local_007c769c_ea_2>(frame.at(0x20).addr());  // (from the original)
                r0_4 = ea_2->word_0;
                r1_1 = ea_2->word_4;
                r2_3 = ea_2->word_8;
                r3_3 = ea_2->word_c;
                r4_1 = ea_2->word_10;
                r12_1 = ea_2->word_14;
                goto L_7c7724;
            }
            call_00314b58(r7, r1, r2, r3);
            r0_5 = call_00314b04(r7, r6);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            guest::preempt();
        } while (r0_5 != 0);
    }
    r0_4 = frame->word_0;
    r1_1 = frame->word_4;
    r2_3 = frame->word_8;
    r3_3 = frame->word_c;
    r4_1 = frame->word_10;
    r12_1 = frame->word_14;
L_7c7724:;
    *gptr<u32>(r5) = r0_4;
    *gptr<u32>(r5 + 4) = r1_1;
    *gptr<u32>(r5 + 8) = r2_3;
    *gptr<u32>(r5 + 0xc) = r3_3;  // (from the original)
    *gptr<u32>(r5 + 0x10) = r4_1;  // (from the original)
    *gptr<u32>(r5 + 0x14) = r12_1;  // (from the original)
    gptr<Local_007c769c_ea_3> ea_3 = gptr<Local_007c769c_ea_3>(frame.at(0x44).addr());  // (from the original)
    u32 r4_2 = ea_3->word_0;
    u32 r5_1 = ea_3->word_4;
    u32 r6_1 = ea_3->word_8;
    u32 r7_1 = ea_3->word_c;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
}

}  // namespace d_007c769c
GUEST_EXPORT(0x007c769c, d_007c769c::f_007c769c);

// f_007c7740: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007c7740 {

inline constexpr guest::Function<0x00314b04, u32(u32, u32, u32, u32)> call_00314b04;
inline constexpr guest::Function<0x00314b58, u32(u32, u32, u32, u32)> call_00314b58;

void f_007c7740(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r4_2 = 0;
    u32 r12_1 = 0;
    u32 r0_3 = 0;
    u32 r6 = r1;
    u32 r5 = r0;
    u32 r4_1 = r3;
    u32 r7 = r2;
    u32 r0_1 = call_00314b04(r6, r2, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (!(r0_1 == 0)) {
        u32 r4 = r4_1 & 0xffu;  // (from the original)
        do {
            if (r4 == *gptr<u8>(r6 + 0x10u)) {  // (from the original)
                r0_2 = *gptr<u32>(r6);
                r1_1 = *gptr<u32>(r6 + 4);
                r2_1 = *gptr<u32>(r6 + 8);
                r3_1 = *gptr<u32>(r6 + 0xc);  // (from the original)
                r4_2 = *gptr<u32>(r6 + 0x10);  // (from the original)
                r12_1 = *gptr<u32>(r6 + 0x14);  // (from the original)
                *gptr<u32>(r5) = r0_2;
                *gptr<u32>(r5 + 4) = r1_1;
                *gptr<u32>(r5 + 8) = r2_1;
                *gptr<u32>(r5 + 0xc) = r3_1;  // (from the original)
                *gptr<u32>(r5 + 0x10) = r4_2;  // (from the original)
                *gptr<u32>(r5 + 0x14) = r12_1;  // (from the original)
                return;
            }
            call_00314b58(r6, r1, r2, r3);
            r0_3 = call_00314b04(r6, r7, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            guest::preempt();
        } while (r0_3 != 0);
    }
    r0_2 = *gptr<u32>(r7);
    r1_1 = *gptr<u32>(r7 + 4);
    r2_1 = *gptr<u32>(r7 + 8);
    r3_1 = *gptr<u32>(r7 + 0xc);  // (from the original)
    r4_2 = *gptr<u32>(r7 + 0x10);  // (from the original)
    r12_1 = *gptr<u32>(r7 + 0x14);  // (from the original)
    *gptr<u32>(r5) = r0_2;
    *gptr<u32>(r5 + 4) = r1_1;
    *gptr<u32>(r5 + 8) = r2_1;
    *gptr<u32>(r5 + 0xc) = r3_1;  // (from the original)
    *gptr<u32>(r5 + 0x10) = r4_2;  // (from the original)
    *gptr<u32>(r5 + 0x14) = r12_1;  // (from the original)
}

}  // namespace d_007c7740
GUEST_EXPORT_FRAMED(0x007c7740, d_007c7740::f_007c7740, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_007c77b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007c77b4 {

inline constexpr guest::Function<0x004ee364, u32(u32, u32, u32, u32)> call_004ee364;

void f_007c77b4(u32 r0, u32 r1) {
    u32 r5 = r0;
    u32 r7 = r1;
    u32 r6 = 0u;
    do {
        if ((lsr_r(r7, r6 & 0xff) & 1u) != 0) {  // (from the original)
            u32 r0_1 = *gptr<u32>(r5 + 0x1cu);  // (from the original)
            u32 r4 = 0u;
            if (r0_1 >= 0u && r0_1 != 0) {
                do {
                    u32 r0_2 = *gptr<u32>(r5 + (r4 << 2));
                    if (r0_2 != 0) {
                        call_004ee364(r0_2, r6, guest::cpu()->r[2], guest::cpu()->r[3]);
                        r1 = guest::cpu()->r[1];
                    }
                    r4 += 1u;
                    guest::preempt();
                } while (*gptr<u32>(r5 + 0x1cu) > r4);  // (from the original)
            }
        }
        r6 += 1u;
        guest::preempt();
    } while (r6 < 3u);
    *gptr<u32>(r5) = 0;
    *gptr<u32>(r5 + 4u) = 0;
    *gptr<u32>(r5 + 8u) = 0;
    *gptr<u32>(r5 + 0xcu) = 0;  // (from the original)
    *gptr<u32>(r5 + 0x10u) = 0;  // (from the original)
    *gptr<u32>(r5 + 0x14u) = 0;  // (from the original)
    *gptr<u32>(r5 + 0x18u) = 0;  // (from the original)
    *gptr<u32>(r5 + 0x1cu) = 0;  // (from the original)
    guest::cpu()->r[1] = r1;
}

}  // namespace d_007c77b4
GUEST_EXPORT_FRAMED(0x007c77b4, d_007c77b4::f_007c77b4, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_007ce068: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007ce068 {

struct __attribute__((packed)) Object_007ce068_0 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_007ce068_0, word_0, 0x0);
GUEST_OFFSET(Object_007ce068_0, word_c, 0xc);

struct __attribute__((packed)) Local_007ce068_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_007ce068_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_007ce068_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_007ce068_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_007ce068_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_007ce068_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_007ce068_ea_1, word_14, 0x14);

struct __attribute__((packed)) Local_007ce068_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_007ce068_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_007ce068_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_007ce068_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_007ce068_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_007ce068_ea_2, word_10, 0x10);
GUEST_OFFSET(Local_007ce068_ea_2, word_14, 0x14);

inline constexpr guest::Function<0x007ce1bc, u32(u32, u32, u32, u32)> call_007ce1bc;
inline constexpr guest::Function<0x00813bd0, u32(u32, u32, u32, u32)> call_00813bd0;

u32 f_007ce068(gptr<Object_007ce068_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_12 = 0;
    gptr<Local_007ce068_ea_1> ea_1 = gptr<Local_007ce068_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r7;
    ea_1->word_10 = r8;
    ea_1->word_14 = r14;
    r4 = 0u;
    r8 = r0;
    u32 r3 = arg0->word_c;
    r6 = r3 + (arg0->word_0 * r2 + r1) * 0x14u;  // (from the original)
    *gptr<u8>(r6 + 3u) = 3;
    do {
        u32 r0_1 = call_007ce1bc(r8, r6, r4, r3);
        r3 = guest::cpu()->r[3];
        if (r0_1 != 0) {
            call_00813bd0(r6 + 2u, r4, 0u, r3);
            call_00813bd0(r0_1 + 2u, ((r4 & 1u) == 0 ? r4 + 1u : r4 - 1u) & 0xffu, 0u, guest::cpu()->r[3]);  // (from the original)
            r3 = guest::cpu()->r[3];
            if (r4 != 0) {
                if (r4 == 1u) {
                    call_00813bd0(r0_1 + 2u, 4u, 0u, r3);
                    call_00813bd0(r0_1 + 2u, 7u, 0u, guest::cpu()->r[3]);
                    r3 = guest::cpu()->r[3];
                } else if (r4 == 2u) {
                    call_00813bd0(r0_1 + 2u, 7u, 0u, r3);
                    call_00813bd0(r0_1 + 2u, 5u, 0u, guest::cpu()->r[3]);
                    r3 = guest::cpu()->r[3];
                } else if (r4 == 3u) {
                    call_00813bd0(r0_1 + 2u, 4u, 0u, r3);
                    call_00813bd0(r0_1 + 2u, 6u, 0u, guest::cpu()->r[3]);
                    r3 = guest::cpu()->r[3];
                }
            } else {
                call_00813bd0(r0_1 + 2u, 6u, 0u, r3);
                call_00813bd0(r0_1 + 2u, 5u, 0u, guest::cpu()->r[3]);
                r3 = guest::cpu()->r[3];
            }
        }
        r0_12 = r4 + 1u;
        r4 = r0_12 & 0xffu;  // (from the original)
        guest::preempt();
    } while (r4 < 8u);
    gptr<Local_007ce068_ea_2> ea_2 = gptr<Local_007ce068_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    u32 r6_1 = ea_2->word_8;
    u32 r7_2 = ea_2->word_c;
    u32 r8_1 = ea_2->word_10;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_1;
    return r0_12;
}

}  // namespace d_007ce068
GUEST_EXPORT(0x007ce068, d_007ce068::f_007ce068);

// f_007ce358: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007ce358 {

struct __attribute__((packed)) Object_007ce358_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_007ce358_0, word_10, 0x10);

struct __attribute__((packed)) Object_007ce358_1 {
    u8 unknown_0[0x3];  // (not used here)
    u8 byte_3;
    u8 unknown_4[0x4];  // (not used here)
    float float_8;
    u8 unknown_c[0x4];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_007ce358_1, byte_3, 0x3);
GUEST_OFFSET(Object_007ce358_1, float_8, 0x8);
GUEST_OFFSET(Object_007ce358_1, word_10, 0x10);


void f_007ce358(gptr<Object_007ce358_0> arg0, gptr<Object_007ce358_1> arg1, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 fpsr = guest::cpu()->fpscr;
    float S1_1 = 0;
    r0 = r0 + 0x10u;  // (from the original)
    u32 r2 = arg0->word_10;
    if (r2 == 0) {
        arg1->word_10 = 0;
        *gptr<u32>(r0) = r1;
        return;
    } else {
        S0 = arg1->float_8;
    }
    do {
        S1_1 = std::bit_cast<float>(*gptr<u32>(r2 + 8u));
        fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1_1, S0);  // (from the original)
        if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
            arg1->word_10 = r2;
            arg1->byte_3 = 1;
            *gptr<u32>(r0) = r1;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1_1;
            return;
        }
        r0 = r2 + 0x10u;  // (from the original)
        r2 = *gptr<u32>(r2 + 0x10u);  // (from the original)
        guest::preempt();
    } while (r2 != 0);
    arg1->word_10 = 0;
    *gptr<u32>(r0) = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_007ce358
GUEST_EXPORT(0x007ce358, d_007ce358::f_007ce358);

// f_007ce860: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007ce860 {

struct __attribute__((packed)) Object_007ce860_0 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_007ce860_0, word_0, 0x0);
GUEST_OFFSET(Object_007ce860_0, word_8, 0x8);
GUEST_OFFSET(Object_007ce860_0, word_c, 0xc);
GUEST_OFFSET(Object_007ce860_0, word_10, 0x10);
GUEST_OFFSET(Object_007ce860_0, word_14, 0x14);

struct __attribute__((packed)) Local_007ce860_r1_3 {
    u8 unknown_0[0x3];  // (not used here)
    u8 byte_3;
    float float_4;
    float float_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_007ce860_r1_3, byte_3, 0x3);
GUEST_OFFSET(Local_007ce860_r1_3, float_4, 0x4);
GUEST_OFFSET(Local_007ce860_r1_3, float_8, 0x8);
GUEST_OFFSET(Local_007ce860_r1_3, word_c, 0xc);
GUEST_OFFSET(Local_007ce860_r1_3, word_10, 0x10);


void f_007ce860(gptr<Object_007ce860_0> arg0, float S0) {
    u32 r4 = 0u;
    arg0->word_10 = r4;
    arg0->word_14 = r4;
    u32 r1_1 = arg0->word_8;
    u32 r5 = arg0->word_0;
    u32 r2 = r4;
    if (r1_1 >= 0u && r1_1 != 0) {
        S0 = 0.0f;
    }
    u32 r3 = r4;
    u32 r12 = r4;
    if (r1_1 >= 0u && r1_1 != 0) {
        do {
            u32 r1_2 = arg0->word_0 * r3 + r2;
            gptr<Local_007ce860_r1_3> r1_3 = gptr<Local_007ce860_r1_3>(arg0->word_c + (r1_2 + (r1_2 << 2) << 2));
            if (r1_3->byte_3 != 3u) {
                r1_3->byte_3 = u8(r4);
                r1_3->float_4 = S0;
                r1_3->float_8 = S0;
                r1_3->word_c = r4;
                r1_3->word_10 = r4;
            }
            r2 += 1u;
            r1_1 = arg0->word_8;
            if (r2 == r5) {
                r2 = 0u;
                r3 += 1u;
            }
            r12 += 1u;
            guest::preempt();
        } while (r1_1 > r12);
    }
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0;
}

}  // namespace d_007ce860
GUEST_EXPORT_FRAMED(0x007ce860, d_007ce860::f_007ce860, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_007cee58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007cee58 {

struct __attribute__((packed)) Object_007cee58_0 {
    u8 byte_0;
    u8 byte_1;
    u8 unknown_2[0x6];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x8];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Object_007cee58_0, byte_0, 0x0);
GUEST_OFFSET(Object_007cee58_0, byte_1, 0x1);
GUEST_OFFSET(Object_007cee58_0, word_8, 0x8);
GUEST_OFFSET(Object_007cee58_0, word_14, 0x14);

inline constexpr guest::Function<0x007cefbc, u32(u32, u32, u32, u32)> call_007cefbc;
inline constexpr guest::Function<0x00813bd0, u32(u32, u32, u32, u32)> call_00813bd0;

u32 f_007cee58(gptr<Object_007cee58_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r0_13 = 0;
    u32 r7 = r0;
    u32 r3 = arg0->word_8;
    u32 r0_1 = r3 * (r2 - u32(arg0->byte_1)) + (r1 - u32(arg0->byte_0));
    u32 r4 = 0u;
    u32 r6 = arg0->word_14 + (r0_1 + (r0_1 << 2) << 2);
    *gptr<u8>(r6 + 3u) = 3;
    do {
        u32 r0_2 = call_007cefbc(r7, r6, r4, r3);
        r3 = guest::cpu()->r[3];
        if (r0_2 != 0) {
            call_00813bd0(r6 + 2u, r4, 0u, r3);
            call_00813bd0(r0_2 + 2u, ((r4 & 1u) == 0 ? r4 + 1u : r4 - 1u) & 0xffu, 0u, guest::cpu()->r[3]);  // (from the original)
            r3 = guest::cpu()->r[3];
            if (r4 != 0) {
                if (r4 == 1u) {
                    call_00813bd0(r0_2 + 2u, 4u, 0u, r3);
                    call_00813bd0(r0_2 + 2u, 7u, 0u, guest::cpu()->r[3]);
                    r3 = guest::cpu()->r[3];
                } else if (r4 == 2u) {
                    call_00813bd0(r0_2 + 2u, 7u, 0u, r3);
                    call_00813bd0(r0_2 + 2u, 5u, 0u, guest::cpu()->r[3]);
                    r3 = guest::cpu()->r[3];
                } else if (r4 == 3u) {
                    call_00813bd0(r0_2 + 2u, 4u, 0u, r3);
                    call_00813bd0(r0_2 + 2u, 6u, 0u, guest::cpu()->r[3]);
                    r3 = guest::cpu()->r[3];
                }
            } else {
                call_00813bd0(r0_2 + 2u, 6u, 0u, r3);
                call_00813bd0(r0_2 + 2u, 5u, 0u, guest::cpu()->r[3]);
                r3 = guest::cpu()->r[3];
            }
        }
        r0_13 = r4 + 1u;
        r4 = r0_13 & 0xffu;  // (from the original)
        guest::preempt();
    } while (r4 < 8u);
    return r0_13;
}

}  // namespace d_007cee58
GUEST_EXPORT_FRAMED(0x007cee58, d_007cee58::f_007cee58, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_007cf170: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007cf170 {

struct __attribute__((packed)) Object_007cf170_0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
};
GUEST_OFFSET(Object_007cf170_0, word_18, 0x18);

struct __attribute__((packed)) Object_007cf170_1 {
    u8 unknown_0[0x3];  // (not used here)
    u8 byte_3;
    u8 unknown_4[0x4];  // (not used here)
    float float_8;
    u8 unknown_c[0x4];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_007cf170_1, byte_3, 0x3);
GUEST_OFFSET(Object_007cf170_1, float_8, 0x8);
GUEST_OFFSET(Object_007cf170_1, word_10, 0x10);


void f_007cf170(gptr<Object_007cf170_0> arg0, gptr<Object_007cf170_1> arg1, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 fpsr = guest::cpu()->fpscr;
    float S1_1 = 0;
    r0 = r0 + 0x18u;  // (from the original)
    u32 r2 = arg0->word_18;
    if (r2 == 0) {
        arg1->word_10 = 0;
        *gptr<u32>(r0) = r1;
        return;
    } else {
        S0 = arg1->float_8;
    }
    do {
        S1_1 = std::bit_cast<float>(*gptr<u32>(r2 + 8u));
        fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1_1, S0);  // (from the original)
        if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
            arg1->word_10 = r2;
            arg1->byte_3 = 1;
            *gptr<u32>(r0) = r1;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1_1;
            return;
        }
        r0 = r2 + 0x10u;  // (from the original)
        r2 = *gptr<u32>(r2 + 0x10u);  // (from the original)
        guest::preempt();
    } while (r2 != 0);
    arg1->word_10 = 0;
    *gptr<u32>(r0) = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_007cf170
GUEST_EXPORT(0x007cf170, d_007cf170::f_007cf170);

// f_007cf434: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007cf434 {

struct __attribute__((packed)) Object_007cf434_0 {
    u8 byte_0;
    u8 byte_1;
    u8 unknown_2[0x6];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x4];  // (not used here)
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Object_007cf434_0, byte_0, 0x0);
GUEST_OFFSET(Object_007cf434_0, byte_1, 0x1);
GUEST_OFFSET(Object_007cf434_0, word_8, 0x8);
GUEST_OFFSET(Object_007cf434_0, word_10, 0x10);
GUEST_OFFSET(Object_007cf434_0, word_14, 0x14);
GUEST_OFFSET(Object_007cf434_0, word_18, 0x18);
GUEST_OFFSET(Object_007cf434_0, word_1c, 0x1c);

struct __attribute__((packed)) Local_007cf434_r2_2 {
    u8 unknown_0[0x3];  // (not used here)
    u8 byte_3;
    float float_4;
    float float_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_007cf434_r2_2, byte_3, 0x3);
GUEST_OFFSET(Local_007cf434_r2_2, float_4, 0x4);
GUEST_OFFSET(Local_007cf434_r2_2, float_8, 0x8);
GUEST_OFFSET(Local_007cf434_r2_2, word_c, 0xc);
GUEST_OFFSET(Local_007cf434_r2_2, word_10, 0x10);


void f_007cf434(gptr<Object_007cf434_0> arg0, float S0) {
    u32 r12 = 0u;
    u32 r5 = r12;
    arg0->word_18 = r12;
    arg0->word_1c = r12;
    u32 r1_1 = arg0->word_10;
    u32 r4 = arg0->byte_0;
    u32 r3 = arg0->byte_1;
    u32 zf_1 = r1_1 == 0;
    u32 cf_1 = r1_1 >= 0u;
    if (r1_1 >= 0u && r1_1 != 0) {
        S0 = 0.0f;
    }
    u32 r1 = r4;
    u32 r6 = arg0->word_8 + r4;
    if (!!cf_1 && !zf_1) {
        do {
            u32 r2_1 = arg0->word_8 * (r3 - u32(arg0->byte_1)) + (r1 - u32(arg0->byte_0));
            gptr<Local_007cf434_r2_2> r2_2 = gptr<Local_007cf434_r2_2>(arg0->word_14 + (r2_1 + (r2_1 << 2) << 2));
            if (r2_2->byte_3 != 3u) {
                r2_2->byte_3 = u8(r12);
                r2_2->float_4 = S0;
                r2_2->float_8 = S0;
                r2_2->word_c = r12;
                r2_2->word_10 = r12;
            }
            r1 += 1u;
            if (r1 == r6) {
                r1 = r4;
                r3 += 1u;
            }
            r5 += 1u;
            guest::preempt();
        } while (arg0->word_10 > r5);
    }
    guest::cpu()->s[0] = S0;
}

}  // namespace d_007cf434
GUEST_EXPORT_FRAMED(0x007cf434, d_007cf434::f_007cf434, 0x3f0);  // pushes {r4, r5, r6, r7, r8, r9} first, as the original

// f_007cfab8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007cfab8 {

struct __attribute__((packed)) Object_007cfab8_0 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_007cfab8_0, word_0, 0x0);
GUEST_OFFSET(Object_007cfab8_0, word_4, 0x4);
GUEST_OFFSET(Object_007cfab8_0, word_c, 0xc);

inline guest::global<u32, 0x00982898> global_00982898;
inline constexpr guest::Function<0x00321af8, u32(u32, u32, u32, u32)> call_00321af8;

u32 f_007cfab8(gptr<Object_007cfab8_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r5 = 0u;
    if (arg0->word_0 != 0) {
        u32 r4 = arg0->word_c;
        if (s32(r4) >= 0x80) {  // (from the original)
            return ~0u;
        }
        if (r1 + 1u == 0) {
            guest::cpu()->r[1] = r1;
            return r5;
        }
        u32 r3_1 = arg0->word_4;
        if (r3_1 != r1) {
            goto L_7cfb0c;
        }
        r3_1 = r0 + 4u;
        if (r3_1 == 0) {
            goto L_7cfb0c;
        } else {
            r0 = r4;
        }
L_7cfafc:;
        if (s32(r0) >= s32(r4)) {
            guest::cpu()->r[1] = r1;
            return r5;
        }
        guest::cpu()->r[1] = r1;
        return ~0u;
L_7cfb0c:;
        call_00321af8(r0, 0x98288cu, r1, r3_1);  // (from the original)
        r1 = guest::cpu()->r[1];
        r0 = *global_00982898;
        guest::preempt();
        goto L_7cfafc;
    }
    guest::cpu()->r[1] = r1;
    return r5;
}

}  // namespace d_007cfab8
GUEST_EXPORT_FRAMED(0x007cfab8, d_007cfab8::f_007cfab8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_007cfb30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007cfb30 {

inline guest::global<u32, 0x00982898> global_00982898;
inline constexpr guest::Function<0x00321af8, u32(u32, u32, u32, u32)> call_00321af8;

u32 f_007cfb30(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 cf_1 = 0;
    u32 r2_2 = 0;
    u32 r3 = r0;
    u32 r5 = ~0u;
    u32 r4 = 0x80u;  // (from the original)
    r0 = 0u;
    do {
        u32 r2_1 = *gptr<u32>(r0 >= 2u ? r3 : r3 + (r0 << 2));
        if (r2_1 == 0) {
            guest::cpu()->r[1] = r1;
            return r0;
        }
        if (r0 < 2u) {
            r2_1 = r0 * 5u;
        }
        u32 r12_1 = r3 + 8u;
        if (r0 < 2u) {
            r12_1 += (r2_1 << 2);
        }
        r2 = *gptr<u32>(r12_1 + 8u);
        if (s32(r2) < s32(r4)) {
            if (r0 < 2u) {
                r2 = r0 * 5u;
            }
            u32 r12_2 = r3 + 8u;
            if (r0 < 2u) {
                r12_2 += (r2 << 2);
            }
            r5 = r0;
            r4 = *gptr<u32>(r12_2 + 8u);
        }
        r0 += 1u;
        guest::preempt();
    } while (s32(r0) < 2);
    if (s32(r5) < 0) {
        guest::cpu()->r[1] = r1;
        return ~0u;
    }
    if (r1 + 1u == 0) {
        guest::cpu()->r[1] = r1;
        return r5;
    } else {
        r0 = 0u;
    }
L_7cfbb0:;
    if (r0 < 2u) {
        r2 = r0 * 5u;
    }
    u32 r12_3 = r3 + 8u;
    if (r0 < 2u) {
        r12_3 += (r2 << 2);
    }
    if (*gptr<u32>(r12_3) != r1) {
        r0 += 1u;
        if (s32(r0) < 2) {
            guest::preempt();
            goto L_7cfbb0;
        }
        goto L_7cfc04;
    }
    cf_1 = r0 >= 2u;
    if (r0 < 2u) {
        r0 = r0 * 5u;
    }
    r2_2 = r3 + 8u;
    if (!cf_1) {
        r2_2 += (r0 << 2);
    }
    if (r2_2 == 0) {
        goto L_7cfc04;
    } else {
        r0 = *gptr<u32>(r2_2 + 8u);
    }
L_7cfbe8:;
    if (s32(r0) >= s32(r4)) {
        guest::cpu()->r[1] = r1;
        return r5;
    }
    guest::cpu()->r[1] = r1;
    return ~0u;
L_7cfc04:;
    call_00321af8(r3, 0x98288cu, r1, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    r0 = *global_00982898;
    guest::preempt();
    goto L_7cfbe8;
}

}  // namespace d_007cfb30
GUEST_EXPORT_FRAMED(0x007cfb30, d_007cfb30::f_007cfb30, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_007cfd98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007cfd98 {

inline guest::global<u32, 0x00982898> global_00982898;
inline constexpr guest::Function<0x00321af8, u32(u32, u32, u32, u32)> call_00321af8;

u32 f_007cfd98(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 cf_1 = 0;
    u32 r2_2 = 0;
    u32 r3 = r0;
    u32 r5 = ~0u;
    u32 r4 = 0x80u;  // (from the original)
    r0 = 0u;
    do {
        u32 r2_1 = *gptr<u32>(r0 >= 3u ? r3 : r3 + (r0 << 2));
        if (r2_1 == 0) {
            guest::cpu()->r[1] = r1;
            return r0;
        }
        if (r0 < 3u) {
            r2_1 = r0 * 5u;
        }
        u32 r12_1 = r3 + 0xcu;  // (from the original)
        if (r0 < 3u) {
            r12_1 += (r2_1 << 2);
        }
        r2 = *gptr<u32>(r12_1 + 8u);
        if (s32(r2) < s32(r4)) {
            if (r0 < 3u) {
                r2 = r0 * 5u;
            }
            u32 r12_2 = r3 + 0xcu;  // (from the original)
            if (r0 < 3u) {
                r12_2 += (r2 << 2);
            }
            r5 = r0;
            r4 = *gptr<u32>(r12_2 + 8u);
        }
        r0 += 1u;
        guest::preempt();
    } while (s32(r0) < 3);
    if (s32(r5) < 0) {
        guest::cpu()->r[1] = r1;
        return ~0u;
    }
    if (r1 + 1u == 0) {
        guest::cpu()->r[1] = r1;
        return r5;
    } else {
        r0 = 0u;
    }
L_7cfe18:;
    if (r0 < 3u) {
        r2 = r0 * 5u;
    }
    u32 r12_3 = r3 + 0xcu;  // (from the original)
    if (r0 < 3u) {
        r12_3 += (r2 << 2);
    }
    if (*gptr<u32>(r12_3) != r1) {
        r0 += 1u;
        if (s32(r0) < 3) {
            guest::preempt();
            goto L_7cfe18;
        }
        goto L_7cfe6c;
    }
    cf_1 = r0 >= 3u;
    if (r0 < 3u) {
        r0 = r0 * 5u;
    }
    r2_2 = r3 + 0xcu;  // (from the original)
    if (!cf_1) {
        r2_2 += (r0 << 2);
    }
    if (r2_2 == 0) {
        goto L_7cfe6c;
    } else {
        r0 = *gptr<u32>(r2_2 + 8u);
    }
L_7cfe50:;
    if (s32(r0) >= s32(r4)) {
        guest::cpu()->r[1] = r1;
        return r5;
    }
    guest::cpu()->r[1] = r1;
    return ~0u;
L_7cfe6c:;
    call_00321af8(r3, 0x98288cu, r1, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    r0 = *global_00982898;
    guest::preempt();
    goto L_7cfe50;
}

}  // namespace d_007cfd98
GUEST_EXPORT_FRAMED(0x007cfd98, d_007cfd98::f_007cfd98, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_007cfe94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007cfe94 {

inline guest::global<u32, 0x00982898> global_00982898;
inline constexpr guest::Function<0x00321af8, u32(u32, u32, u32, u32)> call_00321af8;

u32 f_007cfe94(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 cf_1 = 0;
    u32 r2_2 = 0;
    u32 r3 = r0;
    u32 r5 = ~0u;
    u32 r4 = 0x80u;  // (from the original)
    r0 = 0u;
    do {
        u32 r2_1 = *gptr<u32>(r0 >= 4u ? r3 : r3 + (r0 << 2));
        if (r2_1 == 0) {
            guest::cpu()->r[1] = r1;
            return r0;
        }
        if (r0 < 4u) {
            r2_1 = r0 * 5u;
        }
        u32 r12_1 = r3 + 0x10u;  // (from the original)
        if (r0 < 4u) {
            r12_1 += (r2_1 << 2);
        }
        r2 = *gptr<u32>(r12_1 + 8u);
        if (s32(r2) < s32(r4)) {
            if (r0 < 4u) {
                r2 = r0 * 5u;
            }
            u32 r12_2 = r3 + 0x10u;  // (from the original)
            if (r0 < 4u) {
                r12_2 += (r2 << 2);
            }
            r5 = r0;
            r4 = *gptr<u32>(r12_2 + 8u);
        }
        r0 += 1u;
        guest::preempt();
    } while (s32(r0) < 4);
    if (s32(r5) < 0) {
        guest::cpu()->r[1] = r1;
        return ~0u;
    }
    if (r1 + 1u == 0) {
        guest::cpu()->r[1] = r1;
        return r5;
    } else {
        r0 = 0u;
    }
L_7cff14:;
    if (r0 < 4u) {
        r2 = r0 * 5u;
    }
    u32 r12_3 = r3 + 0x10u;  // (from the original)
    if (r0 < 4u) {
        r12_3 += (r2 << 2);
    }
    if (*gptr<u32>(r12_3) != r1) {
        r0 += 1u;
        if (s32(r0) < 4) {
            guest::preempt();
            goto L_7cff14;
        }
        goto L_7cff68;
    }
    cf_1 = r0 >= 4u;
    if (r0 < 4u) {
        r0 = r0 * 5u;
    }
    r2_2 = r3 + 0x10u;  // (from the original)
    if (!cf_1) {
        r2_2 += (r0 << 2);
    }
    if (r2_2 == 0) {
        goto L_7cff68;
    } else {
        r0 = *gptr<u32>(r2_2 + 8u);
    }
L_7cff4c:;
    if (s32(r0) >= s32(r4)) {
        guest::cpu()->r[1] = r1;
        return r5;
    }
    guest::cpu()->r[1] = r1;
    return ~0u;
L_7cff68:;
    call_00321af8(r3, 0x98288cu, r1, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    r0 = *global_00982898;
    guest::preempt();
    goto L_7cff4c;
}

}  // namespace d_007cfe94
GUEST_EXPORT_FRAMED(0x007cfe94, d_007cfe94::f_007cfe94, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original
