// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_00186d7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00186d7c {


void f_00186d7c(float S0, float S1, float S2, float S3) {
    float S0_1 = 0;
    float S2_1 = 0;
    float S1_1 = 0;
    float S0_2 = 0;
    S0_1 = fabsf(S0 - S2);
    S2_1 = fabsf(S1 - S3);
    S1_1 = S0_1 * S0_1 + S2_1 * S2_1;
    S0_2 = sqrtf(S1_1);
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    return;
}

}  // namespace d_00186d7c
GUEST_EXPORT(0x00186d7c, d_00186d7c::f_00186d7c);

// f_00188850: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00188850 {


u32 f_00188850(u32 r0, u32 r1) {
    u32 sco = 0;
    u32 r12_1 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 cf_1 = 0;
    u32 vf_1 = 0;
    u32 r4_1 = 0;
    u32 res_2 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 b_1 = 0;
    u32 r1_2 = 0;
    u32 b_2 = 0;
    guest::cpu()->r[13] -= 4u;
    if (r0 >> 0x1f != (r0 & (r0 ^ r0)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[13] += 4u;
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r12_1 = *gptr<u32>(0xae56d0u + 0x54u);  // (from the original)
    res_1 = r12_1 - r0;
    nf_1 = res_1 >> 0x1f;  // (from the original)
    cf_1 = r12_1 >= r0;
    vf_1 = ((r12_1 ^ r0) & (r12_1 ^ res_1)) >> 0x1f;  // (from the original)
    if (nf_1 == vf_1) {
        nf_1 = r1 >> 0x1f;  // (from the original)
        cf_1 = r1 >= 0u;
        vf_1 = 0u;
    }
    if (nf_1 == vf_1) {
        r4_1 = *gptr<u32>(0xae56d0u + 0x58u);  // (from the original)
        res_2 = r4_1 - r1;
        nf_1 = res_2 >> 0x1f;  // (from the original)
        cf_1 = r4_1 >= r1;
        vf_1 = ((r4_1 ^ r1) & (r4_1 ^ res_2)) >> 0x1f;  // (from the original)
    }
    if (nf_1 != vf_1) {
        guest::cpu()->r[13] += 4u;
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r0_1 = r1 * r12_1 + r0;
    r1_1 = *gptr<u32>(0xae56d0u + 0x5cu);  // (from the original)
    b_1 = r0_1 >> 5;
    r1_2 = *gptr<u32>(r1_1 + (b_1 << 2));
    sco = cf_1;
    b_2 = lsl_rc(1u, r0_1 & 0x1fu & 0xff, &sco);  // (from the original)
    if ((r1_2 & b_2) != 0) {
        guest::cpu()->r[13] += 4u;
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_00188850
GUEST_EXPORT(0x00188850, d_00188850::f_00188850);

// f_001888ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001888ac {


u32 f_001888ac(u32 r0, u32 r1) {
    u32 sco = 0;
    u32 r3_1 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 cf_1 = 0;
    u32 vf_1 = 0;
    u32 r12_1 = 0;
    u32 res_2 = 0;
    u32 r0_1 = 0;
    u32 b_1 = 0;
    u32 b_2 = 0;
    if (r0 >> 0x1f != (r0 & (r0 ^ r0)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    r3_1 = *gptr<u32>(0xae56d0u + 0x54u);  // (from the original)
    res_1 = r3_1 - r0;
    nf_1 = res_1 >> 0x1f;  // (from the original)
    cf_1 = r3_1 >= r0;
    vf_1 = ((r3_1 ^ r0) & (r3_1 ^ res_1)) >> 0x1f;  // (from the original)
    if (nf_1 == vf_1) {
        nf_1 = r1 >> 0x1f;  // (from the original)
        cf_1 = r1 >= 0u;
        vf_1 = 0u;
    }
    if (nf_1 == vf_1) {
        r12_1 = *gptr<u32>(0xae56d0u + 0x58u);  // (from the original)
        res_2 = r12_1 - r1;
        nf_1 = res_2 >> 0x1f;  // (from the original)
        cf_1 = r12_1 >= r1;
        vf_1 = ((r12_1 ^ r1) & (r12_1 ^ res_2)) >> 0x1f;  // (from the original)
    }
    if (nf_1 != vf_1) {
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    r0_1 = r1 * r3_1 + r0;
    b_1 = r0_1 >> 5;
    sco = cf_1;
    b_2 = lsl_rc(1u, r0_1 & 0x1fu & 0xff, &sco);  // (from the original)
    if ((*gptr<u32>(*gptr<u32>(0xae56d0u + 0x5cu) + (b_1 << 2)) & b_2) != 0) {  // (from the original)
        guest::cpu()->r[1] = 1u;
        return 0u;
    }
    guest::cpu()->r[1] = 1u;
    return 1u;
}

}  // namespace d_001888ac
GUEST_EXPORT(0x001888ac, d_001888ac::f_001888ac);

// f_001889b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001889b8 {

inline constexpr guest::Function<0x001277dc, u32(u32, u32, u32, u32)> call_001277dc;  // (from the original)
inline constexpr guest::Function<0x001279b4, u32(u32, u32, u32, u32)> call_001279b4;  // (from the original)
inline constexpr guest::Function<0x00172398, u32(u32, u32, u32, u32)> call_00172398;  // (from the original)

u32 f_001889b8(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3, float S4) {
    u32 r13 = guest::cpu()->r[13];
    u32 zf_1 = 0;
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r7_1 = 0;
    u32 r9_1 = 0;
    u32 r1_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S4_1 = 0;
    u32 r0_4 = 0;
    u32 r2_1 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    float S3_2 = 0;
    float S4_2 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    float S0_4 = 0;
    float S1_4 = 0;
    r13 = r13 - 0x68u;  // (from the original)
    zf_1 = r0 == 0;
    r4_1 = r0;
    r0_1 = r13 + 0x1cu;  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(std::bit_cast<u32>(S2));  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u32>(r13 + 0x24u) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u32>(r0_1) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r0_1 + 4) = u32(std::bit_cast<u32>(S2));
    r0_2 = r13 + 0x2cu;  // (from the original)
    *gptr<u32>(r13 + 0x28u) = u32(std::bit_cast<u32>(S1));  // (from the original)
    *gptr<u32>(r13 + 0x34u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0_2) = u32(std::bit_cast<u32>(S3));
    *gptr<u32>(r0_2 + 4) = u32(std::bit_cast<u32>(S4));
    r0_3 = r13 + 0x38u;  // (from the original)
    *gptr<u32>(r0_3) = u32(std::bit_cast<u32>(S3));
    *gptr<u32>(r0_3 + 4) = u32(std::bit_cast<u32>(S4));
    if (zf_1) {
        *gptr<u32>(r13 + 0x40u) = u32(5u);  // (from the original)
        r7_1 = r13 + 0x10u;  // (from the original)
        if (r3 == 0) {
            r9_1 = 0u;
        } else {
            r9_1 = 0x9751acu + 0x9cu;  // (from the original)
        }
        r1_1 = r13;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        call_001277dc(0x208u, r1_1, r2, r3);  // (from the original)
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
        S2_1 = guest::cpu()->s[2];
        S3_1 = guest::cpu()->s[3];
        S4_1 = guest::cpu()->s[4];
        r0_4 = *gptr<u32>(r13);
        *gptr<u32>(r13) = u32(0x9751acu);  // (from the original)
        *gptr<u32>(r13 + 4) = u32(r7_1);
        *gptr<u32>(r13 + 8) = u32(0u);
        *gptr<u32>(r13 + 0xc) = u32(r9_1);  // (from the original)
        r2_1 = *gptr<u32>(r13 + 0x40u);  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        guest::cpu()->s[2] = S2_1;
        guest::cpu()->s[3] = S3_1;
        guest::cpu()->s[4] = S4_1;
        r0_5 = call_00172398(r0_4, r1, r2_1, 4u);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        S0_2 = guest::cpu()->s[0];
        S1_2 = guest::cpu()->s[1];
        S2_2 = guest::cpu()->s[2];
        S3_2 = guest::cpu()->s[3];
        S4_2 = guest::cpu()->s[4];
        r0_6 = r0_5 - r0_4 & ~3u;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        guest::cpu()->s[2] = S2_2;
        guest::cpu()->s[3] = S3_2;
        guest::cpu()->s[4] = S4_2;
        call_001279b4(r0_6, r1_2, r2_2, r3_1);
        r1_3 = guest::cpu()->r[1];
        S0_3 = guest::cpu()->s[0];
        S1_3 = guest::cpu()->s[1];
    } else {
        if (r3 == 0) {
            r0_7 = 0u;
        } else {
            r0_7 = 0x975248u;  // (from the original)
        }
        *gptr<u32>(r13 + 4u) = u32(r13 + 0x10u);  // (from the original)
        *gptr<u32>(r13 + 8u) = u32(0u);
        *gptr<u32>(r13 + 0xcu) = u32(r0_7);  // (from the original)
        *gptr<u32>(r13) = u32(0x9751acu);  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        r0_8 = call_00172398(r4_1, r1, 5u, 4u);
        r1_3 = guest::cpu()->r[1];
        S0_4 = guest::cpu()->s[0];
        S1_4 = guest::cpu()->s[1];
        r4_1 = r0_8;
    }
    r13 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r4_1;
}

}  // namespace d_001889b8
GUEST_EXPORT(0x001889b8, d_001889b8::f_001889b8);

// f_00189398: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00189398 {


u32 f_00189398(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 r5_1 = 0;
    u32 r12_1 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 vf_1 = 0;
    u32 r6_1 = 0;
    u32 r12_2 = 0;
    u32 r5_2 = 0;
    u32 r7_1 = 0;
    u32 ea_2 = 0;
    u32 r5_3 = 0;
    u32 r7_2 = 0;
    u32 r12_3 = 0;
    u32 ea_3 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 ea_4 = 0;
    u32 r4_1 = 0;
    u32 r5_4 = 0;
    u32 r6_2 = 0;
    u32 r7_3 = 0;
    r1_1 = r0 - 1u;
    r2 = 0u;
    if (r1_1 >= 0x20u) {  // (from the original)
        r0_1 = ~0u;
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r7);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = 0xffu;  // (from the original)
    r1 = 0xae5750u;  // (from the original)
    r5_1 = *gptr<u32>(r1 + 8u);
    r3 = *gptr<u32>(r1 + 0xcu);  // (from the original)
    if (r5_1 == 0 || r5_1 >> 0x1f != (r5_1 & (r5_1 ^ r5_1)) >> 0x1f) {  // (from the original)
        goto L_189420;
    }
    r12_1 = 8u - r5_1;
    res_1 = r0 - r12_1;
    nf_1 = res_1 >> 0x1f;  // (from the original)
    vf_1 = ((r0 ^ r12_1) & (r0 ^ res_1)) >> 0x1f;  // (from the original)
    if (nf_1 != vf_1) {
        r2 = r0;
    }
    if (nf_1 == vf_1) {
        r2 = r12_1;
    }
    r6_1 = *gptr<u32>(r1 + 4u);
    r12_2 = r12_1 - r2;
    r5_2 = r5_1 + r2;
    r0 = r0 - r2;
    r7_1 = u32(*gptr<u8>(r3 + r6_1));
    *gptr<u32>(r1 + 8u) = u32(r5_2);
    r2 = lsr_r(lsl_r(lsr_r(r4, 8u - r2 & 0xff), r12_2 & 0xff) & r7_1, r12_2 & 0xff);  // (from the original)
    if (r5_2 != 8u) {
        goto L_189420;
    }
    ea_2 = r1 + 4u;
    *gptr<u32>(ea_2) = u32(r6_1 + 1u);
    *gptr<u32>(ea_2 + 4) = u32(0u);
L_189420:;
    if (r0 == 0 || r0 >> 0x1f != (r0 & (r0 ^ r0)) >> 0x1f) {  // (from the original)
        goto L_189494;
    }
    r12 = 1u;
    r6 = r12 + u32(s32(r0 + (u32(s32(r0) >> 0x1f) >> 0x1d)) >> 3);  // (from the original)
    for (;;) {
L_189458:;
        if (!(s32(r12) < s32(r6))) {
            break;
        }
L_18943c:;
        r5_3 = *gptr<u32>(r1 + 4u);
        r0 = r0 - 8u;
        r12 = r12 + 1u;
        r7_2 = u32(*gptr<u8>(r3 + r5_3));
        *gptr<u32>(r1 + 4u) = u32(r5_3 + 1u);
        r2 = r7_2 | r2 << 8;
        guest::preempt();
    }
    if (r0 == 0 || r0 >> 0x1f != (r0 & (r0 ^ r0)) >> 0x1f) {  // (from the original)
        goto L_189494;
    }
    r12_3 = lsl_r(r2, r0 & 0xff);  // (from the original)
    ea_3 = r1 + 4u;
    r2_1 = 8u - r0;
    r3_1 = u32(*gptr<u8>(r3 + *gptr<u32>(ea_3))) & lsl_r(lsr_r(r4, r2_1 & 0xff), r2_1 & 0xff);  // (from the original)
    *gptr<u32>(r1 + 8u) = u32(r0 + *gptr<u32>(ea_3 + 4));
    r2 = lsr_r(r3_1, r2_1 & 0xff) | r12_3;  // (from the original)
L_189494:;
    ea_4 = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4_1 = *gptr<u32>(ea_4);
    r5_4 = *gptr<u32>(ea_4 + 4);
    r6_2 = *gptr<u32>(ea_4 + 8);
    r7_3 = *gptr<u32>(ea_4 + 0xc);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_4;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_3;
    guest::cpu()->r[13] = r13;
    return r2;
}

}  // namespace d_00189398
GUEST_EXPORT(0x00189398, d_00189398::f_00189398);

// f_00189e2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00189e2c {

inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32, u32)> call_0013fac4;  // (from the original)
inline constexpr guest::Function<0x00203554, u32(u32, u32, u32, u32)> call_00203554;  // (from the original)
inline constexpr guest::Function<0x002fc288, u32(u32, u32, u32, u32)> call_002fc288;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002fe9dc, u32(u32, u32, u32, u32)> call_002fe9dc;  // (from the original)
inline constexpr guest::Function<0x002fea2c, u32(u32, u32, u32, u32)> call_002fea2c;  // (from the original)
inline constexpr guest::Function<0x002ffad8, u32(u32, u32, u32, u32)> call_002ffad8;  // (from the original)
inline constexpr guest::Function<0x00302944, u32(u32, u32, u32, u32)> call_00302944;  // (from the original)
inline constexpr guest::Function<0x00303094, u32(u32, u32, u32, u32)> call_00303094;  // (from the original)
inline constexpr guest::Function<0x006f86a4, u32(u32, u32, u32, u32)> call_006f86a4;  // (from the original)
inline constexpr guest::Function<0x00745948, u32(u32, u32, u32, u32)> call_00745948;  // (from the original)

u32 f_00189e2c(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 zf_1 = 0;
    u32 res_1 = 0;
    u64 t_1 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r0_2 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_5 = 0;
    u32 r0_5 = 0;
    u32 r2_6 = 0;
    u32 r3_5 = 0;
    u32 r1_6 = 0;
    u32 r0_6 = 0;
    u64 t_2 = 0;
    u32 r0_7 = 0;
    u32 r1_7 = 0;
    u32 r0_8 = 0;
    u32 r2_7 = 0;
    u32 r3_6 = 0;
    u32 r1_8 = 0;
    u32 r0_9 = 0;
    u64 t_3 = 0;
    u32 r1_9 = 0;
    u64 t_4 = 0;
    u32 r1_10 = 0;
    u32 r0_10 = 0;
    u32 r1_11 = 0;
    u32 r2_8 = 0;
    u32 r3_7 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r2_9 = 0;
    u32 r3_8 = 0;
    u32 res_2 = 0;
    u32 r0_13 = 0;
    u32 r2_10 = 0;
    u32 r3_9 = 0;
    u32 r1_12 = 0;
    u32 r0_14 = 0;
    u32 r2_11 = 0;
    u32 r3_10 = 0;
    u32 r1_13 = 0;
    u32 r0_15 = 0;
    u32 r1_14 = 0;
    u32 r0_16 = 0;
    u64 t_5 = 0;
    u32 r0_17 = 0;
    r6 = r1;
    r13 = r13 - 0x308u;  // (from the original)
    r2_1 = ~0u;
    guest::cpu()->r[13] = r13;
    call_0013fac4(r6, 0x20u, r2_1, r3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r4 = 0u;
    guest::cpu()->r[13] = r13;
    r0_1 = call_00203554(r2, r1_1, r2_2, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r8 = r0_1;
    guest::cpu()->r[13] = r13;
    r0 = call_006f86a4(r2, r1_2, r2_3, r3_2);
    zf_1 = r8 == 0;
    r1 = r0;
    if (!zf_1) {
        zf_1 = r1 == 0;
    }
    if (zf_1) {
        goto L_189f14;
    }
    res_1 = r0 + 0x8f9cu;  // (from the original)
    r7 = res_1;
    if (res_1 == 0) {
        goto L_189f14;
    }
    r1 = 0u;
    r5 = r1;
    r3 = r1;
L_189e8c:;
    r0 = 0u;
    r2 = *gptr<u32>(r7 + (r3 << 2));
L_189e94:;
    r1 = r1 + 1u;
    if ((lsr_r(r2, r0 & 0xff) & 1u) != 0) {  // (from the original)
        r5 = r5 + 1u;
    }
    if (r1 < 0x5bu) {  // (from the original)
        r0 = r0 + 1u;
        if (r0 < 0x20u) {  // (from the original)
            guest::preempt();
            goto L_189e94;
        }
        r3 = r3 + 1u;
        if (r3 < 3u) {
            guest::preempt();
            goto L_189e8c;
        }
    }
    t_1 = u64(0u) + ~0u + u32(8u >= r5);
    if (!u32(t_1 >> 0x20)) {  // (from the original)
        goto L_189f1c;
    }
    r1_3 = r5 - 1u;
    guest::cpu()->r[13] = r13;
    r0 = call_00745948(r8, r1_3, 1u, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r4 = 1u;
    *gptr<u32>(r6) = u32(r0);
    if (r5 <= 1u) {
        goto L_189f14;
    }
    do {
L_189ef4:;
        r1_4 = r4 - 1u;
        guest::cpu()->r[13] = r13;
        r0 = call_00745948(r8, r1_4, 1u, r3);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        *gptr<u32>(r6 + (r4 << 2)) = u32(r0);
        r4 = r4 + 1u;
        guest::preempt();
    } while (r5 > r4);
L_189f14:;
    r13 = r13 + 0x308u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_189f1c:;
    guest::cpu()->r[13] = r13;
    r0 = call_00745948(r8, 7u, 1u, r3);
    r1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0 + 1u == 0) {
        guest::preempt();
        goto L_189f14;
    }
    *gptr<u32>(r6) = u32(r0);
    r4 = r4 + 1u;
    r0_2 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc288(r0_2, r1, r2_4, r3_3);
    r2_5 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    call_00302944(r0_3, 0x2fu, r2_5, r3_4);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0u;
L_189f54:;
    r0_4 = r5 + 0x212bu;  // (from the original)
    if (r5 <= 0x5au) {  // (from the original)
        r2 = *gptr<u32>(r7 + (r5 >> 5 << 2));
        if ((lsr_r(r2, r5 & 0x1fu) & 1u) != 0) {  // (from the original)
            goto L_189fa0;
        }
    }
    r1_5 = uxth(r0_4);
    r0_5 = r13 + 0x2e8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fcbb0(r0_5, r1_5, r2, r3);
    r2_6 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r1_6 = r13 + 0x2e8u;  // (from the original)
    r0_6 = r13;
    guest::cpu()->r[13] = r13;
    call_002fe9dc(r0_6, r1_6, r2_6, r3_5);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_189fa0:;
    r5 = r5 + 1u;
    if (r5 < 0x5bu) {  // (from the original)
        guest::preempt();
        goto L_189f54;
    }
    r5 = 0u;
    t_2 = u64(0u) + ~0u + u32(0u >= 8u);
    if (u32(t_2 >> 0x20)) {  // (from the original)
        goto L_18a01c;
    }
    do {
L_189fc0:;
        guest::cpu()->r[13] = r13;
        r0_7 = call_00745948(r8, r5, 1u, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0_7 + 1u == 0)) {
            r1_7 = uxth(r0_7 + 0x212bu);  // (from the original)
            r0_8 = r13 + 0x2e8u;  // (from the original)
            guest::cpu()->r[13] = r13;
            call_002fcbb0(r0_8, r1_7, r2, r3);
            r2_7 = guest::cpu()->r[2];
            r3_6 = guest::cpu()->r[3];
            r1_8 = r13 + 0x2e8u;  // (from the original)
            r0_9 = r13;
            guest::cpu()->r[13] = r13;
            call_002fe9dc(r0_9, r1_8, r2_7, r3_6);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r5 = r5 + 1u;
        t_3 = u64(0u) + ~0u + u32(r5 >= 8u);
        guest::preempt();
    } while (!u32(t_3 >> 0x20));  // (from the original)
L_18a01c:;
    r1_9 = r4 - 8u;
    t_4 = u64(0u) + ~0u + u32(r4 >= 8u);
    if (u32(t_4 >> 0x20)) {  // (from the original)
        goto L_18a0b4;
    }
    do {
L_18a02c:;
        r1_10 = r13;
        r0_10 = r13 + 0x2e8u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002fea2c(r0_10, r1_10, r2, r3);
        r1_11 = guest::cpu()->r[1];
        r2_8 = guest::cpu()->r[2];
        r3_7 = guest::cpu()->r[3];
        r0_11 = r13 + 0x2e8u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_12 = call_002ffad8(r0_11, r1_11, r2_8, r3_7);
        r2_9 = guest::cpu()->r[2];
        r3_8 = guest::cpu()->r[3];
        *gptr<u32>(r6 + (r4 << 2)) = u32(r0_12);
        r4 = r4 + 1u;
        res_2 = r4 - 2u;
        if (!(res_2 >> 0x1f)) {  // (from the original)
            guest::cpu()->r[13] = r13;
            r0_13 = call_00745948(r8, res_2, 1u, r3_8);
            r2_10 = guest::cpu()->r[2];
            r3_9 = guest::cpu()->r[3];
            r1_12 = uxth(r0_13 + 0x212bu);  // (from the original)
            r0_14 = r13 + 0x2ecu;  // (from the original)
            guest::cpu()->r[13] = r13;
            call_002fcbb0(r0_14, r1_12, r2_10, r3_9);
            r2_11 = guest::cpu()->r[2];
            r3_10 = guest::cpu()->r[3];
            r1_13 = r13 + 0x2ecu;  // (from the original)
            r0_15 = r13;
            guest::cpu()->r[13] = r13;
            call_00303094(r0_15, r1_13, r2_11, r3_10);
            r2_9 = guest::cpu()->r[2];
            r3_8 = guest::cpu()->r[3];
        }
        r1_14 = r13 + 0x2e8u;  // (from the original)
        r0_16 = r13;
        guest::cpu()->r[13] = r13;
        call_002fe9dc(r0_16, r1_14, r2_9, r3_8);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1_9 = r4 - 8u;
        t_5 = u64(0u) + ~0u + u32(r4 >= 8u);
        guest::preempt();
    } while (!u32(t_5 >> 0x20));  // (from the original)
L_18a0b4:;
    r0_17 = r13;
    r13 = r13 + 0x308u;  // (from the original)
    guest::cpu()->r[1] = r1_9;
    guest::cpu()->r[13] = r13;
    return r0_17;
}

}  // namespace d_00189e2c
GUEST_EXPORT(0x00189e2c, d_00189e2c::f_00189e2c);

// f_0018a390: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018a390 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)

u32 f_0018a390() {
    return call_002fc8e8(0x94d748u, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0018a390
GUEST_EXPORT(0x0018a390, d_0018a390::f_0018a390);

// f_0018ac84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018ac84 {

inline constexpr guest::Function<0x00203554, u32(u32, u32, u32, u32)> call_00203554;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x006f86a4, u32(u32, u32, u32, u32)> call_006f86a4;  // (from the original)
inline constexpr guest::Function<0x00745900, u32(u32, u32, u32, u32)> call_00745900;  // (from the original)
inline constexpr guest::Function<0x00745948, u32(u32, u32, u32, u32)> call_00745948;  // (from the original)

u32 f_0018ac84(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r12 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 zf_1 = 0;
    u32 res_1 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r1_4 = 0;
    u32 r0_5 = 0;
    u32 r3_5 = 0;
    u32 r1_5 = 0;
    u32 r0_6 = 0;
    u32 r3_6 = 0;
    u32 r1_6 = 0;
    u32 r0_7 = 0;
    u32 r3_7 = 0;
    u32 r1_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_8 = 0;
    u32 r0_10 = 0;
    u32 r3_8 = 0;
    u32 r1_9 = 0;
    u32 r0_11 = 0;
    u32 res_2 = 0;
    u32 r0_12 = 0;
    u32 r3_9 = 0;
    u32 r0_13 = 0;
    u32 r5_1 = 0;
    u64 t_1 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = r0;
    r0_1 = call_002f74c8(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = call_00203554(r0_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r8 = r0_2;
    r0_3 = call_006f86a4(r0_1, r1_2, r2_2, r3_2);
    r1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    zf_1 = r8 == 0;
    if (!zf_1) {
        zf_1 = r0_3 == 0;
    }
    if (!zf_1) {
        res_1 = r0_3 + 0x8f9cu;  // (from the original)
        zf_1 = res_1 == 0;
        r7 = res_1;
    }
    if (zf_1) {
        goto L_18ad8c;
    }
    r6 = r4 + 0x800u;  // (from the original)
    r1_3 = u32(s32(s8(*gptr<u8>(r6 + 0xddu))));  // (from the original)
    r0_4 = call_00745900(r8, r1_3, r2_3, r3_3);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_4 + 1u == 0) {
        goto L_18ad48;
    }
    r1_4 = r0_4 + 1u;
    r0_5 = call_00745948(r8, r1_4, 1u, r3_4);
    r3_5 = guest::cpu()->r[3];
    if (r0_5 + 1u == 0) {
        goto L_18ad94;
    }
    r1_5 = r0_4 + 1u;
    r0_6 = call_00745948(r8, r1_5, 1u, r3_5);
    r3_6 = guest::cpu()->r[3];
    *gptr<u8>(r4 + 0x8ddu) = u8(r0_6);  // (from the original)
    r1_6 = r0_4 + 2u;
    r0_7 = call_00745948(r8, r1_6, 1u, r3_6);
    r3_7 = guest::cpu()->r[3];
    if (r0_7 + 1u == 0) {
        goto L_18adc0;
    }
    r1_7 = r0_4 + 2u;
    r0_8 = call_00745948(r8, r1_7, 1u, r3_7);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r4 + 0x8deu) = u8(r0_8);  // (from the original)
L_18ad2c:;
    r0_9 = u32(s32(s8(*gptr<u8>(r6 + 0xdeu))));  // (from the original)
    if (s32(r0_9) >= s32(0x5bu)) {  // (from the original)
        goto L_18ad8c;
    }
    if (r0_9 + 1u == 0) {
        goto L_18ad8c;
    }
L_18ad40:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 1u;
L_18ad48:;
    r1_8 = u32(s32(s8(*gptr<u8>(r6 + 0xdeu))));  // (from the original)
    r0_10 = call_00745900(r8, r1_8, r2_4, r3_4);
    r1 = guest::cpu()->r[1];
    r3_8 = guest::cpu()->r[3];
    if (r0_10 + 1u == 0) {
        goto L_18ad8c;
    }
    *gptr<u8>(r4 + 0x8ddu) = u8(u32(*gptr<u8>(r6 + 0xdeu)));  // (from the original)
    r1_9 = r0_10 + 1u;
    r0_11 = call_00745948(r8, r1_9, 1u, r3_8);
    r1 = guest::cpu()->r[1];
    res_2 = r0_11 - 0x5bu;  // (from the original)
    *gptr<u8>(r4 + 0x8deu) = u8(r0_11);  // (from the original)
    if (res_2 >> 0x1f == ((r0_11 ^ 0x5bu) & (r0_11 ^ res_2)) >> 0x1f) {  // (from the original)
        goto L_18ad8c;
    }
    if (r0_11 + 1u != 0) {
        guest::preempt();
        goto L_18ad40;
    }
L_18ad8c:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
L_18ad94:;
    r0_12 = call_00745948(r8, 0u, 1u, r3_5);
    r3_9 = guest::cpu()->r[3];
    *gptr<u8>(r4 + 0x8ddu) = u8(r0_12);  // (from the original)
    r0_13 = call_00745948(r8, 1u, 1u, r3_9);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r4 + 0x8deu) = u8(r0_13);  // (from the original)
    guest::preempt();
    goto L_18ad40;
L_18adc0:;
    r2 = 0u;
    r0 = r2;
    r12 = r2;
L_18adcc:;
    r1 = 0u;
    r3 = *gptr<u32>(r7 + (r12 << 2));
L_18add4:;
    r2 = r2 + 1u;
    r5_1 = lsr_r(r3, r1 & 0xff);  // (from the original)
    if ((r5_1 & 1u) != 0) {
        r0 = r0 + 1u;
    }
    if (r2 < 0x5bu) {  // (from the original)
        r1 = r1 + 1u;
        if (r1 < 0x20u) {  // (from the original)
            guest::preempt();
            goto L_18add4;
        }
        r12 = r12 + 1u;
        if (r12 < 3u) {
            guest::preempt();
            goto L_18adcc;
        }
    }
    t_1 = u64(0u) + ~0u + u32(8u >= r0);
    if (u32(t_1 >> 0x20)) {  // (from the original)
        r0_14 = call_00745948(r8, 0u, 0u, r3);
        r1 = guest::cpu()->r[1];
        *gptr<u8>(r4 + 0x8deu) = u8(r0_14);  // (from the original)
        guest::preempt();
        goto L_18ad2c;
    }
    r0_15 = call_00745948(r8, 1u, 0u, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r4 + 0x8deu) = u8(r0_15);  // (from the original)
    guest::preempt();
    goto L_18ad2c;
}

}  // namespace d_0018ac84
GUEST_EXPORT(0x0018ac84, d_0018ac84::f_0018ac84);

// f_0018c1c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018c1c0 {

struct __attribute__((packed)) Object_0018c1c0_0 {
    u8 unknown_0[0x8dc];  // (not used here)
    u8 byte_8dc;
};
GUEST_OFFSET(Object_0018c1c0_0, byte_8dc, 0x8dc);  // (from the original)

inline guest::global<u32, 0x0094f310> global_0094f310;  // (from the original)
inline constexpr guest::Function<0x00203554, u32(u32, u32, u32, u32)> call_00203554;  // (from the original)
inline constexpr guest::Function<0x002d50b8, u32(u32, u32, u32, u32)> call_002d50b8;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x004e9f00, u32(u32, u32, u32, u32)> call_004e9f00;  // (from the original)
inline constexpr guest::Function<0x005359fc, u32(u32, u32, u32, u32)> call_005359fc;  // (from the original)
inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> call_00584074;  // (from the original)
inline constexpr guest::Function<0x0058aee8, u32(u32, u32, u32, u32)> call_0058aee8;  // (from the original)
inline constexpr guest::Function<0x006f9c08, u32(u32, u32, u32, u32)> call_006f9c08;  // (from the original)

u32 f_0018c1c0(gptr<Object_0018c1c0_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r8_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r3_4 = 0;
    u32 r1_2 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r0_5 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r5_2 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r5_1 = r1;
    r0_1 = u32(arg0->byte_8dc);
    r8_1 = ~0u;
    if (r0_1 == 0) {
        goto L_18c2b0;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_005359fc(0x2fu, r1, r2, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_1 = *gptr<u32>(r0_2 + 4u);
    if (r0_1 <= r5_1) {
        goto L_18c2b0;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_00584074(r0_1, r1, r2_1, r3_1);
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4u) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_1 = call_0058aee8(r0_3, 0xdu, r5_1, 5u);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r2 == 0) {
        goto L_18c2ac;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_002f74c8(r0_1, r1, r2_2, r3_2);
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_1 = call_006f9c08(r0_4, r1_1, r2_3, r3_3);
    r1 = guest::cpu()->r[1];
    r3_4 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_18c2ac;
    }
    guest::cpu()->r[13] = r13;
    call_002d50b8(r0_1, 0x95bfdcu, 0x95bfdcu, r3_4);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_5 = *global_0094f310;
    if (r0_5 != 0) {
        r3_5 = ~0u;
        ea_1 = r0_5 + 0x850u;  // (from the original)
        *gptr<u32>(ea_1) = u32(r3_5);
        *gptr<u32>(ea_1 + 4) = u32(r3_5);
        r1_2 = 0u;
        *gptr<u8>(r0_5 + 0x860u) = u8(r1_2);  // (from the original)
        r2_4 = r1_2;
        ea_2 = r0_5 + 0x858u;  // (from the original)
        *gptr<u32>(ea_2) = u32(r1_2);
        *gptr<u32>(ea_2 + 4) = u32(r2_4);
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_00203554(r0_4, r1_2, r2_4, r3_5);
    r1 = guest::cpu()->r[1];
    r5_2 = r0_1;
    if (r0_1 == 0) {
        goto L_18c2ac;
    }
    *gptr<u32>(r13) = u32(0x95bfdcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_004e9f00(r5_2, r1, 0u, 0u);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r5_2 + 9u) = u8(r8_1);
L_18c2ac:;
    *gptr<u8>(r0 + 0x8dcu) = u8(0u);  // (from the original)
L_18c2b0:;
    if (r3 != 0) {
        *gptr<u8>(r0 + 0x8ddu) = u8(r8_1);  // (from the original)
        *gptr<u8>(r0 + 0x8deu) = u8(r8_1);  // (from the original)
    }
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_0018c1c0
GUEST_EXPORT(0x0018c1c0, d_0018c1c0::f_0018c1c0);

// f_0018caf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018caf0 {

struct __attribute__((packed)) Object_0018caf0_0 {
    u8 unknown_0[0x308];  // (not used here)
    u8 byte_308;
};
GUEST_OFFSET(Object_0018caf0_0, byte_308, 0x308);  // (from the original)

inline guest::global<u32, 0x0018cb04> global_0018cb04;  // (from the original)
inline constexpr guest::Function<0x005707f0, u32(u32, u32, u32, u32)> call_005707f0;  // (from the original)

u32 f_0018caf0(gptr<Object_0018caf0_0> arg0) {
    u32 r0 = arg0.addr();
    float S0_1 = 0;
    arg0->byte_308 = u8(1u);
    S0_1 = std::bit_cast<float>(*global_0018cb04);
    guest::cpu()->s[0] = S0_1;
    return call_005707f0(r0, 0x1fu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0018caf0
GUEST_EXPORT(0x0018caf0, d_0018caf0::f_0018caf0);

// f_0018d284: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018d284 {

struct __attribute__((packed)) Object_0018d284_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0018d284_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0018d284_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00116e31, u32(u32, u32, u32, u32)> call_00116e30;  // (from the original)
inline constexpr guest::Function<0x001198e9, u32(u32, u32, u32, u32)> call_001198e8;  // (from the original)
inline constexpr guest::Function<0x00119fcd, u32(u32, u32, u32, u32)> call_00119fcc;  // (from the original)
inline constexpr guest::Function<0x0011a7c5, u32(u32, u32, u32, u32)> call_0011a7c4;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> call_002fe8a8;  // (from the original)
inline constexpr guest::Function<0x003009a9, u32(u32, u32, u32, u32)> call_003009a8;  // (from the original)
inline constexpr guest::Function<0x00309865, u32(u32, u32, u32, u32)> call_00309864;  // (from the original)

u32 f_0018d284(gptr<Object_0018d284_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r6_1 = 0;
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r7 = r0;
    arg0->word_4 = u32(0u);
    r10 = r1;
    arg0->word_8 = u32(0u);
    r0 = call_002fe8a8(0u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4_1 = r0;
    if (r0 == 0) {
        goto L_18d34c;
    }
    r0_1 = call_002fb328(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r9 = r0_1 + 0x292a4u;  // (from the original)
    r0 = call_00309864(r9, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r5 = r0;
    r8 = r4_1 + 0x55a6u;  // (from the original)
    r4 = 0u;
L_18d2d0:;
    if (r4 == r5) {
        goto L_18d340;
    }
    r0 = call_003009a8(r9, r4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r6_1 = r0;
    if (r0 == 0) {
        goto L_18d340;
    }
    r0 = call_001198e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_18d340;
    }
    r0 = call_00119fcc(r6_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_18d340;
    }
    if (r10 != 0) {
        r0 = call_0011a7c4(r6_1, r8, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            goto L_18d340;
        }
    }
    r0 = call_00116e30(r7, r4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_18d340:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_18d2d0;
    }
L_18d34c:;
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0018d284
GUEST_EXPORT(0x0018d284, d_0018d284::f_0018d284);

// f_0018d350: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018d350 {

inline guest::global<u32, 0x0095386c> global_0095386c;  // (from the original)
inline guest::global<u32, 0x00a83af0> global_00a83af0;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x00300914, u32(u32, u32, u32, u32)> call_00300914;  // (from the original)
inline constexpr guest::Function<0x00300924, u32(u32, u32, u32, u32)> call_00300924;  // (from the original)
inline constexpr guest::Function<0x003009a9, u32(u32, u32, u32, u32)> call_003009a8;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x0056d874, u32(u32, u32, u32, u32)> call_0056d874;  // (from the original)
inline constexpr guest::Function<0x005f11b4, u32(u32, u32, u32, u32)> call_005f11b4;  // (from the original)
inline constexpr guest::Function<0x005f1294, u32(u32, u32, u32, u32)> call_005f1294;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)
inline constexpr guest::Function<0x005fcfd8, u32(u32, u32, u32, u32)> call_005fcfd8;  // (from the original)
inline constexpr guest::Function<0x0075c348, u32(u32, u32, u32, u32)> call_0075c348;  // (from the original)

u32 f_0018d350(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 zf_1 = 0;
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r3_2 = 0;
    u32 zf_2 = 0;
    u32 cf_1 = 0;
    u32 res_1 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_8 = 0;
    u32 r3_5 = 0;
    u32 res_2 = 0;
    u32 ea_1 = 0;
    u32 r3_6 = 0;
    u32 ea_2 = 0;
    u32 r3_7 = 0;
    u32 r1_3 = 0;
    u32 r3_8 = 0;
    u32 r1_4 = 0;
    u32 r3_9 = 0;
    u32 r1_5 = 0;
    u32 r1_6 = 0;
    u32 r2_4 = 0;
    u32 r3_10 = 0;
    u32 r0_9 = 0;
    u32 r3_11 = 0;
    u32 r1_7 = 0;
    u32 r1_8 = 0;
    u32 r3_12 = 0;
    u32 r1_9 = 0;
    u32 r1_10 = 0;
    u32 r3_13 = 0;
    u32 r1_11 = 0;
    u32 r1_12 = 0;
    r13 = r13 - 0x58u;  // (from the original)
    zf_1 = r0 == 0;
    r8 = r0;
    r0_1 = 0x95debcu;  // (from the original)
    r6 = *gptr<u32>(r0_1);
    if (!zf_1) {
        zf_1 = r6 == 0;
    }
    if (zf_1) {
        goto L_18d520;
    }
    r0_1 = *global_0095386c;
    r4_1 = u32(s32(s8(*gptr<u8>(r0_1 + 0x9au))));  // (from the original)
    if (r4_1 >> 0x1f != (r4_1 & (r4_1 ^ r4_1)) >> 0x1f) {  // (from the original)
        goto L_18d520;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fb328(r0_1, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_3 = r0_2 + 0x292a4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_003009a8(r0_3, r4_1, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    r3_2 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_18d520;
    }
    r0_1 = u32(*gptr<u16>(r0_1 + 0x2cu));  // (from the original)
    r1 = *global_00a83af0;
    zf_2 = r1 == 0;
    cf_1 = r1 >= 0u;
    if (!zf_2) {
        zf_2 = 0x18fu == r0_1;  // (from the original)
        cf_1 = 0x18fu >= r0_1;  // (from the original)
    }
    if (!cf_1 || zf_2) {
        goto L_18d520;
    }
    r0_1 = r0_1 + (r0_1 << 4);
    res_1 = r1 + (r0_1 << 1);
    r4 = res_1;
    if (res_1 == 0) {
        goto L_18d520;
    }
    r0_4 = r13;
    r9 = r13 + 0x38u;  // (from the original)
    *gptr<u16>(r13 + 0x38u) = u16(u32(*gptr<u16>(r4)));  // (from the original)
    r1_1 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_003083bc(r0_4, r1_1, 9u, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r7 = 0x90a3e8u;  // (from the original)
    *gptr<u32>(r0_5) = u32(r7);
    r0_6 = r0_5 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_7 = call_005f4bfc(r0_6, r1_2, r2_2, r3_3);
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r5 = r0_7 - 0xcu;  // (from the original)
    r0_8 = r0_7 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_8, 0x12u, r2_3, r3_4);  // (from the original)
    r1 = 0x8906ecu;  // (from the original)
    r0 = r5 + 0x18u;  // (from the original)
    *gptr<u16>(r5 + 0x18u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    r2 = 4u;
    do {
L_18d410:;
        r3_5 = u32(*gptr<u16>(r1));
        res_2 = r2 - 1u;
        r2 = res_2;
        ea_1 = r0 + 2u;
        *gptr<u16>(ea_1) = u16(r3_5);
        r3_6 = u32(*gptr<u16>(r1));
        ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_6);
        r0 = ea_2;
        guest::preempt();
    } while (res_2 != 0);
    guest::cpu()->r[13] = r13;
    call_0056d874(r5, r9, r2, r3_6);
    r3_7 = guest::cpu()->r[3];
    r1_3 = r13;
    guest::cpu()->r[13] = r13;
    call_005f1294(r8, r1_3, 0u, r3_7);
    r3_8 = guest::cpu()->r[3];
    r1_4 = u32(*gptr<u8>(r4 + 0x1du)) >> 4;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00300914(r8, r1_4, 0u, r3_8);
    r3_9 = guest::cpu()->r[3];
    r1_5 = u32(s32(s8(*gptr<u8>(r4 + 3u))));
    guest::cpu()->r[13] = r13;
    call_00300924(r8, r1_5, 0u, r3_9);
    r1_6 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_9 = r13 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005fcfd8(r0_9, r1_6, r2_4, r3_10);
    r3_11 = r4 + 0x10u;  // (from the original)
    r1_7 = r13 + 0x2cu;  // (from the original)
    *gptr<u8>(r4 + 0x13u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0075c348(r6, r1_7, 0x18d540u, r3_11);  // (from the original)
    r1_8 = r13 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005f11b4(r8, r1_8, 0xcu, 0u);  // (from the original)
    r3_12 = r4 + 0x18u;  // (from the original)
    r1_9 = r13 + 0x2cu;  // (from the original)
    *gptr<u8>(r4 + 0x1bu) = u8(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0075c348(r6, r1_9, 0x18d550u, r3_12);  // (from the original)
    r1_10 = r13 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005f11b4(r8, r1_10, 0xau, 0u);  // (from the original)
    r3_13 = r4 + 0x14u;  // (from the original)
    r1_11 = r13 + 0x2cu;  // (from the original)
    *gptr<u8>(r4 + 0x17u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0075c348(r6, r1_11, 0x18d560u, r3_13);  // (from the original)
    r1_12 = r13 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005f11b4(r8, r1_12, 0xbu, 0u);  // (from the original)
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r13) = u32(r7);
    r0_1 = r13;
L_18d520:;
    r13 = r13 + 0x58u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_0018d350
GUEST_EXPORT(0x0018d350, d_0018d350::f_0018d350);

// f_0018e6bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018e6bc {


u32 f_0018e6bc(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    r0_1 = r0 + 8u;
    if (r2 < 7u) {
        r2_1 = r2 + (r2 << 5);
        r0_1 = r0_1 + ((r2_1 << 3) - r2_1 << 3);
    }
    if (r1 < 7u) {
        r1 = r1 + (r1 << 5);
        r0_1 = r0_1 + (r1 << 3);
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_0018e6bc
GUEST_EXPORT(0x0018e6bc, d_0018e6bc::f_0018e6bc);

// f_0018e6e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018e6e4 {

inline constexpr guest::Function<0x0031758c, u32(u32, u32, u32, u32)> call_0031758c;  // (from the original)

u32 f_0018e6e4(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    if (r1 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    *gptr<u32>(r13 + 0xcu) = u32(0x18e730u);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(0x9047f8u);  // (from the original)
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4) = u32(0u);
    r3_1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_1 = call_0031758c(r0, r2, r1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_0018e6e4
GUEST_EXPORT(0x0018e6e4, d_0018e6e4::f_0018e6e4);

// f_0018e944: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018e944 {

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x005673c8, u32(u32, u32, u32, u32)> call_005673c8;  // (from the original)

u32 f_0018e944(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_005673c8(r0, r1, r2, r3);
    r0_2 = r0_1 + 8u;
    r0_3 = call_00301d0c(r0_2, 0x561f0cu, 0x738u, 7u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_4 = r0_3 - 8u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_4;
}

}  // namespace d_0018e944
GUEST_EXPORT(0x0018e944, d_0018e944::f_0018e944);

// f_0018e970: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018e970 {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x00317dec, u32(u32, u32, u32, u32)> call_00317dec;  // (from the original)

u32 f_0018e970(u32 r0) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 8u;
    call_002f76ac(r0_1, 0x561f20u, 0x738u, 7u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 8u;
    return call_00317dec(r0, r1_1, r2_1, r3_1);
}

}  // namespace d_0018e970
GUEST_EXPORT(0x0018e970, d_0018e970::f_0018e970);

// f_0018e9ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018e9ac {

struct __attribute__((packed)) Object_0018e9ac_0 {
    u8 unknown_0[0x31c];  // (not used here)
    u8 byte_31c;
};
GUEST_OFFSET(Object_0018e9ac_0, byte_31c, 0x31c);  // (from the original)

inline guest::global<u32, 0x00845f48> global_00845f48;  // (from the original)
inline constexpr guest::Function<0x008161b8, u32(u32, u32, u32, u32)> call_008161b8;  // (from the original)

u32 f_0018e9ac(gptr<Object_0018e9ac_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->byte_31c = u8(1u);
    r1_1 = *global_00845f48;
    r2_1 = *gptr<u32>(0x845f48u + 4);  // (from the original)
    r0_1 = call_008161b8(r0, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return r0_1;
}

}  // namespace d_0018e9ac
GUEST_EXPORT(0x0018e9ac, d_0018e9ac::f_0018e9ac);

// f_0018eab0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018eab0 {

inline guest::global<u32, 0x00845f50> global_00845f50;  // (from the original)
inline constexpr guest::Function<0x008161b8, u32(u32, u32, u32, u32)> call_008161b8;  // (from the original)

u32 f_0018eab0() {
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r1_1 = *global_00845f50;
    r2_1 = *gptr<u32>(0x845f50u + 4);  // (from the original)
    call_008161b8(guest::cpu()->r[0], r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return guest::cpu()->r[0];
}

}  // namespace d_0018eab0
GUEST_EXPORT(0x0018eab0, d_0018eab0::f_0018eab0);

// f_0018ebd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018ebd4 {

struct __attribute__((packed)) Object_0018ebd4_0 {
    u8 unknown_0[0x31c];  // (not used here)
    u8 byte_31c;
};
GUEST_OFFSET(Object_0018ebd4_0, byte_31c, 0x31c);  // (from the original)

inline constexpr guest::Function<0x001323bc, u32(u32, u32, u32, u32)> call_001323bc;  // (from the original)
inline constexpr guest::Function<0x002b7cb0, u32(u32, u32, u32, u32)> call_002b7cb0;  // (from the original)
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32, u32)> call_00569e6c;  // (from the original)

u32 f_0018ebd4(gptr<Object_0018ebd4_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = u32(arg0->byte_31c);
    if (r0_1 != 1u) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r0_2 = call_001323bc(r0_1, r1, r2, guest::cpu()->r[3]);
    r1_1 = r0 + 0x24u;  // (from the original)
    call_00569e6c(r0_2, r1_1, 1u, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r0_3 = *gptr<u32>(r0 + 0x318u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_002b7cb0(r0_3, r1_2, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_0018ebd4
GUEST_EXPORT(0x0018ebd4, d_0018ebd4::f_0018ebd4);

// f_0018ef38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018ef38 {

struct __attribute__((packed)) Object_0018ef38_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_0018ef38_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0018ef38_0, word_10, 0x10);  // (from the original)

inline guest::global<u32, 0x00845f38> global_00845f38;  // (from the original)

u32 f_0018ef38(gptr<Object_0018ef38_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    r3_1 = arg0->word_c;
    r2_1 = *global_00845f38;
    r1_1 = *gptr<u32>(0x845f38u + 4u);  // (from the original)
    if (r3_1 != r2_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if (r3_1 == 0) {
        if (((arg0->word_10 | r1_1) & 1u) == 0) {
            guest::cpu()->r[1] = r1_1;
            return 1u;
        }
    }
    if (*gptr<u32>(r0 + 0x10u) != r1_1) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_0018ef38
GUEST_EXPORT(0x0018ef38, d_0018ef38::f_0018ef38);

// f_0018ef88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018ef88 {

struct __attribute__((packed)) Object_0018ef88_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 unknown_9[0x3];  // (not used here)
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 byte_18;
    u8 unknown_19[0x3];  // (not used here)
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Object_0018ef88_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0018ef88_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0018ef88_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0018ef88_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0018ef88_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0018ef88_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0018ef88_0, byte_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0018ef88_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0018ef88_0, word_20, 0x20);  // (from the original)

inline guest::global<u32, 0x00845f58> global_00845f58;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)
inline constexpr guest::Function<0x00569ab8, u32(u32, u32, u32, u32)> call_00569ab8;  // (from the original)

u32 f_0018ef88(gptr<Object_0018ef88_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r0_9 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_4 = u32(0u);
    arg0->byte_8 = u8(0u);
    r2_1 = *gptr<u32>(0x845f58u + 4);  // (from the original)
    r3_1 = r0 + 0xcu;  // (from the original)
    arg0->word_c = u32(*global_00845f58);
    arg0->word_10 = u32(r2_1);
    arg0->word_14 = u32(0u);
    arg0->byte_18 = u8(0u);
    arg0->word_1c = u32(0u);
    arg0->word_0 = u32(0x8eaca8u);  // (from the original)
    arg0->word_20 = u32(0u);
    r0_1 = r0 + 0x24u;  // (from the original)
    r0_2 = call_00125e3c(r0_1, 0x8eaca8u, r2_1, r3_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_3 = r0_2 + 0x14cu;  // (from the original)
    r0_4 = call_00569ab8(r0_3, r1_1, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = r0_4 + 0x158u;  // (from the original)
    r0_6 = call_00125aec(r0_5, r1_2, r2_3, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_7 = r0_6 + 0x28u;  // (from the original)
    r0_8 = call_00125aec(r0_7, r1_3, r2_4, r3_4);
    r1_4 = guest::cpu()->r[1];
    r0_9 = r0_8 - 0x2f0u;  // (from the original)
    *gptr<u32>(r0_9 + 0x318u) = u32(0u);  // (from the original)
    *gptr<u8>(r0_9 + 0x31cu) = u8(0u);  // (from the original)
    *gptr<u8>(r0_9 + 0x31du) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_4;
    return r0_9;
}

}  // namespace d_0018ef88
GUEST_EXPORT(0x0018ef88, d_0018ef88::f_0018ef88);

// f_0018f64c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018f64c {

inline constexpr guest::Function<0x00825aa4, u32(u32, u32, u32, u32)> call_00825aa4;  // (from the original)

u32 f_0018f64c(u32 r0, u32 r1, u32 r2) {
    u32 r1_1 = 0;
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 8u;
    if (r1 >= 4u) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r1_1 = (r1 << 4) - r1;
    r4_1 = r0 + 0x14u + (r1_1 << 3);  // (from the original)
    if (*gptr<u32>(r4_1 + 0x44u) != r2) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    *gptr<u8>(r4_1 + 0x30u) = u8(0x13u);  // (from the original)
    r0_1 = r4_1 + 0x44u;  // (from the original)
    call_00825aa4(r0_1, r1_1, r2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r0_2 = r4_1 + 0x4cu;  // (from the original)
    call_00825aa4(r0_2, r1_2, r2_1, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    *gptr<u8>(r4_1 + 0x72u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_3;
    return 1u;
}

}  // namespace d_0018f64c
GUEST_EXPORT(0x0018f64c, d_0018f64c::f_0018f64c);

// f_0018f6a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018f6a0 {

inline constexpr guest::Function<0x001c987c, u32(u32, u32, u32, u32)> call_001c987c;  // (from the original)

u32 f_0018f6a0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    if (r1 >= 4u) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r0_1 = r0 + 0x14u + ((r1 << 4) - r1 << 3);  // (from the original)
    r1_1 = *gptr<u32>(r0_1 + 0x44u);  // (from the original)
    if (r1_1 != r2) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    call_001c987c(r0_1, r3, r2, r3);
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_0018f6a0
GUEST_EXPORT(0x0018f6a0, d_0018f6a0::f_0018f6a0);

// f_0018f6dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018f6dc {


u32 f_0018f6dc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r0_1 = r0 + 0x14u + ((r1 << 4) - r1 << 3);  // (from the original)
    r1_1 = *gptr<u32>(r0_1 + 0x44u);  // (from the original)
    if (r1_1 == r2) {
        *gptr<u8>(r0_1 + 0x70u) = u8(r3);  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_0018f6dc
GUEST_EXPORT(0x0018f6dc, d_0018f6dc::f_0018f6dc);

// f_0018f898: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018f898 {

inline constexpr guest::Function<0x002b8090, u32(u32, u32, u32, u32)> call_002b8090;  // (from the original)

u32 f_0018f898(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r12_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 8;
    r12_1 = *gptr<u32>(r13 + 8u);
    if (r1 >= 4u) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_1 = r0 + 0x14u + ((r1 << 4) - r1 << 3);  // (from the original)
    r1_1 = *gptr<u32>(r0_1 + 0x44u);  // (from the original)
    if (r1_1 != r2) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_2 = r0_1 + 0x5cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002b8090(r0_2, r3, r12_1, r3);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_0018f898
GUEST_EXPORT(0x0018f898, d_0018f898::f_0018f898);

// f_0018f8e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018f8e0 {


u32 f_0018f8e0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r0_1 = r0 + 0x14u + ((r1 << 4) - r1 << 3);  // (from the original)
    r1_1 = *gptr<u32>(r0_1 + 0x44u);  // (from the original)
    if (r1_1 == r2) {
        *gptr<u8>(r0_1 + 0x31u) = u8(r3);  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_0018f8e0
GUEST_EXPORT(0x0018f8e0, d_0018f8e0::f_0018f8e0);

// f_0018fb98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018fb98 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)

u32 f_0018fb98(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r5_1 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    if (r1 >= 4u) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r1 = (r1 << 4) - r1;
    r4_1 = r0 + 0x14u + (r1 << 3);  // (from the original)
    if (*gptr<u32>(r4_1 + 0x44u) != r2) {  // (from the original)
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_1 = r4_1 + 0x6cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_1, r3, r2, r3);
    r1_1 = guest::cpu()->r[1];
    *gptr<u8>(r4_1 + 0x70u) = u8(r5_1);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_0018fb98
GUEST_EXPORT(0x0018fb98, d_0018fb98::f_0018fb98);
