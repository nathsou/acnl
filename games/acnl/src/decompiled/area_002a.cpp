// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_002a2850: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a2850 {

inline constexpr guest::Function<0x001323bc, u32(u32, u32, u32, u32)> call_001323bc;  // (from the original)
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32, u32)> call_00569e6c;  // (from the original)

u32 f_002a2850(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_001323bc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r4 + 0x24u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    r2 = 0u;
    return call_00569e6c(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_002a2850
GUEST_EXPORT(0x002a2850, d_002a2850::f_002a2850);

// f_002a2ad0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a2ad0 {

inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> call_001323b4;  // (from the original)

u32 f_002a2ad0(u32 r0) {
    r0 = r0 + 0x24u;  // (from the original)
    return call_001323b4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_002a2ad0
GUEST_EXPORT(0x002a2ad0, d_002a2ad0::f_002a2ad0);

// f_002a3e08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a3e08 {

struct __attribute__((packed)) Object_002a3e08_0 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Object_002a3e08_0, word_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x004c5104, u32(u32, u32, u32, u32)> call_004c5104;  // (from the original)
inline constexpr guest::Function<0x006b4170, u32(u32, u32, u32, u32)> call_006b4170;  // (from the original)
inline constexpr guest::Function<0x006b41a4, u32(u32, u32, u32, u32)> call_006b41a4;  // (from the original)
inline constexpr guest::Function<0x0070eb14, u32(u32, u32, u32, u32)> call_0070eb14;  // (from the original)

u32 f_002a3e08(gptr<Object_002a3e08_0> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r5 = r1;
    r13 = r13 - 0xc0u;  // (from the original)
    r8 = 0x94d080u;  // (from the original)
    r4 = r0;
    if (r1 != 0) {
        r1 = arg0->word_14;
        r0 = *gptr<u32>(0x94d004u);  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0 = call_0070eb14(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        r7 = ~0u;
        if (u32(r0 >= r5) && !u32(r0 == r5)) {
            goto L_2a3e6c;
        }
        *gptr<u32>(r4 + 0x14u) = u32(r7);  // (from the original)
        *gptr<u32>(r4 + 0x18u) = u32(r7);  // (from the original)
        r0 = 0u;
        r13 = r13 + 0xc0u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    r2 = *gptr<u32>(r4 + 0x18u);  // (from the original)
    r0 = *gptr<u32>(r8);
    r1 = r4 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_006b4170(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    goto L_2a3f20;
L_2a3e6c:;
    r6 = 0u;
    ea = r13;
    *gptr<u32>(ea) = u32(r6);
    ea = r13 + 0x18u;  // (from the original)
    *gptr<u32>(ea) = u32(r6);
    ea = r13 + 0x1cu;  // (from the original)
    *gptr<u32>(ea) = u32(r6);
    *gptr<u32>(ea + 4) = u32(r7);
    *gptr<u32>(r13 + 0x34u) = u32(r6);  // (from the original)
    *gptr<u32>(r13 + 0x24u) = u32(r7);  // (from the original)
    *gptr<u32>(r13 + 0x28u) = u32(r7);  // (from the original)
    *gptr<u32>(r13 + 0x30u) = u32(r6);  // (from the original)
    *gptr<u32>(r13 + 0x2cu) = u32(r7);  // (from the original)
    *gptr<u16>(r13 + 0x48u) = u16(r6);  // (from the original)
    r1 = 0x4bfb50u;  // (from the original)
    r3 = 4u;
    r2 = 0xdu;  // (from the original)
    r0 = r13 + 0x4cu;  // (from the original)
    *gptr<u32>(r13 + 0x38u) = u32(r6);  // (from the original)
    *gptr<u32>(r13 + 0x3cu) = u32(r6);  // (from the original)
    *gptr<u32>(r13 + 0x40u) = u32(r6);  // (from the original)
    *gptr<u32>(r13 + 0x44u) = u32(r6);  // (from the original)
    *gptr<u16>(r13 + 0x4au) = u16(r6);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r0 = r0 - 4u;
    S0 = std::bit_cast<float>(*gptr<u32>(0x2a3f58u));  // (from the original)
    *gptr<u32>(r0 + 0x38u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    ea = r0 + 0x3cu;  // (from the original)
    *gptr<u8>(ea) = u8(0x7fu);  // (from the original)
    ea = r0 + 0x3fu;  // (from the original)
    *gptr<u8>(ea) = u8(r6);
    ea = r0 + 0x40u;  // (from the original)
    *gptr<u32>(ea) = u32(r7);
    r1 = r0 - 0x48u;  // (from the original)
    ea = r0 + 0x3du;  // (from the original)
    *gptr<u16>(ea) = u16(r6);
    ea = r0 + 0x44u;  // (from the original)
    *gptr<u8>(ea) = u8(r6);
    r0 = ea;
    r3 = r13;
    *gptr<u32>(r0 + 4u) = u32(r6);
    *gptr<u32>(r0 + 8u) = u32(r6);
    *gptr<u32>(r1 + 0x98u) = u32(r6);  // (from the original)
    *gptr<u8>(r1 + 0x9cu) = u8(r6);  // (from the original)
    *gptr<u32>(r1 + 0xa4u) = u32(r6);  // (from the original)
    r0 = 1u;
    *gptr<u32>(r13) = u32(r0);
    *gptr<u8>(r13 + 4u) = u8(r0);
    *gptr<u32>(r13 + 8u) = u32(r5);
    r2 = *gptr<u32>(r4 + 0x18u);  // (from the original)
    r0 = *gptr<u32>(r8);
    r1 = r4 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_006b41a4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
L_2a3f20:;
    r5 = r0;
    if (r0 != 0) {
        r2 = 0x83a8ecu;  // (from the original)
        r0 = *gptr<u32>(r4 + 0x1cu);  // (from the original)
        r1 = 0u;
        S0 = std::bit_cast<float>(*gptr<u32>(r2 + 4u));
        if (r0 != 0) {
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            r0 = call_004c5104(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            S0 = guest::cpu()->s[0];
        }
    }
    r0 = r5;
    r13 = r13 + 0xc0u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_002a3e08
GUEST_EXPORT(0x002a3e08, d_002a3e08::f_002a3e08);

// f_002a4abc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a4abc {

struct __attribute__((packed)) Object_002a4abc_0 {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
    u8 unknown_11[0x3];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u32 word_30;
    u8 unknown_34[0x5cc];  // (not used here)
    u32 word_600;
    u32 word_604;
    u32 word_608;
    u32 word_60c;
    u8 unknown_610[0x1c98];  // (not used here)
    u16 half_22a8;
    u16 half_22aa;
    u16 half_22ac;
    u16 half_22ae;
    u16 half_22b0;
    u16 half_22b2;
    u32 word_22b4;
    u32 word_22b8;
    u32 word_22bc;
    u32 word_22c0;
    u8 unknown_22c4[0xf0];  // (not used here)
    u32 word_23b4;
    u32 word_23b8;
    u32 word_23bc;
    u8 byte_23c0;
    u8 byte_23c1;
    u8 unknown_23c2[0x2];  // (not used here)
    u32 word_23c4;
};
GUEST_OFFSET(Object_002a4abc_0, byte_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, word_600, 0x600);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, word_604, 0x604);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, word_608, 0x608);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, word_60c, 0x60c);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, half_22a8, 0x22a8);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, half_22aa, 0x22aa);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, half_22ac, 0x22ac);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, half_22ae, 0x22ae);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, half_22b0, 0x22b0);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, half_22b2, 0x22b2);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, word_22b4, 0x22b4);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, word_22b8, 0x22b8);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, word_22bc, 0x22bc);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, word_22c0, 0x22c0);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, word_23b4, 0x23b4);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, word_23b8, 0x23b8);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, word_23bc, 0x23bc);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, byte_23c0, 0x23c0);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, byte_23c1, 0x23c1);  // (from the original)
GUEST_OFFSET(Object_002a4abc_0, word_23c4, 0x23c4);  // (from the original)


u32 f_002a4abc(gptr<Object_002a4abc_0> arg0) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    float S0 = 0;
    r1 = 0u;
    r3 = ~0u;
    arg0->byte_10 = u8(r1);
    arg0->word_14 = u32(r3);
    arg0->word_1c = u32(r1);
    arg0->word_20 = u32(0x78u);  // (from the original)
    arg0->word_18 = u32(r3);
    arg0->word_24 = u32(r1);
    arg0->word_28 = u32(r1);
    arg0->word_2c = u32(r1);
    arg0->word_30 = u32(r1);
    ea = r0 + 0x600u;  // (from the original)
    arg0->word_600 = u32(r1);
    r0 = ea;
    r12 = 0x262u;  // (from the original)
    arg0->word_604 = u32(r1);
    arg0->word_608 = u32(r1);
    res = r0 + 0x10u;  // (from the original)
    r2 = res;
    arg0->word_60c = u32(r1);
    if (res != 0) {
        arg0->word_600 = u32(r2);
        arg0->word_604 = u32(r12);
    }
    arg0->half_22a8 = u16(r3);
    arg0->half_22aa = u16(r3);
    arg0->half_22ac = u16(r1);
    arg0->half_22ae = u16(r3);
    arg0->half_22b0 = u16(r3);
    r0 = r0 + 0x1cb4u;  // (from the original)
    arg0->half_22b2 = u16(4u);
    arg0->word_22b4 = u32(r1);
    arg0->word_22b8 = u32(r1);
    arg0->word_22bc = u32(r1);
    res = r0 + 0x10u;  // (from the original)
    r2 = res;
    r3 = 0x14u;  // (from the original)
    arg0->word_22c0 = u32(r1);
    if (res != 0) {
        arg0->word_22b4 = u32(r2);
        arg0->word_22b8 = u32(r3);
    }
    S0 = std::bit_cast<float>(*gptr<u32>(0x2a4b80u));  // (from the original)
    arg0->word_23b4 = u32(std::bit_cast<u32>(S0));
    arg0->word_23b8 = u32(std::bit_cast<u32>(S0));
    arg0->word_23bc = u32(std::bit_cast<u32>(S0));
    arg0->byte_23c0 = u8(r1);
    arg0->byte_23c1 = u8(1u);
    r0 = r0 - 0x22b4u;  // (from the original)
    arg0->word_23c4 = u32(r1);
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_002a4abc
GUEST_EXPORT(0x002a4abc, d_002a4abc::f_002a4abc);

// f_002a4b84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a4b84 {

struct __attribute__((packed)) Object_002a4b84_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_002a4b84_0, word_0, 0x0);  // (from the original)


void f_002a4b84(gptr<Object_002a4b84_0> arg0) {
    u32 r1 = 0;
    r1 = *gptr<u32>(0x94d548u);  // (from the original)
    arg0->word_0 = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_002a4b84
GUEST_EXPORT(0x002a4b84, d_002a4b84::f_002a4b84);

// f_002a4b98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a4b98 {

inline constexpr guest::Function<0x002783c4, u32(u32, u32, u32, u32)> call_002783c4;  // (from the original)
inline constexpr guest::Function<0x00278484, u32(u32, u32, u32, u32)> call_00278484;  // (from the original)

u32 f_002a4b98(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r0 = 0x94d560u;  // (from the original)
    r5 = *gptr<u32>(r0);
    if (r5 != 0) {
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_002783c4(r0, r1, r2, r3);
        r6 = 0x46u;  // (from the original)
        r3 = 0x20u;  // (from the original)
        r2 = 0xfu;  // (from the original)
        r1 = r4 + 0xd4u;  // (from the original)
        r0 = r5;
        *gptr<u32>(r13) = u32(r6);
        guest::cpu()->r[13] = r13;
        r0 = call_00278484(r0, r1, r2, r3);
        r3 = 0x21u;  // (from the original)
        r2 = 0xfu;  // (from the original)
        r1 = r4 + 0x304u;  // (from the original)
        r0 = r5;
        *gptr<u32>(r13) = u32(r6);
        guest::cpu()->r[13] = r13;
        r0 = call_00278484(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r0 = 1u;
        *gptr<u8>(r4 + 0x534u) = u8(r0);  // (from the original)
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002a4b98
GUEST_EXPORT(0x002a4b98, d_002a4b98::f_002a4b98);

// f_002a4bfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a4bfc {

struct __attribute__((packed)) Object_002a4bfc_0 {
    u8 unknown_0[0x53c];  // (not used here)
    u32 word_53c;
    u32 word_540;
    u8 unknown_544[0x1];  // (not used here)
    u8 byte_545;
    u8 unknown_546[0x2];  // (not used here)
    u32 word_548;
};
GUEST_OFFSET(Object_002a4bfc_0, word_53c, 0x53c);  // (from the original)
GUEST_OFFSET(Object_002a4bfc_0, word_540, 0x540);  // (from the original)
GUEST_OFFSET(Object_002a4bfc_0, byte_545, 0x545);  // (from the original)
GUEST_OFFSET(Object_002a4bfc_0, word_548, 0x548);  // (from the original)


void f_002a4bfc(gptr<Object_002a4bfc_0> arg0) {
    u32 r1 = 0;
    u32 zf = 0;
    arg0->word_540 = u32(0u);
    arg0->word_53c = u32(arg0->word_53c + 1u);
    r1 = u32(arg0->byte_545);
    zf = r1 == 1u;
    if (zf) {
        r1 = arg0->word_548;
        zf = r1 == 0;
    }
    if (zf) {
        r1 = 0x78u;  // (from the original)
        arg0->word_548 = u32(r1);
    } else {
        guest::cpu()->r[1] = r1;
        return;
    }
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_002a4bfc
GUEST_EXPORT(0x002a4bfc, d_002a4bfc::f_002a4bfc);

// f_002a4c30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a4c30 {

struct __attribute__((packed)) Object_002a4c30_0 {
    u8 unknown_0[0xc4];  // (not used here)
    u32 word_c4;
};
GUEST_OFFSET(Object_002a4c30_0, word_c4, 0xc4);  // (from the original)


void f_002a4c30(gptr<Object_002a4c30_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    if (r1 >= 0x30u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return;
    }
    r1 = r0 + (r1 << 2);
    if (*gptr<u32>(r1 + 4u) == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    *gptr<u32>(r1 + 4u) = u32(0u);
    r1 = arg0->word_c4 - 1u;
    arg0->word_c4 = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_002a4c30
GUEST_EXPORT(0x002a4c30, d_002a4c30::f_002a4c30);

// f_002a4c60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a4c60 {

struct __attribute__((packed)) Object_002a4c60_0 {
    u8 unknown_0[0x538];  // (not used here)
    u32 word_538;
    u32 word_53c;
    u32 word_540;
    u8 byte_544;
    u8 byte_545;
    u8 unknown_546[0x2];  // (not used here)
    u32 word_548;
};
GUEST_OFFSET(Object_002a4c60_0, word_538, 0x538);  // (from the original)
GUEST_OFFSET(Object_002a4c60_0, word_53c, 0x53c);  // (from the original)
GUEST_OFFSET(Object_002a4c60_0, word_540, 0x540);  // (from the original)
GUEST_OFFSET(Object_002a4c60_0, byte_544, 0x544);  // (from the original)
GUEST_OFFSET(Object_002a4c60_0, byte_545, 0x545);  // (from the original)
GUEST_OFFSET(Object_002a4c60_0, word_548, 0x548);  // (from the original)


void f_002a4c60(gptr<Object_002a4c60_0> arg0) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 zf = 0;
    guest::cpu()->r[13] -= 0xcu;  // (from the original)
    r3 = r0 + 0x500u;  // (from the original)
    r4 = 1u;
    r2 = arg0->word_540 + 1u;
    arg0->word_540 = u32(r2);
    r1 = 0u;
    r12 = r0 + 0x548u;  // (from the original)
    r5 = arg0->word_538 + 1u;
    arg0->word_538 = u32(r5);
    if (u32(arg0->byte_544) != 0) {
        if (r2 >= 0x78u) {  // (from the original)
            arg0->byte_544 = u8(r1);
            arg0->byte_545 = u8(r1);
            arg0->word_548 = u32(r1);
            arg0->word_538 = u32(r1);
            arg0->word_53c = u32(r1);
            goto L_2a4cec;
        }
        if (r2 >= 0x1eu) {  // (from the original)
            arg0->byte_545 = u8(r4);
        }
        goto L_2a4cec;
    }
    if (r2 >= 0x5au) {  // (from the original)
        arg0->word_538 = u32(r1);
        arg0->word_53c = u32(r1);
        goto L_2a4cec;
    }
    if (r5 < 0x78u) {  // (from the original)
        goto L_2a4cec;
    }
    if (r2 < 0x1eu) {  // (from the original)
        arg0->byte_544 = u8(r4);
        arg0->word_540 = u32(r1);
    }
L_2a4cec:;
    r2 = u32(*gptr<u8>(r3 + 0x45u));  // (from the original)
    zf = r2 == 0;
    if (!zf) {
        r2 = arg0->word_548;
        zf = r2 == 0;
    }
    if (!zf) {
        res = r2 - 1u;
        *gptr<u32>(r12) = u32(res);
        if (res == 0) {
            arg0->byte_545 = u8(r1);
        }
    }
    guest::cpu()->r[13] += 0xcu;  // (from the original)
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_002a4c60
GUEST_EXPORT(0x002a4c60, d_002a4c60::f_002a4c60);

// f_002a502c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a502c {

struct __attribute__((packed)) Object_002a502c_0 {
    u8 unknown_0[0xc4];  // (not used here)
    u32 word_c4;
};
GUEST_OFFSET(Object_002a502c_0, word_c4, 0xc4);  // (from the original)


u32 f_002a502c(gptr<Object_002a502c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 zf = 0;
    u32 cf = 0;
    r2 = r0;
    r0 = arg0->word_c4;
    zf = r0 == 0x30u;  // (from the original)
    cf = r0 >= 0x30u;  // (from the original)
    if (cf && !zf) {
        r0 = 0x31u;  // (from the original)
    }
    if (!cf || zf) {
        r0 = 0u;
    }
    if (cf && !zf) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    do {
L_2a5044:;
        if (*gptr<u32>(r2 + (r0 << 2) + 4u) == 0) {
            *gptr<u32>(r2 + (r0 << 2) + 4u) = u32(r1);
            r1 = *gptr<u32>(r2 + 0xc4u) + 1u;  // (from the original)
            *gptr<u32>(r2 + 0xc4u) = u32(r1);  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (r0 < 0x30u);  // (from the original)
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002a502c
GUEST_EXPORT(0x002a502c, d_002a502c::f_002a502c);

// f_002a5fa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a5fa8 {

struct __attribute__((packed)) Object_002a5fa8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_002a5fa8_0, word_0, 0x0);  // (from the original)


void f_002a5fa8(gptr<Object_002a5fa8_0> arg0, u32 r1) {
    if (arg0->word_0 == 0) {
        arg0->word_0 = u32(r1);
    }
    return;
}

}  // namespace d_002a5fa8
GUEST_EXPORT(0x002a5fa8, d_002a5fa8::f_002a5fa8);

// f_002a6594: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a6594 {

struct __attribute__((packed)) Object_002a6594_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_002a6594_0, word_0, 0x0);  // (from the original)


void f_002a6594(gptr<Object_002a6594_0> arg0) {
    u32 r1 = 0;
    r1 = arg0->word_0;
    if (r1 != 0) {
        r1 = 0u;
        arg0->word_0 = u32(r1);
    }
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_002a6594
GUEST_EXPORT(0x002a6594, d_002a6594::f_002a6594);

// f_002a65d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a65d0 {

struct __attribute__((packed)) Object_002a65d0_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 unknown_9[0x3];  // (not used here)
    u32 word_c;
    u8 byte_10;
    u8 byte_11;
    u8 unknown_12[0x2];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Object_002a65d0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002a65d0_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002a65d0_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_002a65d0_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002a65d0_0, byte_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_002a65d0_0, byte_11, 0x11);  // (from the original)
GUEST_OFFSET(Object_002a65d0_0, word_14, 0x14);  // (from the original)


void f_002a65d0(gptr<Object_002a65d0_0> arg0) {
    u32 r1 = 0;
    float S0 = 0;
    r1 = 0u;
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(r1);
    arg0->byte_8 = u8(r1);
    arg0->word_c = u32(1u);
    S0 = std::bit_cast<float>(*gptr<u32>(0x2a65fcu));  // (from the original)
    arg0->byte_10 = u8(r1);
    arg0->byte_11 = u8(r1);
    arg0->word_14 = u32(std::bit_cast<u32>(S0));
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return;
}

}  // namespace d_002a65d0
GUEST_EXPORT(0x002a65d0, d_002a65d0::f_002a65d0);

// f_002a661c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a661c {

struct __attribute__((packed)) Object_002a661c_0 {
    u8 unknown_0[0x1418];  // (not used here)
    u16 half_1418;
    u8 byte_141a;
    u8 byte_141b;
    u16 half_141c;
    u8 byte_141e;
    u8 byte_141f;
    u16 half_1420;
    u8 byte_1422;
    u8 byte_1423;
    u16 half_1424;
    u8 byte_1426;
    u8 byte_1427;
    u16 half_1428;
    u8 byte_142a;
    u8 byte_142b;
    u16 half_142c;
    u8 byte_142e;
    u8 byte_142f;
    u16 half_1430;
    u8 byte_1432;
    u8 byte_1433;
    u16 half_1434;
    u8 byte_1436;
    u8 byte_1437;
    u16 half_1438;
    u8 byte_143a;
    u8 byte_143b;
    u16 half_143c;
    u8 byte_143e;
    u8 byte_143f;
};
GUEST_OFFSET(Object_002a661c_0, half_1418, 0x1418);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, byte_141a, 0x141a);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, byte_141b, 0x141b);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, half_141c, 0x141c);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, byte_141e, 0x141e);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, byte_141f, 0x141f);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, half_1420, 0x1420);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, byte_1422, 0x1422);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, byte_1423, 0x1423);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, half_1424, 0x1424);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, byte_1426, 0x1426);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, byte_1427, 0x1427);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, half_1428, 0x1428);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, byte_142a, 0x142a);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, byte_142b, 0x142b);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, half_142c, 0x142c);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, byte_142e, 0x142e);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, byte_142f, 0x142f);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, half_1430, 0x1430);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, byte_1432, 0x1432);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, byte_1433, 0x1433);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, half_1434, 0x1434);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, byte_1436, 0x1436);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, byte_1437, 0x1437);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, half_1438, 0x1438);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, byte_143a, 0x143a);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, byte_143b, 0x143b);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, half_143c, 0x143c);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, byte_143e, 0x143e);  // (from the original)
GUEST_OFFSET(Object_002a661c_0, byte_143f, 0x143f);  // (from the original)


u32 f_002a661c(gptr<Object_002a661c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = 0u;
    arg0->half_1418 = u16(r1);
    arg0->byte_141a = u8(r1);
    arg0->byte_141b = u8(r1);
    arg0->half_141c = u16(r1);
    arg0->byte_141e = u8(r1);
    arg0->byte_141f = u8(r1);
    arg0->half_1420 = u16(r1);
    arg0->byte_1422 = u8(r1);
    arg0->byte_1423 = u8(r1);
    arg0->half_1424 = u16(r1);
    arg0->byte_1426 = u8(r1);
    arg0->byte_1427 = u8(r1);
    arg0->half_1428 = u16(r1);
    arg0->byte_142a = u8(r1);
    arg0->byte_142b = u8(r1);
    arg0->half_142c = u16(r1);
    arg0->byte_142e = u8(r1);
    arg0->byte_142f = u8(r1);
    arg0->half_1430 = u16(r1);
    arg0->byte_1432 = u8(r1);
    arg0->byte_1433 = u8(r1);
    arg0->half_1434 = u16(r1);
    arg0->byte_1436 = u8(r1);
    arg0->byte_1437 = u8(r1);
    arg0->half_1438 = u16(r1);
    r0 = r0 + 0x143cu;  // (from the original)
    arg0->byte_143a = u8(r1);
    arg0->byte_143b = u8(r1);
    arg0->half_143c = u16(r1);
    arg0->byte_143e = u8(r1);
    arg0->byte_143f = u8(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002a661c
GUEST_EXPORT(0x002a661c, d_002a661c::f_002a661c);

// f_002a684c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a684c {

inline constexpr guest::Function<0x002a66ec, u32(u32, u32, u32, u32)> call_002a66ec;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb338, u32(u32, u32, u32, u32)> call_002fb338;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> call_002fb430;  // (from the original)
inline constexpr guest::Function<0x002fb4a0, u32(u32, u32, u32, u32)> call_002fb4a0;  // (from the original)

u32 f_002a684c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    u32 vf = 0;
    r13 = r13 - 0x38u;  // (from the original)
    r4 = r0;
    r6 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r9 = 0x6e212u;  // (from the original)
    r0 = r0 + 0x80u + r9;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb338(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_002fb378(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = *gptr<u32>(r0);
        r7 = *gptr<u32>(r0 + 4);
        r8 = *gptr<u32>(r0 + 8);
        guest::cpu()->r[13] = r13;
        r0 = call_002fb328(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r0 + 0x80u + r9;  // (from the original)
        r0 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        r0 = call_002fb430(r0, r1, r2, r3);
        ea = r13 + 0xcu;  // (from the original)
        r1 = *gptr<u32>(ea + 4);
        r3 = *gptr<u32>(r13 + 8u);
        r2 = r8;
        *gptr<u32>(r13) = u32(*gptr<u32>(ea));
        *gptr<u32>(r13 + 4) = u32(r1);
        r1 = r7;
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_002fb4a0(r0, r1, r2, r3);
    }
    r10 = 0x88e544u;  // (from the original)
    r9 = 0u;
    *gptr<u32>(r13 + 8u) = u32(r9);
    r3 = 0x31u;  // (from the original)
    r1 = *gptr<u32>(r10 + 4);
    r2 = r6;
    *gptr<u32>(r13) = u32(*gptr<u32>(r10));
    *gptr<u32>(r13 + 4) = u32(r1);
    r1 = r4 + 0x1418u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002a66ec(r0, r1, r2, r3);
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(r9);
    ea = r10 + 8u;
    r1 = *gptr<u32>(ea + 4);
    r3 = 0x32u;  // (from the original)
    r2 = r6;
    *gptr<u32>(r13) = u32(*gptr<u32>(ea));
    *gptr<u32>(r13 + 4) = u32(r1);
    r1 = r4 + 0x141cu;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002a66ec(r0, r1, r2, r3);
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(r9);
    ea = r10 + 0x10u;  // (from the original)
    r1 = *gptr<u32>(ea + 4);
    r3 = 0x33u;  // (from the original)
    r2 = r6;
    *gptr<u32>(r13) = u32(*gptr<u32>(ea));
    *gptr<u32>(r13 + 4) = u32(r1);
    r1 = r4 + 0x1420u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002a66ec(r0, r1, r2, r3);
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(r9);
    ea = r10 + 0x18u;  // (from the original)
    r1 = *gptr<u32>(ea + 4);
    r3 = 0x34u;  // (from the original)
    r2 = r6;
    *gptr<u32>(r13) = u32(*gptr<u32>(ea));
    *gptr<u32>(r13 + 4) = u32(r1);
    r1 = r4 + 0x1424u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002a66ec(r0, r1, r2, r3);
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(r9);
    ea = r10 + 0x20u;  // (from the original)
    r1 = *gptr<u32>(ea + 4);
    r3 = 0x35u;  // (from the original)
    r2 = r6;
    *gptr<u32>(r13) = u32(*gptr<u32>(ea));
    *gptr<u32>(r13 + 4) = u32(r1);
    r1 = r4 + 0x1428u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002a66ec(r0, r1, r2, r3);
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(r9);
    ea = r10 + 0x28u;  // (from the original)
    r1 = *gptr<u32>(ea + 4);
    r3 = 0x36u;  // (from the original)
    r2 = r6;
    *gptr<u32>(r13) = u32(*gptr<u32>(ea));
    *gptr<u32>(r13 + 4) = u32(r1);
    r1 = r4 + 0x142cu;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002a66ec(r0, r1, r2, r3);
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(r9);
    ea = r10 + 0x30u;  // (from the original)
    r1 = *gptr<u32>(ea + 4);
    r3 = 0x37u;  // (from the original)
    r2 = r6;
    *gptr<u32>(r13) = u32(*gptr<u32>(ea));
    *gptr<u32>(r13 + 4) = u32(r1);
    r1 = r4 + 0x1430u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002a66ec(r0, r1, r2, r3);
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(r9);
    ea = r10 + 0x38u;  // (from the original)
    r1 = *gptr<u32>(ea + 4);
    r3 = 0x38u;  // (from the original)
    r2 = r6;
    *gptr<u32>(r13) = u32(*gptr<u32>(ea));
    *gptr<u32>(r13 + 4) = u32(r1);
    r1 = r4 + 0x1434u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002a66ec(r0, r1, r2, r3);
    r0 = u32(s32(s8(*gptr<u8>(r6 + 4u))));
    r11 = 0x803u;  // (from the original)
    res = r0 - 0xau;  // (from the original)
    vf = ((r0 ^ 0xau) & (r0 ^ res)) >> 0x1f;  // (from the original)
    r0 = *gptr<u32>(r6);
    r1 = r4 + 0x1438u;  // (from the original)
    r8 = r11 - 0x27u;  // (from the original)
    if (!u32(res == 0) && res >> 0x1f == vf) {  // (from the original)
        r0 = r0 + 1u;
    }
    r7 = 0u;
    r5 = uxth(r0);
    r0 = u32(*gptr<u16>(r1));
    if (r5 >= r11) {
        r5 = r8;
    }
    zf = r0 == 0;
    if (!zf) {
        zf = u32(*gptr<u8>(r1 + 2u)) == 0;
    }
    if (!zf) {
        zf = u32(*gptr<u8>(r1 + 3u)) == 0;
    }
    if (!zf) {
        if (u32(r0 >= 0xau) && !u32(r0 == 0xau)) {  // (from the original)
            r0 = r0 + 1u;
        }
        r0 = uxth(r0);
        if (r0 >= r11) {
            r0 = r8;
        }
        if (r5 == r0) {
            r7 = 1u;
        } else {
            r7 = 0u;
        }
    }
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(r9);
    ea = r10 + 0x40u;  // (from the original)
    r2 = *gptr<u32>(ea + 4);
    r3 = 0x39u;  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(ea));
    *gptr<u32>(r13 + 4) = u32(r2);
    r2 = r6;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002a66ec(r0, r1, r2, r3);
    if (r7 != 0) {
        *gptr<u32>(r4 + 0x4a0u) = u32(r9);  // (from the original)
        *gptr<u32>(r4 + 0x4a4u) = u32(r9);  // (from the original)
        *gptr<u32>(r4 + 0x4a8u) = u32(r9);  // (from the original)
        *gptr<u32>(r4 + 0x4acu) = u32(r9);  // (from the original)
        *gptr<u32>(r4 + 0x4b0u) = u32(r9);  // (from the original)
    }
    r1 = r4 + 0x1444u;  // (from the original)
    r2 = 0u;
    r0 = u32(*gptr<u16>(r1));
    zf = r0 == 0;
    if (!zf) {
        zf = u32(*gptr<u8>(r1 + 2u)) == 0;
    }
    if (!zf) {
        zf = u32(*gptr<u8>(r1 + 3u)) == 0;
    }
    if (!zf) {
        if (u32(r0 >= 0xau) && !u32(r0 == 0xau)) {  // (from the original)
            r0 = r0 + 1u;
        }
        r0 = uxth(r0);
        if (r0 >= r11) {
            r0 = r8;
        }
        if (r5 == r0) {
            r2 = 1u;
        } else {
            r2 = 0u;
        }
    }
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(r2);
    ea = r10 + 0x48u;  // (from the original)
    r2 = *gptr<u32>(ea + 4);
    r3 = 0x3du;  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(ea));
    *gptr<u32>(r13 + 4) = u32(r2);
    r2 = r6;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002a66ec(r0, r1, r2, r3);
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(r9);
    ea = r10 + 0x50u;  // (from the original)
    r1 = *gptr<u32>(ea + 4);
    r3 = 0x3au;  // (from the original)
    r2 = r6;
    *gptr<u32>(r13) = u32(*gptr<u32>(ea));
    *gptr<u32>(r13 + 4) = u32(r1);
    r1 = r4 + 0x143cu;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002a66ec(r0, r1, r2, r3);
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(r9);
    ea = r10 + 0x58u;  // (from the original)
    r1 = *gptr<u32>(ea + 4);
    r3 = 0x3cu;  // (from the original)
    r2 = r6;
    *gptr<u32>(r13) = u32(*gptr<u32>(ea));
    *gptr<u32>(r13 + 4) = u32(r1);
    r1 = r4 + 0x1440u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002a66ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002a684c
GUEST_EXPORT(0x002a684c, d_002a684c::f_002a684c);

// f_002a6b44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a6b44 {

inline constexpr guest::Function<0x002a661c, u32(u32, u32, u32, u32)> call_002a661c;  // (from the original)
inline constexpr guest::Function<0x006b9038, u32(u32, u32, u32, u32)> call_006b9038;  // (from the original)

u32 f_002a6b44(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r0 + 4u;
    r0 = call_006b9038(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r4 + 0x1418u;  // (from the original)
    r0 = 0u;
    *gptr<u16>(r1) = u16(r0);
    *gptr<u8>(r1 + 2u) = u8(r0);
    *gptr<u8>(r1 + 3u) = u8(r0);
    r1 = r4 + 0x141cu;  // (from the original)
    *gptr<u16>(r1) = u16(r0);
    *gptr<u8>(r1 + 2u) = u8(r0);
    *gptr<u8>(r1 + 3u) = u8(r0);
    r1 = r4 + 0x1420u;  // (from the original)
    *gptr<u16>(r1) = u16(r0);
    *gptr<u8>(r1 + 2u) = u8(r0);
    *gptr<u8>(r1 + 3u) = u8(r0);
    r1 = r4 + 0x1424u;  // (from the original)
    *gptr<u16>(r1) = u16(r0);
    *gptr<u8>(r1 + 2u) = u8(r0);
    *gptr<u8>(r1 + 3u) = u8(r0);
    r1 = r4 + 0x1428u;  // (from the original)
    *gptr<u16>(r1) = u16(r0);
    *gptr<u8>(r1 + 2u) = u8(r0);
    *gptr<u8>(r1 + 3u) = u8(r0);
    r1 = r4 + 0x142cu;  // (from the original)
    *gptr<u16>(r1) = u16(r0);
    *gptr<u8>(r1 + 2u) = u8(r0);
    *gptr<u8>(r1 + 3u) = u8(r0);
    r1 = r4 + 0x1430u;  // (from the original)
    *gptr<u16>(r1) = u16(r0);
    *gptr<u8>(r1 + 2u) = u8(r0);
    *gptr<u8>(r1 + 3u) = u8(r0);
    r1 = r4 + 0x1434u;  // (from the original)
    *gptr<u16>(r1) = u16(r0);
    *gptr<u8>(r1 + 2u) = u8(r0);
    *gptr<u8>(r1 + 3u) = u8(r0);
    r1 = r4 + 0x1438u;  // (from the original)
    *gptr<u16>(r1) = u16(r0);
    *gptr<u8>(r1 + 2u) = u8(r0);
    *gptr<u8>(r1 + 3u) = u8(r0);
    r1 = r4 + 0x143cu;  // (from the original)
    *gptr<u16>(r1) = u16(r0);
    *gptr<u8>(r1 + 2u) = u8(r0);
    *gptr<u8>(r1 + 3u) = u8(r0);
    r1 = r4 + 0x1440u;  // (from the original)
    *gptr<u16>(r1) = u16(r0);
    *gptr<u8>(r1 + 2u) = u8(r0);
    *gptr<u8>(r1 + 3u) = u8(r0);
    r1 = r4 + 0x1444u;  // (from the original)
    *gptr<u16>(r1) = u16(r0);
    *gptr<u8>(r1 + 2u) = u8(r0);
    *gptr<u8>(r1 + 3u) = u8(r0);
    r0 = r4;
    r0 = call_002a661c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002a6b44
GUEST_EXPORT(0x002a6b44, d_002a6b44::f_002a6b44);

// f_002a7190: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a7190 {


u32 f_002a7190(u32 r0, u32 r1) {
    if (r1 < 4u) {
        r1 = r1 + (r1 << 1);
        r0 = r0 + (r1 << 3);
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002a7190
GUEST_EXPORT(0x002a7190, d_002a7190::f_002a7190);

// f_002a71a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a71a0 {


u32 f_002a71a0() {
    u32 r0 = 0;
    r0 = 0u;
    do {
L_2a71a4:;
        r0 = r0 + 1u;
        guest::preempt();
    } while (r0 < 4u);
    return r0;
}

}  // namespace d_002a71a0
GUEST_EXPORT(0x002a71a0, d_002a71a0::f_002a71a0);

// f_002a722c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a722c {

inline constexpr guest::Function<0x002a7270, u32(u32, u32, u32, u32)> call_002a7270;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb7e8, u32(u32, u32, u32, u32)> call_002fb7e8;  // (from the original)
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> call_002fbd54;  // (from the original)

u32 f_002a722c(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r0 = call_002fae84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r0 + 0x20u;  // (from the original)
    r1 = 0u;
    r0 = call_002fb7e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r4 + 0x55a6u;  // (from the original)
    r0 = call_002fbd54(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r4 + 0x5400u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    r0 = r0 + 0x144u;  // (from the original)
    return call_002a7270(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_002a722c
GUEST_EXPORT(0x002a722c, d_002a722c::f_002a722c);

// f_002a75dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a75dc {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x0076ab28, u32(u32, u32, u32, u32)> call_0076ab28;  // (from the original)
inline constexpr guest::Function<0x0076aff4, u32(u32, u32, u32, u32)> call_0076aff4;  // (from the original)

u32 f_002a75dc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r5 = 0u;
    r7 = r0;
    r6 = r1;
    do {
L_2a75ec:;
        r4 = r7 + (r5 + (r5 << 1) << 3);
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_0076ab28(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 1u) {
            r0 = r4;
        } else {
            r0 = 0x95bfdcu;  // (from the original)
        }
        guest::cpu()->r[13] = r13;
        r0 = call_002fcaf4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0 != 0)) {
            r0 = r4;
            guest::cpu()->r[13] = r13;
            r0 = call_0076ab28(r0, r1, r2, r3);
            r3 = guest::cpu()->r[3];
            if (r0 == 1u) {
                r1 = r4;
            } else {
                r1 = 0x95bfdcu;  // (from the original)
            }
            r2 = r6;
            r0 = r13;
            guest::cpu()->r[13] = r13;
            r0 = call_0076aff4(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r1 = r13;
            r0 = r4;
            guest::cpu()->r[13] = r13;
            r0 = call_002fc8e8(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r0 = r4 + 8u;
        guest::cpu()->r[13] = r13;
        r0 = call_0076ab28(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 3u) {
            r0 = r4 + 8u;
        } else {
            r0 = 0x95bfdcu;  // (from the original)
        }
        guest::cpu()->r[13] = r13;
        r0 = call_002fcaf4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0 != 0)) {
            r0 = r4 + 8u;
            guest::cpu()->r[13] = r13;
            r0 = call_0076ab28(r0, r1, r2, r3);
            r3 = guest::cpu()->r[3];
            if (r0 == 3u) {
                r1 = r4 + 8u;
            } else {
                r1 = 0x95bfdcu;  // (from the original)
            }
            r2 = r6;
            r0 = r13;
            guest::cpu()->r[13] = r13;
            r0 = call_0076aff4(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r1 = r13;
            r0 = r4 + 8u;
            guest::cpu()->r[13] = r13;
            r0 = call_002fc8e8(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r0 = r13;
        }
        r5 = r5 + 1u;
        guest::preempt();
    } while (r5 < 4u);
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002a75dc
GUEST_EXPORT(0x002a75dc, d_002a75dc::f_002a75dc);

// f_002a76c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a76c0 {

inline constexpr guest::Function<0x002fc288, u32(u32, u32, u32, u32)> call_002fc288;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fe9c8, u32(u32, u32, u32, u32)> call_002fe9c8;  // (from the original)
inline constexpr guest::Function<0x003004c4, u32(u32, u32, u32, u32)> call_003004c4;  // (from the original)

u32 f_002a76c0(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r4 = 0u;
    r13 = r13 - 0x2f8u;  // (from the original)
    r5 = r0;
    r6 = r4;
    do {
L_2a76d4:;
        r1 = 0x95bfdcu;  // (from the original)
        r0 = r5 + (r4 << 2);
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r5 + r4;
        r4 = r4 + 1u;
        res = r4 - 7u;
        *gptr<u8>(r0 + 0x1cu) = u8(r6);  // (from the original)
        guest::preempt();
    } while (res >> 0x1f != ((r4 ^ 7u) & (r4 ^ res)) >> 0x1f);  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc288(r0, r1, r2, r3);
    r3 = 0u;
    r2 = 0x2du;  // (from the original)
    r1 = 0xcu;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe9c8(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r13;
    r1 = 3u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_003004c4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc288(r0, r1, r2, r3);
    r3 = 0u;
    r2 = 0x2du;  // (from the original)
    r1 = 0xdu;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe9c8(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r13;
    r1 = 3u;
    r0 = r5 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003004c4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc288(r0, r1, r2, r3);
    r3 = 0u;
    r2 = 0x2du;  // (from the original)
    r1 = 0x19u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe9c8(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r13;
    r1 = 1u;
    r0 = r5 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003004c4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r13;
    r13 = r13 + 0x2f8u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002a76c0
GUEST_EXPORT(0x002a76c0, d_002a76c0::f_002a76c0);

// f_002a77bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a77bc {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x00303acc, u32(u32, u32, u32, u32)> call_00303acc;  // (from the original)
inline constexpr guest::Function<0x0030b654, u32(u32, u32, u32, u32)> call_0030b654;  // (from the original)
inline constexpr guest::Function<0x004e9a78, u32(u32, u32, u32, u32)> call_004e9a78;  // (from the original)
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32, u32)> call_0059e65c;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)

u32 f_002a77bc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r2 >= 7u) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[9] = r9;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 0x1c;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r14);  // (from the original)
    r13 = r13 - 0x28u;  // (from the original)
    r4 = r0 + r2;
    r5 = r1;
    ea = r13 + 0x28u;  // (from the original)
    r6 = *gptr<u32>(ea);
    r7 = *gptr<u32>(ea + 4);
    r9 = 0x2084u;  // (from the original)
    r8 = r3;
    r3 = r13 + 4u;
    r12 = r2;
    if (u32(*gptr<u8>(r4 + 0x1cu)) != 0) {  // (from the original)
        r1 = r9;
        r0 = r3;
        guest::cpu()->r[13] = r13;
        r0 = call_002fcbb0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    } else {
        r1 = r0 + (r12 << 2);
        r0 = r3;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc934(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    if (u32(*gptr<u8>(r4 + 0x1cu)) == 0) {  // (from the original)
        r0 = 1u;
        *gptr<u8>(r4 + 0x1cu) = u8(r0);  // (from the original)
    } else {
        goto L_2a78ec;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != r5) {
        goto L_2a78ec;
    }
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0030b654(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r0 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_00303acc(r0, r1, r2, r3);
        r3 = r7;
        if (r0 != 0) {
            r2 = 4u;
            r1 = r6;
            r0 = r8;
            guest::cpu()->r[13] = r13;
            r0 = call_004e9a78(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            goto L_2a78ec;
        }
        r2 = 3u;
        r1 = r6;
        r0 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_004e9a78(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        goto L_2a78ec;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_006a5e34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 == 0) {
        goto L_2a78ec;
    }
    r1 = r9;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(0u);
    r1 = r0;
    r3 = r6;
    r2 = r8;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc994(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 1u;
    r1 = r6;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_0059e65c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_2a78ec:;
    r0 = r13 + 4u;
    r13 = r13 + 0xcu;  // (from the original)
    ea = r13;
    r13 = r13 + 0x1c;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    r9 = *gptr<u32>(ea + 0x14);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[8] = r8;
    guest::cpu()->r[9] = r9;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002a77bc
GUEST_EXPORT(0x002a77bc, d_002a77bc::f_002a77bc);

// f_002a799c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a799c {

inline constexpr guest::Function<0x002fc288, u32(u32, u32, u32, u32)> call_002fc288;  // (from the original)
inline constexpr guest::Function<0x002fe9c8, u32(u32, u32, u32, u32)> call_002fe9c8;  // (from the original)
inline constexpr guest::Function<0x003004c4, u32(u32, u32, u32, u32)> call_003004c4;  // (from the original)

u32 f_002a799c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x2f0u;  // (from the original)
    r4 = r0;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc288(r0, r1, r2, r3);
    r3 = 0u;
    r2 = 0x73u;  // (from the original)
    r1 = 0xcu;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe9c8(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r13;
    r1 = 1u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_003004c4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r13;
    r13 = r13 + 0x2f0u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002a799c
GUEST_EXPORT(0x002a799c, d_002a799c::f_002a799c);

// f_002a7c74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a7c74 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x00303acc, u32(u32, u32, u32, u32)> call_00303acc;  // (from the original)
inline constexpr guest::Function<0x0030b654, u32(u32, u32, u32, u32)> call_0030b654;  // (from the original)
inline constexpr guest::Function<0x004e9a78, u32(u32, u32, u32, u32)> call_004e9a78;  // (from the original)
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32, u32)> call_0059e65c;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)

u32 f_002a7c74(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r2 >= 0xbu) {  // (from the original)
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
    ea = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r10);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r14);  // (from the original)
    r13 = r13 - 0x30u;  // (from the original)
    r5 = r1;
    r4 = r0 + r2;
    ea = r13 + 0x30u;  // (from the original)
    r7 = *gptr<u32>(ea);
    r8 = *gptr<u32>(ea + 4);
    r9 = r3;
    r1 = u32(*gptr<u8>(r4 + 0x3eu));  // (from the original)
    r10 = 0x2083u;  // (from the original)
    r6 = r13 + 4u;
    r0 = r0 + (r2 << 2);
    if (r1 != 0) {
        r0 = r0 + 0x12u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00303acc(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_2a7ce8;
        }
        r1 = r10 + 3u;
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_002fcbb0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        goto L_2a7cf4;
    }
    r1 = r0 + 0x12u;  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    goto L_2a7cf4;
L_2a7ce8:;
    r1 = r10;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_2a7cf4:;
    if (u32(*gptr<u8>(r4 + 0x3eu)) == 0) {  // (from the original)
        r0 = 1u;
        *gptr<u8>(r4 + 0x3eu) = u8(r0);  // (from the original)
    } else {
        goto L_2a7dd0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != r5) {
        goto L_2a7dd0;
    }
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0030b654(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r0 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_00303acc(r0, r1, r2, r3);
        r3 = r8;
        if (r0 != 0) {
            r2 = 2u;
            r1 = r7;
            r0 = r9;
            guest::cpu()->r[13] = r13;
            r0 = call_004e9a78(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            goto L_2a7dd0;
        }
        r2 = 1u;
        r1 = r7;
        r0 = r9;
        guest::cpu()->r[13] = r13;
        r0 = call_004e9a78(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        goto L_2a7dd0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_006a5e34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 == 0) {
        goto L_2a7dd0;
    }
    r1 = r10;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(0u);
    r1 = r0;
    r3 = r7;
    r2 = r9;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc994(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 1u;
    r1 = r7;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_0059e65c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_2a7dd0:;
    r0 = r13 + 4u;
    r13 = r13 + 0x10u;  // (from the original)
    ea = r13;
    r13 = r13 + 0x20;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    r9 = *gptr<u32>(ea + 0x14);  // (from the original)
    r10 = *gptr<u32>(ea + 0x18);  // (from the original)
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

}  // namespace d_002a7c74
GUEST_EXPORT(0x002a7c74, d_002a7c74::f_002a7c74);

// f_002a8560: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a8560 {

inline constexpr guest::Function<0x006e47a0, u32(u32, u32, u32, u32)> call_006e47a0;  // (from the original)

u32 f_002a8560(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r1;
    r0 = call_006e47a0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0x8f1078u;  // (from the original)
    *gptr<u8>(r0 + 0x66u) = u8(0u);  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r0 + 0x68u) = u32(r4);  // (from the original)
    *gptr<u8>(r0 + 0x6cu) = u8(1u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002a8560
GUEST_EXPORT(0x002a8560, d_002a8560::f_002a8560);

// f_002a9294: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a9294 {

struct __attribute__((packed)) Object_002a9294_0 {
    u8 unknown_0[0x8a];  // (not used here)
    u8 byte_8a;
    u8 unknown_8b[0x511];  // (not used here)
    u8 byte_59c;
    u8 unknown_59d[0xc3];  // (not used here)
    u32 word_660;
};
GUEST_OFFSET(Object_002a9294_0, byte_8a, 0x8a);  // (from the original)
GUEST_OFFSET(Object_002a9294_0, byte_59c, 0x59c);  // (from the original)
GUEST_OFFSET(Object_002a9294_0, word_660, 0x660);  // (from the original)

inline constexpr guest::Function<0x002a93e8, u32(u32, u32, u32, u32)> call_002a93e8;  // (from the original)

u32 f_002a9294(gptr<Object_002a9294_0> arg0, u32 r1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    res = u32(arg0->byte_8a) << 0x1e >> 0x1f;  // (from the original)
    if (res == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2 = u32(arg0->byte_59c);
    if (r2 != 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    arg0->word_660 = u32(r1);
    r1 = 1u;
    return call_002a93e8(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_002a9294
GUEST_EXPORT(0x002a9294, d_002a9294::f_002a9294);

// f_002a9cd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a9cd8 {

struct __attribute__((packed)) Object_002a9cd8_0 {
    u8 unknown_0[0x68];  // (not used here)
    u32 word_68;
};
GUEST_OFFSET(Object_002a9cd8_0, word_68, 0x68);  // (from the original)

inline constexpr guest::Function<0x0030f48c, u32(u32, u32, u32, u32)> call_0030f48c;  // (from the original)

u32 f_002a9cd8(gptr<Object_002a9cd8_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r2;
    r4 = arg0->word_68;
    r2 = r1;
    r1 = 0x845170u;  // (from the original)
    r0 = r4 + 0x104u;  // (from the original)
    r0 = call_0030f48c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r4 + 0x130u) = u32(r5);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002a9cd8
GUEST_EXPORT(0x002a9cd8, d_002a9cd8::f_002a9cd8);

// f_002aa08c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002aa08c {

inline constexpr guest::Function<0x00246f64, u32(u32, u32, u32, u32)> call_00246f64;  // (from the original)

u32 f_002aa08c(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_00246f64(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 1u;
    *gptr<u8>(r4 + 0x98u) = u8(r0);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_002aa08c
GUEST_EXPORT(0x002aa08c, d_002aa08c::f_002aa08c);

// f_002aa0dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002aa0dc {

struct __attribute__((packed)) Object_002aa0dc_0 {
    u8 unknown_0[0x98];  // (not used here)
    u8 byte_98;
};
GUEST_OFFSET(Object_002aa0dc_0, byte_98, 0x98);  // (from the original)

inline constexpr guest::Function<0x0024727c, u32(u32, u32, u32, u32)> call_0024727c;  // (from the original)

u32 f_002aa0dc(gptr<Object_002aa0dc_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = u32(arg0->byte_98);
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = r4;
    r0 = call_0024727c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 0u;
    *gptr<u8>(r4 + 0x98u) = u8(r0);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_002aa0dc
GUEST_EXPORT(0x002aa0dc, d_002aa0dc::f_002aa0dc);

// f_002aa104: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002aa104 {

inline constexpr guest::Function<0x00247294, u32(u32, u32, u32, u32)> call_00247294;  // (from the original)

u32 f_002aa104(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_00247294(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0u;
    *gptr<u8>(r0 + 0x98u) = u8(r1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002aa104
GUEST_EXPORT(0x002aa104, d_002aa104::f_002aa104);

// f_002aa6c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002aa6c0 {

struct __attribute__((packed)) Object_002aa6c0_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Object_002aa6c0_0, word_1c, 0x1c);  // (from the original)

inline constexpr guest::Function<0x001f499c, u32(u32, u32, u32, u32)> call_001f499c;  // (from the original)
inline constexpr guest::Function<0x002ab460, u32(u32, u32, u32, u32)> call_002ab460;  // (from the original)
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)

u32 f_002aa6c0(gptr<Object_002aa6c0_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r4 = r0;
    r0 = arg0->word_1c;
    r5 = r1;
    r6 = 0u;
    r13 = r13 - 0x18u;  // (from the original)
    r3 = 0x42u;  // (from the original)
    r1 = r6;
    if (r0 == 0) {
        goto L_2aa718;
    }
L_2aa6e8:;
    r2 = *gptr<u32>(r0);
    if (r2 == 0) {
        goto L_2aa70c;
    }
    if (u32(*gptr<u8>(r2 + 0xc9u)) != r3) {  // (from the original)
        goto L_2aa70c;
    }
    r1 = r1 + 1u;
    if (r1 >= 4u) {
        goto L_2aa744;
    }
L_2aa70c:;
    r0 = *gptr<u32>(r0 + 4u);
    if (r0 != 0) {
        guest::preempt();
        goto L_2aa6e8;
    }
L_2aa718:;
    r2 = r5;
    r0 = r13;
    r1 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_003171b4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 1u;
    r1 = 0x42u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_001f499c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_2aa750;
    }
L_2aa744:;
    r0 = 0u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_2aa750:;
    r2 = r5;
    r1 = 0x42u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002ab460(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    zf = r0 == 0;
    r0 = r4 + 0x1000u;  // (from the original)
    if (zf) {
        *gptr<u32>(r0 + 0x1fcu) = u32(r6);  // (from the original)
    } else {
        r1 = *gptr<u32>(r0 + 0x1f8u);  // (from the original)
        *gptr<u32>(r0 + 0x1fcu) = u32(r1);  // (from the original)
    }
    r0 = 1u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002aa6c0
GUEST_EXPORT(0x002aa6c0, d_002aa6c0::f_002aa6c0);

// f_002aab48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002aab48 {


u32 f_002aab48(u32 r0, u32 r1) {
    u32 zf = 0;
    zf = r1 == 0x1du;  // (from the original)
    r1 = 0u;
    if (zf) {
        r1 = 1u;
    }
    r1 = r1 + (r1 << 1);
    r0 = r0 + (r1 << 3) + 0x1340u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002aab48
GUEST_EXPORT(0x002aab48, d_002aab48::f_002aab48);

// f_002aafd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002aafd4 {

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> call_00305f2c;  // (from the original)
inline constexpr guest::Function<0x00700974, u32(u32, u32, u32, u32)> call_00700974;  // (from the original)
inline constexpr guest::Function<0x00701900, u32(u32, u32, u32, u32)> call_00701900;  // (from the original)
inline constexpr guest::Function<0x007019f0, u32(u32, u32, u32, u32)> call_007019f0;  // (from the original)
inline constexpr guest::Function<0x007701f8, u32(u32, u32, u32, u32)> call_007701f8;  // (from the original)

u32 f_002aafd4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x58u;  // (from the original)
    r5 = r0;
    r8 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_00305f2c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 != 3u) {
        goto L_2ab160;
    }
    if (r8 == 0x48u) {  // (from the original)
        r0 = 0u;
        goto L_2ab164;
    }
    r4 = 0u;
    r9 = 0x24u;  // (from the original)
    r2 = r8;
    r1 = r13 + 0x28u;  // (from the original)
    r0 = r13 + 0x2cu;  // (from the original)
    *gptr<u32>(r13 + 0x2cu) = u32(r4);  // (from the original)
    *gptr<u32>(r13 + 0x28u) = u32(r9);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007019f0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    if (r0 != 0x24u) {  // (from the original)
        goto L_2ab160;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb94c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_2ab164;
    }
    r0 = r0 + 0x6c20u;  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r0);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb378(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00700974(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r5 + 0x1000u;  // (from the original)
    r1 = u32(*gptr<u8>(r6 + 0x1f4u));  // (from the original)
    if (r1 == r0) {
        goto L_2ab130;
    }
    *gptr<u8>(r6 + 0x1f4u) = u8(r0);  // (from the original)
    r0 = r5 + 0x13b8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00701900(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x18u) = u32(r4);  // (from the original)
    *gptr<u32>(r13) = u32(r9);
    r7 = 0u;
    *gptr<u32>(r13 + 4u) = u32(r4);
    *gptr<u32>(r13 + 8u) = u32(r4);
    *gptr<u32>(r13 + 0xcu) = u32(r4);  // (from the original)
    r4 = r7;
    r10 = 1u;
    r11 = r13 + 4u;
    r9 = r5 + 0x1002u;  // (from the original)
L_2ab094:;
    r2 = u32(*gptr<u8>(r5 + r4 + 0x13b8u));  // (from the original)
    if (r2 >= 0x53u) {  // (from the original)
        goto L_2ab124;
    }
    r1 = r13;
    r0 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007019f0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (*gptr<u32>(r13) != 0x24u) {  // (from the original)
        goto L_2ab124;
    }
    r3 = r13 + 0x14u;  // (from the original)
    r1 = 0x24u;  // (from the original)
    r0 = *gptr<u32>(r3);
    r2 = *gptr<u32>(r3 + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_007701f8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_2ab124;
    }
    r7 = r7 + 1u;
    *gptr<u32>(r11 + (r4 << 2)) = u32(r10);
    if (r4 != 2u) {
        goto L_2ab124;
    }
    r0 = 0u;
    if (r7 == 1u) {
        goto L_2ab10c;
    }
    if (r7 != 2u) {
        goto L_2ab10c;
    }
    r0 = *gptr<u32>(r13 + 4u);
    if (r0 != 0) {
        r0 = 1u;
    }
L_2ab10c:;
    r1 = r0 + r5 + 0x1000u;  // (from the original)
    r0 = u32(*gptr<u8>(r1 + 0x3b8u));  // (from the original)
    *gptr<u8>(r1 + 0x3b8u) = u8(u32(*gptr<u8>(r9 + 0x3b8u)));  // (from the original)
    *gptr<u8>(r9 + 0x3b8u) = u8(r0);  // (from the original)
L_2ab124:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(3u)) {
        guest::preempt();
        goto L_2ab094;
    }
L_2ab130:;
    zf = u32(*gptr<u8>(r6 + 0x3b8u)) == r8;  // (from the original)
    if (!zf) {
        zf = u32(*gptr<u8>(r6 + 0x3b9u)) == r8;  // (from the original)
    }
    if (zf) {
        goto L_2ab160;
    }
    r0 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    r2 = r8;
    r1 = 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007701f8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_2ab164;
    }
L_2ab160:;
    r0 = 1u;
L_2ab164:;
    r13 = r13 + 0x58u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002aafd4
GUEST_EXPORT(0x002aafd4, d_002aafd4::f_002aafd4);

// f_002ab16c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ab16c {


u32 f_002ab16c() {
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 0x94f520u;  // (from the original)
    r1 = u32(*gptr<u8>(r0));
    if (r1 == 0) {
        r1 = 1u;
        *gptr<u8>(r0) = u8(r1);
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002ab16c
GUEST_EXPORT(0x002ab16c, d_002ab16c::f_002ab16c);

// f_002ab3bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ab3bc {

struct __attribute__((packed)) Object_002ab3bc_0 {
    u8 unknown_0[0x11fc];  // (not used here)
    u32 word_11fc;
};
GUEST_OFFSET(Object_002ab3bc_0, word_11fc, 0x11fc);  // (from the original)

inline constexpr guest::Function<0x002aa6c0, u32(u32, u32, u32, u32)> call_002aa6c0;  // (from the original)
inline constexpr guest::Function<0x002ab460, u32(u32, u32, u32, u32)> call_002ab460;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)

u32 f_002ab3bc(gptr<Object_002ab3bc_0> arg0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0 + 0x1000u;  // (from the original)
    r5 = r0;
    r0 = arg0->word_11fc;
    res = r0;
    if (!u32(res == 0) && res >> 0x1f == (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r0 = r0 - 1u;
        goto L_2ab454;
    }
    r6 = 0x94f520u;  // (from the original)
    r0 = u32(*gptr<u8>(r6 + 2u));
    if (r0 == 0) {
        goto L_2ab434;
    }
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = 0x20000u;  // (from the original)
    r0 = call_002f74e0(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        goto L_2ab434;
    }
    r0 = u32(*gptr<u8>(r6 + 3u));
    zf = r0 == 3u;
    if (!zf) {
        zf = r0 == 4u;
    }
    if (zf) {
        goto L_2ab434;
    }
    zf = r0 == 5u;
    if (!zf) {
        zf = r0 == 6u;
    }
    if (zf) {
        goto L_2ab434;
    }
    r1 = r5 + 0x11e8u;  // (from the original)
    r0 = r5;
    r0 = call_002aa6c0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_2ab458;
    }
L_2ab434:;
    r2 = 0u;
    r1 = 0x53u;  // (from the original)
    r0 = r5;
    r0 = call_002ab460(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = *gptr<u32>(r4 + 0x1f8u);  // (from the original)
        *gptr<u32>(r4 + 0x1fcu) = u32(r0);  // (from the original)
        goto L_2ab458;
    }
L_2ab454:;
    *gptr<u32>(r4 + 0x1fcu) = u32(r0);  // (from the original)
L_2ab458:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002ab3bc
GUEST_EXPORT(0x002ab3bc, d_002ab3bc::f_002ab3bc);

// f_002abba8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002abba8 {

inline constexpr guest::Function<0x00598164, u32(u32, u32, u32, u32)> call_00598164;  // (from the original)
inline constexpr guest::Function<0x006c5c60, u32(u32, u32, u32, u32)> call_006c5c60;  // (from the original)

u32 f_002abba8(u32 r0, u32 r1, float S0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r6 = 0x94f520u;  // (from the original)
    r4 = r0 + 0x1000u;  // (from the original)
    r5 = r0 + 0x11e8u;  // (from the original)
    if (u32(*gptr<u8>(r6 + 1u)) == 0) {
        goto L_2abc10;
    }
    r0 = 0u;
    *gptr<u8>(r6 + 1u) = u8(r0);
    *gptr<u8>(r6 + 2u) = u8(r0);
    r0 = r5;
    guest::cpu()->s[0] = S0;
    r0 = call_00598164(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    if (r0 == 0) {
        goto L_2abc0c;
    }
    r1 = 0u;
    r0 = r5;
    guest::cpu()->s[0] = S0;
    r0 = call_006c5c60(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    *gptr<u32>(r4 + 0x1ecu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u8>(r6 + 2u) = u8(1u);
    *gptr<u32>(r6 + 0x10u) = u32(*gptr<u32>(r4 + 0x1e8u));  // (from the original)
    r0 = *gptr<u32>(r4 + 0x1f0u);  // (from the original)
    *gptr<u32>(r6 + 0x14u) = u32(r0);  // (from the original)
L_2abc0c:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_2abc10:;
    r0 = u32(*gptr<u8>(r6 + 2u));
    if (r0 == 0) {
        guest::preempt();
        goto L_2abc0c;
    }
    r1 = 0u;
    *gptr<u32>(r4 + 0x1e8u) = u32(*gptr<u32>(r6 + 0x10u));  // (from the original)
    *gptr<u32>(r4 + 0x1f0u) = u32(*gptr<u32>(r6 + 0x14u));  // (from the original)
    r0 = r5;
    guest::cpu()->s[0] = S0;
    r0 = call_006c5c60(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    *gptr<u32>(r4 + 0x1ecu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002abba8
GUEST_EXPORT(0x002abba8, d_002abba8::f_002abba8);

// f_002abdfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002abdfc {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fdf10, u32(u32, u32, u32, u32)> call_002fdf10;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> call_005c33cc;  // (from the original)
inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> call_006bbd54;  // (from the original)
inline constexpr guest::Function<0x00700adc, u32(u32, u32, u32, u32)> call_00700adc;  // (from the original)
inline constexpr guest::Function<0x00700f58, u32(u32, u32, u32, u32)> call_00700f58;  // (from the original)

u32 f_002abdfc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r5 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb94c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = 0x20000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_2abf14;
    }
    r1 = 0u;
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005c33cc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_2abf14;
    }
    if (r4 == 0) {
        goto L_2abf14;
    }
    res = u32(*gptr<u8>(0x5701u + r4)) << 0x1e;  // (from the original)
    r0 = res;
    if (!(res >> 0x1f)) {  // (from the original)
        goto L_2abf14;
    }
    r4 = r4 + 0x572bu;  // (from the original)
    res = u32(*gptr<u8>(r4)) >> 7;
    r0 = res;
    if (res != 0) {
        goto L_2abf14;
    }
    r0 = 9u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fdf10(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_2abf14;
    }
    r0 = *gptr<u32>(r5 + 0x1cu);  // (from the original)
    r1 = 0u;
    if (r0 == 0) {
        goto L_2abeb4;
    }
    do {
L_2abe84:;
        r2 = *gptr<u32>(r0);
        if (!(r2 == 0)) {
            r2 = u32(*gptr<u8>(r2 + 0xc9u)) - 0x49u;  // (from the original)
            if (!u32(r2 >= 7u) || u32(r2 == 7u)) {
                r1 = r1 + 1u;
            }
        }
        r0 = *gptr<u32>(r0 + 4u);
        guest::preempt();
    } while (r0 != 0);
    if (r1 >= 5u) {
        goto L_2abf14;
    }
L_2abeb4:;
    r0 = 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 < 5u) {
        r0 = 0x50u;  // (from the original)
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    if (r0 >= 0x5fu) {  // (from the original)
        goto L_2abf14;
    }
    r1 = u32(u64(r0) * 0x49249249u + (u64(0u) << 0x20 | 0x49249249u) >> 0x20) >> 1;  // (from the original)
    r2 = r1 - (r1 << 3) + r0;
    r1 = 0x25u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_006bbd54(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00700adc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_2abf14:;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb378(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00700f58(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r0 = *gptr<u32>(0x86c2f0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(r0, r1, r2, r3);
    r1 = r0;
L_2abf3c:;
    r0 = u32(*gptr<u16>(r4 + 2u));
    if (!u32(r0 >= r1) || u32(r0 == r1)) {
        r4 = r4 + 4u;
        guest::preempt();
        goto L_2abf3c;
    }
    r0 = u32(*gptr<u8>(r4));
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002abdfc
GUEST_EXPORT(0x002abdfc, d_002abdfc::f_002abdfc);

// f_002ac76c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ac76c {

inline constexpr guest::Function<0x0056cce4, u32(u32, u32, u32, u32)> call_0056cce4;  // (from the original)
inline constexpr guest::Function<0x0062f04c, u32(u32, u32, u32, u32)> call_0062f04c;  // (from the original)
inline constexpr guest::Function<0x00700f58, u32(u32, u32, u32, u32)> call_00700f58;  // (from the original)

u32 f_002ac76c(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r5 = r0;
    r7 = r1;
    r9 = 0x846fb0u;  // (from the original)
    r8 = 0x86c2f0u;  // (from the original)
    r6 = r2;
    r4 = 0u;
L_2ac78c:;
    r1 = *gptr<u32>(r6 + 4);
    r2 = *gptr<u32>(r6 + 8);
    *gptr<u32>(r13) = u32(*gptr<u32>(r6));
    *gptr<u32>(r13 + 4) = u32(r1);
    *gptr<u32>(r13 + 8) = u32(r2);
    r0 = r13;
    r1 = u32(s32(s8(*gptr<u8>(r9 + r4))));
    guest::cpu()->r[13] = r13;
    r0 = call_0056cce4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00700f58(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_2ac7ac:;
    r2 = u32(*gptr<u8>(r0));
    if (r2 == r5) {
        if (r7 == 1u) {
            goto L_2ac7e4;
        }
        if (r7 == 2u) {
            goto L_2ac808;
        }
        goto L_2ac834;
    }
    r1 = *gptr<u32>(r8);
    if (u32(*gptr<u16>(r0 + 2u)) != r1) {
        r0 = r0 + 4u;
        guest::preempt();
        goto L_2ac7ac;
    }
    goto L_2ac81c;
L_2ac7e4:;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0062f04c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    zf = r0 == 3u;
    if (!zf) {
        zf = r0 == 4u;
    }
    if (zf) {
        goto L_2ac81c;
    }
    zf = r0 == 5u;
    if (!zf) {
        zf = r0 == 6u;
    }
    if (zf) {
        goto L_2ac81c;
    }
    goto L_2ac834;
L_2ac808:;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0062f04c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    zf = r0 == 5u;
    if (!zf) {
        zf = r0 == 6u;
    }
    if (zf) {
        goto L_2ac834;
    }
L_2ac81c:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(6u)) {
        guest::preempt();
        goto L_2ac78c;
    }
    r0 = 0u;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_2ac834:;
    r0 = 1u;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002ac76c
GUEST_EXPORT(0x002ac76c, d_002ac76c::f_002ac76c);

// f_002ad1fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ad1fc {

inline constexpr guest::Function<0x002ad0a0, u32(u32, u32, u32, u32)> call_002ad0a0;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002ffad8, u32(u32, u32, u32, u32)> call_002ffad8;  // (from the original)

u32 f_002ad1fc(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_002fcb34(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0x24u) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = r4;
    r0 = call_002ffad8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    r0 = r0 & 0xffu;  // (from the original)
    return call_002ad0a0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_002ad1fc
GUEST_EXPORT(0x002ad1fc, d_002ad1fc::f_002ad1fc);

// f_002ae274: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ae274 {

inline constexpr guest::Function<0x0026d328, u32(u32, u32, u32, u32)> call_0026d328;  // (from the original)
inline constexpr guest::Function<0x002bf9cc, u32(u32, u32, u32, u32)> call_002bf9cc;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)

u32 f_002ae274(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb94c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 1u;
    r1 = 0x94fd64u;  // (from the original)
    r5 = r0 + 0x6bd0u;  // (from the original)
    *gptr<u8>(0x94fd2bu) = u8(r6);  // (from the original)
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r6);
    r1 = *gptr<u32>(r4 + 0xc8u);  // (from the original)
    r3 = 0u;
    r2 = r13 + 4u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002bf9cc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0xf4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0026d328(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r13 + 4u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002ae274
GUEST_EXPORT(0x002ae274, d_002ae274::f_002ae274);

// f_002afa70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002afa70 {

struct __attribute__((packed)) Object_002afa70_0 {
    u32 word_0;
    u8 unknown_4[0x24];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0x78];  // (not used here)
    u32 word_a4;
};
GUEST_OFFSET(Object_002afa70_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002afa70_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_002afa70_0, word_a4, 0xa4);  // (from the original)

inline constexpr guest::Function<0x0026fe3c, u32(u32, u32, u32, u32)> call_0026fe3c;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f770c, u32(u32, u32, u32, u32)> call_002f770c;  // (from the original)
inline constexpr guest::Function<0x003170d0, u32(u32, u32, u32, u32)> call_003170d0;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)
inline constexpr guest::Function<0x005e8a7c, u32(u32, u32, u32, u32)> call_005e8a7c;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32, u32, u32)> call_006aaa30;  // (from the original)

u32 f_002afa70(gptr<Object_002afa70_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r1 = 0x8f1414u;  // (from the original)
    r13 = r13 - 8;
    r3 = r1 + 0x6cu;  // (from the original)
    r2 = r3 + 0x104u;  // (from the original)
    arg0->word_0 = u32(r1);
    arg0->word_a4 = u32(r2);
    arg0->word_28 = u32(r3);
    r0 = r0 + 0xa078u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005bf744(r0, r1, r2, r3);
    r2 = 0x8ef22cu;  // (from the original)
    r3 = 1u;
    ea = r0 - 0x9c8u;  // (from the original)
    *gptr<u32>(ea) = u32(0x8ee218u);  // (from the original)
    r0 = ea;
    *gptr<u32>(r0 + 0x398u) = u32(r2);  // (from the original)
    *gptr<u32>(r0 + 0x47cu) = u32(r2 + 0x44u);  // (from the original)
    r4 = r0 + 0x398u;  // (from the original)
    r2 = 0x518u;  // (from the original)
    r1 = 0x2e0b3cu;  // (from the original)
    r0 = r0 + 0x4b0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002f770c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f18f4u;  // (from the original)
    *gptr<u32>(r0 - 0x398u) = u32(r1);  // (from the original)
    r0 = r0 - 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e8a7c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f47a0u;  // (from the original)
    *gptr<u32>(r0 - 0x4f0u) = u32(r1);  // (from the original)
    r0 = r0 - 0xd4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x15cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x24cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x848cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0026fe3c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xccu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003170d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r13 = r13 + 8;
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_006aaa30(r0, r1, r2, r3);
}

}  // namespace d_002afa70
GUEST_EXPORT(0x002afa70, d_002afa70::f_002afa70);
