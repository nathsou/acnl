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
GUEST_OFFSET(Object_007c28f0_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_007c28f0_0, word_20, 0x20);  // (from the original)

inline constexpr guest::Function<0x0012de78, u32(u32, u32, u32, u32)> call_0012de78;  // (from the original)
inline constexpr guest::Function<0x0012ffcc, u32(u32, u32, u32, u32)> call_0012ffcc;  // (from the original)
inline constexpr guest::Function<0x0012ffdc, u32(u32, u32, u32, u32)> call_0012ffdc;  // (from the original)

u32 f_007c28f0(gptr<Object_007c28f0_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 zf = 0;
    r13 = r13 - 0x20;  // (from the original)
    r4 = r0;
    ea = r13 + 0x28u;  // (from the original)
    r5 = *gptr<u32>(ea);
    r6 = *gptr<u32>(ea + 4);
    r12 = *gptr<u32>(ea + 8);
    r9 = arg0->word_20;
    ea = r13 + 0x20u;  // (from the original)
    r7 = *gptr<u32>(ea);
    r14 = *gptr<u32>(ea + 4);
    r10 = arg0->word_18;
    r0 = r2 << 9 >> 9;
    r2 = r10 + ((r9 << 3) - r9 << 2);
    *gptr<u8>(r2) = u8(2u);
    r8 = r2 + 4u;
    *gptr<u32>(r8) = u32(r1);
    *gptr<u32>(r8 + 4) = u32(r3);
    r0 = r0 | *gptr<u32>(r2 + 0xcu) >> 0x17 << 0x17;  // (from the original)
    *gptr<u32>(r2 + 0xcu) = u32(r0);  // (from the original)
    if (r7 == 0x10u) {  // (from the original)
        *gptr<u32>(r2 + 0xcu) = u32(r0 & ~0x1800000u);  // (from the original)
        goto L_7c2978;
    }
    if (r7 == 0x18u) {  // (from the original)
        r0 = r0 & ~0x1800000u | 0x800000u;  // (from the original)
        goto L_7c2974;
    }
    if (r7 == 0x20u) {  // (from the original)
        r0 = r0 & ~0x1800000u | 0x1000000u;  // (from the original)
    } else {
        goto L_7c2978;
    }
L_7c2974:;
    *gptr<u32>(r2 + 0xcu) = u32(r0);  // (from the original)
L_7c2978:;
    zf = r12 == 0x10u;  // (from the original)
    r1 = r5 << 9 >> 9;
    r0 = *gptr<u32>(r2 + 0x18u) >> 0x17 << 0x17 | r1;  // (from the original)
    *gptr<u32>(r2 + 0x18u) = u32(r0);  // (from the original)
    *gptr<u32>(r2 + 0x14u) = u32(r6);  // (from the original)
    if (zf) {
        r0 = r0 & ~0x1800000u;  // (from the original)
    }
    *gptr<u32>(r2 + 0x10u) = u32(r14);  // (from the original)
    if (zf) {
        *gptr<u32>(r2 + 0x18u) = u32(r0);  // (from the original)
        goto L_7c29d0;
    }
    if (r12 == 0x18u) {  // (from the original)
        r0 = r0 & ~0x1800000u | 0x800000u;  // (from the original)
        goto L_7c29cc;
    }
    if (r12 == 0x20u) {  // (from the original)
        r0 = r0 & ~0x1800000u | 0x1000000u;  // (from the original)
    } else {
        goto L_7c29d0;
    }
L_7c29cc:;
    *gptr<u32>(r2 + 0x18u) = u32(r0);  // (from the original)
L_7c29d0:;
    guest::cpu()->r[13] = r13;
    r0 = call_0012ffcc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 0xadf8c0u;  // (from the original)
    *gptr<u32>(r4 + 0x20u) = u32(*gptr<u32>(r4 + 0x20u) + 1u);  // (from the original)
    r1 = *gptr<u32>(r0 + 0xa0u);  // (from the original)
    if (r1 != r4) {
        goto L_7c2a18;
    }
    r1 = u32(*gptr<u8>(r0 + 0x12u));  // (from the original)
    if (r1 == 0) {
        goto L_7c2a18;
    }
    r1 = u32(*gptr<u8>(r0 + 0x11u));  // (from the original)
    if (r1 != 0) {
        goto L_7c2a18;
    }
    r1 = 1u;
    *gptr<u8>(r0 + 0x11u) = u8(r1);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0012de78(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_7c2a18:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0012ffdc(r0, r1, r2, r3);
}

}  // namespace d_007c28f0
GUEST_EXPORT(0x007c28f0, d_007c28f0::f_007c28f0);

// f_007c513c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007c513c {

struct __attribute__((packed)) Object_007c513c_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_007c513c_0, half_0, 0x0);  // (from the original)


u32 f_007c513c(gptr<Object_007c513c_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = 0u;
    if (u32(arg0->half_0) == 0) {
        r0 = r1;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    do {
L_7c514c:;
        ea = r0 + 2u;
        r0 = ea;
        r1 = r1 + 1u;
        guest::preempt();
    } while (u32(*gptr<u16>(ea)) != 0);
    r0 = r1;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_007c513c
GUEST_EXPORT(0x007c513c, d_007c513c::f_007c513c);

// f_007c5518: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007c5518 {

struct __attribute__((packed)) Object_007c5518_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_007c5518_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_007c5518_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_007c5518_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_007c5518_1, word_c, 0xc);  // (from the original)


u32 f_007c5518(u32 r0, gptr<Object_007c5518_1> arg1) {
    u32 ea = 0;
    u32 res = 0;
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 nf = 0;
    u32 vf = 0;
    float S0 = 0;
    r13 = r13 - 0xc;  // (from the original)
    r3 = *gptr<u32>(0x97d784u);  // (from the original)
    r2 = r3 + (r0 << 4);
    *gptr<u32>(r2 + 0x298u) = u32(std::bit_cast<u32>(std::bit_cast<float>(arg1->word_0)));  // (from the original)
    *gptr<u32>(r2 + 0x29cu) = u32(std::bit_cast<u32>(std::bit_cast<float>(arg1->word_4)));  // (from the original)
    *gptr<u32>(r2 + 0x2a0u) = u32(std::bit_cast<u32>(std::bit_cast<float>(arg1->word_8)));  // (from the original)
    *gptr<u32>(r2 + 0x2a4u) = u32(std::bit_cast<u32>(std::bit_cast<float>(arg1->word_c)));  // (from the original)
    r2 = std::bit_cast<u32>(std::bit_cast<float>(arg1->word_0));
    res = r2 & ~0x80000000u;  // (from the original)
    r12 = res;
    if (res != 0) {
        r12 = (r2 << 1 >> 0x18) - 0x40u;  // (from the original)
    }
    nf = r12 >> 0x1f;  // (from the original)
    vf = 0u;
    r4 = r2 << 9 >> 0x10;  // (from the original)
    r2 = r2 >> 0x1f;  // (from the original)
    if (nf == vf) {
        r4 = r4 | r12 << 0x10 | r2 << 0x17;  // (from the original)
    }
    if (nf != vf) {
        r4 = r2 << 0x17;  // (from the original)
    }
    r2 = std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r1 + 4u)));
    res = r2 & ~0x80000000u;  // (from the original)
    r12 = res;
    if (res != 0) {
        r12 = (r2 << 1 >> 0x18) - 0x40u;  // (from the original)
    }
    nf = r12 >> 0x1f;  // (from the original)
    vf = 0u;
    r5 = r2 << 9 >> 0x10;  // (from the original)
    r2 = r2 >> 0x1f;  // (from the original)
    if (nf == vf) {
        r12 = r5 | r12 << 0x10 | r2 << 0x17;  // (from the original)
    }
    if (nf != vf) {
        r12 = r2 << 0x17;  // (from the original)
    }
    r2 = std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r1 + 8u)));
    res = r2 & ~0x80000000u;  // (from the original)
    r5 = res;
    if (res != 0) {
        r5 = (r2 << 1 >> 0x18) - 0x40u;  // (from the original)
    }
    res = r5;
    nf = res >> 0x1f;  // (from the original)
    vf = (r5 & (r5 ^ res)) >> 0x1f;  // (from the original)
    r6 = r2 << 9 >> 0x10;  // (from the original)
    r2 = r2 >> 0x1f;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r1 + 0xcu));  // (from the original)
    if (nf == vf) {
        r2 = r6 | r5 << 0x10 | r2 << 0x17;  // (from the original)
    }
    r1 = std::bit_cast<u32>(S0);
    if (nf != vf) {
        r2 = r2 << 0x17;  // (from the original)
    }
    res = r1 & ~0x80000000u;  // (from the original)
    r5 = res;
    if (res != 0) {
        r5 = (r1 << 1 >> 0x18) - 0x40u;  // (from the original)
    }
    nf = r5 >> 0x1f;  // (from the original)
    vf = 0u;
    r6 = r1 << 9 >> 0x10;  // (from the original)
    r1 = r1 >> 0x1f;  // (from the original)
    if (nf == vf) {
        r1 = r6 | r5 << 0x10 | r1 << 0x17;  // (from the original)
    }
    if (nf != vf) {
        r1 = r1 << 0x17;  // (from the original)
    }
    r1 = r2 >> 0x10 | r1 << 8;  // (from the original)
    ea = r3 + (r0 + (r0 << 1) << 2) + 0x398u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r12 << 8 >> 0x10 | r2 << 0x10);  // (from the original)
    *gptr<u32>(ea + 8) = u32(r4 | r12 << 0x18);  // (from the original)
    r0 = *gptr<u32>(r3) | 0x80u;  // (from the original)
    *gptr<u32>(r3) = u32(r0);
    r13 = r13 + 0xc;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_007c5518
GUEST_EXPORT(0x007c5518, d_007c5518::f_007c5518);

// f_007c5cd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007c5cd0 {

struct __attribute__((packed)) Object_007c5cd0_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_007c5cd0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_007c5cd0_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_007c5cd0_0, word_8, 0x8);  // (from the original)


u32 f_007c5cd0(gptr<Object_007c5cd0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    r1 = 0x9751b8u;  // (from the original)
    S2 = std::bit_cast<float>(arg0->word_0);
    S0 = std::bit_cast<float>(arg0->word_4);
    S1 = std::bit_cast<float>(arg0->word_8);
    if (u32(*gptr<u8>(r1 + 2u)) != 0) {
        S2 = -S2;
    }
    if (u32(*gptr<u8>(r1)) != 0) {
        S0 = -S0;
    }
    if (u32(*gptr<u8>(r1 + 1u)) != 0) {
        S1 = -S1;
    }
    *gptr<u32>(r0 + (u32(*gptr<u8>(r1 + 5u)) << 2)) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r0 + (u32(*gptr<u8>(r1 + 3u)) << 2)) = u32(std::bit_cast<u32>(S0));
    r1 = u32(*gptr<u8>(r1 + 4u));
    r0 = r0 + (r1 << 2);
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S1));
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_007c5cd0
GUEST_EXPORT(0x007c5cd0, d_007c5cd0::f_007c5cd0);

// f_007c7610: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007c7610 {

inline constexpr guest::Function<0x001b02c0, u32(u32, u32, u32, u32)> call_001b02c0;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_007c7610(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_001b02c0(r0, r1, r2, r3);
    r3 = 8u;
    r2 = 0x1cu;  // (from the original)
    *gptr<u32>(r0) = u32(0x8eb1a8u);  // (from the original)
    r0 = r0 + 0xaecu;  // (from the original)
    r1 = 0x1c81a8u;  // (from the original)
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = 0x2b6de0u;  // (from the original)
    r3 = 8u;
    r2 = 0xe0u;  // (from the original)
    r0 = r0 + 0xe0u;  // (from the original)
    r0 = call_00301d0c(r0, r1, r2, r3);
    r0 = r0 - 0xbccu;  // (from the original)
    r1 = 8u;
    *gptr<u32>(r0 + 0x9c0u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x220u) = u32(r0 + 0xaecu);  // (from the original)
    *gptr<u32>(r0 + 0x9fcu) = u32(r0 + 0xbccu);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_007c7610
GUEST_EXPORT(0x007c7610, d_007c7610::f_007c7610);

// f_007c769c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007c769c {

inline constexpr guest::Function<0x00314a1c, u32(u32, u32, u32, u32)> call_00314a1c;  // (from the original)
inline constexpr guest::Function<0x00314a9c, u32(u32, u32, u32, u32)> call_00314a9c;  // (from the original)
inline constexpr guest::Function<0x00314b04, u32(u32, u32, u32, u32)> call_00314b04;  // (from the original)
inline constexpr guest::Function<0x00314b58, u32(u32, u32, u32, u32)> call_00314b58;  // (from the original)

u32 f_007c769c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    ea = r13 - 0x14;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r14);  // (from the original)
    r13 = r13 - 0x58u;  // (from the original)
    r5 = r0;
    r4 = r2;
    r6 = r1;
    r0 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00314a9c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r13 + 0x20u;  // (from the original)
    r1 = r6;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00314a1c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r13;
    r1 = r6;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00314b04(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_7c7720;
    }
    do {
L_7c76e0:;
        if (!(r4 != *gptr<u32>(r7 + 0x14u))) {  // (from the original)
            ea = r13 + 0x20u;  // (from the original)
            r0 = *gptr<u32>(ea);
            r1 = *gptr<u32>(ea + 4);
            r2 = *gptr<u32>(ea + 8);
            r3 = *gptr<u32>(ea + 0xc);  // (from the original)
            r4 = *gptr<u32>(ea + 0x10);  // (from the original)
            r12 = *gptr<u32>(ea + 0x14);  // (from the original)
            goto L_7c7724;
        }
        r0 = r7;
        guest::cpu()->r[13] = r13;
        r0 = call_00314b58(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r6;
        r0 = r7;
        guest::cpu()->r[13] = r13;
        r0 = call_00314b04(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::preempt();
    } while (r0 != 0);
L_7c7720:;
    r0 = *gptr<u32>(r13);
    r1 = *gptr<u32>(r13 + 4);
    r2 = *gptr<u32>(r13 + 8);
    r3 = *gptr<u32>(r13 + 0xc);  // (from the original)
    r4 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r12 = *gptr<u32>(r13 + 0x14);  // (from the original)
L_7c7724:;
    ea = r5;
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    *gptr<u32>(ea + 0xc) = u32(r3);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r4);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r12);  // (from the original)
    r0 = r13 + 0x20u;  // (from the original)
    r13 = r13 + 0x44u;  // (from the original)
    ea = r13;
    r13 = r13 + 0x14;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_007c769c
GUEST_EXPORT(0x007c769c, d_007c769c::f_007c769c);

// f_007cfab8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007cfab8 {

struct __attribute__((packed)) Object_007cfab8_0 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_007cfab8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_007cfab8_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_007cfab8_0, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x00321af8, u32(u32, u32, u32, u32)> call_00321af8;  // (from the original)

u32 f_007cfab8(gptr<Object_007cfab8_0> arg0, u32 r1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = 0u;
    if (arg0->word_0 == 0) {
        goto L_7cfb24;
    }
    r4 = arg0->word_c;
    if (s32(r4) >= s32(0x80u)) {  // (from the original)
        goto L_7cfb04;
    }
    if (r1 + 1u == 0) {
        goto L_7cfb24;
    }
    r3 = arg0->word_4;
    if (r3 != r1) {
        goto L_7cfb0c;
    }
    res = r0 + 4u;
    r3 = res;
    if (res == 0) {
        goto L_7cfb0c;
    } else {
        r0 = r4;
    }
L_7cfafc:;
    if (s32(r0) >= s32(r4)) {
        goto L_7cfb24;
    }
L_7cfb04:;
    r0 = ~0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_7cfb0c:;
    r2 = r1;
    r1 = 0x98288cu;  // (from the original)
    r0 = call_00321af8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = *gptr<u32>(0x982898u);  // (from the original)
    guest::preempt();
    goto L_7cfafc;
L_7cfb24:;
    r0 = r5;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_007cfab8
GUEST_EXPORT(0x007cfab8, d_007cfab8::f_007cfab8);
