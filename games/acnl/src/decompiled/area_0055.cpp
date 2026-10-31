// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_005500a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005500a0 {

struct __attribute__((packed)) Object_005500a0_0 {
    u8 unknown_0[0x428];  // (not used here)
    u32 word_428;
    u8 unknown_42c[0x428];  // (not used here)
    u32 word_854;
};
GUEST_OFFSET(Object_005500a0_0, word_428, 0x428);  // (from the original)
GUEST_OFFSET(Object_005500a0_0, word_854, 0x854);  // (from the original)

inline constexpr guest::Function<0x0055030c, u32(u32, u32, u32, u32)> call_0055030c;  // (from the original)

u32 f_005500a0(gptr<Object_005500a0_0> arg0, u32 r1, u32 r2, float S0) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    r13 = r13 - 0x18;  // (from the original)
    r5 = r0 + 0x83cu;  // (from the original)
    r6 = 0x2614u;  // (from the original)
    r3 = arg0->word_428;
    r12 = arg0->word_854;
    r14 = 0u;
L_5500bc:;
    r4 = *gptr<u32>(r0 + 0x83cu) + 1u & r12;  // (from the original)
    *gptr<u32>(r5) = u32(r4);
    r7 = r4 * 0x4d1u;  // (from the original)
    if (*gptr<u32>(r3 + (r6 + (r7 << 3))) != 0) {
        r4 = *gptr<u32>(r0 + 0x848u);  // (from the original)
        r14 = r14 + 1u;
        res = r4 - r14;
        if (!u32(res == 0) && res >> 0x1f == ((r4 ^ r14) & (r4 ^ res)) >> 0x1f) {  // (from the original)
            guest::preempt();
            goto L_5500bc;
        }
        r1 = 0x5501ccu;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0 = call_0055030c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        r0 = 0u;
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    ea = r0 + 0x83cu;  // (from the original)
    r4 = *gptr<u32>(ea);
    ea = r1 + 8u;
    r12 = 0u;
    r5 = r4 * 0x4d1u;  // (from the original)
    r14 = r0 + (*gptr<u32>(ea) << 2);
    r4 = r14;
    r0 = r3 + (r5 << 3);
    ea = r14 + 0x42cu;  // (from the original)
    r14 = ea;
    r3 = *gptr<u32>(ea);
    if (r3 == 0) {
        goto L_5501b0;
    }
    *gptr<u32>(r3 + 0x2680u) = u32(r0);  // (from the original)
    r3 = r0 + 0x2680u;  // (from the original)
    *gptr<u32>(0x2684u + r0) = u32(*gptr<u32>(r14));  // (from the original)
    *gptr<u32>(r14) = u32(r0);
L_55014c:;
    *gptr<u32>(r3) = u32(r12);
    r3 = 0x260cu;  // (from the original)
    *gptr<u32>(r0 + 8u) = u32(r12);
    *gptr<u32>(r0) = u32(r2);
    *gptr<u32>(r0 + 4) = u32(r12);
    *gptr<u32>(r3 + r0) = u32(r12);
    r5 = r3 + 4u;
    r14 = r3 + 0xcu;  // (from the original)
    *gptr<u32>(r3 + 8u + r0) = u32(*gptr<u32>(r1 + 0xa8u));  // (from the original)
    r3 = 0xaf78f0u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x5501fcu));  // (from the original)
    r4 = r0 + 0x2400u;  // (from the original)
    *gptr<u32>(r5 + r0) = u32(*gptr<u32>(r1 + 8u));
    *gptr<u32>(r14 + r0) = u32(r12);
    *gptr<u32>(r4 + 0x240u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r4 + 0x23cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0x4cu) = u32(*gptr<u32>(r3));  // (from the original)
    *gptr<u32>(r0 + 0x50u) = u32(*gptr<u32>(r3 + 4u));  // (from the original)
    r1 = *gptr<u32>(r3 + 8u);
    *gptr<u32>(r0 + 0x54u) = u32(r1);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
L_5501b0:;
    *gptr<u32>(r4 + 0x42cu) = u32(r0);  // (from the original)
    r3 = r0 + 0x2680u;  // (from the original)
    *gptr<u32>(0x2684u + r0) = u32(r12);  // (from the original)
    guest::preempt();
    goto L_55014c;
}

}  // namespace d_005500a0
GUEST_EXPORT(0x005500a0, d_005500a0::f_005500a0);

// f_00550204: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00550204 {

inline constexpr guest::Function<0x0014f004, u32(u32, u32, u32, u32)> call_0014f004;  // (from the original)
inline constexpr guest::Function<0x00555f90, u32(u32, u32, u32, u32)> call_00555f90;  // (from the original)

u32 f_00550204(u32 r0, u32 r1, u32 r2, float S0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x40u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = r13;
    r1 = r2;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0014f004(r0, r1, r2, guest::cpu()->r[3]);
    S0 = std::bit_cast<float>(*gptr<u32>(0x550248u));  // (from the original)
    r2 = r13;
    *gptr<u32>(r13 + 0x2cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r13 + 0x1cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r0 = *gptr<u32>(r4 + 0x87cu);  // (from the original)
    r1 = r5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00555f90(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_00550204
GUEST_EXPORT(0x00550204, d_00550204::f_00550204);

// f_005504e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005504e8 {

struct __attribute__((packed)) Object_005504e8_0 {
    u8 unknown_0[0x87c];  // (not used here)
    u32 word_87c;
};
GUEST_OFFSET(Object_005504e8_0, word_87c, 0x87c);  // (from the original)

inline constexpr guest::Function<0x00556094, u32(u32, u32, u32, u32)> call_00556094;  // (from the original)

u32 f_005504e8(gptr<Object_005504e8_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r3 = 0x60768u;  // (from the original)
    r2 = arg0->word_87c;
    r5 = 0u;
    *gptr<u32>(r2 + r3) = u32(r5);
    r0 = arg0->word_87c;
    r0 = call_00556094(r0, r1, r2, r3);
    *gptr<u32>(r4 + 0x858u) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x85cu) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x860u) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x864u) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x870u) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x874u) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x878u) = u32(r5);  // (from the original)
    *gptr<u8>(0x97e6f0u) = u8(0x1cu);  // (from the original)
    *gptr<u8>(0x97e6f1u) = u8(4u);  // (from the original)
    *gptr<u8>(0x97e6f2u) = u8(r5);  // (from the original)
    r1 = 0x97e6ecu;  // (from the original)
    *gptr<u32>(r1) = u32(r5);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005504e8
GUEST_EXPORT(0x005504e8, d_005504e8::f_005504e8);

// f_00551d94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00551d94 {

struct __attribute__((packed)) Object_00551d94_2 {
    u32 word_0;
};
GUEST_OFFSET(Object_00551d94_2, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0014f55c, u32(u32, u32, u32, u32)> call_0014f55c;  // (from the original)

u32 f_00551d94(u32 r0_unused, u32 r1, gptr<Object_00551d94_2> arg2, float S0, float S1, float S2, float S3, float S4) {
    u32 r0 = 0;
    u32 r2 = arg2.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r1;
    r5 = r2;
    r2 = arg2->word_0;
    r1 = r13 + 4u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    r0 = call_0014f55c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r0 = *gptr<u32>(r5 + 4u);
    r2 = r5;
    if (r0 != 0) {
        if (r0 == 1u) {
            goto L_551e00;
        }
        if (r0 != 2u) {
            goto L_551e4c;
        }
        goto L_551e2c;
    }
    S1 = std::bit_cast<float>(*gptr<u32>(r13 + 4u));
    S4 = std::bit_cast<float>(*gptr<u32>(r4 + 4u));
    S2 = std::bit_cast<float>(*gptr<u32>(r4 + 8u));
    S3 = std::bit_cast<float>(*gptr<u32>(r13));
    r4 = r4 + 4u;
    S0 = S4 * S1 + S2 * S3;
    S1 = S2 * S1 - S4 * S3;
    goto L_551e48;
L_551e00:;
    S1 = std::bit_cast<float>(*gptr<u32>(r13 + 4u));
    S4 = std::bit_cast<float>(*gptr<u32>(r4 + 8u));
    S3 = std::bit_cast<float>(*gptr<u32>(r4));
    S2 = std::bit_cast<float>(*gptr<u32>(r13));
    S0 = S4 * S1 + S3 * S2;
    S1 = S3 * S1 - S4 * S2;
    *gptr<u32>(r4 + 8u) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r4) = u32(std::bit_cast<u32>(S1));
    goto L_551e4c;
L_551e2c:;
    S1 = std::bit_cast<float>(*gptr<u32>(r13 + 4u));
    S2 = std::bit_cast<float>(*gptr<u32>(r13));
    S3 = std::bit_cast<float>(*gptr<u32>(r4));
    S4 = std::bit_cast<float>(*gptr<u32>(r4 + 4));
    S0 = S3 * S1 + S4 * S2;
    S1 = S4 * S1 - S3 * S2;
L_551e48:;
    *gptr<u32>(r4) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r4 + 4) = u32(std::bit_cast<u32>(S1));
L_551e4c:;
    r0 = r2 + 8u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00551d94
GUEST_EXPORT(0x00551d94, d_00551d94::f_00551d94);

// f_00551e58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00551e58 {

struct __attribute__((packed)) Object_00551e58_0 {
    u8 unknown_0[0xa8];  // (not used here)
    u32 word_a8;
};
GUEST_OFFSET(Object_00551e58_0, word_a8, 0xa8);  // (from the original)

struct __attribute__((packed)) Object_00551e58_1 {
    u8 unknown_0[0xf0];  // (not used here)
    u32 word_f0;
    u8 unknown_f4[0x4];  // (not used here)
    u32 word_f8;
    u8 unknown_fc[0x4];  // (not used here)
    u32 word_100;
    u32 word_104;
};
GUEST_OFFSET(Object_00551e58_1, word_f0, 0xf0);  // (from the original)
GUEST_OFFSET(Object_00551e58_1, word_f8, 0xf8);  // (from the original)
GUEST_OFFSET(Object_00551e58_1, word_100, 0x100);  // (from the original)
GUEST_OFFSET(Object_00551e58_1, word_104, 0x104);  // (from the original)


u32 f_00551e58(gptr<Object_00551e58_0> arg0, gptr<Object_00551e58_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    r0 = arg0->word_a8;
    r4 = r0 + 0x100u;  // (from the original)
    r0 = r0 + u32(*gptr<u16>(0x200u + r0));  // (from the original)
    r2 = u32(*gptr<u16>(r4 + 0xf8u));  // (from the original)
    S2 = std::bit_cast<float>(*gptr<u32>(r0));
    r0 = *gptr<u32>(0x97e744u) + ((arg1->word_f8 * *gptr<u32>(r0 + 8u) + std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(float(s32(std::bit_cast<u32>(std::bit_cast<float>(arg1->word_f0)))) * std::bit_cast<float>(*gptr<u32>(r0 + 4u))))) & 0x7fu) << 2);  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(r0));
    S0 = std::bit_cast<float>(*gptr<u32>(0x551ed4u)) - S1 * S2;  // (from the original)
    if ((r2 & 2u) != 0) {
        arg1->word_100 = u32(std::bit_cast<u32>(S0));
    }
    if ((r2 & 4u) != 0) {
        arg1->word_104 = u32(std::bit_cast<u32>(S0));
    }
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00551e58
GUEST_EXPORT(0x00551e58, d_00551e58::f_00551e58);

// f_00552190: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00552190 {

struct __attribute__((packed)) Object_00552190_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0xc];  // (not used here)
    u32 word_18;
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Object_00552190_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00552190_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00552190_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00552190_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_00552190_1, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_00552190_1, word_20, 0x20);  // (from the original)

struct __attribute__((packed)) Object_00552190_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_00552190_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00552190_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00552190_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00552190_2, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00552190_2, word_10, 0x10);  // (from the original)


u32 f_00552190(u32 r0_unused, gptr<Object_00552190_1> arg1, gptr<Object_00552190_2> arg2, float S0, float S1) {
    u32 r0 = 0;
    u32 r2 = arg2.addr();
    r0 = arg2->word_10;
    if ((r0 & 1u) != 0) {
        S0 = std::bit_cast<float>(arg1->word_18);
        S1 = std::bit_cast<float>(arg2->word_0);
        S0 = S0 + (std::bit_cast<float>(arg2->word_4) - std::bit_cast<float>(arg1->word_0) - S0) * S1;
        arg1->word_18 = u32(std::bit_cast<u32>(S0));
    }
    if ((r0 & 2u) != 0) {
        S0 = std::bit_cast<float>(arg1->word_1c);
        S1 = std::bit_cast<float>(arg2->word_0);
        S0 = S0 + (std::bit_cast<float>(arg2->word_8) - std::bit_cast<float>(arg1->word_4) - S0) * S1;
        arg1->word_1c = u32(std::bit_cast<u32>(S0));
    }
    if ((r0 & 4u) == 0) {
        r0 = r2 + 0x14u;  // (from the original)
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    S0 = std::bit_cast<float>(arg1->word_20);
    S1 = std::bit_cast<float>(arg2->word_0);
    S0 = S0 + (std::bit_cast<float>(arg2->word_c) - std::bit_cast<float>(arg1->word_8) - S0) * S1;
    arg1->word_20 = u32(std::bit_cast<u32>(S0));
    r0 = r2 + 0x14u;  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00552190
GUEST_EXPORT(0x00552190, d_00552190::f_00552190);

// f_0055224c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0055224c {

struct __attribute__((packed)) Object_0055224c_1 {
    u8 unknown_0[0xf0];  // (not used here)
    u32 word_f0;
};
GUEST_OFFSET(Object_0055224c_1, word_f0, 0xf0);  // (from the original)

struct __attribute__((packed)) Object_0055224c_2 {
    u32 word_0;
};
GUEST_OFFSET(Object_0055224c_2, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002f9e1c, u32(u32, u32, u32, u32)> call_002f9e1c;  // (from the original)

u32 f_0055224c(u32 r0, gptr<Object_0055224c_1> arg1, gptr<Object_0055224c_2> arg2, u32 r3, float S0, float S1, float S2, float S3, float S4, float S5, float S6, float S7, float S8) {
    u32 r1 = arg1.addr();
    u32 r2 = arg2.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r1;
    r6 = r0;
    r1 = arg2->word_0;
    r0 = arg1->word_f0;
    r5 = r2;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    guest::cpu()->s[8] = S8;
    r0 = call_002f9e1c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r1 == 0) {
        r2 = *gptr<u32>(0x97e83cu);  // (from the original)
        r0 = u32(*gptr<u16>(r6 + 0x78u));  // (from the original)
        *gptr<u16>(r6 + 0x78u) = u16(r0 + 1u);  // (from the original)
        r3 = r0 & ~0xfe00u;  // (from the original)
        r1 = r5 + 8u;
        r0 = r2 + (r3 + (r3 << 1) << 2);
        S0 = std::bit_cast<float>(*gptr<u32>(r4 + 0x18u)) + std::bit_cast<float>(*gptr<u32>(r0)) * std::bit_cast<float>(*gptr<u32>(r5 + 4u));  // (from the original)
        S2 = std::bit_cast<float>(*gptr<u32>(r4 + 0x1cu)) + std::bit_cast<float>(*gptr<u32>(r0 + 4)) * std::bit_cast<float>(*gptr<u32>(r1));  // (from the original)
        S1 = std::bit_cast<float>(*gptr<u32>(r4 + 0x20u)) + std::bit_cast<float>(*gptr<u32>(r0 + 8)) * std::bit_cast<float>(*gptr<u32>(r1 + 4));  // (from the original)
        *gptr<u32>(r4 + 0x18u) = u32(std::bit_cast<u32>(S0));  // (from the original)
        *gptr<u32>(r4 + 0x1cu) = u32(std::bit_cast<u32>(S2));  // (from the original)
        *gptr<u32>(r4 + 0x20u) = u32(std::bit_cast<u32>(S1));  // (from the original)
    }
    r0 = r5 + 0x10u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0055224c
GUEST_EXPORT(0x0055224c, d_0055224c::f_0055224c);

// f_005547e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005547e0 {

struct __attribute__((packed)) Object_005547e0_0 {
    u8 unknown_0[0xa8];  // (not used here)
    u32 word_a8;
};
GUEST_OFFSET(Object_005547e0_0, word_a8, 0xa8);  // (from the original)


u32 f_005547e0(gptr<Object_005547e0_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    if (u32(*gptr<u8>(arg0->word_a8 + 0x2du)) == 0) {  // (from the original)
        r0 = r1 + 0x6cu;  // (from the original)
    } else {
        r0 = r0 + 0x48u;  // (from the original)
    }
    return r0;
}

}  // namespace d_005547e0
GUEST_EXPORT(0x005547e0, d_005547e0::f_005547e0);

// f_00554a64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00554a64 {

struct __attribute__((packed)) Object_00554a64_0 {
    u32 word_0;
    u8 unknown_4[0x34];  // (not used here)
    u32 word_38;
    u32 word_3c;
    u32 word_40;
    u8 unknown_44[0x100];  // (not used here)
    u32 word_144;
    u32 word_148;
    u32 word_14c;
    u32 word_150;
};
GUEST_OFFSET(Object_00554a64_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00554a64_0, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_00554a64_0, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_00554a64_0, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_00554a64_0, word_144, 0x144);  // (from the original)
GUEST_OFFSET(Object_00554a64_0, word_148, 0x148);  // (from the original)
GUEST_OFFSET(Object_00554a64_0, word_14c, 0x14c);  // (from the original)
GUEST_OFFSET(Object_00554a64_0, word_150, 0x150);  // (from the original)

inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x005547f8, u32(u32, u32, u32, u32)> call_005547f8;  // (from the original)
inline constexpr guest::Function<0x00554fbc, u32(u32, u32, u32, u32)> call_00554fbc;  // (from the original)
inline constexpr guest::Function<0x00555208, u32(u32, u32, u32, u32)> call_00555208;  // (from the original)
inline constexpr guest::Function<0x0074dcac, u32(u32, u32, u32, u32)> call_0074dcac;  // (from the original)

u32 f_00554a64(gptr<Object_00554a64_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r5 = r1;
    r13 = r13 - 0x20u;  // (from the original)
    r7 = r2;
    r6 = r3;
    arg0->word_0 = u32(0x9059a0u);  // (from the original)
    r0 = r0 + 0x38u;  // (from the original)
    arg0->word_3c = u32(r0 + 0xcu);  // (from the original)
    r1 = 0x100u;  // (from the original)
    r3 = 0x8c9f1cu;  // (from the original)
    arg0->word_40 = u32(r1);
    arg0->word_38 = u32(0x90558cu);  // (from the original)
    *gptr<u8>(r1 + (arg0->word_3c - 1u)) = u8(u32(*gptr<u8>(r3)));
    r1 = r0;
    arg0->word_38 = u32(0x9050f8u);  // (from the original)
    r3 = u32(*gptr<u8>(r3));
    *gptr<u8>(arg0->word_3c) = u8(r3);
    arg0->word_38 = u32(0x9048b0u);  // (from the original)
    r0 = 0x8a3bc0u;  // (from the original)
    ea = r0;
    r2 = *gptr<u32>(ea);
    ea = r1 + 0x10cu;  // (from the original)
    arg0->word_144 = u32(r2);
    r1 = ea;
    r2 = *gptr<u32>(r0);
    arg0->word_148 = u32(r2);
    arg0->word_14c = u32(*gptr<u32>(r0));
    arg0->word_150 = u32(*gptr<u32>(0x8a3bbcu));  // (from the original)
    r0 = r1 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00554fbc(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r8 = 0u;
    ea = r0 + 0x38u;  // (from the original)
    *gptr<u32>(ea) = u32(r7);
    ea = r0 - 0x134u;  // (from the original)
    *gptr<u32>(ea) = u32(r8);
    ea = r0 - 0x150u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    *gptr<u32>(ea + 4) = u32(r6);
    r4 = r0 - 0x154u;  // (from the original)
    r6 = 0x29e8u;  // (from the original)
    r5 = r8;
    do {
L_554b1c:;
        r1 = *gptr<u32>(r4 + 4u);
        r2 = 4u;
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_002fd108(r0, r1, r2, r3);
        r1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r13) = u32(r4);
        r3 = r5;
        *gptr<u32>(r13 + 4u) = u32(r1);
        r1 = *gptr<u32>(r4 + 4u);
        r2 = r7;
        guest::cpu()->r[13] = r13;
        r0 = call_00555208(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r4 + (r5 << 2);
        r5 = r5 + 1u;
        res = r5 - 5u;
        *gptr<u32>(r1 + 0xcu) = u32(r0);  // (from the original)
        guest::preempt();
    } while (res >> 0x1f != ((r5 ^ 5u) & (r5 ^ res)) >> 0x1f);  // (from the original)
    r5 = 0u;
    *gptr<u32>(r4 + 0x20u) = u32(r8);  // (from the original)
    do {
L_554b64:;
        r6 = r4 + (r5 << 2);
        r0 = *gptr<u32>(r6 + 0xcu);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0074dcac(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0 == 0)) {
            r0 = *gptr<u32>(r4 + 0x20u);  // (from the original)
            r2 = *gptr<u32>(r6 + 0xcu);  // (from the original)
            r3 = r0 + 1u;
            r1 = r4 + (r0 << 2);
            *gptr<u32>(r4 + 0x20u) = u32(r3);  // (from the original)
            *gptr<u32>(r1 + 0x24u) = u32(r2);  // (from the original)
        }
        r5 = r5 + 1u;
        guest::preempt();
    } while (s32(r5) < s32(5u));
    r1 = 1u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005547f8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r4 + 0x220u) = u32(0xb4u);  // (from the original)
    *gptr<u8>(r4 + 0x224u) = u8(r8);  // (from the original)
    r0 = r4;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00554a64
GUEST_EXPORT(0x00554a64, d_00554a64::f_00554a64);

// f_00554de0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00554de0 {

struct __attribute__((packed)) Object_00554de0_0 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x100];  // (not used here)
    u32 word_108;
    u32 word_10c;
    u32 word_110;
    u32 word_114;
    u32 word_118;
    u8 unknown_11c[0x100];  // (not used here)
    u32 word_21c;
    u32 word_220;
    u32 word_224;
    u8 unknown_228[0x40];  // (not used here)
    u32 word_268;
    u32 word_26c;
    u32 word_270;
    u8 unknown_274[0x80];  // (not used here)
    u32 word_2f4;
};
GUEST_OFFSET(Object_00554de0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00554de0_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00554de0_0, word_108, 0x108);  // (from the original)
GUEST_OFFSET(Object_00554de0_0, word_10c, 0x10c);  // (from the original)
GUEST_OFFSET(Object_00554de0_0, word_110, 0x110);  // (from the original)
GUEST_OFFSET(Object_00554de0_0, word_114, 0x114);  // (from the original)
GUEST_OFFSET(Object_00554de0_0, word_118, 0x118);  // (from the original)
GUEST_OFFSET(Object_00554de0_0, word_21c, 0x21c);  // (from the original)
GUEST_OFFSET(Object_00554de0_0, word_220, 0x220);  // (from the original)
GUEST_OFFSET(Object_00554de0_0, word_224, 0x224);  // (from the original)
GUEST_OFFSET(Object_00554de0_0, word_268, 0x268);  // (from the original)
GUEST_OFFSET(Object_00554de0_0, word_26c, 0x26c);  // (from the original)
GUEST_OFFSET(Object_00554de0_0, word_270, 0x270);  // (from the original)
GUEST_OFFSET(Object_00554de0_0, word_2f4, 0x2f4);  // (from the original)


u32 f_00554de0(gptr<Object_00554de0_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r5 = 0x100u;  // (from the original)
    r4 = 0x90558cu;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r13 + 0x10u));  // (from the original)
    arg0->word_0 = u32(0x9059b4u);  // (from the original)
    r0 = r0 + 0x110u;  // (from the original)
    arg0->word_110 = u32(r4);
    arg0->word_114 = u32(r0 + 0xcu);  // (from the original)
    r12 = 0x8c9f1cu;  // (from the original)
    arg0->word_118 = u32(r5);
    ea = r12;
    *gptr<u8>(r5 + (arg0->word_114 - 1u)) = u8(u32(*gptr<u8>(ea)));
    r5 = 0x40u;  // (from the original)
    arg0->word_110 = u32(0x9050f8u);  // (from the original)
    ea = r12;
    r6 = u32(*gptr<u8>(ea));
    ea = arg0->word_114;
    *gptr<u8>(ea) = u8(r6);
    arg0->word_110 = u32(0x9048b0u);  // (from the original)
    r0 = r0 + 0x10cu;  // (from the original)
    arg0->word_224 = u32(r5);
    arg0->word_21c = u32(r4);
    arg0->word_220 = u32(r0 + 0xcu);  // (from the original)
    ea = r12;
    *gptr<u8>(r5 + (arg0->word_220 - 1u)) = u8(u32(*gptr<u8>(ea)));
    r5 = 0x80u;  // (from the original)
    arg0->word_21c = u32(0x905170u);  // (from the original)
    ea = r12;
    r6 = u32(*gptr<u8>(ea));
    ea = arg0->word_220;
    *gptr<u8>(ea) = u8(r6);
    arg0->word_21c = u32(0x904950u);  // (from the original)
    r0 = r0 + 0x4cu;  // (from the original)
    r6 = r0 + 0xcu;  // (from the original)
    arg0->word_270 = u32(r5);
    arg0->word_268 = u32(r4);
    arg0->word_26c = u32(r6);
    *gptr<u8>(r5 + (r6 - 1u)) = u8(u32(*gptr<u8>(r12)));
    arg0->word_268 = u32(0x9050bcu);  // (from the original)
    *gptr<u8>(arg0->word_26c) = u8(u32(*gptr<u8>(r12)));
    arg0->word_268 = u32(0x904860u);  // (from the original)
    arg0->word_4 = u32(r1);
    r0 = r0 - 0x268u;  // (from the original)
    arg0->word_108 = u32(r2);
    arg0->word_10c = u32(r3);
    r2 = 0u;
    arg0->word_2f4 = u32(std::bit_cast<u32>(S0));
    r1 = r2;
    r3 = r2;
    do {
L_554ec8:;
        r12 = r0 + (r2 << 2);
        r2 = r2 + 1u;
        r1 = r1 + 2u;
        r4 = r0 + (r2 << 2);
        *gptr<u32>(r12 + 8u) = u32(r3);
        res = r1 - 0x40u;  // (from the original)
        r2 = r2 + 1u;
        *gptr<u32>(r4 + 8u) = u32(r3);
        guest::preempt();
    } while (res >> 0x1f != ((r1 ^ 0x40u) & (r1 ^ res)) >> 0x1f);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_00554de0
GUEST_EXPORT(0x00554de0, d_00554de0::f_00554de0);

// f_00554fbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00554fbc {

struct __attribute__((packed)) Object_00554fbc_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00554fbc_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00540c3c, u32(u32, u32, u32, u32)> call_00540c3c;  // (from the original)

u32 f_00554fbc(gptr<Object_00554fbc_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = 0x9059c4u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(r1);
    r0 = r0 + 0x24u;  // (from the original)
    r0 = call_00540c3c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r0 - 0x24u;  // (from the original)
    r1 = 0u;
    *gptr<u32>(r0 + 0x14u) = u32(r1);  // (from the original)
    *gptr<u8>(r0 + 0x20u) = u8(r1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00554fbc
GUEST_EXPORT(0x00554fbc, d_00554fbc::f_00554fbc);

// f_00555024: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00555024 {

struct __attribute__((packed)) Object_00555024_0 {
    u32 word_0;
    u8 unknown_4[0x10];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Object_00555024_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00555024_0, word_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x002ffb64, u32(u32, u32, u32, u32)> call_002ffb64;  // (from the original)
inline constexpr guest::Function<0x0053f6bc, u32(u32, u32, u32, u32)> call_0053f6bc;  // (from the original)

u32 f_00555024(gptr<Object_00555024_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    arg0->word_0 = u32(0x9059c4u);  // (from the original)
    r0 = arg0->word_14;
    if (r0 != 0) {
        r0 = call_002ffb64(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0 = 0u;
    *gptr<u32>(r4 + 0x14u) = u32(r0);  // (from the original)
    *gptr<u8>(r4 + 0x20u) = u8(r0);  // (from the original)
    r0 = r4 + 0x24u;  // (from the original)
    r0 = call_0053f6bc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r0 - 0x24u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_00555024
GUEST_EXPORT(0x00555024, d_00555024::f_00555024);

// f_00555094: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00555094 {

struct __attribute__((packed)) Object_00555094_0 {
    u8 unknown_0[0x2970];  // (not used here)
    u32 word_2970;
    u32 word_2974;
    u32 word_2978;
    u32 word_297c;
    u32 word_2980;
    u32 word_2984;
    u32 word_2988;
    u32 word_298c;
    u32 word_2990;
    u32 word_2994;
    u32 word_2998;
    u32 word_299c;
    u8 unknown_29a0[0x20];  // (not used here)
    u32 word_29c0;
    u32 word_29c4;
    u32 word_29c8;
    u32 word_29cc;
    u32 word_29d0;
    u32 word_29d4;
    u32 word_29d8;
    u32 word_29dc;
    u32 word_29e0;
};
GUEST_OFFSET(Object_00555094_0, word_2970, 0x2970);  // (from the original)
GUEST_OFFSET(Object_00555094_0, word_2974, 0x2974);  // (from the original)
GUEST_OFFSET(Object_00555094_0, word_2978, 0x2978);  // (from the original)
GUEST_OFFSET(Object_00555094_0, word_297c, 0x297c);  // (from the original)
GUEST_OFFSET(Object_00555094_0, word_2980, 0x2980);  // (from the original)
GUEST_OFFSET(Object_00555094_0, word_2984, 0x2984);  // (from the original)
GUEST_OFFSET(Object_00555094_0, word_2988, 0x2988);  // (from the original)
GUEST_OFFSET(Object_00555094_0, word_298c, 0x298c);  // (from the original)
GUEST_OFFSET(Object_00555094_0, word_2990, 0x2990);  // (from the original)
GUEST_OFFSET(Object_00555094_0, word_2994, 0x2994);  // (from the original)
GUEST_OFFSET(Object_00555094_0, word_2998, 0x2998);  // (from the original)
GUEST_OFFSET(Object_00555094_0, word_299c, 0x299c);  // (from the original)
GUEST_OFFSET(Object_00555094_0, word_29c0, 0x29c0);  // (from the original)
GUEST_OFFSET(Object_00555094_0, word_29c4, 0x29c4);  // (from the original)
GUEST_OFFSET(Object_00555094_0, word_29c8, 0x29c8);  // (from the original)
GUEST_OFFSET(Object_00555094_0, word_29cc, 0x29cc);  // (from the original)
GUEST_OFFSET(Object_00555094_0, word_29d0, 0x29d0);  // (from the original)
GUEST_OFFSET(Object_00555094_0, word_29d4, 0x29d4);  // (from the original)
GUEST_OFFSET(Object_00555094_0, word_29d8, 0x29d8);  // (from the original)
GUEST_OFFSET(Object_00555094_0, word_29dc, 0x29dc);  // (from the original)
GUEST_OFFSET(Object_00555094_0, word_29e0, 0x29e0);  // (from the original)

inline constexpr guest::Function<0x0013cd00, u32(u32, u32, u32, u32)> call_0013cd00;  // (from the original)

u32 f_00555094(gptr<Object_00555094_0> arg0, float S0) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r1 = 0x29b8u;  // (from the original)
    r0 = ~0u;
    r13 = r13 - 0x18u;  // (from the original)
    r6 = 0u;
    *gptr<u32>(r1 + r4) = u32(r0);
    *gptr<u32>(r1 - (r0 << 2) + r4) = u32(r6);
    r2 = 0xaf78f0u;  // (from the original)
    *gptr<u8>((r1 & ~(r0 >> 0x1c)) + r4) = u8(1u);  // (from the original)
    r5 = r4 + 0x2800u;  // (from the original)
    arg0->word_29c0 = u32(*gptr<u32>(r2));
    arg0->word_29c4 = u32(*gptr<u32>(r2 + 4u));
    arg0->word_29c8 = u32(*gptr<u32>(r2 + 8u));
    r2 = 0xaf7968u;  // (from the original)
    arg0->word_29cc = u32(*gptr<u32>(r2));
    arg0->word_29d0 = u32(*gptr<u32>(r2 + 4u));
    arg0->word_29d4 = u32(*gptr<u32>(r2 + 8u));
    r2 = 0xaf78e4u;  // (from the original)
    arg0->word_29d8 = u32(*gptr<u32>(r2));
    arg0->word_29dc = u32(*gptr<u32>(r2 + 4u));
    arg0->word_29e0 = u32(*gptr<u32>(r2 + 8u));
    arg0->word_2970 = u32(r6);
    arg0->word_2974 = u32(r6);
    arg0->word_2978 = u32(r6);
    arg0->word_297c = u32(r6);
    arg0->word_2980 = u32(r6);
    arg0->word_2984 = u32(r6);
    arg0->word_2988 = u32(r6);
    arg0->word_298c = u32(r6);
    arg0->word_2990 = u32(r6);
    arg0->word_2994 = u32(r6);
    r1 = 0u;
    arg0->word_2998 = u32(r6);
    r2 = r1;
    arg0->word_299c = u32(r6);
    do {
L_555168:;
        r3 = r4 + (r1 << 3);
        r1 = r1 + 1u;
        r3 = r3 + 0x2974u;  // (from the original)
        r12 = r4 + (r1 << 3) + 0x2974u;  // (from the original)
        r2 = r2 + 2u;
        *gptr<u32>(r3) = u32(r0);
        res = r2 - 6u;
        r1 = r1 + 1u;
        *gptr<u32>(r12) = u32(r0);
        guest::preempt();
    } while (res >> 0x1f != ((r2 ^ 6u) & (r2 ^ res)) >> 0x1f);  // (from the original)
    r1 = r13;
    *gptr<u32>(r13 + 4u) = u32(0x8c1c28u);  // (from the original)
    *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
    r2 = ~0u;
    r0 = r4 + 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0013cd00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = std::bit_cast<float>(*gptr<u32>(0x5551f0u));  // (from the original)
    *gptr<u32>(r4 + 0x29e4u) = u32(r6);  // (from the original)
    *gptr<u32>(r5 + 0x1b4u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_00555094
GUEST_EXPORT(0x00555094, d_00555094::f_00555094);

// f_005551f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005551f4 {

struct __attribute__((packed)) Object_005551f4_0 {
    u8 unknown_0[0x29a8];  // (not used here)
    u32 word_29a8;
};
GUEST_OFFSET(Object_005551f4_0, word_29a8, 0x29a8);  // (from the original)


u32 f_005551f4(gptr<Object_005551f4_0> arg0) {
    u32 r0 = arg0.addr();
    float S0 = 0;
    S0 = std::bit_cast<float>(*gptr<u32>(0x555204u));  // (from the original)
    r0 = r0 + 0x2800u;  // (from the original)
    arg0->word_29a8 = u32(std::bit_cast<u32>(S0));
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_005551f4
GUEST_EXPORT(0x005551f4, d_005551f4::f_005551f4);

// f_005556d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005556d4 {

struct __attribute__((packed)) Object_005556d4_0 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_005556d4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005556d4_0, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002ffb64, u32(u32, u32, u32, u32)> call_002ffb64;  // (from the original)
inline constexpr guest::Function<0x0055c5ec, u32(u32, u32, u32, u32)> call_0055c5ec;  // (from the original)

u32 f_005556d4(gptr<Object_005556d4_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = arg0->word_c;
    r1 = 0x9059d4u;  // (from the original)
    arg0->word_0 = u32(r1);
    if (r0 != 0) {
        r0 = call_0055c5ec(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = call_002ffb64(r0, r1, r2, r3);
    }
    r1 = 0x5450f0u;  // (from the original)
    r3 = 2u;
    r2 = 0x10cu;  // (from the original)
    r0 = r4 + 0x2034u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x5450f0u;  // (from the original)
    r3 = 2u;
    r2 = 0x10cu;  // (from the original)
    r0 = r4 + 0x1e1cu;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x5450f0u;  // (from the original)
    r3 = 2u;
    r2 = 0x10cu;  // (from the original)
    r0 = r4 + 0x1c04u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x5450f0u;  // (from the original)
    r3 = 2u;
    r2 = 0x10cu;  // (from the original)
    r0 = r4 + 0x19ecu;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x5450f0u;  // (from the original)
    r3 = 2u;
    r2 = 0x10cu;  // (from the original)
    r0 = r4 + 0x17d4u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x5450f0u;  // (from the original)
    r3 = 4u;
    r2 = 0x10cu;  // (from the original)
    r0 = r4 + 0x13a4u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x5450f0u;  // (from the original)
    r3 = 2u;
    r2 = 0x10cu;  // (from the original)
    r0 = r4 + 0xf74u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x5450f0u;  // (from the original)
    r3 = 2u;
    r2 = 0x10cu;  // (from the original)
    r0 = r4 + 0xd5cu;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x5450f0u;  // (from the original)
    r3 = 2u;
    r2 = 0x10cu;  // (from the original)
    r0 = r4 + 0xb44u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x5450f0u;  // (from the original)
    r3 = 2u;
    r2 = 0x10cu;  // (from the original)
    r0 = r4 + 0x92cu;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x5450f0u;  // (from the original)
    r3 = 2u;
    r2 = 0x10cu;  // (from the original)
    r0 = r4 + 0x714u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x5450f0u;  // (from the original)
    r3 = 4u;
    r2 = 0x10cu;  // (from the original)
    r0 = r4 + 0x2e4u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005556d4
GUEST_EXPORT(0x005556d4, d_005556d4::f_005556d4);

// f_00555824: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00555824 {

inline constexpr guest::Function<0x00134544, u32(u32, u32, u32, u32)> call_00134544;  // (from the original)
inline constexpr guest::Function<0x001488f4, u32(u32, u32, u32, u32)> call_001488f4;  // (from the original)
inline constexpr guest::Function<0x00148930, u32(u32, u32, u32, u32)> call_00148930;  // (from the original)

u32 f_00555824(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20;  // (from the original)
    r6 = r1;
    r5 = r0;
    r7 = r2;
    r1 = 0x8baddcu;  // (from the original)
    r4 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r8 = r3;
    r2 = 0x148u;  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00134544(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r9 = 0xf02c0u;  // (from the original)
    r10 = 0xff02c1u;  // (from the original)
    r1 = r7;
    r2 = r10;
    ea = r6 + 0x148u;  // (from the original)
    *gptr<u32>(ea) = u32(u32(*gptr<u8>(r5 + 0x4cb36u)) | 0x80000000u);  // (from the original)
    ea = ea + 4u;
    *gptr<u32>(ea) = u32(r9);
    r6 = ea + 4u;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00148930(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r8;
    r2 = r10 - 0x400000u;  // (from the original)
    ea = r6 + 0x48u;  // (from the original)
    *gptr<u32>(ea) = u32(u32(*gptr<u8>(r5 + 0x4cb3eu)) | 0x80000000u);  // (from the original)
    ea = ea + 4u;
    *gptr<u32>(ea) = u32(r9);
    r6 = ea + 4u;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_001488f4(r0, r1, r2, r3);
    r6 = r6 + 0x38u;  // (from the original)
    r0 = 0u;
    ea = r6 + 8u;
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r10);
    *gptr<u32>(r6) = u32(0x80000000u);  // (from the original)
    *gptr<u32>(r6 + 4) = u32(r9);
    *gptr<u32>(r6 + 0x10u) = u32(*gptr<u32>(r4 + 8u));  // (from the original)
    *gptr<u32>(r6 + 0x14u) = u32(*gptr<u32>(r4 + 4u));  // (from the original)
    r1 = *gptr<u32>(r4);
    *gptr<u32>(r6 + 0x1cu) = u32(r0);  // (from the original)
    *gptr<u32>(r6 + 0x18u) = u32(r1);  // (from the original)
    *gptr<u32>(r6 + 0x20u) = u32(*gptr<u32>(r4 + 0x18u));  // (from the original)
    *gptr<u32>(r6 + 0x24u) = u32(*gptr<u32>(r4 + 0x14u));  // (from the original)
    r1 = *gptr<u32>(r4 + 0x10u);  // (from the original)
    *gptr<u32>(r6 + 0x2cu) = u32(r0);  // (from the original)
    *gptr<u32>(r6 + 0x28u) = u32(r1);  // (from the original)
    *gptr<u32>(r6 + 0x30u) = u32(*gptr<u32>(r4 + 0x28u));  // (from the original)
    *gptr<u32>(r6 + 0x34u) = u32(*gptr<u32>(r4 + 0x24u));  // (from the original)
    r1 = *gptr<u32>(r4 + 0x20u);  // (from the original)
    *gptr<u32>(r6 + 0x3cu) = u32(r0);  // (from the original)
    *gptr<u32>(r6 + 0x38u) = u32(r1);  // (from the original)
    *gptr<u32>(r6 + 0x40u) = u32(*gptr<u32>(r4 + 0x28u));  // (from the original)
    *gptr<u32>(r6 + 0x44u) = u32(*gptr<u32>(r4 + 0x18u));  // (from the original)
    *gptr<u32>(r6 + 0x48u) = u32(*gptr<u32>(r4 + 8u));  // (from the original)
    r0 = r6 + 0x50u;  // (from the original)
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00555824
GUEST_EXPORT(0x00555824, d_00555824::f_00555824);

// f_00555f90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00555f90 {

inline constexpr guest::Function<0x00134544, u32(u32, u32, u32, u32)> call_00134544;  // (from the original)

u32 f_00555f90(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r5 = r1;
    r4 = r2;
    r1 = 0x8baddcu;  // (from the original)
    r2 = 0x148u;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00134544(r0, r1, r2, r3);
    r2 = 0u;
    ea = r5 + 0x154u;  // (from the original)
    *gptr<u32>(ea) = u32(0xff02c1u);  // (from the original)
    ea = r5 + 0x150u;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    ea = r5 + 0x14cu;  // (from the original)
    *gptr<u32>(ea) = u32(0xf02c0u);  // (from the original)
    ea = r5 + 0x148u;  // (from the original)
    *gptr<u32>(ea) = u32(0x80000000u);  // (from the original)
    ea = r4 + 8u;
    r3 = *gptr<u32>(ea);
    r1 = r5 + 0x148u;  // (from the original)
    r0 = r5 + 0x198u;  // (from the original)
    ea = r5 + 0x158u;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    ea = r4 + 4u;
    r3 = *gptr<u32>(ea);
    ea = r5 + 0x15cu;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    ea = r4;
    r3 = *gptr<u32>(ea);
    ea = r5 + 0x160u;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    *gptr<u32>(ea + 4u) = u32(r2);
    *gptr<u32>(r1 + 0x20u) = u32(*gptr<u32>(r4 + 0x18u));  // (from the original)
    *gptr<u32>(r1 + 0x24u) = u32(*gptr<u32>(r4 + 0x14u));  // (from the original)
    r3 = *gptr<u32>(r4 + 0x10u);  // (from the original)
    *gptr<u32>(r1 + 0x2cu) = u32(r2);  // (from the original)
    *gptr<u32>(r1 + 0x28u) = u32(r3);  // (from the original)
    *gptr<u32>(r1 + 0x30u) = u32(*gptr<u32>(r4 + 0x28u));  // (from the original)
    *gptr<u32>(r1 + 0x34u) = u32(*gptr<u32>(r4 + 0x24u));  // (from the original)
    r3 = *gptr<u32>(r4 + 0x20u);  // (from the original)
    *gptr<u32>(r1 + 0x3cu) = u32(r2);  // (from the original)
    *gptr<u32>(r1 + 0x38u) = u32(r3);  // (from the original)
    *gptr<u32>(r1 + 0x40u) = u32(*gptr<u32>(r4 + 0x28u));  // (from the original)
    *gptr<u32>(r1 + 0x44u) = u32(*gptr<u32>(r4 + 0x18u));  // (from the original)
    *gptr<u32>(r1 + 0x48u) = u32(*gptr<u32>(r4 + 8u));  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00555f90
GUEST_EXPORT(0x00555f90, d_00555f90::f_00555f90);

// f_00556050: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00556050 {

struct __attribute__((packed)) Object_00556050_0 {
    u8 unknown_0[0x87c];  // (not used here)
    u32 word_87c;
};
GUEST_OFFSET(Object_00556050_0, word_87c, 0x87c);  // (from the original)

inline constexpr guest::Function<0x00556058, u32(u32, u32, u32, u32)> call_00556058;  // (from the original)

u32 f_00556050(gptr<Object_00556050_0> arg0) {
    u32 r0 = arg0.addr();
    r0 = arg0->word_87c;
    return call_00556058(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00556050
GUEST_EXPORT(0x00556050, d_00556050::f_00556050);

// f_00556094: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00556094 {

struct __attribute__((packed)) Object_00556094_0 {
    u8 unknown_0[0x60768];  // (not used here)
    u32 word_60768;
};
GUEST_OFFSET(Object_00556094_0, word_60768, 0x60768);  // (from the original)

inline constexpr guest::Function<0x00134544, u32(u32, u32, u32, u32)> call_00134544;  // (from the original)

u32 f_00556094(gptr<Object_00556094_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r1;
    r1 = 0x60768u + r0;  // (from the original)
    if (arg0->word_60768 == 1u) {
        r0 = r5;
        goto L_556110;
    }
    r4 = r0 + 0x60560u;  // (from the original)
    arg0->word_60768 = u32(1u);
    r2 = *gptr<u32>(r4) << 2;
    r1 = r0 + 0x5fc00u;  // (from the original)
    r0 = r5;
    r0 = call_00134544(r0, r1, r2, r3);
    r0 = *gptr<u32>(r4);
    *gptr<u8>(0x97e6f0u) = u8(0x1cu);  // (from the original)
    r1 = 0u;
    r0 = r5 + (r0 << 2);
    *gptr<u8>(0x97e6f1u) = u8(4u);  // (from the original)
    *gptr<u8>(0x97e6f2u) = u8(r1);  // (from the original)
    *gptr<u32>(0x97e6ecu) = u32(r1);  // (from the original)
L_556110:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00556094
GUEST_EXPORT(0x00556094, d_00556094::f_00556094);

// f_00556d80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00556d80 {

inline constexpr guest::Function<0x001435b4, u32(u32, u32, u32, u32)> call_001435b4;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x0034ac5c, u32(u32, u32, u32, u32)> call_0034ac5c;  // (from the original)

u32 f_00556d80(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r12 = guest::cpu()->r[12];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r12);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r5 = r1;
    r4 = r2;
    r1 = r0;
    r2 = 4u;
    r0 = 0xb4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_002fd108(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r1 = u32(*gptr<u16>(r4 + 4u));
    r11 = r5;
    r6 = u32(*gptr<u8>(r4 + 6u));
    r8 = u32(*gptr<u16>(r4));
    r9 = u32(*gptr<u16>(r4 + 2u));
    r7 = u32(*gptr<u8>(r4 + 7u));
    r10 = u32(*gptr<u8>(r4 + 8u));
    r5 = r1 & 0xffu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0034ac5c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r4 = r0;
    *gptr<u8>(r4 + 0x1cu) = u8(0u);  // (from the original)
    r0 = r11;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_001435b4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    *gptr<u32>(r4) = u32(r0);
    *gptr<u16>(r4 + 4u) = u16(r8);
    res = r7 & 0xfu;  // (from the original)
    zf = res == 0;
    r2 = res;
    *gptr<u16>(r4 + 6u) = u16(r9);
    if (zf) {
        r0 = 3u;
    }
    *gptr<u8>(r4 + 8u) = u8(r5);
    if (zf) {
        goto L_556e04;
    }
    if (r2 == 1u) {
        r0 = 2u;
        goto L_556e04;
    }
    if (r2 == 2u) {
        r0 = 0u;
    }
L_556e04:;
    res = r7 >> 4;
    r2 = res;
    if (res == 0) {
        r1 = 3u;
        goto L_556e24;
    }
    if (r2 == 1u) {
        r1 = 2u;
        goto L_556e24;
    }
    if (r2 == 2u) {
        r1 = 0u;
    }
L_556e24:;
    r2 = 0u;
    if (r10 == 0) {
        r3 = 2u;
        r12 = 1u;
    } else {
        r3 = r2;
        r12 = 0u;
    }
    r3 = r3 | r12 << 2;
    if (r5 == 0xcu) {  // (from the original)
        r12 = 2u;
    } else {
        r12 = 0u;
    }
    res = r6;
    r1 = r3 | r12 << 4 | r1 << 8;
    *gptr<u32>(r4 + 0xa8u) = u32(r1 | r0 << 0xc);  // (from the original)
    *gptr<u32>(r4 + 0xacu) = u32(ror32(*gptr<u32>(r4 + 4u), 0x10));  // (from the original)
    if (u32(res == 0) || res >> 0x1f != (r6 & (r6 ^ res)) >> 0x1f) {  // (from the original)
        *gptr<u32>(r4 + 0xb0u) = u32(r2);  // (from the original)
        goto L_556e94;
    }
    r0 = r6 - 1u & 0xffu;  // (from the original)
    *gptr<u8>(r4 + 0x14u) = u8(r2);  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x556e9cu));  // (from the original)
    *gptr<u8>(r4 + 0x15u) = u8(r0);  // (from the original)
    *gptr<u32>(r4 + 0x10u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r4 + 0xb0u) = u32(r2 | r0 << 0x10);  // (from the original)
L_556e94:;
    r0 = r4;
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_00556d80
GUEST_EXPORT(0x00556d80, d_00556d80::f_00556d80);

// f_00556ea0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00556ea0 {

struct __attribute__((packed)) Object_00556ea0_0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
};
GUEST_OFFSET(Object_00556ea0_0, word_18, 0x18);  // (from the original)

struct __attribute__((packed)) Object_00556ea0_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_00556ea0_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0054f804, u32(u32, u32, u32, u32)> call_0054f804;  // (from the original)

u32 f_00556ea0(gptr<Object_00556ea0_0> arg0, gptr<Object_00556ea0_1> arg1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r6 = r0;
    r5 = r1;
    r13 = r13 - 0x48u;  // (from the original)
    r0 = arg1->word_8;
    r8 = r2;
    r7 = r3;
    r1 = arg0->word_18 + (r0 + (r0 << 2) << 3);
    r4 = *gptr<u32>(r1 + 8u);
    res = r4;
    if (u32(res == 0) || res >> 0x1f != (r4 & (r4 ^ res)) >> 0x1f) {  // (from the original)
        goto L_556f38;
    }
    r0 = r4 & 1u;
    r2 = 0u;
    r3 = r13 + 8u;
    r12 = 4u;
    if (r0 == 1u) {
        r2 = 1u;
        r9 = *gptr<u32>(*gptr<u32>(r1 + 4u) + 4u);
        *gptr<u32>(r13 + 8u) = u32(r9);
    }
    if (s32(r0) >= s32(r4)) {
        goto L_556f38;
    }
    do {
L_556f04:;
        r0 = r0 + 2u;
        res = r0 - r4;
        *gptr<u32>(r3 + (r2 << 2)) = u32(*gptr<u32>(*gptr<u32>(r1 + 4u) + (r12 + (r2 << 3))));
        r2 = r2 + 1u;
        r10 = r12 + (r2 << 3);
        r9 = *gptr<u32>(*gptr<u32>(r1 + 4u) + r10);
        *gptr<u32>(r3 + (r2 << 2)) = u32(r9);
        r2 = r2 + 1u;
        guest::preempt();
    } while (res >> 0x1f != ((r0 ^ r4) & (r0 ^ res)) >> 0x1f);  // (from the original)
L_556f38:;
    r0 = 0u;
    *gptr<u32>(r1 + 4u) = u32(*gptr<u32>(r5 + 0x14u));  // (from the original)
    *gptr<u32>(r1 + 8u) = u32(*gptr<u32>(r5 + 0x10u));  // (from the original)
    *gptr<u32>(r1 + 0x20u) = u32(*gptr<u32>(r5 + 0xcu));  // (from the original)
    *gptr<u32>(r1 + 0xcu) = u32(*gptr<u32>(r5 + 0x18u));  // (from the original)
    *gptr<u32>(r5) = u32(r0);
    if (r8 != 0) {
        ea = r5 + 8u;
        r1 = *gptr<u32>(ea);
        ea = r13 + 4u;
        *gptr<u32>(ea) = u32(r0);
        ea = r13;
        *gptr<u32>(ea) = u32(r1);
        ea = r6 + 4u;
        r0 = *gptr<u32>(ea);
        r3 = *gptr<u32>(ea + 4);
        r2 = r4;
        r1 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        r0 = call_0054f804(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    if (r7 != 0) {
        r6 = r6 + 4u;
        *gptr<u32>(r13) = u32(*gptr<u32>(r5 + 8u));
        *gptr<u32>(r13 + 4) = u32(1u);
        r0 = *gptr<u32>(r6);
        r3 = *gptr<u32>(r6 + 4);
        r2 = r4;
        r1 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        r0 = call_0054f804(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00556ea0
GUEST_EXPORT(0x00556ea0, d_00556ea0::f_00556ea0);

// f_005573e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005573e0 {

struct __attribute__((packed)) Object_005573e0_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x3];  // (not used here)
    u32 word_10;
    u8 unknown_14[0x4];  // (not used here)
    u32 word_18;
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Object_005573e0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005573e0_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005573e0_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005573e0_0, byte_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005573e0_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_005573e0_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_005573e0_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_005573e0_0, word_20, 0x20);  // (from the original)

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)

u32 f_005573e0(gptr<Object_005573e0_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    ea = r13 + 0x18u;  // (from the original)
    r0 = *gptr<u32>(ea);
    r5 = 0x9059fcu;  // (from the original)
    arg0->byte_c = u8(0u);
    arg0->word_18 = u32(r3);
    r6 = 0xb4u;  // (from the original)
    arg0->word_0 = u32(r5);
    arg0->word_10 = u32(r6);
    arg0->word_4 = u32(r1);
    arg0->word_8 = u32(r2);
    r7 = r4 + 0x1cu;  // (from the original)
    r1 = 0x500u;  // (from the original)
    arg0->word_1c = u32(r0);
    arg0->word_20 = u32(0x7530u);  // (from the original)
    r0 = r4 + 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r0 = 0u;
    r2 = 1u;
    do {
L_557430:;
        r1 = r0 + (r0 << 2);
        r0 = r0 + 1u;
        r1 = r4 + (r1 << 2);
        res = r0 - 0x40u;  // (from the original)
        *gptr<u32>(r1 + 0x2cu) = u32(r2);  // (from the original)
        guest::preempt();
    } while (res >> 0x1f != ((r0 ^ 0x40u) & (r0 ^ res)) >> 0x1f);  // (from the original)
    r0 = r4;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005573e0
GUEST_EXPORT(0x005573e0, d_005573e0::f_005573e0);

// f_0055746c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0055746c {

struct __attribute__((packed)) Object_0055746c_0 {
    u8 unknown_0[0x1f0];  // (not used here)
    u16 half_1f0;
    u16 half_1f2;
};
GUEST_OFFSET(Object_0055746c_0, half_1f0, 0x1f0);  // (from the original)
GUEST_OFFSET(Object_0055746c_0, half_1f2, 0x1f2);  // (from the original)

struct __attribute__((packed)) Object_0055746c_1 {
    u8 unknown_0[0xf0];  // (not used here)
    u32 word_f0;
};
GUEST_OFFSET(Object_0055746c_1, word_f0, 0xf0);  // (from the original)

inline constexpr guest::Function<0x002f9e1c, u32(u32, u32, u32, u32)> call_002f9e1c;  // (from the original)

u32 f_0055746c(gptr<Object_0055746c_0> arg0, gptr<Object_0055746c_1> arg1, float S0, float S1, float S2, float S3) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r1 = u32(s32(s16(arg0->half_1f0)));
    r6 = u32(s32(s16(arg0->half_1f2)));
    r0 = arg1->word_f0;
    if (r1 == 0) {
        goto L_5574d8;
    }
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_002f9e1c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
L_557494:;
    r1 = r6;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_002f9e1c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    r0 = r1 + r4;
    r1 = u32(*gptr<u8>(r4 + 0x1d6u));  // (from the original)
    r0 = u32(*gptr<u8>(r0 + 0x1e0u));  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_002f9e1c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r4 + 0x1d8u;  // (from the original)
    r5 = r5 + 0xd0u;  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(r4 + 4)) * float(s32(std::bit_cast<u32>(std::bit_cast<float>(r0))));
    S0 = std::bit_cast<float>(*gptr<u32>(r4)) * float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1))));
    *gptr<u32>(r5) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r5 + 4) = u32(std::bit_cast<u32>(S1));
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_5574d8:;
    r0 = r0 * r6;
    r1 = *gptr<u32>(r5 + 0xf4u);  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_002f9e1c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    guest::preempt();
    goto L_557494;
}

}  // namespace d_0055746c
GUEST_EXPORT(0x0055746c, d_0055746c::f_0055746c);

// f_005574f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005574f0 {

struct __attribute__((packed)) Object_005574f0_0 {
    u8 unknown_0[0x5c];  // (not used here)
    u32 word_5c;
    u32 word_60;
    u32 word_64;
    u32 word_68;
    u32 word_6c;
    u32 word_70;
    u32 word_74;
    u32 word_78;
    u32 word_7c;
    u32 word_80;
    u32 word_84;
    u32 word_88;
    u32 word_8c;
    u8 unknown_90[0x20];  // (not used here)
    u8 byte_b0;
};
GUEST_OFFSET(Object_005574f0_0, word_5c, 0x5c);  // (from the original)
GUEST_OFFSET(Object_005574f0_0, word_60, 0x60);  // (from the original)
GUEST_OFFSET(Object_005574f0_0, word_64, 0x64);  // (from the original)
GUEST_OFFSET(Object_005574f0_0, word_68, 0x68);  // (from the original)
GUEST_OFFSET(Object_005574f0_0, word_6c, 0x6c);  // (from the original)
GUEST_OFFSET(Object_005574f0_0, word_70, 0x70);  // (from the original)
GUEST_OFFSET(Object_005574f0_0, word_74, 0x74);  // (from the original)
GUEST_OFFSET(Object_005574f0_0, word_78, 0x78);  // (from the original)
GUEST_OFFSET(Object_005574f0_0, word_7c, 0x7c);  // (from the original)
GUEST_OFFSET(Object_005574f0_0, word_80, 0x80);  // (from the original)
GUEST_OFFSET(Object_005574f0_0, word_84, 0x84);  // (from the original)
GUEST_OFFSET(Object_005574f0_0, word_88, 0x88);  // (from the original)
GUEST_OFFSET(Object_005574f0_0, word_8c, 0x8c);  // (from the original)
GUEST_OFFSET(Object_005574f0_0, byte_b0, 0xb0);  // (from the original)


u32 f_005574f0(gptr<Object_005574f0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    r2 = 0u;
    S1 = std::bit_cast<float>(*gptr<u32>(0x557558u));  // (from the original)
    arg0->word_74 = u32(r2);
    arg0->word_7c = u32(std::bit_cast<u32>(S1));
    S0 = std::bit_cast<float>(*gptr<u32>(0x55755cu));  // (from the original)
    arg0->word_5c = u32(std::bit_cast<u32>(S1));
    r1 = 0xf1c71b80u;  // (from the original)
    S2 = std::bit_cast<float>(*gptr<u32>(0x557560u));  // (from the original)
    arg0->word_60 = u32(std::bit_cast<u32>(S0));
    r3 = 0xaf78f0u;  // (from the original)
    arg0->word_64 = u32(std::bit_cast<u32>(S2));
    S1 = std::bit_cast<float>(*gptr<u32>(0x557568u));  // (from the original)
    arg0->word_78 = u32(r1);
    arg0->word_80 = u32(r2);
    arg0->word_84 = u32(std::bit_cast<u32>(S1));
    S1 = std::bit_cast<float>(*gptr<u32>(0x557570u));  // (from the original)
    arg0->word_68 = u32(*gptr<u32>(r3));
    arg0->word_6c = u32(*gptr<u32>(r3 + 4u));
    arg0->word_70 = u32(*gptr<u32>(r3 + 8u));
    arg0->byte_b0 = u8(r2);
    r0 = r0 + 0x88u;  // (from the original)
    arg0->word_88 = u32(std::bit_cast<u32>(S0));
    arg0->word_8c = u32(std::bit_cast<u32>(S1));
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_005574f0
GUEST_EXPORT(0x005574f0, d_005574f0::f_005574f0);

// f_0055b6e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0055b6e0 {

inline constexpr guest::Function<0x00556a90, u32(u32, u32, u32, u32)> call_00556a90;  // (from the original)

u32 f_0055b6e0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r12 = r0;
    r6 = r1;
    r4 = 0u;
    r13 = r13 - 0x28u;  // (from the original)
    r7 = r2;
    r8 = r3;
    r0 = r4;
    r1 = 0x20u;  // (from the original)
    do {
L_55b704:;
        r5 = r12;
        r2 = *gptr<u32>(r12 + (r0 << 2) + 0x1f0u);  // (from the original)
        r0 = r0 + 1u;
        if (r2 != 0) {
            r4 = r4 + 1u;
        }
        res = r1 - 1u;
        r1 = res;
        guest::preempt();
    } while (res != 0);
    r0 = *gptr<u32>(r12 + 0x3c0u);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r12 + 0x114u);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r0);
    r3 = r5 + 0x2acu;  // (from the original)
    r2 = r12 + ((r6 << 3) - r6 << 2) + 0x270u;  // (from the original)
    r1 = r8;
    r0 = r7;
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_00556a90(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0055b6e0
GUEST_EXPORT(0x0055b6e0, d_0055b6e0::f_0055b6e0);

// f_0055ba48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0055ba48 {


u32 f_0055ba48() {
    u32 res = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 fpsr = guest::cpu()->fpscr;
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    r2 = 0x981cfcu;  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(0x55bac4u));  // (from the original)
    S2 = std::bit_cast<float>(*gptr<u32>(0x55bac8u));  // (from the original)
    r1 = *gptr<u32>(r2) * 0xfd43fdu + 0xc39ec3u;  // (from the original)
    *gptr<u32>(r2) = u32(r1);
    S0 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1 & ~0xf0000000u)))) * S1;  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(0x55baccu));  // (from the original)
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S2);  // (from the original)
    if (fpsr >> 0x1d & 1) {  // (from the original)
        goto L_55ba98;
    }
    do {
L_55ba88:;
        S0 = S0 + S1;
        fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S2);  // (from the original)
        guest::preempt();
    } while (!(fpsr >> 0x1d & 1));  // (from the original)
L_55ba98:;
    r0 = std::bit_cast<u32>(S0);
    if (s32(r0) <= s32(0x3f800000u)) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    do {
L_55baa4:;
        S0 = S0 - S1;
        r0 = std::bit_cast<u32>(S0);
        res = r0 - 0x3f800000u;  // (from the original)
        guest::preempt();
    } while (!u32(res == 0) && res >> 0x1f == ((r0 ^ 0x3f800000u) & (r0 ^ res)) >> 0x1f);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0055ba48
GUEST_EXPORT(0x0055ba48, d_0055ba48::f_0055ba48);

// f_0055badc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0055badc {

inline constexpr guest::Function<0x00349878, u32(u32, u32, u32, u32)> call_00349878;  // (from the original)
inline constexpr guest::Function<0x00726d2c, u32(u32, u32, u32, u32)> call_00726d2c;  // (from the original)

u32 f_0055badc(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r0 + 4u;
    r0 = call_00349878(r0, r1, r2, guest::cpu()->r[3]);
    *gptr<u8>(r4 + 0x29cu) = u8(3u);  // (from the original)
    r2 = 0x8c1b84u;  // (from the original)
    r1 = r4 + 0x1295cu;  // (from the original)
    r0 = r4 + 4u;
    r0 = call_00726d2c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x8c1b7cu;  // (from the original)
    r1 = r4 + 0x12964u;  // (from the original)
    r0 = r4 + 4u;
    r0 = call_00726d2c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x8c1b74u;  // (from the original)
    r1 = r4 + 0x1296cu;  // (from the original)
    r0 = r4 + 4u;
    r0 = call_00726d2c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x8c1b6cu;  // (from the original)
    r1 = r4 + 0x12974u;  // (from the original)
    r0 = r4 + 4u;
    r0 = call_00726d2c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x8c1b60u;  // (from the original)
    r1 = r4 + 0x1297cu;  // (from the original)
    r0 = r4 + 4u;
    r0 = call_00726d2c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x8c1b54u;  // (from the original)
    r1 = r4 + 0x12984u;  // (from the original)
    r0 = r4 + 4u;
    r0 = call_00726d2c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x8c1b48u;  // (from the original)
    r1 = r4 + 0x1298cu;  // (from the original)
    r0 = r4 + 4u;
    r0 = call_00726d2c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x8c1b3cu;  // (from the original)
    r1 = r4 + 0x12994u;  // (from the original)
    r0 = r4 + 4u;
    r0 = call_00726d2c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x8c1b34u;  // (from the original)
    r1 = r4 + 0x1299cu;  // (from the original)
    r0 = r4 + 4u;
    r0 = call_00726d2c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x8c1b2cu;  // (from the original)
    r1 = r4 + 0x129a4u;  // (from the original)
    r0 = r4 + 4u;
    r0 = call_00726d2c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x8c1b20u;  // (from the original)
    r1 = r4 + 0x129acu;  // (from the original)
    r0 = r4 + 4u;
    r0 = call_00726d2c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x8c1b18u;  // (from the original)
    r1 = r4 + 0x129b4u;  // (from the original)
    r0 = r4 + 4u;
    r0 = call_00726d2c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x8c1b10u;  // (from the original)
    r1 = r4 + 0x129bcu;  // (from the original)
    r0 = r4 + 4u;
    r0 = call_00726d2c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x8c1b08u;  // (from the original)
    r1 = r4 + 0x129c4u;  // (from the original)
    r0 = r4 + 4u;
    r0 = call_00726d2c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x8c1afcu;  // (from the original)
    r1 = r4 + 0x129ccu;  // (from the original)
    r0 = r4 + 4u;
    r0 = call_00726d2c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x8c1ae8u;  // (from the original)
    r1 = r4 + 0x129d4u;  // (from the original)
    r0 = r4 + 4u;
    r0 = call_00726d2c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r4 + 0x12800u;  // (from the original)
    r0 = r4 + 4u;
    r2 = 0x8c1ac8u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    r1 = r1 + 0x1dcu;  // (from the original)
    return call_00726d2c(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_0055badc
GUEST_EXPORT(0x0055badc, d_0055badc::f_0055badc);

// f_0055bc90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0055bc90 {

inline constexpr guest::Function<0x001435b4, u32(u32, u32, u32, u32)> call_001435b4;  // (from the original)
inline constexpr guest::Function<0x0034a784, u32(u32, u32, u32, u32)> call_0034a784;  // (from the original)
inline constexpr guest::Function<0x0055b898, u32(u32, u32, u32, u32)> call_0055b898;  // (from the original)
inline constexpr guest::Function<0x00726d2c, u32(u32, u32, u32, u32)> call_00726d2c;  // (from the original)

u32 f_0055bc90(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x40u;  // (from the original)
    r2 = 0u;
    r3 = 1u;
    r1 = 0xffu;  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r2);  // (from the original)
    *gptr<u8>(r13 + 0x10u) = u8(r2);  // (from the original)
    *gptr<u8>(r13) = u8(r2);
    *gptr<u8>(r13 + 8u) = u8(r2);
    r4 = r0;
    *gptr<u8>(r13 + 0x11u) = u8(r3);  // (from the original)
    *gptr<u8>(r13 + 1u) = u8(r3);
    *gptr<u8>(r13 + 9u) = u8(r3);
    *gptr<u8>(r13 + 0x12u) = u8(r1);  // (from the original)
    *gptr<u8>(r13 + 2u) = u8(r1);
    *gptr<u8>(r13 + 0xau) = u8(r1);  // (from the original)
    r0 = r4 + 0x129e4u;  // (from the original)
    *gptr<u8>(r13 + 0x13u) = u8(r1);  // (from the original)
    *gptr<u8>(r13 + 3u) = u8(r1);
    *gptr<u32>(r13 + 4u) = u32(r2);
    *gptr<u8>(r13 + 0xbu) = u8(r1);  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(r2);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0055b898(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r5 = 0u;
    do {
L_55bcf4:;
        r2 = 0x8c1abcu;  // (from the original)
        r1 = r13 + 0x10u;  // (from the original)
        r0 = r4 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_00726d2c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r6 = r4 + (r5 << 0xe);  // (from the original)
        r0 = r6 + 0x129e4u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_001435b4(r0, r1, r2, r3);
        r2 = r0;
        r7 = r4 + ((r5 << 7) - ((r5 << 3) - r5) << 4) + 0x371e4u;  // (from the original)
        r3 = 0xfu;  // (from the original)
        r1 = r13 + 0x10u;  // (from the original)
        r0 = r7;
        guest::cpu()->r[13] = r13;
        r0 = call_0034a784(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        r2 = 0x8c1ab8u;  // (from the original)
        r1 = r13;
        r0 = r4 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_00726d2c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r6 + 0x1e9e4u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_001435b4(r0, r1, r2, r3);
        r2 = r0;
        r3 = 0xfu;  // (from the original)
        r1 = r13;
        r0 = r7;
        guest::cpu()->r[13] = r13;
        r0 = call_0034a784(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        r2 = 0x8c1ab4u;  // (from the original)
        r1 = r13 + 8u;
        r0 = r4 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_00726d2c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r6 + 0x2a9e4u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_001435b4(r0, r1, r2, r3);
        r2 = r0;
        r3 = 0xfu;  // (from the original)
        r1 = r13 + 8u;
        r0 = r7;
        guest::cpu()->r[13] = r13;
        r0 = call_0034a784(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = r5 + 1u;
        guest::preempt();
    } while (r5 < 3u);
    r0 = r4 + 0x369e4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001435b4(r0, r1, r2, r3);
    r1 = r4 + 0x38894u;  // (from the original)
    *gptr<u32>(r1) = u32(r0);
    *gptr<u32>(r4 + 0x38898u) = u32(0x400u);  // (from the original)
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0055bc90
GUEST_EXPORT(0x0055bc90, d_0055bc90::f_0055bc90);

// f_0055c0c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0055c0c8 {

struct __attribute__((packed)) Object_0055c0c8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0055c0c8_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x0055badc, u32(u32, u32, u32, u32)> call_0055badc;  // (from the original)
inline constexpr guest::Function<0x0055bc90, u32(u32, u32, u32, u32)> call_0055bc90;  // (from the original)
inline constexpr guest::Function<0x00726a54, u32(u32, u32, u32, u32)> call_00726a54;  // (from the original)

u32 f_0055c0c8(gptr<Object_0055c0c8_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r0 = r2;
    r2 = r3;
    r3 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    arg0->word_0 = u32(r1);
    r1 = r0;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0055badc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0055bc90(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4 + 0x388a0u;  // (from the original)
    r0 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00726a54(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0 - r4;
    r0 = 0x398a0u;  // (from the original)
    r5 = r4 + 0x398a4u;  // (from the original)
    *gptr<u32>(r0 + r4) = u32(r1 - 0x388a0u);  // (from the original)
    r1 = 0xf0201u;  // (from the original)
    r6 = 0u;
    *gptr<u32>(r5) = u32(r6);
    r5 = r5 + 4u;
    r0 = r1 ^ u32(s32(r0) >> 0x10);  // (from the original)
    *gptr<u32>(r5) = u32(r1);
    r5 = r5 + 4u;
    r1 = 0x98u;  // (from the original)
    *gptr<u32>(r5) = u32(r6);
    r5 = r5 + 4u;
    *gptr<u32>(r5) = u32(r0);
    r5 = r5 + 4u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r3 = 0x803f0232u;  // (from the original)
    r12 = r5 + 0x98u;  // (from the original)
    *gptr<u32>(r5 + 4u) = u32(0x823f0203u);  // (from the original)
    r0 = r12;
    r1 = 0u;
    r2 = 0xcu;  // (from the original)
    do {
L_55c164:;
        res = r2 - 1u;
        r2 = res;
        ea = r0 + 4u;
        *gptr<u32>(ea) = u32(r3);
        *gptr<u32>(ea + 4) = u32(r6);
        *gptr<u32>(r0 + 0xcu) = u32(r6);  // (from the original)
        *gptr<u32>(r0 + 0x10u) = u32(r6);  // (from the original)
        *gptr<u32>(r0) = u32(r1);
        r0 = r0 + 0x14u;  // (from the original)
        r1 = r1 + 1u;
        *gptr<u32>(r0) = u32(r6);
        r0 = r0 + 4u;
        guest::preempt();
    } while (res != 0);
    r0 = r12 + 0x120u - r4 - 0x398a4u;  // (from the original)
    *gptr<u32>(r4 + 0x39aa4u) = u32(r0);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0055c0c8
GUEST_EXPORT(0x0055c0c8, d_0055c0c8::f_0055c0c8);

// f_0055c1b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0055c1b8 {

struct __attribute__((packed)) Object_0055c1b8_0 {
    u32 word_0;
    u8 unknown_4[0x129d2];  // (not used here)
    u8 byte_129d6;
    u8 unknown_129d7[0x26ec9];  // (not used here)
    u32 word_398a0;
};
GUEST_OFFSET(Object_0055c1b8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0055c1b8_0, byte_129d6, 0x129d6);  // (from the original)
GUEST_OFFSET(Object_0055c1b8_0, word_398a0, 0x398a0);  // (from the original)

struct __attribute__((packed)) Object_0055c1b8_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_0055c1b8_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0055c1b8_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0055c1b8_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0055c1b8_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0055c1b8_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0055c1b8_1, word_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)

u32 f_0055c1b8(gptr<Object_0055c1b8_0> arg0, gptr<Object_0055c1b8_1> arg1) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r0 = r1;
    ea = arg0->word_0 + 0x60768u;  // (from the original)
    r1 = ea;
    if (*gptr<u32>(ea) != 2u) {
        *gptr<u32>(r1) = u32(2u);
        r3 = 0x804f0290u;  // (from the original)
        r6 = r4 + 0x398a0u;  // (from the original)
        r1 = 0xaf51ccu;  // (from the original)
        arg1->word_0 = u32(u32(arg0->byte_129d6) | 0x80000000u);  // (from the original)
        arg1->word_4 = u32(r3);
        arg1->word_8 = u32(*gptr<u32>(r1 + 0xcu));  // (from the original)
        arg1->word_c = u32(*gptr<u32>(r1 + 8u));
        arg1->word_10 = u32(*gptr<u32>(r1 + 4u));
        arg1->word_14 = u32(*gptr<u32>(r1));
        r0 = r0 + 0x18u;  // (from the original)
        r2 = arg0->word_398a0;
        r5 = r0;
        r1 = r4 + 0x388a0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fbb30(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        r0 = *gptr<u32>(r6);
        r6 = r4 + 0x39aa4u;  // (from the original)
        r5 = r5 + (r0 & ~3u);
        r2 = *gptr<u32>(r6);
        r1 = r4 + 0x398a4u;  // (from the original)
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_002fbb30(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r0 = (*gptr<u32>(r6) & ~3u) + r5;
    }
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0055c1b8
GUEST_EXPORT(0x0055c1b8, d_0055c1b8::f_0055c1b8);

// f_0055c27c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0055c27c {

struct __attribute__((packed)) Object_0055c27c_0 {
    u8 unknown_0[0x39aa4];  // (not used here)
    u32 word_39aa4;
};
GUEST_OFFSET(Object_0055c27c_0, word_39aa4, 0x39aa4);  // (from the original)

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)

u32 f_0055c27c(gptr<Object_0055c27c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r1;
    r4 = r0 + 0x39aa4u;  // (from the original)
    r2 = arg0->word_39aa4;
    r1 = r0 + 0x398a4u;  // (from the original)
    r0 = r5;
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = (*gptr<u32>(r4) & ~3u) + r5;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0055c27c
GUEST_EXPORT(0x0055c27c, d_0055c27c::f_0055c27c);

// f_0055c2b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0055c2b0 {

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x0034a5e4, u32(u32, u32, u32, u32)> call_0034a5e4;  // (from the original)

u32 f_0055c2b0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    r0 = r0 + 4u;
    guest::cpu()->r[13] -= 8u;
    r0 = call_0034a5e4(r0, r1, r2, r3);
    r0 = r0 - 4u;
    r2 = r0 + 0x1295cu;  // (from the original)
    r4 = 0u;
    r3 = 2u;
    *gptr<u8>(r2) = u8(r4);
    r1 = 0xffu;  // (from the original)
    *gptr<u8>(r2 + 1u) = u8(r3);
    *gptr<u8>(r2 + 2u) = u8(r1);
    *gptr<u8>(r2 + 3u) = u8(r1);
    *gptr<u32>(r2 + 4u) = u32(r4);
    r2 = r0 + 0x12964u;  // (from the original)
    *gptr<u8>(r2) = u8(r4);
    *gptr<u8>(r2 + 1u) = u8(r3);
    *gptr<u8>(r2 + 2u) = u8(r1);
    *gptr<u8>(r2 + 3u) = u8(r1);
    *gptr<u32>(r2 + 4u) = u32(r4);
    r2 = r0 + 0x1296cu;  // (from the original)
    *gptr<u8>(r2) = u8(r4);
    *gptr<u8>(r2 + 1u) = u8(r3);
    *gptr<u8>(r2 + 2u) = u8(r1);
    *gptr<u8>(r2 + 3u) = u8(r1);
    *gptr<u32>(r2 + 4u) = u32(r4);
    r2 = r0 + 0x12974u;  // (from the original)
    *gptr<u8>(r2) = u8(r4);
    *gptr<u8>(r2 + 1u) = u8(r3);
    *gptr<u8>(r2 + 2u) = u8(r1);
    *gptr<u8>(r2 + 3u) = u8(r1);
    *gptr<u32>(r2 + 4u) = u32(r4);
    r2 = r0 + 0x1297cu;  // (from the original)
    *gptr<u8>(r2) = u8(r4);
    *gptr<u8>(r2 + 1u) = u8(r3);
    *gptr<u8>(r2 + 2u) = u8(r1);
    *gptr<u8>(r2 + 3u) = u8(r1);
    *gptr<u32>(r2 + 4u) = u32(r4);
    r2 = r0 + 0x12984u;  // (from the original)
    *gptr<u8>(r2) = u8(r4);
    *gptr<u8>(r2 + 1u) = u8(r3);
    *gptr<u8>(r2 + 2u) = u8(r1);
    *gptr<u8>(r2 + 3u) = u8(r1);
    *gptr<u32>(r2 + 4u) = u32(r4);
    r2 = r0 + 0x1298cu;  // (from the original)
    *gptr<u8>(r2) = u8(r4);
    *gptr<u8>(r2 + 1u) = u8(r3);
    *gptr<u8>(r2 + 2u) = u8(r1);
    *gptr<u8>(r2 + 3u) = u8(r1);
    *gptr<u32>(r2 + 4u) = u32(r4);
    r2 = r0 + 0x12994u;  // (from the original)
    *gptr<u8>(r2) = u8(r4);
    *gptr<u8>(r2 + 1u) = u8(r3);
    *gptr<u8>(r2 + 2u) = u8(r1);
    *gptr<u8>(r2 + 3u) = u8(r1);
    *gptr<u32>(r2 + 4u) = u32(r4);
    r2 = r0 + 0x1299cu;  // (from the original)
    *gptr<u8>(r2) = u8(r4);
    *gptr<u8>(r2 + 1u) = u8(r3);
    *gptr<u8>(r2 + 2u) = u8(r1);
    *gptr<u8>(r2 + 3u) = u8(r1);
    *gptr<u32>(r2 + 4u) = u32(r4);
    r2 = r0 + 0x129a4u;  // (from the original)
    *gptr<u8>(r2) = u8(r4);
    *gptr<u8>(r2 + 1u) = u8(r3);
    *gptr<u8>(r2 + 2u) = u8(r1);
    *gptr<u8>(r2 + 3u) = u8(r1);
    *gptr<u32>(r2 + 4u) = u32(r4);
    r2 = r0 + 0x129acu;  // (from the original)
    r12 = 1u;
    *gptr<u8>(r2) = u8(r4);
    *gptr<u8>(r2 + 1u) = u8(r3);
    *gptr<u8>(r2 + 2u) = u8(r1);
    *gptr<u8>(r2 + 3u) = u8(r1);
    *gptr<u32>(r2 + 4u) = u32(r4);
    r2 = r0 + 0x129b4u;  // (from the original)
    *gptr<u8>(r2) = u8(r4);
    *gptr<u8>(r2 + 1u) = u8(r3);
    *gptr<u8>(r2 + 2u) = u8(r1);
    *gptr<u8>(r2 + 3u) = u8(r1);
    *gptr<u32>(r2 + 4u) = u32(r4);
    r2 = r0 + 0x129bcu;  // (from the original)
    *gptr<u8>(r2) = u8(r4);
    *gptr<u8>(r2 + 1u) = u8(r3);
    *gptr<u8>(r2 + 2u) = u8(r1);
    *gptr<u8>(r2 + 3u) = u8(r1);
    *gptr<u32>(r2 + 4u) = u32(r4);
    r2 = r0 + 0x129c4u;  // (from the original)
    *gptr<u8>(r2) = u8(r4);
    *gptr<u8>(r2 + 1u) = u8(r3);
    *gptr<u8>(r2 + 2u) = u8(r1);
    *gptr<u8>(r2 + 3u) = u8(r1);
    *gptr<u32>(r2 + 4u) = u32(r4);
    r2 = r0 + 0x129ccu;  // (from the original)
    *gptr<u8>(r2) = u8(r4);
    *gptr<u8>(r2 + 1u) = u8(r3);
    *gptr<u8>(r2 + 2u) = u8(r1);
    *gptr<u8>(r2 + 3u) = u8(r1);
    *gptr<u32>(r2 + 4u) = u32(r4);
    r2 = r0 + 0x129d4u;  // (from the original)
    *gptr<u8>(r2) = u8(r12);
    *gptr<u8>(r2 + 1u) = u8(r3);
    *gptr<u8>(r2 + 2u) = u8(r1);
    *gptr<u8>(r2 + 3u) = u8(r1);
    *gptr<u32>(r2 + 4u) = u32(r4);
    r2 = r0 + 0x129dcu;  // (from the original)
    *gptr<u8>(r2) = u8(r12);
    *gptr<u8>(r2 + 1u) = u8(4u);
    *gptr<u8>(r2 + 2u) = u8(r1);
    *gptr<u8>(r2 + 3u) = u8(r1);
    *gptr<u32>(r2 + 4u) = u32(r4);
    r1 = 0x34ab24u;  // (from the original)
    r3 = 3u;
    r2 = 0x790u;  // (from the original)
    r0 = r0 + 0x371e4u;  // (from the original)
    r0 = call_00301d0c(r0, r1, r2, r3);
    r0 = r0 - 0x371e4u;  // (from the original)
    r1 = r0 + 0x38894u;  // (from the original)
    *gptr<u32>(r1) = u32(r4);
    *gptr<u32>(r1 + 4u) = u32(r4);
    *gptr<u8>(r1 + 8u) = u8(r4);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0055c2b0
GUEST_EXPORT(0x0055c2b0, d_0055c2b0::f_0055c2b0);

// f_0055c4ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0055c4ec {

inline constexpr guest::Function<0x00132174, u32(u32, u32, u32, u32)> call_00132174;  // (from the original)
inline constexpr guest::Function<0x00540c9c, u32(u32, u32, u32, u32)> call_00540c9c;  // (from the original)

u32 f_0055c4ec(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18;  // (from the original)
    r4 = r1;
    r5 = r2;
    r1 = 0u;
    r0 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00540c9c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0u;
    r0 = r0 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00540c9c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 8u;
    r6 = 0u;
    r1 = r0 + 0x18u;  // (from the original)
    *gptr<u32>(r0 + 0x10u) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x14u) = u32(r6);  // (from the original)
    *gptr<u32>(r1) = u32(r0);
    *gptr<u32>(r1 + 4) = u32(r6);
    guest::cpu()->r[13] = r13;
    r0 = call_00132174(r0, r1, r2, r3);
    r12 = 0x8c9f1cu;  // (from the original)
    ea = r0;
    *gptr<u32>(ea) = u32(0x904a10u);  // (from the original)
    ea = r0 + 0x24u;  // (from the original)
    *gptr<u32>(ea) = u32(r0 + 0x2cu);  // (from the original)
    r3 = 0x20u;  // (from the original)
    ea = r0 + 0x20u;  // (from the original)
    *gptr<u32>(ea) = u32(0x90558cu);  // (from the original)
    ea = r0 + 0x28u;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    ea = r0 + 0x24u;  // (from the original)
    r2 = *gptr<u32>(ea);
    ea = r12;
    *gptr<u8>(r3 + (r2 - 1u)) = u8(u32(*gptr<u8>(ea)));
    ea = r0 + 0x20u;  // (from the original)
    *gptr<u32>(ea) = u32(0x905120u);  // (from the original)
    ea = r0 + 0x24u;  // (from the original)
    r2 = *gptr<u32>(ea);
    ea = r12;
    *gptr<u8>(r2) = u8(u32(*gptr<u8>(ea)));
    *gptr<u32>(r0 + 0x20u) = u32(0x9048ecu);  // (from the original)
    *gptr<u32>(r0) = u32(0x905488u);  // (from the original)
    r0 = r0 - 0x14u;  // (from the original)
    ea = r0;
    *gptr<u32>(ea) = u32(r4);
    ea = r0 + 0x60u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    *gptr<u32>(ea + 4) = u32(r6);
    r1 = 1u;
    *gptr<u32>(r0 + 0x80u) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x68u) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x6cu) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x70u) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x74u) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x78u) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x7cu) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x84u) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x88u) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x8cu) = u32(r6);  // (from the original)
    *gptr<u8>(r0 + 0x9cu) = u8(r1);  // (from the original)
    *gptr<u32>(r0 + 0x254u) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x258u) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x250u) = u32(r6);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0055c4ec
GUEST_EXPORT(0x0055c4ec, d_0055c4ec::f_0055c4ec);

// f_0055c5ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0055c5ec {

inline constexpr guest::Function<0x00545aa8, u32(u32, u32, u32, u32)> call_00545aa8;  // (from the original)

u32 f_0055c5ec(u32 r0) {
    r0 = r0 + 0x14u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r0 = call_00545aa8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r0 - 0x14u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0055c5ec
GUEST_EXPORT(0x0055c5ec, d_0055c5ec::f_0055c5ec);

// f_0055c670: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0055c670 {

inline constexpr guest::Function<0x0012f204, u32(u32, u32, u32, u32)> call_0012f204;  // (from the original)
inline constexpr guest::Function<0x00132174, u32(u32, u32, u32, u32)> call_00132174;  // (from the original)
inline constexpr guest::Function<0x0014f5dc, u32(u32, u32, u32, u32)> call_0014f5dc;  // (from the original)

u32 f_0055c670(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00132174(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 + 0x10u;  // (from the original)
    *gptr<u32>(r0) = u32(0x905a2cu);  // (from the original)
    r1 = 0u;
    *gptr<u32>(r0 + 0x10u) = u32(r1);  // (from the original)
    r0 = r13;
    *gptr<u32>(r13) = u32(r1);
    guest::cpu()->r[13] = r13;
    r0 = call_0014f5dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0 >> 0x1f;  // (from the original)
    if (res == 0) {
        r2 = *gptr<u32>(r13);
        r0 = 0u;
        *gptr<u32>(r4) = u32(r2);
    }
    res = r0 >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_0012f204(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    r0 = r4 - 0x10u;  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0055c670
GUEST_EXPORT(0x0055c670, d_0055c670::f_0055c670);

// f_0055cabc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0055cabc {

struct __attribute__((packed)) Object_0055cabc_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_0055cabc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0055cabc_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0055cabc_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0055cabc_0, word_c, 0xc);  // (from the original)


u32 f_0055cabc(gptr<Object_0055cabc_0> arg0, u32 r1) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    r2 = 0x6c078965u;  // (from the original)
    r1 = (r1 ^ r1 >> 0x1e) * r2 + 1u;  // (from the original)
    r2 = (r1 ^ r1 >> 0x1e) * r2 + 2u;  // (from the original)
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(r2);
    r3 = (r2 ^ r2 >> 0x1e) * 0x6c078965u + 3u;  // (from the original)
    ea = r0 + 8u;
    arg0->word_8 = u32(r3);
    r0 = ea;
    r1 = (r3 ^ r3 >> 0x1e) * 0x6c078965u + 4u;  // (from the original)
    arg0->word_c = u32(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0055cabc
GUEST_EXPORT(0x0055cabc, d_0055cabc::f_0055cabc);

// f_0055cd54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0055cd54 {

struct __attribute__((packed)) Object_0055cd54_0 {
    u8 unknown_0[0x54];  // (not used here)
    u32 word_54;
    u8 unknown_58[0x24];  // (not used here)
    u32 word_7c;
    u32 word_80;
    u32 word_84;
    u32 word_88;
    u32 word_8c;
};
GUEST_OFFSET(Object_0055cd54_0, word_54, 0x54);  // (from the original)
GUEST_OFFSET(Object_0055cd54_0, word_7c, 0x7c);  // (from the original)
GUEST_OFFSET(Object_0055cd54_0, word_80, 0x80);  // (from the original)
GUEST_OFFSET(Object_0055cd54_0, word_84, 0x84);  // (from the original)
GUEST_OFFSET(Object_0055cd54_0, word_88, 0x88);  // (from the original)
GUEST_OFFSET(Object_0055cd54_0, word_8c, 0x8c);  // (from the original)

inline constexpr guest::Function<0x00128e80, u32(u32, u32, u32, u32)> call_00128e80;  // (from the original)
inline constexpr guest::Function<0x0012f204, u32(u32, u32, u32, u32)> call_0012f204;  // (from the original)
inline constexpr guest::Function<0x00139504, u32(u32, u32, u32, u32)> call_00139504;  // (from the original)

u32 f_0055cd54(gptr<Object_0055cd54_0> arg0, u32 r1, float S0, float S1) {
    u32 b = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x40u;  // (from the original)
    if (arg0->word_7c == 0) {
        r12 = arg0->word_80;
        *gptr<u32>(r13 + 0x14u) = u32(r4);  // (from the original)
        S0 = std::bit_cast<float>(arg0->word_88);
        S1 = std::bit_cast<float>(arg0->word_8c);
        r3 = r13 + 0x14u;  // (from the original)
        *gptr<u32>(r13 + 0x20u) = u32(4u);  // (from the original)
        r2 = 0x55cc40u;  // (from the original)
        *gptr<u32>(r13 + 0x24u) = u32(0x1394e4u);  // (from the original)
        *gptr<u32>(r13 + 0x28u) = u32(0x139500u);  // (from the original)
        *gptr<u32>(r13 + 0x2cu) = u32(0x1394f4u);  // (from the original)
        *gptr<u32>(r13) = u32(arg0->word_54 + arg0->word_84);
        r0 = r13 + 4u;
        *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
        *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
        r0 = r12;
        *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
        r1 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_00128e80(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r5 = r0;
        if ((r0 & 0x7e00000u) != 0x600000u) {  // (from the original)
            b = r5 >> 0x1f;  // (from the original)
            r1 = b;
            r0 = r5;
            if (b != 0) {
                guest::cpu()->r[13] = r13;
                guest::cpu()->s[0] = S0;
                guest::cpu()->s[1] = S1;
                r0 = call_0012f204(r0, r1, r2, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                S0 = guest::cpu()->s[0];
                S1 = guest::cpu()->s[1];
            }
        }
        res = r5 & 0x80000000u;  // (from the original)
        if (!(res >> 0x1f)) {  // (from the original)
            goto L_55ce00;
        }
    }
    r0 = 0u;
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_55ce00:;
    r1 = *gptr<u32>(*gptr<u32>(r4 + 0x80u));  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00139504(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    res = r0 >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_0012f204(r0, r1, r2, r3);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
    }
    r1 = *gptr<u32>(r4 + 0x7cu);  // (from the original)
    *gptr<u32>(r4 + 0x78u) = u32(*gptr<u32>(r13));  // (from the original)
    if (r1 == 0) {
        *gptr<u32>(r4 + 0x7cu) = u32(1u);  // (from the original)
    }
    r0 = 1u;
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0055cd54
GUEST_EXPORT(0x0055cd54, d_0055cd54::f_0055cd54);

// f_0055d510: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0055d510 {

struct __attribute__((packed)) Object_0055d510_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_0055d510_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0055d510_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0055d510_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0055d510_0, word_c, 0xc);  // (from the original)


void f_0055d510(gptr<Object_0055d510_0> arg0) {
    u32 fpsr = guest::cpu()->fpscr;
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    S0 = std::bit_cast<float>(*gptr<u32>(0x55d5b8u));  // (from the original)
    S2 = std::bit_cast<float>(arg0->word_0);
    S1 = std::bit_cast<float>(*gptr<u32>(0x55d5bcu));  // (from the original)
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S2, S0);  // (from the original)
    if (!(fpsr >> 0x1d & 1)) {  // (from the original)
        S2 = S0;
        goto L_55d53c;
    }
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S2, S1);  // (from the original)
    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        S2 = S1;
    }
L_55d53c:;
    arg0->word_0 = u32(std::bit_cast<u32>(S2));
    S2 = std::bit_cast<float>(arg0->word_4);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S2, S0);  // (from the original)
    if (!(fpsr >> 0x1d & 1)) {  // (from the original)
        S2 = S0;
        goto L_55d564;
    }
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S2, S1);  // (from the original)
    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        S2 = S1;
    }
L_55d564:;
    arg0->word_4 = u32(std::bit_cast<u32>(S2));
    S2 = std::bit_cast<float>(arg0->word_8);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S2, S0);  // (from the original)
    if (!(fpsr >> 0x1d & 1)) {  // (from the original)
        S2 = S0;
        goto L_55d58c;
    }
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S2, S1);  // (from the original)
    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        S2 = S1;
    }
L_55d58c:;
    arg0->word_8 = u32(std::bit_cast<u32>(S2));
    S2 = std::bit_cast<float>(arg0->word_c);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S2, S0);  // (from the original)
    if (!(fpsr >> 0x1d & 1)) {  // (from the original)
        S2 = S0;
        arg0->word_c = u32(std::bit_cast<u32>(S2));
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return;
    }
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S2, S1);  // (from the original)
    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        S2 = S1;
    }
    arg0->word_c = u32(std::bit_cast<u32>(S2));
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_0055d510
GUEST_EXPORT(0x0055d510, d_0055d510::f_0055d510);

// f_0055d5c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0055d5c0 {

struct __attribute__((packed)) Object_0055d5c0_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0055d5c0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0055d5c0_0, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Object_0055d5c0_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0055d5c0_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0055d5c0_1, word_4, 0x4);  // (from the original)


void f_0055d5c0(gptr<Object_0055d5c0_0> arg0, gptr<Object_0055d5c0_1> arg1, float S0) {
    u32 fpsr = guest::cpu()->fpscr;
    float S1 = 0;
    float S4 = 0;
    S4 = S0;
    S1 = std::bit_cast<float>(*gptr<u32>(0x55d62cu));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x55d630u));  // (from the original)
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S4, S1);  // (from the original)
    if (!(fpsr >> 0x1d & 1)) {  // (from the original)
        S4 = S1;
        goto L_55d5e8;
    }
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S4, S0);  // (from the original)
    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        S4 = S0;
    }
L_55d5e8:;
    S0 = std::bit_cast<float>(arg0->word_0);
    S0 = S0 + (std::bit_cast<float>(arg1->word_0) - S0) * S4;
    S1 = std::bit_cast<float>(arg0->word_4);
    S1 = S1 + (std::bit_cast<float>(arg1->word_4) - S1) * S4;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_0055d5c0
GUEST_EXPORT(0x0055d5c0, d_0055d5c0::f_0055d5c0);

// f_0055d634: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0055d634 {

struct __attribute__((packed)) Object_0055d634_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_0055d634_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0055d634_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0055d634_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0055d634_0, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Object_0055d634_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_0055d634_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0055d634_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0055d634_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0055d634_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Object_0055d634_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_0055d634_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0055d634_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0055d634_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0055d634_2, word_c, 0xc);  // (from the original)


void f_0055d634(gptr<Object_0055d634_0> arg0, gptr<Object_0055d634_1> arg1, gptr<Object_0055d634_2> arg2, float S0) {
    u32 fpsr = guest::cpu()->fpscr;
    float S1 = 0;
    float S2 = 0;
    S2 = std::bit_cast<float>(*gptr<u32>(0x55d6acu));  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(0x55d6b0u));  // (from the original)
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S2);  // (from the original)
    if (!(fpsr >> 0x1d & 1)) {  // (from the original)
        S0 = S2;
        goto L_55d658;
    }
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S1);  // (from the original)
    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        S0 = S1;
    }
L_55d658:;
    S1 = std::bit_cast<float>(arg1->word_c);
    arg0->word_c = u32(std::bit_cast<u32>(S1 + (std::bit_cast<float>(arg2->word_c) - S1) * S0));
    S1 = std::bit_cast<float>(arg1->word_0);
    arg0->word_0 = u32(std::bit_cast<u32>(S1 + (std::bit_cast<float>(arg2->word_0) - S1) * S0));
    S1 = std::bit_cast<float>(arg1->word_4);
    arg0->word_4 = u32(std::bit_cast<u32>(S1 + (std::bit_cast<float>(arg2->word_4) - S1) * S0));
    S1 = std::bit_cast<float>(arg1->word_8);
    S1 = S1 + (std::bit_cast<float>(arg2->word_8) - S1) * S0;
    arg0->word_8 = u32(std::bit_cast<u32>(S1));
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_0055d634
GUEST_EXPORT(0x0055d634, d_0055d634::f_0055d634);

// f_0055debc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0055debc {

struct __attribute__((packed)) Object_0055debc_0 {
    u8 unknown_0[0x74];  // (not used here)
    u8 byte_74;
};
GUEST_OFFSET(Object_0055debc_0, byte_74, 0x74);  // (from the original)

inline constexpr guest::Function<0x0013bb00, u32(u32, u32, u32, u32)> call_0013bb00;  // (from the original)
inline constexpr guest::Function<0x0055dfa4, u32(u32, u32, u32, u32)> call_0055dfa4;  // (from the original)
inline constexpr guest::Function<0x0074e45c, u32(u32, u32, u32, u32)> call_0074e45c;  // (from the original)

u32 f_0055debc(gptr<Object_0055debc_0> arg0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r5 = r0;
    r6 = r1;
    r3 = u32(arg0->byte_74);
    r7 = r2;
    r0 = call_0074e45c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    if (r0 != 0) {
        r3 = *gptr<u32>(r4 + 0xcu);  // (from the original)
        r0 = u32(*gptr<u16>(r4 + 0xau)) + 0x10u;  // (from the original)
        r1 = r4 + r0 + (r3 - r6);
        r2 = r6 + (r1 - (r1 & ~(r7 - 1u)));
        r1 = r3 - r2;
        if (!u32(r1 >= 0x10u) || u32(r1 == 0x10u)) {  // (from the original)
            goto L_55df54;
        }
        r1 = r1 - 0x10u;  // (from the original)
        *gptr<u32>(r4 + 0xcu) = u32(r1);  // (from the original)
        res = r0 + r4 + r1;
        r4 = res;
        if (res != 0) {
            r0 = 0u;
            *gptr<u32>(r4) = u32(r0);
            *gptr<u32>(r4 + 4u) = u32(r0);
            *gptr<u16>(r4 + 8u) = u16(r0);
            *gptr<u16>(r4 + 0xau) = u16(r0);  // (from the original)
            *gptr<u32>(r4 + 0xcu) = u32(r0);  // (from the original)
        }
        r1 = r4;
        r0 = r5;
        *gptr<u32>(r4 + 0xcu) = u32(r2);  // (from the original)
        r0 = call_0055dfa4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r0 = r4;
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_55df54:;
    res = r1 << 0x10 >> 0x10;  // (from the original)
    r0 = res;
    *gptr<u16>(r4 + 0xau) = u16(r0);  // (from the original)
    if (res != 0) {
        r1 = r4 + 1u;
        *gptr<u32>(r0 + 0x10u + r4 - 4u) = u32(r1);  // (from the original)
    }
    *gptr<u32>(r4 + 0xcu) = u32(r2);  // (from the original)
    r0 = *gptr<u32>(r5 + 0x84u) + r4;  // (from the original)
    r0 = call_0013bb00(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4;
    *gptr<u32>(r5 + 0x80u) = u32(*gptr<u32>(r5 + 0x80u) - 1u);  // (from the original)
    r0 = r5;
    r0 = call_0055dfa4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0055debc
GUEST_EXPORT(0x0055debc, d_0055debc::f_0055debc);

// f_0055dfa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0055dfa4 {

struct __attribute__((packed)) Object_0055dfa4_0 {
    u8 unknown_0[0x50];  // (not used here)
    u8 byte_50;
    u8 unknown_51[0x43];  // (not used here)
    u32 word_94;
};
GUEST_OFFSET(Object_0055dfa4_0, byte_50, 0x50);  // (from the original)
GUEST_OFFSET(Object_0055dfa4_0, word_94, 0x94);  // (from the original)

inline constexpr guest::Function<0x00138560, u32(u32, u32, u32, u32)> call_00138560;  // (from the original)
inline constexpr guest::Function<0x00560688, u32(u32, u32, u32, u32)> call_00560688;  // (from the original)

u32 f_0055dfa4(gptr<Object_0055dfa4_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r3 = u32(arg0->byte_50);
    r2 = arg0->word_94;
    r4 = r0 + 0x88u;  // (from the original)
    r1 = r1 + r2;
    r0 = r4;
    if (r3 != 1u) {
        r0 = call_00560688(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r0 = *gptr<u32>(r4 + 8u) + 1u;
        *gptr<u32>(r4 + 8u) = u32(r0);
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_00138560(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = *gptr<u32>(r4 + 8u) + 1u;
    *gptr<u32>(r4 + 8u) = u32(r0);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0055dfa4
GUEST_EXPORT(0x0055dfa4, d_0055dfa4::f_0055dfa4);

// f_0055ed48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0055ed48 {

inline constexpr guest::Function<0x0012c40c, u32(u32, u32, u32, u32)> call_0012c40c;  // (from the original)
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x00560b0c, u32(u32, u32, u32, u32)> call_00560b0c;  // (from the original)
inline constexpr guest::Function<0x00749bb4, u32(u32, u32, u32, u32)> call_00749bb4;  // (from the original)

u32 f_0055ed48(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
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
    r6 = r0 + 4u;
    r7 = r0;
    r13 = r13 - 0x38u;  // (from the original)
    r5 = r1;
    r4 = r2;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00135740(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = *gptr<u32>(r5 + 4);
    r10 = 0x975338u;  // (from the original)
    r11 = 0u;
    *gptr<u32>(r13) = u32(*gptr<u32>(r5));
    *gptr<u32>(r13 + 4) = u32(r1);
    r9 = u32(*gptr<u8>(r5 + 0x78u));  // (from the original)
    r1 = *gptr<u32>(r4 + (*gptr<u32>(r4 + 0x14u) << 2));  // (from the original)
    if (r1 == 0) {
        r8 = 1u;
        goto L_55ed9c;
    }
    r0 = *gptr<u32>(r10);
    guest::cpu()->r[13] = r13;
    r0 = call_0012c40c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r8 = r0;
L_55ed9c:;
    r1 = r13 + 8u;
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r7);
    *gptr<u32>(ea + 8) = u32(r11);
    *gptr<u32>(r13 + 0x10u) = u32(*gptr<u32>(r5 + 0x60u));  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00749bb4(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    zf = r8 == 1u;
    r4 = r0;
    if (!zf) {
        r0 = *gptr<u32>(r10);
    }
    r1 = r8;
    if (!zf) {
        guest::cpu()->r[13] = r13;
        r0 = call_0012c40c(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
    }
    ea = r13;
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    ea = r4 + 0x64u;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u8>(r4 + 0x61u) = u8(r9);  // (from the original)
    r0 = *gptr<u32>(r5 + 0x5cu);  // (from the original)
    if (r0 != 0) {
        r0 = r0 + 0x10u;  // (from the original)
        if (r4 == 0) {
            r1 = 0u;
        } else {
            r1 = r4 + 0x10u;  // (from the original)
        }
        guest::cpu()->r[13] = r13;
        r0 = call_00560b0c(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
    }
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00137e84(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0055ed48
GUEST_EXPORT(0x0055ed48, d_0055ed48::f_0055ed48);

// f_0055f1ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0055f1ac {

struct __attribute__((packed)) Object_0055f1ac_0 {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
};
GUEST_OFFSET(Object_0055f1ac_0, word_20, 0x20);  // (from the original)

inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x0034ba38, u32(u32, u32, u32, u32)> call_0034ba38;  // (from the original)
inline constexpr guest::Function<0x0055f0e4, u32(u32, u32, u32, u32)> call_0055f0e4;  // (from the original)

u32 f_0055f1ac(gptr<Object_0055f1ac_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = *gptr<u32>(arg0->word_20 + 0x20u) + 4u;  // (from the original)
    r0 = call_0034ba38(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r1 = r5;
        r0 = r4;
        r0 = call_0055f0e4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0 = *gptr<u32>(*gptr<u32>(r4 + 0x20u) + 0x20u);  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        r0 = r0 + 4u;
        return call_00137e84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0055f1ac
GUEST_EXPORT(0x0055f1ac, d_0055f1ac::f_0055f1ac);

// f_0055fcf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0055fcf4 {

struct __attribute__((packed)) Object_0055fcf4_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_0055fcf4_0, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x0012bfec, u32(u32, u32, u32, u32)> call_0012bfec;  // (from the original)
inline constexpr guest::Function<0x0012c528, u32(u32, u32, u32, u32)> call_0012c528;  // (from the original)
inline constexpr guest::Function<0x00132174, u32(u32, u32, u32, u32)> call_00132174;  // (from the original)
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x005418f8, u32(u32, u32, u32, u32)> call_005418f8;  // (from the original)
inline constexpr guest::Function<0x0055f4dc, u32(u32, u32, u32, u32)> call_0055f4dc;  // (from the original)
inline constexpr guest::Function<0x0055f900, u32(u32, u32, u32, u32)> call_0055f900;  // (from the original)
inline constexpr guest::Function<0x00560930, u32(u32, u32, u32, u32)> call_00560930;  // (from the original)

u32 f_0055fcf4(gptr<Object_0055fcf4_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
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
    u32 cf = 0;
    ea = r13 - 8;
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r14);
    r13 = r13 - 8;
    r1 = arg0->word_10;
    r4 = r0;
    r2 = 4u;
    r0 = 0x180u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fd108(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4;
    ea = r13;
    r13 = r13 + 8;
    r4 = *gptr<u32>(ea);
    r14 = *gptr<u32>(ea + 4);
    ea = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r10);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r14);  // (from the original)
    r13 = r13 - 0x30u;  // (from the original)
    r8 = r1;
    r1 = 0x905b70u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0012bfec(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    ea = r8 + 0x14u;  // (from the original)
    r1 = *gptr<u32>(ea);
    r0 = r0 - 4u;
    r9 = 0u;
    ea = r0 + 0x20u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r9);
    r1 = r0 + 0x2cu;  // (from the original)
    ea = r0 + 0x28u;  // (from the original)
    *gptr<u32>(ea) = u32(r9);
    ea = r0 + 0x30u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r9);
    ea = r0 + 0x2cu;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    r1 = r0 + 0x38u;  // (from the original)
    ea = r0 + 0x3cu;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r9);
    ea = r0 + 0x38u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    r1 = r0 + 0x44u;  // (from the original)
    ea = r0 + 0x48u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r9);
    ea = r0 + 0x44u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    r1 = r0 + 0x50u;  // (from the original)
    ea = r0 + 0x54u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r9);
    ea = r0 + 0x50u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    r1 = r0 + 0x5cu;  // (from the original)
    ea = r0 + 0x60u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r9);
    r2 = r0 + 0x6cu;  // (from the original)
    ea = r0 + 0x5cu;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    r1 = r0 + 0x68u;  // (from the original)
    ea = r2;
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r9);
    ea = r0 + 0x68u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    ea = r0 + 0x88u;  // (from the original)
    *gptr<u32>(ea) = u32(r9);
    ea = r0 + 0x84u;  // (from the original)
    *gptr<u32>(ea) = u32(r9);
    ea = r8;
    r1 = *gptr<u32>(ea);
    ea = r0 + 0x90u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    r0 = ea + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00560930(r0, r1, r2, r3);
    r1 = *gptr<u32>(r8);
    r2 = *gptr<u32>(r8 + 4);
    r3 = *gptr<u32>(r8 + 8);
    r4 = *gptr<u32>(r8 + 0xc);  // (from the original)
    r5 = *gptr<u32>(r8 + 0x10);  // (from the original)
    r12 = *gptr<u32>(r8 + 0x14);  // (from the original)
    r0 = r0 - 0x98u;  // (from the original)
    r6 = r0 + 0x118u;  // (from the original)
    *gptr<u32>(r6) = u32(r1);
    *gptr<u32>(r6 + 4) = u32(r2);
    *gptr<u32>(r6 + 8) = u32(r3);
    *gptr<u32>(r6 + 0xc) = u32(r4);  // (from the original)
    *gptr<u32>(r6 + 0x10) = u32(r5);  // (from the original)
    *gptr<u32>(r6 + 0x14) = u32(r12);  // (from the original)
    r4 = r0 + 0x130u;  // (from the original)
    r0 = r0 + 0x140u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0012c528(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = 0x9047f8u;  // (from the original)
    r1 = 0x55ff30u;  // (from the original)
    *gptr<u32>(r0 + 0x18u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x10u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x14u) = u32(r7);  // (from the original)
    r0 = r0 - 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00132174(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r0) = u32(0x9047b0u);  // (from the original)
    *gptr<u32>(r0 + 0x3cu) = u32(r9);  // (from the original)
    *gptr<u32>(r0 + 0x44u) = u32(r9);  // (from the original)
    *gptr<u32>(r0 + 0x48u) = u32(r9);  // (from the original)
    res = r0 + 0x2cu;  // (from the original)
    r1 = res;
    *gptr<u32>(r0 + 0x4cu) = u32(r9);  // (from the original)
    if (res != 0) {
        ea = r1 + 4u;
        *gptr<u32>(ea) = u32(r9);
        ea = 0x8bb364u;  // (from the original)
        r2 = *gptr<u32>(ea);
        r3 = *gptr<u32>(ea + 4);
        ea = r1 + 8u;
        *gptr<u32>(ea) = u32(r2);
        *gptr<u32>(ea + 4) = u32(r3);
        r2 = 0x905bf0u;  // (from the original)
        *gptr<u32>(r1) = u32(r2);
    }
    r10 = 0xae53b8u;  // (from the original)
    *gptr<u32>(r0 - 0x9cu) = u32(r9);  // (from the original)
    r5 = r0 - 0x130u;  // (from the original)
    r4 = 0u;
    r6 = *gptr<u32>(r10);
    res = r6;
    if (u32(res == 0) || res >> 0x1f != (r6 & (r6 ^ res)) >> 0x1f) {  // (from the original)
        goto L_55fe98;
    }
    do {
L_55fe4c:;
        r0 = *gptr<u32>(r10);
        r3 = 1u;
        zf = r0 == r4;
        cf = r0 >= r4;
        if (cf && !zf) {
            r1 = *gptr<u32>(r10 + 8u);
        }
        if (!cf || zf) {
            r2 = 0u;
        }
        if (cf && !zf) {
            r2 = *gptr<u32>(r1 + (r4 << 2));
        }
        *gptr<u32>(r13 + 0xcu) = u32(0x55ff48u);  // (from the original)
        r1 = r13 + 8u;
        r0 = 0u;
        *gptr<u32>(r13 + 8u) = u32(r7);
        *gptr<u32>(r13) = u32(r9);
        guest::cpu()->r[13] = r13;
        r0 = call_002f6e78(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r0;
        r0 = r5 + (r4 << 2);
        r4 = r4 + 1u;
        res = r4 - r6;
        *gptr<u32>(r0 + 0x74u) = u32(r1);  // (from the original)
        guest::preempt();
    } while (res >> 0x1f != ((r4 ^ r6) & (r4 ^ res)) >> 0x1f);  // (from the original)
L_55fe98:;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0055f900(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r8 + 0xcu);  // (from the original)
    r2 = 0x80u;  // (from the original)
    r0 = r5 + 0x98u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fbb30(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r5 + 0x94u) = u32(r9);  // (from the original)
    *gptr<u8>(r5 + 0x110u) = u8(1u);  // (from the original)
    r1 = r5 + 0x94u;  // (from the original)
    r4 = r5 + 4u;
    *gptr<u32>(r5 + 0x104u) = u32(r1);  // (from the original)
    r6 = r5 + 0x98u;  // (from the original)
    r0 = r4;
    *gptr<u32>(r5 + 0xfcu) = u32(r9);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00135740(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r6 + 0x64u);  // (from the original)
    if (r0 != 0) {
        r1 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_005418f8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_00137e84(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    } else {
        r2 = 0u;
        r1 = r6;
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_0055f4dc(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_00137e84(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x10u;  // (from the original)
    r0 = r5;
    ea = r13;
    r13 = r13 + 0x20;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    r9 = *gptr<u32>(ea + 0x14);  // (from the original)
    r10 = *gptr<u32>(ea + 0x18);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[8] = r8;
    guest::cpu()->r[9] = r9;
    guest::cpu()->r[10] = r10;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0055fcf4
GUEST_EXPORT(0x0055fcf4, d_0055fcf4::f_0055fcf4);
