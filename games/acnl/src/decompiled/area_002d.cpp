// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_002d00bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d00bc {

inline constexpr guest::Function<0x001ff92c, u32(u32, u32, u32, u32)> call_001ff92c;  // (from the original)

u32 f_002d00bc(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_001ff92c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x8f2a90u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 r0 = arg0.addr();
    guest::cpu()->r[13] -= 8u;
    r0 = u32(arg0->byte_0);
    r0 = call_002d0920(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        r0 = r0 + 0x668u;  // (from the original)
    }
    guest::cpu()->r[13] += 8u;
    return r0;
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
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = arg0->word_8;
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r4 + 0xcu;  // (from the original)
    if (*gptr<u32>(*gptr<u32>(*gptr<u32>(*gptr<u32>(arg0->word_0 - 0xcu) + r1) + 8u) + 0x6cu) != 0) {  // (from the original)
        r0 = r4 + 0x30u;  // (from the original)
        r0 = call_004ecb2c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    r0 = r4 + 0x10u;  // (from the original)
    r0 = call_004ecec8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 4u;
    guest::cpu()->r[13] += 8u;
    return call_004f1270(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
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
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    r4 = r1;
    r1 = arg1->word_4;
    arg0->word_0 = u32(r1);
    r1 = *gptr<u32>(r1 - 0xcu);  // (from the original)
    r2 = arg1->word_8;
    *gptr<u32>(r0 + r1) = u32(r2);
    r0 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_004edd3c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_004ecf18(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 1u;
    ea = r0 + 0x18u;  // (from the original)
    *gptr<u32>(ea) = u32(0x16u);  // (from the original)
    ea = r0 + 0x1cu;  // (from the original)
    *gptr<u8>(ea) = u8(r1);
    ea = r0 + 0x1du;  // (from the original)
    *gptr<u8>(ea) = u8(r1);
    ea = r4;
    r1 = *gptr<u32>(ea);
    ea = r0 - 0x10u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    r0 = ea;
    r1 = *gptr<u32>(r1 - 0xcu);  // (from the original)
    r2 = *gptr<u32>(r4 + 0xcu);  // (from the original)
    *gptr<u32>(r0 + r1) = u32(r2);
    r0 = r0 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_004ecb80(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x30u;  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002d0cf8
GUEST_EXPORT(0x002d0cf8, d_002d0cf8::f_002d0cf8);

// f_002d13e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d13e0 {

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
    u32 cf = 0;
    r4 = r0;
    r5 = r1;
    r0 = r0 + 0x10u;  // (from the original)
    r6 = r0 + (r5 << 4);
    if (r1 < 0x34u) {  // (from the original)
        r0 = r6;
    }
    r13 = r13 - 0x38u;  // (from the original)
    r0 = *gptr<u32>(r0);
    r7 = r2;
    if (r0 == 0) {
        goto L_2d1658;
    }
    r0 = r4 + 0x10u;  // (from the original)
    if (r5 < 0x34u) {  // (from the original)
        r0 = r6;
    }
    r2 = r7;
    *gptr<u32>(r0 + 4u) = u32(r7);
    r1 = r13;
    r0 = *gptr<u32>(0x94d080u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0013c1d4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x10u;  // (from the original)
    if (r5 < 0x34u) {  // (from the original)
        r0 = r6;
    }
    r2 = 1u;
    *gptr<u32>(r0 + 8u) = u32(*gptr<u32>(r13 + 0xcu));  // (from the original)
    r0 = *gptr<u32>(r4 + 0x36cu) + 1u;  // (from the original)
    *gptr<u32>(r4 + 0x36cu) = u32(r0);  // (from the original)
    if (u32(r0 >= 3u) && !u32(r0 == 3u)) {
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
        r1 = r4 + 0x350u;  // (from the original)
        if (r0 < 3u) {
            r1 = r1 + (r0 << 3);
        }
        r1 = *gptr<u32>(r1 + 4u);
        if (!(!u32(r1 >= r3) || u32(r1 == r3))) {
            cf = r0 >= 3u;
            r1 = r4 + 0x350u;  // (from the original)
            if (!cf) {
                r1 = r1 + (r0 << 3);
            }
            r3 = *gptr<u32>(r1 + 4u);
            r1 = r4 + 0x350u;  // (from the original)
            if (!cf) {
                r1 = r1 + (r0 << 3);
            }
            r12 = *gptr<u32>(r1);
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
        r3 = r4 + 0x350u;  // (from the original)
        if (r0 < 3u) {
            r3 = r3 + (r0 << 3);
        }
        r12 = r7;
        if (!(*gptr<u32>(r3) != r7)) {
            r1 = r12;
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
    r12 = r4 + 0x10u;  // (from the original)
    if (r0 < 0x34u) {  // (from the original)
        r12 = r12 + (r0 << 4);
    }
    if (u32(*gptr<u8>(r12 + 0xcu)) != 1u) {  // (from the original)
        goto L_2d1660;
    }
    r12 = r4 + 0x10u;  // (from the original)
    if (r0 < 0x34u) {  // (from the original)
        r12 = r12 + (r0 << 4);
    }
    if (*gptr<u32>(r12 + 4u) != r1) {
        goto L_2d1660;
    }
    r12 = r4 + 0x10u;  // (from the original)
    if (r0 < 0x34u) {  // (from the original)
        r12 = r12 + (r0 << 4);
    }
    r0 = 0u;
    *gptr<u8>(r12 + 0xcu) = u8(r14);  // (from the original)
    r12 = r1;
    do {
L_2d155c:;
        r1 = r4 + 0x350u;  // (from the original)
        if (r0 < 3u) {
            r1 = r1 + (r0 << 3);
        }
        if (!(*gptr<u32>(r1) != r12)) {
            cf = r0 >= 3u;
            r1 = r4 + 0x350u;  // (from the original)
            if (!cf) {
                r1 = r1 + (r0 << 3);
            }
            r12 = r4 + 0x350u;  // (from the original)
            if (!cf) {
                r12 = r12 + (r0 << 3);
            }
            *gptr<u32>(r1 + 4u) = u32(*gptr<u32>(r1 + 4u) - 1u);
            if (*gptr<u32>(r12 + 4u) != 0) {
                goto L_2d15c0;
            }
            r1 = r4 + 0x350u;  // (from the original)
            if (r0 < 3u) {
                r1 = r1 + (r0 << 3);
            }
            *gptr<u32>(r1) = u32(r3);
            goto L_2d15c0;
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (s32(r0) < s32(3u));
L_2d15c0:;
    r0 = r4 + 0x10u;  // (from the original)
    if (r5 < 0x34u) {  // (from the original)
        r0 = r6;
    }
    r1 = ~0x80000000u;  // (from the original)
    *gptr<u8>(r0 + 0xcu) = u8(r2);  // (from the original)
    r0 = 0u;
    do {
L_2d15d8:;
        r3 = r4 + 0x350u;  // (from the original)
        if (r0 < 3u) {
            r3 = r3 + (r0 << 3);
        }
        if (!(*gptr<u32>(r3) != r7)) {
            r1 = r4 + 0x350u;  // (from the original)
            if (r0 < 3u) {
                r1 = r1 + (r0 << 3);
            }
            *gptr<u32>(r1 + 4u) = u32(*gptr<u32>(r1 + 4u) + 1u);
            goto L_2d1654;
        }
        if (!(r1 + 0x80000001u != 0)) {  // (from the original)
            r3 = r4 + 0x350u;  // (from the original)
            if (r0 < 3u) {
                r3 = r3 + (r0 << 3);
            }
            if (*gptr<u32>(r3) + 1u == 0) {
                r1 = r0;
            }
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (s32(r0) < s32(3u));
    cf = r1 >= 3u;
    r0 = r4 + 0x350u;  // (from the original)
    if (!cf) {
        r0 = r0 + (r1 << 3);
    }
    *gptr<u32>(r0) = u32(r7);
    r0 = r4 + 0x350u;  // (from the original)
    if (!cf) {
        r0 = r0 + (r1 << 3);
    }
    *gptr<u32>(r0 + 4u) = u32(r2);
L_2d1654:;
    r0 = 1u;
L_2d1658:;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    r12 = r4 + 0x10u;  // (from the original)
    if (r0 < 0x34u) {  // (from the original)
        r12 = r12 + (r0 << 4);
    }
    if (u32(*gptr<u8>(r12 + 0xcu)) != 1u) {  // (from the original)
        goto L_2d16d0;
    }
    r12 = r4 + 0x10u;  // (from the original)
    if (r0 < 0x34u) {  // (from the original)
        r12 = r12 + (r0 << 4);
    }
    if (s32(*gptr<u32>(r12 + 8u)) >= s32(r8)) {
        goto L_2d16d0;
    }
    r12 = r4 + 0x10u;  // (from the original)
    if (r0 < 0x34u) {  // (from the original)
        r12 = r12 + (r0 << 4);
    }
    r1 = r0;
    r8 = *gptr<u32>(r12 + 8u);
L_2d16d0:;
    r0 = r0 + 1u;
    if (s32(r0) < s32(0x34u)) {  // (from the original)
        guest::preempt();
        goto L_2d168c;
    }
    r0 = r4 + 0x10u;  // (from the original)
    if (r5 < 0x34u) {  // (from the original)
        r0 = r6;
    }
    if (s32(*gptr<u32>(r0 + 8u)) < s32(r8)) {
        goto L_2d17a0;
    }
    cf = r1 >= 0x34u;  // (from the original)
    r0 = r4 + 0x10u;  // (from the original)
    if (!cf) {
        r0 = r0 + (r1 << 4);
    }
    *gptr<u8>(r0 + 0xcu) = u8(r14);  // (from the original)
    r0 = r4 + 0x10u;  // (from the original)
    if (!cf) {
        r0 = r0 + (r1 << 4);
    }
    r12 = *gptr<u32>(r0 + 4u);
    r0 = 0u;
    do {
L_2d1714:;
        r1 = r4 + 0x350u;  // (from the original)
        if (r0 < 3u) {
            r1 = r1 + (r0 << 3);
        }
        if (!(*gptr<u32>(r1) != r12)) {
            cf = r0 >= 3u;
            r1 = r4 + 0x350u;  // (from the original)
            if (!cf) {
                r1 = r1 + (r0 << 3);
            }
            r12 = r4 + 0x350u;  // (from the original)
            if (!cf) {
                r12 = r12 + (r0 << 3);
            }
            *gptr<u32>(r1 + 4u) = u32(*gptr<u32>(r1 + 4u) - 1u);
            if (*gptr<u32>(r12 + 4u) != 0) {
                goto L_2d1778;
            }
            r1 = r4 + 0x350u;  // (from the original)
            if (r0 < 3u) {
                r1 = r1 + (r0 << 3);
            }
            *gptr<u32>(r1) = u32(r3);
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
    r1 = r7;
    r0 = r4;
    *gptr<u8>(r6 + 0xcu) = u8(r2);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002d1b3c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_2d17a0:;
    r0 = r4 + 0x10u;  // (from the original)
    if (r5 >= 0x34u) {  // (from the original)
        guest::preempt();
        goto L_2d1678;
    }
L_2d17ac:;
    *gptr<u8>(r6 + 0xcu) = u8(r14);  // (from the original)
    r0 = 2u;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002d13e0
GUEST_EXPORT(0x002d13e0, d_002d13e0::f_002d13e0);

// f_002d1a70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d1a70 {

inline constexpr guest::Function<0x002d1858, u32(u32, u32, u32, u32)> call_002d1858;  // (from the original)

u32 f_002d1a70(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r6 = r0;
    r5 = r1;
    r0 = r0 + 0x10u;  // (from the original)
    r4 = r0 + (r5 << 4);
    if (r1 < 0x34u) {  // (from the original)
        r0 = r4;
    }
    r0 = *gptr<u32>(r0);
    if (r0 != 0) {
        r0 = r6;
        r0 = call_002d1858(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0 = r6 + 0x10u;  // (from the original)
        if (r5 >= 0x34u) {  // (from the original)
            r4 = r0;
        }
        *gptr<u32>(r4) = u32(0u);
        r0 = *gptr<u32>(r6 + 0x368u) - 1u;  // (from the original)
        *gptr<u32>(r6 + 0x368u) = u32(r0);  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
}

}  // namespace d_002d1a70
GUEST_EXPORT(0x002d1a70, d_002d1a70::f_002d1a70);

// f_002d1c1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d1c1c {

inline constexpr guest::Function<0x001b0544, u32(u32, u32, u32, u32)> call_001b0544;  // (from the original)

u32 f_002d1c1c(u32 r0, u32 r1, u32 r2, float S0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 cf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r1;
    cf = r1 >= 2u;
    r4 = r0;
    if (!cf) {
        r1 = r5 + (r5 << 2);
    }
    r0 = r0 + 0x74u;  // (from the original)
    if (!cf) {
        r0 = r0 + (r1 << 2);
    }
    r6 = r2;
    r1 = r2;
    guest::cpu()->s[0] = S0;
    r0 = call_001b0544(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    if (r6 == 0) {
        S0 = std::bit_cast<float>(*gptr<u32>(r4 + 0x1cu));  // (from the original)
        r1 = r5;
        r2 = *gptr<u32>(*gptr<u32>(r4) + 0x34u);  // (from the original)
        r0 = r4;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->s[0] = S0;
        return guest::call_address<u32>(r2, r0, r1, r2, guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_002d1c1c
GUEST_EXPORT(0x002d1c1c, d_002d1c1c::f_002d1c1c);

// f_002d1db0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d1db0 {

inline constexpr guest::Function<0x0020af18, u32(u32, u32, u32, u32)> call_0020af18;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_002d1db0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_0020af18(r0, r1, r2, r3);
    r3 = 2u;
    r2 = 4u;
    *gptr<u32>(r0) = u32(0x8f8dc8u);  // (from the original)
    r0 = r0 + 0x44u;  // (from the original)
    r1 = 0x131800u;  // (from the original)
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = 0x1287a8u;  // (from the original)
    r0 = r0 + 8u;
    r3 = 2u;
    r2 = 0x14u;  // (from the original)
    r0 = call_00301d0c(r0, r1, r2, r3);
    r3 = 2u;
    r2 = 0x14u;  // (from the original)
    *gptr<u32>(r0 - 0x4cu) = u32(0x8f2c8cu);  // (from the original)
    r1 = 0x12e818u;  // (from the original)
    r0 = r0 + 0x28u;  // (from the original)
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x74u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
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

inline constexpr guest::Function<0x0020a4cc, u32(u32, u32, u32, u32)> call_0020a4cc;  // (from the original)
inline constexpr guest::Function<0x002d17c0, u32(u32, u32, u32, u32)> call_002d17c0;  // (from the original)

u32 f_002d1f40(gptr<Object_002d1f40_0> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r0 = u32(arg0->byte_34);
    r5 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    r6 = r3;
    if (r0 != 0) {
        goto L_2d1fe8;
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0020a4cc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r1 = r4;
    r0 = *gptr<u32>(0x94cfecu);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_002d17c0(r0, r1, r2, r3);
    r1 = 0x83bec0u;  // (from the original)
    *gptr<u32>(r4 + 0x74u) = u32(r0);  // (from the original)
    r0 = 0u;
    if (u32(r6 >= 0x198u) && !u32(r6 == 0x198u)) {  // (from the original)
        *gptr<u32>(r4 + 0x7cu) = u32(r1);  // (from the original)
        *gptr<u16>(r4 + 0x7au) = u16(r0);  // (from the original)
        goto L_2d1fb8;
    }
    r1 = r1 + (r6 << 4);
    *gptr<u16>(r4 + 0x7au) = u16(r6);  // (from the original)
    *gptr<u32>(r4 + 0x7cu) = u32(r1);  // (from the original)
    r1 = u32(*gptr<u8>(r1 + 0xcu));  // (from the original)
    if (r1 == 0) {
        goto L_2d1fb8;
    }
    *gptr<u32>(r4 + 0x80u) = u32(0x83d850u + (r1 + (r1 << 2) << 4));  // (from the original)
L_2d1fb8:;
    zf = r6 == 0xc9u;  // (from the original)
    if (!zf) {
        zf = r6 == 0xcau;  // (from the original)
    }
    if (zf) {
        goto L_2d1fec;
    }
    if (r6 == 0xeau) {  // (from the original)
        goto L_2d1fec;
    } else {
        *gptr<u8>(r4 + 0x8du) = u8(r0);  // (from the original)
    }
L_2d1fd0:;
    r1 = u32(*gptr<u8>(r4 + 0x8du));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x2d2004u));  // (from the original)
    if (r1 == 0) {
        *gptr<u8>(r4 + 0x78u) = u8(r5);  // (from the original)
    }
    *gptr<u32>(r4 + 0x84u) = u32(r0);  // (from the original)
    *gptr<u32>(r4 + 0x88u) = u32(std::bit_cast<u32>(S0));  // (from the original)
L_2d1fe8:;
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

inline constexpr guest::Function<0x002d13e0, u32(u32, u32, u32, u32)> call_002d13e0;  // (from the original)
inline constexpr guest::Function<0x0071d2d4, u32(u32, u32, u32, u32)> call_0071d2d4;  // (from the original)
inline constexpr guest::Function<0x00820578, u32(u32, u32, u32, u32)> call_00820578;  // (from the original)

u32 f_002d23d4(gptr<Object_002d23d4_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r6 = r1;
    r4 = r0;
    arg0->byte_8c = u8(1u);
    r0 = arg0->word_74;
    r5 = *gptr<u32>(0x94cfecu);  // (from the original)
    r7 = 0x94d080u;  // (from the original)
    r1 = r5 + 0x10u;  // (from the original)
    if (r0 < 0x34u) {  // (from the original)
        r1 = r1 + (r0 << 4);
    }
    r1 = u32(*gptr<u8>(r1 + 0xcu));  // (from the original)
    if (r1 != 0) {
        if (r1 == 1u) {
            goto L_2d24a4;
        }
        goto L_2d2458;
    }
    r2 = 1u;
    r1 = r6;
    r0 = *gptr<u32>(0x94cd20u);  // (from the original)
    r0 = call_0071d2d4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_2d245c;
    }
    r1 = *gptr<u32>(r4 + 0x74u);  // (from the original)
    r2 = r6;
    r0 = r5;
    r0 = call_002d13e0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 1u) {
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
    r2 = *gptr<u32>(*gptr<u32>(r7) + 0xcbcu);  // (from the original)
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
    r1 = r6;
    r0 = r4;
    r0 = call_00820578(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_2d24a4:;
    if (u32(*gptr<u8>(r4 + 0x8fu)) != 0) {  // (from the original)
        guest::preempt();
        goto L_2d2494;
    }
    r1 = *gptr<u32>(*gptr<u32>(r7) + 0xcbcu);  // (from the original)
    if (r1 >= r0 << 1) {
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    *gptr<u8>(r4 + 0x8fu) = u8(r0);  // (from the original)
    if (r0 != 0) {
        guest::preempt();
        goto L_2d2494;
    }
    guest::preempt();
    goto L_2d2458;
}

}  // namespace d_002d23d4
GUEST_EXPORT(0x002d23d4, d_002d23d4::f_002d23d4);

// f_002d2a4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d2a4c {

inline constexpr guest::Function<0x0020af18, u32(u32, u32, u32, u32)> call_0020af18;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_002d2a4c(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 ea = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0020af18(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r3 = 2u;
    r2 = 4u;
    *gptr<u32>(r0) = u32(0x8f8dc8u);  // (from the original)
    r0 = r0 + 0x44u;  // (from the original)
    r1 = 0x131800u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00301d0c(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r1 = 0x1287a8u;  // (from the original)
    r0 = r0 + 8u;
    r3 = 2u;
    r2 = 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00301d0c(r0, r1, r2, r3);
    ea = r0 + 0x28u;  // (from the original)
    *gptr<u32>(ea) = u32(~0u);
    ea = r0 - 0x4cu;  // (from the original)
    *gptr<u32>(ea) = u32(0x8f2cccu);  // (from the original)
    r0 = ea;
    r1 = 0u;
    *gptr<u8>(r0 + 0x78u) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0x79u) = u8(r1);  // (from the original)
    *gptr<u16>(r0 + 0x7au) = u16(r1);  // (from the original)
    *gptr<u32>(r0 + 0x7cu) = u32(r1);  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x2d2adcu));  // (from the original)
    *gptr<u32>(r0 + 0x80u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x84u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x88u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u8>(r0 + 0x8cu) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0x8du) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0x8eu) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0x8fu) = u8(r1);  // (from the original)
    *gptr<u32>(r0 + 4u) = u32(2u);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_002d2a4c
GUEST_EXPORT(0x002d2a4c, d_002d2a4c::f_002d2a4c);

// f_002d2e80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d2e80 {

inline constexpr guest::Function<0x00130ed8, u32(u32, u32, u32, u32)> call_00130ed8;  // (from the original)
inline constexpr guest::Function<0x004c331c, u32(u32, u32, u32, u32)> call_004c331c;  // (from the original)
inline constexpr guest::Function<0x004c7500, u32(u32, u32, u32, u32)> call_004c7500;  // (from the original)

u32 f_002d2e80(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 cf = 0;
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
    cf = r4 >= 4u;
    if (!cf) {
        r1 = r4 + (r4 << 1);
    }
    r0 = r5 + 0x10u;  // (from the original)
    if (!cf) {
        r0 = r0 + (r1 << 2);
    }
    r0 = *gptr<u32>(r0 + 4u);
    if (r0 != r6) {
        goto L_2d2f3c;
    }
    cf = r4 >= 4u;
    if (!cf) {
        r1 = r4 + (r4 << 1);
    }
    r0 = r5 + 0x10u;  // (from the original)
    if (!cf) {
        r0 = r0 + (r1 << 2);
    }
    r0 = *gptr<u32>(r0 + 8u);
    if (r0 != r7) {
        goto L_2d2f3c;
    }
    cf = r4 >= 4u;
    if (!cf) {
        r1 = r4 + (r4 << 1);
    }
    r0 = r5 + 0x10u;  // (from the original)
    if (!cf) {
        r0 = r0 + (r1 << 2);
    }
    r0 = *gptr<u32>(r0);
    res = r0 + 0x44u;  // (from the original)
    r1 = res;
    if (res == 0) {
        goto L_2d2f3c;
    }
    r0 = *gptr<u32>(r1);
    if (r0 == 0) {
        r0 = r10;
    } else {
        r0 = *gptr<u32>(r0 + 0xb0u);  // (from the original)
    }
    if (r0 != r7) {
        goto L_2d2f3c;
    }
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_004c331c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r13);
    if (r0 != 0) {
        r2 = r9;
        r1 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_004c7500(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00130ed8(r0, r1, r2, r3);
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
    return r0;
}

}  // namespace d_002d2e80
GUEST_EXPORT(0x002d2e80, d_002d2e80::f_002d2e80);

// f_002d31ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d31ec {

inline constexpr guest::Function<0x002d2d60, u32(u32, u32, u32, u32)> call_002d2d60;  // (from the original)

u32 f_002d31ec() {
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    r12 = r13 + 0x10u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r12));
    S1 = std::bit_cast<float>(*gptr<u32>(r12 + 4));
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r13 + 4u) = u32(~0u);
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S1));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    call_002d2d60(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return guest::cpu()->r[0];
}

}  // namespace d_002d31ec
GUEST_EXPORT(0x002d31ec, d_002d31ec::f_002d31ec);

// f_002d3218: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d3218 {

inline constexpr guest::Function<0x002d2d60, u32(u32, u32, u32, u32)> call_002d2d60;  // (from the original)

u32 f_002d3218() {
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    r12 = r13 + 0x10u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r12));
    S1 = std::bit_cast<float>(*gptr<u32>(r12 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r12 + 8));
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r13 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r13 + 8) = u32(std::bit_cast<u32>(S2));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    call_002d2d60(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return guest::cpu()->r[0];
}

}  // namespace d_002d3218
GUEST_EXPORT(0x002d3218, d_002d3218::f_002d3218);

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
    u32 r1 = 0;
    r1 = 0u;
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(r1);
    arg0->word_8 = u32(r1);
    arg0->word_c = u32(r1);
    arg0->word_10 = u32(r1);
    arg0->word_14 = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_002d39a8
GUEST_EXPORT(0x002d39a8, d_002d39a8::f_002d39a8);

// f_002d3a14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d3a14 {


u32 f_002d3a14(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 zf = 0;
    r0 = r0 + (r1 << 3);
    r1 = r0 + 0xb00u;  // (from the original)
    r2 = u32(*gptr<u16>(r1 + 0xc4u));  // (from the original)
    zf = r2 == 0;
    if (!zf) {
        r0 = *gptr<u32>(r0 + 0xbc0u);  // (from the original)
        zf = r0 == 0;
    }
    if (zf) {
        r0 = 0u;
    } else {
        *gptr<u16>(r1 + 0xc4u) = u16(r2 - 1u);  // (from the original)
    }
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 r1 = 0;
    r1 = 0u;
    arg0->word_bb8 = u32(r1);
    arg0->word_bbc = u32(r1);
    arg0->half_be0 = u16(1u);
    arg0->word_c = u32(r1);
    arg0->word_10 = u32(r1);
    arg0->word_14 = u32(r1);
    arg0->byte_be2 = u8(r1);
    arg0->byte_be3 = u8(r1);
    arg0->byte_be4 = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_002d3f18
GUEST_EXPORT(0x002d3f18, d_002d3f18::f_002d3f18);

// f_002d3f6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d3f6c {

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_002d3f6c(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r1 = 0x6efbc4u;  // (from the original)
    r3 = 4u;
    r2 = 0x2e8u;  // (from the original)
    r0 = r0 + 0x18u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r0 = r0 - 0x18u;  // (from the original)
    r1 = 0u;
    *gptr<u32>(r0 + 0xbb8u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0xbbcu) = u32(r1);  // (from the original)
    *gptr<u16>(0xbe0u + r0) = u16(1u);  // (from the original)
    *gptr<u32>(r0 + 0xcu) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x10u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x14u) = u32(r1);  // (from the original)
    *gptr<u8>(r0 + 0xbe2u) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0xbe3u) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0xbe4u) = u8(r1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002d3f6c
GUEST_EXPORT(0x002d3f6c, d_002d3f6c::f_002d3f6c);

// f_002d3fc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d3fc0 {

inline constexpr guest::Function<0x00335634, u32(u32, u32, u32, u32)> call_00335634;  // (from the original)

u32 f_002d3fc0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r7 = r2;
    r5 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    r6 = r3;
    guest::cpu()->r[13] = r13;
    r0 = call_00335634(r0, r1, r2, r3);
    *gptr<u32>(0x7dc8u + r4) = u32(r6);  // (from the original)
    r2 = r4 + 0x7dd2u;  // (from the original)
    *gptr<u32>(r4 + 0x7dccu) = u32(*gptr<u32>(r7));  // (from the original)
    r0 = r4 + 0x7dd6u;  // (from the original)
    r1 = u32(*gptr<u8>(r0)) & ~2u | 1u;
    *gptr<u8>(r0) = u8(r1);
    if (r5 == 0) {
        r1 = r1 & ~4u;
    } else {
        r1 = r1 | 4u;
    }
    *gptr<u8>(r0) = u8(r1);
    r0 = r4 + 0x7dd3u;  // (from the original)
    *gptr<u8>(r2) = u8(u32(*gptr<u8>(r2)) | 0xfu);  // (from the original)
    r1 = r4 + 0x7dd4u;  // (from the original)
    *gptr<u8>(r0) = u8(u32(*gptr<u8>(r0)) | 0xfu);  // (from the original)
    r4 = r4 + 0x7dd5u;  // (from the original)
    *gptr<u8>(r1) = u8(u32(*gptr<u8>(r1)) | 0xfu);  // (from the original)
    r0 = u32(*gptr<u8>(r4)) | 0xfu;  // (from the original)
    *gptr<u8>(r4) = u8(r0);
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002d3fc0
GUEST_EXPORT(0x002d3fc0, d_002d3fc0::f_002d3fc0);

// f_002d406c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d406c {

inline constexpr guest::Function<0x00335634, u32(u32, u32, u32, u32)> call_00335634;  // (from the original)

u32 f_002d406c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r6 = r2;
    r5 = r3;
    r0 = call_00335634(r0, r1, r2, r3);
    r2 = r4 + 0x7dd2u;  // (from the original)
    *gptr<u32>(0x7dc8u + r4) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x7dccu) = u32(*gptr<u32>(r6));  // (from the original)
    r0 = r4 + 0x7dd6u;  // (from the original)
    *gptr<u8>(r0) = u8(u32(*gptr<u8>(r0)) & ~2u);
    r0 = r4 + 0x7dd3u;  // (from the original)
    *gptr<u8>(r2) = u8(u32(*gptr<u8>(r2)) | 0xau);  // (from the original)
    r1 = r4 + 0x7dd4u;  // (from the original)
    *gptr<u8>(r0) = u8(u32(*gptr<u8>(r0)) | 0xau);  // (from the original)
    r4 = r4 + 0x7dd5u;  // (from the original)
    *gptr<u8>(r1) = u8(u32(*gptr<u8>(r1)) | 0xau);  // (from the original)
    r0 = u32(*gptr<u8>(r4)) | 0xau;  // (from the original)
    *gptr<u8>(r4) = u8(r0);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002d406c
GUEST_EXPORT(0x002d406c, d_002d406c::f_002d406c);

// f_002d4100: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d4100 {

inline constexpr guest::Function<0x00335640, u32(u32, u32, u32, u32)> call_00335640;  // (from the original)

u32 f_002d4100(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = call_00335640(r0, r1, r2, r3);
    r1 = 0u;
    *gptr<u32>(0x7dc8u + r4) = u32(r1);  // (from the original)
    r0 = r4 + 0x7dccu;  // (from the original)
    *gptr<u16>(r0) = u16(r1);
    *gptr<u8>(r0 + 2u) = u8(r1);
    *gptr<u8>(r0 + 3u) = u8(r1);
    r0 = 0x7dd0u;  // (from the original)
    *gptr<u16>(r0 + r4) = u16(r1);
    r12 = r0 + 4u;
    *gptr<u8>(r0 + 2u + r4) = u8(r1);
    r5 = r0 + 5u;
    *gptr<u8>((r0 | u32(s32(r0) >> 0xd)) + r4) = u8(r1);  // (from the original)
    r0 = r0 + 6u;
    *gptr<u8>(r12 + r4) = u8(r1);
    *gptr<u8>(r5 + r4) = u8(r1);
    *gptr<u8>(r0 + r4) = u8(r1);
    r0 = r0 | u32(s32(r0) >> 0xc);  // (from the original)
    r1 = 4u;
    *gptr<u8>(r0 + r4) = u8(r1);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002d4100
GUEST_EXPORT(0x002d4100, d_002d4100::f_002d4100);

// f_002d4174: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d4174 {


u32 f_002d4174(u32 r0, u32 r1) {
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r0 + r1 + 0x7dd2u;  // (from the original)
    r1 = u32(*gptr<u8>(r0)) & ~0xcu;  // (from the original)
    *gptr<u8>(r0) = u8(r1);
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 r3 = 0;
    u32 zf = 0;
    r3 = u32(arg0->byte_7dd7);
    r0 = r0 + r1 + 0x7dd2u;  // (from the original)
    zf = r3 == r1;
    if (zf) {
        r3 = 4u;
    }
    r1 = 0u;
    if (zf) {
        arg0->byte_7dd7 = u8(r3);
    }
    *gptr<u8>(r0) = u8(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002d4198
GUEST_EXPORT(0x002d4198, d_002d4198::f_002d4198);

// f_002d41c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d41c8 {

inline constexpr guest::Function<0x00335640, u32(u32, u32, u32, u32)> call_00335640;  // (from the original)

u32 f_002d41c8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_00335640(r0, r1, r2, r3);
    r0 = 0u;
    *gptr<u32>(0x7dc8u + r4) = u32(r0);  // (from the original)
    r1 = r4 + 0x7dccu;  // (from the original)
    *gptr<u16>(r1) = u16(r0);
    *gptr<u8>(r1 + 2u) = u8(r0);
    *gptr<u8>(r1 + 3u) = u8(r0);
    r1 = 0x7dd0u;  // (from the original)
    *gptr<u16>(r1 + r4) = u16(r0);
    r1 = r1 + 2u;
    r3 = r1 + 2u;
    *gptr<u8>(r1 + r4) = u8(r0);
    r12 = r1 + 3u;
    *gptr<u8>((r1 | u32(s32(r1) >> 0xd)) + r4) = u8(r0);  // (from the original)
    r1 = r1 + 4u;
    *gptr<u8>(r3 + r4) = u8(r0);
    *gptr<u8>(r12 + r4) = u8(r0);
    *gptr<u8>(r1 + r4) = u8(r0);
    r0 = 4u;
    *gptr<u8>(r4 + 0x7dd7u) = u8(r0);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    r1 = 0u;
    arg0->word_4 = u32(r1);
    arg0->word_8 = u32(r1);
    r4 = 0x7ecu;  // (from the original)
    arg0->word_1c = u32(r1);
    arg0->word_c = u32(r1);
    arg0->word_10 = u32(r1);
    arg0->word_14 = u32(r1);
    r2 = r4 + 2u;
    arg0->word_18 = u32(r1);
    r3 = 0x7f0u;  // (from the original)
    *gptr<u16>(r4 + r0) = u16(r1);
    *gptr<u16>(r2 + r0) = u16(r1);
    *gptr<u16>(r3 + r0) = u16(r1);
    *gptr<u16>(r2 + 4u + r0) = u16(r1);
    r1 = 0x780u;  // (from the original)
    r0 = r0 + 0x6cu;  // (from the original)
    return call_002f825c(r0, r1, r2, r3);
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
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = 0u;
    arg0->word_4 = u32(r0);
    arg0->word_8 = u32(r0);
    r1 = 0x7ecu;  // (from the original)
    arg0->word_1c = u32(r0);
    arg0->word_c = u32(r0);
    arg0->word_10 = u32(r0);
    arg0->word_14 = u32(r0);
    arg0->word_18 = u32(r0);
    r2 = r1 + 2u;
    *gptr<u16>(r1 + r4) = u16(r0);
    r3 = 0x7f0u;  // (from the original)
    *gptr<u16>(r2 + r4) = u16(r0);
    *gptr<u16>(r3 + r4) = u16(r0);
    *gptr<u16>(r1 + 6u + r4) = u16(r0);
    r1 = 0x780u;  // (from the original)
    r0 = r4 + 0x6cu;  // (from the original)
    r0 = call_002f825c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
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
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r5 = r0;
    r13 = r13 - 0x28u;  // (from the original)
    r7 = r1;
    r0 = r0 + 0xa0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003232c0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r8 = 0x95bfdcu;  // (from the original)
    r4 = 0u;
L_2d4a58:;
    if (r4 >= 0x28u) {  // (from the original)
        r6 = 0x95bfdcu;  // (from the original)
        goto L_2d4aa0;
    }
    r6 = r5 + (r4 << 2);
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcaf4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        goto L_2d4aa0;
    }
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb10(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        goto L_2d4aa0;
    }
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00768174(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        r6 = r8;
    }
L_2d4aa0:;
    r1 = r6;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcaf4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        goto L_2d4b34;
    }
    r2 = r7;
    r1 = r13 + 8u;
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0076aff4(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r13 + 0xcu;  // (from the original)
    if (r4 >= 0x28u) {  // (from the original)
        goto L_2d4b2c;
    }
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_006ba118(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        r0 = r5 + (r4 << 2);
        r1 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, r2, guest::cpu()->r[3]);
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
    r2 = r7;
    r1 = r5 + 0xf0u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0076aff4(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r13;
    r0 = r5 + 0xf0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = r7;
    r1 = r5 + 0xf4u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0076aff4(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r13;
    r0 = r5 + 0xf4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r13;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002d4a38
GUEST_EXPORT(0x002d4a38, d_002d4a38::f_002d4a38);

// f_002d4bb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d4bb4 {


u32 f_002d4bb4(u32 r0, u32 r1, u32 r2) {
    u32 res = 0;
    res = r2;
    if (res >> 0x1f != (r2 & (r2 ^ res)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r0 + (r1 << 1);
    r1 = u32(s32(s16(*gptr<u16>(r0))));
    if (r1 != r2) {
        *gptr<u16>(r0) = u16(r2);
    }
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 r1 = 0;
    r1 = 0u;
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(r1);
    arg0->word_8 = u32(r1);
    arg0->word_c = u32(r1);
    arg0->word_10 = u32(r1);
    arg0->word_14 = u32(r1);
    arg0->half_18 = u16(r1);
    return call_002d4bf4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
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
    u32 r2 = 0;
    r1 = r0 + (r1 << 1);
    r2 = u32(*gptr<u16>(r1)) + 1u;
    *gptr<u16>(r1) = u16(r2);
    return call_002d4bf4(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_002d4d04
GUEST_EXPORT(0x002d4d04, d_002d4d04::f_002d4d04);

// f_002d4d18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d4d18 {

inline constexpr guest::Function<0x002d4bf4, u32(u32, u32, u32, u32)> call_002d4bf4;  // (from the original)

u32 f_002d4d18(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r2 = 0;
    r1 = r0 + (r1 << 1);
    r2 = u32(s32(s16(*gptr<u16>(r1))));
    res = r2;
    if (!u32(res == 0) && res >> 0x1f == (r2 & (r2 ^ res)) >> 0x1f) {  // (from the original)
        r2 = r2 - 1u;
        *gptr<u16>(r1) = u16(r2);
    }
    return call_002d4bf4(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_002d4d18
GUEST_EXPORT(0x002d4d18, d_002d4d18::f_002d4d18);

// f_002d4d30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d4d30 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)

u32 f_002d4d30(u32 r0) {
    r0 = r0 + 0x2f2u;  // (from the original)
    return call_002fc8e8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
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
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x30u;  // (from the original)
    r7 = r0;
    r0 = 0u;
    r6 = r0;
    r8 = r13;
    *gptr<u32>(r13) = u32(r0);
    *gptr<u32>(r13 + 4u) = u32(r0);
    *gptr<u32>(r13 + 8u) = u32(r0);
    *gptr<u32>(r13 + 0xcu) = u32(r0);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r0);  // (from the original)
L_2d4d68:;
    r4 = 0u;
    r5 = r7 + (r6 + (r6 << 2) << 3);
L_2d4d74:;
    r1 = r5 + (r4 << 2) + 0x62u;  // (from the original)
    r0 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcaf4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_2d4e14;
    }
    r0 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005361a8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_2d4e14;
    }
    r0 = u32(*gptr<u8>(r0 + 0x1bu)) << 0x1a >> 0x1e;  // (from the original)
    if (r0 >= 4u) {
        goto L_2d4e14;
    }
    zf = r0 == 0;
    if (!zf) {
        zf = r7 + 0x22u == 0;  // (from the original)
    }
    if (zf) {
        goto L_2d4e14;
    }
    r3 = 0u;
    r2 = r6 + 4u;
    r1 = r4 + 3u;
    r0 = r7 + 0x22u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00752bd0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_2d4e14;
    }
    r0 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00768524(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 >= 0xau) {  // (from the original)
        goto L_2d4e14;
    }
    r0 = r8 + (r0 << 1);
    *gptr<u16>(r0) = u16(u32(*gptr<u16>(r0)) + 1u);
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
    r1 = r5 + (r4 << 2) + 0x1f2u;  // (from the original)
    r0 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcaf4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_2d4ee4;
    }
    r0 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005361a8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_2d4ee4;
    }
    r0 = u32(*gptr<u8>(r0 + 0x1bu)) << 0x1a >> 0x1e;  // (from the original)
    if (r0 >= 4u) {
        goto L_2d4ee4;
    }
    zf = r0 == 0;
    if (!zf) {
        zf = r7 + 0x22u == 0;  // (from the original)
    }
    if (zf) {
        goto L_2d4ee4;
    }
    r3 = 1u;
    r2 = r6 + 5u;
    r1 = r4 + 4u;
    r0 = r7 + 0x22u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00752bd0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_2d4ee4;
    }
    r0 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00768524(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 >= 0xau) {  // (from the original)
        goto L_2d4ee4;
    }
    r0 = r8 + (r0 << 1);
    *gptr<u16>(r0) = u16(u32(*gptr<u16>(r0)) + 1u);
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
        r1 = r4 & 0xffu;  // (from the original)
        r2 = u32(s32(s16(*gptr<u16>(r8 + (r4 << 1)))));
        r0 = r7;
        guest::cpu()->r[13] = r13;
        r0 = call_002d4bb4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(0xau));  // (from the original)
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r7 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002d4bd0(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r7 + 0x1eu) = u8(1u);  // (from the original)
    r8 = 0u;
    r0 = r7 + 0x22u;  // (from the original)
    *gptr<u8>(r7 + 0x1fu) = u8(r8);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00582aa4(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r6 = 0u;
L_2d4f64:;
    r4 = 0u;
    r5 = r7 + (r6 + (r6 << 2) << 3);
    do {
L_2d4f70:;
        r1 = 0x95bfdcu;  // (from the original)
        r0 = r5 + (r4 << 2) + 0x62u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], r3);
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
        r1 = 0x95bfdcu;  // (from the original)
        r0 = r5 + (r4 << 2) + 0x1f2u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], r3);
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 8u);
    r6 = r6 + 1u;
    if (r6 < 8u) {
        guest::preempt();
        goto L_2d4f9c;
    }
    r1 = 0x23a0u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r7 + 0x2f2u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r1 = 0x243du;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r7 + 0x2f6u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r7 + 0x20u) = u8(r8);  // (from the original)
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r7 + 0x2fau;  // (from the original)
    *gptr<u8>(r7 + 0x21u) = u8(r8);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r7 + 0x2feu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002d4f3c
GUEST_EXPORT(0x002d4f3c, d_002d4f3c::f_002d4f3c);

// f_002d5058: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d5058 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)

u32 f_002d5058(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 cf = 0;
    r12 = *gptr<u32>(r13);
    if (r12 != 0) {
        if (r12 != 1u) {
            return r0;
        }
        cf = r2 >= 8u;
        if (!cf) {
            r12 = r3;
            cf = r3 >= 8u;
        }
        if (cf) {
            return r0;
        }
        r0 = r0 + (r12 << 5) + (r2 << 2) + 0x1f2u;  // (from the original)
        guest::cpu()->r[13] = r13;
        return call_002fc8e8(r0, guest::cpu()->r[1], r2, r3);
    }
    cf = r2 >= 0xau;  // (from the original)
    if (!cf) {
        r12 = r3;
        cf = r3 >= 0xau;  // (from the original)
    }
    if (cf) {
        return r0;
    }
    r3 = r12 + (r12 << 2);
    r0 = r0 + (r3 << 3) + (r2 << 2) + 0x62u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_002fc8e8(r0, guest::cpu()->r[1], r2, r3);
}

}  // namespace d_002d5058
GUEST_EXPORT(0x002d5058, d_002d5058::f_002d5058);

// f_002d5184: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d5184 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)

u32 f_002d5184(u32 r0) {
    r0 = r0 + 0x2f6u;  // (from the original)
    return call_002fc8e8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_002d5184
GUEST_EXPORT(0x002d5184, d_002d5184::f_002d5184);

// f_002d5190: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d5190 {

inline constexpr guest::Function<0x0076aff4, u32(u32, u32, u32, u32)> call_0076aff4;  // (from the original)

u32 f_002d5190(u32 r0, u32 r1_unused, u32 r2) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r7 = r0;
    r8 = r2;
    r6 = 0u;
L_2d51a4:;
    r4 = 0u;
    r5 = r7 + (r6 + (r6 << 2) << 3);
    do {
L_2d51b0:;
        r1 = r5 + (r4 << 2) + 0x62u;  // (from the original)
        r2 = r8;
        r0 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_0076aff4(r0, r1, r2, guest::cpu()->r[3]);
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
        r1 = r5 + (r4 << 2) + 0x1f2u;  // (from the original)
        r2 = r8;
        r0 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_0076aff4(r0, r1, r2, guest::cpu()->r[3]);
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 8u);
    r6 = r6 + 1u;
    if (r6 < 8u) {
        guest::preempt();
        goto L_2d51ec;
    }
    r2 = r8;
    r1 = r7 + 0x2f2u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0076aff4(r0, r1, r2, guest::cpu()->r[3]);
    r2 = r8;
    r1 = r7 + 0x2f6u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0076aff4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r13;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002d5190
GUEST_EXPORT(0x002d5190, d_002d5190::f_002d5190);

// f_002d5278: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d5278 {

inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x00582aa4, u32(u32, u32, u32, u32)> call_00582aa4;  // (from the original)

u32 f_002d5278(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r1 = 0x582b08u;  // (from the original)
    r0 = r0 + 0x22u;  // (from the original)
    r3 = 2u;
    r2 = 0x20u;  // (from the original)
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r0 = call_00582aa4(r0, r1, r2, r3);
    r1 = 0x2fc20cu;  // (from the original)
    r3 = 0x64u;  // (from the original)
    r2 = 4u;
    r0 = r4 + 0x40u;  // (from the original)
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = 0x2fc20cu;  // (from the original)
    r3 = 0x40u;  // (from the original)
    r2 = 4u;
    r0 = r0 + 0x190u;  // (from the original)
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x100u;  // (from the original)
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 4u;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 4u;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 4u;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x2feu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002d5278
GUEST_EXPORT(0x002d5278, d_002d5278::f_002d5278);

// f_002d546c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d546c {

inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_002d546c(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x48u;  // (from the original)
    r4 = r0;
    r6 = r1;
    r0 = r13 + 8u;
    r2 = 8u;
    r1 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0x90a378u;  // (from the original)
    *gptr<u32>(r0) = u32(r5);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r0 = r0 - 0xcu;  // (from the original)
    r7 = 0u;
    *gptr<u32>(r0 + 0x18u) = u32(r7);  // (from the original)
    *gptr<u32>(r0 + 0x1cu) = u32(r7);  // (from the original)
    r2 = 0x8906ecu;  // (from the original)
    *gptr<u32>(r0 + 0x20u) = u32(r7);  // (from the original)
    *gptr<u32>(r0 + 0x24u) = u32(r7);  // (from the original)
    r1 = 4u;
    r0 = r0 + 0x16u;  // (from the original)
    do {
L_2d54bc:;
        ea = r2;
        r3 = u32(*gptr<u16>(ea));
        res = r1 - 1u;
        r1 = res;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r3);
        ea = r2;
        r3 = u32(*gptr<u16>(ea));
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r3);
        r0 = ea;
        guest::preempt();
    } while (res != 0);
    r8 = 0x95deccu;  // (from the original)
    r1 = 0u;
    r0 = *gptr<u32>(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8f8(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r7);
    if (r6 == 0) {
        r3 = 0x1b2u;  // (from the original)
    } else {
        r3 = 0x1b3u;  // (from the original)
    }
    r0 = *gptr<u32>(r8);
    r2 = 0x2d555cu;  // (from the original)
    r1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea964(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r8);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 8u;
    r0 = r4 + 0x18cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x18cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 8u) = u32(r5);
    r0 = r13 + 8u;
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002d546c
GUEST_EXPORT(0x002d546c, d_002d546c::f_002d546c);

// f_002d5770: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d5770 {


u32 f_002d5770(u32 r0) {
    u32 r1 = 0;
    r1 = 0x985a10u;  // (from the original)
    r0 = r1 + (r0 << 2);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002d5770
GUEST_EXPORT(0x002d5770, d_002d5770::f_002d5770);

// f_002d5848: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d5848 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)

u32 f_002d5848() {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x28u;  // (from the original)
    r5 = 0x985a10u;  // (from the original)
    r1 = *gptr<u32>(0x84515cu + 4);  // (from the original)
    r2 = *gptr<u32>(0x84515cu + 8);  // (from the original)
    r3 = *gptr<u32>(0x84515cu + 0xc);  // (from the original)
    r4 = 0u;
    r6 = r13;
    *gptr<u32>(r13) = u32(*gptr<u32>(0x84515cu));  // (from the original)
    *gptr<u32>(r13 + 4) = u32(r1);
    *gptr<u32>(r13 + 8) = u32(r2);
    *gptr<u32>(r13 + 0xc) = u32(r3);  // (from the original)
    do {
L_2d5868:;
        r1 = u32(*gptr<u16>(r6 + (r4 << 1)));
        r0 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fcbb0(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        r2 = r5 + (r4 << 2);
        r1 = r0;
        r0 = r2;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r13 + 0x10u;  // (from the original)
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(8u));
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 r2 = 0;
    goto L_2d5920;
L_20acc4:;
    r2 = u32(s32(s8(arg0->byte_37)));
    if (r2 == r1) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    arg0->byte_37 = u8(r1);
    r1 = *gptr<u32>(arg0->word_0 + 0x18u);  // (from the original)
    return guest::call_address<u32>(r1, r0, r1, r2, guest::cpu()->r[3]);
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
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_001e5894(r0, r1, r2, guest::cpu()->r[3]);
    r2 = r13;
    r1 = r5;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002e8bf4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = u32(arg0->byte_68);
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    } else {
        r0 = r4 + 0x44u;  // (from the original)
    }
    r0 = call_00136cc8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4;
    r0 = call_0020aedc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 0u;
    *gptr<u8>(r4 + 0x68u) = u8(r0);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_002d59a4
GUEST_EXPORT(0x002d59a4, d_002d59a4::f_002d59a4);

// f_002d59d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d59d4 {

inline constexpr guest::Function<0x002e8ce8, u32(u32, u32, u32, u32)> call_002e8ce8;  // (from the original)

u32 f_002d59d4(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_002e8ce8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0u;
    *gptr<u8>(r0 + 0x68u) = u8(r1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    arg0->word_0 = u32(0x8f8d88u);  // (from the original)
    r0 = r4 + 0x44u;  // (from the original)
    r0 = call_00136cc8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    r0 = call_0020aedc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x44u;  // (from the original)
    r5 = r0;
    r0 = call_00136cc8(r0, r1, r2, r3);
    r1 = 0x137d74u;  // (from the original)
    r0 = r5;
    r3 = 1u;
    r2 = 4u;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002d59e8
GUEST_EXPORT(0x002d59e8, d_002d59e8::f_002d59e8);

// f_002d5b40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d5b40 {

inline constexpr guest::Function<0x001e5894, u32(u32, u32, u32, u32)> call_001e5894;  // (from the original)
inline constexpr guest::Function<0x002e9118, u32(u32, u32, u32, u32)> call_002e9118;  // (from the original)

u32 f_002d5b40(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_001e5894(r0, r1, r2, guest::cpu()->r[3]);
    r2 = r13;
    r1 = r5;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002e9118(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    *gptr<u8>(r4 + 0xdcu) = u8(r0);  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002d5b40
GUEST_EXPORT(0x002d5b40, d_002d5b40::f_002d5b40);

// f_002d5d48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d5d48 {

inline constexpr guest::Function<0x001e5894, u32(u32, u32, u32, u32)> call_001e5894;  // (from the original)
inline constexpr guest::Function<0x002e9194, u32(u32, u32, u32, u32)> call_002e9194;  // (from the original)

u32 f_002d5d48(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_001e5894(r0, r1, r2, guest::cpu()->r[3]);
    r2 = r13;
    r1 = r5;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002e9194(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = u32(arg0->byte_dc);
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = r4;
    r0 = call_002e9268(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 0u;
    *gptr<u8>(r4 + 0xdcu) = u8(r0);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_002d5f68
GUEST_EXPORT(0x002d5f68, d_002d5f68::f_002d5f68);

// f_002d5f90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d5f90 {

inline constexpr guest::Function<0x002e92b0, u32(u32, u32, u32, u32)> call_002e92b0;  // (from the original)

u32 f_002d5f90(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_002e92b0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0u;
    *gptr<u8>(r0 + 0xdcu) = u8(r1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002d5f90
GUEST_EXPORT(0x002d5f90, d_002d5f90::f_002d5f90);

// f_002d70b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d70b8 {

inline constexpr guest::Function<0x001c2764, u32(u32, u32, u32, u32)> call_001c2764;  // (from the original)
inline constexpr guest::Function<0x004ed3fc, u32(u32, u32, u32, u32)> call_004ed3fc;  // (from the original)

u32 f_002d70b8(u32 r0, u32 r1, u32 r2, float S0, float S1, float S2, float S3, float S4, float S5, float S6, float S7) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0 = call_001c2764(r0, r1, r2, guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    S7 = guest::cpu()->s[7];
    r1 = r0;
    *gptr<u32>(r1 + 0x18u) = u32(0x8faa14u);  // (from the original)
    r4 = 0u;
    *gptr<u32>(r1) = u32(0x8f2fc0u);  // (from the original)
    *gptr<u32>(r1 + 0x64u) = u32(r4);  // (from the original)
    *gptr<u8>(r1 + 0x68u) = u8(r4);  // (from the original)
    r2 = 1u;
    *gptr<u8>(r1 + 0x69u) = u8(r4);  // (from the original)
    *gptr<u8>(r1 + 0x6au) = u8(r2);  // (from the original)
    *gptr<u8>(r1 + 0x6bu) = u8(r4);  // (from the original)
    *gptr<u16>(r1 + 0x28u) = u16(r4);  // (from the original)
    *gptr<u8>(r1 + 0x2au) = u8(r4);  // (from the original)
    *gptr<u8>(r1 + 0x2bu) = u8(r4);  // (from the original)
    *gptr<u16>(r1 + 0x5cu) = u16(r4);  // (from the original)
    *gptr<u16>(r1 + 0x5eu) = u16(r4);  // (from the original)
    r0 = r1 + 0xb4u;  // (from the original)
    *gptr<u32>(r1 + 0x60u) = u32(r4);  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0 = call_004ed3fc(r0, r1, r2, guest::cpu()->r[3]);
    *gptr<u32>(r0) = u32(0x902a8cu);  // (from the original)
    r0 = r0 - 0xb4u;  // (from the original)
    r1 = 0x847238u;  // (from the original)
    r2 = r1 + 0x10u;  // (from the original)
    r1 = r1 + 0x30u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r2));
    S1 = std::bit_cast<float>(*gptr<u32>(r2 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r2 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r2 + 0xc));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r2 + 0x10));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(r2 + 0x14));  // (from the original)
    S6 = std::bit_cast<float>(*gptr<u32>(r2 + 0x18));  // (from the original)
    S7 = std::bit_cast<float>(*gptr<u32>(r2 + 0x1c));  // (from the original)
    r2 = r0 + 0x6cu;  // (from the original)
    *gptr<u32>(r2) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r2 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r2 + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r2 + 0xc) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(r2 + 0x10) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u32>(r2 + 0x14) = u32(std::bit_cast<u32>(S5));  // (from the original)
    *gptr<u32>(r2 + 0x18) = u32(std::bit_cast<u32>(S6));  // (from the original)
    *gptr<u32>(r2 + 0x1c) = u32(std::bit_cast<u32>(S7));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r1));
    S1 = std::bit_cast<float>(*gptr<u32>(r1 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r1 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r1 + 0xc));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r1 + 0x10));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(r1 + 0x14));  // (from the original)
    S6 = std::bit_cast<float>(*gptr<u32>(r1 + 0x18));  // (from the original)
    r1 = r0 + 0x8cu;  // (from the original)
    *gptr<u32>(r1) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r1 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r1 + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r1 + 0xc) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(r1 + 0x10) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u32>(r1 + 0x14) = u32(std::bit_cast<u32>(S5));  // (from the original)
    *gptr<u32>(r1 + 0x18) = u32(std::bit_cast<u32>(S6));  // (from the original)
    *gptr<u8>(r0 + 0x1d0u) = u8(r4);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
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
    u32 res = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x88u;  // (from the original)
    r5 = r0;
    r4 = 0u;
    do {
L_2d7ae4:;
        r2 = *gptr<u32>(r5 + (r4 << 2) + 0xae8u);  // (from the original)
        r0 = *gptr<u32>(r2 + 0x150u);  // (from the original)
        r1 = u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu;  // (from the original)
        *gptr<u8>(r0 + 0xb7u) = u8(r1);  // (from the original)
        r0 = r2 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_00568c10(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(9u));
    r0 = *gptr<u32>(r5 + 0xad4u);  // (from the original)
    r10 = 0x909f18u;  // (from the original)
    r4 = 0u;
    r11 = r5 + 0xa00u;  // (from the original)
    if (r0 == 0) {
        r7 = 3u;
        r6 = 0u;
        goto L_2d7cb0;
    }
    r8 = r0 - 3u;
    res = r8;
    r6 = 0u;
    if (u32(res == 0) || res >> 0x1f != (r8 & (r8 ^ res)) >> 0x1f) {  // (from the original)
        goto L_2d7b78;
    }
    do {
L_2d7b40:;
        r1 = r4;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_002c4544(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_002fcaf4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r7 = r0;
        if (r7 == 0) {
            r6 = r6 + 1u;
        }
        res = r6 - r8;
        r4 = r4 + 1u;
        guest::preempt();
    } while (res >> 0x1f != ((r6 ^ r8) & (r6 ^ res)) >> 0x1f);  // (from the original)
L_2d7b78:;
    r7 = 0u;
    r6 = *gptr<u32>(r5 + 0xad4u) - 3u;  // (from the original)
L_2d7b84:;
    r0 = *gptr<u32>(r5 + 0xad0u);  // (from the original)
    if (!u32(r0 >= r6) || u32(r0 == r6)) {
        goto L_2d7d70;
    }
    r1 = r4;
    r0 = r13 + 0x5cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002c4544(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 0x5cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcaf4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_2d7cc0;
    }
    r0 = r13 + 0x5cu;  // (from the original)
    goto L_2d7d64;
L_2d7bc8:;
    r1 = r4;
    r0 = r13 + 0x5cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002c4544(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 0x5cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcaf4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r0 = r13 + 0x5cu;  // (from the original)
    } else {
        r2 = 0u;
        r1 = r13 + 0x5cu;  // (from the original)
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_002fe7f4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r9 = r5 + (r7 << 2);
        r1 = r13;
        r8 = *gptr<u32>(r9 + 0xae8u);  // (from the original)
        r0 = r8 + 0x154u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_005e2e50(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r8 + 0x154u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_005e2f94(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r8 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_00568c10(r0, r1, r2, r3);
        r2 = r13 + 0x5cu;  // (from the original)
        r1 = r5 + 0x310u;  // (from the original)
        *gptr<u32>(*gptr<u32>(r9 + 0xae8u) + 0x218u) = u32(r4);  // (from the original)
        r3 = u32(s32(s8(*gptr<u8>(r11 + 0xe4u))));  // (from the original)
        r0 = *gptr<u32>(r9 + 0xae8u);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002b7d4c(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        r1 = *gptr<u32>(r9 + 0xae8u);  // (from the original)
        r0 = *gptr<u32>(r1 + 0x150u);  // (from the original)
        r2 = u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu | 1u;  // (from the original)
        *gptr<u8>(r0 + 0xb7u) = u8(r2);  // (from the original)
        r0 = r1 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_00568c10(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r7 = r7 + 1u;
        r6 = r6 + 1u;
        *gptr<u32>(r13) = u32(r10);
        r0 = r13 + 0x5cu;  // (from the original)
    }
    res = r7 - 9u;
    r4 = r4 + 1u;
    if (res >> 0x1f == ((r7 ^ 9u) & (r7 ^ res)) >> 0x1f) {  // (from the original)
        goto L_2d7d70;
    }
L_2d7cb0:;
    r0 = *gptr<u32>(r5 + 0xad0u);  // (from the original)
    if (!u32(r0 >= r6) || u32(r0 == r6)) {
        goto L_2d7d70;
    }
    guest::preempt();
    goto L_2d7bc8;
L_2d7cc0:;
    r2 = 0u;
    r1 = r13 + 0x5cu;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7f4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r8 = r5 + (r7 << 2);
    r1 = r13;
    r9 = *gptr<u32>(r8 + 0xae8u);  // (from the original)
    r0 = r9 + 0x154u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r9 + 0x154u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r9 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00568c10(r0, r1, r2, r3);
    r2 = r13 + 0x5cu;  // (from the original)
    r1 = r5 + 0x310u;  // (from the original)
    *gptr<u32>(*gptr<u32>(r8 + 0xae8u) + 0x218u) = u32(r4);  // (from the original)
    r3 = u32(s32(s8(*gptr<u8>(r11 + 0xe4u))));  // (from the original)
    r0 = *gptr<u32>(r8 + 0xae8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002b7d4c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r8 + 0xae8u);  // (from the original)
    r0 = *gptr<u32>(r1 + 0x150u);  // (from the original)
    r2 = u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu | 1u;  // (from the original)
    *gptr<u8>(r0 + 0xb7u) = u8(r2);  // (from the original)
    r0 = r1 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00568c10(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r7 + 1u;
    r6 = r6 + 1u;
    *gptr<u32>(r13) = u32(r10);
    r0 = r13 + 0x5cu;  // (from the original)
L_2d7d64:;
    res = r7 - 9u;
    r4 = r4 + 1u;
    if (res >> 0x1f != ((r7 ^ 9u) & (r7 ^ res)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_2d7b84;
    }
L_2d7d70:;
    r13 = r13 + 0x88u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002d7ad4
GUEST_EXPORT(0x002d7ad4, d_002d7ad4::f_002d7ad4);

// f_002d7d7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d7d7c {

inline constexpr guest::Function<0x002b6a00, u32(u32, u32, u32, u32)> call_002b6a00;  // (from the original)
inline constexpr guest::Function<0x002f6a30, u32(u32, u32, u32, u32)> call_002f6a30;  // (from the original)
inline constexpr guest::Function<0x002f6e98, u32(u32, u32, u32, u32)> call_002f6e98;  // (from the original)
inline constexpr guest::Function<0x002f7508, u32(u32, u32, u32, u32)> call_002f7508;  // (from the original)
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)

u32 f_002d7d7c(u32 r0, float S0, float S1) {
    u32 ea = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r5 = r0;
    r2 = r0 + 0xc8u;  // (from the original)
    r13 = r13 - 0x88u;  // (from the original)
    r4 = 0x84a1b8u;  // (from the original)
    r0 = r0 + 0x908u;  // (from the original)
    r9 = r13 + 0x48u;  // (from the original)
    ea = r4 + 0x1e0u;  // (from the original)
    r1 = *gptr<u32>(ea);
    ea = r13;
    *gptr<u32>(ea) = u32(r0);
    ea = r4 + 0x1e4u;  // (from the original)
    r3 = *gptr<u32>(ea);
    r6 = *gptr<u32>(ea + 4);
    r7 = *gptr<u32>(ea + 8);
    r8 = *gptr<u32>(ea + 0xc);  // (from the original)
    r12 = *gptr<u32>(ea + 0x10);  // (from the original)
    *gptr<u32>(r9) = u32(r1);
    *gptr<u32>(r9 + 4) = u32(r3);
    *gptr<u32>(r9 + 8) = u32(r6);
    *gptr<u32>(r9 + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(r9 + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(r9 + 0x14) = u32(r12);  // (from the original)
    r1 = *gptr<u32>(r4 + 0x1f8u);  // (from the original)
    *gptr<u32>(r13 + 0x44u) = u32(r0);  // (from the original)
    r0 = r5 + 0x2514u;  // (from the original)
    *gptr<u32>(r13 + 0x40u) = u32(r2);  // (from the original)
    *gptr<u32>(r13 + 0x60u) = u32(r1);  // (from the original)
    r2 = 0u;
    r1 = r13 + 0x40u;  // (from the original)
    r7 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002f6e98(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    ea = r7 + 0xd4u;  // (from the original)
    r9 = 0u;
    S0 = std::bit_cast<float>(*gptr<u32>(0x2d7f18u));  // (from the original)
    r1 = *gptr<u32>(ea) | 0x40u;  // (from the original)
    ea = r7 + 0xd4u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    ea = r13 + 0x10u;  // (from the original)
    *gptr<u32>(ea) = u32(r9);
    ea = r13 + 0x14u;  // (from the original)
    *gptr<u32>(ea) = u32(r9);
    S1 = std::bit_cast<float>(*gptr<u32>(0x2d7f1cu));  // (from the original)
    ea = r13 + 0x18u;  // (from the original)
    *gptr<u32>(ea) = u32(r9);
    ea = r13 + 0x1cu;  // (from the original)
    *gptr<u32>(ea) = u32(r9);
    ea = r13 + 0x20u;  // (from the original)
    *gptr<u32>(ea) = u32(r9);
    ea = r13 + 0x24u;  // (from the original)
    *gptr<u32>(ea) = u32(r9);
    ea = r13 + 0x28u;  // (from the original)
    *gptr<u32>(ea) = u32(r9);
    r8 = 1u;
    ea = r13 + 0x18u;  // (from the original)
    *gptr<u32>(ea) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(ea + 4) = u32(std::bit_cast<u32>(S1));
    r10 = r13 + 0x30u;  // (from the original)
    ea = r4 + 0x70u;  // (from the original)
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    r11 = r13 + 0x38u;  // (from the original)
    ea = r13 + 0x30u;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    ea = r4 + 0x78u;  // (from the original)
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    r4 = r9;
    ea = r13 + 0x38u;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    do {
L_2d7e34:;
        r1 = *gptr<u32>(r10 + (r4 << 2));
        r0 = *gptr<u32>(r13);
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_0056878c(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        *gptr<u32>(r13 + 0x10u) = u32(r0);  // (from the original)
        r1 = *gptr<u32>(r11 + (r4 << 2));
        r0 = *gptr<u32>(r13);
        r2 = 1u;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_004b4fc0(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        *gptr<u32>(r13 + 0x14u) = u32(r0);  // (from the original)
        r1 = r13 + 0x10u;  // (from the original)
        r6 = r5 + ((r4 << 3) - r4 << 5) + 0x2354u;  // (from the original)
        r0 = r6;
        *gptr<u32>(r13 + 0x24u) = u32(r4);  // (from the original)
        *gptr<u32>(r13 + 0x20u) = u32(r9);  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_002b6a00(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r2 = 1u;
        r1 = r6;
        r0 = r7;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_002f7508(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(2u));
    r0 = 0x2420u;  // (from the original)
    r2 = 0x1000480u;  // (from the original)
    r4 = r5 + 0x2500u;  // (from the original)
    *gptr<u32>(r0 + r5) = u32(r2);
    *gptr<u8>(r0 + 0xeu + r5) = u8(r8);  // (from the original)
    r1 = r2 - u32(s32(r0) >> 0xc);  // (from the original)
    r0 = r5 + 0x2354u;  // (from the original)
    r2 = r1 | u32(s32(r1) >> 0x18);  // (from the original)
    *gptr<u32>(r0 + 0xd0u) = u32(r1);  // (from the original)
    *gptr<u8>(r0 + 0xdbu) = u8(r8);  // (from the original)
    *gptr<u8>(r0 + 0xdcu) = u8(r8);  // (from the original)
    *gptr<u32>(r4) = u32(r2);
    *gptr<u8>(0x250eu + r5) = u8(r8);  // (from the original)
    r0 = r5 + 0x2434u;  // (from the original)
    *gptr<u32>(r0 + 0xd0u) = u32(r1);  // (from the original)
    *gptr<u8>(r0 + 0xdbu) = u8(r8);  // (from the original)
    *gptr<u8>(r0 + 0xdcu) = u8(r8);  // (from the original)
    r1 = 0u;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002f6a30(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    *gptr<u32>(r7 + 0xd4u) = u32(*gptr<u32>(r7 + 0xd4u) & ~8u);  // (from the original)
    r0 = 3u;
    *gptr<u16>(r4 + 0xe4u) = u16(r0);  // (from the original)
    r13 = r13 + 0x88u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
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
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    r1 = 0x8f3030u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r3 = r1 + 0x70u;  // (from the original)
    arg0->word_a4 = u32(r3 + 0x104u);  // (from the original)
    arg0->word_0 = u32(r1);
    arg0->word_28 = u32(r3);
    r4 = r0 + 0x2990u;  // (from the original)
    arg0->word_25f8 = u32(0x8ee218u);  // (from the original)
    r1 = 0x8ef22cu;  // (from the original)
    r3 = 1u;
    arg0->word_2a74 = u32(r1 + 0x44u);  // (from the original)
    arg0->word_2990 = u32(r1);
    r2 = 0x518u;  // (from the original)
    r1 = 0x2e0b3cu;  // (from the original)
    r0 = r0 + 0x2aa8u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    r0 = call_002f770c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f18f4u;  // (from the original)
    *gptr<u32>(r0 - 0x398u) = u32(r1);  // (from the original)
    r0 = r0 - 0x248u;  // (from the original)
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14cu;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xe8u;  // (from the original)
    r0 = call_002f7710(r0, r1, r2, r3);
    r1 = 0x2b6ef8u;  // (from the original)
    r4 = r0 - 0x2514u;  // (from the original)
    r3 = 2u;
    r2 = 0xe0u;  // (from the original)
    r0 = r0 - 0x1c0u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x200a2cu;  // (from the original)
    r3 = 3u;
    r2 = 0x3e0u;  // (from the original)
    r0 = r4 + 0x17b4u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x2b7f50u;  // (from the original)
    r3 = 6u;
    r2 = 0x21cu;  // (from the original)
    r0 = r4 + 0xb0cu;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0xa7cu;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14cu;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14cu;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14cu;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x248u;  // (from the original)
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x248u;  // (from the original)
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xa0u;  // (from the original)
    r0 = call_003170d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 8u;
    r0 = r0 - 0x28u;  // (from the original)
    return call_006aaa30(r0, r1, r2, r3);
}

}  // namespace d_002d9aa0
GUEST_EXPORT(0x002d9aa0, d_002d9aa0::f_002d9aa0);

// f_002da33c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002da33c {

inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)

u32 f_002da33c(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3, float S0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r2 = 1u;
    r1 = 0x2da3a0u;  // (from the original)
    r0 = r0 + 0x50u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_004b4fc0(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r2 = r0;
    r3 = 0u;
    r1 = r4 + 0x3e4u;  // (from the original)
    r0 = r4 + 0x50u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00568630(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = std::bit_cast<float>(*gptr<u32>(0x2da3a8u));  // (from the original)
    r0 = r4 + 0x3e4u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_005697e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r4 + 0x50u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00568c10(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r0 = 1u;
    *gptr<u32>(r4 + 0x6b4u) = u32(*gptr<u32>(r4 + 0x6b4u) | 8u);  // (from the original)
    r1 = 0u;
    *gptr<u8>(r4 + 0x7a6u) = u8(r1);  // (from the original)
    *gptr<u8>(r4 + 0x7a8u) = u8(r0);  // (from the original)
    *gptr<u8>(r4 + 0x7a7u) = u8(r0);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
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
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = r0;
    r0 = r0 + 0x700u;  // (from the original)
    r1 = u32(arg0->byte_7a7);
    if (r1 == 0) {
        goto L_2da4b0;
    }
    r7 = 0u;
    r6 = 1u;
    if (u32(arg0->byte_7a8) == 1u) {
        goto L_2da4b4;
    }
    r0 = r4 + 0x40cu;  // (from the original)
    r5 = r0;
    r0 = call_0074fdd0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_2da504;
    }
    r1 = 0x84ac28u;  // (from the original)
    r2 = 1u;
    r0 = r4 + 0x50u;  // (from the original)
    r0 = call_004b4fc0(r0, r1, r2, r3);
    r2 = r0;
    r3 = 0u;
    r1 = r5;
    r0 = r4 + 0x50u;  // (from the original)
    r0 = call_00568984(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x5e0u;  // (from the original)
    r0 = call_002f6e14(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x5e0u;  // (from the original)
    r0 = call_002f6b14(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_2da49c:;
    r0 = *gptr<u32>(r4 + 0x6b4u) & ~8u;  // (from the original)
    *gptr<u32>(r4 + 0x6b4u) = u32(r0);  // (from the original)
    *gptr<u8>(r4 + 0x7a6u) = u8(r6);  // (from the original)
    *gptr<u8>(r4 + 0x7a7u) = u8(r7);  // (from the original)
L_2da4b0:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_2da4b4:;
    r0 = r4 + 0x3e4u;  // (from the original)
    r0 = call_0074fdd0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r1 = 0x84ac28u;  // (from the original)
        r2 = 1u;
        r0 = r4 + 0x50u;  // (from the original)
        r0 = call_004b4fc0(r0, r1, r2, r3);
        r2 = r0;
        r3 = 0u;
        r1 = r4 + 0x3e4u;  // (from the original)
        r0 = r4 + 0x50u;  // (from the original)
        r0 = call_00568984(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        guest::preempt();
        goto L_2da49c;
    }
    r0 = r4 + 0x3e4u;  // (from the original)
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return call_00569544(r0, r1, r2, r3);
L_2da504:;
    r0 = r5;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return call_00569544(r0, r1, r2, r3);
}

}  // namespace d_002da424
GUEST_EXPORT(0x002da424, d_002da424::f_002da424);

// f_002db05c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002db05c {

inline constexpr guest::Function<0x002f7804, u32(u32, u32, u32, u32)> call_002f7804;  // (from the original)
inline constexpr guest::Function<0x0032069c, u32(u32, u32, u32, u32)> call_0032069c;  // (from the original)
inline constexpr guest::Function<0x003206bc, u32(u32, u32, u32, u32)> call_003206bc;  // (from the original)
inline constexpr guest::Function<0x0070bd30, u32(u32, u32, u32, u32)> call_0070bd30;  // (from the original)
inline constexpr guest::Function<0x0070bd74, u32(u32, u32, u32, u32)> call_0070bd74;  // (from the original)
inline constexpr guest::Function<0x00712838, u32(u32, u32, u32, u32)> call_00712838;  // (from the original)
inline constexpr guest::Function<0x00712850, u32(u32, u32, u32, u32)> call_00712850;  // (from the original)
inline constexpr guest::Function<0x0072382c, u32(u32, u32, u32, u32)> call_0072382c;  // (from the original)

u32 f_002db05c(u32 r0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r0 = r0 + 0x20acu;  // (from the original)
    r4 = r1;
    r6 = r0;
    r0 = call_0072382c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        r1 = r4;
        r0 = r6;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_002f7804(r0, r1, r2, guest::cpu()->r[3]);
    }
    res = r4;
    if (res >> 0x1f != (r4 & (r4 ^ res)) >> 0x1f) {  // (from the original)
        goto L_2db110;
    }
    if (r4 >= 0xau) {  // (from the original)
        goto L_2db110;
    }
    r1 = r4 & 0xffu;  // (from the original)
    r6 = *gptr<u32>(0xaaf14cu) + 0x2cu;  // (from the original)
    r0 = r6;
    r0 = call_00712850(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = r6;
    r0 = call_00712838(r0, r1, r2, guest::cpu()->r[3]);
    r6 = r0;
    r2 = 1u;
    r4 = r5 + (r4 + (r4 << 3) + (r4 << 5) << 4);
    r0 = r6;
    r1 = *gptr<u32>(r4 + 0x988u);  // (from the original)
    r0 = call_0070bd74(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r4 = r4 + 0x70cu;  // (from the original)
    r0 = r4;
    r0 = call_003206bc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r6;
    r0 = call_0070bd30(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0032069c(r0, r1, r2, guest::cpu()->r[3]);
L_2db110:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r5 = r0;
    r13 = r13 - 0x120u;  // (from the original)
    r0 = r0 + 0x4b4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0071af38(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00720448(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056d5dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0xcu;  // (from the original)
    r0 = r5 + 0x5000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e8498(r0, r1, r2, r3);
    r1 = 0x5e35dcu;  // (from the original)
    r3 = 3u;
    r2 = 0x20u;  // (from the original)
    r0 = r13 + 0xa8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r4 = 0u;
    *gptr<u32>(r13 + 8u) = u32(7u);
    r1 = 0x852400u;  // (from the original)
    r3 = r4;
    r2 = 0x34u;  // (from the original)
    r0 = r13 + 0xa8u;  // (from the original)
    *gptr<u32>(r13) = u32(r4);
    *gptr<u32>(r13 + 4u) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_005e34c4(r0, r1, r2, r3);
    *gptr<u32>(r13 + 8u) = u32(9u);
    r7 = 1u;
    r1 = 0x852400u;  // (from the original)
    r3 = 0u;
    r2 = 0x33u;  // (from the original)
    r6 = r13 + 0xa8u;  // (from the original)
    r0 = r13 + 0xc8u;  // (from the original)
    *gptr<u32>(r13) = u32(r4);
    *gptr<u32>(r13 + 4) = u32(r7);
    guest::cpu()->r[13] = r13;
    r0 = call_005e34c4(r0, r1, r2, r3);
    ea = r13;
    *gptr<u32>(ea) = u32(r4);
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(2u);
    *gptr<u32>(ea + 4) = u32(r7);
    r3 = 0u;
    r1 = 0x852400u;  // (from the original)
    r2 = 0xbu;  // (from the original)
    r0 = r6 + 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e34c4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 2u;
    r1 = 3u;
    r0 = r5 + 0x5000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e49c0(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    do {
L_2db1ec:;
        r2 = r6 + (r4 << 5);
        r1 = r4;
        r0 = r5 + 0x5000u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_005e4994(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 3u);
    r0 = r5 + 0x5000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e4988(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5 + 0x5000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005d4a68(r0, r1, r2, r3);
    r3 = 0u;
    r2 = r3;
    r1 = r3;
    r0 = r5 + 0x5000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005d4a78(r0, r1, r2, r3);
    r1 = 0x5e3618u;  // (from the original)
    r3 = 3u;
    r2 = 0x20u;  // (from the original)
    r0 = r13 + 0xa8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r4 = 0x90a3e8u;  // (from the original)
    *gptr<u32>(r13 + 0x7cu) = u32(r4);  // (from the original)
    *gptr<u32>(r13 + 0x50u) = u32(r4);  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(0x909d20u);  // (from the original)
    r0 = r13 + 0xcu;  // (from the original)
    r13 = r13 + 0x120u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    r5 = r0;
    r13 = r13 - 0xf8u;  // (from the original)
    r0 = r0 + 0x4b4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0072355c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00720448(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056d5dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0xcu;  // (from the original)
    r0 = r5 + 0x5000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e8498(r0, r1, r2, r3);
    r1 = 0x5e35dcu;  // (from the original)
    r3 = 2u;
    r2 = 0x20u;  // (from the original)
    r0 = r13 + 0xa8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r4 = 0u;
    *gptr<u32>(r13 + 8u) = u32(7u);
    r1 = 0x852400u;  // (from the original)
    r3 = r4;
    r2 = 0x54u;  // (from the original)
    r0 = r13 + 0xa8u;  // (from the original)
    *gptr<u32>(r13) = u32(r4);
    *gptr<u32>(r13 + 4u) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_005e34c4(r0, r1, r2, r3);
    r0 = 1u;
    *gptr<u32>(r13 + 4u) = u32(r0);
    *gptr<u32>(r13 + 8u) = u32(r0);
    r1 = 0x852400u;  // (from the original)
    r3 = 0u;
    r2 = 0xbu;  // (from the original)
    r6 = r13 + 0xa8u;  // (from the original)
    r0 = r13 + 0xc8u;  // (from the original)
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_005e34c4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 1u;
    r1 = 2u;
    r0 = r5 + 0x5000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e49c0(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    do {
L_2db3f0:;
        r2 = r6 + (r4 << 5);
        r1 = r4;
        r0 = r5 + 0x5000u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_005e4994(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 2u);
    r0 = r5 + 0x5000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e4988(r0, r1, r2, r3);
    r3 = 0u;
    r2 = r3;
    r1 = r3;
    r0 = r5 + 0x5000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005d4a78(r0, r1, r2, r3);
    r1 = 0x5e3618u;  // (from the original)
    r3 = 2u;
    r2 = 0x20u;  // (from the original)
    r0 = r13 + 0xa8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r4 = 0x90a3e8u;  // (from the original)
    *gptr<u32>(r13 + 0x7cu) = u32(r4);  // (from the original)
    *gptr<u32>(r13 + 0x50u) = u32(r4);  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(0x909d20u);  // (from the original)
    r0 = r13 + 0xcu;  // (from the original)
    r13 = r13 + 0xf8u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r2 = 0x8f32a4u;  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r1 = r2 + 0x6cu;  // (from the original)
    arg0->word_28 = u32(r1);
    r3 = r2 + 0x170u;  // (from the original)
    arg0->word_0 = u32(r2);
    arg0->word_a4 = u32(r3);
    r0 = r0 + 0x5000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e8a7c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f47a0u;  // (from the original)
    *gptr<u32>(r0 - 0x4f0u) = u32(r1);  // (from the original)
    r0 = r0 - 0xd4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x15cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x24cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = 0x2b6ef8u;  // (from the original)
    r4 = r0 - 0x4b34u;  // (from the original)
    r3 = 6u;
    r2 = 0xe0u;  // (from the original)
    r0 = r0 - 0x568u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x44e8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f7710(r0, r1, r2, r3);
    r3 = 0x8f3ef4u;  // (from the original)
    r1 = 0x1888u;  // (from the original)
    r0 = r0 - 0x243cu;  // (from the original)
    r2 = r3 + 0x2cu;  // (from the original)
    *gptr<u32>(r0 + 0xa40u) = u32(r2);  // (from the original)
    *gptr<u32>(r0) = u32(r3);
    *gptr<u32>(r1 + r0) = u32(r3 + 0x40u);  // (from the original)
    r5 = 0x8ee248u;  // (from the original)
    r0 = r0 + 0x22f4u;  // (from the original)
    r6 = r5 + 0x10u;  // (from the original)
    *gptr<u32>(r0) = u32(r5);
    r0 = r0 + 0xcu;  // (from the original)
    *gptr<u32>(r0) = u32(r6);
    r0 = r0 + 0x108u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = 0x320b0cu;  // (from the original)
    r4 = r0 - 0x2314u;  // (from the original)
    r3 = 4u;
    r2 = 0x290u;  // (from the original)
    r0 = r0 - 0xa60u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x18acu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00317dec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x18acu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002684c0(r0, r1, r2, r3);
    r4 = r0;
    r1 = 0x320b0cu;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x290u;  // (from the original)
    r0 = r0 - 0x19a0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r4 - 0x1ae0u;  // (from the original)
    r0 = r4 + 0x114u;  // (from the original)
    *gptr<u32>(r4) = u32(r5);
    *gptr<u32>(r4 + 0xcu) = u32(r6);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f08acu;  // (from the original)
    ea = r0 - 0x138u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    r0 = ea;
    guest::cpu()->r[13] = r13;
    r0 = call_002f7710(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00317dec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xa0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003170d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r13 = r13 + 0x10;  // (from the original)
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_006aaa30(r0, r1, r2, r3);
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
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r1 = 0x8f3428u;  // (from the original)
    r13 = r13 - 8;
    r2 = r1 + 0x6cu;  // (from the original)
    arg0->word_0 = u32(r1);
    arg0->word_28 = u32(r2);
    r1 = 0x8f47a0u;  // (from the original)
    arg0->word_ad54 = u32(r1);
    r0 = r0 + 0xb170u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x15cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x24cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00567ef0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f08acu;  // (from the original)
    ea = r0 - 0x13cu;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    r0 = ea;
    guest::cpu()->r[13] = r13;
    r0 = call_002f7710(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x8468u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0026fe3c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x2788u;  // (from the original)
    r2 = 0x8f2a0cu;  // (from the original)
    *gptr<u32>(r0) = u32(0x8f270cu);  // (from the original)
    r0 = r0 + 0x25a0u;  // (from the original)
    r1 = r2 + 0x10u;  // (from the original)
    *gptr<u32>(r0) = u32(r2);
    r0 = r0 + 0xcu;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 0x1acu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x140u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0022c5d8(r0, r1, r2, r3);
    r2 = 0x36cu;  // (from the original)
    r1 = 0x2b950cu;  // (from the original)
    r4 = r0 - 0x25a0u;  // (from the original)
    r3 = 8u;
    r0 = r0 - (r2 << 3);
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002b79e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r13 = r13 + 8;
    r0 = r0 - 0x4cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_006aaa30(r0, r1, r2, r3);
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
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r1 = 0x8f3514u;  // (from the original)
    r13 = r13 - 8;
    r2 = r1 + 0x6cu;  // (from the original)
    arg0->word_0 = u32(r1);
    arg0->word_28 = u32(r2);
    r0 = r0 + 0x5420u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e8a7c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f47a0u;  // (from the original)
    *gptr<u32>(r0 - 0x4f0u) = u32(r1);  // (from the original)
    r0 = r0 - 0xd4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x15cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x24cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0x8f08acu;  // (from the original)
    ea = r0 - 0x13cu;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    r0 = ea;
    guest::cpu()->r[13] = r13;
    r0 = call_002f7710(r0, r1, r2, r3);
    r1 = 0x8f47ecu;  // (from the original)
    r3 = 0x213cu;  // (from the original)
    r0 = r0 - 0x21d8u;  // (from the original)
    r2 = r1 + 0x28u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r3 + r0) = u32(r2);
    r0 = r0 + 0x21b0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f4828u;  // (from the original)
    r0 = r0 - 0x2160u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 0x201cu;  // (from the original)
    *gptr<u32>(r0) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_002f7710(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0x8ee248u;  // (from the original)
    r1 = r2 + 0x10u;  // (from the original)
    *gptr<u32>(r0 - 0x134u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 - 0x140u) = u32(r2);  // (from the original)
    r0 = r0 - 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = 0x2e3854u;  // (from the original)
    r4 = r0 - 0x1efcu;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x2b4u;  // (from the original)
    r0 = r0 - 0x1b28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x3a8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x150u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x2c04u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0027460c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r13 = r13 + 8;
    r0 = r0 - 0x4cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_006aaa30(r0, r1, r2, r3);
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
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r2 = 0u;
    r3 = *gptr<u32>(arg0->word_0 + 0x1cu);  // (from the original)
    r1 = r2;
    return guest::call_address<u32>(r3, r0, r1, r2, r3);
}

}  // namespace d_002dfbf0
GUEST_EXPORT(0x002dfbf0, d_002dfbf0::f_002dfbf0);
