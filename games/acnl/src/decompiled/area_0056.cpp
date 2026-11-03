// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "graphics/hemisphere_light.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_005601b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005601b8 {

struct __attribute__((packed)) Object_005601b8_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Object_005601b8_0, byte_0, 0x0);
GUEST_OFFSET(Object_005601b8_0, byte_1, 0x1);
GUEST_OFFSET(Object_005601b8_0, byte_2, 0x2);
GUEST_OFFSET(Object_005601b8_0, byte_3, 0x3);


void f_005601b8(gptr<Object_005601b8_0> arg0, float S0, float S1, float S2, float S3) {
    u32 fpsr = guest::cpu()->fpscr;
    float S5_1 = 0.0f;
    float S4_1 = 1.0f;
    u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S0, S5_1);  // (from the original)
    if (!(S0 < S5_1)) {
        fpsr_1 = fpsr_1 & 0xfffffffu | vfp_cmpf(S0, S4_1);  // (from the original)
        if (S0 > S4_1) {
            S0 = S4_1;
        }
    } else {
        S0 = S5_1;
    }
    float S6_1 = 255.0f;
    float S0_1 = S1;
    arg0->byte_3 = u8(vcvt_uz_f(S0 * S6_1));
    u32 fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S0_1, S5_1);  // (from the original)
    if (!(S0_1 < S5_1)) {
        S1 = S4_1;
        fpsr_2 = fpsr_2 & 0xfffffffu | vfp_cmpf(S0_1, S1);  // (from the original)
        if (S0_1 > S1) {
            S0_1 = S4_1;
        }
    } else {
        S0_1 = S5_1;
    }
    float S0_2 = S2;
    arg0->byte_2 = u8(vcvt_uz_f(S0_1 * S6_1));
    u32 fpsr_3 = fpsr_2 & 0xfffffffu | vfp_cmpf(S0_2, S5_1);  // (from the original)
    if (!(S0_2 < S5_1)) {
        S1 = S4_1;
        fpsr_3 = fpsr_3 & 0xfffffffu | vfp_cmpf(S0_2, S1);  // (from the original)
        if (S0_2 > S1) {
            S0_2 = S4_1;
        }
    } else {
        S0_2 = S5_1;
    }
    float S0_3 = S3;
    arg0->byte_1 = u8(vcvt_uz_f(S0_2 * S6_1));
    if (S0_3 < S5_1) {
        float S0_4 = std::bit_cast<float>(vcvt_uz_f(S5_1 * S6_1));
        u32 r1_4 = std::bit_cast<u32>(S0_4);
        arg0->byte_0 = u8(r1_4);
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->s[0] = S0_4;
        guest::cpu()->s[1] = S1;
        return;
    }
    if (S0_3 > S4_1) {
        S0_3 = S4_1;
    }
    float S0_5 = std::bit_cast<float>(vcvt_uz_f(S0_3 * S6_1));
    u32 r1_5 = std::bit_cast<u32>(S0_5);
    arg0->byte_0 = u8(r1_5);
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1;
}

}  // namespace d_005601b8
GUEST_EXPORT(0x005601b8, d_005601b8::f_005601b8);

// f_0056029c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056029c {

struct __attribute__((packed)) Object_0056029c_1 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0056029c_1, byte_0, 0x0);


void f_0056029c(u32 r0, gptr<Object_0056029c_1> arg1, u32 r2) {
    u32 r1 = arg1.addr();
    u32 r5 = 0;
    u32 r4 = 0u;
    if (arg1->byte_0 != 0) {
        r5 = 0u;
        goto L_5602c0;
    }
    guest::cpu()->r[1] = r1;
    return;
L_5602c0:;
    u32 r3_1 = *gptr<s8>(r1);
    if (r3_1 != 0x2cu && r3_1 != 0x20u && r3_1 != 9u && r3_1 != 0xau) {  // (from the original)
        u32 r12 = r1;
        r1 = *gptr<u8>(r1);
        if (r1 == 0) {
            guest::cpu()->r[1] = r1;
            return;
        }
        *gptr<u32>(r0 + (r4 << 2)) = r12;
        r4 += 1u;
        r1 = r12;
        do {
            u32 r3_2 = *gptr<s8>(r1);
            if (r3_2 == 0x2cu || r3_2 == 0x3du || r3_2 == 0) {  // (from the original)
                u32 r3 = r1 - 1u;
L_560318:;
                u32 r6_1 = *gptr<s8>(r3);
                if (r6_1 == 0x20u || r6_1 == 9u || r6_1 == 0xau) {  // (from the original)
                    u32 r6_2 = 0ull + ~0u + u32(r3 >= r12);
                    u32 res_1 = 0ull + ~r6_2 + u32(0u >= r3 - r12);
                    if (res_1 >> 0x1f != (r6_2 & res_1) >> 0x1f) {  // (from the original)
                        r3 -= 1u;
                        guest::preempt();
                        goto L_560318;
                    }
                }
                u32 r12_1 = *gptr<s8>(r1);
                *gptr<u8>(r3 + 1u) = u8(r5);
                if (r12_1 == 0) {
                    guest::cpu()->r[1] = r1;
                    return;
                }
                if (r12_1 == 0x3du) {  // (from the original)
                    r12 = r1 + 1u;
                    r1 = r12;
L_560370:;
                    u32 r3_3 = *gptr<s8>(r1);
                    if (r3_3 != 0x2cu && r3_3 != 0x3du && r3_3 != 0) {  // (from the original)
                        r1 += 1u;
                        guest::preempt();
                        goto L_560370;
                    }
                    r3 = r1 - 1u;
L_560390:;
                    u32 r6_3 = *gptr<s8>(r3);
                    if (r6_3 == 0x20u || r6_3 == 9u || r6_3 == 0xau) {  // (from the original)
                        u32 r6_4 = 0ull + ~0u + u32(r3 >= r12);
                        u32 res_2 = 0ull + ~r6_4 + u32(0u >= r3 - r12);
                        if (res_2 >> 0x1f != (r6_4 & res_2) >> 0x1f) {  // (from the original)
                            r3 -= 1u;
                            guest::preempt();
                            goto L_560390;
                        }
                    }
                    if (*gptr<u8>(r1) == 0) {
                        guest::cpu()->r[1] = r1;
                        return;
                    }
                }
                if (s32(r2) <= s32(r4)) {
                    guest::cpu()->r[1] = r1;
                    return;
                }
                r1 += 1u;
                if (*gptr<u8>(r1) != 0) {
                    guest::preempt();
                    goto L_5602c0;
                }
                guest::cpu()->r[1] = r1;
                return;
            }
            r1 += 1u;
            guest::preempt();
        } while (1);
    }
    r1 += 1u;
    guest::preempt();
    goto L_5602c0;
}

}  // namespace d_0056029c
GUEST_EXPORT_FRAMED(0x0056029c, d_0056029c::f_0056029c, 0x7f0);  // pushes {r4, r5, r6, r7, r8, r9, r10} first, as the original

// f_005603f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005603f0 {

inline guest::global<u32, 0x009753a8> global_009753a8;
inline constexpr guest::Function<0x0012bfec, u32(u32)> sead__CriticalSection__CriticalSection_0012bfec;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> claim_flag;

u32 f_005603f0(u32 r0_unused, u32 r1, u32 r2) {
    if ((*global_009753a8 & 1u) != 0) {
        return 0xae544cu;  // (from the original)
    }
    u32 r0_1 = claim_flag(0x9753a8u, r1, r2, guest::cpu()->r[3]);  // (from the original)
    if (r0_1 == 0) {
        return 0xae544cu;  // (from the original)
    }
    sead__CriticalSection__CriticalSection_0012bfec(0xae544cu);  // (from the original)
    guest::cpu()->r[1] = 0x137e8cu;  // (from the original)
    return 0xae544cu;  // (from the original)
}

}  // namespace d_005603f0
GUEST_EXPORT_FRAMED(0x005603f0, d_005603f0::f_005603f0, 0x4010);  // pushes {r4, lr} first, as the original

// f_00560650: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00560650 {

struct __attribute__((packed)) Object_00560650_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00560650_0, word_0, 0x0);
GUEST_OFFSET(Object_00560650_0, word_4, 0x4);
GUEST_OFFSET(Object_00560650_0, word_8, 0x8);

struct __attribute__((packed)) Local_00560650_r3_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00560650_r3_1, word_0, 0x0);
GUEST_OFFSET(Local_00560650_r3_1, word_4, 0x4);


void f_00560650(gptr<Object_00560650_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = arg0->word_4;
    u32 r2 = 0u;
    if (r1 != r0) {
        do {
            gptr<Local_00560650_r3_1> r3_1 = gptr<Local_00560650_r3_1>(r1);
            r1 = *gptr<u32>(r1 + 4u);
            r3_1->word_4 = r2;
            r3_1->word_0 = r2;
            guest::preempt();
        } while (r1 != r0);
    }
    arg0->word_4 = r0;
    arg0->word_8 = r2;
    arg0->word_0 = r0;
    guest::cpu()->r[1] = r0 + 4u;
}

}  // namespace d_00560650
GUEST_EXPORT(0x00560650, d_00560650::f_00560650);

// f_00560688: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00560688 {

struct __attribute__((packed)) Object_00560688_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00560688_0, word_4, 0x4);

struct __attribute__((packed)) Object_00560688_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_00560688_1, word_0, 0x0);
GUEST_OFFSET(Object_00560688_1, word_4, 0x4);


void f_00560688(gptr<Object_00560688_0> arg0, gptr<Object_00560688_1> arg1) {
    u32 r2_1 = arg0->word_4;
    arg0->word_4 = arg1.addr();
    arg1->word_0 = arg0.addr();
    arg1->word_4 = r2_1;
    if (r2_1 != 0) {
        *gptr<u32>(r2_1) = arg1.addr();
    }
}

}  // namespace d_00560688
GUEST_EXPORT(0x00560688, d_00560688::f_00560688);

// f_00560868: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00560868 {


void f_00560868(gptr<sead__TaskBase> arg0) {
    u32 r0_1 = *gptr<u32>(*gptr<u32>(arg0->word_5c + 0x20u) + 0x20u);  // (from the original)
    u32 r3_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x10u);  // (from the original)
    // virtual function 4 of r0_1
    guest::call_address<u32>(r3_1, r0_1, guest::cpu()->r[1], guest::cpu()->r[2], r3_1);
}

}  // namespace d_00560868
GUEST_EXPORT(0x00560868, d_00560868::f_00560868);

// f_00560930: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00560930 {

struct __attribute__((packed)) Object_00560930_0 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00560930_0, byte_0, 0x0);
GUEST_OFFSET(Object_00560930_0, word_4, 0x4);

struct __attribute__((packed)) Local_00560930_r0_3 {
    u8 unknown_0[0x78];  // (not used here)
    u8 byte_78;
    u8 unknown_79[0x3];  // (not used here)
    u32 word_7c;
};
GUEST_OFFSET(Local_00560930_r0_3, byte_78, 0x78);
GUEST_OFFSET(Local_00560930_r0_3, word_7c, 0x7c);

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 f_00560930(gptr<Object_00560930_0> arg0) {
    arg0->byte_0 = 0;
    arg0->word_4 = 0;
    u32 r0_2 = for_each_element((arg0.addr() + 4u) + 4u, 0x11e460u, 0x14u, 4u);  // (from the original)
    *gptr<u32>(r0_2 + 0x50u) = 0;  // (from the original)
    *gptr<u32>(r0_2 + 0x54u) = 0;  // (from the original)
    *gptr<u32>(r0_2 + 0x58u) = 0;  // (from the original)
    *gptr<u32>(r0_2 + 0x5cu) = 0;  // (from the original)
    *gptr<u32>(r0_2 + 0x60u) = 0;  // (from the original)
    *gptr<u32>(r0_2 + 0x64u) = 0;  // (from the original)
    u32 ea_8 = r0_2 + 0x68u;  // (from the original)
    *gptr<u32>(ea_8) = 0;
    u32 ea_9 = ea_8 + 4u;
    *gptr<u32>(ea_9) = ~0u;
    gptr<Local_00560930_r0_3> r0_3 = gptr<Local_00560930_r0_3>(ea_9 - 0x74u);  // (from the original)
    r0_3->byte_78 = 1;
    r0_3->word_7c = 0;
    guest::cpu()->r[1] = 1u;
    return r0_3.addr();
}

}  // namespace d_00560930
GUEST_EXPORT_FRAMED(0x00560930, d_00560930::f_00560930, 0x4010);  // pushes {r4, lr} first, as the original

// f_00560a20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00560a20 {

struct __attribute__((packed)) Local_00560a20_r5_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Local_00560a20_r5_1, word_8, 0x8);

inline constexpr u32 vtable_sead__TaskBase = 0x00905c88u;
inline constexpr guest::Function<0x0013bb00, u32(u32, u32)> unlink_node_0013bb00;
inline constexpr guest::Function<0x0013efb4, u32(u32, u32)> destroy_disposer;
inline constexpr guest::Function<0x0055f1ac, u32(u32, u32, u32, u32)> call_0055f1ac;
inline constexpr guest::Function<0x00560bec, u32(u32, u32, u32, u32)> call_00560bec;

u32 sead__TaskBase__virtual_0(gptr<sead__TaskBase> arg0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4 = r0;
    u32 r1 = vtable_sead__TaskBase;
    u32 zf_1 = arg0->word_5c == 0;
    arg0->word_0 = r1;
    if (!zf_1) {
        do {
            u32 r0_1 = *gptr<u32>(r4 + 0x14u);  // (from the original)
            if (r0_1 == 0) {
                break;
            }
            call_0055f1ac(*gptr<u32>(r4 + 0x5cu), *gptr<u32>(r0_1 + 0x10u), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1 = guest::cpu()->r[1];
            guest::preempt();
        } while (1);
    }
    *gptr<u8>(r4 + 0x60u) = 7;  // (from the original)
    call_00560bec(r4 + 0x10u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    gptr<Local_00560a20_r5_1> r5_1 = gptr<Local_00560a20_r5_1>(*gptr<u32>(r4 + 0x40u));  // (from the original)
    u32 r0_4 = r4 + 0x34u;  // (from the original)
    if (r5_1.addr() != 0) {
        *gptr<u32>(r0_4 + 0xcu) = 0;  // (from the original)
        unlink_node_0013bb00(r0_4, 0u);
        r5_1->word_8 = r5_1->word_8 - 1u;
    }
    frame.release();
    return destroy_disposer(r4, guest::cpu()->r[1]);
}

}  // namespace d_00560a20
GUEST_EXPORT(0x00560a20, d_00560a20::sead__TaskBase__virtual_0);

// f_00560aa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00560aa8 {

struct __attribute__((packed)) Object_00560aa8_0 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_00560aa8_0, word_0, 0x0);
GUEST_OFFSET(Object_00560aa8_0, word_8, 0x8);
GUEST_OFFSET(Object_00560aa8_0, word_c, 0xc);


void f_00560aa8(gptr<Object_00560aa8_0> arg0) {
    u32 r2_1 = arg0->word_8;
    u32 r3_1 = arg0->word_c;
    if (r3_1 != 0) {
        *gptr<u32>(r3_1 + 8u) = r2_1;
        u32 r2_2 = arg0->word_8;
        if (r2_2 == 0) {
            arg0->word_c = 0;
            arg0->word_0 = 0;
            guest::cpu()->r[1] = 0u;
            return;
        }
        *gptr<u32>(r2_2 + 0xcu) = arg0->word_c;  // (from the original)
        arg0->word_8 = 0;
        arg0->word_c = 0;
        arg0->word_0 = 0;
        guest::cpu()->r[1] = 0u;
        return;
    }
    u32 r3_2 = arg0->word_0;
    if (r3_2 != 0) {
        *gptr<u32>(r3_2 + 4u) = r2_1;
        arg0->word_0 = 0;
    }
    u32 r2_3 = arg0->word_8;
    if (r2_3 == 0) {
        guest::cpu()->r[1] = 0u;
        return;
    }
    *gptr<u32>(r2_3 + 0xcu) = arg0->word_c;  // (from the original)
    arg0->word_8 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_00560aa8
GUEST_EXPORT(0x00560aa8, d_00560aa8::f_00560aa8);

// f_00560b6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00560b6c {

struct __attribute__((packed)) Object_00560b6c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00560b6c_0, word_4, 0x4);

struct __attribute__((packed)) Object_00560b6c_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_00560b6c_1, word_0, 0x0);
GUEST_OFFSET(Object_00560b6c_1, word_8, 0x8);

inline constexpr guest::Function<0x00560aa8, u32(u32, u32)> call_00560aa8;

void f_00560b6c(gptr<Object_00560b6c_0> arg0, gptr<Object_00560b6c_1> arg1) {
    call_00560aa8(arg1.addr(), arg1.addr());
    u32 r0_1 = arg0->word_4;
    if (r0_1 == 0) {
        arg0->word_4 = arg1.addr();
        arg1->word_0 = arg0.addr();
        return;
    }
    arg1->word_8 = r0_1;
    *gptr<u32>(arg0->word_4 + 0xcu) = arg1.addr();  // (from the original)
    arg0->word_4 = arg1.addr();
    arg1->word_0 = arg0.addr();
}

}  // namespace d_00560b6c
GUEST_EXPORT_FRAMED(0x00560b6c, d_00560b6c::f_00560b6c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00560bec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00560bec {

struct __attribute__((packed)) Object_00560bec_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00560bec_0, word_4, 0x4);

struct __attribute__((packed)) Local_00560bec_r4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00560bec_r4_1, word_0, 0x0);
GUEST_OFFSET(Local_00560bec_r4_1, word_4, 0x4);
GUEST_OFFSET(Local_00560bec_r4_1, word_8, 0x8);
GUEST_OFFSET(Local_00560bec_r4_1, word_c, 0xc);

inline constexpr guest::Function<0x00560aa8, u32(u32, u32, u32, u32)> call_00560aa8;
inline constexpr guest::Function<0x00560bac, u32(u32)> call_00560bac;

void f_00560bec(gptr<Object_00560bec_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r6 = r0;
    call_00560aa8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r5 = arg0->word_4;
    u32 r7 = 0u;
    if (r5 != 0) {
        do {
            gptr<Local_00560bec_r4_1> r4_1 = gptr<Local_00560bec_r4_1>(r5);
            r5 = *gptr<u32>(r5 + 8u);
            call_00560bac(r4_1.addr());
            r4_1->word_c = r7;
            r4_1->word_8 = r7;
            r4_1->word_4 = r7;
            r4_1->word_0 = r7;
            guest::preempt();
        } while (r5 != 0);
    }
    *gptr<u32>(r6 + 0xcu) = r7;  // (from the original)
    *gptr<u32>(r6 + 8u) = r7;
    *gptr<u32>(r6 + 4u) = r7;
    *gptr<u32>(r6) = r7;
}

}  // namespace d_00560bec
GUEST_EXPORT_FRAMED(0x00560bec, d_00560bec::f_00560bec, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00560e80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00560e80 {

inline constexpr u32 vtable_sead__DualScreenTask = 0x009046a0u;
inline constexpr u32 vtable_sead__MethodTreeNode = 0x009047b0u;
inline constexpr u32 vtable_sead__UlcdTask = 0x00905ce8u;
inline constexpr guest::Function<0x0013efb4, u32(u32)> destroy_disposer;
inline constexpr guest::Function<0x0054488c, u32(u32, u32, u32, u32)> call_0054488c;
inline constexpr guest::Function<0x00560a20, u32(u32, u32, u32, u32)> sead__TaskBase__virtual_0;

u32 sead__UlcdTask__virtual_0(gptr<sead__DualScreenTask> arg0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r5_1 = arg0.addr() + 0x15cu;  // (from the original)
    arg0->word_0 = vtable_sead__UlcdTask;
    arg0->word_15c = vtable_sead__MethodTreeNode;
    call_0054488c(r5_1, 0x905ce8u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_disposer(r5_1);
    arg0->word_0 = vtable_sead__DualScreenTask;
    arg0->word_10c = vtable_sead__MethodTreeNode;
    call_0054488c(r5_1 - 0x50u, 0x9046a0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_disposer(r5_1 - 0x50u);  // (from the original)
    arg0->word_bc = vtable_sead__MethodTreeNode;
    call_0054488c(r5_1 - 0xa0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_disposer(r5_1 - 0xa0u);  // (from the original)
    arg0->word_6c = vtable_sead__MethodTreeNode;
    call_0054488c(r5_1 - 0xf0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_disposer(r5_1 - 0xf0u);  // (from the original)
    frame.release();
    return sead__TaskBase__virtual_0(r5_1 - 0x15cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00560e80
GUEST_EXPORT(0x00560e80, d_00560e80::sead__UlcdTask__virtual_0);

// f_00561310: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00561310 {

inline constexpr u32 vtable_sead__Viewport = 0x00905dd4u;
inline guest::global<u8, 0x00975328> global_00975328;
inline constexpr guest::Function<0x00561264, u32(u32, u32, u32, u32)> call_00561264;

void sead__Viewport__Viewport_00561310(gptr<sead__Viewport> arg0) {
    float S0_1 = 3.4028235e38f;
    arg0->float_4 = S0_1;
    arg0->float_8 = S0_1;
    float S0_2 = -3.4028235e38f;
    arg0->float_c = S0_2;
    arg0->float_10 = S0_2;
    arg0->word_0 = vtable_sead__Viewport;
    arg0->byte_14 = *global_00975328;
    guest::cpu()->s[0] = S0_2;
    call_00561264(arg0.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00561310
GUEST_EXPORT_FRAMED(0x00561310, d_00561310::sead__Viewport__Viewport_00561310, 0x4010);  // pushes {r4, lr} first, as the original

// f_005615e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005615e4 {

inline constexpr guest::Function<0x00561900, u32(u32, u32, u32, u32)> call_00561900;

struct __attribute__((packed)) Frame_005615e4 {
    u32 word_0;
};
GUEST_OFFSET(Frame_005615e4, word_0, 0x0);
GUEST_SIZE(Frame_005615e4, 0x4);

u32 f_005615e4(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_005615e4> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = *frame.at<u32>(8);
    call_00561900(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], r3);
    return guest::cpu()->r[0];
}

}  // namespace d_005615e4
GUEST_EXPORT_FRAMED(0x005615e4, d_005615e4::f_005615e4, 0x4000);  // pushes {lr} first, as the original

// f_00561ba4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00561ba4 {

struct __attribute__((packed)) Object_00561ba4_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_00561ba4_0, word_0, 0x0);
GUEST_OFFSET(Object_00561ba4_0, word_4, 0x4);
GUEST_OFFSET(Object_00561ba4_0, word_8, 0x8);
GUEST_OFFSET(Object_00561ba4_0, word_c, 0xc);
GUEST_OFFSET(Object_00561ba4_0, word_10, 0x10);


void f_00561ba4(gptr<Object_00561ba4_0> arg0) {
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    arg0->word_c = 0;
    arg0->word_10 = 0x1000;  // (from the original)
}

}  // namespace d_00561ba4
GUEST_EXPORT(0x00561ba4, d_00561ba4::f_00561ba4);

// f_00564804: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00564804 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32)> read_global_byte_2;
inline constexpr guest::Function<0x0056549c, u32(u32)> call_0056549c;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> get_object_009b4a24;

u32 f_00564804(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = r0;
    u32 r5 = r1;
    u32 r6 = r2;
    u32 r0_1 = get_object_009b4a24(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        u32 r0_2 = read_global_byte_2(r0_1, r1);
        u32 r0_3 = call_0056549c(r0_2);
        r1 = guest::cpu()->r[1];
        u32 r7 = r0_3;
        if (*gptr<u8>(r0_3 + (r6 << 4) + r5) == r4) {
            r2 = 0u;
            r1 = r2;
            do {
                r0 = 0u;
                r3 = r7 + (r1 << 4);
                do {
                    if (*gptr<u8>(r3 + r0) == r4) {
                        if (r5 != r0 || r6 != r1) {
                            r2 += 1u;
                        } else {
                            guest::cpu()->r[1] = r1;
                            return r2;
                        }
                    }
                    r0 += 1u;
                    guest::preempt();
                } while (s32(r0) < 0x10);  // (from the original)
                r1 += 1u;
                guest::preempt();
            } while (s32(r1) < 0x10);  // (from the original)
        }
    }
    guest::cpu()->r[1] = r1;
    return ~0u;
}

}  // namespace d_00564804
GUEST_EXPORT_FRAMED(0x00564804, d_00564804::f_00564804, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00565668: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00565668 {

struct __attribute__((packed)) Object_00565668_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00565668_0, word_0, 0x0);
GUEST_OFFSET(Object_00565668_0, word_4, 0x4);
GUEST_OFFSET(Object_00565668_0, word_8, 0x8);

struct __attribute__((packed)) Object_00565668_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00565668_1, word_0, 0x0);
GUEST_OFFSET(Object_00565668_1, word_4, 0x4);
GUEST_OFFSET(Object_00565668_1, word_8, 0x8);


void f_00565668(gptr<Object_00565668_0> arg0, gptr<Object_00565668_1> arg1, float S0, float S1, float S2) {
    u32 fpsr = guest::cpu()->fpscr;
    float S1_2 = 0;
    float S2_3 = 0;
    float S0_2 = 0;
    float S1_3 = 0;
    float S0_3 = 0;
    float S6_1 = std::bit_cast<float>(arg0->word_0);
    float S5_1 = std::bit_cast<float>(arg1->word_0);
    u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S6_1, S5_1);  // (from the original)
    if (S6_1 == S5_1) {
        fpsr_1 = fpsr_1 & 0xfffffffu | vfp_cmpf(std::bit_cast<float>(arg0->word_4), std::bit_cast<float>(arg1->word_4));  // (from the original)
        if (std::bit_cast<float>(arg0->word_4) == std::bit_cast<float>(arg1->word_4)) {
            fpsr_1 = fpsr_1 & 0xfffffffu | vfp_cmpf(std::bit_cast<float>(arg0->word_8), std::bit_cast<float>(arg1->word_8));  // (from the original)
            if (std::bit_cast<float>(arg0->word_8) == std::bit_cast<float>(arg1->word_8)) {
                S1_2 = std::bit_cast<float>(arg0->word_0) - std::bit_cast<float>(arg1->word_0);
                S2_3 = std::bit_cast<float>(arg0->word_4) - std::bit_cast<float>(arg1->word_4);
                S0_2 = std::bit_cast<float>(arg0->word_8) - std::bit_cast<float>(arg1->word_8);
                S1_3 = S1_2 * S1_2 + S2_3 * S2_3 + S0_2 * S0_2;
                S0_3 = sqrtf(S1_3);
                guest::cpu()->s[0] = S0_3;
                guest::cpu()->s[1] = S1_3;
                return;
            }
        }
    }
    float S5_2 = S6_1 - S5_1;
    float S3_1 = std::bit_cast<float>(arg0->word_4) - std::bit_cast<float>(arg1->word_4);
    float S4_1 = std::bit_cast<float>(arg0->word_8) - std::bit_cast<float>(arg1->word_8);
    float S7_1 = sqrtf(S5_2 * S5_2 + S3_1 * S3_1 + S4_1 * S4_1);
    if (!(S7_1 < S2)) {
        float S6_2 = S7_1 * S0;
        float S5_3 = S5_2 * S0;
        float S3_2 = S3_1 * S0;
        float S0_1 = S4_1 * S0;
        if (s32(std::bit_cast<u32>(fabsf(S6_2))) > 0x34000000) {  // (from the original)
            u32 fpsr_3 = (fpsr_1 & 0xfffffffu | vfp_cmpf(S7_1, S2)) & 0xfffffffu | vfp_cmpf(S6_2, S1);  // (from the original)
            if (S6_2 > S1) {
                float S2_1 = S1 / S6_2;
                S5_3 = S5_3 * S2_1;
                S3_2 = S3_2 * S2_1;
                S0_1 = S0_1 * S2_1;
            } else if (!((fpsr_3 & 0xfffffffu | vfp_cmpf(S6_2, S2)) >> 0x1d & 1)) {  // (from the original)
                float S1_1 = S2 / S6_2;
                S5_3 = S5_3 * S1_1;
                S3_2 = S3_2 * S1_1;
                S0_1 = S0_1 * S1_1;
            }
            float S2_2 = std::bit_cast<float>(arg0->word_0) - S5_3;
            float S3_3 = std::bit_cast<float>(arg0->word_4) - S3_2;
            arg0->word_8 = std::bit_cast<u32>(std::bit_cast<float>(arg0->word_8) - S0_1);
            arg0->word_0 = std::bit_cast<u32>(S2_2);
            arg0->word_4 = std::bit_cast<u32>(S3_3);
        } else {
            arg0->word_0 = arg1->word_0;
            arg0->word_4 = arg1->word_4;
            arg0->word_8 = arg1->word_8;
        }
    } else {
        arg0->word_0 = arg1->word_0;
        arg0->word_4 = arg1->word_4;
        arg0->word_8 = arg1->word_8;
    }
    S1_2 = std::bit_cast<float>(arg0->word_0) - std::bit_cast<float>(arg1->word_0);
    S2_3 = std::bit_cast<float>(arg0->word_4) - std::bit_cast<float>(arg1->word_4);
    S0_2 = std::bit_cast<float>(arg0->word_8) - std::bit_cast<float>(arg1->word_8);
    S1_3 = S1_2 * S1_2 + S2_3 * S2_3 + S0_2 * S0_2;
    S0_3 = sqrtf(S1_3);
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
}

}  // namespace d_00565668
GUEST_EXPORT(0x00565668, d_00565668::f_00565668);

// f_005657ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005657ac {

struct __attribute__((packed)) Object_005657ac_0 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_005657ac_0, word_0, 0x0);
GUEST_OFFSET(Object_005657ac_0, word_8, 0x8);

struct __attribute__((packed)) Object_005657ac_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_005657ac_1, word_0, 0x0);
GUEST_OFFSET(Object_005657ac_1, word_8, 0x8);


u32 f_005657ac(gptr<Object_005657ac_0> arg0, gptr<Object_005657ac_1> arg1, float S0) {
    float S1_1 = std::bit_cast<float>(arg0->word_0) - std::bit_cast<float>(arg1->word_0);
    float S2_1 = std::bit_cast<float>(arg0->word_8) - std::bit_cast<float>(arg1->word_8);
    float S3_1 = sqrtf(S1_1 * S1_1 + S2_1 * S2_1);
    if (S0 != 0.0f) {
        if (s32(std::bit_cast<u32>(fabsf(S3_1))) > 0x34000000) {  // (from the original)
            if (!(S3_1 <= S0)) {
                float S4_1 = S0 / S3_1;
                float S0_1 = std::bit_cast<float>(arg0->word_8) - S2_1 * S4_1;
                arg0->word_0 = std::bit_cast<u32>(std::bit_cast<float>(arg0->word_0) - S1_1 * S4_1);
                arg0->word_8 = std::bit_cast<u32>(S0_1);
                guest::cpu()->r[1] = arg1.addr();
                guest::cpu()->s[0] = S0_1;
                guest::cpu()->s[1] = S1_1;
                return 0u;
            }
        }
        arg0->word_0 = arg1->word_0;
        u32 r1_1 = arg1->word_8;
        arg0->word_8 = r1_1;
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1_1;
        return 1u;
    }
    float S0_2 = fabsf(S3_1);
    if (s32(std::bit_cast<u32>(S0_2)) <= 0x34000000) {  // (from the original)
        guest::cpu()->r[1] = arg1.addr();
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_1;
        return 1u;
    }
    guest::cpu()->r[1] = arg1.addr();
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    return 0u;
}

}  // namespace d_005657ac
GUEST_EXPORT(0x005657ac, d_005657ac::f_005657ac);

// f_00565958: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00565958 {

struct __attribute__((packed)) Object_00565958_0 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_00565958_0, word_0, 0x0);
GUEST_OFFSET(Object_00565958_0, word_8, 0x8);

struct __attribute__((packed)) Object_00565958_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_00565958_1, word_0, 0x0);
GUEST_OFFSET(Object_00565958_1, word_8, 0x8);


void f_00565958(gptr<Object_00565958_0> arg0, gptr<Object_00565958_1> arg1, float S0, float S1, float S2) {
    u32 fpsr = guest::cpu()->fpscr;
    float S3_1 = std::bit_cast<float>(arg0->word_0);
    float S4_1 = std::bit_cast<float>(arg1->word_0);
    u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S3_1, S4_1);  // (from the original)
    if (S3_1 == S4_1) {
        fpsr_1 = fpsr_1 & 0xfffffffu | vfp_cmpf(std::bit_cast<float>(arg0->word_8), std::bit_cast<float>(arg1->word_8));  // (from the original)
        if (std::bit_cast<float>(arg0->word_8) == std::bit_cast<float>(arg1->word_8)) {
            float S1_1 = std::bit_cast<float>(arg0->word_0) - std::bit_cast<float>(arg1->word_0);
            float S0_1 = std::bit_cast<float>(arg0->word_8) - std::bit_cast<float>(arg1->word_8);
            float S0_2 = sqrtf(S1_1 * S1_1 + S0_1 * S0_1);
            guest::cpu()->s[0] = S0_2;
            return;
        }
    }
    float S3_2 = S3_1 - S4_1;
    float S5_1 = std::bit_cast<float>(arg0->word_8) - std::bit_cast<float>(arg1->word_8);
    float S6_1 = sqrtf(S3_2 * S3_2 + S5_1 * S5_1);
    if (!(S6_1 < S2)) {
        float S4_2 = S6_1 * S0;
        float S3_3 = S3_2 * S0;
        float S0_3 = S5_1 * S0;
        if (s32(std::bit_cast<u32>(fabsf(S4_2))) > 0x34000000) {  // (from the original)
            u32 fpsr_3 = (fpsr_1 & 0xfffffffu | vfp_cmpf(S6_1, S2)) & 0xfffffffu | vfp_cmpf(S4_2, S1);  // (from the original)
            if (S4_2 > S1) {
                float S2_1 = S1 / S4_2;
                S3_3 = S3_3 * S2_1;
                S0_3 = S0_3 * S2_1;
            } else if (!((fpsr_3 & 0xfffffffu | vfp_cmpf(S4_2, S2)) >> 0x1d & 1)) {  // (from the original)
                float S1_2 = S2 / S4_2;
                S3_3 = S3_3 * S1_2;
                S0_3 = S0_3 * S1_2;
            }
            float S0_4 = std::bit_cast<float>(arg0->word_8) - S0_3;
            arg0->word_0 = std::bit_cast<u32>(std::bit_cast<float>(arg0->word_0) - S3_3);
            arg0->word_8 = std::bit_cast<u32>(S0_4);
            float S1_3 = std::bit_cast<float>(arg0->word_0) - std::bit_cast<float>(arg1->word_0);
            float S0_5 = std::bit_cast<float>(arg0->word_8) - std::bit_cast<float>(arg1->word_8);
            float S0_6 = sqrtf(S1_3 * S1_3 + S0_5 * S0_5);
            guest::cpu()->s[0] = S0_6;
            return;
        }
    }
    arg0->word_0 = arg1->word_0;
    arg0->word_8 = arg1->word_8;
    float S1_4 = std::bit_cast<float>(arg0->word_0) - std::bit_cast<float>(arg1->word_0);
    float S0_7 = std::bit_cast<float>(arg0->word_8) - std::bit_cast<float>(arg1->word_8);
    float S0_8 = sqrtf(S1_4 * S1_4 + S0_7 * S0_7);
    guest::cpu()->s[0] = S0_8;
}

}  // namespace d_00565958
GUEST_EXPORT(0x00565958, d_00565958::f_00565958);

// f_00565a68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00565a68 {

struct __attribute__((packed)) Object_00565a68_0 {
    float float_0;
    u8 unknown_4[0x4];  // (not used here)
    float float_8;
};
GUEST_OFFSET(Object_00565a68_0, float_0, 0x0);
GUEST_OFFSET(Object_00565a68_0, float_8, 0x8);

struct __attribute__((packed)) Object_00565a68_1 {
    float float_0;
    u8 unknown_4[0x4];  // (not used here)
    float float_8;
};
GUEST_OFFSET(Object_00565a68_1, float_0, 0x0);
GUEST_OFFSET(Object_00565a68_1, float_8, 0x8);


void f_00565a68(gptr<Object_00565a68_0> arg0, gptr<Object_00565a68_1> arg1, float S0, float S1) {
    u32 fpsr = guest::cpu()->fpscr;
    float S3_1 = arg0->float_0;
    float S2_1 = arg1->float_0;
    u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S3_1, S2_1);  // (from the original)
    if (S3_1 == S2_1) {
        fpsr_1 = fpsr_1 & 0xfffffffu | vfp_cmpf(arg0->float_8, arg1->float_8);  // (from the original)
        if (arg0->float_8 == arg1->float_8) {
            guest::cpu()->r[1] = arg1.addr();
            return;
        }
    }
    float S2_2 = (S3_1 - S2_1) * S0;
    float S0_1 = (arg0->float_8 - arg1->float_8) * S0;
    float S3_2 = sqrtf(S2_2 * S2_2 + S0_1 * S0_1);
    u32 r1_1 = std::bit_cast<u32>(fabsf(S3_2));
    if (s32(r1_1) <= 0x34000000) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return;
    }
    if (!(S3_2 > S1)) {
        float S0_2 = arg0->float_8 - S0_1;
        arg0->float_0 = arg0->float_0 - S2_2;
        arg0->float_8 = S0_2;
        guest::cpu()->r[1] = r1_1;
        return;
    }
    float S4_1 = S1 / S3_2;
    float S2_3 = S2_2 * S4_1;
    float S0_3 = S0_1 * S4_1;
    float S0_4 = arg0->float_8 - S0_3;
    arg0->float_0 = arg0->float_0 - S2_3;
    arg0->float_8 = S0_4;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_00565a68
GUEST_EXPORT(0x00565a68, d_00565a68::f_00565a68);

// f_00565c00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00565c00 {

inline constexpr guest::Function<0x0013bb30, u32(u32, u32)> Random__next_float;

u32 random_float_565c00() {
    return Random__next_float(0x9753e8u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_00565c00
GUEST_EXPORT(0x00565c00, d_00565c00::random_float_565c00);

// f_0056677c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056677c {

struct __attribute__((packed)) Object_0056677c_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0x10];  // (not used here)
    u8 byte_2c;
};
GUEST_OFFSET(Object_0056677c_0, word_10, 0x10);
GUEST_OFFSET(Object_0056677c_0, word_14, 0x14);
GUEST_OFFSET(Object_0056677c_0, word_18, 0x18);
GUEST_OFFSET(Object_0056677c_0, byte_2c, 0x2c);

struct __attribute__((packed)) Local_0056677c_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0056677c_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_0056677c_ea_3, word_4, 0x4);

inline guest::global<u32, 0x00ae5484> global_00ae5484;
inline guest::global<u32, 0x00ae548c> global_00ae548c;
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> unlock_member_lock;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x007b1034, u32(u32, u32, u32)> call_007b1034;

u32 f_0056677c(gptr<Object_0056677c_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r5_1 = arg0.addr() + 0x30u;  // (from the original)
    lock_member_lock(r5_1, r1, r2, guest::cpu()->r[3]);
    if (arg0->byte_2c != 0) {
        r1 = *global_00ae5484;
        if (r1 != 0) {
            u32 r0_1 = *global_00ae548c;
            call_007b1034(r0_1, *gptr<u32>((r1 - 1u << 3) + 0xae5484u + 0xcu) - r0_1, 0xae5484u);  // (from the original)
            r1 = 0x100u;  // (from the original)
            arg0->word_18 = arg0->word_18 + 1u;
            *global_00ae5484 = 0;
            clear_aligned(0xae548cu, r1);  // (from the original)
        }
    } else {
        u32 r0_2 = arg0->word_10;
        if (r0_2 != 0) {
            r1 = arg0->word_14 - r0_2;
            call_007b1034(r0_2, r1, guest::cpu()->r[2]);
            u32 r0_3 = *gptr<u32>(arg0.addr() + 0x18u);  // (from the original)
            *gptr<u32>(arg0.addr() + 0x10u) = 0;  // (from the original)
            gptr<Local_0056677c_ea_3> ea_3 = gptr<Local_0056677c_ea_3>(arg0.addr() + 0x14u);  // (from the original)
            ea_3->word_0 = 0;
            ea_3->word_4 = r0_3 + 1u;
        }
    }
    frame.release();
    return unlock_member_lock(r5_1, r1);
}

}  // namespace d_0056677c
GUEST_EXPORT(0x0056677c, d_0056677c::f_0056677c);

// f_00567224: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567224 {

inline guest::global<u8, 0x00975c30> global_00975c30;
inline guest::global<u8, 0x00975c31> global_00975c31;
inline guest::global<u32, 0x00975c3c> global_00975c3c;
inline guest::global<u32, 0x00975c44> global_00975c44;
inline guest::global<u32, 0x00ae55cc> global_00ae55cc;

void f_00567224() {
    if (s8(*global_00975c31) > 0) {
        guest::cpu()->r[1] = 0x975c30u;  // (from the original)
        return;
    }
    *global_00975c44 = 0;
    u32 r0_1 = *global_00975c3c;
    if (r0_1 == 0 || *global_00ae55cc == 0 || *global_00975c30 != 0) {
        guest::cpu()->r[1] = 0x975c30u;  // (from the original)
        return;
    }
    *global_00975c30 = 1;
    u32 r3_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0xcu);  // (from the original)
    // virtual function 3 of r0_1
    guest::call_address<u32>(r3_1, r0_1, 0x6c6f6164u, 0u, r3_1);  // (from the original)
}

}  // namespace d_00567224
GUEST_EXPORT(0x00567224, d_00567224::f_00567224);

// f_00567cc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567cc8 {

inline guest::global<u32, 0x00975c14> global_00975c14;
inline guest::global<u32, 0x00975c18> global_00975c18;
inline constexpr guest::Function<0x00567ce4, u32(u32, u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_00567ce4;

struct __attribute__((packed)) Frame_00567cc8 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00567cc8, word_0, 0x0);
GUEST_SIZE(Frame_00567cc8, 0x4);

u32 f_00567cc8(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_00567cc8> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r3_1 = *global_00975c14;
    frame->word_0 = *global_00975c18;
    sead__SafeStringBase_char___SafeStringBase_00567ce4(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], r3_1);
    return guest::cpu()->r[0];
}

}  // namespace d_00567cc8
GUEST_EXPORT_FRAMED(0x00567cc8, d_00567cc8::f_00567cc8, 0x4000);  // pushes {lr} first, as the original

// f_00567ce4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567ce4 {

struct __attribute__((packed)) Object_00567ce4_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x14c];  // (not used here)
    u32 word_158;
    u8 unknown_15c[0xd0];  // (not used here)
    u32 word_22c;
};
GUEST_OFFSET(Object_00567ce4_0, word_8, 0x8);
GUEST_OFFSET(Object_00567ce4_0, word_158, 0x158);
GUEST_OFFSET(Object_00567ce4_0, word_22c, 0x22c);

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr guest::Function<0x004b6598, u32(u32, u32, u32)> call_004b6598;
inline constexpr guest::Function<0x0056a99c, u32(u32, u32, u32, u32)> call_0056a99c;

struct __attribute__((packed)) Frame_00567ce4 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00567ce4, word_0, 0x0);
GUEST_OFFSET(Frame_00567ce4, word_8, 0x8);
GUEST_OFFSET(Frame_00567ce4, word_c, 0xc);
GUEST_SIZE(Frame_00567ce4, 0x14);

u32 sead__SafeStringBase_char___SafeStringBase_00567ce4(gptr<Object_00567ce4_0> arg0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_00567ce4> frame;  // the original's stack frame
    u32 r12_1 = *frame.at<u32>(0x20);  // (from the original)
    frame->word_c = r1;
    frame->word_8 = vtable_sead__SafeStringBase_char_;
    frame->word_0 = r12_1;
    u32 r0_2 = call_0056a99c(arg0.addr() + 0x15cu, frame.at(8).addr(), r2, guest::cpu()->r[3]);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_2 != 0 && arg0->word_158 == 0) {
        r1_2 = arg0->word_22c;
        arg0->word_158 = r1_2;
        if (arg0->word_8 == 0) {
            arg0->word_8 = r1_2;
            call_004b6598(arg0.addr() + 0xcu, r1_2, 0x567d5cu);  // (from the original)
            r1_2 = guest::cpu()->r[1];
        }
    }
    guest::cpu()->r[1] = r1_2;
    return r0_2;
}

}  // namespace d_00567ce4
GUEST_EXPORT_FRAMED(0x00567ce4, d_00567ce4::sead__SafeStringBase_char___SafeStringBase_00567ce4, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00567d60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567d60 {

struct __attribute__((packed)) Object_00567d60_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_00567d60_0, word_8, 0x8);

struct __attribute__((packed)) Object_00567d60_1 {
    u8 unknown_0[0x22c];  // (not used here)
    u32 word_22c;
};
GUEST_OFFSET(Object_00567d60_1, word_22c, 0x22c);

inline constexpr guest::Function<0x004b6598, u32(u32, u32, u32, u32)> call_004b6598;

void f_00567d60(gptr<Object_00567d60_0> arg0, gptr<Object_00567d60_1> arg1) {
    u32 r1_1 = arg1->word_22c;
    u32 r3_1 = arg0->word_8;
    if (r3_1 != 0) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    arg0->word_8 = r1_1;
    call_004b6598((arg0.addr() + 8u) + 4u, r1_1, 0x567d98u, r3_1);  // (from the original)
}

}  // namespace d_00567d60
GUEST_EXPORT_FRAMED(0x00567d60, d_00567d60::f_00567d60, 0x4010);  // pushes {r4, lr} first, as the original

// f_00567d9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567d9c {

inline guest::global<u32, 0x00975c14> global_00975c14;
inline constexpr guest::Function<0x00567dac, u32(u32, u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_00567dac;

void f_00567d9c() {
    sead__SafeStringBase_char___SafeStringBase_00567dac(guest::cpu()->r[0], guest::cpu()->r[1], *global_00975c14, guest::cpu()->r[3]);
}

}  // namespace d_00567d9c
GUEST_EXPORT(0x00567d9c, d_00567d9c::f_00567d9c);

// f_00567dac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567dac {

struct __attribute__((packed)) Object_00567dac_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x14c];  // (not used here)
    u32 word_158;
    u8 unknown_15c[0xd0];  // (not used here)
    u32 word_22c;
};
GUEST_OFFSET(Object_00567dac_0, word_8, 0x8);
GUEST_OFFSET(Object_00567dac_0, word_158, 0x158);
GUEST_OFFSET(Object_00567dac_0, word_22c, 0x22c);

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr guest::Function<0x004b6598, u32(u32, u32, u32)> call_004b6598;
inline constexpr guest::Function<0x00569dc4, u32(u32, u32, u32, u32)> layout_allocator_8;
inline constexpr guest::Function<0x0056aa98, u32(u32, u32, u32, u32)> call_0056aa98;

struct __attribute__((packed)) Frame_00567dac {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_00567dac, word_0, 0x0);
GUEST_OFFSET(Frame_00567dac, word_4, 0x4);
GUEST_SIZE(Frame_00567dac, 0x8);

void sead__SafeStringBase_char___SafeStringBase_00567dac(gptr<Object_00567dac_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00567dac> frame;  // the original's stack frame
    u32 r0_1 = layout_allocator_8(arg0.addr(), r1, r2, r3);
    frame->word_0 = vtable_sead__SafeStringBase_char_;
    frame->word_4 = r1;
    call_0056aa98(arg0.addr() + 0x15cu, frame.at(0).addr(), *gptr<u32>(r0_1 + 4u), r2);  // (from the original)
    u32 r1_2 = arg0->word_22c;
    arg0->word_158 = r1_2;
    if (arg0->word_8 == 0) {
        arg0->word_8 = r1_2;
        call_004b6598(arg0.addr() + 0xcu, r1_2, 0x567e20u);  // (from the original)
    }
}

}  // namespace d_00567dac
GUEST_EXPORT_FRAMED(0x00567dac, d_00567dac::sead__SafeStringBase_char___SafeStringBase_00567dac, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00567e24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567e24 {

inline guest::global<u32, 0x00975c14> global_00975c14;
inline guest::global<u32, 0x00975c18> global_00975c18;
inline constexpr guest::Function<0x00567e34, u32(u32, u32, u32, u32)> call_00567e34;

u32 load_layout_archive() {
    return call_00567e34(guest::cpu()->r[0], guest::cpu()->r[1], *global_00975c14, *global_00975c18);
}

}  // namespace d_00567e24
GUEST_EXPORT(0x00567e24, d_00567e24::load_layout_archive);

// f_00567ef0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567ef0 {

inline constexpr u32 vtable_ssys__ma__lyt__ArcResAccReader = 0x009061b8u;
inline constexpr u32 vtable_ssys__ma__lyt__ArcResAcc = 0x00906224u;
inline constexpr guest::Function<0x0013bc00, u32(u32, u32, u32, u32)> destroy_load_split;
inline constexpr guest::Function<0x0056853c, u32(u32, u32)> ssys__ma__lyt__ArcResourceAccessorVRAM__virtual_0;

u32 ssys__ma__lyt__ArcResAccReader__virtual_0(gptr<ssys__ma__lyt__ArcResAcc> arg0) {
    arg0->word_0 = vtable_ssys__ma__lyt__ArcResAccReader;
    u32 r0_1 = arg0.addr() + 0x15cu;  // (from the original)
    destroy_load_split(r0_1, 0x9061b8u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    arg0->word_0 = vtable_ssys__ma__lyt__ArcResAcc;
    u32 r0_3 = ssys__ma__lyt__ArcResourceAccessorVRAM__virtual_0(r0_1 - 0x150u, 0x906224u);  // (from the original)
    return r0_3 - 0xcu;  // (from the original)
}

}  // namespace d_00567ef0
GUEST_EXPORT_FRAMED(0x00567ef0, d_00567ef0::ssys__ma__lyt__ArcResAccReader__virtual_0, 0x4010);  // pushes {r4, lr} first, as the original

// f_00567f20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567f20 {

struct __attribute__((packed)) Object_00567f20_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00567f20_0, word_4, 0x4);


u32 f_00567f20(gptr<Object_00567f20_0> arg0) {
    u32 r0_1 = arg0->word_4;
    // virtual function 2 of r0_1
    return guest::call_address<u32>(*gptr<u32>(*gptr<u32>(r0_1) + 8u), r0_1, guest::cpu()->r[1], guest::cpu()->r[2], 0u);
}

}  // namespace d_00567f20
GUEST_EXPORT(0x00567f20, d_00567f20::f_00567f20);

// f_00567f34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567f34 {

struct __attribute__((packed)) Object_00567f34_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Object_00567f34_0, word_1c, 0x1c);


void f_00567f34(gptr<Object_00567f34_0> arg0) {
    arg0->word_1c = ~0u;
}

}  // namespace d_00567f34
GUEST_EXPORT(0x00567f34, d_00567f34::f_00567f34);

// f_00567f40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567f40 {

struct __attribute__((packed)) Object_00567f40_0 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Object_00567f40_0, float_0, 0x0);
GUEST_OFFSET(Object_00567f40_0, float_4, 0x4);
GUEST_OFFSET(Object_00567f40_0, float_8, 0x8);
GUEST_OFFSET(Object_00567f40_0, float_c, 0xc);
GUEST_OFFSET(Object_00567f40_0, float_10, 0x10);
GUEST_OFFSET(Object_00567f40_0, float_14, 0x14);
GUEST_OFFSET(Object_00567f40_0, word_18, 0x18);
GUEST_OFFSET(Object_00567f40_0, word_1c, 0x1c);

struct __attribute__((packed)) Local_00567f40_r1_2 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_00567f40_r1_2, float_0, 0x0);
GUEST_OFFSET(Local_00567f40_r1_2, float_4, 0x4);


u32 f_00567f40(gptr<Object_00567f40_0> arg0, float S0, float S1) {
    u32 r1_1 = arg0->word_1c;
    if (s32(r1_1) <= 0) {
        arg0->word_1c = ~0u;
        return 1u;
    }
    if (s32(r1_1) <= s32(arg0->word_18)) {
        float S0_1 = std::bit_cast<float>(r1_1);
        float S1_1 = std::bit_cast<float>(r1_1 + 1u);
        gptr<Local_00567f40_r1_2> r1_2 = gptr<Local_00567f40_r1_2>(arg0.addr() + 0xcu);  // (from the original)
        float S0_2 = float(s32(std::bit_cast<u32>(S0_1))) / float(s32(std::bit_cast<u32>(S1_1)));
        float S2_1 = r1_2->float_0 * S0_2;
        float S3_1 = r1_2->float_4 * S0_2;
        arg0->float_14 = arg0->float_14 * S0_2;
        r1_2->float_0 = S2_1;
        r1_2->float_4 = S3_1;
    }
    arg0->float_0 = arg0->float_0 + arg0->float_c;
    arg0->float_4 = arg0->float_4 + arg0->float_10;
    float S1_2 = arg0->float_14;
    float S0_3 = arg0->float_8 + S1_2;
    arg0->float_8 = S0_3;
    arg0->word_1c = arg0->word_1c - 1u;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_2;
    return 0u;
}

}  // namespace d_00567f40
GUEST_EXPORT(0x00567f40, d_00567f40::f_00567f40);

// f_00567fe4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567fe4 {

struct __attribute__((packed)) Object_00567fe4_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0xc];  // (not used here)
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Object_00567fe4_0, word_0, 0x0);
GUEST_OFFSET(Object_00567fe4_0, word_4, 0x4);
GUEST_OFFSET(Object_00567fe4_0, word_8, 0x8);
GUEST_OFFSET(Object_00567fe4_0, word_18, 0x18);
GUEST_OFFSET(Object_00567fe4_0, word_1c, 0x1c);

struct __attribute__((packed)) Object_00567fe4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00567fe4_1, word_0, 0x0);
GUEST_OFFSET(Object_00567fe4_1, word_4, 0x4);
GUEST_OFFSET(Object_00567fe4_1, word_8, 0x8);

struct __attribute__((packed)) Object_00567fe4_2 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Object_00567fe4_2, float_0, 0x0);
GUEST_OFFSET(Object_00567fe4_2, float_4, 0x4);
GUEST_OFFSET(Object_00567fe4_2, float_8, 0x8);

struct __attribute__((packed)) Local_00567fe4_r0_1 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_00567fe4_r0_1, float_0, 0x0);
GUEST_OFFSET(Local_00567fe4_r0_1, float_4, 0x4);
GUEST_OFFSET(Local_00567fe4_r0_1, float_8, 0x8);


void f_00567fe4(gptr<Object_00567fe4_0> arg0, gptr<Object_00567fe4_1> arg1, gptr<Object_00567fe4_2> arg2, u32 r3, float S0) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = arg2.addr();
    u32 res_2 = 0;
    u32 r4 = *gptr<u32>(guest::cpu()->r[13] + 0xcu);  // (from the original)
    u32 r5_1 = *gptr<u32>(guest::cpu()->r[13] + 8u);
    arg0->word_0 = arg1->word_0;
    arg0->word_4 = arg1->word_4;
    u32 r12_1 = arg1->word_8;
    arg0->word_18 = r4;
    arg0->word_8 = r12_1;
    float S7 = arg2->float_0 - std::bit_cast<float>(arg1->word_0);
    float S5 = arg2->float_4 - std::bit_cast<float>(arg1->word_4);
    float S6 = arg2->float_8 - std::bit_cast<float>(arg1->word_8);
    float S1 = 0.0f;
    u32 r12 = vcvt_sz_f(sqrtf(S7 * S7 + S5 * S5 + S6 * S6) / S0);
    S0 = S1;
    if ((r12 - r3) != 0 && s32(r12) >= s32(r3)) {
        r12 = r3;
    }
    if (s32(r12) < s32(r5_1)) {
        r12 = r5_1;
    }
    arg0->word_1c = r12;
    if (s32(r4) > 0) {
        r1 = 0u;
        if ((r4 & 1u) != 0) {
            r1 = 1u;
            S0 = float(s32(r4)) + S0;
        }
        r2 = s32(r4) >> 1;
        if (r2 != 0) {
            do {
                u32 r3_1 = r4 - r1;
                res_2 = r2 - 1u;
                r2 = res_2;
                r1 += 2u;
                S0 = float(s32(r3_1)) + S0;
                S1 = float(s32(r3_1 - 1u)) + S1;
                guest::preempt();
            } while (res_2 != 0);
        }
        S0 = S0 + S1;
    }
    gptr<Local_00567fe4_r0_1> r0_1 = gptr<Local_00567fe4_r0_1>(r0 + 0xcu);  // (from the original)
    float S1_1 = 1.0f / (float(s32(r12 - r4)) + S0 / float(s32(r4 + 1u)));
    float S0_1 = S7 * S1_1;
    float S2_1 = S5 * S1_1;
    float S1_2 = S6 * S1_1;
    r0_1->float_0 = S0_1;
    r0_1->float_4 = S2_1;
    r0_1->float_8 = S1_2;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_2;
}

}  // namespace d_00567fe4
GUEST_EXPORT_FRAMED(0x00567fe4, d_00567fe4::f_00567fe4, 0x30);  // pushes {r4, r5} first, as the original

// f_00568b38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00568b38 {

inline constexpr guest::Function<0x001408d4, u32(u32, u32)> list_remove;
inline constexpr guest::Function<0x004b9f68, u32(u32, u32, u32, u32)> nw__lyt__Layout__virtual_4;

u32 f_00568b38(u32 r0, u32 r1) {
    u32 r5_1 = r0 + 0x10u;  // (from the original)
    u32 r0_1 = nw__lyt__Layout__virtual_4(r5_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        list_remove(r5_1 + 4u, r0_1 + 4u);
    }
    return r0_1;
}

}  // namespace d_00568b38
GUEST_EXPORT_FRAMED(0x00568b38, d_00568b38::f_00568b38, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00569544: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Advances the frame by the rate; at the end it loops (flag 1 clamps instead), backwards with flag 2.
namespace d_00569544 {

struct __attribute__((packed)) FrameControl {
    u8 unknown_0[0x4];  // (not used here)
    float end;
    float frame;
    float previous;
    float rate;
    u8 flags;
    u8 unknown_15[0x3];  // (not used here)
    u32 target;
};
GUEST_OFFSET(FrameControl, end, 0x4);
GUEST_OFFSET(FrameControl, frame, 0x8);
GUEST_OFFSET(FrameControl, previous, 0xc);
GUEST_OFFSET(FrameControl, rate, 0x10);
GUEST_OFFSET(FrameControl, flags, 0x14);
GUEST_OFFSET(FrameControl, target, 0x18);


u32 FrameControl__advance(gptr<FrameControl> control) {
    u32 fpsr = guest::cpu()->fpscr;
    u32 flags = control->flags;
    float frame = control->frame;
    float rate = control->rate;
    control->previous = frame;
    if ((flags & 2u) != 0) {
        if (rate <= frame) {
            goto L_5695bc;
        }
        if ((flags & 1u) != 0) {
            frame = 0.0f;
            goto L_5695c0;
        }
        rate = control->end - rate;
        frame = rate + frame;
        goto L_5695c0;
    }
    frame = rate + frame;
    if ((flags & 1u) != 0) {
        rate = control->end - 1.0f;
        if (!((fpsr & 0xfffffffu | vfp_cmpf(rate, frame)) >> 0x1d & 1)) {  // (from the original)
            frame = rate;
        }
        goto L_5695c0;
    }
    rate = control->end;
    if (!(rate <= frame)) {
        goto L_5695c0;
    }
L_5695bc:;
    frame = frame - rate;
L_5695c0:;
    control->frame = frame;
    u32 target = control->target;
    if (target != 0) {
        *gptr<u32>(target + 0x10u) = std::bit_cast<u32>(frame);  // (from the original)
    }
    guest::cpu()->r[1] = flags;
    guest::cpu()->s[0] = frame;
    guest::cpu()->s[1] = rate;
    return target;
}

}  // namespace d_00569544
GUEST_EXPORT(0x00569544, d_00569544::FrameControl__advance);

// f_00569774: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00569774 {

struct __attribute__((packed)) Object_00569774_0 {
    u8 unknown_0[0x4];  // (not used here)
    float float_4;
    u32 word_8;
    float float_c;
    float float_10;
    u8 byte_14;
    u8 unknown_15[0x3];  // (not used here)
    u32 word_18;
};
GUEST_OFFSET(Object_00569774_0, float_4, 0x4);
GUEST_OFFSET(Object_00569774_0, word_8, 0x8);
GUEST_OFFSET(Object_00569774_0, float_c, 0xc);
GUEST_OFFSET(Object_00569774_0, float_10, 0x10);
GUEST_OFFSET(Object_00569774_0, byte_14, 0x14);
GUEST_OFFSET(Object_00569774_0, word_18, 0x18);

inline constexpr guest::Function<0x0073bf80, u32(u32, u32, u32, u32)> call_0073bf80;
inline constexpr guest::Function<0x0073bf94, u32(u32)> call_0073bf94;

u32 copy_animation_target(gptr<Object_00569774_0> arg0, u32 r1, float S0, float S1, float S2) {
    u32 r0_1 = r1;
    arg0->word_18 = r1;
    if (r1 != 0) {
        u32 r5_1 = 1u;
        u32 r0_2 = call_0073bf80(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_3 = arg0->word_18;
        if (r0_2 != 0) {
            r5_1 = 0u;
        }
        u32 r0_4 = call_0073bf94(r0_3);
        r1 = guest::cpu()->r[1];
        S0 = 1.0f;
        float S2_1 = 0.0f;
        arg0->float_10 = S0;
        S1 = float(r0_4);
        arg0->float_4 = S1;
        arg0->word_8 = std::bit_cast<u32>(S2_1);
        arg0->byte_14 = u8(r5_1);
        arg0->float_c = S2_1;
        r0_1 = arg0->word_18;
        if (r0_1 != 0) {
            r1 = arg0->word_8;
            *gptr<u32>(r0_1 + 0x10u) = r1;  // (from the original)
        }
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0_1;
}

}  // namespace d_00569774
GUEST_EXPORT_FRAMED(0x00569774, d_00569774::copy_animation_target, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00569ab8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00569ab8 {

inline constexpr u32 vtable_ssys__ma__lyt__TexBufList = 0x0090614cu;
inline constexpr u32 vtable_ssys__ma__lyt__ArcResourceAccessorVRAM = 0x009061c8u;
inline constexpr u32 vtable_ssys__ma__lyt__ArcResAcc = 0x00906224u;
inline constexpr guest::Function<0x00125e08, u32(u32)> construct_layout_list;
inline constexpr guest::Function<0x0012b394, u32(u32)> nw__lyt__ArcResourceAccessor__ArcResourceAccessor;

u32 ssys__ma__lyt__ArcResAcc__ArcResAcc_00569ab8(gptr<ssys__ma__lyt__ArcResAcc> arg0) {
    arg0->word_4 = arg0.addr() + 0xcu;  // (from the original)
    arg0->word_8 = 0;
    arg0->word_0 = vtable_ssys__ma__lyt__ArcResAcc;
    u32 r0_1 = arg0.addr() + 0xcu;  // (from the original)
    nw__lyt__ArcResourceAccessor__ArcResourceAccessor(r0_1);
    arg0->word_c = vtable_ssys__ma__lyt__ArcResourceAccessorVRAM;
    arg0->word_148 = 0x2010000;  // (from the original)
    construct_layout_list(r0_1 + 0x140u);  // (from the original)
    arg0->word_14c = vtable_ssys__ma__lyt__TexBufList;
    guest::cpu()->r[1] = 0x90614cu;  // (from the original)
    return r0_1 - 0xcu;  // (from the original)
}

}  // namespace d_00569ab8
GUEST_EXPORT_FRAMED(0x00569ab8, d_00569ab8::ssys__ma__lyt__ArcResAcc__ArcResAcc_00569ab8, 0x4010);  // pushes {r4, lr} first, as the original

// f_00569b28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00569b28 {

inline constexpr u32 vtable_ssys__ma__lyt__ArcResAcc = 0x00906224u;
inline constexpr guest::Function<0x0056853c, u32(u32, u32, u32, u32)> ssys__ma__lyt__ArcResourceAccessorVRAM__virtual_0;

u32 ssys__ma__lyt__ArcResAcc__virtual_0(gptr<ssys__ma__lyt__ArcResAcc> arg0) {
    arg0->word_0 = vtable_ssys__ma__lyt__ArcResAcc;
    u32 r0_2 = ssys__ma__lyt__ArcResourceAccessorVRAM__virtual_0(arg0.addr() + 0xcu, 0x906224u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return r0_2 - 0xcu;  // (from the original)
}

}  // namespace d_00569b28
GUEST_EXPORT_FRAMED(0x00569b28, d_00569b28::ssys__ma__lyt__ArcResAcc__virtual_0, 0x4010);  // pushes {r4, lr} first, as the original

// f_00569b44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00569b44 {

struct __attribute__((packed)) Object_00569b44_0 {
    u8 unknown_0[0x4];  // (not used here)
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    u8 byte_14;
};
GUEST_OFFSET(Object_00569b44_0, float_4, 0x4);
GUEST_OFFSET(Object_00569b44_0, float_8, 0x8);
GUEST_OFFSET(Object_00569b44_0, float_c, 0xc);
GUEST_OFFSET(Object_00569b44_0, float_10, 0x10);
GUEST_OFFSET(Object_00569b44_0, byte_14, 0x14);


void f_00569b44(gptr<Object_00569b44_0> arg0, u32 r1, float S0, float S1, float S2) {
    u32 fpsr = guest::cpu()->fpscr;
    float S3_1 = 0.0f;
    arg0->float_4 = S0;
    if (!((fpsr & 0xfffffffu | vfp_cmpf(S2, S3_1)) >> 0x1d & 1)) {  // (from the original)
        S2 = S3_1;
    }
    arg0->float_8 = S2;
    arg0->float_10 = S1;
    arg0->byte_14 = u8(r1);
    arg0->float_c = S2;
}

}  // namespace d_00569b44
GUEST_EXPORT(0x00569b44, d_00569b44::f_00569b44);

// f_00569e90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00569e90 {

inline constexpr guest::Function<0x00132478, u32(u32, u32)> clear_list;
inline constexpr guest::Function<0x00567a10, u32(u32, u32)> call_00567a10;
inline constexpr guest::Function<0x00569ebc, u32(u32, u32, u32, u32)> call_00569ebc;

void f_00569e90(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    call_00569ebc(r0, 0x190u, 0xf0u, guest::cpu()->r[3]);  // (from the original)
    call_00567a10(r0 + 4u, 0x410u);  // (from the original)
    frame.release();
    clear_list(r0 + 4u, guest::cpu()->r[1]);
    return;
}

}  // namespace d_00569e90
GUEST_EXPORT(0x00569e90, d_00569e90::f_00569e90);

// f_00569ebc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00569ebc {

struct __attribute__((packed)) Local_00569ebc_r0_1 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
};
GUEST_OFFSET(Local_00569ebc_r0_1, float_0, 0x0);
GUEST_OFFSET(Local_00569ebc_r0_1, float_4, 0x4);
GUEST_OFFSET(Local_00569ebc_r0_1, float_8, 0x8);
GUEST_OFFSET(Local_00569ebc_r0_1, float_c, 0xc);
GUEST_OFFSET(Local_00569ebc_r0_1, float_10, 0x10);
GUEST_OFFSET(Local_00569ebc_r0_1, float_14, 0x14);

inline guest::global<u32, 0x008ae294> global_008ae294;
inline guest::global<u32, 0x008ae3d8> global_008ae3d8;
inline guest::global<u32, 0x008ae3dc> global_008ae3dc;
inline guest::global<u32, 0x008ae3e0> global_008ae3e0;
inline guest::global<u32, 0x008ae3e4> global_008ae3e4;
inline guest::global<u32, 0x008ae3e8> global_008ae3e8;
inline guest::global<u32, 0x008ae3ec> global_008ae3ec;
inline guest::global<u32, 0x008ae3f0> global_008ae3f0;
inline guest::global<u32, 0x008ae3f4> global_008ae3f4;
inline guest::global<u32, 0x008ae3fc> global_008ae3fc;
inline guest::global<u32, 0x008ae400> global_008ae400;
inline guest::global<u32, 0x008ae404> global_008ae404;
inline guest::global<u32, 0x008ae408> global_008ae408;
inline guest::global<u32, 0x008ae40c> global_008ae40c;
inline constexpr guest::Function<0x007b0530, u32(u32, u32, u32, u32)> call_007b0530;

struct __attribute__((packed)) Frame_00569ebc {
    u32 word_0;
    float float_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    float float_14;
    float float_18;
    float float_1c;
    u8 unknown_20[0x8];  // (not read or written by name)
    u32 word_28;
    u8 unknown_2c[0x4];  // (not read or written by name)
    u32 word_30;
    u8 unknown_34[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00569ebc, word_0, 0x0);
GUEST_OFFSET(Frame_00569ebc, float_4, 0x4);
GUEST_OFFSET(Frame_00569ebc, word_8, 0x8);
GUEST_OFFSET(Frame_00569ebc, word_c, 0xc);
GUEST_OFFSET(Frame_00569ebc, word_10, 0x10);
GUEST_OFFSET(Frame_00569ebc, float_14, 0x14);
GUEST_OFFSET(Frame_00569ebc, float_18, 0x18);
GUEST_OFFSET(Frame_00569ebc, float_1c, 0x1c);
GUEST_OFFSET(Frame_00569ebc, word_28, 0x28);
GUEST_OFFSET(Frame_00569ebc, word_30, 0x30);
GUEST_SIZE(Frame_00569ebc, 0x38);

void f_00569ebc(u32 r0_unused, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_00569ebc> frame;  // the original's stack frame
    u32 r3_1 = uxth(r2);
    u32 r2_1 = uxth(r1);
    float S1_1 = std::bit_cast<float>(*global_008ae3dc);
    float S2_1 = std::bit_cast<float>(*global_008ae3e0);
    float S3_1 = std::bit_cast<float>(*global_008ae3e4);
    float S4_1 = std::bit_cast<float>(*global_008ae3e8);
    float S5_1 = std::bit_cast<float>(*global_008ae3ec);
    float S6_1 = std::bit_cast<float>(*global_008ae3f0);
    float S7_1 = std::bit_cast<float>(*global_008ae3f4);
    u32 r1_1 = *global_008ae294;
    frame->word_0 = *global_008ae3d8;
    frame->float_4 = S1_1;
    frame->word_8 = std::bit_cast<u32>(S2_1);
    frame->word_c = std::bit_cast<u32>(S3_1);
    frame->word_10 = std::bit_cast<u32>(S4_1);
    frame->float_14 = S5_1;
    frame->float_18 = S6_1;
    frame->float_1c = S7_1;
    float S0_1 = 1e-45f;
    float S1_2 = std::bit_cast<float>(*global_008ae3fc);
    float S2_2 = std::bit_cast<float>(*global_008ae400);
    float S3_2 = std::bit_cast<float>(*global_008ae404);
    float S4_2 = std::bit_cast<float>(*global_008ae408);
    float S5_2 = std::bit_cast<float>(*global_008ae40c);
    gptr<Local_00569ebc_r0_1> r0_1 = gptr<Local_00569ebc_r0_1>(frame.at(0x20).addr());  // (from the original)
    r0_1->float_0 = S0_1;
    r0_1->float_4 = S1_2;
    r0_1->float_8 = S2_2;
    r0_1->float_c = S3_2;
    r0_1->float_10 = S4_2;
    r0_1->float_14 = S5_2;
    float S1_3 = 0.5f;
    u32 r0_2 = std::bit_cast<u32>(float(r3_1) * S1_3);
    u32 r12_1 = r0_2 & 0x80000000u;  // (from the original)
    if (r12_1 != 0) {
        r12_1 = 0x800000u;  // (from the original)
    }
    u32 r14 = r0_2 << 9;
    u32 res_2 = r0_2 & ~0x80000000u;  // (from the original)
    r14 >>= 9;
    if (res_2 == 0) {
        r14 >>= 7;
        r12_1 = r14 | r12_1 | (res_2 & 0x7fu) << 0x10;  // (from the original)
    } else {
        u32 res_3 = (r0_2 >> 0x17u & 0xffu) - 0x40u;  // (from the original)
        r14 >>= 7;
        if (s32(res_3) >= 0) {
            if (s32(res_3) > 0x7f) {  // (from the original)
                r12_1 = 0x7f0000u;  // (from the original)
            } else {
                r12_1 = r14 | r12_1 | (res_3 & 0x7fu) << 0x10;  // (from the original)
            }
        }
    }
    float S2_3 = 2.0f;
    frame->word_0 = r12_1;
    float S3_3 = float(r3_1);
    u32 r0_3 = std::bit_cast<u32>(S2_3 / S3_3);
    u32 res_4 = r0_3 & 0x80000000u;  // (from the original)
    u32 r3_2 = res_4;
    r14 = r0_3 << 1;
    if (res_4 != 0) {
        r3_2 = 0x40000000u;  // (from the original)
    }
    u32 res_5 = r0_3 & ~0x80000000u;  // (from the original)
    u32 r12_3 = (r0_3 << 9) >> 9;
    r14 >>= 0x18;  // (from the original)
    if (res_5 != 0) {
        u32 r0_4 = r14 - 0x40u;  // (from the original)
        if (s32(r0_4) >= 0) {
            r3_2 = s32(r0_4) > 0x7f ? 0x3f800000u : r12_3 | r3_2 | (r0_4 & 0x7fu) << 0x17;  // (from the original)
        }
    } else {
        r3_2 = r12_3 | r3_2 | (res_5 & 0x7fu) << 0x17;  // (from the original)
    }
    frame->word_8 = r3_2 << 1;
    u32 r0_5 = std::bit_cast<u32>(float(r2_1) * S1_3);
    u32 r3_3 = r0_5 & 0x80000000u;  // (from the original)
    if (r3_3 != 0) {
        r3_3 = 0x800000u;  // (from the original)
    }
    r14 = r0_5 >> 0x17u & 0xffu;  // (from the original)
    u32 res_7 = r0_5 & ~0x80000000u;  // (from the original)
    u32 r12_5 = (r0_5 << 9) >> 9;
    if (res_7 == 0) {
        r3_3 = (r12_5 >> 7) | r3_3 | (res_7 & 0x7fu) << 0x10;  // (from the original)
    } else {
        u32 res_8 = r14 - 0x40u;  // (from the original)
        if (s32(res_8) >= 0) {
            r3_3 = s32(res_8) > 0x7f ? 0x7f0000u : (r12_5 >> 7) | r3_3 | (res_8 & 0x7fu) << 0x10;  // (from the original)
        }
    }
    frame->word_c = r3_3;
    u32 r0_6 = std::bit_cast<u32>(S2_3 / float(r2_1));
    u32 res_9 = r0_6 & 0x80000000u;  // (from the original)
    u32 r2_2 = res_9;
    if (res_9 != 0) {
        r2_2 = 0x40000000u;  // (from the original)
    }
    u32 res_10 = r0_6 & ~0x80000000u;  // (from the original)
    u32 r3_5 = (r0_6 << 9) >> 9;
    if (res_10 != 0) {
        u32 r0_7 = ((r0_6 << 1) >> 0x18) - 0x40u;  // (from the original)
        if (s32(r0_7) >= 0) {
            r2_2 = s32(r0_7) > 0x7f ? 0x3f800000u : r3_5 | r2_2 | (r0_7 & 0x7fu) << 0x17;  // (from the original)
        }
    } else {
        r2_2 = r3_5 | r2_2 | (res_10 & 0x7fu) << 0x17;  // (from the original)
    }
    frame->word_10 = r2_2 << 1;
    frame->word_28 = 0xbf0000;  // (from the original)
    float S1_4 = 0.0f;
    float S2_4 = float(s32(lsl_r(1u, ((r1_1 & 0xffu) == 0 ? 0x10u : 0x18u) & 0xff) - 1u));  // (from the original)
    float S0_2 = S1_4 / S2_4;
    u32 r0_8 = std::bit_cast<u32>(S0_2);
    u32 res_11 = r0_8 & 0x80000000u;  // (from the original)
    u32 r1_2 = res_11;
    u32 r2_3 = r0_8 & 0x7fffffu;  // (from the original)
    if (res_11 != 0) {
        r1_2 = 0x800000u;  // (from the original)
    }
    u32 res_12 = r0_8 & ~0x80000000u;  // (from the original)
    u32 r3_7 = (r0_8 << 1) >> 0x18;  // (from the original)
    if (res_12 == 0) {
        r3_7 = res_12 & 0x7fu;  // (from the original)
        r1_2 = (r2_3 >> 7) | r1_2 | r3_7 << 0x10;  // (from the original)
    } else {
        u32 res_13 = r3_7 - 0x40u;  // (from the original)
        if (s32(res_13) >= 0) {
            if (s32(res_13) > 0x7f) {  // (from the original)
                r1_2 = 0x7f0000u;  // (from the original)
            } else {
                r3_7 = res_13 & 0x7fu;  // (from the original)
                r1_2 = (r2_3 >> 7) | r1_2 | r3_7 << 0x10;  // (from the original)
            }
        }
    }
    frame->word_30 = r1_2;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_4;
    guest::cpu()->s[2] = S2_4;
    guest::cpu()->s[3] = S3_3;
    guest::cpu()->s[4] = S4_2;
    guest::cpu()->s[5] = S5_2;
    guest::cpu()->s[6] = S6_1;
    guest::cpu()->s[7] = S7_1;
    call_007b0530(frame.at(0).addr(), 0x38u, 1u, r3_7);  // (from the original)
    call_007b0530(0x8ae398u, 0x40u, 1u, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00569ebc
GUEST_EXPORT_FRAMED(0x00569ebc, d_00569ebc::f_00569ebc, 0x4010);  // pushes {r4, lr} first, as the original

// f_0056a178: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Scales the vector to length 1; 0 (the vector unchanged) when its length is too small to divide by.
namespace d_0056a178 {


u32 Float3__normalize(gptr<Float3> vector) {
    float x = vector->v[0];
    float y = vector->v[1];
    float z = vector->v[2];
    float length = sqrtf(x * x + y * y + z * z);
    float S0_1 = fabsf(length);
    u32 r1_1 = std::bit_cast<u32>(S0_1);
    if (s32(r1_1) <= 0x34000000) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = y;
        return 0u;
    }
    float inverse = 1.0f / length;
    float S3_2 = x * inverse;
    float S1_2 = y * inverse;
    float S0_3 = z * inverse;
    vector->v[0] = S3_2;
    vector->v[1] = S1_2;
    vector->v[2] = S0_3;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_2;
    return 1u;
}

}  // namespace d_0056a178
GUEST_EXPORT(0x0056a178, d_0056a178::Float3__normalize);

// f_0056a3fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a3fc {

struct __attribute__((packed)) Local_0056a3fc_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0056a3fc_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0056a3fc_ea_1, word_4, 0x4);

inline constexpr u32 vtable_sead__FixedSafeString_256_ = 0x009048b0u;
inline guest::global<u8, 0x008c9f1c> global_008c9f1c;
inline guest::global<u32, 0x009752e0> global_009752e0;
inline constexpr guest::Function<0x00133580, u32(u32, u32, u32, u32)> sead__FixedSafeString_32___FixedSafeString_00133580;
inline constexpr guest::Function<0x0053dffc, u32(u32, u32, u32)> call_0053dffc;

struct __attribute__((packed)) Frame_0056a3fc {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not read or written by name)
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
    u8 byte_10;
    u8 unknown_11[0xff];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0056a3fc, byte_0, 0x0);
GUEST_OFFSET(Frame_0056a3fc, word_4, 0x4);
GUEST_OFFSET(Frame_0056a3fc, word_8, 0x8);
GUEST_OFFSET(Frame_0056a3fc, byte_10, 0x10);
GUEST_SIZE(Frame_0056a3fc, 0x110);

u32 sead__FixedSafeString_256___FixedSafeString_0056a3fc(u32 r0) {
    guest::StackFrameOf<Frame_0056a3fc> frame;  // the original's stack frame
    gptr<Local_0056a3fc_ea_1> ea_1 = gptr<Local_0056a3fc_ea_1>(frame.at(8).addr());
    ea_1->word_0 = frame.at(0x10).addr();  // (from the original)
    ea_1->word_4 = 0x100;  // (from the original)
    *gptr<u8>(frame->word_8 + 0xffu) = *global_008c9f1c;  // (from the original)
    frame->byte_10 = *global_008c9f1c;
    frame->word_4 = vtable_sead__FixedSafeString_256_;
    u32 r0_2 = sead__FixedSafeString_32___FixedSafeString_00133580(*global_009752e0, r0, frame.at(4).addr(), 0x100u);  // (from the original)
    if (r0_2 == 0) {
        return 0u;
    }
    frame->byte_0 = 0;
    call_0053dffc(r0_2, frame.at(0).addr(), frame.at(4).addr());
    return s8(frame->byte_0);
}

}  // namespace d_0056a3fc
GUEST_EXPORT_FRAMED(0x0056a3fc, d_0056a3fc::sead__FixedSafeString_256___FixedSafeString_0056a3fc, 0x4010);  // pushes {r4, lr} first, as the original

// f_0056a4a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a4a4 {

struct __attribute__((packed)) Local_0056a4a4_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0056a4a4_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0056a4a4_ea_1, word_4, 0x4);

inline constexpr u32 vtable_sead__FixedSafeString_256_ = 0x009048b0u;
inline guest::global<u8, 0x008c9f1c> global_008c9f1c;
inline guest::global<u32, 0x009752e0> global_009752e0;
inline constexpr guest::Function<0x00133580, u32(u32, u32, u32, u32)> sead__FixedSafeString_32___FixedSafeString_00133580;
inline constexpr guest::Function<0x0053dffc, u32(u32, u32, u32)> call_0053dffc;

struct __attribute__((packed)) Frame_0056a4a4 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not read or written by name)
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
    u8 byte_10;
    u8 unknown_11[0xff];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0056a4a4, byte_0, 0x0);
GUEST_OFFSET(Frame_0056a4a4, word_4, 0x4);
GUEST_OFFSET(Frame_0056a4a4, word_8, 0x8);
GUEST_OFFSET(Frame_0056a4a4, byte_10, 0x10);
GUEST_SIZE(Frame_0056a4a4, 0x110);

u32 sead__FixedSafeString_256___FixedSafeString_0056a4a4(u32 r0) {
    guest::StackFrameOf<Frame_0056a4a4> frame;  // the original's stack frame
    gptr<Local_0056a4a4_ea_1> ea_1 = gptr<Local_0056a4a4_ea_1>(frame.at(8).addr());
    ea_1->word_0 = frame.at(0x10).addr();  // (from the original)
    ea_1->word_4 = 0x100;  // (from the original)
    *gptr<u8>(frame->word_8 + 0xffu) = *global_008c9f1c;  // (from the original)
    frame->byte_10 = *global_008c9f1c;
    frame->word_4 = vtable_sead__FixedSafeString_256_;
    u32 r0_2 = sead__FixedSafeString_32___FixedSafeString_00133580(*global_009752e0, r0, frame.at(4).addr(), 0x100u);  // (from the original)
    if (r0_2 == 0) {
        return 0u;
    }
    frame->byte_0 = 0;
    call_0053dffc(r0_2, frame.at(0).addr(), frame.at(4).addr());
    return s8(frame->byte_0);
}

}  // namespace d_0056a4a4
GUEST_EXPORT_FRAMED(0x0056a4a4, d_0056a4a4::sead__FixedSafeString_256___FixedSafeString_0056a4a4, 0x4010);  // pushes {r4, lr} first, as the original

// f_0056a534: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a534 {

struct __attribute__((packed)) Object_0056a534_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0056a534_2, word_4, 0x4);

inline constexpr guest::Function<0x00125b3c, u32(u32, u32, u32, u32)> ObjectBinding__bind;

void f_0056a534(u32 r0_unused, u32 r1_unused, gptr<Object_0056a534_2> arg2) {
    ObjectBinding__bind(guest::cpu()->r[0], guest::cpu()->r[1], arg2->word_4, guest::cpu()->r[3]);
}

}  // namespace d_0056a534
GUEST_EXPORT(0x0056a534, d_0056a534::f_0056a534);

// f_0056a53c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a53c {

struct __attribute__((packed)) Object_0056a53c_0 {
    u8 unknown_0[0x30];  // (not used here)
    u32 word_30;
};
GUEST_OFFSET(Object_0056a53c_0, word_30, 0x30);

struct __attribute__((packed)) Local_0056a53c_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0056a53c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0056a53c_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0056a53c_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0056a53c_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_0056a53c_ea_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0056a53c_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_0056a53c_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_0056a53c_ea_2, word_c, 0xc);

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32)> unlock_member_lock;
inline constexpr guest::Function<0x0053dfa0, u32(u32, u32, u32)> call_0053dfa0;

struct __attribute__((packed)) Frame_0056a53c {
    u32 word_0;
    u8 unknown_4[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0056a53c, word_0, 0x0);
GUEST_SIZE(Frame_0056a53c, 0x10);

u32 f_0056a53c(gptr<Object_0056a53c_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0056a53c> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0056a53c_ea_1> ea_1 = gptr<Local_0056a53c_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r14;
    u32 r0_1 = arg0->word_30;
    if (r0_1 != 0) {
        lock_member_lock(0xae563cu, r1, r2, r3);  // (from the original)
        u32 r0_2 = arg0->word_30;
        frame->word_0 = 0;
        call_0053dfa0(r0_2, frame.at(0).addr(), arg0.addr());
        u32 r5_1 = frame->word_0;
        unlock_member_lock(0xae563cu);  // (from the original)
        r1 = guest::cpu()->r[1];
        r0_1 = r5_1;
    }
    gptr<Local_0056a53c_ea_2> ea_2 = gptr<Local_0056a53c_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_4;
    u32 r5_2 = ea_2->word_8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    return r0_1;
}

}  // namespace d_0056a53c
GUEST_EXPORT(0x0056a53c, d_0056a53c::f_0056a53c);

// f_0056a58c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a58c {

struct __attribute__((packed)) Object_0056a58c_0 {
    u8 unknown_0[0x30];  // (not used here)
    u32 word_30;
};
GUEST_OFFSET(Object_0056a58c_0, word_30, 0x30);

inline guest::global<u32, 0x009752e0> global_009752e0;
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32)> unlock_member_lock;
inline constexpr guest::Function<0x00542358, u32(u32, u32, u32, u32)> call_00542358;

struct __attribute__((packed)) Frame_0056a58c {
    u32 word_0;
};
GUEST_OFFSET(Frame_0056a58c, word_0, 0x0);
GUEST_SIZE(Frame_0056a58c, 0x4);

u32 f_0056a58c(gptr<Object_0056a58c_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0056a58c> frame;  // the original's stack frame
    u32 r0_1 = 0;
    frame->word_0 = r3;
    if (arg0->word_30 != 0) {
        r0_1 = 0u;
    } else {
        lock_member_lock(0xae563cu, r1, r2, r3);  // (from the original)
        u32 r0_2 = *global_009752e0;
        frame->word_0 = 0;
        u32 r0_3 = call_00542358(r0_2, arg0.addr(), r1, 0u);
        arg0->word_30 = r0_3;
        u32 r5_1 = r0_3 != 0;
        unlock_member_lock(0xae563cu);  // (from the original)
        r1 = guest::cpu()->r[1];
        r0_1 = r5_1;
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_0056a58c
GUEST_EXPORT_FRAMED(0x0056a58c, d_0056a58c::f_0056a58c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0056a5fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a5fc {

struct __attribute__((packed)) Object_0056a5fc_0 {
    u8 unknown_0[0x30];  // (not used here)
    u32 word_30;
};
GUEST_OFFSET(Object_0056a5fc_0, word_30, 0x30);

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32)> unlock_member_lock;
inline constexpr guest::Function<0x0053e71c, u32(u32, u32, u32, u32)> call_0053e71c;

struct __attribute__((packed)) Frame_0056a5fc {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0056a5fc, word_0, 0x0);
GUEST_OFFSET(Frame_0056a5fc, word_4, 0x4);
GUEST_SIZE(Frame_0056a5fc, 0xc);

u32 f_0056a5fc(gptr<Object_0056a5fc_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0056a5fc> frame;  // the original's stack frame
    u32 r0_1 = arg0->word_30;
    if (r0_1 != 0) {
        lock_member_lock(0xae563cu, r1, r2, r3);  // (from the original)
        u32 r0_2 = arg0->word_30;
        frame->word_4 = 0;
        frame->word_0 = r2;
        call_0053e71c(r0_2, frame.at(4).addr(), arg0.addr(), r1);
        u32 r5_1 = frame->word_4;
        unlock_member_lock(0xae563cu);  // (from the original)
        r1 = guest::cpu()->r[1];
        r0_1 = r5_1;
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_0056a5fc
GUEST_EXPORT_FRAMED(0x0056a5fc, d_0056a5fc::f_0056a5fc, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0056a664: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a664 {

struct __attribute__((packed)) Object_0056a664_0 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Object_0056a664_0, float_0, 0x0);
GUEST_OFFSET(Object_0056a664_0, float_4, 0x4);
GUEST_OFFSET(Object_0056a664_0, float_8, 0x8);


void f_0056a664(gptr<Object_0056a664_0> arg0) {
    float S0_1 = arg0->float_0;
    float S1_1 = arg0->float_4;
    float S2_1 = S0_1;
    float S3_1 = arg0->float_8;
    if (S1_1 > S0_1) {
        S0_1 = S1_1;
    }
    if (S3_1 > S0_1) {
        S0_1 = S3_1;
    }
    u32 r1_1 = std::bit_cast<u32>(S0_1);
    if (s32(r1_1) <= 0x3f800000) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return;
    }
    arg0->float_0 = S2_1 / S0_1;
    arg0->float_4 = S1_1 / S0_1;
    float S1_2 = S3_1 / S0_1;
    arg0->float_8 = S1_2;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_2;
}

}  // namespace d_0056a664
GUEST_EXPORT(0x0056a664, d_0056a664::f_0056a664);

// f_0056a724: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a724 {


u32 ssys__ma__Allocator__virtual_3(gptr<ssys__ma__Allocator> arg0) {
    u32 r0_1 = arg0->word_4;
    u32 r2_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x1cu);  // (from the original)
    // virtual function 7 of r0_1
    return guest::call_address<u32>(r2_1, r0_1, guest::cpu()->r[1], r2_1, guest::cpu()->r[3]);
}

}  // namespace d_0056a724
GUEST_EXPORT(0x0056a724, d_0056a724::ssys__ma__Allocator__virtual_3);

// f_0056a734: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a734 {


u32 ssys__ma__Allocator__virtual_2(gptr<ssys__ma__Allocator> arg0, u32 r1, u32 r2) {
    u32 r0_1 = arg0->word_4;
    if (r2 == 0) {
        r2 = 1u;
    }
    u32 r3_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x18u);  // (from the original)
    // virtual function 6 of r0_1
    return guest::call_address<u32>(r3_1, r0_1, r1 + r2, r2, r3_1);
}

}  // namespace d_0056a734
GUEST_EXPORT(0x0056a734, d_0056a734::ssys__ma__Allocator__virtual_2);

// f_0056a758: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a758 {

inline guest::global<u32, 0x00975c38> global_00975c38;
inline constexpr guest::Function<0x0056a780, u32(u32, u32, u32, u32)> call_0056a780;

struct __attribute__((packed)) Frame_0056a758 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_0056a758, word_0, 0x0);
GUEST_OFFSET(Frame_0056a758, word_4, 0x4);
GUEST_SIZE(Frame_0056a758, 0x8);

u32 f_0056a758() {
    guest::StackFrameOf<Frame_0056a758> frame;  // the original's stack frame
    u32 r12_1 = *global_00975c38;
    frame->word_0 = 0;
    frame->word_4 = r12_1;
    call_0056a780(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return guest::cpu()->r[0];
}

}  // namespace d_0056a758
GUEST_EXPORT_FRAMED(0x0056a758, d_0056a758::f_0056a758, 0x4010);  // pushes {r4, lr} first, as the original

// f_0056a94c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a94c {

inline guest::global<u32, 0x00975c34> global_00975c34;
inline guest::global<u32, 0x00975c38> global_00975c38;
inline constexpr guest::Function<0x0056a780, u32(u32, u32, u32, u32)> call_0056a780;

struct __attribute__((packed)) Frame_0056a94c {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_0056a94c, word_0, 0x0);
GUEST_OFFSET(Frame_0056a94c, word_4, 0x4);
GUEST_SIZE(Frame_0056a94c, 0x8);

u32 f_0056a94c() {
    guest::StackFrameOf<Frame_0056a94c> frame;  // the original's stack frame
    u32 r3_1 = *global_00975c34;
    u32 r12_1 = *global_00975c38;
    frame->word_0 = 1;
    frame->word_4 = r12_1;
    call_0056a780(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], r3_1);
    return guest::cpu()->r[0];
}

}  // namespace d_0056a94c
GUEST_EXPORT_FRAMED(0x0056a94c, d_0056a94c::f_0056a94c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0056a974: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a974 {

inline guest::global<u32, 0x00975c38> global_00975c38;
inline constexpr guest::Function<0x0056a780, u32(u32, u32, u32, u32)> call_0056a780;

struct __attribute__((packed)) Frame_0056a974 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_0056a974, word_0, 0x0);
GUEST_OFFSET(Frame_0056a974, word_4, 0x4);
GUEST_SIZE(Frame_0056a974, 0x8);

u32 load_split_start() {
    guest::StackFrameOf<Frame_0056a974> frame;  // the original's stack frame
    u32 r12_1 = *global_00975c38;
    frame->word_0 = 1;
    frame->word_4 = r12_1;
    call_0056a780(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return guest::cpu()->r[0];
}

}  // namespace d_0056a974
GUEST_EXPORT_FRAMED(0x0056a974, d_0056a974::load_split_start, 0x4010);  // pushes {r4, lr} first, as the original

// f_0056a99c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a99c {

inline constexpr guest::Function<0x0056a780, u32(u32, u32, u32, u32)> call_0056a780;

struct __attribute__((packed)) Frame_0056a99c {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_0056a99c, word_0, 0x0);
GUEST_OFFSET(Frame_0056a99c, word_4, 0x4);
GUEST_SIZE(Frame_0056a99c, 0x8);

u32 f_0056a99c() {
    guest::StackFrameOf<Frame_0056a99c> frame;  // the original's stack frame
    u32 r12_1 = *frame.at<u32>(0x10);  // (from the original)
    frame->word_0 = 1;
    frame->word_4 = r12_1;
    call_0056a780(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return guest::cpu()->r[0];
}

}  // namespace d_0056a99c
GUEST_EXPORT_FRAMED(0x0056a99c, d_0056a99c::f_0056a99c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0056a9bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a9bc {

struct __attribute__((packed)) Object_0056a9bc_0 {
    u8 unknown_0[0xe8];  // (not used here)
    u8 byte_e8;
    u8 byte_e9;
    u8 byte_ea;
};
GUEST_OFFSET(Object_0056a9bc_0, byte_e8, 0xe8);
GUEST_OFFSET(Object_0056a9bc_0, byte_e9, 0xe9);
GUEST_OFFSET(Object_0056a9bc_0, byte_ea, 0xea);

inline constexpr guest::Function<0x00135740, u32(u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32)> unlock_member_lock;
inline constexpr guest::Function<0x00138920, u32(u32, u32, u32, u32)> list_contains_node;
inline constexpr guest::Function<0x0013f134, u32(u32, u32)> queue_append;

u32 f_0056a9bc(gptr<Object_0056a9bc_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = arg0->byte_e8;
    u32 r1 = arg0->byte_e8;
    if (r1 != 0) {
        if (r0_1 != 6u) {
            if (arg0->byte_e8 != 1u && arg0->byte_e8 != 3u && arg0->byte_e8 != 4u && arg0->byte_e8 != 5u) {
                if (arg0->byte_e8 == 2u) {
                    goto L_56aa64;
                }
                guest::cpu()->r[1] = r1;
                return 1u;
            }
            arg0->byte_e8 = 6;
            u32 r0_2 = list_contains_node(0xae55c8u, r0, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1 = guest::cpu()->r[1];
            if (r0_2 == 0) {
                lock_member_lock(0xae55d4u, r1);  // (from the original)
                queue_append(0xae55c8u, r0);  // (from the original)
                unlock_member_lock(0xae55d4u);  // (from the original)
                r1 = guest::cpu()->r[1];
            }
        }
        guest::cpu()->r[1] = r1;
        return 0u;
L_56aa64:;
        if (arg0->byte_e9 != 0) {
            arg0->byte_ea = 1;
            guest::cpu()->r[1] = r1;
            return 0u;
        }
    }
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_0056a9bc
GUEST_EXPORT_FRAMED(0x0056a9bc, d_0056a9bc::f_0056a9bc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0056aa98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056aa98 {

inline constexpr guest::Function<0x0056a780, u32(u32, u32, u32, u32)> call_0056a780;

struct __attribute__((packed)) Frame_0056aa98 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_0056aa98, word_0, 0x0);
GUEST_OFFSET(Frame_0056aa98, word_4, 0x4);
GUEST_SIZE(Frame_0056aa98, 0x8);

u32 f_0056aa98() {
    guest::StackFrameOf<Frame_0056aa98> frame;  // the original's stack frame
    frame->word_0 = 0;
    frame->word_4 = 0;
    call_0056a780(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return guest::cpu()->r[0];
}

}  // namespace d_0056aa98
GUEST_EXPORT_FRAMED(0x0056aa98, d_0056aa98::f_0056aa98, 0x4010);  // pushes {r4, lr} first, as the original

// f_0056aab8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056aab8 {

struct __attribute__((packed)) Object_0056aab8_0 {
    u8 unknown_0[0xe8];  // (not used here)
    u8 byte_e8;
};
GUEST_OFFSET(Object_0056aab8_0, byte_e8, 0xe8);


u32 f_0056aab8(gptr<Object_0056aab8_0> arg0) {
    u32 r0_1 = arg0->byte_e8;
    if (r0_1 == 3u || r0_1 == 4u) {
        return 1u;
    }
    return r0_1 == 5u;
}

}  // namespace d_0056aab8
GUEST_EXPORT(0x0056aab8, d_0056aab8::f_0056aab8);

// f_0056ae38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056ae38 {

struct __attribute__((packed)) Object_0056ae38_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0056ae38_0, word_0, 0x0);

inline constexpr guest::Function<0x002f9e1c, u32(u32, u32, u32, u32)> divide_with_remainder;

void f_0056ae38(gptr<Object_0056ae38_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r7_1 = arg0->word_0;
    u32 r6_1 = *gptr<u32>(guest::cpu()->r[13] + 0x20u);  // (from the original)
    u32 r9_1 = r1 - r7_1;
    if (r7_1 != r1) {
        u32 r0_1 = divide_with_remainder(r9_1, r2, r2, r3);
        u32 res_1 = r0_1 - r6_1;
        u32 nf_1 = res_1 >> 0x1f;  // (from the original)
        u32 zf_1 = res_1 == 0;
        u32 vf_1 = ((r0_1 ^ r6_1) & (r0_1 ^ res_1)) >> 0x1f;  // (from the original)
        if (zf_1 || nf_1 != vf_1) {
            u32 r1_1 = 0u - r6_1;
            u32 res_2 = r1_1 - r0_1;
            nf_1 = res_2 >> 0x1f;  // (from the original)
            zf_1 = res_2 == 0;
            vf_1 = ((r1_1 ^ r0_1) & (r1_1 ^ res_2)) >> 0x1f;  // (from the original)
        }
        if (!zf_1 && nf_1 == vf_1) {
            if (s32(r0_1) > s32(r3)) {
                r0_1 = r3;
            } else {
                u32 r1_2 = 0u - r3;
                if ((r1_2 - r0_1) != 0 && s32(r1_2) >= s32(r0_1)) {
                    r0_1 = r1_2;
                }
            }
            *gptr<u32>(arg0.addr()) = r0_1 + r7_1;
        } else {
            if (s32(r9_1) >= 0) {
                u32 r0_2 = r7_1 + r6_1;
                *gptr<u32>(arg0.addr()) = r0_2;
                if (s32(r1 - r0_2) > 0) {
                    return;
                }
            } else {
                u32 r0_3 = r7_1 - r6_1;
                *gptr<u32>(arg0.addr()) = r0_3;
                if (s32(r1 - r0_3) < 0) {
                    return;
                }
            }
            *gptr<u32>(arg0.addr()) = r1;
        }
    }
}

}  // namespace d_0056ae38
GUEST_EXPORT_FRAMED(0x0056ae38, d_0056ae38::f_0056ae38, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0056aedc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056aedc {

struct __attribute__((packed)) Object_0056aedc_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_0056aedc_0, half_0, 0x0);

inline constexpr guest::Function<0x002f9e1c, u32(u32, u32, u32, u32)> divide_with_remainder;

u32 f_0056aedc(gptr<Object_0056aedc_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0_5 = 0;
    u32 r6_1 = s16(arg0->half_0);
    u32 r0_3 = divide_with_remainder(sxth(r1 - r6_1), r2, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r0_4 = sxth(r0_3);
    if (s32(r0_4) > s32(r3)) {
        r0_5 = r6_1 + r3;
        arg0->half_0 = u16(r0_5);
    } else {
        r1_1 = 0u - r3;
        if (s32(r0_4) >= s32(r1_1)) {
            r0_5 = r0_4 + r6_1;
            arg0->half_0 = u16(r0_5);
        } else {
            r0_5 = r6_1 - r3;
            arg0->half_0 = u16(r0_5);
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r0_5;
}

}  // namespace d_0056aedc
GUEST_EXPORT_FRAMED(0x0056aedc, d_0056aedc::f_0056aedc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0056af2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056af2c {

struct __attribute__((packed)) Object_0056af2c_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_0056af2c_0, half_0, 0x0);

inline constexpr guest::Function<0x002f9e1c, u32(u32, u32, u32, u32)> divide_with_remainder;

u32 f_0056af2c(gptr<Object_0056af2c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0_5 = 0;
    u32 r5_1 = r1;
    u32 r7_1 = s16(arg0->half_0);
    u32 r6_1 = *gptr<u32>(guest::cpu()->r[13] + 0x20u);  // (from the original)
    u32 r9_1 = sxth(r1 - r7_1);
    if (r7_1 != r5_1) {
        u32 r0_1 = divide_with_remainder(r9_1, r2, r2, r3);
        r1 = guest::cpu()->r[1];
        u32 r0_2 = sxth(r0_1);
        u32 res_1 = r0_2 - r6_1;
        u32 nf_1 = res_1 >> 0x1f;  // (from the original)
        u32 zf_1 = res_1 == 0;
        u32 vf_1 = ((r0_2 ^ r6_1) & (r0_2 ^ res_1)) >> 0x1f;  // (from the original)
        if (zf_1 || nf_1 != vf_1) {
            r1 = 0u - r6_1;
            u32 res_2 = r1 - r0_2;
            nf_1 = res_2 >> 0x1f;  // (from the original)
            zf_1 = res_2 == 0;
            vf_1 = ((r1 ^ r0_2) & (r1 ^ res_2)) >> 0x1f;  // (from the original)
        }
        if (!zf_1 && nf_1 == vf_1) {
            if (s32(r0_2) > s32(r3)) {
                r0_2 = r3;
            } else {
                r1 = 0u - r3;
                if ((r1 - r0_2) != 0 && s32(r1) >= s32(r0_2)) {
                    r0_2 = sxth(r1);
                }
            }
            arg0->half_0 = u16(r0_2 + r7_1);
        } else {
            if (s32(r9_1) >= 0) {
                u32 r0_3 = r7_1 + r6_1;
                r1 = r5_1 - r0_3;
                arg0->half_0 = u16(r0_3);
                if (s32(sxth(r1)) > 0) {
                    r0_5 = sxth(r5_1 - u32(arg0->half_0));
                    guest::cpu()->r[1] = r1;
                    return r0_5;
                }
            } else {
                u32 r0_4 = r7_1 - r6_1;
                r1 = r5_1 - r0_4;
                arg0->half_0 = u16(r0_4);
                if (s32(sxth(r1)) < 0) {
                    r0_5 = sxth(r5_1 - u32(arg0->half_0));
                    guest::cpu()->r[1] = r1;
                    return r0_5;
                }
            }
            arg0->half_0 = u16(r5_1);
        }
    }
    r0_5 = sxth(r5_1 - u32(arg0->half_0));
    guest::cpu()->r[1] = r1;
    return r0_5;
}

}  // namespace d_0056af2c
GUEST_EXPORT_FRAMED(0x0056af2c, d_0056af2c::f_0056af2c, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0056b288: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056b288 {

struct __attribute__((packed)) Object_0056b288_0 {
    float float_0;
};
GUEST_OFFSET(Object_0056b288_0, float_0, 0x0);


void f_0056b288(gptr<Object_0056b288_0> arg0, float S0, float S1, float S2, float S3) {
    u32 fpsr = guest::cpu()->fpscr;
    u32 fpsr_3 = 0;
    float S1_2 = 0;
    float S5_1 = arg0->float_0;
    float S6 = 0.0f;
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S5_1, S0);  // (from the original)
    if (!(fpsr >> 0x1e & 1)) {  // (from the original)
        float S4_1 = (S0 - S5_1) * S1;
        u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S4_1, S3);  // (from the original)
        if (!(S4_1 >= S3)) {
            float S1_1 = -S3;
            fpsr_1 = fpsr_1 & 0xfffffffu | vfp_cmpf(S4_1, S1_1);  // (from the original)
            if (!(S4_1 <= S1_1)) {
                u32 fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S4_1, S6);  // (from the original)
                if (!(S4_1 > S6)) {
                    fpsr = fpsr_2 & 0xfffffffu | vfp_cmpf(S4_1, S1_1);  // (from the original)
                    if (fpsr >> 0x1e & 1 || fpsr >> 0x1f != (fpsr >> 0x1c & 1)) {  // (from the original)
                        goto L_56b344;
                    }
                    S1 = S5_1 - S3;
                    arg0->float_0 = S1;
                    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1, S0);  // (from the original)
                    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
                        arg0->float_0 = S1;
                        goto L_56b344;
                    }
                    goto L_56b33c;
                }
                fpsr = fpsr_2 & 0xfffffffu | vfp_cmpf(S4_1, S3);  // (from the original)
                if (fpsr >> 0x1d & 1) {  // (from the original)
                    goto L_56b344;
                }
                S1 = S5_1 + S3;
                arg0->float_0 = S1;
                fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1, S0);  // (from the original)
                if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
                    goto L_56b33c;
                }
                arg0->float_0 = S1;
                goto L_56b344;
            }
        }
        fpsr_3 = fpsr_1 & 0xfffffffu | vfp_cmpf(S4_1, S2);  // (from the original)
        S1_2 = -S2;
        if (S4_1 > S2) {
            S4_1 = S2;
        }
        fpsr = fpsr_3 & 0xfffffffu | vfp_cmpf(S4_1, S1_2);  // (from the original)
        if (!(fpsr >> 0x1d & 1)) {  // (from the original)
            S4_1 = S1_2;
        }
        arg0->float_0 = S5_1 + S4_1;
        goto L_56b344;
L_56b33c:;
        S1 = S0;
        arg0->float_0 = S1;
    }
L_56b344:;
    float S1_3 = arg0->float_0;
    float S0_1 = S0 - S1_3;
    if (!(S0_1 > S6)) {
        S0_1 = -S0_1;
    }
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_3;
}

}  // namespace d_0056b288
GUEST_EXPORT(0x0056b288, d_0056b288::f_0056b288);

// f_0056b5a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056b5a4 {

struct __attribute__((packed)) Local_0056b5a4_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0056b5a4_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0056b5a4_ea_1, word_4, 0x4);

inline guest::global<u8, 0x0095c4d2> global_0095c4d2;
inline guest::global<u32, 0x0095c4e8> global_0095c4e8;
inline guest::global<u32, 0x0095c4ec> global_0095c4ec;
inline constexpr guest::Function<0x0020d914, u32(u32)> set_byte_bits_20d914;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;

u32 f_0056b5a4(u32 r0) {
    u32 r0_1 = get_data_base(r0);
    u32 r1_1 = *global_0095c4e8;
    u32 r2_1 = *global_0095c4ec;
    gptr<Local_0056b5a4_ea_1> ea_1 = gptr<Local_0056b5a4_ea_1>(r0_1 + 0x62120u);  // (from the original)
    ea_1->word_0 = r1_1;
    ea_1->word_4 = r2_1;
    u32 r0_2 = *global_0095c4d2;
    if ((r0_2 & 1u) != 0) {
        u32 r0_3 = get_data_base(r0_2);
        set_byte_bits_20d914(r0_3 + 0x62120u);  // (from the original)
    }
    u32 r1_2 = u32(*global_0095c4d2) & ~0x10u;  // (from the original)
    *global_0095c4d2 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
    return 0x95c4d2u;  // (from the original)
}

}  // namespace d_0056b5a4
GUEST_EXPORT_FRAMED(0x0056b5a4, d_0056b5a4::f_0056b5a4, 0x4010);  // pushes {r4, lr} first, as the original

// f_0056bd04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056bd04 {

inline guest::global<u32, 0x0095c4e8> global_0095c4e8;
inline guest::global<u32, 0x0095c4ec> global_0095c4ec;
inline guest::global<u32, 0x0095c4f0> global_0095c4f0;
inline guest::global<u32, 0x0095c4f4> global_0095c4f4;
inline constexpr guest::Function<0x0056c7c8, u32(u32, u32, u32, u32)> call_0056c7c8;

u32 f_0056bd04() {
    u32 r1_1 = *global_0095c4f0;
    u32 r2_1 = *global_0095c4f4;
    *global_0095c4e8 = r1_1;
    *global_0095c4ec = r2_1;
    return call_0056c7c8(0x95c4e8u, r1_1, r2_1, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0056bd04
GUEST_EXPORT(0x0056bd04, d_0056bd04::f_0056bd04);

// f_0056bdec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056bdec {

inline guest::global<u32, 0x0095c518> global_0095c518;
inline guest::global<u32, 0x0095c51c> global_0095c51c;
inline constexpr guest::Function<0x00124130, u32(u32, u32, u32, u32)> call_00124130;

struct __attribute__((packed)) Frame_0056bdec {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0056bdec, word_0, 0x0);
GUEST_OFFSET(Frame_0056bdec, word_4, 0x4);
GUEST_SIZE(Frame_0056bdec, 0xc);

u32 f_0056bdec(u32 r0_unused, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_0056bdec> frame;  // the original's stack frame
    call_00124130(frame.at(0).addr(), r1, r2, guest::cpu()->r[3]);
    u32 r1_1 = frame->word_0;
    u32 r2_1 = frame->word_4;
    *global_0095c518 = r1_1;
    *global_0095c51c = r2_1;
    guest::cpu()->r[1] = r1_1;
    return 0x95c518u;  // (from the original)
}

}  // namespace d_0056bdec
GUEST_EXPORT_FRAMED(0x0056bdec, d_0056bdec::f_0056bdec, 0x4000);  // pushes {lr} first, as the original

// f_0056be90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056be90 {


u32 f_0056be90(u32 r0, u32 r1) {
    u32 r2 = 0x8902b6u;  // (from the original)
    u32 r3 = r0;
    u32 r12 = 0u;
    r0 = r12;
    do {
        u32 r4_1 = *gptr<u8>(r2);
        u32 zf_1 = r4_1 == r3;
        if (!zf_1 && s32(r4_1) >= s32(r3) || zf_1 && s32(u32(*gptr<u8>(r2 + 1u))) >= s32(r1)) {
            return r0;
        }
        r0 = r0 + 1u & 0xffu;  // (from the original)
        r2 += 2u;
        guest::preempt();
    } while (r0 < 0xcu);  // (from the original)
    return r12;
}

}  // namespace d_0056be90
GUEST_EXPORT_FRAMED(0x0056be90, d_0056be90::f_0056be90, 0x10);  // pushes {r4} first, as the original

// f_0056c3d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056c3d4 {

inline guest::global<u8, 0x0095c4d2> global_0095c4d2;

u32 f_0056c3d4() {
    return (u32(*global_0095c4d2) & 0x10u) >> 4;  // (from the original)
}

}  // namespace d_0056c3d4
GUEST_EXPORT(0x0056c3d4, d_0056c3d4::f_0056c3d4);

// f_0056c6d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056c6d8 {

inline guest::global<u8, 0x0095c4d2> global_0095c4d2;

u32 f_0056c6d8() {
    u32 r1_1 = u32(*global_0095c4d2) | 2u;
    *global_0095c4d2 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return 0x95c4d2u;  // (from the original)
}

}  // namespace d_0056c6d8
GUEST_EXPORT(0x0056c6d8, d_0056c6d8::f_0056c6d8);

// f_0056c6f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056c6f0 {

inline guest::global<u8, 0x0095c4d2> global_0095c4d2;

u32 f_0056c6f0() {
    return (u32(*global_0095c4d2) & 4u) >> 2;
}

}  // namespace d_0056c6f0
GUEST_EXPORT(0x0056c6f0, d_0056c6f0::f_0056c6f0);

// f_0056c76c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056c76c {


u32 f_0056c76c(u32 r0) {
    u32 r0_1 = r0 - 0x7d8u;  // (from the original)
    u32 r1_1 = u64(s64(s32(0x2aaaaaabu)) * s32(r0_1)) >> 0x20;  // (from the original)
    u32 r1_2 = u32(s32(r1_1) >> 1) - u32(s32(r1_1) >> 0x1f);  // (from the original)
    u32 r1_3 = r1_2 - (r1_2 << 2);
    guest::cpu()->r[1] = r1_3;
    return r0_1 + (r1_3 << 2) & 0xffu;  // (from the original)
}

}  // namespace d_0056c76c
GUEST_EXPORT(0x0056c76c, d_0056c76c::f_0056c76c);

// f_0056c7b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056c7b0 {

inline guest::global<u8, 0x0095c4d2> global_0095c4d2;

void f_0056c7b0() {
    *global_0095c4d2 = u8(u32(*global_0095c4d2) | 4u);
}

}  // namespace d_0056c7b0
GUEST_EXPORT(0x0056c7b0, d_0056c7b0::f_0056c7b0);

// f_0056cf34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056cf34 {

inline guest::global<u8, 0x0095c4d2> global_0095c4d2;

u32 record_is_active() {
    return (u32(*global_0095c4d2) & 8u) >> 3;
}

}  // namespace d_0056cf34
GUEST_EXPORT(0x0056cf34, d_0056cf34::record_is_active);

// f_0056cf7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056cf7c {

struct __attribute__((packed)) Local_0056cf7c_r0_6 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(Local_0056cf7c_r0_6, byte_8, 0x8);

inline guest::global<u8, 0x0095c4d2> global_0095c4d2;
inline guest::global<u32, 0x00ad56b0> global_00ad56b0;
inline guest::global<u32, 0x00ad56b4> global_00ad56b4;
inline constexpr guest::Function<0x0020d914, u32(u32, u32)> set_byte_bits_20d914;
inline constexpr guest::Function<0x002fae84, u32(u32, u32)> get_data_base;

void f_0056cf7c() {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r2_1 = *global_00ad56b0;
    u32 r0_1 = *global_00ad56b4;
    u32 r1_1 = *global_0095c4d2;
    u32 res_1 = r2_1 - 0x7dcu;  // (from the original)
    u32 nf_1 = res_1 >> 0x1f;  // (from the original)
    u32 zf_1 = res_1 == 0;
    u32 vf_1 = ((r2_1 ^ 0x7dcu) & (r2_1 ^ res_1)) >> 0x1f;  // (from the original)
    if (zf_1 || nf_1 != vf_1) {
        u32 r2_2 = sxtb(r0_1);
        nf_1 = r2_2 - 1u >> 0x1f;  // (from the original)
        zf_1 = r2_2 - 1u == 0;
        vf_1 = ((r2_2 ^ 1u) & (r2_2 ^ r2_2 - 1u)) >> 0x1f;  // (from the original)
    }
    if (zf_1 || nf_1 != vf_1) {
        u32 r2_3 = s32(r0_1 << 0x10) >> 0x18;  // (from the original)
        u32 nf_2 = r2_3 - 1u >> 0x1f;  // (from the original)
        u32 vf_2 = ((r2_3 ^ 1u) & (r2_3 ^ r2_3 - 1u)) >> 0x1f;  // (from the original)
        if (r2_3 - 1u == 0 || nf_2 != vf_2) {
            u32 r0_2 = s32(r0_1) >> 0x18;  // (from the original)
            nf_2 = r0_2 - 6u >> 0x1f;  // (from the original)
            vf_2 = ((r0_2 ^ 6u) & (r0_2 ^ r0_2 - 6u)) >> 0x1f;  // (from the original)
        }
        if (nf_2 != vf_2) {
            u32 r1_2 = r1_1 | 1u;
            *global_0095c4d2 = u8(r1_2);
            u32 r0_3 = get_data_base(0x95c4d2u, r1_2);  // (from the original)
            frame.release();
            set_byte_bits_20d914(r0_3 + 0x62120u, guest::cpu()->r[1]);  // (from the original)
            return;
        }
    }
    u32 r1_4 = r1_1 & ~1u;
    *global_0095c4d2 = u8(r1_4);
    u32 r0_5 = get_data_base(0x95c4d2u, r1_4);  // (from the original)
    gptr<Local_0056cf7c_r0_6> r0_6 = gptr<Local_0056cf7c_r0_6>(r0_5 + 0x62120u);  // (from the original)
    u32 r1_5 = u32(r0_6->byte_8) & ~1u;
    r0_6->byte_8 = u8(r1_5);
    guest::cpu()->r[1] = r1_5;
}

}  // namespace d_0056cf7c
GUEST_EXPORT(0x0056cf7c, d_0056cf7c::f_0056cf7c);

// f_0056d828: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056d828 {

struct __attribute__((packed)) Object_0056d828_1 {
    u8 unknown_0[0x2c];  // (not used here)
    u16 half_2c;
};
GUEST_OFFSET(Object_0056d828_1, half_2c, 0x2c);

struct __attribute__((packed)) Local_0056d828_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0056d828_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0056d828_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0056d828_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0056d828_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_0056d828_ea_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0056d828_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_0056d828_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_0056d828_ea_2, word_c, 0xc);

struct __attribute__((packed)) Local_0056d828_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0056d828_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_0056d828_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_0056d828_ea_3, word_8, 0x8);

inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> is_villager_record;
inline constexpr guest::Function<0x0056d874, u32(u32, u32)> call_0056d874;

struct __attribute__((packed)) Frame_0056d828 {
    u16 half_0;
    u8 unknown_2[0xe];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0056d828, half_0, 0x0);
GUEST_SIZE(Frame_0056d828, 0x10);

void f_0056d828(u32 r0, gptr<Object_0056d828_1> arg1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0056d828> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0056d828_ea_1> ea_1 = gptr<Local_0056d828_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r14;
    u32 r0_1 = is_villager_record(arg1.addr(), arg1.addr(), guest::cpu()->r[2], r3);
    if (r0_1 != 0) {
        frame->half_0 = arg1->half_2c;
        call_0056d874(r0, frame.at(0).addr());
        gptr<Local_0056d828_ea_2> ea_2 = gptr<Local_0056d828_ea_2>(frame.at(0).addr());
        u32 r4_1 = ea_2->word_4;
        u32 r5_1 = ea_2->word_8;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_1;
        return;
    }
    u32 r1_2 = *gptr<u32>(*gptr<u32>(r0) + 0x1cu);  // (from the original)
    gptr<Local_0056d828_ea_3> ea_3 = gptr<Local_0056d828_ea_3>(frame.at(4).addr());
    u32 r4_2 = ea_3->word_0;
    u32 r5_2 = ea_3->word_4;
    r14 = ea_3->word_8;
    // virtual function 7 of r0
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    frame.release();
    guest::call_address<u32>(r1_2, r0, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_0056d828
GUEST_EXPORT(0x0056d828, d_0056d828::f_0056d828);

// f_0056d9cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056d9cc {

inline guest::global<u32, 0x0095debc> global_0095debc;
inline constexpr guest::Function<0x005ca3b0, u32(u32, u32, u32, u32)> signed_byte_88d8e0;
inline constexpr guest::Function<0x0075c0ec, u32(u32, u32, u32, u32)> script__WordRes__WordRes_0075c0ec;

void f_0056d9cc(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = signed_byte_88d8e0(r1, r1, r2, r3);
    if (r0_1 + 1u != 0) {
        u32 r0_2 = *global_0095debc;
        frame.release();
        script__WordRes__WordRes_0075c0ec(r0_2, r0, 0x56da14u, r0_1);
        return;  // (from the original)
    }
    u32 r1_1 = *gptr<u32>(*gptr<u32>(r0) + 0x1cu);  // (from the original)
    // virtual function 7 of r0
    frame.release();
    guest::call_address<u32>(r1_1, r0, r1_1, guest::cpu()->r[2], r0_1);
    return;
}

}  // namespace d_0056d9cc
GUEST_EXPORT(0x0056d9cc, d_0056d9cc::f_0056d9cc);

// f_0056daa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056daa8 {

inline guest::global<u32, 0x0095debc> global_0095debc;
inline constexpr guest::Function<0x0075c0ec, u32(u32, u32, u32, u32)> script__WordRes__WordRes_0075c0ec;

u32 f_0056daa8(u32 r0, u32 r1) {
    return script__WordRes__WordRes_0075c0ec(*global_0095debc, r0, 0x56dac0u, r1);  // (from the original)
}

}  // namespace d_0056daa8
GUEST_EXPORT(0x0056daa8, d_0056daa8::f_0056daa8);

// f_0056e5c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056e5c4 {

inline guest::global<u32, 0x0094edd8> global_0094edd8;
inline guest::global<u32, 0x00952a18> global_00952a18;
inline constexpr guest::Function<0x0068eaf0, u32(u32, u32)> call_0068eaf0;
inline constexpr guest::Function<0x0068ec3c, u32(u32, u32)> call_0068ec3c;
inline constexpr guest::Function<0x00748534, u32(u32, u32)> FurnitureRef__has_byte_19_class_4_or_5;

u32 f_0056e5c4(gptr<AcFtr> arg0, u32 r1, float S0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r5_1 = r1;
    if (arg0->byte_5ec != 2u && *global_0094edd8 != 0) {
        u32 r0_1 = arg0->word_5f0;
        if (r0_1 != 0) {
            u32 r0_2 = FurnitureRef__has_byte_19_class_4_or_5(r0_1, r1);
            r1 = guest::cpu()->r[1];
            S0 = guest::cpu()->s[0];
            if (r0_2 != 0) {
                if (arg0->byte_7fd == 1u) {
                    return 0u;
                }
                u32 r1_1 = s16(arg0->half_2e);
                u32 r0_3 = call_0068ec3c(r5_1, r1_1);
                float S0_1 = std::bit_cast<float>(*global_00952a18);
                guest::cpu()->s[0] = S0_1;
                u32 r0_4 = call_0068eaf0(r5_1, guest::cpu()->r[1]);
                return r0_4 | r0_3;
            }
        }
        u32 r0_6 = arg0->word_5f0;
        if (r0_6 != 0) {
            if ((u32(*gptr<u8>(r0_6 + 0x1cu)) >> 2u & 1u) == 0) {  // (from the original)
                guest::cpu()->r[1] = r1;
                guest::cpu()->s[0] = S0;
                return 0u;
            }
        }
        float S0_3 = std::bit_cast<float>(*global_00952a18);
        guest::cpu()->s[0] = S0_3;
        frame.release();
        return call_0068eaf0(r5_1, r1);
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return 0u;
}

}  // namespace d_0056e5c4
GUEST_EXPORT(0x0056e5c4, d_0056e5c4::f_0056e5c4);

// f_0056e6a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056e6a8 {

struct __attribute__((packed)) Object_0056e6a8_0 {
    u8 unknown_0[0x300];  // (not used here)
    u32 word_300;
};
GUEST_OFFSET(Object_0056e6a8_0, word_300, 0x300);


void f_0056e6a8(gptr<Object_0056e6a8_0> arg0) {
    u32 r0_1 = arg0->word_300;
    if (r0_1 == 0) {
        return;
    }
    u32 r2_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x3cu);  // (from the original)
    // virtual function 15 of r0_1
    guest::call_address<u32>(r2_1, r0_1, guest::cpu()->r[1], r2_1, guest::cpu()->r[3]);
}

}  // namespace d_0056e6a8
GUEST_EXPORT(0x0056e6a8, d_0056e6a8::f_0056e6a8);

// f_0056f1b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056f1b8 {

struct __attribute__((packed)) Local_0056f1b8_r0_4 {
    u8 unknown_0[0x1b8];  // (not used here)
    float float_1b8;
    u8 unknown_1bc[0x4];  // (not used here)
    float float_1c0;
};
GUEST_OFFSET(Local_0056f1b8_r0_4, float_1b8, 0x1b8);
GUEST_OFFSET(Local_0056f1b8_r0_4, float_1c0, 0x1c0);

inline constexpr guest::Function<0x006ef0a0, u32(u32, u32)> call_006ef0a0;
inline constexpr guest::Function<0x006ef108, u32(u32, u32, u32, u32)> call_006ef108;

struct __attribute__((packed)) Frame_0056f1b8 {
    u32 word_0;
    u8 unknown_4[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0056f1b8, word_0, 0x0);
GUEST_SIZE(Frame_0056f1b8, 0x10);

void f_0056f1b8(gptr<AcFtr> arg0, u32 r1, u32 r2_unused, u32 r3, float S0, float S1) {
    guest::StackFrameOf<Frame_0056f1b8> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r12_1 = 0;
    u32 r3_2 = 0;
    u32 r0_2 = 0;
    gptr<Local_0056f1b8_r0_4> r0_4 = gptr<Local_0056f1b8_r0_4>(0u);
    u32 r2_2 = 0;
    float S1_1 = 0;
    float S0_1 = 0;
    float S2_1 = 0;
    frame->word_0 = r3;
    u32 r0_1 = arg0->half_764;
    if ((r0_1 >> 4u & 1u) == 0 || (r0_1 >> 3u & 1u) == 0 || arg0->byte_7fd == 1u) {
        return;
    }
    u32 r3_1 = arg0->byte_5f8;
    if (r3_1 != 3u && r3_1 != 4u && r3_1 != 5u) {
        if ((r0_1 >> 0xdu & 1u) == 0) {  // (from the original)
            if ((r0_1 >> 0xeu & 1u) == 0) {  // (from the original)
                goto L_56f28c;
            }
        }
    }
    *gptr<u16>((r0 + 0x700u) + 0x64u) = u16(r0_1 & ~0x4000u);  // (from the original)
    r12_1 = arg0->word_5c4;
    r3_2 = 1u;
    if (r12_1 == 0) {
        return;
    }
    r0_2 = arg0->word_5f0;
    if (r0_2 != 0) {
        u32 r0_3 = u32(*gptr<u8>(r0_2 + 0x1bu)) >> 2u & 3u;  // (from the original)
        if (r0_3 >= 4u || r0_3 == 0) {
            r3_2 = 0x1bu;  // (from the original)
            goto L_56f268;
        }
        if (r0_3 == 2u) {
            goto L_56f268;
        }
    }
    r3_2 = 0u;
L_56f268:;
    frame->word_0 = r3_2;
    r0_4 = gptr<Local_0056f1b8_r0_4>(r0 + 0x400u);  // (from the original)
    r2_2 = s16(arg0->half_2e);
    S1_1 = r0_4->float_1c0;
    S0_1 = r0_4->float_1b8;
    S2_1 = std::bit_cast<float>(*gptr<u32>(r1 + 4u));
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    call_006ef108(r12_1, r1, r2_2, 0u);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
L_56f28c:;
    u32 r0_5 = arg0->word_5c4;
    if (r0_5 == 0) {
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return;
    }
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    frame.release();
    call_006ef0a0(r0_5, r1);
    return;
}

}  // namespace d_0056f1b8
GUEST_EXPORT(0x0056f1b8, d_0056f1b8::f_0056f1b8);

// f_0056f34c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056f34c {

struct __attribute__((packed)) Local_0056f34c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0056f34c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0056f34c_ea_1, word_4, 0x4);

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> read_global_byte_2;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> table_entry_has_all_bits;
inline constexpr guest::Function<0x004ea048, u32(u32)> return_constant_0x9c7a14_;
inline constexpr guest::Function<0x007455cc, u32(u32, u32)> call_007455cc;
inline constexpr guest::Function<0x0075127c, u32(u32, u32, u32, u32)> call_0075127c;

struct __attribute__((packed)) Frame_0056f34c {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0056f34c, word_0, 0x0);
GUEST_SIZE(Frame_0056f34c, 0xc);

u32 f_0056f34c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0056f34c> frame;  // the original's stack frame
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 r0_8 = 0;
    u32 r0_1 = read_global_byte_2(r0, r1, r2, r3);
    u32 r0_2 = table_entry_has_all_bits(0x20u, r0_1);  // (from the original)
    if (r0_2 == 0) {
        r0_2 = table_entry_has_all_bits(0x200u, r0_1);  // (from the original)
        if (r0_2 == 0) {
            r0_2 = table_entry_has_all_bits(0x40000000u, r0_1);  // (from the original)
            if (r0_2 == 0) {
                r0_2 = table_entry_has_all_bits(0x800000u, r0_1);  // (from the original)
                if (r0_2 == 0) {
                    r0_2 = table_entry_has_all_bits(0x10000000u, r0_1);  // (from the original)
                    if (r0_2 == 0) {
                        u32 r0_3 = *gptr<u8>(r0 + 0x5ecu);  // (from the original)
                        if (r0_3 == 2u) {
                            return 0x31u | r0_1 << 9 | 0x20000u;  // (from the original)
                        }
                        u32 r0_5 = read_global_byte_2(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                        r0_6 = table_entry_has_all_bits(8u, r0_5);
                        r1_2 = guest::cpu()->r[1];
                        if (r0_6 == 0) {
                            return r0_6;
                        }
                        frame->word_0 = r2;
                        u32 r0_7 = call_0075127c(r0, frame.at(4).addr(), frame.at(8).addr(), r1);
                        r1_2 = guest::cpu()->r[1];
                        if (r0_7 == 0) {
                            return r0_1;
                        }
                        gptr<Local_0056f34c_ea_1> ea_1 = gptr<Local_0056f34c_ea_1>(frame.at(4).addr());
                        u32 r8_1 = *gptr<u8>(r0 + 0x7b4u);  // (from the original)
                        if (r8_1 >= 2u) {
                            r8_1 = 0u;
                        }
                        r1_2 = (ea_1->word_0 & 0xfu | 0xf0u & ea_1->word_4 << 4) & ~0x100u;  // (from the original)
                        r0_8 = (0x100u & r8_1 << 8 | r1_2) & ~0x10000u & ~0xfe00u;  // (from the original)
                        guest::cpu()->r[1] = r1_2;
                        return r0_8 | r0_1 << 9;
                    }
                }
            }
        }
    }
    u32 r0_9 = return_constant_0x9c7a14_(r0_2);
    u32 r0_10 = call_007455cc(r0_9, r0);
    r1_2 = guest::cpu()->r[1];
    r0_8 = r0_10 & 0x1ffu;  // (from the original)
    return r0_8 | r0_1 << 9;
}

}  // namespace d_0056f34c
GUEST_EXPORT_FRAMED(0x0056f34c, d_0056f34c::f_0056f34c, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0056f8b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056f8b4 {

struct __attribute__((packed)) Object_0056f8b4_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0056f8b4_1, word_0, 0x0);

inline guest::global<u16, 0x008870a0> global_008870a0;
inline constexpr guest::Function<0x0023b900, u32(u32, u32, u32)> script__WordFix_33u___WordFix_0023b900;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> copy_item_002fc8e8;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> copy_item_002fc934;
inline constexpr guest::Function<0x002fcaf4, u32(u32)> Item__is_empty;
inline constexpr guest::Function<0x005d97a0, u32(u32, u32, u32, u32)> AcAutoCampEntrySignboard__virtual_68;
inline constexpr guest::Function<0x00692ad4, u32(u32, u32)> copy_global_items;
inline constexpr guest::Function<0x007559ac, u32(u32, u32)> RecordHolder__first_id;
inline constexpr guest::Function<0x00755a98, u32(u32, u32)> handle_value;

u32 AcFtr__virtual_65(u32 r0, gptr<Object_0056f8b4_1> arg1, u32 r2) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r0_2 = AcAutoCampEntrySignboard__virtual_68(r0 + 0xb0u, arg1.addr(), r2, guest::cpu()->r[3]);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r6_1 = r0_2;
    if (r0_2 == 0) {
        u32 r0_3 = RecordHolder__first_id(r2, r1_1);
        r1_1 = guest::cpu()->r[1];
        if (r0_3 == 0x60u) {  // (from the original)
            u32 r0_4 = handle_value(r2, r1_1);
            r1_1 = guest::cpu()->r[1];
            if (r0_4 == 0) {
                copy_item_002fc934(frame.at(4).addr(), 0x95bfdcu);  // (from the original)
                copy_item_002fc934(frame.at(8).addr(), 0x95bfdcu);  // (from the original)
                copy_global_items(frame.at(4).addr(), frame.at(8).addr());
                copy_item_002fc934(frame.at(0).addr(), frame.at(8).addr());
                u32 r0_10 = Item__is_empty(frame.at(0).addr());
                if (r0_10 != 0) {
                    copy_item_002fc8e8(frame.at(0).addr(), frame.at(4).addr());
                }
                r1_1 = *global_008870a0;
                u32 res_1 = (*gptr<u16>(r0 + 0xcu) == r1_1 ? u32(*gptr<s8>(r0 + 0x7a3u)) : 0u) ^ 1u;  // (from the original)
                arg1->word_0 = res_1;
                if (res_1 == 0) {
                    script__WordFix_33u___WordFix_0023b900(r0 + 0xb0u, frame.at(0).addr(), 0u);  // (from the original)
                    r1_1 = guest::cpu()->r[1];
                }
                r6_1 = 1u;
            } else if (r0_4 == 1u) {
                copy_item_002fc934(frame.at(4).addr(), 0x95bfdcu);  // (from the original)
                copy_item_002fc934(frame.at(0).addr(), 0x95bfdcu);  // (from the original)
                copy_global_items(frame.at(4).addr(), frame.at(0).addr());
                u32 r0_17 = Item__is_empty(frame.at(0).addr());
                arg1->word_0 = r0_17;
                script__WordFix_33u___WordFix_0023b900(r0 + 0xb0u, frame.at(4).addr(), 0u);  // (from the original)
                r1_1 = guest::cpu()->r[1];
                if (arg1->word_0 == 0) {
                    script__WordFix_33u___WordFix_0023b900(r0 + 0xb0u, frame.at(0).addr(), 1u);  // (from the original)
                    r1_1 = guest::cpu()->r[1];
                }
                r6_1 = 1u;
            } else {
                r6_1 = 1u;
                arg1->word_0 = 0;
            }
        }
        r0_2 = r6_1;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_0056f8b4
GUEST_EXPORT_FRAMED(0x0056f8b4, d_0056f8b4::AcFtr__virtual_65, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0056fd94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056fd94 {

struct __attribute__((packed)) Local_0056fd94_r0_2 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 byte_5;
    u8 byte_6;
    u8 byte_7;
    u8 byte_8;
};
GUEST_OFFSET(Local_0056fd94_r0_2, byte_4, 0x4);
GUEST_OFFSET(Local_0056fd94_r0_2, byte_5, 0x5);
GUEST_OFFSET(Local_0056fd94_r0_2, byte_6, 0x6);
GUEST_OFFSET(Local_0056fd94_r0_2, byte_7, 0x7);
GUEST_OFFSET(Local_0056fd94_r0_2, byte_8, 0x8);

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> copy_item_002fc934;
inline constexpr guest::Function<0x004e0cb0, u32(u32, u32)> return_constant_0x9c7ad4_;
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> call_004e9a28;
inline constexpr guest::Function<0x004ea048, u32(u32, u32, u32, u32)> return_constant_0x9c7a14_;
inline constexpr guest::Function<0x007455cc, u32(u32, u32)> call_007455cc;

struct __attribute__((packed)) Frame_0056fd94 {
    u8 unknown_0[0x4];  // (not read or written by name)
    u8 byte_4;
    u8 byte_5;
    u8 unknown_6[0xa];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0056fd94, byte_4, 0x4);
GUEST_OFFSET(Frame_0056fd94, byte_5, 0x5);
GUEST_SIZE(Frame_0056fd94, 0x10);

void f_0056fd94(gptr<AcFtr> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0056fd94> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r6 = r0;
    u32 r0_1 = arg0->byte_7b4;
    if (r0_1 < 2u && r0_1 == 1u) {
        gptr<Local_0056fd94_r0_2> r0_2 = gptr<Local_0056fd94_r0_2>(frame.at(0).addr());
        copy_item_002fc934(r0_2.addr(), r6 + 0x5e4u, r2, r3);  // (from the original)
        r0_2->byte_4 = arg0->byte_5e8;
        r0_2->byte_5 = arg0->byte_5e9;
        r0_2->byte_6 = arg0->byte_5ea;
        r0_2->byte_7 = arg0->byte_5eb;
        u32 r1_1 = arg0->byte_5ec;
        r0_2->byte_8 = u8(r1_1);
        u32 r0_3 = return_constant_0x9c7ad4_(r0_2.addr(), r1_1);
        u32 r2_2 = frame->byte_5;
        u32 r1_2 = frame->byte_4;
        u32 r0_4 = call_004e9a28(r0_3, r1_2, r2_2, 0u);
        r1 = guest::cpu()->r[1];
        u32 r4 = r0_4;
        if (r0_4 != 0) {
            u32 r0_5 = *gptr<u8>(r4 + 0x7b4u);  // (from the original)
            if (r0_5 >= 2u || r0_5 == 0) {
                u32 r0_6 = return_constant_0x9c7a14_(r0_5, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
                u32 r0_7 = call_007455cc(r0_6, r4);
                r1 = *gptr<s16>(r6 + 0x60cu);  // (from the original)
                if (r0_7 == r1) {
                    u32 r5 = r4 + 0x61cu;  // (from the original)
                    u32 r0_8 = return_constant_0x9c7a14_(r0_7, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
                    r0 = call_007455cc(r0_8, r6);
                    r3 = guest::cpu()->r[3];
                    r2 = r5 + 0x10u;  // (from the original)
                    r1 = r5;
                    if (r5 < r2) {
                        do {
                            r3 = *gptr<u32>(r1);
                            if (r3 == r0) {
                                goto L_56fed4;
                            }
                            r1 += 4u;
                            guest::preempt();
                        } while (r2 > r1);
                    }
                    u32 cf_1 = *gptr<u32>(r5 + 0x10u) >= 4u;  // (from the original)
                    if (!cf_1) {
                        r4 = r5;
                        cf_1 = r5 >= r2;
                    }
                    if (!cf_1) {
                        do {
                            u32 r0_9 = *gptr<u32>(r4);
                            if (s32(r0_9) < 0) {
                                u32 r0_10 = return_constant_0x9c7a14_(r0_9, r1, r2, r3);
                                u32 r0_11 = call_007455cc(r0_10, r6);
                                r1 = guest::cpu()->r[1];
                                *gptr<u32>(r4) = r0_11;
                                *gptr<u32>(r5 + 0x10u) = *gptr<u32>(r5 + 0x10u) + 1u;  // (from the original)
                                break;
                            }
                            r4 += 4u;
                            guest::preempt();
                        } while (r4 < r2);
                    }
                }
            }
        }
L_56fed4:;
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0056fd94
GUEST_EXPORT_FRAMED(0x0056fd94, d_0056fd94::f_0056fd94, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original
