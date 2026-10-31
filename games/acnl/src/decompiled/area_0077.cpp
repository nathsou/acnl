// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_00770060: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00770060 {

inline guest::global<u32, 0x007701b0> global_007701b0;  // (from the original)
inline guest::global<u32, 0x007701b4> global_007701b4;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> call_005361a8;  // (from the original)
inline constexpr guest::Function<0x00768da0, u32(u32, u32, u32, u32)> call_00768da0;  // (from the original)

u32 f_00770060(u32 r0, u32 r1, u32 r2, float S0, float S1, float S2) {
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
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 res_1 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    float S1_3 = 0;
    float S0_3 = 0;
    float S0_4 = 0;
    u32 r0_8 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r7 = r0;
    r8 = r1;
    r9 = r2;
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    call_002fcbb0(r0_1, 0x2000u, r2, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    S2_1 = guest::cpu()->s[2];
    r0_2 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    r0_3 = call_005361a8(r0_2, r1_1, r2_1, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r5 = r0_3;
    if (r0_3 == 0) {
        goto L_770140;
    }
    r10 = 0x172bu;  // (from the original)
    r6 = 0u;
    r4 = r6;
L_77009c:;
    res_1 = u32(*gptr<u8>(r5 + 0x1cu)) << 0x1b;  // (from the original)
    if (!(res_1 >> 0x1f)) {  // (from the original)
        goto L_7700f8;
    }
    r1_2 = uxth(r4 + 0x2000u);  // (from the original)
    r0_4 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    call_002fcbb0(r0_4, r1_2, r2, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    r0_5 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    r0_6 = call_00768da0(r0_5, r1_3, r2_2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    if (r0_6 >> 0x1f != (r0_6 & (r0_6 ^ r0_6)) >> 0x1f) {  // (from the original)
        goto L_7700f0;
    }
    r1 = u32(s32(r0_6) >> 5);
    r0_7 = r0_6 & 0x1fu;  // (from the original)
    if (r1 >= 0xbau) {  // (from the original)
        goto L_7700f0;
    }
    r1 = *gptr<u32>(r7 + (r1 << 2));
    if ((lsr_r(r1, r0_7 & 0xff) & 1u) != 0) {  // (from the original)
        r6 = r6 + 1u;
    }
L_7700f0:;
L_7700f8:;
    r4 = r4 + 1u;
    r5 = r5 + 0x1eu;  // (from the original)
    if (r10 > r4) {
        guest::preempt();
        goto L_77009c;
    }
    if (r9 != 0) {
        *gptr<u32>(r9) = u32(0xe86u);  // (from the original)
    }
    if (r8 != 0) {
        *gptr<u32>(r8) = u32(r6);
    }
    if (r6 == 0) {
        goto L_770140;
    }
    if (0xe86u > r6) {  // (from the original)
        goto L_770154;
    }
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 0x64u;  // (from the original)
L_770140:;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 0u;
L_770154:;
    S1_3 = std::bit_cast<float>(*global_007701b4);
    S0_3 = float(std::bit_cast<u32>(std::bit_cast<float>(r6))) * std::bit_cast<float>(*global_007701b0) / S1_3;
    if (s32(std::bit_cast<u32>(S0_3)) < s32(0x3f800000u)) {  // (from the original)
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_3;
        return 1u;
    }
    S0_4 = std::bit_cast<float>(vcvt_uz_f(S0_3));
    r0_8 = std::bit_cast<u32>(S0_4);
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_3;
    return r0_8;
}

}  // namespace d_00770060
GUEST_EXPORT(0x00770060, d_00770060::f_00770060);

// f_0077025c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0077025c {

struct __attribute__((packed)) Object_0077025c_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0077025c_0, byte_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x005359fc, u32(u32, u32, u32, u32)> call_005359fc;  // (from the original)
inline constexpr guest::Function<0x006b9b30, u32(u32, u32, u32, u32)> call_006b9b30;  // (from the original)

u32 f_0077025c(gptr<Object_0077025c_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = u32(arg0->byte_0);
    if (r0_1 != r1) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0x7ffeu;  // (from the original)
    }
    r0_2 = call_005359fc(r0_1, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (*gptr<u32>(r0_2 + 4u) < r2) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0x7ffeu;  // (from the original)
    }
    r1_1 = *gptr<u32>(r0 + (r2 << 2) + 4u);
    r0_3 = u32(*gptr<u8>(r0));
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_006b9b30(r0_3, r1_1, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_0077025c
GUEST_EXPORT(0x0077025c, d_0077025c::f_0077025c);

// f_007702a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007702a4 {

struct __attribute__((packed)) Object_007702a4_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_007702a4_0, byte_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x005359fc, u32(u32, u32, u32, u32)> call_005359fc;  // (from the original)

u32 f_007702a4(gptr<Object_007702a4_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = u32(arg0->byte_0);
    if (r0_1 == 0x9bu) {  // (from the original)
        r0_2 = 0u;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_2;
    }
    r4 = 0u;
    r0_3 = call_005359fc(r0_1, r1, r2, guest::cpu()->r[3]);
    r1_1 = r0 + (*gptr<u32>(r0_3 + 4u) << 2);
    r0 = r0 + 4u;
    r1 = r1_1 + 4u;
    if (r1 <= r0) {
        goto L_7702f8;
    }
    do {
L_7702dc:;
        if (*gptr<u32>(r0) + 1u == 0) {
            goto L_7702f8;
        }
        r0 = r0 + 4u;
        r4 = r4 + 1u;
        guest::preempt();
    } while (r1 > r0);
L_7702f8:;
    r0_2 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_007702a4
GUEST_EXPORT(0x007702a4, d_007702a4::f_007702a4);

// f_00770300: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00770300 {

struct __attribute__((packed)) Object_00770300_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_00770300_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00770300_0, word_4, 0x4);  // (from the original)


u32 f_00770300(gptr<Object_00770300_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u64 t_1 = 0;
    u32 r3_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r1_1 = arg0->word_4;
    r2_1 = arg0->word_0;
    if (r1_1 >= 1u) {
        t_1 = u64(0xffu) + ~r1_1 + u32(~0u >= r2_1);  // (from the original)
        if (!u32(t_1 >> 0x20)) {  // (from the original)
            r1_1 = r1_1 & 0xffu;  // (from the original)
        }
    }
    r3_1 = u32(*gptr<u8>(r0 + 9u));
    guest::cpu()->r[13] += 8u;
    r1_2 = uxth(u32(u64(r1_1) + (r3_1 << 8) + u32(r2_1 < r2_1)));
    guest::cpu()->r[1] = r1_2;
    return r2_1;
}

}  // namespace d_00770300
GUEST_EXPORT(0x00770300, d_00770300::f_00770300);

// f_007703c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007703c8 {

struct __attribute__((packed)) Object_007703c8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_007703c8_0, word_0, 0x0);  // (from the original)


u32 f_007703c8(gptr<Object_007703c8_0> arg0, u32 r1) {
    u32 r0_1 = 0;
    r0_1 = arg0->word_0;
    if (r0_1 != 1u) {
        return r0_1;
    }
    if (r1 != 0) {
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_007703c8
GUEST_EXPORT(0x007703c8, d_007703c8::f_007703c8);

// f_00770934: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00770934 {

inline constexpr guest::Function<0x00758104, u32(u32, u32, u32, u32)> call_00758104;  // (from the original)

u32 f_00770934(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r4 = 0u;
    do {
L_770940:;
        r0_1 = r5 + (r4 + (r4 << 2) << 7);
        r0_2 = call_00758104(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (!(r0_2 == 0)) {
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            return r4;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0xau);  // (from the original)
    r0_3 = ~0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0_3;
}

}  // namespace d_00770934
GUEST_EXPORT(0x00770934, d_00770934::f_00770934);

// f_00770974: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00770974 {

inline constexpr guest::Function<0x00758104, u32(u32, u32, u32, u32)> call_00758104;  // (from the original)

u32 f_00770974(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r4 = 0u;
L_770980:;
    r0_1 = r5 + (r4 + (r4 << 2) << 7);
    r0_2 = call_00758104(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 != 0) {
        r4 = r4 + 1u;
        if (r4 < 0xau) {  // (from the original)
            guest::preempt();
            goto L_770980;
        }
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return 0u;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return 1u;
}

}  // namespace d_00770974
GUEST_EXPORT(0x00770974, d_00770974::f_00770974);

// f_007709b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007709b4 {

struct __attribute__((packed)) Object_007709b4_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
};
GUEST_OFFSET(Object_007709b4_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_007709b4_0, byte_9, 0x9);  // (from the original)

inline guest::global<u32, 0x00770a3c> global_00770a3c;  // (from the original)
inline guest::global<u32, 0x0088f97c> global_0088f97c;  // (from the original)

u32 f_007709b4(gptr<Object_007709b4_0> arg0) {
    float S3_1 = 0;
    float S4_1 = 0;
    float S2_1 = 0;
    float S1_1 = 0;
    float S0_1 = 0;
    float S1_2 = 0;
    float S1_3 = 0;
    S3_1 = std::bit_cast<float>(*global_00770a3c);
    S4_1 = std::bit_cast<float>(*global_0088f97c);
    S2_1 = std::bit_cast<float>(*gptr<u32>(0x88f97cu + 4u)) - S4_1;  // (from the original)
    S1_1 = S2_1 * float(std::bit_cast<u32>(std::bit_cast<float>(u32(arg0->byte_9))));
    S0_1 = S4_1 + S1_1 * S3_1;
    if (std::bit_cast<u32>(S0_1) + 0xc0a66665u > 0x266665u) {  // (from the original)
        guest::cpu()->r[1] = 0x88f97cu;  // (from the original)
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 0u;
    }
    S1_2 = std::bit_cast<float>(*global_0088f97c);
    S1_3 = S1_2 + S2_1 * float(std::bit_cast<u32>(std::bit_cast<float>(u32(arg0->byte_8)))) * S3_1;
    if (0xc0cccccdu + 0x3f800000u >= std::bit_cast<u32>(S1_3 / S0_1) + 0xc0cccccdu) {  // (from the original)
        guest::cpu()->r[1] = 0xc0cccccdu;  // (from the original)
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_3;
        return 1u;
    }
    guest::cpu()->r[1] = 0xc0cccccdu;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_3;
    return 0u;
}

}  // namespace d_007709b4
GUEST_EXPORT(0x007709b4, d_007709b4::f_007709b4);

// f_00770b68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00770b68 {

struct __attribute__((packed)) Object_00770b68_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_00770b68_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00770b68_0, word_10, 0x10);  // (from the original)


u32 f_00770b68(gptr<Object_00770b68_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r4_1 = 0;
    u32 ea_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    r13 = r13 - 4u;
    r3_1 = arg0->word_c;
    r1_1 = *gptr<u32>(0x890200u + 0x1cu);  // (from the original)
    if (r3_1 != *gptr<u32>(0x890200u + 0x18u)) {  // (from the original)
        goto L_770bb0;
    }
    if (r3_1 == 0) {
        if (((arg0->word_10 | r1_1) & 1u) == 0) {
            goto L_770ba8;
        }
    }
    if (*gptr<u32>(r0 + 0x10u) != r1_1) {  // (from the original)
        goto L_770bb0;
    }
L_770ba8:;
    r4_1 = 1u;
    goto L_770bb4;
L_770bb0:;
    r4_1 = 0u;
L_770bb4:;
    ea_1 = 0x890200u + 0x10u;  // (from the original)
    r1_2 = *gptr<u32>(ea_1 + 4u);
    if (r3_1 != *gptr<u32>(ea_1)) {
        r0_2 = 0u | r4_1;
        r13 = r13 + 4u;
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    if (r3_1 == 0) {
        if (((*gptr<u32>(r0 + 0x10u) | r1_2) & 1u) == 0) {  // (from the original)
            r0_1 = 1u | r4_1;
            r13 = r13 + 4u;
            guest::cpu()->r[1] = r1_2;
            guest::cpu()->r[13] = r13;
            return r0_1;
        }
    }
    if (*gptr<u32>(r0 + 0x10u) != r1_2) {  // (from the original)
        r0_2 = 0u | r4_1;
        r13 = r13 + 4u;
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    r0_1 = 1u | r4_1;
    r13 = r13 + 4u;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_00770b68
GUEST_EXPORT(0x00770b68, d_00770b68::f_00770b68);

// f_00770c04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00770c04 {

struct __attribute__((packed)) Object_00770c04_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_00770c04_0, word_c, 0xc);  // (from the original)


u32 f_00770c04(gptr<Object_00770c04_0> arg0) {
    u32 r0_1 = 0;
    r0_1 = arg0->word_c;
    return r0_1;
}

}  // namespace d_00770c04
GUEST_EXPORT(0x00770c04, d_00770c04::f_00770c04);

// f_00770c10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00770c10 {

struct __attribute__((packed)) Object_00770c10_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00770c10_0, word_4, 0x4);  // (from the original)


u32 f_00770c10(gptr<Object_00770c10_0> arg0) {
    u32 r0_1 = 0;
    if (arg0->word_4 >= 0x64u) {  // (from the original)
        r0_1 = 1u;
    } else {
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_00770c10
GUEST_EXPORT(0x00770c10, d_00770c10::f_00770c10);

// f_00779500: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00779500 {

inline constexpr guest::Function<0x00131294, u32(u32, u32, u32, u32)> call_00131294;  // (from the original)

u32 f_00779500(u32 r0) {
    return call_00131294(0u, r0, 4u, 0u);
}

}  // namespace d_00779500
GUEST_EXPORT(0x00779500, d_00779500::f_00779500);

// f_00779704: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00779704 {

inline guest::global<u32, 0x00974a7c> global_00974a7c;  // (from the original)

u32 f_00779704(u32 r0, u32 r1) {
    u32 r12_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 0xcu;  // (from the original)
    r12_1 = *global_00974a7c;
    r3_1 = *gptr<u32>(0x974a7cu + 4u);  // (from the original)
    if (r12_1 + (r1 << 2) + 8u >= r3_1) {
        *global_00974a7c = u32(r3_1);
        guest::cpu()->r[13] += 0xcu;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r1 == 0) {
        guest::cpu()->r[13] += 0xcu;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r1 - 1u;
    *gptr<u32>(r12_1) = u32(0u);
    *gptr<u32>(r12_1 + 4) = u32(r0 | r1 << 0x14);  // (from the original)
    r0_1 = r12_1 + 8u;
    if ((r1 & 1u) != 0) {
        r1 = r1 + 1u;
    }
    *global_00974a7c = u32(r0_1);
    r0 = r0_1 + (r1 << 2);
    *global_00974a7c = u32(r0);
    guest::cpu()->r[13] += 0xcu;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00779704
GUEST_EXPORT(0x00779704, d_00779704::f_00779704);

// f_00779764: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00779764 {


void f_00779764(u32 r0, u32 r1, u32 r2) {
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r12_1 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 r12_2 = 0;
    u32 r8_1 = 0;
    u32 v_1 = 0;
    u32 r3_1 = 0;
    u32 res_1 = 0;
    u32 v_2 = 0;
    u32 r12_3 = 0;
    u32 res_2 = 0;
    u32 r3_2 = 0;
    u32 v_3 = 0;
    u32 r9_1 = 0;
    u32 ea_1 = 0;
    u32 r10_1 = 0;
    u32 res_3 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 r10_2 = 0;
    u32 ea_4 = 0;
    r13 = r13 - 0x1c;  // (from the original)
    r6 = 0x974a7cu;  // (from the original)
    r3 = *gptr<u32>(r6);
    r12_1 = *gptr<u32>(r6 + 4);
    if (r12_1 <= r3 + ((r1 & ~1u) + (r1 >> 7 << 1) << 2) + 8u) {
        *gptr<u32>(r6) = u32(r12_1);
        goto L_77983c;
    }
    zf_1 = r1 == 0;
    cf_1 = r1 >= 0u;
    r5 = 0u;
    if (cf_1 && !zf_1) {
        r7 = r5 - 0x100000u;  // (from the original)
    }
    if (!cf_1 || zf_1) {
        goto L_779838;
    }
L_7797a0:;
    r12_2 = r2 + (r5 << 2);
    r8_1 = r1 - r5;
    v_1 = *gptr<u32>(r12_2);
    r12 = r12_2 + 4u;
    if (r8_1 > 0x80u) {  // (from the original)
        r8_1 = 0x80u;  // (from the original)
    }
    *gptr<u32>(r3) = u32(v_1);
    r3_1 = r3 + 4u;
    r4 = r8_1 >> 1;
    res_1 = r4 + 0x80000001u;  // (from the original)
    *gptr<u32>(r3_1) = u32(r7 + (r8_1 << 0x14) | r0 + r5 | 0x80000000u | 0xf0000u);  // (from the original)
    r3 = r3_1 + 4u;
    if (res_1 >= r4 || res_1 == 0) {
        goto L_7797f8;
    }
    do {
L_7797dc:;
        v_2 = *gptr<u32>(r12);
        r12_3 = r12 + 4u;
        res_2 = r4 - 1u;
        r4 = res_2;
        *gptr<u32>(r3) = u32(v_2);
        r3_2 = r3 + 4u;
        v_3 = *gptr<u32>(r12_3);
        r12 = r12_3 + 4u;
        *gptr<u32>(r3_2) = u32(v_3);
        r3 = r3_2 + 4u;
        guest::preempt();
    } while (res_2 != 0);
    goto L_77982c;
L_7797f8:;
    r9_1 = r4 << 1;
    if (r9_1 == 0 || r9_1 >> 0x1f != (r9_1 & (r9_1 ^ r9_1)) >> 0x1f) {  // (from the original)
        goto L_77982c;
    }
    r12 = r12 - 4u;
    r8 = r3 - 4u;
    r9 = u32(s32(r9_1) >> 1);
    do {
L_779810:;
        ea_1 = r12 + 4u;
        r10_1 = *gptr<u32>(ea_1);
        res_3 = r9 - 1u;
        r9 = res_3;
        ea_2 = r8 + 4u;
        *gptr<u32>(ea_2) = u32(r10_1);
        ea_3 = r12 + 8u;
        r12 = ea_3;
        r10_2 = *gptr<u32>(ea_3);
        ea_4 = r8 + 8u;
        *gptr<u32>(ea_4) = u32(r10_2);
        r8 = ea_4;
        guest::preempt();
    } while (res_3 != 0);
    r3 = r3 + (r4 << 3);
L_77982c:;
    r5 = r5 + 0x80u;  // (from the original)
    if (r5 < r1) {
        guest::preempt();
        goto L_7797a0;
    }
L_779838:;
    *gptr<u32>(r6) = u32(r3);
L_77983c:;
    r13 = r13 + 0x1c;  // (from the original)
    guest::cpu()->r[13] = r13;
    return;
}

}  // namespace d_00779764
GUEST_EXPORT(0x00779764, d_00779764::f_00779764);

// f_00779848: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00779848 {

inline guest::global<u32, 0x0097d46c> global_0097d46c;  // (from the original)

u32 f_00779848() {
    u32 r0_1 = 0;
    r0_1 = *gptr<u32>(*gptr<u32>(*global_0097d46c + 8u) + 0xcu);  // (from the original)
    return r0_1;
}

}  // namespace d_00779848
GUEST_EXPORT(0x00779848, d_00779848::f_00779848);

// f_00779860: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00779860 {

inline guest::global<u32, 0x0097d46c> global_0097d46c;  // (from the original)

u32 f_00779860() {
    u32 r0_1 = 0;
    r0_1 = *gptr<u32>(*gptr<u32>(*global_0097d46c + 8u) + 0x1cu);  // (from the original)
    return r0_1;
}

}  // namespace d_00779860
GUEST_EXPORT(0x00779860, d_00779860::f_00779860);

// f_0077a214: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0077a214 {

inline guest::global<u32, 0x0077a298> global_0077a298;  // (from the original)
inline guest::global<u32, 0x0077a29c> global_0077a29c;  // (from the original)

u32 f_0077a214(float S0, float S1) {
    u32 fpsr = guest::cpu()->fpscr;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    float S2_1 = 0;
    float S1_1 = 0;
    float S0_1 = 0;
    u32 nf_1 = 0;
    u32 vf_1 = 0;
    float S0_2 = 0;
    u32 r2_1 = 0;
    u32 fpsr_1 = 0;
    float S0_3 = 0;
    u32 r0_2 = 0;
    float S0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    float S0_5 = 0;
    r0_1 = std::bit_cast<u32>(S0);
    r1_1 = (r0_1 << 1 >> 0x18) - 0x7fu;  // (from the original)
    if (s32(r1_1) >= s32(0x17u)) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0_1;
    }
    S2_1 = std::bit_cast<float>(*global_0077a29c);
    S1_1 = S0 + std::bit_cast<float>(*global_0077a298);
    if (r1_1 >> 0x1f != (r1_1 & (r1_1 ^ r1_1)) >> 0x1f) {  // (from the original)
        if ((fpsr & 0xfffffffu | vfp_cmpf(S2_1, S1_1)) >> 0x1d & 1) {  // (from the original)
            S0_1 = std::bit_cast<float>(r0_1);
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_1;
            return r0_1;
        }
        nf_1 = r0_1 >> 0x1f;  // (from the original)
        vf_1 = (r0_1 & (r0_1 ^ r0_1)) >> 0x1f;  // (from the original)
        if (r0_1 != 0 && nf_1 == vf_1) {
            r0_1 = 0x3f800000u;  // (from the original)
        }
        if (nf_1 != vf_1) {
            r0_1 = 0x80000000u;  // (from the original)
        }
        S0_2 = std::bit_cast<float>(r0_1);
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_1;
        return r0_1;
    }
    r2_1 = lsr_r(0x7fffffu, r1_1 & 0xff);  // (from the original)
    if ((r0_1 & r2_1) == 0) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1_1;
        return r0_1;
    }
    fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S1_1, S2_1);  // (from the original)
    if (fpsr_1 >> 0x1e & 1 || fpsr_1 >> 0x1f != (fpsr_1 >> 0x1c & 1)) {  // (from the original)
        S0_3 = std::bit_cast<float>(r0_1);
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_1;
        return r0_1;
    }
    if (r0_1 == 0 || r0_1 >> 0x1f != (r0_1 & (r0_1 ^ r0_1)) >> 0x1f) {  // (from the original)
        r0_2 = r0_1 & ~r2_1;
        S0_4 = std::bit_cast<float>(r0_2);
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_4;
        guest::cpu()->s[1] = S1_1;
        return r0_2;
    }
    r1_2 = lsr_r(0x800000u, r1_1 & 0xff);  // (from the original)
    r0_3 = r0_1 + r1_2;
    r0_4 = r0_3 & ~r2_1;
    S0_5 = std::bit_cast<float>(r0_4);
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_1;
    return r0_4;
}

}  // namespace d_0077a214
GUEST_EXPORT(0x0077a214, d_0077a214::f_0077a214);

// f_0077a2a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0077a2a4 {

inline guest::global<u32, 0x0077a3e8> global_0077a3e8;  // (from the original)
inline guest::global<u32, 0x0077a3ec> global_0077a3ec;  // (from the original)
inline guest::global<u32, 0x0077a3f0> global_0077a3f0;  // (from the original)
inline guest::global<u32, 0x0077a3f4> global_0077a3f4;  // (from the original)
inline guest::global<u32, 0x0077a3f8> global_0077a3f8;  // (from the original)
inline guest::global<u32, 0x0077a3fc> global_0077a3fc;  // (from the original)
inline guest::global<u32, 0x0077a400> global_0077a400;  // (from the original)
inline guest::global<u32, 0x0077a404> global_0077a404;  // (from the original)
inline guest::global<u32, 0x0077a408> global_0077a408;  // (from the original)
inline guest::global<u32, 0x0077a40c> global_0077a40c;  // (from the original)
inline guest::global<u32, 0x0077a410> global_0077a410;  // (from the original)
inline guest::global<u32, 0x0077a414> global_0077a414;  // (from the original)
inline guest::global<u32, 0x0077a418> global_0077a418;  // (from the original)
inline guest::global<u32, 0x0077a41c> global_0077a41c;  // (from the original)
inline constexpr guest::Function<0x00101a13, u32(u32, u32, u32, u32)> call_00101a12;  // (from the original)
inline constexpr guest::Function<0x0077b710, u32(u32, u32, u32, u32)> call_0077b710;  // (from the original)

u32 f_0077a2a4(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3, float S0, float S1, float S2, float S3, float S4) {
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 b_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 b_2 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    float S2_1 = 0;
    float S1_1 = 0;
    float S1_2 = 0;
    float S0_1 = 0;
    u32 r0_3 = 0;
    float S0_2 = 0;
    u32 r0_4 = 0;
    u32 zf_2 = 0;
    u32 cf_2 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    float S1_3 = 0;
    float S0_3 = 0;
    float S2_2 = 0;
    float S0_4 = 0;
    float S0_5 = 0;
    float S1_4 = 0;
    float S0_6 = 0;
    float S0_7 = 0;
    r2_1 = 0x7e921fb6u;  // (from the original)
    r1_1 = std::bit_cast<u32>(S0);
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    b_1 = r1_1 << 1;
    r0_1 = r13;
    if (r2_1 > b_1) {
        r0_2 = 0x73000000u;  // (from the original)
        b_2 = r1_1 << 1;
        zf_1 = r0_2 == b_2;
        cf_1 = r0_2 >= b_2;
        if (cf_1 && !zf_1) {
            r0_2 = ~0u;
        }
        if (!cf_1 || zf_1) {
            r0_2 = 0u;
        }
        *gptr<u32>(r13) = u32(r0_2);
        goto L_77a33c;
    }
    r3 = 0x46490e49u;  // (from the original)
    r2_1 = r1_1 & ~0x80000000u;  // (from the original)
    if (r3 > r2_1) {
        S4 = std::bit_cast<float>(*global_0077a3f4);
        S3 = std::bit_cast<float>(*global_0077a3fc);
        S2_1 = S0 * std::bit_cast<float>(*global_0077a3e8);
        S1_1 = std::bit_cast<float>(*global_0077a3ec);
        if ((r1_1 & 0x80000000u) == 0) {  // (from the original)
            S1_2 = S2_1 + S1_1 - S1_1;
        } else {
            S1_2 = S2_1 - S1_1 + S1_1;
        }
        S0_1 = S0 - S1_2 * std::bit_cast<float>(*global_0077a3f0);
        S2 = std::bit_cast<float>(*global_0077a3f8);
        *gptr<u32>(r13) = u32(std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(S1_2))) & 3u);
        S0 = S0_1 - S1_2 * S4 - S1_2 * S2 - S1_2 * S3;
        goto L_77a33c;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    call_0077b710(r0_1, r1_1, r2_1, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
L_77a33c:;
    r0_3 = *gptr<u32>(r13);
    S0_2 = std::bit_cast<float>(*global_0077a400);
    if (r0_3 >> 0x1f != (r0_3 & (r0_3 ^ r0_3)) >> 0x1f) {  // (from the original)
        r0_4 = std::bit_cast<u32>(S0) << 1;
        zf_2 = r0_4 == 0xff000000u;  // (from the original)
        cf_2 = r0_4 >= 0xff000000u;  // (from the original)
        if (cf_2 && !zf_2) {
            S0_2 = S0 + S0;
        }
        if (!cf_2) {
            r13 = r13 + 8;
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_2;
            guest::cpu()->s[1] = S0;
            return r0_4;
        }
        if (!zf_2) {
            r13 = r13 + 8;
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_2;
            guest::cpu()->s[1] = S0;
            return r0_4;
        }
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S0;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        r0_5 = call_00101a12(1u, r1_1, r2_1, r3);
        r1_2 = guest::cpu()->r[1];
        S1_3 = std::bit_cast<float>(*global_0077a404);
        S0_3 = S1_3 / S1_3;
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_3;
        return r0_5;
    }
    if ((r0_3 & 1u) != 0) {
        S2_2 = S0 * S0;
        S0_4 = S0 + S0 * ((std::bit_cast<float>(*global_0077a410) + S2_2 * (std::bit_cast<float>(*global_0077a40c) - S2_2 * std::bit_cast<float>(*global_0077a408))) * S2_2);
        if ((r0_3 & 2u) != 0) {
            r13 = r13 + 8;
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_4;
            guest::cpu()->s[1] = S0;
            return r0_3;
        }
        S0_5 = -S0_4;
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_5;
        guest::cpu()->s[1] = S0;
        return r0_3;
    }
    S1_4 = S0 * S0;
    S0_6 = S0_2 + S1_4 * (std::bit_cast<float>(*global_0077a41c) + S1_4 * (std::bit_cast<float>(*global_0077a418) + S1_4 * std::bit_cast<float>(*global_0077a414)));
    if ((r0_3 & 2u) == 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_6;
        guest::cpu()->s[1] = S1_4;
        return r0_3;
    }
    S0_7 = -S0_6;
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_7;
    guest::cpu()->s[1] = S1_4;
    return r0_3;
}

}  // namespace d_0077a2a4
GUEST_EXPORT(0x0077a2a4, d_0077a2a4::f_0077a2a4);

// f_0077a650: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0077a650 {

inline guest::global<u32, 0x0077a6dc> global_0077a6dc;  // (from the original)
inline guest::global<u32, 0x0077a6e0> global_0077a6e0;  // (from the original)

u32 f_0077a650(float S0, float S1) {
    u32 fpsr = guest::cpu()->fpscr;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    float S2_1 = 0;
    float S1_1 = 0;
    float S0_1 = 0;
    float S0_2 = 0;
    float S0_3 = 0;
    u32 r2_1 = 0;
    float S0_4 = 0;
    u32 r0_2 = 0;
    float S0_5 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    float S0_6 = 0;
    r0_1 = std::bit_cast<u32>(S0);
    r1_1 = (r0_1 << 1 >> 0x18) - 0x7fu;  // (from the original)
    if (s32(r1_1) >= s32(0x17u)) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0_1;
    }
    S2_1 = std::bit_cast<float>(*global_0077a6e0);
    S1_1 = S0 + std::bit_cast<float>(*global_0077a6dc);
    if (r1_1 >> 0x1f != (r1_1 & (r1_1 ^ r1_1)) >> 0x1f) {  // (from the original)
        if ((fpsr & 0xfffffffu | vfp_cmpf(S2_1, S1_1)) >> 0x1d & 1) {  // (from the original)
            S0_1 = std::bit_cast<float>(r0_1);
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_1;
            return r0_1;
        }
        if (r0_1 >> 0x1f == (r0_1 & (r0_1 ^ r0_1)) >> 0x1f) {  // (from the original)
            S0_2 = std::bit_cast<float>(0u);
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->s[0] = S0_2;
            guest::cpu()->s[1] = S1_1;
            return 0u;
        }
        if (r0_1 != 0x80000000u) {  // (from the original)
            r0_1 = 0xbf800000u;  // (from the original)
        }
        S0_3 = std::bit_cast<float>(r0_1);
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_1;
        return r0_1;
    }
    r2_1 = lsr_r(0x7fffffu, r1_1 & 0xff);  // (from the original)
    if ((r0_1 & r2_1) == 0) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1_1;
        return r0_1;
    }
    if ((fpsr & 0xfffffffu | vfp_cmpf(S2_1, S1_1)) >> 0x1d & 1) {  // (from the original)
        S0_4 = std::bit_cast<float>(r0_1);
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_4;
        guest::cpu()->s[1] = S1_1;
        return r0_1;
    }
    if (r0_1 >> 0x1f == (r0_1 & (r0_1 ^ r0_1)) >> 0x1f) {  // (from the original)
        r0_2 = r0_1 & ~r2_1;
        S0_5 = std::bit_cast<float>(r0_2);
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_5;
        guest::cpu()->s[1] = S1_1;
        return r0_2;
    }
    r1_2 = lsr_r(0x800000u, r1_1 & 0xff);  // (from the original)
    r0_3 = r0_1 + r1_2;
    r0_4 = r0_3 & ~r2_1;
    S0_6 = std::bit_cast<float>(r0_4);
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0_6;
    guest::cpu()->s[1] = S1_1;
    return r0_4;
}

}  // namespace d_0077a650
GUEST_EXPORT(0x0077a650, d_0077a650::f_0077a650);

// f_0077ab5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0077ab5c {

struct __attribute__((packed)) Object_0077ab5c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0077ab5c_0, word_0, 0x0);  // (from the original)


void f_0077ab5c(gptr<Object_0077ab5c_0> arg0, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r1_1 = 0;
    float S0_1 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    float S0_2 = 0;
    u32 r2_2 = 0;
    u32 r1_3 = 0;
    float S1_1 = 0;
    float S0_3 = 0;
    float S0_4 = 0;
    ea_1 = r13 - 4u;
    *gptr<u32>(ea_1) = u32(r0);
    r13 = ea_1;
    ea_2 = r13 - 8u;
    *gptr<u32>(ea_2) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(ea_2 + 4) = u32(std::bit_cast<u32>(S1));
    r13 = r13 - 8u;
    r1_1 = *gptr<u32>(r13);
    if (0xff000000u < r1_1 << 1) {  // (from the original)
        arg0->word_0 = u32(r1_1);
        S0_1 = std::bit_cast<float>(*gptr<u32>(r13));
        r13 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1;
        return;
    }
    r3_1 = r1_1 & 0x80000000u;  // (from the original)
    r2_1 = (r1_1 << 1 >> 0x18) - 0x7fu;  // (from the original)
    if (s32(r2_1) >= s32(0x17u)) {  // (from the original)
        arg0->word_0 = u32(r1_1);
        S0_4 = std::bit_cast<float>(r3_1);
        *gptr<u32>(r13) = u32(r3_1);
        r13 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_4;
        guest::cpu()->s[1] = S1;
        return;
    }
    if (r2_1 >> 0x1f != (r2_1 & (r2_1 ^ r2_1)) >> 0x1f) {  // (from the original)
        r1_2 = r1_1 & 0x80000000u;  // (from the original)
        arg0->word_0 = u32(r1_2);
        S0_2 = std::bit_cast<float>(*gptr<u32>(r13));
        r13 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1;
        return;
    }
    r2_2 = lsr_r(0x7fffffu, r2_1 & 0xff);  // (from the original)
    if ((r1_1 & r2_2) == 0) {
        arg0->word_0 = u32(r1_1);
        S0_4 = std::bit_cast<float>(r3_1);
        *gptr<u32>(r13) = u32(r3_1);
        r13 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_4;
        guest::cpu()->s[1] = S1;
        return;
    }
    r1_3 = r1_1 & ~r2_2;
    arg0->word_0 = u32(r1_3);
    S1_1 = std::bit_cast<float>(*gptr<u32>(r13));
    r13 = r13 + 0xcu;  // (from the original)
    S0_3 = S1_1 - std::bit_cast<float>(r1_3);
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_1;
    return;
}

}  // namespace d_0077ab5c
GUEST_EXPORT(0x0077ab5c, d_0077ab5c::f_0077ab5c);

// f_0077b6e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0077b6e8 {

inline guest::global<u32, 0x0077b6f8> global_0077b6f8;  // (from the original)

void f_0077b6e8() {
    float S0_1 = 0;
    float S1_1 = 0;
    double dset_0_1 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    S0_1 = std::bit_cast<float>(*global_0077b6f8);
    S1_1 = std::bit_cast<float>(*gptr<u32>(0x77b6f8u + 4));  // (from the original)
    dset_0_1 = D2F(S0_1, S1_1) * D2F(S0_1, S1_1);
    S0_2 = std::bit_cast<float>(u32(std::bit_cast<u64>(dset_0_1)));
    S1_2 = std::bit_cast<float>(u32(std::bit_cast<u64>(dset_0_1) >> 0x20u));  // (from the original)
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return;
}

}  // namespace d_0077b6e8
GUEST_EXPORT(0x0077b6e8, d_0077b6e8::f_0077b6e8);

// f_0077b700: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0077b700 {

inline guest::global<u32, 0x0077b70c> global_0077b70c;  // (from the original)

void f_0077b700() {
    float S0_1 = 0;
    float S0_2 = 0;
    S0_1 = std::bit_cast<float>(*global_0077b70c);
    S0_2 = S0_1 * S0_1;
    guest::cpu()->s[0] = S0_2;
    return;
}

}  // namespace d_0077b700
GUEST_EXPORT(0x0077b700, d_0077b700::f_0077b700);

// f_0077b854: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0077b854 {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)

u32 f_0077b854(u32 r0, u32 r1, u32 r2) {
    if (r2 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    return call_002f8574(r1, r0, r2, r1);
}

}  // namespace d_0077b854
GUEST_EXPORT(0x0077b854, d_0077b854::f_0077b854);

// f_0077f2ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0077f2ac {

inline guest::global<u32, 0x00974a7c> global_00974a7c;  // (from the original)
inline guest::global<u32, 0x00974a80> global_00974a80;  // (from the original)
inline constexpr guest::Function<0x0079fb70, u32(u32, u32, u32, u32)> call_0079fb70;  // (from the original)

u32 f_0077f2ac(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    u32 r0_4 = 0;
    u32 r1_5 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = *gptr<u32>(*gptr<u32>(0x97d470u + 8u));  // (from the original)
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r3_1 = *gptr<u32>(0x97d470u + 8u);  // (from the original)
    r1_1 = r3_1 + 0x1770u;  // (from the original)
    if (*gptr<u32>(r0_1 + 0xe38u) == 0x6051u) {  // (from the original)
        if (*gptr<u32>(r1_1) == 0x6051u) {  // (from the original)
            goto L_77f338;
        }
        r1_2 = *global_00974a7c;
        if (*global_00974a80 <= r1_2) {
            goto L_77f338;
        }
        *gptr<u32>(r1_2) = u32(0u);
        *gptr<u32>(r1_2 + 4) = u32(0xf0125u);  // (from the original)
        *global_00974a7c = u32(r1_2 + 8u);
        goto L_77f338;
    }
    r1_3 = *gptr<u32>(r1_1);
    if (r1_3 != 0x6051u) {  // (from the original)
        goto L_77f338;
    }
    r0_2 = u32(*gptr<u8>(r0_1 + 0xe74u));  // (from the original)
    if (r0_2 != 0) {
        call_0079fb70(r0_2, r1_3, 0x6051u, r3_1);  // (from the original)
    }
L_77f338:;
    r0_3 = *gptr<u32>(0x97d470u + 8u);  // (from the original)
    r1_4 = *gptr<u32>(r0_3);
    r0_4 = r0_3 + 0x1770u;  // (from the original)
    r1_5 = *gptr<u32>(r1_4 + 0xe38u);  // (from the original)
    *gptr<u32>(r0_4) = u32(r1_5);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_5;
    return r0_4;
}

}  // namespace d_0077f2ac
GUEST_EXPORT(0x0077f2ac, d_0077f2ac::f_0077f2ac);
