// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_003002f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003002f0 {

struct __attribute__((packed)) Object_003002f0_0 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Object_003002f0_0, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_003002f0_0, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_003002f0_0, byte_3, 0x3);  // (from the original)


u32 f_003002f0(gptr<Object_003002f0_0> arg0) {
    u32 r1_1 = 0;
    u32 zf_1 = 0;
    r1_1 = u32(arg0->half_0);
    zf_1 = r1_1 == 0;
    if (!zf_1) {
        r1_1 = u32(arg0->byte_2);
        zf_1 = r1_1 == 0;
    }
    if (zf_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if (u32(arg0->byte_3) != 0) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_003002f0
GUEST_EXPORT(0x003002f0, d_003002f0::f_003002f0);

// f_00300458: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00300458 {

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x00312ab8, u32(u32, u32, u32, u32)> call_00312ab8;  // (from the original)

u32 f_00300458(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r2_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb378(r0, r1, r2, r3);
    r1_1 = *gptr<u32>(r0_1);
    r2_1 = *gptr<u32>(r0_1 + 4);
    ea_1 = r13 + 0xcu;  // (from the original)
    *gptr<u32>(ea_1) = u32(*gptr<u32>(r0_1 + 8u));
    ea_2 = r13 + 4u;
    *gptr<u32>(ea_2) = u32(r1_1);
    *gptr<u32>(ea_2 + 4) = u32(r2_1);
    if (r1 != 0) {
        *gptr<u32>(r13) = u32(0u);
        r2_2 = ~5u;
        r0_2 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        call_00312ab8(r0_2, 0u, r2_2, 0u);
    }
    r0_3 = *gptr<u32>(r13 + 4u);
    r2_3 = u32(*gptr<u8>(r13 + 8u));
    r1_2 = u32(*gptr<u8>(r13 + 9u));
    *gptr<u16>(r0) = u16(r0_3);
    *gptr<u8>(r0 + 2u) = u8(r2_3);
    *gptr<u8>(r0 + 3u) = u8(r1_2);
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_00300458
GUEST_EXPORT(0x00300458, d_00300458::f_00300458);

// f_00300814: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00300814 {


void f_00300814() {
    return;
}

}  // namespace d_00300814
GUEST_EXPORT(0x00300815, d_00300814::f_00300814);

// f_00300888: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00300888 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x0056549c, u32(u32, u32, u32, u32)> call_0056549c;  // (from the original)

u32 f_00300888(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r12 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r6 = r0;
    r7 = r1;
    r4 = r2;
    r5 = r3;
    r0_1 = call_002f74c8(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = call_0056549c(r0_1, r1_1, r2_1, r3_1);
    r1 = 0u;
    r12 = r0_2;
    r3 = r1;
L_3008b0:;
    r0 = 0u;
    r2 = r12 + (r3 << 4);
L_3008b8:;
    if (u32(*gptr<u8>(r2 + r0)) != r4) {
        goto L_3008e0;
    }
    if (r5 != r1) {
        r1 = r1 + 1u;
        goto L_3008e0;
    }
    *gptr<u32>(r6) = u32(r0);
    *gptr<u32>(r7) = u32(r3);
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 1u;
L_3008e0:;
    r0 = r0 + 1u;
    if (s32(r0) < s32(0x10u)) {  // (from the original)
        guest::preempt();
        goto L_3008b8;
    }
    r3 = r3 + 1u;
    if (s32(r3) < s32(0x10u)) {  // (from the original)
        guest::preempt();
        goto L_3008b0;
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00300888
GUEST_EXPORT(0x00300888, d_00300888::f_00300888);

// f_003009ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003009ec {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x0056d2ec, u32(u32, u32, u32, u32)> call_0056d2ec;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_003009ec(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r3_3 = 0;
    u32 res_1 = 0;
    u32 ea_1 = 0;
    u32 r3_4 = 0;
    u32 ea_2 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r5 = r1;
    r1_1 = r0 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_003083bc(r0, r1_1, 9u, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r0_1) = u32(0x90a3e8u);  // (from the original)
    r0_2 = r0_1 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_005f4bfc(r0_2, 0x90a3e8u, r2_1, r3_1);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r4 = r0_3 - 0xcu;  // (from the original)
    r0_4 = r0_3 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_4, 0x12u, r2_2, r3_2);  // (from the original)
    r1 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    *gptr<u16>(r4 + 0x18u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    r2 = 4u;
    do {
L_300a30:;
        r3_3 = u32(*gptr<u16>(r1));
        res_1 = r2 - 1u;
        r2 = res_1;
        ea_1 = r0 + 2u;
        *gptr<u16>(ea_1) = u16(r3_3);
        r3_4 = u32(*gptr<u16>(r1));
        ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    guest::cpu()->r[13] = r13;
    call_0056d2ec(r4, r5, r2, r3_4);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r4;
}

}  // namespace d_003009ec
GUEST_EXPORT(0x003009ec, d_003009ec::f_003009ec);

// f_003013c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003013c0 {

struct __attribute__((packed)) Object_003013c0_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u16 half_10;
    u32 word_12;
    u32 word_16;
    u32 word_1a;
    u32 word_1e;
    u16 half_22;
};
GUEST_OFFSET(Object_003013c0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_003013c0_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_003013c0_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_003013c0_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_003013c0_0, half_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_003013c0_0, word_12, 0x12);  // (from the original)
GUEST_OFFSET(Object_003013c0_0, word_16, 0x16);  // (from the original)
GUEST_OFFSET(Object_003013c0_0, word_1a, 0x1a);  // (from the original)
GUEST_OFFSET(Object_003013c0_0, word_1e, 0x1e);  // (from the original)
GUEST_OFFSET(Object_003013c0_0, half_22, 0x22);  // (from the original)

inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x00301e94, u32(u32, u32, u32, u32)> call_00301e94;  // (from the original)

u32 f_003013c0(gptr<Object_003013c0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    arg0->word_0 = u32(0u);
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(0u);
    arg0->word_c = u32(0u);
    arg0->half_10 = u16(0u);
    arg0->word_12 = u32(0u);
    arg0->word_16 = u32(0u);
    arg0->word_1a = u32(0u);
    arg0->word_1e = u32(0u);
    r0_1 = r0 + 0x24u;  // (from the original)
    arg0->half_22 = u16(0u);
    call_00301444(r0_1, 0x182u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_2 = r0 + 0x1a6u;  // (from the original)
    r0_3 = call_00301e94(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_4 = r0_3 - 0x1a6u;  // (from the original)
    *gptr<u16>(0x1aau + r0_4) = u16(0u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = 0x1aau;  // (from the original)
    return r0_4;
}

}  // namespace d_003013c0
GUEST_EXPORT(0x003013c1, d_003013c0::f_003013c0);

// f_00301400: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00301400 {

struct __attribute__((packed)) Object_00301400_0 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(Object_00301400_0, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00301400_0, half_2, 0x2);  // (from the original)


u32 f_00301400(gptr<Object_00301400_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r12_1 = 0;
    u32 zf_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 zf_2 = 0;
    u32 cf_1 = 0;
    u32 r0_3 = 0;
    r12_1 = u32(arg0->half_0);
    zf_1 = r12_1 == r1;
    if (r12_1 >= r1 && !zf_1) {
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    if (!zf_1) {
        r0_1 = ~0u;
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r1_1 = r3 | r2 << 8;
    r0_2 = rev16(u32(arg0->half_2));
    zf_2 = r0_2 == r1_1;
    cf_1 = r0_2 >= r1_1;
    if (zf_2) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if (!cf_1 || zf_2) {
        r0_3 = ~0u;
        guest::cpu()->r[1] = r1_1;
        return r0_3;
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_00301400
GUEST_EXPORT(0x00301400, d_00301400::f_00301400);

// f_003016d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003016d4 {


u32 f_003016d4(u32 r0, u32 r1, u32 r2) {
    u32 zf_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 4u;
    zf_1 = r2 == 0;
    r2_1 = lsl_r(1u, r1 & 7u);
    r0_1 = r0 + u32(s32(r1 + (u32(s32(r1) >> 0x1f) >> 0x1d)) >> 3);  // (from the original)
    if (!zf_1) {
        if (r1 < 0x1cu) {  // (from the original)
            r1_1 = u32(*gptr<u8>(r0_1)) | r2_1;
            *gptr<u8>(r0_1) = u8(r1_1);
            guest::cpu()->r[13] += 4u;
            guest::cpu()->r[1] = r1_1;
            return r0_1;
        }
        guest::cpu()->r[13] += 4u;
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    if (r1 >= 0x1cu) {  // (from the original)
        guest::cpu()->r[13] += 4u;
        guest::cpu()->r[1] = r1;
        return r0_1;
    } else {
        r1_2 = u32(*gptr<u8>(r0_1)) & ~r2_1;
    }
    *gptr<u8>(r0_1) = u8(r1_2);
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1_2;
    return r0_1;
}

}  // namespace d_003016d4
GUEST_EXPORT(0x003016d4, d_003016d4::f_003016d4);

// f_00301f04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00301f04 {

inline constexpr guest::Function<0x005cda3c, u32(u32, u32, u32, u32)> call_005cda3c;  // (from the original)

u32 f_00301f04() {
    return call_005cda3c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00301f04
GUEST_EXPORT(0x00301f04, d_00301f04::f_00301f04);

// f_00301f08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00301f08 {

inline guest::global<u32, 0x0095c210> global_0095c210;  // (from the original)
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)

u32 f_00301f08(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 r5_1 = 0;
    u32 res_2 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r4_1 = 0;
    u32 r5_2 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 tpc_1 = 0;
    ea_1 = r13 - 0x1c;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r4);
    *gptr<u32>(ea_1 + 0xc) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r14);  // (from the original)
    r4 = r0;
    r0 = 0u;
    r13 = ea_1 - 4u;
L_301f10:;
    res_1 = u32(*gptr<u16>((0xffu + 0xadu) * r0 + r4 + 0x1aau)) << 0x1f >> 0x1f;  // (from the original)
    if (res_1 != 0) {
        r0 = r0 + 1u;
        if (s32(r0) < s32(0xfu)) {  // (from the original)
            guest::preempt();
            goto L_301f10;
        }
    }
    r6 = 0x1acu;  // (from the original)
    if (s32(r0) < s32(0xfu)) {  // (from the original)
        r0_1 = r0 * r6 + r4;
        goto L_301f5a;
    }
    r7 = 1u;
    r0 = r4;
    do {
L_301f3e:;
        r5_1 = 0x1acu * r7 + r4;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002f8574(r0, r5_1, r6, guest::cpu()->r[3]);
        r7 = r7 + 1u;
        res_2 = r7 - 0xfu;  // (from the original)
        r0 = r5_1;
        guest::preempt();
    } while (res_2 >> 0x1f != ((r7 ^ 0xfu) & (r7 ^ res_2)) >> 0x1f);  // (from the original)
    r0_1 = r4 + 0x1768u;  // (from the original)
L_301f5a:;
    r1_1 = *gptr<u32>(r13 + 8u);
    guest::cpu()->r[13] = r13;
    call_002f8574(r0_1, r1_1, r6, guest::cpu()->r[3]);
    r1_2 = *global_0095c210;
    if (r1_2 >> 0x1f == (r1_2 & (r1_2 ^ r1_2)) >> 0x1f) {  // (from the original)
        r1_2 = r1_2 + 1u;
        *global_0095c210 = u32(r1_2);
    }
    r13 = r13 + 0xcu;  // (from the original)
    r4_1 = *gptr<u32>(r13);
    r5_2 = *gptr<u32>(r13 + 4);
    r6_1 = *gptr<u32>(r13 + 8);
    r7_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
    return 0x95c210u;  // (from the original)
}

}  // namespace d_00301f08
GUEST_EXPORT(0x00301f09, d_00301f08::f_00301f08);

// f_00301f80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00301f80 {

inline constexpr guest::Function<0x005c0e0c, u32(u32, u32, u32, u32)> call_005c0e0c;  // (from the original)

u32 f_00301f80() {
    return call_005c0e0c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00301f80
GUEST_EXPORT(0x00301f80, d_00301f80::f_00301f80);

// f_00301f84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00301f84 {

struct __attribute__((packed)) Object_00301f84_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_00301f84_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00301f84_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00301f84_0, word_c, 0xc);  // (from the original)


u32 f_00301f84(gptr<Object_00301f84_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    r0_1 = r0 + 4u;
    arg0->word_4 = u32(r1);
    arg0->word_8 = u32(r2);
    arg0->word_c = u32(r3);
    return r0_1;
}

}  // namespace d_00301f84
GUEST_EXPORT(0x00301f84, d_00301f84::f_00301f84);

// f_00301f98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00301f98 {

struct __attribute__((packed)) Object_00301f98_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00301f98_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00301f98_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00301f98_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x003014b4, u32(u32, u32, u32, u32)> call_003014b4;  // (from the original)
inline constexpr guest::Function<0x00308efc, u32(u32, u32, u32, u32)> call_00308efc;  // (from the original)
inline constexpr guest::Function<0x0058dc80, u32(u32, u32, u32, u32)> call_0058dc80;  // (from the original)

u32 f_00301f98(u32 r0, gptr<Object_00301f98_1> arg1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 ea_5 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r0_8 = 0;
    r4 = r0;
    r0_1 = arg1->word_0;
    r2_1 = arg1->word_4;
    r13 = r13 - 0x20u;  // (from the original)
    r1_1 = arg1->word_8;
    r3_1 = r13 + 4u;
    *gptr<u32>(r13 + 0xcu) = u32(r1_1);  // (from the original)
    *gptr<u32>(r3_1) = u32(r0_1);
    *gptr<u32>(r3_1 + 4) = u32(r2_1);
    r0_2 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_00308efc(r0_2, r1_1, r2_1, r3_1);
    r5 = 1u;
    ea_1 = r13;
    *gptr<u32>(ea_1) = u32(r5);
    ea_2 = r13 + 4u;
    r1_2 = *gptr<u32>(ea_2);
    r2_2 = *gptr<u32>(ea_2 + 4);
    r3_2 = *gptr<u32>(ea_2 + 8);
    guest::cpu()->r[13] = r13;
    r0_3 = call_0058dc80(0u, r1_2, r2_2, r3_2);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_3 != 0) {
        r0_4 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        call_003014b4(r0_4, 7u, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    if (u32(*gptr<u8>(r13 + 0xau)) == 6u) {  // (from the original)
        goto L_302010;
    }
    do {
L_301ff8:;
        r0_5 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        call_003014b4(r0_5, 1u, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::preempt();
    } while (u32(*gptr<u8>(r13 + 0xau)) != 6u);  // (from the original)
L_302010:;
    ea_3 = r13;
    *gptr<u32>(ea_3) = u32(r5);
    ea_4 = r13 + 4u;
    r1_3 = *gptr<u32>(ea_4);
    r2_3 = *gptr<u32>(ea_4 + 4);
    r3_3 = *gptr<u32>(ea_4 + 8);
    guest::cpu()->r[13] = r13;
    r0_6 = call_0058dc80(0u, r1_3, r2_3, r3_3);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_6 != 0) {
        ea_5 = r13 + 4u;
        r0_7 = *gptr<u32>(ea_5);
        r1_4 = *gptr<u32>(ea_5 + 4);
        r2_5 = *gptr<u32>(ea_5 + 8);
        *gptr<u32>(r4) = u32(r0_7);
        *gptr<u32>(r4 + 4) = u32(r1_4);
        *gptr<u32>(r4 + 8) = u32(r2_5);
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->r[13] = r13;
        return r0_7;
    }
    r0_8 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_003014b4(r0_8, 7u, r2_4, r3_4);
    guest::preempt();
    goto L_302010;
}

}  // namespace d_00301f98
GUEST_EXPORT(0x00301f98, d_00301f98::f_00301f98);

// f_00302064: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00302064 {

struct __attribute__((packed)) Object_00302064_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_00302064_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00302064_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00302064_0, word_c, 0xc);  // (from the original)

inline guest::global<u32, 0x0088ec18> global_0088ec18;  // (from the original)

u32 f_00302064(gptr<Object_00302064_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    arg0->word_4 = u32(0u);
    r0_1 = r0 + 8u;
    r1_1 = *global_0088ec18;
    r2_1 = *gptr<u32>(0x88ec18u + 4);  // (from the original)
    arg0->word_8 = u32(r1_1);
    arg0->word_c = u32(r2_1);
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00302064
GUEST_EXPORT(0x00302064, d_00302064::f_00302064);

// f_003022a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003022a4 {

struct __attribute__((packed)) Object_003022a4_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_003022a4_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_003022a4_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_003022a4_0, word_c, 0xc);  // (from the original)


u32 f_003022a4(gptr<Object_003022a4_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    r0_1 = r0 + 4u;
    arg0->word_4 = u32(r1);
    arg0->word_8 = u32(r2);
    arg0->word_c = u32(r3);
    return r0_1;
}

}  // namespace d_003022a4
GUEST_EXPORT(0x003022a4, d_003022a4::f_003022a4);

// f_003022b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003022b8 {

struct __attribute__((packed)) Object_003022b8_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_003022b8_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_003022b8_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_003022b8_0, word_c, 0xc);  // (from the original)

inline guest::global<u32, 0x0088ec20> global_0088ec20;  // (from the original)

u32 f_003022b8(gptr<Object_003022b8_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    arg0->word_4 = u32(0u);
    r0_1 = r0 + 8u;
    r1_1 = *global_0088ec20;
    r2_1 = *gptr<u32>(0x88ec20u + 4);  // (from the original)
    arg0->word_8 = u32(r1_1);
    arg0->word_c = u32(r2_1);
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_003022b8
GUEST_EXPORT(0x003022b8, d_003022b8::f_003022b8);

// f_003022e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003022e4 {

inline constexpr guest::Function<0x0056c45c, u32(u32, u32, u32, u32)> call_0056c45c;  // (from the original)

u32 f_003022e4() {
    return call_0056c45c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003022e4
GUEST_EXPORT(0x003022e4, d_003022e4::f_003022e4);

// f_0030268c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030268c {

inline constexpr guest::Function<0x0058f100, u32(u32, u32, u32, u32)> call_0058f100;  // (from the original)

u32 f_0030268c() {
    return call_0058f100(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030268c
GUEST_EXPORT(0x0030268c, d_0030268c::f_0030268c);

// f_00302694: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00302694 {

inline constexpr guest::Function<0x005828cc, u32(u32, u32, u32, u32)> call_005828cc;  // (from the original)

u32 f_00302694() {
    return call_005828cc(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00302694
GUEST_EXPORT(0x00302694, d_00302694::f_00302694);

// f_0030269c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030269c {

inline constexpr guest::Function<0x006f9494, u32(u32, u32, u32, u32)> call_006f9494;  // (from the original)

u32 f_0030269c() {
    return call_006f9494(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030269c
GUEST_EXPORT(0x0030269c, d_0030269c::f_0030269c);

// f_003026a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003026a0 {

inline constexpr guest::Function<0x00594358, u32(u32, u32, u32, u32)> call_00594358;  // (from the original)

u32 f_003026a0() {
    return call_00594358(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003026a0
GUEST_EXPORT(0x003026a0, d_003026a0::f_003026a0);

// f_003026ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003026ac {

inline constexpr guest::Function<0x00594378, u32(u32, u32, u32, u32)> call_00594378;  // (from the original)

u32 f_003026ac() {
    return call_00594378(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003026ac
GUEST_EXPORT(0x003026ac, d_003026ac::f_003026ac);

// f_003026b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003026b8 {

inline constexpr guest::Function<0x0076a36c, u32(u32, u32, u32, u32)> call_0076a36c;  // (from the original)

u32 f_003026b8() {
    return call_0076a36c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003026b8
GUEST_EXPORT(0x003026b8, d_003026b8::f_003026b8);

// f_003026bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003026bc {

inline constexpr guest::Function<0x00768400, u32(u32, u32, u32, u32)> call_00768400;  // (from the original)

u32 f_003026bc() {
    return call_00768400(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003026bc
GUEST_EXPORT(0x003026bc, d_003026bc::f_003026bc);

// f_003026e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003026e8 {

struct __attribute__((packed)) Object_003026e8_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_003026e8_0, half_0, 0x0);  // (from the original)


u32 f_003026e8(gptr<Object_003026e8_0> arg0) {
    u32 r0_1 = 0;
    r0_1 = u32(arg0->half_0) & 0xffu;  // (from the original)
    return r0_1;
}

}  // namespace d_003026e8
GUEST_EXPORT(0x003026e8, d_003026e8::f_003026e8);

// f_003026f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003026f4 {

inline constexpr guest::Function<0x006bbbbc, u32(u32, u32, u32, u32)> call_006bbbbc;  // (from the original)

u32 f_003026f4() {
    return call_006bbbbc(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003026f4
GUEST_EXPORT(0x003026f4, d_003026f4::f_003026f4);

// f_003026f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003026f8 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x005dd490, u32(u32, u32, u32, u32)> call_005dd490;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)
inline constexpr guest::Function<0x005fcf9c, u32(u32, u32, u32, u32)> call_005fcf9c;  // (from the original)

u32 f_003026f8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r0_5 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_8 = 0;
    u32 r3_5 = 0;
    u32 res_1 = 0;
    u32 ea_1 = 0;
    u32 r3_6 = 0;
    u32 ea_2 = 0;
    u32 r0_9 = 0;
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0_1 = call_005dd490(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r0_1) = u32(0x8f0b04u);  // (from the original)
    r0_2 = r0_1 + 0xb0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_005fcf9c(r0_2, 0x8f0b04u, r2_1, r3_1);  // (from the original)
    r3_2 = guest::cpu()->r[3];
    r0_4 = r0_3 + 0xcu;  // (from the original)
    r1_1 = r0_4 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_003083bc(r0_4, r1_1, 9u, r3_2);
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    *gptr<u32>(r0_5) = u32(0x90a3e8u);  // (from the original)
    r0_6 = r0_5 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_7 = call_005f4bfc(r0_6, 0x90a3e8u, r2_2, r3_3);  // (from the original)
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r4 = r0_7 - 0xcu;  // (from the original)
    r0_8 = r0_7 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_8, 0x12u, r2_3, r3_4);  // (from the original)
    r1 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    *gptr<u16>(r4 + 0x18u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    r2 = 4u;
    do {
L_30274c:;
        r3_5 = u32(*gptr<u16>(r1));
        res_1 = r2 - 1u;
        r2 = res_1;
        ea_1 = r0 + 2u;
        *gptr<u16>(ea_1) = u16(r3_5);
        r3_6 = u32(*gptr<u16>(r1));
        ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_6);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    r0_9 = r4 - 0xbcu;  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_9;
}

}  // namespace d_003026f8
GUEST_EXPORT(0x003026f8, d_003026f8::f_003026f8);

// f_003028b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003028b4 {

struct __attribute__((packed)) Object_003028b4_0 {
    u32 word_0;
    u8 unknown_4[0xb8];  // (not used here)
    u32 word_bc;
};
GUEST_OFFSET(Object_003028b4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_003028b4_0, word_bc, 0xbc);  // (from the original)

inline constexpr guest::Function<0x005dd50c, u32(u32, u32, u32, u32)> call_005dd50c;  // (from the original)

u32 f_003028b4(gptr<Object_003028b4_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    arg0->word_0 = u32(0x8f0b04u);  // (from the original)
    arg0->word_bc = u32(0x90a3e8u);  // (from the original)
    r0_1 = r0;
    return call_005dd50c(r0_1, 0x90a3e8u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_003028b4
GUEST_EXPORT(0x003028b4, d_003028b4::f_003028b4);

// f_00302fe8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00302fe8 {

inline constexpr guest::Function<0x0076b1e0, u32(u32, u32, u32, u32)> call_0076b1e0;  // (from the original)

u32 f_00302fe8() {
    return call_0076b1e0(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00302fe8
GUEST_EXPORT(0x00302fe8, d_00302fe8::f_00302fe8);

// f_00303014: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00303014 {

inline constexpr guest::Function<0x00768c40, u32(u32, u32, u32, u32)> call_00768c40;  // (from the original)

u32 f_00303014() {
    return call_00768c40(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00303014
GUEST_EXPORT(0x00303014, d_00303014::f_00303014);

// f_0030310c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030310c {

inline constexpr guest::Function<0x00768628, u32(u32, u32, u32, u32)> call_00768628;  // (from the original)

u32 f_0030310c() {
    return call_00768628(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030310c
GUEST_EXPORT(0x0030310c, d_0030310c::f_0030310c);

// f_00303134: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00303134 {

inline constexpr guest::Function<0x00770364, u32(u32, u32, u32, u32)> call_00770364;  // (from the original)

u32 f_00303134() {
    return call_00770364(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00303134
GUEST_EXPORT(0x00303134, d_00303134::f_00303134);

// f_00303274: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00303274 {

inline constexpr guest::Function<0x002f77e8, u32(u32, u32, u32, u32)> call_002f77e8;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb338, u32(u32, u32, u32, u32)> call_002fb338;  // (from the original)
inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> call_002fb430;  // (from the original)
inline constexpr guest::Function<0x002fb7e8, u32(u32, u32, u32, u32)> call_002fb7e8;  // (from the original)
inline constexpr guest::Function<0x002fb96c, u32(u32, u32, u32, u32)> call_002fb96c;  // (from the original)
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> call_002fbd54;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002ff368, u32(u32, u32, u32, u32)> call_002ff368;  // (from the original)
inline constexpr guest::Function<0x002ff4d4, u32(u32, u32, u32, u32)> call_002ff4d4;  // (from the original)
inline constexpr guest::Function<0x00306354, u32(u32, u32, u32, u32)> call_00306354;  // (from the original)
inline constexpr guest::Function<0x00309fbc, u32(u32, u32, u32, u32)> call_00309fbc;  // (from the original)
inline constexpr guest::Function<0x00314278, u32(u32, u32, u32, u32)> call_00314278;  // (from the original)
inline constexpr guest::Function<0x0056c3ec, u32(u32, u32, u32, u32)> call_0056c3ec;  // (from the original)
inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> call_006bbd54;  // (from the original)
inline constexpr guest::Function<0x0071a0b0, u32(u32, u32, u32, u32)> call_0071a0b0;  // (from the original)
inline constexpr guest::Function<0x00768138, u32(u32, u32, u32, u32)> call_00768138;  // (from the original)

u32 f_00303274(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r6_1 = 0;
    u32 r4_1 = 0;
    u32 r8_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r10_1 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r6_2 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r1_4 = 0;
    u32 r6_3 = 0;
    u32 r0_8 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r0_9 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    u32 res_1 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_6 = 0;
    u32 r5_1 = 0;
    u32 r0_12 = 0;
    u32 r3_5 = 0;
    u32 r0_13 = 0;
    u32 r7_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_7 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r3_8 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 ea_4 = 0;
    u32 r4_2 = 0;
    u32 r5_2 = 0;
    u32 r6_4 = 0;
    u32 r7_2 = 0;
    u32 r8_2 = 0;
    u32 r9_1 = 0;
    u32 r10_2 = 0;
    u32 r11_1 = 0;
    ea_1 = r13 - 0x24;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r9);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r10);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r11);  // (from the original)
    *gptr<u32>(ea_1 + 0x20) = u32(r14);  // (from the original)
    r13 = r13 - 0x2c0u;  // (from the original)
    r5 = r0;
    r7 = r1;
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_0056c3ec(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r6_1 = *gptr<u32>(r13 + 8u);
    r4_1 = *gptr<u32>(r13);
    r8_1 = *gptr<u32>(r13 + 4);
    r0_2 = r5 + 0xeu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fb338(r0_2, r1_1, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r9 = 1u;
    if (r0_3 == 0) {
        goto L_303358;
    }
    r1_2 = r5 + 0xeu;  // (from the original)
    r0_4 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_002fb430(r0_4, r1_2, r2, r3);
    r10_1 = r13 + 8u;
    *gptr<u32>(r13 + 4u) = u32(r6_1);
    *gptr<u32>(r13) = u32(r8_1);
    r0_5 = *gptr<u32>(r10_1);
    r1_3 = *gptr<u32>(r10_1 + 4);
    r2_2 = *gptr<u32>(r10_1 + 8);
    guest::cpu()->r[13] = r13;
    r0_3 = call_00314278(r0_5, r1_3, r2_2, r4_1);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        r4 = 0u;
    } else {
        goto L_303358;
    }
L_3032d8:;
    r6_2 = r5 + ((r4 << 3) - r4 + (r4 << 4) << 1);
    r0_6 = r6_2 + 0x1eu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fbd54(r0_6, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        goto L_30334c;
    }
    guest::cpu()->r[13] = r13;
    r0_7 = call_002fb328(r0_3, r1, r2, r3);
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r1_4 = r6_2 + 0x1eu;  // (from the original)
    r6_3 = r0_7 + 0xa0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_0071a0b0(r6_3, r1_4, r2_3, r3_2);
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_9 = call_00309fbc(r6_3, r0_8, r2_4, r3_3);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fb96c(r0_9, r1_5, r2_5, r3_4);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res_1 = u32(*gptr<u8>(r5)) << 0x1e;  // (from the original)
    r1 = res_1;
    if (res_1 >> 0x1f) {  // (from the original)
        goto L_30334c;
    }
    if (r0_3 == 0) {
        goto L_30334c;
    }
    r0_3 = r0_3 + 0x8a3cu;  // (from the original)
    r1 = u32(*gptr<u8>(r0_3 + 0x40u)) | lsl_r(r9, r4 & 0xff);  // (from the original)
    *gptr<u8>(r0_3 + 0x40u) = u8(r1);  // (from the original)
L_30334c:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(3u)) {
        guest::preempt();
        goto L_3032d8;
    }
L_303358:;
    if (r7 == 0 || r7 >> 0x1f != (r7 & (r7 ^ r7)) >> 0x1f) {  // (from the original)
        goto L_3034b8;
    }
    guest::cpu()->r[13] = r13;
    r0_10 = call_002fae84(r0_3, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r10 = 0x7ffeu;  // (from the original)
    r8 = 0u;
    r11 = r8;
    *gptr<u32>(r13 + 0x290u) = u32(r0_10 + 0x20u);  // (from the original)
L_303378:;
    r0_11 = *gptr<u32>(r13 + 0x290u);  // (from the original)
    r1_6 = r8 & 0xffu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fb7e8(r0_11, r1_6, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        goto L_3034ac;
    }
    r1 = r0_3 + 0x55a6u;  // (from the original)
    r4 = 0u;
    r6 = r0_3 + 0x8a7cu;  // (from the original)
    *gptr<u32>(r13 + 0x298u) = u32(r0_3 + 0x8a3cu);  // (from the original)
    *gptr<u32>(r13 + 0x294u) = u32(r1);  // (from the original)
L_3033b4:;
    r0_3 = u32(*gptr<u8>(r6));
    r5_1 = lsl_r(r9, r4 & 0xff);  // (from the original)
    if ((r0_3 & r5_1) == 0) {
        goto L_3034a0;
    }
    r0_12 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002ff368(r0_12, r1, r2, r3);
    r3_5 = guest::cpu()->r[3];
    r0_13 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006bbd54(r0_13, 0x29u, 0x10u, r3_5);  // (from the original)
    r7_1 = r10;
    if (r4 == 0) {
        r7_1 = 0x2cd9u;  // (from the original)
        goto L_303400;
    }
    if (r4 == 1u) {
        r7_1 = 0x2cdau;  // (from the original)
        goto L_303400;
    }
    if (r4 == 2u) {
        r7_1 = 0x2cdbu;  // (from the original)
    }
L_303400:;
    ea_2 = r13;
    *gptr<u32>(ea_2) = u32(r13 + 0xcu);  // (from the original)
    ea_3 = r13 + 4u;
    *gptr<u32>(ea_3) = u32(0x10u);  // (from the original)
    *gptr<u32>(ea_3 + 4) = u32(r11);
    r2_6 = r4 + 1u;
    r3_6 = *gptr<u32>(r13 + 0x294u);  // (from the original)
    r0_14 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_15 = call_00306354(r0_14, 0x88e6a4u, r2_6, r3_6);  // (from the original)
    r1_7 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r0_15 == 0) {
        goto L_30348c;
    }
    r0_16 = r13;
    guest::cpu()->r[13] = r13;
    r0_17 = call_002fcbb0(r0_16, r7_1, r2_7, r3_7);
    r3_8 = guest::cpu()->r[3];
    r0_18 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00768138(r0_18, r0_17, 0u, r3_8);
    r0_19 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_20 = call_002ff4d4(r0_19, 1u, 1u, 0u);
    r1_7 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r0_20 == 0) {
        goto L_30348c;
    }
    r0_21 = *gptr<u32>(r13 + 0x298u);  // (from the original)
    r1_7 = u32(*gptr<u8>(r0_21 + 0x40u)) & ~r5_1;  // (from the original)
    *gptr<u8>(r0_21 + 0x40u) = u8(r1_7);  // (from the original)
L_30348c:;
    r0_22 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_002f77e8(r0_22, r1_7, r2_7, r3_7);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_3034a0:;
    r4 = r4 + 1u;
    if (r4 < 3u) {
        guest::preempt();
        goto L_3033b4;
    }
L_3034ac:;
    r8 = r8 + 1u;
    if (r8 < 4u) {
        guest::preempt();
        goto L_303378;
    }
L_3034b8:;
    r13 = r13 + 0x29cu;  // (from the original)
    ea_4 = r13;
    r13 = r13 + 0x24;  // (from the original)
    r4_2 = *gptr<u32>(ea_4);
    r5_2 = *gptr<u32>(ea_4 + 4);
    r6_4 = *gptr<u32>(ea_4 + 8);
    r7_2 = *gptr<u32>(ea_4 + 0xc);  // (from the original)
    r8_2 = *gptr<u32>(ea_4 + 0x10);  // (from the original)
    r9_1 = *gptr<u32>(ea_4 + 0x14);  // (from the original)
    r10_2 = *gptr<u32>(ea_4 + 0x18);  // (from the original)
    r11_1 = *gptr<u32>(ea_4 + 0x1c);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_4;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_2;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_2;
    guest::cpu()->r[11] = r11_1;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_00303274
GUEST_EXPORT(0x00303274, d_00303274::f_00303274);

// f_003034d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003034d4 {

inline constexpr guest::Function<0x0076af88, u32(u32, u32, u32, u32)> call_0076af88;  // (from the original)

u32 f_003034d4() {
    return call_0076af88(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003034d4
GUEST_EXPORT(0x003034d4, d_003034d4::f_003034d4);

// f_00303530: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00303530 {

inline constexpr guest::Function<0x0062f460, u32(u32, u32, u32, u32)> call_0062f460;  // (from the original)

u32 f_00303530() {
    return call_0062f460(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00303530
GUEST_EXPORT(0x00303530, d_00303530::f_00303530);

// f_003035a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003035a4 {

inline constexpr guest::Function<0x001b6278, u32(u32, u32, u32, u32)> call_001b6278;  // (from the original)

u32 f_003035a4(u32 r0_unused, u32 r1) {
    u32 zf_1 = 0;
    u32 zf_2 = 0;
    u32 r2_1 = 0;
    if (s32(r1) >= s32(0x16u)) {  // (from the original)
        return guest::cpu()->r[0];
    }
    zf_1 = r1 == 0;
    if (!zf_1) {
        zf_1 = r1 == 1u;
    }
    if (zf_1) {
        return guest::cpu()->r[0];
    }
    zf_2 = r1 == 8u;
    if (!zf_2) {
        zf_2 = r1 == 6u;
    }
    if (zf_2) {
        return guest::cpu()->r[0];
    }
    if (r1 == 5u) {
        return guest::cpu()->r[0];
    }
    r2_1 = ~0u;
    return call_001b6278(guest::cpu()->r[0], r1, r2_1, 0u);
}

}  // namespace d_003035a4
GUEST_EXPORT(0x003035a4, d_003035a4::f_003035a4);

// f_003035dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003035dc {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x00303534, u32(u32, u32, u32, u32)> call_00303534;  // (from the original)
inline constexpr guest::Function<0x003035a4, u32(u32, u32, u32, u32)> call_003035a4;  // (from the original)
inline constexpr guest::Function<0x006f3a0c, u32(u32, u32, u32, u32)> call_006f3a0c;  // (from the original)

u32 f_003035dc(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r5_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = 7u;
    r5_1 = r1;
    if (r1 != 0) {
        if (r5_1 == 1u) {
            goto L_303604;
        }
        if (r5_1 != 2u) {
            *gptr<u8>(r0 + 0x10u) = u8(r5_1);  // (from the original)
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0_1;
        }
        goto L_30360c;
    }
    *gptr<u32>(r0) = u32(0xau);  // (from the original)
    *gptr<u32>(r0 + 4u) = u32(r0_1);
    r0_2 = r0 + 8u;
    r0_1 = call_00303534(r0_2, 0u, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r0 + 0x10u) = u8(r5_1);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
L_303604:;
    r1 = 3u;
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r0 + 4u) = u32(r0_1);
    *gptr<u8>(r0 + 0x10u) = u8(r5_1);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
L_30360c:;
    *gptr<u32>(r0) = u32(0u);
    *gptr<u32>(r0 + 4u) = u32(r0_1);
    r0_3 = call_002fae84(r0_1, 0u, r2, guest::cpu()->r[3]);
    r0_4 = r0_3 + 0x6214fu;  // (from the original)
    r0_5 = call_006f3a0c(r0_4, 1u, 0x6214fu, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r0_6 = call_002fae84(r0_5, r1_1, r2_1, guest::cpu()->r[3]);
    r0_7 = r0_6 + 0x7170cu;  // (from the original)
    r0_1 = call_003035a4(r0_7, 0xeu, 0x7170cu, guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r0 + 0x10u) = u8(r5_1);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_003035dc
GUEST_EXPORT(0x003035dd, d_003035dc::f_003035dc);

// f_003036dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003036dc {

inline constexpr guest::Function<0x003081b4, u32(u32, u32, u32, u32)> call_003081b4;  // (from the original)
inline constexpr guest::Function<0x0056be20, u32(u32, u32, u32, u32)> call_0056be20;  // (from the original)
inline constexpr guest::Function<0x007593ec, u32(u32, u32, u32, u32)> call_007593ec;  // (from the original)
inline constexpr guest::Function<0x00759664, u32(u32, u32, u32, u32)> call_00759664;  // (from the original)
inline constexpr guest::Function<0x007795ac, u32(u32, u32, u32, u32)> call_007795ac;  // (from the original)

u32 f_003036dc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    u32 r0_4 = 0;
    u32 r1_5 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r4_1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_1 = call_0056be20(r1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r13) = u32(r0_1);
    *gptr<u32>(r13 + 4) = u32(r1_1);
    guest::cpu()->r[13] = r13;
    call_007795ac(r4_1, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r1_2 = r13;
    guest::cpu()->r[13] = r13;
    call_003081b4(r4_1, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_2 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_3 = call_00759664(r0_2, r1_3, r2_3, r3_3);
    r1_4 = guest::cpu()->r[1];
    *gptr<u32>(r13) = u32(r2);
    *gptr<u32>(r13 + 4) = u32(r3);
    guest::cpu()->r[13] = r13;
    r0_4 = call_007593ec(r0, r1_4, r0_3, r1_4);
    r1_5 = guest::cpu()->r[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return r0_4;
}

}  // namespace d_003036dc
GUEST_EXPORT(0x003036dc, d_003036dc::f_003036dc);

// f_003037e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003037e4 {

inline constexpr guest::Function<0x00712e34, u32(u32, u32, u32, u32)> call_00712e34;  // (from the original)

u32 f_003037e4() {
    return call_00712e34(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003037e4
GUEST_EXPORT(0x003037e4, d_003037e4::f_003037e4);

// f_00303a50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00303a50 {

inline constexpr guest::Function<0x005f1224, u32(u32, u32, u32, u32)> call_005f1224;  // (from the original)

u32 f_00303a50() {
    return call_005f1224(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00303a50
GUEST_EXPORT(0x00303a50, d_00303a50::f_00303a50);

// f_00303a58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00303a58 {

inline constexpr guest::Function<0x005f1294, u32(u32, u32, u32, u32)> call_005f1294;  // (from the original)

u32 f_00303a58() {
    return call_005f1294(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00303a58
GUEST_EXPORT(0x00303a58, d_00303a58::f_00303a58);

// f_00303b10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00303b10 {

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)

u32 f_00303b10() {
    return call_002fc934(guest::cpu()->r[0], 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00303b10
GUEST_EXPORT(0x00303b10, d_00303b10::f_00303b10);

// f_00303b1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00303b1c {

inline constexpr guest::Function<0x002f77e8, u32(u32, u32, u32, u32)> call_002f77e8;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb96c, u32(u32, u32, u32, u32)> call_002fb96c;  // (from the original)
inline constexpr guest::Function<0x002ff368, u32(u32, u32, u32, u32)> call_002ff368;  // (from the original)
inline constexpr guest::Function<0x002ff4d4, u32(u32, u32, u32, u32)> call_002ff4d4;  // (from the original)
inline constexpr guest::Function<0x00302204, u32(u32, u32, u32, u32)> call_00302204;  // (from the original)
inline constexpr guest::Function<0x00306354, u32(u32, u32, u32, u32)> call_00306354;  // (from the original)
inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> call_006bbd54;  // (from the original)

u32 f_00303b1c(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r5_1 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r6_1 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_6 = 0;
    u32 r3_3 = 0;
    u32 r0_7 = 0;
    u32 r3_4 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_5 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    r13 = r13 - 0x2b8u;  // (from the original)
    r4 = 0u;
    r10 = 7u;
    r8 = r4;
    r9 = r13 + 0xcu;  // (from the original)
    r11 = 8u;
L_303b38:;
    r0_1 = r4 & 0xffu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fb96c(r0_1, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5_1 = r0_2;
    if (r0_2 == 0) {
        goto L_303c58;
    }
    res_1 = u32(*gptr<u8>(0x5720u + r5_1)) << 0x1d;  // (from the original)
    r0_2 = res_1;
    if (res_1 >> 0x1f) {  // (from the original)
        goto L_303c58;
    }
    res_2 = u32(*gptr<u8>(0x5701u + r5_1)) << 0x1e;  // (from the original)
    r0_2 = res_2;
    if (!(res_2 >> 0x1f)) {  // (from the original)
        goto L_303c58;
    }
    r6_1 = r4 & 0xffu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fb328(r0_2, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_4 = r0_3 + 0xa0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_00302204(r0_4, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_6 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002ff368(r0_6, r1_2, r2_2, r3_2);
    r3_3 = guest::cpu()->r[3];
    r0_7 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006bbd54(r0_7, 0x29u, 4u, r3_3);  // (from the original)
    r3_4 = r5_1 + 0x55a6u;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r8);
    if (r0_5 == r6_1) {
        r0_8 = r13 + 0x10u;  // (from the original)
        *gptr<u32>(r13) = u32(r9);
        *gptr<u32>(r13 + 4) = u32(r10);
        guest::cpu()->r[13] = r13;
        r0_9 = call_00306354(r0_8, 0x303c74u, 1u, r3_4);  // (from the original)
        r1_3 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
        if (r0_9 == 0) {
            goto L_303c44;
        }
        r0_10 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_11 = call_002ff4d4(r0_10, 0u, 1u, 0u);
        r1_3 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
        if (r0_11 == 0) {
            goto L_303c44;
        }
    } else {
        r0_12 = r13 + 0x10u;  // (from the original)
        *gptr<u32>(r13) = u32(r9);
        *gptr<u32>(r13 + 4) = u32(r11);
        guest::cpu()->r[13] = r13;
        r0_13 = call_00306354(r0_12, 0x303c74u, 2u, r3_4);  // (from the original)
        r1_3 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
        if (r0_13 == 0) {
            goto L_303c44;
        }
        r0_14 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_15 = call_002ff4d4(r0_14, 0u, 1u, 0u);
        r1_3 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
        if (r0_15 == 0) {
            goto L_303c44;
        }
    }
    r0_16 = r5_1 + 0x5700u;  // (from the original)
    r1_3 = u32(*gptr<u8>(r0_16 + 0x20u)) | 4u;  // (from the original)
    *gptr<u8>(r0_16 + 0x20u) = u8(r1_3);  // (from the original)
L_303c44:;
    r0_17 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f77e8(r0_17, r1_3, r2_3, r3_5);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_303c58:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(4u)) {
        guest::preempt();
        goto L_303b38;
    }
    r13 = r13 + 0x2b8u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_00303b1c
GUEST_EXPORT(0x00303b1c, d_00303b1c::f_00303b1c);

// f_00303f50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00303f50 {

struct __attribute__((packed)) Object_00303f50_0 {
    u8 unknown_0[0x1d9c];  // (not used here)
    u16 half_1d9c;
    u8 byte_1d9e;
};
GUEST_OFFSET(Object_00303f50_0, half_1d9c, 0x1d9c);  // (from the original)
GUEST_OFFSET(Object_00303f50_0, byte_1d9e, 0x1d9e);  // (from the original)

struct __attribute__((packed)) Object_00303f50_1 {
    u16 half_0;
};
GUEST_OFFSET(Object_00303f50_1, half_0, 0x0);  // (from the original)


u32 f_00303f50(gptr<Object_00303f50_0> arg0, gptr<Object_00303f50_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    r1_1 = u32(arg1->half_0);
    r0_1 = r0 + 0x1d9eu;  // (from the original)
    arg0->half_1d9c = u16(r1_1);
    arg0->byte_1d9e = u8(1u);
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00303f50
GUEST_EXPORT(0x00303f50, d_00303f50::f_00303f50);

// f_00304008: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00304008 {

inline constexpr guest::Function<0x0058dc80, u32(u32, u32, u32, u32)> call_0058dc80;  // (from the original)

u32 f_00304008() {
    return call_0058dc80(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00304008
GUEST_EXPORT(0x00304008, d_00304008::f_00304008);

// f_003040cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003040cc {

inline constexpr guest::Function<0x001cd690, u32(u32, u32, u32, u32)> call_001cd690;  // (from the original)
inline constexpr guest::Function<0x001cd810, u32(u32, u32, u32, u32)> call_001cd810;  // (from the original)
inline constexpr guest::Function<0x00268c8c, u32(u32, u32, u32, u32)> call_00268c8c;  // (from the original)
inline constexpr guest::Function<0x00521a10, u32(u32, u32, u32, u32)> call_00521a10;  // (from the original)

u32 f_003040cc(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_00521a10(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 2u) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    r0_2 = r0 + 0x78u;  // (from the original)
    call_00268c8c(r0_2, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_3 = r0 + (0x5du << 4);  // (from the original)
    call_001cd810(r0_3, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_001cd690(r0_3, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return 2u;
}

}  // namespace d_003040cc
GUEST_EXPORT(0x003040cd, d_003040cc::f_003040cc);

// f_003041ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003041ac {

inline constexpr guest::Function<0x0062fd7c, u32(u32, u32, u32, u32)> call_0062fd7c;  // (from the original)

u32 f_003041ac() {
    return call_0062fd7c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003041ac
GUEST_EXPORT(0x003041ac, d_003041ac::f_003041ac);

// f_00304280: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00304280 {

inline constexpr guest::Function<0x002f77e8, u32(u32, u32, u32, u32)> call_002f77e8;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb96c, u32(u32, u32, u32, u32)> call_002fb96c;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002ff368, u32(u32, u32, u32, u32)> call_002ff368;  // (from the original)
inline constexpr guest::Function<0x002ff4d4, u32(u32, u32, u32, u32)> call_002ff4d4;  // (from the original)
inline constexpr guest::Function<0x00306354, u32(u32, u32, u32, u32)> call_00306354;  // (from the original)

u32 f_00304280(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r5_1 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    r13 = r13 - 0x2a8u;  // (from the original)
    r4 = 0u;
    r6 = r4;
    r7 = r13 + 0xcu;  // (from the original)
    r8 = 0x21u;  // (from the original)
L_304298:;
    r0_1 = r4 & 0xffu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fb96c(r0_1, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5_1 = r0_2;
    if (r0_2 == 0) {
        goto L_304350;
    }
    r0_2 = u32(*gptr<u8>(0x5730u + r5_1));  // (from the original)
    res_1 = r0_2 << 0x1a;  // (from the original)
    r1 = res_1;
    if (!(res_1 >> 0x1f)) {  // (from the original)
        goto L_304350;
    }
    res_2 = r0_2 << 0x19;  // (from the original)
    r0_2 = res_2;
    if (res_2 >> 0x1f) {  // (from the original)
        goto L_304350;
    }
    guest::cpu()->r[13] = r13;
    call_002fb328(r0_2, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_3 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002ff368(r0_3, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_4 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fcbb0(r0_4, 0x2280u, r2_2, r3_2);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r6);
    r3_3 = r5_1 + 0x55a6u;  // (from the original)
    r0_5 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r13) = u32(r7);
    *gptr<u32>(r13 + 4) = u32(r8);
    guest::cpu()->r[13] = r13;
    r0_6 = call_00306354(r0_5, 0x304368u, 1u, r3_3);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_6 == 0) {
        goto L_30433c;
    }
    r0_7 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_002ff4d4(r0_7, 3u, 1u, 0u);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_8 == 0) {
        goto L_30433c;
    }
    r0_9 = r5_1 + 0x5700u;  // (from the original)
    r1_2 = u32(*gptr<u8>(r0_9 + 0x30u)) | 0x40u;  // (from the original)
    *gptr<u8>(r0_9 + 0x30u) = u8(r1_2);  // (from the original)
L_30433c:;
    r0_10 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f77e8(r0_10, r1_2, r2_3, r3_4);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_304350:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(4u)) {
        guest::preempt();
        goto L_304298;
    }
    r13 = r13 + 0x2a8u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_00304280
GUEST_EXPORT(0x00304280, d_00304280::f_00304280);

// f_0030437c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030437c {

inline constexpr guest::Function<0x0070b334, u32(u32, u32, u32, u32)> call_0070b334;  // (from the original)

u32 f_0030437c() {
    return call_0070b334(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030437c
GUEST_EXPORT(0x0030437c, d_0030437c::f_0030437c);

// f_00304438: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00304438 {

inline constexpr guest::Function<0x0071a23c, u32(u32, u32, u32, u32)> call_0071a23c;  // (from the original)

u32 f_00304438() {
    return call_0071a23c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00304438
GUEST_EXPORT(0x00304438, d_00304438::f_00304438);

// f_0030443c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030443c {

inline constexpr guest::Function<0x0077033c, u32(u32, u32, u32, u32)> call_0077033c;  // (from the original)

u32 f_0030443c() {
    return call_0077033c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030443c
GUEST_EXPORT(0x0030443c, d_0030443c::f_0030443c);

// f_00304440: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00304440 {

inline constexpr guest::Function<0x00770300, u32(u32, u32, u32, u32)> call_00770300;  // (from the original)

u32 f_00304440() {
    return call_00770300(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00304440
GUEST_EXPORT(0x00304440, d_00304440::f_00304440);

// f_00304444: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00304444 {

inline constexpr guest::Function<0x005f12c4, u32(u32, u32, u32, u32)> call_005f12c4;  // (from the original)

u32 f_00304444() {
    return call_005f12c4(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00304444
GUEST_EXPORT(0x00304444, d_00304444::f_00304444);

// f_0030444c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030444c {

inline constexpr guest::Function<0x004e26a0, u32(u32, u32, u32, u32)> call_004e26a0;  // (from the original)
inline constexpr guest::Function<0x00779630, u32(u32, u32, u32, u32)> call_00779630;  // (from the original)
inline constexpr guest::Function<0x00779664, u32(u32, u32, u32, u32)> call_00779664;  // (from the original)

u32 f_0030444c(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u64 t_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u64 t_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    call_00779630(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0u - 0x18u;  // (from the original)
    r5 = 0u;
    t_1 = u64(0u) + ~0u + u32(0u >= 0x18u);  // (from the original)
    if (u32(t_1 >> 0x20)) {  // (from the original)
        goto L_304498;
    }
    do {
L_30446c:;
        r0_1 = r4 + (r5 << 4) + 8u;
        call_004e26a0(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        r0_2 = r4 + (r5 << 5) + 0x2e8u;  // (from the original)
        call_00779664(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r5 = r5 + 1u;
        r1 = r5 - 0x18u;  // (from the original)
        t_2 = u64(0u) + ~0u + u32(r5 >= 0x18u);  // (from the original)
        guest::preempt();
    } while (!u32(t_2 >> 0x20));  // (from the original)
L_304498:;
    r5 = 0u;
    do {
L_30449c:;
        r0_3 = r4 + (r5 << 4) + 0x1c8u;  // (from the original)
        call_004e26a0(r0_3, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        r0_4 = r4 + (r5 << 5) + 0x668u;  // (from the original)
        call_00779664(r0_4, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r5 = r5 + 1u;
        guest::preempt();
    } while (r5 < 0xau);  // (from the original)
    r5 = 0u;
    do {
L_3044c8:;
        r0_5 = r4 + (r5 << 5) + 0x7a8u;  // (from the original)
        call_00779664(r0_5, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r5 = r5 + 1u;
        guest::preempt();
    } while (r5 < 2u);
    r5 = 0u;
    do {
L_3044e8:;
        r0_6 = r4 + (r5 << 4) + 0x188u;  // (from the original)
        call_004e26a0(r0_6, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_3 = guest::cpu()->r[1];
        r0_7 = r4 + (r5 << 5) + 0x5e8u;  // (from the original)
        call_00779664(r0_7, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r5 = r5 + 1u;
        guest::preempt();
    } while (r5 < 4u);
    r5 = 0u;
    do {
L_304514:;
        r0_8 = r4 + (r5 << 4) + 0x268u;  // (from the original)
        r0_9 = call_004e26a0(r0_8, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r5 = r5 + 1u;
        guest::preempt();
    } while (r5 < 6u);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_9;
}

}  // namespace d_0030444c
GUEST_EXPORT(0x0030444c, d_0030444c::f_0030444c);

// f_00304530: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00304530 {

inline guest::global<u32, 0x0094ed3c> global_0094ed3c;  // (from the original)
inline constexpr guest::Function<0x0012ca7c, u32(u32, u32, u32, u32)> call_0012ca7c;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)

u32 f_00304530(u32 r0_unused, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    if ((*global_0094ed3c & 1u) != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return 0x98a134u;  // (from the original)
    }
    r0_1 = call_002fe7dc(0x94ed3cu, r1, r2, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 0x98a134u;  // (from the original)
    }
    r0_2 = call_0012ca7c(0x98a134u, r1_1, r2_1, guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r0_3 = r0_2 + 0xecu;  // (from the original)
    call_0012ca7c(r0_3, r1_2, r2_2, guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0x1c20b8u;  // (from the original)
    return 0x98a134u;  // (from the original)
}

}  // namespace d_00304530
GUEST_EXPORT(0x00304530, d_00304530::f_00304530);

// f_00304594: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00304594 {

inline constexpr guest::Function<0x0056c6f0, u32(u32, u32, u32, u32)> call_0056c6f0;  // (from the original)

u32 f_00304594() {
    return call_0056c6f0(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00304594
GUEST_EXPORT(0x00304594, d_00304594::f_00304594);

// f_003045a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003045a8 {

inline guest::global<u32, 0x009753d0> global_009753d0;  // (from the original)
inline constexpr guest::Function<0x00138c78, u32(u32, u32, u32, u32)> call_00138c78;  // (from the original)

u32 f_003045a8() {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = *global_009753d0 + 0x40u;  // (from the original)
    r0_2 = call_00138c78(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_3 = *gptr<u32>(r0_2 + 0x68u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0_3;
}

}  // namespace d_003045a8
GUEST_EXPORT(0x003045a8, d_003045a8::f_003045a8);

// f_003045c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003045c8 {

inline guest::global<u32, 0x0095386c> global_0095386c;  // (from the original)
inline constexpr guest::Function<0x007d1164, u32(u32, u32, u32, u32)> call_007d1164;  // (from the original)

u32 f_003045c8(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    *gptr<u8>(*global_0095386c + 0xaau) = u8(1u);  // (from the original)
    *gptr<u8>(r13) = u8(0u);
    r1_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_1 = call_007d1164(4u, r1_1, guest::cpu()->r[2], r3);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_003045c8
GUEST_EXPORT(0x003045c8, d_003045c8::f_003045c8);

// f_003045f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003045f8 {

inline guest::global<u32, 0x0095386c> global_0095386c;  // (from the original)
inline constexpr guest::Function<0x007d1164, u32(u32, u32, u32, u32)> call_007d1164;  // (from the original)

u32 f_003045f8(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    *gptr<u8>(*global_0095386c + 0xaau) = u8(0u);  // (from the original)
    *gptr<u8>(r13) = u8(1u);
    r1_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_1 = call_007d1164(4u, r1_1, guest::cpu()->r[2], r3);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_003045f8
GUEST_EXPORT(0x003045f8, d_003045f8::f_003045f8);

// f_00304628: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00304628 {

struct __attribute__((packed)) Object_00304628_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_00304628_0, byte_0, 0x0);  // (from the original)

inline guest::global<u32, 0x0095386c> global_0095386c;  // (from the original)

u32 f_00304628(gptr<Object_00304628_0> arg0) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    r0_1 = u32(arg0->byte_0);
    r1_1 = *global_0095386c;
    *gptr<u8>(r1_1 + 0x9bu) = u8(r0_1);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00304628
GUEST_EXPORT(0x00304628, d_00304628::f_00304628);

// f_00304824: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00304824 {

inline constexpr guest::Function<0x00710a34, u32(u32, u32, u32, u32)> call_00710a34;  // (from the original)

u32 f_00304824() {
    return call_00710a34(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00304824
GUEST_EXPORT(0x00304824, d_00304824::f_00304824);

// f_0030482c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030482c {

inline constexpr guest::Function<0x0070f010, u32(u32, u32, u32, u32)> call_0070f010;  // (from the original)

u32 f_0030482c() {
    return call_0070f010(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030482c
GUEST_EXPORT(0x0030482c, d_0030482c::f_0030482c);

// f_00304830: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00304830 {

inline constexpr guest::Function<0x0070f034, u32(u32, u32, u32, u32)> call_0070f034;  // (from the original)

u32 f_00304830() {
    return call_0070f034(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00304830
GUEST_EXPORT(0x00304830, d_00304830::f_00304830);

// f_00304868: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00304868 {

struct __attribute__((packed)) Object_00304868_0 {
    u8 unknown_0[0x90];  // (not used here)
    u32 word_90;
    u32 word_94;
    u32 word_98;
    u32 word_9c;
    u32 word_a0;
    u32 word_a4;
    u32 word_a8;
    u32 word_ac;
    u32 word_b0;
    u32 word_b4;
    u32 word_b8;
    u32 word_bc;
    u32 word_c0;
    u32 word_c4;
};
GUEST_OFFSET(Object_00304868_0, word_90, 0x90);  // (from the original)
GUEST_OFFSET(Object_00304868_0, word_94, 0x94);  // (from the original)
GUEST_OFFSET(Object_00304868_0, word_98, 0x98);  // (from the original)
GUEST_OFFSET(Object_00304868_0, word_9c, 0x9c);  // (from the original)
GUEST_OFFSET(Object_00304868_0, word_a0, 0xa0);  // (from the original)
GUEST_OFFSET(Object_00304868_0, word_a4, 0xa4);  // (from the original)
GUEST_OFFSET(Object_00304868_0, word_a8, 0xa8);  // (from the original)
GUEST_OFFSET(Object_00304868_0, word_ac, 0xac);  // (from the original)
GUEST_OFFSET(Object_00304868_0, word_b0, 0xb0);  // (from the original)
GUEST_OFFSET(Object_00304868_0, word_b4, 0xb4);  // (from the original)
GUEST_OFFSET(Object_00304868_0, word_b8, 0xb8);  // (from the original)
GUEST_OFFSET(Object_00304868_0, word_bc, 0xbc);  // (from the original)
GUEST_OFFSET(Object_00304868_0, word_c0, 0xc0);  // (from the original)
GUEST_OFFSET(Object_00304868_0, word_c4, 0xc4);  // (from the original)

inline guest::global<u32, 0x008474b8> global_008474b8;  // (from the original)
inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)
inline constexpr guest::Function<0x0018fc94, u32(u32, u32, u32, u32)> call_0018fc94;  // (from the original)
inline constexpr guest::Function<0x001babbc, u32(u32, u32, u32, u32)> call_001babbc;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x00325498, u32(u32, u32, u32, u32)> call_00325498;  // (from the original)
inline constexpr guest::Function<0x00544f18, u32(u32, u32, u32, u32)> call_00544f18;  // (from the original)
inline constexpr guest::Function<0x00544fec, u32(u32, u32, u32, u32)> call_00544fec;  // (from the original)
inline constexpr guest::Function<0x0054a644, u32(u32, u32, u32, u32)> call_0054a644;  // (from the original)
inline constexpr guest::Function<0x005b3f88, u32(u32, u32, u32, u32)> call_005b3f88;  // (from the original)
inline constexpr guest::Function<0x006cb9fc, u32(u32, u32, u32, u32)> call_006cb9fc;  // (from the original)

u32 f_00304868(gptr<Object_00304868_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    float S4 = 0;
    float S5 = 0;
    float S6 = 0;
    float S7 = 0;
    u32 r6_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S4_1 = 0;
    float S5_1 = 0;
    float S6_1 = 0;
    float S7_1 = 0;
    u32 r5_1 = 0;
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r12_1 = 0;
    u32 ea_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    float S3_2 = 0;
    float S4_2 = 0;
    float S5_2 = 0;
    float S6_2 = 0;
    float S7_2 = 0;
    u32 r0_2 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    float S2_3 = 0;
    float S3_3 = 0;
    float S4_3 = 0;
    float S5_3 = 0;
    float S6_3 = 0;
    float S7_3 = 0;
    u32 r0_3 = 0;
    u32 r1_5 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    float S0_4 = 0;
    float S1_4 = 0;
    float S2_4 = 0;
    float S3_4 = 0;
    float S4_4 = 0;
    float S5_4 = 0;
    float S6_4 = 0;
    float S7_4 = 0;
    u32 r0_4 = 0;
    u32 r2_5 = 0;
    u32 r3_6 = 0;
    float S0_5 = 0;
    float S1_5 = 0;
    float S2_5 = 0;
    float S3_5 = 0;
    float S4_5 = 0;
    float S5_5 = 0;
    float S6_5 = 0;
    float S7_5 = 0;
    u32 zf_1 = 0;
    u32 zf_2 = 0;
    u32 r1_6 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r2_6 = 0;
    u32 r3_7 = 0;
    float S0_6 = 0;
    float S1_6 = 0;
    float S2_6 = 0;
    float S3_6 = 0;
    float S4_6 = 0;
    float S5_6 = 0;
    float S6_6 = 0;
    float S7_6 = 0;
    u32 r0_7 = 0;
    u32 r1_7 = 0;
    u32 r2_7 = 0;
    u32 r3_8 = 0;
    float S0_7 = 0;
    float S1_7 = 0;
    float S2_7 = 0;
    float S3_7 = 0;
    float S4_7 = 0;
    float S5_7 = 0;
    float S6_7 = 0;
    float S7_7 = 0;
    u32 zf_3 = 0;
    u32 r1_8 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r2_8 = 0;
    u32 r3_9 = 0;
    float S0_8 = 0;
    float S1_8 = 0;
    float S2_8 = 0;
    float S3_8 = 0;
    float S4_8 = 0;
    float S5_8 = 0;
    float S6_8 = 0;
    float S7_8 = 0;
    u32 r0_10 = 0;
    u32 r1_9 = 0;
    u32 r2_9 = 0;
    u32 r3_10 = 0;
    float S0_9 = 0;
    float S1_9 = 0;
    float S2_9 = 0;
    float S3_9 = 0;
    float S4_9 = 0;
    float S5_9 = 0;
    float S6_9 = 0;
    float S7_9 = 0;
    u32 r0_11 = 0;
    u32 r2_10 = 0;
    u32 r3_11 = 0;
    float S0_10 = 0;
    float S1_10 = 0;
    float S2_10 = 0;
    float S3_10 = 0;
    float S4_10 = 0;
    float S5_10 = 0;
    float S6_10 = 0;
    float S7_10 = 0;
    u32 r0_12 = 0;
    u32 r1_10 = 0;
    u32 r2_11 = 0;
    u32 r3_12 = 0;
    float S0_11 = 0;
    float S1_11 = 0;
    float S2_11 = 0;
    float S3_11 = 0;
    float S4_11 = 0;
    float S5_11 = 0;
    float S6_11 = 0;
    float S7_11 = 0;
    u32 r0_13 = 0;
    u32 r2_12 = 0;
    u32 r3_13 = 0;
    float S0_12 = 0;
    float S1_12 = 0;
    float S2_12 = 0;
    float S3_12 = 0;
    float S4_12 = 0;
    float S5_12 = 0;
    float S6_12 = 0;
    float S7_12 = 0;
    u32 r0_14 = 0;
    u32 r1_11 = 0;
    u32 r2_13 = 0;
    u32 r3_14 = 0;
    float S0_13 = 0;
    float S1_13 = 0;
    float S2_13 = 0;
    float S3_13 = 0;
    float S4_13 = 0;
    float S5_13 = 0;
    float S6_13 = 0;
    float S7_13 = 0;
    u32 r0_15 = 0;
    u32 r1_12 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r2_14 = 0;
    u32 r3_15 = 0;
    float S0_14 = 0;
    float S1_14 = 0;
    float S2_14 = 0;
    float S3_14 = 0;
    float S4_14 = 0;
    float S5_14 = 0;
    float S6_14 = 0;
    float S7_14 = 0;
    u32 r0_18 = 0;
    u32 r1_13 = 0;
    u32 r2_15 = 0;
    u32 r3_16 = 0;
    float S0_15 = 0;
    float S1_15 = 0;
    float S2_15 = 0;
    float S3_15 = 0;
    float S4_15 = 0;
    float S5_15 = 0;
    float S6_15 = 0;
    float S7_15 = 0;
    u32 r0_19 = 0;
    u32 r2_16 = 0;
    u32 r3_17 = 0;
    float S0_16 = 0;
    float S1_16 = 0;
    float S2_16 = 0;
    float S3_16 = 0;
    float S4_16 = 0;
    float S5_16 = 0;
    float S6_16 = 0;
    float S7_16 = 0;
    u32 r0_20 = 0;
    u32 r1_14 = 0;
    u32 r2_17 = 0;
    u32 r3_18 = 0;
    float S0_17 = 0;
    float S1_17 = 0;
    float S2_17 = 0;
    float S3_17 = 0;
    float S4_17 = 0;
    float S5_17 = 0;
    float S6_17 = 0;
    float S7_17 = 0;
    u32 r1_15 = 0;
    u32 r0_21 = 0;
    u32 r1_16 = 0;
    u32 r2_18 = 0;
    u32 r3_19 = 0;
    float S0_18 = 0;
    float S1_18 = 0;
    float S2_18 = 0;
    float S3_18 = 0;
    float S4_18 = 0;
    float S5_18 = 0;
    float S6_18 = 0;
    float S7_18 = 0;
    u32 r0_22 = 0;
    u32 r2_19 = 0;
    u32 r3_20 = 0;
    float S2_19 = 0;
    float S3_19 = 0;
    float S4_19 = 0;
    float S5_19 = 0;
    float S6_19 = 0;
    float S7_19 = 0;
    u32 r0_23 = 0;
    u32 r1_17 = 0;
    u32 r2_20 = 0;
    u32 r3_21 = 0;
    float S0_19 = 0;
    float S1_19 = 0;
    float S2_20 = 0;
    float S3_20 = 0;
    float S4_20 = 0;
    float S5_20 = 0;
    float S6_20 = 0;
    float S7_20 = 0;
    u32 r0_24 = 0;
    u32 r1_18 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r2_21 = 0;
    u32 r3_22 = 0;
    float S0_20 = 0;
    float S1_20 = 0;
    float S2_21 = 0;
    float S3_21 = 0;
    float S4_21 = 0;
    float S5_21 = 0;
    float S6_21 = 0;
    float S7_21 = 0;
    u32 r0_27 = 0;
    u32 r1_19 = 0;
    u32 r2_22 = 0;
    u32 r3_23 = 0;
    float S0_21 = 0;
    float S1_21 = 0;
    float S2_22 = 0;
    float S3_22 = 0;
    float S4_22 = 0;
    float S5_22 = 0;
    float S6_22 = 0;
    float S7_22 = 0;
    u32 r0_28 = 0;
    r4 = r0;
    r13 = r13 - 0x140u;  // (from the original)
    r6_1 = r4 + 0xb0u;  // (from the original)
    S0_1 = std::bit_cast<float>(*global_008474b8);
    S1_1 = std::bit_cast<float>(*gptr<u32>(0x8474b8u + 4));  // (from the original)
    S2_1 = std::bit_cast<float>(*gptr<u32>(0x8474b8u + 8));  // (from the original)
    S3_1 = std::bit_cast<float>(*gptr<u32>(0x8474b8u + 0xc));  // (from the original)
    S4_1 = std::bit_cast<float>(*gptr<u32>(0x8474b8u + 0x10));  // (from the original)
    S5_1 = std::bit_cast<float>(*gptr<u32>(0x8474b8u + 0x14));  // (from the original)
    S6_1 = std::bit_cast<float>(*gptr<u32>(0x8474b8u + 0x18));  // (from the original)
    S7_1 = std::bit_cast<float>(*gptr<u32>(0x8474b8u + 0x1c));  // (from the original)
    arg0->word_90 = u32(std::bit_cast<u32>(S0_1));
    arg0->word_94 = u32(std::bit_cast<u32>(S1_1));
    arg0->word_98 = u32(std::bit_cast<u32>(S2_1));
    arg0->word_9c = u32(std::bit_cast<u32>(S3_1));
    arg0->word_a0 = u32(std::bit_cast<u32>(S4_1));
    arg0->word_a4 = u32(std::bit_cast<u32>(S5_1));
    arg0->word_a8 = u32(std::bit_cast<u32>(S6_1));
    arg0->word_ac = u32(std::bit_cast<u32>(S7_1));
    r5_1 = *gptr<u32>(0x8474b8u + 0x30u);  // (from the original)
    ea_1 = 0x8474b8u + 0x20u;  // (from the original)
    r1_1 = *gptr<u32>(ea_1);
    r2_1 = *gptr<u32>(ea_1 + 4);
    r3_1 = *gptr<u32>(ea_1 + 8);
    r12_1 = *gptr<u32>(ea_1 + 0xc);  // (from the original)
    arg0->word_c4 = u32(*gptr<u32>(0x8474b8u + 0x34u));  // (from the original)
    arg0->word_c0 = u32(r5_1);
    arg0->word_b0 = u32(r1_1);
    arg0->word_b4 = u32(r2_1);
    arg0->word_b8 = u32(r3_1);
    arg0->word_bc = u32(r12_1);
    ea_2 = r13 + 4u;
    *gptr<u32>(ea_2) = u32(r13 + 0xcu);  // (from the original)
    *gptr<u32>(ea_2 + 4) = u32(0x100u);  // (from the original)
    r3_2 = u32(*global_008c9f1c);
    r1_2 = *gptr<u32>(r13 + 4u) - 1u;
    *gptr<u8>(0x100u + r1_2) = u8(r3_2);  // (from the original)
    *gptr<u8>(r13 + 0xcu) = u8(u32(*global_008c9f1c));  // (from the original)
    *gptr<u32>(r13) = u32(0x9048b0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    guest::cpu()->s[6] = S6_1;
    guest::cpu()->s[7] = S7_1;
    r0_1 = call_002f74c8(0x9048b0u, r1_2, 0x100u, r3_2);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    S3_2 = guest::cpu()->s[3];
    S4_2 = guest::cpu()->s[4];
    S5_2 = guest::cpu()->s[5];
    S6_2 = guest::cpu()->s[6];
    S7_2 = guest::cpu()->s[7];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    guest::cpu()->s[3] = S3_2;
    guest::cpu()->s[4] = S4_2;
    guest::cpu()->s[5] = S5_2;
    guest::cpu()->s[6] = S6_2;
    guest::cpu()->s[7] = S7_2;
    r0_2 = call_005b3f88(r0_1, r1_3, r2_2, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    S2_3 = guest::cpu()->s[2];
    S3_3 = guest::cpu()->s[3];
    S4_3 = guest::cpu()->s[4];
    S5_3 = guest::cpu()->s[5];
    S6_3 = guest::cpu()->s[6];
    S7_3 = guest::cpu()->s[7];
    r6 = 0u;
    if (r0_2 != 6u) {
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_3;
        guest::cpu()->s[2] = S2_3;
        guest::cpu()->s[3] = S3_3;
        guest::cpu()->s[4] = S4_3;
        guest::cpu()->s[5] = S5_3;
        guest::cpu()->s[6] = S6_3;
        guest::cpu()->s[7] = S7_3;
        r0_3 = call_002f74c8(r0_2, r1_4, r2_3, r3_4);
        r1_5 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
        S0_4 = guest::cpu()->s[0];
        S1_4 = guest::cpu()->s[1];
        S2_4 = guest::cpu()->s[2];
        S3_4 = guest::cpu()->s[3];
        S4_4 = guest::cpu()->s[4];
        S5_4 = guest::cpu()->s[5];
        S6_4 = guest::cpu()->s[6];
        S7_4 = guest::cpu()->s[7];
        if (r0_3 == 0x25u) {  // (from the original)
            goto L_304a14;
        }
        goto L_304a28;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    guest::cpu()->s[2] = S2_3;
    guest::cpu()->s[3] = S3_3;
    guest::cpu()->s[4] = S4_3;
    guest::cpu()->s[5] = S5_3;
    guest::cpu()->s[6] = S6_3;
    guest::cpu()->s[7] = S7_3;
    r0_4 = call_002f74c8(r0_2, r1_4, r2_3, r3_4);
    r2_5 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    S0_5 = guest::cpu()->s[0];
    S1_5 = guest::cpu()->s[1];
    S2_5 = guest::cpu()->s[2];
    S3_5 = guest::cpu()->s[3];
    S4_5 = guest::cpu()->s[4];
    S5_5 = guest::cpu()->s[5];
    S6_5 = guest::cpu()->s[6];
    S7_5 = guest::cpu()->s[7];
    zf_1 = r0_4 == 0x4bu;  // (from the original)
    if (!zf_1) {
        zf_2 = *gptr<u32>(r4 + 8u) == 1u;
        r1_6 = r13;
        r0_5 = r13 + 0x110u;  // (from the original)
        if (zf_2) {
            goto L_3049dc;
        }
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_5;
        guest::cpu()->s[1] = S1_5;
        guest::cpu()->s[2] = S2_5;
        guest::cpu()->s[3] = S3_5;
        guest::cpu()->s[4] = S4_5;
        guest::cpu()->s[5] = S5_5;
        guest::cpu()->s[6] = S6_5;
        guest::cpu()->s[7] = S7_5;
        r0_6 = call_0054a644(r0_5, r1_6, r2_5, r3_6);
        r2_6 = guest::cpu()->r[2];
        r3_7 = guest::cpu()->r[3];
        S0_6 = guest::cpu()->s[0];
        S1_6 = guest::cpu()->s[1];
        S2_6 = guest::cpu()->s[2];
        S3_6 = guest::cpu()->s[3];
        S4_6 = guest::cpu()->s[4];
        S5_6 = guest::cpu()->s[5];
        S6_6 = guest::cpu()->s[6];
        S7_6 = guest::cpu()->s[7];
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_6;
        guest::cpu()->s[1] = S1_6;
        guest::cpu()->s[2] = S2_6;
        guest::cpu()->s[3] = S3_6;
        guest::cpu()->s[4] = S4_6;
        guest::cpu()->s[5] = S5_6;
        guest::cpu()->s[6] = S6_6;
        guest::cpu()->s[7] = S7_6;
        r0_7 = call_00544fec(r0_6, 0x304b24u, r2_6, r3_7);  // (from the original)
        r1_7 = guest::cpu()->r[1];
        r2_7 = guest::cpu()->r[2];
        r3_8 = guest::cpu()->r[3];
        S0_7 = guest::cpu()->s[0];
        S1_7 = guest::cpu()->s[1];
        S2_7 = guest::cpu()->s[2];
        S3_7 = guest::cpu()->s[3];
        S4_7 = guest::cpu()->s[4];
        S5_7 = guest::cpu()->s[5];
        S6_7 = guest::cpu()->s[6];
        S7_7 = guest::cpu()->s[7];
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_7;
        guest::cpu()->s[1] = S1_7;
        guest::cpu()->s[2] = S2_7;
        guest::cpu()->s[3] = S3_7;
        guest::cpu()->s[4] = S4_7;
        guest::cpu()->s[5] = S5_7;
        guest::cpu()->s[6] = S6_7;
        guest::cpu()->s[7] = S7_7;
        call_00544f18(r0_7, r1_7, r2_7, r3_8);
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
        goto L_304a70;
    }
    zf_3 = *gptr<u32>(r4 + 8u) == 1u;
    r1_8 = r13;
    r0_8 = r13 + 0x110u;  // (from the original)
    if (!zf_3) {
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_5;
        guest::cpu()->s[1] = S1_5;
        guest::cpu()->s[2] = S2_5;
        guest::cpu()->s[3] = S3_5;
        guest::cpu()->s[4] = S4_5;
        guest::cpu()->s[5] = S5_5;
        guest::cpu()->s[6] = S6_5;
        guest::cpu()->s[7] = S7_5;
        r0_9 = call_0054a644(r0_8, r1_8, r2_5, r3_6);
        r2_8 = guest::cpu()->r[2];
        r3_9 = guest::cpu()->r[3];
        S0_8 = guest::cpu()->s[0];
        S1_8 = guest::cpu()->s[1];
        S2_8 = guest::cpu()->s[2];
        S3_8 = guest::cpu()->s[3];
        S4_8 = guest::cpu()->s[4];
        S5_8 = guest::cpu()->s[5];
        S6_8 = guest::cpu()->s[6];
        S7_8 = guest::cpu()->s[7];
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_8;
        guest::cpu()->s[1] = S1_8;
        guest::cpu()->s[2] = S2_8;
        guest::cpu()->s[3] = S3_8;
        guest::cpu()->s[4] = S4_8;
        guest::cpu()->s[5] = S5_8;
        guest::cpu()->s[6] = S6_8;
        guest::cpu()->s[7] = S7_8;
        r0_10 = call_00544fec(r0_9, 0x304b3cu, r2_8, r3_9);  // (from the original)
        r1_9 = guest::cpu()->r[1];
        r2_9 = guest::cpu()->r[2];
        r3_10 = guest::cpu()->r[3];
        S0_9 = guest::cpu()->s[0];
        S1_9 = guest::cpu()->s[1];
        S2_9 = guest::cpu()->s[2];
        S3_9 = guest::cpu()->s[3];
        S4_9 = guest::cpu()->s[4];
        S5_9 = guest::cpu()->s[5];
        S6_9 = guest::cpu()->s[6];
        S7_9 = guest::cpu()->s[7];
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_9;
        guest::cpu()->s[1] = S1_9;
        guest::cpu()->s[2] = S2_9;
        guest::cpu()->s[3] = S3_9;
        guest::cpu()->s[4] = S4_9;
        guest::cpu()->s[5] = S5_9;
        guest::cpu()->s[6] = S6_9;
        guest::cpu()->s[7] = S7_9;
        call_00544f18(r0_10, r1_9, r2_9, r3_10);
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
        goto L_304a70;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_5;
    guest::cpu()->s[2] = S2_5;
    guest::cpu()->s[3] = S3_5;
    guest::cpu()->s[4] = S4_5;
    guest::cpu()->s[5] = S5_5;
    guest::cpu()->s[6] = S6_5;
    guest::cpu()->s[7] = S7_5;
    r0_11 = call_0054a644(r0_8, r1_8, r2_5, r3_6);
    r2_10 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    S0_10 = guest::cpu()->s[0];
    S1_10 = guest::cpu()->s[1];
    S2_10 = guest::cpu()->s[2];
    S3_10 = guest::cpu()->s[3];
    S4_10 = guest::cpu()->s[4];
    S5_10 = guest::cpu()->s[5];
    S6_10 = guest::cpu()->s[6];
    S7_10 = guest::cpu()->s[7];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_10;
    guest::cpu()->s[1] = S1_10;
    guest::cpu()->s[2] = S2_10;
    guest::cpu()->s[3] = S3_10;
    guest::cpu()->s[4] = S4_10;
    guest::cpu()->s[5] = S5_10;
    guest::cpu()->s[6] = S6_10;
    guest::cpu()->s[7] = S7_10;
    r0_12 = call_00544fec(r0_11, 0x304b58u, r2_10, r3_11);  // (from the original)
    r1_10 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    S0_11 = guest::cpu()->s[0];
    S1_11 = guest::cpu()->s[1];
    S2_11 = guest::cpu()->s[2];
    S3_11 = guest::cpu()->s[3];
    S4_11 = guest::cpu()->s[4];
    S5_11 = guest::cpu()->s[5];
    S6_11 = guest::cpu()->s[6];
    S7_11 = guest::cpu()->s[7];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_11;
    guest::cpu()->s[1] = S1_11;
    guest::cpu()->s[2] = S2_11;
    guest::cpu()->s[3] = S3_11;
    guest::cpu()->s[4] = S4_11;
    guest::cpu()->s[5] = S5_11;
    guest::cpu()->s[6] = S6_11;
    guest::cpu()->s[7] = S7_11;
    call_00544f18(r0_12, r1_10, r2_11, r3_12);
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
    goto L_304a70;
L_3049dc:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_5;
    guest::cpu()->s[2] = S2_5;
    guest::cpu()->s[3] = S3_5;
    guest::cpu()->s[4] = S4_5;
    guest::cpu()->s[5] = S5_5;
    guest::cpu()->s[6] = S6_5;
    guest::cpu()->s[7] = S7_5;
    r0_13 = call_0054a644(r0_5, r1_6, r2_5, r3_6);
    r2_12 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    S0_12 = guest::cpu()->s[0];
    S1_12 = guest::cpu()->s[1];
    S2_12 = guest::cpu()->s[2];
    S3_12 = guest::cpu()->s[3];
    S4_12 = guest::cpu()->s[4];
    S5_12 = guest::cpu()->s[5];
    S6_12 = guest::cpu()->s[6];
    S7_12 = guest::cpu()->s[7];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_12;
    guest::cpu()->s[1] = S1_12;
    guest::cpu()->s[2] = S2_12;
    guest::cpu()->s[3] = S3_12;
    guest::cpu()->s[4] = S4_12;
    guest::cpu()->s[5] = S5_12;
    guest::cpu()->s[6] = S6_12;
    guest::cpu()->s[7] = S7_12;
    r0_14 = call_00544fec(r0_13, 0x304b78u, r2_12, r3_13);  // (from the original)
    r1_11 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    S0_13 = guest::cpu()->s[0];
    S1_13 = guest::cpu()->s[1];
    S2_13 = guest::cpu()->s[2];
    S3_13 = guest::cpu()->s[3];
    S4_13 = guest::cpu()->s[4];
    S5_13 = guest::cpu()->s[5];
    S6_13 = guest::cpu()->s[6];
    S7_13 = guest::cpu()->s[7];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_13;
    guest::cpu()->s[1] = S1_13;
    guest::cpu()->s[2] = S2_13;
    guest::cpu()->s[3] = S3_13;
    guest::cpu()->s[4] = S4_13;
    guest::cpu()->s[5] = S5_13;
    guest::cpu()->s[6] = S6_13;
    guest::cpu()->s[7] = S7_13;
    call_00544f18(r0_14, r1_11, r2_13, r3_14);
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
    goto L_304a70;
L_304a14:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    guest::cpu()->s[2] = S2_4;
    guest::cpu()->s[3] = S3_4;
    guest::cpu()->s[4] = S4_4;
    guest::cpu()->s[5] = S5_4;
    guest::cpu()->s[6] = S6_4;
    guest::cpu()->s[7] = S7_4;
    r0_15 = call_006cb9fc(r0_3, r1_5, r2_4, r3_5);
    r2_4 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    S0_4 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    S2_4 = guest::cpu()->s[2];
    S3_4 = guest::cpu()->s[3];
    S4_4 = guest::cpu()->s[4];
    S5_4 = guest::cpu()->s[5];
    S6_4 = guest::cpu()->s[6];
    S7_4 = guest::cpu()->s[7];
    if (r0_15 == 0) {
        goto L_304ac4;
    }
L_304a28:;
    r1_12 = r13;
    r0_16 = r13 + 0x110u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    guest::cpu()->s[2] = S2_4;
    guest::cpu()->s[3] = S3_4;
    guest::cpu()->s[4] = S4_4;
    guest::cpu()->s[5] = S5_4;
    guest::cpu()->s[6] = S6_4;
    guest::cpu()->s[7] = S7_4;
    r0_17 = call_0054a644(r0_16, r1_12, r2_4, r3_5);
    r2_14 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    S0_14 = guest::cpu()->s[0];
    S1_14 = guest::cpu()->s[1];
    S2_14 = guest::cpu()->s[2];
    S3_14 = guest::cpu()->s[3];
    S4_14 = guest::cpu()->s[4];
    S5_14 = guest::cpu()->s[5];
    S6_14 = guest::cpu()->s[6];
    S7_14 = guest::cpu()->s[7];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_14;
    guest::cpu()->s[1] = S1_14;
    guest::cpu()->s[2] = S2_14;
    guest::cpu()->s[3] = S3_14;
    guest::cpu()->s[4] = S4_14;
    guest::cpu()->s[5] = S5_14;
    guest::cpu()->s[6] = S6_14;
    guest::cpu()->s[7] = S7_14;
    r0_18 = call_00544fec(r0_17, 0x304b98u, r2_14, r3_15);  // (from the original)
    r1_13 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    S0_15 = guest::cpu()->s[0];
    S1_15 = guest::cpu()->s[1];
    S2_15 = guest::cpu()->s[2];
    S3_15 = guest::cpu()->s[3];
    S4_15 = guest::cpu()->s[4];
    S5_15 = guest::cpu()->s[5];
    S6_15 = guest::cpu()->s[6];
    S7_15 = guest::cpu()->s[7];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_15;
    guest::cpu()->s[1] = S1_15;
    guest::cpu()->s[2] = S2_15;
    guest::cpu()->s[3] = S3_15;
    guest::cpu()->s[4] = S4_15;
    guest::cpu()->s[5] = S5_15;
    guest::cpu()->s[6] = S6_15;
    guest::cpu()->s[7] = S7_15;
    r0_19 = call_0018fc94(0xa5u, r1_13, r2_15, r3_16);  // (from the original)
    r2_16 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    S0_16 = guest::cpu()->s[0];
    S1_16 = guest::cpu()->s[1];
    S2_16 = guest::cpu()->s[2];
    S3_16 = guest::cpu()->s[3];
    S4_16 = guest::cpu()->s[4];
    S5_16 = guest::cpu()->s[5];
    S6_16 = guest::cpu()->s[6];
    S7_16 = guest::cpu()->s[7];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_16;
    guest::cpu()->s[1] = S1_16;
    guest::cpu()->s[2] = S2_16;
    guest::cpu()->s[3] = S3_16;
    guest::cpu()->s[4] = S4_16;
    guest::cpu()->s[5] = S5_16;
    guest::cpu()->s[6] = S6_16;
    guest::cpu()->s[7] = S7_16;
    r0_20 = call_00544fec(r0_18, r0_19, r2_16, r3_17);
    r1_14 = guest::cpu()->r[1];
    r2_17 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    S0_17 = guest::cpu()->s[0];
    S1_17 = guest::cpu()->s[1];
    S2_17 = guest::cpu()->s[2];
    S3_17 = guest::cpu()->s[3];
    S4_17 = guest::cpu()->s[4];
    S5_17 = guest::cpu()->s[5];
    S6_17 = guest::cpu()->s[6];
    S7_17 = guest::cpu()->s[7];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_17;
    guest::cpu()->s[1] = S1_17;
    guest::cpu()->s[2] = S2_17;
    guest::cpu()->s[3] = S3_17;
    guest::cpu()->s[4] = S4_17;
    guest::cpu()->s[5] = S5_17;
    guest::cpu()->s[6] = S6_17;
    guest::cpu()->s[7] = S7_17;
    call_00544f18(r0_20, r1_14, r2_17, r3_18);
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
L_304a70:;
    r1_15 = r13;
    r0_21 = r4 + 0x90u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    call_001babbc(r0_21, r1_15, r2, r3);
    r1_16 = guest::cpu()->r[1];
    r2_18 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    S0_18 = guest::cpu()->s[0];
    S1_18 = guest::cpu()->s[1];
    S2_18 = guest::cpu()->s[2];
    S3_18 = guest::cpu()->s[3];
    S4_18 = guest::cpu()->s[4];
    S5_18 = guest::cpu()->s[5];
    S6_18 = guest::cpu()->s[6];
    S7_18 = guest::cpu()->s[7];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_18;
    guest::cpu()->s[1] = S1_18;
    guest::cpu()->s[2] = S2_18;
    guest::cpu()->s[3] = S3_18;
    guest::cpu()->s[4] = S4_18;
    guest::cpu()->s[5] = S5_18;
    guest::cpu()->s[6] = S6_18;
    guest::cpu()->s[7] = S7_18;
    r0_22 = call_00325498(r4, r1_16, r2_18, r3_19);
    r1 = guest::cpu()->r[1];
    r2_19 = guest::cpu()->r[2];
    r3_20 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2_19 = guest::cpu()->s[2];
    S3_19 = guest::cpu()->s[3];
    S4_19 = guest::cpu()->s[4];
    S5_19 = guest::cpu()->s[5];
    S6_19 = guest::cpu()->s[6];
    S7_19 = guest::cpu()->s[7];
    if (r0_22 != 2u) {
        r13 = r13 + 0x140u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0_22;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2_19;
    guest::cpu()->s[3] = S3_19;
    guest::cpu()->s[4] = S4_19;
    guest::cpu()->s[5] = S5_19;
    guest::cpu()->s[6] = S6_19;
    guest::cpu()->s[7] = S7_19;
    r0_23 = call_002f74c8(r0_22, r1, r2_19, r3_20);
    r1_17 = guest::cpu()->r[1];
    r2_20 = guest::cpu()->r[2];
    r3_21 = guest::cpu()->r[3];
    S0_19 = guest::cpu()->s[0];
    S1_19 = guest::cpu()->s[1];
    S2_20 = guest::cpu()->s[2];
    S3_20 = guest::cpu()->s[3];
    S4_20 = guest::cpu()->s[4];
    S5_20 = guest::cpu()->s[5];
    S6_20 = guest::cpu()->s[6];
    S7_20 = guest::cpu()->s[7];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_19;
    guest::cpu()->s[1] = S1_19;
    guest::cpu()->s[2] = S2_20;
    guest::cpu()->s[3] = S3_20;
    guest::cpu()->s[4] = S4_20;
    guest::cpu()->s[5] = S5_20;
    guest::cpu()->s[6] = S6_20;
    guest::cpu()->s[7] = S7_20;
    r0_24 = call_005b3f88(r0_23, r1_17, r2_20, r3_21);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0_24 == 6u) {
        goto L_304b00;
    } else {
        *gptr<u32>(r4 + 0x84u) = u32(0xbu);  // (from the original)
    }
L_304ab4:;
    r0_22 = 2u;
    *gptr<u32>(r4 + 0x14u) = u32(r6);  // (from the original)
    r13 = r13 + 0x140u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0_22;
L_304ac4:;
    r1_18 = r13;
    r0_25 = r13 + 0x110u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    guest::cpu()->s[2] = S2_4;
    guest::cpu()->s[3] = S3_4;
    guest::cpu()->s[4] = S4_4;
    guest::cpu()->s[5] = S5_4;
    guest::cpu()->s[6] = S6_4;
    guest::cpu()->s[7] = S7_4;
    r0_26 = call_0054a644(r0_25, r1_18, r2_4, r3_5);
    r2_21 = guest::cpu()->r[2];
    r3_22 = guest::cpu()->r[3];
    S0_20 = guest::cpu()->s[0];
    S1_20 = guest::cpu()->s[1];
    S2_21 = guest::cpu()->s[2];
    S3_21 = guest::cpu()->s[3];
    S4_21 = guest::cpu()->s[4];
    S5_21 = guest::cpu()->s[5];
    S6_21 = guest::cpu()->s[6];
    S7_21 = guest::cpu()->s[7];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_20;
    guest::cpu()->s[1] = S1_20;
    guest::cpu()->s[2] = S2_21;
    guest::cpu()->s[3] = S3_21;
    guest::cpu()->s[4] = S4_21;
    guest::cpu()->s[5] = S5_21;
    guest::cpu()->s[6] = S6_21;
    guest::cpu()->s[7] = S7_21;
    r0_27 = call_00544fec(r0_26, 0x304ba8u, r2_21, r3_22);  // (from the original)
    r1_19 = guest::cpu()->r[1];
    r2_22 = guest::cpu()->r[2];
    r3_23 = guest::cpu()->r[3];
    S0_21 = guest::cpu()->s[0];
    S1_21 = guest::cpu()->s[1];
    S2_22 = guest::cpu()->s[2];
    S3_22 = guest::cpu()->s[3];
    S4_22 = guest::cpu()->s[4];
    S5_22 = guest::cpu()->s[5];
    S6_22 = guest::cpu()->s[6];
    S7_22 = guest::cpu()->s[7];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_21;
    guest::cpu()->s[1] = S1_21;
    guest::cpu()->s[2] = S2_22;
    guest::cpu()->s[3] = S3_22;
    guest::cpu()->s[4] = S4_22;
    guest::cpu()->s[5] = S5_22;
    guest::cpu()->s[6] = S6_22;
    guest::cpu()->s[7] = S7_22;
    call_00544f18(r0_27, r1_19, r2_22, r3_23);
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
    guest::preempt();
    goto L_304a70;
L_304b00:;
    r0_28 = *gptr<u32>(r4 + 8u);
    if (r0_28 != 1u) {
        r0_28 = 0xau;  // (from the original)
    }
    *gptr<u32>(r4 + 0x84u) = u32(r0_28);  // (from the original)
    guest::preempt();
    goto L_304ab4;
}

}  // namespace d_00304868
GUEST_EXPORT(0x00304868, d_00304868::f_00304868);

// f_00304bd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00304bd4 {

inline constexpr guest::Function<0x007701b8, u32(u32, u32, u32, u32)> call_007701b8;  // (from the original)

u32 f_00304bd4() {
    return call_007701b8(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00304bd4
GUEST_EXPORT(0x00304bd4, d_00304bd4::f_00304bd4);

// f_00304be8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00304be8 {

inline constexpr guest::Function<0x007110c4, u32(u32, u32, u32, u32)> call_007110c4;  // (from the original)

u32 f_00304be8() {
    return call_007110c4(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00304be8
GUEST_EXPORT(0x00304be8, d_00304be8::f_00304be8);

// f_00304bf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00304bf4 {


u32 f_00304bf4(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    if (r1 >= 5u) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0_1 = r0 + (r1 >> 3);
    r1_1 = u32(*gptr<u8>(r0_1)) | lsl_r(1u, r1 & 7u);
    *gptr<u8>(r0_1) = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00304bf4
GUEST_EXPORT(0x00304bf4, d_00304bf4::f_00304bf4);

// f_00304c68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00304c68 {

inline constexpr guest::Function<0x005b4d7c, u32(u32, u32, u32, u32)> call_005b4d7c;  // (from the original)

u32 f_00304c68(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    r1_1 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    *gptr<u32>(r13) = u32(r3);
    *gptr<u32>(r13 + 4u) = u32(r1_1);
    guest::cpu()->r[13] = r13;
    r0_1 = call_005b4d7c(0xac1948u, r0, r1, r2);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_00304c68
GUEST_EXPORT(0x00304c68, d_00304c68::f_00304c68);

// f_00304ca4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00304ca4 {

struct __attribute__((packed)) Object_00304ca4_0 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
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
    u8 byte_30;
    u8 unknown_31[0x3];  // (not used here)
    u32 word_34;
};
GUEST_OFFSET(Object_00304ca4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00304ca4_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00304ca4_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00304ca4_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00304ca4_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00304ca4_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_00304ca4_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_00304ca4_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_00304ca4_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_00304ca4_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_00304ca4_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_00304ca4_0, byte_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_00304ca4_0, word_34, 0x34);  // (from the original)


void f_00304ca4(gptr<Object_00304ca4_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    arg0->word_0 = u32(0u);
    arg0->word_10 = u32(0u);
    arg0->word_14 = u32(0u);
    arg0->word_18 = u32(0u);
    arg0->word_1c = u32(0u);
    arg0->word_20 = u32(0u);
    arg0->word_24 = u32(0u);
    arg0->word_28 = u32(0u);
    arg0->word_2c = u32(0u);
    arg0->word_8 = u32(r2);
    arg0->word_c = u32(r3);
    arg0->byte_30 = u8(0u);
    arg0->word_34 = u32(~0u);
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_00304ca4
GUEST_EXPORT(0x00304ca4, d_00304ca4::f_00304ca4);

// f_00304ce4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00304ce4 {

struct __attribute__((packed)) Object_00304ce4_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00304ce4_0, word_0, 0x0);  // (from the original)

inline guest::global<u32, 0x00ad5638> global_00ad5638;  // (from the original)
inline constexpr guest::Function<0x004dbc3c, u32(u32, u32, u32, u32)> call_004dbc3c;  // (from the original)

u32 f_00304ce4(gptr<Object_00304ce4_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = arg0->word_0;
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0_2 = call_004dbc3c(r0_1, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0;
    }
    r0_3 = *gptr<u32>(r0);
    r1_2 = *gptr<u32>(r0_3 + 4u);
    if (r1_2 != 0) {
        *gptr<u32>(r1_2) = u32(0u);
    }
    *global_00ad5638 = u32(r0_3);
    *gptr<u32>(r0_3 + 4u) = u32(0xad5638u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0xad5638u;  // (from the original)
    return r0;
}

}  // namespace d_00304ce4
GUEST_EXPORT(0x00304ce4, d_00304ce4::f_00304ce4);

// f_00304ed0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00304ed0 {

inline constexpr guest::Function<0x0071e6a8, u32(u32, u32, u32, u32)> call_0071e6a8;  // (from the original)

u32 f_00304ed0() {
    return call_0071e6a8(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00304ed0
GUEST_EXPORT(0x00304ed0, d_00304ed0::f_00304ed0);

// f_00304ed4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00304ed4 {

inline constexpr guest::Function<0x006a5f0c, u32(u32, u32, u32, u32)> call_006a5f0c;  // (from the original)

u32 f_00304ed4() {
    return call_006a5f0c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00304ed4
GUEST_EXPORT(0x00304ed4, d_00304ed4::f_00304ed4);

// f_00304ef0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00304ef0 {

inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> call_002ff8b0;  // (from the original)
inline constexpr guest::Function<0x00304f30, u32(u32, u32, u32, u32)> call_00304f30;  // (from the original)

u32 f_00304ef0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_002ff8b0(4u, r1, r2, r3);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_00304f30(r0, 0u, r0_1, r1);
}

}  // namespace d_00304ef0
GUEST_EXPORT(0x00304ef0, d_00304ef0::f_00304ef0);

// f_0030504c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030504c {

inline constexpr guest::Function<0x00582464, u32(u32, u32, u32, u32)> call_00582464;  // (from the original)

u32 f_0030504c() {
    return call_00582464(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030504c
GUEST_EXPORT(0x0030504c, d_0030504c::f_0030504c);

// f_0030507c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030507c {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_0030507c(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 res_1 = 0;
    u32 r3_3 = 0;
    u32 ea_1 = 0;
    u32 r3_4 = 0;
    u32 ea_2 = 0;
    r1_1 = r0 + 0x18u;  // (from the original)
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0_1 = call_003083bc(r0, r1_1, 0x26u, r3);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r0_1) = u32(0x909fc0u);  // (from the original)
    r0_2 = r0_1 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_005f4bfc(r0_2, 0x909fc0u, r2_1, r3_1);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r4 = r0_3 - 0xcu;  // (from the original)
    r0_4 = r0_3 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_4, 0x4cu, r2_2, r3_2);  // (from the original)
    r2 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x16u;  // (from the original)
    r1 = 0x13u;  // (from the original)
    do {
L_3050b4:;
        res_1 = r1 - 1u;
        r1 = res_1;
        r3_3 = u32(*gptr<u16>(r2));
        ea_1 = r0 + 2u;
        *gptr<u16>(ea_1) = u16(r3_3);
        r3_4 = u32(*gptr<u16>(r2));
        ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r4;
}

}  // namespace d_0030507c
GUEST_EXPORT(0x0030507c, d_0030507c::f_0030507c);

// f_0030514c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030514c {

inline constexpr guest::Function<0x0052db0c, u32(u32, u32, u32, u32)> call_0052db0c;  // (from the original)

u32 f_0030514c() {
    return call_0052db0c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030514c
GUEST_EXPORT(0x0030514c, d_0030514c::f_0030514c);

// f_00305174: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00305174 {

inline constexpr guest::Function<0x0032553c, u32(u32, u32, u32, u32)> call_0032553c;  // (from the original)

u32 f_00305174(u32 r0) {
    guest::cpu()->r[13] -= 8u;
    call_0032553c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return 2u;
}

}  // namespace d_00305174
GUEST_EXPORT(0x00305174, d_00305174::f_00305174);

// f_003051dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003051dc {

inline constexpr guest::Function<0x0056d0fc, u32(u32, u32, u32, u32)> call_0056d0fc;  // (from the original)

u32 f_003051dc() {
    return call_0056d0fc(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003051dc
GUEST_EXPORT(0x003051dc, d_003051dc::f_003051dc);

// f_0030527c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030527c {

inline constexpr guest::Function<0x0070bd30, u32(u32, u32, u32, u32)> call_0070bd30;  // (from the original)

u32 f_0030527c() {
    return call_0070bd30(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030527c
GUEST_EXPORT(0x0030527c, d_0030527c::f_0030527c);

// f_00305280: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00305280 {

struct __attribute__((packed)) Object_00305280_0 {
    u8 unknown_0[0x1];  // (not used here)
    u8 byte_1;
};
GUEST_OFFSET(Object_00305280_0, byte_1, 0x1);  // (from the original)

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x003035a4, u32(u32, u32, u32, u32)> call_003035a4;  // (from the original)

u32 f_00305280(gptr<Object_00305280_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5_1 = r1;
    r0_1 = 0u;
    if (r1 == 0) {
        arg0->byte_1 = u8(r0_1);
        *gptr<u8>(r0) = u8(r5_1);
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    if (r5_1 == 1u) {
        r0_1 = 5u;
        arg0->byte_1 = u8(r0_1);
        *gptr<u8>(r0) = u8(r5_1);
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    if (r5_1 != 2u) {
        *gptr<u8>(r0) = u8(r5_1);
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    arg0->byte_1 = u8(r0_1);
    r0_2 = call_002fae84(r0_1, r1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    r0_3 = r0_2 + 0x6214fu;  // (from the original)
    r1_1 = u32(*gptr<u8>(r0_3 + 3u)) | 8u;
    *gptr<u8>(r0_3 + 3u) = u8(r1_1);
    r0_4 = call_002fae84(r0_3, r1_1, r2_1, guest::cpu()->r[3]);
    r0_5 = r0_4 + 0x7170cu;  // (from the original)
    r0_1 = call_003035a4(r0_5, 7u, 0x7170cu, guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r0) = u8(r5_1);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00305280
GUEST_EXPORT(0x00305280, d_00305280::f_00305280);

// f_00305330: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00305330 {

inline guest::global<u32, 0x003053ac> global_003053ac;  // (from the original)
inline guest::global<u32, 0x003053b0> global_003053b0;  // (from the original)
inline guest::global<u32, 0x003053b4> global_003053b4;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)

u32 f_00305330(u32 r0, float S0, float S1, float S2, float S3, float S4, float S5, float S6) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S4_1 = 0;
    float S6_1 = 0;
    float S1_1 = 0;
    float S0_1 = 0;
    float S5_1 = 0;
    u32 r0_4 = 0;
    float S1_2 = 0;
    float S0_2 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0x294u;  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    r0_2 = call_0056878c(r0_1, 0x30539cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = r0_2 + 0x48u;  // (from the original)
    r0_3 = r0_2 + 0x80u;  // (from the original)
    S2_1 = std::bit_cast<float>(*gptr<u32>(r1_1));
    S3_1 = std::bit_cast<float>(*gptr<u32>(r1_1 + 4));
    S4_1 = std::bit_cast<float>(*global_003053ac);
    S6_1 = std::bit_cast<float>(*global_003053b0);
    S1_1 = std::bit_cast<float>(*gptr<u32>(r0_3 + 0xcu)) + S2_1 * S4_1;  // (from the original)
    S0_1 = std::bit_cast<float>(*gptr<u32>(r0_3 + 0x1cu)) - S3_1 * S4_1;  // (from the original)
    S5_1 = std::bit_cast<float>(*global_003053b4);
    r0_4 = r0 + 0x60cu;  // (from the original)
    *gptr<u8>(r0 + 0x608u) = u8(1u);  // (from the original)
    S1_2 = S6_1 - S1_1;
    S0_2 = S0_1 + S5_1;
    *gptr<u32>(r0_4) = u32(std::bit_cast<u32>(S1_2));
    *gptr<u32>(r0_4 + 4u) = u32(std::bit_cast<u32>(S0_2));
    r0_5 = r0 + 0x614u;  // (from the original)
    *gptr<u32>(r0_5) = u32(std::bit_cast<u32>(S2_1));
    *gptr<u32>(r0_5 + 4) = u32(std::bit_cast<u32>(S3_1));
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 1u;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return r0_5;
}

}  // namespace d_00305330
GUEST_EXPORT(0x00305330, d_00305330::f_00305330);

// f_003053b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003053b8 {

inline constexpr guest::Function<0x005ca3b0, u32(u32, u32, u32, u32)> call_005ca3b0;  // (from the original)

u32 f_003053b8() {
    return call_005ca3b0(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003053b8
GUEST_EXPORT(0x003053b8, d_003053b8::f_003053b8);

// f_003053bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003053bc {

inline constexpr guest::Function<0x0075c0ec, u32(u32, u32, u32, u32)> call_0075c0ec;  // (from the original)

u32 f_003053bc() {
    return call_0075c0ec(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003053bc
GUEST_EXPORT(0x003053bc, d_003053bc::f_003053bc);

// f_003053c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003053c8 {

inline constexpr guest::Function<0x005f12e4, u32(u32, u32, u32, u32)> call_005f12e4;  // (from the original)

u32 f_003053c8() {
    return call_005f12e4(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003053c8
GUEST_EXPORT(0x003053c8, d_003053c8::f_003053c8);

// f_003053cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003053cc {

inline constexpr guest::Function<0x005e9830, u32(u32, u32, u32, u32)> call_005e9830;  // (from the original)

u32 f_003053cc() {
    return call_005e9830(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003053cc
GUEST_EXPORT(0x003053cc, d_003053cc::f_003053cc);

// f_00305564: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00305564 {

inline constexpr guest::Function<0x007203e8, u32(u32, u32, u32, u32)> call_007203e8;  // (from the original)

u32 f_00305564() {
    return call_007203e8(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00305564
GUEST_EXPORT(0x00305564, d_00305564::f_00305564);

// f_00305568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00305568 {

inline constexpr guest::Function<0x005c710c, u32(u32, u32, u32, u32)> call_005c710c;  // (from the original)

u32 f_00305568() {
    return call_005c710c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00305568
GUEST_EXPORT(0x00305568, d_00305568::f_00305568);

// f_0030556c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030556c {

inline constexpr guest::Function<0x0058e228, u32(u32, u32, u32, u32)> call_0058e228;  // (from the original)

u32 f_0030556c() {
    return call_0058e228(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030556c
GUEST_EXPORT(0x0030556c, d_0030556c::f_0030556c);

// f_0030560c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030560c {


u32 f_0030560c(u32 r0) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    r1_1 = u32(s32(u32(u64(s64(s32(0x66666667u)) * s32(r0)) >> 0x20)) >> 2) - u32(s32(r0) >> 0x1f);  // (from the original)
    r0_1 = ~9u * r1_1 + r0;
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0030560c
GUEST_EXPORT(0x0030560c, d_0030560c::f_0030560c);

// f_00305894: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00305894 {

inline constexpr guest::Function<0x005cc2f4, u32(u32, u32, u32, u32)> call_005cc2f4;  // (from the original)

u32 f_00305894() {
    return call_005cc2f4(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00305894
GUEST_EXPORT(0x00305894, d_00305894::f_00305894);

// f_00305898: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00305898 {

inline constexpr guest::Function<0x00768138, u32(u32, u32, u32, u32)> call_00768138;  // (from the original)

u32 f_00305898() {
    return call_00768138(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00305898
GUEST_EXPORT(0x00305898, d_00305898::f_00305898);

// f_00305940: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00305940 {

inline constexpr guest::Function<0x006b84c8, u32(u32, u32, u32, u32)> call_006b84c8;  // (from the original)

u32 f_00305940() {
    return call_006b84c8(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00305940
GUEST_EXPORT(0x00305940, d_00305940::f_00305940);

// f_003059ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003059ec {

inline constexpr guest::Function<0x0076ce68, u32(u32, u32, u32, u32)> call_0076ce68;  // (from the original)

u32 f_003059ec() {
    return call_0076ce68(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003059ec
GUEST_EXPORT(0x003059ec, d_003059ec::f_003059ec);

// f_003059f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003059f0 {

inline constexpr guest::Function<0x0076c8b8, u32(u32, u32, u32, u32)> call_0076c8b8;  // (from the original)

u32 f_003059f0() {
    return call_0076c8b8(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003059f0
GUEST_EXPORT(0x003059f0, d_003059f0::f_003059f0);

// f_003059f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003059f4 {

inline constexpr guest::Function<0x0076cd0c, u32(u32, u32, u32, u32)> call_0076cd0c;  // (from the original)

u32 f_003059f4() {
    return call_0076cd0c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003059f4
GUEST_EXPORT(0x003059f4, d_003059f4::f_003059f4);

// f_003059f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003059f8 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003052f0, u32(u32, u32, u32, u32)> call_003052f0;  // (from the original)

u32 f_003059f8(u32 r0) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    call_002f825c(r0, 0x2au, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_1 = r0 + 0x2au;  // (from the original)
    call_003052f0(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = r0 + 0x58u;  // (from the original)
    call_002f825c(r0_2, 0xfu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u8>(r0 + 0x67u) = u8(0u);  // (from the original)
    r0_3 = r0 + 0x6cu;  // (from the original)
    *gptr<u8>(r0 + 0x68u) = u8(0u);  // (from the original)
    r0_4 = call_002f825c(r0_3, 0x800u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    *gptr<u8>(r0 + 0x86cu) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0_4;
}

}  // namespace d_003059f8
GUEST_EXPORT(0x003059f8, d_003059f8::f_003059f8);

// f_00305a3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00305a3c {

inline constexpr guest::Function<0x0076d134, u32(u32, u32, u32, u32)> call_0076d134;  // (from the original)

u32 f_00305a3c() {
    return call_0076d134(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00305a3c
GUEST_EXPORT(0x00305a3c, d_00305a3c::f_00305a3c);

// f_00305a54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00305a54 {

inline constexpr guest::Function<0x0076d3a4, u32(u32, u32, u32, u32)> call_0076d3a4;  // (from the original)

u32 f_00305a54() {
    return call_0076d3a4(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00305a54
GUEST_EXPORT(0x00305a54, d_00305a54::f_00305a54);

// f_00305ad0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00305ad0 {

inline constexpr guest::Function<0x0076c74c, u32(u32, u32, u32, u32)> call_0076c74c;  // (from the original)

u32 f_00305ad0() {
    return call_0076c74c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00305ad0
GUEST_EXPORT(0x00305ad0, d_00305ad0::f_00305ad0);

// f_00305b7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00305b7c {

inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> call_006bbd54;  // (from the original)
inline constexpr guest::Function<0x0076d668, u32(u32, u32, u32, u32)> call_0076d668;  // (from the original)

u32 f_00305b7c(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r5 = 0u;
    r6 = r0;
    r4 = r5;
    do {
L_305b8c:;
        r0_1 = r13;
        guest::cpu()->r[13] = r13;
        call_006bbd54(r0_1, 0x24u, r4, r3);  // (from the original)
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        r1_1 = r13;
        guest::cpu()->r[13] = r13;
        r0_2 = call_0076d668(r6, r1_1, r2_1, r3_1);
        r1_2 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        if (r0_2 != 0) {
            r5 = r5 + 1u;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0x48u);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r5;
}

}  // namespace d_00305b7c
GUEST_EXPORT(0x00305b7c, d_00305b7c::f_00305b7c);

// f_00305bcc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00305bcc {

inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> call_006bbd54;  // (from the original)
inline constexpr guest::Function<0x0076d668, u32(u32, u32, u32, u32)> call_0076d668;  // (from the original)

u32 f_00305bcc(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r5 = 0u;
    r6 = r0;
    r4 = r5;
    do {
L_305bdc:;
        r0_1 = r13;
        guest::cpu()->r[13] = r13;
        call_006bbd54(r0_1, 0x27u, r4, r3);  // (from the original)
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        r1_1 = r13;
        guest::cpu()->r[13] = r13;
        r0_2 = call_0076d668(r6, r1_1, r2_1, r3_1);
        r3 = guest::cpu()->r[3];
        if (r0_2 != 0) {
            r5 = r5 + 1u;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0x48u);  // (from the original)
    r4 = 0u;
    do {
L_305c18:;
        r0_3 = r13;
        guest::cpu()->r[13] = r13;
        call_006bbd54(r0_3, 0x28u, r4, r3);  // (from the original)
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        r1_2 = r13;
        guest::cpu()->r[13] = r13;
        r0_4 = call_0076d668(r6, r1_2, r2_2, r3_2);
        r1_3 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        if (r0_4 != 0) {
            r5 = r5 + 1u;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0x1eu);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r5;
}

}  // namespace d_00305bcc
GUEST_EXPORT(0x00305bcc, d_00305bcc::f_00305bcc);

// f_00305c60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00305c60 {

inline constexpr guest::Function<0x006e08b4, u32(u32, u32, u32, u32)> call_006e08b4;  // (from the original)

u32 f_00305c60() {
    return call_006e08b4(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00305c60
GUEST_EXPORT(0x00305c60, d_00305c60::f_00305c60);

// f_00305c64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00305c64 {

inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> call_006bbd54;  // (from the original)
inline constexpr guest::Function<0x0076d668, u32(u32, u32, u32, u32)> call_0076d668;  // (from the original)

u32 f_00305c64(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r5 = 0u;
    r6 = r0;
    r4 = r5;
    do {
L_305c74:;
        r0_1 = r13;
        guest::cpu()->r[13] = r13;
        call_006bbd54(r0_1, 0x2cu, r4, r3);  // (from the original)
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        r1_1 = r13;
        guest::cpu()->r[13] = r13;
        r0_2 = call_0076d668(r6, r1_1, r2_1, r3_1);
        r1_2 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        if (r0_2 != 0) {
            r5 = r5 + 1u;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0x43u);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r5;
}

}  // namespace d_00305c64
GUEST_EXPORT(0x00305c64, d_00305c64::f_00305c64);

// f_00305da0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00305da0 {

inline constexpr guest::Function<0x007111b4, u32(u32, u32, u32, u32)> call_007111b4;  // (from the original)

u32 f_00305da0() {
    return call_007111b4(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00305da0
GUEST_EXPORT(0x00305da0, d_00305da0::f_00305da0);

// f_00305e88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00305e88 {

inline guest::global<u32, 0x00950170> global_00950170;  // (from the original)

u32 f_00305e88(u32 r0) {
    if (*global_00950170 == r0) {
        r0 = 0u;
        *global_00950170 = u32(r0);
    }
    guest::cpu()->r[1] = 0x950170u;  // (from the original)
    return r0;
}

}  // namespace d_00305e88
GUEST_EXPORT(0x00305e88, d_00305e88::f_00305e88);

// f_00305ff4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00305ff4 {

inline constexpr guest::Function<0x005c2ce0, u32(u32, u32, u32, u32)> call_005c2ce0;  // (from the original)

u32 f_00305ff4() {
    return call_005c2ce0(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00305ff4
GUEST_EXPORT(0x00305ff4, d_00305ff4::f_00305ff4);

// f_00305ff8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00305ff8 {

inline constexpr guest::Function<0x00579024, u32(u32, u32, u32, u32)> call_00579024;  // (from the original)

u32 f_00305ff8() {
    return call_00579024(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00305ff8
GUEST_EXPORT(0x00305ff8, d_00305ff8::f_00305ff8);

// f_00306088: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00306088 {

inline constexpr guest::Function<0x00720348, u32(u32, u32, u32, u32)> call_00720348;  // (from the original)

u32 f_00306088() {
    return call_00720348(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00306088
GUEST_EXPORT(0x00306088, d_00306088::f_00306088);

// f_00306130: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00306130 {

inline constexpr guest::Function<0x0072543c, u32(u32, u32, u32, u32)> call_0072543c;  // (from the original)

u32 f_00306130() {
    return call_0072543c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00306130
GUEST_EXPORT(0x00306130, d_00306130::f_00306130);

// f_00306138: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00306138 {

inline constexpr guest::Function<0x007ce068, u32(u32, u32, u32, u32)> call_007ce068;  // (from the original)

u32 f_00306138() {
    return call_007ce068(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00306138
GUEST_EXPORT(0x00306138, d_00306138::f_00306138);

// f_003061b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003061b4 {

inline constexpr guest::Function<0x0074830c, u32(u32, u32, u32, u32)> call_0074830c;  // (from the original)

u32 f_003061b4() {
    return call_0074830c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003061b4
GUEST_EXPORT(0x003061b4, d_003061b4::f_003061b4);

// f_003061b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003061b8 {

inline constexpr guest::Function<0x007482b8, u32(u32, u32, u32, u32)> call_007482b8;  // (from the original)

u32 f_003061b8() {
    return call_007482b8(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003061b8
GUEST_EXPORT(0x003061b8, d_003061b8::f_003061b8);

// f_003061bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003061bc {

inline constexpr guest::Function<0x0075dbbc, u32(u32, u32, u32, u32)> call_0075dbbc;  // (from the original)

u32 f_003061bc() {
    return call_0075dbbc(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003061bc
GUEST_EXPORT(0x003061bc, d_003061bc::f_003061bc);

// f_00306350: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00306350 {

inline constexpr guest::Function<0x00718ef0, u32(u32, u32, u32, u32)> call_00718ef0;  // (from the original)

u32 f_00306350() {
    return call_00718ef0(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00306350
GUEST_EXPORT(0x00306350, d_00306350::f_00306350);

// f_00306408: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00306408 {

inline constexpr guest::Function<0x005f1214, u32(u32, u32, u32, u32)> call_005f1214;  // (from the original)

u32 f_00306408() {
    return call_005f1214(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00306408
GUEST_EXPORT(0x00306408, d_00306408::f_00306408);

// f_00306928: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00306928 {

inline constexpr guest::Function<0x007523a8, u32(u32, u32, u32, u32)> call_007523a8;  // (from the original)

u32 f_00306928() {
    return call_007523a8(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00306928
GUEST_EXPORT(0x00306928, d_00306928::f_00306928);

// f_0030692c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030692c {

inline constexpr guest::Function<0x00578bc8, u32(u32, u32, u32, u32)> call_00578bc8;  // (from the original)

u32 f_0030692c() {
    return call_00578bc8(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030692c
GUEST_EXPORT(0x0030692c, d_0030692c::f_0030692c);

// f_00306944: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00306944 {

inline constexpr guest::Function<0x006c4200, u32(u32, u32, u32, u32)> call_006c4200;  // (from the original)

u32 f_00306944() {
    return call_006c4200(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00306944
GUEST_EXPORT(0x00306944, d_00306944::f_00306944);

// f_00306948: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00306948 {

inline constexpr guest::Function<0x005b492c, u32(u32, u32, u32, u32)> call_005b492c;  // (from the original)

u32 f_00306948() {
    return call_005b492c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00306948
GUEST_EXPORT(0x00306948, d_00306948::f_00306948);

// f_0030694c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030694c {

inline constexpr guest::Function<0x0052be5c, u32(u32, u32, u32, u32)> call_0052be5c;  // (from the original)

u32 f_0030694c() {
    return call_0052be5c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030694c
GUEST_EXPORT(0x0030694c, d_0030694c::f_0030694c);

// f_0030696c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030696c {

inline constexpr guest::Function<0x0060b0b8, u32(u32, u32, u32, u32)> call_0060b0b8;  // (from the original)

u32 f_0030696c() {
    return call_0060b0b8(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030696c
GUEST_EXPORT(0x0030696c, d_0030696c::f_0030696c);

// f_00306c70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00306c70 {

inline constexpr guest::Function<0x005bb744, u32(u32, u32, u32, u32)> call_005bb744;  // (from the original)

u32 f_00306c70() {
    return call_005bb744(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00306c70
GUEST_EXPORT(0x00306c70, d_00306c70::f_00306c70);

// f_00306c78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00306c78 {

inline constexpr guest::Function<0x0051ca20, u32(u32, u32, u32, u32)> call_0051ca20;  // (from the original)

u32 f_00306c78() {
    return call_0051ca20(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00306c78
GUEST_EXPORT(0x00306c78, d_00306c78::f_00306c78);

// f_00306cf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00306cf0 {

struct __attribute__((packed)) Object_00306cf0_0 {
    u8 unknown_0[0x95e];  // (not used here)
    u8 byte_95e;
    u8 unknown_95f[0x141];  // (not used here)
    u32 word_aa0;
};
GUEST_OFFSET(Object_00306cf0_0, byte_95e, 0x95e);  // (from the original)
GUEST_OFFSET(Object_00306cf0_0, word_aa0, 0xaa0);  // (from the original)

inline guest::global<u32, 0x00953864> global_00953864;  // (from the original)

void f_00306cf0(gptr<Object_00306cf0_0> arg0, u32 r1) {
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    arg0->byte_95e = u8(r1);
    r2_1 = *global_00953864;
    if (r1 >= 0x3fu) {  // (from the original)
        arg0->word_aa0 = u32(0u);
        guest::cpu()->r[1] = 0u;
        return;
    }
    if (r2_1 == 0) {
        arg0->word_aa0 = u32(0u);
        guest::cpu()->r[1] = 0u;
        return;
    }
    r1_1 = r2_1 + 0x10u + (r1 << 4);  // (from the original)
    arg0->word_aa0 = u32(r1_1);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_00306cf0
GUEST_EXPORT(0x00306cf0, d_00306cf0::f_00306cf0);

// f_00306e2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00306e2c {

inline constexpr guest::Function<0x00307040, u32(u32, u32, u32, u32)> call_00307040;  // (from the original)

u32 f_00306e2c(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r1_1 = r1 * r2;
    r2_1 = r0 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00307040(r0, r1_1, r2_1, guest::cpu()->r[3]);
    *gptr<u32>(r0_1) = u32(0x8ef344u);  // (from the original)
    ea_1 = r0_1 + 0x14u;  // (from the original)
    *gptr<u32>(ea_1) = u32(r1);
    *gptr<u32>(ea_1 + 4) = u32(r2);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = 0x8ef344u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_00306e2c
GUEST_EXPORT(0x00306e2c, d_00306e2c::f_00306e2c);

// f_00306f5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00306f5c {

inline constexpr guest::Function<0x0062f950, u32(u32, u32, u32, u32)> call_0062f950;  // (from the original)

u32 f_00306f5c() {
    return call_0062f950(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00306f5c
GUEST_EXPORT(0x00306f5c, d_00306f5c::f_00306f5c);

// f_00307100: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00307100 {

inline constexpr guest::Function<0x0051d07c, u32(u32, u32, u32, u32)> call_0051d07c;  // (from the original)

u32 f_00307100() {
    return call_0051d07c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00307100
GUEST_EXPORT(0x00307100, d_00307100::f_00307100);

// f_00307220: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00307220 {

inline guest::global<u32, 0x0030736c> global_0030736c;  // (from the original)
inline guest::global<u32, 0x0085f2cc> global_0085f2cc;  // (from the original)
inline guest::global<u32, 0x0085f2d8> global_0085f2d8;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x00527528, u32(u32, u32, u32, u32)> call_00527528;  // (from the original)
inline constexpr guest::Function<0x006a5f0c, u32(u32, u32, u32, u32)> call_006a5f0c;  // (from the original)
inline constexpr guest::Function<0x006c5fa0, u32(u32, u32, u32, u32)> call_006c5fa0;  // (from the original)
inline constexpr guest::Function<0x006c7540, u32(u32, u32, u32, u32)> call_006c7540;  // (from the original)

u32 f_00307220(u32 r0, u32 r1, float S0, float S1, float S2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r2_2 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    u32 r2_3 = 0;
    float S0_3 = 0;
    float S2_3 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 res_1 = 0;
    u32 r1_4 = 0;
    float S1_3 = 0;
    float S0_4 = 0;
    u32 r2_4 = 0;
    float S0_5 = 0;
    float S1_4 = 0;
    float S2_4 = 0;
    u32 r0_4 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r0;
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4u) = u32(0u);
    r1_1 = r13 + 4u;
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0_2 = call_00527528(r0_1, r1_1, r1, guest::cpu()->r[3]);
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    S2_1 = guest::cpu()->s[2];
    if (r0_2 == 0) {
        goto L_3072c4;
    }
    r1_2 = *gptr<u32>(r13);
    r2_1 = *gptr<u32>(r13 + 4);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    call_006a5f0c(r4, r1_2, r2_1, guest::cpu()->r[3]);
    r2_2 = guest::cpu()->r[2];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    call_006c7540(r4, 0u, r2_2, guest::cpu()->r[3]);
    r2_3 = guest::cpu()->r[2];
    S0_3 = guest::cpu()->s[0];
    S2_3 = guest::cpu()->s[2];
    *gptr<u32>(r4 + 4u) = u32(std::bit_cast<u32>(S0_3));
    if (r1 == 0x7fu) {  // (from the original)
        r0_3 = 1u;
        goto L_30728c;
    }
    r0_3 = 0u;
    if (r1 == 0x80u) {  // (from the original)
        r1_3 = 1u;
        goto L_307290;
    }
L_30728c:;
    r1_3 = 0u;
L_307290:;
    res_1 = r1_3 | r0_3;
    r1_4 = res_1;
    if (res_1 == 0) {
        goto L_3072f8;
    }
    r1_4 = 0x85f2d4u;  // (from the original)
    *gptr<u32>(r4) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r4)) + std::bit_cast<float>(*gptr<u32>(r1_4))));
    S1_3 = std::bit_cast<float>(*global_0085f2d8);
    S0_4 = std::bit_cast<float>(*gptr<u32>(r4 + 8u)) + S1_3;
    *gptr<u32>(r4 + 8u) = u32(std::bit_cast<u32>(S0_4));
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_3;
    return 1u;
L_3072c4:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    call_006a5f0c(r4, 0x3au, 0x10u, guest::cpu()->r[3]);  // (from the original)
    r2_4 = guest::cpu()->r[2];
    S0_5 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    S2_4 = guest::cpu()->s[2];
    if (r1 == 0x69u) {  // (from the original)
        goto L_30734c;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_4;
    guest::cpu()->s[2] = S2_4;
    call_006c7540(r4, 0u, r2_4, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    *gptr<u32>(r4 + 4u) = u32(std::bit_cast<u32>(S0));
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 0u;
L_3072f8:;
    S1_3 = std::bit_cast<float>(*global_0085f2d8);
    S0_4 = std::bit_cast<float>(*gptr<u32>(r4 + 8u)) + S1_3;
    *gptr<u32>(r4 + 8u) = u32(std::bit_cast<u32>(S0_4));
    if (r1 != 0x85u) {  // (from the original)
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_4;
        guest::cpu()->s[1] = S1_3;
        return 1u;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_3;
    guest::cpu()->s[2] = S2_3;
    r0_4 = call_002fb328(0x85f2d8u, r1_4, r2_3, guest::cpu()->r[3]);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    S0_4 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    if (u32(*gptr<u8>(r0_4 + 0x62264u)) != 0) {  // (from the original)
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_4;
        guest::cpu()->s[1] = S1_3;
        return 1u;
    }
    S1_3 = std::bit_cast<float>(*global_0085f2cc);
    S0_4 = std::bit_cast<float>(*gptr<u32>(r4)) - S1_3 * std::bit_cast<float>(*global_0030736c);
    *gptr<u32>(r4) = u32(std::bit_cast<u32>(S0_4));
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_3;
    return 1u;
L_30734c:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_4;
    guest::cpu()->s[2] = S2_4;
    call_006c5fa0(r4, 0u, r2_4, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    *gptr<u32>(r4 + 4u) = u32(std::bit_cast<u32>(S0));
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 0u;
}

}  // namespace d_00307220
GUEST_EXPORT(0x00307220, d_00307220::f_00307220);

// f_00307370: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00307370 {

inline constexpr guest::Function<0x007576e4, u32(u32, u32, u32, u32)> call_007576e4;  // (from the original)

u32 f_00307370() {
    return call_007576e4(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00307370
GUEST_EXPORT(0x00307370, d_00307370::f_00307370);

// f_00307560: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00307560 {

inline constexpr guest::Function<0x00756a7c, u32(u32, u32, u32, u32)> call_00756a7c;  // (from the original)

u32 f_00307560() {
    return call_00756a7c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00307560
GUEST_EXPORT(0x00307560, d_00307560::f_00307560);

// f_003075c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003075c8 {

inline constexpr guest::Function<0x006f1f14, u32(u32, u32, u32, u32)> call_006f1f14;  // (from the original)

u32 f_003075c8() {
    return call_006f1f14(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003075c8
GUEST_EXPORT(0x003075c8, d_003075c8::f_003075c8);

// f_003075cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003075cc {

inline constexpr guest::Function<0x00131294, u32(u32, u32, u32, u32)> call_00131294;  // (from the original)

u32 f_003075cc(u32 r0) {
    return call_00131294(0u, r0, 4u, 1u);
}

}  // namespace d_003075cc
GUEST_EXPORT(0x003075cc, d_003075cc::f_003075cc);

// f_00307688: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00307688 {

struct __attribute__((packed)) Object_00307688_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00307688_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_00307688_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_00307688_1, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0031c31d, u32(u32, u32, u32, u32)> call_0031c31c;  // (from the original)
inline constexpr guest::Function<0x0031c39d, u32(u32, u32, u32, u32)> call_0031c39c;  // (from the original)
inline constexpr guest::Function<0x0031c75d, u32(u32, u32, u32, u32)> call_0031c75c;  // (from the original)

u32 f_00307688(gptr<Object_00307688_0> arg0, gptr<Object_00307688_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r6_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = arg1->word_0;
    r1_1 = r0_1 - 0xcu;  // (from the original)
    res_1 = *gptr<u32>(r1_1) + 1u;
    if (res_1 != 0) {
        arg0->word_0 = u32(r0_1);
        r0_2 = r0_1 - 0xcu;  // (from the original)
        call_0031c75c(r0_2, r1_1, res_1, guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
    } else {
        r6_1 = *gptr<u32>(r1_1 + 8u);
        r0_3 = call_0031c31c(r0, r6_1, r6_1, guest::cpu()->r[3]);
        r0_4 = r0_3 + 0xcu;  // (from the original)
        *gptr<u32>(r0) = u32(r0_4);
        r1_3 = *gptr<u32>(r1);
        call_0031c39c(r0_4, r1_3, r6_1, guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0;
}

}  // namespace d_00307688
GUEST_EXPORT(0x00307689, d_00307688::f_00307688);

// f_003076c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003076c4 {

inline constexpr guest::Function<0x0058def8, u32(u32, u32, u32, u32)> call_0058def8;  // (from the original)

u32 f_003076c4() {
    return call_0058def8(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003076c4
GUEST_EXPORT(0x003076c4, d_003076c4::f_003076c4);

// f_003076c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003076c8 {

inline constexpr guest::Function<0x0031c3a9, u32(u32, u32, u32, u32)> call_0031c3a8;  // (from the original)

u32 f_003076c8(u32 r0) {
    guest::cpu()->r[13] -= 8u;
    call_0031c3a8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_003076c8
GUEST_EXPORT(0x003076c9, d_003076c8::f_003076c8);

// f_0030774c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030774c {

struct __attribute__((packed)) Object_0030774c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0030774c_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00307889, u32(u32, u32, u32, u32)> call_00307888;  // (from the original)

u32 f_0030774c(gptr<Object_0030774c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = arg0->word_0;
    call_00307888(r0_1, 0x3076c9u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0;
}

}  // namespace d_0030774c
GUEST_EXPORT(0x0030774d, d_0030774c::f_0030774c);

// f_003077b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003077b8 {

inline constexpr guest::Function<0x00756380, u32(u32, u32, u32, u32)> call_00756380;  // (from the original)

u32 f_003077b8() {
    return call_00756380(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003077b8
GUEST_EXPORT(0x003077b8, d_003077b8::f_003077b8);

// f_00307838: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00307838 {

inline constexpr guest::Function<0x0011c121, u32(u32, u32, u32, u32)> call_0011c120;  // (from the original)

u32 f_00307838(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    *gptr<u32>(r13) = u32(r3);
    guest::cpu()->r[13] = r13;
    r0_1 = call_0011c120(r1, r0, 8u, r2);
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_00307838
GUEST_EXPORT(0x00307839, d_00307838::f_00307838);

// f_0030784c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030784c {

struct __attribute__((packed)) Object_0030784c_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0030784c_1, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0031c3a9, u32(u32, u32, u32, u32)> call_0031c3a8;  // (from the original)
inline constexpr guest::Function<0x0031c75d, u32(u32, u32, u32, u32)> call_0031c75c;  // (from the original)
inline constexpr guest::Function<0x0031c771, u32(u32, u32, u32, u32)> call_0031c770;  // (from the original)

u32 f_0030784c(u32 r0, gptr<Object_0030784c_1> arg1, u32 r2, u32 r3) {
    u32 r1 = arg1.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r2_2 = 0;
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    r0_1 = arg1->word_0;
    r0_2 = r0_1 - 0xcu;  // (from the original)
    res_1 = *gptr<u32>(r0_2) + 1u;
    r1_1 = res_1;
    if (res_1 != 0) {
        guest::cpu()->r[13] = r13;
        call_0031c75c(r0_2, r1_1, r2, r0_1);
        r1_2 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        call_0031c3a8(r0, r1_2, r2_1, r3_1);
        r1_1 = guest::cpu()->r[1];
        *gptr<u32>(r0) = u32(*gptr<u32>(r1));
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    if (r0 == r1) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r2_2 = *gptr<u32>(*gptr<u32>(r0) + 0xfffffffcu);  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(r0_2 + 8u));
    guest::cpu()->r[13] = r13;
    call_0031c770(r0, 0u, r2_2, r0_1);
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0030784c
GUEST_EXPORT(0x0030784d, d_0030784c::f_0030784c);

// f_00307888: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00307888 {

inline constexpr guest::Function<0x0011c0fb, u32(u32, u32, u32, u32)> call_0011c0fa;  // (from the original)
inline constexpr guest::Function<0x002f88b8, u32(u32, u32, u32, u32)> call_002f88b8;  // (from the original)

u32 f_00307888() {
    guest::cpu()->r[13] -= 8u;
    call_0011c0fa(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002f88b8(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return guest::cpu()->r[0];
}

}  // namespace d_00307888
GUEST_EXPORT(0x00307889, d_00307888::f_00307888);

// f_00307974: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00307974 {

inline constexpr guest::Function<0x0069a764, u32(u32, u32, u32, u32)> call_0069a764;  // (from the original)

u32 f_00307974() {
    return call_0069a764(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00307974
GUEST_EXPORT(0x00307974, d_00307974::f_00307974);

// f_00307978: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00307978 {

inline constexpr guest::Function<0x002fad17, u32(u32, u32, u32, u32)> call_002fad16;  // (from the original)

u32 f_00307978(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002fad16(0xaf75ecu, r0, r1, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00307978
GUEST_EXPORT(0x00307979, d_00307978::f_00307978);

// f_00307a00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00307a00 {

inline constexpr guest::Function<0x002f7cdd, u32(u32, u32, u32, u32)> call_002f7cdc;  // (from the original)

u32 f_00307a00(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r4_1 = 0;
    u32 r3_1 = 0;
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r3);  // (from the original)
    ea_2 = ea_1 - 8;
    *gptr<u32>(ea_2) = u32(r4);
    *gptr<u32>(ea_2 + 4) = u32(r14);
    r13 = ea_2;
    r2_1 = r13 + 0x10u;  // (from the original)
    r0_1 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f7cdc(r0_1, r0, r2_1, r3);
    r1_1 = guest::cpu()->r[1];
    r4_1 = *gptr<u32>(r13);
    r13 = r13 + 4;
    r3_1 = *gptr<u32>(r13);
    r13 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_00307a00
GUEST_EXPORT(0x00307a01, d_00307a00::f_00307a00);

// f_00307ac0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00307ac0 {

inline constexpr guest::Function<0x0076620c, u32(u32, u32, u32, u32)> call_0076620c;  // (from the original)

u32 f_00307ac0() {
    return call_0076620c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00307ac0
GUEST_EXPORT(0x00307ac0, d_00307ac0::f_00307ac0);

// f_00307c40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00307c40 {

inline constexpr guest::Function<0x0070b460, u32(u32, u32, u32, u32)> call_0070b460;  // (from the original)

u32 f_00307c40() {
    return call_0070b460(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00307c40
GUEST_EXPORT(0x00307c40, d_00307c40::f_00307c40);

// f_00307c44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00307c44 {

inline constexpr guest::Function<0x006a51ec, u32(u32, u32, u32, u32)> call_006a51ec;  // (from the original)

u32 f_00307c44() {
    return call_006a51ec(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00307c44
GUEST_EXPORT(0x00307c44, d_00307c44::f_00307c44);

// f_00307c48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00307c48 {

inline constexpr guest::Function<0x0051dacc, u32(u32, u32, u32, u32)> call_0051dacc;  // (from the original)

u32 f_00307c48() {
    return call_0051dacc(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00307c48
GUEST_EXPORT(0x00307c48, d_00307c48::f_00307c48);

// f_00307c4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00307c4c {

inline constexpr guest::Function<0x0051d710, u32(u32, u32, u32, u32)> call_0051d710;  // (from the original)

u32 f_00307c4c() {
    return call_0051d710(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00307c4c
GUEST_EXPORT(0x00307c4c, d_00307c4c::f_00307c4c);

// f_00307c54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00307c54 {

inline constexpr guest::Function<0x0057b988, u32(u32, u32, u32, u32)> call_0057b988;  // (from the original)
inline constexpr guest::Function<0x005bf748, u32(u32, u32, u32, u32)> call_005bf748;  // (from the original)

u32 f_00307c54(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    if (r1 == 2u) {
        r1_1 = r0 + 0x48u;  // (from the original)
        call_005bf748(0x9ab57cu, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0057b988(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00307c54
GUEST_EXPORT(0x00307c54, d_00307c54::f_00307c54);

// f_00307fdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00307fdc {

struct __attribute__((packed)) Object_00307fdc_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_00307fdc_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00307fdc_0, word_10, 0x10);  // (from the original)


u32 f_00307fdc(gptr<Object_00307fdc_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2_1 = 0;
    r2_1 = arg0->word_c;
    if (r2_1 != 0) {
        r0 = arg0->word_10;
        if (r0 == *gptr<u32>(r2_1 + 0xcu)) {  // (from the original)
            goto L_307ffc;
        }
    }
    r2_1 = 0u;
L_307ffc:;
    if (r2_1 != 0) {
        *gptr<u32>(r2_1 + 0xf8u) = u32(r1);  // (from the original)
    }
    return r0;
}

}  // namespace d_00307fdc
GUEST_EXPORT(0x00307fdc, d_00307fdc::f_00307fdc);

// f_00308008: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00308008 {

inline constexpr guest::Function<0x0051ddb8, u32(u32, u32, u32, u32)> call_0051ddb8;  // (from the original)

u32 f_00308008() {
    return call_0051ddb8(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00308008
GUEST_EXPORT(0x00308008, d_00308008::f_00308008);

// f_0030800c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030800c {


u32 f_0030800c(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    if (r1 >= 0x28u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r0_1 = u32(*gptr<u8>(r0 + (r1 >> 3)));
    r1_1 = r1 & 7u;
    r0_2 = lsr_r(r0_1, r1_1 & 0xff) & 1u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_0030800c
GUEST_EXPORT(0x0030800c, d_0030800c::f_0030800c);

// f_0030802c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030802c {

struct __attribute__((packed)) Object_0030802c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 byte_5;
};
GUEST_OFFSET(Object_0030802c_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0030802c_0, byte_5, 0x5);  // (from the original)

inline guest::global<u32, 0x00953874> global_00953874;  // (from the original)
inline constexpr guest::Function<0x0020649c, u32(u32, u32, u32, u32)> call_0020649c;  // (from the original)
inline constexpr guest::Function<0x0029cf30, u32(u32, u32, u32, u32)> call_0029cf30;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x0061a7a0, u32(u32, u32, u32, u32)> call_0061a7a0;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)

u32 f_0030802c(gptr<Object_0030802c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r5_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_2 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r1_5 = 0;
    u32 r1_6 = 0;
    r0_1 = u32(arg0->byte_5);
    r13 = r13 - 0x20u;  // (from the original)
    if (2u == r0_1 >> 6) {
        goto L_308174;
    }
    r5_1 = u32(arg0->byte_4);
    guest::cpu()->r[13] = r13;
    r0_2 = call_00300904(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        guest::cpu()->r[13] = r13;
        r0_3 = call_0061a7a0(r0_2, r1_1, r2_1, r3_1);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        if (r0_3 == 0) {
            goto L_3080ac;
        }
        guest::cpu()->r[13] = r13;
        r0_4 = call_002f74c8(r0_3, r1_2, r2_2, r3_1);
        r3_1 = guest::cpu()->r[3];
        if (r0_4 != r5_1) {
            goto L_3080ac;
        }
    }
    *gptr<u8>(r0 + 5u) = u8(u32(*gptr<u8>(r0 + 5u)) & ~7u | 4u);
    *gptr<u8>(r0 + 6u) = u8(u32(*gptr<u8>(r0 + 6u)) + 1u);
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0029cf30(r0, r1, 1u, r3_1);
L_3080ac:;
    *gptr<u8>(r0 + 5u) = u8(u32(*gptr<u8>(r0 + 5u)) & ~0xc0u | 0x40u);  // (from the original)
    *gptr<u8>(r0 + 6u) = u8(u32(*gptr<u8>(r0 + 6u)) + 1u);
    guest::cpu()->r[13] = r13;
    call_0029cf30(r0, r1, 1u, r3_1);
    *gptr<u8>(r13 + 2u) = u8(0u);
    *gptr<u8>(r13 + 3u) = u8(0u);
    *gptr<u8>(r13 + 4u) = u8(0u);
    r1_3 = 0u | (r1 & 0xf8u) >> 3;  // (from the original)
    *gptr<u8>(r13 + 5u) = u8(0u);
    *gptr<u8>(r13) = u8(2u | r1 << 5);
    *gptr<u8>(r13 + 6u) = u8(0u);
    *gptr<u8>(r13 + 1u) = u8(r1_3);
    r2_3 = r13;
    *gptr<u8>(r13 + 1u) = u8(r1_3 | u32(*gptr<u8>(r0 + 5u)) << 5);
    guest::cpu()->r[13] = r13;
    r0_5 = call_006249b0(0x40u, 4u, r2_3, 7u);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_1 = call_00305f44(r0_5, r1_4, r2_4, r3_2);
    r1 = guest::cpu()->r[1];
    r3_3 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        goto L_308174;
    }
    r0_1 = *global_00953874;
    if (r0_1 == 0) {
        goto L_308174;
    }
    r0_6 = r0_1 + 0x10u;  // (from the original)
    r1_5 = (u32(*gptr<u8>(r13)) >> 5) + (u32(*gptr<u8>(r13 + 1u)) << 3) & 0xffu;  // (from the original)
    if (r1_5 < 0x40u) {  // (from the original)
        r0_6 = r0_6 + r1_5;
    }
    r1_6 = r13;
    guest::cpu()->r[13] = r13;
    r0_1 = call_0020649c(r0_6, r1_6, 0u, r3_3);
    r1 = guest::cpu()->r[1];
L_308174:;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_0030802c
GUEST_EXPORT(0x0030802c, d_0030802c::f_0030802c);

// f_00308198: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00308198 {

struct __attribute__((packed)) Object_00308198_0 {
    u8 unknown_0[0x5];  // (not used here)
    u8 byte_5;
};
GUEST_OFFSET(Object_00308198_0, byte_5, 0x5);  // (from the original)


void f_00308198(gptr<Object_00308198_0> arg0, u32 r1) {
    u32 r1_1 = 0;
    r1_1 = u32(arg0->byte_5) & ~0x38u | (r1 & 7u) << 3;  // (from the original)
    arg0->byte_5 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_00308198
GUEST_EXPORT(0x00308198, d_00308198::f_00308198);

// f_00308380: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00308380 {

inline constexpr guest::Function<0x0030f52c, u32(u32, u32, u32, u32)> call_0030f52c;  // (from the original)

u32 f_00308380(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    call_0030f52c(r0, r3, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_1 = r0 + 0x16u;  // (from the original)
    call_0030f52c(r0_1, r3, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    *gptr<u16>(r0 + 0x2cu) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    r0_2 = u32(*gptr<u8>(r2));
    *gptr<u8>(r0 + 0x2eu) = u8(r0_2);  // (from the original)
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_00308380
GUEST_EXPORT(0x00308380, d_00308380::f_00308380);

// f_003084f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003084f8 {

inline guest::global<u32, 0x0088ec5c> global_0088ec5c;  // (from the original)
inline constexpr guest::Function<0x001df69c, u32(u32, u32, u32, u32)> call_001df69c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00300800, u32(u32, u32, u32, u32)> call_00300800;  // (from the original)
inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> call_00303cdc;  // (from the original)
inline constexpr guest::Function<0x003052f0, u32(u32, u32, u32, u32)> call_003052f0;  // (from the original)
inline constexpr guest::Function<0x0030589c, u32(u32, u32, u32, u32)> call_0030589c;  // (from the original)
inline constexpr guest::Function<0x003084c8, u32(u32, u32, u32, u32)> call_003084c8;  // (from the original)
inline constexpr guest::Function<0x005b7680, u32(u32, u32, u32, u32)> call_005b7680;  // (from the original)
inline constexpr guest::Function<0x005ea640, u32(u32, u32, u32, u32)> call_005ea640;  // (from the original)

u32 f_003084f8(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r2_4 = 0;
    u32 r1_4 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r0_9 = 0;
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    u32 r0_10 = 0;
    u32 r1_7 = 0;
    u32 r2_7 = 0;
    u32 r0_11 = 0;
    u32 r1_8 = 0;
    u32 r2_8 = 0;
    u32 r0_12 = 0;
    u32 r1_9 = 0;
    u32 r2_9 = 0;
    u32 r0_13 = 0;
    u32 r1_10 = 0;
    u32 r2_10 = 0;
    u32 r0_14 = 0;
    u32 r4_1 = 0;
    u32 r1_11 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    call_003052f0(r0, r1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    r1_1 = r4 + 0x2eu;  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_005b7680(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r0_2 = r13;
    guest::cpu()->r[13] = r13;
    call_005ea640(r0_2, r1_2, r2_2, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    call_003084c8(r0_3, r1_3, r2_3, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r6 = r4 + 0x62u;  // (from the original)
    r5 = 0u;
    do {
L_30851e:;
        r0_4 = (r5 << 2) + r6;
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r0_4, 0x95bfdcu, r2, guest::cpu()->r[3]);  // (from the original)
        r2 = guest::cpu()->r[2];
        r5 = r5 + 1u;
        guest::preempt();
    } while (r5 < 8u);
    r6 = r4 + 0x82u;  // (from the original)
    r5 = 0u;
    do {
L_308534:;
        r0_5 = (r5 << 2) + r6;
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r0_5, 0x95bfdcu, r2, guest::cpu()->r[3]);  // (from the original)
        r2 = guest::cpu()->r[2];
        r5 = r5 + 1u;
        guest::preempt();
    } while (r5 < 8u);
    r0_6 = r4 + 0xa2u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_6, 0x95bfdcu, r2, guest::cpu()->r[3]);  // (from the original)
    r0_7 = r4 + 0xa6u;  // (from the original)
    *gptr<u32>(r0_7) = u32(*global_0088ec5c);
    *gptr<u32>(r0_7 + 4u) = u32(*global_0088ec5c);
    r2_4 = *global_0088ec5c;
    *gptr<u32>(r0_7 + 8u) = u32(r2_4);
    r1_4 = *global_0088ec5c;
    *gptr<u32>(r0_7 + 0xcu) = u32(r1_4);  // (from the original)
    r0_8 = r0_7 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001df69c(r0_8, r1_4, r2_4, guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r0_9 = r4 + 0xc0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030589c(r0_9, r1_5, r2_5, guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r0_10 = r4 + 0xd6u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00303cdc(r0_10, r1_6, r2_6, guest::cpu()->r[3]);
    r1_7 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r0_11 = r4 + 0xdeu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00300800(r0_11, r1_7, r2_7, guest::cpu()->r[3]);
    r1_8 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r0_12 = r4 + 0xe2u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00300800(r0_12, r1_8, r2_8, guest::cpu()->r[3]);
    r1_9 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r0_13 = r4 + 0xe6u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00300800(r0_13, r1_9, r2_9, guest::cpu()->r[3]);
    r1_10 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r0_14 = r4 + 0xeau;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00300800(r0_14, r1_10, r2_10, guest::cpu()->r[3]);
    r4_1 = r4 + 0xe0u;  // (from the original)
    r1_11 = ~0u;
    *gptr<u16>(r4_1 + 0xeu) = u16(r1_11);  // (from the original)
    *gptr<u8>(r4_1 + 0x10u) = u8(0x31u);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_11;
    guest::cpu()->r[13] = r13;
    return 0x31u;  // (from the original)
}

}  // namespace d_003084f8
GUEST_EXPORT(0x003084f9, d_003084f8::f_003084f8);

// f_003085b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003085b4 {

inline constexpr guest::Function<0x00716760, u32(u32, u32, u32, u32)> call_00716760;  // (from the original)

u32 f_003085b4() {
    return call_00716760(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003085b4
GUEST_EXPORT(0x003085b4, d_003085b4::f_003085b4);

// f_003085b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003085b8 {

inline constexpr guest::Function<0x007254c8, u32(u32, u32, u32, u32)> call_007254c8;  // (from the original)

u32 f_003085b8() {
    return call_007254c8(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003085b8
GUEST_EXPORT(0x003085b8, d_003085b8::f_003085b8);

// f_00308728: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00308728 {

inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> call_002fbd54;  // (from the original)
inline constexpr guest::Function<0x003009cc, u32(u32, u32, u32, u32)> call_003009cc;  // (from the original)
inline constexpr guest::Function<0x0030846c, u32(u32, u32, u32, u32)> call_0030846c;  // (from the original)
inline constexpr guest::Function<0x003084c8, u32(u32, u32, u32, u32)> call_003084c8;  // (from the original)
inline constexpr guest::Function<0x003084f9, u32(u32, u32, u32, u32)> call_003084f8;  // (from the original)
inline constexpr guest::Function<0x0030878d, u32(u32, u32, u32, u32)> call_0030878c;  // (from the original)
inline constexpr guest::Function<0x003088bc, u32(u32, u32, u32, u32)> call_003088bc;  // (from the original)
inline constexpr guest::Function<0x0030893c, u32(u32, u32, u32, u32)> call_0030893c;  // (from the original)
inline constexpr guest::Function<0x00308944, u32(u32, u32, u32, u32)> call_00308944;  // (from the original)

u32 f_00308728(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r7_1 = 0;
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r0_7 = 0;
    u32 r2_5 = 0;
    u32 r3_6 = 0;
    u32 r1_3 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r2_6 = 0;
    u32 r3_7 = 0;
    u32 r0_9 = 0;
    u32 r1_5 = 0;
    u32 r2_7 = 0;
    u32 r3_8 = 0;
    u32 r0_10 = 0;
    u32 r4_2 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_2 = 0;
    u32 tpc_1 = 0;
    ea_1 = r13 - 0x24;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r3);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r4);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x20) = u32(r14);  // (from the original)
    r13 = ea_1 - 0x44u;  // (from the original)
    r7_1 = *gptr<u32>(r13 + 0x68u);  // (from the original)
    r4_1 = r1 + 0x55a6u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fbd54(r4_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        r0_2 = *gptr<u32>(r13 + 0x44u);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_003084f8(r0_2, r1_1, r2_1, r3_1);
        r3_2 = *gptr<u32>(r13 + 0x4cu);  // (from the original)
        r0_3 = *gptr<u32>(r13 + 0x44u);  // (from the original)
        *gptr<u32>(r13 + 4u) = u32(r7_1);
        *gptr<u32>(r13) = u32(r3);
        guest::cpu()->r[13] = r13;
        call_0030878c(r0_3, r1, r3_2, r3_2);
        r2_2 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        r0_4 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        call_003088bc(r0_4, r4_1, r2_2, r3_3);
        r1_2 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        r0_5 = *gptr<u32>(r13 + 0x44u);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_6 = call_0030893c(r0_5, r1_2, r2_3, r3_4);
        r2_4 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
        r0_7 = r13 + 0x34u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00308944(r0_7, r0_6, r2_4, r3_5);
        r2_5 = guest::cpu()->r[2];
        r3_6 = guest::cpu()->r[3];
        r1_3 = r13 + 8u;
        r0_8 = r13 + 0x34u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0030846c(r0_8, r1_3, r2_5, r3_6);
        r1_4 = guest::cpu()->r[1];
        r2_6 = guest::cpu()->r[2];
        r3_7 = guest::cpu()->r[3];
        r0_9 = r13 + 0x34u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_003084c8(r0_9, r1_4, r2_6, r3_7);
        r1_5 = guest::cpu()->r[1];
        r2_7 = guest::cpu()->r[2];
        r3_8 = guest::cpu()->r[3];
        r0_10 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        call_003009cc(r0_10, r1_5, r2_7, r3_8);
        r1_1 = guest::cpu()->r[1];
        r0_1 = 1u;
    }
    r13 = r13 + 0x54u;  // (from the original)
    r4_2 = *gptr<u32>(r13);
    r5_1 = *gptr<u32>(r13 + 4);
    r6_1 = *gptr<u32>(r13 + 8);
    r7_2 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_00308728
GUEST_EXPORT(0x00308729, d_00308728::f_00308728);

// f_003088bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003088bc {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x0056d488, u32(u32, u32, u32, u32)> call_0056d488;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_003088bc(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r3_3 = 0;
    u32 res_1 = 0;
    u32 ea_1 = 0;
    u32 r3_4 = 0;
    u32 ea_2 = 0;
    u32 r2_3 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r5 = r1;
    r1_1 = r0 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_003083bc(r0, r1_1, 9u, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r0_1) = u32(0x90a3e8u);  // (from the original)
    r0_2 = r0_1 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_005f4bfc(r0_2, 0x90a3e8u, r2_1, r3_1);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r4 = r0_3 - 0xcu;  // (from the original)
    r0_4 = r0_3 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_4, 0x12u, r2_2, r3_2);  // (from the original)
    r1 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    *gptr<u16>(r4 + 0x18u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    r2 = 4u;
    do {
L_308900:;
        r3_3 = u32(*gptr<u16>(r1));
        res_1 = r2 - 1u;
        r2 = res_1;
        ea_1 = r0 + 2u;
        *gptr<u16>(ea_1) = u16(r3_3);
        r3_4 = u32(*gptr<u16>(r1));
        ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    r2_3 = u32(*gptr<u8>(r5 + 0x14u)) & 1u;  // (from the original)
    r1_2 = r5 + 2u;
    guest::cpu()->r[13] = r13;
    call_0056d488(r4, r1_2, r2_3, r3_4);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r4;
}

}  // namespace d_003088bc
GUEST_EXPORT(0x003088bc, d_003088bc::f_003088bc);

// f_003089cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003089cc {

inline constexpr guest::Function<0x005baa00, u32(u32, u32, u32, u32)> call_005baa00;  // (from the original)

u32 f_003089cc() {
    return call_005baa00(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003089cc
GUEST_EXPORT(0x003089cc, d_003089cc::f_003089cc);

// f_003089d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003089d4 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x00301e6c, u32(u32, u32, u32, u32)> call_00301e6c;  // (from the original)
inline constexpr guest::Function<0x0030bc44, u32(u32, u32, u32, u32)> call_0030bc44;  // (from the original)
inline constexpr guest::Function<0x0030bc91, u32(u32, u32, u32, u32)> call_0030bc90;  // (from the original)
inline constexpr guest::Function<0x0030bd9d, u32(u32, u32, u32, u32)> call_0030bd9c;  // (from the original)

u32 f_003089d4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 r5_1 = 0;
    u32 r0_5 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r1_4 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r1_5 = 0;
    u32 r4_1 = 0;
    u32 r5_2 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 tpc_1 = 0;
    u32 r0_7 = 0;
    u32 r4_2 = 0;
    u32 r5_3 = 0;
    u32 r6_2 = 0;
    u32 r7_2 = 0;
    u32 tpc_2 = 0;
    ea_1 = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r4);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r14);  // (from the original)
    r13 = ea_1;
    r7 = 0xau;  // (from the original)
    r5 = *gptr<u32>(r13);
    r6 = 1u;
    r4 = 0u;
    do {
L_3089de:;
        guest::cpu()->r[13] = r13;
        r0_1 = call_00301e20(r5, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_1 == 0) {
            goto L_308a04;
        }
        if (!(r6 == 0)) {
            if (u32(*gptr<u8>(r5 + (0x25u << 8) + 8u)) == 6u) {  // (from the original)
                goto L_308a04;
            }
        }
        r4 = r4 + 1u;
        r5 = r5 + 0x2518u;  // (from the original)
        guest::preempt();
    } while (r4 < r7);
    goto L_308a4e;
L_308a04:;
    if (r4 >= 0xau) {  // (from the original)
        goto L_308a4e;
    }
    r1_1 = *gptr<u16>(*gptr<u32>(r13 + 4u));
    guest::cpu()->r[13] = r13;
    call_00301e6c(0xa83aecu, r1_1, r2, r3);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = *gptr<u16>(*gptr<u32>(r13 + 4u));
    guest::cpu()->r[13] = r13;
    r0_3 = call_0030bc44(r0_2, r1_2, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        goto L_308a4e;
    }
    r1_3 = *gptr<u32>(r13);
    r0_4 = 0x2518u * r4;  // (from the original)
    r5_1 = r0_4 + r1_3;
    guest::cpu()->r[13] = r13;
    r0_5 = call_002fb328(r0_4, r1_3, r2_2, r3_2);
    r2_3 = *gptr<u32>(r13 + 8u);
    r3_3 = r0_5 + 0x621b8u;  // (from the original)
    r1_4 = *gptr<u16>(*gptr<u32>(r13 + 4u));
    guest::cpu()->r[13] = r13;
    call_0030bd9c(r5_1, r1_4, r2_3, r3_3);
    r3_4 = *gptr<u32>(r13 + 8u);
    r0_6 = *gptr<u32>(r13);
    guest::cpu()->r[13] = r13;
    call_0030bc90(r0_6, r5_1, r4, r3_4);
    r1_5 = guest::cpu()->r[1];
    r13 = r13 + 0xcu;  // (from the original)
    r4_1 = *gptr<u32>(r13);
    r5_2 = *gptr<u32>(r13 + 4);
    r6_1 = *gptr<u32>(r13 + 8);
    r7_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
    return r4;
L_308a4e:;
    r13 = r13 + 0xcu;  // (from the original)
    r0_7 = ~0u;
    r4_2 = *gptr<u32>(r13);
    r5_3 = *gptr<u32>(r13 + 4);
    r6_2 = *gptr<u32>(r13 + 8);
    r7_2 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc_2 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_3;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[13] = r13;
    return r0_7;
}

}  // namespace d_003089d4
GUEST_EXPORT(0x003089d5, d_003089d4::f_003089d4);

// f_00308a64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00308a64 {

inline constexpr guest::Function<0x0058eb78, u32(u32, u32, u32, u32)> call_0058eb78;  // (from the original)

u32 f_00308a64() {
    return call_0058eb78(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00308a64
GUEST_EXPORT(0x00308a64, d_00308a64::f_00308a64);

// f_00308d00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00308d00 {

inline constexpr guest::Function<0x006c6590, u32(u32, u32, u32, u32)> call_006c6590;  // (from the original)

u32 f_00308d00() {
    return call_006c6590(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00308d00
GUEST_EXPORT(0x00308d00, d_00308d00::f_00308d00);

// f_00308d48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00308d48 {

inline constexpr guest::Function<0x0056cc38, u32(u32, u32, u32, u32)> call_0056cc38;  // (from the original)

u32 f_00308d48() {
    return call_0056cc38(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00308d48
GUEST_EXPORT(0x00308d48, d_00308d48::f_00308d48);

// f_00308d4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00308d4c {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> call_002ff408;  // (from the original)
inline constexpr guest::Function<0x00300800, u32(u32, u32, u32, u32)> call_00300800;  // (from the original)
inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> call_00303cdc;  // (from the original)
inline constexpr guest::Function<0x0030589c, u32(u32, u32, u32, u32)> call_0030589c;  // (from the original)
inline constexpr guest::Function<0x003059f8, u32(u32, u32, u32, u32)> call_003059f8;  // (from the original)
inline constexpr guest::Function<0x003084d0, u32(u32, u32, u32, u32)> call_003084d0;  // (from the original)
inline constexpr guest::Function<0x003084f9, u32(u32, u32, u32, u32)> call_003084f8;  // (from the original)
inline constexpr guest::Function<0x006bc04c, u32(u32, u32, u32, u32)> call_006bc04c;  // (from the original)

u32 f_00308d4c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 res_1 = 0;
    u32 r5_1 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    r4 = r0;
    guest::cpu()->r[13] = r13;
    call_003084d0(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_1 = r4 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_003059f8(r0_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_2 = r4 + (0x45u << 5);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030589c(r0_2, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_3 = r4 + 0x8b6u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006bc04c(r0_3, r1_3, r2_3, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_4 = r4 + 0x8beu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00303cdc(r0_4, r1_4, r2_4, r3_4);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r4 + 0x8c6u;  // (from the original)
    r5 = 0u;
    do {
L_308d7c:;
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r6, 0x95bfdcu, r2, r3);  // (from the original)
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = r5 + 1u;
        r6 = r6 + 4u;
        guest::preempt();
    } while (s32(r5) < s32(4u));
    r6 = r4 + 0x8d6u;  // (from the original)
    r5 = 0u;
    do {
L_308d92:;
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r6, 0x95bfdcu, r2, r3);  // (from the original)
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = r5 + 1u;
        r6 = r6 + 4u;
        guest::preempt();
    } while (s32(r5) < s32(4u));
    r0_5 = r4 + 0x8e6u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_5, 0x95bfdcu, r2, r3);  // (from the original)
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_6 = r4 + 0x8eau;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_6, 0x95bfdcu, r2_5, r3_5);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0x8eeu;  // (from the original)
    r5 = 0u;
    do {
L_308dba:;
        r0_7 = 0xf2u * r5 + r4 + r6;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_003084f8(r0_7, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = r5 + 1u;
        guest::preempt();
    } while (r5 < 0x10u);  // (from the original)
    r7 = 0x1810u;  // (from the original)
    r5 = 0u;
    do {
L_308dd0:;
        r0_8 = (5u << 7) * r5 + r4 + r7;
        guest::cpu()->r[13] = r13;
        call_002ff408(r0_8, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = r5 + 1u;
        guest::preempt();
    } while (s32(r5) < s32(4u));
    r0_9 = r4 + 0x2210u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002ff408(r0_9, r1, r2, r3);
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r6 = 0x7dbu;  // (from the original)
    *gptr<u16>(r4 + (0x49u << 7) + 0x10u) = u16(r6);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002ff408(r0_9, r1_5, r2_6, r3_6);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0u;
    r7 = 0x49u << 7;  // (from the original)
    do {
L_308e04:;
        r0_10 = (5u << 7) * r5 + r4 + 0x1810u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002ff408(r0_10, 0x1810u, r2, r3);  // (from the original)
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0_11 = r5 << 0x18;  // (from the original)
        r5 = r5 + 1u;
        res_1 = r5 - 4u;
        *gptr<u16>((r0_11 >> 0x17) + r4 + r7 + 0x12u) = u16(r6);  // (from the original)
        guest::preempt();
    } while (res_1 >> 0x1f != ((r5 ^ 4u) & (r5 ^ res_1)) >> 0x1f);  // (from the original)
    r5_1 = r4 + (0x25u << 8);  // (from the original)
    r0_12 = r4 + 0x250au;  // (from the original)
    *gptr<u8>(r5_1 + 8u) = u8(7u);
    guest::cpu()->r[13] = r13;
    call_00300800(r0_12, 7u, 0x250au, r3);  // (from the original)
    *gptr<u8>(r5_1 + 0xeu) = u8(2u);  // (from the original)
    r0_13 = 0u - 1u;
    *gptr<u8>(r5_1 + 0xfu) = u8(0x18u);  // (from the original)
    *gptr<u8>(r5_1 + 0x14u) = u8(r0_13);  // (from the original)
    *gptr<u8>(r5_1 + 0x15u) = u8(r0_13);  // (from the original)
    *gptr<u8>(r5_1 + 0x16u) = u8(r0_13);  // (from the original)
    *gptr<u8>(r5_1 + 0x17u) = u8(0u);  // (from the original)
    *gptr<u32>(r5_1 + 0x10u) = u32(0u);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = 0u;
    guest::cpu()->r[13] = r13;
    return r0_13;
}

}  // namespace d_00308d4c
GUEST_EXPORT(0x00308d4d, d_00308d4c::f_00308d4c);

// f_00308e80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00308e80 {

inline guest::global<u32, 0x009524dc> global_009524dc;  // (from the original)
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> call_00305f2c;  // (from the original)

u32 f_00308e80(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 zf_1 = 0;
    u32 zf_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_00305f2c(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 3u) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 0x26u;  // (from the original)
    }
    r0_2 = call_00305f2c(r0_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    if (r0_2 == 3u) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 0x26u;  // (from the original)
    }
    r2 = 0u;
    r0 = 0x26u;  // (from the original)
    r1 = *global_009524dc;
    if (r1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    do {
L_308eb4:;
        if (!((u32(*gptr<u8>(r1 + 0x1au)) & 3u) != r2)) {  // (from the original)
            r0_3 = u32(*gptr<u8>(r1 + 0x1bu));  // (from the original)
            zf_1 = r0_3 == 1u;
            if (!zf_1) {
                zf_1 = r0_3 == 3u;
            }
            if (zf_1) {
                guest::cpu()->r[13] += 8u;
                guest::cpu()->r[1] = r1;
                return 0x26u;  // (from the original)
            }
            zf_2 = r0_3 == 6u;
            if (!zf_2) {
                zf_2 = r0_3 == 0xeu;  // (from the original)
            }
            if (!zf_2) {
                guest::cpu()->r[13] += 8u;
                guest::cpu()->r[1] = r1;
                return r0_3;
            }
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return 0x26u;  // (from the original)
        }
        r1 = *gptr<u32>(r1 + 4u);
        guest::preempt();
    } while (r1 != 0);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00308e80
GUEST_EXPORT(0x00308e80, d_00308e80::f_00308e80);

// f_003090fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003090fc {

inline constexpr guest::Function<0x002fe450, u32(u32, u32, u32, u32)> call_002fe450;  // (from the original)
inline constexpr guest::Function<0x00309904, u32(u32, u32, u32, u32)> call_00309904;  // (from the original)
inline constexpr guest::Function<0x0030befc, u32(u32, u32, u32, u32)> call_0030befc;  // (from the original)
inline constexpr guest::Function<0x0030c0cd, u32(u32, u32, u32, u32)> call_0030c0cc;  // (from the original)
inline constexpr guest::Function<0x0030c1b5, u32(u32, u32, u32, u32)> call_0030c1b4;  // (from the original)

u32 f_003090fc(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r4_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r7 = r0;
    guest::cpu()->r[13] = r13;
    r0_1 = call_0030befc(0u, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_1 >> 0x1f != (r0_1 & (r0_1 ^ r0_1)) >> 0x1f) {  // (from the original)
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r5 = 0u;
L_30910e:;
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fe450(r5, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r6 = r0_2;
    if (r0_2 == 0) {
        goto L_309136;
    }
    guest::cpu()->r[13] = r13;
    call_00309904(r0_2, 8u, 0u, guest::cpu()->r[3]);
    r4 = 0u;
    do {
L_309122:;
        r1_1 = uxtb(r4 + 9u);
        guest::cpu()->r[13] = r13;
        call_00309904(r6, r1_1, 0u, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 2u);
L_309136:;
    r5 = r5 + 1u;
    if (s32(r5) < s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_30910e;
    }
    r4_1 = ~0u;
    *gptr<u32>(r13) = u32(0xau);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(0xau);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(0x3ffu);  // (from the original)
    r1_2 = r13;
    guest::cpu()->r[13] = r13;
    call_0030c0cc(r7, r1_2, r4_1, guest::cpu()->r[3]);
    r1_3 = r13;
    guest::cpu()->r[13] = r13;
    r0_1 = call_0030c1b4(r7, r1_3, r4_1, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_003090fc
GUEST_EXPORT(0x003090fd, d_003090fc::f_003090fc);

// f_00309168: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00309168 {

inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> call_002fbd54;  // (from the original)
inline constexpr guest::Function<0x002fe470, u32(u32, u32, u32, u32)> call_002fe470;  // (from the original)

u32 f_00309168(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 res_1 = 0;
    u32 r2_1 = 0;
    u32 res_2 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    r13 = ea_1;
    r6 = 0u;
    r7 = 0xdfu;  // (from the original)
L_30916e:;
    r0 = *gptr<u32>(r13);
    if (r6 >= 0xau) {  // (from the original)
        goto L_3091d2;
    }
    r1 = r6 * 0x2518u;  // (from the original)
    res_1 = r1 + r0;
    r4 = res_1;
    if (res_1 == 0) {
        goto L_3091ca;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fe470(r4, r1, 0x2518u, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_3091ca;
    }
L_309188:;
    if (r4 == 0) {
        goto L_3091ca;
    }
    r0 = r4 + (0x25u << 8);  // (from the original)
    r1 = *gptr<u32>(r0 + 0x10u);  // (from the original)
    r2_1 = r1 << 0x15;  // (from the original)
    res_2 = r2_1 >> 0x1e;  // (from the original)
    r3 = res_2;
    if (res_2 == 0) {
        goto L_3091ca;
    }
    if (r2_1 >> 0x1e == 2u) {  // (from the original)
        goto L_3091ca;
    }
    r2 = 3u << 9;
    r1 = r1 & ~r2;
    *gptr<u32>(r0 + 0x10u) = u32(r1);  // (from the original)
    r4 = r4 + 0x8eeu;  // (from the original)
    r5 = 0u;
    do {
L_3091ae:;
        guest::cpu()->r[13] = r13;
        r0 = call_002fbd54(r4, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0 == 0)) {
            r0 = r4 + 0xb6u;  // (from the original)
            r1 = u32(*gptr<u8>(r0 + 6u)) & r7;
            *gptr<u8>(r0 + 6u) = u8(r1);
        }
        r5 = r5 + 1u;
        r4 = r4 + 0xf2u;  // (from the original)
        guest::preempt();
    } while (r5 < 0x10u);  // (from the original)
L_3091ca:;
    r6 = r6 + 1u;
    if (s32(r6) < s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_30916e;
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_3091d2:;
    r4 = 0u;
    guest::preempt();
    goto L_309188;
}

}  // namespace d_00309168
GUEST_EXPORT(0x00309169, d_00309168::f_00309168);

// f_00309380: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00309380 {

inline constexpr guest::Function<0x00810f00, u32(u32, u32, u32, u32)> call_00810f00;  // (from the original)

u32 f_00309380() {
    return call_00810f00(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00309380
GUEST_EXPORT(0x00309380, d_00309380::f_00309380);

// f_003094f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003094f0 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x003026e8, u32(u32, u32, u32, u32)> call_003026e8;  // (from the original)
inline constexpr guest::Function<0x00527528, u32(u32, u32, u32, u32)> call_00527528;  // (from the original)
inline constexpr guest::Function<0x006cc958, u32(u32, u32, u32, u32)> call_006cc958;  // (from the original)
inline constexpr guest::Function<0x006cc97c, u32(u32, u32, u32, u32)> call_006cc97c;  // (from the original)
inline constexpr guest::Function<0x0070b3a4, u32(u32, u32, u32, u32)> call_0070b3a4;  // (from the original)

u32 f_003094f0(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r4_1 = 0;
    u32 r0_9 = 0;
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    u32 r0_10 = 0;
    u32 r1_7 = 0;
    u32 r1_8 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_9 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4u) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb328(0u, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r0_2 = u32(*gptr<u8>(r0_1 + 0x6e2a6u));  // (from the original)
    if (r0_2 == 0) {
        goto L_30958c;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fb328(r0_2, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r0_4 = r0_3 + 0x6e2a4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_0070b3a4(r0_4, r1_2, r2_2, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    if (r0_5 != 0) {
        goto L_30958c;
    }
    guest::cpu()->r[13] = r13;
    r0_6 = call_002fb328(r0_5, r1_3, r2_3, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r0_7 = r0_6 + 0x6e2b0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_003026e8(r0_7, r1_4, r2_4, guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    if (r0_8 != r0) {
        goto L_30958c;
    }
    r4_1 = 0u;
    guest::cpu()->r[13] = r13;
    r0_9 = call_006cc958(r0, r1_5, r2_5, guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    if (r0_9 != 0) {
        r4_1 = 1u;
    }
    guest::cpu()->r[13] = r13;
    r0_10 = call_006cc97c(r0, r1_6, r2_6, guest::cpu()->r[3]);
    r1_7 = guest::cpu()->r[1];
    if (r0_10 != 0) {
        r4_1 = 1u;
    }
    if (r0 == 0x84u) {  // (from the original)
        goto L_30958c;
    }
    if (r4_1 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_7;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
L_30958c:;
    r1_8 = r13 + 4u;
    r0_11 = r13;
    guest::cpu()->r[13] = r13;
    r0_12 = call_00527528(r0_11, r1_8, r0, guest::cpu()->r[3]);
    r1_9 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_9;
    guest::cpu()->r[13] = r13;
    return r0_12;
}

}  // namespace d_003094f0
GUEST_EXPORT(0x003094f0, d_003094f0::f_003094f0);

// f_003095a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003095a4 {

inline constexpr guest::Function<0x00711858, u32(u32, u32, u32, u32)> call_00711858;  // (from the original)

u32 f_003095a4() {
    return call_00711858(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003095a4
GUEST_EXPORT(0x003095a4, d_003095a4::f_003095a4);

// f_003095a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003095a8 {

inline constexpr guest::Function<0x0071109c, u32(u32, u32, u32, u32)> call_0071109c;  // (from the original)

u32 f_003095a8() {
    return call_0071109c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003095a8
GUEST_EXPORT(0x003095a8, d_003095a8::f_003095a8);

// f_003095ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003095ac {

inline constexpr guest::Function<0x007132e4, u32(u32, u32, u32, u32)> call_007132e4;  // (from the original)

u32 f_003095ac() {
    return call_007132e4(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003095ac
GUEST_EXPORT(0x003095ac, d_003095ac::f_003095ac);

// f_003095b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003095b4 {

inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)

u32 f_003095b4(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r12 = guest::cpu()->r[12];
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 nf_1 = 0;
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 nf_2 = 0;
    u32 r0_2 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r12);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r4 = 0u;
    r6 = r1;
    r9 = r0;
    r11 = 4u;
    r10 = r4;
L_3095cc:;
    r5_1 = u32(*gptr<u8>(r6 + 7u));
    r7_1 = u32(s32(s8(*gptr<u8>(r6 + 8u))));
    r8_1 = r4 & 0xffu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb94c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_309838;
    }
    r0 = r0 + 0x5700u;  // (from the original)
    if (r5_1 != 6u) {
        if (r5_1 == 8u) {
            goto L_30967c;
        }
        if (r5_1 == 9u) {
            goto L_309674;
        }
        if (r5_1 == 0xcu) {  // (from the original)
            goto L_3096c8;
        }
        if (r5_1 == 0xdu) {  // (from the original)
            goto L_3096c0;
        }
        if (r5_1 == 0xeu) {  // (from the original)
            goto L_30973c;
        }
        if (r5_1 == 0xfu) {  // (from the original)
            goto L_309744;
        }
        if (r5_1 == 0x11u) {  // (from the original)
            goto L_309784;
        }
        if (r5_1 == 0x12u) {  // (from the original)
            goto L_30978c;
        }
        if (r5_1 == 0x15u) {  // (from the original)
            goto L_3097a8;
        }
        if (r5_1 == 0) {
            goto L_3097e4;
        }
        if (r5_1 == 1u) {
            goto L_3097dc;
        }
        goto L_309838;
    }
    if (s32(r7_1) > s32(0x37u)) {  // (from the original)
        goto L_309838;
    }
    if (r8_1 == 0) {
        r1 = 0u;
        goto L_3096f0;
    }
    if (r8_1 == 0xbu) {  // (from the original)
        r1 = 1u;
        goto L_3096f0;
    }
    goto L_309830;
L_309674:;
    if (s32(r7_1) > s32(0x1eu)) {  // (from the original)
        goto L_309838;
    }
L_30967c:;
    if (r8_1 != 6u) {
        if (r8_1 != 8u) {
            goto L_309830;
        }
    } else {
        r0 = u32(*gptr<u8>(r0 + 0x12u)) << 0x19;  // (from the original)
        if (r0 >> 0x1f != (r0 & (r0 ^ r0)) >> 0x1f) {  // (from the original)
            r1 = 2u;
            goto L_3096f0;
        }
        goto L_309830;
    }
    r0 = u32(*gptr<u8>(r0 + 0x15u)) << 0x1e;  // (from the original)
    nf_1 = r0 >> 0x1f;  // (from the original)
    if (nf_1 != 0u) {
        r1 = 3u;
    }
    if (nf_1 == 0u) {
        goto L_309830;
    }
    goto L_3096f0;
L_3096c0:;
    if (s32(r7_1) > s32(0x1eu)) {  // (from the original)
        goto L_309838;
    }
L_3096c8:;
    if (r8_1 != 3u) {
        if (r8_1 != 4u) {
            goto L_309830;
        }
        goto L_309718;
    }
    res_1 = u32(*gptr<u8>(r0 + 6u)) << 0x1b >> 0x1c;  // (from the original)
    r0 = res_1;
    if (res_1 == 0) {
        goto L_309830;
    } else {
        r1 = 4u;
    }
L_3096f0:;
    if (r1 >= 0xfu) {  // (from the original)
        goto L_309838;
    }
L_3096f8:;
    r0_1 = u32(*gptr<u8>(r9 + (r1 >> 3)));
    r1 = r1 & 7u;
    r0 = lsr_r(r0_1, r1 & 0xff) & 1u;  // (from the original)
L_309708:;
    if (r0 == 0) {
        goto L_309838;
    }
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 1u;
L_309718:;
    r1 = u32(*gptr<u8>(r0 + 6u)) << 0x1b;  // (from the original)
    if (r11 >= r1 >> 0x1c) {  // (from the original)
        goto L_309830;
    }
    r0 = u32(*gptr<u8>(r0 + 0x16u));  // (from the original)
    if ((r0 & 1u) == 0) {
        goto L_309830;
    } else {
        r1 = 5u;
    }
    guest::preempt();
    goto L_3096f0;
L_30973c:;
    if (s32(r7_1) < s32(0x1eu)) {  // (from the original)
        goto L_309838;
    }
L_309744:;
    if (r8_1 != 5u) {
        if (r8_1 != 0xcu) {  // (from the original)
            goto L_309830;
        }
    } else {
        r0 = u32(*gptr<u8>(r0 + 5u)) << 0x1e;  // (from the original)
        if (r0 >> 0x1f != (r0 & (r0 ^ r0)) >> 0x1f) {  // (from the original)
            r1 = 6u;
            guest::preempt();
            goto L_3096f0;
        }
        goto L_309830;
    }
    r0 = u32(*gptr<u8>(r0 + 7u));
    if ((r0 & 1u) != 0) {
        r1 = 7u;
        guest::preempt();
        goto L_3096f0;
    }
    goto L_309830;
L_309784:;
    if (s32(r7_1) < s32(0x1eu)) {  // (from the original)
        goto L_309838;
    }
L_30978c:;
    if (r8_1 != 7u) {
        goto L_309830;
    }
    r0 = u32(*gptr<u8>(r0 + 0xcu));  // (from the original)
    if ((r0 & 0x1fu) != 0) {  // (from the original)
        r1 = 8u;
        guest::preempt();
        goto L_3096f0;
    }
    goto L_309830;
L_3097a8:;
    if (s32(r7_1) > s32(0x37u)) {  // (from the original)
        goto L_309838;
    }
    if (r8_1 == 1u) {
        r1 = 9u;
        guest::preempt();
        goto L_3096f0;
    }
    if (r8_1 != 0xdu) {  // (from the original)
        goto L_309830;
    }
    r0 = u32(*gptr<u8>(r0 + 0x13u)) << 0x1d;  // (from the original)
    nf_2 = r0 >> 0x1f;  // (from the original)
    if (nf_2 != 0u) {
        r1 = 0xau;  // (from the original)
    }
    if (nf_2 == 0u) {
        goto L_309830;
    }
    guest::preempt();
    goto L_3096f0;
L_3097dc:;
    if (s32(r7_1) > s32(0x1eu)) {  // (from the original)
        goto L_309838;
    }
L_3097e4:;
    if (r8_1 == 2u) {
        r1 = 0xdu;  // (from the original)
        guest::preempt();
        goto L_3096f0;
    }
    if (r8_1 != 9u) {
        if (r8_1 != 0xau) {  // (from the original)
            goto L_309830;
        }
    } else {
        r0 = u32(*gptr<u8>(r0 + 0xbu)) << 0x1d;  // (from the original)
        if (r0 >> 0x1f != (r0 & (r0 ^ r0)) >> 0x1f) {  // (from the original)
            r1 = 0xbu;  // (from the original)
            guest::preempt();
            goto L_3096f0;
        }
        goto L_309830;
    }
    r0_2 = u32(*gptr<u8>(r0 + 0x15u)) << 0x1a;  // (from the original)
    if (r0_2 >> 0x1f != (r0_2 & (r0_2 ^ r0_2)) >> 0x1f) {  // (from the original)
        r1 = 0xcu;  // (from the original)
        guest::preempt();
        goto L_3096f8;
    }
L_309830:;
    r0 = r10;
    guest::preempt();
    goto L_309708;
L_309838:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(0xeu)) {  // (from the original)
        guest::preempt();
        goto L_3095cc;
    }
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_003095b4
GUEST_EXPORT(0x003095b4, d_003095b4::f_003095b4);

// f_0030984c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030984c {

inline constexpr guest::Function<0x0071c620, u32(u32, u32, u32, u32)> call_0071c620;  // (from the original)

u32 f_0030984c() {
    return call_0071c620(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030984c
GUEST_EXPORT(0x0030984c, d_0030984c::f_0030984c);

// f_00309850: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00309850 {

inline constexpr guest::Function<0x0071c2f8, u32(u32, u32, u32, u32)> call_0071c2f8;  // (from the original)

u32 f_00309850() {
    return call_0071c2f8(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00309850
GUEST_EXPORT(0x00309850, d_00309850::f_00309850);

// f_00309854: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00309854 {

inline constexpr guest::Function<0x0069f26c, u32(u32, u32, u32, u32)> call_0069f26c;  // (from the original)

u32 f_00309854() {
    return call_0069f26c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00309854
GUEST_EXPORT(0x00309854, d_00309854::f_00309854);

// f_00309858: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00309858 {

inline constexpr guest::Function<0x0055cb58, u32(u32, u32, u32, u32)> call_0055cb58;  // (from the original)

u32 f_00309858() {
    return call_0055cb58(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00309858
GUEST_EXPORT(0x00309858, d_00309858::f_00309858);

// f_00309860: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00309860 {

inline constexpr guest::Function<0x006c4e6c, u32(u32, u32, u32, u32)> call_006c4e6c;  // (from the original)

u32 f_00309860() {
    return call_006c4e6c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00309860
GUEST_EXPORT(0x00309860, d_00309860::f_00309860);

// f_00309954: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00309954 {

inline constexpr guest::Function<0x0071a0b0, u32(u32, u32, u32, u32)> call_0071a0b0;  // (from the original)

u32 f_00309954() {
    return call_0071a0b0(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00309954
GUEST_EXPORT(0x00309954, d_00309954::f_00309954);

// f_0030996c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030996c {

inline constexpr guest::Function<0x00758dd4, u32(u32, u32, u32, u32)> call_00758dd4;  // (from the original)

u32 f_0030996c() {
    return call_00758dd4(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030996c
GUEST_EXPORT(0x0030996c, d_0030996c::f_0030996c);

// f_00309970: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00309970 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x003091e0, u32(u32, u32, u32, u32)> call_003091e0;  // (from the original)
inline constexpr guest::Function<0x003091ec, u32(u32, u32, u32, u32)> call_003091ec;  // (from the original)
inline constexpr guest::Function<0x00309eb9, u32(u32, u32, u32, u32)> call_00309eb8;  // (from the original)
inline constexpr guest::Function<0x00309fbc, u32(u32, u32, u32, u32)> call_00309fbc;  // (from the original)
inline constexpr guest::Function<0x0030f321, u32(u32, u32, u32, u32)> call_0030f320;  // (from the original)
inline constexpr guest::Function<0x00405464, u32(u32, u32, u32, u32)> call_00405464;  // (from the original)

u32 f_00309970(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 res_1 = 0;
    u32 r0_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_003091e0(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = call_003091ec(r0_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    r1_3 = r0_2 + 0x55a6u;  // (from the original)
    r0_3 = call_00309eb8(r0, r1_3, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    res_1 = u32(*gptr<u8>(r0_3 + 0xbbu)) >> 1 << 0x1f;  // (from the original)
    if (res_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    r0_4 = call_002fb328(res_1, r1_2, r2_3, r3_3);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_5 = r0_4 + 0xa0u;  // (from the original)
    r0_6 = call_00309fbc(r0_5, r0_2, r2_4, r3_4);
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_7 = call_00405464(r0, r0_6, r2_5, r3_5);
    r0_8 = call_0030f320(r0, 7u, 0u, 0u);
    r1_2 = guest::cpu()->r[1];
    if (r0_7 != r0_8) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_00309970
GUEST_EXPORT(0x00309971, d_00309970::f_00309970);

// f_003099d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003099d0 {


u32 f_003099d0(u32 r0) {
    u32 r1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_7 = 0;
    r1 = 0u;
L_3099d4:;
    r2_1 = r1 + 9u & 0xffu;  // (from the original)
    if (r2_1 >= 0x1du) {  // (from the original)
        goto L_309a28;
    }
    if ((lsr_r(u32(*gptr<u8>(r0 + (r2_1 >> 3))), r2_1 & 7u) & 1u) == 0) {
        goto L_309a28;
    }
    if (r1 == 0) {
        r0_1 = 0xa82b90u + 0x7e0u;  // (from the original)
        r0_2 = *gptr<u32>(r0_1);
        guest::cpu()->r[1] = r1;
        return r0_2;
    }
    if (r1 == 1u) {
        r0_3 = 0xa82b90u + 0x7e4u;  // (from the original)
    } else {
        r0_4 = ~0u;
        guest::cpu()->r[1] = r1;
        return r0_4;
    }
    r0_5 = *gptr<u32>(r0_3);
    guest::cpu()->r[1] = r1;
    return r0_5;
L_309a28:;
    r1 = r1 + 1u;
    if (r1 < 2u) {
        guest::preempt();
        goto L_3099d4;
    }
    r0_7 = ~0u;
    guest::cpu()->r[1] = r1;
    return r0_7;
}

}  // namespace d_003099d0
GUEST_EXPORT(0x003099d0, d_003099d0::f_003099d0);

// f_00309a3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00309a3c {

inline constexpr guest::Function<0x006baa64, u32(u32, u32, u32, u32)> call_006baa64;  // (from the original)

u32 f_00309a3c() {
    return call_006baa64(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00309a3c
GUEST_EXPORT(0x00309a3c, d_00309a3c::f_00309a3c);

// f_00309a40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00309a40 {

inline constexpr guest::Function<0x00768044, u32(u32, u32, u32, u32)> call_00768044;  // (from the original)

u32 f_00309a40() {
    return call_00768044(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00309a40
GUEST_EXPORT(0x00309a40, d_00309a40::f_00309a40);

// f_00309a44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00309a44 {

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x00301e64, u32(u32, u32, u32, u32)> call_00301e64;  // (from the original)
inline constexpr guest::Function<0x00301e6c, u32(u32, u32, u32, u32)> call_00301e6c;  // (from the original)
inline constexpr guest::Function<0x00308efc, u32(u32, u32, u32, u32)> call_00308efc;  // (from the original)

u32 f_00309a44(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r4_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r3_5 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r4_1 = r1;
    r5 = r0;
    guest::cpu()->r[13] = r13;
    r0_1 = call_00301e20(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    if (r4_1 == 0) {
        goto L_309a7c;
    }
    r0_2 = *gptr<u32>(r4_1);
    r1 = *gptr<u32>(r4_1 + 4);
    r2 = *gptr<u32>(r4_1 + 8);
    r4_2 = r4_1 + 0xc;  // (from the original)
    r3_2 = r13;
    *gptr<u32>(r3_2) = u32(r0_2);
    *gptr<u32>(r3_2 + 4) = u32(r1);
    *gptr<u32>(r3_2 + 8) = u32(r2);
    r3 = r3_2 + 0xc;  // (from the original)
L_309a5e:;
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    call_00308efc(r0_3, r1, r2, r3);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_4 = call_00301e64(r5, r1_2, r2_2, r3_3);
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_5 = call_00301e6c(0xa83aecu, r0_4, r2_3, r3_4);  // (from the original)
    if (r0_5 == 0) {
        goto L_309a8e;
    }
    r1_3 = u32(*gptr<u8>(r0_5 + 0x1du)) >> 4;  // (from the original)
    goto L_309a90;
L_309a7c:;
    guest::cpu()->r[13] = r13;
    r0_6 = call_002fb378(r0_1, r1_1, r2_1, r3_1);
    r3 = guest::cpu()->r[3];
    r2 = *gptr<u32>(r0_6 + 4u);
    r1 = *gptr<u32>(r0_6);
    r0_7 = *gptr<u32>(r0_6 + 8u);
    *gptr<u32>(r13 + 4u) = u32(r2);
    *gptr<u32>(r13) = u32(r1);
    *gptr<u32>(r13 + 8u) = u32(r0_7);
    guest::preempt();
    goto L_309a5e;
L_309a8e:;
    r1_3 = 1u;
L_309a90:;
    r3_5 = r13;
    if (r1_3 != u32(s32(s8(*gptr<u8>(r3_5 + 4u))))) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    if (r0_5 != 0) {
        r1_3 = u32(s32(s8(*gptr<u8>(r0_5 + 3u))));
    } else {
        r1_3 = 1u;
    }
    if (r1_3 != u32(s32(s8(*gptr<u8>(r3_5 + 5u))))) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_00309a44
GUEST_EXPORT(0x00309a45, d_00309a44::f_00309a44);

// f_00309ac8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00309ac8 {

struct __attribute__((packed)) Object_00309ac8_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00309ac8_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00309ac8_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00309ac8_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fe4c0, u32(u32, u32, u32, u32)> call_002fe4c0;  // (from the original)
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> call_00305f2c;  // (from the original)
inline constexpr guest::Function<0x00309bd4, u32(u32, u32, u32, u32)> call_00309bd4;  // (from the original)
inline constexpr guest::Function<0x003188f0, u32(u32, u32, u32, u32)> call_003188f0;  // (from the original)

u32 f_00309ac8(u32 r0, gptr<Object_00309ac8_1> arg1, u32 r2) {
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r4_1 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 res_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 res_2 = 0;
    u32 r0_7 = 0;
    u32 r2_4 = 0;
    u32 r0_8 = 0;
    u32 r2_5 = 0;
    u32 r0_9 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r6 = r0;
    if (r1 == 0) {
        goto L_309b24;
    }
    r7 = arg1->word_4;
    r5 = arg1->word_8;
    r4 = arg1->word_0;
L_309ad8:;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fe4c0(r6, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    *gptr<u32>(r13) = u32(r0_1);
    guest::cpu()->r[13] = r13;
    r0_2 = call_00305f2c(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_2 == 3u) {
        goto L_309b98;
    }
    if (*gptr<u32>(r13) >= 8u) {
        goto L_309b98;
    }
    *gptr<u32>(r13 + 8u) = u32(r7);
    *gptr<u32>(r13 + 0xcu) = u32(r5);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r4);
    r4_1 = rev16(u32(*gptr<u16>(r13 + 0xbu)));  // (from the original)
    r1_3 = *gptr<u32>(r13) << 3;
    r2_2 = r1_3 + 0x88ee28u;  // (from the original)
    r5_1 = *gptr<u32>(0x88ee28u + r1_3);  // (from the original)
    r6_1 = *gptr<u32>(r2_2 + 4u);
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fb328(0x88ee28u, r1_3, r2_2, guest::cpu()->r[3]);  // (from the original)
    r2_3 = guest::cpu()->r[2];
    res_1 = u32(*gptr<u8>(r0_3 + 0x80u + 0x6214fu)) >> 1 << 0x1f;  // (from the original)
    if (res_1 == 0) {
        goto L_309b30;
    }
    r1_2 = 0x88ee68u;  // (from the original)
    r0_4 = *gptr<u32>(r13) << 2;
    r6_1 = *gptr<u32>(r1_2 + r0_4);
    goto L_309b4a;
L_309b24:;
    guest::cpu()->r[13] = r13;
    r0_5 = call_002fb378(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r7 = *gptr<u32>(r0_5 + 4u);
    r5 = *gptr<u32>(r0_5 + 8u);
    r4 = *gptr<u32>(r0_5);
    guest::preempt();
    goto L_309ad8;
L_309b30:;
    guest::cpu()->r[13] = r13;
    r0_6 = call_002fb328(res_1, 0x6214fu, r2_3, guest::cpu()->r[3]);  // (from the original)
    r2_3 = guest::cpu()->r[2];
    r1_2 = 0x6214fu;  // (from the original)
    res_2 = u32(*gptr<u8>(r0_6 + 0x80u + r1_2)) >> 2 << 0x1f;  // (from the original)
    r0_4 = res_2;
    if (res_2 == 0) {
        goto L_309b4a;
    }
    r1_2 = 0x88ee88u;  // (from the original)
    r0_4 = *gptr<u32>(r13) << 2;
    r5_1 = *gptr<u32>(r1_2 + r0_4);
L_309b4a:;
    if (r5_1 > r6_1) {
        if (r4_1 >= r5_1) {
            goto L_309b60;
        }
        if (r4_1 < r6_1) {
            goto L_309b60;
        }
        goto L_309b98;
    }
    if (r4_1 < r5_1) {
        goto L_309b98;
    }
    if (r4_1 >= r6_1) {
        goto L_309b98;
    }
L_309b60:;
    guest::cpu()->r[13] = r13;
    r0_7 = call_003188f0(r0_4, r1_2, r2_3, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    if (r0_7 != 2u) {
        if (r0_7 == 7u) {
            goto L_309b98;
        }
        if (r0_7 == 8u) {
            goto L_309b88;
        }
        if (r0_7 != 0xfu) {  // (from the original)
            goto L_309b9e;
        }
    } else {
        if (s32(u32(s32(r7) >> 0x18)) >= s32(0x12u)) {  // (from the original)
            goto L_309b98;
        }
        goto L_309b9e;
    }
    if (u32(s32(r7) >> 0x18) - 2u >= 0x10u) {  // (from the original)
        goto L_309b98;
    }
    goto L_309b9e;
L_309b88:;
    guest::cpu()->r[13] = r13;
    r0_8 = call_002fb378(r0_7, r1_2, r2_4, guest::cpu()->r[3]);
    r2_5 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_9 = call_00309bd4(8u, r0_8, r2_5, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_9 == 0) {
        goto L_309b9e;
    }
L_309b98:;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return 0u;
L_309b9e:;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_00309ac8
GUEST_EXPORT(0x00309ac9, d_00309ac8::f_00309ac8);

// f_00309bb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00309bb8 {

inline constexpr guest::Function<0x005e9150, u32(u32, u32, u32, u32)> call_005e9150;  // (from the original)

u32 f_00309bb8() {
    return call_005e9150(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00309bb8
GUEST_EXPORT(0x00309bb8, d_00309bb8::f_00309bb8);

// f_00309bbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00309bbc {

inline constexpr guest::Function<0x005e90cc, u32(u32, u32, u32, u32)> call_005e90cc;  // (from the original)

u32 f_00309bbc() {
    return call_005e90cc(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00309bbc
GUEST_EXPORT(0x00309bbc, d_00309bbc::f_00309bbc);

// f_0030a1a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030a1a4 {

inline constexpr guest::Function<0x00713370, u32(u32, u32, u32, u32)> call_00713370;  // (from the original)

u32 f_0030a1a4() {
    return call_00713370(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030a1a4
GUEST_EXPORT(0x0030a1a4, d_0030a1a4::f_0030a1a4);

// f_0030a1a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030a1a8 {

inline constexpr guest::Function<0x0076ae94, u32(u32, u32, u32, u32)> call_0076ae94;  // (from the original)

u32 f_0030a1a8() {
    return call_0076ae94(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030a1a8
GUEST_EXPORT(0x0030a1a8, d_0030a1a8::f_0030a1a8);

// f_0030a1ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030a1ac {

inline constexpr guest::Function<0x0070f51c, u32(u32, u32, u32, u32)> call_0070f51c;  // (from the original)

u32 f_0030a1ac() {
    return call_0070f51c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030a1ac
GUEST_EXPORT(0x0030a1ac, d_0030a1ac::f_0030a1ac);

// f_0030a1b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030a1b0 {

inline constexpr guest::Function<0x005d46dc, u32(u32, u32, u32, u32)> call_005d46dc;  // (from the original)

u32 f_0030a1b0() {
    return call_005d46dc(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030a1b0
GUEST_EXPORT(0x0030a1b0, d_0030a1b0::f_0030a1b0);

// f_0030a340: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030a340 {

inline constexpr guest::Function<0x00768268, u32(u32, u32, u32, u32)> call_00768268;  // (from the original)

u32 f_0030a340() {
    return call_00768268(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030a340
GUEST_EXPORT(0x0030a340, d_0030a340::f_0030a340);

// f_0030a344: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030a344 {

inline constexpr guest::Function<0x0076880c, u32(u32, u32, u32, u32)> call_0076880c;  // (from the original)

u32 f_0030a344() {
    return call_0076880c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030a344
GUEST_EXPORT(0x0030a344, d_0030a344::f_0030a344);

// f_0030a348: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030a348 {

inline constexpr guest::Function<0x007689a4, u32(u32, u32, u32, u32)> call_007689a4;  // (from the original)

u32 f_0030a348() {
    return call_007689a4(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030a348
GUEST_EXPORT(0x0030a348, d_0030a348::f_0030a348);

// f_0030a390: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030a390 {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x002fe470, u32(u32, u32, u32, u32)> call_002fe470;  // (from the original)
inline constexpr guest::Function<0x00309865, u32(u32, u32, u32, u32)> call_00309864;  // (from the original)
inline constexpr guest::Function<0x0030a2b4, u32(u32, u32, u32, u32)> call_0030a2b4;  // (from the original)
inline constexpr guest::Function<0x00405840, u32(u32, u32, u32, u32)> call_00405840;  // (from the original)
inline constexpr guest::Function<0x00405844, u32(u32, u32, u32, u32)> call_00405844;  // (from the original)
inline constexpr guest::Function<0x005bc53c, u32(u32, u32, u32, u32)> call_005bc53c;  // (from the original)
inline constexpr guest::Function<0x005bcaf0, u32(u32, u32, u32, u32)> call_005bcaf0;  // (from the original)

u32 f_0030a390(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 res_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r7_1 = 0;
    u32 r5_1 = 0;
    u32 r1_2 = 0;
    u32 r4_1 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_5 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 res_2 = 0;
    u32 r0_9 = 0;
    u32 res_3 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    guest::cpu()->r[13] = r13;
    r0_1 = call_00309864(r0, 1u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 >= 0xau) {  // (from the original)
        goto L_30a3d0;
    }
    r1_1 = 0x2518u;  // (from the original)
    res_1 = r0_1 * r1_1 + r0;
    if (res_1 == 0) {
        goto L_30a3d0;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fe470(res_1, r1_1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_30a3d0;
    }
    r7_1 = r0 + 0x172f4u;  // (from the original)
    r5_1 = r7_1 + 0xa0u;  // (from the original)
    if (u32(*gptr<u8>(r5_1 + 0xau)) << 0x1c >> 0x1c == 1u) {  // (from the original)
        goto L_30a3d4;
    }
    r1_2 = *gptr<u8>(r5_1 + 0xbu);  // (from the original)
    r4_1 = r1_2;
    if (u32(*gptr<u8>(r5_1 + 7u)) == 0) {
        goto L_30a3e6;
    }
    r4_1 = r1_2 - 1u;
    goto L_30a3fa;
L_30a3d0:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return 0u;
L_30a3d4:;
    guest::cpu()->r[13] = r13;
    call_005bc53c(r7_1, r1_1, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0030a2b4(r7_1, r1, r2_3, r3_3);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return 0u;
L_30a3e6:;
    guest::cpu()->r[13] = r13;
    r0_3 = call_00405840(r7_1, r1_2, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        goto L_30a3fa;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_00405844(r0_3, r1_2, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        goto L_30a3fa;
    }
    r4_1 = r4_1 - 1u;
L_30a3fa:;
    if (r4_1 >> 0x1f != (r4_1 & (r4_1 ^ r4_1)) >> 0x1f) {  // (from the original)
        r1_4 = 1u;
        r0_5 = 3u;
        *gptr<u8>(r5_1 + 0xau) = u8(r1_4);  // (from the original)
        *gptr<u8>(r5_1 + 0xbu) = u8(r0_5);  // (from the original)
    } else {
        *gptr<u8>(r5_1 + 0xbu) = u8(r4_1);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_5 = call_005bcaf0(r7_1, r1_2, r2_2, r3_2);
        r1_4 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    r0_6 = call_002fae84(r0_5, r1_4, r2_2, r3_2);
    r1_5 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_7 = call_002fb310(r0_6, r1_5, r2_4, r3_4);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r7 = 0x8eeu;  // (from the original)
    r5 = 0u;
    r6 = 0xefu;  // (from the original)
    *gptr<u32>(r13) = u32(r0_7 + 4u);
L_30a422:;
    r0_8 = *gptr<u32>(r13);
    if (r5 >= 0xau) {  // (from the original)
        goto L_30a446;
    }
    r1 = r5 * 0x2518u;  // (from the original)
    res_2 = r1 + r0_8;
    r4 = res_2;
    if (res_2 == 0) {
        goto L_30a468;
    }
    guest::cpu()->r[13] = r13;
    r0_9 = call_002fe470(r4, r1, 0x2518u, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0_9 == 0) {
        goto L_30a468;
    }
L_30a43c:;
    if (r4 == 0) {
        goto L_30a468;
    }
    r0 = 0u;
    r1 = r0;
    goto L_30a450;
L_30a446:;
    r4 = 0u;
    guest::preempt();
    goto L_30a43c;
L_30a44a:;
    r1 = r0;
    if (r0 >= 0x10u) {  // (from the original)
        goto L_30a462;
    }
L_30a450:;
    res_3 = r1 * 0xf2u + r4 + r7;  // (from the original)
    r1 = res_3;
    if (res_3 == 0) {
        goto L_30a462;
    }
    r1 = r1 + 0xb6u;  // (from the original)
    *gptr<u8>(r1 + 6u) = u8(u32(*gptr<u8>(r1 + 6u)) & r6);
L_30a462:;
    r0 = r0 + 1u;
    if (r0 < 0x10u) {  // (from the original)
        guest::preempt();
        goto L_30a44a;
    }
L_30a468:;
    r5 = r5 + 1u;
    if (s32(r5) < s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_30a422;
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_0030a390
GUEST_EXPORT(0x0030a391, d_0030a390::f_0030a390);

// f_0030a484: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030a484 {

inline constexpr guest::Function<0x00612d0c, u32(u32, u32, u32, u32)> call_00612d0c;  // (from the original)

u32 f_0030a484() {
    return call_00612d0c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030a484
GUEST_EXPORT(0x0030a484, d_0030a484::f_0030a484);

// f_0030a62c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030a62c {

inline constexpr guest::Function<0x005d4788, u32(u32, u32, u32, u32)> call_005d4788;  // (from the original)

u32 f_0030a62c() {
    return call_005d4788(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030a62c
GUEST_EXPORT(0x0030a62c, d_0030a62c::f_0030a62c);

// f_0030a708: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030a708 {

inline constexpr guest::Function<0x005caf28, u32(u32, u32, u32, u32)> call_005caf28;  // (from the original)

u32 f_0030a708() {
    return call_005caf28(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030a708
GUEST_EXPORT(0x0030a708, d_0030a708::f_0030a708);

// f_0030a70c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030a70c {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fe419, u32(u32, u32, u32, u32)> call_002fe418;  // (from the original)
inline constexpr guest::Function<0x002fe450, u32(u32, u32, u32, u32)> call_002fe450;  // (from the original)
inline constexpr guest::Function<0x002fe470, u32(u32, u32, u32, u32)> call_002fe470;  // (from the original)
inline constexpr guest::Function<0x002fe4c0, u32(u32, u32, u32, u32)> call_002fe4c0;  // (from the original)
inline constexpr guest::Function<0x002fe4d0, u32(u32, u32, u32, u32)> call_002fe4d0;  // (from the original)
inline constexpr guest::Function<0x00405aa4, u32(u32, u32, u32, u32)> call_00405aa4;  // (from the original)
inline constexpr guest::Function<0x0051d1f8, u32(u32, u32, u32, u32)> call_0051d1f8;  // (from the original)
inline constexpr guest::Function<0x0051d7cc, u32(u32, u32, u32, u32)> call_0051d7cc;  // (from the original)

u32 f_0030a70c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 sco = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 res_1 = 0;
    u32 r5_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 res_2 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 cf_1 = 0;
    u32 res_3 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    r7 = r1;
    r6 = r0;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fe418(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r4 = r0_1;
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fe450(r0_1, r1_1, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u32>(r13) = u32(r0_2);
    if (r0_2 == 0) {
        goto L_30a7cc;
    }
    if (r7 != 0x14u) {  // (from the original)
        if (r7 == 5u) {
            goto L_30a75e;
        }
        goto L_30a788;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fb328(r0_2, r1, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_4 = r0_3 + 0x80u + 0x29220u + 4u;  // (from the original)
    if (r4 >= 0xau) {  // (from the original)
        goto L_30a750;
    }
    r2_3 = 0x2518u;  // (from the original)
    r1_2 = r4 * r2_3;
    res_1 = r1_2 + r0_4;
    r5_1 = res_1;
    if (res_1 == 0) {
        goto L_30a750;
    }
    guest::cpu()->r[13] = r13;
    r0_5 = call_002fe470(r5_1, r1_2, r2_3, r3_3);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_5 != 0) {
        goto L_30a752;
    }
L_30a750:;
    r5_1 = 0u;
L_30a752:;
    guest::cpu()->r[13] = r13;
    r0_6 = call_002fe4c0(r5_1, r1_2, r2_3, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0051d7cc(r0_6, r1_3, r2_4, r3_4);
    r1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    goto L_30a788;
L_30a75e:;
    guest::cpu()->r[13] = r13;
    r0_7 = call_002fb328(r0_2, r1, r2_2, r3_2);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0_8 = r0_7 + 0x80u + 0x29220u + 4u;  // (from the original)
    if (r4 >= 0xau) {  // (from the original)
        goto L_30a798;
    }
    r1 = r4 * 0x2518u;  // (from the original)
    res_2 = r1 + r0_8;
    r5 = res_2;
    if (res_2 == 0) {
        goto L_30a7cc;
    }
    guest::cpu()->r[13] = r13;
    r0_9 = call_002fe470(r5, r1, 0x2518u, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_9 == 0) {
        goto L_30a7cc;
    }
L_30a780:;
    if (r5 == 0) {
        goto L_30a7cc;
    }
    guest::cpu()->r[13] = r13;
    call_00405aa4(r5, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
L_30a788:;
    r0_10 = *gptr<u32>(r13) + 0x20u;  // (from the original)
    *gptr<u8>(r0_10 + 4u) = u8(r7);
    if (r7 == 0xfu) {  // (from the original)
        goto L_30a79c;
    }
    if (r7 == 0x11u) {  // (from the original)
        goto L_30a79c;
    }
    goto L_30a7ac;
L_30a798:;
    r5 = 0u;
    guest::preempt();
    goto L_30a780;
L_30a79c:;
    guest::cpu()->r[13] = r13;
    r0_11 = call_0051d1f8(r0_10, r1, r2_2, r3_2);
    r1 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_11 != r4) {
        goto L_30a7ac;
    }
    r0_12 = ~0u;
    guest::cpu()->r[13] = r13;
    call_002fe4d0(r0_12, r1, r2_5, r3_5);
    r1 = guest::cpu()->r[1];
L_30a7ac:;
    r0_13 = *gptr<u32>(r6);
    cf_1 = r0_13 >= r4;
    if (!cf_1 || r0_13 == r4) {
        goto L_30a7c8;
    }
    r1 = *gptr<u32>(r6 + 4u);
    sco = cf_1;
    res_3 = lsl_rc(1u, r4 & 0xff, &sco);  // (from the original)
    if ((r1 & res_3) == 0) {
        goto L_30a7c8;
    }
    r1 = r1 & ~res_3;
    r0_14 = *gptr<u32>(r6 + 8u);
    *gptr<u32>(r6 + 4u) = u32(r1);
    *gptr<u32>(r6 + 8u) = u32(r0_14 - 1u);
L_30a7c8:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r4;
L_30a7cc:;
    r0_15 = ~0u;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_15;
}

}  // namespace d_0030a70c
GUEST_EXPORT(0x0030a70d, d_0030a70c::f_0030a70c);

// f_0030a7dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030a7dc {

inline constexpr guest::Function<0x00606704, u32(u32, u32, u32, u32)> call_00606704;  // (from the original)

u32 f_0030a7dc() {
    return call_00606704(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030a7dc
GUEST_EXPORT(0x0030a7dc, d_0030a7dc::f_0030a7dc);

// f_0030a8f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030a8f8 {

inline constexpr guest::Function<0x002f67ac, u32(u32, u32, u32, u32)> call_002f67ac;  // (from the original)
inline constexpr guest::Function<0x002f6e14, u32(u32, u32, u32, u32)> call_002f6e14;  // (from the original)
inline constexpr guest::Function<0x002f71e4, u32(u32, u32, u32, u32)> call_002f71e4;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x007237e0, u32(u32, u32, u32, u32)> call_007237e0;  // (from the original)

u32 f_0030a8f8(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 zf_1 = 0;
    u32 zf_2 = 0;
    u32 zf_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r0 + 0xbccu;  // (from the original)
    r0_1 = call_007237e0(r5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r6 = 0x2f635cu;  // (from the original)
    if (r0_1 == 0) {
        goto L_30aa08;
    }
L_30a91c:;
    call_002f71e4(r5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = call_007237e0(r5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 == 0) {
        guest::preempt();
        goto L_30a91c;
    }
L_30a93c:;
    call_002f67ac(r5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002f6e14(r5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r5 = r4 + 0x19d4u;  // (from the original)
    r0_3 = call_007237e0(r5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_3 == 0) {
        goto L_30aa20;
    }
L_30a96c:;
    call_002f71e4(r5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_4 = call_007237e0(r5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_4 == 0) {
        guest::preempt();
        goto L_30a96c;
    }
L_30a98c:;
    call_002f67ac(r5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002f6e14(r5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r5 = r4 + 0x12d0u;  // (from the original)
    r0_5 = call_007237e0(r5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_5 == 0) {
        goto L_30aa38;
    }
L_30a9bc:;
    call_002f71e4(r5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_6 = call_007237e0(r5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_6 == 0) {
        guest::preempt();
        goto L_30a9bc;
    }
L_30a9dc:;
    call_002f67ac(r5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002f6e14(r5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_7 = r4 + 0x294u;  // (from the original)
    call_00568c10(r0_7, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_8 = r4 + 0x4d0u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_00568c10(r0_8, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
L_30aa08:;
    zf_1 = *gptr<u32>(r5 + 0xb8u) == r6;  // (from the original)
    if (zf_1) {
        zf_1 = *gptr<u32>(r5 + 0xbcu) == 0;  // (from the original)
    }
    if (!zf_1) {
        guest::preempt();
        goto L_30a93c;
    }
    guest::preempt();
    goto L_30a91c;
L_30aa20:;
    zf_2 = *gptr<u32>(r5 + 0xb8u) == r6;  // (from the original)
    if (zf_2) {
        zf_2 = *gptr<u32>(r5 + 0xbcu) == 0;  // (from the original)
    }
    if (!zf_2) {
        guest::preempt();
        goto L_30a98c;
    }
    guest::preempt();
    goto L_30a96c;
L_30aa38:;
    zf_3 = *gptr<u32>(r5 + 0xb8u) == r6;  // (from the original)
    if (zf_3) {
        zf_3 = *gptr<u32>(r5 + 0xbcu) == 0;  // (from the original)
    }
    if (!zf_3) {
        guest::preempt();
        goto L_30a9dc;
    }
    guest::preempt();
    goto L_30a9bc;
}

}  // namespace d_0030a8f8
GUEST_EXPORT(0x0030a8f8, d_0030a8f8::f_0030a8f8);

// f_0030aa54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030aa54 {

inline constexpr guest::Function<0x006a6eb0, u32(u32, u32, u32, u32)> call_006a6eb0;  // (from the original)

u32 f_0030aa54() {
    return call_006a6eb0(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030aa54
GUEST_EXPORT(0x0030aa54, d_0030aa54::f_0030aa54);

// f_0030ac4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ac4c {

inline constexpr guest::Function<0x00594e34, u32(u32, u32, u32, u32)> call_00594e34;  // (from the original)

u32 f_0030ac4c() {
    return call_00594e34(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030ac4c
GUEST_EXPORT(0x0030ac4c, d_0030ac4c::f_0030ac4c);

// f_0030af7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030af7c {

struct __attribute__((packed)) Object_0030af7c_0 {
    u8 unknown_0[0xae5];  // (not used here)
    u8 byte_ae5;
    u8 unknown_ae6[0x1c82];  // (not used here)
    u32 word_2768;
};
GUEST_OFFSET(Object_0030af7c_0, byte_ae5, 0xae5);  // (from the original)
GUEST_OFFSET(Object_0030af7c_0, word_2768, 0x2768);  // (from the original)

inline guest::global<u32, 0x0030b010> global_0030b010;  // (from the original)
inline guest::global<u32, 0x0030b014> global_0030b014;  // (from the original)
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)

u32 f_0030af7c(gptr<Object_0030af7c_0> arg0, u32 r1, float S0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r6_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    float S0_2 = 0;
    u32 r0_3 = 0;
    float S0_3 = 0;
    u32 r0_4 = 0;
    float S0_4 = 0;
    u32 r2_4 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r0_1 = u32(s32(s8(arg0->byte_ae5)));
    if (r0_1 == r1) {
        r6_1 = r0 + 0x2768u;  // (from the original)
        r1_1 = r0 + 0x458u;  // (from the original)
        r2_1 = arg0->word_2768;
        r0_2 = r0 + 0x294u;  // (from the original)
        guest::cpu()->s[0] = S0;
        call_00568630(r0_2, r1_1, r2_1, 0u);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        if (r1 != 0) {
            S0_1 = std::bit_cast<float>(*global_0030b010);
            guest::cpu()->s[0] = S0_1;
            call_005697e0(r1_1, r1_2, r2_2, r3_1);
            r1_3 = guest::cpu()->r[1];
            r2_3 = guest::cpu()->r[2];
            r3_2 = guest::cpu()->r[3];
            S0_2 = guest::cpu()->s[0];
            r0_3 = 0u;
        } else {
            S0_3 = std::bit_cast<float>(*global_0030b014);
            guest::cpu()->s[0] = S0_3;
            call_005697e0(r1_1, r1_2, r2_2, r3_1);
            r1_3 = guest::cpu()->r[1];
            r2_3 = guest::cpu()->r[2];
            r3_2 = guest::cpu()->r[3];
            S0_2 = guest::cpu()->s[0];
            r0_3 = 1u;
        }
        *gptr<u8>(r0 + 0xae5u) = u8(r0_3);  // (from the original)
        r0_4 = r0 + 0x294u;  // (from the original)
        guest::cpu()->s[0] = S0_2;
        call_00568c10(r0_4, r1_3, r2_3, r3_2);
        S0_4 = guest::cpu()->s[0];
        r2_4 = *gptr<u32>(r6_1);
        r0_5 = r0 + 0x294u;  // (from the original)
        guest::cpu()->r[13] += 0x18u;  // (from the original)
        guest::cpu()->s[0] = S0_4;
        return call_00568984(r0_5, r1_1, r2_4, 0u);
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0_1;
}

}  // namespace d_0030af7c
GUEST_EXPORT(0x0030af7c, d_0030af7c::f_0030af7c);

// f_0030b018: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030b018 {

struct __attribute__((packed)) Object_0030b018_0 {
    u8 unknown_0[0x35b4];  // (not used here)
    u8 byte_35b4;
};
GUEST_OFFSET(Object_0030b018_0, byte_35b4, 0x35b4);  // (from the original)

inline guest::global<u32, 0x0030b14c> global_0030b14c;  // (from the original)
inline constexpr guest::Function<0x00305784, u32(u32, u32, u32, u32)> call_00305784;  // (from the original)
inline constexpr guest::Function<0x0030a8f8, u32(u32, u32, u32, u32)> call_0030a8f8;  // (from the original)
inline constexpr guest::Function<0x0030af7c, u32(u32, u32, u32, u32)> call_0030af7c;  // (from the original)
inline constexpr guest::Function<0x0030b4a8, u32(u32, u32, u32, u32)> call_0030b4a8;  // (from the original)
inline constexpr guest::Function<0x0030baa8, u32(u32, u32, u32, u32)> call_0030baa8;  // (from the original)
inline constexpr guest::Function<0x00311228, u32(u32, u32, u32, u32)> call_00311228;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x00569508, u32(u32, u32, u32, u32)> call_00569508;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)
inline constexpr guest::Function<0x0075e650, u32(u32, u32, u32, u32)> call_0075e650;  // (from the original)
inline constexpr guest::Function<0x0075f780, u32(u32, u32, u32, u32)> call_0075f780;  // (from the original)

u32 f_0030b018(gptr<Object_0030b018_0> arg0, float S0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    float S0_1 = 0;
    float S0_2 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    float S0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    float S0_4 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    float S0_5 = 0;
    u32 r1_3 = 0;
    float S0_6 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    float S0_7 = 0;
    u32 r0_9 = 0;
    u32 r1_5 = 0;
    float S0_8 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    arg0->byte_35b4 = u8(0u);
    guest::cpu()->s[0] = S0;
    call_0030a8f8(r5, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0_1 = guest::cpu()->s[0];
    guest::cpu()->s[0] = S0_1;
    call_00305784(r5, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0_2 = guest::cpu()->s[0];
    r0_1 = *gptr<u32>(0x2754u + r5);  // (from the original)
    *gptr<u8>(r0_1 + 0xb7u) = u8(u32(*gptr<u8>(r0_1 + 0xb7u)) & 0xfeu);  // (from the original)
    r0_2 = *gptr<u32>(0x2750u + r5);  // (from the original)
    r1_1 = u32(*gptr<u8>(r0_2 + 0xb7u)) & 0xfeu | 1u;  // (from the original)
    *gptr<u8>(r0_2 + 0xb7u) = u8(r1_1);  // (from the original)
    r0_3 = r5 + 0x4d0u;  // (from the original)
    guest::cpu()->s[0] = S0_2;
    call_00568c10(r0_3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    S0_3 = guest::cpu()->s[0];
    r4 = 0x95362cu;  // (from the original)
    r0_4 = *gptr<u32>(r4) + 0x28ecu;  // (from the original)
    guest::cpu()->s[0] = S0_3;
    r0_5 = call_0075f780(r0_4, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0_4 = guest::cpu()->s[0];
    if (r0_5 == 0) {
        goto L_30b0e0;
    }
    guest::cpu()->s[0] = S0_4;
    call_0030af7c(r5, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
L_30b0a0:;
    r0_6 = *gptr<u32>(r4);
    r4 = 0u;
    r6 = r0_6 + 0x3594u;  // (from the original)
L_30b0b0:;
    guest::cpu()->s[0] = S0;
    r0_7 = call_0075e650(r6, r4, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    if (r0_7 == 0) {
        goto L_30b0f8;
    }
    guest::cpu()->s[0] = S0;
    call_0030b4a8(r5, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0_5 = guest::cpu()->s[0];
    goto L_30b110;
L_30b0e0:;
    guest::cpu()->s[0] = S0_4;
    call_0030af7c(r5, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    guest::preempt();
    goto L_30b0a0;
L_30b0f8:;
    r4 = r4 + 1u;
    if (r4 < 0x20u) {  // (from the original)
        guest::preempt();
        goto L_30b0b0;
    }
    guest::cpu()->s[0] = S0;
    call_0030b4a8(r5, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0_5 = guest::cpu()->s[0];
L_30b110:;
    guest::cpu()->s[0] = S0_5;
    call_0030baa8(r5, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    S0_6 = std::bit_cast<float>(*global_0030b14c);
    r0_8 = r5 + 0x480u;  // (from the original)
    guest::cpu()->s[0] = S0_6;
    call_005697e0(r0_8, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    S0_7 = guest::cpu()->s[0];
    r0_9 = r5 + 0x4a8u;  // (from the original)
    guest::cpu()->s[0] = S0_7;
    call_00569508(r0_9, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    S0_8 = guest::cpu()->s[0];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->s[0] = S0_8;
    return call_00311228(r5, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030b018
GUEST_EXPORT(0x0030b018, d_0030b018::f_0030b018);

// f_0030b150: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030b150 {

inline constexpr guest::Function<0x007685c4, u32(u32, u32, u32, u32)> call_007685c4;  // (from the original)

u32 f_0030b150() {
    return call_007685c4(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030b150
GUEST_EXPORT(0x0030b150, d_0030b150::f_0030b150);

// f_0030b154: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030b154 {

inline constexpr guest::Function<0x006b9904, u32(u32, u32, u32, u32)> call_006b9904;  // (from the original)

u32 f_0030b154() {
    return call_006b9904(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030b154
GUEST_EXPORT(0x0030b154, d_0030b154::f_0030b154);

// f_0030b15c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030b15c {

inline guest::global<u32, 0x0095decc> global_0095decc;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_0030b15c(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r4_1 = 0;
    u32 r0_5 = 0;
    u32 r3_3 = 0;
    u32 res_1 = 0;
    u32 ea_1 = 0;
    u32 r3_4 = 0;
    u32 ea_2 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_5 = 0;
    u32 r0_8 = 0;
    u32 r2_4 = 0;
    u32 r3_6 = 0;
    u32 r0_9 = 0;
    u32 r1_4 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_7 = 0;
    u32 r1_6 = 0;
    u32 r0_10 = 0;
    r13 = r13 - 0x50u;  // (from the original)
    r6 = r0;
    r0_1 = r13 + 8u;
    r1_1 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_003083bc(r0_1, r1_1, 0xfu, r3);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r5 = 0x909af0u;  // (from the original)
    *gptr<u32>(r0_2) = u32(r5);
    r0_3 = r0_2 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_005f4bfc(r0_3, r1_2, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r4_1 = r0_4 - 0xcu;  // (from the original)
    r0_5 = r0_4 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_5, 0x1eu, r2_2, r3_2);  // (from the original)
    r1 = 0x8906ecu;  // (from the original)
    r0 = r4_1 + 0x18u;  // (from the original)
    *gptr<u16>(r4_1 + 0x18u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    r2 = 7u;
    do {
L_30b1a8:;
        r3_3 = u32(*gptr<u16>(r1));
        res_1 = r2 - 1u;
        r2 = res_1;
        ea_1 = r0 + 2u;
        *gptr<u16>(ea_1) = u16(r3_3);
        r3_4 = u32(*gptr<u16>(r1));
        ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    r0_6 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8f8(r0_6, 0u, r2, r3_4);
    *gptr<u32>(r13) = u32(0u);
    r0_7 = *global_0095decc;
    r1_3 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_005ea964(r0_7, r1_3, 0x847ac4u, 0x17au);  // (from the original)
    r2_3 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_8 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8dc(r0_8, 0u, r2_3, r3_5);
    r2_4 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_9 = r6 + 0x27d0u;  // (from the original)
    r1_4 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_005e2e50(r0_9, r1_4, r2_4, r3_6);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_005e2f94(r0_9, r1_5, r2_5, r3_7);
    r1_6 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 8u) = u32(r5);
    r0_10 = r13 + 8u;
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    return r0_10;
}

}  // namespace d_0030b15c
GUEST_EXPORT(0x0030b15c, d_0030b15c::f_0030b15c);

// f_0030b250: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030b250 {

inline constexpr guest::Function<0x0027a48c, u32(u32, u32, u32, u32)> call_0027a48c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> call_00303cdc;  // (from the original)
inline constexpr guest::Function<0x003084d0, u32(u32, u32, u32, u32)> call_003084d0;  // (from the original)

u32 f_0030b250(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r5_1 = 0;
    u32 r1_3 = 0;
    u32 cf_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    call_0027a48c(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r0_1 = r4 + 0x16u;  // (from the original)
    call_003084d0(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r5_1 = r4 + 0x46u;  // (from the original)
    *gptr<u8>(r4 + 0x4eu) = u8(0x21u);  // (from the original)
    call_00303cdc(r5_1, r1_2, r2_2, guest::cpu()->r[3]);
    *gptr<u8>(r5_1 + 9u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r5_1 + 0xau) = u8(9u);  // (from the original)
    r0 = 0u;
    r2 = ~0u;
    do {
L_30b290:;
        r1_3 = r0 & 0xffu;  // (from the original)
        cf_1 = r1_3 >= 3u;
        if (!cf_1) {
            r1_3 = r1_3 + r4;
        }
        r0 = r0 + 1u;
        if (!cf_1) {
            *gptr<u8>(r1_3 + 0x56u) = u8(r2);  // (from the original)
        }
        guest::preempt();
    } while (s32(r0) < s32(3u));
    *gptr<u8>(r4 + 0x5au) = u8(0u);  // (from the original)
    *gptr<u8>(r4 + 0x59u) = u8(0u);  // (from the original)
    *gptr<u8>(r4 + 0x5bu) = u8(0u);  // (from the original)
    r0_2 = r4 + 0x52u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_002fc8e8(r0_2, 0x95bfdcu, r2, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0030b250
GUEST_EXPORT(0x0030b250, d_0030b250::f_0030b250);

// f_0030b36c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030b36c {

struct __attribute__((packed)) Object_0030b36c_0 {
    u8 unknown_0[0x1e];  // (not used here)
    u8 byte_1e;
    u8 byte_1f;
};
GUEST_OFFSET(Object_0030b36c_0, byte_1e, 0x1e);  // (from the original)
GUEST_OFFSET(Object_0030b36c_0, byte_1f, 0x1f);  // (from the original)

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x0030b924, u32(u32, u32, u32, u32)> call_0030b924;  // (from the original)
inline constexpr guest::Function<0x00757620, u32(u32, u32, u32, u32)> call_00757620;  // (from the original)

u32 f_0030b36c(gptr<Object_0030b36c_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 zf_1 = 0;
    u32 zf_2 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = u32(arg0->byte_1e);
    if (r0 >= 0x21u) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    zf_1 = r0 == 0xeu;  // (from the original)
    if (!zf_1) {
        zf_1 = r0 == 0xfu;  // (from the original)
    }
    if (zf_1) {
        goto L_30b3e0;
    }
    zf_2 = r0 == 0x10u;  // (from the original)
    if (!zf_2) {
        zf_2 = r0 == 0x11u;  // (from the original)
    }
    if (!zf_2) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = u32(arg0->byte_1f);
    if (r1 >= 3u) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
L_30b3a4:;
    if (r0 != 0x10u) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
L_30b3ac:;
    r0_1 = call_002fb378(r0, r1, r2, guest::cpu()->r[3]);
    r0_2 = call_00757620(r4, r0_1, 0u, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_2 == 0) {
        r0_3 = u32(*gptr<u8>(r4 + 0x24u)) | 4u;  // (from the original)
        *gptr<u8>(r4 + 0x24u) = u8(r0_3);  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_3;
    }
    guest::cpu()->r[13] += 8u;
    return call_0030b924(r4, 0u, r2_1, guest::cpu()->r[3]);
L_30b3e0:;
    r1 = u32(*gptr<u8>(r4 + 0x1fu));  // (from the original)
    if (r1 >= 2u) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r0 == 0xeu) {  // (from the original)
        guest::preempt();
        goto L_30b3ac;
    }
    guest::preempt();
    goto L_30b3a4;
}

}  // namespace d_0030b36c
GUEST_EXPORT(0x0030b36c, d_0030b36c::f_0030b36c);

// f_0030b410: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030b410 {

inline constexpr guest::Function<0x006b9934, u32(u32, u32, u32, u32)> call_006b9934;  // (from the original)

u32 f_0030b410() {
    return call_006b9934(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030b410
GUEST_EXPORT(0x0030b410, d_0030b410::f_0030b410);

// f_0030b414: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030b414 {

inline constexpr guest::Function<0x0051e7d4, u32(u32, u32, u32, u32)> call_0051e7d4;  // (from the original)

u32 f_0030b414(u32 r0) {
    return call_0051e7d4(0xa82b90u, r0, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0030b414
GUEST_EXPORT(0x0030b414, d_0030b414::f_0030b414);

// f_0030b4a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030b4a8 {

struct __attribute__((packed)) Object_0030b4a8_0 {
    u8 unknown_0[0xbc5];  // (not used here)
    u8 byte_bc5;
    u8 unknown_bc6[0x1ba6];  // (not used here)
    u32 word_276c;
};
GUEST_OFFSET(Object_0030b4a8_0, byte_bc5, 0xbc5);  // (from the original)
GUEST_OFFSET(Object_0030b4a8_0, word_276c, 0x276c);  // (from the original)

inline guest::global<u32, 0x0030b53c> global_0030b53c;  // (from the original)
inline guest::global<u32, 0x0030b540> global_0030b540;  // (from the original)
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)

u32 f_0030b4a8(gptr<Object_0030b4a8_0> arg0, u32 r1, float S0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r6_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    float S0_2 = 0;
    u32 r0_3 = 0;
    float S0_3 = 0;
    u32 r0_4 = 0;
    float S0_4 = 0;
    u32 r2_4 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r0_1 = u32(s32(s8(arg0->byte_bc5)));
    if (r0_1 == r1) {
        r6_1 = r0 + 0x276cu;  // (from the original)
        r1_1 = r0 + 0x458u;  // (from the original)
        r2_1 = arg0->word_276c;
        r0_2 = r0 + 0x294u;  // (from the original)
        guest::cpu()->s[0] = S0;
        call_00568630(r0_2, r1_1, r2_1, 0u);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        if (r1 != 0) {
            S0_1 = std::bit_cast<float>(*global_0030b53c);
            guest::cpu()->s[0] = S0_1;
            call_005697e0(r1_1, r1_2, r2_2, r3_1);
            r1_3 = guest::cpu()->r[1];
            r2_3 = guest::cpu()->r[2];
            r3_2 = guest::cpu()->r[3];
            S0_2 = guest::cpu()->s[0];
            r0_3 = 0u;
        } else {
            S0_3 = std::bit_cast<float>(*global_0030b540);
            guest::cpu()->s[0] = S0_3;
            call_005697e0(r1_1, r1_2, r2_2, r3_1);
            r1_3 = guest::cpu()->r[1];
            r2_3 = guest::cpu()->r[2];
            r3_2 = guest::cpu()->r[3];
            S0_2 = guest::cpu()->s[0];
            r0_3 = 1u;
        }
        *gptr<u8>(r0 + 0xbc5u) = u8(r0_3);  // (from the original)
        r0_4 = r0 + 0x294u;  // (from the original)
        guest::cpu()->s[0] = S0_2;
        call_00568c10(r0_4, r1_3, r2_3, r3_2);
        S0_4 = guest::cpu()->s[0];
        r2_4 = *gptr<u32>(r6_1);
        r0_5 = r0 + 0x294u;  // (from the original)
        guest::cpu()->r[13] += 0x18u;  // (from the original)
        guest::cpu()->s[0] = S0_4;
        return call_00568984(r0_5, r1_1, r2_4, 0u);
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0_1;
}

}  // namespace d_0030b4a8
GUEST_EXPORT(0x0030b4a8, d_0030b4a8::f_0030b4a8);

// f_0030b544: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030b544 {

struct __attribute__((packed)) Object_0030b544_0 {
    u8 unknown_0[0x1e];  // (not used here)
    u8 byte_1e;
    u8 byte_1f;
    u8 unknown_20[0x4];  // (not used here)
    u8 byte_24;
};
GUEST_OFFSET(Object_0030b544_0, byte_1e, 0x1e);  // (from the original)
GUEST_OFFSET(Object_0030b544_0, byte_1f, 0x1f);  // (from the original)
GUEST_OFFSET(Object_0030b544_0, byte_24, 0x24);  // (from the original)


void f_0030b544(gptr<Object_0030b544_0> arg0) {
    u32 r1 = 0;
    u32 zf_1 = 0;
    u32 zf_2 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    r1 = u32(arg0->byte_1e);
    if (r1 >= 0x21u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return;
    }
    zf_1 = r1 == 0xeu;  // (from the original)
    if (!zf_1) {
        zf_1 = r1 == 0xfu;  // (from the original)
    }
    if (zf_1) {
        goto L_30b58c;
    }
    zf_2 = r1 == 0x10u;  // (from the original)
    if (!zf_2) {
        zf_2 = r1 == 0x11u;  // (from the original)
    }
    if (!zf_2) {
        guest::cpu()->r[1] = r1;
        return;
    }
    if (u32(arg0->byte_1f) >= 3u) {
        guest::cpu()->r[1] = r1;
        return;
    }
L_30b574:;
    if (r1 != 0x10u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return;
    }
    r1_1 = u32(arg0->byte_24) & ~4u;
    arg0->byte_24 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return;
L_30b58c:;
    if (u32(arg0->byte_1f) >= 2u) {
        guest::cpu()->r[1] = r1;
        return;
    }
    if (r1 == 0xeu) {  // (from the original)
        r1_2 = u32(arg0->byte_24) & ~4u;
        arg0->byte_24 = u8(r1_2);
        guest::cpu()->r[1] = r1_2;
        return;
    }
    guest::preempt();
    goto L_30b574;
}

}  // namespace d_0030b544
GUEST_EXPORT(0x0030b544, d_0030b544::f_0030b544);

// f_0030b9d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030b9d4 {

inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x00308971, u32(u32, u32, u32, u32)> call_00308970;  // (from the original)
inline constexpr guest::Function<0x00309ef0, u32(u32, u32, u32, u32)> call_00309ef0;  // (from the original)
inline constexpr guest::Function<0x00318d8c, u32(u32, u32, u32, u32)> call_00318d8c;  // (from the original)

u32 f_0030b9d4(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r7_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r5_1 = r1;
    guest::cpu()->r[13] = r13;
    r0_1 = call_00301e20(r1, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        goto L_30ba44;
    }
    if (u32(*gptr<u8>(r0 + 0x1743bu)) >= 4u) {  // (from the original)
        goto L_30ba44;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_00308970(r5_1, r0, 0xau, guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r6 = r0_2;
    if (r0_2 >= 0xau) {  // (from the original)
        goto L_30ba44;
    }
    r5 = 0u;
    r4 = r0 + 0x173ecu;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r4 + 0x46u);  // (from the original)
L_30ba0c:;
    r7_1 = uxtb(r5);
    if (r7_1 >= 3u) {
        goto L_30ba26;
    }
    r0_3 = *gptr<u32>(r13 + 4u);
    *gptr<u32>(r13) = u32(r0_3);
    guest::cpu()->r[13] = r13;
    r0_4 = call_00309ef0(r0_3, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_4 == 0) {
        goto L_30ba26;
    }
    if (u32(*gptr<u8>(*gptr<u32>(r13) + 8u)) == 0x12u) {  // (from the original)
        goto L_30ba34;
    }
L_30ba26:;
    r0 = ~0u;
L_30ba2a:;
    if (r6 != r0) {
        goto L_30ba3e;
    }
    r0_5 = uxtb(r5);
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_5;
L_30ba34:;
    guest::cpu()->r[13] = r13;
    r0 = call_00318d8c(r4, r7_1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    guest::preempt();
    goto L_30ba2a;
L_30ba3e:;
    r5 = r5 + 1u;
    if (s32(r5) < s32(3u)) {
        guest::preempt();
        goto L_30ba0c;
    }
L_30ba44:;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 3u;
}

}  // namespace d_0030b9d4
GUEST_EXPORT(0x0030b9d5, d_0030b9d4::f_0030b9d4);

// f_0030baa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030baa8 {

inline constexpr guest::Function<0x002b6d20, u32(u32, u32, u32, u32)> call_002b6d20;  // (from the original)

u32 f_0030baa8(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r5_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r0_1 = r0 + 0x84cu;  // (from the original)
    r5_1 = r0 + 0x92cu;  // (from the original)
    if (r1 != 0) {
        call_002b6d20(r0_1, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
        *gptr<u8>(r0 + 0x925u) = u8(0u);  // (from the original)
        r0_2 = call_002b6d20(r5_1, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        *gptr<u8>(r0 + 0xa05u) = u8(1u);  // (from the original)
        guest::cpu()->r[13] += 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    call_002b6d20(r0_1, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r0 + 0x925u) = u8(1u);  // (from the original)
    r0_3 = call_002b6d20(r5_1, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    *gptr<u8>(r0 + 0xa05u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0_3;
}

}  // namespace d_0030baa8
GUEST_EXPORT(0x0030baa8, d_0030baa8::f_0030baa8);

// f_0030bb48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030bb48 {

inline constexpr guest::Function<0x006b9d30, u32(u32, u32, u32, u32)> call_006b9d30;  // (from the original)

u32 f_0030bb48() {
    return call_006b9d30(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030bb48
GUEST_EXPORT(0x0030bb48, d_0030bb48::f_0030bb48);

// f_0030bb4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030bb4c {

inline guest::global<u32, 0x0095decc> global_0095decc;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_0030bb4c(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r4_1 = 0;
    u32 r0_5 = 0;
    u32 r3_3 = 0;
    u32 res_1 = 0;
    u32 ea_1 = 0;
    u32 r3_4 = 0;
    u32 ea_2 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_5 = 0;
    u32 r0_8 = 0;
    u32 r2_4 = 0;
    u32 r3_6 = 0;
    u32 r0_9 = 0;
    u32 r1_4 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_7 = 0;
    u32 r1_6 = 0;
    u32 r0_10 = 0;
    r13 = r13 - 0x50u;  // (from the original)
    r6 = r0;
    r0_1 = r13 + 8u;
    r1_1 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_003083bc(r0_1, r1_1, 0xfu, r3);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r5 = 0x909af0u;  // (from the original)
    *gptr<u32>(r0_2) = u32(r5);
    r0_3 = r0_2 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_005f4bfc(r0_3, r1_2, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r4_1 = r0_4 - 0xcu;  // (from the original)
    r0_5 = r0_4 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_5, 0x1eu, r2_2, r3_2);  // (from the original)
    r1 = 0x8906ecu;  // (from the original)
    r0 = r4_1 + 0x18u;  // (from the original)
    *gptr<u16>(r4_1 + 0x18u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    r2 = 7u;
    do {
L_30bb98:;
        r3_3 = u32(*gptr<u16>(r1));
        res_1 = r2 - 1u;
        r2 = res_1;
        ea_1 = r0 + 2u;
        *gptr<u16>(ea_1) = u16(r3_3);
        r3_4 = u32(*gptr<u16>(r1));
        ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    r0_6 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8f8(r0_6, 0u, r2, r3_4);
    *gptr<u32>(r13) = u32(0u);
    r0_7 = *global_0095decc;
    r1_3 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_005ea964(r0_7, r1_3, 0x847ac4u, 0x179u);  // (from the original)
    r2_3 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_8 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8dc(r0_8, 0u, r2_3, r3_5);
    r2_4 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_9 = r6 + 0x2894u;  // (from the original)
    r1_4 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_005e2e50(r0_9, r1_4, r2_4, r3_6);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_005e2f94(r0_9, r1_5, r2_5, r3_7);
    r1_6 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 8u) = u32(r5);
    r0_10 = r13 + 8u;
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    return r0_10;
}

}  // namespace d_0030bb4c
GUEST_EXPORT(0x0030bb4c, d_0030bb4c::f_0030bb4c);

// f_0030bc40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030bc40 {

inline constexpr guest::Function<0x007683cc, u32(u32, u32, u32, u32)> call_007683cc;  // (from the original)

u32 f_0030bc40() {
    return call_007683cc(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030bc40
GUEST_EXPORT(0x0030bc40, d_0030bc40::f_0030bc40);

// f_0030bc44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030bc44 {

inline guest::global<u32, 0x00a83af0> global_00a83af0;  // (from the original)

u32 f_0030bc44(u32 r0) {
    u32 r1_1 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 zf_2 = 0;
    r1_1 = *global_00a83af0;
    zf_1 = r1_1 == 0;
    cf_1 = r1_1 >= 0u;
    if (!zf_1) {
        zf_1 = 0x18fu == r0;  // (from the original)
        cf_1 = 0x18fu >= r0;  // (from the original)
    }
    if (!cf_1 || zf_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    res_1 = r1_1 + (r0 + (r0 << 4) << 1);
    if (res_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    res_2 = u32(*gptr<u8>(res_1 + 0x1cu)) & 0xfu;  // (from the original)
    zf_2 = res_2 == 0;
    if (!zf_2) {
        zf_2 = res_2 == 1u;
    }
    if (!zf_2) {
        zf_2 = res_2 == 2u;
    }
    if (zf_2) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_0030bc44
GUEST_EXPORT(0x0030bc44, d_0030bc44::f_0030bc44);

// f_0030bc90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030bc90 {

struct __attribute__((packed)) Object_0030bc90_1 {
    u8 unknown_0[0x2c];  // (not used here)
    u16 half_2c;
};
GUEST_OFFSET(Object_0030bc90_1, half_2c, 0x2c);  // (from the original)

inline constexpr guest::Function<0x002f777c, u32(u32, u32, u32, u32)> call_002f777c;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x003014b4, u32(u32, u32, u32, u32)> call_003014b4;  // (from the original)
inline constexpr guest::Function<0x00304f30, u32(u32, u32, u32, u32)> call_00304f30;  // (from the original)
inline constexpr guest::Function<0x0030c3e5, u32(u32, u32, u32, u32)> call_0030c3e4;  // (from the original)
inline constexpr guest::Function<0x0030f52c, u32(u32, u32, u32, u32)> call_0030f52c;  // (from the original)
inline constexpr guest::Function<0x0030f56c, u32(u32, u32, u32, u32)> call_0030f56c;  // (from the original)
inline constexpr guest::Function<0x0030f588, u32(u32, u32, u32, u32)> call_0030f588;  // (from the original)
inline constexpr guest::Function<0x0030f594, u32(u32, u32, u32, u32)> call_0030f594;  // (from the original)
inline constexpr guest::Function<0x00406448, u32(u32, u32, u32, u32)> call_00406448;  // (from the original)
inline constexpr guest::Function<0x0040644c, u32(u32, u32, u32, u32)> call_0040644c;  // (from the original)
inline constexpr guest::Function<0x005b7418, u32(u32, u32, u32, u32)> call_005b7418;  // (from the original)
inline constexpr guest::Function<0x005b8188, u32(u32, u32, u32, u32)> call_005b8188;  // (from the original)
inline constexpr guest::Function<0x005b81b8, u32(u32, u32, u32, u32)> call_005b81b8;  // (from the original)
inline constexpr guest::Function<0x005b81fc, u32(u32, u32, u32, u32)> call_005b81fc;  // (from the original)

u32 f_0030bc90(u32 r0, gptr<Object_0030bc90_1> arg1, u32 r2, u32 r3) {
    u32 sco = 0;
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r4_1 = 0;
    u32 res_1 = 0;
    u32 r1_1 = 0;
    u32 cf_1 = 0;
    u32 res_2 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r1_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r4_2 = 0;
    u32 r0_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_5 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_5 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r1_6 = 0;
    u32 r0_6 = 0;
    u32 r1_7 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_7 = 0;
    u32 r3_7 = 0;
    u32 r1_8 = 0;
    u32 r2_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r1_9 = 0;
    u32 r0_10 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_11 = 0;
    u32 r1_10 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r1_11 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_12 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r2_13 = 0;
    u32 r0_18 = 0;
    u32 r2_14 = 0;
    u32 r3_13 = 0;
    u32 r1_13 = 0;
    u32 r0_19 = 0;
    u32 r1_14 = 0;
    u32 r0_20 = 0;
    u32 r1_15 = 0;
    u32 r2_15 = 0;
    u32 r3_14 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r1_16 = 0;
    u32 r4_3 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 tpc_1 = 0;
    ea_1 = r13 - 0x24;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r3);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r4);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x20) = u32(r14);  // (from the original)
    r13 = ea_1 - 0x14u;  // (from the original)
    r4_1 = arg1->half_2c;
    res_1 = *gptr<u32>(r13 + 0x14u) + 0x1972eu;  // (from the original)
    if (res_1 == 0) {
        goto L_30bcbe;
    }
    r2 = 0x18fu;  // (from the original)
    if (r4_1 >= r2) {
        goto L_30bcbe;
    }
    r1_1 = r4_1 >> 3;
    r2 = r4_1 << 0x1d >> 0x1d;  // (from the original)
    cf_1 = r1_1 >= 0x32u;  // (from the original)
    if (cf_1) {
        goto L_30bcbe;
    }
    sco = cf_1;
    res_2 = lsr_rc(u32(*gptr<u8>(res_1 + r1_1)), r2 & 0xff, &sco);  // (from the original)
    r1_2 = res_2 << 0x1f >> 0x1f;  // (from the original)
    goto L_30bcc0;
L_30bcbe:;
    r1_2 = 0u;
L_30bcc0:;
    r1_3 = r1_2 ^ 1u;
    guest::cpu()->r[13] = r13;
    call_005b81b8(r1, r1_3, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_1 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030c3e4(r0_1, r4_1, r2_1, r3_1);
    r1_4 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r4_2 = r1 + (0x25u << 8);  // (from the original)
    *gptr<u8>(r4_2 + 8u) = u8(r3);
    *gptr<u8>(r4_2 + 0xeu) = u8(1u);  // (from the original)
    r0_2 = *gptr<u32>(r4_2 + 0x10u) & ~1u;  // (from the original)
    *gptr<u32>(r4_2 + 0x10u) = u32(r0_2 | 2u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005b8188(r1, r1_4, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_3 = r1 + (0x45u << 5);  // (from the original)
    *gptr<u8>(r4_2 + 0xfu) = u8(2u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_0030f52c(r0_3, r1, r2_3, r3_3);
    r1_5 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_5 = call_002fb328(r0_4, r1_5, r2_4, r3_4);
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r1_6 = r0_5 + 0x621b8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_0030f52c(r1, r1_6, r2_5, r3_5);
    r1_7 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_7 = call_002fb378(r0_6, r1_7, r2_6, r3_6);
    r3_7 = guest::cpu()->r[3];
    r1_8 = *gptr<u32>(r0_7);
    r2_7 = *gptr<u32>(r0_7 + 4u);
    r0_8 = *gptr<u32>(r0_7 + 8u);
    *gptr<u32>(r13) = u32(r1_8);
    *gptr<u32>(r13 + 8u) = u32(r0_8);
    r0_9 = r13;
    *gptr<u32>(r13 + 4u) = u32(r2_7);
    guest::cpu()->r[13] = r13;
    call_003014b4(r0_9, 1u, r2_7, r3_7);
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r1_9 = r13;
    r0_10 = r1 + 0x250au;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030f56c(r0_10, r1_9, r2_8, r3_8);
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_11 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030f588(r0_11, r1, r2_9, r3_9);
    r1_10 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_12 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_13 = call_0030f594(r0_12, r1_10, r2_10, r3_10);
    r1_11 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    if (r0_13 != 0) {
        r0_14 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_15 = call_00406448(r0_14, r1_11, r2_11, r3_11);
        r1_12 = guest::cpu()->r[1];
        r2_12 = guest::cpu()->r[2];
        r3_12 = guest::cpu()->r[3];
        r0_16 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_17 = call_0040644c(r0_16, r1_12, r2_12, r3_12);
        r2_13 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
        r0_18 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00304f30(r0_18, r0_17, r2_13, r0_15);
        r2_14 = guest::cpu()->r[2];
        r3_13 = guest::cpu()->r[3];
        r1_13 = r13 + 0xcu;  // (from the original)
        r0_19 = r1 + 0x249au;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r0_19, r1_13, r2_14, r3_13);
        r2_11 = guest::cpu()->r[2];
        r3_11 = guest::cpu()->r[3];
    }
    r1_14 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    r0_20 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005b7418(r0_20, r1_14, r2_11, r3_11);
    r1_15 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    if (r3 == 2u) {
        guest::cpu()->r[13] = r13;
        call_005b81fc(r1, r1_15, r2_15, r3_14);
        r1_15 = guest::cpu()->r[1];
        r2_15 = guest::cpu()->r[2];
        r3_14 = guest::cpu()->r[3];
    }
    r0_21 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_22 = call_002f777c(r0_21, r1_15, r2_15, r3_14);
    r1_16 = guest::cpu()->r[1];
    r13 = r13 + 0x24u;  // (from the original)
    r4_3 = *gptr<u32>(r13);
    r5_1 = *gptr<u32>(r13 + 4);
    r6_1 = *gptr<u32>(r13 + 8);
    r7_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1_16;
    guest::cpu()->r[4] = r4_3;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
    return r0_22;
}

}  // namespace d_0030bc90
GUEST_EXPORT(0x0030bc91, d_0030bc90::f_0030bc90);

// f_0030bd94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030bd94 {

inline constexpr guest::Function<0x0057b498, u32(u32, u32, u32, u32)> call_0057b498;  // (from the original)

u32 f_0030bd94() {
    return call_0057b498(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030bd94
GUEST_EXPORT(0x0030bd94, d_0030bd94::f_0030bd94);

// f_0030bd9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030bd9c {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x002f9bdc, u32(u32, u32, u32, u32)> call_002f9bdc;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> call_002fbd54;  // (from the original)
inline constexpr guest::Function<0x00301df4, u32(u32, u32, u32, u32)> call_00301df4;  // (from the original)
inline constexpr guest::Function<0x00301e6c, u32(u32, u32, u32, u32)> call_00301e6c;  // (from the original)
inline constexpr guest::Function<0x00308380, u32(u32, u32, u32, u32)> call_00308380;  // (from the original)
inline constexpr guest::Function<0x00308d4d, u32(u32, u32, u32, u32)> call_00308d4c;  // (from the original)
inline constexpr guest::Function<0x0030f52c, u32(u32, u32, u32, u32)> call_0030f52c;  // (from the original)
inline constexpr guest::Function<0x0030f56c, u32(u32, u32, u32, u32)> call_0030f56c;  // (from the original)
inline constexpr guest::Function<0x00311744, u32(u32, u32, u32, u32)> call_00311744;  // (from the original)
inline constexpr guest::Function<0x003122bd, u32(u32, u32, u32, u32)> call_003122bc;  // (from the original)

u32 f_0030bd9c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 sco = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r4_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r1_4 = 0;
    u32 r0_3 = 0;
    u32 r1_5 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    u32 r1_6 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_7 = 0;
    u32 r2_6 = 0;
    u32 r3_5 = 0;
    u32 r1_8 = 0;
    u32 r2_7 = 0;
    u32 r3_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r2_8 = 0;
    u32 r3_7 = 0;
    u32 r0_9 = 0;
    u32 r1_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r4_2 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 cf_1 = 0;
    u32 res_1 = 0;
    u32 r4_3 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 tpc_1 = 0;
    ea_1 = r13 - 0x24;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r3);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r4);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x20) = u32(r14);  // (from the original)
    r13 = ea_1 - 0xcu;  // (from the original)
    r4_1 = r2;
    r7 = r0;
    guest::cpu()->r[13] = r13;
    call_00308d4c(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r1_1 = *gptr<u16>(r13 + 0x10u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00311744(0xa8349cu, r1_1, r2_1, r3_1);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r1_2 = *gptr<u16>(r13 + 0x10u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_00301e6c(0xa83aecu, r1_2, r2_2, r3_2);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        goto L_30be6c;
    }
    if (r0_2 == 0) {
        goto L_30be6c;
    }
    r2_3 = r13;
    *gptr<u8>(r13) = u8(u32(*gptr<u8>(r0_2 + 0x1cu)) >> 4);  // (from the original)
    r1_4 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_00308380(r7, r1_4, r2_3, r3);
    r1_5 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r4_1 != 2u) {
        guest::cpu()->r[13] = r13;
        r0_4 = call_002fb328(r0_3, r1_5, r2_4, r3_3);
        r2_5 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        r1_6 = r0_4 + 0x621b8u;  // (from the original)
        r0_5 = r7 + (0x45u << 5);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0030f52c(r0_5, r1_6, r2_5, r3_4);
        r3_3 = guest::cpu()->r[3];
    }
    r0_6 = r7 + 0x249au;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f8574(r0_6, r0_1, 0x58u, r3_3);  // (from the original)
    r1_7 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_002f9bdc(r0_6, r1_7, r2_6, r3_5);
    r1_8 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_7 = 0x25u << 8;  // (from the original)
    r6 = r7 + r0_7;
    *gptr<u8>(r6 + 8u) = u8(r4_1);
    guest::cpu()->r[13] = r13;
    r0_8 = call_002fb378(r0_7, r1_8, r2_7, r3_6);
    r2_8 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_9 = r7 + 0x250au;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030f56c(r0_9, r0_8, r2_8, r3_7);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1_9 = 0x78u;  // (from the original)
    r0_10 = *gptr<u32>(r6 + 0x10u) & ~r1_9;  // (from the original)
    *gptr<u32>(r6 + 0x10u) = u32(r0_10);  // (from the original)
    if (r4_1 != 0) {
        goto L_30be66;
    }
    guest::cpu()->r[13] = r13;
    r0_11 = call_002fb328(r0_10, r1_9, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0u;
    *gptr<u32>(r13 + 4u) = u32(r0_11 + 0xa0u);  // (from the original)
L_30be34:;
    r4_2 = uxtb(r5);
    r0_12 = *gptr<u32>(r13 + 4u);
    guest::cpu()->r[13] = r13;
    r0_13 = call_00301df4(r0_12, r4_2, r2, r3);
    r1_9 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_13 == 0) {
        goto L_30be60;
    }
    r0_14 = r0_13 + 0x55a6u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_15 = call_002fbd54(r0_14, 0x55a6u, r2, r3);  // (from the original)
    r1_9 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_15 == 0) {
        goto L_30be60;
    }
    cf_1 = r4_2 >= 4u;
    if (cf_1) {
        goto L_30be60;
    }
    sco = cf_1;
    res_1 = lsl_rc(1u, r4_2 & 0xff, &sco);  // (from the original)
    r1_9 = res_1 << 0x1c >> 0x19;  // (from the original)
    *gptr<u32>(r6 + 0x10u) = u32(*gptr<u32>(r6 + 0x10u) | r1_9);  // (from the original)
L_30be60:;
    r5 = r5 + 1u;
    if (s32(r5) < s32(4u)) {
        guest::preempt();
        goto L_30be34;
    }
L_30be66:;
    guest::cpu()->r[13] = r13;
    r0_2 = call_003122bc(r7, r1_9, r2, r3);
    r1_3 = guest::cpu()->r[1];
L_30be6c:;
    r13 = r13 + 0x1cu;  // (from the original)
    r4_3 = *gptr<u32>(r13);
    r5_1 = *gptr<u32>(r13 + 4);
    r6_1 = *gptr<u32>(r13 + 8);
    r7_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[4] = r4_3;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_0030bd9c
GUEST_EXPORT(0x0030bd9d, d_0030bd9c::f_0030bd9c);

// f_0030be90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030be90 {

inline constexpr guest::Function<0x006ab5b8, u32(u32, u32, u32, u32)> call_006ab5b8;  // (from the original)

u32 f_0030be90() {
    return call_006ab5b8(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030be90
GUEST_EXPORT(0x0030be90, d_0030be90::f_0030be90);

// f_0030be94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030be94 {

inline constexpr guest::Function<0x006515ec, u32(u32, u32, u32, u32)> call_006515ec;  // (from the original)

u32 f_0030be94() {
    return call_006515ec(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030be94
GUEST_EXPORT(0x0030be94, d_0030be94::f_0030be94);

// f_0030bec8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030bec8 {

inline constexpr guest::Function<0x0068a3fc, u32(u32, u32, u32, u32)> call_0068a3fc;  // (from the original)

u32 f_0030bec8() {
    return call_0068a3fc(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030bec8
GUEST_EXPORT(0x0030bec8, d_0030bec8::f_0030bec8);

// f_0030c09c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c09c {

inline constexpr guest::Function<0x00651600, u32(u32, u32, u32, u32)> call_00651600;  // (from the original)

u32 f_0030c09c() {
    return call_00651600(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c09c
GUEST_EXPORT(0x0030c09c, d_0030c09c::f_0030c09c);

// f_0030c0a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c0a4 {

inline constexpr guest::Function<0x005c167c, u32(u32, u32, u32, u32)> call_005c167c;  // (from the original)

u32 f_0030c0a4() {
    return call_005c167c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c0a4
GUEST_EXPORT(0x0030c0a4, d_0030c0a4::f_0030c0a4);

// f_0030c0a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c0a8 {

inline constexpr guest::Function<0x006733b0, u32(u32, u32, u32, u32)> call_006733b0;  // (from the original)

u32 f_0030c0a8() {
    return call_006733b0(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c0a8
GUEST_EXPORT(0x0030c0a8, d_0030c0a8::f_0030c0a8);

// f_0030c0ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c0ac {

inline constexpr guest::Function<0x0075d0f0, u32(u32, u32, u32, u32)> call_0075d0f0;  // (from the original)

u32 f_0030c0ac() {
    return call_0075d0f0(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c0ac
GUEST_EXPORT(0x0030c0ac, d_0030c0ac::f_0030c0ac);

// f_0030c0b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c0b0 {

inline constexpr guest::Function<0x006021d0, u32(u32, u32, u32, u32)> call_006021d0;  // (from the original)

u32 f_0030c0b0() {
    return call_006021d0(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c0b0
GUEST_EXPORT(0x0030c0b0, d_0030c0b0::f_0030c0b0);

// f_0030c0c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c0c0 {

inline constexpr guest::Function<0x00602144, u32(u32, u32, u32, u32)> call_00602144;  // (from the original)

u32 f_0030c0c0() {
    return call_00602144(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c0c0
GUEST_EXPORT(0x0030c0c0, d_0030c0c0::f_0030c0c0);

// f_0030c0c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c0c4 {

inline constexpr guest::Function<0x00602938, u32(u32, u32, u32, u32)> call_00602938;  // (from the original)

u32 f_0030c0c4() {
    return call_00602938(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c0c4
GUEST_EXPORT(0x0030c0c4, d_0030c0c4::f_0030c0c4);

// f_0030c0cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c0cc {

inline constexpr guest::Function<0x002fe450, u32(u32, u32, u32, u32)> call_002fe450;  // (from the original)
inline constexpr guest::Function<0x002fe470, u32(u32, u32, u32, u32)> call_002fe470;  // (from the original)
inline constexpr guest::Function<0x00309865, u32(u32, u32, u32, u32)> call_00309864;  // (from the original)
inline constexpr guest::Function<0x00309904, u32(u32, u32, u32, u32)> call_00309904;  // (from the original)
inline constexpr guest::Function<0x00309ccc, u32(u32, u32, u32, u32)> call_00309ccc;  // (from the original)
inline constexpr guest::Function<0x0030e5cc, u32(u32, u32, u32, u32)> call_0030e5cc;  // (from the original)

u32 f_0030c0cc(u32 r0, u32 r1, u32 r2) {
    u32 sco = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 res_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 res_2 = 0;
    u32 r0_6 = 0;
    u32 cf_1 = 0;
    u32 res_3 = 0;
    u32 r1_1 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 cf_2 = 0;
    u32 res_4 = 0;
    u32 r0_9 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 tpc_1 = 0;
    ea_1 = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r4);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r14);  // (from the original)
    r13 = ea_1 - 8u;
    r6 = r1;
    r0_1 = *gptr<u32>(r13 + 8u);
    r7 = r2;
    guest::cpu()->r[13] = r13;
    r0_2 = call_00309864(r0_1, 0u, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r5 = 0u;
    *gptr<u32>(r13 + 4u) = u32(r0_2);
L_30c0e0:;
    r0_3 = *gptr<u32>(r13 + 8u);
    if (r5 >= 0xau) {  // (from the original)
        goto L_30c130;
    }
    r2 = 0x2518u;  // (from the original)
    r1 = r5 * r2;
    res_1 = r1 + r0_3;
    r4 = res_1;
    if (res_1 == 0) {
        goto L_30c11c;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_002fe470(r4, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_4 == 0) {
        goto L_30c11c;
    }
L_30c0fa:;
    if (r4 == 0) {
        goto L_30c11c;
    }
    if (r5 == *gptr<u32>(r13 + 4u)) {
        goto L_30c11c;
    }
    guest::cpu()->r[13] = r13;
    r0_5 = call_00309ccc(r5, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_5 >> 0x1f == (r0_5 & (r0_5 ^ r0_5)) >> 0x1f) {  // (from the original)
        goto L_30c11c;
    }
    res_2 = *gptr<u32>(r4 + (0x25u << 8) + 0x10u) << 0x1f >> 0x1f;  // (from the original)
    if (res_2 == 0) {
        goto L_30c134;
    }
L_30c11c:;
    r0_6 = *gptr<u32>(r6);
    cf_1 = r0_6 >= r5;
    if (!cf_1 || r0_6 == r5) {
        goto L_30c188;
    }
    r0_6 = *gptr<u32>(r6 + 4u);
    sco = cf_1;
    res_3 = lsl_rc(1u, r5 & 0xff, &sco);  // (from the original)
    r1 = res_3;
    r2 = r0_6;
    if ((r2 & r1) != 0) {
        goto L_30c16c;
    }
    goto L_30c188;
L_30c130:;
    r4 = 0u;
    guest::preempt();
    goto L_30c0fa;
L_30c134:;
    guest::cpu()->r[13] = r13;
    r0_6 = call_002fe450(r5, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r13) = u32(r0_6);
    if (r0_6 == 0) {
        goto L_30c188;
    }
    if (r7 >> 0x1f != (r7 & (r7 ^ r7)) >> 0x1f) {  // (from the original)
        goto L_30c17e;
    }
    r4 = 0u;
L_30c146:;
    if (r4 == r7) {
        goto L_30c178;
    }
    r1_1 = uxtb(r4 + 9u);
    r0_7 = *gptr<u32>(r13);
    guest::cpu()->r[13] = r13;
    r0_8 = call_0030e5cc(r0_7, r1_1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_8 == 0) {
        goto L_30c178;
    }
    r0_6 = *gptr<u32>(r6);
    cf_2 = r0_6 >= r5;
    if (!cf_2 || r0_6 == r5) {
        goto L_30c188;
    }
    r0_6 = *gptr<u32>(r6 + 4u);
    sco = cf_2;
    res_4 = lsl_rc(1u, r5 & 0xff, &sco);  // (from the original)
    r1 = res_4;
    r2 = r0_6;
    if ((r2 & r1) == 0) {
        goto L_30c188;
    }
L_30c16c:;
    r0_6 = r0_6 & ~r1;
    r1 = *gptr<u32>(r6 + 8u) - 1u;
    *gptr<u32>(r6 + 8u) = u32(r1);
    *gptr<u32>(r6 + 4u) = u32(r0_6);
    goto L_30c188;
L_30c178:;
    r4 = r4 + 1u;
    if (r4 < 2u) {
        guest::preempt();
        goto L_30c146;
    }
L_30c17e:;
    r0_9 = *gptr<u32>(r13);
    guest::cpu()->r[13] = r13;
    r0_6 = call_00309904(r0_9, 8u, 1u, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
L_30c188:;
    r5 = r5 + 1u;
    if (s32(r5) < s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_30c0e0;
    }
    r13 = r13 + 0x14u;  // (from the original)
    r4_1 = *gptr<u32>(r13);
    r5_1 = *gptr<u32>(r13 + 4);
    r6_1 = *gptr<u32>(r13 + 8);
    r7_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
    return r0_6;
}

}  // namespace d_0030c0cc
GUEST_EXPORT(0x0030c0cd, d_0030c0cc::f_0030c0cc);

// f_0030c198: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c198 {

inline constexpr guest::Function<0x005cdde8, u32(u32, u32, u32, u32)> call_005cdde8;  // (from the original)

u32 f_0030c198() {
    return call_005cdde8(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c198
GUEST_EXPORT(0x0030c198, d_0030c198::f_0030c198);

// f_0030c19c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c19c {

inline constexpr guest::Function<0x007595bc, u32(u32, u32, u32, u32)> call_007595bc;  // (from the original)

u32 f_0030c19c() {
    return call_007595bc(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c19c
GUEST_EXPORT(0x0030c19c, d_0030c19c::f_0030c19c);

// f_0030c1a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c1a4 {

inline constexpr guest::Function<0x005e1974, u32(u32, u32, u32, u32)> call_005e1974;  // (from the original)

u32 f_0030c1a4() {
    return call_005e1974(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c1a4
GUEST_EXPORT(0x0030c1a4, d_0030c1a4::f_0030c1a4);

// f_0030c1ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c1ac {

inline constexpr guest::Function<0x0062f03c, u32(u32, u32, u32, u32)> call_0062f03c;  // (from the original)

u32 f_0030c1ac() {
    return call_0062f03c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c1ac
GUEST_EXPORT(0x0030c1ac, d_0030c1ac::f_0030c1ac);

// f_0030c39c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c39c {

inline constexpr guest::Function<0x005b59c4, u32(u32, u32, u32, u32)> call_005b59c4;  // (from the original)

u32 f_0030c39c() {
    return call_005b59c4(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c39c
GUEST_EXPORT(0x0030c39c, d_0030c39c::f_0030c39c);

// f_0030c3a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c3a8 {

inline constexpr guest::Function<0x006f9638, u32(u32, u32, u32, u32)> call_006f9638;  // (from the original)

u32 f_0030c3a8() {
    return call_006f9638(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c3a8
GUEST_EXPORT(0x0030c3a8, d_0030c3a8::f_0030c3a8);

// f_0030c3ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c3ac {

inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> call_005c33cc;  // (from the original)

u32 f_0030c3ac() {
    return call_005c33cc(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c3ac
GUEST_EXPORT(0x0030c3ac, d_0030c3ac::f_0030c3ac);

// f_0030c3b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c3b0 {

inline constexpr guest::Function<0x00752914, u32(u32, u32, u32, u32)> call_00752914;  // (from the original)

u32 f_0030c3b0() {
    return call_00752914(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c3b0
GUEST_EXPORT(0x0030c3b0, d_0030c3b0::f_0030c3b0);

// f_0030c3b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c3b4 {

inline constexpr guest::Function<0x00605628, u32(u32, u32, u32, u32)> call_00605628;  // (from the original)

u32 f_0030c3b4() {
    return call_00605628(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c3b4
GUEST_EXPORT(0x0030c3b4, d_0030c3b4::f_0030c3b4);

// f_0030c3bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c3bc {

inline constexpr guest::Function<0x005dd69c, u32(u32, u32, u32, u32)> call_005dd69c;  // (from the original)

u32 f_0030c3bc() {
    return call_005dd69c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c3bc
GUEST_EXPORT(0x0030c3bc, d_0030c3bc::f_0030c3bc);

// f_0030c3c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c3c4 {

inline constexpr guest::Function<0x00765fa8, u32(u32, u32, u32, u32)> call_00765fa8;  // (from the original)

u32 f_0030c3c4() {
    return call_00765fa8(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c3c4
GUEST_EXPORT(0x0030c3c4, d_0030c3c4::f_0030c3c4);

// f_0030c3cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c3cc {

inline constexpr guest::Function<0x0060e77c, u32(u32, u32, u32, u32)> call_0060e77c;  // (from the original)

u32 f_0030c3cc() {
    return call_0060e77c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c3cc
GUEST_EXPORT(0x0030c3cc, d_0030c3cc::f_0030c3cc);

// f_0030c3e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c3e4 {


u32 f_0030c3e4(u32 r0, u32 r1) {
    u32 sco = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r2_2 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r1_2 = 0;
    u32 r4_2 = 0;
    u32 r5_2 = 0;
    if (r1 >= 0x18fu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r2_1 = r1 >> 3;
    ea_1 = r13 - 8;
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    r13 = ea_1;
    r1_1 = r1 << 0x1d >> 0x1d;  // (from the original)
    if (r2_1 >= 0x32u) {  // (from the original)
        r4_1 = *gptr<u32>(r13);
        r5_1 = *gptr<u32>(r13 + 4);
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r2_2 = r0 + r2_1;
    res_1 = r2_2 + 0x196e0u;  // (from the original)
    sco = u32(res_1 < r2_2);
    res_2 = lsl_rc(1u, r1_1 & 0xff, &sco);  // (from the original)
    r1_2 = r2_2 + 0x19720u;  // (from the original)
    *gptr<u8>(res_1 + 0x1cu) = u8(u32(*gptr<u8>(res_1 + 0x1cu)) | res_2);  // (from the original)
    *gptr<u8>(r1_2 + 0xeu) = u8(u32(*gptr<u8>(r1_2 + 0xeu)) | res_2);  // (from the original)
    r4_2 = *gptr<u32>(r13);
    r5_2 = *gptr<u32>(r13 + 4);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[13] = r13;
    return res_2;
}

}  // namespace d_0030c3e4
GUEST_EXPORT(0x0030c3e5, d_0030c3e4::f_0030c3e4);

// f_0030c4bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c4bc {

inline constexpr guest::Function<0x007ce640, u32(u32, u32, u32, u32)> call_007ce640;  // (from the original)

u32 f_0030c4bc() {
    return call_007ce640(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c4bc
GUEST_EXPORT(0x0030c4bc, d_0030c4bc::f_0030c4bc);

// f_0030c4c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c4c0 {

inline constexpr guest::Function<0x007ce7f0, u32(u32, u32, u32, u32)> call_007ce7f0;  // (from the original)

u32 f_0030c4c0() {
    return call_007ce7f0(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c4c0
GUEST_EXPORT(0x0030c4c0, d_0030c4c0::f_0030c4c0);

// f_0030c4c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c4c4 {

inline constexpr guest::Function<0x007d1e64, u32(u32, u32, u32, u32)> call_007d1e64;  // (from the original)

u32 f_0030c4c4() {
    return call_007d1e64(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c4c4
GUEST_EXPORT(0x0030c4c4, d_0030c4c4::f_0030c4c4);

// f_0030c4cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c4cc {

inline constexpr guest::Function<0x006a6dbc, u32(u32, u32, u32, u32)> call_006a6dbc;  // (from the original)

u32 f_0030c4cc() {
    return call_006a6dbc(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c4cc
GUEST_EXPORT(0x0030c4cc, d_0030c4cc::f_0030c4cc);

// f_0030c4d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c4d0 {

inline constexpr guest::Function<0x0030b250, u32(u32, u32, u32, u32)> call_0030b250;  // (from the original)

u32 f_0030c4d0(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    call_0030b250(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r0 + 0x59u) = u8(0xfeu);  // (from the original)
    *gptr<u8>(r0 + 0x4fu) = u8(5u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0xfeu;  // (from the original)
    return 5u;
}

}  // namespace d_0030c4d0
GUEST_EXPORT(0x0030c4d0, d_0030c4d0::f_0030c4d0);

// f_0030c4f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c4f0 {

inline constexpr guest::Function<0x00695584, u32(u32, u32, u32, u32)> call_00695584;  // (from the original)

u32 f_0030c4f0() {
    return call_00695584(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c4f0
GUEST_EXPORT(0x0030c4f0, d_0030c4f0::f_0030c4f0);

// f_0030c4f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c4f4 {

inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> call_00303cdc;  // (from the original)
inline constexpr guest::Function<0x003084d0, u32(u32, u32, u32, u32)> call_003084d0;  // (from the original)

u32 f_0030c4f4(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 res_1 = 0;
    u32 r0_2 = 0;
    *gptr<u32>(r13 + 0xffffffd8u) = u32(r0);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r7 = 0u;
    r9 = 0x21u;  // (from the original)
    r10 = 0xffu;  // (from the original)
    r11 = 9u;
    r8 = ~0u;
L_30c50c:;
    r5 = 0u;
    r6 = *gptr<u32>(r13) + (r7 << 7);
    do {
L_30c518:;
        r4_1 = r6 + (r5 << 6);
        *gptr<u8>(r4_1 + 8u) = u8(r9);
        guest::cpu()->r[13] = r13;
        call_00303cdc(r4_1, guest::cpu()->r[1], guest::cpu()->r[2], r3);
        r3_1 = guest::cpu()->r[3];
        *gptr<u8>(r4_1 + 9u) = u8(r10);
        r0_1 = r4_1 + 0xcu;  // (from the original)
        *gptr<u8>(r4_1 + 0xau) = u8(r11);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_003084d0(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], r3_1);
        r3 = guest::cpu()->r[3];
        *gptr<u8>(r4_1 + 0x3du) = u8(r8);  // (from the original)
        r5 = r5 + 1u;
        *gptr<u8>(r4_1 + 0x3cu) = u8(r8);  // (from the original)
        res_1 = r5 - 2u;
        *gptr<u8>(r4_1 + 0x3eu) = u8(0xeu);  // (from the original)
        guest::preempt();
    } while (res_1 >> 0x1f != ((r5 ^ 2u) & (r5 ^ res_1)) >> 0x1f);  // (from the original)
    r7 = r7 + 1u;
    if (s32(r7) < s32(4u)) {
        guest::preempt();
        goto L_30c50c;
    }
    r0_2 = *gptr<u32>(r13);
    *gptr<u8>(r0_2 + 0x200u) = u8(r8);  // (from the original)
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_0030c4f4
GUEST_EXPORT(0x0030c4f4, d_0030c4f4::f_0030c4f4);

// f_0030c578: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c578 {

struct __attribute__((packed)) Object_0030c578_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u8 unknown_a[0x1];  // (not used here)
    u8 byte_b;
};
GUEST_OFFSET(Object_0030c578_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0030c578_0, byte_9, 0x9);  // (from the original)
GUEST_OFFSET(Object_0030c578_0, byte_b, 0xb);  // (from the original)


void f_0030c578(gptr<Object_0030c578_0> arg0) {
    arg0->byte_8 = u8(0x21u);  // (from the original)
    arg0->byte_9 = u8(1u);
    arg0->byte_b = u8(0xffu);  // (from the original)
    guest::cpu()->r[1] = 0xffu;  // (from the original)
    return;
}

}  // namespace d_0030c578
GUEST_EXPORT(0x0030c578, d_0030c578::f_0030c578);

// f_0030c598: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c598 {


void f_0030c598(u32 r0) {
    u32 r1 = 0;
    u32 r3 = 0;
    u32 r4_1 = 0;
    u32 r4_2 = 0;
    u32 r5_1 = 0;
    u32 res_1 = 0;
    r1 = 0u;
    r3 = r1;
    guest::cpu()->r[13] -= 8u;
    do {
L_30c59e:;
        r4_1 = r1;
        r1 = r1 + 1u;
        r4_2 = r4_1 * 0xcu;  // (from the original)
        r5_1 = r4_2 + r0;
        *gptr<u32>(r0 + r4_2) = u32(r3);
        *gptr<u32>(r5_1 + 4u) = u32(r3);
        *gptr<u16>(r5_1 + 8u) = u16(r3);
        *gptr<u8>(r5_1 + 0xau) = u8(r3);  // (from the original)
        res_1 = r1 - 0x10u;  // (from the original)
        *gptr<u8>(r5_1 + 0xbu) = u8(r3);  // (from the original)
        guest::preempt();
    } while (res_1 >> 0x1f != ((r1 ^ 0x10u) & (r1 ^ res_1)) >> 0x1f);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0030c598
GUEST_EXPORT(0x0030c599, d_0030c598::f_0030c598);

// f_0030c824: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c824 {

inline constexpr guest::Function<0x001193d1, u32(u32, u32, u32, u32)> call_001193d0;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)

u32 f_0030c824(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_002fae84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_2 = call_002fb310(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = u32(*gptr<u16>(r0 + 0x2cu));  // (from the original)
    r0_3 = r0_2 + 4u;
    r0_4 = call_001193d0(r0_3, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    if (r0_4 >= 0xau) {  // (from the original)
        r0_5 = 0u;
    } else {
        r1_3 = 0xa82b90u + 0xc8u;  // (from the original)
        r0_5 = r1_3 + (r0_4 + (r0_4 << 2) << 4);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return r0_5;
}

}  // namespace d_0030c824
GUEST_EXPORT(0x0030c824, d_0030c824::f_0030c824);

// f_0030c9e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c9e0 {

inline constexpr guest::Function<0x00815500, u32(u32, u32, u32, u32)> call_00815500;  // (from the original)

u32 f_0030c9e0() {
    return call_00815500(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c9e0
GUEST_EXPORT(0x0030c9e0, d_0030c9e0::f_0030c9e0);

// f_0030c9e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c9e4 {

inline constexpr guest::Function<0x0081533c, u32(u32, u32, u32, u32)> call_0081533c;  // (from the original)

u32 f_0030c9e4() {
    return call_0081533c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c9e4
GUEST_EXPORT(0x0030c9e4, d_0030c9e4::f_0030c9e4);

// f_0030c9e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c9e8 {

inline constexpr guest::Function<0x005b1a08, u32(u32, u32, u32, u32)> call_005b1a08;  // (from the original)

u32 f_0030c9e8() {
    return call_005b1a08(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c9e8
GUEST_EXPORT(0x0030c9e8, d_0030c9e8::f_0030c9e8);

// f_0030c9f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c9f0 {

inline constexpr guest::Function<0x0075db98, u32(u32, u32, u32, u32)> call_0075db98;  // (from the original)

u32 f_0030c9f0() {
    return call_0075db98(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c9f0
GUEST_EXPORT(0x0030c9f0, d_0030c9f0::f_0030c9f0);

// f_0030c9f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c9f4 {

inline constexpr guest::Function<0x0075dad0, u32(u32, u32, u32, u32)> call_0075dad0;  // (from the original)

u32 f_0030c9f4() {
    return call_0075dad0(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c9f4
GUEST_EXPORT(0x0030c9f4, d_0030c9f4::f_0030c9f4);

// f_0030c9f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c9f8 {

inline constexpr guest::Function<0x006055e0, u32(u32, u32, u32, u32)> call_006055e0;  // (from the original)

u32 f_0030c9f8() {
    return call_006055e0(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c9f8
GUEST_EXPORT(0x0030c9f8, d_0030c9f8::f_0030c9f8);

// f_0030ca00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ca00 {

inline constexpr guest::Function<0x00613758, u32(u32, u32, u32, u32)> call_00613758;  // (from the original)

u32 f_0030ca00() {
    return call_00613758(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030ca00
GUEST_EXPORT(0x0030ca00, d_0030ca00::f_0030ca00);

// f_0030ca04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ca04 {

inline constexpr guest::Function<0x006138ac, u32(u32, u32, u32, u32)> call_006138ac;  // (from the original)

u32 f_0030ca04() {
    return call_006138ac(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030ca04
GUEST_EXPORT(0x0030ca04, d_0030ca04::f_0030ca04);

// f_0030ca08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ca08 {

inline constexpr guest::Function<0x006a2c58, u32(u32, u32, u32, u32)> call_006a2c58;  // (from the original)

u32 f_0030ca08() {
    return call_006a2c58(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030ca08
GUEST_EXPORT(0x0030ca08, d_0030ca08::f_0030ca08);

// f_0030ca0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ca0c {

inline constexpr guest::Function<0x0075db6c, u32(u32, u32, u32, u32)> call_0075db6c;  // (from the original)

u32 f_0030ca0c() {
    return call_0075db6c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030ca0c
GUEST_EXPORT(0x0030ca0c, d_0030ca0c::f_0030ca0c);

// f_0030ca10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ca10 {

inline constexpr guest::Function<0x006a2c48, u32(u32, u32, u32, u32)> call_006a2c48;  // (from the original)

u32 f_0030ca10() {
    return call_006a2c48(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030ca10
GUEST_EXPORT(0x0030ca10, d_0030ca10::f_0030ca10);

// f_0030ca14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ca14 {

inline constexpr guest::Function<0x0070f678, u32(u32, u32, u32, u32)> call_0070f678;  // (from the original)

u32 f_0030ca14() {
    return call_0070f678(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030ca14
GUEST_EXPORT(0x0030ca14, d_0030ca14::f_0030ca14);

// f_0030ca18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ca18 {

inline constexpr guest::Function<0x006a6e90, u32(u32, u32, u32, u32)> call_006a6e90;  // (from the original)

u32 f_0030ca18() {
    return call_006a6e90(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030ca18
GUEST_EXPORT(0x0030ca18, d_0030ca18::f_0030ca18);

// f_0030ca1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ca1c {

inline constexpr guest::Function<0x005cdfd0, u32(u32, u32, u32, u32)> call_005cdfd0;  // (from the original)

u32 f_0030ca1c() {
    return call_005cdfd0(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030ca1c
GUEST_EXPORT(0x0030ca1c, d_0030ca1c::f_0030ca1c);

// f_0030ca20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ca20 {

inline constexpr guest::Function<0x006a2c2c, u32(u32, u32, u32, u32)> call_006a2c2c;  // (from the original)

u32 f_0030ca20() {
    return call_006a2c2c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030ca20
GUEST_EXPORT(0x0030ca20, d_0030ca20::f_0030ca20);

// f_0030ca24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ca24 {

inline constexpr guest::Function<0x006136a8, u32(u32, u32, u32, u32)> call_006136a8;  // (from the original)

u32 f_0030ca24() {
    return call_006136a8(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030ca24
GUEST_EXPORT(0x0030ca24, d_0030ca24::f_0030ca24);

// f_0030ca30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ca30 {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)

u32 f_0030ca30(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002fae84(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r0_2 = call_002fb310(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    r0_3 = r0_2 + 4u;
    return guest::call_address<u32>(0x30ca59u, r0_3, 0u, 0u, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0030ca30
GUEST_EXPORT(0x0030ca30, d_0030ca30::f_0030ca30);

// f_0030cc0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030cc0c {

inline constexpr guest::Function<0x006f9e94, u32(u32, u32, u32, u32)> call_006f9e94;  // (from the original)

u32 f_0030cc0c() {
    return call_006f9e94(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030cc0c
GUEST_EXPORT(0x0030cc0c, d_0030cc0c::f_0030cc0c);

// f_0030cc10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030cc10 {

inline constexpr guest::Function<0x006fa728, u32(u32, u32, u32, u32)> call_006fa728;  // (from the original)

u32 f_0030cc10() {
    return call_006fa728(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030cc10
GUEST_EXPORT(0x0030cc10, d_0030cc10::f_0030cc10);

// f_0030cc14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030cc14 {

inline constexpr guest::Function<0x006fb0cc, u32(u32, u32, u32, u32)> call_006fb0cc;  // (from the original)

u32 f_0030cc14() {
    return call_006fb0cc(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030cc14
GUEST_EXPORT(0x0030cc14, d_0030cc14::f_0030cc14);

// f_0030cc18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030cc18 {

inline constexpr guest::Function<0x006fae98, u32(u32, u32, u32, u32)> call_006fae98;  // (from the original)

u32 f_0030cc18() {
    return call_006fae98(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030cc18
GUEST_EXPORT(0x0030cc18, d_0030cc18::f_0030cc18);

// f_0030cc20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030cc20 {

inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> call_0075291c;  // (from the original)

u32 f_0030cc20() {
    return call_0075291c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030cc20
GUEST_EXPORT(0x0030cc20, d_0030cc20::f_0030cc20);

// f_0030cc24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030cc24 {

inline constexpr guest::Function<0x006a92f4, u32(u32, u32, u32, u32)> call_006a92f4;  // (from the original)

u32 f_0030cc24() {
    return call_006a92f4(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030cc24
GUEST_EXPORT(0x0030cc24, d_0030cc24::f_0030cc24);

// f_0030cc34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030cc34 {

inline constexpr guest::Function<0x005c257c, u32(u32, u32, u32, u32)> call_005c257c;  // (from the original)

u32 f_0030cc34() {
    return call_005c257c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030cc34
GUEST_EXPORT(0x0030cc34, d_0030cc34::f_0030cc34);

// f_0030cc3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030cc3c {

inline constexpr guest::Function<0x005cd9c4, u32(u32, u32, u32, u32)> call_005cd9c4;  // (from the original)

u32 f_0030cc3c() {
    return call_005cd9c4(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030cc3c
GUEST_EXPORT(0x0030cc3c, d_0030cc3c::f_0030cc3c);

// f_0030ce40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ce40 {

inline constexpr guest::Function<0x00715ffc, u32(u32, u32, u32, u32)> call_00715ffc;  // (from the original)

u32 f_0030ce40() {
    return call_00715ffc(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030ce40
GUEST_EXPORT(0x0030ce40, d_0030ce40::f_0030ce40);

// f_0030ce48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ce48 {

inline constexpr guest::Function<0x006b6624, u32(u32, u32, u32, u32)> call_006b6624;  // (from the original)

u32 f_0030ce48() {
    return call_006b6624(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030ce48
GUEST_EXPORT(0x0030ce48, d_0030ce48::f_0030ce48);

// f_0030ce54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ce54 {

inline constexpr guest::Function<0x007596ac, u32(u32, u32, u32, u32)> call_007596ac;  // (from the original)

u32 f_0030ce54() {
    return call_007596ac(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030ce54
GUEST_EXPORT(0x0030ce54, d_0030ce54::f_0030ce54);

// f_0030ce58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ce58 {

inline constexpr guest::Function<0x005cde34, u32(u32, u32, u32, u32)> call_005cde34;  // (from the original)

u32 f_0030ce58() {
    return call_005cde34(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030ce58
GUEST_EXPORT(0x0030ce58, d_0030ce58::f_0030ce58);

// f_0030ce5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ce5c {

inline constexpr guest::Function<0x0063061c, u32(u32, u32, u32, u32)> call_0063061c;  // (from the original)

u32 f_0030ce5c() {
    return call_0063061c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030ce5c
GUEST_EXPORT(0x0030ce5c, d_0030ce5c::f_0030ce5c);

// f_0030ce70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ce70 {

inline constexpr guest::Function<0x007241b0, u32(u32, u32, u32, u32)> call_007241b0;  // (from the original)

u32 f_0030ce70() {
    return call_007241b0(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030ce70
GUEST_EXPORT(0x0030ce70, d_0030ce70::f_0030ce70);

// f_0030d1b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030d1b8 {

inline constexpr guest::Function<0x0051f58c, u32(u32, u32, u32, u32)> call_0051f58c;  // (from the original)

u32 f_0030d1b8() {
    return call_0051f58c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030d1b8
GUEST_EXPORT(0x0030d1b8, d_0030d1b8::f_0030d1b8);

// f_0030d9ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030d9ec {

inline constexpr guest::Function<0x0058efe8, u32(u32, u32, u32, u32)> call_0058efe8;  // (from the original)

u32 f_0030d9ec() {
    return call_0058efe8(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030d9ec
GUEST_EXPORT(0x0030d9ec, d_0030d9ec::f_0030d9ec);

// f_0030d9f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030d9f0 {

inline constexpr guest::Function<0x007567d8, u32(u32, u32, u32, u32)> call_007567d8;  // (from the original)

u32 f_0030d9f0() {
    return call_007567d8(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030d9f0
GUEST_EXPORT(0x0030d9f0, d_0030d9f0::f_0030d9f0);

// f_0030d9f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030d9f4 {

inline constexpr guest::Function<0x007561ac, u32(u32, u32, u32, u32)> call_007561ac;  // (from the original)

u32 f_0030d9f4() {
    return call_007561ac(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030d9f4
GUEST_EXPORT(0x0030d9f4, d_0030d9f4::f_0030d9f4);

// f_0030d9f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030d9f8 {

inline constexpr guest::Function<0x00756120, u32(u32, u32, u32, u32)> call_00756120;  // (from the original)

u32 f_0030d9f8() {
    return call_00756120(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030d9f8
GUEST_EXPORT(0x0030d9f8, d_0030d9f8::f_0030d9f8);

// f_0030da04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030da04 {

inline constexpr guest::Function<0x002f777c, u32(u32, u32, u32, u32)> call_002f777c;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002ff4d4, u32(u32, u32, u32, u32)> call_002ff4d4;  // (from the original)
inline constexpr guest::Function<0x00309f85, u32(u32, u32, u32, u32)> call_00309f84;  // (from the original)
inline constexpr guest::Function<0x0030f56c, u32(u32, u32, u32, u32)> call_0030f56c;  // (from the original)
inline constexpr guest::Function<0x00311c48, u32(u32, u32, u32, u32)> call_00311c48;  // (from the original)

u32 f_0030da04(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_5 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r0_9 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 vf_1 = 0;
    u32 res_2 = 0;
    u32 nf_2 = 0;
    u32 zf_2 = 0;
    u32 vf_2 = 0;
    u32 res_3 = 0;
    u32 nf_3 = 0;
    u32 zf_3 = 0;
    u32 vf_3 = 0;
    u32 r1_5 = 0;
    u32 r0_10 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    r3_1 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    r2_1 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002ff4d4(r1, r3, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_00309f84(r0, r2, r2_2, r3_2);
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_30dad4;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fb378(r0_2, r1_1, r2_3, r3_3);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_4 = r0_2 + 0xe6u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030f56c(r0_4, r0_3, r2_4, r3_4);
    r1_2 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_5 = call_00311c48(r1, r1_2, r2_5, r3_5);
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_6 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_6, r0_5, r2_6, r3_6);
    r1_3 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_7 = r13;
    guest::cpu()->r[13] = r13;
    r0_8 = call_002fcaf4(r0_7, r1_3, r2_7, r3_7);
    r1_4 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_8 != 0) {
        goto L_30dace;
    }
    r7 = r13;
    r6 = r0_2 + 0x62u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_9 = call_002fcb34(r7, r1_4, r2, r3);
    r1_4 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res_1 = r0_9 - 0x2cu;  // (from the original)
    nf_1 = res_1 >> 0x1f;  // (from the original)
    zf_1 = res_1 == 0;
    vf_1 = ((r0_9 ^ 0x2cu) & (r0_9 ^ res_1)) >> 0x1f;  // (from the original)
    if (zf_1) {
        goto L_30dab0;
    }
    if (!!zf_1 || nf_1 != vf_1) {
        res_2 = r0_9 - 0xcu;  // (from the original)
        nf_2 = res_2 >> 0x1f;  // (from the original)
        zf_2 = res_2 == 0;
        vf_2 = ((r0_9 ^ 0xcu) & (r0_9 ^ res_2)) >> 0x1f;  // (from the original)
        if (zf_2) {
            goto L_30dab0;
        }
        if (!!zf_2 || nf_2 != vf_2) {
            if (r0_9 == 3u) {
                goto L_30dab0;
            }
            if (r0_9 == 4u) {
                goto L_30dab0;
            }
            if (r0_9 == 5u) {
                goto L_30dab0;
            }
            if (r0_9 != 6u) {
                goto L_30dace;
            }
            goto L_30dab0;
        }
        if (r0_9 == 0xdu) {  // (from the original)
            goto L_30dab0;
        }
        if (r0_9 == 0x19u) {  // (from the original)
            goto L_30dab0;
        }
        if (r0_9 == 0x24u) {  // (from the original)
            goto L_30dab0;
        }
        if (r0_9 != 0x27u) {  // (from the original)
            goto L_30dace;
        }
        goto L_30dab0;
    }
    res_3 = r0_9 - 0x40u;  // (from the original)
    nf_3 = res_3 >> 0x1f;  // (from the original)
    zf_3 = res_3 == 0;
    vf_3 = ((r0_9 ^ 0x40u) & (r0_9 ^ res_3)) >> 0x1f;  // (from the original)
    if (zf_3) {
        goto L_30dab0;
    }
    if (!!zf_3 || nf_3 != vf_3) {
        if (r0_9 == 0x2eu) {  // (from the original)
            goto L_30dab0;
        }
        if (r0_9 == 0x36u) {  // (from the original)
            goto L_30dab0;
        }
        if (r0_9 == 0x37u) {  // (from the original)
            goto L_30dab0;
        }
        if (r0_9 != 0x38u) {  // (from the original)
            goto L_30dace;
        }
        goto L_30dab0;
    }
    if (r0_9 == 0x54u) {  // (from the original)
        goto L_30dab0;
    }
    if (r0_9 == 0x55u) {  // (from the original)
        goto L_30dab0;
    }
    if (r0_9 == 0x58u) {  // (from the original)
        goto L_30dab0;
    }
    if (r0_9 != 0x59u) {  // (from the original)
        goto L_30dace;
    }
L_30dab0:;
    r4 = r6 + 0x1cu;  // (from the original)
    r5 = 0u;
    do {
L_30dab6:;
        r1_5 = r4 - 4u;
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r4, r1_5, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = r5 + 1u;
        r4 = r4 - 4u;
        guest::preempt();
    } while (r5 < 7u);
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r6, r7, r2, r3);
    r1_4 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_30dace:;
    r0_10 = r13;
    guest::cpu()->r[13] = r13;
    call_002f777c(r0_10, r1_4, r2, r3);
    r1_1 = guest::cpu()->r[1];
L_30dad4:;
    r0_1 = 1u;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_0030da04
GUEST_EXPORT(0x0030da05, d_0030da04::f_0030da04);

// f_0030dbe8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030dbe8 {

inline constexpr guest::Function<0x001138ed, u32(u32, u32, u32, u32)> call_001138ec;  // (from the original)
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> call_002fbd54;  // (from the original)
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x0030bc91, u32(u32, u32, u32, u32)> call_0030bc90;  // (from the original)

u32 f_0030dbe8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 tpc_1 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 res_1 = 0;
    u32 r0_4 = 0;
    u32 r5_2 = 0;
    u32 r4_2 = 0;
    u32 r5_3 = 0;
    u32 r6_2 = 0;
    u32 r7_2 = 0;
    u32 tpc_2 = 0;
    ea_1 = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r4);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r14);  // (from the original)
    r13 = ea_1;
    r5 = 1u;
    r7 = 0xau;  // (from the original)
    r4 = *gptr<u32>(r13);
    r6 = 0u;
    do {
L_30dbf2:;
        guest::cpu()->r[13] = r13;
        r0_1 = call_00301e20(r4, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_1 == 0) {
            goto L_30dc1e;
        }
        if (!(r5 == 0)) {
            if (u32(*gptr<u8>(r4 + (0x25u << 8) + 8u)) == 6u) {  // (from the original)
                goto L_30dc1e;
            }
        }
        r6 = r6 + 1u;
        r4 = r4 + 0x2518u;  // (from the original)
        guest::preempt();
    } while (r6 < r7);
L_30dc16:;
    r13 = r13 + 0xcu;  // (from the original)
    r0_2 = ~0u;
    r4_1 = *gptr<u32>(r13);
    r5_1 = *gptr<u32>(r13 + 4);
    r6_1 = *gptr<u32>(r13 + 8);
    r7_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
L_30dc1e:;
    if (r6 >= 0xau) {  // (from the original)
        guest::preempt();
        goto L_30dc16;
    }
    r7 = 0x2518u * r6 + *gptr<u32>(r13);  // (from the original)
    r1_1 = *gptr<u32>(r13 + 4u);
    guest::cpu()->r[13] = r13;
    call_001138ec(r7, r1_1, r2, r3);
    if (*gptr<u32>(r13 + 8u) != 0) {
        r3_1 = 4u;
    } else {
        r3_1 = 3u;
    }
    r0_3 = *gptr<u32>(r13);
    guest::cpu()->r[13] = r13;
    call_0030bc90(r0_3, r7, r6, r3_1);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
L_30dc4a:;
    if (r4 >= 0x10u) {  // (from the original)
        goto L_30dc70;
    }
    r1 = 0x8eeu;  // (from the original)
    res_1 = r4 * 0xf2u + r7 + r1;  // (from the original)
    if (res_1 == 0) {
        goto L_30dc70;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_002fbd54(res_1, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        goto L_30dc70;
    }
    r5_2 = res_1 + 0xb6u;  // (from the original)
    *gptr<u8>(r5_2 + 6u) = u8(u32(*gptr<u8>(r5_2 + 6u)) << 0x19 >> 0x19);  // (from the original)
L_30dc70:;
    r4 = r4 + 1u;
    if (r4 < 0x10u) {  // (from the original)
        guest::preempt();
        goto L_30dc4a;
    }
    r13 = r13 + 0xcu;  // (from the original)
    r4_2 = *gptr<u32>(r13);
    r5_3 = *gptr<u32>(r13 + 4);
    r6_2 = *gptr<u32>(r13 + 8);
    r7_2 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc_2 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_3;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[13] = r13;
    return r6;
}

}  // namespace d_0030dbe8
GUEST_EXPORT(0x0030dbe9, d_0030dbe8::f_0030dbe8);

// f_0030dcdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030dcdc {

inline constexpr guest::Function<0x002f777c, u32(u32, u32, u32, u32)> call_002f777c;  // (from the original)
inline constexpr guest::Function<0x002f77e8, u32(u32, u32, u32, u32)> call_002f77e8;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002ff368, u32(u32, u32, u32, u32)> call_002ff368;  // (from the original)
inline constexpr guest::Function<0x002ff4d4, u32(u32, u32, u32, u32)> call_002ff4d4;  // (from the original)
inline constexpr guest::Function<0x00301e6c, u32(u32, u32, u32, u32)> call_00301e6c;  // (from the original)
inline constexpr guest::Function<0x00308380, u32(u32, u32, u32, u32)> call_00308380;  // (from the original)
inline constexpr guest::Function<0x00308d05, u32(u32, u32, u32, u32)> call_00308d04;  // (from the original)
inline constexpr guest::Function<0x00308d4d, u32(u32, u32, u32, u32)> call_00308d4c;  // (from the original)
inline constexpr guest::Function<0x0030dad8, u32(u32, u32, u32, u32)> call_0030dad8;  // (from the original)
inline constexpr guest::Function<0x0030ddc0, u32(u32, u32, u32, u32)> call_0030ddc0;  // (from the original)
inline constexpr guest::Function<0x0030dfa0, u32(u32, u32, u32, u32)> call_0030dfa0;  // (from the original)

u32 f_0030dcdc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r1_4 = 0;
    u32 r0_5 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r1_5 = 0;
    u32 r0_6 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_7 = 0;
    u32 r2_6 = 0;
    u32 r1_6 = 0;
    u32 r2_7 = 0;
    u32 r3_6 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_7 = 0;
    u32 r2_8 = 0;
    u32 r3_7 = 0;
    u32 r2_9 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_8 = 0;
    u32 r0_13 = 0;
    u32 r1_9 = 0;
    u32 r2_10 = 0;
    u32 r3_8 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 tpc_1 = 0;
    ea_1 = r13 - 0x1c;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r4);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r14);  // (from the original)
    r13 = ea_1 - 0x2c4u;  // (from the original)
    r1_1 = *gptr<u16>(r13 + 0x2ccu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00301e6c(0xa83aecu, r1_1, r2, r3);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        r0_2 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002ff368(r0_2, r1_2, r2_1, r3_1);
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        r1_3 = u32(*gptr<u8>(r0_1 + 0x1cu)) >> 4;  // (from the original)
        r0_3 = r13;
        *gptr<u8>(r0_3 + 0xcu) = u8(r1_3);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_4 = call_002fb328(r0_3, r1_3, r2_2, r3_2);
        r2_3 = r13 + 0xcu;  // (from the original)
        r3_3 = r0_4 + 0x621b8u;  // (from the original)
        r1_4 = r13 + 0x2ccu;  // (from the original)
        r0_5 = r13 + 0x290u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00308380(r0_5, r1_4, r2_3, r3_3);
        r2_4 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        r1_5 = *gptr<u8>(r13 + 0xcu);  // (from the original)
        r0_6 = r13 + 0x2c0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0030ddc0(r0_6, r1_5, r2_4, r3_4);
        r2_5 = r13;
        *gptr<u32>(r2_5) = u32(r1 + 0x55a6u);  // (from the original)
        *gptr<u32>(r2_5 + 4) = u32(r13 + 0x2c0u);  // (from the original)
        *gptr<u32>(r2_5 + 8) = u32(0u);
        r3_5 = r13 + 0x290u;  // (from the original)
        r0_7 = r13 + 0x10u;  // (from the original)
        r2_6 = u32(*gptr<u8>(r13 + 0xcu)) + 1u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0030dfa0(r0_7, 0x30dd90u, r2_6, r3_5);  // (from the original)
        r1_6 = guest::cpu()->r[1];
        r2_7 = guest::cpu()->r[2];
        r3_6 = guest::cpu()->r[3];
        r0_8 = r13 + 0x2c0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002f777c(r0_8, r1_6, r2_7, r3_6);
        r0_9 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_10 = call_002ff4d4(r0_9, 3u, 0u, 0u);
        r1_7 = guest::cpu()->r[1];
        r2_8 = guest::cpu()->r[2];
        r3_7 = guest::cpu()->r[3];
        if (r0_10 == 0) {
            *gptr<u32>(r13) = u32(0u);
            r2_9 = *gptr<u16>(r13 + 0x2ccu);  // (from the original)
            r0_11 = r1 + 0x8ebeu;  // (from the original)
            guest::cpu()->r[13] = r13;
            call_0030dad8(r0_11, 0xau, r2_9, 0u);  // (from the original)
            r1_7 = guest::cpu()->r[1];
            r2_8 = guest::cpu()->r[2];
            r3_7 = guest::cpu()->r[3];
        }
        r0_12 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002f77e8(r0_12, r1_7, r2_8, r3_7);
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
    }
    r1_8 = *gptr<u16>(r13 + 0x2ccu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_13 = call_00308d04(r0, r1_8, r2_1, r3_1);
    r1_9 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    if (r0_13 != 0) {
        guest::cpu()->r[13] = r13;
        r0_13 = call_00308d4c(r0_13, r1_9, r2_10, r3_8);
        r1_9 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x2d0u;  // (from the original)
    r4_1 = *gptr<u32>(r13);
    r5_1 = *gptr<u32>(r13 + 4);
    r6_1 = *gptr<u32>(r13 + 8);
    tpc_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_9;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[13] = r13;
    return r0_13;
}

}  // namespace d_0030dcdc
GUEST_EXPORT(0x0030dcdd, d_0030dcdc::f_0030dcdc);

// f_0030dda8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030dda8 {

inline constexpr guest::Function<0x006f0900, u32(u32, u32, u32, u32)> call_006f0900;  // (from the original)

u32 f_0030dda8() {
    return call_006f0900(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030dda8
GUEST_EXPORT(0x0030dda8, d_0030dda8::f_0030dda8);

// f_0030ddac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ddac {

inline constexpr guest::Function<0x006f2504, u32(u32, u32, u32, u32)> call_006f2504;  // (from the original)

u32 f_0030ddac() {
    return call_006f2504(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030ddac
GUEST_EXPORT(0x0030ddac, d_0030ddac::f_0030ddac);

// f_0030e068: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030e068 {

inline guest::global<u32, 0x0095decc> global_0095decc;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_0030e068(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r3_2 = 0;
    u32 res_1 = 0;
    u32 ea_1 = 0;
    u32 r3_3 = 0;
    u32 ea_2 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_4 = 0;
    u32 r0_8 = 0;
    u32 r2_3 = 0;
    u32 r3_5 = 0;
    u32 r0_9 = 0;
    u32 r1_4 = 0;
    u32 r1_5 = 0;
    u32 r2_4 = 0;
    u32 r3_6 = 0;
    u32 r1_6 = 0;
    u32 r0_10 = 0;
    r13 = r13 - 0x70u;  // (from the original)
    r5 = r0;
    r0_1 = r13 + 4u;
    r1_1 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_003083bc(r0_1, r1_1, 0x1eu, r3);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r4 = 0x909ea8u;  // (from the original)
    *gptr<u32>(r0_2) = u32(r4);
    r0_3 = r0_2 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_005f4bfc(r0_3, r1_2, r2_1, r3_1);
    r0_5 = r0_4 - 0xcu;  // (from the original)
    r6 = 0u;
    *gptr<u32>(r0_5 + 0x18u) = u32(r6);  // (from the original)
    *gptr<u32>(r0_5 + 0x1cu) = u32(r6);  // (from the original)
    *gptr<u32>(r0_5 + 0x20u) = u32(r6);  // (from the original)
    *gptr<u32>(r0_5 + 0x24u) = u32(r6);  // (from the original)
    *gptr<u32>(r0_5 + 0x28u) = u32(r6);  // (from the original)
    *gptr<u32>(r0_5 + 0x2cu) = u32(r6);  // (from the original)
    *gptr<u32>(r0_5 + 0x30u) = u32(r6);  // (from the original)
    *gptr<u32>(r0_5 + 0x34u) = u32(r6);  // (from the original)
    *gptr<u32>(r0_5 + 0x38u) = u32(r6);  // (from the original)
    *gptr<u32>(r0_5 + 0x3cu) = u32(r6);  // (from the original)
    *gptr<u32>(r0_5 + 0x40u) = u32(r6);  // (from the original)
    *gptr<u32>(r0_5 + 0x44u) = u32(r6);  // (from the original)
    *gptr<u32>(r0_5 + 0x48u) = u32(r6);  // (from the original)
    r2 = 0x8906ecu;  // (from the original)
    *gptr<u32>(r0_5 + 0x4cu) = u32(r6);  // (from the original)
    *gptr<u32>(r0_5 + 0x50u) = u32(r6);  // (from the original)
    r1 = 0xfu;  // (from the original)
    r0 = r0_5 + 0x16u;  // (from the original)
    do {
L_30e0e0:;
        r3_2 = u32(*gptr<u16>(r2));
        res_1 = r1 - 1u;
        r1 = res_1;
        ea_1 = r0 + 2u;
        *gptr<u16>(ea_1) = u16(r3_2);
        r3_3 = u32(*gptr<u16>(r2));
        ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_3);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    r0_6 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8f8(r0_6, 0u, r2, r3_3);
    *gptr<u32>(r13) = u32(r6);
    r0_7 = *global_0095decc;
    r1_3 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_005ea964(r0_7, r1_3, 0x847ac4u, 0x17bu);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_8 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8dc(r0_8, 0u, r2_2, r3_4);
    r2_3 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_9 = r5 + 0x2958u;  // (from the original)
    r1_4 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_005e2e50(r0_9, r1_4, r2_3, r3_5);
    r1_5 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_005e2f94(r0_9, r1_5, r2_4, r3_6);
    r1_6 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 4u) = u32(r4);
    r0_10 = r13 + 4u;
    r13 = r13 + 0x70u;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    return r0_10;
}

}  // namespace d_0030e068
GUEST_EXPORT(0x0030e068, d_0030e068::f_0030e068);

// f_0030e184: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030e184 {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002ff8f0, u32(u32, u32, u32, u32)> call_002ff8f0;  // (from the original)
inline constexpr guest::Function<0x00309ef0, u32(u32, u32, u32, u32)> call_00309ef0;  // (from the original)
inline constexpr guest::Function<0x0030b8bc, u32(u32, u32, u32, u32)> call_0030b8bc;  // (from the original)
inline constexpr guest::Function<0x0030b90c, u32(u32, u32, u32, u32)> call_0030b90c;  // (from the original)
inline constexpr guest::Function<0x0030b924, u32(u32, u32, u32, u32)> call_0030b924;  // (from the original)

u32 f_0030e184(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    u32 r5 = guest::cpu()->r[5];
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_1 = 0;
    u32 r0_7 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4_1 = r1 + 0x16u;  // (from the original)
    r5 = r1;
    r0 = call_00309ef0(r4_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0_1 = call_002fae84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = r0_1 + 0x20u;  // (from the original)
    r0_3 = call_002ff8f0(r0_2, r5, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        goto L_30e1be;
    }
    r0 = *gptr<u8>(r4_1 + 8u);
    if (r0 == 0xeu) {  // (from the original)
        goto L_30e1c6;
    }
    if (r0 == 0xfu) {  // (from the original)
        goto L_30e20e;
    }
    if (r0 == 0x10u) {  // (from the original)
        goto L_30e1e6;
    }
    if (r0 != 0x11u) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = *gptr<u8>(r4_1 + 9u);
    if (r0 == 1u) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
L_30e1be:;
    r0 = call_0030b8bc(r5, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_30e1c6:;
    r0 = *gptr<u8>(r4_1 + 9u);
    if (r0 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0_4 = call_0030b90c(r5, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_4 != 0) {
        goto L_30e204;
    }
    r0 = call_0030b90c(r5, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_30e204;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_30e1e6:;
    r0 = *gptr<u8>(r4_1 + 9u);
    if (r0 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0_5 = call_0030b90c(r5, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_5 != 0) {
        goto L_30e204;
    }
    r0 = call_0030b90c(r5, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
L_30e204:;
    r0_6 = call_0030b924(r5, 2u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_6;
L_30e20e:;
    r0_7 = *gptr<u8>(r4_1 + 9u);
    if (r0_7 != 1u) {
        guest::preempt();
        goto L_30e1be;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_7;
}

}  // namespace d_0030e184
GUEST_EXPORT(0x0030e185, d_0030e184::f_0030e184);

// f_0030e220: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030e220 {

inline constexpr guest::Function<0x005d8698, u32(u32, u32, u32, u32)> call_005d8698;  // (from the original)

u32 f_0030e220() {
    return call_005d8698(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030e220
GUEST_EXPORT(0x0030e220, d_0030e220::f_0030e220);

// f_0030e454: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030e454 {

inline constexpr guest::Function<0x002fe419, u32(u32, u32, u32, u32)> call_002fe418;  // (from the original)

u32 f_0030e454(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 sco = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 cf_1 = 0;
    u32 res_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 cf_2 = 0;
    u32 r1_3 = 0;
    u32 res_2 = 0;
    u32 r2_2 = 0;
    u32 r4_2 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 tpc_1 = 0;
    u32 r2_3 = 0;
    u32 r1_4 = 0;
    u32 r4_3 = 0;
    u32 r5_2 = 0;
    u32 r6_2 = 0;
    u32 r7_2 = 0;
    u32 tpc_2 = 0;
    ea_1 = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r4);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r14);  // (from the original)
    r13 = ea_1;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fe418(r1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r4_1 = r0_1;
    if (r0_1 >= 0xau) {  // (from the original)
        goto L_30e4c4;
    }
    r0_2 = *gptr<u32>(r1);
    cf_1 = r0_2 >= r4_1;
    if (!cf_1 || r0_2 == r4_1) {
        goto L_30e484;
    }
    r1_1 = *gptr<u32>(r1 + 4u);
    sco = cf_1;
    res_1 = lsl_rc(1u, r4_1 & 0xff, &sco);  // (from the original)
    r2_1 = r1_1;
    if ((r2_1 & res_1) == 0) {
        goto L_30e484;
    }
    r1_1 = r1_1 & ~res_1;
    r0_3 = *gptr<u32>(r1 + 8u);
    *gptr<u32>(r1 + 4u) = u32(r1_1);
    *gptr<u32>(r1 + 8u) = u32(r0_3 - 1u);
L_30e484:;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fe418(r1, r1_1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 >= 0xau) {  // (from the original)
        goto L_30e4c4;
    }
    r1_2 = *gptr<u32>(r1);
    cf_2 = r1_2 >= r0_1;
    if (!cf_2 || r1_2 == r0_1) {
        goto L_30e4a8;
    }
    r1_3 = *gptr<u32>(r1 + 4u);
    sco = cf_2;
    res_2 = lsl_rc(1u, r0_1 & 0xff, &sco);  // (from the original)
    if ((r1_3 & res_2) == 0) {
        goto L_30e4a8;
    }
    *gptr<u32>(r1 + 8u) = u32(*gptr<u32>(r1 + 8u) - 1u);
    *gptr<u32>(r1 + 4u) = u32(r1_3 & ~res_2);
L_30e4a8:;
    if (*gptr<u32>(r13 + 8u) == 0) {
        goto L_30e4c8;
    }
    r2_2 = 0x2518u * r4_1 + r0 + 0x2500u;  // (from the original)
    r1_1 = 0x2518u * r0_1 + r0 + 0x2500u;  // (from the original)
    *gptr<u8>(r2_2 + 0x16u) = u8(r0_1);  // (from the original)
    *gptr<u8>(r1_1 + 0x16u) = u8(r4_1);  // (from the original)
L_30e4c4:;
    r13 = r13 + 0xcu;  // (from the original)
    r4_2 = *gptr<u32>(r13);
    r5_1 = *gptr<u32>(r13 + 4);
    r6_1 = *gptr<u32>(r13 + 8);
    r7_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
L_30e4c8:;
    r2_3 = 0x2518u * r4_1 + r0 + 0x2500u;  // (from the original)
    r1_4 = 0x2518u * r0_1 + r0 + 0x2500u;  // (from the original)
    *gptr<u8>(r2_3 + 0x15u) = u8(r0_1);  // (from the original)
    *gptr<u8>(r1_4 + 0x15u) = u8(r4_1);  // (from the original)
    r13 = r13 + 0xcu;  // (from the original)
    r4_3 = *gptr<u32>(r13);
    r5_2 = *gptr<u32>(r13 + 4);
    r6_2 = *gptr<u32>(r13 + 8);
    r7_2 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc_2 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[4] = r4_3;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_0030e454
GUEST_EXPORT(0x0030e455, d_0030e454::f_0030e454);

// f_0030eaf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030eaf0 {

inline constexpr guest::Function<0x00118c9d, u32(u32, u32, u32, u32)> call_00118c9c;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x00309ef0, u32(u32, u32, u32, u32)> call_00309ef0;  // (from the original)

u32 f_0030eaf0(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r9 = guest::cpu()->r[9];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r5_1 = 0;
    u32 r0_3 = 0;
    u32 r8_1 = 0;
    u32 r0_4 = 0;
    u32 zf_1 = 0;
    u32 r0_5 = 0;
    u32 r2_1 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 zf_2 = 0;
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r6 = r0;
    r7 = r1;
    r0_1 = call_00301e20(r1, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_1 == 0) {
        goto L_30eba8;
    } else {
        r4 = 0u;
        r9 = r4;
    }
L_30eb14:;
    r0_2 = r4 & 0xffu;  // (from the original)
    if (r0_2 >= 4u) {
        r5_1 = r9;
        goto L_30eb30;
    }
    r1 = r0_2 * 0x149u;  // (from the original)
    r5_1 = r6 + (r1 << 7);
L_30eb30:;
    if (r5_1 == 0) {
        goto L_30ebac;
    }
    r0_3 = call_00301e20(r7, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_3 == 0) {
        goto L_30ebac;
    }
    r8_1 = r5_1 + 0x8dfau;  // (from the original)
    r0_4 = call_00309ef0(r8_1, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    zf_1 = r0_4 == 0;
    if (!zf_1) {
        r0_4 = u32(*gptr<u8>(r8_1 + 9u));
        zf_1 = r0_4 == 3u;
    }
    if (zf_1) {
        goto L_30ebac;
    }
    r0_5 = call_002fb328(r0_4, r1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    r0_6 = r0_5 + 0x292a4u;  // (from the original)
    r0_7 = call_00118c9c(r0_6, r7, r2_1, guest::cpu()->r[3]);
    r1 = r0_7;
    r0_8 = r5_1 + 0x8e00u;  // (from the original)
    r2 = u32(s32(s8(*gptr<u8>(r0_8 + 5u))));
    zf_2 = r2 == r1;
    if (!zf_2) {
        zf_2 = u32(s32(s8(*gptr<u8>(r0_8 + 6u)))) == r1;
    }
    if (!zf_2) {
        goto L_30ebac;
    }
    if (r8_1 == 0) {
        goto L_30ebac;
    }
    r0_1 = r5_1;
L_30eba8:;
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
L_30ebac:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(4u)) {
        guest::preempt();
        goto L_30eb14;
    }
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0030eaf0
GUEST_EXPORT(0x0030eaf0, d_0030eaf0::f_0030eaf0);

// f_0030ebec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ebec {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb7e8, u32(u32, u32, u32, u32)> call_002fb7e8;  // (from the original)
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> call_002fbd54;  // (from the original)
inline constexpr guest::Function<0x0030988c, u32(u32, u32, u32, u32)> call_0030988c;  // (from the original)
inline constexpr guest::Function<0x0030a7e0, u32(u32, u32, u32, u32)> call_0030a7e0;  // (from the original)
inline constexpr guest::Function<0x0030e4e8, u32(u32, u32, u32, u32)> call_0030e4e8;  // (from the original)
inline constexpr guest::Function<0x0030e514, u32(u32, u32, u32, u32)> call_0030e514;  // (from the original)
inline constexpr guest::Function<0x0030e540, u32(u32, u32, u32, u32)> call_0030e540;  // (from the original)
inline constexpr guest::Function<0x0030e56c, u32(u32, u32, u32, u32)> call_0030e56c;  // (from the original)
inline constexpr guest::Function<0x00407b00, u32(u32, u32, u32, u32)> call_00407b00;  // (from the original)
inline constexpr guest::Function<0x005bce04, u32(u32, u32, u32, u32)> call_005bce04;  // (from the original)
inline constexpr guest::Function<0x005bd05c, u32(u32, u32, u32, u32)> call_005bd05c;  // (from the original)
inline constexpr guest::Function<0x005bd2a0, u32(u32, u32, u32, u32)> call_005bd2a0;  // (from the original)
inline constexpr guest::Function<0x005bd864, u32(u32, u32, u32, u32)> call_005bd864;  // (from the original)

u32 f_0030ebec(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r4_1 = 0;
    u32 r0_4 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 vf_1 = 0;
    u32 r4_2 = 0;
    u32 r4_3 = 0;
    u32 r4_4 = 0;
    u32 r4_5 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r4_6 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 tpc_1 = 0;
    if (r1 >= 0xau) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r4);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r14);  // (from the original)
    r13 = ea_1 - 0x10u;  // (from the original)
    r6 = r1;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fae84(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r13 + 8u) = u32(r0_1 + 0x20u);  // (from the original)
    r7 = 0x55a6u;  // (from the original)
    r5 = 0u;
    *gptr<u32>(r13 + 4u) = u32(r6 * 0x2518u + r0);  // (from the original)
L_30ec0e:;
    r0_2 = *gptr<u32>(r13 + 8u);
    r1_1 = uxtb(r5);
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fb7e8(r0_2, r1_1, r2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r4_1 = r0_3;
    if (r0_3 == 0) {
        goto L_30ece4;
    }
    r0_4 = r4_1 + r7;
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fbd54(r0_4, r1_2, r2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_3 == 0) {
        goto L_30ece4;
    }
    r0_3 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    res_1 = r0_3 - 3u;
    nf_1 = res_1 >> 0x1f;  // (from the original)
    zf_1 = res_1 == 0;
    vf_1 = ((r0_3 ^ 3u) & (r0_3 ^ res_1)) >> 0x1f;  // (from the original)
    if (zf_1) {
        goto L_30ec7c;
    }
    if (!!zf_1 || nf_1 != vf_1) {
        if (r0_3 == 0) {
            goto L_30ec40;
        }
        if (r0_3 != 1u) {
            goto L_30ece4;
        }
        goto L_30ec5e;
    }
    if (r0_3 == 4u) {
        goto L_30eca2;
    }
    if (r0_3 != 0xbu) {  // (from the original)
        goto L_30ece4;
    }
    goto L_30ecc2;
L_30ec40:;
    r4_2 = r4_1 + 0x8d4cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_0030e4e8(r4_2, r1_2, r2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_3 == 0) {
        goto L_30ece4;
    }
    r0_3 = u32(s32(s8(*gptr<u8>(r4_2 + 0xfu))));  // (from the original)
    if (r0_3 != r6) {
        goto L_30ece4;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_005bd05c(r4_2, r1_2, r2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    goto L_30ece4;
L_30ec5e:;
    r4_3 = r4_1 + 0x8d5cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_0030e514(r4_3, r1_2, r2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_3 == 0) {
        goto L_30ece4;
    }
    r0_3 = u32(s32(s8(*gptr<u8>(r4_3 + 0xfu))));  // (from the original)
    if (r0_3 != r6) {
        goto L_30ece4;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_005bd2a0(r4_3, r1_2, r2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    goto L_30ece4;
L_30ec7c:;
    r4_4 = r4_1 + 0x8dfau;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_0030988c(r4_4, r1_2, r2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_3 == 0) {
        goto L_30ece4;
    }
    if (u32(s32(s8(*gptr<u8>(r4_4 + 0xbu)))) != r6) {  // (from the original)
        r0_3 = u32(s32(s8(*gptr<u8>(r4_4 + 0xcu))));  // (from the original)
        if (r0_3 != r6) {
            goto L_30ece4;
        }
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_0030a7e0(r4_4, r1_2, r2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    goto L_30ece4;
L_30eca2:;
    r4_5 = r4_1 + 0x8d6cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_00407b00(r4_5, 0u, r2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_3 == 0) {
        goto L_30ece4;
    }
    r0_3 = u32(s32(s8(*gptr<u8>(r4_5 + 0x14u))));  // (from the original)
    if (r0_3 != r6) {
        goto L_30ece4;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_005bd864(r4_5, r1_2, r2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    goto L_30ece4;
L_30ecc2:;
    r0_5 = r4_1 + 0x8e08u;  // (from the original)
    *gptr<u32>(r13) = u32(r0_5);
    guest::cpu()->r[13] = r13;
    r0_3 = call_0030e540(r0_5, r1_2, r2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_3 == 0) {
        goto L_30ece4;
    }
    r1_3 = *gptr<u32>(r13 + 4u);
    r0_6 = *gptr<u32>(r13);
    guest::cpu()->r[13] = r13;
    r0_3 = call_0030e56c(r0_6, r1_3, r2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_3 == 0) {
        goto L_30ece4;
    }
    r0_7 = *gptr<u32>(r13);
    guest::cpu()->r[13] = r13;
    r0_3 = call_005bce04(r0_7, r4_1, r2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
L_30ece4:;
    r5 = r5 + 1u;
    if (s32(r5) < s32(4u)) {
        guest::preempt();
        goto L_30ec0e;
    }
    goto L_30ecee;
L_30ecee:;
    r13 = r13 + 0x1cu;  // (from the original)
    r4_6 = *gptr<u32>(r13);
    r5_1 = *gptr<u32>(r13 + 4);
    r6_1 = *gptr<u32>(r13 + 8);
    r7_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_6;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_0030ebec
GUEST_EXPORT(0x0030ebed, d_0030ebec::f_0030ebec);

// f_0030ef70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ef70 {

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x00301e64, u32(u32, u32, u32, u32)> call_00301e64;  // (from the original)
inline constexpr guest::Function<0x00301e6c, u32(u32, u32, u32, u32)> call_00301e6c;  // (from the original)
inline constexpr guest::Function<0x0030bc44, u32(u32, u32, u32, u32)> call_0030bc44;  // (from the original)
inline constexpr guest::Function<0x0030bc91, u32(u32, u32, u32, u32)> call_0030bc90;  // (from the original)

u32 f_0030ef70(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r3_3 = 0;
    u32 r5_1 = 0;
    u32 r1_2 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r4_1 = 0;
    u32 r5_2 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 tpc_1 = 0;
    u32 r0_7 = 0;
    u32 r4_2 = 0;
    u32 r5_3 = 0;
    u32 r6_2 = 0;
    u32 r7_2 = 0;
    u32 tpc_2 = 0;
    ea_1 = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r4);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r14);  // (from the original)
    r13 = ea_1;
    r7 = 0xau;  // (from the original)
    r5 = *gptr<u32>(r13);
    r6 = 1u;
    r4 = 0u;
    do {
L_30ef7a:;
        guest::cpu()->r[13] = r13;
        r0_1 = call_00301e20(r5, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_1 == 0) {
            goto L_30efa0;
        }
        if (!(r6 == 0)) {
            if (u32(*gptr<u8>(r5 + (0x25u << 8) + 8u)) == 6u) {  // (from the original)
                goto L_30efa0;
            }
        }
        r4 = r4 + 1u;
        r5 = r5 + 0x2518u;  // (from the original)
        guest::preempt();
    } while (r4 < r7);
    goto L_30efe2;
L_30efa0:;
    if (r4 >= 0xau) {  // (from the original)
        goto L_30efe2;
    }
    r0_2 = *gptr<u32>(r13 + 4u);
    guest::cpu()->r[13] = r13;
    r0_3 = call_00301e64(r0_2, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00301e6c(0xa83aecu, r0_3, r2_1, r3_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_4 = *gptr<u16>(*gptr<u32>(r13 + 4u) + 0x2cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_0030bc44(r0_4, r1_1, r2_2, r3_2);
    r1 = guest::cpu()->r[1];
    r3_3 = guest::cpu()->r[3];
    if (r0_5 == 0) {
        goto L_30efe2;
    }
    r5_1 = 0x2518u * r4 + *gptr<u32>(r13);  // (from the original)
    r1_2 = *gptr<u32>(r13 + 4u);
    guest::cpu()->r[13] = r13;
    call_002fbb30(r5_1, r1_2, 0x2518u, r3_3);  // (from the original)
    r3_4 = *gptr<u32>(r13 + 8u);
    r0_6 = *gptr<u32>(r13);
    guest::cpu()->r[13] = r13;
    call_0030bc90(r0_6, r5_1, r4, r3_4);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0xcu;  // (from the original)
    r4_1 = *gptr<u32>(r13);
    r5_2 = *gptr<u32>(r13 + 4);
    r6_1 = *gptr<u32>(r13 + 8);
    r7_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
    return r4;
L_30efe2:;
    r13 = r13 + 0xcu;  // (from the original)
    r0_7 = ~0u;
    r4_2 = *gptr<u32>(r13);
    r5_3 = *gptr<u32>(r13 + 4);
    r6_2 = *gptr<u32>(r13 + 8);
    r7_2 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc_2 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_3;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[13] = r13;
    return r0_7;
}

}  // namespace d_0030ef70
GUEST_EXPORT(0x0030ef71, d_0030ef70::f_0030ef70);

// f_0030eff4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030eff4 {

inline guest::global<u32, 0x0030f1e4> global_0030f1e4;  // (from the original)
inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline guest::global<u32, 0x0095decc> global_0095decc;  // (from the original)
inline constexpr guest::Function<0x002b6d20, u32(u32, u32, u32, u32)> call_002b6d20;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x00305784, u32(u32, u32, u32, u32)> call_00305784;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x0030af7c, u32(u32, u32, u32, u32)> call_0030af7c;  // (from the original)
inline constexpr guest::Function<0x0030b4a8, u32(u32, u32, u32, u32)> call_0030b4a8;  // (from the original)
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)
inline constexpr guest::Function<0x0075f780, u32(u32, u32, u32, u32)> call_0075f780;  // (from the original)

u32 f_0030eff4(u32 r0, u32 r1_unused, u32 r2, u32 r3, float S0) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    float S0_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    float S0_4 = 0;
    u32 r5_1 = 0;
    u32 r1_3 = 0;
    u32 r2_5 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_6 = 0;
    u32 r3_5 = 0;
    float S0_5 = 0;
    u32 r1_5 = 0;
    u32 r2_7 = 0;
    u32 r3_6 = 0;
    float S0_6 = 0;
    u32 r0_7 = 0;
    float S0_7 = 0;
    u32 r2_8 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r3_7 = 0;
    float S0_8 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_6 = 0;
    u32 r0_12 = 0;
    u32 r1_7 = 0;
    u32 r2_9 = 0;
    u32 r3_8 = 0;
    float S0_9 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r2_10 = 0;
    u32 r3_9 = 0;
    float S0_10 = 0;
    u32 r5_2 = 0;
    u32 r0_15 = 0;
    u32 res_1 = 0;
    u32 r3_10 = 0;
    u32 ea_1 = 0;
    u32 r3_11 = 0;
    u32 ea_2 = 0;
    u32 r0_16 = 0;
    float S0_11 = 0;
    u32 r0_17 = 0;
    u32 r1_8 = 0;
    u32 r2_11 = 0;
    u32 r3_12 = 0;
    float S0_12 = 0;
    u32 r0_18 = 0;
    u32 r2_12 = 0;
    u32 r3_13 = 0;
    float S0_13 = 0;
    u32 r0_19 = 0;
    u32 r1_9 = 0;
    u32 r1_10 = 0;
    u32 r2_13 = 0;
    u32 r3_14 = 0;
    float S0_14 = 0;
    u32 r1_11 = 0;
    float S0_15 = 0;
    u32 r0_20 = 0;
    r13 = r13 - 0xb0u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    call_00305784(r0, 1u, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    r7 = 0u;
    r0_1 = *gptr<u32>(0x2754u + r4);  // (from the original)
    *gptr<u8>(r0_1 + 0xb7u) = u8(u32(*gptr<u8>(r0_1 + 0xb7u)) & 0xfeu | 1u);  // (from the original)
    r0_2 = *gptr<u32>(0x2750u + r4);  // (from the original)
    r1_1 = u32(*gptr<u8>(r0_2 + 0xb7u)) & 0xfeu;  // (from the original)
    *gptr<u8>(r0_2 + 0xb7u) = u8(r1_1);  // (from the original)
    r0_3 = r4 + 0x4d0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    call_00568c10(r0_3, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    r0_4 = *global_0095362c + 0x28ecu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    r0_5 = call_0075f780(r0_4, r1_2, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    if (r0_5 == 0) {
        goto L_30f084;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    call_0030af7c(r4, 0u, r2_3, r3_3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
L_30f068:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    call_0030b4a8(r4, 1u, r2, r3);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    S0_4 = guest::cpu()->s[0];
    if (u32(*gptr<u8>(r4 + 0x925u)) != 1u) {  // (from the original)
        goto L_30f0ec;
    }
    goto L_30f09c;
L_30f084:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    call_0030af7c(r4, 1u, r2_3, r3_3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    guest::preempt();
    goto L_30f068;
L_30f09c:;
    r5_1 = r4 + 0x2760u;  // (from the original)
    r1_3 = r4 + 0x458u;  // (from the original)
    r2_5 = *gptr<u32>(r5_1);
    r0_6 = r4 + 0x294u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    call_00568630(r0_6, r1_3, r2_5, 0u);
    r1_4 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    S0_5 = std::bit_cast<float>(*global_0030f1e4);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    call_005697e0(r1_3, r1_4, r2_6, r3_5);
    r1_5 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    S0_6 = guest::cpu()->s[0];
    r0_7 = r4 + 0x294u;  // (from the original)
    *gptr<u8>(r4 + 0x925u) = u8(r7);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_6;
    call_00568c10(r0_7, r1_5, r2_7, r3_6);
    S0_7 = guest::cpu()->s[0];
    r2_8 = *gptr<u32>(r5_1);
    r0_8 = r4 + 0x294u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_7;
    call_00568984(r0_8, r1_3, r2_8, 0u);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    S0_4 = guest::cpu()->s[0];
L_30f0ec:;
    r0_9 = r4 + 0x92cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    call_002b6d20(r0_9, 1u, r2_4, r3_4);
    r3_7 = guest::cpu()->r[3];
    S0_8 = guest::cpu()->s[0];
    *gptr<u8>(r4 + 0xa05u) = u8(r7);  // (from the original)
    r0_10 = *gptr<u32>(0x2240u + r4);  // (from the original)
    *gptr<u8>(r0_10 + 0xb7u) = u8(u32(*gptr<u8>(r0_10 + 0xb7u)) & 0xfeu);  // (from the original)
    r0_11 = r13 + 8u;
    r1_6 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_8;
    r0_12 = call_003083bc(r0_11, r1_6, 0x3cu, r3_7);  // (from the original)
    r1_7 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    S0_9 = guest::cpu()->s[0];
    r6 = 0x90a1f0u;  // (from the original)
    *gptr<u32>(r0_12) = u32(r6);
    r0_13 = r0_12 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_9;
    r0_14 = call_005f4bfc(r0_13, r1_7, r2_9, r3_8);
    r2_10 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    S0_10 = guest::cpu()->s[0];
    r5_2 = r0_14 - 0xcu;  // (from the original)
    r0_15 = r0_14 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_10;
    call_002f825c(r0_15, 0x78u, r2_10, r3_9);  // (from the original)
    S0 = guest::cpu()->s[0];
    r2 = 0x8906ecu;  // (from the original)
    r0 = r5_2 + 0x16u;  // (from the original)
    r1 = 0x1eu;  // (from the original)
    do {
L_30f14c:;
        res_1 = r1 - 1u;
        r1 = res_1;
        r3_10 = u32(*gptr<u16>(r2));
        ea_1 = r0 + 2u;
        *gptr<u16>(ea_1) = u16(r3_10);
        r3_11 = u32(*gptr<u16>(r2));
        ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_11);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    r0_16 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    call_005ea8f8(r0_16, 0u, r2, r3_11);
    S0_11 = guest::cpu()->s[0];
    *gptr<u32>(r13) = u32(r7);
    r0_17 = *global_0095decc;
    r1_8 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_11;
    call_005ea964(r0_17, r1_8, 0x30f1f8u, 0x17du);  // (from the original)
    r2_11 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    S0_12 = guest::cpu()->s[0];
    r0_18 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_12;
    call_005ea8dc(r0_18, 0u, r2_11, r3_12);
    r2_12 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    S0_13 = guest::cpu()->s[0];
    r0_19 = r4 + 0x34f0u;  // (from the original)
    r1_9 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_13;
    call_005e2e50(r0_19, r1_9, r2_12, r3_13);
    r1_10 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    S0_14 = guest::cpu()->s[0];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_14;
    call_005e2f94(r0_19, r1_10, r2_13, r3_14);
    r1_11 = guest::cpu()->r[1];
    S0_15 = guest::cpu()->s[0];
    *gptr<u32>(r13 + 8u) = u32(r6);
    r0_20 = r13 + 8u;
    r13 = r13 + 0xb0u;  // (from the original)
    guest::cpu()->r[1] = r1_11;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_15;
    return r0_20;
}

}  // namespace d_0030eff4
GUEST_EXPORT(0x0030eff4, d_0030eff4::f_0030eff4);

// f_0030f48c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030f48c {

struct __attribute__((packed)) Object_0030f48c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0030f48c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0030f48c_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00100e5d, u32(u32, u32, u32, u32)> call_00100e5c;  // (from the original)

u32 f_0030f48c(gptr<Object_0030f48c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r3_1 = 0;
    u32 r5_1 = 0;
    u32 r2_1 = 0;
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 ea_3 = 0;
    u32 r4_2 = 0;
    u32 r5_2 = 0;
    u32 r6_1 = 0;
    u32 v_1 = 0;
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    ea_2 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_2) = u32(r4);
    *gptr<u32>(ea_2 + 4) = u32(r5);
    *gptr<u32>(ea_2 + 8) = u32(r6);
    *gptr<u32>(ea_2 + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r3_1 = r13 + 0x18u;  // (from the original)
    r5_1 = arg0->word_4;
    r2_1 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    r4_1 = arg0->word_8;
    guest::cpu()->r[13] = r13;
    r0_1 = call_00100e5c(r5_1, r4_1, r2_1, r3_1);
    if (r0_1 >> 0x1f == (r0_1 & (r0_1 ^ r0_1)) >> 0x1f) {  // (from the original)
        if (s32(r0_1) < s32(r4_1)) {
            goto L_30f4d0;
        }
    }
    r0_1 = r4_1 - 1u;
    *gptr<u8>(r5_1 + r4_1 - 1u) = u8(0u);
L_30f4d0:;
    ea_3 = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4_2 = *gptr<u32>(ea_3);
    r5_2 = *gptr<u32>(ea_3 + 4);
    r6_1 = *gptr<u32>(ea_3 + 8);
    v_1 = *gptr<u32>(r13);
    r13 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[1] = 0u;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_0030f48c
GUEST_EXPORT(0x0030f48c, d_0030f48c::f_0030f48c);

// f_0030fc18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030fc18 {

struct __attribute__((packed)) Object_0030fc18_0 {
    u8 unknown_0[0x55d4];  // (not used here)
    u8 byte_55d4;
    u8 byte_55d5;
    u8 unknown_55d6[0x12f];  // (not used here)
    u8 byte_5705;
};
GUEST_OFFSET(Object_0030fc18_0, byte_55d4, 0x55d4);  // (from the original)
GUEST_OFFSET(Object_0030fc18_0, byte_55d5, 0x55d5);  // (from the original)
GUEST_OFFSET(Object_0030fc18_0, byte_5705, 0x5705);  // (from the original)

struct __attribute__((packed)) Object_0030fc18_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0030fc18_1, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00301da8, u32(u32, u32, u32, u32)> call_00301da8;  // (from the original)

u32 f_0030fc18(gptr<Object_0030fc18_0> arg0, gptr<Object_0030fc18_1> arg1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r4_1 = 0;
    u32 res_1 = 0;
    u32 r5_1 = 0;
    u32 zf_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 zf_2 = 0;
    u32 zf_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4_1 = r1;
    res_1 = u32(arg0->byte_5705) << 0x1c;  // (from the original)
    r1 = res_1;
    if (!(res_1 >> 0x1f)) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r5_1 = r0 + 0x55d4u;  // (from the original)
    zf_1 = u32(arg0->byte_55d5) == 0x1du;  // (from the original)
    if (zf_1) {
        zf_1 = u32(arg0->byte_55d4) == 2u;
    }
    if (zf_1) {
        r0_1 = arg1->word_0;
        r0_2 = call_00301da8(r0_1, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            goto L_30fc80;
        }
    }
    r1 = u32(*gptr<u8>(r4_1 + 5u));
    zf_2 = u32(*gptr<u8>(r5_1)) == u32(*gptr<u8>(r4_1 + 4u));
    if (zf_2) {
        zf_2 = u32(*gptr<u8>(r5_1 + 1u)) == r1;
    }
    if (!zf_2) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 1u;
L_30fc80:;
    zf_3 = u32(*gptr<u8>(r4_1 + 5u)) == 0x1cu;  // (from the original)
    if (zf_3) {
        zf_3 = u32(*gptr<u8>(r4_1 + 4u)) == 2u;
    }
    if (zf_3) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0030fc18
GUEST_EXPORT(0x0030fc18, d_0030fc18::f_0030fc18);

// f_0030feb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030feb4 {

inline constexpr guest::Function<0x005bdb34, u32(u32, u32, u32, u32)> call_005bdb34;  // (from the original)

u32 f_0030feb4(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 cf_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 cf_2 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r6 = r0;
    r4 = 0u;
    r5 = 0xa82b90u;  // (from the original)
    r7 = 0x21u;  // (from the original)
L_30fec8:;
    cf_1 = r4 >= 0xau;  // (from the original)
    if (!cf_1) {
        r1 = r4 + (r4 << 2);
    }
    r0_1 = r5 + 0xc8u;  // (from the original)
    if (!cf_1) {
        r0_1 = r0_1 + (r1 << 4);
    }
    r0_2 = u32(*gptr<u8>(r0_1 + 0x24u));  // (from the original)
    if (r6 == 0) {
        if (r0_2 == 0x12u) {  // (from the original)
            goto L_30ff10;
        }
        r0_2 = call_005bdb34(r0_2, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_2 == 0xbu) {  // (from the original)
            goto L_30ff10;
        }
    }
    cf_2 = r4 >= 0xau;  // (from the original)
    if (!cf_2) {
        r1 = r4 + (r4 << 2);
    }
    r0_2 = r5 + 0xc8u;  // (from the original)
    if (!cf_2) {
        r0_2 = r0_2 + (r1 << 4);
    }
    *gptr<u8>(r0_2 + 0x24u) = u8(r7);  // (from the original)
L_30ff10:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_30fec8;
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_0030feb4
GUEST_EXPORT(0x0030feb4, d_0030feb4::f_0030feb4);
