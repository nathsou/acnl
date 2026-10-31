// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "graphics/hemisphere_light.hpp"

#include <bit>

using guest::gptr;

// f_005b0120: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b0120 {

struct __attribute__((packed)) Object_005b0120_0 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(Object_005b0120_0, word_28, 0x28);  // (from the original)


u32 f_005b0120(gptr<Object_005b0120_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    r2 = arg0->word_28;
    r2 = r2 & ~0x1e00u | 0x1e00u & ((r2 & 0x1e00u) >> 9 & ~lsl_r(1u, r1 & 0xff)) << 9;  // (from the original)
    r1 = r0 + (r1 << 2);
    arg0->word_28 = u32(r2);
    r0 = 0u;
    *gptr<u32>(r1 + 0x30u) = u32(r0);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005b0120
GUEST_EXPORT(0x005b0120, d_005b0120::f_005b0120);

// f_005b0164: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b0164 {

struct __attribute__((packed)) Object_005b0164_1 {
    u8 unknown_0[0x2];  // (not used here)
    u16 half_2;
};
GUEST_OFFSET(Object_005b0164_1, half_2, 0x2);  // (from the original)

inline constexpr guest::Function<0x00100ef9, u32(u32, u32, u32, u32)> call_00100ef8;  // (from the original)
inline constexpr guest::Function<0x005b01c0, u32(u32, u32, u32, u32)> call_005b01c0;  // (from the original)

u32 f_005b0164(u32 r0, gptr<Object_005b0164_1> arg1) {
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x18u;  // (from the original)
    r1 = 0x5b01a8u;  // (from the original)
    r3 = u32(arg1->half_2) + 1u;
    r2 = *gptr<u32>(0x981694u);  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00100ef8(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r13;
    r1 = 8u;
    r0 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005b01c0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005b0164
GUEST_EXPORT(0x005b0164, d_005b0164::f_005b0164);

// f_005b027c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b027c {

inline constexpr guest::Function<0x005b028c, u32(u32, u32, u32, u32)> call_005b028c;  // (from the original)

u32 f_005b027c(u32 r0, u32 r1) {
    u32 r2 = 0;
    r2 = r1;
    r1 = 8u;
    r0 = r0 + 4u;
    return call_005b028c(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_005b027c
GUEST_EXPORT(0x005b027c, d_005b027c::f_005b027c);

// f_005b03fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b03fc {

inline constexpr guest::Function<0x00100ef9, u32(u32, u32, u32, u32)> call_00100ef8;  // (from the original)

u32 f_005b03fc(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r2 = r1;
    r1 = 0x5b0430u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00100ef8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r4 + 0xcu) = u8(u32(*gptr<u8>(r13)));  // (from the original)
    *gptr<u8>(r4 + 0xdu) = u8(u32(*gptr<u8>(r13 + 1u)));  // (from the original)
    r0 = u32(*gptr<u8>(r13 + 2u));
    *gptr<u8>(r4 + 0xeu) = u8(r0);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005b03fc
GUEST_EXPORT(0x005b03fc, d_005b03fc::f_005b03fc);

// f_005b0438: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b0438 {

struct __attribute__((packed)) Object_005b0438_0 {
    u8 unknown_0[0x2c];  // (not used here)
    u32 word_2c;
};
GUEST_OFFSET(Object_005b0438_0, word_2c, 0x2c);  // (from the original)


void f_005b0438(gptr<Object_005b0438_0> arg0, u32 r1) {
    r1 = r1 & 0x1fu | arg0->word_2c & ~0x1fu;  // (from the original)
    arg0->word_2c = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005b0438
GUEST_EXPORT(0x005b0438, d_005b0438::f_005b0438);

// f_005b0468: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b0468 {

inline constexpr guest::Function<0x005b028c, u32(u32, u32, u32, u32)> call_005b028c;  // (from the original)

u32 f_005b0468(u32 r0, u32 r1) {
    u32 r2 = 0;
    r2 = r1;
    r1 = 8u;
    r0 = r0 + 0xcu;  // (from the original)
    return call_005b028c(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_005b0468
GUEST_EXPORT(0x005b0468, d_005b0468::f_005b0468);

// f_005b0478: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b0478 {

struct __attribute__((packed)) Object_005b0478_1 {
    u16 half_0;
};
GUEST_OFFSET(Object_005b0478_1, half_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00100ef9, u32(u32, u32, u32, u32)> call_00100ef8;  // (from the original)
inline constexpr guest::Function<0x005b01c0, u32(u32, u32, u32, u32)> call_005b01c0;  // (from the original)

u32 f_005b0478(u32 r0, gptr<Object_005b0478_1> arg1, u32 r2) {
    u32 r1 = arg1.addr();
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    if (r2 == 0) {
        r0 = 0x981684u;  // (from the original)
    } else {
        r0 = 0x98168cu;  // (from the original)
    }
    r13 = r13 - 0x18u;  // (from the original)
    r3 = *gptr<u32>(r0);
    r2 = u32(arg1->half_0) + 0x64u;  // (from the original)
    r1 = 0x5b04c8u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00100ef8(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r13;
    r1 = 8u;
    r0 = r4 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005b01c0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005b0478
GUEST_EXPORT(0x005b0478, d_005b0478::f_005b0478);

// f_005b04d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b04d0 {

struct __attribute__((packed)) Object_005b04d0_0 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(Object_005b04d0_0, word_28, 0x28);  // (from the original)


void f_005b04d0(gptr<Object_005b04d0_0> arg0, u32 r1) {
    r1 = arg0->word_28 & ~0x100u & ~0xfeu | r1 << 1;  // (from the original)
    arg0->word_28 = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005b04d0
GUEST_EXPORT(0x005b04d0, d_005b04d0::f_005b04d0);

// f_005b04e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b04e8 {

struct __attribute__((packed)) Object_005b04e8_0 {
    u8 unknown_0[0x2c];  // (not used here)
    u32 word_2c;
};
GUEST_OFFSET(Object_005b04e8_0, word_2c, 0x2c);  // (from the original)


void f_005b04e8(gptr<Object_005b04e8_0> arg0, u32 r1) {
    r1 = 0x1e00000u & r1 << 0x15 | arg0->word_2c & ~0x1e00000u;  // (from the original)
    arg0->word_2c = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005b04e8
GUEST_EXPORT(0x005b04e8, d_005b04e8::f_005b04e8);

// f_005b0504: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b0504 {

struct __attribute__((packed)) Object_005b0504_0 {
    u8 unknown_0[0x2c];  // (not used here)
    u32 word_2c;
};
GUEST_OFFSET(Object_005b0504_0, word_2c, 0x2c);  // (from the original)


void f_005b0504(gptr<Object_005b0504_0> arg0, u32 r1) {
    r1 = arg0->word_2c & ~0x1fffe0u | r1 << 5;  // (from the original)
    arg0->word_2c = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005b0504
GUEST_EXPORT(0x005b0504, d_005b0504::f_005b0504);

// f_005b0588: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b0588 {

inline constexpr guest::Function<0x005b028c, u32(u32, u32, u32, u32)> call_005b028c;  // (from the original)

u32 f_005b0588(u32 r0_unused, u32 r1) {
    u32 r2 = 0;
    r2 = *gptr<u32>(0x981698u + (r1 << 2));  // (from the original)
    if (u32(*gptr<u16>(r2)) == 0x2eu) {  // (from the original)
        r2 = r2 + 2u;
    }
    r1 = 4u;
    return call_005b028c(guest::cpu()->r[0], r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_005b0588
GUEST_EXPORT(0x005b0588, d_005b0588::f_005b0588);

// f_005b05a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b05a8 {

inline constexpr guest::Function<0x005b01c0, u32(u32, u32, u32, u32)> call_005b01c0;  // (from the original)

u32 f_005b05a8(u32 r0_unused, u32 r1) {
    u32 r2 = 0;
    r2 = r1;
    r1 = 4u;
    return call_005b01c0(guest::cpu()->r[0], r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_005b05a8
GUEST_EXPORT(0x005b05a8, d_005b05a8::f_005b05a8);

// f_005b05b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b05b4 {

inline constexpr guest::Function<0x005b028c, u32(u32, u32, u32, u32)> call_005b028c;  // (from the original)

u32 f_005b05b4(u32 r0_unused, u32 r1) {
    u32 r2 = 0;
    r2 = r1;
    r1 = 4u;
    return call_005b028c(guest::cpu()->r[0], r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_005b05b4
GUEST_EXPORT(0x005b05b4, d_005b05b4::f_005b05b4);

// f_005b05c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b05c0 {

struct __attribute__((packed)) Object_005b05c0_0 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(Object_005b05c0_0, word_28, 0x28);  // (from the original)


u32 f_005b05c0(gptr<Object_005b05c0_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    r3 = arg0->word_28;
    arg0->word_28 = u32(r3 & ~0x1e00u | 0x1e00u & (((r3 & 0x1e00u) >> 9 | lsl_r(1u, r1 & 0xff)) & 0xffu) << 9);  // (from the original)
    r0 = r0 + (r1 << 2);
    *gptr<u32>(r0 + 0x30u) = u32(r2);  // (from the original)
    return r0;
}

}  // namespace d_005b05c0
GUEST_EXPORT(0x005b05c0, d_005b05c0::f_005b05c0);

// f_005b0628: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b0628 {


u32 f_005b0628(u32 r0) {
    u32 res = 0;
    u32 r1 = 0;
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    r1 = 0x270eu;  // (from the original)
    res = r0 - r1;
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r0 ^ r1) & (r0 ^ res)) >> 0x1f;  // (from the original)
    if (zf || nf != vf) {
        r0 = 1u;
    }
    if (!zf && nf == vf) {
        r0 = 0u;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005b0628
GUEST_EXPORT(0x005b0628, d_005b0628::f_005b0628);

// f_005b0654: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b0654 {


u32 f_005b0654(u32 r0) {
    u32 res = 0;
    u32 nf = 0;
    u32 vf = 0;
    res = r0 - 0x384u;  // (from the original)
    nf = res >> 0x1f;  // (from the original)
    vf = ((r0 ^ 0x384u) & (r0 ^ res)) >> 0x1f;  // (from the original)
    if (nf != vf) {
        r0 = 1u;
    }
    if (nf == vf) {
        r0 = 0u;
    }
    return r0;
}

}  // namespace d_005b0654
GUEST_EXPORT(0x005b0654, d_005b0654::f_005b0654);

// f_005b0664: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b0664 {

struct __attribute__((packed)) Object_005b0664_0 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(Object_005b0664_0, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005b0664_0, half_2, 0x2);  // (from the original)


void f_005b0664(gptr<Object_005b0664_0> arg0) {
    u32 r1 = 0;
    u32 r2 = 0;
    r1 = uxth(u32(arg0->half_2) + 1u);
    arg0->half_2 = u16(r1);
    if (!u32(r1 >= 0x63u) || u32(r1 == 0x63u)) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return;
    }
    r2 = u32(arg0->half_0);
    r1 = 0u;
    arg0->half_2 = u16(r1);
    r2 = uxth(r2 + 1u);
    arg0->half_0 = u16(r2);
    if (r2 >= 0x384u) {  // (from the original)
        arg0->half_0 = u16(r1);
    }
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005b0664
GUEST_EXPORT(0x005b0664, d_005b0664::f_005b0664);

// f_005b06a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b06a0 {

struct __attribute__((packed)) Object_005b06a0_0 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(Object_005b06a0_0, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005b06a0_0, half_2, 0x2);  // (from the original)


void f_005b06a0(gptr<Object_005b06a0_0> arg0) {
    u32 r1 = 0;
    u32 r2 = 0;
    r2 = u32(arg0->half_0);
    r1 = 0u;
    arg0->half_2 = u16(r1);
    r2 = uxth(r2 + 1u);
    arg0->half_0 = u16(r2);
    if (r2 >= 0x384u) {  // (from the original)
        arg0->half_0 = u16(r1);
    }
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005b06a0
GUEST_EXPORT(0x005b06a0, d_005b06a0::f_005b06a0);

// f_005b0a14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b0a14 {

struct __attribute__((packed)) Object_005b0a14_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u8 byte_28;
};
GUEST_OFFSET(Object_005b0a14_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_005b0a14_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_005b0a14_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_005b0a14_0, byte_28, 0x28);  // (from the original)


void f_005b0a14(gptr<Object_005b0a14_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    ea = r13;
    r12 = *gptr<u32>(ea);
    arg0->word_1c = u32(r1);
    arg0->word_20 = u32(r2);
    arg0->word_24 = u32(r3);
    arg0->byte_28 = u8(r12);
    return;
}

}  // namespace d_005b0a14
GUEST_EXPORT(0x005b0a14, d_005b0a14::f_005b0a14);

// f_005b0c94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b0c94 {

struct __attribute__((packed)) Object_005b0c94_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Object_005b0c94_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_005b0c94_0, word_20, 0x20);  // (from the original)

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x0046f8e8, u32(u32, u32, u32, u32)> call_0046f8e8;  // (from the original)
inline constexpr guest::Function<0x0046f9f8, u32(u32, u32, u32, u32)> call_0046f9f8;  // (from the original)
inline constexpr guest::Function<0x0046fe08, u32(u32, u32, u32, u32)> call_0046fe08;  // (from the original)

u32 f_005b0c94(gptr<Object_005b0c94_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x80u;  // (from the original)
    r4 = r0;
    ea = r13 + 0x80u;  // (from the original)
    r5 = *gptr<u32>(ea);
    r8 = r1;
    r6 = r2;
    r7 = r3;
    r1 = r13 + 0x10u;  // (from the original)
    r2 = arg0->word_1c;
    r3 = arg0->word_20;
    r0 = r0 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0046f9f8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    if (!zf) {
        zf = u32(*gptr<u8>(r13 + 0x32u)) == 0;  // (from the original)
    }
    if (zf) {
        goto L_5b0d44;
    }
    if (*gptr<u32>(r13 + 0x38u) < 2u) {  // (from the original)
        goto L_5b0d44;
    }
    r2 = r8;
    r1 = r13 + 0x10u;  // (from the original)
    r0 = r13 + 0x4cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0046f8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_5b0d48;
    }
    r12 = r4 + 8u;
    ea = r13 + 0x54u;  // (from the original)
    r0 = *gptr<u32>(ea);
    ea = r13 + 0x50u;  // (from the original)
    r3 = *gptr<u32>(ea);
    ea = r4 + 0x1cu;  // (from the original)
    r2 = *gptr<u32>(ea);
    r4 = *gptr<u32>(ea + 4);
    r1 = r13;
    r8 = r0 + r3;
    if (u32(r8 >= r4) && !u32(r8 == r4)) {
        goto L_5b0d44;
    }
    r2 = r2 + r0;
    r0 = r12;
    guest::cpu()->r[13] = r13;
    r0 = call_0046fe08(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_5b0d44;
    }
    r1 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r0 = *gptr<u32>(r13 + 4u) + r1;
    *gptr<u32>(r5) = u32(r0);
    if (!u32(r0 >= r7) || u32(r0 == r7)) {
        goto L_5b0d50;
    }
L_5b0d44:;
    r0 = 0u;
L_5b0d48:;
    r13 = r13 + 0x80u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5b0d50:;
    r1 = *gptr<u32>(r13);
    r2 = *gptr<u32>(r13 + 4);
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002f8574(r0, r1, r2, r3);
    r3 = r13 + 8u;
    r1 = *gptr<u32>(r3);
    r2 = *gptr<u32>(r3 + 4);
    r0 = *gptr<u32>(r13 + 4u) + r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002f8574(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    r13 = r13 + 0x80u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005b0c94
GUEST_EXPORT(0x005b0c94, d_005b0c94::f_005b0c94);

// f_005b0d7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b0d7c {

struct __attribute__((packed)) Object_005b0d7c_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Object_005b0d7c_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_005b0d7c_0, word_20, 0x20);  // (from the original)

inline constexpr guest::Function<0x0046f9f8, u32(u32, u32, u32, u32)> call_0046f9f8;  // (from the original)
inline constexpr guest::Function<0x005b0c94, u32(u32, u32, u32, u32)> call_005b0c94;  // (from the original)

u32 f_005b0d7c(gptr<Object_005b0d7c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x50u;  // (from the original)
    r4 = r0;
    r6 = r1;
    r7 = r2;
    r5 = r3;
    r1 = r13 + 8u;
    r2 = arg0->word_1c;
    r3 = arg0->word_20;
    r0 = r0 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0046f9f8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    zf = r0 == 0;
    if (!zf) {
        zf = u32(*gptr<u8>(r13 + 0x2au)) == 0;  // (from the original)
    }
    if (zf) {
        goto L_5b0de0;
    }
    if (*gptr<u32>(r13 + 0x30u) >= 2u) {  // (from the original)
        r1 = 0u;
    } else {
        goto L_5b0de0;
    }
    r3 = r7;
    r2 = r6;
    r0 = r4;
    *gptr<u32>(r13) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_005b0c94(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5b0de0:;
    r0 = 0u;
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005b0d7c
GUEST_EXPORT(0x005b0d7c, d_005b0d7c::f_005b0d7c);

// f_005b0dec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b0dec {

struct __attribute__((packed)) Object_005b0dec_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Object_005b0dec_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_005b0dec_0, word_20, 0x20);  // (from the original)

inline constexpr guest::Function<0x0046f8e8, u32(u32, u32, u32, u32)> call_0046f8e8;  // (from the original)
inline constexpr guest::Function<0x0046f9f8, u32(u32, u32, u32, u32)> call_0046f9f8;  // (from the original)
inline constexpr guest::Function<0x0046fe08, u32(u32, u32, u32, u32)> call_0046fe08;  // (from the original)

u32 f_005b0dec(gptr<Object_005b0dec_0> arg0) {
    u32 ea = 0;
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
    r13 = r13 - 0x78u;  // (from the original)
    r4 = r0;
    r1 = r13;
    r2 = arg0->word_1c;
    r3 = arg0->word_20;
    r0 = r0 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0046f9f8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    if (!zf) {
        zf = u32(*gptr<u8>(r13 + 0x22u)) == 0;  // (from the original)
    }
    if (zf) {
        goto L_5b0ef0;
    }
    if (*gptr<u32>(r13 + 0x28u) >= 2u) {  // (from the original)
        r2 = 0u;
        r5 = 1u;
    } else {
        goto L_5b0ef0;
    }
    r1 = r13;
    r0 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0046f8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_5b0ee8;
    }
    ea = r13 + 0x58u;  // (from the original)
    r0 = *gptr<u32>(ea);
    ea = r13 + 0x54u;  // (from the original)
    r3 = *gptr<u32>(ea);
    ea = r4 + 0x1cu;  // (from the original)
    r2 = *gptr<u32>(ea);
    r6 = *gptr<u32>(ea + 4);
    r1 = r13 + 0x30u;  // (from the original)
    r7 = r0 + r3;
    r12 = r4 + 8u;
    if (u32(r7 >= r6) && !u32(r7 == r6)) {
        goto L_5b0ef0;
    }
    r2 = r2 + r0;
    r0 = r12;
    guest::cpu()->r[13] = r13;
    r0 = call_0046fe08(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_5b0ef0;
    }
    r2 = r5;
    r1 = r13;
    r0 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0046f8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_5b0ee8;
    }
    r12 = r4 + 8u;
    ea = r13 + 0x58u;  // (from the original)
    r0 = *gptr<u32>(ea);
    ea = r13 + 0x54u;  // (from the original)
    r3 = *gptr<u32>(ea);
    ea = r4 + 0x1cu;  // (from the original)
    r2 = *gptr<u32>(ea);
    r4 = *gptr<u32>(ea + 4);
    r1 = r13 + 0x40u;  // (from the original)
    r5 = r0 + r3;
    if (u32(r5 >= r4) && !u32(r5 == r4)) {
        goto L_5b0ef0;
    }
    r2 = r2 + r0;
    r0 = r12;
    guest::cpu()->r[13] = r13;
    r0 = call_0046fe08(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_5b0ef0;
    }
    r0 = *gptr<u32>(r13 + 0x34u) + *gptr<u32>(r13 + 0x3cu);  // (from the original)
    r1 = *gptr<u32>(r13 + 0x44u) + *gptr<u32>(r13 + 0x4cu);  // (from the original)
    if (!u32(r0 >= r1) || u32(r0 == r1)) {
        r0 = r1;
    }
L_5b0ee8:;
    r13 = r13 + 0x78u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5b0ef0:;
    r0 = 0u;
    r13 = r13 + 0x78u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005b0dec
GUEST_EXPORT(0x005b0dec, d_005b0dec::f_005b0dec);

// f_005b1684: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b1684 {

struct __attribute__((packed)) Object_005b1684_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_005b1684_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005b1684_0, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Object_005b1684_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_005b1684_1, word_4, 0x4);  // (from the original)


void f_005b1684(gptr<Object_005b1684_0> arg0, gptr<Object_005b1684_1> arg1) {
    u32 r1 = arg1.addr();
    arg0->word_0 = u32(0x908034u);  // (from the original)
    arg0->word_4 = u32(arg1->word_4);
    r1 = 0x907fe4u;  // (from the original)
    arg0->word_0 = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005b1684
GUEST_EXPORT(0x005b1684, d_005b1684::f_005b1684);

// f_005b16b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b16b0 {

struct __attribute__((packed)) Object_005b16b0_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_005b16b0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005b16b0_0, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Object_005b16b0_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_005b16b0_1, word_4, 0x4);  // (from the original)


void f_005b16b0(gptr<Object_005b16b0_0> arg0, gptr<Object_005b16b0_1> arg1) {
    u32 r1 = arg1.addr();
    arg0->word_0 = u32(0x908034u);  // (from the original)
    arg0->word_4 = u32(arg1->word_4);
    r1 = 0x907ff4u;  // (from the original)
    arg0->word_0 = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005b16b0
GUEST_EXPORT(0x005b16b0, d_005b16b0::f_005b16b0);

// f_005b16dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b16dc {

struct __attribute__((packed)) Object_005b16dc_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_005b16dc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005b16dc_0, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Object_005b16dc_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_005b16dc_1, word_4, 0x4);  // (from the original)


void f_005b16dc(gptr<Object_005b16dc_0> arg0, gptr<Object_005b16dc_1> arg1) {
    u32 r1 = arg1.addr();
    arg0->word_0 = u32(0x908034u);  // (from the original)
    arg0->word_4 = u32(arg1->word_4);
    r1 = 0x908004u;  // (from the original)
    arg0->word_0 = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005b16dc
GUEST_EXPORT(0x005b16dc, d_005b16dc::f_005b16dc);

// f_005b1928: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b1928 {

struct __attribute__((packed)) Object_005b1928_0 {
    u8 unknown_0[0x5c];  // (not used here)
    u8 byte_5c;
    u8 byte_5d;
    u8 byte_5e;
};
GUEST_OFFSET(Object_005b1928_0, byte_5c, 0x5c);  // (from the original)
GUEST_OFFSET(Object_005b1928_0, byte_5d, 0x5d);  // (from the original)
GUEST_OFFSET(Object_005b1928_0, byte_5e, 0x5e);  // (from the original)


void f_005b1928(gptr<Object_005b1928_0> arg0, u32 r1) {
    u32 r2 = 0;
    r2 = 1u;
    if (r1 != 0) {
        if (r1 == 1u) {
            arg0->byte_5c = u8(r2);
            arg0->byte_5d = u8(r2);
            arg0->byte_5e = u8(r2);
            guest::cpu()->r[1] = r1;
            return;
        }
        if (r1 == 2u) {
            r1 = 0u;
            arg0->byte_5c = u8(r1);
        }
        guest::cpu()->r[1] = r1;
        return;
    }
    r1 = 0u;
    arg0->byte_5c = u8(r2);
    arg0->byte_5d = u8(r1);
    arg0->byte_5e = u8(r2);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005b1928
GUEST_EXPORT(0x005b1928, d_005b1928::f_005b1928);

// f_005b1968: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b1968 {

struct __attribute__((packed)) Object_005b1968_0 {
    u8 unknown_0[0x82];  // (not used here)
    u8 byte_82;
    u8 byte_83;
    u8 byte_84;
};
GUEST_OFFSET(Object_005b1968_0, byte_82, 0x82);  // (from the original)
GUEST_OFFSET(Object_005b1968_0, byte_83, 0x83);  // (from the original)
GUEST_OFFSET(Object_005b1968_0, byte_84, 0x84);  // (from the original)


void f_005b1968(gptr<Object_005b1968_0> arg0, u32 r1, u32 r2, u32 r3) {
    arg0->byte_82 = u8(r1);
    arg0->byte_83 = u8(r2);
    arg0->byte_84 = u8(r3);
    return;
}

}  // namespace d_005b1968
GUEST_EXPORT(0x005b1968, d_005b1968::f_005b1968);

// f_005b19e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b19e8 {

struct __attribute__((packed)) Object_005b19e8_0 {
    u32 word_0;
    u8 byte_4;
};
GUEST_OFFSET(Object_005b19e8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005b19e8_0, byte_4, 0x4);  // (from the original)


void f_005b19e8(gptr<Object_005b19e8_0> arg0, u32 r1) {
    arg0->word_0 = u32(r1);
    arg0->byte_4 = u8(0u);
    return;
}

}  // namespace d_005b19e8
GUEST_EXPORT(0x005b19e8, d_005b19e8::f_005b19e8);

// f_005b22c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b22c8 {

inline constexpr guest::Function<0x001262dc, u32(u32, u32, u32, u32)> call_001262dc;  // (from the original)
inline constexpr guest::Function<0x001277dc, u32(u32, u32, u32, u32)> call_001277dc;  // (from the original)
inline constexpr guest::Function<0x001279b4, u32(u32, u32, u32, u32)> call_001279b4;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x0034943c, u32(u32, u32, u32, u32)> call_0034943c;  // (from the original)
inline constexpr guest::Function<0x0034abd0, u32(u32, u32, u32, u32)> call_0034abd0;  // (from the original)
inline constexpr guest::Function<0x005b2194, u32(u32, u32, u32, u32)> call_005b2194;  // (from the original)
inline constexpr guest::Function<0x00727c84, u32(u32, u32, u32, u32)> call_00727c84;  // (from the original)

u32 f_005b22c8(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
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
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    ea = r13 - 0x28;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    *gptr<u32>(ea + 4) = u32(r4);
    *gptr<u32>(ea + 8) = u32(r5);
    *gptr<u32>(ea + 0xc) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r10);  // (from the original)
    *gptr<u32>(ea + 0x20) = u32(r11);  // (from the original)
    *gptr<u32>(ea + 0x24) = u32(r14);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r5 = r0;
    r1 = r13;
    r0 = 0x208u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001277dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = *gptr<u32>(r13);
    r7 = 0xf0201u;  // (from the original)
    r10 = 0u;
    r6 = r4;
    *gptr<u32>(r4) = u32(r10);
    r4 = r4 + 4u;
    r8 = r7 + 1u;
    *gptr<u32>(r4) = u32(r7);
    r4 = r4 + 4u;
    r1 = 0x98u;  // (from the original)
    *gptr<u32>(r4) = u32(r10);
    r4 = r4 + 4u;
    *gptr<u32>(r4) = u32(r8);
    r4 = r4 + 4u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r11 = 0x823f0203u;  // (from the original)
    r9 = 0x803f0232u;  // (from the original)
    r3 = r4 + 0x98u;  // (from the original)
    r1 = 0u;
    r2 = 0xcu;  // (from the original)
    r0 = r3;
    *gptr<u32>(r4 + 4u) = u32(r11);
    do {
L_5b2328:;
        r4 = r0 + 4u;
        res = r2 - 1u;
        r2 = res;
        *gptr<u32>(r4) = u32(r9);
        *gptr<u32>(r4 + 4) = u32(r10);
        *gptr<u32>(r0 + 0xcu) = u32(r10);  // (from the original)
        *gptr<u32>(r0 + 0x10u) = u32(r10);  // (from the original)
        *gptr<u32>(r0) = u32(r1);
        r0 = r0 + 0x14u;  // (from the original)
        r1 = r1 + 1u;
        *gptr<u32>(r0) = u32(r10);
        r0 = r0 + 4u;
        guest::preempt();
    } while (res != 0);
    r1 = r3 + 0x120u;  // (from the original)
    r0 = r5 + 0x4f0u;  // (from the original)
    *gptr<u32>(r13) = u32(r1);
    guest::cpu()->r[13] = r13;
    r0 = call_00727c84(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 1u;
    guest::cpu()->r[13] = r13;
    r0 = call_0034943c(r0, r1, r2, r3);
    r1 = r0;
    r2 = u32(*gptr<u8>(r5 + 0x80u));  // (from the original)
    r0 = r5 + 0x80u;  // (from the original)
    r3 = u32(*gptr<u8>(r0 + 1u));
    if (r2 != 0) {
        r2 = 5u;
    }
    if (r3 != 0) {
        r3 = 1u;
    }
    *gptr<u32>(r1) = u32(r2 | r3 << 0x10);  // (from the original)
    r1 = r1 + 4u;
    *gptr<u32>(r1) = u32(0x500e0u);  // (from the original)
    r1 = r1 + 4u;
    r3 = *gptr<u32>(r0 + 2u) & ~0xff000000u;  // (from the original)
    *gptr<u32>(r1) = u32(r3);
    r1 = r1 + 4u;
    *gptr<u32>(r1) = u32(0xf00e1u);  // (from the original)
    r1 = r1 + 4u;
    if (u32(*gptr<u8>(r0)) != 0) {
        r4 = r1;
        r1 = r0 + 8u;
        r2 = 0x210u;  // (from the original)
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_002fbb30(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        r1 = r4 + 0x210u;  // (from the original)
    }
    r2 = 1u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_001262dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 1u;
    guest::cpu()->r[13] = r13;
    r0 = call_0034abd0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    *gptr<u32>(r13) = u32(r0);
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_005b2194(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13) = u32(r0);
    *gptr<u32>(r0 + 0xcu) = u32(r8);  // (from the original)
    r2 = r0 + 4u;
    *gptr<u32>(r0) = u32(r10);
    r4 = r0 + 0x10u;  // (from the original)
    r1 = 0x98u;  // (from the original)
    r0 = r4;
    *gptr<u32>(r2) = u32(r7);
    *gptr<u32>(r2 + 4) = u32(r10);
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r3 = r4 + 0x98u;  // (from the original)
    r0 = r3;
    r1 = 0u;
    r2 = 0xcu;  // (from the original)
    *gptr<u32>(r4 + 4u) = u32(r11);
    do {
L_5b2430:;
        r4 = r0 + 4u;
        res = r2 - 1u;
        r2 = res;
        *gptr<u32>(r4) = u32(r9);
        *gptr<u32>(r4 + 4) = u32(r10);
        *gptr<u32>(r0 + 0xcu) = u32(r10);  // (from the original)
        *gptr<u32>(r0 + 0x10u) = u32(r10);  // (from the original)
        *gptr<u32>(r0) = u32(r1);
        r0 = r0 + 0x14u;  // (from the original)
        r1 = r1 + 1u;
        *gptr<u32>(r0) = u32(r10);
        r0 = r0 + 4u;
        guest::preempt();
    } while (res != 0);
    r0 = r3 + 0x120u;  // (from the original)
    *gptr<u32>(r13) = u32(r0);
    r0 = r0 - r6 & ~3u;
    guest::cpu()->r[13] = r13;
    r0 = call_001279b4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    ea = r13;
    r13 = r13 + 0x28;  // (from the original)
    r4 = *gptr<u32>(ea + 4);
    r5 = *gptr<u32>(ea + 8);
    r6 = *gptr<u32>(ea + 0xc);  // (from the original)
    r7 = *gptr<u32>(ea + 0x10);  // (from the original)
    r8 = *gptr<u32>(ea + 0x14);  // (from the original)
    r9 = *gptr<u32>(ea + 0x18);  // (from the original)
    r10 = *gptr<u32>(ea + 0x1c);  // (from the original)
    r11 = *gptr<u32>(ea + 0x20);  // (from the original)
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

}  // namespace d_005b22c8
GUEST_EXPORT(0x005b22c8, d_005b22c8::f_005b22c8);

// f_005b25d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b25d8 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x0046fc50, u32(u32, u32, u32, u32)> call_0046fc50;  // (from the original)

u32 f_005b25d8(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x30u;  // (from the original)
    r6 = r1;
    r5 = r2;
    r8 = 4u;
    r7 = r2 + 4u;
    ea = r13 + 0x10u;  // (from the original)
    *gptr<u32>(ea) = u32(0u);
    ea = r13;
    *gptr<u32>(ea) = u32(0x1400u);  // (from the original)
    *gptr<u32>(ea + 4) = u32(0x40u);  // (from the original)
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(0x68u);  // (from the original)
    *gptr<u32>(ea + 4) = u32(r8);
    r3 = r7;
    r2 = 0x6000u;  // (from the original)
    r1 = r6;
    r0 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0046fc50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r4 = 0u;
    } else {
        r4 = 1u;
        goto L_5b2650;
    }
    r1 = 0x6000u;  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_5b2650:;
    r0 = r4;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005b25d8
GUEST_EXPORT(0x005b25d8, d_005b25d8::f_005b25d8);

// f_005b2d10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b2d10 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x005b25d8, u32(u32, u32, u32, u32)> call_005b25d8;  // (from the original)
inline constexpr guest::Function<0x0075dbc4, u32(u32, u32, u32, u32)> call_0075dbc4;  // (from the original)

u32 f_005b2d10(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r6 = r1;
    r5 = r0;
    r7 = r2;
    r1 = 0x6000u;  // (from the original)
    r0 = r6;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r4 = 0u;
    r0 = r7;
    r0 = call_0075dbc4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r2 = r7;
        r1 = r6;
        r0 = r5 + 0x138u;  // (from the original)
        r0 = call_005b25d8(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 != 0) {
            r4 = 1u;
        }
    }
    r0 = r4;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005b2d10
GUEST_EXPORT(0x005b2d10, d_005b2d10::f_005b2d10);

// f_005b2e10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b2e10 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x005a50e0, u32(u32, u32, u32, u32)> call_005a50e0;  // (from the original)
inline constexpr guest::Function<0x005a90b0, u32(u32, u32, u32, u32)> call_005a90b0;  // (from the original)
inline constexpr guest::Function<0x005a90c4, u32(u32, u32, u32, u32)> call_005a90c4;  // (from the original)
inline constexpr guest::Function<0x005ab498, u32(u32, u32, u32, u32)> call_005ab498;  // (from the original)
inline constexpr guest::Function<0x005ab4b0, u32(u32, u32, u32, u32)> call_005ab4b0;  // (from the original)
inline constexpr guest::Function<0x005af9d0, u32(u32, u32, u32, u32)> call_005af9d0;  // (from the original)
inline constexpr guest::Function<0x005afd20, u32(u32, u32, u32, u32)> call_005afd20;  // (from the original)
inline constexpr guest::Function<0x005afd3c, u32(u32, u32, u32, u32)> call_005afd3c;  // (from the original)
inline constexpr guest::Function<0x005afe38, u32(u32, u32, u32, u32)> call_005afe38;  // (from the original)
inline constexpr guest::Function<0x005b06c4, u32(u32, u32, u32, u32)> call_005b06c4;  // (from the original)
inline constexpr guest::Function<0x005b0a14, u32(u32, u32, u32, u32)> call_005b0a14;  // (from the original)
inline constexpr guest::Function<0x005b0a28, u32(u32, u32, u32, u32)> call_005b0a28;  // (from the original)
inline constexpr guest::Function<0x005b0b14, u32(u32, u32, u32, u32)> call_005b0b14;  // (from the original)
inline constexpr guest::Function<0x007b0c08, u32(u32, u32, u32, u32)> call_007b0c08;  // (from the original)

u32 f_005b2e10(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
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
    r13 = r13 - 0x68u;  // (from the original)
    r5 = r0;
    r7 = r1;
    r10 = r2;
    r4 = *gptr<u32>(r13 + 0x68u);  // (from the original)
    r6 = r3;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005ab4b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    if (r0 == 0xa4u) {  // (from the original)
        r8 = 0u;
    } else {
        r8 = 1u;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_007b0c08(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    zf = (r0 & r8) == 0;
    r11 = 0x198eu;  // (from the original)
    r8 = 0x953eecu;  // (from the original)
    r9 = 1u;
    r0 = r13 + 8u;
    if (zf) {
        goto L_5b2efc;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005afd3c(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r3 = r6;
    r2 = r10;
    r1 = r7;
    r0 = r13 + 8u;
    *gptr<u32>(r13) = u32(r4);
    *gptr<u32>(r13 + 4) = u32(r9);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005afd20(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    if (r0 == 0xa4u) {  // (from the original)
        goto L_5b2ee4;
    }
    r1 = 0x863u;  // (from the original)
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005a90b0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
L_5b2e90:;
    r1 = 1u;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005a50e0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r1 = u32(s32(s8(*gptr<u8>(r8))));
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005a90c4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r8 + 0xcu);  // (from the original)
    *gptr<u32>(r13 + 0x1cu) = u32(r1);  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r8 + 0x10u));  // (from the original)
    *gptr<u32>(r13 + 0x38u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005af9d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    *gptr<u8>(r5 + 4u) = u8(r0);
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005afe38(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    goto L_5b2f7c;
L_5b2ee4:;
    r1 = r11;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005a90b0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    guest::preempt();
    goto L_5b2e90;
L_5b2efc:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005b0a28(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r3 = r4;
    r2 = r6;
    r1 = r7;
    r0 = r13 + 8u;
    *gptr<u32>(r13) = u32(r9);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005b0a14(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    if (r0 == 0xa4u) {  // (from the original)
        goto L_5b2f88;
    }
    r1 = 0x863u;  // (from the original)
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005a90b0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
L_5b2f40:;
    r1 = 1u;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005a50e0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r1 = u32(s32(s8(*gptr<u8>(r8))));
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005a90c4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r1 = *gptr<u32>(r8 + 0x14u);  // (from the original)
    *gptr<u32>(r13 + 0x1cu) = u32(r1);  // (from the original)
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005b06c4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    *gptr<u8>(r5 + 4u) = u8(r0);
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005b0b14(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
L_5b2f7c:;
    r13 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return call_005ab498(r0, r1, r2, r3);
L_5b2f88:;
    r1 = r11;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005a90b0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    guest::preempt();
    goto L_5b2f40;
}

}  // namespace d_005b2e10
GUEST_EXPORT(0x005b2e10, d_005b2e10::f_005b2e10);

// f_005b2fac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b2fac {

inline constexpr guest::Function<0x00121110, u32(u32, u32, u32, u32)> call_00121110;  // (from the original)
inline constexpr guest::Function<0x005b30c4, u32(u32, u32, u32, u32)> call_005b30c4;  // (from the original)
inline constexpr guest::Function<0x007b0bb0, u32(u32, u32, u32, u32)> call_007b0bb0;  // (from the original)
inline constexpr guest::Function<0x007b1034, u32(u32, u32, u32, u32)> call_007b1034;  // (from the original)

u32 f_005b2fac(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x28u;  // (from the original)
    r4 = r0;
    r5 = r13;
    r0 = 0x400u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00121110(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5 + 4u;
    r0 = 0x600u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007b0bb0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0x602u;  // (from the original)
    r1 = r5 + 8u;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_007b0bb0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r6 | u32(s32(r6) >> 9);
    r1 = r5 + 0xcu;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_007b0bb0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r8 = r6 - 1u;
    r1 = r5;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_007b0bb0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    ea = r13 + 8u;
    r0 = *gptr<u32>(r13 + 4u);
    r1 = *gptr<u32>(ea) * *gptr<u32>(ea + 4) << 1;
    guest::cpu()->r[13] = r13;
    r0 = call_007b1034(r0, r1, r2, r3);
    ea = r4 + 0xcu;  // (from the original)
    *gptr<u32>(ea) = u32(0u);
    ea = r13 + 0xcu;  // (from the original)
    r1 = *gptr<u32>(ea);
    ea = r4 + 0x14u;  // (from the original)
    *gptr<u32>(ea) = u32(0xf0u);  // (from the original)
    *gptr<u32>(ea + 4) = u32(0x190u);  // (from the original)
    *gptr<u32>(r4 + 0x10u) = u32(r1 - 0x190u);  // (from the original)
    r0 = *gptr<u32>(r4);
    r1 = *gptr<u32>(r4 + 8u);
    r3 = r4 + 0xcu;  // (from the original)
    r2 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005b30c4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r13;
    r0 = 0x410u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00121110(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5 + 4u;
    r0 = 0x600u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007b0bb0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5 + 8u;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_007b0bb0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5 + 0xcu;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_007b0bb0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_007b0bb0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    ea = r13 + 8u;
    r0 = *gptr<u32>(r13 + 4u);
    r1 = *gptr<u32>(ea) * *gptr<u32>(ea + 4) << 1;
    guest::cpu()->r[13] = r13;
    r0 = call_007b1034(r0, r1, r2, r3);
    ea = r13 + 0xcu;  // (from the original)
    r3 = r4 + 0xcu;  // (from the original)
    r2 = r13;
    r0 = *gptr<u32>(ea) - 0x190u;  // (from the original)
    ea = r4 + 0x10u;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    ea = r4 + 4u;
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_005b30c4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005b2fac
GUEST_EXPORT(0x005b2fac, d_005b2fac::f_005b2fac);

// f_005b30c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b30c4 {

struct __attribute__((packed)) Object_005b30c4_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_005b30c4_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005b30c4_2, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_005b30c4_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_005b30c4_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005b30c4_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005b30c4_3, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005b30c4_3, word_c, 0xc);  // (from the original)


u32 f_005b30c4(u32 r0, u32 r1_unused, gptr<Object_005b30c4_2> arg2, gptr<Object_005b30c4_3> arg3) {
    u32 b = 0;
    u32 ea = 0;
    u32 res = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x14;  // (from the original)
    r8 = 0u;
    r5 = arg3->word_c;
    res = arg3->word_8 - 1u;
    res = r5 * res;
    r4 = res;
    r1 = arg2->word_4;
    res = r5;
    r7 = r0 + (r4 << 1);
    r4 = r1 + (arg3->word_4 * arg2->word_8 + arg3->word_0 << 1);
    if (u32(res == 0) || res >> 0x1f != (r5 & (r5 ^ res)) >> 0x1f) {  // (from the original)
        goto L_5b3190;
    }
L_5b3100:;
    r12 = r4 + (arg3->word_8 << 1) - r4;
    r0 = u32(s32(r12) >> 1);
    res = r0;
    if (u32(res == 0) || res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_5b3174;
    }
    r5 = arg3->word_c;
    b = r12 << 0x1e;  // (from the original)
    r1 = r4 - 2u;
    r0 = r7 + (r5 << 1);
    if (b >> 0x1f) {  // (from the original)
        r0 = r0 - (r5 << 1);
        ea = r1 + 2u;
        r1 = ea;
        *gptr<u16>(r0) = u16(u32(*gptr<u16>(ea)));
    }
    res = u32(s32(r12) >> 2);
    r12 = res;
    if (res == 0) {
        goto L_5b3174;
    }
    do {
L_5b3140:;
        ea = r1 + 2u;
        r5 = u32(*gptr<u16>(ea));
        res = r12 - 1u;
        r12 = res;
        ea = r0 - (arg3->word_c << 1);
        *gptr<u16>(ea) = u16(r5);
        ea = r1 + 4u;
        r1 = ea;
        *gptr<u16>(r0 + (0u - arg3->word_c << 2)) = u16(u32(*gptr<u16>(ea)));
        r0 = r0 - (arg3->word_c << 2);
        guest::preempt();
    } while (res != 0);
L_5b3174:;
    r1 = arg2->word_8;
    r0 = arg3->word_c;
    r8 = r8 + 1u;
    r7 = r7 + 2u;
    res = r0 - r8;
    r4 = r4 + (r1 << 1);
    if (!u32(res == 0) && res >> 0x1f == ((r0 ^ r8) & (r0 ^ res)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_5b3100;
    }
L_5b3190:;
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005b30c4
GUEST_EXPORT(0x005b30c4, d_005b30c4::f_005b30c4);

// f_005b3198: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b3198 {


u32 f_005b3198(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    float S4 = 0;
    float S5 = 0;
    float S6 = 0;
    float S8 = 0;
    float S9 = 0;
    float S10 = 0;
    r3 = 0xa84398u;  // (from the original)
    r13 = r13 - 8;
    r2 = *gptr<u32>(r13 + 8u);
    S0 = std::bit_cast<float>(*gptr<u32>(r3));
    S1 = std::bit_cast<float>(*gptr<u32>(r3 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r3 + 8));
    S4 = S0 + S1 + S2;
    r3 = std::bit_cast<u32>(fabsf(S0 * S0 + S1 * S1 + S2 * S2));
    res = r3 - 0x34000000u;  // (from the original)
    if (!u32(res == 0) && res >> 0x1f == ((r3 ^ 0x34000000u) & (r3 ^ res)) >> 0x1f) {  // (from the original)
        S3 = std::bit_cast<float>(*gptr<u32>(0x5b32e8u)) / S4;  // (from the original)
        S0 = S0 * S3;
        S1 = S1 * S3;
        S2 = S2 * S3;
    } else {
        S0 = std::bit_cast<float>(*gptr<u32>(0x5b32e4u));  // (from the original)
        S1 = S0;
        S2 = S0;
    }
    r3 = r0 + r1;
    S4 = std::bit_cast<float>(*gptr<u32>(r2));
    S5 = std::bit_cast<float>(*gptr<u32>(r2 + 4));
    S6 = std::bit_cast<float>(*gptr<u32>(r2 + 8));
    r1 = 1u;
    r2 = r3 - r0;
    r12 = r1;
    if (s32(r1 + u32(s32(r2) >> 1)) <= s32(1u)) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r4 = r1 + u32(s32(r2) >> 1);
    S3 = std::bit_cast<float>(*gptr<u32>(0x5b32ecu));  // (from the original)
    S8 = std::bit_cast<float>(*gptr<u32>(0x5b32f4u));  // (from the original)
    S4 = S4 * S3;
    S9 = S5 * std::bit_cast<float>(*gptr<u32>(0x5b32f0u));  // (from the original)
    S5 = S6 * S3;
    S10 = std::bit_cast<float>(*gptr<u32>(0x5b32f8u));  // (from the original)
    do {
L_5b3230:;
        r1 = u32(*gptr<u16>(r0));
        r12 = r12 + 1u;
        S3 = S0 * (float(std::bit_cast<u32>(std::bit_cast<float>(r1 << 0x10 >> 0x1b))) * S8) + float(std::bit_cast<u32>(std::bit_cast<float>(r1 << 0x15 >> 0x1a))) * S10 * S1 + float(std::bit_cast<u32>(std::bit_cast<float>(r1 & 0x1fu))) * S8 * S2;  // (from the original)
        r1 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_uz_f(S4 * S3)));
        r2 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_uz_f(S9 * S3)));
        r3 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_uz_f(S5 * S3)));
        if (u32(r1 >= 0x1fu) && !u32(r1 == 0x1fu)) {  // (from the original)
            r1 = 0x1fu;  // (from the original)
        }
        if (u32(r2 >= 0x3fu) && !u32(r2 == 0x3fu)) {  // (from the original)
            r2 = 0x3fu;  // (from the original)
        }
        if (u32(r3 >= 0x1fu) && !u32(r3 == 0x1fu)) {  // (from the original)
            r3 = 0x1fu;  // (from the original)
        }
        r1 = r3 & 0x1fu | (r1 << 0xb | (r2 & 0x3fu) << 5);  // (from the original)
        res = r4 - r12;
        *gptr<u16>(r0) = u16(r1);
        r0 = r0 + 2u;
        guest::preempt();
    } while (!u32(res == 0) && res >> 0x1f == ((r4 ^ r12) & (r4 ^ res)) >> 0x1f);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_005b3198
GUEST_EXPORT(0x005b3198, d_005b3198::f_005b3198);

// f_005b3ed4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b3ed4 {


u32 f_005b3ed4() {
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 0x957320u;  // (from the original)
    r1 = 0xa5u;  // (from the original)
    *gptr<u8>(r0 + 1u) = u8(u32(*gptr<u8>(r0 + 2u)));
    *gptr<u8>(r0 + 2u) = u8(r1);
    *gptr<u8>(r0 + 3u) = u8(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005b3ed4
GUEST_EXPORT(0x005b3ed4, d_005b3ed4::f_005b3ed4);

// f_005b4088: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b4088 {


u32 f_005b4088() {
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 0x957320u;  // (from the original)
    r1 = 0xa5u;  // (from the original)
    *gptr<u8>(r0 + 1u) = u8(u32(*gptr<u8>(r0 + 2u)));
    *gptr<u8>(r0 + 2u) = u8(u32(*gptr<u8>(r0 + 3u)));
    *gptr<u8>(r0 + 3u) = u8(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005b4088
GUEST_EXPORT(0x005b4088, d_005b4088::f_005b4088);

// f_005b4148: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b4148 {

inline constexpr guest::Function<0x005b3ef4, u32(u32, u32, u32, u32)> call_005b3ef4;  // (from the original)
inline constexpr guest::Function<0x006a6024, u32(u32, u32, u32, u32)> call_006a6024;  // (from the original)
inline constexpr guest::Function<0x006e4490, u32(u32, u32, u32, u32)> call_006e4490;  // (from the original)

u32 f_005b4148(u32 r0, u32 r1_unused, u32 r2) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = 0x957320u;  // (from the original)
    r1 = 0u;
    *gptr<u32>(r4 + 0xcu) = u32(r0);  // (from the original)
    *gptr<u32>(r4 + 8u) = u32(r1);
    r0 = call_006e4490(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r0 = u32(*gptr<u8>(r4 + 2u));
    r1 = r4 + 0x24u;  // (from the original)
    if (r0 >= 0xa5u) {  // (from the original)
        r4 = *gptr<u32>(r1);
    } else {
        r4 = *gptr<u32>(r1 + (r0 << 2));
    }
    r0 = call_006a6024(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0x95787cu;  // (from the original)
    r2 = 0u;
    r0 = r4;
    r0 = call_005b3ef4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005b4148
GUEST_EXPORT(0x005b4148, d_005b4148::f_005b4148);

// f_005b4198: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b4198 {

inline constexpr guest::Function<0x005b3ef4, u32(u32, u32, u32, u32)> call_005b3ef4;  // (from the original)
inline constexpr guest::Function<0x006a6024, u32(u32, u32, u32, u32)> call_006a6024;  // (from the original)
inline constexpr guest::Function<0x006e4490, u32(u32, u32, u32, u32)> call_006e4490;  // (from the original)

u32 f_005b4198(u32 r0, u32 r1_unused, u32 r2) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = 0x957320u;  // (from the original)
    r1 = 0u;
    *gptr<u32>(r4 + 0xcu) = u32(r0);  // (from the original)
    *gptr<u32>(r4 + 8u) = u32(r1);
    r0 = call_006e4490(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r0 = u32(*gptr<u8>(r4 + 2u));
    r1 = r4 + 0x24u;  // (from the original)
    if (r0 >= 0xa5u) {  // (from the original)
        r4 = *gptr<u32>(r1);
    } else {
        r4 = *gptr<u32>(r1 + (r0 << 2));
    }
    r0 = call_006a6024(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0x95788cu;  // (from the original)
    r2 = 0u;
    r0 = r4;
    r0 = call_005b3ef4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005b4198
GUEST_EXPORT(0x005b4198, d_005b4198::f_005b4198);

// f_005b41e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b41e8 {


u32 f_005b41e8(u32 r0) {
    u32 res = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 zf = 0;
    zf = r0 == 0xa5u;  // (from the original)
    r1 = r0;
    if (zf) {
        r1 = 0x957320u;  // (from the original)
    }
    r2 = 0x957344u;  // (from the original)
    if (zf) {
        r1 = u32(*gptr<u8>(r1 + 2u));
    }
    if (r1 >= 0xa5u) {  // (from the original)
        r1 = *gptr<u32>(r2);
    } else {
        r1 = *gptr<u32>(r2 + (r1 << 2));
    }
    r1 = *gptr<u32>(r1 + 8u);
    if (r1 != 0) {
        r0 = u32(*gptr<u8>(r1 + 0xcu));  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0x20u;  // (from the original)
    if (r0 == 0xa5u) {  // (from the original)
        r0 = 2u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    res = r1 & ~*gptr<u32>(0x889074u + (r0 << 2));  // (from the original)
    r0 = res;
    if (res == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 2u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005b41e8
GUEST_EXPORT(0x005b41e8, d_005b41e8::f_005b41e8);

// f_005b43b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b43b0 {


u32 f_005b43b0(u32 r0) {
    u32 zf = 0;
    zf = r0 == 0x39u;  // (from the original)
    if (!zf) {
        zf = r0 == 0x3au;  // (from the original)
    }
    if (zf) {
        r0 = 1u;
        return r0;
    }
    zf = r0 == 0x3bu;  // (from the original)
    if (!zf) {
        zf = r0 == 0x3cu;  // (from the original)
    }
    if (!zf) {
        r0 = 0u;
        return r0;
    }
    r0 = 1u;
    return r0;
}

}  // namespace d_005b43b0
GUEST_EXPORT(0x005b43b0, d_005b43b0::f_005b43b0);

// f_005b43d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b43d4 {

inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x005b4018, u32(u32, u32, u32, u32)> call_005b4018;  // (from the original)
inline constexpr guest::Function<0x005b4724, u32(u32, u32, u32, u32)> call_005b4724;  // (from the original)
inline constexpr guest::Function<0x006dfe10, u32(u32, u32, u32, u32)> call_006dfe10;  // (from the original)

u32 f_005b43d4(u32 r0) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_005b4724(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = u32(*gptr<u8>(0x957322u));  // (from the original)
    r0 = call_005b4018(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        r0 = call_002fc900(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0 != 0) {
            r0 = 3u;
            guest::cpu()->r[13] += 8u;
            return r0;
        }
    }
    r0 = call_006dfe10(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 0) {
        r0 = 2u;
    } else {
        r0 = 0u;
    }
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_005b43d4
GUEST_EXPORT(0x005b43d4, d_005b43d4::f_005b43d4);

// f_005b4428: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b4428 {

inline constexpr guest::Function<0x00606a24, u32(u32, u32, u32, u32)> call_00606a24;  // (from the original)

u32 f_005b4428(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x10u;  // (from the original)
    zf = r1 == 6u;
    r12 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    *gptr<u8>(0x957323u) = u8(r0);  // (from the original)
    if (zf) {
        r0 = 0x9503bfu;  // (from the original)
    }
    r4 = 0u;
    if (zf) {
        r1 = u32(*gptr<u8>(r0));
    }
    if (r3 == 6u) {
        r3 = u32(*gptr<u8>(0x9503c1u));  // (from the original)
    }
    *gptr<u32>(r13 + 4u) = u32(r4);
    *gptr<u32>(r13) = u32(r12);
    r0 = u32(*gptr<u16>(0x886e2au));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00606a24(r0, r1, guest::cpu()->r[2], r3);
    r0 = 0xac1948u;  // (from the original)
    r1 = 0xa5u;  // (from the original)
    *gptr<u8>(r0 + 0x24u) = u8(r1);  // (from the original)
    *gptr<u32>(r0 + 0x3cu) = u32(r4);  // (from the original)
    *gptr<u8>(r0 + 0x40u) = u8(r4);  // (from the original)
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005b4428
GUEST_EXPORT(0x005b4428, d_005b4428::f_005b4428);

// f_005b4520: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b4520 {


u32 f_005b4520() {
    u32 res = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r2 = 0x889074u;  // (from the original)
    r3 = 0x40000u;  // (from the original)
    r0 = u32(*gptr<u8>(0x957322u));  // (from the original)
    if (r0 != 0xa5u) {  // (from the original)
        res = r3 & ~*gptr<u32>(r2 + (r0 << 2));
        r1 = res;
        if (res == 0) {
            r0 = 1u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    r1 = 0x80000u;  // (from the original)
    if (r0 == 0xa5u) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    res = r1 & ~*gptr<u32>(r2 + (r0 << 2));
    if (res != 0) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = *gptr<u32>(0x95c6d0u);  // (from the original)
    if (r0 == 0) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (u32(*gptr<u8>(r0 + 0x10cu)) == 2u) {  // (from the original)
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005b4520
GUEST_EXPORT(0x005b4520, d_005b4520::f_005b4520);

// f_005b4678: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b4678 {


u32 f_005b4678(u32 r0) {
    u32 res = 0;
    u32 r1 = 0;
    r1 = 0x10000u;  // (from the original)
    if (r0 == 0xa5u) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    res = r1 & ~*gptr<u32>(0x889074u + (r0 << 2));  // (from the original)
    if (res == 0) {
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005b4678
GUEST_EXPORT(0x005b4678, d_005b4678::f_005b4678);

// f_005b46a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b46a4 {

inline constexpr guest::Function<0x006f8c24, u32(u32, u32, u32, u32)> call_006f8c24;  // (from the original)

u32 f_005b46a4(u32 r0) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r5 = r0;
    r1 = *gptr<u32>(0x5b471cu + 4);  // (from the original)
    r4 = 0u;
    r6 = r13;
    *gptr<u32>(r13) = u32(*gptr<u32>(0x5b471cu));  // (from the original)
    *gptr<u32>(r13 + 4) = u32(r1);
L_5b46c4:;
    if (u32(*gptr<u8>(r6 + r4)) != r5) {
        goto L_5b470c;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_006f8c24(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_5b470c;
    }
    if (u32(*gptr<u8>(r0 + 4u)) == 0) {
        r0 = 1u;
        goto L_5b4704;
    }
L_5b4700:;
    r0 = 0u;
L_5b4704:;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5b470c:;
    r4 = r4 + 1u;
    if (r4 < 5u) {
        guest::preempt();
        goto L_5b46c4;
    }
    guest::preempt();
    goto L_5b4700;
}

}  // namespace d_005b46a4
GUEST_EXPORT(0x005b46a4, d_005b46a4::f_005b46a4);

// f_005b4854: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b4854 {

inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x005b4018, u32(u32, u32, u32, u32)> call_005b4018;  // (from the original)
inline constexpr guest::Function<0x005b4724, u32(u32, u32, u32, u32)> call_005b4724;  // (from the original)
inline constexpr guest::Function<0x006dfe10, u32(u32, u32, u32, u32)> call_006dfe10;  // (from the original)

u32 f_005b4854(u32 r0) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_005b4724(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = u32(*gptr<u8>(0x957322u));  // (from the original)
    r0 = call_005b4018(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        r0 = call_002fc900(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0 != 0) {
            r0 = 0u;
            guest::cpu()->r[13] += 8u;
            return r0;
        }
    }
    r0 = call_006dfe10(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_005b4854
GUEST_EXPORT(0x005b4854, d_005b4854::f_005b4854);

// f_005b48b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b48b4 {


u32 f_005b48b4() {
    u32 res = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r1 = 0x889074u;  // (from the original)
    r3 = 0x10u;  // (from the original)
    r0 = u32(*gptr<u8>(0x957322u));  // (from the original)
    if (r0 != 0xa5u) {  // (from the original)
        res = r3 & ~*gptr<u32>(r1 + (r0 << 2));
        if (res == 0) {
            r0 = 0u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    r2 = 4u;
    if (r0 == 0xa5u) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = *gptr<u32>(r1 + (r0 << 2));
    res = r2 & ~r0;
    r1 = res;
    if (res != 0) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    res = 0x20u & ~r0;  // (from the original)
    r1 = res;
    if (res == 0) {
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    res = 0x40000u & ~r0;  // (from the original)
    r1 = res;
    if (res == 0) {
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0x80000u;  // (from the original)
    res = r1 & ~r0;
    if (res != 0) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 1u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005b48b4
GUEST_EXPORT(0x005b48b4, d_005b48b4::f_005b48b4);

// f_005b493c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b493c {


u32 f_005b493c(u32 r0, u32 r1) {
    if (r0 >= 0xa5u) {  // (from the original)
        r0 = ~0u;
    } else {
        r1 = 0x88997cu;  // (from the original)
        r0 = *gptr<u32>(r1 + (r0 << 2));
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005b493c
GUEST_EXPORT(0x005b493c, d_005b493c::f_005b493c);

// f_005b49b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b49b4 {


u32 f_005b49b4(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r2 = 0;
    r2 = 0x100000u;  // (from the original)
    if (r0 == 0xa5u) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    res = r2 & ~*gptr<u32>(0x889074u + (r0 << 2));  // (from the original)
    r1 = res;
    if (res == 0) {
        r0 = r0 & 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005b49b4
GUEST_EXPORT(0x005b49b4, d_005b49b4::f_005b49b4);

// f_005b49e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b49e0 {


u32 f_005b49e0(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r2 = 0;
    r2 = 0x100000u;  // (from the original)
    if (r0 == 0xa5u) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    res = r2 & ~*gptr<u32>(0x889074u + (r0 << 2));  // (from the original)
    r1 = res;
    if (res != 0) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r0 - 0x81u & 0x80000001u;  // (from the original)
    if (r0 == 1u) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005b49e0
GUEST_EXPORT(0x005b49e0, d_005b49e0::f_005b49e0);

// f_005b4a28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b4a28 {


u32 f_005b4a28() {
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 0x957320u;  // (from the original)
    r1 = 0u;
    *gptr<u8>(r0 + 4u) = u8(r1);
    *gptr<u8>(r0 + 5u) = u8(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005b4a28
GUEST_EXPORT(0x005b4a28, d_005b4a28::f_005b4a28);

// f_005b4c78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b4c78 {

inline constexpr guest::Function<0x006a694c, u32(u32, u32, u32, u32)> call_006a694c;  // (from the original)

u32 f_005b4c78(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_006a694c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x957320u;  // (from the original)
    r0 = 0u;
    *gptr<u32>(r1 + 8u) = u32(r0);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005b4c78
GUEST_EXPORT(0x005b4c78, d_005b4c78::f_005b4c78);

// f_005b4ce8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b4ce8 {

struct __attribute__((packed)) Object_005b4ce8_0 {
    u8 unknown_0[0x60];  // (not used here)
    u32 word_60;
};
GUEST_OFFSET(Object_005b4ce8_0, word_60, 0x60);  // (from the original)


void f_005b4ce8(gptr<Object_005b4ce8_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    *gptr<u32>(r0 + (arg0->word_60 << 2) + 0x64u) = u32(r1);  // (from the original)
    r1 = arg0->word_60 + 1u;
    arg0->word_60 = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005b4ce8
GUEST_EXPORT(0x005b4ce8, d_005b4ce8::f_005b4ce8);

// f_005b4d04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b4d04 {

struct __attribute__((packed)) Object_005b4d04_0 {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
    u8 unknown_25[0x17];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Object_005b4d04_0, byte_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_005b4d04_0, word_3c, 0x3c);  // (from the original)

inline constexpr guest::Function<0x005b5b78, u32(u32, u32, u32, u32)> call_005b5b78;  // (from the original)

u32 f_005b4d04(gptr<Object_005b4d04_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r4 = r0;
    r0 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    if (u32(*gptr<u8>(0x957323u)) < 0xa5u) {  // (from the original)
        r0 = 0u;
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 + 0x10u;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    *gptr<u32>(ea + 8) = u32(r3);
    r3 = r4 + 0x34u;  // (from the original)
    r2 = r4 + 0x28u;  // (from the original)
    *gptr<u32>(r13) = u32(arg0->word_3c);
    r1 = u32(arg0->byte_24);
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005b5b78(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = 0xa5u;  // (from the original)
    r0 = 0u;
    *gptr<u8>(r4 + 0x24u) = u8(r1);  // (from the original)
    *gptr<u32>(r4 + 0x3cu) = u32(r0);  // (from the original)
    *gptr<u8>(r4 + 0x40u) = u8(r0);  // (from the original)
    r0 = 1u;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005b4d04
GUEST_EXPORT(0x005b4d04, d_005b4d04::f_005b4d04);

// f_005b4eb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b4eb0 {

struct __attribute__((packed)) Object_005b4eb0_0 {
    u8 unknown_0[0x60];  // (not used here)
    u32 word_60;
    u32 word_64;
    u32 word_68;
    u32 word_6c;
    u32 word_70;
};
GUEST_OFFSET(Object_005b4eb0_0, word_60, 0x60);  // (from the original)
GUEST_OFFSET(Object_005b4eb0_0, word_64, 0x64);  // (from the original)
GUEST_OFFSET(Object_005b4eb0_0, word_68, 0x68);  // (from the original)
GUEST_OFFSET(Object_005b4eb0_0, word_6c, 0x6c);  // (from the original)
GUEST_OFFSET(Object_005b4eb0_0, word_70, 0x70);  // (from the original)


void f_005b4eb0(gptr<Object_005b4eb0_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    r2 = ~0u;
    if (arg0->word_64 == r1) {
        r1 = r0 + (arg0->word_60 << 2);
        arg0->word_64 = u32(*gptr<u32>(r1 + 0x60u));  // (from the original)
        *gptr<u32>(r1 + 0x60u) = u32(r2);  // (from the original)
        r1 = arg0->word_60 - 1u;
        arg0->word_60 = u32(r1);
        guest::cpu()->r[1] = r1;
        return;
    }
    if (arg0->word_68 == r1) {
        r1 = r0 + (arg0->word_60 << 2);
        arg0->word_68 = u32(*gptr<u32>(r1 + 0x60u));  // (from the original)
        *gptr<u32>(r1 + 0x60u) = u32(r2);  // (from the original)
        r1 = arg0->word_60 - 1u;
        arg0->word_60 = u32(r1);
        guest::cpu()->r[1] = r1;
        return;
    }
    if (arg0->word_6c == r1) {
        r1 = r0 + (arg0->word_60 << 2);
        arg0->word_6c = u32(*gptr<u32>(r1 + 0x60u));  // (from the original)
        *gptr<u32>(r1 + 0x60u) = u32(r2);  // (from the original)
        r1 = arg0->word_60 - 1u;
        arg0->word_60 = u32(r1);
        guest::cpu()->r[1] = r1;
        return;
    }
    if (arg0->word_70 != r1) {
        guest::cpu()->r[1] = r1;
        return;
    }
    r1 = r0 + (arg0->word_60 << 2);
    arg0->word_70 = u32(*gptr<u32>(r1 + 0x60u));  // (from the original)
    *gptr<u32>(r1 + 0x60u) = u32(r2);  // (from the original)
    r1 = arg0->word_60 - 1u;
    arg0->word_60 = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005b4eb0
GUEST_EXPORT(0x005b4eb0, d_005b4eb0::f_005b4eb0);

// f_005b522c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b522c {

inline constexpr guest::Function<0x005b6378, u32(u32, u32, u32, u32)> call_005b6378;  // (from the original)

u32 f_005b522c(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r1;
    r5 = r2;
    ea = r13 + 0x18u;  // (from the original)
    r2 = *gptr<u32>(ea);
    r12 = *gptr<u32>(ea + 4);
    r1 = u32(*gptr<u8>(0x957322u));  // (from the original)
    ea = r13;
    *gptr<u32>(ea) = u32(r3);
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(r2);
    *gptr<u32>(ea + 4) = u32(r12);
    r3 = r5;
    r2 = r4;
    guest::cpu()->r[13] = r13;
    call_005b6378(guest::cpu()->r[0], r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_005b522c
GUEST_EXPORT(0x005b522c, d_005b522c::f_005b522c);

// f_005b5b78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b5b78 {

struct __attribute__((packed)) Object_005b5b78_0 {
    u8 unknown_0[0x48];  // (not used here)
    u32 word_48;
    u32 word_4c;
    u32 word_50;
    u16 half_54;
    u16 half_56;
    u16 half_58;
    u8 unknown_5a[0x2];  // (not used here)
    u32 word_5c;
};
GUEST_OFFSET(Object_005b5b78_0, word_48, 0x48);  // (from the original)
GUEST_OFFSET(Object_005b5b78_0, word_4c, 0x4c);  // (from the original)
GUEST_OFFSET(Object_005b5b78_0, word_50, 0x50);  // (from the original)
GUEST_OFFSET(Object_005b5b78_0, half_54, 0x54);  // (from the original)
GUEST_OFFSET(Object_005b5b78_0, half_56, 0x56);  // (from the original)
GUEST_OFFSET(Object_005b5b78_0, half_58, 0x58);  // (from the original)
GUEST_OFFSET(Object_005b5b78_0, word_5c, 0x5c);  // (from the original)

struct __attribute__((packed)) Object_005b5b78_3 {
    u16 half_0;
    u16 half_2;
    u16 half_4;
};
GUEST_OFFSET(Object_005b5b78_3, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005b5b78_3, half_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_005b5b78_3, half_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x005b4d7c, u32(u32, u32, u32, u32)> call_005b4d7c;  // (from the original)

u32 f_005b5b78(gptr<Object_005b5b78_0> arg0, u32 r1_unused, gptr<Float3> arg2, gptr<Object_005b5b78_3> arg3) {
    u32 r0 = arg0.addr();
    u32 r2 = arg2.addr();
    u32 r3 = arg3.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r0;
    r0 = r13 + 0x24u;  // (from the original)
    r5 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r12 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r13 + 0x18u));  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(r0));
    S2 = std::bit_cast<float>(*gptr<u32>(r0 + 4));
    if (u32(*gptr<u8>(0x957323u)) < 0xa5u) {  // (from the original)
        r0 = 0u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r0 = r4;
    arg0->word_48 = u32(std::bit_cast<u32>(arg2->v[0]));
    S3 = arg2->v[1];
    arg0->word_4c = u32(std::bit_cast<u32>(S3));
    arg0->word_50 = u32(std::bit_cast<u32>(arg2->v[2]));
    arg0->half_54 = u16(u32(arg3->half_0));
    arg0->half_56 = u16(u32(arg3->half_2));
    r3 = r5;
    arg0->half_58 = u16(u32(arg3->half_4));
    arg0->word_5c = u32(std::bit_cast<u32>(S0));
    r2 = r12;
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r13 + 4) = u32(std::bit_cast<u32>(S2));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_005b4d7c(r0, guest::cpu()->r[1], r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    *gptr<u8>(r4 + 0x44u) = u8(0u);  // (from the original)
    r0 = 1u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_005b5b78
GUEST_EXPORT(0x005b5b78, d_005b5b78::f_005b5b78);

// f_005b5d38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b5d38 {

inline constexpr guest::Function<0x005b5d60, u32(u32, u32, u32, u32)> call_005b5d60;  // (from the original)

u32 f_005b5d38(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    float S4 = 0;
    float S5 = 0;
    float S6 = 0;
    float S7 = 0;
    float S8 = 0;
    float S9 = 0;
    float S10 = 0;
    float S11 = 0;
    r13 = r13 - 0x40u;  // (from the original)
    r12 = r13 + 0x40u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r12));
    S1 = std::bit_cast<float>(*gptr<u32>(r12 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r12 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r12 + 0xc));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r12 + 0x10));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(r12 + 0x14));  // (from the original)
    S6 = std::bit_cast<float>(*gptr<u32>(r12 + 0x18));  // (from the original)
    S7 = std::bit_cast<float>(*gptr<u32>(r12 + 0x1c));  // (from the original)
    S8 = std::bit_cast<float>(*gptr<u32>(r12 + 0x20));  // (from the original)
    S9 = std::bit_cast<float>(*gptr<u32>(r12 + 0x24));  // (from the original)
    S10 = std::bit_cast<float>(*gptr<u32>(r12 + 0x28));  // (from the original)
    S11 = std::bit_cast<float>(*gptr<u32>(r12 + 0x2c));  // (from the original)
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(ea + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(ea + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(ea + 0xc) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(std::bit_cast<u32>(S5));  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(std::bit_cast<u32>(S6));  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(std::bit_cast<u32>(S7));  // (from the original)
    *gptr<u32>(ea + 0x20) = u32(std::bit_cast<u32>(S8));  // (from the original)
    *gptr<u32>(ea + 0x24) = u32(std::bit_cast<u32>(S9));  // (from the original)
    *gptr<u32>(ea + 0x28) = u32(std::bit_cast<u32>(S10));  // (from the original)
    *gptr<u32>(ea + 0x2c) = u32(std::bit_cast<u32>(S11));  // (from the original)
    *gptr<u32>(r13) = u32(r2);
    *gptr<u32>(r13 + 4) = u32(r3);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    guest::cpu()->s[8] = S8;
    guest::cpu()->s[9] = S9;
    guest::cpu()->s[10] = S10;
    guest::cpu()->s[11] = S11;
    call_005b5d60(guest::cpu()->r[0], guest::cpu()->r[1], r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return guest::cpu()->r[0];
}

}  // namespace d_005b5d38
GUEST_EXPORT(0x005b5d38, d_005b5d38::f_005b5d38);

// f_005b7418: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b7418 {

struct __attribute__((packed)) Object_005b7418_0 {
    u8 unknown_0[0x19764];  // (not used here)
    u8 byte_19764;
};
GUEST_OFFSET(Object_005b7418_0, byte_19764, 0x19764);  // (from the original)


u32 f_005b7418(gptr<Object_005b7418_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    r0 = r0 + 0x19764u;  // (from the original)
    arg0->byte_19764 = u8(r1);
    return r0;
}

}  // namespace d_005b7418
GUEST_EXPORT(0x005b7418, d_005b7418::f_005b7418);

// f_005b769c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b769c {

struct __attribute__((packed)) Object_005b769c_0 {
    u8 unknown_0[0x2510];  // (not used here)
    u32 word_2510;
};
GUEST_OFFSET(Object_005b769c_0, word_2510, 0x2510);  // (from the original)


u32 f_005b769c(gptr<Object_005b769c_0> arg0, u32 r1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 nf = 0;
    u32 vf = 0;
    r0 = r0 + 0x2510u;  // (from the original)
    res = r1;
    r2 = arg0->word_2510;
    if (res >> 0x1f != (r1 & (r1 ^ res)) >> 0x1f) {  // (from the original)
        r1 = 1u;
    }
    r3 = r1 + (r2 << 0x12 >> 0x1d);  // (from the original)
    res = r3 - 7u;
    nf = res >> 0x1f;  // (from the original)
    vf = ((r3 ^ 7u) & (r3 ^ res)) >> 0x1f;  // (from the original)
    if (nf != vf) {
        r2 = ror32(r2, 0xe);  // (from the original)
        r1 = ror32(r2 + (r1 << 0x1d), 0x12);  // (from the original)
    }
    if (nf == vf) {
        r1 = r2 | 0x3800u;  // (from the original)
    }
    arg0->word_2510 = u32(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005b769c
GUEST_EXPORT(0x005b769c, d_005b769c::f_005b769c);

// f_005b8188: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b8188 {

struct __attribute__((packed)) Object_005b8188_0 {
    u8 unknown_0[0x2510];  // (not used here)
    u32 word_2510;
};
GUEST_OFFSET(Object_005b8188_0, word_2510, 0x2510);  // (from the original)


u32 f_005b8188(gptr<Object_005b8188_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r0 = r0 + 0x2510u;  // (from the original)
    r1 = arg0->word_2510 & ~0x600u;  // (from the original)
    arg0->word_2510 = u32(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005b8188
GUEST_EXPORT(0x005b8188, d_005b8188::f_005b8188);

// f_005b81b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b81b8 {

struct __attribute__((packed)) Object_005b81b8_0 {
    u8 unknown_0[0x2510];  // (not used here)
    u32 word_2510;
};
GUEST_OFFSET(Object_005b81b8_0, word_2510, 0x2510);  // (from the original)


u32 f_005b81b8(gptr<Object_005b81b8_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 zf = 0;
    r0 = r0 + 0x2510u;  // (from the original)
    zf = r1 == 0;
    r1 = arg0->word_2510;
    if (zf) {
        r1 = r1 & ~0x8000u;  // (from the original)
    } else {
        r1 = r1 | 0x8000u;  // (from the original)
    }
    arg0->word_2510 = u32(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005b81b8
GUEST_EXPORT(0x005b81b8, d_005b81b8::f_005b81b8);

// f_005b81fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b81fc {

struct __attribute__((packed)) Object_005b81fc_0 {
    u8 unknown_0[0x2510];  // (not used here)
    u32 word_2510;
};
GUEST_OFFSET(Object_005b81fc_0, word_2510, 0x2510);  // (from the original)


u32 f_005b81fc(gptr<Object_005b81fc_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r0 = r0 + 0x2510u;  // (from the original)
    r1 = arg0->word_2510 & ~0x78u;  // (from the original)
    arg0->word_2510 = u32(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005b81fc
GUEST_EXPORT(0x005b81fc, d_005b81fc::f_005b81fc);

// f_005b96a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b96a8 {

inline constexpr guest::Function<0x00118c9d, u32(u32, u32, u32, u32)> call_00118c9c;  // (from the original)
inline constexpr guest::Function<0x002f77e8, u32(u32, u32, u32, u32)> call_002f77e8;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002ff368, u32(u32, u32, u32, u32)> call_002ff368;  // (from the original)
inline constexpr guest::Function<0x003058c9, u32(u32, u32, u32, u32)> call_003058c8;  // (from the original)
inline constexpr guest::Function<0x0030d1bc, u32(u32, u32, u32, u32)> call_0030d1bc;  // (from the original)
inline constexpr guest::Function<0x0030da05, u32(u32, u32, u32, u32)> call_0030da04;  // (from the original)
inline constexpr guest::Function<0x0030dad8, u32(u32, u32, u32, u32)> call_0030dad8;  // (from the original)
inline constexpr guest::Function<0x0030dc84, u32(u32, u32, u32, u32)> call_0030dc84;  // (from the original)

u32 f_005b96a8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x2a0u;  // (from the original)
    r5 = r0;
    r6 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb310(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 + 4u;
    r1 = r5 + 0xcu;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00118c9c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_003058c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 == 0) {
        goto L_5b9780;
    }
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002ff368(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r13 + 0x288u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r0);
    *gptr<u32>(r13 + 4) = u32(~0u);
    r1 = u32(*gptr<u16>(r4 + 0x2cu));  // (from the original)
    r3 = 0u;
    r2 = r6;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0030d1bc(r0, r1, r2, r3);
    r7 = 0u;
    r3 = 6u;
    r2 = r6;
    r1 = r13 + 8u;
    r0 = r4;
    *gptr<u32>(r13) = u32(r7);
    *gptr<u32>(r13 + 4u) = u32(r7);
    guest::cpu()->r[13] = r13;
    r0 = call_0030da04(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_5b9778;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x20u;  // (from the original)
    r1 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0030dc84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_5b9778;
    }
    r3 = 0u;
    *gptr<u32>(r13) = u32(r7);
    r2 = u32(*gptr<u16>(r4 + 0x2cu));  // (from the original)
    r0 = r0 + 0x8ebeu;  // (from the original)
    r1 = r3;
    guest::cpu()->r[13] = r13;
    r0 = call_0030dad8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_5b9778:;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002f77e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_5b9780:;
    r0 = 9u;
    *gptr<u8>(r5 + 9u) = u8(r0);
    r13 = r13 + 0x2a0u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005b96a8
GUEST_EXPORT(0x005b96a8, d_005b96a8::f_005b96a8);

// f_005ba234: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ba234 {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002ff6f4, u32(u32, u32, u32, u32)> call_002ff6f4;  // (from the original)
inline constexpr guest::Function<0x00308efc, u32(u32, u32, u32, u32)> call_00308efc;  // (from the original)
inline constexpr guest::Function<0x005ba098, u32(u32, u32, u32, u32)> call_005ba098;  // (from the original)
inline constexpr guest::Function<0x005cddb4, u32(u32, u32, u32, u32)> call_005cddb4;  // (from the original)

u32 f_005ba234(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r6 = r1;
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005ba098(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb378(r0, r1, r2, guest::cpu()->r[3]);
    r1 = *gptr<u32>(r0);
    r2 = *gptr<u32>(r0 + 4);
    *gptr<u32>(r13 + 8u) = u32(*gptr<u32>(r0 + 8u));
    r0 = r13;
    *gptr<u32>(r13) = u32(r1);
    *gptr<u32>(r13 + 4) = u32(r2);
    guest::cpu()->r[13] = r13;
    r0 = call_00308efc(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 3u;
    *gptr<u8>(r4 + 8u) = u8(r2);
    *gptr<u8>(r4 + 9u) = u8(0u);
    r1 = r13;
    r5 = 7u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005cddb4(r0, r1, r2, guest::cpu()->r[3]);
    *gptr<u8>(r4 + 0xau) = u8(r5);  // (from the original)
    r2 = 0x2fu;  // (from the original)
    r1 = *gptr<u32>(0x1028u + r6);  // (from the original)
    r0 = r4 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f8574(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = 3u;
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = 0xeu;  // (from the original)
        *gptr<u8>(r4 + 0x3eu) = u8(r0);  // (from the original)
        goto L_5ba2c4;
    }
    if (r0 == 1u) {
        r0 = 0x15u;  // (from the original)
    } else {
        r0 = 0x1eu;  // (from the original)
    }
    *gptr<u8>(r4 + 0x3eu) = u8(r0);  // (from the original)
L_5ba2c4:;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005ba234
GUEST_EXPORT(0x005ba234, d_005ba234::f_005ba234);

// f_005ba980: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ba980 {

struct __attribute__((packed)) Object_005ba980_0 {
    u8 unknown_0[0x9];  // (not used here)
    u8 byte_9;
};
GUEST_OFFSET(Object_005ba980_0, byte_9, 0x9);  // (from the original)


void f_005ba980(gptr<Object_005ba980_0> arg0) {
    u32 r1 = 0;
    r1 = u32(arg0->byte_9);
    if (r1 == 4u) {
        r1 = 5u;
        arg0->byte_9 = u8(r1);
    }
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005ba980
GUEST_EXPORT(0x005ba980, d_005ba980::f_005ba980);

// f_005bb39c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bb39c {

inline constexpr guest::Function<0x002c002c, u32(u32, u32, u32, u32)> call_002c002c;  // (from the original)
inline constexpr guest::Function<0x002c003c, u32(u32, u32, u32, u32)> call_002c003c;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)

u32 f_005bb39c(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r5 = r1;
    r8 = r0;
    r6 = r2;
    r0 = call_002fb94c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_5bb428;
    }
    r7 = r0 + 0x7008u;  // (from the original)
    r1 = r8;
    r0 = r7;
    r0 = call_002c002c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r4 = r0;
    if (r0 == 0) {
        goto L_5bb428;
    }
    r0 = u32(*gptr<u8>(r4 + 0x272u));  // (from the original)
    if ((r0 & 0x80u) == 0) {  // (from the original)
        goto L_5bb428;
    }
    r0 = call_002fae84(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = call_002fb310(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r0 = r0 + 0x1744cu;  // (from the original)
    r1 = u32(*gptr<u8>(r4 + 0x272u)) & 7u;  // (from the original)
    if (r1 < 8u) {
        r2 = r1 >> 1;
        r0 = r0 + (r2 << 7) + ((r1 & 1u) << 6);
    }
    r1 = r8;
    *gptr<u8>(r0 + 0x3cu) = u8(r5);  // (from the original)
    *gptr<u8>(r0 + 0x3du) = u8(r6);  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return call_002c003c(r0, r1, r2, guest::cpu()->r[3]);
L_5bb428:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005bb39c
GUEST_EXPORT(0x005bb39c, d_005bb39c::f_005bb39c);

// f_005bb42c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bb42c {

struct __attribute__((packed)) Object_005bb42c_0 {
    u8 unknown_0[0x272];  // (not used here)
    u8 byte_272;
};
GUEST_OFFSET(Object_005bb42c_0, byte_272, 0x272);  // (from the original)

inline constexpr guest::Function<0x0010cadd, u32(u32, u32, u32, u32)> call_0010cadc;  // (from the original)
inline constexpr guest::Function<0x00112f9d, u32(u32, u32, u32, u32)> call_00112f9c;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> call_002fb430;  // (from the original)
inline constexpr guest::Function<0x002fd41c, u32(u32, u32, u32, u32)> call_002fd41c;  // (from the original)
inline constexpr guest::Function<0x003014b4, u32(u32, u32, u32, u32)> call_003014b4;  // (from the original)
inline constexpr guest::Function<0x00309fbc, u32(u32, u32, u32, u32)> call_00309fbc;  // (from the original)
inline constexpr guest::Function<0x005ba098, u32(u32, u32, u32, u32)> call_005ba098;  // (from the original)

u32 f_005bb42c(gptr<Object_005bb42c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r5 = r0;
    r13 = r13 - 0x38u;  // (from the original)
    r0 = u32(arg0->byte_272);
    if ((r0 & 0x20u) != 0) {  // (from the original)
        goto L_5bb588;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb310(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = u32(*gptr<u8>(r5 + 0x272u));  // (from the original)
    r7 = r0 + 4u;
    r6 = r0 + 0x1744cu;  // (from the original)
    r0 = r1 & 7u;
    r4 = r6;
    if (r0 < 8u) {
        r2 = r6 + (r0 >> 1 << 7);
        r4 = r2 + ((r0 & 1u) << 6);
    }
    zf = (r1 & 8u) == 0;
    if (!zf) {
        zf = (r1 & 0x20u) == 0;  // (from the original)
    }
    if (!zf) {
        goto L_5bb4fc;
    }
    r0 = u32(*gptr<u8>(r4 + 9u));
    if (s32(r0) < s32(3u)) {
        goto L_5bb588;
    }
    if (s32(r0) >= s32(9u)) {
        goto L_5bb588;
    }
    if (s32(r0) >= s32(4u)) {
        goto L_5bb4fc;
    }
    r0 = r13 + 0x14u;  // (from the original)
    r1 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb430(r0, r1, r2, r3);
    ea = r13 + 0x14u;  // (from the original)
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    r3 = r13 + 8u;
    *gptr<u32>(r3) = u32(*gptr<u32>(ea));
    *gptr<u32>(r3 + 4) = u32(r1);
    *gptr<u32>(r3 + 8) = u32(r2);
    r0 = r13 + 8u;
    r1 = u32(s32(s8(*gptr<u8>(r4 + 0x3eu))));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003014b4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb378(r0, r1, r2, r3);
    ea = r13 + 0xcu;  // (from the original)
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    ea = r13;
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    ea = r0;
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    r3 = *gptr<u32>(r13 + 8u);
    guest::cpu()->r[13] = r13;
    r0 = call_002fd41c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_5bb588;
    }
L_5bb4fc:;
    r5 = ~0u;
    r0 = 0u;
L_5bb504:;
    r1 = r6 + (r0 << 7);
    zf = r1 == r4;
    if (!zf) {
        r2 = r1 + 0x40u;  // (from the original)
        zf = r2 == r4;
    }
    if (zf) {
        r5 = r0;
    } else {
        r0 = r0 + 1u;
        if (s32(r0) < s32(4u)) {
            guest::preempt();
            goto L_5bb504;
        }
    }
    r0 = 0xaaef18u;  // (from the original)
    r6 = *gptr<u32>(r0 + 0x234u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0xa0u;  // (from the original)
    r1 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00309fbc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != r5) {
        goto L_5bb578;
    }
    r1 = r4 + 0xcu;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_0010cadc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_5bb578;
    }
    r3 = 1u;
    r2 = 0u;
    r1 = ~3u;
    guest::cpu()->r[13] = r13;
    r0 = call_00112f9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_5bb578:;
    r0 = r4;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_005ba098(r0, r1, r2, r3);
L_5bb588:;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005bb42c
GUEST_EXPORT(0x005bb42c, d_005bb42c::f_005bb42c);

// f_005bb66c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bb66c {

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x006bacd8, u32(u32, u32, u32, u32)> call_006bacd8;  // (from the original)

u32 f_005bb66c(u32 r0_unused, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r1;
    r1 = 0x341cu;  // (from the original)
    call_002fcbb0(guest::cpu()->r[0], r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = u32(*gptr<u8>(r4 + 0x272u));  // (from the original)
    guest::cpu()->r[13] += 8u;
    r1 = r1 & 7u;
    return call_006bacd8(guest::cpu()->r[0], r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005bb66c
GUEST_EXPORT(0x005bb66c, d_005bb66c::f_005bb66c);

// f_005bb690: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bb690 {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x005b99b8, u32(u32, u32, u32, u32)> call_005b99b8;  // (from the original)
inline constexpr guest::Function<0x0071dc9c, u32(u32, u32, u32, u32)> call_0071dc9c;  // (from the original)
inline constexpr guest::Function<0x0076ad64, u32(u32, u32, u32, u32)> call_0076ad64;  // (from the original)

u32 f_005bb690(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = r0;
    r0 = call_002fae84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = call_002fb310(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r6 = r4;
    r1 = 0x341cu;  // (from the original)
    r4 = r0 + 0x1744cu;  // (from the original)
    r0 = r6;
    r0 = call_002fcb84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r7 = 0u;
    if (r0 == 0) {
        goto L_5bb6e4;
    }
    r0 = call_002fb94c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r5 = r0;
    if (r0 == 0) {
        goto L_5bb6e4;
    }
    r0 = r5 + 0x7008u;  // (from the original)
    r0 = call_0071dc9c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    res = r0;
    if (res >> 0x1f == (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_5bb6ec;
    }
L_5bb6e4:;
    r0 = r7;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_5bb6ec:;
    r0 = r6;
    r0 = call_0076ad64(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 < 8u) {
        r4 = r4 + (r0 >> 1 << 7) + ((r0 & 1u) << 6);
    }
    r1 = r5;
    r0 = r4;
    r0 = call_005b99b8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (u32(*gptr<u8>(r4 + 9u)) == 6u) {
        *gptr<u8>(r4 + 9u) = u8(0xau);  // (from the original)
    } else {
        r0 = ~0u;
        *gptr<u8>(r4 + 0x3cu) = u8(r0);  // (from the original)
        *gptr<u8>(r4 + 0x3du) = u8(r0);  // (from the original)
    }
    r0 = 1u;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005bb690
GUEST_EXPORT(0x005bb690, d_005bb690::f_005bb690);

// f_005bb744: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bb744 {

inline constexpr guest::Function<0x005cddb4, u32(u32, u32, u32, u32)> call_005cddb4;  // (from the original)

u32 f_005bb744() {
    return call_005cddb4(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005bb744
GUEST_EXPORT(0x005bb744, d_005bb744::f_005bb744);

// f_005bb748: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bb748 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002ff6f4, u32(u32, u32, u32, u32)> call_002ff6f4;  // (from the original)
inline constexpr guest::Function<0x003009a9, u32(u32, u32, u32, u32)> call_003009a8;  // (from the original)
inline constexpr guest::Function<0x0030e80d, u32(u32, u32, u32, u32)> call_0030e80c;  // (from the original)

u32 f_005bb748(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    u32 cf = 0;
    r13 = r13 - 0x58u;  // (from the original)
    r6 = 0u;
    r7 = ~0u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    r8 = r0 + 0x292a4u;  // (from the original)
    r9 = r4;
    r10 = 1u;
L_5bb770:;
    r1 = r4;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_003009a8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    if (r0 == 0) {
        goto L_5bb834;
    }
    if (u32(*gptr<u8>(0x250eu + r5)) != 0) {  // (from the original)
        goto L_5bb834;
    }
    r3 = 2u;
    r2 = r5;
    r1 = r8;
    r0 = r13 + 0x20u;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r9);
    *gptr<u32>(r13) = u32(r10);
    *gptr<u32>(r13 + 8u) = u32(r9);
    guest::cpu()->r[13] = r13;
    r0 = call_0030e80c(r0, r1, r2, r3);
    r3 = 1u;
    ea = r13 + 0x20u;  // (from the original)
    r2 = *gptr<u32>(ea + 4);
    r1 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r1) = u32(*gptr<u32>(ea));
    *gptr<u32>(r1 + 4) = u32(r2);
    r2 = 0u;
    r0 = r2;
    goto L_5bb7e0;
L_5bb7d8:;
    if (cf) {
        goto L_5bb7f8;
    }
L_5bb7e0:;
    r11 = u32(*gptr<u8>(r1 + (r0 >> 3)));
    if ((lsr_r(r11, r0 & 7u) & 1u) == r3) {
        r2 = r2 + 1u;
    }
L_5bb7f8:;
    r0 = r0 + 1u;
    cf = r0 >= 0x21u;  // (from the original)
    if (!cf) {
        guest::preempt();
        goto L_5bb7d8;
    }
    if (r2 != 0) {
        goto L_5bb834;
    }
    r5 = r5 + 0x250fu;  // (from the original)
    if (u32(*gptr<u8>(r5)) != 0) {
        goto L_5bb834;
    }
    r6 = r6 + 1u;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r7 = r4;
    }
L_5bb834:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_5bb770;
    }
    r0 = r7;
    r13 = r13 + 0x58u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005bb748
GUEST_EXPORT(0x005bb748, d_005bb748::f_005bb748);

// f_005bb9f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bb9f0 {

inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> call_00303cdc;  // (from the original)
inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> call_005cdf48;  // (from the original)

u32 f_005bb9f0(u32 r0) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = r0;
    r2 = ~0u;
    r3 = ~0x80000000u;  // (from the original)
    r0 = call_005cdf48(r0, guest::cpu()->r[1], r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0x21u;  // (from the original)
    r0 = r4;
    *gptr<u8>(r4 + 8u) = u8(r5);
    r0 = call_00303cdc(r0, guest::cpu()->r[1], r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0xffu;  // (from the original)
    r7 = 9u;
    *gptr<u8>(r4 + 9u) = u8(r6);
    *gptr<u8>(r4 + 0xau) = u8(r7);  // (from the original)
    r0 = r4;
    *gptr<u8>(r4 + 8u) = u8(r5);
    r0 = call_00303cdc(r0, guest::cpu()->r[1], r2, r3);
    *gptr<u8>(r4 + 9u) = u8(r6);
    r0 = ~0u;
    *gptr<u8>(r4 + 0xau) = u8(r7);  // (from the original)
    *gptr<u8>(r4 + 0xbu) = u8(r0);  // (from the original)
    *gptr<u8>(r4 + 0xcu) = u8(r0);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return r0;
}

}  // namespace d_005bb9f0
GUEST_EXPORT(0x005bb9f0, d_005bb9f0::f_005bb9f0);

// f_005bbd70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bbd70 {

struct __attribute__((packed)) Object_005bbd70_0 {
    u8 unknown_0[0x5b];  // (not used here)
    u8 byte_5b;
};
GUEST_OFFSET(Object_005bbd70_0, byte_5b, 0x5b);  // (from the original)


void f_005bbd70(gptr<Object_005bbd70_0> arg0, u32 r1) {
    if (r1 >= 3u) {
        guest::cpu()->r[1] = r1;
        return;
    }
    r1 = u32(arg0->byte_5b) | lsl_r(1u, r1 & 0xff);  // (from the original)
    arg0->byte_5b = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005bbd70
GUEST_EXPORT(0x005bbd70, d_005bbd70::f_005bbd70);

// f_005bbdf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bbdf8 {

struct __attribute__((packed)) Object_005bbdf8_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(Object_005bbdf8_0, byte_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> call_00303cdc;  // (from the original)
inline constexpr guest::Function<0x005cddb4, u32(u32, u32, u32, u32)> call_005cddb4;  // (from the original)

u32 f_005bbdf8(gptr<Object_005bbdf8_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = 0x21u;  // (from the original)
    r4 = r0;
    arg0->byte_8 = u8(r5);
    r0 = call_00303cdc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0xffu;  // (from the original)
    r0 = 9u;
    *gptr<u8>(r4 + 9u) = u8(r1);
    *gptr<u8>(r4 + 0xau) = u8(r0);  // (from the original)
    r0 = call_002fb378(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    r0 = r4;
    r0 = call_005cddb4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r4 + 8u) = u8(r5);
    *gptr<u8>(r4 + 0xbu) = u8(0xffu);  // (from the original)
    r0 = 2u;
    *gptr<u8>(r4 + 9u) = u8(r0);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005bbdf8
GUEST_EXPORT(0x005bbdf8, d_005bbdf8::f_005bbdf8);

// f_005bcaa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bcaa8 {

struct __attribute__((packed)) Object_005bcaa8_0 {
    u8 unknown_0[0xa8];  // (not used here)
    u8 byte_a8;
};
GUEST_OFFSET(Object_005bcaa8_0, byte_a8, 0xa8);  // (from the original)


void f_005bcaa8(gptr<Object_005bcaa8_0> arg0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 zf = 0;
    r1 = r1 + u32(s32(s8(arg0->byte_a8)));
    res = r1 + 4u;
    if (res >> 0x1f != ((r1 ^ res) & (4u ^ res)) >> 0x1f) {  // (from the original)
        r1 = ~3u;
        arg0->byte_a8 = u8(r1);
        guest::cpu()->r[1] = r1;
        return;
    }
    zf = r2 == 3u;
    if (!zf) {
        zf = r2 == 6u;
    }
    if (zf) {
        goto L_5bcae8;
    }
    zf = r2 == 9u;
    if (!zf) {
        zf = r2 == 0xbu;  // (from the original)
    }
    if (zf) {
        goto L_5bcae8;
    } else {
        r2 = 0x28u;  // (from the original)
    }
L_5bcad8:;
    res = r1 - r2;
    if (!u32(res == 0) && res >> 0x1f == ((r1 ^ r2) & (r1 ^ res)) >> 0x1f) {  // (from the original)
        r1 = r2;
    }
    arg0->byte_a8 = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
L_5bcae8:;
    r2 = 0x3cu;  // (from the original)
    guest::preempt();
    goto L_5bcad8;
}

}  // namespace d_005bcaa8
GUEST_EXPORT(0x005bcaa8, d_005bcaa8::f_005bcaa8);

// f_005bcaf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bcaf0 {

struct __attribute__((packed)) Object_005bcaf0_0 {
    u8 unknown_0[0xa7];  // (not used here)
    u8 byte_a7;
    u8 unknown_a8[0x1];  // (not used here)
    u8 byte_a9;
};
GUEST_OFFSET(Object_005bcaf0_0, byte_a7, 0xa7);  // (from the original)
GUEST_OFFSET(Object_005bcaf0_0, byte_a9, 0xa9);  // (from the original)


void f_005bcaf0(gptr<Object_005bcaf0_0> arg0) {
    u32 r1 = 0;
    r1 = u32(arg0->byte_a9) + 1u & 0xffu;  // (from the original)
    arg0->byte_a9 = u8(r1);
    if (r1 < 3u) {
        guest::cpu()->r[1] = r1;
        return;
    }
    r1 = 3u;
    arg0->byte_a7 = u8(1u);
    arg0->byte_a9 = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005bcaf0
GUEST_EXPORT(0x005bcaf0, d_005bcaf0::f_005bcaf0);

// f_005bcbfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bcbfc {

struct __attribute__((packed)) Object_005bcbfc_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(Object_005bcbfc_0, byte_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> call_00303cdc;  // (from the original)
inline constexpr guest::Function<0x005bce04, u32(u32, u32, u32, u32)> call_005bce04;  // (from the original)
inline constexpr guest::Function<0x005cddb4, u32(u32, u32, u32, u32)> call_005cddb4;  // (from the original)

u32 f_005bcbfc(gptr<Object_005bcbfc_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    arg0->byte_8 = u8(0x21u);  // (from the original)
    r5 = r1;
    r0 = r4;
    r0 = call_00303cdc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0xffu;  // (from the original)
    r0 = 9u;
    *gptr<u8>(r4 + 9u) = u8(r1);
    *gptr<u8>(r4 + 0xau) = u8(r0);  // (from the original)
    r0 = call_002fb378(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    r0 = r4;
    r0 = call_005cddb4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r5;
    r0 = r4;
    r0 = call_005bce04(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 4u;
    *gptr<u8>(r4 + 9u) = u8(r0);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005bcbfc
GUEST_EXPORT(0x005bcbfc, d_005bcbfc::f_005bcbfc);

// f_005bcc50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bcc50 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb338, u32(u32, u32, u32, u32)> call_002fb338;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> call_002fb430;  // (from the original)
inline constexpr guest::Function<0x002fd4b4, u32(u32, u32, u32, u32)> call_002fd4b4;  // (from the original)
inline constexpr guest::Function<0x007241b0, u32(u32, u32, u32, u32)> call_007241b0;  // (from the original)

u32 f_005bcc50(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    u32 cf = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0 + 0x6ad82u;  // (from the original)
    r0 = res;
    if (res == 0) {
        goto L_5bcd3c;
    }
    if (u32(*gptr<u8>(r0)) < 2u) {
        goto L_5bcd3c;
    }
    if (r4 == 0) {
        goto L_5bcd3c;
    }
    r0 = u32(*gptr<u8>(0x570cu + r4));  // (from the original)
    res = r0 << 0x19;  // (from the original)
    r1 = res;
    if (!(res >> 0x1f)) {  // (from the original)
        res = r0 >> 7;
        if (res == 0) {
            goto L_5bcd3c;
        }
    }
    r5 = r4 + 0x8e08u;  // (from the original)
    cf = u32(*gptr<u8>(r5 + 8u)) >= 0x21u;  // (from the original)
    if (!cf) {
        cf = u32(*gptr<u8>(r5 + 9u)) >= 3u;
    }
    if (!cf) {
        goto L_5bcd3c;
    }
    r0 = r4 + 0x6bd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007241b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0;
    if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_5bcd3c;
    }
    r4 = r5;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb338(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    if (!zf) {
        r0 = u32(*gptr<u8>(r4 + 9u));
        zf = r0 == 4u;
    }
    if (!zf) {
        guest::cpu()->r[13] = r13;
        r0 = call_002fb378(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = r0;
        r0 = r13 + 0xcu;  // (from the original)
        r1 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_002fb430(r0, r1, r2, r3);
        r3 = r13 + 0xcu;  // (from the original)
        r1 = *gptr<u32>(r3 + 4);
        r2 = *gptr<u32>(r3 + 8);
        *gptr<u32>(r13) = u32(*gptr<u32>(r3));
        *gptr<u32>(r13 + 4) = u32(r1);
        *gptr<u32>(r13 + 8) = u32(r2);
        r2 = 1u;
        r1 = r5;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_002fd4b4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        res = r0;
        if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
            r0 = 0u - r0;
        }
        if (s32(r0) <= s32(3u)) {
            goto L_5bcd3c;
        }
    }
    r0 = 1u;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5bcd3c:;
    r0 = 0u;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005bcc50
GUEST_EXPORT(0x005bcc50, d_005bcc50::f_005bcc50);

// f_005bcf24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bcf24 {

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x0030f52c, u32(u32, u32, u32, u32)> call_0030f52c;  // (from the original)
inline constexpr guest::Function<0x0051d77c, u32(u32, u32, u32, u32)> call_0051d77c;  // (from the original)
inline constexpr guest::Function<0x005bce04, u32(u32, u32, u32, u32)> call_005bce04;  // (from the original)
inline constexpr guest::Function<0x005cddb4, u32(u32, u32, u32, u32)> call_005cddb4;  // (from the original)

u32 f_005bcf24(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r5 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_005bce04(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0 = call_0051d77c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    ea = r4 + 0xb4u;  // (from the original)
    *gptr<u8>(ea) = u8(r0);
    ea = r5 + 0x1028u;  // (from the original)
    r1 = ea;
    r5 = *gptr<u32>(ea);
    r0 = *gptr<u32>(r1 + 4u);
    zf = r0 == 0;
    if (!zf) {
        zf = r5 == 0;
    }
    if (!zf) {
        r6 = u32(*gptr<u8>(r0 + 0x24u));  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fb378(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        *gptr<u8>(r4 + 8u) = u8(r6);
        r7 = 3u;
        *gptr<u8>(r4 + 9u) = u8(0u);
        if (r0 != 0) {
            r1 = r0;
            r0 = r4;
            guest::cpu()->r[13] = r13;
            r0 = call_005cddb4(r0, r1, r2, guest::cpu()->r[3]);
            r2 = guest::cpu()->r[2];
        }
        *gptr<u8>(r4 + 0xau) = u8(r7);  // (from the original)
        r4 = r4 + 0xcu;  // (from the original)
        r1 = r5;
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_0030f52c(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0 = u32(*gptr<u16>(r5 + 0x2cu));  // (from the original)
        *gptr<u16>(r4 + 0x16u) = u16(r0);  // (from the original)
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005bcf24
GUEST_EXPORT(0x005bcf24, d_005bcf24::f_005bcf24);

// f_005bd01c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bd01c {

inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> call_00303cdc;  // (from the original)
inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> call_005cdf48;  // (from the original)

u32 f_005bd01c(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r2 = ~0u;
    r3 = ~0x80000000u;  // (from the original)
    r0 = call_005cdf48(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r4 + 8u) = u8(0x21u);  // (from the original)
    r0 = r4;
    r0 = call_00303cdc(r0, r1, r2, r3);
    r1 = 0xffu;  // (from the original)
    *gptr<u8>(r4 + 9u) = u8(r1);
    *gptr<u8>(r4 + 0xau) = u8(9u);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005bd01c
GUEST_EXPORT(0x005bd01c, d_005bd01c::f_005bd01c);

// f_005bd0a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bd0a0 {

struct __attribute__((packed)) Object_005bd0a0_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(Object_005bd0a0_0, byte_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> call_00303cdc;  // (from the original)
inline constexpr guest::Function<0x005cddb4, u32(u32, u32, u32, u32)> call_005cddb4;  // (from the original)

u32 f_005bd0a0(gptr<Object_005bd0a0_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
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
    u32 r14 = guest::cpu()->r[14];
    if (r1 >= 6u) {
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
    ea = r13 - 0x38;  // (from the original)
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
    *gptr<u32>(ea + 0x30) = u32(r12);  // (from the original)
    *gptr<u32>(ea + 0x34) = u32(r14);  // (from the original)
    r13 = r13 - 0x38;  // (from the original)
    r4 = r0;
    r5 = r1;
    r6 = r2;
    r9 = 0x21u;  // (from the original)
    arg0->byte_8 = u8(r9);
    guest::cpu()->r[13] = r13;
    r0 = call_00303cdc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0xffu;  // (from the original)
    *gptr<u8>(r4 + 9u) = u8(r1);
    *gptr<u8>(r4 + 0xau) = u8(9u);  // (from the original)
    r10 = 0u;
    r11 = 6u;
    *gptr<u16>(r4 + 0xcu) = u16(r10);  // (from the original)
    r0 = r1;
    *gptr<u8>(r4 + 0xeu) = u8(r11);  // (from the original)
    r7 = 1u;
    *gptr<u8>(r4 + 0xfu) = u8(r0);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb378(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r4 + 8u) = u8(r7);
    r8 = 3u;
    *gptr<u8>(r4 + 9u) = u8(r10);
    if (r0 != 0) {
        r1 = r0;
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_005cddb4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    *gptr<u8>(r4 + 0xau) = u8(r8);  // (from the original)
    r0 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    *gptr<u8>(r4 + 0xeu) = u8(r5);  // (from the original)
    *gptr<u8>(r4 + 0xfu) = u8(r0);  // (from the original)
    r0 = uxth(r6);
    if (r5 != 2u) {
        if (r5 != 5u) {
            goto L_5bd180;
        }
    } else {
        if (r6 < 5u) {
            goto L_5bd180;
        }
        goto L_5bd150;
    }
    if (r6 < 2u) {
        goto L_5bd180;
    }
L_5bd150:;
    r0 = r4;
    *gptr<u8>(r4 + 8u) = u8(r9);
    guest::cpu()->r[13] = r13;
    r0 = call_00303cdc(r0, r1, r2, r3);
    r0 = 0xffu;  // (from the original)
    r1 = 9u;
    ea = r4 + 9u;
    *gptr<u8>(ea) = u8(r0);
    ea = r4 + 0xau;  // (from the original)
    *gptr<u8>(ea) = u8(r1);
    ea = r4 + 0xcu;  // (from the original)
    *gptr<u16>(ea) = u16(r10);
    ea = r4 + 0xeu;  // (from the original)
    *gptr<u8>(ea) = u8(r11);
    ea = r4 + 0xfu;  // (from the original)
    *gptr<u8>(ea) = u8(r0);
    r13 = r13 + 0x10u;  // (from the original)
    ea = r13;
    r13 = r13 + 0x28;  // (from the original)
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
L_5bd180:;
    ea = r4 + 0xcu;  // (from the original)
    *gptr<u16>(ea) = u16(r0);
    r13 = r13 + 0x10u;  // (from the original)
    ea = r13;
    r13 = r13 + 0x28;  // (from the original)
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

}  // namespace d_005bd0a0
GUEST_EXPORT(0x005bd0a0, d_005bd0a0::f_005bd0a0);

// f_005bd234: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bd234 {

inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> call_00303cdc;  // (from the original)
inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> call_005cdf48;  // (from the original)

u32 f_005bd234(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = r0;
    r2 = ~0u;
    r3 = ~0x80000000u;  // (from the original)
    r0 = call_005cdf48(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0x21u;  // (from the original)
    r0 = r4;
    *gptr<u8>(r4 + 8u) = u8(r5);
    r0 = call_00303cdc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0xffu;  // (from the original)
    r7 = 9u;
    *gptr<u8>(r4 + 9u) = u8(r6);
    *gptr<u8>(r4 + 0xau) = u8(r7);  // (from the original)
    r0 = r4;
    *gptr<u8>(r4 + 8u) = u8(r5);
    r0 = call_00303cdc(r0, r1, r2, r3);
    *gptr<u8>(r4 + 9u) = u8(r6);
    *gptr<u8>(r4 + 0xau) = u8(r7);  // (from the original)
    r1 = 6u;
    *gptr<u16>(r4 + 0xcu) = u16(0u);  // (from the original)
    *gptr<u8>(r4 + 0xeu) = u8(r1);  // (from the original)
    *gptr<u8>(r4 + 0xfu) = u8(0xffu);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005bd234
GUEST_EXPORT(0x005bd234, d_005bd234::f_005bd234);

// f_005bd2e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bd2e8 {

struct __attribute__((packed)) Object_005bd2e8_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(Object_005bd2e8_0, byte_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> call_00303cdc;  // (from the original)
inline constexpr guest::Function<0x0030b6b8, u32(u32, u32, u32, u32)> call_0030b6b8;  // (from the original)
inline constexpr guest::Function<0x005cddb4, u32(u32, u32, u32, u32)> call_005cddb4;  // (from the original)

u32 f_005bd2e8(gptr<Object_005bd2e8_0> arg0, u32 r1, u32 r2, u32 r3) {
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
    u32 r14 = guest::cpu()->r[14];
    if (r1 >= 4u) {
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
    r13 = r13 - 0x20;  // (from the original)
    r4 = r0;
    r5 = r1;
    arg0->byte_8 = u8(0x21u);  // (from the original)
    r9 = r2;
    r8 = r3;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00303cdc(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r4 + 9u) = u8(0xffu);  // (from the original)
    r2 = 0x7ffeu;  // (from the original)
    *gptr<u8>(r4 + 0xau) = u8(9u);  // (from the original)
    r1 = 4u;
    *gptr<u16>(r4 + 0xcu) = u16(r2);  // (from the original)
    r0 = 0xffu;  // (from the original)
    *gptr<u8>(r4 + 0xeu) = u8(r1);  // (from the original)
    r6 = 2u;
    *gptr<u8>(r4 + 0xfu) = u8(r0);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb378(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0u;
    *gptr<u8>(r4 + 8u) = u8(r6);
    r7 = 3u;
    *gptr<u8>(r4 + 9u) = u8(r1);
    if (r0 != 0) {
        r1 = r0;
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_005cddb4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r0 = r9;
    *gptr<u8>(r4 + 0xau) = u8(r7);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0030b6b8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    ea = r4 + 0xcu;  // (from the original)
    *gptr<u16>(ea) = u16(r0);
    ea = r4 + 0xeu;  // (from the original)
    *gptr<u8>(ea) = u8(r5);
    ea = r4 + 0xfu;  // (from the original)
    *gptr<u8>(ea) = u8(r8);
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

}  // namespace d_005bd2e8
GUEST_EXPORT(0x005bd2e8, d_005bd2e8::f_005bd2e8);

// f_005bd3fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bd3fc {

inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> call_00303cdc;  // (from the original)
inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> call_005cdf48;  // (from the original)

u32 f_005bd3fc(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = r0;
    r2 = ~0u;
    r3 = ~0x80000000u;  // (from the original)
    r0 = call_005cdf48(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0x21u;  // (from the original)
    r0 = r4;
    *gptr<u8>(r4 + 8u) = u8(r5);
    r0 = call_00303cdc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0xffu;  // (from the original)
    r7 = 9u;
    *gptr<u8>(r4 + 9u) = u8(r6);
    *gptr<u8>(r4 + 0xau) = u8(r7);  // (from the original)
    r0 = r4;
    *gptr<u8>(r4 + 8u) = u8(r5);
    r0 = call_00303cdc(r0, r1, r2, r3);
    *gptr<u8>(r4 + 9u) = u8(r6);
    *gptr<u8>(r4 + 0xau) = u8(r7);  // (from the original)
    r1 = 4u;
    *gptr<u16>(r4 + 0xcu) = u16(0x7ffeu);  // (from the original)
    *gptr<u8>(r4 + 0xeu) = u8(r1);  // (from the original)
    *gptr<u8>(r4 + 0xfu) = u8(0xffu);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005bd3fc
GUEST_EXPORT(0x005bd3fc, d_005bd3fc::f_005bd3fc);

// f_005bd750: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bd750 {

inline constexpr guest::Function<0x0030b6b8, u32(u32, u32, u32, u32)> call_0030b6b8;  // (from the original)
inline constexpr guest::Function<0x007d0fc8, u32(u32, u32, u32, u32)> call_007d0fc8;  // (from the original)

u32 f_005bd750(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0030b6b8(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    *gptr<u16>(r13) = u16(r0);
    r1 = r13;
    r0 = 4u;
    *gptr<u8>(r13 + 2u) = u8(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_007d0fc8(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    if (r5 == 0) {
        r0 = 2u;
    } else {
        r0 = 1u;
    }
    *gptr<u8>(r4 + 9u) = u8(r0);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005bd750
GUEST_EXPORT(0x005bd750, d_005bd750::f_005bd750);

// f_005bdaa0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bdaa0 {

inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> call_00303cdc;  // (from the original)
inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> call_005cdf48;  // (from the original)

u32 f_005bdaa0(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = r0;
    r2 = ~0u;
    r3 = ~0x80000000u;  // (from the original)
    r0 = call_005cdf48(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0x21u;  // (from the original)
    r0 = r4;
    *gptr<u8>(r4 + 8u) = u8(r5);
    r0 = call_00303cdc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0xffu;  // (from the original)
    r7 = 9u;
    *gptr<u8>(r4 + 9u) = u8(r6);
    r0 = r4 + 0xcu;  // (from the original)
    *gptr<u8>(r4 + 0xau) = u8(r7);  // (from the original)
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 4u;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 - 0x10u;  // (from the original)
    *gptr<u8>(r0 - 8u) = u8(r5);
    r0 = r4;
    r0 = call_00303cdc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r4 + 9u) = u8(r6);
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r4 + 0x10u;  // (from the original)
    *gptr<u8>(r4 + 0xau) = u8(r7);  // (from the original)
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r4 + 0xcu;  // (from the original)
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r0 = ~0u;
    r1 = 7u;
    *gptr<u8>(r4 + 0x14u) = u8(r0);  // (from the original)
    *gptr<u8>(r4 + 0x15u) = u8(r1);  // (from the original)
    *gptr<u8>(r4 + 0x16u) = u8(r0);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005bdaa0
GUEST_EXPORT(0x005bdaa0, d_005bdaa0::f_005bdaa0);

// f_005bdb6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bdb6c {

inline constexpr guest::Function<0x00116e4f, u32(u32, u32, u32, u32)> call_00116e4e;  // (from the original)
inline constexpr guest::Function<0x00116ea5, u32(u32, u32, u32, u32)> call_00116ea4;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fe419, u32(u32, u32, u32, u32)> call_002fe418;  // (from the original)
inline constexpr guest::Function<0x003009a9, u32(u32, u32, u32, u32)> call_003009a8;  // (from the original)
inline constexpr guest::Function<0x003015ec, u32(u32, u32, u32, u32)> call_003015ec;  // (from the original)

u32 f_005bdb6c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4;
    r0 = r0 + 0x292a4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003009a8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 == 0) {
        r0 = 0x21u;  // (from the original)
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r2 = 1u;
    r1 = 7u;
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00116ea4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0u;
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00116e4e(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = u32(s32(s8(*gptr<u8>(0x2516u + r4))));  // (from the original)
    if (r0 + 1u == 0) {
        r1 = 2u;
        r0 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00116e4e(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb378(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(~0u);
    *gptr<u32>(r13 + 4) = u32(0u);
    *gptr<u32>(r13 + 8) = u32(1u);
    r1 = *gptr<u32>(r0);
    r2 = *gptr<u32>(r0 + 4);
    r3 = *gptr<u32>(r0 + 8);
    r0 = 0x23u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003015ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r1 = 5u;
        r0 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00116e4e(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = 6u;
        r0 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00116e4e(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fe418(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 + 6u & 0xffu;  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005bdb6c
GUEST_EXPORT(0x005bdb6c, d_005bdb6c::f_005bdb6c);

// f_005bdc34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bdc34 {

inline constexpr guest::Function<0x00116e4f, u32(u32, u32, u32, u32)> call_00116e4e;  // (from the original)
inline constexpr guest::Function<0x00116ea5, u32(u32, u32, u32, u32)> call_00116ea4;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x002fe419, u32(u32, u32, u32, u32)> call_002fe418;  // (from the original)
inline constexpr guest::Function<0x00309865, u32(u32, u32, u32, u32)> call_00309864;  // (from the original)
inline constexpr guest::Function<0x0051ce84, u32(u32, u32, u32, u32)> call_0051ce84;  // (from the original)

u32 f_005bdc34(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r3 = 0x88f364u;  // (from the original)
    r13 = r13 - 0x20u;  // (from the original)
    r2 = 0u;
    do {
L_5bdc44:;
        r12 = r0;
        if (!(s32(r0) >= s32(*gptr<u32>(r3 + (r2 << 2))))) {
            if ((r2 & 0xffu) == 5u) {  // (from the original)
                r2 = 0u;
            } else {
                goto L_5bdd60;
            }
            goto L_5bdc78;
        }
        r2 = r2 + 1u;
        guest::preempt();
    } while (s32(r2) < s32(0xcu));  // (from the original)
    goto L_5bdd60;
L_5bdc78:;
    if (s32(r0) >= s32(*gptr<u32>(r3 + (r2 << 2)))) {
        goto L_5bdcfc;
    }
    if ((r2 & 0xffu) >= 0xcu) {  // (from the original)
        goto L_5bdd60;
    }
    r4 = r1 + 0x1000u;  // (from the original)
    if (r12 == 8u) {
        goto L_5bdd0c;
    }
    r2 = 1u;
    r1 = 0xau;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00116ea4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb310(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 4u;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_00309864(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r5 = *gptr<u32>(r4 + 0x30u);  // (from the original)
    r6 = r0;
    r4 = 0u;
L_5bdcdc:;
    r2 = r5;
    r1 = r6;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0051ce84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_5bdd38;
    }
    goto L_5bdd2c;
L_5bdcfc:;
    r2 = r2 + 1u;
    if (s32(r2) < s32(0xcu)) {  // (from the original)
        guest::preempt();
        goto L_5bdc78;
    }
    goto L_5bdd60;
L_5bdd0c:;
    r0 = *gptr<u32>(r4 + 0x28u);  // (from the original)
    if (r0 == 0) {
        goto L_5bdd60;
    }
    r0 = u32(s32(s8(*gptr<u8>(r0 + 0x2516u))));  // (from the original)
    if (r0 < 0xau) {  // (from the original)
        goto L_5bdd58;
    }
    goto L_5bdd60;
L_5bdd2c:;
    r1 = r4;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00116e4e(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_5bdd38:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_5bdcdc;
    }
    if (*gptr<u32>(r13 + 8u) == 0) {
        goto L_5bdd60;
    }
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe418(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_5bdd58:;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5bdd60:;
    r0 = ~0u;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005bdc34
GUEST_EXPORT(0x005bdc34, d_005bdc34::f_005bdc34);

// f_005be19c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005be19c {

inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> call_00303cdc;  // (from the original)
inline constexpr guest::Function<0x005be0fc, u32(u32, u32, u32, u32)> call_005be0fc;  // (from the original)
inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> call_005cdf48;  // (from the original)

u32 f_005be19c(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r2 = ~0u;
    r3 = ~0x80000000u;  // (from the original)
    r0 = call_005cdf48(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r4 + 8u) = u8(0x21u);  // (from the original)
    r0 = r4;
    r0 = call_00303cdc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0xffu;  // (from the original)
    *gptr<u8>(r4 + 9u) = u8(r1);
    *gptr<u8>(r4 + 0xau) = u8(9u);  // (from the original)
    r0 = r4 + 0x6cu;  // (from the original)
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 4u;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 - 0x70u;  // (from the original)
    r0 = r4;
    r0 = call_005be0fc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005be19c
GUEST_EXPORT(0x005be19c, d_005be19c::f_005be19c);

// f_005bf518: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bf518 {

struct __attribute__((packed)) Object_005bf518_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_005bf518_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005bf518_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005bf518_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_005bf518_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_005bf518_1, word_0, 0x0);  // (from the original)


void f_005bf518(gptr<Object_005bf518_0> arg0, gptr<Object_005bf518_1> arg1) {
    u32 ea = 0;
    u32 res = 0;
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    r3 = 0u;
    arg0->word_0 = u32(r3);
    arg0->word_4 = u32(r3);
    arg0->word_8 = u32(r3);
    if (r1 != 0) {
        res = 0x20000011u & ~arg1->word_0;  // (from the original)
        if (res != 0) {
            r1 = 0u;
        }
    }
    r2 = r1 + 0x38u;  // (from the original)
    ea = r1 + 0x38u;  // (from the original)
    r12 = *gptr<u32>(ea);
    if (r12 == 0) {
        r2 = r3;
    } else {
        r2 = r2 + r12;
    }
    ea = r2 + 0xcu;  // (from the original)
    r2 = ea;
    r12 = *gptr<u32>(ea);
    if (r12 != 0) {
        r3 = r12 + r2;
    }
    arg0->word_0 = u32(r3);
    arg0->word_4 = u32(*gptr<u32>(r1 + 0x1cu));  // (from the original)
    r1 = *gptr<u32>(r1 + 0x18u);  // (from the original)
    arg0->word_8 = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005bf518
GUEST_EXPORT(0x005bf518, d_005bf518::f_005bf518);

// f_005bf744: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bf744 {

inline constexpr guest::Function<0x00569480, u32(u32, u32, u32, u32)> call_00569480;  // (from the original)

u32 f_005bf744() {
    return call_00569480(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005bf744
GUEST_EXPORT(0x005bf744, d_005bf744::f_005bf744);

// f_005bf748: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bf748 {

inline constexpr guest::Function<0x0013f134, u32(u32, u32, u32, u32)> call_0013f134;  // (from the original)

u32 f_005bf748(u32 r0) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_0013f134(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_005bf748
GUEST_EXPORT(0x005bf748, d_005bf748::f_005bf748);

// f_005bf7cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bf7cc {

struct __attribute__((packed)) Object_005bf7cc_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u16 half_c;
    u8 unknown_e[0x2];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_005bf7cc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005bf7cc_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005bf7cc_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005bf7cc_0, half_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005bf7cc_0, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Object_005bf7cc_2 {
    u16 half_0;
};
GUEST_OFFSET(Object_005bf7cc_2, half_0, 0x0);  // (from the original)


void f_005bf7cc(gptr<Object_005bf7cc_0> arg0, gptr<Float3> arg1, gptr<Object_005bf7cc_2> arg2) {
    u32 r1 = arg1.addr();
    u32 r12 = 0;
    r12 = 0u;
    arg0->half_c = u16(r12);
    arg0->word_0 = u32(std::bit_cast<u32>(arg1->v[0]));
    arg0->word_4 = u32(std::bit_cast<u32>(arg1->v[1]));
    arg0->word_8 = u32(std::bit_cast<u32>(arg1->v[2]));
    r1 = u32(arg2->half_0);
    arg0->half_c = u16(r1);
    arg0->word_10 = u32(r12);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005bf7cc
GUEST_EXPORT(0x005bf7cc, d_005bf7cc::f_005bf7cc);

// f_005bf82c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bf82c {

struct __attribute__((packed)) Object_005bf82c_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u16 half_c;
    u8 unknown_e[0x2];  // (not used here)
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u16 half_20;
    u8 unknown_22[0x2];  // (not used here)
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u32 word_30;
    u16 half_34;
    u8 unknown_36[0x2];  // (not used here)
    u32 word_38;
    u32 word_3c;
    u32 word_40;
    u32 word_44;
    u16 half_48;
    u8 unknown_4a[0x2];  // (not used here)
    u32 word_4c;
    u8 byte_50;
    u8 unknown_51[0x3];  // (not used here)
    u32 word_54;
    u32 word_58;
};
GUEST_OFFSET(Object_005bf82c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005bf82c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005bf82c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005bf82c_0, half_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005bf82c_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_005bf82c_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_005bf82c_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_005bf82c_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_005bf82c_0, half_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_005bf82c_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_005bf82c_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_005bf82c_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_005bf82c_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_005bf82c_0, half_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_005bf82c_0, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_005bf82c_0, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_005bf82c_0, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_005bf82c_0, word_44, 0x44);  // (from the original)
GUEST_OFFSET(Object_005bf82c_0, half_48, 0x48);  // (from the original)
GUEST_OFFSET(Object_005bf82c_0, word_4c, 0x4c);  // (from the original)
GUEST_OFFSET(Object_005bf82c_0, byte_50, 0x50);  // (from the original)
GUEST_OFFSET(Object_005bf82c_0, word_54, 0x54);  // (from the original)
GUEST_OFFSET(Object_005bf82c_0, word_58, 0x58);  // (from the original)


u32 f_005bf82c(gptr<Object_005bf82c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0xc;  // (from the original)
    ea = r13 + 0xcu;  // (from the original)
    r6 = *gptr<u32>(ea);
    ea = r13 + 0x14u;  // (from the original)
    r4 = *gptr<u32>(ea);
    ea = r13 + 0x18u;  // (from the original)
    r12 = *gptr<u32>(ea);
    ea = r13 + 0x10u;  // (from the original)
    r5 = *gptr<u32>(ea);
    arg0->byte_50 = u8(r1);
    arg0->word_54 = u32(r2);
    arg0->word_58 = u32(r3);
    ea = r6;
    arg0->word_0 = u32(*gptr<u32>(ea));
    ea = r6 + 4u;
    arg0->word_4 = u32(*gptr<u32>(ea));
    ea = r6 + 8u;
    arg0->word_8 = u32(*gptr<u32>(ea));
    ea = r6 + 0xcu;  // (from the original)
    arg0->half_c = u16(u32(*gptr<u16>(ea)));
    ea = r6 + 0x10u;  // (from the original)
    arg0->word_10 = u32(*gptr<u32>(ea));
    ea = r5;
    arg0->word_14 = u32(*gptr<u32>(ea));
    ea = r5 + 4u;
    arg0->word_18 = u32(*gptr<u32>(ea));
    ea = r5 + 8u;
    arg0->word_1c = u32(*gptr<u32>(ea));
    ea = r5 + 0xcu;  // (from the original)
    arg0->half_20 = u16(u32(*gptr<u16>(ea)));
    ea = r5 + 0x10u;  // (from the original)
    arg0->word_24 = u32(*gptr<u32>(ea));
    ea = r4;
    arg0->word_28 = u32(*gptr<u32>(ea));
    ea = r4 + 4u;
    arg0->word_2c = u32(*gptr<u32>(ea));
    ea = r4 + 8u;
    arg0->word_30 = u32(*gptr<u32>(ea));
    ea = r4 + 0xcu;  // (from the original)
    arg0->half_34 = u16(u32(*gptr<u16>(ea)));
    ea = r4 + 0x10u;  // (from the original)
    arg0->word_38 = u32(*gptr<u32>(ea));
    ea = r12;
    r1 = *gptr<u32>(ea);
    ea = r0 + 0x3cu;  // (from the original)
    arg0->word_3c = u32(r1);
    r0 = ea;
    arg0->word_40 = u32(*gptr<u32>(r12 + 4u));
    arg0->word_44 = u32(*gptr<u32>(r12 + 8u));
    arg0->half_48 = u16(u32(*gptr<u16>(r12 + 0xcu)));  // (from the original)
    r1 = *gptr<u32>(r12 + 0x10u);  // (from the original)
    arg0->word_4c = u32(r1);
    r13 = r13 + 0xc;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005bf82c
GUEST_EXPORT(0x005bf82c, d_005bf82c::f_005bf82c);

// f_005bf954: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bf954 {

inline constexpr guest::Function<0x0027ab7c, u32(u32, u32, u32, u32)> call_0027ab7c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00322e58, u32(u32, u32, u32, u32)> call_00322e58;  // (from the original)
inline constexpr guest::Function<0x0056d00c, u32(u32, u32, u32, u32)> call_0056d00c;  // (from the original)

u32 f_005bf954(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r5 = r0;
    r2 = r0 + 0xeu;  // (from the original)
    r0 = r0 + 2u;
    r7 = 0u;
    if (r0 >= r2) {
        goto L_5bf988;
    }
    do {
L_5bf970:;
        r1 = r0 + 1u;
        *gptr<u8>(r0) = u8(r7);
        r0 = r0 + 6u;
        *gptr<u16>(r13) = u16(r7);
        *gptr<u16>(r1) = u16(r7);
        guest::preempt();
    } while (r0 < r2);
L_5bf988:;
    r0 = 0u;
    *gptr<u8>(r5) = u8(r0);
    *gptr<u8>(r5 + 0xeu) = u8(r0);  // (from the original)
    r3 = 0xae5658u;  // (from the original)
    r12 = r5 + 0x1ccu;  // (from the original)
    *gptr<u32>(r5 + 0xfu) = u32(*gptr<u32>(0x95bfdcu));  // (from the original)
    *gptr<u8>(r5 + 0x13u) = u8(r7);  // (from the original)
    *gptr<u8>(r5 + 0x14u) = u8(r7);  // (from the original)
    *gptr<u16>(r5 + 0x16u) = u16(u32(*gptr<u16>(r5 + 0x16u)) & ~0x1fu);  // (from the original)
    *gptr<u16>(r5 + 0x18u) = u16(0x6978u);  // (from the original)
    r0 = 0u;
    *gptr<u8>(r5 + 0x1au) = u8(r7);  // (from the original)
    do {
L_5bf9cc:;
        r1 = r0 + (r0 << 2);
        r0 = r0 + 1u;
        r2 = r12 + (r1 << 2);
        *gptr<u32>(r2) = u32(*gptr<u32>(r3));
        *gptr<u32>(r2 + 4u) = u32(*gptr<u32>(r3 + 4u));
        *gptr<u32>(r2 + 8u) = u32(*gptr<u32>(r3 + 8u));
        *gptr<u16>(r2 + 0xcu) = u16(r7);  // (from the original)
        *gptr<u32>(r2 + 0x10u) = u32(r7);  // (from the original)
        guest::preempt();
    } while (r0 < 4u);
    r1 = 0xa5u;  // (from the original)
    r0 = 6u;
    *gptr<u8>(r12 + 0x50u) = u8(r1);  // (from the original)
    *gptr<u32>(r12 + 0x58u) = u32(r0);  // (from the original)
    *gptr<u32>(r12 + 0x54u) = u32(r0);  // (from the original)
    r0 = r5 + 0x228u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056d00c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r5 + 0x4cu;  // (from the original)
    r6 = r5 + 0xecu;  // (from the original)
    if (r4 >= r6) {
        goto L_5bfa40;
    }
    do {
L_5bfa2c:;
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_00322e58(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 0x50u;  // (from the original)
        guest::preempt();
    } while (r4 < r6);
L_5bfa40:;
    r0 = r5 + 0xecu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00322e58(r0, r1, r2, r3);
    r0 = 0u;
    r8 = 1u;
L_5bfa50:;
    r2 = r5 + 0x1c8u;  // (from the original)
    if (r0 < 2u) {
        r1 = r2 + (r0 >> 3);
        *gptr<u8>(r1) = u8(u32(*gptr<u8>(r1)) & ~lsl_r(r8, r0 & 7u));
    }
    r1 = 0u;
    r3 = lsl_r(r8, r0 & 7u);
    r12 = r0 >> 3;
    do {
L_5bfa80:;
        r2 = r5 + r1 + 0x1c4u;  // (from the original)
        if (!(r0 >= 2u)) {
            r2 = r2 + r12;
            *gptr<u8>(r2) = u8(u32(*gptr<u8>(r2)) & ~r3);
        }
        r1 = r1 + 1u;
        guest::preempt();
    } while (r1 < 4u);
    r0 = r0 + 1u;
    if (r0 < 2u) {
        guest::preempt();
        goto L_5bfa50;
    }
    r4 = r5 + 0x13cu;  // (from the original)
    r6 = r5 + 0x1c4u;  // (from the original)
    if (!u32(r6 >= r4) || u32(r6 == r4)) {
        goto L_5bfadc;
    }
    do {
L_5bfac8:;
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_0027ab7c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 0x22u;  // (from the original)
        guest::preempt();
    } while (r4 < r6);
L_5bfadc:;
    r0 = 0u;
    r1 = r5 + 0x1c9u;  // (from the original)
    do {
L_5bfae8:;
        r2 = r0 & 0xffu;  // (from the original)
        if (!(r2 >= 4u)) {
            r12 = r2 & 7u;
            r2 = r1 + (r2 >> 3);
            r3 = u32(*gptr<u8>(r2)) & ~lsl_r(r8, r12 & 0xff);  // (from the original)
            *gptr<u8>(r2) = u8(r3);
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (r0 < 4u);
    r6 = 0u;
L_5bfb18:;
    r4 = 0u;
    do {
L_5bfb1c:;
        r1 = 0x95bfdcu;  // (from the original)
        r0 = r5 + (r4 << 4) + (r6 << 2) + 0x1cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 2u);
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r5 + (r6 << 2) + 0x3cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r6 + 1u;
    if (r6 < 4u) {
        guest::preempt();
        goto L_5bfb18;
    }
    *gptr<u32>(r5 + 0x234u) = u32(r7);  // (from the original)
    *gptr<u8>(r5 + 0x238u) = u8(r7);  // (from the original)
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005bf954
GUEST_EXPORT(0x005bf954, d_005bf954::f_005bf954);

// f_005bfb94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bfb94 {

inline constexpr guest::Function<0x004e10c8, u32(u32, u32, u32, u32)> call_004e10c8;  // (from the original)
inline constexpr guest::Function<0x005c9090, u32(u32, u32, u32, u32)> call_005c9090;  // (from the original)

u32 f_005bfb94() {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    r0 = 0xaadad4u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r4 = 0u;
    *gptr<u16>(r0) = u16(r4);
    r0 = r0 + 4u;
    r0 = call_005c9090(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = call_004e10c8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u16>(r0) = u16(r4);
    r0 = 0xaad790u;  // (from the original)
    *gptr<u32>(r0 + 0x208u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x20cu) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x210u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x204u) = u32(r4);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_005bfb94
GUEST_EXPORT(0x005bfb94, d_005bfb94::f_005bfb94);

// f_005bfc8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bfc8c {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0070ab24, u32(u32, u32, u32, u32)> call_0070ab24;  // (from the original)

u32 f_005bfc8c() {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 zf = 0;
    r1 = 0u;
    r0 = 4u;
    guest::cpu()->r[13] -= 8u;
    r0 = call_005c33d0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = u32(*gptr<u16>(0x224u + r0));  // (from the original)
    zf = r1 == 0x29u;  // (from the original)
    if (!zf) {
        zf = r1 == 0x2au;  // (from the original)
    }
    if (!zf) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0u;
    r0 = r0 + 0x1b4u;  // (from the original)
    r0 = call_0070ab24(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005bfc8c
GUEST_EXPORT(0x005bfc8c, d_005bfc8c::f_005bfc8c);

// f_005bff24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bff24 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x006503b0, u32(u32, u32, u32, u32)> call_006503b0;  // (from the original)

u32 f_005bff24(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r6 = r2;
    r0 = 4u;
    r1 = 0u;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_5bff74;
    }
    res = u32(*gptr<u8>(r0 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        r0 = 0u;
        goto L_5bff74;
    }
    r3 = r6;
    r2 = r5;
    r1 = r4;
    r0 = call_006503b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
    }
L_5bff74:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005bff24
GUEST_EXPORT(0x005bff24, d_005bff24::f_005bff24);

// f_005bff78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bff78 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x00678278, u32(u32, u32, u32, u32)> call_00678278;  // (from the original)

u32 f_005bff78(u32 r0, u32 r1_unused, u32 r2, u32 r3, float S0) {
    u32 res = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x18u;  // (from the original)
    r0 = 4u;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    if (r0 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    res = u32(*gptr<u8>(r0 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        r0 = 0u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4) = u32(~0u);
    *gptr<u32>(r13 + 8) = u32(0x100056du);  // (from the original)
    r3 = 0u;
    S0 = std::bit_cast<float>(*gptr<u32>(0x5bffecu));  // (from the original)
    r2 = r3;
    r1 = u32(*gptr<u16>(0x881b98u + ((r4 & 3u) << 1)));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00678278(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_005bff78
GUEST_EXPORT(0x005bff78, d_005bff78::f_005bff78);
