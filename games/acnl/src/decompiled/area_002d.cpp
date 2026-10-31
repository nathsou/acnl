// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_002d00bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d00bc {

inline constexpr guest::Function<0x001ff92c, u32(u32, u32, u32, u32)> call_001ff92c;  // (from the original)

u32 f_002d00bc(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_001ff92c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_1) = u32(0x8f2a90u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0x8f2a90u;  // (from the original)
    return r0_1;
}

}  // namespace d_002d00bc
GUEST_EXPORT(0x002d00bc, d_002d00bc::f_002d00bc);

// f_002d0998: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d0998 {

struct __attribute__((packed)) Object_002d0998_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_002d0998_0, byte_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002d0920, u32(u32, u32, u32, u32)> call_002d0920;  // (from the original)

u32 f_002d0998(gptr<Object_002d0998_0> arg0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = u32(arg0->byte_0);
    r0_2 = call_002d0920(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 != 0) {
        r0_2 = r0_2 + 0x668u;  // (from the original)
    }
    guest::cpu()->r[13] += 8u;
    return r0_2;
}

}  // namespace d_002d0998
GUEST_EXPORT(0x002d0998, d_002d0998::f_002d0998);

// f_002d0ba8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d0ba8 {

struct __attribute__((packed)) Object_002d0ba8_0 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_002d0ba8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002d0ba8_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x004ecb2c, u32(u32, u32, u32, u32)> call_004ecb2c;  // (from the original)
inline constexpr guest::Function<0x004ecec8, u32(u32, u32, u32, u32)> call_004ecec8;  // (from the original)
inline constexpr guest::Function<0x004f1270, u32(u32, u32, u32, u32)> call_004f1270;  // (from the original)

u32 f_002d0ba8(gptr<Object_002d0ba8_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = arg0->word_8;
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r1_1 = r0 + 0xcu;  // (from the original)
    if (*gptr<u32>(*gptr<u32>(*gptr<u32>(*gptr<u32>(arg0->word_0 - 0xcu) + r1_1) + 8u) + 0x6cu) != 0) {  // (from the original)
        r0_2 = r0 + 0x30u;  // (from the original)
        call_004ecb2c(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
    }
    r0_3 = r0 + 0x10u;  // (from the original)
    call_004ecec8(r0_3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_4 = r0 + 4u;
    guest::cpu()->r[13] += 8u;
    return call_004f1270(r0_4, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_002d0ba8
GUEST_EXPORT(0x002d0ba8, d_002d0ba8::f_002d0ba8);

// f_002d0cf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d0cf8 {

struct __attribute__((packed)) Object_002d0cf8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_002d0cf8_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_002d0cf8_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_002d0cf8_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002d0cf8_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x004ecb80, u32(u32, u32, u32, u32)> call_004ecb80;  // (from the original)
inline constexpr guest::Function<0x004ecf18, u32(u32, u32, u32, u32)> call_004ecf18;  // (from the original)
inline constexpr guest::Function<0x004edd3c, u32(u32, u32, u32, u32)> call_004edd3c;  // (from the original)

u32 f_002d0cf8(gptr<Object_002d0cf8_0> arg0, gptr<Object_002d0cf8_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 r1_4 = 0;
    u32 ea_4 = 0;
    u32 r1_5 = 0;
    u32 r2_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_6 = 0;
    u32 r0_7 = 0;
    r13 = r13 - 8;
    r1_1 = arg1->word_4;
    arg0->word_0 = u32(r1_1);
    r1_2 = *gptr<u32>(r1_1 - 0xcu);  // (from the original)
    r2_1 = arg1->word_8;
    *gptr<u32>(r0 + r1_2) = u32(r2_1);
    r0_1 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_004edd3c(r0_1, r1_2, r2_1, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r0_3 = r0_2 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_004ecf18(r0_3, r1_3, r2_2, guest::cpu()->r[3]);
    ea_1 = r0_4 + 0x18u;  // (from the original)
    *gptr<u32>(ea_1) = u32(0x16u);  // (from the original)
    ea_2 = r0_4 + 0x1cu;  // (from the original)
    *gptr<u8>(ea_2) = u8(1u);
    ea_3 = r0_4 + 0x1du;  // (from the original)
    *gptr<u8>(ea_3) = u8(1u);
    r1_4 = *gptr<u32>(r1);
    ea_4 = r0_4 - 0x10u;  // (from the original)
    *gptr<u32>(ea_4) = u32(r1_4);
    r1_5 = *gptr<u32>(r1_4 - 0xcu);  // (from the original)
    r2_3 = *gptr<u32>(r1 + 0xcu);  // (from the original)
    *gptr<u32>(ea_4 + r1_5) = u32(r2_3);
    r0_5 = ea_4 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_004ecb80(r0_5, r1_5, r2_3, guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    r0_7 = r0_6 - 0x30u;  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    return r0_7;
}

}  // namespace d_002d0cf8
GUEST_EXPORT(0x002d0cf8, d_002d0cf8::f_002d0cf8);

// f_002d13e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d13e0 {

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x0013c1d4, u32(u32, u32, u32, u32)> call_0013c1d4;  // (from the original)
inline constexpr guest::Function<0x002d1b3c, u32(u32, u32, u32, u32)> call_002d1b3c;  // (from the original)

u32 f_002d13e0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 cf_1 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r3_1 = 0;
    u32 r12_1 = 0;
    u32 r12_2 = 0;
    u32 r12_3 = 0;
    u32 r1_5 = 0;
    u32 cf_2 = 0;
    u32 r1_6 = 0;
    u32 r12_4 = 0;
    u32 r1_7 = 0;
    u32 r0_7 = 0;
    u32 r3_2 = 0;
    u32 r3_3 = 0;
    u32 cf_3 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r12_5 = 0;
    u32 r12_6 = 0;
    u32 r12_7 = 0;
    u32 r0_10 = 0;
    u32 cf_4 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_8 = 0;
    u32 cf_5 = 0;
    u32 r1_9 = 0;
    u32 r12_8 = 0;
    u32 r1_10 = 0;
    u32 r1_11 = 0;
    r4 = r0;
    r5 = r1;
    r0_1 = r0 + 0x10u;  // (from the original)
    r6 = r0_1 + (r5 << 4);
    if (r1 < 0x34u) {  // (from the original)
        r0_1 = r6;
    }
    r13 = r13 - 0x38u;  // (from the original)
    r0_2 = *gptr<u32>(r0_1);
    r7 = r2;
    if (r0_2 == 0) {
        goto L_2d1658;
    }
    r0_3 = r4 + 0x10u;  // (from the original)
    if (r5 < 0x34u) {  // (from the original)
        r0_3 = r6;
    }
    *gptr<u32>(r0_3 + 4u) = u32(r7);
    r1_1 = r13;
    r0_4 = *global_0094d080;
    guest::cpu()->r[13] = r13;
    call_0013c1d4(r0_4, r1_1, r7, r3);
    r3 = guest::cpu()->r[3];
    r0_5 = r4 + 0x10u;  // (from the original)
    if (r5 < 0x34u) {  // (from the original)
        r0_5 = r6;
    }
    r2 = 1u;
    *gptr<u32>(r0_5 + 8u) = u32(*gptr<u32>(r13 + 0xcu));  // (from the original)
    r0_6 = *gptr<u32>(r4 + 0x36cu) + 1u;  // (from the original)
    *gptr<u32>(r4 + 0x36cu) = u32(r0_6);  // (from the original)
    if (r0_6 > 3u) {
        goto L_2d1474;
    }
    r0 = r4 + 0x10u;  // (from the original)
    if (r5 < 0x34u) {  // (from the original)
        goto L_2d1784;
    }
L_2d146c:;
    r6 = r0;
    goto L_2d1784;
L_2d1474:;
    r3 = 0u;
    r12 = ~0u;
    r0 = r3;
    do {
L_2d1480:;
        r1_2 = r4 + 0x350u;  // (from the original)
        if (r0 < 3u) {
            r1_2 = r1_2 + (r0 << 3);
        }
        if (!(*gptr<u32>(r1_2 + 4u) <= r3)) {
            cf_1 = r0 >= 3u;
            r1_3 = r4 + 0x350u;  // (from the original)
            if (!cf_1) {
                r1_3 = r1_3 + (r0 << 3);
            }
            r3 = *gptr<u32>(r1_3 + 4u);
            r1_4 = r4 + 0x350u;  // (from the original)
            if (!cf_1) {
                r1_4 = r1_4 + (r0 << 3);
            }
            r12 = *gptr<u32>(r1_4);
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (s32(r0) < s32(3u));
    r1 = r12;
    if (r3 >= 2u) {
        goto L_2d1500;
    } else {
        r0 = 0u;
    }
    do {
L_2d14d0:;
        r3_1 = r4 + 0x350u;  // (from the original)
        if (r0 < 3u) {
            r3_1 = r3_1 + (r0 << 3);
        }
        if (!(*gptr<u32>(r3_1) != r7)) {
            r1 = r7;
            goto L_2d1500;
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (s32(r0) < s32(3u));
L_2d1500:;
    r3 = ~0u;
    r14 = 2u;
    if (r1 + 1u == 0) {
        goto L_2d1680;
    } else {
        r0 = 0u;
    }
L_2d1514:;
    r12_1 = r4 + 0x10u;  // (from the original)
    if (r0 < 0x34u) {  // (from the original)
        r12_1 = r12_1 + (r0 << 4);
    }
    if (u32(*gptr<u8>(r12_1 + 0xcu)) != 1u) {  // (from the original)
        goto L_2d1660;
    }
    r12_2 = r4 + 0x10u;  // (from the original)
    if (r0 < 0x34u) {  // (from the original)
        r12_2 = r12_2 + (r0 << 4);
    }
    if (*gptr<u32>(r12_2 + 4u) != r1) {
        goto L_2d1660;
    }
    r12_3 = r4 + 0x10u;  // (from the original)
    if (r0 < 0x34u) {  // (from the original)
        r12_3 = r12_3 + (r0 << 4);
    }
    r0 = 0u;
    *gptr<u8>(r12_3 + 0xcu) = u8(r14);  // (from the original)
    r12 = r1;
    do {
L_2d155c:;
        r1_5 = r4 + 0x350u;  // (from the original)
        if (r0 < 3u) {
            r1_5 = r1_5 + (r0 << 3);
        }
        if (!(*gptr<u32>(r1_5) != r12)) {
            cf_2 = r0 >= 3u;
            r1_6 = r4 + 0x350u;  // (from the original)
            if (!cf_2) {
                r1_6 = r1_6 + (r0 << 3);
            }
            r12_4 = r4 + 0x350u;  // (from the original)
            if (!cf_2) {
                r12_4 = r12_4 + (r0 << 3);
            }
            *gptr<u32>(r1_6 + 4u) = u32(*gptr<u32>(r1_6 + 4u) - 1u);
            if (*gptr<u32>(r12_4 + 4u) != 0) {
                goto L_2d15c0;
            }
            r1_7 = r4 + 0x350u;  // (from the original)
            if (r0 < 3u) {
                r1_7 = r1_7 + (r0 << 3);
            }
            *gptr<u32>(r1_7) = u32(r3);
            goto L_2d15c0;
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (s32(r0) < s32(3u));
L_2d15c0:;
    r0_7 = r4 + 0x10u;  // (from the original)
    if (r5 < 0x34u) {  // (from the original)
        r0_7 = r6;
    }
    r1 = ~0x80000000u;  // (from the original)
    *gptr<u8>(r0_7 + 0xcu) = u8(r2);  // (from the original)
    r0 = 0u;
    do {
L_2d15d8:;
        r3_2 = r4 + 0x350u;  // (from the original)
        if (r0 < 3u) {
            r3_2 = r3_2 + (r0 << 3);
        }
        if (!(*gptr<u32>(r3_2) != r7)) {
            r1 = r4 + 0x350u;  // (from the original)
            if (r0 < 3u) {
                r1 = r1 + (r0 << 3);
            }
            *gptr<u32>(r1 + 4u) = u32(*gptr<u32>(r1 + 4u) + 1u);
            goto L_2d1654;
        }
        if (!(r1 + 0x80000001u != 0)) {  // (from the original)
            r3_3 = r4 + 0x350u;  // (from the original)
            if (r0 < 3u) {
                r3_3 = r3_3 + (r0 << 3);
            }
            if (*gptr<u32>(r3_3) + 1u == 0) {
                r1 = r0;
            }
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (s32(r0) < s32(3u));
    cf_3 = r1 >= 3u;
    r0_8 = r4 + 0x350u;  // (from the original)
    if (!cf_3) {
        r0_8 = r0_8 + (r1 << 3);
    }
    *gptr<u32>(r0_8) = u32(r7);
    r0_9 = r4 + 0x350u;  // (from the original)
    if (!cf_3) {
        r0_9 = r0_9 + (r1 << 3);
    }
    *gptr<u32>(r0_9 + 4u) = u32(r2);
L_2d1654:;
    r0_2 = 1u;
L_2d1658:;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_2;
L_2d1660:;
    r0 = r0 + 1u;
    if (s32(r0) < s32(0x34u)) {  // (from the original)
        guest::preempt();
        goto L_2d1514;
    }
    r0 = r4 + 0x10u;  // (from the original)
    if (r5 < 0x34u) {  // (from the original)
        goto L_2d17ac;
    }
L_2d1678:;
    r6 = r0;
    goto L_2d17ac;
L_2d1680:;
    r1 = 0u;
    r8 = 0x7fu;  // (from the original)
    r0 = r1;
L_2d168c:;
    r12_5 = r4 + 0x10u;  // (from the original)
    if (r0 < 0x34u) {  // (from the original)
        r12_5 = r12_5 + (r0 << 4);
    }
    if (u32(*gptr<u8>(r12_5 + 0xcu)) != 1u) {  // (from the original)
        goto L_2d16d0;
    }
    r12_6 = r4 + 0x10u;  // (from the original)
    if (r0 < 0x34u) {  // (from the original)
        r12_6 = r12_6 + (r0 << 4);
    }
    if (s32(*gptr<u32>(r12_6 + 8u)) >= s32(r8)) {
        goto L_2d16d0;
    }
    r12_7 = r4 + 0x10u;  // (from the original)
    if (r0 < 0x34u) {  // (from the original)
        r12_7 = r12_7 + (r0 << 4);
    }
    r1 = r0;
    r8 = *gptr<u32>(r12_7 + 8u);
L_2d16d0:;
    r0 = r0 + 1u;
    if (s32(r0) < s32(0x34u)) {  // (from the original)
        guest::preempt();
        goto L_2d168c;
    }
    r0_10 = r4 + 0x10u;  // (from the original)
    if (r5 < 0x34u) {  // (from the original)
        r0_10 = r6;
    }
    if (s32(*gptr<u32>(r0_10 + 8u)) < s32(r8)) {
        goto L_2d17a0;
    }
    cf_4 = r1 >= 0x34u;  // (from the original)
    r0_11 = r4 + 0x10u;  // (from the original)
    if (!cf_4) {
        r0_11 = r0_11 + (r1 << 4);
    }
    *gptr<u8>(r0_11 + 0xcu) = u8(r14);  // (from the original)
    r0_12 = r4 + 0x10u;  // (from the original)
    if (!cf_4) {
        r0_12 = r0_12 + (r1 << 4);
    }
    r12 = *gptr<u32>(r0_12 + 4u);
    r0 = 0u;
    do {
L_2d1714:;
        r1_8 = r4 + 0x350u;  // (from the original)
        if (r0 < 3u) {
            r1_8 = r1_8 + (r0 << 3);
        }
        if (!(*gptr<u32>(r1_8) != r12)) {
            cf_5 = r0 >= 3u;
            r1_9 = r4 + 0x350u;  // (from the original)
            if (!cf_5) {
                r1_9 = r1_9 + (r0 << 3);
            }
            r12_8 = r4 + 0x350u;  // (from the original)
            if (!cf_5) {
                r12_8 = r12_8 + (r0 << 3);
            }
            *gptr<u32>(r1_9 + 4u) = u32(*gptr<u32>(r1_9 + 4u) - 1u);
            if (*gptr<u32>(r12_8 + 4u) != 0) {
                goto L_2d1778;
            }
            r1_10 = r4 + 0x350u;  // (from the original)
            if (r0 < 3u) {
                r1_10 = r1_10 + (r0 << 3);
            }
            *gptr<u32>(r1_10) = u32(r3);
            goto L_2d1778;
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (s32(r0) < s32(3u));
L_2d1778:;
    r0 = r4 + 0x10u;  // (from the original)
    if (r5 >= 0x34u) {  // (from the original)
        guest::preempt();
        goto L_2d146c;
    }
L_2d1784:;
    *gptr<u8>(r6 + 0xcu) = u8(r2);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002d1b3c(r4, r7, r2, r3);
    r1_11 = guest::cpu()->r[1];
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1_11;
    guest::cpu()->r[13] = r13;
    return 1u;
L_2d17a0:;
    r0 = r4 + 0x10u;  // (from the original)
    if (r5 >= 0x34u) {  // (from the original)
        guest::preempt();
        goto L_2d1678;
    }
L_2d17ac:;
    *gptr<u8>(r6 + 0xcu) = u8(r14);  // (from the original)
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 2u;
}

}  // namespace d_002d13e0
GUEST_EXPORT(0x002d13e0, d_002d13e0::f_002d13e0);

// f_002d17c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d17c0 {

struct __attribute__((packed)) Object_002d17c0_0 {
    u8 unknown_0[0x368];  // (not used here)
    u32 word_368;
};
GUEST_OFFSET(Object_002d17c0_0, word_368, 0x368);  // (from the original)


u32 f_002d17c0(gptr<Object_002d17c0_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3_1 = 0;
    u32 cf_1 = 0;
    u32 r3_2 = 0;
    u32 r3_3 = 0;
    u32 r1_1 = 0;
    u32 r3_4 = 0;
    u32 r1_2 = 0;
    r2 = r0;
    guest::cpu()->r[13] -= 4u;
    if (arg0->word_368 >= 0x34u) {  // (from the original)
        guest::cpu()->r[13] += 4u;
        guest::cpu()->r[1] = r1;
        return 0x35u;  // (from the original)
    } else {
        r0 = 0u;
    }
L_2d17d8:;
    r3_1 = r2 + 0x10u;  // (from the original)
    if (r0 < 0x34u) {  // (from the original)
        r3_1 = r3_1 + (r0 << 4);
    }
    if (*gptr<u32>(r3_1) != 0) {
        r0 = r0 + 1u;
        if (r0 < 0x34u) {  // (from the original)
            guest::preempt();
            goto L_2d17d8;
        }
        guest::cpu()->r[13] += 4u;
        guest::cpu()->r[1] = r1;
        return 0x35u;  // (from the original)
    }
    cf_1 = r0 >= 0x34u;  // (from the original)
    r3_2 = r2 + 0x10u;  // (from the original)
    if (!cf_1) {
        r3_2 = r3_2 + (r0 << 4);
    }
    *gptr<u32>(r3_2) = u32(r1);
    r3_3 = r2 + 0x10u;  // (from the original)
    if (!cf_1) {
        r3_3 = r3_3 + (r0 << 4);
    }
    r1_1 = r2 + 0x10u;  // (from the original)
    *gptr<u32>(r3_3 + 4u) = u32(~0u);
    if (!cf_1) {
        r1_1 = r1_1 + (r0 << 4);
    }
    r3_4 = r2 + 0x10u;  // (from the original)
    if (!cf_1) {
        r3_4 = r3_4 + (r0 << 4);
    }
    *gptr<u32>(r1_1 + 8u) = u32(0u);
    *gptr<u8>(r3_4 + 0xcu) = u8(0u);  // (from the original)
    r1_2 = *gptr<u32>(r2 + 0x368u) + 1u;  // (from the original)
    *gptr<u32>(r2 + 0x368u) = u32(r1_2);  // (from the original)
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1_2;
    return r0;
}

}  // namespace d_002d17c0
GUEST_EXPORT(0x002d17c0, d_002d17c0::f_002d17c0);

// f_002d1a70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d1a70 {

inline constexpr guest::Function<0x002d1858, u32(u32, u32, u32, u32)> call_002d1858;  // (from the original)

u32 f_002d1a70(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = r0 + 0x10u;  // (from the original)
    r4_1 = r0_1 + (r1 << 4);
    if (r1 < 0x34u) {  // (from the original)
        r0_1 = r4_1;
    }
    r0_2 = *gptr<u32>(r0_1);
    if (r0_2 != 0) {
        call_002d1858(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        r0_3 = r0 + 0x10u;  // (from the original)
        if (r1 >= 0x34u) {  // (from the original)
            r4_1 = r0_3;
        }
        *gptr<u32>(r4_1) = u32(0u);
        r0_2 = *gptr<u32>(r0 + 0x368u) - 1u;  // (from the original)
        *gptr<u32>(r0 + 0x368u) = u32(r0_2);  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0_2;
}

}  // namespace d_002d1a70
GUEST_EXPORT(0x002d1a70, d_002d1a70::f_002d1a70);

// f_002d1b3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d1b3c {


u32 f_002d1b3c(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r12_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r12_2 = 0;
    u32 r2_1 = 0;
    u32 cf_1 = 0;
    u32 r0_2 = 0;
    r3 = ~0x80000000u;  // (from the original)
    r2 = 0u;
    guest::cpu()->r[13] -= 4u;
    do {
L_2d1b48:;
        r12_1 = r0 + 0x350u;  // (from the original)
        if (r2 < 3u) {
            r12_1 = r12_1 + (r2 << 3);
        }
        if (!(*gptr<u32>(r12_1) != r1)) {
            r0_1 = r0 + 0x350u;  // (from the original)
            if (r2 < 3u) {
                r0_1 = r0_1 + (r2 << 3);
            }
            r1_1 = *gptr<u32>(r0_1 + 4u) + 1u;
            *gptr<u32>(r0_1 + 4u) = u32(r1_1);
            guest::cpu()->r[13] += 4u;
            guest::cpu()->r[1] = r1_1;
            return r0_1;
        }
        if (!(r3 + 0x80000001u != 0)) {  // (from the original)
            r12_2 = r0 + 0x350u;  // (from the original)
            if (r2 < 3u) {
                r12_2 = r12_2 + (r2 << 3);
            }
            if (*gptr<u32>(r12_2) + 1u == 0) {
                r3 = r2;
            }
        }
        r2 = r2 + 1u;
        guest::preempt();
    } while (s32(r2) < s32(3u));
    r2_1 = r0 + 0x350u;  // (from the original)
    cf_1 = r3 >= 3u;
    if (!cf_1) {
        r2_1 = r2_1 + (r3 << 3);
    }
    r0_2 = r0 + 0x350u;  // (from the original)
    *gptr<u32>(r2_1) = u32(r1);
    if (!cf_1) {
        r0_2 = r0_2 + (r3 << 3);
    }
    *gptr<u32>(r0_2 + 4u) = u32(1u);
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = 1u;
    return r0_2;
}

}  // namespace d_002d1b3c
GUEST_EXPORT(0x002d1b3c, d_002d1b3c::f_002d1b3c);

// f_002d1c1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d1c1c {

inline constexpr guest::Function<0x001b0544, u32(u32, u32, u32, u32)> call_001b0544;  // (from the original)

u32 f_002d1c1c(u32 r0, u32 r1, u32 r2, float S0) {
    u32 r5_1 = 0;
    u32 cf_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    float S0_1 = 0;
    float S0_2 = 0;
    u32 r2_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5_1 = r1;
    cf_1 = r1 >= 2u;
    if (!cf_1) {
        r1 = r5_1 + (r5_1 << 2);
    }
    r0_1 = r0 + 0x74u;  // (from the original)
    if (!cf_1) {
        r0_1 = r0_1 + (r1 << 2);
    }
    guest::cpu()->s[0] = S0;
    r0_2 = call_001b0544(r0_1, r2, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    S0_1 = guest::cpu()->s[0];
    if (r2 == 0) {
        S0_2 = std::bit_cast<float>(*gptr<u32>(r0 + 0x1cu));  // (from the original)
        r2_1 = *gptr<u32>(*gptr<u32>(r0) + 0x34u);  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->s[0] = S0_2;
        return guest::call_address<u32>(r2_1, r0, r5_1, r2_1, guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    return r0_2;
}

}  // namespace d_002d1c1c
GUEST_EXPORT(0x002d1c1c, d_002d1c1c::f_002d1c1c);

// f_002d1db0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d1db0 {

inline constexpr guest::Function<0x0020af18, u32(u32, u32, u32, u32)> call_0020af18;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_002d1db0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_1 = 0;
    u32 r0_8 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_0020af18(r0, r1, r2, r3);
    *gptr<u32>(r0_1) = u32(0x8f8dc8u);  // (from the original)
    r0_2 = r0_1 + 0x44u;  // (from the original)
    r0_3 = call_00301d0c(r0_2, 0x131800u, 4u, 2u);  // (from the original)
    r0_4 = r0_3 + 8u;
    r0_5 = call_00301d0c(r0_4, 0x1287a8u, 0x14u, 2u);  // (from the original)
    *gptr<u32>(r0_5 - 0x4cu) = u32(0x8f2c8cu);  // (from the original)
    r0_6 = r0_5 + 0x28u;  // (from the original)
    r0_7 = call_00301d0c(r0_6, 0x12e818u, 0x14u, 2u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_8 = r0_7 - 0x74u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_8;
}

}  // namespace d_002d1db0
GUEST_EXPORT(0x002d1db0, d_002d1db0::f_002d1db0);

// f_002d1f40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d1f40 {

struct __attribute__((packed)) Object_002d1f40_0 {
    u8 unknown_0[0x34];  // (not used here)
    u8 byte_34;
};
GUEST_OFFSET(Object_002d1f40_0, byte_34, 0x34);  // (from the original)

inline guest::global<u32, 0x002d2004> global_002d2004;  // (from the original)
inline guest::global<u32, 0x0094cfec> global_0094cfec;  // (from the original)
inline constexpr guest::Function<0x0020a4cc, u32(u32, u32, u32, u32)> call_0020a4cc;  // (from the original)
inline constexpr guest::Function<0x002d17c0, u32(u32, u32, u32, u32)> call_002d17c0;  // (from the original)

u32 f_002d1f40(gptr<Object_002d1f40_0> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 zf_1 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r0 = u32(arg0->byte_34);
    r5 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    if (r0 != 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    call_0020a4cc(r4, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    r0_1 = *global_0094cfec;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    r0_2 = call_002d17c0(r0_1, r4, r2_1, r3_1);
    *gptr<u32>(r4 + 0x74u) = u32(r0_2);  // (from the original)
    r0 = 0u;
    if (r3 > 0x198u) {  // (from the original)
        *gptr<u32>(r4 + 0x7cu) = u32(0x83bec0u);  // (from the original)
        *gptr<u16>(r4 + 0x7au) = u16(r0);  // (from the original)
        goto L_2d1fb8;
    }
    r1_1 = 0x83bec0u + (r3 << 4);  // (from the original)
    *gptr<u16>(r4 + 0x7au) = u16(r3);  // (from the original)
    *gptr<u32>(r4 + 0x7cu) = u32(r1_1);  // (from the original)
    r1_2 = u32(*gptr<u8>(r1_1 + 0xcu));  // (from the original)
    if (r1_2 == 0) {
        goto L_2d1fb8;
    }
    *gptr<u32>(r4 + 0x80u) = u32(0x83d850u + (r1_2 + (r1_2 << 2) << 4));  // (from the original)
L_2d1fb8:;
    zf_1 = r3 == 0xc9u;  // (from the original)
    if (!zf_1) {
        zf_1 = r3 == 0xcau;  // (from the original)
    }
    if (zf_1) {
        goto L_2d1fec;
    }
    if (r3 == 0xeau) {  // (from the original)
        goto L_2d1fec;
    } else {
        *gptr<u8>(r4 + 0x8du) = u8(r0);  // (from the original)
    }
L_2d1fd0:;
    r1 = u32(*gptr<u8>(r4 + 0x8du));  // (from the original)
    S0 = std::bit_cast<float>(*global_002d2004);
    if (r1 == 0) {
        *gptr<u8>(r4 + 0x78u) = u8(r5);  // (from the original)
    }
    *gptr<u32>(r4 + 0x84u) = u32(r0);  // (from the original)
    *gptr<u32>(r4 + 0x88u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
L_2d1fec:;
    *gptr<u8>(r4 + 0x8du) = u8(1u);  // (from the original)
    guest::preempt();
    goto L_2d1fd0;
}

}  // namespace d_002d1f40
GUEST_EXPORT(0x002d1f40, d_002d1f40::f_002d1f40);

// f_002d23d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d23d4 {

struct __attribute__((packed)) Object_002d23d4_0 {
    u8 unknown_0[0x74];  // (not used here)
    u32 word_74;
    u8 unknown_78[0x14];  // (not used here)
    u8 byte_8c;
};
GUEST_OFFSET(Object_002d23d4_0, word_74, 0x74);  // (from the original)
GUEST_OFFSET(Object_002d23d4_0, byte_8c, 0x8c);  // (from the original)

inline guest::global<u32, 0x0094cd20> global_0094cd20;  // (from the original)
inline guest::global<u32, 0x0094cfec> global_0094cfec;  // (from the original)
inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x002d13e0, u32(u32, u32, u32, u32)> call_002d13e0;  // (from the original)
inline constexpr guest::Function<0x0071d2d4, u32(u32, u32, u32, u32)> call_0071d2d4;  // (from the original)
inline constexpr guest::Function<0x00820578, u32(u32, u32, u32, u32)> call_00820578;  // (from the original)

u32 f_002d23d4(gptr<Object_002d23d4_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r0_1 = 0;
    u32 r5_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r6 = r1;
    r4 = r0;
    arg0->byte_8c = u8(1u);
    r0_1 = arg0->word_74;
    r5_1 = *global_0094cfec;
    r1_1 = r5_1 + 0x10u;  // (from the original)
    if (r0_1 < 0x34u) {  // (from the original)
        r1_1 = r1_1 + (r0_1 << 4);
    }
    r1 = u32(*gptr<u8>(r1_1 + 0xcu));  // (from the original)
    if (r1 != 0) {
        if (r1 == 1u) {
            goto L_2d24a4;
        }
        goto L_2d2458;
    }
    r0_2 = *global_0094cd20;
    r0 = call_0071d2d4(r0_2, r6, 1u, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_2d245c;
    }
    r1_2 = *gptr<u32>(r4 + 0x74u);  // (from the original)
    r0_3 = call_002d13e0(r5_1, r1_2, r6, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_3 == 1u) {
        goto L_2d2460;
    }
L_2d2458:;
    r0 = 0u;
L_2d245c:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_2d2460:;
    r0 = 0u;
    if (u32(*gptr<u8>(r4 + 0x8fu)) != 0) {  // (from the original)
        goto L_2d2494;
    }
    r2 = *gptr<u32>(*global_0094d080 + 0xcbcu);  // (from the original)
    if (r2 >= *gptr<u32>(r4 + 0x74u) << 1) {  // (from the original)
        r1 = 1u;
    } else {
        r1 = 0u;
    }
    *gptr<u8>(r4 + 0x8fu) = u8(r1);  // (from the original)
    if (r1 == 0) {
        guest::preempt();
        goto L_2d245c;
    }
L_2d2494:;
    r0_4 = call_00820578(r4, r6, r2, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return r0_4;
L_2d24a4:;
    if (u32(*gptr<u8>(r4 + 0x8fu)) != 0) {  // (from the original)
        guest::preempt();
        goto L_2d2494;
    }
    r1 = *gptr<u32>(*global_0094d080 + 0xcbcu);  // (from the original)
    if (r1 >= r0_1 << 1) {
        r0_5 = 1u;
    } else {
        r0_5 = 0u;
    }
    *gptr<u8>(r4 + 0x8fu) = u8(r0_5);  // (from the original)
    if (r0_5 != 0) {
        guest::preempt();
        goto L_2d2494;
    }
    guest::preempt();
    goto L_2d2458;
}

}  // namespace d_002d23d4
GUEST_EXPORT(0x002d23d4, d_002d23d4::f_002d23d4);

// f_002d27e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d27e0 {

struct __attribute__((packed)) Object_002d27e0_0 {
    u8 unknown_0[0x34];  // (not used here)
    u8 byte_34;
    u8 unknown_35[0x47];  // (not used here)
    u32 word_7c;
};
GUEST_OFFSET(Object_002d27e0_0, byte_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_002d27e0_0, word_7c, 0x7c);  // (from the original)

inline guest::global<u32, 0x0094cfec> global_0094cfec;  // (from the original)
inline constexpr guest::Function<0x00136cc8, u32(u32, u32, u32, u32)> call_00136cc8;  // (from the original)
inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> call_00136e58;  // (from the original)
inline constexpr guest::Function<0x0020aedc, u32(u32, u32, u32, u32)> call_0020aedc;  // (from the original)
inline constexpr guest::Function<0x002d1a70, u32(u32, u32, u32, u32)> call_002d1a70;  // (from the original)

u32 f_002d27e0(gptr<Object_002d27e0_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 cf = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r2_1 = 0;
    u32 r2_2 = 0;
    u32 r2_3 = 0;
    u32 r0_6 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 res_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0_1 = u32(arg0->byte_34);
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r0_2 = arg0->word_7c;
    r5 = 0u;
    if (r0_2 == 0) {
        goto L_2d28fc;
    }
    r2 = *gptr<u32>(r0_2);
    r3 = r4 + 0x44u;  // (from the original)
    r1 = 0u;
    goto L_2d281c;
L_2d2814:;
    if (cf) {
        goto L_2d2820;
    }
L_2d281c:;
    r0 = r3 + (r1 << 2);
L_2d2820:;
    r0_3 = *gptr<u32>(r0);
    if (r0_3 == 0) {
        r0_4 = ~0u;
    } else {
        r0_4 = *gptr<u32>(r0_3 + 0xb0u);  // (from the original)
    }
    if (r0_4 != r2) {
        goto L_2d295c;
    }
    if (r1 < 2u) {
        r3 = r3 + (r1 << 2);
    }
    if (r3 == 0) {
        goto L_2d2858;
    }
    r0_5 = *gptr<u32>(r3);
    if (r0_5 != 0) {
        call_00136e58(r0_5, 0u, r2, r3);
    }
L_2d2858:;
    r1 = 0u;
    r3 = *gptr<u32>(*gptr<u32>(r4 + 0x7cu) + 4u);  // (from the original)
    r0 = r4 + 0x44u;  // (from the original)
L_2d2868:;
    if (r1 >= 2u) {
        r2_1 = r0;
    } else {
        r2_1 = r0 + (r1 << 2);
    }
    r2_2 = *gptr<u32>(r2_1);
    if (r2_2 == 0) {
        r2_3 = ~0u;
    } else {
        r2_3 = *gptr<u32>(r2_2 + 0xb0u);  // (from the original)
    }
    if (r2_3 != r3) {
        goto L_2d2970;
    }
    if (r1 < 2u) {
        r0 = r0 + (r1 << 2);
    }
    if (r0 == 0) {
        goto L_2d28ac;
    }
    r0_6 = *gptr<u32>(r0);
    if (r0_6 != 0) {
        call_00136e58(r0_6, 0u, r2_3, r3);
    }
L_2d28ac:;
    r3 = *gptr<u32>(r4 + 0x84u);  // (from the original)
    r0 = r4 + 0x44u;  // (from the original)
    r2 = 0u;
L_2d28b8:;
    if (r2 >= 2u) {
        r1_1 = r0;
    } else {
        r1_1 = r0 + (r2 << 2);
    }
    r1_2 = *gptr<u32>(r1_1);
    if (r1_2 == 0) {
        r1_3 = ~0u;
    } else {
        r1_3 = *gptr<u32>(r1_2 + 0xb0u);  // (from the original)
    }
    if (r1_3 != r3) {
        goto L_2d2980;
    }
    if (r2 < 2u) {
        r0 = r0 + (r2 << 2);
    }
    if (r0 == 0) {
        goto L_2d28fc;
    }
    r0_7 = *gptr<u32>(r0);
    if (r0_7 != 0) {
        call_00136e58(r0_7, 0u, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
L_2d28fc:;
    *gptr<u8>(r4 + 0x8du) = u8(r5);  // (from the original)
    *gptr<u8>(r4 + 0x78u) = u8(0u);  // (from the original)
    *gptr<u32>(r4 + 0x80u) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x7cu) = u32(r5);  // (from the original)
    r1_4 = *gptr<u32>(r4 + 0x74u);  // (from the original)
    r0_8 = *global_0094cfec;
    call_002d1a70(r0_8, r1_4, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r4;
    r5 = r4 + 0x44u;  // (from the original)
    *gptr<u32>(r4 + 0x74u) = u32(~0u);  // (from the original)
    r4 = 0u;
    do {
L_2d2934:;
        r0_9 = r5;
        if (r4 < 2u) {
            r0_9 = r5 + (r4 << 2);
        }
        call_00136cc8(r0_9, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(2u));
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0020aedc(r6, r1, r2, r3);
L_2d295c:;
    r1 = r1 + 1u;
    res_1 = r1 - 2u;
    cf = r1 >= 2u;
    if (res_1 >> 0x1f != ((r1 ^ 2u) & (r1 ^ res_1)) >> 0x1f) {  // (from the original)
        r0 = r3;
        guest::preempt();
        goto L_2d2814;
    }
    guest::preempt();
    goto L_2d2858;
L_2d2970:;
    r1 = r1 + 1u;
    if (s32(r1) < s32(2u)) {
        guest::preempt();
        goto L_2d2868;
    }
    guest::preempt();
    goto L_2d28ac;
L_2d2980:;
    r2 = r2 + 1u;
    if (s32(r2) < s32(2u)) {
        guest::preempt();
        goto L_2d28b8;
    }
    guest::preempt();
    goto L_2d28fc;
}

}  // namespace d_002d27e0
GUEST_EXPORT(0x002d27e0, d_002d27e0::f_002d27e0);

// f_002d2a4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d2a4c {

inline guest::global<u32, 0x002d2adc> global_002d2adc;  // (from the original)
inline constexpr guest::Function<0x0020af18, u32(u32, u32, u32, u32)> call_0020af18;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_002d2a4c(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    float S0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    float S0_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    float S0_3 = 0;
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0_1 = call_0020af18(r0, r1, r2, r3);
    S0_1 = guest::cpu()->s[0];
    *gptr<u32>(r0_1) = u32(0x8f8dc8u);  // (from the original)
    r0_2 = r0_1 + 0x44u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    r0_3 = call_00301d0c(r0_2, 0x131800u, 4u, 2u);  // (from the original)
    S0_2 = guest::cpu()->s[0];
    r0_4 = r0_3 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    r0_5 = call_00301d0c(r0_4, 0x1287a8u, 0x14u, 2u);  // (from the original)
    ea_1 = r0_5 + 0x28u;  // (from the original)
    *gptr<u32>(ea_1) = u32(~0u);
    ea_2 = r0_5 - 0x4cu;  // (from the original)
    *gptr<u32>(ea_2) = u32(0x8f2cccu);  // (from the original)
    *gptr<u8>(ea_2 + 0x78u) = u8(0u);  // (from the original)
    *gptr<u8>(ea_2 + 0x79u) = u8(0u);  // (from the original)
    *gptr<u16>(ea_2 + 0x7au) = u16(0u);  // (from the original)
    *gptr<u32>(ea_2 + 0x7cu) = u32(0u);  // (from the original)
    S0_3 = std::bit_cast<float>(*global_002d2adc);
    *gptr<u32>(ea_2 + 0x80u) = u32(0u);  // (from the original)
    *gptr<u32>(ea_2 + 0x84u) = u32(0u);  // (from the original)
    *gptr<u32>(ea_2 + 0x88u) = u32(std::bit_cast<u32>(S0_3));  // (from the original)
    *gptr<u8>(ea_2 + 0x8cu) = u8(0u);  // (from the original)
    *gptr<u8>(ea_2 + 0x8du) = u8(0u);  // (from the original)
    *gptr<u8>(ea_2 + 0x8eu) = u8(0u);  // (from the original)
    *gptr<u8>(ea_2 + 0x8fu) = u8(0u);  // (from the original)
    *gptr<u32>(ea_2 + 4u) = u32(2u);
    r13 = r13 + 8;
    guest::cpu()->r[1] = 0u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    return ea_2;
}

}  // namespace d_002d2a4c
GUEST_EXPORT(0x002d2a4c, d_002d2a4c::f_002d2a4c);

// f_002d2b90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d2b90 {

struct __attribute__((packed)) Object_002d2b90_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_002d2b90_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00136cc8, u32(u32, u32, u32, u32)> call_00136cc8;  // (from the original)
inline constexpr guest::Function<0x0020aedc, u32(u32, u32, u32, u32)> call_0020aedc;  // (from the original)
inline constexpr guest::Function<0x002d27e0, u32(u32, u32, u32, u32)> call_002d27e0;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_002d2b90(gptr<Object_002d2b90_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 cf = 0;
    u32 r0_1 = 0;
    u32 res_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r6 = r0;
    arg0->word_0 = u32(0x8f2cccu);  // (from the original)
    call_002d27e0(r6, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r6 + 0x44u;  // (from the original)
    r4 = 0u;
    *gptr<u32>(r6) = u32(0x8f8dc8u);  // (from the original)
    do {
L_2d2bb8:;
        r0_1 = r5;
        if (r4 < 2u) {
            r0_1 = r5 + (r4 << 2);
        }
        call_00136cc8(r0_1, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(2u));
    call_0020aedc(r6, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r6 + 0x44u;  // (from the original)
    r4 = 0u;
    r0 = r5;
    goto L_2d2bf4;
L_2d2bec:;
    if (cf) {
        goto L_2d2bf8;
    }
L_2d2bf4:;
    r0 = r0 + (r4 << 2);
L_2d2bf8:;
    call_00136cc8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r4 + 1u;
    res_1 = r4 - 2u;
    cf = r4 >= 2u;
    r0 = r5;
    if (res_1 >> 0x1f != ((r4 ^ 2u) & (r4 ^ res_1)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_2d2bec;
    }
    call_002f76ac(r0, 0x137d74u, 4u, 2u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_2 = r5 - 0x44u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_002d2b90
GUEST_EXPORT(0x002d2b90, d_002d2b90::f_002d2b90);

// f_002d2e80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d2e80 {

inline constexpr guest::Function<0x00130ed8, u32(u32, u32, u32, u32)> call_00130ed8;  // (from the original)
inline constexpr guest::Function<0x004c331c, u32(u32, u32, u32, u32)> call_004c331c;  // (from the original)
inline constexpr guest::Function<0x004c7500, u32(u32, u32, u32, u32)> call_004c7500;  // (from the original)

u32 f_002d2e80(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 cf_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 cf_2 = 0;
    u32 r0_3 = 0;
    u32 cf_3 = 0;
    u32 r0_4 = 0;
    u32 res_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    *gptr<u32>(r13 + 0xffffffd8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r5 = r0;
    r7 = r1;
    r6 = r2;
    r9 = r3;
    r8 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    r4 = 0u;
    r10 = ~0u;
    if (r8 + 1u == 0) {
        r8 = 0xfu;  // (from the original)
    }
L_2d2ea8:;
    cf_1 = r4 >= 4u;
    if (!cf_1) {
        r1 = r4 + (r4 << 1);
    }
    r0_1 = r5 + 0x10u;  // (from the original)
    if (!cf_1) {
        r0_1 = r0_1 + (r1 << 2);
    }
    r0_2 = *gptr<u32>(r0_1 + 4u);
    if (r0_2 != r6) {
        goto L_2d2f3c;
    }
    cf_2 = r4 >= 4u;
    if (!cf_2) {
        r1 = r4 + (r4 << 1);
    }
    r0_3 = r5 + 0x10u;  // (from the original)
    if (!cf_2) {
        r0_3 = r0_3 + (r1 << 2);
    }
    r0_2 = *gptr<u32>(r0_3 + 8u);
    if (r0_2 != r7) {
        goto L_2d2f3c;
    }
    cf_3 = r4 >= 4u;
    if (!cf_3) {
        r1 = r4 + (r4 << 1);
    }
    r0_4 = r5 + 0x10u;  // (from the original)
    if (!cf_3) {
        r0_4 = r0_4 + (r1 << 2);
    }
    r0_2 = *gptr<u32>(r0_4);
    res_1 = r0_2 + 0x44u;  // (from the original)
    r1 = res_1;
    if (res_1 == 0) {
        goto L_2d2f3c;
    }
    r0_5 = *gptr<u32>(r1);
    if (r0_5 == 0) {
        r0_2 = r10;
    } else {
        r0_2 = *gptr<u32>(r0_5 + 0xb0u);  // (from the original)
    }
    if (r0_2 != r7) {
        goto L_2d2f3c;
    }
    r0_6 = r13;
    guest::cpu()->r[13] = r13;
    call_004c331c(r0_6, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_7 = *gptr<u32>(r13);
    if (r0_7 != 0) {
        guest::cpu()->r[13] = r13;
        call_004c7500(r0_7, r8, r9, r3_1);
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
    }
    r0_8 = r13;
    guest::cpu()->r[13] = r13;
    r0_2 = call_00130ed8(r0_8, r1_1, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_2d2f3c:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(4u)) {
        guest::preempt();
        goto L_2d2ea8;
    }
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_002d2e80
GUEST_EXPORT(0x002d2e80, d_002d2e80::f_002d2e80);

// f_002d31ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d31ec {

inline constexpr guest::Function<0x002d2d60, u32(u32, u32, u32, u32)> call_002d2d60;  // (from the original)

u32 f_002d31ec() {
    u32 r13 = guest::cpu()->r[13];
    u32 r12_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    r12_1 = r13 + 0x10u;  // (from the original)
    S0_1 = std::bit_cast<float>(*gptr<u32>(r12_1));
    S1_1 = std::bit_cast<float>(*gptr<u32>(r12_1 + 4));
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r13 + 4u) = u32(~0u);
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S1_1));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    call_002d2d60(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return guest::cpu()->r[0];
}

}  // namespace d_002d31ec
GUEST_EXPORT(0x002d31ec, d_002d31ec::f_002d31ec);

// f_002d3218: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d3218 {

inline constexpr guest::Function<0x002d2d60, u32(u32, u32, u32, u32)> call_002d2d60;  // (from the original)

u32 f_002d3218() {
    u32 r13 = guest::cpu()->r[13];
    u32 r12_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    r12_1 = r13 + 0x10u;  // (from the original)
    S0_1 = std::bit_cast<float>(*gptr<u32>(r12_1));
    S1_1 = std::bit_cast<float>(*gptr<u32>(r12_1 + 4));
    S2_1 = std::bit_cast<float>(*gptr<u32>(r12_1 + 8));
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r13 + 4) = u32(std::bit_cast<u32>(S1_1));
    *gptr<u32>(r13 + 8) = u32(std::bit_cast<u32>(S2_1));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    call_002d2d60(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return guest::cpu()->r[0];
}

}  // namespace d_002d3218
GUEST_EXPORT(0x002d3218, d_002d3218::f_002d3218);

// f_002d3404: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d3404 {


u32 f_002d3404(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 cf_1 = 0;
    u32 r4_1 = 0;
    u32 cf_2 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    r12 = 0u;
    guest::cpu()->r[13] -= 8u;
    do {
L_2d340c:;
        cf_1 = r12 >= 4u;
        if (!cf_1) {
            r5 = r12 + (r12 << 1);
        }
        r4_1 = r0 + 0x10u;  // (from the original)
        if (!cf_1) {
            r4_1 = r4_1 + (r5 << 2);
        }
        if (!(*gptr<u32>(r4_1 + 4u) != r3)) {
            cf_2 = r12 >= 4u;
            if (!cf_2) {
                r3 = r12 + (r12 << 1);
            }
            r0_1 = r0 + 0x10u;  // (from the original)
            if (!cf_2) {
                r0_1 = r0_1 + (r3 << 2);
            }
            r0_2 = *gptr<u32>(r0_1);
            r3_1 = *gptr<u32>(*gptr<u32>(r0_2) + 0x10u);  // (from the original)
            guest::cpu()->r[13] += 8u;
            return guest::call_address<u32>(r3_1, r0_2, guest::cpu()->r[1], guest::cpu()->r[2], r3_1);
        }
        r12 = r12 + 1u;
        guest::preempt();
    } while (s32(r12) < s32(4u));
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_002d3404
GUEST_EXPORT(0x002d3404, d_002d3404::f_002d3404);

// f_002d39a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d39a8 {

struct __attribute__((packed)) Object_002d39a8_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_002d39a8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002d39a8_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002d39a8_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_002d39a8_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002d39a8_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_002d39a8_0, word_14, 0x14);  // (from the original)


void f_002d39a8(gptr<Object_002d39a8_0> arg0) {
    arg0->word_0 = u32(0u);
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(0u);
    arg0->word_c = u32(0u);
    arg0->word_10 = u32(0u);
    arg0->word_14 = u32(0u);
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_002d39a8
GUEST_EXPORT(0x002d39a8, d_002d39a8::f_002d39a8);

// f_002d3a14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d3a14 {


u32 f_002d3a14(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 zf_1 = 0;
    r0_1 = r0 + (r1 << 3);
    r1_1 = r0_1 + 0xb00u;  // (from the original)
    r2_1 = u32(*gptr<u16>(r1_1 + 0xc4u));  // (from the original)
    zf_1 = r2_1 == 0;
    if (!zf_1) {
        r0_1 = *gptr<u32>(r0_1 + 0xbc0u);  // (from the original)
        zf_1 = r0_1 == 0;
    }
    if (zf_1) {
        r0_1 = 0u;
    } else {
        *gptr<u16>(r1_1 + 0xc4u) = u16(r2_1 - 1u);  // (from the original)
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_002d3a14
GUEST_EXPORT(0x002d3a14, d_002d3a14::f_002d3a14);

// f_002d3f18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d3f18 {

struct __attribute__((packed)) Object_002d3f18_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0xba0];  // (not used here)
    u32 word_bb8;
    u32 word_bbc;
    u8 unknown_bc0[0x20];  // (not used here)
    u16 half_be0;
    u8 byte_be2;
    u8 byte_be3;
    u8 byte_be4;
};
GUEST_OFFSET(Object_002d3f18_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002d3f18_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_002d3f18_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_002d3f18_0, word_bb8, 0xbb8);  // (from the original)
GUEST_OFFSET(Object_002d3f18_0, word_bbc, 0xbbc);  // (from the original)
GUEST_OFFSET(Object_002d3f18_0, half_be0, 0xbe0);  // (from the original)
GUEST_OFFSET(Object_002d3f18_0, byte_be2, 0xbe2);  // (from the original)
GUEST_OFFSET(Object_002d3f18_0, byte_be3, 0xbe3);  // (from the original)
GUEST_OFFSET(Object_002d3f18_0, byte_be4, 0xbe4);  // (from the original)


void f_002d3f18(gptr<Object_002d3f18_0> arg0) {
    arg0->word_bb8 = u32(0u);
    arg0->word_bbc = u32(0u);
    arg0->half_be0 = u16(1u);
    arg0->word_c = u32(0u);
    arg0->word_10 = u32(0u);
    arg0->word_14 = u32(0u);
    arg0->byte_be2 = u8(0u);
    arg0->byte_be3 = u8(0u);
    arg0->byte_be4 = u8(0u);
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_002d3f18
GUEST_EXPORT(0x002d3f18, d_002d3f18::f_002d3f18);

// f_002d3f6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d3f6c {

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_002d3f6c(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    r0_1 = r0 + 0x18u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r0_2 = call_00301d0c(r0_1, 0x6efbc4u, 0x2e8u, 4u);  // (from the original)
    r0_3 = r0_2 - 0x18u;  // (from the original)
    *gptr<u32>(r0_3 + 0xbb8u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_3 + 0xbbcu) = u32(0u);  // (from the original)
    *gptr<u16>(0xbe0u + r0_3) = u16(1u);  // (from the original)
    *gptr<u32>(r0_3 + 0xcu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_3 + 0x10u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_3 + 0x14u) = u32(0u);  // (from the original)
    *gptr<u8>(r0_3 + 0xbe2u) = u8(0u);  // (from the original)
    *gptr<u8>(r0_3 + 0xbe3u) = u8(0u);  // (from the original)
    *gptr<u8>(r0_3 + 0xbe4u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0u;
    return r0_3;
}

}  // namespace d_002d3f6c
GUEST_EXPORT(0x002d3f6c, d_002d3f6c::f_002d3f6c);

// f_002d3fc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d3fc0 {

inline constexpr guest::Function<0x00335634, u32(u32, u32, u32, u32)> call_00335634;  // (from the original)

u32 f_002d3fc0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r4_1 = 0;
    u32 r0_3 = 0;
    r13 = r13 - 0x18;  // (from the original)
    r5_1 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00335634(r0, r1, r2, r3);
    *gptr<u32>(0x7dc8u + r0) = u32(r3);  // (from the original)
    r2_1 = r0 + 0x7dd2u;  // (from the original)
    *gptr<u32>(r0 + 0x7dccu) = u32(*gptr<u32>(r2));  // (from the original)
    r0_1 = r0 + 0x7dd6u;  // (from the original)
    r1_1 = u32(*gptr<u8>(r0_1)) & ~2u | 1u;
    *gptr<u8>(r0_1) = u8(r1_1);
    if (r5_1 == 0) {
        r1_2 = r1_1 & ~4u;
    } else {
        r1_2 = r1_1 | 4u;
    }
    *gptr<u8>(r0_1) = u8(r1_2);
    r0_2 = r0 + 0x7dd3u;  // (from the original)
    *gptr<u8>(r2_1) = u8(u32(*gptr<u8>(r2_1)) | 0xfu);  // (from the original)
    r1_3 = r0 + 0x7dd4u;  // (from the original)
    *gptr<u8>(r0_2) = u8(u32(*gptr<u8>(r0_2)) | 0xfu);  // (from the original)
    r4_1 = r0 + 0x7dd5u;  // (from the original)
    *gptr<u8>(r1_3) = u8(u32(*gptr<u8>(r1_3)) | 0xfu);  // (from the original)
    r0_3 = u32(*gptr<u8>(r4_1)) | 0xfu;  // (from the original)
    *gptr<u8>(r4_1) = u8(r0_3);
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_002d3fc0
GUEST_EXPORT(0x002d3fc0, d_002d3fc0::f_002d3fc0);

// f_002d406c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d406c {

inline constexpr guest::Function<0x00335634, u32(u32, u32, u32, u32)> call_00335634;  // (from the original)

u32 f_002d406c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r4_1 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    call_00335634(r0, r1, r2, r3);
    r2_1 = r0 + 0x7dd2u;  // (from the original)
    *gptr<u32>(0x7dc8u + r0) = u32(r3);  // (from the original)
    *gptr<u32>(r0 + 0x7dccu) = u32(*gptr<u32>(r2));  // (from the original)
    r0_1 = r0 + 0x7dd6u;  // (from the original)
    *gptr<u8>(r0_1) = u8(u32(*gptr<u8>(r0_1)) & ~2u);
    r0_2 = r0 + 0x7dd3u;  // (from the original)
    *gptr<u8>(r2_1) = u8(u32(*gptr<u8>(r2_1)) | 0xau);  // (from the original)
    r1_1 = r0 + 0x7dd4u;  // (from the original)
    *gptr<u8>(r0_2) = u8(u32(*gptr<u8>(r0_2)) | 0xau);  // (from the original)
    r4_1 = r0 + 0x7dd5u;  // (from the original)
    *gptr<u8>(r1_1) = u8(u32(*gptr<u8>(r1_1)) | 0xau);  // (from the original)
    r0_3 = u32(*gptr<u8>(r4_1)) | 0xau;  // (from the original)
    *gptr<u8>(r4_1) = u8(r0_3);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_3;
}

}  // namespace d_002d406c
GUEST_EXPORT(0x002d406c, d_002d406c::f_002d406c);

// f_002d4100: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d4100 {

inline constexpr guest::Function<0x00335640, u32(u32, u32, u32, u32)> call_00335640;  // (from the original)

u32 f_002d4100(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r12_1 = 0;
    u32 r5_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    call_00335640(r0, r1, r2, r3);
    *gptr<u32>(0x7dc8u + r0) = u32(0u);  // (from the original)
    r0_1 = r0 + 0x7dccu;  // (from the original)
    *gptr<u16>(r0_1) = u16(0u);
    *gptr<u8>(r0_1 + 2u) = u8(0u);
    *gptr<u8>(r0_1 + 3u) = u8(0u);
    *gptr<u16>(0x7dd0u + r0) = u16(0u);  // (from the original)
    r12_1 = 0x7dd0u + 4u;  // (from the original)
    *gptr<u8>(0x7dd0u + 2u + r0) = u8(0u);  // (from the original)
    r5_1 = 0x7dd0u + 5u;  // (from the original)
    *gptr<u8>((0x7dd0u | u32(s32(0x7dd0u) >> 0xd)) + r0) = u8(0u);  // (from the original)
    r0_2 = 0x7dd0u + 6u;  // (from the original)
    *gptr<u8>(r12_1 + r0) = u8(0u);
    *gptr<u8>(r5_1 + r0) = u8(0u);
    *gptr<u8>(r0_2 + r0) = u8(0u);
    r0_3 = r0_2 | u32(s32(r0_2) >> 0xc);  // (from the original)
    *gptr<u8>(r0_3 + r0) = u8(4u);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = 4u;
    return r0_3;
}

}  // namespace d_002d4100
GUEST_EXPORT(0x002d4100, d_002d4100::f_002d4100);

// f_002d4174: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d4174 {


u32 f_002d4174(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0_1 = r0 + r1 + 0x7dd2u;  // (from the original)
    r1_1 = u32(*gptr<u8>(r0_1)) & ~0xcu;  // (from the original)
    *gptr<u8>(r0_1) = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_002d4174
GUEST_EXPORT(0x002d4174, d_002d4174::f_002d4174);

// f_002d4198: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d4198 {

struct __attribute__((packed)) Object_002d4198_0 {
    u8 unknown_0[0x7dd7];  // (not used here)
    u8 byte_7dd7;
};
GUEST_OFFSET(Object_002d4198_0, byte_7dd7, 0x7dd7);  // (from the original)


u32 f_002d4198(gptr<Object_002d4198_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    r3_1 = u32(arg0->byte_7dd7);
    r0_1 = r0 + r1 + 0x7dd2u;  // (from the original)
    zf_1 = r3_1 == r1;
    if (zf_1) {
        r3_1 = 4u;
    }
    if (zf_1) {
        arg0->byte_7dd7 = u8(r3_1);
    }
    *gptr<u8>(r0_1) = u8(0u);
    guest::cpu()->r[1] = 0u;
    return r0_1;
}

}  // namespace d_002d4198
GUEST_EXPORT(0x002d4198, d_002d4198::f_002d4198);

// f_002d41c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d41c8 {

inline constexpr guest::Function<0x00335640, u32(u32, u32, u32, u32)> call_00335640;  // (from the original)

u32 f_002d41c8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r3_1 = 0;
    u32 r12_1 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 8u;
    call_00335640(r0, r1, r2, r3);
    *gptr<u32>(0x7dc8u + r0) = u32(0u);  // (from the original)
    r1_1 = r0 + 0x7dccu;  // (from the original)
    *gptr<u16>(r1_1) = u16(0u);
    *gptr<u8>(r1_1 + 2u) = u8(0u);
    *gptr<u8>(r1_1 + 3u) = u8(0u);
    *gptr<u16>(0x7dd0u + r0) = u16(0u);  // (from the original)
    r1_2 = 0x7dd0u + 2u;  // (from the original)
    r3_1 = r1_2 + 2u;
    *gptr<u8>(r1_2 + r0) = u8(0u);
    r12_1 = r1_2 + 3u;
    *gptr<u8>((r1_2 | u32(s32(r1_2) >> 0xd)) + r0) = u8(0u);  // (from the original)
    r1_3 = r1_2 + 4u;
    *gptr<u8>(r3_1 + r0) = u8(0u);
    *gptr<u8>(r12_1 + r0) = u8(0u);
    *gptr<u8>(r1_3 + r0) = u8(0u);
    *gptr<u8>(r0 + 0x7dd7u) = u8(4u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_3;
    return 4u;
}

}  // namespace d_002d41c8
GUEST_EXPORT(0x002d41c8, d_002d41c8::f_002d41c8);

// f_002d453c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d453c {

struct __attribute__((packed)) Object_002d453c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Object_002d453c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002d453c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_002d453c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002d453c_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_002d453c_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_002d453c_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_002d453c_0, word_1c, 0x1c);  // (from the original)

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)

u32 f_002d453c(gptr<Object_002d453c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(0u);
    arg0->word_1c = u32(0u);
    arg0->word_c = u32(0u);
    arg0->word_10 = u32(0u);
    arg0->word_14 = u32(0u);
    r2_1 = 0x7ecu + 2u;  // (from the original)
    arg0->word_18 = u32(0u);
    *gptr<u16>(0x7ecu + r0) = u16(0u);  // (from the original)
    *gptr<u16>(r2_1 + r0) = u16(0u);
    *gptr<u16>(0x7f0u + r0) = u16(0u);  // (from the original)
    *gptr<u16>(r2_1 + 4u + r0) = u16(0u);
    r0_1 = r0 + 0x6cu;  // (from the original)
    return call_002f825c(r0_1, 0x780u, r2_1, 0x7f0u);  // (from the original)
}

}  // namespace d_002d453c
GUEST_EXPORT(0x002d453c, d_002d453c::f_002d453c);

// f_002d4594: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d4594 {

struct __attribute__((packed)) Object_002d4594_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Object_002d4594_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002d4594_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_002d4594_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002d4594_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_002d4594_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_002d4594_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_002d4594_0, word_1c, 0x1c);  // (from the original)

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)

u32 f_002d4594(gptr<Object_002d4594_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(0u);
    arg0->word_1c = u32(0u);
    arg0->word_c = u32(0u);
    arg0->word_10 = u32(0u);
    arg0->word_14 = u32(0u);
    arg0->word_18 = u32(0u);
    r2_1 = 0x7ecu + 2u;  // (from the original)
    *gptr<u16>(0x7ecu + r0) = u16(0u);  // (from the original)
    *gptr<u16>(r2_1 + r0) = u16(0u);
    *gptr<u16>(0x7f0u + r0) = u16(0u);  // (from the original)
    *gptr<u16>(0x7ecu + 6u + r0) = u16(0u);  // (from the original)
    r0_1 = r0 + 0x6cu;  // (from the original)
    call_002f825c(r0_1, 0x780u, r2_1, 0x7f0u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0;
}

}  // namespace d_002d4594
GUEST_EXPORT(0x002d4594, d_002d4594::f_002d4594);

// f_002d4a38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d4a38 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002fcb10, u32(u32, u32, u32, u32)> call_002fcb10;  // (from the original)
inline constexpr guest::Function<0x003232c0, u32(u32, u32, u32, u32)> call_003232c0;  // (from the original)
inline constexpr guest::Function<0x006ba118, u32(u32, u32, u32, u32)> call_006ba118;  // (from the original)
inline constexpr guest::Function<0x00768174, u32(u32, u32, u32, u32)> call_00768174;  // (from the original)
inline constexpr guest::Function<0x0076aff4, u32(u32, u32, u32, u32)> call_0076aff4;  // (from the original)

u32 f_002d4a38(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r6_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_1 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_5 = 0;
    u32 r2_2 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_6 = 0;
    u32 r1_7 = 0;
    u32 r0_13 = 0;
    u32 r2_3 = 0;
    u32 r1_8 = 0;
    u32 r0_14 = 0;
    u32 r1_9 = 0;
    u32 r0_15 = 0;
    u32 r2_4 = 0;
    u32 r1_10 = 0;
    u32 r0_16 = 0;
    u32 r1_11 = 0;
    u32 r0_17 = 0;
    r5 = r0;
    r13 = r13 - 0x28u;  // (from the original)
    r7 = r1;
    r0_1 = r0 + 0xa0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_003232c0(r0_1, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r8 = 0x95bfdcu;  // (from the original)
    r4 = 0u;
L_2d4a58:;
    if (r4 >= 0x28u) {  // (from the original)
        r6_1 = 0x95bfdcu;  // (from the original)
        goto L_2d4aa0;
    }
    r6_1 = r5 + (r4 << 2);
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fcaf4(r6_1, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_2 != 0) {
        goto L_2d4aa0;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fcb10(r6_1, r1_1, r2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_3 != 0) {
        goto L_2d4aa0;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_00768174(r6_1, r1_2, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    if (r0_4 == 0) {
        r6_1 = r8;
    }
L_2d4aa0:;
    r0_5 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_5, r6_1, r2, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r0_6 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_7 = call_002fcaf4(r0_6, r1_3, r2_1, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_7 != 0) {
        goto L_2d4b34;
    }
    r1_4 = r13 + 8u;
    r0_8 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0076aff4(r0_8, r1_4, r7, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r13 + 0xcu;  // (from the original)
    if (r4 >= 0x28u) {  // (from the original)
        goto L_2d4b2c;
    }
    r0_9 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_9, r1, r2, guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r0_10 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_11 = call_006ba118(r0_10, r1_5, r2_2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_11 != 0) {
        r0_12 = r5 + (r4 << 2);
        r1_6 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r0_12, r1_6, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        goto L_2d4b2c;
    }
L_2d4b2c:;
L_2d4b34:;
    r4 = r4 + 1u;
    if (r4 < 0x28u) {  // (from the original)
        guest::preempt();
        goto L_2d4a58;
    }
    r1_7 = r5 + 0xf0u;  // (from the original)
    r0_13 = r13;
    guest::cpu()->r[13] = r13;
    call_0076aff4(r0_13, r1_7, r7, guest::cpu()->r[3]);
    r2_3 = guest::cpu()->r[2];
    r1_8 = r13;
    r0_14 = r5 + 0xf0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_14, r1_8, r2_3, guest::cpu()->r[3]);
    r1_9 = r5 + 0xf4u;  // (from the original)
    r0_15 = r13;
    guest::cpu()->r[13] = r13;
    call_0076aff4(r0_15, r1_9, r7, guest::cpu()->r[3]);
    r2_4 = guest::cpu()->r[2];
    r1_10 = r13;
    r0_16 = r5 + 0xf4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_16, r1_10, r2_4, guest::cpu()->r[3]);
    r1_11 = guest::cpu()->r[1];
    r0_17 = r13;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_11;
    guest::cpu()->r[13] = r13;
    return r0_17;
}

}  // namespace d_002d4a38
GUEST_EXPORT(0x002d4a38, d_002d4a38::f_002d4a38);

// f_002d4bb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d4bb4 {


u32 f_002d4bb4(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    if (r2 >> 0x1f != (r2 & (r2 ^ r2)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0_1 = r0 + (r1 << 1);
    r1_1 = u32(s32(s16(*gptr<u16>(r0_1))));
    if (r1_1 != r2) {
        *gptr<u16>(r0_1) = u16(r2);
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_002d4bb4
GUEST_EXPORT(0x002d4bb4, d_002d4bb4::f_002d4bb4);

// f_002d4bd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d4bd0 {

struct __attribute__((packed)) Object_002d4bd0_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u16 half_18;
};
GUEST_OFFSET(Object_002d4bd0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002d4bd0_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002d4bd0_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_002d4bd0_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002d4bd0_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_002d4bd0_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_002d4bd0_0, half_18, 0x18);  // (from the original)

inline constexpr guest::Function<0x002d4bf4, u32(u32, u32, u32, u32)> call_002d4bf4;  // (from the original)

u32 f_002d4bd0(gptr<Object_002d4bd0_0> arg0) {
    u32 r0 = arg0.addr();
    arg0->word_0 = u32(0u);
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(0u);
    arg0->word_c = u32(0u);
    arg0->word_10 = u32(0u);
    arg0->word_14 = u32(0u);
    arg0->half_18 = u16(0u);
    return call_002d4bf4(r0, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_002d4bd0
GUEST_EXPORT(0x002d4bd0, d_002d4bd0::f_002d4bd0);

// f_002d4d00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d4d00 {

inline constexpr guest::Function<0x002d4bf4, u32(u32, u32, u32, u32)> call_002d4bf4;  // (from the original)

u32 f_002d4d00() {
    return call_002d4bf4(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_002d4d00
GUEST_EXPORT(0x002d4d00, d_002d4d00::f_002d4d00);

// f_002d4d04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d4d04 {

inline constexpr guest::Function<0x002d4bf4, u32(u32, u32, u32, u32)> call_002d4bf4;  // (from the original)

u32 f_002d4d04(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    r1_1 = r0 + (r1 << 1);
    r2_1 = u32(*gptr<u16>(r1_1)) + 1u;
    *gptr<u16>(r1_1) = u16(r2_1);
    return call_002d4bf4(r0, r1_1, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_002d4d04
GUEST_EXPORT(0x002d4d04, d_002d4d04::f_002d4d04);

// f_002d4d18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d4d18 {

inline constexpr guest::Function<0x002d4bf4, u32(u32, u32, u32, u32)> call_002d4bf4;  // (from the original)

u32 f_002d4d18(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    r1_1 = r0 + (r1 << 1);
    r2_1 = u32(s32(s16(*gptr<u16>(r1_1))));
    if (r2_1 != 0 && r2_1 >> 0x1f == (r2_1 & (r2_1 ^ r2_1)) >> 0x1f) {  // (from the original)
        r2_1 = r2_1 - 1u;
        *gptr<u16>(r1_1) = u16(r2_1);
    }
    return call_002d4bf4(r0, r1_1, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_002d4d18
GUEST_EXPORT(0x002d4d18, d_002d4d18::f_002d4d18);

// f_002d4d30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d4d30 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)

u32 f_002d4d30(u32 r0) {
    u32 r0_1 = 0;
    r0_1 = r0 + 0x2f2u;  // (from the original)
    return call_002fc8e8(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_002d4d30
GUEST_EXPORT(0x002d4d30, d_002d4d30::f_002d4d30);

// f_002d4d3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d4d3c {

inline constexpr guest::Function<0x002d4bb4, u32(u32, u32, u32, u32)> call_002d4bb4;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> call_005361a8;  // (from the original)
inline constexpr guest::Function<0x00752bd0, u32(u32, u32, u32, u32)> call_00752bd0;  // (from the original)
inline constexpr guest::Function<0x00768524, u32(u32, u32, u32, u32)> call_00768524;  // (from the original)

u32 f_002d4d3c(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 zf_1 = 0;
    u32 r2_2 = 0;
    u32 r1_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_6 = 0;
    u32 r0_12 = 0;
    u32 r1_7 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_8 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 zf_2 = 0;
    u32 r2_4 = 0;
    u32 r1_9 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r1_10 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r1_11 = 0;
    u32 r2_5 = 0;
    u32 r0_23 = 0;
    u32 r1_12 = 0;
    r13 = r13 - 0x30u;  // (from the original)
    r7 = r0;
    r6 = 0u;
    r8 = r13;
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u32>(r13 + 8u) = u32(0u);
    *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(0u);  // (from the original)
L_2d4d68:;
    r4 = 0u;
    r5 = r7 + (r6 + (r6 << 2) << 3);
L_2d4d74:;
    r1_1 = r5 + (r4 << 2) + 0x62u;  // (from the original)
    r0_1 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_1, r1_1, r2, r3);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fcaf4(r0_2, r1_2, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_3 != 0) {
        goto L_2d4e14;
    }
    r0_4 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_005361a8(r0_4, r1_3, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_5 == 0) {
        goto L_2d4e14;
    }
    r0_6 = u32(*gptr<u8>(r0_5 + 0x1bu)) << 0x1a >> 0x1e;  // (from the original)
    if (r0_6 >= 4u) {
        goto L_2d4e14;
    }
    zf_1 = r0_6 == 0;
    if (!zf_1) {
        zf_1 = r7 + 0x22u == 0;  // (from the original)
    }
    if (zf_1) {
        goto L_2d4e14;
    }
    r2_2 = r6 + 4u;
    r1_4 = r4 + 3u;
    r0_7 = r7 + 0x22u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_00752bd0(r0_7, r1_4, r2_2, 0u);
    r1_5 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_8 == 0) {
        goto L_2d4e14;
    }
    r0_9 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_00768524(r0_9, r1_5, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_10 >= 0xau) {  // (from the original)
        goto L_2d4e14;
    }
    r0_11 = r8 + (r0_10 << 1);
    *gptr<u16>(r0_11) = u16(u32(*gptr<u16>(r0_11)) + 1u);
L_2d4e14:;
    r4 = r4 + 1u;
    if (r4 < 0xau) {  // (from the original)
        guest::preempt();
        goto L_2d4d74;
    }
    r6 = r6 + 1u;
    if (r6 < 0xau) {  // (from the original)
        guest::preempt();
        goto L_2d4d68;
    }
    r6 = 0u;
L_2d4e38:;
    r4 = 0u;
    r5 = r7 + (r6 << 5);
L_2d4e40:;
    r1_6 = r5 + (r4 << 2) + 0x1f2u;  // (from the original)
    r0_12 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_12, r1_6, r2, r3);
    r1_7 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_13 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_14 = call_002fcaf4(r0_13, r1_7, r2_3, r3_2);
    r1_8 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_14 != 0) {
        goto L_2d4ee4;
    }
    r0_15 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_16 = call_005361a8(r0_15, r1_8, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_16 == 0) {
        goto L_2d4ee4;
    }
    r0_17 = u32(*gptr<u8>(r0_16 + 0x1bu)) << 0x1a >> 0x1e;  // (from the original)
    if (r0_17 >= 4u) {
        goto L_2d4ee4;
    }
    zf_2 = r0_17 == 0;
    if (!zf_2) {
        zf_2 = r7 + 0x22u == 0;  // (from the original)
    }
    if (zf_2) {
        goto L_2d4ee4;
    }
    r2_4 = r6 + 5u;
    r1_9 = r4 + 4u;
    r0_18 = r7 + 0x22u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_19 = call_00752bd0(r0_18, r1_9, r2_4, 1u);
    r1_10 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_19 == 0) {
        goto L_2d4ee4;
    }
    r0_20 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_21 = call_00768524(r0_20, r1_10, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_21 >= 0xau) {  // (from the original)
        goto L_2d4ee4;
    }
    r0_22 = r8 + (r0_21 << 1);
    *gptr<u16>(r0_22) = u16(u32(*gptr<u16>(r0_22)) + 1u);
L_2d4ee4:;
    r4 = r4 + 1u;
    if (r4 < 8u) {
        guest::preempt();
        goto L_2d4e40;
    }
    r6 = r6 + 1u;
    if (r6 < 8u) {
        guest::preempt();
        goto L_2d4e38;
    }
    r4 = 0u;
    do {
L_2d4f08:;
        r1_11 = r4 & 0xffu;  // (from the original)
        r2_5 = u32(s32(s16(*gptr<u16>(r8 + (r4 << 1)))));
        guest::cpu()->r[13] = r13;
        r0_23 = call_002d4bb4(r7, r1_11, r2_5, r3);
        r1_12 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(0xau));  // (from the original)
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_12;
    guest::cpu()->r[13] = r13;
    return r0_23;
}

}  // namespace d_002d4d3c
GUEST_EXPORT(0x002d4d3c, d_002d4d3c::f_002d4d3c);

// f_002d4f3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d4f3c {

inline constexpr guest::Function<0x002d4bd0, u32(u32, u32, u32, u32)> call_002d4bd0;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x00582aa4, u32(u32, u32, u32, u32)> call_00582aa4;  // (from the original)

u32 f_002d4f3c(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r3_2 = 0;
    u32 r0_6 = 0;
    u32 r3_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r3_4 = 0;
    u32 r0_9 = 0;
    u32 r3_5 = 0;
    u32 r0_10 = 0;
    u32 r3_6 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_2 = 0;
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r7 = r0;
    guest::cpu()->r[13] = r13;
    call_002d4bd0(r0, r1, guest::cpu()->r[2], r3);
    r1_1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    *gptr<u8>(r7 + 0x1eu) = u8(1u);  // (from the original)
    r8 = 0u;
    r0_1 = r7 + 0x22u;  // (from the original)
    *gptr<u8>(r7 + 0x1fu) = u8(r8);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00582aa4(r0_1, r1_1, guest::cpu()->r[2], r3_1);
    r3 = guest::cpu()->r[3];
    r6 = 0u;
L_2d4f64:;
    r4 = 0u;
    r5 = r7 + (r6 + (r6 << 2) << 3);
    do {
L_2d4f70:;
        r0_2 = r5 + (r4 << 2) + 0x62u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r0_2, 0x95bfdcu, guest::cpu()->r[2], r3);  // (from the original)
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0xau);  // (from the original)
    r6 = r6 + 1u;
    if (r6 < 0xau) {  // (from the original)
        guest::preempt();
        goto L_2d4f64;
    }
    r6 = 0u;
L_2d4f9c:;
    r4 = 0u;
    r5 = r7 + (r6 << 5);
    do {
L_2d4fa4:;
        r0_3 = r5 + (r4 << 2) + 0x1f2u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r0_3, 0x95bfdcu, guest::cpu()->r[2], r3);  // (from the original)
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 8u);
    r6 = r6 + 1u;
    if (r6 < 8u) {
        guest::preempt();
        goto L_2d4f9c;
    }
    r0_4 = r13;
    guest::cpu()->r[13] = r13;
    r0_5 = call_002fcbb0(r0_4, 0x23a0u, guest::cpu()->r[2], r3);  // (from the original)
    r3_2 = guest::cpu()->r[3];
    r0_6 = r7 + 0x2f2u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_6, r0_5, guest::cpu()->r[2], r3_2);
    r3_3 = guest::cpu()->r[3];
    r0_7 = r13;
    guest::cpu()->r[13] = r13;
    r0_8 = call_002fcbb0(r0_7, 0x243du, guest::cpu()->r[2], r3_3);  // (from the original)
    r3_4 = guest::cpu()->r[3];
    r0_9 = r7 + 0x2f6u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_9, r0_8, guest::cpu()->r[2], r3_4);
    r3_5 = guest::cpu()->r[3];
    *gptr<u8>(r7 + 0x20u) = u8(r8);  // (from the original)
    r0_10 = r7 + 0x2fau;  // (from the original)
    *gptr<u8>(r7 + 0x21u) = u8(r8);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_10, 0x95bfdcu, guest::cpu()->r[2], r3_5);  // (from the original)
    r3_6 = guest::cpu()->r[3];
    r0_11 = r7 + 0x2feu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_12 = call_002fc8e8(r0_11, 0x95bfdcu, guest::cpu()->r[2], r3_6);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_12;
}

}  // namespace d_002d4f3c
GUEST_EXPORT(0x002d4f3c, d_002d4f3c::f_002d4f3c);

// f_002d5058: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d5058 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)

u32 f_002d5058(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r12_1 = 0;
    u32 cf_1 = 0;
    u32 r0_1 = 0;
    u32 cf_2 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    r12_1 = *gptr<u32>(r13);
    if (r12_1 != 0) {
        if (r12_1 != 1u) {
            return r0;
        }
        cf_1 = r2 >= 8u;
        if (!cf_1) {
            r12_1 = r3;
            cf_1 = r3 >= 8u;
        }
        if (cf_1) {
            return r0;
        }
        r0_1 = r0 + (r12_1 << 5) + (r2 << 2) + 0x1f2u;  // (from the original)
        guest::cpu()->r[13] = r13;
        return call_002fc8e8(r0_1, guest::cpu()->r[1], r2, r3);
    }
    cf_2 = r2 >= 0xau;  // (from the original)
    if (!cf_2) {
        r12_1 = r3;
        cf_2 = r3 >= 0xau;  // (from the original)
    }
    if (cf_2) {
        return r0;
    }
    r3_1 = r12_1 + (r12_1 << 2);
    r0_2 = r0 + (r3_1 << 3) + (r2 << 2) + 0x62u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_002fc8e8(r0_2, guest::cpu()->r[1], r2, r3_1);
}

}  // namespace d_002d5058
GUEST_EXPORT(0x002d5058, d_002d5058::f_002d5058);

// f_002d5184: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d5184 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)

u32 f_002d5184(u32 r0) {
    u32 r0_1 = 0;
    r0_1 = r0 + 0x2f6u;  // (from the original)
    return call_002fc8e8(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_002d5184
GUEST_EXPORT(0x002d5184, d_002d5184::f_002d5184);

// f_002d5190: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d5190 {

inline constexpr guest::Function<0x0076aff4, u32(u32, u32, u32, u32)> call_0076aff4;  // (from the original)

u32 f_002d5190(u32 r0, u32 r1_unused, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    u32 r0_4 = 0;
    u32 r1_5 = 0;
    u32 r0_5 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r7 = r0;
    r8 = r2;
    r6 = 0u;
L_2d51a4:;
    r4 = 0u;
    r5 = r7 + (r6 + (r6 << 2) << 3);
    do {
L_2d51b0:;
        r1_1 = r5 + (r4 << 2) + 0x62u;  // (from the original)
        r0_1 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        call_0076aff4(r0_1, r1_1, r8, guest::cpu()->r[3]);
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0xau);  // (from the original)
    r6 = r6 + 1u;
    if (r6 < 0xau) {  // (from the original)
        guest::preempt();
        goto L_2d51a4;
    }
    r6 = 0u;
L_2d51ec:;
    r4 = 0u;
    r5 = r7 + (r6 << 5);
    do {
L_2d51f4:;
        r1_2 = r5 + (r4 << 2) + 0x1f2u;  // (from the original)
        r0_2 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        call_0076aff4(r0_2, r1_2, r8, guest::cpu()->r[3]);
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 8u);
    r6 = r6 + 1u;
    if (r6 < 8u) {
        guest::preempt();
        goto L_2d51ec;
    }
    r1_3 = r7 + 0x2f2u;  // (from the original)
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    call_0076aff4(r0_3, r1_3, r8, guest::cpu()->r[3]);
    r1_4 = r7 + 0x2f6u;  // (from the original)
    r0_4 = r13;
    guest::cpu()->r[13] = r13;
    call_0076aff4(r0_4, r1_4, r8, guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r0_5 = r13;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return r0_5;
}

}  // namespace d_002d5190
GUEST_EXPORT(0x002d5190, d_002d5190::f_002d5190);

// f_002d5278: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d5278 {

inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x00582aa4, u32(u32, u32, u32, u32)> call_00582aa4;  // (from the original)

u32 f_002d5278(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_6 = 0;
    u32 r0_15 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0x22u;  // (from the original)
    r0_2 = call_00301d0c(r0_1, 0x582b08u, 0x20u, 2u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    call_00582aa4(r0_2, r1_1, r2_1, r3_1);
    r0_3 = r0_2 + 0x40u;  // (from the original)
    r0_4 = call_00301d0c(r0_3, 0x2fc20cu, 4u, 0x64u);  // (from the original)
    r0_5 = r0_4 + 0x190u;  // (from the original)
    r0_6 = call_00301d0c(r0_5, 0x2fc20cu, 4u, 0x40u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_7 = r0_6 + 0x100u;  // (from the original)
    r0_8 = call_002fc20c(r0_7, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_9 = r0_8 + 4u;
    r0_10 = call_002fc20c(r0_9, r1_3, r2_3, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_11 = r0_10 + 4u;
    r0_12 = call_002fc20c(r0_11, r1_4, r2_4, r3_4);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_13 = r0_12 + 4u;
    r0_14 = call_002fc20c(r0_13, r1_5, r2_5, r3_5);
    r1_6 = guest::cpu()->r[1];
    r0_15 = r0_14 - 0x2feu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_6;
    return r0_15;
}

}  // namespace d_002d5278
GUEST_EXPORT(0x002d5278, d_002d5278::f_002d5278);

// f_002d546c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d546c {

inline guest::global<u32, 0x0095decc> global_0095decc;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_002d546c(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r3_2 = 0;
    u32 res_1 = 0;
    u32 ea_1 = 0;
    u32 r3_3 = 0;
    u32 ea_2 = 0;
    u32 r0_6 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_5 = 0;
    u32 r0_8 = 0;
    u32 r2_3 = 0;
    u32 r3_6 = 0;
    u32 r1_4 = 0;
    u32 r0_9 = 0;
    u32 r1_5 = 0;
    u32 r2_4 = 0;
    u32 r3_7 = 0;
    u32 r0_10 = 0;
    u32 r1_6 = 0;
    u32 r0_11 = 0;
    r13 = r13 - 0x48u;  // (from the original)
    r4 = r0;
    r6 = r1;
    r0_1 = r13 + 8u;
    r1_1 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_003083bc(r0_1, r1_1, 8u, r3);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r5 = 0x90a378u;  // (from the original)
    *gptr<u32>(r0_2) = u32(r5);
    r0_3 = r0_2 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_005f4bfc(r0_3, r1_2, r2_1, r3_1);
    r0_5 = r0_4 - 0xcu;  // (from the original)
    r7 = 0u;
    *gptr<u32>(r0_5 + 0x18u) = u32(r7);  // (from the original)
    *gptr<u32>(r0_5 + 0x1cu) = u32(r7);  // (from the original)
    r2 = 0x8906ecu;  // (from the original)
    *gptr<u32>(r0_5 + 0x20u) = u32(r7);  // (from the original)
    *gptr<u32>(r0_5 + 0x24u) = u32(r7);  // (from the original)
    r1 = 4u;
    r0 = r0_5 + 0x16u;  // (from the original)
    do {
L_2d54bc:;
        r3_2 = u32(*gptr<u16>(r2));
        res_1 = r1 - 1u;
        r1 = res_1;
        ea_1 = r0 + 2u;
        *gptr<u16>(ea_1) = u16(r3_2);
        r3_3 = u32(*gptr<u16>(r2));
        ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_3);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    r0_6 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8f8(r0_6, 0u, r2, r3_3);
    *gptr<u32>(r13) = u32(r7);
    if (r6 == 0) {
        r3_4 = 0x1b2u;  // (from the original)
    } else {
        r3_4 = 0x1b3u;  // (from the original)
    }
    r0_7 = *global_0095decc;
    r1_3 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_005ea964(r0_7, r1_3, 0x2d555cu, r3_4);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_8 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8dc(r0_8, 0u, r2_2, r3_5);
    r2_3 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r1_4 = r13 + 8u;
    r0_9 = r4 + 0x18cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e2e50(r0_9, r1_4, r2_3, r3_6);
    r1_5 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_10 = r4 + 0x18cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e2f94(r0_10, r1_5, r2_4, r3_7);
    r1_6 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 8u) = u32(r5);
    r0_11 = r13 + 8u;
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    return r0_11;
}

}  // namespace d_002d546c
GUEST_EXPORT(0x002d546c, d_002d546c::f_002d546c);

// f_002d5770: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d5770 {


u32 f_002d5770(u32 r0) {
    u32 r0_1 = 0;
    r0_1 = 0x985a10u + (r0 << 2);  // (from the original)
    guest::cpu()->r[1] = 0x985a10u;  // (from the original)
    return r0_1;
}

}  // namespace d_002d5770
GUEST_EXPORT(0x002d5770, d_002d5770::f_002d5770);

// f_002d5848: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d5848 {

inline guest::global<u32, 0x0084515c> global_0084515c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)

u32 f_002d5848() {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r5 = 0x985a10u;  // (from the original)
    r1_1 = *gptr<u32>(0x84515cu + 4);  // (from the original)
    r2 = *gptr<u32>(0x84515cu + 8);  // (from the original)
    r3 = *gptr<u32>(0x84515cu + 0xc);  // (from the original)
    r4 = 0u;
    r6 = r13;
    *gptr<u32>(r13) = u32(*global_0084515c);
    *gptr<u32>(r13 + 4) = u32(r1_1);
    *gptr<u32>(r13 + 8) = u32(r2);
    *gptr<u32>(r13 + 0xc) = u32(r3);  // (from the original)
    do {
L_2d5868:;
        r1_2 = u32(*gptr<u16>(r6 + (r4 << 1)));
        r0_1 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_2 = call_002fcbb0(r0_1, r1_2, r2, r3);
        r3_1 = guest::cpu()->r[3];
        r2_1 = r5 + (r4 << 2);
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r2_1, r0_2, r2_1, r3_1);
        r1_3 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0_3 = r13 + 0x10u;  // (from the original)
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(8u));
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_002d5848
GUEST_EXPORT(0x002d5848, d_002d5848::f_002d5848);

// f_002d5920: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d5920 {

struct __attribute__((packed)) Object_002d5920_0 {
    u32 word_0;
    u8 unknown_4[0x33];  // (not used here)
    u8 byte_37;
};
GUEST_OFFSET(Object_002d5920_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002d5920_0, byte_37, 0x37);  // (from the original)


u32 f_002d5920(gptr<Object_002d5920_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    goto L_2d5920;
L_20acc4:;
    r2_1 = u32(s32(s8(arg0->byte_37)));
    if (r2_1 == r1) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    arg0->byte_37 = u8(r1);
    r1_1 = *gptr<u32>(arg0->word_0 + 0x18u);  // (from the original)
    return guest::call_address<u32>(r1_1, r0, r1_1, r2_1, guest::cpu()->r[3]);
L_2d5920:;
    guest::preempt();
    goto L_20acc4;
}

}  // namespace d_002d5920
GUEST_EXPORT(0x002d5920, d_002d5920::f_002d5920);

// f_002d596c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d596c {

inline constexpr guest::Function<0x001e5894, u32(u32, u32, u32, u32)> call_001e5894;  // (from the original)
inline constexpr guest::Function<0x002e8bf4, u32(u32, u32, u32, u32)> call_002e8bf4;  // (from the original)

u32 f_002d596c(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_001e5894(r0_1, r1, r2, guest::cpu()->r[3]);
    r2_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_2 = call_002e8bf4(r0, r1, r2_1, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_002d596c
GUEST_EXPORT(0x002d596c, d_002d596c::f_002d596c);

// f_002d59a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d59a4 {

struct __attribute__((packed)) Object_002d59a4_0 {
    u8 unknown_0[0x68];  // (not used here)
    u8 byte_68;
};
GUEST_OFFSET(Object_002d59a4_0, byte_68, 0x68);  // (from the original)

inline constexpr guest::Function<0x00136cc8, u32(u32, u32, u32, u32)> call_00136cc8;  // (from the original)
inline constexpr guest::Function<0x0020aedc, u32(u32, u32, u32, u32)> call_0020aedc;  // (from the original)

u32 f_002d59a4(gptr<Object_002d59a4_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = u32(arg0->byte_68);
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0_1;
    } else {
        r0_2 = r0 + 0x44u;  // (from the original)
    }
    call_00136cc8(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_0020aedc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r0 + 0x68u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return 0u;
}

}  // namespace d_002d59a4
GUEST_EXPORT(0x002d59a4, d_002d59a4::f_002d59a4);

// f_002d59d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d59d4 {

inline constexpr guest::Function<0x002e8ce8, u32(u32, u32, u32, u32)> call_002e8ce8;  // (from the original)

u32 f_002d59d4(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002e8ce8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r0_1 + 0x68u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0u;
    return r0_1;
}

}  // namespace d_002d59d4
GUEST_EXPORT(0x002d59d4, d_002d59d4::f_002d59d4);

// f_002d59e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d59e8 {

struct __attribute__((packed)) Object_002d59e8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_002d59e8_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00136cc8, u32(u32, u32, u32, u32)> call_00136cc8;  // (from the original)
inline constexpr guest::Function<0x0020aedc, u32(u32, u32, u32, u32)> call_0020aedc;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_002d59e8(gptr<Object_002d59e8_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    arg0->word_0 = u32(0x8f8d88u);  // (from the original)
    r0_1 = r0 + 0x44u;  // (from the original)
    call_00136cc8(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    call_0020aedc(r0, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_2 = r0 + 0x44u;  // (from the original)
    call_00136cc8(r0_2, r1_2, r2_2, r3_2);
    call_002f76ac(r0_2, 0x137d74u, 4u, 1u);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return r0;
}

}  // namespace d_002d59e8
GUEST_EXPORT(0x002d59e8, d_002d59e8::f_002d59e8);

// f_002d5b40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d5b40 {

inline constexpr guest::Function<0x001e5894, u32(u32, u32, u32, u32)> call_001e5894;  // (from the original)
inline constexpr guest::Function<0x002e9118, u32(u32, u32, u32, u32)> call_002e9118;  // (from the original)

u32 f_002d5b40(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_001e5894(r0_1, r1, r2, guest::cpu()->r[3]);
    r2_1 = r13;
    guest::cpu()->r[13] = r13;
    call_002e9118(r0, r1, r2_1, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    *gptr<u8>(r0 + 0xdcu) = u8(1u);  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_002d5b40
GUEST_EXPORT(0x002d5b40, d_002d5b40::f_002d5b40);

// f_002d5d48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d5d48 {

inline constexpr guest::Function<0x001e5894, u32(u32, u32, u32, u32)> call_001e5894;  // (from the original)
inline constexpr guest::Function<0x002e9194, u32(u32, u32, u32, u32)> call_002e9194;  // (from the original)

u32 f_002d5d48(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_001e5894(r0_1, r1, r2, guest::cpu()->r[3]);
    r2_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_2 = call_002e9194(r0, r1, r2_1, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_002d5d48
GUEST_EXPORT(0x002d5d48, d_002d5d48::f_002d5d48);

// f_002d5f68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d5f68 {

struct __attribute__((packed)) Object_002d5f68_0 {
    u8 unknown_0[0xdc];  // (not used here)
    u8 byte_dc;
};
GUEST_OFFSET(Object_002d5f68_0, byte_dc, 0xdc);  // (from the original)

inline constexpr guest::Function<0x002e9268, u32(u32, u32, u32, u32)> call_002e9268;  // (from the original)

u32 f_002d5f68(gptr<Object_002d5f68_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = u32(arg0->byte_dc);
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0_1;
    }
    call_002e9268(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r0 + 0xdcu) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return 0u;
}

}  // namespace d_002d5f68
GUEST_EXPORT(0x002d5f68, d_002d5f68::f_002d5f68);

// f_002d5f90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d5f90 {

inline constexpr guest::Function<0x002e92b0, u32(u32, u32, u32, u32)> call_002e92b0;  // (from the original)

u32 f_002d5f90(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002e92b0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r0_1 + 0xdcu) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0u;
    return r0_1;
}

}  // namespace d_002d5f90
GUEST_EXPORT(0x002d5f90, d_002d5f90::f_002d5f90);

// f_002d70b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d70b8 {

inline constexpr guest::Function<0x001c2764, u32(u32, u32, u32, u32)> call_001c2764;  // (from the original)
inline constexpr guest::Function<0x004ed3fc, u32(u32, u32, u32, u32)> call_004ed3fc;  // (from the original)

u32 f_002d70b8(u32 r0, u32 r1, u32 r2, float S0, float S1, float S2, float S3, float S4, float S5, float S6, float S7) {
    u32 r0_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S4_1 = 0;
    float S5_1 = 0;
    float S6_1 = 0;
    float S7_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    float S3_2 = 0;
    float S4_2 = 0;
    float S5_2 = 0;
    float S6_2 = 0;
    float S7_2 = 0;
    u32 r2_2 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    float S2_3 = 0;
    float S3_3 = 0;
    float S4_3 = 0;
    float S5_3 = 0;
    float S6_3 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0_1 = call_001c2764(r0, r1, r2, guest::cpu()->r[3]);
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    S2_1 = guest::cpu()->s[2];
    S3_1 = guest::cpu()->s[3];
    S4_1 = guest::cpu()->s[4];
    S5_1 = guest::cpu()->s[5];
    S6_1 = guest::cpu()->s[6];
    S7_1 = guest::cpu()->s[7];
    *gptr<u32>(r0_1 + 0x18u) = u32(0x8faa14u);  // (from the original)
    *gptr<u32>(r0_1) = u32(0x8f2fc0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x64u) = u32(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0x68u) = u8(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0x69u) = u8(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0x6au) = u8(1u);  // (from the original)
    *gptr<u8>(r0_1 + 0x6bu) = u8(0u);  // (from the original)
    *gptr<u16>(r0_1 + 0x28u) = u16(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0x2au) = u8(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0x2bu) = u8(0u);  // (from the original)
    *gptr<u16>(r0_1 + 0x5cu) = u16(0u);  // (from the original)
    *gptr<u16>(r0_1 + 0x5eu) = u16(0u);  // (from the original)
    r0_2 = r0_1 + 0xb4u;  // (from the original)
    *gptr<u32>(r0_1 + 0x60u) = u32(0u);  // (from the original)
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    guest::cpu()->s[6] = S6_1;
    guest::cpu()->s[7] = S7_1;
    r0_3 = call_004ed3fc(r0_2, r0_1, 1u, guest::cpu()->r[3]);
    *gptr<u32>(r0_3) = u32(0x902a8cu);  // (from the original)
    r0_4 = r0_3 - 0xb4u;  // (from the original)
    r2_1 = 0x847238u + 0x10u;  // (from the original)
    r1_1 = 0x847238u + 0x30u;  // (from the original)
    S0_2 = std::bit_cast<float>(*gptr<u32>(r2_1));
    S1_2 = std::bit_cast<float>(*gptr<u32>(r2_1 + 4));
    S2_2 = std::bit_cast<float>(*gptr<u32>(r2_1 + 8));
    S3_2 = std::bit_cast<float>(*gptr<u32>(r2_1 + 0xc));  // (from the original)
    S4_2 = std::bit_cast<float>(*gptr<u32>(r2_1 + 0x10));  // (from the original)
    S5_2 = std::bit_cast<float>(*gptr<u32>(r2_1 + 0x14));  // (from the original)
    S6_2 = std::bit_cast<float>(*gptr<u32>(r2_1 + 0x18));  // (from the original)
    S7_2 = std::bit_cast<float>(*gptr<u32>(r2_1 + 0x1c));  // (from the original)
    r2_2 = r0_4 + 0x6cu;  // (from the original)
    *gptr<u32>(r2_2) = u32(std::bit_cast<u32>(S0_2));
    *gptr<u32>(r2_2 + 4) = u32(std::bit_cast<u32>(S1_2));
    *gptr<u32>(r2_2 + 8) = u32(std::bit_cast<u32>(S2_2));
    *gptr<u32>(r2_2 + 0xc) = u32(std::bit_cast<u32>(S3_2));  // (from the original)
    *gptr<u32>(r2_2 + 0x10) = u32(std::bit_cast<u32>(S4_2));  // (from the original)
    *gptr<u32>(r2_2 + 0x14) = u32(std::bit_cast<u32>(S5_2));  // (from the original)
    *gptr<u32>(r2_2 + 0x18) = u32(std::bit_cast<u32>(S6_2));  // (from the original)
    *gptr<u32>(r2_2 + 0x1c) = u32(std::bit_cast<u32>(S7_2));  // (from the original)
    S0_3 = std::bit_cast<float>(*gptr<u32>(r1_1));
    S1_3 = std::bit_cast<float>(*gptr<u32>(r1_1 + 4));
    S2_3 = std::bit_cast<float>(*gptr<u32>(r1_1 + 8));
    S3_3 = std::bit_cast<float>(*gptr<u32>(r1_1 + 0xc));  // (from the original)
    S4_3 = std::bit_cast<float>(*gptr<u32>(r1_1 + 0x10));  // (from the original)
    S5_3 = std::bit_cast<float>(*gptr<u32>(r1_1 + 0x14));  // (from the original)
    S6_3 = std::bit_cast<float>(*gptr<u32>(r1_1 + 0x18));  // (from the original)
    r1_2 = r0_4 + 0x8cu;  // (from the original)
    *gptr<u32>(r1_2) = u32(std::bit_cast<u32>(S0_3));
    *gptr<u32>(r1_2 + 4) = u32(std::bit_cast<u32>(S1_3));
    *gptr<u32>(r1_2 + 8) = u32(std::bit_cast<u32>(S2_3));
    *gptr<u32>(r1_2 + 0xc) = u32(std::bit_cast<u32>(S3_3));  // (from the original)
    *gptr<u32>(r1_2 + 0x10) = u32(std::bit_cast<u32>(S4_3));  // (from the original)
    *gptr<u32>(r1_2 + 0x14) = u32(std::bit_cast<u32>(S5_3));  // (from the original)
    *gptr<u32>(r1_2 + 0x18) = u32(std::bit_cast<u32>(S6_3));  // (from the original)
    *gptr<u8>(r0_4 + 0x1d0u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    return r0_4;
}

}  // namespace d_002d70b8
GUEST_EXPORT(0x002d70b8, d_002d70b8::f_002d70b8);

// f_002d7ad4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d7ad4 {

inline constexpr guest::Function<0x002b7d4c, u32(u32, u32, u32, u32)> call_002b7d4c;  // (from the original)
inline constexpr guest::Function<0x002c4544, u32(u32, u32, u32, u32)> call_002c4544;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002fe7f4, u32(u32, u32, u32, u32)> call_002fe7f4;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)

u32 f_002d7ad4(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 res_1 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r1_5 = 0;
    u32 r0_14 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    u32 r9_1 = 0;
    u32 r1_6 = 0;
    u32 r8_1 = 0;
    u32 r0_15 = 0;
    u32 r1_7 = 0;
    u32 r2_6 = 0;
    u32 r3_5 = 0;
    u32 r0_16 = 0;
    u32 r1_8 = 0;
    u32 r2_7 = 0;
    u32 r3_6 = 0;
    u32 r0_17 = 0;
    u32 r2_8 = 0;
    u32 r1_9 = 0;
    u32 r3_7 = 0;
    u32 r0_18 = 0;
    u32 r3_8 = 0;
    u32 r1_10 = 0;
    u32 r0_19 = 0;
    u32 r2_9 = 0;
    u32 r0_20 = 0;
    u32 res_2 = 0;
    u32 r1_11 = 0;
    u32 r0_21 = 0;
    u32 r2_10 = 0;
    u32 r3_9 = 0;
    u32 r8_2 = 0;
    u32 r1_12 = 0;
    u32 r9_2 = 0;
    u32 r0_22 = 0;
    u32 r1_13 = 0;
    u32 r2_11 = 0;
    u32 r3_10 = 0;
    u32 r0_23 = 0;
    u32 r1_14 = 0;
    u32 r2_12 = 0;
    u32 r3_11 = 0;
    u32 r0_24 = 0;
    u32 r2_13 = 0;
    u32 r1_15 = 0;
    u32 r3_12 = 0;
    u32 r0_25 = 0;
    u32 r3_13 = 0;
    u32 r1_16 = 0;
    u32 r0_26 = 0;
    u32 r2_14 = 0;
    u32 r0_27 = 0;
    u32 res_3 = 0;
    r13 = r13 - 0x88u;  // (from the original)
    r5 = r0;
    r4 = 0u;
    do {
L_2d7ae4:;
        r2_1 = *gptr<u32>(r5 + (r4 << 2) + 0xae8u);  // (from the original)
        r0_1 = *gptr<u32>(r2_1 + 0x150u);  // (from the original)
        r1_1 = u32(*gptr<u8>(r0_1 + 0xb7u)) & 0xfeu;  // (from the original)
        *gptr<u8>(r0_1 + 0xb7u) = u8(r1_1);  // (from the original)
        r0_2 = r2_1 + 4u;
        guest::cpu()->r[13] = r13;
        call_00568c10(r0_2, r1_1, r2_1, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(9u));
    r0_3 = *gptr<u32>(r5 + 0xad4u);  // (from the original)
    r10 = 0x909f18u;  // (from the original)
    r4 = 0u;
    r11 = r5 + 0xa00u;  // (from the original)
    if (r0_3 == 0) {
        r7 = 3u;
        r6 = 0u;
        goto L_2d7cb0;
    }
    r8 = r0_3 - 3u;
    r6 = 0u;
    if (r8 == 0 || r8 >> 0x1f != (r8 & (r8 ^ r8)) >> 0x1f) {  // (from the original)
        goto L_2d7b78;
    }
    do {
L_2d7b40:;
        r0_4 = r13;
        guest::cpu()->r[13] = r13;
        call_002c4544(r0_4, r4, r2, r3);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        r0_5 = r13;
        guest::cpu()->r[13] = r13;
        r0_6 = call_002fcaf4(r0_5, r1_2, r2_2, r3_1);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_6 == 0) {
            r6 = r6 + 1u;
        }
        res_1 = r6 - r8;
        r4 = r4 + 1u;
        guest::preempt();
    } while (res_1 >> 0x1f != ((r6 ^ r8) & (r6 ^ res_1)) >> 0x1f);  // (from the original)
L_2d7b78:;
    r7 = 0u;
    r6 = *gptr<u32>(r5 + 0xad4u) - 3u;  // (from the original)
L_2d7b84:;
    r0_7 = *gptr<u32>(r5 + 0xad0u);  // (from the original)
    if (r0_7 <= r6) {
        goto L_2d7d70;
    }
    r0_8 = r13 + 0x5cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002c4544(r0_8, r4, r2, r3);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_9 = r13 + 0x5cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_002fcaf4(r0_9, r1_3, r2_3, r3_2);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_10 == 0) {
        goto L_2d7cc0;
    }
    r0_7 = r13 + 0x5cu;  // (from the original)
    goto L_2d7d64;
L_2d7bc8:;
    r0_11 = r13 + 0x5cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002c4544(r0_11, r4, r2, r3);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_12 = r13 + 0x5cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_13 = call_002fcaf4(r0_12, r1_4, r2_4, r3_3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_13 != 0) {
        r0_7 = r13 + 0x5cu;  // (from the original)
    } else {
        r1_5 = r13 + 0x5cu;  // (from the original)
        r0_14 = r13;
        guest::cpu()->r[13] = r13;
        call_002fe7f4(r0_14, r1_5, 0u, r3);
        r2_5 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        r9_1 = r5 + (r7 << 2);
        r1_6 = r13;
        r8_1 = *gptr<u32>(r9_1 + 0xae8u);  // (from the original)
        r0_15 = r8_1 + 0x154u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_005e2e50(r0_15, r1_6, r2_5, r3_4);
        r1_7 = guest::cpu()->r[1];
        r2_6 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
        r0_16 = r8_1 + 0x154u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_005e2f94(r0_16, r1_7, r2_6, r3_5);
        r1_8 = guest::cpu()->r[1];
        r2_7 = guest::cpu()->r[2];
        r3_6 = guest::cpu()->r[3];
        r0_17 = r8_1 + 4u;
        guest::cpu()->r[13] = r13;
        call_00568c10(r0_17, r1_8, r2_7, r3_6);
        r2_8 = r13 + 0x5cu;  // (from the original)
        r1_9 = r5 + 0x310u;  // (from the original)
        *gptr<u32>(*gptr<u32>(r9_1 + 0xae8u) + 0x218u) = u32(r4);  // (from the original)
        r3_7 = u32(s32(s8(*gptr<u8>(r11 + 0xe4u))));  // (from the original)
        r0_18 = *gptr<u32>(r9_1 + 0xae8u);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002b7d4c(r0_18, r1_9, r2_8, r3_7);
        r3_8 = guest::cpu()->r[3];
        r1_10 = *gptr<u32>(r9_1 + 0xae8u);  // (from the original)
        r0_19 = *gptr<u32>(r1_10 + 0x150u);  // (from the original)
        r2_9 = u32(*gptr<u8>(r0_19 + 0xb7u)) & 0xfeu | 1u;  // (from the original)
        *gptr<u8>(r0_19 + 0xb7u) = u8(r2_9);  // (from the original)
        r0_20 = r1_10 + 4u;
        guest::cpu()->r[13] = r13;
        call_00568c10(r0_20, r1_10, r2_9, r3_8);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r7 = r7 + 1u;
        r6 = r6 + 1u;
        *gptr<u32>(r13) = u32(r10);
        r0_7 = r13 + 0x5cu;  // (from the original)
    }
    res_2 = r7 - 9u;
    r4 = r4 + 1u;
    if (res_2 >> 0x1f == ((r7 ^ 9u) & (r7 ^ res_2)) >> 0x1f) {  // (from the original)
        goto L_2d7d70;
    }
L_2d7cb0:;
    r0_7 = *gptr<u32>(r5 + 0xad0u);  // (from the original)
    if (r0_7 <= r6) {
        goto L_2d7d70;
    }
    guest::preempt();
    goto L_2d7bc8;
L_2d7cc0:;
    r1_11 = r13 + 0x5cu;  // (from the original)
    r0_21 = r13;
    guest::cpu()->r[13] = r13;
    call_002fe7f4(r0_21, r1_11, 0u, r3);
    r2_10 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r8_2 = r5 + (r7 << 2);
    r1_12 = r13;
    r9_2 = *gptr<u32>(r8_2 + 0xae8u);  // (from the original)
    r0_22 = r9_2 + 0x154u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e2e50(r0_22, r1_12, r2_10, r3_9);
    r1_13 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_23 = r9_2 + 0x154u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e2f94(r0_23, r1_13, r2_11, r3_10);
    r1_14 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_24 = r9_2 + 4u;
    guest::cpu()->r[13] = r13;
    call_00568c10(r0_24, r1_14, r2_12, r3_11);
    r2_13 = r13 + 0x5cu;  // (from the original)
    r1_15 = r5 + 0x310u;  // (from the original)
    *gptr<u32>(*gptr<u32>(r8_2 + 0xae8u) + 0x218u) = u32(r4);  // (from the original)
    r3_12 = u32(s32(s8(*gptr<u8>(r11 + 0xe4u))));  // (from the original)
    r0_25 = *gptr<u32>(r8_2 + 0xae8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002b7d4c(r0_25, r1_15, r2_13, r3_12);
    r3_13 = guest::cpu()->r[3];
    r1_16 = *gptr<u32>(r8_2 + 0xae8u);  // (from the original)
    r0_26 = *gptr<u32>(r1_16 + 0x150u);  // (from the original)
    r2_14 = u32(*gptr<u8>(r0_26 + 0xb7u)) & 0xfeu | 1u;  // (from the original)
    *gptr<u8>(r0_26 + 0xb7u) = u8(r2_14);  // (from the original)
    r0_27 = r1_16 + 4u;
    guest::cpu()->r[13] = r13;
    call_00568c10(r0_27, r1_16, r2_14, r3_13);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r7 + 1u;
    r6 = r6 + 1u;
    *gptr<u32>(r13) = u32(r10);
    r0_7 = r13 + 0x5cu;  // (from the original)
L_2d7d64:;
    res_3 = r7 - 9u;
    r4 = r4 + 1u;
    if (res_3 >> 0x1f != ((r7 ^ 9u) & (r7 ^ res_3)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_2d7b84;
    }
L_2d7d70:;
    r13 = r13 + 0x88u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_7;
}

}  // namespace d_002d7ad4
GUEST_EXPORT(0x002d7ad4, d_002d7ad4::f_002d7ad4);

// f_002d7d7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d7d7c {

inline guest::global<u32, 0x002d7f18> global_002d7f18;  // (from the original)
inline guest::global<u32, 0x002d7f1c> global_002d7f1c;  // (from the original)
inline constexpr guest::Function<0x002b6a00, u32(u32, u32, u32, u32)> call_002b6a00;  // (from the original)
inline constexpr guest::Function<0x002f6a30, u32(u32, u32, u32, u32)> call_002f6a30;  // (from the original)
inline constexpr guest::Function<0x002f6e98, u32(u32, u32, u32, u32)> call_002f6e98;  // (from the original)
inline constexpr guest::Function<0x002f7508, u32(u32, u32, u32, u32)> call_002f7508;  // (from the original)
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)

u32 f_002d7d7c(u32 r0, float S0, float S1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r9_1 = 0;
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 r3_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r12_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 ea_4 = 0;
    u32 r1_4 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    u32 ea_7 = 0;
    u32 ea_8 = 0;
    u32 ea_9 = 0;
    u32 ea_10 = 0;
    u32 ea_11 = 0;
    u32 ea_12 = 0;
    u32 ea_13 = 0;
    u32 ea_14 = 0;
    u32 r0_3 = 0;
    u32 r1_5 = 0;
    u32 ea_15 = 0;
    u32 ea_16 = 0;
    u32 r0_4 = 0;
    u32 r1_6 = 0;
    u32 ea_17 = 0;
    u32 r1_7 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r3_2 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r1_8 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    u32 r1_9 = 0;
    u32 r6_2 = 0;
    u32 r3_4 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    u32 r4_1 = 0;
    u32 r1_10 = 0;
    u32 r0_9 = 0;
    u32 r2_3 = 0;
    u32 r0_10 = 0;
    u32 r1_11 = 0;
    float S0_4 = 0;
    float S1_4 = 0;
    r5 = r0;
    r2_1 = r0 + 0xc8u;  // (from the original)
    r13 = r13 - 0x88u;  // (from the original)
    r0_1 = r0 + 0x908u;  // (from the original)
    r9_1 = r13 + 0x48u;  // (from the original)
    ea_1 = 0x84a1b8u + 0x1e0u;  // (from the original)
    r1_1 = *gptr<u32>(ea_1);
    ea_2 = r13;
    *gptr<u32>(ea_2) = u32(r0_1);
    ea_3 = 0x84a1b8u + 0x1e4u;  // (from the original)
    r3_1 = *gptr<u32>(ea_3);
    r6_1 = *gptr<u32>(ea_3 + 4);
    r7_1 = *gptr<u32>(ea_3 + 8);
    r8_1 = *gptr<u32>(ea_3 + 0xc);  // (from the original)
    r12_1 = *gptr<u32>(ea_3 + 0x10);  // (from the original)
    *gptr<u32>(r9_1) = u32(r1_1);
    *gptr<u32>(r9_1 + 4) = u32(r3_1);
    *gptr<u32>(r9_1 + 8) = u32(r6_1);
    *gptr<u32>(r9_1 + 0xc) = u32(r7_1);  // (from the original)
    *gptr<u32>(r9_1 + 0x10) = u32(r8_1);  // (from the original)
    *gptr<u32>(r9_1 + 0x14) = u32(r12_1);  // (from the original)
    r1_2 = *gptr<u32>(0x84a1b8u + 0x1f8u);  // (from the original)
    *gptr<u32>(r13 + 0x44u) = u32(r0_1);  // (from the original)
    r0_2 = r5 + 0x2514u;  // (from the original)
    *gptr<u32>(r13 + 0x40u) = u32(r2_1);  // (from the original)
    *gptr<u32>(r13 + 0x60u) = u32(r1_2);  // (from the original)
    r1_3 = r13 + 0x40u;  // (from the original)
    r7 = r0_2;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    call_002f6e98(r0_2, r1_3, 0u, r3_1);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    ea_4 = r7 + 0xd4u;  // (from the original)
    r9 = 0u;
    S0 = std::bit_cast<float>(*global_002d7f18);
    r1_4 = *gptr<u32>(ea_4) | 0x40u;  // (from the original)
    ea_5 = r7 + 0xd4u;  // (from the original)
    *gptr<u32>(ea_5) = u32(r1_4);
    ea_6 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(ea_6) = u32(r9);
    ea_7 = r13 + 0x14u;  // (from the original)
    *gptr<u32>(ea_7) = u32(r9);
    S1 = std::bit_cast<float>(*global_002d7f1c);
    ea_8 = r13 + 0x18u;  // (from the original)
    *gptr<u32>(ea_8) = u32(r9);
    ea_9 = r13 + 0x1cu;  // (from the original)
    *gptr<u32>(ea_9) = u32(r9);
    ea_10 = r13 + 0x20u;  // (from the original)
    *gptr<u32>(ea_10) = u32(r9);
    ea_11 = r13 + 0x24u;  // (from the original)
    *gptr<u32>(ea_11) = u32(r9);
    ea_12 = r13 + 0x28u;  // (from the original)
    *gptr<u32>(ea_12) = u32(r9);
    r8 = 1u;
    ea_13 = r13 + 0x18u;  // (from the original)
    *gptr<u32>(ea_13) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(ea_13 + 4) = u32(std::bit_cast<u32>(S1));
    r10 = r13 + 0x30u;  // (from the original)
    ea_14 = 0x84a1b8u + 0x70u;  // (from the original)
    r0_3 = *gptr<u32>(ea_14);
    r1_5 = *gptr<u32>(ea_14 + 4);
    r11 = r13 + 0x38u;  // (from the original)
    ea_15 = r13 + 0x30u;  // (from the original)
    *gptr<u32>(ea_15) = u32(r0_3);
    *gptr<u32>(ea_15 + 4) = u32(r1_5);
    ea_16 = 0x84a1b8u + 0x78u;  // (from the original)
    r0_4 = *gptr<u32>(ea_16);
    r1_6 = *gptr<u32>(ea_16 + 4);
    r4 = r9;
    ea_17 = r13 + 0x38u;  // (from the original)
    *gptr<u32>(ea_17) = u32(r0_4);
    *gptr<u32>(ea_17 + 4) = u32(r1_6);
    do {
L_2d7e34:;
        r1_7 = *gptr<u32>(r10 + (r4 << 2));
        r0_5 = *gptr<u32>(r13);
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0_6 = call_0056878c(r0_5, r1_7, r2, r3);
        r3_2 = guest::cpu()->r[3];
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
        *gptr<u32>(r13 + 0x10u) = u32(r0_6);  // (from the original)
        r1_8 = *gptr<u32>(r11 + (r4 << 2));
        r0_7 = *gptr<u32>(r13);
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        r0_8 = call_004b4fc0(r0_7, r1_8, 1u, r3_2);
        r2_2 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        S0_2 = guest::cpu()->s[0];
        S1_2 = guest::cpu()->s[1];
        *gptr<u32>(r13 + 0x14u) = u32(r0_8);  // (from the original)
        r1_9 = r13 + 0x10u;  // (from the original)
        r6_2 = r5 + ((r4 << 3) - r4 << 5) + 0x2354u;  // (from the original)
        *gptr<u32>(r13 + 0x24u) = u32(r4);  // (from the original)
        *gptr<u32>(r13 + 0x20u) = u32(r9);  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        call_002b6a00(r6_2, r1_9, r2_2, r3_3);
        r3_4 = guest::cpu()->r[3];
        S0_3 = guest::cpu()->s[0];
        S1_3 = guest::cpu()->s[1];
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_3;
        call_002f7508(r7, r6_2, 1u, r3_4);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(2u));
    r4_1 = r5 + 0x2500u;  // (from the original)
    *gptr<u32>(0x2420u + r5) = u32(0x1000480u);  // (from the original)
    *gptr<u8>(0x2420u + 0xeu + r5) = u8(r8);  // (from the original)
    r1_10 = 0x1000480u - u32(s32(0x2420u) >> 0xc);  // (from the original)
    r0_9 = r5 + 0x2354u;  // (from the original)
    r2_3 = r1_10 | u32(s32(r1_10) >> 0x18);  // (from the original)
    *gptr<u32>(r0_9 + 0xd0u) = u32(r1_10);  // (from the original)
    *gptr<u8>(r0_9 + 0xdbu) = u8(r8);  // (from the original)
    *gptr<u8>(r0_9 + 0xdcu) = u8(r8);  // (from the original)
    *gptr<u32>(r4_1) = u32(r2_3);
    *gptr<u8>(0x250eu + r5) = u8(r8);  // (from the original)
    r0_10 = r5 + 0x2434u;  // (from the original)
    *gptr<u32>(r0_10 + 0xd0u) = u32(r1_10);  // (from the original)
    *gptr<u8>(r0_10 + 0xdbu) = u8(r8);  // (from the original)
    *gptr<u8>(r0_10 + 0xdcu) = u8(r8);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    call_002f6a30(r7, 0u, r2_3, r3);
    r1_11 = guest::cpu()->r[1];
    S0_4 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    *gptr<u32>(r7 + 0xd4u) = u32(*gptr<u32>(r7 + 0xd4u) & ~8u);  // (from the original)
    *gptr<u16>(r4_1 + 0xe4u) = u16(3u);  // (from the original)
    r13 = r13 + 0x88u;  // (from the original)
    guest::cpu()->r[1] = r1_11;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    return 3u;
}

}  // namespace d_002d7d7c
GUEST_EXPORT(0x002d7d7c, d_002d7d7c::f_002d7d7c);

// f_002d9aa0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d9aa0 {

struct __attribute__((packed)) Object_002d9aa0_0 {
    u32 word_0;
    u8 unknown_4[0x24];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0x78];  // (not used here)
    u32 word_a4;
    u8 unknown_a8[0x2550];  // (not used here)
    u32 word_25f8;
    u8 unknown_25fc[0x394];  // (not used here)
    u32 word_2990;
    u8 unknown_2994[0xe0];  // (not used here)
    u32 word_2a74;
};
GUEST_OFFSET(Object_002d9aa0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002d9aa0_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_002d9aa0_0, word_a4, 0xa4);  // (from the original)
GUEST_OFFSET(Object_002d9aa0_0, word_25f8, 0x25f8);  // (from the original)
GUEST_OFFSET(Object_002d9aa0_0, word_2990, 0x2990);  // (from the original)
GUEST_OFFSET(Object_002d9aa0_0, word_2a74, 0x2a74);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f770c, u32(u32, u32, u32, u32)> call_002f770c;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x003170d0, u32(u32, u32, u32, u32)> call_003170d0;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32, u32, u32)> call_006aaa30;  // (from the original)

u32 f_002d9aa0(gptr<Object_002d9aa0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r3_1 = 0;
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r4_2 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_6 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r3_7 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_6 = 0;
    u32 r2_7 = 0;
    u32 r3_8 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r1_7 = 0;
    u32 r2_8 = 0;
    u32 r3_9 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r1_8 = 0;
    u32 r2_9 = 0;
    u32 r3_10 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r1_9 = 0;
    u32 r2_10 = 0;
    u32 r3_11 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r1_10 = 0;
    u32 r2_11 = 0;
    u32 r3_12 = 0;
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    u32 r1_11 = 0;
    u32 r2_12 = 0;
    u32 r3_13 = 0;
    u32 r0_26 = 0;
    u32 r0_27 = 0;
    u32 r1_12 = 0;
    u32 r2_13 = 0;
    u32 r3_14 = 0;
    u32 r0_28 = 0;
    u32 r0_29 = 0;
    u32 r1_13 = 0;
    u32 r2_14 = 0;
    u32 r3_15 = 0;
    u32 r0_30 = 0;
    u32 r0_31 = 0;
    u32 r1_14 = 0;
    u32 r2_15 = 0;
    u32 r3_16 = 0;
    u32 r0_32 = 0;
    u32 r0_33 = 0;
    u32 r1_15 = 0;
    u32 r2_16 = 0;
    u32 r3_17 = 0;
    u32 r0_34 = 0;
    u32 r0_35 = 0;
    u32 r1_16 = 0;
    u32 r2_17 = 0;
    u32 r3_18 = 0;
    u32 r0_36 = 0;
    u32 r0_37 = 0;
    u32 r1_17 = 0;
    u32 r2_18 = 0;
    u32 r3_19 = 0;
    u32 r0_38 = 0;
    u32 r0_39 = 0;
    u32 r1_18 = 0;
    u32 r2_19 = 0;
    u32 r3_20 = 0;
    u32 r0_40 = 0;
    u32 r0_41 = 0;
    u32 r1_19 = 0;
    u32 r2_20 = 0;
    u32 r3_21 = 0;
    u32 r0_42 = 0;
    guest::cpu()->r[13] -= 8u;
    r3_1 = 0x8f3030u + 0x70u;  // (from the original)
    arg0->word_a4 = u32(r3_1 + 0x104u);  // (from the original)
    arg0->word_0 = u32(0x8f3030u);  // (from the original)
    arg0->word_28 = u32(r3_1);
    r4_1 = r0 + 0x2990u;  // (from the original)
    arg0->word_25f8 = u32(0x8ee218u);  // (from the original)
    arg0->word_2a74 = u32(0x8ef22cu + 0x44u);  // (from the original)
    arg0->word_2990 = u32(0x8ef22cu);  // (from the original)
    r0_1 = r0 + 0x2aa8u;  // (from the original)
    call_002f76ac(r0_1, 0x2e0b3cu, 0x518u, 1u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_2 = call_002f770c(r4_1, r1_1, r2_1, r3_2);
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    *gptr<u32>(r0_2 - 0x398u) = u32(0x8f18f4u);  // (from the original)
    r0_3 = r0_2 - 0x248u;  // (from the original)
    r0_4 = call_00567ef0(r0_3, 0x8f18f4u, r2_2, r3_3);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_5 = r0_4 - 0x14cu;  // (from the original)
    r0_6 = call_005bf744(r0_5, r1_2, r2_3, r3_4);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_7 = r0_6 - 0xe8u;  // (from the original)
    r0_8 = call_002f7710(r0_7, r1_3, r2_4, r3_5);
    r4_2 = r0_8 - 0x2514u;  // (from the original)
    r0_9 = r0_8 - 0x1c0u;  // (from the original)
    call_002f76ac(r0_9, 0x2b6ef8u, 0xe0u, 2u);  // (from the original)
    r0_10 = r4_2 + 0x17b4u;  // (from the original)
    call_002f76ac(r0_10, 0x200a2cu, 0x3e0u, 3u);  // (from the original)
    r0_11 = r4_2 + 0xb0cu;  // (from the original)
    call_002f76ac(r0_11, 0x2b7f50u, 0x21cu, 6u);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_12 = r4_2 + 0xa7cu;  // (from the original)
    r0_13 = call_0056988c(r0_12, r1_4, r2_5, r3_6);
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_14 = r0_13 - 0x28u;  // (from the original)
    r0_15 = call_0056988c(r0_14, r1_5, r2_6, r3_7);
    r1_6 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_16 = r0_15 - 0x14cu;  // (from the original)
    r0_17 = call_005bf744(r0_16, r1_6, r2_7, r3_8);
    r1_7 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_18 = r0_17 - 0x28u;  // (from the original)
    r0_19 = call_0056988c(r0_18, r1_7, r2_8, r3_9);
    r1_8 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_20 = r0_19 - 0x28u;  // (from the original)
    r0_21 = call_0056988c(r0_20, r1_8, r2_9, r3_10);
    r1_9 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_22 = r0_21 - 0x14cu;  // (from the original)
    r0_23 = call_005bf744(r0_22, r1_9, r2_10, r3_11);
    r1_10 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_24 = r0_23 - 0x28u;  // (from the original)
    r0_25 = call_0056988c(r0_24, r1_10, r2_11, r3_12);
    r1_11 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_26 = r0_25 - 0x28u;  // (from the original)
    r0_27 = call_0056988c(r0_26, r1_11, r2_12, r3_13);
    r1_12 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_28 = r0_27 - 0x28u;  // (from the original)
    r0_29 = call_0056988c(r0_28, r1_12, r2_13, r3_14);
    r1_13 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r0_30 = r0_29 - 0x28u;  // (from the original)
    r0_31 = call_0056988c(r0_30, r1_13, r2_14, r3_15);
    r1_14 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    r0_32 = r0_31 - 0x28u;  // (from the original)
    r0_33 = call_0056988c(r0_32, r1_14, r2_15, r3_16);
    r1_15 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    r0_34 = r0_33 - 0x14cu;  // (from the original)
    r0_35 = call_005bf744(r0_34, r1_15, r2_16, r3_17);
    r1_16 = guest::cpu()->r[1];
    r2_17 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    r0_36 = r0_35 - 0x248u;  // (from the original)
    r0_37 = call_00567ef0(r0_36, r1_16, r2_17, r3_18);
    r1_17 = guest::cpu()->r[1];
    r2_18 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    r0_38 = r0_37 - 0x248u;  // (from the original)
    r0_39 = call_00567ef0(r0_38, r1_17, r2_18, r3_19);
    r1_18 = guest::cpu()->r[1];
    r2_19 = guest::cpu()->r[2];
    r3_20 = guest::cpu()->r[3];
    r0_40 = r0_39 - 0xa0u;  // (from the original)
    r0_41 = call_003170d0(r0_40, r1_18, r2_19, r3_20);
    r1_19 = guest::cpu()->r[1];
    r2_20 = guest::cpu()->r[2];
    r3_21 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 8u;
    r0_42 = r0_41 - 0x28u;  // (from the original)
    return call_006aaa30(r0_42, r1_19, r2_20, r3_21);
}

}  // namespace d_002d9aa0
GUEST_EXPORT(0x002d9aa0, d_002d9aa0::f_002d9aa0);

// f_002da33c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002da33c {

inline guest::global<u32, 0x002da3a8> global_002da3a8;  // (from the original)
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)

u32 f_002da33c(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3, float S0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    float S0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_2 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_3 = 0;
    u32 r0_5 = 0;
    float S0_4 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0x50u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0_2 = call_004b4fc0(r0_1, 0x2da3a0u, 1u, r3);  // (from the original)
    S0_1 = guest::cpu()->s[0];
    r1_1 = r0 + 0x3e4u;  // (from the original)
    r0_3 = r0 + 0x50u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    call_00568630(r0_3, r1_1, r0_2, 0u);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_2 = std::bit_cast<float>(*global_002da3a8);
    r0_4 = r0 + 0x3e4u;  // (from the original)
    guest::cpu()->s[0] = S0_2;
    call_005697e0(r0_4, r1_2, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    r0_5 = r0 + 0x50u;  // (from the original)
    guest::cpu()->s[0] = S0_3;
    call_00568c10(r0_5, r1_3, r2_2, r3_2);
    S0_4 = guest::cpu()->s[0];
    *gptr<u32>(r0 + 0x6b4u) = u32(*gptr<u32>(r0 + 0x6b4u) | 8u);  // (from the original)
    *gptr<u8>(r0 + 0x7a6u) = u8(0u);  // (from the original)
    *gptr<u8>(r0 + 0x7a8u) = u8(1u);  // (from the original)
    *gptr<u8>(r0 + 0x7a7u) = u8(1u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0u;
    guest::cpu()->s[0] = S0_4;
    return 1u;
}

}  // namespace d_002da33c
GUEST_EXPORT(0x002da33c, d_002da33c::f_002da33c);

// f_002da424: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002da424 {

struct __attribute__((packed)) Object_002da424_0 {
    u8 unknown_0[0x7a7];  // (not used here)
    u8 byte_7a7;
    u8 byte_7a8;
};
GUEST_OFFSET(Object_002da424_0, byte_7a7, 0x7a7);  // (from the original)
GUEST_OFFSET(Object_002da424_0, byte_7a8, 0x7a8);  // (from the original)

inline constexpr guest::Function<0x002f6b14, u32(u32, u32, u32, u32)> call_002f6b14;  // (from the original)
inline constexpr guest::Function<0x002f6e14, u32(u32, u32, u32, u32)> call_002f6e14;  // (from the original)
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)
inline constexpr guest::Function<0x00569544, u32(u32, u32, u32, u32)> call_00569544;  // (from the original)
inline constexpr guest::Function<0x0074fdd0, u32(u32, u32, u32, u32)> call_0074fdd0;  // (from the original)

u32 f_002da424(gptr<Object_002da424_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_7 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_5 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = r0;
    r0_1 = r0 + 0x700u;  // (from the original)
    r1 = u32(arg0->byte_7a7);
    if (r1 == 0) {
        goto L_2da4b0;
    }
    r7 = 0u;
    r6 = 1u;
    if (u32(arg0->byte_7a8) == 1u) {
        goto L_2da4b4;
    }
    r0_2 = r4 + 0x40cu;  // (from the original)
    r0_3 = call_0074fdd0(r0_2, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        goto L_2da504;
    }
    r0_4 = r4 + 0x50u;  // (from the original)
    r0_5 = call_004b4fc0(r0_4, 0x84ac28u, 1u, r3_1);  // (from the original)
    r0_6 = r4 + 0x50u;  // (from the original)
    call_00568984(r0_6, r0_2, r0_5, 0u);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_7 = r4 + 0x5e0u;  // (from the original)
    call_002f6e14(r0_7, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_8 = r4 + 0x5e0u;  // (from the original)
    call_002f6b14(r0_8, r1_3, r2_3, r3_3);
    r1 = guest::cpu()->r[1];
L_2da49c:;
    r0_1 = *gptr<u32>(r4 + 0x6b4u) & ~8u;  // (from the original)
    *gptr<u32>(r4 + 0x6b4u) = u32(r0_1);  // (from the original)
    *gptr<u8>(r4 + 0x7a6u) = u8(r6);  // (from the original)
    *gptr<u8>(r4 + 0x7a7u) = u8(r7);  // (from the original)
L_2da4b0:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
L_2da4b4:;
    r0_9 = r4 + 0x3e4u;  // (from the original)
    r0_10 = call_0074fdd0(r0_9, r1, r2, r3);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_10 != 0) {
        r0_11 = r4 + 0x50u;  // (from the original)
        r0_12 = call_004b4fc0(r0_11, 0x84ac28u, 1u, r3_4);  // (from the original)
        r1_5 = r4 + 0x3e4u;  // (from the original)
        r0_13 = r4 + 0x50u;  // (from the original)
        call_00568984(r0_13, r1_5, r0_12, 0u);
        r1 = guest::cpu()->r[1];
        guest::preempt();
        goto L_2da49c;
    }
    r0_14 = r4 + 0x3e4u;  // (from the original)
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return call_00569544(r0_14, r1_4, r2_4, r3_4);
L_2da504:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return call_00569544(r0_2, r1_1, r2_1, r3_1);
}

}  // namespace d_002da424
GUEST_EXPORT(0x002da424, d_002da424::f_002da424);

// f_002db05c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002db05c {

inline guest::global<u32, 0x00aaf14c> global_00aaf14c;  // (from the original)
inline constexpr guest::Function<0x002f7804, u32(u32, u32, u32, u32)> call_002f7804;  // (from the original)
inline constexpr guest::Function<0x0032069c, u32(u32, u32, u32, u32)> call_0032069c;  // (from the original)
inline constexpr guest::Function<0x003206bc, u32(u32, u32, u32, u32)> call_003206bc;  // (from the original)
inline constexpr guest::Function<0x0070bd30, u32(u32, u32, u32, u32)> call_0070bd30;  // (from the original)
inline constexpr guest::Function<0x0070bd74, u32(u32, u32, u32, u32)> call_0070bd74;  // (from the original)
inline constexpr guest::Function<0x00712838, u32(u32, u32, u32, u32)> call_00712838;  // (from the original)
inline constexpr guest::Function<0x00712850, u32(u32, u32, u32, u32)> call_00712850;  // (from the original)
inline constexpr guest::Function<0x0072382c, u32(u32, u32, u32, u32)> call_0072382c;  // (from the original)

u32 f_002db05c(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r6_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r0_4 = 0;
    u32 r4_1 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 r4_2 = 0;
    u32 r1_5 = 0;
    u32 r2_4 = 0;
    u32 r0_5 = 0;
    u32 r2_5 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = r0 + 0x20acu;  // (from the original)
    r0_2 = call_0072382c(r0_1, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_2 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_002f7804(r0_1, r1, r2_1, guest::cpu()->r[3]);
    }
    if (r1 >> 0x1f != (r1 & (r1 ^ r1)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    if (r1 >= 0xau) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    r1_2 = r1 & 0xffu;  // (from the original)
    r6_1 = *global_00aaf14c + 0x2cu;  // (from the original)
    r0_3 = call_00712850(r6_1, r1_2, r2_1, guest::cpu()->r[3]);
    r2_2 = guest::cpu()->r[2];
    r0_4 = call_00712838(r6_1, r0_3, r2_2, guest::cpu()->r[3]);
    r4_1 = r0 + (r1 + (r1 << 3) + (r1 << 5) << 4);
    r1_3 = *gptr<u32>(r4_1 + 0x988u);  // (from the original)
    call_0070bd74(r0_4, r1_3, 1u, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r4_2 = r4_1 + 0x70cu;  // (from the original)
    call_003206bc(r4_2, r1_4, r2_3, guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r0_5 = call_0070bd30(r0_4, r1_5, r2_4, guest::cpu()->r[3]);
    r2_5 = guest::cpu()->r[2];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0032069c(r4_2, r0_5, r2_5, guest::cpu()->r[3]);
}

}  // namespace d_002db05c
GUEST_EXPORT(0x002db05c, d_002db05c::f_002db05c);

// f_002db118: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002db118 {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x0056d5dc, u32(u32, u32, u32, u32)> call_0056d5dc;  // (from the original)
inline constexpr guest::Function<0x005d4a68, u32(u32, u32, u32, u32)> call_005d4a68;  // (from the original)
inline constexpr guest::Function<0x005d4a78, u32(u32, u32, u32, u32)> call_005d4a78;  // (from the original)
inline constexpr guest::Function<0x005e34c4, u32(u32, u32, u32, u32)> call_005e34c4;  // (from the original)
inline constexpr guest::Function<0x005e4988, u32(u32, u32, u32, u32)> call_005e4988;  // (from the original)
inline constexpr guest::Function<0x005e4994, u32(u32, u32, u32, u32)> call_005e4994;  // (from the original)
inline constexpr guest::Function<0x005e49c0, u32(u32, u32, u32, u32)> call_005e49c0;  // (from the original)
inline constexpr guest::Function<0x005e8498, u32(u32, u32, u32, u32)> call_005e8498;  // (from the original)
inline constexpr guest::Function<0x0071af38, u32(u32, u32, u32, u32)> call_0071af38;  // (from the original)
inline constexpr guest::Function<0x00720448, u32(u32, u32, u32, u32)> call_00720448;  // (from the original)

u32 f_002db118(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r1_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r0_9 = 0;
    u32 r3_4 = 0;
    u32 r0_10 = 0;
    u32 r2_4 = 0;
    u32 r0_11 = 0;
    u32 r1_2 = 0;
    u32 r2_5 = 0;
    u32 r0_12 = 0;
    u32 r1_3 = 0;
    u32 r2_6 = 0;
    u32 r3_5 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_4 = 0;
    u32 r0_16 = 0;
    r5 = r0;
    r13 = r13 - 0x120u;  // (from the original)
    r0_1 = r0 + 0x4b4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_0071af38(r0_1, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_3 = call_00720448(r5, r0_2, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_4 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0056d5dc(r0_4, r0_3, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r1_1 = r13 + 0xcu;  // (from the original)
    r0_5 = r5 + 0x5000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e8498(r0_5, r1_1, r2_3, r3_3);
    r0_6 = r13 + 0xa8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00301d0c(r0_6, 0x5e35dcu, 0x20u, 3u);  // (from the original)
    r4 = 0u;
    *gptr<u32>(r13 + 8u) = u32(7u);
    r0_7 = r13 + 0xa8u;  // (from the original)
    *gptr<u32>(r13) = u32(r4);
    *gptr<u32>(r13 + 4u) = u32(r4);
    guest::cpu()->r[13] = r13;
    call_005e34c4(r0_7, 0x852400u, 0x34u, r4);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(9u);
    r6 = r13 + 0xa8u;  // (from the original)
    r0_8 = r13 + 0xc8u;  // (from the original)
    *gptr<u32>(r13) = u32(r4);
    *gptr<u32>(r13 + 4) = u32(1u);
    guest::cpu()->r[13] = r13;
    call_005e34c4(r0_8, 0x852400u, 0x33u, 0u);  // (from the original)
    ea_1 = r13;
    *gptr<u32>(ea_1) = u32(r4);
    ea_2 = r13 + 4u;
    *gptr<u32>(ea_2) = u32(2u);
    *gptr<u32>(ea_2 + 4) = u32(1u);
    r0_9 = r6 + 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e34c4(r0_9, 0x852400u, 0xbu, 0u);  // (from the original)
    r3_4 = guest::cpu()->r[3];
    r0_10 = r5 + 0x5000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e49c0(r0_10, 3u, 2u, r3_4);
    r3 = guest::cpu()->r[3];
    do {
L_2db1ec:;
        r2_4 = r6 + (r4 << 5);
        r0_11 = r5 + 0x5000u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_005e4994(r0_11, r4, r2_4, r3);
        r1_2 = guest::cpu()->r[1];
        r2_5 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 3u);
    r0_12 = r5 + 0x5000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e4988(r0_12, r1_2, r2_5, r3);
    r1_3 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_13 = r5 + 0x5000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005d4a68(r0_13, r1_3, r2_6, r3_5);
    r0_14 = r5 + 0x5000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005d4a78(r0_14, 0u, 0u, 0u);
    r0_15 = r13 + 0xa8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_15, 0x5e3618u, 0x20u, 3u);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 0x7cu) = u32(0x90a3e8u);  // (from the original)
    *gptr<u32>(r13 + 0x50u) = u32(0x90a3e8u);  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(0x909d20u);  // (from the original)
    r0_16 = r13 + 0xcu;  // (from the original)
    r13 = r13 + 0x120u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return r0_16;
}

}  // namespace d_002db118
GUEST_EXPORT(0x002db118, d_002db118::f_002db118);

// f_002db340: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002db340 {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x0056d5dc, u32(u32, u32, u32, u32)> call_0056d5dc;  // (from the original)
inline constexpr guest::Function<0x005d4a78, u32(u32, u32, u32, u32)> call_005d4a78;  // (from the original)
inline constexpr guest::Function<0x005e34c4, u32(u32, u32, u32, u32)> call_005e34c4;  // (from the original)
inline constexpr guest::Function<0x005e4988, u32(u32, u32, u32, u32)> call_005e4988;  // (from the original)
inline constexpr guest::Function<0x005e4994, u32(u32, u32, u32, u32)> call_005e4994;  // (from the original)
inline constexpr guest::Function<0x005e49c0, u32(u32, u32, u32, u32)> call_005e49c0;  // (from the original)
inline constexpr guest::Function<0x005e8498, u32(u32, u32, u32, u32)> call_005e8498;  // (from the original)
inline constexpr guest::Function<0x00720448, u32(u32, u32, u32, u32)> call_00720448;  // (from the original)
inline constexpr guest::Function<0x0072355c, u32(u32, u32, u32, u32)> call_0072355c;  // (from the original)

u32 f_002db340(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r1_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r3_4 = 0;
    u32 r0_9 = 0;
    u32 r2_4 = 0;
    u32 r0_10 = 0;
    u32 r1_2 = 0;
    u32 r2_5 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r1_3 = 0;
    u32 r0_14 = 0;
    r5 = r0;
    r13 = r13 - 0xf8u;  // (from the original)
    r0_1 = r0 + 0x4b4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_0072355c(r0_1, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_3 = call_00720448(r5, r0_2, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_4 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0056d5dc(r0_4, r0_3, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r1_1 = r13 + 0xcu;  // (from the original)
    r0_5 = r5 + 0x5000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e8498(r0_5, r1_1, r2_3, r3_3);
    r0_6 = r13 + 0xa8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00301d0c(r0_6, 0x5e35dcu, 0x20u, 2u);  // (from the original)
    r4 = 0u;
    *gptr<u32>(r13 + 8u) = u32(7u);
    r0_7 = r13 + 0xa8u;  // (from the original)
    *gptr<u32>(r13) = u32(r4);
    *gptr<u32>(r13 + 4u) = u32(r4);
    guest::cpu()->r[13] = r13;
    call_005e34c4(r0_7, 0x852400u, 0x54u, r4);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(1u);
    *gptr<u32>(r13 + 8u) = u32(1u);
    r6 = r13 + 0xa8u;  // (from the original)
    r0_8 = r13 + 0xc8u;  // (from the original)
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    call_005e34c4(r0_8, 0x852400u, 0xbu, 0u);  // (from the original)
    r3_4 = guest::cpu()->r[3];
    r0_9 = r5 + 0x5000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e49c0(r0_9, 2u, 1u, r3_4);
    r3 = guest::cpu()->r[3];
    do {
L_2db3f0:;
        r2_4 = r6 + (r4 << 5);
        r0_10 = r5 + 0x5000u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_005e4994(r0_10, r4, r2_4, r3);
        r1_2 = guest::cpu()->r[1];
        r2_5 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 2u);
    r0_11 = r5 + 0x5000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e4988(r0_11, r1_2, r2_5, r3);
    r0_12 = r5 + 0x5000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005d4a78(r0_12, 0u, 0u, 0u);
    r0_13 = r13 + 0xa8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_13, 0x5e3618u, 0x20u, 2u);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 0x7cu) = u32(0x90a3e8u);  // (from the original)
    *gptr<u32>(r13 + 0x50u) = u32(0x90a3e8u);  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(0x909d20u);  // (from the original)
    r0_14 = r13 + 0xcu;  // (from the original)
    r13 = r13 + 0xf8u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_14;
}

}  // namespace d_002db340
GUEST_EXPORT(0x002db340, d_002db340::f_002db340);

// f_002dc90c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002dc90c {

struct __attribute__((packed)) Object_002dc90c_0 {
    u32 word_0;
    u8 unknown_4[0x24];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0x78];  // (not used here)
    u32 word_a4;
};
GUEST_OFFSET(Object_002dc90c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002dc90c_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_002dc90c_0, word_a4, 0xa4);  // (from the original)

inline constexpr guest::Function<0x002684c0, u32(u32, u32, u32, u32)> call_002684c0;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x003170d0, u32(u32, u32, u32, u32)> call_003170d0;  // (from the original)
inline constexpr guest::Function<0x00317dec, u32(u32, u32, u32, u32)> call_00317dec;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)
inline constexpr guest::Function<0x005e8a7c, u32(u32, u32, u32, u32)> call_005e8a7c;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32, u32, u32)> call_006aaa30;  // (from the original)

u32 f_002dc90c(gptr<Object_002dc90c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_6 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r4_1 = 0;
    u32 r0_13 = 0;
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    u32 r3_7 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r2_7 = 0;
    u32 r0_17 = 0;
    u32 r6_1 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r1_7 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r1_8 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r1_9 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r1_10 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r0_27 = 0;
    u32 r0_28 = 0;
    u32 r1_11 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r0_29 = 0;
    u32 r0_30 = 0;
    u32 r1_12 = 0;
    u32 r2_13 = 0;
    u32 r3_13 = 0;
    u32 r0_31 = 0;
    u32 r0_32 = 0;
    u32 r4_2 = 0;
    u32 r0_33 = 0;
    u32 r1_13 = 0;
    u32 r2_14 = 0;
    u32 r3_14 = 0;
    u32 r0_34 = 0;
    u32 r0_35 = 0;
    u32 r1_14 = 0;
    u32 r2_15 = 0;
    u32 r3_15 = 0;
    u32 r0_36 = 0;
    u32 r0_37 = 0;
    u32 r0_38 = 0;
    u32 r1_15 = 0;
    u32 r2_16 = 0;
    u32 r3_16 = 0;
    u32 r4_3 = 0;
    u32 r0_39 = 0;
    u32 r0_40 = 0;
    u32 r1_16 = 0;
    u32 r2_17 = 0;
    u32 r3_17 = 0;
    u32 r0_41 = 0;
    u32 r0_42 = 0;
    u32 r1_17 = 0;
    u32 r2_18 = 0;
    u32 r3_18 = 0;
    u32 r0_43 = 0;
    u32 r0_44 = 0;
    u32 r1_18 = 0;
    u32 r2_19 = 0;
    u32 r3_19 = 0;
    u32 r0_45 = 0;
    u32 r0_46 = 0;
    u32 r1_19 = 0;
    u32 r2_20 = 0;
    u32 r3_20 = 0;
    u32 r0_47 = 0;
    u32 r0_48 = 0;
    u32 r1_20 = 0;
    u32 r2_21 = 0;
    u32 r3_21 = 0;
    u32 r0_49 = 0;
    u32 r0_50 = 0;
    u32 r1_21 = 0;
    u32 r2_22 = 0;
    u32 r3_22 = 0;
    u32 r0_51 = 0;
    u32 r0_52 = 0;
    u32 r2_23 = 0;
    u32 r3_23 = 0;
    u32 ea_1 = 0;
    u32 r0_53 = 0;
    u32 r1_22 = 0;
    u32 r2_24 = 0;
    u32 r3_24 = 0;
    u32 r0_54 = 0;
    u32 r0_55 = 0;
    u32 r1_23 = 0;
    u32 r2_25 = 0;
    u32 r3_25 = 0;
    u32 r0_56 = 0;
    u32 r0_57 = 0;
    u32 r1_24 = 0;
    u32 r2_26 = 0;
    u32 r3_26 = 0;
    u32 r0_58 = 0;
    u32 r0_59 = 0;
    u32 r1_25 = 0;
    u32 r2_27 = 0;
    u32 r3_27 = 0;
    u32 r0_60 = 0;
    u32 r0_61 = 0;
    u32 r1_26 = 0;
    u32 r2_28 = 0;
    u32 r3_28 = 0;
    u32 r0_62 = 0;
    u32 r0_63 = 0;
    u32 r1_27 = 0;
    u32 r2_29 = 0;
    u32 r3_29 = 0;
    u32 r0_64 = 0;
    u32 r0_65 = 0;
    u32 r1_28 = 0;
    u32 r2_30 = 0;
    u32 r3_30 = 0;
    u32 r0_66 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r1_1 = 0x8f32a4u + 0x6cu;  // (from the original)
    arg0->word_28 = u32(r1_1);
    r3_1 = 0x8f32a4u + 0x170u;  // (from the original)
    arg0->word_0 = u32(0x8f32a4u);  // (from the original)
    arg0->word_a4 = u32(r3_1);
    r0_1 = r0 + 0x5000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_005e8a7c(r0_1, r1_1, 0x8f32a4u, r3_1);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u32>(r0_2 - 0x4f0u) = u32(0x8f47a0u);  // (from the original)
    r0_3 = r0_2 - 0xd4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_005e3194(r0_3, 0x8f47a0u, r2_1, r3_2);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = r0_4 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_0056988c(r0_5, r1_2, r2_2, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_7 = r0_6 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_0056988c(r0_7, r1_3, r2_3, r3_4);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_9 = r0_8 - 0x15cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_005bf744(r0_9, r1_4, r2_4, r3_5);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_11 = r0_10 - 0x24cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_12 = call_00567ef0(r0_11, r1_5, r2_5, r3_6);
    r4_1 = r0_12 - 0x4b34u;  // (from the original)
    r0_13 = r0_12 - 0x568u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_13, 0x2b6ef8u, 0xe0u, 6u);  // (from the original)
    r1_6 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_14 = r4_1 + 0x44e8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_15 = call_002f7710(r0_14, r1_6, r2_6, r3_7);
    r0_16 = r0_15 - 0x243cu;  // (from the original)
    r2_7 = 0x8f3ef4u + 0x2cu;  // (from the original)
    *gptr<u32>(r0_16 + 0xa40u) = u32(r2_7);  // (from the original)
    *gptr<u32>(r0_16) = u32(0x8f3ef4u);  // (from the original)
    *gptr<u32>(0x1888u + r0_16) = u32(0x8f3ef4u + 0x40u);  // (from the original)
    r0_17 = r0_16 + 0x22f4u;  // (from the original)
    r6_1 = 0x8ee248u + 0x10u;  // (from the original)
    *gptr<u32>(r0_17) = u32(0x8ee248u);  // (from the original)
    r0_18 = r0_17 + 0xcu;  // (from the original)
    *gptr<u32>(r0_18) = u32(r6_1);
    r0_19 = r0_18 + 0x108u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_20 = call_0056988c(r0_19, 0x1888u, r2_7, 0x8f3ef4u);  // (from the original)
    r1_7 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_21 = r0_20 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_22 = call_0056988c(r0_21, r1_7, r2_8, r3_8);
    r1_8 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_23 = r0_22 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_24 = call_0056988c(r0_23, r1_8, r2_9, r3_9);
    r1_9 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_25 = r0_24 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_26 = call_0056988c(r0_25, r1_9, r2_10, r3_10);
    r1_10 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_27 = r0_26 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_28 = call_0056988c(r0_27, r1_10, r2_11, r3_11);
    r1_11 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_29 = r0_28 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_30 = call_0056988c(r0_29, r1_11, r2_12, r3_12);
    r1_12 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_31 = r0_30 - 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_32 = call_0056988c(r0_31, r1_12, r2_13, r3_13);
    r4_2 = r0_32 - 0x2314u;  // (from the original)
    r0_33 = r0_32 - 0xa60u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_33, 0x320b0cu, 0x290u, 4u);  // (from the original)
    r1_13 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_34 = r4_2 + 0x18acu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_35 = call_00317dec(r0_34, r1_13, r2_14, r3_14);
    r1_14 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r0_36 = r0_35 - 0x18acu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_37 = call_002684c0(r0_36, r1_14, r2_15, r3_15);
    r0_38 = r0_37 - 0x19a0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_38, 0x320b0cu, 0x290u, 0xau);  // (from the original)
    r1_15 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    r4_3 = r0_37 - 0x1ae0u;  // (from the original)
    r0_39 = r4_3 + 0x114u;  // (from the original)
    *gptr<u32>(r4_3) = u32(0x8ee248u);  // (from the original)
    *gptr<u32>(r4_3 + 0xcu) = u32(r6_1);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_40 = call_0056988c(r0_39, r1_15, r2_16, r3_16);
    r1_16 = guest::cpu()->r[1];
    r2_17 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    r0_41 = r0_40 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_42 = call_0056988c(r0_41, r1_16, r2_17, r3_17);
    r1_17 = guest::cpu()->r[1];
    r2_18 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    r0_43 = r0_42 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_44 = call_0056988c(r0_43, r1_17, r2_18, r3_18);
    r1_18 = guest::cpu()->r[1];
    r2_19 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    r0_45 = r0_44 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_46 = call_0056988c(r0_45, r1_18, r2_19, r3_19);
    r1_19 = guest::cpu()->r[1];
    r2_20 = guest::cpu()->r[2];
    r3_20 = guest::cpu()->r[3];
    r0_47 = r0_46 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_48 = call_0056988c(r0_47, r1_19, r2_20, r3_20);
    r1_20 = guest::cpu()->r[1];
    r2_21 = guest::cpu()->r[2];
    r3_21 = guest::cpu()->r[3];
    r0_49 = r0_48 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_50 = call_0056988c(r0_49, r1_20, r2_21, r3_21);
    r1_21 = guest::cpu()->r[1];
    r2_22 = guest::cpu()->r[2];
    r3_22 = guest::cpu()->r[3];
    r0_51 = r0_50 - 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_52 = call_0056988c(r0_51, r1_21, r2_22, r3_22);
    r2_23 = guest::cpu()->r[2];
    r3_23 = guest::cpu()->r[3];
    ea_1 = r0_52 - 0x138u;  // (from the original)
    *gptr<u32>(ea_1) = u32(0x8f08acu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_53 = call_002f7710(ea_1, 0x8f08acu, r2_23, r3_23);  // (from the original)
    r1_22 = guest::cpu()->r[1];
    r2_24 = guest::cpu()->r[2];
    r3_24 = guest::cpu()->r[3];
    r0_54 = r0_53 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_55 = call_0056988c(r0_54, r1_22, r2_24, r3_24);
    r1_23 = guest::cpu()->r[1];
    r2_25 = guest::cpu()->r[2];
    r3_25 = guest::cpu()->r[3];
    r0_56 = r0_55 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_57 = call_0056988c(r0_56, r1_23, r2_25, r3_25);
    r1_24 = guest::cpu()->r[1];
    r2_26 = guest::cpu()->r[2];
    r3_26 = guest::cpu()->r[3];
    r0_58 = r0_57 - 8u;
    guest::cpu()->r[13] = r13;
    r0_59 = call_00317dec(r0_58, r1_24, r2_26, r3_26);
    r1_25 = guest::cpu()->r[1];
    r2_27 = guest::cpu()->r[2];
    r3_27 = guest::cpu()->r[3];
    r0_60 = r0_59 - 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_61 = call_005bf744(r0_60, r1_25, r2_27, r3_27);
    r1_26 = guest::cpu()->r[1];
    r2_28 = guest::cpu()->r[2];
    r3_28 = guest::cpu()->r[3];
    r0_62 = r0_61 - 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_63 = call_00567ef0(r0_62, r1_26, r2_28, r3_28);
    r1_27 = guest::cpu()->r[1];
    r2_29 = guest::cpu()->r[2];
    r3_29 = guest::cpu()->r[3];
    r0_64 = r0_63 - 0xa0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_65 = call_003170d0(r0_64, r1_27, r2_29, r3_29);
    r1_28 = guest::cpu()->r[1];
    r2_30 = guest::cpu()->r[2];
    r3_30 = guest::cpu()->r[3];
    r13 = r13 + 0x10;  // (from the original)
    r0_66 = r0_65 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_006aaa30(r0_66, r1_28, r2_30, r3_30);
}

}  // namespace d_002dc90c
GUEST_EXPORT(0x002dc90c, d_002dc90c::f_002dc90c);

// f_002ddbac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ddbac {

struct __attribute__((packed)) Object_002ddbac_0 {
    u32 word_0;
    u8 unknown_4[0x24];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0xad28];  // (not used here)
    u32 word_ad54;
};
GUEST_OFFSET(Object_002ddbac_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002ddbac_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_002ddbac_0, word_ad54, 0xad54);  // (from the original)

inline constexpr guest::Function<0x0022c5d8, u32(u32, u32, u32, u32)> call_0022c5d8;  // (from the original)
inline constexpr guest::Function<0x0026fe3c, u32(u32, u32, u32, u32)> call_0026fe3c;  // (from the original)
inline constexpr guest::Function<0x002b79e8, u32(u32, u32, u32, u32)> call_002b79e8;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32, u32, u32)> call_006aaa30;  // (from the original)

u32 f_002ddbac(gptr<Object_002ddbac_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r2_6 = 0;
    u32 r3_5 = 0;
    u32 ea_1 = 0;
    u32 r0_11 = 0;
    u32 r1_5 = 0;
    u32 r2_7 = 0;
    u32 r3_6 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r3_7 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_6 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r1_7 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r1_8 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r1_9 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r1_10 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r4_1 = 0;
    u32 r0_27 = 0;
    u32 r1_11 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r0_28 = 0;
    u32 r1_12 = 0;
    u32 r2_13 = 0;
    u32 r3_13 = 0;
    u32 r0_29 = 0;
    r13 = r13 - 8;
    r2_1 = 0x8f3428u + 0x6cu;  // (from the original)
    arg0->word_0 = u32(0x8f3428u);  // (from the original)
    arg0->word_28 = u32(r2_1);
    arg0->word_ad54 = u32(0x8f47a0u);  // (from the original)
    r0_1 = r0 + 0xb170u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_005e3194(r0_1, 0x8f47a0u, r2_1, r3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_3 = r0_2 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_0056988c(r0_3, r1_1, r2_2, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_5 = r0_4 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_0056988c(r0_5, r1_2, r2_3, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_7 = r0_6 - 0x15cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_005bf744(r0_7, r1_3, r2_4, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_9 = r0_8 - 0x24cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_00567ef0(r0_9, r1_4, r2_5, r3_4);
    r2_6 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    ea_1 = r0_10 - 0x13cu;  // (from the original)
    *gptr<u32>(ea_1) = u32(0x8f08acu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_11 = call_002f7710(ea_1, 0x8f08acu, r2_6, r3_5);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_12 = r0_11 - 0x8468u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_13 = call_0026fe3c(r0_12, r1_5, r2_7, r3_6);
    r3_7 = guest::cpu()->r[3];
    r0_14 = r0_13 - 0x2788u;  // (from the original)
    *gptr<u32>(r0_14) = u32(0x8f270cu);  // (from the original)
    r0_15 = r0_14 + 0x25a0u;  // (from the original)
    r1_6 = 0x8f2a0cu + 0x10u;  // (from the original)
    *gptr<u32>(r0_15) = u32(0x8f2a0cu);  // (from the original)
    r0_16 = r0_15 + 0xcu;  // (from the original)
    *gptr<u32>(r0_16) = u32(r1_6);
    r0_17 = r0_16 + 0x1acu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_18 = call_0056988c(r0_17, r1_6, 0x8f2a0cu, r3_7);  // (from the original)
    r1_7 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_19 = r0_18 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_20 = call_0056988c(r0_19, r1_7, r2_8, r3_8);
    r1_8 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_21 = r0_20 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_22 = call_0056988c(r0_21, r1_8, r2_9, r3_9);
    r1_9 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_23 = r0_22 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_24 = call_0056988c(r0_23, r1_9, r2_10, r3_10);
    r1_10 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_25 = r0_24 - 0x140u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_26 = call_0022c5d8(r0_25, r1_10, r2_11, r3_11);
    r4_1 = r0_26 - 0x25a0u;  // (from the original)
    r0_27 = r0_26 - (0x36cu << 3);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_27, 0x2b950cu, 0x36cu, 8u);  // (from the original)
    r1_11 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_28 = call_002b79e8(r4_1, r1_11, r2_12, r3_12);
    r1_12 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r13 = r13 + 8;
    r0_29 = r0_28 - 0x4cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_006aaa30(r0_29, r1_12, r2_13, r3_13);
}

}  // namespace d_002ddbac
GUEST_EXPORT(0x002ddbac, d_002ddbac::f_002ddbac);

// f_002dfa20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002dfa20 {

struct __attribute__((packed)) Object_002dfa20_0 {
    u32 word_0;
    u8 unknown_4[0x24];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(Object_002dfa20_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002dfa20_0, word_28, 0x28);  // (from the original)

inline constexpr guest::Function<0x0027460c, u32(u32, u32, u32, u32)> call_0027460c;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)
inline constexpr guest::Function<0x005e8a7c, u32(u32, u32, u32, u32)> call_005e8a7c;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32, u32, u32)> call_006aaa30;  // (from the original)

u32 f_002dfa20(gptr<Object_002dfa20_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_3 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_4 = 0;
    u32 r2_6 = 0;
    u32 r3_5 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_5 = 0;
    u32 r2_7 = 0;
    u32 r3_6 = 0;
    u32 ea_1 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r2_8 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r1_6 = 0;
    u32 r2_9 = 0;
    u32 r3_7 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r1_7 = 0;
    u32 r2_10 = 0;
    u32 r3_8 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r2_11 = 0;
    u32 r3_9 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r3_10 = 0;
    u32 r1_8 = 0;
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    u32 r1_9 = 0;
    u32 r2_12 = 0;
    u32 r3_11 = 0;
    u32 r0_26 = 0;
    u32 r0_27 = 0;
    u32 r1_10 = 0;
    u32 r2_13 = 0;
    u32 r3_12 = 0;
    u32 r0_28 = 0;
    u32 r0_29 = 0;
    u32 r1_11 = 0;
    u32 r2_14 = 0;
    u32 r3_13 = 0;
    u32 r0_30 = 0;
    u32 r0_31 = 0;
    u32 r1_12 = 0;
    u32 r2_15 = 0;
    u32 r3_14 = 0;
    u32 r0_32 = 0;
    u32 r0_33 = 0;
    u32 r1_13 = 0;
    u32 r2_16 = 0;
    u32 r3_15 = 0;
    u32 r0_34 = 0;
    u32 r0_35 = 0;
    u32 r1_14 = 0;
    u32 r2_17 = 0;
    u32 r3_16 = 0;
    u32 r0_36 = 0;
    u32 r0_37 = 0;
    u32 r4_1 = 0;
    u32 r0_38 = 0;
    u32 r1_15 = 0;
    u32 r2_18 = 0;
    u32 r3_17 = 0;
    u32 r0_39 = 0;
    u32 r0_40 = 0;
    u32 r1_16 = 0;
    u32 r2_19 = 0;
    u32 r3_18 = 0;
    u32 r0_41 = 0;
    u32 r0_42 = 0;
    u32 r1_17 = 0;
    u32 r2_20 = 0;
    u32 r3_19 = 0;
    u32 r0_43 = 0;
    u32 r0_44 = 0;
    u32 r1_18 = 0;
    u32 r2_21 = 0;
    u32 r3_20 = 0;
    u32 r0_45 = 0;
    u32 r0_46 = 0;
    u32 r1_19 = 0;
    u32 r2_22 = 0;
    u32 r3_21 = 0;
    u32 r0_47 = 0;
    r13 = r13 - 8;
    r2_1 = 0x8f3514u + 0x6cu;  // (from the original)
    arg0->word_0 = u32(0x8f3514u);  // (from the original)
    arg0->word_28 = u32(r2_1);
    r0_1 = r0 + 0x5420u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_005e8a7c(r0_1, 0x8f3514u, r2_1, r3);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r0_2 - 0x4f0u) = u32(0x8f47a0u);  // (from the original)
    r0_3 = r0_2 - 0xd4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_005e3194(r0_3, 0x8f47a0u, r2_2, r3_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_5 = r0_4 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_0056988c(r0_5, r1_1, r2_3, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_7 = r0_6 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_0056988c(r0_7, r1_2, r2_4, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_9 = r0_8 - 0x15cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_005bf744(r0_9, r1_3, r2_5, r3_4);
    r1_4 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_11 = r0_10 - 0x24cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_12 = call_00567ef0(r0_11, r1_4, r2_6, r3_5);
    r1_5 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    ea_1 = r0_12 - 0x13cu;  // (from the original)
    *gptr<u32>(ea_1) = u32(0x8f08acu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_13 = call_002f7710(ea_1, r1_5, r2_7, r3_6);
    r0_14 = r0_13 - 0x21d8u;  // (from the original)
    r2_8 = 0x8f47ecu + 0x28u;  // (from the original)
    *gptr<u32>(r0_14) = u32(0x8f47ecu);  // (from the original)
    *gptr<u32>(0x213cu + r0_14) = u32(r2_8);  // (from the original)
    r0_15 = r0_14 + 0x21b0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_16 = call_0056988c(r0_15, 0x8f47ecu, r2_8, 0x213cu);  // (from the original)
    r1_6 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_17 = r0_16 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_18 = call_0056988c(r0_17, r1_6, r2_9, r3_7);
    r1_7 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_19 = r0_18 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_20 = call_0056988c(r0_19, r1_7, r2_10, r3_8);
    r2_11 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_21 = r0_20 - 0x2160u;  // (from the original)
    *gptr<u32>(r0_21) = u32(0x8f4828u);  // (from the original)
    r0_22 = r0_21 + 0x201cu;  // (from the original)
    *gptr<u32>(r0_22) = u32(0x8f08acu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_23 = call_002f7710(r0_22, 0x8f4828u, r2_11, r3_9);  // (from the original)
    r3_10 = guest::cpu()->r[3];
    r1_8 = 0x8ee248u + 0x10u;  // (from the original)
    *gptr<u32>(r0_23 - 0x134u) = u32(r1_8);  // (from the original)
    *gptr<u32>(r0_23 - 0x140u) = u32(0x8ee248u);  // (from the original)
    r0_24 = r0_23 - 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_25 = call_0056988c(r0_24, r1_8, 0x8ee248u, r3_10);  // (from the original)
    r1_9 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_26 = r0_25 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_27 = call_0056988c(r0_26, r1_9, r2_12, r3_11);
    r1_10 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_28 = r0_27 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_29 = call_0056988c(r0_28, r1_10, r2_13, r3_12);
    r1_11 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_30 = r0_29 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_31 = call_0056988c(r0_30, r1_11, r2_14, r3_13);
    r1_12 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_32 = r0_31 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_33 = call_0056988c(r0_32, r1_12, r2_15, r3_14);
    r1_13 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r0_34 = r0_33 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_35 = call_0056988c(r0_34, r1_13, r2_16, r3_15);
    r1_14 = guest::cpu()->r[1];
    r2_17 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    r0_36 = r0_35 - 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_37 = call_0056988c(r0_36, r1_14, r2_17, r3_16);
    r4_1 = r0_37 - 0x1efcu;  // (from the original)
    r0_38 = r0_37 - 0x1b28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_38, 0x2e3854u, 0x2b4u, 0xau);  // (from the original)
    r1_15 = guest::cpu()->r[1];
    r2_18 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    r0_39 = r4_1 + 0x3a8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_40 = call_0056988c(r0_39, r1_15, r2_18, r3_17);
    r1_16 = guest::cpu()->r[1];
    r2_19 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    r0_41 = r0_40 - 0x150u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_42 = call_005bf744(r0_41, r1_16, r2_19, r3_18);
    r1_17 = guest::cpu()->r[1];
    r2_20 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    r0_43 = r0_42 - 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_44 = call_00567ef0(r0_43, r1_17, r2_20, r3_19);
    r1_18 = guest::cpu()->r[1];
    r2_21 = guest::cpu()->r[2];
    r3_20 = guest::cpu()->r[3];
    r0_45 = r0_44 - 0x2c04u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_46 = call_0027460c(r0_45, r1_18, r2_21, r3_20);
    r1_19 = guest::cpu()->r[1];
    r2_22 = guest::cpu()->r[2];
    r3_21 = guest::cpu()->r[3];
    r13 = r13 + 8;
    r0_47 = r0_46 - 0x4cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_006aaa30(r0_47, r1_19, r2_22, r3_21);
}

}  // namespace d_002dfa20
GUEST_EXPORT(0x002dfa20, d_002dfa20::f_002dfa20);

// f_002dfbf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002dfbf0 {

struct __attribute__((packed)) Object_002dfbf0_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_002dfbf0_0, word_0, 0x0);  // (from the original)


u32 f_002dfbf0(gptr<Object_002dfbf0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r3_1 = 0;
    r3_1 = *gptr<u32>(arg0->word_0 + 0x1cu);  // (from the original)
    return guest::call_address<u32>(r3_1, r0, 0u, 0u, r3_1);
}

}  // namespace d_002dfbf0
GUEST_EXPORT(0x002dfbf0, d_002dfbf0::f_002dfbf0);
