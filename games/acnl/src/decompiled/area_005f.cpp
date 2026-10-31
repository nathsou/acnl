// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_005f0bc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005f0bc4 {

struct __attribute__((packed)) Object_005f0bc4_0 {
    u32 word_0;
    u8 unknown_4[0x11c34];  // (not used here)
    u32 word_11c38;
};
GUEST_OFFSET(Object_005f0bc4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005f0bc4_0, word_11c38, 0x11c38);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_005f0bc4(gptr<Object_005f0bc4_0> arg0) {
    u32 r0 = arg0.addr();
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
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
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
    u32 r0_31 = 0;
    u32 r0_32 = 0;
    u32 r0_33 = 0;
    u32 r0_34 = 0;
    u32 r0_35 = 0;
    u32 r0_36 = 0;
    u32 r0_37 = 0;
    u32 r0_38 = 0;
    u32 r0_39 = 0;
    u32 r0_40 = 0;
    u32 r0_41 = 0;
    u32 r0_42 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    arg0->word_0 = u32(0x909498u);  // (from the original)
    arg0->word_11c38 = u32(0x90a228u);  // (from the original)
    r0_1 = r0 + 0x117b0u;  // (from the original)
    call_002f76ac(r0_1, 0x81dedcu, 0x74u, 0xau);  // (from the original)
    r0_2 = r0 + 0x11328u;  // (from the original)
    call_002f76ac(r0_2, 0x81dedcu, 0x74u, 0xau);  // (from the original)
    r0_3 = r0 + 0x10ea0u;  // (from the original)
    call_002f76ac(r0_3, 0x81dedcu, 0x74u, 0xau);  // (from the original)
    r0_4 = r0 + 0x10cc0u;  // (from the original)
    call_002f76ac(r0_4, 0x81c70cu, 0x30u, 0xau);  // (from the original)
    r0_5 = r0 + 0x10928u;  // (from the original)
    call_002f76ac(r0_5, 0x2fe884u, 0x5cu, 0xau);  // (from the original)
    *gptr<u32>(0x1088cu + r0) = u32(0x90a260u);  // (from the original)
    *gptr<u32>(0x1088cu - 0x38u + r0) = u32(0x909af0u);  // (from the original)
    r0_6 = r0 + 0x1046cu;  // (from the original)
    call_002f76ac(r0_6, 0x3050f4u, 0x64u, 0xau);  // (from the original)
    *gptr<u32>(0x10410u + r0) = u32(0x909f18u);  // (from the original)
    r0_7 = r0 + 0x10050u;  // (from the original)
    call_002f76ac(r0_7, 0x81dadcu, 0x60u, 0xau);  // (from the original)
    r0_8 = r0 + 0xfcb8u;  // (from the original)
    call_002f76ac(r0_8, 0x2fe884u, 0x5cu, 0xau);  // (from the original)
    r0_9 = r0 + 0xfb00u;  // (from the original)
    call_002f76ac(r0_9, 0x3009ccu, 0x2cu, 0xau);  // (from the original)
    r0_10 = r0 + 0xf948u;  // (from the original)
    call_002f76ac(r0_10, 0x3009ccu, 0x2cu, 0xau);  // (from the original)
    r0_11 = r0 + 0xf790u;  // (from the original)
    call_002f76ac(r0_11, 0x3009ccu, 0x2cu, 0xau);  // (from the original)
    r0_12 = r0 + 0x7220u;  // (from the original)
    call_002f76ac(r0_12, 0x81c4e8u, 0xf4u, 0x8cu);  // (from the original)
    r0_13 = r0 + 0x5c34u;  // (from the original)
    call_002f76ac(r0_13, 0x81c4e8u, 0xf4u, 0x17u);  // (from the original)
    *gptr<u32>(0x5c18u + r0) = u32(0x909e70u);  // (from the original)
    r0_14 = 0x5c18u - 0x2cu;  // (from the original)
    *gptr<u32>(r0_14 + r0) = u32(0x90a3e8u);  // (from the original)
    *gptr<u32>(r0_14 - 0x54u + r0) = u32(0x909e38u);  // (from the original)
    r0_15 = r0 + 0x5990u;  // (from the original)
    call_002f76ac(r0_15, 0x81ec90u, 0x34u, 0xau);  // (from the original)
    r0_16 = r0 + 0x54b8u;  // (from the original)
    call_002f76ac(r0_16, 0x81ea88u, 0x7cu, 0xau);  // (from the original)
    r0_17 = r0 + 0x5030u;  // (from the original)
    call_002f76ac(r0_17, 0x81dedcu, 0x74u, 0xau);  // (from the original)
    r0_18 = r0 + 0x4838u;  // (from the original)
    call_002f76ac(r0_18, 0x81ec20u, 0xccu, 0xau);  // (from the original)
    r0_19 = r0 + 0x4680u;  // (from the original)
    call_002f76ac(r0_19, 0x3009ccu, 0x2cu, 0xau);  // (from the original)
    r0_20 = r0 + 0x44c8u;  // (from the original)
    call_002f76ac(r0_20, 0x3009ccu, 0x2cu, 0xau);  // (from the original)
    r0_21 = r0 + 0x4040u;  // (from the original)
    call_002f76ac(r0_21, 0x81dedcu, 0x74u, 0xau);  // (from the original)
    *gptr<u32>(0x400cu + r0) = u32(0x909a48u);  // (from the original)
    *gptr<u32>(0x400cu - 0x30u + r0) = u32(0x909a10u);  // (from the original)
    r0_22 = r0 + 0x3c44u;  // (from the original)
    call_002f76ac(r0_22, 0x81ea18u, 0x5cu, 0xau);  // (from the original)
    r0_23 = r0 + 0x38acu;  // (from the original)
    call_002f76ac(r0_23, 0x81ea18u, 0x5cu, 0xau);  // (from the original)
    r0_24 = r0 + 0x3514u;  // (from the original)
    call_002f76ac(r0_24, 0x81ea18u, 0x5cu, 0xau);  // (from the original)
    r0_25 = r0 + 0x2f4cu;  // (from the original)
    call_002f76ac(r0_25, 0x81eb54u, 0x94u, 0xau);  // (from the original)
    r0_26 = r0 + 0x2bb4u;  // (from the original)
    call_002f76ac(r0_26, 0x81ea18u, 0x5cu, 0xau);  // (from the original)
    r0_27 = r0 + 0x281cu;  // (from the original)
    call_002f76ac(r0_27, 0x81ea18u, 0x5cu, 0xau);  // (from the original)
    r0_28 = r0 + 0x2484u;  // (from the original)
    call_002f76ac(r0_28, 0x81ea18u, 0x5cu, 0xau);  // (from the original)
    r0_29 = r0 + 0x20ecu;  // (from the original)
    call_002f76ac(r0_29, 0x81ea18u, 0x5cu, 0xau);  // (from the original)
    *gptr<u32>(0x2078u + r0) = u32(0x90a0d8u);  // (from the original)
    *gptr<u32>(0x2078u - 0x74u + r0) = u32(0x90a0d8u);  // (from the original)
    r0_30 = r0 + 0x1c44u;  // (from the original)
    call_002f76ac(r0_30, 0x81dadcu, 0x60u, 0xau);  // (from the original)
    *gptr<u32>(0x1c18u + r0) = u32(0x90a3e8u);  // (from the original)
    r0_31 = 0x1c18u - 0x30u;  // (from the original)
    *gptr<u32>(r0_31 + r0) = u32(0x909968u);  // (from the original)
    r0_32 = r0_31 - 0x2cu;  // (from the original)
    *gptr<u32>(r0_32 + r0) = u32(0x90a3e8u);  // (from the original)
    *gptr<u32>(r0_32 - 0x2cu + r0) = u32(0x90a3e8u);  // (from the original)
    r0_33 = r0 + 0x1988u;  // (from the original)
    call_002f76ac(r0_33, 0x81ec90u, 0x34u, 0xau);  // (from the original)
    *gptr<u32>(0x195cu + r0) = u32(0x90a3e8u);  // (from the original)
    r0_34 = 0x195cu - 0x2cu;  // (from the original)
    *gptr<u32>(r0_34 + r0) = u32(0x90a3e8u);  // (from the original)
    *gptr<u32>(r0_34 - 0x2cu + r0) = u32(0x90a3e8u);  // (from the original)
    r0_35 = r0 + 0x165cu;  // (from the original)
    call_002f76ac(r0_35, 0x312cb0u, 0x44u, 0xau);  // (from the original)
    r0_36 = r0 + 0x13b4u;  // (from the original)
    call_002f76ac(r0_36, 0x312cb0u, 0x44u, 0xau);  // (from the original)
    *gptr<u32>(0x1370u + r0) = u32(0x909c78u);  // (from the original)
    r0_37 = r0 + 0x10c8u;  // (from the original)
    call_002f76ac(r0_37, 0x312cb0u, 0x44u, 0xau);  // (from the original)
    r0_38 = r0 + 0xe20u;  // (from the original)
    call_002f76ac(r0_38, 0x312cb0u, 0x44u, 0xau);  // (from the original)
    r0_39 = r0 + 0xa88u;  // (from the original)
    call_002f76ac(r0_39, 0x2fe884u, 0x5cu, 0xau);  // (from the original)
    r0_40 = r0 + 0x6f0u;  // (from the original)
    call_002f76ac(r0_40, 0x2fe884u, 0x5cu, 0xau);  // (from the original)
    r0_41 = r0 + 0x448u;  // (from the original)
    call_002f76ac(r0_41, 0x312cb0u, 0x44u, 0xau);  // (from the original)
    r0_42 = r0 + 8u;
    call_002f76ac(r0_42, 0x312cb0u, 0x44u, 0x10u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0;
}

}  // namespace d_005f0bc4
GUEST_EXPORT(0x005f0bc4, d_005f0bc4::f_005f0bc4);

// f_005f10b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005f10b0 {

struct __attribute__((packed)) Object_005f10b0_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_005f10b0_0, byte_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> call_0056a974;  // (from the original)
inline constexpr guest::Function<0x0056acfc, u32(u32, u32, u32, u32)> call_0056acfc;  // (from the original)
inline constexpr guest::Function<0x005bf790, u32(u32, u32, u32, u32)> call_005bf790;  // (from the original)

u32 f_005f10b0(gptr<Object_005f10b0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r5_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    if (u32(arg0->byte_0) != 0) {
        r0_1 = r0 + 0x14u;  // (from the original)
        r0_2 = call_0056a974(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r5_1 = r0_2;
        if (r0_2 == 0) {
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            return r5_1;
        }
        r0_3 = r0 + 0x14u;  // (from the original)
        r0_4 = call_0056acfc(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        *gptr<u8>(r0 + 1u) = u8(r0_4);
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return r5_1;
    }
    if (u32(*gptr<u8>(r0 + 0x11u)) == 0) {  // (from the original)
        r0_5 = r0 + 4u;
        r0_6 = call_005bf790(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    } else {
        r0_6 = 1u;
    }
    r5_1 = 1u;
    *gptr<u8>(r0 + 1u) = u8(r0_6);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r5_1;
}

}  // namespace d_005f10b0
GUEST_EXPORT(0x005f10b0, d_005f10b0::f_005f10b0);

// f_005f1138: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005f1138 {

struct __attribute__((packed)) Object_005f1138_0 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Object_005f1138_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005f1138_0, byte_1, 0x1);  // (from the original)

inline constexpr guest::Function<0x0012ca50, u32(u32, u32, u32, u32)> call_0012ca50;  // (from the original)
inline constexpr guest::Function<0x0012ca7c, u32(u32, u32, u32, u32)> call_0012ca7c;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)

u32 f_005f1138(gptr<Object_005f1138_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    arg0->byte_0 = u8(r1);
    arg0->byte_1 = u8(0u);
    r0_1 = r0 + 4u;
    r0_2 = call_0012ca50(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r0_2 + 0xdu) = u8(0u);  // (from the original)
    r0_3 = r0_2 + 0x10u;  // (from the original)
    call_002f825c(r0_3, 0xebu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_4 = call_0012ca7c(r0_3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_4) = u32(0x9097a0u);  // (from the original)
    *gptr<u8>(r0_4 + 0xebu) = u8(0u);  // (from the original)
    r0_5 = r0_4 - 0x14u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = 0x9097a0u;  // (from the original)
    return r0_5;
}

}  // namespace d_005f1138
GUEST_EXPORT(0x005f1138, d_005f1138::f_005f1138);

// f_005f11b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005f11b4 {

struct __attribute__((packed)) Object_005f11b4_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_005f11b4_0, word_4, 0x4);  // (from the original)


u32 f_005f11b4(gptr<Object_005f11b4_0> arg0) {
    u32 r0_1 = 0;
    r0_1 = arg0->word_4;
    return guest::call_address<u32>(*gptr<u32>(*gptr<u32>(r0_1) + 0x84u), r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_005f11b4
GUEST_EXPORT(0x005f11b4, d_005f11b4::f_005f11b4);

// f_005f1344: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005f1344 {

struct __attribute__((packed)) Object_005f1344_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_005f1344_0, word_4, 0x4);  // (from the original)


u32 f_005f1344(gptr<Object_005f1344_0> arg0) {
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    r0_1 = arg0->word_4;
    r2_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x9cu);  // (from the original)
    return guest::call_address<u32>(r2_1, r0_1, guest::cpu()->r[1], r2_1, guest::cpu()->r[3]);
}

}  // namespace d_005f1344
GUEST_EXPORT(0x005f1344, d_005f1344::f_005f1344);

// f_005f4860: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005f4860 {

struct __attribute__((packed)) Object_005f4860_0 {
    u8 unknown_0[0x28];  // (not used here)
    u8 byte_28;
    u8 unknown_29[0x157];  // (not used here)
    u32 word_180;
    u8 unknown_184[0x4];  // (not used here)
    u32 word_188;
    u8 unknown_18c[0x28];  // (not used here)
    u32 word_1b4;
    u8 unknown_1b8[0x24];  // (not used here)
    u32 word_1dc;
};
GUEST_OFFSET(Object_005f4860_0, byte_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_005f4860_0, word_180, 0x180);  // (from the original)
GUEST_OFFSET(Object_005f4860_0, word_188, 0x188);  // (from the original)
GUEST_OFFSET(Object_005f4860_0, word_1b4, 0x1b4);  // (from the original)
GUEST_OFFSET(Object_005f4860_0, word_1dc, 0x1dc);  // (from the original)

inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)
inline constexpr guest::Function<0x0013cd00, u32(u32, u32, u32, u32)> call_0013cd00;  // (from the original)

u32 f_005f4860(gptr<Object_005f4860_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r5_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r0_1 = u32(arg0->byte_28);
    r5_1 = r2;
    if (r0_1 == 0) {
        arg0->word_180 = u32(~0u);
        *gptr<u8>(arg0->word_188) = u8(u32(*global_008c9f1c));
        r2_1 = ~0u;
        *gptr<u8>(arg0->word_1b4) = u8(u32(*global_008c9f1c));
        arg0->word_1dc = u32(0u);
        r1_1 = r13;
        r0_2 = r0 + 0x1b0u;  // (from the original)
        *gptr<u32>(r13 + 4u) = u32(r1);
        *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0013cd00(r0_2, r1_1, r2_1, guest::cpu()->r[3]);
        if (r5_1 == 0) {
            r5_1 = r1;
        }
        r1_2 = r13;
        r2_2 = ~0u;
        r0_3 = r0 + 0x184u;  // (from the original)
        *gptr<u32>(r13 + 4u) = u32(r5_1);
        *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0013cd00(r0_3, r1_2, r2_2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        *gptr<u8>(r0 + 0x1e6u) = u8(0u);  // (from the original)
        r0_1 = 1u;
        *gptr<u8>(r0 + 0x1e7u) = u8(0u);  // (from the original)
        *gptr<u8>(r0 + 0x29u) = u8(r0_1);  // (from the original)
    }
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_005f4860
GUEST_EXPORT(0x005f4860, d_005f4860::f_005f4860);

// f_005f6b44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005f6b44 {

inline constexpr guest::Function<0x005d46dc, u32(u32, u32, u32, u32)> call_005d46dc;  // (from the original)
inline constexpr guest::Function<0x005f6eb0, u32(u32, u32, u32, u32)> call_005f6eb0;  // (from the original)

u32 f_005f6b44(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_005d46dc(r0, r1, r2, r3);
    zf_1 = r0_1 == 8u;
    r0_2 = 4u;
    if (zf_1) {
        r0_2 = 1u;
    }
    *gptr<u32>(r13) = u32(0xau);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r0_2);
    guest::cpu()->r[13] = r13;
    r0_3 = call_005f6eb0(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_005f6b44
GUEST_EXPORT(0x005f6b44, d_005f6b44::f_005f6b44);

// f_005f6dcc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005f6dcc {


u32 f_005f6dcc(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 zf_1 = 0;
    u32 r2_1 = 0;
    u32 ea_1 = 0;
    u32 r5_1 = 0;
    u32 ea_2 = 0;
    u32 res_1 = 0;
    u32 ea_3 = 0;
    u32 r5_2 = 0;
    u32 res_2 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    u32 r5_3 = 0;
    u32 ea_6 = 0;
    u32 r2_2 = 0;
    u32 ea_7 = 0;
    u32 res_3 = 0;
    u32 ea_8 = 0;
    u32 res_4 = 0;
    u32 ea_9 = 0;
    r13 = r13 - 0xc;  // (from the original)
    r6 = 0x12u;  // (from the original)
    r3 = 0x8906ecu;  // (from the original)
    r4 = 0xad59acu;  // (from the original)
    r2 = 0u;
L_5f6de0:;
    if (u32(*gptr<u16>(r4 + (r2 << 1))) == u32(*gptr<u16>(r3))) {
        r6 = r2;
    } else {
        r2 = r2 + 1u;
        if (s32(r2) < s32(0x13u)) {  // (from the original)
            guest::preempt();
            goto L_5f6de0;
        }
    }
    r12 = r0 - r6;
    if (r12 == 0 || r12 >> 0x1f != (r12 & (r12 ^ r12)) >> 0x1f) {  // (from the original)
        r13 = r13 + 0xc;  // (from the original)
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 0x12u - r12;  // (from the original)
    r3_1 = r0 + 1u;
    if (r3_1 == 0 || r3_1 >> 0x1f != (r3_1 & (r3_1 ^ r3_1)) >> 0x1f) {  // (from the original)
        goto L_5f6e68;
    }
    zf_1 = (r0 & 1u) == 0;
    r2_1 = r4 + (r0 + r12 << 1);
    r0 = r4 + (r0 << 1) + 2u;
    r2 = r2_1 + 2u;
    if (zf_1) {
        ea_1 = r0 - 2u;
        r0 = ea_1;
        r5_1 = u32(*gptr<u16>(ea_1));
        ea_2 = r2 - 2u;
        *gptr<u16>(ea_2) = u16(r5_1);
        r2 = ea_2;
    }
    res_1 = u32(s32(r3_1) >> 1);
    r3 = res_1;
    if (res_1 == 0) {
        goto L_5f6e68;
    }
    do {
L_5f6e50:;
        ea_3 = r0 - 2u;
        r5_2 = u32(*gptr<u16>(ea_3));
        res_2 = r3 - 1u;
        r3 = res_2;
        ea_4 = r2 - 2u;
        *gptr<u16>(ea_4) = u16(r5_2);
        ea_5 = r0 - 4u;
        r0 = ea_5;
        r5_3 = u32(*gptr<u16>(ea_5));
        ea_6 = r2 - 4u;
        *gptr<u16>(ea_6) = u16(r5_3);
        r2 = ea_6;
        guest::preempt();
    } while (res_2 != 0);
L_5f6e68:;
    r2_2 = r12 - 1u;
    if (r12 == 0 || r12 >> 0x1f != (r12 & (r12 ^ r12)) >> 0x1f) {  // (from the original)
        r13 = r13 + 0xc;  // (from the original)
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = r4 + (r2_2 << 1) + 2u;
    if ((r2_2 & 1u) == 0) {
        ea_7 = r0 - 2u;
        *gptr<u16>(ea_7) = u16(r1);
        r0 = ea_7;
    }
    res_3 = u32(s32(r2_2 + 1u) >> 1);
    r2 = res_3;
    if (res_3 == 0) {
        r13 = r13 + 0xc;  // (from the original)
        guest::cpu()->r[13] = r13;
        return r0;
    }
    do {
L_5f6e90:;
        ea_8 = r0 - 2u;
        *gptr<u16>(ea_8) = u16(r1);
        res_4 = r2 - 1u;
        r2 = res_4;
        ea_9 = r0 - 4u;
        *gptr<u16>(ea_9) = u16(r1);
        r0 = ea_9;
        guest::preempt();
    } while (res_4 != 0);
    r13 = r13 + 0xc;  // (from the original)
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005f6dcc
GUEST_EXPORT(0x005f6dcc, d_005f6dcc::f_005f6dcc);

// f_005f723c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005f723c {

struct __attribute__((packed)) Object_005f723c_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_005f723c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005f723c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005f723c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005f723c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005f723c_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_005f723c_0, word_14, 0x14);  // (from the original)

inline guest::global<u16, 0x008c9f1e> global_008c9f1e;  // (from the original)

void f_005f723c(gptr<Object_005f723c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    arg0->word_4 = u32(0xad59acu);  // (from the original)
    arg0->word_8 = u32(0x13u);  // (from the original)
    arg0->word_0 = u32(0x9055a0u);  // (from the original)
    *gptr<u16>(arg0->word_4 + 0x24u) = u16(u32(*global_008c9f1e));  // (from the original)
    r1_1 = r0 + 0xcu;  // (from the original)
    arg0->word_c = u32(0x90a538u);  // (from the original)
    arg0->word_10 = u32(0xad59acu);  // (from the original)
    arg0->word_14 = u32(0x13u);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_005f723c
GUEST_EXPORT(0x005f723c, d_005f723c::f_005f723c);

// f_005fbc20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005fbc20 {

inline guest::global<u32, 0x005fbd18> global_005fbd18;  // (from the original)
inline constexpr guest::Function<0x005d60d4, u32(u32, u32, u32, u32)> call_005d60d4;  // (from the original)
inline constexpr guest::Function<0x00601b44, u32(u32, u32, u32, u32)> call_00601b44;  // (from the original)

u32 f_005fbc20(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r2_2 = 0;
    u32 r2_3 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    u32 r3_2 = 0;
    u32 r3_3 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    float S0_1 = 0;
    u32 r0_4 = 0;
    r13 = r13 - 0xc;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    call_00601b44(r0, r1, r2, r3);
    r1 = 0u;
    S0 = std::bit_cast<float>(*global_005fbd18);
    ea_1 = r4 + 0xa0u;  // (from the original)
    *gptr<u32>(ea_1) = u32(3u);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(r4 + 0xa8u) = u32(r1);  // (from the original)
    r14 = 0x95df14u;  // (from the original)
    *gptr<u32>(r4 + 0xacu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r12 = 1u;
    *gptr<u8>(r4 + 0xcbu) = u8(r12);  // (from the original)
    *gptr<u8>(r4 + 0xccu) = u8(r12);  // (from the original)
    *gptr<u8>(r4 + 0xcdu) = u8(r1);  // (from the original)
    r0_1 = *gptr<u32>(r14);
    r3 = r4 + 0xd4u;  // (from the original)
    *gptr<u32>(r4 + 0xd8u) = u32(r0_1);  // (from the original)
    *gptr<u32>(r4 + 0xdcu) = u32(r0_1);  // (from the original)
    r0 = r4 + 0xe0u;  // (from the original)
L_5fbc6c:;
    r2_1 = *gptr<u32>(r0 + 0x50u);  // (from the original)
    if (r2_1 != 0) {
        r2_2 = r2_1 - 1u;
        *gptr<u32>(r0 + 0x50u) = u32(r2_2);  // (from the original)
        r2_3 = r0 + (r2_2 << 3);
        *gptr<u32>(r2_3) = u32(r1);
        *gptr<u32>(r2_3 + 4u) = u32(r1);
        guest::preempt();
        goto L_5fbc6c;
    }
    r5 = 2u;
    *gptr<u32>(r3 + 0x68u) = u32(r1);  // (from the original)
    *gptr<u8>(r3 + 0x6cu) = u8(r5);  // (from the original)
    *gptr<u8>(r3 + 0x6du) = u8(r12);  // (from the original)
    *gptr<u8>(r3 + 0x6eu) = u8(r1);  // (from the original)
    *gptr<u32>(r3 + 0x70u) = u32(r1);  // (from the original)
    *gptr<u32>(r3 + 0x74u) = u32(r1);  // (from the original)
    *gptr<u32>(r3 + 0x78u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r0_2 = *gptr<u32>(r14);
    r2 = r4 + 0x160u;  // (from the original)
    *gptr<u32>(r4 + 0x164u) = u32(r0_2);  // (from the original)
    *gptr<u32>(r4 + 0x168u) = u32(r0_2);  // (from the original)
    r0 = r4 + 0x16cu;  // (from the original)
L_5fbcc4:;
    r3_1 = *gptr<u32>(r0 + 0x50u);  // (from the original)
    if (r3_1 != 0) {
        r3_2 = r3_1 - 1u;
        *gptr<u32>(r0 + 0x50u) = u32(r3_2);  // (from the original)
        r3_3 = r0 + (r3_2 << 3);
        *gptr<u32>(r3_3) = u32(r1);
        *gptr<u32>(r3_3 + 4u) = u32(r1);
        guest::preempt();
        goto L_5fbcc4;
    }
    *gptr<u32>(r2 + 0x68u) = u32(r1);  // (from the original)
    *gptr<u8>(r2 + 0x6cu) = u8(r5);  // (from the original)
    *gptr<u8>(r2 + 0x6du) = u8(r12);  // (from the original)
    *gptr<u8>(r2 + 0x6eu) = u8(r1);  // (from the original)
    *gptr<u32>(r2 + 0x70u) = u32(r1);  // (from the original)
    *gptr<u32>(r2 + 0x74u) = u32(r1);  // (from the original)
    *gptr<u32>(r2 + 0x78u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r0_3 = *gptr<u32>(r4 + 0x90u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    call_005d60d4(r0_3, r1, r2, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    r0_4 = *gptr<u32>(r4 + 0x94u);  // (from the original)
    r13 = r13 + 0xc;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    return call_005d60d4(r0_4, r1_1, r2_4, r3_4);
}

}  // namespace d_005fbc20
GUEST_EXPORT(0x005fbc20, d_005fbc20::f_005fbc20);

// f_005fbfbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005fbfbc {

struct __attribute__((packed)) Object_005fbfbc_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 byte_10;
    u8 unknown_11[0x3];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Object_005fbfbc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005fbfbc_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005fbfbc_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005fbfbc_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005fbfbc_0, byte_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_005fbfbc_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_005fbfbc_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_005fbfbc_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_005fbfbc_0, word_20, 0x20);  // (from the original)

inline guest::global<u32, 0x005fc10c> global_005fc10c;  // (from the original)

u32 f_005fbfbc(gptr<Object_005fbfbc_0> arg0, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S0_1 = 0;
    float S0_2 = 0;
    float S1_1 = 0;
    float S0_3 = 0;
    float S0_4 = 0;
    u32 r1_3 = 0;
    float S3_2 = 0;
    float S0_5 = 0;
    float S1_2 = 0;
    float S0_6 = 0;
    float S1_3 = 0;
    u32 r1_4 = 0;
    float S1_4 = 0;
    float S0_7 = 0;
    float S1_5 = 0;
    u32 r1_5 = 0;
    float S0_8 = 0;
    u32 r1_6 = 0;
    u32 ea_1 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 r0_1 = 0;
    r1_1 = u32(arg0->byte_10);
    if (r1_1 >= 3u) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r1_2 = 0x890c24u + (r1_1 + (r1_1 << 1) << 3);  // (from the original)
    r2_1 = r1_2 + 0x10u;  // (from the original)
    S2_1 = std::bit_cast<float>(*gptr<u32>(r2_1));
    S3_1 = std::bit_cast<float>(*gptr<u32>(r2_1 + 4));
    S0_1 = -std::bit_cast<float>(arg0->word_18) * std::bit_cast<float>(*gptr<u32>(r1_2 + 0xcu));  // (from the original)
    arg0->word_1c = u32(std::bit_cast<u32>(std::bit_cast<float>(arg0->word_1c) + -std::bit_cast<float>(arg0->word_14) * std::bit_cast<float>(*gptr<u32>(r1_2 + 8u))));
    S0_2 = std::bit_cast<float>(arg0->word_20) + S0_1;
    arg0->word_20 = u32(std::bit_cast<u32>(S0_2));
    S1_1 = S0_2 * S3_1;
    S0_3 = std::bit_cast<float>(arg0->word_1c) * S2_1;
    arg0->word_1c = u32(std::bit_cast<u32>(S0_3));
    arg0->word_20 = u32(std::bit_cast<u32>(S1_1));
    arg0->word_14 = u32(std::bit_cast<u32>(std::bit_cast<float>(arg0->word_14) + S0_3));
    S0_4 = std::bit_cast<float>(arg0->word_18) + std::bit_cast<float>(arg0->word_20);
    arg0->word_18 = u32(std::bit_cast<u32>(S0_4));
    r1_3 = arg0->word_0;
    if (r1_3 != 0) {
        S3_2 = std::bit_cast<float>(arg0->word_c);
        S0_5 = std::bit_cast<float>(arg0->word_8) + S0_4;
        *gptr<u32>(r1_3 + 0x28u) = u32(std::bit_cast<u32>(std::bit_cast<float>(arg0->word_4) + std::bit_cast<float>(arg0->word_14)));  // (from the original)
        *gptr<u32>(r1_3 + 0x2cu) = u32(std::bit_cast<u32>(S0_5));  // (from the original)
        *gptr<u32>(r1_3 + 0x30u) = u32(std::bit_cast<u32>(S3_2));  // (from the original)
        *gptr<u8>(r1_3 + 0xb7u) = u8(u32(*gptr<u8>(r1_3 + 0xb7u)) & 0xcfu);  // (from the original)
    }
    S1_2 = std::bit_cast<float>(*gptr<u32>(r0 + 0x1cu));  // (from the original)
    S0_6 = std::bit_cast<float>(*gptr<u32>(r0 + 0x20u));  // (from the original)
    S1_3 = S1_2 * S1_2 + S0_6 * S0_6;
    r1_4 = std::bit_cast<u32>(S1_3);
    if (s32(r1_4) >= s32(0x3da3d70au)) {  // (from the original)
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->s[0] = S0_6;
        guest::cpu()->s[1] = S1_3;
        return r0;
    }
    S1_4 = std::bit_cast<float>(*gptr<u32>(r0 + 0x14u));  // (from the original)
    S0_7 = std::bit_cast<float>(*gptr<u32>(r0 + 0x18u));  // (from the original)
    S1_5 = S1_4 * S1_4 + S0_7 * S0_7;
    r1_5 = std::bit_cast<u32>(S1_5);
    if (s32(r1_5) >= s32(0x3f000000u)) {  // (from the original)
        guest::cpu()->r[1] = r1_5;
        guest::cpu()->s[0] = S0_7;
        guest::cpu()->s[1] = S1_5;
        return r0;
    }
    S0_8 = std::bit_cast<float>(*global_005fc10c);
    *gptr<u8>(r0 + 0x10u) = u8(3u);  // (from the original)
    *gptr<u32>(r0 + 0x14u) = u32(std::bit_cast<u32>(S0_8));  // (from the original)
    *gptr<u32>(r0 + 0x18u) = u32(std::bit_cast<u32>(S0_8));  // (from the original)
    *gptr<u32>(r0 + 0x1cu) = u32(std::bit_cast<u32>(S0_8));  // (from the original)
    *gptr<u32>(r0 + 0x20u) = u32(std::bit_cast<u32>(S0_8));  // (from the original)
    r1_6 = *gptr<u32>(r0);
    if (r1_6 == 0) {
        guest::cpu()->r[1] = r1_6;
        guest::cpu()->s[0] = S0_8;
        guest::cpu()->s[1] = S1_5;
        return r0;
    }
    ea_1 = r0 + 4u;
    r2_2 = *gptr<u32>(ea_1);
    r3_1 = *gptr<u32>(ea_1 + 4);
    ea_2 = r1_6 + 0x30u;  // (from the original)
    *gptr<u32>(ea_2) = u32(*gptr<u32>(r0 + 0xcu));  // (from the original)
    ea_3 = r1_6 + 0x28u;  // (from the original)
    *gptr<u32>(ea_3) = u32(r2_2);
    *gptr<u32>(ea_3 + 4) = u32(r3_1);
    r0_1 = u32(*gptr<u8>(r1_6 + 0xb7u)) & 0xcfu;  // (from the original)
    *gptr<u8>(r1_6 + 0xb7u) = u8(r0_1);  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->s[0] = S0_8;
    guest::cpu()->s[1] = S1_5;
    return r0_1;
}

}  // namespace d_005fbfbc
GUEST_EXPORT(0x005fbfbc, d_005fbfbc::f_005fbfbc);

// f_005fc110: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005fc110 {

struct __attribute__((packed)) Object_005fc110_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_005fc110_0, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x005fc1e4> global_005fc1e4;  // (from the original)

u32 f_005fc110(gptr<Object_005fc110_0> arg0, u32 r1, float S0) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r3_2 = 0;
    u32 r12_1 = 0;
    u32 r12_2 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 r4_1 = 0;
    u32 r3_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r2 = arg0->word_4;
    r0 = r1;
    r3_1 = *gptr<u32>(r2 + 0x1cu);  // (from the original)
    r1_1 = u32(s32(s8(*gptr<u8>(*gptr<u32>(r2 + 0x24u) + (r3_1 - 1u)))));  // (from the original)
    if (r1_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    r1 = *gptr<u32>(r2 + 0x14u);  // (from the original)
    r3_2 = u32(s32(*gptr<u32>(*gptr<u32>(r2 + 0x20u) + (r3_1 - 1u << 2)) - r1) >> 1);  // (from the original)
    if (r3_2 >> 0x1f != (r3_2 & (r3_2 ^ r3_2)) >> 0x1f) {  // (from the original)
        r3_2 = 0u;
        goto L_5fc168;
    }
    r12_1 = *gptr<u32>(r2 + 0x18u);  // (from the original)
    if (r12_1 < r3_2) {
        r3_2 = r12_1;
    }
L_5fc168:;
    *gptr<u32>(r2 + 0x2cu) = u32(0u);  // (from the original)
    r12_2 = *gptr<u32>(r2 + 0x34u);  // (from the original)
    r3 = uxth(r3_2);
    zf_1 = r12_2 == 0;
    cf_1 = r12_2 >= 0u;
    if (cf_1 && !zf_1) {
        S0 = std::bit_cast<float>(*global_005fc1e4);
    }
    r12 = 0u;
    if (!cf_1 || zf_1) {
        goto L_5fc1a8;
    }
    do {
L_5fc188:;
        r4_1 = *gptr<u32>(r2 + 0x30u) + (r12 << 3);  // (from the original)
        r12 = r12 + 1u;
        *gptr<u32>(r4_1) = u32(std::bit_cast<u32>(S0));
        *gptr<u32>(r4_1 + 4u) = u32(std::bit_cast<u32>(S0));
        guest::preempt();
    } while (*gptr<u32>(r2 + 0x34u) > r12);  // (from the original)
L_5fc1a8:;
    if (r3 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->s[0] = S0;
        return guest::call_address<u32>(*gptr<u32>(*gptr<u32>(r0) + 0x7cu), r0, r1, 0u, r3);  // (from the original)
    }
    r3_3 = *gptr<u32>(*gptr<u32>(r0) + 0x78u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->s[0] = S0;
    return guest::call_address<u32>(r3_3, r0, 0x8c9f1eu, 0u, r3_3);  // (from the original)
}

}  // namespace d_005fc110
GUEST_EXPORT(0x005fc110, d_005fc110::f_005fc110);

// f_005fc75c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005fc75c {

struct __attribute__((packed)) Object_005fc75c_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 byte_d;
    u8 byte_e;
    u8 byte_f;
    u8 byte_10;
    u8 byte_11;
};
GUEST_OFFSET(Object_005fc75c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005fc75c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005fc75c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005fc75c_0, byte_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005fc75c_0, byte_d, 0xd);  // (from the original)
GUEST_OFFSET(Object_005fc75c_0, byte_e, 0xe);  // (from the original)
GUEST_OFFSET(Object_005fc75c_0, byte_f, 0xf);  // (from the original)
GUEST_OFFSET(Object_005fc75c_0, byte_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_005fc75c_0, byte_11, 0x11);  // (from the original)

inline guest::global<u32, 0x005fc7f0> global_005fc7f0;  // (from the original)
inline constexpr guest::Function<0x006e69cc, u32(u32, u32, u32, u32)> call_006e69cc;  // (from the original)

u32 f_005fc75c(gptr<Object_005fc75c_0> arg0, u32 r1, u32 r2, float S0) {
    u32 r0 = arg0.addr();
    u32 r6_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    float S0_1 = 0;
    u32 r2_1 = 0;
    u32 r2_2 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r6_1 = r0 + 4u;
    arg0->word_0 = u32(0x909878u);  // (from the original)
    arg0->word_4 = u32(r1);
    arg0->word_8 = u32(r2);
    arg0->byte_c = u8(0u);
    arg0->byte_d = u8(0u);
    arg0->byte_e = u8(5u);
    arg0->byte_f = u8(3u);
    arg0->byte_10 = u8(0u);
    arg0->byte_11 = u8(0u);
    r0_1 = r0 + 0x14u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0_2 = call_006e69cc(r0_1, r1, r2, 5u);
    r0_3 = r0_2 - 0x14u;  // (from the original)
    S0_1 = std::bit_cast<float>(*global_005fc7f0);
    r2_1 = r0_3 + 0xb0cu;  // (from the original)
    *gptr<u32>(r0_3 + 0xb08u) = u32(0u);  // (from the original)
    *gptr<u32>(r2_1) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r2_1 + 4u) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r2_1 + 8u) = u32(std::bit_cast<u32>(S0_1));
    r2_2 = r0_3 + 0xb1cu;  // (from the original)
    *gptr<u8>(r0_3 + 0xb18u) = u8(3u);  // (from the original)
    *gptr<u32>(r2_2) = u32(std::bit_cast<u32>(S0_1));
    r1_1 = r0_3 + 0xb24u;  // (from the original)
    *gptr<u32>(r2_2 + 4u) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r1_1) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r1_1 + 4u) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u8>(r0_3 + 0xb2cu) = u8(0xbu);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = 0xbu;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    return r0_3;
}

}  // namespace d_005fc75c
GUEST_EXPORT(0x005fc75c, d_005fc75c::f_005fc75c);

// f_005ffd94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ffd94 {

struct __attribute__((packed)) Object_005ffd94_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Object_005ffd94_0, word_1c, 0x1c);  // (from the original)

struct __attribute__((packed)) Object_005ffd94_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_005ffd94_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005ffd94_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_005ffd94_2 {
    u8 unknown_0[0x364];  // (not used here)
    u32 word_364;
};
GUEST_OFFSET(Object_005ffd94_2, word_364, 0x364);  // (from the original)

inline guest::global<u16, 0x00887254> global_00887254;  // (from the original)
inline guest::global<u16, 0x008872d0> global_008872d0;  // (from the original)
inline guest::global<u32, 0x0094ee44> global_0094ee44;  // (from the original)
inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> call_003170f8;  // (from the original)
inline constexpr guest::Function<0x0052c878, u32(u32, u32, u32, u32)> call_0052c878;  // (from the original)

u32 f_005ffd94(gptr<Object_005ffd94_0> arg0, gptr<Object_005ffd94_1> arg1, gptr<Object_005ffd94_2> arg2) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = arg2.addr();
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    arg0->word_1c = u32(r1);
    arg1->word_8 = u32(r0);
    r0_1 = arg1->word_4;
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    arg2->word_364 = u32(r0_1);
    *gptr<u32>(r0_1 + 4u) = u32(r2);
    r0_1 = *global_0094ee44;
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r0_1 = call_003170f8(0xeu, 0u, r2, guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r0_2 = call_0052c878(r0_1, r1, r2_1, guest::cpu()->r[3]);
    if (r0_2 != 0) {
        r0_1 = u32(*gptr<u16>(r0_2 + 0xcu));  // (from the original)
        r1 = u32(*global_008872d0);
        if (r0_1 == r1) {
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0_1;
        }
        r0_1 = u32(*gptr<u16>(r0_2 + 0xcu));  // (from the original)
        r1 = u32(*global_00887254);
        if (r0_1 == r1) {
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0_1;
        }
    }
    r0_1 = *global_0094ee44;
    r1 = u32(*gptr<u8>(r0_1 + 0x14u));  // (from the original)
    if (r1 == 0) {
        r1 = 1u;
        *gptr<u8>(r0_1 + 0x14u) = u8(r1);  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_005ffd94
GUEST_EXPORT(0x005ffd94, d_005ffd94::f_005ffd94);
