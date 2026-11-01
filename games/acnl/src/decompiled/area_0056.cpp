// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
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
GUEST_OFFSET(Object_005601b8_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005601b8_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_005601b8_0, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_005601b8_0, byte_3, 0x3);  // (from the original)

inline guest::global<u32, 0x00560290> global_00560290;  // (from the original)
inline guest::global<u32, 0x00560294> global_00560294;  // (from the original)
inline guest::global<u32, 0x00560298> global_00560298;  // (from the original)

void f_005601b8(gptr<Object_005601b8_0> arg0, float S0, float S1, float S2, float S3) {
    u32 fpsr = guest::cpu()->fpscr;
    float S5_1 = std::bit_cast<float>(*global_00560290);
    float S4_1 = std::bit_cast<float>(*global_00560294);
    u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S0, S5_1);  // (from the original)
    if (!(fpsr_1 >> 0x1d & 1)) {  // (from the original)
        S0 = S5_1;
        goto L_5601e0;
    }
    fpsr_1 = fpsr_1 & 0xfffffffu | vfp_cmpf(S0, S4_1);  // (from the original)
    if (!(fpsr_1 >> 0x1e & 1) && fpsr_1 >> 0x1f == (fpsr_1 >> 0x1c & 1)) {  // (from the original)
        S0 = S4_1;
    }
L_5601e0:;
    float S6_1 = std::bit_cast<float>(*global_00560298);
    float S0_1 = S1;
    arg0->byte_3 = u8(std::bit_cast<u32>(std::bit_cast<float>(vcvt_uz_f(S0 * S6_1))));
    u32 fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S0_1, S5_1);  // (from the original)
    if (!(fpsr_2 >> 0x1d & 1)) {  // (from the original)
        S0_1 = S5_1;
        goto L_560218;
    }
    S1 = S4_1;
    fpsr_2 = fpsr_2 & 0xfffffffu | vfp_cmpf(S0_1, S1);  // (from the original)
    if (!(fpsr_2 >> 0x1e & 1) && fpsr_2 >> 0x1f == (fpsr_2 >> 0x1c & 1)) {  // (from the original)
        S0_1 = S4_1;
    }
L_560218:;
    float S0_2 = S2;
    arg0->byte_2 = u8(std::bit_cast<u32>(std::bit_cast<float>(vcvt_uz_f(S0_1 * S6_1))));
    u32 fpsr_3 = fpsr_2 & 0xfffffffu | vfp_cmpf(S0_2, S5_1);  // (from the original)
    if (!(fpsr_3 >> 0x1d & 1)) {  // (from the original)
        S0_2 = S5_1;
        goto L_56024c;
    }
    S1 = S4_1;
    fpsr_3 = fpsr_3 & 0xfffffffu | vfp_cmpf(S0_2, S1);  // (from the original)
    if (!(fpsr_3 >> 0x1e & 1) && fpsr_3 >> 0x1f == (fpsr_3 >> 0x1c & 1)) {  // (from the original)
        S0_2 = S4_1;
    }
L_56024c:;
    float S0_3 = S3;
    arg0->byte_1 = u8(std::bit_cast<u32>(std::bit_cast<float>(vcvt_uz_f(S0_2 * S6_1))));
    u32 fpsr_4 = fpsr_3 & 0xfffffffu | vfp_cmpf(S0_3, S5_1);  // (from the original)
    if (!(fpsr_4 >> 0x1d & 1)) {  // (from the original)
        float S0_4 = std::bit_cast<float>(vcvt_uz_f(S5_1 * S6_1));
        u32 r1_4 = std::bit_cast<u32>(S0_4);
        arg0->byte_0 = u8(r1_4);
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->s[0] = S0_4;
        guest::cpu()->s[1] = S1;
        return;
    }
    u32 fpsr_5 = fpsr_4 & 0xfffffffu | vfp_cmpf(S0_3, S4_1);  // (from the original)
    if (!(fpsr_5 >> 0x1e & 1) && fpsr_5 >> 0x1f == (fpsr_5 >> 0x1c & 1)) {  // (from the original)
        S0_3 = S4_1;
    }
    float S0_5 = std::bit_cast<float>(vcvt_uz_f(S0_3 * S6_1));
    u32 r1_5 = std::bit_cast<u32>(S0_5);
    arg0->byte_0 = u8(r1_5);
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_005601b8
GUEST_EXPORT(0x005601b8, d_005601b8::f_005601b8);

// f_0056029c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056029c {

struct __attribute__((packed)) Object_0056029c_1 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0056029c_1, byte_0, 0x0);  // (from the original)


void f_0056029c(u32 r0, gptr<Object_0056029c_1> arg1, u32 r2) {
    u32 r1 = arg1.addr();
    u32 r5 = 0;
    u32 r3_3 = 0;
    u32 r6_3 = 0;
    u32 r4 = 0u;
    if (u32(arg1->byte_0) != 0) {
        r5 = 0u;
        goto L_5602c0;
    }
    guest::cpu()->r[1] = r1;
    return;
L_5602bc:;
    r1 += 1u;
L_5602c0:;
    u32 r3_1 = s32(s8(*gptr<u8>(r1)));
    if (r3_1 == 0x2cu || r3_1 == 0x20u || r3_1 == 9u || r3_1 == 0xau) {  // (from the original)
        guest::preempt();
        goto L_5602bc;
    }
    u32 r12 = r1;
    r1 = *gptr<u8>(r1);
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    *gptr<u32>(r0 + (r4 << 2)) = r12;
    r4 += 1u;
    r1 = r12;
L_5602f8:;
    u32 r3_2 = s32(s8(*gptr<u8>(r1)));
    if (r3_2 != 0x2cu && r3_2 != 0x3du) {  // (from the original)
        if (r3_2 != 0) {
            r1 += 1u;
            guest::preempt();
            goto L_5602f8;
        }
    }
    u32 r3 = r1 - 1u;
L_560318:;
    u32 r6_1 = s32(s8(*gptr<u8>(r3)));
    if (r6_1 == 0x20u || r6_1 == 9u || r6_1 == 0xau) {  // (from the original)
        u32 r6_2 = u64(0u) + ~0u + u32(r3 >= r12);
        u32 res_1 = u64(0u) + ~r6_2 + u32(0u >= r3 - r12);
        if (res_1 >> 0x1f != ((0u ^ r6_2) & (0u ^ res_1)) >> 0x1f) {  // (from the original)
            r3 -= 1u;
            guest::preempt();
            goto L_560318;
        }
    }
    u32 r12_1 = s32(s8(*gptr<u8>(r1)));
    *gptr<u8>(r3 + 1u) = u8(r5);
    if (r12_1 == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    if (r12_1 == 0x3du) {  // (from the original)
        r12 = r1 + 1u;
        r1 = r12;
    } else {
        goto L_5603d4;
    }
L_560370:;
    r3_3 = s32(s8(*gptr<u8>(r1)));
    if (r3_3 != 0x2cu && r3_3 != 0x3du) {  // (from the original)
        if (r3_3 != 0) {
            r1 += 1u;
            guest::preempt();
            goto L_560370;
        }
    }
    r3 = r1 - 1u;
L_560390:;
    r6_3 = s32(s8(*gptr<u8>(r3)));
    if (r6_3 == 0x20u || r6_3 == 9u || r6_3 == 0xau) {  // (from the original)
        u32 r6_4 = u64(0u) + ~0u + u32(r3 >= r12);
        u32 res_2 = u64(0u) + ~r6_4 + u32(0u >= r3 - r12);
        if (res_2 >> 0x1f != ((0u ^ r6_4) & (0u ^ res_2)) >> 0x1f) {  // (from the original)
            r3 -= 1u;
            guest::preempt();
            goto L_560390;
        }
    }
    if (u32(*gptr<u8>(r1)) == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
L_5603d4:;
    if (s32(r2) <= s32(r4)) {
        guest::cpu()->r[1] = r1;
        return;
    }
    r1 += 1u;
    if (u32(*gptr<u8>(r1)) != 0) {
        guest::preempt();
        goto L_5602c0;
    }
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0056029c
GUEST_EXPORT_FRAMED(0x0056029c, d_0056029c::f_0056029c, 0x7f0);  // pushes {r4, r5, r6, r7, r8, r9, r10} first, as the original

// f_005603f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005603f0 {

inline guest::global<u32, 0x009753a8> global_009753a8;  // (from the original)
inline constexpr guest::Function<0x0012bfec, u32(u32, u32, u32)> call_0012bfec;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)

u32 f_005603f0(u32 r0_unused, u32 r1, u32 r2) {
    if ((*global_009753a8 & 1u) != 0) {
        return 0xae544cu;  // (from the original)
    }
    u32 r0_1 = call_002fe7dc(0x9753a8u, r1, r2, guest::cpu()->r[3]);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    if (r0_1 == 0) {
        return 0xae544cu;  // (from the original)
    }
    call_0012bfec(0xae544cu, r1_1, r2_1);  // (from the original)
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
GUEST_OFFSET(Object_00560650_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00560650_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00560650_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00560650_r3_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00560650_r3_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00560650_r3_1, word_4, 0x4);  // (from the original)


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
    return;
}

}  // namespace d_00560650
GUEST_EXPORT(0x00560650, d_00560650::f_00560650);

// f_00560688: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00560688 {

struct __attribute__((packed)) Object_00560688_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00560688_0, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Object_00560688_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_00560688_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00560688_1, word_4, 0x4);  // (from the original)


void f_00560688(gptr<Object_00560688_0> arg0, gptr<Object_00560688_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2_1 = arg0->word_4;
    arg0->word_4 = r1;
    arg1->word_0 = r0;
    arg1->word_4 = r2_1;
    if (r2_1 != 0) {
        *gptr<u32>(r2_1) = r1;
    }
    return;
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
    return;
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
GUEST_OFFSET(Object_00560930_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00560930_0, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00560930_r0_3 {
    u8 unknown_0[0x78];  // (not used here)
    u8 byte_78;
    u8 unknown_79[0x3];  // (not used here)
    u32 word_7c;
};
GUEST_OFFSET(Local_00560930_r0_3, byte_78, 0x78);  // (from the original)
GUEST_OFFSET(Local_00560930_r0_3, word_7c, 0x7c);  // (from the original)

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_00560930(gptr<Object_00560930_0> arg0) {
    u32 r0 = arg0.addr();
    arg0->byte_0 = 0;
    arg0->word_4 = 0;
    u32 r0_2 = call_00301d0c((r0 + 4u) + 4u, 0x11e460u, 0x14u, 4u);  // (from the original)
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
GUEST_OFFSET(Local_00560a20_r5_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0013bb00, u32(u32, u32)> call_0013bb00;  // (from the original)
inline constexpr guest::Function<0x0013efb4, u32(u32, u32)> call_0013efb4;  // (from the original)
inline constexpr guest::Function<0x0055f1ac, u32(u32, u32, u32, u32)> call_0055f1ac;  // (from the original)
inline constexpr guest::Function<0x00560bec, u32(u32, u32, u32, u32)> call_00560bec;  // (from the original)

u32 f_00560a20(gptr<sead__TaskBase> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    u32 r4 = r0;
    u32 r1 = 0x905c88u;  // (from the original)
    u32 zf_1 = arg0->word_5c == 0;
    arg0->word_0 = r1;
    if (zf_1) {
        goto L_560a60;
    }
L_560a3c:;
    r0_1 = *gptr<u32>(r4 + 0x14u);  // (from the original)
    if (r0_1 == 0) {
        goto L_560a60;
    }
    r1_1 = *gptr<u32>(r0_1 + 0x10u);  // (from the original)
    r0_2 = *gptr<u32>(r4 + 0x5cu);  // (from the original)
    call_0055f1ac(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::preempt();
    goto L_560a3c;
L_560a60:;
    *gptr<u8>(r4 + 0x60u) = 7;  // (from the original)
    call_00560bec(r4 + 0x10u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    gptr<Local_00560a20_r5_1> r5_1 = gptr<Local_00560a20_r5_1>(*gptr<u32>(r4 + 0x40u));  // (from the original)
    u32 r0_4 = r4 + 0x34u;  // (from the original)
    if (r5_1.addr() != 0) {
        *gptr<u32>(r0_4 + 0xcu) = 0;  // (from the original)
        call_0013bb00(r0_4, 0u);
        r1_2 = guest::cpu()->r[1];
        r5_1->word_8 = r5_1->word_8 - 1u;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0013efb4(r4, r1_2);
}

}  // namespace d_00560a20
GUEST_EXPORT(0x00560a20, d_00560a20::f_00560a20);

// f_00560aa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00560aa8 {

struct __attribute__((packed)) Object_00560aa8_0 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_00560aa8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00560aa8_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00560aa8_0, word_c, 0xc);  // (from the original)


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
    return;
}

}  // namespace d_00560aa8
GUEST_EXPORT(0x00560aa8, d_00560aa8::f_00560aa8);

// f_00560b6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00560b6c {

inline constexpr guest::Function<0x00560aa8, u32(u32, u32)> call_00560aa8;  // (from the original)

void f_00560b6c(u32 r0, u32 r1) {
    call_00560aa8(r1, r1);
    u32 r0_1 = *gptr<u32>(r0 + 4u);
    if (r0_1 == 0) {
        *gptr<u32>(r0 + 4u) = r1;
        *gptr<u32>(r1) = r0;
        return;
    }
    *gptr<u32>(r1 + 8u) = r0_1;
    *gptr<u32>(*gptr<u32>(r0 + 4u) + 0xcu) = r1;  // (from the original)
    *gptr<u32>(r0 + 4u) = r1;
    *gptr<u32>(r1) = r0;
    return;
}

}  // namespace d_00560b6c
GUEST_EXPORT_FRAMED(0x00560b6c, d_00560b6c::f_00560b6c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00560bec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00560bec {

struct __attribute__((packed)) Local_00560bec_r4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00560bec_r4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00560bec_r4_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00560bec_r4_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00560bec_r4_1, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x00560aa8, u32(u32, u32, u32, u32)> call_00560aa8;  // (from the original)
inline constexpr guest::Function<0x00560bac, u32(u32)> call_00560bac;  // (from the original)

void f_00560bec(u32 r0) {
    u32 r6 = r0;
    call_00560aa8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r5 = *gptr<u32>(r6 + 4u);
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
    return;
}

}  // namespace d_00560bec
GUEST_EXPORT_FRAMED(0x00560bec, d_00560bec::f_00560bec, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00560e80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00560e80 {

inline constexpr guest::Function<0x0013efb4, u32(u32, u32)> call_0013efb4;  // (from the original)
inline constexpr guest::Function<0x0054488c, u32(u32, u32, u32, u32)> call_0054488c;  // (from the original)
inline constexpr guest::Function<0x00560a20, u32(u32, u32, u32, u32)> call_00560a20;  // (from the original)

u32 f_00560e80(gptr<sead__UlcdTask> arg0) {
    u32 r0 = arg0.addr();
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    u32 r5_1 = r0 + 0x15cu;  // (from the original)
    arg0->word_0 = 0x905ce8;  // (from the original)
    arg0->word_15c = 0x9047b0;  // (from the original)
    call_0054488c(r5_1, 0x905ce8u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_1 = call_0013efb4(r5_1, guest::cpu()->r[1]);
    *gptr<u32>(r0_1 - 0x15cu) = 0x9046a0;  // (from the original)
    u32 r0_2 = r0_1 - 0x50u;  // (from the original)
    *gptr<u32>(r0_2) = 0x9047b0;  // (from the original)
    call_0054488c(r0_2, 0x9046a0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_3 = call_0013efb4(r0_2, guest::cpu()->r[1]);
    u32 r5_2 = r0_3 - 0x50u;  // (from the original)
    *gptr<u32>(r0_3 - 0x50u) = 0x9047b0;  // (from the original)
    call_0054488c(r5_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_4 = call_0013efb4(r5_2, guest::cpu()->r[1]);
    u32 r5_3 = r0_4 - 0x50u;  // (from the original)
    *gptr<u32>(r0_4 - 0x50u) = 0x9047b0;  // (from the original)
    call_0054488c(r5_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_5 = call_0013efb4(r5_3, guest::cpu()->r[1]);
    u32 r1_7 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_00560a20(r0_5 - 0x6cu, r1_7, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00560e80
GUEST_EXPORT(0x00560e80, d_00560e80::f_00560e80);

// f_00561310: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00561310 {

inline guest::global<u32, 0x00561354> global_00561354;  // (from the original)
inline guest::global<u32, 0x00561358> global_00561358;  // (from the original)
inline guest::global<u8, 0x00975328> global_00975328;  // (from the original)
inline constexpr guest::Function<0x00561264, u32(u32, u32, u32, u32)> call_00561264;  // (from the original)

void f_00561310(gptr<sead__Viewport> arg0) {
    u32 r0 = arg0.addr();
    float S0_1 = std::bit_cast<float>(*global_00561354);
    arg0->word_4 = std::bit_cast<u32>(S0_1);
    arg0->word_8 = std::bit_cast<u32>(S0_1);
    float S0_2 = std::bit_cast<float>(*global_00561358);
    arg0->word_c = std::bit_cast<u32>(S0_2);
    arg0->word_10 = std::bit_cast<u32>(S0_2);
    arg0->word_0 = 0x905dd4;  // (from the original)
    arg0->byte_14 = u8(u32(*global_00975328));
    guest::cpu()->s[0] = S0_2;
    call_00561264(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_00561310
GUEST_EXPORT_FRAMED(0x00561310, d_00561310::f_00561310, 0x4010);  // pushes {r4, lr} first, as the original

// f_005615e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005615e4 {

inline constexpr guest::Function<0x00561900, u32(u32, u32, u32, u32)> call_00561900;  // (from the original)

u32 f_005615e4(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    *frame.at<u32>(0) = *frame.at<u32>(8);
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
GUEST_OFFSET(Object_00561ba4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00561ba4_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00561ba4_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00561ba4_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00561ba4_0, word_10, 0x10);  // (from the original)


void f_00561ba4(gptr<Object_00561ba4_0> arg0) {
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    arg0->word_c = 0;
    arg0->word_10 = 0x1000;  // (from the original)
    return;
}

}  // namespace d_00561ba4
GUEST_EXPORT(0x00561ba4, d_00561ba4::f_00561ba4);

// f_00564804: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00564804 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x0056549c, u32(u32, u32, u32, u32)> call_0056549c;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)

u32 f_00564804(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = r0;
    u32 r5 = r1;
    u32 r6 = r2;
    u32 r0_1 = call_006a5e34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        return ~0u;
    }
    u32 r0_2 = call_002f74c8(r0_1, r1, r2_1, r3_1);
    u32 r0_3 = call_0056549c(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    u32 r7 = r0_3;
    if (u32(*gptr<u8>(r0_3 + (r6 << 4) + r5)) == r4) {
        r2 = 0u;
        r1 = r2;
    } else {
        guest::cpu()->r[1] = r1;
        return ~0u;
    }
    do {
        r0 = 0u;
        r3 = r7 + (r1 << 4);
        do {
            if (u32(*gptr<u8>(r3 + r0)) != r4) {
                goto L_564870;
            }
            if (r5 != r0 || r6 != r1) {
                r2 += 1u;
                goto L_564870;
            }
            guest::cpu()->r[1] = r1;
            return r2;
L_564870:;
            r0 += 1u;
            guest::preempt();
        } while (s32(r0) < 0x10);  // (from the original)
        r1 += 1u;
        guest::preempt();
    } while (s32(r1) < 0x10);  // (from the original)
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
GUEST_OFFSET(Object_00565668_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00565668_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00565668_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_00565668_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00565668_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00565668_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00565668_1, word_8, 0x8);  // (from the original)


void f_00565668(gptr<Object_00565668_0> arg0, gptr<Object_00565668_1> arg1, float S0, float S1, float S2) {
    u32 fpsr = guest::cpu()->fpscr;
    float S6_2 = 0;
    float S5_3 = 0;
    float S3_2 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S1_2 = 0;
    float S2_3 = 0;
    float S0_2 = 0;
    float S1_3 = 0;
    float S0_3 = 0;
    float S6_1 = std::bit_cast<float>(arg0->word_0);
    float S5_1 = std::bit_cast<float>(arg1->word_0);
    u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S6_1, S5_1);  // (from the original)
    if (!(fpsr_1 >> 0x1e & 1)) {  // (from the original)
        goto L_5656a4;
    }
    fpsr_1 = fpsr_1 & 0xfffffffu | vfp_cmpf(std::bit_cast<float>(arg0->word_4), std::bit_cast<float>(arg1->word_4));  // (from the original)
    if (!(fpsr_1 >> 0x1e & 1)) {  // (from the original)
        goto L_5656a4;
    }
    fpsr_1 = fpsr_1 & 0xfffffffu | vfp_cmpf(std::bit_cast<float>(arg0->word_8), std::bit_cast<float>(arg1->word_8));  // (from the original)
    if (fpsr_1 >> 0x1e & 1) {  // (from the original)
        S1_2 = std::bit_cast<float>(arg0->word_0) - std::bit_cast<float>(arg1->word_0);
        S2_3 = std::bit_cast<float>(arg0->word_4) - std::bit_cast<float>(arg1->word_4);
        S0_2 = std::bit_cast<float>(arg0->word_8) - std::bit_cast<float>(arg1->word_8);
        S1_3 = S1_2 * S1_2 + S2_3 * S2_3 + S0_2 * S0_2;
        S0_3 = sqrtf(S1_3);
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_3;
        return;
    }
L_5656a4:;
    float S5_2 = S6_1 - S5_1;
    float S3_1 = std::bit_cast<float>(arg0->word_4) - std::bit_cast<float>(arg1->word_4);
    float S4_1 = std::bit_cast<float>(arg0->word_8) - std::bit_cast<float>(arg1->word_8);
    float S7_1 = sqrtf(S5_2 * S5_2 + S3_1 * S3_1 + S4_1 * S4_1);
    u32 fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S7_1, S2);  // (from the original)
    if (fpsr_2 >> 0x1d & 1) {  // (from the original)
        S6_2 = S7_1 * S0;
        S5_3 = S5_2 * S0;
        S3_2 = S3_1 * S0;
        S0_1 = S4_1 * S0;
        if (s32(std::bit_cast<u32>(fabsf(S6_2))) > 0x34000000) {  // (from the original)
            goto L_565718;
        }
    }
    arg0->word_0 = arg1->word_0;
    arg0->word_4 = arg1->word_4;
    arg0->word_8 = arg1->word_8;
    S1_2 = std::bit_cast<float>(arg0->word_0) - std::bit_cast<float>(arg1->word_0);
    S2_3 = std::bit_cast<float>(arg0->word_4) - std::bit_cast<float>(arg1->word_4);
    S0_2 = std::bit_cast<float>(arg0->word_8) - std::bit_cast<float>(arg1->word_8);
    S1_3 = S1_2 * S1_2 + S2_3 * S2_3 + S0_2 * S0_2;
    S0_3 = sqrtf(S1_3);
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    return;
L_565718:;
    u32 fpsr_3 = fpsr_2 & 0xfffffffu | vfp_cmpf(S6_2, S1);  // (from the original)
    if (!(fpsr_3 >> 0x1e & 1) && fpsr_3 >> 0x1f == (fpsr_3 >> 0x1c & 1)) {  // (from the original)
        float S2_1 = S1 / S6_2;
        S5_3 = S5_3 * S2_1;
        S3_2 = S3_2 * S2_1;
        S0_1 = S0_1 * S2_1;
        goto L_565754;
    }
    if ((fpsr_3 & 0xfffffffu | vfp_cmpf(S6_2, S2)) >> 0x1d & 1) {  // (from the original)
        goto L_565754;
    }
    S1_1 = S2 / S6_2;
    S5_3 = S5_3 * S1_1;
    S3_2 = S3_2 * S1_1;
    S0_1 = S0_1 * S1_1;
L_565754:;
    float S2_2 = std::bit_cast<float>(arg0->word_0) - S5_3;
    float S3_3 = std::bit_cast<float>(arg0->word_4) - S3_2;
    arg0->word_8 = std::bit_cast<u32>(std::bit_cast<float>(arg0->word_8) - S0_1);
    arg0->word_0 = std::bit_cast<u32>(S2_2);
    arg0->word_4 = std::bit_cast<u32>(S3_3);
    S1_2 = std::bit_cast<float>(arg0->word_0) - std::bit_cast<float>(arg1->word_0);
    S2_3 = std::bit_cast<float>(arg0->word_4) - std::bit_cast<float>(arg1->word_4);
    S0_2 = std::bit_cast<float>(arg0->word_8) - std::bit_cast<float>(arg1->word_8);
    S1_3 = S1_2 * S1_2 + S2_3 * S2_3 + S0_2 * S0_2;
    S0_3 = sqrtf(S1_3);
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    return;
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
GUEST_OFFSET(Object_005657ac_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005657ac_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_005657ac_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_005657ac_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005657ac_1, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x00565850> global_00565850;  // (from the original)

u32 f_005657ac(gptr<Object_005657ac_0> arg0, gptr<Object_005657ac_1> arg1, float S0) {
    u32 r1 = arg1.addr();
    u32 fpsr = guest::cpu()->fpscr;
    float S1_1 = std::bit_cast<float>(arg0->word_0) - std::bit_cast<float>(arg1->word_0);
    float S2_1 = std::bit_cast<float>(arg0->word_8) - std::bit_cast<float>(arg1->word_8);
    u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S0, std::bit_cast<float>(*global_00565850));  // (from the original)
    float S3_1 = sqrtf(S1_1 * S1_1 + S2_1 * S2_1);
    if (!(fpsr_1 >> 0x1e & 1)) {  // (from the original)
        if (s32(std::bit_cast<u32>(fabsf(S3_1))) > 0x34000000) {  // (from the original)
            u32 fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S3_1, S0);  // (from the original)
            if (fpsr_2 >> 0x1d & 1 && !(fpsr_2 >> 0x1e & 1)) {  // (from the original)
                float S4_1 = S0 / S3_1;
                float S0_1 = std::bit_cast<float>(arg0->word_8) - S2_1 * S4_1;
                arg0->word_0 = std::bit_cast<u32>(std::bit_cast<float>(arg0->word_0) - S1_1 * S4_1);
                arg0->word_8 = std::bit_cast<u32>(S0_1);
                guest::cpu()->r[1] = r1;
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
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_1;
        return 1u;
    }
    guest::cpu()->r[1] = r1;
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
GUEST_OFFSET(Object_00565958_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00565958_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_00565958_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_00565958_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00565958_1, word_8, 0x8);  // (from the original)


void f_00565958(gptr<Object_00565958_0> arg0, gptr<Object_00565958_1> arg1, float S0, float S1, float S2) {
    u32 fpsr = guest::cpu()->fpscr;
    float S4_2 = 0;
    float S3_3 = 0;
    float S0_3 = 0;
    float S1_2 = 0;
    float S0_4 = 0;
    float S0_5 = 0;
    float S0_6 = 0;
    float S1_4 = 0;
    float S0_7 = 0;
    float S0_8 = 0;
    float S3_1 = std::bit_cast<float>(arg0->word_0);
    float S4_1 = std::bit_cast<float>(arg1->word_0);
    u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S3_1, S4_1);  // (from the original)
    if (fpsr_1 >> 0x1e & 1) {  // (from the original)
        fpsr_1 = fpsr_1 & 0xfffffffu | vfp_cmpf(std::bit_cast<float>(arg0->word_8), std::bit_cast<float>(arg1->word_8));  // (from the original)
        if (fpsr_1 >> 0x1e & 1) {  // (from the original)
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
    u32 fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S6_1, S2);  // (from the original)
    if (fpsr_2 >> 0x1d & 1) {  // (from the original)
        S4_2 = S6_1 * S0;
        S3_3 = S3_2 * S0;
        S0_3 = S5_1 * S0;
        if (s32(std::bit_cast<u32>(fabsf(S4_2))) > 0x34000000) {  // (from the original)
            goto L_5659d8;
        }
    }
    arg0->word_0 = arg1->word_0;
    arg0->word_8 = arg1->word_8;
    S1_2 = std::bit_cast<float>(arg0->word_0) - std::bit_cast<float>(arg1->word_0);
    S0_4 = std::bit_cast<float>(arg0->word_8) - std::bit_cast<float>(arg1->word_8);
    S0_5 = sqrtf(S1_2 * S1_2 + S0_4 * S0_4);
    guest::cpu()->s[0] = S0_5;
    return;
L_5659d8:;
    u32 fpsr_3 = fpsr_2 & 0xfffffffu | vfp_cmpf(S4_2, S1);  // (from the original)
    if (!(fpsr_3 >> 0x1e & 1) && fpsr_3 >> 0x1f == (fpsr_3 >> 0x1c & 1)) {  // (from the original)
        float S2_1 = S1 / S4_2;
        S3_3 = S3_3 * S2_1;
        S0_3 = S0_3 * S2_1;
        S0_6 = std::bit_cast<float>(arg0->word_8) - S0_3;
        arg0->word_0 = std::bit_cast<u32>(std::bit_cast<float>(arg0->word_0) - S3_3);
        arg0->word_8 = std::bit_cast<u32>(S0_6);
        S1_4 = std::bit_cast<float>(arg0->word_0) - std::bit_cast<float>(arg1->word_0);
        S0_7 = std::bit_cast<float>(arg0->word_8) - std::bit_cast<float>(arg1->word_8);
        S0_8 = sqrtf(S1_4 * S1_4 + S0_7 * S0_7);
        guest::cpu()->s[0] = S0_8;
        return;
    }
    if ((fpsr_3 & 0xfffffffu | vfp_cmpf(S4_2, S2)) >> 0x1d & 1) {  // (from the original)
        S0_6 = std::bit_cast<float>(arg0->word_8) - S0_3;
        arg0->word_0 = std::bit_cast<u32>(std::bit_cast<float>(arg0->word_0) - S3_3);
        arg0->word_8 = std::bit_cast<u32>(S0_6);
        S1_4 = std::bit_cast<float>(arg0->word_0) - std::bit_cast<float>(arg1->word_0);
        S0_7 = std::bit_cast<float>(arg0->word_8) - std::bit_cast<float>(arg1->word_8);
        S0_8 = sqrtf(S1_4 * S1_4 + S0_7 * S0_7);
        guest::cpu()->s[0] = S0_8;
        return;
    }
    float S1_3 = S2 / S4_2;
    S3_3 = S3_3 * S1_3;
    S0_3 = S0_3 * S1_3;
    S0_6 = std::bit_cast<float>(arg0->word_8) - S0_3;
    arg0->word_0 = std::bit_cast<u32>(std::bit_cast<float>(arg0->word_0) - S3_3);
    arg0->word_8 = std::bit_cast<u32>(S0_6);
    S1_4 = std::bit_cast<float>(arg0->word_0) - std::bit_cast<float>(arg1->word_0);
    S0_7 = std::bit_cast<float>(arg0->word_8) - std::bit_cast<float>(arg1->word_8);
    S0_8 = sqrtf(S1_4 * S1_4 + S0_7 * S0_7);
    guest::cpu()->s[0] = S0_8;
    return;
}

}  // namespace d_00565958
GUEST_EXPORT(0x00565958, d_00565958::f_00565958);

// f_00565a68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00565a68 {

struct __attribute__((packed)) Object_00565a68_0 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_00565a68_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00565a68_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_00565a68_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_00565a68_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00565a68_1, word_8, 0x8);  // (from the original)


void f_00565a68(gptr<Object_00565a68_0> arg0, gptr<Object_00565a68_1> arg1, float S0, float S1) {
    u32 r1 = arg1.addr();
    u32 fpsr = guest::cpu()->fpscr;
    float S3_1 = std::bit_cast<float>(arg0->word_0);
    float S2_1 = std::bit_cast<float>(arg1->word_0);
    u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S3_1, S2_1);  // (from the original)
    if (fpsr_1 >> 0x1e & 1) {  // (from the original)
        fpsr_1 = fpsr_1 & 0xfffffffu | vfp_cmpf(std::bit_cast<float>(arg0->word_8), std::bit_cast<float>(arg1->word_8));  // (from the original)
        if (fpsr_1 >> 0x1e & 1) {  // (from the original)
            guest::cpu()->r[1] = r1;
            return;
        }
    }
    float S2_2 = (S3_1 - S2_1) * S0;
    float S0_1 = (std::bit_cast<float>(arg0->word_8) - std::bit_cast<float>(arg1->word_8)) * S0;
    float S3_2 = sqrtf(S2_2 * S2_2 + S0_1 * S0_1);
    u32 r1_1 = std::bit_cast<u32>(fabsf(S3_2));
    if (s32(r1_1) <= 0x34000000) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return;
    }
    u32 fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S3_2, S1);  // (from the original)
    if (fpsr_2 >> 0x1e & 1 || fpsr_2 >> 0x1f != (fpsr_2 >> 0x1c & 1)) {  // (from the original)
        float S0_2 = std::bit_cast<float>(arg0->word_8) - S0_1;
        arg0->word_0 = std::bit_cast<u32>(std::bit_cast<float>(arg0->word_0) - S2_2);
        arg0->word_8 = std::bit_cast<u32>(S0_2);
        guest::cpu()->r[1] = r1_1;
        return;
    }
    float S4_1 = S1 / S3_2;
    float S2_3 = S2_2 * S4_1;
    float S0_3 = S0_1 * S4_1;
    float S0_4 = std::bit_cast<float>(arg0->word_8) - S0_3;
    arg0->word_0 = std::bit_cast<u32>(std::bit_cast<float>(arg0->word_0) - S2_3);
    arg0->word_8 = std::bit_cast<u32>(S0_4);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_00565a68
GUEST_EXPORT(0x00565a68, d_00565a68::f_00565a68);

// f_00565c00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00565c00 {

inline constexpr guest::Function<0x0013bb30, u32(u32, u32)> call_0013bb30;  // (from the original)

u32 f_00565c00() {
    return call_0013bb30(0x9753e8u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_00565c00
GUEST_EXPORT(0x00565c00, d_00565c00::f_00565c00);

// f_0056677c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056677c {

struct __attribute__((packed)) Local_0056677c_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0056677c_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0056677c_ea_3, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x00ae5484> global_00ae5484;  // (from the original)
inline guest::global<u32, 0x00ae548c> global_00ae548c;  // (from the original)
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x007b1034, u32(u32, u32, u32)> call_007b1034;  // (from the original)

u32 f_0056677c(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    r13 -= 0x18;  // (from the original)
    u32 r5_1 = r0 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00135740(r5_1, r1, r2, guest::cpu()->r[3]);
    u32 r2_1 = guest::cpu()->r[2];
    if (u32(*gptr<u8>(r0 + 0x2cu)) != 0) {  // (from the original)
        r1 = *global_00ae5484;
        if (r1 == 0) {
            r13 += 0x18;  // (from the original)
            guest::cpu()->r[13] = r13;
            return call_00137e84(r5_1, r1);
        }
        u32 r0_1 = *global_00ae548c;
        u32 r1_1 = *gptr<u32>(0xae5484u + (r1 - 1u << 3) + 0xcu) - r0_1;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_007b1034(r0_1, r1_1, 0xae5484u);  // (from the original)
        r1 = 0x100u;  // (from the original)
        *gptr<u32>(r0 + 0x18u) = *gptr<u32>(r0 + 0x18u) + 1u;  // (from the original)
        *global_00ae5484 = 0;
        guest::cpu()->r[13] = r13;
        call_002f825c(0xae548cu, r1);  // (from the original)
        r13 += 0x18;  // (from the original)
        guest::cpu()->r[13] = r13;
        return call_00137e84(r5_1, r1);
    }
    u32 r0_3 = *gptr<u32>(r0 + 0x10u);  // (from the original)
    if (r0_3 == 0) {
        r13 += 0x18;  // (from the original)
        guest::cpu()->r[13] = r13;
        return call_00137e84(r5_1, r1);
    }
    r1 = *gptr<u32>(r0 + 0x14u) - r0_3;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_007b1034(r0_3, r1, r2_1);
    u32 r0_4 = *gptr<u32>(r0 + 0x18u);  // (from the original)
    *gptr<u32>(r0 + 0x10u) = 0;  // (from the original)
    gptr<Local_0056677c_ea_3> ea_3 = gptr<Local_0056677c_ea_3>(r0 + 0x14u);  // (from the original)
    ea_3->word_0 = 0;
    ea_3->word_4 = r0_4 + 1u;
    r13 += 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_00137e84(r5_1, r1);
}

}  // namespace d_0056677c
GUEST_EXPORT(0x0056677c, d_0056677c::f_0056677c);

// f_00567224: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567224 {

inline guest::global<u8, 0x00975c30> global_00975c30;  // (from the original)
inline guest::global<u8, 0x00975c31> global_00975c31;  // (from the original)
inline guest::global<u32, 0x00975c3c> global_00975c3c;  // (from the original)
inline guest::global<u32, 0x00975c44> global_00975c44;  // (from the original)
inline guest::global<u32, 0x00ae55cc> global_00ae55cc;  // (from the original)

void f_00567224() {
    if (s32(s8(*global_00975c31)) > 0) {
        guest::cpu()->r[1] = 0x975c30u;  // (from the original)
        return;
    }
    *global_00975c44 = 0;
    u32 r0_1 = *global_00975c3c;
    if (r0_1 == 0 || *global_00ae55cc == 0 || u32(*global_00975c30) != 0) {
        guest::cpu()->r[1] = 0x975c30u;  // (from the original)
        return;
    }
    *global_00975c30 = 1;
    u32 r3_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0xcu);  // (from the original)
    // virtual function 3 of r0_1
    guest::call_address<u32>(r3_1, r0_1, 0x6c6f6164u, 0u, r3_1);  // (from the original)
    return;
}

}  // namespace d_00567224
GUEST_EXPORT(0x00567224, d_00567224::f_00567224);

// f_00567cc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567cc8 {

inline guest::global<u32, 0x00975c14> global_00975c14;  // (from the original)
inline guest::global<u32, 0x00975c18> global_00975c18;  // (from the original)
inline constexpr guest::Function<0x00567ce4, u32(u32, u32, u32, u32)> call_00567ce4;  // (from the original)

u32 f_00567cc8(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r3_1 = *global_00975c14;
    *frame.at<u32>(0) = *global_00975c18;
    call_00567ce4(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], r3_1);
    return guest::cpu()->r[0];
}

}  // namespace d_00567cc8
GUEST_EXPORT_FRAMED(0x00567cc8, d_00567cc8::f_00567cc8, 0x4000);  // pushes {lr} first, as the original

// f_00567ce4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567ce4 {

inline constexpr guest::Function<0x004b6598, u32(u32, u32, u32)> call_004b6598;  // (from the original)
inline constexpr guest::Function<0x0056a99c, u32(u32, u32, u32, u32)> call_0056a99c;  // (from the original)

u32 f_00567ce4(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    u32 r12_1 = *frame.at<u32>(0x20);  // (from the original)
    *frame.at<u32>(0xc) = r1;  // (from the original)
    *frame.at<u32>(8) = 0x9047f8;  // (from the original)
    *frame.at<u32>(0) = r12_1;
    u32 r0_2 = call_0056a99c(r0 + 0x15cu, frame.at(8).addr(), r2, guest::cpu()->r[3]);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_2 == 0 || *gptr<u32>(r0 + 0x158u) != 0) {  // (from the original)
        return r0_2;
    }
    r1_2 = *gptr<u32>(r0 + 0x22cu);  // (from the original)
    *gptr<u32>(r0 + 0x158u) = r1_2;  // (from the original)
    if (*gptr<u32>(r0 + 8u) != 0) {
        guest::cpu()->r[1] = r1_2;
        return r0_2;
    }
    *gptr<u32>(r0 + 8u) = r1_2;
    call_004b6598(r0 + 0xcu, r1_2, 0x567d5cu);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    return r0_2;
}

}  // namespace d_00567ce4
GUEST_EXPORT_FRAMED(0x00567ce4, d_00567ce4::f_00567ce4, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00567d60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567d60 {

struct __attribute__((packed)) Object_00567d60_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_00567d60_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_00567d60_1 {
    u8 unknown_0[0x22c];  // (not used here)
    u32 word_22c;
};
GUEST_OFFSET(Object_00567d60_1, word_22c, 0x22c);  // (from the original)

inline constexpr guest::Function<0x004b6598, u32(u32, u32, u32, u32)> call_004b6598;  // (from the original)

void f_00567d60(gptr<Object_00567d60_0> arg0, gptr<Object_00567d60_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1_1 = arg1->word_22c;
    u32 r3_1 = arg0->word_8;
    if (r3_1 != 0) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    arg0->word_8 = r1_1;
    u32 r0_2 = call_004b6598((r0 + 8u) + 4u, r1_1, 0x567d98u, r3_1);  // (from the original)
    if (r0_2 != 0) {
        return;
    }
    return;
}

}  // namespace d_00567d60
GUEST_EXPORT_FRAMED(0x00567d60, d_00567d60::f_00567d60, 0x4010);  // pushes {r4, lr} first, as the original

// f_00567d9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567d9c {

inline guest::global<u32, 0x00975c14> global_00975c14;  // (from the original)
inline constexpr guest::Function<0x00567dac, u32(u32, u32, u32, u32)> call_00567dac;  // (from the original)

void f_00567d9c() {
    call_00567dac(guest::cpu()->r[0], guest::cpu()->r[1], *global_00975c14, guest::cpu()->r[3]);
    return;
}

}  // namespace d_00567d9c
GUEST_EXPORT(0x00567d9c, d_00567d9c::f_00567d9c);

// f_00567dac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567dac {

inline constexpr guest::Function<0x004b6598, u32(u32, u32, u32, u32)> call_004b6598;  // (from the original)
inline constexpr guest::Function<0x00569dc4, u32(u32, u32, u32, u32)> call_00569dc4;  // (from the original)
inline constexpr guest::Function<0x0056aa98, u32(u32, u32, u32, u32)> call_0056aa98;  // (from the original)

void f_00567dac(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_00569dc4(r0, r1, r2, r3);
    *frame.at<u32>(0) = 0x9047f8;  // (from the original)
    *frame.at<u32>(4) = r1;
    call_0056aa98(r0 + 0x15cu, frame.at(0).addr(), *gptr<u32>(r0_1 + 4u), r2);  // (from the original)
    u32 r1_2 = *gptr<u32>(r0 + 0x22cu);  // (from the original)
    *gptr<u32>(r0 + 0x158u) = r1_2;  // (from the original)
    if (*gptr<u32>(r0 + 8u) == 0) {
        *gptr<u32>(r0 + 8u) = r1_2;
        u32 r0_4 = call_004b6598(r0 + 0xcu, r1_2, 0x567e20u, guest::cpu()->r[3]);  // (from the original)
        if (r0_4 != 0) {
            return;
        }
    }
    return;
}

}  // namespace d_00567dac
GUEST_EXPORT_FRAMED(0x00567dac, d_00567dac::f_00567dac, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00567e24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567e24 {

inline guest::global<u32, 0x00975c14> global_00975c14;  // (from the original)
inline guest::global<u32, 0x00975c18> global_00975c18;  // (from the original)
inline constexpr guest::Function<0x00567e34, u32(u32, u32, u32, u32)> call_00567e34;  // (from the original)

u32 f_00567e24() {
    return call_00567e34(guest::cpu()->r[0], guest::cpu()->r[1], *global_00975c14, *global_00975c18);
}

}  // namespace d_00567e24
GUEST_EXPORT(0x00567e24, d_00567e24::f_00567e24);

// f_00567ef0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567ef0 {

inline constexpr guest::Function<0x0013bc00, u32(u32, u32, u32, u32)> call_0013bc00;  // (from the original)
inline constexpr guest::Function<0x0056853c, u32(u32, u32)> call_0056853c;  // (from the original)

u32 f_00567ef0(gptr<ssys__ma__lyt__ArcResAccReader> arg0) {
    u32 r0 = arg0.addr();
    arg0->word_0 = 0x9061b8;  // (from the original)
    u32 r0_2 = call_0013bc00(r0 + 0x15cu, 0x9061b8u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_2 - 0x15cu) = 0x906224;  // (from the original)
    u32 r0_4 = call_0056853c(r0_2 - 0x150u, 0x906224u);  // (from the original)
    return r0_4 - 0xcu;  // (from the original)
}

}  // namespace d_00567ef0
GUEST_EXPORT_FRAMED(0x00567ef0, d_00567ef0::f_00567ef0, 0x4010);  // pushes {r4, lr} first, as the original

// f_00567f20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567f20 {

struct __attribute__((packed)) Object_00567f20_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00567f20_0, word_4, 0x4);  // (from the original)


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
GUEST_OFFSET(Object_00567f34_0, word_1c, 0x1c);  // (from the original)


void f_00567f34(gptr<Object_00567f34_0> arg0) {
    arg0->word_1c = ~0u;
    return;
}

}  // namespace d_00567f34
GUEST_EXPORT(0x00567f34, d_00567f34::f_00567f34);

// f_00567f40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567f40 {

struct __attribute__((packed)) Object_00567f40_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Object_00567f40_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00567f40_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00567f40_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00567f40_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00567f40_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00567f40_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00567f40_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_00567f40_0, word_1c, 0x1c);  // (from the original)

struct __attribute__((packed)) Local_00567f40_r1_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00567f40_r1_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00567f40_r1_2, word_4, 0x4);  // (from the original)


u32 f_00567f40(gptr<Object_00567f40_0> arg0, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 r1_1 = arg0->word_1c;
    if (s32(r1_1) <= 0) {
        arg0->word_1c = ~0u;
        return 1u;
    }
    if (s32(r1_1) <= s32(arg0->word_18)) {
        float S0_1 = std::bit_cast<float>(r1_1);
        float S1_1 = std::bit_cast<float>(r1_1 + 1u);
        gptr<Local_00567f40_r1_2> r1_2 = gptr<Local_00567f40_r1_2>(r0 + 0xcu);  // (from the original)
        float S0_2 = float(s32(std::bit_cast<u32>(S0_1))) / float(s32(std::bit_cast<u32>(S1_1)));
        float S2_1 = std::bit_cast<float>(r1_2->word_0) * S0_2;
        float S3_1 = std::bit_cast<float>(r1_2->word_4) * S0_2;
        arg0->word_14 = std::bit_cast<u32>(std::bit_cast<float>(arg0->word_14) * S0_2);
        r1_2->word_0 = std::bit_cast<u32>(S2_1);
        r1_2->word_4 = std::bit_cast<u32>(S3_1);
    }
    arg0->word_0 = std::bit_cast<u32>(std::bit_cast<float>(arg0->word_0) + std::bit_cast<float>(arg0->word_c));
    arg0->word_4 = std::bit_cast<u32>(std::bit_cast<float>(arg0->word_4) + std::bit_cast<float>(arg0->word_10));
    float S1_2 = std::bit_cast<float>(arg0->word_14);
    float S0_3 = std::bit_cast<float>(arg0->word_8) + S1_2;
    arg0->word_8 = std::bit_cast<u32>(S0_3);
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
GUEST_OFFSET(Object_00567fe4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00567fe4_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00567fe4_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00567fe4_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_00567fe4_0, word_1c, 0x1c);  // (from the original)

struct __attribute__((packed)) Object_00567fe4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00567fe4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00567fe4_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00567fe4_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_00567fe4_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00567fe4_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00567fe4_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00567fe4_2, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00567fe4_r0_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00567fe4_r0_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00567fe4_r0_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00567fe4_r0_1, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x00568108> global_00568108;  // (from the original)
inline guest::global<u32, 0x0056810c> global_0056810c;  // (from the original)

void f_00567fe4(gptr<Object_00567fe4_0> arg0, gptr<Object_00567fe4_1> arg1, gptr<Object_00567fe4_2> arg2, u32 r3, float S0) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = arg2.addr();
    u32 res_1 = 0;
    u32 r4 = *gptr<u32>(guest::cpu()->r[13] + 0xcu);  // (from the original)
    u32 r5_1 = *gptr<u32>(guest::cpu()->r[13] + 8u);
    arg0->word_0 = arg1->word_0;
    arg0->word_4 = arg1->word_4;
    u32 r12_1 = arg1->word_8;
    arg0->word_18 = r4;
    arg0->word_8 = r12_1;
    float S7 = std::bit_cast<float>(arg2->word_0) - std::bit_cast<float>(arg1->word_0);
    float S5 = std::bit_cast<float>(arg2->word_4) - std::bit_cast<float>(arg1->word_4);
    float S6 = std::bit_cast<float>(arg2->word_8) - std::bit_cast<float>(arg1->word_8);
    float S1 = std::bit_cast<float>(*global_00568108);
    u32 r12 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(sqrtf(S7 * S7 + S5 * S5 + S6 * S6) / S0)));
    S0 = S1;
    if (s32(r12) > s32(r3)) {
        r12 = r3;
    }
    if (s32(r12) < s32(r5_1)) {
        r12 = r5_1;
    }
    arg0->word_1c = r12;
    if (r4 != 0 && r4 >> 0x1f == (r4 & (r4 ^ r4)) >> 0x1f) {  // (from the original)
        r1 = 0u;
        if ((r4 & 1u) != 0) {
            r1 = 1u;
            S0 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r4)))) + S0;
        }
        r2 = s32(r4) >> 1;
        if (r2 != 0) {
            do {
                u32 r3_1 = r4 - r1;
                res_1 = r2 - 1u;
                r2 = res_1;
                r1 += 2u;
                S0 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r3_1)))) + S0;
                S1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r3_1 - 1u)))) + S1;
                guest::preempt();
            } while (res_1 != 0);
        }
        S0 = S0 + S1;
    }
    gptr<Local_00567fe4_r0_1> r0_1 = gptr<Local_00567fe4_r0_1>(r0 + 0xcu);  // (from the original)
    float S1_1 = std::bit_cast<float>(*global_0056810c) / (float(s32(std::bit_cast<u32>(std::bit_cast<float>(r12 - r4)))) + S0 / float(s32(std::bit_cast<u32>(std::bit_cast<float>(r4 + 1u)))));
    float S0_1 = S7 * S1_1;
    float S2_1 = S5 * S1_1;
    float S1_2 = S6 * S1_1;
    r0_1->word_0 = std::bit_cast<u32>(S0_1);
    r0_1->word_4 = std::bit_cast<u32>(S2_1);
    r0_1->word_8 = std::bit_cast<u32>(S1_2);
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_2;
    return;
}

}  // namespace d_00567fe4
GUEST_EXPORT_FRAMED(0x00567fe4, d_00567fe4::f_00567fe4, 0x30);  // pushes {r4, r5} first, as the original

// f_00568b38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00568b38 {

inline constexpr guest::Function<0x001408d4, u32(u32, u32)> call_001408d4;  // (from the original)
inline constexpr guest::Function<0x004b9f68, u32(u32, u32, u32, u32)> call_004b9f68;  // (from the original)

u32 f_00568b38(u32 r0, u32 r1) {
    u32 r5_1 = r0 + 0x10u;  // (from the original)
    u32 r0_1 = call_004b9f68(r5_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        call_001408d4(r5_1 + 4u, r0_1 + 4u);
    }
    return r0_1;
}

}  // namespace d_00568b38
GUEST_EXPORT_FRAMED(0x00568b38, d_00568b38::f_00568b38, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00569544: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00569544 {

struct __attribute__((packed)) Object_00569544_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 byte_14;
    u8 unknown_15[0x3];  // (not used here)
    u32 word_18;
};
GUEST_OFFSET(Object_00569544_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00569544_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00569544_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00569544_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00569544_0, byte_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00569544_0, word_18, 0x18);  // (from the original)

inline guest::global<u32, 0x005695d4> global_005695d4;  // (from the original)
inline guest::global<u32, 0x005695d8> global_005695d8;  // (from the original)

u32 f_00569544(gptr<Object_00569544_0> arg0) {
    u32 fpsr = guest::cpu()->fpscr;
    u32 fpsr_2 = 0;
    u32 r1_1 = arg0->byte_14;
    float S0_1 = std::bit_cast<float>(arg0->word_8);
    float S1_1 = std::bit_cast<float>(arg0->word_10);
    arg0->word_c = std::bit_cast<u32>(S0_1);
    if ((r1_1 & 2u) != 0) {
        u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S1_1, S0_1);  // (from the original)
        if (!(fpsr_1 >> 0x1d & 1) || fpsr_1 >> 0x1e & 1) {  // (from the original)
            goto L_5695bc;
        }
        if ((r1_1 & 1u) != 0) {
            S0_1 = std::bit_cast<float>(*global_005695d4);
            goto L_5695c0;
        }
        S1_1 = std::bit_cast<float>(arg0->word_4) - S1_1;
        S0_1 = S1_1 + S0_1;
        goto L_5695c0;
    }
    S0_1 = S1_1 + S0_1;
    if ((r1_1 & 1u) != 0) {
        S1_1 = std::bit_cast<float>(arg0->word_4) - std::bit_cast<float>(*global_005695d8);
        if (!((fpsr & 0xfffffffu | vfp_cmpf(S1_1, S0_1)) >> 0x1d & 1)) {  // (from the original)
            S0_1 = S1_1;
        }
        goto L_5695c0;
    }
    S1_1 = std::bit_cast<float>(arg0->word_4);
    fpsr_2 = fpsr & 0xfffffffu | vfp_cmpf(S1_1, S0_1);  // (from the original)
    if (fpsr_2 >> 0x1d & 1 && !(fpsr_2 >> 0x1e & 1)) {  // (from the original)
        goto L_5695c0;
    }
L_5695bc:;
    S0_1 = S0_1 - S1_1;
L_5695c0:;
    arg0->word_8 = std::bit_cast<u32>(S0_1);
    u32 r0_1 = arg0->word_18;
    if (r0_1 != 0) {
        *gptr<u32>(r0_1 + 0x10u) = std::bit_cast<u32>(S0_1);  // (from the original)
    }
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r0_1;
}

}  // namespace d_00569544
GUEST_EXPORT(0x00569544, d_00569544::f_00569544);

// f_00569774: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00569774 {

struct __attribute__((packed)) Object_00569774_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 byte_14;
    u8 unknown_15[0x3];  // (not used here)
    u32 word_18;
};
GUEST_OFFSET(Object_00569774_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00569774_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00569774_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00569774_0, byte_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00569774_0, word_18, 0x18);  // (from the original)

struct __attribute__((packed)) Local_00569774_r0_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00569774_r0_5, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00569774_r0_5, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x005697d8> global_005697d8;  // (from the original)
inline guest::global<u32, 0x005697dc> global_005697dc;  // (from the original)
inline constexpr guest::Function<0x0073bf80, u32(u32, u32, u32, u32)> call_0073bf80;  // (from the original)
inline constexpr guest::Function<0x0073bf94, u32(u32, u32)> call_0073bf94;  // (from the original)

u32 f_00569774(gptr<Object_00569774_0> arg0, u32 r1, float S0, float S1, float S2) {
    u32 r0 = arg0.addr();
    u32 r0_1 = r1;
    arg0->word_18 = r1;
    if (r1 != 0) {
        u32 r5_1 = 1u;
        u32 r0_2 = call_0073bf80(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 zf_1 = r0_2 == 0;
        u32 r0_3 = arg0->word_18;
        if (!zf_1) {
            r5_1 = 0u;
        }
        u32 r0_4 = call_0073bf94(r0_3, guest::cpu()->r[1]);
        r1 = guest::cpu()->r[1];
        float S1_1 = std::bit_cast<float>(r0_4);
        S0 = std::bit_cast<float>(*global_005697d8);
        float S2_1 = std::bit_cast<float>(*global_005697dc);
        arg0->word_10 = std::bit_cast<u32>(S0);
        gptr<Local_00569774_r0_5> r0_5 = gptr<Local_00569774_r0_5>(r0 + 4u);
        S1 = float(std::bit_cast<u32>(S1_1));
        r0_5->word_0 = std::bit_cast<u32>(S1);
        r0_5->word_4 = std::bit_cast<u32>(S2_1);
        arg0->byte_14 = u8(r5_1);
        arg0->word_c = std::bit_cast<u32>(S2_1);
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
GUEST_EXPORT_FRAMED(0x00569774, d_00569774::f_00569774, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00569ab8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00569ab8 {

inline constexpr guest::Function<0x00125e08, u32(u32)> call_00125e08;  // (from the original)
inline constexpr guest::Function<0x0012b394, u32(u32)> call_0012b394;  // (from the original)

u32 f_00569ab8(gptr<ssys__ma__lyt__ArcResAcc> arg0) {
    u32 r0 = arg0.addr();
    arg0->word_4 = r0 + 0xcu;  // (from the original)
    arg0->word_8 = 0;
    arg0->word_0 = 0x906224;  // (from the original)
    u32 r0_2 = call_0012b394(r0 + 0xcu);  // (from the original)
    *gptr<u32>(r0_2) = 0x9061c8;  // (from the original)
    u32 r0_3 = r0_2 + 0x13cu;  // (from the original)
    *gptr<u32>(r0_3) = 0x2010000;  // (from the original)
    u32 r0_5 = call_00125e08(r0_3 + 4u);
    *gptr<u32>(r0_5) = 0x90614c;  // (from the original)
    guest::cpu()->r[1] = 0x90614cu;  // (from the original)
    return r0_5 - 0x14cu;  // (from the original)
}

}  // namespace d_00569ab8
GUEST_EXPORT_FRAMED(0x00569ab8, d_00569ab8::f_00569ab8, 0x4010);  // pushes {r4, lr} first, as the original

// f_00569b28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00569b28 {

inline constexpr guest::Function<0x0056853c, u32(u32, u32, u32, u32)> call_0056853c;  // (from the original)

u32 f_00569b28(gptr<ssys__ma__lyt__ArcResAcc> arg0) {
    u32 r0 = arg0.addr();
    arg0->word_0 = 0x906224;  // (from the original)
    u32 r0_2 = call_0056853c(r0 + 0xcu, 0x906224u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return r0_2 - 0xcu;  // (from the original)
}

}  // namespace d_00569b28
GUEST_EXPORT_FRAMED(0x00569b28, d_00569b28::f_00569b28, 0x4010);  // pushes {r4, lr} first, as the original

// f_00569b44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00569b44 {

struct __attribute__((packed)) Object_00569b44_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 byte_14;
};
GUEST_OFFSET(Object_00569b44_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00569b44_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00569b44_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00569b44_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00569b44_0, byte_14, 0x14);  // (from the original)

inline guest::global<u32, 0x00569b6c> global_00569b6c;  // (from the original)

void f_00569b44(gptr<Object_00569b44_0> arg0, u32 r1, float S0, float S1, float S2) {
    u32 fpsr = guest::cpu()->fpscr;
    float S3_1 = std::bit_cast<float>(*global_00569b6c);
    arg0->word_4 = std::bit_cast<u32>(S0);
    if (!((fpsr & 0xfffffffu | vfp_cmpf(S2, S3_1)) >> 0x1d & 1)) {  // (from the original)
        S2 = S3_1;
    }
    arg0->word_8 = std::bit_cast<u32>(S2);
    arg0->word_10 = std::bit_cast<u32>(S1);
    arg0->byte_14 = u8(r1);
    arg0->word_c = std::bit_cast<u32>(S2);
    return;
}

}  // namespace d_00569b44
GUEST_EXPORT(0x00569b44, d_00569b44::f_00569b44);

// f_00569e90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00569e90 {

inline constexpr guest::Function<0x00132478, u32(u32, u32)> call_00132478;  // (from the original)
inline constexpr guest::Function<0x00567a10, u32(u32, u32, u32)> call_00567a10;  // (from the original)
inline constexpr guest::Function<0x00569ebc, u32(u32, u32, u32, u32)> call_00569ebc;  // (from the original)

void f_00569e90(u32 r0) {
    guest::cpu()->r[13] -= 8u;
    call_00569ebc(r0, 0x190u, 0xf0u, guest::cpu()->r[3]);  // (from the original)
    call_00567a10(r0 + 4u, 0x410u, guest::cpu()->r[2]);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    call_00132478(r0 + 4u, r1_1);
    return;
}

}  // namespace d_00569e90
GUEST_EXPORT(0x00569e90, d_00569e90::f_00569e90);

// f_00569ebc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00569ebc {

struct __attribute__((packed)) Local_00569ebc_r0_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_00569ebc_r0_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00569ebc_r0_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00569ebc_r0_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00569ebc_r0_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00569ebc_r0_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_00569ebc_r0_1, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_00569ebc_r0_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_00569ebc_r0_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00569ebc_r0_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00569ebc_r0_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00569ebc_r0_2, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00569ebc_r0_2, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_00569ebc_r0_2, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_00569ebc_r4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_00569ebc_r4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00569ebc_r4_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00569ebc_r4_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00569ebc_r4_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00569ebc_r4_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_00569ebc_r4_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_00569ebc_r4_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_00569ebc_r4_1, word_1c, 0x1c);  // (from the original)

inline guest::global<u32, 0x0056a10c> global_0056a10c;  // (from the original)
inline guest::global<u32, 0x0056a110> global_0056a110;  // (from the original)
inline guest::global<u32, 0x0056a114> global_0056a114;  // (from the original)
inline guest::global<u32, 0x008ae294> global_008ae294;  // (from the original)
inline constexpr guest::Function<0x007b0530, u32(u32, u32, u32, u32)> call_007b0530;  // (from the original)

void f_00569ebc(u32 r0_unused, u32 r1, u32 r2) {
    guest::StackFrame frame(0x38);  // the original's stack frame
    u32 res_3 = 0;
    u32 r4_3 = 0;
    u32 r12_6 = 0;
    u32 res_8 = 0;
    u32 r2_4 = 0;
    u32 res_13 = 0;
    u32 r3_1 = uxth(r2);
    gptr<Local_00569ebc_r4_1> r4_1 = gptr<Local_00569ebc_r4_1>(0x8ae3d8u);  // (from the original)
    u32 r2_1 = uxth(r1);
    float S1_1 = std::bit_cast<float>(r4_1->word_4);
    float S2_1 = std::bit_cast<float>(r4_1->word_8);
    float S3_1 = std::bit_cast<float>(r4_1->word_c);
    float S4_1 = std::bit_cast<float>(r4_1->word_10);
    float S5_1 = std::bit_cast<float>(r4_1->word_14);
    float S6_1 = std::bit_cast<float>(r4_1->word_18);
    float S7_1 = std::bit_cast<float>(r4_1->word_1c);
    u32 r1_1 = *global_008ae294;
    gptr<Local_00569ebc_r0_1> r0_1 = gptr<Local_00569ebc_r0_1>(0x8ae3f8u);  // (from the original)
    *frame.at<u32>(0) = std::bit_cast<u32>(std::bit_cast<float>(r4_1->word_0));
    *frame.at<u32>(4) = std::bit_cast<u32>(S1_1);
    *frame.at<u32>(8) = std::bit_cast<u32>(S2_1);
    *frame.at<u32>(0xc) = std::bit_cast<u32>(S3_1);  // (from the original)
    *frame.at<u32>(0x10) = std::bit_cast<u32>(S4_1);  // (from the original)
    *frame.at<u32>(0x14) = std::bit_cast<u32>(S5_1);  // (from the original)
    *frame.at<u32>(0x18) = std::bit_cast<u32>(S6_1);  // (from the original)
    *frame.at<u32>(0x1c) = std::bit_cast<u32>(S7_1);  // (from the original)
    float S0_1 = std::bit_cast<float>(r0_1->word_0);
    float S1_2 = std::bit_cast<float>(r0_1->word_4);
    float S2_2 = std::bit_cast<float>(r0_1->word_8);
    float S3_2 = std::bit_cast<float>(r0_1->word_c);
    float S4_2 = std::bit_cast<float>(r0_1->word_10);
    float S5_2 = std::bit_cast<float>(r0_1->word_14);
    gptr<Local_00569ebc_r0_2> r0_2 = gptr<Local_00569ebc_r0_2>(frame.at(0x20).addr());  // (from the original)
    r0_2->word_0 = std::bit_cast<u32>(S0_1);
    r0_2->word_4 = std::bit_cast<u32>(S1_2);
    r0_2->word_8 = std::bit_cast<u32>(S2_2);
    r0_2->word_c = std::bit_cast<u32>(S3_2);
    r0_2->word_10 = std::bit_cast<u32>(S4_2);
    r0_2->word_14 = std::bit_cast<u32>(S5_2);
    float S1_3 = std::bit_cast<float>(*global_0056a10c);
    u32 r0_3 = std::bit_cast<u32>(float(std::bit_cast<u32>(std::bit_cast<float>(r3_1))) * S1_3);
    u32 r12_1 = r0_3 & 0x80000000u;  // (from the original)
    if (r12_1 != 0) {
        r12_1 = 0x800000u;  // (from the original)
    }
    u32 r14 = r0_3 << 9;
    u32 res_2 = r0_3 & ~0x80000000u;  // (from the original)
    u32 r0_4 = res_2;
    r14 >>= 9;
    if (res_2 == 0) {
        r14 >>= 7;
        goto L_569f40;
    }
    res_3 = (r0_3 >> 0x17u & 0xffu) - 0x40u;  // (from the original)
    r0_4 = res_3;
    r14 >>= 7;
    if (res_3 >> 0x1f) {  // (from the original)
        goto L_569f4c;
    }
    if (s32(r0_4) > 0x7f) {  // (from the original)
        r12_1 = 0x7f0000u;  // (from the original)
        goto L_569f4c;
    }
L_569f40:;
    r4_3 = r0_4 & 0x7fu;  // (from the original)
    r12_1 = r14 | r12_1 | r4_3 << 0x10;  // (from the original)
L_569f4c:;
    float S2_3 = std::bit_cast<float>(*global_0056a110);
    *frame.at<u32>(0) = r12_1;
    float S3_3 = float(std::bit_cast<u32>(std::bit_cast<float>(r3_1)));
    u32 r0_5 = std::bit_cast<u32>(S2_3 / S3_3);
    u32 res_4 = r0_5 & 0x80000000u;  // (from the original)
    u32 r3_2 = res_4;
    r14 = r0_5 << 1;
    if (res_4 != 0) {
        r3_2 = 0x40000000u;  // (from the original)
    }
    u32 res_5 = r0_5 & ~0x80000000u;  // (from the original)
    u32 r0_6 = res_5;
    r14 >>= 0x18;  // (from the original)
    if (res_5 != 0) {
        r0_6 = r14 - 0x40u;  // (from the original)
        if (r0_6 >> 0x1f) {  // (from the original)
            goto L_569fa4;
        }
        if (s32(r0_6) > 0x7f) {  // (from the original)
            r3_2 = 0x3f800000u;  // (from the original)
            goto L_569fa4;
        }
    }
    r3_2 = ((r0_5 << 9) >> 9) | r3_2 | (r0_6 & 0x7fu) << 0x17;  // (from the original)
L_569fa4:;
    *frame.at<u32>(8) = r3_2 << 1;
    u32 r0_7 = std::bit_cast<u32>(float(std::bit_cast<u32>(std::bit_cast<float>(r2_1))) * S1_3);
    u32 r3_3 = r0_7 & 0x80000000u;  // (from the original)
    if (r3_3 != 0) {
        r3_3 = 0x800000u;  // (from the original)
    }
    r14 = r0_7 >> 0x17u & 0xffu;  // (from the original)
    u32 res_7 = r0_7 & ~0x80000000u;  // (from the original)
    u32 r0_8 = res_7;
    u32 r12_5 = (r0_7 << 9) >> 9;
    if (res_7 == 0) {
        r12_6 = r12_5 >> 7;
        goto L_569ff8;
    }
    res_8 = r14 - 0x40u;  // (from the original)
    r0_8 = res_8;
    r12_6 = r12_5 >> 7;
    if (res_8 >> 0x1f) {  // (from the original)
        goto L_56a004;
    }
    if (s32(r0_8) > 0x7f) {  // (from the original)
        r3_3 = 0x7f0000u;  // (from the original)
        goto L_56a004;
    }
L_569ff8:;
    r3_3 = r12_6 | r3_3 | (r0_8 & 0x7fu) << 0x10;  // (from the original)
L_56a004:;
    *frame.at<u32>(0xc) = r3_3;  // (from the original)
    u32 r0_9 = std::bit_cast<u32>(S2_3 / float(std::bit_cast<u32>(std::bit_cast<float>(r2_1))));
    u32 res_9 = r0_9 & 0x80000000u;  // (from the original)
    u32 r2_2 = res_9;
    if (res_9 != 0) {
        r2_2 = 0x40000000u;  // (from the original)
    }
    u32 res_10 = r0_9 & ~0x80000000u;  // (from the original)
    u32 r0_10 = res_10;
    if (res_10 != 0) {
        r0_10 = ((r0_9 << 1) >> 0x18) - 0x40u;  // (from the original)
        if (r0_10 >> 0x1f) {  // (from the original)
            goto L_56a058;
        }
        if (s32(r0_10) > 0x7f) {  // (from the original)
            r2_2 = 0x3f800000u;  // (from the original)
            goto L_56a058;
        }
    }
    r2_2 = ((r0_9 << 9) >> 9) | r2_2 | (r0_10 & 0x7fu) << 0x17;  // (from the original)
L_56a058:;
    *frame.at<u32>(0x10) = r2_2 << 1;  // (from the original)
    *frame.at<u32>(0x28) = 0xbf0000;  // (from the original)
    float S1_4 = std::bit_cast<float>(*global_0056a114);
    float S2_4 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(lsl_r(1u, ((r1_1 & 0xffu) == 0 ? 0x10u : 0x18u) & 0xff) - 1u))));  // (from the original)
    float S0_2 = S1_4 / S2_4;
    u32 r0_11 = std::bit_cast<u32>(S0_2);
    u32 res_11 = r0_11 & 0x80000000u;  // (from the original)
    u32 r1_2 = res_11;
    u32 r2_3 = r0_11 & 0x7fffffu;  // (from the original)
    if (res_11 != 0) {
        r1_2 = 0x800000u;  // (from the original)
    }
    u32 res_12 = r0_11 & ~0x80000000u;  // (from the original)
    u32 r0_12 = res_12;
    u32 r3_7 = (r0_11 << 1) >> 0x18;  // (from the original)
    if (res_12 == 0) {
        r2_4 = r2_3 >> 7;
        goto L_56a0d0;
    }
    res_13 = r3_7 - 0x40u;  // (from the original)
    r0_12 = res_13;
    r2_4 = r2_3 >> 7;
    if (res_13 >> 0x1f) {  // (from the original)
        goto L_56a0dc;
    }
    if (s32(r0_12) > 0x7f) {  // (from the original)
        r1_2 = 0x7f0000u;  // (from the original)
        goto L_56a0dc;
    }
L_56a0d0:;
    r3_7 = r0_12 & 0x7fu;  // (from the original)
    r1_2 = r2_4 | r1_2 | r3_7 << 0x10;  // (from the original)
L_56a0dc:;
    *frame.at<u32>(0x30) = r1_2;  // (from the original)
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_4;
    guest::cpu()->s[2] = S2_4;
    guest::cpu()->s[3] = S3_3;
    guest::cpu()->s[4] = S4_2;
    guest::cpu()->s[5] = S5_2;
    guest::cpu()->s[6] = S6_1;
    guest::cpu()->s[7] = S7_1;
    call_007b0530(frame.at(0).addr(), 0x38u, 1u, r3_7);  // (from the original)
    u32 r3_8 = guest::cpu()->r[3];
    call_007b0530(0x8ae398u, 0x40u, 1u, r3_8);  // (from the original)
    return;
}

}  // namespace d_00569ebc
GUEST_EXPORT_FRAMED(0x00569ebc, d_00569ebc::f_00569ebc, 0x4010);  // pushes {r4, lr} first, as the original

// f_0056a178: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a178 {

inline guest::global<u32, 0x0056a1d0> global_0056a1d0;  // (from the original)

u32 f_0056a178(gptr<Float3> arg0) {
    float S4_1 = arg0->v[0];
    float S1_1 = arg0->v[1];
    float S2_1 = arg0->v[2];
    float S3_1 = sqrtf(S4_1 * S4_1 + S1_1 * S1_1 + S2_1 * S2_1);
    float S0_1 = fabsf(S3_1);
    u32 r1_1 = std::bit_cast<u32>(S0_1);
    if (s32(r1_1) <= 0x34000000) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 0u;
    }
    float S0_2 = std::bit_cast<float>(*global_0056a1d0) / S3_1;
    float S3_2 = S4_1 * S0_2;
    float S1_2 = S1_1 * S0_2;
    float S0_3 = S2_1 * S0_2;
    arg0->v[0] = S3_2;
    arg0->v[1] = S1_2;
    arg0->v[2] = S0_3;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_2;
    return 1u;
}

}  // namespace d_0056a178
GUEST_EXPORT(0x0056a178, d_0056a178::f_0056a178);

// f_0056a3fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a3fc {

struct __attribute__((packed)) Local_0056a3fc_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0056a3fc_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0056a3fc_ea_1, word_4, 0x4);  // (from the original)

inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)
inline guest::global<u32, 0x009752e0> global_009752e0;  // (from the original)
inline constexpr guest::Function<0x00133580, u32(u32, u32, u32, u32)> call_00133580;  // (from the original)
inline constexpr guest::Function<0x0053dffc, u32(u32, u32, u32)> call_0053dffc;  // (from the original)

u32 f_0056a3fc(u32 r0) {
    guest::StackFrame frame(0x110);  // the original's stack frame
    gptr<Local_0056a3fc_ea_1> ea_1 = gptr<Local_0056a3fc_ea_1>(frame.at(8).addr());
    ea_1->word_0 = frame.at(0x10).addr();  // (from the original)
    ea_1->word_4 = 0x100;  // (from the original)
    *gptr<u8>(0x100u + (*frame.at<u32>(8) - 1u)) = u8(u32(*global_008c9f1c));  // (from the original)
    *frame.at<u8>(0x10) = u8(u32(*global_008c9f1c));  // (from the original)
    *frame.at<u32>(4) = 0x9048b0;  // (from the original)
    u32 r0_2 = call_00133580(*global_009752e0, r0, frame.at(4).addr(), 0x100u);  // (from the original)
    if (r0_2 == 0) {
        return 0u;
    }
    *frame.at<u8>(0) = 0;
    call_0053dffc(r0_2, frame.at(0).addr(), frame.at(4).addr());
    u32 r4_1 = s32(s8(*frame.at<u8>(0)));
    return r4_1;
}

}  // namespace d_0056a3fc
GUEST_EXPORT_FRAMED(0x0056a3fc, d_0056a3fc::f_0056a3fc, 0x4010);  // pushes {r4, lr} first, as the original

// f_0056a4a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a4a4 {

struct __attribute__((packed)) Local_0056a4a4_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0056a4a4_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0056a4a4_ea_1, word_4, 0x4);  // (from the original)

inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)
inline guest::global<u32, 0x009752e0> global_009752e0;  // (from the original)
inline constexpr guest::Function<0x00133580, u32(u32, u32, u32, u32)> call_00133580;  // (from the original)
inline constexpr guest::Function<0x0053dffc, u32(u32, u32, u32)> call_0053dffc;  // (from the original)

u32 f_0056a4a4(u32 r0) {
    guest::StackFrame frame(0x110);  // the original's stack frame
    gptr<Local_0056a4a4_ea_1> ea_1 = gptr<Local_0056a4a4_ea_1>(frame.at(8).addr());
    ea_1->word_0 = frame.at(0x10).addr();  // (from the original)
    ea_1->word_4 = 0x100;  // (from the original)
    *gptr<u8>(0x100u + (*frame.at<u32>(8) - 1u)) = u8(u32(*global_008c9f1c));  // (from the original)
    *frame.at<u8>(0x10) = u8(u32(*global_008c9f1c));  // (from the original)
    *frame.at<u32>(4) = 0x9048b0;  // (from the original)
    u32 r0_2 = call_00133580(*global_009752e0, r0, frame.at(4).addr(), 0x100u);  // (from the original)
    if (r0_2 == 0) {
        return 0u;
    }
    *frame.at<u8>(0) = 0;
    call_0053dffc(r0_2, frame.at(0).addr(), frame.at(4).addr());
    u32 r4_1 = s32(s8(*frame.at<u8>(0)));
    return r4_1;
}

}  // namespace d_0056a4a4
GUEST_EXPORT_FRAMED(0x0056a4a4, d_0056a4a4::f_0056a4a4, 0x4010);  // pushes {r4, lr} first, as the original

// f_0056a534: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a534 {

struct __attribute__((packed)) Object_0056a534_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0056a534_2, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00125b3c, u32(u32, u32, u32, u32)> call_00125b3c;  // (from the original)

void f_0056a534(u32 r0_unused, u32 r1_unused, gptr<Object_0056a534_2> arg2) {
    call_00125b3c(guest::cpu()->r[0], guest::cpu()->r[1], arg2->word_4, guest::cpu()->r[3]);
    return;
}

}  // namespace d_0056a534
GUEST_EXPORT(0x0056a534, d_0056a534::f_0056a534);

// f_0056a53c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a53c {

struct __attribute__((packed)) Object_0056a53c_0 {
    u8 unknown_0[0x30];  // (not used here)
    u32 word_30;
};
GUEST_OFFSET(Object_0056a53c_0, word_30, 0x30);  // (from the original)

struct __attribute__((packed)) Local_0056a53c_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0056a53c_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0056a53c_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0056a53c_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0056a53c_ea_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_0056a53c_ea_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0056a53c_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0056a53c_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0056a53c_ea_2, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x0053dfa0, u32(u32, u32, u32)> call_0053dfa0;  // (from the original)

u32 f_0056a53c(gptr<Object_0056a53c_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = arg0.addr();
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
        call_00135740(0xae563cu, r1, r2, r3);  // (from the original)
        u32 r0_2 = arg0->word_30;
        *frame.at<u32>(0) = 0;
        call_0053dfa0(r0_2, frame.at(0).addr(), r0);
        u32 r5_1 = *frame.at<u32>(0);
        call_00137e84(0xae563cu, guest::cpu()->r[1]);  // (from the original)
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
GUEST_OFFSET(Object_0056a58c_0, word_30, 0x30);  // (from the original)

inline guest::global<u32, 0x009752e0> global_009752e0;  // (from the original)
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x00542358, u32(u32, u32, u32, u32)> call_00542358;  // (from the original)

u32 f_0056a58c(gptr<Object_0056a58c_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r0 = arg0.addr();
    *frame.at<u32>(0) = r3;
    if (arg0->word_30 != 0) {
        return 0u;
    }
    call_00135740(0xae563cu, r1, r2, r3);  // (from the original)
    u32 r0_2 = *global_009752e0;
    *frame.at<u32>(0) = 0;
    u32 r0_3 = call_00542358(r0_2, r0, r1, 0u);
    arg0->word_30 = r0_3;
    call_00137e84(0xae563cu, guest::cpu()->r[1]);  // (from the original)
    r1 = guest::cpu()->r[1];
    return r0_3 == 0 ? 0u : 1u;
}

}  // namespace d_0056a58c
GUEST_EXPORT_FRAMED(0x0056a58c, d_0056a58c::f_0056a58c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0056a5fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a5fc {

struct __attribute__((packed)) Object_0056a5fc_0 {
    u8 unknown_0[0x30];  // (not used here)
    u32 word_30;
};
GUEST_OFFSET(Object_0056a5fc_0, word_30, 0x30);  // (from the original)

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x0053e71c, u32(u32, u32, u32, u32)> call_0053e71c;  // (from the original)

u32 f_0056a5fc(gptr<Object_0056a5fc_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_1 = arg0->word_30;
    if (r0_1 != 0) {
        call_00135740(0xae563cu, r1, r2, r3);  // (from the original)
        u32 r0_2 = arg0->word_30;
        *frame.at<u32>(4) = 0;
        *frame.at<u32>(0) = r2;
        call_0053e71c(r0_2, frame.at(4).addr(), r0, r1);
        u32 r5_1 = *frame.at<u32>(4);
        call_00137e84(0xae563cu, guest::cpu()->r[1]);  // (from the original)
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
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0056a664_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0056a664_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0056a664_0, word_8, 0x8);  // (from the original)


void f_0056a664(gptr<Object_0056a664_0> arg0) {
    u32 fpsr = guest::cpu()->fpscr;
    float S0_1 = std::bit_cast<float>(arg0->word_0);
    float S1_1 = std::bit_cast<float>(arg0->word_4);
    float S2_1 = S0_1;
    u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S1_1, S0_1);  // (from the original)
    float S3_1 = std::bit_cast<float>(arg0->word_8);
    if (!(fpsr_1 >> 0x1e & 1) && fpsr_1 >> 0x1f == (fpsr_1 >> 0x1c & 1)) {  // (from the original)
        S0_1 = S1_1;
    }
    u32 fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S3_1, S0_1);  // (from the original)
    if (!(fpsr_2 >> 0x1e & 1) && fpsr_2 >> 0x1f == (fpsr_2 >> 0x1c & 1)) {  // (from the original)
        S0_1 = S3_1;
    }
    u32 r1_1 = std::bit_cast<u32>(S0_1);
    if (s32(r1_1) <= 0x3f800000) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return;
    }
    arg0->word_0 = std::bit_cast<u32>(S2_1 / S0_1);
    arg0->word_4 = std::bit_cast<u32>(S1_1 / S0_1);
    float S1_2 = S3_1 / S0_1;
    arg0->word_8 = std::bit_cast<u32>(S1_2);
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_2;
    return;
}

}  // namespace d_0056a664
GUEST_EXPORT(0x0056a664, d_0056a664::f_0056a664);

// f_0056a724: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a724 {


u32 f_0056a724(gptr<ssys__ma__Allocator> arg0) {
    u32 r0_1 = arg0->word_4;
    u32 r2_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x1cu);  // (from the original)
    // virtual function 7 of r0_1
    return guest::call_address<u32>(r2_1, r0_1, guest::cpu()->r[1], r2_1, guest::cpu()->r[3]);
}

}  // namespace d_0056a724
GUEST_EXPORT(0x0056a724, d_0056a724::f_0056a724);

// f_0056a734: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a734 {


u32 f_0056a734(gptr<ssys__ma__Allocator> arg0, u32 r1, u32 r2) {
    u32 r0_1 = arg0->word_4;
    if (r2 == 0) {
        r2 = 1u;
    }
    u32 r3_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x18u);  // (from the original)
    // virtual function 6 of r0_1
    return guest::call_address<u32>(r3_1, r0_1, r1 + r2, r2, r3_1);
}

}  // namespace d_0056a734
GUEST_EXPORT(0x0056a734, d_0056a734::f_0056a734);

// f_0056a758: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a758 {

inline guest::global<u32, 0x00975c38> global_00975c38;  // (from the original)
inline constexpr guest::Function<0x0056a780, u32(u32, u32, u32, u32)> call_0056a780;  // (from the original)

u32 f_0056a758() {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r12_1 = *global_00975c38;
    *frame.at<u32>(0) = 0;
    *frame.at<u32>(4) = r12_1;
    call_0056a780(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return guest::cpu()->r[0];
}

}  // namespace d_0056a758
GUEST_EXPORT_FRAMED(0x0056a758, d_0056a758::f_0056a758, 0x4010);  // pushes {r4, lr} first, as the original

// f_0056a94c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a94c {

inline guest::global<u32, 0x00975c34> global_00975c34;  // (from the original)
inline guest::global<u32, 0x00975c38> global_00975c38;  // (from the original)
inline constexpr guest::Function<0x0056a780, u32(u32, u32, u32, u32)> call_0056a780;  // (from the original)

u32 f_0056a94c() {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r3_1 = *global_00975c34;
    u32 r12_1 = *global_00975c38;
    *frame.at<u32>(0) = 1;
    *frame.at<u32>(4) = r12_1;
    call_0056a780(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], r3_1);
    return guest::cpu()->r[0];
}

}  // namespace d_0056a94c
GUEST_EXPORT_FRAMED(0x0056a94c, d_0056a94c::f_0056a94c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0056a974: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a974 {

inline guest::global<u32, 0x00975c38> global_00975c38;  // (from the original)
inline constexpr guest::Function<0x0056a780, u32(u32, u32, u32, u32)> call_0056a780;  // (from the original)

u32 f_0056a974() {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r12_1 = *global_00975c38;
    *frame.at<u32>(0) = 1;
    *frame.at<u32>(4) = r12_1;
    call_0056a780(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return guest::cpu()->r[0];
}

}  // namespace d_0056a974
GUEST_EXPORT_FRAMED(0x0056a974, d_0056a974::f_0056a974, 0x4010);  // pushes {r4, lr} first, as the original

// f_0056a99c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a99c {

inline constexpr guest::Function<0x0056a780, u32(u32, u32, u32, u32)> call_0056a780;  // (from the original)

u32 f_0056a99c() {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r12_1 = *frame.at<u32>(0x10);  // (from the original)
    *frame.at<u32>(0) = 1;
    *frame.at<u32>(4) = r12_1;
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
GUEST_OFFSET(Object_0056a9bc_0, byte_e8, 0xe8);  // (from the original)
GUEST_OFFSET(Object_0056a9bc_0, byte_e9, 0xe9);  // (from the original)
GUEST_OFFSET(Object_0056a9bc_0, byte_ea, 0xea);  // (from the original)

inline constexpr guest::Function<0x00135740, u32(u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x00138920, u32(u32, u32, u32, u32)> call_00138920;  // (from the original)
inline constexpr guest::Function<0x0013f134, u32(u32, u32)> call_0013f134;  // (from the original)

u32 f_0056a9bc(gptr<Object_0056a9bc_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = arg0->byte_e8;
    u32 r1 = arg0->byte_e8;
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    if (r0_1 == 6u) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    if (u32(arg0->byte_e8) != 1u && u32(arg0->byte_e8) != 3u && u32(arg0->byte_e8) != 4u && u32(arg0->byte_e8) != 5u) {
        if (u32(arg0->byte_e8) == 2u) {
            goto L_56aa64;
        }
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    arg0->byte_e8 = 6;
    r0_2 = call_00138920(0xae55c8u, r0, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        return 0u;
    }
    call_00135740(0xae55d4u, r1);  // (from the original)
    call_0013f134(0xae55c8u, r0);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    call_00137e84(0xae55d4u, r1_1);  // (from the original)
    r1 = guest::cpu()->r[1];
    return 0u;
L_56aa64:;
    if (u32(arg0->byte_e9) != 0) {
        arg0->byte_ea = 1;
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_0056a9bc
GUEST_EXPORT_FRAMED(0x0056a9bc, d_0056a9bc::f_0056a9bc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0056aa98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056aa98 {

inline constexpr guest::Function<0x0056a780, u32(u32, u32, u32, u32)> call_0056a780;  // (from the original)

u32 f_0056aa98() {
    guest::StackFrame frame(0x8);  // the original's stack frame
    *frame.at<u32>(0) = 0;
    *frame.at<u32>(4) = 0;
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
GUEST_OFFSET(Object_0056aab8_0, byte_e8, 0xe8);  // (from the original)


u32 f_0056aab8(gptr<Object_0056aab8_0> arg0) {
    u32 r0_1 = arg0->byte_e8;
    if (r0_1 == 3u || r0_1 == 4u) {
        return 1u;
    }
    if (r0_1 != 5u) {
        return 0u;
    }
    return 1u;
}

}  // namespace d_0056aab8
GUEST_EXPORT(0x0056aab8, d_0056aab8::f_0056aab8);

// f_0056ae38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056ae38 {

struct __attribute__((packed)) Object_0056ae38_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0056ae38_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002f9e1c, u32(u32, u32, u32, u32)> call_002f9e1c;  // (from the original)

void f_0056ae38(gptr<Object_0056ae38_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r1_2 = 0;
    u32 r7_1 = arg0->word_0;
    u32 r6_1 = *gptr<u32>(guest::cpu()->r[13] + 0x20u);  // (from the original)
    u32 r9_1 = r1 - r7_1;
    if (r7_1 == r1) {
        return;
    }
    u32 r0_1 = call_002f9e1c(r9_1, r2, r2, r3);
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
            goto L_56ae90;
        }
        r1_2 = 0u - r3;
        if (s32(r1_2) > s32(r0_1)) {
            r0_1 = r1_2;
        }
L_56ae90:;
        *gptr<u32>(r0) = r0_1 + r7_1;
        return;
    }
    if (s32(r9_1) >= 0) {
        u32 r0_2 = r7_1 + r6_1;
        u32 r1_3 = r1 - r0_2;
        *gptr<u32>(r0) = r0_2;
        if (r1_3 != 0 && r1_3 >> 0x1f == (r1_3 & (r1_3 ^ r1_3)) >> 0x1f) {  // (from the original)
            return;
        }
    } else {
        u32 r0_3 = r7_1 - r6_1;
        *gptr<u32>(r0) = r0_3;
        if ((r1 - r0_3) >> 0x1f) {  // (from the original)
            return;
        }
    }
    *gptr<u32>(r0) = r1;
    return;
}

}  // namespace d_0056ae38
GUEST_EXPORT_FRAMED(0x0056ae38, d_0056ae38::f_0056ae38, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0056aedc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056aedc {

struct __attribute__((packed)) Object_0056aedc_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_0056aedc_0, half_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002f9e1c, u32(u32, u32, u32, u32)> call_002f9e1c;  // (from the original)

u32 f_0056aedc(gptr<Object_0056aedc_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r6_1 = s32(s16(arg0->half_0));
    u32 r0_3 = call_002f9e1c(sxth(r1 - r6_1), r2, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r0_4 = sxth(r0_3);
    if (s32(r0_4) > s32(r3)) {
        r0_4 = r6_1 + r3;
        arg0->half_0 = u16(r0_4);
        return r0_4;
    }
    r1_1 = 0u - r3;
    u32 res_1 = r0_4 - r1_1;
    u32 nf_1 = res_1 >> 0x1f;  // (from the original)
    u32 vf_1 = ((r0_4 ^ r1_1) & (r0_4 ^ res_1)) >> 0x1f;  // (from the original)
    if (nf_1 == vf_1) {
        r0_4 += r6_1;
    }
    if (nf_1 != vf_1) {
        r0_4 = r6_1 - r3;
    }
    if (nf_1 == vf_1) {
        arg0->half_0 = u16(r0_4);
        guest::cpu()->r[1] = r1_1;
        return r0_4;
    }
    arg0->half_0 = u16(r0_4);
    guest::cpu()->r[1] = r1_1;
    return r0_4;
}

}  // namespace d_0056aedc
GUEST_EXPORT_FRAMED(0x0056aedc, d_0056aedc::f_0056aedc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0056af2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056af2c {

struct __attribute__((packed)) Object_0056af2c_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_0056af2c_0, half_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002f9e1c, u32(u32, u32, u32, u32)> call_002f9e1c;  // (from the original)

u32 f_0056af2c(gptr<Object_0056af2c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0_5 = 0;
    u32 r5_1 = r1;
    u32 r7_1 = s32(s16(arg0->half_0));
    u32 r6_1 = *gptr<u32>(guest::cpu()->r[13] + 0x20u);  // (from the original)
    u32 r9_1 = sxth(r1 - r7_1);
    if (r7_1 == r5_1) {
        r0_5 = sxth(r5_1 - u32(arg0->half_0));
        guest::cpu()->r[1] = r1;
        return r0_5;
    }
    u32 r0_1 = call_002f9e1c(r9_1, r2, r2, r3);
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
            goto L_56af8c;
        }
        r1 = 0u - r3;
        if (s32(r1) > s32(r0_2)) {
            r0_2 = sxth(r1);
        }
L_56af8c:;
        arg0->half_0 = u16(r0_2 + r7_1);
        r0_5 = sxth(r5_1 - u32(arg0->half_0));
        guest::cpu()->r[1] = r1;
        return r0_5;
    }
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
    r0_5 = sxth(r5_1 - u32(arg0->half_0));
    guest::cpu()->r[1] = r1;
    return r0_5;
}

}  // namespace d_0056af2c
GUEST_EXPORT_FRAMED(0x0056af2c, d_0056af2c::f_0056af2c, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0056b288: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056b288 {

struct __attribute__((packed)) Object_0056b288_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0056b288_0, word_0, 0x0);  // (from the original)

inline guest::global<u32, 0x0056b35c> global_0056b35c;  // (from the original)

void f_0056b288(gptr<Object_0056b288_0> arg0, float S0, float S1, float S2, float S3) {
    u32 fpsr = guest::cpu()->fpscr;
    float S4_1 = 0;
    u32 fpsr_1 = 0;
    float S1_1 = 0;
    u32 fpsr_2 = 0;
    float S1_2 = 0;
    u32 fpsr_3 = 0;
    float S5_1 = std::bit_cast<float>(arg0->word_0);
    float S6 = std::bit_cast<float>(*global_0056b35c);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S5_1, S0);  // (from the original)
    if (fpsr >> 0x1e & 1) {  // (from the original)
        goto L_56b344;
    }
    S4_1 = (S0 - S5_1) * S1;
    fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S4_1, S3);  // (from the original)
    if (fpsr_1 >> 0x1f != (fpsr_1 >> 0x1c & 1)) {  // (from the original)
        S1_1 = -S3;
        fpsr_1 = fpsr_1 & 0xfffffffu | vfp_cmpf(S4_1, S1_1);  // (from the original)
        if (fpsr_1 >> 0x1d & 1 && !(fpsr_1 >> 0x1e & 1)) {  // (from the original)
            goto L_56b2e8;
        }
    }
    fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S4_1, S2);  // (from the original)
    S1_2 = -S2;
    if (!(fpsr_2 >> 0x1e & 1) && fpsr_2 >> 0x1f == (fpsr_2 >> 0x1c & 1)) {  // (from the original)
        S4_1 = S2;
    }
    fpsr = fpsr_2 & 0xfffffffu | vfp_cmpf(S4_1, S1_2);  // (from the original)
    if (!(fpsr >> 0x1d & 1)) {  // (from the original)
        S4_1 = S1_2;
    }
    arg0->word_0 = std::bit_cast<u32>(S5_1 + S4_1);
    goto L_56b344;
L_56b2e8:;
    fpsr_3 = fpsr_1 & 0xfffffffu | vfp_cmpf(S4_1, S6);  // (from the original)
    if (fpsr_3 >> 0x1e & 1 || fpsr_3 >> 0x1f != (fpsr_3 >> 0x1c & 1)) {  // (from the original)
        goto L_56b31c;
    }
    fpsr = fpsr_3 & 0xfffffffu | vfp_cmpf(S4_1, S3);  // (from the original)
    if (fpsr >> 0x1d & 1) {  // (from the original)
        goto L_56b344;
    }
    S1 = S5_1 + S3;
    arg0->word_0 = std::bit_cast<u32>(S1);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1, S0);  // (from the original)
    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        goto L_56b33c;
    }
L_56b314:;
    arg0->word_0 = std::bit_cast<u32>(S1);
    goto L_56b344;
L_56b31c:;
    fpsr = fpsr_3 & 0xfffffffu | vfp_cmpf(S4_1, S1_1);  // (from the original)
    if (fpsr >> 0x1e & 1 || fpsr >> 0x1f != (fpsr >> 0x1c & 1)) {  // (from the original)
        goto L_56b344;
    }
    S1 = S5_1 - S3;
    arg0->word_0 = std::bit_cast<u32>(S1);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1, S0);  // (from the original)
    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        guest::preempt();
        goto L_56b314;
    }
L_56b33c:;
    S1 = S0;
    guest::preempt();
    goto L_56b314;
L_56b344:;
    float S1_3 = std::bit_cast<float>(arg0->word_0);
    float S0_1 = S0 - S1_3;
    u32 fpsr_4 = fpsr & 0xfffffffu | vfp_cmpf(S0_1, S6);  // (from the original)
    if (fpsr_4 >> 0x1e & 1 || fpsr_4 >> 0x1f != (fpsr_4 >> 0x1c & 1)) {  // (from the original)
        S0_1 = -S0_1;
    }
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_3;
    return;
}

}  // namespace d_0056b288
GUEST_EXPORT(0x0056b288, d_0056b288::f_0056b288);

// f_0056b5a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056b5a4 {

struct __attribute__((packed)) Local_0056b5a4_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0056b5a4_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0056b5a4_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0056b5a4_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0056b5a4_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0056b5a4_ea_2, word_4, 0x4);  // (from the original)

inline guest::global<u8, 0x0095c4d2> global_0095c4d2;  // (from the original)
inline constexpr guest::Function<0x0020d914, u32(u32)> call_0020d914;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32)> call_002fae84;  // (from the original)

u32 f_0056b5a4(u32 r0) {
    u32 r0_1 = call_002fae84(r0);
    gptr<Local_0056b5a4_ea_1> ea_1 = gptr<Local_0056b5a4_ea_1>(0x95c4e8u);  // (from the original)
    u32 r1_1 = ea_1->word_0;
    u32 r2_1 = ea_1->word_4;
    gptr<Local_0056b5a4_ea_2> ea_2 = gptr<Local_0056b5a4_ea_2>(r0_1 + 0x62120u);  // (from the original)
    ea_2->word_0 = r1_1;
    ea_2->word_4 = r2_1;
    u32 r0_2 = *global_0095c4d2;
    if ((r0_2 & 1u) != 0) {
        u32 r0_3 = call_002fae84(r0_2);
        call_0020d914(r0_3 + 0x62120u);  // (from the original)
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

struct __attribute__((packed)) Local_0056bd04_r0_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0056bd04_r0_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0056bd04_r0_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0056bd04_r1_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0056bd04_r1_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0056bd04_r1_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0056c7c8, u32(u32, u32, u32, u32)> call_0056c7c8;  // (from the original)

u32 f_0056bd04() {
    gptr<Local_0056bd04_r1_1> r1_1 = gptr<Local_0056bd04_r1_1>(0x95c4f0u);  // (from the original)
    gptr<Local_0056bd04_r0_1> r0_1 = gptr<Local_0056bd04_r0_1>(0x95c4e8u);  // (from the original)
    u32 r1_2 = r1_1->word_0;
    u32 r2_1 = r1_1->word_4;
    r0_1->word_0 = r1_2;
    r0_1->word_4 = r2_1;
    return call_0056c7c8(r0_1.addr(), r1_2, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_0056bd04
GUEST_EXPORT(0x0056bd04, d_0056bd04::f_0056bd04);

// f_0056bdec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056bdec {

inline guest::global<u32, 0x0095c518> global_0095c518;  // (from the original)
inline guest::global<u32, 0x0095c51c> global_0095c51c;  // (from the original)
inline constexpr guest::Function<0x00124130, u32(u32, u32, u32, u32)> call_00124130;  // (from the original)

u32 f_0056bdec(u32 r0_unused, u32 r1, u32 r2) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    call_00124130(frame.at(0).addr(), r1, r2, guest::cpu()->r[3]);
    u32 r1_1 = *frame.at<u32>(0);
    u32 r2_1 = *frame.at<u32>(4);
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
        u32 res_1 = r4_1 - r3;
        u32 zf_1 = res_1 == 0;
        if (!!zf_1 || res_1 >> 0x1f != ((r4_1 ^ r3) & (r4_1 ^ res_1)) >> 0x1f) {  // (from the original)
            if (!zf_1 || s32(u32(*gptr<u8>(r2 + 1u))) < s32(r1)) {
                goto L_56bec8;
            }
        }
        return r0;
L_56bec8:;
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

inline guest::global<u8, 0x0095c4d2> global_0095c4d2;  // (from the original)

u32 f_0056c3d4() {
    return (u32(*global_0095c4d2) & 0x10u) >> 4;  // (from the original)
}

}  // namespace d_0056c3d4
GUEST_EXPORT(0x0056c3d4, d_0056c3d4::f_0056c3d4);

// f_0056c6d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056c6d8 {

inline guest::global<u8, 0x0095c4d2> global_0095c4d2;  // (from the original)

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

inline guest::global<u8, 0x0095c4d2> global_0095c4d2;  // (from the original)

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

inline guest::global<u8, 0x0095c4d2> global_0095c4d2;  // (from the original)

void f_0056c7b0() {
    *global_0095c4d2 = u8(u32(*global_0095c4d2) | 4u);
    return;
}

}  // namespace d_0056c7b0
GUEST_EXPORT(0x0056c7b0, d_0056c7b0::f_0056c7b0);

// f_0056cf34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056cf34 {

inline guest::global<u8, 0x0095c4d2> global_0095c4d2;  // (from the original)

u32 f_0056cf34() {
    return (u32(*global_0095c4d2) & 8u) >> 3;
}

}  // namespace d_0056cf34
GUEST_EXPORT(0x0056cf34, d_0056cf34::f_0056cf34);

// f_0056cf7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056cf7c {

struct __attribute__((packed)) Local_0056cf7c_r0_6 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(Local_0056cf7c_r0_6, byte_8, 0x8);  // (from the original)

inline guest::global<u8, 0x0095c4d2> global_0095c4d2;  // (from the original)
inline guest::global<u32, 0x00ad56b0> global_00ad56b0;  // (from the original)
inline guest::global<u32, 0x00ad56b4> global_00ad56b4;  // (from the original)
inline constexpr guest::Function<0x0020d914, u32(u32, u32)> call_0020d914;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32)> call_002fae84;  // (from the original)

void f_0056cf7c() {
    u32 r2_3 = 0;
    u32 res_3 = 0;
    u32 nf_2 = 0;
    u32 vf_2 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    u32 r0_4 = 0;
    goto L_56cf7c;
L_56cf7c:;
    guest::cpu()->r[13] -= 8u;
    u32 r2_1 = *global_00ad56b0;
    u32 r0_1 = *global_00ad56b4;
    u32 r1_2 = *global_0095c4d2;
    u32 res_1 = r2_1 - 0x7dcu;  // (from the original)
    u32 nf_1 = res_1 >> 0x1f;  // (from the original)
    u32 zf_1 = res_1 == 0;
    u32 vf_1 = ((r2_1 ^ 0x7dcu) & (r2_1 ^ res_1)) >> 0x1f;  // (from the original)
    if (zf_1 || nf_1 != vf_1) {
        u32 r2_2 = sxtb(r0_1);
        u32 res_2 = r2_2 - 1u;
        nf_1 = res_2 >> 0x1f;  // (from the original)
        zf_1 = res_2 == 0;
        vf_1 = ((r2_2 ^ 1u) & (r2_2 ^ res_2)) >> 0x1f;  // (from the original)
    }
    if (!zf_1 && nf_1 == vf_1) {
        goto L_56cfe0;
    }
    r2_3 = s32(r0_1 << 0x10) >> 0x18;  // (from the original)
    res_3 = r2_3 - 1u;
    nf_2 = res_3 >> 0x1f;  // (from the original)
    vf_2 = ((r2_3 ^ 1u) & (r2_3 ^ res_3)) >> 0x1f;  // (from the original)
    if (res_3 == 0 || nf_2 != vf_2) {
        u32 r0_2 = s32(r0_1) >> 0x18;  // (from the original)
        u32 res_4 = r0_2 - 6u;
        nf_2 = res_4 >> 0x1f;  // (from the original)
        vf_2 = ((r0_2 ^ 6u) & (r0_2 ^ res_4)) >> 0x1f;  // (from the original)
    }
    if (nf_2 == vf_2) {
        goto L_56cfe0;
    }
    r1_3 = r1_2 | 1u;
    *global_0095c4d2 = u8(r1_3);
    r0_3 = call_002fae84(0x95c4d2u, r1_3);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    r0_4 = r0_3 + 0x62120u;  // (from the original)
    call_0020d914(r0_4, r1_4);
    return;
L_56cfe0:;
    u32 r1_5 = r1_2 & ~1u;
    *global_0095c4d2 = u8(r1_5);
    u32 r0_5 = call_002fae84(0x95c4d2u, r1_5);  // (from the original)
    guest::cpu()->r[13] += 8u;
    gptr<Local_0056cf7c_r0_6> r0_6 = gptr<Local_0056cf7c_r0_6>(r0_5 + 0x62120u);  // (from the original)
    u32 r1_6 = u32(r0_6->byte_8) & ~1u;
    r0_6->byte_8 = u8(r1_6);
    guest::cpu()->r[1] = r1_6;
    return;
}

}  // namespace d_0056cf7c
GUEST_EXPORT(0x0056cf7c, d_0056cf7c::f_0056cf7c);

// f_0056d828: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056d828 {

struct __attribute__((packed)) Local_0056d828_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0056d828_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0056d828_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0056d828_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0056d828_ea_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_0056d828_ea_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0056d828_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0056d828_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0056d828_ea_2, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_0056d828_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0056d828_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0056d828_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0056d828_ea_3, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x0056d874, u32(u32, u32, u32, u32)> call_0056d874;  // (from the original)

void f_0056d828(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0056d828_ea_1> ea_1 = gptr<Local_0056d828_ea_1>(r13 - 0x10);  // (from the original)
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r14;
    r13 -= 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_1 = call_00301e20(r1, r1, guest::cpu()->r[2], r3);
    u32 r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        *gptr<u16>(r13) = u16(u32(*gptr<u16>(r1 + 0x2cu)));  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0056d874(r0, r13, guest::cpu()->r[2], r3_1);
        gptr<Local_0056d828_ea_2> ea_2 = gptr<Local_0056d828_ea_2>(r13);
        r13 += 0x10;  // (from the original)
        u32 r4_1 = ea_2->word_4;
        u32 r5_1 = ea_2->word_8;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_1;
        guest::cpu()->r[13] = r13;
        return;
    }
    u32 r1_2 = *gptr<u32>(*gptr<u32>(r0) + 0x1cu);  // (from the original)
    r13 += 4u;
    gptr<Local_0056d828_ea_3> ea_3 = gptr<Local_0056d828_ea_3>(r13);
    r13 += 0xc;  // (from the original)
    u32 r4_2 = ea_3->word_0;
    u32 r5_2 = ea_3->word_4;
    r14 = ea_3->word_8;
    // virtual function 7 of r0
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::call_address<u32>(r1_2, r0, r1_2, guest::cpu()->r[2], r3_1);
    return;
}

}  // namespace d_0056d828
GUEST_EXPORT(0x0056d828, d_0056d828::f_0056d828);

// f_0056d9cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056d9cc {

inline guest::global<u32, 0x0095debc> global_0095debc;  // (from the original)
inline constexpr guest::Function<0x005ca3b0, u32(u32, u32, u32, u32)> call_005ca3b0;  // (from the original)
inline constexpr guest::Function<0x0075c0ec, u32(u32, u32, u32, u32)> call_0075c0ec;  // (from the original)

void f_0056d9cc(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::cpu()->r[13] -= 8u;
    u32 r0_1 = call_005ca3b0(r1, r1, r2, r3);
    u32 r2_1 = guest::cpu()->r[2];
    if (r0_1 + 1u != 0) {
        u32 r0_2 = *global_0095debc;
        guest::cpu()->r[13] += 8u;
        call_0075c0ec(r0_2, r0, 0x56da14u, r0_1);
        return;  // (from the original)
    }
    u32 r1_1 = *gptr<u32>(*gptr<u32>(r0) + 0x1cu);  // (from the original)
    guest::cpu()->r[13] += 8u;
    // virtual function 7 of r0
    guest::call_address<u32>(r1_1, r0, r1_1, r2_1, r0_1);
    return;
}

}  // namespace d_0056d9cc
GUEST_EXPORT(0x0056d9cc, d_0056d9cc::f_0056d9cc);

// f_0056daa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056daa8 {

inline guest::global<u32, 0x0095debc> global_0095debc;  // (from the original)
inline constexpr guest::Function<0x0075c0ec, u32(u32, u32, u32, u32)> call_0075c0ec;  // (from the original)

u32 f_0056daa8(u32 r0, u32 r1) {
    return call_0075c0ec(*global_0095debc, r0, 0x56dac0u, r1);  // (from the original)
}

}  // namespace d_0056daa8
GUEST_EXPORT(0x0056daa8, d_0056daa8::f_0056daa8);

// f_0056e5c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056e5c4 {

struct __attribute__((packed)) Object_0056e5c4_0 {
    u8 unknown_0[0x2e];  // (not used here)
    u16 half_2e;
    u8 unknown_30[0x5bc];  // (not used here)
    u8 byte_5ec;
    u8 unknown_5ed[0x3];  // (not used here)
    u32 word_5f0;
    u8 unknown_5f4[0x209];  // (not used here)
    u8 byte_7fd;
};
GUEST_OFFSET(Object_0056e5c4_0, half_2e, 0x2e);  // (from the original)
GUEST_OFFSET(Object_0056e5c4_0, byte_5ec, 0x5ec);  // (from the original)
GUEST_OFFSET(Object_0056e5c4_0, word_5f0, 0x5f0);  // (from the original)
GUEST_OFFSET(Object_0056e5c4_0, byte_7fd, 0x7fd);  // (from the original)

inline guest::global<u32, 0x0094edd8> global_0094edd8;  // (from the original)
inline guest::global<u32, 0x00952a18> global_00952a18;  // (from the original)
inline constexpr guest::Function<0x0068eaf0, u32(u32, u32)> call_0068eaf0;  // (from the original)
inline constexpr guest::Function<0x0068ec3c, u32(u32, u32)> call_0068ec3c;  // (from the original)
inline constexpr guest::Function<0x00748534, u32(u32, u32)> call_00748534;  // (from the original)

u32 f_0056e5c4(gptr<Object_0056e5c4_0> arg0, u32 r1, float S0) {
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    float S0_1 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    u32 r5_1 = r1;
    if (u32(arg0->byte_5ec) == 2u || *global_0094edd8 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    u32 r0_1 = arg0->word_5f0;
    if (r0_1 == 0) {
        goto L_56e638;
    }
    r0_2 = call_00748534(r0_1, r1);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    if (r0_2 == 0) {
        goto L_56e638;
    }
    if (u32(arg0->byte_7fd) == 1u) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return 0u;
    }
    r1_1 = s32(s16(arg0->half_2e));
    r0_3 = call_0068ec3c(r5_1, r1_1);
    r1_2 = guest::cpu()->r[1];
    S0_1 = std::bit_cast<float>(*global_00952a18);
    guest::cpu()->s[0] = S0_1;
    r0_4 = call_0068eaf0(r5_1, r1_2);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0_4 | r0_3;
L_56e638:;
    u32 r0_6 = arg0->word_5f0;
    if (r0_6 != 0) {
        if ((u32(*gptr<u8>(r0_6 + 0x1cu)) >> 2u & 1u) == 0) {  // (from the original)
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[0] = S0;
            return 0u;
        }
    }
    float S0_3 = std::bit_cast<float>(*global_00952a18);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->s[0] = S0_3;
    return call_0068eaf0(r5_1, r1);
}

}  // namespace d_0056e5c4
GUEST_EXPORT(0x0056e5c4, d_0056e5c4::f_0056e5c4);

// f_0056e6a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056e6a8 {

struct __attribute__((packed)) Object_0056e6a8_0 {
    u8 unknown_0[0x300];  // (not used here)
    u32 word_300;
};
GUEST_OFFSET(Object_0056e6a8_0, word_300, 0x300);  // (from the original)


void f_0056e6a8(gptr<Object_0056e6a8_0> arg0) {
    u32 r0_1 = arg0->word_300;
    if (r0_1 == 0) {
        return;
    }
    u32 r2_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x3cu);  // (from the original)
    // virtual function 15 of r0_1
    guest::call_address<u32>(r2_1, r0_1, guest::cpu()->r[1], r2_1, guest::cpu()->r[3]);
    return;
}

}  // namespace d_0056e6a8
GUEST_EXPORT(0x0056e6a8, d_0056e6a8::f_0056e6a8);

// f_0056f1b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056f1b8 {

struct __attribute__((packed)) Object_0056f1b8_0 {
    u8 unknown_0[0x5f8];  // (not used here)
    u8 byte_5f8;
    u8 unknown_5f9[0x16b];  // (not used here)
    u16 half_764;
    u8 unknown_766[0x97];  // (not used here)
    u8 byte_7fd;
};
GUEST_OFFSET(Object_0056f1b8_0, byte_5f8, 0x5f8);  // (from the original)
GUEST_OFFSET(Object_0056f1b8_0, half_764, 0x764);  // (from the original)
GUEST_OFFSET(Object_0056f1b8_0, byte_7fd, 0x7fd);  // (from the original)

struct __attribute__((packed)) Local_0056f1b8_r0_4 {
    u8 unknown_0[0x1b8];  // (not used here)
    u32 word_1b8;
    u8 unknown_1bc[0x4];  // (not used here)
    u32 word_1c0;
};
GUEST_OFFSET(Local_0056f1b8_r0_4, word_1b8, 0x1b8);  // (from the original)
GUEST_OFFSET(Local_0056f1b8_r0_4, word_1c0, 0x1c0);  // (from the original)

inline constexpr guest::Function<0x006ef0a0, u32(u32, u32)> call_006ef0a0;  // (from the original)
inline constexpr guest::Function<0x006ef108, u32(u32, u32, u32, u32)> call_006ef108;  // (from the original)

void f_0056f1b8(gptr<Object_0056f1b8_0> arg0, u32 r1, u32 r2_unused, u32 r3, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 res_2 = 0;
    u32 res_3 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    gptr<Local_0056f1b8_r0_4> r0_4 = gptr<Local_0056f1b8_r0_4>(0u);
    u32 r2_2 = 0;
    float S1_1 = 0;
    float S0_1 = 0;
    float S2_1 = 0;
    u32 r0_5 = 0;
    u32 r2_1 = r0 + 0x700u;  // (from the original)
    *gptr<u32>(r13 + 0xfffffff0u) = r3;  // (from the original)
    r13 -= 0x10;  // (from the original)
    u32 r4 = r0;
    u32 r0_1 = arg0->half_764;
    if ((r0_1 >> 4u & 1u) == 0 || (r0_1 >> 3u & 1u) == 0 || u32(arg0->byte_7fd) == 1u) {
        r13 += 0x10;  // (from the original)
        guest::cpu()->r[13] = r13;
        return;
    }
    u32 r3_1 = arg0->byte_5f8;
    if (r3_1 == 3u || r3_1 == 4u || r3_1 == 5u) {
        goto L_56f214;
    }
    res_2 = r0_1 >> 0xdu & 1u;  // (from the original)
    if (res_2 != 0) {
        goto L_56f214;
    }
    res_3 = r0_1 >> 0xeu & 1u;  // (from the original)
    if (res_3 == 0) {
        goto L_56f28c;
    }
L_56f214:;
    *gptr<u16>(r2_1 + 0x64u) = u16(r0_1 & ~0x4000u);  // (from the original)
    r12 = *gptr<u32>(r4 + 0x5c4u);  // (from the original)
    r3 = 1u;
    if (r12 == 0) {
        r13 += 0x10;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return;
    }
    r0_2 = *gptr<u32>(r4 + 0x5f0u);  // (from the original)
    if (r0_2 == 0) {
        goto L_56f264;
    }
    r0_3 = u32(*gptr<u8>(r0_2 + 0x1bu)) >> 2u & 3u;  // (from the original)
    if (r0_3 >= 4u || r0_3 == 0) {
        goto L_56f2a0;
    }
    if (r0_3 == 1u) {
        goto L_56f264;
    }
    if (r0_3 == 2u) {
        goto L_56f268;
    }
L_56f264:;
    r3 = 0u;
L_56f268:;
    *gptr<u32>(r13) = r3;
    r0_4 = gptr<Local_0056f1b8_r0_4>(r4 + 0x400u);  // (from the original)
    r2_2 = s32(s16(*gptr<u16>(r4 + 0x2eu)));  // (from the original)
    S1_1 = std::bit_cast<float>(r0_4->word_1c0);
    S0_1 = std::bit_cast<float>(r0_4->word_1b8);
    S2_1 = std::bit_cast<float>(*gptr<u32>(r1 + 4u));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    call_006ef108(r12, r1, r2_2, 0u);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
L_56f28c:;
    r0_5 = *gptr<u32>(r4 + 0x5c4u);  // (from the original)
    if (r0_5 == 0) {
        r13 += 0x10;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return;
    }
    r13 += 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    call_006ef0a0(r0_5, r1);
    return;
L_56f2a0:;
    r3 = 0x1bu;  // (from the original)
    guest::preempt();
    goto L_56f268;
}

}  // namespace d_0056f1b8
GUEST_EXPORT(0x0056f1b8, d_0056f1b8::f_0056f1b8);

// f_0056f34c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056f34c {

struct __attribute__((packed)) Local_0056f34c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0056f34c_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0056f34c_ea_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x004ea048, u32(u32, u32, u32, u32)> call_004ea048;  // (from the original)
inline constexpr guest::Function<0x007455cc, u32(u32, u32, u32, u32)> call_007455cc;  // (from the original)
inline constexpr guest::Function<0x0075127c, u32(u32, u32, u32, u32)> call_0075127c;  // (from the original)

u32 f_0056f34c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r0_8 = 0;
    u32 r0_1 = call_002f74c8(r0, r1, r2, r3);
    u32 r0_2 = call_002f74e0(0x20u, r0_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        goto L_56f3d0;
    }
    r0_2 = call_002f74e0(0x200u, r0_1, r2_2, r3_2);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        goto L_56f3d0;
    }
    r0_2 = call_002f74e0(0x40000000u, r0_1, r2_2, r3_2);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        goto L_56f3d0;
    }
    r0_2 = call_002f74e0(0x800000u, r0_1, r2_2, r3_2);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        goto L_56f3d0;
    }
    r0_2 = call_002f74e0(0x10000000u, r0_1, r2_2, r3_2);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_56f3f0;
    }
L_56f3d0:;
    r0_3 = call_004ea048(r0_2, r1_1, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_4 = call_007455cc(r0_3, r0, r2_3, r3_3);
    r1_2 = guest::cpu()->r[1];
    r0_5 = r0_4 & 0x1ffu;  // (from the original)
    return r0_5 | r0_1 << 9;
L_56f3f0:;
    u32 r0_6 = *gptr<u8>(r0 + 0x5ecu);  // (from the original)
    if (r0_6 == 2u) {
        guest::cpu()->r[1] = r1_1;
        return 0x31u | r0_1 << 9 | 0x20000u;  // (from the original)
    }
    u32 r0_7 = call_002f74c8(r0_6, r1_1, r2_2, r3_2);
    r0_8 = call_002f74e0(8u, r0_7, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_8 == 0) {
        return r0_8;
    }
    *frame.at<u32>(0) = r2;
    u32 r0_9 = call_0075127c(r0, frame.at(4).addr(), frame.at(8).addr(), r1);
    r1_2 = guest::cpu()->r[1];
    if (r0_9 == 0) {
        return r0_1;
    }
    gptr<Local_0056f34c_ea_1> ea_1 = gptr<Local_0056f34c_ea_1>(frame.at(4).addr());
    u32 r8_1 = *gptr<u8>(r0 + 0x7b4u);  // (from the original)
    if (r8_1 >= 2u) {
        r8_1 = 0u;
    }
    r1_2 = (ea_1->word_0 & 0xfu | 0xf0u & ea_1->word_4 << 4) & ~0x100u;  // (from the original)
    r0_5 = (0x100u & r8_1 << 8 | r1_2) & ~0x10000u & ~0xfe00u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0_5 | r0_1 << 9;
}

}  // namespace d_0056f34c
GUEST_EXPORT_FRAMED(0x0056f34c, d_0056f34c::f_0056f34c, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0056f8b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056f8b4 {

struct __attribute__((packed)) Local_0056f8b4_r5_1 {
    u32 word_0;
};
GUEST_OFFSET(Local_0056f8b4_r5_1, word_0, 0x0);  // (from the original)

inline guest::global<u16, 0x008870a0> global_008870a0;  // (from the original)
inline constexpr guest::Function<0x0023b900, u32(u32, u32, u32)> call_0023b900;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x005d97a0, u32(u32, u32, u32, u32)> call_005d97a0;  // (from the original)
inline constexpr guest::Function<0x00692ad4, u32(u32, u32, u32)> call_00692ad4;  // (from the original)
inline constexpr guest::Function<0x007559ac, u32(u32, u32, u32)> call_007559ac;  // (from the original)
inline constexpr guest::Function<0x00755a98, u32(u32, u32, u32)> call_00755a98;  // (from the original)

u32 f_0056f8b4(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r0_5 = 0;
    u32 r2_4 = 0;
    u32 r0_6 = 0;
    u32 r2_5 = 0;
    u32 r1_1 = 0;
    u32 r0_7 = 0;
    u32 r2_6 = 0;
    u32 r1_2 = 0;
    u32 r0_8 = 0;
    u32 r1_3 = 0;
    u32 r2_7 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r2_8 = 0;
    u32 res_1 = 0;
    gptr<Local_0056f8b4_r5_1> r5_1 = gptr<Local_0056f8b4_r5_1>(r1);
    u32 r0_2 = call_005d97a0(r0 + 0xb0u, r1, r2, guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r6 = r0_2;
    if (r0_2 != 0) {
        return r0_2;
    }
    u32 r0_3 = call_007559ac(r2, r1, r2_1);
    r1 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    if (r0_3 != 0x60u) {  // (from the original)
        return r6;
    }
    u32 r0_4 = call_00755a98(r2, r1, r2_2);
    r1 = guest::cpu()->r[1];
    u32 r2_3 = guest::cpu()->r[2];
    if (r0_4 == 0) {
        goto L_56f918;
    }
    if (r0_4 == 1u) {
        goto L_56f9d8;
    }
    r5_1->word_0 = 0;
    return 1u;
L_56f918:;
    r0_5 = frame.at(4).addr();
    call_002fc934(r0_5, 0x95bfdcu, r2_3);  // (from the original)
    r2_4 = guest::cpu()->r[2];
    r0_6 = frame.at(8).addr();
    call_002fc934(r0_6, 0x95bfdcu, r2_4);  // (from the original)
    r2_5 = guest::cpu()->r[2];
    r1_1 = frame.at(8).addr();
    r0_7 = frame.at(4).addr();
    call_00692ad4(r0_7, r1_1, r2_5);
    r2_6 = guest::cpu()->r[2];
    r1_2 = frame.at(8).addr();
    r0_8 = frame.at(0).addr();
    call_002fc934(r0_8, r1_2, r2_6);
    r1_3 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r0_9 = frame.at(0).addr();
    r0_10 = call_002fcaf4(r0_9, r1_3, r2_7);
    r2_8 = guest::cpu()->r[2];
    if (r0_10 != 0) {
        call_002fc8e8(frame.at(0).addr(), frame.at(4).addr(), r2_8);
    }
    r1 = *global_008870a0;
    res_1 = (u32(*gptr<u16>(r0 + 0xcu)) == r1 ? u32(s32(s8(*gptr<u8>(0x7a3u + r0)))) : 0u) ^ 1u;  // (from the original)
    r5_1->word_0 = res_1;
    if (res_1 == 0) {
        call_0023b900(r0 + 0xb0u, frame.at(0).addr(), 0u);  // (from the original)
        r1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1;
    return 1u;
L_56f9d8:;
    call_002fc934(frame.at(4).addr(), 0x95bfdcu, r2_3);  // (from the original)
    call_002fc934(frame.at(0).addr(), 0x95bfdcu, guest::cpu()->r[2]);  // (from the original)
    call_00692ad4(frame.at(4).addr(), frame.at(0).addr(), guest::cpu()->r[2]);
    u32 r0_17 = call_002fcaf4(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2]);
    r5_1->word_0 = r0_17;
    call_0023b900(r0 + 0xb0u, frame.at(4).addr(), 0u);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r5_1->word_0 == 0) {
        call_0023b900(r0 + 0xb0u, frame.at(0).addr(), 1u);  // (from the original)
        r1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_0056f8b4
GUEST_EXPORT_FRAMED(0x0056f8b4, d_0056f8b4::f_0056f8b4, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0056fd94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056fd94 {

struct __attribute__((packed)) Local_0056fd94_r4_1 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 byte_5;
    u8 byte_6;
    u8 byte_7;
    u8 byte_8;
};
GUEST_OFFSET(Local_0056fd94_r4_1, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0056fd94_r4_1, byte_5, 0x5);  // (from the original)
GUEST_OFFSET(Local_0056fd94_r4_1, byte_6, 0x6);  // (from the original)
GUEST_OFFSET(Local_0056fd94_r4_1, byte_7, 0x7);  // (from the original)
GUEST_OFFSET(Local_0056fd94_r4_1, byte_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x004e0cb0, u32(u32, u32, u32, u32)> call_004e0cb0;  // (from the original)
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> call_004e9a28;  // (from the original)
inline constexpr guest::Function<0x004ea048, u32(u32, u32, u32, u32)> call_004ea048;  // (from the original)
inline constexpr guest::Function<0x007455cc, u32(u32, u32, u32, u32)> call_007455cc;  // (from the original)

void f_0056fd94(gptr<AcFtr> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r0_8 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    u32 r0_9 = 0;
    u32 r2_6 = 0;
    u32 r3_5 = 0;
    u32 cf_1 = 0;
    u32 r6 = r0;
    u32 r0_1 = arg0->byte_7b4;
    if (r0_1 < 2u && r0_1 == 1u) {
        gptr<Local_0056fd94_r4_1> r4_1 = gptr<Local_0056fd94_r4_1>(r6 + 0x5e4u);  // (from the original)
        u32 r0_3 = call_002fc934(frame.at(0).addr(), r4_1.addr(), r2, r3);
        *gptr<u8>(r0_3 + 4u) = u8(u32(r4_1->byte_4));
        *gptr<u8>(r0_3 + 5u) = u8(u32(r4_1->byte_5));
        *gptr<u8>(r0_3 + 6u) = u8(u32(r4_1->byte_6));
        *gptr<u8>(r0_3 + 7u) = u8(u32(r4_1->byte_7));
        u32 r1_1 = r4_1->byte_8;
        *gptr<u8>(r0_3 + 8u) = u8(r1_1);
        u32 r0_4 = call_004e0cb0(r0_3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r2_2 = *frame.at<u8>(5);
        u32 r1_2 = *frame.at<u8>(4);
        u32 r0_5 = call_004e9a28(r0_4, r1_2, r2_2, 0u);
        r1 = guest::cpu()->r[1];
        u32 r4 = r0_5;
        if (r0_5 == 0) {
            goto L_56fed4;
        }
        r0_6 = *gptr<u8>(r4 + 0x7b4u);  // (from the original)
        if (r0_6 < 2u) {
            if (r0_6 != 0) {
                goto L_56fed4;
            }
        }
        r0_7 = call_004ea048(r0_6, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r2_4 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        r0_8 = call_007455cc(r0_7, r4, r2_4, r3_3);
        r2_5 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        r1 = s32(s16(*gptr<u16>(0x60cu + r6)));  // (from the original)
        if (r0_8 == r1) {
            r5 = r4 + 0x61cu;  // (from the original)
        } else {
            goto L_56fed4;
        }
        r0_9 = call_004ea048(r0_8, r1, r2_5, r3_4);
        r2_6 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
        r0 = call_007455cc(r0_9, r6, r2_6, r3_5);
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
        cf_1 = *gptr<u32>(r5 + 0x10u) >= 4u;  // (from the original)
        if (!cf_1) {
            r4 = r5;
            cf_1 = r5 >= r2;
        }
        if (cf_1) {
            goto L_56fed4;
        }
        do {
            u32 r0_10 = *gptr<u32>(r4);
            if (s32(r0_10) < 0) {
                u32 r0_11 = call_004ea048(r0_10, r1, r2, r3);
                u32 r0_12 = call_007455cc(r0_11, r6, guest::cpu()->r[2], guest::cpu()->r[3]);
                r1 = guest::cpu()->r[1];
                *gptr<u32>(r4) = r0_12;
                *gptr<u32>(r5 + 0x10u) = *gptr<u32>(r5 + 0x10u) + 1u;  // (from the original)
                goto L_56fed4;
            }
            r4 += 4u;
            guest::preempt();
        } while (r4 < r2);
L_56fed4:;
    }
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0056fd94
GUEST_EXPORT_FRAMED(0x0056fd94, d_0056fd94::f_0056fd94, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original
