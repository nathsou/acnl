// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_002306c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002306c4 {

struct __attribute__((packed)) Object_002306c4_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_002306c4_0, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0095debc> global_0095debc;  // (from the original)
inline constexpr guest::Function<0x00312bd0, u32(u32, u32, u32, u32)> call_00312bd0;  // (from the original)
inline constexpr guest::Function<0x00312c4c, u32(u32, u32, u32, u32)> call_00312c4c;  // (from the original)
inline constexpr guest::Function<0x00312ca0, u32(u32, u32, u32, u32)> call_00312ca0;  // (from the original)
inline constexpr guest::Function<0x00312cb0, u32(u32, u32, u32, u32)> call_00312cb0;  // (from the original)

u32 f_002306c4(gptr<Object_002306c4_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 zf_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x60u;  // (from the original)
    r5_1 = *gptr<u32>(r13 + 0x60u);  // (from the original)
    r0_1 = arg0->word_4;
    if (r0_1 == 0) {
        goto L_230748;
    }
    r0_2 = *gptr<u32>(r0_1 + 0x354u);  // (from the original)
    zf_1 = r0_2 == 0;
    r0_3 = *global_0095debc;
    if (!zf_1) {
        zf_1 = r0_3 == 0;
    }
    if (zf_1) {
        goto L_230748;
    }
    r0_4 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_00312bd0(r0_4, r1, r2, r3);
    *gptr<u32>(r13) = u32(4u);
    r0_5 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_00312c4c(r0_5, r1, r3, r5_1);
    r3_1 = guest::cpu()->r[3];
    r1_1 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_00312ca0(r0_2, r1_1, r2, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_6 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_00312cb0(r0_6, r1_2, r2_1, r3_2);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return 1u;
L_230748:;
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_002306c4
GUEST_EXPORT(0x002306c4, d_002306c4::f_002306c4);

// f_00231ad4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00231ad4 {

struct __attribute__((packed)) Object_00231ad4_1 {
    u8 unknown_0[0xf0];  // (not used here)
    u32 word_f0;
};
GUEST_OFFSET(Object_00231ad4_1, word_f0, 0xf0);  // (from the original)

inline guest::global<u32, 0x0094f3bc> global_0094f3bc;  // (from the original)
inline constexpr guest::Function<0x0018fb98, u32(u32, u32, u32, u32)> call_0018fb98;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)

u32 f_00231ad4(u32 r0, gptr<Object_00231ad4_1> arg1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r6_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r6_1 = arg1->word_f0;
    r0_1 = r0 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fc8e8(r0_1, r2, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u8>(r0 + 0x20u) = u8(r3);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_00305f44(r0_2, r1_1, r2_1, r3_1);
    *gptr<u32>(r13) = u32(r3);
    r0_4 = *global_0094f3bc;
    guest::cpu()->r[13] = r13;
    r0_5 = call_0018fb98(r0_4, r0_3, r6_1, r2);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_5;
}

}  // namespace d_00231ad4
GUEST_EXPORT(0x00231ad4, d_00231ad4::f_00231ad4);

// f_00236ca4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00236ca4 {

struct __attribute__((packed)) Object_00236ca4_0 {
    u8 unknown_0[0x1fc];  // (not used here)
    u32 word_1fc;
    u32 word_200;
};
GUEST_OFFSET(Object_00236ca4_0, word_1fc, 0x1fc);  // (from the original)
GUEST_OFFSET(Object_00236ca4_0, word_200, 0x200);  // (from the original)

inline guest::global<u32, 0x008812e4> global_008812e4;  // (from the original)

u32 f_00236ca4(gptr<Object_00236ca4_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r12_1 = 0;
    u32 ea_1 = 0;
    u32 r0_2 = 0;
    u32 ea_2 = 0;
    u32 zf_1 = 0;
    u32 r0_3 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r3_1 = arg0->word_1fc;
    if (r3_1 == 0) {
        r0_1 = arg0->word_200;
        if ((r0_1 & 1u) == 0) {
            r13 = r13 + 0x10;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0_1;
        }
        if (r0_1 == 0) {
            r13 = r13 + 0x10;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0_1;
        }
    }
    r2_1 = *global_008812e4;
    r12_1 = *gptr<u32>(0x8812e4u + 4);  // (from the original)
    ea_1 = r0 + 0x200u;  // (from the original)
    r0_2 = *gptr<u32>(ea_1);
    ea_2 = r0 + 0x1fcu;  // (from the original)
    *gptr<u32>(ea_2) = u32(r2_1);
    *gptr<u32>(ea_2 + 4) = u32(r12_1);
    zf_1 = (r0_2 & 1u) == 0;
    r0_3 = r0 + u32(s32(r0_2) >> 1);
    if (!zf_1) {
        r3_1 = *gptr<u32>(*gptr<u32>(r0_3) + r3_1);
    }
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    return guest::call_address<u32>(r3_1, r0_3, r1, r2, r3_1);
}

}  // namespace d_00236ca4
GUEST_EXPORT(0x00236ca4, d_00236ca4::f_00236ca4);

// f_00236d18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00236d18 {

struct __attribute__((packed)) Object_00236d18_0 {
    u8 unknown_0[0x226];  // (not used here)
    u8 byte_226;
};
GUEST_OFFSET(Object_00236d18_0, byte_226, 0x226);  // (from the original)

inline constexpr guest::Function<0x0023a440, u32(u32, u32, u32, u32)> call_0023a440;  // (from the original)
inline constexpr guest::Function<0x006eb990, u32(u32, u32, u32, u32)> call_006eb990;  // (from the original)
inline constexpr guest::Function<0x00813b30, u32(u32, u32, u32, u32)> call_00813b30;  // (from the original)

u32 f_00236d18(gptr<Object_00236d18_0> arg0, u32 r1, u32 r2, float S0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r0_2 = 0;
    u32 zf_1 = 0;
    u32 r0_3 = 0;
    float S0_1 = 0;
    u32 r0_4 = 0;
    float S0_2 = 0;
    u32 r0_5 = 0;
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    res_1 = u32(arg0->byte_226) << 0x1d >> 0x1f;  // (from the original)
    if (res_1 == 0) {
        goto L_236d78;
    }
    r0_1 = r4 + 0x224u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00813b30(r0_1, 0x12u, 0u, guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
L_236d40:;
    ea_1 = r4 + 0x228u;  // (from the original)
    r6 = *gptr<u32>(ea_1);
    r7 = *gptr<u32>(ea_1 + 4);
    if (r6 == r7) {
        goto L_236e08;
    } else {
        r8 = 0x88069cu;  // (from the original)
    }
L_236d54:;
    ea_2 = *gptr<u32>(r6) + 0xf4u;  // (from the original)
    r0_2 = *gptr<u32>(*gptr<u32>(ea_2) + 0xf0u);  // (from the original)
    r1 = u32(*gptr<u8>(r0_2 + 0xa8u));  // (from the original)
    zf_1 = r1 == 0xcu;  // (from the original)
    if (zf_1) {
        r1 = u32(*gptr<u8>(r0_2 + 0x554u));  // (from the original)
        zf_1 = r1 == 0;
    }
    if (!zf_1) {
        goto L_236da0;
    }
    goto L_236d8c;
L_236d78:;
    r0_3 = r4 + 0xf4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0023a440(r0_3, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    guest::preempt();
    goto L_236d40;
L_236d8c:;
    S0_1 = std::bit_cast<float>(*gptr<u32>(r8));
    r0_4 = r0_2 + 0x78u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    call_006eb990(r0_4, 0u, 0u, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
L_236da0:;
    r0 = *gptr<u32>(ea_2) + 0x228u;  // (from the original)
    r4 = *gptr<u32>(r0);
    r5 = *gptr<u32>(r0 + 4);
    if (r4 == r5) {
        goto L_236dfc;
    }
L_236db4:;
    r0 = *gptr<u32>(r4);
    if (r0 == 0) {
        goto L_236df0;
    }
    r0 = *gptr<u32>(r0 + 0xf0u);  // (from the original)
    r1 = u32(*gptr<u8>(r0 + 0xa8u));  // (from the original)
    if (r1 != 0xcu) {  // (from the original)
        goto L_236df0;
    }
    r1 = u32(*gptr<u8>(r0 + 0x554u));  // (from the original)
    if (r1 != 0) {
        goto L_236df0;
    }
    S0_2 = std::bit_cast<float>(*gptr<u32>(r8));
    r0_5 = r0 + 0x78u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    r0 = call_006eb990(r0_5, 0u, 0u, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
L_236df0:;
    r4 = r4 + 4u;
    if (r4 != r5) {
        guest::preempt();
        goto L_236db4;
    }
L_236dfc:;
    r6 = r6 + 4u;
    if (r6 != r7) {
        guest::preempt();
        goto L_236d54;
    }
L_236e08:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_00236d18
GUEST_EXPORT(0x00236d18, d_00236d18::f_00236d18);

// f_00236f78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00236f78 {

struct __attribute__((packed)) Object_00236f78_0 {
    u8 unknown_0[0x220];  // (not used here)
    u16 half_220;
};
GUEST_OFFSET(Object_00236f78_0, half_220, 0x220);  // (from the original)

inline constexpr guest::Function<0x002bfadc, u32(u32, u32, u32, u32)> call_002bfadc;  // (from the original)
inline constexpr guest::Function<0x002bfcfc, u32(u32, u32, u32, u32)> call_002bfcfc;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fd068, u32(u32, u32, u32, u32)> call_002fd068;  // (from the original)
inline constexpr guest::Function<0x006b7380, u32(u32, u32, u32, u32)> call_006b7380;  // (from the original)
inline constexpr guest::Function<0x006b8918, u32(u32, u32, u32, u32)> call_006b8918;  // (from the original)

u32 f_00236f78(gptr<Object_00236f78_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r6 = guest::cpu()->r[6];
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 vf_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r0_5 = 0;
    u32 r6_1 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_2 = 0;
    u32 r0_8 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5_1 = r0 + 0x200u;  // (from the original)
    r0_1 = u32(arg0->half_220);
    if (r0_1 != 1u) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r0_2 = call_002fb94c(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    nf_1 = r0_2 >> 0x1f;  // (from the original)
    zf_1 = r0_2 == 0;
    vf_1 = 0u;
    if (!zf_1) {
        r6 = *gptr<u32>(r0 + 0x21cu);  // (from the original)
        nf_1 = r6 >> 0x1f;  // (from the original)
        zf_1 = r6 == 0;
        vf_1 = 0u;
    }
    if (zf_1) {
        goto L_236ff4;
    }
    if (!zf_1 && nf_1 == vf_1) {
        r0_3 = r0_2 + 0x6bd0u;  // (from the original)
        r0_4 = call_002bfadc(r0_3, r6, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        r0_5 = call_002fd068(r0_4, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        call_006b7380(r0_5, r6, guest::cpu()->r[2], guest::cpu()->r[3]);
        goto L_236ff4;
    }
    r6_1 = 0u - r6;
    r0_6 = r0_2 + 0x6bd0u;  // (from the original)
    r0_7 = call_002bfcfc(r0_6, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_8 = call_002fd068(r0_7, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_006b8918(r0_8, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
L_236ff4:;
    r1 = 0u;
    r0_1 = 2u;
    *gptr<u32>(r0 + 0x21cu) = u32(r1);  // (from the original)
    *gptr<u16>(r5_1 + 0x20u) = u16(r0_1);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00236f78
GUEST_EXPORT(0x00236f78, d_00236f78::f_00236f78);

// f_00237008: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00237008 {

struct __attribute__((packed)) Object_00237008_0 {
    u8 unknown_0[0x214];  // (not used here)
    u32 word_214;
    u8 unknown_218[0x10];  // (not used here)
    u32 word_228;
    u32 word_22c;
};
GUEST_OFFSET(Object_00237008_0, word_214, 0x214);  // (from the original)
GUEST_OFFSET(Object_00237008_0, word_228, 0x228);  // (from the original)
GUEST_OFFSET(Object_00237008_0, word_22c, 0x22c);  // (from the original)


u32 f_00237008(gptr<Object_00237008_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 ea_2 = 0;
    ea_1 = r0 + 0x214u;  // (from the original)
    arg0->word_214 = u32(r1);
    r0_1 = ea_1 + 0x14u;  // (from the original)
    r1 = arg0->word_228;
    r2 = arg0->word_22c;
    if (r1 == r2) {
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    do {
L_23701c:;
        r0_2 = *gptr<u32>(*gptr<u32>(r1) + 0xf0u);  // (from the original)
        if (!(r0_2 == 0)) {
            ea_2 = r0_2 + 0xb06u;  // (from the original)
            r0_2 = ea_2;
            *gptr<u8>(r0_2) = u8(u32(*gptr<u8>(ea_2)) | 0x80u);  // (from the original)
        }
        r1 = r1 + 4u;
        guest::preempt();
    } while (r1 != r2);
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_00237008
GUEST_EXPORT(0x00237008, d_00237008::f_00237008);

// f_00237a1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00237a1c {

struct __attribute__((packed)) Object_00237a1c_0 {
    u8 unknown_0[0x220];  // (not used here)
    u16 half_220;
};
GUEST_OFFSET(Object_00237a1c_0, half_220, 0x220);  // (from the original)

inline constexpr guest::Function<0x002bfadc, u32(u32, u32, u32, u32)> call_002bfadc;  // (from the original)
inline constexpr guest::Function<0x002bfcfc, u32(u32, u32, u32, u32)> call_002bfcfc;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fd068, u32(u32, u32, u32, u32)> call_002fd068;  // (from the original)
inline constexpr guest::Function<0x006b7380, u32(u32, u32, u32, u32)> call_006b7380;  // (from the original)
inline constexpr guest::Function<0x006b8918, u32(u32, u32, u32, u32)> call_006b8918;  // (from the original)

u32 f_00237a1c(gptr<Object_00237a1c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r6 = guest::cpu()->r[6];
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 vf_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r0_5 = 0;
    u32 r6_1 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_2 = 0;
    u32 r0_8 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5_1 = r0 + 0x200u;  // (from the original)
    r0_1 = u32(arg0->half_220);
    if (r0_1 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r0_2 = call_002fb94c(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    nf_1 = r0_2 >> 0x1f;  // (from the original)
    zf_1 = r0_2 == 0;
    vf_1 = 0u;
    if (!zf_1) {
        r6 = *gptr<u32>(r0 + 0x21cu);  // (from the original)
        nf_1 = r6 >> 0x1f;  // (from the original)
        zf_1 = r6 == 0;
        vf_1 = 0u;
    }
    if (zf_1) {
        goto L_237a98;
    }
    if (!zf_1 && nf_1 == vf_1) {
        r0_3 = r0_2 + 0x6bd0u;  // (from the original)
        r0_4 = call_002bfadc(r0_3, r6, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        r0_5 = call_002fd068(r0_4, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        call_006b7380(r0_5, r6, guest::cpu()->r[2], guest::cpu()->r[3]);
        goto L_237a98;
    }
    r6_1 = 0u - r6;
    r0_6 = r0_2 + 0x6bd0u;  // (from the original)
    r0_7 = call_002bfcfc(r0_6, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_8 = call_002fd068(r0_7, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_006b8918(r0_8, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
L_237a98:;
    r1 = 0u;
    r0_1 = 2u;
    *gptr<u32>(r0 + 0x21cu) = u32(r1);  // (from the original)
    *gptr<u16>(r5_1 + 0x20u) = u16(r0_1);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00237a1c
GUEST_EXPORT(0x00237a1c, d_00237a1c::f_00237a1c);

// f_00237d58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00237d58 {

struct __attribute__((packed)) Object_00237d58_0 {
    u8 unknown_0[0x20f];  // (not used here)
    u8 byte_20f;
};
GUEST_OFFSET(Object_00237d58_0, byte_20f, 0x20f);  // (from the original)

inline constexpr guest::Function<0x0013cd00, u32(u32, u32, u32, u32)> call_0013cd00;  // (from the original)

u32 f_00237d58(gptr<Object_00237d58_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    if (u32(arg0->byte_20f) != 0) {
        r0_1 = 0u;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return r0_1;
    }
    arg0->byte_20f = u8(1u);
    r2_1 = ~0u;
    r0_2 = r0 + 0x180u;  // (from the original)
    call_0013cd00(r0_2, guest::cpu()->r[1], r2_1, guest::cpu()->r[3]);
    r0_1 = 1u;
    *gptr<u32>(r0 + 0x1acu) = u32(r2);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0_1;
}

}  // namespace d_00237d58
GUEST_EXPORT(0x00237d58, d_00237d58::f_00237d58);

// f_00237dd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00237dd0 {

struct __attribute__((packed)) Object_00237dd0_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00237dd0_0, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0095debc> global_0095debc;  // (from the original)
inline constexpr guest::Function<0x0056d5dc, u32(u32, u32, u32, u32)> call_0056d5dc;  // (from the original)
inline constexpr guest::Function<0x005f1344, u32(u32, u32, u32, u32)> call_005f1344;  // (from the original)

u32 f_00237dd0(gptr<Object_00237dd0_0> arg0, u32 r1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 zf_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0xa8u;  // (from the original)
    r0_1 = arg0->word_4;
    if (r0_1 == 0) {
        r13 = r13 + 0xa8u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_2 = *gptr<u32>(r0_1 + 0x354u);  // (from the original)
    zf_1 = r0_2 == 0;
    r0_3 = *global_0095debc;
    if (!zf_1) {
        zf_1 = r0_3 == 0;
    }
    if (zf_1) {
        r13 = r13 + 0xa8u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_4 = r13;
    guest::cpu()->r[13] = r13;
    call_0056d5dc(r0_4, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = r13;
    guest::cpu()->r[13] = r13;
    call_005f1344(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 0x70u) = u32(0x90a3e8u);  // (from the original)
    *gptr<u32>(r13 + 0x44u) = u32(0x90a3e8u);  // (from the original)
    *gptr<u32>(r13) = u32(0x909d20u);  // (from the original)
    r13 = r13 + 0xa8u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_00237dd0
GUEST_EXPORT(0x00237dd0, d_00237dd0::f_00237dd0);

// f_002383c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002383c0 {

struct __attribute__((packed)) Object_002383c0_0 {
    u8 unknown_0[0xe0];  // (not used here)
    u32 word_e0;
    u8 unknown_e4[0x168];  // (not used here)
    u32 word_24c;
};
GUEST_OFFSET(Object_002383c0_0, word_e0, 0xe0);  // (from the original)
GUEST_OFFSET(Object_002383c0_0, word_24c, 0x24c);  // (from the original)

inline constexpr guest::Function<0x00236644, u32(u32, u32, u32, u32)> call_00236644;  // (from the original)

u32 f_002383c0(gptr<Object_002383c0_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    u32 r12_1 = 0;
    u32 r4_1 = 0;
    u32 r4_2 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 zf_1 = 0;
    u32 r3_2 = 0;
    u32 r3_3 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r12_1 = arg0->word_24c;
    r4_1 = r13 + 0x18u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r4_1));
    S1 = std::bit_cast<float>(*gptr<u32>(r4_1 + 4));
    if (r12_1 == 0) {
        r4_2 = arg0->word_e0;
    } else {
        r4_2 = *gptr<u32>(r12_1 + 0xe0u);  // (from the original)
    }
    if (r4_2 == 0) {
        goto L_238404;
    }
L_2383e8:;
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r13 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r13 + 8u) = u32(1u);
    r3_1 = r0 + 0x168u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_1 = call_00236644(r0, guest::cpu()->r[1], guest::cpu()->r[2], r3_1);
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r0_1;
L_238404:;
    *gptr<u32>(r0 + 0x16cu) = u32(r3);  // (from the original)
    *gptr<u32>(r0 + 0x17cu) = u32(0u);  // (from the original)
    zf_1 = r12_1 == 0;
    *gptr<u32>(r0 + 0x170u) = u32(r0);  // (from the original)
    if (zf_1) {
        r3_2 = *gptr<u32>(r0 + 0xe0u);  // (from the original)
    } else {
        r3_2 = *gptr<u32>(r12_1 + 0xe0u);  // (from the original)
    }
    r3_3 = r3_2 + 1u;
    if (zf_1) {
        *gptr<u32>(r0 + 0xe0u) = u32(r3_3);  // (from the original)
    } else {
        *gptr<u32>(r12_1 + 0xe0u) = u32(r3_3);  // (from the original)
    }
    guest::preempt();
    goto L_2383e8;
}

}  // namespace d_002383c0
GUEST_EXPORT(0x002383c0, d_002383c0::f_002383c0);

// f_002389f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002389f8 {

inline guest::global<u32, 0x0095debc> global_0095debc;  // (from the original)
inline constexpr guest::Function<0x005f12b4, u32(u32, u32, u32, u32)> call_005f12b4;  // (from the original)
inline constexpr guest::Function<0x005fcfd8, u32(u32, u32, u32, u32)> call_005fcfd8;  // (from the original)
inline constexpr guest::Function<0x0075be20, u32(u32, u32, u32, u32)> call_0075be20;  // (from the original)

u32 f_002389f8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 zf_1 = 0;
    u32 r5_1 = 0;
    u32 r0_4 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    if (r1 == 0) {
        r0_1 = 1u;
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    if (r1 >= 0xbu) {  // (from the original)
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_2 = *gptr<u32>(r0 + 4u);
    if (r0_2 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_3 = *gptr<u32>(r0_2 + 0x354u);  // (from the original)
    zf_1 = r0_3 == 0;
    r5_1 = *global_0095debc;
    if (!zf_1) {
        zf_1 = r5_1 == 0;
    }
    if (zf_1) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_4 = r13;
    guest::cpu()->r[13] = r13;
    call_005fcfd8(r0_4, r1, r2, r3);
    r3_1 = r1 - 1u;
    r1_1 = r13;
    guest::cpu()->r[13] = r13;
    call_0075be20(r5_1, r1_1, 0x238a84u, r3_1);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r1_2 = r13;
    guest::cpu()->r[13] = r13;
    call_005f12b4(r0_3, r1_2, r2_1, r3_2);
    r1 = guest::cpu()->r[1];
    r0_1 = 1u;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_002389f8
GUEST_EXPORT(0x002389f8, d_002389f8::f_002389f8);

// f_00238e10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00238e10 {

struct __attribute__((packed)) Object_00238e10_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00238e10_0, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0095debc> global_0095debc;  // (from the original)
inline constexpr guest::Function<0x005ca3b0, u32(u32, u32, u32, u32)> call_005ca3b0;  // (from the original)
inline constexpr guest::Function<0x005f12e4, u32(u32, u32, u32, u32)> call_005f12e4;  // (from the original)
inline constexpr guest::Function<0x005fcfd8, u32(u32, u32, u32, u32)> call_005fcfd8;  // (from the original)
inline constexpr guest::Function<0x0075c400, u32(u32, u32, u32, u32)> call_0075c400;  // (from the original)

u32 f_00238e10(gptr<Object_00238e10_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 zf_1 = 0;
    u32 r4_1 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r3_2 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r0_1 = arg0->word_4;
    if (r0_1 == 0) {
        goto L_238e8c;
    }
    r0_2 = *gptr<u32>(r0_1 + 0x354u);  // (from the original)
    zf_1 = r0_2 == 0;
    r4_1 = *global_0095debc;
    if (!zf_1) {
        zf_1 = r4_1 == 0;
    }
    if (zf_1) {
        goto L_238e8c;
    }
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    call_005fcfd8(r0_3, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_4 = call_005ca3b0(r1, r1_1, r2_1, r3_1);
    r1_2 = r13;
    guest::cpu()->r[13] = r13;
    call_0075c400(r4_1, r1_2, 0x238e9cu, r0_4);  // (from the original)
    r3_2 = guest::cpu()->r[3];
    r1_3 = r13;
    guest::cpu()->r[13] = r13;
    call_005f12e4(r0_2, r1_3, r2, r3_2);
    r1_4 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return 1u;
L_238e8c:;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_00238e10
GUEST_EXPORT(0x00238e10, d_00238e10::f_00238e10);

// f_00238eac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00238eac {

inline guest::global<u32, 0x00a83af0> global_00a83af0;  // (from the original)
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x0056d874, u32(u32, u32, u32, u32)> call_0056d874;  // (from the original)
inline constexpr guest::Function<0x005f1294, u32(u32, u32, u32, u32)> call_005f1294;  // (from the original)
inline constexpr guest::Function<0x0081e8d0, u32(u32, u32, u32, u32)> call_0081e8d0;  // (from the original)

u32 f_00238eac(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 res_1 = 0;
    u32 r0_5 = 0;
    u32 r5_1 = 0;
    u32 r0_6 = 0;
    u32 r2_2 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00301e20(r1, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_1 != 0) {
        r1_2 = u32(*gptr<u16>(r1 + 0x2cu));  // (from the original)
        *gptr<u16>(r13 + 0x2cu) = u16(r1_2);  // (from the original)
        r0_2 = *gptr<u32>(r0 + 4u);
        if (r0_2 == 0) {
            r13 = r13 + 0x40u;  // (from the original)
            guest::cpu()->r[1] = r1_2;
            guest::cpu()->r[13] = r13;
            return 0u;
        }
        r0_3 = *gptr<u32>(r0_2 + 0x354u);  // (from the original)
        if (r0_3 == 0) {
            r13 = r13 + 0x40u;  // (from the original)
            guest::cpu()->r[1] = r1_2;
            guest::cpu()->r[13] = r13;
            return 0u;
        }
        r0_4 = u32(*gptr<u16>(r13 + 0x2cu));  // (from the original)
        r1_2 = *global_00a83af0;
        zf_1 = r1_2 == 0;
        cf_1 = r1_2 >= 0u;
        if (!zf_1) {
            r2_1 = 0x18fu;  // (from the original)
            zf_1 = r2_1 == r0_4;
            cf_1 = r2_1 >= r0_4;
        }
        if (!cf_1 || zf_1) {
            r13 = r13 + 0x40u;  // (from the original)
            guest::cpu()->r[1] = r1_2;
            guest::cpu()->r[13] = r13;
            return 0u;
        }
        res_1 = r1_2 + (r0_4 + (r0_4 << 4) << 1);
        if (res_1 == 0) {
            r13 = r13 + 0x40u;  // (from the original)
            guest::cpu()->r[1] = r1_2;
            guest::cpu()->r[13] = r13;
            return 0u;
        }
        r0_5 = r13;
        r5_1 = r13 + 0x2cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_6 = call_0081e8d0(r0_5, r1_2, r2_1, guest::cpu()->r[3]);
        r2_2 = guest::cpu()->r[2];
        guest::cpu()->r[13] = r13;
        call_0056d874(r0_6, r5_1, r2_2, guest::cpu()->r[3]);
        r1_3 = r13;
        guest::cpu()->r[13] = r13;
        call_005f1294(r0_3, r1_3, r2, guest::cpu()->r[3]);
        r1_1 = 0x90a3e8u;  // (from the original)
        *gptr<u32>(r13) = u32(r1_1);
        r0_1 = 1u;
    }
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_00238eac
GUEST_EXPORT(0x00238eac, d_00238eac::f_00238eac);

// f_00238f7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00238f7c {

struct __attribute__((packed)) Object_00238f7c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00238f7c_0, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0095debc> global_0095debc;  // (from the original)
inline constexpr guest::Function<0x005ca3c8, u32(u32, u32, u32, u32)> call_005ca3c8;  // (from the original)
inline constexpr guest::Function<0x005f12e4, u32(u32, u32, u32, u32)> call_005f12e4;  // (from the original)
inline constexpr guest::Function<0x005fcfd8, u32(u32, u32, u32, u32)> call_005fcfd8;  // (from the original)
inline constexpr guest::Function<0x0075c400, u32(u32, u32, u32, u32)> call_0075c400;  // (from the original)

u32 f_00238f7c(gptr<Object_00238f7c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 zf_1 = 0;
    u32 r4_1 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r3_2 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r0_1 = arg0->word_4;
    if (r0_1 == 0) {
        goto L_238ff8;
    }
    r0_2 = *gptr<u32>(r0_1 + 0x354u);  // (from the original)
    zf_1 = r0_2 == 0;
    r4_1 = *global_0095debc;
    if (!zf_1) {
        zf_1 = r4_1 == 0;
    }
    if (zf_1) {
        goto L_238ff8;
    }
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    call_005fcfd8(r0_3, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_4 = call_005ca3c8(r1, r1_1, r2_1, r3_1);
    r1_2 = r13;
    guest::cpu()->r[13] = r13;
    call_0075c400(r4_1, r1_2, 0x239008u, r0_4);  // (from the original)
    r3_2 = guest::cpu()->r[3];
    r1_3 = r13;
    guest::cpu()->r[13] = r13;
    call_005f12e4(r0_2, r1_3, r2, r3_2);
    r1_4 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return 1u;
L_238ff8:;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_00238f7c
GUEST_EXPORT(0x00238f7c, d_00238f7c::f_00238f7c);

// f_002390f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002390f8 {

struct __attribute__((packed)) Object_002390f8_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_002390f8_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002fe7f4, u32(u32, u32, u32, u32)> call_002fe7f4;  // (from the original)
inline constexpr guest::Function<0x002fe874, u32(u32, u32, u32, u32)> call_002fe874;  // (from the original)

u32 f_002390f8(gptr<Object_002390f8_0> arg0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    r13 = r13 - 0x70u;  // (from the original)
    r0_1 = arg0->word_4;
    if (r0_1 == 0) {
        r13 = r13 + 0x70u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_2 = *gptr<u32>(r0_1 + 0x354u);  // (from the original)
    if (r0_2 == 0) {
        r13 = r13 + 0x70u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    r0_4 = call_002fe7f4(r0_3, r1, 0u, guest::cpu()->r[3]);
    guest::cpu()->r[13] = r13;
    call_002fe874(r0_2, r0_4, r2, guest::cpu()->r[3]);
    *gptr<u32>(r13) = u32(0x909f18u);  // (from the original)
    r13 = r13 + 0x70u;  // (from the original)
    guest::cpu()->r[1] = 0x909f18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_002390f8
GUEST_EXPORT(0x002390f8, d_002390f8::f_002390f8);

// f_00239174: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00239174 {

inline guest::global<u32, 0x00a83af0> global_00a83af0;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x003009a9, u32(u32, u32, u32, u32)> call_003009a8;  // (from the original)
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x0056d874, u32(u32, u32, u32, u32)> call_0056d874;  // (from the original)
inline constexpr guest::Function<0x005f1294, u32(u32, u32, u32, u32)> call_005f1294;  // (from the original)
inline constexpr guest::Function<0x0081e8d0, u32(u32, u32, u32, u32)> call_0081e8d0;  // (from the original)

u32 f_00239174(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r4_1 = 0;
    u32 r2_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 res_1 = 0;
    u32 r0_7 = 0;
    u32 r5_1 = 0;
    u32 r0_8 = 0;
    u32 r2_4 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb328(r0, r1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    r0_2 = r0_1 + 0x292a4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_003009a8(r0_2, r1, r2_1, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    if (r0_3 == 0) {
        r13 = r13 + 0x40u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_3;
    }
    r4_1 = r0_3;
    guest::cpu()->r[13] = r13;
    r0_3 = call_00301e20(r0_3, r1_1, r2_2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    if (r0_3 == 0) {
        r13 = r13 + 0x40u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_3;
    }
    r1_2 = u32(*gptr<u16>(r4_1 + 0x2cu));  // (from the original)
    *gptr<u16>(r13 + 0x2cu) = u16(r1_2);  // (from the original)
    r0_4 = *gptr<u32>(r0 + 4u);
    if (r0_4 == 0) {
        r13 = r13 + 0x40u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_5 = *gptr<u32>(r0_4 + 0x354u);  // (from the original)
    if (r0_5 == 0) {
        r13 = r13 + 0x40u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_6 = u32(*gptr<u16>(r13 + 0x2cu));  // (from the original)
    r1_2 = *global_00a83af0;
    zf_1 = r1_2 == 0;
    cf_1 = r1_2 >= 0u;
    if (!zf_1) {
        r2_3 = 0x18fu;  // (from the original)
        zf_1 = r2_3 == r0_6;
        cf_1 = r2_3 >= r0_6;
    }
    if (!cf_1 || zf_1) {
        r13 = r13 + 0x40u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    res_1 = r1_2 + (r0_6 + (r0_6 << 4) << 1);
    if (res_1 == 0) {
        r13 = r13 + 0x40u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_7 = r13;
    r5_1 = r13 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_0081e8d0(r0_7, r1_2, r2_3, guest::cpu()->r[3]);
    r2_4 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    call_0056d874(r0_8, r5_1, r2_4, guest::cpu()->r[3]);
    r1_3 = r13;
    guest::cpu()->r[13] = r13;
    call_005f1294(r0_5, r1_3, r2, guest::cpu()->r[3]);
    r1_1 = 0x90a3e8u;  // (from the original)
    *gptr<u32>(r13) = u32(r1_1);
    r0_3 = 1u;
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_00239174
GUEST_EXPORT(0x00239174, d_00239174::f_00239174);

// f_00239260: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00239260 {

struct __attribute__((packed)) Object_00239260_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00239260_0, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x00a83af0> global_00a83af0;  // (from the original)
inline constexpr guest::Function<0x0056d874, u32(u32, u32, u32, u32)> call_0056d874;  // (from the original)
inline constexpr guest::Function<0x005f1294, u32(u32, u32, u32, u32)> call_005f1294;  // (from the original)
inline constexpr guest::Function<0x0081e8d0, u32(u32, u32, u32, u32)> call_0081e8d0;  // (from the original)

u32 f_00239260(gptr<Object_00239260_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r6_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 res_1 = 0;
    u32 r0_4 = 0;
    u32 r5_1 = 0;
    u32 r0_5 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_2 = 0;
    u32 r6_2 = 0;
    u32 ea_3 = 0;
    u32 r4_2 = 0;
    u32 r5_3 = 0;
    u32 r6_3 = 0;
    ea_1 = r13 - 0x1c;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r4);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r14);  // (from the original)
    r13 = r13 - 0x48u;  // (from the original)
    r6_1 = r2;
    r0_1 = arg0->word_4;
    if (r0_1 == 0) {
        goto L_2392f4;
    }
    r0_2 = *gptr<u32>(r0_1 + 0x354u);  // (from the original)
    if (r0_2 == 0) {
        goto L_2392f4;
    }
    r0_3 = u32(*gptr<u16>(r13 + 0x30u));  // (from the original)
    r1 = *global_00a83af0;
    zf_1 = r1 == 0;
    cf_1 = r1 >= 0u;
    if (!zf_1) {
        r2 = 0x18fu;  // (from the original)
        zf_1 = r2 == r0_3;
        cf_1 = r2 >= r0_3;
    }
    if (!cf_1 || zf_1) {
        goto L_2392f4;
    }
    res_1 = r1 + (r0_3 + (r0_3 << 4) << 1);
    if (res_1 == 0) {
        goto L_2392f4;
    }
    r0_4 = r13;
    r5_1 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_0081e8d0(r0_4, r1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    call_0056d874(r0_5, r5_1, r2_1, guest::cpu()->r[3]);
    r1_1 = r13;
    guest::cpu()->r[13] = r13;
    call_005f1294(r0_2, r1_1, r6_1, guest::cpu()->r[3]);
    *gptr<u32>(r13) = u32(0x90a3e8u);  // (from the original)
    r13 = r13 + 0x38u;  // (from the original)
    ea_2 = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_2 = *gptr<u32>(ea_2 + 4);
    r6_2 = *gptr<u32>(ea_2 + 8);
    guest::cpu()->r[1] = 0x90a3e8u;  // (from the original)
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[13] = r13;
    return 1u;
L_2392f4:;
    r13 = r13 + 0x38u;  // (from the original)
    ea_3 = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4_2 = *gptr<u32>(ea_3);
    r5_3 = *gptr<u32>(ea_3 + 4);
    r6_3 = *gptr<u32>(ea_3 + 8);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_3;
    guest::cpu()->r[6] = r6_3;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_00239260
GUEST_EXPORT(0x00239260, d_00239260::f_00239260);

// f_0023930c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023930c {

struct __attribute__((packed)) Object_0023930c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0023930c_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0056e04c, u32(u32, u32, u32, u32)> call_0056e04c;  // (from the original)
inline constexpr guest::Function<0x005f12f4, u32(u32, u32, u32, u32)> call_005f12f4;  // (from the original)
inline constexpr guest::Function<0x0081e8d0, u32(u32, u32, u32, u32)> call_0081e8d0;  // (from the original)

u32 f_0023930c(gptr<Object_0023930c_0> arg0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    r13 = r13 - 0x40u;  // (from the original)
    r0_1 = arg0->word_4;
    if (r0_1 == 0) {
        r13 = r13 + 0x40u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_2 = *gptr<u32>(r0_1 + 0x354u);  // (from the original)
    if (r0_2 == 0) {
        r13 = r13 + 0x40u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    r0_4 = call_0081e8d0(r0_3, r1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    call_0056e04c(r0_4, r1, r2_1, guest::cpu()->r[3]);
    r1_1 = r13;
    guest::cpu()->r[13] = r13;
    call_005f12f4(r0_2, r1_1, r2, guest::cpu()->r[3]);
    *gptr<u32>(r13) = u32(0x90a3e8u);  // (from the original)
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = 0x90a3e8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_0023930c
GUEST_EXPORT(0x0023930c, d_0023930c::f_0023930c);

// f_00239738: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00239738 {

struct __attribute__((packed)) Object_00239738_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00239738_0, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0095debc> global_0095debc;  // (from the original)
inline constexpr guest::Function<0x005f1324, u32(u32, u32, u32, u32)> call_005f1324;  // (from the original)
inline constexpr guest::Function<0x005fcfd8, u32(u32, u32, u32, u32)> call_005fcfd8;  // (from the original)
inline constexpr guest::Function<0x0075be20, u32(u32, u32, u32, u32)> call_0075be20;  // (from the original)

u32 f_00239738(gptr<Object_00239738_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 zf_1 = 0;
    u32 r4_1 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r0_1 = arg0->word_4;
    if (r0_1 == 0) {
        goto L_2397bc;
    }
    r0_2 = *gptr<u32>(r0_1 + 0x354u);  // (from the original)
    zf_1 = r0_2 == 0;
    r4_1 = *global_0095debc;
    if (!zf_1) {
        zf_1 = r4_1 == 0;
    }
    if (zf_1) {
        goto L_2397bc;
    }
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    call_005fcfd8(r0_3, r1, r2, r3);
    r1_1 = r13;
    if ((u32(*gptr<u8>(r1 + 0x14u)) & 1u) == 0) {  // (from the original)
        r2_1 = 0x2397ccu;  // (from the original)
    } else {
        r2_1 = 0x2397dcu;  // (from the original)
    }
    guest::cpu()->r[13] = r13;
    call_0075be20(r4_1, r1_1, r2_1, r2);
    r3_1 = guest::cpu()->r[3];
    r1_2 = r13;
    guest::cpu()->r[13] = r13;
    call_005f1324(r0_2, r1_2, r3, r3_1);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return 1u;
L_2397bc:;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_00239738
GUEST_EXPORT(0x00239738, d_00239738::f_00239738);

// f_002397ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002397ec {

struct __attribute__((packed)) Object_002397ec_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_002397ec_0, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0095debc> global_0095debc;  // (from the original)
inline constexpr guest::Function<0x005f1324, u32(u32, u32, u32, u32)> call_005f1324;  // (from the original)
inline constexpr guest::Function<0x005fcfd8, u32(u32, u32, u32, u32)> call_005fcfd8;  // (from the original)
inline constexpr guest::Function<0x0075be20, u32(u32, u32, u32, u32)> call_0075be20;  // (from the original)
inline constexpr guest::Function<0x007703ac, u32(u32, u32, u32, u32)> call_007703ac;  // (from the original)

u32 f_002397ec(gptr<Object_002397ec_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 zf_1 = 0;
    u32 r4_1 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r5_1 = 0;
    u32 r2_2 = 0;
    u32 r1_2 = 0;
    u32 r3_2 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r0_1 = arg0->word_4;
    if (r0_1 == 0) {
        goto L_23987c;
    }
    r0_2 = *gptr<u32>(r0_1 + 0x354u);  // (from the original)
    zf_1 = r0_2 == 0;
    r4_1 = *global_0095debc;
    if (!zf_1) {
        zf_1 = r4_1 == 0;
    }
    if (zf_1) {
        goto L_23987c;
    }
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    call_005fcfd8(r0_3, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_4 = call_007703ac(r1, r1_1, r2_1, r3_1);
    r5_1 = r1 + 0x55bau;  // (from the original)
    if ((u32(*gptr<u8>(r5_1)) & 1u) == 0) {
        r2_2 = 0x23988cu;  // (from the original)
    } else {
        r2_2 = 0x23989cu;  // (from the original)
    }
    r1_2 = r13;
    guest::cpu()->r[13] = r13;
    call_0075be20(r4_1, r1_2, r2_2, r0_4);
    r3_2 = guest::cpu()->r[3];
    r1_3 = r13;
    guest::cpu()->r[13] = r13;
    call_005f1324(r0_2, r1_3, r2, r3_2);
    r1_4 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return 1u;
L_23987c:;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_002397ec
GUEST_EXPORT(0x002397ec, d_002397ec::f_002397ec);

// f_002398ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002398ac {

struct __attribute__((packed)) Object_002398ac_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_002398ac_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00300a64, u32(u32, u32, u32, u32)> call_00300a64;  // (from the original)
inline constexpr guest::Function<0x0056d488, u32(u32, u32, u32, u32)> call_0056d488;  // (from the original)
inline constexpr guest::Function<0x0081e8d0, u32(u32, u32, u32, u32)> call_0081e8d0;  // (from the original)

u32 f_002398ac(gptr<Object_002398ac_0> arg0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x40u;  // (from the original)
    r0_1 = arg0->word_4;
    if (r0_1 == 0) {
        r13 = r13 + 0x40u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_2 = *gptr<u32>(r0_1 + 0x354u);  // (from the original)
    if (r0_2 == 0) {
        r13 = r13 + 0x40u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    r0_4 = call_0081e8d0(r0_3, r1, r2, guest::cpu()->r[3]);
    r2_1 = u32(*gptr<u8>(r1 + 0x14u)) & 1u;  // (from the original)
    r1_1 = r1 + 2u;
    guest::cpu()->r[13] = r13;
    call_0056d488(r0_4, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = r13;
    guest::cpu()->r[13] = r13;
    call_00300a64(r0_2, r1_2, r2, guest::cpu()->r[3]);
    *gptr<u32>(r13) = u32(0x90a3e8u);  // (from the original)
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = 0x90a3e8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_002398ac
GUEST_EXPORT(0x002398ac, d_002398ac::f_002398ac);

// f_00239cd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00239cd0 {

inline guest::global<u16, 0x009537c2> global_009537c2;  // (from the original)
inline constexpr guest::Function<0x0023a680, u32(u32, u32, u32, u32)> call_0023a680;  // (from the original)

u32 f_00239cd0(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    call_0023a680(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (u32(*gptr<u8>(r0 + 0xeu)) != 4u) {  // (from the original)
        r0_1 = 0u;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return r0_1;
    }
    *gptr<u8>(r0 + 0xeu) = u8(3u);  // (from the original)
    *gptr<u16>(r0 + 0x12u) = u16(u32(*global_009537c2));  // (from the original)
    *gptr<u16>(r0 + 0x10u) = u16(u32(*gptr<u16>(*gptr<u32>(*gptr<u32>(r0) + 0xf0u) + 0x2eu)));  // (from the original)
    r0_1 = 1u;
    *gptr<u8>(r0 + 0x17u) = u8(r1);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0_1;
}

}  // namespace d_00239cd0
GUEST_EXPORT(0x00239cd0, d_00239cd0::f_00239cd0);

// f_0023a200: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023a200 {

inline guest::global<u16, 0x009537c2> global_009537c2;  // (from the original)
inline constexpr guest::Function<0x0023a680, u32(u32, u32, u32, u32)> call_0023a680;  // (from the original)

u32 f_0023a200(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    call_0023a680(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (u32(*gptr<u8>(r0 + 0xeu)) != 4u) {  // (from the original)
        r0_1 = 0u;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return r0_1;
    }
    *gptr<u8>(r0 + 0xeu) = u8(1u);  // (from the original)
    *gptr<u16>(r0 + 0x12u) = u16(u32(*global_009537c2));  // (from the original)
    *gptr<u16>(r0 + 0x10u) = u16(u32(*gptr<u16>(*gptr<u32>(*gptr<u32>(r0) + 0xf0u) + 0x2eu)));  // (from the original)
    r0_1 = 1u;
    *gptr<u8>(r0 + 0x17u) = u8(r1);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0_1;
}

}  // namespace d_0023a200
GUEST_EXPORT(0x0023a200, d_0023a200::f_0023a200);

// f_0023a254: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023a254 {

inline constexpr guest::Function<0x0023a680, u32(u32, u32, u32, u32)> call_0023a680;  // (from the original)
inline constexpr guest::Function<0x007521a4, u32(u32, u32, u32, u32)> call_007521a4;  // (from the original)

u32 f_0023a254(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0023a680(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_1 = 0u;
    if (u32(*gptr<u8>(r0 + 0xeu)) == 4u) {  // (from the original)
        *gptr<u8>(r0 + 0xeu) = u8(r0_1);  // (from the original)
        *gptr<u16>(r0 + 0x12u) = u16(r2);  // (from the original)
        r0_2 = *gptr<u32>(*gptr<u32>(r0) + 0xf0u);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_3 = call_007521a4(r0_2, r1, r2_1, r3_1);
        r1_1 = guest::cpu()->r[1];
        *gptr<u32>(r13) = u32(r0_3);
        *gptr<u16>(r0 + 0x10u) = u16(u32(*gptr<u16>(r13)));  // (from the original)
        r0_1 = 1u;
        *gptr<u8>(r0 + 0x17u) = u8(r0_1);  // (from the original)
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_0023a254
GUEST_EXPORT(0x0023a254, d_0023a254::f_0023a254);

// f_0023a440: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023a440 {

struct __attribute__((packed)) Object_0023a440_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0023a440_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x006eb990, u32(u32, u32, u32, u32)> call_006eb990;  // (from the original)

u32 f_0023a440(gptr<Object_0023a440_0> arg0, float S0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    float S0_1 = 0;
    u32 r0_2 = 0;
    u32 ea_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    float S0_2 = 0;
    u32 r0_5 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r6 = 0x88069cu;  // (from the original)
    r1 = 0u;
    r0_1 = *gptr<u32>(arg0->word_0 + 0xf0u);  // (from the original)
    zf_1 = u32(*gptr<u8>(r0_1 + 0xa8u)) == 0xcu;  // (from the original)
    if (zf_1) {
        zf_1 = u32(*gptr<u8>(r0_1 + 0x554u)) == 0;  // (from the original)
    }
    if (zf_1) {
        S0_1 = std::bit_cast<float>(*gptr<u32>(r6));
        r0_2 = r0_1 + 0x78u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        call_006eb990(r0_2, 0u, 0u, guest::cpu()->r[3]);
        S0 = guest::cpu()->s[0];
        r1 = 1u;
    }
    ea_1 = *gptr<u32>(r0) + 0x228u;  // (from the original)
    r4 = *gptr<u32>(ea_1);
    r5 = *gptr<u32>(ea_1 + 4);
    if (r4 == r5) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        return r1;
    }
L_23a498:;
    r0_3 = *gptr<u32>(r4);
    if (r0_3 == 0) {
        goto L_23a4d8;
    }
    r0_4 = *gptr<u32>(r0_3 + 0xf0u);  // (from the original)
    if (u32(*gptr<u8>(r0_4 + 0xa8u)) != 0xcu) {  // (from the original)
        goto L_23a4d8;
    }
    if (u32(*gptr<u8>(r0_4 + 0x554u)) != 0) {  // (from the original)
        goto L_23a4d8;
    }
    S0_2 = std::bit_cast<float>(*gptr<u32>(r6));
    r0_5 = r0_4 + 0x78u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    call_006eb990(r0_5, 0u, 0u, guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    r1 = 1u;
L_23a4d8:;
    r4 = r4 + 4u;
    if (r4 != r5) {
        guest::preempt();
        goto L_23a498;
    }
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r1;
}

}  // namespace d_0023a440
GUEST_EXPORT(0x0023a440, d_0023a440::f_0023a440);

// f_0023a9dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023a9dc {

inline guest::global<u32, 0x0088069c> global_0088069c;  // (from the original)
inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x003166a8, u32(u32, u32, u32, u32)> call_003166a8;  // (from the original)
inline constexpr guest::Function<0x005dd230, u32(u32, u32, u32, u32)> call_005dd230;  // (from the original)
inline constexpr guest::Function<0x005dd69c, u32(u32, u32, u32, u32)> call_005dd69c;  // (from the original)
inline constexpr guest::Function<0x00813b30, u32(u32, u32, u32, u32)> call_00813b30;  // (from the original)

u32 f_0023a9dc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
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
    u32 r1_2 = 0;
    u32 ea_11 = 0;
    u32 ea_12 = 0;
    u32 ea_13 = 0;
    u32 ea_14 = 0;
    u32 ea_15 = 0;
    u32 ea_16 = 0;
    u32 ea_17 = 0;
    u32 ea_18 = 0;
    u32 ea_19 = 0;
    u32 ea_20 = 0;
    u32 ea_21 = 0;
    u32 ea_22 = 0;
    u32 ea_23 = 0;
    u32 ea_24 = 0;
    u32 ea_25 = 0;
    u32 ea_26 = 0;
    u32 r0_12 = 0;
    u32 ea_27 = 0;
    u32 ea_28 = 0;
    u32 r7_1 = 0;
    u32 r3_4 = 0;
    u32 r0_13 = 0;
    u32 ea_29 = 0;
    u32 r8_1 = 0;
    u32 ea_30 = 0;
    u32 ea_31 = 0;
    u32 r8_2 = 0;
    u32 ea_32 = 0;
    u32 ea_33 = 0;
    u32 r12_1 = 0;
    u32 ea_34 = 0;
    u32 r0_14 = 0;
    u32 ea_35 = 0;
    u32 r12_2 = 0;
    u32 ea_36 = 0;
    u32 ea_37 = 0;
    u32 r12_3 = 0;
    u32 r1_3 = 0;
    u32 ea_38 = 0;
    u32 ea_39 = 0;
    u32 r8_3 = 0;
    u32 ea_40 = 0;
    u32 ea_41 = 0;
    u32 ea_42 = 0;
    u32 ea_43 = 0;
    u32 ea_44 = 0;
    u32 ea_45 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r1_4 = 0;
    u32 ea_46 = 0;
    u32 r4_1 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r3_5 = 0;
    u32 r0_21 = 0;
    u32 r3_6 = 0;
    u32 r0_22 = 0;
    u32 r3_7 = 0;
    u32 r0_23 = 0;
    u32 r3_8 = 0;
    u32 r0_24 = 0;
    u32 r1_5 = 0;
    r13 = r13 - 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_005dd69c(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r0_1 + 0x7cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_005dd230(r0_2, r0_1, r2_1, r3_1);
    r1_1 = r0_3 - 0x7cu;  // (from the original)
    *gptr<u32>(r1_1 + 0x7cu) = u32(0x8ee3a0u + 0x148u);  // (from the original)
    *gptr<u32>(r1_1) = u32(0x8ee3a0u);  // (from the original)
    r0_4 = r1_1 + 0xf4u;  // (from the original)
    *gptr<u32>(r1_1 + 0xf0u) = u32(r1);  // (from the original)
    *gptr<u32>(r0_4) = u32(r1_1);
    *gptr<u32>(r0_4 + 4) = u32(0u);
    *gptr<u32>(r1_1 + 0xfcu) = u32(0u);  // (from the original)
    *gptr<u8>(r1_1 + 0x100u) = u8(0u);  // (from the original)
    *gptr<u8>(r1_1 + 0x101u) = u8(4u);  // (from the original)
    *gptr<u8>(r1_1 + 0x102u) = u8(4u);  // (from the original)
    *gptr<u16>(0x104u + r1_1) = u16(0u);  // (from the original)
    *gptr<u16>((0x104u | u32(s32(0x104u) >> 7)) + r1_1) = u16(0u);  // (from the original)
    *gptr<u8>(r1_1 + 0x108u) = u8(0u);  // (from the original)
    *gptr<u8>(r1_1 + 0x109u) = u8(0u);  // (from the original)
    *gptr<u8>(r1_1 + 0x10au) = u8(0u);  // (from the original)
    *gptr<u8>(r1_1 + 0x10bu) = u8(1u);  // (from the original)
    *gptr<u8>(r0_4 + 0x18u) = u8(0u);  // (from the original)
    *gptr<u8>(r0_4 + 0x19u) = u8(0u);  // (from the original)
    *gptr<u8>(r0_4 + 0x1au) = u8(0u);  // (from the original)
    *gptr<u8>(r0_4 + 0x1bu) = u8(0u);  // (from the original)
    *gptr<u8>(r0_4 + 0x1cu) = u8(5u);  // (from the original)
    *gptr<u8>(r0_4 + 0x1du) = u8(2u);  // (from the original)
    r2_2 = *global_0088069c;
    *gptr<u32>(r0_4 + 0x20u) = u32(r2_2);  // (from the original)
    r0_5 = r1_1 + 0x118u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_003166a8(r0_5, r1_1, r2_2, 5u);
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_7 = r0_6 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_002fc934(r0_7, 0x95bfdcu, r2_3, r3_2);  // (from the original)
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_9 = r0_8 + 4u;
    guest::cpu()->r[13] = r13;
    r0_10 = call_002fc934(r0_9, 0x95bfdcu, r2_4, r3_3);  // (from the original)
    r0_11 = r0_10 - 0x1cu;  // (from the original)
    ea_1 = r0_11 + 0x20u;  // (from the original)
    *gptr<u8>(ea_1) = u8(0u);
    ea_2 = r0_11 + 0x21u;  // (from the original)
    *gptr<u8>(ea_2) = u8(0u);
    ea_3 = r0_11 + 0x24u;  // (from the original)
    *gptr<u32>(ea_3) = u32(0x67u);  // (from the original)
    ea_4 = r0_11 + 0x28u;  // (from the original)
    *gptr<u16>(ea_4) = u16(0x1au);  // (from the original)
    ea_5 = r0_11 + 0x2au;  // (from the original)
    *gptr<u16>(ea_5) = u16(0u);
    ea_6 = r0_11 + 0x2cu;  // (from the original)
    *gptr<u16>(ea_6) = u16(0u);
    ea_7 = r0_11 + 0x2eu;  // (from the original)
    *gptr<u16>(ea_7) = u16(0u);
    ea_8 = r0_11 + 0x30u;  // (from the original)
    *gptr<u16>(ea_8) = u16(0u);
    ea_9 = r0_11 + 0x32u;  // (from the original)
    *gptr<u8>(ea_9) = u8(0u);
    ea_10 = r0_11 + 0x33u;  // (from the original)
    *gptr<u8>(ea_10) = u8(0u);
    r1_2 = r0_11 - 0x118u;  // (from the original)
    ea_11 = r0_11 + 0x34u;  // (from the original)
    *gptr<u32>(ea_11) = u32(0u);
    ea_12 = r0_11 + 0x38u;  // (from the original)
    *gptr<u8>(ea_12) = u8(0x17u);  // (from the original)
    ea_13 = ea_12 + 4u;
    *gptr<u32>(ea_13) = u32(0u);
    ea_14 = r1_2 + 0x158u;  // (from the original)
    *gptr<u32>(ea_14) = u32(0u);
    ea_15 = r1_2 + 0x15cu;  // (from the original)
    *gptr<u32>(ea_15) = u32(0u);
    ea_16 = r1_2 + 0x160u;  // (from the original)
    *gptr<u32>(ea_16) = u32(0u);
    ea_17 = r1_2 + 0x164u;  // (from the original)
    *gptr<u32>(ea_17) = u32(0u);
    ea_18 = r1_2 + 0x168u;  // (from the original)
    *gptr<u32>(ea_18) = u32(0x8fa34cu);  // (from the original)
    *gptr<u32>(ea_18 + 4) = u32(0u);
    ea_19 = r1_2 + 0x170u;  // (from the original)
    *gptr<u32>(ea_19) = u32(0u);
    ea_20 = r1_2 + 0x174u;  // (from the original)
    *gptr<u8>(ea_20) = u8(0u);
    ea_21 = r1_2 + 0x178u;  // (from the original)
    *gptr<u32>(ea_21) = u32(0u);
    ea_22 = r1_2 + 0x17cu;  // (from the original)
    *gptr<u32>(ea_22) = u32(0u);
    ea_23 = r1_2 + 0x184u;  // (from the original)
    *gptr<u32>(ea_23) = u32(r1_2 + 0x18cu);  // (from the original)
    ea_24 = r1_2 + 0x188u;  // (from the original)
    *gptr<u32>(ea_24) = u32(0x20u);  // (from the original)
    ea_25 = r1_2 + 0x180u;  // (from the original)
    *gptr<u32>(ea_25) = u32(0x90558cu);  // (from the original)
    ea_26 = r1_2 + 0x184u;  // (from the original)
    r14 = *gptr<u32>(ea_26);
    r0_12 = r1_2 + 0x180u;  // (from the original)
    *gptr<u8>(0x20u + (r14 - 1u)) = u8(u32(*global_008c9f1c));  // (from the original)
    r14 = 0x905120u;  // (from the original)
    ea_27 = r1_2 + 0x180u;  // (from the original)
    *gptr<u32>(ea_27) = u32(r14);
    ea_28 = r1_2 + 0x184u;  // (from the original)
    r7_1 = *gptr<u32>(ea_28);
    *gptr<u8>(r7_1) = u8(u32(*global_008c9f1c));
    r3_4 = ~0u;
    *gptr<u32>(r0_12) = u32(0x9048ecu);  // (from the original)
    r0_13 = r0_12 + 0x40u;  // (from the original)
    ea_29 = r1_2 + 0x1acu;  // (from the original)
    *gptr<u32>(ea_29) = u32(r3_4);
    r8_1 = r0_13 + 0xcu;  // (from the original)
    ea_30 = r0_13 + 4u;
    *gptr<u32>(ea_30) = u32(r8_1);
    *gptr<u32>(r0_13) = u32(0x90558cu);  // (from the original)
    ea_31 = r0_13 + 8u;
    *gptr<u32>(ea_31) = u32(0x20u);  // (from the original)
    r8_2 = u32(*global_008c9f1c);
    ea_32 = 0x20u + (r8_1 - 1u);  // (from the original)
    *gptr<u8>(ea_32) = u8(r8_2);
    *gptr<u32>(r0_13) = u32(r14);
    ea_33 = r0_13 + 4u;
    r14 = *gptr<u32>(ea_33);
    r12_1 = u32(*global_008c9f1c);
    ea_34 = r14;
    *gptr<u8>(ea_34) = u8(r12_1);
    *gptr<u32>(r0_13) = u32(0x9048ecu);  // (from the original)
    r0_14 = r0_13 - 0x1c0u;  // (from the original)
    ea_35 = 0x8812d4u + 0xa0u;  // (from the original)
    r12_2 = *gptr<u32>(ea_35);
    r14 = *gptr<u32>(ea_35 + 4);
    ea_36 = r0_14 + 0x1f4u;  // (from the original)
    *gptr<u32>(ea_36) = u32(r12_2);
    *gptr<u32>(ea_36 + 4) = u32(r14);
    ea_37 = 0x8812d4u + 0xa8u;  // (from the original)
    r12_3 = *gptr<u32>(ea_37);
    r14 = *gptr<u32>(ea_37 + 4);
    r1_3 = r0_14 + 0x200u;  // (from the original)
    ea_38 = r0_14 + 0x204u;  // (from the original)
    *gptr<u32>(ea_38) = u32(r3_4);
    *gptr<u32>(ea_38 + 4) = u32(0u);
    ea_39 = r0_14 + 0x1fcu;  // (from the original)
    *gptr<u32>(ea_39) = u32(r12_3);
    *gptr<u32>(ea_39 + 4) = u32(r14);
    r8_3 = r0_14 + 0x214u;  // (from the original)
    ea_40 = r0_14 + 0x20cu;  // (from the original)
    *gptr<u8>(ea_40) = u8(0u);
    ea_41 = r0_14 + 0x20du;  // (from the original)
    *gptr<u8>(ea_41) = u8(0u);
    ea_42 = r0_14 + 0x20eu;  // (from the original)
    *gptr<u8>(ea_42) = u8(0u);
    ea_43 = r0_14 + 0x20fu;  // (from the original)
    *gptr<u8>(ea_43) = u8(0u);
    ea_44 = r0_14 + 0x210u;  // (from the original)
    *gptr<u8>(ea_44) = u8(0u);
    ea_45 = r1_3 + 0x12u;  // (from the original)
    *gptr<u16>(ea_45) = u16(0u);
    *gptr<u32>(r0_14 + 0x21cu) = u32(0u);  // (from the original)
    r14 = 6u;
    *gptr<u32>(r8_3) = u32(8u);
    *gptr<u32>(r8_3 + 4) = u32(r14);
    r0_15 = r0_14 + 0x222u;  // (from the original)
    *gptr<u16>(r1_3 + 0x20u) = u16(2u);  // (from the original)
    *gptr<u16>(r0_15) = u16(0u);
    r0_16 = r0_15 + 2u;
    *gptr<u16>(r0_16) = u16(0u);
    *gptr<u8>(r0_16 + 2u) = u8(0u);
    r0_17 = r0_16 + 4u;
    r1_4 = r0_17 + 0xcu;  // (from the original)
    *gptr<u32>(r0_17) = u32(r1_4);
    ea_46 = r0_17 + 4u;
    *gptr<u32>(ea_46) = u32(r1_4);
    *gptr<u32>(ea_46 + 4) = u32(r14);
    r4_1 = r0_17 - 0x228u;  // (from the original)
    *gptr<u32>(r0_17 + 0x24u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_17 + 0x28u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_17 + 0x2cu) = u32(0u);  // (from the original)
    *gptr<u8>(r0_17 + 0x30u) = u8(4u);  // (from the original)
    *gptr<u32>(r0_17 + 0x34u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_17 - 0x78u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_17 - 0x70u) = u32(r3_4);  // (from the original)
    *gptr<u32>(r0_17 - 0x74u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_17 - 0x6cu) = u32(r3_4);  // (from the original)
    r0_18 = u32(*global_008c9f1c);
    *gptr<u8>(*gptr<u32>(r4_1 + 0x1c4u)) = u8(r0_18);  // (from the original)
    r0_19 = r4_1 + 0x100u;  // (from the original)
    *gptr<u16>(r0_19 + 0xeeu) = u16(0u);  // (from the original)
    *gptr<u16>(r0_19 + 0xecu) = u16(0u);  // (from the original)
    *gptr<u8>(r4_1 + 0x1f0u) = u8(0u);  // (from the original)
    *gptr<u8>(r4_1 + 0x1f1u) = u8(0u);  // (from the original)
    *gptr<u8>(r4_1 + 0x1f2u) = u8(0u);  // (from the original)
    *gptr<u16>(r4_1 + 0x224u) = u16(0u);  // (from the original)
    r0_20 = r4_1 + 0x224u;  // (from the original)
    *gptr<u8>(r4_1 + 0x226u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00813b30(r0_20, 0u, 0u, r3_4);
    r3_5 = guest::cpu()->r[3];
    r0_21 = r4_1 + 0x224u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00813b30(r0_21, 1u, 1u, r3_5);
    r3_6 = guest::cpu()->r[3];
    r0_22 = r4_1 + 0x224u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00813b30(r0_22, 2u, 1u, r3_6);
    r3_7 = guest::cpu()->r[3];
    r0_23 = r4_1 + 0x224u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00813b30(r0_23, 3u, 0u, r3_7);
    r3_8 = guest::cpu()->r[3];
    r0_24 = r4_1 + 0x224u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00813b30(r0_24, 0xau, 1u, r3_8);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    *gptr<u16>(r4_1 + 0x222u) = u16(0u);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return r4_1;
}

}  // namespace d_0023a9dc
GUEST_EXPORT(0x0023a9dc, d_0023a9dc::f_0023a9dc);

// f_0023ad1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023ad1c {

struct __attribute__((packed)) Object_0023ad1c_0 {
    u32 word_0;
    u8 unknown_4[0x78];  // (not used here)
    u32 word_7c;
    u8 unknown_80[0x1a4];  // (not used here)
    u8 byte_224;
};
GUEST_OFFSET(Object_0023ad1c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0023ad1c_0, word_7c, 0x7c);  // (from the original)
GUEST_OFFSET(Object_0023ad1c_0, byte_224, 0x224);  // (from the original)

inline constexpr guest::Function<0x00292ca8, u32(u32, u32, u32, u32)> call_00292ca8;  // (from the original)
inline constexpr guest::Function<0x002e6944, u32(u32, u32, u32, u32)> call_002e6944;  // (from the original)
inline constexpr guest::Function<0x003170d0, u32(u32, u32, u32, u32)> call_003170d0;  // (from the original)
inline constexpr guest::Function<0x005dd284, u32(u32, u32, u32, u32)> call_005dd284;  // (from the original)
inline constexpr guest::Function<0x00813b30, u32(u32, u32, u32, u32)> call_00813b30;  // (from the original)

u32 f_0023ad1c(gptr<Object_0023ad1c_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r2_4 = 0;
    u32 r0_9 = 0;
    guest::cpu()->r[13] -= 8u;
    r1_1 = 0x8ee3a0u + 0x148u;  // (from the original)
    arg0->word_0 = u32(0x8ee3a0u);  // (from the original)
    arg0->word_7c = u32(r1_1);
    res_1 = u32(arg0->byte_224) >> 7;
    if (res_1 != 0) {
        r0_1 = r0 + 0x224u;  // (from the original)
        r0_2 = call_00813b30(r0_1, 7u, 0u, guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        call_00292ca8(r0_2, r1_2, r2_1, guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
    }
    if ((u32(*gptr<u8>(r0 + 0x225u)) & 1u) != 0) {  // (from the original)
        r0_3 = r0 + 0x224u;  // (from the original)
        r0_4 = call_00813b30(r0_3, 8u, 0u, guest::cpu()->r[3]);
        r1_3 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        call_00292ca8(r0_4, r1_3, r2_2, guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
    }
    r0_5 = r0 + 0x118u;  // (from the original)
    r0_6 = call_002e6944(r0_5, r1_1, r2, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r0_7 = r0_6 - 0x9cu;  // (from the original)
    r0_8 = call_005dd284(r0_7, r1_4, r2_3, guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    guest::cpu()->r[13] += 8u;
    r0_9 = r0_8 - 0x7cu;  // (from the original)
    return call_003170d0(r0_9, r1_5, r2_4, guest::cpu()->r[3]);
}

}  // namespace d_0023ad1c
GUEST_EXPORT(0x0023ad1c, d_0023ad1c::f_0023ad1c);

// f_0023adbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023adbc {

inline constexpr guest::Function<0x00290cfc, u32(u32, u32, u32, u32)> call_00290cfc;  // (from the original)
inline constexpr guest::Function<0x00292bac, u32(u32, u32, u32, u32)> call_00292bac;  // (from the original)
inline constexpr guest::Function<0x00292ca8, u32(u32, u32, u32, u32)> call_00292ca8;  // (from the original)
inline constexpr guest::Function<0x005d908c, u32(u32, u32, u32, u32)> call_005d908c;  // (from the original)
inline constexpr guest::Function<0x0075596c, u32(u32, u32, u32, u32)> call_0075596c;  // (from the original)
inline constexpr guest::Function<0x00755a98, u32(u32, u32, u32, u32)> call_00755a98;  // (from the original)
inline constexpr guest::Function<0x00813b80, u32(u32, u32, u32, u32)> call_00813b80;  // (from the original)

u32 f_0023adbc(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r5_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 res_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_1 = 0;
    u32 r2_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_2 = 0;
    u32 r2_5 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = r0 + 0x7cu;  // (from the original)
    r0_2 = call_005d908c(r0_1, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r5_1 = r0_2;
    if (r0_2 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_2;
    }
    r0_3 = call_0075596c(r2, r1, r2_1, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    if (r0_3 != 0x13u) {  // (from the original)
        goto L_23ae20;
    }
    r0_4 = call_00755a98(r2, r1, r2_2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    if (r0_4 == 0) {
        goto L_23ae28;
    }
    res_1 = u32(*gptr<u8>(r0 + 0x100u)) << 0x1d >> 0x1f;  // (from the original)
    if (res_1 == 0) {
        goto L_23ae1c;
    }
    r0_5 = r0 + 0x100u;  // (from the original)
    r0_6 = call_00813b80(r0_5, 2u, 0u, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    call_00292ca8(r0_6, r1_1, r2_4, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_23ae1c:;
    r5_1 = 1u;
L_23ae20:;
    r0_2 = r5_1;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_2;
L_23ae28:;
    r0_7 = call_00292bac(r0_4, r1, r2_3, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_7 != 0) {
        guest::preempt();
        goto L_23ae1c;
    }
    r0_8 = r0 + 0x100u;  // (from the original)
    call_00813b80(r0_8, 2u, 1u, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    call_00290cfc(1u, r1_2, r2_5, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::preempt();
    goto L_23ae1c;
}

}  // namespace d_0023adbc
GUEST_EXPORT(0x0023adbc, d_0023adbc::f_0023adbc);

// f_0023ae64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023ae64 {

struct __attribute__((packed)) Object_0023ae64_0 {
    u8 unknown_0[0x8c];  // (not used here)
    u32 word_8c;
};
GUEST_OFFSET(Object_0023ae64_0, word_8c, 0x8c);  // (from the original)

inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)
inline guest::global<u32, 0x0095deac> global_0095deac;  // (from the original)
inline constexpr guest::Function<0x005ffd94, u32(u32, u32, u32, u32)> call_005ffd94;  // (from the original)
inline constexpr guest::Function<0x006001f0, u32(u32, u32, u32, u32)> call_006001f0;  // (from the original)
inline constexpr guest::Function<0x00602144, u32(u32, u32, u32, u32)> call_00602144;  // (from the original)
inline constexpr guest::Function<0x00602938, u32(u32, u32, u32, u32)> call_00602938;  // (from the original)
inline constexpr guest::Function<0x00813b80, u32(u32, u32, u32, u32)> call_00813b80;  // (from the original)

u32 f_0023ae64(gptr<Object_0023ae64_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r6_1 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5_1 = *global_0095deac;
    if (u32(s32(s8(*gptr<u8>(arg0->word_8c)))) == u32(s32(s8(*global_008c9f1c)))) {
        r0_1 = *gptr<u32>(r5_1 + 0x14u);  // (from the original)
        call_00602144(r0_1, r0, r2, guest::cpu()->r[3]);
        r2_1 = guest::cpu()->r[2];
        r0_2 = *gptr<u32>(r0 + 4u);
        call_00602938(r0_2, 1u, r2_1, guest::cpu()->r[3]);
        r0_3 = r0 + 0x100u;  // (from the original)
        call_00813b80(r0_3, 1u, 1u, guest::cpu()->r[3]);
        r2_2 = guest::cpu()->r[2];
    } else {
        r6_1 = *gptr<u32>(r5_1 + 0x14u);  // (from the original)
        r0_4 = *gptr<u32>(r5_1 + 0x18u);  // (from the original)
        r1_1 = r0 + 0x7cu;  // (from the original)
        call_005ffd94(r0_4, r1_1, r6_1, guest::cpu()->r[3]);
        r0_5 = *gptr<u32>(r0 + 0x84u);  // (from the original)
        call_006001f0(r0_5, 0u, 0u, guest::cpu()->r[3]);
        r2_2 = guest::cpu()->r[2];
    }
    r1_2 = *gptr<u32>(*gptr<u32>(r0) + 0x11cu);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return guest::call_address<u32>(r1_2, r0, r1_2, r2_2, guest::cpu()->r[3]);
}

}  // namespace d_0023ae64
GUEST_EXPORT(0x0023ae64, d_0023ae64::f_0023ae64);

// f_0023b0d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023b0d4 {

struct __attribute__((packed)) Object_0023b0d4_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0023b0d4_0, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0095debc> global_0095debc;  // (from the original)
inline constexpr guest::Function<0x005f11b4, u32(u32, u32, u32, u32)> call_005f11b4;  // (from the original)
inline constexpr guest::Function<0x005fcfd8, u32(u32, u32, u32, u32)> call_005fcfd8;  // (from the original)
inline constexpr guest::Function<0x0075be20, u32(u32, u32, u32, u32)> call_0075be20;  // (from the original)

u32 f_0023b0d4(gptr<Object_0023b0d4_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r6_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 zf_1 = 0;
    u32 r4_1 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r6_1 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    r0_1 = arg0->word_4;
    if (r0_1 == 0) {
        goto L_23b154;
    }
    r0_2 = *gptr<u32>(r0_1 + 0x354u);  // (from the original)
    zf_1 = r0_2 == 0;
    r4_1 = *global_0095debc;
    if (!zf_1) {
        zf_1 = r4_1 == 0;
    }
    if (zf_1) {
        goto L_23b154;
    }
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    call_005fcfd8(r0_3, r1, r2, r3);
    r1_1 = r13;
    guest::cpu()->r[13] = r13;
    call_0075be20(r4_1, r1_1, r1, r2);
    r1_2 = r13;
    guest::cpu()->r[13] = r13;
    call_005f11b4(r0_2, r1_2, r3, r6_1);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return 1u;
L_23b154:;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_0023b0d4
GUEST_EXPORT(0x0023b0d4, d_0023b0d4::f_0023b0d4);

// f_0023b164: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023b164 {

struct __attribute__((packed)) Object_0023b164_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0023b164_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x005f11b4, u32(u32, u32, u32, u32)> call_005f11b4;  // (from the original)

u32 f_0023b164(gptr<Object_0023b164_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = arg0->word_4;
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r0_2 = *gptr<u32>(r0_1 + 0x354u);  // (from the original)
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    call_005f11b4(r0_2, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_0023b164
GUEST_EXPORT(0x0023b164, d_0023b164::f_0023b164);

// f_0023b1b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023b1b4 {

struct __attribute__((packed)) Object_0023b1b4_0 {
    u8 unknown_0[0x84];  // (not used here)
    u32 word_84;
};
GUEST_OFFSET(Object_0023b1b4_0, word_84, 0x84);  // (from the original)

inline constexpr guest::Function<0x0075cd14, u32(u32, u32, u32, u32)> call_0075cd14;  // (from the original)
inline constexpr guest::Function<0x0075d0f0, u32(u32, u32, u32, u32)> call_0075d0f0;  // (from the original)

u32 f_0023b1b4(gptr<Object_0023b1b4_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = arg0->word_84;
    if (r0_1 != 0) {
        r0_2 = call_0075cd14(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_2 == 0) {
            guest::cpu()->r[13] += 8u;
            return 1u;
        }
    }
    res_1 = u32(*gptr<u8>(r0 + 0x100u)) << 0x1e >> 0x1f;  // (from the original)
    if (res_1 != 0) {
        guest::cpu()->r[13] += 8u;
        return 1u;
    }
    r0_3 = *gptr<u32>(r0 + 4u);
    if (r0_3 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0_3;
    }
    r0_4 = call_0075d0f0(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_4 != 0) {
        guest::cpu()->r[13] += 8u;
        return 0u;
    }
    guest::cpu()->r[13] += 8u;
    return 1u;
}

}  // namespace d_0023b1b4
GUEST_EXPORT(0x0023b1b4, d_0023b1b4::f_0023b1b4);

// f_0023b248: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023b248 {

inline constexpr guest::Function<0x005dd570, u32(u32, u32, u32, u32)> call_005dd570;  // (from the original)
inline constexpr guest::Function<0x005fcfd8, u32(u32, u32, u32, u32)> call_005fcfd8;  // (from the original)
inline constexpr guest::Function<0x0075be20, u32(u32, u32, u32, u32)> call_0075be20;  // (from the original)

u32 f_0023b248(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r0_1 = 0x95debcu;  // (from the original)
    r4_1 = *gptr<u32>(r0_1);
    if (r4_1 != 0) {
        r0_2 = r13;
        guest::cpu()->r[13] = r13;
        call_005fcfd8(r0_2, r1, r2, r3);
        r1_1 = r13;
        guest::cpu()->r[13] = r13;
        call_0075be20(r4_1, r1_1, r1, r2);
        r3_1 = guest::cpu()->r[3];
        r1_2 = r13;
        guest::cpu()->r[13] = r13;
        call_005dd570(r0, r1_2, r3, r3_1);
        r1 = guest::cpu()->r[1];
        r0_1 = r13;
    }
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_0023b248
GUEST_EXPORT(0x0023b248, d_0023b248::f_0023b248);

// f_0023b480: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023b480 {

struct __attribute__((packed)) Object_0023b480_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0023b480_0, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0095debc> global_0095debc;  // (from the original)
inline constexpr guest::Function<0x00312bd0, u32(u32, u32, u32, u32)> call_00312bd0;  // (from the original)
inline constexpr guest::Function<0x00312ca0, u32(u32, u32, u32, u32)> call_00312ca0;  // (from the original)
inline constexpr guest::Function<0x00312cb0, u32(u32, u32, u32, u32)> call_00312cb0;  // (from the original)
inline constexpr guest::Function<0x005e32a0, u32(u32, u32, u32, u32)> call_005e32a0;  // (from the original)

u32 f_0023b480(gptr<Object_0023b480_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 zf_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r3_1 = 0;
    u32 r0_5 = 0;
    u32 r3_2 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x58u;  // (from the original)
    r0_1 = arg0->word_4;
    if (r0_1 == 0) {
        goto L_23b4f4;
    }
    r0_2 = *gptr<u32>(r0_1 + 0x354u);  // (from the original)
    zf_1 = r0_2 == 0;
    r0_3 = *global_0095debc;
    if (!zf_1) {
        zf_1 = r0_3 == 0;
    }
    if (zf_1) {
        goto L_23b4f4;
    }
    r0_4 = r13;
    guest::cpu()->r[13] = r13;
    call_00312bd0(r0_4, r1, r2, r3);
    r3_1 = guest::cpu()->r[3];
    r0_5 = r13;
    guest::cpu()->r[13] = r13;
    call_005e32a0(r0_5, r1, r3, r3_1);
    r3_2 = guest::cpu()->r[3];
    r1_1 = r13;
    guest::cpu()->r[13] = r13;
    call_00312ca0(r0_2, r1_1, r2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_6 = r13;
    guest::cpu()->r[13] = r13;
    call_00312cb0(r0_6, r1_2, r2_1, r3_3);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x58u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return 1u;
L_23b4f4:;
    r13 = r13 + 0x58u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_0023b480
GUEST_EXPORT(0x0023b480, d_0023b480::f_0023b480);

// f_0023b50c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023b50c {

struct __attribute__((packed)) Object_0023b50c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0023b50c_0, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0095debc> global_0095debc;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x0056d9cc, u32(u32, u32, u32, u32)> call_0056d9cc;  // (from the original)
inline constexpr guest::Function<0x005f12e4, u32(u32, u32, u32, u32)> call_005f12e4;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_0023b50c(gptr<Object_0023b50c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 zf_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_8 = 0;
    u32 res_1 = 0;
    u32 r3_3 = 0;
    u32 ea_1 = 0;
    u32 r3_4 = 0;
    u32 ea_2 = 0;
    u32 r3_5 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    r13 = r13 - 0x80u;  // (from the original)
    r8 = r2;
    r0_1 = arg0->word_4;
    if (r0_1 == 0) {
        goto L_23b5d4;
    }
    r0_2 = *gptr<u32>(r0_1 + 0x354u);  // (from the original)
    zf_1 = r0_2 == 0;
    r7 = r0_2;
    r0_3 = *global_0095debc;
    if (!zf_1) {
        zf_1 = r0_3 == 0;
    }
    if (zf_1) {
        goto L_23b5d4;
    }
    r0_4 = r13;
    r6 = r1;
    r1_1 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_003083bc(r0_4, r1_1, 0x26u, r3);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r5 = 0x909fc0u;  // (from the original)
    *gptr<u32>(r0_5) = u32(r5);
    r0_6 = r0_5 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_7 = call_005f4bfc(r0_6, r1_2, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r4 = r0_7 - 0xcu;  // (from the original)
    r0_8 = r0_7 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_8, 0x4cu, r2_2, r3_2);  // (from the original)
    r2 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x16u;  // (from the original)
    r1 = 0x13u;  // (from the original)
    do {
L_23b57c:;
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
    guest::cpu()->r[13] = r13;
    call_0056d9cc(r4, r6, r2, r3_4);
    r3_5 = guest::cpu()->r[3];
    r1_3 = r13;
    guest::cpu()->r[13] = r13;
    call_005f12e4(r7, r1_3, r8, r3_5);
    r1_4 = guest::cpu()->r[1];
    *gptr<u32>(r13) = u32(r5);
    r13 = r13 + 0x80u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return 1u;
L_23b5d4:;
    r13 = r13 + 0x80u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_0023b50c
GUEST_EXPORT(0x0023b50c, d_0023b50c::f_0023b50c);

// f_0023b5ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023b5ec {

struct __attribute__((packed)) Object_0023b5ec_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0023b5ec_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002fe7f4, u32(u32, u32, u32, u32)> call_002fe7f4;  // (from the original)
inline constexpr guest::Function<0x002fe874, u32(u32, u32, u32, u32)> call_002fe874;  // (from the original)

u32 f_0023b5ec(gptr<Object_0023b5ec_0> arg0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    r13 = r13 - 0x70u;  // (from the original)
    r0_1 = arg0->word_4;
    if (r0_1 == 0) {
        r13 = r13 + 0x70u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_2 = *gptr<u32>(r0_1 + 0x354u);  // (from the original)
    if (r0_2 == 0) {
        r13 = r13 + 0x70u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    r0_4 = call_002fe7f4(r0_3, r1, 0u, guest::cpu()->r[3]);
    guest::cpu()->r[13] = r13;
    call_002fe874(r0_2, r0_4, r2, guest::cpu()->r[3]);
    *gptr<u32>(r13) = u32(0x909f18u);  // (from the original)
    r13 = r13 + 0x70u;  // (from the original)
    guest::cpu()->r[1] = 0x909f18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_0023b5ec
GUEST_EXPORT(0x0023b5ec, d_0023b5ec::f_0023b5ec);

// f_0023b87c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023b87c {

struct __attribute__((packed)) Object_0023b87c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0023b87c_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00300a64, u32(u32, u32, u32, u32)> call_00300a64;  // (from the original)
inline constexpr guest::Function<0x0056d488, u32(u32, u32, u32, u32)> call_0056d488;  // (from the original)
inline constexpr guest::Function<0x0081e8d0, u32(u32, u32, u32, u32)> call_0081e8d0;  // (from the original)

u32 f_0023b87c(gptr<Object_0023b87c_0> arg0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x40u;  // (from the original)
    r0_1 = arg0->word_4;
    if (r0_1 == 0) {
        r13 = r13 + 0x40u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_2 = *gptr<u32>(r0_1 + 0x354u);  // (from the original)
    if (r0_2 == 0) {
        r13 = r13 + 0x40u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    r0_4 = call_0081e8d0(r0_3, r1, r2, guest::cpu()->r[3]);
    r2_1 = u32(*gptr<u8>(r1 + 0x14u)) & 1u;  // (from the original)
    r1_1 = r1 + 2u;
    guest::cpu()->r[13] = r13;
    call_0056d488(r0_4, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = r13;
    guest::cpu()->r[13] = r13;
    call_00300a64(r0_2, r1_2, r2, guest::cpu()->r[3]);
    *gptr<u32>(r13) = u32(0x90a3e8u);  // (from the original)
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = 0x90a3e8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_0023b87c
GUEST_EXPORT(0x0023b87c, d_0023b87c::f_0023b87c);

// f_0023b900: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023b900 {

struct __attribute__((packed)) Object_0023b900_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0023b900_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fe7f4, u32(u32, u32, u32, u32)> call_002fe7f4;  // (from the original)
inline constexpr guest::Function<0x002fe874, u32(u32, u32, u32, u32)> call_002fe874;  // (from the original)
inline constexpr guest::Function<0x006fad7c, u32(u32, u32, u32, u32)> call_006fad7c;  // (from the original)

u32 f_0023b900(gptr<Object_0023b900_0> arg0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_1 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_2 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0xd0u;  // (from the original)
    r0_1 = arg0->word_4;
    if (r0_1 == 0) {
        goto L_23b9cc;
    }
    r0_2 = *gptr<u32>(r0_1 + 0x354u);  // (from the original)
    if (r0_2 == 0) {
        goto L_23b9cc;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_002f74c8(r0_2, r1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_4 = call_002f74e0(0x4000u, r0_3, r2_1, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    if (r0_4 != 0) {
        guest::cpu()->r[13] = r13;
        r0_5 = call_006fad7c(r0_4, r1_1, r2_2, guest::cpu()->r[3]);
        r0_6 = r13 + 0x5cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_7 = call_002fe7f4(r0_6, r1, r0_5, guest::cpu()->r[3]);
        guest::cpu()->r[13] = r13;
        call_002fe874(r0_2, r0_7, r2, guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        *gptr<u32>(r13 + 0x5cu) = u32(0x909f18u);  // (from the original)
        r13 = r13 + 0xd0u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    r0_8 = r13;
    guest::cpu()->r[13] = r13;
    r0_9 = call_002fe7f4(r0_8, r1, 0u, guest::cpu()->r[3]);
    guest::cpu()->r[13] = r13;
    call_002fe874(r0_2, r0_9, r2, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    *gptr<u32>(r13) = u32(0x909f18u);  // (from the original)
    r13 = r13 + 0xd0u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return 1u;
L_23b9cc:;
    r13 = r13 + 0xd0u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_0023b900
GUEST_EXPORT(0x0023b900, d_0023b900::f_0023b900);

// f_0023bbe4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023bbe4 {

inline constexpr guest::Function<0x005dd230, u32(u32, u32, u32, u32)> call_005dd230;  // (from the original)
inline constexpr guest::Function<0x005dd69c, u32(u32, u32, u32, u32)> call_005dd69c;  // (from the original)

u32 f_0023bbe4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_005dd69c(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r0_1 + 0x7cu;  // (from the original)
    r0_3 = call_005dd230(r0_2, r0_1, r2_1, r3_1);
    *gptr<u32>(r0_3 + 0x74u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_3) = u32(0x8ee528u + 0x128u);  // (from the original)
    r0_4 = r0_3 - 0x7cu;  // (from the original)
    *gptr<u32>(r0_4) = u32(0x8ee528u);  // (from the original)
    *gptr<u32>(r0_4 + 0xf4u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_4 + 0xfcu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_4 + 0xf8u) = u32(r1);  // (from the original)
    *gptr<u8>(r0_4 + 0x100u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0u;
    return r0_4;
}

}  // namespace d_0023bbe4
GUEST_EXPORT(0x0023bbe4, d_0023bbe4::f_0023bbe4);

// f_0023bf10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023bf10 {

inline constexpr guest::Function<0x0035084c, u32(u32, u32, u32, u32)> call_0035084c;  // (from the original)

u32 f_0023bf10(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_0035084c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = r0_1 ^ 1u;
    guest::cpu()->r[13] += 8u;
    return r0_2;
}

}  // namespace d_0023bf10
GUEST_EXPORT(0x0023bf10, d_0023bf10::f_0023bf10);

// f_0023c544: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023c544 {

inline constexpr guest::Function<0x003507b0, u32(u32, u32, u32, u32)> call_003507b0;  // (from the original)

u32 f_0023c544(u32 r0) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_003507b0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 1u) {
        r0_1 = 0u;
    }
    guest::cpu()->r[13] += 8u;
    return r0_1;
}

}  // namespace d_0023c544
GUEST_EXPORT(0x0023c544, d_0023c544::f_0023c544);

// f_0023c5e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023c5e4 {

inline constexpr guest::Function<0x00350778, u32(u32, u32, u32, u32)> call_00350778;  // (from the original)

u32 f_0023c5e4(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_00350778(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = r0_1 ^ 1u;
    guest::cpu()->r[13] += 8u;
    return r0_2;
}

}  // namespace d_0023c5e4
GUEST_EXPORT(0x0023c5e4, d_0023c5e4::f_0023c5e4);

// f_0023c634: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023c634 {

inline constexpr guest::Function<0x003507b0, u32(u32, u32, u32, u32)> call_003507b0;  // (from the original)

u32 f_0023c634(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_003507b0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        r0_2 = 1u;
    } else {
        r0_2 = 0u;
    }
    guest::cpu()->r[13] += 8u;
    return r0_2;
}

}  // namespace d_0023c634
GUEST_EXPORT(0x0023c634, d_0023c634::f_0023c634);

// f_0023c65c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023c65c {

inline guest::global<u8, 0x00953b14> global_00953b14;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x003508ac, u32(u32, u32, u32, u32)> call_003508ac;  // (from the original)
inline constexpr guest::Function<0x0070f56c, u32(u32, u32, u32, u32)> call_0070f56c;  // (from the original)

u32 f_0023c65c(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_003508ac(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if ((r0_1 ^ 1u) != 0) {
        guest::cpu()->r[13] += 8u;
        return 1u;
    }
    r0_2 = u32(*global_00953b14);
    if (r0_2 != 0) {
        guest::cpu()->r[13] += 8u;
        return 1u;
    }
    r0_3 = call_002fb328(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_4 = u32(*gptr<u16>(r0_3 + 0x71922u));  // (from the original)
    if ((r0_4 & 1u) == 0) {
        guest::cpu()->r[13] += 8u;
        return 0u;
    }
    r0_5 = call_002fb328(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_6 = r0_5 + 0x71900u;  // (from the original)
    r0_7 = call_0070f56c(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_7 == 0) {
        guest::cpu()->r[13] += 8u;
        return 0u;
    }
    guest::cpu()->r[13] += 8u;
    return 1u;
}

}  // namespace d_0023c65c
GUEST_EXPORT(0x0023c65c, d_0023c65c::f_0023c65c);

// f_0023c6c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023c6c0 {

inline constexpr guest::Function<0x0048a1b4, u32(u32, u32, u32, u32)> call_0048a1b4;  // (from the original)

u32 f_0023c6c0(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_0048a1b4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = r0_1 ^ 1u;
    guest::cpu()->r[13] += 8u;
    return r0_2;
}

}  // namespace d_0023c6c0
GUEST_EXPORT(0x0023c6c0, d_0023c6c0::f_0023c6c0);

// f_0023c730: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023c730 {

struct __attribute__((packed)) Object_0023c730_0 {
    u8 unknown_0[0x3e0];  // (not used here)
    u8 byte_3e0;
};
GUEST_OFFSET(Object_0023c730_0, byte_3e0, 0x3e0);  // (from the original)

inline guest::global<u32, 0x0023c7c0> global_0023c7c0;  // (from the original)
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)

u32 f_0023c730(gptr<Object_0023c730_0> arg0, u32 r1, u32 r2_unused, u32 r3, float S0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    float S0_1 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_2 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_3 = 0;
    u32 r0_7 = 0;
    u32 r3_3 = 0;
    float S0_4 = 0;
    u32 r1_5 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    float S0_5 = 0;
    u32 r1_6 = 0;
    u32 r0_10 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = u32(arg0->byte_3e0) - 1u;
    if (r0_1 <= 2u) {
        r0_2 = r0_1 & 0xffu;  // (from the original)
        arg0->byte_3e0 = u8(r0_2);
        r1_1 = *gptr<u32>(0x953f0cu + (r0_2 << 2));  // (from the original)
        r0_3 = r0 + 0x24u;  // (from the original)
        guest::cpu()->s[0] = S0;
        r0_4 = call_004b4fc0(r0_3, r1_1, 1u, r3);
        S0_1 = guest::cpu()->s[0];
        r1_2 = r0 + 0x3b8u;  // (from the original)
        r0_5 = r0 + 0x24u;  // (from the original)
        guest::cpu()->s[0] = S0_1;
        call_00568630(r0_5, r1_2, r0_4, 0u);
        r1_3 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        S0_2 = std::bit_cast<float>(*global_0023c7c0);
        r0_6 = r0 + 0x3b8u;  // (from the original)
        guest::cpu()->s[0] = S0_2;
        call_005697e0(r0_6, r1_3, r2_1, r3_1);
        r1_4 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        S0_3 = guest::cpu()->s[0];
        r0_7 = r0 + 0x24u;  // (from the original)
        guest::cpu()->s[0] = S0_3;
        call_00568c10(r0_7, r1_4, r2_2, r3_2);
        r3_3 = guest::cpu()->r[3];
        S0_4 = guest::cpu()->s[0];
        r1_5 = *gptr<u32>(0x953f0cu + (u32(*gptr<u8>(r0 + 0x3e0u)) << 2));  // (from the original)
        r0_8 = r0 + 0x24u;  // (from the original)
        guest::cpu()->s[0] = S0_4;
        r0_9 = call_004b4fc0(r0_8, r1_5, 1u, r3_3);
        S0_5 = guest::cpu()->s[0];
        r1_6 = r0 + 0x3b8u;  // (from the original)
        r0_10 = r0 + 0x24u;  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->s[0] = S0_5;
        return call_00568984(r0_10, r1_6, r0_9, 0u);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0_1;
}

}  // namespace d_0023c730
GUEST_EXPORT(0x0023c730, d_0023c730::f_0023c730);

// f_0023c860: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023c860 {

inline constexpr guest::Function<0x001323bc, u32(u32, u32, u32, u32)> call_001323bc;  // (from the original)
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32, u32)> call_00569e6c;  // (from the original)

u32 f_0023c860(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_001323bc(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = r0 + 0x24u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_00569e6c(r0_1, r1_1, 0u, guest::cpu()->r[3]);
}

}  // namespace d_0023c860
GUEST_EXPORT(0x0023c860, d_0023c860::f_0023c860);

// f_0023c9c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023c9c8 {

inline constexpr guest::Function<0x00132364, u32(u32, u32, u32, u32)> call_00132364;  // (from the original)
inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> call_001323b4;  // (from the original)

u32 f_0023c9c8(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0x24u;  // (from the original)
    call_001323b4(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = r0 + 0x170u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_00132364(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0023c9c8
GUEST_EXPORT(0x0023c9c8, d_0023c9c8::f_0023c9c8);

// f_0023c9e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023c9e4 {

inline constexpr guest::Function<0x00568690, u32(u32, u32, u32, u32)> call_00568690;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)

u32 f_0023c9e4(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0x24u;  // (from the original)
    call_00568c10(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = r0 + 0x24u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_00568690(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0023c9e4
GUEST_EXPORT(0x0023c9e4, d_0023c9e4::f_0023c9e4);

// f_0023cb48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023cb48 {

struct __attribute__((packed)) Object_0023cb48_0 {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
    u8 unknown_25[0x4b7];  // (not used here)
    u32 word_4dc;
};
GUEST_OFFSET(Object_0023cb48_0, byte_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_0023cb48_0, word_4dc, 0x4dc);  // (from the original)

inline constexpr guest::Function<0x001ce934, u32(u32, u32, u32, u32)> call_001ce934;  // (from the original)
inline constexpr guest::Function<0x00712c28, u32(u32, u32, u32, u32)> call_00712c28;  // (from the original)

u32 f_0023cb48(gptr<Object_0023cb48_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r5_1 = 0;
    u32 r2_1 = 0;
    u32 r2_2 = 0;
    u32 zf_1 = 0;
    u32 r3_2 = 0;
    u32 r3_3 = 0;
    u32 r4_1 = 0;
    u32 ea_1 = 0;
    u32 r2_3 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 ea_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r1_1 = arg0->word_4dc;
    if (r1_1 == 0) {
        goto L_23cc04;
    }
    r3_1 = u32(arg0->byte_24);
    r5_1 = 0u;
    r2_1 = r3_1 & 1u;
    if (r2_1 >= 2u) {
        r2_2 = r0 + 0x6cu;  // (from the original)
        goto L_23cb84;
    }
    r2_2 = r0 + (r2_1 + (r2_1 << 2) + (r2_1 << 6) << 2) + 0x6cu;  // (from the original)
L_23cb84:;
    zf_1 = *gptr<u32>(r2_2 + 0xcu) + 1u == 0;  // (from the original)
    if (!zf_1) {
        r2_2 = *gptr<u32>(r2_2 + 8u);
        zf_1 = r2_2 == 0;
    }
    if (!zf_1) {
        zf_1 = *gptr<u32>(r2_2 + 0x1cu) == 0;  // (from the original)
    }
    if (zf_1) {
        goto L_23cc04;
    }
    r3_2 = r3_1 & 1u;
    r3_3 = r3_2 + (r3_2 << 2);
    r4_1 = r0 + (r3_3 << 2) + 0x40u;  // (from the original)
    ea_1 = r2_2 + 0x20u;  // (from the original)
    r2_3 = ea_1;
    r0_1 = *gptr<u32>(ea_1);
    if (r0_1 == 0) {
        r0_2 = r5_1;
    } else {
        r0_2 = r0_1 + r2_3;
    }
    if (r0_2 == 0) {
        r5_1 = 0u;
        goto L_23cbd8;
    }
    ea_2 = r0_2 + 0x28u;  // (from the original)
    r2_3 = *gptr<u32>(ea_2);
    if (r2_3 != 0) {
        r5_1 = r2_3 + ea_2;
    }
L_23cbd8:;
    guest::cpu()->r[13] = r13;
    r0_3 = call_00712c28(r1_1, r1_1, r2_3, r3_3);
    *gptr<u32>(r13) = u32(2u);
    r1_2 = *gptr<u32>(r4_1 + 0x10u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001ce934(r5_1, r1_2, r0_3, r1);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return 1u;
L_23cc04:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_0023cb48
GUEST_EXPORT(0x0023cb48, d_0023cb48::f_0023cb48);

// f_0023d5ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023d5ec {

inline guest::global<u32, 0x00aaf14c> global_00aaf14c;  // (from the original)
inline constexpr guest::Function<0x0023d74c, u32(u32, u32, u32, u32)> call_0023d74c;  // (from the original)
inline constexpr guest::Function<0x0023d99c, u32(u32, u32, u32, u32)> call_0023d99c;  // (from the original)
inline constexpr guest::Function<0x0023e254, u32(u32, u32, u32, u32)> call_0023e254;  // (from the original)
inline constexpr guest::Function<0x002fcb10, u32(u32, u32, u32, u32)> call_002fcb10;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x00724424, u32(u32, u32, u32, u32)> call_00724424;  // (from the original)

u32 f_0023d5ec(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r2_3 = 0;
    u32 r3_1 = 0;
    u32 r0_7 = 0;
    u32 zf_1 = 0;
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r5 = r0;
    r4 = 0u;
    r8 = 0x953f68u;  // (from the original)
    r0_1 = *global_00aaf14c;
    if (r0_1 == 0) {
        goto L_23d730;
    }
    if ((u32(*gptr<u8>(r0_1 + 0x5712u)) & 1u) == 0) {  // (from the original)
        goto L_23d730;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_0023d74c(r5, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r8 + 1u) = u8(r0_2);
    *gptr<u8>(r8) = u8(r0_2);
    r6 = r5 + 0x6bd0u;  // (from the original)
    *gptr<u8>(r8 + 2u) = u8(r4);
L_23d63c:;
    r2_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_3 = call_00724424(r6, r4, r2_1, r3);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (u32(*gptr<u8>(r13)) != 0) {
        goto L_23d684;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_002fcb10(r0_3, r1_1, r2_2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        goto L_23d684;
    }
    guest::cpu()->r[13] = r13;
    r0_5 = call_002fcb34(r0_3, r1_1, r2_2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_5 == 0x98u) {  // (from the original)
        goto L_23d6c8;
    }
L_23d684:;
    r4 = r4 + 1u;
    if (r4 < 0x10u) {  // (from the original)
        guest::preempt();
        goto L_23d63c;
    }
    guest::cpu()->r[13] = r13;
    r0_6 = call_0023d99c(r5, r1_1, r2_2, r3);
    r1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_6 == 0) {
        goto L_23d6ec;
    }
    r0 = u32(*gptr<u8>(r8));
    if (r0 >= 0xau) {  // (from the original)
        goto L_23d6c4;
    }
    if ((r0 & 1u) != 0) {
        r0 = r0 - 1u;
    }
    r1 = 2u;
    *gptr<u8>(r8) = u8(r0);
    *gptr<u8>(r8 + 2u) = u8(r1);
L_23d6c4:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_23d6c8:;
    r0 = u32(*gptr<u8>(r8));
    r1 = 1u;
    if (r0 >= 0xau) {  // (from the original)
        guest::preempt();
        goto L_23d6c4;
    }
    if ((r0 & 1u) != 0) {
        r0 = r0 - 1u;
    }
    *gptr<u8>(r8) = u8(r0);
    *gptr<u8>(r8 + 2u) = u8(r1);
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_23d6ec:;
    guest::cpu()->r[13] = r13;
    r0_7 = call_0023e254(r5, r1, r2_3, r3_1);
    r1 = guest::cpu()->r[1];
    zf_1 = r0_7 == 0;
    r0 = u32(*gptr<u8>(r8));
    if (!zf_1) {
        if (r0 >= 0xau) {  // (from the original)
            guest::preempt();
            goto L_23d6c4;
        }
        if ((r0 & 1u) != 0) {
            r0 = r0 - 1u;
        }
        *gptr<u8>(r8) = u8(r0);
        *gptr<u8>(r8 + 2u) = u8(3u);
        r13 = r13 + 0x20;  // (from the original)
        guest::cpu()->r[1] = 3u;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    if ((r0 & 1u) == 0) {
        r0 = 0xau;  // (from the original)
    }
    *gptr<u8>(r8) = u8(r0);
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_23d730:;
    *gptr<u8>(r8) = u8(0xau);  // (from the original)
    *gptr<u8>(r8 + 1u) = u8(0xau);  // (from the original)
    *gptr<u8>(r8 + 2u) = u8(r4);
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0xau;  // (from the original)
}

}  // namespace d_0023d5ec
GUEST_EXPORT(0x0023d5ec, d_0023d5ec::f_0023d5ec);

// f_0023f704: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023f704 {

inline constexpr guest::Function<0x001b3300, u32(u32, u32, u32, u32)> call_001b3300;  // (from the original)
inline constexpr guest::Function<0x001c4bf4, u32(u32, u32, u32, u32)> call_001c4bf4;  // (from the original)
inline constexpr guest::Function<0x001c4c14, u32(u32, u32, u32, u32)> call_001c4c14;  // (from the original)
inline constexpr guest::Function<0x0070bcdc, u32(u32, u32, u32, u32)> call_0070bcdc;  // (from the original)
inline constexpr guest::Function<0x0070d904, u32(u32, u32, u32, u32)> call_0070d904;  // (from the original)

u32 f_0023f704(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r6_1 = 0;
    u32 r0_3 = 0;
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r7_1 = 0;
    u32 r0_5 = 0;
    u32 ea_2 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 zf_2 = 0;
    u32 cf_2 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r1_5 = 0;
    u32 r2_3 = 0;
    u32 r1_6 = 0;
    u32 r0_14 = 0;
    r8 = r1;
    r13 = r13 - 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_0070bcdc(0x98b2b8u, 0u, r2, r3);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r9 = r0_1;
    r0_2 = r8 + (r8 << 5);
    r6_1 = r0 + (r0_2 + (r0_2 << 2) << 2);
    r0_3 = r13;
    ea_1 = r6_1 + 0x7f4u;  // (from the original)
    r6 = ea_1;
    r1_1 = *gptr<u32>(ea_1);
    guest::cpu()->r[13] = r13;
    call_001c4c14(r0_3, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_4 = r2 + (r2 << 5);
    r7_1 = r0 + (r0_4 + (r0_4 << 2) << 2);
    r0_5 = r13 + 0xcu;  // (from the original)
    ea_2 = r7_1 + 0x7f4u;  // (from the original)
    r7 = ea_2;
    r1_2 = *gptr<u32>(ea_2);
    guest::cpu()->r[13] = r13;
    call_001c4c14(r0_5, r1_2, r2_2, r3_2);
    r3 = guest::cpu()->r[3];
    r5 = 0u;
L_23f75c:;
    r4 = 0u;
L_23f760:;
    r0_6 = *gptr<u32>(r6);
    r1_3 = *gptr<u32>(r0_6 + 0x1cu);  // (from the original)
    zf_1 = r1_3 == r5;
    cf_1 = r1_3 >= r5;
    if (cf_1 && !zf_1) {
        r0_7 = *gptr<u32>(r0_6 + 0x18u);  // (from the original)
        zf_1 = r0_7 == r4;
        cf_1 = r0_7 >= r4;
    }
    if (!cf_1 || zf_1) {
        goto L_23f7d4;
    }
    r0_8 = *gptr<u32>(r7);
    r1_4 = *gptr<u32>(r0_8 + 0x1cu);  // (from the original)
    zf_2 = r1_4 == r5;
    cf_2 = r1_4 >= r5;
    if (cf_2 && !zf_2) {
        r0_9 = *gptr<u32>(r0_8 + 0x18u);  // (from the original)
        zf_2 = r0_9 == r4;
        cf_2 = r0_9 >= r4;
    }
    if (!!cf_2 && !zf_2) {
        r0_10 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_11 = call_0070d904(r0_10, r5, r4, r3);
        r0_12 = r13;
        guest::cpu()->r[13] = r13;
        call_001c4bf4(r0_12, r5, r4, r0_11);
        r3 = guest::cpu()->r[3];
        goto L_23f7d4;
    }
    r0_13 = r13;
    guest::cpu()->r[13] = r13;
    call_001c4bf4(r0_13, r5, r4, r9);
    r3 = guest::cpu()->r[3];
L_23f7d4:;
    r4 = r4 + 1u;
    if (r4 < 0x40u) {  // (from the original)
        guest::preempt();
        goto L_23f760;
    }
    r5 = r5 + 1u;
    if (r5 < 0x20u) {  // (from the original)
        guest::preempt();
        goto L_23f75c;
    }
    r1_5 = *gptr<u32>(r6);
    r2_3 = r8 & 0xffu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001b3300(0x98b2b8u, r1_5, r2_3, r3);  // (from the original)
    r1_6 = guest::cpu()->r[1];
    r0_14 = r13;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    return r0_14;
}

}  // namespace d_0023f704
GUEST_EXPORT(0x0023f704, d_0023f704::f_0023f704);

// f_0023f820: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023f820 {

inline constexpr guest::Function<0x001b3300, u32(u32, u32, u32, u32)> call_001b3300;  // (from the original)
inline constexpr guest::Function<0x001c4bf4, u32(u32, u32, u32, u32)> call_001c4bf4;  // (from the original)
inline constexpr guest::Function<0x001c4c14, u32(u32, u32, u32, u32)> call_001c4c14;  // (from the original)
inline constexpr guest::Function<0x0070bcdc, u32(u32, u32, u32, u32)> call_0070bcdc;  // (from the original)
inline constexpr guest::Function<0x0070d904, u32(u32, u32, u32, u32)> call_0070d904;  // (from the original)

u32 f_0023f820(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r7_1 = 0;
    u32 r0_3 = 0;
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r6_1 = 0;
    u32 r0_5 = 0;
    u32 ea_2 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 zf_2 = 0;
    u32 cf_2 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r3_3 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r3_4 = 0;
    u32 r2_3 = 0;
    u32 r1_5 = 0;
    u32 r0_16 = 0;
    u32 zf_3 = 0;
    u32 cf_3 = 0;
    u32 r0_17 = 0;
    u32 r1_6 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r1_7 = 0;
    u32 r2_5 = 0;
    u32 r1_8 = 0;
    u32 r0_18 = 0;
    r8 = r1;
    r13 = r13 - 0x40u;  // (from the original)
    r9 = r2;
    guest::cpu()->r[13] = r13;
    r0_1 = call_0070bcdc(0x98b2b8u, 0u, r2, r3);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r11 = r0_1;
    r0_2 = r8 + (r8 << 5);
    r7_1 = r0 + (r0_2 + (r0_2 << 2) << 2);
    r0_3 = r13;
    ea_1 = r7_1 + 0x7f4u;  // (from the original)
    r7 = ea_1;
    r1_1 = *gptr<u32>(ea_1);
    guest::cpu()->r[13] = r13;
    call_001c4c14(r0_3, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_4 = r9 + (r9 << 5);
    r6_1 = r0 + (r0_4 + (r0_4 << 2) << 2);
    r0_5 = r13 + 0xcu;  // (from the original)
    ea_2 = r6_1 + 0x7f4u;  // (from the original)
    r6 = ea_2;
    r1_2 = *gptr<u32>(ea_2);
    guest::cpu()->r[13] = r13;
    call_001c4c14(r0_5, r1_2, r2_2, r3_2);
    r3 = guest::cpu()->r[3];
    r5 = 0u;
L_23f878:;
    r4 = 0u;
L_23f87c:;
    r0_6 = *gptr<u32>(r7);
    r1_3 = *gptr<u32>(r0_6 + 0x1cu);  // (from the original)
    zf_1 = r1_3 == r5;
    cf_1 = r1_3 >= r5;
    if (cf_1 && !zf_1) {
        r0_7 = *gptr<u32>(r0_6 + 0x18u);  // (from the original)
        zf_1 = r0_7 == r4;
        cf_1 = r0_7 >= r4;
    }
    r0_8 = *gptr<u32>(r6);
    r1_4 = *gptr<u32>(r0_8 + 0x1cu);  // (from the original)
    if (!!cf_1 && !zf_1) {
        zf_2 = r1_4 == r5;
        cf_2 = r1_4 >= r5;
        if (cf_2 && !zf_2) {
            r0_9 = *gptr<u32>(r0_8 + 0x18u);  // (from the original)
            zf_2 = r0_9 == r4;
            cf_2 = r0_9 >= r4;
        }
        if (!!cf_2 && !zf_2) {
            r0_10 = r13;
            guest::cpu()->r[13] = r13;
            r0_11 = call_0070d904(r0_10, r5, r4, r3);
            r3_3 = guest::cpu()->r[3];
            r0_12 = r13 + 0xcu;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0_13 = call_0070d904(r0_12, r5, r4, r3_3);
            r0_14 = r13;
            guest::cpu()->r[13] = r13;
            call_001c4bf4(r0_14, r5, r4, r0_13);
            r0_15 = r13 + 0xcu;  // (from the original)
            guest::cpu()->r[13] = r13;
            call_001c4bf4(r0_15, r5, r4, r0_11);
            r3 = guest::cpu()->r[3];
            goto L_23f93c;
        }
        r3_4 = r11;
        r2_3 = r4;
        r1_5 = r5;
        r0_16 = r13;
    } else {
        zf_3 = r1_4 == r5;
        cf_3 = r1_4 >= r5;
        if (cf_3 && !zf_3) {
            r0_17 = *gptr<u32>(r0_8 + 0x18u);  // (from the original)
            zf_3 = r0_17 == r4;
            cf_3 = r0_17 >= r4;
        }
        if (!cf_3 || zf_3) {
            goto L_23f93c;
        }
        r3_4 = r11;
        r2_3 = r4;
        r1_5 = r5;
        r0_16 = r13 + 0xcu;  // (from the original)
    }
    guest::cpu()->r[13] = r13;
    call_001c4bf4(r0_16, r1_5, r2_3, r3_4);
    r3 = guest::cpu()->r[3];
L_23f93c:;
    r4 = r4 + 1u;
    if (r4 < 0x40u) {  // (from the original)
        guest::preempt();
        goto L_23f87c;
    }
    r5 = r5 + 1u;
    if (r5 < 0x20u) {  // (from the original)
        guest::preempt();
        goto L_23f878;
    }
    r1_6 = *gptr<u32>(r7);
    r2_4 = r8 & 0xffu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001b3300(0x98b2b8u, r1_6, r2_4, r3);  // (from the original)
    r3_5 = guest::cpu()->r[3];
    r1_7 = *gptr<u32>(r6);
    r2_5 = r9 & 0xffu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001b3300(0x98b2b8u, r1_7, r2_5, r3_5);  // (from the original)
    r1_8 = guest::cpu()->r[1];
    r0_18 = r13;
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1_8;
    guest::cpu()->r[13] = r13;
    return r0_18;
}

}  // namespace d_0023f820
GUEST_EXPORT(0x0023f820, d_0023f820::f_0023f820);

// f_0023fa30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023fa30 {

inline guest::global<u32, 0x008490d8> global_008490d8;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)
inline constexpr guest::Function<0x0022c53c, u32(u32, u32, u32, u32)> call_0022c53c;  // (from the original)
inline constexpr guest::Function<0x0029b7c0, u32(u32, u32, u32, u32)> call_0029b7c0;  // (from the original)
inline constexpr guest::Function<0x002b6de0, u32(u32, u32, u32, u32)> call_002b6de0;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x005673c8, u32(u32, u32, u32, u32)> call_005673c8;  // (from the original)
inline constexpr guest::Function<0x005e8934, u32(u32, u32, u32, u32)> call_005e8934;  // (from the original)

u32 f_0023fa30(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 ea_3 = 0;
    u32 r2_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_1 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_2 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_3 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_4 = 0;
    u32 r2_6 = 0;
    u32 r3_5 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r1_5 = 0;
    u32 r2_7 = 0;
    u32 r3_6 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_6 = 0;
    u32 r2_8 = 0;
    u32 r3_7 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r1_7 = 0;
    u32 r2_9 = 0;
    u32 r3_8 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r1_8 = 0;
    u32 r2_10 = 0;
    u32 r3_9 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r3_10 = 0;
    u32 r0_24 = 0;
    u32 r1_9 = 0;
    u32 r2_11 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r0_27 = 0;
    u32 r1_10 = 0;
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002b6de0(r0, r1, r2, r3);
    ea_1 = r0_1 + 0xe4u;  // (from the original)
    *gptr<u32>(ea_1) = u32(0u);
    ea_2 = r0_1 + 0xe8u;  // (from the original)
    *gptr<u8>(ea_2) = u8(0u);
    r2_1 = *global_008490d8;
    r3_1 = *gptr<u32>(0x8490d8u + 4);  // (from the original)
    ea_3 = r0_1 + 0xecu;  // (from the original)
    *gptr<u32>(ea_3) = u32(r2_1);
    *gptr<u32>(ea_3 + 4) = u32(r3_1);
    *gptr<u32>(ea_3 + 8) = u32(0u);
    r2_2 = 0x8ee6ecu + 0x4cu;  // (from the original)
    *gptr<u8>(r0_1 + 0xf8u) = u8(0u);  // (from the original)
    *gptr<u32>(r0_1 + 0xfcu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_1) = u32(0x8ee6ecu);  // (from the original)
    r0_2 = r0_1 + 0xe0u;  // (from the original)
    *gptr<u32>(r0_2) = u32(r2_2);
    r0_3 = r0_2 + 0x20u;  // (from the original)
    *gptr<u32>(r0_3) = u32(0u);
    r0_4 = r0_3 + 4u;
    guest::cpu()->r[13] = r13;
    r0_5 = call_005673c8(r0_4, 0x8ee6ecu, r2_2, r3_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_6 = r0_5 + 8u;
    guest::cpu()->r[13] = r13;
    r0_7 = call_00125e3c(r0_6, r1_1, r2_3, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_8 = r0_7 + 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_9 = call_00125aec(r0_8, r1_2, r2_4, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_10 = r0_9 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_11 = call_00125aec(r0_10, r1_3, r2_5, r3_4);
    r1_4 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_12 = r0_11 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_13 = call_00125aec(r0_12, r1_4, r2_6, r3_5);
    r1_5 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_14 = r0_13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_15 = call_00125aec(r0_14, r1_5, r2_7, r3_6);
    r1_6 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_16 = r0_15 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_17 = call_00125aec(r0_16, r1_6, r2_8, r3_7);
    r1_7 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_18 = r0_17 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_19 = call_0029b7c0(r0_18, r1_7, r2_9, r3_8);
    r1_8 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_20 = r0_19 + 0x118u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_21 = call_0022c53c(r0_20, r1_8, r2_10, r3_9);
    r0_22 = r0_21 + 0x140u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_23 = call_00301d0c(r0_22, 0x335154u, 0x294u, 4u);  // (from the original)
    r3_10 = guest::cpu()->r[3];
    r0_24 = r0_23 - 0x578u;  // (from the original)
    r1_9 = r0_24 + 0x1000u;  // (from the original)
    *gptr<u32>(r0_24 + 0xfc8u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_24 + 0xfccu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_24 + 0xfe0u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_24 + 0xfe4u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_24 + 0xfe8u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_24 + 0xfecu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_24 + 0xff0u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_24 + 0xff4u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_24 + 0xff8u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_24 + 0xffcu) = u32(0u);  // (from the original)
    r2_11 = ~0u;
    *gptr<u32>(r1_9) = u32(0u);
    *gptr<u32>(r1_9 + 8u) = u32(r2_11);
    *gptr<u32>(r1_9 + 4u) = u32(0u);
    *gptr<u8>(r1_9 + 0xcu) = u8(0u);  // (from the original)
    *gptr<u8>(r1_9 + 0xdu) = u8(0u);  // (from the original)
    *gptr<u8>(r1_9 + 0xeu) = u8(0u);  // (from the original)
    *gptr<u8>(r1_9 + 0xfu) = u8(0u);  // (from the original)
    r0_25 = r0_24 + 0x1014u;  // (from the original)
    *gptr<u8>(r1_9 + 0x10u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_26 = call_005e8934(r0_25, r1_9, r2_11, r3_10);
    r0_27 = r0_26 - 0x1014u;  // (from the original)
    r1_10 = r0_27 + 0x10cu;  // (from the original)
    *gptr<u32>(r0_27 + 0x1cu) = u32(r1_10);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_10;
    guest::cpu()->r[13] = r13;
    return r0_27;
}

}  // namespace d_0023fa30
GUEST_EXPORT(0x0023fa30, d_0023fa30::f_0023fa30);
