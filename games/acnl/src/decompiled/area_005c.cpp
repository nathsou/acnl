// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_005c00f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c00f0 {


void f_005c00f0(u32 r0, u32 r1, u32 r2) {
    if (r1 < 4u) {
        *gptr<u8>(r0 + r1) = u8(r2 & 3u);
    }
    return;
}

}  // namespace d_005c00f0
GUEST_EXPORT(0x005c00f0, d_005c00f0::f_005c00f0);

// f_005c0100: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c0100 {


u32 f_005c0100(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r7_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 vf_1 = 0;
    *gptr<u32>(r13 + 0xffffffecu) = u32(r3);  // (from the original)
    r13 = r13 - 0x14;  // (from the original)
    r2 = r0;
    r12 = ~0u;
    r0 = u32(s32(s8(*gptr<u8>(r0 + r1))));
    if (s32(r0) < s32(4u)) {
        if (r0 >> 0x1f == (r0 & (r0 ^ r0)) >> 0x1f) {  // (from the original)
            r13 = r13 + 0x14;  // (from the original)
            guest::cpu()->r[13] = r13;
            return r0;
        }
    }
    r3 = 0u;
    r4 = 1u;
    *gptr<u8>(r13) = u8(0u);
    do {
L_5c0130:;
        r0_1 = u32(s32(s8(*gptr<u8>(r2 + r3))));
        if (!(r0_1 >= 4u)) {
            r7_1 = r0_1 & 7u;
            r0_2 = r13 + (r0_1 >> 3);
            *gptr<u8>(r0_2) = u8(u32(*gptr<u8>(r0_2)) | lsl_r(r4, r7_1 & 0xff));  // (from the original)
        }
        r3 = r3 + 1u;
        guest::preempt();
    } while (r3 < 4u);
    r0 = 0u;
    r3 = r13;
L_5c0168:;
    if ((lsr_r(u32(*gptr<u8>(r3 + (r0 >> 3))), r0 & 7u) & 1u) == 0) {
        goto L_5c01bc;
    }
    r0 = r0 + 1u;
    if (r0 < 4u) {
        r3 = r13;
        guest::preempt();
        goto L_5c0168;
    }
    r0 = 0u;
    if (r1 >= 4u) {
        r13 = r13 + 0x14;  // (from the original)
        guest::cpu()->r[13] = r13;
        return r0;
    }
L_5c0198:;
    if (u32(s32(s8(*gptr<u8>(r2 + r0)))) >= 4u) {
        goto L_5c01d0;
    }
    r0 = u32(s32(s8(*gptr<u8>(r2 + r1))));
    res_1 = r0 - 4u;
    nf_1 = res_1 >> 0x1f;  // (from the original)
    vf_1 = ((r0 ^ 4u) & (r0 ^ res_1)) >> 0x1f;  // (from the original)
    if (nf_1 == vf_1) {
        r0 = r12;
    }
    if (nf_1 != vf_1) {
        nf_1 = r0 >> 0x1f;  // (from the original)
        vf_1 = 0u;
    }
    if (nf_1 != vf_1) {
        goto L_5c01e8;
    }
    goto L_5c01e0;
L_5c01bc:;
    if (r1 < 4u) {
        *gptr<u8>(r2 + r1) = u8(r0 & 3u);
    }
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[13] = r13;
    return r0;
L_5c01d0:;
    r0 = r0 + 1u;
    if (r0 < 4u) {
        guest::preempt();
        goto L_5c0198;
    }
    r0 = r1;
L_5c01e0:;
    if (r0 < 4u) {
        r13 = r13 + 0x14;  // (from the original)
        guest::cpu()->r[13] = r13;
        return r0;
    }
L_5c01e8:;
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[13] = r13;
    return r1;
}

}  // namespace d_005c0100
GUEST_EXPORT(0x005c0100, d_005c0100::f_005c0100);

// f_005c021c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c021c {

inline guest::global<u32, 0x00aaf14c> global_00aaf14c;  // (from the original)
inline constexpr guest::Function<0x001b4a8c, u32(u32, u32, u32, u32)> call_001b4a8c;  // (from the original)
inline constexpr guest::Function<0x002bf9cc, u32(u32, u32, u32, u32)> call_002bf9cc;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x0030bb10, u32(u32, u32, u32, u32)> call_0030bb10;  // (from the original)
inline constexpr guest::Function<0x00607bdc, u32(u32, u32, u32, u32)> call_00607bdc;  // (from the original)
inline constexpr guest::Function<0x00657748, u32(u32, u32, u32, u32)> call_00657748;  // (from the original)
inline constexpr guest::Function<0x0071a844, u32(u32, u32, u32, u32)> call_0071a844;  // (from the original)
inline constexpr guest::Function<0x007241b0, u32(u32, u32, u32, u32)> call_007241b0;  // (from the original)

u32 f_005c021c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r4_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r2_6 = 0;
    u32 r1_3 = 0;
    u32 r2_7 = 0;
    u32 r3_6 = 0;
    u32 r0_10 = 0;
    u32 r1_4 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00607bdc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_5c0240;
    }
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0u;
L_5c0240:;
    r4_1 = *global_00aaf14c;
    if (r4_1 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_2 = r4_1 + 0xau;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_0071a844(r0_2, r1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_4 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_4, r0_3, r2_2, r3_2);
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r4_2 = r4_1 + 0x6bd0u;  // (from the original)
    r0_5 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_6 = call_0030bb10(r0_5, r1_1, r2_3, r3_3);
    r1_2 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_6 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    guest::cpu()->r[13] = r13;
    r0_7 = call_007241b0(r4_2, r1_2, r2_4, r3_4);
    r1_2 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_7 + 1u == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_8 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_9 = call_00657748(r0_8, r1_2, r2_5, r3_5);
    *gptr<u32>(r13) = u32(r0_9 ^ 1u);
    r2_6 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_002bf9cc(r4_2, r0_7, r2_6, 0u);
    r1_3 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if (r0_7 >= 0x10u) {  // (from the original)
        goto L_5c02f4;
    }
    r0_10 = *global_00aaf14c;
    if (r0_10 == 0) {
        goto L_5c02f4;
    }
    r1_4 = r0_10 + 0x55a6u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001b4a8c(r0, r1_4, r2_7, r3_6);
    r1_3 = guest::cpu()->r[1];
    *gptr<u32>(r0 + 0x30u) = u32(r0_7);  // (from the original)
    *gptr<u8>(r0 + 0x34u) = u8(0u);  // (from the original)
    *gptr<u8>(r0 + 0x35u) = u8(0u);  // (from the original)
L_5c02f4:;
    *gptr<u8>(r0 + 0x35u) = u8(1u);  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_005c021c
GUEST_EXPORT(0x005c021c, d_005c021c::f_005c021c);

// f_005c032c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c032c {

inline constexpr guest::Function<0x005c0334, u32(u32, u32, u32, u32)> call_005c0334;  // (from the original)

u32 f_005c032c(u32 r0) {
    return call_005c0334(r0, guest::cpu()->r[1], 0u, guest::cpu()->r[3]);
}

}  // namespace d_005c032c
GUEST_EXPORT(0x005c032c, d_005c032c::f_005c032c);

// f_005c0648: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c0648 {

inline guest::global<u32, 0x00aaf14c> global_00aaf14c;  // (from the original)
inline constexpr guest::Function<0x001b4a8c, u32(u32, u32, u32, u32)> call_001b4a8c;  // (from the original)

u32 f_005c0648(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_2 = 0;
    u32 r6_1 = 0;
    if (r1 >= 0x10u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r5_1 = r1;
    r0_1 = *global_00aaf14c;
    if (r0_1 != 0) {
        r1_1 = r0_1 + 0x55a6u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_001b4a8c(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0_1 = 0u;
        *gptr<u32>(r0 + 0x30u) = u32(r5_1);  // (from the original)
        *gptr<u8>(r0 + 0x34u) = u8(r0_1);  // (from the original)
        *gptr<u8>(r0 + 0x35u) = u8(r0_1);  // (from the original)
    }
    ea_2 = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_2 = *gptr<u32>(ea_2 + 4);
    r6_1 = *gptr<u32>(ea_2 + 8);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_005c0648
GUEST_EXPORT(0x005c0648, d_005c0648::f_005c0648);

// f_005c0694: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c0694 {

inline constexpr guest::Function<0x005c0334, u32(u32, u32, u32, u32)> call_005c0334;  // (from the original)

u32 f_005c0694() {
    return call_005c0334(guest::cpu()->r[0], guest::cpu()->r[1], 1u, guest::cpu()->r[3]);
}

}  // namespace d_005c0694
GUEST_EXPORT(0x005c0694, d_005c0694::f_005c0694);

// f_005c069c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c069c {

inline guest::global<u32, 0x00aaf14c> global_00aaf14c;  // (from the original)

u32 f_005c069c(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    r0_1 = *global_00aaf14c;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    r0_2 = 1u & ~u32(*gptr<u8>(r0_1 + 0x55bau));  // (from the original)
    guest::cpu()->r[1] = 1u;
    return r0_2;
}

}  // namespace d_005c069c
GUEST_EXPORT(0x005c069c, d_005c069c::f_005c069c);

// f_005c0874: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c0874 {

inline guest::global<u8, 0x00aadad4> global_00aadad4;  // (from the original)

u32 f_005c0874() {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    *global_00aadad4 = u8(u32(*global_00aadad4) & ~0x40u);  // (from the original)
    r0_1 = 0xaadad4u + 1u;  // (from the original)
    r1_1 = u32(*gptr<u8>(r0_1)) & ~0x20u;  // (from the original)
    *gptr<u8>(r0_1) = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_005c0874
GUEST_EXPORT(0x005c0874, d_005c0874::f_005c0874);

// f_005c0898: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c0898 {

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x00765e04, u32(u32, u32, u32, u32)> call_00765e04;  // (from the original)

u32 f_005c0898(u32 r0) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_005c33d0(4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        r0_2 = call_00765e04(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        guest::cpu()->r[13] += 8u;
        return call_002fc934(r0, r0_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 8u;
    return call_002fc934(r0, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_005c0898
GUEST_EXPORT(0x005c0898, d_005c0898::f_005c0898);

// f_005c0a68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c0a68 {

inline constexpr guest::Function<0x005c0874, u32(u32, u32, u32, u32)> call_005c0874;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x00665130, u32(u32, u32, u32, u32)> call_00665130;  // (from the original)
inline constexpr guest::Function<0x006736dc, u32(u32, u32, u32, u32)> call_006736dc;  // (from the original)
inline constexpr guest::Function<0x00763818, u32(u32, u32, u32, u32)> call_00763818;  // (from the original)

u32 f_005c0a68() {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r4_1 = 0;
    u32 res_1 = 0;
    u32 r0_2 = 0;
    u32 zf_1 = 0;
    u32 r0_3 = 0;
    u32 res_2 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r1_5 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_005c33d0(4u, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r4_1 = r0_1;
    if (r0_1 == 0) {
        goto L_5c0ad4;
    }
    res_1 = u32(*gptr<u8>(r4_1 + 0x171u)) << 0x1a >> 0x1f;  // (from the original)
    r0_1 = res_1;
    if (res_1 == 0) {
        goto L_5c0ad4;
    }
    r0_2 = u32(*gptr<u8>(r4_1 + 0x1a9u));  // (from the original)
    zf_1 = r0_2 == 0x17u;  // (from the original)
    if (!zf_1) {
        zf_1 = r0_2 == 0x18u;  // (from the original)
    }
    if (zf_1) {
        goto L_5c0ae4;
    }
    r0_3 = call_00763818(r4_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_3 != 0) {
        res_2 = u32(*gptr<u8>(r0_3 + 8u)) << 0x19;  // (from the original)
        r0_1 = res_2;
        if (res_2 >> 0x1f) {  // (from the original)
            goto L_5c0ad4;
        }
    }
    r0_1 = call_006736dc(r4_1, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        goto L_5c0b00;
    }
L_5c0ad4:;
    call_005c0874(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return 1u;
L_5c0ae4:;
    r0_4 = call_00665130(r4_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    call_005c0874(r0_4, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_4;
    return 1u;
L_5c0b00:;
    call_005c0874(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_5;
    return 0u;
}

}  // namespace d_005c0a68
GUEST_EXPORT(0x005c0a68, d_005c0a68::f_005c0a68);

// f_005c0b10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c0b10 {

inline guest::global<u32, 0x005c0b48> global_005c0b48;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x00659c08, u32(u32, u32, u32, u32)> call_00659c08;  // (from the original)
inline constexpr guest::Function<0x00763580, u32(u32, u32, u32, u32)> call_00763580;  // (from the original)

u32 f_005c0b10(float S0) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    float S0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    float S0_2 = 0;
    float S0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    guest::cpu()->s[0] = S0;
    r0_1 = call_005c33d0(4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    S0_1 = guest::cpu()->s[0];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        return r0_1;
    }
    guest::cpu()->s[0] = S0_1;
    r0_2 = call_00763580(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    S0_2 = guest::cpu()->s[0];
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->s[0] = S0_2;
        return r0_2;
    }
    guest::cpu()->r[13] += 8u;
    S0_3 = std::bit_cast<float>(*global_005c0b48);
    guest::cpu()->s[0] = S0_3;
    return call_00659c08(r0_1, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005c0b10
GUEST_EXPORT(0x005c0b10, d_005c0b10::f_005c0b10);

// f_005c0da0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c0da0 {

inline guest::global<u32, 0x005c0e04> global_005c0e04;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x00678278, u32(u32, u32, u32, u32)> call_00678278;  // (from the original)

u32 f_005c0da0(u32 r0, u32 r1_unused, u32 r2, u32 r3, float S0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    float S0_1 = 0;
    u32 res_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    float S0_2 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
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
    ea_1 = r13;
    *gptr<u32>(ea_1) = u32(0u);
    ea_2 = r13 + 4u;
    *gptr<u32>(ea_2) = u32(0u);
    *gptr<u32>(ea_2 + 4) = u32(~0u);
    S0_2 = std::bit_cast<float>(*global_005c0e04);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    r0_2 = call_00678278(r0_1, 0x119u, r0, 0u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    S0_3 = guest::cpu()->s[0];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    return r0_2;
}

}  // namespace d_005c0da0
GUEST_EXPORT(0x005c0da0, d_005c0da0::f_005c0da0);

// f_005c0e0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c0e0c {

struct __attribute__((packed)) Object_005c0e0c_0 {
    u8 unknown_0[0x572b];  // (not used here)
    u8 byte_572b;
};
GUEST_OFFSET(Object_005c0e0c_0, byte_572b, 0x572b);  // (from the original)

inline constexpr guest::Function<0x002f77e8, u32(u32, u32, u32, u32)> call_002f77e8;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002ff368, u32(u32, u32, u32, u32)> call_002ff368;  // (from the original)
inline constexpr guest::Function<0x002ff4d4, u32(u32, u32, u32, u32)> call_002ff4d4;  // (from the original)
inline constexpr guest::Function<0x005cc160, u32(u32, u32, u32, u32)> call_005cc160;  // (from the original)
inline constexpr guest::Function<0x00768138, u32(u32, u32, u32, u32)> call_00768138;  // (from the original)

u32 f_005c0e0c(gptr<Object_005c0e0c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 zf_1 = 0;
    u32 r5_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r4_1 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r3_4 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_2 = 0;
    u32 r0_12 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x2a8u;  // (from the original)
    r5_1 = u32(arg0->byte_572b) << 0x1b >> 0x1f;  // (from the original)
    r0_1 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002ff368(r0_1, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fcbb0(r0_2, 0x2281u, r2_1, r3_1);  // (from the original)
    zf_1 = r5_1 == 0;
    *gptr<u32>(r13 + 4u) = u32(r0 + 0x55a6u);  // (from the original)
    r5_2 = r13 + 8u;
    *gptr<u32>(r13 + 0x10u) = u32(0u);  // (from the original)
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r5_2) = u32(r0_3);
    *gptr<u32>(r5_2 + 4) = u32(0x1eu);  // (from the original)
    if (zf_1) {
        r3_2 = 2u;
    } else {
        r3_2 = 1u;
    }
    r0_4 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_005cc160(r0_4, 0x5c0f04u, 1u, r3_2);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r4_1 = r0_5 ^ 1u;
    if (r4_1 != 0) {
        goto L_5c0eec;
    }
    r0_6 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_7 = call_002fcbb0(r0_6, 0x30cbu, r2_2, r3_3);  // (from the original)
    r3_4 = guest::cpu()->r[3];
    r0_8 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00768138(r0_8, r0_7, 0u, r3_4);
    r0_9 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_002ff4d4(r0_9, 3u, 2u, 0u);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_10 == 0) {
        goto L_5c0eec;
    }
    r0_11 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f77e8(r0_11, r1_1, r2_2, r3_3);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x2a8u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return 1u;
L_5c0eec:;
    r0_12 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f77e8(r0_12, r1_1, r2_2, r3_3);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x2a8u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_005c0e0c
GUEST_EXPORT(0x005c0e0c, d_005c0e0c::f_005c0e0c);

// f_005c111c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c111c {

inline guest::global<u32, 0x005c1194> global_005c1194;  // (from the original)
inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> call_003170f8;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x00659d9c, u32(u32, u32, u32, u32)> call_00659d9c;  // (from the original)

u32 f_005c111c(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r7_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    float S0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    float S0_3 = 0;
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r4_1 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r7_1 = r2 ^ 1u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0_1 = call_003170f8(0xeu, 0u, r2, r3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    if (r0_1 == 0) {
        goto L_5c1170;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    r0_2 = call_005c33d0(r4_1, 0u, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    S0_1 = guest::cpu()->s[0];
    if (r0_2 == 0) {
        goto L_5c1170;
    }
    res_1 = u32(*gptr<u8>(r0_2 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    r1_1 = res_1;
    if (res_1 == 0) {
        goto L_5c1178;
    }
L_5c1170:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    return 0u;
L_5c1178:;
    S0_2 = std::bit_cast<float>(*global_005c1194);
    *gptr<u32>(r13) = u32(r3);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    r0_3 = call_00659d9c(r0_2, r0, r1, r7_1);
    r1_2 = guest::cpu()->r[1];
    S0_3 = guest::cpu()->s[0];
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    return r0_3;
}

}  // namespace d_005c111c
GUEST_EXPORT(0x005c111c, d_005c111c::f_005c111c);

// f_005c1198: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c1198 {

inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> call_003170f8;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x00659e34, u32(u32, u32, u32, u32)> call_00659e34;  // (from the original)

u32 f_005c1198(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r8_1 = 0;
    u32 r6_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 r2_1 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r4_1 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r8_1 = r2;
    r6_1 = r3;
    if (r4_1 == 0) {
        guest::cpu()->r[13] = r13;
        r0_1 = call_003170f8(0xeu, 0u, r2, r3);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_1 == 0) {
            goto L_5c1214;
        }
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_005c33d0(4u, 0u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        goto L_5c1214;
    }
    res_1 = u32(*gptr<u8>(r0_1 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    r1_1 = res_1;
    if (res_1 != 0) {
        r0_1 = 0u;
        goto L_5c1214;
    }
    r2_1 = r1 ^ 1u;
    *gptr<u32>(r13 + 4u) = u32(r4_1);
    *gptr<u32>(r13) = u32(r6_1);
    guest::cpu()->r[13] = r13;
    r0_1 = call_00659e34(r0_1, r0, r2_1, r8_1);
    r1_1 = guest::cpu()->r[1];
L_5c1214:;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_005c1198
GUEST_EXPORT(0x005c1198, d_005c1198::f_005c1198);

// f_005c121c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c121c {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)

u32 f_005c121c(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_005c33d0(4u, 0u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    res_1 = u32(*gptr<u8>(r0_1 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    if (res_1 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = res_1;
        return 0u;
    }
    guest::cpu()->r[13] += 8u;
    return call_0064d0b8(r0_1, 0xcdu, 0u, 0u);  // (from the original)
}

}  // namespace d_005c121c
GUEST_EXPORT(0x005c121c, d_005c121c::f_005c121c);

// f_005c12a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c12a8 {

struct __attribute__((packed)) Object_005c12a8_0 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_005c12a8_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005c12a8_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005c12a8_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005c12a8_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005c12a8_0, word_10, 0x10);  // (from the original)

inline guest::global<u32, 0x005c12cc> global_005c12cc;  // (from the original)

void f_005c12a8(gptr<Object_005c12a8_0> arg0) {
    float S0_1 = 0;
    arg0->byte_0 = u8(0xbu);  // (from the original)
    S0_1 = std::bit_cast<float>(*global_005c12cc);
    arg0->word_8 = u32(0u);
    arg0->word_4 = u32(0u);
    arg0->word_10 = u32(std::bit_cast<u32>(S0_1));
    arg0->word_c = u32(std::bit_cast<u32>(S0_1));
    guest::cpu()->r[1] = 0u;
    guest::cpu()->s[0] = S0_1;
    return;
}

}  // namespace d_005c12a8
GUEST_EXPORT(0x005c12a8, d_005c12a8::f_005c12a8);

// f_005c12d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c12d0 {


u32 f_005c12d0(u32 r0, u32 r1) {
    u32 r3 = 0;
    u32 r12 = 0;
    u32 r0_1 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 vf_1 = 0;
    if (r0 >= 4u) {
        r0_1 = r0 & 3u;
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r12 = 0xa82000u;  // (from the original)
    r3 = r0;
    r1 = 0u;
L_5c12e8:;
    if (u32(s32(s8(*gptr<u8>(r12 + r1)))) >= 4u) {
        goto L_5c1318;
    }
    r1 = u32(s32(s8(*gptr<u8>(r12 + r3))));
    r0 = ~0u;
    res_1 = r1 - 4u;
    nf_1 = res_1 >> 0x1f;  // (from the original)
    vf_1 = ((r1 ^ 4u) & (r1 ^ res_1)) >> 0x1f;  // (from the original)
    if (nf_1 != vf_1) {
        nf_1 = r1 >> 0x1f;  // (from the original)
        vf_1 = 0u;
        r0 = r1;
    }
    if (nf_1 != vf_1) {
        guest::cpu()->r[1] = r1;
        return r3;
    }
L_5c1308:;
    if (r0 < 4u) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    guest::cpu()->r[1] = r1;
    return r3;
L_5c1318:;
    r1 = r1 + 1u;
    if (r1 < 4u) {
        guest::preempt();
        goto L_5c12e8;
    }
    guest::preempt();
    goto L_5c1308;
}

}  // namespace d_005c12d0
GUEST_EXPORT(0x005c12d0, d_005c12d0::f_005c12d0);

// f_005c132c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c132c {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)

u32 f_005c132c() {
    return call_005c33d0(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005c132c
GUEST_EXPORT(0x005c132c, d_005c132c::f_005c132c);

// f_005c13e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c13e0 {

inline guest::global<u8, 0x00aadad4> global_00aadad4;  // (from the original)

u32 f_005c13e0() {
    u32 r1_1 = 0;
    r1_1 = u32(*global_00aadad4) | 0x10u;  // (from the original)
    *global_00aadad4 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return 0xaadad4u;  // (from the original)
}

}  // namespace d_005c13e0
GUEST_EXPORT(0x005c13e0, d_005c13e0::f_005c13e0);

// f_005c1428: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c1428 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> call_0066ac8c;  // (from the original)

u32 f_005c1428(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_005c33d0(4u, 0u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    res_1 = u32(*gptr<u8>(r0_1 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    if (res_1 != 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = res_1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    *gptr<u32>(r13 + 8u) = u32(*gptr<u32>(r0));
    *gptr<u8>(r13 + 0xcu) = u8(0u);  // (from the original)
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4) = u32(0u);
    r1_2 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_0066ac8c(r0_1, r1_2, 1u, 0u);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_005c1428
GUEST_EXPORT(0x005c1428, d_005c1428::f_005c1428);

// f_005c159c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c159c {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)

u32 f_005c159c(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_005c33d0(4u, 0u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    res_1 = u32(*gptr<u8>(r0_1 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    if (res_1 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = res_1;
        return 0u;
    }
    guest::cpu()->r[13] += 8u;
    return call_0064d0b8(r0_1, 0xccu, 0u, 0u);  // (from the original)
}

}  // namespace d_005c159c
GUEST_EXPORT(0x005c159c, d_005c159c::f_005c159c);

// f_005c167c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c167c {


u32 f_005c167c(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r0 >= 4u) {
        return r0;
    }
    r0_1 = 0xa84790u + (r0 << 2) + 0x29000u;  // (from the original)
    *gptr<u32>(r0_1 + 0x204u) = u32(r1);  // (from the original)
    return r0_1;
}

}  // namespace d_005c167c
GUEST_EXPORT(0x005c167c, d_005c167c::f_005c167c);

// f_005c17e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c17e4 {

inline constexpr guest::Function<0x0052bf54, u32(u32, u32, u32, u32)> call_0052bf54;  // (from the original)
inline constexpr guest::Function<0x0052cb48, u32(u32, u32, u32, u32)> call_0052cb48;  // (from the original)

u32 f_005c17e4(u32 r0) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_0052bf54(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        guest::cpu()->r[13] += 8u;
        return r0_1;
    }
    guest::cpu()->r[13] += 8u;
    return call_0052cb48(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005c17e4
GUEST_EXPORT(0x005c17e4, d_005c17e4::f_005c17e4);

// f_005c1814: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c1814 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)

u32 f_005c1814(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_005c33d0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    r1_2 = *gptr<u32>(*gptr<u32>(r0_1) + 0x5cu);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return guest::call_address<u32>(r1_2, r0_1, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005c1814
GUEST_EXPORT(0x005c1814, d_005c1814::f_005c1814);

// f_005c1b0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c1b0c {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> call_0066ac8c;  // (from the original)

u32 f_005c1b0c(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_005c33d0(4u, 0u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    res_1 = u32(*gptr<u8>(r0_1 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    if (res_1 != 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = res_1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    *gptr<u32>(r13 + 8u) = u32(*gptr<u32>(r0));
    *gptr<u8>(r13 + 0xcu) = u8(1u);  // (from the original)
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4) = u32(0u);
    r1_2 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_0066ac8c(r0_1, r1_2, 1u, 0u);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_005c1b0c
GUEST_EXPORT(0x005c1b0c, d_005c1b0c::f_005c1b0c);

// f_005c1b6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c1b6c {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x00660d14, u32(u32, u32, u32, u32)> call_00660d14;  // (from the original)

u32 f_005c1b6c(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_005c33d0(4u, 0u, r2, guest::cpu()->r[3]);
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
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_00660d14(r0_1, r0, r1, guest::cpu()->r[3]);
}

}  // namespace d_005c1b6c
GUEST_EXPORT(0x005c1b6c, d_005c1b6c::f_005c1b6c);

// f_005c1bb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c1bb4 {

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> call_0066ac8c;  // (from the original)

u32 f_005c1bb4(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 res_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_005c33d0(4u, 0u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        res_1 = u32(*gptr<u8>(r0_1 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
        if (res_1 == 0) {
            goto L_5c1bf0;
        }
    }
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return 0u;
L_5c1bf0:;
    r0_2 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_2, r0, r2_1, r3_1);
    *gptr<u32>(r13 + 8u) = u32(*gptr<u32>(r13 + 0x10u));  // (from the original)
    *gptr<u8>(r13 + 0xcu) = u8(2u);  // (from the original)
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4) = u32(0u);
    r1_2 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_3 = call_0066ac8c(r0_1, r1_2, 1u, 0u);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_005c1bb4
GUEST_EXPORT(0x005c1bb4, d_005c1bb4::f_005c1bb4);

// f_005c1c7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c1c7c {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)

u32 f_005c1c7c(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_005c33d0(4u, 0u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    res_1 = u32(*gptr<u8>(r0_1 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    if (res_1 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = res_1;
        return 0u;
    }
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        return call_0064d0b8(r0_1, 6u, 0u, 0u);
    }
    guest::cpu()->r[13] += 8u;
    return call_0064d0b8(r0_1, 0xfu, 0u, 0u);  // (from the original)
}

}  // namespace d_005c1c7c
GUEST_EXPORT(0x005c1c7c, d_005c1c7c::f_005c1c7c);

// f_005c2120: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c2120 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> call_0066ac8c;  // (from the original)

u32 f_005c2120(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r0_2 = 0;
    u32 r1_4 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_005c33d0(4u, 0u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    res_1 = u32(*gptr<u8>(r0_1 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    if (res_1 != 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = res_1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r1_2 = *gptr<u32>(r0);
    *gptr<u8>(r13 + 0xcu) = u8(6u);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r1_2);
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4) = u32(0u);
    r1_3 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_0066ac8c(r0_1, r1_3, 1u, 0u);
    r1_4 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_005c2120
GUEST_EXPORT(0x005c2120, d_005c2120::f_005c2120);

// f_005c2188: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c2188 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> call_0066ac8c;  // (from the original)

u32 f_005c2188(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_005c33d0(4u, 0u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    res_1 = u32(*gptr<u8>(r0_1 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    if (res_1 != 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = 5u;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r2_1 = *gptr<u32>(r0);
    *gptr<u8>(r13 + 0xcu) = u8(5u);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r2_1);
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4) = u32(0u);
    r1_2 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_0066ac8c(r0_1, r1_2, 1u, 0u);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_005c2188
GUEST_EXPORT(0x005c2188, d_005c2188::f_005c2188);

// f_005c21f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c21f0 {

inline constexpr guest::Function<0x005c2808, u32(u32, u32, u32, u32)> call_005c2808;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0065e0b8, u32(u32, u32, u32, u32)> call_0065e0b8;  // (from the original)

u32 f_005c21f0(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_005c2808(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    r0_2 = call_005c33d0(4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return r0_2;
    }
    r0_3 = call_0065e0b8(r0_2, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    if (r0_3 != 0) {
        r0_3 = 1u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_3;
    return r0_3;
}

}  // namespace d_005c21f0
GUEST_EXPORT(0x005c21f0, d_005c21f0::f_005c21f0);

// f_005c2224: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c2224 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)

u32 f_005c2224(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_005c33d0(4u, 0u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    res_1 = u32(*gptr<u8>(r0_1 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    if (res_1 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = res_1;
        return 0u;
    }
    guest::cpu()->r[13] += 8u;
    return call_0064d0b8(r0_1, 0xcbu, 0u, 0u);  // (from the original)
}

}  // namespace d_005c2224
GUEST_EXPORT(0x005c2224, d_005c2224::f_005c2224);

// f_005c2298: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c2298 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)

u32 f_005c2298(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_005c33d0(4u, 0u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    res_1 = u32(*gptr<u8>(r0_1 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    if (res_1 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = res_1;
        return 0u;
    }
    guest::cpu()->r[13] += 8u;
    return call_0064d0b8(r0_1, 0x78u, 0u, 0u);  // (from the original)
}

}  // namespace d_005c2298
GUEST_EXPORT(0x005c2298, d_005c2298::f_005c2298);

// f_005c22dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c22dc {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x006579a8, u32(u32, u32, u32, u32)> call_006579a8;  // (from the original)
inline constexpr guest::Function<0x006d96fc, u32(u32, u32, u32, u32)> call_006d96fc;  // (from the original)

u32 f_005c22dc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_005c33d0(4u, 0u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        guest::cpu()->r[13] = r13;
        r0_2 = call_006d96fc(r0_1, r1_1, r2_1, r3_1);
        *gptr<u32>(r13) = u32(r0_2);
        guest::cpu()->r[13] = r13;
        r0_1 = call_006579a8(r0_1, r0, r1, r2);
        r1_1 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_005c22dc
GUEST_EXPORT(0x005c22dc, d_005c22dc::f_005c22dc);

// f_005c23c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c23c4 {

inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x006609bc, u32(u32, u32, u32, u32)> call_006609bc;  // (from the original)
inline constexpr guest::Function<0x0068aa1c, u32(u32, u32, u32, u32)> call_0068aa1c;  // (from the original)

u32 f_005c23c4(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 res_1 = 0;
    u32 r5_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r1_4 = 0;
    u32 r1_5 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_005c33d0(4u, 0u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    res_1 = u32(*gptr<u8>(r0_1 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    if (res_1 != 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    if (u32(*gptr<u8>(r0_1 + 0x1a9u)) == 0x92u) {  // (from the original)
        goto L_5c240c;
    }
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return 0u;
L_5c240c:;
    r5_1 = r0_1 + 0x8cau;  // (from the original)
    r0_2 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fc20c(r0_2, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r1_2 = *gptr<u32>(r5_1);
    *gptr<u32>(r0_3) = u32(r1_2);
    guest::cpu()->r[13] = r13;
    r0_4 = call_006609bc(r0_1, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00305f44(r0_4, r1_3, r2_3, r3_3);
    *gptr<u32>(r13) = u32(0x2bu);  // (from the original)
    *gptr<u32>(r13 + 4) = u32(2u);
    *gptr<u32>(r13 + 8) = u32(0xae5658u);  // (from the original)
    r1_4 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0068aa1c(r0_1, r1_4, 0u, r0);
    r1_5 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_005c23c4
GUEST_EXPORT(0x005c23c4, d_005c23c4::f_005c23c4);

// f_005c257c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c257c {

inline guest::global<u32, 0x00953f58> global_00953f58;  // (from the original)
inline constexpr guest::Function<0x0024a5ec, u32(u32, u32, u32, u32)> call_0024a5ec;  // (from the original)
inline constexpr guest::Function<0x002f77e8, u32(u32, u32, u32, u32)> call_002f77e8;  // (from the original)
inline constexpr guest::Function<0x002fc288, u32(u32, u32, u32, u32)> call_002fc288;  // (from the original)
inline constexpr guest::Function<0x002fc2a4, u32(u32, u32, u32, u32)> call_002fc2a4;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x002fea2c, u32(u32, u32, u32, u32)> call_002fea2c;  // (from the original)
inline constexpr guest::Function<0x002ff368, u32(u32, u32, u32, u32)> call_002ff368;  // (from the original)
inline constexpr guest::Function<0x002ff4d4, u32(u32, u32, u32, u32)> call_002ff4d4;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x00306354, u32(u32, u32, u32, u32)> call_00306354;  // (from the original)
inline constexpr guest::Function<0x006f073c, u32(u32, u32, u32, u32)> call_006f073c;  // (from the original)
inline constexpr guest::Function<0x00768138, u32(u32, u32, u32, u32)> call_00768138;  // (from the original)

u32 f_005c257c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r4_1 = 0;
    u32 r0_7 = 0;
    u32 r1_2 = 0;
    u32 r0_8 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_9 = 0;
    u32 r1_3 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_10 = 0;
    u32 r3_8 = 0;
    u32 r1_4 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_5 = 0;
    r13 = r13 - 0x2a0u;  // (from the original)
    r0_1 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002ff368(r0_1, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r13 + 0x290u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fcbb0(r0_2, 0x2278u, r2_1, r3_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_4 = call_002ff6f8(3u, r1_1, r2_2, r3_2);
    *gptr<u32>(r13 + 4u) = u32(0x14u);  // (from the original)
    r2_3 = r0_4 + 1u;
    *gptr<u32>(r13 + 8u) = u32(0u);
    r3_3 = r0 + 0x55a6u;  // (from the original)
    r0_5 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r13) = u32(r0_3);
    guest::cpu()->r[13] = r13;
    r0_6 = call_00306354(r0_5, 0x5c26f4u, r2_3, r3_3);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4_1 = r0_6 ^ 1u;
    if (r4_1 == 0) {
        goto L_5c2600;
    }
L_5c25ec:;
    r0_7 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f77e8(r0_7, r1, r2, r3);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x2a0u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return 0u;
L_5c2600:;
    if ((*global_00953f58 & 1u) != 0) {
        goto L_5c2644;
    }
    guest::cpu()->r[13] = r13;
    r0_8 = call_002fe7dc(0x953f58u, r1, r2, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_8 == 0) {
        goto L_5c2644;
    }
    guest::cpu()->r[13] = r13;
    call_002fc288(0xa84480u, r1, r2, r3);  // (from the original)
    r3 = guest::cpu()->r[3];
    r2 = 0x100000u;  // (from the original)
    r1 = 0x2fc8fcu;  // (from the original)
L_5c2644:;
    guest::cpu()->r[13] = r13;
    call_0024a5ec(0xa84480u, r1, r2, r3);  // (from the original)
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_002fc2a4(0xa84480u, 9u, r2_4, r3_4);  // (from the original)
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_9 = call_006f073c(0xa84480u, r0, r2_5, r3_5);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if (r0_9 == 0) {
        guest::cpu()->r[13] = r13;
        call_0024a5ec(0xa84480u, r1_3, r2_6, r3_6);  // (from the original)
        r2_7 = guest::cpu()->r[2];
        r3_7 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        call_002fc2a4(0xa84480u, 9u, r2_7, r3_7);  // (from the original)
        r2_6 = guest::cpu()->r[2];
        r3_6 = guest::cpu()->r[3];
    }
    r0_10 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fea2c(r0_10, 0xa84480u, r2_6, r3_6);  // (from the original)
    r3_8 = guest::cpu()->r[3];
    r1_4 = r13 + 0xcu;  // (from the original)
    r0_11 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00768138(r0_11, r1_4, 0u, r3_8);
    r0_12 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_13 = call_002ff4d4(r0_12, 3u, 1u, 0u);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_13 != 0) {
        r0_14 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002f77e8(r0_14, r1, r2, r3);
        r1_5 = guest::cpu()->r[1];
        r13 = r13 + 0x2a0u;  // (from the original)
        guest::cpu()->r[1] = r1_5;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    guest::preempt();
    goto L_5c25ec;
}

}  // namespace d_005c257c
GUEST_EXPORT(0x005c257c, d_005c257c::f_005c257c);

// f_005c2718: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c2718 {

inline guest::global<u8, 0x00aadad4> global_00aadad4;  // (from the original)

u32 f_005c2718() {
    u32 r1_1 = 0;
    r1_1 = u32(*global_00aadad4) & ~0x10u;  // (from the original)
    *global_00aadad4 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return 0xaadad4u;  // (from the original)
}

}  // namespace d_005c2718
GUEST_EXPORT(0x005c2718, d_005c2718::f_005c2718);

// f_005c2730: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c2730 {

inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x0065472c, u32(u32, u32, u32, u32)> call_0065472c;  // (from the original)

u32 f_005c2730(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_0065472c(r0_1, r2, r3, r3);
    r3_1 = guest::cpu()->r[3];
    r2_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_2 = call_003171b4(r0, r1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_005c2730
GUEST_EXPORT(0x005c2730, d_005c2730::f_005c2730);

// f_005c2768: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c2768 {

inline guest::global<u32, 0x00953f50> global_00953f50;  // (from the original)
inline guest::global<u32, 0x00a843c8> global_00a843c8;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x007634d0, u32(u32, u32, u32, u32)> call_007634d0;  // (from the original)

u32 f_005c2768() {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_005c33d0(4u, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    if ((*global_00953f50 & 1u) == 0) {
        guest::cpu()->r[13] = r13;
        call_002fe7dc(0x953f50u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    }
    r0_2 = r13;
    guest::cpu()->r[13] = r13;
    call_007634d0(r0_2, r0_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    *global_00a843c8 = u32(*gptr<u32>(r13));
    *gptr<u32>(0xa843c8u + 4u) = u32(*gptr<u32>(r13 + 4u));  // (from the original)
    *gptr<u32>(0xa843c8u + 8u) = u32(*gptr<u32>(r13 + 8u));  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return 0xa843c8u;  // (from the original)
}

}  // namespace d_005c2768
GUEST_EXPORT(0x005c2768, d_005c2768::f_005c2768);

// f_005c29f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c29f8 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0067bcf4, u32(u32, u32, u32, u32)> call_0067bcf4;  // (from the original)

u32 f_005c29f8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r0_1 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_005c33d0(r0_1, 0u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        *gptr<u32>(r13) = u32(r3);
        guest::cpu()->r[13] = r13;
        r0_2 = call_0067bcf4(r0_2, r0, r1, r2);
        r1_1 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_005c29f8
GUEST_EXPORT(0x005c29f8, d_005c29f8::f_005c29f8);

// f_005c2a54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c2a54 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x005c507c, u32(u32, u32, u32, u32)> call_005c507c;  // (from the original)
inline constexpr guest::Function<0x0066fdc0, u32(u32, u32, u32, u32)> call_0066fdc0;  // (from the original)

u32 f_005c2a54() {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 zf_1 = 0;
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_005c507c(7u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    r0_2 = call_005c33d0(4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return r0_2;
    }
    r1_3 = u32(*gptr<u8>(r0_2 + 0x1a9u));  // (from the original)
    zf_1 = r1_3 == 0x17u;  // (from the original)
    if (!zf_1) {
        zf_1 = r1_3 == 0x18u;  // (from the original)
    }
    if (zf_1) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_3;
        return 1u;
    }
    if (r1_3 == 0x19u) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_3;
        return 0u;
    }
    r0_3 = call_0066fdc0(r0_2, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_4;
        return r0_3;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_4;
    return 1u;
}

}  // namespace d_005c2a54
GUEST_EXPORT(0x005c2a54, d_005c2a54::f_005c2a54);

// f_005c2b00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c2b00 {

inline guest::global<u8, 0x00aadad4> global_00aadad4;  // (from the original)
inline guest::global<u8, 0x00aaef14> global_00aaef14;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x005c507c, u32(u32, u32, u32, u32)> call_005c507c;  // (from the original)
inline constexpr guest::Function<0x00659e8c, u32(u32, u32, u32, u32)> call_00659e8c;  // (from the original)
inline constexpr guest::Function<0x0067a478, u32(u32, u32, u32, u32)> call_0067a478;  // (from the original)

u32 f_005c2b00(u32 r0_unused, u32 r1) {
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 zf_1 = 0;
    u32 r4_1 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    guest::cpu()->r[13] -= 8u;
    res_1 = u32(*global_00aadad4) << 0x1b >> 0x1f;  // (from the original)
    if (res_1 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    res_2 = u32(*global_00aaef14) << 0x1a >> 0x1f;  // (from the original)
    if (res_2 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r0_1 = call_005c507c(0x11u, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r0_2 = call_005c33d0(4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    zf_1 = r0_2 == 0;
    r4_1 = r0_2;
    if (!zf_1) {
        r0_2 = u32(*gptr<u8>(r4_1 + 0x1a9u));  // (from the original)
        zf_1 = r0_2 == 0x16u;  // (from the original)
    }
    if (zf_1) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    call_0067a478(r0_2, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r0_3 = call_00659e8c(r4_1, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    if (r0_3 != 0) {
        r0_3 = 1u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_4;
    return r0_3;
}

}  // namespace d_005c2b00
GUEST_EXPORT(0x005c2b00, d_005c2b00::f_005c2b00);

// f_005c2e40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c2e40 {

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> call_0066ac8c;  // (from the original)

u32 f_005c2e40(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 res_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_005c33d0(4u, 0u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        res_1 = u32(*gptr<u8>(r0_1 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
        if (res_1 == 0) {
            goto L_5c2e7c;
        }
    }
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return 0u;
L_5c2e7c:;
    r0_2 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_2, r0, r2_1, r3_1);
    *gptr<u32>(r13 + 8u) = u32(*gptr<u32>(r13 + 0x10u));  // (from the original)
    *gptr<u8>(r13 + 0xcu) = u8(4u);  // (from the original)
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4) = u32(0u);
    r1_2 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_3 = call_0066ac8c(r0_1, r1_2, 1u, 0u);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_005c2e40
GUEST_EXPORT(0x005c2e40, d_005c2e40::f_005c2e40);

// f_005c2f70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c2f70 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)

u32 f_005c2f70(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_005c33d0(4u, 0u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    res_1 = u32(*gptr<u8>(r0_1 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    if (res_1 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = res_1;
        return 0u;
    }
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        return call_0064d0b8(r0_1, 6u, 0u, 0u);
    }
    guest::cpu()->r[13] += 8u;
    return call_0064d0b8(r0_1, 0xfu, 0u, 0u);  // (from the original)
}

}  // namespace d_005c2f70
GUEST_EXPORT(0x005c2f70, d_005c2f70::f_005c2f70);

// f_005c305c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c305c {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x006579a8, u32(u32, u32, u32, u32)> call_006579a8;  // (from the original)
inline constexpr guest::Function<0x006d96fc, u32(u32, u32, u32, u32)> call_006d96fc;  // (from the original)

u32 f_005c305c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_005c33d0(4u, 0u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        guest::cpu()->r[13] = r13;
        r0_2 = call_006d96fc(r0_1, r1_1, r2_1, r3_1);
        *gptr<u32>(r13) = u32(r0_2);
        guest::cpu()->r[13] = r13;
        r0_1 = call_006579a8(r0_1, r0, 0xae5658u, r1);  // (from the original)
        r1_1 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_005c305c
GUEST_EXPORT(0x005c305c, d_005c305c::f_005c305c);

// f_005c30a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c30a0 {

inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0065e2e0, u32(u32, u32, u32, u32)> call_0065e2e0;  // (from the original)

u32 f_005c30a0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 zf_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_005c33d0(4u, 0u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    zf_1 = r0_1 == 0;
    r0_2 = 0u;
    if (zf_1) {
        goto L_5c3114;
    }
    res_1 = u32(*gptr<u8>(r0_1 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    r1_1 = res_1;
    if (res_1 != 0) {
        goto L_5c3114;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fcb34(r3, r1_1, r2_1, r3_1);
    if (r0_3 == 0x41u) {  // (from the original)
        r0_4 = 1u;
    } else {
        r0_4 = 0u;
    }
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4u) = u32(r0_4);
    guest::cpu()->r[13] = r13;
    r0_2 = call_0065e2e0(r0_1, r0, r1, r2);
    r1_1 = guest::cpu()->r[1];
L_5c3114:;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_005c30a0
GUEST_EXPORT(0x005c30a0, d_005c30a0::f_005c30a0);

// f_005c311c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c311c {

inline guest::global<u32, 0x005c31a8> global_005c31a8;  // (from the original)
inline guest::global<u32, 0x0085f2d4> global_0085f2d4;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x006f8a58, u32(u32, u32, u32, u32)> call_006f8a58;  // (from the original)

u32 f_005c311c(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    float S0_4 = 0;
    u32 r2_3 = 0;
    u32 r1_3 = 0;
    float S1_4 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    float S0_5 = 0;
    float S1_5 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_1 = call_002f74c8(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    r0_2 = call_002f74e0(4u, r0_1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    if (r0_2 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        return r0_2;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    r0_3 = call_005c33d0(4u, 1u, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    S0_3 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    if (r0_3 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_3;
        return 0u;
    }
    S0_4 = std::bit_cast<float>(*global_005c31a8);
    *gptr<u32>(r13) = u32(*gptr<u32>(r0_3 + 0x14u));  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(*gptr<u32>(r0_3 + 0x18u));  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(*gptr<u32>(r0_3 + 0x1cu));  // (from the original)
    r2_3 = u32(*gptr<u16>(r0_3 + 0x2eu));  // (from the original)
    r1_3 = r13;
    S1_4 = std::bit_cast<float>(*global_0085f2d4);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    r0_4 = call_006f8a58(r0, r1_3, r2_3, 0x10u);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    S0_5 = guest::cpu()->s[0];
    S1_5 = guest::cpu()->s[1];
    if (r0_4 != 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_5;
        guest::cpu()->s[1] = S1_5;
        return 1u;
    }
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_5;
    return 0u;
}

}  // namespace d_005c311c
GUEST_EXPORT(0x005c311c, d_005c311c::f_005c311c);

// f_005c31ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c31ac {

inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)

u32 f_005c31ac(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_002fc900(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        r0_2 = u32(*gptr<u8>(0x881b94u + (r0 & 3u)));  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_006249b0(r0_2, 4u, r1, 0x26u);  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_005c31ac
GUEST_EXPORT(0x005c31ac, d_005c31ac::f_005c31ac);

// f_005c324c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c324c {

inline guest::global<u32, 0x00886a28> global_00886a28;  // (from the original)
inline guest::global<u32, 0x00886a2c> global_00886a2c;  // (from the original)
inline guest::global<u32, 0x00886a30> global_00886a30;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0070ac68, u32(u32, u32, u32, u32)> call_0070ac68;  // (from the original)

u32 f_005c324c(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    u32 zf_1 = 0;
    u32 res_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    if (r0 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return 0u;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0_1 = call_005c33d0(r1, 1u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    S2_1 = guest::cpu()->s[2];
    zf_1 = r0_1 == 0;
    if (!zf_1) {
        res_1 = r0_1 + 0x1b4u;  // (from the original)
        zf_1 = res_1 == 0;
        r0_1 = res_1;
    }
    if (zf_1) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 0u;
    }
    r2_1 = *gptr<u32>(r0_1 + 0xa4u);  // (from the original)
    r1_2 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    call_0070ac68(r0_1, r1_2, r2_1, 1u);
    r1_3 = guest::cpu()->r[1];
    S0_2 = std::bit_cast<float>(*gptr<u32>(r13)) + std::bit_cast<float>(*global_00886a28);
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0_2));
    *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r13 + 4u)) + std::bit_cast<float>(*global_00886a2c)));
    S1_2 = std::bit_cast<float>(*gptr<u32>(r13 + 8u)) + std::bit_cast<float>(*global_00886a30);
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S1_2));
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0_2));
    *gptr<u32>(r0 + 4u) = u32(*gptr<u32>(r13 + 4u));
    *gptr<u32>(r0 + 8u) = u32(*gptr<u32>(r13 + 8u));
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return 1u;
}

}  // namespace d_005c324c
GUEST_EXPORT(0x005c324c, d_005c324c::f_005c324c);

// f_005c354c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c354c {

inline constexpr guest::Function<0x005c40dc, u32(u32, u32, u32, u32)> call_005c40dc;  // (from the original)

u32 f_005c354c() {
    return call_005c40dc(0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005c354c
GUEST_EXPORT(0x005c354c, d_005c354c::f_005c354c);

// f_005c3554: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c3554 {

inline constexpr guest::Function<0x005c48c8, u32(u32, u32, u32, u32)> call_005c48c8;  // (from the original)

u32 f_005c3554() {
    return call_005c48c8(9u, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005c3554
GUEST_EXPORT(0x005c3554, d_005c3554::f_005c3554);

// f_005c3560: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c3560 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x005c3e84, u32(u32, u32, u32, u32)> call_005c3e84;  // (from the original)
inline constexpr guest::Function<0x006739b8, u32(u32, u32, u32, u32)> call_006739b8;  // (from the original)

u32 f_005c3560(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r4_2 = 0;
    u32 ea_3 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x30u;  // (from the original)
    r4_1 = *gptr<u32>(r13 + 0x30u);  // (from the original)
    r5_1 = r2;
    r6_1 = r3;
    if (r4_1 == 0) {
        guest::cpu()->r[13] = r13;
        r0_1 = call_005c3e84(r0, r1, r2, r3);
        r1_1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_1 == 0) {
            goto L_5c35e8;
        }
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_005c33d0(4u, 0u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_5c35e8;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f74c8(r0_1, r1_1, r2_1, r3_1);
    if (r0_2 == 0x5cu) {  // (from the original)
        r2_2 = 0u;
    } else {
        r2_2 = r1;
    }
    if (r4_1 == 0) {
        goto L_5c35f0;
    }
    ea_1 = r13 + 4u;
    *gptr<u32>(ea_1) = u32(0u);
    *gptr<u32>(ea_1 + 4) = u32(r6_1);
    ea_2 = r13 + 0xcu;  // (from the original)
    *gptr<u32>(ea_2) = u32(0u);
    *gptr<u32>(ea_2 + 4) = u32(r5_1);
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_1 = call_006739b8(r0_1, r0, r2_2, 0u);
    r1_1 = guest::cpu()->r[1];
L_5c35e8:;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
L_5c35f0:;
    r4_2 = r13 + 0xcu;  // (from the original)
    ea_3 = r13 + 4u;
    *gptr<u32>(ea_3) = u32(0u);
    *gptr<u32>(ea_3 + 4) = u32(r6_1);
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r4_2) = u32(1u);
    *gptr<u32>(r4_2 + 4) = u32(r5_1);
    guest::cpu()->r[13] = r13;
    r0_3 = call_006739b8(r0_1, r0, r2_2, 0u);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_005c3560
GUEST_EXPORT(0x005c3560, d_005c3560::f_005c3560);

// f_005c38c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c38c8 {

inline constexpr guest::Function<0x005c3620, u32(u32, u32, u32, u32)> call_005c3620;  // (from the original)

u32 f_005c38c8(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r12_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    *gptr<u16>(r13) = u16(0u);
    r1_1 = r13;
    if (r0 < 0xau) {  // (from the original)
        r12_1 = r0 & 7u;
        r0_1 = r1_1 + (r0 >> 3);
        r3 = 1u;
        r1_1 = u32(*gptr<u8>(r0_1)) | lsl_r(r3, r12_1 & 0xff);  // (from the original)
        *gptr<u8>(r0_1) = u8(r1_1);
    }
    r0_2 = r13;
    guest::cpu()->r[13] = r13;
    r0_3 = call_005c3620(r0_2, r1_1, guest::cpu()->r[2], r3);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_005c38c8
GUEST_EXPORT(0x005c38c8, d_005c38c8::f_005c38c8);

// f_005c423c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c423c {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x00678300, u32(u32, u32, u32, u32)> call_00678300;  // (from the original)

u32 f_005c423c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_005c33d0(4u, 0u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    res_1 = u32(*gptr<u8>(r0_1 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    r1_1 = res_1;
    if (res_1 != 0) {
        r0_1 = 0u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    if (u32(*gptr<u8>(r0_1 + 0x1a9u)) != 0xe1u) {  // (from the original)
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[13] = r13;
        return call_00678300(r0_1, r0, r1, r2);
    }
    r2_1 = r13;
    r1_2 = u32(*gptr<u8>(r0_1 + 0x8ceu)) << 8;  // (from the original)
    *gptr<u16>(r13 + 4u) = u16(r1_2);
    *gptr<u32>(r13) = u32(uxth(r1_2));
    guest::cpu()->r[13] = r13;
    r0_1 = call_00678300(r0_1, r0, r2_1, r2);
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_005c423c
GUEST_EXPORT(0x005c423c, d_005c423c::f_005c423c);

// f_005c4400: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c4400 {

inline guest::global<u32, 0x00aaf14c> global_00aaf14c;  // (from the original)
inline constexpr guest::Function<0x0027a5dc, u32(u32, u32, u32, u32)> call_0027a5dc;  // (from the original)
inline constexpr guest::Function<0x0027ab24, u32(u32, u32, u32, u32)> call_0027ab24;  // (from the original)
inline constexpr guest::Function<0x002fdf00, u32(u32, u32, u32, u32)> call_002fdf00;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x006bd910, u32(u32, u32, u32, u32)> call_006bd910;  // (from the original)

u32 f_005c4400(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r5_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_2 = 0;
    u32 r6_1 = 0;
    u32 ea_3 = 0;
    u32 r4_2 = 0;
    u32 r5_3 = 0;
    u32 r6_2 = 0;
    if (r0 >= 4u) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r0_1 = 0xa84790u + r0 + 0x29000u;  // (from the original)
    r5_1 = u32(*gptr<u8>(r0_1 + 0x200u));  // (from the original)
    *gptr<u8>(r0_1 + 0x200u) = u8(8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_00305f44(r0_1, 8u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_2 != r0) {
        goto L_5c4450;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fdf00(r5_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        goto L_5c4450;
    }
    r1_1 = 0u;
    *global_00aaf14c = u32(r1_1);
L_5c4450:;
    guest::cpu()->r[13] = r13;
    r0_4 = call_0027ab24(r5_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_4 == 0) {
        ea_3 = r13;
        r13 = r13 + 0x10;  // (from the original)
        r4_2 = *gptr<u32>(ea_3);
        r5_3 = *gptr<u32>(ea_3 + 4);
        r6_2 = *gptr<u32>(ea_3 + 8);
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[4] = r4_2;
        guest::cpu()->r[5] = r5_3;
        guest::cpu()->r[6] = r6_2;
        guest::cpu()->r[13] = r13;
        return r0_4;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_0027a5dc(r5_1, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_4 >= 4u) {
        ea_3 = r13;
        r13 = r13 + 0x10;  // (from the original)
        r4_2 = *gptr<u32>(ea_3);
        r5_3 = *gptr<u32>(ea_3 + 4);
        r6_2 = *gptr<u32>(ea_3 + 8);
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[4] = r4_2;
        guest::cpu()->r[5] = r5_3;
        guest::cpu()->r[6] = r6_2;
        guest::cpu()->r[13] = r13;
        return r0_4;
    }
    r0_5 = 0xa84790u + (r0_4 * 0x149u << 7);  // (from the original)
    ea_2 = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_2 = *gptr<u32>(ea_2 + 4);
    r6_1 = *gptr<u32>(ea_2 + 8);
    r14 = *gptr<u32>(ea_2 + 0xc);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    return call_006bd910(r0_5, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005c4400
GUEST_EXPORT(0x005c4400, d_005c4400::f_005c4400);

// f_005c44a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c44a0 {

inline constexpr guest::Function<0x0020bf50, u32(u32, u32, u32, u32)> call_0020bf50;  // (from the original)
inline constexpr guest::Function<0x002fb96c, u32(u32, u32, u32, u32)> call_002fb96c;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x0071a7ec, u32(u32, u32, u32, u32)> call_0071a7ec;  // (from the original)
inline constexpr guest::Function<0x0076aa40, u32(u32, u32, u32, u32)> call_0076aa40;  // (from the original)
inline constexpr guest::Function<0x0076abd4, u32(u32, u32, u32, u32)> call_0076abd4;  // (from the original)
inline constexpr guest::Function<0x0076bac4, u32(u32, u32, u32, u32)> call_0076bac4;  // (from the original)

u32 f_005c44a0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r3_5 = 0;
    u64 res_1 = 0;
    u32 r2_5 = 0;
    u32 r1_4 = 0;
    u32 r1_5 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_6 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb96c(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r0_2 = r0_1 + 0xau;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_0071a7ec(r0_2, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_4 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_4, r0_3, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = r13;
    guest::cpu()->r[13] = r13;
    r0_6 = call_0076abd4(r0_5, r1_2, r2_3, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_6 == 0) {
        r0_7 = r13;
        guest::cpu()->r[13] = r13;
        r0_8 = call_0076aa40(r0_7, r1_3, r2_4, r3_4);
        r1_3 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        if (r0_8 == 0) {
            r13 = r13 + 0x10;  // (from the original)
            guest::cpu()->r[1] = r1_3;
            guest::cpu()->r[13] = r13;
            return 0u;
        }
    }
    r0_9 = r13;
    guest::cpu()->r[13] = r13;
    r0_10 = call_0076bac4(r0_9, r1_3, r2_4, r3_4);
    r3_5 = guest::cpu()->r[3];
    res_1 = u64(0xcccccccdu) * r0_10;  // (from the original)
    r2_5 = u32(res_1);
    r1_4 = 0u - (u32(res_1 >> 0x20) >> 3);  // (from the original)
    r1_5 = r0_10 + (r1_4 + (r1_4 << 2) << 1);
    r0_11 = r0_1 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_12 = call_0020bf50(r0_11, r1_5, r2_5, r3_5);
    r1_6 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    return r0_12;
}

}  // namespace d_005c44a0
GUEST_EXPORT(0x005c44a0, d_005c44a0::f_005c44a0);

// f_005c4534: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c4534 {

inline constexpr guest::Function<0x002fcb10, u32(u32, u32, u32, u32)> call_002fcb10;  // (from the original)
inline constexpr guest::Function<0x00536094, u32(u32, u32, u32, u32)> call_00536094;  // (from the original)

u32 f_005c4534(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002fcb10(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        r0_2 = ~0u;
        guest::cpu()->r[13] += 8u;
        return r0_2;
    }
    guest::cpu()->r[13] += 8u;
    return call_00536094(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005c4534
GUEST_EXPORT(0x005c4534, d_005c4534::f_005c4534);

// f_005c4840: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c4840 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> call_0066ac8c;  // (from the original)

u32 f_005c4840(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_005c33d0(4u, 0u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    res_1 = u32(*gptr<u8>(r0_1 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    if (res_1 != 0) {
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = res_1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r2_1 = *gptr<u32>(r0);
    *gptr<u8>(r13 + 0xcu) = u8(0u);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r2_1);
    *gptr<u32>(r13 + 0xdu) = u32(*gptr<u32>(r1));  // (from the original)
    *gptr<u8>(r13 + 0x11u) = u8(1u);  // (from the original)
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4) = u32(0u);
    r1_2 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_0066ac8c(r0_1, r1_2, 2u, 0u);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_005c4840
GUEST_EXPORT(0x005c4840, d_005c4840::f_005c4840);

// f_005c48c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c48c8 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x005c507c, u32(u32, u32, u32, u32)> call_005c507c;  // (from the original)
inline constexpr guest::Function<0x006548ac, u32(u32, u32, u32, u32)> call_006548ac;  // (from the original)
inline constexpr guest::Function<0x00763818, u32(u32, u32, u32, u32)> call_00763818;  // (from the original)

u32 f_005c48c8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 res_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 res_2 = 0;
    u32 r0_7 = 0;
    u32 res_3 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 b_1 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 zf_2 = 0;
    u32 cf_2 = 0;
    u32 b_2 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 zf_3 = 0;
    u32 cf_3 = 0;
    u32 b_3 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 zf_4 = 0;
    u32 cf_4 = 0;
    u32 b_4 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r0_1 = call_005c507c(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_5c4b74;
    }
    r0_2 = call_005c33d0(4u, 0u, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_5c4b78;
    }
    r0_1 = call_00763818(r0_2, r1_1, r2_2, r3_2);
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_5c4b74;
    }
    res_1 = u32(*gptr<u8>(r0_2 + 0x17bu)) << 0x1d >> 0x1f;  // (from the original)
    r0_3 = r0 & 2u;
    if (res_1 == 0) {
        goto L_5c4a38;
    }
    if (r0_3 == 0) {
        goto L_5c4948;
    }
    if ((u32(*gptr<u8>(r0_2 + 0x8c7u)) & 1u) == 0) {  // (from the original)
        goto L_5c4948;
    }
    r0_4 = call_006548ac(r0_2, 0x10u, 0u, 0u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_4 != 0) {
        goto L_5c4b70;
    }
L_5c4948:;
    if ((r0 & 4u) == 0) {
        goto L_5c4994;
    }
    r0_5 = call_005c33d0(4u, 0u, r2_3, r3_3);
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_5 == 0) {
        goto L_5c4994;
    }
    if (u32(*gptr<u8>(r0_5 + 0x1a9u)) != 0x82u) {  // (from the original)
        goto L_5c4994;
    }
    r0_6 = call_006548ac(r0_2, 0x11u, 0u, 0u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_6 != 0) {
        goto L_5c4b70;
    }
L_5c4994:;
    if ((r0 & 8u) == 0) {
        goto L_5c49cc;
    }
    res_2 = u32(*gptr<u8>(r0_2 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    if (res_2 == 0) {
        goto L_5c49cc;
    }
    r0_7 = call_006548ac(r0_2, 0x12u, 0u, 0u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_7 != 0) {
        goto L_5c4b70;
    }
L_5c49cc:;
    if ((r0 & 1u) == 0) {
        goto L_5c4b78;
    }
    if ((u32(*gptr<u8>(r0_2 + 0x8c7u)) & 1u) != 0) {  // (from the original)
        goto L_5c4b78;
    }
    res_3 = u32(*gptr<u8>(r0_2 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    if (res_3 != 0) {
        goto L_5c4b78;
    }
    r0_8 = call_005c33d0(4u, 0u, r2_3, r3_3);
    r1_1 = guest::cpu()->r[1];
    if (r0_8 != 0) {
        if (u32(*gptr<u8>(r0_8 + 0x1a9u)) == 0x82u) {  // (from the original)
            goto L_5c4b78;
        }
    }
    r0_9 = call_006548ac(r0_2, 0xfu, 0u, 1u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_9 == 0) {
        goto L_5c4b78;
    }
    goto L_5c4b70;
L_5c4a38:;
    zf_1 = r0_3 == 0u;
    cf_1 = r0_3 >= 0u;
    if (!zf_1) {
        r0_3 = u32(*gptr<u8>(r0_1 + 5u));
    }
    if (!zf_1) {
        b_1 = r0_3 >> 4;
        zf_1 = 7u == b_1;
        cf_1 = 7u >= b_1;
    }
    if (!cf_1 || zf_1) {
        goto L_5c4a78;
    }
    r1_1 = 3u;
    if (r1_1 != r0_3 >> 4) {
        goto L_5c4a78;
    }
    r0_10 = call_006548ac(r0_2, 0x10u, 0u, 0u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_10 != 0) {
        goto L_5c4b70;
    }
L_5c4a78:;
    r0_11 = r0 & 4u;
    zf_2 = r0_11 == 0u;
    cf_2 = r0_11 >= 0u;
    if (!zf_2) {
        r0_11 = u32(*gptr<u8>(r0_1 + 5u));
        b_2 = r0_11 >> 4;
        zf_2 = 7u == b_2;
        cf_2 = 7u >= b_2;
    }
    if (!cf_2 || zf_2) {
        goto L_5c4ab8;
    }
    r1_1 = 4u;
    if (r1_1 != r0_11 >> 4) {
        goto L_5c4ab8;
    }
    r0_12 = call_006548ac(r0_2, 0x11u, 0u, 0u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_12 != 0) {
        goto L_5c4b70;
    }
L_5c4ab8:;
    r0_13 = r0 & 8u;
    zf_3 = r0_13 == 0u;
    cf_3 = r0_13 >= 0u;
    if (!zf_3) {
        r0_13 = u32(*gptr<u8>(r0_1 + 5u));
        b_3 = r0_13 >> 4;
        zf_3 = 7u == b_3;
        cf_3 = 7u >= b_3;
    }
    if (!cf_3 || zf_3) {
        goto L_5c4af4;
    }
    if (5u != r0_13 >> 4) {
        goto L_5c4af4;
    }
    r0_14 = call_006548ac(r0_2, 0x12u, 0u, 0u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_14 != 0) {
        goto L_5c4b70;
    }
L_5c4af4:;
    r0_15 = r0 & 1u;
    zf_4 = r0_15 == 0u;
    cf_4 = r0_15 >= 0u;
    if (!zf_4) {
        r0_15 = u32(*gptr<u8>(r0_1 + 5u));
        b_4 = r0_15 >> 4;
        zf_4 = 7u == b_4;
        cf_4 = 7u >= b_4;
    }
    if (!cf_4 || zf_4) {
        goto L_5c4b30;
    }
    if (2u != r0_15 >> 4) {
        goto L_5c4b30;
    }
    r0_16 = call_006548ac(r0_2, 0xfu, 0u, 1u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_16 != 0) {
        goto L_5c4b70;
    }
L_5c4b30:;
    if ((r0 & 0x20u) == 0) {  // (from the original)
        goto L_5c4b78;
    }
    if (u32(*gptr<u8>(r0_2 + 0x1a9u)) != 0x70u) {  // (from the original)
        goto L_5c4b78;
    }
    if (*gptr<u32>(r0_2 + 0x884u) != 0) {  // (from the original)
        goto L_5c4b78;
    }
    r0_17 = call_006548ac(r0_2, 0xfu, 0u, 1u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_17 == 0) {
        goto L_5c4b78;
    }
L_5c4b70:;
    r0_1 = 1u;
L_5c4b74:;
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
L_5c4b78:;
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_005c48c8
GUEST_EXPORT(0x005c48c8, d_005c48c8::f_005c48c8);

// f_005c4cdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c4cdc {

inline constexpr guest::Function<0x0023d5ec, u32(u32, u32, u32, u32)> call_0023d5ec;  // (from the original)
inline constexpr guest::Function<0x0027a5dc, u32(u32, u32, u32, u32)> call_0027a5dc;  // (from the original)
inline constexpr guest::Function<0x0027ab24, u32(u32, u32, u32, u32)> call_0027ab24;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fb96c, u32(u32, u32, u32, u32)> call_002fb96c;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x006bcdfc, u32(u32, u32, u32, u32)> call_006bcdfc;  // (from the original)

u32 f_005c4cdc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 cf_1 = 0;
    u32 r5_1 = 0;
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 zf_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_5 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    cf_1 = r0 >= 4u;
    r5_1 = r1;
    if (!cf_1) {
        cf_1 = r5_1 >= 8u;
    }
    r4_1 = r0;
    if (cf_1) {
        goto L_5c4d90;
    }
    *gptr<u8>(0xa84790u + r4_1 + 0x29200u) = u8(r5_1);  // (from the original)
    r0_1 = call_0027ab24(r5_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    zf_1 = r0_1 == 0;
    if (!zf_1) {
        zf_1 = r2 == 0;
    }
    if (zf_1) {
        goto L_5c4d40;
    }
    r0_1 = call_0027a5dc(r5_1, r1_1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 >= 4u) {
        goto L_5c4d40;
    }
    r0_2 = 0xa84790u + (r0_1 * 0x149u << 7);  // (from the original)
    r0_1 = call_006bcdfc(r0_2, r2, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
L_5c4d40:;
    r0 = call_00305f44(r0_1, r1_1, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0 != r4_1) {
        goto L_5c4d90;
    }
    r0_3 = call_002fb96c(r5_1, r1, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r1 = 0xaaf14cu;  // (from the original)
    *gptr<u32>(r1) = u32(r0_3);
    r0 = *gptr<u32>(r1);
    if (r0 == 0) {
        goto L_5c4d90;
    }
    r0_4 = call_0023d5ec(r0, r1, r2_3, r3_3);
    r1_2 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_5 = call_002fb378(r0_4, r1_2, r2_4, r3_4);
    r1 = *gptr<u32>(r0_5);
    r2_5 = *gptr<u32>(r0_5 + 4);
    r3_5 = *gptr<u32>(r0_5 + 8);
    r0 = 0xaaf140u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r0 + 4) = u32(r2_5);
    *gptr<u32>(r0 + 8) = u32(r3_5);
L_5c4d90:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005c4cdc
GUEST_EXPORT(0x005c4cdc, d_005c4cdc::f_005c4cdc);

// f_005c4e00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c4e00 {

inline constexpr guest::Function<0x0027ab40, u32(u32, u32, u32, u32)> call_0027ab40;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fdf00, u32(u32, u32, u32, u32)> call_002fdf00;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x00317ee0, u32(u32, u32, u32, u32)> call_00317ee0;  // (from the original)

u32 f_005c4e00(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_00305f44(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r4_1 = u32(*gptr<u8>((r0_1 & 3u) + 0xa84790u + 0x29200u));  // (from the original)
    r0_2 = call_002fdf00(r4_1, 0xa84790u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        r4_1 = 8u;
    }
    r0_3 = call_0027ab40(r4_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return r0_3;
    }
    r0_4 = call_002fae84(r0_3, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    r0_5 = r0_4 + 0x5d880u;  // (from the original)
    return call_00317ee0(r0_5, r4_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005c4e00
GUEST_EXPORT(0x005c4e00, d_005c4e00::f_005c4e00);

// f_005c4f3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c4f3c {

inline constexpr guest::Function<0x0020bf50, u32(u32, u32, u32, u32)> call_0020bf50;  // (from the original)
inline constexpr guest::Function<0x002fb96c, u32(u32, u32, u32, u32)> call_002fb96c;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x0071a844, u32(u32, u32, u32, u32)> call_0071a844;  // (from the original)
inline constexpr guest::Function<0x0076aa40, u32(u32, u32, u32, u32)> call_0076aa40;  // (from the original)
inline constexpr guest::Function<0x0076abd4, u32(u32, u32, u32, u32)> call_0076abd4;  // (from the original)
inline constexpr guest::Function<0x0076bac4, u32(u32, u32, u32, u32)> call_0076bac4;  // (from the original)

u32 f_005c4f3c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r3_5 = 0;
    u64 res_1 = 0;
    u32 r2_5 = 0;
    u32 r1_4 = 0;
    u32 r1_5 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_6 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb96c(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r0_2 = r0_1 + 0xau;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_0071a844(r0_2, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_4 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_4, r0_3, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = r13;
    guest::cpu()->r[13] = r13;
    r0_6 = call_0076abd4(r0_5, r1_2, r2_3, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_6 == 0) {
        r0_7 = r13;
        guest::cpu()->r[13] = r13;
        r0_8 = call_0076aa40(r0_7, r1_3, r2_4, r3_4);
        r1_3 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        if (r0_8 == 0) {
            r13 = r13 + 0x10;  // (from the original)
            guest::cpu()->r[1] = r1_3;
            guest::cpu()->r[13] = r13;
            return 0u;
        }
    }
    r0_9 = r13;
    guest::cpu()->r[13] = r13;
    r0_10 = call_0076bac4(r0_9, r1_3, r2_4, r3_4);
    r3_5 = guest::cpu()->r[3];
    res_1 = u64(0xcccccccdu) * r0_10;  // (from the original)
    r2_5 = u32(res_1);
    r1_4 = 0u - (u32(res_1 >> 0x20) >> 3);  // (from the original)
    r1_5 = r0_10 + (r1_4 + (r1_4 << 2) << 1);
    r0_11 = r0_1 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_12 = call_0020bf50(r0_11, r1_5, r2_5, r3_5);
    r1_6 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    return r0_12;
}

}  // namespace d_005c4f3c
GUEST_EXPORT(0x005c4f3c, d_005c4f3c::f_005c4f3c);

// f_005c4fd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c4fd0 {

inline constexpr guest::Function<0x0020bf50, u32(u32, u32, u32, u32)> call_0020bf50;  // (from the original)
inline constexpr guest::Function<0x002fb96c, u32(u32, u32, u32, u32)> call_002fb96c;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x0071a868, u32(u32, u32, u32, u32)> call_0071a868;  // (from the original)
inline constexpr guest::Function<0x0076aa40, u32(u32, u32, u32, u32)> call_0076aa40;  // (from the original)
inline constexpr guest::Function<0x0076abd4, u32(u32, u32, u32, u32)> call_0076abd4;  // (from the original)
inline constexpr guest::Function<0x0076bac4, u32(u32, u32, u32, u32)> call_0076bac4;  // (from the original)

u32 f_005c4fd0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r3_5 = 0;
    u64 res_1 = 0;
    u32 r2_5 = 0;
    u32 r1_4 = 0;
    u32 r1_5 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_6 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb96c(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r0_2 = r0_1 + 0xau;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_0071a868(r0_2, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_4 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_4, r0_3, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = r13;
    guest::cpu()->r[13] = r13;
    r0_6 = call_0076abd4(r0_5, r1_2, r2_3, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_6 == 0) {
        r0_7 = r13;
        guest::cpu()->r[13] = r13;
        r0_8 = call_0076aa40(r0_7, r1_3, r2_4, r3_4);
        r1_3 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        if (r0_8 == 0) {
            r13 = r13 + 0x10;  // (from the original)
            guest::cpu()->r[1] = r1_3;
            guest::cpu()->r[13] = r13;
            return 0u;
        }
    }
    r0_9 = r13;
    guest::cpu()->r[13] = r13;
    r0_10 = call_0076bac4(r0_9, r1_3, r2_4, r3_4);
    r3_5 = guest::cpu()->r[3];
    res_1 = u64(0xcccccccdu) * r0_10;  // (from the original)
    r2_5 = u32(res_1);
    r1_4 = 0u - (u32(res_1 >> 0x20) >> 3);  // (from the original)
    r1_5 = r0_10 + (r1_4 + (r1_4 << 2) << 1);
    r0_11 = r0_1 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_12 = call_0020bf50(r0_11, r1_5, r2_5, r3_5);
    r1_6 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    return r0_12;
}

}  // namespace d_005c4fd0
GUEST_EXPORT(0x005c4fd0, d_005c4fd0::f_005c4fd0);

// f_005c5328: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c5328 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x005c507c, u32(u32, u32, u32, u32)> call_005c507c;  // (from the original)
inline constexpr guest::Function<0x0067ee38, u32(u32, u32, u32, u32)> call_0067ee38;  // (from the original)

u32 f_005c5328(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 res_1 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_005c507c(0x21u, 0u, r2, r3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_005c33d0(4u, 0u, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    res_1 = u32(*gptr<u8>(r0_1 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    r1_1 = res_1;
    if (res_1 != 0) {
        r0_1 = 0u;
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    *gptr<u32>(r13) = u32(r3);
    guest::cpu()->r[13] = r13;
    r0_1 = call_0067ee38(r0_1, r0, r1, r2);
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_005c5328
GUEST_EXPORT(0x005c5328, d_005c5328::f_005c5328);

// f_005c5390: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c5390 {

inline guest::global<u32, 0x00aaf14c> global_00aaf14c;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> call_0066ac8c;  // (from the original)
inline constexpr guest::Function<0x006bb91c, u32(u32, u32, u32, u32)> call_006bb91c;  // (from the original)
inline constexpr guest::Function<0x0070bd0c, u32(u32, u32, u32, u32)> call_0070bd0c;  // (from the original)
inline constexpr guest::Function<0x00712838, u32(u32, u32, u32, u32)> call_00712838;  // (from the original)

u32 f_005c5390(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r6_1 = 0;
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 zf_1 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_6 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_9 = 0;
    u32 r1_6 = 0;
    u32 r4_2 = 0;
    u32 res_1 = 0;
    u32 r1_7 = 0;
    u32 r1_8 = 0;
    u32 r0_10 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r6_1 = r13 + 8u;
    r4_1 = r1;
    if (r0 >= 0xau) {  // (from the original)
        goto L_5c5430;
    }
    r0_1 = *global_00aaf14c;
    if (r0_1 == 0) {
        goto L_5c5430;
    }
    r0_2 = r0_1 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_00712838(r0_2, r0, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r1_1 = r4_1 - 6u;
    if (r1_1 > 1u) {
        guest::cpu()->r[13] = r13;
        r0_4 = call_0070bd0c(r0_3, r1_1, r2_1, r3_1);
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        r4_1 = r0_4;
    }
    zf_1 = r4_1 == 6u;
    if (zf_1) {
        r1_2 = 0x33abu;  // (from the original)
    } else {
        r1_2 = 0x33adu;  // (from the original)
        zf_1 = r4_1 == 7u;
    }
    if (!zf_1) {
        if (r4_1 == 0xbu) {  // (from the original)
            r1_2 = 0x33acu;  // (from the original)
        }
    }
    r0_5 = r13;
    guest::cpu()->r[13] = r13;
    call_002fcbb0(r0_5, r1_2, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_6 = r13;
    guest::cpu()->r[13] = r13;
    call_006bb91c(r0_6, r0, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r1_3 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc934(r6_1, r1_3, r2_3, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    goto L_5c543c;
L_5c5430:;
    guest::cpu()->r[13] = r13;
    call_002fc934(r6_1, 0x95bfdcu, r2, r3);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
L_5c543c:;
    r0_7 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_8 = call_002fcaf4(r0_7, r1_4, r2_4, r3_4);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_8 != 0) {
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1_5;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    guest::cpu()->r[13] = r13;
    r0_9 = call_005c33d0(4u, 0u, r2_5, r3_5);
    r1_6 = guest::cpu()->r[1];
    r4_2 = 0u;
    if (r0_9 == 0) {
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1_6;
        guest::cpu()->r[13] = r13;
        return r4_2;
    }
    res_1 = u32(*gptr<u8>(r0_9 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    r1_6 = res_1;
    if (res_1 != 0) {
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1_6;
        guest::cpu()->r[13] = r13;
        return r4_2;
    }
    r1_7 = *gptr<u32>(r13 + 8u);
    *gptr<u8>(r13 + 0x10u) = u8(r4_2);  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(r1_7);  // (from the original)
    r1_8 = r13 + 0xcu;  // (from the original)
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4) = u32(r4_2);
    guest::cpu()->r[13] = r13;
    r0_10 = call_0066ac8c(r0_9, r1_8, 1u, 0u);
    r1_6 = guest::cpu()->r[1];
    r4_2 = r0_10;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    return r4_2;
}

}  // namespace d_005c5390
GUEST_EXPORT(0x005c5390, d_005c5390::f_005c5390);

// f_005c5714: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c5714 {

inline guest::global<u32, 0x00886abc> global_00886abc;  // (from the original)
inline guest::global<u32, 0x00886ac0> global_00886ac0;  // (from the original)
inline constexpr guest::Function<0x0057ba08, u32(u32, u32, u32, u32)> call_0057ba08;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x006739b8, u32(u32, u32, u32, u32)> call_006739b8;  // (from the original)

u32 f_005c5714(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_005c33d0(4u, 0u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r0_2 = r0_1 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_0057ba08(r0_2, r0, r2_1, r3_1);
    ea_1 = r13 + 0x14u;  // (from the original)
    *gptr<u16>(ea_1) = u16(r0_3);
    ea_2 = r13 + 0xcu;  // (from the original)
    *gptr<u32>(ea_2) = u32(2u);
    ea_3 = r13 + 4u;
    *gptr<u32>(ea_3) = u32(0u);
    *gptr<u32>(ea_3 + 4) = u32(r13 + 0x14u);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(0u);  // (from the original)
    *gptr<u32>(r13) = u32(*global_00886ac0);
    r3_2 = *global_00886abc;
    guest::cpu()->r[13] = r13;
    r0_4 = call_006739b8(r0_1, 0x12u, 1u, r3_2);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_4;
}

}  // namespace d_005c5714
GUEST_EXPORT(0x005c5714, d_005c5714::f_005c5714);

// f_005c591c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c591c {

inline guest::global<u32, 0x00aaf14c> global_00aaf14c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x00607bdc, u32(u32, u32, u32, u32)> call_00607bdc;  // (from the original)

u32 f_005c591c(u32 r0, u32 r1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r6_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_3 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_4 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_5 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r1_6 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_7 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r1_8 = 0;
    u32 r5_1 = 0;
    u32 r4_1 = 0;
    u32 r0_18 = 0;
    u32 r1_9 = 0;
    u32 r0_19 = 0;
    u32 r1_10 = 0;
    u32 r0_20 = 0;
    u32 r1_11 = 0;
    u32 r0_21 = 0;
    u32 r1_12 = 0;
    u32 r0_22 = 0;
    u32 r1_13 = 0;
    u32 r0_23 = 0;
    u32 r1_14 = 0;
    u32 r0_24 = 0;
    u32 r1_15 = 0;
    u32 r0_25 = 0;
    u32 r1_16 = 0;
    r13 = r13 - 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00607bdc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        goto L_5c5940;
    }
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0u;
L_5c5940:;
    r6_1 = *global_00aaf14c;
    if (r6_1 == 0) {
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_2 = r13;
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fc934(r0_2, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = r0 + 4u;
    r0_4 = r0_3 + 4u;
    guest::cpu()->r[13] = r13;
    r0_5 = call_002fc934(r0_4, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = r0 + 8u;
    r0_6 = r0_5 + 4u;
    guest::cpu()->r[13] = r13;
    r0_7 = call_002fc934(r0_6, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = r0 + 0xcu;  // (from the original)
    r0_8 = r0_7 + 4u;
    guest::cpu()->r[13] = r13;
    r0_9 = call_002fc934(r0_8, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = r0 + 0x10u;  // (from the original)
    r0_10 = r0_9 + 4u;
    guest::cpu()->r[13] = r13;
    r0_11 = call_002fc934(r0_10, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = r0 + 0x14u;  // (from the original)
    r0_12 = r0_11 + 4u;
    guest::cpu()->r[13] = r13;
    r0_13 = call_002fc934(r0_12, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_6 = r0 + 0x18u;  // (from the original)
    r0_14 = r0_13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_15 = call_002fc934(r0_14, r1_6, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_7 = r0 + 0x1cu;  // (from the original)
    r0_16 = r0_15 + 4u;
    guest::cpu()->r[13] = r13;
    r0_17 = call_002fc934(r0_16, r1_7, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_8 = u32(*gptr<u8>(r0 + 0x20u));  // (from the original)
    r5_1 = r13;
    r4_1 = r6_1 + 0xau;  // (from the original)
    *gptr<u8>(r0_17 + 4u) = u8(r1_8);
    r0_18 = u32(*gptr<u8>(r6_1 + 0x2au));  // (from the original)
    if (r0_18 != 0) {
        r0_18 = 1u;
    }
    *gptr<u8>(r13 + 0x20u) = u8(r0_18);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r4_1, r5_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_9 = r5_1 + 4u;
    r0_19 = r4_1 + 4u;
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_19, r1_9, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_10 = r5_1 + 8u;
    r0_20 = r4_1 + 8u;
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_20, r1_10, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_11 = r5_1 + 0xcu;  // (from the original)
    r0_21 = r4_1 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_21, r1_11, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_12 = r5_1 + 0x10u;  // (from the original)
    r0_22 = r4_1 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_22, r1_12, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_13 = r5_1 + 0x14u;  // (from the original)
    r0_23 = r4_1 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_23, r1_13, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_14 = r5_1 + 0x18u;  // (from the original)
    r0_24 = r4_1 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_24, r1_14, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_15 = r5_1 + 0x1cu;  // (from the original)
    r0_25 = r4_1 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_25, r1_15, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_16 = guest::cpu()->r[1];
    *gptr<u8>(r4_1 + 0x20u) = u8(u32(*gptr<u8>(r13 + 0x20u)));  // (from the original)
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1_16;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_005c591c
GUEST_EXPORT(0x005c591c, d_005c591c::f_005c591c);

// f_005c5aa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c5aa8 {

inline constexpr guest::Function<0x0027b3a8, u32(u32, u32, u32, u32)> call_0027b3a8;  // (from the original)
inline constexpr guest::Function<0x005c591c, u32(u32, u32, u32, u32)> call_005c591c;  // (from the original)

u32 f_005c5aa8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r12_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x40u;  // (from the original)
    ea_1 = r13 + 0x40u;  // (from the original)
    r1_1 = *gptr<u32>(ea_1);
    r2_1 = *gptr<u32>(ea_1 + 4);
    r12_1 = *gptr<u32>(ea_1 + 8);
    ea_2 = r13;
    *gptr<u32>(ea_2) = u32(r3);
    ea_3 = r13 + 4u;
    *gptr<u32>(ea_3) = u32(r1_1);
    *gptr<u32>(ea_3 + 4) = u32(r2_1);
    *gptr<u32>(ea_3 + 8) = u32(r12_1);
    r0_1 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0027b3a8(r0_1, r0, r1, r2);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_005c591c(r0_2, r1_2, r2_2, r3_1);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_005c5aa8
GUEST_EXPORT(0x005c5aa8, d_005c5aa8::f_005c5aa8);

// f_005c5bb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c5bb8 {

inline constexpr guest::Function<0x0027ac30, u32(u32, u32, u32, u32)> call_0027ac30;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> call_002fe8a8;  // (from the original)
inline constexpr guest::Function<0x00607bdc, u32(u32, u32, u32, u32)> call_00607bdc;  // (from the original)
inline constexpr guest::Function<0x0071a844, u32(u32, u32, u32, u32)> call_0071a844;  // (from the original)
inline constexpr guest::Function<0x0071a868, u32(u32, u32, u32, u32)> call_0071a868;  // (from the original)
inline constexpr guest::Function<0x00768628, u32(u32, u32, u32, u32)> call_00768628;  // (from the original)

u32 f_005c5bb8(u32 r0_unused, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r5_1 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_6 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = 0u;
    r6 = 0xaaf14cu;  // (from the original)
L_5c5bc4:;
    r0_1 = r4 & 0xffu;  // (from the original)
    if (r0_1 < 4u) {
        r0_2 = call_002fe8a8(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            goto L_5c5cac;
        }
        r5_1 = r0_2 + 0xau;  // (from the original)
        r0_3 = call_0071a844(r5_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        r0_4 = call_00768628(r0_3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        if (r0_4 != 0) {
            r0_5 = r5_1 + 0x1cu;  // (from the original)
            call_002fc8e8(r0_5, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1_2 = guest::cpu()->r[1];
        }
        r0_6 = call_0071a868(r5_1, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_3 = guest::cpu()->r[1];
        r0_2 = call_00768628(r0_6, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            goto L_5c5cac;
        }
        goto L_5c5ca4;
    }
    r0_2 = call_00607bdc(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        goto L_5c5cac;
    }
    r0_2 = *gptr<u32>(r6);
    if (r0_2 == 0) {
        goto L_5c5cac;
    }
    r5_1 = r0_2 + 0xau;  // (from the original)
    r0_7 = call_0071a844(r5_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r0_8 = call_00768628(r0_7, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    if (r0_8 != 0) {
        r0_9 = r5_1 + 0x1cu;  // (from the original)
        call_002fc8e8(r0_9, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_5 = guest::cpu()->r[1];
    }
    r0_10 = call_0071a868(r5_1, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    r0_2 = call_00768628(r0_10, r1_6, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        goto L_5c5cac;
    }
L_5c5ca4:;
    r0_2 = call_0027ac30(r5_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_5c5cac:;
    r4 = r4 + 1u;
    if (r4 < 4u) {
        guest::preempt();
        goto L_5c5bc4;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_005c5bb8
GUEST_EXPORT(0x005c5bb8, d_005c5bb8::f_005c5bb8);

// f_005c5df8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c5df8 {

inline guest::global<u8, 0x00aadad5> global_00aadad5;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)

u32 f_005c5df8(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 r1_2 = 0;
    u32 res_2 = 0;
    u32 res_3 = 0;
    u32 r2_1 = 0;
    u32 res_4 = 0;
    u32 zf_1 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_005c33d0(4u, 1u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    res_1 = u32(*gptr<u8>(r0_1 + 0x66u)) << 0x1e >> 0x1f;  // (from the original)
    if (res_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = res_1;
        return 0u;
    }
    r1_2 = u32(*global_00aadad5);
    res_2 = r1_2 << 0x1c >> 0x1f;  // (from the original)
    if (res_2 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    res_3 = r1_2 << 0x1e >> 0x1f;  // (from the original)
    if (res_3 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    r2_1 = r0_1 + 0x500u;  // (from the original)
    if (u32(*gptr<u16>(r2_1 + 0xbcu)) != 0) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    res_4 = r1_2 << 0x1d >> 0x1f;  // (from the original)
    zf_1 = res_4 == 0;
    r1_3 = res_4;
    if (zf_1) {
        r1_3 = u32(*gptr<u16>(r2_1 + 0xbeu));  // (from the original)
        zf_1 = r1_3 == 0;
    }
    if (!zf_1) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_3;
        return 0u;
    }
    r1_4 = u32(*gptr<u8>(r0_1 + 0x177u));  // (from the original)
    if ((r1_4 & 1u) != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_4;
        return 1u;
    }
    if (u32(*gptr<u8>(r0_1 + 0x1a9u)) == 0) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_4;
        return 1u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_4;
    return 0u;
}

}  // namespace d_005c5df8
GUEST_EXPORT(0x005c5df8, d_005c5df8::f_005c5df8);

// f_005c5efc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c5efc {

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x005c7e48, u32(u32, u32, u32, u32)> call_005c7e48;  // (from the original)
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> call_0066ac8c;  // (from the original)

u32 f_005c5efc(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r5_1 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r6_1 = 0;
    u32 res_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r0_7 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r0_1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_005c7e48(r0_1, r0, r1, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fcaf4(r0_2, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_3 != 0) {
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r5_1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_4 = call_005c33d0(4u, 0u, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r6_1 = 0u;
    if (r0_4 == 0) {
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return r6_1;
    }
    res_1 = u32(*gptr<u8>(r0_4 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    if (res_1 != 0) {
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return r6_1;
    }
    r0_5 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_5, r5_1, r2_3, r3_3);
    r0_6 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    *gptr<u8>(r13 + 0x10u) = u8(2u);  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(r0_6);  // (from the original)
    r1_4 = r13 + 0xcu;  // (from the original)
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4) = u32(r6_1);
    guest::cpu()->r[13] = r13;
    r0_7 = call_0066ac8c(r0_4, r1_4, 1u, 0u);
    r1_3 = guest::cpu()->r[1];
    r6_1 = r0_7;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r6_1;
}

}  // namespace d_005c5efc
GUEST_EXPORT(0x005c5efc, d_005c5efc::f_005c5efc);

// f_005c6024: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c6024 {

inline constexpr guest::Function<0x002f77e8, u32(u32, u32, u32, u32)> call_002f77e8;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002ff368, u32(u32, u32, u32, u32)> call_002ff368;  // (from the original)
inline constexpr guest::Function<0x002ff4d4, u32(u32, u32, u32, u32)> call_002ff4d4;  // (from the original)
inline constexpr guest::Function<0x005cc3a4, u32(u32, u32, u32, u32)> call_005cc3a4;  // (from the original)
inline constexpr guest::Function<0x00768138, u32(u32, u32, u32, u32)> call_00768138;  // (from the original)

u32 f_005c6024(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    u32 r4_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r4_2 = 0;
    u32 r0_7 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r4_3 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r3_3 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_2 = 0;
    u32 r0_16 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x2a8u;  // (from the original)
    r5_1 = r0 + 0x5700u;  // (from the original)
    r0_1 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002ff368(r0_1, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = u32(*gptr<u8>(r5_1));
    res_1 = r0_2 << 0x1b;  // (from the original)
    r4_1 = r0 + 0x55a6u;  // (from the original)
    r0_3 = r13 + 0x298u;  // (from the original)
    if (res_1 >> 0x1f) {  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_4 = call_002fcbb0(r0_3, 0x2258u, r2_1, r3_1);  // (from the original)
        ea_1 = r13 + 0x10u;  // (from the original)
        *gptr<u32>(ea_1) = u32(0x184b78u);  // (from the original)
        ea_2 = r13;
        *gptr<u32>(ea_2) = u32(1u);
        *gptr<u32>(ea_2 + 4) = u32(r4_1);
        ea_3 = r13 + 8u;
        *gptr<u32>(ea_3) = u32(r0_4);
        *gptr<u32>(ea_3 + 4) = u32(0x1du);  // (from the original)
        r0_5 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_6 = call_005cc3a4(r0_5, 0x5c6160u, 1u, 3u);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        r4_2 = r0_6 ^ 1u;
        if (r4_2 != 0) {
            goto L_5c6144;
        }
    } else {
        guest::cpu()->r[13] = r13;
        r0_7 = call_002fcbb0(r0_3, 0x2258u, r2_1, r3_1);  // (from the original)
        ea_4 = r13 + 0x10u;  // (from the original)
        *gptr<u32>(ea_4) = u32(0x182b80u);  // (from the original)
        ea_5 = r13;
        *gptr<u32>(ea_5) = u32(2u);
        *gptr<u32>(ea_5 + 4) = u32(r4_1);
        ea_6 = r13 + 8u;
        *gptr<u32>(ea_6) = u32(r0_7);
        *gptr<u32>(ea_6 + 4) = u32(0x1du);  // (from the original)
        r0_8 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_9 = call_005cc3a4(r0_8, 0x5c6160u, 2u, 4u);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        r4_3 = r0_9 ^ 1u;
        if (r4_3 != 0) {
            goto L_5c6144;
        }
    }
    r0_10 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_11 = call_002fcbb0(r0_10, 0x3042u, r2_2, r3_2);  // (from the original)
    r3_3 = guest::cpu()->r[3];
    r0_12 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00768138(r0_12, r0_11, 0u, r3_3);
    r0_13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_14 = call_002ff4d4(r0_13, 7u, 2u, 0u);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_14 == 0) {
        goto L_5c6144;
    }
    r0_15 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f77e8(r0_15, r1_1, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x2a8u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return 1u;
L_5c6144:;
    r0_16 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f77e8(r0_16, r1_1, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x2a8u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_005c6024
GUEST_EXPORT(0x005c6024, d_005c6024::f_005c6024);

// f_005c617c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c617c {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)

u32 f_005c617c() {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = 0u;
    r5 = 0xaaef18u;  // (from the original)
    do {
L_5c6188:;
        r0_1 = r5 + (r4 << 2);
        r1_1 = r0_1 + 0x1cu;  // (from the original)
        r0_2 = r0_1 + 0x3cu;  // (from the original)
        call_002fc8e8(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 4u);
    r6 = r5 + 0xecu;  // (from the original)
    r5 = r5 + 0x4cu;  // (from the original)
    r4 = 0u;
    do {
L_5c61b0:;
        r1_2 = r5 + (r4 << 2);
        r0_3 = r6 + (r4 << 2);
        call_002fc8e8(r0_3, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_3 = guest::cpu()->r[1];
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0x10u);  // (from the original)
    *gptr<u32>(r6 + 0x40u) = u32(*gptr<u32>(r5 + 0x40u));  // (from the original)
    *gptr<u32>(r6 + 0x44u) = u32(*gptr<u32>(r5 + 0x44u));  // (from the original)
    *gptr<u32>(r6 + 0x48u) = u32(*gptr<u32>(r5 + 0x48u));  // (from the original)
    r0_4 = *gptr<u32>(r5 + 0x4cu);  // (from the original)
    *gptr<u32>(r6 + 0x4cu) = u32(r0_4);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return r0_4;
}

}  // namespace d_005c617c
GUEST_EXPORT(0x005c617c, d_005c617c::f_005c617c);

// f_005c649c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c649c {

inline constexpr guest::Function<0x005c64a4, u32(u32, u32, u32, u32)> call_005c64a4;  // (from the original)

u32 f_005c649c() {
    return call_005c64a4(1u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005c649c
GUEST_EXPORT(0x005c649c, d_005c649c::f_005c649c);

// f_005c6654: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c6654 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00659c08, u32(u32, u32, u32, u32)> call_00659c08;  // (from the original)
inline constexpr guest::Function<0x0067a478, u32(u32, u32, u32, u32)> call_0067a478;  // (from the original)

u32 f_005c6654(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_005c33d0(4u, 0u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        if (r0 != 0) {
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            return call_0064d0b8(r0_1, 0xfu, 0u, 0u);  // (from the original)
        }
        call_0067a478(r0_1, r1_1, r2_1, r3_1);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_00659c08(r0_1, r1_2, r2_2, r3_2);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_005c6654
GUEST_EXPORT(0x005c6654, d_005c6654::f_005c6654);

// f_005c6760: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c6760 {

inline guest::global<u32, 0x00aaf140> global_00aaf140;  // (from the original)
inline guest::global<u32, 0x00aaf14c> global_00aaf14c;  // (from the original)
inline constexpr guest::Function<0x0023d5ec, u32(u32, u32, u32, u32)> call_0023d5ec;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)

u32 f_005c6760(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    r0_1 = *global_00aaf14c;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    ea_1 = r13 - 8;
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r14);
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0_2 = call_0023d5ec(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fb378(r0_2, r1_1, r2_1, r3_1);
    r1_2 = *gptr<u32>(r0_3);
    r2_2 = *gptr<u32>(r0_3 + 4);
    r3_2 = *gptr<u32>(r0_3 + 8);
    *global_00aaf140 = u32(r1_2);
    *gptr<u32>(0xaaf140u + 4) = u32(r2_2);  // (from the original)
    *gptr<u32>(0xaaf140u + 8) = u32(r3_2);  // (from the original)
    ea_2 = r13;
    r13 = r13 + 8;
    r4_1 = *gptr<u32>(ea_2);
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[13] = r13;
    return 0xaaf140u;  // (from the original)
}

}  // namespace d_005c6760
GUEST_EXPORT(0x005c6760, d_005c6760::f_005c6760);

// f_005c67d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c67d8 {

inline guest::global<u32, 0x005c67ec> global_005c67ec;  // (from the original)

u32 f_005c67d8() {
    float S0_1 = 0;
    S0_1 = std::bit_cast<float>(*global_005c67ec);
    *gptr<u32>(0xaaef90u + 0x204u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(0xaaef90u + 0x208u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    guest::cpu()->s[0] = S0_1;
    return 0xaaef90u;  // (from the original)
}

}  // namespace d_005c67d8
GUEST_EXPORT(0x005c67d8, d_005c67d8::f_005c67d8);

// f_005c6878: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c6878 {

inline guest::global<u32, 0x005c68fc> global_005c68fc;  // (from the original)
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x005c330c, u32(u32, u32, u32, u32)> call_005c330c;  // (from the original)

u32 f_005c6878(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S1_2 = 0;
    u32 r1_1 = 0;
    float S0_2 = 0;
    u32 r1_2 = 0;
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    ea_1 = r13 + 0x20u;  // (from the original)
    r6_1 = *gptr<u32>(ea_1);
    r7_1 = *gptr<u32>(ea_1 + 4);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_1 = call_005c330c(r1, r1, r2, r3);
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    call_002f8574(r0, r0_1, 0x26u, r3_1);  // (from the original)
    *gptr<u8>(r0) = u8(r2);
    S1_2 = std::bit_cast<float>(*global_005c68fc);
    r1_1 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*gptr<u32>(r3)) * S1_2)));
    *gptr<u16>(r13) = u16(r1_1);
    *gptr<u16>(r0 + 2u) = u16(r1_1);
    S0_2 = std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*gptr<u32>(r3 + 8u)) * S1_2));
    r1_2 = std::bit_cast<u32>(S0_2);
    *gptr<u16>(r0 + 4u) = u16(r1_2);
    *gptr<u16>(r13) = u16(r6_1);
    *gptr<u16>(r0 + 6u) = u16(r6_1);
    *gptr<u8>(r0 + 1u) = u8(r7_1);
    *gptr<u16>(r0 + 9u) = u16(0u);
    *gptr<u8>(r0 + 0xbu) = u8(0u);  // (from the original)
    *gptr<u8>(r0 + 0xcu) = u8(0u);  // (from the original)
    *gptr<u8>(r0 + 8u) = u8(0u);
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return 0u;
}

}  // namespace d_005c6878
GUEST_EXPORT(0x005c6878, d_005c6878::f_005c6878);

// f_005c6900: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c6900 {

inline constexpr guest::Function<0x005c6908, u32(u32, u32, u32, u32)> call_005c6908;  // (from the original)

u32 f_005c6900() {
    return call_005c6908(1u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005c6900
GUEST_EXPORT(0x005c6900, d_005c6900::f_005c6900);

// f_005c6a20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c6a20 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> call_0066ac8c;  // (from the original)

u32 f_005c6a20(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 r12_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_005c33d0(4u, 0u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    res_1 = u32(*gptr<u8>(r0_1 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    if (res_1 != 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = res_1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r12_1 = *gptr<u32>(r0);
    *gptr<u8>(r13 + 0xcu) = u8(2u);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r12_1);
    *gptr<u32>(r13 + 0xdu) = u32(*gptr<u32>(r1));  // (from the original)
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4) = u32(0u);
    *gptr<u8>(r13 + 0x11u) = u8(4u);  // (from the original)
    r1_2 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_0066ac8c(r0_1, r1_2, 2u, 0u);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_005c6a20
GUEST_EXPORT(0x005c6a20, d_005c6a20::f_005c6a20);

// f_005c6a98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c6a98 {


u32 f_005c6a98() {
    u32 r1_1 = 0;
    r1_1 = u32(*gptr<u8>(0xaadad4u + 1u)) | 2u;  // (from the original)
    *gptr<u8>(0xaadad4u + 1u) = u8(r1_1);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return 0xaadad4u;  // (from the original)
}

}  // namespace d_005c6a98
GUEST_EXPORT(0x005c6a98, d_005c6a98::f_005c6a98);

// f_005c6b24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c6b24 {

inline guest::global<u32, 0x00aaf14c> global_00aaf14c;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0071a844, u32(u32, u32, u32, u32)> call_0071a844;  // (from the original)
inline constexpr guest::Function<0x007241b0, u32(u32, u32, u32, u32)> call_007241b0;  // (from the original)
inline constexpr guest::Function<0x00765e04, u32(u32, u32, u32, u32)> call_00765e04;  // (from the original)
inline constexpr guest::Function<0x0076aa70, u32(u32, u32, u32, u32)> call_0076aa70;  // (from the original)

u32 f_005c6b24(u32 r0_unused, u32 r1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_3 = 0;
    u32 r4_2 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_5 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    r4_1 = *global_00aaf14c;
    if (r4_1 == 0) {
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_1 = r4_1 + 0xau;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_0071a844(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_3, r0_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_4 = r13;
    guest::cpu()->r[13] = r13;
    r0_5 = call_002fcaf4(r0_4, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_5 != 0) {
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    r0_6 = r4_1 + 0x6bd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_7 = call_007241b0(r0_6, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    if (r0_7 >> 0x1f != (r0_7 & (r0_7 ^ r0_7)) >> 0x1f) {  // (from the original)
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r4_2 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_8 = call_005c33d0(4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    if (r0_8 == 0) {
        goto L_5c6c00;
    }
    guest::cpu()->r[13] = r13;
    r0_9 = call_00765e04(r0_8, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] = r13;
    call_002fc934(r4_2, r0_9, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_5c6bd0:;
    r0_10 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_11 = call_0076aa70(r0_10, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    if (r0_11 == 0) {
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_5;
        guest::cpu()->r[13] = r13;
        return 2u;
    }
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return 3u;
L_5c6c00:;
    guest::cpu()->r[13] = r13;
    call_002fc934(r4_2, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    guest::preempt();
    goto L_5c6bd0;
}

}  // namespace d_005c6b24
GUEST_EXPORT(0x005c6b24, d_005c6b24::f_005c6b24);

// f_005c6e18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c6e18 {

inline guest::global<u32, 0x00aaf140> global_00aaf140;  // (from the original)
inline guest::global<u32, 0x00aaf14c> global_00aaf14c;  // (from the original)
inline constexpr guest::Function<0x0023d5ec, u32(u32, u32, u32, u32)> call_0023d5ec;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x00314278, u32(u32, u32, u32, u32)> call_00314278;  // (from the original)

u32 f_005c6e18(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 ea_2 = 0;
    u32 r3_2 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb378(r0, r1, r2, r3);
    ea_1 = 0xaaf140u + 4u;  // (from the original)
    r2_1 = *gptr<u32>(ea_1);
    r3_1 = *gptr<u32>(ea_1 + 4);
    ea_2 = r13;
    *gptr<u32>(ea_2) = u32(r2_1);
    *gptr<u32>(ea_2 + 4) = u32(r3_1);
    r3_2 = *global_00aaf140;
    r0_2 = *gptr<u32>(r0_1);
    r1_1 = *gptr<u32>(r0_1 + 4);
    r2_2 = *gptr<u32>(r0_1 + 8);
    guest::cpu()->r[13] = r13;
    r0_3 = call_00314278(r0_2, r1_1, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_3 != 0) {
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_3;
    }
    r0_4 = *global_00aaf14c;
    if (r0_4 == 0) {
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_4;
    }
    guest::cpu()->r[13] = r13;
    r0_5 = call_0023d5ec(r0_4, r1_2, r2_3, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_6 = call_002fb378(r0_5, r1_3, r2_4, r3_4);
    r1_4 = *gptr<u32>(r0_6);
    r2_5 = *gptr<u32>(r0_6 + 4);
    r3_5 = *gptr<u32>(r0_6 + 8);
    *global_00aaf140 = u32(r1_4);
    *gptr<u32>(0xaaf140u + 4) = u32(r2_5);  // (from the original)
    *gptr<u32>(0xaaf140u + 8) = u32(r3_5);  // (from the original)
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return 0xaaf140u;  // (from the original)
}

}  // namespace d_005c6e18
GUEST_EXPORT(0x005c6e18, d_005c6e18::f_005c6e18);

// f_005c6f7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c6f7c {

inline guest::global<u8, 0x00aadad4> global_00aadad4;  // (from the original)

u32 f_005c6f7c() {
    u32 r1_1 = 0;
    u32 res_1 = 0;
    r1_1 = u32(*global_00aadad4);
    res_1 = r1_1 << 0x1c >> 0x1f;  // (from the original)
    if (res_1 != 0) {
        r1_1 = r1_1 & ~8u;
        *global_00aadad4 = u8(r1_1);
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_005c6f7c
GUEST_EXPORT(0x005c6f7c, d_005c6f7c::f_005c6f7c);

// f_005c6fa0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c6fa0 {

inline guest::global<u32, 0x005c700c> global_005c700c;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x005c5eb8, u32(u32, u32, u32, u32)> call_005c5eb8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x0067c674, u32(u32, u32, u32, u32)> call_0067c674;  // (from the original)

u32 f_005c6fa0(u32 r0_unused, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    float S0_2 = 0;
    u32 res_1 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_3 = 0;
    float S0_4 = 0;
    guest::cpu()->r[13] -= 8u;
    guest::cpu()->s[0] = S0;
    r0_1 = call_005c5eb8(4u, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        return r0_1;
    }
    guest::cpu()->s[0] = S0_1;
    r0_2 = call_005c33d0(4u, 1u, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    S0_2 = guest::cpu()->s[0];
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->s[0] = S0_2;
        return r0_2;
    }
    res_1 = u32(*gptr<u8>(r0_2 + 0x171u)) << 0x1a >> 0x1f;  // (from the original)
    if (res_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->s[0] = S0_2;
        return res_1;
    }
    guest::cpu()->s[0] = S0_2;
    r0_3 = call_0064d0b8(r0_2, 0xeau, 0u, 0u);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    if (r0_3 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->s[0] = S0_3;
        return r0_3;
    }
    guest::cpu()->r[13] += 8u;
    S0_4 = std::bit_cast<float>(*global_005c700c);
    guest::cpu()->s[0] = S0_4;
    return call_0067c674(r0_2, 0u, r2_2, r3_2);
}

}  // namespace d_005c6fa0
GUEST_EXPORT(0x005c6fa0, d_005c6fa0::f_005c6fa0);

// f_005c7010: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c7010 {

inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32, u32)> call_0062512c;  // (from the original)

u32 f_005c7010(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    r0_1 = r0 & 3u;
    r2_1 = r1 & 3u;
    r1_1 = r0_1 + (r0_1 << 1) + (r0_1 << 4);
    r0_2 = u32(*gptr<u8>(0x881b8cu + r2_1));  // (from the original)
    r1_2 = 0xa84790u + (r1_1 << 1) + 0x292acu;  // (from the original)
    return call_0062512c(r0_2, r1_2, 0u, guest::cpu()->r[3]);
}

}  // namespace d_005c7010
GUEST_EXPORT(0x005c7010, d_005c7010::f_005c7010);

// f_005c7258: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c7258 {

inline guest::global<u32, 0x00aaf14c> global_00aaf14c;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x00660d14, u32(u32, u32, u32, u32)> call_00660d14;  // (from the original)
inline constexpr guest::Function<0x006bb91c, u32(u32, u32, u32, u32)> call_006bb91c;  // (from the original)

u32 f_005c7258(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r5_1 = 0;
    u32 r0_4 = 0;
    u32 r3_3 = 0;
    u32 r4_1 = 0;
    u32 res_1 = 0;
    u32 r0_5 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r0_1 = *global_00aaf14c;
    if (r0_1 == 0) {
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r0_2 = r13;
    guest::cpu()->r[13] = r13;
    call_002fcbb0(r0_2, 0x33aau, r2, r3);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    call_006bb91c(r0_3, r0, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r5_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_4 = call_005c33d0(4u, 0u, r2_2, r3_2);
    r1 = guest::cpu()->r[1];
    r3_3 = guest::cpu()->r[3];
    r4_1 = 0u;
    if (r0_4 == 0) {
        goto L_5c72c8;
    }
    res_1 = u32(*gptr<u8>(r0_4 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    r1 = res_1;
    if (res_1 != 0) {
        goto L_5c72c8;
    }
    guest::cpu()->r[13] = r13;
    r0_5 = call_00660d14(r0_4, r5_1, 0u, r3_3);
    r1 = guest::cpu()->r[1];
    r4_1 = r0_5;
L_5c72c8:;
    r0_1 = r4_1;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_005c7258
GUEST_EXPORT(0x005c7258, d_005c7258::f_005c7258);

// f_005c7a8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c7a8c {

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x005c7e48, u32(u32, u32, u32, u32)> call_005c7e48;  // (from the original)
inline constexpr guest::Function<0x006bb91c, u32(u32, u32, u32, u32)> call_006bb91c;  // (from the original)
inline constexpr guest::Function<0x0070bd0c, u32(u32, u32, u32, u32)> call_0070bd0c;  // (from the original)
inline constexpr guest::Function<0x00712838, u32(u32, u32, u32, u32)> call_00712838;  // (from the original)

u32 f_005c7a8c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r0_8 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 zf_1 = 0;
    u32 r1_2 = 0;
    u32 r0_9 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_10 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r0_11 = 0;
    u32 ea_1 = 0;
    u32 r3_6 = 0;
    u32 ea_2 = 0;
    u32 r3_7 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    if (r1 >= 0xau) {  // (from the original)
        goto L_5c7b4c;
    }
    r0_1 = *gptr<u32>(0xaaef18u + 0x234u);  // (from the original)
    if (r0_1 == 0) {
        goto L_5c7b4c;
    }
    r0_2 = r0_1 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_00712838(r0_2, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_4 = u32(*gptr<u8>(r0_3 + 0x69u));  // (from the original)
    if (r0_4 - 6u <= 1u) {
        r0_5 = *gptr<u32>(0xaaef18u + 0x234u);  // (from the original)
        if (r0_5 == 0) {
            goto L_5c7b4c;
        }
        r0_6 = r0_5 + 0x2cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_7 = call_00712838(r0_6, r1, r2, r3_1);
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_8 = call_0070bd0c(r0_7, r1_1, r2_1, r3_2);
        r2_2 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        zf_1 = r0_8 == 6u;
        if (zf_1) {
            r1_2 = 0x33abu;  // (from the original)
        } else {
            r1_2 = 0x33adu;  // (from the original)
            zf_1 = r0_8 == 7u;
        }
        if (!zf_1) {
            if (r0_8 == 0xbu) {  // (from the original)
                r1_2 = 0x33acu;  // (from the original)
            }
        }
        r0_9 = r13;
        guest::cpu()->r[13] = r13;
        call_002fcbb0(r0_9, r1_2, r2_2, r3_3);
        r2_3 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        r0_10 = r13;
        guest::cpu()->r[13] = r13;
        call_006bb91c(r0_10, r1, r2_3, r3_4);
        r2_4 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
        r1_3 = r13;
        guest::cpu()->r[13] = r13;
        call_002fc934(r0, r1_3, r2_4, r3_5);
        r1_4 = guest::cpu()->r[1];
        r0_11 = r13;
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->r[13] = r13;
        return r0_11;
    }
    if (r0_4 > 5u) {
        goto L_5c7b4c;
    }
    ea_1 = r13;
    r13 = r13 + 0x18;  // (from the original)
    r3_6 = *gptr<u32>(ea_1);
    guest::cpu()->r[13] = r13;
    return call_005c7e48(r0, r1, 0xcu, r3_6);  // (from the original)
L_5c7b4c:;
    ea_2 = r13;
    r13 = r13 + 0x18;  // (from the original)
    r3_7 = *gptr<u32>(ea_2);
    guest::cpu()->r[13] = r13;
    return call_002fc934(r0, 0x95bfdcu, r2, r3_7);  // (from the original)
}

}  // namespace d_005c7a8c
GUEST_EXPORT(0x005c7a8c, d_005c7a8c::f_005c7a8c);

// f_005c7d24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c7d24 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0070ab24, u32(u32, u32, u32, u32)> call_0070ab24;  // (from the original)

u32 f_005c7d24() {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_005c33d0(4u, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    r1_2 = u32(*gptr<u8>(r0_1 + 0x1a9u));  // (from the original)
    if (r1_2 != 0x75u) {  // (from the original)
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

}  // namespace d_005c7d24
GUEST_EXPORT(0x005c7d24, d_005c7d24::f_005c7d24);

// f_005c7d64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c7d64 {

inline guest::global<u32, 0x00886cac> global_00886cac;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x006739b8, u32(u32, u32, u32, u32)> call_006739b8;  // (from the original)

u32 f_005c7d64(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 r1_2 = 0;
    u32 ea_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_005c33d0(4u, 0u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    res_1 = u32(*gptr<u8>(r0_1 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    if (res_1 != 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = res_1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r1_2 = u32(*gptr<u8>(r0_1 + 0x1a9u));  // (from the original)
    if (r1_2 != 0xa4u) {  // (from the original)
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    ea_1 = r13 + 8u;
    *gptr<u32>(ea_1) = u32(0u);
    *gptr<u32>(ea_1 + 4) = u32(2u);
    *gptr<u32>(r13 + 0x10u) = u32(0u);  // (from the original)
    *gptr<u32>(r13) = u32(5u);
    *gptr<u32>(r13 + 4) = u32(1u);
    r3_1 = *global_00886cac;
    guest::cpu()->r[13] = r13;
    r0_2 = call_006739b8(r0_1, 0x12u, 1u, r3_1);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_005c7d64
GUEST_EXPORT(0x005c7d64, d_005c7d64::f_005c7d64);

// f_005c80b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c80b4 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)

u32 f_005c80b4(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5_1 = 0;
    u32 r2_1 = 0;
    u32 zf_1 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5_1 = r1;
    r0 = call_005c33d0(r1, 1u, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    if (r0 != 0) {
        r1 = u32(*gptr<u8>(r0 + 0x1a9u));  // (from the original)
        zf_1 = r1 == 0x7cu;  // (from the original)
        if (!zf_1) {
            zf_1 = r1 == 0x7fu;  // (from the original)
        }
        if (!zf_1) {
            zf_1 = r1 == 0xaeu;  // (from the original)
        }
        if (zf_1) {
            goto L_5c8114;
        }
    }
    r0 = call_005c33d0(r5_1, 1u, r2_1, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = u32(*gptr<u8>(r0 + 0x1a9u));  // (from the original)
    if (r1 == 0xafu) {  // (from the original)
        goto L_5c8138;
    }
L_5c810c:;
    r0 = 0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_5c8114:;
    if (r4 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 1u;
    }
L_5c811c:;
    *gptr<u32>(r4) = u32(*gptr<u32>(r0 + 0x14u));  // (from the original)
    r1 = *gptr<u32>(r0 + 0x18u);  // (from the original)
    *gptr<u32>(r4 + 4u) = u32(r1);
    *gptr<u32>(r4 + 8u) = u32(*gptr<u32>(r0 + 0x1cu));  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 1u;
L_5c8138:;
    r1 = u32(*gptr<u8>(r0 + 0x8c7u));  // (from the original)
    if ((r1 & 1u) == 0) {
        guest::preempt();
        goto L_5c810c;
    }
    res_1 = u32(*gptr<u8>(r0 + 0x8c5u)) << 0x19 >> 0x1f;  // (from the original)
    if (res_1 != 0) {
        guest::preempt();
        goto L_5c810c;
    }
    res_2 = r1 << 0x1d >> 0x1f;  // (from the original)
    r1 = res_2;
    if (res_2 != 0) {
        guest::preempt();
        goto L_5c810c;
    }
    if (r4 != 0) {
        guest::preempt();
        goto L_5c811c;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_005c80b4
GUEST_EXPORT(0x005c80b4, d_005c80b4::f_005c80b4);

// f_005c8170: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c8170 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x00687fb4, u32(u32, u32, u32, u32)> call_00687fb4;  // (from the original)

u32 f_005c8170(u32 r0) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_005c33d0(4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    res_1 = u32(*gptr<u8>(r0_1 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    if (res_1 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = res_1;
        return 0u;
    }
    r0_2 = call_00687fb4(r0_1, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        r0_2 = 1u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return r0_2;
}

}  // namespace d_005c8170
GUEST_EXPORT(0x005c8170, d_005c8170::f_005c8170);

// f_005c8244: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c8244 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)

u32 f_005c8244() {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    u32 res_1 = 0;
    u32 r0_4 = 0;
    u32 r1_5 = 0;
    u32 res_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_005c33d0(4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    r1_2 = u32(*gptr<u8>(r0_1 + 0x1a9u));  // (from the original)
    if (r1_2 != 0xafu) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    if (u32(*gptr<u8>(r0_1 + 0x8d0u)) != 1u) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    r0_2 = call_005c33d0(4u, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        if ((u32(*gptr<u8>(r0_2 + 0x8c7u)) & 1u) != 0) {  // (from the original)
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_3;
            return 0u;
        }
    }
    r0_3 = call_005c33d0(4u, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    if (r0_3 != 0) {
        res_1 = u32(*gptr<u8>(r0_3 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
        if (res_1 != 0) {
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_4;
            return 0u;
        }
    }
    r0_4 = call_005c33d0(4u, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    if (r0_4 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_5;
        return 1u;
    }
    res_2 = u32(*gptr<u8>(r0_4 + 0x8c7u)) << 0x1a >> 0x1f;  // (from the original)
    if (res_2 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_5;
        return 0u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_5;
    return 1u;
}

}  // namespace d_005c8244
GUEST_EXPORT(0x005c8244, d_005c8244::f_005c8244);

// f_005c8460: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c8460 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x006739b8, u32(u32, u32, u32, u32)> call_006739b8;  // (from the original)

u32 f_005c8460(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    r5_1 = r1;
    r13 = r13 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_005c33d0(4u, 0u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    res_1 = u32(*gptr<u8>(r0_1 + 0x8c5u)) << 0x19 >> 0x1f;  // (from the original)
    r1 = res_1;
    if (res_1 == 0) {
        goto L_5c84a0;
    }
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0u;
L_5c84a0:;
    res_2 = u32(*gptr<u8>(r0_1 + 0x8c7u)) << 0x1a >> 0x1f;  // (from the original)
    r1 = res_2;
    if (res_2 != 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u32>(r13 + 8u) = u32(0u);
    *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(0u);  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_2 = call_006739b8(r0_1, r0, r5_1, 0u);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_005c8460
GUEST_EXPORT(0x005c8460, d_005c8460::f_005c8460);

// f_005c8694: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c8694 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)

u32 f_005c8694() {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 zf_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_005c33d0(4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    r1_2 = u32(*gptr<u8>(r0_1 + 0x1a9u));  // (from the original)
    if (r1_2 != 0xafu) {  // (from the original)
        if (r1_2 == 0xe3u) {  // (from the original)
            goto L_5c86e0;
        }
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    r1_3 = u32(*gptr<u16>(0x5c4u + r0_1));  // (from the original)
    zf_1 = r1_3 == 0;
    if (zf_1) {
        zf_1 = u32(*gptr<u8>(r0_1 + 0x8cau)) == 0x2eu;  // (from the original)
    }
    if (!zf_1) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_3;
        return 0u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_3;
    return 1u;
L_5c86e0:;
    if (u32(*gptr<u16>(r0_1 + 0x5c0u)) == 0) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_005c8694
GUEST_EXPORT(0x005c8694, d_005c8694::f_005c8694);

// f_005c8710: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c8710 {

inline constexpr guest::Function<0x0027ab40, u32(u32, u32, u32, u32)> call_0027ab40;  // (from the original)
inline constexpr guest::Function<0x002fdf00, u32(u32, u32, u32, u32)> call_002fdf00;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x005c7c24, u32(u32, u32, u32, u32)> call_005c7c24;  // (from the original)

u32 f_005c8710(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_00305f44(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r4_1 = u32(*gptr<u8>((r0_1 & 3u) + 0xa84790u + 0x29200u));  // (from the original)
    r0_2 = call_002fdf00(r4_1, 0xa84790u, r2_1, r3_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        r4_1 = 8u;
    }
    r0_3 = call_0027ab40(r4_1, r1_1, r2_2, r3_2);
    guest::cpu()->r[13] += 8u;
    if (r0_3 == 0) {
        r1_2 = 9u;
    } else {
        r1_2 = 8u;
    }
    return call_005c7c24(0u, r1_2, 0x1cu, 0x95bfdcu);  // (from the original)
}

}  // namespace d_005c8710
GUEST_EXPORT(0x005c8710, d_005c8710::f_005c8710);

// f_005c87e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c87e4 {

inline guest::global<u8, 0x00aadad4> global_00aadad4;  // (from the original)
inline guest::global<u32, 0x00aaf14c> global_00aaf14c;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x005b6a10, u32(u32, u32, u32, u32)> call_005b6a10;  // (from the original)
inline constexpr guest::Function<0x00607bdc, u32(u32, u32, u32, u32)> call_00607bdc;  // (from the original)

u32 f_005c87e4(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 res_1 = 0;
    u32 r1_4 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_00607bdc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r4_1 = *global_00aaf14c;
    if (r4_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r0_2 = call_002f74c8(0xaaf14cu, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r0_3 = call_005b6a10(r0_2, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_3;
        return r0_3;
    }
    r0_4 = u32(*gptr<u8>(0x8f7fu + r4_1));  // (from the original)
    res_1 = r0_4 >> 7;
    if (res_1 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = res_1;
        return 1u;
    }
    *gptr<u8>(0x8f7fu + r4_1) = u8(r0_4 | 0x80u);  // (from the original)
    r1_4 = u32(*global_00aadad4) | 4u;
    *global_00aadad4 = u8(r1_4);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_4;
    return 1u;
}

}  // namespace d_005c87e4
GUEST_EXPORT(0x005c87e4, d_005c87e4::f_005c87e4);

// f_005c886c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c886c {

inline guest::global<u8, 0x00aadad4> global_00aadad4;  // (from the original)

u32 f_005c886c() {
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 r0_1 = 0;
    r1_1 = u32(*global_00aadad4);
    res_1 = r1_1 << 0x19 >> 0x1f;  // (from the original)
    if (res_1 == 0) {
        r1_1 = r1_1 | 0x40u;  // (from the original)
        *global_00aadad4 = u8(r1_1);
        r0_1 = 1u;
    } else {
        r0_1 = 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_005c886c
GUEST_EXPORT(0x005c886c, d_005c886c::f_005c886c);

// f_005c8f14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c8f14 {

struct __attribute__((packed)) Object_005c8f14_0 {
    u8 unknown_0[0x180];  // (not used here)
    u8 byte_180;
    u8 unknown_181[0x1f];  // (not used here)
    u8 byte_1a0;
};
GUEST_OFFSET(Object_005c8f14_0, byte_180, 0x180);  // (from the original)
GUEST_OFFSET(Object_005c8f14_0, byte_1a0, 0x1a0);  // (from the original)


u32 f_005c8f14(gptr<Object_005c8f14_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12_1 = 0;
    u32 r12_2 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 4u;
    arg0->byte_1a0 = u8(0u);
    r4 = 0u;
    r2 = r0 + 0x180u;  // (from the original)
    if (u32(arg0->byte_180) != 0) {
        r4 = 0x20u;  // (from the original)
    }
    r1 = r0;
    r3 = 0u;
L_5c8f3c:;
    r12_1 = u32(*gptr<u8>(r2));
    if (r12_1 == 0) {
        goto L_5c8f70;
    }
    r12_2 = r12_1 - 1u & 0xffu;  // (from the original)
    *gptr<u8>(r2) = u8(r12_2);
    if (r4 == 0) {
        goto L_5c8f70;
    }
    if (r12_2 != 0) {
        goto L_5c8f70;
    }
    if (u32(*gptr<u8>(r0 + 0x180u)) == 0) {  // (from the original)
        goto L_5c8f8c;
    }
L_5c8f70:;
    r3 = r3 + 1u;
    r2 = r2 + 1u;
    r1 = r1 + 0xcu;  // (from the original)
    if (r3 < 0x20u) {  // (from the original)
        guest::preempt();
        goto L_5c8f3c;
    }
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1;
    return r0;
L_5c8f8c:;
    r2_1 = r0 + 0x1a4u;  // (from the original)
    *gptr<u8>(r0 + 0x1a0u) = u8(1u);  // (from the original)
    *gptr<u32>(r2_1) = u32(*gptr<u32>(r1));
    *gptr<u32>(r2_1 + 4u) = u32(*gptr<u32>(r1 + 4u));
    r0_1 = *gptr<u32>(r1 + 8u);
    *gptr<u32>(r2_1 + 8u) = u32(r0_1);
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_005c8f14
GUEST_EXPORT(0x005c8f14, d_005c8f14::f_005c8f14);

// f_005c8fb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c8fb8 {


u32 f_005c8fb8(u32 r0, u32 r1, u32 r2) {
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 v_1 = 0;
    u32 r1_1 = 0;
    u32 v_2 = 0;
    if (r2 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[13] = r13;
        return r0;
    } else {
        r3 = r0 + 0x180u;  // (from the original)
        r12 = 0u;
    }
    ea_1 = r13 - 4u;
    *gptr<u32>(ea_1) = u32(r4);
    r13 = ea_1;
L_5c8fcc:;
    if (u32(*gptr<u8>(r3)) != 0) {
        r12 = r12 + 1u;
        r3 = r3 + 1u;
        r0 = r0 + 0xcu;  // (from the original)
        if (r12 < 0x20u) {  // (from the original)
            guest::preempt();
            goto L_5c8fcc;
        }
        v_1 = *gptr<u32>(r13);
        r13 = r13 + 4u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = v_1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    *gptr<u32>(r0) = u32(*gptr<u32>(r1));
    *gptr<u32>(r0 + 4u) = u32(*gptr<u32>(r1 + 4u));
    r1_1 = *gptr<u32>(r1 + 8u);
    *gptr<u32>(r0 + 8u) = u32(r1_1);
    *gptr<u8>(r3) = u8(r2);
    v_2 = *gptr<u32>(r13);
    r13 = r13 + 4u;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = v_2;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c8fb8
GUEST_EXPORT(0x005c8fb8, d_005c8fb8::f_005c8fb8);

// f_005c91a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c91a0 {


u32 f_005c91a0(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    if (r0 >= 4u) {
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    r0_1 = u32(s32(s8(*gptr<u8>(0xa82000u + r0))));  // (from the original)
    if (s32(r0_1) >= s32(4u)) {
        r0_1 = ~0u;
    }
    r0_2 = u32(s32(r0_1) >> 0x1f) + 1u;  // (from the original)
    guest::cpu()->r[1] = 0xa82000u;  // (from the original)
    return r0_2;
}

}  // namespace d_005c91a0
GUEST_EXPORT(0x005c91a0, d_005c91a0::f_005c91a0);

// f_005c91cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c91cc {

inline guest::global<u16, 0x00aaef14> global_00aaef14;  // (from the original)
inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32, u32)> call_0013fac4;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x005bf954, u32(u32, u32, u32, u32)> call_005bf954;  // (from the original)
inline constexpr guest::Function<0x005bfb94, u32(u32, u32, u32, u32)> call_005bfb94;  // (from the original)

u32 f_005c91cc() {
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
L_5c920c:;
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

}  // namespace d_005c91cc
GUEST_EXPORT(0x005c91cc, d_005c91cc::f_005c91cc);

// f_005c9754: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c9754 {


u32 f_005c9754(u32 r0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    if (r0 >= 0xfcu) {  // (from the original)
        r0 = 0x12u;  // (from the original)
    }
    r13 = r13 - 4u;
    r0_1 = 0x88b948u + (r0 << 2);  // (from the original)
    *gptr<u8>(r13) = u8(u32(*gptr<u8>(r0_1 + 2u)) - u32(*gptr<u8>(r0_1)) + 1u);
    r1_1 = u32(*gptr<u8>(r0_1 + 3u));
    *gptr<u8>(r13 + 1u) = u8(r1_1 - u32(*gptr<u8>(r0_1 + 1u)) + 1u);
    r0_2 = u32(*gptr<u16>(r13));
    r13 = r13 + 4u;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_005c9754
GUEST_EXPORT(0x005c9754, d_005c9754::f_005c9754);

// f_005c98a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c98a8 {

inline guest::global<u16, 0x00886f02> global_00886f02;  // (from the original)
inline guest::global<u16, 0x00886f04> global_00886f04;  // (from the original)
inline guest::global<u16, 0x00886f06> global_00886f06;  // (from the original)
inline guest::global<u16, 0x00886f0c> global_00886f0c;  // (from the original)
inline guest::global<u16, 0x00886f0e> global_00886f0e;  // (from the original)
inline guest::global<u16, 0x00886f12> global_00886f12;  // (from the original)
inline guest::global<u16, 0x00886f16> global_00886f16;  // (from the original)
inline guest::global<u16, 0x00886f18> global_00886f18;  // (from the original)
inline guest::global<u16, 0x00886f1a> global_00886f1a;  // (from the original)
inline guest::global<u16, 0x00886f1c> global_00886f1c;  // (from the original)
inline guest::global<u16, 0x00886f22> global_00886f22;  // (from the original)
inline guest::global<u16, 0x00886f26> global_00886f26;  // (from the original)
inline guest::global<u16, 0x00886f28> global_00886f28;  // (from the original)
inline guest::global<u16, 0x00886f2c> global_00886f2c;  // (from the original)
inline guest::global<u16, 0x00886f2e> global_00886f2e;  // (from the original)
inline guest::global<u16, 0x00886f32> global_00886f32;  // (from the original)
inline guest::global<u16, 0x00886f34> global_00886f34;  // (from the original)
inline guest::global<u16, 0x00886f3a> global_00886f3a;  // (from the original)
inline guest::global<u16, 0x00886f3e> global_00886f3e;  // (from the original)
inline guest::global<u16, 0x00886f42> global_00886f42;  // (from the original)
inline guest::global<u16, 0x00886f44> global_00886f44;  // (from the original)
inline guest::global<u16, 0x00886f46> global_00886f46;  // (from the original)
inline guest::global<u16, 0x00886f48> global_00886f48;  // (from the original)
inline guest::global<u16, 0x00886f4c> global_00886f4c;  // (from the original)
inline guest::global<u16, 0x00886f4e> global_00886f4e;  // (from the original)
inline guest::global<u16, 0x00886f56> global_00886f56;  // (from the original)
inline guest::global<u16, 0x00886f5a> global_00886f5a;  // (from the original)
inline guest::global<u16, 0x00886f60> global_00886f60;  // (from the original)
inline guest::global<u16, 0x00886f62> global_00886f62;  // (from the original)
inline guest::global<u32, 0x0095b6e4> global_0095b6e4;  // (from the original)
inline guest::global<u16, 0x00ac3558> global_00ac3558;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)

u32 f_005c98a8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    if (r0 >= 0xfcu) {  // (from the original)
        r0_1 = 0x887402u;  // (from the original)
        goto L_5ca148;
    }
    if ((*global_0095b6e4 & 1u) != 0) {
        goto L_5ca144;
    }
    r0_2 = call_002fe7dc(0x95b6e4u, r1, r2, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        goto L_5ca144;
    }
    *global_00ac3558 = u16(u32(*global_00886f02));
    r14 = 0x886f20u;  // (from the original)
    *gptr<u16>(0xac3558u + 2u) = u16(u32(*global_00886f02));  // (from the original)
    *gptr<u16>(0xac3558u + 4u) = u16(u32(*global_00886f02));  // (from the original)
    *gptr<u16>(0xac3558u + 6u) = u16(u32(*global_00886f02));  // (from the original)
    *gptr<u16>(0xac3558u + 8u) = u16(u32(*global_00886f04));  // (from the original)
    *gptr<u16>(0xac3558u + 0xau) = u16(u32(*global_00886f04));  // (from the original)
    *gptr<u16>(0xac3558u + 0xcu) = u16(u32(*global_00886f04));  // (from the original)
    *gptr<u16>(0xac3558u + 0xeu) = u16(u32(*global_00886f04));  // (from the original)
    *gptr<u16>(0xac3558u + 0x10u) = u16(u32(*global_00886f06));  // (from the original)
    *gptr<u16>(0xac3558u + 0x12u) = u16(u32(*global_00886f06));  // (from the original)
    *gptr<u16>(0xac3558u + 0x14u) = u16(u32(*global_00886f06));  // (from the original)
    *gptr<u16>(0xac3558u + 0x16u) = u16(u32(*global_00886f06));  // (from the original)
    *gptr<u16>(0xac3558u + 0x18u) = u16(u32(*global_00886f06));  // (from the original)
    *gptr<u16>(0xac3558u + 0x1au) = u16(u32(*global_00886f06));  // (from the original)
    *gptr<u16>(0xac3558u + 0x1cu) = u16(u32(*global_00886f06));  // (from the original)
    *gptr<u16>(0xac3558u + 0x1eu) = u16(u32(*global_00886f06));  // (from the original)
    *gptr<u16>(0xac3558u + 0x20u) = u16(u32(*global_00886f06));  // (from the original)
    *gptr<u16>(0xac3558u + 0x22u) = u16(u32(*global_00886f06));  // (from the original)
    *gptr<u16>(0xac3558u + 0x24u) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x26u) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x28u) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x2au) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x2cu) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x2eu) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x30u) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x32u) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x34u) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x36u) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x38u) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x3au) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x3cu) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x3eu) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x40u) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x42u) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x44u) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x46u) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x48u) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x4au) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x4cu) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x4eu) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x50u) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x52u) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x54u) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x56u) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x58u) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x5au) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x5cu) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x5eu) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x60u) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x62u) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x64u) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x66u) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x68u) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x6au) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x6cu) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x6eu) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x70u) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x72u) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x74u) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x76u) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x78u) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x7au) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x7cu) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x7eu) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x80u) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x82u) = u16(u32(*global_00886f3a));  // (from the original)
    *gptr<u16>(0xac3558u + 0x84u) = u16(u32(*global_00886f56));  // (from the original)
    *gptr<u16>(0xac3558u + 0x86u) = u16(u32(*global_00886f56));  // (from the original)
    *gptr<u16>(0xac3558u + 0x88u) = u16(u32(*global_00886f56));  // (from the original)
    *gptr<u16>(0xac3558u + 0x8au) = u16(u32(*global_00886f56));  // (from the original)
    *gptr<u16>(0xac3558u + 0x8cu) = u16(u32(*global_00886f56));  // (from the original)
    *gptr<u16>(0xac3558u + 0x8eu) = u16(u32(*global_00886f56));  // (from the original)
    *gptr<u16>(0xac3558u + 0x90u) = u16(u32(*global_00886f56));  // (from the original)
    *gptr<u16>(0xac3558u + 0x92u) = u16(u32(*global_00886f56));  // (from the original)
    *gptr<u16>(0xac3558u + 0x94u) = u16(u32(*global_00886f56));  // (from the original)
    *gptr<u16>(0xac3558u + 0x96u) = u16(u32(*global_00886f56));  // (from the original)
    *gptr<u16>(0xac3558u + 0x98u) = u16(u32(*global_00886f0c));  // (from the original)
    *gptr<u16>(0xac3558u + 0x9au) = u16(u32(*global_00886f0c));  // (from the original)
    *gptr<u16>(0xac3558u + 0x9cu) = u16(u32(*global_00886f0c));  // (from the original)
    *gptr<u16>(0xac3558u + 0x9eu) = u16(u32(*global_00886f16));  // (from the original)
    *gptr<u16>(0xac3558u + 0xa0u) = u16(u32(*global_00886f0e));  // (from the original)
    *gptr<u16>(0xac3558u + 0xa2u) = u16(u32(*global_00886f0e));  // (from the original)
    *gptr<u16>(0xac3558u + 0xa4u) = u16(u32(*global_00886f0e));  // (from the original)
    *gptr<u16>(0xac3558u + 0xa6u) = u16(u32(*global_00886f0e));  // (from the original)
    *gptr<u16>(0xac3558u + 0xa8u) = u16(u32(*global_00886f0c));  // (from the original)
    *gptr<u16>(0xac3558u + 0xaau) = u16(u32(*global_00886f0c));  // (from the original)
    *gptr<u16>(0xac3558u + 0xacu) = u16(u32(*global_00886f0c));  // (from the original)
    *gptr<u16>(0xac3558u + 0xaeu) = u16(u32(*global_00886f0c));  // (from the original)
    *gptr<u16>(0xac3558u + 0xb0u) = u16(u32(*global_00886f3e));  // (from the original)
    *gptr<u16>(0xac3558u + 0xb2u) = u16(u32(*global_00886f18));  // (from the original)
    *gptr<u16>(0xac3558u + 0xb4u) = u16(u32(*global_00886f60));  // (from the original)
    *gptr<u16>(0xac3558u + 0xb6u) = u16(u32(*global_00886f12));  // (from the original)
    *gptr<u16>(0xac3558u + 0xb8u) = u16(u32(*gptr<u16>(r14)));  // (from the original)
    *gptr<u16>(0xac3558u + 0xbau) = u16(u32(*global_00886f26));  // (from the original)
    *gptr<u16>(0xac3558u + 0xbcu) = u16(u32(*global_00886f0c));  // (from the original)
    *gptr<u16>(0xac3558u + 0xbeu) = u16(u32(*global_00886f0c));  // (from the original)
    *gptr<u16>(0xac3558u + 0xc0u) = u16(u32(*global_00886f0c));  // (from the original)
    *gptr<u16>(0xac3558u + 0xc2u) = u16(u32(*global_00886f0c));  // (from the original)
    *gptr<u16>(0xac3558u + 0xc4u) = u16(u32(*global_00886f0c));  // (from the original)
    *gptr<u16>(0xac3558u + 0xc6u) = u16(u32(*global_00886f1a));  // (from the original)
    *gptr<u16>(0xac3558u + 0xc8u) = u16(u32(*global_00886f1c));  // (from the original)
    *gptr<u16>(0xac3558u + 0xcau) = u16(u32(*global_00886f22));  // (from the original)
    *gptr<u16>(0xac3558u + 0xccu) = u16(u32(*global_00886f0c));  // (from the original)
    r0_3 = 0xac3558u + 0x100u;  // (from the original)
    *gptr<u16>(0xac3558u + 0xceu) = u16(u32(*global_00886f0c));  // (from the original)
    *gptr<u16>(0xac3558u + 0xd0u) = u16(u32(*gptr<u16>(r14)));  // (from the original)
    *gptr<u16>(0xac3558u + 0xd2u) = u16(u32(*global_00886f0c));  // (from the original)
    *gptr<u16>(0xac3558u + 0xd4u) = u16(u32(*global_00886f5a));  // (from the original)
    *gptr<u16>(0xac3558u + 0xd6u) = u16(u32(*global_00886f0c));  // (from the original)
    *gptr<u16>(0xac3558u + 0xd8u) = u16(u32(*global_00886f0c));  // (from the original)
    *gptr<u16>(0xac3558u + 0xdau) = u16(u32(*global_00886f0c));  // (from the original)
    *gptr<u16>(0xac3558u + 0xdcu) = u16(u32(*global_00886f0c));  // (from the original)
    *gptr<u16>(0xac3558u + 0xdeu) = u16(u32(*global_00886f0c));  // (from the original)
    *gptr<u16>(0xac3558u + 0xe0u) = u16(u32(*global_00886f0c));  // (from the original)
    *gptr<u16>(0xac3558u + 0xe2u) = u16(u32(*global_00886f0c));  // (from the original)
    *gptr<u16>(0xac3558u + 0xe4u) = u16(u32(*global_00886f0c));  // (from the original)
    *gptr<u16>(0xac3558u + 0xe6u) = u16(u32(*global_00886f0c));  // (from the original)
    *gptr<u16>(0xac3558u + 0xe8u) = u16(u32(*global_00886f0c));  // (from the original)
    *gptr<u16>(0xac3558u + 0xeau) = u16(u32(*global_00886f0c));  // (from the original)
    *gptr<u16>(0xac3558u + 0xecu) = u16(u32(*global_00886f0c));  // (from the original)
    *gptr<u16>(0xac3558u + 0xeeu) = u16(u32(*global_00886f0c));  // (from the original)
    *gptr<u16>(0xac3558u + 0xf0u) = u16(u32(*global_00886f0c));  // (from the original)
    *gptr<u16>(0xac3558u + 0xf2u) = u16(u32(*global_00886f0c));  // (from the original)
    *gptr<u16>(0xac3558u + 0xf4u) = u16(u32(*global_00886f0c));  // (from the original)
    *gptr<u16>(0xac3558u + 0xf6u) = u16(u32(*global_00886f0c));  // (from the original)
    *gptr<u16>(0xac3558u + 0xf8u) = u16(u32(*global_00886f0c));  // (from the original)
    *gptr<u16>(0xac3558u + 0xfau) = u16(u32(*global_00886f0c));  // (from the original)
    *gptr<u16>(0xac3558u + 0xfcu) = u16(u32(*global_00886f0c));  // (from the original)
    *gptr<u16>(0xac3558u + 0xfeu) = u16(u32(*global_00886f62));  // (from the original)
    *gptr<u16>(r0_3) = u16(u32(*global_00886f62));
    *gptr<u16>(r0_3 + 2u) = u16(u32(*global_00886f2c));
    *gptr<u16>(r0_3 + 4u) = u16(u32(*global_00886f2c));
    *gptr<u16>(r0_3 + 6u) = u16(u32(*global_00886f2c));
    *gptr<u16>(r0_3 + 8u) = u16(u32(*global_00886f2c));
    *gptr<u16>(r0_3 + 0xau) = u16(u32(*global_00886f2c));  // (from the original)
    *gptr<u16>(r0_3 + 0xcu) = u16(u32(*global_00886f2c));  // (from the original)
    *gptr<u16>(r0_3 + 0xeu) = u16(u32(*global_00886f2c));  // (from the original)
    *gptr<u16>(r0_3 + 0x10u) = u16(u32(*global_00886f2c));  // (from the original)
    *gptr<u16>(r0_3 + 0x12u) = u16(u32(*global_00886f2c));  // (from the original)
    *gptr<u16>(r0_3 + 0x14u) = u16(u32(*global_00886f2c));  // (from the original)
    *gptr<u16>(r0_3 + 0x16u) = u16(u32(*global_00886f2c));  // (from the original)
    *gptr<u16>(r0_3 + 0x18u) = u16(u32(*global_00886f2c));  // (from the original)
    *gptr<u16>(r0_3 + 0x1au) = u16(u32(*global_00886f2e));  // (from the original)
    *gptr<u16>(r0_3 + 0x1cu) = u16(u32(*global_00886f32));  // (from the original)
    *gptr<u16>(r0_3 + 0x1eu) = u16(u32(*global_00886f34));  // (from the original)
    *gptr<u16>(r0_3 + 0x20u) = u16(u32(*global_00886f42));  // (from the original)
    *gptr<u16>(r0_3 + 0x22u) = u16(u32(*global_00886f42));  // (from the original)
    *gptr<u16>(r0_3 + 0x24u) = u16(u32(*global_00886f42));  // (from the original)
    *gptr<u16>(r0_3 + 0x26u) = u16(u32(*global_00886f42));  // (from the original)
    *gptr<u16>(r0_3 + 0x28u) = u16(u32(*global_00886f42));  // (from the original)
    *gptr<u16>(r0_3 + 0x2au) = u16(u32(*global_00886f42));  // (from the original)
    *gptr<u16>(r0_3 + 0x2cu) = u16(u32(*global_00886f42));  // (from the original)
    *gptr<u16>(r0_3 + 0x2eu) = u16(u32(*global_00886f42));  // (from the original)
    *gptr<u16>(r0_3 + 0x30u) = u16(u32(*global_00886f42));  // (from the original)
    *gptr<u16>(r0_3 + 0x32u) = u16(u32(*global_00886f42));  // (from the original)
    *gptr<u16>(r0_3 + 0x34u) = u16(u32(*global_00886f42));  // (from the original)
    *gptr<u16>(r0_3 + 0x36u) = u16(u32(*global_00886f42));  // (from the original)
    *gptr<u16>(r0_3 + 0x38u) = u16(u32(*global_00886f42));  // (from the original)
    *gptr<u16>(r0_3 + 0x3au) = u16(u32(*global_00886f42));  // (from the original)
    *gptr<u16>(r0_3 + 0x3cu) = u16(u32(*global_00886f42));  // (from the original)
    *gptr<u16>(r0_3 + 0x3eu) = u16(u32(*global_00886f42));  // (from the original)
    *gptr<u16>(r0_3 + 0x40u) = u16(u32(*global_00886f42));  // (from the original)
    *gptr<u16>(r0_3 + 0x42u) = u16(u32(*global_00886f42));  // (from the original)
    *gptr<u16>(r0_3 + 0x44u) = u16(u32(*global_00886f42));  // (from the original)
    *gptr<u16>(r0_3 + 0x46u) = u16(u32(*global_00886f42));  // (from the original)
    *gptr<u16>(r0_3 + 0x48u) = u16(u32(*global_00886f42));  // (from the original)
    *gptr<u16>(r0_3 + 0x4au) = u16(u32(*global_00886f42));  // (from the original)
    *gptr<u16>(r0_3 + 0x4cu) = u16(u32(*global_00886f42));  // (from the original)
    *gptr<u16>(r0_3 + 0x4eu) = u16(u32(*global_00886f42));  // (from the original)
    *gptr<u16>(r0_3 + 0x50u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0x52u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0x54u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0x56u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0x58u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0x5au) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0x5cu) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0x5eu) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0x60u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0x62u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0x64u) = u16(u32(*global_00886f4e));  // (from the original)
    *gptr<u16>(r0_3 + 0x66u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0x68u) = u16(u32(*global_00886f46));  // (from the original)
    *gptr<u16>(r0_3 + 0x6au) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0x6cu) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0x6eu) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0x70u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0x72u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0x74u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0x76u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0x78u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0x7au) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0x7cu) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0x7eu) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0x80u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0x82u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0x84u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0x86u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0x88u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0x8au) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0x8cu) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0x8eu) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0x90u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0x92u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0x94u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0x96u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0x98u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0x9au) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0x9cu) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0x9eu) = u16(u32(*global_00886f4c));  // (from the original)
    *gptr<u16>(r0_3 + 0xa0u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0xa2u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0xa4u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0xa6u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0xa8u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0xaau) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0xacu) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0xaeu) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0xb0u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0xb2u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0xb4u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0xb6u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0xb8u) = u16(u32(*global_00886f48));  // (from the original)
    *gptr<u16>(r0_3 + 0xbau) = u16(u32(*global_00886f48));  // (from the original)
    *gptr<u16>(r0_3 + 0xbcu) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0xbeu) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0xc0u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0xc2u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0xc4u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0xc6u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0xc8u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0xcau) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0xccu) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0xceu) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0xd0u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0xd2u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0xd4u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0xd6u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0xd8u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0xdau) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0xdcu) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0xdeu) = u16(u32(*global_00886f44));  // (from the original)
    *gptr<u16>(r0_3 + 0xe0u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0xe2u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0xe4u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0xe6u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0xe8u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0xeau) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0xecu) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0xeeu) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0xf0u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0xf2u) = u16(u32(*global_00886f28));  // (from the original)
    *gptr<u16>(r0_3 + 0xf4u) = u16(u32(*global_00886f28));  // (from the original)
    r1 = u32(*global_00886f28);
    *gptr<u16>(r0_3 + 0xf6u) = u16(r1);  // (from the original)
L_5ca144:;
    r0_1 = 0xac3558u + (r0 << 1);  // (from the original)
L_5ca148:;
    r0_4 = u32(*gptr<u16>(r0_1));
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_4;
}

}  // namespace d_005c98a8
GUEST_EXPORT(0x005c98a8, d_005c98a8::f_005c98a8);

// f_005ca1d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca1d4 {


u32 f_005ca1d4(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    if (r0 >= 0xfcu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r1_1 = u32(*gptr<u16>(0x88bf34u + (r0 << 1)));  // (from the original)
    r0_1 = r1_1 * 0x64u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_005ca1d4
GUEST_EXPORT(0x005ca1d4, d_005ca1d4::f_005ca1d4);

// f_005ca294: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca294 {


u32 f_005ca294(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r0 >= 0xfcu) {  // (from the original)
        r0_1 = 0u;
    } else {
        r1 = 0x88be36u;  // (from the original)
        r0_1 = u32(*gptr<u8>(r1 + r0));
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_005ca294
GUEST_EXPORT(0x005ca294, d_005ca294::f_005ca294);

// f_005ca2ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca2ac {

struct __attribute__((packed)) Object_005ca2ac_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_005ca2ac_0, word_0, 0x0);  // (from the original)

inline guest::global<u32, 0x005ca31c> global_005ca31c;  // (from the original)
inline guest::global<u32, 0x005ca320> global_005ca320;  // (from the original)
inline guest::global<u32, 0x005ca324> global_005ca324;  // (from the original)
inline constexpr guest::Function<0x006cc934, u32(u32, u32, u32, u32)> call_006cc934;  // (from the original)

u32 f_005ca2ac(gptr<Object_005ca2ac_0> arg0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r4_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 ea_2 = 0;
    u32 r0_2 = 0;
    u32 ea_3 = 0;
    float S0_2 = 0;
    u32 ea_4 = 0;
    u32 r0_3 = 0;
    u32 ea_5 = 0;
    u32 r4_2 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    if (r3 >= 0xfcu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r14);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r4_1 = 0x88c724u + (r3 << 4);  // (from the original)
    r1_1 = *gptr<u32>(r4_1);
    arg0->word_0 = u32(r1_1);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_1 = call_006cc934(r3, r1_1, r2, r3);
    r1_2 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        S0_1 = std::bit_cast<float>(*global_005ca320);
    } else {
        S0_1 = std::bit_cast<float>(*global_005ca31c);
    }
    S1_1 = std::bit_cast<float>(*global_005ca324);
    *gptr<u32>(r0 + 4u) = u32(std::bit_cast<u32>(S0_1));
    ea_2 = r4_1 + 4u;
    r0_2 = *gptr<u32>(ea_2);
    ea_3 = r0 + 8u;
    *gptr<u32>(ea_3) = u32(r0_2);
    S0_2 = std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*gptr<u32>(r4_1 + 8u)) * S1_1));
    *gptr<u16>(r1) = u16(std::bit_cast<u32>(S0_2));
    ea_4 = r4_1 + 0xcu;  // (from the original)
    r0_3 = *gptr<u32>(ea_4);
    *gptr<u32>(r2) = u32(r0_3);
    ea_5 = r13;
    r13 = r13 + 0x18;  // (from the original)
    r4_2 = *gptr<u32>(ea_5);
    r5_1 = *gptr<u32>(ea_5 + 4);
    r6_1 = *gptr<u32>(ea_5 + 8);
    r7_1 = *gptr<u32>(ea_5 + 0xc);  // (from the original)
    r8_1 = *gptr<u32>(ea_5 + 0x10);  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    return r0_3;
}

}  // namespace d_005ca2ac
GUEST_EXPORT(0x005ca2ac, d_005ca2ac::f_005ca2ac);

// f_005ca328: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca328 {


u32 f_005ca328(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r0 >= 0xfcu) {  // (from the original)
        r0_1 = 0xa5u;  // (from the original)
    } else {
        r1 = 0x88b74cu;  // (from the original)
        r0_1 = u32(*gptr<u8>(r1 + r0));
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_005ca328
GUEST_EXPORT(0x005ca328, d_005ca328::f_005ca328);

// f_005ca3c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca3c8 {


u32 f_005ca3c8(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    if (r0 >= 0x67u) {  // (from the original)
        r0_1 = ~0u;
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r0_2 = u32(*gptr<u8>(0x88d9deu + r0));  // (from the original)
    r1_1 = 0x88d9deu - 0xfeu;  // (from the original)
    r0_3 = u32(s32(s8(*gptr<u8>(r1_1 + r0_2))));
    guest::cpu()->r[1] = r1_1;
    return r0_3;
}

}  // namespace d_005ca3c8
GUEST_EXPORT(0x005ca3c8, d_005ca3c8::f_005ca3c8);

// f_005ca3ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca3ec {


u32 f_005ca3ec(u32 r0, u32 r1) {
    u32 cf_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    cf_1 = r1 >= 0xfcu;  // (from the original)
    if (!cf_1) {
        cf_1 = r0 >= 8u;
    }
    if (cf_1) {
        r0_1 = ~0u;
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r1_1 = 0x88dbaau + (r1 << 3);  // (from the original)
    r0_2 = u32(s32(s8(*gptr<u8>(r1_1 + r0))));
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_005ca3ec
GUEST_EXPORT(0x005ca3ec, d_005ca3ec::f_005ca3ec);

// f_005ca478: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca478 {

inline constexpr guest::Function<0x002fa90c, u32(u32, u32, u32, u32)> call_002fa90c;  // (from the original)

u32 f_005ca478(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    if (r0 >= 0xfcu) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r1_1 = *gptr<u32>(0x95bae0u + (r0 << 2));  // (from the original)
    r0_1 = call_002fa90c(0x5ca4acu, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_005ca478
GUEST_EXPORT(0x005ca478, d_005ca478::f_005ca478);

// f_005ca4b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca4b4 {

inline constexpr guest::Function<0x002fa90c, u32(u32, u32, u32, u32)> call_002fa90c;  // (from the original)

u32 f_005ca4b4(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    if (r0 >= 0xfcu) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r1_1 = *gptr<u32>(0x95bae0u + (r0 << 2));  // (from the original)
    r0_1 = call_002fa90c(0x5ca4e8u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_005ca4b4
GUEST_EXPORT(0x005ca4b4, d_005ca4b4::f_005ca4b4);

// f_005ca4f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca4f0 {

inline constexpr guest::Function<0x002fa90c, u32(u32, u32, u32, u32)> call_002fa90c;  // (from the original)

u32 f_005ca4f0(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    if (r0 >= 0xfcu) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r1_1 = *gptr<u32>(0x95bae0u + (r0 << 2));  // (from the original)
    r0_1 = call_002fa90c(0x5ca524u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_005ca4f0
GUEST_EXPORT(0x005ca4f0, d_005ca4f0::f_005ca4f0);

// f_005ca530: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca530 {

inline constexpr guest::Function<0x002fa90c, u32(u32, u32, u32, u32)> call_002fa90c;  // (from the original)

u32 f_005ca530(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    if (r0 >= 0xfcu) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r1_1 = *gptr<u32>(0x95bae0u + (r0 << 2));  // (from the original)
    r0_1 = call_002fa90c(0x5ca564u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_005ca530
GUEST_EXPORT(0x005ca530, d_005ca530::f_005ca530);

// f_005ca56c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca56c {


u32 f_005ca56c(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r0 >= 0xfcu) {  // (from the original)
        r0_1 = 0u;
    } else {
        r1 = 0x88c42au;  // (from the original)
        r0_1 = u32(s32(s8(*gptr<u8>(r1 + r0))));
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_005ca56c
GUEST_EXPORT(0x005ca56c, d_005ca56c::f_005ca56c);

// f_005ca584: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca584 {

inline constexpr guest::Function<0x002fa90c, u32(u32, u32, u32, u32)> call_002fa90c;  // (from the original)

u32 f_005ca584(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    if (r0 >= 0xfcu) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r1_1 = *gptr<u32>(0x95bae0u + (r0 << 2));  // (from the original)
    r0_1 = call_002fa90c(0x5ca5b8u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_005ca584
GUEST_EXPORT(0x005ca584, d_005ca584::f_005ca584);

// f_005ca5d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca5d8 {

struct __attribute__((packed)) Object_005ca5d8_2 {
    u32 word_0;
};
GUEST_OFFSET(Object_005ca5d8_2, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x003193e8, u32(u32, u32, u32, u32)> call_003193e8;  // (from the original)

u32 f_005ca5d8(u32 r0, u32 r1, gptr<Object_005ca5d8_2> arg2, u32 r3) {
    u32 r2 = arg2.addr();
    u32 r5_1 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5_1 = arg2->word_0;
    r1_1 = r3 - (r1 - r0);
    r3_1 = ~0u;
    arg2->word_0 = u32(0u);
    r0_1 = call_003193e8(r1, r1_1, r3_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    if (r0_1 == r5_1) {
        r0_2 = 1u;
    } else {
        r0_2 = 0u;
    }
    *gptr<u32>(r2) = u32(r5_1);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0_2;
}

}  // namespace d_005ca5d8
GUEST_EXPORT(0x005ca5d8, d_005ca5d8::f_005ca5d8);

// f_005ca62c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca62c {

inline guest::global<u32, 0x0095bf74> global_0095bf74;  // (from the original)
inline constexpr guest::Function<0x003463bc, u32(u32, u32, u32, u32)> call_003463bc;  // (from the original)

u32 f_005ca62c() {
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    ea_1 = *global_0095bf74;
    r0_1 = *gptr<u32>(ea_1);
    r1_1 = *gptr<u32>(ea_1 + 4);
    return call_003463bc(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005ca62c
GUEST_EXPORT(0x005ca62c, d_005ca62c::f_005ca62c);

// f_005ca648: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca648 {

inline guest::global<u32, 0x0095bf74> global_0095bf74;  // (from the original)

u32 f_005ca648() {
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 cf_1 = 0;
    u32 r0_1 = 0;
    u32 res_2 = 0;
    u32 res_3 = 0;
    u32 cf_2 = 0;
    u32 r0_2 = 0;
    r2_1 = *global_0095bf74;
    r1_1 = *gptr<u32>(r2_1);
    res_1 = r1_1 + 1u;
    cf_1 = res_1 < r1_1;
    r0_1 = u32(u64(*gptr<u32>(r2_1 + 4u)) + cf_1);
    *gptr<u32>(r2_1 + 4u) = u32(r0_1);
    res_2 = res_1 | r0_1;
    *gptr<u32>(r2_1) = u32(res_1);
    if (res_2 != 0) {
        guest::cpu()->r[1] = res_1;
        return r0_1;
    }
    res_3 = res_1 + 1u;
    cf_2 = res_3 < res_1;
    r0_2 = u32(u64(r0_1) + cf_2);
    *gptr<u32>(r2_1 + 4u) = u32(r0_2);
    *gptr<u32>(r2_1) = u32(res_3);
    guest::cpu()->r[1] = res_3;
    return r0_2;
}

}  // namespace d_005ca648
GUEST_EXPORT(0x005ca648, d_005ca648::f_005ca648);

// f_005ca688: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca688 {

inline constexpr guest::Function<0x00134544, u32(u32, u32, u32, u32)> call_00134544;  // (from the original)
inline constexpr guest::Function<0x0070ef54, u32(u32, u32, u32, u32)> call_0070ef54;  // (from the original)
inline constexpr guest::Function<0x00757f08, u32(u32, u32, u32, u32)> call_00757f08;  // (from the original)

u32 f_005ca688(u32 r0, u32 r1, u32 r2) {
    u32 res_1 = 0;
    u64 t_1 = 0;
    u32 r3_1 = 0;
    u32 r5_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    res_1 = r1 + r2;
    t_1 = u64(0u) + ~u32(u64(0u) + u32(res_1 < r1)) + u32(0x89b00u >= res_1);  // (from the original)
    if (!u32(t_1 >> 0x20)) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r3_1 = *gptr<u32>(0x95bf74u + 4u);  // (from the original)
    if (r3_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r5_1 = r3_1 + r2;
    call_00134544(r5_1, r0, r1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r4_1 = *gptr<u32>(0x95bf74u + 4u);  // (from the original)
    r0_1 = r4_1 + 0x80u;  // (from the original)
    call_00757f08(r0_1, r1_1, r2_1, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_2 = r4_1 + 0x71900u;  // (from the original)
    call_0070ef54(r0_2, r1_2, r2_2, r3_3);
    r1 = guest::cpu()->r[1];
    r0 = r5_1;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005ca688
GUEST_EXPORT(0x005ca688, d_005ca688::f_005ca688);

// f_005ca6fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca6fc {

inline guest::global<u8, 0x00952628> global_00952628;  // (from the original)

u32 f_005ca6fc() {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    goto L_5ca6fc;
L_2cd4ec:;
    r1_1 = u32(*global_00952628);
    if (r1_1 == 0) {
        r0_1 = *gptr<u32>(0x952628u + 4u);  // (from the original)
    } else {
        r0_1 = 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
L_5ca6fc:;
    guest::preempt();
    goto L_2cd4ec;
}

}  // namespace d_005ca6fc
GUEST_EXPORT(0x005ca6fc, d_005ca6fc::f_005ca6fc);

// f_005ca7a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca7a4 {

inline guest::global<u32, 0x0095bf74> global_0095bf74;  // (from the original)
inline constexpr guest::Function<0x00116cdd, u32(u32, u32, u32, u32)> call_00116cdc;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x00607474, u32(u32, u32, u32, u32)> call_00607474;  // (from the original)
inline constexpr guest::Function<0x00607bdc, u32(u32, u32, u32, u32)> call_00607bdc;  // (from the original)

u32 f_005ca7a4(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r4_1 = 0;
    u32 res_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002fb94c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = r0_1 + 0x5700u;  // (from the original)
    *gptr<u8>(r0_2 + 0xau) = u8(u32(*gptr<u8>(r0_2 + 0xau)) & ~2u);  // (from the original)
    *gptr<u32>(0x8f38u + r0_1) = u32(0u);  // (from the original)
    call_00116cdc(0x8f38u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r4_1 = r0_1 + 0x8f7bu;  // (from the original)
    res_1 = u32(*gptr<u8>(r4_1)) << 0x19;  // (from the original)
    if (!(res_1 >> 0x1f)) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return res_1;
    }
    r0_3 = call_00607bdc(res_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    call_00607474(r0_3, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_4 = *global_0095bf74 + 0x621cfu;  // (from the original)
    r1_3 = u32(*gptr<u8>(r0_4 + 1u)) | 0x20u;  // (from the original)
    *gptr<u8>(r0_4 + 1u) = u8(r1_3);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_3;
    return r0_4;
}

}  // namespace d_005ca7a4
GUEST_EXPORT(0x005ca7a4, d_005ca7a4::f_005ca7a4);

// f_005ca9cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca9cc {

inline guest::global<u32, 0x0095bf74> global_0095bf74;  // (from the original)

u32 f_005ca9cc() {
    u32 r0_1 = 0;
    r0_1 = *global_0095bf74 + 0x292a4u;  // (from the original)
    return guest::call_address<u32>(0x119289u, r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_005ca9cc
GUEST_EXPORT(0x005ca9cc, d_005ca9cc::f_005ca9cc);

// f_005ca9e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca9e4 {

inline guest::global<u32, 0x0095bf74> global_0095bf74;  // (from the original)
inline guest::global<u32, 0x0095df64> global_0095df64;  // (from the original)
inline constexpr guest::Function<0x0013873c, u32(u32, u32, u32, u32)> call_0013873c;  // (from the original)
inline constexpr guest::Function<0x001bac9c, u32(u32, u32, u32, u32)> call_001bac9c;  // (from the original)
inline constexpr guest::Function<0x001c1e54, u32(u32, u32, u32, u32)> call_001c1e54;  // (from the original)
inline constexpr guest::Function<0x00241d34, u32(u32, u32, u32, u32)> call_00241d34;  // (from the original)
inline constexpr guest::Function<0x00292d08, u32(u32, u32, u32, u32)> call_00292d08;  // (from the original)
inline constexpr guest::Function<0x002c2538, u32(u32, u32, u32, u32)> call_002c2538;  // (from the original)
inline constexpr guest::Function<0x002c2710, u32(u32, u32, u32, u32)> call_002c2710;  // (from the original)
inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> call_002fb430;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fc814, u32(u32, u32, u32, u32)> call_002fc814;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00300634, u32(u32, u32, u32, u32)> call_00300634;  // (from the original)
inline constexpr guest::Function<0x00304530, u32(u32, u32, u32, u32)> call_00304530;  // (from the original)
inline constexpr guest::Function<0x0056b550, u32(u32, u32, u32, u32)> call_0056b550;  // (from the original)
inline constexpr guest::Function<0x00582464, u32(u32, u32, u32, u32)> call_00582464;  // (from the original)
inline constexpr guest::Function<0x0058d52c, u32(u32, u32, u32, u32)> call_0058d52c;  // (from the original)
inline constexpr guest::Function<0x0058f100, u32(u32, u32, u32, u32)> call_0058f100;  // (from the original)
inline constexpr guest::Function<0x00607474, u32(u32, u32, u32, u32)> call_00607474;  // (from the original)
inline constexpr guest::Function<0x00607bdc, u32(u32, u32, u32, u32)> call_00607bdc;  // (from the original)
inline constexpr guest::Function<0x006a6408, u32(u32, u32, u32, u32)> call_006a6408;  // (from the original)

u32 f_005ca9e4(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r4_1 = 0;
    u32 r0_5 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_7 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_8 = 0;
    u32 r1_6 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_9 = 0;
    u32 r1_7 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r1_8 = 0;
    u32 r0_10 = 0;
    u32 r3_10 = 0;
    u32 r1_9 = 0;
    u32 r2_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_10 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r1_11 = 0;
    u32 r2_13 = 0;
    u32 r3_13 = 0;
    u32 r4_2 = 0;
    u32 r0_13 = 0;
    u32 r1_12 = 0;
    u32 r2_14 = 0;
    u32 r3_14 = 0;
    u32 r2_15 = 0;
    u32 r3_15 = 0;
    u32 r1_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_14 = 0;
    u32 r2_16 = 0;
    u32 r3_16 = 0;
    u32 r0_16 = 0;
    u32 r2_17 = 0;
    u32 r3_17 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r1_15 = 0;
    u32 r2_18 = 0;
    u32 r3_18 = 0;
    u32 r0_19 = 0;
    u32 r1_16 = 0;
    u32 r2_19 = 0;
    u32 r3_19 = 0;
    u32 r0_20 = 0;
    u32 r1_17 = 0;
    u32 r2_20 = 0;
    u32 r3_20 = 0;
    u32 r1_18 = 0;
    u32 r3_21 = 0;
    u32 r0_21 = 0;
    u32 r2_21 = 0;
    u32 b_1 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r1_19 = 0;
    u32 r2_22 = 0;
    u32 r3_22 = 0;
    u32 r0_24 = 0;
    u32 r1_20 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r0_1 = *global_0095df64;
    guest::cpu()->r[13] = r13;
    call_002c2538(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = *global_0095df64;
    guest::cpu()->r[13] = r13;
    r0_3 = call_002c2710(r0_2, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00292d08(r0_3, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_4 = 0x952c3cu;  // (from the original)
    r4_1 = *gptr<u32>(r0_4);
    if (r4_1 != 0) {
        guest::cpu()->r[13] = r13;
        r0_5 = call_00304530(r0_4, r1_3, r2_3, r3_3);
        r2_4 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_4 = call_001c1e54(r0_5, r4_1, r2_4, r3_4);
        r1_3 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    r0_6 = call_006a6408(r0_4, r1_3, r2_3, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_7 = call_00241d34(r0_6, r1_4, r2_5, r3_5);
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_8 = call_00304530(r0_7, r1_5, r2_6, r3_6);
    r1_6 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_9 = call_0013873c(r0_8, r1_6, r2_7, r3_7);
    r1_7 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0056b550(r0_9, r1_7, r2_8, r3_8);
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r1_8 = 0x621b2u + (*global_0095bf74 + 0x80u);  // (from the original)
    r0_10 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fb430(r0_10, r1_8, r2_9, r3_9);
    r3_10 = r13 + 0xcu;  // (from the original)
    r1_9 = *gptr<u32>(r3_10 + 4);
    r2_10 = *gptr<u32>(r3_10 + 8);
    *gptr<u32>(r13) = u32(*gptr<u32>(r3_10));
    *gptr<u32>(r13 + 4) = u32(r1_9);
    *gptr<u32>(r13 + 8) = u32(r2_10);
    r0_11 = r13;
    guest::cpu()->r[13] = r13;
    r0_12 = call_0058f100(r0_11, 0u, 0u, r3_10);
    r1_10 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00582464(r0_12, r1_10, r2_11, r3_11);
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00300634(1u, 1u, r2_12, r3_12);
    r1_11 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r4_2 = *gptr<u32>(0xaaef18u + 0x234u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_13 = call_00607bdc(0xaaef18u, r1_11, r2_13, r3_13);  // (from the original)
    r1_12 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00607474(r0_13, r1_12, r2_14, r3_14);
    r2_15 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r1_13 = r4_2 + 0x8f0au;  // (from the original)
    r0_14 = *global_0095bf74 + 0x6acceu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_15 = call_002fc814(r0_14, r1_13, r2_15, r3_15);
    r1_14 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_16 = call_002fb94c(r0_15, r1_14, r2_16, r3_16);
    r2_17 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    r0_17 = r0_16 + 0x8f0au;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_18 = call_002fc8e8(r0_17, 0x95bfdcu, r2_17, r3_17);  // (from the original)
    r1_15 = guest::cpu()->r[1];
    r2_18 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_19 = call_0058d52c(r0_18, r1_15, r2_18, r3_18);
    r1_16 = guest::cpu()->r[1];
    r2_19 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_20 = call_00607bdc(r0_19, r1_16, r2_19, r3_19);
    r1_17 = guest::cpu()->r[1];
    r2_20 = guest::cpu()->r[2];
    r3_20 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00607474(r0_20, r1_17, r2_20, r3_20);
    r1_18 = *global_0095bf74;
    r3_21 = 0xau;  // (from the original)
    r0_21 = r1_18 + 0x80u + 0x70e62u;  // (from the original)
    r2_21 = u32(*gptr<u8>(r0_21 + 8u));
    b_1 = (r2_21 & 0xf0u) >> 4;  // (from the original)
    if (r3_21 > b_1) {
        r2_21 = r2_21 + 0x10u;  // (from the original)
        *gptr<u8>(r0_21 + 8u) = u8(r2_21);
    }
    r0_22 = u32(*gptr<u8>(r1_18 + 0x80u - 0xfff901ccu));  // (from the original)
    if ((r0_22 & 8u) == 0) {
        goto L_5cab90;
    }
    if ((r0_22 & 0x40u) != 0) {  // (from the original)
        goto L_5cab90;
    }
    guest::cpu()->r[13] = r13;
    r0_23 = call_00607bdc(r0_22, r1_18, r2_21, r3_21);
    r1_19 = guest::cpu()->r[1];
    r2_22 = guest::cpu()->r[2];
    r3_22 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00607474(r0_23, r1_19, r2_22, r3_22);
    r2_21 = guest::cpu()->r[2];
    r3_21 = guest::cpu()->r[3];
    r0_22 = *global_0095bf74 + 0x80u - 0xfff901ccu;  // (from the original)
    r1_18 = u32(*gptr<u8>(r0_22)) | 0x40u;  // (from the original)
    *gptr<u8>(r0_22) = u8(r1_18);
L_5cab90:;
    guest::cpu()->r[13] = r13;
    r0_24 = call_001bac9c(r0_22, r1_18, r2_21, r3_21);
    r1_20 = guest::cpu()->r[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_20;
    guest::cpu()->r[13] = r13;
    return r0_24;
}

}  // namespace d_005ca9e4
GUEST_EXPORT(0x005ca9e4, d_005ca9e4::f_005ca9e4);

// f_005cabc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cabc0 {

inline guest::global<u32, 0x0095bf74> global_0095bf74;  // (from the original)
inline guest::global<u32, 0x0095df64> global_0095df64;  // (from the original)
inline constexpr guest::Function<0x0013873c, u32(u32, u32, u32, u32)> call_0013873c;  // (from the original)
inline constexpr guest::Function<0x001bac9c, u32(u32, u32, u32, u32)> call_001bac9c;  // (from the original)
inline constexpr guest::Function<0x001c1e54, u32(u32, u32, u32, u32)> call_001c1e54;  // (from the original)
inline constexpr guest::Function<0x00241d34, u32(u32, u32, u32, u32)> call_00241d34;  // (from the original)
inline constexpr guest::Function<0x00292d08, u32(u32, u32, u32, u32)> call_00292d08;  // (from the original)
inline constexpr guest::Function<0x002c2510, u32(u32, u32, u32, u32)> call_002c2510;  // (from the original)
inline constexpr guest::Function<0x002c2544, u32(u32, u32, u32, u32)> call_002c2544;  // (from the original)
inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> call_002fb430;  // (from the original)
inline constexpr guest::Function<0x002fc188, u32(u32, u32, u32, u32)> call_002fc188;  // (from the original)
inline constexpr guest::Function<0x002fc194, u32(u32, u32, u32, u32)> call_002fc194;  // (from the original)
inline constexpr guest::Function<0x00304530, u32(u32, u32, u32, u32)> call_00304530;  // (from the original)
inline constexpr guest::Function<0x0058d52c, u32(u32, u32, u32, u32)> call_0058d52c;  // (from the original)
inline constexpr guest::Function<0x0058f100, u32(u32, u32, u32, u32)> call_0058f100;  // (from the original)
inline constexpr guest::Function<0x006a6408, u32(u32, u32, u32, u32)> call_006a6408;  // (from the original)

u32 f_005cabc0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
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
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r1_5 = 0;
    u32 r0_6 = 0;
    u32 r3_7 = 0;
    u32 r1_6 = 0;
    u32 r2_7 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_7 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_9 = 0;
    u32 r1_8 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_10 = 0;
    u32 r1_9 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_11 = 0;
    u32 r1_10 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r1_11 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r0_12 = 0;
    u32 r1_12 = 0;
    u32 r2_13 = 0;
    u32 r3_13 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_13 = 0;
    u32 r2_14 = 0;
    u32 r3_14 = 0;
    u32 r0_15 = 0;
    u32 r1_14 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00292d08(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_1 = 0x952c3cu;  // (from the original)
    r4_1 = *gptr<u32>(r0_1);
    if (r4_1 != 0) {
        guest::cpu()->r[13] = r13;
        r0_2 = call_00304530(r0_1, r1_1, r2_1, r3_1);
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_1 = call_001c1e54(r0_2, r4_1, r2_2, r3_2);
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_006a6408(r0_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_4 = call_00241d34(r0_3, r1_2, r2_3, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_5 = call_00304530(r0_4, r1_3, r2_4, r3_4);
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0013873c(r0_5, r1_4, r2_5, r3_5);
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r1_5 = 0x621b2u + (*global_0095bf74 + 0x80u);  // (from the original)
    r0_6 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fb430(r0_6, r1_5, r2_6, r3_6);
    r3_7 = r13 + 0xcu;  // (from the original)
    r1_6 = *gptr<u32>(r3_7 + 4);
    r2_7 = *gptr<u32>(r3_7 + 8);
    *gptr<u32>(r13) = u32(*gptr<u32>(r3_7));
    *gptr<u32>(r13 + 4) = u32(r1_6);
    *gptr<u32>(r13 + 8) = u32(r2_7);
    r0_7 = r13;
    guest::cpu()->r[13] = r13;
    r0_8 = call_0058f100(r0_7, 0u, 0u, r3_7);
    r1_7 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_9 = call_00241d34(r0_8, r1_7, r2_8, r3_8);
    r1_8 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_10 = call_0058d52c(r0_9, r1_8, r2_9, r3_9);
    r1_9 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_11 = call_002fc188(r0_10, r1_9, r2_10, r3_10);
    r1_10 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_002fc194(r0_11, r1_10, r2_11, r3_11);
    r1_11 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_12 = *global_0095df64;
    guest::cpu()->r[13] = r13;
    call_002c2544(r0_12, r1_11, r2_12, r3_12);
    r1_12 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_13 = *global_0095df64;
    guest::cpu()->r[13] = r13;
    r0_14 = call_002c2510(r0_13, r1_12, r2_13, r3_13);
    r1_13 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_15 = call_001bac9c(r0_14, r1_13, r2_14, r3_14);
    r1_14 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_14;
    guest::cpu()->r[13] = r13;
    return r0_15;
}

}  // namespace d_005cabc0
GUEST_EXPORT(0x005cabc0, d_005cabc0::f_005cabc0);

// f_005cacfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cacfc {

inline guest::global<u32, 0x0095df64> global_0095df64;  // (from the original)
inline constexpr guest::Function<0x002c24dc, u32(u32, u32, u32, u32)> call_002c24dc;  // (from the original)

u32 f_005cacfc() {
    u32 r0_1 = 0;
    r0_1 = *global_0095df64;
    return call_002c24dc(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005cacfc
GUEST_EXPORT(0x005cacfc, d_005cacfc::f_005cacfc);

// f_005cad1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cad1c {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)

u32 f_005cad1c() {
    return call_002f825c(guest::cpu()->r[0], 0x89b00u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_005cad1c
GUEST_EXPORT(0x005cad1c, d_005cad1c::f_005cad1c);

// f_005cad28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cad28 {

inline guest::global<u32, 0x009753c0> global_009753c0;  // (from the original)
inline constexpr guest::Function<0x001df42c, u32(u32, u32, u32, u32)> call_001df42c;  // (from the original)
inline constexpr guest::Function<0x0055cb58, u32(u32, u32, u32, u32)> call_0055cb58;  // (from the original)
inline constexpr guest::Function<0x005cb26c, u32(u32, u32, u32, u32)> call_005cb26c;  // (from the original)

u32 f_005cad28(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r5_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = *global_009753c0;
    r0_2 = call_0055cb58(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_3 = *global_009753c0;
    r5_1 = ~0u;
    r0_4 = call_0055cb58(r0_3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0 + 8u) = u32(0u);
    *gptr<u32>(r0) = u32(u32(u64(r0_4) * r5_1 >> 0x20) + 1u);  // (from the original)
    *gptr<u32>(r0 + 4) = u32(r0_2);
    r0_5 = r0 + 0x80u;  // (from the original)
    call_005cb26c(r0_5, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_6 = r0 + 0x70000u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r0_7 = r0_6 + 0x1900u;  // (from the original)
    return call_001df42c(r0_7, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005cad28
GUEST_EXPORT(0x005cad28, d_005cad28::f_005cad28);

// f_005caf64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005caf64 {

struct __attribute__((packed)) Object_005caf64_0 {
    u8 unknown_0[0x4];  // (not used here)
    u16 half_4;
    u8 byte_6;
};
GUEST_OFFSET(Object_005caf64_0, half_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005caf64_0, byte_6, 0x6);  // (from the original)


u32 f_005caf64(gptr<Object_005caf64_0> arg0) {
    arg0->half_4 = u16(0x9eu);  // (from the original)
    arg0->byte_6 = u8(0u);
    guest::cpu()->r[1] = 0u;
    return 0x9eu;  // (from the original)
}

}  // namespace d_005caf64
GUEST_EXPORT(0x005caf64, d_005caf64::f_005caf64);

// f_005caf80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005caf80 {

struct __attribute__((packed)) Object_005caf80_0 {
    u8 unknown_0[0x62130];  // (not used here)
    u32 word_62130;
    u32 word_62134;
};
GUEST_OFFSET(Object_005caf80_0, word_62130, 0x62130);  // (from the original)
GUEST_OFFSET(Object_005caf80_0, word_62134, 0x62134);  // (from the original)


u32 f_005caf80(gptr<Object_005caf80_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 res_1 = 0;
    u32 cf_1 = 0;
    u32 r1_1 = 0;
    u64 t_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = arg0->word_62130;
    res_1 = r0_1 + r2;
    cf_1 = res_1 < r0_1;
    r1_1 = u32(u64(arg0->word_62134) + r3 + cf_1);
    t_1 = u64(~0x80000000u) + ~r1_1 + u32(~0u >= res_1);  // (from the original)
    if (u32(t_1 >> 0x20)) {  // (from the original)
        arg0->word_62130 = u32(res_1);
        arg0->word_62134 = u32(r1_1);
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return res_1;
    }
    r0_2 = ~0u;
    r1_2 = ~0x80000000u;  // (from the original)
    arg0->word_62130 = u32(r0_2);
    arg0->word_62134 = u32(r1_2);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return r0_2;
}

}  // namespace d_005caf80
GUEST_EXPORT(0x005caf80, d_005caf80::f_005caf80);

// f_005cb1dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cb1dc {

inline constexpr guest::Function<0x0010a2cc, u32(u32, u32, u32, u32)> call_0010a2cc;  // (from the original)
inline constexpr guest::Function<0x00118a65, u32(u32, u32, u32, u32)> call_00118a64;  // (from the original)
inline constexpr guest::Function<0x001b1af8, u32(u32, u32, u32, u32)> call_001b1af8;  // (from the original)
inline constexpr guest::Function<0x001b3f24, u32(u32, u32, u32, u32)> call_001b3f24;  // (from the original)
inline constexpr guest::Function<0x002ebd68, u32(u32, u32, u32, u32)> call_002ebd68;  // (from the original)
inline constexpr guest::Function<0x0052ab60, u32(u32, u32, u32, u32)> call_0052ab60;  // (from the original)
inline constexpr guest::Function<0x005caf64, u32(u32, u32, u32, u32)> call_005caf64;  // (from the original)
inline constexpr guest::Function<0x005cdbb8, u32(u32, u32, u32, u32)> call_005cdbb8;  // (from the original)
inline constexpr guest::Function<0x006bc5a0, u32(u32, u32, u32, u32)> call_006bc5a0;  // (from the original)

u32 f_005cb1dc(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    u32 r0_4 = 0;
    u32 r1_5 = 0;
    u32 r0_5 = 0;
    u32 r1_6 = 0;
    u32 r0_6 = 0;
    u32 r1_7 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    guest::cpu()->r[13] -= 8u;
    call_005caf64(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_1 = r0 + 0x4be00u;  // (from the original)
    call_005cdbb8(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_2 = r0 + 0x5d880u;  // (from the original)
    call_002ebd68(r0_2, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r0_3 = 0x621b2u + r0;  // (from the original)
    call_0052ab60(r0_3, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r0_4 = r0 + 0x621ccu;  // (from the original)
    call_001b1af8(r0_4, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r0_5 = r0 + 0x621d0u;  // (from the original)
    call_0010a2cc(r0_5, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    r0_6 = r0 - 0xfff951c8u;  // (from the original)
    call_006bc5a0(r0_6, r1_6, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_7 = guest::cpu()->r[1];
    r0_7 = r0 - 0xfff901d8u;  // (from the original)
    call_00118a64(r0_7, r1_7, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_8 = 0x70e9cu + r0;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_001b3f24(r0_8, 0x16u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_005cb1dc
GUEST_EXPORT(0x005cb1dc, d_005cb1dc::f_005cb1dc);

// f_005cb26c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cb26c {

inline constexpr guest::Function<0x001082c9, u32(u32, u32, u32, u32)> call_001082c8;  // (from the original)
inline constexpr guest::Function<0x0011253d, u32(u32, u32, u32, u32)> call_0011253c;  // (from the original)
inline constexpr guest::Function<0x00118a75, u32(u32, u32, u32, u32)> call_00118a74;  // (from the original)
inline constexpr guest::Function<0x001b1b2c, u32(u32, u32, u32, u32)> call_001b1b2c;  // (from the original)
inline constexpr guest::Function<0x001b2184, u32(u32, u32, u32, u32)> call_001b2184;  // (from the original)
inline constexpr guest::Function<0x0020bb20, u32(u32, u32, u32, u32)> call_0020bb20;  // (from the original)
inline constexpr guest::Function<0x0020d858, u32(u32, u32, u32, u32)> call_0020d858;  // (from the original)
inline constexpr guest::Function<0x0024a528, u32(u32, u32, u32, u32)> call_0024a528;  // (from the original)
inline constexpr guest::Function<0x0024e9fc, u32(u32, u32, u32, u32)> call_0024e9fc;  // (from the original)
inline constexpr guest::Function<0x0027aa88, u32(u32, u32, u32, u32)> call_0027aa88;  // (from the original)
inline constexpr guest::Function<0x002bf468, u32(u32, u32, u32, u32)> call_002bf468;  // (from the original)
inline constexpr guest::Function<0x002d453c, u32(u32, u32, u32, u32)> call_002d453c;  // (from the original)
inline constexpr guest::Function<0x002eaf8c, u32(u32, u32, u32, u32)> call_002eaf8c;  // (from the original)
inline constexpr guest::Function<0x002eba90, u32(u32, u32, u32, u32)> call_002eba90;  // (from the original)
inline constexpr guest::Function<0x002ebd9c, u32(u32, u32, u32, u32)> call_002ebd9c;  // (from the original)
inline constexpr guest::Function<0x00302084, u32(u32, u32, u32, u32)> call_00302084;  // (from the original)
inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> call_00303cdc;  // (from the original)
inline constexpr guest::Function<0x003052f0, u32(u32, u32, u32, u32)> call_003052f0;  // (from the original)
inline constexpr guest::Function<0x003059f8, u32(u32, u32, u32, u32)> call_003059f8;  // (from the original)
inline constexpr guest::Function<0x0052abb4, u32(u32, u32, u32, u32)> call_0052abb4;  // (from the original)
inline constexpr guest::Function<0x005cd754, u32(u32, u32, u32, u32)> call_005cd754;  // (from the original)
inline constexpr guest::Function<0x005cdbf8, u32(u32, u32, u32, u32)> call_005cdbf8;  // (from the original)
inline constexpr guest::Function<0x00613620, u32(u32, u32, u32, u32)> call_00613620;  // (from the original)
inline constexpr guest::Function<0x006137d8, u32(u32, u32, u32, u32)> call_006137d8;  // (from the original)
inline constexpr guest::Function<0x006bc04c, u32(u32, u32, u32, u32)> call_006bc04c;  // (from the original)
inline constexpr guest::Function<0x006bc5d8, u32(u32, u32, u32, u32)> call_006bc5d8;  // (from the original)
inline constexpr guest::Function<0x006f3d0c, u32(u32, u32, u32, u32)> call_006f3d0c;  // (from the original)
inline constexpr guest::Function<0x00779520, u32(u32, u32, u32, u32)> call_00779520;  // (from the original)

u32 f_005cb26c(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_5 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_6 = 0;
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_7 = 0;
    u32 r1_7 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_8 = 0;
    u32 r1_8 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_9 = 0;
    u32 r1_9 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_10 = 0;
    u32 r1_10 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_11 = 0;
    u32 r1_11 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r0_12 = 0;
    u32 r1_12 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r0_13 = 0;
    u32 r1_13 = 0;
    u32 r2_13 = 0;
    u32 r3_13 = 0;
    u32 r0_14 = 0;
    u32 r1_14 = 0;
    u32 r2_14 = 0;
    u32 r3_14 = 0;
    u32 r0_15 = 0;
    u32 r1_15 = 0;
    u32 r2_15 = 0;
    u32 r3_15 = 0;
    u32 r0_16 = 0;
    u32 r1_16 = 0;
    u32 r2_16 = 0;
    u32 r3_16 = 0;
    u32 r0_17 = 0;
    u32 r1_17 = 0;
    u32 r2_17 = 0;
    u32 r3_17 = 0;
    u32 r0_18 = 0;
    u32 r1_18 = 0;
    u32 r2_18 = 0;
    u32 r3_18 = 0;
    u32 r0_19 = 0;
    u32 r1_19 = 0;
    u32 r2_19 = 0;
    u32 r3_19 = 0;
    u32 r0_20 = 0;
    u32 r2_20 = 0;
    u32 r3_20 = 0;
    u32 r0_21 = 0;
    u32 r2_21 = 0;
    u32 r3_21 = 0;
    u32 r0_22 = 0;
    u32 r1_20 = 0;
    u32 r2_22 = 0;
    u32 r3_22 = 0;
    u32 r0_23 = 0;
    u32 r1_21 = 0;
    u32 r2_23 = 0;
    u32 r3_23 = 0;
    u32 r0_24 = 0;
    u32 r1_22 = 0;
    u32 r2_24 = 0;
    u32 r3_24 = 0;
    u32 r5_1 = 0;
    u32 r1_23 = 0;
    u32 r2_25 = 0;
    u32 r3_25 = 0;
    u32 r0_25 = 0;
    u32 r1_24 = 0;
    u32 r2_26 = 0;
    u32 r3_26 = 0;
    u32 r0_26 = 0;
    u32 r1_25 = 0;
    u32 r2_27 = 0;
    u32 r3_27 = 0;
    u32 r0_27 = 0;
    u32 r1_26 = 0;
    u32 r2_28 = 0;
    u32 r3_28 = 0;
    u32 r0_28 = 0;
    u32 r0_29 = 0;
    u32 r0_30 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r0_1 = r0 + 0x53400u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006137d8(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r0 + 0x4be00u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005cdbf8(r0_2, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_3 = r0 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0027aa88(r0_3, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_4 = r0 + 0x5d880u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002ebd9c(r0_4, r1_3, r2_3, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_5 = r0 + 0x621ccu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001b1b2c(r0_5, r1_4, r2_4, r3_4);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_6 = r0 + 0x621d0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005cd754(r0_6, r1_5, r2_5, r3_5);
    r1_6 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_7 = r0 - 0xfff951c8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006bc5d8(r0_7, r1_6, r2_6, r3_6);
    r1_7 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_8 = r0 - 0xfff901d8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00118a74(r0_8, r1_7, r2_7, r3_7);
    r1_8 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_9 = r0 + 0x29220u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0011253c(r0_9, r1_8, r2_8, r3_8);
    r1_9 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_10 = r0 + 0x502bcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002bf468(r0_10, r1_9, r2_9, r3_9);
    r1_10 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_11 = r0 + 0x52bb0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002d453c(r0_11, r1_10, r2_10, r3_10);
    r1_11 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_12 = 0x621b2u + r0;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0052abb4(r0_12, r1_11, r2_11, r3_11);
    r1_12 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_13 = r0 + 0x6e1f4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00613620(r0_13, r1_12, r2_12, r3_12);
    r1_13 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_14 = 0x62162u + r0;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001b2184(r0_14, r1_13, r2_13, r3_13);
    r1_14 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_15 = 0x6e212u + r0;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00303cdc(r0_15, r1_14, r2_14, r3_14);
    r1_15 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r0_16 = 0x6e21au + r0;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006bc04c(r0_16, r1_15, r2_15, r3_15);
    r1_16 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    r0_17 = r0 + 0x6e224u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0024e9fc(r0_17, r1_16, r2_16, r3_16);
    r1_17 = guest::cpu()->r[1];
    r2_17 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    r0_18 = r0 + 0x6e234u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0020bb20(r0_18, r1_17, r2_17, r3_17);
    r1_18 = guest::cpu()->r[1];
    r2_18 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    r0_19 = r0 + 0x6e238u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001082c8(r0_19, r1_18, r2_18, r3_18);
    r1_19 = guest::cpu()->r[1];
    r2_19 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    r0_20 = 0x6fb4cu + r0;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00779520(r0_20, r1_19, r2_19, r3_19);
    r2_20 = guest::cpu()->r[2];
    r3_20 = guest::cpu()->r[3];
    r0_21 = 0x6fb68u + r0;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00302084(r0_21, 1u, r2_20, r3_20);
    r2_21 = guest::cpu()->r[2];
    r3_21 = guest::cpu()->r[3];
    *gptr<u8>(r0_21) = u8(0u);
    r0_22 = 0x6fcb2u + r0;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002eaf8c(r0_22, 1u, r2_21, r3_21);
    r1_20 = guest::cpu()->r[1];
    r2_22 = guest::cpu()->r[2];
    r3_22 = guest::cpu()->r[3];
    *gptr<u8>(r0_22) = u8(0u);
    r0_23 = 0x6fe36u + r0;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002eba90(r0_23, r1_20, r2_22, r3_22);
    r1_21 = guest::cpu()->r[1];
    r2_23 = guest::cpu()->r[2];
    r3_23 = guest::cpu()->r[3];
    r0_24 = r0 - 0xfff90208u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0020d858(r0_24, r1_21, r2_23, r3_23);
    r1_22 = guest::cpu()->r[1];
    r2_24 = guest::cpu()->r[2];
    r3_24 = guest::cpu()->r[3];
    *gptr<u8>(r0 - 0xfff901ccu) = u8(0u);  // (from the original)
    *gptr<u16>(r0 + 0x70e60u) = u16(0u);  // (from the original)
    r5_1 = r0 + 0x70e62u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00303cdc(r5_1, r1_22, r2_24, r3_24);
    r1_23 = guest::cpu()->r[1];
    r2_25 = guest::cpu()->r[2];
    r3_25 = guest::cpu()->r[3];
    r0_25 = r5_1 + 0xcu;  // (from the original)
    *gptr<u8>(r5_1 + 8u) = u8(0u);
    guest::cpu()->r[13] = r13;
    call_003052f0(r0_25, r1_23, r2_25, r3_25);
    r1_24 = guest::cpu()->r[1];
    r2_26 = guest::cpu()->r[2];
    r3_26 = guest::cpu()->r[3];
    *gptr<u8>(r5_1 + 9u) = u8(0u);
    *gptr<u8>(r5_1 + 0xau) = u8(0u);  // (from the original)
    r0_26 = 0x6214fu + r0;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006f3d0c(r0_26, r1_24, r2_26, r3_26);
    r1_25 = guest::cpu()->r[1];
    r2_27 = guest::cpu()->r[2];
    r3_27 = guest::cpu()->r[3];
    r0_27 = 0x70e9cu + r0;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_003059f8(r0_27, r1_25, r2_27, r3_27);
    r1_26 = guest::cpu()->r[1];
    r2_28 = guest::cpu()->r[2];
    r3_28 = guest::cpu()->r[3];
    r0_28 = 0x717e8u + r0;  // (from the original)
    *gptr<u16>(r0_28) = u16(0u);
    *gptr<u8>(r0_28 + 2u) = u8(0u);
    *gptr<u8>(r0_28 + 3u) = u8(0u);
    r0_29 = 0x717ecu + r0;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0024a528(r0_29, r1_26, r2_28, r3_28);
    r0_30 = r0 + 0x71800u;  // (from the original)
    *gptr<u32>(r0_30) = u32(0u);
    *gptr<u32>(r0_30 + 4) = u32(0u);
    *gptr<u32>(r0_30 + 8) = u32(0u);
    ea_1 = r0_30 + 0xcu;  // (from the original)
    *gptr<u32>(ea_1) = u32(0u);
    ea_2 = r0_30 + 0x10u;  // (from the original)
    *gptr<u32>(ea_2) = u32(0u);
    ea_3 = r0_30 + 0x14u;  // (from the original)
    *gptr<u32>(ea_3) = u32(0u);
    ea_4 = r0 + 0x62130u;  // (from the original)
    *gptr<u32>(ea_4) = u32(0u);
    *gptr<u32>(ea_4 + 4) = u32(0u);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = 0u;
    guest::cpu()->r[13] = r13;
    return r0_30;
}

}  // namespace d_005cb26c
GUEST_EXPORT(0x005cb26c, d_005cb26c::f_005cb26c);

// f_005cb49c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cb49c {

inline constexpr guest::Function<0x00108435, u32(u32, u32, u32, u32)> call_00108434;  // (from the original)
inline constexpr guest::Function<0x00112585, u32(u32, u32, u32, u32)> call_00112584;  // (from the original)
inline constexpr guest::Function<0x001b1a44, u32(u32, u32, u32, u32)> call_001b1a44;  // (from the original)
inline constexpr guest::Function<0x001b1b2c, u32(u32, u32, u32, u32)> call_001b1b2c;  // (from the original)
inline constexpr guest::Function<0x001b23ac, u32(u32, u32, u32, u32)> call_001b23ac;  // (from the original)
inline constexpr guest::Function<0x001b4980, u32(u32, u32, u32, u32)> call_001b4980;  // (from the original)
inline constexpr guest::Function<0x001b6618, u32(u32, u32, u32, u32)> call_001b6618;  // (from the original)
inline constexpr guest::Function<0x001e017c, u32(u32, u32, u32, u32)> call_001e017c;  // (from the original)
inline constexpr guest::Function<0x0020bb24, u32(u32, u32, u32, u32)> call_0020bb24;  // (from the original)
inline constexpr guest::Function<0x0024a548, u32(u32, u32, u32, u32)> call_0024a548;  // (from the original)
inline constexpr guest::Function<0x002bf574, u32(u32, u32, u32, u32)> call_002bf574;  // (from the original)
inline constexpr guest::Function<0x002d4594, u32(u32, u32, u32, u32)> call_002d4594;  // (from the original)
inline constexpr guest::Function<0x002eaf8c, u32(u32, u32, u32, u32)> call_002eaf8c;  // (from the original)
inline constexpr guest::Function<0x002ebce4, u32(u32, u32, u32, u32)> call_002ebce4;  // (from the original)
inline constexpr guest::Function<0x002ebe0c, u32(u32, u32, u32, u32)> call_002ebe0c;  // (from the original)
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x00302084, u32(u32, u32, u32, u32)> call_00302084;  // (from the original)
inline constexpr guest::Function<0x00303534, u32(u32, u32, u32, u32)> call_00303534;  // (from the original)
inline constexpr guest::Function<0x003052f0, u32(u32, u32, u32, u32)> call_003052f0;  // (from the original)
inline constexpr guest::Function<0x005cdd70, u32(u32, u32, u32, u32)> call_005cdd70;  // (from the original)
inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> call_005cdf48;  // (from the original)
inline constexpr guest::Function<0x00613658, u32(u32, u32, u32, u32)> call_00613658;  // (from the original)
inline constexpr guest::Function<0x00613764, u32(u32, u32, u32, u32)> call_00613764;  // (from the original)
inline constexpr guest::Function<0x006bc5d8, u32(u32, u32, u32, u32)> call_006bc5d8;  // (from the original)
inline constexpr guest::Function<0x006f3d0c, u32(u32, u32, u32, u32)> call_006f3d0c;  // (from the original)

u32 f_005cb49c(u32 r0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r4_1 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_25 = 0;
    u32 r4_2 = 0;
    u32 r1_7 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_26 = 0;
    u32 r0_27 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r0_28 = 0;
    u32 r0_29 = 0;
    u32 r0_30 = 0;
    u32 r0_31 = 0;
    u32 r1_8 = 0;
    u32 r0_32 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r1_9 = 0;
    u32 r0_33 = 0;
    u32 r2_13 = 0;
    u32 r3_13 = 0;
    u32 r2_14 = 0;
    u32 r3_14 = 0;
    u32 r0_34 = 0;
    u32 r0_35 = 0;
    u32 r0_36 = 0;
    u32 r0_37 = 0;
    u32 r0_38 = 0;
    u32 r2_15 = 0;
    u32 r3_15 = 0;
    u32 r0_39 = 0;
    u32 r1_10 = 0;
    u32 r2_16 = 0;
    u32 r3_16 = 0;
    u32 r0_40 = 0;
    u32 r0_41 = 0;
    u32 r0_42 = 0;
    u32 r0_43 = 0;
    u32 r0_44 = 0;
    u32 r2_17 = 0;
    u32 r3_17 = 0;
    u32 r0_45 = 0;
    u32 r2_18 = 0;
    u32 r3_18 = 0;
    u32 r4_3 = 0;
    u32 r0_46 = 0;
    u32 r0_47 = 0;
    u32 r0_48 = 0;
    u32 r0_49 = 0;
    u32 r0_50 = 0;
    u32 r0_51 = 0;
    u32 r0_52 = 0;
    u32 r0_53 = 0;
    u32 r0_54 = 0;
    u32 r2_19 = 0;
    u32 r3_19 = 0;
    u32 r4_4 = 0;
    u32 r0_55 = 0;
    u32 r0_56 = 0;
    u32 r0_57 = 0;
    u32 r0_58 = 0;
    u32 r0_59 = 0;
    u32 r0_60 = 0;
    u32 r0_61 = 0;
    u32 r0_62 = 0;
    u32 r0_63 = 0;
    u32 r0_64 = 0;
    u32 r0_65 = 0;
    u32 r0_66 = 0;
    u32 r0_67 = 0;
    u32 r0_68 = 0;
    u32 r0_69 = 0;
    u32 r0_70 = 0;
    u32 r0_71 = 0;
    u32 r0_72 = 0;
    u32 r0_73 = 0;
    u32 r0_74 = 0;
    u32 r0_75 = 0;
    u32 r0_76 = 0;
    u32 r0_77 = 0;
    u32 r0_78 = 0;
    u32 r0_79 = 0;
    u32 r0_80 = 0;
    u32 r0_81 = 0;
    u32 r0_82 = 0;
    u32 r1_11 = 0;
    u32 r2_20 = 0;
    u32 r3_20 = 0;
    u32 r0_83 = 0;
    u32 r0_84 = 0;
    u32 r1_12 = 0;
    u32 r2_21 = 0;
    u32 r3_21 = 0;
    u32 r0_85 = 0;
    u32 r0_86 = 0;
    u32 r1_13 = 0;
    u32 r2_22 = 0;
    u32 r3_22 = 0;
    u32 r0_87 = 0;
    u32 r0_88 = 0;
    u32 r1_14 = 0;
    u32 r2_23 = 0;
    u32 r3_23 = 0;
    u32 r0_89 = 0;
    u32 r0_90 = 0;
    u32 r0_91 = 0;
    u32 r0_92 = 0;
    u32 r2_24 = 0;
    u32 r3_24 = 0;
    u32 r4_5 = 0;
    u32 r0_93 = 0;
    u32 r0_94 = 0;
    u32 r1_15 = 0;
    u32 r2_25 = 0;
    u32 r3_25 = 0;
    u32 r0_95 = 0;
    u32 r0_96 = 0;
    u32 r0_97 = 0;
    u32 r0_98 = 0;
    u32 r0_99 = 0;
    u32 r0_100 = 0;
    u32 ea_1 = 0;
    u32 r1_16 = 0;
    u32 r1_17 = 0;
    u32 r0_101 = 0;
    u32 r0_102 = 0;
    u32 r0_103 = 0;
    u32 r0_104 = 0;
    u32 r0_105 = 0;
    u32 r0_106 = 0;
    u32 r0_107 = 0;
    u32 r0_108 = 0;
    u32 r0_109 = 0;
    u32 r0_110 = 0;
    u32 r0_111 = 0;
    u32 r0_112 = 0;
    u32 r0_113 = 0;
    u32 r0_114 = 0;
    u32 r0_115 = 0;
    u32 r0_116 = 0;
    u32 r0_117 = 0;
    u32 r0_118 = 0;
    u32 r1_18 = 0;
    u32 r2_26 = 0;
    u32 r3_26 = 0;
    u32 r4_6 = 0;
    u32 r4_7 = 0;
    u32 r1_19 = 0;
    u32 r2_27 = 0;
    u32 r3_27 = 0;
    u32 r0_119 = 0;
    u32 r0_120 = 0;
    u32 r0_121 = 0;
    u32 r0_122 = 0;
    u32 r0_123 = 0;
    u32 r0_124 = 0;
    u32 r4_8 = 0;
    u32 r2_28 = 0;
    u32 r3_28 = 0;
    u32 r2_29 = 0;
    u32 r3_29 = 0;
    u32 r0_125 = 0;
    u32 r0_126 = 0;
    u32 r0_127 = 0;
    u32 r0_128 = 0;
    u32 r0_129 = 0;
    u32 r0_130 = 0;
    u32 r1_20 = 0;
    u32 r2_30 = 0;
    u32 r3_30 = 0;
    u32 r0_131 = 0;
    u32 r0_132 = 0;
    u32 r1_21 = 0;
    u32 r2_31 = 0;
    u32 r3_31 = 0;
    u32 r0_133 = 0;
    u32 r0_134 = 0;
    u32 r0_135 = 0;
    u32 r0_136 = 0;
    u32 r0_137 = 0;
    u32 r2_32 = 0;
    u32 r3_32 = 0;
    u32 r2_33 = 0;
    u32 r3_33 = 0;
    u32 r0_138 = 0;
    u32 r0_139 = 0;
    u32 r0_140 = 0;
    u32 r0_141 = 0;
    u32 r1_22 = 0;
    u32 r4_9 = 0;
    u32 r0_142 = 0;
    u32 r2_34 = 0;
    u32 r3_34 = 0;
    u32 r1_23 = 0;
    u32 r0_143 = 0;
    u32 r2_35 = 0;
    u32 r3_35 = 0;
    u32 r1_24 = 0;
    u32 r0_144 = 0;
    u32 r2_36 = 0;
    u32 r3_36 = 0;
    u32 r0_145 = 0;
    u32 r0_146 = 0;
    u32 r0_147 = 0;
    u32 r0_148 = 0;
    u32 r2_37 = 0;
    u32 r3_37 = 0;
    u32 r4_10 = 0;
    u32 r4_11 = 0;
    u32 r0_149 = 0;
    u32 r0_150 = 0;
    u32 r4_12 = 0;
    u32 r2_38 = 0;
    u32 r3_38 = 0;
    u32 r1_25 = 0;
    u32 r4_13 = 0;
    u32 r2_39 = 0;
    u32 r3_39 = 0;
    u32 r1_26 = 0;
    u32 r4_14 = 0;
    u32 r0_151 = 0;
    u32 r2_40 = 0;
    u32 r3_40 = 0;
    u32 r0_152 = 0;
    u32 r0_153 = 0;
    u32 r0_154 = 0;
    u32 r0_155 = 0;
    u32 r2_41 = 0;
    u32 r3_41 = 0;
    u32 r4_15 = 0;
    u32 r4_16 = 0;
    u32 r0_156 = 0;
    u32 r0_157 = 0;
    u32 r0_158 = 0;
    u32 r1_27 = 0;
    u32 r0_159 = 0;
    u32 r6_1 = 0;
    u32 r4_17 = 0;
    u32 r2_42 = 0;
    u32 r3_42 = 0;
    u32 r2_43 = 0;
    u32 r3_43 = 0;
    u32 r0_160 = 0;
    u32 r0_161 = 0;
    u32 r0_162 = 0;
    u32 r1_28 = 0;
    u32 r1_29 = 0;
    u32 r0_163 = 0;
    u32 r0_164 = 0;
    u32 r2_44 = 0;
    u32 r3_44 = 0;
    u32 r4_18 = 0;
    u32 r1_30 = 0;
    u32 r2_45 = 0;
    u32 r3_45 = 0;
    u32 r0_165 = 0;
    u32 r4_19 = 0;
    u32 r2_46 = 0;
    u32 r3_46 = 0;
    u32 r0_166 = 0;
    u32 r0_167 = 0;
    u32 r0_168 = 0;
    u32 r3_47 = 0;
    u32 r0_169 = 0;
    u32 r0_170 = 0;
    u32 r0_171 = 0;
    u32 r2_47 = 0;
    u32 r3_48 = 0;
    u32 r4_20 = 0;
    u32 r0_172 = 0;
    u32 r0_173 = 0;
    u32 r3_49 = 0;
    u32 r2_48 = 0;
    u32 r0_174 = 0;
    u32 r0_175 = 0;
    u32 r0_176 = 0;
    u32 r0_177 = 0;
    u32 r0_178 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r0_1 = r0 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_00301d0c(r0_1, 0x6be060u, 0xa480u, 4u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_3 = r0_2 + 0x20000u;  // (from the original)
    r0_4 = r0_3 + 0x9200u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_00112584(r0_4, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_6 = r0_5 + 0x22000u;  // (from the original)
    r0_7 = r0_6 + 0xbe0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_005cdd70(r0_7, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_9 = r0_8 + 0x4400u;  // (from the original)
    r0_10 = r0_9 + 0xbcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_11 = call_002bf574(r0_10, r1_3, r2_3, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_12 = r0_11 + 0x2800u;  // (from the original)
    r0_13 = r0_12 + 0xf4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_14 = call_002d4594(r0_13, r1_4, r2_4, r3_4);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_15 = r0_14 + 0x850u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_16 = call_00613764(r0_15, r1_5, r2_5, r3_5);
    r1_6 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_17 = r0_16 + 0x8000u;  // (from the original)
    r0_18 = r0_17 + 0x2480u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_19 = call_002ebe0c(r0_18, r1_6, r2_6, r3_6);
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_20 = r0_19 - 0x5c000u;  // (from the original)
    r0_21 = r0_20 - 0x1880u;  // (from the original)
    r4_1 = r0_21 + 0x6214fu;  // (from the original)
    *gptr<u32>(r4_1) = u32(0u);
    *gptr<u32>(r4_1 + 4u) = u32(0u);
    *gptr<u32>(r4_1 + 8u) = u32(0u);
    *gptr<u32>(r4_1 + 0xcu) = u32(0u);  // (from the original)
    *gptr<u16>(r4_1 + 0x10u) = u16(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006f3d0c(r4_1, 0x6214fu, r2_7, r3_7);  // (from the original)
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_22 = 0xfff9deb1u + r4_1;  // (from the original)
    r0_23 = r0_22 + 0x62162u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_24 = call_001b23ac(r0_23, 0x62162u, r2_8, r3_8);  // (from the original)
    r2_9 = ~0u;
    r3_9 = ~0x80000000u;  // (from the original)
    r0_25 = r0_24 + 0xfff9de9eu;  // (from the original)
    r4_2 = r0_25 + 0x621b2u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005cdf48(r4_2, 0x621b2u, r2_9, r3_9);  // (from the original)
    r1_7 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_26 = r4_2 + 8u;
    guest::cpu()->r[13] = r13;
    r0_27 = call_002fc20c(r0_26, r1_7, r2_10, r3_10);
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_28 = r0_27 - 8u;
    r0_29 = r0_28 + 0xfff9de4eu;  // (from the original)
    r0_30 = r0_29 + 0x62000u;  // (from the original)
    r0_31 = r0_30 + 0x1ccu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001b1b2c(r0_31, 0xfff9de4eu, r2_11, r3_11);  // (from the original)
    r1_8 = guest::cpu()->r[1];
    r0_32 = r0_31 + 4u;
    r2_12 = ~0u;
    r3_12 = ~0x80000000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005cdf48(r0_32, r1_8, r2_12, r3_12);
    r1_9 = guest::cpu()->r[1];
    r0_33 = r0_32 + 8u;
    r2_13 = ~0u;
    r3_13 = ~0x80000000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005cdf48(r0_33, r1_9, r2_13, r3_13);
    r2_14 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_34 = r0_32 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00303534(r0_34, 0u, r2_14, r3_14);
    r0_35 = r0_32 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_36 = call_00301d0c(r0_35, 0x2fc20cu, 4u, 0x18u);  // (from the original)
    r0_37 = r0_36 + 0x7cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_38 = call_00301d0c(r0_37, 0x2fc20cu, 4u, 0xdu);  // (from the original)
    r2_15 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r0_39 = r0_38 + 0x34u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00303534(r0_39, 0u, r2_15, r3_15);
    r1_10 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    r0_40 = r0_38 + 0x4cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_41 = call_001e017c(r0_40, r1_10, r2_16, r3_16);
    r0_42 = r0_41 + 0x4000u;  // (from the original)
    r0_43 = r0_42 + 0x380u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_44 = call_00301d0c(r0_43, 0x2fc20cu, 4u, 7u);  // (from the original)
    r2_17 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    r0_45 = r0_44 + 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00303534(r0_45, 0u, r2_17, r3_17);
    r2_18 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    r4_3 = r0_44 + 0x2cu;  // (from the original)
    r0_46 = r4_3 + 8u;
    guest::cpu()->r[13] = r13;
    call_00303534(r0_46, 0u, r2_18, r3_18);
    r0_47 = r4_3 + 0x12u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_48 = call_00301d0c(r0_47, 0x2fc20cu, 4u, 0xbu);  // (from the original)
    r0_49 = r0_48 + 0x3au;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_50 = call_00301d0c(r0_49, 0x2fc20cu, 4u, 4u);  // (from the original)
    r0_51 = r0_50 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_52 = call_00301d0c(r0_51, 0x1b4b7cu, 0x2eu, 4u);  // (from the original)
    r0_53 = r0_52 + 0xb8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_54 = call_00301d0c(r0_53, 0x613dc0u, 8u, 4u);  // (from the original)
    r2_19 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    r4_4 = r0_54 + 0x20u;  // (from the original)
    r0_55 = r0_54 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00303534(r0_55, 0u, r2_19, r3_19);
    r0_56 = r4_4 + 0x12u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_57 = call_00301d0c(r0_56, 0x2fc20cu, 4u, 6u);  // (from the original)
    r0_58 = r0_57 + 0x1eu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_59 = call_00301d0c(r0_58, 0x2fc20cu, 4u, 4u);  // (from the original)
    r0_60 = r0_59 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_61 = call_00301d0c(r0_60, 0x2fc20cu, 4u, 4u);  // (from the original)
    r0_62 = r0_61 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_63 = call_00301d0c(r0_62, 0x313414u, 8u, 4u);  // (from the original)
    r0_64 = r0_63 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_65 = call_00301d0c(r0_64, 0x2fc20cu, 4u, 5u);  // (from the original)
    r0_66 = r0_65 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_67 = call_00301d0c(r0_66, 0x2fc20cu, 4u, 8u);  // (from the original)
    r0_68 = r0_67 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_69 = call_00301d0c(r0_68, 0x613dc0u, 8u, 8u);  // (from the original)
    r0_70 = r0_69 + 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_71 = call_00301d0c(r0_70, 0x1b4980u, 0x870u, 8u);  // (from the original)
    r0_72 = r0_71 + 0x4000u;  // (from the original)
    r0_73 = r0_72 + 0x380u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_74 = call_00301d0c(r0_73, 0x613dc0u, 8u, 4u);  // (from the original)
    r0_75 = r0_74 + 0x22u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_76 = call_00301d0c(r0_75, 0x2fc20cu, 4u, 3u);  // (from the original)
    r0_77 = r0_76 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_78 = call_00301d0c(r0_77, 0x2fc20cu, 4u, 8u);  // (from the original)
    r0_79 = r0_78 + 0x2au;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_80 = call_00301d0c(r0_79, 0x2fc20cu, 4u, 0x12u);  // (from the original)
    r0_81 = r0_80 + 0x5au;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_82 = call_00301d0c(r0_81, 0x1df4c4u, 0x18u, 2u);  // (from the original)
    r1_11 = guest::cpu()->r[1];
    r2_20 = guest::cpu()->r[2];
    r3_20 = guest::cpu()->r[3];
    r0_83 = r0_82 + 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_84 = call_002fc20c(r0_83, r1_11, r2_20, r3_20);
    r1_12 = guest::cpu()->r[1];
    r2_21 = guest::cpu()->r[2];
    r3_21 = guest::cpu()->r[3];
    r0_85 = r0_84 + 4u;
    guest::cpu()->r[13] = r13;
    r0_86 = call_002fc20c(r0_85, r1_12, r2_21, r3_21);
    r1_13 = guest::cpu()->r[1];
    r2_22 = guest::cpu()->r[2];
    r3_22 = guest::cpu()->r[3];
    r0_87 = r0_86 + 4u;
    guest::cpu()->r[13] = r13;
    r0_88 = call_002fc20c(r0_87, r1_13, r2_22, r3_22);
    r1_14 = guest::cpu()->r[1];
    r2_23 = guest::cpu()->r[2];
    r3_23 = guest::cpu()->r[3];
    r0_89 = r0_88 + 4u;
    guest::cpu()->r[13] = r13;
    r0_90 = call_002fc20c(r0_89, r1_14, r2_23, r3_23);
    r0_91 = r0_90 + 0x1au;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_92 = call_00301d0c(r0_91, 0x2fc20cu, 4u, 4u);  // (from the original)
    r2_24 = guest::cpu()->r[2];
    r3_24 = guest::cpu()->r[3];
    r4_5 = r0_92 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00303534(r4_5, 0u, r2_24, r3_24);
    r0_93 = r4_5 + 8u;
    guest::cpu()->r[13] = r13;
    r0_94 = call_00301d0c(r0_93, 0x613dc0u, 8u, 0xeu);  // (from the original)
    r1_15 = guest::cpu()->r[1];
    r2_25 = guest::cpu()->r[2];
    r3_25 = guest::cpu()->r[3];
    r0_95 = r0_94 + 0x78u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_96 = call_002fc20c(r0_95, r1_15, r2_25, r3_25);
    r0_97 = r0_96 + 4u;
    guest::cpu()->r[13] = r13;
    r0_98 = call_00301d0c(r0_97, 0x2fc20cu, 4u, 2u);  // (from the original)
    r0_99 = r0_98 + 8u;
    guest::cpu()->r[13] = r13;
    r0_100 = call_00301d0c(r0_99, 0x2fc20cu, 4u, 2u);  // (from the original)
    ea_1 = r0_100 + 0x18u;  // (from the original)
    *gptr<u16>(ea_1) = u16(0u);
    r1_16 = r0_100 - 0x8c00u;  // (from the original)
    *gptr<u8>(ea_1 + 2u) = u8(0u);
    r1_17 = r1_16 - 4u;
    *gptr<u8>(ea_1 + 3u) = u8(0u);
    r0_101 = r1_17 + 0x8000u;  // (from the original)
    r0_102 = r0_101 + 0xc20u;  // (from the original)
    *gptr<u16>(r0_102) = u16(0u);
    *gptr<u8>(r0_102 + 2u) = u8(0u);
    *gptr<u8>(r0_102 + 3u) = u8(0u);
    r0_103 = r1_17 - 0x62000u;  // (from the original)
    r0_104 = r0_103 - 0x1d0u;  // (from the original)
    r0_105 = r0_104 - 0xfff951c8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_106 = call_00301d0c(r0_105, 0x301e94u, 4u, 0x43u);  // (from the original)
    r0_107 = r0_106 + 0x10cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_108 = call_00301d0c(r0_107, 0x301e94u, 4u, 0x48u);  // (from the original)
    r0_109 = r0_108 + 0x120u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_110 = call_00301d0c(r0_109, 0x301e94u, 4u, 0x1eu);  // (from the original)
    r0_111 = r0_110 + 0x78u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_112 = call_00301d0c(r0_111, 0x301e94u, 4u, 0x48u);  // (from the original)
    r0_113 = r0_112 + 0x120u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_114 = call_00301d0c(r0_113, 0x301e94u, 4u, 0x19u);  // (from the original)
    r0_115 = r0_114 + 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_116 = call_00301d0c(r0_115, 0x301e94u, 4u, 8u);  // (from the original)
    r0_117 = r0_116 + 0x134u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_118 = call_00301d0c(r0_117, 0x1b6028u, 0xb98u, 4u);  // (from the original)
    r1_18 = guest::cpu()->r[1];
    r2_26 = guest::cpu()->r[2];
    r3_26 = guest::cpu()->r[3];
    r4_6 = r0_118 - 0x400u;  // (from the original)
    r4_7 = r4_6 - 0x15cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006bc5d8(r4_7, r1_18, r2_26, r3_26);
    r1_19 = guest::cpu()->r[1];
    r2_27 = guest::cpu()->r[2];
    r3_27 = guest::cpu()->r[3];
    r0_119 = r4_7 + 0xfff951c8u;  // (from the original)
    r0_120 = r0_119 + 0x6e000u;  // (from the original)
    r0_121 = r0_120 + 0x1f4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_122 = call_00613658(r0_121, r1_19, r2_27, r3_27);
    r0_123 = r0_122 - 0x6e000u;  // (from the original)
    r0_124 = r0_123 - 0x1f4u;  // (from the original)
    r4_8 = r0_124 + 0x6e212u;  // (from the original)
    r2_28 = ~0u;
    r3_28 = ~0x80000000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005cdf48(r4_8, 0x6e212u, r2_28, r3_28);  // (from the original)
    r2_29 = guest::cpu()->r[2];
    r3_29 = guest::cpu()->r[3];
    r0_125 = 0xfff91deeu + r4_8;  // (from the original)
    r0_126 = r0_125 + 0x6e21au;  // (from the original)
    r0_127 = r0_126 + 0xfff91de6u;  // (from the original)
    r0_128 = r0_127 + 0x6e000u;  // (from the original)
    r0_129 = r0_128 + 0x224u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_130 = call_001b1a44(r0_129, 0xfff91de6u, r2_29, r3_29);  // (from the original)
    r1_20 = guest::cpu()->r[1];
    r2_30 = guest::cpu()->r[2];
    r3_30 = guest::cpu()->r[3];
    r0_131 = r0_130 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_132 = call_0020bb24(r0_131, r1_20, r2_30, r3_30);
    r1_21 = guest::cpu()->r[1];
    r2_31 = guest::cpu()->r[2];
    r3_31 = guest::cpu()->r[3];
    r0_133 = r0_132 + 4u;
    guest::cpu()->r[13] = r13;
    r0_134 = call_00108434(r0_133, r1_21, r2_31, r3_31);
    r0_135 = r0_134 - 0x6e000u;  // (from the original)
    r0_136 = r0_135 - 0x238u;  // (from the original)
    r0_137 = r0_136 + 0x6fb4cu;  // (from the original)
    r2_32 = ~0u;
    r3_32 = ~0x80000000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005cdf48(r0_137, 0x6fb4cu, r2_32, r3_32);  // (from the original)
    r2_33 = guest::cpu()->r[2];
    r3_33 = guest::cpu()->r[3];
    r0_138 = 0xfff904b4u + r0_137;  // (from the original)
    r0_139 = r0_138 + 0x6fb68u;  // (from the original)
    r0_140 = r0_139 + 2u;
    guest::cpu()->r[13] = r13;
    r0_141 = call_002fc20c(r0_140, 0x6fb68u, r2_33, r3_33);  // (from the original)
    r1_22 = guest::cpu()->r[1];
    r4_9 = r0_141 - 2u;
    r0_142 = r0_141 + 4u;
    r2_34 = ~0u;
    r3_34 = ~0x80000000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005cdf48(r0_142, r1_22, r2_34, r3_34);
    r1_23 = guest::cpu()->r[1];
    r0_143 = r4_9 + 0xeu;  // (from the original)
    r2_35 = ~0u;
    r3_35 = ~0x80000000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005cdf48(r0_143, r1_23, r2_35, r3_35);
    r1_24 = guest::cpu()->r[1];
    r0_144 = r4_9 + 0x16u;  // (from the original)
    r2_36 = ~0u;
    r3_36 = ~0x80000000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005cdf48(r0_144, r1_24, r2_36, r3_36);
    r0_145 = r4_9 + 0x1eu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_146 = call_00301d0c(r0_145, 0x1b4b7cu, 0x2eu, 3u);  // (from the original)
    r0_147 = r0_146 + 0x120u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_148 = call_00301d0c(r0_147, 0x2fc20cu, 4u, 3u);  // (from the original)
    r2_37 = guest::cpu()->r[2];
    r3_37 = guest::cpu()->r[3];
    r4_10 = r0_148 - 0x100u;  // (from the original)
    r4_11 = r4_10 - 0x3eu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00302084(r4_11, 1u, r2_37, r3_37);
    *gptr<u8>(r4_11) = u8(0u);
    r0_149 = 0xfff90498u + r4_11;  // (from the original)
    r0_150 = r0_149 + 0x6fcb2u;  // (from the original)
    r4_12 = r0_150 + 1u;
    r2_38 = ~0u;
    r3_38 = ~0x80000000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005cdf48(r4_12, 0x6fcb2u, r2_38, r3_38);  // (from the original)
    r1_25 = guest::cpu()->r[1];
    r4_13 = r4_12 + 8u;
    r2_39 = ~0u;
    r3_39 = ~0x80000000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005cdf48(r4_13, r1_25, r2_39, r3_39);
    r1_26 = guest::cpu()->r[1];
    r4_14 = r4_13 - 9u;
    r0_151 = r4_14 + 0x11u;  // (from the original)
    r2_40 = ~0u;
    r3_40 = ~0x80000000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005cdf48(r0_151, r1_26, r2_40, r3_40);
    r0_152 = r4_14 + 0x1au;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_153 = call_00301d0c(r0_152, 0x1b4b7cu, 0x2eu, 3u);  // (from the original)
    r0_154 = r0_153 + 0x120u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_155 = call_00301d0c(r0_154, 0x2fc20cu, 4u, 3u);  // (from the original)
    r2_41 = guest::cpu()->r[2];
    r3_41 = guest::cpu()->r[3];
    r4_15 = r0_155 - 0x100u;  // (from the original)
    r4_16 = r4_15 - 0x3au;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002eaf8c(r4_16, 1u, r2_41, r3_41);
    *gptr<u8>(r4_16) = u8(0u);
    r0_156 = 0xfff9034eu + r4_16;  // (from the original)
    r0_157 = r0_156 - 0xfff90208u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_158 = call_00301d0c(r0_157, 0x6f533cu, 0xcu, 4u);  // (from the original)
    r1_27 = guest::cpu()->r[1];
    r0_159 = r0_158 + 0xfff90208u;  // (from the original)
    r6_1 = 0xfff90208u - 0x30u;  // (from the original)
    r4_17 = r0_159 - r6_1;
    r2_42 = ~0u;
    r3_42 = ~0x80000000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005cdf48(r4_17, r1_27, r2_42, r3_42);
    r2_43 = guest::cpu()->r[2];
    r3_43 = guest::cpu()->r[3];
    r0_160 = r4_17 + r6_1;
    r0_161 = r0_160 + 0x6fe36u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_162 = call_002ebce4(r0_161, 0x6fe36u, r2_43, r3_43);  // (from the original)
    r1_28 = r6_1 - 0xeu;  // (from the original)
    r1_29 = r1_28 + r0_162;
    r0_163 = r1_29 + 0x70000u;  // (from the original)
    r0_164 = r0_163 + 0xe60u;  // (from the original)
    r2_44 = ~0u;
    *gptr<u16>(r0_164) = u16(0u);
    r3_44 = ~0x80000000u;  // (from the original)
    r4_18 = r1_29 + 0x70e62u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005cdf48(r4_18, r1_29, r2_44, r3_44);
    r1_30 = guest::cpu()->r[1];
    r2_45 = guest::cpu()->r[2];
    r3_45 = guest::cpu()->r[3];
    r0_165 = r4_18 + 0xcu;  // (from the original)
    r4_19 = r0_165 - 0xcu;  // (from the original)
    *gptr<u8>(r0_165 - 4u) = u8(0u);
    guest::cpu()->r[13] = r13;
    call_003052f0(r0_165, r1_30, r2_45, r3_45);
    r2_46 = guest::cpu()->r[2];
    r3_46 = guest::cpu()->r[3];
    *gptr<u8>(r4_19 + 9u) = u8(0u);
    r0_166 = 0xfff8f19eu + r4_19;  // (from the original)
    r0_167 = r0_166 + 0x70e9cu;  // (from the original)
    *gptr<u8>(r4_19 + 0xau) = u8(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_168 = call_001b4980(r0_167, 0x70e9cu, r2_46, r3_46);  // (from the original)
    r3_47 = guest::cpu()->r[3];
    r0_169 = r0_168 + 0xfff8f164u;  // (from the original)
    r0_170 = r0_169 + 0x7170cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_171 = call_001b6618(r0_170, 0x7170cu, 0xfff8f164u, r3_47);  // (from the original)
    r2_47 = ~0u;
    r3_48 = ~0x80000000u;  // (from the original)
    r4_20 = r0_171 + 0xfff8e8f4u;  // (from the original)
    r0_172 = r4_20 + 0x71000u;  // (from the original)
    r0_173 = r0_172 + 0x7e0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005cdf48(r0_173, 0xfff8e8f4u, r2_47, r3_48);  // (from the original)
    r3_49 = guest::cpu()->r[3];
    r2_48 = r6_1 - 0x19c0u;  // (from the original)
    r0_174 = 0x717e8u + r4_20;  // (from the original)
    *gptr<u16>(r0_174) = u16(0u);
    *gptr<u8>(r0_174 + 2u) = u8(0u);
    *gptr<u8>(r0_174 + 3u) = u8(0u);
    r0_175 = r0_174 + r2_48;
    r0_176 = r0_175 + 0x717ecu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_177 = call_0024a548(r0_176, 0x717ecu, r2_48, r3_49);  // (from the original)
    r0_178 = r0_177 + 0xfff8e814u;  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = 0xfff8e814u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return r0_178;
}

}  // namespace d_005cb49c
GUEST_EXPORT(0x005cb49c, d_005cb49c::f_005cb49c);

// f_005cbc3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cbc3c {

struct __attribute__((packed)) Object_005cbc3c_0 {
    u8 unknown_0[0x270];  // (not used here)
    u8 byte_270;
};
GUEST_OFFSET(Object_005cbc3c_0, byte_270, 0x270);  // (from the original)


void f_005cbc3c(gptr<Object_005cbc3c_0> arg0, u32 r1) {
    u32 r1_1 = 0;
    r1_1 = u32(arg0->byte_270) & ~7u | r1 & 7u;
    arg0->byte_270 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_005cbc3c
GUEST_EXPORT(0x005cbc3c, d_005cbc3c::f_005cbc3c);

// f_005cbc54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cbc54 {

inline constexpr guest::Function<0x001b23f0, u32(u32, u32, u32, u32)> call_001b23f0;  // (from the original)
inline constexpr guest::Function<0x001b4a8c, u32(u32, u32, u32, u32)> call_001b4a8c;  // (from the original)
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> call_002ff408;  // (from the original)
inline constexpr guest::Function<0x002ffad8, u32(u32, u32, u32, u32)> call_002ffad8;  // (from the original)

u32 f_005cbc54(u32 r0, u32 r1, u32 r2) {
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    u32 r1_5 = 0;
    u32 r0_4 = 0;
    u32 r1_6 = 0;
    u32 r2_4 = 0;
    u32 r4_1 = 0;
    u32 r1_7 = 0;
    u32 r0_5 = 0;
    u32 r1_8 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    call_002ff408(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r0_1 = call_002fcb34(r1, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    if (r0_1 == 0x2au) {  // (from the original)
        r1_2 = u32(*gptr<u8>(r0 + 0x270u)) | 0x20u;  // (from the original)
        *gptr<u8>(r0 + 0x270u) = u8(r1_2);  // (from the original)
    }
    r0_2 = call_002ffad8(r1, r1_2, r2_2, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    zf_1 = r0_2 == 0xffu;  // (from the original)
    cf_1 = r0_2 >= 0xffu;  // (from the original)
    if (!cf_1 || zf_1) {
        *gptr<u8>(r0 + 0x26fu) = u8(r0_2);  // (from the original)
    }
    if (cf_1 && !zf_1) {
        r1_3 = 0u;
    }
    if (cf_1 && !zf_1) {
        *gptr<u8>(r0 + 0x26fu) = u8(r1_3);  // (from the original)
    }
    *gptr<u8>(r0 + 0x271u) = u8(0u);  // (from the original)
    r0_3 = call_002fb94c(0u, r1_3, r2_3, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    if (r0_3 != 0) {
        r1_5 = r0_3 + 0x55a6u;  // (from the original)
        r0_4 = r0 + 0x34u;  // (from the original)
        *gptr<u8>(r0 + 0x64u) = u8(1u);  // (from the original)
        call_001b4a8c(r0_4, r1_5, 1u, guest::cpu()->r[3]);
        r1_6 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        *gptr<u8>(r0 + 0x270u) = u8(u32(*gptr<u8>(r0 + 0x270u)) & ~7u | 3u);  // (from the original)
        r4_1 = r0_3 + 0x8908u;  // (from the original)
        if (u32(*gptr<u8>(r4_1 + 0xc7u)) >= 0x20u) {  // (from the original)
            call_001b23f0(r4_1, r1_6, r2_4, guest::cpu()->r[3]);
        }
        r1_7 = r4_1 + 0x84u;  // (from the original)
        r0_5 = r0 + 0x22cu;  // (from the original)
        call_002f8574(r0_5, r1_7, 0x42u, guest::cpu()->r[3]);  // (from the original)
        r1_8 = r4_1;
        if (u32(*gptr<u8>(r0 + 0x30u)) == 6u) {  // (from the original)
            r0_6 = u32(*gptr<u8>(r1_8 + 0xc7u));  // (from the original)
            r1_8 = r4_1 + 0x42u;  // (from the original)
        } else {
            r0_6 = u32(*gptr<u8>(r1_8 + 0xc6u));  // (from the original)
        }
        *gptr<u8>(r0 + 0x26eu) = u8(r0_6);  // (from the original)
        r0_7 = r0 + 0x68u;  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_002f8574(r0_7, r1_8, 0x42u, guest::cpu()->r[3]);  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    return r0_3;
}

}  // namespace d_005cbc54
GUEST_EXPORT(0x005cbc54, d_005cbc54::f_005cbc54);

// f_005cbd34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cbd34 {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x003009a9, u32(u32, u32, u32, u32)> call_003009a8;  // (from the original)
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x00613de4, u32(u32, u32, u32, u32)> call_00613de4;  // (from the original)

u32 f_005cbd34(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r5_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_002fb328(r0, r1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    r0_2 = r0_1 + 0x292a4u;  // (from the original)
    r0_3 = call_003009a8(r0_2, r1, r2_1, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r5_1 = r0_3;
    if (r0_3 == 0) {
        goto L_5cbd7c;
    }
    r0_3 = call_00301e20(r0_3, r1_1, r2_2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    if (r0_3 == 0) {
        goto L_5cbd7c;
    }
    *gptr<u8>(r0 + 0x30u) = u8(2u);  // (from the original)
    r0_3 = call_00613de4(r0, r5_1, 2u, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
L_5cbd7c:;
    r0_4 = call_002fb94c(r0_3, r1_1, r2_2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_4 != 0) {
        r1_3 = r0_4 + 0x8908u;  // (from the original)
        if (u32(*gptr<u8>(r0 + 0x30u)) == 6u) {  // (from the original)
            r0_5 = u32(*gptr<u8>(r1_3 + 0xc7u));  // (from the original)
            r1_3 = r1_3 + 0x42u;  // (from the original)
        } else {
            r0_5 = u32(*gptr<u8>(r1_3 + 0xc6u));  // (from the original)
        }
        *gptr<u8>(r0 + 0x26eu) = u8(r0_5);  // (from the original)
        r0_6 = r0 + 0x68u;  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_002f8574(r0_6, r1_3, 0x42u, guest::cpu()->r[3]);  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0_4;
}

}  // namespace d_005cbd34
GUEST_EXPORT(0x005cbd34, d_005cbd34::f_005cbd34);

// f_005cbdc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cbdc4 {

inline constexpr guest::Function<0x001b4a8c, u32(u32, u32, u32, u32)> call_001b4a8c;  // (from the original)
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)

u32 f_005cbdc4(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_002fb94c(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        r1_2 = r0_1 + 0x55a6u;  // (from the original)
        *gptr<u8>(r0 + 0x30u) = u8(1u);  // (from the original)
        call_001b4a8c(r0, r1_2, 1u, guest::cpu()->r[3]);
        *gptr<u8>(r0 + 0x30u) = u8(6u);  // (from the original)
        r0_2 = r0 + 0x68u;  // (from the original)
        r1_3 = r0_1 + 0x894au;  // (from the original)
        *gptr<u8>(r0 + 0x26eu) = u8(u32(*gptr<u8>(r0_1 + 0x89cfu)));  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_002f8574(r0_2, r1_3, 0x42u, guest::cpu()->r[3]);  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_005cbdc4
GUEST_EXPORT(0x005cbdc4, d_005cbdc4::f_005cbdc4);

// f_005cbe34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cbe34 {

struct __attribute__((packed)) Object_005cbe34_0 {
    u8 unknown_0[0x64];  // (not used here)
    u8 byte_64;
};
GUEST_OFFSET(Object_005cbe34_0, byte_64, 0x64);  // (from the original)

inline constexpr guest::Function<0x00613de4, u32(u32, u32, u32, u32)> call_00613de4;  // (from the original)

u32 f_005cbe34(gptr<Object_005cbe34_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    r0_1 = r0 + 0x34u;  // (from the original)
    arg0->byte_64 = u8(2u);
    return call_00613de4(r0_1, guest::cpu()->r[1], 2u, guest::cpu()->r[3]);
}

}  // namespace d_005cbe34
GUEST_EXPORT(0x005cbe34, d_005cbe34::f_005cbe34);

// f_005cbe84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cbe84 {

struct __attribute__((packed)) Object_005cbe84_0 {
    u8 unknown_0[0x270];  // (not used here)
    u8 byte_270;
};
GUEST_OFFSET(Object_005cbe84_0, byte_270, 0x270);  // (from the original)


void f_005cbe84(gptr<Object_005cbe84_0> arg0) {
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    r1_1 = u32(arg0->byte_270);
    if ((r1_1 & 7u) != 1u) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    r1_2 = r1_1 & ~7u | 2u;
    arg0->byte_270 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
    return;
}

}  // namespace d_005cbe84
GUEST_EXPORT(0x005cbe84, d_005cbe84::f_005cbe84);

// f_005cbee4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cbee4 {

inline constexpr guest::Function<0x001b4a8c, u32(u32, u32, u32, u32)> call_001b4a8c;  // (from the original)
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> call_002fbd54;  // (from the original)
inline constexpr guest::Function<0x00303770, u32(u32, u32, u32, u32)> call_00303770;  // (from the original)

u32 f_005cbee4(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = r1 & 0xffu;  // (from the original)
    r0_2 = call_00303770(r0_1, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_2 == 0) {
        goto L_5cbf2c;
    }
    r0_3 = r0_2 + 0x55a6u;  // (from the original)
    r0_2 = call_002fbd54(r0_3, r1_1, r2_1, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_2 == 0) {
        goto L_5cbf2c;
    }
    *gptr<u8>(r0 + 0x30u) = u8(1u);  // (from the original)
    r0_2 = call_001b4a8c(r0, r0_3, 1u, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
L_5cbf2c:;
    if (r2 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    r0_2 = call_002fb94c(r0_2, r1_1, r2_1, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    r1_2 = r0_2 + 0x8908u;  // (from the original)
    if (u32(*gptr<u8>(r0 + 0x30u)) == 6u) {  // (from the original)
        r0_4 = u32(*gptr<u8>(r1_2 + 0xc7u));  // (from the original)
        r1_2 = r1_2 + 0x42u;  // (from the original)
    } else {
        r0_4 = u32(*gptr<u8>(r1_2 + 0xc6u));  // (from the original)
    }
    *gptr<u8>(r0 + 0x26eu) = u8(r0_4);  // (from the original)
    r0_5 = r0 + 0x68u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_002f8574(r0_5, r1_2, 0x42u, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_005cbee4
GUEST_EXPORT(0x005cbee4, d_005cbee4::f_005cbee4);

// f_005cbf78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cbf78 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x0056d828, u32(u32, u32, u32, u32)> call_0056d828;  // (from the original)
inline constexpr guest::Function<0x005f1294, u32(u32, u32, u32, u32)> call_005f1294;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_005cbf78(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
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
    u32 r0_5 = 0;
    u32 r3_3 = 0;
    u32 res_1 = 0;
    u32 ea_1 = 0;
    u32 r3_4 = 0;
    u32 ea_2 = 0;
    u32 r3_5 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r0_6 = 0;
    r13 = r13 - 0x40u;  // (from the original)
    r7 = r1;
    r6 = r2;
    r0_1 = r13;
    r1_1 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_003083bc(r0_1, r1_1, 9u, r3);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r5 = 0x90a3e8u;  // (from the original)
    *gptr<u32>(r0_2) = u32(r5);
    r0_3 = r0_2 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_005f4bfc(r0_3, r1_2, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r4 = r0_4 - 0xcu;  // (from the original)
    r0_5 = r0_4 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_5, 0x12u, r2_2, r3_2);  // (from the original)
    r1 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    *gptr<u16>(r4 + 0x18u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    r2 = 4u;
    do {
L_5cbfc8:;
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
    call_0056d828(r4, r6, r2, r3_4);
    r3_5 = guest::cpu()->r[3];
    r1_3 = r13;
    guest::cpu()->r[13] = r13;
    call_005f1294(r7, r1_3, 0u, r3_5);
    r1_4 = guest::cpu()->r[1];
    *gptr<u32>(r13) = u32(r5);
    r0_6 = r13;
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return r0_6;
}

}  // namespace d_005cbf78
GUEST_EXPORT(0x005cbf78, d_005cbf78::f_005cbf78);

// f_005cc454: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cc454 {

struct __attribute__((packed)) Object_005cc454_0 {
    u8 unknown_0[0x30];  // (not used here)
    u8 byte_30;
};
GUEST_OFFSET(Object_005cc454_0, byte_30, 0x30);  // (from the original)


void f_005cc454(gptr<Object_005cc454_0> arg0) {
    u32 r1_1 = 0;
    r1_1 = u32(arg0->byte_30);
    if (r1_1 == 1u) {
        arg0->byte_30 = u8(3u);
        guest::cpu()->r[1] = 3u;
        return;
    }
    if (r1_1 == 2u) {
        arg0->byte_30 = u8(4u);
        guest::cpu()->r[1] = 4u;
        return;
    }
    if (r1_1 == 3u) {
        arg0->byte_30 = u8(3u);
        guest::cpu()->r[1] = 3u;
        return;
    }
    if (r1_1 != 4u) {
        arg0->byte_30 = u8(5u);
        guest::cpu()->r[1] = 5u;
        return;
    }
    arg0->byte_30 = u8(4u);
    guest::cpu()->r[1] = 4u;
    return;
}

}  // namespace d_005cc454
GUEST_EXPORT(0x005cc454, d_005cc454::f_005cc454);

// f_005cc524: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cc524 {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00311c70, u32(u32, u32, u32, u32)> call_00311c70;  // (from the original)

u32 f_005cc524(u32 r0, u32 r1) {
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
    u32 r1_7 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    call_002fbb30(r0, r1, 0x31u, guest::cpu()->r[3]);  // (from the original)
    r1_1 = r1 + 0x34u;  // (from the original)
    r0_1 = r0 + 0x34u;  // (from the original)
    call_002fbb30(r0_1, r1_1, 0x31u, guest::cpu()->r[3]);  // (from the original)
    r1_2 = r1 + 0x68u;  // (from the original)
    r0_2 = r0 + 0x68u;  // (from the original)
    call_002fbb30(r0_2, r1_2, 0x42u, guest::cpu()->r[3]);  // (from the original)
    r1_3 = r1 + 0xaau;  // (from the original)
    r0_3 = r0 + 0xaau;  // (from the original)
    call_002f8574(r0_3, r1_3, 0x182u, guest::cpu()->r[3]);  // (from the original)
    r1_4 = r1 + 0x22cu;  // (from the original)
    r0_4 = r0 + 0x22cu;  // (from the original)
    call_002fbb30(r0_4, r1_4, 0x42u, guest::cpu()->r[3]);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r1_5 = r1 + 0x274u;  // (from the original)
    *gptr<u8>(r0 + 0x26eu) = u8(u32(*gptr<u8>(r1 + 0x26eu)));  // (from the original)
    *gptr<u8>(r0 + 0x26fu) = u8(u32(*gptr<u8>(r1 + 0x26fu)));  // (from the original)
    *gptr<u8>(r0 + 0x270u) = u8(u32(*gptr<u8>(r1 + 0x270u)));  // (from the original)
    *gptr<u8>(r0 + 0x271u) = u8(u32(*gptr<u8>(r1 + 0x271u)));  // (from the original)
    *gptr<u8>(r0 + 0x272u) = u8(u32(*gptr<u8>(r1 + 0x272u)));  // (from the original)
    r0_5 = r0 + 0x274u;  // (from the original)
    call_002fc8e8(r0_5, r1_5, r2_1, guest::cpu()->r[3]);
    r2_2 = guest::cpu()->r[2];
    r1_6 = r1 + 0x278u;  // (from the original)
    r0_6 = r0 + 0x278u;  // (from the original)
    call_00311c70(r0_6, r1_6, r2_2, guest::cpu()->r[3]);
    r1_7 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_7;
    return r0;
}

}  // namespace d_005cc524
GUEST_EXPORT(0x005cc524, d_005cc524::f_005cc524);

// f_005cc82c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cc82c {

inline constexpr guest::Function<0x0027d310, u32(u32, u32, u32, u32)> call_0027d310;  // (from the original)

u32 f_005cc82c(u32 r0) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    call_0027d310(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_1 = ~0u;
    *gptr<u32>(r0 + 4u) = u32(r0_1);
    guest::cpu()->r[13] += 8u;
    return r0_1;
}

}  // namespace d_005cc82c
GUEST_EXPORT(0x005cc82c, d_005cc82c::f_005cc82c);

// f_005cc844: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cc844 {

inline guest::global<u8, 0x0094ddc4> global_0094ddc4;  // (from the original)
inline constexpr guest::Function<0x0010f16d, u32(u32, u32, u32, u32)> call_0010f16c;  // (from the original)
inline constexpr guest::Function<0x00116cf5, u32(u32, u32, u32, u32)> call_00116cf4;  // (from the original)
inline constexpr guest::Function<0x001e02f0, u32(u32, u32, u32, u32)> call_001e02f0;  // (from the original)
inline constexpr guest::Function<0x0020d8a4, u32(u32, u32, u32, u32)> call_0020d8a4;  // (from the original)
inline constexpr guest::Function<0x002267e4, u32(u32, u32, u32, u32)> call_002267e4;  // (from the original)
inline constexpr guest::Function<0x00241d34, u32(u32, u32, u32, u32)> call_00241d34;  // (from the original)
inline constexpr guest::Function<0x0027c2c8, u32(u32, u32, u32, u32)> call_0027c2c8;  // (from the original)
inline constexpr guest::Function<0x0027d310, u32(u32, u32, u32, u32)> call_0027d310;  // (from the original)
inline constexpr guest::Function<0x00284f90, u32(u32, u32, u32, u32)> call_00284f90;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x002fb918, u32(u32, u32, u32, u32)> call_002fb918;  // (from the original)
inline constexpr guest::Function<0x00300634, u32(u32, u32, u32, u32)> call_00300634;  // (from the original)
inline constexpr guest::Function<0x0030444c, u32(u32, u32, u32, u32)> call_0030444c;  // (from the original)
inline constexpr guest::Function<0x0051cd48, u32(u32, u32, u32, u32)> call_0051cd48;  // (from the original)
inline constexpr guest::Function<0x00582464, u32(u32, u32, u32, u32)> call_00582464;  // (from the original)
inline constexpr guest::Function<0x0058d52c, u32(u32, u32, u32, u32)> call_0058d52c;  // (from the original)
inline constexpr guest::Function<0x0058ecec, u32(u32, u32, u32, u32)> call_0058ecec;  // (from the original)
inline constexpr guest::Function<0x005bfbd4, u32(u32, u32, u32, u32)> call_005bfbd4;  // (from the original)
inline constexpr guest::Function<0x005cb1dc, u32(u32, u32, u32, u32)> call_005cb1dc;  // (from the original)
inline constexpr guest::Function<0x005cd05c, u32(u32, u32, u32, u32)> call_005cd05c;  // (from the original)
inline constexpr guest::Function<0x005d05b0, u32(u32, u32, u32, u32)> call_005d05b0;  // (from the original)
inline constexpr guest::Function<0x005d46dc, u32(u32, u32, u32, u32)> call_005d46dc;  // (from the original)
inline constexpr guest::Function<0x005d4788, u32(u32, u32, u32, u32)> call_005d4788;  // (from the original)
inline constexpr guest::Function<0x006a6408, u32(u32, u32, u32, u32)> call_006a6408;  // (from the original)
inline constexpr guest::Function<0x006bbeb8, u32(u32, u32, u32, u32)> call_006bbeb8;  // (from the original)

u32 f_005cc844(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_7 = 0;
    u32 r1_6 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_8 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r4_1 = 0;
    u32 r0_9 = 0;
    u32 r3_9 = 0;
    u32 r2_9 = 0;
    u32 r1_7 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_8 = 0;
    u32 r0_12 = 0;
    u32 r1_9 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r12_1 = 0;
    u32 r0_13 = 0;
    u32 r1_10 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r0_14 = 0;
    u32 r1_11 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r0_15 = 0;
    u32 r3_13 = 0;
    u32 r1_12 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r1_13 = 0;
    u32 r2_13 = 0;
    u32 r3_14 = 0;
    u32 r0_18 = 0;
    u32 r1_14 = 0;
    u32 r2_14 = 0;
    u32 r3_15 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r1_15 = 0;
    u32 r2_15 = 0;
    u32 r3_16 = 0;
    u32 r0_21 = 0;
    u32 r1_16 = 0;
    u32 r2_16 = 0;
    u32 r3_17 = 0;
    u32 r0_22 = 0;
    u32 r1_17 = 0;
    u32 r2_17 = 0;
    u32 r3_18 = 0;
    u32 r0_23 = 0;
    u32 r1_18 = 0;
    u32 r2_18 = 0;
    u32 r3_19 = 0;
    u32 r0_24 = 0;
    u32 r1_19 = 0;
    u32 r2_19 = 0;
    u32 r3_20 = 0;
    u32 r0_25 = 0;
    u32 r1_20 = 0;
    u32 r2_20 = 0;
    u32 r3_21 = 0;
    u32 r0_26 = 0;
    u32 r1_21 = 0;
    u32 r2_21 = 0;
    u32 r3_22 = 0;
    u32 r0_27 = 0;
    u32 r1_22 = 0;
    u32 r2_22 = 0;
    u32 r3_23 = 0;
    u32 r0_28 = 0;
    u32 r1_23 = 0;
    u32 r2_23 = 0;
    u32 r3_24 = 0;
    u32 r0_29 = 0;
    u32 r1_24 = 0;
    u32 r2_24 = 0;
    u32 r3_25 = 0;
    u32 r2_25 = 0;
    u32 r3_26 = 0;
    u32 r2_26 = 0;
    u32 r3_27 = 0;
    u32 r0_30 = 0;
    u32 r1_25 = 0;
    u32 r2_27 = 0;
    u32 r3_28 = 0;
    u32 r0_31 = 0;
    u32 r1_26 = 0;
    u32 r2_28 = 0;
    u32 r3_29 = 0;
    u32 r0_32 = 0;
    u32 r0_33 = 0;
    u32 r1_27 = 0;
    u32 r2_29 = 0;
    u32 r3_30 = 0;
    u32 r0_34 = 0;
    u32 r1_28 = 0;
    u32 r2_30 = 0;
    u32 r3_31 = 0;
    u32 r1_29 = 0;
    u32 r2_31 = 0;
    u32 r3_32 = 0;
    u32 r0_35 = 0;
    u32 r1_30 = 0;
    u32 r2_32 = 0;
    u32 r3_33 = 0;
    u32 r0_36 = 0;
    u32 r1_31 = 0;
    u32 r2_33 = 0;
    u32 r3_34 = 0;
    u32 r0_37 = 0;
    u32 r3_35 = 0;
    u32 r0_38 = 0;
    goto L_5cc844;
L_5cc844:;
    r13 = r13 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_0027d310(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fae84(r0_1, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_3 = r0_2 + 0x53400u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_0027c2c8(r0_3, 0u, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_5 = call_006a6408(r0_4, r1_2, r2_3, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_6 = call_00241d34(r0_5, r1_3, r2_4, r3_4);
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_005bfbd4(r0_6, r1_4, r2_5, r3_5);
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_7 = call_0030444c(0xa82000u, r1_5, r2_6, r3_6);  // (from the original)
    r1_6 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_8 = call_002fae84(r0_7, r1_6, r2_7, r3_7);
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r4_1 = r0_8 + 0x6214eu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_9 = call_005d46dc(r0_8, 0x6214eu, r2_8, r3_8);  // (from the original)
    r3_9 = guest::cpu()->r[3];
    r2_9 = r0_9 & 0xfu;  // (from the original)
    r1_7 = u32(*gptr<u8>(r4_1)) & ~0xfu | r2_9;  // (from the original)
    *gptr<u8>(r4_1) = u8(r1_7);
    guest::cpu()->r[13] = r13;
    r0_10 = call_005d4788(r0_9, r1_7, r2_9, r3_9);
    r0_11 = 0xf0u & r0_10 << 4 | u32(*gptr<u8>(r4_1)) & ~0xf0u;  // (from the original)
    *gptr<u8>(r4_1) = u8(r0_11);
    r1_8 = 0x88f2c4u + 0x2cu;  // (from the original)
    r0_12 = *gptr<u32>(0x88f2c4u + 0x3cu);  // (from the original)
    r1_9 = *gptr<u32>(r1_8);
    r2_10 = *gptr<u32>(r1_8 + 4);
    r3_10 = *gptr<u32>(r1_8 + 8);
    r12_1 = *gptr<u32>(r1_8 + 0xc);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r0_12);  // (from the original)
    *gptr<u32>(r13) = u32(r1_9);
    *gptr<u32>(r13 + 4) = u32(r2_10);
    *gptr<u32>(r13 + 8) = u32(r3_10);
    *gptr<u32>(r13 + 0xc) = u32(r12_1);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_13 = call_002fae84(r0_12, r1_9, r2_10, r3_10);
    r1_10 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    *gptr<u8>(r0_13 + 6u) = u8(0u);
    guest::cpu()->r[13] = r13;
    r0_14 = call_005d46dc(r0_13, r1_10, r2_11, r3_11);
    r1_11 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_15 = call_002fae84(r0_14, r1_11, r2_12, r3_12);
    r3_13 = guest::cpu()->r[3];
    r1_12 = r13;
    r0_16 = r0_15 + 0x62138u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_17 = call_006bbeb8(r0_16, r1_12, r0_14, r3_13);
    r1_13 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_18 = call_002fae84(r0_17, r1_13, r2_13, r3_14);
    r1_14 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r0_19 = r0_18 + 0x62120u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_20 = call_0020d8a4(r0_19, r1_14, r2_14, r3_15);
    r1_15 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_21 = call_002fae84(r0_20, r1_15, r2_15, r3_16);
    r1_16 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_22 = call_005cb1dc(r0_21, r1_16, r2_16, r3_17);
    r1_17 = guest::cpu()->r[1];
    r2_17 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_23 = call_002fb918(r0_22, r1_17, r2_17, r3_18);
    r1_18 = guest::cpu()->r[1];
    r2_18 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_24 = call_001e02f0(r0_23, r1_18, r2_18, r3_19);
    r1_19 = guest::cpu()->r[1];
    r2_19 = guest::cpu()->r[2];
    r3_20 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_25 = call_0051cd48(r0_24, r1_19, r2_19, r3_20);
    r1_20 = guest::cpu()->r[1];
    r2_20 = guest::cpu()->r[2];
    r3_21 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_26 = call_005d05b0(r0_25, r1_20, r2_20, r3_21);
    r1_21 = guest::cpu()->r[1];
    r2_21 = guest::cpu()->r[2];
    r3_22 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_27 = call_00284f90(r0_26, r1_21, r2_21, r3_22);
    r1_22 = guest::cpu()->r[1];
    r2_22 = guest::cpu()->r[2];
    r3_23 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_28 = call_0058d52c(r0_27, r1_22, r2_22, r3_23);
    r1_23 = guest::cpu()->r[1];
    r2_23 = guest::cpu()->r[2];
    r3_24 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_29 = call_002267e4(r0_28, r1_23, r2_23, r3_24);
    r1_24 = guest::cpu()->r[1];
    r2_24 = guest::cpu()->r[2];
    r3_25 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00582464(r0_29, r1_24, r2_24, r3_25);
    r2_25 = guest::cpu()->r[2];
    r3_26 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00300634(1u, 1u, r2_25, r3_26);
    r2_26 = guest::cpu()->r[2];
    r3_27 = guest::cpu()->r[3];
    *global_0094ddc4 = u8(4u);
    *gptr<u8>(0x94ddc4u + 1u) = u8(0u);  // (from the original)
    *gptr<u8>(0x94ddc4u + 2u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_30 = call_002fae84(0x94ddc4u, 4u, r2_26, r3_27);  // (from the original)
    r1_25 = guest::cpu()->r[1];
    r2_27 = guest::cpu()->r[2];
    r3_28 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_31 = call_002fb310(r0_30, r1_25, r2_27, r3_28);
    r1_26 = guest::cpu()->r[1];
    r2_28 = guest::cpu()->r[2];
    r3_29 = guest::cpu()->r[3];
    r0_32 = r0_31 + 4u;
    guest::cpu()->r[13] = r13;
    r0_33 = call_0010f16c(r0_32, r1_26, r2_28, r3_29);
    r1_27 = guest::cpu()->r[1];
    r2_29 = guest::cpu()->r[2];
    r3_30 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_34 = call_0058ecec(r0_33, r1_27, r2_29, r3_30);
    r1_28 = guest::cpu()->r[1];
    r2_30 = guest::cpu()->r[2];
    r3_31 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00116cf4(r0_34, r1_28, r2_30, r3_31);
    r1_29 = guest::cpu()->r[1];
    r2_31 = guest::cpu()->r[2];
    r3_32 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_35 = call_005cd05c(0x95c350u, r1_29, r2_31, r3_32);  // (from the original)
    r1_30 = guest::cpu()->r[1];
    r2_32 = guest::cpu()->r[2];
    r3_33 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_36 = call_002fae84(r0_35, r1_30, r2_32, r3_33);
    r1_31 = guest::cpu()->r[1];
    r2_33 = guest::cpu()->r[2];
    r3_34 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_37 = call_002fb310(r0_36, r1_31, r2_33, r3_34);
    r3_35 = guest::cpu()->r[3];
    r13 = r13 + 0x20u;  // (from the original)
    r0_38 = r0_37 + 4u;
    guest::cpu()->r[13] = r13;
    return guest::call_address<u32>(0x30ca59u, r0_38, 0u, 0u, r3_35);  // (from the original)
}

}  // namespace d_005cc844
GUEST_EXPORT(0x005cc844, d_005cc844::f_005cc844);

// f_005ccfc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ccfc4 {

inline constexpr guest::Function<0x001d3720, u32(u32, u32, u32, u32)> call_001d3720;  // (from the original)

u32 f_005ccfc4(u32 r0, u32 r1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r0);
    r0_1 = r13;
    *gptr<u32>(r13) = u32(0x8ebc9cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001d3720(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_2 = *gptr<u32>(r13 + 4u);
    *gptr<u32>(r13) = u32(0x8ebc9cu);  // (from the original)
    if (r0_2 == 0) {
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    *gptr<u32>(r0_2) = u32(0u);
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r0_2;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_005ccfc4
GUEST_EXPORT(0x005ccfc4, d_005ccfc4::f_005ccfc4);

// f_005cd05c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cd05c {

inline constexpr guest::Function<0x0010e9a9, u32(u32, u32, u32, u32)> call_0010e9a8;  // (from the original)
inline constexpr guest::Function<0x00114489, u32(u32, u32, u32, u32)> call_00114488;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)

u32 f_005cd05c(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r0_9 = 0;
    u32 r1_6 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002fae84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = r0_1 + 0x621d0u;  // (from the original)
    r0_3 = call_00114488(r0_2, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_4 = call_002fae84(r0_3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_5 = call_002fb310(r0_4, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r0_6 = r0_5 + 4u;
    r0_7 = call_0010e9a8(r0_6, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r0_8 = call_002fb94c(r0_7, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    if (r0_8 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_5;
        return r0_8;
    }
    r0_9 = r0_8 + 0x5700u;  // (from the original)
    r1_6 = u32(*gptr<u8>(r0_9 + 0xau)) | 2u;  // (from the original)
    *gptr<u8>(r0_9 + 0xau) = u8(r1_6);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_6;
    return r0_9;
}

}  // namespace d_005cd05c
GUEST_EXPORT(0x005cd05c, d_005cd05c::f_005cd05c);

// f_005cd0a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cd0a4 {

inline constexpr guest::Function<0x0028ff00, u32(u32, u32, u32, u32)> call_0028ff00;  // (from the original)
inline constexpr guest::Function<0x00304c68, u32(u32, u32, u32, u32)> call_00304c68;  // (from the original)

u32 f_005cd0a4(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    *gptr<u8>(0x95c33cu + 1u) = u8(1u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0028ff00(0x95c33cu, r1, r2, r3);  // (from the original)
    *gptr<u32>(r13) = u32(1u);
    guest::cpu()->r[13] = r13;
    r0_1 = call_00304c68(0x61u, 0u, 0u, 1u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_005cd0a4
GUEST_EXPORT(0x005cd0a4, d_005cd0a4::f_005cd0a4);

// f_005cd270: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cd270 {

struct __attribute__((packed)) Object_005cd270_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_005cd270_0, word_0, 0x0);  // (from the original)

inline guest::global<u32, 0x00ad5638> global_00ad5638;  // (from the original)
inline constexpr guest::Function<0x004dbc3c, u32(u32, u32, u32, u32)> call_004dbc3c;  // (from the original)

u32 f_005cd270(gptr<Object_005cd270_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 ea_1 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r0_1 = arg0->word_0;
    if (r0_1 == 0) {
        goto L_5cd2b4;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_004dbc3c(r0_1, r1, r2, r3);
    if (r0_2 != 0) {
        goto L_5cd2b4;
    }
    r0_3 = *gptr<u32>(r0);
    r1_1 = *gptr<u32>(r0_3 + 4u);
    if (r1_1 != 0) {
        *gptr<u32>(r1_1) = u32(0u);
    }
    *global_00ad5638 = u32(r0_3);
    *gptr<u32>(r0_3 + 4u) = u32(0xad5638u);  // (from the original)
    *gptr<u32>(r0) = u32(0u);
L_5cd2b4:;
    ea_1 = r0 + 8u;
    *gptr<u32>(ea_1) = u32(0x800000u);  // (from the original)
    *gptr<u32>(ea_1 + 4) = u32(0u);
    *gptr<u32>(ea_1 + 8) = u32(0u);
    *gptr<u32>(r0 + 0x14u) = u32(0u);  // (from the original)
    *gptr<u32>(r0 + 0x18u) = u32(0u);  // (from the original)
    *gptr<u32>(r0 + 0x1cu) = u32(0u);  // (from the original)
    *gptr<u32>(r0 + 0x20u) = u32(0u);  // (from the original)
    *gptr<u32>(r0 + 0x24u) = u32(0u);  // (from the original)
    *gptr<u32>(r0 + 0x28u) = u32(0u);  // (from the original)
    *gptr<u32>(r0 + 0x2cu) = u32(0u);  // (from the original)
    *gptr<u8>(r0 + 0x30u) = u8(0u);  // (from the original)
    *gptr<u32>(r0 + 0x34u) = u32(~0u);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = 0u;
    guest::cpu()->r[13] = r13;
    return 0x800000u;  // (from the original)
}

}  // namespace d_005cd270
GUEST_EXPORT(0x005cd270, d_005cd270::f_005cd270);

// f_005cd2f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cd2f4 {

inline constexpr guest::Function<0x001b979c, u32(u32, u32, u32, u32)> call_001b979c;  // (from the original)

u32 f_005cd2f4() {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = *gptr<u32>(0x95c33cu + 0xcu);  // (from the original)
    if (r0_1 != 0) {
        guest::cpu()->r[13] += 8u;
        return r0_1;
    }
    call_001b979c(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(0x95c33cu + 2u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return 0u;
}

}  // namespace d_005cd2f4
GUEST_EXPORT(0x005cd2f4, d_005cd2f4::f_005cd2f4);

// f_005cd754: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cd754 {

inline constexpr guest::Function<0x00106bb1, u32(u32, u32, u32, u32)> call_00106bb0;  // (from the original)
inline constexpr guest::Function<0x00108449, u32(u32, u32, u32, u32)> call_00108448;  // (from the original)
inline constexpr guest::Function<0x00108a9d, u32(u32, u32, u32, u32)> call_00108a9c;  // (from the original)
inline constexpr guest::Function<0x00108b59, u32(u32, u32, u32, u32)> call_00108b58;  // (from the original)
inline constexpr guest::Function<0x00109615, u32(u32, u32, u32, u32)> call_00109614;  // (from the original)
inline constexpr guest::Function<0x00109ff9, u32(u32, u32, u32, u32)> call_00109ff8;  // (from the original)
inline constexpr guest::Function<0x0010a401, u32(u32, u32, u32, u32)> call_0010a400;  // (from the original)
inline constexpr guest::Function<0x0010a4a9, u32(u32, u32, u32, u32)> call_0010a4a8;  // (from the original)
inline constexpr guest::Function<0x0010a801, u32(u32, u32, u32, u32)> call_0010a800;  // (from the original)
inline constexpr guest::Function<0x0010ab2d, u32(u32, u32, u32, u32)> call_0010ab2c;  // (from the original)
inline constexpr guest::Function<0x0010af61, u32(u32, u32, u32, u32)> call_0010af60;  // (from the original)
inline constexpr guest::Function<0x0010b1e5, u32(u32, u32, u32, u32)> call_0010b1e4;  // (from the original)
inline constexpr guest::Function<0x0010b391, u32(u32, u32, u32, u32)> call_0010b390;  // (from the original)
inline constexpr guest::Function<0x0010b43d, u32(u32, u32, u32, u32)> call_0010b43c;  // (from the original)
inline constexpr guest::Function<0x0010b6d1, u32(u32, u32, u32, u32)> call_0010b6d0;  // (from the original)
inline constexpr guest::Function<0x0020d06c, u32(u32, u32, u32, u32)> call_0020d06c;  // (from the original)
inline constexpr guest::Function<0x0020d328, u32(u32, u32, u32, u32)> call_0020d328;  // (from the original)
inline constexpr guest::Function<0x002a7ad0, u32(u32, u32, u32, u32)> call_002a7ad0;  // (from the original)
inline constexpr guest::Function<0x003142b8, u32(u32, u32, u32, u32)> call_003142b8;  // (from the original)

u32 f_005cd754(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    u32 r0_4 = 0;
    u32 r1_5 = 0;
    u32 r0_5 = 0;
    u32 r1_6 = 0;
    u32 r0_6 = 0;
    u32 r1_7 = 0;
    u32 r0_7 = 0;
    u32 r1_8 = 0;
    u32 r0_8 = 0;
    u32 r1_9 = 0;
    u32 r0_9 = 0;
    u32 r1_10 = 0;
    u32 r0_10 = 0;
    u32 r1_11 = 0;
    u32 r0_11 = 0;
    u32 r1_12 = 0;
    u32 r0_12 = 0;
    u32 r1_13 = 0;
    u32 r0_13 = 0;
    u32 r1_14 = 0;
    u32 r0_14 = 0;
    u32 r1_15 = 0;
    u32 r0_15 = 0;
    u32 r1_16 = 0;
    u32 r0_16 = 0;
    u32 r1_17 = 0;
    u32 r0_17 = 0;
    u32 r1_18 = 0;
    u32 r0_18 = 0;
    u32 r1_19 = 0;
    u32 r1_20 = 0;
    guest::cpu()->r[13] -= 8u;
    call_00109614(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_1 = r0 + 0x8b78u;  // (from the original)
    call_003142b8(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_2 = r0 + 0x9cu;  // (from the original)
    call_00109ff8(r0_2, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r0_3 = r0 + 0x4468u;  // (from the original)
    call_002a7ad0(r0_3, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r0_4 = r0 + 0x4494u;  // (from the original)
    call_0010b390(r0_4, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r0_5 = r0 + 0x44e0u;  // (from the original)
    call_0010a800(r0_5, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    r0_6 = r0 + 0x45ccu;  // (from the original)
    call_00108b58(r0_6, r1_6, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_7 = guest::cpu()->r[1];
    r0_7 = r0 + 0x45fcu;  // (from the original)
    call_0020d328(r0_7, r1_7, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_8 = guest::cpu()->r[1];
    r0_8 = r0 + 0x4650u;  // (from the original)
    call_0010ab2c(r0_8, r1_8, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_9 = guest::cpu()->r[1];
    r0_9 = r0 + 0x8a6cu;  // (from the original)
    call_0010af60(r0_9, r1_9, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_10 = guest::cpu()->r[1];
    r0_10 = r0 + 0x8a7eu;  // (from the original)
    call_0010b6d0(r0_10, r1_10, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_11 = guest::cpu()->r[1];
    r0_11 = r0 + 0x8aa6u;  // (from the original)
    call_00108a9c(r0_11, r1_11, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_12 = guest::cpu()->r[1];
    r0_12 = r0 + 0x8b32u;  // (from the original)
    call_0010a400(r0_12, r1_12, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_13 = guest::cpu()->r[1];
    r0_13 = r0 + 0x8b52u;  // (from the original)
    call_00108448(r0_13, r1_13, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_14 = guest::cpu()->r[1];
    r0_14 = r0 + 0x8b54u;  // (from the original)
    call_0010a4a8(r0_14, r1_14, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_15 = guest::cpu()->r[1];
    r0_15 = r0 + 0x8b60u;  // (from the original)
    call_0010b43c(r0_15, r1_15, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_16 = guest::cpu()->r[1];
    r0_16 = r0 + 0x8b68u;  // (from the original)
    call_0020d06c(r0_16, r1_16, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_17 = guest::cpu()->r[1];
    r0_17 = r0 + 0x8bf8u;  // (from the original)
    call_0010b1e4(r0_17, r1_17, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_18 = guest::cpu()->r[1];
    r0_18 = r0 + 0x8c04u;  // (from the original)
    call_00106bb0(r0_18, r1_18, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_19 = r0 + 0x8c20u;  // (from the original)
    *gptr<u16>(r1_19) = u16(0u);
    *gptr<u8>(r1_19 + 2u) = u8(0u);
    *gptr<u8>(r1_19 + 3u) = u8(0u);
    *gptr<u32>(0x8c24u + r0) = u32(0u);  // (from the original)
    r1_20 = r0 + 0x8c00u;  // (from the original)
    *gptr<u32>(r1_20 + 0x28u) = u32(0u);  // (from the original)
    *gptr<u32>(r1_20 + 0x2cu) = u32(0u);  // (from the original)
    *gptr<u32>(r1_20 + 0x30u) = u32(0u);  // (from the original)
    *gptr<u32>(r1_20 + 0x34u) = u32(0u);  // (from the original)
    *gptr<u32>(r1_20 + 0x38u) = u32(0u);  // (from the original)
    *gptr<u32>(r1_20 + 0x3cu) = u32(0u);  // (from the original)
    *gptr<u32>(r1_20 + 0x40u) = u32(0u);  // (from the original)
    *gptr<u32>(r1_20 + 0x44u) = u32(0u);  // (from the original)
    *gptr<u32>(r1_20 + 0x48u) = u32(0u);  // (from the original)
    *gptr<u32>(r1_20 + 0x4cu) = u32(0u);  // (from the original)
    *gptr<u32>(r1_20 + 0x50u) = u32(0u);  // (from the original)
    *gptr<u32>(r1_20 + 0x54u) = u32(0u);  // (from the original)
    *gptr<u32>(r1_20 + 0x58u) = u32(0u);  // (from the original)
    *gptr<u32>(r1_20 + 0x5cu) = u32(0u);  // (from the original)
    *gptr<u32>(r1_20 + 0x60u) = u32(0u);  // (from the original)
    *gptr<u32>(r1_20 + 0x64u) = u32(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_20;
    return 0u;
}

}  // namespace d_005cd754
GUEST_EXPORT(0x005cd754, d_005cd754::f_005cd754);

// f_005cd8a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cd8a0 {

inline constexpr guest::Function<0x0024ea1c, u32(u32, u32, u32, u32)> call_0024ea1c;  // (from the original)
inline constexpr guest::Function<0x003026e8, u32(u32, u32, u32, u32)> call_003026e8;  // (from the original)
inline constexpr guest::Function<0x00718378, u32(u32, u32, u32, u32)> call_00718378;  // (from the original)

u32 f_005cd8a0(u32 r0, u32 r1) {
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
    u32 r7_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r5_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r9_1 = 0;
    u32 zf_1 = 0;
    u32 r0_7 = 0;
    u32 r1_1 = 0;
    u32 ea_2 = 0;
    u32 r0_8 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 r4_1 = 0;
    u32 r5_2 = 0;
    u32 r6_1 = 0;
    u32 r7_2 = 0;
    u32 r8_1 = 0;
    u32 r9_2 = 0;
    u32 r10_1 = 0;
    u32 r11_1 = 0;
    u32 ea_5 = 0;
    u32 r4_2 = 0;
    u32 r5_3 = 0;
    u32 r6_2 = 0;
    u32 r7_3 = 0;
    u32 r8_2 = 0;
    u32 r9_3 = 0;
    u32 r10_2 = 0;
    u32 r11_2 = 0;
    u32 ea_6 = 0;
    u32 r4_3 = 0;
    u32 r5_4 = 0;
    u32 r6_3 = 0;
    u32 r7_4 = 0;
    u32 r8_3 = 0;
    u32 r9_4 = 0;
    u32 r10_3 = 0;
    u32 r11_3 = 0;
    if (r1 >= 4u) {
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
    ea_1 = r13 - 0x28;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r9);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r10);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r11);  // (from the original)
    *gptr<u32>(ea_1 + 0x20) = u32(r12);  // (from the original)
    *gptr<u32>(ea_1 + 0x24) = u32(r14);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r6 = r0;
    r5 = 0u;
    if (r1 == 0) {
        goto L_5cd8dc;
    }
    if (r1 == 1u) {
        r5 = 1u;
        goto L_5cd8dc;
    }
    if (r1 == 2u) {
        r5 = 2u;
        goto L_5cd8dc;
    }
    if (r1 == 3u) {
        r5 = 3u;
    }
L_5cd8dc:;
    r4 = 0u;
L_5cd8e0:;
    if (r4 >= 0x38u) {  // (from the original)
        r7_1 = r6 + 8u;
    } else {
        r7_1 = r6 + (r4 << 2) + 8u;
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_00718378(r7_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        goto L_5cd9b4;
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_003026e8(r7_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 != r5) {
        goto L_5cd9b4;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_003026e8(r7_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r8 = r0_2;
    r10 = u32(*gptr<u8>(r7_1 + 2u));
    r11 = u32(*gptr<u8>(r7_1 + 3u));
    r4 = 0u;
L_5cd940:;
    r5_1 = r6 + (r4 << 2);
    r0_3 = r5_1 + 8u;
    guest::cpu()->r[13] = r13;
    r0_4 = call_00718378(r0_3, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_4 != 0) {
        goto L_5cd9a4;
    }
    r0_5 = r5_1 + 8u;
    guest::cpu()->r[13] = r13;
    r0_6 = call_003026e8(r0_5, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r9_1 = u32(*gptr<u8>(r5_1 + 0xau));  // (from the original)
    r0_4 = u32(*gptr<u8>(r5_1 + 0xbu));  // (from the original)
    zf_1 = r0_6 == r8;
    if (zf_1) {
        zf_1 = r9_1 == r10;
    }
    if (zf_1) {
        zf_1 = r0_4 == r11;
    }
    if (!zf_1) {
        goto L_5cd9a4;
    }
    r0_7 = r6 + (r4 << 2) + 8u;
    guest::cpu()->r[13] = r13;
    call_0024ea1c(r0_7, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    ea_2 = r6 + 4u;
    r0_8 = u32(*gptr<u8>(ea_2)) - 1u;
    ea_3 = r6 + 4u;
    *gptr<u8>(ea_3) = u8(r0_8);
    ea_4 = r13;
    r13 = r13 + 0x28;  // (from the original)
    r4_1 = *gptr<u32>(ea_4);
    r5_2 = *gptr<u32>(ea_4 + 4);
    r6_1 = *gptr<u32>(ea_4 + 8);
    r7_2 = *gptr<u32>(ea_4 + 0xc);  // (from the original)
    r8_1 = *gptr<u32>(ea_4 + 0x10);  // (from the original)
    r9_2 = *gptr<u32>(ea_4 + 0x14);  // (from the original)
    r10_1 = *gptr<u32>(ea_4 + 0x18);  // (from the original)
    r11_1 = *gptr<u32>(ea_4 + 0x1c);  // (from the original)
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_2;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
    guest::cpu()->r[13] = r13;
    return r0_8;
L_5cd9a4:;
    r4 = r4 + 1u;
    if (r4 < 0x38u) {  // (from the original)
        guest::preempt();
        goto L_5cd940;
    }
    ea_5 = r13;
    r13 = r13 + 0x28;  // (from the original)
    r4_2 = *gptr<u32>(ea_5);
    r5_3 = *gptr<u32>(ea_5 + 4);
    r6_2 = *gptr<u32>(ea_5 + 8);
    r7_3 = *gptr<u32>(ea_5 + 0xc);  // (from the original)
    r8_2 = *gptr<u32>(ea_5 + 0x10);  // (from the original)
    r9_3 = *gptr<u32>(ea_5 + 0x14);  // (from the original)
    r10_2 = *gptr<u32>(ea_5 + 0x18);  // (from the original)
    r11_2 = *gptr<u32>(ea_5 + 0x1c);  // (from the original)
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_3;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_3;
    guest::cpu()->r[8] = r8_2;
    guest::cpu()->r[9] = r9_3;
    guest::cpu()->r[10] = r10_2;
    guest::cpu()->r[11] = r11_2;
    guest::cpu()->r[13] = r13;
    return r0_4;
L_5cd9b4:;
    r4 = r4 + 1u;
    if (r4 < 0x38u) {  // (from the original)
        guest::preempt();
        goto L_5cd8e0;
    }
    ea_6 = r13;
    r13 = r13 + 0x28;  // (from the original)
    r4_3 = *gptr<u32>(ea_6);
    r5_4 = *gptr<u32>(ea_6 + 4);
    r6_3 = *gptr<u32>(ea_6 + 8);
    r7_4 = *gptr<u32>(ea_6 + 0xc);  // (from the original)
    r8_3 = *gptr<u32>(ea_6 + 0x10);  // (from the original)
    r9_4 = *gptr<u32>(ea_6 + 0x14);  // (from the original)
    r10_3 = *gptr<u32>(ea_6 + 0x18);  // (from the original)
    r11_3 = *gptr<u32>(ea_6 + 0x1c);  // (from the original)
    guest::cpu()->r[4] = r4_3;
    guest::cpu()->r[5] = r5_4;
    guest::cpu()->r[6] = r6_3;
    guest::cpu()->r[7] = r7_4;
    guest::cpu()->r[8] = r8_3;
    guest::cpu()->r[9] = r9_4;
    guest::cpu()->r[10] = r10_3;
    guest::cpu()->r[11] = r11_3;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_005cd8a0
GUEST_EXPORT(0x005cd8a0, d_005cd8a0::f_005cd8a0);

// f_005cda08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cda08 {

inline constexpr guest::Function<0x0024ea1c, u32(u32, u32, u32, u32)> call_0024ea1c;  // (from the original)

u32 f_005cda08(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r4 = 0u;
    do {
L_5cda14:;
        r0_1 = r5 + (r4 << 2) + 0xe8u;  // (from the original)
        call_0024ea1c(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 2u);
    *gptr<u8>(r5 + 5u) = u8(0u);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return 1u;
}

}  // namespace d_005cda08
GUEST_EXPORT(0x005cda08, d_005cda08::f_005cda08);

// f_005cda44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cda44 {

inline constexpr guest::Function<0x0024e9d8, u32(u32, u32, u32, u32)> call_0024e9d8;  // (from the original)
inline constexpr guest::Function<0x00718378, u32(u32, u32, u32, u32)> call_00718378;  // (from the original)

u32 f_005cda44(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r5 = r0;
    r6 = r1;
    r7 = r2;
    r8 = r3;
    r4 = 0u;
    do {
L_5cda5c:;
        r0_1 = r5 + (r4 << 2) + 8u;
        r0_2 = call_00718378(r0_1, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0_2 == 0)) {
            r0_3 = r5 + (r4 << 2) + 8u;
            call_0024e9d8(r0_3, r6, r7, r8);
            r1_1 = guest::cpu()->r[1];
            *gptr<u8>(r5 + 4u) = u8(u32(*gptr<u8>(r5 + 4u)) + 1u);
            guest::cpu()->r[13] += 0x18u;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            return r4;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0x38u);  // (from the original)
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_005cda44
GUEST_EXPORT(0x005cda44, d_005cda44::f_005cda44);

// f_005cdab4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cdab4 {

inline constexpr guest::Function<0x0024e9d8, u32(u32, u32, u32, u32)> call_0024e9d8;  // (from the original)
inline constexpr guest::Function<0x00718378, u32(u32, u32, u32, u32)> call_00718378;  // (from the original)

u32 f_005cdab4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r5 = r0;
    r6 = r1;
    r7 = r2;
    r8 = r3;
    r4 = 0u;
    do {
L_5cdacc:;
        r0_1 = r5 + (r4 << 2) + 0xe8u;  // (from the original)
        r0_2 = call_00718378(r0_1, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0_2 == 0)) {
            r0_3 = r5 + (r4 << 2) + 0xe8u;  // (from the original)
            call_0024e9d8(r0_3, r6, r7, r8);
            r1_1 = guest::cpu()->r[1];
            *gptr<u8>(r5 + 5u) = u8(u32(*gptr<u8>(r5 + 5u)) + 1u);
            guest::cpu()->r[13] += 0x18u;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            return r4;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 2u);
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_005cdab4
GUEST_EXPORT(0x005cdab4, d_005cdab4::f_005cdab4);

// f_005cdb24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cdb24 {

inline constexpr guest::Function<0x0024ea1c, u32(u32, u32, u32, u32)> call_0024ea1c;  // (from the original)
inline constexpr guest::Function<0x003026e8, u32(u32, u32, u32, u32)> call_003026e8;  // (from the original)
inline constexpr guest::Function<0x00718378, u32(u32, u32, u32, u32)> call_00718378;  // (from the original)

u32 f_005cdb24(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r9 = guest::cpu()->r[9];
    u32 r11 = guest::cpu()->r[11];
    u32 r12 = guest::cpu()->r[12];
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r10_1 = 0;
    u32 r0_5 = 0;
    u32 zf_1 = 0;
    u32 r0_6 = 0;
    u32 r1_1 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r12);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r6 = r0;
    r7 = r1;
    r9 = r2;
    r11 = r3;
    r4 = 0u;
L_5cdb3c:;
    r5_1 = r6 + (r4 << 2);
    r0_1 = r5_1 + 8u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_00718378(r0_1, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        goto L_5cdba4;
    }
    r0_3 = r5_1 + 8u;
    guest::cpu()->r[13] = r13;
    r0_4 = call_003026e8(r0_3, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r10_1 = u32(*gptr<u8>(r5_1 + 0xau));  // (from the original)
    r0_5 = u32(*gptr<u8>(r5_1 + 0xbu));  // (from the original)
    zf_1 = r0_4 == r7;
    if (zf_1) {
        zf_1 = r10_1 == r9;
    }
    if (zf_1) {
        zf_1 = r0_5 == r11;
    }
    if (!zf_1) {
        goto L_5cdba4;
    }
    r0_6 = r6 + (r4 << 2) + 8u;
    guest::cpu()->r[13] = r13;
    call_0024ea1c(r0_6, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    *gptr<u8>(r6 + 4u) = u8(u32(*gptr<u8>(r6 + 4u)) - 1u);
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[13] = r13;
    return 1u;
L_5cdba4:;
    r4 = r4 + 1u;
    if (r4 < 0x38u) {  // (from the original)
        guest::preempt();
        goto L_5cdb3c;
    }
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_005cdb24
GUEST_EXPORT(0x005cdb24, d_005cdb24::f_005cdb24);

// f_005cdbb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cdbb8 {

struct __attribute__((packed)) Object_005cdbb8_0 {
    u8 unknown_0[0x6];  // (not used here)
    u8 byte_6;
};
GUEST_OFFSET(Object_005cdbb8_0, byte_6, 0x6);  // (from the original)

inline constexpr guest::Function<0x0027a060, u32(u32, u32, u32, u32)> call_0027a060;  // (from the original)

u32 f_005cdbb8(gptr<Object_005cdbb8_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    arg0->byte_6 = u8(0u);
    r0_1 = r0 + 0xf0u;  // (from the original)
    call_0027a060(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = r0 + 0x44b0u;  // (from the original)
    r1_1 = r0 + 0x44b4u;  // (from the original)
    *gptr<u32>(r0_2) = u32(0u);
    *gptr<u32>(r1_1) = u32(0u);
    *gptr<u32>(r0 + 0x44b8u) = u32(0u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_005cdbb8
GUEST_EXPORT(0x005cdbb8, d_005cdbb8::f_005cdbb8);

// f_005cdbf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cdbf8 {

struct __attribute__((packed)) Object_005cdbf8_0 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 byte_5;
};
GUEST_OFFSET(Object_005cdbf8_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005cdbf8_0, byte_5, 0x5);  // (from the original)

inline constexpr guest::Function<0x0024ea1c, u32(u32, u32, u32, u32)> call_0024ea1c;  // (from the original)
inline constexpr guest::Function<0x0027a0a0, u32(u32, u32, u32, u32)> call_0027a0a0;  // (from the original)

u32 f_005cdbf8(gptr<Object_005cdbf8_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r6 = 0u;
    arg0->byte_4 = u8(r6);
    r5 = r0;
    r4 = r6;
    arg0->byte_5 = u8(r6);
    do {
L_5cdc10:;
        r0_1 = r5 + (r4 << 2) + 8u;
        call_0024ea1c(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0x38u);  // (from the original)
    r4 = 0u;
    do {
L_5cdc2c:;
        r0_2 = r5 + (r4 << 2) + 0xe8u;  // (from the original)
        call_0024ea1c(r0_2, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 2u);
    r0_3 = r5 + 0xf0u;  // (from the original)
    *gptr<u8>(r5 + 6u) = u8(r6);
    call_0027a0a0(r0_3, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_4 = r5 + 0x44b0u;  // (from the original)
    r1_1 = r5 + 0x44b4u;  // (from the original)
    *gptr<u32>(r0_4) = u32(r6);
    *gptr<u32>(r1_1) = u32(r6);
    *gptr<u32>(r5 + 0x44b8u) = u32(r6);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_4;
}

}  // namespace d_005cdbf8
GUEST_EXPORT(0x005cdbf8, d_005cdbf8::f_005cdbf8);

// f_005cdd70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cdd70 {

inline constexpr guest::Function<0x0027a31c, u32(u32, u32, u32, u32)> call_0027a31c;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_005cdd70(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 r0_7 = 0;
    r0_1 = r0 + 8u;
    guest::cpu()->r[13] -= 8u;
    r0_2 = call_00301d0c(r0_1, 0x24ea34u, 4u, 0x38u);  // (from the original)
    r0_3 = r0_2 + 0xe0u;  // (from the original)
    r0_4 = call_00301d0c(r0_3, 0x24ea34u, 4u, 2u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_5 = r0_4 + 8u;
    r0_6 = call_0027a31c(r0_5, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r0_7 = r0_6 - 0xf0u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return r0_7;
}

}  // namespace d_005cdd70
GUEST_EXPORT(0x005cdd70, d_005cdd70::f_005cdd70);

// f_005cdde8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cdde8 {

inline constexpr guest::Function<0x003081b4, u32(u32, u32, u32, u32)> call_003081b4;  // (from the original)
inline constexpr guest::Function<0x0056ca10, u32(u32, u32, u32, u32)> call_0056ca10;  // (from the original)
inline constexpr guest::Function<0x00759664, u32(u32, u32, u32, u32)> call_00759664;  // (from the original)
inline constexpr guest::Function<0x007795ac, u32(u32, u32, u32, u32)> call_007795ac;  // (from the original)

u32 f_005cdde8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 ea_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00759664(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4u) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_2 = call_0056ca10(r0_1, r1_1, r1, 0u);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    ea_1 = r13 + 8u;
    *gptr<u32>(ea_1) = u32(r0_2);
    *gptr<u32>(ea_1 + 4) = u32(r1_2);
    guest::cpu()->r[13] = r13;
    call_007795ac(r0, r1_2, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r1_3 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_3 = call_003081b4(r0, r1_3, r2_2, r3_2);
    r1_4 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_005cdde8
GUEST_EXPORT(0x005cdde8, d_005cdde8::f_005cdde8);

// f_005cdfd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cdfd0 {


u32 f_005cdfd0(u32 r0) {
    u32 r0_1 = 0;
    if (r0 >= 0xffu) {  // (from the original)
        r0 = 0u;
    }
    r0_1 = u32(*gptr<u8>(0x890554u + r0));  // (from the original)
    guest::cpu()->r[1] = 0x890554u;  // (from the original)
    return r0_1;
}

}  // namespace d_005cdfd0
GUEST_EXPORT(0x005cdfd0, d_005cdfd0::f_005cdfd0);

// f_005ce114: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ce114 {


u32 f_005ce114(u32 r0) {
    u32 r0_1 = 0;
    if (r0 >= 0xffu) {  // (from the original)
        r0 = 0u;
    }
    r0_1 = u32(*gptr<u8>(0x95dc1bu + r0));  // (from the original)
    guest::cpu()->r[1] = 0x95dc1bu;  // (from the original)
    return r0_1;
}

}  // namespace d_005ce114
GUEST_EXPORT(0x005ce114, d_005ce114::f_005ce114);

// f_005ce2b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ce2b8 {


u32 f_005ce2b8(u32 r0) {
    u32 r0_1 = 0;
    if (r0 >= 0xffu) {  // (from the original)
        r0 = 0u;
    }
    r0_1 = u32(*gptr<u8>(0x95d81fu + r0));  // (from the original)
    guest::cpu()->r[1] = 0x95d81fu;  // (from the original)
    return r0_1;
}

}  // namespace d_005ce2b8
GUEST_EXPORT(0x005ce2b8, d_005ce2b8::f_005ce2b8);

// f_005ce32c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ce32c {

inline constexpr guest::Function<0x006c5a88, u32(u32, u32, u32, u32)> call_006c5a88;  // (from the original)

u32 f_005ce32c(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_006c5a88(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    if (r0_1 >= 0xffu) {  // (from the original)
        r0_1 = 0u;
    }
    r0_2 = u32(s32(s8(*gptr<u8>(0x95d720u + r0_1))));  // (from the original)
    guest::cpu()->r[1] = 0x95d720u;  // (from the original)
    return r0_2;
}

}  // namespace d_005ce32c
GUEST_EXPORT(0x005ce32c, d_005ce32c::f_005ce32c);

// f_005ce368: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ce368 {

inline guest::global<u32, 0x0094e3c8> global_0094e3c8;  // (from the original)

u32 f_005ce368() {
    u32 r0_1 = 0;
    r0_1 = u32(s32(s8(*gptr<u8>(*global_0094e3c8 + 0xfadu))));  // (from the original)
    return r0_1;
}

}  // namespace d_005ce368
GUEST_EXPORT(0x005ce368, d_005ce368::f_005ce368);

// f_005ce568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ce568 {

inline guest::global<u32, 0x0094e3c8> global_0094e3c8;  // (from the original)

u32 f_005ce568() {
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r1_2 = 0;
    r2_1 = *global_0094e3c8;
    r1_1 = *gptr<u32>(r2_1 + 0x1cu);  // (from the original)
    r0_1 = *gptr<u32>(*global_0094e3c8 + 0x20u);  // (from the original)
    if (r1_1 == 0) {
        if ((r0_1 & 1u) == 0) {
            guest::cpu()->r[1] = r1_1;
            return r0_1;
        }
        if (r0_1 == 0) {
            guest::cpu()->r[1] = r1_1;
            return r0_1;
        }
    }
    zf_1 = (r0_1 & 1u) == 0;
    r0_2 = r2_1 + u32(s32(r0_1) >> 1);
    if (zf_1) {
        return guest::call_address<u32>(r1_1, r0_2, r1_1, r2_1, guest::cpu()->r[3]);
    }
    r2_2 = *gptr<u32>(r0_2);
    r1_2 = *gptr<u32>(r2_2 + r1_1);
    return guest::call_address<u32>(r1_2, r0_2, r1_2, r2_2, guest::cpu()->r[3]);
}

}  // namespace d_005ce568
GUEST_EXPORT(0x005ce568, d_005ce568::f_005ce568);

// f_005cebe4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cebe4 {

inline constexpr guest::Function<0x0011edd8, u32(u32, u32, u32, u32)> call_0011edd8;  // (from the original)

u32 f_005cebe4() {
    return call_0011edd8(0xac1930u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_005cebe4
GUEST_EXPORT(0x005cebe4, d_005cebe4::f_005cebe4);

// f_005cec38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cec38 {

inline constexpr guest::Function<0x0011eafc, u32(u32, u32, u32, u32)> call_0011eafc;  // (from the original)
inline constexpr guest::Function<0x0011eb18, u32(u32, u32, u32, u32)> call_0011eb18;  // (from the original)
inline constexpr guest::Function<0x0011edd8, u32(u32, u32, u32, u32)> call_0011edd8;  // (from the original)
inline constexpr guest::Function<0x001242c8, u32(u32, u32, u32, u32)> call_001242c8;  // (from the original)
inline constexpr guest::Function<0x00124c88, u32(u32, u32, u32, u32)> call_00124c88;  // (from the original)
inline constexpr guest::Function<0x00127d1c, u32(u32, u32, u32, u32)> call_00127d1c;  // (from the original)
inline constexpr guest::Function<0x0014f794, u32(u32, u32, u32, u32)> call_0014f794;  // (from the original)
inline constexpr guest::Function<0x0014f79c, u32(u32, u32, u32, u32)> call_0014f79c;  // (from the original)

u32 f_005cec38(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_00124c88(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        r0_1 = call_001242c8(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        if (r0_1 == 0) {
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_1;
            return r0_1;
        }
    }
    r0_2 = call_0011eafc(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        goto L_5cec94;
    }
    r0 = call_0011eb18(r0_2, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 2u) {
        goto L_5cec8c;
    }
L_5cec78:;
    r0 = call_0014f794(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_5cecb8;
    }
L_5cec8c:;
    call_0014f79c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
L_5cec94:;
    if (u32(*gptr<u8>(0x94e3acu + 1u)) == 0) {  // (from the original)
        *gptr<u8>(0x94e3acu + 1u) = u8(1u);  // (from the original)
    }
    guest::cpu()->r[13] += 8u;
    return call_0011edd8(0xac1930u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
L_5cecb8:;
    r0 = call_00127d1c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::preempt();
    goto L_5cec78;
}

}  // namespace d_005cec38
GUEST_EXPORT(0x005cec38, d_005cec38::f_005cec38);

// f_005cecfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cecfc {

inline guest::global<u8, 0x0094e3ac> global_0094e3ac;  // (from the original)
inline constexpr guest::Function<0x007b1038, u32(u32, u32, u32, u32)> call_007b1038;  // (from the original)
inline constexpr guest::Function<0x007b16b4, u32(u32, u32, u32, u32)> call_007b16b4;  // (from the original)

u32 f_005cecfc() {
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r1_1 = u32(s32(s8(*gptr<u8>(0x94e3acu + 3u))));  // (from the original)
    res_1 = u32(s32(s8(*gptr<u8>(0x94e3acu + 1u)))) | r1_1;  // (from the original)
    r0_1 = res_1;
    if (res_1 == 0) {
        call_007b1038(0x3fffu, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        call_007b16b4(0x3fffu, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r0_1 = 1u;
        *global_0094e3ac = u8(r0_1);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_005cecfc
GUEST_EXPORT(0x005cecfc, d_005cecfc::f_005cecfc);

// f_005ced7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ced7c {


u32 f_005ced7c() {
    u32 r1_1 = 0;
    r1_1 = *gptr<u32>(0x94e3acu + 8u) + 1u;  // (from the original)
    *gptr<u32>(0x94e3acu + 8u) = u32(r1_1);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return 0x94e3acu;  // (from the original)
}

}  // namespace d_005ced7c
GUEST_EXPORT(0x005ced7c, d_005ced7c::f_005ced7c);

// f_005cedec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cedec {

inline guest::global<u8, 0x0094e3f0> global_0094e3f0;  // (from the original)
inline guest::global<u32, 0x00974ac8> global_00974ac8;  // (from the original)
inline guest::global<u8, 0x00975c30> global_00975c30;  // (from the original)
inline constexpr guest::Function<0x0012a5a0, u32(u32, u32, u32, u32)> call_0012a5a0;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x0034ba38, u32(u32, u32, u32, u32)> call_0034ba38;  // (from the original)
inline constexpr guest::Function<0x0047f274, u32(u32, u32, u32, u32)> call_0047f274;  // (from the original)
inline constexpr guest::Function<0x005cec38, u32(u32, u32, u32, u32)> call_005cec38;  // (from the original)
inline constexpr guest::Function<0x005cecfc, u32(u32, u32, u32, u32)> call_005cecfc;  // (from the original)

u32 f_005cedec(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r1_5 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r0_1 = u32(*global_0094e3f0);
    if (r0_1 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r0_2 = u32(*global_00975c30);
    if (r0_2 != 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_0034ba38(0xae563cu, r1, r2, r3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_3;
    }
    guest::cpu()->r[13] = r13;
    call_0047f274(r0_3, r1_1, r2_1, r3_1);
    r0_4 = *global_00974ac8;
    r1_2 = *gptr<u32>(0x974ac8u + 4);  // (from the original)
    ea_1 = r13;
    *gptr<u32>(ea_1) = u32(0u);
    ea_2 = r13 + 8u;
    *gptr<u32>(ea_2) = u32(r0_4);
    *gptr<u32>(ea_2 + 4) = u32(r1_2);
    guest::cpu()->r[13] = r13;
    call_0012a5a0(0u, 0u, 0u, 0u);
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_5 = call_00137e84(0xae563cu, r1_3, r2_2, r3_2);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_6 = call_005cec38(r0_5, r1_4, r2_3, r3_3);
    r1_5 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    *global_0094e3f0 = u8(0u);
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_005cecfc(r0_6, r1_5, r2_4, r3_4);
}

}  // namespace d_005cedec
GUEST_EXPORT(0x005cedec, d_005cedec::f_005cedec);

// f_005cfa38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cfa38 {

inline guest::global<u32, 0x009535e4> global_009535e4;  // (from the original)
inline constexpr guest::Function<0x0050d698, u32(u32, u32, u32, u32)> call_0050d698;  // (from the original)
inline constexpr guest::Function<0x0050d8f0, u32(u32, u32, u32, u32)> call_0050d8f0;  // (from the original)
inline constexpr guest::Function<0x0050ddc0, u32(u32, u32, u32, u32)> call_0050ddc0;  // (from the original)
inline constexpr guest::Function<0x0071a084, u32(u32, u32, u32, u32)> call_0071a084;  // (from the original)

u32 f_005cfa38(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_0071a084(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    r0_2 = call_0050d698(0u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        guest::cpu()->r[13] += 8u;
        return call_0050d8f0(r0_2, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0_3 = *global_009535e4;
    r0_4 = call_0050ddc0(r0_3, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    return call_0050d8f0(r0_4, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005cfa38
GUEST_EXPORT(0x005cfa38, d_005cfa38::f_005cfa38);

// f_005cfa78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cfa78 {

inline guest::global<u8, 0x009514c4> global_009514c4;  // (from the original)
inline constexpr guest::Function<0x0050d698, u32(u32, u32, u32, u32)> call_0050d698;  // (from the original)
inline constexpr guest::Function<0x0050d8f0, u32(u32, u32, u32, u32)> call_0050d8f0;  // (from the original)

u32 f_005cfa78() {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    if (u32(s32(s8(*global_009514c4))) + 1u == 0) {
        r0_1 = call_0050d698(0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_1 == 0) {
            r0_2 = 1u;
        } else {
            r0_2 = 0u;
        }
        *global_009514c4 = u8(r0_2);
        call_0050d8f0(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0_3 = u32(*global_009514c4);
    if (r0_3 != 1u) {
        r0_3 = 0u;
    }
    guest::cpu()->r[13] += 8u;
    return r0_3;
}

}  // namespace d_005cfa78
GUEST_EXPORT(0x005cfa78, d_005cfa78::f_005cfa78);

// f_005cfaec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cfaec {

inline constexpr guest::Function<0x001138dd, u32(u32, u32, u32, u32)> call_001138dc;  // (from the original)
inline constexpr guest::Function<0x0011b40d, u32(u32, u32, u32, u32)> call_0011b40c;  // (from the original)
inline constexpr guest::Function<0x0023bc64, u32(u32, u32, u32, u32)> call_0023bc64;  // (from the original)
inline constexpr guest::Function<0x0023c65c, u32(u32, u32, u32, u32)> call_0023c65c;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x003193e8, u32(u32, u32, u32, u32)> call_003193e8;  // (from the original)
inline constexpr guest::Function<0x003505bc, u32(u32, u32, u32, u32)> call_003505bc;  // (from the original)
inline constexpr guest::Function<0x0050d698, u32(u32, u32, u32, u32)> call_0050d698;  // (from the original)
inline constexpr guest::Function<0x0050d8f0, u32(u32, u32, u32, u32)> call_0050d8f0;  // (from the original)
inline constexpr guest::Function<0x0050dd68, u32(u32, u32, u32, u32)> call_0050dd68;  // (from the original)
inline constexpr guest::Function<0x005373bc, u32(u32, u32, u32, u32)> call_005373bc;  // (from the original)
inline constexpr guest::Function<0x0071a084, u32(u32, u32, u32, u32)> call_0071a084;  // (from the original)
inline constexpr guest::Function<0x00728128, u32(u32, u32, u32, u32)> call_00728128;  // (from the original)
inline constexpr guest::Function<0x007283f4, u32(u32, u32, u32, u32)> call_007283f4;  // (from the original)

u32 f_005cfaec(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r4_1 = 0;
    u32 r3_6 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r2_6 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_11 = 0;
    u32 r3_8 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r1_3 = 0;
    u32 r2_8 = 0;
    u32 r3_9 = 0;
    u32 r2_9 = 0;
    u32 r3_10 = 0;
    u32 r4_2 = 0;
    u32 r0_14 = 0;
    u32 r3_11 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r1_4 = 0;
    u32 r2_10 = 0;
    u32 r3_12 = 0;
    u32 r0_17 = 0;
    u32 r1_5 = 0;
    u32 r2_11 = 0;
    u32 r3_13 = 0;
    u32 r0_18 = 0;
    u32 r3_14 = 0;
    u32 r0_19 = 0;
    goto L_5cfaec;
L_5cfaec:;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r0_1 = call_0071a084(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_5cfce0;
    }
    r0_1 = call_005373bc(r0_1, r1_1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_5cfce0;
    }
    r0_1 = call_0023bc64(r0_1, r1_1, r2_2, r3_2);
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_5cfce0;
    }
    r0_1 = call_003505bc(r0_1, r1_1, r2_3, r3_3);
    r1_1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_5cfce0;
    }
    r0_1 = call_0023c65c(r0_1, r1_1, r2_4, r3_4);
    r1_1 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_5cfce0;
    }
    r8 = 0x9514c4u;  // (from the original)
    r4_1 = *gptr<u32>(r8 + 4u);
    if (r4_1 == 0) {
        goto L_5cfce0;
    }
    r7 = 0x251cu;  // (from the original)
    if (*gptr<u32>(r4_1 + 4u) != 2u) {
        goto L_5cfb7c;
    }
    r3_6 = ~0u;
    r0_2 = r4_1 + 4u;
    r0_3 = call_003193e8(r0_2, r7, r3_6, r3_6);
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r1_1 = *gptr<u32>(r4_1);
    if (r0_3 != r1_1) {
        goto L_5cfb7c;
    }
    r0_4 = *gptr<u32>(r8 + 4u);
    *gptr<u32>(r0_4) = u32(0u);
    *gptr<u32>(r0_4 + 4u) = u32(0u);
L_5cfb7c:;
    r5 = 0u;
    r0_5 = call_0050d698(r5, r1_1, r2_5, r3_5);
    r1_2 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_5 != 0) {
        guest::cpu()->r[13] += 0x18u;  // (from the original)
        return call_0050d8f0(r0_5, r1_2, r2_6, r3);
    }
    r6 = 0x9535e4u;  // (from the original)
    r4 = *gptr<u32>(*gptr<u32>(r6) + 0x3c0u);  // (from the original)
    if (r4 == 0) {
        goto L_5cfbe8;
    }
    do {
L_5cfbb0:;
        r4 = r4 - 1u;
        r0_6 = *gptr<u32>(r6);
        r0_7 = call_007283f4(r0_6, 1u, r4, r3);
        r1_2 = guest::cpu()->r[1];
        r2_6 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0_7 != 0)) {
            r0_8 = *gptr<u32>(r6);
            call_0050dd68(r0_8, 1u, r4, r3);
            r1_2 = guest::cpu()->r[1];
            r2_6 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        guest::preempt();
    } while (r4 != 0);
L_5cfbe8:;
    r0_9 = *gptr<u32>(r6);
    r4 = *gptr<u32>(r0_9 + 0x3c0u);  // (from the original)
    if (r4 == 0) {
        r5 = 1u;
        goto L_5cfc34;
    }
    do {
L_5cfbfc:;
        r4 = r4 - 1u;
        r0_10 = *gptr<u32>(r6);
        r0_9 = call_00728128(r0_10, 1u, r4, r3);
        r1_2 = guest::cpu()->r[1];
        r2_6 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_9 == 2u) {
            goto L_5cfc34;
        }
        guest::preempt();
    } while (r4 != 0);
    r0_1 = call_0050d8f0(r0_9, r1_2, r2_6, r3);
    r1_1 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    goto L_5cfc48;
L_5cfc34:;
    r0_1 = call_0050d8f0(r0_9, r1_2, r2_6, r3);
    r1_1 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r5 == 0) {
        goto L_5cfce0;
    }
L_5cfc48:;
    r0_11 = call_002fb328(r0_1, r1_1, r2_7, r3_7);
    r3_8 = guest::cpu()->r[3];
    r0_12 = r0_11 + 0x42a0cu;  // (from the original)
    r0_13 = call_0011b40c(r0_12, 0u, 1u, r3_8);
    r1_3 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_1 = call_00301e20(r0_13, r1_3, r2_8, r3_9);
    r1_1 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_5cfce0;
    }
    r4_2 = *gptr<u32>(r8 + 4u);
    r0_14 = r4_2 + 8u;
    call_001138dc(r0_14, r0_13, r2_9, r3_10);
    r3_11 = ~0u;
    *gptr<u32>(r4_2 + 4u) = u32(2u);
    r0_15 = r4_2 + 4u;
    r0_16 = call_003193e8(r0_15, r7, r3_11, r3_11);
    r1_4 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    *gptr<u32>(r4_2) = u32(r0_16);
    r0_17 = call_002fae84(r0_16, r1_4, r2_10, r3_12);
    r1_5 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_18 = call_002fb310(r0_17, r1_5, r2_11, r3_13);
    r3_14 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    r0_19 = r0_18 + 0x1976cu;  // (from the original)
    return guest::call_address<u32>(0x114161u, r0_19, 0u, 1u, r3_14);  // (from the original)
L_5cfce0:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_005cfaec
GUEST_EXPORT(0x005cfaec, d_005cfaec::f_005cfaec);

// f_005cfcf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cfcf0 {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)

u32 f_005cfcf0(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r2_1 = 0;
    u32 r0_4 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_6 = 0;
    u32 nf_1 = 0;
    u32 zf_2 = 0;
    u32 r3_2 = 0;
    u32 r2_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = u32(*gptr<u8>(0x9514c4u + 2u));  // (from the original)
    if (r0_1 != 0) {
        r0_2 = call_002fae84(r0_1, r1, r2, r3);
        r3_1 = guest::cpu()->r[3];
        r1_1 = u32(*gptr<u8>(0x9514c4u + 1u));  // (from the original)
        r0_3 = r0_2 + 0x6214fu;  // (from the original)
        r2_1 = u32(*gptr<u8>(r0_3 + 5u)) >> 3;
        r0_4 = r2_1 + ((u32(*gptr<u8>(r0_3 + 6u)) & 1u) << 5);
        zf_1 = r1_1 == r0_4;
        cf_1 = r1_1 >= r0_4;
        if (cf_1 && !zf_1) {
            r4 = r1_1 - r0_4;
        }
        if (!cf_1 || zf_1) {
            r4 = 0u;
        }
        r0_5 = call_002fae84(r0_4, r1_1, r2_1, r3_1);
        r1_2 = r0_5 + 0x6214fu;  // (from the original)
        r2_2 = u32(*gptr<u8>(r1_2 + 1u));
        r0_6 = (r2_2 >> 7) + ((u32(*gptr<u8>(r1_2 + 2u)) & 0xfu) << 1) + r4;  // (from the original)
        if (r0_6 > 0x14u) {  // (from the original)
            nf_1 = r4 >> 0x1f;  // (from the original)
            zf_2 = r4 == 0;
            if (!zf_2 && nf_1 == 0u) {
                r0_6 = 0x14u;  // (from the original)
            }
            if (zf_2 || nf_1 != 0u) {
                r0_6 = 0u;
            }
        }
        *gptr<u8>(r1_2 + 1u) = u8(r2_2 & ~0x80u | r0_6 << 7);  // (from the original)
        r3_2 = u32(*gptr<u8>(r1_2 + 2u));
        r2_3 = r0_6 & 0x1eu;  // (from the original)
        r0_7 = r3_2 & ~0xfu | r2_3 >> 1;  // (from the original)
        *gptr<u8>(r1_2 + 2u) = u8(r0_7);
        r0_8 = call_002fae84(r0_7, r1_2, r2_3, r3_2);
        r0_1 = r0_8 + 0x6214fu;  // (from the original)
        *gptr<u8>(r0_1 + 5u) = u8(u32(*gptr<u8>(r0_1 + 5u)) & ~0xf8u);  // (from the original)
        r1 = 0u;
        *gptr<u8>(r0_1 + 6u) = u8(u32(*gptr<u8>(r0_1 + 6u)) & ~1u);
        *gptr<u8>(0x9514c4u + 2u) = u8(r1);  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_005cfcf0
GUEST_EXPORT(0x005cfcf0, d_005cfcf0::f_005cfcf0);

// f_005cfef0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cfef0 {

inline constexpr guest::Function<0x0071a084, u32(u32, u32, u32, u32)> call_0071a084;  // (from the original)

u32 f_005cfef0() {
    return call_0071a084(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005cfef0
GUEST_EXPORT(0x005cfef0, d_005cfef0::f_005cfef0);

// f_005cfef4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cfef4 {

inline constexpr guest::Function<0x0020d848, u32(u32, u32, u32, u32)> call_0020d848;  // (from the original)
inline constexpr guest::Function<0x0024b8a8, u32(u32, u32, u32, u32)> call_0024b8a8;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fd068, u32(u32, u32, u32, u32)> call_002fd068;  // (from the original)
inline constexpr guest::Function<0x0030dc84, u32(u32, u32, u32, u32)> call_0030dc84;  // (from the original)
inline constexpr guest::Function<0x005373a4, u32(u32, u32, u32, u32)> call_005373a4;  // (from the original)
inline constexpr guest::Function<0x005374f0, u32(u32, u32, u32, u32)> call_005374f0;  // (from the original)
inline constexpr guest::Function<0x006b5240, u32(u32, u32, u32, u32)> call_006b5240;  // (from the original)
inline constexpr guest::Function<0x00728af8, u32(u32, u32, u32, u32)> call_00728af8;  // (from the original)
inline constexpr guest::Function<0x00728c48, u32(u32, u32, u32, u32)> call_00728c48;  // (from the original)
inline constexpr guest::Function<0x00728ca0, u32(u32, u32, u32, u32)> call_00728ca0;  // (from the original)

u32 f_005cfef4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r6_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r7_1 = 0;
    u32 r0_3 = 0;
    u32 r3_3 = 0;
    u32 r3_4 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 r3_5 = 0;
    u32 r1_5 = 0;
    u32 r0_5 = 0;
    u32 r1_6 = 0;
    u32 r2_4 = 0;
    u32 r3_6 = 0;
    u32 r0_6 = 0;
    u32 r2_5 = 0;
    u32 r3_7 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_7 = 0;
    u32 r2_6 = 0;
    u32 r3_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r2_7 = 0;
    u32 r3_9 = 0;
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r5_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_1 = call_00728c48(r1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r6_1 = uxth(r0_1);
    guest::cpu()->r[13] = r13;
    r0_2 = call_00728ca0(r1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r7_1 = r0_2 & 0xffu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_00728af8(r1, r1_2, r2_2, r3_2);
    r3_3 = r0_3 & 0xffu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0020d848(r5_1, r6_1, r7_1, r3_3);
    r3_4 = guest::cpu()->r[3];
    r1_3 = r13;
    guest::cpu()->r[13] = r13;
    r0_4 = call_005374f0(r0, r1_3, 1u, r3_4);
    r1_4 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_4 != 0) {
        r1_5 = u32(*gptr<u8>(0x9514c4u + 1u)) + 1u;  // (from the original)
        *gptr<u8>(0x9514c4u + 1u) = u8(r1_5);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_5 = call_005373a4(0x9514c4u, r1_5, r2_3, r3_5);  // (from the original)
        r1_6 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_6 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_6 = call_002fae84(r0_5, r1_6, r2_4, r3_6);
        r2_5 = guest::cpu()->r[2];
        r3_7 = guest::cpu()->r[3];
        r0_7 = r0_6 + 0x20u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_8 = call_0030dc84(r0_7, r0_5, r2_5, r3_7);
        r1_7 = guest::cpu()->r[1];
        r2_6 = guest::cpu()->r[2];
        r3_8 = guest::cpu()->r[3];
        if (r0_8 != 0) {
            r0_9 = r0_8 + 0x55dcu;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0_8 = call_0024b8a8(r0_9, 0xdu, 1u, r3_8);  // (from the original)
            r1_7 = guest::cpu()->r[1];
            r2_6 = guest::cpu()->r[2];
            r3_8 = guest::cpu()->r[3];
        }
        guest::cpu()->r[13] = r13;
        r0_10 = call_002fd068(r0_8, r1_7, r2_6, r3_8);
        r2_7 = guest::cpu()->r[2];
        r3_9 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_4 = call_006b5240(r0_10, 1u, r2_7, r3_9);
        r1_4 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return r0_4;
}

}  // namespace d_005cfef4
GUEST_EXPORT(0x005cfef4, d_005cfef4::f_005cfef4);
