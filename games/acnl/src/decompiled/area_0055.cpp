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

inline guest::global<u32, 0x005501fc> global_005501fc;  // (from the original)
inline guest::global<u32, 0x00af78f0> global_00af78f0;  // (from the original)
inline constexpr guest::Function<0x0055030c, u32(u32, u32, u32, u32)> call_0055030c;  // (from the original)

u32 f_005500a0(gptr<Object_005500a0_0> arg0, u32 r1, u32 r2, float S0) {
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r4_1 = 0;
    u32 r7_1 = 0;
    u32 r4_2 = 0;
    u32 r1_1 = 0;
    float S0_1 = 0;
    u32 ea_1 = 0;
    u32 r4_3 = 0;
    u32 ea_2 = 0;
    u32 r5_1 = 0;
    u32 r4_4 = 0;
    u32 ea_3 = 0;
    u32 r3_1 = 0;
    u32 r5_2 = 0;
    float S0_2 = 0;
    u32 r4_5 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x18;  // (from the original)
    r5 = r0 + 0x83cu;  // (from the original)
    r6 = 0x2614u;  // (from the original)
    r3 = arg0->word_428;
    r12 = arg0->word_854;
    r14 = 0u;
L_5500bc:;
    r4_1 = *gptr<u32>(r0 + 0x83cu) + 1u & r12;  // (from the original)
    *gptr<u32>(r5) = u32(r4_1);
    r7_1 = r4_1 * 0x4d1u;  // (from the original)
    if (*gptr<u32>(r3 + (r6 + (r7_1 << 3))) != 0) {
        r4_2 = *gptr<u32>(r0 + 0x848u);  // (from the original)
        r14 = r14 + 1u;
        if (s32(r4_2) > s32(r14)) {
            guest::preempt();
            goto L_5500bc;
        }
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        call_0055030c(r0, 0x5501ccu, r2, r3);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        S0_1 = guest::cpu()->s[0];
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        return 0u;
    }
    ea_1 = r0 + 0x83cu;  // (from the original)
    r4_3 = *gptr<u32>(ea_1);
    ea_2 = r1 + 8u;
    r12 = 0u;
    r5_1 = r4_3 * 0x4d1u;  // (from the original)
    r14 = r0 + (*gptr<u32>(ea_2) << 2);
    r4_4 = r14;
    r0 = r3 + (r5_1 << 3);
    ea_3 = r14 + 0x42cu;  // (from the original)
    r14 = ea_3;
    r3_1 = *gptr<u32>(ea_3);
    if (r3_1 == 0) {
        goto L_5501b0;
    }
    *gptr<u32>(r3_1 + 0x2680u) = u32(r0);  // (from the original)
    r3 = r0 + 0x2680u;  // (from the original)
    *gptr<u32>(0x2684u + r0) = u32(*gptr<u32>(r14));  // (from the original)
    *gptr<u32>(r14) = u32(r0);
L_55014c:;
    *gptr<u32>(r3) = u32(r12);
    *gptr<u32>(r0 + 8u) = u32(r12);
    *gptr<u32>(r0) = u32(r2);
    *gptr<u32>(r0 + 4) = u32(r12);
    *gptr<u32>(0x260cu + r0) = u32(r12);  // (from the original)
    r5_2 = 0x260cu + 4u;  // (from the original)
    r14 = 0x260cu + 0xcu;  // (from the original)
    *gptr<u32>(0x260cu + 8u + r0) = u32(*gptr<u32>(r1 + 0xa8u));  // (from the original)
    S0_2 = std::bit_cast<float>(*global_005501fc);
    r4_5 = r0 + 0x2400u;  // (from the original)
    *gptr<u32>(r5_2 + r0) = u32(*gptr<u32>(r1 + 8u));
    *gptr<u32>(r14 + r0) = u32(r12);
    *gptr<u32>(r4_5 + 0x240u) = u32(std::bit_cast<u32>(S0_2));  // (from the original)
    *gptr<u32>(r4_5 + 0x23cu) = u32(std::bit_cast<u32>(S0_2));  // (from the original)
    *gptr<u32>(r0 + 0x4cu) = u32(*global_00af78f0);  // (from the original)
    *gptr<u32>(r0 + 0x50u) = u32(*gptr<u32>(0xaf78f0u + 4u));  // (from the original)
    r1_2 = *gptr<u32>(0xaf78f0u + 8u);  // (from the original)
    *gptr<u32>(r0 + 0x54u) = u32(r1_2);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    return r0;
L_5501b0:;
    *gptr<u32>(r4_4 + 0x42cu) = u32(r0);  // (from the original)
    r3 = r0 + 0x2680u;  // (from the original)
    *gptr<u32>(0x2684u + r0) = u32(r12);  // (from the original)
    guest::preempt();
    goto L_55014c;
}

}  // namespace d_005500a0
GUEST_EXPORT(0x005500a0, d_005500a0::f_005500a0);

// f_00550204: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00550204 {

inline guest::global<u32, 0x00550248> global_00550248;  // (from the original)
inline constexpr guest::Function<0x0014f004, u32(u32, u32, u32, u32)> call_0014f004;  // (from the original)
inline constexpr guest::Function<0x00555f90, u32(u32, u32, u32, u32)> call_00555f90;  // (from the original)

u32 f_00550204(u32 r0, u32 r1, u32 r2, float S0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    float S0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    float S0_2 = 0;
    r13 = r13 - 0x40u;  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    call_0014f004(r0_1, r2, r2, guest::cpu()->r[3]);
    S0_1 = std::bit_cast<float>(*global_00550248);
    r2_1 = r13;
    *gptr<u32>(r13 + 0x2cu) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r13 + 0x1cu) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    r0_2 = *gptr<u32>(r0 + 0x87cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    r0_3 = call_00555f90(r0_2, r1, r2_1, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    S0_2 = guest::cpu()->s[0];
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    return r0_3;
}

}  // namespace d_00550204
GUEST_EXPORT(0x00550204, d_00550204::f_00550204);

// f_00550438: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00550438 {

struct __attribute__((packed)) Object_00550438_0 {
    u8 unknown_0[0x424];  // (not used here)
    u32 word_424;
    u8 unknown_428[0x428];  // (not used here)
    u32 word_850;
};
GUEST_OFFSET(Object_00550438_0, word_424, 0x424);  // (from the original)
GUEST_OFFSET(Object_00550438_0, word_850, 0x850);  // (from the original)

inline constexpr guest::Function<0x0055030c, u32(u32, u32, u32, u32)> call_0055030c;  // (from the original)

u32 f_00550438(gptr<Object_00550438_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 r4_1 = 0;
    u32 r6_1 = 0;
    u32 r4_2 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r1 = arg0->word_424;
    r3 = arg0->word_850;
    r2 = 0u;
    r5 = 0x114u;  // (from the original)
    r12 = r0 + 0x834u;  // (from the original)
L_550454:;
    r4_1 = *gptr<u32>(r0 + 0x834u) + 1u & r3;  // (from the original)
    *gptr<u32>(r12) = u32(r4_1);
    r6_1 = r4_1 + (r4_1 << 3);
    if (*gptr<u32>(r1 + (r5 + (r6_1 + (r4_1 << 6) << 2))) != 0) {
        r4_2 = *gptr<u32>(r0 + 0x844u);  // (from the original)
        r2 = r2 + 1u;
        if (s32(r4_2) > s32(r2)) {
            guest::preempt();
            goto L_550454;
        }
        call_0055030c(r0, 0x5504bcu, r2, r3);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    *gptr<u32>(r0 + 0x870u) = u32(*gptr<u32>(r0 + 0x870u) + 1u);  // (from the original)
    r0_1 = *gptr<u32>(r0 + 0x834u);  // (from the original)
    r0_2 = r1 + (r0_1 + (r0_1 << 3) + (r0_1 << 6) << 2);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_00550438
GUEST_EXPORT(0x00550438, d_00550438::f_00550438);

// f_005504e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005504e8 {

struct __attribute__((packed)) Object_005504e8_0 {
    u8 unknown_0[0x87c];  // (not used here)
    u32 word_87c;
};
GUEST_OFFSET(Object_005504e8_0, word_87c, 0x87c);  // (from the original)

inline guest::global<u32, 0x0097e6ec> global_0097e6ec;  // (from the original)
inline guest::global<u8, 0x0097e6f0> global_0097e6f0;  // (from the original)
inline guest::global<u8, 0x0097e6f1> global_0097e6f1;  // (from the original)
inline guest::global<u8, 0x0097e6f2> global_0097e6f2;  // (from the original)
inline constexpr guest::Function<0x00556094, u32(u32, u32, u32, u32)> call_00556094;  // (from the original)

u32 f_005504e8(gptr<Object_005504e8_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r2_1 = arg0->word_87c;
    *gptr<u32>(r2_1 + 0x60768u) = u32(0u);  // (from the original)
    r0_1 = arg0->word_87c;
    r0_2 = call_00556094(r0_1, r1, r2_1, 0x60768u);  // (from the original)
    *gptr<u32>(r0 + 0x858u) = u32(0u);  // (from the original)
    *gptr<u32>(r0 + 0x85cu) = u32(0u);  // (from the original)
    *gptr<u32>(r0 + 0x860u) = u32(0u);  // (from the original)
    *gptr<u32>(r0 + 0x864u) = u32(0u);  // (from the original)
    *gptr<u32>(r0 + 0x870u) = u32(0u);  // (from the original)
    *gptr<u32>(r0 + 0x874u) = u32(0u);  // (from the original)
    *gptr<u32>(r0 + 0x878u) = u32(0u);  // (from the original)
    *global_0097e6f0 = u8(0x1cu);  // (from the original)
    *global_0097e6f1 = u8(4u);
    *global_0097e6f2 = u8(0u);
    *global_0097e6ec = u32(0u);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = 0x97e6ecu;  // (from the original)
    return r0_2;
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
    u32 r2 = arg2.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r0_2 = 0;
    float S1_2 = 0;
    float S4_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S1_3 = 0;
    float S4_2 = 0;
    float S3_2 = 0;
    float S2_2 = 0;
    float S1_4 = 0;
    float S2_3 = 0;
    float S3_3 = 0;
    float S4_3 = 0;
    u32 r0_3 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r4_1 = r1;
    r2_1 = arg2->word_0;
    r1_1 = r13 + 4u;
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    call_0014f55c(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    r0_2 = *gptr<u32>(r2 + 4u);
    if (r0_2 != 0) {
        if (r0_2 == 1u) {
            goto L_551e00;
        }
        if (r0_2 != 2u) {
            r0_3 = r2 + 8u;
            r13 = r13 + 0x18u;  // (from the original)
            guest::cpu()->r[1] = r1_2;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_1;
            return r0_3;
        }
        goto L_551e2c;
    }
    S1_2 = std::bit_cast<float>(*gptr<u32>(r13 + 4u));
    S4_1 = std::bit_cast<float>(*gptr<u32>(r4_1 + 4u));
    S2_1 = std::bit_cast<float>(*gptr<u32>(r4_1 + 8u));
    S3_1 = std::bit_cast<float>(*gptr<u32>(r13));
    r4_1 = r4_1 + 4u;
    S0_1 = S4_1 * S1_2 + S2_1 * S3_1;
    S1_1 = S2_1 * S1_2 - S4_1 * S3_1;
    goto L_551e48;
L_551e00:;
    S1_3 = std::bit_cast<float>(*gptr<u32>(r13 + 4u));
    S4_2 = std::bit_cast<float>(*gptr<u32>(r4_1 + 8u));
    S3_2 = std::bit_cast<float>(*gptr<u32>(r4_1));
    S2_2 = std::bit_cast<float>(*gptr<u32>(r13));
    S0_1 = S4_2 * S1_3 + S3_2 * S2_2;
    S1_1 = S3_2 * S1_3 - S4_2 * S2_2;
    *gptr<u32>(r4_1 + 8u) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r4_1) = u32(std::bit_cast<u32>(S1_1));
    r0_3 = r2 + 8u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r0_3;
L_551e2c:;
    S1_4 = std::bit_cast<float>(*gptr<u32>(r13 + 4u));
    S2_3 = std::bit_cast<float>(*gptr<u32>(r13));
    S3_3 = std::bit_cast<float>(*gptr<u32>(r4_1));
    S4_3 = std::bit_cast<float>(*gptr<u32>(r4_1 + 4));
    S0_1 = S3_3 * S1_4 + S4_3 * S2_3;
    S1_1 = S4_3 * S1_4 - S3_3 * S2_3;
L_551e48:;
    *gptr<u32>(r4_1) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r4_1 + 4) = u32(std::bit_cast<u32>(S1_1));
    r0_3 = r2 + 8u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r0_3;
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

inline guest::global<u32, 0x00551ed4> global_00551ed4;  // (from the original)
inline guest::global<u32, 0x0097e744> global_0097e744;  // (from the original)

u32 f_00551e58(gptr<Object_00551e58_0> arg0, gptr<Object_00551e58_1> arg1) {
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    float S2_1 = 0;
    u32 r0_3 = 0;
    float S1_1 = 0;
    float S0_1 = 0;
    r0_1 = arg0->word_a8;
    r4_1 = r0_1 + 0x100u;  // (from the original)
    r0_2 = r0_1 + u32(*gptr<u16>(0x200u + r0_1));  // (from the original)
    r2_1 = u32(*gptr<u16>(r4_1 + 0xf8u));  // (from the original)
    S2_1 = std::bit_cast<float>(*gptr<u32>(r0_2));
    r0_3 = *global_0097e744 + ((arg1->word_f8 * *gptr<u32>(r0_2 + 8u) + std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(float(s32(std::bit_cast<u32>(std::bit_cast<float>(arg1->word_f0)))) * std::bit_cast<float>(*gptr<u32>(r0_2 + 4u))))) & 0x7fu) << 2);  // (from the original)
    S1_1 = std::bit_cast<float>(*gptr<u32>(r0_3));
    S0_1 = std::bit_cast<float>(*global_00551ed4) - S1_1 * S2_1;
    if ((r2_1 & 2u) != 0) {
        arg1->word_100 = u32(std::bit_cast<u32>(S0_1));
    }
    if ((r2_1 & 4u) != 0) {
        arg1->word_104 = u32(std::bit_cast<u32>(S0_1));
    }
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r0_3;
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
    u32 r2 = arg2.addr();
    u32 r0_1 = 0;
    float S0_1 = 0;
    float S0_2 = 0;
    u32 r0_2 = 0;
    float S0_3 = 0;
    float S1_1 = 0;
    float S0_4 = 0;
    u32 r0_3 = 0;
    r0_1 = arg2->word_10;
    if ((r0_1 & 1u) != 0) {
        S0_1 = std::bit_cast<float>(arg1->word_18);
        S1 = std::bit_cast<float>(arg2->word_0);
        S0 = S0_1 + (std::bit_cast<float>(arg2->word_4) - std::bit_cast<float>(arg1->word_0) - S0_1) * S1;
        arg1->word_18 = u32(std::bit_cast<u32>(S0));
    }
    if ((r0_1 & 2u) != 0) {
        S0_2 = std::bit_cast<float>(arg1->word_1c);
        S1 = std::bit_cast<float>(arg2->word_0);
        S0 = S0_2 + (std::bit_cast<float>(arg2->word_8) - std::bit_cast<float>(arg1->word_4) - S0_2) * S1;
        arg1->word_1c = u32(std::bit_cast<u32>(S0));
    }
    if ((r0_1 & 4u) == 0) {
        r0_2 = r2 + 0x14u;  // (from the original)
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0_2;
    }
    S0_3 = std::bit_cast<float>(arg1->word_20);
    S1_1 = std::bit_cast<float>(arg2->word_0);
    S0_4 = S0_3 + (std::bit_cast<float>(arg2->word_c) - std::bit_cast<float>(arg1->word_8) - S0_3) * S1_1;
    arg1->word_20 = u32(std::bit_cast<u32>(S0_4));
    r0_3 = r2 + 0x14u;  // (from the original)
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_1;
    return r0_3;
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

inline guest::global<u32, 0x0097e83c> global_0097e83c;  // (from the original)
inline constexpr guest::Function<0x002f9e1c, u32(u32, u32, u32, u32)> call_002f9e1c;  // (from the original)

u32 f_0055224c(u32 r0, gptr<Object_0055224c_1> arg1, gptr<Object_0055224c_2> arg2, u32 r3, float S0, float S1, float S2, float S3, float S4, float S5, float S6, float S7, float S8) {
    u32 r1 = arg1.addr();
    u32 r2 = arg2.addr();
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    float S2_1 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r1_1 = arg2->word_0;
    r0_1 = arg1->word_f0;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    guest::cpu()->s[8] = S8;
    call_002f9e1c(r0_1, r1_1, r2, r3);
    r1_2 = guest::cpu()->r[1];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    if (r1_2 == 0) {
        r2_1 = *global_0097e83c;
        r0_2 = u32(*gptr<u16>(r0 + 0x78u));  // (from the original)
        *gptr<u16>(r0 + 0x78u) = u16(r0_2 + 1u);  // (from the original)
        r3_1 = r0_2 & ~0xfe00u;  // (from the original)
        r1_2 = r2 + 8u;
        r0_3 = r2_1 + (r3_1 + (r3_1 << 1) << 2);
        S0_1 = std::bit_cast<float>(*gptr<u32>(r1 + 0x18u)) + std::bit_cast<float>(*gptr<u32>(r0_3)) * std::bit_cast<float>(*gptr<u32>(r2 + 4u));  // (from the original)
        S2_1 = std::bit_cast<float>(*gptr<u32>(r1 + 0x1cu)) + std::bit_cast<float>(*gptr<u32>(r0_3 + 4)) * std::bit_cast<float>(*gptr<u32>(r1_2));  // (from the original)
        S1_1 = std::bit_cast<float>(*gptr<u32>(r1 + 0x20u)) + std::bit_cast<float>(*gptr<u32>(r0_3 + 8)) * std::bit_cast<float>(*gptr<u32>(r1_2 + 4));  // (from the original)
        *gptr<u32>(r1 + 0x18u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
        *gptr<u32>(r1 + 0x1cu) = u32(std::bit_cast<u32>(S2_1));  // (from the original)
        *gptr<u32>(r1 + 0x20u) = u32(std::bit_cast<u32>(S1_1));  // (from the original)
    }
    r0_4 = r2 + 0x10u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r0_4;
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
    u32 r0_1 = 0;
    if (u32(*gptr<u8>(arg0->word_a8 + 0x2du)) == 0) {  // (from the original)
        r0_1 = r1 + 0x6cu;  // (from the original)
    } else {
        r0_1 = r0 + 0x48u;  // (from the original)
    }
    return r0_1;
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

inline guest::global<u32, 0x008a3bbc> global_008a3bbc;  // (from the original)
inline guest::global<u32, 0x008a3bc0> global_008a3bc0;  // (from the original)
inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x005547f8, u32(u32, u32, u32, u32)> call_005547f8;  // (from the original)
inline constexpr guest::Function<0x00554fbc, u32(u32, u32, u32, u32)> call_00554fbc;  // (from the original)
inline constexpr guest::Function<0x00555208, u32(u32, u32, u32, u32)> call_00555208;  // (from the original)
inline constexpr guest::Function<0x0074dcac, u32(u32, u32, u32, u32)> call_0074dcac;  // (from the original)

u32 f_00554a64(gptr<Object_00554a64_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 r6_1 = 0;
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 ea_1 = 0;
    u32 r2_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    u32 res_1 = 0;
    u32 r6_2 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r7 = r2;
    r6_1 = r3;
    arg0->word_0 = u32(0x9059a0u);  // (from the original)
    r0_1 = r0 + 0x38u;  // (from the original)
    arg0->word_3c = u32(r0_1 + 0xcu);  // (from the original)
    arg0->word_40 = u32(0x100u);  // (from the original)
    arg0->word_38 = u32(0x90558cu);  // (from the original)
    *gptr<u8>(0x100u + (arg0->word_3c - 1u)) = u8(u32(*global_008c9f1c));  // (from the original)
    arg0->word_38 = u32(0x9050f8u);  // (from the original)
    r3_1 = u32(*global_008c9f1c);
    *gptr<u8>(arg0->word_3c) = u8(r3_1);
    arg0->word_38 = u32(0x9048b0u);  // (from the original)
    r2_1 = *global_008a3bc0;
    ea_1 = r0_1 + 0x10cu;  // (from the original)
    arg0->word_144 = u32(r2_1);
    r2_2 = *global_008a3bc0;
    arg0->word_148 = u32(r2_2);
    arg0->word_14c = u32(*global_008a3bc0);
    arg0->word_150 = u32(*global_008a3bbc);
    r0_2 = ea_1 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_00554fbc(r0_2, ea_1, r2_2, r3_1);
    r3 = guest::cpu()->r[3];
    r8 = 0u;
    ea_2 = r0_3 + 0x38u;  // (from the original)
    *gptr<u32>(ea_2) = u32(r7);
    ea_3 = r0_3 - 0x134u;  // (from the original)
    *gptr<u32>(ea_3) = u32(r8);
    ea_4 = r0_3 - 0x150u;  // (from the original)
    *gptr<u32>(ea_4) = u32(r1);
    *gptr<u32>(ea_4 + 4) = u32(r6_1);
    r4 = r0_3 - 0x154u;  // (from the original)
    r6 = 0x29e8u;  // (from the original)
    r5 = r8;
    do {
L_554b1c:;
        r1_1 = *gptr<u32>(r4 + 4u);
        guest::cpu()->r[13] = r13;
        r0_4 = call_002fd108(r6, r1_1, 4u, r3);
        r1_2 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r13) = u32(r4);
        *gptr<u32>(r13 + 4u) = u32(r1_2);
        r1_3 = *gptr<u32>(r4 + 4u);
        guest::cpu()->r[13] = r13;
        r0_5 = call_00555208(r0_4, r1_3, r7, r5);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r4 + (r5 << 2);
        r5 = r5 + 1u;
        res_1 = r5 - 5u;
        *gptr<u32>(r1 + 0xcu) = u32(r0_5);  // (from the original)
        guest::preempt();
    } while (res_1 >> 0x1f != ((r5 ^ 5u) & (r5 ^ res_1)) >> 0x1f);  // (from the original)
    r5 = 0u;
    *gptr<u32>(r4 + 0x20u) = u32(r8);  // (from the original)
    do {
L_554b64:;
        r6_2 = r4 + (r5 << 2);
        r0_6 = *gptr<u32>(r6_2 + 0xcu);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_7 = call_0074dcac(r0_6, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0_7 == 0)) {
            r0_8 = *gptr<u32>(r4 + 0x20u);  // (from the original)
            r2 = *gptr<u32>(r6_2 + 0xcu);  // (from the original)
            r3 = r0_8 + 1u;
            r1 = r4 + (r0_8 << 2);
            *gptr<u32>(r4 + 0x20u) = u32(r3);  // (from the original)
            *gptr<u32>(r1 + 0x24u) = u32(r2);  // (from the original)
        }
        r5 = r5 + 1u;
        guest::preempt();
    } while (s32(r5) < s32(5u));
    guest::cpu()->r[13] = r13;
    call_005547f8(r4, 1u, r2, r3);
    r1_4 = guest::cpu()->r[1];
    *gptr<u32>(r4 + 0x220u) = u32(0xb4u);  // (from the original)
    *gptr<u8>(r4 + 0x224u) = u8(r8);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return r4;
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

inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)

u32 f_00554de0(gptr<Object_00554de0_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    u32 r0_1 = 0;
    u32 r6_1 = 0;
    u32 ea_1 = 0;
    u32 r0_2 = 0;
    u32 r6_2 = 0;
    u32 ea_2 = 0;
    u32 r0_3 = 0;
    u32 r6_3 = 0;
    u32 r12_1 = 0;
    u32 r2_1 = 0;
    u32 r4_1 = 0;
    u32 res_1 = 0;
    r13 = r13 - 0x10;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r13 + 0x10u));  // (from the original)
    arg0->word_0 = u32(0x9059b4u);  // (from the original)
    r0_1 = r0 + 0x110u;  // (from the original)
    arg0->word_110 = u32(0x90558cu);  // (from the original)
    arg0->word_114 = u32(r0_1 + 0xcu);  // (from the original)
    arg0->word_118 = u32(0x100u);  // (from the original)
    *gptr<u8>(0x100u + (arg0->word_114 - 1u)) = u8(u32(*global_008c9f1c));  // (from the original)
    arg0->word_110 = u32(0x9050f8u);  // (from the original)
    r6_1 = u32(*global_008c9f1c);
    ea_1 = arg0->word_114;
    *gptr<u8>(ea_1) = u8(r6_1);
    arg0->word_110 = u32(0x9048b0u);  // (from the original)
    r0_2 = r0_1 + 0x10cu;  // (from the original)
    arg0->word_224 = u32(0x40u);  // (from the original)
    arg0->word_21c = u32(0x90558cu);  // (from the original)
    arg0->word_220 = u32(r0_2 + 0xcu);  // (from the original)
    *gptr<u8>(0x40u + (arg0->word_220 - 1u)) = u8(u32(*global_008c9f1c));  // (from the original)
    arg0->word_21c = u32(0x905170u);  // (from the original)
    r6_2 = u32(*global_008c9f1c);
    ea_2 = arg0->word_220;
    *gptr<u8>(ea_2) = u8(r6_2);
    arg0->word_21c = u32(0x904950u);  // (from the original)
    r0_3 = r0_2 + 0x4cu;  // (from the original)
    r6_3 = r0_3 + 0xcu;  // (from the original)
    arg0->word_270 = u32(0x80u);  // (from the original)
    arg0->word_268 = u32(0x90558cu);  // (from the original)
    arg0->word_26c = u32(r6_3);
    *gptr<u8>(0x80u + (r6_3 - 1u)) = u8(u32(*global_008c9f1c));  // (from the original)
    arg0->word_268 = u32(0x9050bcu);  // (from the original)
    *gptr<u8>(arg0->word_26c) = u8(u32(*global_008c9f1c));
    arg0->word_268 = u32(0x904860u);  // (from the original)
    arg0->word_4 = u32(r1);
    r0 = r0_3 - 0x268u;  // (from the original)
    arg0->word_108 = u32(r2);
    arg0->word_10c = u32(r3);
    r2 = 0u;
    arg0->word_2f4 = u32(std::bit_cast<u32>(S0));
    r1 = r2;
    r3 = r2;
    do {
L_554ec8:;
        r12_1 = r0 + (r2 << 2);
        r2_1 = r2 + 1u;
        r1 = r1 + 2u;
        r4_1 = r0 + (r2_1 << 2);
        *gptr<u32>(r12_1 + 8u) = u32(r3);
        res_1 = r1 - 0x40u;  // (from the original)
        r2 = r2_1 + 1u;
        *gptr<u32>(r4_1 + 8u) = u32(r3);
        guest::preempt();
    } while (res_1 >> 0x1f != ((r1 ^ 0x40u) & (r1 ^ res_1)) >> 0x1f);  // (from the original)
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
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0x9059c4u);  // (from the original)
    r0_1 = r0 + 0x24u;  // (from the original)
    r0_2 = call_00540c3c(r0_1, 0x9059c4u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r0_3 = r0_2 - 0x24u;  // (from the original)
    *gptr<u32>(r0_3 + 0x14u) = u32(0u);  // (from the original)
    *gptr<u8>(r0_3 + 0x20u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0u;
    return r0_3;
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
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0x9059c4u);  // (from the original)
    r0_1 = arg0->word_14;
    if (r0_1 != 0) {
        call_002ffb64(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    *gptr<u32>(r0 + 0x14u) = u32(0u);  // (from the original)
    *gptr<u8>(r0 + 0x20u) = u8(0u);  // (from the original)
    r0_2 = r0 + 0x24u;  // (from the original)
    r0_3 = call_0053f6bc(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_4 = r0_3 - 0x24u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0_4;
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

inline guest::global<u32, 0x005551f0> global_005551f0;  // (from the original)
inline guest::global<u32, 0x00af78e4> global_00af78e4;  // (from the original)
inline guest::global<u32, 0x00af78f0> global_00af78f0;  // (from the original)
inline guest::global<u32, 0x00af7968> global_00af7968;  // (from the original)
inline constexpr guest::Function<0x0013cd00, u32(u32, u32, u32, u32)> call_0013cd00;  // (from the original)

u32 f_00555094(gptr<Object_00555094_0> arg0, float S0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r3_2 = 0;
    u32 r12_1 = 0;
    u32 res_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    float S0_1 = 0;
    r4 = r0;
    r0 = ~0u;
    r13 = r13 - 0x18u;  // (from the original)
    r6 = 0u;
    *gptr<u32>(0x29b8u + r4) = u32(r0);  // (from the original)
    *gptr<u32>(0x29b8u - (r0 << 2) + r4) = u32(r6);  // (from the original)
    *gptr<u8>((0x29b8u & ~(r0 >> 0x1c)) + r4) = u8(1u);  // (from the original)
    r5 = r4 + 0x2800u;  // (from the original)
    arg0->word_29c0 = u32(*global_00af78f0);
    arg0->word_29c4 = u32(*gptr<u32>(0xaf78f0u + 4u));  // (from the original)
    arg0->word_29c8 = u32(*gptr<u32>(0xaf78f0u + 8u));  // (from the original)
    arg0->word_29cc = u32(*global_00af7968);
    arg0->word_29d0 = u32(*gptr<u32>(0xaf7968u + 4u));  // (from the original)
    arg0->word_29d4 = u32(*gptr<u32>(0xaf7968u + 8u));  // (from the original)
    arg0->word_29d8 = u32(*global_00af78e4);
    arg0->word_29dc = u32(*gptr<u32>(0xaf78e4u + 4u));  // (from the original)
    arg0->word_29e0 = u32(*gptr<u32>(0xaf78e4u + 8u));  // (from the original)
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
        r3_1 = r4 + (r1 << 3);
        r1_1 = r1 + 1u;
        r3_2 = r3_1 + 0x2974u;  // (from the original)
        r12_1 = r4 + (r1_1 << 3) + 0x2974u;  // (from the original)
        r2 = r2 + 2u;
        *gptr<u32>(r3_2) = u32(r0);
        res_1 = r2 - 6u;
        r1 = r1_1 + 1u;
        *gptr<u32>(r12_1) = u32(r0);
        guest::preempt();
    } while (res_1 >> 0x1f != ((r2 ^ 6u) & (r2 ^ res_1)) >> 0x1f);  // (from the original)
    r1_2 = r13;
    *gptr<u32>(r13 + 4u) = u32(0x8c1c28u);  // (from the original)
    *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
    r2_1 = ~0u;
    r0_1 = r4 + 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0_2 = call_0013cd00(r0_1, r1_2, r2_1, r3_2);
    r1_3 = guest::cpu()->r[1];
    S0_1 = std::bit_cast<float>(*global_005551f0);
    *gptr<u32>(r4 + 0x29e4u) = u32(r6);  // (from the original)
    *gptr<u32>(r5 + 0x1b4u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    return r0_2;
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

inline guest::global<u32, 0x00555204> global_00555204;  // (from the original)

u32 f_005551f4(gptr<Object_005551f4_0> arg0) {
    u32 r0 = arg0.addr();
    float S0_1 = 0;
    u32 r0_1 = 0;
    S0_1 = std::bit_cast<float>(*global_00555204);
    r0_1 = r0 + 0x2800u;  // (from the original)
    arg0->word_29a8 = u32(std::bit_cast<u32>(S0_1));
    guest::cpu()->s[0] = S0_1;
    return r0_1;
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
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = arg0->word_c;
    arg0->word_0 = u32(0x9059d4u);  // (from the original)
    if (r0_1 != 0) {
        r0_2 = call_0055c5ec(r0_1, 0x9059d4u, r2, r3);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        call_002ffb64(r0_2, r1_1, r2_1, r3_1);
    }
    r0_3 = r0 + 0x2034u;  // (from the original)
    call_002f76ac(r0_3, 0x5450f0u, 0x10cu, 2u);  // (from the original)
    r0_4 = r0 + 0x1e1cu;  // (from the original)
    call_002f76ac(r0_4, 0x5450f0u, 0x10cu, 2u);  // (from the original)
    r0_5 = r0 + 0x1c04u;  // (from the original)
    call_002f76ac(r0_5, 0x5450f0u, 0x10cu, 2u);  // (from the original)
    r0_6 = r0 + 0x19ecu;  // (from the original)
    call_002f76ac(r0_6, 0x5450f0u, 0x10cu, 2u);  // (from the original)
    r0_7 = r0 + 0x17d4u;  // (from the original)
    call_002f76ac(r0_7, 0x5450f0u, 0x10cu, 2u);  // (from the original)
    r0_8 = r0 + 0x13a4u;  // (from the original)
    call_002f76ac(r0_8, 0x5450f0u, 0x10cu, 4u);  // (from the original)
    r0_9 = r0 + 0xf74u;  // (from the original)
    call_002f76ac(r0_9, 0x5450f0u, 0x10cu, 2u);  // (from the original)
    r0_10 = r0 + 0xd5cu;  // (from the original)
    call_002f76ac(r0_10, 0x5450f0u, 0x10cu, 2u);  // (from the original)
    r0_11 = r0 + 0xb44u;  // (from the original)
    call_002f76ac(r0_11, 0x5450f0u, 0x10cu, 2u);  // (from the original)
    r0_12 = r0 + 0x92cu;  // (from the original)
    call_002f76ac(r0_12, 0x5450f0u, 0x10cu, 2u);  // (from the original)
    r0_13 = r0 + 0x714u;  // (from the original)
    call_002f76ac(r0_13, 0x5450f0u, 0x10cu, 2u);  // (from the original)
    r0_14 = r0 + 0x2e4u;  // (from the original)
    call_002f76ac(r0_14, 0x5450f0u, 0x10cu, 4u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
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
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r3_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r6_1 = 0;
    u32 r3_2 = 0;
    u32 r2_1 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 r6_2 = 0;
    u32 r6_3 = 0;
    u32 ea_5 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r0_1 = 0;
    r13 = r13 - 0x20;  // (from the original)
    r4_1 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00134544(r1, 0x8baddcu, 0x148u, r3);  // (from the original)
    r3_1 = guest::cpu()->r[3];
    ea_1 = r1 + 0x148u;  // (from the original)
    *gptr<u32>(ea_1) = u32(u32(*gptr<u8>(r0 + 0x4cb36u)) | 0x80000000u);  // (from the original)
    ea_2 = ea_1 + 4u;
    *gptr<u32>(ea_2) = u32(0xf02c0u);  // (from the original)
    r6_1 = ea_2 + 4u;
    guest::cpu()->r[13] = r13;
    call_00148930(r6_1, r2, 0xff02c1u, r3_1);  // (from the original)
    r3_2 = guest::cpu()->r[3];
    r2_1 = 0xff02c1u - 0x400000u;  // (from the original)
    ea_3 = r6_1 + 0x48u;  // (from the original)
    *gptr<u32>(ea_3) = u32(u32(*gptr<u8>(r0 + 0x4cb3eu)) | 0x80000000u);  // (from the original)
    ea_4 = ea_3 + 4u;
    *gptr<u32>(ea_4) = u32(0xf02c0u);  // (from the original)
    r6_2 = ea_4 + 4u;
    guest::cpu()->r[13] = r13;
    call_001488f4(r6_2, r3, r2_1, r3_2);
    r6_3 = r6_2 + 0x38u;  // (from the original)
    ea_5 = r6_3 + 8u;
    *gptr<u32>(ea_5) = u32(0u);
    *gptr<u32>(ea_5 + 4) = u32(0xff02c1u);  // (from the original)
    *gptr<u32>(r6_3) = u32(0x80000000u);  // (from the original)
    *gptr<u32>(r6_3 + 4) = u32(0xf02c0u);  // (from the original)
    *gptr<u32>(r6_3 + 0x10u) = u32(*gptr<u32>(r4_1 + 8u));  // (from the original)
    *gptr<u32>(r6_3 + 0x14u) = u32(*gptr<u32>(r4_1 + 4u));  // (from the original)
    r1_1 = *gptr<u32>(r4_1);
    *gptr<u32>(r6_3 + 0x1cu) = u32(0u);  // (from the original)
    *gptr<u32>(r6_3 + 0x18u) = u32(r1_1);  // (from the original)
    *gptr<u32>(r6_3 + 0x20u) = u32(*gptr<u32>(r4_1 + 0x18u));  // (from the original)
    *gptr<u32>(r6_3 + 0x24u) = u32(*gptr<u32>(r4_1 + 0x14u));  // (from the original)
    r1_2 = *gptr<u32>(r4_1 + 0x10u);  // (from the original)
    *gptr<u32>(r6_3 + 0x2cu) = u32(0u);  // (from the original)
    *gptr<u32>(r6_3 + 0x28u) = u32(r1_2);  // (from the original)
    *gptr<u32>(r6_3 + 0x30u) = u32(*gptr<u32>(r4_1 + 0x28u));  // (from the original)
    *gptr<u32>(r6_3 + 0x34u) = u32(*gptr<u32>(r4_1 + 0x24u));  // (from the original)
    r1_3 = *gptr<u32>(r4_1 + 0x20u);  // (from the original)
    *gptr<u32>(r6_3 + 0x3cu) = u32(0u);  // (from the original)
    *gptr<u32>(r6_3 + 0x38u) = u32(r1_3);  // (from the original)
    *gptr<u32>(r6_3 + 0x40u) = u32(*gptr<u32>(r4_1 + 0x28u));  // (from the original)
    *gptr<u32>(r6_3 + 0x44u) = u32(*gptr<u32>(r4_1 + 0x18u));  // (from the original)
    *gptr<u32>(r6_3 + 0x48u) = u32(*gptr<u32>(r4_1 + 8u));  // (from the original)
    r0_1 = r6_3 + 0x50u;  // (from the original)
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_00555824
GUEST_EXPORT(0x00555824, d_00555824::f_00555824);

// f_00555f90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00555f90 {

inline constexpr guest::Function<0x00134544, u32(u32, u32, u32, u32)> call_00134544;  // (from the original)

u32 f_00555f90(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 ea_6 = 0;
    u32 ea_7 = 0;
    u32 r3_2 = 0;
    u32 ea_8 = 0;
    u32 r3_3 = 0;
    u32 ea_9 = 0;
    u32 r3_4 = 0;
    u32 r3_5 = 0;
    r13 = r13 - 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00134544(r1, 0x8baddcu, 0x148u, r3);  // (from the original)
    ea_1 = r1 + 0x154u;  // (from the original)
    *gptr<u32>(ea_1) = u32(0xff02c1u);  // (from the original)
    ea_2 = r1 + 0x150u;  // (from the original)
    *gptr<u32>(ea_2) = u32(0u);
    ea_3 = r1 + 0x14cu;  // (from the original)
    *gptr<u32>(ea_3) = u32(0xf02c0u);  // (from the original)
    ea_4 = r1 + 0x148u;  // (from the original)
    *gptr<u32>(ea_4) = u32(0x80000000u);  // (from the original)
    ea_5 = r2 + 8u;
    r3_1 = *gptr<u32>(ea_5);
    r1_1 = r1 + 0x148u;  // (from the original)
    r0_1 = r1 + 0x198u;  // (from the original)
    ea_6 = r1 + 0x158u;  // (from the original)
    *gptr<u32>(ea_6) = u32(r3_1);
    ea_7 = r2 + 4u;
    r3_2 = *gptr<u32>(ea_7);
    ea_8 = r1 + 0x15cu;  // (from the original)
    *gptr<u32>(ea_8) = u32(r3_2);
    r3_3 = *gptr<u32>(r2);
    ea_9 = r1 + 0x160u;  // (from the original)
    *gptr<u32>(ea_9) = u32(r3_3);
    *gptr<u32>(ea_9 + 4u) = u32(0u);
    *gptr<u32>(r1_1 + 0x20u) = u32(*gptr<u32>(r2 + 0x18u));  // (from the original)
    *gptr<u32>(r1_1 + 0x24u) = u32(*gptr<u32>(r2 + 0x14u));  // (from the original)
    r3_4 = *gptr<u32>(r2 + 0x10u);  // (from the original)
    *gptr<u32>(r1_1 + 0x2cu) = u32(0u);  // (from the original)
    *gptr<u32>(r1_1 + 0x28u) = u32(r3_4);  // (from the original)
    *gptr<u32>(r1_1 + 0x30u) = u32(*gptr<u32>(r2 + 0x28u));  // (from the original)
    *gptr<u32>(r1_1 + 0x34u) = u32(*gptr<u32>(r2 + 0x24u));  // (from the original)
    r3_5 = *gptr<u32>(r2 + 0x20u);  // (from the original)
    *gptr<u32>(r1_1 + 0x3cu) = u32(0u);  // (from the original)
    *gptr<u32>(r1_1 + 0x38u) = u32(r3_5);  // (from the original)
    *gptr<u32>(r1_1 + 0x40u) = u32(*gptr<u32>(r2 + 0x28u));  // (from the original)
    *gptr<u32>(r1_1 + 0x44u) = u32(*gptr<u32>(r2 + 0x18u));  // (from the original)
    *gptr<u32>(r1_1 + 0x48u) = u32(*gptr<u32>(r2 + 8u));  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
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
    u32 r0_1 = 0;
    r0_1 = arg0->word_87c;
    return call_00556058(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
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

inline guest::global<u32, 0x0097e6ec> global_0097e6ec;  // (from the original)
inline guest::global<u8, 0x0097e6f0> global_0097e6f0;  // (from the original)
inline guest::global<u8, 0x0097e6f1> global_0097e6f1;  // (from the original)
inline guest::global<u8, 0x0097e6f2> global_0097e6f2;  // (from the original)
inline constexpr guest::Function<0x00134544, u32(u32, u32, u32, u32)> call_00134544;  // (from the original)

u32 f_00556094(gptr<Object_00556094_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r1_1 = 0x60768u + r0;  // (from the original)
    if (arg0->word_60768 == 1u) {
        r0_1 = r1;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    r4_1 = r0 + 0x60560u;  // (from the original)
    arg0->word_60768 = u32(1u);
    r2_1 = *gptr<u32>(r4_1) << 2;
    r1_2 = r0 + 0x5fc00u;  // (from the original)
    call_00134544(r1, r1_2, r2_1, r3);
    r0_2 = *gptr<u32>(r4_1);
    *global_0097e6f0 = u8(0x1cu);  // (from the original)
    r1_1 = 0u;
    r0_1 = r1 + (r0_2 << 2);
    *global_0097e6f1 = u8(4u);
    *global_0097e6f2 = u8(r1_1);
    *global_0097e6ec = u32(r1_1);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00556094
GUEST_EXPORT(0x00556094, d_00556094::f_00556094);

// f_00556128: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00556128 {

struct __attribute__((packed)) Object_00556128_0 {
    u8 unknown_0[0x87c];  // (not used here)
    u32 word_87c;
};
GUEST_OFFSET(Object_00556128_0, word_87c, 0x87c);  // (from the original)


u32 f_00556128(gptr<Object_00556128_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r1_5 = 0;
    u32 r1_6 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 4u;
    r4 = 0x803f0232u;  // (from the original)
    r0 = 0u;
    r2 = arg0->word_87c + 0x39aacu;  // (from the original)
    r12 = r0;
    do {
L_556148:;
        r3_1 = r0 + (r0 << 1);
        if (!(*gptr<u32>(r2 + ((r0 << 3) - r0 << 4) + 0x160u) == 0)) {  // (from the original)
            *gptr<u32>(r1) = u32(r12);
            r1_1 = r1 + 4u;
            *gptr<u32>(r1_1) = u32(r3_1 + 0x203u | 0x80000000u | 0x2f0000u);  // (from the original)
            r1_2 = r1_1 + 4u;
            *gptr<u32>(r1_2) = u32(r12);
            r1_3 = r1_2 + 4u;
            *gptr<u32>(r1_3) = u32(r12);
        } else {
            *gptr<u32>(r1) = u32(r12);
            r1_3 = r1 + 4u;
            *gptr<u32>(r1_3) = u32(r3_1 + 0x205u | 0xf0000u);  // (from the original)
        }
        r1 = r1_3 + 4u;
        if (!(u32(*gptr<u8>(r2 + (r0 + (r0 << 2) << 2) + 0x6a0u)) == 0)) {  // (from the original)
            *gptr<u32>(r1) = u32(r0);
            *gptr<u32>(r1 + 4) = u32(r4);
            *gptr<u32>(r1 + 8) = u32(r12);
            r1_4 = r1 + 0xc;  // (from the original)
            *gptr<u32>(r1_4) = u32(r12);
            r1_5 = r1_4 + 4u;
            *gptr<u32>(r1_5) = u32(r12);
            r1_6 = r1_5 + 4u;
            *gptr<u32>(r1_6) = u32(r12);
            r1 = r1_6 + 4u;
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (s32(r0) < s32(0xcu));  // (from the original)
    *gptr<u32>(r1) = u32(1u);
    r0_1 = r1 + 4u;
    *gptr<u32>(r0_1) = u32(0xf0231u);  // (from the original)
    r0_2 = r0_1 + 4u;
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = 0xf0231u;  // (from the original)
    return r0_2;
}

}  // namespace d_00556128
GUEST_EXPORT(0x00556128, d_00556128::f_00556128);

// f_00556d80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00556d80 {

inline guest::global<u32, 0x00556e9c> global_00556e9c;  // (from the original)
inline constexpr guest::Function<0x001435b4, u32(u32, u32, u32, u32)> call_001435b4;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x0034ac5c, u32(u32, u32, u32, u32)> call_0034ac5c;  // (from the original)

u32 f_00556d80(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r12 = guest::cpu()->r[12];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    u32 r1_1 = 0;
    u32 r6_1 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    u32 r7_1 = 0;
    u32 r10_1 = 0;
    u32 r5_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    float S0_3 = 0;
    u32 res_1 = 0;
    u32 zf_1 = 0;
    u32 res_2 = 0;
    u32 r3_3 = 0;
    u32 r12_1 = 0;
    u32 r3_4 = 0;
    u32 r12_2 = 0;
    u32 r1_4 = 0;
    u32 r0_4 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r12);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0_1 = call_002fd108(0xb4u, r0, 4u, r3);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    r1_1 = u32(*gptr<u16>(r2 + 4u));
    r6_1 = u32(*gptr<u8>(r2 + 6u));
    r8_1 = u32(*gptr<u16>(r2));
    r9_1 = u32(*gptr<u16>(r2 + 2u));
    r7_1 = u32(*gptr<u8>(r2 + 7u));
    r10_1 = u32(*gptr<u8>(r2 + 8u));
    r5_1 = r1_1 & 0xffu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    r0_2 = call_0034ac5c(r0_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    *gptr<u8>(r0_2 + 0x1cu) = u8(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    r0_3 = call_001435b4(r1, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    S0_3 = guest::cpu()->s[0];
    *gptr<u32>(r0_2) = u32(r0_3);
    *gptr<u16>(r0_2 + 4u) = u16(r8_1);
    res_1 = r7_1 & 0xfu;  // (from the original)
    zf_1 = res_1 == 0;
    *gptr<u16>(r0_2 + 6u) = u16(r9_1);
    if (zf_1) {
        r0_3 = 3u;
    }
    *gptr<u8>(r0_2 + 8u) = u8(r5_1);
    if (zf_1) {
        goto L_556e04;
    }
    if (res_1 == 1u) {
        r0_3 = 2u;
        goto L_556e04;
    }
    if (res_1 == 2u) {
        r0_3 = 0u;
    }
L_556e04:;
    res_2 = r7_1 >> 4;
    if (res_2 == 0) {
        r1_3 = 3u;
        goto L_556e24;
    }
    if (res_2 == 1u) {
        r1_3 = 2u;
        goto L_556e24;
    }
    if (res_2 == 2u) {
        r1_3 = 0u;
    }
L_556e24:;
    if (r10_1 == 0) {
        r3_3 = 2u;
        r12_1 = 1u;
    } else {
        r3_3 = 0u;
        r12_1 = 0u;
    }
    r3_4 = r3_3 | r12_1 << 2;
    if (r5_1 == 0xcu) {  // (from the original)
        r12_2 = 2u;
    } else {
        r12_2 = 0u;
    }
    r1_4 = r3_4 | r12_2 << 4 | r1_3 << 8;
    *gptr<u32>(r0_2 + 0xa8u) = u32(r1_4 | r0_3 << 0xc);  // (from the original)
    *gptr<u32>(r0_2 + 0xacu) = u32(ror32(*gptr<u32>(r0_2 + 4u), 0x10));  // (from the original)
    if (r6_1 == 0 || r6_1 >> 0x1f != (r6_1 & (r6_1 ^ r6_1)) >> 0x1f) {  // (from the original)
        *gptr<u32>(r0_2 + 0xb0u) = u32(0u);  // (from the original)
        goto L_556e94;
    }
    r0_4 = r6_1 - 1u & 0xffu;  // (from the original)
    *gptr<u8>(r0_2 + 0x14u) = u8(0u);  // (from the original)
    S0_3 = std::bit_cast<float>(*global_00556e9c);
    *gptr<u8>(r0_2 + 0x15u) = u8(r0_4);  // (from the original)
    *gptr<u32>(r0_2 + 0x10u) = u32(std::bit_cast<u32>(S0_3));  // (from the original)
    *gptr<u32>(r0_2 + 0xb0u) = u32(0u | r0_4 << 0x10);  // (from the original)
L_556e94:;
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    return r0_2;
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
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r9_1 = 0;
    u32 res_1 = 0;
    u32 r2_1 = 0;
    u32 r10_1 = 0;
    u32 r9_2 = 0;
    u32 r0_2 = 0;
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 r0_3 = 0;
    u32 r3_1 = 0;
    u32 r1_2 = 0;
    u32 r6_1 = 0;
    u32 r0_4 = 0;
    u32 r3_2 = 0;
    u32 r1_3 = 0;
    r6 = r0;
    r5 = r1;
    r13 = r13 - 0x48u;  // (from the original)
    r0_1 = arg1->word_8;
    r8 = r2;
    r7 = r3;
    r1 = arg0->word_18 + (r0_1 + (r0_1 << 2) << 3);
    r4 = *gptr<u32>(r1 + 8u);
    if (r4 == 0 || r4 >> 0x1f != (r4 & (r4 ^ r4)) >> 0x1f) {  // (from the original)
        goto L_556f38;
    }
    r0 = r4 & 1u;
    r2 = 0u;
    r3 = r13 + 8u;
    r12 = 4u;
    if (r0 == 1u) {
        r2 = 1u;
        r9_1 = *gptr<u32>(*gptr<u32>(r1 + 4u) + 4u);
        *gptr<u32>(r13 + 8u) = u32(r9_1);
    }
    if (s32(r0) >= s32(r4)) {
        goto L_556f38;
    }
    do {
L_556f04:;
        r0 = r0 + 2u;
        res_1 = r0 - r4;
        *gptr<u32>(r3 + (r2 << 2)) = u32(*gptr<u32>(*gptr<u32>(r1 + 4u) + (r12 + (r2 << 3))));
        r2_1 = r2 + 1u;
        r10_1 = r12 + (r2_1 << 3);
        r9_2 = *gptr<u32>(*gptr<u32>(r1 + 4u) + r10_1);
        *gptr<u32>(r3 + (r2_1 << 2)) = u32(r9_2);
        r2 = r2_1 + 1u;
        guest::preempt();
    } while (res_1 >> 0x1f != ((r0 ^ r4) & (r0 ^ res_1)) >> 0x1f);  // (from the original)
L_556f38:;
    r0_2 = 0u;
    *gptr<u32>(r1 + 4u) = u32(*gptr<u32>(r5 + 0x14u));  // (from the original)
    *gptr<u32>(r1 + 8u) = u32(*gptr<u32>(r5 + 0x10u));  // (from the original)
    *gptr<u32>(r1 + 0x20u) = u32(*gptr<u32>(r5 + 0xcu));  // (from the original)
    *gptr<u32>(r1 + 0xcu) = u32(*gptr<u32>(r5 + 0x18u));  // (from the original)
    *gptr<u32>(r5) = u32(r0_2);
    if (r8 != 0) {
        ea_1 = r5 + 8u;
        r1_1 = *gptr<u32>(ea_1);
        ea_2 = r13 + 4u;
        *gptr<u32>(ea_2) = u32(r0_2);
        ea_3 = r13;
        *gptr<u32>(ea_3) = u32(r1_1);
        ea_4 = r6 + 4u;
        r0_3 = *gptr<u32>(ea_4);
        r3_1 = *gptr<u32>(ea_4 + 4);
        r1_2 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        r0_2 = call_0054f804(r0_3, r1_2, r4, r3_1);
        r1 = guest::cpu()->r[1];
    }
    if (r7 != 0) {
        r6_1 = r6 + 4u;
        *gptr<u32>(r13) = u32(*gptr<u32>(r5 + 8u));
        *gptr<u32>(r13 + 4) = u32(1u);
        r0_4 = *gptr<u32>(r6_1);
        r3_2 = *gptr<u32>(r6_1 + 4);
        r1_3 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        r0_2 = call_0054f804(r0_4, r1_3, r4, r3_2);
        r1 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_2;
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
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r7_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 res_1 = 0;
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    ea_1 = r13 + 0x18u;  // (from the original)
    r0_1 = *gptr<u32>(ea_1);
    arg0->byte_c = u8(0u);
    arg0->word_18 = u32(r3);
    arg0->word_0 = u32(0x9059fcu);  // (from the original)
    arg0->word_10 = u32(0xb4u);  // (from the original)
    arg0->word_4 = u32(r1);
    arg0->word_8 = u32(r2);
    r7_1 = r4 + 0x1cu;  // (from the original)
    arg0->word_1c = u32(r0_1);
    arg0->word_20 = u32(0x7530u);  // (from the original)
    r0_2 = r4 + 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_2, 0x500u, r2, r3);  // (from the original)
    r0 = 0u;
    r2 = 1u;
    do {
L_557430:;
        r1_1 = r0 + (r0 << 2);
        r0 = r0 + 1u;
        r1_2 = r4 + (r1_1 << 2);
        res_1 = r0 - 0x40u;  // (from the original)
        *gptr<u32>(r1_2 + 0x2cu) = u32(r2);  // (from the original)
        guest::preempt();
    } while (res_1 >> 0x1f != ((r0 ^ 0x40u) & (r0 ^ res_1)) >> 0x1f);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r4;
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
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    float S1_2 = 0;
    float S0_2 = 0;
    u32 r0_5 = 0;
    u32 r1_5 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r1_1 = u32(s32(s16(arg0->half_1f0)));
    r6 = u32(s32(s16(arg0->half_1f2)));
    r0_1 = arg1->word_f0;
    if (r1_1 == 0) {
        goto L_5574d8;
    }
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_002f9e1c(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
L_557494:;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    call_002f9e1c(r0, r6, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    S2_1 = guest::cpu()->s[2];
    S3_1 = guest::cpu()->s[3];
    r0_2 = r1_2 + r4;
    r1_3 = u32(*gptr<u8>(r4 + 0x1d6u));  // (from the original)
    r0_3 = u32(*gptr<u8>(r0_2 + 0x1e0u));  // (from the original)
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    r0_4 = call_002f9e1c(r0_3, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r4_1 = r4 + 0x1d8u;  // (from the original)
    r5_1 = r5 + 0xd0u;  // (from the original)
    S1_2 = std::bit_cast<float>(*gptr<u32>(r4_1 + 4)) * float(s32(std::bit_cast<u32>(std::bit_cast<float>(r0_4))));
    S0_2 = std::bit_cast<float>(*gptr<u32>(r4_1)) * float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1_4))));
    *gptr<u32>(r5_1) = u32(std::bit_cast<u32>(S0_2));
    *gptr<u32>(r5_1 + 4) = u32(std::bit_cast<u32>(S1_2));
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return r0_4;
L_5574d8:;
    r0_5 = r0_1 * r6;
    r1_5 = *gptr<u32>(r5 + 0xf4u);  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_002f9e1c(r0_5, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
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

inline guest::global<u32, 0x00557558> global_00557558;  // (from the original)
inline guest::global<u32, 0x0055755c> global_0055755c;  // (from the original)
inline guest::global<u32, 0x00557560> global_00557560;  // (from the original)
inline guest::global<u32, 0x00557568> global_00557568;  // (from the original)
inline guest::global<u32, 0x00557570> global_00557570;  // (from the original)
inline guest::global<u32, 0x00af78f0> global_00af78f0;  // (from the original)

u32 f_005574f0(gptr<Object_005574f0_0> arg0) {
    u32 r0 = arg0.addr();
    float S1_1 = 0;
    float S0_1 = 0;
    float S2_1 = 0;
    float S1_2 = 0;
    float S1_3 = 0;
    u32 r0_1 = 0;
    S1_1 = std::bit_cast<float>(*global_00557558);
    arg0->word_74 = u32(0u);
    arg0->word_7c = u32(std::bit_cast<u32>(S1_1));
    S0_1 = std::bit_cast<float>(*global_0055755c);
    arg0->word_5c = u32(std::bit_cast<u32>(S1_1));
    S2_1 = std::bit_cast<float>(*global_00557560);
    arg0->word_60 = u32(std::bit_cast<u32>(S0_1));
    arg0->word_64 = u32(std::bit_cast<u32>(S2_1));
    S1_2 = std::bit_cast<float>(*global_00557568);
    arg0->word_78 = u32(0xf1c71b80u);  // (from the original)
    arg0->word_80 = u32(0u);
    arg0->word_84 = u32(std::bit_cast<u32>(S1_2));
    S1_3 = std::bit_cast<float>(*global_00557570);
    arg0->word_68 = u32(*global_00af78f0);
    arg0->word_6c = u32(*gptr<u32>(0xaf78f0u + 4u));  // (from the original)
    arg0->word_70 = u32(*gptr<u32>(0xaf78f0u + 8u));  // (from the original)
    arg0->byte_b0 = u8(0u);
    r0_1 = r0 + 0x88u;  // (from the original)
    arg0->word_88 = u32(std::bit_cast<u32>(S0_1));
    arg0->word_8c = u32(std::bit_cast<u32>(S1_3));
    guest::cpu()->r[1] = 0xf1c71b80u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_3;
    return r0_1;
}

}  // namespace d_005574f0
GUEST_EXPORT(0x005574f0, d_005574f0::f_005574f0);

// f_0055b6e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0055b6e0 {

inline constexpr guest::Function<0x00556a90, u32(u32, u32, u32, u32)> call_00556a90;  // (from the original)

u32 f_0055b6e0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r2_2 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
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
        r2_1 = *gptr<u32>(r12 + (r0 << 2) + 0x1f0u);  // (from the original)
        r0 = r0 + 1u;
        if (r2_1 != 0) {
            r4 = r4 + 1u;
        }
        res_1 = r1 - 1u;
        r1 = res_1;
        guest::preempt();
    } while (res_1 != 0);
    r0_1 = *gptr<u32>(r12 + 0x3c0u);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r12 + 0x114u);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r0_1);
    r3_1 = r12 + 0x2acu;  // (from the original)
    r2_2 = r12 + ((r6 << 3) - r6 << 2) + 0x270u;  // (from the original)
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0_2 = call_00556a90(r7, r8, r2_2, r3_1);
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_0055b6e0
GUEST_EXPORT(0x0055b6e0, d_0055b6e0::f_0055b6e0);

// f_0055ba48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0055ba48 {

inline guest::global<u32, 0x0055bac4> global_0055bac4;  // (from the original)
inline guest::global<u32, 0x0055bac8> global_0055bac8;  // (from the original)
inline guest::global<u32, 0x0055bacc> global_0055bacc;  // (from the original)
inline guest::global<u32, 0x00981cfc> global_00981cfc;  // (from the original)

u32 f_0055ba48() {
    u32 r1 = 0;
    u32 fpsr = guest::cpu()->fpscr;
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    S1_1 = std::bit_cast<float>(*global_0055bac4);
    S2 = std::bit_cast<float>(*global_0055bac8);
    r1 = *global_00981cfc * 0xfd43fdu + 0xc39ec3u;  // (from the original)
    *global_00981cfc = u32(r1);
    S0 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1 & ~0xf0000000u)))) * S1_1;  // (from the original)
    S1 = std::bit_cast<float>(*global_0055bacc);
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
    r0_1 = std::bit_cast<u32>(S0);
    if (s32(r0_1) <= s32(0x3f800000u)) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0_1;
    }
    do {
L_55baa4:;
        S0 = S0 - S1;
        r0_2 = std::bit_cast<u32>(S0);
        guest::preempt();
    } while (s32(r0_2) > s32(0x3f800000u));  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0_2;
}

}  // namespace d_0055ba48
GUEST_EXPORT(0x0055ba48, d_0055ba48::f_0055ba48);

// f_0055badc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0055badc {

inline constexpr guest::Function<0x00349878, u32(u32, u32, u32, u32)> call_00349878;  // (from the original)
inline constexpr guest::Function<0x00726d2c, u32(u32, u32, u32, u32)> call_00726d2c;  // (from the original)

u32 f_0055badc(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r0_5 = 0;
    u32 r1_5 = 0;
    u32 r0_6 = 0;
    u32 r1_6 = 0;
    u32 r0_7 = 0;
    u32 r1_7 = 0;
    u32 r0_8 = 0;
    u32 r1_8 = 0;
    u32 r0_9 = 0;
    u32 r1_9 = 0;
    u32 r0_10 = 0;
    u32 r1_10 = 0;
    u32 r0_11 = 0;
    u32 r1_11 = 0;
    u32 r0_12 = 0;
    u32 r1_12 = 0;
    u32 r0_13 = 0;
    u32 r1_13 = 0;
    u32 r0_14 = 0;
    u32 r1_14 = 0;
    u32 r0_15 = 0;
    u32 r1_15 = 0;
    u32 r0_16 = 0;
    u32 r1_16 = 0;
    u32 r0_17 = 0;
    u32 r1_17 = 0;
    u32 r0_18 = 0;
    u32 r1_18 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 4u;
    call_00349878(r0_1, r1, r2, guest::cpu()->r[3]);
    *gptr<u8>(r0 + 0x29cu) = u8(3u);  // (from the original)
    r1_1 = r0 + 0x1295cu;  // (from the original)
    r0_2 = r0 + 4u;
    call_00726d2c(r0_2, r1_1, 0x8c1b84u, guest::cpu()->r[3]);  // (from the original)
    r1_2 = r0 + 0x12964u;  // (from the original)
    r0_3 = r0 + 4u;
    call_00726d2c(r0_3, r1_2, 0x8c1b7cu, guest::cpu()->r[3]);  // (from the original)
    r1_3 = r0 + 0x1296cu;  // (from the original)
    r0_4 = r0 + 4u;
    call_00726d2c(r0_4, r1_3, 0x8c1b74u, guest::cpu()->r[3]);  // (from the original)
    r1_4 = r0 + 0x12974u;  // (from the original)
    r0_5 = r0 + 4u;
    call_00726d2c(r0_5, r1_4, 0x8c1b6cu, guest::cpu()->r[3]);  // (from the original)
    r1_5 = r0 + 0x1297cu;  // (from the original)
    r0_6 = r0 + 4u;
    call_00726d2c(r0_6, r1_5, 0x8c1b60u, guest::cpu()->r[3]);  // (from the original)
    r1_6 = r0 + 0x12984u;  // (from the original)
    r0_7 = r0 + 4u;
    call_00726d2c(r0_7, r1_6, 0x8c1b54u, guest::cpu()->r[3]);  // (from the original)
    r1_7 = r0 + 0x1298cu;  // (from the original)
    r0_8 = r0 + 4u;
    call_00726d2c(r0_8, r1_7, 0x8c1b48u, guest::cpu()->r[3]);  // (from the original)
    r1_8 = r0 + 0x12994u;  // (from the original)
    r0_9 = r0 + 4u;
    call_00726d2c(r0_9, r1_8, 0x8c1b3cu, guest::cpu()->r[3]);  // (from the original)
    r1_9 = r0 + 0x1299cu;  // (from the original)
    r0_10 = r0 + 4u;
    call_00726d2c(r0_10, r1_9, 0x8c1b34u, guest::cpu()->r[3]);  // (from the original)
    r1_10 = r0 + 0x129a4u;  // (from the original)
    r0_11 = r0 + 4u;
    call_00726d2c(r0_11, r1_10, 0x8c1b2cu, guest::cpu()->r[3]);  // (from the original)
    r1_11 = r0 + 0x129acu;  // (from the original)
    r0_12 = r0 + 4u;
    call_00726d2c(r0_12, r1_11, 0x8c1b20u, guest::cpu()->r[3]);  // (from the original)
    r1_12 = r0 + 0x129b4u;  // (from the original)
    r0_13 = r0 + 4u;
    call_00726d2c(r0_13, r1_12, 0x8c1b18u, guest::cpu()->r[3]);  // (from the original)
    r1_13 = r0 + 0x129bcu;  // (from the original)
    r0_14 = r0 + 4u;
    call_00726d2c(r0_14, r1_13, 0x8c1b10u, guest::cpu()->r[3]);  // (from the original)
    r1_14 = r0 + 0x129c4u;  // (from the original)
    r0_15 = r0 + 4u;
    call_00726d2c(r0_15, r1_14, 0x8c1b08u, guest::cpu()->r[3]);  // (from the original)
    r1_15 = r0 + 0x129ccu;  // (from the original)
    r0_16 = r0 + 4u;
    call_00726d2c(r0_16, r1_15, 0x8c1afcu, guest::cpu()->r[3]);  // (from the original)
    r1_16 = r0 + 0x129d4u;  // (from the original)
    r0_17 = r0 + 4u;
    call_00726d2c(r0_17, r1_16, 0x8c1ae8u, guest::cpu()->r[3]);  // (from the original)
    r1_17 = r0 + 0x12800u;  // (from the original)
    r0_18 = r0 + 4u;
    guest::cpu()->r[13] += 8u;
    r1_18 = r1_17 + 0x1dcu;  // (from the original)
    return call_00726d2c(r0_18, r1_18, 0x8c1ac8u, guest::cpu()->r[3]);  // (from the original)
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
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r6_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r7_1 = 0;
    u32 r1_3 = 0;
    u32 r3_2 = 0;
    u32 r1_4 = 0;
    u32 r0_5 = 0;
    u32 r1_5 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_6 = 0;
    u32 r3_4 = 0;
    u32 r1_7 = 0;
    u32 r0_8 = 0;
    u32 r1_8 = 0;
    u32 r2_3 = 0;
    u32 r3_5 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_9 = 0;
    u32 r1_10 = 0;
    u32 r2_4 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_11 = 0;
    r13 = r13 - 0x40u;  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(0u);  // (from the original)
    *gptr<u8>(r13 + 0x10u) = u8(0u);  // (from the original)
    *gptr<u8>(r13) = u8(0u);
    *gptr<u8>(r13 + 8u) = u8(0u);
    r4 = r0;
    *gptr<u8>(r13 + 0x11u) = u8(1u);  // (from the original)
    *gptr<u8>(r13 + 1u) = u8(1u);
    *gptr<u8>(r13 + 9u) = u8(1u);
    *gptr<u8>(r13 + 0x12u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r13 + 2u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r13 + 0xau) = u8(0xffu);  // (from the original)
    r0_1 = r4 + 0x129e4u;  // (from the original)
    *gptr<u8>(r13 + 0x13u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r13 + 3u) = u8(0xffu);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u8>(r13 + 0xbu) = u8(0xffu);  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0055b898(r0_1, 0xffu, 0u, 1u);  // (from the original)
    r3 = guest::cpu()->r[3];
    r5 = 0u;
    do {
L_55bcf4:;
        r1_1 = r13 + 0x10u;  // (from the original)
        r0_2 = r4 + 4u;
        guest::cpu()->r[13] = r13;
        call_00726d2c(r0_2, r1_1, 0x8c1abcu, r3);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        r6_1 = r4 + (r5 << 0xe);  // (from the original)
        r0_3 = r6_1 + 0x129e4u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_4 = call_001435b4(r0_3, r1_2, r2_1, r3_1);
        r7_1 = r4 + ((r5 << 7) - ((r5 << 3) - r5) << 4) + 0x371e4u;  // (from the original)
        r1_3 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0034a784(r7_1, r1_3, r0_4, 0xfu);  // (from the original)
        r3_2 = guest::cpu()->r[3];
        r1_4 = r13;
        r0_5 = r4 + 4u;
        guest::cpu()->r[13] = r13;
        call_00726d2c(r0_5, r1_4, 0x8c1ab8u, r3_2);  // (from the original)
        r1_5 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        r0_6 = r6_1 + 0x1e9e4u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_7 = call_001435b4(r0_6, r1_5, r2_2, r3_3);
        r1_6 = r13;
        guest::cpu()->r[13] = r13;
        call_0034a784(r7_1, r1_6, r0_7, 0xfu);  // (from the original)
        r3_4 = guest::cpu()->r[3];
        r1_7 = r13 + 8u;
        r0_8 = r4 + 4u;
        guest::cpu()->r[13] = r13;
        call_00726d2c(r0_8, r1_7, 0x8c1ab4u, r3_4);  // (from the original)
        r1_8 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
        r0_9 = r6_1 + 0x2a9e4u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_10 = call_001435b4(r0_9, r1_8, r2_3, r3_5);
        r1_9 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        call_0034a784(r7_1, r1_9, r0_10, 0xfu);  // (from the original)
        r1_10 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = r5 + 1u;
        guest::preempt();
    } while (r5 < 3u);
    r0_11 = r4 + 0x369e4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_12 = call_001435b4(r0_11, r1_10, r2_4, r3);
    r1_11 = r4 + 0x38894u;  // (from the original)
    *gptr<u32>(r1_11) = u32(r0_12);
    *gptr<u32>(r4 + 0x38898u) = u32(0x400u);  // (from the original)
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1_11;
    guest::cpu()->r[13] = r13;
    return r0_12;
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
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r1_3 = 0;
    u32 r5_1 = 0;
    u32 r5_2 = 0;
    u32 r0_3 = 0;
    u32 r5_3 = 0;
    u32 r5_4 = 0;
    u32 r5_5 = 0;
    u32 res_1 = 0;
    u32 ea_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r3_1 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    arg0->word_0 = u32(r1);
    guest::cpu()->r[13] = r13;
    call_0055badc(r4, r2, r3, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0055bc90(r4, r1_1, r2_1, r3_2);
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r1_2 = r4 + 0x388a0u;  // (from the original)
    r0_1 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_00726a54(r0_1, r1_2, r2_2, r3_3);
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r1_3 = r0_2 - r4;
    r5_1 = r4 + 0x398a4u;  // (from the original)
    *gptr<u32>(0x398a0u + r4) = u32(r1_3 - 0x388a0u);  // (from the original)
    r6 = 0u;
    *gptr<u32>(r5_1) = u32(r6);
    r5_2 = r5_1 + 4u;
    r0_3 = 0xf0201u ^ u32(s32(0x398a0u) >> 0x10);  // (from the original)
    *gptr<u32>(r5_2) = u32(0xf0201u);  // (from the original)
    r5_3 = r5_2 + 4u;
    *gptr<u32>(r5_3) = u32(r6);
    r5_4 = r5_3 + 4u;
    *gptr<u32>(r5_4) = u32(r0_3);
    r5_5 = r5_4 + 4u;
    guest::cpu()->r[13] = r13;
    call_002f825c(r5_5, 0x98u, r2_3, r3_4);  // (from the original)
    r3 = 0x803f0232u;  // (from the original)
    r12 = r5_5 + 0x98u;  // (from the original)
    *gptr<u32>(r5_5 + 4u) = u32(0x823f0203u);  // (from the original)
    r0 = r12;
    r1 = 0u;
    r2 = 0xcu;  // (from the original)
    do {
L_55c164:;
        res_1 = r2 - 1u;
        r2 = res_1;
        ea_1 = r0 + 4u;
        *gptr<u32>(ea_1) = u32(r3);
        *gptr<u32>(ea_1 + 4) = u32(r6);
        *gptr<u32>(r0 + 0xcu) = u32(r6);  // (from the original)
        *gptr<u32>(r0 + 0x10u) = u32(r6);  // (from the original)
        *gptr<u32>(r0) = u32(r1);
        r0_4 = r0 + 0x14u;  // (from the original)
        r1 = r1 + 1u;
        *gptr<u32>(r0_4) = u32(r6);
        r0 = r0_4 + 4u;
        guest::preempt();
    } while (res_1 != 0);
    r0_5 = r12 + 0x120u - r4 - 0x398a4u;  // (from the original)
    *gptr<u32>(r4 + 0x39aa4u) = u32(r0_5);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_5;
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

inline guest::global<u32, 0x00af51cc> global_00af51cc;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)

u32 f_0055c1b8(gptr<Object_0055c1b8_0> arg0, gptr<Object_0055c1b8_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r6_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r6_2 = 0;
    u32 r5_1 = 0;
    u32 r2_2 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r0_1 = r1;
    ea_1 = arg0->word_0 + 0x60768u;  // (from the original)
    r1_1 = ea_1;
    if (*gptr<u32>(ea_1) != 2u) {
        *gptr<u32>(r1_1) = u32(2u);
        r6_1 = r0 + 0x398a0u;  // (from the original)
        arg1->word_0 = u32(u32(arg0->byte_129d6) | 0x80000000u);  // (from the original)
        arg1->word_4 = u32(0x804f0290u);  // (from the original)
        arg1->word_8 = u32(*gptr<u32>(0xaf51ccu + 0xcu));  // (from the original)
        arg1->word_c = u32(*gptr<u32>(0xaf51ccu + 8u));  // (from the original)
        arg1->word_10 = u32(*gptr<u32>(0xaf51ccu + 4u));  // (from the original)
        arg1->word_14 = u32(*global_00af51cc);
        r0_2 = r0_1 + 0x18u;  // (from the original)
        r2_1 = arg0->word_398a0;
        r1_2 = r0 + 0x388a0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002fbb30(r0_2, r1_2, r2_1, 0x804f0290u);  // (from the original)
        r3_1 = guest::cpu()->r[3];
        r0_3 = *gptr<u32>(r6_1);
        r6_2 = r0 + 0x39aa4u;  // (from the original)
        r5_1 = r0_2 + (r0_3 & ~3u);
        r2_2 = *gptr<u32>(r6_2);
        r1_3 = r0 + 0x398a4u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002fbb30(r5_1, r1_3, r2_2, r3_1);
        r1_1 = guest::cpu()->r[1];
        r0_1 = (*gptr<u32>(r6_2) & ~3u) + r5_1;
    }
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
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
    u32 r4_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4_1 = r0 + 0x39aa4u;  // (from the original)
    r2_1 = arg0->word_39aa4;
    r1_1 = r0 + 0x398a4u;  // (from the original)
    call_002fbb30(r1, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_1 = (*gptr<u32>(r4_1) & ~3u) + r1;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0_1;
}

}  // namespace d_0055c27c
GUEST_EXPORT(0x0055c27c, d_0055c27c::f_0055c27c);

// f_0055c2b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0055c2b0 {

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x0034a5e4, u32(u32, u32, u32, u32)> call_0034a5e4;  // (from the original)

u32 f_0055c2b0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_1 = 0;
    u32 r2_2 = 0;
    u32 r2_3 = 0;
    u32 r2_4 = 0;
    u32 r2_5 = 0;
    u32 r2_6 = 0;
    u32 r2_7 = 0;
    u32 r2_8 = 0;
    u32 r2_9 = 0;
    u32 r2_10 = 0;
    u32 r2_11 = 0;
    u32 r2_12 = 0;
    u32 r2_13 = 0;
    u32 r2_14 = 0;
    u32 r2_15 = 0;
    u32 r2_16 = 0;
    u32 r2_17 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_1 = 0;
    r0_1 = r0 + 4u;
    guest::cpu()->r[13] -= 8u;
    r0_2 = call_0034a5e4(r0_1, r1, r2, r3);
    r0_3 = r0_2 - 4u;
    r2_1 = r0_3 + 0x1295cu;  // (from the original)
    *gptr<u8>(r2_1) = u8(0u);
    *gptr<u8>(r2_1 + 1u) = u8(2u);
    *gptr<u8>(r2_1 + 2u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r2_1 + 3u) = u8(0xffu);  // (from the original)
    *gptr<u32>(r2_1 + 4u) = u32(0u);
    r2_2 = r0_3 + 0x12964u;  // (from the original)
    *gptr<u8>(r2_2) = u8(0u);
    *gptr<u8>(r2_2 + 1u) = u8(2u);
    *gptr<u8>(r2_2 + 2u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r2_2 + 3u) = u8(0xffu);  // (from the original)
    *gptr<u32>(r2_2 + 4u) = u32(0u);
    r2_3 = r0_3 + 0x1296cu;  // (from the original)
    *gptr<u8>(r2_3) = u8(0u);
    *gptr<u8>(r2_3 + 1u) = u8(2u);
    *gptr<u8>(r2_3 + 2u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r2_3 + 3u) = u8(0xffu);  // (from the original)
    *gptr<u32>(r2_3 + 4u) = u32(0u);
    r2_4 = r0_3 + 0x12974u;  // (from the original)
    *gptr<u8>(r2_4) = u8(0u);
    *gptr<u8>(r2_4 + 1u) = u8(2u);
    *gptr<u8>(r2_4 + 2u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r2_4 + 3u) = u8(0xffu);  // (from the original)
    *gptr<u32>(r2_4 + 4u) = u32(0u);
    r2_5 = r0_3 + 0x1297cu;  // (from the original)
    *gptr<u8>(r2_5) = u8(0u);
    *gptr<u8>(r2_5 + 1u) = u8(2u);
    *gptr<u8>(r2_5 + 2u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r2_5 + 3u) = u8(0xffu);  // (from the original)
    *gptr<u32>(r2_5 + 4u) = u32(0u);
    r2_6 = r0_3 + 0x12984u;  // (from the original)
    *gptr<u8>(r2_6) = u8(0u);
    *gptr<u8>(r2_6 + 1u) = u8(2u);
    *gptr<u8>(r2_6 + 2u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r2_6 + 3u) = u8(0xffu);  // (from the original)
    *gptr<u32>(r2_6 + 4u) = u32(0u);
    r2_7 = r0_3 + 0x1298cu;  // (from the original)
    *gptr<u8>(r2_7) = u8(0u);
    *gptr<u8>(r2_7 + 1u) = u8(2u);
    *gptr<u8>(r2_7 + 2u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r2_7 + 3u) = u8(0xffu);  // (from the original)
    *gptr<u32>(r2_7 + 4u) = u32(0u);
    r2_8 = r0_3 + 0x12994u;  // (from the original)
    *gptr<u8>(r2_8) = u8(0u);
    *gptr<u8>(r2_8 + 1u) = u8(2u);
    *gptr<u8>(r2_8 + 2u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r2_8 + 3u) = u8(0xffu);  // (from the original)
    *gptr<u32>(r2_8 + 4u) = u32(0u);
    r2_9 = r0_3 + 0x1299cu;  // (from the original)
    *gptr<u8>(r2_9) = u8(0u);
    *gptr<u8>(r2_9 + 1u) = u8(2u);
    *gptr<u8>(r2_9 + 2u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r2_9 + 3u) = u8(0xffu);  // (from the original)
    *gptr<u32>(r2_9 + 4u) = u32(0u);
    r2_10 = r0_3 + 0x129a4u;  // (from the original)
    *gptr<u8>(r2_10) = u8(0u);
    *gptr<u8>(r2_10 + 1u) = u8(2u);
    *gptr<u8>(r2_10 + 2u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r2_10 + 3u) = u8(0xffu);  // (from the original)
    *gptr<u32>(r2_10 + 4u) = u32(0u);
    r2_11 = r0_3 + 0x129acu;  // (from the original)
    *gptr<u8>(r2_11) = u8(0u);
    *gptr<u8>(r2_11 + 1u) = u8(2u);
    *gptr<u8>(r2_11 + 2u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r2_11 + 3u) = u8(0xffu);  // (from the original)
    *gptr<u32>(r2_11 + 4u) = u32(0u);
    r2_12 = r0_3 + 0x129b4u;  // (from the original)
    *gptr<u8>(r2_12) = u8(0u);
    *gptr<u8>(r2_12 + 1u) = u8(2u);
    *gptr<u8>(r2_12 + 2u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r2_12 + 3u) = u8(0xffu);  // (from the original)
    *gptr<u32>(r2_12 + 4u) = u32(0u);
    r2_13 = r0_3 + 0x129bcu;  // (from the original)
    *gptr<u8>(r2_13) = u8(0u);
    *gptr<u8>(r2_13 + 1u) = u8(2u);
    *gptr<u8>(r2_13 + 2u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r2_13 + 3u) = u8(0xffu);  // (from the original)
    *gptr<u32>(r2_13 + 4u) = u32(0u);
    r2_14 = r0_3 + 0x129c4u;  // (from the original)
    *gptr<u8>(r2_14) = u8(0u);
    *gptr<u8>(r2_14 + 1u) = u8(2u);
    *gptr<u8>(r2_14 + 2u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r2_14 + 3u) = u8(0xffu);  // (from the original)
    *gptr<u32>(r2_14 + 4u) = u32(0u);
    r2_15 = r0_3 + 0x129ccu;  // (from the original)
    *gptr<u8>(r2_15) = u8(0u);
    *gptr<u8>(r2_15 + 1u) = u8(2u);
    *gptr<u8>(r2_15 + 2u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r2_15 + 3u) = u8(0xffu);  // (from the original)
    *gptr<u32>(r2_15 + 4u) = u32(0u);
    r2_16 = r0_3 + 0x129d4u;  // (from the original)
    *gptr<u8>(r2_16) = u8(1u);
    *gptr<u8>(r2_16 + 1u) = u8(2u);
    *gptr<u8>(r2_16 + 2u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r2_16 + 3u) = u8(0xffu);  // (from the original)
    *gptr<u32>(r2_16 + 4u) = u32(0u);
    r2_17 = r0_3 + 0x129dcu;  // (from the original)
    *gptr<u8>(r2_17) = u8(1u);
    *gptr<u8>(r2_17 + 1u) = u8(4u);
    *gptr<u8>(r2_17 + 2u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r2_17 + 3u) = u8(0xffu);  // (from the original)
    *gptr<u32>(r2_17 + 4u) = u32(0u);
    r0_4 = r0_3 + 0x371e4u;  // (from the original)
    r0_5 = call_00301d0c(r0_4, 0x34ab24u, 0x790u, 3u);  // (from the original)
    r0_6 = r0_5 - 0x371e4u;  // (from the original)
    r1_1 = r0_6 + 0x38894u;  // (from the original)
    *gptr<u32>(r1_1) = u32(0u);
    *gptr<u32>(r1_1 + 4u) = u32(0u);
    *gptr<u8>(r1_1 + 8u) = u8(0u);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_6;
}

}  // namespace d_0055c2b0
GUEST_EXPORT(0x0055c2b0, d_0055c2b0::f_0055c2b0);

// f_0055c4ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0055c4ec {

inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)
inline constexpr guest::Function<0x00132174, u32(u32, u32, u32, u32)> call_00132174;  // (from the original)
inline constexpr guest::Function<0x00540c9c, u32(u32, u32, u32, u32)> call_00540c9c;  // (from the original)

u32 f_0055c4ec(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r1_1 = 0;
    u32 r0_6 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 r2_3 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    u32 r2_4 = 0;
    u32 r0_7 = 0;
    u32 ea_7 = 0;
    r13 = r13 - 0x18;  // (from the original)
    r0_1 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_00540c9c(r0_1, 0u, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_3 = r0_2 + 8u;
    guest::cpu()->r[13] = r13;
    r0_4 = call_00540c9c(r0_3, 0u, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_5 = r0_4 + 8u;
    r1_1 = r0_5 + 0x18u;  // (from the original)
    *gptr<u32>(r0_5 + 0x10u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_5 + 0x14u) = u32(0u);  // (from the original)
    *gptr<u32>(r1_1) = u32(r0_5);
    *gptr<u32>(r1_1 + 4) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_6 = call_00132174(r0_5, r1_1, r2_2, r3_2);
    *gptr<u32>(r0_6) = u32(0x904a10u);  // (from the original)
    ea_1 = r0_6 + 0x24u;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0_6 + 0x2cu);  // (from the original)
    ea_2 = r0_6 + 0x20u;  // (from the original)
    *gptr<u32>(ea_2) = u32(0x90558cu);  // (from the original)
    ea_3 = r0_6 + 0x28u;  // (from the original)
    *gptr<u32>(ea_3) = u32(0x20u);  // (from the original)
    ea_4 = r0_6 + 0x24u;  // (from the original)
    r2_3 = *gptr<u32>(ea_4);
    *gptr<u8>(0x20u + (r2_3 - 1u)) = u8(u32(*global_008c9f1c));  // (from the original)
    ea_5 = r0_6 + 0x20u;  // (from the original)
    *gptr<u32>(ea_5) = u32(0x905120u);  // (from the original)
    ea_6 = r0_6 + 0x24u;  // (from the original)
    r2_4 = *gptr<u32>(ea_6);
    *gptr<u8>(r2_4) = u8(u32(*global_008c9f1c));
    *gptr<u32>(r0_6 + 0x20u) = u32(0x9048ecu);  // (from the original)
    *gptr<u32>(r0_6) = u32(0x905488u);  // (from the original)
    r0_7 = r0_6 - 0x14u;  // (from the original)
    *gptr<u32>(r0_7) = u32(r1);
    ea_7 = r0_7 + 0x60u;  // (from the original)
    *gptr<u32>(ea_7) = u32(r2);
    *gptr<u32>(ea_7 + 4) = u32(0u);
    *gptr<u32>(r0_7 + 0x80u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_7 + 0x68u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_7 + 0x6cu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_7 + 0x70u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_7 + 0x74u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_7 + 0x78u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_7 + 0x7cu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_7 + 0x84u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_7 + 0x88u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_7 + 0x8cu) = u32(0u);  // (from the original)
    *gptr<u8>(r0_7 + 0x9cu) = u8(1u);  // (from the original)
    *gptr<u32>(r0_7 + 0x254u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_7 + 0x258u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_7 + 0x250u) = u32(0u);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = 1u;
    guest::cpu()->r[13] = r13;
    return r0_7;
}

}  // namespace d_0055c4ec
GUEST_EXPORT(0x0055c4ec, d_0055c4ec::f_0055c4ec);

// f_0055c5ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0055c5ec {

inline constexpr guest::Function<0x00545aa8, u32(u32, u32, u32, u32)> call_00545aa8;  // (from the original)

u32 f_0055c5ec(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    r0_1 = r0 + 0x14u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r0_2 = call_00545aa8(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_3 = r0_2 - 0x14u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0_3;
}

}  // namespace d_0055c5ec
GUEST_EXPORT(0x0055c5ec, d_0055c5ec::f_0055c5ec);

// f_0055c670: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0055c670 {

inline constexpr guest::Function<0x0012f204, u32(u32, u32, u32, u32)> call_0012f204;  // (from the original)
inline constexpr guest::Function<0x00132174, u32(u32, u32, u32, u32)> call_00132174;  // (from the original)
inline constexpr guest::Function<0x0014f5dc, u32(u32, u32, u32, u32)> call_0014f5dc;  // (from the original)

u32 f_0055c670(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00132174(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r4_1 = r0_1 + 0x10u;  // (from the original)
    *gptr<u32>(r0_1) = u32(0x905a2cu);  // (from the original)
    *gptr<u32>(r0_1 + 0x10u) = u32(0u);  // (from the original)
    r0_2 = r13;
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_3 = call_0014f5dc(r0_2, 0u, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    res_1 = r0_3 >> 0x1f;  // (from the original)
    if (res_1 == 0) {
        r2_2 = *gptr<u32>(r13);
        r0_3 = 0u;
        *gptr<u32>(r4_1) = u32(r2_2);
    }
    res_2 = r0_3 >> 0x1f;  // (from the original)
    r1_1 = res_2;
    if (res_2 != 0) {
        guest::cpu()->r[13] = r13;
        call_0012f204(r0_3, r1_1, r2_2, r3_2);
        r1_1 = guest::cpu()->r[1];
    }
    r0_4 = r4_1 - 0x10u;  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_4;
}

}  // namespace d_0055c670
GUEST_EXPORT(0x0055c670, d_0055c670::f_0055c670);

// f_0055c73c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0055c73c {


u32 f_0055c73c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 v_1 = 0;
    u32 r2_1 = 0;
    u32 r7_1 = 0;
    u32 zf_1 = 0;
    u32 zf_2 = 0;
    u32 v_2 = 0;
    u32 r2_2 = 0;
    u32 r8_1 = 0;
    u32 r7_2 = 0;
    u32 zf_3 = 0;
    u32 zf_4 = 0;
    u32 v_3 = 0;
    u32 r2_3 = 0;
    u32 r9_1 = 0;
    u32 r7_3 = 0;
    u32 zf_5 = 0;
    u32 zf_6 = 0;
    u32 v_4 = 0;
    u32 r7_4 = 0;
    u32 r5_1 = 0;
    u32 zf_7 = 0;
    u32 zf_8 = 0;
    u32 res_3 = 0;
    u32 r5_2 = 0;
    r13 = r13 - 0x1c;  // (from the original)
    r12 = 0u;
    r4 = r12;
    r6 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    if (r3 == 0 || r3 >> 0x1f != (r3 & (r3 ^ r3)) >> 0x1f) {  // (from the original)
        goto L_55c958;
    }
L_55c754:;
    if (s32(u32(s32(s8(*gptr<u8>(r2))))) >= s32(0x20u)) {  // (from the original)
        goto L_55c78c;
    }
    r4 = r4 + 1u;
    res_1 = r4 - r3;
    r2 = r2 + 1u;
    if (res_1 >> 0x1f == ((r4 ^ r3) & (r4 ^ res_1)) >> 0x1f) {  // (from the original)
        goto L_55c958;
    }
    if (s32(u32(s32(s8(*gptr<u8>(r2))))) >= s32(0x20u)) {  // (from the original)
        goto L_55c78c;
    }
    r4 = r4 + 1u;
    res_2 = r4 - r3;
    r2 = r2 + 1u;
    if (res_2 >> 0x1f == ((r4 ^ r3) & (r4 ^ res_2)) >> 0x1f) {  // (from the original)
        goto L_55c958;
    }
L_55c78c:;
    if (s32(r3) < s32(r4 + 4u)) {
        goto L_55c934;
    }
    v_1 = u32(s32(s8(*gptr<u8>(r2))));
    r2_1 = r2 + 1u;
    r7_1 = v_1 - 0x41u;  // (from the original)
    if (r7_1 <= 0x19u) {  // (from the original)
        goto L_55c7e8;
    }
    if (v_1 - 0x61u <= 0x19u) {  // (from the original)
        r7_1 = v_1 - 0x47u;  // (from the original)
        goto L_55c7e8;
    }
    if (v_1 - 0x30u <= 9u) {  // (from the original)
        r7_1 = v_1 + 4u;
        goto L_55c7e8;
    }
    zf_1 = v_1 == 0x2bu;  // (from the original)
    if (!zf_1) {
        zf_1 = v_1 == 0x2du;  // (from the original)
    }
    if (zf_1) {
        r7_1 = 0x3eu;  // (from the original)
        goto L_55c7e8;
    }
    zf_2 = v_1 == 0x2fu;  // (from the original)
    if (!zf_2) {
        zf_2 = v_1 == 0x5fu;  // (from the original)
    }
    if (zf_2) {
        r7_1 = 0x3fu;  // (from the original)
    } else {
        r7_1 = 0x40u;  // (from the original)
    }
L_55c7e8:;
    v_2 = u32(s32(s8(*gptr<u8>(r2_1))));
    r2_2 = r2_1 + 1u;
    r8_1 = r7_1 & 0x3fu;  // (from the original)
    r7_2 = v_2 - 0x41u;  // (from the original)
    if (r7_2 <= 0x19u) {  // (from the original)
        goto L_55c83c;
    }
    if (v_2 - 0x61u <= 0x19u) {  // (from the original)
        r7_2 = v_2 - 0x47u;  // (from the original)
        goto L_55c83c;
    }
    if (v_2 - 0x30u <= 9u) {  // (from the original)
        r7_2 = v_2 + 4u;
        goto L_55c83c;
    }
    zf_3 = v_2 == 0x2bu;  // (from the original)
    if (!zf_3) {
        zf_3 = v_2 == 0x2du;  // (from the original)
    }
    if (zf_3) {
        r7_2 = 0x3eu;  // (from the original)
        goto L_55c83c;
    }
    zf_4 = v_2 == 0x2fu;  // (from the original)
    if (!zf_4) {
        zf_4 = v_2 == 0x5fu;  // (from the original)
    }
    if (zf_4) {
        r7_2 = 0x3fu;  // (from the original)
    } else {
        r7_2 = 0x40u;  // (from the original)
    }
L_55c83c:;
    v_3 = u32(s32(s8(*gptr<u8>(r2_2))));
    r2_3 = r2_2 + 1u;
    r9_1 = r7_2 & 0x3fu;  // (from the original)
    r7_3 = v_3 - 0x41u;  // (from the original)
    if (r7_3 <= 0x19u) {  // (from the original)
        goto L_55c890;
    }
    if (v_3 - 0x61u <= 0x19u) {  // (from the original)
        r7_3 = v_3 - 0x47u;  // (from the original)
        goto L_55c890;
    }
    if (v_3 - 0x30u <= 9u) {  // (from the original)
        r7_3 = v_3 + 4u;
        goto L_55c890;
    }
    zf_5 = v_3 == 0x2bu;  // (from the original)
    if (!zf_5) {
        zf_5 = v_3 == 0x2du;  // (from the original)
    }
    if (zf_5) {
        r7_3 = 0x3eu;  // (from the original)
        goto L_55c890;
    }
    zf_6 = v_3 == 0x2fu;  // (from the original)
    if (!zf_6) {
        zf_6 = v_3 == 0x5fu;  // (from the original)
    }
    if (zf_6) {
        r7_3 = 0x3fu;  // (from the original)
    } else {
        r7_3 = 0x40u;  // (from the original)
    }
L_55c890:;
    v_4 = u32(s32(s8(*gptr<u8>(r2_3))));
    r2 = r2_3 + 1u;
    r7_4 = r7_3 & 0x7fu;  // (from the original)
    if (v_4 - 0x41u <= 0x19u) {  // (from the original)
        r5_1 = v_4 - 0x41u;  // (from the original)
        goto L_55c8e8;
    }
    if (v_4 - 0x61u <= 0x19u) {  // (from the original)
        r5_1 = v_4 - 0x47u;  // (from the original)
        goto L_55c8e8;
    }
    if (v_4 - 0x30u <= 9u) {  // (from the original)
        r5_1 = v_4 + 4u;
        goto L_55c8e8;
    }
    zf_7 = v_4 == 0x2bu;  // (from the original)
    if (!zf_7) {
        zf_7 = v_4 == 0x2du;  // (from the original)
    }
    if (zf_7) {
        r5_1 = 0x3eu;  // (from the original)
        goto L_55c8e8;
    }
    zf_8 = v_4 == 0x2fu;  // (from the original)
    if (!zf_8) {
        zf_8 = v_4 == 0x5fu;  // (from the original)
    }
    if (zf_8) {
        r5_1 = 0x3fu;  // (from the original)
    } else {
        r5_1 = 0x40u;  // (from the original)
    }
L_55c8e8:;
    res_3 = r1 - r12;
    r5_2 = r5_1 & 0x7fu;  // (from the original)
    if (res_3 == 0 || res_3 >> 0x1f != ((r1 ^ r12) & (r1 ^ res_3)) >> 0x1f) {  // (from the original)
        goto L_55c934;
    }
    *gptr<u8>(r0 + r12) = u8(r8_1 << 2 | r9_1 >> 4);
    r12 = r12 + 1u;
    if (r7_4 >= 0x40u) {  // (from the original)
        goto L_55c94c;
    }
    if (s32(r1) <= s32(r12)) {
        goto L_55c934;
    }
    *gptr<u8>(r0 + r12) = u8(r9_1 << 4 | r7_4 >> 2);
    r12 = r12 + 1u;
    if (r5_2 >= 0x40u) {  // (from the original)
        goto L_55c94c;
    }
    if (s32(r1) > s32(r12)) {
        goto L_55c940;
    }
L_55c934:;
    r13 = r13 + 0x1c;  // (from the original)
    guest::cpu()->r[13] = r13;
    return 0u;
L_55c940:;
    *gptr<u8>(r0 + r12) = u8(r5_2 | r7_4 << 6);
    r12 = r12 + 1u;
L_55c94c:;
    r4 = r4 + 4u;
    if (s32(r4) < s32(r3)) {
        guest::preempt();
        goto L_55c754;
    }
L_55c958:;
    if (r6 != 0) {
        *gptr<u32>(r6) = u32(r12);
    }
    r13 = r13 + 0x1c;  // (from the original)
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_0055c73c
GUEST_EXPORT(0x0055c73c, d_0055c73c::f_0055c73c);

// f_0055c96c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0055c96c {


u32 f_0055c96c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r12 = 0;
    u32 r12_1 = 0;
    u32 r12_2 = 0;
    u32 r6_1 = 0;
    u32 r5_1 = 0;
    u32 res_1 = 0;
    u32 r8_1 = 0;
    u32 r12_3 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    if (r3 == 0) {
        r3 = 0x8c54ccu;  // (from the original)
    } else {
        r3 = 0x8c5488u;  // (from the original)
    }
    r12_1 = u32(u64(s64(s32(0x55555556u)) * s32(r2)) >> 0x20);  // (from the original)
    r12_2 = r12_1 - u32(s32(r12_1) >> 0x1f);  // (from the original)
    r7 = r12_2 + (r12_2 << 1);
    r6_1 = r7 + 2u;
    if (s32(r6_1) <= s32(2u)) {
        goto L_55ca24;
    }
    r5_1 = u32(u64(s64(s32(0x55555556u)) * s32(r6_1)) >> 0x20);  // (from the original)
    r12 = r1;
    r4 = r0;
    r5 = r5_1 - u32(s32(r5_1) >> 0x1f);  // (from the original)
    r6 = r5;
    do {
L_55c9ac:;
        res_1 = r5 - 1u;
        r5 = res_1;
        *gptr<u8>(r4) = u8(u32(*gptr<u8>(r3 + (u32(*gptr<u8>(r12)) >> 2))));
        *gptr<u8>(r4 + 1u) = u8(u32(*gptr<u8>(r3 + (u32(*gptr<u8>(r12)) << 0x1e >> 0x1a | (u32(*gptr<u8>(r12 + 1u)) & 0xf0u) >> 4))));  // (from the original)
        *gptr<u8>(r4 + 2u) = u8(u32(*gptr<u8>(r3 + (u32(*gptr<u8>(r12 + 1u)) << 0x1c >> 0x1a | (u32(*gptr<u8>(r12 + 2u)) & 0xc0u) >> 6))));  // (from the original)
        r8_1 = u32(*gptr<u8>(r12 + 2u));
        r12 = r12 + 3u;
        *gptr<u8>(r4 + 3u) = u8(u32(*gptr<u8>(r3 + (r8_1 & 0x3fu))));  // (from the original)
        r4 = r4 + 4u;
        guest::preempt();
    } while (res_1 != 0);
    r0 = r0 + (r6 << 2);
    r1 = r1 + (r6 + (r6 << 1));
L_55ca24:;
    r12_3 = r2 - r7;
    if (r12_3 != 1u) {
        if (r12_3 != 2u) {
            goto L_55caa0;
        }
        *gptr<u8>(r0) = u8(u32(*gptr<u8>(r3 + (u32(*gptr<u8>(r1)) >> 2))));
        *gptr<u8>(r0 + 1u) = u8(u32(*gptr<u8>(r3 + (u32(*gptr<u8>(r1)) << 0x1e >> 0x1a | (u32(*gptr<u8>(r1 + 1u)) & 0xf0u) >> 4))));  // (from the original)
        r1 = u32(*gptr<u8>(r3 + ((u32(*gptr<u8>(r1 + 1u)) & 0xfu) << 2)));  // (from the original)
        *gptr<u8>(r0 + 2u) = u8(r1);
    } else {
        *gptr<u8>(r0) = u8(u32(*gptr<u8>(r3 + (u32(*gptr<u8>(r1)) >> 2))));
        r1 = u32(*gptr<u8>(r3 + ((u32(*gptr<u8>(r1)) & 3u) << 4)));
        *gptr<u8>(r0 + 1u) = u8(r1);
        *gptr<u8>(r0 + 2u) = u8(0x3du);  // (from the original)
    }
    *gptr<u8>(r0 + 3u) = u8(0x3du);  // (from the original)
L_55caa0:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0055c96c
GUEST_EXPORT(0x0055c96c, d_0055c96c::f_0055c96c);

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
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 ea_1 = 0;
    u32 r1_2 = 0;
    r1_1 = (r1 ^ r1 >> 0x1e) * 0x6c078965u + 1u;  // (from the original)
    r2_1 = (r1_1 ^ r1_1 >> 0x1e) * 0x6c078965u + 2u;  // (from the original)
    arg0->word_0 = u32(r1_1);
    arg0->word_4 = u32(r2_1);
    r3_1 = (r2_1 ^ r2_1 >> 0x1e) * 0x6c078965u + 3u;  // (from the original)
    ea_1 = r0 + 8u;
    arg0->word_8 = u32(r3_1);
    r1_2 = (r3_1 ^ r3_1 >> 0x1e) * 0x6c078965u + 4u;  // (from the original)
    arg0->word_c = u32(r1_2);
    guest::cpu()->r[1] = r1_2;
    return ea_1;
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
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r12_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 b_1 = 0;
    u32 res_1 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    u32 res_2 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x40u;  // (from the original)
    if (arg0->word_7c == 0) {
        r12_1 = arg0->word_80;
        *gptr<u32>(r13 + 0x14u) = u32(r0);  // (from the original)
        S0_1 = std::bit_cast<float>(arg0->word_88);
        S1_1 = std::bit_cast<float>(arg0->word_8c);
        r3_1 = r13 + 0x14u;  // (from the original)
        *gptr<u32>(r13 + 0x20u) = u32(4u);  // (from the original)
        *gptr<u32>(r13 + 0x24u) = u32(0x1394e4u);  // (from the original)
        *gptr<u32>(r13 + 0x28u) = u32(0x139500u);  // (from the original)
        *gptr<u32>(r13 + 0x2cu) = u32(0x1394f4u);  // (from the original)
        *gptr<u32>(r13) = u32(arg0->word_54 + arg0->word_84);
        r0_1 = r13 + 4u;
        *gptr<u32>(r0_1) = u32(std::bit_cast<u32>(S0_1));
        *gptr<u32>(r0_1 + 4) = u32(std::bit_cast<u32>(S1_1));
        *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
        r1_1 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        r0_2 = call_00128e80(r12_1, r1_1, 0x55cc40u, r3_1);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        if ((r0_2 & 0x7e00000u) != 0x600000u) {  // (from the original)
            b_1 = r0_2 >> 0x1f;  // (from the original)
            r1 = b_1;
            if (b_1 != 0) {
                guest::cpu()->r[13] = r13;
                guest::cpu()->s[0] = S0;
                guest::cpu()->s[1] = S1;
                call_0012f204(r0_2, r1, r2_1, r3_2);
                r1 = guest::cpu()->r[1];
                r2_1 = guest::cpu()->r[2];
                r3_2 = guest::cpu()->r[3];
                S0 = guest::cpu()->s[0];
                S1 = guest::cpu()->s[1];
            }
        }
        res_1 = r0_2 & 0x80000000u;  // (from the original)
        if (!(res_1 >> 0x1f)) {  // (from the original)
            goto L_55ce00;
        }
    }
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 0u;
L_55ce00:;
    r1_2 = *gptr<u32>(*gptr<u32>(r0 + 0x80u));  // (from the original)
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_4 = call_00139504(r0_3, r1_2, r2_1, r3_2);
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    res_2 = r0_4 >> 0x1f;  // (from the original)
    if (res_2 != 0) {
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        call_0012f204(r0_4, res_2, r2_2, r3_3);
        S0_2 = guest::cpu()->s[0];
        S1_2 = guest::cpu()->s[1];
    }
    r1_3 = *gptr<u32>(r0 + 0x7cu);  // (from the original)
    *gptr<u32>(r0 + 0x78u) = u32(*gptr<u32>(r13));  // (from the original)
    if (r1_3 == 0) {
        *gptr<u32>(r0 + 0x7cu) = u32(1u);  // (from the original)
    }
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return 1u;
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

inline guest::global<u32, 0x0055d5b8> global_0055d5b8;  // (from the original)
inline guest::global<u32, 0x0055d5bc> global_0055d5bc;  // (from the original)

void f_0055d510(gptr<Object_0055d510_0> arg0) {
    u32 fpsr = guest::cpu()->fpscr;
    float S0_1 = 0;
    float S2_1 = 0;
    float S1_1 = 0;
    u32 fpsr_1 = 0;
    float S2_2 = 0;
    u32 fpsr_2 = 0;
    float S2_3 = 0;
    u32 fpsr_3 = 0;
    float S2_4 = 0;
    u32 fpsr_4 = 0;
    u32 fpsr_5 = 0;
    S0_1 = std::bit_cast<float>(*global_0055d5b8);
    S2_1 = std::bit_cast<float>(arg0->word_0);
    S1_1 = std::bit_cast<float>(*global_0055d5bc);
    fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S2_1, S0_1);  // (from the original)
    if (!(fpsr_1 >> 0x1d & 1)) {  // (from the original)
        S2_1 = S0_1;
        goto L_55d53c;
    }
    fpsr_1 = fpsr_1 & 0xfffffffu | vfp_cmpf(S2_1, S1_1);  // (from the original)
    if (!(fpsr_1 >> 0x1e & 1) && fpsr_1 >> 0x1f == (fpsr_1 >> 0x1c & 1)) {  // (from the original)
        S2_1 = S1_1;
    }
L_55d53c:;
    arg0->word_0 = u32(std::bit_cast<u32>(S2_1));
    S2_2 = std::bit_cast<float>(arg0->word_4);
    fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S2_2, S0_1);  // (from the original)
    if (!(fpsr_2 >> 0x1d & 1)) {  // (from the original)
        S2_2 = S0_1;
        goto L_55d564;
    }
    fpsr_2 = fpsr_2 & 0xfffffffu | vfp_cmpf(S2_2, S1_1);  // (from the original)
    if (!(fpsr_2 >> 0x1e & 1) && fpsr_2 >> 0x1f == (fpsr_2 >> 0x1c & 1)) {  // (from the original)
        S2_2 = S1_1;
    }
L_55d564:;
    arg0->word_4 = u32(std::bit_cast<u32>(S2_2));
    S2_3 = std::bit_cast<float>(arg0->word_8);
    fpsr_3 = fpsr_2 & 0xfffffffu | vfp_cmpf(S2_3, S0_1);  // (from the original)
    if (!(fpsr_3 >> 0x1d & 1)) {  // (from the original)
        S2_3 = S0_1;
        goto L_55d58c;
    }
    fpsr_3 = fpsr_3 & 0xfffffffu | vfp_cmpf(S2_3, S1_1);  // (from the original)
    if (!(fpsr_3 >> 0x1e & 1) && fpsr_3 >> 0x1f == (fpsr_3 >> 0x1c & 1)) {  // (from the original)
        S2_3 = S1_1;
    }
L_55d58c:;
    arg0->word_8 = u32(std::bit_cast<u32>(S2_3));
    S2_4 = std::bit_cast<float>(arg0->word_c);
    fpsr_4 = fpsr_3 & 0xfffffffu | vfp_cmpf(S2_4, S0_1);  // (from the original)
    if (!(fpsr_4 >> 0x1d & 1)) {  // (from the original)
        arg0->word_c = u32(std::bit_cast<u32>(S0_1));
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return;
    }
    fpsr_5 = fpsr_4 & 0xfffffffu | vfp_cmpf(S2_4, S1_1);  // (from the original)
    if (!(fpsr_5 >> 0x1e & 1) && fpsr_5 >> 0x1f == (fpsr_5 >> 0x1c & 1)) {  // (from the original)
        S2_4 = S1_1;
    }
    arg0->word_c = u32(std::bit_cast<u32>(S2_4));
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
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

inline guest::global<u32, 0x0055d62c> global_0055d62c;  // (from the original)
inline guest::global<u32, 0x0055d630> global_0055d630;  // (from the original)

void f_0055d5c0(gptr<Object_0055d5c0_0> arg0, gptr<Object_0055d5c0_1> arg1, float S0) {
    u32 fpsr = guest::cpu()->fpscr;
    float S4_1 = 0;
    float S1_1 = 0;
    float S0_1 = 0;
    u32 fpsr_1 = 0;
    u32 fpsr_2 = 0;
    float S0_2 = 0;
    float S0_3 = 0;
    float S1_2 = 0;
    float S1_3 = 0;
    S4_1 = S0;
    S1_1 = std::bit_cast<float>(*global_0055d62c);
    S0_1 = std::bit_cast<float>(*global_0055d630);
    fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S4_1, S1_1);  // (from the original)
    if (!(fpsr_1 >> 0x1d & 1)) {  // (from the original)
        S4_1 = S1_1;
        S0_2 = std::bit_cast<float>(arg0->word_0);
        S0_3 = S0_2 + (std::bit_cast<float>(arg1->word_0) - S0_2) * S4_1;
        S1_2 = std::bit_cast<float>(arg0->word_4);
        S1_3 = S1_2 + (std::bit_cast<float>(arg1->word_4) - S1_2) * S4_1;
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_3;
        return;
    }
    fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S4_1, S0_1);  // (from the original)
    if (!(fpsr_2 >> 0x1e & 1) && fpsr_2 >> 0x1f == (fpsr_2 >> 0x1c & 1)) {  // (from the original)
        S4_1 = S0_1;
    }
    S0_2 = std::bit_cast<float>(arg0->word_0);
    S0_3 = S0_2 + (std::bit_cast<float>(arg1->word_0) - S0_2) * S4_1;
    S1_2 = std::bit_cast<float>(arg0->word_4);
    S1_3 = S1_2 + (std::bit_cast<float>(arg1->word_4) - S1_2) * S4_1;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
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

inline guest::global<u32, 0x0055d6ac> global_0055d6ac;  // (from the original)
inline guest::global<u32, 0x0055d6b0> global_0055d6b0;  // (from the original)

void f_0055d634(gptr<Object_0055d634_0> arg0, gptr<Object_0055d634_1> arg1, gptr<Object_0055d634_2> arg2, float S0) {
    u32 fpsr = guest::cpu()->fpscr;
    float S2_1 = 0;
    float S1_1 = 0;
    u32 fpsr_1 = 0;
    u32 fpsr_2 = 0;
    float S1_2 = 0;
    float S1_3 = 0;
    float S1_4 = 0;
    float S1_5 = 0;
    float S1_6 = 0;
    S2_1 = std::bit_cast<float>(*global_0055d6ac);
    S1_1 = std::bit_cast<float>(*global_0055d6b0);
    fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S0, S2_1);  // (from the original)
    if (!(fpsr_1 >> 0x1d & 1)) {  // (from the original)
        S0 = S2_1;
        goto L_55d658;
    }
    fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S0, S1_1);  // (from the original)
    if (!(fpsr_2 >> 0x1e & 1) && fpsr_2 >> 0x1f == (fpsr_2 >> 0x1c & 1)) {  // (from the original)
        S0 = S1_1;
    }
L_55d658:;
    S1_2 = std::bit_cast<float>(arg1->word_c);
    arg0->word_c = u32(std::bit_cast<u32>(S1_2 + (std::bit_cast<float>(arg2->word_c) - S1_2) * S0));
    S1_3 = std::bit_cast<float>(arg1->word_0);
    arg0->word_0 = u32(std::bit_cast<u32>(S1_3 + (std::bit_cast<float>(arg2->word_0) - S1_3) * S0));
    S1_4 = std::bit_cast<float>(arg1->word_4);
    arg0->word_4 = u32(std::bit_cast<u32>(S1_4 + (std::bit_cast<float>(arg2->word_4) - S1_4) * S0));
    S1_5 = std::bit_cast<float>(arg1->word_8);
    S1_6 = S1_5 + (std::bit_cast<float>(arg2->word_8) - S1_5) * S0;
    arg0->word_8 = u32(std::bit_cast<u32>(S1_6));
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1_6;
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
    u32 r0 = arg0.addr();
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r3_2 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r1_5 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r3_1 = u32(arg0->byte_74);
    r0_1 = call_0074e45c(r0, r1, r2, r3_1);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        r3_2 = *gptr<u32>(r0_1 + 0xcu);  // (from the original)
        r0_2 = u32(*gptr<u16>(r0_1 + 0xau)) + 0x10u;  // (from the original)
        r1_2 = r0_1 + r0_2 + (r3_2 - r1);
        r2_1 = r1 + (r1_2 - (r1_2 & ~(r2 - 1u)));
        r1_3 = r3_2 - r2_1;
        if (r1_3 <= 0x10u) {  // (from the original)
            goto L_55df54;
        }
        r1_4 = r1_3 - 0x10u;  // (from the original)
        *gptr<u32>(r0_1 + 0xcu) = u32(r1_4);  // (from the original)
        res_1 = r0_2 + r0_1 + r1_4;
        if (res_1 != 0) {
            *gptr<u32>(res_1) = u32(0u);
            *gptr<u32>(res_1 + 4u) = u32(0u);
            *gptr<u16>(res_1 + 8u) = u16(0u);
            *gptr<u16>(res_1 + 0xau) = u16(0u);  // (from the original)
            *gptr<u32>(res_1 + 0xcu) = u32(0u);  // (from the original)
        }
        *gptr<u32>(res_1 + 0xcu) = u32(r2_1);  // (from the original)
        call_0055dfa4(r0, res_1, r2_1, r3_2);
        r1_1 = guest::cpu()->r[1];
        r0_1 = res_1;
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
L_55df54:;
    res_2 = r1_3 << 0x10 >> 0x10;  // (from the original)
    *gptr<u16>(r0_1 + 0xau) = u16(res_2);  // (from the original)
    if (res_2 != 0) {
        r1_3 = r0_1 + 1u;
        *gptr<u32>(res_2 + 0x10u + r0_1 - 4u) = u32(r1_3);  // (from the original)
    }
    *gptr<u32>(r0_1 + 0xcu) = u32(r2_1);  // (from the original)
    r0_3 = *gptr<u32>(r0 + 0x84u) + r0_1;  // (from the original)
    call_0013bb00(r0_3, r1_3, r2_1, r3_2);
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    *gptr<u32>(r0 + 0x80u) = u32(*gptr<u32>(r0 + 0x80u) - 1u);  // (from the original)
    call_0055dfa4(r0, r0_1, r2_2, r3_3);
    r1_5 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    return r0_1;
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
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r4_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    u32 r1_3 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r3_1 = u32(arg0->byte_50);
    r2_1 = arg0->word_94;
    r4_1 = r0 + 0x88u;  // (from the original)
    r1_1 = r1 + r2_1;
    if (r3_1 != 1u) {
        call_00560688(r4_1, r1_1, r2_1, r3_1);
        r1_2 = guest::cpu()->r[1];
        r0_1 = *gptr<u32>(r4_1 + 8u) + 1u;
        *gptr<u32>(r4_1 + 8u) = u32(r0_1);
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return r0_1;
    }
    call_00138560(r4_1, r1_1, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    r0_2 = *gptr<u32>(r4_1 + 8u) + 1u;
    *gptr<u32>(r4_1 + 8u) = u32(r0_2);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_3;
    return r0_2;
}

}  // namespace d_0055dfa4
GUEST_EXPORT(0x0055dfa4, d_0055dfa4::f_0055dfa4);

// f_0055e9d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0055e9d0 {

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x0055e9d0, u32(u32, u32, u32, u32)> call_0055e9d0;  // (from the original)

u32 f_0055e9d0(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r6 = r0;
    r5 = r0 + 4u;
    r4 = r1;
    call_00135740(r5, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0_1 = *gptr<u32>(r4 + 0x30u);  // (from the original)
    zf_1 = (r0_1 & 2u) == 0;
    if (!zf_1) {
        zf_1 = (r0_1 & 4u) == 0;
    }
    if (zf_1) {
        goto L_55ea28;
    }
    if (u32(*gptr<u8>(r4 + 0x60u)) != 4u) {  // (from the original)
        goto L_55ea28;
    }
    do {
L_55ea04:;
        r0_2 = *gptr<u32>(r4 + 0x14u);  // (from the original)
        if (r0_2 == 0) {
            goto L_55ea38;
        }
        r1_1 = *gptr<u32>(r0_2 + 0x10u);  // (from the original)
        r0_3 = call_0055e9d0(r6, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        guest::preempt();
    } while (r0_3 != 0);
L_55ea28:;
    call_00137e84(r5, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return 0u;
L_55ea38:;
    call_00137e84(r5, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return 1u;
}

}  // namespace d_0055e9d0
GUEST_EXPORT(0x0055e9d0, d_0055e9d0::f_0055e9d0);

// f_0055ed48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0055ed48 {

inline guest::global<u32, 0x00975338> global_00975338;  // (from the original)
inline constexpr guest::Function<0x0012c40c, u32(u32, u32, u32, u32)> call_0012c40c;  // (from the original)
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x00560b0c, u32(u32, u32, u32, u32)> call_00560b0c;  // (from the original)
inline constexpr guest::Function<0x00749bb4, u32(u32, u32, u32, u32)> call_00749bb4;  // (from the original)

u32 f_0055ed48(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r6_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r9_1 = 0;
    u32 r1_2 = 0;
    u32 r8_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 ea_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 zf_1 = 0;
    u32 r4_1 = 0;
    u32 ea_2 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 ea_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_5 = 0;
    u32 r1_6 = 0;
    r6_1 = r0 + 4u;
    r13 = r13 - 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00135740(r6_1, r1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    r1_1 = *gptr<u32>(r1 + 4);
    *gptr<u32>(r13) = u32(*gptr<u32>(r1));
    *gptr<u32>(r13 + 4) = u32(r1_1);
    r9_1 = u32(*gptr<u8>(r1 + 0x78u));  // (from the original)
    r1_2 = *gptr<u32>(r2 + (*gptr<u32>(r2 + 0x14u) << 2));  // (from the original)
    if (r1_2 == 0) {
        r8_1 = 1u;
        goto L_55ed9c;
    }
    r0_1 = *global_00975338;
    guest::cpu()->r[13] = r13;
    r0_2 = call_0012c40c(r0_1, r1_2, r2_1, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    r8_1 = r0_2;
L_55ed9c:;
    r1_3 = r13 + 8u;
    ea_1 = r13 + 8u;
    *gptr<u32>(ea_1) = u32(r2);
    *gptr<u32>(ea_1 + 4) = u32(r0);
    *gptr<u32>(ea_1 + 8) = u32(0u);
    *gptr<u32>(r13 + 0x10u) = u32(*gptr<u32>(r1 + 0x60u));  // (from the original)
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    r0_4 = call_00749bb4(r0_3, r1_3, r2_1, guest::cpu()->r[3]);
    r2_2 = guest::cpu()->r[2];
    zf_1 = r8_1 == 1u;
    r4_1 = r0_4;
    if (!zf_1) {
        r0_4 = *global_00975338;
    }
    if (!zf_1) {
        guest::cpu()->r[13] = r13;
        call_0012c40c(r0_4, r8_1, r2_2, guest::cpu()->r[3]);
        r2_2 = guest::cpu()->r[2];
    }
    ea_2 = r13;
    r0_5 = *gptr<u32>(ea_2);
    r1_4 = *gptr<u32>(ea_2 + 4);
    ea_3 = r4_1 + 0x64u;  // (from the original)
    *gptr<u32>(ea_3) = u32(r0_5);
    *gptr<u32>(ea_3 + 4) = u32(r1_4);
    *gptr<u8>(r4_1 + 0x61u) = u8(r9_1);  // (from the original)
    r0_6 = *gptr<u32>(r1 + 0x5cu);  // (from the original)
    if (r0_6 != 0) {
        r0_7 = r0_6 + 0x10u;  // (from the original)
        if (r4_1 == 0) {
            r1_5 = 0u;
        } else {
            r1_5 = r4_1 + 0x10u;  // (from the original)
        }
        guest::cpu()->r[13] = r13;
        call_00560b0c(r0_7, r1_5, r2_2, guest::cpu()->r[3]);
        r1_4 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
    }
    guest::cpu()->r[13] = r13;
    call_00137e84(r6_1, r1_4, r2_2, guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    return r4_1;
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
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = *gptr<u32>(arg0->word_20 + 0x20u) + 4u;  // (from the original)
    r0_2 = call_0034ba38(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        call_0055f0e4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        r0_3 = *gptr<u32>(*gptr<u32>(r0 + 0x20u) + 0x20u);  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        r0_4 = r0_3 + 4u;
        return call_00137e84(r0_4, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_2;
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

inline guest::global<u32, 0x008bb364> global_008bb364;  // (from the original)
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
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 ea_3 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r3_2 = 0;
    u32 ea_4 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 ea_5 = 0;
    u32 r1_3 = 0;
    u32 ea_6 = 0;
    u32 ea_7 = 0;
    u32 ea_8 = 0;
    u32 r1_4 = 0;
    u32 ea_9 = 0;
    u32 ea_10 = 0;
    u32 r1_5 = 0;
    u32 ea_11 = 0;
    u32 ea_12 = 0;
    u32 r1_6 = 0;
    u32 ea_13 = 0;
    u32 ea_14 = 0;
    u32 r1_7 = 0;
    u32 ea_15 = 0;
    u32 r2_2 = 0;
    u32 ea_16 = 0;
    u32 r1_8 = 0;
    u32 ea_17 = 0;
    u32 ea_18 = 0;
    u32 ea_19 = 0;
    u32 r1_9 = 0;
    u32 ea_20 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_10 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r4_2 = 0;
    u32 r5_1 = 0;
    u32 r12_1 = 0;
    u32 r0_7 = 0;
    u32 r6_1 = 0;
    u32 r4_3 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r3_5 = 0;
    u32 res_1 = 0;
    u32 ea_21 = 0;
    u32 r2_5 = 0;
    u32 ea_22 = 0;
    u32 r0_12 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 r1_11 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 res_2 = 0;
    u32 r3_6 = 0;
    u32 r1_12 = 0;
    u32 r0_15 = 0;
    u32 r2_6 = 0;
    u32 r3_7 = 0;
    u32 r1_13 = 0;
    u32 r4_4 = 0;
    u32 r6_2 = 0;
    u32 r2_7 = 0;
    u32 r3_8 = 0;
    u32 r0_16 = 0;
    u32 r1_14 = 0;
    u32 r2_8 = 0;
    u32 r3_9 = 0;
    u32 r1_15 = 0;
    u32 r1_16 = 0;
    u32 r2_9 = 0;
    u32 r3_10 = 0;
    u32 ea_23 = 0;
    u32 r4_5 = 0;
    u32 r5_2 = 0;
    u32 r6_3 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    u32 r10_1 = 0;
    ea_1 = r13 - 8;
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r14);
    r13 = r13 - 8;
    r1_1 = arg0->word_10;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fd108(0x180u, r1_1, 4u, r3);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    ea_2 = r13;
    r13 = r13 + 8;
    r4_1 = *gptr<u32>(ea_2);
    r14 = *gptr<u32>(ea_2 + 4);
    ea_3 = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea_3) = u32(r4_1);
    *gptr<u32>(ea_3 + 4) = u32(r5);
    *gptr<u32>(ea_3 + 8) = u32(r6);
    *gptr<u32>(ea_3 + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea_3 + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea_3 + 0x14) = u32(r9);  // (from the original)
    *gptr<u32>(ea_3 + 0x18) = u32(r10);  // (from the original)
    *gptr<u32>(ea_3 + 0x1c) = u32(r14);  // (from the original)
    r13 = r13 - 0x30u;  // (from the original)
    r8 = r0;
    *gptr<u32>(r0_1) = u32(0x905b70u);  // (from the original)
    r0_2 = r0_1 + 4u;
    guest::cpu()->r[13] = r13;
    r0_3 = call_0012bfec(r0_2, 0x905b70u, r2_1, r3_1);  // (from the original)
    r3_2 = guest::cpu()->r[3];
    ea_4 = r8 + 0x14u;  // (from the original)
    r1_2 = *gptr<u32>(ea_4);
    r0_4 = r0_3 - 4u;
    r9 = 0u;
    ea_5 = r0_4 + 0x20u;  // (from the original)
    *gptr<u32>(ea_5) = u32(r1_2);
    *gptr<u32>(ea_5 + 4) = u32(r9);
    r1_3 = r0_4 + 0x2cu;  // (from the original)
    ea_6 = r0_4 + 0x28u;  // (from the original)
    *gptr<u32>(ea_6) = u32(r9);
    ea_7 = r0_4 + 0x30u;  // (from the original)
    *gptr<u32>(ea_7) = u32(r1_3);
    *gptr<u32>(ea_7 + 4) = u32(r9);
    ea_8 = r0_4 + 0x2cu;  // (from the original)
    *gptr<u32>(ea_8) = u32(r1_3);
    r1_4 = r0_4 + 0x38u;  // (from the original)
    ea_9 = r0_4 + 0x3cu;  // (from the original)
    *gptr<u32>(ea_9) = u32(r1_4);
    *gptr<u32>(ea_9 + 4) = u32(r9);
    ea_10 = r0_4 + 0x38u;  // (from the original)
    *gptr<u32>(ea_10) = u32(r1_4);
    r1_5 = r0_4 + 0x44u;  // (from the original)
    ea_11 = r0_4 + 0x48u;  // (from the original)
    *gptr<u32>(ea_11) = u32(r1_5);
    *gptr<u32>(ea_11 + 4) = u32(r9);
    ea_12 = r0_4 + 0x44u;  // (from the original)
    *gptr<u32>(ea_12) = u32(r1_5);
    r1_6 = r0_4 + 0x50u;  // (from the original)
    ea_13 = r0_4 + 0x54u;  // (from the original)
    *gptr<u32>(ea_13) = u32(r1_6);
    *gptr<u32>(ea_13 + 4) = u32(r9);
    ea_14 = r0_4 + 0x50u;  // (from the original)
    *gptr<u32>(ea_14) = u32(r1_6);
    r1_7 = r0_4 + 0x5cu;  // (from the original)
    ea_15 = r0_4 + 0x60u;  // (from the original)
    *gptr<u32>(ea_15) = u32(r1_7);
    *gptr<u32>(ea_15 + 4) = u32(r9);
    r2_2 = r0_4 + 0x6cu;  // (from the original)
    ea_16 = r0_4 + 0x5cu;  // (from the original)
    *gptr<u32>(ea_16) = u32(r1_7);
    r1_8 = r0_4 + 0x68u;  // (from the original)
    *gptr<u32>(r2_2) = u32(r1_8);
    *gptr<u32>(r2_2 + 4) = u32(r9);
    ea_17 = r0_4 + 0x68u;  // (from the original)
    *gptr<u32>(ea_17) = u32(r1_8);
    ea_18 = r0_4 + 0x88u;  // (from the original)
    *gptr<u32>(ea_18) = u32(r9);
    ea_19 = r0_4 + 0x84u;  // (from the original)
    *gptr<u32>(ea_19) = u32(r9);
    r1_9 = *gptr<u32>(r8);
    ea_20 = r0_4 + 0x90u;  // (from the original)
    *gptr<u32>(ea_20) = u32(r1_9);
    r0_5 = ea_20 + 8u;
    guest::cpu()->r[13] = r13;
    r0_6 = call_00560930(r0_5, r1_9, r2_2, r3_2);
    r1_10 = *gptr<u32>(r8);
    r2_3 = *gptr<u32>(r8 + 4);
    r3_3 = *gptr<u32>(r8 + 8);
    r4_2 = *gptr<u32>(r8 + 0xc);  // (from the original)
    r5_1 = *gptr<u32>(r8 + 0x10);  // (from the original)
    r12_1 = *gptr<u32>(r8 + 0x14);  // (from the original)
    r0_7 = r0_6 - 0x98u;  // (from the original)
    r6_1 = r0_7 + 0x118u;  // (from the original)
    *gptr<u32>(r6_1) = u32(r1_10);
    *gptr<u32>(r6_1 + 4) = u32(r2_3);
    *gptr<u32>(r6_1 + 8) = u32(r3_3);
    *gptr<u32>(r6_1 + 0xc) = u32(r4_2);  // (from the original)
    *gptr<u32>(r6_1 + 0x10) = u32(r5_1);  // (from the original)
    *gptr<u32>(r6_1 + 0x14) = u32(r12_1);  // (from the original)
    r4_3 = r0_7 + 0x130u;  // (from the original)
    r0_8 = r0_7 + 0x140u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_9 = call_0012c528(r0_8, r1_10, r2_3, r3_3);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r7 = 0x9047f8u;  // (from the original)
    *gptr<u32>(r0_9 + 0x18u) = u32(0x55ff30u);  // (from the original)
    *gptr<u32>(r0_9 + 0x10u) = u32(r4_3);  // (from the original)
    *gptr<u32>(r0_9 + 0x14u) = u32(r7);  // (from the original)
    r0_10 = r0_9 - 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_11 = call_00132174(r0_10, 0x55ff30u, r2_4, r3_4);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    *gptr<u32>(r0_11) = u32(0x9047b0u);  // (from the original)
    *gptr<u32>(r0_11 + 0x3cu) = u32(r9);  // (from the original)
    *gptr<u32>(r0_11 + 0x44u) = u32(r9);  // (from the original)
    *gptr<u32>(r0_11 + 0x48u) = u32(r9);  // (from the original)
    res_1 = r0_11 + 0x2cu;  // (from the original)
    r1 = res_1;
    *gptr<u32>(r0_11 + 0x4cu) = u32(r9);  // (from the original)
    if (res_1 != 0) {
        ea_21 = r1 + 4u;
        *gptr<u32>(ea_21) = u32(r9);
        r2_5 = *global_008bb364;
        r3_5 = *gptr<u32>(0x8bb364u + 4);  // (from the original)
        ea_22 = r1 + 8u;
        *gptr<u32>(ea_22) = u32(r2_5);
        *gptr<u32>(ea_22 + 4) = u32(r3_5);
        r2 = 0x905bf0u;  // (from the original)
        *gptr<u32>(r1) = u32(r2);
    }
    r10 = 0xae53b8u;  // (from the original)
    *gptr<u32>(r0_11 - 0x9cu) = u32(r9);  // (from the original)
    r5 = r0_11 - 0x130u;  // (from the original)
    r4 = 0u;
    r6 = *gptr<u32>(r10);
    if (r6 == 0 || r6 >> 0x1f != (r6 & (r6 ^ r6)) >> 0x1f) {  // (from the original)
        goto L_55fe98;
    }
    do {
L_55fe4c:;
        r0_12 = *gptr<u32>(r10);
        zf_1 = r0_12 == r4;
        cf_1 = r0_12 >= r4;
        if (cf_1 && !zf_1) {
            r1 = *gptr<u32>(r10 + 8u);
        }
        if (!cf_1 || zf_1) {
            r2 = 0u;
        }
        if (cf_1 && !zf_1) {
            r2 = *gptr<u32>(r1 + (r4 << 2));
        }
        *gptr<u32>(r13 + 0xcu) = u32(0x55ff48u);  // (from the original)
        r1_11 = r13 + 8u;
        *gptr<u32>(r13 + 8u) = u32(r7);
        *gptr<u32>(r13) = u32(r9);
        guest::cpu()->r[13] = r13;
        r0_13 = call_002f6e78(0u, r1_11, r2, 1u);
        r2 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
        r1 = r0_13;
        r0_14 = r5 + (r4 << 2);
        r4 = r4 + 1u;
        res_2 = r4 - r6;
        *gptr<u32>(r0_14 + 0x74u) = u32(r1);  // (from the original)
        guest::preempt();
    } while (res_2 >> 0x1f != ((r4 ^ r6) & (r4 ^ res_2)) >> 0x1f);  // (from the original)
L_55fe98:;
    guest::cpu()->r[13] = r13;
    call_0055f900(r5, r1, r2, r3_5);
    r3_6 = guest::cpu()->r[3];
    r1_12 = *gptr<u32>(r8 + 0xcu);  // (from the original)
    r0_15 = r5 + 0x98u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fbb30(r0_15, r1_12, 0x80u, r3_6);  // (from the original)
    r2_6 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    *gptr<u32>(r5 + 0x94u) = u32(r9);  // (from the original)
    *gptr<u8>(r5 + 0x110u) = u8(1u);  // (from the original)
    r1_13 = r5 + 0x94u;  // (from the original)
    r4_4 = r5 + 4u;
    *gptr<u32>(r5 + 0x104u) = u32(r1_13);  // (from the original)
    r6_2 = r5 + 0x98u;  // (from the original)
    *gptr<u32>(r5 + 0xfcu) = u32(r9);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00135740(r4_4, r1_13, r2_6, r3_7);
    r2_7 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_16 = *gptr<u32>(r6_2 + 0x64u);  // (from the original)
    if (r0_16 != 0) {
        guest::cpu()->r[13] = r13;
        call_005418f8(r0_16, r6_2, r2_7, r3_8);
        r1_14 = guest::cpu()->r[1];
        r2_8 = guest::cpu()->r[2];
        r3_9 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        call_00137e84(r4_4, r1_14, r2_8, r3_9);
        r1_15 = guest::cpu()->r[1];
    } else {
        guest::cpu()->r[13] = r13;
        call_0055f4dc(r5, r6_2, 0u, r3_8);
        r1_16 = guest::cpu()->r[1];
        r2_9 = guest::cpu()->r[2];
        r3_10 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        call_00137e84(r4_4, r1_16, r2_9, r3_10);
        r1_15 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x10u;  // (from the original)
    ea_23 = r13;
    r13 = r13 + 0x20;  // (from the original)
    r4_5 = *gptr<u32>(ea_23);
    r5_2 = *gptr<u32>(ea_23 + 4);
    r6_3 = *gptr<u32>(ea_23 + 8);
    r7_1 = *gptr<u32>(ea_23 + 0xc);  // (from the original)
    r8_1 = *gptr<u32>(ea_23 + 0x10);  // (from the original)
    r9_1 = *gptr<u32>(ea_23 + 0x14);  // (from the original)
    r10_1 = *gptr<u32>(ea_23 + 0x18);  // (from the original)
    guest::cpu()->r[1] = r1_15;
    guest::cpu()->r[4] = r4_5;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_3;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[13] = r13;
    return r5;
}

}  // namespace d_0055fcf4
GUEST_EXPORT(0x0055fcf4, d_0055fcf4::f_0055fcf4);
