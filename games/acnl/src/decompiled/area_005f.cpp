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
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r3 = 0xau;  // (from the original)
    arg0->word_0 = u32(0x909498u);  // (from the original)
    r2 = 0x74u;  // (from the original)
    arg0->word_11c38 = u32(0x90a228u);  // (from the original)
    r1 = 0x81dedcu;  // (from the original)
    r0 = r4 + 0x117b0u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x81dedcu;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x74u;  // (from the original)
    r0 = r4 + 0x11328u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x81dedcu;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x74u;  // (from the original)
    r0 = r4 + 0x10ea0u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x81c70cu;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x30u;  // (from the original)
    r0 = r4 + 0x10cc0u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x2fe884u;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x5cu;  // (from the original)
    r0 = r4 + 0x10928u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r0 = 0x1088cu;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x64u;  // (from the original)
    *gptr<u32>(r0 + r4) = u32(0x90a260u);  // (from the original)
    *gptr<u32>(r0 - 0x38u + r4) = u32(0x909af0u);  // (from the original)
    r1 = 0x3050f4u;  // (from the original)
    r0 = r4 + 0x1046cu;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r3 = 0xau;  // (from the original)
    r2 = 0x60u;  // (from the original)
    *gptr<u32>(0x10410u + r4) = u32(0x909f18u);  // (from the original)
    r1 = 0x81dadcu;  // (from the original)
    r0 = r4 + 0x10050u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x2fe884u;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x5cu;  // (from the original)
    r0 = r4 + 0xfcb8u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x3009ccu;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x2cu;  // (from the original)
    r0 = r4 + 0xfb00u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x3009ccu;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x2cu;  // (from the original)
    r0 = r4 + 0xf948u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x3009ccu;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x2cu;  // (from the original)
    r0 = r4 + 0xf790u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x81c4e8u;  // (from the original)
    r3 = 0x8cu;  // (from the original)
    r2 = 0xf4u;  // (from the original)
    r0 = r4 + 0x7220u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x81c4e8u;  // (from the original)
    r3 = 0x17u;  // (from the original)
    r2 = 0xf4u;  // (from the original)
    r0 = r4 + 0x5c34u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r0 = 0x5c18u;  // (from the original)
    r5 = 0x90a3e8u;  // (from the original)
    r3 = 0xau;  // (from the original)
    *gptr<u32>(r0 + r4) = u32(0x909e70u);  // (from the original)
    r0 = r0 - 0x2cu;  // (from the original)
    *gptr<u32>(r0 + r4) = u32(r5);
    r2 = 0x34u;  // (from the original)
    *gptr<u32>(r0 - 0x54u + r4) = u32(0x909e38u);  // (from the original)
    r1 = 0x81ec90u;  // (from the original)
    r0 = r4 + 0x5990u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x81ea88u;  // (from the original)
    r0 = r4 + 0x54b8u;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x7cu;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x81dedcu;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x74u;  // (from the original)
    r0 = r4 + 0x5030u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x81ec20u;  // (from the original)
    r0 = r4 + 0x4838u;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0xccu;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x3009ccu;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x2cu;  // (from the original)
    r0 = r4 + 0x4680u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x3009ccu;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x2cu;  // (from the original)
    r0 = r4 + 0x44c8u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x81dedcu;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x74u;  // (from the original)
    r0 = r4 + 0x4040u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r0 = 0x400cu;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x5cu;  // (from the original)
    *gptr<u32>(r0 + r4) = u32(0x909a48u);  // (from the original)
    *gptr<u32>(r0 - 0x30u + r4) = u32(0x909a10u);  // (from the original)
    r1 = 0x81ea18u;  // (from the original)
    r0 = r4 + 0x3c44u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x81ea18u;  // (from the original)
    r0 = r4 + 0x38acu;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x5cu;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x81ea18u;  // (from the original)
    r0 = r4 + 0x3514u;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x5cu;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x81eb54u;  // (from the original)
    r0 = r4 + 0x2f4cu;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x94u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x81ea18u;  // (from the original)
    r0 = r4 + 0x2bb4u;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x5cu;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x81ea18u;  // (from the original)
    r0 = r4 + 0x281cu;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x5cu;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x81ea18u;  // (from the original)
    r0 = r4 + 0x2484u;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x5cu;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x81ea18u;  // (from the original)
    r0 = r4 + 0x20ecu;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x5cu;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r0 = 0x2078u;  // (from the original)
    r1 = 0x90a0d8u;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x60u;  // (from the original)
    *gptr<u32>(r0 + r4) = u32(r1);
    *gptr<u32>(r0 - 0x74u + r4) = u32(r1);  // (from the original)
    r1 = 0x81dadcu;  // (from the original)
    r0 = r4 + 0x1c44u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r0 = 0x1c18u;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x34u;  // (from the original)
    *gptr<u32>(r0 + r4) = u32(r5);
    r0 = r0 - 0x30u;  // (from the original)
    *gptr<u32>(r0 + r4) = u32(0x909968u);  // (from the original)
    r0 = r0 - 0x2cu;  // (from the original)
    r1 = 0x81ec90u;  // (from the original)
    *gptr<u32>(r0 + r4) = u32(r5);
    *gptr<u32>(r0 - 0x2cu + r4) = u32(r5);  // (from the original)
    r0 = r4 + 0x1988u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r0 = 0x195cu;  // (from the original)
    r1 = 0x312cb0u;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x44u;  // (from the original)
    *gptr<u32>(r0 + r4) = u32(r5);
    r0 = r0 - 0x2cu;  // (from the original)
    *gptr<u32>(r0 + r4) = u32(r5);
    *gptr<u32>(r0 - 0x2cu + r4) = u32(r5);  // (from the original)
    r0 = r4 + 0x165cu;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x312cb0u;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x44u;  // (from the original)
    r0 = r4 + 0x13b4u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r3 = 0xau;  // (from the original)
    r2 = 0x44u;  // (from the original)
    *gptr<u32>(0x1370u + r4) = u32(0x909c78u);  // (from the original)
    r1 = 0x312cb0u;  // (from the original)
    r0 = r4 + 0x10c8u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x312cb0u;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x44u;  // (from the original)
    r0 = r4 + 0xe20u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x2fe884u;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x5cu;  // (from the original)
    r0 = r4 + 0xa88u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x2fe884u;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x5cu;  // (from the original)
    r0 = r4 + 0x6f0u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x312cb0u;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x44u;  // (from the original)
    r0 = r4 + 0x448u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x312cb0u;  // (from the original)
    r3 = 0x10u;  // (from the original)
    r2 = 0x44u;  // (from the original)
    r0 = r4 + 8u;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
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
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    if (u32(arg0->byte_0) != 0) {
        r0 = r4 + 0x14u;  // (from the original)
        r0 = call_0056a974(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r5 = r0;
        if (r0 == 0) {
            goto L_5f1100;
        }
        r0 = r4 + 0x14u;  // (from the original)
        r0 = call_0056acfc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        *gptr<u8>(r4 + 1u) = u8(r0);
        goto L_5f1100;
    }
    if (u32(*gptr<u8>(r4 + 0x11u)) == 0) {  // (from the original)
        r0 = r4 + 4u;
        r0 = call_005bf790(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    } else {
        r0 = 1u;
    }
    r5 = 1u;
    *gptr<u8>(r4 + 1u) = u8(r0);
L_5f1100:;
    r0 = r5;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
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
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = 0u;
    arg0->byte_0 = u8(r1);
    arg0->byte_1 = u8(r5);
    r0 = r0 + 4u;
    r0 = call_0012ca50(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r0 + 0xdu) = u8(r5);  // (from the original)
    r0 = r0 + 0x10u;  // (from the original)
    r4 = r0;
    r1 = 0xebu;  // (from the original)
    r0 = call_002f825c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    r0 = call_0012ca7c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x9097a0u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    *gptr<u8>(r0 + 0xebu) = u8(r5);  // (from the original)
    r0 = r0 - 0x14u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 r0 = arg0.addr();
    r0 = arg0->word_4;
    return guest::call_address<u32>(*gptr<u32>(*gptr<u32>(r0) + 0x84u), r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
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
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    r0 = arg0->word_4;
    r2 = *gptr<u32>(*gptr<u32>(r0) + 0x9cu);  // (from the original)
    return guest::call_address<u32>(r2, r0, guest::cpu()->r[1], r2, guest::cpu()->r[3]);
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

inline constexpr guest::Function<0x0013cd00, u32(u32, u32, u32, u32)> call_0013cd00;  // (from the original)

u32 f_005f4860(gptr<Object_005f4860_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x20u;  // (from the original)
    r0 = u32(arg0->byte_28);
    r6 = r1;
    r5 = r2;
    if (r0 == 0) {
        arg0->word_180 = u32(~0u);
        r0 = 0x8c9f1cu;  // (from the original)
        r7 = 0x9047f8u;  // (from the original)
        r8 = 0u;
        *gptr<u8>(arg0->word_188) = u8(u32(*gptr<u8>(r0)));
        r2 = ~0u;
        *gptr<u8>(arg0->word_1b4) = u8(u32(*gptr<u8>(r0)));
        arg0->word_1dc = u32(r8);
        r1 = r13;
        r0 = r4 + 0x1b0u;  // (from the original)
        *gptr<u32>(r13 + 4u) = u32(r6);
        *gptr<u32>(r13) = u32(r7);
        guest::cpu()->r[13] = r13;
        r0 = call_0013cd00(r0, r1, r2, guest::cpu()->r[3]);
        if (r5 == 0) {
            r5 = r6;
        }
        r1 = r13;
        r2 = ~0u;
        r0 = r4 + 0x184u;  // (from the original)
        *gptr<u32>(r13 + 4u) = u32(r5);
        *gptr<u32>(r13) = u32(r7);
        guest::cpu()->r[13] = r13;
        r0 = call_0013cd00(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        *gptr<u8>(r4 + 0x1e6u) = u8(r8);  // (from the original)
        r0 = 1u;
        *gptr<u8>(r4 + 0x1e7u) = u8(r8);  // (from the original)
        *gptr<u8>(r4 + 0x29u) = u8(r0);  // (from the original)
    }
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005f4860
GUEST_EXPORT(0x005f4860, d_005f4860::f_005f4860);

// f_005f6b44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005f6b44 {

inline constexpr guest::Function<0x005d46dc, u32(u32, u32, u32, u32)> call_005d46dc;  // (from the original)
inline constexpr guest::Function<0x005f6eb0, u32(u32, u32, u32, u32)> call_005f6eb0;  // (from the original)

u32 f_005f6b44(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r6 = r2;
    r7 = r3;
    guest::cpu()->r[13] = r13;
    r0 = call_005d46dc(r0, r1, r2, r3);
    zf = r0 == 8u;
    r0 = 4u;
    if (zf) {
        r0 = 1u;
    }
    *gptr<u32>(r13) = u32(0xau);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r0);
    r3 = r7;
    r2 = r6;
    r1 = r5;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005f6eb0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005f6b44
GUEST_EXPORT(0x005f6b44, d_005f6b44::f_005f6b44);

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


void f_005f723c(gptr<Object_005f723c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    arg0->word_4 = u32(0xad59acu);  // (from the original)
    arg0->word_8 = u32(0x13u);  // (from the original)
    arg0->word_0 = u32(0x9055a0u);  // (from the original)
    *gptr<u16>(arg0->word_4 + 0x24u) = u16(u32(*gptr<u16>(0x8c9f1eu)));  // (from the original)
    r1 = r0 + 0xcu;  // (from the original)
    arg0->word_c = u32(0x90a538u);  // (from the original)
    arg0->word_10 = u32(0xad59acu);  // (from the original)
    arg0->word_14 = u32(0x13u);  // (from the original)
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005f723c
GUEST_EXPORT(0x005f723c, d_005f723c::f_005f723c);

// f_005fbc20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005fbc20 {

inline constexpr guest::Function<0x005d60d4, u32(u32, u32, u32, u32)> call_005d60d4;  // (from the original)
inline constexpr guest::Function<0x00601b44, u32(u32, u32, u32, u32)> call_00601b44;  // (from the original)

u32 f_005fbc20(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    r13 = r13 - 0xc;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00601b44(r0, r1, r2, r3);
    r1 = 0u;
    S0 = std::bit_cast<float>(*gptr<u32>(0x5fbd18u));  // (from the original)
    ea = r4 + 0xa0u;  // (from the original)
    *gptr<u32>(ea) = u32(3u);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(r4 + 0xa8u) = u32(r1);  // (from the original)
    r14 = 0x95df14u;  // (from the original)
    *gptr<u32>(r4 + 0xacu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r12 = 1u;
    *gptr<u8>(r4 + 0xcbu) = u8(r12);  // (from the original)
    *gptr<u8>(r4 + 0xccu) = u8(r12);  // (from the original)
    *gptr<u8>(r4 + 0xcdu) = u8(r1);  // (from the original)
    r0 = *gptr<u32>(r14);
    r3 = r4 + 0xd4u;  // (from the original)
    *gptr<u32>(r4 + 0xd8u) = u32(r0);  // (from the original)
    *gptr<u32>(r4 + 0xdcu) = u32(r0);  // (from the original)
    r0 = r4 + 0xe0u;  // (from the original)
L_5fbc6c:;
    r2 = *gptr<u32>(r0 + 0x50u);  // (from the original)
    if (r2 != 0) {
        r2 = r2 - 1u;
        *gptr<u32>(r0 + 0x50u) = u32(r2);  // (from the original)
        r2 = r0 + (r2 << 3);
        *gptr<u32>(r2) = u32(r1);
        *gptr<u32>(r2 + 4u) = u32(r1);
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
    r0 = *gptr<u32>(r14);
    r2 = r4 + 0x160u;  // (from the original)
    *gptr<u32>(r4 + 0x164u) = u32(r0);  // (from the original)
    *gptr<u32>(r4 + 0x168u) = u32(r0);  // (from the original)
    r0 = r4 + 0x16cu;  // (from the original)
L_5fbcc4:;
    r3 = *gptr<u32>(r0 + 0x50u);  // (from the original)
    if (r3 != 0) {
        r3 = r3 - 1u;
        *gptr<u32>(r0 + 0x50u) = u32(r3);  // (from the original)
        r3 = r0 + (r3 << 3);
        *gptr<u32>(r3) = u32(r1);
        *gptr<u32>(r3 + 4u) = u32(r1);
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
    r0 = *gptr<u32>(r4 + 0x90u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005d60d4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = *gptr<u32>(r4 + 0x94u);  // (from the original)
    r13 = r13 + 0xc;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return call_005d60d4(r0, r1, r2, r3);
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


u32 f_005fbfbc(gptr<Object_005fbfbc_0> arg0, float S0, float S1) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    float S2 = 0;
    float S3 = 0;
    r1 = u32(arg0->byte_10);
    if (r1 >= 3u) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r1 = 0x890c24u + (r1 + (r1 << 1) << 3);  // (from the original)
    r2 = r1 + 0x10u;  // (from the original)
    S2 = std::bit_cast<float>(*gptr<u32>(r2));
    S3 = std::bit_cast<float>(*gptr<u32>(r2 + 4));
    S0 = -std::bit_cast<float>(arg0->word_18) * std::bit_cast<float>(*gptr<u32>(r1 + 0xcu));  // (from the original)
    arg0->word_1c = u32(std::bit_cast<u32>(std::bit_cast<float>(arg0->word_1c) + -std::bit_cast<float>(arg0->word_14) * std::bit_cast<float>(*gptr<u32>(r1 + 8u))));
    S0 = std::bit_cast<float>(arg0->word_20) + S0;
    arg0->word_20 = u32(std::bit_cast<u32>(S0));
    S1 = S0 * S3;
    S0 = std::bit_cast<float>(arg0->word_1c) * S2;
    arg0->word_1c = u32(std::bit_cast<u32>(S0));
    arg0->word_20 = u32(std::bit_cast<u32>(S1));
    arg0->word_14 = u32(std::bit_cast<u32>(std::bit_cast<float>(arg0->word_14) + S0));
    S0 = std::bit_cast<float>(arg0->word_18) + std::bit_cast<float>(arg0->word_20);
    arg0->word_18 = u32(std::bit_cast<u32>(S0));
    r1 = arg0->word_0;
    if (r1 != 0) {
        S3 = std::bit_cast<float>(arg0->word_c);
        S0 = std::bit_cast<float>(arg0->word_8) + S0;
        *gptr<u32>(r1 + 0x28u) = u32(std::bit_cast<u32>(std::bit_cast<float>(arg0->word_4) + std::bit_cast<float>(arg0->word_14)));  // (from the original)
        *gptr<u32>(r1 + 0x2cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
        *gptr<u32>(r1 + 0x30u) = u32(std::bit_cast<u32>(S3));  // (from the original)
        *gptr<u8>(r1 + 0xb7u) = u8(u32(*gptr<u8>(r1 + 0xb7u)) & 0xcfu);  // (from the original)
    }
    S1 = std::bit_cast<float>(*gptr<u32>(r0 + 0x1cu));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r0 + 0x20u));  // (from the original)
    S1 = S1 * S1 + S0 * S0;
    r1 = std::bit_cast<u32>(S1);
    if (s32(r1) >= s32(0x3da3d70au)) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    S1 = std::bit_cast<float>(*gptr<u32>(r0 + 0x14u));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r0 + 0x18u));  // (from the original)
    S1 = S1 * S1 + S0 * S0;
    r1 = std::bit_cast<u32>(S1);
    if (s32(r1) >= s32(0x3f000000u)) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    S0 = std::bit_cast<float>(*gptr<u32>(0x5fc10cu));  // (from the original)
    *gptr<u8>(r0 + 0x10u) = u8(3u);  // (from the original)
    *gptr<u32>(r0 + 0x14u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0x18u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0x1cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0x20u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r1 = *gptr<u32>(r0);
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    ea = r0 + 4u;
    r2 = *gptr<u32>(ea);
    r3 = *gptr<u32>(ea + 4);
    ea = r1 + 0x30u;  // (from the original)
    *gptr<u32>(ea) = u32(*gptr<u32>(r0 + 0xcu));  // (from the original)
    ea = r1 + 0x28u;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    *gptr<u32>(ea + 4) = u32(r3);
    r0 = u32(*gptr<u8>(r1 + 0xb7u)) & 0xcfu;  // (from the original)
    *gptr<u8>(r1 + 0xb7u) = u8(r0);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_005fbfbc
GUEST_EXPORT(0x005fbfbc, d_005fbfbc::f_005fbfbc);

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

inline constexpr guest::Function<0x006e69cc, u32(u32, u32, u32, u32)> call_006e69cc;  // (from the original)

u32 f_005fc75c(gptr<Object_005fc75c_0> arg0, u32 r1, u32 r2, float S0) {
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r6 = r0 + 4u;
    r4 = 0u;
    r3 = 5u;
    arg0->word_0 = u32(0x909878u);  // (from the original)
    arg0->word_4 = u32(r1);
    arg0->word_8 = u32(r2);
    r5 = 3u;
    arg0->byte_c = u8(r4);
    arg0->byte_d = u8(r4);
    arg0->byte_e = u8(r3);
    arg0->byte_f = u8(r5);
    arg0->byte_10 = u8(r4);
    arg0->byte_11 = u8(r4);
    r0 = r0 + 0x14u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_006e69cc(r0, r1, r2, r3);
    r0 = r0 - 0x14u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x5fc7f0u));  // (from the original)
    r2 = r0 + 0xb0cu;  // (from the original)
    *gptr<u32>(r0 + 0xb08u) = u32(r4);  // (from the original)
    *gptr<u32>(r2) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r2 + 4u) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r2 + 8u) = u32(std::bit_cast<u32>(S0));
    r2 = r0 + 0xb1cu;  // (from the original)
    *gptr<u8>(r0 + 0xb18u) = u8(r5);  // (from the original)
    *gptr<u32>(r2) = u32(std::bit_cast<u32>(S0));
    r1 = r0 + 0xb24u;  // (from the original)
    *gptr<u32>(r2 + 4u) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r1) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r1 + 4u) = u32(std::bit_cast<u32>(S0));
    r1 = 0xbu;  // (from the original)
    *gptr<u8>(r0 + 0xb2cu) = u8(r1);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
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

inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> call_003170f8;  // (from the original)
inline constexpr guest::Function<0x0052c878, u32(u32, u32, u32, u32)> call_0052c878;  // (from the original)

u32 f_005ffd94(gptr<Object_005ffd94_0> arg0, gptr<Object_005ffd94_1> arg1, gptr<Object_005ffd94_2> arg2) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = arg2.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    arg0->word_1c = u32(r1);
    arg1->word_8 = u32(r0);
    r0 = arg1->word_4;
    if (r0 == 0) {
        goto L_5ffe24;
    }
    r5 = 0x94ee44u;  // (from the original)
    arg2->word_364 = u32(r0);
    *gptr<u32>(r0 + 4u) = u32(r2);
    r0 = *gptr<u32>(r5);
    if (r0 == 0) {
        goto L_5ffe24;
    }
    r1 = 0u;
    r0 = 0xeu;  // (from the original)
    r0 = call_003170f8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_5ffe24;
    }
    r0 = call_0052c878(r0, r1, r2, guest::cpu()->r[3]);
    r4 = r0;
    if (r0 != 0) {
        r0 = u32(*gptr<u16>(r0 + 0xcu));  // (from the original)
        r1 = u32(*gptr<u16>(0x8872d0u));  // (from the original)
        if (r0 == r1) {
            goto L_5ffe24;
        }
        r0 = u32(*gptr<u16>(r4 + 0xcu));  // (from the original)
        r1 = u32(*gptr<u16>(0x887254u));  // (from the original)
        if (r0 == r1) {
            goto L_5ffe24;
        }
    }
    r0 = *gptr<u32>(r5);
    r1 = u32(*gptr<u8>(r0 + 0x14u));  // (from the original)
    if (r1 == 0) {
        r1 = 1u;
        *gptr<u8>(r0 + 0x14u) = u8(r1);  // (from the original)
    }
L_5ffe24:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005ffd94
GUEST_EXPORT(0x005ffd94, d_005ffd94::f_005ffd94);
