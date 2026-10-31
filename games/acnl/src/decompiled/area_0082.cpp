// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_00825aa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00825aa4 {

struct __attribute__((packed)) Object_00825aa4_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00825aa4_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00578018, u32(u32, u32, u32, u32)> call_00578018;  // (from the original)

u32 f_00825aa4(gptr<Object_00825aa4_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = arg0->word_0;
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    call_00578018(r0_1, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    *gptr<u32>(r0) = u32(0u);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_00825aa4
GUEST_EXPORT(0x00825aa4, d_00825aa4::f_00825aa4);

// f_00825acc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00825acc {

inline constexpr guest::Function<0x00578018, u32(u32, u32, u32, u32)> call_00578018;  // (from the original)

u32 f_00825acc(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r5_1 = 0;
    goto L_825acc;
L_577a2c:;
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    *gptr<u32>(r1 + 4u) = u32(*gptr<u32>(r0 + 0x70u));  // (from the original)
    *gptr<u32>(r0 + 0x70u) = u32(r1);  // (from the original)
    r0_1 = *gptr<u32>(r0 + 0x74u);  // (from the original)
    *gptr<u32>(r1) = u32(r0_1);
    guest::cpu()->r[1] = r1;
    return r0_1;
L_825acc:;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_2 = *gptr<u32>(r0);
    r5_1 = r1;
    if (r0_2 != 0) {
        r0_2 = call_00578018(r0_2, r0, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    if (r5_1 != 0) {
        r1 = r0;
        r0 = r5_1;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::preempt();
        goto L_577a2c;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_00825acc
GUEST_EXPORT(0x00825acc, d_00825acc::f_00825acc);

// f_00825b04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00825b04 {

struct __attribute__((packed)) Object_00825b04_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00825b04_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00578018, u32(u32, u32, u32, u32)> call_00578018;  // (from the original)

u32 f_00825b04(gptr<Object_00825b04_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = arg0->word_0;
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    call_00578018(r0_1, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    *gptr<u32>(r0) = u32(0u);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0;
}

}  // namespace d_00825b04
GUEST_EXPORT(0x00825b04, d_00825b04::f_00825b04);

// f_00825c64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00825c64 {


u32 f_00825c64(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3_1 = 0;
    u32 r3_2 = 0;
    u32 r3_3 = 0;
    r2 = 0u;
    do {
L_825c68:;
        if (r2 >= 8u) {
            r3_1 = r0;
        } else {
            r3_1 = r0 + (r2 << 2);
        }
        r3_2 = *gptr<u32>(r3_1);
        if (r3_2 == 0) {
            r3_3 = ~0u;
        } else {
            r3_3 = *gptr<u32>(r3_2 + 0xb0u);  // (from the original)
        }
        if (!(r3_3 != r1)) {
            return 1u;
        }
        r2 = r2 + 1u;
        guest::preempt();
    } while (s32(r2) < s32(8u));
    return 0u;
}

}  // namespace d_00825c64
GUEST_EXPORT(0x00825c64, d_00825c64::f_00825c64);

// f_00825d6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00825d6c {

struct __attribute__((packed)) Object_00825d6c_0 {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
};
GUEST_OFFSET(Object_00825d6c_0, byte_24, 0x24);  // (from the original)


u32 f_00825d6c(gptr<Object_00825d6c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    r1_1 = u32(arg0->byte_24) & 1u;
    if (r1_1 >= 2u) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r0_1 = r0 + (r1_1 + (r1_1 << 1) << 2);
    r1_2 = *gptr<u32>(r0_1 + 0x4bcu);  // (from the original)
    if (r1_2 != 0) {
        r0_2 = r0_1 + 0x4b8u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return r0_2;
    }
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_00825d6c
GUEST_EXPORT(0x00825d6c, d_00825d6c::f_00825d6c);

// f_00826038: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00826038 {

struct __attribute__((packed)) Object_00826038_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0x4];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Object_00826038_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00826038_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00826038_0, word_1c, 0x1c);  // (from the original)

inline constexpr guest::Function<0x00346720, u32(u32, u32, u32, u32)> call_00346720;  // (from the original)

u32 f_00826038(gptr<Object_00826038_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 res_1 = 0;
    u32 cf_1 = 0;
    u32 r10_1 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 res_2 = 0;
    u32 zf_1 = 0;
    u32 r0_3 = 0;
    u32 res_3 = 0;
    u32 r0_4 = 0;
    u32 r3_2 = 0;
    u32 res_4 = 0;
    u32 res_5 = 0;
    u32 r1_2 = 0;
    u32 ea_1 = 0;
    u32 r0_5 = 0;
    u32 ea_2 = 0;
    u32 r2_1 = 0;
    r13 = r13 - 0x40u;  // (from the original)
    r4_1 = arg0->word_10;
    res_1 = r4_1 + *gptr<u32>(r13 + 0x44u);  // (from the original)
    cf_1 = res_1 < r4_1;
    r10_1 = *gptr<u32>(r13 + 0x40u);  // (from the original)
    r1_1 = r13 + 8u;
    r3_1 = u32(u64(arg0->word_14) + cf_1);
    *gptr<u32>(r13) = u32(r1_1);
    *gptr<u32>(r13 + 4) = u32(0x18u);  // (from the original)
    r0_1 = arg0->word_1c;
    guest::cpu()->r[13] = r13;
    r0_2 = call_00346720(r0_1, r1_1, res_1, r3_1);
    res_2 = r0_2 & 0x80000000u;  // (from the original)
    if (res_2 >> 0x1f) {  // (from the original)
        goto L_8260d0;
    }
    zf_1 = r3 == 0;
    if (!zf_1) {
        zf_1 = r10_1 == 0;
    }
    if (zf_1) {
        goto L_8260cc;
    }
    *gptr<u32>(r10_1) = u32(*gptr<u32>(r13 + 0x1cu));  // (from the original)
    r0_3 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    if (r0_3 == 0) {
        goto L_8260cc;
    }
    res_3 = res_1 + 0x18u;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r0_3);
    *gptr<u32>(r13) = u32(r3);
    r0_4 = *gptr<u32>(r0 + 0x1cu);  // (from the original)
    r3_2 = u32(u64(r3_1) + u32(res_3 < res_1));
    guest::cpu()->r[13] = r13;
    r0_2 = call_00346720(r0_4, res_2, res_3, r3_2);
    res_4 = r0_2 & 0x80000000u;  // (from the original)
    if (res_4 >> 0x1f) {  // (from the original)
        goto L_8260d0;
    }
L_8260cc:;
    r0_2 = 0u;
L_8260d0:;
    res_5 = r0_2 & 0x80000000u;  // (from the original)
    r1_2 = res_5;
    if (!(res_5 >> 0x1f)) {  // (from the original)
        ea_1 = r13 + 8u;
        r0_5 = *gptr<u32>(ea_1);
        *gptr<u32>(r1) = u32(r0_5);
        ea_2 = r13 + 0xcu;  // (from the original)
        r1_2 = *gptr<u32>(ea_2 + 4);
        r2_1 = *gptr<u32>(ea_2 + 8);
        *gptr<u32>(r2) = u32(*gptr<u32>(ea_2));
        *gptr<u32>(r2 + 4) = u32(r1_2);
        *gptr<u32>(r2 + 8) = u32(r2_1);
        r0_2 = 0u;
    }
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_00826038
GUEST_EXPORT(0x00826038, d_00826038::f_00826038);

// f_00826270: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00826270 {

inline constexpr guest::Function<0x00350b88, u32(u32, u32, u32, u32)> call_00350b88;  // (from the original)
inline constexpr guest::Function<0x00826038, u32(u32, u32, u32, u32)> call_00826038;  // (from the original)
inline constexpr guest::Function<0x008266bc, u32(u32, u32, u32, u32)> call_008266bc;  // (from the original)

u32 f_00826270(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r8_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 res_1 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r0_2 = 0;
    u32 res_2 = 0;
    r13 = r13 - 0x30u;  // (from the original)
    r1_1 = *gptr<u32>(r13 + 0x30u);  // (from the original)
    r8_1 = *gptr<u32>(r13 + 0x3cu);  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4) = u32(r1_1);
    r2_1 = r13 + 0xcu;  // (from the original)
    r1_2 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_1 = call_00826038(r0, r1_2, r2_1, 0u);
    r3_1 = guest::cpu()->r[3];
    res_1 = r0_1 & 0x80000000u;  // (from the original)
    r1_3 = res_1;
    if (res_1 >> 0x1f) {  // (from the original)
        goto L_8262f4;
    }
    r1_4 = r13 + 0x34u;  // (from the original)
    *gptr<u32>(r2) = u32(*gptr<u32>(r13 + 8u));
    r0_2 = r2 + 4u;
    guest::cpu()->r[13] = r13;
    r0_1 = call_00350b88(r0_2, r1_4, r8_1, r3_1);
    res_2 = r0_1 & 0x80000000u;  // (from the original)
    r1_3 = res_2;
    if (res_2 >> 0x1f) {  // (from the original)
        goto L_8262f4;
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_008266bc(r0, r1, r3, r2);
    r1_3 = r0_1 & 0x80000000u;  // (from the original)
    if (r1_3 >> 0x1f == 0u) {  // (from the original)
        r0_1 = 0u;
    }
L_8262f4:;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_00826270
GUEST_EXPORT(0x00826270, d_00826270::f_00826270);

// f_008266bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_008266bc {

struct __attribute__((packed)) Object_008266bc_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_008266bc_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_008266bc_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_008266bc_3, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00825ecc, u32(u32, u32, u32, u32)> call_00825ecc;  // (from the original)
inline constexpr guest::Function<0x008260f8, u32(u32, u32, u32, u32)> call_008260f8;  // (from the original)

u32 f_008266bc(u32 r0, u32 r1, u32 r2, gptr<Object_008266bc_3> arg3) {
    u32 r3 = arg3.addr();
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
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = 0;
    u32 b_1 = 0;
    u32 ea_1 = 0;
    u32 res_1 = 0;
    u32 ea_2 = 0;
    u32 r12_1 = 0;
    u32 res_2 = 0;
    u32 res_3 = 0;
    u32 r0_2 = 0;
    u32 res_4 = 0;
    u32 r1_1 = 0;
    u32 zf_1 = 0;
    u32 r2_1 = 0;
    u32 b_2 = 0;
    u32 ea_3 = 0;
    u32 res_5 = 0;
    u32 ea_4 = 0;
    u32 r4_1 = 0;
    u32 r0_3 = 0;
    u32 res_6 = 0;
    u32 res_7 = 0;
    u32 r2_2 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 zf_2 = 0;
    r13 = r13 - 0x48u;  // (from the original)
    r7 = r3;
    r10 = r0;
    r8 = ~0u;
    r6 = arg3->word_8;
    r14 = arg3->word_4;
    r9 = 0x75bcd15u;  // (from the original)
    r11 = r6 + (r14 << 1) - r6;
    r12 = arg3->word_0 ^ r9;
    r0_1 = r8 + u32(s32(r11) >> 1);
    if (r0_1 == 0 || r0_1 >> 0x1f != (r0_1 & (r0_1 ^ r0_1)) >> 0x1f) {  // (from the original)
        goto L_82672c;
    }
    b_1 = r11 << 0x1e;  // (from the original)
    r4 = r6 - 2u;
    if (!(b_1 >> 0x1f)) {  // (from the original)
        ea_1 = r4 + 2u;
        r4 = ea_1;
        r12 = u32(*gptr<u16>(ea_1)) ^ ror32(r12, 5);
    }
    res_1 = u32(s32(r0_1) >> 1);
    r5 = res_1;
    r0 = u32(*gptr<u16>(r4 + 2u));
    if (res_1 == 0) {
        goto L_82672c;
    }
    do {
L_826714:;
        ea_2 = r4 + 4u;
        r4 = ea_2;
        r12_1 = r0 ^ ror32(r12, 5);
        r0 = u32(*gptr<u16>(r4 + 2u));
        res_2 = r5 - 1u;
        r5 = res_2;
        r12 = u32(*gptr<u16>(ea_2)) ^ ror32(r12_1, 5);
        guest::preempt();
    } while (res_2 != 0);
L_82672c:;
    res_3 = r8 + u32(s32(r11) >> 1);
    if (!(res_3 >> 0x1f)) {  // (from the original)
        r12 = u32(*gptr<u16>(r6 + (res_3 << 1))) ^ ror32(r12, 5);
    }
    *gptr<u32>(r13 + 8u) = u32(r14 << 1);
    *gptr<u32>(r13 + 4u) = u32(r6);
    *gptr<u32>(r13) = u32(r12);
    guest::cpu()->r[13] = r13;
    r0_2 = call_00825ecc(r10, r1, r2, r7);
    res_4 = r0_2 & 0x80000000u;  // (from the original)
    r1_1 = res_4;
    if (!(res_4 >> 0x1f)) {  // (from the original)
        goto L_826840;
    }
    r1_1 = (r0_2 & 0x3fc00u) >> 0xa;  // (from the original)
    zf_1 = r1_1 == 0x11u;  // (from the original)
    if (zf_1) {
        r1_1 = r0_2 << 0x16 >> 0x16;  // (from the original)
        zf_1 = r1_1 == 0x6fu;  // (from the original)
    }
    if (!zf_1) {
        goto L_826840;
    }
    r5 = *gptr<u32>(r7 + 4);
    r3 = *gptr<u32>(r7 + 8u);
    r0 = *gptr<u32>(r7) ^ r9;
    r6 = r3 + (r5 << 1) - r3;
    r2_1 = r8 + u32(s32(r6) >> 1);
    if (r2_1 == 0 || r2_1 >> 0x1f != (r2_1 & (r2_1 ^ r2_1)) >> 0x1f) {  // (from the original)
        goto L_8267dc;
    }
    b_2 = r6 << 0x1e;  // (from the original)
    r1 = r3 - 2u;
    if (!(b_2 >> 0x1f)) {  // (from the original)
        ea_3 = r1 + 2u;
        r1 = ea_3;
        r0 = u32(*gptr<u16>(ea_3)) ^ ror32(r0, 5);
    }
    r12 = u32(*gptr<u16>(r1 + 2u));
    res_5 = u32(s32(r2_1) >> 1);
    r2 = res_5;
    if (res_5 == 0) {
        goto L_8267dc;
    }
    do {
L_8267c4:;
        ea_4 = r1 + 4u;
        r1 = ea_4;
        r4_1 = u32(*gptr<u16>(ea_4));
        r0_3 = r12 ^ ror32(r0, 5);
        r12 = u32(*gptr<u16>(r1 + 2u));
        res_6 = r2 - 1u;
        r2 = res_6;
        r0 = r4_1 ^ ror32(r0_3, 5);
        guest::preempt();
    } while (res_6 != 0);
L_8267dc:;
    res_7 = r8 + u32(s32(r6) >> 1);
    if (!(res_7 >> 0x1f)) {  // (from the original)
        r0 = u32(*gptr<u16>(r3 + (res_7 << 1))) ^ ror32(r0, 5);
    }
    *gptr<u32>(r13 + 8u) = u32(r5 << 1);
    *gptr<u32>(r13) = u32(r0);
    *gptr<u32>(r13 + 4) = u32(r3);
    r2_2 = r13 + 0xcu;  // (from the original)
    r1_2 = r13 + 0x20u;  // (from the original)
    r0_4 = r10 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_008260f8(r0_4, r1_2, r2_2, r7);
    r1_1 = r0_2 & 0x80000000u;  // (from the original)
    if (r1_1 >> 0x1f == (r1_1 & (r1_1 ^ r1_1)) >> 0x1f) {  // (from the original)
        r0_2 = 0xe0c04702u;  // (from the original)
        goto L_826840;
    }
    r1_1 = (r0_2 & 0x3fc00u) >> 0xa;  // (from the original)
    zf_2 = r1_1 == 0x11u;  // (from the original)
    if (zf_2) {
        r1_1 = r0_2 << 0x16 >> 0x16;  // (from the original)
        zf_2 = r1_1 == 0x6fu;  // (from the original)
    }
    if (zf_2) {
        r0_2 = 0xc8804471u;  // (from the original)
    } else {
        goto L_826840;
    }
L_826840:;
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_008266bc
GUEST_EXPORT(0x008266bc, d_008266bc::f_008266bc);

// f_00826c34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00826c34 {

struct __attribute__((packed)) Object_00826c34_0 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
};
GUEST_OFFSET(Object_00826c34_0, byte_4, 0x4);  // (from the original)


u32 f_00826c34(gptr<Object_00826c34_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r2_1 = 0;
    u32 r12_1 = 0;
    u32 r3_1 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 r12_2 = 0;
    r2_1 = u32(arg0->byte_4);
    if (r2_1 != 2u) {
        if (r2_1 != 3u) {
            return 0u;
        }
    } else {
        if (u32(*gptr<u16>(r0 + 6u)) != r1) {
            return 0u;
        }
        return 1u;
    }
    r2 = r0 + 8u;
    r0 = *gptr<u32>(r0 + 0xcu);  // (from the original)
    if (r0 == r2) {
        return 0u;
    }
    do {
L_826c78:;
        r12_1 = u32(*gptr<u16>(r0 + 8u));
        r3_1 = r0 + 8u;
        zf_1 = r12_1 == r1;
        cf_1 = r12_1 >= r1;
        if (!cf_1 || zf_1) {
            r12_2 = u32(*gptr<u16>(r3_1 + 2u));
            zf_1 = r1 == r12_2;
            cf_1 = r1 >= r12_2;
        }
        if (!cf_1 || zf_1) {
            return 1u;
        }
        r0 = *gptr<u32>(r0 + 4u);
        guest::preempt();
    } while (r0 != r2);
    return 0u;
}

}  // namespace d_00826c34
GUEST_EXPORT(0x00826c34, d_00826c34::f_00826c34);

// f_00827060: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00827060 {

inline guest::global<u32, 0x008270c8> global_008270c8;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x007e85c0, u32(u32, u32, u32, u32)> call_007e85c0;  // (from the original)

u32 f_00827060(u32 r0, u32 r1, u32 r2, u32 r3, float S0_unused, float S1) {
    u32 r13 = guest::cpu()->r[13];
    float S0_1 = 0;
    u32 r6_1 = 0;
    u32 r0_1 = 0;
    float S0_2 = 0;
    float S1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    float S1_2 = 0;
    float S0_3 = 0;
    r13 = r13 - 0x88u;  // (from the original)
    S0_1 = std::bit_cast<float>(*global_008270c8);
    *gptr<u32>(r13 + 0x68u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r13 + 0x6cu) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r13 + 0x70u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r13 + 0x74u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    r6_1 = r13 + 0x68u;  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1;
    call_002fbb30(r0_1, r0, 0x64u, r3);  // (from the original)
    S0_2 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    r0_2 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    call_007e85c0(r0_2, r6_1, r1, r2);
    r1_1 = guest::cpu()->r[1];
    r0_3 = r13;
    S1_2 = std::bit_cast<float>(*gptr<u32>(r13 + 0x68u));  // (from the original)
    S0_3 = std::bit_cast<float>(*gptr<u32>(r13 + 0x70u)) - S1_2;  // (from the original)
    r13 = r13 + 0x88u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_2;
    return r0_3;
}

}  // namespace d_00827060
GUEST_EXPORT(0x00827060, d_00827060::f_00827060);

// f_008270cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_008270cc {

inline guest::global<u32, 0x00827134> global_00827134;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x007e85c0, u32(u32, u32, u32, u32)> call_007e85c0;  // (from the original)

u32 f_008270cc(u32 r0, u32 r1, u32 r2, u32 r3, float S0_unused, float S1) {
    u32 r13 = guest::cpu()->r[13];
    float S0_1 = 0;
    u32 r6_1 = 0;
    u32 r0_1 = 0;
    float S0_2 = 0;
    float S1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    float S1_2 = 0;
    float S0_3 = 0;
    r13 = r13 - 0x88u;  // (from the original)
    S0_1 = std::bit_cast<float>(*global_00827134);
    *gptr<u32>(r13 + 0x68u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r13 + 0x6cu) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r13 + 0x70u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r13 + 0x74u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    r6_1 = r13 + 0x68u;  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1;
    call_002fbb30(r0_1, r0, 0x64u, r3);  // (from the original)
    S0_2 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    r0_2 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    call_007e85c0(r0_2, r6_1, r1, r2);
    r1_1 = guest::cpu()->r[1];
    r0_3 = r13;
    S1_2 = std::bit_cast<float>(*gptr<u32>(r13 + 0x6cu));  // (from the original)
    S0_3 = std::bit_cast<float>(*gptr<u32>(r13 + 0x74u)) - S1_2;  // (from the original)
    r13 = r13 + 0x88u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_2;
    return r0_3;
}

}  // namespace d_008270cc
GUEST_EXPORT(0x008270cc, d_008270cc::f_008270cc);

// f_0082d508: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0082d508 {

inline constexpr guest::Function<0x003548f0, u32(u32, u32, u32, u32)> call_003548f0;  // (from the original)
inline constexpr guest::Function<0x003d0d6c, u32(u32, u32, u32, u32)> call_003d0d6c;  // (from the original)
inline constexpr guest::Function<0x0072d6bc, u32(u32, u32, u32, u32)> call_0072d6bc;  // (from the original)
inline constexpr guest::Function<0x007fe104, u32(u32, u32, u32, u32)> call_007fe104;  // (from the original)

u32 f_0082d508(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r4_1 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_5 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_12 = 0;
    u32 r1_6 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_13 = 0;
    u32 r1_7 = 0;
    u32 r0_14 = 0;
    r13 = r13 - 0x68u;  // (from the original)
    r9 = r0;
    r7 = r13 + 0x30u;  // (from the original)
    r8 = r13 + 0x20u;  // (from the original)
    r0_1 = r13 + 0x14u;  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(0x8fe9d0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_003548f0(r0_1, 0x89a14cu, r2, r3);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x20u) = u32(0x8fe9d0u);  // (from the original)
    r1_1 = *gptr<u32>(r1 + 4u);
    r0_2 = r8 + 4u;
    guest::cpu()->r[13] = r13;
    call_003548f0(r0_2, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x28u) = u32(0x8fe9d0u);  // (from the original)
    r1_2 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    r0_3 = r8 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_003548f0(r0_3, r1_2, r2_2, r3_2);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = *gptr<u32>(r9 + 0x10u);  // (from the original)
    r0_4 = 1u;
    r4 = *gptr<u32>(r5 + 4u);
    if (r4 == 0) {
        goto L_82d58c;
    }
    do {
L_82d568:;
        r5 = r4;
        r1_3 = r4 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_4 = call_0072d6bc(r8, r1_3, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_4 == 0) {
            r4 = *gptr<u32>(r4 + 0xcu);  // (from the original)
        } else {
            r4 = *gptr<u32>(r4 + 8u);
        }
        guest::preempt();
    } while (r4 != 0);
L_82d58c:;
    r10 = 1u;
    r11 = 0u;
    if (u32(*gptr<u8>(r9 + 0x18u)) != 0) {  // (from the original)
        goto L_82d678;
    }
    r6 = r5;
    if (r0_4 == 0) {
        goto L_82d65c;
    }
    if (r5 == *gptr<u32>(*gptr<u32>(r9 + 0x10u) + 8u)) {  // (from the original)
        r0_5 = r13 + 0x1cu;  // (from the original)
        *gptr<u32>(r13) = u32(r8);
        guest::cpu()->r[13] = r13;
        call_007fe104(r0_5, r9, r4, r6);
        r1_4 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        *gptr<u32>(r13 + 0x30u) = u32(*gptr<u32>(r13 + 0x1cu));  // (from the original)
        *gptr<u8>(r7 + 4u) = u8(r10);
        goto L_82d69c;
    }
    if (u32(*gptr<u8>(r6)) == 0) {
        if (*gptr<u32>(*gptr<u32>(r5 + 4u) + 4u) == r5) {
            r6 = *gptr<u32>(r5 + 0xcu);  // (from the original)
            goto L_82d65c;
        }
    }
    r6 = *gptr<u32>(r5 + 8u);
    if (r6 == 0) {
        goto L_82d638;
    }
    r0 = *gptr<u32>(r6 + 0xcu);  // (from the original)
    if (r0 == 0) {
        goto L_82d65c;
    }
    do {
L_82d624:;
        r6 = r0;
        r0 = *gptr<u32>(r0 + 0xcu);  // (from the original)
        guest::preempt();
    } while (r0 != 0);
    goto L_82d65c;
L_82d638:;
    r6 = *gptr<u32>(r5 + 4u);
    if (r5 != *gptr<u32>(r6 + 8u)) {
        goto L_82d65c;
    }
    do {
L_82d648:;
        r0_6 = r6;
        r6 = *gptr<u32>(r6 + 4u);
        guest::preempt();
    } while (r0_6 == *gptr<u32>(r6 + 8u));
L_82d65c:;
    r0_7 = r6 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_0072d6bc(r0_7, r8, r2, r3);
    r1_4 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_8 == 0) {
        *gptr<u32>(r13 + 0x30u) = u32(r6);  // (from the original)
        *gptr<u8>(r7 + 4u) = u8(r11);
        goto L_82d69c;
    }
L_82d678:;
    r0_9 = r13 + 0x1cu;  // (from the original)
    *gptr<u32>(r13) = u32(r8);
    guest::cpu()->r[13] = r13;
    call_007fe104(r0_9, r9, r4, r5);
    r1_4 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x30u) = u32(*gptr<u32>(r13 + 0x1cu));  // (from the original)
    *gptr<u8>(r7 + 4u) = u8(r10);
L_82d69c:;
    r4_1 = *gptr<u32>(r13 + 0x30u);  // (from the original)
    r0_10 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_11 = call_003d0d6c(r0_10, r1_4, r2_3, r3_3);
    r1_5 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_12 = r0_11 - 8u;
    guest::cpu()->r[13] = r13;
    call_003d0d6c(r0_12, r1_5, r2_4, r3_4);
    r1_6 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_003d0d6c(r0_13, r1_6, r2_5, r3_5);
    r1_7 = guest::cpu()->r[1];
    r0_14 = r4_1 + 0x18u;  // (from the original)
    r13 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[1] = r1_7;
    guest::cpu()->r[13] = r13;
    return r0_14;
}

}  // namespace d_0082d508
GUEST_EXPORT(0x0082d508, d_0082d508::f_0082d508);

// f_0082d6d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0082d6d4 {

inline constexpr guest::Function<0x003619b0, u32(u32, u32, u32, u32)> call_003619b0;  // (from the original)
inline constexpr guest::Function<0x003cef28, u32(u32, u32, u32, u32)> call_003cef28;  // (from the original)
inline constexpr guest::Function<0x003cf0b8, u32(u32, u32, u32, u32)> call_003cf0b8;  // (from the original)
inline constexpr guest::Function<0x008048c4, u32(u32, u32, u32, u32)> call_008048c4;  // (from the original)

u32 f_0082d6d4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r10 = guest::cpu()->r[10];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r8_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r6_1 = 0;
    u32 r6_2 = 0;
    u32 r7_1 = 0;
    u32 r6_3 = 0;
    u32 r0_8 = 0;
    u32 r4_1 = 0;
    u32 r0_9 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_10 = 0;
    u32 r1_5 = 0;
    u32 r0_11 = 0;
    r13 = r13 - 0x68u;  // (from the original)
    r10 = 0u;
    *gptr<u32>(r13 + 8u) = u32(r10);
    r5 = r13 + 0x40u;  // (from the original)
    r8_1 = r13 + 0x20u;  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(r10);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r10);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r10);  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(r10);  // (from the original)
    *gptr<u32>(r13 + 0x1cu) = u32(r10);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_003619b0(0xcu, r1, r2, r3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_003619b0(0x18u, r1_1, r2_1, r3_1);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u32>(r0_1 + 8u) = u32(r0_2);
    *gptr<u32>(r0_1) = u32(*gptr<u32>(r13 + 8u));
    *gptr<u32>(r0_1 + 4) = u32(1u);
    *gptr<u32>(r13 + 8u) = u32(r0_1);
    r0_3 = *gptr<u32>(r0_1 + 8u);
    *gptr<u32>(r13 + 0x10u) = u32(r0_3);  // (from the original)
    r1_2 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    r0_4 = r0_3 + 0x18u;  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r0_4);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r0_4);  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(r1_2);  // (from the original)
    *gptr<u32>(r1_2) = u32(r1_2);
    r0_5 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    r1_3 = r13 + 8u;
    *gptr<u32>(r0_5 + 4u) = u32(r0_5);
    *gptr<u32>(r13 + 0x20u) = u32(*gptr<u32>(r1));  // (from the original)
    r0_6 = r8_1 + 4u;
    guest::cpu()->r[13] = r13;
    r0_7 = call_003cef28(r0_6, r1_3, r2_2, r3_2);
    r3 = *gptr<u32>(r0 + 0x10u);  // (from the original)
    r12 = r0_7 - 4u;
    r1 = r0;
    r7 = r3;
    r2 = *gptr<u32>(r3 + 4u);
    r6_1 = 1u;
    if (r2 == 0) {
        goto L_82d7b4;
    } else {
        r0 = *gptr<u32>(r12);
    }
    do {
L_82d790:;
        r3 = r2;
        if (r0 >= *gptr<u32>(r2 + 0x10u)) {  // (from the original)
            r2 = *gptr<u32>(r3 + 0xcu);  // (from the original)
            r6_1 = 0u;
        } else {
            r2 = *gptr<u32>(r3 + 8u);
            r6_1 = 1u;
        }
        guest::preempt();
    } while (r2 != 0);
L_82d7b4:;
    r4 = 1u;
    if (u32(*gptr<u8>(r1 + 0x18u)) != 0) {  // (from the original)
        goto L_82d864;
    }
    r0 = r3;
    if (r6_1 == 0) {
        goto L_82d84c;
    }
    if (r3 == *gptr<u32>(r7 + 8u)) {
        goto L_82d864;
    }
    if (u32(*gptr<u8>(r3)) == 0) {
        if (*gptr<u32>(*gptr<u32>(r3 + 4u) + 4u) == r3) {
            r0 = *gptr<u32>(r3 + 0xcu);  // (from the original)
            goto L_82d84c;
        }
    }
    r0 = *gptr<u32>(r3 + 8u);
    if (r0 == 0) {
        goto L_82d828;
    }
    r6 = *gptr<u32>(r0 + 0xcu);  // (from the original)
    if (r6 == 0) {
        goto L_82d84c;
    }
    do {
L_82d814:;
        r0 = r6;
        r6 = *gptr<u32>(r6 + 0xcu);  // (from the original)
        guest::preempt();
    } while (r6 != 0);
    goto L_82d84c;
L_82d828:;
    r0 = *gptr<u32>(r3 + 4u);
    if (r3 != *gptr<u32>(r0 + 8u)) {
        goto L_82d84c;
    }
    do {
L_82d838:;
        r6_2 = r0;
        r0 = *gptr<u32>(r0 + 4u);
        guest::preempt();
    } while (r6_2 == *gptr<u32>(r0 + 8u));
L_82d84c:;
    r7_1 = *gptr<u32>(r12);
    r6_3 = *gptr<u32>(r0 + 0x10u);  // (from the original)
    if (r6_3 >= r7_1) {
        *gptr<u32>(r13 + 0x40u) = u32(r0);  // (from the original)
        *gptr<u8>(r5 + 4u) = u8(r10);
        goto L_82d87c;
    }
L_82d864:;
    r0_8 = r13 + 4u;
    *gptr<u32>(r13) = u32(r12);
    guest::cpu()->r[13] = r13;
    call_008048c4(r0_8, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x40u) = u32(*gptr<u32>(r13 + 4u));  // (from the original)
    *gptr<u8>(r5 + 4u) = u8(r4);
L_82d87c:;
    r4_1 = *gptr<u32>(r13 + 0x40u);  // (from the original)
    r0_9 = r13 + 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_003cf0b8(r0_9, r1, r2, r3);
    r1_4 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_10 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_003cf0b8(r0_10, r1_4, r2_3, r3_3);
    r1_5 = guest::cpu()->r[1];
    r0_11 = r4_1 + 0x14u;  // (from the original)
    r13 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return r0_11;
}

}  // namespace d_0082d6d4
GUEST_EXPORT(0x0082d6d4, d_0082d6d4::f_0082d6d4);

// f_0082d8a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0082d8a0 {

struct __attribute__((packed)) Object_0082d8a0_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_0082d8a0_0, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Object_0082d8a0_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0082d8a0_1, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0080606c, u32(u32, u32, u32, u32)> call_0080606c;  // (from the original)

u32 f_0082d8a0(gptr<Object_0082d8a0_0> arg0, gptr<Object_0082d8a0_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r7_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    r13 = r13 - 0x30u;  // (from the original)
    r4 = r13 + 8u;
    r2_1 = arg1->word_0;
    *gptr<u32>(r13 + 0x14u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r2_1);  // (from the original)
    r3 = arg0->word_10;
    r1 = r0;
    r6 = r13 + 0x10u;  // (from the original)
    r7 = r3;
    r2 = *gptr<u32>(r3 + 4u);
    r0_1 = 1u;
    if (r2 == 0) {
        goto L_82d904;
    } else {
        r12 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    }
    do {
L_82d8e0:;
        r3 = r2;
        if (r12 >= *gptr<u32>(r2 + 0x10u)) {  // (from the original)
            r2 = *gptr<u32>(r3 + 0xcu);  // (from the original)
            r0_1 = 0u;
        } else {
            r2 = *gptr<u32>(r3 + 8u);
            r0_1 = 1u;
        }
        guest::preempt();
    } while (r2 != 0);
L_82d904:;
    r5 = 1u;
    if (u32(*gptr<u8>(r1 + 0x18u)) != 0) {  // (from the original)
        goto L_82d9b0;
    }
    r12 = r3;
    if (r0_1 == 0) {
        goto L_82d9a0;
    }
    if (r3 == *gptr<u32>(r7 + 8u)) {
        goto L_82d9b0;
    }
    if (u32(*gptr<u8>(r3)) == 0) {
        if (*gptr<u32>(*gptr<u32>(r3 + 4u) + 4u) == r3) {
            r12 = *gptr<u32>(r3 + 0xcu);  // (from the original)
            goto L_82d9a0;
        }
    }
    r12 = *gptr<u32>(r3 + 8u);
    if (r12 == 0) {
        goto L_82d97c;
    }
    r0 = *gptr<u32>(r12 + 0xcu);  // (from the original)
    if (r0 == 0) {
        goto L_82d9a0;
    }
    do {
L_82d968:;
        r12 = r0;
        r0 = *gptr<u32>(r0 + 0xcu);  // (from the original)
        guest::preempt();
    } while (r0 != 0);
    goto L_82d9a0;
L_82d97c:;
    r12 = *gptr<u32>(r3 + 4u);
    if (r3 != *gptr<u32>(r12 + 8u)) {
        goto L_82d9a0;
    }
    do {
L_82d98c:;
        r0_2 = r12;
        r12 = *gptr<u32>(r12 + 4u);
        guest::preempt();
    } while (r0_2 == *gptr<u32>(r12 + 8u));
L_82d9a0:;
    r7_1 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    if (*gptr<u32>(r12 + 0x10u) >= r7_1) {  // (from the original)
        goto L_82d9cc;
    }
L_82d9b0:;
    r0_3 = r13 + 4u;
    *gptr<u32>(r13) = u32(r6);
    guest::cpu()->r[13] = r13;
    call_0080606c(r0_3, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 8u) = u32(*gptr<u32>(r13 + 4u));
    *gptr<u8>(r4 + 4u) = u8(r5);
    goto L_82d9d8;
L_82d9cc:;
    *gptr<u32>(r13 + 8u) = u32(r12);
    *gptr<u8>(r4 + 4u) = u8(0u);
L_82d9d8:;
    r0_4 = *gptr<u32>(r13 + 8u) + 0x14u;  // (from the original)
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_4;
}

}  // namespace d_0082d8a0
GUEST_EXPORT(0x0082d8a0, d_0082d8a0::f_0082d8a0);

// f_0082d9e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0082d9e8 {

struct __attribute__((packed)) Object_0082d9e8_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_0082d9e8_0, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Object_0082d9e8_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0082d9e8_1, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x008098d4, u32(u32, u32, u32, u32)> call_008098d4;  // (from the original)

u32 f_0082d9e8(gptr<Object_0082d9e8_0> arg0, gptr<Object_0082d9e8_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r7_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    r13 = r13 - 0x30u;  // (from the original)
    r4 = r13 + 8u;
    r2_1 = arg1->word_0;
    *gptr<u32>(r13 + 0x14u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r2_1);  // (from the original)
    r3 = arg0->word_10;
    r1 = r0;
    r6 = r13 + 0x10u;  // (from the original)
    r7 = r3;
    r2 = *gptr<u32>(r3 + 4u);
    r0_1 = 1u;
    if (r2 == 0) {
        goto L_82da4c;
    } else {
        r12 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    }
    do {
L_82da28:;
        r3 = r2;
        if (r12 >= *gptr<u32>(r2 + 0x10u)) {  // (from the original)
            r2 = *gptr<u32>(r3 + 0xcu);  // (from the original)
            r0_1 = 0u;
        } else {
            r2 = *gptr<u32>(r3 + 8u);
            r0_1 = 1u;
        }
        guest::preempt();
    } while (r2 != 0);
L_82da4c:;
    r5 = 1u;
    if (u32(*gptr<u8>(r1 + 0x18u)) != 0) {  // (from the original)
        goto L_82daf8;
    }
    r12 = r3;
    if (r0_1 == 0) {
        goto L_82dae8;
    }
    if (r3 == *gptr<u32>(r7 + 8u)) {
        goto L_82daf8;
    }
    if (u32(*gptr<u8>(r3)) == 0) {
        if (*gptr<u32>(*gptr<u32>(r3 + 4u) + 4u) == r3) {
            r12 = *gptr<u32>(r3 + 0xcu);  // (from the original)
            goto L_82dae8;
        }
    }
    r12 = *gptr<u32>(r3 + 8u);
    if (r12 == 0) {
        goto L_82dac4;
    }
    r0 = *gptr<u32>(r12 + 0xcu);  // (from the original)
    if (r0 == 0) {
        goto L_82dae8;
    }
    do {
L_82dab0:;
        r12 = r0;
        r0 = *gptr<u32>(r0 + 0xcu);  // (from the original)
        guest::preempt();
    } while (r0 != 0);
    goto L_82dae8;
L_82dac4:;
    r12 = *gptr<u32>(r3 + 4u);
    if (r3 != *gptr<u32>(r12 + 8u)) {
        goto L_82dae8;
    }
    do {
L_82dad4:;
        r0_2 = r12;
        r12 = *gptr<u32>(r12 + 4u);
        guest::preempt();
    } while (r0_2 == *gptr<u32>(r12 + 8u));
L_82dae8:;
    r7_1 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    if (*gptr<u32>(r12 + 0x10u) >= r7_1) {  // (from the original)
        goto L_82db14;
    }
L_82daf8:;
    r0_3 = r13 + 4u;
    *gptr<u32>(r13) = u32(r6);
    guest::cpu()->r[13] = r13;
    call_008098d4(r0_3, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 8u) = u32(*gptr<u32>(r13 + 4u));
    *gptr<u8>(r4 + 4u) = u8(r5);
    goto L_82db20;
L_82db14:;
    *gptr<u32>(r13 + 8u) = u32(r12);
    *gptr<u8>(r4 + 4u) = u8(0u);
L_82db20:;
    r0_4 = *gptr<u32>(r13 + 8u) + 0x14u;  // (from the original)
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_4;
}

}  // namespace d_0082d9e8
GUEST_EXPORT(0x0082d9e8, d_0082d9e8::f_0082d9e8);

// f_0082db30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0082db30 {

struct __attribute__((packed)) Object_0082db30_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_0082db30_0, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Object_0082db30_1 {
    u16 half_0;
};
GUEST_OFFSET(Object_0082db30_1, half_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0080aac4, u32(u32, u32, u32, u32)> call_0080aac4;  // (from the original)

u32 f_0082db30(gptr<Object_0082db30_0> arg0, gptr<Object_0082db30_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r7_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    r13 = r13 - 0x30u;  // (from the original)
    r6 = r13 + 0x10u;  // (from the original)
    r2_1 = u32(arg1->half_0);
    *gptr<u32>(r13 + 0x14u) = u32(0u);  // (from the original)
    *gptr<u16>(r13 + 0x10u) = u16(r2_1);  // (from the original)
    r3 = arg0->word_10;
    r1 = r0;
    r4 = r13 + 8u;
    r7 = r3;
    r2 = *gptr<u32>(r3 + 4u);
    r0_1 = 1u;
    if (r2 == 0) {
        goto L_82db94;
    } else {
        r12 = u32(*gptr<u16>(r6));
    }
    do {
L_82db70:;
        r3 = r2;
        if (r12 >= u32(*gptr<u16>(r2 + 0x10u))) {  // (from the original)
            r2 = *gptr<u32>(r3 + 0xcu);  // (from the original)
            r0_1 = 0u;
        } else {
            r2 = *gptr<u32>(r3 + 8u);
            r0_1 = 1u;
        }
        guest::preempt();
    } while (r2 != 0);
L_82db94:;
    r5 = 1u;
    if (u32(*gptr<u8>(r1 + 0x18u)) != 0) {  // (from the original)
        goto L_82dc40;
    }
    r12 = r3;
    if (r0_1 == 0) {
        goto L_82dc30;
    }
    if (r3 == *gptr<u32>(r7 + 8u)) {
        goto L_82dc40;
    }
    if (u32(*gptr<u8>(r3)) == 0) {
        if (*gptr<u32>(*gptr<u32>(r3 + 4u) + 4u) == r3) {
            r12 = *gptr<u32>(r3 + 0xcu);  // (from the original)
            goto L_82dc30;
        }
    }
    r12 = *gptr<u32>(r3 + 8u);
    if (r12 == 0) {
        goto L_82dc0c;
    }
    r0 = *gptr<u32>(r12 + 0xcu);  // (from the original)
    if (r0 == 0) {
        goto L_82dc30;
    }
    do {
L_82dbf8:;
        r12 = r0;
        r0 = *gptr<u32>(r0 + 0xcu);  // (from the original)
        guest::preempt();
    } while (r0 != 0);
    goto L_82dc30;
L_82dc0c:;
    r12 = *gptr<u32>(r3 + 4u);
    if (r3 != *gptr<u32>(r12 + 8u)) {
        goto L_82dc30;
    }
    do {
L_82dc1c:;
        r0_2 = r12;
        r12 = *gptr<u32>(r12 + 4u);
        guest::preempt();
    } while (r0_2 == *gptr<u32>(r12 + 8u));
L_82dc30:;
    r7_1 = u32(*gptr<u16>(r6));
    if (u32(*gptr<u16>(r12 + 0x10u)) >= r7_1) {  // (from the original)
        goto L_82dc5c;
    }
L_82dc40:;
    r0_3 = r13 + 4u;
    *gptr<u32>(r13) = u32(r6);
    guest::cpu()->r[13] = r13;
    call_0080aac4(r0_3, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 8u) = u32(*gptr<u32>(r13 + 4u));
    *gptr<u8>(r4 + 4u) = u8(r5);
    goto L_82dc68;
L_82dc5c:;
    *gptr<u32>(r13 + 8u) = u32(r12);
    *gptr<u8>(r4 + 4u) = u8(0u);
L_82dc68:;
    r0_4 = *gptr<u32>(r13 + 8u) + 0x14u;  // (from the original)
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_4;
}

}  // namespace d_0082db30
GUEST_EXPORT(0x0082db30, d_0082db30::f_0082db30);

// f_0082dc78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0082dc78 {

struct __attribute__((packed)) Object_0082dc78_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_0082dc78_0, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Object_0082dc78_1 {
    u16 half_0;
};
GUEST_OFFSET(Object_0082dc78_1, half_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0080c000, u32(u32, u32, u32, u32)> call_0080c000;  // (from the original)

u32 f_0082dc78(gptr<Object_0082dc78_0> arg0, gptr<Object_0082dc78_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r7_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    r13 = r13 - 0x30u;  // (from the original)
    r6 = r13 + 0x10u;  // (from the original)
    r2_1 = u32(arg1->half_0);
    *gptr<u32>(r13 + 0x14u) = u32(0u);  // (from the original)
    *gptr<u16>(r13 + 0x10u) = u16(r2_1);  // (from the original)
    r3 = arg0->word_10;
    r1 = r0;
    r4 = r13 + 8u;
    r7 = r3;
    r2 = *gptr<u32>(r3 + 4u);
    r0_1 = 1u;
    if (r2 == 0) {
        goto L_82dcdc;
    } else {
        r12 = u32(*gptr<u16>(r6));
    }
    do {
L_82dcb8:;
        r3 = r2;
        if (r12 >= u32(*gptr<u16>(r2 + 0x10u))) {  // (from the original)
            r2 = *gptr<u32>(r3 + 0xcu);  // (from the original)
            r0_1 = 0u;
        } else {
            r2 = *gptr<u32>(r3 + 8u);
            r0_1 = 1u;
        }
        guest::preempt();
    } while (r2 != 0);
L_82dcdc:;
    r5 = 1u;
    if (u32(*gptr<u8>(r1 + 0x18u)) != 0) {  // (from the original)
        goto L_82dd88;
    }
    r12 = r3;
    if (r0_1 == 0) {
        goto L_82dd78;
    }
    if (r3 == *gptr<u32>(r7 + 8u)) {
        goto L_82dd88;
    }
    if (u32(*gptr<u8>(r3)) == 0) {
        if (*gptr<u32>(*gptr<u32>(r3 + 4u) + 4u) == r3) {
            r12 = *gptr<u32>(r3 + 0xcu);  // (from the original)
            goto L_82dd78;
        }
    }
    r12 = *gptr<u32>(r3 + 8u);
    if (r12 == 0) {
        goto L_82dd54;
    }
    r0 = *gptr<u32>(r12 + 0xcu);  // (from the original)
    if (r0 == 0) {
        goto L_82dd78;
    }
    do {
L_82dd40:;
        r12 = r0;
        r0 = *gptr<u32>(r0 + 0xcu);  // (from the original)
        guest::preempt();
    } while (r0 != 0);
    goto L_82dd78;
L_82dd54:;
    r12 = *gptr<u32>(r3 + 4u);
    if (r3 != *gptr<u32>(r12 + 8u)) {
        goto L_82dd78;
    }
    do {
L_82dd64:;
        r0_2 = r12;
        r12 = *gptr<u32>(r12 + 4u);
        guest::preempt();
    } while (r0_2 == *gptr<u32>(r12 + 8u));
L_82dd78:;
    r7_1 = u32(*gptr<u16>(r6));
    if (u32(*gptr<u16>(r12 + 0x10u)) >= r7_1) {  // (from the original)
        goto L_82dda4;
    }
L_82dd88:;
    r0_3 = r13 + 4u;
    *gptr<u32>(r13) = u32(r6);
    guest::cpu()->r[13] = r13;
    call_0080c000(r0_3, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 8u) = u32(*gptr<u32>(r13 + 4u));
    *gptr<u8>(r4 + 4u) = u8(r5);
    goto L_82ddb0;
L_82dda4:;
    *gptr<u32>(r13 + 8u) = u32(r12);
    *gptr<u8>(r4 + 4u) = u8(0u);
L_82ddb0:;
    r0_4 = *gptr<u32>(r13 + 8u) + 0x14u;  // (from the original)
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_4;
}

}  // namespace d_0082dc78
GUEST_EXPORT(0x0082dc78, d_0082dc78::f_0082dc78);

// f_0082ddc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0082ddc0 {

struct __attribute__((packed)) Object_0082ddc0_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0082ddc0_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x003619b0, u32(u32, u32, u32, u32)> call_003619b0;  // (from the original)

u32 f_0082ddc0(gptr<Object_0082ddc0_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 ea_1 = 0;
    u32 r0_7 = 0;
    u32 ea_2 = 0;
    u32 r0_8 = 0;
    u32 r1_2 = 0;
    u32 ea_3 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r0_1 = arg0->word_0;
    r4_1 = 1u;
    if (r1 != 0) {
        goto L_82ddfc;
    }
    if (r0_1 == 0) {
        r4_1 = 0x20u;  // (from the original)
        goto L_82ddfc;
    }
    r0_2 = *gptr<u32>(r0_1 + 4u);
    r1 = r0_2 + (r0_2 >> 1);
    r4_1 = r1 + (r0_2 >> 3);
    r0_3 = r0_2 + 0x20u;  // (from the original)
    if (r0_3 > r4_1) {
        r4_1 = r0_3;
    }
L_82ddfc:;
    guest::cpu()->r[13] = r13;
    r0_4 = call_003619b0(0xcu, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_5 = (r4_1 << 3) - r4_1 << 4;
    guest::cpu()->r[13] = r13;
    r0_6 = call_003619b0(r0_5, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    ea_1 = r0_4 + 8u;
    *gptr<u32>(ea_1) = u32(r0_6);
    r0_7 = *gptr<u32>(r0);
    *gptr<u32>(r0_4) = u32(r0_7);
    *gptr<u32>(r0_4 + 4) = u32(r4_1);
    *gptr<u32>(r0) = u32(r0_4);
    ea_2 = r0_4 + 8u;
    r0_8 = *gptr<u32>(ea_2);
    r1_2 = r0_8 + ((r4_1 << 3) - r4_1 << 4);
    ea_3 = r0 + 8u;
    *gptr<u32>(ea_3) = u32(r0_8);
    *gptr<u32>(ea_3 + 4) = u32(r1_2);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_8;
}

}  // namespace d_0082ddc0
GUEST_EXPORT(0x0082ddc0, d_0082ddc0::f_0082ddc0);

// f_0082e454: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0082e454 {

struct __attribute__((packed)) Object_0082e454_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0082e454_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x003619b0, u32(u32, u32, u32, u32)> call_003619b0;  // (from the original)

u32 f_0082e454(gptr<Object_0082e454_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 ea_1 = 0;
    u32 r0_7 = 0;
    u32 ea_2 = 0;
    u32 r0_8 = 0;
    u32 r1_2 = 0;
    u32 ea_3 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r0_1 = arg0->word_0;
    r4_1 = 1u;
    if (r1 != 0) {
        goto L_82e490;
    }
    if (r0_1 == 0) {
        r4_1 = 0x20u;  // (from the original)
        goto L_82e490;
    }
    r0_2 = *gptr<u32>(r0_1 + 4u);
    r1 = r0_2 + (r0_2 >> 1);
    r4_1 = r1 + (r0_2 >> 3);
    r0_3 = r0_2 + 0x20u;  // (from the original)
    if (r0_3 > r4_1) {
        r4_1 = r0_3;
    }
L_82e490:;
    guest::cpu()->r[13] = r13;
    r0_4 = call_003619b0(0xcu, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_5 = r4_1 << 4;
    guest::cpu()->r[13] = r13;
    r0_6 = call_003619b0(r0_5, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    ea_1 = r0_4 + 8u;
    *gptr<u32>(ea_1) = u32(r0_6);
    r0_7 = *gptr<u32>(r0);
    *gptr<u32>(r0_4) = u32(r0_7);
    *gptr<u32>(r0_4 + 4) = u32(r4_1);
    *gptr<u32>(r0) = u32(r0_4);
    ea_2 = r0_4 + 8u;
    r0_8 = *gptr<u32>(ea_2);
    r1_2 = r0_8 + (r4_1 << 4);
    ea_3 = r0 + 8u;
    *gptr<u32>(ea_3) = u32(r0_8);
    *gptr<u32>(ea_3 + 4) = u32(r1_2);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_8;
}

}  // namespace d_0082e454
GUEST_EXPORT(0x0082e454, d_0082e454::f_0082e454);

// f_0082f1e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0082f1e0 {

struct __attribute__((packed)) Object_0082f1e0_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0082f1e0_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x003619b0, u32(u32, u32, u32, u32)> call_003619b0;  // (from the original)

u32 f_0082f1e0(gptr<Object_0082f1e0_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 ea_1 = 0;
    u32 r0_7 = 0;
    u32 ea_2 = 0;
    u32 r0_8 = 0;
    u32 r1_2 = 0;
    u32 ea_3 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r0_1 = arg0->word_0;
    r4_1 = 1u;
    if (r1 != 0) {
        goto L_82f21c;
    }
    if (r0_1 == 0) {
        r4_1 = 0x20u;  // (from the original)
        goto L_82f21c;
    }
    r0_2 = *gptr<u32>(r0_1 + 4u);
    r1 = r0_2 + (r0_2 >> 1);
    r4_1 = r1 + (r0_2 >> 3);
    r0_3 = r0_2 + 0x20u;  // (from the original)
    if (r0_3 > r4_1) {
        r4_1 = r0_3;
    }
L_82f21c:;
    guest::cpu()->r[13] = r13;
    r0_4 = call_003619b0(0xcu, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_5 = r4_1 + (r4_1 << 2) << 5;
    guest::cpu()->r[13] = r13;
    r0_6 = call_003619b0(r0_5, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    ea_1 = r0_4 + 8u;
    *gptr<u32>(ea_1) = u32(r0_6);
    r0_7 = *gptr<u32>(r0);
    *gptr<u32>(r0_4) = u32(r0_7);
    *gptr<u32>(r0_4 + 4) = u32(r4_1);
    *gptr<u32>(r0) = u32(r0_4);
    ea_2 = r0_4 + 8u;
    r0_8 = *gptr<u32>(ea_2);
    r1_2 = r0_8 + (r4_1 + (r4_1 << 2) << 5);
    ea_3 = r0 + 8u;
    *gptr<u32>(ea_3) = u32(r0_8);
    *gptr<u32>(ea_3 + 4) = u32(r1_2);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_8;
}

}  // namespace d_0082f1e0
GUEST_EXPORT(0x0082f1e0, d_0082f1e0::f_0082f1e0);

// f_0082f424: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0082f424 {

struct __attribute__((packed)) Object_0082f424_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0082f424_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x003619b0, u32(u32, u32, u32, u32)> call_003619b0;  // (from the original)

u32 f_0082f424(gptr<Object_0082f424_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 ea_1 = 0;
    u32 r0_7 = 0;
    u32 ea_2 = 0;
    u32 r0_8 = 0;
    u32 r1_2 = 0;
    u32 ea_3 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r0_1 = arg0->word_0;
    r4_1 = 1u;
    if (r1 != 0) {
        goto L_82f460;
    }
    if (r0_1 == 0) {
        r4_1 = 0x20u;  // (from the original)
        goto L_82f460;
    }
    r0_2 = *gptr<u32>(r0_1 + 4u);
    r1 = r0_2 + (r0_2 >> 1);
    r4_1 = r1 + (r0_2 >> 3);
    r0_3 = r0_2 + 0x20u;  // (from the original)
    if (r0_3 > r4_1) {
        r4_1 = r0_3;
    }
L_82f460:;
    guest::cpu()->r[13] = r13;
    r0_4 = call_003619b0(0xcu, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_5 = r4_1 + (r4_1 << 1) << 2;
    guest::cpu()->r[13] = r13;
    r0_6 = call_003619b0(r0_5, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    ea_1 = r0_4 + 8u;
    *gptr<u32>(ea_1) = u32(r0_6);
    r0_7 = *gptr<u32>(r0);
    *gptr<u32>(r0_4) = u32(r0_7);
    *gptr<u32>(r0_4 + 4) = u32(r4_1);
    *gptr<u32>(r0) = u32(r0_4);
    ea_2 = r0_4 + 8u;
    r0_8 = *gptr<u32>(ea_2);
    r1_2 = r0_8 + (r4_1 + (r4_1 << 1) << 2);
    ea_3 = r0 + 8u;
    *gptr<u32>(ea_3) = u32(r0_8);
    *gptr<u32>(ea_3 + 4) = u32(r1_2);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_8;
}

}  // namespace d_0082f424
GUEST_EXPORT(0x0082f424, d_0082f424::f_0082f424);

// f_0082f49c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0082f49c {

struct __attribute__((packed)) Object_0082f49c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x8];  // (not used here)
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_0082f49c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0082f49c_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0082f49c_0, word_14, 0x14);  // (from the original)


void f_0082f49c(gptr<Object_0082f49c_0> arg0, float S0) {
    u32 r1 = 0;
    u32 r3 = 0;
    u32 r12_1 = 0;
    u32 r2_1 = 0;
    guest::cpu()->r[13] -= 4u;
    r3 = arg0->word_10;
    r1 = *gptr<u32>(r3);
    if (r1 == r3) {
        guest::cpu()->r[13] += 4u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return;
    }
L_82f4b0:;
    r12_1 = arg0->word_10;
    r2_1 = r1;
    if (r1 == r12_1) {
        r1 = r12_1;
        goto L_82f4f4;
    }
    S0 = std::bit_cast<float>(*gptr<u32>(r2_1));
    r1 = *gptr<u32>(r2_1);
    *gptr<u32>(*gptr<u32>(r2_1 + 4u)) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(*gptr<u32>(r2_1) + 4u) = u32(*gptr<u32>(r2_1 + 4));
    arg0->word_14 = u32(arg0->word_14 - 1u);
    *gptr<u32>(r2_1) = u32(arg0->word_4);
    arg0->word_4 = u32(r2_1);
L_82f4f4:;
    if (r1 != r3) {
        guest::preempt();
        goto L_82f4b0;
    }
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return;
}

}  // namespace d_0082f49c
GUEST_EXPORT(0x0082f49c, d_0082f49c::f_0082f49c);

// f_0082f504: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0082f504 {

struct __attribute__((packed)) Object_0082f504_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_0082f504_0, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x00361988, u32(u32, u32, u32, u32)> call_00361988;  // (from the original)
inline constexpr guest::Function<0x0082f49c, u32(u32, u32, u32, u32)> call_0082f49c;  // (from the original)

u32 f_0082f504(gptr<Object_0082f504_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    if (arg0->word_10 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r4;
    }
    call_0082f49c(r4, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_1 = *gptr<u32>(r4 + 0x10u);  // (from the original)
    r1 = *gptr<u32>(r4 + 4u);
    *gptr<u32>(r0_1) = u32(r1);
    *gptr<u32>(r4 + 4u) = u32(r0_1);
    r0 = *gptr<u32>(r4);
    if (r0 == 0) {
        goto L_82f568;
    }
    do {
L_82f53c:;
        *gptr<u32>(r4) = u32(*gptr<u32>(r0));
        r0_2 = *gptr<u32>(r0 + 8u);
        call_00361988(r0_2, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        call_00361988(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0 = *gptr<u32>(r4);
        guest::preempt();
    } while (r0 != 0);
L_82f568:;
    *gptr<u32>(r4 + 4u) = u32(0u);
    *gptr<u32>(r4 + 8u) = u32(0u);
    *gptr<u32>(r4 + 0xcu) = u32(0u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r4;
}

}  // namespace d_0082f504
GUEST_EXPORT(0x0082f504, d_0082f504::f_0082f504);
