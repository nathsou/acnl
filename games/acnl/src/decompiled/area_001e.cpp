// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_001e00c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e00c8 {

inline constexpr guest::Function<0x001df69c, u32(u32, u32, u32, u32)> call_001df69c;  // (from the original)
inline constexpr guest::Function<0x00779548, u32(u32, u32, u32, u32)> call_00779548;  // (from the original)

u32 f_001e00c8(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_00779548(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4;
    r0 = call_001df69c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_001e00c8
GUEST_EXPORT(0x001e00c8, d_001e00c8::f_001e00c8);

// f_001e0220: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e0220 {

inline constexpr guest::Function<0x003506c8, u32(u32, u32, u32, u32)> call_003506c8;  // (from the original)

u32 f_001e0220(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = 0x863u;  // (from the original)
    r0 = call_003506c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r4 + 8u) = u32(r0);
    *gptr<u32>(r4 + 4u) = u32(r1);
    r0 = u32(*gptr<u16>(r4 + 0x22u)) | 1u;  // (from the original)
    *gptr<u16>(r4 + 0x22u) = u16(r0);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_001e0220
GUEST_EXPORT(0x001e0220, d_001e0220::f_001e0220);

// f_001e025c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e025c {

inline constexpr guest::Function<0x001e0220, u32(u32, u32, u32, u32)> call_001e0220;  // (from the original)
inline constexpr guest::Function<0x002fb918, u32(u32, u32, u32, u32)> call_002fb918;  // (from the original)

u32 f_001e025c(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    if (r0 != 0) {
        r0 = call_002fb918(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        guest::cpu()->r[13] += 8u;
        return call_001e0220(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0 = call_002fb918(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    r1 = 0u;
    *gptr<u32>(r0 + 4u) = u32(r1);
    *gptr<u32>(r0 + 8u) = u32(r1);
    r1 = u32(*gptr<u16>(r0 + 0x22u)) & ~1u;  // (from the original)
    *gptr<u16>(r0 + 0x22u) = u16(r1);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001e025c
GUEST_EXPORT(0x001e025c, d_001e025c::f_001e025c);

// f_001e02b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e02b4 {

inline constexpr guest::Function<0x001e02a4, u32(u32, u32, u32, u32)> call_001e02a4;  // (from the original)
inline constexpr guest::Function<0x002fb918, u32(u32, u32, u32, u32)> call_002fb918;  // (from the original)

u32 f_001e02b4(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    if (r0 != 0) {
        r0 = call_002fb918(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        guest::cpu()->r[13] += 8u;
        return call_001e02a4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0 = call_002fb918(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    r1 = u32(*gptr<u16>(r0 + 0x22u)) & ~0x100u;  // (from the original)
    *gptr<u16>(r0 + 0x22u) = u16(r1);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001e02b4
GUEST_EXPORT(0x001e02b4, d_001e02b4::f_001e02b4);

// f_001e02f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e02f0 {

struct __attribute__((packed)) Object_001e02f0_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_001e02f0_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001e02f0_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0027a48c, u32(u32, u32, u32, u32)> call_0027a48c;  // (from the original)

u32 f_001e02f0(gptr<Object_001e02f0_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r5 = 0u;
    r4 = r0;
    arg0->word_4 = u32(r5);
    ea = r0 + 8u;
    arg0->word_8 = u32(r5);
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0027a48c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u16>(r4 + 0x22u) = u16(r5);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001e02f0
GUEST_EXPORT(0x001e02f0, d_001e02f0::f_001e02f0);

// f_001e0318: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e0318 {

struct __attribute__((packed)) Object_001e0318_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x16];  // (not used here)
    u16 half_22;
};
GUEST_OFFSET(Object_001e0318_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001e0318_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001e0318_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_001e0318_0, half_22, 0x22);  // (from the original)

inline constexpr guest::Function<0x0027a48c, u32(u32, u32, u32, u32)> call_0027a48c;  // (from the original)

u32 f_001e0318(gptr<Object_001e0318_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r5 = 0u;
    arg0->word_0 = u32(r5);
    arg0->word_4 = u32(r5);
    ea = r0 + 8u;
    arg0->word_8 = u32(r5);
    r0 = ea + 4u;
    arg0->half_22 = u16(r5);
    arg0->word_4 = u32(r5);
    r4 = r0 - 0xcu;  // (from the original)
    arg0->word_8 = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_0027a48c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4;
    *gptr<u16>(r4 + 0x22u) = u16(r5);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001e0318
GUEST_EXPORT(0x001e0318, d_001e0318::f_001e0318);

// f_001e0354: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e0354 {


u32 f_001e0354(u32 r0, u32 r1, u32 r2) {
    r0 = r0 + (r2 << 4);
    r2 = u32(*gptr<u8>(r0 + r1));
    if (r2 < 0xffu) {  // (from the original)
        *gptr<u8>(r0 + r1) = u8(r2 + 1u);
    }
    return r0;
}

}  // namespace d_001e0354
GUEST_EXPORT(0x001e0354, d_001e0354::f_001e0354);

// f_001e17fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e17fc {

struct __attribute__((packed)) Object_001e17fc_0 {
    u8 unknown_0[0x18];  // (not used here)
    u8 byte_18;
    u8 byte_19;
};
GUEST_OFFSET(Object_001e17fc_0, byte_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_001e17fc_0, byte_19, 0x19);  // (from the original)


void f_001e17fc(gptr<Object_001e17fc_0> arg0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    r3 = u32(arg0->byte_18);
    r2 = (r3 >> 5) + ((u32(arg0->byte_19) & 1u) << 3) + r1;
    if (!u32(r2 >= 0xeu) || u32(r2 == 0xeu)) {  // (from the original)
        r1 = u32(arg0->byte_19) & ~1u | (r2 & 8u) >> 3;
        arg0->byte_18 = u8(r3 & ~0xe0u | r2 << 5);  // (from the original)
        arg0->byte_19 = u8(r1);
        guest::cpu()->r[1] = r1;
        return;
    }
    nf = r1 >> 0x1f;  // (from the original)
    zf = r1 == 0;
    vf = 0u;
    if (!zf && nf == vf) {
        r2 = 0xeu;  // (from the original)
    }
    if (zf || nf != vf) {
        r2 = 0u;
    }
    r1 = u32(arg0->byte_19) & ~1u | (r2 & 8u) >> 3;
    arg0->byte_18 = u8(r3 & ~0xe0u | r2 << 5);  // (from the original)
    arg0->byte_19 = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_001e17fc
GUEST_EXPORT(0x001e17fc, d_001e17fc::f_001e17fc);

// f_001e18ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e18ac {

struct __attribute__((packed)) Object_001e18ac_0 {
    u8 unknown_0[0x17];  // (not used here)
    u8 byte_17;
    u8 byte_18;
};
GUEST_OFFSET(Object_001e18ac_0, byte_17, 0x17);  // (from the original)
GUEST_OFFSET(Object_001e18ac_0, byte_18, 0x18);  // (from the original)


void f_001e18ac(gptr<Object_001e18ac_0> arg0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    r3 = u32(arg0->byte_17);
    r2 = (r3 >> 7) + ((u32(arg0->byte_18) & 7u) << 1) + r1;
    if (!u32(r2 >= 0xfu) || u32(r2 == 0xfu)) {  // (from the original)
        r1 = u32(arg0->byte_18) & ~7u | (r2 & 0xeu) >> 1;  // (from the original)
        arg0->byte_17 = u8(r3 & ~0x80u | r2 << 7);  // (from the original)
        arg0->byte_18 = u8(r1);
        guest::cpu()->r[1] = r1;
        return;
    }
    nf = r1 >> 0x1f;  // (from the original)
    zf = r1 == 0;
    vf = 0u;
    if (!zf && nf == vf) {
        r2 = 0xfu;  // (from the original)
    }
    if (zf || nf != vf) {
        r2 = 0u;
    }
    r1 = u32(arg0->byte_18) & ~7u | (r2 & 0xeu) >> 1;  // (from the original)
    arg0->byte_17 = u8(r3 & ~0x80u | r2 << 7);  // (from the original)
    arg0->byte_18 = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_001e18ac
GUEST_EXPORT(0x001e18ac, d_001e18ac::f_001e18ac);

// f_001e1b84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e1b84 {

struct __attribute__((packed)) Object_001e1b84_0 {
    u8 unknown_0[0x11];  // (not used here)
    u8 byte_11;
};
GUEST_OFFSET(Object_001e1b84_0, byte_11, 0x11);  // (from the original)


void f_001e1b84(gptr<Object_001e1b84_0> arg0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    r3 = u32(arg0->byte_11);
    r2 = r1 + (r3 >> 4);
    if (!u32(r2 >= 0xeu) || u32(r2 == 0xeu)) {  // (from the original)
        r1 = r3 & ~0xf0u | r2 << 4;  // (from the original)
        arg0->byte_11 = u8(r1);
        guest::cpu()->r[1] = r1;
        return;
    }
    nf = r1 >> 0x1f;  // (from the original)
    zf = r1 == 0;
    vf = 0u;
    if (!zf && nf == vf) {
        r2 = 0xeu;  // (from the original)
    }
    if (zf || nf != vf) {
        r2 = 0u;
    }
    r1 = r3 & ~0xf0u | r2 << 4;  // (from the original)
    arg0->byte_11 = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_001e1b84
GUEST_EXPORT(0x001e1b84, d_001e1b84::f_001e1b84);

// f_001e1bb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e1bb0 {

struct __attribute__((packed)) Object_001e1bb0_0 {
    u8 unknown_0[0x1];  // (not used here)
    u8 byte_1;
};
GUEST_OFFSET(Object_001e1bb0_0, byte_1, 0x1);  // (from the original)


void f_001e1bb0(gptr<Object_001e1bb0_0> arg0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    r3 = u32(arg0->byte_1);
    r2 = r1 + (r3 >> 3);
    if (!u32(r2 >= 0x1fu) || u32(r2 == 0x1fu)) {  // (from the original)
        r1 = r3 & ~0xf8u | r2 << 3;  // (from the original)
        arg0->byte_1 = u8(r1);
        guest::cpu()->r[1] = r1;
        return;
    }
    nf = r1 >> 0x1f;  // (from the original)
    zf = r1 == 0;
    vf = 0u;
    if (!zf && nf == vf) {
        r2 = 0x1fu;  // (from the original)
    }
    if (zf || nf != vf) {
        r2 = 0u;
    }
    r1 = r3 & ~0xf8u | r2 << 3;  // (from the original)
    arg0->byte_1 = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_001e1bb0
GUEST_EXPORT(0x001e1bb0, d_001e1bb0::f_001e1bb0);

// f_001e1bf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e1bf4 {

struct __attribute__((packed)) Object_001e1bf4_0 {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
};
GUEST_OFFSET(Object_001e1bf4_0, byte_10, 0x10);  // (from the original)


void f_001e1bf4(gptr<Object_001e1bf4_0> arg0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    r3 = u32(arg0->byte_10);
    r2 = r1 + (r3 << 0x19 >> 0x1c);  // (from the original)
    if (!u32(r2 >= 0xau) || u32(r2 == 0xau)) {  // (from the original)
        r1 = r3 & ~0x78u | (r2 & 0xfu) << 3;  // (from the original)
        arg0->byte_10 = u8(r1);
        guest::cpu()->r[1] = r1;
        return;
    }
    nf = r1 >> 0x1f;  // (from the original)
    zf = r1 == 0;
    vf = 0u;
    if (!zf && nf == vf) {
        r2 = 0xau;  // (from the original)
    }
    if (zf || nf != vf) {
        r2 = 0u;
    }
    r1 = r3 & ~0x78u | (r2 & 0xfu) << 3;  // (from the original)
    arg0->byte_10 = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_001e1bf4
GUEST_EXPORT(0x001e1bf4, d_001e1bf4::f_001e1bf4);

// f_001e1c28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e1c28 {

struct __attribute__((packed)) Object_001e1c28_0 {
    u8 unknown_0[0xa];  // (not used here)
    u8 byte_a;
};
GUEST_OFFSET(Object_001e1c28_0, byte_a, 0xa);  // (from the original)


void f_001e1c28(gptr<Object_001e1c28_0> arg0, u32 r1) {
    r1 = u32(arg0->byte_a) & ~0x3cu | (r1 & 0xfu) << 2;  // (from the original)
    arg0->byte_a = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_001e1c28
GUEST_EXPORT(0x001e1c28, d_001e1c28::f_001e1c28);

// f_001e1c58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e1c58 {

struct __attribute__((packed)) Object_001e1c58_0 {
    u8 unknown_0[0x25];  // (not used here)
    u8 byte_25;
};
GUEST_OFFSET(Object_001e1c58_0, byte_25, 0x25);  // (from the original)


void f_001e1c58(gptr<Object_001e1c58_0> arg0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    r3 = u32(arg0->byte_25);
    r2 = r1 + (r3 >> 5);
    if (!u32(r2 >= 7u) || u32(r2 == 7u)) {
        r1 = r3 & ~0xe0u | r2 << 5;  // (from the original)
        arg0->byte_25 = u8(r1);
        guest::cpu()->r[1] = r1;
        return;
    }
    nf = r1 >> 0x1f;  // (from the original)
    zf = r1 == 0;
    vf = 0u;
    if (!zf && nf == vf) {
        r2 = 7u;
    }
    if (zf || nf != vf) {
        r2 = 0u;
    }
    r1 = r3 & ~0xe0u | r2 << 5;  // (from the original)
    arg0->byte_25 = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_001e1c58
GUEST_EXPORT(0x001e1c58, d_001e1c58::f_001e1c58);

// f_001e4214: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e4214 {

inline constexpr guest::Function<0x001e4294, u32(u32, u32, u32, u32)> call_001e4294;  // (from the original)
inline constexpr guest::Function<0x002fb338, u32(u32, u32, u32, u32)> call_002fb338;  // (from the original)
inline constexpr guest::Function<0x007595bc, u32(u32, u32, u32, u32)> call_007595bc;  // (from the original)

u32 f_001e4214(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    *gptr<u32>(ea + 0xc) = u32(r3);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r4);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r14);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r0 = r0 + 0xc800u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb338(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_1e4278;
    }
    r1 = r13 + 4u;
    r0 = r4 + 0xc800u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007595bc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 + 1u == 0) {
        goto L_1e4278;
    }
    r1 = r13 + 4u;
    r0 = r4 + 0xc808u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007595bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    res = r0;
    if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r0 = 0u;
        goto L_1e4270;
    }
    r0 = r4;
    ea = r13 + 4u;
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    r3 = *gptr<u32>(ea + 8);
    guest::cpu()->r[13] = r13;
    r0 = call_001e4294(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
L_1e4270:;
    r13 = r13 + 0x10u;  // (from the original)
    ea = r13;
    r13 = r13 + 8;
    r4 = *gptr<u32>(ea);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[13] = r13;
    return r0;
L_1e4278:;
    r0 = r4;
    ea = r13 + 4u;
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    r3 = *gptr<u32>(ea + 8);
    guest::cpu()->r[13] = r13;
    r0 = call_001e4294(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    r0 = 0u;
    ea = r13;
    r13 = r13 + 8;
    r4 = *gptr<u32>(ea);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001e4214
GUEST_EXPORT(0x001e4214, d_001e4214::f_001e4214);

// f_001e4294: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e4294 {

inline constexpr guest::Function<0x003014b4, u32(u32, u32, u32, u32)> call_003014b4;  // (from the original)
inline constexpr guest::Function<0x0056cbe8, u32(u32, u32, u32, u32)> call_0056cbe8;  // (from the original)
inline constexpr guest::Function<0x0056cce4, u32(u32, u32, u32, u32)> call_0056cce4;  // (from the original)
inline constexpr guest::Function<0x0056ce84, u32(u32, u32, u32, u32)> call_0056ce84;  // (from the original)
inline constexpr guest::Function<0x0056cedc, u32(u32, u32, u32, u32)> call_0056cedc;  // (from the original)
inline constexpr guest::Function<0x005cddb4, u32(u32, u32, u32, u32)> call_005cddb4;  // (from the original)

u32 f_001e4294(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    *gptr<u32>(ea + 0xc) = u32(r3);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r4);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r14);  // (from the original)
    r13 = r13 - 0x28u;  // (from the original)
    r4 = r0;
    r1 = r13 + 0x14u;  // (from the original)
    r0 = r0 + 0xc800u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005cddb4(r0, r1, r2, r3);
    r3 = r13 + 0x14u;  // (from the original)
    r1 = *gptr<u32>(r3 + 4);
    r2 = *gptr<u32>(r3 + 8);
    *gptr<u32>(r13) = u32(*gptr<u32>(r3));
    *gptr<u32>(r13 + 4) = u32(r1);
    *gptr<u32>(r13 + 8) = u32(r2);
    r0 = u32(s32(s8(*gptr<u8>(r13 + 7u))));
    if (s32(r0) < s32(9u)) {
        r1 = 9u;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_0056cce4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        goto L_1e430c;
    }
    if (s32(r0) < s32(0x11u)) {  // (from the original)
        r1 = 0x11u;  // (from the original)
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_0056cce4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        goto L_1e430c;
    }
    r1 = 9u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0056cce4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 1u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_003014b4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_1e430c:;
    r1 = 0u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0056ce84(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0056cedc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0056cbe8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13;
    r0 = r4 + 0xc808u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005cddb4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    ea = r13;
    r13 = r13 + 8;
    r4 = *gptr<u32>(ea);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001e4294
GUEST_EXPORT(0x001e4294, d_001e4294::f_001e4294);

// f_001e4348: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e4348 {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00311c70, u32(u32, u32, u32, u32)> call_00311c70;  // (from the original)

u32 f_001e4348(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r2;
    r5 = r0 + (r1 + (r1 << 2) << 7);
    r2 = 0x31u;  // (from the original)
    r1 = r4;
    r0 = r5;
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x31u;  // (from the original)
    r1 = r4 + 0x34u;  // (from the original)
    r0 = r5 + 0x34u;  // (from the original)
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x42u;  // (from the original)
    r1 = r4 + 0x68u;  // (from the original)
    r0 = r5 + 0x68u;  // (from the original)
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x182u;  // (from the original)
    r1 = r4 + 0xaau;  // (from the original)
    r0 = r5 + 0xaau;  // (from the original)
    r0 = call_002f8574(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x42u;  // (from the original)
    r1 = r4 + 0x22cu;  // (from the original)
    r0 = r5 + 0x22cu;  // (from the original)
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r4 + 0x274u;  // (from the original)
    *gptr<u8>(r5 + 0x26eu) = u8(u32(*gptr<u8>(r4 + 0x26eu)));  // (from the original)
    *gptr<u8>(r5 + 0x26fu) = u8(u32(*gptr<u8>(r4 + 0x26fu)));  // (from the original)
    *gptr<u8>(r5 + 0x270u) = u8(u32(*gptr<u8>(r4 + 0x270u)));  // (from the original)
    *gptr<u8>(r5 + 0x271u) = u8(u32(*gptr<u8>(r4 + 0x271u)));  // (from the original)
    *gptr<u8>(r5 + 0x272u) = u8(u32(*gptr<u8>(r4 + 0x272u)));  // (from the original)
    r0 = r5 + 0x274u;  // (from the original)
    r0 = call_002fc8e8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r4 + 0x278u;  // (from the original)
    r0 = r5 + 0x278u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_00311c70(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_001e4348
GUEST_EXPORT(0x001e4348, d_001e4348::f_001e4348);

// f_001e4524: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e4524 {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x003035a4, u32(u32, u32, u32, u32)> call_003035a4;  // (from the original)

u32 f_001e4524(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r1;
    r5 = r0;
    if (r1 == 0) {
        goto L_1e4568;
    }
    if (r4 != 1u) {
        goto L_1e4568;
    }
    r0 = call_002fae84(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r0 = r0 + 0x6214fu;  // (from the original)
    r1 = u32(*gptr<u8>(r0 + 3u)) | 0x20u;  // (from the original)
    *gptr<u8>(r0 + 3u) = u8(r1);
    r0 = call_002fae84(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x7170cu;  // (from the original)
    r1 = 6u;
    r0 = r0 + r2;
    r0 = call_003035a4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_1e4568:;
    *gptr<u8>(r5) = u8(r4);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001e4524
GUEST_EXPORT(0x001e4524, d_001e4524::f_001e4524);

// f_001e4578: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e4578 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x00303acc, u32(u32, u32, u32, u32)> call_00303acc;  // (from the original)
inline constexpr guest::Function<0x0030b654, u32(u32, u32, u32, u32)> call_0030b654;  // (from the original)
inline constexpr guest::Function<0x004e9a78, u32(u32, u32, u32, u32)> call_004e9a78;  // (from the original)
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32, u32)> call_0059e65c;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)

u32 f_001e4578(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r2 >= 0x12u) {  // (from the original)
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
    r4 = r0 + r2;
    ea = r13 + 0x30u;  // (from the original)
    r7 = *gptr<u32>(ea);
    r8 = *gptr<u32>(ea + 4);
    r9 = r3;
    r1 = u32(*gptr<u8>(r4 + 0x4au));  // (from the original)
    r10 = 0x2084u;  // (from the original)
    r6 = r13 + 4u;
    r0 = r0 + (r2 << 2);
    if (r1 != 0) {
        r0 = r0 + 2u;
        guest::cpu()->r[13] = r13;
        r0 = call_00303acc(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_1e45ec;
        }
        r1 = r10 + 3u;
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_002fcbb0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        goto L_1e45f8;
    }
    r1 = r0 + 2u;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    goto L_1e45f8;
L_1e45ec:;
    r1 = r10;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_1e45f8:;
    if (u32(*gptr<u8>(r4 + 0x4au)) == 0) {  // (from the original)
        r0 = 1u;
        *gptr<u8>(r4 + 0x4au) = u8(r0);  // (from the original)
    } else {
        goto L_1e46d4;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != r5) {
        goto L_1e46d4;
    }
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0030b654(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r0 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_00303acc(r0, r1, r2, r3);
        r3 = r8;
        if (r0 != 0) {
            r2 = 4u;
            r1 = r7;
            r0 = r9;
            guest::cpu()->r[13] = r13;
            r0 = call_004e9a78(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            goto L_1e46d4;
        }
        r2 = 3u;
        r1 = r7;
        r0 = r9;
        guest::cpu()->r[13] = r13;
        r0 = call_004e9a78(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        goto L_1e46d4;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_006a5e34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 == 0) {
        goto L_1e46d4;
    }
    r1 = r10;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(0u);
    r1 = r0;
    r3 = r7;
    r2 = r9;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc994(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 1u;
    r1 = r7;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_0059e65c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_1e46d4:;
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

}  // namespace d_001e4578
GUEST_EXPORT(0x001e4578, d_001e4578::f_001e4578);

// f_001e46e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e46e8 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x00303acc, u32(u32, u32, u32, u32)> call_00303acc;  // (from the original)
inline constexpr guest::Function<0x0030b654, u32(u32, u32, u32, u32)> call_0030b654;  // (from the original)
inline constexpr guest::Function<0x004e9a78, u32(u32, u32, u32, u32)> call_004e9a78;  // (from the original)
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32, u32)> call_0059e65c;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)

u32 f_001e46e8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r2 >= 6u) {
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
    ea = r13 - 0x1c;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r14);  // (from the original)
    r13 = r13 - 0x28u;  // (from the original)
    r4 = r0 + r2;
    r5 = r1;
    ea = r13 + 0x28u;  // (from the original)
    r6 = *gptr<u32>(ea);
    r7 = *gptr<u32>(ea + 4);
    r9 = 0x2083u;  // (from the original)
    r8 = r3;
    r3 = r13 + 4u;
    r12 = r2;
    if (u32(*gptr<u8>(r4 + 0x2au)) != 0) {  // (from the original)
        r1 = r9;
        r0 = r3;
        guest::cpu()->r[13] = r13;
        r0 = call_002fcbb0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    } else {
        r1 = r0 + (r12 << 2) + 0x12u;  // (from the original)
        r0 = r3;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc934(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    if (u32(*gptr<u8>(r4 + 0x2au)) == 0) {  // (from the original)
        r0 = 1u;
        *gptr<u8>(r4 + 0x2au) = u8(r0);  // (from the original)
    } else {
        goto L_1e481c;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != r5) {
        goto L_1e481c;
    }
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0030b654(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r0 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_00303acc(r0, r1, r2, r3);
        r3 = r7;
        if (r0 != 0) {
            r2 = 2u;
            r1 = r6;
            r0 = r8;
            guest::cpu()->r[13] = r13;
            r0 = call_004e9a78(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            goto L_1e481c;
        }
        r2 = 1u;
        r1 = r6;
        r0 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_004e9a78(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        goto L_1e481c;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_006a5e34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 == 0) {
        goto L_1e481c;
    }
    r1 = r9;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(0u);
    r1 = r0;
    r3 = r6;
    r2 = r8;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc994(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 1u;
    r1 = r6;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_0059e65c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_1e481c:;
    r0 = r13 + 4u;
    r13 = r13 + 0xcu;  // (from the original)
    ea = r13;
    r13 = r13 + 0x1c;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    r9 = *gptr<u32>(ea + 0x14);  // (from the original)
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

}  // namespace d_001e46e8
GUEST_EXPORT(0x001e46e8, d_001e46e8::f_001e46e8);

// f_001e546c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e546c {

inline constexpr guest::Function<0x001e51f0, u32(u32, u32, u32, u32)> call_001e51f0;  // (from the original)
inline constexpr guest::Function<0x001e5600, u32(u32, u32, u32, u32)> call_001e5600;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb338, u32(u32, u32, u32, u32)> call_002fb338;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x00300650, u32(u32, u32, u32, u32)> call_00300650;  // (from the original)
inline constexpr guest::Function<0x003036dc, u32(u32, u32, u32, u32)> call_003036dc;  // (from the original)
inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> call_00303cdc;  // (from the original)
inline constexpr guest::Function<0x003081b4, u32(u32, u32, u32, u32)> call_003081b4;  // (from the original)
inline constexpr guest::Function<0x00314cec, u32(u32, u32, u32, u32)> call_00314cec;  // (from the original)
inline constexpr guest::Function<0x005cddb4, u32(u32, u32, u32, u32)> call_005cddb4;  // (from the original)
inline constexpr guest::Function<0x005cde64, u32(u32, u32, u32, u32)> call_005cde64;  // (from the original)
inline constexpr guest::Function<0x007111b4, u32(u32, u32, u32, u32)> call_007111b4;  // (from the original)

u32 f_001e546c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x30u;  // (from the original)
    r4 = r0;
    r5 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_001e51f0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r5 == 0) {
        goto L_1e55f4;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x6214fu;  // (from the original)
    if ((u32(*gptr<u8>(r0 + 0x80u + r1)) & 1u) != 0) {  // (from the original)
        goto L_1e557c;
    }
    r1 = *gptr<u32>(r4 + 4);
    *gptr<u32>(r13) = u32(*gptr<u32>(r4));
    *gptr<u32>(r13 + 4) = u32(r1);
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb338(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0u;
    if (r0 != 0) {
        r0 = r13 + 0x14u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00300650(r0, r1, r2, r3);
        ea = r13 + 0x14u;  // (from the original)
        r0 = *gptr<u32>(ea);
        r1 = *gptr<u32>(ea + 4);
        r2 = *gptr<u32>(ea + 8);
        ea = r13 + 8u;
        *gptr<u32>(ea) = u32(r0);
        *gptr<u32>(ea + 4) = u32(r1);
        *gptr<u32>(ea + 8) = u32(r2);
        r3 = 1u;
        r1 = *gptr<u32>(r4 + 4);
        r2 = r3;
        *gptr<u32>(r13) = u32(*gptr<u32>(r4));
        *gptr<u32>(r13 + 4) = u32(r1);
        r1 = r13 + 8u;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_003036dc(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 + 1u == 0) {
            goto L_1e557c;
        }
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_007111b4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_1e557c;
    }
    r1 = *gptr<u32>(r4 + 4);
    *gptr<u32>(r13) = u32(*gptr<u32>(r4));
    *gptr<u32>(r13 + 4) = u32(r1);
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb338(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r0 = r13 + 0x14u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00300650(r0, r1, r2, r3);
        ea = r13 + 0x14u;  // (from the original)
        r0 = *gptr<u32>(ea);
        r1 = *gptr<u32>(ea + 4);
        r2 = *gptr<u32>(ea + 8);
        ea = r13 + 8u;
        *gptr<u32>(ea) = u32(r0);
        *gptr<u32>(ea + 4) = u32(r1);
        *gptr<u32>(ea + 8) = u32(r2);
        r3 = 1u;
        r1 = *gptr<u32>(r4 + 4);
        r2 = r3;
        *gptr<u32>(r13) = u32(*gptr<u32>(r4));
        *gptr<u32>(r13 + 4) = u32(r1);
        r1 = r13 + 8u;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_003036dc(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 1u) {
            goto L_1e557c;
        }
    }
    r0 = 0xau;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 5u) {
        goto L_1e5594;
    }
L_1e557c:;
    r0 = r4 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00303cdc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_1e5584:;
    r0 = r4;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_001e5600(r0, r1, r2, r3);
L_1e5594:;
    r5 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb378(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_005cddb4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5;
    r0 = r4 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_003081b4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00314cec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(r0, r1, r2, r3);
    r2 = r0 + 0xau & 0xffu;  // (from the original)
    r3 = 0u;
    r1 = r3;
    r0 = r4 + 8u;
    *gptr<u32>(r13) = u32(r6);
    guest::cpu()->r[13] = r13;
    r0 = call_005cde64(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::preempt();
    goto L_1e5584;
L_1e55f4:;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001e546c
GUEST_EXPORT(0x001e546c, d_001e546c::f_001e546c);

// f_001e57e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e57e8 {

inline constexpr guest::Function<0x005cd270, u32(u32, u32, u32, u32)> call_005cd270;  // (from the original)

u32 f_001e57e8(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    r4 = r0;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005cd270(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 0x20001800u;  // (from the original)
    r1 = 0u;
    ea = r4 + 8u;
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001e57e8
GUEST_EXPORT(0x001e57e8, d_001e57e8::f_001e57e8);

// f_001e5820: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e5820 {

inline constexpr guest::Function<0x002be76c, u32(u32, u32, u32, u32)> call_002be76c;  // (from the original)
inline constexpr guest::Function<0x002ffb64, u32(u32, u32, u32, u32)> call_002ffb64;  // (from the original)

u32 f_001e5820(u32 r0_unused, u32 r1, u32 r2) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = 0x982014u;  // (from the original)
    r0 = u32(*gptr<u8>(r4));
    if (r0 != 0) {
        r5 = 0x982018u;  // (from the original)
        r0 = *gptr<u32>(r5);
        if (r0 != 0) {
            r0 = call_002be76c(r0, r1, r2, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r0 = call_002ffb64(r0, r1, r2, guest::cpu()->r[3]);
        }
        r0 = 0u;
        r1 = 4u;
        *gptr<u32>(r5) = u32(r0);
        *gptr<u32>(0x982008u) = u32(r1);  // (from the original)
        *gptr<u8>(r4) = u8(r0);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001e5820
GUEST_EXPORT(0x001e5820, d_001e5820::f_001e5820);

// f_001e5894: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e5894 {

struct __attribute__((packed)) Object_001e5894_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_001e5894_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001e5894_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001e5894_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00148710, u32(u32, u32, u32, u32)> call_00148710;  // (from the original)

u32 f_001e5894(gptr<Object_001e5894_0> arg0, u32 r1, float S0) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    r3 = *gptr<u32>(0x94edd8u);  // (from the original)
    if (r3 != 0) {
        r2 = r1;
        r1 = r3 + 0x29cu;  // (from the original)
        guest::cpu()->s[0] = S0;
        return call_00148710(r0, r1, r2, r3);
    }
    S0 = std::bit_cast<float>(*gptr<u32>(0x1e58c8u));  // (from the original)
    arg0->word_0 = u32(std::bit_cast<u32>(S0));
    arg0->word_4 = u32(std::bit_cast<u32>(S0));
    arg0->word_8 = u32(std::bit_cast<u32>(S0));
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_001e5894
GUEST_EXPORT(0x001e5894, d_001e5894::f_001e5894);

// f_001e5ba0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e5ba0 {

inline constexpr guest::Function<0x001ba7c0, u32(u32, u32, u32, u32)> call_001ba7c0;  // (from the original)
inline constexpr guest::Function<0x00228f74, u32(u32, u32, u32, u32)> call_00228f74;  // (from the original)
inline constexpr guest::Function<0x0022a250, u32(u32, u32, u32, u32)> call_0022a250;  // (from the original)
inline constexpr guest::Function<0x00265d54, u32(u32, u32, u32, u32)> call_00265d54;  // (from the original)
inline constexpr guest::Function<0x0029598c, u32(u32, u32, u32, u32)> call_0029598c;  // (from the original)
inline constexpr guest::Function<0x00615904, u32(u32, u32, u32, u32)> call_00615904;  // (from the original)

u32 f_001e5ba0(u32 r0, u32 r1) {
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
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r12);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00228f74(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    r0 = call_0022a250(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    r0 = call_00265d54(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    r0 = call_0029598c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    r0 = call_001ba7c0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    r0 = call_00615904(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_1e5d90;
    } else {
        r11 = 0x9ab6b8u;  // (from the original)
        r6 = 0u;
    }
L_1e5bcc:;
    r10 = 0u;
L_1e5bd0:;
    r4 = 0u;
    r8 = r10 + (r10 << 1);
    r0 = r6 + (r8 << 3);
    r0 = (r0 << 3) - r0;
    r5 = r0 + (r0 << 2);
    do {
L_1e5be4:;
        guest::cpu()->r[13] = r13;
        r0 = call_00615904(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = r4 + (r4 << 3);
        r1 = r11 + (r1 + (r1 << 1) << 5);
        r0 = u32(*gptr<u8>(r0 + (r5 << 2) + (r4 << 2) + 0x10u));  // (from the original)
        r9 = r1 + (r8 << 5);
        r7 = r9 + (r6 << 2);
        *gptr<u8>(r7 + 3u) = u8(r0);
        guest::cpu()->r[13] = r13;
        r0 = call_00615904(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0 = u32(*gptr<u8>(r0 + (r5 << 2) + (r4 << 2) + 0x11u));  // (from the original)
        *gptr<u8>(r7 + 2u) = u8(r0);
        guest::cpu()->r[13] = r13;
        r0 = call_00615904(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0 = u32(*gptr<u8>(r0 + (r5 << 2) + (r4 << 2) + 0x12u));  // (from the original)
        *gptr<u8>(r7 + 1u) = u8(r0);
        guest::cpu()->r[13] = r13;
        r0 = call_00615904(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0 = r0 + (r5 << 2) + (r4 << 2);
        r4 = r4 + 1u;
        r0 = u32(*gptr<u8>(r0 + 0x13u));  // (from the original)
        res = r4 - 0x16u;  // (from the original)
        *gptr<u8>(r9 + (r6 << 2)) = u8(r0);
        guest::preempt();
    } while (res >> 0x1f != ((r4 ^ 0x16u) & (r4 ^ res)) >> 0x1f);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00615904(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = *gptr<u32>(r0 + (r5 << 2) + 0x68u);  // (from the original)
    r0 = 0x9b00f8u + (r8 << 5);  // (from the original)
    *gptr<u32>(r0 + (r6 << 2)) = u32(r1);
    guest::cpu()->r[13] = r13;
    r0 = call_00615904(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = *gptr<u32>(r0 + (r5 << 2) + 0x8cu);  // (from the original)
    r0 = 0x9b0458u + (r8 << 5);  // (from the original)
    *gptr<u32>(r0 + (r6 << 2)) = u32(r1);
    guest::cpu()->r[13] = r13;
    r0 = call_00615904(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = *gptr<u32>(r0 + (r5 << 2) + 0x90u);  // (from the original)
    r0 = 0x9b07b8u + (r8 << 5);  // (from the original)
    *gptr<u32>(r0 + (r6 << 2)) = u32(r1);
    guest::cpu()->r[13] = r13;
    r0 = call_00615904(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = *gptr<u32>(r0 + (r5 << 2) + 0x94u);  // (from the original)
    r0 = 0x9b0b18u + (r8 << 5);  // (from the original)
    *gptr<u32>(r0 + (r6 << 2)) = u32(r1);
    guest::cpu()->r[13] = r13;
    r0 = call_00615904(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = *gptr<u32>(r0 + (r5 << 2) + 0x98u);  // (from the original)
    r0 = 0x9b0e78u + (r8 << 5);  // (from the original)
    *gptr<u32>(r0 + (r6 << 2)) = u32(r1);
    guest::cpu()->r[13] = r13;
    r0 = call_00615904(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = *gptr<u32>(r0 + (r5 << 2) + 0x6cu);  // (from the original)
    r0 = 0x9b11d8u + (r8 << 5);  // (from the original)
    *gptr<u32>(r0 + (r6 << 2)) = u32(r1);
    guest::cpu()->r[13] = r13;
    r0 = call_00615904(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = *gptr<u32>(r0 + (r5 << 2) + 0x70u);  // (from the original)
    r0 = 0x9b1538u + (r8 << 5);  // (from the original)
    *gptr<u32>(r0 + (r6 << 2)) = u32(r1);
    guest::cpu()->r[13] = r13;
    r0 = call_00615904(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = *gptr<u32>(r0 + (r5 << 2) + 0x78u);  // (from the original)
    r0 = 0x9b1898u + (r8 << 5);  // (from the original)
    *gptr<u32>(r0 + (r6 << 2)) = u32(r1);
    guest::cpu()->r[13] = r13;
    r0 = call_00615904(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = *gptr<u32>(r0 + (r5 << 2) + 0x7cu);  // (from the original)
    r0 = 0x9b1bf8u + (r8 << 5);  // (from the original)
    *gptr<u32>(r0 + (r6 << 2)) = u32(r1);
    guest::cpu()->r[13] = r13;
    r0 = call_00615904(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = *gptr<u32>(r0 + (r5 << 2) + 0x80u);  // (from the original)
    r0 = 0x9b1f58u + (r8 << 5);  // (from the original)
    *gptr<u32>(r0 + (r6 << 2)) = u32(r1);
    guest::cpu()->r[13] = r13;
    r0 = call_00615904(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = *gptr<u32>(r0 + (r5 << 2) + 0x84u);  // (from the original)
    r0 = 0x9b22b8u + (r8 << 5);  // (from the original)
    *gptr<u32>(r0 + (r6 << 2)) = u32(r1);
    guest::cpu()->r[13] = r13;
    r0 = call_00615904(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = *gptr<u32>(r0 + (r5 << 2) + 0x88u);  // (from the original)
    r10 = r10 + 1u;
    r0 = 0x9b2618u + (r8 << 5);  // (from the original)
    res = r10 - 9u;
    *gptr<u32>(r0 + (r6 << 2)) = u32(r1);
    if (res >> 0x1f != ((r10 ^ 9u) & (r10 ^ res)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_1e5bd0;
    }
    r6 = r6 + 1u;
    if (s32(r6) < s32(0x18u)) {  // (from the original)
        guest::preempt();
        goto L_1e5bcc;
    }
L_1e5d90:;
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001e5ba0
GUEST_EXPORT(0x001e5ba0, d_001e5ba0::f_001e5ba0);

// f_001e5dc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e5dc8 {


u32 f_001e5dc8() {
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 0x9520bcu;  // (from the original)
    r1 = 1u;
    *gptr<u32>(r0 + 0x50u) = u32(r1);  // (from the original)
    *gptr<u8>(r0 + 0xau) = u8(r1);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001e5dc8
GUEST_EXPORT(0x001e5dc8, d_001e5dc8::f_001e5dc8);

// f_001e5de0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e5de0 {


u32 f_001e5de0(u32 r0) {
    u32 r1 = 0;
    r1 = 0x9520bcu;  // (from the original)
    r0 = r0 + 1u;
    *gptr<u32>(r1 + 0x50u) = u32(r0);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001e5de0
GUEST_EXPORT(0x001e5de0, d_001e5de0::f_001e5de0);

// f_001e5df4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e5df4 {

inline constexpr guest::Function<0x001e58fc, u32(u32, u32, u32, u32)> call_001e58fc;  // (from the original)
inline constexpr guest::Function<0x005601b8, u32(u32, u32, u32, u32)> call_005601b8;  // (from the original)

u32 f_001e5df4(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r4 = r0;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_001e58fc(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = 0xffu;  // (from the original)
    r0 = 0u;
    *gptr<u8>(r13) = u8(r1);
    *gptr<u8>(r13 + 1u) = u8(r0);
    *gptr<u8>(r13 + 2u) = u8(r0);
    r2 = r13 + 8u;
    *gptr<u8>(r13 + 3u) = u8(r0);
    r0 = r13;
    S0 = std::bit_cast<float>(*gptr<u32>(r2));
    S1 = std::bit_cast<float>(*gptr<u32>(r2 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r2 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r2 + 0xc));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_005601b8(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = *gptr<u32>(r13);
    r0 = r1 << 0x10;  // (from the original)
    *gptr<u8>(r4 + 1u) = u8(r0 >> 0x18);  // (from the original)
    *gptr<u8>(r4 + 2u) = u8(r1 << 8 >> 0x18);  // (from the original)
    *gptr<u8>(r4) = u8(r1);
    *gptr<u8>(r4 + 3u) = u8(r1 >> 0x18);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_001e5df4
GUEST_EXPORT(0x001e5df4, d_001e5df4::f_001e5df4);

// f_001e62dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e62dc {


u32 f_001e62dc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r12 = 0;
    r12 = 0x9ab638u;  // (from the original)
    guest::cpu()->r[13] -= 0x14u;  // (from the original)
    r6 = r12 + 0x14u;  // (from the original)
    r5 = 0x952134u;  // (from the original)
    r7 = r12 + 0x28u;  // (from the original)
    r4 = r12 + 0x3cu;  // (from the original)
    if (*gptr<u32>(r12) != 0) {
        if (*gptr<u32>(r12 + 4u) == 0) {
            goto L_1e6348;
        }
        if (*gptr<u32>(r12 + 8u) == 0) {
            goto L_1e635c;
        }
        if (*gptr<u32>(r12 + 0xcu) == 0) {  // (from the original)
            goto L_1e6370;
        }
        if (*gptr<u32>(r12 + 0x10u) == 0) {  // (from the original)
            goto L_1e6384;
        }
        goto L_1e6394;
    }
    *gptr<u8>(r5) = u8(r0);
    *gptr<u32>(r6) = u32(r1);
    *gptr<u32>(r7) = u32(r2);
    *gptr<u32>(r4) = u32(r3);
    goto L_1e6394;
L_1e6348:;
    *gptr<u8>(r5 + 1u) = u8(r0);
    *gptr<u32>(r6 + 4u) = u32(r1);
    *gptr<u32>(r7 + 4u) = u32(r2);
    *gptr<u32>(r4 + 4u) = u32(r3);
    goto L_1e6394;
L_1e635c:;
    *gptr<u8>(r5 + 2u) = u8(r0);
    *gptr<u32>(r6 + 8u) = u32(r1);
    *gptr<u32>(r7 + 8u) = u32(r2);
    *gptr<u32>(r4 + 8u) = u32(r3);
    goto L_1e6394;
L_1e6370:;
    *gptr<u8>(r5 + 3u) = u8(r0);
    *gptr<u32>(r6 + 0xcu) = u32(r1);  // (from the original)
    *gptr<u32>(r7 + 0xcu) = u32(r2);  // (from the original)
    *gptr<u32>(r4 + 0xcu) = u32(r3);  // (from the original)
    goto L_1e6394;
L_1e6384:;
    *gptr<u8>(r5 + 4u) = u8(r0);
    *gptr<u32>(r6 + 0x10u) = u32(r1);  // (from the original)
    *gptr<u32>(r7 + 0x10u) = u32(r2);  // (from the original)
    *gptr<u32>(r4 + 0x10u) = u32(r3);  // (from the original)
L_1e6394:;
    r1 = 0x9520bcu;  // (from the original)
    r0 = 1u;
    *gptr<u32>(r1 + 0x50u) = u32(r0);  // (from the original)
    guest::cpu()->r[13] += 0x14u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001e62dc
GUEST_EXPORT(0x001e62dc, d_001e62dc::f_001e62dc);

// f_001e6df4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e6df4 {

inline constexpr guest::Function<0x001e6fb8, u32(u32, u32, u32, u32)> call_001e6fb8;  // (from the original)
inline constexpr guest::Function<0x002d4d18, u32(u32, u32, u32, u32)> call_002d4d18;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)
inline constexpr guest::Function<0x00625690, u32(u32, u32, u32, u32)> call_00625690;  // (from the original)
inline constexpr guest::Function<0x006a9a40, u32(u32, u32, u32, u32)> call_006a9a40;  // (from the original)
inline constexpr guest::Function<0x006f9c08, u32(u32, u32, u32, u32)> call_006f9c08;  // (from the original)

u32 f_001e6df4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r6 = r1;
    r5 = r2;
    r7 = r3;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != r5) {
        goto L_1e6eb8;
    }
    r2 = 0x9ab688u;  // (from the original)
    r0 = *gptr<u32>(r2 + (r4 << 2));
    res = r0;
    if (u32(res == 0) || res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_1e6eb8;
    }
    r1 = 0x9b2bb4u;  // (from the original)
    r0 = r1 - 0x30u;  // (from the original)
    *gptr<u32>(r0) = u32(*gptr<u32>(r1));
    *gptr<u32>(r0 + 4u) = u32(*gptr<u32>(r1 + 4u));
    *gptr<u32>(r0 + 8u) = u32(*gptr<u32>(r1 + 8u));
    *gptr<u32>(r0 + 0xcu) = u32(*gptr<u32>(r1 + 0xcu));  // (from the original)
    r1 = r0 + 0x40u;  // (from the original)
    r0 = r1 - 0x30u;  // (from the original)
    *gptr<u32>(r0) = u32(*gptr<u32>(r1));
    *gptr<u32>(r0 + 4u) = u32(*gptr<u32>(r1 + 4u));
    *gptr<u32>(r0 + 8u) = u32(*gptr<u32>(r1 + 8u));
    *gptr<u32>(r0 + 0xcu) = u32(*gptr<u32>(r1 + 0xcu));  // (from the original)
    r1 = r0 + 0x40u;  // (from the original)
    r0 = r1 - 0x30u;  // (from the original)
    *gptr<u32>(r0) = u32(*gptr<u32>(r1));
    *gptr<u32>(r0 + 4u) = u32(*gptr<u32>(r1 + 4u));
    r3 = *gptr<u32>(r1 + 8u);
    *gptr<u32>(r0 + 8u) = u32(r3);
    *gptr<u32>(r0 + 0xcu) = u32(*gptr<u32>(r1 + 0xcu));  // (from the original)
    r1 = r6 ^ 1u;
    *gptr<u32>(r2 + (r4 << 2)) = u32(*gptr<u32>(r2 + (r4 << 2)) - 1u);
    r0 = 0x9b2b68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006a9a40(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_001e6fb8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_1e6eb8:;
    if (r6 != 0) {
        goto L_1e6f48;
    }
    r1 = r5;
    r0 = 0x80u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_006f9c08(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            r1 = r4;
            guest::cpu()->r[13] = r13;
            r0 = call_002d4d18(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
    }
    if (r7 == 0) {
        goto L_1e6f48;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00300904(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_1e6f48;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00625690(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (!u32(r0 >= 1u) || u32(r0 == 1u)) {
        goto L_1e6f48;
    }
    *gptr<u8>(r13) = u8(r5);
    *gptr<u16>(r13) = u16((u32(*gptr<u16>(r13)) & ~0x7f00u | 0x7f00u & r4 << 8) & ~0x8000u);  // (from the original)
    r3 = 2u;
    r2 = r13;
    r1 = 4u;
    r0 = 0x46u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006249b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_1e6f48:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001e6df4
GUEST_EXPORT(0x001e6df4, d_001e6df4::f_001e6df4);

// f_001e6f58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e6f58 {

inline constexpr guest::Function<0x001e6df4, u32(u32, u32, u32, u32)> call_001e6df4;  // (from the original)

u32 f_001e6f58(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    u32 zf = 0;
    zf = r1 == 5u;
    if (!zf) {
        zf = r1 == 0xbu;  // (from the original)
    }
    r2 = r1;
    if (zf) {
        r12 = r0;
        r0 = 0xau;  // (from the original)
        r3 = 1u;
        r1 = r12;
        return call_001e6df4(r0, r1, r2, r3);
    }
    zf = r1 == 0x11u;  // (from the original)
    if (!zf) {
        zf = r1 == 0x17u;  // (from the original)
    }
    if (zf) {
        r12 = r0;
        r0 = 0xau;  // (from the original)
        r3 = 1u;
        r1 = r12;
        return call_001e6df4(r0, r1, r2, r3);
    }
    if (r1 != 0x94u) {  // (from the original)
        r12 = r0;
        r0 = 0xbu;  // (from the original)
        r3 = 1u;
        r1 = r12;
        return call_001e6df4(r0, r1, r2, r3);
    }
    r12 = r0;
    r0 = 0xau;  // (from the original)
    r3 = 1u;
    r1 = r12;
    return call_001e6df4(r0, r1, r2, r3);
}

}  // namespace d_001e6f58
GUEST_EXPORT(0x001e6f58, d_001e6f58::f_001e6f58);

// f_001e6f98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e6f98 {

inline constexpr guest::Function<0x001e601c, u32(u32, u32, u32, u32)> call_001e601c;  // (from the original)

u32 f_001e6f98(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r2 = 0;
    u32 r13 = guest::cpu()->r[13];
    r2 = r1;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    r1 = r0;
    r3 = 1u;
    r0 = 0xau;  // (from the original)
    *gptr<u32>(r13) = u32(r3);
    guest::cpu()->r[13] = r13;
    r0 = call_001e601c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001e6f98
GUEST_EXPORT(0x001e6f98, d_001e6f98::f_001e6f98);

// f_001e74b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e74b0 {

inline constexpr guest::Function<0x001e601c, u32(u32, u32, u32, u32)> call_001e601c;  // (from the original)

u32 f_001e74b0(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r2 = 0;
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    r2 = r1;
    r1 = r0;
    *gptr<u32>(r13) = u32(0u);
    r0 = 0xbu;  // (from the original)
    r3 = 1u;
    guest::cpu()->r[13] = r13;
    r0 = call_001e601c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001e74b0
GUEST_EXPORT(0x001e74b0, d_001e74b0::f_001e74b0);

// f_001e74d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e74d4 {


void f_001e74d4(u32 r0) {
    u32 r1 = 0;
    float S0 = 0;
    float S1 = 0;
    S1 = std::bit_cast<float>(*gptr<u32>(0x1e74fcu));  // (from the original)
    r1 = 0x9520bcu;  // (from the original)
    *gptr<u8>(r1 + 3u) = u8(1u);
    *gptr<u8>(r1 + 4u) = u8(r0);
    S0 = float(std::bit_cast<u32>(std::bit_cast<float>(r0))) * S1;
    *gptr<u32>(r1 + 0x1cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_001e74d4
GUEST_EXPORT(0x001e74d4, d_001e74d4::f_001e74d4);

// f_001e7504: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e7504 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x006f9c08, u32(u32, u32, u32, u32)> call_006f9c08;  // (from the original)
inline constexpr guest::Function<0x007202d8, u32(u32, u32, u32, u32)> call_007202d8;  // (from the original)

u32 f_001e7504(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = 0xau;  // (from the original)
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r6 = 0x9ab688u;  // (from the original)
    if (r0 == r4) {
        r0 = *gptr<u32>(r6 + 0x28u);  // (from the original)
        goto L_1e7550;
    }
    r1 = r4;
    r0 = 0x80u;  // (from the original)
    r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_1e7558;
    }
    r0 = r4;
    r0 = call_006f9c08(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_1e7558;
    }
    r1 = r5;
    r0 = call_007202d8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_1e7550:;
    res = r0;
    if (!u32(res == 0) && res >> 0x1f == (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_1e75a8;
    }
L_1e7558:;
    r5 = 0xbu;  // (from the original)
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == r4) {
        r0 = *gptr<u32>(r6 + 0x2cu);  // (from the original)
        goto L_1e75a0;
    }
    r1 = r4;
    r0 = 0x80u;  // (from the original)
    r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_1e75b0;
    }
    r0 = r4;
    r0 = call_006f9c08(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_1e75b0;
    }
    r1 = r5;
    r0 = call_007202d8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_1e75a0:;
    res = r0;
    if (u32(res == 0) || res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_1e75b0;
    }
L_1e75a8:;
    r0 = 1u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_1e75b0:;
    r0 = 0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001e7504
GUEST_EXPORT(0x001e7504, d_001e7504::f_001e7504);

// f_001e8364: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e8364 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x005b3f88, u32(u32, u32, u32, u32)> call_005b3f88;  // (from the original)

u32 f_001e8364(u32 r0) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_002f74c8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = call_005b3f88(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 5u) {
        r0 = 3u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = call_002f74c8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = call_005b3f88(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 6u) {
        r0 = 3u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = call_002f74c8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = call_005b3f88(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 7u) {
        r0 = 3u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = call_002f74c8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = call_005b3f88(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 8u) {
        r0 = 3u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = call_002f74c8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = call_005b3f88(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 9u) {
        r0 = 3u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = call_002f74c8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = call_005b3f88(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 0xau) {  // (from the original)
        r0 = 3u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = call_002f74c8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = call_005b3f88(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0xbu) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = 3u;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_001e8364
GUEST_EXPORT(0x001e8364, d_001e8364::f_001e8364);

// f_001e83e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e83e4 {

inline constexpr guest::Function<0x005601b8, u32(u32, u32, u32, u32)> call_005601b8;  // (from the original)

u32 f_001e83e4(u32 r0, u32 r1, u32 r2) {
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    r2 = 0x85e504u + (r2 + (r2 << 3) << 2);  // (from the original)
    r1 = r2 + (r1 + (r1 << 1) << 2) - 0x12cu;  // (from the original)
    r13 = r13 - 0x20u;  // (from the original)
    r4 = r0;
    S1 = std::bit_cast<float>(*gptr<u32>(r1 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r1 + 8));
    r0 = r13 + 8u;
    S3 = std::bit_cast<float>(*gptr<u32>(0x1e8474u));  // (from the original)
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r1))));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r0 + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r0 + 0xc) = u32(std::bit_cast<u32>(S3));  // (from the original)
    r1 = 0xffu;  // (from the original)
    r0 = 0u;
    *gptr<u8>(r13) = u8(r1);
    *gptr<u8>(r13 + 1u) = u8(r0);
    *gptr<u8>(r13 + 2u) = u8(r0);
    r3 = r13 + 8u;
    *gptr<u8>(r13 + 3u) = u8(r0);
    r0 = r13;
    S0 = std::bit_cast<float>(*gptr<u32>(r3));
    S1 = std::bit_cast<float>(*gptr<u32>(r3 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r3 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r3 + 0xc));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_005601b8(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = *gptr<u32>(r13);
    *gptr<u8>(r4) = u8(r1);
    r0 = r1 << 0x10;  // (from the original)
    *gptr<u8>(r4 + 1u) = u8(r0 >> 0x18);  // (from the original)
    *gptr<u8>(r4 + 2u) = u8(r1 << 8 >> 0x18);  // (from the original)
    *gptr<u8>(r4 + 3u) = u8(r1 >> 0x18);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_001e83e4
GUEST_EXPORT(0x001e83e4, d_001e83e4::f_001e83e4);

// f_001e848c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e848c {


u32 f_001e848c() {
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 0x9520bcu;  // (from the original)
    r1 = 1u;
    *gptr<u8>(r0 + 8u) = u8(0u);
    *gptr<u32>(r0 + 0x50u) = u32(r1);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001e848c
GUEST_EXPORT(0x001e848c, d_001e848c::f_001e848c);

// f_001e84c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e84c8 {


u32 f_001e84c8() {
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 0x9520bcu;  // (from the original)
    r1 = 1u;
    *gptr<u8>(r0 + 8u) = u8(r1);
    *gptr<u32>(r0 + 0x50u) = u32(r1);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001e84c8
GUEST_EXPORT(0x001e84c8, d_001e84c8::f_001e84c8);

// f_001e8ba4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e8ba4 {

inline constexpr guest::Function<0x00346090, u32(u32, u32, u32, u32)> call_00346090;  // (from the original)

u32 f_001e8ba4(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 nf = 0;
    u32 vf = 0;
    r1 = 0u;
    guest::cpu()->r[13] -= 8u;
    r4 = r1;
    r0 = call_00346090(r0, r1, r2, r3);
    res = r0 & 0x80000000u;  // (from the original)
    r1 = res;
    if (!(res >> 0x1f)) {  // (from the original)
        r0 = r4;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r0 & 0x3fc00u;  // (from the original)
    r3 = 0x952630u;  // (from the original)
    r2 = r1 >> 0xa;  // (from the original)
    if (r2 != 0x11u) {  // (from the original)
        goto L_1e8c08;
    }
    r1 = r0 << 0x16 >> 0x16;  // (from the original)
    if (s32(r1) < s32(0x64u)) {  // (from the original)
        goto L_1e8c08;
    }
    res = r1 - 0xb3u;  // (from the original)
    if (!u32(res == 0) && res >> 0x1f == ((r1 ^ 0xb3u) & (r1 ^ res)) >> 0x1f) {  // (from the original)
        goto L_1e8c08;
    }
    if (s32(r1) < s32(0x82u)) {  // (from the original)
        goto L_1e8bf8;
    }
L_1e8bf0:;
    r4 = 1u;
    goto L_1e8bfc;
L_1e8bf8:;
    r4 = 4u;
L_1e8bfc:;
    *gptr<u32>(r3 + 4u) = u32(r0);
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
L_1e8c08:;
    if (r2 != 0x11u) {  // (from the original)
        guest::preempt();
        goto L_1e8bf8;
    }
    r1 = r0 << 0x16 >> 0x16;  // (from the original)
    res = r1 - 0x118u;  // (from the original)
    nf = res >> 0x1f;  // (from the original)
    vf = ((r1 ^ 0x118u) & (r1 ^ res)) >> 0x1f;  // (from the original)
    if (nf == vf) {
        r2 = 0x14eu;  // (from the original)
        res = r2 - r1;
        nf = res >> 0x1f;  // (from the original)
        vf = ((r2 ^ r1) & (r2 ^ res)) >> 0x1f;  // (from the original)
    }
    if (nf != vf) {
        guest::preempt();
        goto L_1e8bf8;
    }
    guest::preempt();
    goto L_1e8bf0;
}

}  // namespace d_001e8ba4
GUEST_EXPORT(0x001e8ba4, d_001e8ba4::f_001e8ba4);

// f_001e8c34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e8c34 {

inline constexpr guest::Function<0x00135520, u32(u32, u32, u32, u32)> call_00135520;  // (from the original)
inline constexpr guest::Function<0x00345f60, u32(u32, u32, u32, u32)> call_00345f60;  // (from the original)

u32 f_001e8c34(u32 r0) {
    u32 res = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = 0x952630u;  // (from the original)
    r2 = r0;
    r3 = 0u;
    r0 = *gptr<u32>(r4);
    r0 = call_00345f60(r0, guest::cpu()->r[1], r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 & 0x80000000u;  // (from the original)
    res = r0;
    if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = *gptr<u32>(r4);
    r0 = call_00135520(r0, guest::cpu()->r[1], r2, r3);
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_001e8c34
GUEST_EXPORT(0x001e8c34, d_001e8c34::f_001e8c34);

// f_001e90e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e90e4 {

inline constexpr guest::Function<0x001f4fec, u32(u32, u32, u32, u32)> call_001f4fec;  // (from the original)

u32 f_001e90e4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r1;
    r1 = r1 + 4u;
    r0 = call_001f4fec(r0, r1, r2, r3);
    r2 = *gptr<u32>(r4);
    r1 = 0u;
    *gptr<u32>(r0) = u32(r2);
    *gptr<u32>(r0 + *gptr<u32>(r2 - 0xcu)) = u32(*gptr<u32>(r4 + 0xcu));  // (from the original)
    *gptr<u8>(r0 + 0xc9u) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0xcau) = u8(r1);  // (from the original)
    *gptr<u16>(r0 + 0xccu) = u16(r1);  // (from the original)
    *gptr<u16>(r0 + 0xceu) = u16(r1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001e90e4
GUEST_EXPORT(0x001e90e4, d_001e90e4::f_001e90e4);

// f_001eb754: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001eb754 {

inline constexpr guest::Function<0x001e90bc, u32(u32, u32, u32, u32)> call_001e90bc;  // (from the original)
inline constexpr guest::Function<0x002073dc, u32(u32, u32, u32, u32)> call_002073dc;  // (from the original)
inline constexpr guest::Function<0x006c81f8, u32(u32, u32, u32, u32)> call_006c81f8;  // (from the original)
inline constexpr guest::Function<0x007207d8, u32(u32, u32, u32, u32)> call_007207d8;  // (from the original)

u32 f_001eb754(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3, float S4, float S5, float S6, float S7) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r5 = r0;
    r13 = r13 - 0x58u;  // (from the original)
    r4 = r1;
    r0 = r0 + 0x1e8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0 = call_007207d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    S7 = guest::cpu()->s[7];
    if (r0 != 0) {
        r13 = r13 + 0x58u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r1 = *gptr<u32>(r4 + 4);
    r2 = *gptr<u32>(r4 + 8);
    r3 = r13 + 0x30u;  // (from the original)
    *gptr<u32>(r3) = u32(*gptr<u32>(r4));
    *gptr<u32>(r3 + 4) = u32(r1);
    *gptr<u32>(r3 + 8) = u32(r2);
    r1 = 0u;
    r0 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0 = call_006c81f8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    S7 = guest::cpu()->s[7];
    *gptr<u32>(r13 + 0x34u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r0 = u32(*gptr<u8>(r5 + 0xc9u));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0 = call_001e90bc(r0, r1, r2, r3);
    r1 = r0;
    r0 = 0x83e5e4u;  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(r0 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r0 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r0 + 0xc));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r0 + 0x10));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(r0 + 0x14));  // (from the original)
    S6 = std::bit_cast<float>(*gptr<u32>(r0 + 0x18));  // (from the original)
    S7 = std::bit_cast<float>(*gptr<u32>(r0 + 0x1c));  // (from the original)
    ea = r13 + 0x10u;  // (from the original)
    *gptr<u32>(ea) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r0))));
    *gptr<u32>(ea + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(ea + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(ea + 0xc) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(std::bit_cast<u32>(S5));  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(std::bit_cast<u32>(S6));  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(std::bit_cast<u32>(S7));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r13 + 0x10u + (r1 << 2)));  // (from the original)
    r0 = r13 + 0x3cu;  // (from the original)
    S2 = S0;
    S1 = S0;
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r0 + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r13 + 8u) = u32(0u);
    *gptr<u32>(r13) = u32(r0);
    *gptr<u32>(r13 + 4) = u32(1u);
    r3 = 0x975beeu;  // (from the original)
    r1 = 0x1fau;  // (from the original)
    r2 = r13 + 0x30u;  // (from the original)
    r0 = r5 + 0x1e8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0 = call_002073dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r13 = r13 + 0x58u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_001eb754
GUEST_EXPORT(0x001eb754, d_001eb754::f_001eb754);

// f_001ed4a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ed4a4 {

struct __attribute__((packed)) Object_001ed4a4_0 {
    u32 word_0;
    u8 unknown_4[0xcc];  // (not used here)
    u32 word_d0;
    u8 unknown_d4[0xb8];  // (not used here)
    u32 word_18c;
};
GUEST_OFFSET(Object_001ed4a4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001ed4a4_0, word_d0, 0xd0);  // (from the original)
GUEST_OFFSET(Object_001ed4a4_0, word_18c, 0x18c);  // (from the original)

inline constexpr guest::Function<0x002706ec, u32(u32, u32, u32, u32)> call_002706ec;  // (from the original)
inline constexpr guest::Function<0x0027dd00, u32(u32, u32, u32, u32)> call_0027dd00;  // (from the original)
inline constexpr guest::Function<0x002e6944, u32(u32, u32, u32, u32)> call_002e6944;  // (from the original)

u32 f_001ed4a4(gptr<Object_001ed4a4_0> arg0, u32 r1) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x10;  // (from the original)
    zf = r1 == 0;
    r4 = r1;
    if (zf) {
        r4 = 0x8ebf88u;  // (from the original)
    }
    r2 = 0x8ebf24u;  // (from the original)
    if (zf) {
        r5 = 1u;
    } else {
        r5 = 0u;
    }
    ea = r4;
    r1 = *gptr<u32>(ea);
    arg0->word_0 = u32(r1);
    ea = r4 + 0x28u;  // (from the original)
    r3 = *gptr<u32>(ea);
    *gptr<u32>(r0 + *gptr<u32>(r1 - 0xcu)) = u32(r3);  // (from the original)
    ea = r4 + 0x2cu;  // (from the original)
    r1 = *gptr<u32>(ea);
    ea = r0 + 0xd0u;  // (from the original)
    arg0->word_d0 = u32(r1);
    ea = ea + 0xbcu;  // (from the original)
    arg0->word_18c = u32(r2);
    r0 = ea + 0x5cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x1d0u;  // (from the original)
    r1 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0027dd00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r5 != 0) {
        r0 = r0 + 0x20cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002706ec(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r0 = r0 - 0x20cu;  // (from the original)
    }
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001ed4a4
GUEST_EXPORT(0x001ed4a4, d_001ed4a4::f_001ed4a4);

// f_001ed594: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ed594 {


u32 f_001ed594() {
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 0x94ddc0u;  // (from the original)
    r1 = 0u;
    *gptr<u32>(r0 + 8u) = u32(r1);
    *gptr<u8>(r0) = u8(r1);
    *gptr<u8>(r0 + 1u) = u8(r1);
    *gptr<u8>(r0 + 2u) = u8(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001ed594
GUEST_EXPORT(0x001ed594, d_001ed594::f_001ed594);

// f_001ed5b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ed5b4 {

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x005c5aa8, u32(u32, u32, u32, u32)> call_005c5aa8;  // (from the original)

u32 f_001ed5b4(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r4 = 1u;
    r0 = *gptr<u32>(0xaaf14cu);  // (from the original)
    if (r0 != 0) {
        res = 1u & ~u32(*gptr<u8>(r0 + 0x55bau));  // (from the original)
        r4 = res;
        if (res == 0) {
            r1 = 0x2866u;  // (from the original)
            goto L_1ed608;
        }
    }
    r1 = 0x286du;  // (from the original)
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r4 != 0) {
        r1 = 0x25dcu;  // (from the original)
        goto L_1ed614;
    }
    goto L_1ed610;
L_1ed608:;
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_1ed610:;
    r1 = 0x25dbu;  // (from the original)
L_1ed614:;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r4 == 0) {
        r1 = 0x2768u;  // (from the original)
    } else {
        r1 = 0x2769u;  // (from the original)
    }
    r0 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r0 = 0x95bfdcu;  // (from the original)
    r3 = r13 + 0x14u;  // (from the original)
    r2 = r13 + 0x10u;  // (from the original)
    r1 = r0;
    *gptr<u32>(r13) = u32(r0);
    *gptr<u32>(r13 + 4u) = u32(r0);
    *gptr<u32>(r13 + 8u) = u32(r0);
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005c5aa8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r13 + 0xcu;  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001ed5b4
GUEST_EXPORT(0x001ed5b4, d_001ed5b4::f_001ed5b4);

// f_001ee1c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ee1c0 {

struct __attribute__((packed)) Object_001ee1c0_0 {
    u8 unknown_0[0x260];  // (not used here)
    u32 word_260;
};
GUEST_OFFSET(Object_001ee1c0_0, word_260, 0x260);  // (from the original)

inline constexpr guest::Function<0x001df140, u32(u32, u32, u32, u32)> call_001df140;  // (from the original)
inline constexpr guest::Function<0x001edaec, u32(u32, u32, u32, u32)> call_001edaec;  // (from the original)
inline constexpr guest::Function<0x00237048, u32(u32, u32, u32, u32)> call_00237048;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x005f3d70, u32(u32, u32, u32, u32)> call_005f3d70;  // (from the original)
inline constexpr guest::Function<0x00759b24, u32(u32, u32, u32, u32)> call_00759b24;  // (from the original)
inline constexpr guest::Function<0x0075ce84, u32(u32, u32, u32, u32)> call_0075ce84;  // (from the original)
inline constexpr guest::Function<0x00810e14, u32(u32, u32, u32, u32)> call_00810e14;  // (from the original)

u32 f_001ee1c0(gptr<Object_001ee1c0_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x50u;  // (from the original)
    r4 = r0;
    if (r1 == 0) {
        goto L_1ee220;
    }
    if (r1 == 1u) {
        goto L_1ee22c;
    }
    if (r1 == 2u) {
        goto L_1ee3d8;
    }
    if (r1 != 3u) {
        r0 = 0u;
        goto L_1ee218;
    }
    arg0->word_260 = u32(0x19u);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00237048(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb94c(r0, r1, r2, guest::cpu()->r[3]);
    r0 = r0 + 0x5700u;  // (from the original)
    r1 = u32(*gptr<u8>(r0 + 0x12u)) | 4u;  // (from the original)
    *gptr<u8>(r0 + 0x12u) = u8(r1);  // (from the original)
L_1ee214:;
    r0 = 1u;
L_1ee218:;
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_1ee220:;
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_001edaec(r0, r1, r2, guest::cpu()->r[3]);
L_1ee22c:;
    r0 = *gptr<u32>(r4 + 0x24cu);  // (from the original)
    r6 = 0x9047f8u;  // (from the original)
    r5 = 0u;
    if (r0 == 0) {
        r0 = *gptr<u32>(r4 + 0xe0u);  // (from the original)
    } else {
        r0 = *gptr<u32>(r0 + 0xe0u);  // (from the original)
    }
    if (r0 != 0) {
        if (r0 == 1u) {
            goto L_1ee324;
        }
        if (r0 != 2u) {
            goto L_1ee3ac;
        }
        goto L_1ee3b8;
    }
    r0 = *gptr<u32>(*gptr<u32>(r4 + 4u) + 0x34cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00759b24(r0, r1, r2, guest::cpu()->r[3]);
    r0 = *gptr<u32>(r0 + 0xa8u);  // (from the original)
    r2 = r4 + 0x280u;  // (from the original)
    *gptr<u32>(r2) = u32(r0);
    *gptr<u32>(r2 + 4) = u32(r0 + 0xdu);  // (from the original)
    *gptr<u32>(r13 + 0x3cu) = u32(0x1ee428u);  // (from the original)
    r1 = r13 + 0x38u;  // (from the original)
    r0 = r13 + 8u;
    *gptr<u32>(r13 + 0x38u) = u32(r6);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00810e14(r0, r1, r2, guest::cpu()->r[3]);
    if (*gptr<u32>(*gptr<u32>(r4 + 0x84u) + 0x18u) != 0) {  // (from the original)
        r0 = *gptr<u32>(*gptr<u32>(r4 + 0x84u) + 0x18u);  // (from the original)
        r2 = *gptr<u32>(r4 + 0x284u);  // (from the original)
        r1 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        r0 = call_005f3d70(r0, r1, r2, guest::cpu()->r[3]);
    }
    *gptr<u8>(r4 + 0x27cu) = u8(1u);  // (from the original)
    r1 = *gptr<u32>(r4 + 0x24cu);  // (from the original)
    zf = r1 == 0;
    if (zf) {
        r0 = *gptr<u32>(r4 + 0xe0u);  // (from the original)
    } else {
        r0 = *gptr<u32>(r1 + 0xe0u);  // (from the original)
    }
    r0 = r0 + 1u;
    if (zf) {
        goto L_1ee31c;
    }
L_1ee314:;
    *gptr<u32>(r1 + 0xe0u) = u32(r0);  // (from the original)
    goto L_1ee3a8;
L_1ee31c:;
    *gptr<u32>(r4 + 0xe0u) = u32(r0);  // (from the original)
    goto L_1ee3a8;
L_1ee324:;
    *gptr<u32>(r13 + 0xcu) = u32(0x1ee428u);  // (from the original)
    r1 = r13 + 8u;
    r0 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r6);
    guest::cpu()->r[13] = r13;
    r0 = call_00810e14(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (*gptr<u32>(*gptr<u32>(r4 + 0x84u) + 0x18u) == 0) {  // (from the original)
        goto L_1ee3ac;
    }
    r0 = *gptr<u32>(*gptr<u32>(r4 + 0x84u) + 0x18u);  // (from the original)
    r2 = *gptr<u32>(r4 + 0x284u);  // (from the original)
    r1 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f3d70(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r5 = r0;
    if (r0 != 1u) {
        goto L_1ee3ac;
    }
    r1 = *gptr<u32>(r4 + 0x24cu);  // (from the original)
    zf = r1 == 0;
    if (zf) {
        r0 = *gptr<u32>(r4 + 0xe0u);  // (from the original)
    } else {
        r0 = *gptr<u32>(r1 + 0xe0u);  // (from the original)
    }
    r0 = r0 + 1u;
    if (zf) {
        guest::preempt();
        goto L_1ee31c;
    }
    guest::preempt();
    goto L_1ee314;
L_1ee3a8:;
    r5 = 2u;
L_1ee3ac:;
    r0 = r5;
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_1ee3b8:;
    r0 = *gptr<u32>(r4 + 4u);
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_0075ce84(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    guest::preempt();
    goto L_1ee3a8;
L_1ee3d8:;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb94c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = *gptr<u32>(r4 + 0x280u);  // (from the original)
    if (r1 != 0) {
        r1 = r1 - 1u & 0xffu;  // (from the original)
        *gptr<u8>(r0 + 0x56d8u) = u8(r1);  // (from the original)
        guest::preempt();
        goto L_1ee214;
    }
    r0 = r0 + 0x56c4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001df140(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::preempt();
    goto L_1ee214;
}

}  // namespace d_001ee1c0
GUEST_EXPORT(0x001ee1c0, d_001ee1c0::f_001ee1c0);

// f_001ee438: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ee438 {

inline constexpr guest::Function<0x001df140, u32(u32, u32, u32, u32)> call_001df140;  // (from the original)
inline constexpr guest::Function<0x001edaec, u32(u32, u32, u32, u32)> call_001edaec;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x005f11f4, u32(u32, u32, u32, u32)> call_005f11f4;  // (from the original)
inline constexpr guest::Function<0x005f3d70, u32(u32, u32, u32, u32)> call_005f3d70;  // (from the original)
inline constexpr guest::Function<0x005fcfd8, u32(u32, u32, u32, u32)> call_005fcfd8;  // (from the original)
inline constexpr guest::Function<0x00759b24, u32(u32, u32, u32, u32)> call_00759b24;  // (from the original)
inline constexpr guest::Function<0x0075be20, u32(u32, u32, u32, u32)> call_0075be20;  // (from the original)
inline constexpr guest::Function<0x0075ce84, u32(u32, u32, u32, u32)> call_0075ce84;  // (from the original)
inline constexpr guest::Function<0x00810e14, u32(u32, u32, u32, u32)> call_00810e14;  // (from the original)

u32 f_001ee438(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x50u;  // (from the original)
    r4 = r0;
    if (r1 != 0) {
        if (r1 == 1u) {
            goto L_1ee498;
        }
        if (r1 != 2u) {
            r0 = 0u;
            goto L_1ee6b4;
        }
        guest::cpu()->r[13] = r13;
        r0 = call_002fb94c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = r0;
        r0 = u32(*gptr<u8>(0x8ac3u + r5)) & 0x80u;  // (from the original)
        if (*gptr<u32>(r4 + 0x280u) == 0) {  // (from the original)
            goto L_1ee708;
        }
        if (r0 == 0) {
            goto L_1ee6bc;
        }
        goto L_1ee6e4;
    }
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_001edaec(r0, r1, r2, r3);
L_1ee498:;
    r0 = *gptr<u32>(r4 + 0x24cu);  // (from the original)
    r6 = 0x9047f8u;  // (from the original)
    r5 = 0u;
    if (r0 == 0) {
        r0 = *gptr<u32>(r4 + 0xe0u);  // (from the original)
    } else {
        r0 = *gptr<u32>(r0 + 0xe0u);  // (from the original)
    }
    if (r0 != 0) {
        if (r0 == 1u) {
            goto L_1ee594;
        }
        if (r0 != 2u) {
            goto L_1ee6b0;
        }
        goto L_1ee618;
    }
    r0 = *gptr<u32>(*gptr<u32>(r4 + 4u) + 0x34cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00759b24(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r0 + 0xa8u);  // (from the original)
    r2 = r4 + 0x280u;  // (from the original)
    *gptr<u32>(r2) = u32(r0);
    *gptr<u32>(r2 + 4) = u32(r0 + 0xdu);  // (from the original)
    *gptr<u32>(r13 + 0x3cu) = u32(0x1ee748u);  // (from the original)
    r1 = r13 + 0x38u;  // (from the original)
    r0 = r13 + 8u;
    *gptr<u32>(r13 + 0x38u) = u32(r6);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00810e14(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    if (*gptr<u32>(*gptr<u32>(r4 + 0x84u) + 0x18u) != 0) {  // (from the original)
        r0 = *gptr<u32>(*gptr<u32>(r4 + 0x84u) + 0x18u);  // (from the original)
        r2 = *gptr<u32>(r4 + 0x284u);  // (from the original)
        r1 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        r0 = call_005f3d70(r0, r1, r2, r3);
    }
    *gptr<u8>(r4 + 0x27cu) = u8(1u);  // (from the original)
    r1 = *gptr<u32>(r4 + 0x24cu);  // (from the original)
    zf = r1 == 0;
    if (zf) {
        r0 = *gptr<u32>(r4 + 0xe0u);  // (from the original)
    } else {
        r0 = *gptr<u32>(r1 + 0xe0u);  // (from the original)
    }
    r0 = r0 + 1u;
    if (zf) {
        goto L_1ee588;
    }
L_1ee580:;
    *gptr<u32>(r1 + 0xe0u) = u32(r0);  // (from the original)
    goto L_1ee58c;
L_1ee588:;
    *gptr<u32>(r4 + 0xe0u) = u32(r0);  // (from the original)
L_1ee58c:;
    r5 = 2u;
    goto L_1ee6b0;
L_1ee594:;
    *gptr<u32>(r13 + 0xcu) = u32(0x1ee748u);  // (from the original)
    r1 = r13 + 8u;
    r0 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r6);
    guest::cpu()->r[13] = r13;
    r0 = call_00810e14(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (*gptr<u32>(*gptr<u32>(r4 + 0x84u) + 0x18u) == 0) {  // (from the original)
        goto L_1ee6b0;
    }
    r0 = *gptr<u32>(*gptr<u32>(r4 + 0x84u) + 0x18u);  // (from the original)
    r2 = *gptr<u32>(r4 + 0x284u);  // (from the original)
    r1 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f3d70(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r5 = r0;
    if (r0 != 1u) {
        goto L_1ee6b0;
    }
    r1 = *gptr<u32>(r4 + 0x24cu);  // (from the original)
    zf = r1 == 0;
    if (zf) {
        r0 = *gptr<u32>(r4 + 0xe0u);  // (from the original)
    } else {
        r0 = *gptr<u32>(r1 + 0xe0u);  // (from the original)
    }
    r0 = r0 + 1u;
    if (zf) {
        guest::preempt();
        goto L_1ee588;
    }
    guest::preempt();
    goto L_1ee580;
L_1ee618:;
    r5 = 2u;
    r0 = *gptr<u32>(r4 + 4u);
    if (r0 == 0) {
        goto L_1ee6b0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0075ce84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_1ee6b0;
    }
    r6 = *gptr<u32>(r4 + 0x280u) + 0x20u;  // (from the original)
    r0 = *gptr<u32>(r4 + 4u);
    if (r0 == 0) {
        goto L_1ee6ac;
    }
    r0 = *gptr<u32>(r0 + 0x354u);  // (from the original)
    zf = r0 == 0;
    r5 = r0;
    r4 = *gptr<u32>(0x95debcu);  // (from the original)
    if (!zf) {
        zf = r4 == 0;
    }
    if (zf) {
        goto L_1ee6ac;
    }
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005fcfd8(r0, r1, r2, r3);
    r3 = r6;
    r2 = 0x1ee764u;  // (from the original)
    r1 = r13 + 4u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0075be20(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0x11u;  // (from the original)
    r1 = r13 + 4u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_005f11f4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_1ee6ac:;
    r5 = 1u;
L_1ee6b0:;
    r0 = r5;
L_1ee6b4:;
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_1ee6bc:;
    r0 = u32(*gptr<u8>(r5 + 0x56d8u));  // (from the original)
    if ((u32(*gptr<u8>(0x56d9u + r5)) & 2u) == 0) {  // (from the original)
        r0 = 8u;
    }
    *gptr<u8>(0x8ac3u + r5) = u8(r0 | 0x80u);  // (from the original)
L_1ee6e4:;
    r1 = *gptr<u32>(r4 + 0x280u) - 1u & 0xffu;  // (from the original)
    *gptr<u8>(r5 + 0x56d8u) = u8(r1);  // (from the original)
    goto L_1ee734;
L_1ee708:;
    if (r0 == 0) {
        r1 = u32(*gptr<u8>(r5 + 0x56d8u)) | 0x80u;  // (from the original)
        *gptr<u8>(0x8ac3u + r5) = u8(r1);  // (from the original)
    }
    r0 = r5 + 0x56c4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001df140(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_1ee734:;
    r0 = 1u;
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001ee438
GUEST_EXPORT(0x001ee438, d_001ee438::f_001ee438);
