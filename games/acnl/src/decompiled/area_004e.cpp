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
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_001531b8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 1u) {
        r0_1 = 0u;
    }
    guest::cpu()->r[13] += 8u;
    return r0_1;
}

}  // namespace d_004e0288
GUEST_EXPORT(0x004e0288, d_004e0288::f_004e0288);

// f_004e029c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e029c {

inline guest::global<u32, 0x004e03ac> global_004e03ac;  // (from the original)
inline guest::global<u32, 0x004e03b0> global_004e03b0;  // (from the original)
inline constexpr guest::Function<0x004dfb58, u32(u32, u32, u32, u32)> call_004dfb58;  // (from the original)

u32 f_004e029c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    float S0_1 = 0;
    u32 r0_1 = 0;
    float S0_2 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 res_1 = 0;
    u32 r12_1 = 0;
    u32 r12_2 = 0;
    u32 res_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r5_1 = 0;
    u32 res_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    if (r3 == 0) {
        S0_1 = std::bit_cast<float>(*global_004e03b0);
    } else {
        S0_1 = std::bit_cast<float>(*global_004e03ac);
    }
    *gptr<u32>(r13 + 0xcu) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    call_004dfb58(r0_1, r0, r1, r3);
    S0_2 = guest::cpu()->s[0];
    r0_2 = *gptr<u32>(r13);
    r1_1 = *gptr<u32>(r13 + 4);
    r2_1 = *gptr<u32>(r13 + 8);
    r3_1 = 0x9aae90u + (r2 + (r2 << 1) + (r2 << 3) << 2) + 4u;  // (from the original)
    res_1 = r0_2 & ~0x80000000u;  // (from the original)
    r12_1 = res_1;
    if (res_1 != 0) {
        r12_1 = (r0_2 << 1 >> 0x18) - 0x70u;  // (from the original)
        if (r12_1 >> 0x1f != (r12_1 & (r12_1 ^ r12_1)) >> 0x1f) {  // (from the original)
            r12_2 = r0_2 >> 0x1f << 0xf;  // (from the original)
            goto L_4e031c;
        }
    }
    r12_2 = uxth((r0_2 & ~0x1f800000u) >> 0xd | r12_1 << 0xa | r0_2 >> 0x1f << 0xf);  // (from the original)
L_4e031c:;
    res_2 = r1_1 & ~0x80000000u;  // (from the original)
    r0_3 = res_2;
    if (res_2 != 0) {
        r0_3 = (r1_1 << 1 >> 0x18) - 0x70u;  // (from the original)
        if (r0_3 >> 0x1f != (r0_3 & (r0_3 ^ r0_3)) >> 0x1f) {  // (from the original)
            r0_4 = r1_1 >> 0x1f << 0xf;  // (from the original)
            goto L_4e0358;
        }
    }
    r5_1 = r1_1 & ~0x1f800000u;  // (from the original)
    r1_1 = r1_1 >> 0x1f;  // (from the original)
    r0_4 = uxth(r5_1 >> 0xd | r0_3 << 0xa | r1_1 << 0xf);  // (from the original)
L_4e0358:;
    *gptr<u32>(r3_1 + 0x10u) = u32(r12_2 | r0_4 << 0x10);  // (from the original)
    res_3 = r2_1 & ~0x80000000u;  // (from the original)
    r0_5 = res_3;
    if (res_3 != 0) {
        r0_5 = (r2_1 << 1 >> 0x18) - 0x70u;  // (from the original)
        if (r0_5 >> 0x1f != (r0_5 & (r0_5 ^ r0_5)) >> 0x1f) {  // (from the original)
            r0_6 = r2_1 >> 0x1f << 0xf;  // (from the original)
            *gptr<u32>(r3_1 + 0x14u) = u32(r0_6);  // (from the original)
            *gptr<u8>(r3_1 + 0x18u) = u8(r3);  // (from the original)
            r13 = r13 + 0x20u;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_2;
            return r0_6;
        }
    }
    r1_1 = (r2_1 & ~0x1f800000u) >> 0xd;  // (from the original)
    r0_6 = uxth(r1_1 | r0_5 << 0xa | r2_1 >> 0x1f << 0xf);  // (from the original)
    *gptr<u32>(r3_1 + 0x14u) = u32(r0_6);  // (from the original)
    *gptr<u8>(r3_1 + 0x18u) = u8(r3);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    return r0_6;
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
    u32 r13 = guest::cpu()->r[13];
    u32 r12_1 = 0;
    float S0_1 = 0;
    r13 = r13 - 8;
    r12_1 = *gptr<u32>(r13 + 8u);
    S0_1 = std::bit_cast<float>(*gptr<u32>(r13 + 0xcu));  // (from the original)
    arg0->word_c = u32(r1);
    arg0->word_14 = u32(5u);
    arg0->half_20 = u16(0u);
    arg0->word_18 = u32(r2);
    arg0->half_1c = u16(r3);
    arg0->half_1e = u16(r12_1);
    arg0->word_10 = u32(std::bit_cast<u32>(S0_1));
    r13 = r13 + 8;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
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
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    r13 = r13 - 8;
    ea_1 = r13 + 8u;
    r4_1 = *gptr<u32>(ea_1);
    r5_1 = *gptr<u32>(ea_1 + 4);
    arg0->word_c = u32(r1);
    arg0->word_10 = u32(0u);
    arg0->word_18 = u32(r2);
    arg0->word_14 = u32(0u);
    arg0->half_1c = u16(r3);
    arg0->half_1e = u16(r4_1);
    arg0->half_20 = u16(r5_1);
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
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_00138920(0x9aae5cu, r0, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    guest::cpu()->r[13] += 8u;
    return call_0013f134(0x9aae5cu, r0, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_004e09c8
GUEST_EXPORT(0x004e09c8, d_004e09c8::f_004e09c8);

// f_004e0a48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e0a48 {

inline constexpr guest::Function<0x004ee364, u32(u32, u32, u32, u32)> call_004ee364;  // (from the original)

u32 f_004e0a48() {
    return call_004ee364(0x951530u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_004e0a48
GUEST_EXPORT(0x004e0a48, d_004e0a48::f_004e0a48);

// f_004e0cbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e0cbc {

inline constexpr guest::Function<0x007457e8, u32(u32, u32, u32, u32)> call_007457e8;  // (from the original)

u32 f_004e0cbc(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_007457e8(0x9c7ad4u, r0, r1, r2);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_1 + 1u == 0) {
        r0_2 = 0u;
    } else {
        r0_2 = 1u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_004e0cbc
GUEST_EXPORT(0x004e0cbc, d_004e0cbc::f_004e0cbc);

// f_004e10ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e10ac {

inline guest::global<u32, 0x004e10c4> global_004e10c4;  // (from the original)
inline guest::global<u32, 0x0085f2d0> global_0085f2d0;  // (from the original)

u32 f_004e10ac() {
    float S1_1 = 0;
    float S0_1 = 0;
    S1_1 = std::bit_cast<float>(*global_004e10c4);
    S0_1 = std::bit_cast<float>(*global_0085f2d0) * S1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return 0x85f2d0u;  // (from the original)
}

}  // namespace d_004e10ac
GUEST_EXPORT(0x004e10ac, d_004e10ac::f_004e10ac);

// f_004e1204: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e1204 {

inline constexpr guest::Function<0x004e1668, u32(u32, u32, u32, u32)> call_004e1668;  // (from the original)

u32 f_004e1204(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 r14 = guest::cpu()->r[14];
    u32 cf_1 = 0;
    u32 res_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = 0u;
    *gptr<u8>(0x9529d4u + 1u) = u8(r4);  // (from the original)
    *gptr<u8>(0x9529d4u + 2u) = u8(r4);  // (from the original)
    *gptr<u8>(0x9529d4u + 3u) = u8(r4);  // (from the original)
    call_004e1668(0x9c8fd4u, r1, r2, r3);  // (from the original)
    r14 = 0x9c7ad4u;  // (from the original)
    r0 = 0u;
    r2 = ~0u;
L_4e1230:;
    r1 = 0u;
    r3 = 0x50u;  // (from the original)
    r12 = r14 + (r0 + (r0 << 2) << 4);
    r5 = r14 + (r0 << 4);
    do {
L_4e1244:;
        cf_1 = r1 >= 0x10u;  // (from the original)
        if (!cf_1) {
            cf_1 = r0 >= 0x10u;  // (from the original)
        }
        *gptr<u8>(r12 + r1) = u8(r2);
        if (!cf_1) {
            *gptr<u8>(r5 + r1 + 0x1400u) = u8(r2);  // (from the original)
        }
        res_1 = r3 - 1u;
        r3 = res_1;
        r1 = r1 + 1u;
        guest::preempt();
    } while (res_1 != 0);
    r0 = r0 + 1u;
    if (r0 < 0x40u) {  // (from the original)
        guest::preempt();
        goto L_4e1230;
    }
    r2 = 0x9c7a14u;  // (from the original)
    r1 = 0u;
    r0 = r1;
    do {
L_4e1284:;
        r0 = r0 + 2u;
        *gptr<u32>(r2 + (r1 << 2)) = u32(r4);
        r1_1 = r1 + 1u;
        *gptr<u32>(r2 + (r1_1 << 2)) = u32(r4);
        r1 = r1_1 + 1u;
        guest::preempt();
    } while (r0 < 0x30u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_004e1204
GUEST_EXPORT(0x004e1204, d_004e1204::f_004e1204);

// f_004e12b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e12b4 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x004e1768, u32(u32, u32, u32, u32)> call_004e1768;  // (from the original)
inline constexpr guest::Function<0x005b42fc, u32(u32, u32, u32, u32)> call_005b42fc;  // (from the original)

u32 f_004e12b4(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 cf_1 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_004e1768(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    zf_1 = r0_1 == 0;
    if (!zf_1) {
        r4 = *gptr<u32>(r0_1);
        zf_1 = r4 + 1u == 0;
    }
    if (!zf_1) {
        r0_2 = call_002f74c8(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r0_3 = call_005b42fc(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        cf_1 = r0_3 >= 0x30u;  // (from the original)
        if (!cf_1 || r0_3 == 0x30u) {  // (from the original)
            cf_1 = r4 >= r0_3;
        }
        if (!cf_1) {
            r0_4 = *gptr<u32>(0x9c7a14u + (r4 << 2));  // (from the original)
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            return r0_4;
        }
    }
    r0_4 = 0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0_4;
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
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 zf_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 zf_2 = 0;
    u32 r0_8 = 0;
    u32 zf_3 = 0;
    u32 r0_9 = 0;
    u32 zf_4 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 zf_5 = 0;
    u32 r0_12 = 0;
    u32 zf_6 = 0;
    u32 r0_13 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r0_1 = call_004e12b4(r0, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = call_004e1768(r0, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_3 = call_004e12b4(r0, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_4 = call_004e1768(r0, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    zf_1 = r0_1 == 0;
    if (!zf_1) {
        zf_1 = r0_2 == 0;
    }
    if (zf_1) {
        goto L_4e146c;
    }
    r0_5 = call_007519d8(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_5 == 0) {
        r0_6 = call_00751990(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        if (r0_6 == 0) {
            goto L_4e146c;
        }
    }
    r0_7 = call_00750eb4(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    zf_2 = r0_7 == 0;
    if (!zf_2) {
        zf_2 = u32(*gptr<u8>(r0_2 + 4u)) == 0;
    }
    if (!zf_2) {
        goto L_4e146c;
    }
    r0_8 = call_00573aac(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_8 != 0) {
        goto L_4e14dc;
    }
L_4e146c:;
    zf_3 = r0_3 == 0;
    if (!zf_3) {
        zf_3 = r0_4 == 0;
    }
    if (zf_3) {
        goto L_4e14a4;
    }
    r0_9 = call_00750eb4(r0_3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    zf_4 = r0_9 == 0;
    if (!zf_4) {
        zf_4 = u32(*gptr<u8>(r0_4 + 4u)) == 0;
    }
    if (!zf_4) {
        goto L_4e14a4;
    }
    r0_10 = call_00573aac(r0_3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_10 != 0) {
        r0_11 = r0_3;
        goto L_4e14e0;
    }
L_4e14a4:;
    zf_5 = r0_1 == 0;
    if (!zf_5) {
        zf_5 = r0_2 == 0;
    }
    if (zf_5) {
        goto L_4e14e4;
    }
    r0_12 = call_00750eb4(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    zf_6 = r0_12 == 0;
    if (!zf_6) {
        zf_6 = u32(*gptr<u8>(r0_2 + 4u)) == 0;
    }
    if (!zf_6) {
        goto L_4e14e4;
    }
    r0_13 = call_00573aac(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_13 == 0) {
        goto L_4e14e4;
    }
L_4e14dc:;
    r0_11 = r0_1;
L_4e14e0:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_11;
L_4e14e4:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_004e13d0
GUEST_EXPORT(0x004e13d0, d_004e13d0::f_004e13d0);

// f_004e14ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e14ec {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x004e1768, u32(u32, u32, u32, u32)> call_004e1768;  // (from the original)
inline constexpr guest::Function<0x005b42fc, u32(u32, u32, u32, u32)> call_005b42fc;  // (from the original)
inline constexpr guest::Function<0x00751870, u32(u32, u32, u32, u32)> call_00751870;  // (from the original)

u32 f_004e14ec(u32 r0) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r7 = guest::cpu()->r[7];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r5_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 cf_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 res_1 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = 1u;
    r7 = r0;
L_4e14f8:;
    r1_1 = r4 & 0xffu;  // (from the original)
    r0_1 = call_004e1768(r7, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        goto L_4e1560;
    }
    r5_1 = *gptr<u32>(r0_1);
    if (r5_1 >> 0x1f != (r5_1 & (r5_1 ^ r5_1)) >> 0x1f) {  // (from the original)
        goto L_4e1560;
    }
    r0_2 = call_002f74c8(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_3 = call_005b42fc(r0_2, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    cf_1 = r0_3 >= 0x30u;  // (from the original)
    if (!cf_1 || r0_3 == 0x30u) {  // (from the original)
        cf_1 = r5_1 >= r0_3;
    }
    if (cf_1) {
        goto L_4e1560;
    }
    r0_4 = *gptr<u32>(0x9c7a14u + (r5_1 << 2));  // (from the original)
    if (r0_4 == 0) {
        goto L_4e1560;
    }
    r0_5 = call_00751870(r0_4, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_5 == 0x2du) {  // (from the original)
        r0_6 = 1u;
        goto L_4e155c;
    }
L_4e1558:;
    r0_6 = 0u;
L_4e155c:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_6;
L_4e1560:;
    res_1 = r4 - 1u;
    r4 = res_1;
    if (!(res_1 >> 0x1f)) {  // (from the original)
        guest::preempt();
        goto L_4e14f8;
    }
    guest::preempt();
    goto L_4e1558;
}

}  // namespace d_004e14ec
GUEST_EXPORT(0x004e14ec, d_004e14ec::f_004e14ec);

// f_004e1668: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e1668 {

inline guest::global<u32, 0x004e16d4> global_004e16d4;  // (from the original)

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
    S0 = std::bit_cast<float>(*global_004e16d4);
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

// f_004e1a7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e1a7c {

inline guest::global<u8, 0x009529d4> global_009529d4;  // (from the original)

u32 f_004e1a7c() {
    u32 r0_1 = 0;
    r0_1 = u32(*global_009529d4);
    return r0_1;
}

}  // namespace d_004e1a7c
GUEST_EXPORT(0x004e1a7c, d_004e1a7c::f_004e1a7c);

// f_004e1a90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e1a90 {

inline guest::global<u8, 0x009529d4> global_009529d4;  // (from the original)

u32 f_004e1a90() {
    u32 r0_1 = 0;
    r0_1 = u32(*global_009529d4);
    return r0_1;
}

}  // namespace d_004e1a90
GUEST_EXPORT(0x004e1a90, d_004e1a90::f_004e1a90);

// f_004e1aa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e1aa4 {

inline constexpr guest::Function<0x004e1174, u32(u32, u32, u32, u32)> call_004e1174;  // (from the original)

u32 f_004e1aa4() {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_004e1174(0x572258u, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_004e1aa4
GUEST_EXPORT(0x004e1aa4, d_004e1aa4::f_004e1aa4);

// f_004e1ac4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e1ac4 {

inline guest::global<u32, 0x00975338> global_00975338;  // (from the original)
inline guest::global<u32, 0x009c79c8> global_009c79c8;  // (from the original)
inline constexpr guest::Function<0x00125b38, u32(u32, u32, u32, u32)> call_00125b38;  // (from the original)
inline constexpr guest::Function<0x003045a8, u32(u32, u32, u32, u32)> call_003045a8;  // (from the original)

u32 f_004e1ac4(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    r0_1 = *global_009c79c8;
    if (r0_1 != 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    ea_1 = r13 - 8;
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r14);
    r13 = r13 - 8;
    r0_2 = *global_00975338;
    guest::cpu()->r[13] = r13;
    r0_3 = call_003045a8(r0_2, r1, r2, r3);
    ea_2 = r13;
    r13 = r13 + 8;
    r4_1 = *gptr<u32>(ea_2);
    r14 = *gptr<u32>(ea_2 + 4);
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4_1;
    return call_00125b38(0x9c79c4u, 0x4e1b04u, r0_3, 0u);  // (from the original)
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
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r5_1 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r6_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 zf_1 = 0;
    u32 r4_2 = 0;
    u32 zf_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_6 = 0;
    r13 = r13 - 0x38u;  // (from the original)
    ea_1 = r13 + 0x38u;  // (from the original)
    r5_1 = *gptr<u32>(ea_1);
    ea_2 = r13 + 0x3cu;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r6_1 = *gptr<u32>(ea_2 + 4);
    guest::cpu()->r[13] = r13;
    r0_1 = call_007457e8(0x9c7ad4u, r1, r2, r5_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 + 1u != 0) {
        r0_2 = 0u;
        goto L_4e24c4;
    }
    zf_1 = r4_1 == 0;
    r4_2 = 0u;
    if (!zf_1) {
        r4_2 = 1u;
    }
    zf_2 = r6_1 == 0;
    if (zf_2) {
        zf_2 = r4_2 == 0;
    } else {
        r4_2 = 4u;
    }
    if (zf_2) {
        guest::cpu()->r[13] = r13;
        r0_3 = call_002f74c8(r0_1, r1_1, r2_1, r3_1);
        *gptr<u32>(r13) = u32(r0_3);
        guest::cpu()->r[13] = r13;
        call_00319aa4(r1, r2, r5_1, 1u);
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
    }
    r0_4 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc20c(r0_4, r1_1, r2_1, r3_1);
    r0_5 = r13 + 0xcu;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r4_2);
    *gptr<u32>(r13 + 4u) = u32(r5_1);
    *gptr<u32>(r13) = u32(r3);
    guest::cpu()->r[13] = r13;
    call_00691544(r0_5, r0, r1, r2);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_6 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006904b4(r0_6, r1_2, r2_2, r3_2);
    r1_1 = guest::cpu()->r[1];
    r0_2 = 1u;
L_4e24c4:;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_004e240c
GUEST_EXPORT(0x004e240c, d_004e240c::f_004e240c);

// f_004e24d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e24d0 {

inline guest::global<u8, 0x009529d4> global_009529d4;  // (from the original)

u32 f_004e24d0() {
    u32 r0_1 = 0;
    r0_1 = u32(*global_009529d4);
    return r0_1;
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
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_5 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_6 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_2 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r3_5 = 0;
    u32 r0_9 = 0;
    u32 r2_5 = 0;
    u32 r3_6 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    r13 = r13 - 0x30u;  // (from the original)
    r5 = r0;
    r6 = r1;
    guest::cpu()->r[13] = r13;
    r0_1 = call_006a5e34(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 8u) = u32(r0_1);
    if (r0_1 == 0) {
        goto L_4e25d8;
    }
    r10 = 0x865628u;  // (from the original)
    r4 = 0u;
    r11 = r4;
L_4e2530:;
    r0_2 = r10 + (r4 << 3);
    r8_1 = *gptr<u32>(r0_2) + r5;
    r9_1 = *gptr<u32>(r0_2 + 4u) + r6;
    r0_3 = *gptr<u32>(r13 + 8u);
    guest::cpu()->r[13] = r13;
    r0_4 = call_002feb00(r0_3, r8_1, r9_1, 0u);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        goto L_4e25e8;
    }
    guest::cpu()->r[13] = r13;
    r0_5 = call_002fcaf4(r0_4, r1_1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_5 != 0) {
        goto L_4e25e8;
    }
    r0_6 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_6, r0_4, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_7 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_8 = call_002fe574(r0_7, 0x95bfe0u, r2_3, r3_3);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_8 != 0) {
        r3_5 = *gptr<u32>(r13 + 8u);
        *gptr<u32>(r13) = u32(r11);
        guest::cpu()->r[13] = r13;
        r0_9 = call_004e0cec(r8_1, r9_1, 0u, r3_5);
        r2_5 = guest::cpu()->r[2];
        r3_6 = guest::cpu()->r[3];
        r0_10 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r0_10, r0_9, r2_5, r3_6);
        r1_2 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
    }
    r0_11 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_12 = call_00303c98(r0_11, r1_2, r2_4, r3_4);
    r1_1 = guest::cpu()->r[1];
    if (r0_12 == 0) {
        goto L_4e25e0;
    }
    r0_1 = 1u;
L_4e25d8:;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
L_4e25e0:;
L_4e25e8:;
    r4 = r4 + 1u;
    if (r4 < 4u) {
        guest::preempt();
        goto L_4e2530;
    }
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_004e2504
GUEST_EXPORT(0x004e2504, d_004e2504::f_004e2504);

// f_004e263c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e263c {


void f_004e263c(u32 r0) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12_1 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    guest::cpu()->r[13] -= 0xcu;  // (from the original)
    r2 = 0u;
    r4 = r2;
    r5 = 0xa5u;  // (from the original)
    do {
L_4e264c:;
        r12_1 = r0 + r2;
        r1_1 = u32(*gptr<u8>(r12_1 + 8u));
        if (!(r1_1 >= 0xa5u)) {  // (from the original)
            r1_1 = r0 + (r2 << 1);
            r3_1 = u32(*gptr<u16>(r1_1));
            if (!(r3_1 == 0)) {
                if (r3_1 >= 1u) {
                    *gptr<u16>(r1_1) = u16(r3_1 - 1u);
                } else {
                    *gptr<u16>(r1_1) = u16(r4);
                }
            }
            if (u32(*gptr<u16>(r1_1)) == 0) {
                *gptr<u8>(r12_1 + 8u) = u8(r5);
                *gptr<u16>(r1_1 + 0xcu) = u16(r4);  // (from the original)
            }
        }
        r2 = r2 + 1u;
        guest::preempt();
    } while (r2 < 4u);
    guest::cpu()->r[13] += 0xcu;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_004e263c
GUEST_EXPORT(0x004e263c, d_004e263c::f_004e263c);

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
    arg0->word_8 = u32(0u);
    arg0->word_0 = u32(0u);
    arg0->word_4 = u32(0u);
    arg0->byte_d = u8(0u);
    arg0->byte_c = u8(0u);
    return;
}

}  // namespace d_004e26a0
GUEST_EXPORT(0x004e26a0, d_004e26a0::f_004e26a0);

// f_004e26bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e26bc {

inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)
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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 ea_1 = 0;
    u32 r3_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r1_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r0_7 = 0;
    u32 r2_5 = 0;
    u32 r3_6 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r3_7 = 0;
    u32 r0_9 = 0;
    u32 r2_7 = 0;
    u32 r3_8 = 0;
    u32 r5_1 = 0;
    u32 r1_6 = 0;
    u32 r0_10 = 0;
    u32 r1_7 = 0;
    u32 r2_8 = 0;
    u32 r3_9 = 0;
    u32 r2_9 = 0;
    u32 r1_8 = 0;
    u32 r1_9 = 0;
    u32 r0_11 = 0;
    r13 = r13 - 0xa8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_0076c648(r1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_4e27e0;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_00536060(r1, r1_1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_4e27e0;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_00536060(r1, r1_1, r2_2, r3_2);
    ea_1 = r13 + 4u;
    *gptr<u32>(ea_1) = u32(r13 + 0xcu);  // (from the original)
    *gptr<u32>(ea_1 + 4) = u32(0x40u);  // (from the original)
    r3_3 = u32(*global_008c9f1c);
    r1_2 = *gptr<u32>(r13 + 4u) - 1u;
    *gptr<u8>(0x40u + r1_2) = u8(r3_3);  // (from the original)
    *gptr<u8>(r13 + 0xcu) = u8(u32(*global_008c9f1c));  // (from the original)
    *gptr<u32>(r13) = u32(0x904950u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_00768b6c(r1, r1_2, 0x40u, r3_3);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_4 != 0) {
        r1_4 = r13;
        r0_5 = r13 + 0x70u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_6 = call_0054a644(r0_5, r1_4, r2_3, r3_4);
        r2_4 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_7 = call_00544fec(r0_6, 0x4e27f4u, r2_4, r3_5);  // (from the original)
        r2_5 = guest::cpu()->r[2];
        r3_6 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_8 = call_00544fec(r0_7, r0_3, r2_5, r3_6);
        r1_5 = guest::cpu()->r[1];
        r2_6 = guest::cpu()->r[2];
        r3_7 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_9 = call_0076bf68(r1, r1_5, r2_6, r3_7);
        r2_7 = guest::cpu()->r[2];
        r3_8 = guest::cpu()->r[3];
        *gptr<u32>(r13 + 0x4cu) = u32(r0_9);  // (from the original)
        r5_1 = r13 + 0x4cu;  // (from the original)
        r1_6 = r13 + 0x50u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_10 = call_00544a20(r0_8, r1_6, r2_7, r3_8);
        r1_7 = guest::cpu()->r[1];
        r2_8 = guest::cpu()->r[2];
        r3_9 = guest::cpu()->r[3];
        if (r0_10 != 0) {
            r2_9 = *gptr<u32>(r0_8 + 4u);
            if (u32(*gptr<u8>(r13 + 0x50u)) == 0) {  // (from the original)
                r1_8 = 0u;
            } else {
                r1_8 = r13 + 0x50u;  // (from the original)
            }
            guest::cpu()->r[13] = r13;
            call_00544d8c(r5_1, r1_8, r2_9, r3_9);
            r1_7 = guest::cpu()->r[1];
            r2_8 = guest::cpu()->r[2];
            r3_9 = guest::cpu()->r[3];
        }
        guest::cpu()->r[13] = r13;
        call_00544f18(r0_8, r1_7, r2_8, r3_9);
        r1_9 = r13;
        guest::cpu()->r[13] = r13;
        r0_11 = call_004ee55c(r0, r1_9, r2, 0x80u);  // (from the original)
        r1_3 = guest::cpu()->r[1];
        if (r0_11 == 0) {
            r13 = r13 + 0xa8u;  // (from the original)
            guest::cpu()->r[1] = r1_3;
            guest::cpu()->r[13] = r13;
            return r0_11;
        }
    }
    r0_11 = 1u;
    r13 = r13 + 0xa8u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_11;
L_4e27e0:;
    r13 = r13 + 0xa8u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_004e26bc
GUEST_EXPORT(0x004e26bc, d_004e26bc::f_004e26bc);

// f_004e2cfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e2cfc {

inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)
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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 ea_1 = 0;
    u32 r2_3 = 0;
    u32 r4_1 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_7 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_9 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r5_1 = 0;
    u32 r1_5 = 0;
    u32 r0_10 = 0;
    u32 r1_6 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r2_10 = 0;
    u32 r1_7 = 0;
    u32 r1_8 = 0;
    u32 r0_11 = 0;
    r13 = r13 - 0xb0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_0076c648(r1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_4e2e18;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_00536060(r1, r1_1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_4e2e18;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_00536060(r1, r1_1, r2_2, r3_2);
    ea_1 = r13 + 0x2cu;  // (from the original)
    *gptr<u32>(ea_1) = u32(r13 + 0x34u);  // (from the original)
    *gptr<u32>(ea_1 + 4) = u32(0x40u);  // (from the original)
    r2_3 = *gptr<u32>(r13 + 0x30u);  // (from the original)
    r4_1 = 1u;
    r3_3 = u32(*global_008c9f1c);
    *gptr<u8>(r2_3 + (r13 + 0x33u)) = u8(r3_3);  // (from the original)
    *gptr<u8>(r13 + 0x34u) = u8(u32(*global_008c9f1c));  // (from the original)
    *gptr<u32>(r13 + 0x28u) = u32(0x904950u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_00768b6c(r1, 0x8c9f1cu, r2_3, r3_3);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_4 != 0) {
        r1_3 = r13 + 0x28u;  // (from the original)
        r0_5 = r13 + 0x78u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_6 = call_0054a644(r0_5, r1_3, r2_4, r3_4);
        r2_5 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_7 = call_00544fec(r0_6, 0x4e2e2cu, r2_5, r3_5);  // (from the original)
        r2_6 = guest::cpu()->r[2];
        r3_6 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_8 = call_00544fec(r0_7, r0_3, r2_6, r3_6);
        r1_4 = guest::cpu()->r[1];
        r2_7 = guest::cpu()->r[2];
        r3_7 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_9 = call_0076bf68(r1, r1_4, r2_7, r3_7);
        r2_8 = guest::cpu()->r[2];
        r3_8 = guest::cpu()->r[3];
        *gptr<u32>(r13 + 0x74u) = u32(r0_9);  // (from the original)
        r5_1 = r13 + 0x74u;  // (from the original)
        r1_5 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        r0_10 = call_00544a20(r0_8, r1_5, r2_8, r3_8);
        r1_6 = guest::cpu()->r[1];
        r2_9 = guest::cpu()->r[2];
        r3_9 = guest::cpu()->r[3];
        if (r0_10 != 0) {
            r2_10 = *gptr<u32>(r0_8 + 4u);
            if (u32(*gptr<u8>(r13 + 8u)) == 0) {
                r1_7 = 0u;
            } else {
                r1_7 = r13 + 8u;
            }
            guest::cpu()->r[13] = r13;
            call_00544d8c(r5_1, r1_7, r2_10, r3_9);
            r1_6 = guest::cpu()->r[1];
            r2_9 = guest::cpu()->r[2];
            r3_9 = guest::cpu()->r[3];
        }
        guest::cpu()->r[13] = r13;
        call_00544f18(r0_8, r1_6, r2_9, r3_9);
        r1_8 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_11 = call_00317a50(r0, r1_8, r2, 0x80u);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        r4_1 = r0_11;
    }
    r13 = r13 + 0xb0u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r4_1;
L_4e2e18:;
    r13 = r13 + 0xb0u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return 1u;
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
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 cf_1 = 0;
    u32 r5_1 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r6_1 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f74c8(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_005b42fc(r0_1, r1_1, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    r4 = 0u;
    if (r0 < 0u || r0 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
L_4e3370:;
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f74c8(r0, r1, r2, r3);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_005b42fc(r0_2, r1_2, r2_2, r3_2);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    cf_1 = r0 >= 0x30u;  // (from the original)
    if (!cf_1 || r0 == 0x30u) {  // (from the original)
        cf_1 = r4 >= r0;
    }
    if (cf_1) {
        goto L_4e33fc;
    }
    r5_1 = *gptr<u32>(0x9c7a14u + (r4 << 2));  // (from the original)
    if (r5_1 == 0) {
        goto L_4e33fc;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00751990(r5_1, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_4e33fc;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00750090(r5_1, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_4e33fc;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_00746f24(0xa22020u, r1, r2, r3);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r6_1 = r13 + 4u;
    *gptr<u32>(r13) = u32(0x95bfdcu);  // (from the original)
    *gptr<u32>(r6_1) = u32(0x95bfdcu);  // (from the original)
    *gptr<u32>(r6_1 + 4) = u32(1u);
    guest::cpu()->r[13] = r13;
    r0_4 = call_004e8ed4(r5_1, 0u, r0_3, r1_3);
    r1_4 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return r0_4;
L_4e33fc:;
    r4 = r4 + 1u;
    if (r4 < r6) {
        guest::preempt();
        goto L_4e3370;
    }
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_004e3354
GUEST_EXPORT(0x004e3354, d_004e3354::f_004e3354);

// f_004e35f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e35f0 {

inline guest::global<u8, 0x009529d4> global_009529d4;  // (from the original)

u32 f_004e35f0() {
    u32 r0_1 = 0;
    r0_1 = u32(*global_009529d4);
    return r0_1;
}

}  // namespace d_004e35f0
GUEST_EXPORT(0x004e35f0, d_004e35f0::f_004e35f0);

// f_004e3604: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e3604 {

inline guest::global<u8, 0x009529d4> global_009529d4;  // (from the original)
inline guest::global<u8, 0x009c79d4> global_009c79d4;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)

u32 f_004e3604(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    *global_009529d4 = u8(0u);
    r0_1 = call_00300904(0x9529d4u, r1, r2, r3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        r0_2 = call_0030b6c4(r0_1, r1_1, r2_1, r3_1);
        r1_1 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            goto L_4e363c;
        }
    }
    *global_009c79d4 = u8(0u);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return 0x9c79d4u;  // (from the original)
L_4e363c:;
    guest::cpu()->r[13] += 8u;
    return call_006249b0(0x5bu, 0u, 0u, 0u);  // (from the original)
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
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 zf_1 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r0_1 = call_002f74c8(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = call_002f74e0(8u, r0_1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_4e3758;
    }
    r0_3 = call_006a5e34(r0_2, r1_1, r2_2, r3_2);
    r0_4 = call_004e9a28(0x9c7ad4u, r0, r1, 0u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    zf_1 = r0_3 == 0;
    if (!zf_1) {
        zf_1 = r0_4 == 0;
    }
    if (zf_1) {
        goto L_4e3758;
    }
    r0_5 = call_002feb00(r0_3, r0, r1, 1u);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_6 = call_00751d34(r0_4, r1_2, r2_3, r3_3);
    r1_1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_6 != 1u) {
        goto L_4e3758;
    }
    if (r0_5 == 0) {
        goto L_4e3758;
    }
    r0_7 = call_002fe574(r0_5, 0x95bfdcu, r2_4, r3_4);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_7 != 0) {
        r0_8 = 1u;
        goto L_4e375c;
    }
L_4e3758:;
    r0_8 = 0u;
L_4e375c:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_8;
}

}  // namespace d_004e36c0
GUEST_EXPORT(0x004e36c0, d_004e36c0::f_004e36c0);

// f_004e3768: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e3768 {

inline guest::global<u8, 0x009529d4> global_009529d4;  // (from the original)

u32 f_004e3768() {
    u32 r0_1 = 0;
    r0_1 = u32(*global_009529d4);
    return r0_1;
}

}  // namespace d_004e3768
GUEST_EXPORT(0x004e3768, d_004e3768::f_004e3768);

// f_004e39c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e39c4 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> call_004e9a28;  // (from the original)

u32 f_004e39c4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_002f74c8(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0x35u) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r0_2 = call_004e9a28(0x9c7ad4u, r0, r1, 0u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r0_3 = r0_2 + 0x700u;  // (from the original)
    r1_2 = u32(*gptr<u16>(r0_3 + 0x64u)) | 0x20u;  // (from the original)
    *gptr<u16>(r0_3 + 0x64u) = u16(r1_2);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_004e39c4
GUEST_EXPORT(0x004e39c4, d_004e39c4::f_004e39c4);

// f_004e3a1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e3a1c {

inline guest::global<u32, 0x0094f310> global_0094f310;  // (from the original)
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> call_004e9a28;  // (from the original)
inline constexpr guest::Function<0x00750894, u32(u32, u32, u32, u32)> call_00750894;  // (from the original)
inline constexpr guest::Function<0x00750994, u32(u32, u32, u32, u32)> call_00750994;  // (from the original)

u32 f_004e3a1c(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 8u;
    if (*global_0094f310 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return 0xffu;  // (from the original)
    }
    r0_1 = call_004e9a28(0x9c7ad4u, r0, r1, 0u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 0xffu;  // (from the original)
    }
    r0_2 = call_00750894(r0_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 0xffu;  // (from the original)
    }
    r0_3 = call_00750994(r0_1, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    if (r0_3 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_3;
        return r0_3;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_3;
    return 0xffu;  // (from the original)
}

}  // namespace d_004e3a1c
GUEST_EXPORT(0x004e3a1c, d_004e3a1c::f_004e3a1c);

// f_004e3f8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e3f8c {

inline guest::global<u32, 0x004e4080> global_004e4080;  // (from the original)
inline guest::global<u32, 0x0085f2cc> global_0085f2cc;  // (from the original)
inline guest::global<u32, 0x009529f4> global_009529f4;  // (from the original)
inline guest::global<u32, 0x009c79b8> global_009c79b8;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> call_004e9a28;  // (from the original)
inline constexpr guest::Function<0x006311a4, u32(u32, u32, u32, u32)> call_006311a4;  // (from the original)
inline constexpr guest::Function<0x00751840, u32(u32, u32, u32, u32)> call_00751840;  // (from the original)

u32 f_004e3f8c(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r6_1 = 0;
    u32 r8_1 = 0;
    u32 r0_1 = 0;
    u32 r5_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    u32 r0_3 = 0;
    u32 r3_2 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    u32 r4_1 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    float S2_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    float S0_4 = 0;
    float S1_4 = 0;
    float S2_4 = 0;
    u32 r0_6 = 0;
    float S2_5 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    float S0_5 = 0;
    float S1_5 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r6_1 = r1;
    r8_1 = r2;
    r0_1 = *global_009529f4;
    if ((r0_1 & 1u) != 0) {
        goto L_4e3fe0;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0_1 = call_002fe7dc(0x9529f4u, r1, r2, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    if (r0_1 == 0) {
        goto L_4e3fe0;
    }
    S1 = std::bit_cast<float>(*global_004e4080);
    S2 = S1;
    S0 = std::bit_cast<float>(*global_0085f2cc);
    *global_009c79b8 = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(0x9c79b8u + 4) = u32(std::bit_cast<u32>(S1));  // (from the original)
    *gptr<u32>(0x9c79b8u + 8) = u32(std::bit_cast<u32>(S2));  // (from the original)
    r0_1 = 0x9529f4u;  // (from the original)
L_4e3fe0:;
    r5_1 = 1u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0_2 = call_002f74c8(r0_1, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    S2_1 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    r0_3 = call_002f74e0(4u, r0_2, r2_1, r3_1);
    r3_2 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    if (r0_3 != 0) {
        r5_1 = 0u;
    }
    r4_1 = 0x9c79b8u + 0x11cu;  // (from the original)
    r1_1 = r13 + 4u;
    r0_4 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    call_003171b4(r0_4, r1_1, r6_1, r3_2);
    S0_3 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    S2_3 = guest::cpu()->s[2];
    r1_2 = *gptr<u32>(r13);
    r2_2 = *gptr<u32>(r13 + 4);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    guest::cpu()->s[2] = S2_3;
    r0_5 = call_004e9a28(r4_1, r1_2, r2_2, 0u);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    S0_4 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    S2_4 = guest::cpu()->s[2];
    if (r0_5 == 0) {
        goto L_4e406c;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    guest::cpu()->s[2] = S2_4;
    r0_6 = call_00751840(r0_5, r1_3, r2_3, r3_3);
    r1_3 = guest::cpu()->r[1];
    S0_4 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    S2_5 = guest::cpu()->s[2];
    if (r0_6 == 0) {
        goto L_4e406c;
    }
    *gptr<u32>(r13 + 4u) = u32(r5_1);
    *gptr<u32>(r13) = u32(0x9c79b8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    guest::cpu()->s[2] = S2_5;
    r0_7 = call_006311a4(r0_5, r0, r6_1, r8_1);
    r1_4 = guest::cpu()->r[1];
    S0_5 = guest::cpu()->s[0];
    S1_5 = guest::cpu()->s[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_5;
    return r0_7;
L_4e406c:;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    return 1u;
}

}  // namespace d_004e3f8c
GUEST_EXPORT(0x004e3f8c, d_004e3f8c::f_004e3f8c);

// f_004e408c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e408c {

inline guest::global<u8, 0x009529d4> global_009529d4;  // (from the original)
inline guest::global<u8, 0x009c79d4> global_009c79d4;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)

u32 f_004e408c(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    *global_009529d4 = u8(0u);
    r0_1 = call_00300904(0x9529d4u, r1, r2, r3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        r0_2 = call_0030b6c4(r0_1, r1_1, r2_1, r3_1);
        r1_1 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            goto L_4e40c4;
        }
    }
    *global_009c79d4 = u8(0u);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return 0x9c79d4u;  // (from the original)
L_4e40c4:;
    guest::cpu()->r[13] += 8u;
    return call_006249b0(0x5bu, 0u, 0u, 0u);  // (from the original)
}

}  // namespace d_004e408c
GUEST_EXPORT(0x004e408c, d_004e408c::f_004e408c);

// f_004e440c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e440c {

inline guest::global<u32, 0x004e4504> global_004e4504;  // (from the original)
inline guest::global<u32, 0x0085f2cc> global_0085f2cc;  // (from the original)
inline guest::global<u32, 0x009529f0> global_009529f0;  // (from the original)
inline guest::global<u32, 0x009c79ac> global_009c79ac;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> call_004e9a28;  // (from the original)
inline constexpr guest::Function<0x006311a4, u32(u32, u32, u32, u32)> call_006311a4;  // (from the original)
inline constexpr guest::Function<0x00751840, u32(u32, u32, u32, u32)> call_00751840;  // (from the original)

u32 f_004e440c(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r6_1 = 0;
    u32 r8_1 = 0;
    u32 r0_1 = 0;
    u32 r5_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    u32 r0_3 = 0;
    u32 r3_2 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    u32 r4_1 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    float S2_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    float S0_4 = 0;
    float S1_4 = 0;
    float S2_4 = 0;
    u32 r0_6 = 0;
    float S2_5 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    float S0_5 = 0;
    float S1_5 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r6_1 = r1;
    r8_1 = r2;
    r0_1 = *global_009529f0;
    if ((r0_1 & 1u) != 0) {
        goto L_4e4464;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0_1 = call_002fe7dc(0x9529f0u, r1, r2, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    if (r0_1 == 0) {
        goto L_4e4464;
    }
    S1 = std::bit_cast<float>(*global_004e4504);
    S2 = S1;
    S0 = -std::bit_cast<float>(*global_0085f2cc);
    *global_009c79ac = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(0x9c79acu + 4) = u32(std::bit_cast<u32>(S1));  // (from the original)
    *gptr<u32>(0x9c79acu + 8) = u32(std::bit_cast<u32>(S2));  // (from the original)
    r0_1 = 0x9529f0u;  // (from the original)
L_4e4464:;
    r5_1 = 1u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0_2 = call_002f74c8(r0_1, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    S2_1 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    r0_3 = call_002f74e0(4u, r0_2, r2_1, r3_1);
    r3_2 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    if (r0_3 != 0) {
        r5_1 = 0u;
    }
    r4_1 = 0x9c79acu + 0x128u;  // (from the original)
    r1_1 = r13 + 4u;
    r0_4 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    call_003171b4(r0_4, r1_1, r6_1, r3_2);
    S0_3 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    S2_3 = guest::cpu()->s[2];
    r1_2 = *gptr<u32>(r13);
    r2_2 = *gptr<u32>(r13 + 4);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    guest::cpu()->s[2] = S2_3;
    r0_5 = call_004e9a28(r4_1, r1_2, r2_2, 0u);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    S0_4 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    S2_4 = guest::cpu()->s[2];
    if (r0_5 == 0) {
        goto L_4e44f0;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    guest::cpu()->s[2] = S2_4;
    r0_6 = call_00751840(r0_5, r1_3, r2_3, r3_3);
    r1_3 = guest::cpu()->r[1];
    S0_4 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    S2_5 = guest::cpu()->s[2];
    if (r0_6 == 0) {
        goto L_4e44f0;
    }
    *gptr<u32>(r13 + 4u) = u32(r5_1);
    *gptr<u32>(r13) = u32(0x9c79acu);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    guest::cpu()->s[2] = S2_5;
    r0_7 = call_006311a4(r0_5, r0, r6_1, r8_1);
    r1_4 = guest::cpu()->r[1];
    S0_5 = guest::cpu()->s[0];
    S1_5 = guest::cpu()->s[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_5;
    return r0_7;
L_4e44f0:;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    return 1u;
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
    u32 r4 = guest::cpu()->r[4];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r3_4 = 0;
    u32 r2_4 = 0;
    u32 r1_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_11 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_12 = 0;
    u32 r1_4 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_15 = 0;
    r13 = r13 - 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_006f9638(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fe7cc(r0_1, r1_1, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r9 = r0_2;
    if (r0_2 == 0) {
        goto L_4e4660;
    }
    r0_3 = r0 - 1u & 0xffu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_006f9638(r0_3, r1, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_5 = call_002fe7cc(r0_4, r1_2, r2_3, r3_3);
    r1 = guest::cpu()->r[1];
    r8 = r0_5;
    if (r0_5 == 0) {
        goto L_4e4660;
    }
    *gptr<u32>(r13 + 8u) = u32(0u);
    *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4u) = u32(0u);
    r3_4 = r13 + 4u;
    r2_4 = r13;
    r1_3 = r13 + 0xcu;  // (from the original)
    r0_6 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_00284ee4(r0_6, r1_3, r2_4, r3_4);
    r1 = guest::cpu()->r[1];
    r7 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    if (s32(r7) > s32(*gptr<u32>(r13 + 4u))) {
        goto L_4e468c;
    }
L_4e457c:;
    r4 = *gptr<u32>(r13 + 8u);
    if (s32(r4) > s32(*gptr<u32>(r13))) {
        goto L_4e467c;
    }
L_4e458c:;
    guest::cpu()->r[13] = r13;
    r0_7 = call_002feb00(r8, r4, r7, 0u);
    guest::cpu()->r[13] = r13;
    r0_8 = call_002feb00(r9, r4, r7, 0u);
    r1 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_7 == 0) {
        goto L_4e4630;
    }
    guest::cpu()->r[13] = r13;
    r0_9 = call_0030b654(r0_7, r1, r2_5, r3_5);
    r1 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_9 == 0) {
        goto L_4e4630;
    }
    if (r0_8 == 0) {
        goto L_4e4660;
    }
    guest::cpu()->r[13] = r13;
    r0_10 = call_0030b654(r0_8, r1, r2_5, r3_5);
    r1 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if (r0_10 == 0) {
        goto L_4e4660;
    }
    guest::cpu()->r[13] = r13;
    r0_11 = call_002fe574(r0_7, r0_8, r2_6, r3_6);
    r1 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r0_11 == 0) {
        goto L_4e4660;
    }
    guest::cpu()->r[13] = r13;
    r0_12 = call_0076936c(r0_7, r1, r2_7, r3_7);
    r1_4 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_13 = call_0076936c(r0_8, r1_4, r2_8, r3_8);
    r1 = guest::cpu()->r[1];
    if (r0_12 == r0_13) {
        goto L_4e466c;
    }
    goto L_4e4660;
L_4e4630:;
    if (r0_8 == 0) {
        goto L_4e466c;
    }
    guest::cpu()->r[13] = r13;
    r0_14 = call_002fcb10(r0_8, r1, r2_5, r3_5);
    r1 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    if (r0_14 != 0) {
        goto L_4e4660;
    }
    guest::cpu()->r[13] = r13;
    r0_15 = call_00768174(r0_8, r1, r2_9, r3_9);
    r1 = guest::cpu()->r[1];
    if (r0_15 == 0) {
        goto L_4e466c;
    }
L_4e4660:;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0u;
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
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 1u;
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
    u32 r7_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r0_7 = 0;
    u32 r3_4 = 0;
    u32 r0_8 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r7_1 = r1;
    r0_1 = call_006c8928(r0, r1, 0u, r3);
    r1 = guest::cpu()->r[1];
    if (r0_1 + 1u != 0) {
        goto L_4e4aac;
    }
    r0_2 = call_004e9a28(0x9c7ad4u, r0, r7_1, 0u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        r0_3 = call_00750894(r0_2, r1_1, r2_1, r3_1);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        if (r0_3 == 0) {
            goto L_4e4a64;
        }
    }
    r0_4 = call_005ce300(r0, r7_1, 0u, r3_1);
    r1 = guest::cpu()->r[1];
    if (r0_4 == 0) {
        goto L_4e4a60;
    }
L_4e4a5c:;
    r0_4 = 1u;
L_4e4a60:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_4;
L_4e4a64:;
    r0_5 = call_002f74c8(r0_3, r1_2, r2_2, r3_1);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_6 = call_006f9638(r0_5, r1_3, r2_3, r3_2);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_7 = call_007500b4(r0_2, r1_4, r2_4, r3_3);
    r1 = guest::cpu()->r[1];
    r3_4 = guest::cpu()->r[3];
    if (r0_7 == 0) {
        goto L_4e4aac;
    }
    r0_8 = call_006c778c(r0, r7_1, r0_6, r3_4);
    r1 = guest::cpu()->r[1];
    if (r0_8 != 0) {
        guest::preempt();
        goto L_4e4a5c;
    }
L_4e4aac:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_004e49fc
GUEST_EXPORT(0x004e49fc, d_004e49fc::f_004e49fc);

// f_004e4ab8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e4ab8 {

inline constexpr guest::Function<0x004e40e8, u32(u32, u32, u32, u32)> call_004e40e8;  // (from the original)

u32 f_004e4ab8(u32 r0_unused, u32 r1) {
    return call_004e40e8(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_004e4ab8
GUEST_EXPORT(0x004e4ab8, d_004e4ab8::f_004e4ab8);

// f_004e54a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e54a4 {

inline guest::global<u32, 0x0085f2cc> global_0085f2cc;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x004e21e0, u32(u32, u32, u32, u32)> call_004e21e0;  // (from the original)
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> call_004e9a28;  // (from the original)
inline constexpr guest::Function<0x00751a30, u32(u32, u32, u32, u32)> call_00751a30;  // (from the original)
inline constexpr guest::Function<0x00751a4c, u32(u32, u32, u32, u32)> call_00751a4c;  // (from the original)

u32 f_004e54a4(u32 r0_unused, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    float S0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    float S0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r4_1 = 0;
    u32 r0_6 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    float S0_3 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    float S0_4 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    float S0_5 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r1_1 = r13 + 4u;
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    call_003171b4(r0_1, r1_1, r1, r3);
    S0_1 = guest::cpu()->s[0];
    r1_2 = *gptr<u32>(r13);
    r2_1 = *gptr<u32>(r13 + 4);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    r0_2 = call_004e9a28(0x9c7ad4u, r1_2, r2_1, 0u);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    if (r0_2 == 0) {
        r0_3 = 4u;
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_2;
        return r0_3;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    r0_4 = call_00751a30(r0_2, r1_3, r2_2, r3_1);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    if (r0_4 == 0) {
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_2;
        r0_5 = call_00751a4c(r0_2, r1_3, r2_3, r3_2);
        r1_3 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        S0_2 = guest::cpu()->s[0];
        if (r0_5 == 0) {
            goto L_4e551c;
        }
    }
    r0_3 = 3u;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    return r0_3;
L_4e551c:;
    r4_1 = 1u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    r0_6 = call_002f74c8(r0_5, r1_3, r2_4, r3_3);
    r2_5 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    r0_7 = call_002f74e0(4u, r0_6, r2_5, r3_4);
    *gptr<u16>(r13) = u16(r2);
    if (r0_7 != 0) {
        r4_1 = 0u;
    }
    r1_4 = *gptr<u32>(r13);
    S0_4 = std::bit_cast<float>(*global_0085f2cc);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    r0_8 = call_004e21e0(r1, r1_4, 0u, r4_1);
    r1_5 = guest::cpu()->r[1];
    S0_5 = guest::cpu()->s[0];
    if (r0_8 != 0) {
        r0_8 = 2u;
    }
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    return r0_8;
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
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_5 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_6 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r0_7 = 0;
    u32 r1_3 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    r13 = r13 - 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f74c8(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0x2bu) {  // (from the original)
        goto L_4e58dc;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_00768758(r0, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        guest::cpu()->r[13] = r13;
        r0_3 = call_006a5e34(r0_2, r1_2, r2_2, r3_2);
        r1_1 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        if (r0_3 == 0) {
            goto L_4e58dc;
        }
        guest::cpu()->r[13] = r13;
        call_0076c5b0(r0, r1_1, r2_3, r3_3);
        guest::cpu()->r[13] = r13;
        r0_4 = call_002feb00(r0_3, r1, r2, 0u);
        r1_1 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        if (r0_4 == 0) {
            goto L_4e58dc;
        }
        guest::cpu()->r[13] = r13;
        r0_5 = call_002fcaf4(r0_4, r1_1, r2_4, r3_4);
        r1_1 = guest::cpu()->r[1];
        r2_5 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
        if (r0_5 == 0) {
            goto L_4e58dc;
        }
        r0_6 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002fc20c(r0_6, r1_1, r2_5, r3_5);
        ea_1 = r13;
        *gptr<u32>(ea_1) = u32(0u);
        ea_2 = r13 + 4u;
        *gptr<u32>(ea_2) = u32(0u);
        *gptr<u32>(ea_2 + 4) = u32(1u);
        r0_7 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00691544(r0_7, r0, r1, r2);
        r1_3 = guest::cpu()->r[1];
        r2_6 = guest::cpu()->r[2];
        r3_6 = guest::cpu()->r[3];
        r0_8 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_9 = call_006904b4(r0_8, r1_3, r2_6, r3_6);
        r1_2 = guest::cpu()->r[1];
        r2_7 = guest::cpu()->r[2];
        r3_7 = guest::cpu()->r[3];
        if (r0_9 != 0) {
            guest::cpu()->r[13] = r13;
            call_0057456c(r0_9, r3, r2_7, r3_7);
            r1_2 = guest::cpu()->r[1];
        }
        r0_2 = 1u;
    }
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_2;
L_4e58dc:;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return 0u;
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
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r1_5 = 0;
    u32 r0_6 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r1_6 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r5_1 = 0;
    u32 r0_8 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r1_7 = 0;
    u32 r4_2 = 0;
    u32 r0_9 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r2_8 = 0;
    u32 r1_8 = 0;
    u32 r9_1 = 0;
    u32 r1_9 = 0;
    u32 r0_13 = 0;
    u32 r1_10 = 0;
    u32 r10_1 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r3_8 = 0;
    u32 r0_16 = 0;
    u32 cf_1 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r2_9 = 0;
    u32 r1_11 = 0;
    u32 r2_10 = 0;
    u32 ea_2 = 0;
    u32 r4_3 = 0;
    u32 r5_2 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r9_2 = 0;
    u32 r10_2 = 0;
    u32 r11_1 = 0;
    ea_1 = r13 - 0x34;  // (from the original)
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
    *gptr<u32>(ea_1 + 0x30) = u32(r14);  // (from the original)
    r13 = r13 - 0x58u;  // (from the original)
    r6 = r3;
    r7 = r1;
    r8 = r2;
    r1_1 = *gptr<u32>(r13 + 0x24u);  // (from the original)
    r4_1 = *gptr<u32>(r13 + 0x5cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f74e0(8u, r1_1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        r1_2 = *gptr<u32>(r13 + 0x24u);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_2 = call_002f74e0(0x10000000u, r1_2, r2_1, r3_1);  // (from the original)
        r1_3 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        if (r0_2 == 0) {
            goto L_4e5b60;
        }
    }
    r0_3 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_002fc934(r0_3, r4_1, r2_1, r3_1);
    r1_4 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_5 = call_002f74c8(r0_4, r1_4, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r1_5 = *gptr<u32>(r13 + 0x24u);  // (from the original)
    if (r0_5 == r1_5) {
        guest::cpu()->r[13] = r13;
        r0_6 = call_006a5e34(r0_5, r1_5, r2_3, r3_3);
        r1_3 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
    } else {
        guest::cpu()->r[13] = r13;
        r0_7 = call_006f9638(r1_5, r1_5, r2_3, r3_3);
        r1_6 = guest::cpu()->r[1];
        r2_5 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_6 = call_002fe7cc(r0_7, r1_6, r2_5, r3_5);
        r1_3 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
    }
    *gptr<u32>(r13 + 0xcu) = u32(r0_6);  // (from the original)
    if (r0_6 == 0) {
        goto L_4e5b58;
    }
    r5_1 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_00305570(r5_1, r1_3, r2_4, r3_4);
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r1_7 = r4_1 & ~0xffu;  // (from the original)
    r4_2 = r1_7 | r0_8;
    guest::cpu()->r[13] = r13;
    r0_9 = call_0076936c(r5_1, r1_7, r2_6, r3_6);
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r1_3 = r4_2 & ~0xff00u;  // (from the original)
    r5 = r1_3 | r0_9 << 8 & 0xff00u;  // (from the original)
    r0_10 = r5 & 0xffu;  // (from the original)
    r4 = 0u;
    if (r0_10 >= 5u) {
        goto L_4e5adc;
    }
    r11 = 0x9529fcu;  // (from the original)
    r0_11 = u32(*gptr<u8>(*gptr<u32>(r11 + (r0_10 << 2)) + 0x10u));  // (from the original)
    if (r0_11 < 0u || r0_11 == 0) {
        goto L_4e5adc;
    }
L_4e5a08:;
    r0_12 = r5 & 0xffu;  // (from the original)
    if (r0_12 >= 5u) {
        r2_8 = 0u;
    } else {
        r2_8 = u32(*gptr<u8>(*gptr<u32>(r11 + (r0_12 << 2)) + 0x10u));  // (from the original)
    }
    if (r2_8 <= r4) {
        r1_8 = 0x865620u;  // (from the original)
        goto L_4e5a38;
    }
    r1_8 = *gptr<u32>(*gptr<u32>(r11 + (r0_12 << 2)) + ((r5 & 0x300u) >> 6)) + (r4 << 3);  // (from the original)
L_4e5a38:;
    r9_1 = *gptr<u32>(r1_8) + r7;
    if (r0_12 >= 5u) {
        r1_9 = 0u;
    } else {
        r1_9 = u32(*gptr<u8>(*gptr<u32>(r11 + (r0_12 << 2)) + 0x10u));  // (from the original)
    }
    if (r1_9 <= r4) {
        r0_13 = 0x865620u;  // (from the original)
        goto L_4e5a6c;
    }
    r0_13 = *gptr<u32>(*gptr<u32>(r11 + (r0_12 << 2)) + ((r5 & 0x300u) >> 6)) + (r4 << 3);  // (from the original)
L_4e5a6c:;
    if (r4 == 0) {
        r1_10 = r13 + 0x1cu;  // (from the original)
    } else {
        r1_10 = 0x95bfe0u;  // (from the original)
    }
    r10_1 = *gptr<u32>(r0_13 + 4u) + r8;
    r0_14 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    *gptr<u32>(r13) = u32(r6);
    guest::cpu()->r[13] = r13;
    r0_15 = call_002fc994(r0_14, r1_10, r9_1, r10_1);
    r1_3 = guest::cpu()->r[1];
    if (r0_15 == 0) {
        goto L_4e5b58;
    }
    r3_8 = *gptr<u32>(r13 + 0x58u);  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(r13 + 0x24u));  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00319aa4(r9_1, r10_1, r6, r3_8);
    r1_3 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_16 = r5 & 0xffu;  // (from the original)
    cf_1 = r0_16 >= 5u;
    if (!cf_1) {
        r0_16 = *gptr<u32>(r11 + (r0_16 << 2));
    }
    r4 = r4 + 1u;
    if (cf_1) {
        r0_17 = 0u;
    } else {
        r0_17 = u32(*gptr<u8>(r0_16 + 0x10u));  // (from the original)
    }
    if (r0_17 > r4) {
        guest::preempt();
        goto L_4e5a08;
    }
L_4e5adc:;
    r0_18 = *gptr<u32>(r13 + 0x60u);  // (from the original)
    if (r0_18 == 0) {
        goto L_4e5b58;
    }
    guest::cpu()->r[13] = r13;
    r0_19 = call_00300904(r0_18, r1_3, r2_7, r3_7);
    r1_3 = guest::cpu()->r[1];
    if (r0_19 == 0) {
        goto L_4e5b58;
    }
    r2_9 = u32(*gptr<u16>(r13 + 4u));
    *gptr<u32>(r13) = u32(*gptr<u32>(r13 + 0x1cu));  // (from the original)
    r1_11 = (((r7 & 0xfu | r2_9 & ~0xfu) & ~0xf0u | 0xf0u & r8 << 4) & ~0x100u | 0x100u & r6 << 8) & ~0x200u;  // (from the original)
    r2_10 = r13;
    *gptr<u16>(r13 + 4u) = u16(r1_11 | *gptr<u32>(r13 + 0x58u) << 9);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006249b0(0x4fu, 4u, r2_10, 8u);  // (from the original)
    r1_3 = guest::cpu()->r[1];
L_4e5b58:;
    r0_2 = r13 + 0x1cu;  // (from the original)
L_4e5b60:;
    r13 = r13 + 0x34u;  // (from the original)
    ea_2 = r13;
    r13 = r13 + 0x24;  // (from the original)
    r4_3 = *gptr<u32>(ea_2);
    r5_2 = *gptr<u32>(ea_2 + 4);
    r6_1 = *gptr<u32>(ea_2 + 8);
    r7_1 = *gptr<u32>(ea_2 + 0xc);  // (from the original)
    r8_1 = *gptr<u32>(ea_2 + 0x10);  // (from the original)
    r9_2 = *gptr<u32>(ea_2 + 0x14);  // (from the original)
    r10_2 = *gptr<u32>(ea_2 + 0x18);  // (from the original)
    r11_1 = *gptr<u32>(ea_2 + 0x1c);  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[4] = r4_3;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_2;
    guest::cpu()->r[10] = r10_2;
    guest::cpu()->r[11] = r11_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_004e5924
GUEST_EXPORT(0x004e5924, d_004e5924::f_004e5924);

// f_004e5b74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e5b74 {

inline guest::global<u32, 0x0094f310> global_0094f310;  // (from the original)
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
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 res_1 = 0;
    u32 r0_6 = 0;
    u32 r4_1 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_9 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 ea_2 = 0;
    u32 r4_2 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    u32 r10_1 = 0;
    u32 r11_1 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_4 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r3_7 = 0;
    u32 r0_12 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 r1_5 = 0;
    u32 r0_13 = 0;
    u32 r1_6 = 0;
    u32 r2_7 = 0;
    u32 r3_8 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_7 = 0;
    u32 r2_8 = 0;
    u32 r3_9 = 0;
    u32 r1_8 = 0;
    u32 ea_5 = 0;
    u32 r4_3 = 0;
    u32 r5_2 = 0;
    u32 r6_2 = 0;
    u32 r7_2 = 0;
    u32 r8_2 = 0;
    u32 r9_2 = 0;
    u32 r10_2 = 0;
    u32 r11_2 = 0;
    u32 ea_6 = 0;
    u32 r4_4 = 0;
    u32 r5_3 = 0;
    u32 r6_3 = 0;
    u32 r7_3 = 0;
    u32 r8_3 = 0;
    u32 r9_3 = 0;
    u32 r10_3 = 0;
    u32 r11_3 = 0;
    ea_1 = r13 - 0x34;  // (from the original)
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
    *gptr<u32>(ea_1 + 0x30) = u32(r14);  // (from the original)
    r13 = r13 - 0x50u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f74c8(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0x2bu) {  // (from the original)
        goto L_4e5cec;
    }
    r0_2 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_00769634(r0_2, r1_1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_3 != 0) {
        goto L_4e5cec;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_006a5e34(r0_3, r1_1, r2_2, r3_2);
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        goto L_4e5cec;
    }
    r0_5 = *global_0094f310;
    if (r0_5 == 0) {
        goto L_4e5c18;
    }
    res_1 = u32(*gptr<u8>(r0_5 + 0x13u)) << 0x1e >> 0x1f;  // (from the original)
    if (res_1 == 0) {
        goto L_4e5c18;
    }
    r0_6 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    r4_1 = r2;
    guest::cpu()->r[13] = r13;
    r0_7 = call_0076c5b0(r0_6, r1_1, r2_3, r3_3);
    if (r0_7 != 0) {
        r4_1 = r4_1 + 1u;
    }
    guest::cpu()->r[13] = r13;
    r0_8 = call_002feb00(r0_4, r1, r4_1, 0u);
    r1_1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_8 == 0) {
        goto L_4e5cec;
    }
    guest::cpu()->r[13] = r13;
    r0_9 = call_002fcaf4(r0_8, r1_1, r2_4, r3_4);
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_9 == 0) {
        goto L_4e5c3c;
    }
    goto L_4e5c54;
L_4e5c18:;
    r1_2 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_002fc994(r0_4, r1_2, r1, r2);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x2cu;  // (from the original)
    ea_2 = r13;
    r13 = r13 + 0x24;  // (from the original)
    r4_2 = *gptr<u32>(ea_2);
    r5_1 = *gptr<u32>(ea_2 + 4);
    r6_1 = *gptr<u32>(ea_2 + 8);
    r7_1 = *gptr<u32>(ea_2 + 0xc);  // (from the original)
    r8_1 = *gptr<u32>(ea_2 + 0x10);  // (from the original)
    r9_1 = *gptr<u32>(ea_2 + 0x14);  // (from the original)
    r10_1 = *gptr<u32>(ea_2 + 0x18);  // (from the original)
    r11_1 = *gptr<u32>(ea_2 + 0x1c);  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
    guest::cpu()->r[13] = r13;
    return 0u;
L_4e5c3c:;
    guest::cpu()->r[13] = r13;
    r0_10 = call_002fcb84(r0_8, 0x2085u, r2_5, r3_5);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_10 == 0) {
        goto L_4e5cec;
    }
L_4e5c54:;
    guest::cpu()->r[13] = r13;
    r0_11 = call_002fcb84(r0_8, 0x2085u, r2_5, r3_5);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if (r0_11 != 0) {
        *gptr<u32>(r13) = u32(0u);
        guest::cpu()->r[13] = r13;
        call_002fc994(r0_4, 0x95bfdcu, r1, r4_1);  // (from the original)
        r3_7 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        call_0059e65c(r1, r4_1, 1u, r3_7);
        r1_4 = guest::cpu()->r[1];
        r2_6 = guest::cpu()->r[2];
        r3_6 = guest::cpu()->r[3];
    }
    r0_12 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc20c(r0_12, r1_4, r2_6, r3_6);
    ea_3 = r13;
    *gptr<u32>(ea_3) = u32(0u);
    ea_4 = r13 + 4u;
    *gptr<u32>(ea_4) = u32(0u);
    *gptr<u32>(ea_4 + 4) = u32(1u);
    r1_5 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    r0_13 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00691544(r0_13, r1_5, r1, r2);
    r1_6 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_14 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_15 = call_006904b4(r0_14, r1_6, r2_7, r3_8);
    r1_7 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    if (r0_15 != 0) {
        r1_8 = *gptr<u32>(r13 + 0x28u);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0057456c(r0_15, r1_8, r2_8, r3_9);
        r1_7 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x2cu;  // (from the original)
    ea_5 = r13;
    r13 = r13 + 0x24;  // (from the original)
    r4_3 = *gptr<u32>(ea_5);
    r5_2 = *gptr<u32>(ea_5 + 4);
    r6_2 = *gptr<u32>(ea_5 + 8);
    r7_2 = *gptr<u32>(ea_5 + 0xc);  // (from the original)
    r8_2 = *gptr<u32>(ea_5 + 0x10);  // (from the original)
    r9_2 = *gptr<u32>(ea_5 + 0x14);  // (from the original)
    r10_2 = *gptr<u32>(ea_5 + 0x18);  // (from the original)
    r11_2 = *gptr<u32>(ea_5 + 0x1c);  // (from the original)
    guest::cpu()->r[1] = r1_7;
    guest::cpu()->r[4] = r4_3;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_2;
    guest::cpu()->r[9] = r9_2;
    guest::cpu()->r[10] = r10_2;
    guest::cpu()->r[11] = r11_2;
    guest::cpu()->r[13] = r13;
    return 1u;
L_4e5cec:;
    r13 = r13 + 0x2cu;  // (from the original)
    ea_6 = r13;
    r13 = r13 + 0x24;  // (from the original)
    r4_4 = *gptr<u32>(ea_6);
    r5_3 = *gptr<u32>(ea_6 + 4);
    r6_3 = *gptr<u32>(ea_6 + 8);
    r7_3 = *gptr<u32>(ea_6 + 0xc);  // (from the original)
    r8_3 = *gptr<u32>(ea_6 + 0x10);  // (from the original)
    r9_3 = *gptr<u32>(ea_6 + 0x14);  // (from the original)
    r10_3 = *gptr<u32>(ea_6 + 0x18);  // (from the original)
    r11_3 = *gptr<u32>(ea_6 + 0x1c);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_4;
    guest::cpu()->r[5] = r5_3;
    guest::cpu()->r[6] = r6_3;
    guest::cpu()->r[7] = r7_3;
    guest::cpu()->r[8] = r8_3;
    guest::cpu()->r[9] = r9_3;
    guest::cpu()->r[10] = r10_3;
    guest::cpu()->r[11] = r11_3;
    guest::cpu()->r[13] = r13;
    return 0u;
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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f74c8(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f74e0(0x20u, r0_1, r2_1, r3_1);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_4e6270;
    }
    r1_1 = r13 + 4u;
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    call_003171b4(r0_3, r1_1, r1, r3_2);
    r1_2 = *gptr<u32>(r13);
    r2_3 = *gptr<u32>(r13 + 4);
    guest::cpu()->r[13] = r13;
    r0_4 = call_004e9a28(0x9c7ad4u, r1_2, r2_3, 0u);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        goto L_4e6270;
    }
    guest::cpu()->r[13] = r13;
    r0_5 = call_00751058(r0_4, r1_3, r2_2, r3_2);
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_002fc934(r0, r0_5, r2_4, r3_3);
L_4e6270:;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_002fc934(r0, 0x95bfdcu, r2_2, r3_2);  // (from the original)
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
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r6_1 = 0;
    u32 r0_1 = 0;
    u32 r5_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r1_2 = 0;
    u32 r0_7 = 0;
    u32 r1_3 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r12_1 = 0;
    u32 r4_1 = 0;
    u32 ea_1 = 0;
    u32 r7_2 = 0;
    u32 r2_5 = 0;
    u32 r0_10 = 0;
    u32 r1_5 = 0;
    u32 r4_2 = 0;
    u32 r0_11 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_12 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r1_6 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r3_8 = 0;
    u32 r0_15 = 0;
    u32 r2_8 = 0;
    u32 r3_9 = 0;
    u32 r1_7 = 0;
    u32 r0_16 = 0;
    u32 r1_8 = 0;
    u32 r0_17 = 0;
    u32 r1_9 = 0;
    u32 r0_18 = 0;
    r13 = r13 - 0x48u;  // (from the original)
    r6_1 = arg0->word_0;
    r0_1 = arg0->word_10;
    r5_1 = arg0->word_4;
    r7_1 = arg0->word_8;
    r8_1 = arg0->word_c;
    if ((r0_1 & 0x200000u) != 0) {  // (from the original)
        r9_1 = r0_1 & 0xffu;  // (from the original)
        r0_2 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002fc934(r0_2, 0x95bfdcu, r2, r3);  // (from the original)
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        if (r7_1 < 0x5bu) {  // (from the original)
            r0_3 = r13;
            guest::cpu()->r[13] = r13;
            call_006bbd54(r0_3, 0x2fu, r7_1, r3_1);  // (from the original)
            r2_2 = guest::cpu()->r[2];
            r3_2 = guest::cpu()->r[3];
            r1_1 = r13;
            r0_4 = r13 + 0x20u;  // (from the original)
            guest::cpu()->r[13] = r13;
            call_002fc8e8(r0_4, r1_1, r2_2, r3_2);
            r2_1 = guest::cpu()->r[2];
            r3_1 = guest::cpu()->r[3];
        }
        r0_5 = r13 + 0x24u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002fc934(r0_5, 0x95bfdcu, r2_1, r3_1);  // (from the original)
        r3_3 = guest::cpu()->r[3];
        if (r8_1 < 0x5bu) {  // (from the original)
            r0_6 = r13;
            guest::cpu()->r[13] = r13;
            call_006bbd54(r0_6, 0x2fu, r8_1, r3_3);  // (from the original)
            r2_3 = guest::cpu()->r[2];
            r3_4 = guest::cpu()->r[3];
            r1_2 = r13;
            r0_7 = r13 + 0x24u;  // (from the original)
            guest::cpu()->r[13] = r13;
            call_002fc8e8(r0_7, r1_2, r2_3, r3_4);
        }
        r1_3 = r13 + 0x24u;  // (from the original)
        *gptr<u32>(r13) = u32(r13 + 0x20u);  // (from the original)
        *gptr<u32>(r13 + 4) = u32(r1_3);
        r0_8 = r9_1 & 0xffu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_001746f4(r0_8, r1_3, r6_1, r5_1);
        r0_9 = *gptr<u32>(r0);
        r1_4 = *gptr<u32>(r0 + 4);
        r2_4 = *gptr<u32>(r0 + 8);
        r3_5 = *gptr<u32>(r0 + 0xc);  // (from the original)
        r12_1 = *gptr<u32>(r0 + 0x10);  // (from the original)
        r4_1 = *gptr<u32>(r0 + 0x14u);  // (from the original)
        ea_1 = r13 + 8u;
        *gptr<u32>(ea_1) = u32(r0_9);
        *gptr<u32>(ea_1 + 4) = u32(r1_4);
        *gptr<u32>(ea_1 + 8) = u32(r2_4);
        *gptr<u32>(ea_1 + 0xc) = u32(r3_5);  // (from the original)
        *gptr<u32>(ea_1 + 0x10) = u32(r12_1);  // (from the original)
        r7_2 = r13 + 0x18u;  // (from the original)
        *gptr<u32>(r7_2) = u32(r12_1 & ~0x200000u);  // (from the original)
        *gptr<u32>(r7_2 + 4) = u32(r4_1);
        r2_5 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        r0_10 = call_006249b0(0x52u, 4u, r2_5, 0x18u);  // (from the original)
        r1_5 = guest::cpu()->r[1];
        r13 = r13 + 0x48u;  // (from the original)
        guest::cpu()->r[1] = r1_5;
        guest::cpu()->r[13] = r13;
        return r0_10;
    }
    r4_2 = r0_1 & 0xffu;  // (from the original)
    r0_11 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_11, 0x95bfdcu, r2, r3);  // (from the original)
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if (r7_1 < 0x5bu) {  // (from the original)
        r0_12 = r13;
        guest::cpu()->r[13] = r13;
        call_006bbd54(r0_12, 0x2fu, r7_1, r3_6);  // (from the original)
        r2_7 = guest::cpu()->r[2];
        r3_7 = guest::cpu()->r[3];
        r1_6 = r13;
        r0_13 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r0_13, r1_6, r2_7, r3_7);
        r2_6 = guest::cpu()->r[2];
        r3_6 = guest::cpu()->r[3];
    }
    r0_14 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_14, 0x95bfdcu, r2_6, r3_6);  // (from the original)
    r3_8 = guest::cpu()->r[3];
    if (r8_1 < 0x5bu) {  // (from the original)
        r0_15 = r13;
        guest::cpu()->r[13] = r13;
        call_006bbd54(r0_15, 0x2fu, r8_1, r3_8);  // (from the original)
        r2_8 = guest::cpu()->r[2];
        r3_9 = guest::cpu()->r[3];
        r1_7 = r13;
        r0_16 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r0_16, r1_7, r2_8, r3_9);
    }
    r1_8 = r13 + 0xcu;  // (from the original)
    *gptr<u32>(r13) = u32(r13 + 8u);
    *gptr<u32>(r13 + 4) = u32(r1_8);
    r0_17 = r4_2 & 0xffu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001746f4(r0_17, r1_8, r6_1, r5_1);
    r1_9 = guest::cpu()->r[1];
    r0_18 = r13 + 8u;
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1_9;
    guest::cpu()->r[13] = r13;
    return r0_18;
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
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = u32(arg0->half_c) >> 8;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_2 = call_00203660(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0_2;
    }
    r2_1 = u32(*gptr<u16>(r0 + 0xcu));  // (from the original)
    r1_2 = *gptr<u32>(r0 + 8u);
    S0_2 = std::bit_cast<float>(*gptr<u32>(r0));
    S1_2 = std::bit_cast<float>(*gptr<u32>(r0 + 4));
    *gptr<u32>(r0_2 + 8u) = u32(r1_2);
    *gptr<u32>(r0_2) = u32(std::bit_cast<u32>(S0_2));
    *gptr<u32>(r0_2 + 4) = u32(std::bit_cast<u32>(S1_2));
    *gptr<u8>(r0_2 + 0xcu) = u8(r2_1 & 0xfu);  // (from the original)
    *gptr<u8>(r0_2 + 0xdu) = u8(r2_1 << 0x18 >> 0x1c);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return r0_2;
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
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r0_4 = 0;
    u32 r2_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_5 = 0;
    u32 r0_6 = 0;
    u32 r2_6 = 0;
    u32 r5_1 = 0;
    u32 r0_7 = 0;
    u32 r2_7 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r2_8 = 0;
    u32 r1_5 = 0;
    u32 r0_9 = 0;
    u32 r6_1 = 0;
    u32 r0_10 = 0;
    u32 r2_9 = 0;
    u32 r0_11 = 0;
    u32 r1_6 = 0;
    u32 r2_10 = 0;
    u32 r0_12 = 0;
    u32 r1_7 = 0;
    u32 r2_11 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_8 = 0;
    u32 r2_12 = 0;
    u32 r0_16 = 0;
    u32 r5_2 = 0;
    u32 r0_17 = 0;
    u32 r1_9 = 0;
    u32 r2_13 = 0;
    u32 r1_10 = 0;
    u32 r0_18 = 0;
    u32 r6_2 = 0;
    u32 r0_19 = 0;
    u32 r2_14 = 0;
    u32 r0_20 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r2_1 = u32(arg0->byte_0);
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_006bbd54(r0_1, 0x2fu, r2_1, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r0_2 = r13;
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fcb34(r0_2, r1_1, r2_2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    if (r0_3 != 0x2fu) {  // (from the original)
        goto L_4e6638;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_002f74c8(r0_3, r1_2, r2_3, guest::cpu()->r[3]);
    r2_4 = guest::cpu()->r[2];
    r1_2 = u32(*gptr<u8>(r0 + 1u));
    if (r1_2 == r0_4) {
        goto L_4e6620;
    }
    guest::cpu()->r[13] = r13;
    r0_5 = call_002f74e0(0x80u, r0_4, r2_4, guest::cpu()->r[3]);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    if (r0_5 == 0) {
        goto L_4e6564;
    }
    guest::cpu()->r[13] = r13;
    r0_6 = call_006f9c08(r0_4, r1_3, r2_5, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    if (r0_6 == 0) {
        goto L_4e6620;
    }
    r5_1 = 0u;
    guest::cpu()->r[13] = r13;
    r0_7 = call_00720328(r0_6, r1_2, r2_6, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    if (r0_7 == 0) {
        r0_8 = r13 + 4u;
        r1_4 = r0_6 + 0x2fau;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002fc934(r0_8, r1_4, r2_7, guest::cpu()->r[3]);
        r2_8 = guest::cpu()->r[2];
        r5_1 = 1u;
        r1_5 = r13;
        r0_9 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0_7 = call_002fe574(r0_9, r1_5, r2_8, guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        r2_7 = guest::cpu()->r[2];
        if (r0_7 == 0) {
            r6_1 = 0u;
            goto L_4e6548;
        }
    }
    r6_1 = 1u;
L_4e6548:;
    if (r5_1 != 0) {
        r0_7 = r13 + 4u;
    }
    if (r6_1 == 0) {
        goto L_4e6620;
    }
    goto L_4e6618;
L_4e6564:;
    guest::cpu()->r[13] = r13;
    r0_10 = call_002f74e0(0x2000u, r0_4, r2_5, guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    if (r0_10 == 0) {
        goto L_4e6620;
    }
    guest::cpu()->r[13] = r13;
    r0_11 = call_006f9638(r0_4, r1_2, r2_9, guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_12 = call_006f9db4(r0_11, r1_6, r2_10, guest::cpu()->r[3]);
    r1_7 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_13 = call_002fae84(r0_12, r1_7, r2_11, guest::cpu()->r[3]);
    r0_14 = r0_13 - 0xfff951c8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_15 = call_006bc388(r0_14, r0_12, 0xfff951c8u, guest::cpu()->r[3]);  // (from the original)
    r1_8 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r0_16 = r0_15 + 2u;
    r5_2 = 0u;
    guest::cpu()->r[13] = r13;
    r0_7 = call_00720328(r0_16, r1_8, r2_12, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    if (r0_7 == 0) {
        r0_17 = r13 + 4u;
        r1_9 = r0_16 + 0x2fau;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002fc934(r0_17, r1_9, r2_7, guest::cpu()->r[3]);
        r2_13 = guest::cpu()->r[2];
        r5_2 = 1u;
        r1_10 = r13;
        r0_18 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0_7 = call_002fe574(r0_18, r1_10, r2_13, guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        r2_7 = guest::cpu()->r[2];
        if (r0_7 == 0) {
            r6_2 = 0u;
            goto L_4e6600;
        }
    }
    r6_2 = 1u;
L_4e6600:;
    if (r5_2 != 0) {
        r0_7 = r13 + 4u;
    }
    if (r6_2 == 0) {
        goto L_4e6620;
    }
L_4e6618:;
    guest::cpu()->r[13] = r13;
    call_004e3354(r0_7, r1_2, r2_7, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
L_4e6620:;
    r0_19 = u32(*gptr<u8>(r0 + 2u));
    if (r0_19 >= 4u) {
        goto L_4e6638;
    }
    r2_14 = r13;
    guest::cpu()->r[13] = r13;
    call_001796e0(r0_19, r0_4, r2_14, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
L_4e6638:;
    r0_20 = r13;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_20;
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
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    r1_1 = u32(arg0->byte_1);
    r3_1 = u32(arg0->byte_2);
    r0_1 = u32(arg0->byte_0);
    zf_1 = (r3_1 & 2u) == 0;
    r2_1 = r1_1 >> 4;
    r3_2 = r3_1 & 1u;
    r1_2 = r1_1 & 0xfu;  // (from the original)
    *gptr<u32>(r13) = u32(1u);
    if (!zf_1) {
        guest::cpu()->r[13] = r13;
        r0_2 = call_0017d2ac(r0_1, r1_2, r2_1, r3_2);
        r1_3 = guest::cpu()->r[1];
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_0017fc48(r0_1, r1_2, r2_1, r3_2);
    r1_4 = guest::cpu()->r[1];
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return r0_3;
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
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r3_1 = 0;
    u32 r2_2 = 0;
    u32 r1_3 = 0;
    u32 r0_6 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r5 = r0;
    r6 = r1;
    guest::cpu()->r[13] = r13;
    r0_1 = call_0030b6c4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_4e6700;
    } else {
        r4 = 1u;
    }
L_4e66ac:;
    if (r4 == r6) {
        goto L_4e66f4;
    }
    r0_2 = r4 & 0xffu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_00624f00(r0_2, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        goto L_4e66f4;
    }
    r1_1 = r4 & 0xffu;  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(r5));
    r2_1 = r13;
    *gptr<u32>(r13 + 4u) = u32(*gptr<u32>(r5 + 4u));
    *gptr<u16>(r13 + 8u) = u16(u32(*gptr<u16>(r5 + 8u)));
    guest::cpu()->r[13] = r13;
    call_006249b0(0x55u, r1_1, r2_1, 0xau);  // (from the original)
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
    r0_4 = u32(*gptr<u8>(r5 + 8u));
    guest::cpu()->r[13] = r13;
    r0_5 = call_00203558(r0_4, r1, r2, r3);
    r1_2 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    if (r0_5 != 0) {
        *gptr<u8>(r13) = u8(u32(*gptr<u8>(r5)));
        *gptr<u8>(r13 + 1u) = u8(u32(*gptr<u8>(r5 + 1u)));
        *gptr<u8>(r13 + 2u) = u8(u32(*gptr<u8>(r5 + 2u)));
        *gptr<u8>(r13 + 3u) = u8(u32(*gptr<u8>(r5 + 3u)));
        *gptr<u8>(r13 + 4u) = u8(u32(*gptr<u8>(r5 + 4u)));
        *gptr<u8>(r13 + 5u) = u8(u32(*gptr<u8>(r5 + 5u)));
        *gptr<u8>(r13 + 6u) = u8(u32(*gptr<u8>(r5 + 6u)));
        *gptr<u8>(r13 + 7u) = u8(u32(*gptr<u8>(r5 + 7u)));
        r2_2 = u32(*gptr<u8>(r5 + 9u));
        r1_3 = r13;
        if (r2_2 == 0) {
            r0_6 = r0_5 + 0x12u;  // (from the original)
        } else {
            r0_6 = r0_5 + 0xau;  // (from the original)
        }
        guest::cpu()->r[13] = r13;
        r0_5 = call_003081b4(r0_6, r1_3, r2_2, r3_1);
        r1_2 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_5;
}

}  // namespace d_004e668c
GUEST_EXPORT(0x004e668c, d_004e668c::f_004e668c);

// f_004e6774: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e6774 {

struct __attribute__((packed)) Object_004e6774_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_004e6774_0, word_0, 0x0);  // (from the original)

inline guest::global<u32, 0x004e6848> global_004e6848;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)
inline constexpr guest::Function<0x006b14cc, u32(u32, u32, u32, u32)> call_006b14cc;  // (from the original)

u32 f_004e6774(gptr<Object_004e6774_0> arg0, u32 r1) {
    u32 r13 = guest::cpu()->r[13];
    float S0_1 = 0;
    u32 r3_1 = 0;
    float S0_2 = 0;
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    float S0_3 = 0;
    u32 r0_2 = 0;
    u32 r3_2 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    float S0_4 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    S0_1 = std::bit_cast<float>(*global_004e6848);
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0_1));
    r3_1 = r13;
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(float(std::bit_cast<u32>(std::bit_cast<float>(arg0->word_0 << 0x14 >> 0x14)))));  // (from the original)
    S0_2 = float(std::bit_cast<u32>(std::bit_cast<float>(arg0->word_0 << 8 >> 0x14)));  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0_2));
    r5_1 = arg0->word_0 >> 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    r0_1 = call_006b14cc(0x9c79d4u, r1, r5_1, r3_1);  // (from the original)
    S0_3 = guest::cpu()->s[0];
    if (r0_1 != 0) {
        if (r1 < 4u) {
            r0_2 = 0x9c79d4u + (r1 << 4);  // (from the original)
            *gptr<u8>(r0_2) = u8(1u);
            *gptr<u8>(r0_2 + 1u) = u8(r5_1);
            *gptr<u32>(r0_2 + 4u) = u32(*gptr<u32>(r13));
            *gptr<u32>(r0_2 + 8u) = u32(*gptr<u32>(r13 + 4u));
            *gptr<u32>(r0_2 + 0xcu) = u32(*gptr<u32>(r13 + 8u));  // (from the original)
        }
        r3_2 = 0u;
        r2_1 = r3_2;
        r1_1 = r1;
        r0_3 = 0x59u;  // (from the original)
    } else {
        r3_2 = 0u;
        r2_1 = r3_2;
        r1_1 = r1;
        r0_3 = 0x5au;  // (from the original)
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    r0_4 = call_006249b0(r0_3, r1_1, r2_1, r3_2);
    r1_2 = guest::cpu()->r[1];
    S0_4 = guest::cpu()->s[0];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    return r0_4;
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
    u32 cf_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r3_2 = 0;
    u32 r0_2 = 0;
    u32 r3_3 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_4 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r4 = r0;
    r6 = u32(arg0->byte_1);
    r5 = u32(arg0->byte_2);
    r7 = u32(arg0->byte_0);
    cf_1 = r6 >= 0x5bu;  // (from the original)
    if (!cf_1) {
        cf_1 = r5 >= 0x5bu;  // (from the original)
    }
    if (cf_1) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00203558(r7, r1, r2, r3);
    r1 = r0;
    if (r0 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r3 = r1 + 0x12u;  // (from the original)
    r0 = r1 + 0xau;  // (from the original)
    r2 = sxtb(r6);
    if (r3 <= r0) {
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
    } while (r3 > r0);
L_4e6aa4:;
    *gptr<u8>(r1 + 9u) = u8(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_006f9c08(r7, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    if (r0 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_006bbd54(r0_1, 0x2fu, r6, r3_1);  // (from the original)
    r3_2 = guest::cpu()->r[3];
    r0_2 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_006bbd54(r0_2, 0x2fu, r5, r3_2);  // (from the original)
    r3_3 = guest::cpu()->r[3];
    r2_1 = r13 + 4u;
    r1_1 = r13;
    guest::cpu()->r[13] = r13;
    call_002d50b8(r0, r1_1, r2_1, r3_3);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0030b6c4(r0_3, r1_2, r2_2, r3_4);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r2_3 = r13;
    *gptr<u16>(r13) = u16(u32(*gptr<u16>(r4)));
    *gptr<u8>(r13 + 2u) = u8(u32(*gptr<u8>(r4 + 2u)));
    guest::cpu()->r[13] = r13;
    r0 = call_006249b0(0x56u, 4u, r2_3, 3u);  // (from the original)
    r1 = guest::cpu()->r[1];
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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r2_3 = 0;
    u32 r0_4 = 0;
    u32 r1_5 = 0;
    r0_1 = u32(arg0->byte_8);
    r13 = r13 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_00203558(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    r1_2 = *gptr<u32>(r0);
    r2_1 = *gptr<u32>(r0 + 4);
    *gptr<u32>(r0_2) = u32(r1_2);
    *gptr<u32>(r0_2 + 4) = u32(r2_1);
    guest::cpu()->r[13] = r13;
    r0_3 = call_0030b6c4(r0_2, r1_2, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return r0_3;
    }
    r1_4 = *gptr<u32>(r0 + 4);
    r2_2 = *gptr<u32>(r0 + 8);
    r3_2 = *gptr<u32>(r0 + 0xc);  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(r0));
    *gptr<u32>(r13 + 4) = u32(r1_4);
    *gptr<u32>(r13 + 8) = u32(r2_2);
    *gptr<u32>(r13 + 0xc) = u32(r3_2);  // (from the original)
    r2_3 = r13;
    guest::cpu()->r[13] = r13;
    r0_4 = call_006249b0(0x53u, 4u, r2_3, 0x10u);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return r0_4;
}

}  // namespace d_004e6b48
GUEST_EXPORT(0x004e6b48, d_004e6b48::f_004e6b48);

// f_004e6b9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e6b9c {

inline constexpr guest::Function<0x004e5924, u32(u32, u32, u32, u32)> call_004e5924;  // (from the original)
inline constexpr guest::Function<0x006bba14, u32(u32, u32, u32, u32)> call_006bba14;  // (from the original)

u32 f_004e6b9c(u32 r0, gptr<WordPair> arg1, u32 r2, u32 r3) {
    u32 r1 = arg1.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r1_1 = u32(arg1->first);
    r0_1 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006bba14(r0_1, r1_1, r2, r3);
    r0_2 = u32(*gptr<u16>(r1 + 4u));
    *gptr<u32>(r13 + 8u) = u32(0u);
    *gptr<u32>(r13) = u32((r0_2 & 0x200u) >> 9);  // (from the original)
    *gptr<u32>(r13 + 4) = u32(r13 + 0xcu);  // (from the original)
    r1_2 = r0_2 & 0xfu;  // (from the original)
    r3_1 = r0_2 << 0x17 >> 0x1f;  // (from the original)
    r2_1 = r0_2 << 0x18 >> 0x1c;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_004e5924(r0, r1_2, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    r0_3 = r13 + 0xcu;  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_3;
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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r8_1 = 0;
    u32 r0_3 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_9 = 0;
    u32 r3_6 = 0;
    u32 r0_10 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r0_1 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fc20c(r0_1, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r1_1 = *gptr<u32>(r1);
    r8_1 = r13 + 4u;
    *gptr<u32>(r0_2) = u32(r1_1);
    r0_3 = u32(*gptr<u8>(r1 + 4u));
    r6_1 = r0_3 & 0xfu;  // (from the original)
    r7_1 = r0_3 >> 4;
    guest::cpu()->r[13] = r13;
    r0_4 = call_002f74c8(r0_3, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_5 = call_002f74e0(8u, r0, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_5 == 0) {
        goto L_4e6d30;
    }
    guest::cpu()->r[13] = r13;
    r0_6 = call_002f74e0(8u, r0_4, r2_3, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_6 == 0) {
        goto L_4e6ce0;
    }
    if (r0 != r0_4) {
        goto L_4e6ce0;
    }
    guest::cpu()->r[13] = r13;
    r0_7 = call_006a5e34(r0_6, r1_3, r2_4, r3_4);
    r1_2 = guest::cpu()->r[1];
    goto L_4e6cf4;
L_4e6ce0:;
    guest::cpu()->r[13] = r13;
    r0_8 = call_006f9638(r0, r1_3, r2_4, r3_4);
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_7 = call_002fe7cc(r0_8, r1_4, r2_5, r3_5);
    r1_2 = guest::cpu()->r[1];
L_4e6cf4:;
    if (r0_7 == 0) {
        goto L_4e6d30;
    }
    *gptr<u32>(r13) = u32(1u);
    guest::cpu()->r[13] = r13;
    r0_9 = call_002fc994(r0_7, r8_1, r6_1, r7_1);
    r1_2 = guest::cpu()->r[1];
    r3_6 = guest::cpu()->r[3];
    if (r0_9 == 0) {
        goto L_4e6d30;
    }
    guest::cpu()->r[13] = r13;
    call_0059e65c(r6_1, r7_1, 1u, r3_6);
    r1_2 = guest::cpu()->r[1];
L_4e6d30:;
    r0_10 = r13 + 4u;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_10;
}

}  // namespace d_004e6c70
GUEST_EXPORT(0x004e6c70, d_004e6c70::f_004e6c70);

// f_004e6e84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e6e84 {

inline guest::global<u32, 0x0095c6d0> global_0095c6d0;  // (from the original)
inline constexpr guest::Function<0x005b49e0, u32(u32, u32, u32, u32)> call_005b49e0;  // (from the original)
inline constexpr guest::Function<0x006c4280, u32(u32, u32, u32, u32)> call_006c4280;  // (from the original)
inline constexpr guest::Function<0x006e0b2c, u32(u32, u32, u32, u32)> call_006e0b2c;  // (from the original)

u32 f_004e6e84(u32 r0) {
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_006e0b2c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        goto L_4e6ecc;
    }
    r4_1 = *global_0095c6d0;
    if (r4_1 == 0) {
        goto L_4e6ecc;
    }
    r0_2 = call_005b49e0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 == 0) {
        goto L_4e6ecc;
    }
    r0_3 = u32(s32(s8(*gptr<u8>(r4_1 + 0x1cu))));  // (from the original)
    r0_4 = call_006c4280(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_4 == 9u) {
        r0_5 = 1u;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return r0_5;
    }
L_4e6ecc:;
    r0_5 = 0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0_5;
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
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r3_5 = 0;
    u32 r2_5 = 0;
    u32 r3_6 = 0;
    u32 r2_6 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r4_1 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f74c8(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f74e0(8u, r0, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_4e733c;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_002f74e0(8u, r0_1, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        goto L_4e7290;
    }
    if (r0 != r0_1) {
        goto L_4e7290;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_006a5e34(r0_3, r1_2, r2_3, r3_3);
    r1_1 = guest::cpu()->r[1];
    goto L_4e72a4;
L_4e7290:;
    guest::cpu()->r[13] = r13;
    r0_4 = call_006f9638(r0, r1_2, r2_3, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fe7cc(r0_4, r1_3, r2_4, r3_4);
    r1_1 = guest::cpu()->r[1];
L_4e72a4:;
    if (r0_2 == 0) {
        goto L_4e733c;
    }
    *gptr<u32>(r13) = u32(1u);
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fc994(r0_2, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r3_5 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_4e733c;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_0059e65c(r2, r3, 1u, r3_5);
    r1_1 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if (r4_1 == 0) {
        goto L_4e733c;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_00300904(r0_2, r1_1, r2_5, r3_6);
    r1_1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        goto L_4e733c;
    }
    *gptr<u32>(r13) = u32(*gptr<u32>(r1));
    *gptr<u8>(r13 + 4u) = u8((r2 & 0xfu | u32(*gptr<u8>(r13 + 4u)) & ~0xfu) & ~0xf0u | 0xf0u & r3 << 4);  // (from the original)
    r2_6 = r13;
    guest::cpu()->r[13] = r13;
    r0_2 = call_006249b0(0x4eu, 4u, r2_6, 5u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
L_4e733c:;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_004e7234
GUEST_EXPORT(0x004e7234, d_004e7234::f_004e7234);

// f_004e7344: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e7344 {

inline guest::global<u32, 0x0095c6d0> global_0095c6d0;  // (from the original)
inline constexpr guest::Function<0x005b49b4, u32(u32, u32, u32, u32)> call_005b49b4;  // (from the original)
inline constexpr guest::Function<0x006c4280, u32(u32, u32, u32, u32)> call_006c4280;  // (from the original)
inline constexpr guest::Function<0x006e0b2c, u32(u32, u32, u32, u32)> call_006e0b2c;  // (from the original)

u32 f_004e7344(u32 r0) {
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_006e0b2c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        goto L_4e738c;
    }
    r4_1 = *global_0095c6d0;
    if (r4_1 == 0) {
        goto L_4e738c;
    }
    r0_2 = call_005b49b4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 == 0) {
        goto L_4e738c;
    }
    r0_3 = u32(s32(s8(*gptr<u8>(r4_1 + 0x1cu))));  // (from the original)
    r0_4 = call_006c4280(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_4 == 9u) {
        r0_5 = 1u;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return r0_5;
    }
L_4e738c:;
    r0_5 = 0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0_5;
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
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 zf_1 = 0;
    u32 r0_2 = 0;
    u32 cf_1 = 0;
    u32 r12_1 = 0;
    u32 cf_2 = 0;
    u32 r6_1 = 0;
    u32 r6_2 = 0;
    u32 res_1 = 0;
    u32 zf_2 = 0;
    u32 cf_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 zf_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 zf_4 = 0;
    u32 r4_1 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 zf_5 = 0;
    u32 r6_3 = 0;
    u32 r5_1 = 0;
    u32 zf_6 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_6 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_7 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_8 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_9 = 0;
    u32 r1_5 = 0;
    u32 r1_6 = 0;
    u32 r0_10 = 0;
    u32 r1_7 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r0_11 = 0;
    u32 r1_8 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r0_12 = 0;
    u32 r2_13 = 0;
    u32 r3_13 = 0;
    u32 r0_13 = 0;
    u32 r2_14 = 0;
    u32 r3_14 = 0;
    u32 r0_14 = 0;
    u32 r2_15 = 0;
    u32 r3_15 = 0;
    u32 r0_15 = 0;
    u32 r1_9 = 0;
    u32 r1_10 = 0;
    u32 r1_11 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r1_12 = 0;
    u32 r2_16 = 0;
    u32 r3_16 = 0;
    u32 r2_17 = 0;
    u32 r3_17 = 0;
    u32 zf_7 = 0;
    u32 r0_18 = 0;
    u32 r1_13 = 0;
    u32 r2_18 = 0;
    u32 r3_18 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 nf_1 = 0;
    u32 zf_8 = 0;
    u32 r0_22 = 0;
    u32 nf_2 = 0;
    u32 zf_9 = 0;
    u32 r6_4 = 0;
    u32 r0_23 = 0;
    u32 r2_19 = 0;
    u32 r0_24 = 0;
    u32 r1_14 = 0;
    u32 zf_10 = 0;
    u32 r0_25 = 0;
    u32 zf_11 = 0;
    u32 r3_19 = 0;
    u32 r1_15 = 0;
    u32 r0_26 = 0;
    u32 ea_1 = 0;
    u32 r3_20 = 0;
    u32 ea_2 = 0;
    u32 r0_27 = 0;
    u32 r1_16 = 0;
    u32 r0_28 = 0;
    u32 r12_2 = 0;
    u32 r0_29 = 0;
    u32 r1_17 = 0;
    u32 r2_20 = 0;
    u32 res_2 = 0;
    u32 nf_3 = 0;
    u32 vf_1 = 0;
    u32 res_3 = 0;
    u32 nf_4 = 0;
    u32 vf_2 = 0;
    u32 res_4 = 0;
    u32 nf_5 = 0;
    u32 vf_3 = 0;
    u32 r0_30 = 0;
    u32 res_5 = 0;
    u32 nf_6 = 0;
    u32 vf_4 = 0;
    u32 cf_4 = 0;
    u32 r0_31 = 0;
    u32 r2_21 = 0;
    u32 r3_21 = 0;
    u32 zf_12 = 0;
    u32 r0_32 = 0;
    u32 nf_7 = 0;
    u32 zf_13 = 0;
    u32 nf_8 = 0;
    u32 zf_14 = 0;
    u32 r0_33 = 0;
    u32 r2_22 = 0;
    u32 r0_34 = 0;
    u32 r1_18 = 0;
    u32 r2_23 = 0;
    u32 r3_22 = 0;
    u32 zf_15 = 0;
    u32 r0_35 = 0;
    u32 r1_19 = 0;
    u32 r2_24 = 0;
    u32 r3_23 = 0;
    u32 zf_16 = 0;
    u32 r0_36 = 0;
    u32 zf_17 = 0;
    u32 r3_24 = 0;
    u32 r1_20 = 0;
    u32 r0_37 = 0;
    u32 r2_25 = 0;
    u32 r3_25 = 0;
    u32 r0_38 = 0;
    u32 r1_21 = 0;
    u32 r0_39 = 0;
    u32 r1_22 = 0;
    u32 r2_26 = 0;
    u32 r3_26 = 0;
    u32 zf_18 = 0;
    u32 r0_40 = 0;
    u32 r1_23 = 0;
    u32 r2_27 = 0;
    u32 r3_27 = 0;
    u32 zf_19 = 0;
    u32 r0_41 = 0;
    u32 r2_28 = 0;
    u32 r3_28 = 0;
    u32 r1_24 = 0;
    u32 r0_42 = 0;
    u32 r3_29 = 0;
    u32 r1_25 = 0;
    u32 r1_26 = 0;
    u32 r1_27 = 0;
    u32 r1_28 = 0;
    u32 cf_5 = 0;
    u32 r1_29 = 0;
    u32 r2_29 = 0;
    u32 zf_20 = 0;
    u32 cf_6 = 0;
    u32 r0_43 = 0;
    u32 r0_44 = 0;
    u32 r1_30 = 0;
    u32 r0_45 = 0;
    u32 r1_31 = 0;
    u32 r2_30 = 0;
    u32 r1_32 = 0;
    u32 r2_31 = 0;
    u32 r0_46 = 0;
    u32 r0_47 = 0;
    u32 zf_21 = 0;
    u32 r0_48 = 0;
    u32 r0_49 = 0;
    u32 r1_33 = 0;
    u32 r2_32 = 0;
    u32 r3_30 = 0;
    u32 r0_50 = 0;
    u32 r3_31 = 0;
    u32 r1_34 = 0;
    u32 r2_33 = 0;
    u32 r3_32 = 0;
    u32 r0_51 = 0;
    u32 r0_52 = 0;
    u32 r1_35 = 0;
    u32 r2_34 = 0;
    u32 r3_33 = 0;
    u32 zf_22 = 0;
    u32 r0_53 = 0;
    u32 r2_35 = 0;
    u32 r3_34 = 0;
    u32 r1_36 = 0;
    u32 r5_2 = 0;
    u32 r0_54 = 0;
    u32 r1_37 = 0;
    u32 r1_38 = 0;
    u32 r1_39 = 0;
    u32 r1_40 = 0;
    u32 cf_7 = 0;
    u32 r1_41 = 0;
    u32 r2_36 = 0;
    u32 zf_23 = 0;
    u32 cf_8 = 0;
    u32 r0_55 = 0;
    u32 r0_56 = 0;
    u32 r1_42 = 0;
    u32 r0_57 = 0;
    u32 r1_43 = 0;
    u32 r2_37 = 0;
    u32 r3_35 = 0;
    u32 r1_44 = 0;
    u32 r2_38 = 0;
    u32 r0_58 = 0;
    u32 res_6 = 0;
    u32 nf_9 = 0;
    u32 vf_5 = 0;
    u32 res_7 = 0;
    u32 nf_10 = 0;
    u32 vf_6 = 0;
    u32 res_8 = 0;
    u32 nf_11 = 0;
    u32 vf_7 = 0;
    u32 r0_59 = 0;
    u32 r1_45 = 0;
    u32 r0_60 = 0;
    u32 res_9 = 0;
    u32 nf_12 = 0;
    u32 vf_8 = 0;
    r13 = r13 - 0x24;  // (from the original)
    r13 = r13 - 0x3cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f74c8(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x18u) = u32(r0_1);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(0x10000u, r0_1, r2_1, r3_1);  // (from the original)
    r1 = guest::cpu()->r[1];
    zf_1 = r0 == 0;
    if (!zf_1) {
        goto L_4e76a0;
    }
    r2 = 0x9c7a14u;  // (from the original)
    r0 = 0u;
    r1 = r0;
    r11 = r0;
    do {
L_4e750c:;
        *gptr<u32>(r2 + (r0 << 2)) = u32(r11);
        r0_2 = r0 + 1u;
        r1 = r1 + 2u;
        *gptr<u32>(r2 + (r0_2 << 2)) = u32(r11);
        cf_1 = r1 >= 0x30u;  // (from the original)
        r0 = r0_2 + 1u;
        guest::preempt();
    } while (!cf_1);
    r5 = 0x9c7ad4u;  // (from the original)
    r1 = 0u;
    r2 = ~0u;
L_4e7534:;
    r12_1 = r1 + (r1 << 2);
    r0 = 0u;
    r4 = r5 + (r12_1 << 4);
    r3 = 0x50u;  // (from the original)
    r12 = r5 + (r1 << 4);
    do {
L_4e7548:;
        cf_2 = r0 >= 0x10u;  // (from the original)
        if (!cf_2) {
            cf_2 = r1 >= 0x10u;  // (from the original)
        }
        *gptr<u8>(r4 + r0) = u8(r2);
        if (!cf_2) {
            r6_1 = r12 + r0;
            r6_2 = r6_1 + 0x1400u;  // (from the original)
            *gptr<u8>(r6_2) = u8(r2);
        }
        res_1 = r3 - 1u;
        zf_2 = res_1 == 0;
        r3 = res_1;
        r0 = r0 + 1u;
        guest::preempt();
    } while (!zf_2);
    r1 = r1 + 1u;
    cf_3 = r1 >= 0x40u;  // (from the original)
    if (!cf_3) {
        guest::preempt();
        goto L_4e7534;
    }
    guest::cpu()->r[13] = r13;
    call_004e1668(0x9c8fd4u, r1, r2, r3);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r1_1 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_002f74e0(4u, r1_1, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    zf_3 = r0_3 == 0;
    if (zf_3) {
        goto L_4e7784;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_006a5e34(r0_3, r1_2, r2_3, r3_3);
    r1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    zf_4 = r0 == 0;
    r4_1 = r0;
    if (zf_4) {
        goto L_4e76a0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2_4, r3_4);
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r1 = 0x2069u;  // (from the original)
    zf_5 = r0 == 0xa0u;  // (from the original)
    r6_3 = r1 + 1u;
    r5_1 = r1 - 3u;
    if (zf_5) {
        goto L_4e76a8;
    }
    zf_6 = r0 == 0x9fu;  // (from the original)
    if (!zf_6) {
        goto L_4e76a0;
    }
    r0_4 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fcbb0(r0_4, r1, r2_5, r3_5);
    r1_3 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r13) = u32(r11);
    guest::cpu()->r[13] = r13;
    call_002fc994(r4_1, r1_3, 6u, 5u);
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_5 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fcbb0(r0_5, r6_3, r2_6, r3_6);
    r1_4 = r13 + 0x14u;  // (from the original)
    *gptr<u32>(r13) = u32(r11);
    guest::cpu()->r[13] = r13;
    call_002fc994(r4_1, r1_4, 8u, 0xeu);  // (from the original)
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_6 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_002fcbb0(r0_6, r5_1, r2_7, r3_7);
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_7 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_003055b4(r0_7, 3u, r2_8, r3_8);
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_8 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fcbb0(r0_8, r5_1, r2_9, r3_9);
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_9 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_003055b4(r0_9, 0u, r2_10, r3_10);
    r1_5 = r13 + 8u;
    *gptr<u32>(r13) = u32(r11);
    guest::cpu()->r[13] = r13;
    call_002fc994(r4_1, r1_5, 0xbu, 0xbu);  // (from the original)
    r1_6 = r13 + 0xcu;  // (from the original)
    *gptr<u32>(r13) = u32(r11);
    guest::cpu()->r[13] = r13;
    call_002fc994(r4_1, r1_6, 8u, 9u);
    r1 = guest::cpu()->r[1];
    r0 = r13 + 0x10u;  // (from the original)
L_4e76a0:;
    r13 = r13 + 0x3cu;  // (from the original)
    r13 = r13 + 0x24;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_4e76a8:;
    r0_10 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fcbb0(r0_10, r1, r2_5, r3_5);
    r1_7 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r13) = u32(r11);
    guest::cpu()->r[13] = r13;
    call_002fc994(r4_1, r1_7, 7u, 5u);
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_11 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fcbb0(r0_11, r6_3, r2_11, r3_11);
    r1_8 = r13 + 0x14u;  // (from the original)
    *gptr<u32>(r13) = u32(r11);
    guest::cpu()->r[13] = r13;
    call_002fc994(r4_1, r1_8, 7u, 0xeu);  // (from the original)
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_12 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_002fcbb0(r0_12, r5_1, r2_12, r3_12);
    r2_13 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_13 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_003055b4(r0_13, 1u, r2_13, r3_13);
    r2_14 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_14 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fcbb0(r0_14, r5_1, r2_14, r3_14);
    r2_15 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r0_15 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_003055b4(r0_15, 0u, r2_15, r3_15);
    r1_9 = r13 + 8u;
    *gptr<u32>(r13) = u32(r11);
    guest::cpu()->r[13] = r13;
    call_002fc994(r4_1, r1_9, 4u, 0xcu);  // (from the original)
    r1_10 = r13 + 0xcu;  // (from the original)
    *gptr<u32>(r13) = u32(r11);
    guest::cpu()->r[13] = r13;
    call_002fc994(r4_1, r1_10, 6u, 9u);
    r1_11 = guest::cpu()->r[1];
    r0_16 = r13 + 0x10u;  // (from the original)
    r13 = r13 + 0x3cu;  // (from the original)
    r13 = r13 + 0x24;  // (from the original)
    guest::cpu()->r[1] = r1_11;
    guest::cpu()->r[13] = r13;
    return r0_16;
L_4e7784:;
    guest::cpu()->r[13] = r13;
    r0_17 = call_00167960(r0_3, r1_2, r2_3, r3_3);
    r1_12 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_006a5e34(r0_17, r1_12, r2_16, r3_16);
    r1 = guest::cpu()->r[1];
    r2_17 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    zf_7 = r0 == 0;
    *gptr<u32>(r13 + 0x20u) = u32(r0);  // (from the original)
    if (zf_7) {
        guest::preempt();
        goto L_4e76a0;
    }
    guest::cpu()->r[13] = r13;
    r0_18 = call_007482b8(r0, r1, r2_17, r3_17);
    r1_13 = guest::cpu()->r[1];
    r2_18 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    r10 = r0_18;
    r0_19 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_20 = call_0074830c(r0_19, r1_13, r2_18, r3_18);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r8 = 0u;
    *gptr<u32>(r13 + 0x24u) = u32(r0_20);  // (from the original)
L_4e77bc:;
    r0_21 = *gptr<u32>(r13 + 0x24u);  // (from the original)
    nf_1 = r0_21 >> 0x1f;  // (from the original)
    zf_8 = r0_21 == 0;
    r0_22 = 0u;
    *gptr<u32>(r13 + 0x1cu) = u32(r0_22);  // (from the original)
    if (zf_8 || nf_1 != 0u) {
        goto L_4e789c;
    }
L_4e77d0:;
    nf_2 = r10 >> 0x1f;  // (from the original)
    zf_9 = r10 == 0;
    r9 = 0u;
    if (zf_9 || nf_2 != 0u) {
        goto L_4e7884;
    }
L_4e77dc:;
    r7 = 0u;
L_4e77e0:;
    r4 = 0u;
L_4e77e4:;
    r6_4 = r8 & 0xffu;  // (from the original)
    r0_23 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r2_19 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r6_4);
    *gptr<u32>(r13) = u32(r7);
    guest::cpu()->r[13] = r13;
    r0_24 = call_00752b44(r0_23, r9, r2_19, r4);
    r1_14 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf_10 = r0_24 == 0;
    if (zf_10) {
        goto L_4e7860;
    }
    guest::cpu()->r[13] = r13;
    r0_25 = call_0030b654(r0_24, r1_14, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf_11 = r0_25 == 0;
    if (zf_11) {
        goto L_4e7860;
    }
    *gptr<u32>(r13) = u32(r4);
    *gptr<u32>(r13 + 4) = u32(r7);
    r3_19 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    r1_15 = r13 + 0x34u;  // (from the original)
    r0_26 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006a6e90(r0_26, r1_15, r9, r3_19);
    ea_1 = r13 + 0x18u;  // (from the original)
    r3_20 = *gptr<u32>(ea_1);
    ea_2 = r13 + 0x30u;  // (from the original)
    r0_27 = *gptr<u32>(ea_2);
    r1_16 = *gptr<u32>(ea_2 + 4);
    guest::cpu()->r[13] = r13;
    r0_28 = call_00582b1c(r0_27, r1_16, r6_4, r3_20);
    *gptr<u32>(r13) = u32(r0_28);
    *gptr<u32>(r13 + 4) = u32(r0_24);
    *gptr<u32>(r13 + 8) = u32(r11);
    r12_2 = r13 + 0x30u;  // (from the original)
    r0_29 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    r1_17 = *gptr<u32>(r12_2);
    r2_20 = *gptr<u32>(r12_2 + 4);
    guest::cpu()->r[13] = r13;
    call_004e5924(r0_29, r1_17, r2_20, r6_4);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_4e7860:;
    r4 = r4 + 1u;
    res_2 = r4 - 0x10u;  // (from the original)
    nf_3 = res_2 >> 0x1f;  // (from the original)
    vf_1 = ((r4 ^ 0x10u) & (r4 ^ res_2)) >> 0x1f;  // (from the original)
    if (nf_3 != vf_1) {
        guest::preempt();
        goto L_4e77e4;
    }
    r7 = r7 + 1u;
    res_3 = r7 - 0x10u;  // (from the original)
    nf_4 = res_3 >> 0x1f;  // (from the original)
    vf_2 = ((r7 ^ 0x10u) & (r7 ^ res_3)) >> 0x1f;  // (from the original)
    if (nf_4 != vf_2) {
        guest::preempt();
        goto L_4e77e0;
    }
    r9 = r9 + 1u;
    res_4 = r9 - r10;
    nf_5 = res_4 >> 0x1f;  // (from the original)
    vf_3 = ((r9 ^ r10) & (r9 ^ res_4)) >> 0x1f;  // (from the original)
    if (nf_5 != vf_3) {
        guest::preempt();
        goto L_4e77dc;
    }
L_4e7884:;
    r0_30 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    r1 = *gptr<u32>(r13 + 0x24u);  // (from the original)
    r0_22 = r0_30 + 1u;
    res_5 = r0_22 - r1;
    nf_6 = res_5 >> 0x1f;  // (from the original)
    vf_4 = ((r0_22 ^ r1) & (r0_22 ^ res_5)) >> 0x1f;  // (from the original)
    *gptr<u32>(r13 + 0x1cu) = u32(r0_22);  // (from the original)
    if (nf_6 != vf_4) {
        guest::preempt();
        goto L_4e77d0;
    }
L_4e789c:;
    r8 = r8 + 1u;
    cf_4 = r8 >= 2u;
    if (!cf_4) {
        guest::preempt();
        goto L_4e77bc;
    }
    guest::cpu()->r[13] = r13;
    r0_31 = call_002f74c8(r0_22, r1, r2, r3);
    r2_21 = guest::cpu()->r[2];
    r3_21 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(0x40u, r0_31, r2_21, r3_21);  // (from the original)
    r1 = guest::cpu()->r[1];
    zf_12 = r0 == 0;
    if (zf_12) {
        guest::preempt();
        goto L_4e76a0;
    }
    r0_32 = *gptr<u32>(r13 + 0x24u);  // (from the original)
    nf_7 = r0_32 >> 0x1f;  // (from the original)
    zf_13 = r0_32 == 0;
    if (!zf_13 && nf_7 == 0u) {
        r9 = 0x9529fcu;  // (from the original)
    }
    r0 = 0u;
    if (!zf_13 && nf_7 == 0u) {
        r8 = r11;
    }
    *gptr<u32>(r13 + 0xcu) = u32(r0);  // (from the original)
    if (zf_13 || nf_7 != 0u) {
        guest::preempt();
        goto L_4e76a0;
    }
L_4e78e0:;
    nf_8 = r10 >> 0x1f;  // (from the original)
    zf_14 = r10 == 0;
    r11 = 0u;
    if (zf_14 || nf_8 != 0u) {
        goto L_4e7ae8;
    }
L_4e78ec:;
    r6 = 0u;
L_4e78f0:;
    r4 = 0u;
L_4e78f4:;
    *gptr<u32>(r13) = u32(r6);
    *gptr<u32>(r13 + 4) = u32(r8);
    r0_33 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r2_22 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_34 = call_00752b44(r0_33, r11, r2_22, r4);
    r1_18 = guest::cpu()->r[1];
    r2_23 = guest::cpu()->r[2];
    r3_22 = guest::cpu()->r[3];
    zf_15 = r0_34 == 0;
    if (zf_15) {
        goto L_4e7ac4;
    }
    guest::cpu()->r[13] = r13;
    r0_35 = call_002fcaf4(r0_34, r1_18, r2_23, r3_22);
    r1_19 = guest::cpu()->r[1];
    r2_24 = guest::cpu()->r[2];
    r3_23 = guest::cpu()->r[3];
    zf_16 = r0_35 == 0;
    if (!zf_16) {
        goto L_4e7ac4;
    }
    guest::cpu()->r[13] = r13;
    r0_36 = call_00303acc(r0_34, r1_19, r2_24, r3_23);
    zf_17 = r0_36 == 0;
    if (zf_17) {
        goto L_4e7ac4;
    }
    *gptr<u32>(r13) = u32(r4);
    *gptr<u32>(r13 + 4) = u32(r6);
    r3_24 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r1_20 = r13 + 0x1cu;  // (from the original)
    r0_37 = r13 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006a6e90(r0_37, r1_20, r11, r3_24);
    r2_25 = guest::cpu()->r[2];
    r3_25 = guest::cpu()->r[3];
    r0_38 = *gptr<u32>(r13 + 0x2cu);  // (from the original)
    r1_21 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_39 = call_004e2504(r0_38, r1_21, r2_25, r3_25);
    r1_22 = guest::cpu()->r[1];
    r2_26 = guest::cpu()->r[2];
    r3_26 = guest::cpu()->r[3];
    zf_18 = r0_39 == 0;
    if (!zf_18) {
        goto L_4e79f8;
    }
    guest::cpu()->r[13] = r13;
    r0_40 = call_00305570(r0_34, r1_22, r2_26, r3_26);
    r1_23 = guest::cpu()->r[1];
    r2_27 = guest::cpu()->r[2];
    r3_27 = guest::cpu()->r[3];
    zf_19 = r0_40 == 1u;
    if (!zf_19) {
        goto L_4e7ac4;
    }
    guest::cpu()->r[13] = r13;
    r0_41 = call_00305570(r0_34, r1_23, r2_27, r3_27);
    r2_28 = guest::cpu()->r[2];
    r3_28 = guest::cpu()->r[3];
    r1_24 = r7 & ~0xffu;  // (from the original)
    r7 = r1_24 | r0_41;
    guest::cpu()->r[13] = r13;
    r0_42 = call_0076936c(r0_34, r1_24, r2_28, r3_28);
    r3_29 = guest::cpu()->r[3];
    r1_25 = r0_42 << 8;
    r1_26 = r1_25 & 0xff00u;  // (from the original)
    r1_27 = r1_26 | r7;
    r1_28 = r1_27 & 0xffu;  // (from the original)
    cf_5 = r1_28 >= 5u;
    if (cf_5) {
        goto L_4e79d0;
    }
    r1_29 = *gptr<u32>(r9 + (r1_28 << 2));
    r2_29 = u32(*gptr<u8>(r1_29 + 0x10u));  // (from the original)
    zf_20 = r2_29 == 1u;
    cf_6 = r2_29 >= 1u;
    if (!cf_6 || zf_20) {
        goto L_4e79d0;
    }
    r0_43 = r0_42 & 3u;
    r0_44 = *gptr<u32>(r1_29 + (r0_43 << 2));
    r1_30 = r0_44 + 8u;
    goto L_4e79d4;
L_4e79d0:;
    r1_30 = 0x865620u;  // (from the original)
L_4e79d4:;
    r0_45 = *gptr<u32>(r1_30);
    r1_31 = *gptr<u32>(r1_30 + 4);
    r2_30 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    r1_32 = r1_31 + r2_30;
    r2_31 = *gptr<u32>(r13 + 0x2cu);  // (from the original)
    r0_46 = r0_45 + r2_31;
    guest::cpu()->r[13] = r13;
    r0_47 = call_004e2504(r0_46, r1_32, r2_31, r3_29);
    r2_26 = guest::cpu()->r[2];
    r3_26 = guest::cpu()->r[3];
    zf_21 = r0_47 == 0;
    if (zf_21) {
        goto L_4e7ac4;
    }
L_4e79f8:;
    r0_48 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_49 = call_002fc934(r0_48, r0_34, r2_26, r3_26);
    r1_33 = guest::cpu()->r[1];
    r2_32 = guest::cpu()->r[2];
    r3_30 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_50 = call_006a5e34(r0_49, r1_33, r2_32, r3_30);
    *gptr<u32>(r13 + 0x34u) = u32(r0_50);  // (from the original)
    *gptr<u32>(r13) = u32(r4);
    *gptr<u32>(r13 + 4) = u32(r6);
    *gptr<u32>(r13 + 8) = u32(r8);
    r3_31 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00581428(r0_50, 0x95bfdcu, r11, r3_31);  // (from the original)
    r1_34 = guest::cpu()->r[1];
    r2_33 = guest::cpu()->r[2];
    r3_32 = guest::cpu()->r[3];
    r0_51 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_52 = call_00305570(r0_51, r1_34, r2_33, r3_32);
    r1_35 = guest::cpu()->r[1];
    r2_34 = guest::cpu()->r[2];
    r3_33 = guest::cpu()->r[3];
    zf_22 = r0_52 == 1u;
    if (!zf_22) {
        goto L_4e7abc;
    }
    r7 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_53 = call_00305570(r7, r1_35, r2_34, r3_33);
    r2_35 = guest::cpu()->r[2];
    r3_34 = guest::cpu()->r[3];
    r1_36 = r0_34 & ~0xffu;  // (from the original)
    r5_2 = r1_36 | r0_53;
    guest::cpu()->r[13] = r13;
    r0_54 = call_0076936c(r7, r1_36, r2_35, r3_34);
    r1_37 = r0_54 << 8;
    r1_38 = r1_37 & 0xff00u;  // (from the original)
    r1_39 = r1_38 | r5_2;
    r1_40 = r1_39 & 0xffu;  // (from the original)
    cf_7 = r1_40 >= 5u;
    if (cf_7) {
        goto L_4e7a94;
    }
    r1_41 = *gptr<u32>(r9 + (r1_40 << 2));
    r2_36 = u32(*gptr<u8>(r1_41 + 0x10u));  // (from the original)
    zf_23 = r2_36 == 1u;
    cf_8 = r2_36 >= 1u;
    if (!cf_8 || zf_23) {
        goto L_4e7a94;
    }
    r0_55 = r0_54 & 3u;
    r0_56 = *gptr<u32>(r1_41 + (r0_55 << 2));
    r1_42 = r0_56 + 8u;
    goto L_4e7a98;
L_4e7a94:;
    r1_42 = 0x865620u;  // (from the original)
L_4e7a98:;
    r0_57 = *gptr<u32>(r1_42);
    r1_43 = *gptr<u32>(r1_42 + 4);
    r2_37 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    *gptr<u32>(r13) = u32(r8);
    r3_35 = r1_43 + r2_37;
    r1_44 = *gptr<u32>(r13 + 0x2cu);  // (from the original)
    r2_38 = r0_57 + r1_44;
    r0_58 = *gptr<u32>(r13 + 0x34u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc994(r0_58, 0x95bfdcu, r2_38, r3_35);  // (from the original)
L_4e7abc:;
L_4e7ac4:;
    r4 = r4 + 1u;
    res_6 = r4 - 0x10u;  // (from the original)
    nf_9 = res_6 >> 0x1f;  // (from the original)
    vf_5 = ((r4 ^ 0x10u) & (r4 ^ res_6)) >> 0x1f;  // (from the original)
    if (nf_9 != vf_5) {
        guest::preempt();
        goto L_4e78f4;
    }
    r6 = r6 + 1u;
    res_7 = r6 - 0x10u;  // (from the original)
    nf_10 = res_7 >> 0x1f;  // (from the original)
    vf_6 = ((r6 ^ 0x10u) & (r6 ^ res_7)) >> 0x1f;  // (from the original)
    if (nf_10 != vf_6) {
        guest::preempt();
        goto L_4e78f0;
    }
    r11 = r11 + 1u;
    res_8 = r11 - r10;
    nf_11 = res_8 >> 0x1f;  // (from the original)
    vf_7 = ((r11 ^ r10) & (r11 ^ res_8)) >> 0x1f;  // (from the original)
    if (nf_11 != vf_7) {
        guest::preempt();
        goto L_4e78ec;
    }
L_4e7ae8:;
    r0_59 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r1_45 = *gptr<u32>(r13 + 0x24u);  // (from the original)
    r0_60 = r0_59 + 1u;
    res_9 = r0_60 - r1_45;
    nf_12 = res_9 >> 0x1f;  // (from the original)
    vf_8 = ((r0_60 ^ r1_45) & (r0_60 ^ res_9)) >> 0x1f;  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(r0_60);  // (from the original)
    if (nf_12 != vf_8) {
        guest::preempt();
        goto L_4e78e0;
    }
    r13 = r13 + 0x3cu;  // (from the original)
    r13 = r13 + 0x24;  // (from the original)
    guest::cpu()->r[1] = r1_45;
    guest::cpu()->r[13] = r13;
    return r0_60;
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
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_5 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 cf_1 = 0;
    u32 r1_5 = 0;
    u32 r4_1 = 0;
    u32 r0_6 = 0;
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_7 = 0;
    u32 r1_7 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_8 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r0_1 = call_007457e8(0x9c7ad4u, r0, r1, r2);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 >> 0x1f != (r0_1 & (r0_1 ^ r0_1)) >> 0x1f) {  // (from the original)
        goto L_4e7c40;
    }
    r0_2 = call_002f74c8(r0_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_3 = call_005b42fc(r0_2, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_1 > r0_3) {
        goto L_4e7c40;
    }
    r0_4 = call_002f74c8(r0_3, r1_3, r2_3, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_5 = call_005b42fc(r0_4, r1_4, r2_4, r3_4);
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    cf_1 = r0_5 >= 0x30u;  // (from the original)
    if (!cf_1 || r0_5 == 0x30u) {  // (from the original)
        cf_1 = r0_1 >= r0_5;
    }
    r1_5 = 0u;
    if (cf_1) {
        goto L_4e7c44;
    }
    r4_1 = *gptr<u32>(0x9c7a14u + (r0_1 << 2));  // (from the original)
    if (r4_1 == 0) {
        goto L_4e7c44;
    }
    r0_6 = call_0057456c(r4_1, 0u, r2_5, r3_5);
    r1_6 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_7 = call_002f74c8(r0_6, r1_6, r2_6, r3_6);
    r1_7 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r0_7 == 0x2bu) {  // (from the original)
        call_0061402c(r0_7, r1_7, r2_7, r3_7);
        r2_7 = guest::cpu()->r[2];
        r3_7 = guest::cpu()->r[3];
    }
    r0_8 = call_005708e8(r4_1, 0u, r2_7, r3_7);
    r1_5 = r0_8;
    goto L_4e7c44;
L_4e7c40:;
    r1_5 = 0u;
L_4e7c44:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    return r1_5;
}

}  // namespace d_004e7bb0
GUEST_EXPORT(0x004e7bb0, d_004e7bb0::f_004e7bb0);

// f_004e7c54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e7c54 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x005b42fc, u32(u32, u32, u32, u32)> call_005b42fc;  // (from the original)
inline constexpr guest::Function<0x007457e8, u32(u32, u32, u32, u32)> call_007457e8;  // (from the original)
inline constexpr guest::Function<0x007500b4, u32(u32, u32, u32, u32)> call_007500b4;  // (from the original)
inline constexpr guest::Function<0x00750894, u32(u32, u32, u32, u32)> call_00750894;  // (from the original)

u32 f_004e7c54(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r9 = guest::cpu()->r[9];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r2_6 = 0;
    u32 r3_5 = 0;
    u32 r5_1 = 0;
    u32 r0_7 = 0;
    u32 r2_7 = 0;
    u32 r3_6 = 0;
    u32 r0_8 = 0;
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r6 = r0;
    r7 = r1;
    r4 = 0u;
    r9 = 0x865648u;  // (from the original)
L_4e7c68:;
    r0_1 = r9 + (r4 << 3);
    r1_1 = *gptr<u32>(r0_1) + r6;
    r2_1 = *gptr<u32>(r0_1 + 4u) + r7;
    r0_2 = call_007457e8(0x9c7ad4u, r1_1, r2_1, 0u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_3 = call_002f74c8(r0_2, r1_2, r2_2, r3_1);
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_4 = call_002f74e0(8u, r0_3, r2_3, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_2 + 1u == 0) {
        goto L_4e7d08;
    }
    r0_5 = call_002f74c8(r0_4, r1_3, r2_4, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_6 = call_005b42fc(r0_5, r1_4, r2_5, r3_4);
    r1_3 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_6 > 0x30u) {  // (from the original)
        goto L_4e7d08;
    }
    if (r0_6 <= r0_2) {
        goto L_4e7d08;
    }
    r5_1 = *gptr<u32>(0x9c7a14u + (r0_2 << 2));  // (from the original)
    if (r5_1 == 0) {
        goto L_4e7d08;
    }
    r0_7 = call_007500b4(r5_1, r1_3, r2_6, r3_5);
    r1_3 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if (r0_7 == 0) {
        goto L_4e7d08;
    }
    r0_8 = call_00750894(r5_1, r1_3, r2_7, r3_6);
    r1_3 = guest::cpu()->r[1];
    if (r0_8 == 0) {
        goto L_4e7d1c;
    }
L_4e7d08:;
    r4 = r4 + 1u;
    if (r4 < 4u) {
        guest::preempt();
        goto L_4e7c68;
    }
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return 0u;
L_4e7d1c:;
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return 1u;
}

}  // namespace d_004e7c54
GUEST_EXPORT(0x004e7c54, d_004e7c54::f_004e7c54);

// f_004e7d38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e7d38 {


void f_004e7d38(u32 r0) {
    if (r0 >= 4u) {
        guest::cpu()->r[1] = 0x9c79d4u;  // (from the original)
        return;
    }
    *gptr<u8>(0x9c79d4u + (r0 << 4)) = u8(0u);  // (from the original)
    guest::cpu()->r[1] = 0x9c79d4u;  // (from the original)
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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r7_1 = 0;
    u32 r0_4 = 0;
    u32 r2_4 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f74e0(0x80u, r0, r2, r3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        guest::cpu()->r[13] = r13;
        r0_1 = call_002f74e0(0x2000u, r0, r2_1, r3_1);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        if (r0_1 == 0) {
            r13 = r13 + 0x28u;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->r[13] = r13;
            return r0_1;
        }
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_00300904(r0_1, r1_1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        guest::cpu()->r[13] = r13;
        r0_1 = call_00300904(r0_2, r1_1, r2_2, r3_2);
        r1_1 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        if (r0_1 == 0) {
            goto L_4e7e00;
        }
        guest::cpu()->r[13] = r13;
        r0_1 = call_0030b6c4(r0_1, r1_1, r2_2, r3_2);
        r1_1 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        if (r0_1 == 0) {
            goto L_4e7e00;
        }
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_00203558(r0, r1_1, r2_2, r3_2);
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_3 != 0) {
        *gptr<u32>(r0_3) = u32(r2);
        *gptr<u32>(r0_3 + 4) = u32(r3);
        guest::cpu()->r[13] = r13;
        r0_3 = call_00300904(r0_3, r1_1, r2_3, r3_3);
        r1_1 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        if (r0_3 == 0) {
            r0_1 = 1u;
            r13 = r13 + 0x28u;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->r[13] = r13;
            return r0_1;
        }
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_00300904(r0_3, r1_1, r2_3, r3_3);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
L_4e7e00:;
    r7_1 = 0u;
    *gptr<u32>(r13) = u32(r2);
    *gptr<u32>(r13 + 4) = u32(r3);
    *gptr<u8>(r13 + 8u) = u8(r0);
    guest::cpu()->r[13] = r13;
    r0_4 = call_0030b6c4(r0_1, r1_1, r2_2, r3_2);
    if (r0_4 != 0) {
        r7_1 = 4u;
    }
    r2_4 = r13;
    guest::cpu()->r[13] = r13;
    call_006249b0(0x53u, r7_1, r2_4, 0x10u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_1 = 1u;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
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
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 zf_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_005361a8(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r0_2 = u32(*gptr<u8>(r0_1 + 0xau));  // (from the original)
    if (r0_2 < 0x9bu) {  // (from the original)
        zf_1 = r0_2 == 0x93u;  // (from the original)
        if (!zf_1) {
            zf_1 = r0_2 == 0x94u;  // (from the original)
        }
        if (zf_1) {
            goto L_4e82f8;
        }
    }
    r0_3 = call_0030b6b8(r0, r1_1, r2_1, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r0_2 = r0_3 - 0x33b5u;  // (from the original)
    if (r0_2 > 6u) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
L_4e82f8:;
    r0_4 = call_002fb94c(r0_2, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_4 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    r0_5 = r0_4 + 0x8ae0u;  // (from the original)
    call_0024b448(r0_5, 1u, 1u, guest::cpu()->r[3]);
    call_0024b448(r0_5, 0x64u, 1u, guest::cpu()->r[3]);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_3;
    return 1u;
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
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r3_5 = 0;
    u32 r2_5 = 0;
    u32 r1_5 = 0;
    u32 r0_8 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_9 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r1_6 = 0;
    u32 r0_10 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r1_7 = 0;
    u32 r0_11 = 0;
    u32 r2_9 = 0;
    u32 r0_12 = 0;
    r13 = r13 - 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002ff8b0(4u, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fb94c(r0_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_4e8998;
    }
    r9 = 0x33a7u;  // (from the original)
    r4 = 0u;
    r5 = r0_2 + 0x6bd0u;  // (from the original)
    r7 = r4;
    r8 = 0xau;  // (from the original)
    r6 = 1u;
L_4e88a0:;
    guest::cpu()->r[13] = r13;
    r0_3 = call_00724424(r5, r4, 0u, r3);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_4 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_4, r0_3, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r1_3 = r13 + 0xcu;  // (from the original)
    r0_5 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_5, r1_3, r2_3, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_6 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_7 = call_00313124(r0_6, r1_4, r2_4, r3_4);
    r1_2 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0_7 == 0) {
        goto L_4e8978;
    }
    r3_5 = r13 + 0x14u;  // (from the original)
    r2_5 = r13 + 0x20u;  // (from the original)
    r1_5 = r13 + 0x1cu;  // (from the original)
    r0_8 = r13 + 0xcu;  // (from the original)
    *gptr<u8>(r13 + 0x1cu) = u8(r7);  // (from the original)
    *gptr<u32>(r13 + 0x20u) = u32(r6);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r8);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0076c288(r0_8, r1_5, r2_5, r3_5);
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if (u32(*gptr<u8>(r13 + 0x1cu)) == 0) {  // (from the original)
        goto L_4e896c;
    }
    if (*gptr<u32>(r13 + 0x14u) >= 0xau) {  // (from the original)
        goto L_4e896c;
    }
    r0_9 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fcbb0(r0_9, r9, r2_6, r3_6);
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r1_6 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    r0_10 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00304ef0(r0_10, r1_6, r2_7, r3_7);
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r1_7 = r13 + 0x18u;  // (from the original)
    r0_11 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006bb3bc(r0_11, r1_7, r2_8, r3_8);
    r2_9 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r13) = u32(r6);
    guest::cpu()->r[13] = r13;
    call_002bf9cc(r5, r4, r2_9, 0u);
    r1_2 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    goto L_4e8978;
L_4e896c:;
    r0_12 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006bb358(r0_12, 0u, r2_6, r3_6);
    r1_2 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
L_4e8978:;
    r0_2 = r13 + 0xcu;  // (from the original)
    r4 = r4 + 1u;
    if (r4 < 0x10u) {  // (from the original)
        guest::preempt();
        goto L_4e88a0;
    }
L_4e8998:;
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_2;
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
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
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
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 ea_1 = 0;
    u32 r3_4 = 0;
    u32 res_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 r3_5 = 0;
    u32 ea_4 = 0;
    u32 r1_4 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 ea_5 = 0;
    u32 r3_6 = 0;
    u32 res_2 = 0;
    u32 ea_6 = 0;
    u32 ea_7 = 0;
    u32 r3_7 = 0;
    u32 ea_8 = 0;
    u32 r1_5 = 0;
    u32 r0_7 = 0;
    u32 ea_9 = 0;
    u32 r3_8 = 0;
    u32 res_3 = 0;
    u32 ea_10 = 0;
    u32 ea_11 = 0;
    u32 r3_9 = 0;
    u32 ea_12 = 0;
    u32 r4_1 = 0;
    u32 r0_8 = 0;
    u32 r2_4 = 0;
    r6 = r0;
    r13 = r13 - 0x28u;  // (from the original)
    r4 = r2;
    r5 = r1;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f74e0(0x80u, r1, r2, r3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        guest::cpu()->r[13] = r13;
        r0_1 = call_002f74e0(0x2000u, r5, r2_1, r3_1);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        if (r0_1 == 0) {
            r13 = r13 + 0x28u;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->r[13] = r13;
            return r0_1;
        }
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_00300904(r0_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        guest::cpu()->r[13] = r13;
        r0_3 = call_0030b6c4(r0_2, r1_2, r2_2, r3_2);
        r1_3 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        if (r0_3 == 0) {
            goto L_4e8bb8;
        }
        goto L_4e8bcc;
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_00203558(r5, r1_2, r2_2, r3_2);
    r1_1 = guest::cpu()->r[1];
    r12 = r0_1;
    if (r0_1 == 0) {
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r2 = 4u;
    r0 = r6 - 4u;
    r1 = r13 - 1u;
    do {
L_4e8b80:;
        ea_1 = r0 + 4u;
        r3_4 = *gptr<u32>(ea_1);
        res_1 = r2 - 1u;
        r2 = res_1;
        ea_2 = r1 + 1u;
        *gptr<u8>(ea_2) = u8(r3_4);
        ea_3 = r0 + 8u;
        r0 = ea_3;
        r3_5 = *gptr<u32>(ea_3);
        ea_4 = r1 + 2u;
        *gptr<u8>(ea_4) = u8(r3_5);
        r1 = ea_4;
        guest::preempt();
    } while (res_1 != 0);
    r1_4 = r13;
    if (r4 == 0) {
        r0_4 = r12 + 0x12u;  // (from the original)
    } else {
        r0_4 = r12 + 0xau;  // (from the original)
    }
    guest::cpu()->r[13] = r13;
    call_003081b4(r0_4, r1_4, r2, r3_5);
    r1_1 = guest::cpu()->r[1];
    goto L_4e8c68;
L_4e8bb8:;
    guest::cpu()->r[13] = r13;
    r0_5 = call_0061a788(r5, r1_3, r2_3, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_5 == 0) {
        goto L_4e8c18;
    }
L_4e8bcc:;
    guest::cpu()->r[13] = r13;
    r0_6 = call_00203558(r5, r1_3, r2_3, r3_3);
    r12 = r0_6;
    if (r0_6 == 0) {
        goto L_4e8c18;
    }
    r2 = 4u;
    r0 = r6 - 4u;
    r1 = r13 + 0xfu;  // (from the original)
    do {
L_4e8bec:;
        ea_5 = r0 + 4u;
        r3_6 = *gptr<u32>(ea_5);
        res_2 = r2 - 1u;
        r2 = res_2;
        ea_6 = r1 + 1u;
        *gptr<u8>(ea_6) = u8(r3_6);
        ea_7 = r0 + 8u;
        r0 = ea_7;
        r3_7 = *gptr<u32>(ea_7);
        ea_8 = r1 + 2u;
        *gptr<u8>(ea_8) = u8(r3_7);
        r1 = ea_8;
        guest::preempt();
    } while (res_2 != 0);
    r1_5 = r13 + 0x10u;  // (from the original)
    if (r4 == 0) {
        r0_7 = r12 + 0x12u;  // (from the original)
    } else {
        r0_7 = r12 + 0xau;  // (from the original)
    }
    guest::cpu()->r[13] = r13;
    call_003081b4(r0_7, r1_5, r2, r3_7);
L_4e8c18:;
    r2 = 4u;
    r0 = r6 - 4u;
    r1 = r13 - 1u;
    do {
L_4e8c24:;
        ea_9 = r0 + 4u;
        r3_8 = *gptr<u32>(ea_9);
        res_3 = r2 - 1u;
        r2 = res_3;
        ea_10 = r1 + 1u;
        *gptr<u8>(ea_10) = u8(r3_8);
        ea_11 = r0 + 8u;
        r0 = ea_11;
        r3_9 = *gptr<u32>(ea_11);
        ea_12 = r1 + 2u;
        *gptr<u8>(ea_12) = u8(r3_9);
        r1 = ea_12;
        guest::preempt();
    } while (res_3 != 0);
    *gptr<u8>(r13 + 8u) = u8(r5);
    *gptr<u8>(r13 + 9u) = u8(r4);
    r4_1 = 0u;
    guest::cpu()->r[13] = r13;
    r0_8 = call_0030b6c4(r0, r1, r2, r3_9);
    if (r0_8 != 0) {
        r4_1 = 4u;
    }
    r2_4 = r13;
    guest::cpu()->r[13] = r13;
    call_006249b0(0x55u, r4_1, r2_4, 0xau);  // (from the original)
    r1_1 = guest::cpu()->r[1];
L_4e8c68:;
    r0_1 = 1u;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_2 = 0;
    u32 r0_8 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_006a5e34(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_2 = call_004e0cec(r0, r1, 0u, r0_1);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_3 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_3, r0_2, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r2 != 0) {
        goto L_4e9444;
    }
    r0_4 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_5 = call_00303acc(r0_4, r1_1, r2_2, r3_2);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_5 == 0) {
        goto L_4e9444;
    }
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return 0u;
L_4e9444:;
    r0_6 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_7 = call_00768d60(r0_6, r1_1, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r0_8 = r0_7 ^ 1u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_8;
}

}  // namespace d_004e93d8
GUEST_EXPORT(0x004e93d8, d_004e93d8::f_004e93d8);

// f_004e95f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e95f0 {


u32 f_004e95f0() {
    *gptr<u8>(0x9529d4u + 1u) = u8(0u);  // (from the original)
    *gptr<u8>(0x9529d4u + 2u) = u8(0u);  // (from the original)
    *gptr<u8>(0x9529d4u + 3u) = u8(0u);  // (from the original)
    guest::cpu()->r[1] = 0u;
    return 0x9529d4u;  // (from the original)
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
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 zf_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 vf_1 = 0;
    u32 res_2 = 0;
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
    u32 cf_1 = 0;
    u32 cf_2 = 0;
    r13 = r13 - 0x20;  // (from the original)
    zf_1 = r0 == 0;
    r5_1 = r1;
    if (!zf_1) {
        zf_1 = r5_1 == 0;
    }
    r6_1 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    if (zf_1) {
        goto L_4e9730;
    }
    if (r6_1 == 0) {
        r1 = 0x40u;  // (from the original)
        arg0->word_0 = u32(r1);
        r0_1 = 0x50u;  // (from the original)
    } else {
        r0_1 = 0x10u;  // (from the original)
        arg0->word_0 = u32(r0_1);
    }
    arg1->word_0 = u32(r0_1);
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f74c8(r0_1, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_3 = call_002f74e0(8u, r0_2, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_3 != 0) {
        res_1 = r2 - 0x10u;  // (from the original)
        nf_1 = res_1 >> 0x1f;  // (from the original)
        vf_1 = ((r2 ^ 0x10u) & (r2 ^ res_1)) >> 0x1f;  // (from the original)
        if (nf_1 != vf_1) {
            res_2 = r3 - 0x10u;  // (from the original)
            nf_1 = res_2 >> 0x1f;  // (from the original)
            vf_1 = ((r3 ^ 0x10u) & (r3 ^ res_2)) >> 0x1f;  // (from the original)
        }
        if (nf_1 != vf_1) {
            goto L_4e96a0;
        }
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_002f74e0(0x200u, r0_2, r2_2, r3_2);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_4 != 0) {
        goto L_4e96a0;
    }
    guest::cpu()->r[13] = r13;
    r0_5 = call_002f74e0(0x10000000u, r0_2, r2_3, r3_3);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_5 == 0) {
        goto L_4e96ac;
    }
L_4e96a0:;
    *gptr<u32>(r0) = u32(r3);
    *gptr<u32>(r5_1) = u32(r2);
    goto L_4e96ec;
L_4e96ac:;
    guest::cpu()->r[13] = r13;
    r0_6 = call_002f74e0(0x20u, r0_2, r2_4, r3_4);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_6 == 0) {
        goto L_4e96ec;
    }
    guest::cpu()->r[13] = r13;
    r0_7 = call_00613718(r2, r3, r2_5, r3_5);
    r1 = guest::cpu()->r[1];
    if (r0_7 == 0) {
        goto L_4e96ec;
    }
    r1 = r2 - 0x10u;  // (from the original)
    *gptr<u32>(r0) = u32(r3 - 0x10u);  // (from the original)
    *gptr<u32>(r5_1) = u32(r1);
L_4e96ec:;
    if (r6_1 != 0) {
        if (r6_1 == 1u) {
            goto L_4e971c;
        }
        goto L_4e9730;
    }
    cf_1 = *gptr<u32>(r0) >= 0x40u;  // (from the original)
    if (!cf_1) {
        cf_1 = *gptr<u32>(r5_1) >= 0x50u;  // (from the original)
    }
    if (cf_1) {
        goto L_4e9730;
    }
L_4e9714:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 1u;
L_4e971c:;
    cf_2 = *gptr<u32>(r0) >= 0x10u;  // (from the original)
    if (!cf_2) {
        cf_2 = *gptr<u32>(r5_1) >= 0x10u;  // (from the original)
    }
    if (!cf_2) {
        guest::preempt();
        goto L_4e9714;
    }
L_4e9730:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0u;
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
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r0_6 = 0;
    u32 r4_1 = 0;
    u32 r1_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    r13 = r13 - 0x30u;  // (from the original)
    r7 = r0;
    r4 = r1;
    r6 = *gptr<u32>(r13 + 0x30u);  // (from the original)
    r8 = r2;
    r9 = r3;
    guest::cpu()->r[13] = r13;
    r0_1 = call_006a5e34(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f74c8(r0_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_3 = call_005b41e8(r0_2, r1_2, r2_2, r3_2);
    r1 = guest::cpu()->r[1];
    r3_3 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_4e986c;
    }
    if (r0_3 >= 2u) {
        goto L_4e986c;
    }
    if (r0_3 < r6) {
        goto L_4e986c;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_007529d8(r0_1, r8, r9, r3_3);
    r1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        goto L_4e986c;
    }
    r5 = 0x9c7a14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_002f74c8(r0_4, r1, r2_3, r3_4);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_6 = call_005b42fc(r0_5, r1_3, r2_4, r3_5);
    r1 = r0_6;
    if (r0_6 == 0) {
        goto L_4e986c;
    }
    r2 = r1 & 1u;
    r0 = 0u;
    if (r2 < 0u || r2 == 0) {
        goto L_4e97d0;
    }
    do {
L_4e97b8:;
        if (*gptr<u32>(r5 + (r0 << 2)) == r4) {
            goto L_4e97fc;
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (r2 > r0);
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
    *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
    r4_1 = sxtb(r0);
    *gptr<u32>(r13 + 4u) = u32(0u);
    r1_4 = r13 + 4u;
    r0_7 = r13 + 0xcu;  // (from the original)
    *gptr<u32>(r13) = u32(r6);
    guest::cpu()->r[13] = r13;
    r0_8 = call_004e960c(r0_7, r1_4, r8, r9);
    r1 = guest::cpu()->r[1];
    if (r0_8 == 0) {
        goto L_4e986c;
    }
    r0_9 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    if (r6 == 1u) {
        goto L_4e9878;
    }
    r1 = *gptr<u32>(r13 + 4u);
    *gptr<u8>(r7 + (r0_9 + (r0_9 << 2) << 4) + r1) = u8(r4_1);
L_4e9854:;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 1u;
L_4e9860:;
    r0 = r0 + 2u;
    if (r1 > r0) {
        guest::preempt();
        goto L_4e97dc;
    }
L_4e986c:;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0u;
L_4e9878:;
    r1 = *gptr<u32>(r13 + 4u);
    *gptr<u8>(r7 + (r0_9 << 4) + r1 + 0x1400u) = u8(r4_1);  // (from the original)
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
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    r13 = r13 - 0x30u;  // (from the original)
    r7 = r0;
    r4 = r1;
    r6 = *gptr<u32>(r13 + 0x30u);  // (from the original)
    r8 = r2;
    r9 = r3;
    guest::cpu()->r[13] = r13;
    r0_1 = call_006a5e34(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f74c8(r0_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_3 = call_005b41e8(r0_2, r1_2, r2_2, r3_2);
    r1 = guest::cpu()->r[1];
    r3_3 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_4e99c8;
    }
    if (r0_3 >= 2u) {
        goto L_4e99c8;
    }
    if (r0_3 < r6) {
        goto L_4e99c8;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_007529d8(r0_1, r8, r9, r3_3);
    r1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        goto L_4e99c8;
    }
    r5 = 0x9c7a14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_002f74c8(r0_4, r1, r2_3, r3_4);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_6 = call_005b42fc(r0_5, r1_3, r2_4, r3_5);
    r1 = r0_6;
    r10 = ~0u;
    if (r0_6 == 0) {
        goto L_4e99c8;
    }
    r2 = r1 & 1u;
    r0 = 0u;
    if (r2 < 0u || r2 == 0) {
        goto L_4e9930;
    }
    do {
L_4e9918:;
        if (*gptr<u32>(r5 + (r0 << 2)) == r4) {
            goto L_4e995c;
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (r2 > r0);
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
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u32>(r13 + 8u) = u32(0u);
    r1_4 = r13 + 8u;
    r0_7 = r13 + 4u;
    *gptr<u32>(r13) = u32(r6);
    guest::cpu()->r[13] = r13;
    r0_8 = call_004e960c(r0_7, r1_4, r8, r9);
    r1 = guest::cpu()->r[1];
    if (r0_8 == 0) {
        goto L_4e99c8;
    }
    r0_9 = *gptr<u32>(r13 + 4u);
    if (r6 == 1u) {
        goto L_4e99d4;
    }
    r1 = *gptr<u32>(r13 + 8u);
    *gptr<u8>(r7 + (r0_9 + (r0_9 << 2) << 4) + r1) = u8(r10);
L_4e99b0:;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 1u;
L_4e99bc:;
    r0 = r0 + 2u;
    if (r1 > r0) {
        guest::preempt();
        goto L_4e993c;
    }
L_4e99c8:;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0u;
L_4e99d4:;
    r1 = *gptr<u32>(r13 + 8u);
    *gptr<u8>(r7 + (r0_9 << 4) + r1 + 0x1400u) = u8(r10);  // (from the original)
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
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r1_1 = r13 + 4u;
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_003171b4(r0_1, r1_1, r1, r3);
    r1_2 = *gptr<u32>(r13);
    r2_1 = *gptr<u32>(r13 + 4);
    guest::cpu()->r[13] = r13;
    r0_2 = call_004e9a28(r0, r1_2, r2_1, r2);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_2;
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
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_007457e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_2 = call_002f74c8(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_3 = call_002f74e0(8u, r0_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_1 + 1u == 0) {
        goto L_4e9a6c;
    }
    r0_4 = call_002f74c8(r0_3, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r0_5 = call_005b42fc(r0_4, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_5 > 0x30u) {  // (from the original)
        goto L_4e9a6c;
    }
    if (r0_1 < r0_5) {
        r0_6 = *gptr<u32>(0x9c7a14u + (r0_1 << 2));  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return r0_6;
    }
L_4e9a6c:;
    r0_6 = 0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0_6;
}

}  // namespace d_004e9a28
GUEST_EXPORT(0x004e9a28, d_004e9a28::f_004e9a28);

// f_004e9dc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e9dc8 {

inline guest::global<u32, 0x004e9eec> global_004e9eec;  // (from the original)
inline guest::global<u32, 0x0094f310> global_0094f310;  // (from the original)
inline guest::global<u8, 0x0094f340> global_0094f340;  // (from the original)
inline constexpr guest::Function<0x0018a390, u32(u32, u32, u32, u32)> call_0018a390;  // (from the original)
inline constexpr guest::Function<0x00582464, u32(u32, u32, u32, u32)> call_00582464;  // (from the original)
inline constexpr guest::Function<0x00691538, u32(u32, u32, u32, u32)> call_00691538;  // (from the original)
inline constexpr guest::Function<0x00693570, u32(u32, u32, u32, u32)> call_00693570;  // (from the original)
inline constexpr guest::Function<0x00693778, u32(u32, u32, u32, u32)> call_00693778;  // (from the original)
inline constexpr guest::Function<0x0077957c, u32(u32, u32, u32, u32)> call_0077957c;  // (from the original)

u32 f_004e9dc8() {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r14 = guest::cpu()->r[14];
    float S0 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 cf_1 = 0;
    u32 r7_1 = 0;
    u32 res_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_2 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    float S0_3 = 0;
    u32 r0_5 = 0;
    u32 r1_5 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    float S0_4 = 0;
    u32 r0_6 = 0;
    u32 r1_6 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    float S0_5 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = 0u;
    r1 = r4;
    r5 = 0x9529d4u;  // (from the original)
    r2 = 0x9c79d4u;  // (from the original)
    S0 = std::bit_cast<float>(*global_004e9eec);
    r3 = 0xa5u;  // (from the original)
    *gptr<u8>(r5) = u8(r4);
    do {
L_4e9de8:;
        r0_1 = r2 + (r1 << 4);
        r1 = r1 + 1u;
        *gptr<u8>(r0_1) = u8(r4);
        *gptr<u8>(r0_1 + 1u) = u8(r3);
        *gptr<u32>(r0_1 + 4u) = u32(std::bit_cast<u32>(S0));
        *gptr<u32>(r0_1 + 8u) = u32(std::bit_cast<u32>(S0));
        *gptr<u32>(r0_1 + 0xcu) = u32(std::bit_cast<u32>(S0));  // (from the original)
        guest::preempt();
    } while (r1 < 4u);
    r2 = 0x9c7a14u;  // (from the original)
    r1 = 0u;
    r0 = r1;
    do {
L_4e9e18:;
        r0 = r0 + 2u;
        *gptr<u32>(r2 + (r1 << 2)) = u32(r4);
        r1_1 = r1 + 1u;
        *gptr<u32>(r2 + (r1_1 << 2)) = u32(r4);
        r1 = r1_1 + 1u;
        guest::preempt();
    } while (r0 < 0x30u);  // (from the original)
    r14 = 0x9c7ad4u;  // (from the original)
    r0 = 0u;
    r2 = ~0u;
L_4e9e40:;
    r1 = 0u;
    r3 = 0x50u;  // (from the original)
    r12 = r14 + (r0 + (r0 << 2) << 4);
    r6 = r14 + (r0 << 4);
    do {
L_4e9e54:;
        cf_1 = r1 >= 0x10u;  // (from the original)
        if (!cf_1) {
            cf_1 = r0 >= 0x10u;  // (from the original)
        }
        *gptr<u8>(r12 + r1) = u8(r2);
        if (!cf_1) {
            r7_1 = r6 + r1 + 0x1400u;  // (from the original)
            *gptr<u8>(r7_1) = u8(r2);
        }
        res_1 = r3 - 1u;
        r3 = res_1;
        r1 = r1 + 1u;
        guest::preempt();
    } while (res_1 != 0);
    r0 = r0 + 1u;
    if (r0 < 0x40u) {  // (from the original)
        guest::preempt();
        goto L_4e9e40;
    }
    *gptr<u8>(r5 + 1u) = u8(r4);
    *gptr<u8>(r5 + 2u) = u8(r4);
    *gptr<u8>(r5 + 3u) = u8(r4);
    *global_0094f310 = u32(r4);
    *global_0094f340 = u8(r4);
    guest::cpu()->s[0] = S0;
    r0_2 = call_00693570(0x94f340u, r1, r2, r3);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    guest::cpu()->s[0] = S0_1;
    r0_3 = call_00693778(r0_2, r1_2, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    guest::cpu()->s[0] = S0_2;
    r0_4 = call_00691538(r0_3, r1_3, r2_2, r3_2);
    r1_4 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    guest::cpu()->s[0] = S0_3;
    r0_5 = call_0077957c(r0_4, r1_4, r2_3, r3_3);
    r1_5 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    S0_4 = guest::cpu()->s[0];
    guest::cpu()->s[0] = S0_4;
    r0_6 = call_0018a390(r0_5, r1_5, r2_4, r3_4);
    r1_6 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    S0_5 = guest::cpu()->s[0];
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->s[0] = S0_5;
    return call_00582464(r0_6, r1_6, r2_5, r3_5);
}

}  // namespace d_004e9dc8
GUEST_EXPORT(0x004e9dc8, d_004e9dc8::f_004e9dc8);

// f_004e9f74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e9f74 {

inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> call_004e9a28;  // (from the original)
inline constexpr guest::Function<0x006c602c, u32(u32, u32, u32, u32)> call_006c602c;  // (from the original)
inline constexpr guest::Function<0x00750894, u32(u32, u32, u32, u32)> call_00750894;  // (from the original)
inline constexpr guest::Function<0x00751d00, u32(u32, u32, u32, u32)> call_00751d00;  // (from the original)

u32 f_004e9f74(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3, float S0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    float S0_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_3 = 0;
    float S0_4 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_2 = 0;
    u32 r6_2 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    float S0_5 = 0;
    u32 ea_3 = 0;
    u32 r4_2 = 0;
    u32 r5_3 = 0;
    u32 r6_3 = 0;
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x18u;  // (from the original)
    r1_1 = r13 + 4u;
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    call_003171b4(r0_1, r1_1, r0, r3);
    S0_1 = guest::cpu()->s[0];
    r5_1 = *gptr<u32>(r13 + 4u);
    r6_1 = *gptr<u32>(r13);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    r0_2 = call_004e9a28(0x9c7ad4u, r6_1, r5_1, 0u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    if (r0_2 != 0) {
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_2;
        r0_3 = call_00750894(r0_2, r1_2, r2_1, r3_1);
        r1_3 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        S0_3 = guest::cpu()->s[0];
        if (r0_3 == 0) {
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_3;
            r0_3 = call_00751d00(r0_2, r1_3, r2_2, r3_2);
            r1_3 = guest::cpu()->r[1];
            S0_4 = guest::cpu()->s[0];
        } else {
            S0_4 = std::bit_cast<float>(*gptr<u32>(r0_2 + 0x18u));  // (from the original)
        }
        r13 = r13 + 8u;
        ea_2 = r13;
        r13 = r13 + 0x10;  // (from the original)
        r4_1 = *gptr<u32>(ea_2);
        r5_2 = *gptr<u32>(ea_2 + 4);
        r6_2 = *gptr<u32>(ea_2 + 8);
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_2;
        guest::cpu()->r[6] = r6_2;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_4;
        return r0_3;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    r0_4 = call_006c602c(r6_1, r5_1, 0u, r3_1);
    r1_4 = guest::cpu()->r[1];
    S0_5 = guest::cpu()->s[0];
    r13 = r13 + 8u;
    ea_3 = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4_2 = *gptr<u32>(ea_3);
    r5_3 = *gptr<u32>(ea_3 + 4);
    r6_3 = *gptr<u32>(ea_3 + 8);
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_3;
    guest::cpu()->r[6] = r6_3;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    return r0_4;
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
    float S0_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0_1 = call_004e9a28(0x9c7ad4u, r0, r1, 0u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    if (r0_1 != 0) {
        guest::cpu()->s[0] = S0_1;
        r0_2 = call_00750894(r0_1, r1_1, r2_1, r3_1);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        S0_2 = guest::cpu()->s[0];
        if (r0_2 != 0) {
            S0_3 = std::bit_cast<float>(*gptr<u32>(r0_1 + 0x18u));  // (from the original)
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1_2;
            guest::cpu()->s[0] = S0_3;
            return r0_2;
        }
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->s[0] = S0_2;
        return call_00751d00(r0_1, r1_2, r2_2, r3_2);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    return call_006c602c(r0, r1, 0u, r3_1);
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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_6 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r1_7 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r1_8 = 0;
    r13 = r13 - 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_005361a8(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        goto L_4ea088;
    }
    r0_2 = u32(*gptr<u8>(r0_1 + 0x11u));  // (from the original)
    if (r0_2 >= 0x56u) {  // (from the original)
        goto L_4ea088;
    }
    if (r0_2 == 0x22u) {  // (from the original)
        goto L_4ea110;
    }
L_4ea088:;
    guest::cpu()->r[13] = r13;
    r0_3 = call_00536060(r1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_3;
    }
    r0_4 = r13;
    guest::cpu()->r[13] = r13;
    r0_5 = call_0054a644(r0_4, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] = r13;
    r0_6 = call_00544fec(r0_5, 0x865698u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_7 = call_00544fec(r0_6, r0_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    call_00544f18(r0_7, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    r0_8 = call_0076c648(r1, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    if (r0_8 == 0) {
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1_5;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    guest::cpu()->r[13] = r13;
    r0_9 = call_0076b5dc(r1, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    if (r0_9 == 2u) {
        goto L_4ea14c;
    }
    if (r0_9 == 4u) {
        goto L_4ea194;
    }
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return 1u;
L_4ea110:;
    r0_10 = r13;
    guest::cpu()->r[13] = r13;
    r0_11 = call_0054a644(r0_10, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] = r13;
    r0_12 = call_00544fec(r0_11, 0x865670u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_6 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    call_00544f18(r0_12, r1_6, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_3 = 1u;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_3;
L_4ea14c:;
    r0_13 = r13;
    guest::cpu()->r[13] = r13;
    r0_14 = call_0054a644(r0_13, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] = r13;
    r0_15 = call_00544fec(r0_14, 0x8656acu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_16 = call_00544fec(r0_15, r0_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_7 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    call_00544f18(r0_16, r1_7, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return 1u;
L_4ea194:;
    r0_17 = r13;
    guest::cpu()->r[13] = r13;
    r0_18 = call_0054a644(r0_17, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] = r13;
    r0_19 = call_00544fec(r0_18, 0x8656c4u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_20 = call_00544fec(r0_19, r0_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_8 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    call_00544f18(r0_20, r1_8, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_004ea054
GUEST_EXPORT(0x004ea054, d_004ea054::f_004ea054);

// f_004ea4a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ea4a0 {

inline guest::global<u32, 0x009c90c0> global_009c90c0;  // (from the original)
inline constexpr guest::Function<0x00264668, u32(u32, u32, u32, u32)> call_00264668;  // (from the original)
inline constexpr guest::Function<0x00264698, u32(u32, u32, u32, u32)> call_00264698;  // (from the original)
inline constexpr guest::Function<0x004ec574, u32(u32, u32, u32, u32)> call_004ec574;  // (from the original)

u32 f_004ea4a0(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    r0_1 = 0x950440u;  // (from the original)
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4_1 = *gptr<u32>(r0_1);
    if (r4_1 != 0) {
        r1_1 = *gptr<u32>(0x952a20u + 0x18u);  // (from the original)
        call_00264698(r4_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = *gptr<u32>(*gptr<u32>(0x952a20u + 0x18u) + 0xa4u);  // (from the original)
        *gptr<u32>(0x952a20u + 0x2cu) = u32(r1_2);  // (from the original)
        r0_2 = *global_009c90c0;
        call_004ec574(r0_2, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_3 = *gptr<u32>(0x952a20u + 0x18u);  // (from the original)
        call_00264668(r4_1, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0_1 = 0u;
        *gptr<u32>(0x952a20u + 0x2cu) = u32(r0_1);  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_004ea4a0
GUEST_EXPORT(0x004ea4a0, d_004ea4a0::f_004ea4a0);

// f_004eabd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eabd0 {

inline guest::global<u32, 0x00952a38> global_00952a38;  // (from the original)

u32 f_004eabd0() {
    u32 r0_1 = 0;
    r0_1 = *global_00952a38;
    *gptr<u8>(r0_1 + 0xecu) = u8(1u);  // (from the original)
    guest::cpu()->r[1] = 1u;
    return r0_1;
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
    u32 r0 = arg0.addr();
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    r3_1 = *gptr<u32>(0x952a20u + 0x2cu);  // (from the original)
    if (r3_1 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1_1 = arg0->word_220;
    ea_1 = 0x952a20u + 0xcu;  // (from the original)
    r0_1 = *gptr<u32>(ea_1);
    r2_1 = *gptr<u32>(ea_1 + 4);
    return call_00737f20(r0_1, r1_1, r2_1, r3_1);
}

}  // namespace d_004eabe8
GUEST_EXPORT(0x004eabe8, d_004eabe8::f_004eabe8);

// f_004ead50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ead50 {

inline guest::global<u8, 0x00952a20> global_00952a20;  // (from the original)
inline constexpr guest::Function<0x004efb0c, u32(u32, u32, u32, u32)> call_004efb0c;  // (from the original)
inline constexpr guest::Function<0x005ce368, u32(u32, u32, u32, u32)> call_005ce368;  // (from the original)

u32 f_004ead50(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = u32(*global_00952a20);
    if (r0_1 != 1u) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r0_1 = call_005ce368(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    call_004efb0c(r0, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0u;
    r0_1 = *gptr<u32>(*gptr<u32>(0x952a20u + 0x18u) + 0xc0u);  // (from the original)
    *gptr<u32>(r0_1) = u32(r1);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
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
    u32 r0_1 = 0;
    r0_1 = r0 + 0x10u;  // (from the original)
    arg0->word_10 = u32(r1);
    arg0->word_14 = u32(r2);
    arg0->word_18 = u32(r3);
    return r0_1;
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
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 ea_1 = 0;
    u32 r6_1 = 0;
    r1_1 = r0;
    r13 = r13 - 0xc;  // (from the original)
    r0 = 0u;
    r3 = arg0->word_8;
    r2 = r0;
    r4 = *gptr<u32>(r3 + 0x64u);  // (from the original)
    if (r4 < 0u || r4 == 0) {
        r13 = r13 + 0xc;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r12 = *gptr<u32>(r3 + 0x68u);  // (from the original)
    r5 = 0u;
    do {
L_4eae9c:;
        r1_2 = r3 + 0x68u;  // (from the original)
        if (r12 == 0) {
            r1_3 = r5;
        } else {
            r1_3 = r1_2 + r12;
        }
        if (!(r1_3 == 0)) {
            ea_1 = r1_3 + (r2 << 4) + 0x28u;  // (from the original)
            r6_1 = *gptr<u32>(ea_1);
            if (r6_1 == 0) {
                r1_3 = r5;
            } else {
                r1_3 = ea_1 + r6_1;
            }
        }
        r2 = r2 + 1u;
        r1_1 = *gptr<u32>(r1_3 + 0x18u);  // (from the original)
        if (r1_1 > r0) {
            r0 = r1_1;
        }
        guest::preempt();
    } while (r4 > r2);
    r13 = r13 + 0xc;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_004eae74
GUEST_EXPORT(0x004eae74, d_004eae74::f_004eae74);

// f_004eb148: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eb148 {

inline constexpr guest::Function<0x0049a0f0, u32(u32, u32, u32, u32)> call_0049a0f0;  // (from the original)
inline constexpr guest::Function<0x004edd88, u32(u32, u32, u32, u32)> call_004edd88;  // (from the original)
inline constexpr guest::Function<0x004eedbc, u32(u32, u32, u32, u32)> call_004eedbc;  // (from the original)

u32 f_004eb148() {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r1_1 = 0;
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
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 res_1 = 0;
    u32 r1_2 = 0;
    u32 r0_17 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = 0u;
    r5 = 0x9c90b8u;  // (from the original)
    r6 = r5 + 0xcu;  // (from the original)
    do {
L_4eb158:;
        r1_1 = *gptr<u32>(r5 + (r4 << 2));
        r0_1 = *gptr<u32>(r6 + (r4 << 2));
        call_0049a0f0(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r0_2 = *gptr<u32>(r5 + (r4 << 2));
        *gptr<u32>(r0_2 + 0x10u) = u32(*gptr<u32>(r0_2 + 0xcu));  // (from the original)
        r0_3 = *gptr<u32>(r5 + (r4 << 2));
        *gptr<u32>(r0_3 + 0x20u) = u32(*gptr<u32>(r0_3 + 0x1cu));  // (from the original)
        r0_4 = *gptr<u32>(r5 + (r4 << 2));
        *gptr<u32>(r0_4 + 0x30u) = u32(*gptr<u32>(r0_4 + 0x2cu));  // (from the original)
        r0_5 = *gptr<u32>(r5 + (r4 << 2));
        *gptr<u32>(r0_5 + 0x40u) = u32(*gptr<u32>(r0_5 + 0x3cu));  // (from the original)
        r0_6 = *gptr<u32>(r5 + (r4 << 2));
        *gptr<u32>(r0_6 + 0x70u) = u32(*gptr<u32>(r0_6 + 0x6cu));  // (from the original)
        r0_7 = *gptr<u32>(r5 + (r4 << 2));
        *gptr<u32>(r0_7 + 0x80u) = u32(*gptr<u32>(r0_7 + 0x7cu));  // (from the original)
        r0_8 = *gptr<u32>(r5 + (r4 << 2));
        *gptr<u32>(r0_8 + 0x90u) = u32(*gptr<u32>(r0_8 + 0x8cu));  // (from the original)
        r0_9 = *gptr<u32>(r5 + (r4 << 2));
        *gptr<u32>(r0_9 + 0xa0u) = u32(*gptr<u32>(r0_9 + 0x9cu));  // (from the original)
        r0_10 = *gptr<u32>(r5 + (r4 << 2));
        *gptr<u32>(r0_10 + 0xb0u) = u32(*gptr<u32>(r0_10 + 0xacu));  // (from the original)
        r0_11 = *gptr<u32>(r5 + (r4 << 2));
        *gptr<u32>(r0_11 + 0x50u) = u32(*gptr<u32>(r0_11 + 0x4cu));  // (from the original)
        r0_12 = *gptr<u32>(r5 + (r4 << 2));
        *gptr<u32>(r0_12 + 0x60u) = u32(*gptr<u32>(r0_12 + 0x5cu));  // (from the original)
        r0_13 = *gptr<u32>(r5 + (r4 << 2));
        *gptr<u32>(r0_13 + 0xc0u) = u32(*gptr<u32>(r0_13 + 0xbcu));  // (from the original)
        r0_14 = *gptr<u32>(r5 + (r4 << 2));
        *gptr<u32>(r0_14 + 0xd0u) = u32(*gptr<u32>(r0_14 + 0xccu));  // (from the original)
        r0_15 = *gptr<u32>(r5 + (r4 << 2));
        *gptr<u32>(r0_15 + 0xe0u) = u32(*gptr<u32>(r0_15 + 0xdcu));  // (from the original)
        r0_16 = *gptr<u32>(r5 + (r4 << 2));
        r4 = r4 + 1u;
        res_1 = r4 - 3u;
        r1_2 = *gptr<u32>(r0_16 + 0xecu);  // (from the original)
        *gptr<u32>(r0_16 + 0xf0u) = u32(r1_2);  // (from the original)
        guest::preempt();
    } while (res_1 >> 0x1f != ((r4 ^ 3u) & (r4 ^ res_1)) >> 0x1f);  // (from the original)
    r0_17 = call_004eedbc(r0_16, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r5 = r0_17 + 0x80u;  // (from the original)
    r4 = r0_17;
    if (r0_17 >= r5) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_17;
    }
    do {
L_4eb238:;
        r0_17 = call_004edd88(r4, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r4 = r4 + 0x40u;  // (from the original)
        guest::preempt();
    } while (r4 < r5);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_17;
}

}  // namespace d_004eb148
GUEST_EXPORT(0x004eb148, d_004eb148::f_004eb148);

// f_004eb254: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eb254 {


u32 f_004eb254(u32 r0) {
    u32 r0_1 = 0;
    r0_1 = 0x9c9198u + (r0 + (r0 << 5) << 3);  // (from the original)
    guest::cpu()->r[1] = 0x9c9198u;  // (from the original)
    return r0_1;
}

}  // namespace d_004eb254
GUEST_EXPORT(0x004eb254, d_004eb254::f_004eb254);

// f_004eb3a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eb3a0 {

inline constexpr guest::Function<0x002b5fc4, u32(u32, u32, u32, u32)> call_002b5fc4;  // (from the original)
inline constexpr guest::Function<0x004eb858, u32(u32, u32, u32, u32)> call_004eb858;  // (from the original)
inline constexpr guest::Function<0x0071cc4c, u32(u32, u32, u32, u32)> call_0071cc4c;  // (from the original)

u32 f_004eb3a0(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r4_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r2_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_002b5fc4(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    r0_2 = call_002b5fc4(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    r4_1 = r0 + 4u;
    r1_2 = *gptr<u32>(r4_1);
    r2_2 = *gptr<u32>(r4_1 + 4);
    r0_1 = call_0071cc4c(r0_2, r1_2, r2_2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_004eb858(r0_1, r1, r2_3, guest::cpu()->r[3]);
}

}  // namespace d_004eb3a0
GUEST_EXPORT(0x004eb3a0, d_004eb3a0::f_004eb3a0);

// f_004eb3e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eb3e0 {

inline constexpr guest::Function<0x002b5fc4, u32(u32, u32, u32, u32)> call_002b5fc4;  // (from the original)
inline constexpr guest::Function<0x004eb9d4, u32(u32, u32, u32, u32)> call_004eb9d4;  // (from the original)
inline constexpr guest::Function<0x0071cc4c, u32(u32, u32, u32, u32)> call_0071cc4c;  // (from the original)

u32 f_004eb3e0(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 ea_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r0_5 = 0;
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002b5fc4(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_1 == 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_002b5fc4(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    ea_1 = r0 + 4u;
    r1_2 = *gptr<u32>(ea_1);
    r2_2 = *gptr<u32>(ea_1 + 4);
    guest::cpu()->r[13] = r13;
    r0_3 = call_0071cc4c(r0_2, r1_2, r2_2, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    if (r0_3 == 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_004eb9d4(r0_3, 0xau, r2_3, guest::cpu()->r[3]);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    if (r0_4 == 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->r[13] = r13;
        return r0_4;
    }
    r0_5 = ~0u;
    *gptr<u32>(r0 + 4u) = u32(r0_5);
    *gptr<u32>(r0 + 8u) = u32(r0_5);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_004eb3e0
GUEST_EXPORT(0x004eb3e0, d_004eb3e0::f_004eb3e0);

// f_004eb438: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eb438 {

inline constexpr guest::Function<0x002b5fc4, u32(u32, u32, u32, u32)> call_002b5fc4;  // (from the original)
inline constexpr guest::Function<0x004ee4c0, u32(u32, u32, u32, u32)> call_004ee4c0;  // (from the original)
inline constexpr guest::Function<0x0071cc4c, u32(u32, u32, u32, u32)> call_0071cc4c;  // (from the original)

u32 f_004eb438(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r4_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r2_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_002b5fc4(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    r0_2 = call_002b5fc4(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    r4_1 = r0 + 4u;
    r1_2 = *gptr<u32>(r4_1);
    r2_2 = *gptr<u32>(r4_1 + 4);
    r0_1 = call_0071cc4c(r0_2, r1_2, r2_2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_004ee4c0(r0_1, r1, r2_3, guest::cpu()->r[3]);
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
    u32 r1_1 = 0;
    r1_1 = ~0u;
    arg0->word_4 = u32(r1_1);
    arg0->word_0 = u32(0x9028acu);  // (from the original)
    arg0->word_8 = u32(r1_1);
    guest::cpu()->r[1] = r1_1;
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
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 ea_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r0_5 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r0_6 = 0;
    u32 ea_2 = 0;
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    u32 r0_7 = 0;
    u32 r1_7 = 0;
    u32 r2_7 = 0;
    u32 r0_8 = 0;
    u32 r1_8 = 0;
    u32 r0_9 = 0;
    r13 = r13 - 8;
    arg0->word_0 = u32(0x9028acu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002b5fc4(0x9028acu, r1, r2, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_1 == 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_002b5fc4(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    ea_1 = r0 + 4u;
    r1_2 = *gptr<u32>(ea_1);
    r2_2 = *gptr<u32>(ea_1 + 4);
    guest::cpu()->r[13] = r13;
    r0_3 = call_0071cc4c(r0_2, r1_2, r2_2, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    if (r0_3 == 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_0074599c(r0_3, r1_3, r2_3, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    if (r0_4 == 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0_5 = call_002b5fc4(r0_4, r1_4, r2_4, guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    if (r0_5 == 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_5;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0_6 = call_002b5fc4(r0_5, r1_5, r2_5, guest::cpu()->r[3]);
    ea_2 = r0 + 4u;
    r1_6 = *gptr<u32>(ea_2);
    r2_6 = *gptr<u32>(ea_2 + 4);
    guest::cpu()->r[13] = r13;
    r0_7 = call_0071cc4c(r0_6, r1_6, r2_6, guest::cpu()->r[3]);
    r1_7 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    if (r0_7 == 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_7;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0_8 = call_004eb9d4(r0_7, 0xau, r2_7, guest::cpu()->r[3]);  // (from the original)
    r1_8 = guest::cpu()->r[1];
    if (r0_8 == 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_8;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0_9 = ~0u;
    *gptr<u32>(r0 + 4u) = u32(r0_9);
    *gptr<u32>(r0 + 8u) = u32(r0_9);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_8;
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
    if (u32(arg0->byte_2c) != 0) {
        return 0u;
    }
    *gptr<u32>(r0 + 0x34u) = u32(r1);  // (from the original)
    *gptr<u8>(r0 + 0x2cu) = u8(1u);  // (from the original)
    *gptr<u32>(r0 + 0x30u) = u32(r1);  // (from the original)
    return 1u;
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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    arg0->byte_2d = u8(r1);
    guest::cpu()->r[13] = r13;
    r0_1 = call_004eb254(r1, r1, r2, r3);
    *gptr<u32>(r13) = u32(r3);
    guest::cpu()->r[13] = r13;
    r0_2 = call_004ebbec(r0, r0_1, 0u, r2);
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
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

inline guest::global<u32, 0x00952ad4> global_00952ad4;  // (from the original)
inline constexpr guest::Function<0x005673c8, u32(u32, u32, u32, u32)> call_005673c8;  // (from the original)

u32 f_004ec374(gptr<Object_004ec374_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    r13 = r13 - 8;
    r3_1 = r0 + 4u;
    arg0->word_0 = u32(0x9028bcu);  // (from the original)
    arg0->word_4 = u32(r1);
    arg0->word_8 = u32(0u);
    arg0->word_c = u32(0u);
    ea_1 = r0 + 0x20u;  // (from the original)
    arg0->word_20 = u32(0u);
    r0_1 = ea_1 + 4u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_005673c8(r0_1, r1, 0x9028bcu, r3_1);  // (from the original)
    r0_3 = r0_2 - 0x24u;  // (from the original)
    *gptr<u8>(r0_3 + 0x2cu) = u8(0u);  // (from the original)
    *gptr<u8>(r0_3 + 0x2du) = u8(0xdu);  // (from the original)
    *gptr<u32>(r0_3 + 0x30u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_3 + 0x34u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_3 + 0x10u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_3 + 0x14u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_3 + 0x18u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_3 + 0x1cu) = u32(0u);  // (from the original)
    *global_00952ad4 = u32(*global_00952ad4 + 1u);
    r13 = r13 + 8;
    guest::cpu()->r[1] = 0x952ad4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return r0_3;
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
    u32 r4_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r4_1 = r0 + 0xcu;  // (from the original)
    S0_1 = std::bit_cast<float>(arg1->word_0);
    S1_1 = std::bit_cast<float>(arg1->word_4);
    S2_1 = std::bit_cast<float>(arg1->word_8);
    S3_1 = std::bit_cast<float>(arg1->word_c);
    r0_1 = arg0->word_c + 0xb8u;  // (from the original)
    *gptr<u32>(r0_1) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r0_1 + 4) = u32(std::bit_cast<u32>(S1_1));
    *gptr<u32>(r0_1 + 8) = u32(std::bit_cast<u32>(S2_1));
    *gptr<u32>(r0_1 + 0xc) = u32(std::bit_cast<u32>(S3_1));  // (from the original)
    r0_2 = arg0->word_c + 0xb8u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    r0_3 = call_00736914(r0_2, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    r1_1 = *gptr<u32>(r4_1);
    *gptr<u32>(r1_1 + 0xc8u) = u32(r0_3);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return 1u;
}

}  // namespace d_004ec7ec
GUEST_EXPORT(0x004ec7ec, d_004ec7ec::f_004ec7ec);

// f_004ec820: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ec820 {

inline guest::global<u32, 0x004ec8b4> global_004ec8b4;  // (from the original)
inline guest::global<u32, 0x004ec8b8> global_004ec8b8;  // (from the original)
inline constexpr guest::Function<0x0048d4d4, u32(u32, u32, u32, u32)> call_0048d4d4;  // (from the original)
inline constexpr guest::Function<0x004f000c, u32(u32, u32, u32, u32)> call_004f000c;  // (from the original)
inline constexpr guest::Function<0x00736914, u32(u32, u32, u32, u32)> call_00736914;  // (from the original)

u32 f_004ec820(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    if (r1 == 0) {
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0_1 = call_004f000c(r0, r1, r2, r3);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r1 = r0_1;
    }
    r3_1 = r13 + 8u;
    *gptr<u8>(r13) = u8(1u);
    *gptr<u8>(r13 + 1u) = u8(1u);
    *gptr<u32>(r3_1) = u32(0u);
    *gptr<u32>(r3_1 + 4) = u32(1u);
    r0_2 = r13;
    *gptr<u32>(r13 + 4u) = u32(0u);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_3 = call_0048d4d4(r0_2, r1, 0u, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u32>(r0 + 0x10u) = u32(r0_3);  // (from the original)
    *gptr<u32>(r0 + 4u) = u32(r0_3);
    r0_4 = *gptr<u32>(r0_3 + 8u);
    S0_1 = std::bit_cast<float>(*global_004ec8b4);
    S1_1 = std::bit_cast<float>(*global_004ec8b8);
    *gptr<u32>(r0 + 0xcu) = u32(r0_4);  // (from the original)
    *gptr<u8>(r0_4 + 0xb4u) = u8(1u);  // (from the original)
    r0_5 = *gptr<u32>(r0 + 0xcu) + 0xb8u;  // (from the original)
    *gptr<u32>(r0_5) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r0_5 + 4u) = u32(std::bit_cast<u32>(S0_1));
    r0_6 = r0_5 + 8u;
    *gptr<u32>(r0_6) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r0_6 + 4) = u32(std::bit_cast<u32>(S1_1));
    r0_7 = *gptr<u32>(r0 + 0xcu) + 0xb8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    r0_8 = call_00736914(r0_7, r1_1, r2_1, r3_2);
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    r1_2 = *gptr<u32>(r0 + 0xcu);  // (from the original)
    *gptr<u32>(r1_2 + 0xc8u) = u32(r0_8);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return 1u;
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
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0x902b5cu);  // (from the original)
    r0_1 = r0 + 0xcu;  // (from the original)
    r0_2 = call_00317dec(r0_1, 0x902b5cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_3 = r0_2 - 0xcu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_3;
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
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    float S0_1 = 0;
    u32 r1_2 = 0;
    float S0_2 = 0;
    float S1_1 = 0;
    r13 = r13 - 8;
    *gptr<u32>(arg0->word_114 + 0x124u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    ea_1 = r0 + 0x114u;  // (from the original)
    r1_1 = arg0->word_114;
    S0_1 = std::bit_cast<float>(*gptr<u32>(r1_1 + 0x120u));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S0;
    call_004a7064(ea_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    S0_2 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    return 1u;
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
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    float S1_1 = 0;
    u32 r1_2 = 0;
    float S0_1 = 0;
    float S1_2 = 0;
    r13 = r13 - 8;
    *gptr<u32>(arg0->word_114 + 0x120u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    ea_1 = r0 + 0x114u;  // (from the original)
    r1_1 = arg0->word_114;
    S1_1 = std::bit_cast<float>(*gptr<u32>(r1_1 + 0x124u));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1_1;
    call_004a7064(ea_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    S0_1 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[1] = S1_2;
    return 1u;
}

}  // namespace d_004ed18c
GUEST_EXPORT(0x004ed18c, d_004ed18c::f_004ed18c);

// f_004ed3dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ed3dc {

inline constexpr guest::Function<0x002f73b8, u32(u32, u32, u32, u32)> call_002f73b8;  // (from the original)
inline constexpr guest::Function<0x004ee39c, u32(u32, u32, u32, u32)> call_004ee39c;  // (from the original)

u32 f_004ed3dc(u32 r0) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0xcu;  // (from the original)
    call_002f73b8(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
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
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0x902938u);  // (from the original)
    r0_1 = r0 + 0xcu;  // (from the original)
    r0_2 = call_00317e2c(r0_1, 0x902938u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    r0_3 = r0_2 - 0xcu;  // (from the original)
    return call_004ee514(r0_3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
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
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r2_1 = 0;
    u32 ea_2 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r12_1 = 0;
    u32 r3_2 = 0;
    u32 r2_3 = 0;
    u32 r2_4 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r14 = 0u;
    r0 = arg1->word_170;
    if (r0 == arg1->word_174) {
        ea_1 = arg1->word_8 + 0xb8u;  // (from the original)
        r2_1 = *gptr<u32>(ea_1);
        if (r2_1 == 0) {
            r0 = r14;
        } else {
            r0 = ea_1 + r2_1;
        }
    }
    ea_2 = r1 + 0x170u;  // (from the original)
    r3 = *gptr<u32>(ea_2 + 4);
    if (*gptr<u32>(ea_2) == r3) {
        r2_2 = *gptr<u32>(r1 + 8u);
        r3_1 = r2_2 + 0xb8u;  // (from the original)
        r12_1 = *gptr<u32>(r2_2 + 0xb8u);  // (from the original)
        if (r12_1 == 0) {
            r3_2 = r14;
        } else {
            r3_2 = r3_1 + r12_1;
        }
        r3 = r3_2 + (*gptr<u32>(r2_2 + 0xb4u) << 2);  // (from the original)
    }
    r2_3 = *gptr<u32>(r4 + 0x24u);  // (from the original)
    if (r2_3 != 0) {
        *gptr<u32>(r2_3) = u32(r1);
    }
    r2 = *gptr<u32>(r4 + 0x24u) + 4u;  // (from the original)
    *gptr<u32>(r4 + 0x24u) = u32(r2);  // (from the original)
    if (r0 == r3) {
        goto L_4edecc;
    }
L_4ede54:;
    r2_4 = *gptr<u32>(r0);
    if (r2_4 == 0) {
        r2 = r14;
    } else {
        r2 = r2_4 + r0;
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
        guest::cpu()->r[13] = r13;
        call_004ee364(r4, 0u, r2, r3);
        r1 = guest::cpu()->r[1];
        *gptr<u8>(r4 + 0x3cu) = u8(1u);  // (from the original)
    }
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 1u;
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
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S4_1 = 0;
    float S5_1 = 0;
    float S6_1 = 0;
    float S7_1 = 0;
    u32 r12_1 = 0;
    u32 r3_2 = 0;
    u32 r2_2 = 0;
    u32 r12_2 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    float S3_2 = 0;
    u32 r1_1 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    float S1_3 = 0;
    float S2_3 = 0;
    float S3_3 = 0;
    float S4_2 = 0;
    float S5_2 = 0;
    float S6_2 = 0;
    float S7_2 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    u32 r2_4 = 0;
    float S0_1 = 0;
    float S1_4 = 0;
    float S2_4 = 0;
    float S3_4 = 0;
    float S4_3 = 0;
    float S5_3 = 0;
    float S6_3 = 0;
    float S7_3 = 0;
    r2_1 = arg1->word_4;
    r3_1 = arg0->word_4;
    S1_1 = std::bit_cast<float>(*gptr<u32>(r2_1 + 0x90u));  // (from the original)
    S2_1 = std::bit_cast<float>(*gptr<u32>(r2_1 + 0x94u));  // (from the original)
    S3_1 = std::bit_cast<float>(*gptr<u32>(r2_1 + 0x98u));  // (from the original)
    S4_1 = std::bit_cast<float>(*gptr<u32>(r2_1 + 0x9cu));  // (from the original)
    S5_1 = std::bit_cast<float>(*gptr<u32>(r2_1 + 0xa0u));  // (from the original)
    S6_1 = std::bit_cast<float>(*gptr<u32>(r2_1 + 0xa4u));  // (from the original)
    S7_1 = std::bit_cast<float>(*gptr<u32>(r2_1 + 0xa8u));  // (from the original)
    r12_1 = r3_1 + 0x8cu;  // (from the original)
    *gptr<u32>(r3_1 + 0x8cu) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r2_1 + 0x8cu))));  // (from the original)
    r3_2 = r3_1 + 0x90u;  // (from the original)
    r2_2 = r2_1 + 0xacu;  // (from the original)
    *gptr<u32>(r3_2) = u32(std::bit_cast<u32>(S1_1));
    *gptr<u32>(r3_2 + 4) = u32(std::bit_cast<u32>(S2_1));
    *gptr<u32>(r3_2 + 8) = u32(std::bit_cast<u32>(S3_1));
    *gptr<u32>(r3_2 + 0xc) = u32(std::bit_cast<u32>(S4_1));  // (from the original)
    *gptr<u32>(r3_2 + 0x10) = u32(std::bit_cast<u32>(S5_1));  // (from the original)
    *gptr<u32>(r3_2 + 0x14) = u32(std::bit_cast<u32>(S6_1));  // (from the original)
    *gptr<u32>(r3_2 + 0x18) = u32(std::bit_cast<u32>(S7_1));  // (from the original)
    r12_2 = r12_1 + 0x20u;  // (from the original)
    S1_2 = std::bit_cast<float>(*gptr<u32>(r2_2 + 4));
    S2_2 = std::bit_cast<float>(*gptr<u32>(r2_2 + 8));
    S3_2 = std::bit_cast<float>(*gptr<u32>(r2_2 + 0xc));  // (from the original)
    *gptr<u32>(r12_2) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r2_2))));
    *gptr<u32>(r12_2 + 4) = u32(std::bit_cast<u32>(S1_2));
    *gptr<u32>(r12_2 + 8) = u32(std::bit_cast<u32>(S2_2));
    *gptr<u32>(r12_2 + 0xc) = u32(std::bit_cast<u32>(S3_2));  // (from the original)
    r1_1 = arg1->word_4;
    r2_3 = arg0->word_4;
    r3_3 = r1_1 + 0xbcu;  // (from the original)
    S1_3 = std::bit_cast<float>(*gptr<u32>(r3_3 + 4));
    S2_3 = std::bit_cast<float>(*gptr<u32>(r3_3 + 8));
    S3_3 = std::bit_cast<float>(*gptr<u32>(r3_3 + 0xc));  // (from the original)
    S4_2 = std::bit_cast<float>(*gptr<u32>(r3_3 + 0x10));  // (from the original)
    S5_2 = std::bit_cast<float>(*gptr<u32>(r3_3 + 0x14));  // (from the original)
    S6_2 = std::bit_cast<float>(*gptr<u32>(r3_3 + 0x18));  // (from the original)
    S7_2 = std::bit_cast<float>(*gptr<u32>(r3_3 + 0x1c));  // (from the original)
    r1_2 = r1_1 + 0xdcu;  // (from the original)
    r0_1 = r2_3 + 0xdcu;  // (from the original)
    *gptr<u32>(r2_3 + 0xbcu) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r3_3))));  // (from the original)
    r2_4 = r2_3 + 0xc0u;  // (from the original)
    *gptr<u32>(r2_4) = u32(std::bit_cast<u32>(S1_3));
    *gptr<u32>(r2_4 + 4) = u32(std::bit_cast<u32>(S2_3));
    *gptr<u32>(r2_4 + 8) = u32(std::bit_cast<u32>(S3_3));
    *gptr<u32>(r2_4 + 0xc) = u32(std::bit_cast<u32>(S4_2));  // (from the original)
    *gptr<u32>(r2_4 + 0x10) = u32(std::bit_cast<u32>(S5_2));  // (from the original)
    *gptr<u32>(r2_4 + 0x14) = u32(std::bit_cast<u32>(S6_2));  // (from the original)
    *gptr<u32>(r2_4 + 0x18) = u32(std::bit_cast<u32>(S7_2));  // (from the original)
    S0_1 = std::bit_cast<float>(*gptr<u32>(r1_2));
    S1_4 = std::bit_cast<float>(*gptr<u32>(r1_2 + 4));
    S2_4 = std::bit_cast<float>(*gptr<u32>(r1_2 + 8));
    S3_4 = std::bit_cast<float>(*gptr<u32>(r1_2 + 0xc));  // (from the original)
    S4_3 = std::bit_cast<float>(*gptr<u32>(r1_2 + 0x10));  // (from the original)
    S5_3 = std::bit_cast<float>(*gptr<u32>(r1_2 + 0x14));  // (from the original)
    S6_3 = std::bit_cast<float>(*gptr<u32>(r1_2 + 0x18));  // (from the original)
    S7_3 = std::bit_cast<float>(*gptr<u32>(r1_2 + 0x1c));  // (from the original)
    *gptr<u32>(r0_1) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r0_1 + 4) = u32(std::bit_cast<u32>(S1_4));
    *gptr<u32>(r0_1 + 8) = u32(std::bit_cast<u32>(S2_4));
    *gptr<u32>(r0_1 + 0xc) = u32(std::bit_cast<u32>(S3_4));  // (from the original)
    *gptr<u32>(r0_1 + 0x10) = u32(std::bit_cast<u32>(S4_3));  // (from the original)
    *gptr<u32>(r0_1 + 0x14) = u32(std::bit_cast<u32>(S5_3));  // (from the original)
    *gptr<u32>(r0_1 + 0x18) = u32(std::bit_cast<u32>(S6_3));  // (from the original)
    *gptr<u32>(r0_1 + 0x1c) = u32(std::bit_cast<u32>(S7_3));  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_4;
    return r0_1;
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
    u32 r0_1 = 0;
    r0_1 = arg0->word_4;
    return call_004f03d0(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_004ee4b8
GUEST_EXPORT(0x004ee4b8, d_004ee4b8::f_004ee4b8);

// f_004ee534: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ee534 {

inline constexpr guest::Function<0x0056aab8, u32(u32, u32, u32, u32)> call_0056aab8;  // (from the original)
inline constexpr guest::Function<0x0056acfc, u32(u32, u32, u32, u32)> call_0056acfc;  // (from the original)

u32 f_004ee534(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0x1cu;  // (from the original)
    r0_2 = call_0056aab8(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0_2;
    }
    r0_3 = r0 + 0x1cu;  // (from the original)
    r0_4 = call_0056acfc(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_5 = r0_4 ^ 1u;
    guest::cpu()->r[13] += 8u;
    return r0_5;
}

}  // namespace d_004ee534
GUEST_EXPORT(0x004ee534, d_004ee534::f_004ee534);

// f_004ee55c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ee55c {

inline constexpr guest::Function<0x0056aa98, u32(u32, u32, u32, u32)> call_0056aa98;  // (from the original)

u32 f_004ee55c(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0x1cu;  // (from the original)
    r0_2 = call_0056aa98(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r0_2;
        return r0_2;
    }
    if (*gptr<u32>(r0 + 4u) != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r0_2;
        return r0_2;
    }
    r0_3 = *gptr<u32>(r0 + 0xecu);  // (from the original)
    *gptr<u32>(r0 + 4u) = u32(r0_3);
    *gptr<u32>(r0 + 8u) = u32(r0_3);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r0_2;
    return r0_2;
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
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0x902b5cu);  // (from the original)
    r0_1 = r0 + 0xcu;  // (from the original)
    r0_2 = call_00317dec(r0_1, 0x902b5cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_3 = r0_2 - 0xcu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_3;
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
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 res_1 = 0;
    u32 ea_2 = 0;
    u32 r1_1 = 0;
    u32 r6_1 = 0;
    u32 r0_4 = 0;
    u32 ea_3 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 zf_1 = 0;
    u32 r0_6 = 0;
    u32 r3_2 = 0;
    u32 r0_7 = 0;
    u32 ea_4 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 ea_5 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_2 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    ea_1 = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    *gptr<u32>(ea_1 + 4) = u32(r4);
    *gptr<u32>(ea_1 + 8) = u32(r5);
    *gptr<u32>(ea_1 + 0xc) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r8);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r9);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r14);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r0_1 = arg0->word_8;
    guest::cpu()->r[13] = r13;
    r0_2 = call_004ed570(r0_1, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_3 = *gptr<u32>(r0_2 + 8u);
    if (r0_3 != 0) {
        r2_1 = 0x40000092u;  // (from the original)
        res_1 = r2_1 & ~*gptr<u32>(r0_3);
        if (res_1 != 0) {
            r0_3 = 0u;
        }
    }
    ea_2 = r0_3 + 0xe0u;  // (from the original)
    r1_1 = *gptr<u32>(ea_2);
    r6_1 = r13;
    if (r1_1 == 0) {
        r0_4 = 0u;
    } else {
        r0_4 = ea_2 + r1_1;
    }
    ea_3 = r0_4 + 0x1cu;  // (from the original)
    r1_2 = *gptr<u32>(ea_3);
    if (r1_2 == 0) {
        r0_5 = 0u;
    } else {
        r0_5 = ea_3 + r1_2;
    }
    zf_1 = r0_5 == 0;
    if (!zf_1) {
        zf_1 = r2 == 0;
    }
    *gptr<u32>(r13) = u32(r0_5);
    if (zf_1) {
        goto L_4eef40;
    }
    guest::cpu()->r[13] = r13;
    r0_6 = call_002fa9d0(r2, r1_2, r2_1, r3_1);
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_7 = call_00736a1c(r6_1, r2, r0_6, r3_2);
    if (r0_7 == 0) {
        goto L_4eef40;
    }
    ea_4 = r0_7 + 0xcu;  // (from the original)
    r1_3 = *gptr<u32>(ea_4);
    if (r1_3 == 0) {
        r2_2 = 0u;
    } else {
        r2_2 = r1_3 + ea_4;
    }
    goto L_4eef44;
L_4eef40:;
    r2_2 = 0u;
L_4eef44:;
    r13 = r13 + 4u;
    ea_5 = r13;
    r13 = r13 + 0x1c;  // (from the original)
    r4_1 = *gptr<u32>(ea_5);
    r5_1 = *gptr<u32>(ea_5 + 4);
    r6_2 = *gptr<u32>(ea_5 + 8);
    r7_1 = *gptr<u32>(ea_5 + 0xc);  // (from the original)
    r8_1 = *gptr<u32>(ea_5 + 0x10);  // (from the original)
    r9_1 = *gptr<u32>(ea_5 + 0x14);  // (from the original)
    r14 = *gptr<u32>(ea_5 + 0x18);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    return call_004eef60(r0, r1, r2_2, 0u);
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
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0x9029e0u);  // (from the original)
    r0_1 = r0 + 0x14u;  // (from the original)
    call_002f76ac(r0_1, 0x4efa0cu, 0x18u, 4u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r0 + 0xcu;  // (from the original)
    r0_3 = call_00317dec(r0_2, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r0_4 = r0_3 - 0xcu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return r0_4;
}

}  // namespace d_004ef50c
GUEST_EXPORT(0x004ef50c, d_004ef50c::f_004ef50c);

// f_004ef9a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ef9a4 {

inline guest::global<u32, 0x004ef9b0> global_004ef9b0;  // (from the original)
inline constexpr guest::Function<0x004ef77c, u32(u32, u32, u32, u32)> call_004ef77c;  // (from the original)

u32 f_004ef9a4() {
    float S0_1 = 0;
    S0_1 = std::bit_cast<float>(*global_004ef9b0);
    guest::cpu()->s[0] = S0_1;
    return call_004ef77c(guest::cpu()->r[0], guest::cpu()->r[1], 0u, guest::cpu()->r[3]);
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
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0x902b5cu);  // (from the original)
    r0_1 = r0 + 0xcu;  // (from the original)
    r0_2 = call_00317dec(r0_1, 0x902b5cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_3 = r0_2 - 0xcu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_3;
}

}  // namespace d_004efa0c
GUEST_EXPORT(0x004efa0c, d_004efa0c::f_004efa0c);
