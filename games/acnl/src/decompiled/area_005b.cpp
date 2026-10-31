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
    u32 r2_1 = 0;
    u32 r2_2 = 0;
    u32 r1_1 = 0;
    r2_1 = arg0->word_28;
    r2_2 = r2_1 & ~0x1e00u | 0x1e00u & ((r2_1 & 0x1e00u) >> 9 & ~lsl_r(1u, r1 & 0xff)) << 9;  // (from the original)
    r1_1 = r0 + (r1 << 2);
    arg0->word_28 = u32(r2_2);
    *gptr<u32>(r1_1 + 0x30u) = u32(0u);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return 0u;
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

inline guest::global<u32, 0x00981694> global_00981694;  // (from the original)
inline constexpr guest::Function<0x00100ef9, u32(u32, u32, u32, u32)> call_00100ef8;  // (from the original)
inline constexpr guest::Function<0x005b01c0, u32(u32, u32, u32, u32)> call_005b01c0;  // (from the original)

u32 f_005b0164(u32 r0, gptr<Object_005b0164_1> arg1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r3_2 = 0;
    u32 r2_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r3_1 = u32(arg1->half_2) + 1u;
    r2_1 = *global_00981694;
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_00100ef8(r0_1, 0x5b01a8u, r2_1, r3_1);  // (from the original)
    r3_2 = guest::cpu()->r[3];
    r2_2 = r13;
    r0_2 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0_3 = call_005b01c0(r0_2, 8u, r2_2, r3_2);
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_005b0164
GUEST_EXPORT(0x005b0164, d_005b0164::f_005b0164);

// f_005b01c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b01c0 {

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> call_002fa9d0;  // (from the original)

u32 f_005b01c0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r2_1 = 0;
    u32 r2_2 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 vf_1 = 0;
    u32 res_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r6 = r1;
    r4 = r2;
    call_002fa9d0(r2, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r6 == 0 || r6 >> 0x1f != (r6 & (r6 ^ r6)) >> 0x1f) {  // (from the original)
        r0 = 0u;
        goto L_5b0220;
    }
    r0 = r6 & 1u;
    r1 = 0u;
    if (r0 == 0 || r0 >> 0x1f != (r0 & (r0 ^ r0)) >> 0x1f) {  // (from the original)
        goto L_5b0220;
    }
    do {
L_5b01f4:;
        r2_1 = u32(s32(s8(*gptr<u8>(r4 + r1))));
        if (r2_1 - 0x61u <= 0x19u) {  // (from the original)
            r2_1 = r2_1 - 0x20u;  // (from the original)
        }
        r2_2 = sxtb(r2_1);
        *gptr<u8>(r5 + r1) = u8(r2_2);
        if (r2_2 == 0) {
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r1 = r1 + 1u;
        guest::preempt();
    } while (s32(r0) > s32(r1));
L_5b0220:;
    if (s32(r0) >= s32(r6)) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    do {
L_5b0228:;
        r1_1 = u32(s32(s8(*gptr<u8>(r4 + r0))));
        if (r1_1 - 0x61u <= 0x19u) {  // (from the original)
            r1_1 = r1_1 - 0x20u;  // (from the original)
        }
        r1 = sxtb(r1_1);
        *gptr<u8>(r5 + r0) = u8(r1);
        if (r1 == 0) {
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r1_2 = u32(s32(s8(*gptr<u8>(r4 + r0 + 1u))));
        if (r1_2 - 0x61u <= 0x19u) {  // (from the original)
            r1_2 = r1_2 - 0x20u;  // (from the original)
        }
        r2_3 = r5 + r0;
        r1 = sxtb(r1_2);
        nf_1 = r1 >> 0x1f;  // (from the original)
        zf_1 = r1 == 0;
        vf_1 = (r1 & (r1 ^ r1)) >> 0x1f;  // (from the original)
        if (!zf_1) {
            r0 = r0 + 2u;
            res_1 = r6 - r0;
            nf_1 = res_1 >> 0x1f;  // (from the original)
            zf_1 = res_1 == 0;
            vf_1 = ((r6 ^ r0) & (r6 ^ res_1)) >> 0x1f;  // (from the original)
        }
        *gptr<u8>(r2_3 + 1u) = u8(r1);
        guest::preempt();
    } while (!zf_1 && nf_1 == vf_1);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005b01c0
GUEST_EXPORT(0x005b01c0, d_005b01c0::f_005b01c0);

// f_005b027c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b027c {

inline constexpr guest::Function<0x005b028c, u32(u32, u32, u32, u32)> call_005b028c;  // (from the original)

u32 f_005b027c(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    r0_1 = r0 + 4u;
    return call_005b028c(r0_1, 8u, r1, guest::cpu()->r[3]);
}

}  // namespace d_005b027c
GUEST_EXPORT(0x005b027c, d_005b027c::f_005b027c);

// f_005b034c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b034c {

inline constexpr guest::Function<0x0010184d, u32(u32, u32, u32, u32)> call_0010184c;  // (from the original)

u32 f_005b034c(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r5_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r6 = r0;
    r4 = 0u;
    r7 = 0x981698u;  // (from the original)
L_5b035c:;
    r5_1 = r4 & 0xffu;  // (from the original)
    r1_1 = *gptr<u32>(r7 + (r5_1 << 2));
    if (u32(*gptr<u16>(r1_1)) == 0x2eu) {  // (from the original)
        r1_1 = r1_1 + 2u;
    }
    r0_1 = call_0010184c(r6, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        r4 = r4 + 1u;
        if (s32(r4) < s32(4u)) {
            guest::preempt();
            goto L_5b035c;
        }
        guest::cpu()->r[13] += 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r5_1;
}

}  // namespace d_005b034c
GUEST_EXPORT(0x005b034c, d_005b034c::f_005b034c);

// f_005b03fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b03fc {

inline constexpr guest::Function<0x00100ef9, u32(u32, u32, u32, u32)> call_00100ef8;  // (from the original)

u32 f_005b03fc(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_00100ef8(r0_1, 0x5b0430u, r1, r3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    *gptr<u8>(r0 + 0xcu) = u8(u32(*gptr<u8>(r13)));  // (from the original)
    *gptr<u8>(r0 + 0xdu) = u8(u32(*gptr<u8>(r13 + 1u)));  // (from the original)
    r0_2 = u32(*gptr<u8>(r13 + 2u));
    *gptr<u8>(r0 + 0xeu) = u8(r0_2);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
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
    u32 r1_1 = 0;
    r1_1 = r1 & 0x1fu | arg0->word_2c & ~0x1fu;  // (from the original)
    arg0->word_2c = u32(r1_1);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_005b0438
GUEST_EXPORT(0x005b0438, d_005b0438::f_005b0438);

// f_005b0468: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b0468 {

inline constexpr guest::Function<0x005b028c, u32(u32, u32, u32, u32)> call_005b028c;  // (from the original)

u32 f_005b0468(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    r0_1 = r0 + 0xcu;  // (from the original)
    return call_005b028c(r0_1, 8u, r1, guest::cpu()->r[3]);
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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r3_2 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    if (r2 == 0) {
        r0_1 = 0x981684u;  // (from the original)
    } else {
        r0_1 = 0x98168cu;  // (from the original)
    }
    r13 = r13 - 0x18u;  // (from the original)
    r3_1 = *gptr<u32>(r0_1);
    r2_1 = u32(arg1->half_0) + 0x64u;  // (from the original)
    r0_2 = r13;
    guest::cpu()->r[13] = r13;
    call_00100ef8(r0_2, 0x5b04c8u, r2_1, r3_1);  // (from the original)
    r3_2 = guest::cpu()->r[3];
    r2_2 = r13;
    r0_3 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_005b01c0(r0_3, 8u, r2_2, r3_2);
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_4;
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
    u32 r1_1 = 0;
    r1_1 = arg0->word_28 & ~0x100u & ~0xfeu | r1 << 1;  // (from the original)
    arg0->word_28 = u32(r1_1);
    guest::cpu()->r[1] = r1_1;
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
    u32 r1_1 = 0;
    r1_1 = 0x1e00000u & r1 << 0x15 | arg0->word_2c & ~0x1e00000u;  // (from the original)
    arg0->word_2c = u32(r1_1);
    guest::cpu()->r[1] = r1_1;
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
    u32 r1_1 = 0;
    r1_1 = arg0->word_2c & ~0x1fffe0u | r1 << 5;  // (from the original)
    arg0->word_2c = u32(r1_1);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_005b0504
GUEST_EXPORT(0x005b0504, d_005b0504::f_005b0504);

// f_005b0588: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b0588 {

inline constexpr guest::Function<0x005b028c, u32(u32, u32, u32, u32)> call_005b028c;  // (from the original)

u32 f_005b0588(u32 r0_unused, u32 r1) {
    u32 r2_1 = 0;
    r2_1 = *gptr<u32>(0x981698u + (r1 << 2));  // (from the original)
    if (u32(*gptr<u16>(r2_1)) == 0x2eu) {  // (from the original)
        r2_1 = r2_1 + 2u;
    }
    return call_005b028c(guest::cpu()->r[0], 4u, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_005b0588
GUEST_EXPORT(0x005b0588, d_005b0588::f_005b0588);

// f_005b05a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b05a8 {

inline constexpr guest::Function<0x005b01c0, u32(u32, u32, u32, u32)> call_005b01c0;  // (from the original)

u32 f_005b05a8(u32 r0_unused, u32 r1) {
    return call_005b01c0(guest::cpu()->r[0], 4u, r1, guest::cpu()->r[3]);
}

}  // namespace d_005b05a8
GUEST_EXPORT(0x005b05a8, d_005b05a8::f_005b05a8);

// f_005b05b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b05b4 {

inline constexpr guest::Function<0x005b028c, u32(u32, u32, u32, u32)> call_005b028c;  // (from the original)

u32 f_005b05b4(u32 r0_unused, u32 r1) {
    return call_005b028c(guest::cpu()->r[0], 4u, r1, guest::cpu()->r[3]);
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
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    r3_1 = arg0->word_28;
    arg0->word_28 = u32(r3_1 & ~0x1e00u | 0x1e00u & (((r3_1 & 0x1e00u) >> 9 | lsl_r(1u, r1 & 0xff)) & 0xffu) << 9);  // (from the original)
    r0_1 = r0 + (r1 << 2);
    *gptr<u32>(r0_1 + 0x30u) = u32(r2);  // (from the original)
    return r0_1;
}

}  // namespace d_005b05c0
GUEST_EXPORT(0x005b05c0, d_005b05c0::f_005b05c0);

// f_005b0628: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b0628 {


u32 f_005b0628(u32 r0) {
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 vf_1 = 0;
    res_1 = r0 - 0x270eu;  // (from the original)
    nf_1 = res_1 >> 0x1f;  // (from the original)
    zf_1 = res_1 == 0;
    vf_1 = ((r0 ^ 0x270eu) & (r0 ^ res_1)) >> 0x1f;  // (from the original)
    if (zf_1 || nf_1 != vf_1) {
        r0 = 1u;
    }
    if (!zf_1 && nf_1 == vf_1) {
        r0 = 0u;
    }
    guest::cpu()->r[1] = 0x270eu;  // (from the original)
    return r0;
}

}  // namespace d_005b0628
GUEST_EXPORT(0x005b0628, d_005b0628::f_005b0628);

// f_005b0654: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b0654 {


u32 f_005b0654(u32 r0) {
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 vf_1 = 0;
    res_1 = r0 - 0x384u;  // (from the original)
    nf_1 = res_1 >> 0x1f;  // (from the original)
    vf_1 = ((r0 ^ 0x384u) & (r0 ^ res_1)) >> 0x1f;  // (from the original)
    if (nf_1 != vf_1) {
        r0 = 1u;
    }
    if (nf_1 == vf_1) {
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
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r2_2 = 0;
    r1_1 = uxth(u32(arg0->half_2) + 1u);
    arg0->half_2 = u16(r1_1);
    if (r1_1 <= 0x63u) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return;
    }
    r2_1 = u32(arg0->half_0);
    arg0->half_2 = u16(0u);
    r2_2 = uxth(r2_1 + 1u);
    arg0->half_0 = u16(r2_2);
    if (r2_2 >= 0x384u) {  // (from the original)
        arg0->half_0 = u16(0u);
    }
    guest::cpu()->r[1] = 0u;
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
    u32 r2_1 = 0;
    u32 r2_2 = 0;
    r2_1 = u32(arg0->half_0);
    arg0->half_2 = u16(0u);
    r2_2 = uxth(r2_1 + 1u);
    arg0->half_0 = u16(r2_2);
    if (r2_2 >= 0x384u) {  // (from the original)
        arg0->half_0 = u16(0u);
    }
    guest::cpu()->r[1] = 0u;
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
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r12_1 = 0;
    ea_1 = r13;
    r12_1 = *gptr<u32>(ea_1);
    arg0->word_1c = u32(r1);
    arg0->word_20 = u32(r2);
    arg0->word_24 = u32(r3);
    arg0->byte_28 = u8(r12_1);
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
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r5_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r3_2 = 0;
    u32 zf_1 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r12_1 = 0;
    u32 ea_2 = 0;
    u32 r0_5 = 0;
    u32 ea_3 = 0;
    u32 r3_3 = 0;
    u32 ea_4 = 0;
    u32 r2_2 = 0;
    u32 r4_1 = 0;
    u32 r8_1 = 0;
    u32 r2_3 = 0;
    u32 r0_6 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r0_8 = 0;
    u32 r1_6 = 0;
    r13 = r13 - 0x80u;  // (from the original)
    ea_1 = r13 + 0x80u;  // (from the original)
    r5_1 = *gptr<u32>(ea_1);
    r1_1 = r13 + 0x10u;  // (from the original)
    r2_1 = arg0->word_1c;
    r3_1 = arg0->word_20;
    r0_1 = r0 + 8u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_0046f9f8(r0_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r3_2 = guest::cpu()->r[3];
    zf_1 = r0_2 == 0;
    if (!zf_1) {
        zf_1 = u32(*gptr<u8>(r13 + 0x32u)) == 0;  // (from the original)
    }
    if (zf_1) {
        goto L_5b0d44;
    }
    if (*gptr<u32>(r13 + 0x38u) < 2u) {  // (from the original)
        goto L_5b0d44;
    }
    r1_3 = r13 + 0x10u;  // (from the original)
    r0_3 = r13 + 0x4cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_0046f8e8(r0_3, r1_3, r1, r3_2);
    r1_2 = guest::cpu()->r[1];
    if (r0_4 == 0) {
        goto L_5b0d48;
    }
    r12_1 = r0 + 8u;
    ea_2 = r13 + 0x54u;  // (from the original)
    r0_5 = *gptr<u32>(ea_2);
    ea_3 = r13 + 0x50u;  // (from the original)
    r3_3 = *gptr<u32>(ea_3);
    ea_4 = r0 + 0x1cu;  // (from the original)
    r2_2 = *gptr<u32>(ea_4);
    r4_1 = *gptr<u32>(ea_4 + 4);
    r1_2 = r13;
    r8_1 = r0_5 + r3_3;
    if (r8_1 > r4_1) {
        goto L_5b0d44;
    }
    r2_3 = r2_2 + r0_5;
    guest::cpu()->r[13] = r13;
    r0_6 = call_0046fe08(r12_1, r1_2, r2_3, r3_3);
    r1_2 = guest::cpu()->r[1];
    r3_4 = guest::cpu()->r[3];
    if (r0_6 == 0) {
        goto L_5b0d44;
    }
    r1_2 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r0_7 = *gptr<u32>(r13 + 4u) + r1_2;
    *gptr<u32>(r5_1) = u32(r0_7);
    if (r0_7 <= r3) {
        goto L_5b0d50;
    }
L_5b0d44:;
    r0_4 = 0u;
L_5b0d48:;
    r13 = r13 + 0x80u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_4;
L_5b0d50:;
    r1_4 = *gptr<u32>(r13);
    r2_4 = *gptr<u32>(r13 + 4);
    guest::cpu()->r[13] = r13;
    call_002f8574(r2, r1_4, r2_4, r3_4);
    r3_5 = r13 + 8u;
    r1_5 = *gptr<u32>(r3_5);
    r2_5 = *gptr<u32>(r3_5 + 4);
    r0_8 = *gptr<u32>(r13 + 4u) + r2;
    guest::cpu()->r[13] = r13;
    call_002f8574(r0_8, r1_5, r2_5, r3_5);
    r1_6 = guest::cpu()->r[1];
    r13 = r13 + 0x80u;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    return 1u;
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
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 zf_1 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x50u;  // (from the original)
    r1_1 = r13 + 8u;
    r2_1 = arg0->word_1c;
    r3_1 = arg0->word_20;
    r0_1 = r0 + 8u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_0046f9f8(r0_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    zf_1 = r0_2 == 0;
    if (!zf_1) {
        zf_1 = u32(*gptr<u8>(r13 + 0x2au)) == 0;  // (from the original)
    }
    if (zf_1) {
        goto L_5b0de0;
    }
    if (*gptr<u32>(r13 + 0x30u) >= 2u) {  // (from the original)
    } else {
        goto L_5b0de0;
    }
    *gptr<u32>(r13) = u32(r3);
    guest::cpu()->r[13] = r13;
    r0_3 = call_005b0c94(r0, 0u, r1, r2);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_3;
L_5b0de0:;
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return 0u;
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
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r3_2 = 0;
    u32 zf_1 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 ea_1 = 0;
    u32 r0_5 = 0;
    u32 ea_2 = 0;
    u32 r3_3 = 0;
    u32 ea_3 = 0;
    u32 r2_2 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r12_1 = 0;
    u32 r2_3 = 0;
    u32 r0_6 = 0;
    u32 r3_4 = 0;
    u32 r1_5 = 0;
    u32 r0_7 = 0;
    u32 r12_2 = 0;
    u32 ea_4 = 0;
    u32 r0_8 = 0;
    u32 ea_5 = 0;
    u32 r3_5 = 0;
    u32 ea_6 = 0;
    u32 r2_4 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r2_5 = 0;
    u32 r0_9 = 0;
    r13 = r13 - 0x78u;  // (from the original)
    r1_1 = r13;
    r2_1 = arg0->word_1c;
    r3_1 = arg0->word_20;
    r0_1 = r0 + 8u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_0046f9f8(r0_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r3_2 = guest::cpu()->r[3];
    zf_1 = r0_2 == 0;
    if (!zf_1) {
        zf_1 = u32(*gptr<u8>(r13 + 0x22u)) == 0;  // (from the original)
    }
    if (zf_1) {
        goto L_5b0ef0;
    }
    if (*gptr<u32>(r13 + 0x28u) >= 2u) {  // (from the original)
    } else {
        goto L_5b0ef0;
    }
    r1_3 = r13;
    r0_3 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_0046f8e8(r0_3, r1_3, 0u, r3_2);
    r1_4 = guest::cpu()->r[1];
    if (r0_4 == 0) {
        r13 = r13 + 0x78u;  // (from the original)
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->r[13] = r13;
        return r0_4;
    }
    ea_1 = r13 + 0x58u;  // (from the original)
    r0_5 = *gptr<u32>(ea_1);
    ea_2 = r13 + 0x54u;  // (from the original)
    r3_3 = *gptr<u32>(ea_2);
    ea_3 = r0 + 0x1cu;  // (from the original)
    r2_2 = *gptr<u32>(ea_3);
    r6_1 = *gptr<u32>(ea_3 + 4);
    r1_2 = r13 + 0x30u;  // (from the original)
    r7_1 = r0_5 + r3_3;
    r12_1 = r0 + 8u;
    if (r7_1 > r6_1) {
        goto L_5b0ef0;
    }
    r2_3 = r2_2 + r0_5;
    guest::cpu()->r[13] = r13;
    r0_6 = call_0046fe08(r12_1, r1_2, r2_3, r3_3);
    r1_2 = guest::cpu()->r[1];
    r3_4 = guest::cpu()->r[3];
    if (r0_6 == 0) {
        goto L_5b0ef0;
    }
    r1_5 = r13;
    r0_7 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_0046f8e8(r0_7, r1_5, 1u, r3_4);
    r1_4 = guest::cpu()->r[1];
    if (r0_4 == 0) {
        r13 = r13 + 0x78u;  // (from the original)
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->r[13] = r13;
        return r0_4;
    }
    r12_2 = r0 + 8u;
    ea_4 = r13 + 0x58u;  // (from the original)
    r0_8 = *gptr<u32>(ea_4);
    ea_5 = r13 + 0x54u;  // (from the original)
    r3_5 = *gptr<u32>(ea_5);
    ea_6 = r0 + 0x1cu;  // (from the original)
    r2_4 = *gptr<u32>(ea_6);
    r4_1 = *gptr<u32>(ea_6 + 4);
    r1_2 = r13 + 0x40u;  // (from the original)
    r5_1 = r0_8 + r3_5;
    if (r5_1 > r4_1) {
        goto L_5b0ef0;
    }
    r2_5 = r2_4 + r0_8;
    guest::cpu()->r[13] = r13;
    r0_9 = call_0046fe08(r12_2, r1_2, r2_5, r3_5);
    r1_2 = guest::cpu()->r[1];
    if (r0_9 == 0) {
        goto L_5b0ef0;
    }
    r0_4 = *gptr<u32>(r13 + 0x34u) + *gptr<u32>(r13 + 0x3cu);  // (from the original)
    r1_4 = *gptr<u32>(r13 + 0x44u) + *gptr<u32>(r13 + 0x4cu);  // (from the original)
    if (r0_4 <= r1_4) {
        r0_4 = r1_4;
    }
    r13 = r13 + 0x78u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return r0_4;
L_5b0ef0:;
    r13 = r13 + 0x78u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return 0u;
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
    arg0->word_0 = u32(0x908034u);  // (from the original)
    arg0->word_4 = u32(arg1->word_4);
    arg0->word_0 = u32(0x907fe4u);  // (from the original)
    guest::cpu()->r[1] = 0x907fe4u;  // (from the original)
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
    arg0->word_0 = u32(0x908034u);  // (from the original)
    arg0->word_4 = u32(arg1->word_4);
    arg0->word_0 = u32(0x907ff4u);  // (from the original)
    guest::cpu()->r[1] = 0x907ff4u;  // (from the original)
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
    arg0->word_0 = u32(0x908034u);  // (from the original)
    arg0->word_4 = u32(arg1->word_4);
    arg0->word_0 = u32(0x908004u);  // (from the original)
    guest::cpu()->r[1] = 0x908004u;  // (from the original)
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
    if (r1 != 0) {
        if (r1 == 1u) {
            arg0->byte_5c = u8(1u);
            arg0->byte_5d = u8(1u);
            arg0->byte_5e = u8(1u);
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
    arg0->byte_5c = u8(1u);
    arg0->byte_5d = u8(0u);
    arg0->byte_5e = u8(1u);
    guest::cpu()->r[1] = 0u;
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

// f_005b2194: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b2194 {

struct __attribute__((packed)) Object_005b2194_0 {
    u8 unknown_0[0x584];  // (not used here)
    u32 word_584;
};
GUEST_OFFSET(Object_005b2194_0, word_584, 0x584);  // (from the original)

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x00726e94, u32(u32, u32, u32, u32)> call_00726e94;  // (from the original)
inline constexpr guest::Function<0x00726f34, u32(u32, u32, u32, u32)> call_00726f34;  // (from the original)

u32 f_005b2194(gptr<Object_005b2194_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r2_2 = 0;
    u32 r1_3 = 0;
    u32 r12_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0 + 0x584u;  // (from the original)
    if (arg0->word_584 == 0) {
        r1_1 = r4 + 4u;
        r0_1 = call_00726f34(r4, r1_1, r2, r3);
        r3 = guest::cpu()->r[3];
        *gptr<u32>(r4) = u32(u32(s32(r0_1 - r4 - 4u) >> 2));
    }
    r1_2 = r4 + 4u;
    r2_1 = *gptr<u32>(r4) << 2;
    call_002fbb30(r1, r1_2, r2_1, r3);
    r3_1 = guest::cpu()->r[3];
    r2_2 = r0 + 0xd14u;  // (from the original)
    r1_3 = r1 + (*gptr<u32>(r4) << 2);
    r0 = call_00726e94(r4, r1_3, r2_2, r3_1);
    r3 = 0x803f0232u;  // (from the original)
    r1 = 0u;
    r2 = r1;
    do {
L_5b2208:;
        r12_1 = r1 + (r1 << 1);
        if (!(*gptr<u32>(r4 + ((r1 << 3) - r1 << 4) + 0x160u) == 0)) {  // (from the original)
            *gptr<u32>(r0) = u32(r2);
            *gptr<u32>(r0 + 4) = u32(r12_1 + 0x203u | 0x80000000u | 0x2f0000u);  // (from the original)
            r0_2 = r0 + 8;
            *gptr<u32>(r0_2) = u32(r2);
            r0_3 = r0_2 + 4u;
            *gptr<u32>(r0_3) = u32(r2);
        } else {
            *gptr<u32>(r0) = u32(r2);
            *gptr<u32>(r0 + 4) = u32(r12_1 + 0x205u | 0xf0000u);  // (from the original)
            r0_3 = r0 + 4u;
        }
        r0 = r0_3 + 4u;
        if (!(u32(*gptr<u8>(r4 + (r1 + (r1 << 2) << 2) + 0x6a0u)) == 0)) {  // (from the original)
            *gptr<u32>(r0) = u32(r1);
            *gptr<u32>(r0 + 4) = u32(r3);
            r0_4 = r0 + 8;
            *gptr<u32>(r0_4) = u32(r2);
            r0_5 = r0_4 + 4u;
            *gptr<u32>(r0_5) = u32(r2);
            r0_6 = r0_5 + 4u;
            *gptr<u32>(r0_6) = u32(r2);
            r0_7 = r0_6 + 4u;
            *gptr<u32>(r0_7) = u32(r2);
            r0 = r0_7 + 4u;
        }
        r1 = r1 + 1u;
        guest::preempt();
    } while (s32(r1) < s32(0xcu));  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005b2194
GUEST_EXPORT(0x005b2194, d_005b2194::f_005b2194);

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
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r4_1 = 0;
    u32 r4_2 = 0;
    u32 r4_3 = 0;
    u32 r4_4 = 0;
    u32 r4_5 = 0;
    u32 r4_6 = 0;
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r0_5 = 0;
    u32 r3_3 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r3_4 = 0;
    u32 r1_5 = 0;
    u32 r1_6 = 0;
    u32 r1_7 = 0;
    u32 r0_6 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r0_7 = 0;
    u32 r2_5 = 0;
    u32 r3_6 = 0;
    u32 r0_8 = 0;
    u32 r3_7 = 0;
    u32 r2_6 = 0;
    u32 r4_7 = 0;
    u32 r4_8 = 0;
    u32 res_2 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_8 = 0;
    u32 ea_2 = 0;
    u32 r4_9 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    u32 r10_1 = 0;
    u32 r11_1 = 0;
    ea_1 = r13 - 0x28;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    *gptr<u32>(ea_1 + 4) = u32(r4);
    *gptr<u32>(ea_1 + 8) = u32(r5);
    *gptr<u32>(ea_1 + 0xc) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r8);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r9);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r10);  // (from the original)
    *gptr<u32>(ea_1 + 0x20) = u32(r11);  // (from the original)
    *gptr<u32>(ea_1 + 0x24) = u32(r14);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r5 = r0;
    r1_1 = r13;
    guest::cpu()->r[13] = r13;
    call_001277dc(0x208u, r1_1, r2, r3);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r4_1 = *gptr<u32>(r13);
    r7 = 0xf0201u;  // (from the original)
    r10 = 0u;
    r6 = r4_1;
    *gptr<u32>(r4_1) = u32(r10);
    r4_2 = r4_1 + 4u;
    r8 = r7 + 1u;
    *gptr<u32>(r4_2) = u32(r7);
    r4_3 = r4_2 + 4u;
    *gptr<u32>(r4_3) = u32(r10);
    r4_4 = r4_3 + 4u;
    *gptr<u32>(r4_4) = u32(r8);
    r4_5 = r4_4 + 4u;
    guest::cpu()->r[13] = r13;
    call_002f825c(r4_5, 0x98u, r2_1, r3_1);  // (from the original)
    r11 = 0x823f0203u;  // (from the original)
    r9 = 0x803f0232u;  // (from the original)
    r3 = r4_5 + 0x98u;  // (from the original)
    r1 = 0u;
    r2 = 0xcu;  // (from the original)
    r0 = r3;
    *gptr<u32>(r4_5 + 4u) = u32(r11);
    do {
L_5b2328:;
        r4_6 = r0 + 4u;
        res_1 = r2 - 1u;
        r2 = res_1;
        *gptr<u32>(r4_6) = u32(r9);
        *gptr<u32>(r4_6 + 4) = u32(r10);
        *gptr<u32>(r0 + 0xcu) = u32(r10);  // (from the original)
        *gptr<u32>(r0 + 0x10u) = u32(r10);  // (from the original)
        *gptr<u32>(r0) = u32(r1);
        r0_1 = r0 + 0x14u;  // (from the original)
        r1 = r1 + 1u;
        *gptr<u32>(r0_1) = u32(r10);
        r0 = r0_1 + 4u;
        guest::preempt();
    } while (res_1 != 0);
    r1_2 = r3 + 0x120u;  // (from the original)
    r0_2 = r5 + 0x4f0u;  // (from the original)
    *gptr<u32>(r13) = u32(r1_2);
    guest::cpu()->r[13] = r13;
    r0_3 = call_00727c84(r0_2, r1_2, r2, r3);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_4 = call_0034943c(r0_3, 1u, r2_2, r3_2);
    r2_3 = u32(*gptr<u8>(r5 + 0x80u));  // (from the original)
    r0_5 = r5 + 0x80u;  // (from the original)
    r3_3 = u32(*gptr<u8>(r0_5 + 1u));
    if (r2_3 != 0) {
        r2_3 = 5u;
    }
    if (r3_3 != 0) {
        r3_3 = 1u;
    }
    *gptr<u32>(r0_4) = u32(r2_3 | r3_3 << 0x10);  // (from the original)
    r1_3 = r0_4 + 4u;
    *gptr<u32>(r1_3) = u32(0x500e0u);  // (from the original)
    r1_4 = r1_3 + 4u;
    r3_4 = *gptr<u32>(r0_5 + 2u) & ~0xff000000u;  // (from the original)
    *gptr<u32>(r1_4) = u32(r3_4);
    r1_5 = r1_4 + 4u;
    *gptr<u32>(r1_5) = u32(0xf00e1u);  // (from the original)
    r1_6 = r1_5 + 4u;
    if (u32(*gptr<u8>(r0_5)) != 0) {
        r1_7 = r0_5 + 8u;
        guest::cpu()->r[13] = r13;
        call_002fbb30(r1_6, r1_7, 0x210u, r3_4);  // (from the original)
        r3_4 = guest::cpu()->r[3];
        r1_6 = r1_6 + 0x210u;  // (from the original)
    }
    guest::cpu()->r[13] = r13;
    r0_6 = call_001262dc(r5, r1_6, 1u, r3_4);
    r2_4 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_7 = call_0034abd0(r0_6, 1u, r2_4, r3_5);
    r2_5 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    *gptr<u32>(r13) = u32(r0_7);
    guest::cpu()->r[13] = r13;
    r0_8 = call_005b2194(r5, r0_7, r2_5, r3_6);
    r3_7 = guest::cpu()->r[3];
    *gptr<u32>(r13) = u32(r0_8);
    *gptr<u32>(r0_8 + 0xcu) = u32(r8);  // (from the original)
    r2_6 = r0_8 + 4u;
    *gptr<u32>(r0_8) = u32(r10);
    r4_7 = r0_8 + 0x10u;  // (from the original)
    *gptr<u32>(r2_6) = u32(r7);
    *gptr<u32>(r2_6 + 4) = u32(r10);
    guest::cpu()->r[13] = r13;
    call_002f825c(r4_7, 0x98u, r2_6, r3_7);  // (from the original)
    r3 = r4_7 + 0x98u;  // (from the original)
    r0 = r3;
    r1 = 0u;
    r2 = 0xcu;  // (from the original)
    *gptr<u32>(r4_7 + 4u) = u32(r11);
    do {
L_5b2430:;
        r4_8 = r0 + 4u;
        res_2 = r2 - 1u;
        r2 = res_2;
        *gptr<u32>(r4_8) = u32(r9);
        *gptr<u32>(r4_8 + 4) = u32(r10);
        *gptr<u32>(r0 + 0xcu) = u32(r10);  // (from the original)
        *gptr<u32>(r0 + 0x10u) = u32(r10);  // (from the original)
        *gptr<u32>(r0) = u32(r1);
        r0_9 = r0 + 0x14u;  // (from the original)
        r1 = r1 + 1u;
        *gptr<u32>(r0_9) = u32(r10);
        r0 = r0_9 + 4u;
        guest::preempt();
    } while (res_2 != 0);
    r0_10 = r3 + 0x120u;  // (from the original)
    *gptr<u32>(r13) = u32(r0_10);
    r0_11 = r0_10 - r6 & ~3u;
    guest::cpu()->r[13] = r13;
    r0_12 = call_001279b4(r0_11, r1, r2, r3);
    r1_8 = guest::cpu()->r[1];
    ea_2 = r13;
    r13 = r13 + 0x28;  // (from the original)
    r4_9 = *gptr<u32>(ea_2 + 4);
    r5_1 = *gptr<u32>(ea_2 + 8);
    r6_1 = *gptr<u32>(ea_2 + 0xc);  // (from the original)
    r7_1 = *gptr<u32>(ea_2 + 0x10);  // (from the original)
    r8_1 = *gptr<u32>(ea_2 + 0x14);  // (from the original)
    r9_1 = *gptr<u32>(ea_2 + 0x18);  // (from the original)
    r10_1 = *gptr<u32>(ea_2 + 0x1c);  // (from the original)
    r11_1 = *gptr<u32>(ea_2 + 0x20);  // (from the original)
    guest::cpu()->r[1] = r1_8;
    guest::cpu()->r[4] = r4_9;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
    guest::cpu()->r[13] = r13;
    return r0_12;
}

}  // namespace d_005b22c8
GUEST_EXPORT(0x005b22c8, d_005b22c8::f_005b22c8);

// f_005b25d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b25d8 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x0046fc50, u32(u32, u32, u32, u32)> call_0046fc50;  // (from the original)

u32 f_005b25d8(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r7_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r4_1 = 0;
    r13 = r13 - 0x30u;  // (from the original)
    r7_1 = r2 + 4u;
    ea_1 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(ea_1) = u32(0u);
    ea_2 = r13;
    *gptr<u32>(ea_2) = u32(0x1400u);  // (from the original)
    *gptr<u32>(ea_2 + 4) = u32(0x40u);  // (from the original)
    ea_3 = r13 + 8u;
    *gptr<u32>(ea_3) = u32(0x68u);  // (from the original)
    *gptr<u32>(ea_3 + 4) = u32(4u);
    r0_1 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_0046fc50(r0_1, r1, 0x6000u, r7_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        r4_1 = 0u;
    } else {
        r4_1 = 1u;
        goto L_5b2650;
    }
    guest::cpu()->r[13] = r13;
    call_002f825c(r1, 0x6000u, r2_1, r3_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
L_5b2650:;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r4_1;
}

}  // namespace d_005b25d8
GUEST_EXPORT(0x005b25d8, d_005b25d8::f_005b25d8);

// f_005b2d10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b2d10 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x005b25d8, u32(u32, u32, u32, u32)> call_005b25d8;  // (from the original)
inline constexpr guest::Function<0x0075dbc4, u32(u32, u32, u32, u32)> call_0075dbc4;  // (from the original)

u32 f_005b2d10(u32 r0, u32 r1, u32 r2) {
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    call_002f825c(r1, 0x6000u, r2, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r4_1 = 0u;
    r0_1 = call_0075dbc4(r2, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        r0_2 = r0 + 0x138u;  // (from the original)
        r0_3 = call_005b25d8(r0_2, r1, r2, guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        if (r0_3 != 0) {
            r4_1 = 1u;
        }
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r4_1;
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
    u32 r5 = guest::cpu()->r[5];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_2 = 0;
    u32 r8_1 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    float S0_3 = 0;
    u32 zf_1 = 0;
    u32 r0_4 = 0;
    float S0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    float S0_5 = 0;
    u32 r0_7 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    float S0_6 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    float S0_7 = 0;
    u32 r1_5 = 0;
    u32 r0_10 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r1_6 = 0;
    float S0_8 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_7 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    float S0_9 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_8 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    float S0_10 = 0;
    u32 r0_15 = 0;
    float S0_11 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r1_9 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    float S0_12 = 0;
    u32 r0_18 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    float S0_13 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    float S0_14 = 0;
    u32 r1_10 = 0;
    u32 r0_21 = 0;
    u32 r2_13 = 0;
    u32 r3_13 = 0;
    float S0_15 = 0;
    u32 r1_11 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r1_12 = 0;
    u32 r2_14 = 0;
    u32 r3_14 = 0;
    float S0_16 = 0;
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    r13 = r13 - 0x68u;  // (from the original)
    r5 = r0;
    r4_1 = *gptr<u32>(r13 + 0x68u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0_1 = call_005ab4b0(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    r0_2 = call_002f74c8(r0_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    if (r0_2 == 0xa4u) {  // (from the original)
        r8_1 = 0u;
    } else {
        r8_1 = 1u;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    r0_3 = call_007b0c08(r0_2, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    zf_1 = (r0_3 & r8_1) == 0;
    r8 = 0x953eecu;  // (from the original)
    r0_4 = r13 + 8u;
    if (zf_1) {
        goto L_5b2efc;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    call_005afd3c(r0_4, r1_3, r2_3, r3_3);
    S0_4 = guest::cpu()->s[0];
    r0_5 = r13 + 8u;
    *gptr<u32>(r13) = u32(r4_1);
    *gptr<u32>(r13 + 4) = u32(1u);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    r0_6 = call_005afd20(r0_5, r1, r2, r3);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    S0_5 = guest::cpu()->s[0];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    r0_7 = call_002f74c8(r0_6, r1_4, r2_4, r3_4);
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    S0_6 = guest::cpu()->s[0];
    if (r0_7 == 0xa4u) {  // (from the original)
        goto L_5b2ee4;
    }
    r0_8 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_6;
    call_005a90b0(r0_8, 0x863u, r2_5, r3_5);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
L_5b2e90:;
    r0_9 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    call_005a50e0(r0_9, 1u, r2, r3);
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    S0_7 = guest::cpu()->s[0];
    r1_5 = u32(s32(s8(*gptr<u8>(r8))));
    r0_10 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_7;
    call_005a90c4(r0_10, r1_5, r2_6, r3_6);
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r1_6 = *gptr<u32>(r8 + 0xcu);  // (from the original)
    *gptr<u32>(r13 + 0x1cu) = u32(r1_6);  // (from the original)
    S0_8 = std::bit_cast<float>(*gptr<u32>(r8 + 0x10u));  // (from the original)
    *gptr<u32>(r13 + 0x38u) = u32(std::bit_cast<u32>(S0_8));  // (from the original)
    r0_11 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_8;
    r0_12 = call_005af9d0(r0_11, r1_6, r2_7, r3_7);
    r1_7 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    S0_9 = guest::cpu()->s[0];
    *gptr<u8>(r5 + 4u) = u8(r0_12);
    r0_13 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_9;
    r0_14 = call_005afe38(r0_13, r1_7, r2_8, r3_8);
    r1_8 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    S0_10 = guest::cpu()->s[0];
    goto L_5b2f7c;
L_5b2ee4:;
    r0_15 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_6;
    call_005a90b0(r0_15, 0x198eu, r2_5, r3_5);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    guest::preempt();
    goto L_5b2e90;
L_5b2efc:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    call_005b0a28(r0_4, r1_3, r2_3, r3_3);
    S0_11 = guest::cpu()->s[0];
    r0_16 = r13 + 8u;
    *gptr<u32>(r13) = u32(1u);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_11;
    r0_17 = call_005b0a14(r0_16, r1, r3, r4_1);
    r1_9 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    S0_12 = guest::cpu()->s[0];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_12;
    r0_18 = call_002f74c8(r0_17, r1_9, r2_10, r3_10);
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    S0_13 = guest::cpu()->s[0];
    if (r0_18 == 0xa4u) {  // (from the original)
        goto L_5b2f88;
    }
    r0_19 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_13;
    call_005a90b0(r0_19, 0x863u, r2_11, r3_11);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
L_5b2f40:;
    r0_20 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    call_005a50e0(r0_20, 1u, r2, r3);
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    S0_14 = guest::cpu()->s[0];
    r1_10 = u32(s32(s8(*gptr<u8>(r8))));
    r0_21 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_14;
    call_005a90c4(r0_21, r1_10, r2_12, r3_12);
    r2_13 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    S0_15 = guest::cpu()->s[0];
    r1_11 = *gptr<u32>(r8 + 0x14u);  // (from the original)
    *gptr<u32>(r13 + 0x1cu) = u32(r1_11);  // (from the original)
    r0_22 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_15;
    r0_23 = call_005b06c4(r0_22, r1_11, r2_13, r3_13);
    r1_12 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    S0_16 = guest::cpu()->s[0];
    *gptr<u8>(r5 + 4u) = u8(r0_23);
    r0_24 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_16;
    r0_14 = call_005b0b14(r0_24, r1_12, r2_14, r3_14);
    r1_8 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    S0_10 = guest::cpu()->s[0];
L_5b2f7c:;
    r13 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_10;
    return call_005ab498(r0_14, r1_8, r2_9, r3_9);
L_5b2f88:;
    r0_25 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_13;
    call_005a90b0(r0_25, 0x198eu, r2_11, r3_11);  // (from the original)
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
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r7_1 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r8_1 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r1_4 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 r1_5 = 0;
    u32 ea_4 = 0;
    u32 r0_2 = 0;
    u32 r1_6 = 0;
    u32 r3_6 = 0;
    u32 r2_6 = 0;
    u32 r1_7 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r5_2 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r1_8 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r1_9 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r1_10 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 ea_5 = 0;
    u32 r0_3 = 0;
    u32 r1_11 = 0;
    u32 ea_6 = 0;
    u32 r3_13 = 0;
    u32 r2_13 = 0;
    u32 r0_4 = 0;
    u32 ea_7 = 0;
    u32 ea_8 = 0;
    u32 r0_5 = 0;
    u32 r1_12 = 0;
    u32 r0_6 = 0;
    u32 r1_13 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r5_1 = r13;
    guest::cpu()->r[13] = r13;
    call_00121110(0x400u, r1, r2, r3);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r1_1 = r5_1 + 4u;
    guest::cpu()->r[13] = r13;
    call_007b0bb0(0x600u, r1_1, r2_1, r3_1);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r1_2 = r5_1 + 8u;
    guest::cpu()->r[13] = r13;
    call_007b0bb0(0x602u, r1_2, r2_2, r3_2);  // (from the original)
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r7_1 = 0x602u | u32(s32(0x602u) >> 9);  // (from the original)
    r1_3 = r5_1 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_007b0bb0(r7_1, r1_3, r2_3, r3_3);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r8_1 = 0x602u - 1u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_007b0bb0(r8_1, r5_1, r2_4, r3_4);
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    ea_1 = r13 + 8u;
    r0_1 = *gptr<u32>(r13 + 4u);
    r1_4 = *gptr<u32>(ea_1) * *gptr<u32>(ea_1 + 4) << 1;
    guest::cpu()->r[13] = r13;
    call_007b1034(r0_1, r1_4, r2_5, r3_5);
    ea_2 = r0 + 0xcu;  // (from the original)
    *gptr<u32>(ea_2) = u32(0u);
    ea_3 = r13 + 0xcu;  // (from the original)
    r1_5 = *gptr<u32>(ea_3);
    ea_4 = r0 + 0x14u;  // (from the original)
    *gptr<u32>(ea_4) = u32(0xf0u);  // (from the original)
    *gptr<u32>(ea_4 + 4) = u32(0x190u);  // (from the original)
    *gptr<u32>(r0 + 0x10u) = u32(r1_5 - 0x190u);  // (from the original)
    r0_2 = *gptr<u32>(r0);
    r1_6 = *gptr<u32>(r0 + 8u);
    r3_6 = r0 + 0xcu;  // (from the original)
    r2_6 = r13;
    guest::cpu()->r[13] = r13;
    call_005b30c4(r0_2, r1_6, r2_6, r3_6);
    r1_7 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r5_2 = r13;
    guest::cpu()->r[13] = r13;
    call_00121110(0x410u, r1_7, r2_7, r3_7);  // (from the original)
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r1_8 = r5_2 + 4u;
    guest::cpu()->r[13] = r13;
    call_007b0bb0(0x600u, r1_8, r2_8, r3_8);  // (from the original)
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r1_9 = r5_2 + 8u;
    guest::cpu()->r[13] = r13;
    call_007b0bb0(0x602u, r1_9, r2_9, r3_9);  // (from the original)
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r1_10 = r5_2 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_007b0bb0(r7_1, r1_10, r2_10, r3_10);
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_007b0bb0(r8_1, r5_2, r2_11, r3_11);
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    ea_5 = r13 + 8u;
    r0_3 = *gptr<u32>(r13 + 4u);
    r1_11 = *gptr<u32>(ea_5) * *gptr<u32>(ea_5 + 4) << 1;
    guest::cpu()->r[13] = r13;
    call_007b1034(r0_3, r1_11, r2_12, r3_12);
    ea_6 = r13 + 0xcu;  // (from the original)
    r3_13 = r0 + 0xcu;  // (from the original)
    r2_13 = r13;
    r0_4 = *gptr<u32>(ea_6) - 0x190u;  // (from the original)
    ea_7 = r0 + 0x10u;  // (from the original)
    *gptr<u32>(ea_7) = u32(r0_4);
    ea_8 = r0 + 4u;
    r0_5 = *gptr<u32>(ea_8);
    r1_12 = *gptr<u32>(ea_8 + 4);
    guest::cpu()->r[13] = r13;
    r0_6 = call_005b30c4(r0_5, r1_12, r2_13, r3_13);
    r1_13 = guest::cpu()->r[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_13;
    guest::cpu()->r[13] = r13;
    return r0_6;
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
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r1_1 = 0;
    u32 r12_1 = 0;
    u32 r0_1 = 0;
    u32 r5_2 = 0;
    u32 b_1 = 0;
    u32 ea_1 = 0;
    u32 res_3 = 0;
    u32 ea_2 = 0;
    u32 r5_3 = 0;
    u32 res_4 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 res_5 = 0;
    r13 = r13 - 0x14;  // (from the original)
    r8 = 0u;
    r5_1 = arg3->word_c;
    res_1 = arg3->word_8 - 1u;
    res_2 = r5_1 * res_1;
    r1_1 = arg2->word_4;
    r7 = r0 + (res_2 << 1);
    r4 = r1_1 + (arg3->word_4 * arg2->word_8 + arg3->word_0 << 1);
    if (r5_1 == 0 || r5_1 >> 0x1f != (r5_1 & (r5_1 ^ r5_1)) >> 0x1f) {  // (from the original)
        goto L_5b3190;
    }
L_5b3100:;
    r12_1 = r4 + (arg3->word_8 << 1) - r4;
    r0_1 = u32(s32(r12_1) >> 1);
    if (r0_1 == 0 || r0_1 >> 0x1f != (r0_1 & (r0_1 ^ r0_1)) >> 0x1f) {  // (from the original)
        goto L_5b3174;
    }
    r5_2 = arg3->word_c;
    b_1 = r12_1 << 0x1e;  // (from the original)
    r1 = r4 - 2u;
    r0 = r7 + (r5_2 << 1);
    if (b_1 >> 0x1f) {  // (from the original)
        r0 = r0 - (r5_2 << 1);
        ea_1 = r1 + 2u;
        r1 = ea_1;
        *gptr<u16>(r0) = u16(u32(*gptr<u16>(ea_1)));
    }
    res_3 = u32(s32(r12_1) >> 2);
    r12 = res_3;
    if (res_3 == 0) {
        goto L_5b3174;
    }
    do {
L_5b3140:;
        ea_2 = r1 + 2u;
        r5_3 = u32(*gptr<u16>(ea_2));
        res_4 = r12 - 1u;
        r12 = res_4;
        ea_3 = r0 - (arg3->word_c << 1);
        *gptr<u16>(ea_3) = u16(r5_3);
        ea_4 = r1 + 4u;
        r1 = ea_4;
        *gptr<u16>(r0 + (0u - arg3->word_c << 2)) = u16(u32(*gptr<u16>(ea_4)));
        r0 = r0 - (arg3->word_c << 2);
        guest::preempt();
    } while (res_4 != 0);
L_5b3174:;
    r1_1 = arg2->word_8;
    r0 = arg3->word_c;
    r8 = r8 + 1u;
    r7 = r7 + 2u;
    res_5 = r0 - r8;
    r4 = r4 + (r1_1 << 1);
    if (res_5 != 0 && res_5 >> 0x1f == ((r0 ^ r8) & (r0 ^ res_5)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_5b3100;
    }
L_5b3190:;
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005b30c4
GUEST_EXPORT(0x005b30c4, d_005b30c4::f_005b30c4);

// f_005b3198: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b3198 {

inline guest::global<u32, 0x005b32e4> global_005b32e4;  // (from the original)
inline guest::global<u32, 0x005b32e8> global_005b32e8;  // (from the original)
inline guest::global<u32, 0x005b32ec> global_005b32ec;  // (from the original)
inline guest::global<u32, 0x005b32f0> global_005b32f0;  // (from the original)
inline guest::global<u32, 0x005b32f4> global_005b32f4;  // (from the original)
inline guest::global<u32, 0x005b32f8> global_005b32f8;  // (from the original)
inline guest::global<u32, 0x00a84398> global_00a84398;  // (from the original)

u32 f_005b3198(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S4 = 0;
    float S5 = 0;
    float S8 = 0;
    float S9 = 0;
    float S10 = 0;
    u32 r2_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S4_1 = 0;
    float S3_1 = 0;
    u32 r3_1 = 0;
    float S4_2 = 0;
    float S5_1 = 0;
    float S6_1 = 0;
    u32 r2_2 = 0;
    float S3_2 = 0;
    u32 r1_1 = 0;
    float S3_3 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r1_3 = 0;
    u32 res_1 = 0;
    r13 = r13 - 8;
    r2_1 = *gptr<u32>(r13 + 8u);
    S0_1 = std::bit_cast<float>(*global_00a84398);
    S1_1 = std::bit_cast<float>(*gptr<u32>(0xa84398u + 4));  // (from the original)
    S2_1 = std::bit_cast<float>(*gptr<u32>(0xa84398u + 8));  // (from the original)
    S4_1 = S0_1 + S1_1 + S2_1;
    if (s32(std::bit_cast<u32>(fabsf(S0_1 * S0_1 + S1_1 * S1_1 + S2_1 * S2_1))) <= s32(0x34000000u)) {  // (from the original)
        S0 = std::bit_cast<float>(*global_005b32e4);
        S1 = S0;
        S2 = S0;
    } else {
        S3_1 = std::bit_cast<float>(*global_005b32e8) / S4_1;
        S0 = S0_1 * S3_1;
        S1 = S1_1 * S3_1;
        S2 = S2_1 * S3_1;
    }
    r3_1 = r0 + r1;
    S4_2 = std::bit_cast<float>(*gptr<u32>(r2_1));
    S5_1 = std::bit_cast<float>(*gptr<u32>(r2_1 + 4));
    S6_1 = std::bit_cast<float>(*gptr<u32>(r2_1 + 8));
    r2_2 = r3_1 - r0;
    r12 = 1u;
    if (s32(1u + u32(s32(r2_2) >> 1)) <= s32(1u)) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = 1u;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r4 = 1u + u32(s32(r2_2) >> 1);
    S3_2 = std::bit_cast<float>(*global_005b32ec);
    S8 = std::bit_cast<float>(*global_005b32f4);
    S4 = S4_2 * S3_2;
    S9 = S5_1 * std::bit_cast<float>(*global_005b32f0);
    S5 = S6_1 * S3_2;
    S10 = std::bit_cast<float>(*global_005b32f8);
    do {
L_5b3230:;
        r1_1 = u32(*gptr<u16>(r0));
        r12 = r12 + 1u;
        S3_3 = S0 * (float(std::bit_cast<u32>(std::bit_cast<float>(r1_1 << 0x10 >> 0x1b))) * S8) + float(std::bit_cast<u32>(std::bit_cast<float>(r1_1 << 0x15 >> 0x1a))) * S10 * S1 + float(std::bit_cast<u32>(std::bit_cast<float>(r1_1 & 0x1fu))) * S8 * S2;  // (from the original)
        r1_2 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_uz_f(S4 * S3_3)));
        r2_3 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_uz_f(S9 * S3_3)));
        r3_2 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_uz_f(S5 * S3_3)));
        if (r1_2 > 0x1fu) {  // (from the original)
            r1_2 = 0x1fu;  // (from the original)
        }
        if (r2_3 > 0x3fu) {  // (from the original)
            r2_3 = 0x3fu;  // (from the original)
        }
        if (r3_2 > 0x1fu) {  // (from the original)
            r3_2 = 0x1fu;  // (from the original)
        }
        r1_3 = r3_2 & 0x1fu | (r1_2 << 0xb | (r2_3 & 0x3fu) << 5);  // (from the original)
        res_1 = r4 - r12;
        *gptr<u16>(r0) = u16(r1_3);
        r0 = r0 + 2u;
        guest::preempt();
    } while (res_1 != 0 && res_1 >> 0x1f == ((r4 ^ r12) & (r4 ^ res_1)) >> 0x1f);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_3;
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
    *gptr<u8>(0x957320u + 1u) = u8(u32(*gptr<u8>(0x957320u + 2u)));  // (from the original)
    *gptr<u8>(0x957320u + 2u) = u8(0xa5u);  // (from the original)
    *gptr<u8>(0x957320u + 3u) = u8(0xa5u);  // (from the original)
    guest::cpu()->r[1] = 0xa5u;  // (from the original)
    return 0x957320u;  // (from the original)
}

}  // namespace d_005b3ed4
GUEST_EXPORT(0x005b3ed4, d_005b3ed4::f_005b3ed4);

// f_005b4088: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b4088 {


u32 f_005b4088() {
    *gptr<u8>(0x957320u + 1u) = u8(u32(*gptr<u8>(0x957320u + 2u)));  // (from the original)
    *gptr<u8>(0x957320u + 2u) = u8(u32(*gptr<u8>(0x957320u + 3u)));  // (from the original)
    *gptr<u8>(0x957320u + 3u) = u8(0xa5u);  // (from the original)
    guest::cpu()->r[1] = 0xa5u;  // (from the original)
    return 0x957320u;  // (from the original)
}

}  // namespace d_005b4088
GUEST_EXPORT(0x005b4088, d_005b4088::f_005b4088);

// f_005b4148: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b4148 {

inline constexpr guest::Function<0x005b3ef4, u32(u32, u32, u32, u32)> call_005b3ef4;  // (from the original)
inline constexpr guest::Function<0x006a6024, u32(u32, u32, u32, u32)> call_006a6024;  // (from the original)
inline constexpr guest::Function<0x006e4490, u32(u32, u32, u32, u32)> call_006e4490;  // (from the original)

u32 f_005b4148(u32 r0, u32 r1_unused, u32 r2) {
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r4_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    *gptr<u32>(0x957320u + 0xcu) = u32(r0);  // (from the original)
    *gptr<u32>(0x957320u + 8u) = u32(0u);  // (from the original)
    call_006e4490(r0, 0u, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    r0_1 = u32(*gptr<u8>(0x957320u + 2u));  // (from the original)
    r1_1 = 0x957320u + 0x24u;  // (from the original)
    if (r0_1 >= 0xa5u) {  // (from the original)
        r4_1 = *gptr<u32>(r1_1);
    } else {
        r4_1 = *gptr<u32>(r1_1 + (r0_1 << 2));
    }
    call_006a6024(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    call_005b3ef4(r4_1, 0x95787cu, 0u, guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_005b4148
GUEST_EXPORT(0x005b4148, d_005b4148::f_005b4148);

// f_005b4198: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b4198 {

inline constexpr guest::Function<0x005b3ef4, u32(u32, u32, u32, u32)> call_005b3ef4;  // (from the original)
inline constexpr guest::Function<0x006a6024, u32(u32, u32, u32, u32)> call_006a6024;  // (from the original)
inline constexpr guest::Function<0x006e4490, u32(u32, u32, u32, u32)> call_006e4490;  // (from the original)

u32 f_005b4198(u32 r0, u32 r1_unused, u32 r2) {
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r4_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    *gptr<u32>(0x957320u + 0xcu) = u32(r0);  // (from the original)
    *gptr<u32>(0x957320u + 8u) = u32(0u);  // (from the original)
    call_006e4490(r0, 0u, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    r0_1 = u32(*gptr<u8>(0x957320u + 2u));  // (from the original)
    r1_1 = 0x957320u + 0x24u;  // (from the original)
    if (r0_1 >= 0xa5u) {  // (from the original)
        r4_1 = *gptr<u32>(r1_1);
    } else {
        r4_1 = *gptr<u32>(r1_1 + (r0_1 << 2));
    }
    call_006a6024(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    call_005b3ef4(r4_1, 0x95788cu, 0u, guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_005b4198
GUEST_EXPORT(0x005b4198, d_005b4198::f_005b4198);

// f_005b41e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b41e8 {

inline guest::global<u32, 0x00957344> global_00957344;  // (from the original)

u32 f_005b41e8(u32 r0) {
    u32 zf_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r0_1 = 0;
    u32 res_1 = 0;
    zf_1 = r0 == 0xa5u;  // (from the original)
    r1_1 = r0;
    if (zf_1) {
        r1_1 = 0x957320u;  // (from the original)
    }
    if (zf_1) {
        r1_1 = u32(*gptr<u8>(r1_1 + 2u));
    }
    if (r1_1 >= 0xa5u) {  // (from the original)
        r1_2 = *global_00957344;
    } else {
        r1_2 = *gptr<u32>(0x957344u + (r1_1 << 2));  // (from the original)
    }
    r1_3 = *gptr<u32>(r1_2 + 8u);
    if (r1_3 != 0) {
        r0_1 = u32(*gptr<u8>(r1_3 + 0xcu));  // (from the original)
        guest::cpu()->r[1] = r1_3;
        return r0_1;
    }
    if (r0 == 0xa5u) {  // (from the original)
        guest::cpu()->r[1] = 0x20u;  // (from the original)
        return 2u;
    }
    res_1 = 0x20u & ~*gptr<u32>(0x889074u + (r0 << 2));  // (from the original)
    if (res_1 == 0) {
        guest::cpu()->r[1] = 0x20u;  // (from the original)
        return res_1;
    }
    guest::cpu()->r[1] = 0x20u;  // (from the original)
    return 2u;
}

}  // namespace d_005b41e8
GUEST_EXPORT(0x005b41e8, d_005b41e8::f_005b41e8);

// f_005b43b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b43b0 {


u32 f_005b43b0(u32 r0) {
    u32 zf_1 = 0;
    u32 zf_2 = 0;
    zf_1 = r0 == 0x39u;  // (from the original)
    if (!zf_1) {
        zf_1 = r0 == 0x3au;  // (from the original)
    }
    if (zf_1) {
        return 1u;
    }
    zf_2 = r0 == 0x3bu;  // (from the original)
    if (!zf_2) {
        zf_2 = r0 == 0x3cu;  // (from the original)
    }
    if (!zf_2) {
        return 0u;
    }
    return 1u;
}

}  // namespace d_005b43b0
GUEST_EXPORT(0x005b43b0, d_005b43b0::f_005b43b0);

// f_005b43d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b43d4 {

inline guest::global<u8, 0x00957322> global_00957322;  // (from the original)
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x005b4018, u32(u32, u32, u32, u32)> call_005b4018;  // (from the original)
inline constexpr guest::Function<0x005b4724, u32(u32, u32, u32, u32)> call_005b4724;  // (from the original)
inline constexpr guest::Function<0x006dfe10, u32(u32, u32, u32, u32)> call_006dfe10;  // (from the original)

u32 f_005b43d4(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_005b4724(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        return 1u;
    }
    r0_2 = u32(*global_00957322);
    r0_3 = call_005b4018(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_3 != 0) {
        r0_3 = call_002fc900(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_3 != 0) {
            guest::cpu()->r[13] += 8u;
            return 3u;
        }
    }
    r0_4 = call_006dfe10(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_4 == 0) {
        r0_5 = 2u;
    } else {
        r0_5 = 0u;
    }
    guest::cpu()->r[13] += 8u;
    return r0_5;
}

}  // namespace d_005b43d4
GUEST_EXPORT(0x005b43d4, d_005b43d4::f_005b43d4);

// f_005b4428: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b4428 {

inline guest::global<u16, 0x00886e2a> global_00886e2a;  // (from the original)
inline guest::global<u8, 0x009503c1> global_009503c1;  // (from the original)
inline guest::global<u8, 0x00957323> global_00957323;  // (from the original)
inline constexpr guest::Function<0x00606a24, u32(u32, u32, u32, u32)> call_00606a24;  // (from the original)

u32 f_005b4428(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 zf_1 = 0;
    u32 r12_1 = 0;
    u32 r0_1 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    zf_1 = r1 == 6u;
    r12_1 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    *global_00957323 = u8(r0);
    if (zf_1) {
        r0 = 0x9503bfu;  // (from the original)
    }
    if (zf_1) {
        r1 = u32(*gptr<u8>(r0));
    }
    if (r3 == 6u) {
        r3 = u32(*global_009503c1);
    }
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u32>(r13) = u32(r12_1);
    r0_1 = u32(*global_00886e2a);
    guest::cpu()->r[13] = r13;
    call_00606a24(r0_1, r1, guest::cpu()->r[2], r3);
    *gptr<u8>(0xac1948u + 0x24u) = u8(0xa5u);  // (from the original)
    *gptr<u32>(0xac1948u + 0x3cu) = u32(0u);  // (from the original)
    *gptr<u8>(0xac1948u + 0x40u) = u8(0u);  // (from the original)
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = 0xa5u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return 0xac1948u;  // (from the original)
}

}  // namespace d_005b4428
GUEST_EXPORT(0x005b4428, d_005b4428::f_005b4428);

// f_005b449c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b449c {


u32 f_005b449c(u32 r0, u32 r1) {
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 res_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    if (r1 == 0xa5u) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        r0_1 = ~0u;
        return r0_1;
    }
    r4 = 0x889074u;  // (from the original)
    res_1 = r0 & ~*gptr<u32>(r4 + (r1 << 2));
    if (res_1 == 0) {
        r12 = 0u;
        r3 = r12;
    } else {
        guest::cpu()->r[13] += 8u;
        r0_1 = ~0u;
        return r0_1;
    }
    do {
L_5b44c0:;
        r2_1 = r3 & 0xffu;  // (from the original)
        if (!(r1 != r2_1)) {
            guest::cpu()->r[13] += 8u;
            return r12;
        }
        if (!(r2_1 == 0xa5u)) {  // (from the original)
            if ((r0 & ~*gptr<u32>(r4 + (r2_1 << 2))) == 0) {
                r12 = r12 + 1u;
            }
        }
        r3 = r3 + 1u;
        guest::preempt();
    } while (s32(r3) < s32(0xa5u));  // (from the original)
    guest::cpu()->r[13] += 8u;
    r0_1 = ~0u;
    return r0_1;
}

}  // namespace d_005b449c
GUEST_EXPORT(0x005b449c, d_005b449c::f_005b449c);

// f_005b4520: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b4520 {

inline guest::global<u8, 0x00957322> global_00957322;  // (from the original)
inline guest::global<u32, 0x0095c6d0> global_0095c6d0;  // (from the original)

u32 f_005b4520() {
    u32 r0_1 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r0_2 = 0;
    r0_1 = u32(*global_00957322);
    if (r0_1 != 0xa5u) {  // (from the original)
        res_1 = 0x40000u & ~*gptr<u32>(0x889074u + (r0_1 << 2));  // (from the original)
        if (res_1 == 0) {
            guest::cpu()->r[1] = res_1;
            return 1u;
        }
    }
    if (r0_1 == 0xa5u) {  // (from the original)
        guest::cpu()->r[1] = 0x80000u;  // (from the original)
        return 0u;
    }
    res_2 = 0x80000u & ~*gptr<u32>(0x889074u + (r0_1 << 2));  // (from the original)
    if (res_2 != 0) {
        guest::cpu()->r[1] = 0x80000u;  // (from the original)
        return 0u;
    }
    r0_2 = *global_0095c6d0;
    if (r0_2 == 0) {
        guest::cpu()->r[1] = 0x80000u;  // (from the original)
        return 0u;
    }
    if (u32(*gptr<u8>(r0_2 + 0x10cu)) == 2u) {  // (from the original)
        guest::cpu()->r[1] = 0x80000u;  // (from the original)
        return 1u;
    }
    guest::cpu()->r[1] = 0x80000u;  // (from the original)
    return 0u;
}

}  // namespace d_005b4520
GUEST_EXPORT(0x005b4520, d_005b4520::f_005b4520);

// f_005b4594: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b4594 {

inline guest::global<u8, 0x00957322> global_00957322;  // (from the original)
inline constexpr guest::Function<0x0027ab40, u32(u32, u32, u32, u32)> call_0027ab40;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> call_002ff8b0;  // (from the original)
inline constexpr guest::Function<0x0030fbb4, u32(u32, u32, u32, u32)> call_0030fbb4;  // (from the original)
inline constexpr guest::Function<0x005b4018, u32(u32, u32, u32, u32)> call_005b4018;  // (from the original)
inline constexpr guest::Function<0x006fa40c, u32(u32, u32, u32, u32)> call_006fa40c;  // (from the original)

u32 f_005b4594(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_5 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 zf_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = u32(*global_00957322);
    r0_1 = call_005b4018(r4, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_5b45b8;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 1u;
L_5b45b8:;
    r0_2 = call_002ff8b0(4u, r1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_3 = call_0027ab40(r0_2, r1_1, r2_2, r3_2);
    r1 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r0 = 0u;
    r1 = 0x889c80u + (r0_2 + (r0_2 << 1) << 1);  // (from the original)
    do {
L_5b45e8:;
        r2_3 = r4;
        r3_3 = u32(*gptr<u8>(r1 + r0));
        if (r3_3 == r4) {
            goto L_5b461c;
        }
        r3_3 = u32(*gptr<u8>(r1 + r0 + 1u));
        r2_3 = r4;
        if (r3_3 == r4) {
            goto L_5b461c;
        }
        r0 = r0 + 2u;
        guest::preempt();
    } while (s32(r0) < s32(6u));
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
L_5b461c:;
    r0_4 = call_006fa40c(r2_3, r1, r2_3, r3_3);
    r1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_4 >= 4u) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r0_5 = call_002fb328(r0_4, r1, r2_4, r3_4);
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_6 = r0_5 + 0x5d900u;  // (from the original)
    r0_7 = call_0030fbb4(r0_6, r0_4, r2_5, r3_5);
    r1 = guest::cpu()->r[1];
    r0_8 = u32(*gptr<u8>(r0_7 + 4u));
    zf_1 = r0_8 == 0;
    if (!zf_1) {
        zf_1 = r0_8 == 8u;
    }
    if (!zf_1) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_005b4594
GUEST_EXPORT(0x005b4594, d_005b4594::f_005b4594);

// f_005b4678: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b4678 {


u32 f_005b4678(u32 r0) {
    u32 res_1 = 0;
    if (r0 == 0xa5u) {  // (from the original)
        guest::cpu()->r[1] = 0x10000u;  // (from the original)
        return 0u;
    }
    res_1 = 0x10000u & ~*gptr<u32>(0x889074u + (r0 << 2));  // (from the original)
    if (res_1 == 0) {
        guest::cpu()->r[1] = 0x10000u;  // (from the original)
        return 1u;
    }
    guest::cpu()->r[1] = 0x10000u;  // (from the original)
    return 0u;
}

}  // namespace d_005b4678
GUEST_EXPORT(0x005b4678, d_005b4678::f_005b4678);

// f_005b46a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b46a4 {

inline guest::global<u32, 0x005b471c> global_005b471c;  // (from the original)
inline constexpr guest::Function<0x006f8c24, u32(u32, u32, u32, u32)> call_006f8c24;  // (from the original)

u32 f_005b46a4(u32 r0) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r5 = r0;
    r1 = *gptr<u32>(0x5b471cu + 4);  // (from the original)
    r4 = 0u;
    r6 = r13;
    *gptr<u32>(r13) = u32(*global_005b471c);
    *gptr<u32>(r13 + 4) = u32(r1);
L_5b46c4:;
    if (u32(*gptr<u8>(r6 + r4)) != r5) {
        goto L_5b470c;
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_006f8c24(r5, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        goto L_5b470c;
    }
    if (u32(*gptr<u8>(r0_1 + 4u)) == 0) {
        r0_2 = 1u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
L_5b4700:;
    r0_2 = 0u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_2;
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

// f_005b4724: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b4724 {

inline guest::global<u8, 0x00957322> global_00957322;  // (from the original)
inline guest::global<u32, 0x0095c6d0> global_0095c6d0;  // (from the original)
inline constexpr guest::Function<0x0027ab40, u32(u32, u32, u32, u32)> call_0027ab40;  // (from the original)
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> call_002ff8b0;  // (from the original)
inline constexpr guest::Function<0x004e6e84, u32(u32, u32, u32, u32)> call_004e6e84;  // (from the original)
inline constexpr guest::Function<0x005b4018, u32(u32, u32, u32, u32)> call_005b4018;  // (from the original)
inline constexpr guest::Function<0x006c4280, u32(u32, u32, u32, u32)> call_006c4280;  // (from the original)
inline constexpr guest::Function<0x006e0b2c, u32(u32, u32, u32, u32)> call_006e0b2c;  // (from the original)

u32 f_005b4724(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 res_2 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_7 = 0;
    u32 zf_1 = 0;
    u32 res_3 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r1 = 0x10u;  // (from the original)
    r6 = 0x889074u;  // (from the original)
    r4 = u32(*global_00957322);
    if (r4 != 0xa5u) {  // (from the original)
        res_1 = r1 & ~*gptr<u32>(r6 + (r4 << 2));
        r0_1 = res_1;
        if (res_1 == 0) {
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0_1;
        }
    }
    r1 = 8u;
    if (r4 == 0xa5u) {  // (from the original)
        goto L_5b4834;
    }
    res_2 = r1 & ~*gptr<u32>(r6 + (r4 << 2));
    if (res_2 != 0) {
        goto L_5b4834;
    }
    r0_2 = call_002ff8b0(4u, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_3 = call_0027ab40(r0_2, r1_1, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        goto L_5b47bc;
    }
    r0 = 0u;
    r1 = 0x889c80u + (r0_2 + (r0_2 << 1) << 1);  // (from the original)
    do {
L_5b4794:;
        if (u32(*gptr<u8>(r1 + r0)) == r4) {
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1;
            return 1u;
        }
        r2_2 = r1 + r0;
        r3_2 = u32(*gptr<u8>(r2_2 + 1u));
        if (r3_2 == r4) {
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1;
            return 1u;
        }
        r0 = r0 + 2u;
        guest::preempt();
    } while (s32(r0) < s32(6u));
L_5b47bc:;
    r0_4 = call_005b4018(r4, r1, r2_2, r3_2);
    r1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_4 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    if (r4 == 0xa3u) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    r0_5 = call_004e6e84(r4, r1, r2_3, r3_3);
    r1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_5 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    r0_6 = call_006e0b2c(r0_5, r1, r2_4, r3_4);
    r1 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_6 == 0) {
        goto L_5b4834;
    }
    r0_7 = *global_0095c6d0;
    zf_1 = r0_7 == 0;
    if (!zf_1) {
        r2_5 = 0x100000u;  // (from the original)
        zf_1 = r4 == 0xa5u;  // (from the original)
    }
    if (zf_1) {
        goto L_5b4834;
    }
    res_3 = r2_5 & ~*gptr<u32>(r6 + (r4 << 2));
    r1 = res_3;
    if (res_3 != 0) {
        goto L_5b4834;
    }
    r0_8 = u32(s32(s8(*gptr<u8>(r0_7 + 0x1cu))));  // (from the original)
    r0_9 = call_006c4280(r0_8, r1, r2_5, r3_5);
    r1 = guest::cpu()->r[1];
    if (r0_9 == 0xbu) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 1u;
    }
L_5b4834:;
    r0_1 = 0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_005b4724
GUEST_EXPORT(0x005b4724, d_005b4724::f_005b4724);

// f_005b4854: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b4854 {

inline guest::global<u8, 0x00957322> global_00957322;  // (from the original)
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x005b4018, u32(u32, u32, u32, u32)> call_005b4018;  // (from the original)
inline constexpr guest::Function<0x005b4724, u32(u32, u32, u32, u32)> call_005b4724;  // (from the original)
inline constexpr guest::Function<0x006dfe10, u32(u32, u32, u32, u32)> call_006dfe10;  // (from the original)

u32 f_005b4854(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_005b4724(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        return 0u;
    }
    r0_2 = u32(*global_00957322);
    r0_3 = call_005b4018(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_3 != 0) {
        r0_3 = call_002fc900(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_3 != 0) {
            guest::cpu()->r[13] += 8u;
            return 0u;
        }
    }
    r0_4 = call_006dfe10(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_4 != 0) {
        guest::cpu()->r[13] += 8u;
        return 1u;
    }
    guest::cpu()->r[13] += 8u;
    return 0u;
}

}  // namespace d_005b4854
GUEST_EXPORT(0x005b4854, d_005b4854::f_005b4854);

// f_005b48b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b48b4 {

inline guest::global<u8, 0x00957322> global_00957322;  // (from the original)

u32 f_005b48b4() {
    u32 r0_1 = 0;
    u32 res_1 = 0;
    u32 r0_2 = 0;
    u32 res_2 = 0;
    u32 res_3 = 0;
    u32 res_4 = 0;
    u32 res_5 = 0;
    r0_1 = u32(*global_00957322);
    if (r0_1 != 0xa5u) {  // (from the original)
        res_1 = 0x10u & ~*gptr<u32>(0x889074u + (r0_1 << 2));  // (from the original)
        if (res_1 == 0) {
            guest::cpu()->r[1] = 0x889074u;  // (from the original)
            return 0u;
        }
    }
    if (r0_1 == 0xa5u) {  // (from the original)
        guest::cpu()->r[1] = 0x889074u;  // (from the original)
        return 0u;
    }
    r0_2 = *gptr<u32>(0x889074u + (r0_1 << 2));  // (from the original)
    res_2 = 4u & ~r0_2;
    if (res_2 != 0) {
        guest::cpu()->r[1] = res_2;
        return 0u;
    }
    res_3 = 0x20u & ~r0_2;  // (from the original)
    if (res_3 == 0) {
        guest::cpu()->r[1] = res_3;
        return 1u;
    }
    res_4 = 0x40000u & ~r0_2;  // (from the original)
    if (res_4 == 0) {
        guest::cpu()->r[1] = res_4;
        return 1u;
    }
    res_5 = 0x80000u & ~r0_2;  // (from the original)
    if (res_5 != 0) {
        guest::cpu()->r[1] = 0x80000u;  // (from the original)
        return 0u;
    }
    guest::cpu()->r[1] = 0x80000u;  // (from the original)
    return 1u;
}

}  // namespace d_005b48b4
GUEST_EXPORT(0x005b48b4, d_005b48b4::f_005b48b4);

// f_005b493c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b493c {


u32 f_005b493c(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r0 >= 0xa5u) {  // (from the original)
        r0_1 = ~0u;
    } else {
        r1 = 0x88997cu;  // (from the original)
        r0_1 = *gptr<u32>(r1 + (r0 << 2));
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_005b493c
GUEST_EXPORT(0x005b493c, d_005b493c::f_005b493c);

// f_005b49b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b49b4 {


u32 f_005b49b4(u32 r0, u32 r1) {
    u32 res_1 = 0;
    u32 r0_1 = 0;
    if (r0 == 0xa5u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    res_1 = 0x100000u & ~*gptr<u32>(0x889074u + (r0 << 2));  // (from the original)
    if (res_1 == 0) {
        r0_1 = r0 & 1u;
        guest::cpu()->r[1] = res_1;
        return r0_1;
    }
    guest::cpu()->r[1] = res_1;
    return 0u;
}

}  // namespace d_005b49b4
GUEST_EXPORT(0x005b49b4, d_005b49b4::f_005b49b4);

// f_005b49e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b49e0 {


u32 f_005b49e0(u32 r0, u32 r1) {
    u32 res_1 = 0;
    u32 r0_1 = 0;
    if (r0 == 0xa5u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    res_1 = 0x100000u & ~*gptr<u32>(0x889074u + (r0 << 2));  // (from the original)
    if (res_1 != 0) {
        guest::cpu()->r[1] = res_1;
        return 0u;
    }
    r0_1 = r0 - 0x81u & 0x80000001u;  // (from the original)
    if (r0_1 == 1u) {
        guest::cpu()->r[1] = res_1;
        return r0_1;
    }
    guest::cpu()->r[1] = res_1;
    return 0u;
}

}  // namespace d_005b49e0
GUEST_EXPORT(0x005b49e0, d_005b49e0::f_005b49e0);

// f_005b4a28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b4a28 {


u32 f_005b4a28() {
    *gptr<u8>(0x957320u + 4u) = u8(0u);  // (from the original)
    *gptr<u8>(0x957320u + 5u) = u8(0u);  // (from the original)
    guest::cpu()->r[1] = 0u;
    return 0x957320u;  // (from the original)
}

}  // namespace d_005b4a28
GUEST_EXPORT(0x005b4a28, d_005b4a28::f_005b4a28);

// f_005b4a40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b4a40 {

inline guest::global<u8, 0x00957322> global_00957322;  // (from the original)
inline constexpr guest::Function<0x0027ab40, u32(u32, u32, u32, u32)> call_0027ab40;  // (from the original)
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> call_002ff8b0;  // (from the original)
inline constexpr guest::Function<0x005b4018, u32(u32, u32, u32, u32)> call_005b4018;  // (from the original)

u32 f_005b4a40(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 res_2 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r1 = 0x889074u;  // (from the original)
    r4 = u32(*global_00957322);
    if (r4 != 0xa5u) {  // (from the original)
        res_1 = 0x10u & ~*gptr<u32>(r1 + (r4 << 2));  // (from the original)
        r0_1 = res_1;
        if (res_1 == 0) {
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0_1;
        }
    }
    if (r4 == 0xa5u) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    res_2 = 8u & ~*gptr<u32>(r1 + (r4 << 2));
    if (res_2 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r0_2 = call_002ff8b0(4u, r1, 8u, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_3 = call_0027ab40(r0_2, r1_1, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        goto L_5b4ad8;
    }
    r0 = 0u;
    r1 = 0x889c80u + (r0_2 + (r0_2 << 1) << 1);  // (from the original)
    do {
L_5b4ab0:;
        if (u32(*gptr<u8>(r1 + r0)) == r4) {
            goto L_5b4aec;
        }
        r2_2 = r1 + r0;
        r3_2 = u32(*gptr<u8>(r2_2 + 1u));
        if (r3_2 == r4) {
            goto L_5b4aec;
        }
        r0 = r0 + 2u;
        guest::preempt();
    } while (s32(r0) < s32(6u));
L_5b4ad8:;
    r0_4 = call_005b4018(r4, r1, r2_2, r3_2);
    r1 = guest::cpu()->r[1];
    if (r0_4 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
L_5b4aec:;
    r0_1 = 1u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_005b4a40
GUEST_EXPORT(0x005b4a40, d_005b4a40::f_005b4a40);

// f_005b4c78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b4c78 {

inline constexpr guest::Function<0x006a694c, u32(u32, u32, u32, u32)> call_006a694c;  // (from the original)

u32 f_005b4c78(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    call_006a694c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(0x957320u + 8u) = u32(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0x957320u;  // (from the original)
    return 0u;
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
    u32 r1_1 = 0;
    *gptr<u32>(r0 + (arg0->word_60 << 2) + 0x64u) = u32(r1);  // (from the original)
    r1_1 = arg0->word_60 + 1u;
    arg0->word_60 = u32(r1_1);
    guest::cpu()->r[1] = r1_1;
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

inline guest::global<u8, 0x00957323> global_00957323;  // (from the original)
inline constexpr guest::Function<0x005b5b78, u32(u32, u32, u32, u32)> call_005b5b78;  // (from the original)

u32 f_005b4d04(gptr<Object_005b4d04_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r0_1 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    if (u32(*global_00957323) < 0xa5u) {  // (from the original)
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    ea_1 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0_1);
    ea_2 = r13 + 4u;
    *gptr<u32>(ea_2) = u32(r1);
    *gptr<u32>(ea_2 + 4) = u32(r2);
    *gptr<u32>(ea_2 + 8) = u32(r3);
    r3_1 = r0 + 0x34u;  // (from the original)
    r2_1 = r0 + 0x28u;  // (from the original)
    *gptr<u32>(r13) = u32(arg0->word_3c);
    r1_1 = u32(arg0->byte_24);
    guest::cpu()->r[13] = r13;
    r0_2 = call_005b5b78(r0, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    *gptr<u8>(r0 + 0x24u) = u8(0xa5u);  // (from the original)
    *gptr<u32>(r0 + 0x3cu) = u32(0u);  // (from the original)
    *gptr<u8>(r0 + 0x40u) = u8(0u);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = 0xa5u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return 1u;
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
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r1_5 = 0;
    u32 r1_6 = 0;
    u32 r1_7 = 0;
    u32 r1_8 = 0;
    r2_1 = ~0u;
    if (arg0->word_64 == r1) {
        r1_1 = r0 + (arg0->word_60 << 2);
        arg0->word_64 = u32(*gptr<u32>(r1_1 + 0x60u));  // (from the original)
        *gptr<u32>(r1_1 + 0x60u) = u32(r2_1);  // (from the original)
        r1_2 = arg0->word_60 - 1u;
        arg0->word_60 = u32(r1_2);
        guest::cpu()->r[1] = r1_2;
        return;
    }
    if (arg0->word_68 == r1) {
        r1_3 = r0 + (arg0->word_60 << 2);
        arg0->word_68 = u32(*gptr<u32>(r1_3 + 0x60u));  // (from the original)
        *gptr<u32>(r1_3 + 0x60u) = u32(r2_1);  // (from the original)
        r1_4 = arg0->word_60 - 1u;
        arg0->word_60 = u32(r1_4);
        guest::cpu()->r[1] = r1_4;
        return;
    }
    if (arg0->word_6c == r1) {
        r1_5 = r0 + (arg0->word_60 << 2);
        arg0->word_6c = u32(*gptr<u32>(r1_5 + 0x60u));  // (from the original)
        *gptr<u32>(r1_5 + 0x60u) = u32(r2_1);  // (from the original)
        r1_6 = arg0->word_60 - 1u;
        arg0->word_60 = u32(r1_6);
        guest::cpu()->r[1] = r1_6;
        return;
    }
    if (arg0->word_70 != r1) {
        guest::cpu()->r[1] = r1;
        return;
    }
    r1_7 = r0 + (arg0->word_60 << 2);
    arg0->word_70 = u32(*gptr<u32>(r1_7 + 0x60u));  // (from the original)
    *gptr<u32>(r1_7 + 0x60u) = u32(r2_1);  // (from the original)
    r1_8 = arg0->word_60 - 1u;
    arg0->word_60 = u32(r1_8);
    guest::cpu()->r[1] = r1_8;
    return;
}

}  // namespace d_005b4eb0
GUEST_EXPORT(0x005b4eb0, d_005b4eb0::f_005b4eb0);

// f_005b522c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b522c {

inline guest::global<u8, 0x00957322> global_00957322;  // (from the original)
inline constexpr guest::Function<0x005b6378, u32(u32, u32, u32, u32)> call_005b6378;  // (from the original)

u32 f_005b522c(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r2_1 = 0;
    u32 r12_1 = 0;
    u32 r1_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    ea_1 = r13 + 0x18u;  // (from the original)
    r2_1 = *gptr<u32>(ea_1);
    r12_1 = *gptr<u32>(ea_1 + 4);
    r1_1 = u32(*global_00957322);
    ea_2 = r13;
    *gptr<u32>(ea_2) = u32(r3);
    ea_3 = r13 + 4u;
    *gptr<u32>(ea_3) = u32(r2_1);
    *gptr<u32>(ea_3 + 4) = u32(r12_1);
    guest::cpu()->r[13] = r13;
    call_005b6378(guest::cpu()->r[0], r1_1, r1, r2);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
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

inline guest::global<u8, 0x00957323> global_00957323;  // (from the original)
inline constexpr guest::Function<0x005b4d7c, u32(u32, u32, u32, u32)> call_005b4d7c;  // (from the original)

u32 f_005b5b78(gptr<Object_005b5b78_0> arg0, u32 r1_unused, gptr<Float3> arg2, gptr<Object_005b5b78_3> arg3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r5_1 = 0;
    u32 r12_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    u32 r0_2 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r0_1 = r13 + 0x24u;  // (from the original)
    r5_1 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r12_1 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    S0_1 = std::bit_cast<float>(*gptr<u32>(r13 + 0x18u));  // (from the original)
    S1_1 = std::bit_cast<float>(*gptr<u32>(r0_1));
    S2_1 = std::bit_cast<float>(*gptr<u32>(r0_1 + 4));
    if (u32(*global_00957323) < 0xa5u) {  // (from the original)
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 0u;
    }
    arg0->word_48 = u32(std::bit_cast<u32>(arg2->v[0]));
    S3_1 = arg2->v[1];
    arg0->word_4c = u32(std::bit_cast<u32>(S3_1));
    arg0->word_50 = u32(std::bit_cast<u32>(arg2->v[2]));
    arg0->half_54 = u16(u32(arg3->half_0));
    arg0->half_56 = u16(u32(arg3->half_2));
    arg0->half_58 = u16(u32(arg3->half_4));
    arg0->word_5c = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S1_1));
    *gptr<u32>(r13 + 4) = u32(std::bit_cast<u32>(S2_1));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    r0_2 = call_005b4d7c(r0, guest::cpu()->r[1], r12_1, r5_1);
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    if (r0_2 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        return r0_2;
    }
    *gptr<u8>(r0 + 0x44u) = u8(0u);  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return 1u;
}

}  // namespace d_005b5b78
GUEST_EXPORT(0x005b5b78, d_005b5b78::f_005b5b78);

// f_005b5d38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b5d38 {

inline constexpr guest::Function<0x005b5d60, u32(u32, u32, u32, u32)> call_005b5d60;  // (from the original)

u32 f_005b5d38(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r12_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S4_1 = 0;
    float S5_1 = 0;
    float S6_1 = 0;
    float S7_1 = 0;
    float S8_1 = 0;
    float S9_1 = 0;
    float S10_1 = 0;
    float S11_1 = 0;
    u32 ea_1 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    r13 = r13 - 0x40u;  // (from the original)
    r12_1 = r13 + 0x40u;  // (from the original)
    S0_1 = std::bit_cast<float>(*gptr<u32>(r12_1));
    S1_1 = std::bit_cast<float>(*gptr<u32>(r12_1 + 4));
    S2_1 = std::bit_cast<float>(*gptr<u32>(r12_1 + 8));
    S3_1 = std::bit_cast<float>(*gptr<u32>(r12_1 + 0xc));  // (from the original)
    S4_1 = std::bit_cast<float>(*gptr<u32>(r12_1 + 0x10));  // (from the original)
    S5_1 = std::bit_cast<float>(*gptr<u32>(r12_1 + 0x14));  // (from the original)
    S6_1 = std::bit_cast<float>(*gptr<u32>(r12_1 + 0x18));  // (from the original)
    S7_1 = std::bit_cast<float>(*gptr<u32>(r12_1 + 0x1c));  // (from the original)
    S8_1 = std::bit_cast<float>(*gptr<u32>(r12_1 + 0x20));  // (from the original)
    S9_1 = std::bit_cast<float>(*gptr<u32>(r12_1 + 0x24));  // (from the original)
    S10_1 = std::bit_cast<float>(*gptr<u32>(r12_1 + 0x28));  // (from the original)
    S11_1 = std::bit_cast<float>(*gptr<u32>(r12_1 + 0x2c));  // (from the original)
    ea_1 = r13 + 8u;
    *gptr<u32>(ea_1) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(ea_1 + 4) = u32(std::bit_cast<u32>(S1_1));
    *gptr<u32>(ea_1 + 8) = u32(std::bit_cast<u32>(S2_1));
    *gptr<u32>(ea_1 + 0xc) = u32(std::bit_cast<u32>(S3_1));  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(std::bit_cast<u32>(S4_1));  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(std::bit_cast<u32>(S5_1));  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(std::bit_cast<u32>(S6_1));  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(std::bit_cast<u32>(S7_1));  // (from the original)
    *gptr<u32>(ea_1 + 0x20) = u32(std::bit_cast<u32>(S8_1));  // (from the original)
    *gptr<u32>(ea_1 + 0x24) = u32(std::bit_cast<u32>(S9_1));  // (from the original)
    *gptr<u32>(ea_1 + 0x28) = u32(std::bit_cast<u32>(S10_1));  // (from the original)
    *gptr<u32>(ea_1 + 0x2c) = u32(std::bit_cast<u32>(S11_1));  // (from the original)
    *gptr<u32>(r13) = u32(r2);
    *gptr<u32>(r13 + 4) = u32(r3);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    guest::cpu()->s[6] = S6_1;
    guest::cpu()->s[7] = S7_1;
    guest::cpu()->s[8] = S8_1;
    guest::cpu()->s[9] = S9_1;
    guest::cpu()->s[10] = S10_1;
    guest::cpu()->s[11] = S11_1;
    call_005b5d60(guest::cpu()->r[0], guest::cpu()->r[1], r2, r3);
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return guest::cpu()->r[0];
}

}  // namespace d_005b5d38
GUEST_EXPORT(0x005b5d38, d_005b5d38::f_005b5d38);

// f_005b6a10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b6a10 {

inline constexpr guest::Function<0x0027ab40, u32(u32, u32, u32, u32)> call_0027ab40;  // (from the original)
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> call_002ff8b0;  // (from the original)

u32 f_005b6a10(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0_1 = call_002ff8b0(4u, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r0_2 = call_0027ab40(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r0 = 0u;
    r1 = 0x889c80u + (r0_1 + (r0_1 << 1) << 1);  // (from the original)
L_5b6a40:;
    if (u32(*gptr<u8>(r1 + r0)) != r4) {
        if (u32(*gptr<u8>(r1 + r0 + 1u)) != r4) {
            goto L_5b6a64;
        }
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 1u;
L_5b6a64:;
    r0 = r0 + 2u;
    if (s32(r0) < s32(6u)) {
        guest::preempt();
        goto L_5b6a40;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_005b6a10
GUEST_EXPORT(0x005b6a10, d_005b6a10::f_005b6a10);

// f_005b7418: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b7418 {

struct __attribute__((packed)) Object_005b7418_0 {
    u8 unknown_0[0x19764];  // (not used here)
    u8 byte_19764;
};
GUEST_OFFSET(Object_005b7418_0, byte_19764, 0x19764);  // (from the original)


u32 f_005b7418(gptr<Object_005b7418_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    r0_1 = r0 + 0x19764u;  // (from the original)
    arg0->byte_19764 = u8(r1);
    return r0_1;
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
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 vf_1 = 0;
    r0_1 = r0 + 0x2510u;  // (from the original)
    r2_1 = arg0->word_2510;
    if (r1 >> 0x1f != (r1 & (r1 ^ r1)) >> 0x1f) {  // (from the original)
        r1 = 1u;
    }
    r3_1 = r1 + (r2_1 << 0x12 >> 0x1d);  // (from the original)
    res_1 = r3_1 - 7u;
    nf_1 = res_1 >> 0x1f;  // (from the original)
    vf_1 = ((r3_1 ^ 7u) & (r3_1 ^ res_1)) >> 0x1f;  // (from the original)
    if (nf_1 != vf_1) {
        r2_1 = ror32(r2_1, 0xe);  // (from the original)
        r1 = ror32(r2_1 + (r1 << 0x1d), 0x12);  // (from the original)
    }
    if (nf_1 == vf_1) {
        r1 = r2_1 | 0x3800u;  // (from the original)
    }
    arg0->word_2510 = u32(r1);
    guest::cpu()->r[1] = r1;
    return r0_1;
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
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    r0_1 = r0 + 0x2510u;  // (from the original)
    r1_1 = arg0->word_2510 & ~0x600u;  // (from the original)
    arg0->word_2510 = u32(r1_1);
    guest::cpu()->r[1] = r1_1;
    return r0_1;
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
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    r0_1 = r0 + 0x2510u;  // (from the original)
    zf_1 = r1 == 0;
    r1_1 = arg0->word_2510;
    if (zf_1) {
        r1_2 = r1_1 & ~0x8000u;  // (from the original)
    } else {
        r1_2 = r1_1 | 0x8000u;  // (from the original)
    }
    arg0->word_2510 = u32(r1_2);
    guest::cpu()->r[1] = r1_2;
    return r0_1;
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
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    r0_1 = r0 + 0x2510u;  // (from the original)
    r1_1 = arg0->word_2510 & ~0x78u;  // (from the original)
    arg0->word_2510 = u32(r1_1);
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_005b81fc
GUEST_EXPORT(0x005b81fc, d_005b81fc::f_005b81fc);

// f_005b9644: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b9644 {


u32 f_005b9644(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    r3 = 0x88f364u;  // (from the original)
    r2 = 0u;
    guest::cpu()->r[13] -= 4u;
    do {
L_5b9650:;
        if (!(s32(r1) >= s32(*gptr<u32>(r3 + (r2 << 2))))) {
            r2_1 = r2 & 0xffu;  // (from the original)
            if (r2_1 >= 0xcu) {  // (from the original)
                guest::cpu()->r[13] += 4u;
                guest::cpu()->r[1] = r1;
                return 0u;
            }
            r1_1 = r1 - *gptr<u32>(0x88f334u + (r2_1 << 2));  // (from the original)
            *gptr<u32>(r0) = u32(r1_1);
            guest::cpu()->r[13] += 4u;
            guest::cpu()->r[1] = r1_1;
            return 1u;
        }
        r2 = r2 + 1u;
        guest::preempt();
    } while (s32(r2) < s32(0xcu));  // (from the original)
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_005b9644
GUEST_EXPORT(0x005b9644, d_005b9644::f_005b9644);

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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r4_1 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_5 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r0_9 = 0;
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_10 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r2_8 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    r13 = r13 - 0x2a0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fae84(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fb310(r0_1, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r4_1 = r0_2 + 4u;
    r1_2 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_00118c9c(r4_1, r1_2, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_4 = call_003058c8(r4_1, r0_3, r2_3, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        goto L_5b9780;
    }
    r0_5 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_002ff368(r0_5, r1_3, r2_4, r3_4);
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_6 = r13 + 0x288u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_7 = call_002fc934(r0_6, 0x95bfdcu, r2_5, r3_5);  // (from the original)
    *gptr<u32>(r13) = u32(r0_7);
    *gptr<u32>(r13 + 4) = u32(~0u);
    r1_4 = u32(*gptr<u16>(r0_4 + 0x2cu));  // (from the original)
    r0_8 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_0030d1bc(r0_8, r1_4, r1, 0u);
    r1_5 = r13 + 8u;
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4u) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_9 = call_0030da04(r0_4, r1_5, r1, 6u);
    r1_6 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if (r0_9 != 0) {
        goto L_5b9778;
    }
    guest::cpu()->r[13] = r13;
    r0_10 = call_002fae84(r0_9, r1_6, r2_6, r3_6);
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_11 = r0_10 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_12 = call_0030dc84(r0_11, r1, r2_7, r3_7);
    r1_6 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if (r0_12 == 0) {
        goto L_5b9778;
    }
    *gptr<u32>(r13) = u32(0u);
    r2_8 = u32(*gptr<u16>(r0_4 + 0x2cu));  // (from the original)
    r0_13 = r0_12 + 0x8ebeu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030dad8(r0_13, 0u, r2_8, 0u);
    r1_6 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
L_5b9778:;
    r0_14 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_002f77e8(r0_14, r1_6, r2_6, r3_6);
    r1_3 = guest::cpu()->r[1];
L_5b9780:;
    *gptr<u8>(r0 + 9u) = u8(9u);
    r13 = r13 + 0x2a0u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return 9u;
}

}  // namespace d_005b96a8
GUEST_EXPORT(0x005b96a8, d_005b96a8::f_005b96a8);

// f_005b9ee0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b9ee0 {

inline constexpr guest::Function<0x0010cadd, u32(u32, u32, u32, u32)> call_0010cadc;  // (from the original)
inline constexpr guest::Function<0x00112f9d, u32(u32, u32, u32, u32)> call_00112f9c;  // (from the original)
inline constexpr guest::Function<0x002c002c, u32(u32, u32, u32, u32)> call_002c002c;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb7e8, u32(u32, u32, u32, u32)> call_002fb7e8;  // (from the original)
inline constexpr guest::Function<0x005ba098, u32(u32, u32, u32, u32)> call_005ba098;  // (from the original)
inline constexpr guest::Function<0x0071dcdc, u32(u32, u32, u32, u32)> call_0071dcdc;  // (from the original)
inline constexpr guest::Function<0x00756758, u32(u32, u32, u32, u32)> call_00756758;  // (from the original)

u32 f_005b9ee0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 zf_1 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r1_5 = 0;
    u32 r0_7 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r5 = r0;
    r4 = ~0u;
    r0_1 = call_002fae84(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = call_002fb310(r0_1, r1_1, r2_1, r3_1);
    r3 = guest::cpu()->r[3];
    r6 = r0_2 + 4u;
    r1 = r0_2 + 0x1744cu;  // (from the original)
    r0 = 0u;
L_5b9f04:;
    r2_2 = r1 + (r0 << 7);
    zf_1 = r2_2 == r5;
    if (!zf_1) {
        r3 = r2_2 + 0x40u;  // (from the original)
        zf_1 = r3 == r5;
    }
    if (zf_1) {
        r4 = r0;
    } else {
        r0 = r0 + 1u;
        if (s32(r0) < s32(4u)) {
            guest::preempt();
            goto L_5b9f04;
        }
    }
    r0_3 = call_002fae84(r0, r1, r2_2, r3);
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_4 = r0_3 + 0x20u;  // (from the original)
    r1_2 = r4 & 0xffu;  // (from the original)
    r0_5 = call_002fb7e8(r0_4, r1_2, r2_3, r3_2);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_5 == 0) {
        goto L_5ba010;
    }
    r1_3 = r5 + 0xcu;  // (from the original)
    r0_6 = call_0010cadc(r6, r1_3, r2, r3);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_6 != 0) {
        r1_5 = ~3u;
        r0_6 = call_00112f9c(r0_6, r1_5, r0_5, 1u);
        r1_4 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
    }
    r0_7 = call_002fb328(r0_6, r1_4, r2_4, r3_3);
    r2_5 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_8 = r0_7 + 0x406ecu;  // (from the original)
    r0_9 = call_00756758(r0_8, r5, r2_5, r3_4);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0_9;
    r6 = r0_5 + 0x7008u;  // (from the original)
    r4 = 0u;
L_5b9fa4:;
    r0_10 = call_0071dcdc(r6, r4, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_10 == 0) {
        goto L_5ba01c;
    }
    r0_11 = u32(*gptr<u8>(r0_10 + 0x272u));  // (from the original)
    if ((r0_11 & 0x80u) == 0) {  // (from the original)
        goto L_5ba01c;
    }
    if ((r0_11 & 0x20u) != 0) {  // (from the original)
        goto L_5ba01c;
    }
    if ((r0_11 & 7u) != r7) {
        goto L_5ba01c;
    }
    r1 = r4;
    if (r4 + 1u == 0) {
        goto L_5ba010;
    }
    r0_12 = call_002c002c(r6, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_12 == 0) {
        goto L_5ba010;
    }
    r1 = u32(*gptr<u8>(r0_12 + 0x272u));  // (from the original)
    if ((r1 & 0x80u) == 0) {  // (from the original)
        goto L_5ba010;
    }
    r1 = r1 | 0x28u;  // (from the original)
    *gptr<u8>(r0_12 + 0x272u) = u8(r1);  // (from the original)
L_5ba010:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return call_005ba098(r5, r1, r2, r3);
L_5ba01c:;
    r4 = r4 + 1u;
    if (r4 < 0xau) {  // (from the original)
        guest::preempt();
        goto L_5b9fa4;
    }
    guest::preempt();
    goto L_5ba010;
}

}  // namespace d_005b9ee0
GUEST_EXPORT(0x005b9ee0, d_005b9ee0::f_005b9ee0);

// f_005ba234: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ba234 {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002ff6f4, u32(u32, u32, u32, u32)> call_002ff6f4;  // (from the original)
inline constexpr guest::Function<0x00308efc, u32(u32, u32, u32, u32)> call_00308efc;  // (from the original)
inline constexpr guest::Function<0x005ba098, u32(u32, u32, u32, u32)> call_005ba098;  // (from the original)
inline constexpr guest::Function<0x005cddb4, u32(u32, u32, u32, u32)> call_005cddb4;  // (from the original)

u32 f_005ba234(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r0_4 = 0;
    u32 r1_5 = 0;
    u32 r2_3 = 0;
    u32 r0_5 = 0;
    u32 r1_6 = 0;
    u32 r0_6 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_005ba098(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fb378(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = *gptr<u32>(r0_2);
    r2_2 = *gptr<u32>(r0_2 + 4);
    *gptr<u32>(r13 + 8u) = u32(*gptr<u32>(r0_2 + 8u));
    r0_3 = r13;
    *gptr<u32>(r13) = u32(r1_2);
    *gptr<u32>(r13 + 4) = u32(r2_2);
    guest::cpu()->r[13] = r13;
    call_00308efc(r0_3, r1_2, r2_2, guest::cpu()->r[3]);
    *gptr<u8>(r0 + 8u) = u8(3u);
    *gptr<u8>(r0 + 9u) = u8(0u);
    r1_3 = r13;
    guest::cpu()->r[13] = r13;
    call_005cddb4(r0, r1_3, 3u, guest::cpu()->r[3]);
    *gptr<u8>(r0 + 0xau) = u8(7u);  // (from the original)
    r1_4 = *gptr<u32>(0x1028u + r1);  // (from the original)
    r0_4 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f8574(r0_4, r1_4, 0x2fu, guest::cpu()->r[3]);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_5 = call_002ff6f4(3u, r1_5, r2_3, guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    if (r0_5 == 0) {
        r0_6 = 0xeu;  // (from the original)
        *gptr<u8>(r0 + 0x3eu) = u8(r0_6);  // (from the original)
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_6;
        guest::cpu()->r[13] = r13;
        return r0_6;
    }
    if (r0_5 == 1u) {
        r0_6 = 0x15u;  // (from the original)
    } else {
        r0_6 = 0x1eu;  // (from the original)
    }
    *gptr<u8>(r0 + 0x3eu) = u8(r0_6);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    return r0_6;
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
    u32 r1_1 = 0;
    r1_1 = u32(arg0->byte_9);
    if (r1_1 == 4u) {
        r1_1 = 5u;
        arg0->byte_9 = u8(r1_1);
    }
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_005ba980
GUEST_EXPORT(0x005ba980, d_005ba980::f_005ba980);

// f_005bb220: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bb220 {

inline constexpr guest::Function<0x005ba098, u32(u32, u32, u32, u32)> call_005ba098;  // (from the original)

u32 f_005bb220(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = 0u;
    r5 = r0 + (r1 << 7);
    do {
L_5bb22c:;
        r0_1 = r5 + (r4 << 6);
        r0_2 = call_005ba098(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(2u));
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0_2;
}

}  // namespace d_005bb220
GUEST_EXPORT(0x005bb220, d_005bb220::f_005bb220);

// f_005bb244: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bb244 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x00309fbc, u32(u32, u32, u32, u32)> call_00309fbc;  // (from the original)

u32 f_005bb244(u32 r0, u32 r1, u32 r2) {
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4_1 = r0;
    r0_1 = call_002fb328(r0, r1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    r0_2 = r0_1 + 0xa0u;  // (from the original)
    r0_3 = call_00309fbc(r0_2, r1, r2_1, guest::cpu()->r[3]);
    r1 = r0_3;
    if (r0_3 >= 4u) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    } else {
        r0 = 0u;
        r1 = r4_1 + (r1 << 7);
    }
    do {
L_5bb274:;
        if (!(u32(*gptr<u8>(r1 + (r0 << 6) + 8u)) < 0x21u)) {  // (from the original)
            r0_4 = r1 + (r0 << 6);
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0_4;
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (s32(r0) < s32(2u));
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_005bb244
GUEST_EXPORT(0x005bb244, d_005bb244::f_005bb244);

// f_005bb39c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bb39c {

inline constexpr guest::Function<0x002c002c, u32(u32, u32, u32, u32)> call_002c002c;  // (from the original)
inline constexpr guest::Function<0x002c003c, u32(u32, u32, u32, u32)> call_002c003c;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)

u32 f_005bb39c(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r7_1 = 0;
    u32 r2_2 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r0_3 = 0;
    u32 r2_4 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r0_1 = call_002fb94c(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_1 == 0) {
        goto L_5bb428;
    }
    r7_1 = r0_1 + 0x7008u;  // (from the original)
    r0_1 = call_002c002c(r7_1, r0, r2_1, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r4_1 = r0_1;
    if (r0_1 == 0) {
        goto L_5bb428;
    }
    r0_1 = u32(*gptr<u8>(r4_1 + 0x272u));  // (from the original)
    if ((r0_1 & 0x80u) == 0) {  // (from the original)
        goto L_5bb428;
    }
    r0_2 = call_002fae84(r0_1, r1_1, r2_2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r0_3 = call_002fb310(r0_2, r1_2, r2_3, guest::cpu()->r[3]);
    r2_4 = guest::cpu()->r[2];
    r0_4 = r0_3 + 0x1744cu;  // (from the original)
    r1_3 = u32(*gptr<u8>(r4_1 + 0x272u)) & 7u;  // (from the original)
    if (r1_3 < 8u) {
        r2_4 = r1_3 >> 1;
        r0_4 = r0_4 + (r2_4 << 7) + ((r1_3 & 1u) << 6);
    }
    *gptr<u8>(r0_4 + 0x3cu) = u8(r1);  // (from the original)
    *gptr<u8>(r0_4 + 0x3du) = u8(r2);  // (from the original)
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return call_002c003c(r7_1, r0, r2_4, guest::cpu()->r[3]);
L_5bb428:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
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
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 zf_1 = 0;
    u32 r0_5 = 0;
    u32 ea_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_8 = 0;
    u32 ea_2 = 0;
    u32 r1_5 = 0;
    u32 r2_4 = 0;
    u32 ea_3 = 0;
    u32 r0_9 = 0;
    u32 r1_6 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    u32 r1_7 = 0;
    u32 zf_2 = 0;
    u32 r6_1 = 0;
    u32 r0_10 = 0;
    u32 r2_6 = 0;
    u32 r3_5 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_8 = 0;
    u32 r2_7 = 0;
    u32 r3_6 = 0;
    u32 r1_9 = 0;
    u32 r0_13 = 0;
    u32 r1_10 = 0;
    r13 = r13 - 0x38u;  // (from the original)
    r0_1 = u32(arg0->byte_272);
    if ((r0_1 & 0x20u) != 0) {  // (from the original)
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fae84(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fb310(r0_2, r1_1, r2_1, r3_1);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = u32(*gptr<u8>(r0 + 0x272u));  // (from the original)
    r7 = r0_3 + 4u;
    r6 = r0_3 + 0x1744cu;  // (from the original)
    r0_4 = r1 & 7u;
    r4 = r6;
    if (r0_4 < 8u) {
        r2 = r6 + (r0_4 >> 1 << 7);
        r4 = r2 + ((r0_4 & 1u) << 6);
    }
    zf_1 = (r1 & 8u) == 0;
    if (!zf_1) {
        zf_1 = (r1 & 0x20u) == 0;  // (from the original)
    }
    if (!zf_1) {
        goto L_5bb4fc;
    }
    r0_1 = u32(*gptr<u8>(r4 + 9u));
    if (s32(r0_1) < s32(3u)) {
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    if (s32(r0_1) >= s32(9u)) {
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    if (s32(r0_1) >= s32(4u)) {
        goto L_5bb4fc;
    }
    r0_5 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fb430(r0_5, r4, r2, r3);
    ea_1 = r13 + 0x14u;  // (from the original)
    r1_2 = *gptr<u32>(ea_1 + 4);
    r2_2 = *gptr<u32>(ea_1 + 8);
    r3_2 = r13 + 8u;
    *gptr<u32>(r3_2) = u32(*gptr<u32>(ea_1));
    *gptr<u32>(r3_2 + 4) = u32(r1_2);
    *gptr<u32>(r3_2 + 8) = u32(r2_2);
    r0_6 = r13 + 8u;
    r1_3 = u32(s32(s8(*gptr<u8>(r4 + 0x3eu))));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_7 = call_003014b4(r0_6, r1_3, r2_2, r3_2);
    r1_4 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_8 = call_002fb378(r0_7, r1_4, r2_3, r3_3);
    ea_2 = r13 + 0xcu;  // (from the original)
    r1_5 = *gptr<u32>(ea_2);
    r2_4 = *gptr<u32>(ea_2 + 4);
    ea_3 = r13;
    *gptr<u32>(ea_3) = u32(r1_5);
    *gptr<u32>(ea_3 + 4) = u32(r2_4);
    r0_9 = *gptr<u32>(r0_8);
    r1_6 = *gptr<u32>(r0_8 + 4);
    r2_5 = *gptr<u32>(r0_8 + 8);
    r3_4 = *gptr<u32>(r13 + 8u);
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fd41c(r0_9, r1_6, r2_5, r3_4);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
L_5bb4fc:;
    r5 = ~0u;
    r0 = 0u;
L_5bb504:;
    r1_7 = r6 + (r0 << 7);
    zf_2 = r1_7 == r4;
    if (!zf_2) {
        r2 = r1_7 + 0x40u;  // (from the original)
        zf_2 = r2 == r4;
    }
    if (zf_2) {
        r5 = r0;
    } else {
        r0 = r0 + 1u;
        if (s32(r0) < s32(4u)) {
            guest::preempt();
            goto L_5bb504;
        }
    }
    r6_1 = *gptr<u32>(0xaaef18u + 0x234u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_002fb328(0xaaef18u, r1_7, r2, r3);  // (from the original)
    r2_6 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_11 = r0_10 + 0xa0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_12 = call_00309fbc(r0_11, r6_1, r2_6, r3_5);
    r1_8 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if (r0_12 != r5) {
        goto L_5bb578;
    }
    r1_9 = r4 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_13 = call_0010cadc(r7, r1_9, r2_7, r3_6);
    r1_8 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if (r0_13 == 0) {
        goto L_5bb578;
    }
    r1_10 = ~3u;
    guest::cpu()->r[13] = r13;
    call_00112f9c(r0_13, r1_10, 0u, 1u);
    r1_8 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
L_5bb578:;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_005ba098(r4, r1_8, r2_7, r3_6);
}

}  // namespace d_005bb42c
GUEST_EXPORT(0x005bb42c, d_005bb42c::f_005bb42c);

// f_005bb66c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bb66c {

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x006bacd8, u32(u32, u32, u32, u32)> call_006bacd8;  // (from the original)

u32 f_005bb66c(u32 r0_unused, u32 r1) {
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    call_002fcbb0(guest::cpu()->r[0], 0x341cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = u32(*gptr<u8>(r1 + 0x272u));  // (from the original)
    guest::cpu()->r[13] += 8u;
    r1_2 = r1_1 & 7u;
    return call_006bacd8(guest::cpu()->r[0], r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
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
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r4_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_3 = 0;
    u32 r0_8 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r0_1 = call_002fae84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_2 = call_002fb310(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r4_1 = r0_2 + 0x1744cu;  // (from the original)
    r0_3 = call_002fcb84(r0, 0x341cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        goto L_5bb6e4;
    }
    r0_4 = call_002fb94c(r0_3, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_4 == 0) {
        goto L_5bb6e4;
    }
    r0_5 = r0_4 + 0x7008u;  // (from the original)
    r0_6 = call_0071dc9c(r0_5, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_6 >> 0x1f == (r0_6 & (r0_6 ^ r0_6)) >> 0x1f) {  // (from the original)
        goto L_5bb6ec;
    }
L_5bb6e4:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return 0u;
L_5bb6ec:;
    r0_7 = call_0076ad64(r0, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_7 < 8u) {
        r4_1 = r4_1 + (r0_7 >> 1 << 7) + ((r0_7 & 1u) << 6);
    }
    call_005b99b8(r4_1, r0_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    if (u32(*gptr<u8>(r4_1 + 9u)) == 6u) {
        *gptr<u8>(r4_1 + 9u) = u8(0xau);  // (from the original)
    } else {
        r0_8 = ~0u;
        *gptr<u8>(r4_1 + 0x3cu) = u8(r0_8);  // (from the original)
        *gptr<u8>(r4_1 + 0x3du) = u8(r0_8);  // (from the original)
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return 1u;
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
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 cf = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 ea_1 = 0;
    u32 r2_1 = 0;
    u32 r11_1 = 0;
    u32 r5_1 = 0;
    u32 r0_4 = 0;
    r13 = r13 - 0x58u;  // (from the original)
    r6 = 0u;
    r7 = ~0u;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb328(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    r8 = r0_1 + 0x292a4u;  // (from the original)
    r9 = r4;
    r10 = 1u;
L_5bb770:;
    guest::cpu()->r[13] = r13;
    r0_2 = call_003009a8(r8, r4, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0_2;
    if (r0_2 == 0) {
        goto L_5bb834;
    }
    if (u32(*gptr<u8>(0x250eu + r5)) != 0) {  // (from the original)
        goto L_5bb834;
    }
    r0_3 = r13 + 0x20u;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r9);
    *gptr<u32>(r13) = u32(r10);
    *gptr<u32>(r13 + 8u) = u32(r9);
    guest::cpu()->r[13] = r13;
    call_0030e80c(r0_3, r8, r5, 2u);
    r3 = 1u;
    ea_1 = r13 + 0x20u;  // (from the original)
    r2_1 = *gptr<u32>(ea_1 + 4);
    r1 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r1) = u32(*gptr<u32>(ea_1));
    *gptr<u32>(r1 + 4) = u32(r2_1);
    r2 = 0u;
    r0 = r2;
    goto L_5bb7e0;
L_5bb7d8:;
    if (cf) {
        goto L_5bb7f8;
    }
L_5bb7e0:;
    r11_1 = u32(*gptr<u8>(r1 + (r0 >> 3)));
    if ((lsr_r(r11_1, r0 & 7u) & 1u) == r3) {
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
    r5_1 = r5 + 0x250fu;  // (from the original)
    if (u32(*gptr<u8>(r5_1)) != 0) {
        goto L_5bb834;
    }
    r6 = r6 + 1u;
    guest::cpu()->r[13] = r13;
    r0_4 = call_002ff6f4(r6, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        r7 = r4;
    }
L_5bb834:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_5bb770;
    }
    r13 = r13 + 0x58u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r7;
}

}  // namespace d_005bb748
GUEST_EXPORT(0x005bb748, d_005bb748::f_005bb748);

// f_005bb9f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bb9f0 {

inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> call_00303cdc;  // (from the original)
inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> call_005cdf48;  // (from the original)

u32 f_005bb9f0(u32 r0) {
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r2_1 = ~0u;
    r3_1 = ~0x80000000u;  // (from the original)
    call_005cdf48(r0, guest::cpu()->r[1], r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u8>(r0 + 8u) = u8(0x21u);  // (from the original)
    call_00303cdc(r0, guest::cpu()->r[1], r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    *gptr<u8>(r0 + 9u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r0 + 0xau) = u8(9u);  // (from the original)
    *gptr<u8>(r0 + 8u) = u8(0x21u);  // (from the original)
    call_00303cdc(r0, guest::cpu()->r[1], r2_3, r3_3);
    *gptr<u8>(r0 + 9u) = u8(0xffu);  // (from the original)
    r0_1 = ~0u;
    *gptr<u8>(r0 + 0xau) = u8(9u);  // (from the original)
    *gptr<u8>(r0 + 0xbu) = u8(r0_1);  // (from the original)
    *gptr<u8>(r0 + 0xcu) = u8(r0_1);  // (from the original)
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
    u32 r1_1 = 0;
    if (r1 >= 3u) {
        guest::cpu()->r[1] = r1;
        return;
    }
    r1_1 = u32(arg0->byte_5b) | lsl_r(1u, r1 & 0xff);  // (from the original)
    arg0->byte_5b = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
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
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    arg0->byte_8 = u8(0x21u);  // (from the original)
    call_00303cdc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r0 + 9u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r0 + 0xau) = u8(9u);  // (from the original)
    r0_1 = call_002fb378(9u, 0xffu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_005cddb4(r0, r0_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    *gptr<u8>(r0 + 8u) = u8(0x21u);  // (from the original)
    *gptr<u8>(r0 + 0xbu) = u8(0xffu);  // (from the original)
    *gptr<u8>(r0 + 9u) = u8(2u);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return 2u;
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
    u32 res_1 = 0;
    u32 r1_1 = 0;
    u32 zf_1 = 0;
    u32 zf_2 = 0;
    r1 = r1 + u32(s32(s8(arg0->byte_a8)));
    res_1 = r1 + 4u;
    if (res_1 >> 0x1f != ((r1 ^ res_1) & (4u ^ res_1)) >> 0x1f) {  // (from the original)
        r1_1 = ~3u;
        arg0->byte_a8 = u8(r1_1);
        guest::cpu()->r[1] = r1_1;
        return;
    }
    zf_1 = r2 == 3u;
    if (!zf_1) {
        zf_1 = r2 == 6u;
    }
    if (zf_1) {
        goto L_5bcae8;
    }
    zf_2 = r2 == 9u;
    if (!zf_2) {
        zf_2 = r2 == 0xbu;  // (from the original)
    }
    if (zf_2) {
        goto L_5bcae8;
    } else {
        r2 = 0x28u;  // (from the original)
    }
L_5bcad8:;
    if (s32(r1) > s32(r2)) {
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
    u32 r1_1 = 0;
    r1_1 = u32(arg0->byte_a9) + 1u & 0xffu;  // (from the original)
    arg0->byte_a9 = u8(r1_1);
    if (r1_1 < 3u) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    arg0->byte_a7 = u8(1u);
    arg0->byte_a9 = u8(3u);
    guest::cpu()->r[1] = 3u;
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
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    arg0->byte_8 = u8(0x21u);  // (from the original)
    call_00303cdc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r0 + 9u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r0 + 0xau) = u8(9u);  // (from the original)
    r0_1 = call_002fb378(9u, 0xffu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_005cddb4(r0, r0_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_005bce04(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    *gptr<u8>(r0 + 9u) = u8(4u);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return 4u;
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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 res_1 = 0;
    u32 r0_2 = 0;
    u32 res_2 = 0;
    u32 res_3 = 0;
    u32 r5_1 = 0;
    u32 cf_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 zf_1 = 0;
    u32 r0_6 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r3_5 = 0;
    u32 r1_2 = 0;
    u32 r2_5 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb328(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    res_1 = r0_1 + 0x6ad82u;  // (from the original)
    if (res_1 == 0) {
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    if (u32(*gptr<u8>(res_1)) < 2u) {
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    if (r0 == 0) {
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_2 = u32(*gptr<u8>(0x570cu + r0));  // (from the original)
    res_2 = r0_2 << 0x19;  // (from the original)
    r1_1 = res_2;
    if (!(res_2 >> 0x1f)) {  // (from the original)
        res_3 = r0_2 >> 7;
        if (res_3 == 0) {
            r13 = r13 + 0x28u;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->r[13] = r13;
            return 0u;
        }
    }
    r5_1 = r0 + 0x8e08u;  // (from the original)
    cf_1 = u32(*gptr<u8>(r5_1 + 8u)) >= 0x21u;  // (from the original)
    if (!cf_1) {
        cf_1 = u32(*gptr<u8>(r5_1 + 9u)) >= 3u;
    }
    if (!cf_1) {
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_3 = r0 + 0x6bd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_007241b0(r0_3, r1_1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_4 >> 0x1f != (r0_4 & (r0_4 ^ r0_4)) >> 0x1f) {  // (from the original)
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    guest::cpu()->r[13] = r13;
    r0_5 = call_002fb338(r5_1, r1_1, r2_2, r3_2);
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    zf_1 = r0_5 == 0;
    if (!zf_1) {
        r0_5 = u32(*gptr<u8>(r5_1 + 9u));
        zf_1 = r0_5 == 4u;
    }
    if (!zf_1) {
        guest::cpu()->r[13] = r13;
        r0_6 = call_002fb378(r0_5, r1_1, r2_3, r3_3);
        r2_4 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        r0_7 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002fb430(r0_7, r5_1, r2_4, r3_4);
        r3_5 = r13 + 0xcu;  // (from the original)
        r1_2 = *gptr<u32>(r3_5 + 4);
        r2_5 = *gptr<u32>(r3_5 + 8);
        *gptr<u32>(r13) = u32(*gptr<u32>(r3_5));
        *gptr<u32>(r13 + 4) = u32(r1_2);
        *gptr<u32>(r13 + 8) = u32(r2_5);
        r0_8 = r13;
        guest::cpu()->r[13] = r13;
        r0_9 = call_002fd4b4(r0_8, r0_6, 1u, r3_5);
        r1_1 = guest::cpu()->r[1];
        if (r0_9 >> 0x1f != (r0_9 & (r0_9 ^ r0_9)) >> 0x1f) {  // (from the original)
            r0_9 = 0u - r0_9;
        }
        if (s32(r0_9) <= s32(3u)) {
            r13 = r13 + 0x28u;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->r[13] = r13;
            return 0u;
        }
    }
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return 1u;
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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r1_2 = 0;
    u32 r5_1 = 0;
    u32 r0_3 = 0;
    u32 zf_1 = 0;
    u32 r6_1 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r4_1 = 0;
    r13 = r13 - 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_005bce04(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_2 = call_0051d77c(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    r2_2 = guest::cpu()->r[2];
    ea_1 = r0 + 0xb4u;  // (from the original)
    *gptr<u8>(ea_1) = u8(r0_2);
    ea_2 = r2 + 0x1028u;  // (from the original)
    r1_2 = ea_2;
    r5_1 = *gptr<u32>(ea_2);
    r0_3 = *gptr<u32>(r1_2 + 4u);
    zf_1 = r0_3 == 0;
    if (!zf_1) {
        zf_1 = r5_1 == 0;
    }
    if (!zf_1) {
        r6_1 = u32(*gptr<u8>(r0_3 + 0x24u));  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_4 = call_002fb378(r0_3, r1_2, r2_2, guest::cpu()->r[3]);
        r2_3 = guest::cpu()->r[2];
        *gptr<u8>(r0 + 8u) = u8(r6_1);
        *gptr<u8>(r0 + 9u) = u8(0u);
        if (r0_4 != 0) {
            guest::cpu()->r[13] = r13;
            call_005cddb4(r0, r0_4, r2_3, guest::cpu()->r[3]);
            r2_3 = guest::cpu()->r[2];
        }
        *gptr<u8>(r0 + 0xau) = u8(3u);  // (from the original)
        r4_1 = r0 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0030f52c(r4_1, r5_1, r2_3, guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        r0_3 = u32(*gptr<u16>(r5_1 + 0x2cu));  // (from the original)
        *gptr<u16>(r4_1 + 0x16u) = u16(r0_3);  // (from the original)
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_005bcf24
GUEST_EXPORT(0x005bcf24, d_005bcf24::f_005bcf24);

// f_005bcfa0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bcfa0 {

struct __attribute__((packed)) Object_005bcfa0_1 {
    u8 unknown_0[0x1028];  // (not used here)
    u32 word_1028;
};
GUEST_OFFSET(Object_005bcfa0_1, word_1028, 0x1028);  // (from the original)

inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x0030f52c, u32(u32, u32, u32, u32)> call_0030f52c;  // (from the original)
inline constexpr guest::Function<0x0076c6d4, u32(u32, u32, u32, u32)> call_0076c6d4;  // (from the original)

u32 f_005bcfa0(u32 r0, gptr<Object_005bcfa0_1> arg1) {
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r6 = r1 + 0x1000u;  // (from the original)
    r5 = r0;
    r0_1 = arg1->word_1028;
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r0_1 = call_00301e20(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    } else {
        r4 = 0u;
    }
    do {
L_5bcfc8:;
        r0_2 = r5 + (r4 + (r4 << 1) << 3) + 0x24u;  // (from the original)
        r0_1 = call_0076c6d4(r0_2, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_1 == 0) {
            goto L_5bcff4;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 6u);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
L_5bcff4:;
    r0_3 = r4 + (r4 << 1);
    r4_1 = *gptr<u32>(r6 + 0x28u);  // (from the original)
    r5_1 = r5 + (r0_3 << 3) + 0x24u;  // (from the original)
    call_0030f52c(r5_1, r4_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_4 = u32(*gptr<u16>(r4_1 + 0x2cu));  // (from the original)
    *gptr<u16>(r5_1 + 0x16u) = u16(r0_4);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_4;
}

}  // namespace d_005bcfa0
GUEST_EXPORT(0x005bcfa0, d_005bcfa0::f_005bcfa0);

// f_005bd01c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bd01c {

inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> call_00303cdc;  // (from the original)
inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> call_005cdf48;  // (from the original)

u32 f_005bd01c(u32 r0, u32 r1) {
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r2_1 = ~0u;
    r3_1 = ~0x80000000u;  // (from the original)
    call_005cdf48(r0, r1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u8>(r0 + 8u) = u8(0x21u);  // (from the original)
    call_00303cdc(r0, r1_1, r2_2, r3_2);
    *gptr<u8>(r0 + 9u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r0 + 0xau) = u8(9u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0xffu;  // (from the original)
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
    u32 ea_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    u32 ea_7 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    u32 r10_1 = 0;
    u32 r11_1 = 0;
    u32 ea_8 = 0;
    u32 ea_9 = 0;
    u32 r4_2 = 0;
    u32 r5_2 = 0;
    u32 r6_2 = 0;
    u32 r7_2 = 0;
    u32 r8_2 = 0;
    u32 r9_2 = 0;
    u32 r10_2 = 0;
    u32 r11_2 = 0;
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
    ea_1 = r13 - 0x38;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r3);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r4);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x20) = u32(r8);  // (from the original)
    *gptr<u32>(ea_1 + 0x24) = u32(r9);  // (from the original)
    *gptr<u32>(ea_1 + 0x28) = u32(r10);  // (from the original)
    *gptr<u32>(ea_1 + 0x2c) = u32(r11);  // (from the original)
    *gptr<u32>(ea_1 + 0x30) = u32(r12);  // (from the original)
    *gptr<u32>(ea_1 + 0x34) = u32(r14);  // (from the original)
    r13 = r13 - 0x38;  // (from the original)
    arg0->byte_8 = u8(0x21u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00303cdc(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u8>(r0 + 9u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r0 + 0xau) = u8(9u);  // (from the original)
    *gptr<u16>(r0 + 0xcu) = u16(0u);  // (from the original)
    *gptr<u8>(r0 + 0xeu) = u8(6u);  // (from the original)
    *gptr<u8>(r0 + 0xfu) = u8(0xffu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb378(0xffu, 0xffu, r2_1, r3_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u8>(r0 + 8u) = u8(1u);
    *gptr<u8>(r0 + 9u) = u8(0u);
    if (r0_1 != 0) {
        guest::cpu()->r[13] = r13;
        call_005cddb4(r0, r0_1, r2_2, r3_2);
        r1_1 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
    }
    *gptr<u8>(r0 + 0xau) = u8(3u);  // (from the original)
    r0_2 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    *gptr<u8>(r0 + 0xeu) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0xfu) = u8(r0_2);  // (from the original)
    r0_3 = uxth(r2);
    if (r1 != 2u) {
        if (r1 != 5u) {
            goto L_5bd180;
        }
    } else {
        if (r2 < 5u) {
            goto L_5bd180;
        }
        goto L_5bd150;
    }
    if (r2 < 2u) {
        goto L_5bd180;
    }
L_5bd150:;
    *gptr<u8>(r0 + 8u) = u8(0x21u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00303cdc(r0, r1_1, r2_2, r3_2);
    ea_2 = r0 + 9u;
    *gptr<u8>(ea_2) = u8(0xffu);  // (from the original)
    ea_3 = r0 + 0xau;  // (from the original)
    *gptr<u8>(ea_3) = u8(9u);
    ea_4 = r0 + 0xcu;  // (from the original)
    *gptr<u16>(ea_4) = u16(0u);
    ea_5 = r0 + 0xeu;  // (from the original)
    *gptr<u8>(ea_5) = u8(6u);
    ea_6 = r0 + 0xfu;  // (from the original)
    *gptr<u8>(ea_6) = u8(0xffu);  // (from the original)
    r13 = r13 + 0x10u;  // (from the original)
    ea_7 = r13;
    r13 = r13 + 0x28;  // (from the original)
    r4_1 = *gptr<u32>(ea_7);
    r5_1 = *gptr<u32>(ea_7 + 4);
    r6_1 = *gptr<u32>(ea_7 + 8);
    r7_1 = *gptr<u32>(ea_7 + 0xc);  // (from the original)
    r8_1 = *gptr<u32>(ea_7 + 0x10);  // (from the original)
    r9_1 = *gptr<u32>(ea_7 + 0x14);  // (from the original)
    r10_1 = *gptr<u32>(ea_7 + 0x18);  // (from the original)
    r11_1 = *gptr<u32>(ea_7 + 0x1c);  // (from the original)
    guest::cpu()->r[1] = 9u;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
    guest::cpu()->r[13] = r13;
    return 0xffu;  // (from the original)
L_5bd180:;
    ea_8 = r0 + 0xcu;  // (from the original)
    *gptr<u16>(ea_8) = u16(r0_3);
    r13 = r13 + 0x10u;  // (from the original)
    ea_9 = r13;
    r13 = r13 + 0x28;  // (from the original)
    r4_2 = *gptr<u32>(ea_9);
    r5_2 = *gptr<u32>(ea_9 + 4);
    r6_2 = *gptr<u32>(ea_9 + 8);
    r7_2 = *gptr<u32>(ea_9 + 0xc);  // (from the original)
    r8_2 = *gptr<u32>(ea_9 + 0x10);  // (from the original)
    r9_2 = *gptr<u32>(ea_9 + 0x14);  // (from the original)
    r10_2 = *gptr<u32>(ea_9 + 0x18);  // (from the original)
    r11_2 = *gptr<u32>(ea_9 + 0x1c);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_2;
    guest::cpu()->r[9] = r9_2;
    guest::cpu()->r[10] = r10_2;
    guest::cpu()->r[11] = r11_2;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_005bd0a0
GUEST_EXPORT(0x005bd0a0, d_005bd0a0::f_005bd0a0);

// f_005bd234: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bd234 {

inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> call_00303cdc;  // (from the original)
inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> call_005cdf48;  // (from the original)

u32 f_005bd234(u32 r0, u32 r1) {
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r2_1 = ~0u;
    r3_1 = ~0x80000000u;  // (from the original)
    call_005cdf48(r0, r1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u8>(r0 + 8u) = u8(0x21u);  // (from the original)
    call_00303cdc(r0, r1_1, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    *gptr<u8>(r0 + 9u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r0 + 0xau) = u8(9u);  // (from the original)
    *gptr<u8>(r0 + 8u) = u8(0x21u);  // (from the original)
    call_00303cdc(r0, r1_2, r2_3, r3_3);
    *gptr<u8>(r0 + 9u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r0 + 0xau) = u8(9u);  // (from the original)
    *gptr<u16>(r0 + 0xcu) = u16(0u);  // (from the original)
    *gptr<u8>(r0 + 0xeu) = u8(6u);  // (from the original)
    *gptr<u8>(r0 + 0xfu) = u8(0xffu);  // (from the original)
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = 6u;
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
    u32 ea_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    u32 r10_1 = 0;
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
    ea_1 = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r9);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r10);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r14);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    arg0->byte_8 = u8(0x21u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00303cdc(r0, r1, r2, r3);
    r3_1 = guest::cpu()->r[3];
    *gptr<u8>(r0 + 9u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r0 + 0xau) = u8(9u);  // (from the original)
    *gptr<u16>(r0 + 0xcu) = u16(0x7ffeu);  // (from the original)
    *gptr<u8>(r0 + 0xeu) = u8(4u);  // (from the original)
    *gptr<u8>(r0 + 0xfu) = u8(0xffu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb378(0xffu, 4u, 0x7ffeu, r3_1);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r1_1 = 0u;
    *gptr<u8>(r0 + 8u) = u8(2u);
    *gptr<u8>(r0 + 9u) = u8(r1_1);
    if (r0_1 != 0) {
        guest::cpu()->r[13] = r13;
        call_005cddb4(r0, r0_1, r2_1, r3_2);
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
    }
    *gptr<u8>(r0 + 0xau) = u8(3u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_0030b6b8(r2, r1_1, r2_1, r3_2);
    r1_2 = guest::cpu()->r[1];
    ea_2 = r0 + 0xcu;  // (from the original)
    *gptr<u16>(ea_2) = u16(r0_2);
    ea_3 = r0 + 0xeu;  // (from the original)
    *gptr<u8>(ea_3) = u8(r1);
    ea_4 = r0 + 0xfu;  // (from the original)
    *gptr<u8>(ea_4) = u8(r3);
    ea_5 = r13;
    r13 = r13 + 0x20;  // (from the original)
    r4_1 = *gptr<u32>(ea_5);
    r5_1 = *gptr<u32>(ea_5 + 4);
    r6_1 = *gptr<u32>(ea_5 + 8);
    r7_1 = *gptr<u32>(ea_5 + 0xc);  // (from the original)
    r8_1 = *gptr<u32>(ea_5 + 0x10);  // (from the original)
    r9_1 = *gptr<u32>(ea_5 + 0x14);  // (from the original)
    r10_1 = *gptr<u32>(ea_5 + 0x18);  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_005bd2e8
GUEST_EXPORT(0x005bd2e8, d_005bd2e8::f_005bd2e8);

// f_005bd3fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bd3fc {

inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> call_00303cdc;  // (from the original)
inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> call_005cdf48;  // (from the original)

u32 f_005bd3fc(u32 r0, u32 r1) {
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r2_1 = ~0u;
    r3_1 = ~0x80000000u;  // (from the original)
    call_005cdf48(r0, r1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u8>(r0 + 8u) = u8(0x21u);  // (from the original)
    call_00303cdc(r0, r1_1, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    *gptr<u8>(r0 + 9u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r0 + 0xau) = u8(9u);  // (from the original)
    *gptr<u8>(r0 + 8u) = u8(0x21u);  // (from the original)
    call_00303cdc(r0, r1_2, r2_3, r3_3);
    *gptr<u8>(r0 + 9u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r0 + 0xau) = u8(9u);  // (from the original)
    *gptr<u16>(r0 + 0xcu) = u16(0x7ffeu);  // (from the original)
    *gptr<u8>(r0 + 0xeu) = u8(4u);  // (from the original)
    *gptr<u8>(r0 + 0xfu) = u8(0xffu);  // (from the original)
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = 4u;
    return r0;
}

}  // namespace d_005bd3fc
GUEST_EXPORT(0x005bd3fc, d_005bd3fc::f_005bd3fc);

// f_005bd750: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bd750 {

inline constexpr guest::Function<0x0030b6b8, u32(u32, u32, u32, u32)> call_0030b6b8;  // (from the original)
inline constexpr guest::Function<0x007d0fc8, u32(u32, u32, u32, u32)> call_007d0fc8;  // (from the original)

u32 f_005bd750(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r0_1 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_0030b6b8(r0_1, r1, guest::cpu()->r[2], r3);
    r3_1 = guest::cpu()->r[3];
    *gptr<u16>(r13) = u16(r0_2);
    r1_1 = r13;
    *gptr<u8>(r13 + 2u) = u8(r1);
    guest::cpu()->r[13] = r13;
    call_007d0fc8(4u, r1_1, guest::cpu()->r[2], r3_1);
    r1_2 = guest::cpu()->r[1];
    if (r1 == 0) {
        r0_3 = 2u;
    } else {
        r0_3 = 1u;
    }
    *gptr<u8>(r0 + 9u) = u8(r0_3);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_3;
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
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r4_1 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r2_1 = ~0u;
    r3_1 = ~0x80000000u;  // (from the original)
    call_005cdf48(r0, r1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u8>(r0 + 8u) = u8(0x21u);  // (from the original)
    call_00303cdc(r0, r1_1, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    *gptr<u8>(r0 + 9u) = u8(0xffu);  // (from the original)
    r0_1 = r0 + 0xcu;  // (from the original)
    *gptr<u8>(r0 + 0xau) = u8(9u);  // (from the original)
    r0_2 = call_002fc20c(r0_1, r1_2, r2_3, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_3 = r0_2 + 4u;
    r0_4 = call_002fc20c(r0_3, r1_3, r2_4, r3_4);
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r4_1 = r0_4 - 0x10u;  // (from the original)
    *gptr<u8>(r0_4 - 8u) = u8(0x21u);  // (from the original)
    call_00303cdc(r4_1, r1_4, r2_5, r3_5);
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    *gptr<u8>(r4_1 + 9u) = u8(0xffu);  // (from the original)
    r0_5 = r4_1 + 0x10u;  // (from the original)
    *gptr<u8>(r4_1 + 0xau) = u8(9u);  // (from the original)
    r0_6 = call_002fc8e8(r0_5, 0x95bfdcu, r2_6, r3_6);  // (from the original)
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_7 = r4_1 + 0xcu;  // (from the original)
    call_002fc8e8(r0_7, r0_6, r2_7, r3_7);
    r0_8 = ~0u;
    *gptr<u8>(r4_1 + 0x14u) = u8(r0_8);  // (from the original)
    *gptr<u8>(r4_1 + 0x15u) = u8(7u);  // (from the original)
    *gptr<u8>(r4_1 + 0x16u) = u8(r0_8);  // (from the original)
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = 7u;
    return r4_1;
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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r0_9 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_6 = 0;
    u32 r0_10 = 0;
    u32 r2_6 = 0;
    u32 r3_7 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r1_5 = 0;
    u32 r0_14 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb328(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r0_1 + 0x292a4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_003009a8(r0_2, r0, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r3_2 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return 0x21u;  // (from the original)
    }
    r0_4 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00116ea4(r0_4, 7u, 1u, r3_2);
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00116e4e(r0_5, 0u, r2_2, r3_3);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_6 = u32(s32(s8(*gptr<u8>(0x2516u + r0_3))));  // (from the original)
    if (r0_6 + 1u == 0) {
        r0_7 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_6 = call_00116e4e(r0_7, 2u, r2_3, r3_4);
        r1_2 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    r0_8 = call_002fb378(r0_6, r1_2, r2_3, r3_4);
    *gptr<u32>(r13) = u32(~0u);
    *gptr<u32>(r13 + 4) = u32(0u);
    *gptr<u32>(r13 + 8) = u32(1u);
    r1_3 = *gptr<u32>(r0_8);
    r2_4 = *gptr<u32>(r0_8 + 4);
    r3_5 = *gptr<u32>(r0_8 + 8);
    guest::cpu()->r[13] = r13;
    r0_9 = call_003015ec(0x23u, r1_3, r2_4, r3_5);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if (r0_9 != 0) {
        r0_10 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00116e4e(r0_10, 5u, r2_5, r3_6);
        r2_6 = guest::cpu()->r[2];
        r3_7 = guest::cpu()->r[3];
        r0_11 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00116e4e(r0_11, 6u, r2_6, r3_7);
        r1_4 = guest::cpu()->r[1];
        r2_5 = guest::cpu()->r[2];
        r3_6 = guest::cpu()->r[3];
    }
    r0_12 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_13 = call_002fe418(r0_12, r1_4, r2_5, r3_6);
    r1_5 = guest::cpu()->r[1];
    r0_14 = r0_13 + 6u & 0xffu;  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return r0_14;
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
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r2_4 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
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
                r0_12 = ~0u;
                r13 = r13 + 0x20u;  // (from the original)
                guest::cpu()->r[1] = r1;
                guest::cpu()->r[13] = r13;
                return r0_12;
            }
            goto L_5bdc78;
        }
        r2 = r2 + 1u;
        guest::preempt();
    } while (s32(r2) < s32(0xcu));  // (from the original)
    r0_12 = ~0u;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_12;
L_5bdc78:;
    if (s32(r0) >= s32(*gptr<u32>(r3 + (r2 << 2)))) {
        goto L_5bdcfc;
    }
    if ((r2 & 0xffu) >= 0xcu) {  // (from the original)
        r0_12 = ~0u;
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_12;
    }
    r4_1 = r1 + 0x1000u;  // (from the original)
    if (r12 == 8u) {
        goto L_5bdd0c;
    }
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_2 = call_00116ea4(r0_1, 0xau, 1u, r3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fae84(r0_2, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_4 = call_002fb310(r0_3, r1_2, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = r0_4 + 4u;
    guest::cpu()->r[13] = r13;
    r0_6 = call_00309864(r0_5, 0u, r2_3, r3_3);
    r3 = guest::cpu()->r[3];
    r5 = *gptr<u32>(r4_1 + 0x30u);  // (from the original)
    r6 = r0_6;
    r4 = 0u;
L_5bdcdc:;
    guest::cpu()->r[13] = r13;
    r0_7 = call_0051ce84(r4, r6, r5, r3);
    r1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_7 != 0) {
        goto L_5bdd38;
    }
    goto L_5bdd2c;
L_5bdcfc:;
    r2 = r2 + 1u;
    if (s32(r2) < s32(0xcu)) {  // (from the original)
        guest::preempt();
        goto L_5bdc78;
    }
    r0_12 = ~0u;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_12;
L_5bdd0c:;
    r0_8 = *gptr<u32>(r4_1 + 0x28u);  // (from the original)
    if (r0_8 == 0) {
        r0_12 = ~0u;
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_12;
    }
    r0_9 = u32(s32(s8(*gptr<u8>(r0_8 + 0x2516u))));  // (from the original)
    if (r0_9 < 0xau) {  // (from the original)
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_9;
    }
    r0_12 = ~0u;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_12;
L_5bdd2c:;
    r0_10 = r13;
    guest::cpu()->r[13] = r13;
    call_00116e4e(r0_10, r4, r2_4, r3);
    r1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_5bdd38:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_5bdcdc;
    }
    if (*gptr<u32>(r13 + 8u) == 0) {
        r0_12 = ~0u;
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_12;
    }
    r0_11 = r13;
    guest::cpu()->r[13] = r13;
    r0_9 = call_002fe418(r0_11, r1, r2_4, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_9;
}

}  // namespace d_005bdc34
GUEST_EXPORT(0x005bdc34, d_005bdc34::f_005bdc34);

// f_005be0fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005be0fc {

struct __attribute__((packed)) Object_005be0fc_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(Object_005be0fc_0, byte_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> call_00303cdc;  // (from the original)
inline constexpr guest::Function<0x003084d0, u32(u32, u32, u32, u32)> call_003084d0;  // (from the original)

u32 f_005be0fc(gptr<Object_005be0fc_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    arg0->byte_8 = u8(0x21u);  // (from the original)
    call_00303cdc(r5, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0xffu;  // (from the original)
    *gptr<u8>(r5 + 9u) = u8(r1);
    r4 = 0u;
    *gptr<u8>(r5 + 0xau) = u8(9u);  // (from the original)
    do {
L_5be128:;
        r0_1 = r5 + (r4 + (r4 << 1) << 4) + 0xcu;  // (from the original)
        call_003084d0(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(2u));
    r0_2 = r5 + 0x6cu;  // (from the original)
    call_002fc8e8(r0_2, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    *gptr<u8>(r5 + 0x74u) = u8(0u);  // (from the original)
    *gptr<u8>(r5 + 0x75u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_005be0fc
GUEST_EXPORT(0x005be0fc, d_005be0fc::f_005be0fc);

// f_005be19c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005be19c {

inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> call_00303cdc;  // (from the original)
inline constexpr guest::Function<0x005be0fc, u32(u32, u32, u32, u32)> call_005be0fc;  // (from the original)
inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> call_005cdf48;  // (from the original)

u32 f_005be19c(u32 r0, u32 r1) {
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r4_1 = 0;
    u32 r1_4 = 0;
    guest::cpu()->r[13] -= 8u;
    r2_1 = ~0u;
    r3_1 = ~0x80000000u;  // (from the original)
    call_005cdf48(r0, r1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u8>(r0 + 8u) = u8(0x21u);  // (from the original)
    call_00303cdc(r0, r1_1, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    *gptr<u8>(r0 + 9u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r0 + 0xau) = u8(9u);  // (from the original)
    r0_1 = r0 + 0x6cu;  // (from the original)
    r0_2 = call_002fc20c(r0_1, 0xffu, r2_3, r3_3);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_3 = r0_2 + 4u;
    r0_4 = call_002fc20c(r0_3, r1_2, r2_4, r3_4);
    r1_3 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r4_1 = r0_4 - 0x70u;  // (from the original)
    call_005be0fc(r4_1, r1_3, r2_5, r3_5);
    r1_4 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_4;
    return r4_1;
}

}  // namespace d_005be19c
GUEST_EXPORT(0x005be19c, d_005be19c::f_005be19c);

// f_005be844: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005be844 {


void f_005be844(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12_1 = 0;
    u32 res_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r4 = 0xffffu;  // (from the original)
    r2 = 0u;
    r3 = 0xbu;  // (from the original)
    do {
L_5be854:;
        r12_1 = r0 + (r2 << 1);
        r2 = r2 + 1u;
        if (u32(*gptr<u16>(r12_1)) == r1) {
            *gptr<u16>(r12_1) = u16(r4);
        }
        res_1 = r3 - 1u;
        r3 = res_1;
        guest::preempt();
    } while (res_1 != 0);
    guest::cpu()->r[13] += 8u;
    return;
}

}  // namespace d_005be844
GUEST_EXPORT(0x005be844, d_005be844::f_005be844);

// f_005be87c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005be87c {

struct __attribute__((packed)) Object_005be87c_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_005be87c_0, half_0, 0x0);  // (from the original)


void f_005be87c(gptr<Object_005be87c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r12_1 = 0;
    u32 r3_1 = 0;
    u32 r4_1 = 0;
    u32 res_1 = 0;
    r1 = 0xffffu;  // (from the original)
    r3 = 1u;
    guest::cpu()->r[13] -= 4u;
    r2 = r3;
    arg0->half_0 = u16(r1);
    do {
L_5be890:;
        r12_1 = r0 + (r3 << 1);
        r3_1 = r3 + 1u;
        r2 = r2 + 2u;
        r4_1 = r0 + (r3_1 << 1);
        *gptr<u16>(r12_1) = u16(r1);
        res_1 = r2 - 0xbu;  // (from the original)
        r3 = r3_1 + 1u;
        *gptr<u16>(r4_1) = u16(r1);
        guest::preempt();
    } while (res_1 >> 0x1f != ((r2 ^ 0xbu) & (r2 ^ res_1)) >> 0x1f);  // (from the original)
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005be87c
GUEST_EXPORT(0x005be87c, d_005be87c::f_005be87c);

// f_005be8c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005be8c0 {

struct __attribute__((packed)) Object_005be8c0_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_005be8c0_0, half_0, 0x0);  // (from the original)


void f_005be8c0(gptr<Object_005be8c0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4_1 = 0;
    u32 r3_1 = 0;
    u32 r12_1 = 0;
    u32 res_1 = 0;
    r1 = 0xffffu;  // (from the original)
    r3 = 1u;
    guest::cpu()->r[13] -= 4u;
    r2 = r3;
    arg0->half_0 = u16(r1);
    do {
L_5be8d4:;
        r4_1 = r0 + (r3 << 1);
        r3_1 = r3 + 1u;
        r2 = r2 + 2u;
        r12_1 = r0 + (r3_1 << 1);
        *gptr<u16>(r4_1) = u16(r1);
        res_1 = r2 - 0xbu;  // (from the original)
        r3 = r3_1 + 1u;
        *gptr<u16>(r12_1) = u16(r1);
        guest::preempt();
    } while (res_1 >> 0x1f != ((r2 ^ 0xbu) & (r2 ^ res_1)) >> 0x1f);  // (from the original)
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005be8c0
GUEST_EXPORT(0x005be8c0, d_005be8c0::f_005be8c0);

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
    u32 r1 = arg1.addr();
    u32 r3_1 = 0;
    u32 res_1 = 0;
    u32 r2_1 = 0;
    u32 ea_1 = 0;
    u32 r12_1 = 0;
    u32 r2_2 = 0;
    u32 ea_2 = 0;
    u32 r12_2 = 0;
    u32 r1_1 = 0;
    r3_1 = 0u;
    arg0->word_0 = u32(r3_1);
    arg0->word_4 = u32(r3_1);
    arg0->word_8 = u32(r3_1);
    if (r1 != 0) {
        res_1 = 0x20000011u & ~arg1->word_0;  // (from the original)
        if (res_1 != 0) {
            r1 = 0u;
        }
    }
    r2_1 = r1 + 0x38u;  // (from the original)
    ea_1 = r1 + 0x38u;  // (from the original)
    r12_1 = *gptr<u32>(ea_1);
    if (r12_1 == 0) {
        r2_2 = r3_1;
    } else {
        r2_2 = r2_1 + r12_1;
    }
    ea_2 = r2_2 + 0xcu;  // (from the original)
    r12_2 = *gptr<u32>(ea_2);
    if (r12_2 != 0) {
        r3_1 = r12_2 + ea_2;
    }
    arg0->word_0 = u32(r3_1);
    arg0->word_4 = u32(*gptr<u32>(r1 + 0x1cu));  // (from the original)
    r1_1 = *gptr<u32>(r1 + 0x18u);  // (from the original)
    arg0->word_8 = u32(r1_1);
    guest::cpu()->r[1] = r1_1;
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
    call_0013f134(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return 1u;
}

}  // namespace d_005bf748
GUEST_EXPORT(0x005bf748, d_005bf748::f_005bf748);

// f_005bf758: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bf758 {

struct __attribute__((packed)) Object_005bf758_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_005bf758_0, word_4, 0x4);  // (from the original)


u32 f_005bf758(gptr<Object_005bf758_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 zf_1 = 0;
    zf_1 = r1 == 0;
    if (!zf_1) {
        r0 = arg0->word_4;
        zf_1 = r0 == 0;
    }
    if (zf_1) {
        return 0u;
    }
    do {
L_5bf768:;
        if (*gptr<u32>(r0 + 0xcu) == r1) {  // (from the original)
            return r0;
        }
        r0 = *gptr<u32>(r0 + 8u);
        guest::preempt();
    } while (r0 != 0);
    return 0u;
}

}  // namespace d_005bf758
GUEST_EXPORT(0x005bf758, d_005bf758::f_005bf758);

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
    u32 r1_1 = 0;
    arg0->half_c = u16(0u);
    arg0->word_0 = u32(std::bit_cast<u32>(arg1->v[0]));
    arg0->word_4 = u32(std::bit_cast<u32>(arg1->v[1]));
    arg0->word_8 = u32(std::bit_cast<u32>(arg1->v[2]));
    r1_1 = u32(arg2->half_0);
    arg0->half_c = u16(r1_1);
    arg0->word_10 = u32(0u);
    guest::cpu()->r[1] = r1_1;
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
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r6_1 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 ea_3 = 0;
    u32 r12_1 = 0;
    u32 ea_4 = 0;
    u32 r5_1 = 0;
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
    u32 ea_15 = 0;
    u32 ea_16 = 0;
    u32 r1_1 = 0;
    u32 ea_17 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0xc;  // (from the original)
    ea_1 = r13 + 0xcu;  // (from the original)
    r6_1 = *gptr<u32>(ea_1);
    ea_2 = r13 + 0x14u;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    ea_3 = r13 + 0x18u;  // (from the original)
    r12_1 = *gptr<u32>(ea_3);
    ea_4 = r13 + 0x10u;  // (from the original)
    r5_1 = *gptr<u32>(ea_4);
    arg0->byte_50 = u8(r1);
    arg0->word_54 = u32(r2);
    arg0->word_58 = u32(r3);
    arg0->word_0 = u32(*gptr<u32>(r6_1));
    ea_5 = r6_1 + 4u;
    arg0->word_4 = u32(*gptr<u32>(ea_5));
    ea_6 = r6_1 + 8u;
    arg0->word_8 = u32(*gptr<u32>(ea_6));
    ea_7 = r6_1 + 0xcu;  // (from the original)
    arg0->half_c = u16(u32(*gptr<u16>(ea_7)));
    ea_8 = r6_1 + 0x10u;  // (from the original)
    arg0->word_10 = u32(*gptr<u32>(ea_8));
    arg0->word_14 = u32(*gptr<u32>(r5_1));
    ea_9 = r5_1 + 4u;
    arg0->word_18 = u32(*gptr<u32>(ea_9));
    ea_10 = r5_1 + 8u;
    arg0->word_1c = u32(*gptr<u32>(ea_10));
    ea_11 = r5_1 + 0xcu;  // (from the original)
    arg0->half_20 = u16(u32(*gptr<u16>(ea_11)));
    ea_12 = r5_1 + 0x10u;  // (from the original)
    arg0->word_24 = u32(*gptr<u32>(ea_12));
    arg0->word_28 = u32(*gptr<u32>(r4_1));
    ea_13 = r4_1 + 4u;
    arg0->word_2c = u32(*gptr<u32>(ea_13));
    ea_14 = r4_1 + 8u;
    arg0->word_30 = u32(*gptr<u32>(ea_14));
    ea_15 = r4_1 + 0xcu;  // (from the original)
    arg0->half_34 = u16(u32(*gptr<u16>(ea_15)));
    ea_16 = r4_1 + 0x10u;  // (from the original)
    arg0->word_38 = u32(*gptr<u32>(ea_16));
    r1_1 = *gptr<u32>(r12_1);
    ea_17 = r0 + 0x3cu;  // (from the original)
    arg0->word_3c = u32(r1_1);
    arg0->word_40 = u32(*gptr<u32>(r12_1 + 4u));
    arg0->word_44 = u32(*gptr<u32>(r12_1 + 8u));
    arg0->half_48 = u16(u32(*gptr<u16>(r12_1 + 0xcu)));  // (from the original)
    r1_2 = *gptr<u32>(r12_1 + 0x10u);  // (from the original)
    arg0->word_4c = u32(r1_2);
    r13 = r13 + 0xc;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return ea_17;
}

}  // namespace d_005bf82c
GUEST_EXPORT(0x005bf82c, d_005bf82c::f_005bf82c);

// f_005bf8f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bf8f0 {

struct __attribute__((packed)) Object_005bf8f0_0 {
    u8 unknown_0[0x50];  // (not used here)
    u8 byte_50;
    u8 unknown_51[0x3];  // (not used here)
    u32 word_54;
    u32 word_58;
};
GUEST_OFFSET(Object_005bf8f0_0, byte_50, 0x50);  // (from the original)
GUEST_OFFSET(Object_005bf8f0_0, word_54, 0x54);  // (from the original)
GUEST_OFFSET(Object_005bf8f0_0, word_58, 0x58);  // (from the original)


void f_005bf8f0(gptr<Object_005bf8f0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    u32 r1_1 = 0;
    r3 = 0xae5658u;  // (from the original)
    r2 = 0u;
    r12 = r2;
    guest::cpu()->r[13] -= 4u;
    do {
L_5bf900:;
        r1_1 = r0 + (r2 + (r2 << 2) << 2);
        r2 = r2 + 1u;
        *gptr<u32>(r1_1) = u32(*gptr<u32>(r3));
        *gptr<u32>(r1_1 + 4u) = u32(*gptr<u32>(r3 + 4u));
        *gptr<u32>(r1_1 + 8u) = u32(*gptr<u32>(r3 + 8u));
        *gptr<u16>(r1_1 + 0xcu) = u16(r12);  // (from the original)
        *gptr<u32>(r1_1 + 0x10u) = u32(r12);  // (from the original)
        guest::preempt();
    } while (r2 < 4u);
    arg0->byte_50 = u8(0xa5u);  // (from the original)
    arg0->word_58 = u32(6u);
    arg0->word_54 = u32(6u);
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = 6u;
    return;
}

}  // namespace d_005bf8f0
GUEST_EXPORT(0x005bf8f0, d_005bf8f0::f_005bf8f0);

// f_005bfbd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bfbd4 {

inline guest::global<u16, 0x00aaef14> global_00aaef14;  // (from the original)
inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32, u32)> call_0013fac4;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x005bf954, u32(u32, u32, u32, u32)> call_005bf954;  // (from the original)
inline constexpr guest::Function<0x005bfb94, u32(u32, u32, u32, u32)> call_005bfb94;  // (from the original)

u32 f_005bfbd4() {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r6_1 = 0;
    u32 r5_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    call_0013fac4(0xaad990u, 4u, 8u, guest::cpu()->r[3]);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r7 = 0u;
    *gptr<u32>(0xaad790u + 0x204u) = u32(r7);  // (from the original)
    *gptr<u32>(0xaad790u + 0x208u) = u32(r7);  // (from the original)
    *gptr<u32>(0xaad790u + 0x20cu) = u32(r7);  // (from the original)
    *gptr<u32>(0xaad790u + 0x210u) = u32(r7);  // (from the original)
    r0_1 = 0xaad790u - 0x29000u;  // (from the original)
    call_002f825c(r0_1, 0x29200u, r2_1, guest::cpu()->r[3]);  // (from the original)
    r2 = guest::cpu()->r[2];
    r8 = 0xa84790u;  // (from the original)
    r4 = 0u;
    do {
L_5bfc14:;
        r6_1 = r8 + (r4 + (r4 << 1) + (r4 << 4) << 1);
        r5_1 = r6_1 + 0x29214u;  // (from the original)
        call_00301444(r5_1, 0x26u, r2, guest::cpu()->r[3]);  // (from the original)
        *gptr<u8>(r5_1) = u8(0xa5u);  // (from the original)
        r0_2 = r6_1 + 0x292acu;  // (from the original)
        call_002f8574(r0_2, r5_1, 0x26u, guest::cpu()->r[3]);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 4u);
    *global_00aaef14 = u16(r7);
    r0_3 = 0xaaef14u + 4u;  // (from the original)
    r0_4 = call_005bf954(r0_3, r1_1, r2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return call_005bfb94(r0_4, r1_2, r2_2, guest::cpu()->r[3]);
}

}  // namespace d_005bfbd4
GUEST_EXPORT(0x005bfbd4, d_005bfbd4::f_005bfbd4);

// f_005bfc8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bfc8c {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0070ab24, u32(u32, u32, u32, u32)> call_0070ab24;  // (from the original)

u32 f_005bfc8c() {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 zf_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_005c33d0(4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    r1_2 = u32(*gptr<u16>(0x224u + r0_1));  // (from the original)
    zf_1 = r1_2 == 0x29u;  // (from the original)
    if (!zf_1) {
        zf_1 = r1_2 == 0x2au;  // (from the original)
    }
    if (!zf_1) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    r0_2 = r0_1 + 0x1b4u;  // (from the original)
    r0_3 = call_0070ab24(r0_2, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    if (r0_3 != 0) {
        r0_3 = 1u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_3;
    return r0_3;
}

}  // namespace d_005bfc8c
GUEST_EXPORT(0x005bfc8c, d_005bfc8c::f_005bfc8c);

// f_005bff24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bff24 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x006503b0, u32(u32, u32, u32, u32)> call_006503b0;  // (from the original)

u32 f_005bff24(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_005c33d0(4u, 0u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    res_1 = u32(*gptr<u8>(r0_1 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    r1_1 = res_1;
    if (res_1 != 0) {
        r0_1 = 0u;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    r0_1 = call_006503b0(r0_1, r0, r1, r2);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_005bff24
GUEST_EXPORT(0x005bff24, d_005bff24::f_005bff24);

// f_005bff78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bff78 {

inline guest::global<u32, 0x005bffec> global_005bffec;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x00678278, u32(u32, u32, u32, u32)> call_00678278;  // (from the original)

u32 f_005bff78(u32 r0, u32 r1_unused, u32 r2, u32 r3, float S0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    float S0_1 = 0;
    u32 res_1 = 0;
    float S0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    float S0_3 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0_1 = call_005c33d0(4u, 0u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    S0_1 = guest::cpu()->s[0];
    if (r0_1 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        return r0_1;
    }
    res_1 = u32(*gptr<u8>(r0_1 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    if (res_1 != 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = res_1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        return 0u;
    }
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4) = u32(~0u);
    *gptr<u32>(r13 + 8) = u32(0x100056du);  // (from the original)
    S0_2 = std::bit_cast<float>(*global_005bffec);
    r1_2 = u32(*gptr<u16>(0x881b98u + ((r0 & 3u) << 1)));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    r0_2 = call_00678278(r0_1, r1_2, 0u, 0u);
    r1_3 = guest::cpu()->r[1];
    S0_3 = guest::cpu()->s[0];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    return r0_2;
}

}  // namespace d_005bff78
GUEST_EXPORT(0x005bff78, d_005bff78::f_005bff78);
