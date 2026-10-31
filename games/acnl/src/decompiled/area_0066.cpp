// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "player/slot_object.hpp"

#include <bit>

using guest::gptr;

// f_00660670: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00660670 {

inline constexpr guest::Function<0x006540d8, u32(u32, u32, u32, u32)> call_006540d8;  // (from the original)

u32 f_00660670(float S0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 fpsr = guest::cpu()->fpscr;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    S2 = std::bit_cast<float>(*gptr<u32>(0x6606d4u));  // (from the original)
    r13 = r13 - 8u;
    S3 = std::bit_cast<float>(*gptr<u32>(0x886878u));  // (from the original)
    S1 = S3 * std::bit_cast<float>(*gptr<u32>(0x6606d0u));  // (from the original)
    if (!((fpsr & 0xfffffffu | vfp_cmpf(S1, S0)) >> 0x1d & 1)) {  // (from the original)
        S0 = S0 - S1;
        S1 = S3 * std::bit_cast<float>(*gptr<u32>(0x6606d8u)) - S1;  // (from the original)
        S2 = S0 / S1;
    }
    r2 = 0xf0u;  // (from the original)
    S0 = std::bit_cast<float>(vcvt_sz_f(S2 * std::bit_cast<float>(*gptr<u32>(0x6606dcu))));  // (from the original)
    *gptr<u16>(r13) = u16(std::bit_cast<u32>(S0));
    r1 = *gptr<u32>(r13);
    r13 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    return call_006540d8(guest::cpu()->r[0], r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_00660670
GUEST_EXPORT(0x00660670, d_00660670::f_00660670);

// f_00660768: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00660768 {

struct __attribute__((packed)) Object_00660768_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
};
GUEST_OFFSET(Object_00660768_0, byte_171, 0x171);  // (from the original)

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fd068, u32(u32, u32, u32, u32)> call_002fd068;  // (from the original)
inline constexpr guest::Function<0x00309bd4, u32(u32, u32, u32, u32)> call_00309bd4;  // (from the original)
inline constexpr guest::Function<0x006b80cc, u32(u32, u32, u32, u32)> call_006b80cc;  // (from the original)

u32 f_00660768(gptr<Object_00660768_0> arg0, u32 r1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    res = u32(arg0->byte_171) << 0x1a >> 0x1f;  // (from the original)
    r0 = res;
    if (res == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_002fd068(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    r0 = call_002fb378(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    r0 = 9u;
    r0 = call_00309bd4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    r1 = 1u;
    return call_006b80cc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00660768
GUEST_EXPORT(0x00660768, d_00660768::f_00660768);

// f_00660808: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00660808 {

inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x00599544, u32(u32, u32, u32, u32)> call_00599544;  // (from the original)
inline constexpr guest::Function<0x006a6dbc, u32(u32, u32, u32, u32)> call_006a6dbc;  // (from the original)

u32 f_00660808(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 cf = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r6 = r1;
    r2 = r0;
    r1 = r13 + 4u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_003171b4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r4 = *gptr<u32>(r13);
    r5 = *gptr<u32>(r13 + 4);
    r0 = r13 + 8u;
    r2 = r5;
    r1 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_006a6dbc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00599544(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r6 == 0) {
        goto L_6608c4;
    }
    r2 = 0xaadaf4u;  // (from the original)
    cf = r4 >= 0x70u;  // (from the original)
    if (!cf) {
        cf = r5 >= 0x70u;  // (from the original)
    }
    r1 = 1u;
    if (cf) {
        goto L_660884;
    }
    r0 = r4 + ((r5 << 3) - r5 << 4);
    if (r0 >= 0x3100u) {  // (from the original)
        goto L_660884;
    }
    r12 = r0 & 7u;
    r0 = r2 + (r0 >> 3);
    *gptr<u8>(r0) = u8(u32(*gptr<u8>(r0)) | lsl_r(r1, r12 & 0xff));  // (from the original)
    *gptr<u8>(r2 + 0x620u) = u8(r1);  // (from the original)
L_660884:;
    r0 = 0xa84790u;  // (from the original)
    cf = r4 >= 0x70u;  // (from the original)
    if (!cf) {
        cf = r5 >= 0x70u;  // (from the original)
    }
    r2 = r0 - 0xfffd667bu;  // (from the original)
    if (cf) {
        goto L_6608c4;
    }
    r0 = r4 + ((r5 << 3) - r5 << 4);
    if (r0 >= 0x3100u) {  // (from the original)
        goto L_6608c4;
    }
    r12 = r0 & 7u;
    r0 = r2 + (r0 >> 3);
    *gptr<u8>(r0) = u8(u32(*gptr<u8>(r0)) | lsl_r(r1, r12 & 0xff));  // (from the original)
    *gptr<u8>(r2 + 0x620u) = u8(r1);  // (from the original)
L_6608c4:;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00660808
GUEST_EXPORT(0x00660808, d_00660808::f_00660808);

// f_006608d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006608d8 {

inline constexpr guest::Function<0x00599544, u32(u32, u32, u32, u32)> call_00599544;  // (from the original)
inline constexpr guest::Function<0x006a6dbc, u32(u32, u32, u32, u32)> call_006a6dbc;  // (from the original)

u32 f_006608d8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 cf = 0;
    r6 = r2;
    r5 = r1;
    r2 = r1;
    r13 = r13 - 0x28u;  // (from the original)
    r4 = r0;
    r1 = r0;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_006a6dbc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00599544(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r6 == 0) {
        goto L_66097c;
    }
    r3 = 0xaadaf4u;  // (from the original)
    r0 = r4 + ((r5 << 3) - r5 << 4);
    cf = r4 >= 0x70u;  // (from the original)
    if (!cf) {
        cf = r5 >= 0x70u;  // (from the original)
    }
    if (!cf) {
        cf = r0 >= 0x3100u;  // (from the original)
    }
    r1 = 1u;
    r2 = r0 >> 3;
    r12 = r0 & 7u;
    if (!cf) {
        r6 = r2 + r3;
        *gptr<u8>(r6) = u8(u32(*gptr<u8>(r6)) | lsl_r(r1, r12 & 0xff));  // (from the original)
        *gptr<u8>(r3 + 0x620u) = u8(r1);  // (from the original)
    }
    cf = r4 >= 0x70u;  // (from the original)
    if (!cf) {
        cf = r5 >= 0x70u;  // (from the original)
    }
    r3 = 0xaae115u;  // (from the original)
    if (cf) {
        goto L_66097c;
    }
    if (r0 >= 0x3100u) {  // (from the original)
        goto L_66097c;
    }
    r0 = r2 + r3;
    *gptr<u8>(r0) = u8(u32(*gptr<u8>(r0)) | lsl_r(r1, r12 & 0xff));  // (from the original)
    *gptr<u8>(r3 + 0x620u) = u8(r1);  // (from the original)
L_66097c:;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006608d8
GUEST_EXPORT(0x006608d8, d_006608d8::f_006608d8);

// f_00660990: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00660990 {

struct __attribute__((packed)) Object_00660990_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
};
GUEST_OFFSET(Object_00660990_0, byte_171, 0x171);  // (from the original)

inline constexpr guest::Function<0x0058a5d8, u32(u32, u32, u32, u32)> call_0058a5d8;  // (from the original)
inline constexpr guest::Function<0x0058c19c, u32(u32, u32, u32, u32)> call_0058c19c;  // (from the original)

u32 f_00660990(gptr<Object_00660990_0> arg0, u32 r1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r1;
    res = u32(arg0->byte_171) << 0x1a >> 0x1f;  // (from the original)
    r0 = res;
    if (res == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_0058c19c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r4;
    guest::cpu()->r[13] += 8u;
    return call_0058a5d8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00660990
GUEST_EXPORT(0x00660990, d_00660990::f_00660990);

// f_006609bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006609bc {

inline constexpr guest::Function<0x0068f114, u32(u32, u32, u32, u32)> call_0068f114;  // (from the original)

u32 f_006609bc(gptr<SlotObject> arg0) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0 + 0x171u;  // (from the original)
    res = u32(u8(arg0->flags_171)) << 0x1a >> 0x1f;  // (from the original)
    r0 = res;
    if (res == 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = call_0068f114(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = u32(*gptr<u8>(r4 + 7u)) | 0x80u;  // (from the original)
    *gptr<u8>(r4 + 7u) = u8(r0);
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_006609bc
GUEST_EXPORT(0x006609bc, d_006609bc::f_006609bc);

// f_006609ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006609ec {

struct __attribute__((packed)) Object_006609ec_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
};
GUEST_OFFSET(Object_006609ec_0, byte_171, 0x171);  // (from the original)

inline constexpr guest::Function<0x0068f130, u32(u32, u32, u32, u32)> call_0068f130;  // (from the original)

u32 f_006609ec(gptr<Object_006609ec_0> arg0) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0 + 0x171u;  // (from the original)
    res = u32(arg0->byte_171) << 0x1a >> 0x1f;  // (from the original)
    r0 = res;
    if (res == 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = call_0068f130(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = u32(*gptr<u8>(r4 + 7u)) | 0x80u;  // (from the original)
    *gptr<u8>(r4 + 7u) = u8(r0);
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_006609ec
GUEST_EXPORT(0x006609ec, d_006609ec::f_006609ec);

// f_00660a1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00660a1c {

struct __attribute__((packed)) Object_00660a1c_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
};
GUEST_OFFSET(Object_00660a1c_0, byte_171, 0x171);  // (from the original)

inline constexpr guest::Function<0x0068f168, u32(u32, u32, u32, u32)> call_0068f168;  // (from the original)

u32 f_00660a1c(gptr<Object_00660a1c_0> arg0) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0 + 0x171u;  // (from the original)
    res = u32(arg0->byte_171) << 0x1a >> 0x1f;  // (from the original)
    r0 = res;
    if (res == 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = call_0068f168(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = u32(*gptr<u8>(r4 + 7u)) | 0x80u;  // (from the original)
    *gptr<u8>(r4 + 7u) = u8(r0);
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_00660a1c
GUEST_EXPORT(0x00660a1c, d_00660a1c::f_00660a1c);

// f_00660c10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00660c10 {

inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00660c10(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
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
    r8 = r1;
    r1 = r13 + 0x38u;  // (from the original)
    r9 = r2;
    r4 = *gptr<u32>(r1);
    r5 = *gptr<u32>(r1 + 4);
    r6 = *gptr<u32>(r1 + 8);
    r7 = *gptr<u32>(r1 + 0xc);  // (from the original)
    r10 = r3;
    r0 = *gptr<u32>(r13);
    guest::cpu()->r[13] = r13;
    r0 = call_00656c20(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r11 = r0;
    ea = r0 + 0xeu;  // (from the original)
    *gptr<u8>(ea) = u8(r8);
    r0 = ea;
    *gptr<u8>(r0 + 1u) = u8(r9);
    *gptr<u32>(r0 + 2u) = u32(*gptr<u32>(r4));
    *gptr<u8>(r0 + 0xeu) = u8((((u32(*gptr<u8>(r0 + 0xeu)) & ~8u | r7 << 3) & ~1u | r10) & ~2u | r5 << 1) & ~4u | r6 << 2);  // (from the original)
    r1 = 0xae5658u;  // (from the original)
    r0 = r0 + 6u;
    guest::cpu()->r[13] = r13;
    r0 = call_005d41b8(r0, r1, r2, r3);
    r0 = *gptr<u32>(r13);
    r13 = r13 + 0x10u;  // (from the original)
    r2 = r11;
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
    r14 = *gptr<u32>(ea + 0x24);  // (from the original)
    r3 = 0u;
    r1 = 0x58u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[8] = r8;
    guest::cpu()->r[9] = r9;
    guest::cpu()->r[10] = r10;
    guest::cpu()->r[11] = r11;
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_00660c10
GUEST_EXPORT(0x00660c10, d_00660c10::f_00660c10);

// f_00660d14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00660d14 {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00660d14(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r5 = r1;
    r4 = r2;
    r6 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00656c20(r0, r1, r2, r3);
    ea = r5;
    r1 = *gptr<u32>(ea);
    r2 = r0;
    r3 = 0u;
    ea = r0 + 0xeu;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    r1 = 0x38u;  // (from the original)
    *gptr<u8>(ea + 4u) = u8(r4);
    r0 = r6;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_00660d14
GUEST_EXPORT(0x00660d14, d_00660d14::f_00660d14);

// f_00660d78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00660d78 {

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x00596ab0, u32(u32, u32, u32, u32)> call_00596ab0;  // (from the original)
inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00660d78(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    u32 r14 = guest::cpu()->r[14];
    ea = r13 - 0x34;  // (from the original)
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
    *gptr<u32>(ea + 0x30) = u32(r14);  // (from the original)
    r13 = r13 - 0x38u;  // (from the original)
    r8 = r2;
    r2 = r13 + 0x38u;  // (from the original)
    r9 = r3;
    r5 = *gptr<u32>(r2);
    r6 = *gptr<u32>(r2 + 4);
    r7 = *gptr<u32>(r2 + 8);
    r11 = *gptr<u32>(r2 + 0xc);  // (from the original)
    r0 = *gptr<u32>(r13 + 4u);
    guest::cpu()->r[13] = r13;
    r0 = call_00656c20(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r10 = r0;
    r4 = r0 + 0xeu;  // (from the original)
    r1 = *gptr<u32>(r13 + 8u);
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00596ab0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r7;
    *gptr<u32>(r4) = u32(*gptr<u32>(r13));
    *gptr<u8>(r4 + 4u) = u8(r8);
    *gptr<u8>(r10 + 0x13u) = u8(r9);  // (from the original)
    *gptr<u8>(r10 + 0x14u) = u8(r5);  // (from the original)
    *gptr<u8>(r4 + 7u) = u8(r6);
    r0 = r4 + 9u;
    *gptr<u8>(r4 + 8u) = u8(r11);
    guest::cpu()->r[13] = r13;
    r0 = call_005d41b8(r0, r1, r2, r3);
    r0 = *gptr<u32>(r13 + 4u);
    r3 = 0u;
    r2 = r10;
    r1 = 0x3cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0064d0b8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x14u;  // (from the original)
    ea = r13;
    r13 = r13 + 0x24;  // (from the original)
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

}  // namespace d_00660d78
GUEST_EXPORT(0x00660d78, d_00660d78::f_00660d78);

// f_00664a44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00664a44 {

inline constexpr guest::Function<0x00216420, u32(u32, u32, u32, u32)> call_00216420;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcb10, u32(u32, u32, u32, u32)> call_002fcb10;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002fcb9c, u32(u32, u32, u32, u32)> call_002fcb9c;  // (from the original)
inline constexpr guest::Function<0x00768174, u32(u32, u32, u32, u32)> call_00768174;  // (from the original)

u32 f_00664a44(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = r0;
    r6 = r2;
    r7 = r3;
    r8 = r1;
    r0 = r1;
    r0 = call_002fcb10(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r4 + 0x988u;  // (from the original)
    if (r0 == 0) {
        r0 = r8;
        r0 = call_00768174(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_664b04;
        }
    }
    r0 = r8;
    r0 = call_002fcb9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    if (zf) {
        zf = u32(*gptr<u8>(r4 + 0x984u)) == 0;  // (from the original)
    }
    if (!zf) {
        goto L_664b04;
    }
    r0 = r8;
    r0 = call_002fcb34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0x3eu;  // (from the original)
    if (!zf) {
        zf = r0 == 0x3fu;  // (from the original)
    }
    if (zf) {
        goto L_664b04;
    }
    r0 = r8;
    r0 = call_00216420(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x900u;  // (from the original)
    *gptr<u8>(r4 + 0x984u) = u8(1u);  // (from the original)
    *gptr<u16>(r0 + 0x80u) = u16(r6);  // (from the original)
    *gptr<u16>(r0 + 0x82u) = u16(r7);  // (from the original)
    r1 = r8;
    r0 = r4 + 0x994u;  // (from the original)
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = 0u;
    *gptr<u16>(0x5deu + r4) = u16(r1);  // (from the original)
    *gptr<u32>(r5) = u32(*gptr<u32>(r4 + 0x14u));  // (from the original)
    *gptr<u32>(r5 + 4u) = u32(*gptr<u32>(r4 + 0x18u));  // (from the original)
    *gptr<u32>(r5 + 8u) = u32(*gptr<u32>(r4 + 0x1cu));  // (from the original)
    r0 = 1u;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_664b04:;
    *gptr<u32>(r5) = u32(*gptr<u32>(r4 + 0x14u));  // (from the original)
    *gptr<u32>(r5 + 4u) = u32(*gptr<u32>(r4 + 0x18u));  // (from the original)
    *gptr<u32>(r5 + 8u) = u32(*gptr<u32>(r4 + 0x1cu));  // (from the original)
    r0 = 0u;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00664a44
GUEST_EXPORT(0x00664a44, d_00664a44::f_00664a44);

// f_00664be4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00664be4 {

struct __attribute__((packed)) Object_00664be4_0 {
    u8 unknown_0[0x47c];  // (not used here)
    u32 word_47c;
    u32 word_480;
    u8 unknown_484[0x3ec];  // (not used here)
    u8 byte_870;
    u8 unknown_871[0x3];  // (not used here)
    u32 word_874;
    u32 word_878;
    u32 word_87c;
    u32 word_880;
};
GUEST_OFFSET(Object_00664be4_0, word_47c, 0x47c);  // (from the original)
GUEST_OFFSET(Object_00664be4_0, word_480, 0x480);  // (from the original)
GUEST_OFFSET(Object_00664be4_0, byte_870, 0x870);  // (from the original)
GUEST_OFFSET(Object_00664be4_0, word_874, 0x874);  // (from the original)
GUEST_OFFSET(Object_00664be4_0, word_878, 0x878);  // (from the original)
GUEST_OFFSET(Object_00664be4_0, word_87c, 0x87c);  // (from the original)
GUEST_OFFSET(Object_00664be4_0, word_880, 0x880);  // (from the original)

struct __attribute__((packed)) Object_00664be4_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_00664be4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00664be4_1, word_8, 0x8);  // (from the original)


u32 f_00664be4(gptr<Object_00664be4_0> arg0, gptr<Object_00664be4_1> arg1) {
    u32 r0 = arg0.addr();
    arg0->byte_870 = u8(4u);
    arg0->word_874 = u32(arg0->word_47c);
    arg0->word_878 = u32(arg0->word_480);
    arg0->word_87c = u32(arg1->word_0);
    r0 = arg1->word_8;
    arg0->word_880 = u32(r0);
    return r0;
}

}  // namespace d_00664be4
GUEST_EXPORT(0x00664be4, d_00664be4::f_00664be4);

// f_00664e50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00664e50 {

inline constexpr guest::Function<0x0058a72c, u32(u32, u32, u32, u32)> call_0058a72c;  // (from the original)
inline constexpr guest::Function<0x0058c19c, u32(u32, u32, u32, u32)> call_0058c19c;  // (from the original)

u32 f_00664e50(gptr<SlotObject> arg0, u32 r1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    guest::cpu()->r[13] -= 8u;
    res = u32(u8(arg0->flags_171)) << 0x1a >> 0x1f;  // (from the original)
    r0 = res;
    if (res == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_0058c19c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = *gptr<u32>(0x886b60u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_0058a72c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00664e50
GUEST_EXPORT(0x00664e50, d_00664e50::f_00664e50);

// f_00664e80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00664e80 {

struct __attribute__((packed)) Object_00664e80_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
};
GUEST_OFFSET(Object_00664e80_0, byte_171, 0x171);  // (from the original)

inline constexpr guest::Function<0x0068f208, u32(u32, u32, u32, u32)> call_0068f208;  // (from the original)

u32 f_00664e80(gptr<Object_00664e80_0> arg0) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0 + 0x171u;  // (from the original)
    res = u32(arg0->byte_171) << 0x1a >> 0x1f;  // (from the original)
    r0 = res;
    if (res == 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = call_0068f208(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = u32(*gptr<u8>(r4 + 7u)) | 0x80u;  // (from the original)
    *gptr<u8>(r4 + 7u) = u8(r0);
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_00664e80
GUEST_EXPORT(0x00664e80, d_00664e80::f_00664e80);

// f_00665130: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00665130 {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)

u32 f_00665130() {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r3 = 0u;
    r2 = r3;
    r1 = 0x19u;  // (from the original)
    return call_0064d0b8(guest::cpu()->r[0], r1, r2, r3);
}

}  // namespace d_00665130
GUEST_EXPORT(0x00665130, d_00665130::f_00665130);

// f_006651b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006651b4 {

struct __attribute__((packed)) Object_006651b4_0 {
    u8 unknown_0[0x174];  // (not used here)
    u8 byte_174;
};
GUEST_OFFSET(Object_006651b4_0, byte_174, 0x174);  // (from the original)

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)
inline constexpr guest::Function<0x0067c674, u32(u32, u32, u32, u32)> call_0067c674;  // (from the original)
inline constexpr guest::Function<0x00764be4, u32(u32, u32, u32, u32)> call_00764be4;  // (from the original)

u32 f_006651b4(gptr<Object_006651b4_0> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x28u;  // (from the original)
    r0 = u32(arg0->byte_174);
    r5 = r1;
    if ((r0 & 1u) == 0) {
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0 = call_002f74c8(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        r1 = r0;
        r0 = 0x400u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0 = call_002f74e0(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        if (r0 == 0) {
            goto L_665200;
        }
    }
    r1 = 0u;
    S0 = std::bit_cast<float>(*gptr<u32>(0x665264u));  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0067c674(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
L_665200:;
    r1 = r4;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00764be4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    *gptr<u16>(r13 + 0xcu) = u16(0u);  // (from the original)
    r8 = r13;
    r7 = r4;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00656c20(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r6 = r0;
    r4 = r0 + 0xeu;  // (from the original)
    r1 = r8;
    r0 = r0 + 0xfu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005d41b8(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r3 = 0u;
    r2 = r6;
    r1 = 0x9du;  // (from the original)
    *gptr<u8>(r6 + 0x13u) = u8(u32(s32(u32(*gptr<u16>(r13 + 0xcu))) >> 8));  // (from the original)
    r0 = r7;
    *gptr<u8>(r4) = u8(r5);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0064d0b8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_006651b4
GUEST_EXPORT(0x006651b4, d_006651b4::f_006651b4);

// f_00665344: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00665344 {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00665344(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18;  // (from the original)
    r4 = r1;
    r5 = r2;
    r6 = r3;
    r7 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00656c20(r0, r1, r2, r3);
    r2 = r0;
    ea = r0 + 0xeu;  // (from the original)
    *gptr<u8>(ea) = u8(r4);
    r0 = ea;
    r3 = 0u;
    *gptr<u8>(r0 + 1u) = u8(r5);
    *gptr<u8>(r0 + 2u) = u8(r6);
    r0 = r7;
    r13 = r13 + 0x18;  // (from the original)
    r1 = 0x5fu;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_00665344
GUEST_EXPORT(0x00665344, d_00665344::f_00665344);

// f_00665380: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00665380 {

struct __attribute__((packed)) Object_00665380_0 {
    u8 unknown_0[0x1a9];  // (not used here)
    u8 byte_1a9;
};
GUEST_OFFSET(Object_00665380_0, byte_1a9, 0x1a9);  // (from the original)

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00665380(gptr<Object_00665380_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18;  // (from the original)
    r4 = r1;
    r7 = r0;
    r5 = r2;
    r6 = r3;
    if (u32(arg0->byte_1a9) == 0x3bu) {  // (from the original)
        r0 = 1u;
        goto L_6653d0;
    }
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00656c20(r0, r1, r2, r3);
    r2 = r0;
    ea = r0 + 0xeu;  // (from the original)
    *gptr<u8>(ea) = u8(r5);
    r0 = ea;
    r3 = 0u;
    *gptr<u8>(r0 + 1u) = u8(r6);
    *gptr<u8>(r0 + 2u) = u8(r4);
    r0 = r7;
    r13 = r13 + 0x18;  // (from the original)
    r1 = 0x3bu;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0064d0b8(r0, r1, r2, r3);
L_6653d0:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00665380
GUEST_EXPORT(0x00665380, d_00665380::f_00665380);

// f_006654ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006654ac {

inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_006654ac(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r5 = r1;
    r7 = r2;
    r6 = r3;
    r9 = r0;
    r0 = call_00656c20(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r8 = r0;
    r4 = r0 + 0xeu;  // (from the original)
    *gptr<u8>(r0 + 0xeu) = u8(r5);  // (from the original)
    r5 = r6 << 0x10 >> 0x18;  // (from the original)
    if (r7 != 0) {
        r1 = r7;
        r0 = r4 + 1u;
        r0 = call_005d41b8(r0, r1, r2, r3);
        *gptr<u8>(r4 + 5u) = u8(r5);
    } else {
        r1 = 0xae5658u;  // (from the original)
        r0 = r4 + 1u;
        r0 = call_005d41b8(r0, r1, r2, r3);
        *gptr<u8>(r4 + 5u) = u8(r5);
    }
    r2 = r8;
    r0 = r9;
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    r3 = 0u;
    r1 = 0x3au;  // (from the original)
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_006654ac
GUEST_EXPORT(0x006654ac, d_006654ac::f_006654ac);

// f_00665560: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00665560 {

struct __attribute__((packed)) Object_00665560_0 {
    u8 unknown_0[0x173];  // (not used here)
    u8 byte_173;
};
GUEST_OFFSET(Object_00665560_0, byte_173, 0x173);  // (from the original)

inline constexpr guest::Function<0x002073dc, u32(u32, u32, u32, u32)> call_002073dc;  // (from the original)
inline constexpr guest::Function<0x002e62b4, u32(u32, u32, u32, u32)> call_002e62b4;  // (from the original)
inline constexpr guest::Function<0x002e6368, u32(u32, u32, u32, u32)> call_002e6368;  // (from the original)
inline constexpr guest::Function<0x004eb6c4, u32(u32, u32, u32, u32)> call_004eb6c4;  // (from the original)
inline constexpr guest::Function<0x005ce12c, u32(u32, u32, u32, u32)> call_005ce12c;  // (from the original)
inline constexpr guest::Function<0x006c5ef8, u32(u32, u32, u32, u32)> call_006c5ef8;  // (from the original)

u32 f_00665560(gptr<Object_00665560_0> arg0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x38u;  // (from the original)
    res = u32(arg0->byte_173) >> 7;
    r0 = res;
    if (res != 0) {
        goto L_665648;
    }
    r5 = r4 + 0x14u;  // (from the original)
    r1 = 0u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_005ce12c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    if (r0 == 0) {
        goto L_665648;
    }
    r0 = *gptr<u32>(r4 + 0x9c8u);  // (from the original)
    r6 = r4 + 0x9bcu;  // (from the original)
    if (r0 != 0) {
        r1 = *gptr<u32>(r6 + 0x10u);  // (from the original)
        if (r1 == *gptr<u32>(r0 + 0xcu)) {  // (from the original)
            r0 = r6;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            r0 = call_002e6368(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            S2 = guest::cpu()->s[2];
        }
    }
    r1 = 0u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_006c5ef8(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = S0;
    S2 = std::bit_cast<float>(*gptr<u32>(r5 + 8u));
    S0 = std::bit_cast<float>(*gptr<u32>(r5));
    r0 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r0 + 8) = u32(std::bit_cast<u32>(S2));
    r8 = 0xae5664u;  // (from the original)
    r5 = 0u;
    r7 = 1u;
    r3 = 0x975beeu;  // (from the original)
    r2 = r13 + 0x10u;  // (from the original)
    r1 = 0x140u;  // (from the original)
    r0 = r6;
    *gptr<u32>(r13 + 8u) = u32(r5);
    *gptr<u32>(r13 + 4u) = u32(r7);
    *gptr<u32>(r13) = u32(r8);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_002073dc(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    if (r0 != 0) {
        r1 = 0x683384u;  // (from the original)
        r2 = ~0u;
        r0 = r6;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        r0 = call_002e62b4(r0, r1, r2, r3);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
    }
    r3 = 0x975beeu;  // (from the original)
    r2 = r13 + 0x10u;  // (from the original)
    r1 = 9u;
    r0 = r4 + 0x9d4u;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r5);
    *gptr<u32>(r13 + 4u) = u32(r7);
    *gptr<u32>(r13) = u32(r8);
    *gptr<u32>(r13 + 0xcu) = u32(r5);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_004eb6c4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
L_665648:;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00665560
GUEST_EXPORT(0x00665560, d_00665560::f_00665560);

// f_00668740: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00668740 {

struct __attribute__((packed)) Object_00668740_0 {
    u8 unknown_0[0x268];  // (not used here)
    u32 word_268;
    u8 unknown_26c[0x354];  // (not used here)
    u16 half_5c0;
};
GUEST_OFFSET(Object_00668740_0, word_268, 0x268);  // (from the original)
GUEST_OFFSET(Object_00668740_0, half_5c0, 0x5c0);  // (from the original)

inline constexpr guest::Function<0x00207740, u32(u32, u32, u32, u32)> call_00207740;  // (from the original)
inline constexpr guest::Function<0x002e5bec, u32(u32, u32, u32, u32)> call_002e5bec;  // (from the original)
inline constexpr guest::Function<0x0064f508, u32(u32, u32, u32, u32)> call_0064f508;  // (from the original)
inline constexpr guest::Function<0x006538e0, u32(u32, u32, u32, u32)> call_006538e0;  // (from the original)
inline constexpr guest::Function<0x0070ab44, u32(u32, u32, u32, u32)> call_0070ab44;  // (from the original)

u32 f_00668740(gptr<Object_00668740_0> arg0, u32 r1_unused, u32 r2, u32 r3, float S0) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x38u;  // (from the original)
    if (u32(arg0->half_5c0) != 0) {
        goto L_6687c0;
    }
    r2 = arg0->word_268;
    r3 = 0u;
    r1 = r13;
    r0 = r4 + 0x1b4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0070ab44(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r4 + 0x1430u;  // (from the original)
    r1 = *gptr<u32>(r0);
    r12 = r4 + 0x1424u;  // (from the original)
    if (r1 == 0) {
        goto L_6687ac;
    }
    if (*gptr<u32>(r0 + 4u) != *gptr<u32>(r1 + 0xcu)) {  // (from the original)
        goto L_6687ac;
    }
    r1 = r13;
    r0 = r12;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_002e5bec(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    goto L_6687c0;
L_6687ac:;
    r1 = 0x12du;  // (from the original)
    r3 = 0u;
    r2 = r13;
    r0 = r12;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00207740(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
L_6687c0:;
    r0 = r4 + 0x5c0u;  // (from the original)
    r1 = u32(*gptr<u16>(r0));
    if (r1 != 0) {
        if (r1 >= 1u) {
            r1 = r1 - 1u;
        } else {
            r1 = 0u;
        }
        *gptr<u16>(r0) = u16(r1);
    }
    res = u32(*gptr<u8>(r4 + 0x171u)) << 0x1a >> 0x1f;  // (from the original)
    r0 = res;
    if (res != 0) {
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    r1 = 0u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_006538e0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    r13 = r13 + 0x38u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x668820u));  // (from the original)
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return call_0064f508(r0, r1, r2, r3);
}

}  // namespace d_00668740
GUEST_EXPORT(0x00668740, d_00668740::f_00668740);

// f_00668fc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00668fc4 {


u32 f_00668fc4() {
    u32 r0 = 0;
    float S0 = 0;
    float S1 = 0;
    r0 = 0x8868ecu;  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(r0));
    S0 = std::bit_cast<float>(*gptr<u32>(0x886878u)) * std::bit_cast<float>(*gptr<u32>(0x668fecu)) * S1;  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00668fc4
GUEST_EXPORT(0x00668fc4, d_00668fc4::f_00668fc4);

// f_0066a074: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066a074 {

struct __attribute__((packed)) Object_0066a074_0 {
    u8 unknown_0[0x984];  // (not used here)
    u8 byte_984;
};
GUEST_OFFSET(Object_0066a074_0, byte_984, 0x984);  // (from the original)

inline constexpr guest::Function<0x00216468, u32(u32, u32, u32, u32)> call_00216468;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)

u32 f_0066a074(gptr<Object_0066a074_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = u32(arg0->byte_984);
    if (r0 != 0) {
        r0 = call_00216468(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r5 = 0u;
        r0 = r4 + 0x900u;  // (from the original)
        r1 = ~0u;
        *gptr<u8>(r4 + 0x984u) = u8(r5);  // (from the original)
        *gptr<u16>(r0 + 0x80u) = u16(r1);  // (from the original)
        *gptr<u16>(r0 + 0x82u) = u16(r1);  // (from the original)
        r1 = 0x95bfdcu;  // (from the original)
        r0 = r4 + 0x994u;  // (from the original)
        r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        *gptr<u16>(0x5deu + r4) = u16(0xfu);  // (from the original)
        r0 = 0xae5658u;  // (from the original)
        *gptr<u8>(r4 + 0x984u) = u8(r5);  // (from the original)
        *gptr<u32>(r4 + 0x988u) = u32(*gptr<u32>(r0));  // (from the original)
        r1 = *gptr<u32>(r0 + 4u);
        *gptr<u32>(r4 + 0x98cu) = u32(r1);  // (from the original)
        *gptr<u32>(r4 + 0x990u) = u32(*gptr<u32>(r0 + 8u));  // (from the original)
        r0 = 1u;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0066a074
GUEST_EXPORT(0x0066a074, d_0066a074::f_0066a074);

// f_0066a0f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066a0f4 {

inline constexpr guest::Function<0x0023d99c, u32(u32, u32, u32, u32)> call_0023d99c;  // (from the original)
inline constexpr guest::Function<0x0023e1e0, u32(u32, u32, u32, u32)> call_0023e1e0;  // (from the original)
inline constexpr guest::Function<0x0023e254, u32(u32, u32, u32, u32)> call_0023e254;  // (from the original)
inline constexpr guest::Function<0x0024b448, u32(u32, u32, u32, u32)> call_0024b448;  // (from the original)
inline constexpr guest::Function<0x002fe8a4, u32(u32, u32, u32, u32)> call_002fe8a4;  // (from the original)
inline constexpr guest::Function<0x0064c5e0, u32(u32, u32, u32, u32)> call_0064c5e0;  // (from the original)
inline constexpr guest::Function<0x006f0130, u32(u32, u32, u32, u32)> call_006f0130;  // (from the original)

u32 f_0066a0f4(gptr<SlotObject> arg0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    res = u32(u8(arg0->flags_171)) << 0x1a >> 0x1f;  // (from the original)
    r0 = res;
    if (res == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r1 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 1u;
    r0 = 0xdu;  // (from the original)
    r0 = call_006f0130(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = call_0064c5e0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = u32(*gptr<u8>(r4 + 0x1acu));  // (from the original)
    r0 = call_002fe8a4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r4 = r0;
    if (r0 != 0) {
        r0 = call_0023d99c(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0 != 0) {
            goto L_66a170;
        }
    }
    r0 = r4;
    r0 = call_0023e254(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        goto L_66a170;
    }
    r0 = r4;
    r0 = call_0023e1e0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
L_66a170:;
    r0 = r4 + 0x8000u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    r0 = r0 + 0xae0u;  // (from the original)
    r2 = 1u;
    r1 = 0x20u;  // (from the original)
    return call_0024b448(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_0066a0f4
GUEST_EXPORT(0x0066a0f4, d_0066a0f4::f_0066a0f4);

// f_0066a1d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066a1d0 {

struct __attribute__((packed)) Object_0066a1d0_0 {
    u8 unknown_0[0x47c];  // (not used here)
    u32 word_47c;
    u32 word_480;
    u8 unknown_484[0x3ec];  // (not used here)
    u8 byte_870;
    u8 unknown_871[0x3];  // (not used here)
    u32 word_874;
    u32 word_878;
};
GUEST_OFFSET(Object_0066a1d0_0, word_47c, 0x47c);  // (from the original)
GUEST_OFFSET(Object_0066a1d0_0, word_480, 0x480);  // (from the original)
GUEST_OFFSET(Object_0066a1d0_0, byte_870, 0x870);  // (from the original)
GUEST_OFFSET(Object_0066a1d0_0, word_874, 0x874);  // (from the original)
GUEST_OFFSET(Object_0066a1d0_0, word_878, 0x878);  // (from the original)

inline constexpr guest::Function<0x0024b448, u32(u32, u32, u32, u32)> call_0024b448;  // (from the original)
inline constexpr guest::Function<0x002fd068, u32(u32, u32, u32, u32)> call_002fd068;  // (from the original)
inline constexpr guest::Function<0x005c2dfc, u32(u32, u32, u32, u32)> call_005c2dfc;  // (from the original)
inline constexpr guest::Function<0x0064c5e0, u32(u32, u32, u32, u32)> call_0064c5e0;  // (from the original)
inline constexpr guest::Function<0x0065377c, u32(u32, u32, u32, u32)> call_0065377c;  // (from the original)
inline constexpr guest::Function<0x006a5f0c, u32(u32, u32, u32, u32)> call_006a5f0c;  // (from the original)
inline constexpr guest::Function<0x006b7058, u32(u32, u32, u32, u32)> call_006b7058;  // (from the original)
inline constexpr guest::Function<0x0076c564, u32(u32, u32, u32, u32)> call_0076c564;  // (from the original)

u32 f_0066a1d0(gptr<Object_0066a1d0_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x18u;  // (from the original)
    arg0->byte_870 = u8(8u);
    r5 = r3;
    arg0->word_874 = u32(arg0->word_47c);
    arg0->word_878 = u32(arg0->word_480);
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_006a5f0c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r4 + 0x87cu) = u32(*gptr<u32>(r13));  // (from the original)
    r1 = *gptr<u32>(r13 + 8u);
    *gptr<u32>(r4 + 0x880u) = u32(r1);  // (from the original)
    res = u32(*gptr<u8>(r4 + 0x171u)) << 0x1a >> 0x1f;  // (from the original)
    r0 = res;
    if (res == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0076c564(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0064c5e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = u32(*gptr<u8>(r4 + 0x1acu));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005c2dfc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_66a268;
    }
    r0 = u32(*gptr<u8>(r4 + 0x1acu));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0065377c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_66a268;
    }
    r2 = 1u;
    r1 = 3u;
    guest::cpu()->r[13] = r13;
    r0 = call_0024b448(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_66a268:;
    guest::cpu()->r[13] = r13;
    r0 = call_002fd068(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 1u;
    guest::cpu()->r[13] = r13;
    r0 = call_006b7058(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0066a1d0
GUEST_EXPORT(0x0066a1d0, d_0066a1d0::f_0066a1d0);

// f_0066a2c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066a2c8 {

inline constexpr guest::Function<0x004ee4c0, u32(u32, u32, u32, u32)> call_004ee4c0;  // (from the original)
inline constexpr guest::Function<0x0052e294, u32(u32, u32, u32, u32)> call_0052e294;  // (from the original)
inline constexpr guest::Function<0x006c5ef8, u32(u32, u32, u32, u32)> call_006c5ef8;  // (from the original)
inline constexpr guest::Function<0x00745970, u32(u32, u32, u32, u32)> call_00745970;  // (from the original)

u32 f_0066a2c8(u32 r0, u32 r1, u32 r2, float S0, float S1, float S2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r0 = r0 + 0x9d4u;  // (from the original)
    r13 = r13 - 0x50u;  // (from the original)
    r5 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_00745970(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    if (r0 == 0) {
        r13 = r13 + 0x50u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r4 = r4 + 0x14u;  // (from the original)
    r1 = 0u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_006c5ef8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = S0;
    S2 = std::bit_cast<float>(*gptr<u32>(r4 + 8u));
    S0 = std::bit_cast<float>(*gptr<u32>(r4));
    r0 = r13 + 0x30u;  // (from the original)
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r0 + 8) = u32(std::bit_cast<u32>(S2));
    r0 = r5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_00745970(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r4 = r0;
    if (r0 == 0) {
        r13 = r13 + 0x50u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    *gptr<u16>(r13 + 0x3cu) = u16(0u);  // (from the original)
    r2 = *gptr<u32>(r13 + 0x3cu);  // (from the original)
    r1 = r13 + 0x30u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_0052e294(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r1 = r13;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_004ee4c0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0066a2c8
GUEST_EXPORT(0x0066a2c8, d_0066a2c8::f_0066a2c8);

// f_0066a34c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066a34c {

inline constexpr guest::Function<0x006dfde8, u32(u32, u32, u32, u32)> call_006dfde8;  // (from the original)

u32 f_0066a34c(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = 0;
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    *gptr<u16>(r13) = u16(0x2000u);  // (from the original)
    if (u32(*gptr<u8>(0x9506b0u)) != 0xffu) {  // (from the original)
        r0 = u32(*gptr<u16>(r13));
        r13 = r13 + 8;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = *gptr<u32>(0x9506b4u);  // (from the original)
    if (r0 == 0) {
        r0 = u32(*gptr<u16>(r13));
        r13 = r13 + 8;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_006dfde8(r0, guest::cpu()->r[1], guest::cpu()->r[2], r3);
    if (r0 != 0) {
        r0 = u32(*gptr<u16>(r0 + 0x2eu));  // (from the original)
        r13 = r13 + 8;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = u32(*gptr<u16>(r13));
    r13 = r13 + 8;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0066a34c
GUEST_EXPORT(0x0066a34c, d_0066a34c::f_0066a34c);

// f_0066a554: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066a554 {

struct __attribute__((packed)) Object_0066a554_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x2];  // (not used here)
    u8 byte_174;
};
GUEST_OFFSET(Object_0066a554_0, byte_171, 0x171);  // (from the original)
GUEST_OFFSET(Object_0066a554_0, byte_174, 0x174);  // (from the original)

inline constexpr guest::Function<0x004e0f68, u32(u32, u32, u32, u32)> call_004e0f68;  // (from the original)
inline constexpr guest::Function<0x004e13d0, u32(u32, u32, u32, u32)> call_004e13d0;  // (from the original)
inline constexpr guest::Function<0x004e14ec, u32(u32, u32, u32, u32)> call_004e14ec;  // (from the original)
inline constexpr guest::Function<0x004e1768, u32(u32, u32, u32, u32)> call_004e1768;  // (from the original)
inline constexpr guest::Function<0x0065795c, u32(u32, u32, u32, u32)> call_0065795c;  // (from the original)
inline constexpr guest::Function<0x007654a8, u32(u32, u32, u32, u32)> call_007654a8;  // (from the original)

u32 f_0066a554(gptr<Object_0066a554_0> arg0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r4 = r0;
    r13 = r13 - 0x30u;  // (from the original)
    r6 = r1;
    r5 = r0 + 0x171u;  // (from the original)
    res = u32(arg0->byte_171) << 0x1a >> 0x1f;  // (from the original)
    if (res == 0) {
        goto L_66a600;
    }
    r0 = u32(arg0->byte_174);
    r7 = 0u;
    if ((r0 & 1u) == 0) {
        goto L_66a600;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_004e0f68(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    if (r0 == 0) {
        goto L_66a600;
    }
    res = u32(*gptr<u8>(r5)) << 0x1a >> 0x1f;  // (from the original)
    if (res == 0) {
        goto L_66a600;
    }
    r0 = 0x9c8fd4u;  // (from the original)
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_004e1768(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    if (r0 == 0) {
        goto L_66a600;
    }
    if (u32(*gptr<u16>(0x5aeu + r4)) == 0) {  // (from the original)
        goto L_66a60c;
    }
    r0 = 0x9c8fd4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_004e14ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    if (r0 == 0) {
        goto L_66a600;
    }
    res = u32(*gptr<u8>(r5)) << 0x1a >> 0x1f;  // (from the original)
    if (res == 0) {
        goto L_66a600;
    }
    r0 = 0x9c8fd4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_004e13d0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r1 = r0;
    if (r0 != 0) {
        r0 = r4;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        r0 = call_007654a8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
    }
L_66a600:;
    r0 = 0u;
L_66a604:;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_66a60c:;
    res = u32(*gptr<u8>(r5)) << 0x1a >> 0x1f;  // (from the original)
    if (res == 0) {
        goto L_66a6a0;
    }
    r0 = 0x9c8fd4u;  // (from the original)
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_004e1768(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    if (r0 == 0) {
        goto L_66a6a0;
    }
    r0 = r0 + 0x20u;  // (from the original)
    r1 = r13 + 4u;
    S0 = std::bit_cast<float>(*gptr<u32>(r0));
    S1 = std::bit_cast<float>(*gptr<u32>(r0 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r0 + 8));
    *gptr<u32>(r1) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r1 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r1 + 8) = u32(std::bit_cast<u32>(S2));
L_66a644:;
    res = u32(*gptr<u8>(r5)) << 0x1a >> 0x1f;  // (from the original)
    if (res == 0) {
        goto L_66a6b4;
    }
    r0 = 0x9c8fd4u;  // (from the original)
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_004e1768(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    if (r0 == 0) {
        goto L_66a6b4;
    }
    r0 = u32(*gptr<u16>(r0 + 0x38u));  // (from the original)
    *gptr<u16>(r13) = u16(r0);
    r7 = uxth(r0);
L_66a678:;
    zf = r6 == 0;
    if (!zf) {
        r0 = 1u;
    }
    *gptr<u32>(r13 + 0x10u) = u32(r7);  // (from the original)
    if (!zf) {
        guest::preempt();
        goto L_66a604;
    }
    r2 = r13 + 0x10u;  // (from the original)
    r1 = r13 + 4u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_0065795c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_66a6a0:;
    r3 = r13 + 4u;
    ea = r4 + 0x14u;  // (from the original)
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    *gptr<u32>(r3) = u32(*gptr<u32>(ea));
    *gptr<u32>(r3 + 4) = u32(r1);
    *gptr<u32>(r3 + 8) = u32(r2);
    guest::preempt();
    goto L_66a644;
L_66a6b4:;
    r0 = 0u;
    *gptr<u16>(r13) = u16(r0);
    guest::preempt();
    goto L_66a678;
}

}  // namespace d_0066a554
GUEST_EXPORT(0x0066a554, d_0066a554::f_0066a554);

// f_0066aa7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066aa7c {

struct __attribute__((packed)) Object_0066aa7c_0 {
    u8 unknown_0[0x8c5];  // (not used here)
    u8 byte_8c5;
    u8 unknown_8c6[0x1];  // (not used here)
    u8 byte_8c7;
};
GUEST_OFFSET(Object_0066aa7c_0, byte_8c5, 0x8c5);  // (from the original)
GUEST_OFFSET(Object_0066aa7c_0, byte_8c7, 0x8c7);  // (from the original)

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)

u32 f_0066aa7c(gptr<Object_0066aa7c_0> arg0) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    if ((u32(arg0->byte_8c7) & 1u) != 0) {
        r3 = 0u;
        r2 = r3;
        r1 = 0x10u;  // (from the original)
        return call_0064d0b8(r0, r1, r2, r3);
    }
    r3 = 0u;
    r2 = r3;
    res = u32(arg0->byte_8c5) << 0x1a >> 0x1f;  // (from the original)
    if (res == 0) {
        r1 = 0xfu;  // (from the original)
        return call_0064d0b8(r0, r1, r2, r3);
    }
    r1 = 0x12u;  // (from the original)
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_0066aa7c
GUEST_EXPORT(0x0066aa7c, d_0066aa7c::f_0066aa7c);

// f_0066aac0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066aac0 {

inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> call_00305f2c;  // (from the original)
inline constexpr guest::Function<0x005c2c80, u32(u32, u32, u32, u32)> call_005c2c80;  // (from the original)
inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x0064ee94, u32(u32, u32, u32, u32)> call_0064ee94;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)
inline constexpr guest::Function<0x0068319c, u32(u32, u32, u32, u32)> call_0068319c;  // (from the original)
inline constexpr guest::Function<0x00700198, u32(u32, u32, u32, u32)> call_00700198;  // (from the original)
inline constexpr guest::Function<0x00759a54, u32(u32, u32, u32, u32)> call_00759a54;  // (from the original)

u32 f_0066aac0(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x48u;  // (from the original)
    r8 = r0;
    r10 = r1;
    r5 = *gptr<u32>(r13 + 0x48u);  // (from the original)
    r6 = r3;
    r7 = r2;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00656c20(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r9 = r0;
    r4 = r0 + 0xeu;  // (from the original)
    r1 = r10;
    r0 = r0 + 0xfu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_005d41b8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r0 = u32(s32(r7) >> 8);
    *gptr<u8>(r9 + 0x13u) = u8(r0);  // (from the original)
    *gptr<u8>(r4) = u8(r6);
    r0 = r0 << 8;
    *gptr<u8>(r9 + 0x14u) = u8(r5);  // (from the original)
    r5 = uxth(r0);
    *gptr<u16>(r13) = u16(r0);
    r6 = 0u;
    r1 = r4 + 1u;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00759a54(r0, r1, r2, r3);
    S1 = guest::cpu()->s[1];
    r3 = 1u;
    r2 = r5;
    r1 = r13 + 8u;
    S0 = std::bit_cast<float>(*gptr<u32>(0x94df04u));  // (from the original)
    r0 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_0064ee94(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = r13 + 0x14u;  // (from the original)
    r0 = r8;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_0068319c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    *gptr<u8>(r4 + 7u) = u8(r6);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00305f2c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 == 3u) {
        goto L_66abd4;
    }
    if (*gptr<u32>(0xaaf14cu) == 0) {  // (from the original)
        goto L_66abd4;
    }
    r0 = u32(*gptr<u8>(0x953f68u));  // (from the original)
    if (r0 != 7u) {
        goto L_66abd4;
    }
    r5 = 0x19u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_005c2c80(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 != 0) {
        r0 = 4u;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_00700198(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = u32(*gptr<u16>(r0 + 4u));
        S1 = std::bit_cast<float>(*gptr<u32>(0x66ac1cu));  // (from the original)
        S0 = std::bit_cast<float>(vcvt_uz_f(float(std::bit_cast<u32>(std::bit_cast<float>(u32(*gptr<u16>(r0 + 2u)) + r1))) * S1));
        r5 = 0x4bu - std::bit_cast<u32>(S0);  // (from the original)
    }
    r0 = 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002ff6f8(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 >= r5) {
        goto L_66abd4;
    }
    *gptr<u8>(r4 + 7u) = u8(1u);
L_66abd4:;
    r1 = u32(*gptr<u8>(r8 + 0x172u));  // (from the original)
    r2 = r9;
    r3 = 0u;
    if (u32(*gptr<u8>(r4 + 7u)) == 0) {
        r1 = r1 & ~0x80u;  // (from the original)
    } else {
        r1 = r1 | 0x80u;  // (from the original)
    }
    *gptr<u8>(r8 + 0x172u) = u8(r1);  // (from the original)
    r0 = r8;
    r13 = r13 + 0x48u;  // (from the original)
    r1 = 0x7bu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_0066aac0
GUEST_EXPORT(0x0066aac0, d_0066aac0::f_0066aac0);

// f_0066ac20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066ac20 {

inline constexpr guest::Function<0x005d41fc, u32(u32, u32, u32, u32)> call_005d41fc;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_0066ac20(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r12);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r7 = r3;
    r9 = r0;
    r11 = r1;
    r1 = r13 + 0x28u;  // (from the original)
    r8 = r2;
    r5 = *gptr<u32>(r1);
    r6 = *gptr<u32>(r1 + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_00656c20(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r10 = r0;
    r4 = r0 + 0xeu;  // (from the original)
    r1 = r11;
    r0 = r0 + 0xfu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005d41fc(r0, r1, r2, r3);
    *gptr<u8>(r10 + 0x13u) = u8(u32(s32(r8) >> 8));  // (from the original)
    *gptr<u8>(r4) = u8(r7);
    *gptr<u8>(r10 + 0x14u) = u8(r5);  // (from the original)
    *gptr<u8>(r4 + 8u) = u8(r6);
    r2 = r10;
    r3 = 0u;
    r1 = 0x7eu;  // (from the original)
    *gptr<u8>(r4 + 7u) = u8(u32(*gptr<u8>(r9 + 0x172u)) >> 7);  // (from the original)
    r0 = r9;
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_0066ac20
GUEST_EXPORT(0x0066ac20, d_0066ac20::f_0066ac20);

// f_0066ac8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066ac8c {

inline constexpr guest::Function<0x0013ca2c, u32(u32, u32, u32, u32)> call_0013ca2c;  // (from the original)
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x00582c9c, u32(u32, u32, u32, u32)> call_00582c9c;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x006515ec, u32(u32, u32, u32, u32)> call_006515ec;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)
inline constexpr guest::Function<0x0076ae1c, u32(u32, u32, u32, u32)> call_0076ae1c;  // (from the original)
inline constexpr guest::Function<0x0076c440, u32(u32, u32, u32, u32)> call_0076c440;  // (from the original)

u32 f_0066ac8c(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    r13 = r13 - 0x30u;  // (from the original)
    r9 = r2;
    r11 = r0;
    r10 = r1;
    r6 = r3;
    ea = r13 + 0x30u;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    if (u32(r2 >= 3u) && !u32(r2 == 3u)) {
        r9 = 3u;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00656c20(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r8 = r0 + 0xeu;  // (from the original)
    *gptr<u32>(r13) = u32(r0);
    r1 = u32(*gptr<u8>(r8 + 0x10u));  // (from the original)
    *gptr<u8>(r8 + 0x11u) = u8(1u);  // (from the original)
    r2 = 0x18u & r9 << 3;  // (from the original)
    r0 = (((r1 & ~0x18u | r2) & ~0x20u | r6 << 5) & 0xbfu | r4 << 6) & ~0x80u | r5 << 7;  // (from the original)
    r4 = 0u;
    *gptr<u8>(r8 + 0x10u) = u8(r0);  // (from the original)
    if (!u32(r9 >= 0u) || u32(r9 == 0)) {
        goto L_66ad9c;
    }
L_66ad00:;
    r7 = r4 + (r4 << 2);
    r5 = r7 + r10;
    r0 = r13 + 4u;
    r6 = u32(*gptr<u8>(r5 + 4u));
    guest::cpu()->r[13] = r13;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r7 + r8;
    *gptr<u32>(r0) = u32(*gptr<u32>(r5));
    r0 = r2;
    r1 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0013ca2c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r6 != 0) {
        goto L_66ad88;
    }
    r5 = r13 + 4u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0076c440(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_66ad88;
    }
    r0 = u32(*gptr<u8>(r11 + 0x1acu));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006515ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    if (r0 == 0) {
        goto L_66ad88;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0076ae1c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 >= 0x64u) {  // (from the original)
        goto L_66ad88;
    }
    r1 = uxth(r0);
    r0 = r6 + 0x5494u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00582c9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_66ad88:;
    r4 = r4 + 1u;
    if (r4 < r9) {
        guest::preempt();
        goto L_66ad00;
    }
L_66ad9c:;
    r2 = *gptr<u32>(r13);
    r0 = r11;
    r13 = r13 + 0x30u;  // (from the original)
    r3 = 0u;
    r1 = 0x36u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_0066ac8c
GUEST_EXPORT(0x0066ac8c, d_0066ac8c::f_0066ac8c);

// f_0066b13c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066b13c {

struct __attribute__((packed)) Object_0066b13c_0 {
    u8 unknown_0[0x1ac];  // (not used here)
    u8 byte_1ac;
};
GUEST_OFFSET(Object_0066b13c_0, byte_1ac, 0x1ac);  // (from the original)

inline constexpr guest::Function<0x002fe8a4, u32(u32, u32, u32, u32)> call_002fe8a4;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_0066b13c(gptr<Object_0066b13c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18;  // (from the original)
    r5 = r0;
    r6 = r1;
    r4 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    r0 = u32(arg0->byte_1ac);
    r7 = r2;
    r8 = r3;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe8a4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_00656c20(r0, r1, r2, r3);
        r2 = r0;
        r0 = r0 + 0xeu;  // (from the original)
        r1 = u32(*gptr<u8>(r0 + 0x10u));  // (from the original)
        *gptr<u8>(r0 + 0x11u) = u8(r6);  // (from the original)
        *gptr<u8>(r0 + 0x10u) = u8(((r1 & ~0x38u | (r4 ^ 1u) << 5) & 0xbfu | r7 << 6) & ~0x80u | r8 << 7);  // (from the original)
        r0 = r5;
        r13 = r13 + 0x18;  // (from the original)
        r3 = 0u;
        r1 = 0x36u;  // (from the original)
        guest::cpu()->r[13] = r13;
        return call_0064d0b8(r0, r1, r2, r3);
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0066b13c
GUEST_EXPORT(0x0066b13c, d_0066b13c::f_0066b13c);

// f_0066b1b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066b1b4 {

inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_0066b1b4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r5 = r2;
    r7 = r1;
    r8 = r0;
    r0 = call_00656c20(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    r4 = r0 + 0xeu;  // (from the original)
    r1 = r7;
    r0 = r4;
    r0 = call_005d41b8(r0, r1, r2, r3);
    *gptr<u8>(r4 + 4u) = u8(u32(s32(r5) >> 8));
    r2 = r6;
    r0 = r8;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    r3 = 0u;
    r1 = 0x1du;  // (from the original)
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_0066b1b4
GUEST_EXPORT(0x0066b1b4, d_0066b1b4::f_0066b1b4);

// f_0066b1fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066b1fc {

inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_0066b1fc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r5 = r2;
    r7 = r1;
    r8 = r0;
    r0 = call_00656c20(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    r4 = r0 + 0xeu;  // (from the original)
    r1 = r7;
    r0 = r4;
    r0 = call_005d41b8(r0, r1, r2, r3);
    *gptr<u8>(r4 + 4u) = u8(u32(s32(r5) >> 8));
    r2 = r6;
    r0 = r8;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    r3 = 0u;
    r1 = 0x25u;  // (from the original)
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_0066b1fc
GUEST_EXPORT(0x0066b1fc, d_0066b1fc::f_0066b1fc);

// f_0066b244: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066b244 {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_0066b244(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r4 = r1;
    r5 = r2;
    r6 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00656c20(r0, r1, r2, r3);
    r2 = r0;
    ea = r0 + 0xeu;  // (from the original)
    *gptr<u8>(ea) = u8(r4);
    r0 = ea;
    r1 = 0u;
    *gptr<u8>(r0 + 1u) = u8(r5);
    *gptr<u8>(r0 + 2u) = u8(r1);
    r0 = r6;
    r13 = r13 + 0x10;  // (from the original)
    r3 = r1;
    r1 = 0x5eu;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_0066b244
GUEST_EXPORT(0x0066b244, d_0066b244::f_0066b244);

// f_0066b280: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066b280 {

inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_0066b280(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
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
    r8 = r3;
    r10 = r2;
    r11 = r1;
    r1 = r13 + 0x38u;  // (from the original)
    r0 = *gptr<u32>(r13);
    r5 = *gptr<u32>(r1);
    r6 = *gptr<u32>(r1 + 4);
    r7 = *gptr<u32>(r1 + 8);
    guest::cpu()->r[13] = r13;
    r0 = call_00656c20(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r9 = r0;
    r4 = r0 + 0xeu;  // (from the original)
    r1 = r11;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005d41b8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r10;
    r0 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005d41b8(r0, r1, r2, r3);
    *gptr<u8>(r4 + 8u) = u8(u32(s32(u32(*gptr<u16>(r8))) >> 8));
    *gptr<u8>(r9 + 0x17u) = u8(r5);  // (from the original)
    if (r6 != 0) {
        r3 = 0u;
        r2 = r9;
        if (r7 != 0) {
            r0 = *gptr<u32>(r13);
            r13 = r13 + 0x10u;  // (from the original)
            r1 = 0x2eu;  // (from the original)
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
            r14 = *gptr<u32>(ea + 0x24);  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->r[4] = r4;
            guest::cpu()->r[5] = r5;
            guest::cpu()->r[6] = r6;
            guest::cpu()->r[7] = r7;
            guest::cpu()->r[8] = r8;
            guest::cpu()->r[9] = r9;
            guest::cpu()->r[10] = r10;
            guest::cpu()->r[11] = r11;
            return call_0064d0b8(r0, r1, r2, r3);
        }
        r0 = *gptr<u32>(r13);
        r13 = r13 + 0x10u;  // (from the original)
        r1 = 0x2cu;  // (from the original)
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
        r14 = *gptr<u32>(ea + 0x24);  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[9] = r9;
        guest::cpu()->r[10] = r10;
        guest::cpu()->r[11] = r11;
        return call_0064d0b8(r0, r1, r2, r3);
    }
    r0 = *gptr<u32>(r13);
    r13 = r13 + 0x10u;  // (from the original)
    r2 = r9;
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
    r14 = *gptr<u32>(ea + 0x24);  // (from the original)
    r3 = 0u;
    r1 = 0x2bu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[8] = r8;
    guest::cpu()->r[9] = r9;
    guest::cpu()->r[10] = r10;
    guest::cpu()->r[11] = r11;
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_0066b280
GUEST_EXPORT(0x0066b280, d_0066b280::f_0066b280);

// f_0066fa84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066fa84 {

inline constexpr guest::Function<0x0064ee94, u32(u32, u32, u32, u32)> call_0064ee94;  // (from the original)
inline constexpr guest::Function<0x006c6640, u32(u32, u32, u32, u32)> call_006c6640;  // (from the original)

u32 f_0066fa84(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r4 = r0;
    r0 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    r5 = r1;
    r1 = r2;
    r2 = r3;
    *gptr<u32>(r13) = u32(r3);
    if (r0 == 0) {
        r0 = 0xc000u;  // (from the original)
    } else {
        r0 = 0x4000u;  // (from the original)
    }
    *gptr<u16>(r13) = u16(r0 + u32(*gptr<u16>(r13)));
    r3 = 1u;
    S1 = std::bit_cast<float>(*gptr<u32>(0x85f2d4u));  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    S0 = S1 - std::bit_cast<float>(*gptr<u32>(0x886a80u));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_0064ee94(r0, r1, r2, r3);
    S1 = guest::cpu()->s[1];
    r2 = *gptr<u32>(r13);
    r3 = 1u;
    r1 = r13 + 0x10u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x94df04u));  // (from the original)
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_0064ee94(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = 0u;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_006c6640(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r4) = u32(*gptr<u32>(r13 + 4u));
    *gptr<u32>(r4 + 4u) = u32(*gptr<u32>(r13 + 8u));
    *gptr<u32>(r4 + 8u) = u32(*gptr<u32>(r13 + 0xcu));  // (from the original)
    r0 = u32(*gptr<u16>(r13));
    *gptr<u16>(r5) = u16(r0);
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0066fa84
GUEST_EXPORT(0x0066fa84, d_0066fa84::f_0066fa84);

// f_0066fb3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066fb3c {

struct __attribute__((packed)) Object_0066fb3c_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0066fb3c_1, word_8, 0x8);  // (from the original)


u32 f_0066fb3c(u32 r0, gptr<Object_0066fb3c_1> arg1) {
    u32 r1 = arg1.addr();
    if (r0 != 0x67u) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0x43960000u;  // (from the original)
    if (s32(arg1->word_8) <= s32(r1)) {
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0066fb3c
GUEST_EXPORT(0x0066fb3c, d_0066fb3c::f_0066fb3c);

// f_0066fb64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066fb64 {

struct __attribute__((packed)) Object_0066fb64_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
};
GUEST_OFFSET(Object_0066fb64_0, byte_171, 0x171);  // (from the original)

inline constexpr guest::Function<0x0068eff0, u32(u32, u32, u32, u32)> call_0068eff0;  // (from the original)

u32 f_0066fb64(gptr<Object_0066fb64_0> arg0) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0 + 0x171u;  // (from the original)
    res = u32(arg0->byte_171) << 0x1a >> 0x1f;  // (from the original)
    r0 = res;
    if (res == 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = call_0068eff0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = u32(*gptr<u8>(r4 + 7u)) | 0x80u;  // (from the original)
    *gptr<u8>(r4 + 7u) = u8(r0);
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0066fb64
GUEST_EXPORT(0x0066fb64, d_0066fb64::f_0066fb64);

// f_0066fc98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066fc98 {

inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_0066fc98(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = r2;
    r7 = r1;
    r6 = r0;
    r0 = call_00656c20(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r5 = r0;
    r2 = r0 + 0xeu;  // (from the original)
    *gptr<u8>(r0 + 0x12u) = u8(u32(s32(u32(*gptr<u16>(r4))) >> 8));  // (from the original)
    r1 = r7;
    r0 = r2;
    r0 = call_005d41b8(r0, r1, r2, r3);
    r2 = r5;
    r0 = r6;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    r3 = 0u;
    r1 = 0xe9u;  // (from the original)
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_0066fc98
GUEST_EXPORT(0x0066fc98, d_0066fc98::f_0066fc98);

// f_0066fd10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066fd10 {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_0066fd10(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r4 = r1;
    r5 = r2;
    r6 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00656c20(r0, r1, r2, r3);
    r2 = r0;
    ea = r0 + 0xeu;  // (from the original)
    *gptr<u8>(ea) = u8(r4);
    r3 = 0u;
    *gptr<u8>(ea + 1u) = u8(r5);
    r0 = r6;
    r13 = r13 + 0x10;  // (from the original)
    r1 = 0x5cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_0066fd10
GUEST_EXPORT(0x0066fd10, d_0066fd10::f_0066fd10);

// f_0066fd44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066fd44 {

inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_0066fd44(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r6 = r3;
    r8 = r1;
    r5 = r2;
    r9 = r0;
    r0 = call_00656c20(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    r4 = r0 + 0xeu;  // (from the original)
    r1 = r8;
    r0 = r4;
    r0 = call_005d41b8(r0, r1, r2, r3);
    *gptr<u8>(r4 + 4u) = u8(u32(s32(r5) >> 8));
    r2 = r7;
    r0 = r9;
    *gptr<u8>(r7 + 0x13u) = u8(r6);  // (from the original)
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    r3 = 0u;
    r1 = 0xc1u;  // (from the original)
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_0066fd44
GUEST_EXPORT(0x0066fd44, d_0066fd44::f_0066fd44);

// f_0066fd94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066fd94 {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_0066fd94(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r1;
    r5 = r0;
    r0 = call_00656c20(r0, r1, r2, r3);
    r2 = r0;
    *gptr<u8>(r0 + 0xeu) = u8(r4);  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r3 = 0u;
    r1 = 0x8du;  // (from the original)
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_0066fd94
GUEST_EXPORT(0x0066fd94, d_0066fd94::f_0066fd94);

// f_0066fdc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066fdc0 {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)

u32 f_0066fdc0() {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r3 = 0u;
    r2 = r3;
    r1 = 0x17u;  // (from the original)
    return call_0064d0b8(guest::cpu()->r[0], r1, r2, r3);
}

}  // namespace d_0066fdc0
GUEST_EXPORT(0x0066fdc0, d_0066fdc0::f_0066fdc0);

// f_0066ffb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066ffb4 {

inline constexpr guest::Function<0x004eb6c4, u32(u32, u32, u32, u32)> call_004eb6c4;  // (from the original)
inline constexpr guest::Function<0x0065e3a0, u32(u32, u32, u32, u32)> call_0065e3a0;  // (from the original)
inline constexpr guest::Function<0x006c588c, u32(u32, u32, u32, u32)> call_006c588c;  // (from the original)

u32 f_0066ffb4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 cf = 0;
    r5 = r1;
    r6 = r0;
    r13 = r13 - 0x30u;  // (from the original)
    r4 = r3;
    r7 = r2;
    r1 = 0u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_006c588c(r0, r1, r2, r3);
    r12 = guest::cpu()->r[12];
    if (r0 != 0x16u) {  // (from the original)
        r3 = r4;
        r2 = r7;
        r1 = r5;
        r0 = r6;
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[13] = r13;
        return call_0065e3a0(r0, r1, r2, r3);
    }
    cf = r4 >= 4u;
    if (!cf) {
        r0 = 0x94df14u;  // (from the original)
    }
    r1 = 0u;
    r2 = r5;
    r5 = r13 + 8u;
    if (!cf) {
        r12 = *gptr<u32>(r0 + (r4 << 2));
    }
    *gptr<u16>(r13 + 0x10u) = u16(r1);  // (from the original)
    *gptr<u16>(r13 + 0x14u) = u16(r1);  // (from the original)
    r4 = 0xae5664u;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(1u);
    if (cf) {
        r12 = 0u;
    }
    *gptr<u16>(r13 + 0x12u) = u16(r7);  // (from the original)
    *gptr<u32>(r13) = u32(r4);
    *gptr<u32>(r5) = u32(0x842bccu);  // (from the original)
    *gptr<u32>(r5 + 4) = u32(r12);
    r3 = r13 + 0x10u;  // (from the original)
    r1 = 0u;
    r0 = r6 + 0x19cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_004eb6c4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0066ffb4
GUEST_EXPORT(0x0066ffb4, d_0066ffb4::f_0066ffb4);
