// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_00220c28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00220c28 {

struct __attribute__((packed)) Object_00220c28_0 {
    u8 unknown_0[0xb28c];  // (not used here)
    u32 word_b28c;
};
GUEST_OFFSET(Object_00220c28_0, word_b28c, 0xb28c);  // (from the original)

inline constexpr guest::Function<0x0060e094, u32(u32, u32, u32, u32)> call_0060e094;  // (from the original)
inline constexpr guest::Function<0x0060e0cc, u32(u32, u32, u32, u32)> call_0060e0cc;  // (from the original)

u32 f_00220c28(gptr<Object_00220c28_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r5_1 = 0;
    u32 zf_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4_1 = r0 + 0xb000u;  // (from the original)
    r0_1 = arg0->word_b28c;
    r5_1 = r0 + (r1 * 0xc5u << 2) + 0x2b1cu;  // (from the original)
    zf_1 = r0_1 == r5_1;
    if (!zf_1) {
        zf_1 = r0_1 == 0;
    }
    if (!zf_1) {
        r1_1 = u32(*gptr<u8>(r0_1 + 0x26bu));  // (from the original)
        if (r1_1 == 1u) {
            call_0060e0cc(r0_1, r1_1, r0, guest::cpu()->r[3]);
        }
    }
    *gptr<u32>(r4_1 + 0x28cu) = u32(r5_1);  // (from the original)
    *gptr<u8>(r4_1 + 0x3a8u) = u8(2u);  // (from the original)
    *gptr<u32>(r4_1 + 0x3c0u) = u32(r1);  // (from the original)
    r1_2 = u32(*gptr<u8>(r5_1 + 0x26bu));  // (from the original)
    if (r1_2 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_0060e094(r5_1, r1_2, 2u, guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r5_1;
}

}  // namespace d_00220c28
GUEST_EXPORT(0x00220c28, d_00220c28::f_00220c28);

// f_0022105c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022105c {

struct __attribute__((packed)) Object_0022105c_0 {
    u8 unknown_0[0xb28c];  // (not used here)
    u32 word_b28c;
};
GUEST_OFFSET(Object_0022105c_0, word_b28c, 0xb28c);  // (from the original)

inline constexpr guest::Function<0x0060e094, u32(u32, u32, u32, u32)> call_0060e094;  // (from the original)
inline constexpr guest::Function<0x0060e0cc, u32(u32, u32, u32, u32)> call_0060e0cc;  // (from the original)

u32 f_0022105c(gptr<Object_0022105c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r5_1 = 0;
    u32 zf_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4_1 = r0 + 0xb000u;  // (from the original)
    r0_1 = arg0->word_b28c;
    r5_1 = r0 + (r1 * 0xc5u << 2) + 4u;  // (from the original)
    zf_1 = r0_1 == r5_1;
    if (!zf_1) {
        zf_1 = r0_1 == 0;
    }
    if (!zf_1) {
        r1_1 = u32(*gptr<u8>(r0_1 + 0x26bu));  // (from the original)
        if (r1_1 == 1u) {
            call_0060e0cc(r0_1, r1_1, r0, guest::cpu()->r[3]);
        }
    }
    *gptr<u32>(r4_1 + 0x28cu) = u32(r5_1);  // (from the original)
    *gptr<u8>(r4_1 + 0x3a8u) = u8(1u);  // (from the original)
    *gptr<u32>(r4_1 + 0x3c0u) = u32(r1);  // (from the original)
    r1_2 = u32(*gptr<u8>(r5_1 + 0x26bu));  // (from the original)
    if (r1_2 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_0060e094(r5_1, r1_2, 1u, guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r5_1;
}

}  // namespace d_0022105c
GUEST_EXPORT(0x0022105c, d_0022105c::f_0022105c);

// f_002214e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002214e4 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x0060e094, u32(u32, u32, u32, u32)> call_0060e094;  // (from the original)
inline constexpr guest::Function<0x0060e0cc, u32(u32, u32, u32, u32)> call_0060e0cc;  // (from the original)

u32 f_002214e4(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r3_2 = 0;
    u32 r4_1 = 0;
    u32 r0_3 = 0;
    u32 r5_1 = 0;
    u32 zf_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_002f74c8(r0, r1, guest::cpu()->r[2], r3);
    r3_1 = guest::cpu()->r[3];
    r0_2 = call_002f74e0(0x20u, r0_1, guest::cpu()->r[2], r3_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    r4_1 = r0 + 0xb000u;  // (from the original)
    r0_3 = *gptr<u32>(r4_1 + 0x28cu);  // (from the original)
    r5_1 = r0 + 0xac64u;  // (from the original)
    zf_1 = r0_3 == r5_1;
    if (!zf_1) {
        zf_1 = r0_3 == 0;
    }
    if (!zf_1) {
        r1_2 = u32(*gptr<u8>(r0_3 + 0x26bu));  // (from the original)
        if (r1_2 == 1u) {
            call_0060e0cc(r0_3, r1_2, guest::cpu()->r[2], r3_2);
        }
    }
    *gptr<u32>(r4_1 + 0x28cu) = u32(r5_1);  // (from the original)
    *gptr<u8>(r4_1 + 0x3a8u) = u8(5u);  // (from the original)
    *gptr<u32>(r4_1 + 0x3c0u) = u32(0u);  // (from the original)
    r1_1 = u32(*gptr<u8>(r5_1 + 0x26bu));  // (from the original)
    r0_2 = r5_1;
    if (r1_1 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0060e094(r0_2, r1_1, guest::cpu()->r[2], 5u);
}

}  // namespace d_002214e4
GUEST_EXPORT(0x002214e4, d_002214e4::f_002214e4);

// f_00221790: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00221790 {

struct __attribute__((packed)) Object_00221790_0 {
    u8 unknown_0[0xb290];  // (not used here)
    u32 word_b290;
};
GUEST_OFFSET(Object_00221790_0, word_b290, 0xb290);  // (from the original)

inline constexpr guest::Function<0x002213bc, u32(u32, u32, u32, u32)> call_002213bc;  // (from the original)
inline constexpr guest::Function<0x006a923c, u32(u32, u32, u32, u32)> call_006a923c;  // (from the original)

u32 f_00221790(gptr<Object_00221790_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r12_1 = 0;
    u32 r3_2 = 0;
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r6_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r6_2 = 0;
    u32 r7_1 = 0;
    u32 r0_5 = 0;
    u32 r6_3 = 0;
    u32 r6_4 = 0;
    u32 r7_2 = 0;
    u32 r0_6 = 0;
    u32 r6_5 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r5 = r0;
    r4 = r5 + 0xb000u;  // (from the original)
    r0 = 0u;
    r2 = 1u;
    r1 = r2;
    arg0->word_b290 = u32(r0);
    do {
L_2217ac:;
        r3_1 = r5 + (r2 << 2);
        r2_1 = r2 + 1u;
        r12_1 = r3_1 + 0xb000u;  // (from the original)
        r3_2 = r5 + (r2_1 << 2) + 0xb000u;  // (from the original)
        r1 = r1 + 2u;
        *gptr<u32>(r12_1 + 0x290u) = u32(r0);  // (from the original)
        res_1 = r1 - 0x19u;  // (from the original)
        r2 = r2_1 + 1u;
        *gptr<u32>(r3_2 + 0x290u) = u32(r0);  // (from the original)
        guest::preempt();
    } while (res_1 >> 0x1f != ((r1 ^ 0x19u) & (r1 ^ res_1)) >> 0x1f);  // (from the original)
    *gptr<u32>(r4 + 0x3c4u) = u32(r0);  // (from the original)
    r0_1 = r5 + 0xac64u;  // (from the original)
    r0_2 = call_006a923c(r0_1, r1, r2, r3_2);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        *gptr<u32>(r5 + (*gptr<u32>(r4 + 0x3c4u) << 2) + 0xb290u) = u32(r0_1);  // (from the original)
        *gptr<u32>(r4 + 0x3c4u) = u32(*gptr<u32>(r4 + 0x3c4u) + 1u);  // (from the original)
    }
    r4 = 0u;
    do {
L_221818:;
        r6_1 = r5 + (r4 * 0xc5u << 2);  // (from the original)
        r0_3 = r6_1 + 4u;
        r0_4 = call_006a923c(r0_3, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0_4 == 0)) {
            r1_1 = r6_1 + 4u;
            call_002213bc(r5, r1_1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(0xeu));  // (from the original)
    r4 = 0u;
L_221854:;
    r6_2 = r5 + (r4 * 0xc5u << 2);  // (from the original)
    r7_1 = r6_2 + 0x2b1cu;  // (from the original)
    r0_5 = call_006a923c(r7_1, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_5 == 0) {
        goto L_22189c;
    }
    r6_3 = r6_2 + 0x2d84u;  // (from the original)
    if (u32(*gptr<u8>(r6_3)) == 8u) {
        goto L_22189c;
    }
    call_002213bc(r5, r7_1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_22189c:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_221854;
    }
    r4 = 0u;
L_2218ac:;
    r6_4 = r5 + (r4 * 0xc5u << 2);  // (from the original)
    r7_2 = r6_4 + 0x2b1cu;  // (from the original)
    r0_6 = call_006a923c(r7_2, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_6 == 0) {
        goto L_2218f4;
    }
    r6_5 = r6_4 + 0x2d84u;  // (from the original)
    r0_6 = u32(*gptr<u8>(r6_5));
    if (r0_6 != 8u) {
        goto L_2218f4;
    }
    r0_6 = call_002213bc(r5, r7_2, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_2218f4:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_2218ac;
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_6;
}

}  // namespace d_00221790
GUEST_EXPORT(0x00221790, d_00221790::f_00221790);

// f_002224fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002224fc {


u32 f_002224fc(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4_1 = 0;
    u32 res_1 = 0;
    u32 r0_1 = 0;
    r3 = 0u;
    r1 = r3;
    r2 = r3;
    guest::cpu()->r[13] -= 8u;
    do {
L_22250c:;
        r1 = r1 + 2u;
        r4_1 = r0 + ((r3 + 1u) * 0xc5u << 2) + 0x2d74u;  // (from the original)
        *gptr<u32>(r0 + (r3 * 0xc5u << 2) + 0x2d74u) = u32(r2);  // (from the original)
        res_1 = r1 - 0xau;  // (from the original)
        r3 = r3 + 2u;
        *gptr<u32>(r4_1) = u32(r2);
        guest::preempt();
    } while (res_1 >> 0x1f != ((r1 ^ 0xau) & (r1 ^ res_1)) >> 0x1f);  // (from the original)
    r0_1 = r0 + 0xaebcu;  // (from the original)
    *gptr<u32>(r0_1) = u32(r2);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_002224fc
GUEST_EXPORT(0x002224fc, d_002224fc::f_002224fc);

// f_00222ebc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00222ebc {

struct __attribute__((packed)) Object_00222ebc_0 {
    u8 unknown_0[0xb2f4];  // (not used here)
    u32 word_b2f4;
};
GUEST_OFFSET(Object_00222ebc_0, word_b2f4, 0xb2f4);  // (from the original)

inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> call_001323b4;  // (from the original)
inline constexpr guest::Function<0x006a923c, u32(u32, u32, u32, u32)> call_006a923c;  // (from the original)

u32 f_00222ebc(gptr<Object_00222ebc_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
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
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0_1 = arg0->word_b2f4;
    if (r0_1 != 0) {
        call_001323b4(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r5 = 0u;
    do {
L_222ed8:;
        r0_2 = r4 + (r5 * 0xc5u << 2) + 0x10cu;  // (from the original)
        call_001323b4(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r5 = r5 + 1u;
        guest::preempt();
    } while (s32(r5) < s32(0xeu));  // (from the original)
    r5 = 0u;
    do {
L_222efc:;
        r0_3 = r4 + (r5 * 0xc5u << 2) + 0x2c24u;  // (from the original)
        call_001323b4(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r5 = r5 + 1u;
        guest::preempt();
    } while (s32(r5) < s32(0xau));  // (from the original)
    r5 = 0u;
    do {
L_222f24:;
        r0_4 = r4 + (r5 * 0xc5u << 2) + 0x4aecu;  // (from the original)
        call_001323b4(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r5 = r5 + 1u;
        guest::preempt();
    } while (s32(r5) < s32(8u));
    r5 = 0u;
    do {
L_222f4c:;
        r0_5 = r4 + (r5 * 0xc5u << 2) + 0x7c2cu;  // (from the original)
        call_001323b4(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r5 = r5 + 1u;
        guest::preempt();
    } while (s32(r5) < s32(0x10u));  // (from the original)
    r5 = 0u;
    do {
L_222f74:;
        r0_6 = r4 + (r5 * 0xc5u << 2) + 0x638cu;  // (from the original)
        call_001323b4(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r5 = r5 + 1u;
        guest::preempt();
    } while (s32(r5) < s32(8u));
    r0_7 = r4 + 0xac64u;  // (from the original)
    r0_8 = call_006a923c(r0_7, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_8 != 0) {
        r0_9 = r4 + 0xad6cu;  // (from the original)
        call_001323b4(r0_9, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0_10 = r4 + 0x8000u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r0_11 = r0_10 + 0x3080u;  // (from the original)
    return call_001323b4(r0_11, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00222ebc
GUEST_EXPORT(0x00222ebc, d_00222ebc::f_00222ebc);

// f_002230d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002230d8 {

struct __attribute__((packed)) Object_002230d8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_002230d8_0, word_0, 0x0);  // (from the original)

inline guest::global<u32, 0x00223274> global_00223274;  // (from the original)
inline guest::global<u32, 0x00223278> global_00223278;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x0060e5c0, u32(u32, u32, u32, u32)> call_0060e5c0;  // (from the original)
inline constexpr guest::Function<0x0081d248, u32(u32, u32, u32, u32)> call_0081d248;  // (from the original)

u32 f_002230d8(gptr<Object_002230d8_0> arg0, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    float S0_4 = 0;
    float S1_4 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_5 = 0;
    float S1_5 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_6 = 0;
    float S1_6 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    float S0_7 = 0;
    float S1_7 = 0;
    u32 r0_15 = 0;
    u32 r1_3 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    float S0_8 = 0;
    float S1_8 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r2_5 = 0;
    u32 r2_6 = 0;
    u32 r3_4 = 0;
    u32 r2_7 = 0;
    u32 r12_1 = 0;
    u32 r3_5 = 0;
    u32 res_1 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0x8edfa0u);  // (from the original)
    r0_1 = r0 + 4u;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_2 = call_00301d0c(r0_1, 0x60e5c0u, 0x314u, 0xeu);  // (from the original)
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    r0_3 = r0_2 + 0x2b18u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    r0_4 = call_00301d0c(r0_3, 0x60e5c0u, 0x314u, 0xau);  // (from the original)
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    r0_5 = r0_4 + 0x1ec8u;  // (from the original)
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    r0_6 = call_00301d0c(r0_5, 0x60e5c0u, 0x314u, 8u);  // (from the original)
    S0_3 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    r0_7 = r0_6 + (0x314u << 3);  // (from the original)
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    r0_8 = call_00301d0c(r0_7, 0x60e5c0u, 0x314u, 8u);  // (from the original)
    S0_4 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    r0_9 = r0_8 + (0x314u << 3);  // (from the original)
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    r0_10 = call_00301d0c(r0_9, 0x60e5c0u, 0x314u, 0x10u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_5 = guest::cpu()->s[0];
    S1_5 = guest::cpu()->s[1];
    r0_11 = r0_10 + 0x3140u;  // (from the original)
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_5;
    r0_12 = call_0060e5c0(r0_11, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_6 = guest::cpu()->s[0];
    S1_6 = guest::cpu()->s[1];
    r0_13 = r0_12 + 0x314u;  // (from the original)
    guest::cpu()->s[0] = S0_6;
    guest::cpu()->s[1] = S1_6;
    r0_14 = call_0060e5c0(r0_13, r1_2, r2_2, r3_2);
    S0_7 = guest::cpu()->s[0];
    S1_7 = guest::cpu()->s[1];
    r0_15 = r0_14 - 0xaf78u;  // (from the original)
    r1_3 = r0_15 + 0xb000u;  // (from the original)
    r4 = 0u;
    *gptr<u32>(r1_3 + 0x28cu) = u32(r4);  // (from the original)
    *gptr<u32>(r1_3 + 0x2f4u) = u32(r4);  // (from the original)
    *gptr<u32>(r1_3 + 0x2f8u) = u32(r4);  // (from the original)
    r0_16 = r0_15 + 0xb2fcu;  // (from the original)
    guest::cpu()->s[0] = S0_7;
    guest::cpu()->s[1] = S1_7;
    r0_17 = call_00301d0c(r0_16, 0x125aecu, 0x28u, 2u);  // (from the original)
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    S0_8 = guest::cpu()->s[0];
    S1_8 = guest::cpu()->s[1];
    r0_18 = r0_17 - 0xb2fcu;  // (from the original)
    *gptr<u32>(0xb34cu + r0_18) = u32(r4);  // (from the original)
    r0_19 = r0_18 + 0xb350u;  // (from the original)
    guest::cpu()->s[0] = S0_8;
    guest::cpu()->s[1] = S1_8;
    r0_20 = call_0081d248(r0_19, 0xb34cu, r2_3, r3_3);  // (from the original)
    r0 = r0_20 - 0xb350u;  // (from the original)
    r1_4 = r0 + 0xb000u;  // (from the original)
    *gptr<u8>(r1_4 + 0x3a4u) = u8(r4);  // (from the original)
    *gptr<u8>(r1_4 + 0x3a5u) = u8(r4);  // (from the original)
    *gptr<u8>(r1_4 + 0x3a6u) = u8(r4);  // (from the original)
    *gptr<u8>(r1_4 + 0x3a7u) = u8(r4);  // (from the original)
    *gptr<u8>(r1_4 + 0x3a8u) = u8(r4);  // (from the original)
    *gptr<u32>(r1_4 + 0x3acu) = u32(r4);  // (from the original)
    *gptr<u32>(r1_4 + 0x3b0u) = u32(r4);  // (from the original)
    *gptr<u32>(r1_4 + 0x3b4u) = u32(r4);  // (from the original)
    *gptr<u32>(r1_4 + 0x3b8u) = u32(r4);  // (from the original)
    *gptr<u32>(r1_4 + 0x3bcu) = u32(r4);  // (from the original)
    *gptr<u32>(r1_4 + 0x3c0u) = u32(r4);  // (from the original)
    *gptr<u32>(r1_4 + 0x3c4u) = u32(r4);  // (from the original)
    *gptr<u32>(r1_4 + 0x3c8u) = u32(r4);  // (from the original)
    S1 = std::bit_cast<float>(*global_00223274);
    S0 = std::bit_cast<float>(*global_00223278);
    r2_4 = r0 + 0xb3d0u;  // (from the original)
    *gptr<u32>(r1_4 + 0x3ccu) = u32(r4);  // (from the original)
    *gptr<u32>(r2_4) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r2_4 + 4) = u32(std::bit_cast<u32>(S1));
    r2_5 = r0 + 0xb3dcu;  // (from the original)
    *gptr<u32>(r1_4 + 0x3d8u) = u32(std::bit_cast<u32>(S1));  // (from the original)
    *gptr<u32>(r2_5) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r2_5 + 4u) = u32(std::bit_cast<u32>(S0));
    r2_6 = r0 + 0xb3e4u;  // (from the original)
    *gptr<u32>(r2_6) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r2_6 + 4u) = u32(std::bit_cast<u32>(S0));
    r2 = 1u;
    *gptr<u32>(r1_4 + 0x290u) = u32(r4);  // (from the original)
    r1 = r2;
    do {
L_223234:;
        r3_4 = r0 + (r2 << 2);
        r2_7 = r2 + 1u;
        r12_1 = r3_4 + 0xb000u;  // (from the original)
        r3_5 = r0 + (r2_7 << 2) + 0xb000u;  // (from the original)
        r1 = r1 + 2u;
        *gptr<u32>(r12_1 + 0x290u) = u32(r4);  // (from the original)
        res_1 = r1 - 0x19u;  // (from the original)
        r2 = r2_7 + 1u;
        *gptr<u32>(r3_5 + 0x290u) = u32(r4);  // (from the original)
        guest::preempt();
    } while (res_1 >> 0x1f != ((r1 ^ 0x19u) & (r1 ^ res_1)) >> 0x1f);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_002230d8
GUEST_EXPORT(0x002230d8, d_002230d8::f_002230d8);

// f_0022328c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022328c {

struct __attribute__((packed)) Object_0022328c_0 {
    u32 word_0;
    u8 unknown_4[0xb34c];  // (not used here)
    u32 word_b350;
};
GUEST_OFFSET(Object_0022328c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0022328c_0, word_b350, 0xb350);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)

u32 f_0022328c(gptr<Object_0022328c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 ea_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_7 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r1_8 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r1_9 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r1_10 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r1_11 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r1_12 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r1_13 = 0;
    u32 r2_13 = 0;
    u32 r3_13 = 0;
    u32 r0_27 = 0;
    u32 r0_28 = 0;
    u32 r1_14 = 0;
    u32 r2_14 = 0;
    u32 r3_14 = 0;
    u32 r0_29 = 0;
    u32 r0_30 = 0;
    u32 r1_15 = 0;
    u32 r2_15 = 0;
    u32 r3_15 = 0;
    u32 r0_31 = 0;
    u32 r0_32 = 0;
    u32 r1_16 = 0;
    u32 r2_16 = 0;
    u32 r3_16 = 0;
    u32 r0_33 = 0;
    u32 r0_34 = 0;
    u32 r1_17 = 0;
    u32 r2_17 = 0;
    u32 r3_17 = 0;
    u32 r0_35 = 0;
    u32 r0_36 = 0;
    u32 r1_18 = 0;
    u32 r2_18 = 0;
    u32 r3_18 = 0;
    u32 r0_37 = 0;
    u32 r0_38 = 0;
    u32 r1_19 = 0;
    u32 r2_19 = 0;
    u32 r3_19 = 0;
    u32 r0_39 = 0;
    u32 r0_40 = 0;
    u32 r1_20 = 0;
    u32 r2_20 = 0;
    u32 r3_20 = 0;
    u32 r0_41 = 0;
    u32 r0_42 = 0;
    u32 r1_21 = 0;
    u32 r2_21 = 0;
    u32 r3_21 = 0;
    u32 r0_43 = 0;
    u32 r0_44 = 0;
    u32 r1_22 = 0;
    u32 r2_22 = 0;
    u32 r3_22 = 0;
    u32 r0_45 = 0;
    u32 r0_46 = 0;
    u32 r4_1 = 0;
    u32 r0_47 = 0;
    u32 r0_48 = 0;
    u32 r0_49 = 0;
    u32 r0_50 = 0;
    u32 r0_51 = 0;
    u32 r1_23 = 0;
    r13 = r13 - 0x10;  // (from the original)
    arg0->word_0 = u32(0x8edfa0u);  // (from the original)
    arg0->word_b350 = u32(0x909d20u);  // (from the original)
    r0_1 = r0 + 0xb350u;  // (from the original)
    r0_2 = r0_1 - 0x54u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_2, 0x56988cu, 0x28u, 2u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    ea_1 = r0_1 - 0x3d8u;  // (from the original)
    *gptr<u32>(ea_1) = u32(0x8f80b8u);  // (from the original)
    r0_3 = ea_1 + 0x2e8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_0056988c(r0_3, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_5 = r0_4 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_0056988c(r0_5, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_7 = r0_6 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_0056988c(r0_7, r1_3, r2_3, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_9 = r0_8 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_0056988c(r0_9, r1_4, r2_4, r3_4);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    *gptr<u32>(r0_10 - 0x270u) = u32(0x8f8b80u);  // (from the original)
    r0_11 = r0_10 - 0x168u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_12 = call_005bf744(r0_11, r1_5, r2_5, r3_5);
    r1_6 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_13 = r0_12 - 0x3cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_14 = call_0056988c(r0_13, r1_6, r2_6, r3_6);
    r1_7 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_15 = r0_14 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_16 = call_0056988c(r0_15, r1_7, r2_7, r3_7);
    r1_8 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_17 = r0_16 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_18 = call_0056988c(r0_17, r1_8, r2_8, r3_8);
    r1_9 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_19 = r0_18 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_20 = call_0056988c(r0_19, r1_9, r2_9, r3_9);
    r1_10 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_21 = r0_20 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_22 = call_0056988c(r0_21, r1_10, r2_10, r3_10);
    r1_11 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_23 = r0_22 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_24 = call_0056988c(r0_23, r1_11, r2_11, r3_11);
    r1_12 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    *gptr<u32>(r0_24 - 0x318u) = u32(0x8f80b8u);  // (from the original)
    r0_25 = r0_24 - 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_26 = call_0056988c(r0_25, r1_12, r2_12, r3_12);
    r1_13 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_27 = r0_26 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_28 = call_0056988c(r0_27, r1_13, r2_13, r3_13);
    r1_14 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_29 = r0_28 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_30 = call_0056988c(r0_29, r1_14, r2_14, r3_14);
    r1_15 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r0_31 = r0_30 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_32 = call_0056988c(r0_31, r1_15, r2_15, r3_15);
    r1_16 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    *gptr<u32>(r0_32 - 0x270u) = u32(0x8f8b80u);  // (from the original)
    r0_33 = r0_32 - 0x168u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_34 = call_005bf744(r0_33, r1_16, r2_16, r3_16);
    r1_17 = guest::cpu()->r[1];
    r2_17 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    r0_35 = r0_34 - 0x3cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_36 = call_0056988c(r0_35, r1_17, r2_17, r3_17);
    r1_18 = guest::cpu()->r[1];
    r2_18 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    r0_37 = r0_36 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_38 = call_0056988c(r0_37, r1_18, r2_18, r3_18);
    r1_19 = guest::cpu()->r[1];
    r2_19 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    r0_39 = r0_38 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_40 = call_0056988c(r0_39, r1_19, r2_19, r3_19);
    r1_20 = guest::cpu()->r[1];
    r2_20 = guest::cpu()->r[2];
    r3_20 = guest::cpu()->r[3];
    r0_41 = r0_40 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_42 = call_0056988c(r0_41, r1_20, r2_20, r3_20);
    r1_21 = guest::cpu()->r[1];
    r2_21 = guest::cpu()->r[2];
    r3_21 = guest::cpu()->r[3];
    r0_43 = r0_42 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_44 = call_0056988c(r0_43, r1_21, r2_21, r3_21);
    r1_22 = guest::cpu()->r[1];
    r2_22 = guest::cpu()->r[2];
    r3_22 = guest::cpu()->r[3];
    r0_45 = r0_44 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_46 = call_0056988c(r0_45, r1_22, r2_22, r3_22);
    r4_1 = r0_46 - 0xac68u;  // (from the original)
    r0_47 = r0_46 - 0x3144u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_47, 0x60e704u, 0x314u, 0x10u);  // (from the original)
    r0_48 = r4_1 + 0x6284u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_48, 0x60e704u, 0x314u, 8u);  // (from the original)
    r0_49 = r4_1 + 0x49e4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_49, 0x60e704u, 0x314u, 8u);  // (from the original)
    r0_50 = r4_1 + 0x2b1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_50, 0x60e704u, 0x314u, 0xau);  // (from the original)
    r0_51 = r4_1 + 4u;
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_51, 0x60e704u, 0x314u, 0xeu);  // (from the original)
    r1_23 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_23;
    guest::cpu()->r[13] = r13;
    return r4_1;
}

}  // namespace d_0022328c
GUEST_EXPORT(0x0022328c, d_0022328c::f_0022328c);

// f_002236c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002236c0 {

struct __attribute__((packed)) Object_002236c0_0 {
    u8 unknown_0[0x176c];  // (not used here)
    u32 word_176c;
    u8 unknown_1770[0x554];  // (not used here)
    u32 word_1cc4;
};
GUEST_OFFSET(Object_002236c0_0, word_176c, 0x176c);  // (from the original)
GUEST_OFFSET(Object_002236c0_0, word_1cc4, 0x1cc4);  // (from the original)

inline guest::global<u32, 0x00223770> global_00223770;  // (from the original)

u32 f_002236c0(gptr<Object_002236c0_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 fpsr = guest::cpu()->fpscr;
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    u32 r3_1 = 0;
    u32 r3_2 = 0;
    u32 zf_1 = 0;
    u32 r0_1 = 0;
    r2 = r0;
    guest::cpu()->r[13] -= 4u;
    S0 = std::bit_cast<float>(arg0->word_176c);
    S1 = std::bit_cast<float>(arg0->word_1cc4);
    r0 = 0u;
    S2 = S1 + std::bit_cast<float>(*global_00223770);
    r4 = r2 + 0x2934u;  // (from the original)
L_2236f0:;
    r3_1 = r2 + ((r0 << 6) - ((r0 << 3) - r0) << 2);
    if ((u32(*gptr<u8>(*gptr<u32>(0x1764u + r3_1) + 0xb7u)) & 1u) == 0) {  // (from the original)
        goto L_223758;
    }
    S1 = std::bit_cast<float>(*gptr<u32>(r3_1 + 0x1778u));  // (from the original)
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S1);  // (from the original)
    r3_2 = u32(*gptr<u8>(r3_1 + 0x177cu));  // (from the original)
    if (!(fpsr >> 0x1d & 1) || !!(fpsr >> 0x1e & 1)) {  // (from the original)
        if (*gptr<u32>(r4) - 1u == r3_2) {
            goto L_223758;
        }
    }
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1, S2);  // (from the original)
    zf_1 = fpsr >> 0x1e & 1;  // (from the original)
    if (!(fpsr >> 0x1d & 1) || zf_1) {  // (from the original)
        zf_1 = r3_2 == 0;
    }
    if (zf_1) {
        goto L_223758;
    }
    if (r3_2 == r1) {
        guest::cpu()->r[13] += 4u;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
L_223758:;
    r0 = r0 + 1u;
    if (s32(r0) < s32(7u)) {
        guest::preempt();
        goto L_2236f0;
    }
    r0_1 = ~0u;
    guest::cpu()->r[13] += 4u;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0_1;
}

}  // namespace d_002236c0
GUEST_EXPORT(0x002236c0, d_002236c0::f_002236c0);

// f_00223778: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00223778 {

struct __attribute__((packed)) Object_00223778_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00223778_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)

u32 f_00223778(gptr<Object_00223778_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r12_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = arg0->word_4;
    r1_1 = *gptr<u32>(0x94fcc4u + (r1 << 2));  // (from the original)
    r0_2 = call_004b4fc0(r0_1, r1_1, 1u, r3);
    r12_1 = *gptr<u32>(r0 + 4u);
    r1_2 = r0 + (r1 + (r1 << 2) << 3);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r1_3 = r1_2 + 0xcu;  // (from the original)
    return call_00568984(r12_1, r1_3, r0_2, 0u);
}

}  // namespace d_00223778
GUEST_EXPORT(0x00223778, d_00223778::f_00223778);

// f_0022384c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022384c {

inline constexpr guest::Function<0x006a8c1c, u32(u32, u32, u32, u32)> call_006a8c1c;  // (from the original)

u32 f_0022384c(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r4 = 0u;
    do {
L_223858:;
        r0_1 = r5 + (r4 * 0xc5u << 2) + 0x110u;  // (from the original)
        r0_2 = call_006a8c1c(r0_1, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(7u));
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_0022384c
GUEST_EXPORT(0x0022384c, d_0022384c::f_0022384c);

// f_00223c68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00223c68 {

inline constexpr guest::Function<0x002f6b14, u32(u32, u32, u32, u32)> call_002f6b14;  // (from the original)
inline constexpr guest::Function<0x002f6e14, u32(u32, u32, u32, u32)> call_002f6e14;  // (from the original)

u32 f_00223c68(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 res_1 = 0;
    u32 r3_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0_1 = r0 + 0x2220u;  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    call_002f6b14(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    S2_1 = guest::cpu()->s[2];
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    call_002f6e14(r0_1, r1_1, r2_1, r3_1);
    r2 = 0u;
    r12 = 0xffu;  // (from the original)
    do {
L_223c90:;
        r0_2 = (r2 << 6) - ((r2 << 3) - r2);
        r2 = r2 + 1u;
        r1_2 = r4 + (r0_2 << 2);
        r0_3 = r1_2 + 0x1768u;  // (from the original)
        S0_2 = std::bit_cast<float>(*gptr<u32>(r0_3));
        S1_2 = std::bit_cast<float>(*gptr<u32>(r0_3 + 4));
        S2_2 = std::bit_cast<float>(*gptr<u32>(r0_3 + 8));
        *gptr<u32>(r1_2 + 0x1778u) = u32(std::bit_cast<u32>(S1_2));  // (from the original)
        r0_4 = *gptr<u32>(r1_2 + 0x1764u);  // (from the original)
        r1_3 = r1_2 + 0x177cu;  // (from the original)
        res_1 = r2 - 7u;
        r3_2 = r0_4 + 0x28u;  // (from the original)
        *gptr<u32>(r3_2) = u32(std::bit_cast<u32>(S0_2));
        *gptr<u32>(r3_2 + 4) = u32(std::bit_cast<u32>(S1_2));
        *gptr<u32>(r3_2 + 8) = u32(std::bit_cast<u32>(S2_2));
        *gptr<u8>(r0_4 + 0xb7u) = u8(u32(*gptr<u8>(r0_4 + 0xb7u)) & 0xcfu);  // (from the original)
        *gptr<u8>(r1_3) = u8(r12);
        guest::preempt();
    } while (res_1 >> 0x1f != ((r2 ^ 7u) & (r2 ^ res_1)) >> 0x1f);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return r0_4;
}

}  // namespace d_00223c68
GUEST_EXPORT(0x00223c68, d_00223c68::f_00223c68);

// f_00224204: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00224204 {

struct __attribute__((packed)) Object_00224204_0 {
    u8 unknown_0[0x2934];  // (not used here)
    u32 word_2934;
};
GUEST_OFFSET(Object_00224204_0, word_2934, 0x2934);  // (from the original)


u32 f_00224204(gptr<Object_00224204_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r12_1 = 0;
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    r1_1 = r0 + 0x2934u;  // (from the original)
    r13 = r13 - 4u;
    r12_1 = arg0->word_2934;
    r4_1 = *gptr<u32>(r13 + 4u);
    if (s32(r12_1) >= s32(0x1cu)) {  // (from the original)
        r13 = r13 + 4u;
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    *gptr<u32>(r0 + (r12_1 << 3) + 0x1cd8u) = u32(r2);  // (from the original)
    *gptr<u8>(r0 + (arg0->word_2934 << 3) + 0x1cdcu) = u8(r4_1);  // (from the original)
    *gptr<u8>(r0 + (arg0->word_2934 << 3) + 0x1cddu) = u8(r3);  // (from the original)
    r0_1 = arg0->word_2934 + 1u;
    arg0->word_2934 = u32(r0_1);
    r13 = r13 + 4u;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_00224204
GUEST_EXPORT(0x00224204, d_00224204::f_00224204);

// f_0022426c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022426c {

inline constexpr guest::Function<0x001323bc, u32(u32, u32, u32, u32)> call_001323bc;  // (from the original)
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32, u32)> call_00569e6c;  // (from the original)
inline constexpr guest::Function<0x0060e47c, u32(u32, u32, u32, u32)> call_0060e47c;  // (from the original)
inline constexpr guest::Function<0x006a923c, u32(u32, u32, u32, u32)> call_006a923c;  // (from the original)

u32 f_0022426c(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r5_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r6 = r0;
    r0_1 = call_001323bc(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = *gptr<u32>(r6 + 4u);
    call_00569e6c(r0_1, r1_1, 1u, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r4 = 0u;
    do {
L_224288:;
        r5_1 = r6 + (r4 * 0xc5u << 2);  // (from the original)
        r0_2 = r5_1 + 0x110u;  // (from the original)
        r0_3 = call_006a923c(r0_2, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_3 != 0) {
            r0_4 = r5_1 + 0x110u;  // (from the original)
            r0_3 = call_0060e47c(r0_4, r1, r2, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(7u));
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_3;
}

}  // namespace d_0022426c
GUEST_EXPORT(0x0022426c, d_0022426c::f_0022426c);

// f_002248ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002248ec {

struct __attribute__((packed)) Object_002248ec_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_002248ec_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> call_001323b4;  // (from the original)
inline constexpr guest::Function<0x005e2e04, u32(u32, u32, u32, u32)> call_005e2e04;  // (from the original)

u32 f_002248ec(gptr<Object_002248ec_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r0_1 = arg0->word_4;
    if (r0_1 != 0) {
        call_001323b4(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r4 = 0u;
    do {
L_224904:;
        r0_2 = r5 + (r4 * 0xc5u << 2) + 0x218u;  // (from the original)
        call_001323b4(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(7u));
    r4 = 0u;
    do {
L_224928:;
        r0_3 = r5 + ((r4 << 6) - ((r4 << 3) - r4) << 2) + 0x16a0u;  // (from the original)
        r0_4 = call_005e2e04(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(7u));
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0_4;
}

}  // namespace d_002248ec
GUEST_EXPORT(0x002248ec, d_002248ec::f_002248ec);

// f_00224950: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00224950 {

struct __attribute__((packed)) Object_00224950_0 {
    u8 unknown_0[0x88];  // (not used here)
    u32 word_88;
};
GUEST_OFFSET(Object_00224950_0, word_88, 0x88);  // (from the original)

inline guest::global<u32, 0x00224988> global_00224988;  // (from the original)
inline constexpr guest::Function<0x00224a7c, u32(u32, u32, u32, u32)> call_00224a7c;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)

u32 f_00224950(gptr<Object_00224950_0> arg0) {
    u32 r0 = arg0.addr();
    float S1_1 = 0;
    float S0_1 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    S1_1 = std::bit_cast<float>(*global_00224988);
    S0_1 = std::bit_cast<float>(arg0->word_88) - S1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    call_00224a7c(r0, 3u, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    r0_1 = *gptr<u32>(r0 + 4u);
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    r0_2 = call_0056878c(r0_1, 0x22498cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    S0_3 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    r1_1 = u32(*gptr<u8>(r0_2 + 0xb7u)) & 0xfeu;  // (from the original)
    *gptr<u8>(r0_2 + 0xb7u) = u8(r1_1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    return r0_2;
}

}  // namespace d_00224950
GUEST_EXPORT(0x00224950, d_00224950::f_00224950);

// f_00224b10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00224b10 {

struct __attribute__((packed)) Object_00224b10_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00224b10_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00224b10_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00224b10_0, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x00224c28> global_00224c28;  // (from the original)
inline guest::global<u32, 0x00224c38> global_00224c38;  // (from the original)
inline constexpr guest::Function<0x002b6de0, u32(u32, u32, u32, u32)> call_002b6de0;  // (from the original)
inline constexpr guest::Function<0x002f7604, u32(u32, u32, u32, u32)> call_002f7604;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_00224b10(gptr<Object_00224b10_0> arg0, float S0) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    float S0_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    float S0_2 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_3 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_4 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    float S0_5 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    float S0_6 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    float S0_7 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    float S0_8 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    float S0_9 = 0;
    u32 r1_5 = 0;
    u32 r1_6 = 0;
    u32 r3_5 = 0;
    u32 r12_1 = 0;
    u32 r5_1 = 0;
    r13 = r13 - 0x10;  // (from the original)
    arg0->word_0 = u32(0x8edfb0u);  // (from the original)
    arg0->word_4 = u32(0u);
    ea_1 = r0 + 8u;
    arg0->word_8 = u32(0u);
    r0_1 = ea_1 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0_2 = call_00301d0c(r0_1, 0x125aecu, 0x28u, 6u);  // (from the original)
    r0_3 = r0_2 - 0xcu;  // (from the original)
    S0_1 = std::bit_cast<float>(*global_00224c28);
    *gptr<u32>(r0_3 + 0xfcu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_3 + 0x100u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_3 + 0x104u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r0_3 + 0x108u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r0_3 + 0x10cu) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    r0_4 = r0_3 + 0x110u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    r0_5 = call_00301d0c(r0_4, 0x60e5c0u, 0x314u, 7u);  // (from the original)
    S0_2 = guest::cpu()->s[0];
    r0_6 = r0_5 + 0x158cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    r0_7 = call_00301d0c(r0_6, 0x6ab2a0u, 0xe4u, 7u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    r0_8 = r0_7 + 0x71cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    r0_9 = call_002f7604(r0_8, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_4 = guest::cpu()->s[0];
    r0_10 = r0_9 + 0xe4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    r0_11 = call_002b6de0(r0_10, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    S0_5 = guest::cpu()->s[0];
    r0_12 = r0_11 + 0xe0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    r0_13 = call_002f7604(r0_12, r1_3, r2_3, r3_3);
    S0_6 = guest::cpu()->s[0];
    r0_14 = r0_13 + 0xe4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_6;
    r0_15 = call_00301d0c(r0_14, 0x2b6de0u, 0xe0u, 2u);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    S0_7 = guest::cpu()->s[0];
    r0_16 = r0_15 + 0x1c0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_7;
    r0_17 = call_002f7604(r0_16, r1_4, r2_4, r3_4);
    S0_8 = guest::cpu()->s[0];
    r0_18 = r0_17 + 0xe4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_8;
    r0_19 = call_00301d0c(r0_18, 0x2b6de0u, 0xe0u, 7u);  // (from the original)
    r0_20 = r0_19 - 0x2304u;  // (from the original)
    S0_9 = std::bit_cast<float>(*global_00224c38);
    r1_5 = r0_20 + 0x2924u;  // (from the original)
    *gptr<u32>(r1_5) = u32(std::bit_cast<u32>(S0_9));
    *gptr<u32>(r1_5 + 4u) = u32(std::bit_cast<u32>(S0_9));
    r1_6 = ~0u;
    *gptr<u8>(0x292cu + r0_20) = u8(0u);  // (from the original)
    r3_5 = 0x292cu - (r1_6 << 2);  // (from the original)
    r12_1 = r3_5 - (r1_6 << 2);
    r5_1 = r12_1 - (r1_6 << 2);
    *gptr<u32>(r3_5 + r0_20) = u32(0u);
    *gptr<u32>(r12_1 + r0_20) = u32(0u);
    *gptr<u32>(r5_1 + r0_20) = u32(r1_6);
    *gptr<u32>(r5_1 - (r1_6 << 2) + r0_20) = u32(0u);
    *gptr<u32>(0x2940u + r0_20) = u32(r1_6);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_9;
    return r0_20;
}

}  // namespace d_00224b10
GUEST_EXPORT(0x00224b10, d_00224b10::f_00224b10);

// f_0022526c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022526c {

struct __attribute__((packed)) Object_0022526c_0 {
    u8 unknown_0[0x38];  // (not used here)
    u32 word_38;
};
GUEST_OFFSET(Object_0022526c_0, word_38, 0x38);  // (from the original)


u32 f_0022526c(gptr<Object_0022526c_0> arg0, u32 r1) {
    u32 r0_1 = 0;
    r0_1 = arg0->word_38;
    if (r0_1 != 0) {
        *gptr<u8>(r0_1 + 0xabcu) = u8(r1);  // (from the original)
    }
    return r0_1;
}

}  // namespace d_0022526c
GUEST_EXPORT(0x0022526c, d_0022526c::f_0022526c);

// f_00225948: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00225948 {

inline guest::global<u32, 0x00950694> global_00950694;  // (from the original)
inline constexpr guest::Function<0x0014f8ec, u32(u32, u32, u32, u32)> call_0014f8ec;  // (from the original)

u32 f_00225948(u32 r0) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    r1_1 = *global_00950694;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return r0;
    }
    r0_1 = *gptr<u32>(0x997c30u + (r0 << 2));  // (from the original)
    if (r0_1 == 0) {
        guest::cpu()->r[1] = 0x997c30u;  // (from the original)
        return r0_1;
    }
    return call_0014f8ec(r0_1, 1u, 0u, guest::cpu()->r[3]);
}

}  // namespace d_00225948
GUEST_EXPORT(0x00225948, d_00225948::f_00225948);

// f_00225984: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00225984 {

inline guest::global<u16, 0x00887312> global_00887312;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> call_00317148;  // (from the original)
inline constexpr guest::Function<0x0057b9dc, u32(u32, u32, u32, u32)> call_0057b9dc;  // (from the original)
inline constexpr guest::Function<0x006a6e1c, u32(u32, u32, u32, u32)> call_006a6e1c;  // (from the original)
inline constexpr guest::Function<0x007482b8, u32(u32, u32, u32, u32)> call_007482b8;  // (from the original)
inline constexpr guest::Function<0x0074830c, u32(u32, u32, u32, u32)> call_0074830c;  // (from the original)
inline constexpr guest::Function<0x0075281c, u32(u32, u32, u32, u32)> call_0075281c;  // (from the original)

u32 f_00225984(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 nf = 0;
    u32 vf = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 r0_7 = 0;
    u32 r1_3 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_11 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_12 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_13 = 0;
    u32 r1_4 = 0;
    u32 r3_7 = 0;
    u32 r0_14 = 0;
    u32 r1_5 = 0;
    u32 r3_8 = 0;
    u32 r0_15 = 0;
    u32 r2_7 = 0;
    u32 r0_16 = 0;
    r13 = r13 - 0x48u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        goto L_225ab0;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fb328(r0_1, r1, r2_1, r3_1);
    r8 = 0u;
    r2 = r0_2 + 0x6fe78u;  // (from the original)
    r0 = r8;
    r3 = 0x997c30u;  // (from the original)
    r1 = r0;
    r10 = r8;
    goto L_2259c8;
L_2259c0:;
    r1 = r0;
    if (nf == vf) {
        r1 = 0u;
    }
L_2259c8:;
    r1 = u32(*gptr<u8>(r2 + (r1 + (r1 << 1) << 2) + 0xau));  // (from the original)
    if ((r1 & 1u) != 0) {
        r8 = r8 + 1u;
        goto L_2259f0;
    }
    r1 = r3 + (r0 << 2);
    if (*gptr<u32>(r1 + 8u) != 0) {
        *gptr<u32>(r1 + 8u) = u32(r10);
    }
L_2259f0:;
    r0 = r0 + 1u;
    res_1 = r0 - 4u;
    nf = res_1 >> 0x1f;  // (from the original)
    vf = ((r0 ^ 4u) & (r0 ^ res_1)) >> 0x1f;  // (from the original)
    if (nf != vf) {
        guest::preempt();
        goto L_2259c0;
    }
    if (r8 == 0) {
        goto L_225ab0;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fe7cc(1u, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 8u) = u32(r0_3);
    if (r0_3 == 0) {
        goto L_225ab4;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_007482b8(r0_3, r1, r2_2, r3_2);
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = *gptr<u32>(r13 + 8u);
    guest::cpu()->r[13] = r13;
    r0_6 = call_0074830c(r0_5, r1_1, r2_3, r3_3);
    r3 = guest::cpu()->r[3];
    r1_2 = r0_4 - 1u;
    r6 = 0u;
    *gptr<u32>(r13 + 0xcu) = u32(r1_2);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(1u);
    if (r1_2 <= 1u) {
        goto L_225b7c;
    }
    r11 = 0x950694u;  // (from the original)
    r0 = r0_6 - 1u;
    *gptr<u32>(r13 + 0x1cu) = u32(r0);  // (from the original)
L_225a50:;
    r9 = 1u;
    if (r0 <= 1u) {
        goto L_225b60;
    }
L_225a5c:;
    r0_7 = *gptr<u32>(r13 + 8u);
    r1_3 = *gptr<u32>(r13 + 4u);
    guest::cpu()->r[13] = r13;
    r0_8 = call_00317148(r0_7, r1_3, r9, r3);
    guest::cpu()->r[13] = r13;
    r0_9 = call_0075281c(r0_8, 0u, 0u, 0u);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0_9;
    r5 = 0u;
L_225a84:;
    if (r4 == 0) {
        goto L_225b40;
    }
    guest::cpu()->r[13] = r13;
    r0_10 = call_002fcb84(r4, 0x7ff8u, r2, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_10 == 0) {
        goto L_225abc;
    } else {
        r7 = 0u;
    }
L_225aa4:;
    r6 = r6 + 1u;
    if (r6 <= r8) {
        goto L_225b08;
    }
L_225ab0:;
    r0_3 = 0u;
L_225ab4:;
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_3;
L_225abc:;
    guest::cpu()->r[13] = r13;
    r0_11 = call_002fcb84(r4, 0x7ff9u, r2_4, r3_4);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_11 != 0) {
        r7 = 1u;
        guest::preempt();
        goto L_225aa4;
    }
    guest::cpu()->r[13] = r13;
    r0_12 = call_002fcb84(r4, 0x7ffau, r2_5, r3_5);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if (r0_12 != 0) {
        r7 = 2u;
        guest::preempt();
        goto L_225aa4;
    }
    guest::cpu()->r[13] = r13;
    r0_13 = call_002fcb84(r4, 0x7ffbu, r2_6, r3_6);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_13 != 0) {
        r7 = 3u;
        guest::preempt();
        goto L_225aa4;
    }
    goto L_225b40;
L_225b08:;
    *gptr<u32>(r13) = u32(r5 >> 4);
    r1_4 = *gptr<u32>(r13 + 4u);
    r3_7 = r5 & 0xfu;  // (from the original)
    r0_14 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006a6e1c(r0_14, r1_4, r9, r3_7);
    *gptr<u32>(r13) = u32(r10);
    r1_5 = *gptr<u32>(r11);
    r3_8 = r13 + 0x10u;  // (from the original)
    r0_15 = u32(*global_00887312);
    r2_7 = r7 + 2u;
    guest::cpu()->r[13] = r13;
    call_0057b9dc(r0_15, r1_5, r2_7, r3_8);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_225b40:;
    r5 = r5 + 1u;
    r4 = r4 + 4u;
    if (r5 < 0x100u) {  // (from the original)
        guest::preempt();
        goto L_225a84;
    }
    r9 = r9 + 1u;
    if (r9 < *gptr<u32>(r13 + 0x1cu)) {  // (from the original)
        guest::preempt();
        goto L_225a5c;
    }
L_225b60:;
    r1_2 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r0_16 = *gptr<u32>(r13 + 4u) + 1u;
    *gptr<u32>(r13 + 4u) = u32(r0_16);
    if (r0_16 < r1_2) {
        r0 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
        guest::preempt();
        goto L_225a50;
    }
L_225b7c:;
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_00225984
GUEST_EXPORT(0x00225984, d_00225984::f_00225984);

// f_00226750: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00226750 {


u32 f_00226750() {
    u32 r0 = 0;
    u32 r2 = 0;
    u32 r1_1 = 0;
    r2 = 0x997c30u;  // (from the original)
    r0 = 0u;
    do {
L_226758:;
        r1_1 = *gptr<u32>(r2 + (r0 << 2));
        if (!(r1_1 == 0)) {
            r1_1 = r1_1 + 0x5adu;  // (from the original)
            *gptr<u8>(r1_1 + 2u) = u8(u32(*gptr<u8>(r1_1 + 2u)) & ~0x10u);  // (from the original)
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (s32(r0) < s32(6u));
    guest::cpu()->r[1] = r1_1;
    return r0;
}

}  // namespace d_00226750
GUEST_EXPORT(0x00226750, d_00226750::f_00226750);

// f_002267e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002267e4 {


u32 f_002267e4() {
    u32 r0 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    r3 = 0x997c48u;  // (from the original)
    r0 = 0u;
    r2 = r0;
    r12 = r3 - 0x18u;  // (from the original)
    do {
L_2267f4:;
        r1_1 = r0;
        if (r0 >= 2u) {
            r1_1 = 0u;
        }
        r1_2 = r3 + (r1_1 + (r1_1 << 2) << 2);
        *gptr<u8>(r1_2 + 0x10u) = u8(r2);  // (from the original)
        if (r0 < 6u) {
            *gptr<u32>(r12 + (r0 << 2)) = u32(r2);
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (r0 < 2u);
    guest::cpu()->r[1] = r1_2;
    return r0;
}

}  // namespace d_002267e4
GUEST_EXPORT(0x002267e4, d_002267e4::f_002267e4);

// f_00226828: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00226828 {

inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> call_00317148;  // (from the original)
inline constexpr guest::Function<0x006a6e90, u32(u32, u32, u32, u32)> call_006a6e90;  // (from the original)
inline constexpr guest::Function<0x006fb50c, u32(u32, u32, u32, u32)> call_006fb50c;  // (from the original)
inline constexpr guest::Function<0x007482b8, u32(u32, u32, u32, u32)> call_007482b8;  // (from the original)
inline constexpr guest::Function<0x0074830c, u32(u32, u32, u32, u32)> call_0074830c;  // (from the original)
inline constexpr guest::Function<0x0075281c, u32(u32, u32, u32, u32)> call_0075281c;  // (from the original)

u32 f_00226828(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
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
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_8 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_9 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_10 = 0;
    u32 r2_6 = 0;
    u32 r1_4 = 0;
    u32 r0_11 = 0;
    u32 r3_6 = 0;
    u32 ea_1 = 0;
    u32 r2_7 = 0;
    u32 ea_2 = 0;
    u32 r0_12 = 0;
    u32 r1_5 = 0;
    r13 = r13 - 0x50u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fe7cc(1u, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x10u) = u32(r0_1);  // (from the original)
    if (r0_1 == 0) {
        goto L_226988;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_007482b8(r0_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_3 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_0074830c(r0_3, r1_2, r2_2, r3_2);
    r3 = guest::cpu()->r[3];
    r1_1 = r0_2 - 1u;
    *gptr<u32>(r13 + 0x20u) = u32(r1_1);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(1u);
    if (r1_1 <= 1u) {
        goto L_226988;
    }
    r9 = 0x7ff8u;  // (from the original)
    r8 = ~0u;
    r7 = r0_1 - 1u;
    r10 = r9 | 1u;
    r11 = r10 + 1u;
L_226880:;
    r6 = 1u;
    if (r7 <= 1u) {
        goto L_226970;
    }
L_22688c:;
    r0_4 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    r1_3 = *gptr<u32>(r13 + 8u);
    guest::cpu()->r[13] = r13;
    r0_5 = call_00317148(r0_4, r1_3, r6, r3);
    guest::cpu()->r[13] = r13;
    r0_6 = call_0075281c(r0_5, 0u, 0u, 0u);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0_6;
    r4 = 0u;
L_2268b4:;
    if (r5 == 0) {
        goto L_226954;
    }
    guest::cpu()->r[13] = r13;
    r0_7 = call_002fcb84(r5, r9, r2, r3);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_7 != 0) {
        goto L_22691c;
    }
    guest::cpu()->r[13] = r13;
    r0_8 = call_002fcb84(r5, r10, r2_3, r3_3);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_8 != 0) {
        goto L_22691c;
    }
    guest::cpu()->r[13] = r13;
    r0_9 = call_002fcb84(r5, r11, r2_4, r3_4);
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_9 != 0) {
        goto L_22691c;
    }
    guest::cpu()->r[13] = r13;
    r0_10 = call_002fcb84(r5, 0x7ffbu, r2_5, r3_5);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_10 == 0) {
        goto L_226954;
    }
L_22691c:;
    *gptr<u32>(r13 + 0x14u) = u32(r8);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r4 >> 4);
    *gptr<u32>(r13) = u32(r4 & 0xfu);  // (from the original)
    r2_6 = *gptr<u32>(r13 + 8u);
    r1_4 = r13 + 0x18u;  // (from the original)
    r0_11 = r13 + 0x14u;  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(r8);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006a6e90(r0_11, r1_4, r2_6, r6);
    r3_6 = guest::cpu()->r[3];
    ea_1 = r13 + 0x10u;  // (from the original)
    r2_7 = *gptr<u32>(ea_1);
    ea_2 = r13 + 0x14u;  // (from the original)
    r0_12 = *gptr<u32>(ea_2);
    r1_5 = *gptr<u32>(ea_2 + 4);
    guest::cpu()->r[13] = r13;
    call_006fb50c(r0_12, r1_5, r2_7, r3_6);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_226954:;
    r4 = r4 + 1u;
    r5 = r5 + 4u;
    if (r4 < 0x100u) {  // (from the original)
        guest::preempt();
        goto L_2268b4;
    }
    r6 = r6 + 1u;
    if (r6 < r7) {
        guest::preempt();
        goto L_22688c;
    }
L_226970:;
    r1_1 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r0_1 = *gptr<u32>(r13 + 8u) + 1u;
    *gptr<u32>(r13 + 8u) = u32(r0_1);
    if (r0_1 < r1_1) {
        guest::preempt();
        goto L_226880;
    }
L_226988:;
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_00226828
GUEST_EXPORT(0x00226828, d_00226828::f_00226828);

// f_00226ee8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00226ee8 {

inline constexpr guest::Function<0x002f73b8, u32(u32, u32, u32, u32)> call_002f73b8;  // (from the original)
inline constexpr guest::Function<0x004ecb2c, u32(u32, u32, u32, u32)> call_004ecb2c;  // (from the original)
inline constexpr guest::Function<0x004ecec8, u32(u32, u32, u32, u32)> call_004ecec8;  // (from the original)
inline constexpr guest::Function<0x004f1270, u32(u32, u32, u32, u32)> call_004f1270;  // (from the original)
inline constexpr guest::Function<0x00537028, u32(u32, u32, u32, u32)> call_00537028;  // (from the original)

u32 f_00226ee8(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r6_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r6_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r6_3 = 0;
    u32 r0_7 = 0;
    u32 r1_3 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r0_9 = 0;
    u32 r1_5 = 0;
    u32 r0_10 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r4 = 0u;
    do {
L_226ef4:;
        r0_1 = r5 + (r4 << 5);
        r1_1 = *gptr<u32>(r0_1 + 0x270u);  // (from the original)
        if (r1_1 != 0) {
            r0_2 = r0_1 + 0x268u;  // (from the original)
            call_004ecb2c(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        }
        r6_1 = r4 + (r4 << 1);
        r0_3 = r5 + (r6_1 << 3);
        r1_2 = *gptr<u32>(r0_3 + 0x2b0u);  // (from the original)
        if (r1_2 != 0) {
            r0_4 = r0_3 + 0x2a8u;  // (from the original)
            call_004ecec8(r0_4, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1_2 = guest::cpu()->r[1];
        }
        r6_2 = r5 + (r6_1 << 2);
        if (*gptr<u32>(r6_2 + 0x23cu) != 0) {  // (from the original)
            r0_5 = r6_2 + 0x238u;  // (from the original)
            call_004f1270(r0_5, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1_2 = guest::cpu()->r[1];
        }
        if (*gptr<u32>(r6_2 + 0x254u) != 0) {  // (from the original)
            r0_6 = r6_2 + 0x250u;  // (from the original)
            call_004f1270(r0_6, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1_2 = guest::cpu()->r[1];
        }
        r6_3 = r5 + (r4 + (r4 << 5) << 3);
        r0_7 = r6_3 + 0x2d8u;  // (from the original)
        call_002f73b8(r0_7, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_3 = guest::cpu()->r[1];
        r0_8 = r6_3 + 0x4e8u;  // (from the original)
        call_002f73b8(r0_8, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_4 = guest::cpu()->r[1];
        r0_9 = r6_3 + 0x6f8u;  // (from the original)
        call_002f73b8(r0_9, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_5 = guest::cpu()->r[1];
        r0_10 = r5 + (r4 + (r4 << 2) + (r4 << 6) << 2) + 0x9f4u;  // (from the original)
        call_00537028(r0_10, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 2u);
    *gptr<u8>(r5 + 0xcdeu) = u8(0u);  // (from the original)
    *gptr<u8>(r5 + 0x235u) = u8(2u);  // (from the original)
    *gptr<u8>(r5 + 0x234u) = u8(2u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = 0u;
    return 2u;
}

}  // namespace d_00226ee8
GUEST_EXPORT(0x00226ee8, d_00226ee8::f_00226ee8);

// f_00228dec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00228dec {

struct __attribute__((packed)) Object_00228dec_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00228dec_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x00317dec, u32(u32, u32, u32, u32)> call_00317dec;  // (from the original)
inline constexpr guest::Function<0x00317e2c, u32(u32, u32, u32, u32)> call_00317e2c;  // (from the original)
inline constexpr guest::Function<0x004ecbe0, u32(u32, u32, u32, u32)> call_004ecbe0;  // (from the original)
inline constexpr guest::Function<0x004ecf70, u32(u32, u32, u32, u32)> call_004ecf70;  // (from the original)
inline constexpr guest::Function<0x004edd84, u32(u32, u32, u32, u32)> call_004edd84;  // (from the original)
inline constexpr guest::Function<0x004f14ac, u32(u32, u32, u32, u32)> call_004f14ac;  // (from the original)
inline constexpr guest::Function<0x00521ae0, u32(u32, u32, u32, u32)> call_00521ae0;  // (from the original)

u32 f_00228dec(gptr<Object_00228dec_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_7 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r1_8 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r1_9 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r4_1 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r0_27 = 0;
    u32 r0_28 = 0;
    u32 r0_29 = 0;
    u32 r0_30 = 0;
    u32 r1_10 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_31 = 0;
    u32 r0_32 = 0;
    u32 r1_11 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r0_33 = 0;
    u32 r0_34 = 0;
    u32 r1_12 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r0_35 = 0;
    u32 r0_36 = 0;
    u32 r1_13 = 0;
    u32 r2_13 = 0;
    u32 r3_13 = 0;
    u32 r0_37 = 0;
    u32 r0_38 = 0;
    u32 r1_14 = 0;
    u32 r2_14 = 0;
    u32 r3_14 = 0;
    u32 r0_39 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0x8ee0c4u);  // (from the original)
    r0_1 = r0 + 0x1150u;  // (from the original)
    r0_2 = call_004ecf70(r0_1, 0x8ee0c4u, r2, r3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_3 = r0_2 - 0x20u;  // (from the original)
    r0_4 = call_004ecbe0(r0_3, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_5 = r0_4 - 0xcu;  // (from the original)
    r0_6 = call_004edd84(r0_5, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_7 = r0_6 - 0x108u;  // (from the original)
    r0_8 = call_00317e2c(r0_7, r1_3, r2_3, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_9 = r0_8 - 0xcu;  // (from the original)
    r0_10 = call_004edd84(r0_9, r1_4, r2_4, r3_4);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_11 = r0_10 - 0x108u;  // (from the original)
    r0_12 = call_00317e2c(r0_11, r1_5, r2_5, r3_5);
    r1_6 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_13 = r0_12 - 0xcu;  // (from the original)
    r0_14 = call_004f14ac(r0_13, r1_6, r2_6, r3_6);
    r1_7 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_15 = r0_14 - 0x108u;  // (from the original)
    r0_16 = call_00317e2c(r0_15, r1_7, r2_7, r3_7);
    r1_8 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_17 = r0_16 - 0xcu;  // (from the original)
    r0_18 = call_004f14ac(r0_17, r1_8, r2_8, r3_8);
    r1_9 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_19 = r0_18 - 0x108u;  // (from the original)
    r0_20 = call_00317e2c(r0_19, r1_9, r2_9, r3_9);
    r4_1 = r0_20 - 0xce0u;  // (from the original)
    r0_21 = r0_20 - 0xc4u;  // (from the original)
    call_002f76ac(r0_21, 0x250560u, 0x60u, 2u);  // (from the original)
    r0_22 = r4_1 + 0x9f4u;  // (from the original)
    call_002f76ac(r0_22, 0x53721cu, 0x114u, 2u);  // (from the original)
    r0_23 = r4_1 + 0x908u;  // (from the original)
    call_002f76ac(r0_23, 0x58dc70u, 0x70u, 2u);  // (from the original)
    r0_24 = r4_1 + 0x6f8u;  // (from the original)
    call_002f76ac(r0_24, 0x317e2cu, 0x108u, 2u);  // (from the original)
    r0_25 = r4_1 + 0x4e8u;  // (from the original)
    call_002f76ac(r0_25, 0x317e2cu, 0x108u, 2u);  // (from the original)
    r0_26 = r4_1 + 0x2d8u;  // (from the original)
    call_002f76ac(r0_26, 0x317e2cu, 0x108u, 2u);  // (from the original)
    r0_27 = r4_1 + 0x2a8u;  // (from the original)
    call_002f76ac(r0_27, 0x4ecf70u, 0x18u, 2u);  // (from the original)
    r0_28 = r4_1 + 0x268u;  // (from the original)
    call_002f76ac(r0_28, 0x4ecbe0u, 0x20u, 2u);  // (from the original)
    r0_29 = r4_1 + 0x250u;  // (from the original)
    call_002f76ac(r0_29, 0x4edd84u, 0xcu, 2u);  // (from the original)
    r0_30 = r4_1 + 0x238u;  // (from the original)
    call_002f76ac(r0_30, 0x4edd84u, 0xcu, 2u);  // (from the original)
    r1_10 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_31 = r4_1 + 0x12cu;  // (from the original)
    r0_32 = call_00317e2c(r0_31, r1_10, r2_10, r3_10);
    r1_11 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_33 = r0_32 - 0x108u;  // (from the original)
    r0_34 = call_00317e2c(r0_33, r1_11, r2_11, r3_11);
    r1_12 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_35 = r0_34 - 8u;
    r0_36 = call_00317dec(r0_35, r1_12, r2_12, r3_12);
    r1_13 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_37 = r0_36 - 8u;
    r0_38 = call_00317dec(r0_37, r1_13, r2_13, r3_13);
    r1_14 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 8u;
    r0_39 = r0_38 - 0x14u;  // (from the original)
    return call_00521ae0(r0_39, r1_14, r2_14, r3_14);
}

}  // namespace d_00228dec
GUEST_EXPORT(0x00228dec, d_00228dec::f_00228dec);

// f_00228f74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00228f74 {

inline guest::global<u32, 0x00952c48> global_00952c48;  // (from the original)
inline constexpr guest::Function<0x00125b38, u32(u32, u32, u32, u32)> call_00125b38;  // (from the original)

u32 f_00228f74() {
    u32 r2_1 = 0;
    r2_1 = *global_00952c48;
    return call_00125b38(0x9984bcu, 0x228f90u, r2_1, 0x80u);  // (from the original)
}

}  // namespace d_00228f74
GUEST_EXPORT(0x00228f74, d_00228f74::f_00228f74);

// f_00229c50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00229c50 {

inline constexpr guest::Function<0x0062f03c, u32(u32, u32, u32, u32)> call_0062f03c;  // (from the original)

u32 f_00229c50() {
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    r0_1 = 0x950834u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r4_1 = *gptr<u32>(r0_1 + 4u);
    if (r4_1 != 0) {
        r0_1 = u32(*gptr<u8>(r4_1 + 0xeu));  // (from the original)
        if (r0_1 == 1u) {
            r0_2 = *gptr<u32>(r4_1 + 0x48a0u);  // (from the original)
            guest::cpu()->r[13] += 8u;
            return r0_2;
        }
    }
    r0_3 = call_0062f03c(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_3 == 3u) {
        guest::cpu()->r[13] += 8u;
        return 0x20u;  // (from the original)
    }
    if (r0_3 == 4u) {
        r0_4 = 0x80u;  // (from the original)
    } else {
        r0_4 = 0u;
    }
    guest::cpu()->r[13] += 8u;
    return r0_4;
}

}  // namespace d_00229c50
GUEST_EXPORT(0x00229c50, d_00229c50::f_00229c50);

// f_0022a250: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022a250 {

inline guest::global<u32, 0x00952c48> global_00952c48;  // (from the original)
inline constexpr guest::Function<0x00125b38, u32(u32, u32, u32, u32)> call_00125b38;  // (from the original)

u32 f_0022a250() {
    u32 r2_1 = 0;
    r2_1 = *global_00952c48;
    return call_00125b38(0x9984dcu, 0x22a26cu, r2_1, 0x80u);  // (from the original)
}

}  // namespace d_0022a250
GUEST_EXPORT(0x0022a250, d_0022a250::f_0022a250);

// f_0022ba54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022ba54 {

struct __attribute__((packed)) Object_0022ba54_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u16 half_1c;
    u16 half_1e;
    u32 word_20;
};
GUEST_OFFSET(Object_0022ba54_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0022ba54_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0022ba54_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0022ba54_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0022ba54_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0022ba54_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0022ba54_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0022ba54_0, half_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0022ba54_0, half_1e, 0x1e);  // (from the original)
GUEST_OFFSET(Object_0022ba54_0, word_20, 0x20);  // (from the original)

inline guest::global<u32, 0x0022baac> global_0022baac;  // (from the original)
inline guest::global<u32, 0x0022bab0> global_0022bab0;  // (from the original)
inline constexpr guest::Function<0x001a113c, u32(u32, u32, u32, u32)> call_001a113c;  // (from the original)

u32 f_0022ba54(gptr<Object_0022ba54_0> arg0) {
    u32 r0 = arg0.addr();
    float S0_1 = 0;
    float S0_2 = 0;
    u32 r1_1 = 0;
    float S0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    S0_1 = std::bit_cast<float>(*global_0022baac);
    arg0->word_4 = u32(std::bit_cast<u32>(S0_1));
    arg0->word_8 = u32(std::bit_cast<u32>(S0_1));
    arg0->word_c = u32(std::bit_cast<u32>(S0_1));
    arg0->word_10 = u32(std::bit_cast<u32>(S0_1));
    arg0->word_14 = u32(std::bit_cast<u32>(S0_1));
    arg0->word_18 = u32(std::bit_cast<u32>(S0_1));
    S0_2 = std::bit_cast<float>(*global_0022bab0);
    arg0->half_1c = u16(0u);
    arg0->half_1e = u16(0u);
    arg0->word_20 = u32(std::bit_cast<u32>(S0_2));
    arg0->word_0 = u32(0x8ee1e4u);  // (from the original)
    guest::cpu()->s[0] = S0_2;
    call_001a113c(r0, 0x8572a8u, 0u, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    S0_3 = guest::cpu()->s[0];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_3;
    return r0;
}

}  // namespace d_0022ba54
GUEST_EXPORT(0x0022ba54, d_0022ba54::f_0022ba54);

// f_0022bac4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022bac4 {

inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)

u32 f_0022bac4(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0x24u;  // (from the original)
    r0_2 = call_004b4fc0(r0_1, 0x22baf4u, 1u, r3);  // (from the original)
    r1_1 = r0 + 0x3b8u;  // (from the original)
    r0_3 = r0 + 0x24u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_00568984(r0_3, r1_1, r0_2, 0u);
}

}  // namespace d_0022bac4
GUEST_EXPORT(0x0022bac4, d_0022bac4::f_0022bac4);

// f_0022bb00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022bb00 {

inline constexpr guest::Function<0x001323bc, u32(u32, u32, u32, u32)> call_001323bc;  // (from the original)
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32, u32)> call_00569e6c;  // (from the original)

u32 f_0022bb00(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_001323bc(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = r0 + 0x24u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_00569e6c(r0_1, r1_1, 0u, guest::cpu()->r[3]);
}

}  // namespace d_0022bb00
GUEST_EXPORT(0x0022bb00, d_0022bb00::f_0022bb00);

// f_0022bb1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022bb1c {

inline guest::global<u32, 0x00952cc0> global_00952cc0;  // (from the original)
inline constexpr guest::Function<0x00567d60, u32(u32, u32, u32, u32)> call_00567d60;  // (from the original)
inline constexpr guest::Function<0x00569184, u32(u32, u32, u32, u32)> call_00569184;  // (from the original)
inline constexpr guest::Function<0x005695e4, u32(u32, u32, u32, u32)> call_005695e4;  // (from the original)

u32 f_0022bb1c(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r1_1 = *global_00952cc0 + 0x27cu;  // (from the original)
    r0_1 = r0 + 0x170u;  // (from the original)
    call_00567d60(r0_1, r1_1, r2, r3);
    *gptr<u32>(r0 + 0x110u) = u32(r0 + 0x170u);  // (from the original)
    r0_2 = r0 + 0x24u;  // (from the original)
    call_00569184(r0_2, 0x22bb74u, 0u, 0x500u);  // (from the original)
    r3_1 = guest::cpu()->r[3];
    *gptr<u8>(r0 + 0x30u) = u8(0x8cu);  // (from the original)
    r2_1 = r0 + 0x170u;  // (from the original)
    r0_3 = r0 + 0x3b8u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_005695e4(r0_3, 0x22bb88u, r2_1, r3_1);  // (from the original)
}

}  // namespace d_0022bb1c
GUEST_EXPORT(0x0022bb1c, d_0022bb1c::f_0022bb1c);

// f_0022bba4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022bba4 {

inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> call_001323b4;  // (from the original)

u32 f_0022bba4(u32 r0) {
    u32 r0_1 = 0;
    r0_1 = r0 + 0x24u;  // (from the original)
    return call_001323b4(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0022bba4
GUEST_EXPORT(0x0022bba4, d_0022bba4::f_0022bba4);

// f_0022bbac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022bbac {

struct __attribute__((packed)) Object_0022bbac_0 {
    u8 unknown_0[0x3d4];  // (not used here)
    u8 byte_3d4;
};
GUEST_OFFSET(Object_0022bbac_0, byte_3d4, 0x3d4);  // (from the original)

inline guest::global<u32, 0x0022bc04> global_0022bc04;  // (from the original)
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)

u32 f_0022bbac(gptr<Object_0022bbac_0> arg0, u32 r1, u32 r2_unused, u32 r3, float S0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    float S0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_5 = 0;
    float S0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = u32(arg0->byte_3d4);
    if (r0_1 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return r0_1;
    }
    r0_2 = r0 + 0x24u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0_3 = call_004b4fc0(r0_2, 0x22bbf8u, 1u, r3);  // (from the original)
    S0_1 = guest::cpu()->s[0];
    r1_1 = r0 + 0x3b8u;  // (from the original)
    r0_4 = r0 + 0x24u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    call_00568630(r0_4, r1_1, r0_3, 0u);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_5 = r0 + 0x3b8u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    S0_2 = std::bit_cast<float>(*global_0022bc04);
    guest::cpu()->s[0] = S0_2;
    return call_005697e0(r0_5, r1_2, r2_1, r3_1);
}

}  // namespace d_0022bbac
GUEST_EXPORT(0x0022bbac, d_0022bbac::f_0022bbac);

// f_0022bc08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022bc08 {

inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x00569544, u32(u32, u32, u32, u32)> call_00569544;  // (from the original)

u32 f_0022bc08(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0x3b8u;  // (from the original)
    call_00569544(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = r0 + 0x24u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_00568c10(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0022bc08
GUEST_EXPORT(0x0022bc08, d_0022bc08::f_0022bc08);

// f_0022bc80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022bc80 {

struct __attribute__((packed)) Object_0022bc80_0 {
    u8 unknown_0[0xf0];  // (not used here)
    u32 word_f0;
};
GUEST_OFFSET(Object_0022bc80_0, word_f0, 0xf0);  // (from the original)

inline constexpr guest::Function<0x002ccfd4, u32(u32, u32, u32, u32)> call_002ccfd4;  // (from the original)
inline constexpr guest::Function<0x002e0374, u32(u32, u32, u32, u32)> call_002e0374;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)
inline constexpr guest::Function<0x00569184, u32(u32, u32, u32, u32)> call_00569184;  // (from the original)

u32 f_0022bc80(gptr<Object_0022bc80_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    arg0->word_f0 = u32(r0 + 0x150u);  // (from the original)
    r0_1 = r0 + 4u;
    call_00569184(r0_1, 0x857a40u, 0u, 0x2500u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u8>(r0 + 0x10u) = u8(0x9bu);  // (from the original)
    r0_2 = r0 + 0x398u;  // (from the original)
    call_002ccfd4(r0_2, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u32>(r0 + 0x3a4u) = u32(r0 + 4u);  // (from the original)
    r1_2 = *gptr<u32>(0x951658u + (r1 << 2));  // (from the original)
    r0_3 = r0 + 4u;
    r0_4 = call_0056878c(r0_3, r1_2, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = r0 + 0x398u;  // (from the original)
    call_002e0374(r0_5, r0_4, r2_3, r3_3);
    r1_3 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return 1u;
}

}  // namespace d_0022bc80
GUEST_EXPORT(0x0022bc80, d_0022bc80::f_0022bc80);

// f_0022bcec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022bcec {

inline constexpr guest::Function<0x00132364, u32(u32, u32, u32, u32)> call_00132364;  // (from the original)
inline constexpr guest::Function<0x002cd0e0, u32(u32, u32, u32, u32)> call_002cd0e0;  // (from the original)

u32 f_0022bcec(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0x398u;  // (from the original)
    call_002cd0e0(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = r0 + 0x150u;  // (from the original)
    call_00132364(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return 1u;
}

}  // namespace d_0022bcec
GUEST_EXPORT(0x0022bcec, d_0022bcec::f_0022bcec);

// f_0022bdf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022bdf0 {

inline constexpr guest::Function<0x00268928, u32(u32, u32, u32, u32)> call_00268928;  // (from the original)
inline constexpr guest::Function<0x002cd3d0, u32(u32, u32, u32, u32)> call_002cd3d0;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)

u32 f_0022bdf0(u32 r0, u32 r1_unused, u32 r2) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r2_2 = 0;
    u32 r0_6 = 0;
    u32 r1_1 = 0;
    u32 r2_3 = 0;
    u32 r0_7 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = r0 + 4u;
    r0_2 = call_0056878c(r0_1, 0x22be3cu, r2, guest::cpu()->r[3]);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r0_3 = r0 + 4u;
    r0_4 = call_0056878c(r0_3, 0x22be4cu, r2_1, guest::cpu()->r[3]);  // (from the original)
    r0_5 = r0 + 0x398u;  // (from the original)
    call_00268928(r0_5, r0_4, r0_2, guest::cpu()->r[3]);
    r2_2 = guest::cpu()->r[2];
    r0_6 = r0 + 0x398u;  // (from the original)
    call_002cd3d0(r0_6, 2u, r2_2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r0_7 = r0 + 4u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_00568c10(r0_7, r1_1, r2_3, guest::cpu()->r[3]);
}

}  // namespace d_0022bdf0
GUEST_EXPORT(0x0022bdf0, d_0022bdf0::f_0022bdf0);

// f_0022be5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022be5c {

inline constexpr guest::Function<0x00268928, u32(u32, u32, u32, u32)> call_00268928;  // (from the original)
inline constexpr guest::Function<0x002cd3d0, u32(u32, u32, u32, u32)> call_002cd3d0;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)

u32 f_0022be5c(u32 r0, u32 r1, u32 r2) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 8u;
    r1_1 = *gptr<u32>(0x951658u + (r1 << 2));  // (from the original)
    r0_1 = r0 + 4u;
    r0_2 = call_0056878c(r0_1, r1_1, r2, guest::cpu()->r[3]);
    r0_3 = r0 + 0x398u;  // (from the original)
    call_00268928(r0_3, 0u, r0_2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    r0_4 = r0 + 0x398u;  // (from the original)
    call_002cd3d0(r0_4, 1u, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r0_5 = r0 + 4u;
    guest::cpu()->r[13] += 8u;
    return call_00568c10(r0_5, r1_2, r2_2, guest::cpu()->r[3]);
}

}  // namespace d_0022be5c
GUEST_EXPORT(0x0022be5c, d_0022be5c::f_0022be5c);

// f_0022bea0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022bea0 {

struct __attribute__((packed)) Object_0022bea0_0 {
    u8 unknown_0[0xf0];  // (not used here)
    u32 word_f0;
};
GUEST_OFFSET(Object_0022bea0_0, word_f0, 0xf0);  // (from the original)

inline constexpr guest::Function<0x00268928, u32(u32, u32, u32, u32)> call_00268928;  // (from the original)
inline constexpr guest::Function<0x002ccfd4, u32(u32, u32, u32, u32)> call_002ccfd4;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)
inline constexpr guest::Function<0x00569184, u32(u32, u32, u32, u32)> call_00569184;  // (from the original)

u32 f_0022bea0(gptr<Object_0022bea0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    arg0->word_f0 = u32(r0 + 0x150u);  // (from the original)
    r0_1 = r0 + 4u;
    call_00569184(r0_1, 0x857a40u, 0u, 0x2500u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u8>(r0 + 0x10u) = u8(0x9bu);  // (from the original)
    r0_2 = r0 + 0x398u;  // (from the original)
    call_002ccfd4(r0_2, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u32>(r0 + 0x3a4u) = u32(r0 + 4u);  // (from the original)
    r0_3 = r0 + 4u;
    r0_4 = call_0056878c(r0_3, 0x22bf14u, r2_2, r3_2);  // (from the original)
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = r0 + 4u;
    r0_6 = call_0056878c(r0_5, 0x22bf24u, r2_3, r3_3);  // (from the original)
    r3_4 = guest::cpu()->r[3];
    r0_7 = r0 + 0x398u;  // (from the original)
    call_00268928(r0_7, r0_6, r0_4, r3_4);
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_0022bea0
GUEST_EXPORT(0x0022bea0, d_0022bea0::f_0022bea0);

// f_0022bf34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022bf34 {

inline constexpr guest::Function<0x00132364, u32(u32, u32, u32, u32)> call_00132364;  // (from the original)
inline constexpr guest::Function<0x002cd0e0, u32(u32, u32, u32, u32)> call_002cd0e0;  // (from the original)

u32 f_0022bf34(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0x398u;  // (from the original)
    call_002cd0e0(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = r0 + 0x150u;  // (from the original)
    call_00132364(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return 1u;
}

}  // namespace d_0022bf34
GUEST_EXPORT(0x0022bf34, d_0022bf34::f_0022bf34);

// f_0022bf54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022bf54 {

inline constexpr guest::Function<0x002cd17c, u32(u32, u32, u32, u32)> call_002cd17c;  // (from the original)

u32 f_0022bf54(u32 r0) {
    u32 r0_1 = 0;
    r0_1 = r0 + 0x398u;  // (from the original)
    return call_002cd17c(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0022bf54
GUEST_EXPORT(0x0022bf54, d_0022bf54::f_0022bf54);

// f_0022c040: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022c040 {

struct __attribute__((packed)) Object_0022c040_0 {
    u8 unknown_0[0xf0];  // (not used here)
    u32 word_f0;
};
GUEST_OFFSET(Object_0022c040_0, word_f0, 0xf0);  // (from the original)

inline constexpr guest::Function<0x00268b68, u32(u32, u32, u32, u32)> call_00268b68;  // (from the original)
inline constexpr guest::Function<0x002ccfd4, u32(u32, u32, u32, u32)> call_002ccfd4;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)
inline constexpr guest::Function<0x00569184, u32(u32, u32, u32, u32)> call_00569184;  // (from the original)

u32 f_0022c040(gptr<Object_0022c040_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    arg0->word_f0 = u32(r0 + 0x150u);  // (from the original)
    r0_1 = r0 + 4u;
    call_00569184(r0_1, 0x857a40u, 0u, 0x2500u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u8>(r0 + 0x10u) = u8(0x9bu);  // (from the original)
    r0_2 = r0 + 0x398u;  // (from the original)
    call_002ccfd4(r0_2, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u32>(r0 + 0x3a4u) = u32(r0 + 4u);  // (from the original)
    r0_3 = r0 + 4u;
    r0_4 = call_0056878c(r0_3, 0x22c0c8u, r2_2, r3_2);  // (from the original)
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = r0 + 4u;
    r0_6 = call_0056878c(r0_5, 0x22c0d8u, r2_3, r3_3);  // (from the original)
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_7 = r0 + 4u;
    r0_8 = call_0056878c(r0_7, 0x22c0e8u, r2_4, r3_4);  // (from the original)
    r0_9 = r0 + 0x398u;  // (from the original)
    call_00268b68(r0_9, r0_8, r0_6, r0_4);
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_0022c040
GUEST_EXPORT(0x0022c040, d_0022c040::f_0022c040);

// f_0022c0f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022c0f8 {

inline constexpr guest::Function<0x00132364, u32(u32, u32, u32, u32)> call_00132364;  // (from the original)
inline constexpr guest::Function<0x002cd0e0, u32(u32, u32, u32, u32)> call_002cd0e0;  // (from the original)

u32 f_0022c0f8(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0x398u;  // (from the original)
    call_002cd0e0(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = r0 + 0x150u;  // (from the original)
    call_00132364(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return 1u;
}

}  // namespace d_0022c0f8
GUEST_EXPORT(0x0022c0f8, d_0022c0f8::f_0022c0f8);

// f_0022c118: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022c118 {

inline constexpr guest::Function<0x002cd17c, u32(u32, u32, u32, u32)> call_002cd17c;  // (from the original)

u32 f_0022c118(u32 r0) {
    u32 r0_1 = 0;
    r0_1 = r0 + 0x398u;  // (from the original)
    return call_002cd17c(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0022c118
GUEST_EXPORT(0x0022c118, d_0022c118::f_0022c118);

// f_0022c368: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022c368 {

struct __attribute__((packed)) Object_0022c368_0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Object_0022c368_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0022c368_0, word_1c, 0x1c);  // (from the original)


u32 f_0022c368(gptr<Object_0022c368_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    r1_1 = arg0->word_1c;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return r0;
    }
    *gptr<u8>(r1_1 + 0xb7u) = u8(u32(*gptr<u8>(r1_1 + 0xb7u)) & 0xfeu);  // (from the original)
    r0_1 = arg0->word_18;
    *gptr<u8>(r0_1 + 0x122u) = u8(1u);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0022c368
GUEST_EXPORT(0x0022c368, d_0022c368::f_0022c368);

// f_0022c53c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022c53c {

inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e08, u32(u32, u32, u32, u32)> call_00125e08;  // (from the original)
inline constexpr guest::Function<0x001324a8, u32(u32, u32, u32, u32)> call_001324a8;  // (from the original)

u32 f_0022c53c(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r0_4 = 0;
    u32 ea_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 ea_2 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_6 = 0;
    u32 r2_7 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r1_7 = 0;
    u32 r2_8 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0_1 = call_00125e08(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r0_2 = r0_1 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_001324a8(r0_2, r1_1, r2_1, guest::cpu()->r[3]);
    *gptr<u32>(r0_3 + 0xcu) = u32(0u);  // (from the original)
    r2_2 = 0x8ee248u + 0x10u;  // (from the original)
    *gptr<u32>(r0_3) = u32(r2_2);
    r0_4 = r0_3 - 0xcu;  // (from the original)
    *gptr<u32>(r0_4) = u32(0x8ee248u);  // (from the original)
    ea_1 = r0_4 + 0x1cu;  // (from the original)
    *gptr<u32>(ea_1) = u32(0u);
    r0_5 = ea_1 + 4u;
    guest::cpu()->r[13] = r13;
    r0_6 = call_00125aec(r0_5, 0x8ee248u, r2_2, guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    ea_2 = r0_6 + 0x28u;  // (from the original)
    *gptr<u32>(ea_2) = u32(0u);
    r0_7 = ea_2 + 4u;
    guest::cpu()->r[13] = r13;
    r0_8 = call_00125aec(r0_7, r1_2, r2_3, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r0_9 = r0_8 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_00125aec(r0_9, r1_3, r2_4, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r0_11 = r0_10 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_12 = call_00125aec(r0_11, r1_4, r2_5, guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r0_13 = r0_12 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_14 = call_00125aec(r0_13, r1_5, r2_6, guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r0_15 = r0_14 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_16 = call_00125aec(r0_15, r1_6, r2_7, guest::cpu()->r[3]);
    r1_7 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r0_17 = r0_16 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_18 = call_00125aec(r0_17, r1_7, r2_8, guest::cpu()->r[3]);
    r0_19 = r0_18 - 0x114u;  // (from the original)
    *gptr<u8>(r0_19 + 0x13cu) = u8(1u);  // (from the original)
    *gptr<u8>(r0_19 + 0x13du) = u8(1u);  // (from the original)
    *gptr<u8>(r0_19 + 0x13eu) = u8(1u);  // (from the original)
    *gptr<u8>(r0_19 + 0x13fu) = u8(1u);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = 1u;
    guest::cpu()->r[13] = r13;
    return r0_19;
}

}  // namespace d_0022c53c
GUEST_EXPORT(0x0022c53c, d_0022c53c::f_0022c53c);

// f_0022c5d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022c5d8 {

struct __attribute__((packed)) Object_0022c5d8_0 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_0022c5d8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0022c5d8_0, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)

u32 f_0022c5d8(gptr<Object_0022c5d8_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_6 = 0;
    u32 r2_7 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_7 = 0;
    u32 r0_15 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0x8ee248u);  // (from the original)
    r2_1 = 0x8ee248u + 0x10u;  // (from the original)
    arg0->word_c = u32(r2_1);
    r0_1 = r0 + 0x114u;  // (from the original)
    r0_2 = call_0056988c(r0_1, 0x8ee248u, r2_1, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r0_3 = r0_2 - 0x28u;  // (from the original)
    r0_4 = call_0056988c(r0_3, r1_1, r2_2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r0_5 = r0_4 - 0x28u;  // (from the original)
    r0_6 = call_0056988c(r0_5, r1_2, r2_3, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r0_7 = r0_6 - 0x28u;  // (from the original)
    r0_8 = call_0056988c(r0_7, r1_3, r2_4, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r0_9 = r0_8 - 0x28u;  // (from the original)
    r0_10 = call_0056988c(r0_9, r1_4, r2_5, guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r0_11 = r0_10 - 0x28u;  // (from the original)
    r0_12 = call_0056988c(r0_11, r1_5, r2_6, guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r0_13 = r0_12 - 0x2cu;  // (from the original)
    r0_14 = call_0056988c(r0_13, r1_6, r2_7, guest::cpu()->r[3]);
    r1_7 = guest::cpu()->r[1];
    r0_15 = r0_14 - 0x20u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_7;
    return r0_15;
}

}  // namespace d_0022c5d8
GUEST_EXPORT(0x0022c5d8, d_0022c5d8::f_0022c5d8);

// f_0022c720: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022c720 {

inline guest::global<u32, 0x0022c7c4> global_0022c7c4;  // (from the original)
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;  // (from the original)

u32 f_0022c720(u32 r0, u32 r1, float S0) {
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    float S0_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    if (r1 != 0) {
        if (r1 == 1u) {
            goto L_22c760;
        }
        if (r1 == 2u) {
            goto L_22c774;
        }
        if (r1 != 3u) {
            goto L_22c798;
        }
        goto L_22c788;
    }
    *gptr<u32>(r0 + 0x1a8u) = u32(*gptr<u32>(r0 + 0x1a4u));  // (from the original)
    *gptr<u32>(r0 + 0x1a0u) = u32(r0 + 0x150u);  // (from the original)
    goto L_22c798;
L_22c760:;
    *gptr<u32>(r0 + 0x1a8u) = u32(*gptr<u32>(r0 + 0x1a4u));  // (from the original)
    *gptr<u32>(r0 + 0x1a0u) = u32(r0 + 0x178u);  // (from the original)
    goto L_22c798;
L_22c774:;
    *gptr<u32>(r0 + 0x1a8u) = u32(*gptr<u32>(r0 + 0x200u));  // (from the original)
    *gptr<u32>(r0 + 0x1a0u) = u32(r0 + 0x1b0u);  // (from the original)
    goto L_22c798;
L_22c788:;
    *gptr<u32>(r0 + 0x1a8u) = u32(*gptr<u32>(r0 + 0x200u));  // (from the original)
    *gptr<u32>(r0 + 0x1a0u) = u32(r0 + 0x1d8u);  // (from the original)
L_22c798:;
    r1_1 = *gptr<u32>(r0 + 0x1a0u);  // (from the original)
    r2_1 = *gptr<u32>(r0 + 0x1a8u);  // (from the original)
    r0_1 = r0 + 4u;
    guest::cpu()->s[0] = S0;
    call_00568630(r0_1, r1_1, r2_1, 0u);
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = *gptr<u32>(r0 + 0x1a0u);  // (from the original)
    S0_1 = std::bit_cast<float>(*global_0022c7c4);
    r1_2 = *gptr<u32>(*gptr<u32>(r0_2) + 8u);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->s[0] = S0_1;
    return guest::call_address<u32>(r1_2, r0_2, r1_2, r2_2, r3_1);
}

}  // namespace d_0022c720
GUEST_EXPORT(0x0022c720, d_0022c720::f_0022c720);

// f_0022c7c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022c7c8 {

struct __attribute__((packed)) Object_0022c7c8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0022c7c8_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)

u32 f_0022c7c8(gptr<Object_0022c7c8_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_3 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_4 = 0;
    u32 r0_12 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0x8ebb64u);  // (from the original)
    r0_1 = r0 + 4u;
    r0_2 = call_00125e3c(r0_1, 0x8ebb64u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_3 = r0_2 + 0x14cu;  // (from the original)
    r0_4 = call_00125aec(r0_3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_5 = r0_4 + 0x28u;  // (from the original)
    r0_6 = call_00125aec(r0_5, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_7 = r0_6 - 0x178u;  // (from the original)
    *gptr<u32>(r0_7 + 0x1a0u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_7 + 0x1a4u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_7 + 0x1a8u) = u32(0u);  // (from the original)
    *gptr<u8>(r0_7 + 0x1acu) = u8(0u);  // (from the original)
    *gptr<u8>(r0_7 + 0x1adu) = u8(1u);  // (from the original)
    *gptr<u32>(r0_7) = u32(0x8ee268u);  // (from the original)
    r0_8 = r0_7 + 0x1b0u;  // (from the original)
    r0_9 = call_00125aec(r0_8, 0x8ee268u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r0_10 = r0_9 + 0x28u;  // (from the original)
    r0_11 = call_00125aec(r0_10, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r0_12 = r0_11 - 0x1d8u;  // (from the original)
    *gptr<u32>(r0_12 + 0x200u) = u32(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_4;
    return r0_12;
}

}  // namespace d_0022c7c8
GUEST_EXPORT(0x0022c7c8, d_0022c7c8::f_0022c7c8);

// f_0022c87c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022c87c {

struct __attribute__((packed)) Object_0022c87c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0022c87c_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)

u32 f_0022c87c(gptr<Object_0022c87c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_3 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_4 = 0;
    u32 r0_11 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0x8ee268u);  // (from the original)
    r0_1 = r0 + 0x1d8u;  // (from the original)
    r0_2 = call_0056988c(r0_1, 0x8ee268u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_3 = r0_2 - 0x28u;  // (from the original)
    r0_4 = call_0056988c(r0_3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_4 - 0x1b0u) = u32(0x8ebb64u);  // (from the original)
    r0_5 = r0_4 - 0x38u;  // (from the original)
    r0_6 = call_0056988c(r0_5, 0x8ebb64u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r0_7 = r0_6 - 0x28u;  // (from the original)
    r0_8 = call_0056988c(r0_7, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r0_9 = r0_8 - 0x14cu;  // (from the original)
    r0_10 = call_005bf744(r0_9, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r0_11 = r0_10 - 4u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_4;
    return r0_11;
}

}  // namespace d_0022c87c
GUEST_EXPORT(0x0022c87c, d_0022c87c::f_0022c87c);

// f_0022d734: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022d734 {

inline guest::global<u8, 0x00a182f8> global_00a182f8;  // (from the original)
inline constexpr guest::Function<0x0055cabc, u32(u32, u32, u32, u32)> call_0055cabc;  // (from the original)

u32 f_0022d734() {
    u32 r0_1 = 0;
    *global_00a182f8 = u8(0u);
    r0_1 = 0xa182f8u + 4u;  // (from the original)
    return call_0055cabc(r0_1, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0022d734
GUEST_EXPORT(0x0022d734, d_0022d734::f_0022d734);

// f_0022d74c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022d74c {

inline guest::global<u32, 0x0095dec4> global_0095dec4;  // (from the original)
inline constexpr guest::Function<0x001b4a8c, u32(u32, u32, u32, u32)> call_001b4a8c;  // (from the original)
inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> call_002ff408;  // (from the original)
inline constexpr guest::Function<0x00303c84, u32(u32, u32, u32, u32)> call_00303c84;  // (from the original)
inline constexpr guest::Function<0x003052f0, u32(u32, u32, u32, u32)> call_003052f0;  // (from the original)
inline constexpr guest::Function<0x003084d0, u32(u32, u32, u32, u32)> call_003084d0;  // (from the original)
inline constexpr guest::Function<0x005cc070, u32(u32, u32, u32, u32)> call_005cc070;  // (from the original)
inline constexpr guest::Function<0x005cc4b4, u32(u32, u32, u32, u32)> call_005cc4b4;  // (from the original)
inline constexpr guest::Function<0x005cc4e4, u32(u32, u32, u32, u32)> call_005cc4e4;  // (from the original)
inline constexpr guest::Function<0x005cc504, u32(u32, u32, u32, u32)> call_005cc504;  // (from the original)
inline constexpr guest::Function<0x005dd348, u32(u32, u32, u32, u32)> call_005dd348;  // (from the original)
inline constexpr guest::Function<0x005f4cf8, u32(u32, u32, u32, u32)> call_005f4cf8;  // (from the original)
inline constexpr guest::Function<0x005fcf88, u32(u32, u32, u32, u32)> call_005fcf88;  // (from the original)

u32 f_0022d74c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_5 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r1_3 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_7 = 0;
    u32 r1_5 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_8 = 0;
    u32 r1_6 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_9 = 0;
    u32 ea_1 = 0;
    u32 r3_9 = 0;
    u32 ea_2 = 0;
    u32 r2_9 = 0;
    u32 r1_7 = 0;
    u32 r1_8 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_10 = 0;
    u32 r1_9 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r0_11 = 0;
    u32 r1_10 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r0_12 = 0;
    u32 r1_11 = 0;
    u32 r0_13 = 0;
    u32 r1_12 = 0;
    r13 = r13 - 0x48u;  // (from the original)
    r7_1 = *gptr<u32>(r13 + 0x4cu);  // (from the original)
    r8_1 = *gptr<u32>(r13 + 0x48u);  // (from the original)
    r0_1 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005cc504(r0_1, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r1_1 = r13 + 0x1cu;  // (from the original)
    r0_2 = r0 + 0xb0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005fcf88(r0_2, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_3 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005cc4b4(r0_3, r1, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r1_2 = r13 + 0x1cu;  // (from the original)
    r0_4 = r0 + 0xbcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005fcf88(r0_4, r1_2, r2_3, r3_3);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_5 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005cc4e4(r0_5, r1, r2_4, r3_4);
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r1_3 = r13 + 0x1cu;  // (from the original)
    r0_6 = r0 + 0xc8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005fcf88(r0_6, r1_3, r2_5, r3_5);
    r1_4 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_7 = r0 + 0xd8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_003084d0(r0_7, r1_4, r2_6, r3_6);
    r1_5 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r7_1 != 0) {
        r0_8 = r0 + 0x108u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_001b4a8c(r0_8, r7_1, r2_7, r3_7);
        r1_6 = guest::cpu()->r[1];
        r2_8 = guest::cpu()->r[2];
        r3_8 = guest::cpu()->r[3];
    } else {
        r0_9 = r0 + 0x108u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_003052f0(r0_9, r1_5, r2_7, r3_7);
        r1_6 = guest::cpu()->r[1];
        r2_8 = guest::cpu()->r[2];
        r3_8 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    call_002ff408(r1, r1_6, r2_8, r3_8);
    ea_1 = r13 + 0xcu;  // (from the original)
    *gptr<u32>(ea_1) = u32(r2);
    *gptr<u32>(ea_1 + 4) = u32(r3);
    r3_9 = r0 + 0xc8u;  // (from the original)
    ea_2 = r13 + 0x14u;  // (from the original)
    *gptr<u32>(ea_2) = u32(r2);
    *gptr<u32>(ea_2 + 4) = u32(r3);
    r2_9 = r0 + 0xbcu;  // (from the original)
    *gptr<u32>(r13) = u32(r0 + 0xd4u);  // (from the original)
    *gptr<u32>(r13 + 4) = u32(r2);
    *gptr<u32>(r13 + 8) = u32(r3);
    r1_7 = r0 + 0xb0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005dd348(r0, r1_7, r2_9, r3_9);
    r1_8 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_10 = *global_0095dec4;
    guest::cpu()->r[13] = r13;
    call_005f4cf8(r0_10, r1_8, r2_10, r3_10);
    r1_9 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_11 = call_00303c84(r0, r1_9, r2_11, r3_11);
    r1_10 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    if (r0_11 != 0) {
        if (r8_1 != 0) {
            guest::cpu()->r[13] = r13;
            call_005cc070(r1, r1_10, r2_12, r3_12);
        }
        r0_12 = *gptr<u32>(r0 + 0xd4u);  // (from the original)
        if (r0_12 >> 0x1f == (r0_12 & (r0_12 ^ r0_12)) >> 0x1f) {  // (from the original)
            r1_11 = r0_12 & 0xffu;  // (from the original)
            *gptr<u8>(r1 + 0x26eu) = u8(r1_11);  // (from the original)
            r13 = r13 + 0x48u;  // (from the original)
            guest::cpu()->r[1] = r1_11;
            guest::cpu()->r[13] = r13;
            return r1;
        }
        *gptr<u8>(r1 + 0x26eu) = u8(0u);  // (from the original)
        r13 = r13 + 0x48u;  // (from the original)
        guest::cpu()->r[1] = 0u;
        guest::cpu()->r[13] = r13;
        return r1;
    }
    guest::cpu()->r[13] = r13;
    r0_13 = call_002ff408(r1, r1_10, r2_12, r3_12);
    r1_12 = guest::cpu()->r[1];
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1_12;
    guest::cpu()->r[13] = r13;
    return r0_13;
}

}  // namespace d_0022d74c
GUEST_EXPORT(0x0022d74c, d_0022d74c::f_0022d74c);

// f_0022d958: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022d958 {

inline guest::global<u32, 0x0095dec4> global_0095dec4;  // (from the original)
inline constexpr guest::Function<0x001b4a80, u32(u32, u32, u32, u32)> call_001b4a80;  // (from the original)
inline constexpr guest::Function<0x001b4a8c, u32(u32, u32, u32, u32)> call_001b4a8c;  // (from the original)
inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> call_002ff408;  // (from the original)
inline constexpr guest::Function<0x00303c84, u32(u32, u32, u32, u32)> call_00303c84;  // (from the original)
inline constexpr guest::Function<0x005cbc3c, u32(u32, u32, u32, u32)> call_005cbc3c;  // (from the original)
inline constexpr guest::Function<0x005cbe34, u32(u32, u32, u32, u32)> call_005cbe34;  // (from the original)
inline constexpr guest::Function<0x005cbea4, u32(u32, u32, u32, u32)> call_005cbea4;  // (from the original)
inline constexpr guest::Function<0x005cc454, u32(u32, u32, u32, u32)> call_005cc454;  // (from the original)
inline constexpr guest::Function<0x005cc4b4, u32(u32, u32, u32, u32)> call_005cc4b4;  // (from the original)
inline constexpr guest::Function<0x005cc4e4, u32(u32, u32, u32, u32)> call_005cc4e4;  // (from the original)
inline constexpr guest::Function<0x005cc504, u32(u32, u32, u32, u32)> call_005cc504;  // (from the original)
inline constexpr guest::Function<0x005dd348, u32(u32, u32, u32, u32)> call_005dd348;  // (from the original)
inline constexpr guest::Function<0x005f4cf8, u32(u32, u32, u32, u32)> call_005f4cf8;  // (from the original)
inline constexpr guest::Function<0x005fcf88, u32(u32, u32, u32, u32)> call_005fcf88;  // (from the original)
inline constexpr guest::Function<0x00613de4, u32(u32, u32, u32, u32)> call_00613de4;  // (from the original)

u32 f_0022d958(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_5 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r1_3 = 0;
    u32 r0_6 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_7 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 ea_2 = 0;
    u32 r3_9 = 0;
    u32 ea_3 = 0;
    u32 r2_9 = 0;
    u32 r1_5 = 0;
    u32 r1_6 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_9 = 0;
    u32 r1_7 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r0_10 = 0;
    u32 r1_8 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r2_13 = 0;
    u32 r3_13 = 0;
    u32 r2_14 = 0;
    u32 r3_14 = 0;
    u32 r2_15 = 0;
    u32 r3_15 = 0;
    u32 r2_16 = 0;
    u32 r3_16 = 0;
    u32 r0_11 = 0;
    u32 r1_9 = 0;
    u32 r0_12 = 0;
    u32 r1_10 = 0;
    u32 r0_13 = 0;
    u32 r1_11 = 0;
    r13 = r13 - 0x48u;  // (from the original)
    ea_1 = r13 + 0x48u;  // (from the original)
    r7_1 = *gptr<u32>(ea_1);
    r8_1 = *gptr<u32>(ea_1 + 4);
    r9_1 = *gptr<u32>(ea_1 + 8);
    r0_1 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005cc504(r0_1, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r1_1 = r13 + 0x1cu;  // (from the original)
    r0_2 = r0 + 0xb0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005fcf88(r0_2, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_3 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005cc4b4(r0_3, r1, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r1_2 = r13 + 0x1cu;  // (from the original)
    r0_4 = r0 + 0xbcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005fcf88(r0_4, r1_2, r2_3, r3_3);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_5 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005cc4e4(r0_5, r1, r2_4, r3_4);
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r1_3 = r13 + 0x1cu;  // (from the original)
    r0_6 = r0 + 0xc8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005fcf88(r0_6, r1_3, r2_5, r3_5);
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_7 = r0 + 0xd8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00613de4(r0_7, r7_1, r2_6, r3_6);
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_8 = r0 + 0x108u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001b4a8c(r0_8, r8_1, r2_7, r3_7);
    r1_4 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_002ff408(r1, r1_4, r2_8, r3_8);
    ea_2 = r13 + 0xcu;  // (from the original)
    *gptr<u32>(ea_2) = u32(r2);
    *gptr<u32>(ea_2 + 4) = u32(r3);
    r3_9 = r0 + 0xc8u;  // (from the original)
    ea_3 = r13 + 0x14u;  // (from the original)
    *gptr<u32>(ea_3) = u32(r2);
    *gptr<u32>(ea_3 + 4) = u32(r3);
    r2_9 = r0 + 0xbcu;  // (from the original)
    *gptr<u32>(r13) = u32(r0 + 0xd4u);  // (from the original)
    *gptr<u32>(r13 + 4) = u32(r2);
    *gptr<u32>(r13 + 8) = u32(r3);
    r1_5 = r0 + 0xb0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005dd348(r0, r1_5, r2_9, r3_9);
    r1_6 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_9 = *global_0095dec4;
    guest::cpu()->r[13] = r13;
    call_005f4cf8(r0_9, r1_6, r2_10, r3_10);
    r1_7 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_10 = call_00303c84(r0, r1_7, r2_11, r3_11);
    r1_8 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    if (r0_10 != 0) {
        guest::cpu()->r[13] = r13;
        call_005cbea4(r1, r9_1, r2_12, r3_12);
        r2_13 = guest::cpu()->r[2];
        r3_13 = guest::cpu()->r[3];
        *gptr<u8>(r1 + 0x271u) = u8(0u);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_001b4a80(r1, r8_1, r2_13, r3_13);
        r2_14 = guest::cpu()->r[2];
        r3_14 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        call_005cbe34(r1, r7_1, r2_14, r3_14);
        r2_15 = guest::cpu()->r[2];
        r3_15 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        call_005cbc3c(r1, 1u, r2_15, r3_15);
        r2_16 = guest::cpu()->r[2];
        r3_16 = guest::cpu()->r[3];
        r0_11 = *gptr<u32>(r0 + 0xd4u);  // (from the original)
        if (r0_11 >> 0x1f == (r0_11 & (r0_11 ^ r0_11)) >> 0x1f) {  // (from the original)
            r1_9 = r0_11 & 0xffu;  // (from the original)
            *gptr<u8>(r1 + 0x26eu) = u8(r1_9);  // (from the original)
            r13 = r13 + 0x48u;  // (from the original)
            guest::cpu()->r[1] = r1_9;
            guest::cpu()->r[13] = r13;
            return r1;
        }
        *gptr<u8>(r1 + 0x26eu) = u8(0u);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_12 = call_005cc454(r1, 0u, r2_16, r3_16);
        r1_10 = guest::cpu()->r[1];
        r13 = r13 + 0x48u;  // (from the original)
        guest::cpu()->r[1] = r1_10;
        guest::cpu()->r[13] = r13;
        return r0_12;
    }
    guest::cpu()->r[13] = r13;
    r0_13 = call_002ff408(r1, r1_8, r2_12, r3_12);
    r1_11 = guest::cpu()->r[1];
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1_11;
    guest::cpu()->r[13] = r13;
    return r0_13;
}

}  // namespace d_0022d958
GUEST_EXPORT(0x0022d958, d_0022d958::f_0022d958);

// f_0022dacc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022dacc {

inline constexpr guest::Function<0x0022dd30, u32(u32, u32, u32, u32)> call_0022dd30;  // (from the original)

u32 f_0022dacc(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r12_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    u32 r12_2 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r12_1 = r13 + 0x18u;  // (from the original)
    S0_1 = std::bit_cast<float>(*gptr<u32>(r12_1));
    S1_1 = std::bit_cast<float>(*gptr<u32>(r12_1 + 4));
    S2_1 = std::bit_cast<float>(*gptr<u32>(r12_1 + 8));
    r12_2 = r13 + 8u;
    *gptr<u32>(r13 + 4u) = u32(r3);
    *gptr<u32>(r12_2) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r12_2 + 4) = u32(std::bit_cast<u32>(S1_1));
    *gptr<u32>(r12_2 + 8) = u32(std::bit_cast<u32>(S2_1));
    *gptr<u32>(r13) = u32(r3);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    call_0022dd30(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], r3);
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return guest::cpu()->r[0];
}

}  // namespace d_0022dacc
GUEST_EXPORT(0x0022dacc, d_0022dacc::f_0022dacc);

// f_0022e08c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022e08c {

inline constexpr guest::Function<0x005dd490, u32(u32, u32, u32, u32)> call_005dd490;  // (from the original)
inline constexpr guest::Function<0x005fcf9c, u32(u32, u32, u32, u32)> call_005fcf9c;  // (from the original)

u32 f_0022e08c(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    u32 ea_7 = 0;
    u32 ea_8 = 0;
    u32 ea_9 = 0;
    u32 ea_10 = 0;
    u32 ea_11 = 0;
    u32 ea_12 = 0;
    u32 ea_13 = 0;
    u32 r0_9 = 0;
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0_1 = call_005dd490(r0, r1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    *gptr<u32>(r0_1) = u32(0x8ee2a4u);  // (from the original)
    r0_2 = r0_1 + 0xb0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_005fcf9c(r0_2, 0x8ee2a4u, r2_1, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r0_4 = r0_3 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_005fcf9c(r0_4, r1_1, r2_2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r0_6 = r0_5 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_7 = call_005fcf9c(r0_6, r1_2, r2_3, guest::cpu()->r[3]);
    r0_8 = r0_7 - 0xc8u;  // (from the original)
    ea_1 = r0_8 + 0xd8u;  // (from the original)
    *gptr<u32>(ea_1) = u32(0u);
    ea_2 = r0_8 + 0xd4u;  // (from the original)
    *gptr<u32>(ea_2) = u32(~0u);
    ea_3 = r0_8 + 0xdcu;  // (from the original)
    *gptr<u32>(ea_3) = u32(0u);
    ea_4 = r0_8 + 0xe0u;  // (from the original)
    *gptr<u32>(ea_4) = u32(0u);
    ea_5 = r0_8 + 0xe4u;  // (from the original)
    *gptr<u32>(ea_5) = u32(0u);
    ea_6 = r0_8 + 0xe8u;  // (from the original)
    *gptr<u32>(ea_6) = u32(0u);
    ea_7 = r0_8 + 0xecu;  // (from the original)
    *gptr<u32>(ea_7) = u32(0u);
    ea_8 = r0_8 + 0xf0u;  // (from the original)
    *gptr<u32>(ea_8) = u32(0u);
    ea_9 = r0_8 + 0xf4u;  // (from the original)
    *gptr<u32>(ea_9) = u32(0u);
    ea_10 = r0_8 + 0xf8u;  // (from the original)
    *gptr<u32>(ea_10) = u32(0u);
    ea_11 = r0_8 + 0xfcu;  // (from the original)
    *gptr<u32>(ea_11) = u32(0u);
    ea_12 = r0_8 + 0x100u;  // (from the original)
    *gptr<u32>(ea_12) = u32(0u);
    ea_13 = r0_8 + 0x104u;  // (from the original)
    *gptr<u32>(ea_13) = u32(0u);
    r0_9 = ea_13 + 0xfffffefcu;  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = 0u;
    guest::cpu()->r[13] = r13;
    return r0_9;
}

}  // namespace d_0022e08c
GUEST_EXPORT(0x0022e08c, d_0022e08c::f_0022e08c);

// f_0022e138: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022e138 {

struct __attribute__((packed)) Object_0022e138_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0022e138_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x005dd50c, u32(u32, u32, u32, u32)> call_005dd50c;  // (from the original)

u32 f_0022e138(gptr<Object_0022e138_0> arg0) {
    u32 r0 = arg0.addr();
    arg0->word_0 = u32(0x8ee2a4u);  // (from the original)
    return call_005dd50c(r0, 0x8ee2a4u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0022e138
GUEST_EXPORT(0x0022e138, d_0022e138::f_0022e138);

// f_0022e168: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022e168 {

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)

u32 f_0022e168(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    call_002fbb30(r0, r1, 0x26cu, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0;
}

}  // namespace d_0022e168
GUEST_EXPORT(0x0022e168, d_0022e168::f_0022e168);

// f_0022e194: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022e194 {

struct __attribute__((packed)) Object_0022e194_0 {
    u8 unknown_0[0x67];  // (not used here)
    u8 byte_67;
    u8 byte_68;
    u8 byte_69;
};
GUEST_OFFSET(Object_0022e194_0, byte_67, 0x67);  // (from the original)
GUEST_OFFSET(Object_0022e194_0, byte_68, 0x68);  // (from the original)
GUEST_OFFSET(Object_0022e194_0, byte_69, 0x69);  // (from the original)


void f_0022e194(gptr<Object_0022e194_0> arg0) {
    arg0->byte_67 = u8(1u);
    arg0->byte_68 = u8(0u);
    arg0->byte_69 = u8(4u);
    guest::cpu()->r[1] = 4u;
    return;
}

}  // namespace d_0022e194
GUEST_EXPORT(0x0022e194, d_0022e194::f_0022e194);

// f_0022e1c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022e1c0 {

inline constexpr guest::Function<0x00746ed0, u32(u32, u32, u32, u32)> call_00746ed0;  // (from the original)
inline constexpr guest::Function<0x00746ee4, u32(u32, u32, u32, u32)> call_00746ee4;  // (from the original)
inline constexpr guest::Function<0x00746efc, u32(u32, u32, u32, u32)> call_00746efc;  // (from the original)
inline constexpr guest::Function<0x00746f8c, u32(u32, u32, u32, u32)> call_00746f8c;  // (from the original)

u32 f_0022e1c0(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_00746f8c(0xa22020u, r1, r2, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_1 == 0) {
        r0_2 = 1u;
        goto L_22e204;
    }
    r0_3 = call_00746ee4(0xa22020u, r1_1, r2_1, guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    *gptr<u8>(r0 + 0x3du) = u8(r0_3);  // (from the original)
    r0_4 = call_00746ed0(0xa22020u, r1_2, r2_2, guest::cpu()->r[3]);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    *gptr<u32>(r0 + 0x40u) = u32(r0_4);  // (from the original)
    r0_2 = call_00746efc(0xa22020u, r1_3, r2_3, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
L_22e204:;
    if (r2 == 0) {
        if (r0_2 < 2u) {
            goto L_22e22c;
        }
    }
    r1_1 = u32(*gptr<u8>(r0 + 0x3du));  // (from the original)
    if (r1_1 >= 3u) {
        *gptr<u8>(r0 + 0x3du) = u8(1u);  // (from the original)
    }
    *gptr<u8>(r0 + 0x3cu) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0x5du) = u8(1u);  // (from the original)
L_22e22c:;
    r0_5 = *gptr<u32>(r0 + 0x48u);  // (from the original)
    *gptr<u32>(r0 + 0x44u) = u32(r0_5);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_5;
}

}  // namespace d_0022e1c0
GUEST_EXPORT(0x0022e1c0, d_0022e1c0::f_0022e1c0);

// f_0022fcb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022fcb8 {

struct __attribute__((packed)) Object_0022fcb8_0 {
    u8 unknown_0[0x164];  // (not used here)
    u32 word_164;
};
GUEST_OFFSET(Object_0022fcb8_0, word_164, 0x164);  // (from the original)

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> call_002fa9d0;  // (from the original)
inline constexpr guest::Function<0x004f26a4, u32(u32, u32, u32, u32)> call_004f26a4;  // (from the original)
inline constexpr guest::Function<0x00736a1c, u32(u32, u32, u32, u32)> call_00736a1c;  // (from the original)

u32 f_0022fcb8(gptr<Object_0022fcb8_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    u32 ea_1 = 0;
    u32 r2_1 = 0;
    u32 r7_1 = 0;
    u32 zf_2 = 0;
    u32 r6_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    u32 ea_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r0_1 = arg0->word_164;
    zf_1 = *gptr<u32>(r0_1 + 0x64u) == 0;  // (from the original)
    if (!zf_1) {
        zf_1 = *gptr<u32>(r0_1 + 0x1cu) == 0;  // (from the original)
    }
    if (zf_1) {
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    ea_1 = r0_1 + 0x68u;  // (from the original)
    r2_1 = *gptr<u32>(ea_1);
    r7_1 = 0u;
    if (r2_1 == 0) {
        r0_1 = r7_1;
    } else {
        r0_1 = ea_1 + r2_1;
    }
    zf_2 = r0_1 == 0;
    if (!zf_2) {
        zf_2 = r1 == 0;
    }
    r6_1 = r13;
    *gptr<u32>(r13) = u32(r0_1);
    if (zf_2) {
        goto L_22fd34;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fa9d0(r1, r1, r2_1, r3);
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_1 = call_00736a1c(r6_1, r1, r0_2, r3_1);
    r2_1 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_22fd34;
    }
    ea_2 = r0_1 + 0xcu;  // (from the original)
    r0_1 = ea_2;
    r1_1 = *gptr<u32>(ea_2);
    if (r1_1 != 0) {
        r7_1 = r1_1 + r0_1;
    }
    goto L_22fd38;
L_22fd34:;
    r7_1 = 0u;
L_22fd38:;
    r1 = r7_1;
    if (r7_1 == 0) {
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r0_3 = r0 + 0x4e0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_004f26a4(r0_3, r1, r2_1, r3);
    r1 = guest::cpu()->r[1];
    r0_1 = 1u;
    *gptr<u8>(r0 + 0x4f9u) = u8(r0_1);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_0022fcb8
GUEST_EXPORT(0x0022fcb8, d_0022fcb8::f_0022fcb8);
