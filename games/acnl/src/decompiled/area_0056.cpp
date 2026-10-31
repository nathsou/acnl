// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "graphics/hemisphere_light.hpp"

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
    float S5_1 = 0;
    float S4_1 = 0;
    u32 fpsr_1 = 0;
    float S6_1 = 0;
    u32 r1_1 = 0;
    float S0_1 = 0;
    u32 fpsr_2 = 0;
    u32 r1_2 = 0;
    float S0_2 = 0;
    u32 fpsr_3 = 0;
    u32 r1_3 = 0;
    float S0_3 = 0;
    u32 fpsr_4 = 0;
    float S0_4 = 0;
    u32 r1_4 = 0;
    u32 fpsr_5 = 0;
    float S0_5 = 0;
    u32 r1_5 = 0;
    S5_1 = std::bit_cast<float>(*global_00560290);
    S4_1 = std::bit_cast<float>(*global_00560294);
    fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S0, S5_1);  // (from the original)
    if (!(fpsr_1 >> 0x1d & 1)) {  // (from the original)
        S0 = S5_1;
        goto L_5601e0;
    }
    fpsr_1 = fpsr_1 & 0xfffffffu | vfp_cmpf(S0, S4_1);  // (from the original)
    if (!(fpsr_1 >> 0x1e & 1) && fpsr_1 >> 0x1f == (fpsr_1 >> 0x1c & 1)) {  // (from the original)
        S0 = S4_1;
    }
L_5601e0:;
    S6_1 = std::bit_cast<float>(*global_00560298);
    r1_1 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_uz_f(S0 * S6_1)));
    S0_1 = S1;
    arg0->byte_3 = u8(r1_1);
    fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S0_1, S5_1);  // (from the original)
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
    r1_2 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_uz_f(S0_1 * S6_1)));
    S0_2 = S2;
    arg0->byte_2 = u8(r1_2);
    fpsr_3 = fpsr_2 & 0xfffffffu | vfp_cmpf(S0_2, S5_1);  // (from the original)
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
    r1_3 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_uz_f(S0_2 * S6_1)));
    S0_3 = S3;
    arg0->byte_1 = u8(r1_3);
    fpsr_4 = fpsr_3 & 0xfffffffu | vfp_cmpf(S0_3, S5_1);  // (from the original)
    if (!(fpsr_4 >> 0x1d & 1)) {  // (from the original)
        S0_4 = std::bit_cast<float>(vcvt_uz_f(S5_1 * S6_1));
        r1_4 = std::bit_cast<u32>(S0_4);
        arg0->byte_0 = u8(r1_4);
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->s[0] = S0_4;
        guest::cpu()->s[1] = S1;
        return;
    }
    fpsr_5 = fpsr_4 & 0xfffffffu | vfp_cmpf(S0_3, S4_1);  // (from the original)
    if (!(fpsr_5 >> 0x1e & 1) && fpsr_5 >> 0x1f == (fpsr_5 >> 0x1c & 1)) {  // (from the original)
        S0_3 = S4_1;
    }
    S0_5 = std::bit_cast<float>(vcvt_uz_f(S0_3 * S6_1));
    r1_5 = std::bit_cast<u32>(S0_5);
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
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 zf_1 = 0;
    u32 zf_2 = 0;
    u32 r3_2 = 0;
    u32 zf_3 = 0;
    u32 r6_1 = 0;
    u32 zf_4 = 0;
    u32 r6_2 = 0;
    u32 res_1 = 0;
    u32 r12_1 = 0;
    u32 r3_3 = 0;
    u32 zf_5 = 0;
    u32 r6_3 = 0;
    u32 zf_6 = 0;
    u32 r6_4 = 0;
    u32 res_2 = 0;
    u32 ea_1 = 0;
    r13 = r13 - 0x1c;  // (from the original)
    r4 = 0u;
    if (u32(arg1->byte_0) != 0) {
        r5 = 0u;
        goto L_5602c0;
    }
L_5602b4:;
    r13 = r13 + 0x1c;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return;
L_5602bc:;
    r1 = r1 + 1u;
L_5602c0:;
    r3_1 = u32(s32(s8(*gptr<u8>(r1))));
    zf_1 = r3_1 == 0x2cu;  // (from the original)
    if (!zf_1) {
        zf_1 = r3_1 == 0x20u;  // (from the original)
    }
    if (zf_1) {
        guest::preempt();
        goto L_5602bc;
    }
    zf_2 = r3_1 == 9u;
    if (!zf_2) {
        zf_2 = r3_1 == 0xau;  // (from the original)
    }
    if (zf_2) {
        guest::preempt();
        goto L_5602bc;
    }
    r12 = r1;
    r1 = u32(*gptr<u8>(r1));
    if (r1 == 0) {
        guest::preempt();
        goto L_5602b4;
    }
    *gptr<u32>(r0 + (r4 << 2)) = u32(r12);
    r4 = r4 + 1u;
    r1 = r12;
L_5602f8:;
    r3_2 = u32(s32(s8(*gptr<u8>(r1))));
    zf_3 = r3_2 == 0x2cu;  // (from the original)
    if (!zf_3) {
        zf_3 = r3_2 == 0x3du;  // (from the original)
    }
    if (!zf_3) {
        if (r3_2 != 0) {
            r1 = r1 + 1u;
            guest::preempt();
            goto L_5602f8;
        }
    }
    r3 = r1 - 1u;
L_560318:;
    r6_1 = u32(s32(s8(*gptr<u8>(r3))));
    zf_4 = r6_1 == 0x20u;  // (from the original)
    if (!zf_4) {
        zf_4 = r6_1 == 9u;
    }
    if (!zf_4) {
        zf_4 = r6_1 == 0xau;  // (from the original)
    }
    if (zf_4) {
        r6_2 = u32(u64(0u) + ~0u + u32(r3 >= r12));
        res_1 = u32(u64(0u) + ~r6_2 + u32(0u >= r3 - r12));
        if (res_1 >> 0x1f != ((0u ^ r6_2) & (0u ^ res_1)) >> 0x1f) {  // (from the original)
            r3 = r3 - 1u;
            guest::preempt();
            goto L_560318;
        }
    }
    r12_1 = u32(s32(s8(*gptr<u8>(r1))));
    *gptr<u8>(r3 + 1u) = u8(r5);
    if (r12_1 == 0) {
        guest::preempt();
        goto L_5602b4;
    }
    if (r12_1 == 0x3du) {  // (from the original)
        r12 = r1 + 1u;
        r1 = r12;
    } else {
        goto L_5603d4;
    }
L_560370:;
    r3_3 = u32(s32(s8(*gptr<u8>(r1))));
    zf_5 = r3_3 == 0x2cu;  // (from the original)
    if (!zf_5) {
        zf_5 = r3_3 == 0x3du;  // (from the original)
    }
    if (!zf_5) {
        if (r3_3 != 0) {
            r1 = r1 + 1u;
            guest::preempt();
            goto L_560370;
        }
    }
    r3 = r1 - 1u;
L_560390:;
    r6_3 = u32(s32(s8(*gptr<u8>(r3))));
    zf_6 = r6_3 == 0x20u;  // (from the original)
    if (!zf_6) {
        zf_6 = r6_3 == 9u;
    }
    if (!zf_6) {
        zf_6 = r6_3 == 0xau;  // (from the original)
    }
    if (zf_6) {
        r6_4 = u32(u64(0u) + ~0u + u32(r3 >= r12));
        res_2 = u32(u64(0u) + ~r6_4 + u32(0u >= r3 - r12));
        if (res_2 >> 0x1f != ((0u ^ r6_4) & (0u ^ res_2)) >> 0x1f) {  // (from the original)
            r3 = r3 - 1u;
            guest::preempt();
            goto L_560390;
        }
    }
    if (u32(*gptr<u8>(r1)) == 0) {
        guest::preempt();
        goto L_5602b4;
    }
L_5603d4:;
    if (s32(r2) <= s32(r4)) {
        guest::preempt();
        goto L_5602b4;
    }
    ea_1 = r1 + 1u;
    r1 = ea_1;
    if (u32(*gptr<u8>(ea_1)) != 0) {
        guest::preempt();
        goto L_5602c0;
    }
    r13 = r13 + 0x1c;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return;
}

}  // namespace d_0056029c
GUEST_EXPORT(0x0056029c, d_0056029c::f_0056029c);

// f_005603f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005603f0 {

inline guest::global<u32, 0x009753a8> global_009753a8;  // (from the original)
inline constexpr guest::Function<0x0012bfec, u32(u32, u32, u32, u32)> call_0012bfec;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)

u32 f_005603f0(u32 r0_unused, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    guest::cpu()->r[13] -= 8u;
    if ((*global_009753a8 & 1u) != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return 0xae544cu;  // (from the original)
    }
    r0_1 = call_002fe7dc(0x9753a8u, r1, r2, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 0xae544cu;  // (from the original)
    }
    call_0012bfec(0xae544cu, r1_1, r2_1, guest::cpu()->r[3]);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0x137e8cu;  // (from the original)
    return 0xae544cu;  // (from the original)
}

}  // namespace d_005603f0
GUEST_EXPORT(0x005603f0, d_005603f0::f_005603f0);

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


void f_00560650(gptr<Object_00560650_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    r1 = arg0->word_4;
    r2 = 0u;
    if (r1 == r0) {
        r1_1 = r0 + 4u;
        arg0->word_4 = u32(r0);
        arg0->word_8 = u32(r2);
        arg0->word_0 = u32(r0);
        guest::cpu()->r[1] = r1_1;
        return;
    }
    do {
L_560660:;
        r3_1 = r1;
        r1 = *gptr<u32>(r1 + 4u);
        *gptr<u32>(r3_1 + 4u) = u32(r2);
        *gptr<u32>(r3_1) = u32(r2);
        guest::preempt();
    } while (r1 != r0);
    r1_1 = r0 + 4u;
    arg0->word_4 = u32(r0);
    arg0->word_8 = u32(r2);
    arg0->word_0 = u32(r0);
    guest::cpu()->r[1] = r1_1;
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
    u32 r2_1 = 0;
    r2_1 = arg0->word_4;
    arg0->word_4 = u32(r1);
    arg1->word_0 = u32(r0);
    arg1->word_4 = u32(r2_1);
    if (r2_1 != 0) {
        *gptr<u32>(r2_1) = u32(r1);
    }
    return;
}

}  // namespace d_00560688
GUEST_EXPORT(0x00560688, d_00560688::f_00560688);

// f_00560868: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00560868 {

struct __attribute__((packed)) Object_00560868_0 {
    u8 unknown_0[0x5c];  // (not used here)
    u32 word_5c;
};
GUEST_OFFSET(Object_00560868_0, word_5c, 0x5c);  // (from the original)


u32 f_00560868(gptr<Object_00560868_0> arg0) {
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    r0_1 = *gptr<u32>(*gptr<u32>(arg0->word_5c + 0x20u) + 0x20u);  // (from the original)
    r3_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x10u);  // (from the original)
    return guest::call_address<u32>(r3_1, r0_1, guest::cpu()->r[1], guest::cpu()->r[2], r3_1);
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

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_00560930(gptr<Object_00560930_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    u32 ea_7 = 0;
    u32 ea_8 = 0;
    u32 ea_9 = 0;
    u32 r0_3 = 0;
    r13 = r13 - 8;
    arg0->byte_0 = u8(0u);
    ea_1 = r0 + 4u;
    arg0->word_4 = u32(0u);
    r0_1 = ea_1 + 4u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_00301d0c(r0_1, 0x11e460u, 0x14u, 4u);  // (from the original)
    ea_2 = r0_2 + 0x50u;  // (from the original)
    *gptr<u32>(ea_2) = u32(0u);
    ea_3 = r0_2 + 0x54u;  // (from the original)
    *gptr<u32>(ea_3) = u32(0u);
    ea_4 = r0_2 + 0x58u;  // (from the original)
    *gptr<u32>(ea_4) = u32(0u);
    ea_5 = r0_2 + 0x5cu;  // (from the original)
    *gptr<u32>(ea_5) = u32(0u);
    ea_6 = r0_2 + 0x60u;  // (from the original)
    *gptr<u32>(ea_6) = u32(0u);
    ea_7 = r0_2 + 0x64u;  // (from the original)
    *gptr<u32>(ea_7) = u32(0u);
    ea_8 = r0_2 + 0x68u;  // (from the original)
    *gptr<u32>(ea_8) = u32(0u);
    ea_9 = ea_8 + 4u;
    *gptr<u32>(ea_9) = u32(~0u);
    r0_3 = ea_9 - 0x74u;  // (from the original)
    *gptr<u8>(r0_3 + 0x78u) = u8(1u);  // (from the original)
    *gptr<u32>(r0_3 + 0x7cu) = u32(0u);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = 1u;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_00560930
GUEST_EXPORT(0x00560930, d_00560930::f_00560930);

// f_00560a20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00560a20 {

struct __attribute__((packed)) Object_00560a20_0 {
    u32 word_0;
    u8 unknown_4[0x58];  // (not used here)
    u32 word_5c;
};
GUEST_OFFSET(Object_00560a20_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00560a20_0, word_5c, 0x5c);  // (from the original)

inline constexpr guest::Function<0x0013bb00, u32(u32, u32, u32, u32)> call_0013bb00;  // (from the original)
inline constexpr guest::Function<0x0013efb4, u32(u32, u32, u32, u32)> call_0013efb4;  // (from the original)
inline constexpr guest::Function<0x0055f1ac, u32(u32, u32, u32, u32)> call_0055f1ac;  // (from the original)
inline constexpr guest::Function<0x00560bec, u32(u32, u32, u32, u32)> call_00560bec;  // (from the original)

u32 f_00560a20(gptr<Object_00560a20_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 zf_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r5_1 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r1 = 0x905c88u;  // (from the original)
    zf_1 = arg0->word_5c == 0;
    arg0->word_0 = u32(r1);
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
    *gptr<u8>(r4 + 0x60u) = u8(7u);  // (from the original)
    r0_3 = r4 + 0x10u;  // (from the original)
    call_00560bec(r0_3, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r5_1 = *gptr<u32>(r4 + 0x40u);  // (from the original)
    r0_4 = r4 + 0x34u;  // (from the original)
    if (r5_1 != 0) {
        *gptr<u32>(r0_4 + 0xcu) = u32(0u);  // (from the original)
        call_0013bb00(r0_4, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        *gptr<u32>(r5_1 + 8u) = u32(*gptr<u32>(r5_1 + 8u) - 1u);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0013efb4(r4, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
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
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r2_3 = 0;
    r2_1 = arg0->word_8;
    r3_1 = arg0->word_c;
    if (r3_1 != 0) {
        *gptr<u32>(r3_1 + 8u) = u32(r2_1);
        r2_2 = arg0->word_8;
        if (r2_2 == 0) {
            arg0->word_c = u32(0u);
            arg0->word_0 = u32(0u);
            guest::cpu()->r[1] = 0u;
            return;
        }
        *gptr<u32>(r2_2 + 0xcu) = u32(arg0->word_c);  // (from the original)
        arg0->word_8 = u32(0u);
        arg0->word_c = u32(0u);
        arg0->word_0 = u32(0u);
        guest::cpu()->r[1] = 0u;
        return;
    }
    r3_2 = arg0->word_0;
    if (r3_2 != 0) {
        *gptr<u32>(r3_2 + 4u) = u32(r2_1);
        arg0->word_0 = u32(0u);
    }
    r2_3 = arg0->word_8;
    if (r2_3 == 0) {
        guest::cpu()->r[1] = 0u;
        return;
    }
    *gptr<u32>(r2_3 + 0xcu) = u32(arg0->word_c);  // (from the original)
    arg0->word_8 = u32(0u);
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_00560aa8
GUEST_EXPORT(0x00560aa8, d_00560aa8::f_00560aa8);

// f_00560b6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00560b6c {

inline constexpr guest::Function<0x00560aa8, u32(u32, u32, u32, u32)> call_00560aa8;  // (from the original)

u32 f_00560b6c(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0xcu;  // (from the original)
    call_00560aa8(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_1 = *gptr<u32>(r0 + 4u);
    if (r0_1 == 0) {
        *gptr<u32>(r0 + 4u) = u32(r1);
        *gptr<u32>(r1) = u32(r0);
        guest::cpu()->r[13] += 0xcu;  // (from the original)
        return r0_1;
    }
    *gptr<u32>(r1 + 8u) = u32(r0_1);
    r0_2 = *gptr<u32>(r0 + 4u);
    *gptr<u32>(r0_2 + 0xcu) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 4u) = u32(r1);
    *gptr<u32>(r1) = u32(r0);
    guest::cpu()->r[13] += 0xcu;  // (from the original)
    return r0_2;
}

}  // namespace d_00560b6c
GUEST_EXPORT(0x00560b6c, d_00560b6c::f_00560b6c);

// f_00560bec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00560bec {

inline constexpr guest::Function<0x00560aa8, u32(u32, u32, u32, u32)> call_00560aa8;  // (from the original)
inline constexpr guest::Function<0x00560bac, u32(u32, u32, u32, u32)> call_00560bac;  // (from the original)

u32 f_00560bec(u32 r0) {
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    guest::cpu()->r[13] -= 0x14u;  // (from the original)
    r6 = r0;
    r0_1 = call_00560aa8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r5 = *gptr<u32>(r6 + 4u);
    r7 = 0u;
    if (r5 == 0) {
        goto L_560c30;
    }
    do {
L_560c08:;
        r4_1 = r5;
        r5 = *gptr<u32>(r5 + 8u);
        r0_1 = call_00560bac(r4_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        *gptr<u32>(r4_1 + 0xcu) = u32(r7);  // (from the original)
        *gptr<u32>(r4_1 + 8u) = u32(r7);
        *gptr<u32>(r4_1 + 4u) = u32(r7);
        *gptr<u32>(r4_1) = u32(r7);
        guest::preempt();
    } while (r5 != 0);
L_560c30:;
    *gptr<u32>(r6 + 0xcu) = u32(r7);  // (from the original)
    *gptr<u32>(r6 + 8u) = u32(r7);
    *gptr<u32>(r6 + 4u) = u32(r7);
    *gptr<u32>(r6) = u32(r7);
    guest::cpu()->r[13] += 0x14u;  // (from the original)
    return r0_1;
}

}  // namespace d_00560bec
GUEST_EXPORT(0x00560bec, d_00560bec::f_00560bec);

// f_00560e80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00560e80 {

struct __attribute__((packed)) Object_00560e80_0 {
    u32 word_0;
    u8 unknown_4[0x158];  // (not used here)
    u32 word_15c;
};
GUEST_OFFSET(Object_00560e80_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00560e80_0, word_15c, 0x15c);  // (from the original)

inline constexpr guest::Function<0x0013efb4, u32(u32, u32, u32, u32)> call_0013efb4;  // (from the original)
inline constexpr guest::Function<0x0054488c, u32(u32, u32, u32, u32)> call_0054488c;  // (from the original)
inline constexpr guest::Function<0x00560a20, u32(u32, u32, u32, u32)> call_00560a20;  // (from the original)

u32 f_00560e80(gptr<Object_00560e80_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r5_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r5_2 = 0;
    u32 r1_4 = 0;
    u32 r0_4 = 0;
    u32 r1_5 = 0;
    u32 r5_3 = 0;
    u32 r1_6 = 0;
    u32 r0_5 = 0;
    u32 r1_7 = 0;
    u32 r0_6 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5_1 = r0 + 0x15cu;  // (from the original)
    arg0->word_0 = u32(0x905ce8u);  // (from the original)
    arg0->word_15c = u32(0x9047b0u);  // (from the original)
    call_0054488c(r5_1, 0x905ce8u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_1 = call_0013efb4(r5_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_1 - 0x15cu) = u32(0x9046a0u);  // (from the original)
    r0_2 = r0_1 - 0x50u;  // (from the original)
    *gptr<u32>(r0_2) = u32(0x9047b0u);  // (from the original)
    call_0054488c(r0_2, 0x9046a0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r0_3 = call_0013efb4(r0_2, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r5_2 = r0_3 - 0x50u;  // (from the original)
    *gptr<u32>(r0_3 - 0x50u) = u32(0x9047b0u);  // (from the original)
    call_0054488c(r5_2, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r0_4 = call_0013efb4(r5_2, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r5_3 = r0_4 - 0x50u;  // (from the original)
    *gptr<u32>(r0_4 - 0x50u) = u32(0x9047b0u);  // (from the original)
    call_0054488c(r5_3, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    r0_5 = call_0013efb4(r5_3, r1_6, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_7 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r0_6 = r0_5 - 0x6cu;  // (from the original)
    return call_00560a20(r0_6, r1_7, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00560e80
GUEST_EXPORT(0x00560e80, d_00560e80::f_00560e80);

// f_00561310: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00561310 {

struct __attribute__((packed)) Object_00561310_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 byte_14;
};
GUEST_OFFSET(Object_00561310_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00561310_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00561310_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00561310_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00561310_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00561310_0, byte_14, 0x14);  // (from the original)

inline guest::global<u32, 0x00561354> global_00561354;  // (from the original)
inline guest::global<u32, 0x00561358> global_00561358;  // (from the original)
inline guest::global<u8, 0x00975328> global_00975328;  // (from the original)
inline constexpr guest::Function<0x00561264, u32(u32, u32, u32, u32)> call_00561264;  // (from the original)

u32 f_00561310(gptr<Object_00561310_0> arg0) {
    u32 r0 = arg0.addr();
    float S0_1 = 0;
    float S0_2 = 0;
    float S0_3 = 0;
    S0_1 = std::bit_cast<float>(*global_00561354);
    guest::cpu()->r[13] -= 8u;
    arg0->word_4 = u32(std::bit_cast<u32>(S0_1));
    arg0->word_8 = u32(std::bit_cast<u32>(S0_1));
    S0_2 = std::bit_cast<float>(*global_00561358);
    arg0->word_c = u32(std::bit_cast<u32>(S0_2));
    arg0->word_10 = u32(std::bit_cast<u32>(S0_2));
    arg0->word_0 = u32(0x905dd4u);  // (from the original)
    arg0->byte_14 = u8(u32(*global_00975328));
    guest::cpu()->s[0] = S0_2;
    call_00561264(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    S0_3 = guest::cpu()->s[0];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->s[0] = S0_3;
    return r0;
}

}  // namespace d_00561310
GUEST_EXPORT(0x00561310, d_00561310::f_00561310);

// f_005615e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005615e4 {

inline constexpr guest::Function<0x00561900, u32(u32, u32, u32, u32)> call_00561900;  // (from the original)

u32 f_005615e4(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    *gptr<u32>(r13) = u32(*gptr<u32>(r13 + 8u));
    guest::cpu()->r[13] = r13;
    call_00561900(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], r3);
    r13 = r13 + 8;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_005615e4
GUEST_EXPORT(0x005615e4, d_005615e4::f_005615e4);

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
    arg0->word_0 = u32(0u);
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(0u);
    arg0->word_c = u32(0u);
    arg0->word_10 = u32(0x1000u);  // (from the original)
    guest::cpu()->r[1] = 0x1000u;  // (from the original)
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
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 zf_1 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r6 = r2;
    r0_1 = call_006a5e34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_564888;
    }
    r0_2 = call_002f74c8(r0_1, r1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_3 = call_0056549c(r0_2, r1_1, r2_2, r3_2);
    r1 = guest::cpu()->r[1];
    r7 = r0_3;
    if (u32(*gptr<u8>(r0_3 + (r6 << 4) + r5)) == r4) {
        r2 = 0u;
        r1 = r2;
    } else {
        goto L_564888;
    }
L_564844:;
    r0 = 0u;
    r3 = r7 + (r1 << 4);
L_56484c:;
    if (u32(*gptr<u8>(r3 + r0)) != r4) {
        goto L_564870;
    }
    zf_1 = r5 == r0;
    if (zf_1) {
        zf_1 = r6 == r1;
    }
    if (!zf_1) {
        r2 = r2 + 1u;
        goto L_564870;
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r2;
L_564870:;
    r0 = r0 + 1u;
    if (s32(r0) < s32(0x10u)) {  // (from the original)
        guest::preempt();
        goto L_56484c;
    }
    r1 = r1 + 1u;
    if (s32(r1) < s32(0x10u)) {  // (from the original)
        guest::preempt();
        goto L_564844;
    }
L_564888:;
    r0_4 = ~0u;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_4;
}

}  // namespace d_00564804
GUEST_EXPORT(0x00564804, d_00564804::f_00564804);

// f_00564cac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00564cac {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x0056549c, u32(u32, u32, u32, u32)> call_0056549c;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)
inline constexpr guest::Function<0x00752b44, u32(u32, u32, u32, u32)> call_00752b44;  // (from the original)

u32 f_00564cac(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 zf_1 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    u32 r10_1 = 0;
    u32 r11_1 = 0;
    u32 r0_7 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_11 = 0;
    u32 ea_3 = 0;
    u32 r4_2 = 0;
    u32 r5_2 = 0;
    u32 r6_2 = 0;
    u32 r7_2 = 0;
    u32 r8_2 = 0;
    u32 r9_2 = 0;
    u32 r10_2 = 0;
    u32 r11_2 = 0;
    ea_1 = r13 - 0x30;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r4);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r8);  // (from the original)
    *gptr<u32>(ea_1 + 0x20) = u32(r9);  // (from the original)
    *gptr<u32>(ea_1 + 0x24) = u32(r10);  // (from the original)
    *gptr<u32>(ea_1 + 0x28) = u32(r11);  // (from the original)
    *gptr<u32>(ea_1 + 0x2c) = u32(r14);  // (from the original)
    r13 = r13 - 0x40u;  // (from the original)
    r5 = r0;
    r10 = r1;
    guest::cpu()->r[13] = r13;
    r0_1 = call_006a5e34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 8u) = u32(r0_1);
    if (r0_1 == 0) {
        goto L_564d48;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f74c8(r0_1, r1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_3 = call_0056549c(r0_2, r1_1, r2_2, r3_2);
    r1 = guest::cpu()->r[1];
    r7 = 0u;
    r9 = r0_3;
    r11 = r7;
L_564ce0:;
    r4 = 0u;
    r8 = r7 - 1u;
    r6 = r9 + (r7 << 4);
L_564cec:;
    if (u32(*gptr<u8>(r6 + r4)) != r5) {
        goto L_564da0;
    }
    *gptr<u32>(r13) = u32(r7);
    *gptr<u32>(r13 + 4) = u32(r11);
    r0_4 = *gptr<u32>(r13 + 8u);
    zf_1 = r5 == 0x28u;  // (from the original)
    if (!zf_1) {
        zf_1 = r5 == 0x29u;  // (from the original)
    }
    if (!zf_1) {
        zf_1 = r5 == 0x2eu;  // (from the original)
    }
    if (zf_1) {
        goto L_564d50;
    }
    guest::cpu()->r[13] = r13;
    r0_5 = call_00752b44(r0_4, 0u, 0u, r4);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_6 = call_002fcaf4(r0_5, r1_2, r2_3, r3_3);
    r1 = guest::cpu()->r[1];
    if (r0_6 == 0) {
        goto L_564da0;
    }
L_564d38:;
    *gptr<u32>(r10) = u32(r4);
    *gptr<u32>(*gptr<u32>(r13 + 0x18u)) = u32(r7);  // (from the original)
    r0_1 = 1u;
L_564d48:;
    r13 = r13 + 0x1cu;  // (from the original)
    ea_2 = r13;
    r13 = r13 + 0x24;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_1 = *gptr<u32>(ea_2 + 4);
    r6_1 = *gptr<u32>(ea_2 + 8);
    r7_1 = *gptr<u32>(ea_2 + 0xc);  // (from the original)
    r8_1 = *gptr<u32>(ea_2 + 0x10);  // (from the original)
    r9_1 = *gptr<u32>(ea_2 + 0x14);  // (from the original)
    r10_1 = *gptr<u32>(ea_2 + 0x18);  // (from the original)
    r11_1 = *gptr<u32>(ea_2 + 0x1c);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
L_564d50:;
    guest::cpu()->r[13] = r13;
    r0_7 = call_00752b44(r0_4, 0u, 0u, r4);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_8 = call_002fcaf4(r0_7, r1_3, r2_4, r3_4);
    r1 = guest::cpu()->r[1];
    if (r0_8 == 0) {
        goto L_564da0;
    }
    *gptr<u32>(r13) = u32(r8);
    *gptr<u32>(r13 + 4) = u32(r11);
    r0_9 = *gptr<u32>(r13 + 8u);
    guest::cpu()->r[13] = r13;
    r0_10 = call_00752b44(r0_9, 0u, 0u, r4);
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_11 = call_002fcaf4(r0_10, r1_4, r2_5, r3_5);
    r1 = guest::cpu()->r[1];
    if (r0_11 != 0) {
        guest::preempt();
        goto L_564d38;
    }
L_564da0:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(0x10u)) {  // (from the original)
        guest::preempt();
        goto L_564cec;
    }
    r7 = r7 + 1u;
    if (s32(r7) < s32(0x10u)) {  // (from the original)
        guest::preempt();
        goto L_564ce0;
    }
    r13 = r13 + 0x1cu;  // (from the original)
    ea_3 = r13;
    r13 = r13 + 0x24;  // (from the original)
    r4_2 = *gptr<u32>(ea_3);
    r5_2 = *gptr<u32>(ea_3 + 4);
    r6_2 = *gptr<u32>(ea_3 + 8);
    r7_2 = *gptr<u32>(ea_3 + 0xc);  // (from the original)
    r8_2 = *gptr<u32>(ea_3 + 0x10);  // (from the original)
    r9_2 = *gptr<u32>(ea_3 + 0x14);  // (from the original)
    r10_2 = *gptr<u32>(ea_3 + 0x18);  // (from the original)
    r11_2 = *gptr<u32>(ea_3 + 0x1c);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_2;
    guest::cpu()->r[9] = r9_2;
    guest::cpu()->r[10] = r10_2;
    guest::cpu()->r[11] = r11_2;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_00564cac
GUEST_EXPORT(0x00564cac, d_00564cac::f_00564cac);

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
    float S6_1 = 0;
    float S5_1 = 0;
    u32 fpsr_1 = 0;
    float S5_2 = 0;
    float S3_1 = 0;
    float S4_1 = 0;
    float S7_1 = 0;
    u32 fpsr_2 = 0;
    float S6_2 = 0;
    float S5_3 = 0;
    float S3_2 = 0;
    float S0_1 = 0;
    u32 fpsr_3 = 0;
    float S2_1 = 0;
    float S1_1 = 0;
    float S2_2 = 0;
    float S3_3 = 0;
    float S1_2 = 0;
    float S2_3 = 0;
    float S0_2 = 0;
    float S1_3 = 0;
    float S0_3 = 0;
    S6_1 = std::bit_cast<float>(arg0->word_0);
    S5_1 = std::bit_cast<float>(arg1->word_0);
    fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S6_1, S5_1);  // (from the original)
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
    S5_2 = S6_1 - S5_1;
    S3_1 = std::bit_cast<float>(arg0->word_4) - std::bit_cast<float>(arg1->word_4);
    S4_1 = std::bit_cast<float>(arg0->word_8) - std::bit_cast<float>(arg1->word_8);
    S7_1 = sqrtf(S5_2 * S5_2 + S3_1 * S3_1 + S4_1 * S4_1);
    fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S7_1, S2);  // (from the original)
    if (fpsr_2 >> 0x1d & 1) {  // (from the original)
        S6_2 = S7_1 * S0;
        S5_3 = S5_2 * S0;
        S3_2 = S3_1 * S0;
        S0_1 = S4_1 * S0;
        if (s32(std::bit_cast<u32>(fabsf(S6_2))) > s32(0x34000000u)) {  // (from the original)
            goto L_565718;
        }
    }
    arg0->word_0 = u32(arg1->word_0);
    arg0->word_4 = u32(arg1->word_4);
    arg0->word_8 = u32(arg1->word_8);
    S1_2 = std::bit_cast<float>(arg0->word_0) - std::bit_cast<float>(arg1->word_0);
    S2_3 = std::bit_cast<float>(arg0->word_4) - std::bit_cast<float>(arg1->word_4);
    S0_2 = std::bit_cast<float>(arg0->word_8) - std::bit_cast<float>(arg1->word_8);
    S1_3 = S1_2 * S1_2 + S2_3 * S2_3 + S0_2 * S0_2;
    S0_3 = sqrtf(S1_3);
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    return;
L_565718:;
    fpsr_3 = fpsr_2 & 0xfffffffu | vfp_cmpf(S6_2, S1);  // (from the original)
    if (!(fpsr_3 >> 0x1e & 1) && fpsr_3 >> 0x1f == (fpsr_3 >> 0x1c & 1)) {  // (from the original)
        S2_1 = S1 / S6_2;
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
    S2_2 = std::bit_cast<float>(arg0->word_0) - S5_3;
    S3_3 = std::bit_cast<float>(arg0->word_4) - S3_2;
    arg0->word_8 = u32(std::bit_cast<u32>(std::bit_cast<float>(arg0->word_8) - S0_1));
    arg0->word_0 = u32(std::bit_cast<u32>(S2_2));
    arg0->word_4 = u32(std::bit_cast<u32>(S3_3));
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
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 fpsr = guest::cpu()->fpscr;
    float S1_1 = 0;
    float S2_1 = 0;
    u32 fpsr_1 = 0;
    float S3_1 = 0;
    u32 fpsr_2 = 0;
    u32 r1_1 = 0;
    float S4_1 = 0;
    float S0_1 = 0;
    float S0_2 = 0;
    S1_1 = std::bit_cast<float>(arg0->word_0) - std::bit_cast<float>(arg1->word_0);
    S2_1 = std::bit_cast<float>(arg0->word_8) - std::bit_cast<float>(arg1->word_8);
    fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S0, std::bit_cast<float>(*global_00565850));  // (from the original)
    S3_1 = sqrtf(S1_1 * S1_1 + S2_1 * S2_1);
    if (fpsr_1 >> 0x1e & 1) {  // (from the original)
        goto L_565834;
    }
    if (s32(std::bit_cast<u32>(fabsf(S3_1))) > s32(0x34000000u)) {  // (from the original)
        fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S3_1, S0);  // (from the original)
        if (fpsr_2 >> 0x1d & 1 && !(fpsr_2 >> 0x1e & 1)) {  // (from the original)
            S4_1 = S0 / S3_1;
            S0_1 = std::bit_cast<float>(*gptr<u32>(r0 + 8u)) - S2_1 * S4_1;
            *gptr<u32>(r0) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r0)) - S1_1 * S4_1));
            *gptr<u32>(r0 + 8u) = u32(std::bit_cast<u32>(S0_1));
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_1;
            return 0u;
        }
    }
    *gptr<u32>(r0) = u32(*gptr<u32>(r1));
    r1_1 = *gptr<u32>(r1 + 8u);
    *gptr<u32>(r0 + 8u) = u32(r1_1);
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1_1;
    return 1u;
L_565834:;
    S0_2 = fabsf(S3_1);
    if (s32(std::bit_cast<u32>(S0_2)) <= s32(0x34000000u)) {  // (from the original)
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
    float S3_1 = 0;
    float S4_1 = 0;
    u32 fpsr_1 = 0;
    float S3_2 = 0;
    float S5_1 = 0;
    float S6_1 = 0;
    u32 fpsr_2 = 0;
    float S4_2 = 0;
    float S3_3 = 0;
    float S0_1 = 0;
    u32 fpsr_3 = 0;
    float S2_1 = 0;
    float S1_1 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    float S0_4 = 0;
    S3_1 = std::bit_cast<float>(arg0->word_0);
    S4_1 = std::bit_cast<float>(arg1->word_0);
    fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S3_1, S4_1);  // (from the original)
    if (fpsr_1 >> 0x1e & 1) {  // (from the original)
        fpsr_1 = fpsr_1 & 0xfffffffu | vfp_cmpf(std::bit_cast<float>(arg0->word_8), std::bit_cast<float>(arg1->word_8));  // (from the original)
        if (fpsr_1 >> 0x1e & 1) {  // (from the original)
            S1_2 = std::bit_cast<float>(arg0->word_0) - std::bit_cast<float>(arg1->word_0);
            S0_3 = std::bit_cast<float>(arg0->word_8) - std::bit_cast<float>(arg1->word_8);
            S1_3 = S1_2 * S1_2 + S0_3 * S0_3;
            S0_4 = sqrtf(S1_3);
            guest::cpu()->s[0] = S0_4;
            guest::cpu()->s[1] = S1_3;
            return;
        }
    }
    S3_2 = S3_1 - S4_1;
    S5_1 = std::bit_cast<float>(arg0->word_8) - std::bit_cast<float>(arg1->word_8);
    S6_1 = sqrtf(S3_2 * S3_2 + S5_1 * S5_1);
    fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S6_1, S2);  // (from the original)
    if (fpsr_2 >> 0x1d & 1) {  // (from the original)
        S4_2 = S6_1 * S0;
        S3_3 = S3_2 * S0;
        S0_1 = S5_1 * S0;
        if (s32(std::bit_cast<u32>(fabsf(S4_2))) > s32(0x34000000u)) {  // (from the original)
            goto L_5659d8;
        }
    }
    arg0->word_0 = u32(arg1->word_0);
    arg0->word_8 = u32(arg1->word_8);
    S1_2 = std::bit_cast<float>(arg0->word_0) - std::bit_cast<float>(arg1->word_0);
    S0_3 = std::bit_cast<float>(arg0->word_8) - std::bit_cast<float>(arg1->word_8);
    S1_3 = S1_2 * S1_2 + S0_3 * S0_3;
    S0_4 = sqrtf(S1_3);
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_3;
    return;
L_5659d8:;
    fpsr_3 = fpsr_2 & 0xfffffffu | vfp_cmpf(S4_2, S1);  // (from the original)
    if (!(fpsr_3 >> 0x1e & 1) && fpsr_3 >> 0x1f == (fpsr_3 >> 0x1c & 1)) {  // (from the original)
        S2_1 = S1 / S4_2;
        S3_3 = S3_3 * S2_1;
        S0_1 = S0_1 * S2_1;
        goto L_565a0c;
    }
    if ((fpsr_3 & 0xfffffffu | vfp_cmpf(S4_2, S2)) >> 0x1d & 1) {  // (from the original)
        goto L_565a0c;
    }
    S1_1 = S2 / S4_2;
    S3_3 = S3_3 * S1_1;
    S0_1 = S0_1 * S1_1;
L_565a0c:;
    S0_2 = std::bit_cast<float>(arg0->word_8) - S0_1;
    arg0->word_0 = u32(std::bit_cast<u32>(std::bit_cast<float>(arg0->word_0) - S3_3));
    arg0->word_8 = u32(std::bit_cast<u32>(S0_2));
    S1_2 = std::bit_cast<float>(arg0->word_0) - std::bit_cast<float>(arg1->word_0);
    S0_3 = std::bit_cast<float>(arg0->word_8) - std::bit_cast<float>(arg1->word_8);
    S1_3 = S1_2 * S1_2 + S0_3 * S0_3;
    S0_4 = sqrtf(S1_3);
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_3;
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
    float S3_1 = 0;
    float S2_1 = 0;
    u32 fpsr_1 = 0;
    float S2_2 = 0;
    float S0_1 = 0;
    float S3_2 = 0;
    u32 r1_1 = 0;
    u32 fpsr_2 = 0;
    float S4_1 = 0;
    float S1_1 = 0;
    float S0_2 = 0;
    S3_1 = std::bit_cast<float>(arg0->word_0);
    S2_1 = std::bit_cast<float>(arg1->word_0);
    fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S3_1, S2_1);  // (from the original)
    if (fpsr_1 >> 0x1e & 1) {  // (from the original)
        fpsr_1 = fpsr_1 & 0xfffffffu | vfp_cmpf(std::bit_cast<float>(arg0->word_8), std::bit_cast<float>(arg1->word_8));  // (from the original)
        if (fpsr_1 >> 0x1e & 1) {  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            return;
        }
    }
    S2_2 = (S3_1 - S2_1) * S0;
    S0_1 = (std::bit_cast<float>(arg0->word_8) - std::bit_cast<float>(*gptr<u32>(r1 + 8u))) * S0;
    S3_2 = sqrtf(S2_2 * S2_2 + S0_1 * S0_1);
    r1_1 = std::bit_cast<u32>(fabsf(S3_2));
    if (s32(r1_1) <= s32(0x34000000u)) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1;
        return;
    }
    fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S3_2, S1);  // (from the original)
    if (!(fpsr_2 >> 0x1e & 1) && fpsr_2 >> 0x1f == (fpsr_2 >> 0x1c & 1)) {  // (from the original)
        S4_1 = S1 / S3_2;
        S2_2 = S2_2 * S4_1;
        S0_1 = S0_1 * S4_1;
    }
    S1_1 = std::bit_cast<float>(arg0->word_8);
    S0_2 = S1_1 - S0_1;
    arg0->word_0 = u32(std::bit_cast<u32>(std::bit_cast<float>(arg0->word_0) - S2_2));
    arg0->word_8 = u32(std::bit_cast<u32>(S0_2));
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    return;
}

}  // namespace d_00565a68
GUEST_EXPORT(0x00565a68, d_00565a68::f_00565a68);

// f_00565c00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00565c00 {

inline constexpr guest::Function<0x0013bb30, u32(u32, u32, u32, u32)> call_0013bb30;  // (from the original)

u32 f_00565c00() {
    return call_0013bb30(0x9753e8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00565c00
GUEST_EXPORT(0x00565c00, d_00565c00::f_00565c00);

// f_0056677c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056677c {

inline guest::global<u32, 0x00ae5484> global_00ae5484;  // (from the original)
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x007b1034, u32(u32, u32, u32, u32)> call_007b1034;  // (from the original)

u32 f_0056677c(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 ea_1 = 0;
    u32 r0_4 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    r13 = r13 - 0x18;  // (from the original)
    r5_1 = r0 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00135740(r5_1, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (u32(*gptr<u8>(r0 + 0x2cu)) != 0) {  // (from the original)
        r1_1 = *global_00ae5484;
        if (r1_1 == 0) {
            goto L_56681c;
        }
        r0_1 = *gptr<u32>(0xae5484u + 8u);  // (from the original)
        r1_2 = *gptr<u32>(0xae5484u + (r1_1 - 1u << 3) + 0xcu) - r0_1;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_007b1034(r0_1, r1_2, 0xae5484u, guest::cpu()->r[3]);  // (from the original)
        r2_2 = guest::cpu()->r[2];
        *gptr<u32>(r0 + 0x18u) = u32(*gptr<u32>(r0 + 0x18u) + 1u);  // (from the original)
        r0_2 = 0xae5484u + 8u;  // (from the original)
        *global_00ae5484 = u32(0u);
        guest::cpu()->r[13] = r13;
        call_002f825c(r0_2, 0x100u, r2_2, guest::cpu()->r[3]);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        goto L_56681c;
    }
    r0_3 = *gptr<u32>(r0 + 0x10u);  // (from the original)
    if (r0_3 == 0) {
        goto L_56681c;
    }
    r1_3 = *gptr<u32>(r0 + 0x14u) - r0_3;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_007b1034(r0_3, r1_3, r2_1, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    ea_1 = r0 + 0x18u;  // (from the original)
    r0_4 = *gptr<u32>(ea_1);
    ea_2 = r0 + 0x10u;  // (from the original)
    *gptr<u32>(ea_2) = u32(0u);
    ea_3 = r0 + 0x14u;  // (from the original)
    *gptr<u32>(ea_3) = u32(0u);
    *gptr<u32>(ea_3 + 4u) = u32(r0_4 + 1u);
L_56681c:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_00137e84(r5_1, r1_1, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_0056677c
GUEST_EXPORT(0x0056677c, d_0056677c::f_0056677c);

// f_00567224: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567224 {

inline guest::global<u8, 0x00975c30> global_00975c30;  // (from the original)
inline guest::global<u32, 0x00ae55cc> global_00ae55cc;  // (from the original)

u32 f_00567224() {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    r0_1 = u32(s32(s8(*gptr<u8>(0x975c30u + 1u))));  // (from the original)
    if (r0_1 != 0 && r0_1 >> 0x1f == (r0_1 & (r0_1 ^ r0_1)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[1] = 0x975c30u;  // (from the original)
        return r0_1;
    }
    *gptr<u32>(0x975c30u + 0x14u) = u32(0u);  // (from the original)
    r0_2 = *gptr<u32>(0x975c30u + 0xcu);  // (from the original)
    if (r0_2 == 0) {
        guest::cpu()->r[1] = 0x975c30u;  // (from the original)
        return r0_2;
    }
    if (*global_00ae55cc == 0) {
        guest::cpu()->r[1] = 0x975c30u;  // (from the original)
        return r0_2;
    }
    if (u32(*global_00975c30) != 0) {
        guest::cpu()->r[1] = 0x975c30u;  // (from the original)
        return r0_2;
    }
    *global_00975c30 = u8(1u);
    r3_1 = *gptr<u32>(*gptr<u32>(r0_2) + 0xcu);  // (from the original)
    return guest::call_address<u32>(r3_1, r0_2, 0x6c6f6164u, 0u, r3_1);  // (from the original)
}

}  // namespace d_00567224
GUEST_EXPORT(0x00567224, d_00567224::f_00567224);

// f_00567cc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567cc8 {

inline guest::global<u32, 0x00975c14> global_00975c14;  // (from the original)
inline constexpr guest::Function<0x00567ce4, u32(u32, u32, u32, u32)> call_00567ce4;  // (from the original)

u32 f_00567cc8(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    r3_1 = *global_00975c14;
    *gptr<u32>(r13) = u32(*gptr<u32>(0x975c14u + 4));  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00567ce4(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], r3_1);
    r13 = r13 + 8;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_00567cc8
GUEST_EXPORT(0x00567cc8, d_00567cc8::f_00567cc8);

// f_00567ce4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567ce4 {

inline constexpr guest::Function<0x004b6598, u32(u32, u32, u32, u32)> call_004b6598;  // (from the original)
inline constexpr guest::Function<0x0056a99c, u32(u32, u32, u32, u32)> call_0056a99c;  // (from the original)

u32 f_00567ce4(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r12_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r12_1 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(r1);  // (from the original)
    r1_1 = r13 + 8u;
    r0_1 = r0 + 0x15cu;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(0x9047f8u);  // (from the original)
    *gptr<u32>(r13) = u32(r12_1);
    guest::cpu()->r[13] = r13;
    r0_2 = call_0056a99c(r0_1, r1_1, r2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    if (*gptr<u32>(r0 + 0x158u) != 0) {  // (from the original)
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    r1_2 = *gptr<u32>(r0 + 0x22cu);  // (from the original)
    *gptr<u32>(r0 + 0x158u) = u32(r1_2);  // (from the original)
    if (*gptr<u32>(r0 + 8u) != 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    r0_3 = r0 + 0xcu;  // (from the original)
    *gptr<u32>(r0 + 8u) = u32(r1_2);
    guest::cpu()->r[13] = r13;
    call_004b6598(r0_3, r1_2, 0x567d5cu, guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_00567ce4
GUEST_EXPORT(0x00567ce4, d_00567ce4::f_00567ce4);

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

u32 f_00567d60(gptr<Object_00567d60_0> arg0, gptr<Object_00567d60_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 8;
    r1_1 = arg1->word_22c;
    r3_1 = arg0->word_8;
    if (r3_1 != 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    ea_1 = r0 + 8u;
    arg0->word_8 = u32(r1_1);
    r0_1 = ea_1 + 4u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_004b6598(r0_1, r1_1, 0x567d98u, r3_1);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_00567d60
GUEST_EXPORT(0x00567d60, d_00567d60::f_00567d60);

// f_00567d9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567d9c {

inline guest::global<u32, 0x00975c14> global_00975c14;  // (from the original)
inline constexpr guest::Function<0x00567dac, u32(u32, u32, u32, u32)> call_00567dac;  // (from the original)

u32 f_00567d9c() {
    u32 r2_1 = 0;
    r2_1 = *global_00975c14;
    return call_00567dac(guest::cpu()->r[0], guest::cpu()->r[1], r2_1, guest::cpu()->r[3]);
}

}  // namespace d_00567d9c
GUEST_EXPORT(0x00567d9c, d_00567d9c::f_00567d9c);

// f_00567dac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567dac {

inline constexpr guest::Function<0x004b6598, u32(u32, u32, u32, u32)> call_004b6598;  // (from the original)
inline constexpr guest::Function<0x00569dc4, u32(u32, u32, u32, u32)> call_00569dc4;  // (from the original)
inline constexpr guest::Function<0x0056aa98, u32(u32, u32, u32, u32)> call_0056aa98;  // (from the original)

u32 f_00567dac(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00569dc4(r0, r1, r2, r3);
    r1_1 = r13;
    *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
    *gptr<u32>(r13 + 4) = u32(r1);
    r2_1 = *gptr<u32>(r0_1 + 4u);
    r0_2 = r0 + 0x15cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0056aa98(r0_2, r1_1, r2_1, r2);
    r3_1 = guest::cpu()->r[3];
    r1_2 = *gptr<u32>(r0 + 0x22cu);  // (from the original)
    *gptr<u32>(r0 + 0x158u) = u32(r1_2);  // (from the original)
    if (*gptr<u32>(r0 + 8u) == 0) {
        r0_3 = r0 + 0xcu;  // (from the original)
        *gptr<u32>(r0 + 8u) = u32(r1_2);
        guest::cpu()->r[13] = r13;
        r0_4 = call_004b6598(r0_3, r1_2, 0x567e20u, r3_1);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        if (r0_4 != 0) {
            r0_5 = 1u;
            r13 = r13 + 0x18u;  // (from the original)
            guest::cpu()->r[1] = r1_2;
            guest::cpu()->r[13] = r13;
            return r0_5;
        }
    }
    r0_5 = 0u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_5;
}

}  // namespace d_00567dac
GUEST_EXPORT(0x00567dac, d_00567dac::f_00567dac);

// f_00567e24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567e24 {

inline guest::global<u32, 0x00975c14> global_00975c14;  // (from the original)
inline constexpr guest::Function<0x00567e34, u32(u32, u32, u32, u32)> call_00567e34;  // (from the original)

u32 f_00567e24() {
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    r2_1 = *global_00975c14;
    r3_1 = *gptr<u32>(0x975c14u + 4);  // (from the original)
    return call_00567e34(guest::cpu()->r[0], guest::cpu()->r[1], r2_1, r3_1);
}

}  // namespace d_00567e24
GUEST_EXPORT(0x00567e24, d_00567e24::f_00567e24);

// f_00567ef0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567ef0 {

struct __attribute__((packed)) Object_00567ef0_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00567ef0_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0013bc00, u32(u32, u32, u32, u32)> call_0013bc00;  // (from the original)
inline constexpr guest::Function<0x0056853c, u32(u32, u32, u32, u32)> call_0056853c;  // (from the original)

u32 f_00567ef0(gptr<Object_00567ef0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0x9061b8u);  // (from the original)
    r0_1 = r0 + 0x15cu;  // (from the original)
    r0_2 = call_0013bc00(r0_1, 0x9061b8u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_2 - 0x15cu) = u32(0x906224u);  // (from the original)
    r0_3 = r0_2 - 0x150u;  // (from the original)
    r0_4 = call_0056853c(r0_3, 0x906224u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_5 = r0_4 - 0xcu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_5;
}

}  // namespace d_00567ef0
GUEST_EXPORT(0x00567ef0, d_00567ef0::f_00567ef0);

// f_00567f20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567f20 {

struct __attribute__((packed)) Object_00567f20_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00567f20_0, word_4, 0x4);  // (from the original)


u32 f_00567f20(gptr<Object_00567f20_0> arg0) {
    u32 r0_1 = 0;
    r0_1 = arg0->word_4;
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
    u32 r1_1 = 0;
    r1_1 = ~0u;
    arg0->word_1c = u32(r1_1);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_00567f34
GUEST_EXPORT(0x00567f34, d_00567f34::f_00567f34);

// f_00567f40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567f40 {

struct __attribute__((packed)) Object_00567f40_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Object_00567f40_0, word_1c, 0x1c);  // (from the original)


u32 f_00567f40(gptr<Object_00567f40_0> arg0, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r1_3 = 0;
    float S0_2 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S1_2 = 0;
    float S0_3 = 0;
    u32 r1_4 = 0;
    r1_1 = arg0->word_1c;
    if (r1_1 == 0 || r1_1 >> 0x1f != (r1_1 & (r1_1 ^ r1_1)) >> 0x1f) {  // (from the original)
        r1_2 = ~0u;
        arg0->word_1c = u32(r1_2);
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return 1u;
    }
    if (s32(r1_1) <= s32(*gptr<u32>(r0 + 0x18u))) {  // (from the original)
        S0_1 = std::bit_cast<float>(r1_1);
        S1_1 = std::bit_cast<float>(r1_1 + 1u);
        r1_3 = r0 + 0xcu;  // (from the original)
        S0_2 = float(s32(std::bit_cast<u32>(S0_1))) / float(s32(std::bit_cast<u32>(S1_1)));
        S2_1 = std::bit_cast<float>(*gptr<u32>(r1_3)) * S0_2;
        S3_1 = std::bit_cast<float>(*gptr<u32>(r1_3 + 4)) * S0_2;
        *gptr<u32>(r0 + 0x14u) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r0 + 0x14u)) * S0_2));  // (from the original)
        *gptr<u32>(r1_3) = u32(std::bit_cast<u32>(S2_1));
        *gptr<u32>(r1_3 + 4) = u32(std::bit_cast<u32>(S3_1));
    }
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r0)) + std::bit_cast<float>(*gptr<u32>(r0 + 0xcu))));  // (from the original)
    *gptr<u32>(r0 + 4u) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r0 + 4u)) + std::bit_cast<float>(*gptr<u32>(r0 + 0x10u))));  // (from the original)
    S1_2 = std::bit_cast<float>(*gptr<u32>(r0 + 0x14u));  // (from the original)
    S0_3 = std::bit_cast<float>(*gptr<u32>(r0 + 8u)) + S1_2;
    *gptr<u32>(r0 + 8u) = u32(std::bit_cast<u32>(S0_3));
    r1_4 = *gptr<u32>(r0 + 0x1cu) - 1u;  // (from the original)
    *gptr<u32>(r0 + 0x1cu) = u32(r1_4);  // (from the original)
    guest::cpu()->r[1] = r1_4;
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

inline guest::global<u32, 0x00568108> global_00568108;  // (from the original)
inline guest::global<u32, 0x0056810c> global_0056810c;  // (from the original)

u32 f_00567fe4(gptr<Object_00567fe4_0> arg0, gptr<Object_00567fe4_1> arg1, gptr<Object_00567fe4_2> arg2, u32 r3, float S0) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = arg2.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S1 = 0;
    float S5 = 0;
    float S6 = 0;
    float S7 = 0;
    u32 r5_1 = 0;
    u32 r12_1 = 0;
    u32 res_1 = 0;
    u32 r3_1 = 0;
    u32 res_2 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    float S1_1 = 0;
    float S0_1 = 0;
    float S2_1 = 0;
    float S1_2 = 0;
    r13 = r13 - 8;
    r4 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r5_1 = *gptr<u32>(r13 + 8u);
    arg0->word_0 = u32(arg1->word_0);
    arg0->word_4 = u32(arg1->word_4);
    r12_1 = arg1->word_8;
    arg0->word_18 = u32(r4);
    arg0->word_8 = u32(r12_1);
    S7 = std::bit_cast<float>(arg2->word_0) - std::bit_cast<float>(arg1->word_0);
    S5 = std::bit_cast<float>(arg2->word_4) - std::bit_cast<float>(arg1->word_4);
    S6 = std::bit_cast<float>(arg2->word_8) - std::bit_cast<float>(arg1->word_8);
    S1 = std::bit_cast<float>(*global_00568108);
    r12 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(sqrtf(S7 * S7 + S5 * S5 + S6 * S6) / S0)));
    S0 = S1;
    if (s32(r12) > s32(r3)) {
        r12 = r3;
    }
    if (s32(r12) < s32(r5_1)) {
        r12 = r5_1;
    }
    arg0->word_1c = u32(r12);
    if (r4 == 0 || r4 >> 0x1f != (r4 & (r4 ^ r4)) >> 0x1f) {  // (from the original)
        goto L_5680bc;
    }
    r1 = 0u;
    if ((r4 & 1u) != 0) {
        r1 = 1u;
        S0 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r4)))) + S0;
    }
    res_1 = u32(s32(r4) >> 1);
    r2 = res_1;
    if (res_1 == 0) {
        goto L_5680b8;
    }
    do {
L_56808c:;
        r3_1 = r4 - r1;
        res_2 = r2 - 1u;
        r2 = res_2;
        r1 = r1 + 2u;
        S0 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r3_1)))) + S0;
        S1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r3_1 - 1u)))) + S1;
        guest::preempt();
    } while (res_2 != 0);
L_5680b8:;
    S0 = S0 + S1;
L_5680bc:;
    r1_1 = r4 + 1u;
    r0_1 = r0 + 0xcu;  // (from the original)
    S1_1 = std::bit_cast<float>(*global_0056810c) / (float(s32(std::bit_cast<u32>(std::bit_cast<float>(r12 - r4)))) + S0 / float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1_1)))));
    S0_1 = S7 * S1_1;
    S2_1 = S5 * S1_1;
    S1_2 = S6 * S1_1;
    *gptr<u32>(r0_1) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r0_1 + 4u) = u32(std::bit_cast<u32>(S2_1));
    *gptr<u32>(r0_1 + 8u) = u32(std::bit_cast<u32>(S1_2));
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_2;
    return r0_1;
}

}  // namespace d_00567fe4
GUEST_EXPORT(0x00567fe4, d_00567fe4::f_00567fe4);

// f_00568b38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00568b38 {

inline constexpr guest::Function<0x001408d4, u32(u32, u32, u32, u32)> call_001408d4;  // (from the original)
inline constexpr guest::Function<0x004b9f68, u32(u32, u32, u32, u32)> call_004b9f68;  // (from the original)

u32 f_00568b38(u32 r0, u32 r1) {
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5_1 = r0 + 0x10u;  // (from the original)
    r0_1 = call_004b9f68(r5_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        r0_2 = r5_1 + 4u;
        r1_2 = r0_1 + 4u;
        call_001408d4(r0_2, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00568b38
GUEST_EXPORT(0x00568b38, d_00568b38::f_00568b38);

// f_00569544: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00569544 {

struct __attribute__((packed)) Object_00569544_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 byte_14;
};
GUEST_OFFSET(Object_00569544_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00569544_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00569544_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00569544_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00569544_0, byte_14, 0x14);  // (from the original)

inline guest::global<u32, 0x005695d4> global_005695d4;  // (from the original)
inline guest::global<u32, 0x005695d8> global_005695d8;  // (from the original)

u32 f_00569544(gptr<Object_00569544_0> arg0) {
    u32 r0 = arg0.addr();
    u32 fpsr = guest::cpu()->fpscr;
    u32 r1_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 fpsr_1 = 0;
    u32 fpsr_2 = 0;
    u32 r0_1 = 0;
    r1_1 = u32(arg0->byte_14);
    S0_1 = std::bit_cast<float>(arg0->word_8);
    S1_1 = std::bit_cast<float>(arg0->word_10);
    arg0->word_c = u32(std::bit_cast<u32>(S0_1));
    if ((r1_1 & 2u) != 0) {
        fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S1_1, S0_1);  // (from the original)
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
        S1_1 = std::bit_cast<float>(*gptr<u32>(r0 + 4u)) - std::bit_cast<float>(*global_005695d8);
        if (!((fpsr & 0xfffffffu | vfp_cmpf(S1_1, S0_1)) >> 0x1d & 1)) {  // (from the original)
            S0_1 = S1_1;
        }
        goto L_5695c0;
    }
    S1_1 = std::bit_cast<float>(*gptr<u32>(r0 + 4u));
    fpsr_2 = fpsr & 0xfffffffu | vfp_cmpf(S1_1, S0_1);  // (from the original)
    if (fpsr_2 >> 0x1d & 1 && !(fpsr_2 >> 0x1e & 1)) {  // (from the original)
        goto L_5695c0;
    }
L_5695bc:;
    S0_1 = S0_1 - S1_1;
L_5695c0:;
    *gptr<u32>(r0 + 8u) = u32(std::bit_cast<u32>(S0_1));
    r0_1 = *gptr<u32>(r0 + 0x18u);  // (from the original)
    if (r0_1 != 0) {
        *gptr<u32>(r0_1 + 0x10u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
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
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
};
GUEST_OFFSET(Object_00569774_0, word_18, 0x18);  // (from the original)

inline guest::global<u32, 0x005697d8> global_005697d8;  // (from the original)
inline guest::global<u32, 0x005697dc> global_005697dc;  // (from the original)
inline constexpr guest::Function<0x0073bf80, u32(u32, u32, u32, u32)> call_0073bf80;  // (from the original)
inline constexpr guest::Function<0x0073bf94, u32(u32, u32, u32, u32)> call_0073bf94;  // (from the original)

u32 f_00569774(gptr<Object_00569774_0> arg0, u32 r1, float S0, float S1, float S2) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r5_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    u32 zf_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = r1;
    arg0->word_18 = u32(r1);
    if (r1 != 0) {
        r5_1 = 1u;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        r0_2 = call_0073bf80(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
        S2_1 = guest::cpu()->s[2];
        zf_1 = r0_2 == 0;
        r0_3 = *gptr<u32>(r0 + 0x18u);  // (from the original)
        if (!zf_1) {
            r5_1 = 0u;
        }
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        guest::cpu()->s[2] = S2_1;
        r0_4 = call_0073bf94(r0_3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        S1_2 = std::bit_cast<float>(r0_4);
        S0 = std::bit_cast<float>(*global_005697d8);
        S2_2 = std::bit_cast<float>(*global_005697dc);
        *gptr<u32>(r0 + 0x10u) = u32(std::bit_cast<u32>(S0));  // (from the original)
        r0_5 = r0 + 4u;
        S1 = float(std::bit_cast<u32>(S1_2));
        *gptr<u32>(r0_5) = u32(std::bit_cast<u32>(S1));
        *gptr<u32>(r0_5 + 4) = u32(std::bit_cast<u32>(S2_2));
        *gptr<u8>(r0 + 0x14u) = u8(r5_1);  // (from the original)
        *gptr<u32>(r0 + 0xcu) = u32(std::bit_cast<u32>(S2_2));  // (from the original)
        r0_1 = *gptr<u32>(r0 + 0x18u);  // (from the original)
        if (r0_1 != 0) {
            r1 = *gptr<u32>(r0 + 8u);
            *gptr<u32>(r0_1 + 0x10u) = u32(r1);  // (from the original)
        }
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0_1;
}

}  // namespace d_00569774
GUEST_EXPORT(0x00569774, d_00569774::f_00569774);

// f_00569ab8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00569ab8 {

struct __attribute__((packed)) Object_00569ab8_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00569ab8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00569ab8_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00569ab8_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00125e08, u32(u32, u32, u32, u32)> call_00125e08;  // (from the original)
inline constexpr guest::Function<0x0012b394, u32(u32, u32, u32, u32)> call_0012b394;  // (from the original)

u32 f_00569ab8(gptr<Object_00569ab8_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    r3_1 = r0 + 4u;
    guest::cpu()->r[13] -= 8u;
    arg0->word_4 = u32(r0 + 0xcu);  // (from the original)
    arg0->word_8 = u32(0u);
    arg0->word_0 = u32(0x906224u);  // (from the original)
    r0_1 = r0 + 0xcu;  // (from the original)
    r0_2 = call_0012b394(r0_1, 0x906224u, 0u, r3_1);  // (from the original)
    r3_2 = guest::cpu()->r[3];
    *gptr<u32>(r0_2) = u32(0x9061c8u);  // (from the original)
    r0_3 = r0_2 + 0x13cu;  // (from the original)
    *gptr<u32>(r0_3) = u32(0x2010000u);  // (from the original)
    r0_4 = r0_3 + 4u;
    r0_5 = call_00125e08(r0_4, 0x2010000u, 0x9061c8u, r3_2);  // (from the original)
    *gptr<u32>(r0_5) = u32(0x90614cu);  // (from the original)
    r0_6 = r0_5 - 0x14cu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0x90614cu;  // (from the original)
    return r0_6;
}

}  // namespace d_00569ab8
GUEST_EXPORT(0x00569ab8, d_00569ab8::f_00569ab8);

// f_00569b28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00569b28 {

struct __attribute__((packed)) Object_00569b28_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00569b28_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0056853c, u32(u32, u32, u32, u32)> call_0056853c;  // (from the original)

u32 f_00569b28(gptr<Object_00569b28_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0x906224u);  // (from the original)
    r0_1 = r0 + 0xcu;  // (from the original)
    r0_2 = call_0056853c(r0_1, 0x906224u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_3 = r0_2 - 0xcu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_3;
}

}  // namespace d_00569b28
GUEST_EXPORT(0x00569b28, d_00569b28::f_00569b28);

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
    float S3_1 = 0;
    S3_1 = std::bit_cast<float>(*global_00569b6c);
    arg0->word_4 = u32(std::bit_cast<u32>(S0));
    if (!((fpsr & 0xfffffffu | vfp_cmpf(S2, S3_1)) >> 0x1d & 1)) {  // (from the original)
        S2 = S3_1;
    }
    arg0->word_8 = u32(std::bit_cast<u32>(S2));
    arg0->word_10 = u32(std::bit_cast<u32>(S1));
    arg0->byte_14 = u8(r1);
    arg0->word_c = u32(std::bit_cast<u32>(S2));
    return;
}

}  // namespace d_00569b44
GUEST_EXPORT(0x00569b44, d_00569b44::f_00569b44);

// f_00569e90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00569e90 {

inline constexpr guest::Function<0x00132478, u32(u32, u32, u32, u32)> call_00132478;  // (from the original)
inline constexpr guest::Function<0x00567a10, u32(u32, u32, u32, u32)> call_00567a10;  // (from the original)
inline constexpr guest::Function<0x00569ebc, u32(u32, u32, u32, u32)> call_00569ebc;  // (from the original)

u32 f_00569e90(u32 r0) {
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    call_00569ebc(r0, 0x190u, 0xf0u, guest::cpu()->r[3]);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r0_1 = r0 + 4u;
    call_00567a10(r0_1, 0x410u, r2_1, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r0_2 = r0 + 4u;
    guest::cpu()->r[13] += 8u;
    return call_00132478(r0_2, r1_1, r2_2, guest::cpu()->r[3]);
}

}  // namespace d_00569e90
GUEST_EXPORT(0x00569e90, d_00569e90::f_00569e90);

// f_00569ebc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00569ebc {

inline guest::global<u32, 0x0056a10c> global_0056a10c;  // (from the original)
inline guest::global<u32, 0x0056a110> global_0056a110;  // (from the original)
inline guest::global<u32, 0x0056a114> global_0056a114;  // (from the original)
inline constexpr guest::Function<0x007b0530, u32(u32, u32, u32, u32)> call_007b0530;  // (from the original)

u32 f_00569ebc(u32 r0_unused, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r3_1 = 0;
    u32 r4_1 = 0;
    u32 r2_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S4_1 = 0;
    float S5_1 = 0;
    float S6_1 = 0;
    float S7_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    float S0_1 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    float S3_2 = 0;
    float S4_2 = 0;
    float S5_2 = 0;
    u32 r0_2 = 0;
    float S1_3 = 0;
    u32 r0_3 = 0;
    u32 res_1 = 0;
    u32 r12_1 = 0;
    u32 r4_2 = 0;
    u32 res_2 = 0;
    u32 r0_4 = 0;
    u32 res_3 = 0;
    u32 r4_3 = 0;
    float S2_3 = 0;
    float S3_3 = 0;
    u32 r0_5 = 0;
    u32 res_4 = 0;
    u32 r3_2 = 0;
    u32 r12_2 = 0;
    u32 res_5 = 0;
    u32 r0_6 = 0;
    u32 r12_3 = 0;
    u32 res_6 = 0;
    u32 r0_7 = 0;
    u32 res_7 = 0;
    u32 r3_3 = 0;
    u32 r12_4 = 0;
    u32 res_8 = 0;
    u32 r0_8 = 0;
    u32 r12_5 = 0;
    u32 r12_6 = 0;
    u32 res_9 = 0;
    u32 r0_9 = 0;
    u32 res_10 = 0;
    u32 r2_2 = 0;
    u32 r12_7 = 0;
    u32 r3_4 = 0;
    u32 res_11 = 0;
    u32 r0_10 = 0;
    u32 r3_5 = 0;
    u32 r12_8 = 0;
    u32 res_12 = 0;
    u32 r0_11 = 0;
    float S1_4 = 0;
    float S2_4 = 0;
    float S0_2 = 0;
    u32 r0_12 = 0;
    u32 res_13 = 0;
    u32 r1_2 = 0;
    u32 r3_6 = 0;
    u32 r2_3 = 0;
    u32 res_14 = 0;
    u32 r0_13 = 0;
    u32 r3_7 = 0;
    u32 r2_4 = 0;
    u32 res_15 = 0;
    u32 r0_14 = 0;
    u32 r3_8 = 0;
    float S0_3 = 0;
    float S1_5 = 0;
    float S2_5 = 0;
    float S3_4 = 0;
    float S4_3 = 0;
    float S5_3 = 0;
    float S6_2 = 0;
    float S7_2 = 0;
    u32 r0_15 = 0;
    u32 r1_3 = 0;
    float S0_4 = 0;
    float S1_6 = 0;
    r3_1 = uxth(r2);
    r4_1 = 0x8ae290u + 0x148u;  // (from the original)
    r2_1 = uxth(r1);
    S1_1 = std::bit_cast<float>(*gptr<u32>(r4_1 + 4));
    S2_1 = std::bit_cast<float>(*gptr<u32>(r4_1 + 8));
    S3_1 = std::bit_cast<float>(*gptr<u32>(r4_1 + 0xc));  // (from the original)
    S4_1 = std::bit_cast<float>(*gptr<u32>(r4_1 + 0x10));  // (from the original)
    S5_1 = std::bit_cast<float>(*gptr<u32>(r4_1 + 0x14));  // (from the original)
    S6_1 = std::bit_cast<float>(*gptr<u32>(r4_1 + 0x18));  // (from the original)
    S7_1 = std::bit_cast<float>(*gptr<u32>(r4_1 + 0x1c));  // (from the original)
    r13 = r13 - 0x40u;  // (from the original)
    r1_1 = *gptr<u32>(0x8ae290u + 4u);  // (from the original)
    r0_1 = 0x8ae290u + 0x168u;  // (from the original)
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r4_1))));
    *gptr<u32>(r13 + 4) = u32(std::bit_cast<u32>(S1_1));
    *gptr<u32>(r13 + 8) = u32(std::bit_cast<u32>(S2_1));
    *gptr<u32>(r13 + 0xc) = u32(std::bit_cast<u32>(S3_1));  // (from the original)
    *gptr<u32>(r13 + 0x10) = u32(std::bit_cast<u32>(S4_1));  // (from the original)
    *gptr<u32>(r13 + 0x14) = u32(std::bit_cast<u32>(S5_1));  // (from the original)
    *gptr<u32>(r13 + 0x18) = u32(std::bit_cast<u32>(S6_1));  // (from the original)
    *gptr<u32>(r13 + 0x1c) = u32(std::bit_cast<u32>(S7_1));  // (from the original)
    S0_1 = std::bit_cast<float>(*gptr<u32>(r0_1));
    S1_2 = std::bit_cast<float>(*gptr<u32>(r0_1 + 4));
    S2_2 = std::bit_cast<float>(*gptr<u32>(r0_1 + 8));
    S3_2 = std::bit_cast<float>(*gptr<u32>(r0_1 + 0xc));  // (from the original)
    S4_2 = std::bit_cast<float>(*gptr<u32>(r0_1 + 0x10));  // (from the original)
    S5_2 = std::bit_cast<float>(*gptr<u32>(r0_1 + 0x14));  // (from the original)
    r0_2 = r13 + 0x20u;  // (from the original)
    *gptr<u32>(r0_2) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r0_2 + 4) = u32(std::bit_cast<u32>(S1_2));
    *gptr<u32>(r0_2 + 8) = u32(std::bit_cast<u32>(S2_2));
    *gptr<u32>(r0_2 + 0xc) = u32(std::bit_cast<u32>(S3_2));  // (from the original)
    *gptr<u32>(r0_2 + 0x10) = u32(std::bit_cast<u32>(S4_2));  // (from the original)
    *gptr<u32>(r0_2 + 0x14) = u32(std::bit_cast<u32>(S5_2));  // (from the original)
    S1_3 = std::bit_cast<float>(*global_0056a10c);
    r0_3 = std::bit_cast<u32>(float(std::bit_cast<u32>(std::bit_cast<float>(r3_1))) * S1_3);
    res_1 = r0_3 & 0x80000000u;  // (from the original)
    r12_1 = res_1;
    if (res_1 != 0) {
        r12_1 = 0x800000u;  // (from the original)
    }
    r4_2 = r0_3 << 1 >> 0x18;  // (from the original)
    r14 = r0_3 << 9;
    res_2 = r0_3 & ~0x80000000u;  // (from the original)
    r0_4 = res_2;
    r14 = r14 >> 9;
    if (res_2 == 0) {
        r14 = r14 >> 7;
        goto L_569f40;
    }
    res_3 = r4_2 - 0x40u;  // (from the original)
    r0_4 = res_3;
    r14 = r14 >> 7;
    if (res_3 >> 0x1f) {  // (from the original)
        goto L_569f4c;
    }
    if (s32(r0_4) > s32(0x7fu)) {  // (from the original)
        r12_1 = 0x7f0000u;  // (from the original)
        goto L_569f4c;
    }
L_569f40:;
    r4_3 = r0_4 & 0x7fu;  // (from the original)
    r12_1 = r14 | r12_1 | r4_3 << 0x10;  // (from the original)
L_569f4c:;
    S2_3 = std::bit_cast<float>(*global_0056a110);
    *gptr<u32>(r13) = u32(r12_1);
    S3_3 = float(std::bit_cast<u32>(std::bit_cast<float>(r3_1)));
    r0_5 = std::bit_cast<u32>(S2_3 / S3_3);
    res_4 = r0_5 & 0x80000000u;  // (from the original)
    r3_2 = res_4;
    r14 = r0_5 << 1;
    r12_2 = r0_5 << 9;
    if (res_4 != 0) {
        r3_2 = 0x40000000u;  // (from the original)
    }
    res_5 = r0_5 & ~0x80000000u;  // (from the original)
    r0_6 = res_5;
    r12_3 = r12_2 >> 9;
    r14 = r14 >> 0x18;  // (from the original)
    if (res_5 != 0) {
        res_6 = r14 - 0x40u;  // (from the original)
        r0_6 = res_6;
        if (res_6 >> 0x1f) {  // (from the original)
            goto L_569fa4;
        }
        if (s32(r0_6) > s32(0x7fu)) {  // (from the original)
            r3_2 = 0x3f800000u;  // (from the original)
            goto L_569fa4;
        }
    }
    r3_2 = r12_3 | r3_2 | (r0_6 & 0x7fu) << 0x17;  // (from the original)
L_569fa4:;
    *gptr<u32>(r13 + 8u) = u32(r3_2 << 1);
    r0_7 = std::bit_cast<u32>(float(std::bit_cast<u32>(std::bit_cast<float>(r2_1))) * S1_3);
    res_7 = r0_7 & 0x80000000u;  // (from the original)
    r3_3 = res_7;
    if (res_7 != 0) {
        r3_3 = 0x800000u;  // (from the original)
    }
    r14 = r0_7 << 1 >> 0x18;  // (from the original)
    r12_4 = r0_7 << 9;
    res_8 = r0_7 & ~0x80000000u;  // (from the original)
    r0_8 = res_8;
    r12_5 = r12_4 >> 9;
    if (res_8 == 0) {
        r12_6 = r12_5 >> 7;
        goto L_569ff8;
    }
    res_9 = r14 - 0x40u;  // (from the original)
    r0_8 = res_9;
    r12_6 = r12_5 >> 7;
    if (res_9 >> 0x1f) {  // (from the original)
        goto L_56a004;
    }
    if (s32(r0_8) > s32(0x7fu)) {  // (from the original)
        r3_3 = 0x7f0000u;  // (from the original)
        goto L_56a004;
    }
L_569ff8:;
    r3_3 = r12_6 | r3_3 | (r0_8 & 0x7fu) << 0x10;  // (from the original)
L_56a004:;
    *gptr<u32>(r13 + 0xcu) = u32(r3_3);  // (from the original)
    r0_9 = std::bit_cast<u32>(S2_3 / float(std::bit_cast<u32>(std::bit_cast<float>(r2_1))));
    res_10 = r0_9 & 0x80000000u;  // (from the original)
    r2_2 = res_10;
    r12_7 = r0_9 << 1;
    r3_4 = r0_9 << 9;
    if (res_10 != 0) {
        r2_2 = 0x40000000u;  // (from the original)
    }
    res_11 = r0_9 & ~0x80000000u;  // (from the original)
    r0_10 = res_11;
    r3_5 = r3_4 >> 9;
    r12_8 = r12_7 >> 0x18;  // (from the original)
    if (res_11 != 0) {
        res_12 = r12_8 - 0x40u;  // (from the original)
        r0_10 = res_12;
        if (res_12 >> 0x1f) {  // (from the original)
            goto L_56a058;
        }
        if (s32(r0_10) > s32(0x7fu)) {  // (from the original)
            r2_2 = 0x3f800000u;  // (from the original)
            goto L_56a058;
        }
    }
    r2_2 = r3_5 | r2_2 | (r0_10 & 0x7fu) << 0x17;  // (from the original)
L_56a058:;
    *gptr<u32>(r13 + 0x10u) = u32(r2_2 << 1);  // (from the original)
    *gptr<u32>(r13 + 0x28u) = u32(0xbf0000u);  // (from the original)
    if ((r1_1 & 0xffu) == 0) {  // (from the original)
        r0_11 = 0x10u;  // (from the original)
    } else {
        r0_11 = 0x18u;  // (from the original)
    }
    S1_4 = std::bit_cast<float>(*global_0056a114);
    S2_4 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(lsl_r(1u, r0_11 & 0xff) - 1u))));  // (from the original)
    S0_2 = S1_4 / S2_4;
    r0_12 = std::bit_cast<u32>(S0_2);
    res_13 = r0_12 & 0x80000000u;  // (from the original)
    r1_2 = res_13;
    r3_6 = r0_12 << 1;
    r2_3 = r0_12 << 9 >> 9;
    if (res_13 != 0) {
        r1_2 = 0x800000u;  // (from the original)
    }
    res_14 = r0_12 & ~0x80000000u;  // (from the original)
    r0_13 = res_14;
    r3_7 = r3_6 >> 0x18;  // (from the original)
    if (res_14 == 0) {
        r2_4 = r2_3 >> 7;
        goto L_56a0d0;
    }
    res_15 = r3_7 - 0x40u;  // (from the original)
    r0_13 = res_15;
    r2_4 = r2_3 >> 7;
    if (res_15 >> 0x1f) {  // (from the original)
        goto L_56a0dc;
    }
    if (s32(r0_13) > s32(0x7fu)) {  // (from the original)
        r1_2 = 0x7f0000u;  // (from the original)
        goto L_56a0dc;
    }
L_56a0d0:;
    r3_7 = r0_13 & 0x7fu;  // (from the original)
    r1_2 = r2_4 | r1_2 | r3_7 << 0x10;  // (from the original)
L_56a0dc:;
    *gptr<u32>(r13 + 0x30u) = u32(r1_2);  // (from the original)
    r0_14 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_4;
    guest::cpu()->s[2] = S2_4;
    guest::cpu()->s[3] = S3_3;
    guest::cpu()->s[4] = S4_2;
    guest::cpu()->s[5] = S5_2;
    guest::cpu()->s[6] = S6_1;
    guest::cpu()->s[7] = S7_1;
    call_007b0530(r0_14, 0x38u, 1u, r3_7);  // (from the original)
    r3_8 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    S1_5 = guest::cpu()->s[1];
    S2_5 = guest::cpu()->s[2];
    S3_4 = guest::cpu()->s[3];
    S4_3 = guest::cpu()->s[4];
    S5_3 = guest::cpu()->s[5];
    S6_2 = guest::cpu()->s[6];
    S7_2 = guest::cpu()->s[7];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_5;
    guest::cpu()->s[2] = S2_5;
    guest::cpu()->s[3] = S3_4;
    guest::cpu()->s[4] = S4_3;
    guest::cpu()->s[5] = S5_3;
    guest::cpu()->s[6] = S6_2;
    guest::cpu()->s[7] = S7_2;
    r0_15 = call_007b0530(0x8ae398u, 0x40u, 1u, r3_8);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    S0_4 = guest::cpu()->s[0];
    S1_6 = guest::cpu()->s[1];
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_6;
    return r0_15;
}

}  // namespace d_00569ebc
GUEST_EXPORT(0x00569ebc, d_00569ebc::f_00569ebc);

// f_0056a178: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a178 {

inline guest::global<u32, 0x0056a1d0> global_0056a1d0;  // (from the original)

u32 f_0056a178(gptr<Float3> arg0) {
    u32 r0 = arg0.addr();
    float S4_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S0_1 = 0;
    u32 r1_1 = 0;
    float S0_2 = 0;
    float S3_2 = 0;
    float S1_2 = 0;
    float S0_3 = 0;
    S4_1 = arg0->v[0];
    S1_1 = arg0->v[1];
    S2_1 = arg0->v[2];
    S3_1 = sqrtf(S4_1 * S4_1 + S1_1 * S1_1 + S2_1 * S2_1);
    S0_1 = fabsf(S3_1);
    r1_1 = std::bit_cast<u32>(S0_1);
    if (s32(r1_1) <= s32(0x34000000u)) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 0u;
    }
    S0_2 = std::bit_cast<float>(*global_0056a1d0) / S3_1;
    S3_2 = S4_1 * S0_2;
    S1_2 = S1_1 * S0_2;
    S0_3 = S2_1 * S0_2;
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S3_2));
    *gptr<u32>(r0 + 4u) = u32(std::bit_cast<u32>(S1_2));
    *gptr<u32>(r0 + 8u) = u32(std::bit_cast<u32>(S0_3));
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_2;
    return 1u;
}

}  // namespace d_0056a178
GUEST_EXPORT(0x0056a178, d_0056a178::f_0056a178);

// f_0056a3fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a3fc {

inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)
inline guest::global<u32, 0x009752e0> global_009752e0;  // (from the original)
inline constexpr guest::Function<0x00133580, u32(u32, u32, u32, u32)> call_00133580;  // (from the original)
inline constexpr guest::Function<0x0053dffc, u32(u32, u32, u32, u32)> call_0053dffc;  // (from the original)

u32 f_0056a3fc(u32 r0) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r2_2 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r4_1 = 0;
    r13 = r13 - 0x118u;  // (from the original)
    ea_1 = r13 + 8u;
    *gptr<u32>(ea_1) = u32(r13 + 0x10u);  // (from the original)
    *gptr<u32>(ea_1 + 4) = u32(0x100u);  // (from the original)
    *gptr<u8>(0x100u + (*gptr<u32>(r13 + 8u) - 1u)) = u8(u32(*global_008c9f1c));  // (from the original)
    r2_1 = r13 + 4u;
    *gptr<u8>(r13 + 0x10u) = u8(u32(*global_008c9f1c));  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(0x9048b0u);  // (from the original)
    r0_1 = *global_009752e0;
    guest::cpu()->r[13] = r13;
    r0_2 = call_00133580(r0_1, r0, r2_1, 0x100u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        r13 = r13 + 0x118u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    *gptr<u8>(r13) = u8(0u);
    r2_2 = r13 + 4u;
    r1_2 = r13;
    guest::cpu()->r[13] = r13;
    call_0053dffc(r0_2, r1_2, r2_2, r3_1);
    r1_3 = guest::cpu()->r[1];
    r4_1 = u32(s32(s8(*gptr<u8>(r13))));
    r13 = r13 + 0x118u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r4_1;
}

}  // namespace d_0056a3fc
GUEST_EXPORT(0x0056a3fc, d_0056a3fc::f_0056a3fc);

// f_0056a4a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a4a4 {

inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)
inline guest::global<u32, 0x009752e0> global_009752e0;  // (from the original)
inline constexpr guest::Function<0x00133580, u32(u32, u32, u32, u32)> call_00133580;  // (from the original)
inline constexpr guest::Function<0x0053dffc, u32(u32, u32, u32, u32)> call_0053dffc;  // (from the original)

u32 f_0056a4a4(u32 r0) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r2_2 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r4_1 = 0;
    r13 = r13 - 0x118u;  // (from the original)
    ea_1 = r13 + 8u;
    *gptr<u32>(ea_1) = u32(r13 + 0x10u);  // (from the original)
    *gptr<u32>(ea_1 + 4) = u32(0x100u);  // (from the original)
    *gptr<u8>(0x100u + (*gptr<u32>(r13 + 8u) - 1u)) = u8(u32(*global_008c9f1c));  // (from the original)
    r2_1 = r13 + 4u;
    *gptr<u8>(r13 + 0x10u) = u8(u32(*global_008c9f1c));  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(0x9048b0u);  // (from the original)
    r0_1 = *global_009752e0;
    guest::cpu()->r[13] = r13;
    r0_2 = call_00133580(r0_1, r0, r2_1, 0x100u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        r13 = r13 + 0x118u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    *gptr<u8>(r13) = u8(0u);
    r2_2 = r13 + 4u;
    r1_2 = r13;
    guest::cpu()->r[13] = r13;
    call_0053dffc(r0_2, r1_2, r2_2, r3_1);
    r1_3 = guest::cpu()->r[1];
    r4_1 = u32(s32(s8(*gptr<u8>(r13))));
    r13 = r13 + 0x118u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r4_1;
}

}  // namespace d_0056a4a4
GUEST_EXPORT(0x0056a4a4, d_0056a4a4::f_0056a4a4);

// f_0056a534: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a534 {

struct __attribute__((packed)) Object_0056a534_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0056a534_2, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00125b3c, u32(u32, u32, u32, u32)> call_00125b3c;  // (from the original)

u32 f_0056a534(u32 r0_unused, u32 r1_unused, gptr<Object_0056a534_2> arg2) {
    u32 r2_1 = 0;
    r2_1 = arg2->word_4;
    return call_00125b3c(guest::cpu()->r[0], guest::cpu()->r[1], r2_1, guest::cpu()->r[3]);
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

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x0053dfa0, u32(u32, u32, u32, u32)> call_0053dfa0;  // (from the original)

u32 f_0056a53c(gptr<Object_0056a53c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r5_1 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_2 = 0;
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    *gptr<u32>(ea_1 + 4) = u32(r4);
    *gptr<u32>(ea_1 + 8) = u32(r5);
    *gptr<u32>(ea_1 + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r0_1 = arg0->word_30;
    if (r0_1 != 0) {
        guest::cpu()->r[13] = r13;
        call_00135740(0xae563cu, r1, r2, r3);  // (from the original)
        r3_1 = guest::cpu()->r[3];
        r0_2 = *gptr<u32>(r0 + 0x30u);  // (from the original)
        *gptr<u32>(r13) = u32(0u);
        r1_1 = r13;
        guest::cpu()->r[13] = r13;
        call_0053dfa0(r0_2, r1_1, r0, r3_1);
        r1_2 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        r5_1 = *gptr<u32>(r13);
        guest::cpu()->r[13] = r13;
        call_00137e84(0xae563cu, r1_2, r2_1, r3_2);  // (from the original)
        r1 = guest::cpu()->r[1];
        r0_1 = r5_1;
    }
    ea_2 = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4_1 = *gptr<u32>(ea_2 + 4);
    r5_2 = *gptr<u32>(ea_2 + 8);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[13] = r13;
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
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x00542358, u32(u32, u32, u32, u32)> call_00542358;  // (from the original)

u32 f_0056a58c(gptr<Object_0056a58c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r5_1 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    if (arg0->word_30 != 0) {
        r0_1 = 0u;
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    guest::cpu()->r[13] = r13;
    call_00135740(0xae563cu, r1, r2, r3);  // (from the original)
    r0_2 = *global_009752e0;
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_3 = call_00542358(r0_2, r0, r1, 0u);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r0 + 0x30u) = u32(r0_3);  // (from the original)
    if (r0_3 == 0) {
        r5_1 = 0u;
    } else {
        r5_1 = 1u;
    }
    guest::cpu()->r[13] = r13;
    call_00137e84(0xae563cu, r1_1, r2_1, r3_1);  // (from the original)
    r1 = guest::cpu()->r[1];
    r0_1 = r5_1;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_0056a58c
GUEST_EXPORT(0x0056a58c, d_0056a58c::f_0056a58c);

// f_0056a5fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a5fc {

struct __attribute__((packed)) Object_0056a5fc_0 {
    u8 unknown_0[0x30];  // (not used here)
    u32 word_30;
};
GUEST_OFFSET(Object_0056a5fc_0, word_30, 0x30);  // (from the original)

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x0053e71c, u32(u32, u32, u32, u32)> call_0053e71c;  // (from the original)

u32 f_0056a5fc(gptr<Object_0056a5fc_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r5_1 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r0_1 = arg0->word_30;
    if (r0_1 != 0) {
        guest::cpu()->r[13] = r13;
        call_00135740(0xae563cu, r1, r2, r3);  // (from the original)
        r0_2 = *gptr<u32>(r0 + 0x30u);  // (from the original)
        *gptr<u32>(r13 + 4u) = u32(0u);
        r1_1 = r13 + 4u;
        *gptr<u32>(r13) = u32(r2);
        guest::cpu()->r[13] = r13;
        call_0053e71c(r0_2, r1_1, r0, r1);
        r1_2 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        r5_1 = *gptr<u32>(r13 + 4u);
        guest::cpu()->r[13] = r13;
        call_00137e84(0xae563cu, r1_2, r2_1, r3_1);  // (from the original)
        r1 = guest::cpu()->r[1];
        r0_1 = r5_1;
    }
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_0056a5fc
GUEST_EXPORT(0x0056a5fc, d_0056a5fc::f_0056a5fc);

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
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    u32 fpsr_1 = 0;
    float S3_1 = 0;
    u32 fpsr_2 = 0;
    u32 r1_1 = 0;
    float S1_2 = 0;
    S0_1 = std::bit_cast<float>(arg0->word_0);
    S1_1 = std::bit_cast<float>(arg0->word_4);
    S2_1 = S0_1;
    fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S1_1, S0_1);  // (from the original)
    S3_1 = std::bit_cast<float>(arg0->word_8);
    if (!(fpsr_1 >> 0x1e & 1) && fpsr_1 >> 0x1f == (fpsr_1 >> 0x1c & 1)) {  // (from the original)
        S0_1 = S1_1;
    }
    fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S3_1, S0_1);  // (from the original)
    if (!(fpsr_2 >> 0x1e & 1) && fpsr_2 >> 0x1f == (fpsr_2 >> 0x1c & 1)) {  // (from the original)
        S0_1 = S3_1;
    }
    r1_1 = std::bit_cast<u32>(S0_1);
    if (s32(r1_1) <= s32(0x3f800000u)) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return;
    }
    arg0->word_0 = u32(std::bit_cast<u32>(S2_1 / S0_1));
    arg0->word_4 = u32(std::bit_cast<u32>(S1_1 / S0_1));
    S1_2 = S3_1 / S0_1;
    arg0->word_8 = u32(std::bit_cast<u32>(S1_2));
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_2;
    return;
}

}  // namespace d_0056a664
GUEST_EXPORT(0x0056a664, d_0056a664::f_0056a664);

// f_0056a724: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a724 {

struct __attribute__((packed)) Object_0056a724_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0056a724_0, word_4, 0x4);  // (from the original)


u32 f_0056a724(gptr<Object_0056a724_0> arg0) {
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    r0_1 = arg0->word_4;
    r2_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x1cu);  // (from the original)
    return guest::call_address<u32>(r2_1, r0_1, guest::cpu()->r[1], r2_1, guest::cpu()->r[3]);
}

}  // namespace d_0056a724
GUEST_EXPORT(0x0056a724, d_0056a724::f_0056a724);

// f_0056a734: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a734 {

struct __attribute__((packed)) Object_0056a734_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0056a734_0, word_4, 0x4);  // (from the original)


u32 f_0056a734(gptr<Object_0056a734_0> arg0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    r0_1 = arg0->word_4;
    if (r2 == 0) {
        r2 = 1u;
    }
    r1_1 = r1 + r2;
    r3_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x18u);  // (from the original)
    return guest::call_address<u32>(r3_1, r0_1, r1_1, r2, r3_1);
}

}  // namespace d_0056a734
GUEST_EXPORT(0x0056a734, d_0056a734::f_0056a734);

// f_0056a758: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a758 {

inline guest::global<u32, 0x00975c38> global_00975c38;  // (from the original)
inline constexpr guest::Function<0x0056a780, u32(u32, u32, u32, u32)> call_0056a780;  // (from the original)

u32 f_0056a758() {
    u32 r13 = guest::cpu()->r[13];
    u32 r12_1 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    r12_1 = *global_00975c38;
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4) = u32(r12_1);
    guest::cpu()->r[13] = r13;
    call_0056a780(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_0056a758
GUEST_EXPORT(0x0056a758, d_0056a758::f_0056a758);

// f_0056a94c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a94c {

inline guest::global<u32, 0x00975c34> global_00975c34;  // (from the original)
inline constexpr guest::Function<0x0056a780, u32(u32, u32, u32, u32)> call_0056a780;  // (from the original)

u32 f_0056a94c() {
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 r12_1 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    r3_1 = *global_00975c34;
    r12_1 = *gptr<u32>(0x975c34u + 4);  // (from the original)
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4) = u32(r12_1);
    guest::cpu()->r[13] = r13;
    call_0056a780(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], r3_1);
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_0056a94c
GUEST_EXPORT(0x0056a94c, d_0056a94c::f_0056a94c);

// f_0056a974: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a974 {

inline guest::global<u32, 0x00975c38> global_00975c38;  // (from the original)
inline constexpr guest::Function<0x0056a780, u32(u32, u32, u32, u32)> call_0056a780;  // (from the original)

u32 f_0056a974() {
    u32 r13 = guest::cpu()->r[13];
    u32 r12_1 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    r12_1 = *global_00975c38;
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4) = u32(r12_1);
    guest::cpu()->r[13] = r13;
    call_0056a780(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_0056a974
GUEST_EXPORT(0x0056a974, d_0056a974::f_0056a974);

// f_0056a99c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a99c {

inline constexpr guest::Function<0x0056a780, u32(u32, u32, u32, u32)> call_0056a780;  // (from the original)

u32 f_0056a99c() {
    u32 r13 = guest::cpu()->r[13];
    u32 r12_1 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    r12_1 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4) = u32(r12_1);
    guest::cpu()->r[13] = r13;
    call_0056a780(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_0056a99c
GUEST_EXPORT(0x0056a99c, d_0056a99c::f_0056a99c);

// f_0056a9bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a9bc {

struct __attribute__((packed)) Object_0056a9bc_0 {
    u8 unknown_0[0xe8];  // (not used here)
    u8 byte_e8;
};
GUEST_OFFSET(Object_0056a9bc_0, byte_e8, 0xe8);  // (from the original)

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x00138920, u32(u32, u32, u32, u32)> call_00138920;  // (from the original)
inline constexpr guest::Function<0x0013f134, u32(u32, u32, u32, u32)> call_0013f134;  // (from the original)

u32 f_0056a9bc(gptr<Object_0056a9bc_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    u32 zf_2 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = u32(arg0->byte_e8);
    r1 = u32(arg0->byte_e8);
    if (r1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    if (r0_1 == 6u) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    zf_1 = u32(arg0->byte_e8) == 1u;
    if (!zf_1) {
        zf_1 = u32(arg0->byte_e8) == 3u;
    }
    if (zf_1) {
        goto L_56aa14;
    }
    zf_2 = u32(arg0->byte_e8) == 4u;
    if (!zf_2) {
        zf_2 = u32(arg0->byte_e8) == 5u;
    }
    if (zf_2) {
        goto L_56aa14;
    }
    if (u32(arg0->byte_e8) == 2u) {
        goto L_56aa64;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 1u;
L_56aa14:;
    *gptr<u8>(r0 + 0xe8u) = u8(6u);  // (from the original)
    r0_2 = call_00138920(0xae55c8u, r0, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    call_00135740(0xae55d4u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_0013f134(0xae55c8u, r0, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    call_00137e84(0xae55d4u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
L_56aa64:;
    if (u32(*gptr<u8>(r0 + 0xe9u)) != 0) {  // (from the original)
        *gptr<u8>(r0 + 0xeau) = u8(1u);  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_0056a9bc
GUEST_EXPORT(0x0056a9bc, d_0056a9bc::f_0056a9bc);

// f_0056aa98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056aa98 {

inline constexpr guest::Function<0x0056a780, u32(u32, u32, u32, u32)> call_0056a780;  // (from the original)

u32 f_0056aa98() {
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10u;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_0056a780(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_0056aa98
GUEST_EXPORT(0x0056aa98, d_0056aa98::f_0056aa98);

// f_0056aab8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056aab8 {

struct __attribute__((packed)) Object_0056aab8_0 {
    u8 unknown_0[0xe8];  // (not used here)
    u8 byte_e8;
};
GUEST_OFFSET(Object_0056aab8_0, byte_e8, 0xe8);  // (from the original)


u32 f_0056aab8(gptr<Object_0056aab8_0> arg0) {
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    r0_1 = u32(arg0->byte_e8);
    zf_1 = r0_1 == 3u;
    if (!zf_1) {
        zf_1 = r0_1 == 4u;
    }
    if (zf_1) {
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

u32 f_0056ae38(gptr<Object_0056ae38_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r7_1 = 0;
    u32 r6_1 = 0;
    u32 r9_1 = 0;
    u32 r0_1 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 vf_1 = 0;
    u32 res_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 res_3 = 0;
    u32 r0_4 = 0;
    r13 = r13 - 0x20;  // (from the original)
    r4_1 = r1;
    r7_1 = arg0->word_0;
    r6_1 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r9_1 = r1 - r7_1;
    if (r7_1 == r4_1) {
        goto L_56aed0;
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f9e1c(r9_1, r2, r2, r3);
    r1 = guest::cpu()->r[1];
    res_1 = r0_1 - r6_1;
    nf_1 = res_1 >> 0x1f;  // (from the original)
    zf_1 = res_1 == 0;
    vf_1 = ((r0_1 ^ r6_1) & (r0_1 ^ res_1)) >> 0x1f;  // (from the original)
    if (zf_1 || nf_1 != vf_1) {
        r1 = 0u - r6_1;
        res_2 = r1 - r0_1;
        nf_1 = res_2 >> 0x1f;  // (from the original)
        zf_1 = res_2 == 0;
        vf_1 = ((r1 ^ r0_1) & (r1 ^ res_2)) >> 0x1f;  // (from the original)
    }
    if (zf_1 || nf_1 != vf_1) {
        goto L_56ae9c;
    }
    if (s32(r0_1) > s32(r3)) {
        r0_1 = r3;
        goto L_56ae90;
    }
    r1 = 0u - r3;
    if (s32(r1) > s32(r0_1)) {
        r0_1 = r1;
    }
L_56ae90:;
    *gptr<u32>(r0) = u32(r0_1 + r7_1);
    goto L_56aed0;
L_56ae9c:;
    if (r9_1 >> 0x1f == (r9_1 & (r9_1 ^ r9_1)) >> 0x1f) {  // (from the original)
        r0_2 = r7_1 + r6_1;
        r1 = r4_1 - r0_2;
        *gptr<u32>(r0) = u32(r0_2);
        if (r1 != 0 && r1 >> 0x1f == (r1 & (r1 ^ r1)) >> 0x1f) {  // (from the original)
            goto L_56aed0;
        }
    } else {
        r0_3 = r7_1 - r6_1;
        res_3 = r4_1 - r0_3;
        r1 = res_3;
        *gptr<u32>(r0) = u32(r0_3);
        if (res_3 >> 0x1f) {  // (from the original)
            goto L_56aed0;
        }
    }
    *gptr<u32>(r0) = u32(r4_1);
L_56aed0:;
    r0_4 = r4_1 - *gptr<u32>(r0);
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_4;
}

}  // namespace d_0056ae38
GUEST_EXPORT(0x0056ae38, d_0056ae38::f_0056ae38);

// f_0056aedc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056aedc {

struct __attribute__((packed)) Object_0056aedc_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_0056aedc_0, half_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002f9e1c, u32(u32, u32, u32, u32)> call_002f9e1c;  // (from the original)

u32 f_0056aedc(gptr<Object_0056aedc_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r6_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 vf_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r6_1 = u32(s32(s16(arg0->half_0)));
    r0_1 = r1 - r6_1;
    r0_2 = sxth(r0_1);
    r0_3 = call_002f9e1c(r0_2, r2, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r0_4 = sxth(r0_3);
    if (s32(r0_4) > s32(r3)) {
        r0_4 = r6_1 + r3;
        goto L_56af24;
    }
    r1_1 = 0u - r3;
    res_1 = r0_4 - r1_1;
    nf_1 = res_1 >> 0x1f;  // (from the original)
    vf_1 = ((r0_4 ^ r1_1) & (r0_4 ^ res_1)) >> 0x1f;  // (from the original)
    if (nf_1 == vf_1) {
        r0_4 = r0_4 + r6_1;
    }
    if (nf_1 != vf_1) {
        r0_4 = r6_1 - r3;
    }
    if (nf_1 == vf_1) {
        *gptr<u16>(r0) = u16(r0_4);
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_4;
    }
L_56af24:;
    *gptr<u16>(r0) = u16(r0_4);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_4;
}

}  // namespace d_0056aedc
GUEST_EXPORT(0x0056aedc, d_0056aedc::f_0056aedc);

// f_0056af2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056af2c {

struct __attribute__((packed)) Object_0056af2c_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_0056af2c_0, half_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002f9e1c, u32(u32, u32, u32, u32)> call_002f9e1c;  // (from the original)

u32 f_0056af2c(gptr<Object_0056af2c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r7_1 = 0;
    u32 r6_1 = 0;
    u32 r9_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 vf_1 = 0;
    u32 res_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    r13 = r13 - 0x20;  // (from the original)
    r5_1 = r1;
    r7_1 = u32(s32(s16(arg0->half_0)));
    r6_1 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r9_1 = sxth(r1 - r7_1);
    if (r7_1 == r5_1) {
        goto L_56afd8;
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f9e1c(r9_1, r2, r2, r3);
    r1 = guest::cpu()->r[1];
    r0_2 = sxth(r0_1);
    res_1 = r0_2 - r6_1;
    nf_1 = res_1 >> 0x1f;  // (from the original)
    zf_1 = res_1 == 0;
    vf_1 = ((r0_2 ^ r6_1) & (r0_2 ^ res_1)) >> 0x1f;  // (from the original)
    if (zf_1 || nf_1 != vf_1) {
        r1 = 0u - r6_1;
        res_2 = r1 - r0_2;
        nf_1 = res_2 >> 0x1f;  // (from the original)
        zf_1 = res_2 == 0;
        vf_1 = ((r1 ^ r0_2) & (r1 ^ res_2)) >> 0x1f;  // (from the original)
    }
    if (zf_1 || nf_1 != vf_1) {
        goto L_56af98;
    }
    if (s32(r0_2) > s32(r3)) {
        r0_2 = r3;
        goto L_56af8c;
    }
    r1 = 0u - r3;
    if (s32(r1) > s32(r0_2)) {
        r0_2 = sxth(r1);
    }
L_56af8c:;
    *gptr<u16>(r0) = u16(r0_2 + r7_1);
    goto L_56afd8;
L_56af98:;
    if (r9_1 >> 0x1f == (r9_1 & (r9_1 ^ r9_1)) >> 0x1f) {  // (from the original)
        r0_3 = r7_1 + r6_1;
        r1 = r5_1 - r0_3;
        *gptr<u16>(r0) = u16(r0_3);
        r0_4 = sxth(r1);
        if (r0_4 != 0 && r0_4 >> 0x1f == (r0_4 & (r0_4 ^ r0_4)) >> 0x1f) {  // (from the original)
            goto L_56afd8;
        }
    } else {
        r0_5 = r7_1 - r6_1;
        r1 = r5_1 - r0_5;
        *gptr<u16>(r0) = u16(r0_5);
        r0_6 = sxth(r1);
        if (r0_6 >> 0x1f != (r0_6 & (r0_6 ^ r0_6)) >> 0x1f) {  // (from the original)
            goto L_56afd8;
        }
    }
    *gptr<u16>(r0) = u16(r5_1);
L_56afd8:;
    r0_7 = sxth(r5_1 - u32(*gptr<u16>(r0)));
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_7;
}

}  // namespace d_0056af2c
GUEST_EXPORT(0x0056af2c, d_0056af2c::f_0056af2c);

// f_0056b288: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056b288 {

struct __attribute__((packed)) Object_0056b288_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0056b288_0, word_0, 0x0);  // (from the original)

inline guest::global<u32, 0x0056b35c> global_0056b35c;  // (from the original)

void f_0056b288(gptr<Object_0056b288_0> arg0, float S0, float S1, float S2, float S3) {
    u32 fpsr = guest::cpu()->fpscr;
    float S6 = 0;
    float S5_1 = 0;
    float S4_1 = 0;
    u32 fpsr_1 = 0;
    float S1_1 = 0;
    u32 fpsr_2 = 0;
    float S1_2 = 0;
    u32 fpsr_3 = 0;
    float S1_3 = 0;
    float S0_1 = 0;
    u32 fpsr_4 = 0;
    S5_1 = std::bit_cast<float>(arg0->word_0);
    S6 = std::bit_cast<float>(*global_0056b35c);
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
    arg0->word_0 = u32(std::bit_cast<u32>(S5_1 + S4_1));
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
    arg0->word_0 = u32(std::bit_cast<u32>(S1));
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1, S0);  // (from the original)
    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        goto L_56b33c;
    }
L_56b314:;
    arg0->word_0 = u32(std::bit_cast<u32>(S1));
    goto L_56b344;
L_56b31c:;
    fpsr = fpsr_3 & 0xfffffffu | vfp_cmpf(S4_1, S1_1);  // (from the original)
    if (fpsr >> 0x1e & 1 || fpsr >> 0x1f != (fpsr >> 0x1c & 1)) {  // (from the original)
        goto L_56b344;
    }
    S1 = S5_1 - S3;
    arg0->word_0 = u32(std::bit_cast<u32>(S1));
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
    S1_3 = std::bit_cast<float>(arg0->word_0);
    S0_1 = S0 - S1_3;
    fpsr_4 = fpsr & 0xfffffffu | vfp_cmpf(S0_1, S6);  // (from the original)
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

inline guest::global<u8, 0x0095c4d2> global_0095c4d2;  // (from the original)
inline constexpr guest::Function<0x0020d914, u32(u32, u32, u32, u32)> call_0020d914;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)

u32 f_0056b5a4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 ea_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fae84(r0, r1, r2, r3);
    ea_1 = 0x95c4d0u + 0x18u;  // (from the original)
    r1_1 = *gptr<u32>(ea_1);
    r2_1 = *gptr<u32>(ea_1 + 4);
    ea_2 = r0_1 + 0x62120u;  // (from the original)
    *gptr<u32>(ea_2) = u32(r1_1);
    *gptr<u32>(ea_2 + 4) = u32(r2_1);
    r0_2 = u32(*gptr<u8>(0x95c4d0u + 2u));  // (from the original)
    if ((r0_2 & 1u) != 0) {
        guest::cpu()->r[13] = r13;
        r0_3 = call_002fae84(r0_2, r1_1, r2_1, 0x95c4d0u);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        r0_4 = r0_3 + 0x62120u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0020d914(r0_4, r1_2, r2_2, r3_1);
    }
    r1_3 = u32(*global_0095c4d2) & ~0x10u;  // (from the original)
    *global_0095c4d2 = u8(r1_3);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return 0x95c4d2u;  // (from the original)
}

}  // namespace d_0056b5a4
GUEST_EXPORT(0x0056b5a4, d_0056b5a4::f_0056b5a4);

// f_0056bd04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056bd04 {

inline constexpr guest::Function<0x0056c7c8, u32(u32, u32, u32, u32)> call_0056c7c8;  // (from the original)

u32 f_0056bd04() {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    r1_1 = 0x95c4d0u + 0x20u;  // (from the original)
    r0_1 = 0x95c4d0u + 0x18u;  // (from the original)
    r1_2 = *gptr<u32>(r1_1);
    r2_1 = *gptr<u32>(r1_1 + 4);
    *gptr<u32>(r0_1) = u32(r1_2);
    *gptr<u32>(r0_1 + 4) = u32(r2_1);
    return call_0056c7c8(r0_1, r1_2, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_0056bd04
GUEST_EXPORT(0x0056bd04, d_0056bd04::f_0056bd04);

// f_0056bdec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056bdec {

inline guest::global<u32, 0x0095c518> global_0095c518;  // (from the original)
inline constexpr guest::Function<0x00124130, u32(u32, u32, u32, u32)> call_00124130;  // (from the original)

u32 f_0056bdec(u32 r0_unused, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_00124130(r0_1, r1, r2, guest::cpu()->r[3]);
    r1_1 = *gptr<u32>(r13);
    r2_1 = *gptr<u32>(r13 + 4);
    *global_0095c518 = u32(r1_1);
    *gptr<u32>(0x95c518u + 4) = u32(r2_1);  // (from the original)
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return 0x95c518u;  // (from the original)
}

}  // namespace d_0056bdec
GUEST_EXPORT(0x0056bdec, d_0056bdec::f_0056bdec);

// f_0056be90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056be90 {


u32 f_0056be90(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    u32 r4_1 = 0;
    u32 res_1 = 0;
    u32 zf_1 = 0;
    r2 = 0x8902b6u;  // (from the original)
    r3 = r0;
    r12 = 0u;
    r0 = r12;
    guest::cpu()->r[13] -= 4u;
L_56bea4:;
    r4_1 = u32(*gptr<u8>(r2));
    res_1 = r4_1 - r3;
    zf_1 = res_1 == 0;
    if (!!zf_1 || res_1 >> 0x1f != ((r4_1 ^ r3) & (r4_1 ^ res_1)) >> 0x1f) {  // (from the original)
        if (!zf_1) {
            goto L_56bec8;
        }
        if (s32(u32(*gptr<u8>(r2 + 1u))) < s32(r1)) {
            goto L_56bec8;
        }
    }
    guest::cpu()->r[13] += 4u;
    return r0;
L_56bec8:;
    r0 = r0 + 1u & 0xffu;  // (from the original)
    r2 = r2 + 2u;
    if (r0 < 0xcu) {  // (from the original)
        guest::preempt();
        goto L_56bea4;
    }
    guest::cpu()->r[13] += 4u;
    return r12;
}

}  // namespace d_0056be90
GUEST_EXPORT(0x0056be90, d_0056be90::f_0056be90);

// f_0056c3d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056c3d4 {

inline guest::global<u8, 0x0095c4d2> global_0095c4d2;  // (from the original)

u32 f_0056c3d4() {
    u32 r0_1 = 0;
    r0_1 = (u32(*global_0095c4d2) & 0x10u) >> 4;  // (from the original)
    return r0_1;
}

}  // namespace d_0056c3d4
GUEST_EXPORT(0x0056c3d4, d_0056c3d4::f_0056c3d4);

// f_0056c6d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056c6d8 {

inline guest::global<u8, 0x0095c4d2> global_0095c4d2;  // (from the original)

u32 f_0056c6d8() {
    u32 r1_1 = 0;
    r1_1 = u32(*global_0095c4d2) | 2u;
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
    u32 r0_1 = 0;
    r0_1 = (u32(*global_0095c4d2) & 4u) >> 2;
    return r0_1;
}

}  // namespace d_0056c6f0
GUEST_EXPORT(0x0056c6f0, d_0056c6f0::f_0056c6f0);

// f_0056c76c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056c76c {


u32 f_0056c76c(u32 r0) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r0_2 = 0;
    r0_1 = r0 - 0x7d8u;  // (from the original)
    r1_1 = u32(u64(s64(s32(0x2aaaaaabu)) * s32(r0_1)) >> 0x20);  // (from the original)
    r1_2 = u32(s32(r1_1) >> 1) - u32(s32(r1_1) >> 0x1f);  // (from the original)
    r1_3 = r1_2 - (r1_2 << 2);
    r0_2 = r0_1 + (r1_3 << 2) & 0xffu;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return r0_2;
}

}  // namespace d_0056c76c
GUEST_EXPORT(0x0056c76c, d_0056c76c::f_0056c76c);

// f_0056c7b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056c7b0 {

inline guest::global<u8, 0x0095c4d2> global_0095c4d2;  // (from the original)

u32 f_0056c7b0() {
    u32 r1_1 = 0;
    r1_1 = u32(*global_0095c4d2) | 4u;
    *global_0095c4d2 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return 0x95c4d2u;  // (from the original)
}

}  // namespace d_0056c7b0
GUEST_EXPORT(0x0056c7b0, d_0056c7b0::f_0056c7b0);

// f_0056cf34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056cf34 {

inline guest::global<u8, 0x0095c4d2> global_0095c4d2;  // (from the original)

u32 f_0056cf34() {
    u32 r0_1 = 0;
    r0_1 = (u32(*global_0095c4d2) & 8u) >> 3;
    return r0_1;
}

}  // namespace d_0056cf34
GUEST_EXPORT(0x0056cf34, d_0056cf34::f_0056cf34);

// f_0056cf7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056cf7c {

inline guest::global<u8, 0x0095c4d2> global_0095c4d2;  // (from the original)
inline guest::global<u32, 0x00ad56b0> global_00ad56b0;  // (from the original)
inline constexpr guest::Function<0x0020d914, u32(u32, u32, u32, u32)> call_0020d914;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)

u32 f_0056cf7c() {
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 vf_1 = 0;
    u32 res_2 = 0;
    u32 res_3 = 0;
    u32 nf_2 = 0;
    u32 vf_2 = 0;
    u32 r0_2 = 0;
    u32 res_4 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r1_5 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_6 = 0;
    goto L_56cf7c;
L_56cf7c:;
    guest::cpu()->r[13] -= 8u;
    r2_1 = *global_00ad56b0;
    r0_1 = *gptr<u32>(0xad56b0u + 4u);  // (from the original)
    r1_2 = u32(*global_0095c4d2);
    res_1 = r2_1 - 0x7dcu;  // (from the original)
    nf_1 = res_1 >> 0x1f;  // (from the original)
    zf_1 = res_1 == 0;
    vf_1 = ((r2_1 ^ 0x7dcu) & (r2_1 ^ res_1)) >> 0x1f;  // (from the original)
    if (zf_1 || nf_1 != vf_1) {
        r2_1 = sxtb(r0_1);
        res_2 = r2_1 - 1u;
        nf_1 = res_2 >> 0x1f;  // (from the original)
        zf_1 = res_2 == 0;
        vf_1 = ((r2_1 ^ 1u) & (r2_1 ^ res_2)) >> 0x1f;  // (from the original)
    }
    if (!zf_1 && nf_1 == vf_1) {
        goto L_56cfe0;
    }
    r2_1 = u32(s32(r0_1 << 0x10) >> 0x18);  // (from the original)
    res_3 = r2_1 - 1u;
    nf_2 = res_3 >> 0x1f;  // (from the original)
    vf_2 = ((r2_1 ^ 1u) & (r2_1 ^ res_3)) >> 0x1f;  // (from the original)
    if (res_3 == 0 || nf_2 != vf_2) {
        r0_2 = u32(s32(r0_1) >> 0x18);  // (from the original)
        res_4 = r0_2 - 6u;
        nf_2 = res_4 >> 0x1f;  // (from the original)
        vf_2 = ((r0_2 ^ 6u) & (r0_2 ^ res_4)) >> 0x1f;  // (from the original)
    }
    if (nf_2 == vf_2) {
        goto L_56cfe0;
    }
    r1_3 = r1_2 | 1u;
    *global_0095c4d2 = u8(r1_3);
    r0_3 = call_002fae84(0x95c4d2u, r1_3, r2_1, 0x7dcu);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 8u;
    r0_4 = r0_3 + 0x62120u;  // (from the original)
    return call_0020d914(r0_4, r1_4, r2_2, r3_1);
L_56cfe0:;
    r1_5 = r1_2 & ~1u;
    *global_0095c4d2 = u8(r1_5);
    r0_5 = call_002fae84(0x95c4d2u, r1_5, r2_1, 0x7dcu);  // (from the original)
    guest::cpu()->r[13] += 8u;
    r0_6 = r0_5 + 0x62120u;  // (from the original)
    r1_6 = u32(*gptr<u8>(r0_6 + 8u)) & ~1u;
    *gptr<u8>(r0_6 + 8u) = u8(r1_6);
    guest::cpu()->r[1] = r1_6;
    return r0_6;
}

}  // namespace d_0056cf7c
GUEST_EXPORT(0x0056cf7c, d_0056cf7c::f_0056cf7c);

// f_0056d828: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056d828 {

inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x0056d874, u32(u32, u32, u32, u32)> call_0056d874;  // (from the original)

u32 f_0056d828(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r1_3 = 0;
    u32 ea_3 = 0;
    u32 r4_2 = 0;
    u32 r5_2 = 0;
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    *gptr<u32>(ea_1 + 4) = u32(r4);
    *gptr<u32>(ea_1 + 8) = u32(r5);
    *gptr<u32>(ea_1 + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00301e20(r1, r1, guest::cpu()->r[2], r3);
    r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        r1_1 = r13;
        *gptr<u16>(r13) = u16(u32(*gptr<u16>(r1 + 0x2cu)));  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_2 = call_0056d874(r0, r1_1, guest::cpu()->r[2], r3_1);
        r1_2 = guest::cpu()->r[1];
        ea_2 = r13;
        r13 = r13 + 0x10;  // (from the original)
        r4_1 = *gptr<u32>(ea_2 + 4);
        r5_1 = *gptr<u32>(ea_2 + 8);
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_1;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    r1_3 = *gptr<u32>(*gptr<u32>(r0) + 0x1cu);  // (from the original)
    r13 = r13 + 4u;
    ea_3 = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4_2 = *gptr<u32>(ea_3);
    r5_2 = *gptr<u32>(ea_3 + 4);
    r14 = *gptr<u32>(ea_3 + 8);
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    return guest::call_address<u32>(r1_3, r0, r1_3, guest::cpu()->r[2], r3_1);
}

}  // namespace d_0056d828
GUEST_EXPORT(0x0056d828, d_0056d828::f_0056d828);

// f_0056d9cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056d9cc {

inline guest::global<u32, 0x0095debc> global_0095debc;  // (from the original)
inline constexpr guest::Function<0x005ca3b0, u32(u32, u32, u32, u32)> call_005ca3b0;  // (from the original)
inline constexpr guest::Function<0x0075c0ec, u32(u32, u32, u32, u32)> call_0075c0ec;  // (from the original)

u32 f_0056d9cc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_005ca3b0(r1, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    if (r0_1 + 1u != 0) {
        r0_2 = *global_0095debc;
        guest::cpu()->r[13] += 8u;
        return call_0075c0ec(r0_2, r0, 0x56da14u, r0_1);  // (from the original)
    }
    r1_1 = *gptr<u32>(*gptr<u32>(r0) + 0x1cu);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return guest::call_address<u32>(r1_1, r0, r1_1, r2_1, r0_1);
}

}  // namespace d_0056d9cc
GUEST_EXPORT(0x0056d9cc, d_0056d9cc::f_0056d9cc);

// f_0056daa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056daa8 {

inline guest::global<u32, 0x0095debc> global_0095debc;  // (from the original)
inline constexpr guest::Function<0x0075c0ec, u32(u32, u32, u32, u32)> call_0075c0ec;  // (from the original)

u32 f_0056daa8(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    r0_1 = *global_0095debc;
    return call_0075c0ec(r0_1, r0, 0x56dac0u, r1);  // (from the original)
}

}  // namespace d_0056daa8
GUEST_EXPORT(0x0056daa8, d_0056daa8::f_0056daa8);

// f_0056e5c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056e5c4 {

struct __attribute__((packed)) Object_0056e5c4_0 {
    u8 unknown_0[0x5ec];  // (not used here)
    u8 byte_5ec;
    u8 unknown_5ed[0x3];  // (not used here)
    u32 word_5f0;
};
GUEST_OFFSET(Object_0056e5c4_0, byte_5ec, 0x5ec);  // (from the original)
GUEST_OFFSET(Object_0056e5c4_0, word_5f0, 0x5f0);  // (from the original)

inline guest::global<u32, 0x0094edd8> global_0094edd8;  // (from the original)
inline guest::global<u32, 0x00952a18> global_00952a18;  // (from the original)
inline constexpr guest::Function<0x0068eaf0, u32(u32, u32, u32, u32)> call_0068eaf0;  // (from the original)
inline constexpr guest::Function<0x0068ec3c, u32(u32, u32, u32, u32)> call_0068ec3c;  // (from the original)
inline constexpr guest::Function<0x00748534, u32(u32, u32, u32, u32)> call_00748534;  // (from the original)

u32 f_0056e5c4(gptr<Object_0056e5c4_0> arg0, u32 r1, float S0) {
    u32 r0 = arg0.addr();
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    float S0_1 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    float S0_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 res_1 = 0;
    float S0_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5_1 = r1;
    if (u32(arg0->byte_5ec) == 2u) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return 0u;
    }
    if (*global_0094edd8 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return 0u;
    }
    r0_1 = arg0->word_5f0;
    if (r0_1 == 0) {
        goto L_56e638;
    }
    guest::cpu()->s[0] = S0;
    r0_2 = call_00748534(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    if (r0_2 == 0) {
        goto L_56e638;
    }
    if (u32(*gptr<u8>(r0 + 0x7fdu)) == 1u) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return 0u;
    }
    r1_1 = u32(s32(s16(*gptr<u16>(r0 + 0x2eu))));  // (from the original)
    guest::cpu()->s[0] = S0;
    r0_3 = call_0068ec3c(r5_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    S0_1 = std::bit_cast<float>(*global_00952a18);
    guest::cpu()->s[0] = S0_1;
    r0_4 = call_0068eaf0(r5_1, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    S0_2 = guest::cpu()->s[0];
    r0_5 = r0_4 | r0_3;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->s[0] = S0_2;
    return r0_5;
L_56e638:;
    r0_6 = *gptr<u32>(r0 + 0x5f0u);  // (from the original)
    if (r0_6 != 0) {
        res_1 = u32(*gptr<u8>(r0_6 + 0x1cu)) << 0x1d >> 0x1f;  // (from the original)
        if (res_1 == 0) {
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[0] = S0;
            return 0u;
        }
    }
    S0_3 = std::bit_cast<float>(*global_00952a18);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->s[0] = S0_3;
    return call_0068eaf0(r5_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
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


u32 f_0056e6a8(gptr<Object_0056e6a8_0> arg0) {
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    r0_1 = arg0->word_300;
    if (r0_1 == 0) {
        return r0_1;
    }
    r2_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x3cu);  // (from the original)
    return guest::call_address<u32>(r2_1, r0_1, guest::cpu()->r[1], r2_1, guest::cpu()->r[3]);
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

inline constexpr guest::Function<0x006ef0a0, u32(u32, u32, u32, u32)> call_006ef0a0;  // (from the original)
inline constexpr guest::Function<0x006ef108, u32(u32, u32, u32, u32)> call_006ef108;  // (from the original)

u32 f_0056f1b8(gptr<Object_0056f1b8_0> arg0, u32 r1, u32 r2_unused, u32 r3, float S0, float S1, float S2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 res_1 = 0;
    u32 zf_1 = 0;
    u32 r3_1 = 0;
    u32 zf_2 = 0;
    u32 res_2 = 0;
    u32 res_3 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r2_2 = 0;
    float S1_1 = 0;
    float S0_1 = 0;
    float S2_1 = 0;
    u32 r0_6 = 0;
    u32 ea_1 = 0;
    u32 r3_2 = 0;
    r2_1 = r0 + 0x700u;  // (from the original)
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r0_1 = u32(arg0->half_764);
    res_1 = r0_1 << 0x1b >> 0x1f;  // (from the original)
    if (res_1 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0_1;
    }
    zf_1 = r0_1 << 0x1c >> 0x1f == 0;  // (from the original)
    if (!zf_1) {
        zf_1 = u32(arg0->byte_7fd) == 1u;
    }
    if (zf_1) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0_1;
    }
    r3_1 = u32(arg0->byte_5f8);
    zf_2 = r3_1 == 3u;
    if (!zf_2) {
        zf_2 = r3_1 == 4u;
    }
    if (!zf_2) {
        zf_2 = r3_1 == 5u;
    }
    if (zf_2) {
        goto L_56f214;
    }
    res_2 = r0_1 << 0x12 >> 0x1f;  // (from the original)
    if (res_2 != 0) {
        goto L_56f214;
    }
    res_3 = r0_1 << 0x11 >> 0x1f;  // (from the original)
    if (res_3 == 0) {
        goto L_56f28c;
    }
L_56f214:;
    r0_2 = r0_1 & ~0x4000u;  // (from the original)
    *gptr<u16>(r2_1 + 0x64u) = u16(r0_2);  // (from the original)
    r12 = *gptr<u32>(r4 + 0x5c4u);  // (from the original)
    r3 = 1u;
    if (r12 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0_2;
    }
    r0_3 = *gptr<u32>(r4 + 0x5f0u);  // (from the original)
    if (r0_3 == 0) {
        goto L_56f264;
    }
    r0_4 = u32(*gptr<u8>(r0_3 + 0x1bu)) << 0x1c >> 0x1e;  // (from the original)
    if (r0_4 >= 4u) {
        goto L_56f2a0;
    }
    if (r0_4 == 0) {
        goto L_56f2a0;
    }
    if (r0_4 == 1u) {
        goto L_56f264;
    }
    if (r0_4 == 2u) {
        goto L_56f268;
    }
L_56f264:;
    r3 = 0u;
L_56f268:;
    *gptr<u32>(r13) = u32(r3);
    r0_5 = r4 + 0x400u;  // (from the original)
    r2_2 = u32(s32(s16(*gptr<u16>(r4 + 0x2eu))));  // (from the original)
    S1_1 = std::bit_cast<float>(*gptr<u32>(r0_5 + 0x1c0u));  // (from the original)
    S0_1 = std::bit_cast<float>(*gptr<u32>(r0_5 + 0x1b8u));  // (from the original)
    S2_1 = std::bit_cast<float>(*gptr<u32>(r1 + 4u));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    call_006ef108(r12, r1, r2_2, 0u);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
L_56f28c:;
    r0_6 = *gptr<u32>(r4 + 0x5c4u);  // (from the original)
    if (r0_6 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0_6;
    }
    ea_1 = r13;
    r13 = r13 + 0x10;  // (from the original)
    r3_2 = *gptr<u32>(ea_1);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    return call_006ef0a0(r0_6, r1, r2_1, r3_2);
L_56f2a0:;
    r3 = 0x1bu;  // (from the original)
    guest::preempt();
    goto L_56f268;
}

}  // namespace d_0056f1b8
GUEST_EXPORT(0x0056f1b8, d_0056f1b8::f_0056f1b8);

// f_0056f34c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056f34c {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x004ea048, u32(u32, u32, u32, u32)> call_004ea048;  // (from the original)
inline constexpr guest::Function<0x007455cc, u32(u32, u32, u32, u32)> call_007455cc;  // (from the original)
inline constexpr guest::Function<0x0075127c, u32(u32, u32, u32, u32)> call_0075127c;  // (from the original)

u32 f_0056f34c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_8 = 0;
    u32 r2_5 = 0;
    u32 r1_3 = 0;
    u32 r0_9 = 0;
    u32 ea_1 = 0;
    u32 r8_1 = 0;
    u32 r0_10 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f74c8(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f74e0(0x20u, r0_1, r2_1, r3_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        goto L_56f3d0;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f74e0(0x200u, r0_1, r2_2, r3_2);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        goto L_56f3d0;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f74e0(0x40000000u, r0_1, r2_2, r3_2);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        goto L_56f3d0;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f74e0(0x800000u, r0_1, r2_2, r3_2);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        goto L_56f3d0;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f74e0(0x10000000u, r0_1, r2_2, r3_2);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_56f3f0;
    }
L_56f3d0:;
    guest::cpu()->r[13] = r13;
    r0_3 = call_004ea048(r0_2, r1_1, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_4 = call_007455cc(r0_3, r0, r2_3, r3_3);
    r1_2 = guest::cpu()->r[1];
    r0_5 = r0_4 << 0x17 >> 0x17;  // (from the original)
    goto L_56f474;
L_56f3f0:;
    r0_6 = u32(*gptr<u8>(r0 + 0x5ecu));  // (from the original)
    if (r0_6 == 2u) {
        goto L_56f480;
    }
    guest::cpu()->r[13] = r13;
    r0_7 = call_002f74c8(r0_6, r1_1, r2_2, r3_2);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_8 = call_002f74e0(8u, r0_7, r2_4, r3_4);
    r1_2 = guest::cpu()->r[1];
    if (r0_8 == 0) {
        goto L_56f478;
    }
    r2_5 = r13 + 8u;
    r1_3 = r13 + 4u;
    *gptr<u32>(r13) = u32(r2);
    guest::cpu()->r[13] = r13;
    r0_9 = call_0075127c(r0, r1_3, r2_5, r1);
    r1_2 = guest::cpu()->r[1];
    if (r0_9 == 0) {
        r0_8 = r0_1;
        goto L_56f478;
    }
    ea_1 = r13 + 4u;
    r8_1 = u32(*gptr<u8>(r0 + 0x7b4u));  // (from the original)
    if (r8_1 >= 2u) {
        r8_1 = 0u;
    }
    r1_2 = (*gptr<u32>(ea_1) & 0xfu | 0xf0u & *gptr<u32>(ea_1 + 4) << 4) & ~0x100u;  // (from the original)
    r0_5 = (0x100u & r8_1 << 8 | r1_2) & ~0x10000u & ~0xfe00u;  // (from the original)
L_56f474:;
    r0_8 = r0_5 | r0_1 << 9;
L_56f478:;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_8;
L_56f480:;
    r0_10 = 0x31u | r0_1 << 9 | 0x20000u;  // (from the original)
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_10;
}

}  // namespace d_0056f34c
GUEST_EXPORT(0x0056f34c, d_0056f34c::f_0056f34c);

// f_0056f8b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056f8b4 {

inline guest::global<u16, 0x008870a0> global_008870a0;  // (from the original)
inline constexpr guest::Function<0x0023b900, u32(u32, u32, u32, u32)> call_0023b900;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x005d97a0, u32(u32, u32, u32, u32)> call_005d97a0;  // (from the original)
inline constexpr guest::Function<0x00692ad4, u32(u32, u32, u32, u32)> call_00692ad4;  // (from the original)
inline constexpr guest::Function<0x007559ac, u32(u32, u32, u32, u32)> call_007559ac;  // (from the original)
inline constexpr guest::Function<0x00755a98, u32(u32, u32, u32, u32)> call_00755a98;  // (from the original)

u32 f_0056f8b4(u32 r0, u32 r1, u32 r2) {
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
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
    u32 r1_4 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 res_1 = 0;
    u32 r1_5 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r2_9 = 0;
    u32 r0_15 = 0;
    u32 r2_10 = 0;
    u32 r1_6 = 0;
    u32 r0_16 = 0;
    u32 r1_7 = 0;
    u32 r2_11 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r1_8 = 0;
    u32 r0_19 = 0;
    u32 r1_9 = 0;
    u32 r0_20 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r5_1 = r1;
    r0_1 = r0 + 0xb0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_005d97a0(r0_1, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r6 = r0_2;
    if (r0_2 != 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_007559ac(r2, r1, r2_1, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    if (r0_3 != 0x60u) {  // (from the original)
        goto L_56f90c;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_00755a98(r2, r1, r2_2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    if (r0_4 == 0) {
        goto L_56f918;
    }
    if (r0_4 == 1u) {
        goto L_56f9d8;
    }
    r6 = 1u;
    *gptr<u32>(r5_1) = u32(0u);
L_56f90c:;
    r0_2 = r6;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_2;
L_56f918:;
    r0_5 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_5, 0x95bfdcu, r2_3, guest::cpu()->r[3]);  // (from the original)
    r2_4 = guest::cpu()->r[2];
    r0_6 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_6, 0x95bfdcu, r2_4, guest::cpu()->r[3]);  // (from the original)
    r2_5 = guest::cpu()->r[2];
    r1_1 = r13 + 8u;
    r0_7 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_00692ad4(r0_7, r1_1, r2_5, guest::cpu()->r[3]);
    r2_6 = guest::cpu()->r[2];
    r1_2 = r13 + 8u;
    r0_8 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_8, r1_2, r2_6, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r0_9 = r13;
    guest::cpu()->r[13] = r13;
    r0_10 = call_002fcaf4(r0_9, r1_3, r2_7, guest::cpu()->r[3]);
    r2_8 = guest::cpu()->r[2];
    if (r0_10 != 0) {
        r1_4 = r13 + 4u;
        r0_11 = r13;
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r0_11, r1_4, r2_8, guest::cpu()->r[3]);
    }
    r1 = u32(*global_008870a0);
    if (u32(*gptr<u16>(r0 + 0xcu)) == r1) {  // (from the original)
        r0_12 = u32(s32(s8(*gptr<u8>(0x7a3u + r0))));  // (from the original)
    } else {
        r0_12 = 0u;
    }
    res_1 = r0_12 ^ 1u;
    *gptr<u32>(r5_1) = u32(res_1);
    if (res_1 == 0) {
        r1_5 = r13;
        r0_13 = r0 + 0xb0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0023b900(r0_13, r1_5, 0u, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    r6 = 1u;
    guest::preempt();
    goto L_56f90c;
L_56f9d8:;
    r0_14 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_14, 0x95bfdcu, r2_3, guest::cpu()->r[3]);  // (from the original)
    r2_9 = guest::cpu()->r[2];
    r0_15 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_15, 0x95bfdcu, r2_9, guest::cpu()->r[3]);  // (from the original)
    r2_10 = guest::cpu()->r[2];
    r1_6 = r13;
    r0_16 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_00692ad4(r0_16, r1_6, r2_10, guest::cpu()->r[3]);
    r1_7 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r0_17 = r13;
    guest::cpu()->r[13] = r13;
    r0_18 = call_002fcaf4(r0_17, r1_7, r2_11, guest::cpu()->r[3]);
    *gptr<u32>(r5_1) = u32(r0_18);
    r1_8 = r13 + 4u;
    r0_19 = r0 + 0xb0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0023b900(r0_19, r1_8, 0u, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (*gptr<u32>(r5_1) == 0) {
        r1_9 = r13;
        r0_20 = r0 + 0xb0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0023b900(r0_20, r1_9, 1u, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    r6 = 1u;
    guest::preempt();
    goto L_56f90c;
}

}  // namespace d_0056f8b4
GUEST_EXPORT(0x0056f8b4, d_0056f8b4::f_0056f8b4);

// f_0056fd94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056fd94 {

struct __attribute__((packed)) Object_0056fd94_0 {
    u8 unknown_0[0x7b4];  // (not used here)
    u8 byte_7b4;
};
GUEST_OFFSET(Object_0056fd94_0, byte_7b4, 0x7b4);  // (from the original)

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x004e0cb0, u32(u32, u32, u32, u32)> call_004e0cb0;  // (from the original)
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> call_004e9a28;  // (from the original)
inline constexpr guest::Function<0x004ea048, u32(u32, u32, u32, u32)> call_004ea048;  // (from the original)
inline constexpr guest::Function<0x007455cc, u32(u32, u32, u32, u32)> call_007455cc;  // (from the original)

u32 f_0056fd94(gptr<Object_0056fd94_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
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
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r2_7 = 0;
    u32 r3_6 = 0;
    u32 r0_12 = 0;
    r6 = r0;
    r0_1 = u32(arg0->byte_7b4);
    r13 = r13 - 0x20u;  // (from the original)
    if (r0_1 >= 2u) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    if (r0_1 != 1u) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r4_1 = r6 + 0x5e4u;  // (from the original)
    r0_2 = r13;
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fc934(r0_2, r4_1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u8>(r0_3 + 4u) = u8(u32(*gptr<u8>(r4_1 + 4u)));
    *gptr<u8>(r0_3 + 5u) = u8(u32(*gptr<u8>(r4_1 + 5u)));
    *gptr<u8>(r0_3 + 6u) = u8(u32(*gptr<u8>(r4_1 + 6u)));
    *gptr<u8>(r0_3 + 7u) = u8(u32(*gptr<u8>(r4_1 + 7u)));
    r1_1 = u32(*gptr<u8>(r4_1 + 8u));
    *gptr<u8>(r0_3 + 8u) = u8(r1_1);
    guest::cpu()->r[13] = r13;
    r0_4 = call_004e0cb0(r0_3, r1_1, r2_1, r3_1);
    r2_2 = u32(*gptr<u8>(r13 + 5u));
    r1_2 = u32(*gptr<u8>(r13 + 4u));
    guest::cpu()->r[13] = r13;
    r0_5 = call_004e9a28(r0_4, r1_2, r2_2, 0u);
    r1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r4 = r0_5;
    if (r0_5 == 0) {
        goto L_56fed4;
    }
    r0_6 = u32(*gptr<u8>(r4 + 0x7b4u));  // (from the original)
    if (r0_6 < 2u) {
        if (r0_6 != 0) {
            goto L_56fed4;
        }
    }
    guest::cpu()->r[13] = r13;
    r0_7 = call_004ea048(r0_6, r1, r2_3, r3_2);
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_8 = call_007455cc(r0_7, r4, r2_4, r3_3);
    r2_5 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r1 = u32(s32(s16(*gptr<u16>(0x60cu + r6))));  // (from the original)
    if (r0_8 == r1) {
        r5 = r4 + 0x61cu;  // (from the original)
    } else {
        goto L_56fed4;
    }
    guest::cpu()->r[13] = r13;
    r0_9 = call_004ea048(r0_8, r1, r2_5, r3_4);
    r2_6 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_007455cc(r0_9, r6, r2_6, r3_5);
    r3 = guest::cpu()->r[3];
    r2 = r5 + 0x10u;  // (from the original)
    r1 = r5;
    if (r5 >= r2) {
        goto L_56fe84;
    }
    do {
L_56fe6c:;
        r3 = *gptr<u32>(r1);
        if (r3 == r0) {
            goto L_56fed4;
        }
        r1 = r1 + 4u;
        guest::preempt();
    } while (r2 > r1);
L_56fe84:;
    cf_1 = *gptr<u32>(r5 + 0x10u) >= 4u;  // (from the original)
    if (!cf_1) {
        r4 = r5;
        cf_1 = r5 >= r2;
    }
    if (cf_1) {
        goto L_56fed4;
    }
    do {
L_56fe98:;
        r0_10 = *gptr<u32>(r4);
        if (!(r0_10 >> 0x1f == (r0_10 & (r0_10 ^ r0_10)) >> 0x1f)) {  // (from the original)
            guest::cpu()->r[13] = r13;
            r0_11 = call_004ea048(r0_10, r1, r2, r3);
            r2_7 = guest::cpu()->r[2];
            r3_6 = guest::cpu()->r[3];
            guest::cpu()->r[13] = r13;
            r0_12 = call_007455cc(r0_11, r6, r2_7, r3_6);
            r1 = guest::cpu()->r[1];
            *gptr<u32>(r4) = u32(r0_12);
            *gptr<u32>(r5 + 0x10u) = u32(*gptr<u32>(r5 + 0x10u) + 1u);  // (from the original)
            goto L_56fed4;
        }
        r4 = r4 + 4u;
        guest::preempt();
    } while (r4 < r2);
L_56fed4:;
    r0_1 = r13;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_0056fd94
GUEST_EXPORT(0x0056fd94, d_0056fd94::f_0056fd94);
