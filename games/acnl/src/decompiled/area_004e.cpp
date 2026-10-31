// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "core/word_pair.hpp"

#include <bit>

using guest::gptr;

// f_004e0288: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e0288 {

inline constexpr guest::Function<0x001531b8, u32(u32, u32, u32, u32)> call_001531b8;  // (from the original)

u32 f_004e0288(u32 r0) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_001531b8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 1u) {
        r0 = 0u;
    }
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_004e0288
GUEST_EXPORT(0x004e0288, d_004e0288::f_004e0288);

// f_004e029c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e029c {

inline constexpr guest::Function<0x004dfb58, u32(u32, u32, u32, u32)> call_004dfb58;  // (from the original)

u32 f_004e029c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    r4 = r3;
    r5 = r2;
    r13 = r13 - 0x20u;  // (from the original)
    if (r3 == 0) {
        S0 = std::bit_cast<float>(*gptr<u32>(0x4e03b0u));  // (from the original)
    } else {
        S0 = std::bit_cast<float>(*gptr<u32>(0x4e03acu));  // (from the original)
    }
    r2 = r1;
    r1 = r0;
    *gptr<u32>(r13 + 0xcu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_004dfb58(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r0 = *gptr<u32>(r13);
    r1 = *gptr<u32>(r13 + 4);
    r2 = *gptr<u32>(r13 + 8);
    r3 = 0x9aae90u + (r5 + (r5 << 1) + (r5 << 3) << 2) + 4u;  // (from the original)
    res = r0 & ~0x80000000u;  // (from the original)
    r12 = res;
    if (res != 0) {
        r12 = (r0 << 1 >> 0x18) - 0x70u;  // (from the original)
        res = r12;
        if (res >> 0x1f != (r12 & (r12 ^ res)) >> 0x1f) {  // (from the original)
            r12 = r0 >> 0x1f << 0xf;  // (from the original)
            goto L_4e031c;
        }
    }
    r12 = uxth((r0 & ~0x1f800000u) >> 0xd | r12 << 0xa | r0 >> 0x1f << 0xf);  // (from the original)
L_4e031c:;
    res = r1 & ~0x80000000u;  // (from the original)
    r0 = res;
    if (res != 0) {
        r0 = (r1 << 1 >> 0x18) - 0x70u;  // (from the original)
        res = r0;
        if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
            r0 = r1 >> 0x1f << 0xf;  // (from the original)
            goto L_4e0358;
        }
    }
    r5 = r1 & ~0x1f800000u;  // (from the original)
    r1 = r1 >> 0x1f;  // (from the original)
    r0 = uxth(r5 >> 0xd | r0 << 0xa | r1 << 0xf);  // (from the original)
L_4e0358:;
    *gptr<u32>(r3 + 0x10u) = u32(r12 | r0 << 0x10);  // (from the original)
    res = r2 & ~0x80000000u;  // (from the original)
    r0 = res;
    if (res != 0) {
        r0 = (r2 << 1 >> 0x18) - 0x70u;  // (from the original)
        res = r0;
        if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
            r0 = r2 >> 0x1f << 0xf;  // (from the original)
            goto L_4e039c;
        }
    }
    r1 = (r2 & ~0x1f800000u) >> 0xd;  // (from the original)
    r0 = uxth(r1 | r0 << 0xa | r2 >> 0x1f << 0xf);  // (from the original)
L_4e039c:;
    *gptr<u32>(r3 + 0x14u) = u32(r0);  // (from the original)
    *gptr<u8>(r3 + 0x18u) = u8(r4);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_004e029c
GUEST_EXPORT(0x004e029c, d_004e029c::f_004e029c);

// f_004e0960: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e0960 {

struct __attribute__((packed)) Object_004e0960_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u16 half_1c;
    u16 half_1e;
    u16 half_20;
};
GUEST_OFFSET(Object_004e0960_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_004e0960_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_004e0960_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_004e0960_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_004e0960_0, half_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_004e0960_0, half_1e, 0x1e);  // (from the original)
GUEST_OFFSET(Object_004e0960_0, half_20, 0x20);  // (from the original)


void f_004e0960(gptr<Object_004e0960_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    r13 = r13 - 8;
    r12 = *gptr<u32>(r13 + 8u);
    S0 = std::bit_cast<float>(*gptr<u32>(r13 + 0xcu));  // (from the original)
    arg0->word_c = u32(r1);
    arg0->word_14 = u32(5u);
    arg0->half_20 = u16(0u);
    arg0->word_18 = u32(r2);
    arg0->half_1c = u16(r3);
    arg0->half_1e = u16(r12);
    arg0->word_10 = u32(std::bit_cast<u32>(S0));
    r13 = r13 + 8;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return;
}

}  // namespace d_004e0960
GUEST_EXPORT(0x004e0960, d_004e0960::f_004e0960);

// f_004e0998: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e0998 {

struct __attribute__((packed)) Object_004e0998_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u16 half_1c;
    u16 half_1e;
    u16 half_20;
};
GUEST_OFFSET(Object_004e0998_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_004e0998_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_004e0998_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_004e0998_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_004e0998_0, half_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_004e0998_0, half_1e, 0x1e);  // (from the original)
GUEST_OFFSET(Object_004e0998_0, half_20, 0x20);  // (from the original)


void f_004e0998(gptr<Object_004e0998_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    r12 = 0u;
    ea = r13 + 8u;
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    arg0->word_c = u32(r1);
    arg0->word_10 = u32(r12);
    arg0->word_18 = u32(r2);
    arg0->word_14 = u32(r12);
    arg0->half_1c = u16(r3);
    arg0->half_1e = u16(r4);
    arg0->half_20 = u16(r5);
    r13 = r13 + 8;
    guest::cpu()->r[13] = r13;
    return;
}

}  // namespace d_004e0998
GUEST_EXPORT(0x004e0998, d_004e0998::f_004e0998);

// f_004e09c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e09c8 {

inline constexpr guest::Function<0x00138920, u32(u32, u32, u32, u32)> call_00138920;  // (from the original)
inline constexpr guest::Function<0x0013f134, u32(u32, u32, u32, u32)> call_0013f134;  // (from the original)

u32 f_004e09c8(u32 r0) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = r0;
    r0 = 0x9aae5cu;  // (from the original)
    r0 = call_00138920(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r4;
    r0 = 0x9aae5cu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_0013f134(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_004e09c8
GUEST_EXPORT(0x004e09c8, d_004e09c8::f_004e09c8);

// f_004e0a48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e0a48 {

inline constexpr guest::Function<0x004ee364, u32(u32, u32, u32, u32)> call_004ee364;  // (from the original)

u32 f_004e0a48() {
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 0x951530u;  // (from the original)
    r1 = 0u;
    return call_004ee364(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_004e0a48
GUEST_EXPORT(0x004e0a48, d_004e0a48::f_004e0a48);

// f_004e0cbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e0cbc {

inline constexpr guest::Function<0x007457e8, u32(u32, u32, u32, u32)> call_007457e8;  // (from the original)

u32 f_004e0cbc(u32 r0, u32 r1, u32 r2) {
    u32 r3 = 0;
    u32 r12 = 0;
    r12 = r0;
    r3 = r2;
    r2 = r1;
    r0 = 0x9c7ad4u;  // (from the original)
    r1 = r12;
    guest::cpu()->r[13] -= 8u;
    r0 = call_007457e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 + 1u == 0) {
        r0 = 0u;
    } else {
        r0 = 1u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_004e0cbc
GUEST_EXPORT(0x004e0cbc, d_004e0cbc::f_004e0cbc);

// f_004e10ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e10ac {


u32 f_004e10ac() {
    u32 r0 = 0;
    float S0 = 0;
    float S1 = 0;
    r0 = 0x85f2d0u;  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(0x4e10c4u));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r0)) * S1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_004e10ac
GUEST_EXPORT(0x004e10ac, d_004e10ac::f_004e10ac);

// f_004e12b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e12b4 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x004e1768, u32(u32, u32, u32, u32)> call_004e1768;  // (from the original)
inline constexpr guest::Function<0x005b42fc, u32(u32, u32, u32, u32)> call_005b42fc;  // (from the original)

u32 f_004e12b4(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 zf = 0;
    u32 cf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0 = call_004e1768(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    zf = r0 == 0;
    if (!zf) {
        r4 = *gptr<u32>(r0);
        zf = r4 + 1u == 0;
    }
    if (!zf) {
        r5 = 0x9c7a14u;  // (from the original)
        r0 = call_002f74c8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r0 = call_005b42fc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        cf = r0 >= 0x30u;  // (from the original)
        if (!cf || u32(r0 == 0x30u)) {  // (from the original)
            cf = r4 >= r0;
        }
        if (!cf) {
            r0 = *gptr<u32>(r5 + (r4 << 2));
            goto L_4e12ec;
        }
    }
    r0 = 0u;
L_4e12ec:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
}

}  // namespace d_004e12b4
GUEST_EXPORT(0x004e12b4, d_004e12b4::f_004e12b4);

// f_004e13d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e13d0 {

inline constexpr guest::Function<0x004e12b4, u32(u32, u32, u32, u32)> call_004e12b4;  // (from the original)
inline constexpr guest::Function<0x004e1768, u32(u32, u32, u32, u32)> call_004e1768;  // (from the original)
inline constexpr guest::Function<0x00573aac, u32(u32, u32, u32, u32)> call_00573aac;  // (from the original)
inline constexpr guest::Function<0x00750eb4, u32(u32, u32, u32, u32)> call_00750eb4;  // (from the original)
inline constexpr guest::Function<0x00751990, u32(u32, u32, u32, u32)> call_00751990;  // (from the original)
inline constexpr guest::Function<0x007519d8, u32(u32, u32, u32, u32)> call_007519d8;  // (from the original)

u32 f_004e13d0(u32 r0) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r6 = r0;
    r1 = 0u;
    r0 = call_004e12b4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r5 = r0;
    r1 = 0u;
    r0 = r6;
    r0 = call_004e1768(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r4 = r0;
    r1 = 1u;
    r0 = r6;
    r0 = call_004e12b4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r7 = r0;
    r1 = 1u;
    r0 = r6;
    r0 = call_004e1768(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    zf = r5 == 0;
    if (!zf) {
        zf = r4 == 0;
    }
    r6 = r0;
    if (zf) {
        goto L_4e146c;
    }
    r0 = r5;
    r0 = call_007519d8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = r5;
        r0 = call_00751990(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            goto L_4e146c;
        }
    }
    r0 = r5;
    r0 = call_00750eb4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    zf = r0 == 0;
    if (!zf) {
        zf = u32(*gptr<u8>(r4 + 4u)) == 0;
    }
    if (!zf) {
        goto L_4e146c;
    }
    r0 = r5;
    r0 = call_00573aac(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_4e14dc;
    }
L_4e146c:;
    zf = r7 == 0;
    if (!zf) {
        zf = r6 == 0;
    }
    if (zf) {
        goto L_4e14a4;
    }
    r0 = r7;
    r0 = call_00750eb4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    zf = r0 == 0;
    if (!zf) {
        zf = u32(*gptr<u8>(r6 + 4u)) == 0;
    }
    if (!zf) {
        goto L_4e14a4;
    }
    r0 = r7;
    r0 = call_00573aac(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = r7;
        goto L_4e14e0;
    }
L_4e14a4:;
    zf = r5 == 0;
    if (!zf) {
        zf = r4 == 0;
    }
    if (zf) {
        goto L_4e14e4;
    }
    r0 = r5;
    r0 = call_00750eb4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    zf = r0 == 0;
    if (!zf) {
        zf = u32(*gptr<u8>(r4 + 4u)) == 0;
    }
    if (!zf) {
        goto L_4e14e4;
    }
    r0 = r5;
    r0 = call_00573aac(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_4e14e4;
    }
L_4e14dc:;
    r0 = r5;
L_4e14e0:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_4e14e4:;
    r0 = 0u;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_004e13d0
GUEST_EXPORT(0x004e13d0, d_004e13d0::f_004e13d0);

// f_004e1668: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e1668 {


u32 f_004e1668(u32 r0, float S0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    r1 = r0 + 0x80u;  // (from the original)
    if (r0 >= r1) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    r12 = 0u;
    S0 = std::bit_cast<float>(*gptr<u32>(0x4e16d4u));  // (from the original)
    r3 = ~0u;
    r2 = 4u;
    do {
L_4e1684:;
        *gptr<u32>(r0) = u32(r3);
        *gptr<u8>(r0 + 4u) = u8(r2);
        *gptr<u32>(r0 + 8u) = u32(std::bit_cast<u32>(S0));
        *gptr<u32>(r0 + 0xcu) = u32(std::bit_cast<u32>(S0));  // (from the original)
        *gptr<u32>(r0 + 0x10u) = u32(std::bit_cast<u32>(S0));  // (from the original)
        *gptr<u32>(r0 + 0x14u) = u32(std::bit_cast<u32>(S0));  // (from the original)
        *gptr<u32>(r0 + 0x18u) = u32(std::bit_cast<u32>(S0));  // (from the original)
        *gptr<u32>(r0 + 0x1cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
        *gptr<u32>(r0 + 0x20u) = u32(std::bit_cast<u32>(S0));  // (from the original)
        *gptr<u32>(r0 + 0x24u) = u32(std::bit_cast<u32>(S0));  // (from the original)
        *gptr<u32>(r0 + 0x28u) = u32(std::bit_cast<u32>(S0));  // (from the original)
        *gptr<u32>(r0 + 0x2cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
        *gptr<u32>(r0 + 0x30u) = u32(std::bit_cast<u32>(S0));  // (from the original)
        *gptr<u32>(r0 + 0x34u) = u32(std::bit_cast<u32>(S0));  // (from the original)
        *gptr<u16>(r0 + 0x38u) = u16(r12);  // (from the original)
        *gptr<u32>(r0 + 0x3cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
        r0 = r0 + 0x40u;  // (from the original)
        guest::preempt();
    } while (r0 < r1);
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_004e1668
GUEST_EXPORT(0x004e1668, d_004e1668::f_004e1668);

// f_004e1768: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e1768 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x005b4018, u32(u32, u32, u32, u32)> call_005b4018;  // (from the original)
inline constexpr guest::Function<0x005b42fc, u32(u32, u32, u32, u32)> call_005b42fc;  // (from the original)
inline constexpr guest::Function<0x005b4954, u32(u32, u32, u32, u32)> call_005b4954;  // (from the original)
inline constexpr guest::Function<0x005b49e0, u32(u32, u32, u32, u32)> call_005b49e0;  // (from the original)
inline constexpr guest::Function<0x006c4280, u32(u32, u32, u32, u32)> call_006c4280;  // (from the original)
inline constexpr guest::Function<0x006e0b2c, u32(u32, u32, u32, u32)> call_006e0b2c;  // (from the original)
inline constexpr guest::Function<0x00751058, u32(u32, u32, u32, u32)> call_00751058;  // (from the original)

u32 f_004e1768(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r6 = r1;
    r8 = r0;
    r7 = 0u;
    r0 = u32(*gptr<u8>(0x9529d5u));  // (from the original)
    if (r0 != 0) {
        goto L_4e1900;
    }
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r5 = r0;
    r1 = r0;
    r0 = 0x80u;  // (from the original)
    r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_4e1878;
    }
    r1 = r5;
    r0 = 0x40u;  // (from the original)
    r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_4e1878;
    }
    r0 = r5;
    r0 = call_005b4018(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_4e1878;
    }
    r1 = r5;
    r0 = 0x400000u;  // (from the original)
    r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        if (r5 != 0x55u) {  // (from the original)
            goto L_4e17fc;
        }
    }
    r1 = r5;
    r0 = 0x10u;  // (from the original)
    r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_4e1878;
    }
L_4e17fc:;
    r0 = call_006e0b2c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_4e1848;
    }
    r4 = *gptr<u32>(0x95c6d0u);  // (from the original)
    if (r4 == 0) {
        goto L_4e1848;
    }
    r0 = r5;
    r0 = call_005b49e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_4e1848;
    }
    r0 = u32(s32(s8(*gptr<u8>(r4 + 0x1cu))));  // (from the original)
    r0 = call_006c4280(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 9u) {
        goto L_4e1878;
    }
L_4e1848:;
    r0 = r5;
    r0 = call_005b4954(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_4e1878;
    }
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    r0 = 0x20000000u;  // (from the original)
    r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_4e1900;
    }
L_4e1878:;
    r0 = r6 & 1u;
    r5 = r8 + (r0 << 6);
    r4 = *gptr<u32>(r5);
    if (r4 + 1u == 0) {
        goto L_4e1900;
    }
    r6 = 0x9c7a14u;  // (from the original)
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = call_005b42fc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (!(u32(r0 >= 0x30u) && !u32(r0 == 0x30u))) {  // (from the original)
        if (r4 < r0) {
            r4 = *gptr<u32>(r6 + (r4 << 2));
            goto L_4e18bc;
        }
    }
    r4 = r7;
L_4e18bc:;
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0x55u) {  // (from the original)
        goto L_4e18f8;
    }
    if (r4 == 0) {
        goto L_4e18f8;
    }
    r0 = r4;
    r0 = call_00751058(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x2082u;  // (from the original)
    r0 = call_002fcb84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_4e18fc;
    }
L_4e18f8:;
    r0 = r5;
L_4e18fc:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_4e1900:;
    r0 = 0u;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_004e1768
GUEST_EXPORT(0x004e1768, d_004e1768::f_004e1768);

// f_004e1a7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e1a7c {


u32 f_004e1a7c() {
    u32 r0 = 0;
    r0 = u32(*gptr<u8>(0x9529d4u));  // (from the original)
    return r0;
}

}  // namespace d_004e1a7c
GUEST_EXPORT(0x004e1a7c, d_004e1a7c::f_004e1a7c);

// f_004e1a90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e1a90 {


u32 f_004e1a90() {
    u32 r0 = 0;
    r0 = u32(*gptr<u8>(0x9529d4u));  // (from the original)
    return r0;
}

}  // namespace d_004e1a90
GUEST_EXPORT(0x004e1a90, d_004e1a90::f_004e1a90);

// f_004e1aa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e1aa4 {

inline constexpr guest::Function<0x004e1174, u32(u32, u32, u32, u32)> call_004e1174;  // (from the original)

u32 f_004e1aa4() {
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 0x572258u;  // (from the original)
    r1 = 1u;
    guest::cpu()->r[13] -= 8u;
    r0 = call_004e1174(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_004e1aa4
GUEST_EXPORT(0x004e1aa4, d_004e1aa4::f_004e1aa4);

// f_004e1ac4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e1ac4 {

inline constexpr guest::Function<0x00125b38, u32(u32, u32, u32, u32)> call_00125b38;  // (from the original)
inline constexpr guest::Function<0x003045a8, u32(u32, u32, u32, u32)> call_003045a8;  // (from the original)

u32 f_004e1ac4(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    r0 = *gptr<u32>(0x9c79c8u);  // (from the original)
    if (r0 != 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 8;
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r14);
    r13 = r13 - 8;
    r0 = *gptr<u32>(0x975338u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003045a8(r0, r1, r2, r3);
    r2 = r0;
    r0 = 0x9c79c4u;  // (from the original)
    ea = r13;
    r13 = r13 + 8;
    r4 = *gptr<u32>(ea);
    r14 = *gptr<u32>(ea + 4);
    r3 = 0u;
    r1 = 0x4e1b04u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4;
    return call_00125b38(r0, r1, r2, r3);
}

}  // namespace d_004e1ac4
GUEST_EXPORT(0x004e1ac4, d_004e1ac4::f_004e1ac4);

// f_004e240c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e240c {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x00319aa4, u32(u32, u32, u32, u32)> call_00319aa4;  // (from the original)
inline constexpr guest::Function<0x006904b4, u32(u32, u32, u32, u32)> call_006904b4;  // (from the original)
inline constexpr guest::Function<0x00691544, u32(u32, u32, u32, u32)> call_00691544;  // (from the original)
inline constexpr guest::Function<0x007457e8, u32(u32, u32, u32, u32)> call_007457e8;  // (from the original)

u32 f_004e240c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x38u;  // (from the original)
    r7 = r1;
    r10 = r0;
    ea = r13 + 0x38u;  // (from the original)
    r5 = *gptr<u32>(ea);
    ea = r13 + 0x3cu;  // (from the original)
    r4 = *gptr<u32>(ea);
    r6 = *gptr<u32>(ea + 4);
    r9 = r3;
    r0 = 0x9c7ad4u;  // (from the original)
    r8 = r2;
    r3 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_007457e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 + 1u != 0) {
        r0 = 0u;
        goto L_4e24c4;
    }
    zf = r4 == 0;
    r4 = 0u;
    if (!zf) {
        r4 = 1u;
    }
    zf = r6 == 0;
    if (zf) {
        zf = r4 == 0;
    } else {
        r4 = 4u;
    }
    if (zf) {
        guest::cpu()->r[13] = r13;
        r0 = call_002f74c8(r0, r1, r2, r3);
        *gptr<u32>(r13) = u32(r0);
        r3 = 1u;
        r2 = r5;
        r1 = r8;
        r0 = r7;
        guest::cpu()->r[13] = r13;
        r0 = call_00319aa4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r3 = r8;
    r2 = r7;
    r1 = r10;
    r0 = r13 + 0xcu;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r4);
    *gptr<u32>(r13 + 4u) = u32(r5);
    *gptr<u32>(r13) = u32(r9);
    guest::cpu()->r[13] = r13;
    r0 = call_00691544(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006904b4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
L_4e24c4:;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_004e240c
GUEST_EXPORT(0x004e240c, d_004e240c::f_004e240c);

// f_004e24d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e24d0 {


u32 f_004e24d0() {
    u32 r0 = 0;
    r0 = u32(*gptr<u8>(0x9529d4u));  // (from the original)
    return r0;
}

}  // namespace d_004e24d0
GUEST_EXPORT(0x004e24d0, d_004e24d0::f_004e24d0);

// f_004e2504: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e2504 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002fe574, u32(u32, u32, u32, u32)> call_002fe574;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x00303c98, u32(u32, u32, u32, u32)> call_00303c98;  // (from the original)
inline constexpr guest::Function<0x004e0cec, u32(u32, u32, u32, u32)> call_004e0cec;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)

u32 f_004e2504(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x30u;  // (from the original)
    r5 = r0;
    r6 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_006a5e34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 8u) = u32(r0);
    if (r0 == 0) {
        goto L_4e25d8;
    }
    r10 = 0x865628u;  // (from the original)
    r4 = 0u;
    r11 = r4;
L_4e2530:;
    r0 = r10 + (r4 << 3);
    r3 = 0u;
    r8 = *gptr<u32>(r0) + r5;
    r9 = *gptr<u32>(r0 + 4u) + r6;
    r0 = *gptr<u32>(r13 + 8u);
    r2 = r9;
    r1 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_002feb00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    if (r0 == 0) {
        goto L_4e25e8;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fcaf4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_4e25e8;
    }
    r1 = r7;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x95bfe0u;  // (from the original)
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe574(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r3 = *gptr<u32>(r13 + 8u);
        r2 = 0u;
        r1 = r9;
        r0 = r8;
        *gptr<u32>(r13) = u32(r11);
        guest::cpu()->r[13] = r13;
        r0 = call_004e0cec(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r0;
        r0 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00303c98(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_4e25e0;
    }
    r0 = 1u;
L_4e25d8:;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_4e25e0:;
L_4e25e8:;
    r4 = r4 + 1u;
    if (r4 < 4u) {
        guest::preempt();
        goto L_4e2530;
    }
    r0 = 0u;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_004e2504
GUEST_EXPORT(0x004e2504, d_004e2504::f_004e2504);

// f_004e26a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e26a0 {

struct __attribute__((packed)) Object_004e26a0_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 byte_d;
};
GUEST_OFFSET(Object_004e26a0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_004e26a0_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_004e26a0_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_004e26a0_0, byte_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_004e26a0_0, byte_d, 0xd);  // (from the original)


void f_004e26a0(gptr<Object_004e26a0_0> arg0) {
    u32 r2 = 0;
    r2 = 0u;
    arg0->word_8 = u32(r2);
    arg0->word_0 = u32(r2);
    arg0->word_4 = u32(r2);
    arg0->byte_d = u8(r2);
    arg0->byte_c = u8(r2);
    return;
}

}  // namespace d_004e26a0
GUEST_EXPORT(0x004e26a0, d_004e26a0::f_004e26a0);

// f_004e26bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e26bc {

inline constexpr guest::Function<0x004ee55c, u32(u32, u32, u32, u32)> call_004ee55c;  // (from the original)
inline constexpr guest::Function<0x00536060, u32(u32, u32, u32, u32)> call_00536060;  // (from the original)
inline constexpr guest::Function<0x00544a20, u32(u32, u32, u32, u32)> call_00544a20;  // (from the original)
inline constexpr guest::Function<0x00544d8c, u32(u32, u32, u32, u32)> call_00544d8c;  // (from the original)
inline constexpr guest::Function<0x00544f18, u32(u32, u32, u32, u32)> call_00544f18;  // (from the original)
inline constexpr guest::Function<0x00544fec, u32(u32, u32, u32, u32)> call_00544fec;  // (from the original)
inline constexpr guest::Function<0x0054a644, u32(u32, u32, u32, u32)> call_0054a644;  // (from the original)
inline constexpr guest::Function<0x00768b6c, u32(u32, u32, u32, u32)> call_00768b6c;  // (from the original)
inline constexpr guest::Function<0x0076bf68, u32(u32, u32, u32, u32)> call_0076bf68;  // (from the original)
inline constexpr guest::Function<0x0076c648, u32(u32, u32, u32, u32)> call_0076c648;  // (from the original)

u32 f_004e26bc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r6 = r0;
    r13 = r13 - 0xa8u;  // (from the original)
    r7 = r2;
    r5 = r1;
    r0 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_0076c648(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_4e27e0;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00536060(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_4e27e0;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00536060(r0, r1, r2, r3);
    r4 = r0;
    r1 = 0x40u;  // (from the original)
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(r13 + 0xcu);  // (from the original)
    *gptr<u32>(ea + 4) = u32(r1);
    r0 = 0x8c9f1cu;  // (from the original)
    r2 = r1;
    r3 = u32(*gptr<u8>(r0));
    r1 = *gptr<u32>(r13 + 4u) - 1u;
    *gptr<u8>(r2 + r1) = u8(r3);
    *gptr<u8>(r13 + 0xcu) = u8(u32(*gptr<u8>(r0)));  // (from the original)
    *gptr<u32>(r13) = u32(0x904950u);  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00768b6c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r1 = r13;
        r0 = r13 + 0x70u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0054a644(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = 0x4e27f4u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00544fec(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_00544fec(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r0;
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_0076bf68(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        *gptr<u32>(r13 + 0x4cu) = u32(r0);  // (from the original)
        r5 = r13 + 0x4cu;  // (from the original)
        r1 = r13 + 0x50u;  // (from the original)
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_00544a20(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            r2 = *gptr<u32>(r4 + 4u);
            if (u32(*gptr<u8>(r13 + 0x50u)) == 0) {  // (from the original)
                r1 = 0u;
            } else {
                r1 = r13 + 0x50u;  // (from the original)
            }
            r0 = r5;
            guest::cpu()->r[13] = r13;
            r0 = call_00544d8c(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_00544f18(r0, r1, r2, r3);
        r3 = 0x80u;  // (from the original)
        r2 = r7;
        r1 = r13;
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_004ee55c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            goto L_4e27d8;
        }
    }
    r0 = 1u;
L_4e27d8:;
    r13 = r13 + 0xa8u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_4e27e0:;
    r0 = 0u;
    r13 = r13 + 0xa8u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_004e26bc
GUEST_EXPORT(0x004e26bc, d_004e26bc::f_004e26bc);

// f_004e2cfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e2cfc {

inline constexpr guest::Function<0x00317a50, u32(u32, u32, u32, u32)> call_00317a50;  // (from the original)
inline constexpr guest::Function<0x00536060, u32(u32, u32, u32, u32)> call_00536060;  // (from the original)
inline constexpr guest::Function<0x00544a20, u32(u32, u32, u32, u32)> call_00544a20;  // (from the original)
inline constexpr guest::Function<0x00544d8c, u32(u32, u32, u32, u32)> call_00544d8c;  // (from the original)
inline constexpr guest::Function<0x00544f18, u32(u32, u32, u32, u32)> call_00544f18;  // (from the original)
inline constexpr guest::Function<0x00544fec, u32(u32, u32, u32, u32)> call_00544fec;  // (from the original)
inline constexpr guest::Function<0x0054a644, u32(u32, u32, u32, u32)> call_0054a644;  // (from the original)
inline constexpr guest::Function<0x00768b6c, u32(u32, u32, u32, u32)> call_00768b6c;  // (from the original)
inline constexpr guest::Function<0x0076bf68, u32(u32, u32, u32, u32)> call_0076bf68;  // (from the original)
inline constexpr guest::Function<0x0076c648, u32(u32, u32, u32, u32)> call_0076c648;  // (from the original)

u32 f_004e2cfc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0xb0u;  // (from the original)
    r7 = r0;
    r8 = r2;
    r5 = r1;
    r0 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_0076c648(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_4e2e18;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00536060(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_4e2e18;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00536060(r0, r1, r2, r3);
    r6 = r0;
    ea = r13 + 0x2cu;  // (from the original)
    *gptr<u32>(ea) = u32(r13 + 0x34u);  // (from the original)
    *gptr<u32>(ea + 4) = u32(0x40u);  // (from the original)
    r1 = 0x8c9f1cu;  // (from the original)
    r2 = *gptr<u32>(r13 + 0x30u);  // (from the original)
    r4 = 1u;
    r3 = u32(*gptr<u8>(r1));
    *gptr<u8>(r2 + (r13 + 0x33u)) = u8(r3);  // (from the original)
    *gptr<u8>(r13 + 0x34u) = u8(u32(*gptr<u8>(r1)));  // (from the original)
    *gptr<u32>(r13 + 0x28u) = u32(0x904950u);  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00768b6c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r1 = r13 + 0x28u;  // (from the original)
        r0 = r13 + 0x78u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0054a644(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = 0x4e2e2cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00544fec(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_00544fec(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r0;
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_0076bf68(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        *gptr<u32>(r13 + 0x74u) = u32(r0);  // (from the original)
        r5 = r13 + 0x74u;  // (from the original)
        r1 = r13 + 8u;
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_00544a20(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            r2 = *gptr<u32>(r4 + 4u);
            if (u32(*gptr<u8>(r13 + 8u)) == 0) {
                r1 = 0u;
            } else {
                r1 = r13 + 8u;
            }
            r0 = r5;
            guest::cpu()->r[13] = r13;
            r0 = call_00544d8c(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_00544f18(r0, r1, r2, r3);
        r3 = 0x80u;  // (from the original)
        r2 = r8;
        r1 = r13 + 0x28u;  // (from the original)
        r0 = r7;
        guest::cpu()->r[13] = r13;
        r0 = call_00317a50(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r4 = r0;
    }
    r0 = r4;
    r13 = r13 + 0xb0u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_4e2e18:;
    r0 = 1u;
    r13 = r13 + 0xb0u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_004e2cfc
GUEST_EXPORT(0x004e2cfc, d_004e2cfc::f_004e2cfc);

// f_004e3354: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e3354 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x004e8ed4, u32(u32, u32, u32, u32)> call_004e8ed4;  // (from the original)
inline constexpr guest::Function<0x005b42fc, u32(u32, u32, u32, u32)> call_005b42fc;  // (from the original)
inline constexpr guest::Function<0x00746f24, u32(u32, u32, u32, u32)> call_00746f24;  // (from the original)
inline constexpr guest::Function<0x00750090, u32(u32, u32, u32, u32)> call_00750090;  // (from the original)
inline constexpr guest::Function<0x00751990, u32(u32, u32, u32, u32)> call_00751990;  // (from the original)

u32 f_004e3354(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 cf = 0;
    r13 = r13 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_005b42fc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0;
    r6 = res;
    r4 = 0u;
    if (!u32(r0 >= 0u) || u32(res == 0)) {
        goto L_4e3408;
    }
L_4e3370:;
    r5 = 0x9c7a14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_005b42fc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    cf = r0 >= 0x30u;  // (from the original)
    if (!cf || u32(r0 == 0x30u)) {  // (from the original)
        cf = r4 >= r0;
    }
    if (cf) {
        goto L_4e33fc;
    }
    r5 = *gptr<u32>(r5 + (r4 << 2));
    if (r5 == 0) {
        goto L_4e33fc;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00751990(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_4e33fc;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00750090(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_4e33fc;
    }
    r0 = 0xa22020u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00746f24(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r4 = 0x95bfdcu;  // (from the original)
    r6 = r13 + 4u;
    r2 = r0;
    r3 = r1;
    *gptr<u32>(r13) = u32(r4);
    r1 = 0u;
    r0 = r5;
    *gptr<u32>(r6) = u32(r4);
    *gptr<u32>(r6 + 4) = u32(1u);
    guest::cpu()->r[13] = r13;
    r0 = call_004e8ed4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_4e33fc:;
    r4 = r4 + 1u;
    if (r4 < r6) {
        guest::preempt();
        goto L_4e3370;
    }
L_4e3408:;
    r0 = 1u;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_004e3354
GUEST_EXPORT(0x004e3354, d_004e3354::f_004e3354);

// f_004e35f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e35f0 {


u32 f_004e35f0() {
    u32 r0 = 0;
    r0 = u32(*gptr<u8>(0x9529d4u));  // (from the original)
    return r0;
}

}  // namespace d_004e35f0
GUEST_EXPORT(0x004e35f0, d_004e35f0::f_004e35f0);

// f_004e3604: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e3604 {

inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)

u32 f_004e3604(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    r0 = 0x9529d4u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r4 = 0u;
    *gptr<u8>(r0) = u8(r4);
    r0 = call_00300904(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r0 = call_0030b6c4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            goto L_4e363c;
        }
    }
    r0 = 0x9c79d4u;  // (from the original)
    *gptr<u8>(r0) = u8(r4);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
L_4e363c:;
    r3 = 0u;
    guest::cpu()->r[13] += 8u;
    r2 = r3;
    r1 = r3;
    r0 = 0x5bu;  // (from the original)
    return call_006249b0(r0, r1, r2, r3);
}

}  // namespace d_004e3604
GUEST_EXPORT(0x004e3604, d_004e3604::f_004e3604);

// f_004e36c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e36c0 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fe574, u32(u32, u32, u32, u32)> call_002fe574;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> call_004e9a28;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)
inline constexpr guest::Function<0x00751d34, u32(u32, u32, u32, u32)> call_00751d34;  // (from the original)

u32 f_004e36c0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r6 = r0;
    r7 = r1;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = 8u;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_4e3758;
    }
    r0 = call_006a5e34(r0, r1, r2, r3);
    r5 = r0;
    r0 = 0x9c7ad4u;  // (from the original)
    r3 = 0u;
    r2 = r7;
    r1 = r6;
    r0 = call_004e9a28(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    zf = r5 == 0;
    r4 = r0;
    if (!zf) {
        zf = r4 == 0;
    }
    if (zf) {
        goto L_4e3758;
    }
    r3 = 1u;
    r2 = r7;
    r1 = r6;
    r0 = r5;
    r0 = call_002feb00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    r0 = r4;
    r0 = call_00751d34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 1u) {
        goto L_4e3758;
    }
    if (r5 == 0) {
        goto L_4e3758;
    }
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r5;
    r0 = call_002fe574(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
        goto L_4e375c;
    }
L_4e3758:;
    r0 = 0u;
L_4e375c:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_004e36c0
GUEST_EXPORT(0x004e36c0, d_004e36c0::f_004e36c0);

// f_004e3768: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e3768 {


u32 f_004e3768() {
    u32 r0 = 0;
    r0 = u32(*gptr<u8>(0x9529d4u));  // (from the original)
    return r0;
}

}  // namespace d_004e3768
GUEST_EXPORT(0x004e3768, d_004e3768::f_004e3768);

// f_004e39c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e39c4 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> call_004e9a28;  // (from the original)

u32 f_004e39c4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0x35u) {  // (from the original)
        goto L_4e3a10;
    }
    r0 = 0x9c7ad4u;  // (from the original)
    r3 = 0u;
    r2 = r5;
    r1 = r4;
    r0 = call_004e9a28(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_4e3a10;
    }
    r0 = r0 + 0x700u;  // (from the original)
    r1 = u32(*gptr<u16>(r0 + 0x64u)) | 0x20u;  // (from the original)
    *gptr<u16>(r0 + 0x64u) = u16(r1);  // (from the original)
    r0 = 1u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_4e3a10:;
    r0 = 0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_004e39c4
GUEST_EXPORT(0x004e39c4, d_004e39c4::f_004e39c4);

// f_004e3a1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e3a1c {

inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> call_004e9a28;  // (from the original)
inline constexpr guest::Function<0x00750894, u32(u32, u32, u32, u32)> call_00750894;  // (from the original)
inline constexpr guest::Function<0x00750994, u32(u32, u32, u32, u32)> call_00750994;  // (from the original)

u32 f_004e3a1c(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    r12 = r0;
    guest::cpu()->r[13] -= 8u;
    if (*gptr<u32>(0x94f310u) == 0) {  // (from the original)
        r0 = 0xffu;  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2 = r1;
    r0 = 0x9c7ad4u;  // (from the original)
    r3 = 0u;
    r1 = r12;
    r0 = call_004e9a28(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 == 0) {
        r0 = 0xffu;  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_00750894(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r0 = 0xffu;  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r4;
    r0 = call_00750994(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0xffu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_004e3a1c
GUEST_EXPORT(0x004e3a1c, d_004e3a1c::f_004e3a1c);

// f_004e3f8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e3f8c {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> call_004e9a28;  // (from the original)
inline constexpr guest::Function<0x006311a4, u32(u32, u32, u32, u32)> call_006311a4;  // (from the original)
inline constexpr guest::Function<0x00751840, u32(u32, u32, u32, u32)> call_00751840;  // (from the original)

u32 f_004e3f8c(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x28u;  // (from the original)
    r6 = r1;
    r8 = r2;
    r0 = *gptr<u32>(0x9529f4u);  // (from the original)
    if ((r0 & 1u) != 0) {
        goto L_4e3fe0;
    }
    r0 = 0x9529f4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_002fe7dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    if (r0 == 0) {
        goto L_4e3fe0;
    }
    S1 = std::bit_cast<float>(*gptr<u32>(0x4e4080u));  // (from the original)
    S2 = S1;
    S0 = std::bit_cast<float>(*gptr<u32>(0x85f2ccu));  // (from the original)
    r0 = 0x9c79b8u;  // (from the original)
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r0 + 8) = u32(std::bit_cast<u32>(S2));
    r0 = 0x9529f4u;  // (from the original)
L_4e3fe0:;
    r5 = 1u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r1 = r0;
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r7 = 0x9c79b8u;  // (from the original)
    r9 = r4;
    if (r0 != 0) {
        r5 = 0u;
    }
    r4 = r7 + 0x11cu;  // (from the original)
    r10 = 0u;
    r2 = r6;
    r1 = r13 + 4u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_003171b4(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r1 = *gptr<u32>(r13);
    r2 = *gptr<u32>(r13 + 4);
    r3 = r10;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_004e9a28(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r4 = r0;
    if (r0 == 0) {
        goto L_4e406c;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_00751840(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    if (r0 == 0) {
        goto L_4e406c;
    }
    r0 = r4;
    r3 = r8;
    r2 = r6;
    r1 = r9;
    *gptr<u32>(r13 + 4u) = u32(r5);
    *gptr<u32>(r13) = u32(r7);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_006311a4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_4e406c:;
    r0 = 1u;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_004e3f8c
GUEST_EXPORT(0x004e3f8c, d_004e3f8c::f_004e3f8c);

// f_004e408c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e408c {

inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)

u32 f_004e408c(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    r0 = 0x9529d4u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r4 = 0u;
    *gptr<u8>(r0) = u8(r4);
    r0 = call_00300904(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r0 = call_0030b6c4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            goto L_4e40c4;
        }
    }
    r0 = 0x9c79d4u;  // (from the original)
    *gptr<u8>(r0) = u8(r4);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
L_4e40c4:;
    r3 = 0u;
    guest::cpu()->r[13] += 8u;
    r2 = r3;
    r1 = r3;
    r0 = 0x5bu;  // (from the original)
    return call_006249b0(r0, r1, r2, r3);
}

}  // namespace d_004e408c
GUEST_EXPORT(0x004e408c, d_004e408c::f_004e408c);

// f_004e440c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e440c {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> call_004e9a28;  // (from the original)
inline constexpr guest::Function<0x006311a4, u32(u32, u32, u32, u32)> call_006311a4;  // (from the original)
inline constexpr guest::Function<0x00751840, u32(u32, u32, u32, u32)> call_00751840;  // (from the original)

u32 f_004e440c(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x28u;  // (from the original)
    r6 = r1;
    r8 = r2;
    r0 = *gptr<u32>(0x9529f0u);  // (from the original)
    if ((r0 & 1u) != 0) {
        goto L_4e4464;
    }
    r0 = 0x9529f0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_002fe7dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    if (r0 == 0) {
        goto L_4e4464;
    }
    S1 = std::bit_cast<float>(*gptr<u32>(0x4e4504u));  // (from the original)
    S2 = S1;
    r0 = 0x9c79acu;  // (from the original)
    S0 = -std::bit_cast<float>(*gptr<u32>(0x85f2ccu));  // (from the original)
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r0 + 8) = u32(std::bit_cast<u32>(S2));
    r0 = 0x9529f0u;  // (from the original)
L_4e4464:;
    r5 = 1u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r1 = r0;
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r7 = 0x9c79acu;  // (from the original)
    r9 = r4;
    if (r0 != 0) {
        r5 = 0u;
    }
    r4 = r7 + 0x128u;  // (from the original)
    r10 = 0u;
    r2 = r6;
    r1 = r13 + 4u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_003171b4(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r1 = *gptr<u32>(r13);
    r2 = *gptr<u32>(r13 + 4);
    r3 = r10;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_004e9a28(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r4 = r0;
    if (r0 == 0) {
        goto L_4e44f0;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_00751840(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    if (r0 == 0) {
        goto L_4e44f0;
    }
    r0 = r4;
    r3 = r8;
    r2 = r6;
    r1 = r9;
    *gptr<u32>(r13 + 4u) = u32(r5);
    *gptr<u32>(r13) = u32(r7);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_006311a4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_4e44f0:;
    r0 = 1u;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_004e440c
GUEST_EXPORT(0x004e440c, d_004e440c::f_004e440c);

// f_004e4510: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e4510 {

inline constexpr guest::Function<0x00284ee4, u32(u32, u32, u32, u32)> call_00284ee4;  // (from the original)
inline constexpr guest::Function<0x002fcb10, u32(u32, u32, u32, u32)> call_002fcb10;  // (from the original)
inline constexpr guest::Function<0x002fe574, u32(u32, u32, u32, u32)> call_002fe574;  // (from the original)
inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x0030b654, u32(u32, u32, u32, u32)> call_0030b654;  // (from the original)
inline constexpr guest::Function<0x006f9638, u32(u32, u32, u32, u32)> call_006f9638;  // (from the original)
inline constexpr guest::Function<0x00768174, u32(u32, u32, u32, u32)> call_00768174;  // (from the original)
inline constexpr guest::Function<0x0076936c, u32(u32, u32, u32, u32)> call_0076936c;  // (from the original)

u32 f_004e4510(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x30u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_006f9638(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7cc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r9 = r0;
    if (r0 == 0) {
        goto L_4e4660;
    }
    r0 = r4 - 1u & 0xffu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006f9638(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7cc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r8 = r0;
    if (r0 == 0) {
        goto L_4e4660;
    }
    r0 = 0u;
    *gptr<u32>(r13 + 8u) = u32(r0);
    *gptr<u32>(r13 + 0xcu) = u32(r0);  // (from the original)
    *gptr<u32>(r13) = u32(r0);
    *gptr<u32>(r13 + 4u) = u32(r0);
    r3 = r13 + 4u;
    r2 = r13;
    r1 = r13 + 0xcu;  // (from the original)
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00284ee4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = *gptr<u32>(r13 + 4u);
    r7 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    res = r7 - r0;
    if (!u32(res == 0) && res >> 0x1f == ((r7 ^ r0) & (r7 ^ res)) >> 0x1f) {  // (from the original)
        goto L_4e468c;
    }
L_4e457c:;
    r0 = *gptr<u32>(r13);
    r4 = *gptr<u32>(r13 + 8u);
    res = r4 - r0;
    if (!u32(res == 0) && res >> 0x1f == ((r4 ^ r0) & (r4 ^ res)) >> 0x1f) {  // (from the original)
        goto L_4e467c;
    }
L_4e458c:;
    r3 = 0u;
    r2 = r7;
    r1 = r4;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_002feb00(r0, r1, r2, r3);
    r6 = r0;
    r3 = 0u;
    r2 = r7;
    r1 = r4;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_002feb00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    if (r6 == 0) {
        goto L_4e4630;
    }
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0030b654(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_4e4630;
    }
    if (r5 == 0) {
        goto L_4e4660;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0030b654(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_4e4660;
    }
    r1 = r5;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe574(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_4e4660;
    }
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0076936c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0076936c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r6 == r0) {
        goto L_4e466c;
    }
    goto L_4e4660;
L_4e4630:;
    if (r5 == 0) {
        goto L_4e466c;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb10(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_4e4660;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00768174(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_4e466c;
    }
L_4e4660:;
    r0 = 0u;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_4e466c:;
    r4 = r4 + 1u;
    if (s32(r4) <= s32(*gptr<u32>(r13))) {
        guest::preempt();
        goto L_4e458c;
    }
L_4e467c:;
    r7 = r7 + 1u;
    if (s32(r7) <= s32(*gptr<u32>(r13 + 4u))) {
        guest::preempt();
        goto L_4e457c;
    }
L_4e468c:;
    r0 = 1u;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_004e4510
GUEST_EXPORT(0x004e4510, d_004e4510::f_004e4510);

// f_004e49fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e49fc {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> call_004e9a28;  // (from the original)
inline constexpr guest::Function<0x005ce300, u32(u32, u32, u32, u32)> call_005ce300;  // (from the original)
inline constexpr guest::Function<0x006c778c, u32(u32, u32, u32, u32)> call_006c778c;  // (from the original)
inline constexpr guest::Function<0x006c8928, u32(u32, u32, u32, u32)> call_006c8928;  // (from the original)
inline constexpr guest::Function<0x006f9638, u32(u32, u32, u32, u32)> call_006f9638;  // (from the original)
inline constexpr guest::Function<0x007500b4, u32(u32, u32, u32, u32)> call_007500b4;  // (from the original)
inline constexpr guest::Function<0x00750894, u32(u32, u32, u32, u32)> call_00750894;  // (from the original)

u32 f_004e49fc(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r6 = r0;
    r7 = r1;
    r2 = 0u;
    r0 = call_006c8928(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 + 1u != 0) {
        goto L_4e4aac;
    }
    r0 = 0x9c7ad4u;  // (from the original)
    r3 = 0u;
    r2 = r7;
    r1 = r6;
    r0 = call_004e9a28(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 != 0) {
        r0 = call_00750894(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_4e4a64;
        }
    }
    r2 = 0u;
    r1 = r7;
    r0 = r6;
    r0 = call_005ce300(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_4e4a60;
    }
L_4e4a5c:;
    r0 = 1u;
L_4e4a60:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_4e4a64:;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = call_006f9638(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    r0 = r4;
    r0 = call_007500b4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_4e4aac;
    }
    r2 = r5;
    r1 = r7;
    r0 = r6;
    r0 = call_006c778c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        guest::preempt();
        goto L_4e4a5c;
    }
L_4e4aac:;
    r0 = 0u;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_004e49fc
GUEST_EXPORT(0x004e49fc, d_004e49fc::f_004e49fc);

// f_004e4ab8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e4ab8 {

inline constexpr guest::Function<0x004e40e8, u32(u32, u32, u32, u32)> call_004e40e8;  // (from the original)

u32 f_004e4ab8(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    r0 = r1;
    return call_004e40e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_004e4ab8
GUEST_EXPORT(0x004e4ab8, d_004e4ab8::f_004e4ab8);

// f_004e54a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e54a4 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x004e21e0, u32(u32, u32, u32, u32)> call_004e21e0;  // (from the original)
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> call_004e9a28;  // (from the original)
inline constexpr guest::Function<0x00751a30, u32(u32, u32, u32, u32)> call_00751a30;  // (from the original)
inline constexpr guest::Function<0x00751a4c, u32(u32, u32, u32, u32)> call_00751a4c;  // (from the original)

u32 f_004e54a4(u32 r0_unused, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r0 = r1;
    r13 = r13 - 0x20u;  // (from the original)
    r5 = r2;
    r6 = r0;
    r2 = r0;
    r4 = 0x9c7ad4u;  // (from the original)
    r7 = 0u;
    r1 = r13 + 4u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_003171b4(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r1 = *gptr<u32>(r13);
    r2 = *gptr<u32>(r13 + 4);
    r3 = r7;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_004e9a28(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r4 = r0;
    if (r0 == 0) {
        r0 = 4u;
        goto L_4e5514;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00751a30(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    if (r0 == 0) {
        r0 = r4;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0 = call_00751a4c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        if (r0 == 0) {
            goto L_4e551c;
        }
    }
    r0 = 3u;
L_4e5514:;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
L_4e551c:;
    r4 = 1u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r1 = r0;
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_002f74e0(r0, r1, r2, r3);
    *gptr<u16>(r13) = u16(r5);
    if (r0 != 0) {
        r4 = 0u;
    }
    r1 = *gptr<u32>(r13);
    S0 = std::bit_cast<float>(*gptr<u32>(0x85f2ccu));  // (from the original)
    r3 = r4;
    r2 = 0u;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_004e21e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    if (r0 != 0) {
        r0 = 2u;
    }
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_004e54a4
GUEST_EXPORT(0x004e54a4, d_004e54a4::f_004e54a4);

// f_004e5818: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e5818 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x0057456c, u32(u32, u32, u32, u32)> call_0057456c;  // (from the original)
inline constexpr guest::Function<0x006904b4, u32(u32, u32, u32, u32)> call_006904b4;  // (from the original)
inline constexpr guest::Function<0x00691544, u32(u32, u32, u32, u32)> call_00691544;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)
inline constexpr guest::Function<0x00768758, u32(u32, u32, u32, u32)> call_00768758;  // (from the original)
inline constexpr guest::Function<0x0076c5b0, u32(u32, u32, u32, u32)> call_0076c5b0;  // (from the original)

u32 f_004e5818(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x30u;  // (from the original)
    r5 = r0;
    r6 = r1;
    r7 = r2;
    r8 = r3;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0x2bu) {  // (from the original)
        goto L_4e58dc;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00768758(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_006a5e34(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r0;
        if (r0 == 0) {
            goto L_4e58dc;
        }
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_0076c5b0(r0, r1, r2, r3);
        r3 = 0u;
        r2 = r7;
        r1 = r6;
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_002feb00(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_4e58dc;
        }
        guest::cpu()->r[13] = r13;
        r0 = call_002fcaf4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_4e58dc;
        }
        r0 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fc20c(r0, r1, r2, r3);
        r0 = 0u;
        ea = r13;
        *gptr<u32>(ea) = u32(r0);
        ea = r13 + 4u;
        *gptr<u32>(ea) = u32(r0);
        *gptr<u32>(ea + 4) = u32(1u);
        r3 = r7;
        r2 = r6;
        r1 = r5;
        r0 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00691544(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_006904b4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            r1 = r8;
            guest::cpu()->r[13] = r13;
            r0 = call_0057456c(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
        }
        r0 = 1u;
    }
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_4e58dc:;
    r0 = 0u;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_004e5818
GUEST_EXPORT(0x004e5818, d_004e5818::f_004e5818);

// f_004e5924: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e5924 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;  // (from the original)
inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x00305570, u32(u32, u32, u32, u32)> call_00305570;  // (from the original)
inline constexpr guest::Function<0x00319aa4, u32(u32, u32, u32, u32)> call_00319aa4;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)
inline constexpr guest::Function<0x006f9638, u32(u32, u32, u32, u32)> call_006f9638;  // (from the original)
inline constexpr guest::Function<0x0076936c, u32(u32, u32, u32, u32)> call_0076936c;  // (from the original)

u32 f_004e5924(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    u32 r14 = guest::cpu()->r[14];
    u32 cf = 0;
    ea = r13 - 0x34;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    *gptr<u32>(ea + 0xc) = u32(r3);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r4);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r5);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x20) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x24) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x28) = u32(r10);  // (from the original)
    *gptr<u32>(ea + 0x2c) = u32(r11);  // (from the original)
    *gptr<u32>(ea + 0x30) = u32(r14);  // (from the original)
    r13 = r13 - 0x58u;  // (from the original)
    r0 = 8u;
    r6 = r3;
    r7 = r1;
    r8 = r2;
    r1 = *gptr<u32>(r13 + 0x24u);  // (from the original)
    r4 = *gptr<u32>(r13 + 0x5cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r1 = *gptr<u32>(r13 + 0x24u);  // (from the original)
        r0 = 0x10000000u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002f74e0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_4e5b60;
        }
    }
    r1 = r4;
    r0 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r13 + 0x24u);  // (from the original)
    if (r0 == r1) {
        guest::cpu()->r[13] = r13;
        r0 = call_006a5e34(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    } else {
        r0 = r1;
        guest::cpu()->r[13] = r13;
        r0 = call_006f9638(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0 = call_002fe7cc(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    *gptr<u32>(r13 + 0xcu) = u32(r0);  // (from the original)
    if (r0 == 0) {
        goto L_4e5b58;
    }
    r5 = r13 + 0x1cu;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00305570(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4 & ~0xffu;  // (from the original)
    r4 = r1 | r0;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0076936c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4 & ~0xff00u;  // (from the original)
    r5 = r1 | r0 << 8 & 0xff00u;  // (from the original)
    r0 = r5 & 0xffu;  // (from the original)
    r4 = 0u;
    if (r0 >= 5u) {
        goto L_4e5adc;
    }
    r11 = 0x9529fcu;  // (from the original)
    r0 = u32(*gptr<u8>(*gptr<u32>(r11 + (r0 << 2)) + 0x10u));  // (from the original)
    if (!u32(r0 >= 0u) || u32(r0 == 0)) {
        goto L_4e5adc;
    }
L_4e5a08:;
    r0 = r5 & 0xffu;  // (from the original)
    if (r0 >= 5u) {
        r2 = 0u;
    } else {
        r2 = u32(*gptr<u8>(*gptr<u32>(r11 + (r0 << 2)) + 0x10u));  // (from the original)
    }
    if (!u32(r2 >= r4) || u32(r2 == r4)) {
        r1 = 0x865620u;  // (from the original)
        goto L_4e5a38;
    }
    r1 = *gptr<u32>(*gptr<u32>(r11 + (r0 << 2)) + ((r5 & 0x300u) >> 6)) + (r4 << 3);  // (from the original)
L_4e5a38:;
    r9 = *gptr<u32>(r1) + r7;
    if (r0 >= 5u) {
        r1 = 0u;
    } else {
        r1 = u32(*gptr<u8>(*gptr<u32>(r11 + (r0 << 2)) + 0x10u));  // (from the original)
    }
    if (!u32(r1 >= r4) || u32(r1 == r4)) {
        r0 = 0x865620u;  // (from the original)
        goto L_4e5a6c;
    }
    r0 = *gptr<u32>(*gptr<u32>(r11 + (r0 << 2)) + ((r5 & 0x300u) >> 6)) + (r4 << 3);  // (from the original)
L_4e5a6c:;
    if (r4 == 0) {
        r1 = r13 + 0x1cu;  // (from the original)
    } else {
        r1 = 0x95bfe0u;  // (from the original)
    }
    r10 = *gptr<u32>(r0 + 4u) + r8;
    r0 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r3 = r10;
    r2 = r9;
    *gptr<u32>(r13) = u32(r6);
    guest::cpu()->r[13] = r13;
    r0 = call_002fc994(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_4e5b58;
    }
    r3 = *gptr<u32>(r13 + 0x58u);  // (from the original)
    r2 = r6;
    *gptr<u32>(r13) = u32(*gptr<u32>(r13 + 0x24u));  // (from the original)
    r1 = r10;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_00319aa4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5 & 0xffu;  // (from the original)
    cf = r0 >= 5u;
    if (!cf) {
        r0 = *gptr<u32>(r11 + (r0 << 2));
    }
    r4 = r4 + 1u;
    if (cf) {
        r0 = 0u;
    } else {
        r0 = u32(*gptr<u8>(r0 + 0x10u));  // (from the original)
    }
    if (u32(r0 >= r4) && !u32(r0 == r4)) {
        guest::preempt();
        goto L_4e5a08;
    }
L_4e5adc:;
    r0 = *gptr<u32>(r13 + 0x60u);  // (from the original)
    if (r0 == 0) {
        goto L_4e5b58;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00300904(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_4e5b58;
    }
    r2 = u32(*gptr<u16>(r13 + 4u));
    *gptr<u32>(r13) = u32(*gptr<u32>(r13 + 0x1cu));  // (from the original)
    r1 = (((r7 & 0xfu | r2 & ~0xfu) & ~0xf0u | 0xf0u & r8 << 4) & ~0x100u | 0x100u & r6 << 8) & ~0x200u;  // (from the original)
    r3 = 8u;
    r2 = r13;
    *gptr<u16>(r13 + 4u) = u16(r1 | *gptr<u32>(r13 + 0x58u) << 9);  // (from the original)
    r1 = 4u;
    r0 = 0x4fu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006249b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_4e5b58:;
    r0 = r13 + 0x1cu;  // (from the original)
L_4e5b60:;
    r13 = r13 + 0x34u;  // (from the original)
    ea = r13;
    r13 = r13 + 0x24;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    r9 = *gptr<u32>(ea + 0x14);  // (from the original)
    r10 = *gptr<u32>(ea + 0x18);  // (from the original)
    r11 = *gptr<u32>(ea + 0x1c);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[8] = r8;
    guest::cpu()->r[9] = r9;
    guest::cpu()->r[10] = r10;
    guest::cpu()->r[11] = r11;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_004e5924
GUEST_EXPORT(0x004e5924, d_004e5924::f_004e5924);

// f_004e5b74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e5b74 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x0057456c, u32(u32, u32, u32, u32)> call_0057456c;  // (from the original)
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32, u32)> call_0059e65c;  // (from the original)
inline constexpr guest::Function<0x006904b4, u32(u32, u32, u32, u32)> call_006904b4;  // (from the original)
inline constexpr guest::Function<0x00691544, u32(u32, u32, u32, u32)> call_00691544;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)
inline constexpr guest::Function<0x00769634, u32(u32, u32, u32, u32)> call_00769634;  // (from the original)
inline constexpr guest::Function<0x0076c5b0, u32(u32, u32, u32, u32)> call_0076c5b0;  // (from the original)

u32 f_004e5b74(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
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
    ea = r13 - 0x34;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    *gptr<u32>(ea + 0xc) = u32(r3);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r4);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r5);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x20) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x24) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x28) = u32(r10);  // (from the original)
    *gptr<u32>(ea + 0x2c) = u32(r11);  // (from the original)
    *gptr<u32>(ea + 0x30) = u32(r14);  // (from the original)
    r13 = r13 - 0x50u;  // (from the original)
    r5 = r1;
    r6 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0x2bu) {  // (from the original)
        goto L_4e5cec;
    }
    r0 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00769634(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_4e5cec;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_006a5e34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    if (r0 == 0) {
        goto L_4e5cec;
    }
    r9 = 0u;
    r0 = *gptr<u32>(0x94f310u);  // (from the original)
    if (r0 == 0) {
        goto L_4e5c18;
    }
    r10 = 1u;
    res = u32(*gptr<u8>(r0 + 0x13u)) << 0x1e >> 0x1f;  // (from the original)
    if (res == 0) {
        goto L_4e5c18;
    }
    r0 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    r4 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0076c5b0(r0, r1, r2, r3);
    if (r0 != 0) {
        r4 = r4 + 1u;
    }
    r3 = 0u;
    r2 = r4;
    r1 = r5;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002feb00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r8 = r0;
    if (r0 == 0) {
        goto L_4e5cec;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fcaf4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r11 = 0x2085u;  // (from the original)
    if (r0 == 0) {
        goto L_4e5c3c;
    }
    goto L_4e5c54;
L_4e5c18:;
    r1 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    r3 = r6;
    r2 = r5;
    r0 = r7;
    *gptr<u32>(r13) = u32(r9);
    guest::cpu()->r[13] = r13;
    r0 = call_002fc994(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x2cu;  // (from the original)
    r0 = 0u;
    ea = r13;
    r13 = r13 + 0x24;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    r9 = *gptr<u32>(ea + 0x14);  // (from the original)
    r10 = *gptr<u32>(ea + 0x18);  // (from the original)
    r11 = *gptr<u32>(ea + 0x1c);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[8] = r8;
    guest::cpu()->r[9] = r9;
    guest::cpu()->r[10] = r10;
    guest::cpu()->r[11] = r11;
    guest::cpu()->r[13] = r13;
    return r0;
L_4e5c3c:;
    r1 = r11;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_4e5cec;
    }
L_4e5c54:;
    r1 = r11;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r1 = 0x95bfdcu;  // (from the original)
        r3 = r4;
        r2 = r5;
        r0 = r7;
        *gptr<u32>(r13) = u32(r9);
        guest::cpu()->r[13] = r13;
        r0 = call_002fc994(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        r2 = 1u;
        r1 = r4;
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_0059e65c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc20c(r0, r1, r2, r3);
    ea = r13;
    *gptr<u32>(ea) = u32(r9);
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(r9);
    *gptr<u32>(ea + 4) = u32(r10);
    r3 = r6;
    r1 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    r2 = r5;
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00691544(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006904b4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r1 = *gptr<u32>(r13 + 0x28u);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0057456c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x2cu;  // (from the original)
    r0 = 1u;
    ea = r13;
    r13 = r13 + 0x24;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    r9 = *gptr<u32>(ea + 0x14);  // (from the original)
    r10 = *gptr<u32>(ea + 0x18);  // (from the original)
    r11 = *gptr<u32>(ea + 0x1c);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[8] = r8;
    guest::cpu()->r[9] = r9;
    guest::cpu()->r[10] = r10;
    guest::cpu()->r[11] = r11;
    guest::cpu()->r[13] = r13;
    return r0;
L_4e5cec:;
    r13 = r13 + 0x2cu;  // (from the original)
    r0 = 0u;
    ea = r13;
    r13 = r13 + 0x24;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    r9 = *gptr<u32>(ea + 0x14);  // (from the original)
    r10 = *gptr<u32>(ea + 0x18);  // (from the original)
    r11 = *gptr<u32>(ea + 0x1c);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[8] = r8;
    guest::cpu()->r[9] = r9;
    guest::cpu()->r[10] = r10;
    guest::cpu()->r[11] = r11;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_004e5b74
GUEST_EXPORT(0x004e5b74, d_004e5b74::f_004e5b74);

// f_004e6200: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e6200 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> call_004e9a28;  // (from the original)
inline constexpr guest::Function<0x00751058, u32(u32, u32, u32, u32)> call_00751058;  // (from the original)

u32 f_004e6200(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r7 = r0;
    r4 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_4e6270;
    }
    r5 = 0x9c7ad4u;  // (from the original)
    r6 = 0u;
    r2 = r4;
    r1 = r13 + 4u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_003171b4(r0, r1, r2, r3);
    r1 = *gptr<u32>(r13);
    r2 = *gptr<u32>(r13 + 4);
    r3 = r6;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_004e9a28(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_4e6270;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00751058(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r7;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_002fc934(r0, r1, r2, r3);
L_4e6270:;
    r0 = r7;
    r13 = r13 + 0x20u;  // (from the original)
    r1 = 0x95bfdcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_002fc934(r0, r1, r2, r3);
}

}  // namespace d_004e6200
GUEST_EXPORT(0x004e6200, d_004e6200::f_004e6200);

// f_004e628c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e628c {

struct __attribute__((packed)) Object_004e628c_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_004e628c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_004e628c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_004e628c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_004e628c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_004e628c_0, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x001746f4, u32(u32, u32, u32, u32)> call_001746f4;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)
inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> call_006bbd54;  // (from the original)

u32 f_004e628c(gptr<Object_004e628c_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x48u;  // (from the original)
    r6 = arg0->word_0;
    r0 = arg0->word_10;
    r5 = arg0->word_4;
    r7 = arg0->word_8;
    r8 = arg0->word_c;
    if ((r0 & 0x200000u) != 0) {  // (from the original)
        r9 = r0 & 0xffu;  // (from the original)
        r1 = 0x95bfdcu;  // (from the original)
        r0 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fc934(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r7 < 0x5bu) {  // (from the original)
            r2 = r7;
            r1 = 0x2fu;  // (from the original)
            r0 = r13;
            guest::cpu()->r[13] = r13;
            r0 = call_006bbd54(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r1 = r13;
            r0 = r13 + 0x20u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_002fc8e8(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r1 = 0x95bfdcu;  // (from the original)
        r0 = r13 + 0x24u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fc934(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        if (r8 < 0x5bu) {  // (from the original)
            r2 = r8;
            r1 = 0x2fu;  // (from the original)
            r0 = r13;
            guest::cpu()->r[13] = r13;
            r0 = call_006bbd54(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r1 = r13;
            r0 = r13 + 0x24u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_002fc8e8(r0, r1, r2, r3);
        }
        r1 = r13 + 0x24u;  // (from the original)
        *gptr<u32>(r13) = u32(r13 + 0x20u);  // (from the original)
        *gptr<u32>(r13 + 4) = u32(r1);
        r2 = r6;
        r3 = r5;
        r0 = r9 & 0xffu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_001746f4(r0, r1, r2, r3);
        r0 = *gptr<u32>(r4);
        r1 = *gptr<u32>(r4 + 4);
        r2 = *gptr<u32>(r4 + 8);
        r3 = *gptr<u32>(r4 + 0xc);  // (from the original)
        r12 = *gptr<u32>(r4 + 0x10);  // (from the original)
        r4 = *gptr<u32>(r4 + 0x14u);  // (from the original)
        ea = r13 + 8u;
        *gptr<u32>(ea) = u32(r0);
        *gptr<u32>(ea + 4) = u32(r1);
        *gptr<u32>(ea + 8) = u32(r2);
        *gptr<u32>(ea + 0xc) = u32(r3);  // (from the original)
        *gptr<u32>(ea + 0x10) = u32(r12);  // (from the original)
        r7 = r13 + 0x18u;  // (from the original)
        *gptr<u32>(r7) = u32(r12 & ~0x200000u);  // (from the original)
        *gptr<u32>(r7 + 4) = u32(r4);
        r3 = 0x18u;  // (from the original)
        r2 = r13 + 8u;
        r1 = 4u;
        r0 = 0x52u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_006249b0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r13 = r13 + 0x48u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r4 = r0 & 0xffu;  // (from the original)
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r7 < 0x5bu) {  // (from the original)
        r2 = r7;
        r1 = 0x2fu;  // (from the original)
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_006bbd54(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r13;
        r0 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    if (r8 < 0x5bu) {  // (from the original)
        r2 = r8;
        r1 = 0x2fu;  // (from the original)
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_006bbd54(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r13;
        r0 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, r2, r3);
    }
    r1 = r13 + 0xcu;  // (from the original)
    *gptr<u32>(r13) = u32(r13 + 8u);
    *gptr<u32>(r13 + 4) = u32(r1);
    r2 = r6;
    r3 = r5;
    r0 = r4 & 0xffu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001746f4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r13 + 8u;
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_004e628c
GUEST_EXPORT(0x004e628c, d_004e628c::f_004e628c);

// f_004e645c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e645c {

struct __attribute__((packed)) Object_004e645c_0 {
    u8 unknown_0[0xc];  // (not used here)
    u16 half_c;
};
GUEST_OFFSET(Object_004e645c_0, half_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x00203660, u32(u32, u32, u32, u32)> call_00203660;  // (from the original)

u32 f_004e645c(gptr<Object_004e645c_0> arg0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = u32(arg0->half_c) >> 8;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00203660(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r2 = u32(*gptr<u16>(r4 + 0xcu));  // (from the original)
    r1 = *gptr<u32>(r4 + 8u);
    S0 = std::bit_cast<float>(*gptr<u32>(r4));
    S1 = std::bit_cast<float>(*gptr<u32>(r4 + 4));
    *gptr<u32>(r0 + 8u) = u32(r1);
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u8>(r0 + 0xcu) = u8(r2 & 0xfu);  // (from the original)
    *gptr<u8>(r0 + 0xdu) = u8(r2 << 0x18 >> 0x1c);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_004e645c
GUEST_EXPORT(0x004e645c, d_004e645c::f_004e645c);

// f_004e64a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e64a4 {

struct __attribute__((packed)) Object_004e64a4_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_004e64a4_0, byte_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x001796e0, u32(u32, u32, u32, u32)> call_001796e0;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002fe574, u32(u32, u32, u32, u32)> call_002fe574;  // (from the original)
inline constexpr guest::Function<0x004e3354, u32(u32, u32, u32, u32)> call_004e3354;  // (from the original)
inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> call_006bbd54;  // (from the original)
inline constexpr guest::Function<0x006bc388, u32(u32, u32, u32, u32)> call_006bc388;  // (from the original)
inline constexpr guest::Function<0x006f9638, u32(u32, u32, u32, u32)> call_006f9638;  // (from the original)
inline constexpr guest::Function<0x006f9c08, u32(u32, u32, u32, u32)> call_006f9c08;  // (from the original)
inline constexpr guest::Function<0x006f9db4, u32(u32, u32, u32, u32)> call_006f9db4;  // (from the original)
inline constexpr guest::Function<0x00720328, u32(u32, u32, u32, u32)> call_00720328;  // (from the original)

u32 f_004e64a4(gptr<Object_004e64a4_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r4 = r0;
    r2 = u32(arg0->byte_0);
    r1 = 0x2fu;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_006bbd54(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb34(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0x2fu) {  // (from the original)
        goto L_4e6638;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = u32(*gptr<u8>(r4 + 1u));
    r7 = r0;
    if (r1 == r7) {
        goto L_4e6620;
    }
    r1 = r0;
    r0 = 0x80u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_4e6564;
    }
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_006f9c08(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r6 = r0;
    if (r0 == 0) {
        goto L_4e6620;
    }
    r5 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_00720328(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        r0 = r13 + 4u;
        r1 = r6 + 0x2fau;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fc934(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r5 = 1u;
        r1 = r13;
        r0 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_002fe574(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0 == 0) {
            r6 = 0u;
            goto L_4e6548;
        }
    }
    r6 = 1u;
L_4e6548:;
    if (r5 != 0) {
        r0 = r13 + 4u;
    }
    if (r6 == 0) {
        goto L_4e6620;
    }
    goto L_4e6618;
L_4e6564:;
    r1 = r7;
    r0 = 0x2000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_4e6620;
    }
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_006f9638(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0 = call_006f9db4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r5 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0xfff951c8u;  // (from the original)
    r1 = r5;
    r0 = r0 - r2;
    guest::cpu()->r[13] = r13;
    r0 = call_006bc388(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r0 + 2u;
    r6 = r0;
    r5 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_00720328(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        r0 = r13 + 4u;
        r1 = r6 + 0x2fau;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fc934(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r5 = 1u;
        r1 = r13;
        r0 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_002fe574(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0 == 0) {
            r6 = 0u;
            goto L_4e6600;
        }
    }
    r6 = 1u;
L_4e6600:;
    if (r5 != 0) {
        r0 = r13 + 4u;
    }
    if (r6 == 0) {
        goto L_4e6620;
    }
L_4e6618:;
    guest::cpu()->r[13] = r13;
    r0 = call_004e3354(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_4e6620:;
    r0 = u32(*gptr<u8>(r4 + 2u));
    if (r0 >= 4u) {
        goto L_4e6638;
    }
    r2 = r13;
    r1 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_001796e0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_4e6638:;
    r0 = r13;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_004e64a4
GUEST_EXPORT(0x004e64a4, d_004e64a4::f_004e64a4);

// f_004e664c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e664c {

struct __attribute__((packed)) Object_004e664c_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Object_004e664c_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_004e664c_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_004e664c_0, byte_2, 0x2);  // (from the original)

inline constexpr guest::Function<0x0017d2ac, u32(u32, u32, u32, u32)> call_0017d2ac;  // (from the original)
inline constexpr guest::Function<0x0017fc48, u32(u32, u32, u32, u32)> call_0017fc48;  // (from the original)

u32 f_004e664c(gptr<Object_004e664c_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    r1 = u32(arg0->byte_1);
    r3 = u32(arg0->byte_2);
    r0 = u32(arg0->byte_0);
    zf = (r3 & 2u) == 0;
    r2 = r1 >> 4;
    r3 = r3 & 1u;
    r1 = r1 & 0xfu;  // (from the original)
    *gptr<u32>(r13) = u32(1u);
    if (!zf) {
        guest::cpu()->r[13] = r13;
        r0 = call_0017d2ac(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0017fc48(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_004e664c
GUEST_EXPORT(0x004e664c, d_004e664c::f_004e664c);

// f_004e668c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e668c {

inline constexpr guest::Function<0x00203558, u32(u32, u32, u32, u32)> call_00203558;  // (from the original)
inline constexpr guest::Function<0x003081b4, u32(u32, u32, u32, u32)> call_003081b4;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)
inline constexpr guest::Function<0x00624f00, u32(u32, u32, u32, u32)> call_00624f00;  // (from the original)

u32 f_004e668c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r5 = r0;
    r6 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_0030b6c4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_4e6700;
    } else {
        r4 = 1u;
    }
L_4e66ac:;
    if (r4 == r6) {
        goto L_4e66f4;
    }
    r0 = r4 & 0xffu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00624f00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_4e66f4;
    }
    r1 = r4 & 0xffu;  // (from the original)
    r3 = 0xau;  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(r5));
    r2 = r13;
    *gptr<u32>(r13 + 4u) = u32(*gptr<u32>(r5 + 4u));
    *gptr<u16>(r13 + 8u) = u16(u32(*gptr<u16>(r5 + 8u)));
    r0 = 0x55u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006249b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_4e66f4:;
    r4 = r4 + 1u;
    if (r4 < 4u) {
        guest::preempt();
        goto L_4e66ac;
    }
L_4e6700:;
    r0 = u32(*gptr<u8>(r5 + 8u));
    guest::cpu()->r[13] = r13;
    r0 = call_00203558(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        *gptr<u8>(r13) = u8(u32(*gptr<u8>(r5)));
        *gptr<u8>(r13 + 1u) = u8(u32(*gptr<u8>(r5 + 1u)));
        *gptr<u8>(r13 + 2u) = u8(u32(*gptr<u8>(r5 + 2u)));
        *gptr<u8>(r13 + 3u) = u8(u32(*gptr<u8>(r5 + 3u)));
        *gptr<u8>(r13 + 4u) = u8(u32(*gptr<u8>(r5 + 4u)));
        *gptr<u8>(r13 + 5u) = u8(u32(*gptr<u8>(r5 + 5u)));
        *gptr<u8>(r13 + 6u) = u8(u32(*gptr<u8>(r5 + 6u)));
        *gptr<u8>(r13 + 7u) = u8(u32(*gptr<u8>(r5 + 7u)));
        r2 = u32(*gptr<u8>(r5 + 9u));
        r1 = r13;
        if (r2 == 0) {
            r0 = r0 + 0x12u;  // (from the original)
        } else {
            r0 = r0 + 0xau;  // (from the original)
        }
        guest::cpu()->r[13] = r13;
        r0 = call_003081b4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_004e668c
GUEST_EXPORT(0x004e668c, d_004e668c::f_004e668c);

// f_004e6774: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e6774 {

struct __attribute__((packed)) Object_004e6774_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_004e6774_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)
inline constexpr guest::Function<0x006b14cc, u32(u32, u32, u32, u32)> call_006b14cc;  // (from the original)

u32 f_004e6774(gptr<Object_004e6774_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x4e6848u));  // (from the original)
    r4 = r1;
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0));
    r6 = 0x9c79d4u;  // (from the original)
    r3 = r13;
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(float(std::bit_cast<u32>(std::bit_cast<float>(arg0->word_0 << 0x14 >> 0x14)))));  // (from the original)
    r1 = r4;
    S0 = float(std::bit_cast<u32>(std::bit_cast<float>(arg0->word_0 << 8 >> 0x14)));  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0));
    r5 = arg0->word_0 >> 0x18;  // (from the original)
    r2 = r5;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_006b14cc(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    if (r0 != 0) {
        if (r4 < 4u) {
            r0 = r6 + (r4 << 4);
            *gptr<u8>(r0) = u8(1u);
            *gptr<u8>(r0 + 1u) = u8(r5);
            *gptr<u32>(r0 + 4u) = u32(*gptr<u32>(r13));
            *gptr<u32>(r0 + 8u) = u32(*gptr<u32>(r13 + 4u));
            *gptr<u32>(r0 + 0xcu) = u32(*gptr<u32>(r13 + 8u));  // (from the original)
        }
        r3 = 0u;
        r2 = r3;
        r1 = r4;
        r0 = 0x59u;  // (from the original)
    } else {
        r3 = 0u;
        r2 = r3;
        r1 = r4;
        r0 = 0x5au;  // (from the original)
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_006249b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_004e6774
GUEST_EXPORT(0x004e6774, d_004e6774::f_004e6774);

// f_004e6a3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e6a3c {

struct __attribute__((packed)) Object_004e6a3c_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Object_004e6a3c_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_004e6a3c_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_004e6a3c_0, byte_2, 0x2);  // (from the original)

inline constexpr guest::Function<0x00203558, u32(u32, u32, u32, u32)> call_00203558;  // (from the original)
inline constexpr guest::Function<0x002d50b8, u32(u32, u32, u32, u32)> call_002d50b8;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)
inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> call_006bbd54;  // (from the original)
inline constexpr guest::Function<0x006f9c08, u32(u32, u32, u32, u32)> call_006f9c08;  // (from the original)

u32 f_004e6a3c(gptr<Object_004e6a3c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 cf = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r4 = r0;
    r6 = u32(arg0->byte_1);
    r5 = u32(arg0->byte_2);
    r7 = u32(arg0->byte_0);
    cf = r6 >= 0x5bu;  // (from the original)
    if (!cf) {
        cf = r5 >= 0x5bu;  // (from the original)
    }
    if (cf) {
        goto L_4e6b40;
    }
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00203558(r0, r1, r2, r3);
    r1 = r0;
    if (r0 == 0) {
        goto L_4e6b40;
    }
    r3 = r1 + 0x12u;  // (from the original)
    r0 = r1 + 0xau;  // (from the original)
    r2 = sxtb(r6);
    if (!u32(r3 >= r0) || u32(r3 == r0)) {
        goto L_4e6aa4;
    }
    do {
L_4e6a84:;
        if (!(u32(s32(s8(*gptr<u8>(r0)))) != r2)) {
            *gptr<u8>(r1 + 8u) = u8(r2);
            goto L_4e6aa4;
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (u32(r3 >= r0) && !u32(r3 == r0));
L_4e6aa4:;
    r0 = r7;
    *gptr<u8>(r1 + 9u) = u8(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_006f9c08(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    if (r0 == 0) {
        goto L_4e6b40;
    }
    r2 = r6;
    r1 = 0x2fu;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_006bbd54(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r5;
    r1 = 0x2fu;  // (from the original)
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_006bbd54(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r13 + 4u;
    r1 = r13;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002d50b8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0030b6c4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_4e6b40;
    }
    r3 = 3u;
    r2 = r13;
    *gptr<u16>(r13) = u16(u32(*gptr<u16>(r4)));
    r1 = 4u;
    *gptr<u8>(r13 + 2u) = u8(u32(*gptr<u8>(r4 + 2u)));
    r0 = 0x56u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006249b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_4e6b40:;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_004e6a3c
GUEST_EXPORT(0x004e6a3c, d_004e6a3c::f_004e6a3c);

// f_004e6b48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e6b48 {

struct __attribute__((packed)) Object_004e6b48_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(Object_004e6b48_0, byte_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00203558, u32(u32, u32, u32, u32)> call_00203558;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)

u32 f_004e6b48(gptr<Object_004e6b48_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r0 = u32(arg0->byte_8);
    r13 = r13 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00203558(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = *gptr<u32>(r4);
    r2 = *gptr<u32>(r4 + 4);
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r0 + 4) = u32(r2);
    guest::cpu()->r[13] = r13;
    r0 = call_0030b6c4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = *gptr<u32>(r4 + 4);
    r2 = *gptr<u32>(r4 + 8);
    r3 = *gptr<u32>(r4 + 0xc);  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(r4));
    *gptr<u32>(r13 + 4) = u32(r1);
    *gptr<u32>(r13 + 8) = u32(r2);
    *gptr<u32>(r13 + 0xc) = u32(r3);  // (from the original)
    r2 = r13;
    r3 = 0x10u;  // (from the original)
    r1 = 4u;
    r0 = 0x53u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006249b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_004e6b48
GUEST_EXPORT(0x004e6b48, d_004e6b48::f_004e6b48);

// f_004e6b9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e6b9c {

inline constexpr guest::Function<0x004e5924, u32(u32, u32, u32, u32)> call_004e5924;  // (from the original)
inline constexpr guest::Function<0x006bba14, u32(u32, u32, u32, u32)> call_006bba14;  // (from the original)

u32 f_004e6b9c(u32 r0, gptr<WordPair> arg1, u32 r2, u32 r3) {
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r5 = r0;
    r4 = r1;
    r1 = u32(arg1->first);
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006bba14(r0, r1, r2, r3);
    r0 = u32(*gptr<u16>(r4 + 4u));
    *gptr<u32>(r13 + 8u) = u32(0u);
    *gptr<u32>(r13) = u32((r0 & 0x200u) >> 9);  // (from the original)
    *gptr<u32>(r13 + 4) = u32(r13 + 0xcu);  // (from the original)
    r1 = r0 & 0xfu;  // (from the original)
    r3 = r0 << 0x17 >> 0x1f;  // (from the original)
    r2 = r0 << 0x18 >> 0x1c;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_004e5924(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r13 + 0xcu;  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_004e6b9c
GUEST_EXPORT(0x004e6b9c, d_004e6b9c::f_004e6b9c);

// f_004e6c70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e6c70 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;  // (from the original)
inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32, u32)> call_0059e65c;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)
inline constexpr guest::Function<0x006f9638, u32(u32, u32, u32, u32)> call_006f9638;  // (from the original)

u32 f_004e6c70(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r5 = r0;
    r4 = r1;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r4);
    r8 = r13 + 4u;
    *gptr<u32>(r0) = u32(r1);
    r0 = u32(*gptr<u8>(r4 + 4u));
    r6 = r0 & 0xfu;  // (from the original)
    r7 = r0 >> 4;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r1 = r5;
    r0 = 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_4e6d30;
    }
    r1 = r4;
    r0 = 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_4e6ce0;
    }
    if (r5 != r4) {
        goto L_4e6ce0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_006a5e34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    goto L_4e6cf4;
L_4e6ce0:;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_006f9638(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7cc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_4e6cf4:;
    if (r0 == 0) {
        goto L_4e6d30;
    }
    *gptr<u32>(r13) = u32(1u);
    r3 = r7;
    r2 = r6;
    r1 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc994(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_4e6d30;
    }
    r2 = 1u;
    r1 = r7;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0059e65c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_4e6d30:;
    r0 = r13 + 4u;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_004e6c70
GUEST_EXPORT(0x004e6c70, d_004e6c70::f_004e6c70);

// f_004e6e84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e6e84 {

inline constexpr guest::Function<0x005b49e0, u32(u32, u32, u32, u32)> call_005b49e0;  // (from the original)
inline constexpr guest::Function<0x006c4280, u32(u32, u32, u32, u32)> call_006c4280;  // (from the original)
inline constexpr guest::Function<0x006e0b2c, u32(u32, u32, u32, u32)> call_006e0b2c;  // (from the original)

u32 f_004e6e84(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r0 = call_006e0b2c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 0) {
        goto L_4e6ecc;
    }
    r4 = *gptr<u32>(0x95c6d0u);  // (from the original)
    if (r4 == 0) {
        goto L_4e6ecc;
    }
    r0 = r5;
    r0 = call_005b49e0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 0) {
        goto L_4e6ecc;
    }
    r0 = u32(s32(s8(*gptr<u8>(r4 + 0x1cu))));  // (from the original)
    r0 = call_006c4280(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 9u) {
        r0 = 1u;
        goto L_4e6ed0;
    }
L_4e6ecc:;
    r0 = 0u;
L_4e6ed0:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
}

}  // namespace d_004e6e84
GUEST_EXPORT(0x004e6e84, d_004e6e84::f_004e6e84);

// f_004e7234: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e7234 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;  // (from the original)
inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32, u32)> call_0059e65c;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)
inline constexpr guest::Function<0x006f9638, u32(u32, u32, u32, u32)> call_006f9638;  // (from the original)

u32 f_004e7234(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x28u;  // (from the original)
    r5 = r0;
    r8 = r1;
    r4 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    r6 = r2;
    r7 = r3;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r9 = r0;
    r1 = r5;
    r0 = 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_4e733c;
    }
    r1 = r9;
    r0 = 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_4e7290;
    }
    if (r5 != r9) {
        goto L_4e7290;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_006a5e34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    goto L_4e72a4;
L_4e7290:;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_006f9638(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7cc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_4e72a4:;
    if (r0 == 0) {
        goto L_4e733c;
    }
    *gptr<u32>(r13) = u32(1u);
    r3 = r7;
    r2 = r6;
    r1 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc994(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_4e733c;
    }
    r2 = 1u;
    r1 = r7;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0059e65c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r4 == 0) {
        goto L_4e733c;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00300904(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_4e733c;
    }
    *gptr<u32>(r13) = u32(*gptr<u32>(r8));
    r3 = 5u;
    *gptr<u8>(r13 + 4u) = u8((r6 & 0xfu | u32(*gptr<u8>(r13 + 4u)) & ~0xfu) & ~0xf0u | 0xf0u & r7 << 4);  // (from the original)
    r2 = r13;
    r1 = 4u;
    r0 = 0x4eu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006249b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_4e733c:;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_004e7234
GUEST_EXPORT(0x004e7234, d_004e7234::f_004e7234);

// f_004e7344: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e7344 {

inline constexpr guest::Function<0x005b49b4, u32(u32, u32, u32, u32)> call_005b49b4;  // (from the original)
inline constexpr guest::Function<0x006c4280, u32(u32, u32, u32, u32)> call_006c4280;  // (from the original)
inline constexpr guest::Function<0x006e0b2c, u32(u32, u32, u32, u32)> call_006e0b2c;  // (from the original)

u32 f_004e7344(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r0 = call_006e0b2c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 0) {
        goto L_4e738c;
    }
    r4 = *gptr<u32>(0x95c6d0u);  // (from the original)
    if (r4 == 0) {
        goto L_4e738c;
    }
    r0 = r5;
    r0 = call_005b49b4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 0) {
        goto L_4e738c;
    }
    r0 = u32(s32(s8(*gptr<u8>(r4 + 0x1cu))));  // (from the original)
    r0 = call_006c4280(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 9u) {
        r0 = 1u;
        goto L_4e7390;
    }
L_4e738c:;
    r0 = 0u;
L_4e7390:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
}

}  // namespace d_004e7344
GUEST_EXPORT(0x004e7344, d_004e7344::f_004e7344);

// f_004e74d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e74d8 {

inline constexpr guest::Function<0x00167960, u32(u32, u32, u32, u32)> call_00167960;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x00303acc, u32(u32, u32, u32, u32)> call_00303acc;  // (from the original)
inline constexpr guest::Function<0x00305570, u32(u32, u32, u32, u32)> call_00305570;  // (from the original)
inline constexpr guest::Function<0x003055b4, u32(u32, u32, u32, u32)> call_003055b4;  // (from the original)
inline constexpr guest::Function<0x0030b654, u32(u32, u32, u32, u32)> call_0030b654;  // (from the original)
inline constexpr guest::Function<0x004e1668, u32(u32, u32, u32, u32)> call_004e1668;  // (from the original)
inline constexpr guest::Function<0x004e2504, u32(u32, u32, u32, u32)> call_004e2504;  // (from the original)
inline constexpr guest::Function<0x004e5924, u32(u32, u32, u32, u32)> call_004e5924;  // (from the original)
inline constexpr guest::Function<0x00581428, u32(u32, u32, u32, u32)> call_00581428;  // (from the original)
inline constexpr guest::Function<0x00582b1c, u32(u32, u32, u32, u32)> call_00582b1c;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)
inline constexpr guest::Function<0x006a6e90, u32(u32, u32, u32, u32)> call_006a6e90;  // (from the original)
inline constexpr guest::Function<0x007482b8, u32(u32, u32, u32, u32)> call_007482b8;  // (from the original)
inline constexpr guest::Function<0x0074830c, u32(u32, u32, u32, u32)> call_0074830c;  // (from the original)
inline constexpr guest::Function<0x00752b44, u32(u32, u32, u32, u32)> call_00752b44;  // (from the original)
inline constexpr guest::Function<0x0076936c, u32(u32, u32, u32, u32)> call_0076936c;  // (from the original)

u32 f_004e74d8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
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
    u32 nf = 0;
    u32 zf = 0;
    u32 cf = 0;
    u32 vf = 0;
    r13 = r13 - 0x24;  // (from the original)
    r13 = r13 - 0x3cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    *gptr<u32>(r13 + 0x18u) = u32(r0);  // (from the original)
    r0 = 0x10000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    zf = r0 == 0;
    if (!zf) {
        goto L_4e76a0;
    }
    r2 = 0x9c7a14u;  // (from the original)
    r0 = 0u;
    r1 = r0;
    r11 = r0;
    do {
L_4e750c:;
        *gptr<u32>(r2 + (r0 << 2)) = u32(r11);
        r0 = r0 + 1u;
        r1 = r1 + 2u;
        *gptr<u32>(r2 + (r0 << 2)) = u32(r11);
        cf = r1 >= 0x30u;  // (from the original)
        r0 = r0 + 1u;
        guest::preempt();
    } while (!cf);
    r5 = 0x9c7ad4u;  // (from the original)
    r1 = 0u;
    r2 = ~0u;
L_4e7534:;
    r12 = r1 + (r1 << 2);
    r0 = 0u;
    r4 = r5 + (r12 << 4);
    r3 = 0x50u;  // (from the original)
    r12 = r5 + (r1 << 4);
    do {
L_4e7548:;
        cf = r0 >= 0x10u;  // (from the original)
        if (!cf) {
            cf = r1 >= 0x10u;  // (from the original)
        }
        *gptr<u8>(r4 + r0) = u8(r2);
        if (!cf) {
            r6 = r12 + r0;
            r6 = r6 + 0x1400u;  // (from the original)
            *gptr<u8>(r6) = u8(r2);
        }
        res = r3 - 1u;
        zf = res == 0;
        r3 = res;
        r0 = r0 + 1u;
        guest::preempt();
    } while (!zf);
    r1 = r1 + 1u;
    cf = r1 >= 0x40u;  // (from the original)
    if (!cf) {
        guest::preempt();
        goto L_4e7534;
    }
    r0 = 0x9c8fd4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_004e1668(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    if (zf) {
        goto L_4e7784;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_006a5e34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    r4 = r0;
    if (zf) {
        goto L_4e76a0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x2069u;  // (from the original)
    zf = r0 == 0xa0u;  // (from the original)
    r6 = r1 + 1u;
    r5 = r1 - 3u;
    if (zf) {
        goto L_4e76a8;
    }
    zf = r0 == 0x9fu;  // (from the original)
    if (!zf) {
        goto L_4e76a0;
    }
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r3 = 5u;
    r2 = 6u;
    r1 = r13 + 0x10u;  // (from the original)
    r0 = r4;
    *gptr<u32>(r13) = u32(r11);
    guest::cpu()->r[13] = r13;
    r0 = call_002fc994(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r6;
    r0 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r3 = 0xeu;  // (from the original)
    r2 = 8u;
    r1 = r13 + 0x14u;  // (from the original)
    r0 = r4;
    *gptr<u32>(r13) = u32(r11);
    guest::cpu()->r[13] = r13;
    r0 = call_002fc994(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 3u;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_003055b4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5;
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0u;
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003055b4(r0, r1, r2, r3);
    r3 = 0xbu;  // (from the original)
    r2 = r3;
    r1 = r13 + 8u;
    r0 = r4;
    *gptr<u32>(r13) = u32(r11);
    guest::cpu()->r[13] = r13;
    r0 = call_002fc994(r0, r1, r2, r3);
    r3 = 9u;
    r2 = 8u;
    r1 = r13 + 0xcu;  // (from the original)
    r0 = r4;
    *gptr<u32>(r13) = u32(r11);
    guest::cpu()->r[13] = r13;
    r0 = call_002fc994(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r13 + 0x10u;  // (from the original)
L_4e76a0:;
    r13 = r13 + 0x3cu;  // (from the original)
    r13 = r13 + 0x24;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_4e76a8:;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r3 = 5u;
    r2 = 7u;
    r1 = r13 + 0x10u;  // (from the original)
    r0 = r4;
    *gptr<u32>(r13) = u32(r11);
    guest::cpu()->r[13] = r13;
    r0 = call_002fc994(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r6;
    r0 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r3 = 0xeu;  // (from the original)
    r2 = 7u;
    r1 = r13 + 0x14u;  // (from the original)
    r0 = r4;
    *gptr<u32>(r13) = u32(r11);
    guest::cpu()->r[13] = r13;
    r0 = call_002fc994(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 1u;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_003055b4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5;
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0u;
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003055b4(r0, r1, r2, r3);
    r3 = 0xcu;  // (from the original)
    r2 = 4u;
    r1 = r13 + 8u;
    r0 = r4;
    *gptr<u32>(r13) = u32(r11);
    guest::cpu()->r[13] = r13;
    r0 = call_002fc994(r0, r1, r2, r3);
    r3 = 9u;
    r2 = 6u;
    r1 = r13 + 0xcu;  // (from the original)
    r0 = r4;
    *gptr<u32>(r13) = u32(r11);
    guest::cpu()->r[13] = r13;
    r0 = call_002fc994(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r13 + 0x10u;  // (from the original)
    r13 = r13 + 0x3cu;  // (from the original)
    r13 = r13 + 0x24;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_4e7784:;
    guest::cpu()->r[13] = r13;
    r0 = call_00167960(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_006a5e34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    *gptr<u32>(r13 + 0x20u) = u32(r0);  // (from the original)
    if (zf) {
        guest::preempt();
        goto L_4e76a0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_007482b8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r10 = r0;
    r0 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0074830c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r8 = 0u;
    *gptr<u32>(r13 + 0x24u) = u32(r0);  // (from the original)
L_4e77bc:;
    r0 = *gptr<u32>(r13 + 0x24u);  // (from the original)
    nf = r0 >> 0x1f;  // (from the original)
    zf = r0 == 0;
    vf = 0u;
    r0 = 0u;
    *gptr<u32>(r13 + 0x1cu) = u32(r0);  // (from the original)
    if (zf || nf != vf) {
        goto L_4e789c;
    }
L_4e77d0:;
    nf = r10 >> 0x1f;  // (from the original)
    zf = r10 == 0;
    vf = 0u;
    r9 = 0u;
    if (zf || nf != vf) {
        goto L_4e7884;
    }
L_4e77dc:;
    r7 = 0u;
L_4e77e0:;
    r4 = 0u;
L_4e77e4:;
    r6 = r8 & 0xffu;  // (from the original)
    r0 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r2 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    r3 = r4;
    r1 = r9;
    *gptr<u32>(r13 + 4u) = u32(r6);
    *gptr<u32>(r13) = u32(r7);
    guest::cpu()->r[13] = r13;
    r0 = call_00752b44(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    r5 = r0;
    if (zf) {
        goto L_4e7860;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0030b654(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    if (zf) {
        goto L_4e7860;
    }
    *gptr<u32>(r13) = u32(r4);
    *gptr<u32>(r13 + 4) = u32(r7);
    r3 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    r2 = r9;
    r1 = r13 + 0x34u;  // (from the original)
    r0 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006a6e90(r0, r1, r2, r3);
    ea = r13 + 0x18u;  // (from the original)
    r3 = *gptr<u32>(ea);
    r2 = r6;
    ea = r13 + 0x30u;  // (from the original)
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_00582b1c(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r0);
    *gptr<u32>(r13 + 4) = u32(r5);
    *gptr<u32>(r13 + 8) = u32(r11);
    r12 = r13 + 0x30u;  // (from the original)
    r0 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    r1 = *gptr<u32>(r12);
    r2 = *gptr<u32>(r12 + 4);
    r3 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_004e5924(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_4e7860:;
    r4 = r4 + 1u;
    res = r4 - 0x10u;  // (from the original)
    nf = res >> 0x1f;  // (from the original)
    vf = ((r4 ^ 0x10u) & (r4 ^ res)) >> 0x1f;  // (from the original)
    if (nf != vf) {
        guest::preempt();
        goto L_4e77e4;
    }
    r7 = r7 + 1u;
    res = r7 - 0x10u;  // (from the original)
    nf = res >> 0x1f;  // (from the original)
    vf = ((r7 ^ 0x10u) & (r7 ^ res)) >> 0x1f;  // (from the original)
    if (nf != vf) {
        guest::preempt();
        goto L_4e77e0;
    }
    r9 = r9 + 1u;
    res = r9 - r10;
    nf = res >> 0x1f;  // (from the original)
    vf = ((r9 ^ r10) & (r9 ^ res)) >> 0x1f;  // (from the original)
    if (nf != vf) {
        guest::preempt();
        goto L_4e77dc;
    }
L_4e7884:;
    r0 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    r1 = *gptr<u32>(r13 + 0x24u);  // (from the original)
    r0 = r0 + 1u;
    res = r0 - r1;
    nf = res >> 0x1f;  // (from the original)
    vf = ((r0 ^ r1) & (r0 ^ res)) >> 0x1f;  // (from the original)
    *gptr<u32>(r13 + 0x1cu) = u32(r0);  // (from the original)
    if (nf != vf) {
        guest::preempt();
        goto L_4e77d0;
    }
L_4e789c:;
    r8 = r8 + 1u;
    cf = r8 >= 2u;
    if (!cf) {
        guest::preempt();
        goto L_4e77bc;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    zf = r0 == 0;
    if (zf) {
        guest::preempt();
        goto L_4e76a0;
    }
    r0 = *gptr<u32>(r13 + 0x24u);  // (from the original)
    nf = r0 >> 0x1f;  // (from the original)
    zf = r0 == 0;
    vf = 0u;
    if (!zf && nf == vf) {
        r9 = 0x9529fcu;  // (from the original)
    }
    r0 = 0u;
    if (!zf && nf == vf) {
        r8 = r11;
    }
    *gptr<u32>(r13 + 0xcu) = u32(r0);  // (from the original)
    if (zf || nf != vf) {
        guest::preempt();
        goto L_4e76a0;
    }
L_4e78e0:;
    nf = r10 >> 0x1f;  // (from the original)
    zf = r10 == 0;
    vf = 0u;
    r11 = 0u;
    if (zf || nf != vf) {
        goto L_4e7ae8;
    }
L_4e78ec:;
    r6 = 0u;
L_4e78f0:;
    r4 = 0u;
L_4e78f4:;
    *gptr<u32>(r13) = u32(r6);
    *gptr<u32>(r13 + 4) = u32(r8);
    r0 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r2 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r3 = r4;
    r1 = r11;
    guest::cpu()->r[13] = r13;
    r0 = call_00752b44(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    r5 = r0;
    if (zf) {
        goto L_4e7ac4;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fcaf4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    if (!zf) {
        goto L_4e7ac4;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00303acc(r0, r1, r2, r3);
    zf = r0 == 0;
    if (zf) {
        goto L_4e7ac4;
    }
    *gptr<u32>(r13) = u32(r4);
    *gptr<u32>(r13 + 4) = u32(r6);
    r3 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r2 = r11;
    r1 = r13 + 0x1cu;  // (from the original)
    r0 = r13 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006a6e90(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r13 + 0x2cu);  // (from the original)
    r1 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_004e2504(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    if (!zf) {
        goto L_4e79f8;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00305570(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 1u;
    if (!zf) {
        goto L_4e7ac4;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00305570(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r7 & ~0xffu;  // (from the original)
    r7 = r1 | r0;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0076936c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r0 << 8;
    r1 = r1 & 0xff00u;  // (from the original)
    r1 = r1 | r7;
    r1 = r1 & 0xffu;  // (from the original)
    cf = r1 >= 5u;
    if (cf) {
        goto L_4e79d0;
    }
    r1 = *gptr<u32>(r9 + (r1 << 2));
    r2 = u32(*gptr<u8>(r1 + 0x10u));  // (from the original)
    zf = r2 == 1u;
    cf = r2 >= 1u;
    if (!cf || zf) {
        goto L_4e79d0;
    }
    r0 = r0 & 3u;
    r0 = *gptr<u32>(r1 + (r0 << 2));
    r1 = r0 + 8u;
    goto L_4e79d4;
L_4e79d0:;
    r1 = 0x865620u;  // (from the original)
L_4e79d4:;
    r0 = *gptr<u32>(r1);
    r1 = *gptr<u32>(r1 + 4);
    r2 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    r1 = r1 + r2;
    r2 = *gptr<u32>(r13 + 0x2cu);  // (from the original)
    r0 = r0 + r2;
    guest::cpu()->r[13] = r13;
    r0 = call_004e2504(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    if (zf) {
        goto L_4e7ac4;
    }
L_4e79f8:;
    r1 = r5;
    r0 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_006a5e34(r0, r1, r2, r3);
    *gptr<u32>(r13 + 0x34u) = u32(r0);  // (from the original)
    *gptr<u32>(r13) = u32(r4);
    *gptr<u32>(r13 + 4) = u32(r6);
    *gptr<u32>(r13 + 8) = u32(r8);
    r2 = r11;
    r1 = 0x95bfdcu;  // (from the original)
    r3 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00581428(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00305570(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 1u;
    if (!zf) {
        goto L_4e7abc;
    }
    r7 = r13 + 0x30u;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00305570(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5 & ~0xffu;  // (from the original)
    r5 = r1 | r0;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_0076936c(r0, r1, r2, r3);
    r1 = r0 << 8;
    r1 = r1 & 0xff00u;  // (from the original)
    r1 = r1 | r5;
    r1 = r1 & 0xffu;  // (from the original)
    cf = r1 >= 5u;
    if (cf) {
        goto L_4e7a94;
    }
    r1 = *gptr<u32>(r9 + (r1 << 2));
    r2 = u32(*gptr<u8>(r1 + 0x10u));  // (from the original)
    zf = r2 == 1u;
    cf = r2 >= 1u;
    if (!cf || zf) {
        goto L_4e7a94;
    }
    r0 = r0 & 3u;
    r0 = *gptr<u32>(r1 + (r0 << 2));
    r1 = r0 + 8u;
    goto L_4e7a98;
L_4e7a94:;
    r1 = 0x865620u;  // (from the original)
L_4e7a98:;
    r0 = *gptr<u32>(r1);
    r1 = *gptr<u32>(r1 + 4);
    r2 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    *gptr<u32>(r13) = u32(r8);
    r3 = r1 + r2;
    r1 = *gptr<u32>(r13 + 0x2cu);  // (from the original)
    r2 = r0 + r1;
    r1 = 0x95bfdcu;  // (from the original)
    r0 = *gptr<u32>(r13 + 0x34u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc994(r0, r1, r2, r3);
L_4e7abc:;
L_4e7ac4:;
    r4 = r4 + 1u;
    res = r4 - 0x10u;  // (from the original)
    nf = res >> 0x1f;  // (from the original)
    vf = ((r4 ^ 0x10u) & (r4 ^ res)) >> 0x1f;  // (from the original)
    if (nf != vf) {
        guest::preempt();
        goto L_4e78f4;
    }
    r6 = r6 + 1u;
    res = r6 - 0x10u;  // (from the original)
    nf = res >> 0x1f;  // (from the original)
    vf = ((r6 ^ 0x10u) & (r6 ^ res)) >> 0x1f;  // (from the original)
    if (nf != vf) {
        guest::preempt();
        goto L_4e78f0;
    }
    r11 = r11 + 1u;
    res = r11 - r10;
    nf = res >> 0x1f;  // (from the original)
    vf = ((r11 ^ r10) & (r11 ^ res)) >> 0x1f;  // (from the original)
    if (nf != vf) {
        guest::preempt();
        goto L_4e78ec;
    }
L_4e7ae8:;
    r0 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r1 = *gptr<u32>(r13 + 0x24u);  // (from the original)
    r0 = r0 + 1u;
    res = r0 - r1;
    nf = res >> 0x1f;  // (from the original)
    vf = ((r0 ^ r1) & (r0 ^ res)) >> 0x1f;  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(r0);  // (from the original)
    if (nf != vf) {
        guest::preempt();
        goto L_4e78e0;
    }
    r13 = r13 + 0x3cu;  // (from the original)
    r13 = r13 + 0x24;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_004e74d8
GUEST_EXPORT(0x004e74d8, d_004e74d8::f_004e74d8);

// f_004e7bb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e7bb0 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x005708e8, u32(u32, u32, u32, u32)> call_005708e8;  // (from the original)
inline constexpr guest::Function<0x0057456c, u32(u32, u32, u32, u32)> call_0057456c;  // (from the original)
inline constexpr guest::Function<0x005b42fc, u32(u32, u32, u32, u32)> call_005b42fc;  // (from the original)
inline constexpr guest::Function<0x0061402c, u32(u32, u32, u32, u32)> call_0061402c;  // (from the original)
inline constexpr guest::Function<0x007457e8, u32(u32, u32, u32, u32)> call_007457e8;  // (from the original)

u32 f_004e7bb0(u32 r0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 cf = 0;
    r3 = r2;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r2 = r1;
    r1 = r0;
    r0 = 0x9c7ad4u;  // (from the original)
    r0 = call_007457e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = 0u;
    res = r0;
    r4 = res;
    r6 = r7;
    if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_4e7c40;
    }
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = call_005b42fc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (u32(r4 >= r0) && !u32(r4 == r0)) {
        goto L_4e7c40;
    }
    r5 = 0x9c7a14u;  // (from the original)
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = call_005b42fc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    cf = r0 >= 0x30u;  // (from the original)
    if (!cf || u32(r0 == 0x30u)) {  // (from the original)
        cf = r4 >= r0;
    }
    r1 = 0u;
    if (cf) {
        goto L_4e7c44;
    }
    r4 = *gptr<u32>(r5 + (r4 << 2));
    if (r4 == 0) {
        goto L_4e7c44;
    }
    r1 = r6;
    r0 = r4;
    r0 = call_0057456c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0x2bu) {  // (from the original)
        r0 = call_0061402c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r1 = r7;
    r0 = r4;
    r0 = call_005708e8(r0, r1, r2, r3);
    r1 = r0;
    goto L_4e7c44;
L_4e7c40:;
    r1 = 0u;
L_4e7c44:;
    r0 = r1;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_004e7bb0
GUEST_EXPORT(0x004e7bb0, d_004e7bb0::f_004e7bb0);

// f_004e7d38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e7d38 {


void f_004e7d38(u32 r0) {
    u32 r1 = 0;
    r1 = 0x9c79d4u;  // (from the original)
    if (r0 >= 4u) {
        guest::cpu()->r[1] = r1;
        return;
    }
    *gptr<u8>(r1 + (r0 << 4)) = u8(0u);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_004e7d38
GUEST_EXPORT(0x004e7d38, d_004e7d38::f_004e7d38);

// f_004e7d54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e7d54 {

inline constexpr guest::Function<0x00203558, u32(u32, u32, u32, u32)> call_00203558;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)

u32 f_004e7d54(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r6 = r0;
    r1 = r0;
    r13 = r13 - 0x28u;  // (from the original)
    r4 = r2;
    r5 = r3;
    r0 = 0x80u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r1 = r6;
        r0 = 0x2000u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002f74e0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_4e7e30;
        }
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00300904(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_00300904(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_4e7e00;
        }
        guest::cpu()->r[13] = r13;
        r0 = call_0030b6c4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_4e7e00;
        }
    }
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00203558(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        *gptr<u32>(r0) = u32(r4);
        *gptr<u32>(r0 + 4) = u32(r5);
        guest::cpu()->r[13] = r13;
        r0 = call_00300904(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            r0 = 1u;
            goto L_4e7e30;
        }
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00300904(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_4e7e30;
    }
L_4e7e00:;
    r7 = 0u;
    *gptr<u32>(r13) = u32(r4);
    *gptr<u32>(r13 + 4) = u32(r5);
    *gptr<u8>(r13 + 8u) = u8(r6);
    guest::cpu()->r[13] = r13;
    r0 = call_0030b6c4(r0, r1, r2, r3);
    if (r0 != 0) {
        r7 = 4u;
    }
    r3 = 0x10u;  // (from the original)
    r2 = r13;
    r1 = r7;
    r0 = 0x53u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006249b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
L_4e7e30:;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_004e7d54
GUEST_EXPORT(0x004e7d54, d_004e7d54::f_004e7d54);

// f_004e82b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e82b4 {

inline constexpr guest::Function<0x0024b448, u32(u32, u32, u32, u32)> call_0024b448;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x0030b6b8, u32(u32, u32, u32, u32)> call_0030b6b8;  // (from the original)
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> call_005361a8;  // (from the original)

u32 f_004e82b4(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 zf = 0;
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_005361a8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = u32(*gptr<u8>(r0 + 0xau));  // (from the original)
    if (r0 < 0x9bu) {  // (from the original)
        zf = r0 == 0x93u;  // (from the original)
        if (!zf) {
            zf = r0 == 0x94u;  // (from the original)
        }
        if (zf) {
            goto L_4e82f8;
        }
    }
    r0 = r4;
    r0 = call_0030b6b8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r0 - 0x33b5u;  // (from the original)
    if (u32(r0 >= 6u) && !u32(r0 == 6u)) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
L_4e82f8:;
    r0 = call_002fb94c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2 = 1u;
    r0 = r0 + 0x8ae0u;  // (from the original)
    r1 = r2;
    r4 = r0;
    r0 = call_0024b448(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 1u;
    r1 = 0x64u;  // (from the original)
    r0 = r4;
    r0 = call_0024b448(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_004e82b4
GUEST_EXPORT(0x004e82b4, d_004e82b4::f_004e82b4);

// f_004e8868: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e8868 {

inline constexpr guest::Function<0x002bf9cc, u32(u32, u32, u32, u32)> call_002bf9cc;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> call_002ff8b0;  // (from the original)
inline constexpr guest::Function<0x00304ef0, u32(u32, u32, u32, u32)> call_00304ef0;  // (from the original)
inline constexpr guest::Function<0x00313124, u32(u32, u32, u32, u32)> call_00313124;  // (from the original)
inline constexpr guest::Function<0x006bb358, u32(u32, u32, u32, u32)> call_006bb358;  // (from the original)
inline constexpr guest::Function<0x006bb3bc, u32(u32, u32, u32, u32)> call_006bb3bc;  // (from the original)
inline constexpr guest::Function<0x00724424, u32(u32, u32, u32, u32)> call_00724424;  // (from the original)
inline constexpr guest::Function<0x0076c288, u32(u32, u32, u32, u32)> call_0076c288;  // (from the original)

u32 f_004e8868(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x40u;  // (from the original)
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002ff8b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb94c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_4e8998;
    }
    r9 = 0x33a7u;  // (from the original)
    r4 = 0u;
    r5 = r0 + 0x6bd0u;  // (from the original)
    r7 = r4;
    r8 = 0xau;  // (from the original)
    r6 = 1u;
L_4e88a0:;
    r2 = 0u;
    r1 = r4;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00724424(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0xcu;  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00313124(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_4e8978;
    }
    r3 = r13 + 0x14u;  // (from the original)
    r2 = r13 + 0x20u;  // (from the original)
    r1 = r13 + 0x1cu;  // (from the original)
    r0 = r13 + 0xcu;  // (from the original)
    *gptr<u8>(r13 + 0x1cu) = u8(r7);  // (from the original)
    *gptr<u32>(r13 + 0x20u) = u32(r6);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r8);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0076c288(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (u32(*gptr<u8>(r13 + 0x1cu)) == 0) {  // (from the original)
        goto L_4e896c;
    }
    if (*gptr<u32>(r13 + 0x14u) >= 0xau) {  // (from the original)
        goto L_4e896c;
    }
    r1 = r9;
    r0 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    r0 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00304ef0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x18u;  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006bb3bc(r0, r1, r2, r3);
    r3 = 0u;
    r2 = r13 + 0x10u;  // (from the original)
    r1 = r4;
    r0 = r5;
    *gptr<u32>(r13) = u32(r6);
    guest::cpu()->r[13] = r13;
    r0 = call_002bf9cc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    goto L_4e8978;
L_4e896c:;
    r1 = 0u;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006bb358(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
L_4e8978:;
    r0 = r13 + 0xcu;  // (from the original)
    r4 = r4 + 1u;
    if (r4 < 0x10u) {  // (from the original)
        guest::preempt();
        goto L_4e88a0;
    }
L_4e8998:;
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_004e8868
GUEST_EXPORT(0x004e8868, d_004e8868::f_004e8868);

// f_004e8b00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e8b00 {

inline constexpr guest::Function<0x00203558, u32(u32, u32, u32, u32)> call_00203558;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x003081b4, u32(u32, u32, u32, u32)> call_003081b4;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x0061a788, u32(u32, u32, u32, u32)> call_0061a788;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)

u32 f_004e8b00(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r6 = r0;
    r13 = r13 - 0x28u;  // (from the original)
    r4 = r2;
    r5 = r1;
    r0 = 0x80u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r1 = r5;
        r0 = 0x2000u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002f74e0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_4e8c6c;
        }
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00300904(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_0030b6c4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_4e8bb8;
        }
        goto L_4e8bcc;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00203558(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r12 = r0;
    if (r0 == 0) {
        goto L_4e8c6c;
    }
    r2 = 4u;
    r0 = r6 - 4u;
    r1 = r13 - 1u;
    do {
L_4e8b80:;
        ea = r0 + 4u;
        r3 = *gptr<u32>(ea);
        res = r2 - 1u;
        r2 = res;
        ea = r1 + 1u;
        *gptr<u8>(ea) = u8(r3);
        ea = r0 + 8u;
        r0 = ea;
        r3 = *gptr<u32>(ea);
        ea = r1 + 2u;
        *gptr<u8>(ea) = u8(r3);
        r1 = ea;
        guest::preempt();
    } while (res != 0);
    r1 = r13;
    if (r4 == 0) {
        r0 = r12 + 0x12u;  // (from the original)
    } else {
        r0 = r12 + 0xau;  // (from the original)
    }
    guest::cpu()->r[13] = r13;
    r0 = call_003081b4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    goto L_4e8c68;
L_4e8bb8:;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0061a788(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_4e8c18;
    }
L_4e8bcc:;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00203558(r0, r1, r2, r3);
    r12 = r0;
    if (r0 == 0) {
        goto L_4e8c18;
    }
    r2 = 4u;
    r0 = r6 - 4u;
    r1 = r13 + 0xfu;  // (from the original)
    do {
L_4e8bec:;
        ea = r0 + 4u;
        r3 = *gptr<u32>(ea);
        res = r2 - 1u;
        r2 = res;
        ea = r1 + 1u;
        *gptr<u8>(ea) = u8(r3);
        ea = r0 + 8u;
        r0 = ea;
        r3 = *gptr<u32>(ea);
        ea = r1 + 2u;
        *gptr<u8>(ea) = u8(r3);
        r1 = ea;
        guest::preempt();
    } while (res != 0);
    r1 = r13 + 0x10u;  // (from the original)
    if (r4 == 0) {
        r0 = r12 + 0x12u;  // (from the original)
    } else {
        r0 = r12 + 0xau;  // (from the original)
    }
    guest::cpu()->r[13] = r13;
    r0 = call_003081b4(r0, r1, r2, r3);
L_4e8c18:;
    r2 = 4u;
    r0 = r6 - 4u;
    r1 = r13 - 1u;
    do {
L_4e8c24:;
        ea = r0 + 4u;
        r3 = *gptr<u32>(ea);
        res = r2 - 1u;
        r2 = res;
        ea = r1 + 1u;
        *gptr<u8>(ea) = u8(r3);
        ea = r0 + 8u;
        r0 = ea;
        r3 = *gptr<u32>(ea);
        ea = r1 + 2u;
        *gptr<u8>(ea) = u8(r3);
        r1 = ea;
        guest::preempt();
    } while (res != 0);
    *gptr<u8>(r13 + 8u) = u8(r5);
    *gptr<u8>(r13 + 9u) = u8(r4);
    r4 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_0030b6c4(r0, r1, r2, r3);
    if (r0 != 0) {
        r4 = 4u;
    }
    r3 = 0xau;  // (from the original)
    r2 = r13;
    r1 = r4;
    r0 = 0x55u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006249b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_4e8c68:;
    r0 = 1u;
L_4e8c6c:;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_004e8b00
GUEST_EXPORT(0x004e8b00, d_004e8b00::f_004e8b00);

// f_004e93d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e93d8 {

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x00303acc, u32(u32, u32, u32, u32)> call_00303acc;  // (from the original)
inline constexpr guest::Function<0x004e0cec, u32(u32, u32, u32, u32)> call_004e0cec;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)
inline constexpr guest::Function<0x00768d60, u32(u32, u32, u32, u32)> call_00768d60;  // (from the original)

u32 f_004e93d8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r5 = r0;
    r6 = r1;
    r4 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_006a5e34(r0, r1, r2, r3);
    r1 = 0u;
    r3 = r0;
    r2 = r1;
    *gptr<u32>(r13) = u32(r1);
    r1 = r6;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_004e0cec(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r4 != 0) {
        goto L_4e9444;
    }
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00303acc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_4e9444;
    }
    r0 = 0u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_4e9444:;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00768d60(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 ^ 1u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_004e93d8
GUEST_EXPORT(0x004e93d8, d_004e93d8::f_004e93d8);

// f_004e95f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e95f0 {


u32 f_004e95f0() {
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 0x9529d4u;  // (from the original)
    r1 = 0u;
    *gptr<u8>(r0 + 1u) = u8(r1);
    *gptr<u8>(r0 + 2u) = u8(r1);
    *gptr<u8>(r0 + 3u) = u8(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_004e95f0
GUEST_EXPORT(0x004e95f0, d_004e95f0::f_004e95f0);

// f_004e960c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e960c {

struct __attribute__((packed)) Object_004e960c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_004e960c_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_004e960c_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_004e960c_1, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x00613718, u32(u32, u32, u32, u32)> call_00613718;  // (from the original)

u32 f_004e960c(gptr<Object_004e960c_0> arg0, gptr<Object_004e960c_1> arg1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 nf = 0;
    u32 zf = 0;
    u32 cf = 0;
    u32 vf = 0;
    r13 = r13 - 0x20;  // (from the original)
    zf = r0 == 0;
    r4 = r0;
    r5 = r1;
    if (!zf) {
        zf = r5 == 0;
    }
    r6 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r7 = r2;
    r8 = r3;
    if (zf) {
        goto L_4e9730;
    }
    if (r6 == 0) {
        r1 = 0x40u;  // (from the original)
        arg0->word_0 = u32(r1);
        r0 = 0x50u;  // (from the original)
    } else {
        r0 = 0x10u;  // (from the original)
        arg0->word_0 = u32(r0);
    }
    arg1->word_0 = u32(r0);
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r9 = r0;
    r1 = r0;
    r0 = 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        res = r7 - 0x10u;  // (from the original)
        nf = res >> 0x1f;  // (from the original)
        vf = ((r7 ^ 0x10u) & (r7 ^ res)) >> 0x1f;  // (from the original)
        if (nf != vf) {
            res = r8 - 0x10u;  // (from the original)
            nf = res >> 0x1f;  // (from the original)
            vf = ((r8 ^ 0x10u) & (r8 ^ res)) >> 0x1f;  // (from the original)
        }
        if (nf != vf) {
            goto L_4e96a0;
        }
    }
    r1 = r9;
    r0 = 0x200u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_4e96a0;
    }
    r1 = r9;
    r0 = 0x10000000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_4e96ac;
    }
L_4e96a0:;
    *gptr<u32>(r4) = u32(r8);
    *gptr<u32>(r5) = u32(r7);
    goto L_4e96ec;
L_4e96ac:;
    r1 = r9;
    r0 = 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_4e96ec;
    }
    r1 = r8;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00613718(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_4e96ec;
    }
    r1 = r7 - 0x10u;  // (from the original)
    *gptr<u32>(r4) = u32(r8 - 0x10u);  // (from the original)
    *gptr<u32>(r5) = u32(r1);
L_4e96ec:;
    if (r6 != 0) {
        if (r6 == 1u) {
            goto L_4e971c;
        }
        goto L_4e9730;
    }
    cf = *gptr<u32>(r4) >= 0x40u;  // (from the original)
    if (!cf) {
        cf = *gptr<u32>(r5) >= 0x50u;  // (from the original)
    }
    if (cf) {
        goto L_4e9730;
    }
L_4e9714:;
    r0 = 1u;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_4e971c:;
    cf = *gptr<u32>(r4) >= 0x10u;  // (from the original)
    if (!cf) {
        cf = *gptr<u32>(r5) >= 0x10u;  // (from the original)
    }
    if (!cf) {
        guest::preempt();
        goto L_4e9714;
    }
L_4e9730:;
    r0 = 0u;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_004e960c
GUEST_EXPORT(0x004e960c, d_004e960c::f_004e960c);

// f_004e9738: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e9738 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x004e960c, u32(u32, u32, u32, u32)> call_004e960c;  // (from the original)
inline constexpr guest::Function<0x005b41e8, u32(u32, u32, u32, u32)> call_005b41e8;  // (from the original)
inline constexpr guest::Function<0x005b42fc, u32(u32, u32, u32, u32)> call_005b42fc;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)
inline constexpr guest::Function<0x007529d8, u32(u32, u32, u32, u32)> call_007529d8;  // (from the original)

u32 f_004e9738(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x30u;  // (from the original)
    r7 = r0;
    r4 = r1;
    r6 = *gptr<u32>(r13 + 0x30u);  // (from the original)
    r8 = r2;
    r9 = r3;
    guest::cpu()->r[13] = r13;
    r0 = call_006a5e34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_005b41e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r5 == 0) {
        goto L_4e986c;
    }
    if (r0 >= 2u) {
        goto L_4e986c;
    }
    if (r0 < r6) {
        goto L_4e986c;
    }
    r2 = r9;
    r1 = r8;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_007529d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_4e986c;
    }
    r5 = 0x9c7a14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_005b42fc(r0, r1, r2, r3);
    r1 = r0;
    if (r0 == 0) {
        goto L_4e986c;
    }
    r2 = r1 & 1u;
    r0 = 0u;
    if (!u32(r2 >= 0u) || u32(r2 == 0)) {
        goto L_4e97d0;
    }
    do {
L_4e97b8:;
        if (*gptr<u32>(r5 + (r0 << 2)) == r4) {
            goto L_4e97fc;
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (u32(r2 >= r0) && !u32(r2 == r0));
L_4e97d0:;
    r0 = r2;
    if (r2 >= r1) {
        goto L_4e986c;
    }
L_4e97dc:;
    if (*gptr<u32>(r5 + (r0 << 2)) == r4) {
        goto L_4e97fc;
    }
    if (*gptr<u32>(r5 + (r0 << 2) + 4u) != r4) {
        goto L_4e9860;
    }
    r0 = r0 + 1u;
L_4e97fc:;
    if (r0 + 1u == 0) {
        goto L_4e986c;
    }
    r1 = 0u;
    *gptr<u32>(r13 + 0xcu) = u32(r1);  // (from the original)
    r4 = sxtb(r0);
    *gptr<u32>(r13 + 4u) = u32(r1);
    r3 = r9;
    r2 = r8;
    r1 = r13 + 4u;
    r0 = r13 + 0xcu;  // (from the original)
    *gptr<u32>(r13) = u32(r6);
    guest::cpu()->r[13] = r13;
    r0 = call_004e960c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_4e986c;
    }
    r0 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    if (r6 == 1u) {
        goto L_4e9878;
    }
    r1 = *gptr<u32>(r13 + 4u);
    *gptr<u8>(r7 + (r0 + (r0 << 2) << 4) + r1) = u8(r4);
L_4e9854:;
    r0 = 1u;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_4e9860:;
    r0 = r0 + 2u;
    if (u32(r1 >= r0) && !u32(r1 == r0)) {
        guest::preempt();
        goto L_4e97dc;
    }
L_4e986c:;
    r0 = 0u;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_4e9878:;
    r1 = *gptr<u32>(r13 + 4u);
    *gptr<u8>(r7 + (r0 << 4) + r1 + 0x1400u) = u8(r4);  // (from the original)
    guest::preempt();
    goto L_4e9854;
}

}  // namespace d_004e9738
GUEST_EXPORT(0x004e9738, d_004e9738::f_004e9738);

// f_004e9894: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e9894 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x004e960c, u32(u32, u32, u32, u32)> call_004e960c;  // (from the original)
inline constexpr guest::Function<0x005b41e8, u32(u32, u32, u32, u32)> call_005b41e8;  // (from the original)
inline constexpr guest::Function<0x005b42fc, u32(u32, u32, u32, u32)> call_005b42fc;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)
inline constexpr guest::Function<0x007529d8, u32(u32, u32, u32, u32)> call_007529d8;  // (from the original)

u32 f_004e9894(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x30u;  // (from the original)
    r7 = r0;
    r4 = r1;
    r6 = *gptr<u32>(r13 + 0x30u);  // (from the original)
    r8 = r2;
    r9 = r3;
    guest::cpu()->r[13] = r13;
    r0 = call_006a5e34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_005b41e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r5 == 0) {
        goto L_4e99c8;
    }
    if (r0 >= 2u) {
        goto L_4e99c8;
    }
    if (r0 < r6) {
        goto L_4e99c8;
    }
    r2 = r9;
    r1 = r8;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_007529d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_4e99c8;
    }
    r5 = 0x9c7a14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_005b42fc(r0, r1, r2, r3);
    r1 = r0;
    r10 = ~0u;
    if (r0 == 0) {
        goto L_4e99c8;
    }
    r2 = r1 & 1u;
    r0 = 0u;
    if (!u32(r2 >= 0u) || u32(r2 == 0)) {
        goto L_4e9930;
    }
    do {
L_4e9918:;
        if (*gptr<u32>(r5 + (r0 << 2)) == r4) {
            goto L_4e995c;
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (u32(r2 >= r0) && !u32(r2 == r0));
L_4e9930:;
    r0 = r2;
    if (r2 >= r1) {
        goto L_4e99c8;
    }
L_4e993c:;
    if (*gptr<u32>(r5 + (r0 << 2)) == r4) {
        goto L_4e995c;
    }
    if (*gptr<u32>(r5 + (r0 << 2) + 4u) != r4) {
        goto L_4e99bc;
    }
    r0 = r0 + 1u;
L_4e995c:;
    if (r0 + 1u == 0) {
        goto L_4e99c8;
    }
    r0 = 0u;
    *gptr<u32>(r13 + 4u) = u32(r0);
    *gptr<u32>(r13 + 8u) = u32(r0);
    r3 = r9;
    r2 = r8;
    r1 = r13 + 8u;
    r0 = r13 + 4u;
    *gptr<u32>(r13) = u32(r6);
    guest::cpu()->r[13] = r13;
    r0 = call_004e960c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_4e99c8;
    }
    r0 = *gptr<u32>(r13 + 4u);
    if (r6 == 1u) {
        goto L_4e99d4;
    }
    r1 = *gptr<u32>(r13 + 8u);
    *gptr<u8>(r7 + (r0 + (r0 << 2) << 4) + r1) = u8(r10);
L_4e99b0:;
    r0 = 1u;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_4e99bc:;
    r0 = r0 + 2u;
    if (u32(r1 >= r0) && !u32(r1 == r0)) {
        guest::preempt();
        goto L_4e993c;
    }
L_4e99c8:;
    r0 = 0u;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_4e99d4:;
    r1 = *gptr<u32>(r13 + 8u);
    *gptr<u8>(r7 + (r0 << 4) + r1 + 0x1400u) = u8(r10);  // (from the original)
    guest::preempt();
    goto L_4e99b0;
}

}  // namespace d_004e9894
GUEST_EXPORT(0x004e9894, d_004e9894::f_004e9894);

// f_004e99f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e99f0 {

inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> call_004e9a28;  // (from the original)

u32 f_004e99f0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r2;
    r5 = r0;
    r2 = r1;
    r1 = r13 + 4u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_003171b4(r0, r1, r2, r3);
    r1 = *gptr<u32>(r13);
    r2 = *gptr<u32>(r13 + 4);
    r3 = r4;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_004e9a28(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_004e99f0
GUEST_EXPORT(0x004e99f0, d_004e99f0::f_004e99f0);

// f_004e9a28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e9a28 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x005b42fc, u32(u32, u32, u32, u32)> call_005b42fc;  // (from the original)
inline constexpr guest::Function<0x007457e8, u32(u32, u32, u32, u32)> call_007457e8;  // (from the original)

u32 f_004e9a28(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0 = call_007457e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    r0 = 8u;
    r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r4 + 1u == 0) {
        goto L_4e9a6c;
    }
    r5 = 0x9c7a14u;  // (from the original)
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = call_005b42fc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (u32(r0 >= 0x30u) && !u32(r0 == 0x30u)) {  // (from the original)
        goto L_4e9a6c;
    }
    if (r4 < r0) {
        r0 = *gptr<u32>(r5 + (r4 << 2));
        goto L_4e9a70;
    }
L_4e9a6c:;
    r0 = 0u;
L_4e9a70:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_004e9a28
GUEST_EXPORT(0x004e9a28, d_004e9a28::f_004e9a28);

// f_004e9f74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e9f74 {

inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> call_004e9a28;  // (from the original)
inline constexpr guest::Function<0x006c602c, u32(u32, u32, u32, u32)> call_006c602c;  // (from the original)
inline constexpr guest::Function<0x00750894, u32(u32, u32, u32, u32)> call_00750894;  // (from the original)
inline constexpr guest::Function<0x00751d00, u32(u32, u32, u32, u32)> call_00751d00;  // (from the original)

u32 f_004e9f74(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3, float S0) {
    u32 ea = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    ea = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x18u;  // (from the original)
    r2 = r0;
    r1 = r13 + 4u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_003171b4(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r5 = *gptr<u32>(r13 + 4u);
    r6 = *gptr<u32>(r13);
    r0 = 0x9c7ad4u;  // (from the original)
    r3 = 0u;
    r2 = r5;
    r1 = r6;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_004e9a28(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r4 = r0;
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0 = call_00750894(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        if (r0 == 0) {
            r0 = r4;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            r0 = call_00751d00(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            S0 = guest::cpu()->s[0];
        } else {
            S0 = std::bit_cast<float>(*gptr<u32>(r4 + 0x18u));  // (from the original)
        }
        r13 = r13 + 8u;
        ea = r13;
        r13 = r13 + 0x10;  // (from the original)
        r4 = *gptr<u32>(ea);
        r5 = *gptr<u32>(ea + 4);
        r6 = *gptr<u32>(ea + 8);
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    r2 = 0u;
    r1 = r5;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_006c602c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    r13 = r13 + 8u;
    ea = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_004e9f74
GUEST_EXPORT(0x004e9f74, d_004e9f74::f_004e9f74);

// f_004e9fe8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e9fe8 {

inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> call_004e9a28;  // (from the original)
inline constexpr guest::Function<0x006c602c, u32(u32, u32, u32, u32)> call_006c602c;  // (from the original)
inline constexpr guest::Function<0x00750894, u32(u32, u32, u32, u32)> call_00750894;  // (from the original)
inline constexpr guest::Function<0x00751d00, u32(u32, u32, u32, u32)> call_00751d00;  // (from the original)

u32 f_004e9fe8(u32 r0, u32 r1, float S0) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r6 = r1;
    r2 = r1;
    r0 = 0x9c7ad4u;  // (from the original)
    r3 = 0u;
    r1 = r5;
    guest::cpu()->s[0] = S0;
    r0 = call_004e9a28(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r4 = r0;
    if (r0 != 0) {
        guest::cpu()->s[0] = S0;
        r0 = call_00750894(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        if (r0 != 0) {
            S0 = std::bit_cast<float>(*gptr<u32>(r4 + 0x18u));  // (from the original)
            goto L_4ea040;
        }
        r0 = r4;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->s[0] = S0;
        return call_00751d00(r0, r1, r2, r3);
    }
    r1 = r6;
    r0 = r5;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r2 = 0u;
    guest::cpu()->s[0] = S0;
    return call_006c602c(r0, r1, r2, r3);
L_4ea040:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_004e9fe8
GUEST_EXPORT(0x004e9fe8, d_004e9fe8::f_004e9fe8);

// f_004ea054: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ea054 {

inline constexpr guest::Function<0x00536060, u32(u32, u32, u32, u32)> call_00536060;  // (from the original)
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> call_005361a8;  // (from the original)
inline constexpr guest::Function<0x00544f18, u32(u32, u32, u32, u32)> call_00544f18;  // (from the original)
inline constexpr guest::Function<0x00544fec, u32(u32, u32, u32, u32)> call_00544fec;  // (from the original)
inline constexpr guest::Function<0x0054a644, u32(u32, u32, u32, u32)> call_0054a644;  // (from the original)
inline constexpr guest::Function<0x0076b5dc, u32(u32, u32, u32, u32)> call_0076b5dc;  // (from the original)
inline constexpr guest::Function<0x0076c648, u32(u32, u32, u32, u32)> call_0076c648;  // (from the original)

u32 f_004ea054(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r6 = r0;
    r13 = r13 - 0x30u;  // (from the original)
    r5 = r1;
    r0 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_005361a8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_4ea088;
    }
    r0 = u32(*gptr<u8>(r0 + 0x11u));  // (from the original)
    if (r0 >= 0x56u) {  // (from the original)
        goto L_4ea088;
    }
    if (r0 == 0x22u) {  // (from the original)
        goto L_4ea110;
    }
L_4ea088:;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00536060(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    if (r0 == 0) {
        goto L_4ea144;
    }
    r1 = r6;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0054a644(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x865698u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00544fec(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00544fec(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    r0 = call_00544f18(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0076c648(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_4ea1d0;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0076b5dc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 2u) {
        goto L_4ea14c;
    }
    if (r0 == 4u) {
        goto L_4ea194;
    }
    goto L_4ea1d0;
L_4ea110:;
    r1 = r6;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0054a644(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x865670u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00544fec(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    r0 = call_00544f18(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
L_4ea144:;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_4ea14c:;
    r1 = r6;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0054a644(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x8656acu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00544fec(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00544fec(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    r0 = call_00544f18(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    goto L_4ea1d0;
L_4ea194:;
    r1 = r6;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0054a644(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x8656c4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00544fec(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00544fec(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    r0 = call_00544f18(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_4ea1d0:;
    r0 = 1u;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_004ea054
GUEST_EXPORT(0x004ea054, d_004ea054::f_004ea054);

// f_004ea4a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ea4a0 {

inline constexpr guest::Function<0x00264668, u32(u32, u32, u32, u32)> call_00264668;  // (from the original)
inline constexpr guest::Function<0x00264698, u32(u32, u32, u32, u32)> call_00264698;  // (from the original)
inline constexpr guest::Function<0x004ec574, u32(u32, u32, u32, u32)> call_004ec574;  // (from the original)

u32 f_004ea4a0(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    r0 = 0x950440u;  // (from the original)
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = *gptr<u32>(r0);
    if (r4 != 0) {
        r5 = 0x952a20u;  // (from the original)
        r0 = r4;
        r1 = *gptr<u32>(r5 + 0x18u);  // (from the original)
        r0 = call_00264698(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = *gptr<u32>(*gptr<u32>(r5 + 0x18u) + 0xa4u);  // (from the original)
        *gptr<u32>(r5 + 0x2cu) = u32(r1);  // (from the original)
        r0 = *gptr<u32>(0x9c90c0u);  // (from the original)
        r0 = call_004ec574(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = *gptr<u32>(r5 + 0x18u);  // (from the original)
        r0 = r4;
        r0 = call_00264668(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0 = 0u;
        *gptr<u32>(r5 + 0x2cu) = u32(r0);  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_004ea4a0
GUEST_EXPORT(0x004ea4a0, d_004ea4a0::f_004ea4a0);

// f_004eabd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eabd0 {


u32 f_004eabd0() {
    u32 r0 = 0;
    u32 r1 = 0;
    r1 = 1u;
    r0 = *gptr<u32>(0x952a38u);  // (from the original)
    *gptr<u8>(r0 + 0xecu) = u8(r1);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_004eabd0
GUEST_EXPORT(0x004eabd0, d_004eabd0::f_004eabd0);

// f_004eabe8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eabe8 {

struct __attribute__((packed)) Object_004eabe8_0 {
    u8 unknown_0[0x220];  // (not used here)
    u32 word_220;
};
GUEST_OFFSET(Object_004eabe8_0, word_220, 0x220);  // (from the original)

inline constexpr guest::Function<0x00737f20, u32(u32, u32, u32, u32)> call_00737f20;  // (from the original)

u32 f_004eabe8(gptr<Object_004eabe8_0> arg0, u32 r1) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    r12 = 0x952a20u;  // (from the original)
    r3 = *gptr<u32>(r12 + 0x2cu);  // (from the original)
    if (r3 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = arg0->word_220;
    ea = r12 + 0xcu;  // (from the original)
    r0 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    return call_00737f20(r0, r1, r2, r3);
}

}  // namespace d_004eabe8
GUEST_EXPORT(0x004eabe8, d_004eabe8::f_004eabe8);

// f_004ead50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ead50 {

inline constexpr guest::Function<0x004efb0c, u32(u32, u32, u32, u32)> call_004efb0c;  // (from the original)
inline constexpr guest::Function<0x005ce368, u32(u32, u32, u32, u32)> call_005ce368;  // (from the original)

u32 f_004ead50(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = 0x952a20u;  // (from the original)
    r0 = u32(*gptr<u8>(r5));
    if (r0 != 1u) {
        goto L_4ead90;
    }
    r0 = call_005ce368(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_4ead90;
    }
    r1 = 1u;
    r0 = r4;
    r0 = call_004efb0c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0u;
    r0 = *gptr<u32>(*gptr<u32>(r5 + 0x18u) + 0xc0u);  // (from the original)
    *gptr<u32>(r0) = u32(r1);
L_4ead90:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_004ead50
GUEST_EXPORT(0x004ead50, d_004ead50::f_004ead50);

// f_004ead98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ead98 {

struct __attribute__((packed)) Object_004ead98_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Object_004ead98_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_004ead98_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_004ead98_0, word_18, 0x18);  // (from the original)


u32 f_004ead98(gptr<Object_004ead98_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    r0 = r0 + 0x10u;  // (from the original)
    arg0->word_10 = u32(r1);
    arg0->word_14 = u32(r2);
    arg0->word_18 = u32(r3);
    return r0;
}

}  // namespace d_004ead98
GUEST_EXPORT(0x004ead98, d_004ead98::f_004ead98);

// f_004eae74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eae74 {

struct __attribute__((packed)) Object_004eae74_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_004eae74_0, word_8, 0x8);  // (from the original)


u32 f_004eae74(gptr<Object_004eae74_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r1 = r0;
    r13 = r13 - 0xc;  // (from the original)
    r0 = 0u;
    r3 = arg0->word_8;
    r2 = r0;
    r4 = *gptr<u32>(r3 + 0x64u);  // (from the original)
    if (!u32(r4 >= 0u) || u32(r4 == 0)) {
        goto L_4eaee0;
    }
    r12 = *gptr<u32>(r3 + 0x68u);  // (from the original)
    r5 = 0u;
    do {
L_4eae9c:;
        r1 = r3 + 0x68u;  // (from the original)
        if (r12 == 0) {
            r1 = r5;
        } else {
            r1 = r1 + r12;
        }
        if (!(r1 == 0)) {
            ea = r1 + (r2 << 4) + 0x28u;  // (from the original)
            r1 = ea;
            r6 = *gptr<u32>(ea);
            if (r6 == 0) {
                r1 = r5;
            } else {
                r1 = r1 + r6;
            }
        }
        r2 = r2 + 1u;
        r1 = *gptr<u32>(r1 + 0x18u);  // (from the original)
        if (u32(r1 >= r0) && !u32(r1 == r0)) {
            r0 = r1;
        }
        guest::preempt();
    } while (u32(r4 >= r2) && !u32(r4 == r2));
L_4eaee0:;
    r13 = r13 + 0xc;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_004eae74
GUEST_EXPORT(0x004eae74, d_004eae74::f_004eae74);

// f_004eb254: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eb254 {


u32 f_004eb254(u32 r0) {
    u32 r1 = 0;
    r1 = 0x9c9198u;  // (from the original)
    r0 = r1 + (r0 + (r0 << 5) << 3);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_004eb254
GUEST_EXPORT(0x004eb254, d_004eb254::f_004eb254);

// f_004eb3a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eb3a0 {

inline constexpr guest::Function<0x002b5fc4, u32(u32, u32, u32, u32)> call_002b5fc4;  // (from the original)
inline constexpr guest::Function<0x004eb858, u32(u32, u32, u32, u32)> call_004eb858;  // (from the original)
inline constexpr guest::Function<0x0071cc4c, u32(u32, u32, u32, u32)> call_0071cc4c;  // (from the original)

u32 f_004eb3a0(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = call_002b5fc4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_4eb3dc;
    }
    r0 = call_002b5fc4(r0, r1, r2, guest::cpu()->r[3]);
    r4 = r4 + 4u;
    r1 = *gptr<u32>(r4);
    r2 = *gptr<u32>(r4 + 4);
    r0 = call_0071cc4c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_4eb3dc;
    }
    r1 = r5;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_004eb858(r0, r1, r2, guest::cpu()->r[3]);
L_4eb3dc:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_004eb3a0
GUEST_EXPORT(0x004eb3a0, d_004eb3a0::f_004eb3a0);

// f_004eb3e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eb3e0 {

inline constexpr guest::Function<0x002b5fc4, u32(u32, u32, u32, u32)> call_002b5fc4;  // (from the original)
inline constexpr guest::Function<0x004eb9d4, u32(u32, u32, u32, u32)> call_004eb9d4;  // (from the original)
inline constexpr guest::Function<0x0071cc4c, u32(u32, u32, u32, u32)> call_0071cc4c;  // (from the original)

u32 f_004eb3e0(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002b5fc4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        r0 = 0u;
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002b5fc4(r0, r1, r2, guest::cpu()->r[3]);
    ea = r4 + 4u;
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_0071cc4c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        r0 = 0u;
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = 0xau;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_004eb9d4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = ~0u;
    *gptr<u32>(r4 + 4u) = u32(r0);
    *gptr<u32>(r4 + 8u) = u32(r0);
    r0 = 1u;
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_004eb3e0
GUEST_EXPORT(0x004eb3e0, d_004eb3e0::f_004eb3e0);

// f_004eb438: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eb438 {

inline constexpr guest::Function<0x002b5fc4, u32(u32, u32, u32, u32)> call_002b5fc4;  // (from the original)
inline constexpr guest::Function<0x004ee4c0, u32(u32, u32, u32, u32)> call_004ee4c0;  // (from the original)
inline constexpr guest::Function<0x0071cc4c, u32(u32, u32, u32, u32)> call_0071cc4c;  // (from the original)

u32 f_004eb438(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = call_002b5fc4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_4eb474;
    }
    r0 = call_002b5fc4(r0, r1, r2, guest::cpu()->r[3]);
    r4 = r4 + 4u;
    r1 = *gptr<u32>(r4);
    r2 = *gptr<u32>(r4 + 4);
    r0 = call_0071cc4c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_4eb474;
    }
    r1 = r5;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_004ee4c0(r0, r1, r2, guest::cpu()->r[3]);
L_4eb474:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_004eb438
GUEST_EXPORT(0x004eb438, d_004eb438::f_004eb438);

// f_004eb478: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eb478 {

struct __attribute__((packed)) Object_004eb478_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_004eb478_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_004eb478_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_004eb478_0, word_8, 0x8);  // (from the original)


void f_004eb478(gptr<Object_004eb478_0> arg0) {
    u32 r1 = 0;
    r1 = ~0u;
    arg0->word_4 = u32(r1);
    arg0->word_0 = u32(0x9028acu);  // (from the original)
    arg0->word_8 = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_004eb478
GUEST_EXPORT(0x004eb478, d_004eb478::f_004eb478);

// f_004eb5b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eb5b4 {

struct __attribute__((packed)) Object_004eb5b4_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_004eb5b4_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002b5fc4, u32(u32, u32, u32, u32)> call_002b5fc4;  // (from the original)
inline constexpr guest::Function<0x004eb9d4, u32(u32, u32, u32, u32)> call_004eb9d4;  // (from the original)
inline constexpr guest::Function<0x0071cc4c, u32(u32, u32, u32, u32)> call_0071cc4c;  // (from the original)
inline constexpr guest::Function<0x0074599c, u32(u32, u32, u32, u32)> call_0074599c;  // (from the original)

u32 f_004eb5b4(gptr<Object_004eb5b4_0> arg0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    r4 = r0;
    r0 = 0x9028acu;  // (from the original)
    arg0->word_0 = u32(r0);
    guest::cpu()->r[13] = r13;
    r0 = call_002b5fc4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        r0 = r4;
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002b5fc4(r0, r1, r2, guest::cpu()->r[3]);
    ea = r4 + 4u;
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_0071cc4c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        r0 = r4;
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0074599c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        r0 = r4;
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002b5fc4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        r0 = r4;
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002b5fc4(r0, r1, r2, guest::cpu()->r[3]);
    ea = r4 + 4u;
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_0071cc4c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        r0 = r4;
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = 0xau;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_004eb9d4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = r4;
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = ~0u;
    *gptr<u32>(r4 + 4u) = u32(r0);
    *gptr<u32>(r4 + 8u) = u32(r0);
    r0 = r4;
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_004eb5b4
GUEST_EXPORT(0x004eb5b4, d_004eb5b4::f_004eb5b4);

// f_004eb9d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eb9d4 {

struct __attribute__((packed)) Object_004eb9d4_0 {
    u8 unknown_0[0x2c];  // (not used here)
    u8 byte_2c;
};
GUEST_OFFSET(Object_004eb9d4_0, byte_2c, 0x2c);  // (from the original)


u32 f_004eb9d4(gptr<Object_004eb9d4_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    if (u32(arg0->byte_2c) != 0) {
        r0 = 0u;
        return r0;
    }
    r2 = 1u;
    *gptr<u32>(r0 + 0x34u) = u32(r1);  // (from the original)
    *gptr<u8>(r0 + 0x2cu) = u8(r2);  // (from the original)
    *gptr<u32>(r0 + 0x30u) = u32(r1);  // (from the original)
    r0 = r2;
    return r0;
}

}  // namespace d_004eb9d4
GUEST_EXPORT(0x004eb9d4, d_004eb9d4::f_004eb9d4);

// f_004eb9fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eb9fc {

struct __attribute__((packed)) Object_004eb9fc_0 {
    u8 unknown_0[0x2d];  // (not used here)
    u8 byte_2d;
};
GUEST_OFFSET(Object_004eb9fc_0, byte_2d, 0x2d);  // (from the original)

inline constexpr guest::Function<0x004eb254, u32(u32, u32, u32, u32)> call_004eb254;  // (from the original)
inline constexpr guest::Function<0x004ebbec, u32(u32, u32, u32, u32)> call_004ebbec;  // (from the original)

u32 f_004eb9fc(gptr<Object_004eb9fc_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r0 = r1;
    r6 = r2;
    r5 = r3;
    arg0->byte_2d = u8(r1);
    guest::cpu()->r[13] = r13;
    r0 = call_004eb254(r0, r1, r2, r3);
    r1 = r0;
    r3 = r6;
    r2 = 0u;
    r0 = r4;
    *gptr<u32>(r13) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_004ebbec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_004eb9fc
GUEST_EXPORT(0x004eb9fc, d_004eb9fc::f_004eb9fc);

// f_004ec374: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ec374 {

struct __attribute__((packed)) Object_004ec374_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x10];  // (not used here)
    u32 word_20;
};
GUEST_OFFSET(Object_004ec374_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_004ec374_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_004ec374_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_004ec374_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_004ec374_0, word_20, 0x20);  // (from the original)

inline constexpr guest::Function<0x005673c8, u32(u32, u32, u32, u32)> call_005673c8;  // (from the original)

u32 f_004ec374(gptr<Object_004ec374_0> arg0, u32 r1) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r2 = 0x9028bcu;  // (from the original)
    r13 = r13 - 8;
    r3 = r0 + 4u;
    r4 = 0u;
    arg0->word_0 = u32(r2);
    arg0->word_4 = u32(r1);
    arg0->word_8 = u32(r4);
    arg0->word_c = u32(r4);
    ea = r0 + 0x20u;  // (from the original)
    arg0->word_20 = u32(r4);
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005673c8(r0, r1, r2, r3);
    r0 = r0 - 0x24u;  // (from the original)
    *gptr<u8>(r0 + 0x2cu) = u8(r4);  // (from the original)
    *gptr<u8>(r0 + 0x2du) = u8(0xdu);  // (from the original)
    *gptr<u32>(r0 + 0x30u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x34u) = u32(r4);  // (from the original)
    r1 = 0x952ad4u;  // (from the original)
    *gptr<u32>(r0 + 0x10u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x14u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x18u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x1cu) = u32(r4);  // (from the original)
    *gptr<u32>(r1) = u32(*gptr<u32>(r1) + 1u);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_004ec374
GUEST_EXPORT(0x004ec374, d_004ec374::f_004ec374);

// f_004ec7ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ec7ec {

struct __attribute__((packed)) Object_004ec7ec_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_004ec7ec_0, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Object_004ec7ec_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_004ec7ec_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_004ec7ec_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_004ec7ec_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_004ec7ec_1, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x00736914, u32(u32, u32, u32, u32)> call_00736914;  // (from the original)

u32 f_004ec7ec(gptr<Object_004ec7ec_0> arg0, gptr<Object_004ec7ec_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    guest::cpu()->r[13] -= 8u;
    r4 = r0 + 0xcu;  // (from the original)
    S0 = std::bit_cast<float>(arg1->word_0);
    S1 = std::bit_cast<float>(arg1->word_4);
    S2 = std::bit_cast<float>(arg1->word_8);
    S3 = std::bit_cast<float>(arg1->word_c);
    r0 = arg0->word_c + 0xb8u;  // (from the original)
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r0 + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r0 + 0xc) = u32(std::bit_cast<u32>(S3));  // (from the original)
    r0 = arg0->word_c + 0xb8u;  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_00736914(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = *gptr<u32>(r4);
    *gptr<u32>(r1 + 0xc8u) = u32(r0);  // (from the original)
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_004ec7ec
GUEST_EXPORT(0x004ec7ec, d_004ec7ec::f_004ec7ec);

// f_004ec820: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ec820 {

inline constexpr guest::Function<0x0048d4d4, u32(u32, u32, u32, u32)> call_0048d4d4;  // (from the original)
inline constexpr guest::Function<0x004f000c, u32(u32, u32, u32, u32)> call_004f000c;  // (from the original)
inline constexpr guest::Function<0x00736914, u32(u32, u32, u32, u32)> call_00736914;  // (from the original)

u32 f_004ec820(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r4 = r0;
    if (r1 == 0) {
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_004f000c(r0, r1, r2, r3);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r1 = r0;
    }
    r5 = 1u;
    r3 = r13 + 8u;
    *gptr<u8>(r13) = u8(r5);
    r2 = 0u;
    *gptr<u8>(r13 + 1u) = u8(r5);
    *gptr<u32>(r3) = u32(r2);
    *gptr<u32>(r3 + 4) = u32(r5);
    r0 = r13;
    *gptr<u32>(r13 + 4u) = u32(r2);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_0048d4d4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r4 + 0x10u) = u32(r0);  // (from the original)
    *gptr<u32>(r4 + 4u) = u32(r0);
    r0 = *gptr<u32>(r0 + 8u);
    S0 = std::bit_cast<float>(*gptr<u32>(0x4ec8b4u));  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(0x4ec8b8u));  // (from the original)
    *gptr<u32>(r4 + 0xcu) = u32(r0);  // (from the original)
    *gptr<u8>(r0 + 0xb4u) = u8(r5);  // (from the original)
    r0 = *gptr<u32>(r4 + 0xcu) + 0xb8u;  // (from the original)
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4u) = u32(std::bit_cast<u32>(S0));
    r0 = r0 + 8u;
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    r0 = *gptr<u32>(r4 + 0xcu) + 0xb8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00736914(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = *gptr<u32>(r4 + 0xcu);  // (from the original)
    *gptr<u32>(r1 + 0xc8u) = u32(r0);  // (from the original)
    r0 = 1u;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_004ec820
GUEST_EXPORT(0x004ec820, d_004ec820::f_004ec820);

// f_004ecbe0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ecbe0 {

struct __attribute__((packed)) Object_004ecbe0_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_004ecbe0_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00317dec, u32(u32, u32, u32, u32)> call_00317dec;  // (from the original)

u32 f_004ecbe0(gptr<Object_004ecbe0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = 0x902b5cu;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(r1);
    r0 = r0 + 0xcu;  // (from the original)
    r0 = call_00317dec(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0xcu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_004ecbe0
GUEST_EXPORT(0x004ecbe0, d_004ecbe0::f_004ecbe0);

// f_004ed168: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ed168 {

struct __attribute__((packed)) Object_004ed168_0 {
    u8 unknown_0[0x114];  // (not used here)
    u32 word_114;
};
GUEST_OFFSET(Object_004ed168_0, word_114, 0x114);  // (from the original)

inline constexpr guest::Function<0x004a7064, u32(u32, u32, u32, u32)> call_004a7064;  // (from the original)

u32 f_004ed168(gptr<Object_004ed168_0> arg0, float S0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S1 = 0;
    S1 = S0;
    r13 = r13 - 8;
    *gptr<u32>(arg0->word_114 + 0x124u) = u32(std::bit_cast<u32>(S1));  // (from the original)
    ea = r0 + 0x114u;  // (from the original)
    r0 = ea;
    r1 = arg0->word_114;
    S0 = std::bit_cast<float>(*gptr<u32>(r1 + 0x120u));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_004a7064(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r0 = 1u;
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_004ed168
GUEST_EXPORT(0x004ed168, d_004ed168::f_004ed168);

// f_004ed18c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ed18c {

struct __attribute__((packed)) Object_004ed18c_0 {
    u8 unknown_0[0x114];  // (not used here)
    u32 word_114;
};
GUEST_OFFSET(Object_004ed18c_0, word_114, 0x114);  // (from the original)

inline constexpr guest::Function<0x004a7064, u32(u32, u32, u32, u32)> call_004a7064;  // (from the original)

u32 f_004ed18c(gptr<Object_004ed18c_0> arg0, float S0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S1 = 0;
    r13 = r13 - 8;
    *gptr<u32>(arg0->word_114 + 0x120u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    ea = r0 + 0x114u;  // (from the original)
    r0 = ea;
    r1 = arg0->word_114;
    S1 = std::bit_cast<float>(*gptr<u32>(r1 + 0x124u));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_004a7064(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r0 = 1u;
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_004ed18c
GUEST_EXPORT(0x004ed18c, d_004ed18c::f_004ed18c);

// f_004ed3dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ed3dc {

inline constexpr guest::Function<0x002f73b8, u32(u32, u32, u32, u32)> call_002f73b8;  // (from the original)
inline constexpr guest::Function<0x004ee39c, u32(u32, u32, u32, u32)> call_004ee39c;  // (from the original)

u32 f_004ed3dc(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r0 + 0xcu;  // (from the original)
    r0 = call_002f73b8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    return call_004ee39c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_004ed3dc
GUEST_EXPORT(0x004ed3dc, d_004ed3dc::f_004ed3dc);

// f_004ed3f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ed3f8 {

inline constexpr guest::Function<0x004ee4b8, u32(u32, u32, u32, u32)> call_004ee4b8;  // (from the original)

u32 f_004ed3f8() {
    return call_004ee4b8(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_004ed3f8
GUEST_EXPORT(0x004ed3f8, d_004ed3f8::f_004ed3f8);

// f_004ed454: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ed454 {

struct __attribute__((packed)) Object_004ed454_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_004ed454_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00317e2c, u32(u32, u32, u32, u32)> call_00317e2c;  // (from the original)
inline constexpr guest::Function<0x004ee514, u32(u32, u32, u32, u32)> call_004ee514;  // (from the original)

u32 f_004ed454(gptr<Object_004ed454_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = 0x902938u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(r1);
    r0 = r0 + 0xcu;  // (from the original)
    r0 = call_00317e2c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    r0 = r0 - 0xcu;  // (from the original)
    return call_004ee514(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_004ed454
GUEST_EXPORT(0x004ed454, d_004ed454::f_004ed454);

// f_004eddd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eddd4 {

struct __attribute__((packed)) Object_004eddd4_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x164];  // (not used here)
    u32 word_170;
    u32 word_174;
};
GUEST_OFFSET(Object_004eddd4_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_004eddd4_1, word_170, 0x170);  // (from the original)
GUEST_OFFSET(Object_004eddd4_1, word_174, 0x174);  // (from the original)

inline constexpr guest::Function<0x004ee364, u32(u32, u32, u32, u32)> call_004ee364;  // (from the original)

u32 f_004eddd4(u32 r0, gptr<Object_004eddd4_1> arg1) {
    u32 ea = 0;
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r14 = 0u;
    r0 = arg1->word_170;
    if (r0 == arg1->word_174) {
        ea = arg1->word_8 + 0xb8u;  // (from the original)
        r0 = ea;
        r2 = *gptr<u32>(ea);
        if (r2 == 0) {
            r0 = r14;
        } else {
            r0 = r0 + r2;
        }
    }
    ea = r1 + 0x170u;  // (from the original)
    r3 = *gptr<u32>(ea + 4);
    if (*gptr<u32>(ea) == r3) {
        r2 = *gptr<u32>(r1 + 8u);
        r3 = r2 + 0xb8u;  // (from the original)
        r12 = *gptr<u32>(r2 + 0xb8u);  // (from the original)
        if (r12 == 0) {
            r3 = r14;
        } else {
            r3 = r3 + r12;
        }
        r3 = r3 + (*gptr<u32>(r2 + 0xb4u) << 2);  // (from the original)
    }
    r2 = *gptr<u32>(r4 + 0x24u);  // (from the original)
    if (r2 != 0) {
        *gptr<u32>(r2) = u32(r1);
    }
    r2 = *gptr<u32>(r4 + 0x24u) + 4u;  // (from the original)
    *gptr<u32>(r4 + 0x24u) = u32(r2);  // (from the original)
    if (r0 == r3) {
        goto L_4edecc;
    }
L_4ede54:;
    r2 = *gptr<u32>(r0);
    if (r2 == 0) {
        r2 = r14;
    } else {
        r2 = r2 + r0;
    }
    if (u32(*gptr<u8>(r2 + 0x24u)) == 0) {  // (from the original)
        goto L_4edec0;
    }
    if ((*gptr<u32>(*gptr<u32>(*gptr<u32>(*gptr<u32>(r1 + 0x164u) + (*gptr<u32>(r2 + 0x1cu) << 2)) + 8u) + 0x20u) & 0xffu) == 0) {  // (from the original)
        goto L_4edea4;
    }
    r5 = *gptr<u32>(r4 + 0x18u);  // (from the original)
    r12 = r4 + 0x14u;  // (from the original)
    if (r5 == 0) {
        goto L_4edeb4;
    }
L_4ede9c:;
    *gptr<u32>(r5) = u32(r1);
    *gptr<u32>(r5 + 4) = u32(r2);
    goto L_4edeb4;
L_4edea4:;
    r5 = *gptr<u32>(r4 + 0xcu);  // (from the original)
    r12 = r4 + 8u;
    if (r5 != 0) {
        guest::preempt();
        goto L_4ede9c;
    }
L_4edeb4:;
    r2 = *gptr<u32>(r12 + 4u) + 8u;
    *gptr<u32>(r12 + 4u) = u32(r2);
L_4edec0:;
    r0 = r0 + 4u;
    if (r0 != r3) {
        guest::preempt();
        goto L_4ede54;
    }
L_4edecc:;
    if (u32(*gptr<u8>(r4 + 0x3cu)) == 0) {  // (from the original)
        r1 = 0u;
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_004ee364(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        *gptr<u8>(r4 + 0x3cu) = u8(1u);  // (from the original)
    }
    r0 = 1u;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_004eddd4
GUEST_EXPORT(0x004eddd4, d_004eddd4::f_004eddd4);

// f_004ee2dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ee2dc {

struct __attribute__((packed)) Object_004ee2dc_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_004ee2dc_0, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Object_004ee2dc_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_004ee2dc_1, word_4, 0x4);  // (from the original)


u32 f_004ee2dc(gptr<Object_004ee2dc_0> arg0, gptr<Object_004ee2dc_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    float S4 = 0;
    float S5 = 0;
    float S6 = 0;
    float S7 = 0;
    r2 = arg1->word_4;
    r3 = arg0->word_4;
    S1 = std::bit_cast<float>(*gptr<u32>(r2 + 0x90u));  // (from the original)
    S2 = std::bit_cast<float>(*gptr<u32>(r2 + 0x94u));  // (from the original)
    S3 = std::bit_cast<float>(*gptr<u32>(r2 + 0x98u));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r2 + 0x9cu));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(r2 + 0xa0u));  // (from the original)
    S6 = std::bit_cast<float>(*gptr<u32>(r2 + 0xa4u));  // (from the original)
    S7 = std::bit_cast<float>(*gptr<u32>(r2 + 0xa8u));  // (from the original)
    r12 = r3 + 0x8cu;  // (from the original)
    *gptr<u32>(r3 + 0x8cu) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r2 + 0x8cu))));  // (from the original)
    r3 = r3 + 0x90u;  // (from the original)
    r2 = r2 + 0xacu;  // (from the original)
    *gptr<u32>(r3) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r3 + 4) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r3 + 8) = u32(std::bit_cast<u32>(S3));
    *gptr<u32>(r3 + 0xc) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u32>(r3 + 0x10) = u32(std::bit_cast<u32>(S5));  // (from the original)
    *gptr<u32>(r3 + 0x14) = u32(std::bit_cast<u32>(S6));  // (from the original)
    *gptr<u32>(r3 + 0x18) = u32(std::bit_cast<u32>(S7));  // (from the original)
    r12 = r12 + 0x20u;  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(r2 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r2 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r2 + 0xc));  // (from the original)
    *gptr<u32>(r12) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r2))));
    *gptr<u32>(r12 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r12 + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r12 + 0xc) = u32(std::bit_cast<u32>(S3));  // (from the original)
    r1 = arg1->word_4;
    r2 = arg0->word_4;
    r3 = r1 + 0xbcu;  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(r3 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r3 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r3 + 0xc));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r3 + 0x10));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(r3 + 0x14));  // (from the original)
    S6 = std::bit_cast<float>(*gptr<u32>(r3 + 0x18));  // (from the original)
    S7 = std::bit_cast<float>(*gptr<u32>(r3 + 0x1c));  // (from the original)
    r1 = r1 + 0xdcu;  // (from the original)
    r0 = r2 + 0xdcu;  // (from the original)
    *gptr<u32>(r2 + 0xbcu) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r3))));  // (from the original)
    r2 = r2 + 0xc0u;  // (from the original)
    *gptr<u32>(r2) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r2 + 4) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r2 + 8) = u32(std::bit_cast<u32>(S3));
    *gptr<u32>(r2 + 0xc) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u32>(r2 + 0x10) = u32(std::bit_cast<u32>(S5));  // (from the original)
    *gptr<u32>(r2 + 0x14) = u32(std::bit_cast<u32>(S6));  // (from the original)
    *gptr<u32>(r2 + 0x18) = u32(std::bit_cast<u32>(S7));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r1));
    S1 = std::bit_cast<float>(*gptr<u32>(r1 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r1 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r1 + 0xc));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r1 + 0x10));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(r1 + 0x14));  // (from the original)
    S6 = std::bit_cast<float>(*gptr<u32>(r1 + 0x18));  // (from the original)
    S7 = std::bit_cast<float>(*gptr<u32>(r1 + 0x1c));  // (from the original)
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r0 + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r0 + 0xc) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(r0 + 0x10) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u32>(r0 + 0x14) = u32(std::bit_cast<u32>(S5));  // (from the original)
    *gptr<u32>(r0 + 0x18) = u32(std::bit_cast<u32>(S6));  // (from the original)
    *gptr<u32>(r0 + 0x1c) = u32(std::bit_cast<u32>(S7));  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_004ee2dc
GUEST_EXPORT(0x004ee2dc, d_004ee2dc::f_004ee2dc);

// f_004ee4b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ee4b8 {

struct __attribute__((packed)) Object_004ee4b8_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_004ee4b8_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x004f03d0, u32(u32, u32, u32, u32)> call_004f03d0;  // (from the original)

u32 f_004ee4b8(gptr<Object_004ee4b8_0> arg0) {
    u32 r0 = arg0.addr();
    r0 = arg0->word_4;
    return call_004f03d0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_004ee4b8
GUEST_EXPORT(0x004ee4b8, d_004ee4b8::f_004ee4b8);

// f_004ee534: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ee534 {

inline constexpr guest::Function<0x0056aab8, u32(u32, u32, u32, u32)> call_0056aab8;  // (from the original)
inline constexpr guest::Function<0x0056acfc, u32(u32, u32, u32, u32)> call_0056acfc;  // (from the original)

u32 f_004ee534(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r0 + 0x1cu;  // (from the original)
    r0 = call_0056aab8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = r4 + 0x1cu;  // (from the original)
    r0 = call_0056acfc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r0 ^ 1u;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_004ee534
GUEST_EXPORT(0x004ee534, d_004ee534::f_004ee534);

// f_004ee55c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ee55c {

inline constexpr guest::Function<0x0056aa98, u32(u32, u32, u32, u32)> call_0056aa98;  // (from the original)

u32 f_004ee55c(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r0 + 0x1cu;  // (from the original)
    r0 = call_0056aa98(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    if (r0 == 0) {
        r0 = r1;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (*gptr<u32>(r4 + 4u) != 0) {
        r0 = r1;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = *gptr<u32>(r4 + 0xecu);  // (from the original)
    *gptr<u32>(r4 + 4u) = u32(r0);
    *gptr<u32>(r4 + 8u) = u32(r0);
    r0 = r1;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_004ee55c
GUEST_EXPORT(0x004ee55c, d_004ee55c::f_004ee55c);

// f_004ee8c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ee8c0 {

struct __attribute__((packed)) Object_004ee8c0_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_004ee8c0_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00317dec, u32(u32, u32, u32, u32)> call_00317dec;  // (from the original)

u32 f_004ee8c0(gptr<Object_004ee8c0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = 0x902b5cu;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(r1);
    r0 = r0 + 0xcu;  // (from the original)
    r0 = call_00317dec(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0xcu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_004ee8c0
GUEST_EXPORT(0x004ee8c0, d_004ee8c0::f_004ee8c0);

// f_004eebd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eebd4 {

inline constexpr guest::Function<0x004ee4b8, u32(u32, u32, u32, u32)> call_004ee4b8;  // (from the original)

u32 f_004eebd4() {
    return call_004ee4b8(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_004eebd4
GUEST_EXPORT(0x004eebd4, d_004eebd4::f_004eebd4);

// f_004eec1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eec1c {

inline constexpr guest::Function<0x004ee514, u32(u32, u32, u32, u32)> call_004ee514;  // (from the original)

u32 f_004eec1c() {
    return call_004ee514(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_004eec1c
GUEST_EXPORT(0x004eec1c, d_004eec1c::f_004eec1c);

// f_004eee9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eee9c {

struct __attribute__((packed)) Object_004eee9c_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_004eee9c_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> call_002fa9d0;  // (from the original)
inline constexpr guest::Function<0x004ed570, u32(u32, u32, u32, u32)> call_004ed570;  // (from the original)
inline constexpr guest::Function<0x004eef60, u32(u32, u32, u32, u32)> call_004eef60;  // (from the original)
inline constexpr guest::Function<0x00736a1c, u32(u32, u32, u32, u32)> call_00736a1c;  // (from the original)

u32 f_004eee9c(gptr<Object_004eee9c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 zf = 0;
    ea = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    *gptr<u32>(ea + 4) = u32(r4);
    *gptr<u32>(ea + 8) = u32(r5);
    *gptr<u32>(ea + 0xc) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r14);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r5 = r0;
    r7 = r1;
    r4 = r2;
    r0 = arg0->word_8;
    guest::cpu()->r[13] = r13;
    r0 = call_004ed570(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r0 + 8u);
    if (r0 != 0) {
        r2 = 0x40000092u;  // (from the original)
        res = r2 & ~*gptr<u32>(r0);
        if (res != 0) {
            r0 = 0u;
        }
    }
    r8 = 0u;
    ea = r0 + 0xe0u;  // (from the original)
    r0 = ea;
    r1 = *gptr<u32>(ea);
    r6 = r13;
    if (r1 == 0) {
        r0 = r8;
    } else {
        r0 = r0 + r1;
    }
    ea = r0 + 0x1cu;  // (from the original)
    r0 = ea;
    r1 = *gptr<u32>(ea);
    if (r1 == 0) {
        r0 = r8;
    } else {
        r0 = r0 + r1;
    }
    zf = r0 == 0;
    if (!zf) {
        zf = r4 == 0;
    }
    *gptr<u32>(r13) = u32(r0);
    if (zf) {
        goto L_4eef40;
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fa9d0(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r0;
    r1 = r4;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00736a1c(r0, r1, r2, r3);
    if (r0 == 0) {
        goto L_4eef40;
    }
    ea = r0 + 0xcu;  // (from the original)
    r0 = ea;
    r1 = *gptr<u32>(ea);
    if (r1 == 0) {
        r2 = r8;
    } else {
        r2 = r1 + r0;
    }
    goto L_4eef44;
L_4eef40:;
    r2 = 0u;
L_4eef44:;
    r13 = r13 + 4u;
    r1 = r7;
    r0 = r5;
    ea = r13;
    r13 = r13 + 0x1c;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    r9 = *gptr<u32>(ea + 0x14);  // (from the original)
    r14 = *gptr<u32>(ea + 0x18);  // (from the original)
    r3 = 0u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[8] = r8;
    guest::cpu()->r[9] = r9;
    return call_004eef60(r0, r1, r2, r3);
}

}  // namespace d_004eee9c
GUEST_EXPORT(0x004eee9c, d_004eee9c::f_004eee9c);

// f_004ef50c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ef50c {

struct __attribute__((packed)) Object_004ef50c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_004ef50c_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x00317dec, u32(u32, u32, u32, u32)> call_00317dec;  // (from the original)

u32 f_004ef50c(gptr<Object_004ef50c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = 0x4efa0cu;  // (from the original)
    r3 = 4u;
    arg0->word_0 = u32(0x9029e0u);  // (from the original)
    r2 = 0x18u;  // (from the original)
    r0 = r4 + 0x14u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0xcu;  // (from the original)
    r0 = call_00317dec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0xcu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_004ef50c
GUEST_EXPORT(0x004ef50c, d_004ef50c::f_004ef50c);

// f_004ef9a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ef9a4 {

inline constexpr guest::Function<0x004ef77c, u32(u32, u32, u32, u32)> call_004ef77c;  // (from the original)

u32 f_004ef9a4() {
    u32 r2 = 0;
    float S0 = 0;
    r2 = 0u;
    S0 = std::bit_cast<float>(*gptr<u32>(0x4ef9b0u));  // (from the original)
    guest::cpu()->s[0] = S0;
    return call_004ef77c(guest::cpu()->r[0], guest::cpu()->r[1], r2, guest::cpu()->r[3]);
}

}  // namespace d_004ef9a4
GUEST_EXPORT(0x004ef9a4, d_004ef9a4::f_004ef9a4);

// f_004efa0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004efa0c {

struct __attribute__((packed)) Object_004efa0c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_004efa0c_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00317dec, u32(u32, u32, u32, u32)> call_00317dec;  // (from the original)

u32 f_004efa0c(gptr<Object_004efa0c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = 0x902b5cu;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(r1);
    r0 = r0 + 0xcu;  // (from the original)
    r0 = call_00317dec(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0xcu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_004efa0c
GUEST_EXPORT(0x004efa0c, d_004efa0c::f_004efa0c);
