// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_00770060: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00770060 {

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> call_005361a8;  // (from the original)
inline constexpr guest::Function<0x00768da0, u32(u32, u32, u32, u32)> call_00768da0;  // (from the original)

u32 f_00770060(u32 r0, u32 r1, u32 r2, float S0, float S1, float S2) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x28u;  // (from the original)
    r7 = r0;
    r8 = r1;
    r9 = r2;
    r1 = 0x2000u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_002fcbb0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_005361a8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r5 = r0;
    if (r0 == 0) {
        goto L_770140;
    }
    r10 = 0x172bu;  // (from the original)
    r6 = 0u;
    r4 = r6;
L_77009c:;
    res = u32(*gptr<u8>(r5 + 0x1cu)) << 0x1b;  // (from the original)
    if (!(res >> 0x1f)) {  // (from the original)
        goto L_7700f8;
    }
    r1 = uxth(r4 + 0x2000u);  // (from the original)
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_002fcbb0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_00768da0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    res = r0;
    if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_7700f0;
    }
    r1 = u32(s32(r0) >> 5);
    r0 = r0 & 0x1fu;  // (from the original)
    if (r1 >= 0xbau) {  // (from the original)
        goto L_7700f0;
    }
    r1 = *gptr<u32>(r7 + (r1 << 2));
    if ((lsr_r(r1, r0 & 0xff) & 1u) != 0) {  // (from the original)
        r6 = r6 + 1u;
    }
L_7700f0:;
L_7700f8:;
    r4 = r4 + 1u;
    r5 = r5 + 0x1eu;  // (from the original)
    if (u32(r10 >= r4) && !u32(r10 == r4)) {
        guest::preempt();
        goto L_77009c;
    }
    r0 = 0xe86u;  // (from the original)
    if (r9 != 0) {
        *gptr<u32>(r9) = u32(r0);
    }
    if (r8 != 0) {
        *gptr<u32>(r8) = u32(r6);
    }
    if (r6 == 0) {
        goto L_770140;
    }
    if (u32(r0 >= r6) && !u32(r0 == r6)) {
        goto L_770154;
    }
    r0 = 0x64u;  // (from the original)
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_770140:;
    r0 = 0u;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_770154:;
    S1 = std::bit_cast<float>(*gptr<u32>(0x7701b4u));  // (from the original)
    S0 = float(std::bit_cast<u32>(std::bit_cast<float>(r6))) * std::bit_cast<float>(*gptr<u32>(0x7701b0u)) / S1;  // (from the original)
    if (s32(std::bit_cast<u32>(S0)) < s32(0x3f800000u)) {  // (from the original)
        r0 = 1u;
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    S0 = std::bit_cast<float>(vcvt_uz_f(S0));
    r0 = std::bit_cast<u32>(S0);
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
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
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = u32(arg0->byte_0);
    r5 = r2;
    if (r0 != r1) {
        goto L_770298;
    }
    r0 = call_005359fc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (*gptr<u32>(r0 + 4u) < r5) {
        goto L_770298;
    }
    r1 = *gptr<u32>(r4 + (r5 << 2) + 4u);
    r0 = u32(*gptr<u8>(r4));
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_006b9b30(r0, r1, r2, guest::cpu()->r[3]);
L_770298:;
    r0 = 0x7ffeu;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0077025c
GUEST_EXPORT(0x0077025c, d_0077025c::f_0077025c);

// f_00770300: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00770300 {

struct __attribute__((packed)) Object_00770300_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_00770300_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00770300_0, word_4, 0x4);  // (from the original)


u32 f_00770300(gptr<Object_00770300_0> arg0) {
    u64 t = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    guest::cpu()->r[13] -= 8u;
    r1 = arg0->word_4;
    r2 = arg0->word_0;
    if (r1 >= 1u) {
        t = u64(0xffu) + ~r1 + u32(~0u >= r2);  // (from the original)
        if (!u32(t >> 0x20)) {  // (from the original)
            r1 = r1 & 0xffu;  // (from the original)
        }
    }
    r3 = u32(*gptr<u8>(r0 + 9u));
    r0 = r2;
    guest::cpu()->r[13] += 8u;
    r1 = uxth(u32(u64(r1) + (r3 << 8) + u32(r2 < r2)));
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 r0 = arg0.addr();
    r0 = arg0->word_0;
    if (r0 != 1u) {
        return r0;
    }
    if (r1 != 0) {
        r0 = 0u;
    }
    return r0;
}

}  // namespace d_007703c8
GUEST_EXPORT(0x007703c8, d_007703c8::f_007703c8);

// f_007709b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007709b4 {

struct __attribute__((packed)) Object_007709b4_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
};
GUEST_OFFSET(Object_007709b4_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_007709b4_0, byte_9, 0x9);  // (from the original)


u32 f_007709b4(gptr<Object_007709b4_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    float S4 = 0;
    r1 = 0x88f97cu;  // (from the original)
    S3 = std::bit_cast<float>(*gptr<u32>(0x770a3cu));  // (from the original)
    r3 = 0xc0a66665u;  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r1));
    r12 = r3 + 0x3f800000u;  // (from the original)
    S2 = std::bit_cast<float>(*gptr<u32>(r1 + 4u)) - S4;
    S1 = S2 * float(std::bit_cast<u32>(std::bit_cast<float>(u32(arg0->byte_9))));
    S0 = S4 + S1 * S3;
    r2 = std::bit_cast<u32>(S0) + r3;
    if (u32(r2 >= r12) && !u32(r2 == r12)) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    S1 = std::bit_cast<float>(*gptr<u32>(r1));
    r1 = 0xc0cccccdu;  // (from the original)
    S1 = S1 + S2 * float(std::bit_cast<u32>(std::bit_cast<float>(u32(arg0->byte_8)))) * S3;
    if (r1 + 0x3f800000u >= std::bit_cast<u32>(S1 / S0) + r1) {  // (from the original)
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
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
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r12 = 0x890200u;  // (from the original)
    r13 = r13 - 4u;
    r3 = arg0->word_c;
    r1 = *gptr<u32>(r12 + 0x1cu);  // (from the original)
    if (r3 != *gptr<u32>(r12 + 0x18u)) {  // (from the original)
        goto L_770bb0;
    }
    if (r3 == 0) {
        if (((arg0->word_10 | r1) & 1u) == 0) {
            goto L_770ba8;
        }
    }
    if (*gptr<u32>(r0 + 0x10u) != r1) {  // (from the original)
        goto L_770bb0;
    }
L_770ba8:;
    r4 = 1u;
    goto L_770bb4;
L_770bb0:;
    r4 = 0u;
L_770bb4:;
    ea = r12 + 0x10u;  // (from the original)
    r1 = *gptr<u32>(ea + 4u);
    if (r3 != *gptr<u32>(ea)) {
        goto L_770bf0;
    }
    if (r3 == 0) {
        if (((*gptr<u32>(r0 + 0x10u) | r1) & 1u) == 0) {  // (from the original)
            goto L_770be8;
        }
    }
    if (*gptr<u32>(r0 + 0x10u) != r1) {  // (from the original)
        goto L_770bf0;
    }
L_770be8:;
    r0 = 1u;
    r0 = r0 | r4;
    r13 = r13 + 4u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_770bf0:;
    r0 = 0u;
    r0 = r0 | r4;
    r13 = r13 + 4u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 r0 = arg0.addr();
    r0 = arg0->word_c;
    return r0;
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
    u32 r0 = arg0.addr();
    if (arg0->word_4 >= 0x64u) {  // (from the original)
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    return r0;
}

}  // namespace d_00770c10
GUEST_EXPORT(0x00770c10, d_00770c10::f_00770c10);

// f_00779500: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00779500 {

inline constexpr guest::Function<0x00131294, u32(u32, u32, u32, u32)> call_00131294;  // (from the original)

u32 f_00779500(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r3 = 0u;
    r1 = r0;
    r2 = 4u;
    r0 = r3;
    return call_00131294(r0, r1, r2, r3);
}

}  // namespace d_00779500
GUEST_EXPORT(0x00779500, d_00779500::f_00779500);

// f_00779704: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00779704 {


u32 f_00779704(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    r2 = 0x974a7cu;  // (from the original)
    guest::cpu()->r[13] -= 0xcu;  // (from the original)
    r12 = *gptr<u32>(r2);
    r3 = *gptr<u32>(r2 + 4u);
    if (r12 + (r1 << 2) + 8u >= r3) {
        *gptr<u32>(r2) = u32(r3);
        goto L_779758;
    }
    if (r1 == 0) {
        goto L_779758;
    }
    r1 = r1 - 1u;
    *gptr<u32>(r12) = u32(0u);
    *gptr<u32>(r12 + 4) = u32(r0 | r1 << 0x14);  // (from the original)
    r0 = r12 + 8u;
    if ((r1 & 1u) != 0) {
        r1 = r1 + 1u;
    }
    *gptr<u32>(r2) = u32(r0);
    r0 = r0 + (r1 << 2);
    *gptr<u32>(r2) = u32(r0);
L_779758:;
    guest::cpu()->r[13] += 0xcu;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00779704
GUEST_EXPORT(0x00779704, d_00779704::f_00779704);

// f_00779848: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00779848 {


u32 f_00779848() {
    u32 r0 = 0;
    r0 = *gptr<u32>(*gptr<u32>(*gptr<u32>(0x97d46cu) + 8u) + 0xcu);  // (from the original)
    return r0;
}

}  // namespace d_00779848
GUEST_EXPORT(0x00779848, d_00779848::f_00779848);

// f_00779860: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00779860 {


u32 f_00779860() {
    u32 r0 = 0;
    r0 = *gptr<u32>(*gptr<u32>(*gptr<u32>(0x97d46cu) + 8u) + 0x1cu);  // (from the original)
    return r0;
}

}  // namespace d_00779860
GUEST_EXPORT(0x00779860, d_00779860::f_00779860);

// f_0077a214: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0077a214 {


u32 f_0077a214(float S0, float S1) {
    u32 res = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 nf = 0;
    u32 vf = 0;
    u32 fpsr = guest::cpu()->fpscr;
    float S2 = 0;
    r0 = std::bit_cast<u32>(S0);
    r1 = (r0 << 1 >> 0x18) - 0x7fu;  // (from the original)
    if (s32(r1) >= s32(0x17u)) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    res = r1;
    S2 = std::bit_cast<float>(*gptr<u32>(0x77a29cu));  // (from the original)
    S1 = S0 + std::bit_cast<float>(*gptr<u32>(0x77a298u));  // (from the original)
    if (res >> 0x1f != (r1 & (r1 ^ res)) >> 0x1f) {  // (from the original)
        if ((fpsr & 0xfffffffu | vfp_cmpf(S2, S1)) >> 0x1d & 1) {  // (from the original)
            S0 = std::bit_cast<float>(r0);
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            return r0;
        }
        res = r0;
        nf = res >> 0x1f;  // (from the original)
        vf = (r0 & (r0 ^ res)) >> 0x1f;  // (from the original)
        if (!u32(res == 0) && nf == vf) {
            r0 = 0x3f800000u;  // (from the original)
        }
        if (nf != vf) {
            r0 = 0x80000000u;  // (from the original)
        }
        S0 = std::bit_cast<float>(r0);
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r2 = lsr_r(0x7fffffu, r1 & 0xff);  // (from the original)
    if ((r0 & r2) == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1, S2);  // (from the original)
    if (fpsr >> 0x1e & 1 || fpsr >> 0x1f != (fpsr >> 0x1c & 1)) {  // (from the original)
        S0 = std::bit_cast<float>(r0);
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    res = r0;
    if (u32(res == 0) || res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r0 = r0 & ~r2;
        S0 = std::bit_cast<float>(r0);
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r1 = lsr_r(0x800000u, r1 & 0xff);  // (from the original)
    r0 = r0 + r1;
    r0 = r0 & ~r2;
    S0 = std::bit_cast<float>(r0);
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0077a214
GUEST_EXPORT(0x0077a214, d_0077a214::f_0077a214);

// f_0077a2a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0077a2a4 {

inline constexpr guest::Function<0x00101a13, u32(u32, u32, u32, u32)> call_00101a12;  // (from the original)
inline constexpr guest::Function<0x0077b710, u32(u32, u32, u32, u32)> call_0077b710;  // (from the original)

u32 f_0077a2a4(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3, float S0, float S1, float S2, float S3, float S4) {
    u32 b = 0;
    u32 res = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    u32 cf = 0;
    r2 = 0x7e921fb6u;  // (from the original)
    r1 = std::bit_cast<u32>(S0);
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    b = r1 << 1;
    r0 = r13;
    if (!(!u32(r2 >= b) || u32(r2 == b))) {
        b = 0x73000000u;  // (from the original)
        r0 = b;
        b = r1 << 1;
        zf = r0 == b;
        cf = r0 >= b;
        if (cf && !zf) {
            r0 = ~0u;
        }
        if (!cf || zf) {
            r0 = 0u;
        }
        *gptr<u32>(r13) = u32(r0);
        goto L_77a33c;
    }
    r3 = 0x46490e49u;  // (from the original)
    r2 = r1 & ~0x80000000u;  // (from the original)
    if (!(!u32(r3 >= r2) || u32(r3 == r2))) {
        S4 = std::bit_cast<float>(*gptr<u32>(0x77a3f4u));  // (from the original)
        S3 = std::bit_cast<float>(*gptr<u32>(0x77a3fcu));  // (from the original)
        S2 = S0 * std::bit_cast<float>(*gptr<u32>(0x77a3e8u));  // (from the original)
        S1 = std::bit_cast<float>(*gptr<u32>(0x77a3ecu));  // (from the original)
        if ((r1 & 0x80000000u) == 0) {  // (from the original)
            S1 = S2 + S1 - S1;
        } else {
            S1 = S2 - S1 + S1;
        }
        S0 = S0 - S1 * std::bit_cast<float>(*gptr<u32>(0x77a3f0u));  // (from the original)
        S2 = std::bit_cast<float>(*gptr<u32>(0x77a3f8u));  // (from the original)
        *gptr<u32>(r13) = u32(std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(S1))) & 3u);
        S0 = S0 - S1 * S4 - S1 * S2 - S1 * S3;
        goto L_77a33c;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    r0 = call_0077b710(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
L_77a33c:;
    r0 = *gptr<u32>(r13);
    S1 = S0;
    S0 = std::bit_cast<float>(*gptr<u32>(0x77a400u));  // (from the original)
    res = r0;
    if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r0 = std::bit_cast<u32>(S1) << 1;
        zf = r0 == 0xff000000u;  // (from the original)
        cf = r0 >= 0xff000000u;  // (from the original)
        if (cf && !zf) {
            S0 = S1 + S1;
        }
        if (!cf) {
            r13 = r13 + 8;
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            return r0;
        }
        if (!zf) {
            r13 = r13 + 8;
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            return r0;
        }
        r0 = 1u;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        r0 = call_00101a12(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        S1 = std::bit_cast<float>(*gptr<u32>(0x77a404u));  // (from the original)
        S0 = S1 / S1;
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    if ((r0 & 1u) != 0) {
        S2 = S1 * S1;
        S0 = S1 + S1 * ((std::bit_cast<float>(*gptr<u32>(0x77a410u)) + S2 * (std::bit_cast<float>(*gptr<u32>(0x77a40cu)) - S2 * std::bit_cast<float>(*gptr<u32>(0x77a408u)))) * S2);  // (from the original)
        if ((r0 & 2u) != 0) {
            r13 = r13 + 8;
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            return r0;
        }
        S0 = -S0;
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    S1 = S1 * S1;
    S0 = S0 + S1 * (std::bit_cast<float>(*gptr<u32>(0x77a41cu)) + S1 * (std::bit_cast<float>(*gptr<u32>(0x77a418u)) + S1 * std::bit_cast<float>(*gptr<u32>(0x77a414u))));  // (from the original)
    if ((r0 & 2u) == 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    S0 = -S0;
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0077a2a4
GUEST_EXPORT(0x0077a2a4, d_0077a2a4::f_0077a2a4);

// f_0077a650: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0077a650 {


u32 f_0077a650(float S0, float S1) {
    u32 res = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 fpsr = guest::cpu()->fpscr;
    float S2 = 0;
    r0 = std::bit_cast<u32>(S0);
    r1 = (r0 << 1 >> 0x18) - 0x7fu;  // (from the original)
    if (s32(r1) >= s32(0x17u)) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    res = r1;
    S2 = std::bit_cast<float>(*gptr<u32>(0x77a6e0u));  // (from the original)
    S1 = S0 + std::bit_cast<float>(*gptr<u32>(0x77a6dcu));  // (from the original)
    if (res >> 0x1f != (r1 & (r1 ^ res)) >> 0x1f) {  // (from the original)
        if ((fpsr & 0xfffffffu | vfp_cmpf(S2, S1)) >> 0x1d & 1) {  // (from the original)
            S0 = std::bit_cast<float>(r0);
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            return r0;
        }
        res = r0;
        if (res >> 0x1f == (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
            r0 = 0u;
            S0 = std::bit_cast<float>(r0);
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            return r0;
        }
        if (r0 != 0x80000000u) {  // (from the original)
            r0 = 0xbf800000u;  // (from the original)
        }
        S0 = std::bit_cast<float>(r0);
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r2 = lsr_r(0x7fffffu, r1 & 0xff);  // (from the original)
    if ((r0 & r2) == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    if ((fpsr & 0xfffffffu | vfp_cmpf(S2, S1)) >> 0x1d & 1) {  // (from the original)
        S0 = std::bit_cast<float>(r0);
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    res = r0;
    if (res >> 0x1f == (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r0 = r0 & ~r2;
        S0 = std::bit_cast<float>(r0);
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r1 = lsr_r(0x800000u, r1 & 0xff);  // (from the original)
    r0 = r0 + r1;
    r0 = r0 & ~r2;
    S0 = std::bit_cast<float>(r0);
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
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
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 4u;
    *gptr<u32>(ea) = u32(r0);
    r13 = ea;
    ea = r13 - 8u;
    *gptr<u32>(ea) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(ea + 4) = u32(std::bit_cast<u32>(S1));
    r13 = r13 - 8u;
    r1 = *gptr<u32>(r13);
    if (0xff000000u < r1 << 1) {  // (from the original)
        arg0->word_0 = u32(r1);
        S0 = std::bit_cast<float>(*gptr<u32>(r13));
        r13 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return;
    }
    r3 = r1 & 0x80000000u;  // (from the original)
    r2 = (r1 << 1 >> 0x18) - 0x7fu;  // (from the original)
    if (s32(r2) >= s32(0x17u)) {  // (from the original)
        goto L_77abe0;
    }
    res = r2;
    if (res >> 0x1f != (r2 & (r2 ^ res)) >> 0x1f) {  // (from the original)
        r1 = r1 & 0x80000000u;  // (from the original)
        arg0->word_0 = u32(r1);
        S0 = std::bit_cast<float>(*gptr<u32>(r13));
        r13 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return;
    }
    r2 = lsr_r(0x7fffffu, r2 & 0xff);  // (from the original)
    if ((r1 & r2) == 0) {
        goto L_77abe0;
    }
    r1 = r1 & ~r2;
    arg0->word_0 = u32(r1);
    S1 = std::bit_cast<float>(*gptr<u32>(r13));
    r13 = r13 + 0xcu;  // (from the original)
    S0 = S1 - std::bit_cast<float>(r1);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
L_77abe0:;
    arg0->word_0 = u32(r1);
    S0 = std::bit_cast<float>(r3);
    *gptr<u32>(r13) = u32(r3);
    r13 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_0077ab5c
GUEST_EXPORT(0x0077ab5c, d_0077ab5c::f_0077ab5c);

// f_0077b6e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0077b6e8 {


void f_0077b6e8() {
    double dset_0 = 0;
    float S0 = 0;
    float S1 = 0;
    S0 = std::bit_cast<float>(*gptr<u32>(0x77b6f8u));  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(0x77b6f8u + 4));  // (from the original)
    dset_0 = D2F(S0, S1) * D2F(S0, S1);
    S0 = std::bit_cast<float>(u32(std::bit_cast<u64>(dset_0)));
    S1 = std::bit_cast<float>(u32(std::bit_cast<u64>(dset_0) >> 0x20u));  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_0077b6e8
GUEST_EXPORT(0x0077b6e8, d_0077b6e8::f_0077b6e8);

// f_0077b700: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0077b700 {


void f_0077b700() {
    float S0 = 0;
    S0 = std::bit_cast<float>(*gptr<u32>(0x77b70cu));  // (from the original)
    S0 = S0 * S0;
    guest::cpu()->s[0] = S0;
    return;
}

}  // namespace d_0077b700
GUEST_EXPORT(0x0077b700, d_0077b700::f_0077b700);

// f_0077b854: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0077b854 {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)

u32 f_0077b854(u32 r0, u32 r1, u32 r2) {
    u32 r3 = 0;
    r3 = r1;
    if (r2 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r0;
    r0 = r3;
    return call_002f8574(r0, r1, r2, r3);
}

}  // namespace d_0077b854
GUEST_EXPORT(0x0077b854, d_0077b854::f_0077b854);

// f_0077f2ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0077f2ac {

inline constexpr guest::Function<0x0079fb70, u32(u32, u32, u32, u32)> call_0079fb70;  // (from the original)

u32 f_0077f2ac(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = 0x97d470u;  // (from the original)
    r0 = *gptr<u32>(*gptr<u32>(r4 + 8u));
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r3 = *gptr<u32>(r4 + 8u);
    r2 = 0x6051u;  // (from the original)
    r1 = r3 + 0x1770u;  // (from the original)
    if (*gptr<u32>(r0 + 0xe38u) == r2) {  // (from the original)
        if (*gptr<u32>(r1) == r2) {
            goto L_77f338;
        }
        r2 = 0x974a7cu;  // (from the original)
        r1 = *gptr<u32>(r2);
        r0 = *gptr<u32>(0x974a80u);  // (from the original)
        if (!u32(r0 >= r1) || u32(r0 == r1)) {
            goto L_77f338;
        }
        *gptr<u32>(r1) = u32(0u);
        *gptr<u32>(r1 + 4) = u32(0xf0125u);  // (from the original)
        *gptr<u32>(r2) = u32(r1 + 8u);
        goto L_77f338;
    }
    r1 = *gptr<u32>(r1);
    if (r1 != r2) {
        goto L_77f338;
    }
    r0 = u32(*gptr<u8>(r0 + 0xe74u));  // (from the original)
    if (r0 != 0) {
        r0 = call_0079fb70(r0, r1, r2, r3);
    }
L_77f338:;
    r0 = *gptr<u32>(r4 + 8u);
    r1 = *gptr<u32>(r0);
    r0 = r0 + 0x1770u;  // (from the original)
    r1 = *gptr<u32>(r1 + 0xe38u);  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0077f2ac
GUEST_EXPORT(0x0077f2ac, d_0077f2ac::f_0077f2ac);
