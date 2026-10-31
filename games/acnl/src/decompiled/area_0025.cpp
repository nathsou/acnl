// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_00250334: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00250334 {

inline guest::global<u32, 0x00250350> global_00250350;  // (from the original)
inline constexpr guest::Function<0x00277fe4, u32(u32, u32, u32, u32)> call_00277fe4;  // (from the original)

u32 f_00250334(u32 r0, u32 r1, float S0) {
    u32 r0_1 = 0;
    float S0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    guest::cpu()->s[0] = S0;
    r0_1 = call_00277fe4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0_1 = std::bit_cast<float>(*global_00250350);
    *gptr<u32>(r0_1 + 0xc0u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u8>(r0_1 + 0xc4u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0u;
    guest::cpu()->s[0] = S0_1;
    return r0_1;
}

}  // namespace d_00250334
GUEST_EXPORT(0x00250334, d_00250334::f_00250334);

// f_00250354: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00250354 {

inline constexpr guest::Function<0x001e5894, u32(u32, u32, u32, u32)> call_001e5894;  // (from the original)
inline constexpr guest::Function<0x0020a4cc, u32(u32, u32, u32, u32)> call_0020a4cc;  // (from the original)

u32 f_00250354(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_001e5894(r0_1, r1, r2, guest::cpu()->r[3]);
    r2_1 = r13;
    guest::cpu()->r[13] = r13;
    call_0020a4cc(r0, r1, r2_1, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    *gptr<u8>(r0 + 0x5cu) = u8(1u);  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_00250354
GUEST_EXPORT(0x00250354, d_00250354::f_00250354);

// f_002503b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002503b0 {

inline constexpr guest::Function<0x0081fe54, u32(u32, u32, u32, u32)> call_0081fe54;  // (from the original)

u32 f_002503b0() {
    guest::cpu()->r[13] -= 8u;
    call_0081fe54(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return guest::cpu()->r[0];
}

}  // namespace d_002503b0
GUEST_EXPORT(0x002503b0, d_002503b0::f_002503b0);

// f_002504d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002504d4 {

inline constexpr guest::Function<0x00820110, u32(u32, u32, u32, u32)> call_00820110;  // (from the original)

u32 f_002504d4() {
    guest::cpu()->r[13] -= 8u;
    call_00820110(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return guest::cpu()->r[0];
}

}  // namespace d_002504d4
GUEST_EXPORT(0x002504d4, d_002504d4::f_002504d4);

// f_00250510: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00250510 {

inline constexpr guest::Function<0x0020af18, u32(u32, u32, u32, u32)> call_0020af18;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_00250510(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_0020af18(r0, r1, r2, r3);
    *gptr<u32>(r0_1) = u32(0x8f8d88u);  // (from the original)
    r0_2 = r0_1 + 0x44u;  // (from the original)
    r0_3 = call_00301d0c(r0_2, 0x131800u, 4u, 1u);  // (from the original)
    r0_4 = r0_3 + 4u;
    r0_5 = call_00301d0c(r0_4, 0x1287a8u, 0x14u, 1u);  // (from the original)
    r0_6 = r0_5 - 0x48u;  // (from the original)
    *gptr<u8>(r0_6 + 0x5cu) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0u;
    return r0_6;
}

}  // namespace d_00250510
GUEST_EXPORT(0x00250510, d_00250510::f_00250510);

// f_00250560: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00250560 {

struct __attribute__((packed)) Object_00250560_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00250560_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00136cc8, u32(u32, u32, u32, u32)> call_00136cc8;  // (from the original)
inline constexpr guest::Function<0x0020aedc, u32(u32, u32, u32, u32)> call_0020aedc;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_00250560(gptr<Object_00250560_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    arg0->word_0 = u32(0x8f8d88u);  // (from the original)
    r0_1 = r0 + 0x44u;  // (from the original)
    call_00136cc8(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    call_0020aedc(r0, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_2 = r0 + 0x44u;  // (from the original)
    call_00136cc8(r0_2, r1_2, r2_2, r3_2);
    call_002f76ac(r0_2, 0x137d74u, 4u, 1u);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return r0;
}

}  // namespace d_00250560
GUEST_EXPORT(0x00250560, d_00250560::f_00250560);

// f_00250b34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00250b34 {

inline constexpr guest::Function<0x002933cc, u32(u32, u32, u32, u32)> call_002933cc;  // (from the original)

u32 f_00250b34(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    call_002933cc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    *gptr<u32>(0x94ee2cu + 8u) = u32(0u);  // (from the original)
    guest::cpu()->r[1] = 0u;
    return 0x94ee2cu;  // (from the original)
}

}  // namespace d_00250b34
GUEST_EXPORT(0x00250b34, d_00250b34::f_00250b34);

// f_00250b58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00250b58 {

inline constexpr guest::Function<0x0014f7fc, u32(u32, u32, u32, u32)> call_0014f7fc;  // (from the original)
inline constexpr guest::Function<0x0014f9b4, u32(u32, u32, u32, u32)> call_0014f9b4;  // (from the original)
inline constexpr guest::Function<0x0014f9bc, u32(u32, u32, u32, u32)> call_0014f9bc;  // (from the original)
inline constexpr guest::Function<0x001de7f8, u32(u32, u32, u32, u32)> call_001de7f8;  // (from the original)
inline constexpr guest::Function<0x0024da38, u32(u32, u32, u32, u32)> call_0024da38;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x00317ee0, u32(u32, u32, u32, u32)> call_00317ee0;  // (from the original)
inline constexpr guest::Function<0x0057b9dc, u32(u32, u32, u32, u32)> call_0057b9dc;  // (from the original)
inline constexpr guest::Function<0x005c2ce0, u32(u32, u32, u32, u32)> call_005c2ce0;  // (from the original)
inline constexpr guest::Function<0x006268f8, u32(u32, u32, u32, u32)> call_006268f8;  // (from the original)
inline constexpr guest::Function<0x006c5fa0, u32(u32, u32, u32, u32)> call_006c5fa0;  // (from the original)
inline constexpr guest::Function<0x006f9638, u32(u32, u32, u32, u32)> call_006f9638;  // (from the original)
inline constexpr guest::Function<0x006fa728, u32(u32, u32, u32, u32)> call_006fa728;  // (from the original)
inline constexpr guest::Function<0x006fb0cc, u32(u32, u32, u32, u32)> call_006fb0cc;  // (from the original)

u32 f_00250b58(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
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
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    float S0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    float S0_4 = 0;
    u32 r0_10 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    float S0_5 = 0;
    u32 r0_11 = 0;
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    float S0_6 = 0;
    u32 r0_12 = 0;
    u32 r1_7 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    float S0_7 = 0;
    u32 r0_13 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    float S0_8 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_8 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    float S0_9 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r1_9 = 0;
    u32 r5_1 = 0;
    u32 r2_10 = 0;
    float S0_10 = 0;
    u32 res_1 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r3_10 = 0;
    float S0_11 = 0;
    u32 r1_10 = 0;
    u32 r0_20 = 0;
    float S0_12 = 0;
    u32 r0_21 = 0;
    u32 r3_11 = 0;
    u32 r0_22 = 0;
    u32 r2_11 = 0;
    u32 ea_1 = 0;
    r13 = r13 - 0x38u;  // (from the original)
    r6 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0_1 = call_002f74c8(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    r0_2 = call_006f9638(r0_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    r0_3 = call_006fb0cc(r0_2, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    r0_4 = call_006fa728(r0_2, r1_3, r2_3, r3_3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0_5 = (r0_4 + (r0_4 << 1) << 2) + (r0_3 << 1);
    if (r0_5 > 0x26u) {  // (from the original)
        r0_5 = 0u;
    }
    r5 = r0_5 + 0x5cu;  // (from the original)
    r4 = 0u;
    do {
L_250b9c:;
        r0_6 = r5 + r4 & 0xffu;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0_7 = call_006268f8(r0_6, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        r0_8 = *gptr<u32>(r0_7);
        r1 = r6 + (r4 << 2);
        r4 = r4 + 1u;
        *gptr<u32>(r1 + 0x138u) = u32(r0_8);  // (from the original)
        guest::preempt();
    } while (r4 < 2u);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0_9 = call_002f74c8(r0_8, r1, r2, r3);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    S0_4 = guest::cpu()->s[0];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    r0_10 = call_006f9638(r0_9, r1_4, r2_4, r3_4);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    S0_5 = guest::cpu()->s[0];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    r0_11 = call_006fb0cc(r0_10, r1_5, r2_5, r3_5);
    r1_6 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    S0_6 = guest::cpu()->s[0];
    r8 = r0_11;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_6;
    r0_12 = call_006fa728(r0_10, r1_6, r2_6, r3_6);
    r1_7 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    S0_7 = guest::cpu()->s[0];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_7;
    r0_13 = call_002fae84(r0_12, r1_7, r2_7, r3_7);
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    S0_8 = guest::cpu()->s[0];
    r0_14 = r0_13 + 0x5d880u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_8;
    r0_15 = call_00317ee0(r0_14, r0_12, r2_8, r3_8);
    r1_8 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    S0_9 = guest::cpu()->s[0];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_9;
    r0_16 = call_0024da38(r0_15, r1_8, r2_9, r3_9);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r10 = 0x887212u;  // (from the original)
    r4 = 0u;
    r11 = r0_16;
    r9 = r4;
L_250c20:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0_17 = call_001de7f8(r11, r8, r4, r3);
    r1_9 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    if (r0_17 == 0) {
        goto L_250d28;
    }
    r5_1 = r6 + (r4 << 2);
    r2_10 = u32(*gptr<u8>(r5_1 + 0x139u));  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(float(std::bit_cast<u32>(std::bit_cast<float>((u32(*gptr<u8>(r5_1 + 0x138u)) >> 6) + (r2_10 << 2) << 2)))));  // (from the original)
    S0_10 = float(std::bit_cast<u32>(std::bit_cast<float>(u32(*gptr<u8>(r5_1 + 0x13au)) + ((u32(*gptr<u8>(r5_1 + 0x13bu)) & 3u) << 8) << 2)));  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(std::bit_cast<u32>(S0_10));  // (from the original)
    res_1 = u32(*gptr<u8>(r5_1 + 0x138u)) << 0x1a >> 0x1c;  // (from the original)
    if (res_1 != 0) {
        goto L_250cc0;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_10;
    r0_18 = call_005c2ce0(4u, 1u, r2_10, r3);
    r2_10 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0_10 = guest::cpu()->s[0];
    if (r0_18 == 0) {
        goto L_250cc0;
    }
    *gptr<u32>(r13 + 4u) = u32(*gptr<u32>(r0_18));
    *gptr<u32>(r13 + 8u) = u32(*gptr<u32>(r0_18 + 4u));
    *gptr<u32>(r13 + 0xcu) = u32(*gptr<u32>(r0_18 + 8u));  // (from the original)
L_250cc0:;
    r0_19 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_10;
    call_006c5fa0(r0_19, 0u, r2_10, r3);
    r3_10 = guest::cpu()->r[3];
    S0_11 = guest::cpu()->s[0];
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0_11));
    r1_10 = u32(*gptr<u8>(r5_1 + 0x138u)) << 0x1a >> 0x1c;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_11;
    r0_20 = call_0014f9b4(r4, r1_10, 0u, r3_10);
    S0_12 = guest::cpu()->s[0];
    *gptr<u32>(r13) = u32(r9);
    r0_21 = u32(*gptr<u16>(r10));
    r3_11 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_12;
    r0_22 = call_0057b9dc(r0_21, r6, r0_20, r3_11);
    r1_9 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    ea_1 = r5_1 + 0x140u;  // (from the original)
    r0_17 = *gptr<u32>(ea_1);
    if (r0_17 != 0) {
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0_17 = call_0014f7fc(r0_17, r1_9, r2_11, r3);
        r1_9 = guest::cpu()->r[1];
        r2_11 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
    }
    if (r0_22 == 0) {
        goto L_250d28;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0_17 = call_0014f9bc(r0_22, ea_1, r2_11, r3);
    r1_9 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
L_250d28:;
    r4 = r4 + 1u;
    if (r4 < 2u) {
        guest::preempt();
        goto L_250c20;
    }
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1_9;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0_17;
}

}  // namespace d_00250b58
GUEST_EXPORT(0x00250b58, d_00250b58::f_00250b58);

// f_00251690: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00251690 {

struct __attribute__((packed)) Object_00251690_0 {
    u8 unknown_0[0x34];  // (not used here)
    u32 word_34;
    u32 word_38;
};
GUEST_OFFSET(Object_00251690_0, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_00251690_0, word_38, 0x38);  // (from the original)

inline guest::global<u32, 0x00846510> global_00846510;  // (from the original)

u32 f_00251690(gptr<Object_00251690_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    r3_1 = arg0->word_34;
    r1_1 = *gptr<u32>(0x846510u + 0x14u);  // (from the original)
    if (r3_1 == *gptr<u32>(0x846510u + 0x10u)) {  // (from the original)
        if (r3_1 == 0) {
            if (((arg0->word_38 | r1_1) & 1u) == 0) {
                guest::cpu()->r[1] = r1_1;
                return 1u;
            }
        }
        if (*gptr<u32>(r0 + 0x38u) == r1_1) {  // (from the original)
            guest::cpu()->r[1] = r1_1;
            return 1u;
        }
    }
    r1_2 = *gptr<u32>(0x846510u + 4u);  // (from the original)
    if (r3_1 != *global_00846510) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    if (r3_1 == 0) {
        if (((*gptr<u32>(r0 + 0x38u) | r1_2) & 1u) == 0) {  // (from the original)
            guest::cpu()->r[1] = r1_2;
            return 1u;
        }
    }
    if (*gptr<u32>(r0 + 0x38u) != r1_2) {  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_00251690
GUEST_EXPORT(0x00251690, d_00251690::f_00251690);

// f_00251818: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00251818 {

struct __attribute__((packed)) Object_00251818_0 {
    u8 unknown_0[0x34];  // (not used here)
    u32 word_34;
    u32 word_38;
};
GUEST_OFFSET(Object_00251818_0, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_00251818_0, word_38, 0x38);  // (from the original)


u32 f_00251818(gptr<Object_00251818_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    r3_1 = arg0->word_34;
    r2_1 = *gptr<u32>(0x846510u + 0x10u);  // (from the original)
    r1_1 = *gptr<u32>(0x846510u + 0x14u);  // (from the original)
    if (r3_1 != r2_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if (r3_1 == 0) {
        if (((arg0->word_38 | r1_1) & 1u) == 0) {
            guest::cpu()->r[1] = r1_1;
            return 1u;
        }
    }
    if (*gptr<u32>(r0 + 0x38u) != r1_1) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_00251818
GUEST_EXPORT(0x00251818, d_00251818::f_00251818);

// f_00251868: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00251868 {

inline guest::global<u32, 0x00846530> global_00846530;  // (from the original)
inline constexpr guest::Function<0x00817694, u32(u32, u32, u32, u32)> call_00817694;  // (from the original)

u32 f_00251868(u32 r0) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0x28u;  // (from the original)
    r1_1 = *global_00846530;
    r2_1 = *gptr<u32>(0x846530u + 4);  // (from the original)
    r0_2 = call_00817694(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return r0_2;
}

}  // namespace d_00251868
GUEST_EXPORT(0x00251868, d_00251868::f_00251868);

// f_002518f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002518f4 {

struct __attribute__((packed)) Object_002518f4_2 {
    u8 unknown_0[0x846bcb];  // (not used here)
    u8 byte_846bcb;
};
GUEST_OFFSET(Object_002518f4_2, byte_846bcb, 0x846bcb);  // (from the original)

inline constexpr guest::Function<0x006268f8, u32(u32, u32, u32, u32)> call_006268f8;  // (from the original)
inline constexpr guest::Function<0x007795ec, u32(u32, u32, u32, u32)> call_007795ec;  // (from the original)

u32 f_002518f4(u32 r0_unused, u32 r1, gptr<Object_002518f4_2> arg2) {
    u32 r2 = arg2.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = u32(arg2->byte_846bcb);
    r0_2 = call_006268f8(r0_1, r1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    guest::cpu()->r[13] += 8u;
    return call_007795ec(r1, r0_2, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_002518f4
GUEST_EXPORT(0x002518f4, d_002518f4::f_002518f4);

// f_0025191c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0025191c {


u32 f_0025191c(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    r1_1 = r1 + (r1 << 5);
    r0_1 = r0 + (r1_1 << 3) + 0x128u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0025191c
GUEST_EXPORT(0x0025191c, d_0025191c::f_0025191c);

// f_00251938: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00251938 {

struct __attribute__((packed)) Object_00251938_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00251938_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00251938_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00251938_2, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x006162e0, u32(u32, u32, u32, u32)> call_006162e0;  // (from the original)

u32 f_00251938(u32 r0, u32 r1, gptr<Object_00251938_2> arg2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r1_1 = r0 + ((r1 << 4) - r1 << 4);
    if (u32(*gptr<u8>(r1_1 + 0x3fau)) != 2u) {  // (from the original)
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    arg2->word_0 = u32(*gptr<u32>(r1_1 + 0x3a8u));  // (from the original)
    r3_1 = *gptr<u32>(r1_1 + 0x3acu);  // (from the original)
    arg2->word_4 = u32(r3_1);
    arg2->word_8 = u32(*gptr<u32>(r1_1 + 0x3b0u));  // (from the original)
    r1_2 = u32(*gptr<u8>(r1_1 + 0x3f8u));  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_006162e0(r0_1, r1_2, 0u, r3_1);
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r1_3 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r3, r1_3, r2_1, r3_2);
    r1_4 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_00251938
GUEST_EXPORT(0x00251938, d_00251938::f_00251938);

// f_00251c24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00251c24 {

inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x0061a7a0, u32(u32, u32, u32, u32)> call_0061a7a0;  // (from the original)

u32 f_00251c24(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r4_1 = 0;
    u32 res_1 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r5_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_00300904(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    r0_2 = r0 + (r1 + (r1 << 1) << 1) + 0xe4u;  // (from the original)
    r4_1 = 0u;
    res_1 = u32(*gptr<u8>(r0_2 + 5u)) << 0x19;  // (from the original)
    r1_1 = res_1;
    if (res_1 >> 0x1f) {  // (from the original)
        goto L_251c9c;
    }
    r1_2 = u32(*gptr<u8>(r0_2 + 3u));
    r0_3 = u32(*gptr<u8>(r0_2 + 4u)) & 3u;
    r1_3 = r1_2 >> 7;
    r5_1 = r1_3 + (r0_3 << 1);
    if (r5_1 != 4u) {
        r0_4 = call_00305f44(r0_3, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        if (r5_1 == r0_4) {
            goto L_251c98;
        }
        goto L_251c9c;
    }
    r0_5 = call_0061a7a0(r0_3, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_5 == 0) {
        goto L_251c9c;
    }
L_251c98:;
    r4_1 = 1u;
L_251c9c:;
    r0_1 = r4_1;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00251c24
GUEST_EXPORT(0x00251c24, d_00251c24::f_00251c24);

// f_00251f14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00251f14 {

inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32, u32)> call_0062512c;  // (from the original)

u32 f_00251f14(u32 r0, u32 r1, u32 r2) {
    u32 r8_1 = 0;
    u32 r5_1 = 0;
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 res_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r8_1 = r1 + (r1 << 1);
    r5_1 = r0 + (r8_1 << 1);
    r4_1 = r5_1 + 0xe4u;  // (from the original)
    r0_1 = call_00305f44(r0, r1, r2, guest::cpu()->r[3]);
    r2_1 = r0_1 & 6u;
    res_1 = r1 - 8u;
    *gptr<u8>(r4_1 + 3u) = u8(u32(*gptr<u8>(r4_1 + 3u)) & ~0x80u | r0_1 << 7);  // (from the original)
    *gptr<u8>(r4_1 + 4u) = u8(u32(*gptr<u8>(r4_1 + 4u)) & ~3u | r2_1 >> 1);
    r1_1 = u32(*gptr<u8>(r5_1 + 0xe9u)) & ~0x40u;  // (from the original)
    *gptr<u8>(r5_1 + 0xe9u) = u8(r1_1);  // (from the original)
    if (res_1 >> 0x1f != ((r1 ^ 8u) & (r1 ^ res_1)) >> 0x1f) {  // (from the original)
        r1_2 = r5_1 + 0xe4u;  // (from the original)
        r0_2 = u32(*gptr<u8>(0x846bcbu + r1));  // (from the original)
        call_0062512c(r0_2, r1_2, 1u, guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
    }
    r0_3 = *gptr<u32>(r0 + (r8_1 << 3) + 0x24u);  // (from the original)
    if (r0_3 != 0) {
        r1_3 = *gptr<u32>(*gptr<u32>(r0_3) + 0xacu);  // (from the original)
        guest::cpu()->r[13] += 0x18u;  // (from the original)
        return guest::call_address<u32>(r1_3, r0_3, r1_3, r2_1, guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_3;
}

}  // namespace d_00251f14
GUEST_EXPORT(0x00251f14, d_00251f14::f_00251f14);

// f_00251fa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00251fa4 {

struct __attribute__((packed)) Object_00251fa4_1 {
    u8 unknown_0[0x846bcb];  // (not used here)
    u8 byte_846bcb;
};
GUEST_OFFSET(Object_00251fa4_1, byte_846bcb, 0x846bcb);  // (from the original)

inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32, u32)> call_0062512c;  // (from the original)

u32 f_00251fa4(u32 r0, gptr<Object_00251fa4_1> arg1, u32 r2) {
    u32 r1 = arg1.addr();
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 res_1 = 0;
    u32 r4_1 = 0;
    u32 res_2 = 0;
    u32 r3_2 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    r3_1 = r1 + (r1 << 1);
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r2_1 = r0 + (r3_1 << 1);
    res_1 = u32(*gptr<u8>(r2_1 + 0xe9u)) << 0x19;  // (from the original)
    if (!(res_1 >> 0x1f)) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r0 + (r3_1 << 3);
    r4_1 = *gptr<u32>(r0 + 0x24u);  // (from the original)
    res_2 = r1 - 8u;
    *gptr<u8>(r2_1 + 0xe7u) = u8(u32(*gptr<u8>(r2_1 + 0xe7u)) & ~0x80u);  // (from the original)
    *gptr<u8>(r2_1 + 0xe8u) = u8(u32(*gptr<u8>(r2_1 + 0xe8u)) & ~3u | 2u);  // (from the original)
    r3_2 = u32(*gptr<u8>(r2_1 + 0xe9u)) & ~0x40u;  // (from the original)
    *gptr<u8>(r2_1 + 0xe9u) = u8(r3_2);  // (from the original)
    if (res_2 >> 0x1f != ((r1 ^ 8u) & (r1 ^ res_2)) >> 0x1f) {  // (from the original)
        r0_1 = u32(arg1->byte_846bcb);
        r1_1 = r2_1 + 0xe4u;  // (from the original)
        r0 = call_0062512c(r0_1, r1_1, 1u, r3_2);
        r1 = guest::cpu()->r[1];
        r3_2 = guest::cpu()->r[3];
    }
    if (r4_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1_2 = r2 & 0xffu;  // (from the original)
    r2_2 = *gptr<u32>(*gptr<u32>(r4_1) + 0xb0u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return guest::call_address<u32>(r2_2, r4_1, r1_2, r2_2, r3_2);
}

}  // namespace d_00251fa4
GUEST_EXPORT(0x00251fa4, d_00251fa4::f_00251fa4);

// f_00252034: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00252034 {

struct __attribute__((packed)) Object_00252034_0 {
    u8 unknown_0[0x11b8];  // (not used here)
    u32 word_11b8;
    u8 unknown_11bc[0x4];  // (not used here)
    u32 word_11c0;
    u8 unknown_11c4[0xd];  // (not used here)
    u8 byte_11d1;
};
GUEST_OFFSET(Object_00252034_0, word_11b8, 0x11b8);  // (from the original)
GUEST_OFFSET(Object_00252034_0, word_11c0, 0x11c0);  // (from the original)
GUEST_OFFSET(Object_00252034_0, byte_11d1, 0x11d1);  // (from the original)

struct __attribute__((packed)) Object_00252034_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_00252034_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00252034_1, word_8, 0x8);  // (from the original)


u32 f_00252034(gptr<Object_00252034_0> arg0, gptr<Object_00252034_1> arg1, float S0, float S1) {
    u32 fpsr = guest::cpu()->fpscr;
    float S2_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S0_2 = 0;
    u32 fpsr_1 = 0;
    if (u32(arg0->byte_11d1) != 2u) {
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return 0u;
    }
    S2_1 = S0 * S0;
    S0_1 = std::bit_cast<float>(arg1->word_0) - std::bit_cast<float>(arg0->word_11b8);
    S1_1 = std::bit_cast<float>(arg1->word_8) - std::bit_cast<float>(arg0->word_11c0);
    S0_2 = S0_1 * S0_1 + S1_1 * S1_1;
    fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S2_1, S0_2);  // (from the original)
    if (!(fpsr_1 >> 0x1e & 1) && fpsr_1 >> 0x1f == (fpsr_1 >> 0x1c & 1)) {  // (from the original)
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_1;
        return 1u;
    }
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    return 0u;
}

}  // namespace d_00252034
GUEST_EXPORT(0x00252034, d_00252034::f_00252034);

// f_002520fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002520fc {

inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x0061a7a0, u32(u32, u32, u32, u32)> call_0061a7a0;  // (from the original)
inline constexpr guest::Function<0x006268f8, u32(u32, u32, u32, u32)> call_006268f8;  // (from the original)
inline constexpr guest::Function<0x007795ec, u32(u32, u32, u32, u32)> call_007795ec;  // (from the original)

u32 f_002520fc(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r12 = guest::cpu()->r[12];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r11_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r2_2 = 0;
    u32 r0_7 = 0;
    u32 r7_1 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r2_3 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r12);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r6 = 0u;
    r5 = r0;
    r8 = 1u;
    r4 = r6;
    r10 = 0x846bcbu;  // (from the original)
L_252114:;
    guest::cpu()->r[13] = r13;
    r0_1 = call_00300904(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_1 == 0) {
        goto L_2521bc;
    }
    r7 = 0u;
    r9 = r5 + (r4 + (r4 << 1) << 1);
    r6 = r7;
    r0_2 = r9 + 0xe4u;  // (from the original)
    res_1 = u32(*gptr<u8>(r9 + 0xe9u)) << 0x19;  // (from the original)
    r1 = res_1;
    if (res_1 >> 0x1f) {  // (from the original)
        goto L_252178;
    }
    r2_1 = u32(*gptr<u8>(r0_2 + 4u));
    r0_3 = u32(*gptr<u8>(r0_2 + 3u)) >> 7;
    r1_1 = r2_1 & 3u;
    r11_1 = r0_3 + (r1_1 << 1);
    if (r11_1 == 4u) {
        goto L_2521a4;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_00305f44(r0_3, r1_1, r2_1, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r11_1 != r0_4) {
        goto L_252178;
    }
L_252174:;
    r7 = 1u;
L_252178:;
    if ((r7 ^ 1u) == 0) {
        goto L_2521bc;
    }
    r0_5 = u32(*gptr<u8>(r10 + r4));
    guest::cpu()->r[13] = r13;
    r0_6 = call_006268f8(r0_5, r1, r2, guest::cpu()->r[3]);
    r2_2 = r9 + 0xe4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_007795ec(r2_2, r0_6, r2_2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r8 = 0u;
    goto L_252210;
L_2521a4:;
    guest::cpu()->r[13] = r13;
    r0_7 = call_0061a7a0(r0_3, r1_1, r2_1, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_7 == 0) {
        r6 = 1u;
        guest::preempt();
        goto L_252178;
    }
    guest::preempt();
    goto L_252174;
L_2521bc:;
    if (r8 == 0) {
        goto L_252210;
    }
    r7_1 = r5 + (r4 + (r4 << 1) << 1);
    r2 = u32(*gptr<u8>(r7_1 + 0xe8u));  // (from the original)
    r1 = r2 & 3u;
    if ((u32(*gptr<u8>(r7_1 + 0xe7u)) >> 7) + (r1 << 1) != 4u) {  // (from the original)
        goto L_252210;
    }
    if (u32(*gptr<u8>(r5 + r4 + 0x114u)) == 0) {  // (from the original)
        goto L_252210;
    }
    r0_8 = u32(*gptr<u8>(r10 + r4));
    guest::cpu()->r[13] = r13;
    r0_9 = call_006268f8(r0_8, r1, r2, guest::cpu()->r[3]);
    r2_3 = r7_1 + 0xe4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_007795ec(r2_3, r0_9, r2_3, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
L_252210:;
    r0 = r5 + r4;
    r4 = r4 + 1u;
    *gptr<u8>(r0 + 0x114u) = u8(r6);  // (from the original)
    if (r4 < 8u) {
        guest::preempt();
        goto L_252114;
    }
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002520fc
GUEST_EXPORT(0x002520fc, d_002520fc::f_002520fc);

// f_0025244c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0025244c {

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> call_00305f2c;  // (from the original)
inline constexpr guest::Function<0x00615934, u32(u32, u32, u32, u32)> call_00615934;  // (from the original)
inline constexpr guest::Function<0x00615bcc, u32(u32, u32, u32, u32)> call_00615bcc;  // (from the original)
inline constexpr guest::Function<0x00616058, u32(u32, u32, u32, u32)> call_00616058;  // (from the original)
inline constexpr guest::Function<0x006166dc, u32(u32, u32, u32, u32)> call_006166dc;  // (from the original)
inline constexpr guest::Function<0x00616c68, u32(u32, u32, u32, u32)> call_00616c68;  // (from the original)
inline constexpr guest::Function<0x007701f8, u32(u32, u32, u32, u32)> call_007701f8;  // (from the original)

u32 f_0025244c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 zf_1 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r3_5 = 0;
    u32 r0_8 = 0;
    u32 r2_4 = 0;
    u32 r0_9 = 0;
    u32 r2_5 = 0;
    u32 r3_6 = 0;
    u32 r0_10 = 0;
    u32 r2_6 = 0;
    u32 r1_4 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 zf_2 = 0;
    u32 r0_13 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r1_5 = 0;
    u32 r0_14 = 0;
    u32 r2_8 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r1_6 = 0;
    u32 r0_17 = 0;
    u32 zf_3 = 0;
    u32 r3_8 = 0;
    u32 r1_7 = 0;
    u32 r0_18 = 0;
    u32 r2_9 = 0;
    r13 = r13 - 0x48u;  // (from the original)
    r8 = r1;
    guest::cpu()->r[13] = r13;
    r0_1 = call_00305f2c(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 != 3u) {
        goto L_25268c;
    }
    r6 = 0u;
    *gptr<u32>(r13 + 0x1cu) = u32(0x27u);  // (from the original)
    r1_2 = r13 + 0x1cu;  // (from the original)
    r0_2 = r13 + 0x14u;  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r6);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00616c68(r0_2, r1_2, r8, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_3 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    zf_1 = r0_3 == 0x27u;  // (from the original)
    if (!zf_1) {
        zf_1 = r0_3 == 0x28u;  // (from the original)
    }
    if (!zf_1) {
        goto L_25268c;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_002fb94c(r0_3, r1_1, r2_1, r3_2);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        goto L_252690;
    }
    *gptr<u32>(r13 + 0x10u) = u32(r0_4 + 0x6c20u);  // (from the original)
    r0_5 = u32(*gptr<u8>(0x86a2c8u + (r8 + (r8 << 1) + (r8 << 4) << 2) + 0x18u));  // (from the original)
    if (r0_5 >= 5u) {
        r7 = 0u;
    } else {
        r7 = 1u;
    }
    guest::cpu()->r[13] = r13;
    r0_6 = call_002fb378(r0_5, 0x86a2c8u, r2_2, r3_3);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_7 = call_00615934(r0_6, r1_3, r2_3, r3_4);
    r3_5 = guest::cpu()->r[3];
    if (*gptr<u32>(r13 + 0x1cu) == 0x28u) {  // (from the original)
        r0_8 = r0 + 0x12f8u;  // (from the original)
        goto L_252508;
    }
    if (r7 == 0) {
        r0_8 = r0 + 0x12f7u;  // (from the original)
    } else {
        r0_8 = r0 + 0x12f6u;  // (from the original)
    }
L_252508:;
    r2_4 = u32(*gptr<u8>(r0_8));
    r10 = r0 + 0x12f9u;  // (from the original)
    r11 = r0 + 0x12fcu;  // (from the original)
    r9 = r0 + 0x12ffu;  // (from the original)
    if (r2_4 == r0_7) {
        goto L_252644;
    }
    *gptr<u8>(r0_8) = u8(r0_7);
    if (*gptr<u32>(r13 + 0x1cu) == 0x27u) {  // (from the original)
        goto L_2525a4;
    }
    guest::cpu()->r[13] = r13;
    r0_9 = call_00616058(r0_6, r0_7, r2_4, r3_5);
    r2_5 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_006166dc(r9, r0_9, r2_5, r3_6);
    r3 = guest::cpu()->r[3];
    r5 = r9;
L_252554:;
    r0_10 = r6;
    r6 = 0u;
    *gptr<u32>(r13 + 0x18u) = u32(r0_10);  // (from the original)
    r4 = r6;
    *gptr<u32>(r13) = u32(0x27u);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r0_10);
    *gptr<u32>(r13 + 8u) = u32(r0_10);
    *gptr<u32>(r13 + 0xcu) = u32(r0_10);  // (from the original)
L_252578:;
    r2_6 = u32(*gptr<u8>(r5 + r4));
    if (r2_6 >= 0x6bu) {  // (from the original)
        goto L_252638;
    }
    r1_4 = r13;
    r0_11 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00616c68(r0_11, r1_4, r2_6, r3);
    r3 = guest::cpu()->r[3];
    r0_12 = *gptr<u32>(r13);
    zf_2 = r0_12 == 0x27u;  // (from the original)
    if (!zf_2) {
        zf_2 = r0_12 == 0x28u;  // (from the original)
    }
    if (!zf_2) {
        goto L_252638;
    }
    goto L_2525d4;
L_2525a4:;
    guest::cpu()->r[13] = r13;
    r0_13 = call_00615bcc(r7, r0_6, r2_4, r3_5);
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r7 == 0) {
        r5 = r11;
    } else {
        r5 = r10;
    }
    guest::cpu()->r[13] = r13;
    call_006166dc(r5, r0_13, r2_7, r3_7);
    r3 = guest::cpu()->r[3];
    guest::preempt();
    goto L_252554;
L_2525d4:;
    r1_5 = r0_12 & 0xffu;  // (from the original)
    r0_14 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    r2_8 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_15 = call_007701f8(r0_14, r1_5, r2_8, r3);
    r3 = guest::cpu()->r[3];
    if (r0_15 == 0) {
        goto L_252638;
    }
    r6 = r6 + 1u;
    *gptr<u32>(r13 + 4u + (r4 << 2)) = u32(1u);
    if (r4 != 2u) {
        goto L_252638;
    }
    r0_16 = 0u;
    if (r6 == 1u) {
        goto L_252628;
    }
    if (r6 != 2u) {
        goto L_252628;
    }
    r0_16 = *gptr<u32>(r13 + 4u);
    if (r0_16 != 0) {
        r0_16 = 1u;
    }
L_252628:;
    r1_6 = u32(*gptr<u8>(r5 + r0_16));
    *gptr<u8>(r5 + r0_16) = u8(u32(*gptr<u8>(r5 + 2u)));
    *gptr<u8>(r5 + 2u) = u8(r1_6);
L_252638:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(3u)) {
        guest::preempt();
        goto L_252578;
    }
L_252644:;
    r0_17 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    if (r0_17 != 0x28u) {  // (from the original)
        if (r7 == 0) {
            r9 = r11;
        } else {
            r9 = r10;
        }
    }
    r1_1 = u32(*gptr<u8>(r9));
    zf_3 = r1_1 == r8;
    if (!zf_3) {
        r1_1 = u32(*gptr<u8>(r9 + 1u));
        zf_3 = r1_1 == r8;
    }
    if (zf_3) {
        goto L_25268c;
    }
    r3_8 = r13 + 0x10u;  // (from the original)
    r1_7 = r0_17 & 0xffu;  // (from the original)
    r0_18 = *gptr<u32>(r3_8);
    r2_9 = *gptr<u32>(r3_8 + 4);
    guest::cpu()->r[13] = r13;
    r0_4 = call_007701f8(r0_18, r1_7, r2_9, r3_8);
    r1_1 = guest::cpu()->r[1];
    if (r0_4 == 0) {
        goto L_252690;
    }
L_25268c:;
    r0_4 = 1u;
L_252690:;
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_4;
}

}  // namespace d_0025244c
GUEST_EXPORT(0x0025244c, d_0025244c::f_0025244c);

// f_00252850: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00252850 {

struct __attribute__((packed)) Object_00252850_0 {
    u8 unknown_0[0x11d1];  // (not used here)
    u8 byte_11d1;
};
GUEST_OFFSET(Object_00252850_0, byte_11d1, 0x11d1);  // (from the original)


u32 f_00252850(gptr<Object_00252850_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    r1_1 = r0 + 0x1000u;  // (from the original)
    arg0->byte_11d1 = u8(3u);
    guest::cpu()->r[1] = r1_1;
    return 3u;
}

}  // namespace d_00252850
GUEST_EXPORT(0x00252850, d_00252850::f_00252850);

// f_0025286c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0025286c {

inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x0061a7a0, u32(u32, u32, u32, u32)> call_0061a7a0;  // (from the original)

u32 f_0025286c(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r6_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r7_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r6_1 = r1;
    r5 = r2;
    r0_1 = call_00300904(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        goto L_2528e0;
    }
    r0_2 = r0 + (r6_1 + (r6_1 << 1) << 1) + 0xe4u;  // (from the original)
    r4 = 0u;
    r6 = r4;
    res_1 = u32(*gptr<u8>(r0_2 + 5u)) << 0x19;  // (from the original)
    r1 = res_1;
    if (res_1 >> 0x1f) {  // (from the original)
        goto L_2528d4;
    }
    r2_1 = u32(*gptr<u8>(r0_2 + 4u));
    r0_3 = u32(*gptr<u8>(r0_2 + 3u)) >> 7;
    r1_1 = r2_1 & 3u;
    r7_1 = r0_3 + (r1_1 << 1);
    if (r7_1 == 4u) {
        goto L_2528e4;
    }
    r0_4 = call_00305f44(r0_3, r1_1, r2_1, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r7_1 != r0_4) {
        goto L_2528d4;
    }
L_2528d0:;
    r4 = 1u;
L_2528d4:;
    r0_1 = r4 ^ 1u;
    if (r5 != 0) {
        *gptr<u8>(r5) = u8(r6);
    }
L_2528e0:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
L_2528e4:;
    r0_5 = call_0061a7a0(r0_3, r1_1, r2_1, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_5 == 0) {
        r6 = 1u;
        guest::preempt();
        goto L_2528d4;
    }
    guest::preempt();
    goto L_2528d0;
}

}  // namespace d_0025286c
GUEST_EXPORT(0x0025286c, d_0025286c::f_0025286c);

// f_00253bc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00253bc4 {

inline guest::global<u32, 0x0094f268> global_0094f268;  // (from the original)

u32 f_00253bc4() {
    u32 r0_1 = 0;
    r0_1 = *global_0094f268;
    if (r0_1 != 0) {
        r0_1 = u32(*gptr<u8>(r0_1 + 0x118au));  // (from the original)
    }
    return r0_1;
}

}  // namespace d_00253bc4
GUEST_EXPORT(0x00253bc4, d_00253bc4::f_00253bc4);

// f_002549b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002549b4 {

struct __attribute__((packed)) Object_002549b4_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_002549b4_1, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_002549b4_2 {
    u32 word_0;
};
GUEST_OFFSET(Object_002549b4_2, word_0, 0x0);  // (from the original)


u32 f_002549b4(u32 r0, gptr<Object_002549b4_1> arg1, gptr<Object_002549b4_2> arg2, u32 r3) {
    u32 r0_1 = 0;
    if (r3 >= 0xfu) {  // (from the original)
        return 0u;
    }
    r0_1 = r0 + ((r3 << 4) - r3 << 4);
    if (u32(*gptr<u8>(r0_1 + 0x3fau)) == 0) {  // (from the original)
        return 0u;
    }
    arg1->word_0 = u32(u32(*gptr<u8>(r0_1 + 0x3fbu)));  // (from the original)
    arg2->word_0 = u32(u32(*gptr<u8>(r0_1 + 0x3fcu)));  // (from the original)
    return 1u;
}

}  // namespace d_002549b4
GUEST_EXPORT(0x002549b4, d_002549b4::f_002549b4);

// f_002549f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002549f0 {

inline constexpr guest::Function<0x0056cce4, u32(u32, u32, u32, u32)> call_0056cce4;  // (from the original)
inline constexpr guest::Function<0x00615bcc, u32(u32, u32, u32, u32)> call_00615bcc;  // (from the original)
inline constexpr guest::Function<0x00616058, u32(u32, u32, u32, u32)> call_00616058;  // (from the original)
inline constexpr guest::Function<0x0062f04c, u32(u32, u32, u32, u32)> call_0062f04c;  // (from the original)

u32 f_002549f0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r1_4 = 0;
    u32 r0_2 = 0;
    u32 r2_3 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 zf_1 = 0;
    u32 zf_2 = 0;
    r13 = r13 - 0x30u;  // (from the original)
    r6 = r0;
    r7 = r1;
    r10 = 0x846bc8u;  // (from the original)
    r5 = *gptr<u32>(r13 + 0x30u);  // (from the original)
    r9 = r2;
    r8 = r3;
    r4 = 0u;
L_254a14:;
    r1_1 = *gptr<u32>(r5 + 4);
    r2_1 = *gptr<u32>(r5 + 8);
    *gptr<u32>(r13) = u32(*gptr<u32>(r5));
    *gptr<u32>(r13 + 4) = u32(r1_1);
    *gptr<u32>(r13 + 8) = u32(r2_1);
    r0_1 = r13;
    r1_2 = u32(s32(s8(*gptr<u8>(r10 + r4))));
    guest::cpu()->r[13] = r13;
    call_0056cce4(r0_1, r1_2, r2_1, r3);
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r7 != 0) {
        r1_4 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_00615bcc(r9, r1_4, r2_2, r3_1);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        goto L_254a54;
    }
    r0_2 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00616058(r0_2, r1_3, r2_2, r3_1);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
L_254a54:;
    r2_3 = u32(*gptr<u8>(r0));
    if (r2_3 == r6) {
        r0_3 = 1u;
    } else {
        r1 = u32(*gptr<u16>(r0 + 2u));
        if (r1 != 0x64u) {  // (from the original)
            r0 = r0 + 4u;
            guest::preempt();
            goto L_254a54;
        }
        r0_3 = 0u;
    }
    if ((r0_3 & r8) != 0) {
        r0_4 = r13;
        guest::cpu()->r[13] = r13;
        r0_5 = call_0062f04c(r0_4, r1, r2_3, r3);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        zf_1 = r0_5 == 3u;
        if (!zf_1) {
            zf_1 = r0_5 == 4u;
        }
        if (zf_1) {
            goto L_254ab0;
        }
        zf_2 = r0_5 == 5u;
        if (!zf_2) {
            zf_2 = r0_5 == 6u;
        }
        if (zf_2) {
            goto L_254ab0;
        }
        goto L_254abc;
    }
    if (r0_3 == 0) {
        goto L_254abc;
    }
L_254ab0:;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 1u;
L_254abc:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(3u)) {
        guest::preempt();
        goto L_254a14;
    }
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_002549f0
GUEST_EXPORT(0x002549f0, d_002549f0::f_002549f0);

// f_0025591c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0025591c {

inline constexpr guest::Function<0x0025577c, u32(u32, u32, u32, u32)> call_0025577c;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002ffad8, u32(u32, u32, u32, u32)> call_002ffad8;  // (from the original)

u32 f_0025591c(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002fcb34(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0x27u) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        return 0u;
    }
    r0_2 = call_002ffad8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    r0_3 = r0_2 & 0xffu;  // (from the original)
    return call_0025577c(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0025591c
GUEST_EXPORT(0x0025591c, d_0025591c::f_0025591c);

// f_0025594c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0025594c {


u32 f_0025594c(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    r1_1 = r1 + (r1 << 1);
    r0_1 = *gptr<u32>(r0 + (r1_1 << 3) + 0x24u);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0025594c
GUEST_EXPORT(0x0025594c, d_0025594c::f_0025594c);

// f_00255dfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00255dfc {

inline guest::global<u32, 0x0094f4f0> global_0094f4f0;  // (from the original)
inline constexpr guest::Function<0x00255f1c, u32(u32, u32, u32, u32)> call_00255f1c;  // (from the original)

u32 f_00255dfc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r12_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r12_1 = *global_0094f4f0;
    if (r12_1 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = 0x94f4f0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    *gptr<u32>(r13) = u32(r2);
    r0_1 = r12_1 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_00255f1c(r0_1, r0, r1, 1u);
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_00255dfc
GUEST_EXPORT(0x00255dfc, d_00255dfc::f_00255dfc);

// f_00255e38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00255e38 {

inline guest::global<u32, 0x0094f4f0> global_0094f4f0;  // (from the original)
inline constexpr guest::Function<0x00255f1c, u32(u32, u32, u32, u32)> call_00255f1c;  // (from the original)

u32 f_00255e38(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r12_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    r12_1 = *global_0094f4f0;
    if (r12_1 == 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    *gptr<u32>(r13) = u32(r1);
    r0_1 = r12_1 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_00255f1c(r0_1, r0, 0u, 1u);
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_00255e38
GUEST_EXPORT(0x00255e38, d_00255e38::f_00255e38);

// f_00255ebc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00255ebc {

inline constexpr guest::Function<0x006dc248, u32(u32, u32, u32, u32)> call_006dc248;  // (from the original)

u32 f_00255ebc(u32 r0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r4_1 = r0;
    *gptr<u32>(r13) = u32(r13 + 8u);
    r3_1 = r13 + 0x14u;  // (from the original)
    r2_1 = r13 + 0x10u;  // (from the original)
    r1_1 = r13 + 0xcu;  // (from the original)
    r0_1 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_006dc248(r0_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    if (*gptr<u32>(r13 + 4u) >> 0x1f != 0u) {  // (from the original)
        r4_1 = 0u;
    }
    if (u32(*gptr<u8>(r13 + 8u)) != 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return 0x50u;  // (from the original)
    }
    if (r4_1 == 0) {
        r0_3 = 0x4au;  // (from the original)
    } else {
        r0_3 = 0x56u;  // (from the original)
    }
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_00255ebc
GUEST_EXPORT(0x00255ebc, d_00255ebc::f_00255ebc);

// f_00255f1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00255f1c {

struct __attribute__((packed)) Object_00255f1c_0 {
    u8 unknown_0[0xec];  // (not used here)
    u8 byte_ec;
    u8 unknown_ed[0x17];  // (not used here)
    u8 byte_104;
    u8 byte_105;
};
GUEST_OFFSET(Object_00255f1c_0, byte_ec, 0xec);  // (from the original)
GUEST_OFFSET(Object_00255f1c_0, byte_104, 0x104);  // (from the original)
GUEST_OFFSET(Object_00255f1c_0, byte_105, 0x105);  // (from the original)

inline constexpr guest::Function<0x002d5bc8, u32(u32, u32, u32, u32)> call_002d5bc8;  // (from the original)
inline constexpr guest::Function<0x006dc248, u32(u32, u32, u32, u32)> call_006dc248;  // (from the original)

u32 f_00255f1c(gptr<Object_00255f1c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r5_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r1_1 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    if (u32(arg0->byte_ec) != 0) {
        r0_1 = 0u;
        goto L_256014;
    }
    arg0->byte_105 = u8(0u);
    r5_1 = r0 + 0x100u;  // (from the original)
    r0_2 = r0 + 0xcu;  // (from the original)
    arg0->byte_104 = u8(0u);
    guest::cpu()->r[13] = r13;
    call_002d5bc8(r0_2, r1_1, r2, r3);
    r3_1 = r0 + 0xfcu;  // (from the original)
    r2_1 = r0 + 0x100u;  // (from the original)
    *gptr<u32>(r0) = u32(*gptr<u32>(r1));
    r1_2 = r0 + 0xf8u;  // (from the original)
    *gptr<u32>(r0 + 4u) = u32(*gptr<u32>(r1 + 4u));
    *gptr<u32>(r0 + 8u) = u32(*gptr<u32>(r1 + 8u));
    *gptr<u32>(r13) = u32(r13 + 4u);
    r0_3 = r0 + 0xf4u;  // (from the original)
    *gptr<u8>(r13 + 4u) = u8(0u);
    guest::cpu()->r[13] = r13;
    r0_4 = call_006dc248(r0_3, r1_2, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    if (r0_4 != 0) {
        r1_3 = *gptr<u32>(r0 + 0xf4u);  // (from the original)
        *gptr<u8>(r0 + 0xecu) = u8(1u);  // (from the original)
        if (r1_3 >> 0x1f != 0u) {  // (from the original)
            *gptr<u8>(r0 + 0x104u) = u8(0u);  // (from the original)
        }
        r1_1 = u32(*gptr<u8>(r13 + 4u));
        if (r1_1 == 0) {
            goto L_255fe0;
        }
        *gptr<u8>(r0 + 0x104u) = u8(0u);  // (from the original)
        *gptr<u8>(r0 + 0x106u) = u8(1u);  // (from the original)
        *gptr<u32>(r0 + 0xf0u) = u32(0u);  // (from the original)
        *gptr<u8>(r0 + 0x105u) = u8(r3);  // (from the original)
    }
    if (u32(*gptr<u8>(r5_1 + 4u)) != 0) {
        goto L_256010;
    }
    goto L_256004;
L_255fe0:;
    *gptr<u8>(r0 + 0x104u) = u8(r2);  // (from the original)
    *gptr<u8>(r0 + 0x105u) = u8(r3);  // (from the original)
    *gptr<u8>(r0 + 0x106u) = u8(0u);  // (from the original)
    if (u32(*gptr<u8>(r5_1 + 4u)) == 0) {
        *gptr<u32>(r0 + 0xf0u) = u32(0xcu);  // (from the original)
    } else {
        *gptr<u32>(r0 + 0xf0u) = u32(0u);  // (from the original)
        goto L_256010;
    }
L_256004:;
    r0_1 = u32(*gptr<u8>(r5_1 + 5u));
    if (r0_1 == 0) {
        goto L_256014;
    }
L_256010:;
    r0_1 = 1u;
L_256014:;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_00255f1c
GUEST_EXPORT(0x00255f1c, d_00255f1c::f_00255f1c);

// f_0025654c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0025654c {

inline constexpr guest::Function<0x004ed3dc, u32(u32, u32, u32, u32)> call_004ed3dc;  // (from the original)
inline constexpr guest::Function<0x00521a2c, u32(u32, u32, u32, u32)> call_00521a2c;  // (from the original)

u32 f_0025654c(u32 r0) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0x5cu;  // (from the original)
    call_004ed3dc(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_00521a2c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return 2u;
}

}  // namespace d_0025654c
GUEST_EXPORT(0x0025654c, d_0025654c::f_0025654c);

// f_00256588: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00256588 {

inline guest::global<u32, 0x00847364> global_00847364;  // (from the original)
inline constexpr guest::Function<0x001c2764, u32(u32, u32, u32, u32)> call_001c2764;  // (from the original)
inline constexpr guest::Function<0x004ed3fc, u32(u32, u32, u32, u32)> call_004ed3fc;  // (from the original)

u32 f_00256588(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3, float S4, float S5, float S6, float S7) {
    u32 r0_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S4_1 = 0;
    float S5_1 = 0;
    float S6_1 = 0;
    float S7_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_1 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    float S3_2 = 0;
    float S4_2 = 0;
    float S5_2 = 0;
    float S6_2 = 0;
    float S7_2 = 0;
    u32 r1_1 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    float S2_3 = 0;
    float S3_3 = 0;
    float S4_3 = 0;
    float S5_3 = 0;
    float S6_3 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0_1 = call_001c2764(r0, r1, r2, r3);
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    S2_1 = guest::cpu()->s[2];
    S3_1 = guest::cpu()->s[3];
    S4_1 = guest::cpu()->s[4];
    S5_1 = guest::cpu()->s[5];
    S6_1 = guest::cpu()->s[6];
    S7_1 = guest::cpu()->s[7];
    *gptr<u32>(r0_1) = u32(0x8eeca4u);  // (from the original)
    *gptr<u32>(r0_1 + 0x18u) = u32(0x8fa388u);  // (from the original)
    *gptr<u8>(r0_1 + 0x58u) = u8(1u);  // (from the original)
    *gptr<u8>(r0_1 + 0x59u) = u8(0u);  // (from the original)
    *gptr<u16>(r0_1 + 0x1cu) = u16(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0x1eu) = u8(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0x1fu) = u8(0u);  // (from the original)
    *gptr<u16>(r0_1 + 0x50u) = u16(0u);  // (from the original)
    *gptr<u16>(r0_1 + 0x52u) = u16(0u);  // (from the original)
    r0_2 = r0_1 + 0x5cu;  // (from the original)
    *gptr<u32>(r0_1 + 0x54u) = u32(0u);  // (from the original)
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    guest::cpu()->s[6] = S6_1;
    guest::cpu()->s[7] = S7_1;
    r0_3 = call_004ed3fc(r0_2, r0_1, 0u, 0x8fa388u);  // (from the original)
    *gptr<u32>(r0_3) = u32(0x902a8cu);  // (from the original)
    r0_4 = r0_3 - 0x5cu;  // (from the original)
    r2_1 = r0_4 + 0x184u;  // (from the original)
    S0_2 = std::bit_cast<float>(*global_00847364);
    S1_2 = std::bit_cast<float>(*gptr<u32>(0x847364u + 4));  // (from the original)
    S2_2 = std::bit_cast<float>(*gptr<u32>(0x847364u + 8));  // (from the original)
    S3_2 = std::bit_cast<float>(*gptr<u32>(0x847364u + 0xc));  // (from the original)
    S4_2 = std::bit_cast<float>(*gptr<u32>(0x847364u + 0x10));  // (from the original)
    S5_2 = std::bit_cast<float>(*gptr<u32>(0x847364u + 0x14));  // (from the original)
    S6_2 = std::bit_cast<float>(*gptr<u32>(0x847364u + 0x18));  // (from the original)
    S7_2 = std::bit_cast<float>(*gptr<u32>(0x847364u + 0x1c));  // (from the original)
    r1_1 = 0x847364u + 0x20u;  // (from the original)
    *gptr<u32>(r2_1) = u32(std::bit_cast<u32>(S0_2));
    *gptr<u32>(r2_1 + 4) = u32(std::bit_cast<u32>(S1_2));
    *gptr<u32>(r2_1 + 8) = u32(std::bit_cast<u32>(S2_2));
    *gptr<u32>(r2_1 + 0xc) = u32(std::bit_cast<u32>(S3_2));  // (from the original)
    *gptr<u32>(r2_1 + 0x10) = u32(std::bit_cast<u32>(S4_2));  // (from the original)
    *gptr<u32>(r2_1 + 0x14) = u32(std::bit_cast<u32>(S5_2));  // (from the original)
    *gptr<u32>(r2_1 + 0x18) = u32(std::bit_cast<u32>(S6_2));  // (from the original)
    *gptr<u32>(r2_1 + 0x1c) = u32(std::bit_cast<u32>(S7_2));  // (from the original)
    S0_3 = std::bit_cast<float>(*gptr<u32>(r1_1));
    S1_3 = std::bit_cast<float>(*gptr<u32>(r1_1 + 4));
    S2_3 = std::bit_cast<float>(*gptr<u32>(r1_1 + 8));
    S3_3 = std::bit_cast<float>(*gptr<u32>(r1_1 + 0xc));  // (from the original)
    S4_3 = std::bit_cast<float>(*gptr<u32>(r1_1 + 0x10));  // (from the original)
    S5_3 = std::bit_cast<float>(*gptr<u32>(r1_1 + 0x14));  // (from the original)
    S6_3 = std::bit_cast<float>(*gptr<u32>(r1_1 + 0x18));  // (from the original)
    r1_2 = r0_4 + 0x1a4u;  // (from the original)
    *gptr<u32>(r1_2) = u32(std::bit_cast<u32>(S0_3));
    *gptr<u32>(r1_2 + 4) = u32(std::bit_cast<u32>(S1_3));
    *gptr<u32>(r1_2 + 8) = u32(std::bit_cast<u32>(S2_3));
    *gptr<u32>(r1_2 + 0xc) = u32(std::bit_cast<u32>(S3_3));  // (from the original)
    *gptr<u32>(r1_2 + 0x10) = u32(std::bit_cast<u32>(S4_3));  // (from the original)
    *gptr<u32>(r1_2 + 0x14) = u32(std::bit_cast<u32>(S5_3));  // (from the original)
    *gptr<u32>(r1_2 + 0x18) = u32(std::bit_cast<u32>(S6_3));  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    return r0_4;
}

}  // namespace d_00256588
GUEST_EXPORT(0x00256588, d_00256588::f_00256588);

// f_00256664: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00256664 {

struct __attribute__((packed)) Object_00256664_0 {
    u8 unknown_0[0x2b4];  // (not used here)
    u32 word_2b4;
};
GUEST_OFFSET(Object_00256664_0, word_2b4, 0x2b4);  // (from the original)

inline guest::global<u32, 0x00256688> global_00256688;  // (from the original)

void f_00256664(gptr<Object_00256664_0> arg0, u32 r1, float S0_unused, float S1) {
    float S0_1 = 0;
    float S1_1 = 0;
    S0_1 = std::bit_cast<float>(*global_00256688);
    if (r1 == 0 || r1 >> 0x1f != (r1 & (r1 ^ r1)) >> 0x1f) {  // (from the original)
        arg0->word_2b4 = u32(std::bit_cast<u32>(S0_1));
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1;
        return;
    }
    S1_1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1))));
    arg0->word_2b4 = u32(std::bit_cast<u32>(S0_1 / S1_1));
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return;
}

}  // namespace d_00256664
GUEST_EXPORT(0x00256664, d_00256664::f_00256664);

// f_0025668c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0025668c {

struct __attribute__((packed)) Object_0025668c_0 {
    u8 unknown_0[0x2b0];  // (not used here)
    u32 word_2b0;
    u32 word_2b4;
    u32 word_2b8;
    u32 word_2bc;
};
GUEST_OFFSET(Object_0025668c_0, word_2b0, 0x2b0);  // (from the original)
GUEST_OFFSET(Object_0025668c_0, word_2b4, 0x2b4);  // (from the original)
GUEST_OFFSET(Object_0025668c_0, word_2b8, 0x2b8);  // (from the original)
GUEST_OFFSET(Object_0025668c_0, word_2bc, 0x2bc);  // (from the original)

inline guest::global<u32, 0x002566d8> global_002566d8;  // (from the original)
inline guest::global<u32, 0x002566dc> global_002566dc;  // (from the original)

void f_0025668c(gptr<Object_0025668c_0> arg0, u32 r1, u32 r2) {
    float S0_1 = 0;
    float S1_1 = 0;
    S0_1 = std::bit_cast<float>(*global_002566d8);
    if (r1 == 0 || r1 >> 0x1f != (r1 & (r1 ^ r1)) >> 0x1f) {  // (from the original)
        arg0->word_2b4 = u32(std::bit_cast<u32>(S0_1));
        goto L_2566ac;
    }
    arg0->word_2b4 = u32(std::bit_cast<u32>(S0_1 / float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1))))));
L_2566ac:;
    S1_1 = std::bit_cast<float>(*global_002566dc);
    arg0->word_2b0 = u32(std::bit_cast<u32>(S1_1));
    if (r2 == 0 || r2 >> 0x1f != (r2 & (r2 ^ r2)) >> 0x1f) {  // (from the original)
        arg0->word_2bc = u32(std::bit_cast<u32>(S0_1));
        arg0->word_2b8 = u32(std::bit_cast<u32>(S1_1));
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return;
    }
    arg0->word_2bc = u32(std::bit_cast<u32>(S0_1 / float(s32(std::bit_cast<u32>(std::bit_cast<float>(r2))))));
    arg0->word_2b8 = u32(std::bit_cast<u32>(S1_1));
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return;
}

}  // namespace d_0025668c
GUEST_EXPORT(0x0025668c, d_0025668c::f_0025668c);

// f_002566e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002566e0 {

inline guest::global<u32, 0x00256750> global_00256750;  // (from the original)
inline guest::global<u32, 0x0095bf68> global_0095bf68;  // (from the original)
inline constexpr guest::Function<0x001c244c, u32(u32, u32, u32, u32)> call_001c244c;  // (from the original)

u32 f_002566e0(u32 r0) {
    float S0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    float S0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    S0_1 = std::bit_cast<float>(*global_00256750);
    r1_1 = r0 + 0x1c0u;  // (from the original)
    r0_1 = u32(*gptr<u8>(*global_0095bf68 + 0x11eu));  // (from the original)
    r2_1 = r0 + ((r0_1 << 4) - r0_1 << 2) + 0x1fcu;  // (from the original)
    r0_2 = r0 + 0x184u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    call_001c244c(r0_2, r1_1, r2_1, guest::cpu()->r[3]);
    S0_2 = guest::cpu()->s[0];
    r0_3 = *global_0095bf68;
    r1_2 = u32(*gptr<u8>(r0_3 + 0x11eu));  // (from the original)
    r2_2 = r0 + ((r1_2 << 4) - r1_2 << 2) + 0x200u;  // (from the original)
    r1_3 = r0 + 0x100u;  // (from the original)
    *gptr<u16>(r1_3 + 0xb8u) = u16(u32(*gptr<u16>(r2_2 + 0x30u)));  // (from the original)
    r0_4 = u32(*gptr<u8>(r0_3 + 0x11eu));  // (from the original)
    r0_5 = u32(*gptr<u16>(r0 + ((r0_4 << 4) - r0_4 << 2) + 0x232u));  // (from the original)
    *gptr<u16>(r1_3 + 0xbau) = u16(r0_5);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->s[0] = S0_2;
    return r0_5;
}

}  // namespace d_002566e0
GUEST_EXPORT(0x002566e0, d_002566e0::f_002566e0);

// f_00257660: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00257660 {

inline guest::global<u32, 0x00aaf14c> global_00aaf14c;  // (from the original)
inline constexpr guest::Function<0x002b9aa4, u32(u32, u32, u32, u32)> call_002b9aa4;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x0056d5dc, u32(u32, u32, u32, u32)> call_0056d5dc;  // (from the original)
inline constexpr guest::Function<0x005d4a78, u32(u32, u32, u32, u32)> call_005d4a78;  // (from the original)
inline constexpr guest::Function<0x005e34c4, u32(u32, u32, u32, u32)> call_005e34c4;  // (from the original)
inline constexpr guest::Function<0x005e4988, u32(u32, u32, u32, u32)> call_005e4988;  // (from the original)
inline constexpr guest::Function<0x005e4994, u32(u32, u32, u32, u32)> call_005e4994;  // (from the original)
inline constexpr guest::Function<0x005e49c0, u32(u32, u32, u32, u32)> call_005e49c0;  // (from the original)
inline constexpr guest::Function<0x005e8498, u32(u32, u32, u32, u32)> call_005e8498;  // (from the original)
inline constexpr guest::Function<0x006d1e64, u32(u32, u32, u32, u32)> call_006d1e64;  // (from the original)
inline constexpr guest::Function<0x00712838, u32(u32, u32, u32, u32)> call_00712838;  // (from the original)
inline constexpr guest::Function<0x00712850, u32(u32, u32, u32, u32)> call_00712850;  // (from the original)
inline constexpr guest::Function<0x0071af38, u32(u32, u32, u32, u32)> call_0071af38;  // (from the original)

u32 f_00257660(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 zf_1 = 0;
    u32 r0_8 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r1_3 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r0_13 = 0;
    u32 r3_7 = 0;
    u32 r2_7 = 0;
    u32 r1_4 = 0;
    u32 r2_8 = 0;
    u32 r0_14 = 0;
    u32 r1_5 = 0;
    r13 = r13 - 0x120u;  // (from the original)
    r5_1 = *global_00aaf14c + 0x2cu;  // (from the original)
    r0_1 = r0 + 0x464u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_0071af38(r0_1, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r1_1 = r0_2 & 0xffu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_00712850(r5_1, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_4 = call_00712838(r5_1, r0_3, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_0056d5dc(r0_5, r0_4, r2_3, r3_3);
    r1_2 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_7 = call_006d1e64(r0_6, r1_2, r2_4, r3_4);
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r5 = r0 + 0x22b4u;  // (from the original)
    zf_1 = u32(*gptr<u8>(r0_7 + 0x40u)) == 0;  // (from the original)
    if (zf_1) {
        r0_8 = r5 + 0xdcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002b9aa4(r0_8, 1u, r2_5, r3_5);
        r2_6 = guest::cpu()->r[2];
        r3_6 = guest::cpu()->r[3];
        r1_3 = r13 + 0xcu;  // (from the original)
        *gptr<u8>(r0_8 + 0x4e2u) = u8(0u);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_005e8498(r5, r1_3, r2_6, r3_6);
    } else {
        r0_9 = r5 + 0xdcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002b9aa4(r0_9, 0u, r2_5, r3_5);
        *gptr<u8>(r0_9 + 0x4e2u) = u8(0u);  // (from the original)
    }
    r0_10 = r13 + 0xa8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00301d0c(r0_10, 0x5e35dcu, 0x20u, 3u);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(7u);
    r0_11 = r13 + 0xa8u;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4u) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_005e34c4(r0_11, 0x851ff0u, 0x34u, 0u);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(9u);
    r6 = r13 + 0xa8u;  // (from the original)
    r0_12 = r13 + 0xc8u;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(1u);
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_005e34c4(r0_12, 0x851ff0u, 0x33u, 0u);  // (from the original)
    ea_1 = r13;
    *gptr<u32>(ea_1) = u32(0u);
    ea_2 = r13 + 4u;
    *gptr<u32>(ea_2) = u32(2u);
    *gptr<u32>(ea_2 + 4) = u32(1u);
    r0_13 = r6 + 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e34c4(r0_13, 0x851ff0u, 0x22u, 0u);  // (from the original)
    r3_7 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_005e49c0(r5, 3u, 2u, r3_7);
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
L_2577a0:;
        r2_7 = r6 + (r4 << 5);
        guest::cpu()->r[13] = r13;
        call_005e4994(r5, r4, r2_7, r3);
        r1_4 = guest::cpu()->r[1];
        r2_8 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 3u);
    guest::cpu()->r[13] = r13;
    call_005e4988(r5, r1_4, r2_8, r3);
    guest::cpu()->r[13] = r13;
    call_005d4a78(r5, 0u, 0u, 0u);
    r0_14 = r13 + 0xa8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_14, 0x5e3618u, 0x20u, 3u);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 0x7cu) = u32(0x90a3e8u);  // (from the original)
    *gptr<u32>(r13 + 0x50u) = u32(0x90a3e8u);  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(0x909d20u);  // (from the original)
    r13 = r13 + 0x120u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_00257660
GUEST_EXPORT(0x00257660, d_00257660::f_00257660);

// f_00257ee4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00257ee4 {

inline guest::global<u32, 0x00851ff0> global_00851ff0;  // (from the original)
inline constexpr guest::Function<0x001ad2e4, u32(u32, u32, u32, u32)> call_001ad2e4;  // (from the original)
inline constexpr guest::Function<0x002b9aa4, u32(u32, u32, u32, u32)> call_002b9aa4;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x005b48b4, u32(u32, u32, u32, u32)> call_005b48b4;  // (from the original)
inline constexpr guest::Function<0x005d4a78, u32(u32, u32, u32, u32)> call_005d4a78;  // (from the original)
inline constexpr guest::Function<0x005e34c4, u32(u32, u32, u32, u32)> call_005e34c4;  // (from the original)
inline constexpr guest::Function<0x005e4988, u32(u32, u32, u32, u32)> call_005e4988;  // (from the original)
inline constexpr guest::Function<0x005e4994, u32(u32, u32, u32, u32)> call_005e4994;  // (from the original)
inline constexpr guest::Function<0x005e49c0, u32(u32, u32, u32, u32)> call_005e49c0;  // (from the original)
inline constexpr guest::Function<0x0070b0b8, u32(u32, u32, u32, u32)> call_0070b0b8;  // (from the original)
inline constexpr guest::Function<0x00769ff8, u32(u32, u32, u32, u32)> call_00769ff8;  // (from the original)

u32 f_00257ee4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r5_1 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r4_1 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r2_6 = 0;
    u32 r1_6 = 0;
    u32 r0_11 = 0;
    u32 r1_7 = 0;
    u32 r2_7 = 0;
    u32 r3_5 = 0;
    u32 r4_2 = 0;
    u32 r0_12 = 0;
    u32 r1_8 = 0;
    u32 r2_8 = 0;
    u32 r3_6 = 0;
    u32 r0_13 = 0;
    u32 r2_9 = 0;
    u32 r3_7 = 0;
    u32 r0_14 = 0;
    u32 r1_9 = 0;
    u32 r2_10 = 0;
    u32 r3_8 = 0;
    u32 r0_15 = 0;
    u32 r2_11 = 0;
    u32 r3_9 = 0;
    u32 r0_16 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r0_17 = 0;
    u32 r1_10 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 r0_18 = 0;
    u32 r1_11 = 0;
    u32 r3_10 = 0;
    u32 r1_12 = 0;
    u32 r2_12 = 0;
    u32 r2_13 = 0;
    u32 r0_19 = 0;
    u32 r1_13 = 0;
    r13 = r13 - 0x108u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb94c(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r1_1 = r0_1 + 0xau;  // (from the original)
    r0_2 = r13 + 0xe0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001ad2e4(r0_2, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_3 = r13 + 0xe0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_0070b0b8(r0_3, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_5 = call_00769ff8(r0_4, r1_3, r2_3, r3_3);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_6 = r0 + 0x2f18u;  // (from the original)
    r7 = r0_6;
    r0_7 = r0_6 + 0xdcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002b9aa4(r0_7, 0u, r2_4, r3_4);
    *gptr<u8>(r0_7 + 0x4e2u) = u8(0u);  // (from the original)
    r5_1 = r13 + 0xd0u;  // (from the original)
    r1_4 = *gptr<u32>(0x851ff0u + 4);  // (from the original)
    r2_5 = *gptr<u32>(0x851ff0u + 8);  // (from the original)
    r4_1 = 0u;
    *gptr<u32>(r5_1) = u32(*global_00851ff0);
    *gptr<u32>(r5_1 + 4) = u32(r1_4);
    *gptr<u32>(r5_1 + 8) = u32(r2_5);
    r0_8 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00301d0c(r0_8, 0x5e35dcu, 0x20u, 6u);  // (from the original)
    if (r0_5 == 0) {
        r1_5 = r13 + 0xd0u;  // (from the original)
        r0_9 = r13 + 0x10u;  // (from the original)
        *gptr<u32>(r13) = u32(0u);
        *gptr<u32>(r13 + 8u) = u32(7u);
        *gptr<u32>(r13 + 4u) = u32(0u);
        guest::cpu()->r[13] = r13;
        call_005e34c4(r0_9, r1_5, 0x13au, 0u);  // (from the original)
        r4_1 = 1u;
    }
    r6 = r13 + 0x10u;  // (from the original)
    r0_10 = r6 + (r4_1 << 5);
    r2_6 = 1u + 0x138u;  // (from the original)
    r1_6 = r13 + 0xd0u;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4) = u32(1u);
    *gptr<u32>(r13 + 8u) = u32(7u);
    guest::cpu()->r[13] = r13;
    r0_11 = call_005e34c4(r0_10, r1_6, r2_6, 0u);
    r1_7 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r4_2 = r4_1 + 1u;
    guest::cpu()->r[13] = r13;
    r0_12 = call_005b48b4(r0_11, r1_7, r2_7, r3_5);
    r1_8 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if (r0_12 != 0) {
        goto L_258000;
    }
    guest::cpu()->r[13] = r13;
    r0_13 = call_002f74c8(r0_12, r1_8, r2_8, r3_6);
    r2_9 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_14 = call_002f74e0(0x200u, r0_13, r2_9, r3_7);  // (from the original)
    r1_9 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    if (r0_14 != 0) {
        goto L_258000;
    }
    guest::cpu()->r[13] = r13;
    r0_15 = call_002f74c8(r0_14, r1_9, r2_10, r3_8);
    r2_11 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_16 = call_002f74e0(0x10000000u, r0_15, r2_11, r3_9);  // (from the original)
    if (r0_16 == 0) {
        goto L_258028;
    }
L_258000:;
    ea_1 = r13;
    *gptr<u32>(ea_1) = u32(0u);
    ea_2 = r13 + 4u;
    *gptr<u32>(ea_2) = u32(2u);
    *gptr<u32>(ea_2 + 4) = u32(7u);
    r0_17 = r6 + (r4_2 << 5);
    r1_10 = r13 + 0xd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e34c4(r0_17, r1_10, 0x13bu, 0u);  // (from the original)
    r4_2 = r4_2 + 1u;
L_258028:;
    ea_3 = r13;
    *gptr<u32>(ea_3) = u32(0u);
    ea_4 = r13 + 4u;
    *gptr<u32>(ea_4) = u32(3u);
    *gptr<u32>(ea_4 + 4) = u32(1u);
    r0_18 = r6 + (r4_2 << 5);
    r1_11 = r13 + 0xd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e34c4(r0_18, r1_11, 0x22u, 0u);  // (from the original)
    r3_10 = guest::cpu()->r[3];
    r5 = r4_2 + 1u;
    guest::cpu()->r[13] = r13;
    call_005e49c0(r7, r5, r4_2, r3_10);
    r1_12 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    if (r5 == 0 || r5 >> 0x1f != (r5 & (r5 ^ r5)) >> 0x1f) {  // (from the original)
        goto L_258088;
    }
    do {
L_25806c:;
        r2_13 = r6 + (r4 << 5);
        guest::cpu()->r[13] = r13;
        call_005e4994(r7, r4, r2_13, r3);
        r1_12 = guest::cpu()->r[1];
        r2_12 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r5) > s32(r4));
L_258088:;
    guest::cpu()->r[13] = r13;
    call_005e4988(r7, r1_12, r2_12, r3);
    guest::cpu()->r[13] = r13;
    call_005d4a78(r7, 0u, 0u, 0u);
    r0_19 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_19, 0x5e3618u, 0x20u, 6u);  // (from the original)
    r1_13 = guest::cpu()->r[1];
    r13 = r13 + 0x108u;  // (from the original)
    guest::cpu()->r[1] = r1_13;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_00257ee4
GUEST_EXPORT(0x00257ee4, d_00257ee4::f_00257ee4);

// f_00258c8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00258c8c {

inline guest::global<u32, 0x00851ff0> global_00851ff0;  // (from the original)
inline constexpr guest::Function<0x002b9aa4, u32(u32, u32, u32, u32)> call_002b9aa4;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x005d4a78, u32(u32, u32, u32, u32)> call_005d4a78;  // (from the original)
inline constexpr guest::Function<0x005e34c4, u32(u32, u32, u32, u32)> call_005e34c4;  // (from the original)
inline constexpr guest::Function<0x005e4988, u32(u32, u32, u32, u32)> call_005e4988;  // (from the original)
inline constexpr guest::Function<0x005e4994, u32(u32, u32, u32, u32)> call_005e4994;  // (from the original)
inline constexpr guest::Function<0x005e49c0, u32(u32, u32, u32, u32)> call_005e49c0;  // (from the original)

u32 f_00258c8c(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r4_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r0_6 = 0;
    u32 r2_3 = 0;
    u32 r1_4 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 r0_7 = 0;
    u32 r1_5 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    u32 r0_8 = 0;
    u32 r1_6 = 0;
    u32 r3_1 = 0;
    u32 r2_4 = 0;
    u32 r1_7 = 0;
    u32 r2_5 = 0;
    u32 r0_9 = 0;
    u32 r1_8 = 0;
    r0_1 = r0 + 0x2f18u;  // (from the original)
    r13 = r13 - 0xf8u;  // (from the original)
    r6 = r0_1;
    r0_2 = r0_1 + 0xdcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002b9aa4(r0_2, 0u, r2, r3);
    *gptr<u8>(r0_2 + 0x4e2u) = u8(0u);  // (from the original)
    r4_1 = r13 + 0xd0u;  // (from the original)
    r1_1 = *gptr<u32>(0x851ff0u + 4);  // (from the original)
    r2_1 = *gptr<u32>(0x851ff0u + 8);  // (from the original)
    *gptr<u32>(r4_1) = u32(*global_00851ff0);
    *gptr<u32>(r4_1 + 4) = u32(r1_1);
    *gptr<u32>(r4_1 + 8) = u32(r2_1);
    r0_3 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00301d0c(r0_3, 0x5e35dcu, 0x20u, 6u);  // (from the original)
    r2_2 = 7u + 0x13cu;  // (from the original)
    r1_2 = r13 + 0xd0u;  // (from the original)
    r0_4 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 8u) = u32(7u);
    *gptr<u32>(r13 + 4u) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_005e34c4(r0_4, r1_2, r2_2, 0u);
    *gptr<u32>(r13 + 8u) = u32(7u);
    r7 = r13 + 0x10u;  // (from the original)
    r0_5 = r13 + 0x30u;  // (from the original)
    r1_3 = r13 + 0xd0u;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4) = u32(1u);
    guest::cpu()->r[13] = r13;
    call_005e34c4(r0_5, r1_3, 0x144u, 0u);  // (from the original)
    ea_1 = r13;
    *gptr<u32>(ea_1) = u32(0u);
    ea_2 = r13 + 4u;
    *gptr<u32>(ea_2) = u32(2u);
    *gptr<u32>(ea_2 + 4) = u32(7u);
    r0_6 = r7 + 0x40u;  // (from the original)
    r2_3 = 1u + 0x144u;  // (from the original)
    r1_4 = r13 + 0xd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e34c4(r0_6, r1_4, r2_3, 0u);
    ea_3 = r13;
    *gptr<u32>(ea_3) = u32(0u);
    ea_4 = r13 + 4u;
    *gptr<u32>(ea_4) = u32(3u);
    *gptr<u32>(ea_4 + 4) = u32(7u);
    r0_7 = r7 + 0x60u;  // (from the original)
    r1_5 = r13 + 0xd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e34c4(r0_7, r1_5, 0x146u, 0u);  // (from the original)
    ea_5 = r13;
    *gptr<u32>(ea_5) = u32(0u);
    ea_6 = r13 + 4u;
    *gptr<u32>(ea_6) = u32(4u);
    *gptr<u32>(ea_6 + 4) = u32(1u);
    r0_8 = r7 + 0x80u;  // (from the original)
    r1_6 = r13 + 0xd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e34c4(r0_8, r1_6, 0x138u, 0u);  // (from the original)
    r3_1 = guest::cpu()->r[3];
    r5 = 5u;
    guest::cpu()->r[13] = r13;
    call_005e49c0(r6, r5, 4u, r3_1);
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
L_258da8:;
        r2_4 = r7 + (r4 << 5);
        guest::cpu()->r[13] = r13;
        call_005e4994(r6, r4, r2_4, r3);
        r1_7 = guest::cpu()->r[1];
        r2_5 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(r5));
    guest::cpu()->r[13] = r13;
    call_005e4988(r6, r1_7, r2_5, r3);
    guest::cpu()->r[13] = r13;
    call_005d4a78(r6, 0u, 0u, 0u);
    r0_9 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_9, 0x5e3618u, 0x20u, 6u);  // (from the original)
    r1_8 = guest::cpu()->r[1];
    r13 = r13 + 0xf8u;  // (from the original)
    guest::cpu()->r[1] = r1_8;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_00258c8c
GUEST_EXPORT(0x00258c8c, d_00258c8c::f_00258c8c);

// f_002599ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002599ec {

inline guest::global<u32, 0x00851d64> global_00851d64;  // (from the original)
inline constexpr guest::Function<0x005b43d4, u32(u32, u32, u32, u32)> call_005b43d4;  // (from the original)
inline constexpr guest::Function<0x005b4854, u32(u32, u32, u32, u32)> call_005b4854;  // (from the original)
inline constexpr guest::Function<0x008177a0, u32(u32, u32, u32, u32)> call_008177a0;  // (from the original)

u32 f_002599ec(u32 r0, u32 r1, u32 r2) {
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r4_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4_1 = 1u;
    r0_1 = call_005b4854(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_1 != 0) {
        goto L_259a40;
    }
    r0_2 = call_005b43d4(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r4_2 = r0 + 0x2000u;  // (from the original)
    if (r0_2 == 2u) {
        *gptr<u32>(r4_2 + 0x2b0u) = u32(r1);  // (from the original)
        goto L_259a2c;
    }
    r0_3 = call_005b43d4(r0_2, r1_2, r2_2, guest::cpu()->r[3]);
    if (r0_3 == 3u) {
        *gptr<u32>(r4_2 + 0x2b0u) = u32(r2);  // (from the original)
    }
L_259a2c:;
    r1_3 = *global_00851d64;
    r2_3 = *gptr<u32>(0x851d64u + 4);  // (from the original)
    r0_4 = r0 + 0xa4u;  // (from the original)
    call_008177a0(r0_4, r1_3, r2_3, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r4_1 = 0u;
L_259a40:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r4_1;
}

}  // namespace d_002599ec
GUEST_EXPORT(0x002599ec, d_002599ec::f_002599ec);

// f_00259dac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00259dac {

inline guest::global<u32, 0x00851ff0> global_00851ff0;  // (from the original)
inline constexpr guest::Function<0x002b9aa4, u32(u32, u32, u32, u32)> call_002b9aa4;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x005d4a78, u32(u32, u32, u32, u32)> call_005d4a78;  // (from the original)
inline constexpr guest::Function<0x005e34c4, u32(u32, u32, u32, u32)> call_005e34c4;  // (from the original)
inline constexpr guest::Function<0x005e4988, u32(u32, u32, u32, u32)> call_005e4988;  // (from the original)
inline constexpr guest::Function<0x005e4994, u32(u32, u32, u32, u32)> call_005e4994;  // (from the original)
inline constexpr guest::Function<0x005e49c0, u32(u32, u32, u32, u32)> call_005e49c0;  // (from the original)

u32 f_00259dac(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r4_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r2_2 = 0;
    u32 r1_3 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r0_6 = 0;
    u32 r2_3 = 0;
    u32 r1_4 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 r0_7 = 0;
    u32 r1_5 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    u32 r0_8 = 0;
    u32 r1_6 = 0;
    u32 r3_1 = 0;
    u32 r2_4 = 0;
    u32 r1_7 = 0;
    u32 r2_5 = 0;
    u32 r0_9 = 0;
    u32 r1_8 = 0;
    r0_1 = r0 + 0x2f18u;  // (from the original)
    r13 = r13 - 0xf8u;  // (from the original)
    r6 = r0_1;
    r0_2 = r0_1 + 0xdcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002b9aa4(r0_2, 0u, r2, r3);
    *gptr<u8>(r0_2 + 0x4e2u) = u8(0u);  // (from the original)
    r4_1 = r13 + 0xd0u;  // (from the original)
    r1_1 = *gptr<u32>(0x851ff0u + 4);  // (from the original)
    r2_1 = *gptr<u32>(0x851ff0u + 8);  // (from the original)
    *gptr<u32>(r4_1) = u32(*global_00851ff0);
    *gptr<u32>(r4_1 + 4) = u32(r1_1);
    *gptr<u32>(r4_1 + 8) = u32(r2_1);
    r0_3 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00301d0c(r0_3, 0x5e35dcu, 0x20u, 6u);  // (from the original)
    r1_2 = r13 + 0xd0u;  // (from the original)
    r0_4 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 8u) = u32(7u);
    *gptr<u32>(r13 + 4u) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_005e34c4(r0_4, r1_2, 0x13au, 0u);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(7u);
    r7 = r13 + 0x10u;  // (from the original)
    r0_5 = r13 + 0x30u;  // (from the original)
    r2_2 = 1u + 0x138u;  // (from the original)
    r1_3 = r13 + 0xd0u;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4) = u32(1u);
    guest::cpu()->r[13] = r13;
    call_005e34c4(r0_5, r1_3, r2_2, 0u);
    ea_1 = r13;
    *gptr<u32>(ea_1) = u32(0u);
    ea_2 = r13 + 4u;
    *gptr<u32>(ea_2) = u32(2u);
    *gptr<u32>(ea_2 + 4) = u32(7u);
    r0_6 = r7 + 0x40u;  // (from the original)
    r2_3 = 7u + 0x134u;  // (from the original)
    r1_4 = r13 + 0xd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e34c4(r0_6, r1_4, r2_3, 0u);
    ea_3 = r13;
    *gptr<u32>(ea_3) = u32(0u);
    ea_4 = r13 + 4u;
    *gptr<u32>(ea_4) = u32(3u);
    *gptr<u32>(ea_4 + 4) = u32(7u);
    r0_7 = r7 + 0x60u;  // (from the original)
    r1_5 = r13 + 0xd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e34c4(r0_7, r1_5, 0x13cu, 0u);  // (from the original)
    ea_5 = r13;
    *gptr<u32>(ea_5) = u32(0u);
    ea_6 = r13 + 4u;
    *gptr<u32>(ea_6) = u32(4u);
    *gptr<u32>(ea_6 + 4) = u32(1u);
    r0_8 = r7 + 0x80u;  // (from the original)
    r1_6 = r13 + 0xd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e34c4(r0_8, r1_6, 0x138u, 0u);  // (from the original)
    r3_1 = guest::cpu()->r[3];
    r5 = 5u;
    guest::cpu()->r[13] = r13;
    call_005e49c0(r6, r5, 4u, r3_1);
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
L_259ec8:;
        r2_4 = r7 + (r4 << 5);
        guest::cpu()->r[13] = r13;
        call_005e4994(r6, r4, r2_4, r3);
        r1_7 = guest::cpu()->r[1];
        r2_5 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(r5));
    guest::cpu()->r[13] = r13;
    call_005e4988(r6, r1_7, r2_5, r3);
    guest::cpu()->r[13] = r13;
    call_005d4a78(r6, 0u, 0u, 0u);
    r0_9 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_9, 0x5e3618u, 0x20u, 6u);  // (from the original)
    r1_8 = guest::cpu()->r[1];
    r13 = r13 + 0xf8u;  // (from the original)
    guest::cpu()->r[1] = r1_8;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_00259dac
GUEST_EXPORT(0x00259dac, d_00259dac::f_00259dac);

// f_00259f30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00259f30 {

inline guest::global<u32, 0x00851ff0> global_00851ff0;  // (from the original)
inline constexpr guest::Function<0x002b9aa4, u32(u32, u32, u32, u32)> call_002b9aa4;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x005d4a78, u32(u32, u32, u32, u32)> call_005d4a78;  // (from the original)
inline constexpr guest::Function<0x005e34c4, u32(u32, u32, u32, u32)> call_005e34c4;  // (from the original)
inline constexpr guest::Function<0x005e4988, u32(u32, u32, u32, u32)> call_005e4988;  // (from the original)
inline constexpr guest::Function<0x005e4994, u32(u32, u32, u32, u32)> call_005e4994;  // (from the original)
inline constexpr guest::Function<0x005e49c0, u32(u32, u32, u32, u32)> call_005e49c0;  // (from the original)

u32 f_00259f30(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r4_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r4_2 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r3_1 = 0;
    u32 r2_2 = 0;
    u32 r1_5 = 0;
    u32 r2_3 = 0;
    u32 r0_7 = 0;
    u32 r1_6 = 0;
    r0_1 = r0 + 0x2f18u;  // (from the original)
    r13 = r13 - 0xf0u;  // (from the original)
    r6 = r0_1;
    r0_2 = r0_1 + 0xdcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002b9aa4(r0_2, 0u, r2, r3);
    *gptr<u8>(r0_2 + 0x4e2u) = u8(0u);  // (from the original)
    r4_1 = r13 + 0xd0u;  // (from the original)
    r1_1 = *gptr<u32>(0x851ff0u + 4);  // (from the original)
    r2_1 = *gptr<u32>(0x851ff0u + 8);  // (from the original)
    *gptr<u32>(r4_1) = u32(*global_00851ff0);
    *gptr<u32>(r4_1 + 4) = u32(r1_1);
    *gptr<u32>(r4_1 + 8) = u32(r2_1);
    r0_3 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00301d0c(r0_3, 0x5e35dcu, 0x20u, 6u);  // (from the original)
    r4_2 = r13 + 4u;
    *gptr<u32>(r13) = u32(0u);
    r1_2 = r13 + 0xd0u;  // (from the original)
    r0_4 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r4_2) = u32(0u);
    *gptr<u32>(r4_2 + 4) = u32(7u);
    guest::cpu()->r[13] = r13;
    call_005e34c4(r0_4, r1_2, 0x13au, 0u);  // (from the original)
    ea_1 = r13;
    *gptr<u32>(ea_1) = u32(0u);
    ea_2 = r13 + 4u;
    *gptr<u32>(ea_2) = u32(1u);
    *gptr<u32>(ea_2 + 4) = u32(7u);
    r7 = r13 + 0x10u;  // (from the original)
    r0_5 = r13 + 0x30u;  // (from the original)
    r1_3 = r13 + 0xd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e34c4(r0_5, r1_3, 0x157u, 0u);  // (from the original)
    ea_3 = r13;
    *gptr<u32>(ea_3) = u32(0u);
    ea_4 = r13 + 4u;
    *gptr<u32>(ea_4) = u32(2u);
    *gptr<u32>(ea_4 + 4) = u32(1u);
    r0_6 = r7 + 0x40u;  // (from the original)
    r1_4 = r13 + 0xd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e34c4(r0_6, r1_4, 0x138u, 0u);  // (from the original)
    r3_1 = guest::cpu()->r[3];
    r5 = 3u;
    guest::cpu()->r[13] = r13;
    call_005e49c0(r6, r5, 2u, r3_1);
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
L_25a008:;
        r2_2 = r7 + (r4 << 5);
        guest::cpu()->r[13] = r13;
        call_005e4994(r6, r4, r2_2, r3);
        r1_5 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(r5));
    guest::cpu()->r[13] = r13;
    call_005e4988(r6, r1_5, r2_3, r3);
    guest::cpu()->r[13] = r13;
    call_005d4a78(r6, 0u, 0u, 0u);
    r0_7 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_7, 0x5e3618u, 0x20u, 6u);  // (from the original)
    r1_6 = guest::cpu()->r[1];
    r13 = r13 + 0xf0u;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_00259f30
GUEST_EXPORT(0x00259f30, d_00259f30::f_00259f30);

// f_0025b1c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0025b1c0 {

struct __attribute__((packed)) Object_0025b1c0_0 {
    u32 word_0;
    u8 unknown_4[0x24];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0x78];  // (not used here)
    u32 word_a4;
    u8 unknown_a8[0x3ad4];  // (not used here)
    u32 word_3b7c;
};
GUEST_OFFSET(Object_0025b1c0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0025b1c0_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_0025b1c0_0, word_a4, 0xa4);  // (from the original)
GUEST_OFFSET(Object_0025b1c0_0, word_3b7c, 0x3b7c);  // (from the original)

inline constexpr guest::Function<0x002b6ef8, u32(u32, u32, u32, u32)> call_002b6ef8;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x003170d0, u32(u32, u32, u32, u32)> call_003170d0;  // (from the original)
inline constexpr guest::Function<0x00317dec, u32(u32, u32, u32, u32)> call_00317dec;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)
inline constexpr guest::Function<0x005e8a7c, u32(u32, u32, u32, u32)> call_005e8a7c;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32, u32, u32)> call_006aaa30;  // (from the original)

u32 f_0025b1c0(gptr<Object_0025b1c0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
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
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_6 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_7 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r1_8 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r1_9 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r1_10 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r4_1 = 0;
    u32 r0_23 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r1_11 = 0;
    u32 ea_1 = 0;
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    u32 r1_12 = 0;
    u32 r2_13 = 0;
    u32 r3_13 = 0;
    u32 r0_26 = 0;
    u32 r0_27 = 0;
    u32 r1_13 = 0;
    u32 r2_14 = 0;
    u32 r3_14 = 0;
    u32 r0_28 = 0;
    u32 r0_29 = 0;
    u32 r1_14 = 0;
    u32 r2_15 = 0;
    u32 r3_15 = 0;
    u32 r0_30 = 0;
    u32 r0_31 = 0;
    u32 r1_15 = 0;
    u32 r2_16 = 0;
    u32 r3_16 = 0;
    u32 r0_32 = 0;
    u32 r0_33 = 0;
    u32 r1_16 = 0;
    u32 r2_17 = 0;
    u32 r3_17 = 0;
    u32 r0_34 = 0;
    u32 r0_35 = 0;
    u32 r1_17 = 0;
    u32 r2_18 = 0;
    u32 r3_18 = 0;
    u32 r0_36 = 0;
    u32 r0_37 = 0;
    u32 r2_19 = 0;
    u32 r3_19 = 0;
    u32 ea_2 = 0;
    u32 r0_38 = 0;
    u32 r1_18 = 0;
    u32 r2_20 = 0;
    u32 r3_20 = 0;
    u32 r0_39 = 0;
    u32 r0_40 = 0;
    u32 r1_19 = 0;
    u32 r2_21 = 0;
    u32 r3_21 = 0;
    u32 r0_41 = 0;
    u32 r0_42 = 0;
    u32 r1_20 = 0;
    u32 r2_22 = 0;
    u32 r3_22 = 0;
    u32 r0_43 = 0;
    u32 r0_44 = 0;
    u32 r1_21 = 0;
    u32 r2_23 = 0;
    u32 r3_23 = 0;
    u32 r0_45 = 0;
    u32 r0_46 = 0;
    u32 r1_22 = 0;
    u32 r2_24 = 0;
    u32 r3_24 = 0;
    u32 r0_47 = 0;
    r13 = r13 - 8;
    r3_1 = 0x8eed5cu + 0x6cu;  // (from the original)
    arg0->word_0 = u32(0x8eed5cu);  // (from the original)
    r2_1 = r3_1 + 0x104u;  // (from the original)
    arg0->word_a4 = u32(r2_1);
    arg0->word_28 = u32(r3_1);
    arg0->word_3b7c = u32(0x8f47a0u);  // (from the original)
    r0_1 = r0 + 0x3f98u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_005e3194(r0_1, 0x8f47a0u, r2_1, r3_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_3 = r0_2 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_0056988c(r0_3, r1_1, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = r0_4 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_0056988c(r0_5, r1_2, r2_3, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_7 = r0_6 - 0x15cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_005bf744(r0_7, r1_3, r2_4, r3_4);
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_9 = r0_8 - 0x24cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_00567ef0(r0_9, r1_4, r2_5, r3_5);
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_11 = r0_10 - 0xc88u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_12 = call_005e8a7c(r0_11, r1_5, r2_6, r3_6);
    r1_6 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_13 = r0_12 - 0xc64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_14 = call_005e8a7c(r0_13, r1_6, r2_7, r3_7);
    r1_7 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_15 = r0_14 - 0x3cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_16 = call_0056988c(r0_15, r1_7, r2_8, r3_8);
    r1_8 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_17 = r0_16 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_18 = call_0056988c(r0_17, r1_8, r2_9, r3_9);
    r1_9 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_19 = r0_18 - 0x110u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_20 = call_002b6ef8(r0_19, r1_9, r2_10, r3_10);
    r1_10 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_21 = r0_20 - 0xe4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_22 = call_002f7710(r0_21, r1_10, r2_11, r3_11);
    r4_1 = r0_22 - 0x205cu;  // (from the original)
    r0_23 = r0_22 - 0x19a0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_23, 0x320b0cu, 0x290u, 0xau);  // (from the original)
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r1_11 = 0x8ee248u + 0x10u;  // (from the original)
    ea_1 = r4_1 + 0x57cu;  // (from the original)
    *gptr<u32>(ea_1) = u32(0x8ee248u);  // (from the original)
    r0_24 = ea_1 + 0x114u;  // (from the original)
    *gptr<u32>(ea_1 + 0xcu) = u32(r1_11);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_25 = call_0056988c(r0_24, r1_11, r2_12, r3_12);
    r1_12 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_26 = r0_25 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_27 = call_0056988c(r0_26, r1_12, r2_13, r3_13);
    r1_13 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_28 = r0_27 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_29 = call_0056988c(r0_28, r1_13, r2_14, r3_14);
    r1_14 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r0_30 = r0_29 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_31 = call_0056988c(r0_30, r1_14, r2_15, r3_15);
    r1_15 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    r0_32 = r0_31 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_33 = call_0056988c(r0_32, r1_15, r2_16, r3_16);
    r1_16 = guest::cpu()->r[1];
    r2_17 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    r0_34 = r0_33 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_35 = call_0056988c(r0_34, r1_16, r2_17, r3_17);
    r1_17 = guest::cpu()->r[1];
    r2_18 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    r0_36 = r0_35 - 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_37 = call_0056988c(r0_36, r1_17, r2_18, r3_18);
    r2_19 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    ea_2 = r0_37 - 0x138u;  // (from the original)
    *gptr<u32>(ea_2) = u32(0x8f08acu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_38 = call_002f7710(ea_2, 0x8f08acu, r2_19, r3_19);  // (from the original)
    r1_18 = guest::cpu()->r[1];
    r2_20 = guest::cpu()->r[2];
    r3_20 = guest::cpu()->r[3];
    r0_39 = r0_38 - 8u;
    guest::cpu()->r[13] = r13;
    r0_40 = call_00317dec(r0_39, r1_18, r2_20, r3_20);
    r1_19 = guest::cpu()->r[1];
    r2_21 = guest::cpu()->r[2];
    r3_21 = guest::cpu()->r[3];
    r0_41 = r0_40 - 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_42 = call_005bf744(r0_41, r1_19, r2_21, r3_21);
    r1_20 = guest::cpu()->r[1];
    r2_22 = guest::cpu()->r[2];
    r3_22 = guest::cpu()->r[3];
    r0_43 = r0_42 - 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_44 = call_00567ef0(r0_43, r1_20, r2_22, r3_22);
    r1_21 = guest::cpu()->r[1];
    r2_23 = guest::cpu()->r[2];
    r3_23 = guest::cpu()->r[3];
    r0_45 = r0_44 - 0xa0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_46 = call_003170d0(r0_45, r1_21, r2_23, r3_23);
    r1_22 = guest::cpu()->r[1];
    r2_24 = guest::cpu()->r[2];
    r3_24 = guest::cpu()->r[3];
    r13 = r13 + 8;
    r0_47 = r0_46 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_006aaa30(r0_47, r1_22, r2_24, r3_24);
}

}  // namespace d_0025b1c0
GUEST_EXPORT(0x0025b1c0, d_0025b1c0::f_0025b1c0);

// f_0025c1fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0025c1fc {

struct __attribute__((packed)) Object_0025c1fc_0 {
    u8 unknown_0[0xa355];  // (not used here)
    u8 byte_a355;
};
GUEST_OFFSET(Object_0025c1fc_0, byte_a355, 0xa355);  // (from the original)

inline guest::global<u32, 0x008525dc> global_008525dc;  // (from the original)
inline guest::global<u32, 0x0094fd3c> global_0094fd3c;  // (from the original)
inline constexpr guest::Function<0x007237e0, u32(u32, u32, u32, u32)> call_007237e0;  // (from the original)

u32 f_0025c1fc(gptr<Object_0025c1fc_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 ea_1 = 0;
    u32 r3_1 = 0;
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 zf_1 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0 + 0xa000u;  // (from the original)
    r1_1 = u32(arg0->byte_a355);
    if (r1_1 != 0) {
        r0 = 0u;
        arg0->byte_a355 = u8(r0);
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r2_1 = *gptr<u32>(r0 + 0x34u);  // (from the original)
    r1_1 = *gptr<u32>(0x8525dcu + 4u);  // (from the original)
    if (r2_1 == *global_008525dc) {
        if (r2_1 == 0) {
            if (((*gptr<u32>(r0 + 0x38u) | r1_1) & 1u) == 0) {  // (from the original)
                r13 = r13 + 0x10;  // (from the original)
                guest::cpu()->r[1] = r1_1;
                guest::cpu()->r[13] = r13;
                return r0;
            }
        }
        if (*gptr<u32>(r0 + 0x38u) == r1_1) {  // (from the original)
            r13 = r13 + 0x10;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
    }
    r1_1 = *gptr<u32>(0x8525dcu + 0xcu);  // (from the original)
    if (r2_1 == *gptr<u32>(0x8525dcu + 8u)) {  // (from the original)
        if (r2_1 == 0) {
            if (((*gptr<u32>(r0 + 0x38u) | r1_1) & 1u) == 0) {  // (from the original)
                r13 = r13 + 0x10;  // (from the original)
                guest::cpu()->r[1] = r1_1;
                guest::cpu()->r[13] = r13;
                return r0;
            }
        }
        if (*gptr<u32>(r0 + 0x38u) == r1_1) {  // (from the original)
            r13 = r13 + 0x10;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
    }
    ea_1 = 0x8525dcu + 0x10u;  // (from the original)
    r3_1 = *gptr<u32>(ea_1);
    r1_1 = *gptr<u32>(ea_1 + 4u);
    if (r2_1 == r3_1) {
        if (r2_1 == 0) {
            r2_1 = *gptr<u32>(r0 + 0x38u) | r1_1;  // (from the original)
            if ((r2_1 & 1u) == 0) {
                r13 = r13 + 0x10;  // (from the original)
                guest::cpu()->r[1] = r1_1;
                guest::cpu()->r[13] = r13;
                return r0;
            }
        }
        r0 = *gptr<u32>(r0 + 0x38u);  // (from the original)
        if (r0 == r1_1) {
            r13 = r13 + 0x10;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
    }
    r0 = *gptr<u32>(r4 + 0x34cu);  // (from the original)
    if (r0 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r5_1 = *gptr<u32>(*global_0094fd3c + 0x1e0u) + 0x494u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_007237e0(r5_1, r1_1, r2_1, r3_1);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_25c314;
    }
L_25c2f4:;
    *gptr<u8>(*gptr<u32>(r4 + 0x34cu) + 4u) = u8(1u);  // (from the original)
L_25c300:;
    r0_2 = *gptr<u32>(r4 + 0x34cu);  // (from the original)
    r1_2 = *gptr<u32>(*gptr<u32>(r0_2) + 0x1cu);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    return guest::call_address<u32>(r1_2, r0_2, r1_2, r2, r3);
L_25c314:;
    zf_1 = *gptr<u32>(r5_1 + 0xb8u) == 0x2f635cu;  // (from the original)
    if (zf_1) {
        zf_1 = *gptr<u32>(r5_1 + 0xbcu) == 0;  // (from the original)
    }
    if (!zf_1) {
        guest::preempt();
        goto L_25c300;
    }
    guest::preempt();
    goto L_25c2f4;
}

}  // namespace d_0025c1fc
GUEST_EXPORT(0x0025c1fc, d_0025c1fc::f_0025c1fc);

// f_0025c3ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0025c3ac {

inline guest::global<u32, 0x008525ec> global_008525ec;  // (from the original)
inline constexpr guest::Function<0x001a9368, u32(u32, u32, u32, u32)> call_001a9368;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x006d2780, u32(u32, u32, u32, u32)> call_006d2780;  // (from the original)
inline constexpr guest::Function<0x008178ac, u32(u32, u32, u32, u32)> call_008178ac;  // (from the original)

u32 f_0025c3ac(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006d2780(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_001a9368(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    if (r1 == 0) {
        r0_2 = 0x16u;  // (from the original)
    } else {
        r0_2 = 0x14u;  // (from the original)
    }
    *gptr<u32>(r13) = u32(r0_2);
    r1_2 = r13;
    guest::cpu()->r[13] = r13;
    call_002fbb30(0x9ab068u, r1_2, 0x19u, guest::cpu()->r[3]);  // (from the original)
    r1_3 = *global_008525ec;
    r2_2 = *gptr<u32>(0x8525ecu + 4);  // (from the original)
    r0_3 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_008178ac(r0_3, r1_3, r2_2, guest::cpu()->r[3]);
    *gptr<u8>(0xa351u + r0) = u8(1u);  // (from the original)
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = 0xa351u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_0025c3ac
GUEST_EXPORT(0x0025c3ac, d_0025c3ac::f_0025c3ac);

// f_0025c418: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0025c418 {

inline guest::global<u32, 0x008525ec> global_008525ec;  // (from the original)
inline constexpr guest::Function<0x001a9368, u32(u32, u32, u32, u32)> call_001a9368;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x006d2780, u32(u32, u32, u32, u32)> call_006d2780;  // (from the original)
inline constexpr guest::Function<0x008178ac, u32(u32, u32, u32, u32)> call_008178ac;  // (from the original)

u32 f_0025c418(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006d2780(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_001a9368(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    if (r1 == 0) {
        r0_2 = 0x17u;  // (from the original)
    } else {
        r0_2 = 0x15u;  // (from the original)
    }
    *gptr<u32>(r13) = u32(r0_2);
    r1_2 = r13;
    guest::cpu()->r[13] = r13;
    call_002fbb30(0x9ab068u, r1_2, 0x19u, guest::cpu()->r[3]);  // (from the original)
    r1_3 = *global_008525ec;
    r2_2 = *gptr<u32>(0x8525ecu + 4);  // (from the original)
    r0_3 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_008178ac(r0_3, r1_3, r2_2, guest::cpu()->r[3]);
    *gptr<u8>(0xa352u + r0) = u8(1u);  // (from the original)
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = 0xa352u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_0025c418
GUEST_EXPORT(0x0025c418, d_0025c418::f_0025c418);

// f_0025c484: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0025c484 {

inline guest::global<u32, 0x008525ec> global_008525ec;  // (from the original)
inline constexpr guest::Function<0x001a9368, u32(u32, u32, u32, u32)> call_001a9368;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x006d2780, u32(u32, u32, u32, u32)> call_006d2780;  // (from the original)
inline constexpr guest::Function<0x008178ac, u32(u32, u32, u32, u32)> call_008178ac;  // (from the original)

u32 f_0025c484(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r0_2 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006d2780(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_001a9368(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    *gptr<u32>(r13) = u32(0x18u);  // (from the original)
    r1_2 = r13;
    guest::cpu()->r[13] = r13;
    call_002fbb30(0x9ab068u, r1_2, 0x19u, guest::cpu()->r[3]);  // (from the original)
    r1_3 = *global_008525ec;
    r2_2 = *gptr<u32>(0x8525ecu + 4);  // (from the original)
    r0_2 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_008178ac(r0_2, r1_3, r2_2, guest::cpu()->r[3]);
    *gptr<u8>(0xa353u + r0) = u8(1u);  // (from the original)
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = 0xa353u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_0025c484
GUEST_EXPORT(0x0025c484, d_0025c484::f_0025c484);

// f_0025ca5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0025ca5c {

inline guest::global<u32, 0x00950004> global_00950004;  // (from the original)
inline guest::global<u32, 0x00953358> global_00953358;  // (from the original)
inline guest::global<u32, 0x00953364> global_00953364;  // (from the original)

u32 f_0025ca5c() {
    *global_00953364 = u32(~0u);
    *global_00953358 = u32(0u);
    *global_00950004 = u32(0u);
    guest::cpu()->r[1] = 0x950004u;  // (from the original)
    return 0u;
}

}  // namespace d_0025ca5c
GUEST_EXPORT(0x0025ca5c, d_0025ca5c::f_0025ca5c);

// f_0025cdf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0025cdf8 {

struct __attribute__((packed)) Object_0025cdf8_0 {
    u8 unknown_0[0x7e13];  // (not used here)
    u8 byte_7e13;
    u8 unknown_7e14[0x1];  // (not used here)
    u8 byte_7e15;
};
GUEST_OFFSET(Object_0025cdf8_0, byte_7e13, 0x7e13);  // (from the original)
GUEST_OFFSET(Object_0025cdf8_0, byte_7e15, 0x7e15);  // (from the original)

inline guest::global<u32, 0x0025cfe4> global_0025cfe4;  // (from the original)
inline constexpr guest::Function<0x0014f9d4, u32(u32, u32, u32, u32)> call_0014f9d4;  // (from the original)
inline constexpr guest::Function<0x0029b480, u32(u32, u32, u32, u32)> call_0029b480;  // (from the original)
inline constexpr guest::Function<0x0029b5fc, u32(u32, u32, u32, u32)> call_0029b5fc;  // (from the original)
inline constexpr guest::Function<0x002f6b14, u32(u32, u32, u32, u32)> call_002f6b14;  // (from the original)
inline constexpr guest::Function<0x00320cec, u32(u32, u32, u32, u32)> call_00320cec;  // (from the original)
inline constexpr guest::Function<0x00320d54, u32(u32, u32, u32, u32)> call_00320d54;  // (from the original)
inline constexpr guest::Function<0x005c3e84, u32(u32, u32, u32, u32)> call_005c3e84;  // (from the original)
inline constexpr guest::Function<0x005c6cac, u32(u32, u32, u32, u32)> call_005c6cac;  // (from the original)
inline constexpr guest::Function<0x007237e0, u32(u32, u32, u32, u32)> call_007237e0;  // (from the original)
inline constexpr guest::Function<0x007240f8, u32(u32, u32, u32, u32)> call_007240f8;  // (from the original)

u32 f_0025cdf8(gptr<Object_0025cdf8_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 zf_1 = 0;
    u32 r1_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r1_5 = 0;
    u32 r0_12 = 0;
    u32 r1_6 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = r0 + 0x7e00u;  // (from the original)
    r6 = r0;
    r0 = u32(arg0->byte_7e13);
    if (r0 != 0) {
        goto L_25cf44;
    }
    r0_1 = u32(arg0->byte_7e15);
    r7 = r6 + 0x7e12u;  // (from the original)
    if (r0_1 == 1u) {
        goto L_25cf48;
    }
    r0_2 = call_005c3e84(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = r0_2;
    r0_3 = u32(s32(s8(*gptr<u8>(r4 + 0x14u))));  // (from the original)
    if (r1_1 == r0_3) {
        goto L_25cef0;
    }
    r8 = r6 + 0x6e2cu;  // (from the original)
    if (r0_3 == 1u) {
        call_0029b480(r8, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r5 = 0u;
    if (u32(*gptr<u8>(r4 + 0x14u)) == 0) {  // (from the original)
        r1_2 = 1u;
    } else {
        r1_2 = 0u;
    }
    *gptr<u8>(0x7e14u + r6) = u8(r1_2);  // (from the original)
    do {
L_25ce68:;
        r0_4 = r6 + (r5 + (r5 << 5) + (r5 << 7) << 2);
        *gptr<u8>(r0_4 + 0x5d9u) = u8(u32(*gptr<u8>(r4 + 0x14u)));  // (from the original)
        r1_1 = u32(s32(s8(*gptr<u8>(r4 + 0x14u))));  // (from the original)
        if (r1_1 == 1u) {
            r0_5 = r0_4 + 0x4acu;  // (from the original)
            call_00320d54(r0_5, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1_1 = guest::cpu()->r[1];
        } else {
            *gptr<u8>(r0_4 + 0x585u) = u8(r1_1);  // (from the original)
        }
        r5 = r5 + 1u;
        guest::preempt();
    } while (r5 < 0x28u);  // (from the original)
    r0_3 = u32(*gptr<u8>(r4 + 0x14u));  // (from the original)
    if (r0_3 == 1u) {
    } else {
        goto L_25cef0;
    }
    r0_3 = call_007237e0(r8, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_3 != 0) {
        goto L_25cef0;
    }
    r1_1 = 0x2f635cu;  // (from the original)
    r0_3 = *gptr<u32>(r8 + 0xb8u);  // (from the original)
    zf_1 = r0_3 == r1_1;
    if (zf_1) {
        r0_3 = *gptr<u32>(r8 + 0xbcu);  // (from the original)
        zf_1 = r0_3 == 0;
    }
    if (zf_1) {
        goto L_25cef0;
    }
    call_0029b5fc(r8, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r0_3 = call_002f6b14(r8, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
L_25cef0:;
    r0_6 = call_005c6cac(r0_3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0_6;
    r0 = u32(s32(s8(*gptr<u8>(r4 + 0x12u))));  // (from the original)
    if (r1 == r0) {
        goto L_25cf44;
    }
    if (r0 == 0) {
        r0_7 = 1u;
    } else {
        r0_7 = 0u;
    }
    r5 = 0u;
    *gptr<u8>(r7) = u8(r0_7);
    do {
L_25cf1c:;
        r1_4 = u32(s32(s8(*gptr<u8>(r4 + 0x12u))));  // (from the original)
        r0_8 = r6 + (r5 + (r5 << 5) + (r5 << 7) << 2) + 0x4acu;  // (from the original)
        r0 = call_00320cec(r0_8, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r5 = r5 + 1u;
        guest::preempt();
    } while (r5 < 0x28u);  // (from the original)
L_25cf44:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_25cf48:;
    r0_9 = *gptr<u32>(*global_0025cfe4);
    r0_10 = call_0014f9d4(r0_9, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = u32(s32(s8(*gptr<u8>(r4 + 0x12u))));  // (from the original)
    r0 = r0_10 ^ 1u;
    if (r1 == r0) {
        guest::preempt();
        goto L_25cf44;
    }
    if (r1 == 0) {
        r0_11 = 1u;
    } else {
        r0_11 = 0u;
    }
    r5 = 0u;
    *gptr<u8>(r7) = u8(r0_11);
    do {
L_25cf78:;
        r7_1 = r6 + (r5 + (r5 << 5) + (r5 << 7) << 2);
        r8_1 = r7_1 + 0x4acu;  // (from the original)
        call_00320d54(r8_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_5 = guest::cpu()->r[1];
        r0_12 = call_007240f8(r8_1, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (!(r0_12 == 0)) {
            r1_6 = u32(s32(s8(*gptr<u8>(r4 + 0x12u))));  // (from the original)
            call_00320cec(r8_1, r1_6, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            if (u32(*gptr<u8>(r4 + 0x12u)) == 0) {  // (from the original)
                r0_12 = 1u;
            } else {
                r0_12 = 0u;
            }
            *gptr<u8>(r7_1 + 0x585u) = u8(r0_12);  // (from the original)
        }
        r5 = r5 + 1u;
        guest::preempt();
    } while (r5 < 0x28u);  // (from the original)
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_12;
}

}  // namespace d_0025cdf8
GUEST_EXPORT(0x0025cdf8, d_0025cdf8::f_0025cdf8);

// f_0025d9e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0025d9e4 {

struct __attribute__((packed)) Object_0025d9e4_0 {
    u8 unknown_0[0x7e15];  // (not used here)
    u8 byte_7e15;
};
GUEST_OFFSET(Object_0025d9e4_0, byte_7e15, 0x7e15);  // (from the original)

inline guest::global<u32, 0x0025db24> global_0025db24;  // (from the original)
inline guest::global<u32, 0x0094fd58> global_0094fd58;  // (from the original)
inline guest::global<u32, 0x00aaf14c> global_00aaf14c;  // (from the original)
inline constexpr guest::Function<0x0014f9fc, u32(u32, u32, u32, u32)> call_0014f9fc;  // (from the original)
inline constexpr guest::Function<0x0014fa04, u32(u32, u32, u32, u32)> call_0014fa04;  // (from the original)
inline constexpr guest::Function<0x0027a650, u32(u32, u32, u32, u32)> call_0027a650;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb7e8, u32(u32, u32, u32, u32)> call_002fb7e8;  // (from the original)
inline constexpr guest::Function<0x005c3560, u32(u32, u32, u32, u32)> call_005c3560;  // (from the original)
inline constexpr guest::Function<0x005c3e84, u32(u32, u32, u32, u32)> call_005c3e84;  // (from the original)

u32 f_0025d9e4(gptr<Object_0025d9e4_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r5_1 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_2 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r4_1 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_10 = 0;
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r6 = r0;
    r8 = r0 + 0x7e00u;  // (from the original)
    r9 = r1;
    r0_1 = u32(arg0->byte_7e15);
    r7 = 0u;
    if (r0_1 == 0) {
        goto L_25da4c;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fae84(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_3 = r0_2 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0027a650(r0_3, r1_1, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r4 = 0u;
    } else {
        goto L_25da54;
    }
    do {
L_25da1c:;
        r5_1 = r4 & 0xffu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_4 = call_002fae84(r0, r1, r2, r3);
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        r0_5 = r0_4 + 0x20u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fb7e8(r0_5, r5_1, r2_2, r3_2);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            goto L_25da54;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 4u);
    goto L_25dac0;
L_25da4c:;
    r0 = *global_00aaf14c;
L_25da54:;
    if (r0 == 0) {
        goto L_25dac0;
    }
    r0_6 = u32(*gptr<u8>(r8 + 0x15u));  // (from the original)
    if (r0_6 == 1u) {
        goto L_25dac8;
    }
    guest::cpu()->r[13] = r13;
    r0_7 = call_005c3e84(r0_6, r1, r2, r3);
    r1_2 = guest::cpu()->r[1];
    if (r0_7 == 0) {
        goto L_25db14;
    }
    *global_0094fd58 = u32(*global_0094fd58 | 0x400u);  // (from the original)
    r0_8 = u32(*gptr<u8>(r0 + 0x89d0u + r9));  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_9 = call_005c3560(r0_8, 1u, 0u, 0u);
    r1_2 = guest::cpu()->r[1];
    r7 = r0_9;
    goto L_25db14;
L_25dac0:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0u;
L_25dac8:;
    r4_1 = *gptr<u32>(*global_0025db24);
    r1_3 = u32(*gptr<u8>(r0 + 0x89d0u + r9));  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0014fa04(r4_1, r1_3, r2, r3);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r1_2 = 0x7e16u - 0x1au;  // (from the original)
    *gptr<u8>(0x7e16u + r6) = u8(1u);  // (from the original)
    r0_10 = *gptr<u32>(r1_2 + r6);
    if (r0_10 != 0) {
        guest::cpu()->r[13] = r13;
        call_0014f9fc(r0_10, 1u, r2_3, r3_3);
        r1_2 = guest::cpu()->r[1];
    }
    *gptr<u32>(r6 + 0x7e20u) = u32(r9);  // (from the original)
L_25db14:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r7;
}

}  // namespace d_0025d9e4
GUEST_EXPORT(0x0025d9e4, d_0025d9e4::f_0025d9e4);

// f_0025efb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0025efb8 {

inline constexpr guest::Function<0x0029b480, u32(u32, u32, u32, u32)> call_0029b480;  // (from the original)

u32 f_0025efb8(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    *gptr<u8>(0x7e0eu + r0) = u8(r1);  // (from the original)
    r1_1 = u32(*gptr<u8>(0x7e0eu + r0));  // (from the original)
    if (r1_1 != 1u) {
        guest::cpu()->r[1] = r1_1;
        return r0;
    }
    r0_1 = r0 + 0x6e2cu;  // (from the original)
    return call_0029b480(r0_1, r1_1, 0x7e0eu, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0025efb8
GUEST_EXPORT(0x0025efb8, d_0025efb8::f_0025efb8);

// f_0025f390: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0025f390 {

struct __attribute__((packed)) Object_0025f390_0 {
    u32 word_0;
    u8 unknown_4[0x24];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0x7408];  // (not used here)
    u32 word_7434;
    u8 unknown_7438[0x394];  // (not used here)
    u32 word_77cc;
    u8 unknown_77d0[0xe0];  // (not used here)
    u32 word_78b0;
};
GUEST_OFFSET(Object_0025f390_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0025f390_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_0025f390_0, word_7434, 0x7434);  // (from the original)
GUEST_OFFSET(Object_0025f390_0, word_77cc, 0x77cc);  // (from the original)
GUEST_OFFSET(Object_0025f390_0, word_78b0, 0x78b0);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f770c, u32(u32, u32, u32, u32)> call_002f770c;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32, u32, u32)> call_006aaa30;  // (from the original)

u32 f_0025f390(gptr<Object_0025f390_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
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
    u32 r0_6 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_3 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_4 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_5 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_6 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 ea_1 = 0;
    u32 r0_17 = 0;
    u32 r1_7 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r4_2 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r1_8 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r1_9 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r1_10 = 0;
    u32 r2_13 = 0;
    u32 r3_13 = 0;
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    u32 r1_11 = 0;
    u32 r2_14 = 0;
    u32 r3_14 = 0;
    u32 r0_26 = 0;
    u32 r0_27 = 0;
    u32 r1_12 = 0;
    u32 r2_15 = 0;
    u32 r3_15 = 0;
    u32 r0_28 = 0;
    u32 r0_29 = 0;
    u32 r1_13 = 0;
    u32 r2_16 = 0;
    u32 r3_16 = 0;
    u32 r0_30 = 0;
    u32 r0_31 = 0;
    u32 r1_14 = 0;
    u32 r2_17 = 0;
    u32 r3_17 = 0;
    u32 r0_32 = 0;
    u32 r0_33 = 0;
    u32 r1_15 = 0;
    u32 r2_18 = 0;
    u32 r3_18 = 0;
    u32 r0_34 = 0;
    u32 r0_35 = 0;
    u32 r1_16 = 0;
    u32 r2_19 = 0;
    u32 r3_19 = 0;
    u32 r0_36 = 0;
    u32 r0_37 = 0;
    u32 r1_17 = 0;
    u32 r2_20 = 0;
    u32 r3_20 = 0;
    u32 r0_38 = 0;
    u32 r0_39 = 0;
    u32 r1_18 = 0;
    u32 r2_21 = 0;
    u32 r3_21 = 0;
    u32 r0_40 = 0;
    u32 r0_41 = 0;
    u32 r1_19 = 0;
    u32 r2_22 = 0;
    u32 r3_22 = 0;
    u32 r0_42 = 0;
    u32 r0_43 = 0;
    u32 r1_20 = 0;
    u32 r2_23 = 0;
    u32 r3_23 = 0;
    u32 r0_44 = 0;
    u32 r0_45 = 0;
    u32 r4_3 = 0;
    u32 r0_46 = 0;
    u32 r0_47 = 0;
    u32 r1_21 = 0;
    u32 r2_24 = 0;
    u32 r3_24 = 0;
    u32 r0_48 = 0;
    u32 r0_49 = 0;
    u32 r1_22 = 0;
    u32 r2_25 = 0;
    u32 r3_25 = 0;
    u32 r0_50 = 0;
    u32 r0_51 = 0;
    u32 r1_23 = 0;
    u32 r2_26 = 0;
    u32 r3_26 = 0;
    u32 r0_52 = 0;
    u32 r0_53 = 0;
    u32 r1_24 = 0;
    u32 r2_27 = 0;
    u32 r3_27 = 0;
    u32 r0_54 = 0;
    u32 r0_55 = 0;
    u32 r1_25 = 0;
    u32 r2_28 = 0;
    u32 r3_28 = 0;
    u32 r0_56 = 0;
    u32 r0_57 = 0;
    u32 r1_26 = 0;
    u32 r2_29 = 0;
    u32 r3_29 = 0;
    u32 r0_58 = 0;
    u32 r0_59 = 0;
    u32 r1_27 = 0;
    u32 r2_30 = 0;
    u32 r3_30 = 0;
    u32 r0_60 = 0;
    u32 r0_61 = 0;
    u32 r1_28 = 0;
    u32 r2_31 = 0;
    u32 r3_31 = 0;
    u32 r0_62 = 0;
    r13 = r13 - 0x10;  // (from the original)
    arg0->word_28 = u32(0x8eef60u + 0x6cu);  // (from the original)
    arg0->word_0 = u32(0x8eef60u);  // (from the original)
    r4_1 = r0 + 0x77ccu;  // (from the original)
    arg0->word_7434 = u32(0x8ee218u);  // (from the original)
    r0_1 = r0 + 0x78e4u;  // (from the original)
    arg0->word_77cc = u32(0x8ef22cu);  // (from the original)
    arg0->word_78b0 = u32(0x8ef22cu + 0x44u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_1, 0x2e0b3cu, 0x518u, 1u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f770c(r4_1, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u32>(r0_2 - 0x398u) = u32(0x8f18f4u);  // (from the original)
    r0_3 = r0_2 - 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_00567ef0(r0_3, 0x8f18f4u, r2_2, r3_2);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = r0_4 - 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_005bf744(r0_5, r1_2, r2_3, r3_3);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    *gptr<u32>(r0_6 - 0x4f4u) = u32(0x8f47a0u);  // (from the original)
    r0_7 = r0_6 - 0xd8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_005e3194(r0_7, 0x8f47a0u, r2_4, r3_4);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_9 = r0_8 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_0056988c(r0_9, r1_3, r2_5, r3_5);
    r1_4 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_11 = r0_10 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_12 = call_0056988c(r0_11, r1_4, r2_6, r3_6);
    r1_5 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_13 = r0_12 - 0x15cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_14 = call_005bf744(r0_13, r1_5, r2_7, r3_7);
    r1_6 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_15 = r0_14 - 0x24cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_16 = call_00567ef0(r0_15, r1_6, r2_8, r3_8);
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    ea_1 = r0_16 - 0x13cu;  // (from the original)
    *gptr<u32>(ea_1) = u32(0x8f08acu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_17 = call_002f7710(ea_1, 0x8f08acu, r2_9, r3_9);  // (from the original)
    r1_7 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r4_2 = 0x8ee248u + 0x10u;  // (from the original)
    *gptr<u32>(r0_17 - 0x134u) = u32(r4_2);  // (from the original)
    *gptr<u32>(r0_17 - 0x140u) = u32(0x8ee248u);  // (from the original)
    r0_18 = r0_17 - 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_19 = call_0056988c(r0_18, r1_7, r2_10, r3_10);
    r1_8 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_20 = r0_19 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_21 = call_0056988c(r0_20, r1_8, r2_11, r3_11);
    r1_9 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_22 = r0_21 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_23 = call_0056988c(r0_22, r1_9, r2_12, r3_12);
    r1_10 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_24 = r0_23 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_25 = call_0056988c(r0_24, r1_10, r2_13, r3_13);
    r1_11 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_26 = r0_25 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_27 = call_0056988c(r0_26, r1_11, r2_14, r3_14);
    r1_12 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r0_28 = r0_27 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_29 = call_0056988c(r0_28, r1_12, r2_15, r3_15);
    r1_13 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    r0_30 = r0_29 - 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_31 = call_0056988c(r0_30, r1_13, r2_16, r3_16);
    r1_14 = guest::cpu()->r[1];
    r2_17 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    *gptr<u32>(r0_31 - 0x154u) = u32(r4_2);  // (from the original)
    *gptr<u32>(r0_31 - 0x160u) = u32(0x8ee248u);  // (from the original)
    r0_32 = r0_31 - 0x4cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_33 = call_0056988c(r0_32, r1_14, r2_17, r3_17);
    r1_15 = guest::cpu()->r[1];
    r2_18 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    r0_34 = r0_33 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_35 = call_0056988c(r0_34, r1_15, r2_18, r3_18);
    r1_16 = guest::cpu()->r[1];
    r2_19 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    r0_36 = r0_35 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_37 = call_0056988c(r0_36, r1_16, r2_19, r3_19);
    r1_17 = guest::cpu()->r[1];
    r2_20 = guest::cpu()->r[2];
    r3_20 = guest::cpu()->r[3];
    r0_38 = r0_37 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_39 = call_0056988c(r0_38, r1_17, r2_20, r3_20);
    r1_18 = guest::cpu()->r[1];
    r2_21 = guest::cpu()->r[2];
    r3_21 = guest::cpu()->r[3];
    r0_40 = r0_39 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_41 = call_0056988c(r0_40, r1_18, r2_21, r3_21);
    r1_19 = guest::cpu()->r[1];
    r2_22 = guest::cpu()->r[2];
    r3_22 = guest::cpu()->r[3];
    r0_42 = r0_41 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_43 = call_0056988c(r0_42, r1_19, r2_22, r3_22);
    r1_20 = guest::cpu()->r[1];
    r2_23 = guest::cpu()->r[2];
    r3_23 = guest::cpu()->r[3];
    r0_44 = r0_43 - 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_45 = call_0056988c(r0_44, r1_20, r2_23, r3_23);
    r4_3 = r0_45 - 0x6bccu;  // (from the original)
    r0_46 = r0_45 - 0x280u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_46, 0x1ff9d4u, 0x130u, 2u);  // (from the original)
    r0_47 = r4_3 + 0x4acu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_47, 0x320fc8u, 0x284u, 0x28u);  // (from the original)
    r1_21 = guest::cpu()->r[1];
    r2_24 = guest::cpu()->r[2];
    r3_24 = guest::cpu()->r[3];
    r0_48 = r4_3 + 0x480u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_49 = call_0056988c(r0_48, r1_21, r2_24, r3_24);
    r1_22 = guest::cpu()->r[1];
    r2_25 = guest::cpu()->r[2];
    r3_25 = guest::cpu()->r[3];
    r0_50 = r0_49 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_51 = call_0056988c(r0_50, r1_22, r2_25, r3_25);
    r1_23 = guest::cpu()->r[1];
    r2_26 = guest::cpu()->r[2];
    r3_26 = guest::cpu()->r[3];
    r0_52 = r0_51 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_53 = call_0056988c(r0_52, r1_23, r2_26, r3_26);
    r1_24 = guest::cpu()->r[1];
    r2_27 = guest::cpu()->r[2];
    r3_27 = guest::cpu()->r[3];
    r0_54 = r0_53 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_55 = call_0056988c(r0_54, r1_24, r2_27, r3_27);
    r1_25 = guest::cpu()->r[1];
    r2_28 = guest::cpu()->r[2];
    r3_28 = guest::cpu()->r[3];
    r0_56 = r0_55 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_57 = call_0056988c(r0_56, r1_25, r2_28, r3_28);
    r1_26 = guest::cpu()->r[1];
    r2_29 = guest::cpu()->r[2];
    r3_29 = guest::cpu()->r[3];
    r0_58 = r0_57 - 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_59 = call_005bf744(r0_58, r1_26, r2_29, r3_29);
    r1_27 = guest::cpu()->r[1];
    r2_30 = guest::cpu()->r[2];
    r3_30 = guest::cpu()->r[3];
    r0_60 = r0_59 - 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_61 = call_00567ef0(r0_60, r1_27, r2_30, r3_30);
    r1_28 = guest::cpu()->r[1];
    r2_31 = guest::cpu()->r[2];
    r3_31 = guest::cpu()->r[3];
    r13 = r13 + 0x10;  // (from the original)
    r0_62 = r0_61 - 0x4cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_006aaa30(r0_62, r1_28, r2_31, r3_31);
}

}  // namespace d_0025f390
GUEST_EXPORT(0x0025f390, d_0025f390::f_0025f390);

// f_0025f970: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0025f970 {

inline guest::global<u32, 0x00aaf14c> global_00aaf14c;  // (from the original)
inline constexpr guest::Function<0x0025f68c, u32(u32, u32, u32, u32)> call_0025f68c;  // (from the original)
inline constexpr guest::Function<0x0025f740, u32(u32, u32, u32, u32)> call_0025f740;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x00309ef0, u32(u32, u32, u32, u32)> call_00309ef0;  // (from the original)
inline constexpr guest::Function<0x0056d874, u32(u32, u32, u32, u32)> call_0056d874;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)
inline constexpr guest::Function<0x00757004, u32(u32, u32, u32, u32)> call_00757004;  // (from the original)
inline constexpr guest::Function<0x00757160, u32(u32, u32, u32, u32)> call_00757160;  // (from the original)
inline constexpr guest::Function<0x007571a0, u32(u32, u32, u32, u32)> call_007571a0;  // (from the original)

u32 f_0025f970(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r2_4 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r2_6 = 0;
    u32 r3_5 = 0;
    u32 r0_9 = 0;
    u32 r2_7 = 0;
    u32 res_1 = 0;
    u32 ea_1 = 0;
    u32 r2_8 = 0;
    u32 ea_2 = 0;
    u32 r1_5 = 0;
    u32 r2_9 = 0;
    u32 r3_6 = 0;
    u32 r1_6 = 0;
    u32 r5_1 = 0;
    u32 r0_10 = 0;
    u32 r1_7 = 0;
    u32 r2_10 = 0;
    u32 r3_7 = 0;
    u32 r0_11 = 0;
    u32 r3_8 = 0;
    u32 r2_11 = 0;
    u32 r1_8 = 0;
    r13 = r13 - 0x70u;  // (from the original)
    r9 = r0;
    r0_1 = *global_00aaf14c + 0x8e08u;  // (from the original)
    r10 = r0_1;
    guest::cpu()->r[13] = r13;
    r0_2 = call_00309ef0(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_25fac8;
    }
    r0_2 = u32(*gptr<u8>(r10 + 9u));
    if (r0_2 >= 3u) {
        goto L_25fac8;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_00757160(r10, r1_1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x2cu) = u32(r0_2);  // (from the original)
    if (r0_2 >= 8u) {
        goto L_25fac8;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_00757004(r10, r1_1, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r6 = 0u;
    r7 = r0_3;
    r4 = r6;
    if (r0_3 == 0 || r0_3 >> 0x1f != (r0_3 & (r0_3 ^ r0_3)) >> 0x1f) {  // (from the original)
        goto L_25faac;
    }
    r11 = 0x8906ecu;  // (from the original)
    r8 = 0x90a3e8u;  // (from the original)
L_25f9e0:;
    r2_4 = r13 + 0x48u;  // (from the original)
    r1_2 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_007571a0(r10, r1_2, r2_4, r4);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        goto L_25faa0;
    }
    r0_5 = r13;
    r1_3 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_003083bc(r0_5, r1_3, 9u, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    *gptr<u32>(r0_6) = u32(r8);
    r0_7 = r0_6 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_005f4bfc(r0_7, r1_4, r2_5, r3_4);
    r2_6 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r5 = r0_8 - 0xcu;  // (from the original)
    r0_9 = r0_8 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_9, 0x12u, r2_6, r3_5);  // (from the original)
    r3 = guest::cpu()->r[3];
    r0 = r5 + 0x18u;  // (from the original)
    *gptr<u16>(r5 + 0x18u) = u16(u32(*gptr<u16>(r11)));  // (from the original)
    r1 = 4u;
    do {
L_25fa3c:;
        r2_7 = u32(*gptr<u16>(r11));
        res_1 = r1 - 1u;
        r1 = res_1;
        ea_1 = r0 + 2u;
        *gptr<u16>(ea_1) = u16(r2_7);
        r2_8 = u32(*gptr<u16>(r11));
        ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r2_8);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    r1_5 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0056d874(r5, r1_5, r2_8, r3);
    r2_9 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r1_6 = r13;
    r5_1 = r9 + (r6 + (r6 << 4) + (r6 << 5) << 2);
    r0_10 = r5_1 + 0x430u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e2e50(r0_10, r1_6, r2_9, r3_6);
    r1_7 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_11 = r5_1 + 0x430u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e2f94(r0_11, r1_7, r2_10, r3_7);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r6 = r6 + 1u;
    *gptr<u32>(r13) = u32(r8);
L_25faa0:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(r7)) {
        guest::preempt();
        goto L_25f9e0;
    }
L_25faac:;
    guest::cpu()->r[13] = r13;
    call_0025f68c(r9, r6, r2_3, r3_3);
    r3_8 = guest::cpu()->r[3];
    r2_11 = u32(*gptr<u8>(r10 + 0xb4u));  // (from the original)
    r1_8 = *gptr<u32>(r13 + 0x2cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_0025f740(r9, r1_8, r2_11, r3_8);
    r1_1 = guest::cpu()->r[1];
L_25fac8:;
    r13 = r13 + 0x70u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_0025f970
GUEST_EXPORT(0x0025f970, d_0025f970::f_0025f970);

// f_0025fadc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0025fadc {

inline guest::global<u32, 0x00aaf14c> global_00aaf14c;  // (from the original)
inline constexpr guest::Function<0x0025f68c, u32(u32, u32, u32, u32)> call_0025f68c;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x0056d874, u32(u32, u32, u32, u32)> call_0056d874;  // (from the original)
inline constexpr guest::Function<0x0056e04c, u32(u32, u32, u32, u32)> call_0056e04c;  // (from the original)
inline constexpr guest::Function<0x005d6cc0, u32(u32, u32, u32, u32)> call_005d6cc0;  // (from the original)
inline constexpr guest::Function<0x005d6d28, u32(u32, u32, u32, u32)> call_005d6d28;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f12f4, u32(u32, u32, u32, u32)> call_005f12f4;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)
inline constexpr guest::Function<0x00716d80, u32(u32, u32, u32, u32)> call_00716d80;  // (from the original)

u32 f_0025fadc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r0_7 = 0;
    u32 r2_5 = 0;
    u32 res_1 = 0;
    u32 ea_1 = 0;
    u32 r2_6 = 0;
    u32 ea_2 = 0;
    u32 r1_3 = 0;
    u32 r2_7 = 0;
    u32 r3_4 = 0;
    u32 r1_4 = 0;
    u32 r5_1 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r2_8 = 0;
    u32 r3_5 = 0;
    u32 r0_9 = 0;
    u32 r3_6 = 0;
    u32 r0_10 = 0;
    u32 r1_6 = 0;
    u32 r0_11 = 0;
    u32 r1_7 = 0;
    u32 r2_9 = 0;
    u32 r3_7 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r2_10 = 0;
    u32 r3_8 = 0;
    u32 r4_1 = 0;
    u32 r0_14 = 0;
    u32 r2_11 = 0;
    u32 res_2 = 0;
    u32 ea_3 = 0;
    u32 r2_12 = 0;
    u32 ea_4 = 0;
    u32 r0_15 = 0;
    u32 r3_9 = 0;
    u32 r0_16 = 0;
    u32 r1_8 = 0;
    u32 r0_17 = 0;
    u32 r1_9 = 0;
    u32 r2_13 = 0;
    u32 r3_10 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r2_14 = 0;
    u32 r3_11 = 0;
    u32 r4_2 = 0;
    u32 r0_20 = 0;
    u32 r2_15 = 0;
    u32 res_3 = 0;
    u32 ea_5 = 0;
    u32 r2_16 = 0;
    u32 ea_6 = 0;
    u32 r1_10 = 0;
    u32 r0_21 = 0;
    u32 r3_12 = 0;
    u32 r0_22 = 0;
    u32 r1_11 = 0;
    u32 r0_23 = 0;
    u32 r1_12 = 0;
    u32 r2_17 = 0;
    u32 r3_13 = 0;
    u32 r0_24 = 0;
    u32 r2_18 = 0;
    u32 r3_14 = 0;
    u32 r0_25 = 0;
    u32 r1_13 = 0;
    u32 r1_14 = 0;
    u32 r2_19 = 0;
    u32 r3_15 = 0;
    u32 r1_15 = 0;
    u32 r0_26 = 0;
    r13 = r13 - 0x148u;  // (from the original)
    r7 = r0;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fae84(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r9 = r0_1 + 0x6ad02u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_00716d80(r9, 0x6ad02u, r2_1, r3_1);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r10 = 0x8906ecu;  // (from the original)
    r6 = 0x90a3e8u;  // (from the original)
    r8 = r0_2;
    r4 = 0u;
    if (r0_2 == 0 || r0_2 >> 0x1f != (r0_2 & (r0_2 ^ r0_2)) >> 0x1f) {  // (from the original)
        goto L_25fbc4;
    }
L_25fb10:;
    r0_3 = r13 + 0xb8u;  // (from the original)
    *gptr<u16>(r13 + 0xe4u) = u16(u32(*gptr<u16>(r9 + (r4 << 1) + 4u)));  // (from the original)
    r1_1 = r13 + 0xd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_003083bc(r0_3, r1_1, 9u, r3);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u32>(r0_4) = u32(r6);
    r0_5 = r0_4 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_005f4bfc(r0_5, r1_2, r2_3, r3_2);
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r5 = r0_6 - 0xcu;  // (from the original)
    r0_7 = r0_6 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_7, 0x12u, r2_4, r3_3);  // (from the original)
    r3 = guest::cpu()->r[3];
    r0 = r5 + 0x18u;  // (from the original)
    *gptr<u16>(r5 + 0x18u) = u16(u32(*gptr<u16>(r10)));  // (from the original)
    r1 = 4u;
    do {
L_25fb58:;
        r2_5 = u32(*gptr<u16>(r10));
        res_1 = r1 - 1u;
        r1 = res_1;
        ea_1 = r0 + 2u;
        *gptr<u16>(ea_1) = u16(r2_5);
        r2_6 = u32(*gptr<u16>(r10));
        ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r2_6);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    r1_3 = r13 + 0xe4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0056d874(r5, r1_3, r2_6, r3);
    r2_7 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r1_4 = r13 + 0xb8u;  // (from the original)
    r5_1 = r7 + (r4 + (r4 << 4) + (r4 << 5) << 2);
    r0_8 = r5_1 + 0x430u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e2e50(r0_8, r1_4, r2_7, r3_4);
    r1_5 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_9 = r5_1 + 0x430u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e2f94(r0_9, r1_5, r2_8, r3_5);
    r2_2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0xb8u) = u32(r6);  // (from the original)
    r4 = r4 + 1u;
    if (s32(r4) < s32(r8)) {
        guest::preempt();
        goto L_25fb10;
    }
L_25fbc4:;
    guest::cpu()->r[13] = r13;
    call_0025f68c(r7, r8, r2_2, r3);
    r3_6 = guest::cpu()->r[3];
    r0_10 = r13 + 8u;
    r1_6 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_11 = call_003083bc(r0_10, r1_6, 0x4bu, r3_6);  // (from the original)
    r1_7 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r5 = 0x90a308u;  // (from the original)
    *gptr<u32>(r0_11) = u32(r5);
    r0_12 = r0_11 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_13 = call_005f4bfc(r0_12, r1_7, r2_9, r3_7);
    r2_10 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r4_1 = r0_13 - 0xcu;  // (from the original)
    r0_14 = r0_13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_14, 0x96u, r2_10, r3_8);  // (from the original)
    r3 = guest::cpu()->r[3];
    r0 = r4_1 + 0x18u;  // (from the original)
    *gptr<u16>(r4_1 + 0x18u) = u16(u32(*gptr<u16>(r10)));  // (from the original)
    r1 = 0x25u;  // (from the original)
    do {
L_25fc0c:;
        r2_11 = u32(*gptr<u16>(r10));
        res_2 = r1 - 1u;
        r1 = res_2;
        ea_3 = r0 + 2u;
        *gptr<u16>(ea_3) = u16(r2_11);
        r2_12 = u32(*gptr<u16>(r10));
        ea_4 = r0 + 4u;
        *gptr<u16>(ea_4) = u16(r2_12);
        r0 = ea_4;
        guest::preempt();
    } while (res_2 != 0);
    r8 = 0x95deccu;  // (from the original)
    r0_15 = *gptr<u32>(r8);
    guest::cpu()->r[13] = r13;
    call_005ea8f8(r0_15, 0u, r2_12, r3);
    r3_9 = guest::cpu()->r[3];
    r0_16 = r13 + 0xe8u;  // (from the original)
    r1_8 = r13 + 0x100u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_17 = call_003083bc(r0_16, r1_8, 9u, r3_9);
    r1_9 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    *gptr<u32>(r0_17) = u32(r6);
    r0_18 = r0_17 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_19 = call_005f4bfc(r0_18, r1_9, r2_13, r3_10);
    r2_14 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r4_2 = r0_19 - 0xcu;  // (from the original)
    r0_20 = r0_19 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_20, 0x12u, r2_14, r3_11);  // (from the original)
    r3 = guest::cpu()->r[3];
    r0 = r4_2 + 0x18u;  // (from the original)
    *gptr<u16>(r4_2 + 0x18u) = u16(u32(*gptr<u16>(r10)));  // (from the original)
    r1 = 4u;
    do {
L_25fc70:;
        r2_15 = u32(*gptr<u16>(r10));
        res_3 = r1 - 1u;
        r1 = res_3;
        ea_5 = r0 + 2u;
        *gptr<u16>(ea_5) = u16(r2_15);
        r2_16 = u32(*gptr<u16>(r10));
        ea_6 = r0 + 4u;
        *gptr<u16>(ea_6) = u16(r2_16);
        r0 = ea_6;
        guest::preempt();
    } while (res_3 != 0);
    r1_10 = *global_00aaf14c + 0x55bcu;  // (from the original)
    r0_21 = r13 + 0xe8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0056e04c(r0_21, r1_10, r2_16, r3);
    r3_12 = guest::cpu()->r[3];
    r0_22 = *gptr<u32>(*gptr<u32>(r8) + 0x14u);  // (from the original)
    r1_11 = r13 + 0xe8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005f12f4(r0_22, r1_11, 0u, r3_12);
    *gptr<u32>(r13) = u32(0u);
    r0_23 = *gptr<u32>(r8);
    r1_12 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_005ea964(r0_23, r1_12, 0x25fd54u, 0x123u);  // (from the original)
    r2_17 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_24 = *gptr<u32>(r8);
    guest::cpu()->r[13] = r13;
    call_005ea8dc(r0_24, 0u, r2_17, r3_13);
    r2_18 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_25 = r7 + 0x8c8u;  // (from the original)
    r1_13 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_005d6cc0(r0_25, r1_13, r2_18, r3_14);
    r1_14 = guest::cpu()->r[1];
    r2_19 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_005d6d28(r0_25, r1_14, r2_19, r3_15);
    r1_15 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 0xe8u) = u32(r6);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r5);
    r0_26 = r13 + 8u;
    r13 = r13 + 0x148u;  // (from the original)
    guest::cpu()->r[1] = r1_15;
    guest::cpu()->r[13] = r13;
    return r0_26;
}

}  // namespace d_0025fadc
GUEST_EXPORT(0x0025fadc, d_0025fadc::f_0025fadc);
