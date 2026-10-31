// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_00200a6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00200a6c {

inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> call_0056a974;  // (from the original)

u32 f_00200a6c(u32 r0, u32 r1, u32 r2) {
    u32 r3 = 0;
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    zf = r1 == 0;
    r12 = r0;
    if (!zf) {
        zf = r2 == 0;
    }
    r13 = r13 - 0x10u;  // (from the original)
    r0 = 1u;
    if (zf) {
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    *gptr<u32>(r13 + 4u) = u32(r1);
    r1 = r13;
    *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
    r3 = 0u;
    r0 = r12;
    guest::cpu()->r[13] = r13;
    r0 = call_0056a974(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00200a6c
GUEST_EXPORT(0x00200a6c, d_00200a6c::f_00200a6c);

// f_00200ab0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00200ab0 {

inline constexpr guest::Function<0x00138744, u32(u32, u32, u32, u32)> call_00138744;  // (from the original)

u32 f_00200ab0() {
    return call_00138744(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00200ab0
GUEST_EXPORT(0x00200ab0, d_00200ab0::f_00200ab0);

// f_00200ab4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00200ab4 {

struct __attribute__((packed)) Object_00200ab4_0 {
    u8 unknown_0[0xd0];  // (not used here)
    u32 word_d0;
};
GUEST_OFFSET(Object_00200ab4_0, word_d0, 0xd0);  // (from the original)

inline constexpr guest::Function<0x00134544, u32(u32, u32, u32, u32)> call_00134544;  // (from the original)

u32 f_00200ab4(gptr<Object_00200ab4_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
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
    r13 = r13 - 0x20;  // (from the original)
    r6 = r0;
    r7 = r1;
    if (arg0->word_d0 == 0) {
        goto L_200b5c;
    }
    r12 = arg0->word_d0;
    r0 = 0u;
    r4 = u32(*gptr<u8>(r12 + r3 + 2u));
    ea = arg0->word_d0;
    r5 = r4 + (r4 << 1);
    r1 = u32(*gptr<u16>(ea)) + 2u;
    r8 = r5 << 1;
    if (r3 == 0) {
        goto L_200b2c;
    }
    r12 = r12 + 1u;
    if ((r3 & 1u) != 0) {
        ea = r12 + 1u;
        r12 = ea;
        r0 = u32(*gptr<u8>(ea));
    }
    res = r3 >> 1;
    r3 = res;
    r5 = 0u;
    if (res == 0) {
        goto L_200b28;
    }
    do {
L_200b10:;
        ea = r12 + 1u;
        r9 = u32(*gptr<u8>(ea));
        ea = r12 + 2u;
        r12 = ea;
        r10 = u32(*gptr<u8>(ea));
        res = r3 - 1u;
        r3 = res;
        r0 = r0 + r9;
        r5 = r5 + r10;
        guest::preempt();
    } while (res != 0);
L_200b28:;
    r0 = r0 + r5;
L_200b2c:;
    r3 = r4 + (r4 << 1);
    if (r2 < r3 << 1) {
        goto L_200b5c;
    }
    r1 = *gptr<u32>(r6 + 0xd0u) + (r1 + (r0 + (r0 << 1) << 1));  // (from the original)
    r2 = r8;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00134544(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_200b5c:;
    r0 = 0u;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00200ab4
GUEST_EXPORT(0x00200ab4, d_00200ab4::f_00200ab4);

// f_00200b64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00200b64 {

inline constexpr guest::Function<0x00138744, u32(u32, u32, u32, u32)> call_00138744;  // (from the original)
inline constexpr guest::Function<0x0013bc00, u32(u32, u32, u32, u32)> call_0013bc00;  // (from the original)

u32 f_00200b64(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_00138744(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    return call_0013bc00(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00200b64
GUEST_EXPORT(0x00200b64, d_00200b64::f_00200b64);

// f_00200b7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00200b7c {

struct __attribute__((packed)) Object_00200b7c_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_00200b7c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00200b7c_0, word_4, 0x4);  // (from the original)


void f_00200b7c(gptr<Object_00200b7c_0> arg0, u32 r1) {
    arg0->word_4 = u32(r1);
    arg0->word_0 = u32(0x8ed678u);  // (from the original)
    return;
}

}  // namespace d_00200b7c
GUEST_EXPORT(0x00200b7c, d_00200b7c::f_00200b7c);

// f_00200b9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00200b9c {

struct __attribute__((packed)) Object_00200b9c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00200b9c_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_00200b9c_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_00200b9c_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00200b9c_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00200ab4, u32(u32, u32, u32, u32)> call_00200ab4;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x0030b654, u32(u32, u32, u32, u32)> call_0030b654;  // (from the original)
inline constexpr guest::Function<0x003117dc, u32(u32, u32, u32, u32)> call_003117dc;  // (from the original)
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> call_00317148;  // (from the original)
inline constexpr guest::Function<0x0057bce0, u32(u32, u32, u32, u32)> call_0057bce0;  // (from the original)
inline constexpr guest::Function<0x00712600, u32(u32, u32, u32, u32)> call_00712600;  // (from the original)

u32 f_00200b9c(gptr<Object_00200b9c_0> arg0, gptr<Object_00200b9c_1> arg1, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
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
    u32 zf = 0;
    u32 cf = 0;
    r5 = r0;
    r13 = r13 - 0x30u;  // (from the original)
    r0 = arg0->word_0;
    if (r0 == 0) {
        goto L_200c98;
    }
    r1 = arg1->word_0;
    r2 = arg1->word_4;
    guest::cpu()->r[13] = r13;
    r0 = call_00317148(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 8u) = u32(r0);
    r0 = *gptr<u32>(r5 + 4u);
    guest::cpu()->r[13] = r13;
    r0 = call_00712600(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_200c98;
    }
    r3 = u32(*gptr<u16>(*gptr<u32>(r13 + 8u)));
    r2 = 0x600u;  // (from the original)
    r1 = r5 + 8u;
    r0 = *gptr<u32>(r5 + 4u);
    guest::cpu()->r[13] = r13;
    r0 = call_00200ab4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    cf = r0 >= 0u;
    r7 = r0;
    r4 = 0u;
    if (cf && !zf) {
        r11 = 0u;
    }
    if (!cf || zf) {
        goto L_200c98;
    }
    do {
L_200c00:;
        r6 = r5 + (r4 + (r4 << 1) << 1);
        r0 = r13 + 4u;
        r8 = u32(*gptr<u16>(r6 + 8u));
        r10 = u32(*gptr<u8>(r6 + 0xcu));  // (from the original)
        r9 = u32(*gptr<u8>(r6 + 0xdu));  // (from the original)
        r1 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_002fcbb0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_0030b654(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0 == 0)) {
            r1 = r8;
            r6 = u32(*gptr<u16>(r6 + 0xau)) >> 0xe;  // (from the original)
            r0 = r13;
            guest::cpu()->r[13] = r13;
            r0 = call_002fcbb0(r0, r1, r2, r3);
            r3 = guest::cpu()->r[3];
            r1 = r0;
            r2 = r6;
            r0 = r13 + 4u;
            guest::cpu()->r[13] = r13;
            r0 = call_003117dc(r0, r1, r2, r3);
        }
        r0 = *gptr<u32>(r13 + 8u);
        r3 = r9;
        r2 = r10;
        r1 = r13 + 4u;
        *gptr<u32>(r13) = u32(r11);
        guest::cpu()->r[13] = r13;
        r0 = call_0057bce0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r13 + 4u;
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < r7);
L_200c98:;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00200b9c
GUEST_EXPORT(0x00200b9c, d_00200b9c::f_00200b9c);

// f_00200ca0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00200ca0 {

struct __attribute__((packed)) Object_00200ca0_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00200ca0_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_00200ca0_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_00200ca0_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00200ca0_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x001c1fcc, u32(u32, u32, u32, u32)> call_001c1fcc;  // (from the original)
inline constexpr guest::Function<0x00304530, u32(u32, u32, u32, u32)> call_00304530;  // (from the original)
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> call_00317148;  // (from the original)
inline constexpr guest::Function<0x006a92f4, u32(u32, u32, u32, u32)> call_006a92f4;  // (from the original)
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> call_0075291c;  // (from the original)

u32 f_00200ca0(gptr<Object_00200ca0_0> arg0, gptr<Object_00200ca0_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r0 = arg0->word_0;
    r4 = r1;
    if (r0 == 0) {
        goto L_200d08;
    }
    r1 = arg1->word_0;
    r2 = arg1->word_4;
    r0 = call_00317148(r0, r1, r2, guest::cpu()->r[3]);
    r6 = r0;
    r1 = *gptr<u32>(r4);
    r2 = *gptr<u32>(r4 + 4);
    r0 = *gptr<u32>(r5);
    r0 = call_0075291c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r4 = r0;
    if (r0 == 0) {
        goto L_200d08;
    }
    r0 = u32(*gptr<u16>(r6));
    r5 = r0;
    r0 = call_00304530(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r5;
    r0 = call_001c1fcc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r0;
    if (r0 == 0) {
        goto L_200d08;
    }
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r2 = 0xa00u;  // (from the original)
    return call_006a92f4(r0, r1, r2, guest::cpu()->r[3]);
L_200d08:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00200ca0
GUEST_EXPORT(0x00200ca0, d_00200ca0::f_00200ca0);

// f_00201ea0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00201ea0 {

struct __attribute__((packed)) Object_00201ea0_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00201ea0_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_00201ea0_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_00201ea0_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00201ea0_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> call_00317148;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0057bb98, u32(u32, u32, u32, u32)> call_0057bb98;  // (from the original)
inline constexpr guest::Function<0x0057bce0, u32(u32, u32, u32, u32)> call_0057bce0;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)

u32 f_00201ea0(gptr<Object_00201ea0_0> arg0, gptr<Object_00201ea0_1> arg1, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x40u;  // (from the original)
    r0 = arg0->word_0;
    if (r0 == 0) {
        goto L_201f94;
    }
    r1 = arg1->word_0;
    r2 = arg1->word_4;
    guest::cpu()->r[13] = r13;
    r0 = call_00317148(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    if (r0 == 0) {
        goto L_201f94;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0057bb98(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r1 = r0;
    r0 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0074824c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00748284(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x18u;  // (from the original)
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_201f80;
    } else {
        r6 = 0u;
        r7 = 1u;
    }
    do {
L_201f00:;
        r4 = *gptr<u32>(r13 + 0x14u);  // (from the original)
        r2 = *gptr<u32>(r13 + 0x10u);  // (from the original)
        r1 = 0x95bfdcu;  // (from the original)
        r3 = r4;
        r0 = r5;
        *gptr<u32>(r13) = u32(r6);
        guest::cpu()->r[13] = r13;
        r0 = call_0057bce0(r0, r1, r2, r3);
        r4 = *gptr<u32>(r13 + 0x14u);  // (from the original)
        r2 = *gptr<u32>(r13 + 0x10u);  // (from the original)
        r1 = 0x95bfdcu;  // (from the original)
        r3 = r4;
        r0 = r5;
        *gptr<u32>(r13) = u32(r7);
        guest::cpu()->r[13] = r13;
        r0 = call_0057bce0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        r0 = call_0052f144(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r13 + 0x18u;  // (from the original)
        r0 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        r0 = call_007481ec(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        guest::preempt();
    } while (r0 != 0);
L_201f80:;
    r0 = r13 + 0x18u;  // (from the original)
L_201f94:;
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00201ea0
GUEST_EXPORT(0x00201ea0, d_00201ea0::f_00201ea0);

// f_00201fa0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00201fa0 {

inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x005814d0, u32(u32, u32, u32, u32)> call_005814d0;  // (from the original)
inline constexpr guest::Function<0x005817f0, u32(u32, u32, u32, u32)> call_005817f0;  // (from the original)
inline constexpr guest::Function<0x005819ec, u32(u32, u32, u32, u32)> call_005819ec;  // (from the original)

u32 f_00201fa0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r6 = r1;
    r7 = r2;
    r5 = r0;
    r1 = r0;
    r2 = 4u;
    r0 = 0x38u;  // (from the original)
    r0 = call_002fd108(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = call_005819ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    if (r0 == 0) {
        goto L_201ff0;
    }
    r3 = r7;
    r2 = r6;
    r1 = r5;
    r0 = call_005814d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    r0 = r4;
    if (!zf) {
        goto L_201ff0;
    }
    r0 = call_005817f0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 0u;
L_201ff0:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00201fa0
GUEST_EXPORT(0x00201fa0, d_00201fa0::f_00201fa0);

// f_002021d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002021d4 {

inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x0052f074, u32(u32, u32, u32, u32)> call_0052f074;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32, u32)> call_0052f200;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)

u32 f_002021d4(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x38u;  // (from the original)
    if ((*gptr<u32>(0x9825ecu) & 1u) != 0) {  // (from the original)
        goto L_202244;
    }
    r0 = 0x9825ecu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7dc(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_202244;
    }
    r2 = 5u;
    r1 = 6u;
    r0 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r0 + 4) = u32(r2);
    r5 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_0052f074(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r0;
    r0 = 0xaf8484u;  // (from the original)
    r2 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0052f200(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x100000u;  // (from the original)
L_202244:;
    r5 = 0xaf8484u;  // (from the original)
    r0 = r13;
    r1 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0074824c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r5;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00748284(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r13;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_202344;
    } else {
        r5 = 0x3du;  // (from the original)
        r6 = 0x47u;  // (from the original)
    }
    do {
L_20227c:;
        r0 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
        if (!(u32(*gptr<u8>(*gptr<u32>(r13 + 0x18u) + ((r0 << 3) - r0 + r4))) != 0x21u)) {  // (from the original)
            r0 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
            *gptr<u8>(*gptr<u32>(r13 + 0x18u) + r4 + ((r0 << 3) - r0 + 1u)) = u8(r5);  // (from the original)
        }
        r7 = *gptr<u32>(r13 + 0x18u);  // (from the original)
        r0 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
        if (!(u32(*gptr<u8>(r7 + ((r0 << 3) - r0 + r4))) != 0x20u)) {  // (from the original)
            r7 = *gptr<u32>(r13 + 0x18u) + r4;  // (from the original)
            r0 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
            *gptr<u8>(r7 + ((r0 << 3) - r0 - 1u)) = u8(r6);
        }
        r0 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0052f144(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r1 = r13;
        r0 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_007481ec(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        guest::preempt();
    } while (r0 != 0);
L_202344:;
    r0 = r13;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002021d4
GUEST_EXPORT(0x002021d4, d_002021d4::f_002021d4);

// f_00202370: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00202370 {

inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x0052f074, u32(u32, u32, u32, u32)> call_0052f074;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32, u32)> call_0052f200;  // (from the original)
inline constexpr guest::Function<0x0055cb58, u32(u32, u32, u32, u32)> call_0055cb58;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)

u32 f_00202370(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x40u;  // (from the original)
    r5 = r1;
    r9 = r2;
    r8 = r3;
    if ((*gptr<u32>(0x9825ecu) & 1u) != 0) {  // (from the original)
        goto L_2023ec;
    }
    r0 = 0x9825ecu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_2023ec;
    }
    r2 = 5u;
    r1 = 6u;
    r0 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r0 + 4) = u32(r2);
    r6 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_0052f074(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = 0xaf8484u;  // (from the original)
    r2 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0052f200(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0x100000u;  // (from the original)
L_2023ec:;
    r10 = 0xaf8484u;  // (from the original)
    r0 = r13;
    r1 = r10;
    guest::cpu()->r[13] = r13;
    r0 = call_0074824c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0u;
    r1 = r10;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00748284(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_202470;
    }
    do {
L_202424:;
        r7 = *gptr<u32>(r13 + 0x18u);  // (from the original)
        r0 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
        if (u32(*gptr<u8>(r7 + ((r0 << 3) - r0 + r4))) == r5) {
            r6 = r6 + 1u;
        }
        r0 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0052f144(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r13;
        r0 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_007481ec(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::preempt();
    } while (r0 != 0);
L_202470:;
    r7 = 0u;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_0055cb58(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = u32(u64(r0) * r6 >> 0x20);  // (from the original)
    r1 = r10;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00748284(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_20253c;
    }
L_2024ac:;
    r8 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    r0 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    if (u32(*gptr<u8>(r8 + ((r0 << 3) - r0 + r4))) != r5) {
        goto L_20251c;
    }
    if (r7 != r6) {
        r7 = r7 + 1u;
        goto L_20251c;
    }
    r0 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    *gptr<u8>(*gptr<u32>(r13 + 0x18u) + ((r0 << 3) - r0 + r4)) = u8(r9);  // (from the original)
    goto L_202544;
L_20251c:;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052f144(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::preempt();
        goto L_2024ac;
    }
L_20253c:;
L_202544:;
    r0 = r13;
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00202370
GUEST_EXPORT(0x00202370, d_00202370::f_00202370);

// f_002025bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002025bc {

inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x00581050, u32(u32, u32, u32, u32)> call_00581050;  // (from the original)
inline constexpr guest::Function<0x005817f0, u32(u32, u32, u32, u32)> call_005817f0;  // (from the original)
inline constexpr guest::Function<0x005819ec, u32(u32, u32, u32, u32)> call_005819ec;  // (from the original)

u32 f_002025bc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r6 = r1;
    r7 = r2;
    r5 = r0;
    r1 = r0;
    r2 = 4u;
    r0 = 0x38u;  // (from the original)
    r0 = call_002fd108(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = call_005819ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    if (r0 == 0) {
        goto L_20260c;
    }
    r3 = r7;
    r2 = r6;
    r1 = r5;
    r0 = call_00581050(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    r0 = r4;
    if (!zf) {
        goto L_20260c;
    }
    r0 = call_005817f0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 0u;
L_20260c:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002025bc
GUEST_EXPORT(0x002025bc, d_002025bc::f_002025bc);

// f_002026e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002026e4 {

inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x005810ac, u32(u32, u32, u32, u32)> call_005810ac;  // (from the original)
inline constexpr guest::Function<0x005817f0, u32(u32, u32, u32, u32)> call_005817f0;  // (from the original)
inline constexpr guest::Function<0x005819ec, u32(u32, u32, u32, u32)> call_005819ec;  // (from the original)

u32 f_002026e4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r5 = r3;
    r7 = r1;
    r8 = r2;
    r6 = r0;
    r1 = r0;
    r2 = 4u;
    r0 = 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fd108(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_005819ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    if (r0 == 0) {
        goto L_20273c;
    }
    r3 = r8;
    r2 = r7;
    r1 = r6;
    *gptr<u32>(r13) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_005810ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    r0 = r4;
    if (!zf) {
        goto L_20273c;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_005817f0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 0u;
L_20273c:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002026e4
GUEST_EXPORT(0x002026e4, d_002026e4::f_002026e4);

// f_00203170: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00203170 {

inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x005812ec, u32(u32, u32, u32, u32)> call_005812ec;  // (from the original)
inline constexpr guest::Function<0x005817f0, u32(u32, u32, u32, u32)> call_005817f0;  // (from the original)
inline constexpr guest::Function<0x005819ec, u32(u32, u32, u32, u32)> call_005819ec;  // (from the original)

u32 f_00203170(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r5 = r3;
    r7 = r1;
    r8 = r2;
    r6 = r0;
    r1 = r0;
    r2 = 4u;
    r0 = 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fd108(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_005819ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    if (r0 == 0) {
        goto L_2031c8;
    }
    r3 = r8;
    r2 = r7;
    r1 = r6;
    *gptr<u32>(r13) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_005812ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    r0 = r4;
    if (!zf) {
        goto L_2031c8;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_005817f0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 0u;
L_2031c8:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00203170
GUEST_EXPORT(0x00203170, d_00203170::f_00203170);

// f_0020350c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020350c {

inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> call_001207d8;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x0012c984, u32(u32, u32, u32, u32)> call_0012c984;  // (from the original)

u32 f_0020350c(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_001207d8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 + 0x248u;  // (from the original)
    r0 = call_0012c984(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 + 0x14cu;  // (from the original)
    r0 = call_00125aec(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 + 0x28u;  // (from the original)
    r0 = call_00125aec(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 + 0x28u;  // (from the original)
    r0 = call_00125aec(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 + 0x28u;  // (from the original)
    r0 = call_00125aec(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r0 - 0x40cu;  // (from the original)
    r1 = 0u;
    *gptr<u32>(r0 + 0x434u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x438u) = u32(r1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0020350c
GUEST_EXPORT(0x0020350c, d_0020350c::f_0020350c);

// f_00203558: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00203558 {

inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x005b449c, u32(u32, u32, u32, u32)> call_005b449c;  // (from the original)
inline constexpr guest::Function<0x006fa40c, u32(u32, u32, u32, u32)> call_006fa40c;  // (from the original)
inline constexpr guest::Function<0x006fb030, u32(u32, u32, u32, u32)> call_006fb030;  // (from the original)

u32 f_00203558(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u64 t = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r1 = r0;
    r0 = 0x80u;  // (from the original)
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0xa82000u;  // (from the original)
    if (r0 != 0) {
        r0 = r5;
        r0 = call_006fa40c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r0;
        r0 = r5;
        r0 = call_006fb030(r0, r1, r2, r3);
        r0 = r0 + (r4 + (r4 << 1) << 1);
        t = u64(0u) + ~0u + u32(r0 >= 0x18u);  // (from the original)
        r1 = u32(t);
        if (!u32(t >> 0x20)) {  // (from the original)
            r0 = r6 + (r0 << 5) + 0x2e8u;  // (from the original)
            goto L_203654;
        }
        goto L_203650;
    }
    r1 = r5;
    r0 = 0x2000u;  // (from the original)
    r0 = call_002f74e0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5;
    if (r0 != 0) {
        r0 = 0x2000u;  // (from the original)
        r0 = call_005b449c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        if (r0 < 4u) {
            r0 = r6 + (r0 << 5) + 0x5e8u;  // (from the original)
            goto L_203654;
        }
        goto L_203650;
    }
    r0 = 0x40u;  // (from the original)
    r0 = call_002f74e0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5;
    if (r0 != 0) {
        r0 = 0x40u;  // (from the original)
        r0 = call_005b449c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        if (r0 < 0xau) {  // (from the original)
            r0 = r6 + (r0 << 5) + 0x668u;  // (from the original)
            goto L_203654;
        }
        goto L_203650;
    }
    r0 = 0x20000000u;  // (from the original)
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_203650;
    }
    r1 = r5;
    r0 = 0x20000000u;  // (from the original)
    r0 = call_005b449c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 < 2u) {
        r0 = r6 + (r0 << 5) + 0x7a8u;  // (from the original)
        goto L_203654;
    }
L_203650:;
    r0 = 0u;
L_203654:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00203558
GUEST_EXPORT(0x00203558, d_00203558::f_00203558);

// f_00203660: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00203660 {

inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x005b449c, u32(u32, u32, u32, u32)> call_005b449c;  // (from the original)
inline constexpr guest::Function<0x006fa40c, u32(u32, u32, u32, u32)> call_006fa40c;  // (from the original)
inline constexpr guest::Function<0x006fb030, u32(u32, u32, u32, u32)> call_006fb030;  // (from the original)

u32 f_00203660(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u64 t = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r1 = r0;
    r0 = 0x80u;  // (from the original)
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0xa82000u;  // (from the original)
    if (r0 != 0) {
        r0 = r5;
        r0 = call_006fa40c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r0;
        r0 = r5;
        r0 = call_006fb030(r0, r1, r2, r3);
        r0 = r0 + (r4 + (r4 << 1) << 1);
        t = u64(0u) + ~0u + u32(r0 >= 0x18u);  // (from the original)
        r1 = u32(t);
        if (!u32(t >> 0x20)) {  // (from the original)
            r0 = r6 + (r0 << 4) + 8u;
            goto L_203784;
        }
        goto L_203780;
    }
    r1 = r5;
    r0 = 0x40u;  // (from the original)
    r0 = call_002f74e0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5;
    if (r0 != 0) {
        r0 = 0x40u;  // (from the original)
        r0 = call_005b449c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        if (r0 < 0xau) {  // (from the original)
            r0 = r6 + (r0 << 4) + 0x1c8u;  // (from the original)
            goto L_203784;
        }
        goto L_203780;
    }
    r0 = 0x2000u;  // (from the original)
    r0 = call_002f74e0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5;
    if (r0 != 0) {
        r0 = 0x2000u;  // (from the original)
        r0 = call_005b449c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        if (r0 < 4u) {
            r0 = r6 + (r0 << 4) + 0x188u;  // (from the original)
            goto L_203784;
        }
        goto L_203780;
    }
    r0 = 0x4000u;  // (from the original)
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r0 = r5;
        r0 = call_006fb030(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        if (r0 < 6u) {
            r0 = r6 + (r0 << 4) + 0x268u;  // (from the original)
            goto L_203784;
        }
        goto L_203780;
    }
    r1 = r5;
    r0 = 0x20000000u;  // (from the original)
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_203780;
    }
    r1 = r5;
    r0 = 0x20000000u;  // (from the original)
    r0 = call_005b449c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 < 2u) {
        r0 = r6 + (r0 << 4) + 0x2c8u;  // (from the original)
        goto L_203784;
    }
L_203780:;
    r0 = 0u;
L_203784:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00203660
GUEST_EXPORT(0x00203660, d_00203660::f_00203660);

// f_0020378c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020378c {

struct __attribute__((packed)) Object_0020378c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0020378c_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_0020378c_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0020378c_1, word_4, 0x4);  // (from the original)


void f_0020378c(gptr<Object_0020378c_0> arg0, gptr<Object_0020378c_1> arg1) {
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 zf = 0;
    r1 = arg1->word_4;
    r2 = (r1 & 0x3fc00u) >> 0xa;  // (from the original)
    zf = r2 == 0x61u;  // (from the original)
    if (zf) {
        zf = r1 << 0x16 >> 0x16 == 0x268u;  // (from the original)
    }
    if (zf) {
        r1 = 0u;
        arg0->word_0 = u32(r1);
        guest::cpu()->r[1] = r1;
        return;
    }
    zf = r2 == 0x61u;  // (from the original)
    if (zf) {
        zf = r1 << 0x16 >> 0x16 == 0x90u;  // (from the original)
    }
    if (zf) {
        r1 = 1u;
        arg0->word_0 = u32(r1);
        guest::cpu()->r[1] = r1;
        return;
    }
    zf = r2 == 0x61u;  // (from the original)
    if (zf) {
        zf = r1 << 0x16 >> 0x16 == 0x290u;  // (from the original)
    }
    if (zf) {
        r1 = 2u;
        arg0->word_0 = u32(r1);
        guest::cpu()->r[1] = r1;
        return;
    }
    zf = r2 == 0x61u;  // (from the original)
    if (zf) {
        zf = r1 << 0x16 >> 0x16 == 0x280u;  // (from the original)
    }
    if (zf) {
        r1 = 3u;
        arg0->word_0 = u32(r1);
        guest::cpu()->r[1] = r1;
        return;
    }
    zf = r2 == 0x61u;  // (from the original)
    if (zf) {
        zf = r1 << 0x16 >> 0x16 == 0x288u;  // (from the original)
    }
    if (zf) {
        r1 = 4u;
        arg0->word_0 = u32(r1);
        guest::cpu()->r[1] = r1;
        return;
    }
    zf = r2 == 0x61u;  // (from the original)
    if (zf) {
        zf = r1 << 0x16 >> 0x16 == 0x270u;  // (from the original)
    }
    if (zf) {
        r1 = 5u;
        arg0->word_0 = u32(r1);
        guest::cpu()->r[1] = r1;
        return;
    }
    zf = r2 == 0x61u;  // (from the original)
    if (zf) {
        zf = r1 << 0x16 >> 0x16 == 0x210u;  // (from the original)
    }
    if (zf) {
        r1 = 6u;
        arg0->word_0 = u32(r1);
        guest::cpu()->r[1] = r1;
        return;
    }
    zf = r2 == 0x61u;  // (from the original)
    if (zf) {
        zf = r1 << 0x16 >> 0x16 == 0x218u;  // (from the original)
    }
    if (zf) {
        r1 = 7u;
        arg0->word_0 = u32(r1);
        guest::cpu()->r[1] = r1;
        return;
    }
    zf = r2 == 0x61u;  // (from the original)
    if (zf) {
        zf = r1 << 0x16 >> 0x16 == 0x238u;  // (from the original)
    }
    if (zf) {
        r1 = 8u;
        arg0->word_0 = u32(r1);
        guest::cpu()->r[1] = r1;
        return;
    }
    zf = r2 == 0x61u;  // (from the original)
    if (zf) {
        zf = r1 << 0x16 >> 0x16 == 0x118u;  // (from the original)
    }
    if (zf) {
        r1 = 9u;
        arg0->word_0 = u32(r1);
        guest::cpu()->r[1] = r1;
        return;
    }
    zf = r2 == 0x61u;  // (from the original)
    if (zf) {
        zf = r1 << 0x16 >> 0x16 == 0x120u;  // (from the original)
    }
    if (zf) {
        r1 = 0xau;  // (from the original)
        arg0->word_0 = u32(r1);
        guest::cpu()->r[1] = r1;
        return;
    }
    if (r2 != 0x61u) {  // (from the original)
        goto L_2038d4;
    }
    r3 = r1 << 0x16 >> 0x16;  // (from the original)
    if (s32(r3) < s32(0x208u)) {  // (from the original)
        goto L_2038d4;
    }
    if (s32(r3) < s32(0x210u)) {  // (from the original)
        r1 = 0xbu;  // (from the original)
        arg0->word_0 = u32(r1);
        guest::cpu()->r[1] = r1;
        return;
    }
L_2038d4:;
    zf = r2 == 0x61u;  // (from the original)
    if (zf) {
        zf = r1 << 0x16 >> 0x16 == 0x250u;  // (from the original)
    }
    if (zf) {
        r1 = 0xcu;  // (from the original)
        arg0->word_0 = u32(r1);
        guest::cpu()->r[1] = r1;
        return;
    }
    zf = r2 == 0x61u;  // (from the original)
    if (zf) {
        zf = r1 << 0x16 >> 0x16 == 0x240u;  // (from the original)
    }
    if (zf) {
        r1 = 0xdu;  // (from the original)
        arg0->word_0 = u32(r1);
        guest::cpu()->r[1] = r1;
        return;
    }
    zf = r2 == 0x61u;  // (from the original)
    if (zf) {
        zf = r1 << 0x16 >> 0x16 == 0x148u;  // (from the original)
    }
    if (zf) {
        r1 = 0xfu;  // (from the original)
        arg0->word_0 = u32(r1);
        guest::cpu()->r[1] = r1;
        return;
    }
    if (r2 != 0x61u) {  // (from the original)
        r1 = 0x10u;  // (from the original)
        arg0->word_0 = u32(r1);
        guest::cpu()->r[1] = r1;
        return;
    }
    r1 = r1 << 0x16 >> 0x16;  // (from the original)
    if (s32(r1) < s32(0x100u)) {  // (from the original)
        r1 = 0x10u;  // (from the original)
        arg0->word_0 = u32(r1);
        guest::cpu()->r[1] = r1;
        return;
    }
    if (s32(r1) < s32(0x140u)) {  // (from the original)
        r1 = 0xeu;  // (from the original)
        arg0->word_0 = u32(r1);
        guest::cpu()->r[1] = r1;
        return;
    }
    r1 = 0x10u;  // (from the original)
    arg0->word_0 = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0020378c
GUEST_EXPORT(0x0020378c, d_0020378c::f_0020378c);

// f_00203948: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00203948 {


u32 f_00203948(u32 r0) {
    u32 res = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    r3 = 0x953684u;  // (from the original)
    r1 = 0xa827e8u;  // (from the original)
    res = r0 & ~u32(s32(s8(*gptr<u8>(r3))));
    if (res != 0) {
        r0 = 1u;
        *gptr<u8>(r1 + 0x3a0u) = u8(r0);  // (from the original)
        *gptr<u8>(r3) = u8(r0);
    }
    r0 = 0x87c074u;  // (from the original)
    r12 = *gptr<u32>(r1 + 0xcu);  // (from the original)
    r2 = *gptr<u32>(r0 + 8u);
    r0 = *gptr<u32>(r0 + 0xcu);  // (from the original)
    if (r12 != r2) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2 = *gptr<u32>(0xa827f8u);  // (from the original)
    if (r12 == 0) {
        if (((r2 | r0) & 1u) == 0) {
            goto L_2039a4;
        }
    }
    if (r2 != r0) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
L_2039a4:;
    if (*gptr<u32>(r1 + 0xa0u) == 2u) {  // (from the original)
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (u32(*gptr<u8>(r3)) == 0) {
        r0 = 2u;
    } else {
        r0 = 3u;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00203948
GUEST_EXPORT(0x00203948, d_00203948::f_00203948);

// f_00203bd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00203bd0 {

inline constexpr guest::Function<0x0051bbbc, u32(u32, u32, u32, u32)> call_0051bbbc;  // (from the original)

u32 f_00203bd0() {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    r0 = 0x87c074u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r1 = *gptr<u32>(r0);
    r2 = *gptr<u32>(0xa827f4u);  // (from the original)
    r0 = *gptr<u32>(r0 + 4u);
    if (r2 != r1) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = *gptr<u32>(0xa827f8u);  // (from the original)
    if (r2 == 0) {
        r2 = r1 | r0;
        if ((r2 & 1u) == 0) {
            goto L_203c14;
        }
    }
    if (r1 != r0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
L_203c14:;
    r0 = 3u;
    r0 = call_0051bbbc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00203bd0
GUEST_EXPORT(0x00203bd0, d_00203bd0::f_00203bd0);

// f_00203c34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00203c34 {

inline constexpr guest::Function<0x0051bc4c, u32(u32, u32, u32, u32)> call_0051bc4c;  // (from the original)

u32 f_00203c34(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_0051bc4c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x953684u;  // (from the original)
    r0 = 0u;
    *gptr<u8>(r1) = u8(r0);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00203c34
GUEST_EXPORT(0x00203c34, d_00203c34::f_00203c34);

// f_00203c50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00203c50 {


u32 f_00203c50() {
    u32 r0 = 0;
    if (u32(*gptr<u8>(0xa82898u)) == 0) {  // (from the original)
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    return r0;
}

}  // namespace d_00203c50
GUEST_EXPORT(0x00203c50, d_00203c50::f_00203c50);

// f_00203c6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00203c6c {

inline constexpr guest::Function<0x0013451c, u32(u32, u32, u32, u32)> call_0013451c;  // (from the original)
inline constexpr guest::Function<0x0014ef20, u32(u32, u32, u32, u32)> call_0014ef20;  // (from the original)
inline constexpr guest::Function<0x001ab07c, u32(u32, u32, u32, u32)> call_001ab07c;  // (from the original)
inline constexpr guest::Function<0x004ee4c8, u32(u32, u32, u32, u32)> call_004ee4c8;  // (from the original)

u32 f_00203c6c(u32 r0, u32 r1, u32 r2, float S0, float S1, float S2, float S3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x68u;  // (from the original)
    r4 = r0;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_0013451c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = r4 + 0x344u;  // (from the original)
    S3 = std::bit_cast<float>(*gptr<u32>(0x203d00u));  // (from the original)
    r0 = r13;
    S0 = std::bit_cast<float>(*gptr<u32>(r2));
    S1 = std::bit_cast<float>(*gptr<u32>(r2 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r2 + 8));
    r2 = r13 + 0x30u;  // (from the original)
    *gptr<u32>(r13 + 0x30u) = u32(std::bit_cast<u32>(S3));  // (from the original)
    r1 = r0;
    S1 = S1 * S0;
    S2 = S2 * S0;
    S0 = std::bit_cast<float>(*gptr<u32>(0x203cfcu));  // (from the original)
    *gptr<u32>(r13 + 0x34u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r13 + 0x38u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r13 + 0x40u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r13 + 0x44u) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(r13 + 0x48u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r13 + 0x50u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r13 + 0x54u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r13 + 0x58u) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(r13 + 0x3cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r13 + 0x4cu) = u32(std::bit_cast<u32>(S1));  // (from the original)
    *gptr<u32>(r13 + 0x5cu) = u32(std::bit_cast<u32>(S2));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_0014ef20(r0, r1, r2, guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    r2 = r13;
    r1 = r4;
    r0 = r4 + 0x284u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_001ab07c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    r1 = r13;
    r0 = r4 + 0x78u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_004ee4c8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r13 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00203c6c
GUEST_EXPORT(0x00203c6c, d_00203c6c::f_00203c6c);

// f_0020407c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020407c {

struct __attribute__((packed)) Object_0020407c_0 {
    u8 unknown_0[0x27e];  // (not used here)
    u16 half_27e;
};
GUEST_OFFSET(Object_0020407c_0, half_27e, 0x27e);  // (from the original)

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> call_002fa9d0;  // (from the original)
inline constexpr guest::Function<0x00317cc8, u32(u32, u32, u32, u32)> call_00317cc8;  // (from the original)
inline constexpr guest::Function<0x004f2ef0, u32(u32, u32, u32, u32)> call_004f2ef0;  // (from the original)
inline constexpr guest::Function<0x00736a1c, u32(u32, u32, u32, u32)> call_00736a1c;  // (from the original)

u32 f_0020407c(gptr<Object_0020407c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    *gptr<u32>(r13 + 0xffffffd8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r4 = r0;
    r6 = r1;
    r10 = r2;
    r1 = u32(arg0->half_27e);
    r5 = r3;
    r0 = r4 + 0x164u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00317cc8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    if (r0 == 0) {
        goto L_204194;
    }
    r9 = 0u;
    r0 = *gptr<u32>(r4 + 0x164u);  // (from the original)
    r4 = r5;
    r8 = r13;
    ea = r0 + 0x28u;  // (from the original)
    r0 = ea;
    r1 = *gptr<u32>(ea);
    if (r1 == 0) {
        r0 = r9;
    } else {
        r0 = r0 + r1;
    }
    zf = r0 == 0;
    if (!zf) {
        zf = r4 == 0;
    }
    *gptr<u32>(r13) = u32(r0);
    if (zf) {
        goto L_204110;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002fa9d0(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r0;
    r1 = r4;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_00736a1c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_204110;
    }
    ea = r0 + 0xcu;  // (from the original)
    r0 = ea;
    r1 = *gptr<u32>(ea);
    if (r1 == 0) {
        r4 = r9;
    } else {
        r4 = r1 + r0;
    }
    goto L_204114;
L_204110:;
    r4 = 0u;
L_204114:;
    ea = r7 + 0xc0u;  // (from the original)
    r7 = ea;
    r0 = *gptr<u32>(ea);
    r5 = r6;
    if (r0 == 0) {
        r0 = r9;
    } else {
        r0 = r0 + r7;
    }
    zf = r0 == 0;
    if (!zf) {
        zf = r5 == 0;
    }
    r7 = r13;
    *gptr<u32>(r13) = u32(r0);
    if (zf) {
        goto L_204174;
    }
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fa9d0(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r0;
    r1 = r5;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00736a1c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_204174;
    }
    ea = r0 + 0xcu;  // (from the original)
    r0 = ea;
    r1 = *gptr<u32>(ea);
    if (r1 == 0) {
        r0 = r9;
    } else {
        r0 = r0 + r1;
    }
    goto L_204178;
L_204174:;
    r0 = 0u;
L_204178:;
    zf = r0 == 0;
    if (!zf) {
        zf = r4 == 0;
    }
    if (zf) {
        r0 = 0u;
        goto L_204198;
    }
    r2 = r4;
    r1 = r10;
    guest::cpu()->r[13] = r13;
    r0 = call_004f2ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_204194:;
    r0 = 1u;
L_204198:;
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0020407c
GUEST_EXPORT(0x0020407c, d_0020407c::f_0020407c);

// f_00204568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00204568 {

inline constexpr guest::Function<0x00203d04, u32(u32, u32, u32, u32)> call_00203d04;  // (from the original)

u32 f_00204568(u32 r0, u32 r1_unused, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_00203d04(r0, guest::cpu()->r[1], r2, guest::cpu()->r[3]);
    *gptr<u8>(r4 + 0x280u) = u8(u32(*gptr<u8>(r4 + 0x280u)) & ~0x80u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_00204568
GUEST_EXPORT(0x00204568, d_00204568::f_00204568);

// f_00204584: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00204584 {

inline constexpr guest::Function<0x00203d04, u32(u32, u32, u32, u32)> call_00203d04;  // (from the original)

u32 f_00204584(u32 r0, u32 r1_unused, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_00203d04(r0, guest::cpu()->r[1], r2, guest::cpu()->r[3]);
    *gptr<u8>(r4 + 0x280u) = u8(u32(*gptr<u8>(r4 + 0x280u)) & ~0x40u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_00204584
GUEST_EXPORT(0x00204584, d_00204584::f_00204584);

// f_002045a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002045a0 {

inline constexpr guest::Function<0x00203d04, u32(u32, u32, u32, u32)> call_00203d04;  // (from the original)

u32 f_002045a0(u32 r0, u32 r1_unused, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_00203d04(r0, guest::cpu()->r[1], r2, guest::cpu()->r[3]);
    *gptr<u8>(r4 + 0x280u) = u8(u32(*gptr<u8>(r4 + 0x280u)) & ~0x20u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_002045a0
GUEST_EXPORT(0x002045a0, d_002045a0::f_002045a0);

// f_002068b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002068b8 {

struct __attribute__((packed)) Object_002068b8_1 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Object_002068b8_1, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002068b8_1, byte_1, 0x1);  // (from the original)

inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)
inline constexpr guest::Function<0x00624ee8, u32(u32, u32, u32, u32)> call_00624ee8;  // (from the original)
inline constexpr guest::Function<0x00624f00, u32(u32, u32, u32, u32)> call_00624f00;  // (from the original)
inline constexpr guest::Function<0x0069858c, u32(u32, u32, u32, u32)> call_0069858c;  // (from the original)
inline constexpr guest::Function<0x00746f24, u32(u32, u32, u32, u32)> call_00746f24;  // (from the original)

u32 f_002068b8(u32 r0_unused, gptr<Object_002068b8_1> arg1, u32 r2, u32 r3) {
    u32 r0 = 0;
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r7 = 0u;
    r0 = u32(arg1->byte_0);
    r1 = u32(arg1->byte_1);
    *gptr<u8>(r13 + 2u) = u8(r7);
    *gptr<u8>(r13 + 3u) = u8(r7);
    r6 = (r0 >> 5) + (r1 << 3) & 0xffu;  // (from the original)
    r0 = 0xau | r6 << 5;  // (from the original)
    *gptr<u8>(r13 + 4u) = u8(r7);
    r1 = r7 | (r6 & 0xf8u) >> 3;  // (from the original)
    *gptr<u8>(r13 + 5u) = u8(r7);
    *gptr<u8>(r13) = u8(r0);
    *gptr<u8>(r13 + 6u) = u8(r7);
    *gptr<u8>(r13 + 1u) = u8(r1);
    guest::cpu()->r[13] = r13;
    r0 = call_00305f44(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0u;
    r4 = r5;
    r1 = u32(*gptr<u8>(r13 + 1u)) & ~0xe0u;  // (from the original)
    *gptr<u8>(r13 + 1u) = u8(r1 | r0 << 5);
    do {
L_206920:;
        r0 = r4 & 0xffu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00624f00(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0 == 0)) {
            r0 = r4 & 0xffu;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_00624ee8(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (u32(r0 >= r5) && !u32(r0 == r5)) {
                r5 = r0;
            }
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 4u);
    r0 = 0xa22020u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00746f24(r0, r1, r2, r3);
    r4 = r0 + r5 + 0x12cu;  // (from the original)
    r3 = 7u;
    *gptr<u8>(r13 + 4u) = u8(r7 | r4 >> 8);
    *gptr<u8>(r13 + 5u) = u8(r7 | r4 >> 0x10);  // (from the original)
    *gptr<u8>(r13 + 6u) = u8(r7 | r4 >> 0x18);  // (from the original)
    r2 = r13;
    r1 = 4u;
    r0 = 0x40u;  // (from the original)
    *gptr<u8>(r13 + 3u) = u8(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_006249b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(0x950148u);  // (from the original)
    if (r0 != 0) {
        r2 = r4;
        r1 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_0069858c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002068b8
GUEST_EXPORT(0x002068b8, d_002068b8::f_002068b8);

// f_00206f7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00206f7c {

inline constexpr guest::Function<0x002b6a00, u32(u32, u32, u32, u32)> call_002b6a00;  // (from the original)
inline constexpr guest::Function<0x002f6a30, u32(u32, u32, u32, u32)> call_002f6a30;  // (from the original)
inline constexpr guest::Function<0x002f6e98, u32(u32, u32, u32, u32)> call_002f6e98;  // (from the original)
inline constexpr guest::Function<0x002f7508, u32(u32, u32, u32, u32)> call_002f7508;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)

u32 f_00206f7c(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    float S4 = 0;
    float S5 = 0;
    r4 = r0;
    r2 = r0 + 4u;
    r0 = 0x8874e8u;  // (from the original)
    r13 = r13 - 0x50u;  // (from the original)
    r3 = r0 + 0x20u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r3));
    S1 = std::bit_cast<float>(*gptr<u32>(r3 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r3 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r3 + 0xc));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r3 + 0x10));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(r3 + 0x14));  // (from the original)
    r3 = r13 + 0x24u;  // (from the original)
    *gptr<u32>(r3) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r3 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r3 + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r3 + 0xc) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(r3 + 0x10) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u32>(r3 + 0x14) = u32(std::bit_cast<u32>(S5));  // (from the original)
    r3 = r13 + 0x1cu;  // (from the original)
    *gptr<u32>(r13 + 0x3cu) = u32(*gptr<u32>(r0 + 0x38u));  // (from the original)
    *gptr<u32>(r3) = u32(r1);
    *gptr<u32>(r3 + 4) = u32(r2);
    r2 = 0u;
    r1 = r13 + 0x1cu;  // (from the original)
    r0 = r4 + 0x260u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_002f6e98(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    r6 = 0u;
    S0 = std::bit_cast<float>(*gptr<u32>(0x20707cu));  // (from the original)
    *gptr<u32>(r4 + 0x334u) = u32(*gptr<u32>(r4 + 0x334u) | 0x40u);  // (from the original)
    *gptr<u32>(r13) = u32(r6);
    *gptr<u32>(r13 + 4u) = u32(r6);
    S1 = std::bit_cast<float>(*gptr<u32>(0x207080u));  // (from the original)
    r2 = r13 + 8u;
    *gptr<u32>(r13 + 8u) = u32(r6);
    *gptr<u32>(r13 + 0xcu) = u32(r6);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r6);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r6);  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(r6);  // (from the original)
    r1 = 0x887574u;  // (from the original)
    r5 = 1u;
    r0 = r4 + 4u;
    *gptr<u32>(r2) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r2 + 4) = u32(std::bit_cast<u32>(S1));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_0056878c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    *gptr<u32>(r13) = u32(r0);
    r0 = *gptr<u32>(r4 + 0x17cu);  // (from the original)
    r1 = r13;
    *gptr<u32>(r13 + 0x10u) = u32(r6);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r0);
    r0 = r4 + 0x180u;  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r6);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_002b6a00(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    r2 = 1u;
    r1 = r4 + 0x180u;  // (from the original)
    r0 = r4 + 0x260u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_002f7508(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    r1 = 0u;
    r0 = r4 + 0x260u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_002f6a30(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = 0x10003f6u;  // (from the original)
    r0 = 3u;
    *gptr<u32>(r4 + 0x250u) = u32(r1);  // (from the original)
    *gptr<u8>(r4 + 0x25bu) = u8(r5);  // (from the original)
    r1 = r1 + 0xdu;  // (from the original)
    *gptr<u8>(r4 + 0x25cu) = u8(r5);  // (from the original)
    *gptr<u32>(r4 + 0x24cu) = u32(r1);  // (from the original)
    *gptr<u8>(r4 + 0x25au) = u8(r5);  // (from the original)
    *gptr<u16>(0x330u + r4) = u16(r0);  // (from the original)
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00206f7c
GUEST_EXPORT(0x00206f7c, d_00206f7c::f_00206f7c);

// f_00207168: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00207168 {

inline constexpr guest::Function<0x00207190, u32(u32, u32, u32, u32)> call_00207190;  // (from the original)

u32 f_00207168(u32 r0_unused, u32 r1_unused, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10u;  // (from the original)
    r4 = 0u;
    *gptr<u16>(r13) = u16(r4);
    *gptr<u16>(r13 + 2u) = u16(r2);
    r2 = r13;
    *gptr<u16>(r13 + 4u) = u16(r4);
    guest::cpu()->r[13] = r13;
    call_00207190(guest::cpu()->r[0], guest::cpu()->r[1], r2, guest::cpu()->r[3]);
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_00207168
GUEST_EXPORT(0x00207168, d_00207168::f_00207168);

// f_00207330: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00207330 {

inline constexpr guest::Function<0x001391d8, u32(u32, u32, u32, u32)> call_001391d8;  // (from the original)
inline constexpr guest::Function<0x00207b1c, u32(u32, u32, u32, u32)> call_00207b1c;  // (from the original)

u32 f_00207330(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    r0 = 0x24u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r0 = call_001391d8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = call_00207b1c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r1 = 0x957308u;  // (from the original)
    *gptr<u32>(r1) = u32(r0);
    if (r0 == 0) {
        r0 = 0u;
    } else {
        r0 = 1u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00207330
GUEST_EXPORT(0x00207330, d_00207330::f_00207330);

// f_0020758c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020758c {

inline constexpr guest::Function<0x00207750, u32(u32, u32, u32, u32)> call_00207750;  // (from the original)
inline constexpr guest::Function<0x002e6944, u32(u32, u32, u32, u32)> call_002e6944;  // (from the original)
inline constexpr guest::Function<0x003166a8, u32(u32, u32, u32, u32)> call_003166a8;  // (from the original)

u32 f_0020758c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x28u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r6 = r2;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_003166a8(r0, r1, r2, r3);
    r3 = r5;
    r2 = r6;
    r1 = r4;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00207750(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0020758c
GUEST_EXPORT(0x0020758c, d_0020758c::f_0020758c);

// f_0020763c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020763c {

inline constexpr guest::Function<0x001316b8, u32(u32, u32, u32, u32)> call_001316b8;  // (from the original)
inline constexpr guest::Function<0x0054ee94, u32(u32, u32, u32, u32)> call_0054ee94;  // (from the original)

u32 f_0020763c(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x48u;  // (from the original)
    r4 = r0;
    r5 = 0u;
    r6 = 0x952c3cu;  // (from the original)
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(0x9047f8u);  // (from the original)
    ea = r13 + 0x10u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r13 + 0x14u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r13 + 0xcu;  // (from the original)
    *gptr<u32>(ea) = u32(0x8c9f1cu);  // (from the original)
    r0 = 1u;
    ea = r13 + 0x24u;  // (from the original)
    *gptr<u8>(ea) = u8(r0);
    ea = r13 + 0x20u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r13 + 0x25u;  // (from the original)
    *gptr<u8>(ea) = u8(r0);
    ea = r13 + 0x28u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r13 + 0x2cu;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r13 + 0x30u;  // (from the original)
    *gptr<u8>(ea) = u8(r5);
    ea = r6;
    r0 = *gptr<u32>(ea);
    ea = r13 + 0x18u;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(0x80u);  // (from the original)
    r1 = r13 + 8u;
    *gptr<u32>(r13 + 0xcu) = u32(*gptr<u32>(0x957310u));  // (from the original)
    r0 = *gptr<u32>(*gptr<u32>(0x9752e0u) + 0x1cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001316b8(r0, r1, r2, r3);
    *gptr<u32>(r4 + 0xcu) = u32(r0);  // (from the original)
    *gptr<u32>(r13) = u32(r5);
    *gptr<u32>(r13 + 4u) = u32(r5);
    r2 = r0;
    r0 = *gptr<u32>(r4 + 4u);
    r1 = *gptr<u32>(r6);
    r3 = 1u;
    guest::cpu()->r[13] = r13;
    r0 = call_0054ee94(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0020763c
GUEST_EXPORT(0x0020763c, d_0020763c::f_0020763c);

// f_00207710: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00207710 {

struct __attribute__((packed)) Object_00207710_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00207710_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002ffb64, u32(u32, u32, u32, u32)> call_002ffb64;  // (from the original)
inline constexpr guest::Function<0x0054ee44, u32(u32, u32, u32, u32)> call_0054ee44;  // (from the original)

u32 f_00207710(gptr<Object_00207710_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = arg0->word_4;
    r1 = 1u;
    r0 = call_0054ee44(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = *gptr<u32>(r4 + 0xcu);  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_002ffb64(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 0u;
    *gptr<u32>(r4 + 0xcu) = u32(r0);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00207710
GUEST_EXPORT(0x00207710, d_00207710::f_00207710);

// f_00207750: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00207750 {

inline constexpr guest::Function<0x002e61cc, u32(u32, u32, u32, u32)> call_002e61cc;  // (from the original)
inline constexpr guest::Function<0x002e64bc, u32(u32, u32, u32, u32)> call_002e64bc;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x0054fbb0, u32(u32, u32, u32, u32)> call_0054fbb0;  // (from the original)
inline constexpr guest::Function<0x0072072c, u32(u32, u32, u32, u32)> call_0072072c;  // (from the original)

u32 f_00207750(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r6 = r1;
    r4 = r2;
    r7 = r3;
    r5 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002e64bc(r0, r1, r2, r3);
    zf = r4 == 3u;
    if (!zf) {
        zf = r4 == 4u;
    }
    r0 = 0u;
    if (zf) {
        r0 = 1u;
        goto L_20778c;
    }
    if (s32(r4) >= s32(5u)) {
        r0 = 2u;
        r4 = 0u;
    }
L_20778c:;
    r12 = *gptr<u32>(*gptr<u32>(0x957308u) + 4u);  // (from the original)
    *gptr<u32>(r13) = u32(r0);
    *gptr<u32>(r13 + 4) = u32(r4 & 0xffu);  // (from the original)
    *gptr<u32>(r13 + 8) = u32(~0u);
    r3 = r6;
    r2 = r7;
    r1 = r5 + 0xcu;  // (from the original)
    r0 = r12;
    guest::cpu()->r[13] = r13;
    r0 = call_0054fbb0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 == 0) {
        goto L_2077f8;
    }
    r1 = 0u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0072072c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_2077f8;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_002e61cc(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
L_2077f8:;
    r0 = r4;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00207750
GUEST_EXPORT(0x00207750, d_00207750::f_00207750);

// f_0020968c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020968c {

struct __attribute__((packed)) Object_0020968c_0 {
    u8 unknown_0[0x4fc];  // (not used here)
    u32 word_4fc;
};
GUEST_OFFSET(Object_0020968c_0, word_4fc, 0x4fc);  // (from the original)

inline constexpr guest::Function<0x00132364, u32(u32, u32, u32, u32)> call_00132364;  // (from the original)
inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> call_001323b4;  // (from the original)
inline constexpr guest::Function<0x002cd0e0, u32(u32, u32, u32, u32)> call_002cd0e0;  // (from the original)

u32 f_0020968c(gptr<Object_0020968c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    if (arg0->word_4fc == 1u) {
        r0 = r4 + 0x170u;  // (from the original)
        r0 = call_00132364(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0 = r4 + 0x24u;  // (from the original)
    r0 = call_001323b4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (*gptr<u32>(r4 + 0x4fcu) == 0) {  // (from the original)
        r0 = r4 + 0xb60u;  // (from the original)
        r0 = call_002cd0e0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0020968c
GUEST_EXPORT(0x0020968c, d_0020968c::f_0020968c);

// f_00209770: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00209770 {

inline constexpr guest::Function<0x00569dc4, u32(u32, u32, u32, u32)> call_00569dc4;  // (from the original)
inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> call_0056a974;  // (from the original)

u32 f_00209770(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00569dc4(r0, r1, r2, r3);
    *gptr<u32>(r13 + 4u) = u32(0x2097a8u);  // (from the original)
    *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
    r2 = *gptr<u32>(r0 + 4u);
    r0 = 0xabe0b8u;  // (from the original)
    r1 = r13;
    r3 = 0x80u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056a974(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00209770
GUEST_EXPORT(0x00209770, d_00209770::f_00209770);

// f_00209c98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00209c98 {

struct __attribute__((packed)) Object_00209c98_0 {
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
GUEST_OFFSET(Object_00209c98_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00209c98_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00209c98_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00209c98_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00209c98_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00209c98_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00209c98_0, byte_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_00209c98_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_00209c98_0, word_20, 0x20);  // (from the original)

inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> call_001207d8;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)
inline constexpr guest::Function<0x002cd444, u32(u32, u32, u32, u32)> call_002cd444;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x0033f0d8, u32(u32, u32, u32, u32)> call_0033f0d8;  // (from the original)

u32 f_00209c98(gptr<Object_00209c98_0> arg0, float S0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r4 = 0u;
    arg0->word_4 = u32(r4);
    arg0->byte_8 = u8(r4);
    r2 = *gptr<u32>(0x8877e4u + 4);  // (from the original)
    r3 = r0 + 0xcu;  // (from the original)
    arg0->word_c = u32(*gptr<u32>(0x8877e4u));  // (from the original)
    arg0->word_10 = u32(r2);
    arg0->word_14 = u32(r4);
    r1 = 0x8ed7e0u;  // (from the original)
    arg0->byte_18 = u8(r4);
    arg0->word_1c = u32(r4);
    arg0->word_0 = u32(r1);
    arg0->word_20 = u32(r4);
    r0 = r0 + 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00125e3c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r0 + 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_001207d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r0 + 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00125aec(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x408u;  // (from the original)
    ea = r0 + 0x430u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    ea = r0 + 0x434u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    r5 = ~0u;
    ea = r0 + 0x438u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    ea = r0 + 0x4fcu;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    ea = r0 + 0x504u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r0 + 0x508u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    S0 = std::bit_cast<float>(*gptr<u32>(0x209dd8u));  // (from the original)
    r1 = r0 + 0x518u;  // (from the original)
    *gptr<u32>(r0 + 0x510u) = u32(r5);  // (from the original)
    *gptr<u8>(r0 + 0x514u) = u8(r4);  // (from the original)
    *gptr<u32>(r1) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r1 + 4u) = u32(std::bit_cast<u32>(S0));
    r1 = r0 + 0x520u;  // (from the original)
    *gptr<u32>(r1) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r1 + 4u) = u32(std::bit_cast<u32>(S0));
    r1 = r0 + 0x400u;  // (from the original)
    *gptr<u8>(r0 + 0x530u) = u8(r4);  // (from the original)
    *gptr<u32>(r1 + 0x134u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r0 = r0 + 0x538u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0033f0d8(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r1 = 0x2b6de0u;  // (from the original)
    r3 = 6u;
    r2 = 0xe0u;  // (from the original)
    r0 = r0 + 0xe8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r0 + 0x540u;  // (from the original)
    r2 = 1u;
    r1 = r0 + 0x118u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_002cd444(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r1 = 0x8ef22cu;  // (from the original)
    r3 = 1u;
    *gptr<u32>(r0 + 0xe4u) = u32(r1 + 0x44u);  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r2 = 0x518u;  // (from the original)
    r1 = 0x2e0994u;  // (from the original)
    r0 = r0 + 0x118u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00301d0c(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r0 = r0 - 0xc78u;  // (from the original)
    r1 = r0 + 0x1000u;  // (from the original)
    *gptr<u8>(r1 + 0x190u) = u8(r4);  // (from the original)
    *gptr<u8>(r1 + 0x191u) = u8(r4);  // (from the original)
    *gptr<u8>(r1 + 0x192u) = u8(r4);  // (from the original)
    *gptr<u8>(r1 + 0x193u) = u8(r4);  // (from the original)
    *gptr<u32>(r1 + 0x194u) = u32(r5);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_00209c98
GUEST_EXPORT(0x00209c98, d_00209c98::f_00209c98);

// f_00209f40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00209f40 {

struct __attribute__((packed)) Object_00209f40_0 {
    u8 unknown_0[0x1470];  // (not used here)
    u32 word_1470;
    u32 word_1474;
    u32 word_1478;
    u8 byte_147c;
    u8 unknown_147d[0x3];  // (not used here)
    u32 word_1480;
};
GUEST_OFFSET(Object_00209f40_0, word_1470, 0x1470);  // (from the original)
GUEST_OFFSET(Object_00209f40_0, word_1474, 0x1474);  // (from the original)
GUEST_OFFSET(Object_00209f40_0, word_1478, 0x1478);  // (from the original)
GUEST_OFFSET(Object_00209f40_0, byte_147c, 0x147c);  // (from the original)
GUEST_OFFSET(Object_00209f40_0, word_1480, 0x1480);  // (from the original)

struct __attribute__((packed)) Object_00209f40_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00209f40_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00209f40_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00209f40_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_00209f40_2 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_00209f40_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00209f40_2, word_8, 0x8);  // (from the original)


u32 f_00209f40(gptr<Object_00209f40_0> arg0, gptr<Object_00209f40_1> arg1, gptr<Object_00209f40_2> arg2, float S0, float S1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r3 = 0;
    u32 fpsr = guest::cpu()->fpscr;
    r3 = arg0->word_1480 + 1u;
    res = r3 - 0x12cu;  // (from the original)
    arg0->word_1480 = u32(r3);
    if (res >> 0x1f == ((r3 ^ 0x12cu) & (r3 ^ res)) >> 0x1f) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    if (u32(arg0->byte_147c) == 0) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    S0 = std::bit_cast<float>(arg0->word_1470) - std::bit_cast<float>(arg2->word_0);
    S1 = std::bit_cast<float>(arg0->word_1478) - std::bit_cast<float>(arg2->word_8);
    S0 = S0 * S0 + S1 * S1;
    S1 = std::bit_cast<float>(*gptr<u32>(0x95731cu));  // (from the original)
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(sqrtf(S0), S1);  // (from the original)
    if (fpsr >> 0x1e & 1 || fpsr >> 0x1f != (fpsr >> 0x1c & 1)) {  // (from the original)
        r1 = 0u;
        *gptr<u8>(r0 + 0x147cu) = u8(r1);  // (from the original)
        r0 = r1;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    arg1->word_0 = u32(arg0->word_1470);
    arg1->word_4 = u32(arg0->word_1474);
    arg1->word_8 = u32(arg0->word_1478);
    r0 = 1u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00209f40
GUEST_EXPORT(0x00209f40, d_00209f40::f_00209f40);

// f_0020a35c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020a35c {

struct __attribute__((packed)) Object_0020a35c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Object_0020a35c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0020a35c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0020a35c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0020a35c_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0020a35c_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0020a35c_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0020a35c_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0020a35c_0, word_20, 0x20);  // (from the original)

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x00307040, u32(u32, u32, u32, u32)> call_00307040;  // (from the original)

u32 f_0020a35c(gptr<Object_0020a35c_0> arg0, u32 r1) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18;  // (from the original)
    r0 = r0 + 4u;
    r3 = 0x10u;  // (from the original)
    arg0->word_4 = u32(r3);
    r7 = 0u;
    arg0->word_10 = u32(r0 + 0x20u);  // (from the original)
    arg0->word_14 = u32(r7);
    r6 = r1;
    r8 = 0x100u;  // (from the original)
    arg0->word_18 = u32(r7);
    arg0->word_8 = u32(r3);
    arg0->word_c = u32(r8);
    r4 = r0 + 0x18u;  // (from the original)
    r12 = r0 + 0x1420u;  // (from the original)
    r1 = 0x274724u;  // (from the original)
    r3 = r8;
    r2 = 0x14u;  // (from the original)
    r0 = r0 + 0x20u;  // (from the original)
    arg0->word_1c = u32(r7);
    arg0->word_20 = u32(r12);
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x1400u;  // (from the original)
    r4 = 0x10u;  // (from the original)
    r5 = r4;
    r2 = r0 + 0x2cu;  // (from the original)
    r1 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_00307040(r0, r1, r2, r3);
    ea = r0 + 0x14u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r7);
    *gptr<u32>(r0) = u32(0x8fa3b4u);  // (from the original)
    *gptr<u32>(r0 + 0x20u) = u32(r7);  // (from the original)
    *gptr<u32>(r0 + 0x24u) = u32(r7);  // (from the original)
    *gptr<u32>(r0 + 0x28u) = u32(r7);  // (from the original)
    r1 = 0x147cu;  // (from the original)
    r0 = r0 - 0x1424u;  // (from the original)
    *gptr<u32>(r0) = u32(r6);
    *gptr<u8>(r1 + r0) = u8(r7);
    *gptr<u32>(0x1480u + r0) = u32(r7);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0020a35c
GUEST_EXPORT(0x0020a35c, d_0020a35c::f_0020a35c);

// f_0020a418: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020a418 {

struct __attribute__((packed)) Object_0020a418_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_0020a418_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0020a418_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0020a418_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0020a418_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0020a418_0, word_14, 0x14);  // (from the original)


void f_0020a418(gptr<Object_0020a418_0> arg0, float S0_unused, float S1) {
    u32 res = 0;
    u32 r1 = 0;
    u32 zf = 0;
    u32 vf = 0;
    float S0 = 0;
    r1 = arg0->word_14;
    res = r1;
    if (!(u32(res == 0) || res >> 0x1f != (r1 & (r1 ^ res)) >> 0x1f)) {  // (from the original)
        S0 = std::bit_cast<float>(arg0->word_4);
        r1 = r1 - 1u;
        arg0->word_14 = u32(r1);
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return;
    }
    r1 = arg0->word_10;
    res = r1;
    zf = res == 0;
    vf = (r1 & (r1 ^ res)) >> 0x1f;  // (from the original)
    if (zf) {
        r1 = ~0u;
        arg0->word_10 = u32(r1);
    }
    if (zf || res >> 0x1f != vf) {  // (from the original)
        S0 = std::bit_cast<float>(arg0->word_4);
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return;
    }
    res = r1 - 1u;
    r1 = res;
    arg0->word_10 = u32(r1);
    if (res == 0) {
        r1 = arg0->word_8;
        arg0->word_4 = u32(r1);
        S0 = std::bit_cast<float>(arg0->word_4);
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return;
    }
    S1 = std::bit_cast<float>(arg0->word_c);
    arg0->word_4 = u32(std::bit_cast<u32>(std::bit_cast<float>(arg0->word_4) + S1));
    S0 = std::bit_cast<float>(arg0->word_4);
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_0020a418
GUEST_EXPORT(0x0020a418, d_0020a418::f_0020a418);

// f_0020a474: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020a474 {

struct __attribute__((packed)) Object_0020a474_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_0020a474_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0020a474_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0020a474_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0020a474_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0020a474_0, word_14, 0x14);  // (from the original)


void f_0020a474(gptr<Object_0020a474_0> arg0, u32 r1, u32 r2, float S0, float S1) {
    u32 res = 0;
    u32 r3 = 0;
    float S2 = 0;
    res = r1;
    r3 = 0u;
    if (res >> 0x1f != (r1 & (r1 ^ res)) >> 0x1f) {  // (from the original)
        r1 = r3;
    }
    arg0->word_8 = u32(std::bit_cast<u32>(S0));
    if (r1 == 0) {
        goto L_20a4b8;
    }
    S2 = std::bit_cast<float>(arg0->word_4);
    arg0->word_10 = u32(r1);
    S0 = S0 - S2;
    S1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1))));
    arg0->word_c = u32(std::bit_cast<u32>(S0 / S1));
L_20a4a8:;
    res = r2;
    if (res >> 0x1f != (r2 & (r2 ^ res)) >> 0x1f) {  // (from the original)
        r2 = 0u;
    }
    arg0->word_14 = u32(r2);
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
L_20a4b8:;
    r1 = ~0u;
    arg0->word_4 = u32(std::bit_cast<u32>(S0));
    arg0->word_10 = u32(r1);
    guest::preempt();
    goto L_20a4a8;
}

}  // namespace d_0020a474
GUEST_EXPORT(0x0020a474, d_0020a474::f_0020a474);

// f_0020a64c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020a64c {

struct __attribute__((packed)) Object_0020a64c_0 {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
    u32 word_40;
};
GUEST_OFFSET(Object_0020a64c_0, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_0020a64c_0, word_40, 0x40);  // (from the original)


void f_0020a64c(gptr<Object_0020a64c_0> arg0, u32 r1) {
    u32 r2 = 0;
    if (r1 >= 0xeu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return;
    }
    if (arg0->word_3c == r1) {
        guest::cpu()->r[1] = r1;
        return;
    }
    r2 = arg0->word_40;
    arg0->word_3c = u32(r1);
    r1 = r2 + 1u;
    arg0->word_40 = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0020a64c
GUEST_EXPORT(0x0020a64c, d_0020a64c::f_0020a64c);

// f_0020acb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020acb0 {

struct __attribute__((packed)) Object_0020acb0_0 {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Object_0020acb0_0, word_3c, 0x3c);  // (from the original)


void f_0020acb0(gptr<Object_0020acb0_0> arg0) {
    u32 r1 = 0;
    r1 = 0xbu;  // (from the original)
    arg0->word_3c = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0020acb0
GUEST_EXPORT(0x0020acb0, d_0020acb0::f_0020acb0);

// f_0020acc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020acc0 {

struct __attribute__((packed)) Object_0020acc0_0 {
    u32 word_0;
    u8 unknown_4[0x33];  // (not used here)
    u8 byte_37;
};
GUEST_OFFSET(Object_0020acc0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0020acc0_0, byte_37, 0x37);  // (from the original)


u32 f_0020acc0(gptr<Object_0020acc0_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    r2 = u32(s32(s8(arg0->byte_37)));
    if (r2 == r1) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    arg0->byte_37 = u8(r1);
    r1 = *gptr<u32>(arg0->word_0 + 0x18u);  // (from the original)
    return guest::call_address<u32>(r1, r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_0020acc0
GUEST_EXPORT(0x0020acc0, d_0020acc0::f_0020acc0);

// f_0020ace8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020ace8 {

struct __attribute__((packed)) Object_0020ace8_0 {
    u32 word_0;
    u8 unknown_4[0x32];  // (not used here)
    u8 byte_36;
};
GUEST_OFFSET(Object_0020ace8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0020ace8_0, byte_36, 0x36);  // (from the original)


u32 f_0020ace8(gptr<Object_0020ace8_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    r2 = u32(s32(s8(arg0->byte_36)));
    if (r2 == r1) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    arg0->byte_36 = u8(r1);
    r1 = *gptr<u32>(arg0->word_0 + 0x18u);  // (from the original)
    return guest::call_address<u32>(r1, r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_0020ace8
GUEST_EXPORT(0x0020ace8, d_0020ace8::f_0020ace8);

// f_0020ada8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020ada8 {

struct __attribute__((packed)) Object_0020ada8_0 {
    u8 unknown_0[0x39];  // (not used here)
    u8 byte_39;
};
GUEST_OFFSET(Object_0020ada8_0, byte_39, 0x39);  // (from the original)


void f_0020ada8(gptr<Object_0020ada8_0> arg0, u32 r1) {
    u32 res = 0;
    u32 r2 = 0;
    u32 zf = 0;
    res = r1 + 0xfefff986u;  // (from the original)
    zf = res == 0;
    r1 = res;
    if (!zf) {
        zf = r1 == 1u;
    }
    if (!zf) {
        zf = r1 == 2u;
        if (!zf) {
            zf = r1 == 3u;
        }
        if (!zf) {
            guest::cpu()->r[1] = r1;
            return;
        }
    }
    r2 = 1u;
    r1 = *gptr<u32>(*gptr<u32>(0x94d080u) + 0xcf8u);  // (from the original)
    if (r1 == 0) {
        arg0->byte_39 = u8(r2);
        guest::cpu()->r[1] = r1;
        return;
    }
    r1 = *gptr<u32>(r1 + 4u);
    if (s32(r1) <= s32(0x42200000u)) {  // (from the original)
        r1 = 0u;
        arg0->byte_39 = u8(r1);
        guest::cpu()->r[1] = r1;
        return;
    }
    arg0->byte_39 = u8(r2);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0020ada8
GUEST_EXPORT(0x0020ada8, d_0020ada8::f_0020ada8);

// f_0020ae0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020ae0c {

struct __attribute__((packed)) Object_0020ae0c_0 {
    u32 word_0;
    u8 unknown_4[0x35];  // (not used here)
    u8 byte_39;
};
GUEST_OFFSET(Object_0020ae0c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0020ae0c_0, byte_39, 0x39);  // (from the original)


u32 f_0020ae0c(gptr<Object_0020ae0c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    r2 = u32(s32(s8(arg0->byte_39)));
    if (r2 == r1) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    arg0->byte_39 = u8(r1);
    r1 = *gptr<u32>(arg0->word_0 + 0x18u);  // (from the original)
    return guest::call_address<u32>(r1, r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_0020ae0c
GUEST_EXPORT(0x0020ae0c, d_0020ae0c::f_0020ae0c);

// f_0020ae2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020ae2c {

struct __attribute__((packed)) Object_0020ae2c_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x1c];  // (not used here)
    u32 word_30;
    u8 unknown_34[0x8];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Object_0020ae2c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0020ae2c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0020ae2c_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0020ae2c_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_0020ae2c_0, word_3c, 0x3c);  // (from the original)

struct __attribute__((packed)) Object_0020ae2c_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0020ae2c_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0020ae2c_2, word_4, 0x4);  // (from the original)


void f_0020ae2c(gptr<Object_0020ae2c_0> arg0, u32 r1, gptr<Object_0020ae2c_2> arg2) {
    u32 r3 = 0;
    u32 fpsr = guest::cpu()->fpscr;
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    r3 = arg0->word_3c;
    S0 = std::bit_cast<float>(arg2->word_4);
    S1 = std::bit_cast<float>(*gptr<u32>(0x20ae7cu));  // (from the original)
    S2 = std::bit_cast<float>(*gptr<u32>(0x94d0d8u + ((r3 << 3) - r3 << 2) + 0x18u));  // (from the original)
    arg0->word_8 = u32(arg2->word_0);
    S0 = S0 + S2;
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S1);  // (from the original)
    if (fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        arg0->word_c = u32(std::bit_cast<u32>(S0));
        r1 = *gptr<u32>(r1 + 4u);
        arg0->word_10 = u32(r1);
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return;
    }
    S1 = std::bit_cast<float>(arg0->word_30);
    S0 = S1 * S0;
    arg0->word_c = u32(std::bit_cast<u32>(S0));
    r1 = *gptr<u32>(r1 + 4u);
    arg0->word_10 = u32(r1);
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_0020ae2c
GUEST_EXPORT(0x0020ae2c, d_0020ae2c::f_0020ae2c);

// f_0020aedc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020aedc {

struct __attribute__((packed)) Object_0020aedc_0 {
    u8 unknown_0[0x34];  // (not used here)
    u8 byte_34;
};
GUEST_OFFSET(Object_0020aedc_0, byte_34, 0x34);  // (from the original)

inline constexpr guest::Function<0x001d7b90, u32(u32, u32, u32, u32)> call_001d7b90;  // (from the original)

u32 f_0020aedc(gptr<Object_0020aedc_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = u32(arg0->byte_34);
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r4;
    r0 = *gptr<u32>(0x94d080u) + 0x754u;  // (from the original)
    r0 = call_001d7b90(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 0u;
    *gptr<u8>(r4 + 0x34u) = u8(r0);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0020aedc
GUEST_EXPORT(0x0020aedc, d_0020aedc::f_0020aedc);

// f_0020af18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020af18 {

struct __attribute__((packed)) Object_0020af18_0 {
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
    u8 byte_34;
    u8 byte_35;
    u8 byte_36;
    u8 byte_37;
    u8 byte_38;
    u8 byte_39;
    u8 unknown_3a[0x2];  // (not used here)
    u32 word_3c;
    u32 word_40;
};
GUEST_OFFSET(Object_0020af18_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0020af18_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0020af18_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0020af18_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0020af18_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0020af18_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0020af18_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0020af18_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0020af18_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_0020af18_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_0020af18_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_0020af18_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_0020af18_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_0020af18_0, byte_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_0020af18_0, byte_35, 0x35);  // (from the original)
GUEST_OFFSET(Object_0020af18_0, byte_36, 0x36);  // (from the original)
GUEST_OFFSET(Object_0020af18_0, byte_37, 0x37);  // (from the original)
GUEST_OFFSET(Object_0020af18_0, byte_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_0020af18_0, byte_39, 0x39);  // (from the original)
GUEST_OFFSET(Object_0020af18_0, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_0020af18_0, word_40, 0x40);  // (from the original)


void f_0020af18(gptr<Object_0020af18_0> arg0) {
    u32 r1 = 0;
    u32 r2 = 0;
    float S0 = 0;
    float S1 = 0;
    arg0->word_4 = u32(8u);
    S0 = std::bit_cast<float>(*gptr<u32>(0x20af9cu));  // (from the original)
    arg0->word_0 = u32(0x8ed810u);  // (from the original)
    arg0->word_8 = u32(std::bit_cast<u32>(S0));
    arg0->word_c = u32(std::bit_cast<u32>(S0));
    S1 = std::bit_cast<float>(*gptr<u32>(0x20afa0u));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x20afa4u));  // (from the original)
    arg0->word_10 = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(0x20afa8u))));  // (from the original)
    arg0->word_14 = u32(std::bit_cast<u32>(S1));
    arg0->word_18 = u32(std::bit_cast<u32>(S0));
    arg0->word_1c = u32(std::bit_cast<u32>(S0));
    arg0->word_20 = u32(std::bit_cast<u32>(S0));
    arg0->word_24 = u32(std::bit_cast<u32>(S1));
    r1 = 0u;
    S0 = std::bit_cast<float>(*gptr<u32>(0x20afacu));  // (from the original)
    arg0->word_28 = u32(r1);
    r2 = 1u;
    arg0->word_2c = u32(std::bit_cast<u32>(S0));
    arg0->word_30 = u32(std::bit_cast<u32>(S1));
    arg0->byte_34 = u8(r1);
    arg0->byte_35 = u8(r1);
    arg0->byte_36 = u8(r1);
    arg0->byte_37 = u8(r2);
    arg0->byte_38 = u8(r1);
    arg0->byte_39 = u8(r2);
    arg0->word_40 = u32(r1);
    arg0->word_3c = u32(3u);
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_0020af18
GUEST_EXPORT(0x0020af18, d_0020af18::f_0020af18);

// f_0020afb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020afb8 {

struct __attribute__((packed)) Object_0020afb8_0 {
    u8 unknown_0[0x34];  // (not used here)
    u8 byte_34;
    u8 byte_35;
    u8 unknown_36[0x1];  // (not used here)
    u8 byte_37;
    u8 unknown_38[0x1];  // (not used here)
    u8 byte_39;
    u8 unknown_3a[0x2];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Object_0020afb8_0, byte_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_0020afb8_0, byte_35, 0x35);  // (from the original)
GUEST_OFFSET(Object_0020afb8_0, byte_37, 0x37);  // (from the original)
GUEST_OFFSET(Object_0020afb8_0, byte_39, 0x39);  // (from the original)
GUEST_OFFSET(Object_0020afb8_0, word_3c, 0x3c);  // (from the original)

inline constexpr guest::Function<0x0020a4cc, u32(u32, u32, u32, u32)> call_0020a4cc;  // (from the original)

u32 f_0020afb8(gptr<Object_0020afb8_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    arg0->word_3c = u32(5u);
    r3 = 0u;
    arg0->byte_35 = u8(1u);
    r4 = r0;
    arg0->byte_37 = u8(r3);
    r0 = u32(arg0->byte_34);
    r5 = 0x1000786u;  // (from the original)
    if (r0 == 0) {
        r0 = r4;
        arg0->byte_39 = u8(r3);
        r0 = call_0020a4cc(r0, guest::cpu()->r[1], guest::cpu()->r[2], r3);
        *gptr<u32>(r4 + 0x5cu) = u32(r5);  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
}

}  // namespace d_0020afb8
GUEST_EXPORT(0x0020afb8, d_0020afb8::f_0020afb8);

// f_0020b0d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020b0d4 {

struct __attribute__((packed)) Object_0020b0d4_0 {
    u8 unknown_0[0x34];  // (not used here)
    u8 byte_34;
    u8 unknown_35[0x7];  // (not used here)
    u32 word_3c;
    u8 unknown_40[0x1c];  // (not used here)
    u32 word_5c;
};
GUEST_OFFSET(Object_0020b0d4_0, byte_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_0020b0d4_0, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_0020b0d4_0, word_5c, 0x5c);  // (from the original)

struct __attribute__((packed)) Object_0020b0d4_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0020b0d4_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0020b0d4_2, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x006b4aa8, u32(u32, u32, u32, u32)> call_006b4aa8;  // (from the original)
inline constexpr guest::Function<0x0081fe54, u32(u32, u32, u32, u32)> call_0081fe54;  // (from the original)
inline constexpr guest::Function<0x00820098, u32(u32, u32, u32, u32)> call_00820098;  // (from the original)

u32 f_0020b0d4(gptr<Object_0020b0d4_0> arg0, u32 r1, gptr<Object_0020b0d4_2> arg2, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 r2 = arg2.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    u32 fpsr = guest::cpu()->fpscr;
    float S2 = 0;
    float S3 = 0;
    r4 = r0;
    r13 = r13 - 0x28u;  // (from the original)
    r0 = u32(arg0->byte_34);
    r7 = r1;
    r5 = r2;
    zf = r0 == 0;
    if (!zf) {
        r0 = arg0->word_5c;
        zf = r0 + 1u == 0;
    }
    if (zf) {
        goto L_20b270;
    }
    r1 = arg0->word_3c;
    S1 = std::bit_cast<float>(arg2->word_0);
    r1 = (r1 << 3) - r1;
    S0 = fabsf(S1);
    r0 = 0x94d0d8u + (r1 << 2);  // (from the original)
    S2 = std::bit_cast<float>(*gptr<u32>(r0 + 4u));
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S2);  // (from the original)
    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        goto L_20b270;
    }
    S3 = std::bit_cast<float>(*gptr<u32>(r0 + 0x18u));  // (from the original)
    S0 = fabsf(std::bit_cast<float>(arg2->word_4) + S3);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S2);  // (from the original)
    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        goto L_20b270;
    }
    r8 = 0x94d080u;  // (from the original)
    r0 = *gptr<u32>(r8);
    r1 = u32(*gptr<u8>(r0 + 0xd11u));  // (from the original)
    if (r1 != 0) {
        zf = r1 == 1u;
        if (!zf) {
            zf = r1 == 2u;
        }
        if (zf) {
            goto L_20b18c;
        }
        if (r1 == 3u) {
            goto L_20b1cc;
        }
        goto L_20b264;
    }
    r1 = r7;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_00820098(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    if (u32(*gptr<u8>(r4 + 0x60u)) != 0) {  // (from the original)
        *gptr<u8>(r4 + 0x60u) = u8(0u);  // (from the original)
    }
    goto L_20b264;
L_20b18c:;
    if (u32(*gptr<u8>(r4 + 0x60u)) != 0) {  // (from the original)
        goto L_20b254;
    }
    *gptr<u32>(r4 + 0x64u) = u32(std::bit_cast<u32>(S1));  // (from the original)
    *gptr<u32>(r4 + 0x68u) = u32(*gptr<u32>(r5 + 4u));  // (from the original)
    *gptr<u32>(r4 + 0x6cu) = u32(*gptr<u32>(r5 + 8u));  // (from the original)
    *gptr<u8>(r4 + 0x60u) = u8(1u);  // (from the original)
    r1 = r7;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_00820098(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    goto L_20b264;
L_20b1cc:;
    r1 = *gptr<u32>(r0 + 0xd18u);  // (from the original)
    r6 = u32(s32(r1 + (r1 >> 0x1f)) >> 1);  // (from the original)
    if (s32(*gptr<u32>(r0 + 0xd14u)) >= s32(r6)) {  // (from the original)
        goto L_20b254;
    }
    S0 = std::bit_cast<float>(*gptr<u32>(r4 + 0x64u));  // (from the original)
    r2 = 0u;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_006b4aa8(r0, r1, r2, guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0));
    S0 = std::bit_cast<float>(*gptr<u32>(r4 + 0x68u));  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(r5 + 4u));
    r2 = 0u;
    r1 = *gptr<u32>(*gptr<u32>(r8) + 0xd18u);  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_006b4aa8(r0, r1, r2, guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(S0));
    S1 = std::bit_cast<float>(*gptr<u32>(r5 + 8u));
    S0 = std::bit_cast<float>(*gptr<u32>(r4 + 0x6cu));  // (from the original)
    r2 = 0u;
    r1 = *gptr<u32>(*gptr<u32>(r8) + 0xd18u);  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_006b4aa8(r0, r1, r2, guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0));
    r2 = r13;
    r1 = r7;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_00820098(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    goto L_20b264;
L_20b254:;
    r2 = r4 + 0x64u;  // (from the original)
    r1 = r7;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_00820098(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
L_20b264:;
    r1 = *gptr<u32>(r4 + 0x5cu);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_0081fe54(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
L_20b270:;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0020b0d4
GUEST_EXPORT(0x0020b0d4, d_0020b0d4::f_0020b0d4);

// f_0020b280: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020b280 {

inline constexpr guest::Function<0x0020af18, u32(u32, u32, u32, u32)> call_0020af18;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_0020b280(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    guest::cpu()->r[13] -= 8u;
    guest::cpu()->s[0] = S0;
    r0 = call_0020af18(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r3 = 1u;
    r2 = 4u;
    *gptr<u32>(r0) = u32(0x8f8d88u);  // (from the original)
    r0 = r0 + 0x44u;  // (from the original)
    r1 = 0x131800u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00301d0c(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r1 = 0x1287a8u;  // (from the original)
    r0 = r0 + 4u;
    r3 = 1u;
    r2 = 0x14u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00301d0c(r0, r1, r2, r3);
    *gptr<u32>(r0 + 0x14u) = u32(~0u);  // (from the original)
    *gptr<u32>(r0 - 0x48u) = u32(0x8ed874u);  // (from the original)
    r1 = r0 - 0x48u;  // (from the original)
    *gptr<u8>(r0 + 0x18u) = u8(0u);  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x20b304u));  // (from the original)
    r0 = r0 + 0x1cu;  // (from the original)
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4u) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 8u) = u32(std::bit_cast<u32>(S0));
    r0 = r1;
    *gptr<u32>(r1 + 4u) = u32(5u);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_0020b280
GUEST_EXPORT(0x0020b280, d_0020b280::f_0020b280);

// f_0020b3ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020b3ac {

struct __attribute__((packed)) Object_0020b3ac_0 {
    u8 unknown_0[0x34];  // (not used here)
    u8 byte_34;
    u8 byte_35;
    u8 unknown_36[0x3];  // (not used here)
    u8 byte_39;
    u8 unknown_3a[0x2];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Object_0020b3ac_0, byte_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_0020b3ac_0, byte_35, 0x35);  // (from the original)
GUEST_OFFSET(Object_0020b3ac_0, byte_39, 0x39);  // (from the original)
GUEST_OFFSET(Object_0020b3ac_0, word_3c, 0x3c);  // (from the original)

inline constexpr guest::Function<0x0020a4cc, u32(u32, u32, u32, u32)> call_0020a4cc;  // (from the original)

u32 f_0020b3ac(gptr<Object_0020b3ac_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r3 = 1u;
    arg0->word_3c = u32(6u);
    r4 = r0;
    arg0->byte_35 = u8(r3);
    r0 = u32(arg0->byte_34);
    r5 = 0x1000787u;  // (from the original)
    if (r0 == 0) {
        arg0->byte_39 = u8(0u);
        r0 = r4;
        r0 = call_0020a4cc(r0, guest::cpu()->r[1], guest::cpu()->r[2], r3);
        *gptr<u32>(r4 + 0x5cu) = u32(r5);  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
}

}  // namespace d_0020b3ac
GUEST_EXPORT(0x0020b3ac, d_0020b3ac::f_0020b3ac);

// f_0020b494: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020b494 {

inline constexpr guest::Function<0x0047e100, u32(u32, u32, u32, u32)> call_0047e100;  // (from the original)
inline constexpr guest::Function<0x0047e224, u32(u32, u32, u32, u32)> call_0047e224;  // (from the original)

u32 f_0020b494(u32 r0, float S0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    guest::cpu()->s[0] = S0;
    r0 = call_0047e100(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    S0 = std::bit_cast<float>(*gptr<u32>(0x20b4b0u));  // (from the original)
    guest::cpu()->s[0] = S0;
    return call_0047e224(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0020b494
GUEST_EXPORT(0x0020b494, d_0020b494::f_0020b494);

// f_0020b9b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020b9b0 {

inline constexpr guest::Function<0x002d39a8, u32(u32, u32, u32, u32)> call_002d39a8;  // (from the original)
inline constexpr guest::Function<0x003052f0, u32(u32, u32, u32, u32)> call_003052f0;  // (from the original)
inline constexpr guest::Function<0x0056bb88, u32(u32, u32, u32, u32)> call_0056bb88;  // (from the original)
inline constexpr guest::Function<0x00613e08, u32(u32, u32, u32, u32)> call_00613e08;  // (from the original)
inline constexpr guest::Function<0x006efcdc, u32(u32, u32, u32, u32)> call_006efcdc;  // (from the original)

u32 f_0020b9b0(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00613e08(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r6 = 0u;
    *gptr<u32>(0x1404u + r4) = u32(r6);  // (from the original)
    r0 = r4 + 0x1408u;  // (from the original)
    *gptr<u32>(r0) = u32(r6);
    *gptr<u32>(r0 + 4u) = u32(r6);
    r0 = r4 + 0x1410u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006efcdc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4 + 0x1420u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003052f0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4 + 0x144eu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002d39a8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r5 = r4 + 0x1466u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0056bb88(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r5) = u8(*gptr<u32>(r13 + 4u));
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0056bb88(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r5 + 1u) = u8(u32(s32(*gptr<u32>(r13 + 4u) << 0x10) >> 0x18));  // (from the original)
    r0 = r4 + 0x1468u;  // (from the original)
    *gptr<u16>(r0) = u16(r6);
    *gptr<u8>(r0 + 2u) = u8(r6);
    *gptr<u8>(r0 + 3u) = u8(r6);
    *gptr<u8>(r4 + 0x14aeu) = u8(r6);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0020b9b0
GUEST_EXPORT(0x0020b9b0, d_0020b9b0::f_0020b9b0);

// f_0020bb20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020bb20 {

inline constexpr guest::Function<0x0024ea1c, u32(u32, u32, u32, u32)> call_0024ea1c;  // (from the original)

u32 f_0020bb20() {
    return call_0024ea1c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0020bb20
GUEST_EXPORT(0x0020bb20, d_0020bb20::f_0020bb20);

// f_0020bb24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020bb24 {

inline constexpr guest::Function<0x0024ea1c, u32(u32, u32, u32, u32)> call_0024ea1c;  // (from the original)

u32 f_0020bb24(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_0024ea1c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0020bb24
GUEST_EXPORT(0x0020bb24, d_0020bb24::f_0020bb24);

// f_0020bb3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020bb3c {


u32 f_0020bb3c(u32 r0, u32 r1) {
    if (r1 >= 6u) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r0 + (r1 >> 3);
    r1 = u32(*gptr<u8>(r0 + 0x28u)) & ~lsl_r(1u, r1 & 7u);  // (from the original)
    *gptr<u8>(r0 + 0x28u) = u8(r1);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0020bb3c
GUEST_EXPORT(0x0020bb3c, d_0020bb3c::f_0020bb3c);

// f_0020bb60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020bb60 {

inline constexpr guest::Function<0x0020bd70, u32(u32, u32, u32, u32)> call_0020bd70;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)

u32 f_0020bb60(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 zf = 0;
    guest::cpu()->r[13] -= 8u;
    r4 = r1;
    r1 = 6u + (r4 << 1);
    r2 = 1u;
    r0 = call_0020bd70(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    zf = r0 == 1u;
    r1 = r0;
    r0 = r4 << 1;
    if (zf) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r1 == 2u) {
        r0 = r0 + 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r1 != 3u) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 2u;
    r0 = call_002ff6f8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 + (r4 << 1);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0020bb60
GUEST_EXPORT(0x0020bb60, d_0020bb60::f_0020bb60);

// f_0020bbac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020bbac {

inline constexpr guest::Function<0x0020bd70, u32(u32, u32, u32, u32)> call_0020bd70;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)

u32 f_0020bbac(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r1;
    r5 = r1 << 1;
    r2 = 1u;
    r1 = r5;
    r0 = call_0020bd70(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 1u) {
        if (r0 == 2u) {
            r0 = r5 + 1u;
            goto L_20bbe4;
        }
        if (r0 == 3u) {
            goto L_20bbe8;
        }
    }
    r0 = r5;
L_20bbe4:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_20bbe8:;
    r0 = 2u;
    r0 = call_002ff6f8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 + (r4 << 1);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0020bbac
GUEST_EXPORT(0x0020bbac, d_0020bbac::f_0020bbac);

// f_0020bc68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020bc68 {

inline constexpr guest::Function<0x0020bd70, u32(u32, u32, u32, u32)> call_0020bd70;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)

u32 f_0020bc68(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r1 - 1u;
    r1 = 0x22u + (r4 << 1);  // (from the original)
    r2 = 0u;
    r0 = call_0020bd70(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 1u) {
        r0 = r4 << 1;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r0 == 2u) {
        r0 = (r4 << 1) + 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r0 != 3u) {
        r0 = ~0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 2u;
    r0 = call_002ff6f8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 + (r4 << 1);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0020bc68
GUEST_EXPORT(0x0020bc68, d_0020bc68::f_0020bc68);

// f_0020bcb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020bcb8 {

inline constexpr guest::Function<0x0020bd70, u32(u32, u32, u32, u32)> call_0020bd70;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)

u32 f_0020bcb8(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 zf = 0;
    guest::cpu()->r[13] -= 8u;
    r4 = r1;
    r1 = 0x10u + (r4 << 1);  // (from the original)
    r2 = 1u;
    r0 = call_0020bd70(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    zf = r0 == 1u;
    r1 = r0;
    r0 = r4 << 1;
    if (zf) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r1 == 2u) {
        r0 = r0 + 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r1 != 3u) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 2u;
    r0 = call_002ff6f8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 + (r4 << 1);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0020bcb8
GUEST_EXPORT(0x0020bcb8, d_0020bcb8::f_0020bcb8);

// f_0020bd70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020bd70 {


u32 f_0020bd70(u32 r0, u32 r1, u32 r2) {
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = lsl_r(1u, r1 & 7u);
    r3 = 3u;
    r12 = r0 + (r1 >> 3);
    if (r1 < 0x6cu) {  // (from the original)
        if ((u32(*gptr<u8>(r12 + 0x1au)) & r4) == 0) {  // (from the original)
            goto L_20bda0;
        }
    }
    r3 = 2u;
L_20bda0:;
    r6 = r1 + 1u;
    r5 = lsl_r(1u, r6 & 7u);
    r0 = r0 + (r6 >> 3);
    if (r6 < 0x6cu) {  // (from the original)
        if ((u32(*gptr<u8>(r0 + 0x1au)) & r5) == 0) {  // (from the original)
            goto L_20be10;
        }
    }
    r3 = r3 & 1u;
    if (r2 == 0) {
        goto L_20be10;
    }
    if (r3 != 0) {
        goto L_20be10;
    }
    if (r1 < 0x6cu) {  // (from the original)
        *gptr<u8>(r12 + 0x1au) = u8(u32(*gptr<u8>(r12 + 0x1au)) & ~r4);  // (from the original)
    }
    r1 = r1 + 1u;
    if (r1 < 0x6cu) {  // (from the original)
        r1 = u32(*gptr<u8>(r0 + 0x1au)) & ~r5;  // (from the original)
        *gptr<u8>(r0 + 0x1au) = u8(r1);  // (from the original)
    }
    r3 = 3u;
L_20be10:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r0 = r3 & 3u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0020bd70
GUEST_EXPORT(0x0020bd70, d_0020bd70::f_0020bd70);

// f_0020be1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020be1c {

struct __attribute__((packed)) Object_0020be1c_0 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u16 half_18;
    u32 word_1a;
    u32 word_1e;
    u32 word_22;
    u16 half_26;
    u8 byte_28;
};
GUEST_OFFSET(Object_0020be1c_0, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0020be1c_0, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_0020be1c_0, byte_3, 0x3);  // (from the original)
GUEST_OFFSET(Object_0020be1c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0020be1c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0020be1c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0020be1c_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0020be1c_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0020be1c_0, half_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0020be1c_0, word_1a, 0x1a);  // (from the original)
GUEST_OFFSET(Object_0020be1c_0, word_1e, 0x1e);  // (from the original)
GUEST_OFFSET(Object_0020be1c_0, word_22, 0x22);  // (from the original)
GUEST_OFFSET(Object_0020be1c_0, half_26, 0x26);  // (from the original)
GUEST_OFFSET(Object_0020be1c_0, byte_28, 0x28);  // (from the original)


void f_0020be1c(gptr<Object_0020be1c_0> arg0) {
    u32 r1 = 0;
    r1 = 0u;
    arg0->half_0 = u16(r1);
    arg0->byte_2 = u8(r1);
    arg0->byte_3 = u8(r1);
    arg0->word_4 = u32(r1);
    arg0->word_8 = u32(r1);
    arg0->word_c = u32(r1);
    arg0->word_10 = u32(r1);
    arg0->word_14 = u32(r1);
    arg0->half_18 = u16(r1);
    arg0->word_1a = u32(r1);
    arg0->word_1e = u32(r1);
    arg0->word_22 = u32(r1);
    arg0->half_26 = u16(r1);
    arg0->byte_28 = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0020be1c
GUEST_EXPORT(0x0020be1c, d_0020be1c::f_0020be1c);

// f_0020bec8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020bec8 {

struct __attribute__((packed)) Object_0020bec8_0 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u16 half_18;
    u32 word_1a;
    u32 word_1e;
    u32 word_22;
    u16 half_26;
    u8 byte_28;
};
GUEST_OFFSET(Object_0020bec8_0, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0020bec8_0, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_0020bec8_0, byte_3, 0x3);  // (from the original)
GUEST_OFFSET(Object_0020bec8_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0020bec8_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0020bec8_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0020bec8_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0020bec8_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0020bec8_0, half_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0020bec8_0, word_1a, 0x1a);  // (from the original)
GUEST_OFFSET(Object_0020bec8_0, word_1e, 0x1e);  // (from the original)
GUEST_OFFSET(Object_0020bec8_0, word_22, 0x22);  // (from the original)
GUEST_OFFSET(Object_0020bec8_0, half_26, 0x26);  // (from the original)
GUEST_OFFSET(Object_0020bec8_0, byte_28, 0x28);  // (from the original)


void f_0020bec8(gptr<Object_0020bec8_0> arg0) {
    u32 r1 = 0;
    r1 = 0u;
    arg0->half_0 = u16(r1);
    arg0->byte_2 = u8(r1);
    arg0->byte_3 = u8(r1);
    arg0->word_4 = u32(r1);
    arg0->word_8 = u32(r1);
    arg0->word_c = u32(r1);
    arg0->word_10 = u32(r1);
    arg0->word_14 = u32(r1);
    arg0->half_18 = u16(r1);
    arg0->word_1a = u32(r1);
    arg0->word_1e = u32(r1);
    arg0->word_22 = u32(r1);
    arg0->half_26 = u16(r1);
    arg0->byte_28 = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0020bec8
GUEST_EXPORT(0x0020bec8, d_0020bec8::f_0020bec8);

// f_0020c03c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020c03c {

struct __attribute__((packed)) Object_0020c03c_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 unknown_9[0x5702];  // (not used here)
    u8 byte_570b;
};
GUEST_OFFSET(Object_0020c03c_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0020c03c_0, byte_570b, 0x570b);  // (from the original)


u32 f_0020c03c(gptr<Object_0020c03c_0> arg0, u32 r1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    nf = r1 >> 0x1f;  // (from the original)
    zf = r1 == 0;
    vf = 0u;
    r3 = 0xfu;  // (from the original)
    r2 = r0 + 0x570bu;  // (from the original)
    if (zf) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (zf || nf != vf) {
        goto L_20c0c8;
    }
    res = u32(arg0->byte_570b) << 0x1e;  // (from the original)
    if (!(res >> 0x1f)) {  // (from the original)
        goto L_20c09c;
    }
    r2 = 3u - r1;
    r1 = r0 + 4u;
    res = r2 + u32(arg0->byte_8);
    r2 = res;
    if (!(res >> 0x1f)) {  // (from the original)
        goto L_20c07c;
    }
L_20c074:;
    r2 = 0u;
    goto L_20c100;
L_20c07c:;
    if (s32(r2) <= s32(0xfu)) {  // (from the original)
        goto L_20c08c;
    }
L_20c084:;
    r2 = 0xfu;  // (from the original)
    goto L_20c100;
L_20c08c:;
    r2 = r2 & 0xffu;  // (from the original)
    if (u32(r2 >= 0xfu) && !u32(r2 == 0xfu)) {  // (from the original)
        goto L_20c0f8;
    }
    goto L_20c100;
L_20c09c:;
    r2 = 0u - r1;
    r1 = r0 + 4u;
    res = r2 + u32(*gptr<u8>(r0 + 8u));
    r2 = res;
    if (res >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_20c074;
    }
    res = r2 - 0xfu;  // (from the original)
    if (!u32(res == 0) && res >> 0x1f == ((r2 ^ 0xfu) & (r2 ^ res)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_20c084;
    }
    r2 = r2 & 0xffu;  // (from the original)
    if (u32(r2 >= 0xfu) && !u32(r2 == 0xfu)) {  // (from the original)
        goto L_20c0f8;
    }
    goto L_20c100;
L_20c0c8:;
    res = u32(*gptr<u8>(r2)) << 0x1e;  // (from the original)
    if (!(res >> 0x1f)) {  // (from the original)
        r0 = r0 + 0x5700u;  // (from the original)
        r1 = u32(*gptr<u8>(r0 + 0xbu)) & ~2u;  // (from the original)
        *gptr<u8>(r0 + 0xbu) = u8(r1);  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r0 + 4u;
    res = u32(*gptr<u8>(r0 + 8u)) + 2u;
    r2 = res;
    if (res >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_20c074;
    }
    res = r2 - 0xfu;  // (from the original)
    if (!u32(res == 0) && res >> 0x1f == ((r2 ^ 0xfu) & (r2 ^ res)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_20c084;
    }
    r2 = r2 & 0xffu;  // (from the original)
    if (!u32(r2 >= 0xfu) || u32(r2 == 0xfu)) {  // (from the original)
        goto L_20c100;
    }
L_20c0f8:;
    *gptr<u8>(r1 + 4u) = u8(r3);
    r0 = r0 + 0x5700u;  // (from the original)
    r1 = u32(*gptr<u8>(r0 + 0xbu)) & ~2u;  // (from the original)
    *gptr<u8>(r0 + 0xbu) = u8(r1);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_20c100:;
    *gptr<u8>(r1 + 4u) = u8(r2);
    r0 = r0 + 0x5700u;  // (from the original)
    r1 = u32(*gptr<u8>(r0 + 0xbu)) & ~2u;  // (from the original)
    *gptr<u8>(r0 + 0xbu) = u8(r1);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0020c03c
GUEST_EXPORT(0x0020c03c, d_0020c03c::f_0020c03c);

// f_0020c118: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020c118 {

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)

u32 f_0020c118() {
    u32 r2 = 0;
    r2 = 0x6b88u;  // (from the original)
    return call_002fbb30(guest::cpu()->r[0], guest::cpu()->r[1], r2, guest::cpu()->r[3]);
}

}  // namespace d_0020c118
GUEST_EXPORT(0x0020c118, d_0020c118::f_0020c118);

// f_0020c124: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020c124 {

inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x00312434, u32(u32, u32, u32, u32)> call_00312434;  // (from the original)

u32 f_0020c124(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = 0x64u;  // (from the original)
    r0 = call_002ff6f8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (s32(r0) >= s32(0xau)) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    r2 = 0u;
    r1 = 1u;
    return call_00312434(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_0020c124
GUEST_EXPORT(0x0020c124, d_0020c124::f_0020c124);

// f_0020c158: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020c158 {

inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x00312434, u32(u32, u32, u32, u32)> call_00312434;  // (from the original)

u32 f_0020c158(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = 0x64u;  // (from the original)
    r0 = call_002ff6f8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (s32(r0) >= s32(0xau)) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    r2 = 0u;
    r1 = 1u;
    return call_00312434(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_0020c158
GUEST_EXPORT(0x0020c158, d_0020c158::f_0020c158);

// f_0020cbf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020cbf0 {

struct __attribute__((packed)) Object_0020cbf0_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0020cbf0_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x001e0370, u32(u32, u32, u32, u32)> call_001e0370;  // (from the original)
inline constexpr guest::Function<0x0020c024, u32(u32, u32, u32, u32)> call_0020c024;  // (from the original)
inline constexpr guest::Function<0x0024b97c, u32(u32, u32, u32, u32)> call_0024b97c;  // (from the original)
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x0056bb88, u32(u32, u32, u32, u32)> call_0056bb88;  // (from the original)
inline constexpr guest::Function<0x00582db8, u32(u32, u32, u32, u32)> call_00582db8;  // (from the original)
inline constexpr guest::Function<0x00613e24, u32(u32, u32, u32, u32)> call_00613e24;  // (from the original)
inline constexpr guest::Function<0x006efd24, u32(u32, u32, u32, u32)> call_006efd24;  // (from the original)

u32 f_0020cbf0(gptr<Object_0020cbf0_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r6 = 0u;
    arg0->word_0 = u32(r6);
    r0 = r0 + 0xau;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 - 0x1cu;  // (from the original)
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r4 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r4 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r4 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r4 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r4 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r4 + 0x20u) = u8(1u);  // (from the original)
    r0 = r4 + 0x22u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0020c024(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 - 0x28u;  // (from the original)
    r0 = r0 + 0x546cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00582db8(r0, r1, r2, r3);
    r1 = 0x1df4c4u;  // (from the original)
    r0 = r4 + 0x5540u;  // (from the original)
    r3 = 4u;
    r2 = 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x62u;  // (from the original)
    r5 = r0 + 0x2eu;  // (from the original)
    r4 = r0 - 0x55a6u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0056bb88(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r5) = u8(*gptr<u32>(r13 + 4u));
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0056bb88(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r5 + 1u) = u8(u32(s32(*gptr<u32>(r13 + 4u) << 0x10) >> 0x18));  // (from the original)
    r5 = r4 + 0x55d6u;  // (from the original)
    *gptr<u16>(r5) = u16(r6);
    *gptr<u8>(r5 + 2u) = u8(r6);
    r0 = r4 + 0x55dcu;  // (from the original)
    *gptr<u8>(r5 + 3u) = u8(r6);
    guest::cpu()->r[13] = r13;
    r0 = call_0024b97c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x114u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006efd24(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0 + 0x10u;  // (from the original)
    r1 = 0x34u;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00301444(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
L_20cd50:;
        r1 = r4;
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_001e0370(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(0x12cu));  // (from the original)
    r0 = r5 + 0x34u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00613e24(r0, r1, r2, r3);
    r1 = 0x6b7au;  // (from the original)
    r0 = r0 - 0x5734u;  // (from the original)
    *gptr<u8>(r1 + r0) = u8(r6);
    *gptr<u8>((r1 | u32(s32(r1) >> 5)) + r0) = u8(r6);
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0020cbf0
GUEST_EXPORT(0x0020cbf0, d_0020cbf0::f_0020cbf0);

// f_0020cd9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020cd9c {

struct __attribute__((packed)) Object_0020cd9c_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Object_0020cd9c_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0020cd9c_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_0020cd9c_0, byte_2, 0x2);  // (from the original)


void f_0020cd9c(gptr<Object_0020cd9c_0> arg0, u32 r1) {
    u32 ea = 0;
    u32 r2 = 0;
    r2 = 0xad55d8u;  // (from the original)
    if (r1 < 6u) {
        ea = r1 + (r1 << 1) + r2;
        r1 = ea;
        arg0->byte_0 = u8(u32(*gptr<u8>(ea)));
        arg0->byte_1 = u8(u32(*gptr<u8>(r1 + 1u)));
        r1 = u32(*gptr<u8>(r1 + 2u));
        arg0->byte_2 = u8(r1);
        guest::cpu()->r[1] = r1;
        return;
    }
    arg0->byte_0 = u8(u32(*gptr<u8>(r2)));
    arg0->byte_1 = u8(u32(*gptr<u8>(r2 + 1u)));
    r1 = u32(*gptr<u8>(r2 + 2u));
    arg0->byte_2 = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0020cd9c
GUEST_EXPORT(0x0020cd9c, d_0020cd9c::f_0020cd9c);

// f_0020cde4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020cde4 {

struct __attribute__((packed)) Object_0020cde4_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Object_0020cde4_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0020cde4_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_0020cde4_0, byte_2, 0x2);  // (from the original)


void f_0020cde4(gptr<Object_0020cde4_0> arg0, u32 r1) {
    u32 ea = 0;
    u32 r2 = 0;
    r2 = 0xad5602u;  // (from the original)
    if (r1 < 0x10u) {  // (from the original)
        ea = r1 + (r1 << 1) + r2;
        r1 = ea;
        arg0->byte_0 = u8(u32(*gptr<u8>(ea)));
        arg0->byte_1 = u8(u32(*gptr<u8>(r1 + 1u)));
        r1 = u32(*gptr<u8>(r1 + 2u));
        arg0->byte_2 = u8(r1);
        guest::cpu()->r[1] = r1;
        return;
    }
    arg0->byte_0 = u8(u32(*gptr<u8>(r2)));
    arg0->byte_1 = u8(u32(*gptr<u8>(r2 + 1u)));
    r1 = u32(*gptr<u8>(r2 + 2u));
    arg0->byte_2 = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0020cde4
GUEST_EXPORT(0x0020cde4, d_0020cde4::f_0020cde4);

// f_0020ce2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020ce2c {

struct __attribute__((packed)) Object_0020ce2c_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Object_0020ce2c_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0020ce2c_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_0020ce2c_0, byte_2, 0x2);  // (from the original)


void f_0020ce2c(gptr<Object_0020ce2c_0> arg0, u32 r1) {
    u32 ea = 0;
    u32 r2 = 0;
    r2 = 0xad55eau;  // (from the original)
    if (r1 < 8u) {
        ea = r1 + (r1 << 1) + r2;
        r1 = ea;
        arg0->byte_0 = u8(u32(*gptr<u8>(ea)));
        arg0->byte_1 = u8(u32(*gptr<u8>(r1 + 1u)));
        r1 = u32(*gptr<u8>(r1 + 2u));
        arg0->byte_2 = u8(r1);
        guest::cpu()->r[1] = r1;
        return;
    }
    arg0->byte_0 = u8(u32(*gptr<u8>(r2)));
    arg0->byte_1 = u8(u32(*gptr<u8>(r2 + 1u)));
    r1 = u32(*gptr<u8>(r2 + 2u));
    arg0->byte_2 = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0020ce2c
GUEST_EXPORT(0x0020ce2c, d_0020ce2c::f_0020ce2c);

// f_0020d084: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020d084 {

inline constexpr guest::Function<0x0024e500, u32(u32, u32, u32, u32)> call_0024e500;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> call_00303cdc;  // (from the original)

u32 f_0020d084(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    ea = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = r0 + 0x4650u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0024e500(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r5;
    r0 = r4 + 0x4400u;  // (from the original)
    ea = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r14 = *gptr<u32>(ea + 0xc);  // (from the original)
    r0 = r0 + 0x1fcu;  // (from the original)
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r14);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r4 = r1;
    r5 = r0;
    r6 = r0 + (r4 << 2);
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r6 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r7 = 0u;
    *gptr<u8>(r5 + r4 + 0x20u) = u8(r7);  // (from the original)
    r0 = r5 + (r4 << 3) + 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00303cdc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    ea = r6 + 0x44u;  // (from the original)
    *gptr<u32>(ea) = u32(r7);
    ea = r13;
    r13 = r13 + 0x18;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[8] = r8;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0020d084
GUEST_EXPORT(0x0020d084, d_0020d084::f_0020d084);

// f_0020d104: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020d104 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x0030b654, u32(u32, u32, u32, u32)> call_0030b654;  // (from the original)
inline constexpr guest::Function<0x004e9a78, u32(u32, u32, u32, u32)> call_004e9a78;  // (from the original)
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32, u32)> call_0059e65c;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)

u32 f_0020d104(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
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
    if (r2 >= 4u) {
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
    r5 = r1;
    ea = r13 + 0x30u;  // (from the original)
    r6 = *gptr<u32>(ea);
    r7 = *gptr<u32>(ea + 4);
    r4 = r0 + (r2 << 2);
    r8 = r3;
    r12 = r13 + 4u;
    if (u32(*gptr<u8>(r0 + r2 + 0x20u)) != 0) {  // (from the original)
        r1 = r4;
        r0 = r12;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc934(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    } else {
        r1 = r4 + 0x10u;  // (from the original)
        r0 = r12;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc934(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r9 = 0x7ffeu;  // (from the original)
    r0 = r13 + 8u;
    r1 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r4 + 0x10u;  // (from the original)
    r1 = r0;
    r0 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 8u;
    r10 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != r5) {
        goto L_20d220;
    }
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0030b654(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r3 = r7;
        r2 = 0u;
        r1 = r6;
        r0 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_004e9a78(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        goto L_20d220;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_006a5e34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 == 0) {
        goto L_20d220;
    }
    r1 = r9;
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r1 = r0;
    r3 = r6;
    r2 = r8;
    r0 = r4;
    *gptr<u32>(r13) = u32(r10);
    guest::cpu()->r[13] = r13;
    r0 = call_002fc994(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 1u;
    r1 = r6;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_0059e65c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_20d220:;
    r0 = r13 + 4u;
    r13 = r13 + 0x10u;  // (from the original)
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

}  // namespace d_0020d104
GUEST_EXPORT(0x0020d104, d_0020d104::f_0020d104);

// f_0020d600: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020d600 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)

u32 f_0020d600(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r0 = 3u;
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        if (r0 == 1u) {
            goto L_20d674;
        }
        if (r0 != 2u) {
            r13 = r13 + 0x10;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
        r1 = 0x2767u;  // (from the original)
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_002fcbb0(r0, r1, guest::cpu()->r[2], r3);
        r3 = guest::cpu()->r[3];
        r1 = r0;
        r0 = r4 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], r3);
        r1 = guest::cpu()->r[1];
        r0 = r13;
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = 0x25dau;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r0 = r13;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_20d674:;
    r1 = 0x26ccu;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r0 = r13;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0020d600
GUEST_EXPORT(0x0020d600, d_0020d600::f_0020d600);

// f_0020d71c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020d71c {

inline constexpr guest::Function<0x0014f8a4, u32(u32, u32, u32, u32)> call_0014f8a4;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)

u32 f_0020d71c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r2 >= 0xdu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[9] = r9;
        guest::cpu()->r[13] = r13;
        return r0;
    }
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
    r4 = r2;
    r5 = r1;
    r8 = r3;
    ea = r13 + 0x20u;  // (from the original)
    r6 = *gptr<u32>(ea);
    r7 = *gptr<u32>(ea + 4);
    r0 = r0 + (r4 << 2);
    r1 = r3;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == r5) {
        r1 = r8;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc934(r0, r1, r2, r3);
        r1 = r0;
        r3 = r7;
        r2 = r6;
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_0014f8a4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r0 = r13;
    }
    ea = r13;
    r13 = r13 + 0x20;  // (from the original)
    r4 = *gptr<u32>(ea + 4);
    r5 = *gptr<u32>(ea + 8);
    r6 = *gptr<u32>(ea + 0xc);  // (from the original)
    r7 = *gptr<u32>(ea + 0x10);  // (from the original)
    r8 = *gptr<u32>(ea + 0x14);  // (from the original)
    r9 = *gptr<u32>(ea + 0x18);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[8] = r8;
    guest::cpu()->r[9] = r9;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0020d71c
GUEST_EXPORT(0x0020d71c, d_0020d71c::f_0020d71c);

// f_0020d8a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020d8a4 {

struct __attribute__((packed)) Object_0020d8a4_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(Object_0020d8a4_0, byte_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x0056b550, u32(u32, u32, u32, u32)> call_0056b550;  // (from the original)

u32 f_0020d8a4(gptr<Object_0020d8a4_0> arg0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = 0u;
    arg0->byte_8 = u8(r0);
    r0 = call_002fb378(r0, r1, r2, guest::cpu()->r[3]);
    r1 = *gptr<u32>(r0);
    r2 = 0x7dcu;  // (from the original)
    r0 = *gptr<u32>(r0 + 4u);
    res = r1 - r2;
    zf = res == 0;
    if (zf || res >> 0x1f != ((r1 ^ r2) & (r1 ^ res)) >> 0x1f) {  // (from the original)
        r1 = sxtb(r0);
        zf = r1 == 1u;
    }
    if (!zf) {
        guest::cpu()->r[13] += 8u;
        return call_0056b550(r0, r1, r2, guest::cpu()->r[3]);
    }
    r1 = u32(s32(r0 << 0x10) >> 0x18);  // (from the original)
    res = r1 - 1u;
    nf = res >> 0x1f;  // (from the original)
    vf = ((r1 ^ 1u) & (r1 ^ res)) >> 0x1f;  // (from the original)
    if (u32(res == 0) || nf != vf) {
        r0 = u32(s32(r0) >> 0x18);  // (from the original)
        res = r0 - 6u;
        nf = res >> 0x1f;  // (from the original)
        vf = ((r0 ^ 6u) & (r0 ^ res)) >> 0x1f;  // (from the original)
    }
    if (nf == vf) {
        guest::cpu()->r[13] += 8u;
        return call_0056b550(r0, r1, r2, guest::cpu()->r[3]);
    }
    r0 = u32(*gptr<u8>(r4 + 8u)) | 1u;
    *gptr<u8>(r4 + 8u) = u8(r0);
    guest::cpu()->r[13] += 8u;
    return call_0056b550(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_0020d8a4
GUEST_EXPORT(0x0020d8a4, d_0020d8a4::f_0020d8a4);

// f_0020fb10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020fb10 {

inline constexpr guest::Function<0x002d4d30, u32(u32, u32, u32, u32)> call_002d4d30;  // (from the original)
inline constexpr guest::Function<0x002d5184, u32(u32, u32, u32, u32)> call_002d5184;  // (from the original)
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x002fc288, u32(u32, u32, u32, u32)> call_002fc288;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002fe9c8, u32(u32, u32, u32, u32)> call_002fe9c8;  // (from the original)
inline constexpr guest::Function<0x002fe9dc, u32(u32, u32, u32, u32)> call_002fe9dc;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x003004c4, u32(u32, u32, u32, u32)> call_003004c4;  // (from the original)
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> call_00305f2c;  // (from the original)
inline constexpr guest::Function<0x0030f594, u32(u32, u32, u32, u32)> call_0030f594;  // (from the original)
inline constexpr guest::Function<0x00317efc, u32(u32, u32, u32, u32)> call_00317efc;  // (from the original)
inline constexpr guest::Function<0x005c4e00, u32(u32, u32, u32, u32)> call_005c4e00;  // (from the original)
inline constexpr guest::Function<0x005dc9d4, u32(u32, u32, u32, u32)> call_005dc9d4;  // (from the original)
inline constexpr guest::Function<0x00700198, u32(u32, u32, u32, u32)> call_00700198;  // (from the original)
inline constexpr guest::Function<0x0072031c, u32(u32, u32, u32, u32)> call_0072031c;  // (from the original)
inline constexpr guest::Function<0x007203f0, u32(u32, u32, u32, u32)> call_007203f0;  // (from the original)

u32 f_0020fb10(u32 r0, u32 r1, u32 r2, u32 r3) {
    u64 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x300u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005c4e00(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_00317efc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_0072031c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_0030f594(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0u;
    if (r0 == 0) {
        r0 = r7;
        guest::cpu()->r[13] = r13;
        r0 = call_0072031c(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        r1 = r0;
        r2 = 0u;
        r0 = r4 + 0x7cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_005dc9d4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r7;
        guest::cpu()->r[13] = r13;
        r0 = call_0072031c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r0;
        r0 = r4 + 0x130u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        *gptr<u8>(r4 + 0x138u) = u8(r5);  // (from the original)
    }
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_007203f0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_0030f594(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r0 = r7;
        guest::cpu()->r[13] = r13;
        r0 = call_007203f0(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        r1 = r0;
        r2 = 0u;
        r0 = r4 + 0x7cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_005dc9d4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r7;
        guest::cpu()->r[13] = r13;
        r0 = call_007203f0(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r0;
        r0 = r4 + 0x130u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        *gptr<u8>(r4 + 0x138u) = u8(r5);  // (from the original)
    }
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00700198(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00700198(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = u32(*gptr<u16>(r0 + 2u));
    res = u64(0xcccccccdu) * (u32(*gptr<u16>(r4 + 4u)) + r2);  // (from the original)
    r1 = u32(res);
    r0 = u32(res >> 0x20) >> 3;  // (from the original)
    r4 = r0 + 0x1eu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00305f2c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 3u) {
        goto L_20fc34;
    }
    if (*gptr<u32>(0xaaf14cu) == 0) {  // (from the original)
        goto L_20fc34;
    }
    r0 = u32(*gptr<u8>(0x953f68u));  // (from the original)
    if (r0 == 6u) {
        r4 = r4 + 0x32u;  // (from the original)
        goto L_20fc38;
    }
    if (r0 == 7u) {
        r4 = r4 - 0x14u;  // (from the original)
        goto L_20fc38;
    }
L_20fc34:;
    r4 = r4 + 0xau;  // (from the original)
L_20fc38:;
    r5 = 1u;
    r6 = r5;
    r0 = 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (s32(r0) < s32(r4)) {
        r5 = 0x36u;  // (from the original)
    }
    r0 = 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (s32(r0) < s32(r4)) {
        r6 = 0x36u;  // (from the original)
    }
    r0 = r13 + 0x2e8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc288(r0, r1, r2, r3);
    r3 = 0u;
    r2 = r5;
    r1 = 3u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe9c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
L_20fc8c:;
    guest::cpu()->r[13] = r13;
    r0 = call_005c4e00(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4 & 0xffu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00317efc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    r0 = u32(*gptr<u8>(r0 + 0x1eu));  // (from the original)
    if (r0 < 2u) {
        goto L_20fcec;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0072031c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fcaf4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_20fcec;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0072031c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe9dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_20fcec:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(6u)) {
        guest::preempt();
        goto L_20fc8c;
    }
    r2 = r13;
    r1 = 1u;
    r0 = r13 + 0x2e8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003004c4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x2e8u;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002d4d30(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 0x2e8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc288(r0, r1, r2, r3);
    r3 = 0u;
    r2 = r6;
    r1 = 4u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe9c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
L_20fd5c:;
    guest::cpu()->r[13] = r13;
    r0 = call_005c4e00(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4 & 0xffu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00317efc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    r0 = u32(*gptr<u8>(r0 + 0x1eu));  // (from the original)
    if (r0 < 2u) {
        goto L_20fdbc;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_007203f0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fcaf4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_20fdbc;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_007203f0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe9dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_20fdbc:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(6u)) {
        guest::preempt();
        goto L_20fd5c;
    }
    r2 = r13;
    r1 = 1u;
    r0 = r13 + 0x2e8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003004c4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x2e8u;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002d5184(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r13 + 0x2e8u;  // (from the original)
    r13 = r13 + 0x300u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0020fb10
GUEST_EXPORT(0x0020fb10, d_0020fb10::f_0020fb10);
