// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_00186d7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00186d7c {


void f_00186d7c(float S0, float S1, float S2, float S3) {
    S0 = fabsf(S0 - S2);
    S2 = fabsf(S1 - S3);
    S1 = S0 * S0 + S2 * S2;
    S0 = sqrtf(S1);
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_00186d7c
GUEST_EXPORT(0x00186d7c, d_00186d7c::f_00186d7c);

// f_00188850: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00188850 {


u32 f_00188850(u32 r0, u32 r1) {
    u32 b = 0;
    u32 res = 0;
    u32 sco = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 nf = 0;
    u32 cf = 0;
    u32 vf = 0;
    res = r0;
    r3 = 1u;
    guest::cpu()->r[13] -= 4u;
    if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[13] += 4u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2 = 0xae56d0u;  // (from the original)
    r12 = *gptr<u32>(r2 + 0x54u);  // (from the original)
    res = r12 - r0;
    nf = res >> 0x1f;  // (from the original)
    cf = r12 >= r0;
    vf = ((r12 ^ r0) & (r12 ^ res)) >> 0x1f;  // (from the original)
    if (nf == vf) {
        nf = r1 >> 0x1f;  // (from the original)
        cf = r1 >= 0u;
        vf = 0u;
    }
    if (nf == vf) {
        r4 = *gptr<u32>(r2 + 0x58u);  // (from the original)
        res = r4 - r1;
        nf = res >> 0x1f;  // (from the original)
        cf = r4 >= r1;
        vf = ((r4 ^ r1) & (r4 ^ res)) >> 0x1f;  // (from the original)
    }
    if (nf != vf) {
        r0 = 0u;
        guest::cpu()->r[13] += 4u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r1 * r12 + r0;
    r1 = *gptr<u32>(r2 + 0x5cu);  // (from the original)
    b = r0 >> 5;
    r2 = b;
    b = 0x1fu;  // (from the original)
    r1 = *gptr<u32>(r1 + (r2 << 2));
    sco = cf;
    b = lsl_rc(r3, r0 & b & 0xff, &sco);  // (from the original)
    if ((r1 & b) != 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 4u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00188850
GUEST_EXPORT(0x00188850, d_00188850::f_00188850);

// f_001888ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001888ac {


u32 f_001888ac(u32 r0, u32 r1) {
    u32 b = 0;
    u32 res = 0;
    u32 sco = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    u32 nf = 0;
    u32 cf = 0;
    u32 vf = 0;
    res = r0;
    if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2 = 0xae56d0u;  // (from the original)
    r3 = *gptr<u32>(r2 + 0x54u);  // (from the original)
    res = r3 - r0;
    nf = res >> 0x1f;  // (from the original)
    cf = r3 >= r0;
    vf = ((r3 ^ r0) & (r3 ^ res)) >> 0x1f;  // (from the original)
    if (nf == vf) {
        nf = r1 >> 0x1f;  // (from the original)
        cf = r1 >= 0u;
        vf = 0u;
    }
    if (nf == vf) {
        r12 = *gptr<u32>(r2 + 0x58u);  // (from the original)
        res = r12 - r1;
        nf = res >> 0x1f;  // (from the original)
        cf = r12 >= r1;
        vf = ((r12 ^ r1) & (r12 ^ res)) >> 0x1f;  // (from the original)
    }
    if (nf != vf) {
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r1 * r3 + r0;
    b = 1u;
    r1 = b;
    b = r0 >> 5;
    r3 = b;
    b = 0x1fu;  // (from the original)
    sco = cf;
    b = lsl_rc(r1, r0 & b & 0xff, &sco);  // (from the original)
    if ((*gptr<u32>(*gptr<u32>(r2 + 0x5cu) + (r3 << 2)) & b) != 0) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 1u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001888ac
GUEST_EXPORT(0x001888ac, d_001888ac::f_001888ac);

// f_001889b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001889b8 {

inline constexpr guest::Function<0x001277dc, u32(u32, u32, u32, u32)> call_001277dc;  // (from the original)
inline constexpr guest::Function<0x001279b4, u32(u32, u32, u32, u32)> call_001279b4;  // (from the original)
inline constexpr guest::Function<0x00172398, u32(u32, u32, u32, u32)> call_00172398;  // (from the original)

u32 f_001889b8(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3, float S4) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x68u;  // (from the original)
    zf = r0 == 0;
    r4 = r0;
    r0 = r13 + 0x1cu;  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(std::bit_cast<u32>(S2));  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u32>(r13 + 0x24u) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S2));
    r0 = r13 + 0x2cu;  // (from the original)
    *gptr<u32>(r13 + 0x28u) = u32(std::bit_cast<u32>(S1));  // (from the original)
    *gptr<u32>(r13 + 0x34u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S3));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S4));
    r0 = r13 + 0x38u;  // (from the original)
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S3));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S4));
    if (zf) {
        r6 = 0x9751acu;  // (from the original)
        r10 = r1;
        *gptr<u32>(r13 + 0x40u) = u32(5u);  // (from the original)
        r7 = r13 + 0x10u;  // (from the original)
        r11 = 4u;
        r8 = 0u;
        if (r3 == 0) {
            r9 = 0u;
        } else {
            r9 = r6 + 0x9cu;  // (from the original)
        }
        r1 = r13;
        r0 = 0x208u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        r0 = call_001277dc(r0, r1, r2, r3);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        S3 = guest::cpu()->s[3];
        S4 = guest::cpu()->s[4];
        r0 = *gptr<u32>(r13);
        *gptr<u32>(r13) = u32(r6);
        *gptr<u32>(r13 + 4) = u32(r7);
        *gptr<u32>(r13 + 8) = u32(r8);
        *gptr<u32>(r13 + 0xc) = u32(r9);  // (from the original)
        r3 = r11;
        r2 = *gptr<u32>(r13 + 0x40u);  // (from the original)
        r5 = r0;
        r1 = r10;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        r0 = call_00172398(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        S3 = guest::cpu()->s[3];
        S4 = guest::cpu()->s[4];
        r0 = r0 - r5 & ~3u;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        r0 = call_001279b4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
    } else {
        if (r3 == 0) {
            r0 = 0u;
        } else {
            r0 = 0x975248u;  // (from the original)
        }
        *gptr<u32>(r13 + 4u) = u32(r13 + 0x10u);  // (from the original)
        *gptr<u32>(r13 + 8u) = u32(0u);
        *gptr<u32>(r13 + 0xcu) = u32(r0);  // (from the original)
        r3 = 4u;
        r2 = 5u;
        r0 = r4;
        *gptr<u32>(r13) = u32(0x9751acu);  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        r0 = call_00172398(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r4 = r0;
    }
    r0 = r4;
    r13 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001889b8
GUEST_EXPORT(0x001889b8, d_001889b8::f_001889b8);

// f_00189398: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00189398 {


u32 f_00189398(u32 r0) {
    u32 ea = 0;
    u32 res = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 nf = 0;
    u32 vf = 0;
    r1 = r0 - 1u;
    r2 = 0u;
    if (r1 >= 0x20u) {  // (from the original)
        r0 = ~0u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r7);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = 0xffu;  // (from the original)
    r1 = 0xae5750u;  // (from the original)
    r5 = *gptr<u32>(r1 + 8u);
    r3 = *gptr<u32>(r1 + 0xcu);  // (from the original)
    res = r5;
    if (u32(res == 0) || res >> 0x1f != (r5 & (r5 ^ res)) >> 0x1f) {  // (from the original)
        goto L_189420;
    }
    r12 = 8u - r5;
    res = r0 - r12;
    nf = res >> 0x1f;  // (from the original)
    vf = ((r0 ^ r12) & (r0 ^ res)) >> 0x1f;  // (from the original)
    if (nf != vf) {
        r2 = r0;
    }
    if (nf == vf) {
        r2 = r12;
    }
    r6 = *gptr<u32>(r1 + 4u);
    r12 = r12 - r2;
    r5 = r5 + r2;
    r0 = r0 - r2;
    r7 = u32(*gptr<u8>(r3 + r6));
    *gptr<u32>(r1 + 8u) = u32(r5);
    r2 = lsr_r(lsl_r(lsr_r(r4, 8u - r2 & 0xff), r12 & 0xff) & r7, r12 & 0xff);  // (from the original)
    if (r5 != 8u) {
        goto L_189420;
    }
    ea = r1 + 4u;
    *gptr<u32>(ea) = u32(r6 + 1u);
    *gptr<u32>(ea + 4) = u32(0u);
L_189420:;
    res = r0;
    if (u32(res == 0) || res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
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
        r5 = *gptr<u32>(r1 + 4u);
        r0 = r0 - 8u;
        r12 = r12 + 1u;
        r7 = u32(*gptr<u8>(r3 + r5));
        *gptr<u32>(r1 + 4u) = u32(r5 + 1u);
        r2 = r7 | r2 << 8;
        guest::preempt();
    }
    res = r0;
    if (u32(res == 0) || res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_189494;
    }
    r12 = lsl_r(r2, r0 & 0xff);  // (from the original)
    ea = r1 + 4u;
    r2 = 8u - r0;
    r3 = u32(*gptr<u8>(r3 + *gptr<u32>(ea))) & lsl_r(lsr_r(r4, r2 & 0xff), r2 & 0xff);  // (from the original)
    *gptr<u32>(r1 + 8u) = u32(r0 + *gptr<u32>(ea + 4));
    r2 = lsr_r(r3, r2 & 0xff) | r12;  // (from the original)
L_189494:;
    ea = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r0 = r2;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 res = 0;
    u64 t = 0;
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r6 = r1;
    r5 = r2;
    r13 = r13 - 0x308u;  // (from the original)
    r2 = ~0u;
    r1 = 0x20u;  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0013fac4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00203554(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r8 = r0;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_006f86a4(r0, r1, r2, r3);
    zf = r8 == 0;
    r1 = r0;
    if (!zf) {
        zf = r1 == 0;
    }
    if (zf) {
        goto L_189f14;
    }
    res = r0 + 0x8f9cu;  // (from the original)
    r7 = res;
    if (res == 0) {
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
    t = u64(0u) + ~0u + u32(8u >= r5);
    r2 = 1u;
    if (!u32(t >> 0x20)) {  // (from the original)
        goto L_189f1c;
    }
    r1 = r5 - 1u;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_00745948(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r4 = 1u;
    *gptr<u32>(r6) = u32(r0);
    if (!u32(r5 >= 1u) || u32(r5 == 1u)) {
        goto L_189f14;
    }
    do {
L_189ef4:;
        r2 = 1u;
        r1 = r4 - 1u;
        r0 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_00745948(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        *gptr<u32>(r6 + (r4 << 2)) = u32(r0);
        r4 = r4 + 1u;
        guest::preempt();
    } while (u32(r5 >= r4) && !u32(r5 == r4));
L_189f14:;
    r13 = r13 + 0x308u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_189f1c:;
    r1 = 7u;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_00745948(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 + 1u == 0) {
        guest::preempt();
        goto L_189f14;
    }
    *gptr<u32>(r6) = u32(r0);
    r4 = r4 + 1u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc288(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x2fu;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00302944(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0u;
L_189f54:;
    r0 = r5 + 0x212bu;  // (from the original)
    if (!(u32(r5 >= 0x5au) && !u32(r5 == 0x5au))) {  // (from the original)
        r2 = *gptr<u32>(r7 + (r5 >> 5 << 2));
        if ((lsr_r(r2, r5 & 0x1fu) & 1u) != 0) {  // (from the original)
            goto L_189fa0;
        }
    }
    r1 = uxth(r0);
    r0 = r13 + 0x2e8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x2e8u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe9dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_189fa0:;
    r5 = r5 + 1u;
    if (r5 < 0x5bu) {  // (from the original)
        guest::preempt();
        goto L_189f54;
    }
    r0 = 0u;
    r5 = r0;
    t = u64(r0) + ~0u + u32(r0 >= 8u);
    if (u32(t >> 0x20)) {  // (from the original)
        goto L_18a01c;
    }
    do {
L_189fc0:;
        r2 = 1u;
        r1 = r5;
        r0 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_00745948(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0 + 1u == 0)) {
            r1 = uxth(r0 + 0x212bu);  // (from the original)
            r0 = r13 + 0x2e8u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_002fcbb0(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r1 = r13 + 0x2e8u;  // (from the original)
            r0 = r13;
            guest::cpu()->r[13] = r13;
            r0 = call_002fe9dc(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r5 = r5 + 1u;
        t = u64(0u) + ~0u + u32(r5 >= 8u);
        guest::preempt();
    } while (!u32(t >> 0x20));  // (from the original)
L_18a01c:;
    r1 = r4 - 8u;
    t = u64(0u) + ~0u + u32(r4 >= 8u);
    if (u32(t >> 0x20)) {  // (from the original)
        goto L_18a0b4;
    }
    do {
L_18a02c:;
        r1 = r13;
        r0 = r13 + 0x2e8u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fea2c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r13 + 0x2e8u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002ffad8(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        *gptr<u32>(r6 + (r4 << 2)) = u32(r0);
        r4 = r4 + 1u;
        res = r4 - 2u;
        r1 = res;
        if (!(res >> 0x1f)) {  // (from the original)
            r2 = 1u;
            r0 = r8;
            guest::cpu()->r[13] = r13;
            r0 = call_00745948(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r1 = uxth(r0 + 0x212bu);  // (from the original)
            r0 = r13 + 0x2ecu;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_002fcbb0(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r1 = r13 + 0x2ecu;  // (from the original)
            r0 = r13;
            guest::cpu()->r[13] = r13;
            r0 = call_00303094(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r1 = r13 + 0x2e8u;  // (from the original)
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_002fe9dc(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r4 - 8u;
        t = u64(0u) + ~0u + u32(r4 >= 8u);
        guest::preempt();
    } while (!u32(t >> 0x20));  // (from the original)
L_18a0b4:;
    r0 = r13;
    r13 = r13 + 0x308u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00189e2c
GUEST_EXPORT(0x00189e2c, d_00189e2c::f_00189e2c);

// f_0018a390: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018a390 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)

u32 f_0018a390() {
    u32 r0 = 0;
    u32 r1 = 0;
    r1 = 0x95bfdcu;  // (from the original)
    r0 = 0x94d748u;  // (from the original)
    return call_002fc8e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0018a390
GUEST_EXPORT(0x0018a390, d_0018a390::f_0018a390);

// f_0018c1c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018c1c0 {

struct __attribute__((packed)) Object_0018c1c0_0 {
    u8 unknown_0[0x8dc];  // (not used here)
    u8 byte_8dc;
};
GUEST_OFFSET(Object_0018c1c0_0, byte_8dc, 0x8dc);  // (from the original)

inline constexpr guest::Function<0x00203554, u32(u32, u32, u32, u32)> call_00203554;  // (from the original)
inline constexpr guest::Function<0x002d50b8, u32(u32, u32, u32, u32)> call_002d50b8;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x004e9f00, u32(u32, u32, u32, u32)> call_004e9f00;  // (from the original)
inline constexpr guest::Function<0x005359fc, u32(u32, u32, u32, u32)> call_005359fc;  // (from the original)
inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> call_00584074;  // (from the original)
inline constexpr guest::Function<0x0058aee8, u32(u32, u32, u32, u32)> call_0058aee8;  // (from the original)
inline constexpr guest::Function<0x006f9c08, u32(u32, u32, u32, u32)> call_006f9c08;  // (from the original)

u32 f_0018c1c0(gptr<Object_0018c1c0_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x28u;  // (from the original)
    r5 = r1;
    r0 = u32(arg0->byte_8dc);
    r6 = r2;
    r7 = r3;
    r8 = ~0u;
    if (r0 == 0) {
        goto L_18c2b0;
    }
    r0 = 0x2fu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005359fc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r0 + 4u);
    if (!u32(r0 >= r5) || u32(r0 == r5)) {
        goto L_18c2b0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00584074(r0, r1, r2, r3);
    r9 = 0u;
    r3 = 5u;
    r2 = r5;
    r1 = 0xdu;  // (from the original)
    *gptr<u32>(r13) = u32(r9);
    *gptr<u32>(r13 + 4u) = u32(r9);
    guest::cpu()->r[13] = r13;
    r0 = call_0058aee8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r6 == 0) {
        goto L_18c2ac;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_006f9c08(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_18c2ac;
    }
    r2 = 0x95bfdcu;  // (from the original)
    r1 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_002d50b8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(0x94f310u);  // (from the original)
    if (r0 != 0) {
        r3 = ~0u;
        r6 = r3;
        ea = r0 + 0x850u;  // (from the original)
        *gptr<u32>(ea) = u32(r3);
        *gptr<u32>(ea + 4) = u32(r6);
        r1 = 0u;
        *gptr<u8>(r0 + 0x860u) = u8(r1);  // (from the original)
        r2 = r1;
        ea = r0 + 0x858u;  // (from the original)
        *gptr<u32>(ea) = u32(r1);
        *gptr<u32>(ea + 4) = u32(r2);
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00203554(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r5 = r0;
    if (r0 == 0) {
        goto L_18c2ac;
    }
    r2 = 0u;
    r3 = r2;
    *gptr<u32>(r13) = u32(0x95bfdcu);  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_004e9f00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r5 + 9u) = u8(r8);
L_18c2ac:;
    *gptr<u8>(r4 + 0x8dcu) = u8(r9);  // (from the original)
L_18c2b0:;
    if (r7 != 0) {
        *gptr<u8>(r4 + 0x8ddu) = u8(r8);  // (from the original)
        *gptr<u8>(r4 + 0x8deu) = u8(r8);  // (from the original)
    }
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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

inline constexpr guest::Function<0x005707f0, u32(u32, u32, u32, u32)> call_005707f0;  // (from the original)

u32 f_0018caf0(gptr<Object_0018caf0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    float S0 = 0;
    arg0->byte_308 = u8(1u);
    r1 = 0x1fu;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x18cb04u));  // (from the original)
    guest::cpu()->s[0] = S0;
    return call_005707f0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0018caf0
GUEST_EXPORT(0x0018caf0, d_0018caf0::f_0018caf0);

// f_0018d350: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018d350 {

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
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    u32 cf = 0;
    r13 = r13 - 0x58u;  // (from the original)
    zf = r0 == 0;
    r8 = r0;
    r0 = 0x95debcu;  // (from the original)
    r6 = *gptr<u32>(r0);
    if (!zf) {
        zf = r6 == 0;
    }
    if (zf) {
        goto L_18d520;
    }
    r0 = *gptr<u32>(0x95386cu);  // (from the original)
    r4 = u32(s32(s8(*gptr<u8>(r0 + 0x9au))));  // (from the original)
    res = r4;
    if (res >> 0x1f != (r4 & (r4 ^ res)) >> 0x1f) {  // (from the original)
        goto L_18d520;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4;
    r0 = r0 + 0x292a4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003009a8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_18d520;
    }
    r0 = u32(*gptr<u16>(r0 + 0x2cu));  // (from the original)
    r1 = *gptr<u32>(0xa83af0u);  // (from the original)
    zf = r1 == 0;
    cf = r1 >= 0u;
    if (!zf) {
        r2 = 0x18fu;  // (from the original)
        zf = r2 == r0;
        cf = r2 >= r0;
    }
    if (!cf || zf) {
        goto L_18d520;
    }
    r0 = r0 + (r0 << 4);
    res = r1 + (r0 << 1);
    r4 = res;
    if (res == 0) {
        goto L_18d520;
    }
    r0 = r13;
    r9 = r13 + 0x38u;  // (from the original)
    *gptr<u16>(r13 + 0x38u) = u16(u32(*gptr<u16>(r4)));  // (from the original)
    r2 = 9u;
    r1 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = 0x90a3e8u;  // (from the original)
    *gptr<u32>(r0) = u32(r7);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0 - 0xcu;  // (from the original)
    r1 = 0x12u;  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r1 = 0x8906ecu;  // (from the original)
    r0 = r5 + 0x18u;  // (from the original)
    *gptr<u16>(r5 + 0x18u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    r2 = 4u;
    do {
L_18d410:;
        ea = r1;
        r3 = u32(*gptr<u16>(ea));
        res = r2 - 1u;
        r2 = res;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r3);
        ea = r1;
        r3 = u32(*gptr<u16>(ea));
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r3);
        r0 = ea;
        guest::preempt();
    } while (res != 0);
    r0 = r5;
    r1 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_0056d874(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0u;
    r1 = r13;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_005f1294(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0u;
    r1 = u32(*gptr<u8>(r4 + 0x1du)) >> 4;  // (from the original)
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_00300914(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = u32(s32(s8(*gptr<u8>(r4 + 3u))));
    r2 = 0u;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_00300924(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005fcfd8(r0, r1, r2, r3);
    r5 = 0u;
    r3 = r4 + 0x10u;  // (from the original)
    r2 = 0x18d540u;  // (from the original)
    r1 = r13 + 0x2cu;  // (from the original)
    r0 = r6;
    *gptr<u8>(r4 + 0x13u) = u8(r5);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0075c348(r0, r1, r2, r3);
    r3 = 0u;
    r2 = 0xcu;  // (from the original)
    r1 = r13 + 0x2cu;  // (from the original)
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_005f11b4(r0, r1, r2, r3);
    r3 = r4 + 0x18u;  // (from the original)
    r2 = 0x18d550u;  // (from the original)
    r1 = r13 + 0x2cu;  // (from the original)
    r0 = r6;
    *gptr<u8>(r4 + 0x1bu) = u8(r5);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0075c348(r0, r1, r2, r3);
    r3 = 0u;
    r2 = 0xau;  // (from the original)
    r1 = r13 + 0x2cu;  // (from the original)
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_005f11b4(r0, r1, r2, r3);
    r3 = r4 + 0x14u;  // (from the original)
    r2 = 0x18d560u;  // (from the original)
    r1 = r13 + 0x2cu;  // (from the original)
    r0 = r6;
    *gptr<u8>(r4 + 0x17u) = u8(r5);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0075c348(r0, r1, r2, r3);
    r3 = 0u;
    r2 = 0xbu;  // (from the original)
    r1 = r13 + 0x2cu;  // (from the original)
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_005f11b4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r13) = u32(r7);
    r0 = r13;
L_18d520:;
    r13 = r13 + 0x58u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0018d350
GUEST_EXPORT(0x0018d350, d_0018d350::f_0018d350);

// f_0018e6bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018e6bc {


u32 f_0018e6bc(u32 r0, u32 r1, u32 r2) {
    r0 = r0 + 8u;
    if (r2 < 7u) {
        r2 = r2 + (r2 << 5);
        r0 = r0 + ((r2 << 3) - r2 << 3);
    }
    if (r1 < 7u) {
        r1 = r1 + (r1 << 5);
        r0 = r0 + (r1 << 3);
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0018e6bc
GUEST_EXPORT(0x0018e6bc, d_0018e6bc::f_0018e6bc);

// f_0018e6e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018e6e4 {

inline constexpr guest::Function<0x0031758c, u32(u32, u32, u32, u32)> call_0031758c;  // (from the original)

u32 f_0018e6e4(u32 r0, u32 r1, u32 r2) {
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r12 = r2;
    if (r1 == 0) {
        r0 = 0u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    *gptr<u32>(r13 + 0xcu) = u32(0x18e730u);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(0x9047f8u);  // (from the original)
    r4 = 0u;
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4) = u32(r4);
    r2 = r1;
    r3 = r13 + 8u;
    r1 = r12;
    guest::cpu()->r[13] = r13;
    r0 = call_0031758c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0018e6e4
GUEST_EXPORT(0x0018e6e4, d_0018e6e4::f_0018e6e4);

// f_0018e944: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018e944 {

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x005673c8, u32(u32, u32, u32, u32)> call_005673c8;  // (from the original)

u32 f_0018e944(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_005673c8(r0, r1, r2, r3);
    r2 = 0x738u;  // (from the original)
    r1 = 0x561f0cu;  // (from the original)
    r0 = r0 + 8u;
    r3 = 7u;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 8u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0018e944
GUEST_EXPORT(0x0018e944, d_0018e944::f_0018e944);

// f_0018e970: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018e970 {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x00317dec, u32(u32, u32, u32, u32)> call_00317dec;  // (from the original)

u32 f_0018e970(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r2 = 0x738u;  // (from the original)
    r1 = 0x561f20u;  // (from the original)
    r0 = r0 + 8u;
    r3 = 7u;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    return call_00317dec(r0, r1, r2, r3);
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

inline constexpr guest::Function<0x008161b8, u32(u32, u32, u32, u32)> call_008161b8;  // (from the original)

u32 f_0018e9ac(gptr<Object_0018e9ac_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->byte_31c = u8(1u);
    r1 = *gptr<u32>(0x845f48u);  // (from the original)
    r2 = *gptr<u32>(0x845f48u + 4);  // (from the original)
    r0 = call_008161b8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0018e9ac
GUEST_EXPORT(0x0018e9ac, d_0018e9ac::f_0018e9ac);

// f_0018eab0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018eab0 {

inline constexpr guest::Function<0x008161b8, u32(u32, u32, u32, u32)> call_008161b8;  // (from the original)

u32 f_0018eab0() {
    u32 r1 = 0;
    u32 r2 = 0;
    guest::cpu()->r[13] -= 8u;
    r1 = *gptr<u32>(0x845f50u);  // (from the original)
    r2 = *gptr<u32>(0x845f50u + 4);  // (from the original)
    call_008161b8(guest::cpu()->r[0], r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
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
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = u32(arg0->byte_31c);
    if (r0 != 1u) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_001323bc(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 1u;
    r1 = r4 + 0x24u;  // (from the original)
    r0 = call_00569e6c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = *gptr<u32>(r4 + 0x318u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_002b7cb0(r0, r1, r2, guest::cpu()->r[3]);
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


u32 f_0018ef38(gptr<Object_0018ef38_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r1 = 0x845f38u;  // (from the original)
    r3 = arg0->word_c;
    r2 = *gptr<u32>(r1);
    r1 = *gptr<u32>(r1 + 4u);
    if (r3 != r2) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r3 == 0) {
        if (((arg0->word_10 | r1) & 1u) == 0) {
            r0 = 1u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    if (*gptr<u32>(r0 + 0x10u) != r1) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 1u;
    guest::cpu()->r[1] = r1;
    return r0;
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

inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)
inline constexpr guest::Function<0x00569ab8, u32(u32, u32, u32, u32)> call_00569ab8;  // (from the original)

u32 f_0018ef88(gptr<Object_0018ef88_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = 0u;
    arg0->word_4 = u32(r4);
    arg0->byte_8 = u8(r4);
    r2 = *gptr<u32>(0x845f58u + 4);  // (from the original)
    r3 = r0 + 0xcu;  // (from the original)
    arg0->word_c = u32(*gptr<u32>(0x845f58u));  // (from the original)
    arg0->word_10 = u32(r2);
    arg0->word_14 = u32(r4);
    r1 = 0x8eaca8u;  // (from the original)
    arg0->byte_18 = u8(r4);
    arg0->word_1c = u32(r4);
    arg0->word_0 = u32(r1);
    arg0->word_20 = u32(r4);
    r0 = r0 + 0x24u;  // (from the original)
    r0 = call_00125e3c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x14cu;  // (from the original)
    r0 = call_00569ab8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x158u;  // (from the original)
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x2f0u;  // (from the original)
    *gptr<u32>(r0 + 0x318u) = u32(r4);  // (from the original)
    *gptr<u8>(r0 + 0x31cu) = u8(r4);  // (from the original)
    *gptr<u8>(r0 + 0x31du) = u8(r4);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0018ef88
GUEST_EXPORT(0x0018ef88, d_0018ef88::f_0018ef88);

// f_0018f64c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018f64c {

inline constexpr guest::Function<0x00825aa4, u32(u32, u32, u32, u32)> call_00825aa4;  // (from the original)

u32 f_0018f64c(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    if (r1 >= 4u) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = (r1 << 4) - r1;
    r4 = r0 + 0x14u + (r1 << 3);  // (from the original)
    if (*gptr<u32>(r4 + 0x44u) != r2) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    *gptr<u8>(r4 + 0x30u) = u8(0x13u);  // (from the original)
    r0 = r4 + 0x44u;  // (from the original)
    r0 = call_00825aa4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r4 + 0x4cu;  // (from the original)
    r0 = call_00825aa4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r4 + 0x72u) = u8(0u);  // (from the original)
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0018f64c
GUEST_EXPORT(0x0018f64c, d_0018f64c::f_0018f64c);

// f_0018f6a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018f6a0 {

inline constexpr guest::Function<0x001c987c, u32(u32, u32, u32, u32)> call_001c987c;  // (from the original)

u32 f_0018f6a0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::cpu()->r[13] -= 8u;
    if (r1 >= 4u) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r0 + 0x14u + ((r1 << 4) - r1 << 3);  // (from the original)
    r1 = *gptr<u32>(r0 + 0x44u);  // (from the original)
    if (r1 != r2) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r3;
    r0 = call_001c987c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0018f6a0
GUEST_EXPORT(0x0018f6a0, d_0018f6a0::f_0018f6a0);

// f_0018f6dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018f6dc {


u32 f_0018f6dc(u32 r0, u32 r1, u32 r2, u32 r3) {
    if (r1 >= 4u) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r0 + 0x14u + ((r1 << 4) - r1 << 3);  // (from the original)
    r1 = *gptr<u32>(r0 + 0x44u);  // (from the original)
    if (r1 == r2) {
        *gptr<u8>(r0 + 0x70u) = u8(r3);  // (from the original)
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0018f6dc
GUEST_EXPORT(0x0018f6dc, d_0018f6dc::f_0018f6dc);

// f_0018f898: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018f898 {

inline constexpr guest::Function<0x002b8090, u32(u32, u32, u32, u32)> call_002b8090;  // (from the original)

u32 f_0018f898(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    r12 = *gptr<u32>(r13 + 8u);
    if (r1 >= 4u) {
        r0 = 0u;
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = r0 + 0x14u + ((r1 << 4) - r1 << 3);  // (from the original)
    r1 = *gptr<u32>(r0 + 0x44u);  // (from the original)
    if (r1 != r2) {
        r0 = 0u;
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r2 = r12;
    r1 = r3;
    r0 = r0 + 0x5cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002b8090(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0018f898
GUEST_EXPORT(0x0018f898, d_0018f898::f_0018f898);

// f_0018f8e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018f8e0 {


u32 f_0018f8e0(u32 r0, u32 r1, u32 r2, u32 r3) {
    if (r1 >= 4u) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r0 + 0x14u + ((r1 << 4) - r1 << 3);  // (from the original)
    r1 = *gptr<u32>(r0 + 0x44u);  // (from the original)
    if (r1 == r2) {
        *gptr<u8>(r0 + 0x31u) = u8(r3);  // (from the original)
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0018f8e0
GUEST_EXPORT(0x0018f8e0, d_0018f8e0::f_0018f8e0);

// f_0018fb98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018fb98 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)

u32 f_0018fb98(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r5 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    if (r1 >= 4u) {
        goto L_18fbd8;
    }
    r1 = (r1 << 4) - r1;
    r4 = r0 + 0x14u + (r1 << 3);  // (from the original)
    if (*gptr<u32>(r4 + 0x44u) != r2) {  // (from the original)
        goto L_18fbd8;
    }
    r1 = r3;
    r0 = r4 + 0x6cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    *gptr<u8>(r4 + 0x70u) = u8(r5);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_18fbd8:;
    r0 = 0u;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0018fb98
GUEST_EXPORT(0x0018fb98, d_0018fb98::f_0018fb98);
