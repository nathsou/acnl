// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_005e1974: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e1974 {

inline constexpr guest::Function<0x0013cd00, u32(u32, u32, u32, u32)> call_0013cd00;  // (from the original)

u32 f_005e1974(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10u;  // (from the original)
    r3 = 0x9047f8u;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r1);
    r1 = r13;
    r2 = ~0u;
    r0 = r0 + 0x20u;  // (from the original)
    *gptr<u32>(r13) = u32(r3);
    guest::cpu()->r[13] = r13;
    r0 = call_0013cd00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005e1974
GUEST_EXPORT(0x005e1974, d_005e1974::f_005e1974);

// f_005e19a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e19a8 {

struct __attribute__((packed)) Object_005e19a8_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_005e19a8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005e19a8_0, word_4, 0x4);  // (from the original)


void f_005e19a8(gptr<Object_005e19a8_0> arg0, u32 r1) {
    arg0->word_4 = u32(r1);
    r1 = 1u;
    arg0->word_0 = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005e19a8
GUEST_EXPORT(0x005e19a8, d_005e19a8::f_005e19a8);

// f_005e1a00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e1a00 {

struct __attribute__((packed)) Object_005e1a00_0 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_005e1a00_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005e1a00_0, word_8, 0x8);  // (from the original)


void f_005e1a00(gptr<Object_005e1a00_0> arg0, u32 r1) {
    arg0->word_8 = u32(r1);
    r1 = 2u;
    arg0->word_0 = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005e1a00
GUEST_EXPORT(0x005e1a00, d_005e1a00::f_005e1a00);

// f_005e3128: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e3128 {

inline constexpr guest::Function<0x005d6868, u32(u32, u32, u32, u32)> call_005d6868;  // (from the original)
inline constexpr guest::Function<0x00601a20, u32(u32, u32, u32, u32)> call_00601a20;  // (from the original)

u32 f_005e3128(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r3 = 0u;
    r13 = r13 - 0x10;  // (from the original)
    r2 = r3;
    guest::cpu()->r[13] = r13;
    r0 = call_005d6868(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r0 = r0 + 0x44u;  // (from the original)
    r5 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_00601a20(r0, r1, r2, r3);
    r1 = 0u;
    ea = r0 + 0x68u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    ea = r0;
    *gptr<u32>(ea) = u32(0x908f2cu);  // (from the original)
    ea = r0 + 0x6cu;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    ea = r0 + 0x70u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    ea = r0 + 0x60u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    r0 = r0 - 0x44u;  // (from the original)
    *gptr<u32>(r0 + 0xb8u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0xbcu) = u32(r1);  // (from the original)
    *gptr<u8>(r0 + 0xc0u) = u8(r1);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005e3128
GUEST_EXPORT(0x005e3128, d_005e3128::f_005e3128);

// f_005e3238: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e3238 {

inline constexpr guest::Function<0x00301484, u32(u32, u32, u32, u32)> call_00301484;  // (from the original)
inline constexpr guest::Function<0x005f6eb0, u32(u32, u32, u32, u32)> call_005f6eb0;  // (from the original)
inline constexpr guest::Function<0x005f723c, u32(u32, u32, u32, u32)> call_005f723c;  // (from the original)

u32 f_005e3238(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x30u;  // (from the original)
    r5 = r0;
    if (r1 >= 0x3cu) {  // (from the original)
        r4 = 0u;
    } else {
        r4 = r1;
    }
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005f723c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00301484(r0, r1, r2, r3);
    zf = r0 == 1u;
    if (!zf) {
        zf = r0 == 2u;
    }
    if (zf) {
        r0 = 6u;
    } else {
        r0 = 0u;
    }
    *gptr<u32>(r13) = u32(r0);
    *gptr<u32>(r13 + 4) = u32(4u);
    r3 = 2u;
    r2 = r4;
    r1 = r5;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_005f6eb0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 3u;
    *gptr<u32>(r5 + 0x40u) = u32(r4);  // (from the original)
    *gptr<u8>(r5 + 0x3eu) = u8(r0);  // (from the original)
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005e3238
GUEST_EXPORT(0x005e3238, d_005e3238::f_005e3238);

// f_005e32a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e32a0 {

inline constexpr guest::Function<0x005d46dc, u32(u32, u32, u32, u32)> call_005d46dc;  // (from the original)
inline constexpr guest::Function<0x005f6eb0, u32(u32, u32, u32, u32)> call_005f6eb0;  // (from the original)
inline constexpr guest::Function<0x005f723c, u32(u32, u32, u32, u32)> call_005f723c;  // (from the original)

u32 f_005e32a0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x38u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r6 = r2;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005f723c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005d46dc(r0, r1, r2, r3);
    zf = r0 == 8u;
    r0 = 4u;
    if (zf) {
        r0 = 1u;
    }
    *gptr<u32>(r13) = u32(0xau);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r0);
    r3 = r6;
    r2 = r5;
    r1 = r4;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_005f6eb0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 5u;
    *gptr<u32>(r4 + 0x40u) = u32(r5);  // (from the original)
    *gptr<u8>(r4 + 0x3eu) = u8(r0);  // (from the original)
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005e32a0
GUEST_EXPORT(0x005e32a0, d_005e32a0::f_005e32a0);

// f_005e3344: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e3344 {

inline constexpr guest::Function<0x005d46dc, u32(u32, u32, u32, u32)> call_005d46dc;  // (from the original)

u32 f_005e3344(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 r14 = guest::cpu()->r[14];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = call_005d46dc(r0, r1, r2, r3);
    zf = r0 == 6u;
    if (!zf) {
        zf = r0 == 3u;
    }
    if (zf) {
        r2 = 1u;
        goto L_5e3374;
    }
    r2 = 0u;
    if (r0 == 7u) {
        r3 = 1u;
        goto L_5e3384;
    }
L_5e3374:;
    r3 = 0u;
    if (r0 == 8u) {
        r12 = 1u;
        goto L_5e3398;
    }
L_5e3384:;
    zf = r0 == 5u;
    if (!zf) {
        zf = r0 == 2u;
    }
    r12 = 0u;
    if (zf) {
        r14 = 1u;
        goto L_5e33ac;
    }
L_5e3398:;
    zf = r0 == 1u;
    if (!zf) {
        zf = r0 == 4u;
    }
    r14 = 0u;
    if (zf) {
        r1 = 1u;
        goto L_5e33b0;
    }
L_5e33ac:;
    r1 = 0u;
L_5e33b0:;
    r0 = 1u;
    if (r5 != 0) {
        if (r5 == 1u) {
            goto L_5e3428;
        }
        if (r5 == 2u) {
            goto L_5e3440;
        }
        if (r5 == 3u) {
            goto L_5e3458;
        }
        if (r5 == 4u) {
            goto L_5e3470;
        }
        if (r5 == 5u) {
            goto L_5e3488;
        }
        if (r5 == 6u) {
            goto L_5e34ac;
        }
        if (r5 != 7u) {
            goto L_5e3424;
        }
        res = r1 | r2;
        r1 = res;
        if (res == 0) {
            goto L_5e3424;
        }
        goto L_5e34bc;
    }
    res = r14 | (r2 | r3) | r1;
    if (res != 0) {
        *gptr<u8>(r4 + 0x1du) = u8(r0);  // (from the original)
    }
    res = r1 | r2;
    if (res != 0) {
        *gptr<u8>(r4 + 0x1eu) = u8(r0);  // (from the original)
    }
    res = r3 | r12;
    r1 = res;
    if (res == 0) {
        goto L_5e3424;
    }
L_5e3420:;
    *gptr<u8>(r4 + 0x1fu) = u8(r0);  // (from the original)
L_5e3424:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_5e3428:;
    if (r1 != 0) {
        *gptr<u8>(r4 + 0x1du) = u8(r0);  // (from the original)
        *gptr<u8>(r4 + 0x1eu) = u8(r0);  // (from the original)
    }
    res = r3 | r12;
    r1 = res;
    if (res == 0) {
        guest::preempt();
        goto L_5e3424;
    }
    guest::preempt();
    goto L_5e3420;
L_5e3440:;
    res = r1 | r2;
    if (res != 0) {
        *gptr<u8>(r4 + 0x1du) = u8(r0);  // (from the original)
        *gptr<u8>(r4 + 0x1eu) = u8(r0);  // (from the original)
    }
    res = r3 | r12;
    r1 = res;
    if (res == 0) {
        guest::preempt();
        goto L_5e3424;
    }
    guest::preempt();
    goto L_5e3420;
L_5e3458:;
    res = r1 | r2;
    if (res != 0) {
        *gptr<u8>(r4 + 0x1du) = u8(r0);  // (from the original)
        *gptr<u8>(r4 + 0x1eu) = u8(r0);  // (from the original)
    }
    res = r3 | r12;
    r1 = res;
    if (res == 0) {
        guest::preempt();
        goto L_5e3424;
    }
    guest::preempt();
    goto L_5e3420;
L_5e3470:;
    res = r1 | (r2 | r3);
    r1 = res;
    if (res != 0) {
        *gptr<u8>(r4 + 0x1eu) = u8(r0);  // (from the original)
    }
    if (r12 == 0) {
        guest::preempt();
        goto L_5e3424;
    }
    guest::preempt();
    goto L_5e3420;
L_5e3488:;
    res = r14 | (r2 | r3) | r1;
    if (res != 0) {
        *gptr<u8>(r4 + 0x1du) = u8(r0);  // (from the original)
    }
    res = r1 | r2;
    if (res != 0) {
        *gptr<u8>(r4 + 0x1eu) = u8(r0);  // (from the original)
    }
    res = r3 | r12;
    r1 = res;
    if (res == 0) {
        guest::preempt();
        goto L_5e3424;
    }
    guest::preempt();
    goto L_5e3420;
L_5e34ac:;
    res = r1 | r2 | r3 | r12;
    r1 = res;
    if (res == 0) {
        guest::preempt();
        goto L_5e3424;
    }
L_5e34bc:;
    *gptr<u8>(r4 + 0x1eu) = u8(r0);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005e3344
GUEST_EXPORT(0x005e3344, d_005e3344::f_005e3344);

// f_005e34c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e34c4 {

struct __attribute__((packed)) Object_005e34c4_0 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 byte_1c;
    u8 byte_1d;
    u8 byte_1e;
    u8 byte_1f;
};
GUEST_OFFSET(Object_005e34c4_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005e34c4_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005e34c4_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005e34c4_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005e34c4_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_005e34c4_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_005e34c4_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_005e34c4_0, byte_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_005e34c4_0, byte_1d, 0x1d);  // (from the original)
GUEST_OFFSET(Object_005e34c4_0, byte_1e, 0x1e);  // (from the original)
GUEST_OFFSET(Object_005e34c4_0, byte_1f, 0x1f);  // (from the original)


void f_005e34c4(gptr<Object_005e34c4_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    r13 = r13 - 8;
    ea = r13 + 8u;
    S0 = std::bit_cast<float>(*gptr<u32>(ea));
    S1 = std::bit_cast<float>(*gptr<u32>(ea + 4));
    r12 = 0u;
    ea = r13 + 0x10u;  // (from the original)
    r4 = *gptr<u32>(ea);
    arg0->byte_0 = u8(1u);
    arg0->word_4 = u32(r12);
    arg0->byte_1d = u8(r12);
    arg0->byte_1e = u8(r12);
    arg0->byte_1f = u8(r12);
    arg0->word_8 = u32(r1);
    arg0->word_c = u32(r2);
    arg0->word_10 = u32(r3);
    arg0->word_14 = u32(std::bit_cast<u32>(S0));
    arg0->word_18 = u32(std::bit_cast<u32>(S1));
    arg0->byte_1c = u8(r4);
    r13 = r13 + 8;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_005e34c4
GUEST_EXPORT(0x005e34c4, d_005e34c4::f_005e34c4);

// f_005e350c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e350c {

struct __attribute__((packed)) Object_005e350c_0 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 byte_1c;
    u8 byte_1d;
    u8 byte_1e;
    u8 byte_1f;
};
GUEST_OFFSET(Object_005e350c_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005e350c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005e350c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005e350c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005e350c_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_005e350c_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_005e350c_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_005e350c_0, byte_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_005e350c_0, byte_1d, 0x1d);  // (from the original)
GUEST_OFFSET(Object_005e350c_0, byte_1e, 0x1e);  // (from the original)
GUEST_OFFSET(Object_005e350c_0, byte_1f, 0x1f);  // (from the original)


void f_005e350c(gptr<Object_005e350c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    r13 = r13 - 8;
    r12 = 0u;
    ea = r13 + 0xcu;  // (from the original)
    r4 = *gptr<u32>(ea);
    S0 = std::bit_cast<float>(*gptr<u32>(r13 + 8u));
    arg0->byte_0 = u8(r12);
    arg0->word_c = u32(~0u);
    arg0->word_8 = u32(r12);
    arg0->byte_1d = u8(r12);
    arg0->byte_1e = u8(r12);
    arg0->byte_1f = u8(r12);
    arg0->word_4 = u32(r1);
    arg0->word_10 = u32(r2);
    arg0->word_14 = u32(r3);
    arg0->word_18 = u32(std::bit_cast<u32>(S0));
    arg0->byte_1c = u8(r4);
    r13 = r13 + 8;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return;
}

}  // namespace d_005e350c
GUEST_EXPORT(0x005e350c, d_005e350c::f_005e350c);

// f_005e3550: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e3550 {

struct __attribute__((packed)) Object_005e3550_0 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 byte_1c;
    u8 byte_1d;
    u8 byte_1e;
    u8 byte_1f;
};
GUEST_OFFSET(Object_005e3550_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005e3550_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005e3550_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005e3550_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005e3550_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_005e3550_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_005e3550_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_005e3550_0, byte_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_005e3550_0, byte_1d, 0x1d);  // (from the original)
GUEST_OFFSET(Object_005e3550_0, byte_1e, 0x1e);  // (from the original)
GUEST_OFFSET(Object_005e3550_0, byte_1f, 0x1f);  // (from the original)


void f_005e3550(gptr<Object_005e3550_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    r13 = r13 - 8;
    ea = r13 + 8u;
    S0 = std::bit_cast<float>(*gptr<u32>(ea));
    S1 = std::bit_cast<float>(*gptr<u32>(ea + 4));
    r12 = 0u;
    ea = r13 + 0x10u;  // (from the original)
    r4 = *gptr<u32>(ea);
    arg0->byte_0 = u8(1u);
    arg0->word_4 = u32(r12);
    arg0->byte_1d = u8(r12);
    arg0->byte_1e = u8(r12);
    arg0->byte_1f = u8(r12);
    arg0->word_8 = u32(r1);
    arg0->word_c = u32(r2);
    arg0->word_10 = u32(r3);
    arg0->word_14 = u32(std::bit_cast<u32>(S0));
    arg0->word_18 = u32(std::bit_cast<u32>(S1));
    arg0->byte_1c = u8(r4);
    r13 = r13 + 8;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_005e3550
GUEST_EXPORT(0x005e3550, d_005e3550::f_005e3550);

// f_005e35dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e35dc {

struct __attribute__((packed)) Object_005e35dc_0 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 byte_1c;
    u8 byte_1d;
    u8 byte_1e;
    u8 byte_1f;
};
GUEST_OFFSET(Object_005e35dc_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005e35dc_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005e35dc_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005e35dc_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005e35dc_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_005e35dc_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_005e35dc_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_005e35dc_0, byte_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_005e35dc_0, byte_1d, 0x1d);  // (from the original)
GUEST_OFFSET(Object_005e35dc_0, byte_1e, 0x1e);  // (from the original)
GUEST_OFFSET(Object_005e35dc_0, byte_1f, 0x1f);  // (from the original)


void f_005e35dc(gptr<Object_005e35dc_0> arg0) {
    u32 r1 = 0;
    arg0->byte_0 = u8(2u);
    r1 = 0u;
    arg0->word_4 = u32(r1);
    arg0->word_8 = u32(r1);
    arg0->word_c = u32(~0u);
    arg0->word_10 = u32(r1);
    arg0->word_14 = u32(r1);
    arg0->word_18 = u32(r1);
    arg0->byte_1c = u8(r1);
    arg0->byte_1d = u8(r1);
    arg0->byte_1e = u8(r1);
    arg0->byte_1f = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005e35dc
GUEST_EXPORT(0x005e35dc, d_005e35dc::f_005e35dc);

// f_005e3888: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e3888 {

struct __attribute__((packed)) Object_005e3888_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u32 word_30;
    u32 word_34;
    u32 word_38;
    u32 word_3c;
    u8 byte_40;
    u8 unknown_41[0x3];  // (not used here)
    u32 word_44;
    u8 byte_48;
    u8 unknown_49[0x3];  // (not used here)
    u32 word_4c;
    u32 word_50;
    u32 word_54;
    u32 word_58;
    u32 word_5c;
    u32 word_60;
    u32 word_64;
    u8 byte_68;
    u8 unknown_69[0x3];  // (not used here)
    u32 word_6c;
    u32 word_70;
    u32 word_74;
    u32 word_78;
};
GUEST_OFFSET(Object_005e3888_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005e3888_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005e3888_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005e3888_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005e3888_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_005e3888_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_005e3888_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_005e3888_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_005e3888_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_005e3888_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_005e3888_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_005e3888_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_005e3888_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_005e3888_0, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_005e3888_0, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_005e3888_0, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_005e3888_0, byte_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_005e3888_0, word_44, 0x44);  // (from the original)
GUEST_OFFSET(Object_005e3888_0, byte_48, 0x48);  // (from the original)
GUEST_OFFSET(Object_005e3888_0, word_4c, 0x4c);  // (from the original)
GUEST_OFFSET(Object_005e3888_0, word_50, 0x50);  // (from the original)
GUEST_OFFSET(Object_005e3888_0, word_54, 0x54);  // (from the original)
GUEST_OFFSET(Object_005e3888_0, word_58, 0x58);  // (from the original)
GUEST_OFFSET(Object_005e3888_0, word_5c, 0x5c);  // (from the original)
GUEST_OFFSET(Object_005e3888_0, word_60, 0x60);  // (from the original)
GUEST_OFFSET(Object_005e3888_0, word_64, 0x64);  // (from the original)
GUEST_OFFSET(Object_005e3888_0, byte_68, 0x68);  // (from the original)
GUEST_OFFSET(Object_005e3888_0, word_6c, 0x6c);  // (from the original)
GUEST_OFFSET(Object_005e3888_0, word_70, 0x70);  // (from the original)
GUEST_OFFSET(Object_005e3888_0, word_74, 0x74);  // (from the original)
GUEST_OFFSET(Object_005e3888_0, word_78, 0x78);  // (from the original)

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x005d46dc, u32(u32, u32, u32, u32)> call_005d46dc;  // (from the original)
inline constexpr guest::Function<0x005e6bf8, u32(u32, u32, u32, u32)> call_005e6bf8;  // (from the original)

u32 f_005e3888(gptr<Object_005e3888_0> arg0) {
    u32 b = 0;
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    u32 cf = 0;
    r13 = r13 - 0x18;  // (from the original)
    r1 = 0xc1u;  // (from the original)
    r3 = 0x90a538u;  // (from the original)
    arg0->word_8 = u32(r1);
    r5 = 0x90a910u;  // (from the original)
    arg0->word_4 = u32(r0 + 0x460u);  // (from the original)
    r4 = r0 + 0xcu;  // (from the original)
    arg0->word_0 = u32(r3);
    arg0->word_c = u32(r5);
    arg0->word_10 = u32(r0 + 0x460u);  // (from the original)
    r12 = 0x11u;  // (from the original)
    arg0->word_14 = u32(r1);
    arg0->word_18 = u32(r3);
    r1 = r0 + 0x5e2u;  // (from the original)
    arg0->word_1c = u32(r1);
    arg0->word_20 = u32(r12);
    arg0->word_24 = u32(r5);
    arg0->word_28 = u32(r1);
    arg0->word_2c = u32(r12);
    arg0->word_30 = u32(r5);
    r7 = 0u;
    arg0->word_34 = u32(arg0->word_28);
    arg0->word_38 = u32(arg0->word_2c);
    arg0->word_3c = u32(r0 + 0x2ccu);  // (from the original)
    r3 = 3u;
    arg0->byte_40 = u8(r3);
    arg0->word_44 = u32(r7);
    arg0->byte_48 = u8(r7);
    arg0->word_4c = u32(r5);
    arg0->word_50 = u32(r7);
    arg0->word_54 = u32(r7);
    arg0->word_5c = u32(r5);
    arg0->word_58 = u32(r7);
    arg0->word_60 = u32(arg0->word_10);
    r2 = arg0->word_14;
    arg0->word_64 = u32(r2);
    arg0->byte_68 = u8(r7);
    arg0->word_6c = u32(r7);
    arg0->word_70 = u32(r7);
    arg0->word_74 = u32(r7);
    arg0->word_78 = u32(r7);
    r1 = r0 + 0x2ccu;  // (from the original)
    r0 = r0 + 0x7cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e6bf8(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x7cu;  // (from the original)
    ea = r0 + 0x2bcu;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r0 + 0x10u;  // (from the original)
    r2 = *gptr<u32>(ea);
    r4 = r0 + 0x2ccu;  // (from the original)
    ea = r0 + 0x2c0u;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    ea = r0 + 0x14u;  // (from the original)
    r2 = *gptr<u32>(ea);
    ea = r0 + 0x2c4u;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    *gptr<u32>(ea + 4) = u32(r7);
    *gptr<u32>(r0 + 0x2ccu) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x2d0u) = u32(*gptr<u32>(r0 + 0x10u));  // (from the original)
    r1 = 0x180u;  // (from the original)
    *gptr<u32>(r4 + 8u) = u32(*gptr<u32>(r0 + 0x14u));  // (from the original)
    *gptr<u8>(r4 + 0xcu) = u8(r7);  // (from the original)
    r0 = r4 + 0x14u;  // (from the original)
    *gptr<u32>(r4 + 0x10u) = u32(r7);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_005d46dc(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    if (zf) {
        *gptr<u8>(r4 + 0xcu) = u8(1u);  // (from the original)
    }
    r2 = r4 + 0x194u;  // (from the original)
    r0 = r4 + 0x14u;  // (from the original)
    if (!zf) {
        *gptr<u8>(r4 + 0xcu) = u8(r7);  // (from the original)
    }
    zf = r2 == r0;
    cf = r2 >= r0;
    r1 = 0u;
    if (cf && !zf) {
        r6 = r7;
    }
    if (!cf || zf) {
        r6 = 0u;
    }
    r2 = r2 - r0;
    do {
L_5e39d0:;
        *gptr<u32>(r0 + (r1 << 2)) = u32(r7);
        b = 1u;
        r1 = r1 + b;
        b = 2u;
        r6 = r6 + b;
        *gptr<u32>(r0 + (r1 << 2)) = u32(r7);
        b = u32(s32(r2) >> 2);
        res = r6 - b;
        r1 = r1 + 1u;
        guest::preempt();
    } while (res >> 0x1f != ((r6 ^ b) & (r6 ^ res)) >> 0x1f);  // (from the original)
    r1 = 0x182u;  // (from the original)
    r5 = r4 - 0x2ccu;  // (from the original)
    r0 = r4 + 0x194u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x22u;  // (from the original)
    r0 = r5 + 0x5e2u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301444(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    *gptr<u32>(r4 + 0x338u) = u32(r7);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005e3888
GUEST_EXPORT(0x005e3888, d_005e3888::f_005e3888);

// f_005e3ae4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e3ae4 {

struct __attribute__((packed)) Object_005e3ae4_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x1];  // (not used here)
    u16 half_e;
    u16 half_10;
};
GUEST_OFFSET(Object_005e3ae4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005e3ae4_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005e3ae4_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005e3ae4_0, byte_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005e3ae4_0, half_e, 0xe);  // (from the original)
GUEST_OFFSET(Object_005e3ae4_0, half_10, 0x10);  // (from the original)


void f_005e3ae4(gptr<Object_005e3ae4_0> arg0) {
    u32 r1 = 0;
    u32 r2 = 0;
    r2 = 0u;
    arg0->word_4 = u32(r2);
    r1 = r2;
    arg0->word_8 = u32(r2);
    arg0->word_0 = u32(0x90905cu);  // (from the original)
    arg0->byte_c = u8(r1);
    arg0->half_e = u16(r1);
    arg0->half_10 = u16(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005e3ae4
GUEST_EXPORT(0x005e3ae4, d_005e3ae4::f_005e3ae4);

// f_005e49c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e49c0 {

inline constexpr guest::Function<0x005e4a28, u32(u32, u32, u32, u32)> call_005e4a28;  // (from the original)

u32 f_005e49c0(u32 r0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 nf = 0;
    u32 vf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r6 = r1;
    r5 = r2;
    r4 = r0;
    r0 = call_005e4a28(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 4u;
    res = r5;
    nf = res >> 0x1f;  // (from the original)
    vf = (r5 & (r5 ^ res)) >> 0x1f;  // (from the original)
    *gptr<u8>(r4 + 4u) = u8(r0);
    if (nf == vf) {
        res = r6 - r5;
        nf = res >> 0x1f;  // (from the original)
        vf = ((r6 ^ r5) & (r6 ^ res)) >> 0x1f;  // (from the original)
    }
    *gptr<u32>(r4 + 8u) = u32(r6);
    if (nf != vf) {
        r0 = 0u;
    }
    if (nf == vf) {
        r0 = 2u;
        *gptr<u32>(r4 + 0xc0u) = u32(r5);  // (from the original)
    }
    *gptr<u8>(r4 + 0xc4u) = u8(r0);  // (from the original)
    r0 = 1u;
    *gptr<u8>(r4 + 0xc9u) = u8(r0);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
}

}  // namespace d_005e49c0
GUEST_EXPORT(0x005e49c0, d_005e49c0::f_005e49c0);

// f_005e4bd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e4bd4 {

struct __attribute__((packed)) Object_005e4bd4_0 {
    u32 word_0;
    u8 byte_4;
    u8 byte_5;
    u8 byte_6;
    u8 unknown_7[0x1];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_005e4bd4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005e4bd4_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005e4bd4_0, byte_5, 0x5);  // (from the original)
GUEST_OFFSET(Object_005e4bd4_0, byte_6, 0x6);  // (from the original)
GUEST_OFFSET(Object_005e4bd4_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x005d4edc, u32(u32, u32, u32, u32)> call_005d4edc;  // (from the original)
inline constexpr guest::Function<0x00779500, u32(u32, u32, u32, u32)> call_00779500;  // (from the original)

u32 f_005e4bd4(gptr<Object_005e4bd4_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = r0;
    r2 = r1 * 0x2bu;  // (from the original)
    arg0->word_0 = u32(0x909080u);  // (from the original)
    r7 = 5u;
    r6 = 0u;
    arg0->byte_5 = u8(r7);
    arg0->byte_4 = u8(r6);
    arg0->byte_6 = u8(r6);
    r5 = r1;
    r0 = 8u + (r2 << 2);
    arg0->word_8 = u32(r6);
    r0 = call_00779500(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r0 = r0 + 8u;
        r8 = r0 - 8u;
        r1 = 0xacu;  // (from the original)
        *gptr<u32>(r8) = u32(r1);
        *gptr<u32>(r8 + 4) = u32(r5);
        r2 = r1;
        r1 = 0x5d4edcu;  // (from the original)
        r3 = r5;
        r0 = call_00301d0c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r1 = r4 + 0xcu;  // (from the original)
    *gptr<u32>(r1) = u32(r0);
    *gptr<u32>(r1 + 4) = u32(r5);
    r0 = r4 + 0x14u;  // (from the original)
    r0 = call_005d4edc(r0, r1, r2, r3);
    r0 = r0 - 0x14u;  // (from the original)
    r1 = ~0u;
    *gptr<u32>(r0 + 0xc0u) = u32(r1);  // (from the original)
    *gptr<u8>(r0 + 0xc4u) = u8(r6);  // (from the original)
    *gptr<u8>(r0 + 0xc5u) = u8(r7);  // (from the original)
    *gptr<u8>(r0 + 0xc6u) = u8(r6);  // (from the original)
    *gptr<u8>(r0 + 0xc7u) = u8(r6);  // (from the original)
    *gptr<u8>(r0 + 0xc8u) = u8(r6);  // (from the original)
    *gptr<u8>(r0 + 0xc9u) = u8(r6);  // (from the original)
    *gptr<u32>(r0 + 0xccu) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0xd0u) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0xd4u) = u32(r6);  // (from the original)
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005e4bd4
GUEST_EXPORT(0x005e4bd4, d_005e4bd4::f_005e4bd4);

// f_005e626c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e626c {

struct __attribute__((packed)) Object_005e626c_0 {
    u8 unknown_0[0x60];  // (not used here)
    u32 word_60;
    u8 byte_64;
    u8 unknown_65[0x3];  // (not used here)
    u32 word_68;
    u32 word_6c;
    u32 word_70;
    u8 byte_74;
};
GUEST_OFFSET(Object_005e626c_0, word_60, 0x60);  // (from the original)
GUEST_OFFSET(Object_005e626c_0, byte_64, 0x64);  // (from the original)
GUEST_OFFSET(Object_005e626c_0, word_68, 0x68);  // (from the original)
GUEST_OFFSET(Object_005e626c_0, word_6c, 0x6c);  // (from the original)
GUEST_OFFSET(Object_005e626c_0, word_70, 0x70);  // (from the original)
GUEST_OFFSET(Object_005e626c_0, byte_74, 0x74);  // (from the original)

struct __attribute__((packed)) Object_005e626c_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_005e626c_1, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0060184c, u32(u32, u32, u32, u32)> call_0060184c;  // (from the original)
inline constexpr guest::Function<0x006019b0, u32(u32, u32, u32, u32)> call_006019b0;  // (from the original)

u32 f_005e626c(gptr<Object_005e626c_0> arg0, gptr<Object_005e626c_1> arg1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    ea = r13 + 0x10u;  // (from the original)
    r0 = *gptr<u32>(ea);
    r12 = *gptr<u32>(ea + 4);
    r6 = 0u;
    r5 = arg0->word_60;
    arg0->byte_64 = u8(r2);
    arg0->word_70 = u32(r6);
    zf = r5 == 0;
    r5 = r4 + 0x68u;  // (from the original)
    arg0->word_68 = u32(r0);
    arg0->word_6c = u32(r12);
    arg0->byte_74 = u8(r3);
    if (zf) {
        goto L_5e62cc;
    }
    if (u32(r2 >= 0xau) && !u32(r2 == 0xau)) {  // (from the original)
        goto L_5e62cc;
    }
    if (arg1->word_0 == 0) {
        goto L_5e62cc;
    }
    r2 = 0x95df14u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_006019b0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x95df14u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0060184c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_5e62cc:;
    r0 = *gptr<u32>(r4 + 0x70u);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005e626c
GUEST_EXPORT(0x005e626c, d_005e626c::f_005e626c);

// f_005e6bf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e6bf8 {

struct __attribute__((packed)) Object_005e6bf8_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Object_005e6bf8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005e6bf8_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005e6bf8_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005e6bf8_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005e6bf8_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_005e6bf8_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_005e6bf8_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_005e6bf8_0, word_1c, 0x1c);  // (from the original)

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)

u32 f_005e6bf8(gptr<Object_005e6bf8_0> arg0, u32 r1, u32 r2) {
    u32 b = 0;
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    u32 cf = 0;
    r13 = r13 - 0x10;  // (from the original)
    r6 = 0u;
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(r6);
    r4 = r0;
    arg0->word_8 = u32(r6);
    arg0->word_c = u32(0x90a910u);  // (from the original)
    arg0->word_10 = u32(r6);
    r1 = 0xa0u;  // (from the original)
    arg0->word_14 = u32(r6);
    arg0->word_18 = u32(r6);
    r0 = r4 + 0x20u;  // (from the original)
    arg0->word_1c = u32(r6);
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r0 = r4 + 0x1eu;  // (from the original)
    r1 = 0x28u;  // (from the original)
    do {
L_5e6c38:;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r6);
        res = r1 - 1u;
        r1 = res;
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r6);
        r0 = ea;
        guest::preempt();
    } while (res != 0);
    r2 = r4 + 0x240u;  // (from the original)
    r0 = r4 + 0xc0u;  // (from the original)
    zf = r2 == r0;
    cf = r2 >= r0;
    r1 = 0u;
    if (cf && !zf) {
        r5 = r6;
    }
    if (!cf || zf) {
        r5 = 0u;
    }
    r2 = r2 - r0;
    do {
L_5e6c64:;
        *gptr<u32>(r0 + (r1 << 2)) = u32(r6);
        b = 1u;
        r1 = r1 + b;
        b = 2u;
        r5 = r5 + b;
        *gptr<u32>(r0 + (r1 << 2)) = u32(r6);
        b = u32(s32(r2) >> 2);
        res = r5 - b;
        r1 = r1 + 1u;
        guest::preempt();
    } while (res >> 0x1f != ((r5 ^ b) & (r5 ^ res)) >> 0x1f);  // (from the original)
    r0 = r4;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005e6bf8
GUEST_EXPORT(0x005e6bf8, d_005e6bf8::f_005e6bf8);

// f_005e7984: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e7984 {

inline constexpr guest::Function<0x001391d8, u32(u32, u32, u32, u32)> call_001391d8;  // (from the original)
inline constexpr guest::Function<0x00209c98, u32(u32, u32, u32, u32)> call_00209c98;  // (from the original)
inline constexpr guest::Function<0x005d6168, u32(u32, u32, u32, u32)> call_005d6168;  // (from the original)
inline constexpr guest::Function<0x005d6868, u32(u32, u32, u32, u32)> call_005d6868;  // (from the original)
inline constexpr guest::Function<0x005e4bd4, u32(u32, u32, u32, u32)> call_005e4bd4;  // (from the original)
inline constexpr guest::Function<0x00601a20, u32(u32, u32, u32, u32)> call_00601a20;  // (from the original)

u32 f_005e7984(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20;  // (from the original)
    r1 = 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005e4bd4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x909228u;  // (from the original)
    r10 = 0u;
    *gptr<u32>(r0) = u32(r1);
    *gptr<u8>(r0 + 0xd8u) = u8(r10);  // (from the original)
    *gptr<u8>(r0 + 0xd9u) = u8(r10);  // (from the original)
    r0 = r0 + 0xdcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00209c98(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0 - 0xdcu;  // (from the original)
    r0 = r0 + 0xf24u;  // (from the original)
    r9 = 0x90886cu;  // (from the original)
    *gptr<u32>(r0 + 0x274u) = u32(r10);  // (from the original)
    *gptr<u32>(r0 + 0x278u) = u32(r10);  // (from the original)
    *gptr<u32>(r0 + 0x27cu) = u32(r10);  // (from the original)
    r8 = 0x908f2cu;  // (from the original)
    *gptr<u32>(r0 + 0x280u) = u32(r10);  // (from the original)
    *gptr<u32>(r0 + 0x284u) = u32(r10);  // (from the original)
    r4 = 0u;
    *gptr<u32>(r0 + 0x288u) = u32(r10);  // (from the original)
    do {
L_5e79dc:;
        r0 = 0x100u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_001391d8(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0 == 0)) {
            r1 = 0x41u;  // (from the original)
            r6 = r1;
            r2 = 0xau;  // (from the original)
            r3 = 0u;
            guest::cpu()->r[13] = r13;
            r0 = call_005d6868(r0, r1, r2, r3);
            r3 = guest::cpu()->r[3];
            r7 = r0;
            r1 = r6;
            r2 = 0u;
            r0 = r0 + 0x44u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_005d6168(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            ea = r0;
            *gptr<u32>(ea) = u32(r9);
            ea = r0 + 0x2cu;  // (from the original)
            *gptr<u32>(ea) = u32(r7);
            *gptr<u32>(ea + 4) = u32(r10);
            r7 = r0 - 0x44u;  // (from the original)
            r1 = r0 + 0x34u;  // (from the original)
            r6 = r0;
            r0 = r1;
            guest::cpu()->r[13] = r13;
            r0 = call_00601a20(r0, r1, r2, r3);
            r3 = guest::cpu()->r[3];
            r2 = r0 + 0x64u;  // (from the original)
            *gptr<u32>(r0 + 0x60u) = u32(r7);  // (from the original)
            *gptr<u32>(r0) = u32(r8);
            *gptr<u32>(r2) = u32(r6);
            *gptr<u32>(r2 + 4) = u32(r10);
            *gptr<u32>(r0 + 0x6cu) = u32(r10);  // (from the original)
            *gptr<u32>(r0 + 0x70u) = u32(r10);  // (from the original)
            *gptr<u32>(r0 + 0x74u) = u32(r10);  // (from the original)
            *gptr<u32>(r0 + 0x78u) = u32(r10);  // (from the original)
            *gptr<u32>(r0 + 0x7cu) = u32(r10);  // (from the original)
            *gptr<u32>(r0 + 0x80u) = u32(r10);  // (from the original)
            r0 = r0 - 0x78u;  // (from the original)
            *gptr<u8>(r0 + 0xfcu) = u8(r10);  // (from the original)
        }
        r1 = r5 + (r4 << 2) + 0x1000u;  // (from the original)
        r4 = r4 + 1u;
        res = r4 - 6u;
        *gptr<u32>(r1 + 0x274u) = u32(r0);  // (from the original)
        guest::preempt();
    } while (res >> 0x1f != ((r4 ^ 6u) & (r4 ^ res)) >> 0x1f);  // (from the original)
    r0 = r5;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005e7984
GUEST_EXPORT(0x005e7984, d_005e7984::f_005e7984);

// f_005e7dc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e7dc4 {

struct __attribute__((packed)) Object_005e7dc4_0 {
    u8 unknown_0[0x99];  // (not used here)
    u8 byte_99;
};
GUEST_OFFSET(Object_005e7dc4_0, byte_99, 0x99);  // (from the original)

inline constexpr guest::Function<0x00301484, u32(u32, u32, u32, u32)> call_00301484;  // (from the original)
inline constexpr guest::Function<0x0056b038, u32(u32, u32, u32, u32)> call_0056b038;  // (from the original)

u32 f_005e7dc4(gptr<Object_005e7dc4_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 zf = 0;
    u32 cf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r0 = u32(arg0->byte_99);
    r4 = r1;
    if (r0 != 0) {
        goto L_5e7e98;
    }
    r0 = r4 - 0x3041u;  // (from the original)
    zf = r0 == 0x55u;  // (from the original)
    cf = r0 >= 0x55u;  // (from the original)
    if (cf && !zf) {
        r0 = r4 - 0x30a1u;  // (from the original)
        zf = r0 == 0x55u;  // (from the original)
        cf = r0 >= 0x55u;  // (from the original)
    }
    r6 = 1u;
    if (!cf || zf) {
        goto L_5e7e94;
    }
    if (r4 >= 0x41u) {  // (from the original)
        if (!u32(r4 >= 0x5au) || u32(r4 == 0x5au)) {  // (from the original)
            goto L_5e7e94;
        }
    }
    if (r4 >= 0x61u) {  // (from the original)
        if (!u32(r4 >= 0x7au) || u32(r4 == 0x7au)) {  // (from the original)
            goto L_5e7e94;
        }
    }
    r0 = call_00301484(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 3u) {
        zf = r0 == 1u;
        if (!zf) {
            zf = r0 == 2u;
        }
        if (zf) {
            goto L_5e7e9c;
        }
        goto L_5e7ec4;
    }
    r2 = 0xd7a3u;  // (from the original)
    r1 = 0xac00u;  // (from the original)
    r0 = r4;
    r0 = call_0056b038(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_5e7e94;
    }
    r2 = 0x11f9u;  // (from the original)
    r1 = 0x1100u;  // (from the original)
    r0 = r4;
    r0 = call_0056b038(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_5e7e94;
    }
    r2 = 0x318eu;  // (from the original)
    r0 = r4;
    r1 = r2 - 0x5du;  // (from the original)
    r0 = call_0056b038(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_5e7ec4;
    }
L_5e7e94:;
    *gptr<u8>(r5 + 0x99u) = u8(r6);  // (from the original)
L_5e7e98:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_5e7e9c:;
    if (r4 != 0xd7u) {  // (from the original)
        r0 = r4 - 0xc0u;  // (from the original)
        if (!u32(r0 >= 0x1eu) || u32(r0 == 0x1eu)) {  // (from the original)
            guest::preempt();
            goto L_5e7e94;
        }
    }
    if (r4 == 0xf7u) {  // (from the original)
        goto L_5e7ec4;
    }
    r0 = r4 - 0xe0u;  // (from the original)
    if (!u32(r0 >= 0x1eu) || u32(r0 == 0x1eu)) {  // (from the original)
        guest::preempt();
        goto L_5e7e94;
    }
L_5e7ec4:;
    r0 = u32(*gptr<u8>(r5 + 0x99u));  // (from the original)
    if (r0 == 0) {
        *gptr<u8>(r5 + 0x98u) = u8(r6);  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005e7dc4
GUEST_EXPORT(0x005e7dc4, d_005e7dc4::f_005e7dc4);

// f_005e8498: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e8498 {

struct __attribute__((packed)) Object_005e8498_0 {
    u8 unknown_0[0xc04];  // (not used here)
    u32 word_c04;
};
GUEST_OFFSET(Object_005e8498_0, word_c04, 0xc04);  // (from the original)


u32 f_005e8498(gptr<Object_005e8498_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    r0 = r0 + 0xc04u;  // (from the original)
    r2 = *gptr<u32>(arg0->word_c04 + 0x14u);  // (from the original)
    return guest::call_address<u32>(r2, r0, guest::cpu()->r[1], r2, guest::cpu()->r[3]);
}

}  // namespace d_005e8498
GUEST_EXPORT(0x005e8498, d_005e8498::f_005e8498);

// f_005e8934: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e8934 {

inline constexpr guest::Function<0x001391d8, u32(u32, u32, u32, u32)> call_001391d8;  // (from the original)
inline constexpr guest::Function<0x002bab00, u32(u32, u32, u32, u32)> call_002bab00;  // (from the original)
inline constexpr guest::Function<0x005d6868, u32(u32, u32, u32, u32)> call_005d6868;  // (from the original)
inline constexpr guest::Function<0x005e4bd4, u32(u32, u32, u32, u32)> call_005e4bd4;  // (from the original)
inline constexpr guest::Function<0x00601a20, u32(u32, u32, u32, u32)> call_00601a20;  // (from the original)
inline constexpr guest::Function<0x0081d8c0, u32(u32, u32, u32, u32)> call_0081d8c0;  // (from the original)

u32 f_005e8934(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20;  // (from the original)
    r1 = 6u;
    guest::cpu()->r[13] = r13;
    r0 = call_005e4bd4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x9092bcu;  // (from the original)
    r9 = 0u;
    *gptr<u32>(r0) = u32(r1);
    *gptr<u8>(r0 + 0xd8u) = u8(r9);  // (from the original)
    r0 = r0 + 0xdcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002bab00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xdcu;  // (from the original)
    ea = r0 + 0xbecu;  // (from the original)
    *gptr<u32>(ea) = u32(r9);
    ea = r0 + 0xbf0u;  // (from the original)
    *gptr<u32>(ea) = u32(r9);
    ea = r0 + 0xbf4u;  // (from the original)
    *gptr<u32>(ea) = u32(r9);
    ea = r0 + 0xbf8u;  // (from the original)
    *gptr<u32>(ea) = u32(r9);
    ea = r0 + 0xbfcu;  // (from the original)
    *gptr<u32>(ea) = u32(r9);
    ea = r0 + 0xc00u;  // (from the original)
    *gptr<u32>(ea) = u32(r9);
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0081d8c0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r8 = 0x908f2cu;  // (from the original)
    r5 = r0 - 0xc04u;  // (from the original)
    r4 = 0u;
    *gptr<u32>(r0 + 0x5cu) = u32(r9);  // (from the original)
    do {
L_5e8990:;
        r0 = 0xc4u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_001391d8(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0 == 0)) {
            r3 = 0u;
            r1 = 0x14u;  // (from the original)
            r2 = r3;
            guest::cpu()->r[13] = r13;
            r0 = call_005d6868(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r6 = r0;
            r0 = r0 + 0x44u;  // (from the original)
            r7 = 0u;
            guest::cpu()->r[13] = r13;
            r0 = call_00601a20(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            ea = r0;
            *gptr<u32>(ea) = u32(r8);
            ea = r0 + 0x60u;  // (from the original)
            *gptr<u32>(ea) = u32(r6);
            *gptr<u32>(ea + 4) = u32(r7);
            *gptr<u32>(ea + 8) = u32(r9);
            *gptr<u32>(r0 + 0x6cu) = u32(r9);  // (from the original)
            *gptr<u32>(r0 + 0x70u) = u32(r9);  // (from the original)
            *gptr<u32>(r0 + 0x74u) = u32(r9);  // (from the original)
            *gptr<u32>(r0 + 0x78u) = u32(r9);  // (from the original)
            r0 = r0 - 0x44u;  // (from the original)
            *gptr<u8>(r0 + 0xc0u) = u8(r9);  // (from the original)
        }
        r1 = r5 + (r4 << 2);
        r4 = r4 + 1u;
        res = r4 - 6u;
        *gptr<u32>(r1 + 0xbecu) = u32(r0);  // (from the original)
        guest::preempt();
    } while (res >> 0x1f != ((r4 ^ 6u) & (r4 ^ res)) >> 0x1f);  // (from the original)
    r1 = r10;
    r0 = 0xc4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001391d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r3 = 0u;
        r1 = 0x21u;  // (from the original)
        r2 = r3;
        guest::cpu()->r[13] = r13;
        r0 = call_005d6868(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r0;
        r0 = r0 + 0x44u;  // (from the original)
        r6 = 0u;
        guest::cpu()->r[13] = r13;
        r0 = call_00601a20(r0, r1, r2, r3);
        r1 = r0 + 0x60u;  // (from the original)
        *gptr<u32>(r0) = u32(r8);
        *gptr<u32>(r1) = u32(r4);
        *gptr<u32>(r1 + 4) = u32(r6);
        *gptr<u32>(r1 + 8) = u32(r9);
        *gptr<u32>(r0 + 0x6cu) = u32(r9);  // (from the original)
        *gptr<u32>(r0 + 0x70u) = u32(r9);  // (from the original)
        *gptr<u32>(r0 + 0x74u) = u32(r9);  // (from the original)
        *gptr<u32>(r0 + 0x78u) = u32(r9);  // (from the original)
        r0 = r0 - 0x44u;  // (from the original)
        *gptr<u8>(r0 + 0xc0u) = u8(r9);  // (from the original)
    }
    *gptr<u32>(r5 + 0xc60u) = u32(r0);  // (from the original)
    r0 = r5;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005e8934
GUEST_EXPORT(0x005e8934, d_005e8934::f_005e8934);

// f_005e915c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e915c {

struct __attribute__((packed)) Object_005e915c_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_005e915c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005e915c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005e915c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005e915c_0, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Object_005e915c_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_005e915c_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005e915c_1, word_8, 0x8);  // (from the original)


void f_005e915c(gptr<Object_005e915c_0> arg0, gptr<Object_005e915c_1> arg1) {
    u32 r1 = arg1.addr();
    arg0->word_0 = u32(0x90a910u);  // (from the original)
    arg0->word_4 = u32(arg1->word_4);
    arg0->word_8 = u32(arg1->word_8);
    r1 = 0u;
    arg0->word_c = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005e915c
GUEST_EXPORT(0x005e915c, d_005e915c::f_005e915c);

// f_005e9848: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e9848 {

inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> call_00131280;  // (from the original)
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32, u32)> call_001320cc;  // (from the original)

u32 f_005e9848(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r6 = 0x95deacu;  // (from the original)
    if (*gptr<u32>(r6) != 0) {
        goto L_5e98ac;
    }
    r2 = 4u;
    r1 = r5;
    r0 = 0x1cu;  // (from the original)
    r0 = call_00131280(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    if (r0 == 0) {
        *gptr<u32>(r6 + 4u) = u32(r4);
        r4 = 0u;
        goto L_5e98a8;
    }
    r1 = r5;
    r2 = 3u;
    r0 = call_001320cc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0x9093f0u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r6 + 4u) = u32(r0);
    r0 = 0u;
    *gptr<u32>(r4 + 0x10u) = u32(r0);  // (from the original)
    *gptr<u32>(r4 + 0x14u) = u32(r0);  // (from the original)
    *gptr<u32>(r4 + 0x18u) = u32(r0);  // (from the original)
L_5e98a8:;
    *gptr<u32>(r6) = u32(r4);
L_5e98ac:;
    r0 = *gptr<u32>(r6);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005e9848
GUEST_EXPORT(0x005e9848, d_005e9848::f_005e9848);

// f_005e9974: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e9974 {

struct __attribute__((packed)) Object_005e9974_0 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Object_005e9974_0, word_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x0020933c, u32(u32, u32, u32, u32)> call_0020933c;  // (from the original)
inline constexpr guest::Function<0x006c8c5c, u32(u32, u32, u32, u32)> call_006c8c5c;  // (from the original)

u32 f_005e9974(gptr<Object_005e9974_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = arg0->word_14;
    r0 = *gptr<u32>(r4 + 0x364u);  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = *gptr<u32>(r4 + 0x340u) + 0x14u;  // (from the original)
    r0 = call_006c8c5c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = *gptr<u32>(r4 + 0x34cu);  // (from the original)
    guest::cpu()->r[13] += 8u;
    r0 = r0 + 0xdcu;  // (from the original)
    return call_0020933c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005e9974
GUEST_EXPORT(0x005e9974, d_005e9974::f_005e9974);

// f_005e9d64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e9d64 {

struct __attribute__((packed)) Object_005e9d64_0 {
    u32 word_0;
    u8 byte_4;
};
GUEST_OFFSET(Object_005e9d64_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005e9d64_0, byte_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x001594c8, u32(u32, u32, u32, u32)> call_001594c8;  // (from the original)

u32 f_005e9d64(gptr<Object_005e9d64_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r1 + 0x32cu;  // (from the original)
    r1 = r2;
    r3 = 0u;
    r2 = 0x27u;  // (from the original)
    arg0->word_0 = u32(r3);
    arg0->byte_4 = u8(r2);
    r0 = call_001594c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r4) = u32(r0);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005e9d64
GUEST_EXPORT(0x005e9d64, d_005e9d64::f_005e9d64);

// f_005e9d90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e9d90 {

struct __attribute__((packed)) Object_005e9d90_0 {
    u32 word_0;
    u8 byte_4;
};
GUEST_OFFSET(Object_005e9d90_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005e9d90_0, byte_4, 0x4);  // (from the original)


void f_005e9d90(gptr<Object_005e9d90_0> arg0) {
    u32 r1 = 0;
    r1 = 0x27u;  // (from the original)
    arg0->word_0 = u32(0u);
    arg0->byte_4 = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005e9d90
GUEST_EXPORT(0x005e9d90, d_005e9d90::f_005e9d90);

// f_005ea158: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ea158 {

inline constexpr guest::Function<0x00544a20, u32(u32, u32, u32, u32)> call_00544a20;  // (from the original)
inline constexpr guest::Function<0x00544d08, u32(u32, u32, u32, u32)> call_00544d08;  // (from the original)
inline constexpr guest::Function<0x00544f18, u32(u32, u32, u32, u32)> call_00544f18;  // (from the original)
inline constexpr guest::Function<0x00544fec, u32(u32, u32, u32, u32)> call_00544fec;  // (from the original)
inline constexpr guest::Function<0x0054a644, u32(u32, u32, u32, u32)> call_0054a644;  // (from the original)

u32 f_005ea158(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r5 = r1;
    r13 = r13 - 0x58u;  // (from the original)
    r1 = r0;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0054a644(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = 0x894b7cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00544fec(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r13 + 0x48u) = u32(r5);  // (from the original)
    r5 = r13 + 0x48u;  // (from the original)
    r4 = r0;
    r1 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00544a20(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        r2 = *gptr<u32>(r4 + 4u);
        if (u32(*gptr<u8>(r13 + 0x28u)) == 0) {  // (from the original)
            r1 = 0u;
        } else {
            r1 = r13 + 0x28u;  // (from the original)
        }
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_00544d08(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00544f18(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r13 + 0x1cu;  // (from the original)
    r13 = r13 + 0x58u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005ea158
GUEST_EXPORT(0x005ea158, d_005ea158::f_005ea158);

// f_005ea21c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ea21c {

struct __attribute__((packed)) Object_005ea21c_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x4];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_005ea21c_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005ea21c_2, word_c, 0xc);  // (from the original)


u32 f_005ea21c(u32 r0, u32 r1, gptr<Object_005ea21c_2> arg2) {
    u32 r2 = arg2.addr();
    u32 r3 = 0;
    r2 = arg2->word_4;
    r3 = arg2->word_c >> 1;
    if (r3 != 1u) {
        if (r3 == 2u) {
            goto L_5ea264;
        }
        r1 = 0u;
        r0 = r1;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = *gptr<u32>(r1);
    r3 = *gptr<u32>(r0) + 2u;
    if (u32(r3 >= r1) && !u32(r3 == r1)) {
        r1 = 0u;
        r0 = r1;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 1u;
    *gptr<u16>(*gptr<u32>(r0)) = u16(r2);
    *gptr<u32>(r0) = u32(r3);
    r0 = r1;
    guest::cpu()->r[1] = r1;
    return r0;
L_5ea264:;
    r1 = *gptr<u32>(r1);
    r3 = *gptr<u32>(r0) + 4u;
    if (u32(r3 >= r1) && !u32(r3 == r1)) {
        r1 = 0u;
        r0 = r1;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 1u;
    *gptr<u32>(*gptr<u32>(r0)) = u32(r2);
    *gptr<u32>(r0) = u32(r3);
    r0 = r1;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005ea21c
GUEST_EXPORT(0x005ea21c, d_005ea21c::f_005ea21c);

// f_005ea540: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ea540 {

inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)

u32 f_005ea540(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    if ((*gptr<u32>(0x95defcu) & 1u) != 0) {  // (from the original)
        r0 = 0xad5748u;  // (from the original)
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 0x95defcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = 0xad5748u;  // (from the original)
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 0xad5748u;  // (from the original)
    ea = r0 + 4u;
    *gptr<u32>(ea) = u32(r0 + 0x18u);  // (from the original)
    *gptr<u32>(ea + 4) = u32(1u);
    r2 = ~0u;
    *gptr<u32>(r0) = u32(0x909cb0u);  // (from the original)
    *gptr<u8>(r0 + 0xcu) = u8(4u);  // (from the original)
    *gptr<u32>(r0 + 0x10u) = u32(r2);  // (from the original)
    *gptr<u32>(r0 + 0x14u) = u32(r2);  // (from the original)
    *gptr<u16>(r0 + 0x18u) = u16(0u);  // (from the original)
    r1 = 0x81d0c0u;  // (from the original)
    r0 = 0xad5748u;  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005ea540
GUEST_EXPORT(0x005ea540, d_005ea540::f_005ea540);

// f_005ec990: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ec990 {

struct __attribute__((packed)) Object_005ec990_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_005ec990_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005ec990_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005ec990_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005ec990_0, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Object_005ec990_1 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(Object_005ec990_1, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005ec990_1, half_2, 0x2);  // (from the original)


void f_005ec990(gptr<Object_005ec990_0> arg0, gptr<Object_005ec990_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    u32 cf = 0;
    r2 = 0u;
    guest::cpu()->r[13] -= 4u;
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(r2);
    r12 = 2u;
    arg0->word_8 = u32(r2);
    arg0->word_c = u32(r2);
    r2 = u32(arg1->half_0);
    cf = r2 >= 0xd800u;  // (from the original)
    if (cf) {
        cf = r2 - 0xe000u >= 0x2000u;  // (from the original)
    }
    r3 = r2;
    if (cf) {
        r12 = 4u;
        r2 = u32(arg1->half_2) | r2 << 0x10;  // (from the original)
        r1 = r2 >> 6;
        r3 = r2 << 0x16 >> 0x16 | (r1 & 0xfc00u | r1 + 0x10000u & 0xf0000u);  // (from the original)
    }
    r1 = r0 + 4u;
    arg0->word_4 = u32(r2);
    arg0->word_8 = u32(r3);
    arg0->word_c = u32(r12);
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005ec990
GUEST_EXPORT(0x005ec990, d_005ec990::f_005ec990);
