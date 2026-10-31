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
    guest::cpu()->r[13] -= 8u;
    call_00779548(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_001df69c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_001e00c8
GUEST_EXPORT(0x001e00c8, d_001e00c8::f_001e00c8);

// f_001e00e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e00e4 {

inline constexpr guest::Function<0x001b3f24, u32(u32, u32, u32, u32)> call_001b3f24;  // (from the original)

u32 f_001e00e4(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r4 = 0u;
    do {
L_1e00f0:;
        r0_1 = (r4 << 4) - r4;
        r0_2 = r5 + (r0_1 + (r0_1 << 3) << 4);
        r0_3 = call_001b3f24(r0_2, 0x16u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 8u);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_3;
}

}  // namespace d_001e00e4
GUEST_EXPORT(0x001e00e4, d_001e00e4::f_001e00e4);

// f_001e0114: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e0114 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003052f0, u32(u32, u32, u32, u32)> call_003052f0;  // (from the original)

u32 f_001e0114(u32 r0) {
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r5 = 0u;
    r6 = r0;
    r7 = r5;
    do {
L_1e0124:;
        r0_1 = (r5 << 4) - r5;
        r4_1 = r6 + (r0_1 + (r0_1 << 3) << 4);
        call_002f825c(r4_1, 0x2au, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r0_2 = r4_1 + 0x2au;  // (from the original)
        call_003052f0(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r0_3 = r4_1 + 0x58u;  // (from the original)
        call_002f825c(r0_3, 0xfu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        *gptr<u8>(r4_1 + 0x67u) = u8(r7);  // (from the original)
        r0_4 = r4_1 + 0x6cu;  // (from the original)
        *gptr<u8>(r4_1 + 0x68u) = u8(r7);  // (from the original)
        r0_5 = call_002f825c(r0_4, 0x800u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        r5 = r5 + 1u;
        *gptr<u8>(r4_1 + 0x86cu) = u8(r7);  // (from the original)
        guest::preempt();
    } while (r5 < 8u);
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0_5;
}

}  // namespace d_001e0114
GUEST_EXPORT(0x001e0114, d_001e0114::f_001e0114);

// f_001e0220: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e0220 {

inline constexpr guest::Function<0x003506c8, u32(u32, u32, u32, u32)> call_003506c8;  // (from the original)

u32 f_001e0220(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_003506c8(0x863u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    *gptr<u32>(r0 + 8u) = u32(r0_1);
    *gptr<u32>(r0 + 4u) = u32(r1_1);
    r0_2 = u32(*gptr<u16>(r0 + 0x22u)) | 1u;  // (from the original)
    *gptr<u16>(r0 + 0x22u) = u16(r0_2);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0_2;
}

}  // namespace d_001e0220
GUEST_EXPORT(0x001e0220, d_001e0220::f_001e0220);

// f_001e025c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e025c {

inline constexpr guest::Function<0x001e0220, u32(u32, u32, u32, u32)> call_001e0220;  // (from the original)
inline constexpr guest::Function<0x002fb918, u32(u32, u32, u32, u32)> call_002fb918;  // (from the original)

u32 f_001e025c(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    if (r0 != 0) {
        r0_1 = call_002fb918(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        guest::cpu()->r[13] += 8u;
        return call_001e0220(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0_2 = call_002fb918(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    *gptr<u32>(r0_2 + 4u) = u32(0u);
    *gptr<u32>(r0_2 + 8u) = u32(0u);
    r1_2 = u32(*gptr<u16>(r0_2 + 0x22u)) & ~1u;  // (from the original)
    *gptr<u16>(r0_2 + 0x22u) = u16(r1_2);  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0_2;
}

}  // namespace d_001e025c
GUEST_EXPORT(0x001e025c, d_001e025c::f_001e025c);

// f_001e02b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e02b4 {

inline constexpr guest::Function<0x001e02a4, u32(u32, u32, u32, u32)> call_001e02a4;  // (from the original)
inline constexpr guest::Function<0x002fb918, u32(u32, u32, u32, u32)> call_002fb918;  // (from the original)

u32 f_001e02b4(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    if (r0 != 0) {
        r0_1 = call_002fb918(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        guest::cpu()->r[13] += 8u;
        return call_001e02a4(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0_2 = call_002fb918(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    r1_2 = u32(*gptr<u16>(r0_2 + 0x22u)) & ~0x100u;  // (from the original)
    *gptr<u16>(r0_2 + 0x22u) = u16(r1_2);  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0_2;
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
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    r13 = r13 - 0x10;  // (from the original)
    arg0->word_4 = u32(0u);
    ea_1 = r0 + 8u;
    arg0->word_8 = u32(0u);
    r0_1 = ea_1 + 4u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_0027a48c(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u16>(r0 + 0x22u) = u16(0u);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    return r0_2;
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
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    r13 = r13 - 0x10;  // (from the original)
    arg0->word_0 = u32(0u);
    arg0->word_4 = u32(0u);
    ea_1 = r0 + 8u;
    arg0->word_8 = u32(0u);
    r0_1 = ea_1 + 4u;
    arg0->half_22 = u16(0u);
    arg0->word_4 = u32(0u);
    r4_1 = r0_1 - 0xcu;  // (from the original)
    arg0->word_8 = u32(0u);
    guest::cpu()->r[13] = r13;
    call_0027a48c(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u16>(r4_1 + 0x22u) = u16(0u);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    return r4_1;
}

}  // namespace d_001e0318
GUEST_EXPORT(0x001e0318, d_001e0318::f_001e0318);

// f_001e0354: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e0354 {


u32 f_001e0354(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    r0_1 = r0 + (r2 << 4);
    r2_1 = u32(*gptr<u8>(r0_1 + r1));
    if (r2_1 < 0xffu) {  // (from the original)
        *gptr<u8>(r0_1 + r1) = u8(r2_1 + 1u);
    }
    return r0_1;
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
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 r1_2 = 0;
    r3_1 = u32(arg0->byte_18);
    r2_1 = (r3_1 >> 5) + ((u32(arg0->byte_19) & 1u) << 3) + r1;
    if (r2_1 <= 0xeu) {  // (from the original)
        r1_1 = u32(arg0->byte_19) & ~1u | (r2_1 & 8u) >> 3;
        arg0->byte_18 = u8(r3_1 & ~0xe0u | r2_1 << 5);  // (from the original)
        arg0->byte_19 = u8(r1_1);
        guest::cpu()->r[1] = r1_1;
        return;
    }
    nf_1 = r1 >> 0x1f;  // (from the original)
    zf_1 = r1 == 0;
    if (!zf_1 && nf_1 == 0u) {
        r2_1 = 0xeu;  // (from the original)
    }
    if (zf_1 || nf_1 != 0u) {
        r2_1 = 0u;
    }
    r1_2 = u32(arg0->byte_19) & ~1u | (r2_1 & 8u) >> 3;
    arg0->byte_18 = u8(r3_1 & ~0xe0u | r2_1 << 5);  // (from the original)
    arg0->byte_19 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
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
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 r1_2 = 0;
    r3_1 = u32(arg0->byte_17);
    r2_1 = (r3_1 >> 7) + ((u32(arg0->byte_18) & 7u) << 1) + r1;
    if (r2_1 <= 0xfu) {  // (from the original)
        r1_1 = u32(arg0->byte_18) & ~7u | (r2_1 & 0xeu) >> 1;  // (from the original)
        arg0->byte_17 = u8(r3_1 & ~0x80u | r2_1 << 7);  // (from the original)
        arg0->byte_18 = u8(r1_1);
        guest::cpu()->r[1] = r1_1;
        return;
    }
    nf_1 = r1 >> 0x1f;  // (from the original)
    zf_1 = r1 == 0;
    if (!zf_1 && nf_1 == 0u) {
        r2_1 = 0xfu;  // (from the original)
    }
    if (zf_1 || nf_1 != 0u) {
        r2_1 = 0u;
    }
    r1_2 = u32(arg0->byte_18) & ~7u | (r2_1 & 0xeu) >> 1;  // (from the original)
    arg0->byte_17 = u8(r3_1 & ~0x80u | r2_1 << 7);  // (from the original)
    arg0->byte_18 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
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
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 r1_2 = 0;
    r3_1 = u32(arg0->byte_11);
    r2_1 = r1 + (r3_1 >> 4);
    if (r2_1 <= 0xeu) {  // (from the original)
        r1_1 = r3_1 & ~0xf0u | r2_1 << 4;  // (from the original)
        arg0->byte_11 = u8(r1_1);
        guest::cpu()->r[1] = r1_1;
        return;
    }
    nf_1 = r1 >> 0x1f;  // (from the original)
    zf_1 = r1 == 0;
    if (!zf_1 && nf_1 == 0u) {
        r2_1 = 0xeu;  // (from the original)
    }
    if (zf_1 || nf_1 != 0u) {
        r2_1 = 0u;
    }
    r1_2 = r3_1 & ~0xf0u | r2_1 << 4;  // (from the original)
    arg0->byte_11 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
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
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 r1_2 = 0;
    r3_1 = u32(arg0->byte_1);
    r2_1 = r1 + (r3_1 >> 3);
    if (r2_1 <= 0x1fu) {  // (from the original)
        r1_1 = r3_1 & ~0xf8u | r2_1 << 3;  // (from the original)
        arg0->byte_1 = u8(r1_1);
        guest::cpu()->r[1] = r1_1;
        return;
    }
    nf_1 = r1 >> 0x1f;  // (from the original)
    zf_1 = r1 == 0;
    if (!zf_1 && nf_1 == 0u) {
        r2_1 = 0x1fu;  // (from the original)
    }
    if (zf_1 || nf_1 != 0u) {
        r2_1 = 0u;
    }
    r1_2 = r3_1 & ~0xf8u | r2_1 << 3;  // (from the original)
    arg0->byte_1 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
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
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 r1_2 = 0;
    r3_1 = u32(arg0->byte_10);
    r2_1 = r1 + (r3_1 << 0x19 >> 0x1c);  // (from the original)
    if (r2_1 <= 0xau) {  // (from the original)
        r1_1 = r3_1 & ~0x78u | (r2_1 & 0xfu) << 3;  // (from the original)
        arg0->byte_10 = u8(r1_1);
        guest::cpu()->r[1] = r1_1;
        return;
    }
    nf_1 = r1 >> 0x1f;  // (from the original)
    zf_1 = r1 == 0;
    if (!zf_1 && nf_1 == 0u) {
        r2_1 = 0xau;  // (from the original)
    }
    if (zf_1 || nf_1 != 0u) {
        r2_1 = 0u;
    }
    r1_2 = r3_1 & ~0x78u | (r2_1 & 0xfu) << 3;  // (from the original)
    arg0->byte_10 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
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
    u32 r1_1 = 0;
    r1_1 = u32(arg0->byte_a) & ~0x3cu | (r1 & 0xfu) << 2;  // (from the original)
    arg0->byte_a = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
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
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 r1_2 = 0;
    r3_1 = u32(arg0->byte_25);
    r2_1 = r1 + (r3_1 >> 5);
    if (r2_1 <= 7u) {
        r1_1 = r3_1 & ~0xe0u | r2_1 << 5;  // (from the original)
        arg0->byte_25 = u8(r1_1);
        guest::cpu()->r[1] = r1_1;
        return;
    }
    nf_1 = r1 >> 0x1f;  // (from the original)
    zf_1 = r1 == 0;
    if (!zf_1 && nf_1 == 0u) {
        r2_1 = 7u;
    }
    if (zf_1 || nf_1 != 0u) {
        r2_1 = 0u;
    }
    r1_2 = r3_1 & ~0xe0u | r2_1 << 5;  // (from the original)
    arg0->byte_25 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
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
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r0_7 = 0;
    u32 ea_2 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 ea_3 = 0;
    u32 r4_1 = 0;
    u32 ea_4 = 0;
    u32 r1_5 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r1_6 = 0;
    u32 ea_5 = 0;
    u32 r4_2 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r3);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r4);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r14);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r0_1 = r0 + 0xc800u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fb338(r0_1, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_1e4278;
    }
    r1_1 = r13 + 4u;
    r0_3 = r0 + 0xc800u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_007595bc(r0_3, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_4 + 1u == 0) {
        goto L_1e4278;
    }
    r1_2 = r13 + 4u;
    r0_5 = r0 + 0xc808u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_007595bc(r0_5, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    if (r0_6 >> 0x1f != (r0_6 & (r0_6 ^ r0_6)) >> 0x1f) {  // (from the original)
        r0_7 = 0u;
        r13 = r13 + 0x10u;  // (from the original)
        ea_3 = r13;
        r13 = r13 + 8;
        r4_1 = *gptr<u32>(ea_3);
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[13] = r13;
        return r0_7;
    }
    ea_2 = r13 + 4u;
    r1_4 = *gptr<u32>(ea_2);
    r2_3 = *gptr<u32>(ea_2 + 4);
    r3_3 = *gptr<u32>(ea_2 + 8);
    guest::cpu()->r[13] = r13;
    call_001e4294(r0, r1_4, r2_3, r3_3);
    r1_3 = guest::cpu()->r[1];
    r0_7 = 1u;
    r13 = r13 + 0x10u;  // (from the original)
    ea_3 = r13;
    r13 = r13 + 8;
    r4_1 = *gptr<u32>(ea_3);
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[13] = r13;
    return r0_7;
L_1e4278:;
    ea_4 = r13 + 4u;
    r1_5 = *gptr<u32>(ea_4);
    r2_4 = *gptr<u32>(ea_4 + 4);
    r3_4 = *gptr<u32>(ea_4 + 8);
    guest::cpu()->r[13] = r13;
    call_001e4294(r0, r1_5, r2_4, r3_4);
    r1_6 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    ea_5 = r13;
    r13 = r13 + 8;
    r4_2 = *gptr<u32>(ea_5);
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[13] = r13;
    return 0u;
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
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_8 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_9 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r1_3 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_4 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r3);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r4);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r14);  // (from the original)
    r13 = r13 - 0x28u;  // (from the original)
    r1_1 = r13 + 0x14u;  // (from the original)
    r0_1 = r0 + 0xc800u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005cddb4(r0_1, r1_1, r2, r3);
    r3_1 = r13 + 0x14u;  // (from the original)
    r1_2 = *gptr<u32>(r3_1 + 4);
    r2_1 = *gptr<u32>(r3_1 + 8);
    *gptr<u32>(r13) = u32(*gptr<u32>(r3_1));
    *gptr<u32>(r13 + 4) = u32(r1_2);
    *gptr<u32>(r13 + 8) = u32(r2_1);
    r0_2 = u32(s32(s8(*gptr<u8>(r13 + 7u))));
    if (s32(r0_2) < s32(9u)) {
        r0_3 = r13;
        guest::cpu()->r[13] = r13;
        call_0056cce4(r0_3, 9u, r2_1, r3_1);
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        goto L_1e430c;
    }
    if (s32(r0_2) < s32(0x11u)) {  // (from the original)
        r0_4 = r13;
        guest::cpu()->r[13] = r13;
        call_0056cce4(r0_4, 0x11u, r2_1, r3_1);  // (from the original)
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        goto L_1e430c;
    }
    r0_5 = r13;
    guest::cpu()->r[13] = r13;
    call_0056cce4(r0_5, 9u, r2_1, r3_1);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_6 = r13;
    guest::cpu()->r[13] = r13;
    call_003014b4(r0_6, 1u, r2_3, r3_3);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
L_1e430c:;
    r0_7 = r13;
    guest::cpu()->r[13] = r13;
    call_0056ce84(r0_7, 0u, r2_2, r3_2);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_8 = r13;
    guest::cpu()->r[13] = r13;
    call_0056cedc(r0_8, 0u, r2_4, r3_4);
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_9 = r13;
    guest::cpu()->r[13] = r13;
    call_0056cbe8(r0_9, 0u, r2_5, r3_5);
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r1_3 = r13;
    r0_10 = r0 + 0xc808u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_11 = call_005cddb4(r0_10, r1_3, r2_6, r3_6);
    r1_4 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    ea_2 = r13;
    r13 = r13 + 8;
    r4_1 = *gptr<u32>(ea_2);
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[13] = r13;
    return r0_11;
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
    u32 r5_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    u32 r0_4 = 0;
    u32 r2_1 = 0;
    u32 r1_5 = 0;
    u32 r0_5 = 0;
    u32 r2_2 = 0;
    u32 r1_6 = 0;
    u32 r0_6 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5_1 = r0 + (r1 + (r1 << 2) << 7);
    call_002fbb30(r5_1, r2, 0x31u, guest::cpu()->r[3]);  // (from the original)
    r1_1 = r2 + 0x34u;  // (from the original)
    r0_1 = r5_1 + 0x34u;  // (from the original)
    call_002fbb30(r0_1, r1_1, 0x31u, guest::cpu()->r[3]);  // (from the original)
    r1_2 = r2 + 0x68u;  // (from the original)
    r0_2 = r5_1 + 0x68u;  // (from the original)
    call_002fbb30(r0_2, r1_2, 0x42u, guest::cpu()->r[3]);  // (from the original)
    r1_3 = r2 + 0xaau;  // (from the original)
    r0_3 = r5_1 + 0xaau;  // (from the original)
    call_002f8574(r0_3, r1_3, 0x182u, guest::cpu()->r[3]);  // (from the original)
    r1_4 = r2 + 0x22cu;  // (from the original)
    r0_4 = r5_1 + 0x22cu;  // (from the original)
    call_002fbb30(r0_4, r1_4, 0x42u, guest::cpu()->r[3]);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r1_5 = r2 + 0x274u;  // (from the original)
    *gptr<u8>(r5_1 + 0x26eu) = u8(u32(*gptr<u8>(r2 + 0x26eu)));  // (from the original)
    *gptr<u8>(r5_1 + 0x26fu) = u8(u32(*gptr<u8>(r2 + 0x26fu)));  // (from the original)
    *gptr<u8>(r5_1 + 0x270u) = u8(u32(*gptr<u8>(r2 + 0x270u)));  // (from the original)
    *gptr<u8>(r5_1 + 0x271u) = u8(u32(*gptr<u8>(r2 + 0x271u)));  // (from the original)
    *gptr<u8>(r5_1 + 0x272u) = u8(u32(*gptr<u8>(r2 + 0x272u)));  // (from the original)
    r0_5 = r5_1 + 0x274u;  // (from the original)
    call_002fc8e8(r0_5, r1_5, r2_1, guest::cpu()->r[3]);
    r2_2 = guest::cpu()->r[2];
    r1_6 = r2 + 0x278u;  // (from the original)
    r0_6 = r5_1 + 0x278u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_00311c70(r0_6, r1_6, r2_2, guest::cpu()->r[3]);
}

}  // namespace d_001e4348
GUEST_EXPORT(0x001e4348, d_001e4348::f_001e4348);

// f_001e43f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e43f0 {

inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> call_002ff408;  // (from the original)
inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> call_00303cdc;  // (from the original)

u32 f_001e43f0(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r4 = 0u;
    do {
L_1e43fc:;
        r0_1 = r5 + (r4 + (r4 << 2) << 7);
        call_002ff408(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0x50u);  // (from the original)
    r0_2 = r5 + 0xc800u;  // (from the original)
    call_00303cdc(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_3 = r5 + 0xc800u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r0_4 = r0_3 + 8u;
    return call_00303cdc(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_001e43f0
GUEST_EXPORT(0x001e43f0, d_001e43f0::f_001e43f0);

// f_001e442c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e442c {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> call_002ff408;  // (from the original)
inline constexpr guest::Function<0x00311c70, u32(u32, u32, u32, u32)> call_00311c70;  // (from the original)
inline constexpr guest::Function<0x00758104, u32(u32, u32, u32, u32)> call_00758104;  // (from the original)

u32 f_001e442c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r6_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r3_3 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    u32 r3_4 = 0;
    u32 r1_4 = 0;
    u32 r0_6 = 0;
    u32 r2_1 = 0;
    u32 r0_7 = 0;
    u32 r1_5 = 0;
    u32 r3_5 = 0;
    u32 r1_6 = 0;
    u32 r0_8 = 0;
    u32 r2_2 = 0;
    u32 r3_6 = 0;
    u32 r1_7 = 0;
    u32 r0_9 = 0;
    u32 r1_8 = 0;
    u32 r2_3 = 0;
    u32 r3_7 = 0;
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r7 = 0u;
    r8 = r0;
    r9 = 0x182u;  // (from the original)
    r4 = r7;
    do {
L_1e4440:;
        r0_1 = r8 + (r4 + (r4 << 2) << 7);
        r0_2 = call_00758104(r0_1, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0_2 != 0)) {
            if (!(r4 == r7)) {
                r6_1 = r8 + (r7 + (r7 << 2) << 7);
                call_002fbb30(r6_1, r0_1, 0x31u, r3);  // (from the original)
                r3_1 = guest::cpu()->r[3];
                r1_1 = r0_1 + 0x34u;  // (from the original)
                r0_3 = r6_1 + 0x34u;  // (from the original)
                call_002fbb30(r0_3, r1_1, 0x31u, r3_1);  // (from the original)
                r3_2 = guest::cpu()->r[3];
                r1_2 = r0_1 + 0x68u;  // (from the original)
                r0_4 = r6_1 + 0x68u;  // (from the original)
                call_002fbb30(r0_4, r1_2, 0x42u, r3_2);  // (from the original)
                r3_3 = guest::cpu()->r[3];
                r1_3 = r0_1 + 0xaau;  // (from the original)
                r0_5 = r6_1 + 0xaau;  // (from the original)
                call_002f8574(r0_5, r1_3, r9, r3_3);
                r3_4 = guest::cpu()->r[3];
                r1_4 = r0_1 + 0x22cu;  // (from the original)
                r0_6 = r6_1 + 0x22cu;  // (from the original)
                call_002fbb30(r0_6, r1_4, 0x42u, r3_4);  // (from the original)
                r2_1 = u32(*gptr<u8>(r0_1 + 0x26fu));  // (from the original)
                r0_7 = u32(*gptr<u8>(r0_1 + 0x270u));  // (from the original)
                r1_5 = u32(*gptr<u8>(r0_1 + 0x271u));  // (from the original)
                r3_5 = u32(*gptr<u8>(r0_1 + 0x272u));  // (from the original)
                *gptr<u8>(r6_1 + 0x26eu) = u8(u32(*gptr<u8>(r0_1 + 0x26eu)));  // (from the original)
                *gptr<u8>(r6_1 + 0x26fu) = u8(r2_1);  // (from the original)
                *gptr<u8>(r6_1 + 0x270u) = u8(r0_7);  // (from the original)
                *gptr<u8>(r6_1 + 0x271u) = u8(r1_5);  // (from the original)
                r1_6 = r0_1 + 0x274u;  // (from the original)
                r0_8 = r6_1 + 0x274u;  // (from the original)
                *gptr<u8>(r6_1 + 0x272u) = u8(r3_5);  // (from the original)
                call_002fc8e8(r0_8, r1_6, r2_1, r3_5);
                r2_2 = guest::cpu()->r[2];
                r3_6 = guest::cpu()->r[3];
                r1_7 = r0_1 + 0x278u;  // (from the original)
                r0_9 = r6_1 + 0x278u;  // (from the original)
                call_00311c70(r0_9, r1_7, r2_2, r3_6);
                r1_8 = guest::cpu()->r[1];
                r2_3 = guest::cpu()->r[2];
                r3_7 = guest::cpu()->r[3];
                call_002ff408(r0_1, r1_8, r2_3, r3_7);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
            }
            r7 = r7 + 1u;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(0x50u));  // (from the original)
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r7;
}

}  // namespace d_001e442c
GUEST_EXPORT(0x001e442c, d_001e442c::f_001e442c);

// f_001e4524: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e4524 {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x003035a4, u32(u32, u32, u32, u32)> call_003035a4;  // (from the original)

u32 f_001e4524(u32 r0, u32 r1, u32 r2) {
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4_1 = r1;
    r5_1 = r0;
    if (r1 == 0) {
        *gptr<u8>(r5_1) = u8(r4_1);
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r4_1 != 1u) {
        *gptr<u8>(r5_1) = u8(r4_1);
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0_1 = call_002fae84(r0, r1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    r0_2 = r0_1 + 0x6214fu;  // (from the original)
    r1_1 = u32(*gptr<u8>(r0_2 + 3u)) | 0x20u;  // (from the original)
    *gptr<u8>(r0_2 + 3u) = u8(r1_1);
    r0_3 = call_002fae84(r0_2, r1_1, r2_1, guest::cpu()->r[3]);
    r0_4 = r0_3 + 0x7170cu;  // (from the original)
    r0 = call_003035a4(r0_4, 6u, 0x7170cu, guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r5_1) = u8(r4_1);
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
    u32 r4_1 = 0;
    u32 ea_2 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r1_1 = 0;
    u32 r6_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_4 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_5 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r3_6 = 0;
    u32 r0_12 = 0;
    u32 ea_3 = 0;
    u32 r4_2 = 0;
    u32 r5_1 = 0;
    u32 r6_2 = 0;
    u32 r7_2 = 0;
    u32 r8_2 = 0;
    u32 r9_1 = 0;
    u32 r10_1 = 0;
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
    ea_1 = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r9);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r10);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r14);  // (from the original)
    r13 = r13 - 0x30u;  // (from the original)
    r4_1 = r0 + r2;
    ea_2 = r13 + 0x30u;  // (from the original)
    r7_1 = *gptr<u32>(ea_2);
    r8_1 = *gptr<u32>(ea_2 + 4);
    r1_1 = u32(*gptr<u8>(r4_1 + 0x4au));  // (from the original)
    r6_1 = r13 + 4u;
    r0_1 = r0 + (r2 << 2);
    if (r1_1 != 0) {
        r0_2 = r0_1 + 2u;
        guest::cpu()->r[13] = r13;
        r0_3 = call_00303acc(r0_2, r1_1, r2, r3);
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        if (r0_3 == 0) {
            goto L_1e45ec;
        }
        r1_2 = 0x2084u + 3u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002fcbb0(r6_1, r1_2, r2_1, r3_1);
        r1_3 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        goto L_1e45f8;
    }
    r1_4 = r0_1 + 2u;
    guest::cpu()->r[13] = r13;
    call_002fc934(r6_1, r1_4, r2, r3);
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    goto L_1e45f8;
L_1e45ec:;
    guest::cpu()->r[13] = r13;
    call_002fcbb0(r6_1, 0x2084u, r2_1, r3_1);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
L_1e45f8:;
    if (u32(*gptr<u8>(r4_1 + 0x4au)) == 0) {  // (from the original)
        *gptr<u8>(r4_1 + 0x4au) = u8(1u);  // (from the original)
    } else {
        goto L_1e46d4;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_002f74c8(1u, r1_3, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_4 != r1) {
        goto L_1e46d4;
    }
    r0_5 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_6 = call_0030b654(r0_5, r1_3, r2_3, r3_3);
    r1_5 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_6 != 0) {
        r0_7 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0_8 = call_00303acc(r0_7, r1_5, r2_4, r3_4);
        if (r0_8 != 0) {
            guest::cpu()->r[13] = r13;
            call_004e9a78(r3, r7_1, 4u, r8_1);
            r1_3 = guest::cpu()->r[1];
            goto L_1e46d4;
        }
        guest::cpu()->r[13] = r13;
        call_004e9a78(r3, r7_1, 3u, r8_1);
        r1_3 = guest::cpu()->r[1];
        goto L_1e46d4;
    }
    guest::cpu()->r[13] = r13;
    r0_9 = call_006a5e34(r0_6, r1_5, r2_4, r3_4);
    r1_3 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_9 == 0) {
        goto L_1e46d4;
    }
    r0_10 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_11 = call_002fcbb0(r0_10, 0x2084u, r2_5, r3_5);  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_002fc994(r0_9, r0_11, r3, r7_1);
    r3_6 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0059e65c(r3, r7_1, 1u, r3_6);
    r1_3 = guest::cpu()->r[1];
L_1e46d4:;
    r0_12 = r13 + 4u;
    r13 = r13 + 0x10u;  // (from the original)
    ea_3 = r13;
    r13 = r13 + 0x20;  // (from the original)
    r4_2 = *gptr<u32>(ea_3);
    r5_1 = *gptr<u32>(ea_3 + 4);
    r6_2 = *gptr<u32>(ea_3 + 8);
    r7_2 = *gptr<u32>(ea_3 + 0xc);  // (from the original)
    r8_2 = *gptr<u32>(ea_3 + 0x10);  // (from the original)
    r9_1 = *gptr<u32>(ea_3 + 0x14);  // (from the original)
    r10_1 = *gptr<u32>(ea_3 + 0x18);  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_2;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[13] = r13;
    return r0_12;
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
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r4_1 = 0;
    u32 ea_2 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r3_6 = 0;
    u32 r0_9 = 0;
    u32 ea_3 = 0;
    u32 r4_2 = 0;
    u32 r5_1 = 0;
    u32 r6_2 = 0;
    u32 r7_2 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
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
    ea_1 = r13 - 0x1c;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r9);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r14);  // (from the original)
    r13 = r13 - 0x28u;  // (from the original)
    r4_1 = r0 + r2;
    ea_2 = r13 + 0x28u;  // (from the original)
    r6_1 = *gptr<u32>(ea_2);
    r7_1 = *gptr<u32>(ea_2 + 4);
    r3_1 = r13 + 4u;
    if (u32(*gptr<u8>(r4_1 + 0x2au)) != 0) {  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002fcbb0(r3_1, 0x2083u, r2, r3_1);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
    } else {
        r1_2 = r0 + (r2 << 2) + 0x12u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002fc934(r3_1, r1_2, r2, r3_1);
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
    }
    if (u32(*gptr<u8>(r4_1 + 0x2au)) == 0) {  // (from the original)
        *gptr<u8>(r4_1 + 0x2au) = u8(1u);  // (from the original)
    } else {
        goto L_1e481c;
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f74c8(1u, r1_1, r2_1, r3_2);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_1 != r1) {
        goto L_1e481c;
    }
    r0_2 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_3 = call_0030b654(r0_2, r1_1, r2_2, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_3 != 0) {
        r0_4 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0_5 = call_00303acc(r0_4, r1_3, r2_3, r3_4);
        if (r0_5 != 0) {
            guest::cpu()->r[13] = r13;
            call_004e9a78(r3, r6_1, 2u, r7_1);
            r1_1 = guest::cpu()->r[1];
            goto L_1e481c;
        }
        guest::cpu()->r[13] = r13;
        call_004e9a78(r3, r6_1, 1u, r7_1);
        r1_1 = guest::cpu()->r[1];
        goto L_1e481c;
    }
    guest::cpu()->r[13] = r13;
    r0_6 = call_006a5e34(r0_3, r1_3, r2_3, r3_4);
    r1_1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_6 == 0) {
        goto L_1e481c;
    }
    r0_7 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_8 = call_002fcbb0(r0_7, 0x2083u, r2_4, r3_5);  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_002fc994(r0_6, r0_8, r3, r6_1);
    r3_6 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0059e65c(r3, r6_1, 1u, r3_6);
    r1_1 = guest::cpu()->r[1];
L_1e481c:;
    r0_9 = r13 + 4u;
    r13 = r13 + 0xcu;  // (from the original)
    ea_3 = r13;
    r13 = r13 + 0x1c;  // (from the original)
    r4_2 = *gptr<u32>(ea_3);
    r5_1 = *gptr<u32>(ea_3 + 4);
    r6_2 = *gptr<u32>(ea_3 + 8);
    r7_2 = *gptr<u32>(ea_3 + 0xc);  // (from the original)
    r8_1 = *gptr<u32>(ea_3 + 0x10);  // (from the original)
    r9_1 = *gptr<u32>(ea_3 + 0x14);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[13] = r13;
    return r0_9;
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
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 ea_1 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 ea_2 = 0;
    u32 r1_5 = 0;
    u32 r1_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_7 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 ea_3 = 0;
    u32 r0_13 = 0;
    u32 r1_8 = 0;
    u32 r2_4 = 0;
    u32 ea_4 = 0;
    u32 r1_9 = 0;
    u32 r1_10 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r5_1 = 0;
    u32 r0_18 = 0;
    u32 r2_5 = 0;
    u32 r3_3 = 0;
    u32 r2_6 = 0;
    u32 r3_4 = 0;
    u32 r0_19 = 0;
    u32 r1_11 = 0;
    u32 r2_7 = 0;
    u32 r3_5 = 0;
    u32 r0_20 = 0;
    u32 r1_12 = 0;
    u32 r2_8 = 0;
    u32 r3_6 = 0;
    u32 r0_21 = 0;
    u32 r2_9 = 0;
    u32 r0_22 = 0;
    r13 = r13 - 0x30u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0_1 = call_001e51f0(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r1 == 0) {
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fb328(r0_1, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r1_2 = 0x6214fu;  // (from the original)
    if ((u32(*gptr<u8>(r0_2 + 0x80u + r1_2)) & 1u) != 0) {  // (from the original)
        goto L_1e557c;
    }
    r1_3 = *gptr<u32>(r4 + 4);
    *gptr<u32>(r13) = u32(*gptr<u32>(r4));
    *gptr<u32>(r13 + 4) = u32(r1_3);
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    r0_4 = call_002fb338(r0_3, r1_3, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_4 != 0) {
        r0_5 = r13 + 0x14u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00300650(r0_5, r1_2, r2_2, r3_2);
        ea_1 = r13 + 0x14u;  // (from the original)
        r0_6 = *gptr<u32>(ea_1);
        r1_4 = *gptr<u32>(ea_1 + 4);
        r2_3 = *gptr<u32>(ea_1 + 8);
        ea_2 = r13 + 8u;
        *gptr<u32>(ea_2) = u32(r0_6);
        *gptr<u32>(ea_2 + 4) = u32(r1_4);
        *gptr<u32>(ea_2 + 8) = u32(r2_3);
        r1_5 = *gptr<u32>(r4 + 4);
        *gptr<u32>(r13) = u32(*gptr<u32>(r4));
        *gptr<u32>(r13 + 4) = u32(r1_5);
        r1_6 = r13 + 8u;
        r0_7 = r13;
        guest::cpu()->r[13] = r13;
        r0_8 = call_003036dc(r0_7, r1_6, 1u, 1u);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        if (r0_8 + 1u == 0) {
            goto L_1e557c;
        }
    }
    guest::cpu()->r[13] = r13;
    r0_9 = call_007111b4(r4, r1_2, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_9 != 0) {
        goto L_1e557c;
    }
    r1_7 = *gptr<u32>(r4 + 4);
    *gptr<u32>(r13) = u32(*gptr<u32>(r4));
    *gptr<u32>(r13 + 4) = u32(r1_7);
    r0_10 = r13;
    guest::cpu()->r[13] = r13;
    r0_11 = call_002fb338(r0_10, r1_7, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_11 != 0) {
        r0_12 = r13 + 0x14u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00300650(r0_12, r1_2, r2_2, r3_2);
        ea_3 = r13 + 0x14u;  // (from the original)
        r0_13 = *gptr<u32>(ea_3);
        r1_8 = *gptr<u32>(ea_3 + 4);
        r2_4 = *gptr<u32>(ea_3 + 8);
        ea_4 = r13 + 8u;
        *gptr<u32>(ea_4) = u32(r0_13);
        *gptr<u32>(ea_4 + 4) = u32(r1_8);
        *gptr<u32>(ea_4 + 8) = u32(r2_4);
        r1_9 = *gptr<u32>(r4 + 4);
        *gptr<u32>(r13) = u32(*gptr<u32>(r4));
        *gptr<u32>(r13 + 4) = u32(r1_9);
        r1_10 = r13 + 8u;
        r0_14 = r13;
        guest::cpu()->r[13] = r13;
        r0_15 = call_003036dc(r0_14, r1_10, 1u, 1u);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        if (r0_15 == 1u) {
            goto L_1e557c;
        }
    }
    guest::cpu()->r[13] = r13;
    r0_16 = call_002ff6f8(0xau, r1_2, r2_2, r3_2);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_16 == 5u) {
        goto L_1e5594;
    }
L_1e557c:;
    r0_17 = r4 + 8u;
    guest::cpu()->r[13] = r13;
    call_00303cdc(r0_17, r1_2, r2_2, r3_2);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_001e5600(r4, r1, r2, r3);
L_1e5594:;
    r5_1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_18 = call_002fb378(r0_16, r1_2, r2_2, r3_2);
    r2_5 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_005cddb4(r5_1, r0_18, r2_5, r3_3);
    r2_6 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_19 = r4 + 8u;
    guest::cpu()->r[13] = r13;
    call_003081b4(r0_19, r5_1, r2_6, r3_4);
    r1_11 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_20 = r4 + 8u;
    guest::cpu()->r[13] = r13;
    call_00314cec(r0_20, r1_11, r2_7, r3_5);
    r1_12 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_21 = call_002ff6f8(4u, r1_12, r2_8, r3_6);
    r2_9 = r0_21 + 0xau & 0xffu;  // (from the original)
    r0_22 = r4 + 8u;
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_005cde64(r0_22, 0u, r2_9, 0u);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_001e5600(r4, r1, r2, r3);
}

}  // namespace d_001e546c
GUEST_EXPORT(0x001e546c, d_001e546c::f_001e546c);

// f_001e57e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e57e8 {

inline constexpr guest::Function<0x005cd270, u32(u32, u32, u32, u32)> call_005cd270;  // (from the original)

u32 f_001e57e8(u32 r0, u32 r1) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    call_005cd270(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    ea_1 = r0 + 8u;
    *gptr<u32>(ea_1) = u32(0x20001800u);  // (from the original)
    *gptr<u32>(ea_1 + 4) = u32(0u);
    r13 = r13 + 8;
    guest::cpu()->r[1] = 0u;
    guest::cpu()->r[13] = r13;
    return 0x20001800u;  // (from the original)
}

}  // namespace d_001e57e8
GUEST_EXPORT(0x001e57e8, d_001e57e8::f_001e57e8);

// f_001e5820: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e5820 {

inline guest::global<u32, 0x00982008> global_00982008;  // (from the original)
inline guest::global<u8, 0x00982014> global_00982014;  // (from the original)
inline guest::global<u32, 0x00982018> global_00982018;  // (from the original)
inline constexpr guest::Function<0x002be76c, u32(u32, u32, u32, u32)> call_002be76c;  // (from the original)
inline constexpr guest::Function<0x002ffb64, u32(u32, u32, u32, u32)> call_002ffb64;  // (from the original)

u32 f_001e5820(u32 r0_unused, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = u32(*global_00982014);
    if (r0_1 != 0) {
        r0_2 = *global_00982018;
        if (r0_2 != 0) {
            r0_3 = call_002be76c(r0_2, r1, r2, guest::cpu()->r[3]);
            r1_1 = guest::cpu()->r[1];
            r2_1 = guest::cpu()->r[2];
            call_002ffb64(r0_3, r1_1, r2_1, guest::cpu()->r[3]);
        }
        r0_1 = 0u;
        r1 = 4u;
        *global_00982018 = u32(r0_1);
        *global_00982008 = u32(r1);
        *global_00982014 = u8(r0_1);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
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

inline guest::global<u32, 0x001e58c8> global_001e58c8;  // (from the original)
inline guest::global<u32, 0x0094edd8> global_0094edd8;  // (from the original)
inline constexpr guest::Function<0x00148710, u32(u32, u32, u32, u32)> call_00148710;  // (from the original)

u32 f_001e5894(gptr<Object_001e5894_0> arg0, u32 r1, float S0) {
    u32 r0 = arg0.addr();
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    float S0_1 = 0;
    r3_1 = *global_0094edd8;
    if (r3_1 != 0) {
        r1_1 = r3_1 + 0x29cu;  // (from the original)
        guest::cpu()->s[0] = S0;
        return call_00148710(r0, r1_1, r1, r3_1);
    }
    S0_1 = std::bit_cast<float>(*global_001e58c8);
    arg0->word_0 = u32(std::bit_cast<u32>(S0_1));
    arg0->word_4 = u32(std::bit_cast<u32>(S0_1));
    arg0->word_8 = u32(std::bit_cast<u32>(S0_1));
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0_1;
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
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r8 = guest::cpu()->r[8];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r12 = guest::cpu()->r[12];
    u32 r13 = guest::cpu()->r[13];
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
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_6 = 0;
    u32 r1_7 = 0;
    u32 r0_9 = 0;
    u32 r9_1 = 0;
    u32 r7_1 = 0;
    u32 r0_10 = 0;
    u32 r1_8 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_9 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 res_1 = 0;
    u32 r0_16 = 0;
    u32 r1_10 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r1_11 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r1_12 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r1_13 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r1_14 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r1_15 = 0;
    u32 r0_27 = 0;
    u32 r0_28 = 0;
    u32 r1_16 = 0;
    u32 r0_29 = 0;
    u32 r0_30 = 0;
    u32 r1_17 = 0;
    u32 r0_31 = 0;
    u32 r0_32 = 0;
    u32 r1_18 = 0;
    u32 r0_33 = 0;
    u32 r0_34 = 0;
    u32 r1_19 = 0;
    u32 r0_35 = 0;
    u32 r0_36 = 0;
    u32 r1_20 = 0;
    u32 r0_37 = 0;
    u32 r0_38 = 0;
    u32 res_2 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r12);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00228f74(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    r0_2 = call_0022a250(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    r0_3 = call_00265d54(r0_2, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    r0_4 = call_0029598c(r0_3, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    r0_5 = call_001ba7c0(r0_4, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    r0_6 = call_00615904(r0_5, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_6 == 0) {
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
    r0_7 = r6 + (r8 << 3);
    r0 = (r0_7 << 3) - r0_7;
    r5 = r0 + (r0 << 2);
    do {
L_1e5be4:;
        guest::cpu()->r[13] = r13;
        r0_8 = call_00615904(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_6 = r4 + (r4 << 3);
        r1_7 = r11 + (r1_6 + (r1_6 << 1) << 5);
        r0_9 = u32(*gptr<u8>(r0_8 + (r5 << 2) + (r4 << 2) + 0x10u));  // (from the original)
        r9_1 = r1_7 + (r8 << 5);
        r7_1 = r9_1 + (r6 << 2);
        *gptr<u8>(r7_1 + 3u) = u8(r0_9);
        guest::cpu()->r[13] = r13;
        r0_10 = call_00615904(r0_9, r1_7, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_8 = guest::cpu()->r[1];
        r0_11 = u32(*gptr<u8>(r0_10 + (r5 << 2) + (r4 << 2) + 0x11u));  // (from the original)
        *gptr<u8>(r7_1 + 2u) = u8(r0_11);
        guest::cpu()->r[13] = r13;
        r0_12 = call_00615904(r0_11, r1_8, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_9 = guest::cpu()->r[1];
        r0_13 = u32(*gptr<u8>(r0_12 + (r5 << 2) + (r4 << 2) + 0x12u));  // (from the original)
        *gptr<u8>(r7_1 + 1u) = u8(r0_13);
        guest::cpu()->r[13] = r13;
        r0_14 = call_00615904(r0_13, r1_9, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0_15 = r0_14 + (r5 << 2) + (r4 << 2);
        r4 = r4 + 1u;
        r0 = u32(*gptr<u8>(r0_15 + 0x13u));  // (from the original)
        res_1 = r4 - 0x16u;  // (from the original)
        *gptr<u8>(r9_1 + (r6 << 2)) = u8(r0);
        guest::preempt();
    } while (res_1 >> 0x1f != ((r4 ^ 0x16u) & (r4 ^ res_1)) >> 0x1f);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_16 = call_00615904(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_10 = *gptr<u32>(r0_16 + (r5 << 2) + 0x68u);  // (from the original)
    r0_17 = 0x9b00f8u + (r8 << 5);  // (from the original)
    *gptr<u32>(r0_17 + (r6 << 2)) = u32(r1_10);
    guest::cpu()->r[13] = r13;
    r0_18 = call_00615904(r0_17, r1_10, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_11 = *gptr<u32>(r0_18 + (r5 << 2) + 0x8cu);  // (from the original)
    r0_19 = 0x9b0458u + (r8 << 5);  // (from the original)
    *gptr<u32>(r0_19 + (r6 << 2)) = u32(r1_11);
    guest::cpu()->r[13] = r13;
    r0_20 = call_00615904(r0_19, r1_11, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_12 = *gptr<u32>(r0_20 + (r5 << 2) + 0x90u);  // (from the original)
    r0_21 = 0x9b07b8u + (r8 << 5);  // (from the original)
    *gptr<u32>(r0_21 + (r6 << 2)) = u32(r1_12);
    guest::cpu()->r[13] = r13;
    r0_22 = call_00615904(r0_21, r1_12, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_13 = *gptr<u32>(r0_22 + (r5 << 2) + 0x94u);  // (from the original)
    r0_23 = 0x9b0b18u + (r8 << 5);  // (from the original)
    *gptr<u32>(r0_23 + (r6 << 2)) = u32(r1_13);
    guest::cpu()->r[13] = r13;
    r0_24 = call_00615904(r0_23, r1_13, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_14 = *gptr<u32>(r0_24 + (r5 << 2) + 0x98u);  // (from the original)
    r0_25 = 0x9b0e78u + (r8 << 5);  // (from the original)
    *gptr<u32>(r0_25 + (r6 << 2)) = u32(r1_14);
    guest::cpu()->r[13] = r13;
    r0_26 = call_00615904(r0_25, r1_14, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_15 = *gptr<u32>(r0_26 + (r5 << 2) + 0x6cu);  // (from the original)
    r0_27 = 0x9b11d8u + (r8 << 5);  // (from the original)
    *gptr<u32>(r0_27 + (r6 << 2)) = u32(r1_15);
    guest::cpu()->r[13] = r13;
    r0_28 = call_00615904(r0_27, r1_15, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_16 = *gptr<u32>(r0_28 + (r5 << 2) + 0x70u);  // (from the original)
    r0_29 = 0x9b1538u + (r8 << 5);  // (from the original)
    *gptr<u32>(r0_29 + (r6 << 2)) = u32(r1_16);
    guest::cpu()->r[13] = r13;
    r0_30 = call_00615904(r0_29, r1_16, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_17 = *gptr<u32>(r0_30 + (r5 << 2) + 0x78u);  // (from the original)
    r0_31 = 0x9b1898u + (r8 << 5);  // (from the original)
    *gptr<u32>(r0_31 + (r6 << 2)) = u32(r1_17);
    guest::cpu()->r[13] = r13;
    r0_32 = call_00615904(r0_31, r1_17, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_18 = *gptr<u32>(r0_32 + (r5 << 2) + 0x7cu);  // (from the original)
    r0_33 = 0x9b1bf8u + (r8 << 5);  // (from the original)
    *gptr<u32>(r0_33 + (r6 << 2)) = u32(r1_18);
    guest::cpu()->r[13] = r13;
    r0_34 = call_00615904(r0_33, r1_18, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_19 = *gptr<u32>(r0_34 + (r5 << 2) + 0x80u);  // (from the original)
    r0_35 = 0x9b1f58u + (r8 << 5);  // (from the original)
    *gptr<u32>(r0_35 + (r6 << 2)) = u32(r1_19);
    guest::cpu()->r[13] = r13;
    r0_36 = call_00615904(r0_35, r1_19, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_20 = *gptr<u32>(r0_36 + (r5 << 2) + 0x84u);  // (from the original)
    r0_37 = 0x9b22b8u + (r8 << 5);  // (from the original)
    *gptr<u32>(r0_37 + (r6 << 2)) = u32(r1_20);
    guest::cpu()->r[13] = r13;
    r0_38 = call_00615904(r0_37, r1_20, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = *gptr<u32>(r0_38 + (r5 << 2) + 0x88u);  // (from the original)
    r10 = r10 + 1u;
    r0_6 = 0x9b2618u + (r8 << 5);  // (from the original)
    res_2 = r10 - 9u;
    *gptr<u32>(r0_6 + (r6 << 2)) = u32(r1);
    if (res_2 >> 0x1f != ((r10 ^ 9u) & (r10 ^ res_2)) >> 0x1f) {  // (from the original)
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
    return r0_6;
}

}  // namespace d_001e5ba0
GUEST_EXPORT(0x001e5ba0, d_001e5ba0::f_001e5ba0);

// f_001e5dc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e5dc8 {


u32 f_001e5dc8() {
    *gptr<u32>(0x9520bcu + 0x50u) = u32(1u);  // (from the original)
    *gptr<u8>(0x9520bcu + 0xau) = u8(1u);  // (from the original)
    guest::cpu()->r[1] = 1u;
    return 0x9520bcu;  // (from the original)
}

}  // namespace d_001e5dc8
GUEST_EXPORT(0x001e5dc8, d_001e5dc8::f_001e5dc8);

// f_001e5de0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e5de0 {


u32 f_001e5de0(u32 r0) {
    u32 r0_1 = 0;
    r0_1 = r0 + 1u;
    *gptr<u32>(0x9520bcu + 0x50u) = u32(r0_1);  // (from the original)
    guest::cpu()->r[1] = 0x9520bcu;  // (from the original)
    return r0_1;
}

}  // namespace d_001e5de0
GUEST_EXPORT(0x001e5de0, d_001e5de0::f_001e5de0);

// f_001e5df4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e5df4 {

inline constexpr guest::Function<0x001e58fc, u32(u32, u32, u32, u32)> call_001e58fc;  // (from the original)
inline constexpr guest::Function<0x005601b8, u32(u32, u32, u32, u32)> call_005601b8;  // (from the original)

u32 f_001e5df4(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r0_1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    call_001e58fc(r0_1, r1, r2, r3);
    r3_1 = guest::cpu()->r[3];
    *gptr<u8>(r13) = u8(0xffu);  // (from the original)
    *gptr<u8>(r13 + 1u) = u8(0u);
    *gptr<u8>(r13 + 2u) = u8(0u);
    r2_1 = r13 + 8u;
    *gptr<u8>(r13 + 3u) = u8(0u);
    r0_2 = r13;
    S0_1 = std::bit_cast<float>(*gptr<u32>(r2_1));
    S1_1 = std::bit_cast<float>(*gptr<u32>(r2_1 + 4));
    S2_1 = std::bit_cast<float>(*gptr<u32>(r2_1 + 8));
    S3_1 = std::bit_cast<float>(*gptr<u32>(r2_1 + 0xc));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    call_005601b8(r0_2, 0xffu, r2_1, r3_1);  // (from the original)
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    r1_1 = *gptr<u32>(r13);
    r0_3 = r1_1 << 0x10;  // (from the original)
    *gptr<u8>(r0 + 1u) = u8(r0_3 >> 0x18);  // (from the original)
    *gptr<u8>(r0 + 2u) = u8(r1_1 << 8 >> 0x18);  // (from the original)
    *gptr<u8>(r0) = u8(r1_1);
    *gptr<u8>(r0 + 3u) = u8(r1_1 >> 0x18);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return r0_3;
}

}  // namespace d_001e5df4
GUEST_EXPORT(0x001e5df4, d_001e5df4::f_001e5df4);

// f_001e62dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e62dc {

inline guest::global<u8, 0x00952134> global_00952134;  // (from the original)
inline guest::global<u32, 0x009ab638> global_009ab638;  // (from the original)

u32 f_001e62dc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r4_1 = 0;
    guest::cpu()->r[13] -= 0x14u;  // (from the original)
    r6_1 = 0x9ab638u + 0x14u;  // (from the original)
    r7_1 = 0x9ab638u + 0x28u;  // (from the original)
    r4_1 = 0x9ab638u + 0x3cu;  // (from the original)
    if (*global_009ab638 != 0) {
        if (*gptr<u32>(0x9ab638u + 4u) == 0) {  // (from the original)
            goto L_1e6348;
        }
        if (*gptr<u32>(0x9ab638u + 8u) == 0) {  // (from the original)
            goto L_1e635c;
        }
        if (*gptr<u32>(0x9ab638u + 0xcu) == 0) {  // (from the original)
            goto L_1e6370;
        }
        if (*gptr<u32>(0x9ab638u + 0x10u) == 0) {  // (from the original)
            goto L_1e6384;
        }
        goto L_1e6394;
    }
    *global_00952134 = u8(r0);
    *gptr<u32>(r6_1) = u32(r1);
    *gptr<u32>(r7_1) = u32(r2);
    *gptr<u32>(r4_1) = u32(r3);
    goto L_1e6394;
L_1e6348:;
    *gptr<u8>(0x952134u + 1u) = u8(r0);  // (from the original)
    *gptr<u32>(r6_1 + 4u) = u32(r1);
    *gptr<u32>(r7_1 + 4u) = u32(r2);
    *gptr<u32>(r4_1 + 4u) = u32(r3);
    goto L_1e6394;
L_1e635c:;
    *gptr<u8>(0x952134u + 2u) = u8(r0);  // (from the original)
    *gptr<u32>(r6_1 + 8u) = u32(r1);
    *gptr<u32>(r7_1 + 8u) = u32(r2);
    *gptr<u32>(r4_1 + 8u) = u32(r3);
    goto L_1e6394;
L_1e6370:;
    *gptr<u8>(0x952134u + 3u) = u8(r0);  // (from the original)
    *gptr<u32>(r6_1 + 0xcu) = u32(r1);  // (from the original)
    *gptr<u32>(r7_1 + 0xcu) = u32(r2);  // (from the original)
    *gptr<u32>(r4_1 + 0xcu) = u32(r3);  // (from the original)
    goto L_1e6394;
L_1e6384:;
    *gptr<u8>(0x952134u + 4u) = u8(r0);  // (from the original)
    *gptr<u32>(r6_1 + 0x10u) = u32(r1);  // (from the original)
    *gptr<u32>(r7_1 + 0x10u) = u32(r2);  // (from the original)
    *gptr<u32>(r4_1 + 0x10u) = u32(r3);  // (from the original)
L_1e6394:;
    *gptr<u32>(0x9520bcu + 0x50u) = u32(1u);  // (from the original)
    guest::cpu()->r[13] += 0x14u;  // (from the original)
    guest::cpu()->r[1] = 0x9520bcu;  // (from the original)
    return 1u;
}

}  // namespace d_001e62dc
GUEST_EXPORT(0x001e62dc, d_001e62dc::f_001e62dc);

// f_001e6df4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e6df4 {

inline guest::global<u32, 0x009b2bb4> global_009b2bb4;  // (from the original)
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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 r3_2 = 0;
    u32 r1_4 = 0;
    u32 r0_5 = 0;
    u32 r1_5 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r2_5 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f74c8(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 != r2) {
        goto L_1e6eb8;
    }
    r2_1 = 0x9ab688u;  // (from the original)
    r0_1 = *gptr<u32>(r2_1 + (r0 << 2));
    if (r0_1 == 0 || r0_1 >> 0x1f != (r0_1 & (r0_1 ^ r0_1)) >> 0x1f) {  // (from the original)
        goto L_1e6eb8;
    }
    r0_2 = 0x9b2bb4u - 0x30u;  // (from the original)
    *gptr<u32>(r0_2) = u32(*global_009b2bb4);
    *gptr<u32>(r0_2 + 4u) = u32(*gptr<u32>(0x9b2bb4u + 4u));  // (from the original)
    *gptr<u32>(r0_2 + 8u) = u32(*gptr<u32>(0x9b2bb4u + 8u));  // (from the original)
    *gptr<u32>(r0_2 + 0xcu) = u32(*gptr<u32>(0x9b2bb4u + 0xcu));  // (from the original)
    r1_2 = r0_2 + 0x40u;  // (from the original)
    r0_3 = r1_2 - 0x30u;  // (from the original)
    *gptr<u32>(r0_3) = u32(*gptr<u32>(r1_2));
    *gptr<u32>(r0_3 + 4u) = u32(*gptr<u32>(r1_2 + 4u));
    *gptr<u32>(r0_3 + 8u) = u32(*gptr<u32>(r1_2 + 8u));
    *gptr<u32>(r0_3 + 0xcu) = u32(*gptr<u32>(r1_2 + 0xcu));  // (from the original)
    r1_3 = r0_3 + 0x40u;  // (from the original)
    r0_4 = r1_3 - 0x30u;  // (from the original)
    *gptr<u32>(r0_4) = u32(*gptr<u32>(r1_3));
    *gptr<u32>(r0_4 + 4u) = u32(*gptr<u32>(r1_3 + 4u));
    r3_2 = *gptr<u32>(r1_3 + 8u);
    *gptr<u32>(r0_4 + 8u) = u32(r3_2);
    *gptr<u32>(r0_4 + 0xcu) = u32(*gptr<u32>(r1_3 + 0xcu));  // (from the original)
    r1_4 = r1 ^ 1u;
    *gptr<u32>(r2_1 + (r0 << 2)) = u32(*gptr<u32>(r2_1 + (r0 << 2)) - 1u);
    guest::cpu()->r[13] = r13;
    r0_5 = call_006a9a40(0x9b2b68u, r1_4, r2_1, r3_2);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_1 = call_001e6fb8(r0_5, r1_5, r2_2, r3_3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
L_1e6eb8:;
    if (r1 != 0) {
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f74e0(0x80u, r2, r2_1, r3_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        guest::cpu()->r[13] = r13;
        r0_1 = call_006f9c08(r2, r1_1, r2_3, r3_4);
        r1_1 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        if (r0_1 != 0) {
            guest::cpu()->r[13] = r13;
            r0_1 = call_002d4d18(r0_1, r0, r2_3, r3_4);
            r1_1 = guest::cpu()->r[1];
            r2_3 = guest::cpu()->r[2];
            r3_4 = guest::cpu()->r[3];
        }
    }
    if (r3 == 0) {
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_00300904(r0_1, r1_1, r2_3, r3_4);
    r1_1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_00625690(r0_1, r1_1, r2_4, r3_5);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 <= 1u) {
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    *gptr<u8>(r13) = u8(r2);
    *gptr<u16>(r13) = u16((u32(*gptr<u16>(r13)) & ~0x7f00u | 0x7f00u & r0 << 8) & ~0x8000u);  // (from the original)
    r2_5 = r13;
    guest::cpu()->r[13] = r13;
    r0_1 = call_006249b0(0x46u, 4u, r2_5, 2u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_001e6df4
GUEST_EXPORT(0x001e6df4, d_001e6df4::f_001e6df4);

// f_001e6f58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e6f58 {

inline constexpr guest::Function<0x001e6df4, u32(u32, u32, u32, u32)> call_001e6df4;  // (from the original)

u32 f_001e6f58(u32 r0, u32 r1) {
    u32 zf_1 = 0;
    u32 zf_2 = 0;
    zf_1 = r1 == 5u;
    if (!zf_1) {
        zf_1 = r1 == 0xbu;  // (from the original)
    }
    if (zf_1) {
        return call_001e6df4(0xau, r0, r1, 1u);  // (from the original)
    }
    zf_2 = r1 == 0x11u;  // (from the original)
    if (!zf_2) {
        zf_2 = r1 == 0x17u;  // (from the original)
    }
    if (zf_2) {
        return call_001e6df4(0xau, r0, r1, 1u);  // (from the original)
    }
    if (r1 != 0x94u) {  // (from the original)
        return call_001e6df4(0xbu, r0, r1, 1u);  // (from the original)
    }
    return call_001e6df4(0xau, r0, r1, 1u);  // (from the original)
}

}  // namespace d_001e6f58
GUEST_EXPORT(0x001e6f58, d_001e6f58::f_001e6f58);

// f_001e6f98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e6f98 {

inline constexpr guest::Function<0x001e601c, u32(u32, u32, u32, u32)> call_001e601c;  // (from the original)

u32 f_001e6f98(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    *gptr<u32>(r13) = u32(1u);
    guest::cpu()->r[13] = r13;
    r0_1 = call_001e601c(0xau, r0, r1, 1u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_001e6f98
GUEST_EXPORT(0x001e6f98, d_001e6f98::f_001e6f98);

// f_001e74b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e74b0 {

inline constexpr guest::Function<0x001e601c, u32(u32, u32, u32, u32)> call_001e601c;  // (from the original)

u32 f_001e74b0(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_1 = call_001e601c(0xbu, r0, r1, 1u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_001e74b0
GUEST_EXPORT(0x001e74b0, d_001e74b0::f_001e74b0);

// f_001e74d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e74d4 {

inline guest::global<u32, 0x001e74fc> global_001e74fc;  // (from the original)

void f_001e74d4(u32 r0) {
    float S1_1 = 0;
    float S0_1 = 0;
    S1_1 = std::bit_cast<float>(*global_001e74fc);
    *gptr<u8>(0x9520bcu + 3u) = u8(1u);  // (from the original)
    *gptr<u8>(0x9520bcu + 4u) = u8(r0);  // (from the original)
    S0_1 = float(std::bit_cast<u32>(std::bit_cast<float>(r0))) * S1_1;
    *gptr<u32>(0x9520bcu + 0x1cu) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    guest::cpu()->r[1] = 0x9520bcu;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
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
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == r0) {
        r0_2 = *gptr<u32>(0x9ab688u + 0x28u);  // (from the original)
        goto L_1e7550;
    }
    r0_2 = call_002f74e0(0x80u, r0, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        goto L_1e7558;
    }
    r0_2 = call_006f9c08(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        goto L_1e7558;
    }
    r0_2 = call_007202d8(r0_2, 0xau, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
L_1e7550:;
    if (r0_2 != 0 && r0_2 >> 0x1f == (r0_2 & (r0_2 ^ r0_2)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
L_1e7558:;
    r0_3 = call_002f74c8(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_3 == r0) {
        r0_4 = *gptr<u32>(0x9ab688u + 0x2cu);  // (from the original)
        goto L_1e75a0;
    }
    r0_5 = call_002f74e0(0x80u, r0, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_5 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r0_6 = call_006f9c08(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_6 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r0_4 = call_007202d8(r0_6, 0xbu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
L_1e75a0:;
    if (r0_4 == 0 || r0_4 >> 0x1f != (r0_4 & (r0_4 ^ r0_4)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_001e7504
GUEST_EXPORT(0x001e7504, d_001e7504::f_001e7504);

// f_001e8364: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e8364 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x005b3f88, u32(u32, u32, u32, u32)> call_005b3f88;  // (from the original)

u32 f_001e8364(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
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
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002f74c8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = call_005b3f88(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 == 5u) {
        guest::cpu()->r[13] += 8u;
        return 3u;
    }
    r0_3 = call_002f74c8(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_4 = call_005b3f88(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_4 == 6u) {
        guest::cpu()->r[13] += 8u;
        return 3u;
    }
    r0_5 = call_002f74c8(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_6 = call_005b3f88(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_6 == 7u) {
        guest::cpu()->r[13] += 8u;
        return 3u;
    }
    r0_7 = call_002f74c8(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_8 = call_005b3f88(r0_7, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_8 == 8u) {
        guest::cpu()->r[13] += 8u;
        return 3u;
    }
    r0_9 = call_002f74c8(r0_8, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_10 = call_005b3f88(r0_9, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_10 == 9u) {
        guest::cpu()->r[13] += 8u;
        return 3u;
    }
    r0_11 = call_002f74c8(r0_10, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_12 = call_005b3f88(r0_11, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_12 == 0xau) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        return 3u;
    }
    r0_13 = call_002f74c8(r0_12, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_14 = call_005b3f88(r0_13, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_14 != 0xbu) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        return 0u;
    }
    guest::cpu()->r[13] += 8u;
    return 3u;
}

}  // namespace d_001e8364
GUEST_EXPORT(0x001e8364, d_001e8364::f_001e8364);

// f_001e83e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e83e4 {

inline guest::global<u32, 0x001e8474> global_001e8474;  // (from the original)
inline constexpr guest::Function<0x005601b8, u32(u32, u32, u32, u32)> call_005601b8;  // (from the original)

u32 f_001e83e4(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    u32 r0_1 = 0;
    float S3_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    float S0_1 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    float S3_2 = 0;
    float S0_2 = 0;
    float S1_3 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    r2_1 = 0x85e504u + (r2 + (r2 << 3) << 2);  // (from the original)
    r1_1 = r2_1 + (r1 + (r1 << 1) << 2) - 0x12cu;  // (from the original)
    r13 = r13 - 0x20u;  // (from the original)
    S1_1 = std::bit_cast<float>(*gptr<u32>(r1_1 + 4));
    S2_1 = std::bit_cast<float>(*gptr<u32>(r1_1 + 8));
    r0_1 = r13 + 8u;
    S3_1 = std::bit_cast<float>(*global_001e8474);
    *gptr<u32>(r0_1) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r1_1))));
    *gptr<u32>(r0_1 + 4) = u32(std::bit_cast<u32>(S1_1));
    *gptr<u32>(r0_1 + 8) = u32(std::bit_cast<u32>(S2_1));
    *gptr<u32>(r0_1 + 0xc) = u32(std::bit_cast<u32>(S3_1));  // (from the original)
    *gptr<u8>(r13) = u8(0xffu);  // (from the original)
    *gptr<u8>(r13 + 1u) = u8(0u);
    *gptr<u8>(r13 + 2u) = u8(0u);
    r3_1 = r13 + 8u;
    *gptr<u8>(r13 + 3u) = u8(0u);
    r0_2 = r13;
    S0_1 = std::bit_cast<float>(*gptr<u32>(r3_1));
    S1_2 = std::bit_cast<float>(*gptr<u32>(r3_1 + 4));
    S2_2 = std::bit_cast<float>(*gptr<u32>(r3_1 + 8));
    S3_2 = std::bit_cast<float>(*gptr<u32>(r3_1 + 0xc));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    guest::cpu()->s[3] = S3_2;
    call_005601b8(r0_2, 0xffu, r2_1, r3_1);  // (from the original)
    S0_2 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    r1_2 = *gptr<u32>(r13);
    *gptr<u8>(r0) = u8(r1_2);
    r0_3 = r1_2 << 0x10;  // (from the original)
    *gptr<u8>(r0 + 1u) = u8(r0_3 >> 0x18);  // (from the original)
    *gptr<u8>(r0 + 2u) = u8(r1_2 << 8 >> 0x18);  // (from the original)
    *gptr<u8>(r0 + 3u) = u8(r1_2 >> 0x18);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_3;
    return r0_3;
}

}  // namespace d_001e83e4
GUEST_EXPORT(0x001e83e4, d_001e83e4::f_001e83e4);

// f_001e848c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e848c {


u32 f_001e848c() {
    *gptr<u8>(0x9520bcu + 8u) = u8(0u);  // (from the original)
    *gptr<u32>(0x9520bcu + 0x50u) = u32(1u);  // (from the original)
    guest::cpu()->r[1] = 1u;
    return 0x9520bcu;  // (from the original)
}

}  // namespace d_001e848c
GUEST_EXPORT(0x001e848c, d_001e848c::f_001e848c);

// f_001e84c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e84c8 {


u32 f_001e84c8() {
    *gptr<u8>(0x9520bcu + 8u) = u8(1u);  // (from the original)
    *gptr<u32>(0x9520bcu + 0x50u) = u32(1u);  // (from the original)
    guest::cpu()->r[1] = 1u;
    return 0x9520bcu;  // (from the original)
}

}  // namespace d_001e84c8
GUEST_EXPORT(0x001e84c8, d_001e84c8::f_001e84c8);

// f_001e8ba4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e8ba4 {

inline constexpr guest::Function<0x00346090, u32(u32, u32, u32, u32)> call_00346090;  // (from the original)

u32 f_001e8ba4(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r1 = 0;
    u32 res_1 = 0;
    u32 r2_1 = 0;
    u32 r4_1 = 0;
    u32 res_2 = 0;
    u32 nf_1 = 0;
    u32 vf_1 = 0;
    u32 res_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r0 = call_00346090(r0, 0u, r2, r3);
    res_1 = r0 & 0x80000000u;  // (from the original)
    if (!(res_1 >> 0x1f)) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = res_1;
        return 0u;
    }
    r1 = r0 & 0x3fc00u;  // (from the original)
    r3 = 0x952630u;  // (from the original)
    r2_1 = r1 >> 0xa;  // (from the original)
    if (r2_1 != 0x11u) {  // (from the original)
        goto L_1e8c08;
    }
    r1 = r0 << 0x16 >> 0x16;  // (from the original)
    if (s32(r1) < s32(0x64u)) {  // (from the original)
        goto L_1e8c08;
    }
    if (s32(r1) > s32(0xb3u)) {  // (from the original)
        goto L_1e8c08;
    }
    if (s32(r1) < s32(0x82u)) {  // (from the original)
        goto L_1e8bf8;
    }
L_1e8bf0:;
    r4_1 = 1u;
    *gptr<u32>(r3 + 4u) = u32(r0);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r4_1;
L_1e8bf8:;
    r4_1 = 4u;
    *gptr<u32>(r3 + 4u) = u32(r0);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r4_1;
L_1e8c08:;
    if (r2_1 != 0x11u) {  // (from the original)
        guest::preempt();
        goto L_1e8bf8;
    }
    r1 = r0 << 0x16 >> 0x16;  // (from the original)
    res_2 = r1 - 0x118u;  // (from the original)
    nf_1 = res_2 >> 0x1f;  // (from the original)
    vf_1 = ((r1 ^ 0x118u) & (r1 ^ res_2)) >> 0x1f;  // (from the original)
    if (nf_1 == vf_1) {
        res_3 = 0x14eu - r1;  // (from the original)
        nf_1 = res_3 >> 0x1f;  // (from the original)
        vf_1 = ((0x14eu ^ r1) & (0x14eu ^ res_3)) >> 0x1f;  // (from the original)
    }
    if (nf_1 != vf_1) {
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

inline guest::global<u32, 0x00952630> global_00952630;  // (from the original)
inline constexpr guest::Function<0x00135520, u32(u32, u32, u32, u32)> call_00135520;  // (from the original)
inline constexpr guest::Function<0x00345f60, u32(u32, u32, u32, u32)> call_00345f60;  // (from the original)

u32 f_001e8c34(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = *global_00952630;
    r0_2 = call_00345f60(r0_1, guest::cpu()->r[1], r0, 0u);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_3 = r0_2 & 0x80000000u;  // (from the original)
    if (r0_3 >> 0x1f != (r0_3 & (r0_3 ^ r0_3)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        return 0u;
    }
    r0_4 = *global_00952630;
    call_00135520(r0_4, guest::cpu()->r[1], r2_1, r3_1);
    guest::cpu()->r[13] += 8u;
    return 1u;
}

}  // namespace d_001e8c34
GUEST_EXPORT(0x001e8c34, d_001e8c34::f_001e8c34);

// f_001e90e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e90e4 {

inline constexpr guest::Function<0x001f4fec, u32(u32, u32, u32, u32)> call_001f4fec;  // (from the original)

u32 f_001e90e4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r1_1 = r1 + 4u;
    r0_1 = call_001f4fec(r0, r1_1, r2, r3);
    r2_1 = *gptr<u32>(r1);
    *gptr<u32>(r0_1) = u32(r2_1);
    *gptr<u32>(r0_1 + *gptr<u32>(r2_1 - 0xcu)) = u32(*gptr<u32>(r1 + 0xcu));  // (from the original)
    *gptr<u8>(r0_1 + 0xc9u) = u8(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0xcau) = u8(0u);  // (from the original)
    *gptr<u16>(r0_1 + 0xccu) = u16(0u);  // (from the original)
    *gptr<u16>(r0_1 + 0xceu) = u16(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0u;
    return r0_1;
}

}  // namespace d_001e90e4
GUEST_EXPORT(0x001e90e4, d_001e90e4::f_001e90e4);

// f_001eb754: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001eb754 {

inline guest::global<u32, 0x0083e5e4> global_0083e5e4;  // (from the original)
inline constexpr guest::Function<0x001e90bc, u32(u32, u32, u32, u32)> call_001e90bc;  // (from the original)
inline constexpr guest::Function<0x002073dc, u32(u32, u32, u32, u32)> call_002073dc;  // (from the original)
inline constexpr guest::Function<0x006c81f8, u32(u32, u32, u32, u32)> call_006c81f8;  // (from the original)
inline constexpr guest::Function<0x007207d8, u32(u32, u32, u32, u32)> call_007207d8;  // (from the original)

u32 f_001eb754(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3, float S4, float S5, float S6, float S7) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S4_1 = 0;
    float S5_1 = 0;
    float S6_1 = 0;
    float S7_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    float S3_2 = 0;
    float S4_2 = 0;
    float S5_2 = 0;
    float S6_2 = 0;
    float S7_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    float S1_3 = 0;
    float S2_3 = 0;
    float S3_3 = 0;
    float S4_3 = 0;
    float S5_3 = 0;
    float S6_3 = 0;
    float S7_3 = 0;
    u32 ea_1 = 0;
    float S0_3 = 0;
    u32 r0_6 = 0;
    u32 r2_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    float S0_4 = 0;
    float S1_4 = 0;
    r13 = r13 - 0x58u;  // (from the original)
    r0_1 = r0 + 0x1e8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0_2 = call_007207d8(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    S2_1 = guest::cpu()->s[2];
    S3_1 = guest::cpu()->s[3];
    S4_1 = guest::cpu()->s[4];
    S5_1 = guest::cpu()->s[5];
    S6_1 = guest::cpu()->s[6];
    S7_1 = guest::cpu()->s[7];
    if (r0_2 != 0) {
        r13 = r13 + 0x58u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0_2;
    }
    r1_2 = *gptr<u32>(r1 + 4);
    r2_1 = *gptr<u32>(r1 + 8);
    r3_1 = r13 + 0x30u;  // (from the original)
    *gptr<u32>(r3_1) = u32(*gptr<u32>(r1));
    *gptr<u32>(r3_1 + 4) = u32(r1_2);
    *gptr<u32>(r3_1 + 8) = u32(r2_1);
    r0_3 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    guest::cpu()->s[6] = S6_1;
    guest::cpu()->s[7] = S7_1;
    call_006c81f8(r0_3, 0u, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    S3_2 = guest::cpu()->s[3];
    S4_2 = guest::cpu()->s[4];
    S5_2 = guest::cpu()->s[5];
    S6_2 = guest::cpu()->s[6];
    S7_2 = guest::cpu()->s[7];
    *gptr<u32>(r13 + 0x34u) = u32(std::bit_cast<u32>(S0_2));  // (from the original)
    r0_4 = u32(*gptr<u8>(r0 + 0xc9u));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    guest::cpu()->s[3] = S3_2;
    guest::cpu()->s[4] = S4_2;
    guest::cpu()->s[5] = S5_2;
    guest::cpu()->s[6] = S6_2;
    guest::cpu()->s[7] = S7_2;
    r0_5 = call_001e90bc(r0_4, r1_3, r2_2, r3_2);
    S1_3 = std::bit_cast<float>(*gptr<u32>(0x83e5e4u + 4));  // (from the original)
    S2_3 = std::bit_cast<float>(*gptr<u32>(0x83e5e4u + 8));  // (from the original)
    S3_3 = std::bit_cast<float>(*gptr<u32>(0x83e5e4u + 0xc));  // (from the original)
    S4_3 = std::bit_cast<float>(*gptr<u32>(0x83e5e4u + 0x10));  // (from the original)
    S5_3 = std::bit_cast<float>(*gptr<u32>(0x83e5e4u + 0x14));  // (from the original)
    S6_3 = std::bit_cast<float>(*gptr<u32>(0x83e5e4u + 0x18));  // (from the original)
    S7_3 = std::bit_cast<float>(*gptr<u32>(0x83e5e4u + 0x1c));  // (from the original)
    ea_1 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(ea_1) = u32(std::bit_cast<u32>(std::bit_cast<float>(*global_0083e5e4)));
    *gptr<u32>(ea_1 + 4) = u32(std::bit_cast<u32>(S1_3));
    *gptr<u32>(ea_1 + 8) = u32(std::bit_cast<u32>(S2_3));
    *gptr<u32>(ea_1 + 0xc) = u32(std::bit_cast<u32>(S3_3));  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(std::bit_cast<u32>(S4_3));  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(std::bit_cast<u32>(S5_3));  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(std::bit_cast<u32>(S6_3));  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(std::bit_cast<u32>(S7_3));  // (from the original)
    S0_3 = std::bit_cast<float>(*gptr<u32>(r13 + 0x10u + (r0_5 << 2)));  // (from the original)
    r0_6 = r13 + 0x3cu;  // (from the original)
    *gptr<u32>(r0_6) = u32(std::bit_cast<u32>(S0_3));
    *gptr<u32>(r0_6 + 4) = u32(std::bit_cast<u32>(S0_3));
    *gptr<u32>(r0_6 + 8) = u32(std::bit_cast<u32>(S0_3));
    *gptr<u32>(r13 + 8u) = u32(0u);
    *gptr<u32>(r13) = u32(r0_6);
    *gptr<u32>(r13 + 4) = u32(1u);
    r2_3 = r13 + 0x30u;  // (from the original)
    r0_7 = r0 + 0x1e8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S0_3;
    guest::cpu()->s[2] = S0_3;
    guest::cpu()->s[3] = S3_3;
    guest::cpu()->s[4] = S4_3;
    guest::cpu()->s[5] = S5_3;
    guest::cpu()->s[6] = S6_3;
    guest::cpu()->s[7] = S7_3;
    r0_8 = call_002073dc(r0_7, 0x1fau, r2_3, 0x975beeu);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    S0_4 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    r13 = r13 + 0x58u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    return r0_8;
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
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 zf_1 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r1_1 = 0;
    u32 ea_1 = 0;
    u32 r3_1 = 0;
    u32 ea_2 = 0;
    u32 r1_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 r0_6 = 0;
    u32 r1_5 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    r13 = r13 - 0x10;  // (from the original)
    zf_1 = r1 == 0;
    r4_1 = r1;
    if (zf_1) {
        r4_1 = 0x8ebf88u;  // (from the original)
    }
    if (zf_1) {
        r5_1 = 1u;
    } else {
        r5_1 = 0u;
    }
    r1_1 = *gptr<u32>(r4_1);
    arg0->word_0 = u32(r1_1);
    ea_1 = r4_1 + 0x28u;  // (from the original)
    r3_1 = *gptr<u32>(ea_1);
    *gptr<u32>(r0 + *gptr<u32>(r1_1 - 0xcu)) = u32(r3_1);  // (from the original)
    ea_2 = r4_1 + 0x2cu;  // (from the original)
    r1_2 = *gptr<u32>(ea_2);
    ea_3 = r0 + 0xd0u;  // (from the original)
    arg0->word_d0 = u32(r1_2);
    ea_4 = ea_3 + 0xbcu;  // (from the original)
    arg0->word_18c = u32(0x8ebf24u);  // (from the original)
    r0_1 = ea_4 + 0x5cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_002e6944(r0_1, r1_2, 0x8ebf24u, r3_1);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_3 = r0_2 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_002e6944(r0_3, r1_3, r2_1, r3_2);
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = r0_4 - 0x1d0u;  // (from the original)
    r1_4 = r4_1 + 4u;
    guest::cpu()->r[13] = r13;
    r0_6 = call_0027dd00(r0_5, r1_4, r2_2, r3_3);
    r1_5 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r5_1 != 0) {
        r0_7 = r0_6 + 0x20cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_8 = call_002706ec(r0_7, r1_5, r2_3, r3_4);
        r1_5 = guest::cpu()->r[1];
        r0_6 = r0_8 - 0x20cu;  // (from the original)
    }
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return r0_6;
}

}  // namespace d_001ed4a4
GUEST_EXPORT(0x001ed4a4, d_001ed4a4::f_001ed4a4);

// f_001ed520: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ed520 {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb96c, u32(u32, u32, u32, u32)> call_002fb96c;  // (from the original)

u32 f_001ed520(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r0_1 = 0;
    u32 res_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_002fae84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x6214fu;  // (from the original)
    r5 = r0_1 + r1;
    res_1 = u32(*gptr<u8>(r5 + 6u)) >> 7;
    r0_2 = res_1;
    if (res_1 == 0) {
        r4 = 0u;
        r6 = 0xau;  // (from the original)
    } else {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_2;
    }
L_1ed544:;
    r0_3 = r4 & 0xffu;  // (from the original)
    r0_4 = call_002fb96c(r0_3, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_4 == 0) {
        goto L_1ed580;
    }
    r0_4 = u32(*gptr<u8>(r0_4 + 0x5710u)) << 0x19;  // (from the original)
    if (r6 != r0_4 >> 0x1c) {  // (from the original)
        goto L_1ed580;
    }
    r0_2 = u32(*gptr<u8>(r5 + 6u)) | 0x80u;  // (from the original)
    *gptr<u8>(r5 + 6u) = u8(r0_2);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_2;
L_1ed580:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(4u)) {
        guest::preempt();
        goto L_1ed544;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_4;
}

}  // namespace d_001ed520
GUEST_EXPORT(0x001ed520, d_001ed520::f_001ed520);

// f_001ed594: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ed594 {

inline guest::global<u8, 0x0094ddc0> global_0094ddc0;  // (from the original)

u32 f_001ed594() {
    *gptr<u32>(0x94ddc0u + 8u) = u32(0u);  // (from the original)
    *global_0094ddc0 = u8(0u);
    *gptr<u8>(0x94ddc0u + 1u) = u8(0u);  // (from the original)
    *gptr<u8>(0x94ddc0u + 2u) = u8(0u);  // (from the original)
    guest::cpu()->r[1] = 0u;
    return 0x94ddc0u;  // (from the original)
}

}  // namespace d_001ed594
GUEST_EXPORT(0x001ed594, d_001ed594::f_001ed594);

// f_001ed5b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ed5b4 {

inline guest::global<u32, 0x00aaf14c> global_00aaf14c;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x005c5aa8, u32(u32, u32, u32, u32)> call_005c5aa8;  // (from the original)

u32 f_001ed5b4(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 res_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r3_3 = 0;
    u32 r2_3 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r0_7 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r4_1 = 1u;
    r0_1 = *global_00aaf14c;
    if (r0_1 != 0) {
        res_1 = 1u & ~u32(*gptr<u8>(r0_1 + 0x55bau));  // (from the original)
        r4_1 = res_1;
        if (res_1 == 0) {
            goto L_1ed608;
        }
    }
    r0_2 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fcbb0(r0_2, 0x286du, r2, r3);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r4_1 != 0) {
        r1_1 = 0x25dcu;  // (from the original)
        goto L_1ed614;
    }
    goto L_1ed610;
L_1ed608:;
    r0_3 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fcbb0(r0_3, 0x2866u, r2, r3);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
L_1ed610:;
    r1_1 = 0x25dbu;  // (from the original)
L_1ed614:;
    r0_4 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fcbb0(r0_4, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r4_1 == 0) {
        r1_2 = 0x2768u;  // (from the original)
    } else {
        r1_2 = 0x2769u;  // (from the original)
    }
    r0_5 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fcbb0(r0_5, r1_2, r2_2, r3_2);
    r3_3 = r13 + 0x14u;  // (from the original)
    r2_3 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r13) = u32(0x95bfdcu);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(0x95bfdcu);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(0x95bfdcu);  // (from the original)
    r0_6 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005c5aa8(r0_6, 0x95bfdcu, r2_3, r3_3);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r0_7 = r13 + 0xcu;  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_7;
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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r5_1 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r2_2 = 0;
    u32 r1_2 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r2_3 = 0;
    u32 r1_3 = 0;
    u32 zf_1 = 0;
    u32 r0_12 = 0;
    u32 r1_4 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r2_4 = 0;
    u32 r1_5 = 0;
    u32 r0_15 = 0;
    u32 zf_2 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r2_5 = 0;
    u32 r1_6 = 0;
    u32 r0_19 = 0;
    r13 = r13 - 0x50u;  // (from the original)
    r4 = r0;
    if (r1 == 0) {
        r13 = r13 + 0x50u;  // (from the original)
        guest::cpu()->r[13] = r13;
        return call_001edaec(r0, r1, r2, guest::cpu()->r[3]);
    }
    if (r1 == 1u) {
        goto L_1ee22c;
    }
    if (r1 == 2u) {
        goto L_1ee3d8;
    }
    if (r1 != 3u) {
        r0_1 = 0u;
        r13 = r13 + 0x50u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    arg0->word_260 = u32(0x19u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_00237048(r4, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fb94c(r0_2, r1_1, r2_1, guest::cpu()->r[3]);
    r0_4 = r0_3 + 0x5700u;  // (from the original)
    r1 = u32(*gptr<u8>(r0_4 + 0x12u)) | 4u;  // (from the original)
    *gptr<u8>(r0_4 + 0x12u) = u8(r1);  // (from the original)
L_1ee214:;
    r0_1 = 1u;
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_1;
L_1ee22c:;
    r0_5 = *gptr<u32>(r4 + 0x24cu);  // (from the original)
    r5_1 = 0u;
    if (r0_5 == 0) {
        r0_6 = *gptr<u32>(r4 + 0xe0u);  // (from the original)
    } else {
        r0_6 = *gptr<u32>(r0_5 + 0xe0u);  // (from the original)
    }
    if (r0_6 != 0) {
        if (r0_6 == 1u) {
            goto L_1ee324;
        }
        if (r0_6 != 2u) {
            r13 = r13 + 0x50u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r5_1;
        }
        goto L_1ee3b8;
    }
    r0_7 = *gptr<u32>(*gptr<u32>(r4 + 4u) + 0x34cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_00759b24(r0_7, r1, r2, guest::cpu()->r[3]);
    r0_9 = *gptr<u32>(r0_8 + 0xa8u);  // (from the original)
    r2_2 = r4 + 0x280u;  // (from the original)
    *gptr<u32>(r2_2) = u32(r0_9);
    *gptr<u32>(r2_2 + 4) = u32(r0_9 + 0xdu);  // (from the original)
    *gptr<u32>(r13 + 0x3cu) = u32(0x1ee428u);  // (from the original)
    r1_2 = r13 + 0x38u;  // (from the original)
    r0_10 = r13 + 8u;
    *gptr<u32>(r13 + 0x38u) = u32(0x9047f8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00810e14(r0_10, r1_2, r2_2, guest::cpu()->r[3]);
    if (*gptr<u32>(*gptr<u32>(r4 + 0x84u) + 0x18u) != 0) {  // (from the original)
        r0_11 = *gptr<u32>(*gptr<u32>(r4 + 0x84u) + 0x18u);  // (from the original)
        r2_3 = *gptr<u32>(r4 + 0x284u);  // (from the original)
        r1_3 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        call_005f3d70(r0_11, r1_3, r2_3, guest::cpu()->r[3]);
    }
    *gptr<u8>(r4 + 0x27cu) = u8(1u);  // (from the original)
    r1 = *gptr<u32>(r4 + 0x24cu);  // (from the original)
    zf_1 = r1 == 0;
    if (zf_1) {
        r0_12 = *gptr<u32>(r4 + 0xe0u);  // (from the original)
    } else {
        r0_12 = *gptr<u32>(r1 + 0xe0u);  // (from the original)
    }
    r0 = r0_12 + 1u;
    if (zf_1) {
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
    r1_4 = r13 + 8u;
    r0_13 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(0x9047f8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00810e14(r0_13, r1_4, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (*gptr<u32>(*gptr<u32>(r4 + 0x84u) + 0x18u) == 0) {  // (from the original)
        r13 = r13 + 0x50u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r5_1;
    }
    r0_14 = *gptr<u32>(*gptr<u32>(r4 + 0x84u) + 0x18u);  // (from the original)
    r2_4 = *gptr<u32>(r4 + 0x284u);  // (from the original)
    r1_5 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_15 = call_005f3d70(r0_14, r1_5, r2_4, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r5_1 = r0_15;
    if (r0_15 != 1u) {
        r13 = r13 + 0x50u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r5_1;
    }
    r1 = *gptr<u32>(r4 + 0x24cu);  // (from the original)
    zf_2 = r1 == 0;
    if (zf_2) {
        r0_16 = *gptr<u32>(r4 + 0xe0u);  // (from the original)
    } else {
        r0_16 = *gptr<u32>(r1 + 0xe0u);  // (from the original)
    }
    r0 = r0_16 + 1u;
    if (zf_2) {
        guest::preempt();
        goto L_1ee31c;
    }
    guest::preempt();
    goto L_1ee314;
L_1ee3a8:;
    r5_1 = 2u;
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r5_1;
L_1ee3b8:;
    r0_17 = *gptr<u32>(r4 + 4u);
    if (r0_17 != 0) {
        guest::cpu()->r[13] = r13;
        call_0075ce84(r0_17, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    guest::preempt();
    goto L_1ee3a8;
L_1ee3d8:;
    guest::cpu()->r[13] = r13;
    r0_18 = call_002fb94c(r0, r1, r2, guest::cpu()->r[3]);
    r2_5 = guest::cpu()->r[2];
    r1_6 = *gptr<u32>(r4 + 0x280u);  // (from the original)
    if (r1_6 != 0) {
        r1 = r1_6 - 1u & 0xffu;  // (from the original)
        *gptr<u8>(r0_18 + 0x56d8u) = u8(r1);  // (from the original)
        guest::preempt();
        goto L_1ee214;
    }
    r0_19 = r0_18 + 0x56c4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001df140(r0_19, r1_6, r2_5, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::preempt();
    goto L_1ee214;
}

}  // namespace d_001ee1c0
GUEST_EXPORT(0x001ee1c0, d_001ee1c0::f_001ee1c0);

// f_001ee438: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ee438 {

inline guest::global<u32, 0x0095debc> global_0095debc;  // (from the original)
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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r5_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r3_2 = 0;
    u32 r0_8 = 0;
    u32 r2_2 = 0;
    u32 r1_2 = 0;
    u32 r0_9 = 0;
    u32 r3_3 = 0;
    u32 r0_10 = 0;
    u32 r2_3 = 0;
    u32 r1_3 = 0;
    u32 zf_1 = 0;
    u32 r0_11 = 0;
    u32 r1_4 = 0;
    u32 r0_12 = 0;
    u32 r3_4 = 0;
    u32 r0_13 = 0;
    u32 r2_4 = 0;
    u32 r1_5 = 0;
    u32 r0_14 = 0;
    u32 zf_2 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r6_1 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 zf_3 = 0;
    u32 r4_1 = 0;
    u32 r0_20 = 0;
    u32 r1_6 = 0;
    u32 r3_6 = 0;
    u32 r1_7 = 0;
    u32 r0_21 = 0;
    u32 r1_8 = 0;
    u32 r0_22 = 0;
    r13 = r13 - 0x50u;  // (from the original)
    r4 = r0;
    if (r1 != 0) {
        if (r1 == 1u) {
            goto L_1ee498;
        }
        if (r1 != 2u) {
            r0_1 = 0u;
            r13 = r13 + 0x50u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0_1;
        }
        guest::cpu()->r[13] = r13;
        r0_2 = call_002fb94c(r0, r1, r2, r3);
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        r0_3 = u32(*gptr<u8>(0x8ac3u + r0_2)) & 0x80u;  // (from the original)
        if (*gptr<u32>(r4 + 0x280u) == 0) {  // (from the original)
            goto L_1ee708;
        }
        if (r0_3 == 0) {
            goto L_1ee6bc;
        }
        goto L_1ee6e4;
    }
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_001edaec(r0, r1, r2, r3);
L_1ee498:;
    r0_4 = *gptr<u32>(r4 + 0x24cu);  // (from the original)
    r5_1 = 0u;
    if (r0_4 == 0) {
        r0_5 = *gptr<u32>(r4 + 0xe0u);  // (from the original)
    } else {
        r0_5 = *gptr<u32>(r0_4 + 0xe0u);  // (from the original)
    }
    if (r0_5 != 0) {
        if (r0_5 == 1u) {
            goto L_1ee594;
        }
        if (r0_5 != 2u) {
            goto L_1ee6b0;
        }
        goto L_1ee618;
    }
    r0_6 = *gptr<u32>(*gptr<u32>(r4 + 4u) + 0x34cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_7 = call_00759b24(r0_6, r1, r2, r3);
    r3_2 = guest::cpu()->r[3];
    r0_8 = *gptr<u32>(r0_7 + 0xa8u);  // (from the original)
    r2_2 = r4 + 0x280u;  // (from the original)
    *gptr<u32>(r2_2) = u32(r0_8);
    *gptr<u32>(r2_2 + 4) = u32(r0_8 + 0xdu);  // (from the original)
    *gptr<u32>(r13 + 0x3cu) = u32(0x1ee748u);  // (from the original)
    r1_2 = r13 + 0x38u;  // (from the original)
    r0_9 = r13 + 8u;
    *gptr<u32>(r13 + 0x38u) = u32(0x9047f8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00810e14(r0_9, r1_2, r2_2, r3_2);
    r3_3 = guest::cpu()->r[3];
    if (*gptr<u32>(*gptr<u32>(r4 + 0x84u) + 0x18u) != 0) {  // (from the original)
        r0_10 = *gptr<u32>(*gptr<u32>(r4 + 0x84u) + 0x18u);  // (from the original)
        r2_3 = *gptr<u32>(r4 + 0x284u);  // (from the original)
        r1_3 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        call_005f3d70(r0_10, r1_3, r2_3, r3_3);
    }
    *gptr<u8>(r4 + 0x27cu) = u8(1u);  // (from the original)
    r1 = *gptr<u32>(r4 + 0x24cu);  // (from the original)
    zf_1 = r1 == 0;
    if (zf_1) {
        r0_11 = *gptr<u32>(r4 + 0xe0u);  // (from the original)
    } else {
        r0_11 = *gptr<u32>(r1 + 0xe0u);  // (from the original)
    }
    r0 = r0_11 + 1u;
    if (zf_1) {
        goto L_1ee588;
    }
L_1ee580:;
    *gptr<u32>(r1 + 0xe0u) = u32(r0);  // (from the original)
    goto L_1ee58c;
L_1ee588:;
    *gptr<u32>(r4 + 0xe0u) = u32(r0);  // (from the original)
L_1ee58c:;
    r5_1 = 2u;
    goto L_1ee6b0;
L_1ee594:;
    *gptr<u32>(r13 + 0xcu) = u32(0x1ee748u);  // (from the original)
    r1_4 = r13 + 8u;
    r0_12 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(0x9047f8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00810e14(r0_12, r1_4, r2, r3);
    r1 = guest::cpu()->r[1];
    r3_4 = guest::cpu()->r[3];
    if (*gptr<u32>(*gptr<u32>(r4 + 0x84u) + 0x18u) == 0) {  // (from the original)
        goto L_1ee6b0;
    }
    r0_13 = *gptr<u32>(*gptr<u32>(r4 + 0x84u) + 0x18u);  // (from the original)
    r2_4 = *gptr<u32>(r4 + 0x284u);  // (from the original)
    r1_5 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_14 = call_005f3d70(r0_13, r1_5, r2_4, r3_4);
    r1 = guest::cpu()->r[1];
    r5_1 = r0_14;
    if (r0_14 != 1u) {
        goto L_1ee6b0;
    }
    r1 = *gptr<u32>(r4 + 0x24cu);  // (from the original)
    zf_2 = r1 == 0;
    if (zf_2) {
        r0_15 = *gptr<u32>(r4 + 0xe0u);  // (from the original)
    } else {
        r0_15 = *gptr<u32>(r1 + 0xe0u);  // (from the original)
    }
    r0 = r0_15 + 1u;
    if (zf_2) {
        guest::preempt();
        goto L_1ee588;
    }
    guest::preempt();
    goto L_1ee580;
L_1ee618:;
    r5_1 = 2u;
    r0_16 = *gptr<u32>(r4 + 4u);
    if (r0_16 == 0) {
        goto L_1ee6b0;
    }
    guest::cpu()->r[13] = r13;
    r0_17 = call_0075ce84(r0_16, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_17 == 0) {
        goto L_1ee6b0;
    }
    r6_1 = *gptr<u32>(r4 + 0x280u) + 0x20u;  // (from the original)
    r0_18 = *gptr<u32>(r4 + 4u);
    if (r0_18 == 0) {
        goto L_1ee6ac;
    }
    r0_19 = *gptr<u32>(r0_18 + 0x354u);  // (from the original)
    zf_3 = r0_19 == 0;
    r4_1 = *global_0095debc;
    if (!zf_3) {
        zf_3 = r4_1 == 0;
    }
    if (zf_3) {
        goto L_1ee6ac;
    }
    r0_20 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_005fcfd8(r0_20, r1, r2_5, r3_5);
    r1_6 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_0075be20(r4_1, r1_6, 0x1ee764u, r6_1);  // (from the original)
    r3_6 = guest::cpu()->r[3];
    r1_7 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_005f11f4(r0_19, r1_7, 0x11u, r3_6);  // (from the original)
    r1 = guest::cpu()->r[1];
L_1ee6ac:;
    r5_1 = 1u;
L_1ee6b0:;
    r0_1 = r5_1;
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_1;
L_1ee6bc:;
    r0_21 = u32(*gptr<u8>(r0_2 + 0x56d8u));  // (from the original)
    if ((u32(*gptr<u8>(0x56d9u + r0_2)) & 2u) == 0) {  // (from the original)
        r0_21 = 8u;
    }
    *gptr<u8>(0x8ac3u + r0_2) = u8(r0_21 | 0x80u);  // (from the original)
L_1ee6e4:;
    r1_8 = *gptr<u32>(r4 + 0x280u) - 1u & 0xffu;  // (from the original)
    *gptr<u8>(r0_2 + 0x56d8u) = u8(r1_8);  // (from the original)
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[1] = r1_8;
    guest::cpu()->r[13] = r13;
    return 1u;
L_1ee708:;
    if (r0_3 == 0) {
        r1_1 = u32(*gptr<u8>(r0_2 + 0x56d8u)) | 0x80u;  // (from the original)
        *gptr<u8>(0x8ac3u + r0_2) = u8(r1_1);  // (from the original)
    }
    r0_22 = r0_2 + 0x56c4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001df140(r0_22, r1_1, r2_1, r3_1);
    r1_8 = guest::cpu()->r[1];
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[1] = r1_8;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_001ee438
GUEST_EXPORT(0x001ee438, d_001ee438::f_001ee438);
