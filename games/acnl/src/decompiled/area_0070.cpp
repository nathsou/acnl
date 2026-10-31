// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_00700238: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00700238 {

inline constexpr guest::Function<0x006ffea4, u32(u32, u32, u32, u32)> call_006ffea4;  // (from the original)
inline constexpr guest::Function<0x007166a4, u32(u32, u32, u32, u32)> call_007166a4;  // (from the original)

u32 f_00700238(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 ea_2 = 0;
    u32 r1_3 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    u32 r3_2 = 0;
    u32 ea_6 = 0;
    u32 r0_2 = 0;
    u32 ea_7 = 0;
    u32 r2_2 = 0;
    u32 ea_8 = 0;
    u32 r3_3 = 0;
    u32 ea_9 = 0;
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    u32 r3_4 = 0;
    u32 r0_4 = 0;
    u32 ea_10 = 0;
    u32 r0_5 = 0;
    u32 ea_11 = 0;
    u32 r2_3 = 0;
    u32 ea_12 = 0;
    u32 ea_13 = 0;
    u32 r3_5 = 0;
    u32 r0_6 = 0;
    u32 ea_14 = 0;
    u32 r0_7 = 0;
    u32 ea_15 = 0;
    u32 r1_5 = 0;
    u32 ea_16 = 0;
    u32 ea_17 = 0;
    u32 r3_6 = 0;
    u32 r0_8 = 0;
    u32 ea_18 = 0;
    u32 r0_9 = 0;
    u32 ea_19 = 0;
    u32 r2_4 = 0;
    u32 ea_20 = 0;
    u32 r3_7 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_6 = 0;
    r13 = r13 - 0x40u;  // (from the original)
    r1_1 = *gptr<u32>(r13 + 0x40u);  // (from the original)
    *gptr<u32>(r13) = u32(r13 + 0x14u);  // (from the original)
    *gptr<u32>(r13 + 4) = u32(r1_1);
    r3_1 = r13 + 0x18u;  // (from the original)
    r2_1 = r13 + 0x20u;  // (from the original)
    r1_2 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_007166a4(r3, r1_2, r2_1, r3_1);
    ea_1 = r13 + 0x1cu;  // (from the original)
    r0_1 = *gptr<u32>(ea_1);
    ea_2 = r13 + 0x14u;  // (from the original)
    r1_3 = *gptr<u32>(ea_2);
    ea_3 = r13 + 4u;
    *gptr<u32>(ea_3) = u32(r0_1 + 2u);
    ea_4 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(ea_4) = u32(1u);
    ea_5 = r13 + 8u;
    *gptr<u32>(ea_5) = u32(r1_3);
    *gptr<u32>(ea_5 + 4) = u32(0u);
    r3_2 = r0_1 - 1u;
    *gptr<u32>(r13) = u32(*gptr<u32>(r13 + 0x20u));  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006ffea4(r0, r1, r2, r3_2);
    ea_6 = r13 + 0x1cu;  // (from the original)
    r0_2 = *gptr<u32>(ea_6);
    ea_7 = r13 + 0x14u;  // (from the original)
    r2_2 = *gptr<u32>(ea_7) - 1u;
    ea_8 = r13 + 4u;
    *gptr<u32>(ea_8) = u32(r0_2 + 1u);
    *gptr<u32>(ea_8 + 4) = u32(r2_2);
    *gptr<u32>(ea_8 + 8) = u32(1u);
    r3_3 = r0_2 - 1u;
    *gptr<u32>(r13) = u32(*gptr<u32>(r13 + 0x20u) - 1u);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(1u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006ffea4(r0, r1, r2, r3_3);
    ea_9 = r13 + 0x14u;  // (from the original)
    r0_3 = *gptr<u32>(ea_9);
    r1_4 = *gptr<u32>(ea_9 + 4);
    *gptr<u32>(r13) = u32(r0_3 - 2u);
    *gptr<u32>(r13 + 4) = u32(r1_4);
    *gptr<u32>(r13 + 8) = u32(r0_3 + 1u);
    *gptr<u32>(r13 + 0xc) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x10) = u32(4u);  // (from the original)
    r3_4 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    r0_4 = r0 + 2u;
    guest::cpu()->r[13] = r13;
    call_006ffea4(r0_4, r1, r2, r3_4);
    ea_10 = r13 + 0x14u;  // (from the original)
    r0_5 = *gptr<u32>(ea_10);
    ea_11 = r13 + 0x18u;  // (from the original)
    r2_3 = *gptr<u32>(ea_11) - 1u;
    ea_12 = r13;
    *gptr<u32>(ea_12) = u32(r0_5 - 3u);
    *gptr<u32>(ea_12 + 4) = u32(r2_3);
    ea_13 = r13 + 8u;
    *gptr<u32>(ea_13) = u32(r0_5 - 1u);
    *gptr<u32>(ea_13 + 4) = u32(1u);
    *gptr<u32>(ea_13 + 8) = u32(4u);
    r3_5 = *gptr<u32>(r13 + 0x1cu) - 1u;  // (from the original)
    r0_6 = r0 + 2u;
    guest::cpu()->r[13] = r13;
    call_006ffea4(r0_6, r1, r2, r3_5);
    ea_14 = r13 + 0x18u;  // (from the original)
    r0_7 = *gptr<u32>(ea_14);
    ea_15 = r13 + 0x14u;  // (from the original)
    r1_5 = *gptr<u32>(ea_15);
    ea_16 = r13 + 4u;
    *gptr<u32>(ea_16) = u32(r0_7 + 1u);
    ea_17 = r13 + 8u;
    *gptr<u32>(ea_17) = u32(r1_5);
    *gptr<u32>(ea_17 + 4) = u32(0u);
    *gptr<u32>(ea_17 + 8) = u32(2u);
    r3_6 = r0_7 - 2u;
    r0_8 = r0 + 4u;
    *gptr<u32>(r13) = u32(*gptr<u32>(r13 + 0x20u));  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006ffea4(r0_8, r1, r2, r3_6);
    ea_18 = r13 + 0x18u;  // (from the original)
    r0_9 = *gptr<u32>(ea_18);
    ea_19 = r13 + 0x14u;  // (from the original)
    r2_4 = *gptr<u32>(ea_19) - 1u;
    ea_20 = r13 + 4u;
    *gptr<u32>(ea_20) = u32(r0_9 - 1u);
    *gptr<u32>(ea_20 + 4) = u32(r2_4);
    *gptr<u32>(ea_20 + 8) = u32(1u);
    *gptr<u32>(ea_20 + 0xc) = u32(2u);  // (from the original)
    r3_7 = r0_9 - 3u;
    r0_10 = r0 + 4u;
    *gptr<u32>(r13) = u32(*gptr<u32>(r13 + 0x20u) - 1u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_11 = call_006ffea4(r0_10, r1, r2, r3_7);
    r1_6 = guest::cpu()->r[1];
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    return r0_11;
}

}  // namespace d_00700238
GUEST_EXPORT(0x00700238, d_00700238::f_00700238);

// f_00700558: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00700558 {

inline guest::global<u32, 0x007005d4> global_007005d4;  // (from the original)
inline guest::global<u32, 0x007005dc> global_007005dc;  // (from the original)
inline guest::global<u32, 0x007005e0> global_007005e0;  // (from the original)
inline guest::global<u32, 0x007005e8> global_007005e8;  // (from the original)
inline guest::global<u32, 0x007005f0> global_007005f0;  // (from the original)

u32 f_00700558(u32 r0, u32 r1, float S0_unused, float S1) {
    float S0_1 = 0;
    u32 r1_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S1_2 = 0;
    float S0_2 = 0;
    u32 r0_1 = 0;
    float S0_3 = 0;
    u32 r0_2 = 0;
    S0_1 = std::bit_cast<float>(*global_007005d4);
    if (r1 >= 0x53u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r1_1 = 0x868888u + (r1 + (r1 << 2) << 4);  // (from the original)
    S1_1 = std::bit_cast<float>(*gptr<u32>(r1_1 + 0x40u));  // (from the original)
    S2_1 = float(std::bit_cast<u32>(std::bit_cast<float>(u32(*gptr<u16>(r1_1 + 0x3cu)))));  // (from the original)
    if (u32(S1_1 == std::bit_cast<float>(*global_007005dc))) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0;
    }
    S1_2 = S1_1 * std::bit_cast<float>(*global_007005e0);
    S0_2 = (float(std::bit_cast<u32>(std::bit_cast<float>(r0))) - S2_1) / S1_2 + S0_1;
    r0_1 = std::bit_cast<u32>(S0_2);
    if (s32(0x3f333333u) > s32(r0_1)) {  // (from the original)
        S0_3 = std::bit_cast<float>(*global_007005e8);
        guest::cpu()->r[1] = 0x3f333333u;  // (from the original)
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_2;
        return r0_1;
    }
    r0_2 = std::bit_cast<u32>(S0_2);
    if (s32(0x3fa66666u) < s32(r0_2)) {  // (from the original)
        S0_2 = std::bit_cast<float>(*global_007005f0);
    }
    guest::cpu()->r[1] = 0x3fa66666u;  // (from the original)
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return r0_2;
}

}  // namespace d_00700558
GUEST_EXPORT(0x00700558, d_00700558::f_00700558);

// f_00700974: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00700974 {

struct __attribute__((packed)) Object_00700974_0 {
    u8 unknown_0[0x7];  // (not used here)
    u8 byte_7;
};
GUEST_OFFSET(Object_00700974_0, byte_7, 0x7);  // (from the original)


u32 f_00700974(gptr<Object_00700974_0> arg0) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r0_2 = 0;
    r0_1 = u32(s32(s8(arg0->byte_7)));
    r1_1 = r0_1 - 4u;
    if (r1_1 < 4u) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    r1_2 = r0_1 - 8u;
    if (r1_2 < 8u) {
        guest::cpu()->r[1] = r1_2;
        return 2u;
    }
    if (r0_1 == 0x10u) {  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return 3u;
    }
    r1_3 = r0_1 - 0x11u;  // (from the original)
    if (r1_3 < 2u) {
        guest::cpu()->r[1] = r1_3;
        return 4u;
    }
    if (r0_1 - 0x13u >= 4u) {  // (from the original)
        r0_2 = 0u;
    } else {
        r0_2 = 5u;
    }
    guest::cpu()->r[1] = r1_3;
    return r0_2;
}

}  // namespace d_00700974
GUEST_EXPORT(0x00700974, d_00700974::f_00700974);

// f_00700adc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00700adc {

inline constexpr guest::Function<0x006d9058, u32(u32, u32, u32, u32)> call_006d9058;  // (from the original)

u32 f_00700adc(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_006d9058(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = r0_1 & 0xffu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0_2;
}

}  // namespace d_00700adc
GUEST_EXPORT(0x00700adc, d_00700adc::f_00700adc);

// f_00700cdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00700cdc {

inline constexpr guest::Function<0x002fca6c, u32(u32, u32, u32, u32)> call_002fca6c;  // (from the original)
inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x002fccdc, u32(u32, u32, u32, u32)> call_002fccdc;  // (from the original)
inline constexpr guest::Function<0x002fe7a0, u32(u32, u32, u32, u32)> call_002fe7a0;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)
inline constexpr guest::Function<0x006c8560, u32(u32, u32, u32, u32)> call_006c8560;  // (from the original)
inline constexpr guest::Function<0x007529d8, u32(u32, u32, u32, u32)> call_007529d8;  // (from the original)
inline constexpr guest::Function<0x00768dc4, u32(u32, u32, u32, u32)> call_00768dc4;  // (from the original)
inline constexpr guest::Function<0x007698a4, u32(u32, u32, u32, u32)> call_007698a4;  // (from the original)

u32 f_00700cdc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r2_1 = 0;
    u32 r3_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r2_2 = 0;
    u32 r3_5 = 0;
    u32 r0_7 = 0;
    u32 r2_3 = 0;
    u32 r3_6 = 0;
    u32 r0_8 = 0;
    u32 r2_4 = 0;
    u32 r3_7 = 0;
    u32 r0_9 = 0;
    u32 r2_5 = 0;
    u32 r3_8 = 0;
    u32 r0_10 = 0;
    u32 r2_6 = 0;
    u32 r3_9 = 0;
    u32 r0_11 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_006a5e34(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_700db4;
    }
    r0_2 = call_007529d8(r0_1, r0, r1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_700db4;
    }
    r0_3 = call_006c8560(r0, r1, 0u, r3_2);
    r1_1 = guest::cpu()->r[1];
    r3_3 = guest::cpu()->r[3];
    if (r0_3 != 0) {
        goto L_700db4;
    }
    r0_4 = call_002fca6c(r0, r1, 0u, r3_3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_4 != 0) {
        goto L_700db4;
    }
    r0_5 = call_006a5e34(r0_4, r1_1, r2_1, r3_4);
    r1_1 = guest::cpu()->r[1];
    if (r0_5 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_5;
    }
    r0_6 = call_002feb00(r0_5, r0, r1, 0u);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_6 == 0) {
        goto L_700db4;
    }
    r0_7 = call_002fe7a0(r0_6, r1_1, r2_2, r3_5);
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if (r0_7 != 0) {
        goto L_700db4;
    }
    r0_8 = call_007698a4(r0_6, r1_1, r2_3, r3_6);
    r1_1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r0_8 != 0) {
        goto L_700db4;
    }
    r0_9 = call_00768dc4(r0_6, 0u, r2_4, r3_7);
    r1_1 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    if (r0_9 != 0) {
        goto L_700db4;
    }
    r0_10 = call_002fccdc(r0_6, r1_1, r2_5, r3_8);
    r1_1 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    if (r0_10 == 0xau) {  // (from the original)
        goto L_700db4;
    }
    r0_11 = call_002fcb84(r0_6, 0x9eu, r2_6, r3_9);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_11 == 0) {
        r0_5 = 1u;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_5;
    }
L_700db4:;
    r0_5 = 0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_5;
}

}  // namespace d_00700cdc
GUEST_EXPORT(0x00700cdc, d_00700cdc::f_00700cdc);

// f_00700f58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00700f58 {

inline guest::global<u32, 0x0095c6d0> global_0095c6d0;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x0076eb60, u32(u32, u32, u32, u32)> call_0076eb60;  // (from the original)

u32 f_00700f58(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r2_3 = 0;
    u32 r0_7 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r2_5 = 0;
    u32 r0_11 = 0;
    u32 r1_4 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_5 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    r0_2 = call_002f74e0(0x40000u, r0_1, r2_1, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    if (r0_2 == 0) {
        goto L_700fd8;
    }
    r0_3 = u32(s32(s8(*gptr<u8>(r0 + 7u))));
    r1_2 = r0_3 - 4u;
    if (r1_2 < 4u) {
        r0_4 = 1u;
        r0_5 = 0x86e81cu + ((r0_4 << 5) - r0_4 << 2);  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return r0_5;
    }
    r1_2 = r0_3 - 8u;
    if (r1_2 < 8u) {
        r0_4 = 2u;
        r0_5 = 0x86e81cu + ((r0_4 << 5) - r0_4 << 2);  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return r0_5;
    }
    if (r0_3 == 0x10u) {  // (from the original)
        r0_4 = 3u;
        r0_5 = 0x86e81cu + ((r0_4 << 5) - r0_4 << 2);  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return r0_5;
    }
    r1_2 = r0_3 - 0x11u;  // (from the original)
    if (r1_2 < 2u) {
        r0_4 = 4u;
        r0_5 = 0x86e81cu + ((r0_4 << 5) - r0_4 << 2);  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return r0_5;
    }
    if (r0_3 - 0x13u >= 4u) {  // (from the original)
        r0_4 = 0u;
    } else {
        r0_4 = 5u;
    }
    r0_5 = 0x86e81cu + ((r0_4 << 5) - r0_4 << 2);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0_5;
L_700fd8:;
    r0_6 = call_002f74c8(r0_2, r1_1, r2_2, guest::cpu()->r[3]);
    r2_3 = guest::cpu()->r[2];
    r0_7 = call_002f74e0(0x20000u, r0_6, r2_3, guest::cpu()->r[3]);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    if (r0_7 == 0) {
        goto L_701074;
    }
    r0_8 = *global_0095c6d0 + 0x10u;  // (from the original)
    r0_9 = call_0076eb60(r0_8, r1_3, r2_4, guest::cpu()->r[3]);
    r0_10 = u32(s32(s8(*gptr<u8>(r0 + 7u))));
    if (r0_10 - 4u < 4u) {
        r2_5 = 1u;
        goto L_70105c;
    }
    if (r0_10 - 8u < 8u) {
        r2_5 = 2u;
        goto L_70105c;
    }
    if (r0_10 == 0x10u) {  // (from the original)
        r2_5 = 3u;
        goto L_70105c;
    }
    if (r0_10 - 0x11u < 2u) {  // (from the original)
        r2_5 = 4u;
        goto L_70105c;
    }
    if (r0_10 - 0x13u >= 4u) {  // (from the original)
        r2_5 = 0u;
    } else {
        r2_5 = 5u;
    }
L_70105c:;
    r0_11 = (r0_9 << 5) - r0_9;
    r1_4 = (r2_5 << 5) - r2_5;
    r0_12 = 0x86e81cu + (r0_11 + (r0_11 << 1) << 3) + (r1_4 << 2);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    return r0_12;
L_701074:;
    r0_13 = u32(*gptr<u8>(r0 + 4u)) - 1u & 0xffu;  // (from the original)
    r0_14 = r0_13 + (r0_13 << 5);
    r1_5 = 0x86c2fcu + (r0_14 + (r0_14 << 1) << 3);  // (from the original)
    r0_15 = u32(s32(s8(*gptr<u8>(r0 + 7u))));
    if (r0_15 - 4u < 4u) {
        r0_16 = 1u;
        r0_17 = r1_5 + (r0_16 + (r0_16 << 5) << 2);
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_5;
        return r0_17;
    }
    if (r0_15 - 8u < 8u) {
        r0_16 = 2u;
        r0_17 = r1_5 + (r0_16 + (r0_16 << 5) << 2);
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_5;
        return r0_17;
    }
    if (r0_15 == 0x10u) {  // (from the original)
        r0_16 = 3u;
        r0_17 = r1_5 + (r0_16 + (r0_16 << 5) << 2);
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_5;
        return r0_17;
    }
    if (r0_15 - 0x11u < 2u) {  // (from the original)
        r0_16 = 4u;
        r0_17 = r1_5 + (r0_16 + (r0_16 << 5) << 2);
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_5;
        return r0_17;
    }
    if (r0_15 - 0x13u >= 4u) {  // (from the original)
        r0_16 = 0u;
    } else {
        r0_16 = 5u;
    }
    r0_17 = r1_5 + (r0_16 + (r0_16 << 5) << 2);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    return r0_17;
}

}  // namespace d_00700f58
GUEST_EXPORT(0x00700f58, d_00700f58::f_00700f58);

// f_007010f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007010f8 {

inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x006d9058, u32(u32, u32, u32, u32)> call_006d9058;  // (from the original)

u32 f_007010f8(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_002fcb34(r2, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_1 != 0x24u) {  // (from the original)
        r0_2 = 0u;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    r0_3 = call_006d9058(r2, r1_1, r2_1, guest::cpu()->r[3]);
    r0_4 = r0_3 & 0xffu;  // (from the original)
    r0_5 = 0x868888u + (r0_4 + (r0_4 << 2) << 4);  // (from the original)
    r1_1 = u32(*gptr<u8>(r0_5 + 0x4au));  // (from the original)
    *gptr<u32>(r0) = u32(r1_1);
    *gptr<u32>(r1) = u32(u32(*gptr<u8>(r0_5 + 0x4bu)));  // (from the original)
    r0_2 = 1u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_007010f8
GUEST_EXPORT(0x007010f8, d_007010f8::f_007010f8);

// f_007011e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007011e8 {

inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x006bd2c8, u32(u32, u32, u32, u32)> call_006bd2c8;  // (from the original)
inline constexpr guest::Function<0x007701b8, u32(u32, u32, u32, u32)> call_007701b8;  // (from the original)

u32 f_007011e8(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r3_2 = 0;
    u32 r4_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r3_4 = 0;
    u32 r4_2 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb94c(r0, r1, guest::cpu()->r[2], r3);
    r1_1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_701240;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fcb34(r0, r1_1, guest::cpu()->r[2], r3_1);
    r1_1 = guest::cpu()->r[1];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 != 0x24u) {  // (from the original)
        goto L_701240;
    }
    r4_1 = r0_1 + 0x6c20u;  // (from the original)
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    r0_4 = call_002fc934(r0_3, r0, guest::cpu()->r[2], r3_2);
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_5 = call_007701b8(r4_1, r0_4, guest::cpu()->r[2], r3_3);
    r1_1 = guest::cpu()->r[1];
    r3_4 = guest::cpu()->r[3];
    r4_2 = r0_5 ^ 1u;
    if (r4_2 == 0) {
        goto L_701248;
    }
L_701240:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return 0u;
L_701248:;
    guest::cpu()->r[13] = r13;
    r0_6 = call_006bd2c8(r0_1, r0, guest::cpu()->r[2], r3_4);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_6;
}

}  // namespace d_007011e8
GUEST_EXPORT(0x007011e8, d_007011e8::f_007011e8);

// f_007017a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007017a8 {

inline guest::global<u32, 0x0095321c> global_0095321c;  // (from the original)

u32 f_007017a8(u32 r0) {
    u32 r0_1 = 0;
    if (r0 >= 3u) {
        r0_1 = *global_0095321c;
    } else {
        r0_1 = *gptr<u32>(0x95321cu + (r0 << 2));  // (from the original)
    }
    guest::cpu()->r[1] = 0x95321cu;  // (from the original)
    return r0_1;
}

}  // namespace d_007017a8
GUEST_EXPORT(0x007017a8, d_007017a8::f_007017a8);

// f_007017c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007017c0 {

inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x006bd56c, u32(u32, u32, u32, u32)> call_006bd56c;  // (from the original)

u32 f_007017c0(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r4_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_002fb94c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r4_1 = r0_1;
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    r0_1 = call_002fcb34(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0x24u) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_006bd56c(r4_1, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_007017c0
GUEST_EXPORT(0x007017c0, d_007017c0::f_007017c0);

// f_007017f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007017f8 {

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x00700f58, u32(u32, u32, u32, u32)> call_00700f58;  // (from the original)
inline constexpr guest::Function<0x00701694, u32(u32, u32, u32, u32)> call_00701694;  // (from the original)

u32 f_007017f8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r7 = guest::cpu()->r[7];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 cf_1 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r8_1 = 0;
    u32 res_1 = 0;
    u32 ea_1 = 0;
    u32 r0_3 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r4 = r0;
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u32>(r13 + 8u) = u32(0u);
    *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
    *gptr<u8>(r13 + 4u) = u8(0u);
    *gptr<u8>(r13 + 8u) = u8(0u);
    *gptr<u8>(r13 + 0xcu) = u8(0u);  // (from the original)
    *gptr<u16>(r13 + 6u) = u16(0u);
    *gptr<u16>(r13 + 0xau) = u16(0u);  // (from the original)
    *gptr<u16>(r13 + 0xeu) = u16(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb378(0u, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_00700f58(r0_1, r1_1, r2_1, r3_1);
    r3 = r0_2;
    r1 = 0u;
    r0 = r13 + 4u;
L_701840:;
    r7 = u32(*gptr<u16>(r3 + 2u));
    r12 = r7 - r1;
    r1 = 2u;
L_70184c:;
    r2 = u32(*gptr<u16>(r0 + (r1 << 2) + 2u));
    cf_1 = r2 >= r12;
    if (!cf_1) {
        r2 = u32(*gptr<u8>(r3));
        cf_1 = r2 >= 0x53u;  // (from the original)
    }
    if (cf_1) {
        goto L_7018a4;
    }
    nf_1 = r1 >> 0x1f;  // (from the original)
    zf_1 = r1 == 0;
    if (!zf_1 && nf_1 == 0u) {
        r2 = 0u;
    }
    if (zf_1 || nf_1 != 0u) {
        goto L_701890;
    }
    do {
L_701870:;
        r5_1 = r0 + (r2 << 2);
        r6_1 = u32(*gptr<u16>(r5_1 + 6u));
        r8_1 = u32(*gptr<u8>(r5_1 + 4u));
        *gptr<u16>(r5_1 + 2u) = u16(r6_1);
        *gptr<u8>(r0 + (r2 << 2)) = u8(r8_1);
        r2 = r2 + 1u;
        guest::preempt();
    } while (s32(r1) > s32(r2));
L_701890:;
    *gptr<u16>(r0 + (r1 << 2) + 2u) = u16(r12);
    r2 = u32(*gptr<u8>(r3));
    *gptr<u8>(r0 + (r1 << 2)) = u8(r2);
    goto L_7018b0;
L_7018a4:;
    r1 = r1 - 1u;
    res_1 = r1 + 1u;
    if (res_1 != 0 && res_1 >> 0x1f == ((r1 ^ res_1) & (1u ^ res_1)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_70184c;
    }
L_7018b0:;
    if (r7 != 0x3e8u) {  // (from the original)
        ea_1 = r3 + 4u;
        r3 = ea_1;
        r2 = u32(*gptr<u8>(ea_1));
        r1 = r7;
        if (r2 != 0x53u) {  // (from the original)
            guest::preempt();
            goto L_701840;
        }
    }
    *gptr<u8>(r13) = u8(u32(*gptr<u8>(r13 + 4u)));
    *gptr<u8>(r13 + 1u) = u8(u32(*gptr<u8>(r13 + 8u)));
    *gptr<u8>(r13 + 2u) = u8(u32(*gptr<u8>(r13 + 0xcu)));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_002ff6f8(3u, r1, r2, r3);
    r3_2 = guest::cpu()->r[3];
    r1_2 = u32(*gptr<u8>(r13 + r0_3));
    guest::cpu()->r[13] = r13;
    r0_4 = call_00701694(r4, r1_2, 0u, r3_2);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_4;
}

}  // namespace d_007017f8
GUEST_EXPORT(0x007017f8, d_007017f8::f_007017f8);

// f_00701900: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00701900 {

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x00700f58, u32(u32, u32, u32, u32)> call_00700f58;  // (from the original)

u32 f_00701900(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 cf_1 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 r5_1 = 0;
    u32 res_1 = 0;
    u32 ea_1 = 0;
    u32 r0_3 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r4 = r0;
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u32>(r13 + 8u) = u32(0u);
    *gptr<u8>(r13) = u8(0u);
    *gptr<u8>(r13 + 4u) = u8(0u);
    *gptr<u8>(r13 + 8u) = u8(0u);
    *gptr<u16>(r13 + 2u) = u16(0u);
    *gptr<u16>(r13 + 6u) = u16(0u);
    *gptr<u16>(r13 + 0xau) = u16(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb378(0u, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_00700f58(r0_1, r1_1, r2_1, r3_1);
    r3 = r0_2;
    r1 = 0u;
    r0 = r13;
L_701948:;
    r6 = u32(*gptr<u16>(r3 + 2u));
    r12 = r6 - r1;
    r1 = 2u;
L_701954:;
    r2 = u32(*gptr<u16>(r0 + (r1 << 2) + 2u));
    cf_1 = r2 >= r12;
    if (!cf_1) {
        r2 = u32(*gptr<u8>(r3));
        cf_1 = r2 >= 0x53u;  // (from the original)
    }
    if (cf_1) {
        goto L_7019ac;
    }
    nf_1 = r1 >> 0x1f;  // (from the original)
    zf_1 = r1 == 0;
    if (!zf_1 && nf_1 == 0u) {
        r2 = 0u;
    }
    if (zf_1 || nf_1 != 0u) {
        goto L_701998;
    }
    do {
L_701978:;
        r14 = r0 + (r2 << 2);
        r5_1 = u32(*gptr<u8>(r14 + 4u));
        *gptr<u16>(r14 + 2u) = u16(u32(*gptr<u16>(r14 + 6u)));
        *gptr<u8>(r0 + (r2 << 2)) = u8(r5_1);
        r2 = r2 + 1u;
        guest::preempt();
    } while (s32(r1) > s32(r2));
L_701998:;
    *gptr<u16>(r0 + (r1 << 2) + 2u) = u16(r12);
    *gptr<u8>(r0 + (r1 << 2)) = u8(u32(*gptr<u8>(r3)));
    goto L_7019b8;
L_7019ac:;
    r1 = r1 - 1u;
    res_1 = r1 + 1u;
    if (res_1 != 0 && res_1 >> 0x1f == ((r1 ^ res_1) & (1u ^ res_1)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_701954;
    }
L_7019b8:;
    if (r6 != 0x3e8u) {  // (from the original)
        ea_1 = r3 + 4u;
        r3 = ea_1;
        r1 = r6;
        if (u32(*gptr<u8>(ea_1)) != 0x53u) {  // (from the original)
            guest::preempt();
            goto L_701948;
        }
    }
    *gptr<u8>(r4) = u8(u32(*gptr<u8>(r13)));
    *gptr<u8>(r4 + 1u) = u8(u32(*gptr<u8>(r13 + 4u)));
    r0_3 = u32(*gptr<u8>(r13 + 8u));
    *gptr<u8>(r4 + 2u) = u8(r0_3);
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_00701900
GUEST_EXPORT(0x00701900, d_00701900::f_00701900);

// f_007019f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007019f0 {

struct __attribute__((packed)) Object_007019f0_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_007019f0_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_007019f0_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_007019f0_1, word_0, 0x0);  // (from the original)


void f_007019f0(gptr<Object_007019f0_0> arg0, gptr<Object_007019f0_1> arg1, u32 r2) {
    u32 res_1 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r2_2 = 0;
    u32 r2_3 = 0;
    u32 res_2 = 0;
    u32 nf_1 = 0;
    u32 vf_1 = 0;
    res_1 = r2 - 0x48u;  // (from the original)
    r3_1 = 0x24u;  // (from the original)
    if (res_1 >> 0x1f != ((r2 ^ 0x48u) & (r2 ^ res_1)) >> 0x1f) {  // (from the original)
        arg0->word_0 = u32(r2);
        arg1->word_0 = u32(r3_1);
        return;
    }
    if (s32(r2) < s32(0x49u)) {  // (from the original)
        r2_1 = r2 - 0x48u;  // (from the original)
        arg0->word_0 = u32(r2_1);
        arg1->word_0 = u32(0x26u);  // (from the original)
        return;
    }
    if (s32(r2) < s32(0x51u)) {  // (from the original)
        r2_2 = r2 - 0x49u;  // (from the original)
        arg0->word_0 = u32(r2_2);
        arg1->word_0 = u32(0x25u);  // (from the original)
        return;
    }
    if (s32(r2) < s32(0x52u)) {  // (from the original)
        r2_3 = r2 - 0x51u;  // (from the original)
        arg0->word_0 = u32(r2_3);
        arg1->word_0 = u32(0x98u);  // (from the original)
        return;
    }
    res_2 = r2 - 0x53u;  // (from the original)
    nf_1 = res_2 >> 0x1f;  // (from the original)
    vf_1 = ((r2 ^ 0x53u) & (r2 ^ res_2)) >> 0x1f;  // (from the original)
    if (nf_1 != vf_1) {
        r2 = r2 - 0x52u;  // (from the original)
        r3_1 = 0x9au;  // (from the original)
    }
    if (nf_1 == vf_1) {
        r2 = 0u;
    }
    arg0->word_0 = u32(r2);
    arg1->word_0 = u32(r3_1);
    return;
}

}  // namespace d_007019f0
GUEST_EXPORT(0x007019f0, d_007019f0::f_007019f0);

// f_00706368: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00706368 {

inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32, u32)> call_0052f200;  // (from the original)
inline constexpr guest::Function<0x0055cb58, u32(u32, u32, u32, u32)> call_0055cb58;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)

u32 f_00706368(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r1_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r7_1 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r1_4 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r1_5 = 0;
    u32 r0_13 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r1_6 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r8_1 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r1_7 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    r13 = r13 - 0x60u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r9 = r2;
    r8 = r3;
    r0_1 = r13 + 0x38u;  // (from the original)
    *gptr<u32>(r0_1) = u32(4u);
    *gptr<u32>(r0_1 + 4) = u32(3u);
    r0_2 = r13 + 0x30u;  // (from the original)
    *gptr<u32>(r0_2) = u32(2u);
    *gptr<u32>(r0_2 + 4) = u32(2u);
    r0_3 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0052f200(r0_3, r0_2, r0_1, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r1_1 = r13 + 0x10u;  // (from the original)
    r0_4 = r13;
    guest::cpu()->r[13] = r13;
    call_0074824c(r0_4, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r6 = 0u;
    r1_2 = r13 + 0x10u;  // (from the original)
    r0_5 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00748284(r0_5, r1_2, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r1_3 = r13;
    r0_6 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_7 = call_007481ec(r0_6, r1_3, r2_3, r3_3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_7 == 0) {
        goto L_7064f8;
    }
    do {
L_7063f4:;
        r7_1 = *gptr<u32>(r13 + 0x28u);  // (from the original)
        r0_8 = *gptr<u32>(r13 + 0x2cu);  // (from the original)
        if (u32(*gptr<u8>(r7_1 + ((r0_8 << 3) - r0_8 + r4))) == r5) {
            r6 = r6 + 1u;
        }
        r0_9 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0052f144(r0_9, r1, r2, r3);
        r2_4 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        r1_4 = r13;
        r0_10 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_11 = call_007481ec(r0_10, r1_4, r2_4, r3_4);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::preempt();
    } while (r0_11 != 0);
    if (r6 == 0) {
        goto L_706500;
    }
    r7 = 0u;
    guest::cpu()->r[13] = r13;
    r0_12 = call_0055cb58(r8, r1, r2, r3);
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r6 = u32(u64(r0_12) * r6 >> 0x20);  // (from the original)
    r1_5 = r13 + 0x10u;  // (from the original)
    r0_13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00748284(r0_13, r1_5, r2_5, r3_5);
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r1_6 = r13;
    r0_14 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_15 = call_007481ec(r0_14, r1_6, r2_6, r3_6);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_15 == 0) {
        goto L_706540;
    }
L_706488:;
    r8_1 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    r0_16 = *gptr<u32>(r13 + 0x2cu);  // (from the original)
    if (u32(*gptr<u8>(r8_1 + ((r0_16 << 3) - r0_16 + r4))) != r5) {
        goto L_706520;
    }
    if (r7 != r6) {
        r7 = r7 + 1u;
        goto L_706520;
    }
    r0_17 = *gptr<u32>(r13 + 0x2cu);  // (from the original)
    *gptr<u8>(*gptr<u32>(r13 + 0x28u) + ((r0_17 << 3) - r0_17 + r4)) = u8(r9);  // (from the original)
    goto L_706548;
L_7064f8:;
L_706500:;
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0u;
L_706520:;
    r0_18 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0052f144(r0_18, r1, r2, r3);
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r1_7 = r13;
    r0_19 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_20 = call_007481ec(r0_19, r1_7, r2_7, r3_7);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_20 != 0) {
        guest::preempt();
        goto L_706488;
    }
L_706540:;
L_706548:;
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_00706368
GUEST_EXPORT(0x00706368, d_00706368::f_00706368);

// f_007075b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007075b4 {

inline guest::global<u32, 0x0085f2e0> global_0085f2e0;  // (from the original)
inline guest::global<u32, 0x0085f2e4> global_0085f2e4;  // (from the original)
inline guest::global<u32, 0x0085f2ec> global_0085f2ec;  // (from the original)
inline constexpr guest::Function<0x0052ed04, u32(u32, u32, u32, u32)> call_0052ed04;  // (from the original)
inline constexpr guest::Function<0x0052edfc, u32(u32, u32, u32, u32)> call_0052edfc;  // (from the original)
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> call_0075291c;  // (from the original)
inline constexpr guest::Function<0x007667d0, u32(u32, u32, u32, u32)> call_007667d0;  // (from the original)
inline constexpr guest::Function<0x0076689c, u32(u32, u32, u32, u32)> call_0076689c;  // (from the original)
inline constexpr guest::Function<0x00766968, u32(u32, u32, u32, u32)> call_00766968;  // (from the original)
inline constexpr guest::Function<0x00766a34, u32(u32, u32, u32, u32)> call_00766a34;  // (from the original)

u32 f_007075b4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r3_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r6_1 = 0;
    u32 r8_1 = 0;
    u32 r7_1 = 0;
    u32 r3_7 = 0;
    u32 r6_2 = 0;
    u32 r1_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 r6_3 = 0;
    u32 r7_2 = 0;
    u32 r8_2 = 0;
    u32 r3_8 = 0;
    u32 r6_4 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    u32 r6_5 = 0;
    u32 r8_3 = 0;
    u32 r7_3 = 0;
    u32 r3_9 = 0;
    u32 r6_6 = 0;
    u32 r1_4 = 0;
    u32 ea_7 = 0;
    u32 ea_8 = 0;
    u32 r6_7 = 0;
    u32 r8_4 = 0;
    u32 r7_4 = 0;
    u32 r3_10 = 0;
    u32 r6_8 = 0;
    u32 r1_5 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r4 = r0;
    r0_1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_0052edfc(r0_1, r2, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r13;
    guest::cpu()->r[13] = r13;
    call_0052ed04(r0_2, r2, r2_1, r3_1);
    r3_2 = r13 + 8u;
    r1_1 = *gptr<u32>(r3_2);
    r2_2 = *gptr<u32>(r3_2 + 4);
    guest::cpu()->r[13] = r13;
    r0_3 = call_0075291c(r1, r1_1, r2_2, r3_2);
    r1 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        goto L_707680;
    }
    if (r3 != 0) {
        if (r3 == 1u) {
            goto L_707638;
        }
        if (r3 == 2u) {
            goto L_707650;
        }
        if (r3 != 3u) {
            goto L_70779c;
        }
        goto L_707668;
    }
    r2_3 = *gptr<u32>(r13);
    r3_3 = *gptr<u32>(r13 + 4);
    guest::cpu()->r[13] = r13;
    call_007667d0(r0_3, r4, r2_3, r3_3);
    r1 = guest::cpu()->r[1];
    goto L_70779c;
L_707638:;
    r2_4 = *gptr<u32>(r13);
    r3_4 = *gptr<u32>(r13 + 4);
    guest::cpu()->r[13] = r13;
    call_00766968(r0_3, r4, r2_4, r3_4);
    r1 = guest::cpu()->r[1];
    goto L_70779c;
L_707650:;
    r2_5 = *gptr<u32>(r13);
    r3_5 = *gptr<u32>(r13 + 4);
    guest::cpu()->r[13] = r13;
    call_0076689c(r0_3, r4, r2_5, r3_5);
    r1 = guest::cpu()->r[1];
    goto L_70779c;
L_707668:;
    r2_6 = *gptr<u32>(r13);
    r3_6 = *gptr<u32>(r13 + 4);
    guest::cpu()->r[13] = r13;
    call_00766a34(r0_3, r4, r2_6, r3_6);
    r1 = guest::cpu()->r[1];
    goto L_70779c;
L_707680:;
    r1 = 0x85f2e8u;  // (from the original)
    if (r3 != 0) {
        if (r3 == 1u) {
            goto L_70772c;
        }
        if (r3 == 2u) {
            goto L_7077b8;
        }
        if (r3 != 3u) {
            goto L_70779c;
        }
        goto L_707820;
    }
    ea_1 = r4 + 4u;
    *gptr<u32>(ea_1) = u32(0u);
    ea_2 = r4 + 8u;
    *gptr<u32>(ea_2) = u32(0x2710u);  // (from the original)
    *gptr<u32>(ea_2 + 4) = u32(0u);
    r6_1 = *gptr<u32>(r2);
    r8_1 = *global_0085f2e0;
    r7_1 = *gptr<u32>(r1);
    *gptr<u32>(r4 + 0x18u) = u32(0x2710u);  // (from the original)
    *gptr<u32>(r4 + 0x14u) = u32(r8_1 * r6_1 + r7_1);  // (from the original)
    *gptr<u32>(r4 + 0x1cu) = u32(*gptr<u32>(r2 + 4u) * *global_0085f2e4 - *global_0085f2ec);  // (from the original)
    r3_7 = *global_0085f2e0;
    r6_2 = *gptr<u32>(r2);
    r1_2 = *gptr<u32>(r1);
    *gptr<u32>(r4 + 0x28u) = u32(0x2710u);  // (from the original)
    *gptr<u32>(r4 + 0x24u) = u32(r6_2 * r3_7 - r1_2);  // (from the original)
    r1 = *global_0085f2e4;
    r0 = *gptr<u32>(r2 + 4u) * r1 - *global_0085f2ec;
    goto L_707798;
L_70772c:;
    ea_3 = r4 + 4u;
    *gptr<u32>(ea_3) = u32(0u);
    ea_4 = r4 + 8u;
    *gptr<u32>(ea_4) = u32(0x2710u);  // (from the original)
    *gptr<u32>(ea_4 + 4) = u32(0u);
    r6_3 = *global_0085f2e0;
    r7_2 = *gptr<u32>(r2);
    r8_2 = *gptr<u32>(r1);
    *gptr<u32>(r4 + 0x18u) = u32(0x2710u);  // (from the original)
    *gptr<u32>(r4 + 0x14u) = u32(r7_2 * r6_3 - r8_2);  // (from the original)
    *gptr<u32>(r4 + 0x1cu) = u32(*gptr<u32>(r2 + 4u) * *global_0085f2e4 - *global_0085f2ec);  // (from the original)
    r3_8 = *global_0085f2e0;
    r6_4 = *gptr<u32>(r2);
    r1_3 = *gptr<u32>(r1);
    *gptr<u32>(r4 + 0x28u) = u32(0x2710u);  // (from the original)
    *gptr<u32>(r4 + 0x24u) = u32(r6_4 * r3_8 - r1_3);  // (from the original)
    r1 = *global_0085f2e4;
    r0 = r1 * *gptr<u32>(r2 + 4u) + *global_0085f2ec;
L_707798:;
    *gptr<u32>(r4 + 0x2cu) = u32(r0);  // (from the original)
L_70779c:;
    r0_4 = r13 + 8u;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_4;
L_7077b8:;
    ea_5 = r4 + 4u;
    *gptr<u32>(ea_5) = u32(0u);
    ea_6 = r4 + 8u;
    *gptr<u32>(ea_6) = u32(0x2710u);  // (from the original)
    *gptr<u32>(ea_6 + 4) = u32(0u);
    r6_5 = *global_0085f2e0;
    r8_3 = *gptr<u32>(r2);
    r7_3 = *gptr<u32>(r1);
    *gptr<u32>(r4 + 0x18u) = u32(0x2710u);  // (from the original)
    *gptr<u32>(r4 + 0x14u) = u32(r8_3 * r6_5 - r7_3);  // (from the original)
    *gptr<u32>(r4 + 0x1cu) = u32(*global_0085f2e4 * *gptr<u32>(r2 + 4u) + *global_0085f2ec);  // (from the original)
    r3_9 = *global_0085f2e0;
    r6_6 = *gptr<u32>(r2);
    r1_4 = *gptr<u32>(r1);
    *gptr<u32>(r4 + 0x28u) = u32(0x2710u);  // (from the original)
    *gptr<u32>(r4 + 0x24u) = u32(r3_9 * r6_6 + r1_4);  // (from the original)
    r1 = *global_0085f2e4;
    r0 = r1 * *gptr<u32>(r2 + 4u) + *global_0085f2ec;
    guest::preempt();
    goto L_707798;
L_707820:;
    ea_7 = r4 + 4u;
    *gptr<u32>(ea_7) = u32(0u);
    ea_8 = r4 + 8u;
    *gptr<u32>(ea_8) = u32(0x2710u);  // (from the original)
    *gptr<u32>(ea_8 + 4) = u32(0u);
    r6_7 = *gptr<u32>(r2);
    r8_4 = *global_0085f2e0;
    r7_4 = *gptr<u32>(r1);
    *gptr<u32>(r4 + 0x18u) = u32(0x2710u);  // (from the original)
    *gptr<u32>(r4 + 0x14u) = u32(r8_4 * r6_7 + r7_4);  // (from the original)
    *gptr<u32>(r4 + 0x1cu) = u32(*global_0085f2e4 * *gptr<u32>(r2 + 4u) + *global_0085f2ec);  // (from the original)
    r3_10 = *global_0085f2e0;
    r6_8 = *gptr<u32>(r2);
    r1_5 = *gptr<u32>(r1);
    *gptr<u32>(r4 + 0x28u) = u32(0x2710u);  // (from the original)
    *gptr<u32>(r4 + 0x24u) = u32(r3_10 * r6_8 + r1_5);  // (from the original)
    r1 = *global_0085f2e4;
    r0 = *gptr<u32>(r2 + 4u) * r1 - *global_0085f2ec;
    guest::preempt();
    goto L_707798;
}

}  // namespace d_007075b4
GUEST_EXPORT(0x007075b4, d_007075b4::f_007075b4);

// f_00707ebc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00707ebc {

struct __attribute__((packed)) Object_00707ebc_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_00707ebc_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00707ebc_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00707ebc_0, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Object_00707ebc_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_00707ebc_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00707ebc_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00707ebc_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Object_00707ebc_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_00707ebc_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00707ebc_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00707ebc_2, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Object_00707ebc_3 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_00707ebc_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00707ebc_3, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00707ebc_3, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x0056a2c0, u32(u32, u32, u32, u32)> call_0056a2c0;  // (from the original)
inline constexpr guest::Function<0x006f7e40, u32(u32, u32, u32, u32)> call_006f7e40;  // (from the original)

u32 f_00707ebc(gptr<Object_00707ebc_0> arg0, gptr<Object_00707ebc_1> arg1, gptr<Object_00707ebc_2> arg2, gptr<Object_00707ebc_3> arg3) {
    u32 r13 = guest::cpu()->r[13];
    float S3_1 = 0;
    float S2_1 = 0;
    u32 r4_1 = 0;
    u32 r8_1 = 0;
    float S1_1 = 0;
    u32 r0_1 = 0;
    float S2_2 = 0;
    u32 r0_2 = 0;
    float S1_2 = 0;
    u32 r5_1 = 0;
    u32 r0_3 = 0;
    float S2_3 = 0;
    float S1_3 = 0;
    float S2_4 = 0;
    float S0_1 = 0;
    u32 r0_4 = 0;
    float S1_4 = 0;
    u32 r3_1 = 0;
    u32 r5_2 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    float S0_2 = 0;
    float S1_5 = 0;
    float S2_5 = 0;
    float S3_2 = 0;
    u32 r6_1 = 0;
    u32 r0_5 = 0;
    u32 r3_2 = 0;
    float S0_3 = 0;
    float S1_6 = 0;
    float S2_6 = 0;
    float S3_3 = 0;
    u32 r4_2 = 0;
    u32 r3_3 = 0;
    u32 r2_2 = 0;
    u32 r5_3 = 0;
    u32 r1_2 = 0;
    float S0_4 = 0;
    float S1_7 = 0;
    float S2_7 = 0;
    float S3_4 = 0;
    u32 r0_6 = 0;
    u32 r3_4 = 0;
    u32 r1_3 = 0;
    float S0_5 = 0;
    float S1_8 = 0;
    u32 r0_7 = 0;
    r13 = r13 - 0x48u;  // (from the original)
    S3_1 = std::bit_cast<float>(arg0->word_4);
    S2_1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(arg0->word_c))));
    r4_1 = *gptr<u32>(r13 + 0x4cu);  // (from the original)
    r8_1 = *gptr<u32>(r13 + 0x48u);  // (from the original)
    S1_1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(arg0->word_8 - 0x10u))));  // (from the original)
    r0_1 = r13;
    *gptr<u32>(r0_1) = u32(std::bit_cast<u32>(float(s32(std::bit_cast<u32>(S3_1)))));
    *gptr<u32>(r0_1 + 4) = u32(std::bit_cast<u32>(S1_1));
    *gptr<u32>(r0_1 + 8) = u32(std::bit_cast<u32>(S2_1));
    S2_2 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(arg1->word_c))));
    r0_2 = r13 + 0x18u;  // (from the original)
    S1_2 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(arg1->word_8 - 0x10u))));  // (from the original)
    *gptr<u32>(r0_2) = u32(std::bit_cast<u32>(float(s32(std::bit_cast<u32>(std::bit_cast<float>(arg1->word_4))))));
    *gptr<u32>(r0_2 + 4) = u32(std::bit_cast<u32>(S1_2));
    *gptr<u32>(r0_2 + 8) = u32(std::bit_cast<u32>(S2_2));
    r5_1 = 0u;
    if (r8_1 == 0x20u) {  // (from the original)
        r5_1 = 0x10u;  // (from the original)
    }
    r0_3 = r13 + 0xcu;  // (from the original)
    S2_3 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(arg2->word_c))));
    S1_3 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(arg2->word_8 + r5_1))));
    *gptr<u32>(r0_3) = u32(std::bit_cast<u32>(float(s32(std::bit_cast<u32>(std::bit_cast<float>(arg2->word_4))))));
    *gptr<u32>(r0_3 + 4) = u32(std::bit_cast<u32>(S1_3));
    *gptr<u32>(r0_3 + 8) = u32(std::bit_cast<u32>(S2_3));
    S2_4 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(arg3->word_c))));
    S0_1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(arg3->word_4))));
    r0_4 = r13 + 0x24u;  // (from the original)
    S1_4 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(arg3->word_8 + r5_1))));
    *gptr<u32>(r0_4) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r0_4 + 4) = u32(std::bit_cast<u32>(S1_4));
    *gptr<u32>(r0_4 + 8) = u32(std::bit_cast<u32>(S2_4));
    r3_1 = r13 + 0xcu;  // (from the original)
    r5_2 = 0x9877c0u + ((r4_1 << 3) - r4_1 << 3);  // (from the original)
    r2_1 = r13 + 0x18u;  // (from the original)
    r1_1 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_4;
    guest::cpu()->s[2] = S2_4;
    guest::cpu()->s[3] = S3_1;
    call_0056a2c0(r5_2, r1_1, r2_1, r3_1);
    S0_2 = guest::cpu()->s[0];
    S1_5 = guest::cpu()->s[1];
    S2_5 = guest::cpu()->s[2];
    S3_2 = guest::cpu()->s[3];
    r6_1 = 0x9877c0u + 0x1c00u;  // (from the original)
    r0_5 = r6_1 + (r4_1 << 4);
    r3_2 = ~0x80000000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_5;
    guest::cpu()->s[2] = S2_5;
    guest::cpu()->s[3] = S3_2;
    call_006f7e40(r0_5, r5_2, r8_1, r3_2);
    S0_3 = guest::cpu()->s[0];
    S1_6 = guest::cpu()->s[1];
    S2_6 = guest::cpu()->s[2];
    S3_3 = guest::cpu()->s[3];
    r4_2 = r4_1 + 1u;
    r3_3 = r13;
    r2_2 = r13 + 0x24u;  // (from the original)
    r5_3 = 0x9877c0u + ((r4_2 << 3) - r4_2 << 3);  // (from the original)
    r1_2 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_6;
    guest::cpu()->s[2] = S2_6;
    guest::cpu()->s[3] = S3_3;
    call_0056a2c0(r5_3, r1_2, r2_2, r3_3);
    S0_4 = guest::cpu()->s[0];
    S1_7 = guest::cpu()->s[1];
    S2_7 = guest::cpu()->s[2];
    S3_4 = guest::cpu()->s[3];
    r0_6 = r6_1 + (r4_2 << 4);
    r3_4 = ~0x80000000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_7;
    guest::cpu()->s[2] = S2_7;
    guest::cpu()->s[3] = S3_4;
    call_006f7e40(r0_6, r5_3, r8_1, r3_4);
    r1_3 = guest::cpu()->r[1];
    S0_5 = guest::cpu()->s[0];
    S1_8 = guest::cpu()->s[1];
    r0_7 = r4_2 + 1u;
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_8;
    return r0_7;
}

}  // namespace d_00707ebc
GUEST_EXPORT(0x00707ebc, d_00707ebc::f_00707ebc);

// f_0070a758: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070a758 {

struct __attribute__((packed)) Object_0070a758_0 {
    u8 unknown_0[0x318];  // (not used here)
    u32 word_318;
};
GUEST_OFFSET(Object_0070a758_0, word_318, 0x318);  // (from the original)

inline constexpr guest::Function<0x002b7cd4, u32(u32, u32, u32, u32)> call_002b7cd4;  // (from the original)

u32 f_0070a758(gptr<Object_0070a758_0> arg0) {
    u32 r0_1 = 0;
    r0_1 = arg0->word_318;
    if (r0_1 == 0) {
        return 1u;
    }
    return call_002b7cd4(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0070a758
GUEST_EXPORT(0x0070a758, d_0070a758::f_0070a758);

// f_0070aa00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070aa00 {

struct __attribute__((packed)) Object_0070aa00_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_0070aa00_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0070aa00_0, word_10, 0x10);  // (from the original)


u32 f_0070aa00(gptr<Object_0070aa00_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 ea_1 = 0;
    u32 r1_2 = 0;
    r3_1 = arg0->word_c;
    r1_1 = *gptr<u32>(0x857a50u + 0x14u);  // (from the original)
    if (r3_1 == *gptr<u32>(0x857a50u + 0x10u)) {  // (from the original)
        if (r3_1 == 0) {
            if (((arg0->word_10 | r1_1) & 1u) == 0) {
                guest::cpu()->r[1] = r1_1;
                return 0u;
            }
        }
        if (*gptr<u32>(r0 + 0x10u) == r1_1) {  // (from the original)
            guest::cpu()->r[1] = r1_1;
            return 0u;
        }
    }
    ea_1 = 0x857a50u + 0x38u;  // (from the original)
    r1_2 = *gptr<u32>(ea_1 + 4u);
    if (r3_1 != *gptr<u32>(ea_1)) {
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    if (r3_1 == 0) {
        if (((*gptr<u32>(r0 + 0x10u) | r1_2) & 1u) == 0) {  // (from the original)
            guest::cpu()->r[1] = r1_2;
            return 0u;
        }
    }
    if (*gptr<u32>(r0 + 0x10u) == r1_2) {  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_0070aa00
GUEST_EXPORT(0x0070aa00, d_0070aa00::f_0070aa00);

// f_0070aa84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070aa84 {

struct __attribute__((packed)) Object_0070aa84_0 {
    u8 unknown_0[0x184c];  // (not used here)
    u32 word_184c;
};
GUEST_OFFSET(Object_0070aa84_0, word_184c, 0x184c);  // (from the original)

inline constexpr guest::Function<0x0071ef10, u32(u32, u32, u32, u32)> call_0071ef10;  // (from the original)

u32 f_0070aa84(gptr<Object_0070aa84_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    r1_1 = arg0->word_184c;
    if (r1_1 != 0) {
        return call_0071ef10(r1_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0_1 = *gptr<u32>(r0 + 0x1850u);  // (from the original)
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    return call_0071ef10(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0070aa84
GUEST_EXPORT(0x0070aa84, d_0070aa84::f_0070aa84);

// f_0070aabc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070aabc {

struct __attribute__((packed)) Object_0070aabc_0 {
    u8 unknown_0[0x184c];  // (not used here)
    u32 word_184c;
};
GUEST_OFFSET(Object_0070aabc_0, word_184c, 0x184c);  // (from the original)

inline constexpr guest::Function<0x007237e0, u32(u32, u32, u32, u32)> call_007237e0;  // (from the original)

u32 f_0070aabc(gptr<Object_0070aabc_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    r1_1 = arg0->word_184c;
    if (r1_1 != 0) {
        return call_007237e0(r1_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0_1 = *gptr<u32>(r0 + 0x1850u);  // (from the original)
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    return call_007237e0(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0070aabc
GUEST_EXPORT(0x0070aabc, d_0070aabc::f_0070aabc);

// f_0070ab10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070ab10 {

struct __attribute__((packed)) Object_0070ab10_0 {
    u8 unknown_0[0x664];  // (not used here)
    u8 byte_664;
};
GUEST_OFFSET(Object_0070ab10_0, byte_664, 0x664);  // (from the original)

inline constexpr guest::Function<0x0048a394, u32(u32, u32, u32, u32)> call_0048a394;  // (from the original)

u32 f_0070ab10(gptr<Object_0070ab10_0> arg0) {
    u32 r0_1 = 0;
    r0_1 = u32(arg0->byte_664);
    if (r0_1 == 0) {
        return r0_1;
    }
    return call_0048a394(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0070ab10
GUEST_EXPORT(0x0070ab10, d_0070ab10::f_0070ab10);

// f_0070ab24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070ab24 {

inline constexpr guest::Function<0x007460e8, u32(u32, u32, u32, u32)> call_007460e8;  // (from the original)

u32 f_0070ab24(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r1_1 = r1 + (r1 << 1);
    r0_1 = r0 + (r1_1 << 3) + 0xe0u;  // (from the original)
    return call_007460e8(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0070ab24
GUEST_EXPORT(0x0070ab24, d_0070ab24::f_0070ab24);

// f_0070ac44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070ac44 {

inline guest::global<u32, 0x0070ac64> global_0070ac64;  // (from the original)
inline constexpr guest::Function<0x0074619c, u32(u32, u32, u32, u32)> call_0074619c;  // (from the original)

u32 f_0070ac44(u32 r0, u32 r1, float S0) {
    float S0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    if (r1 >= 4u) {
        S0_1 = std::bit_cast<float>(*global_0070ac64);
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_1;
        return r0;
    }
    r1_1 = r1 + (r1 << 1);
    r0_1 = r0 + (r1_1 << 3) + 0xe0u;  // (from the original)
    guest::cpu()->s[0] = S0;
    return call_0074619c(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0070ac44
GUEST_EXPORT(0x0070ac44, d_0070ac44::f_0070ac44);

// f_0070b140: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070b140 {

struct __attribute__((packed)) Object_0070b140_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0070b140_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x0070f034, u32(u32, u32, u32, u32)> call_0070f034;  // (from the original)
inline constexpr guest::Function<0x0076ab28, u32(u32, u32, u32, u32)> call_0076ab28;  // (from the original)

u32 f_0070b140(gptr<Object_0070b140_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    guest::cpu()->r[13] -= 8u;
    r4_1 = arg0->word_0;
    if (r4_1 != 0) {
        r0_1 = r4_1 + 8u;
        r0_2 = call_0076ab28(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_2 == 3u) {
            r0_3 = r4_1 + 8u;
        } else {
            r0_3 = 0x95bfdcu;  // (from the original)
        }
        r0_4 = call_002fcb34(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_4 == 8u) {
            guest::cpu()->r[13] += 8u;
            return 0x95bfdcu;  // (from the original)
        }
        r0_5 = r4_1 + 0x14u;  // (from the original)
        r0_6 = call_0076ab28(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_6 == 5u) {
            r0_7 = r4_1 + 0x14u;  // (from the original)
            guest::cpu()->r[13] += 8u;
            return r0_7;
        }
        guest::cpu()->r[13] += 8u;
        return 0x95bfdcu;  // (from the original)
    }
    r0_8 = *gptr<u32>(r0 + 4u);
    if (r0_8 == 0) {
        guest::cpu()->r[13] += 8u;
        return 0x95bfdcu;  // (from the original)
    }
    guest::cpu()->r[13] += 8u;
    return call_0070f034(r0_8, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0070b140
GUEST_EXPORT(0x0070b140, d_0070b140::f_0070b140);

// f_0070b1a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070b1a4 {


u32 f_0070b1a4(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    if (r1 >= 0xau) {  // (from the original)
        r1 = 0u;
    }
    r1_1 = r1 + (r1 << 1);
    r0_1 = r0 + (r1_1 << 2);
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0070b1a4
GUEST_EXPORT(0x0070b1a4, d_0070b1a4::f_0070b1a4);

// f_0070b334: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070b334 {

struct __attribute__((packed)) Object_0070b334_0 {
    u8 unknown_0[0x2];  // (not used here)
    u8 byte_2;
    u8 unknown_3[0x1];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0070b334_0, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_0070b334_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0070b334_0, word_8, 0x8);  // (from the original)


u32 f_0070b334(gptr<Object_0070b334_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 zf_1 = 0;
    u32 r1_2 = 0;
    u32 zf_2 = 0;
    r1_1 = u32(arg0->byte_2);
    zf_1 = r1_1 == 2u;
    if (!zf_1) {
        zf_1 = r1_1 == 1u;
    }
    if (!zf_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r1_2 = arg0->word_4;
    zf_2 = r1_2 == 0;
    if (!zf_2) {
        r0 = arg0->word_8;
        zf_2 = r0 == 0;
    }
    if (zf_2) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    if (r1_2 <= r0) {
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_0070b334
GUEST_EXPORT(0x0070b334, d_0070b334::f_0070b334);

// f_0070b3b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070b3b8 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x003026e8, u32(u32, u32, u32, u32)> call_003026e8;  // (from the original)
inline constexpr guest::Function<0x00718378, u32(u32, u32, u32, u32)> call_00718378;  // (from the original)

u32 f_0070b3b8(u32 r0, u32 r1) {
    u32 r5_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    u32 r0_2 = 0;
    u32 zf_2 = 0;
    u32 r4_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5_1 = 0u;
    call_002fb328(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_1 = u32(*gptr<u8>(r0 + 2u));
    zf_1 = r0_1 == 2u;
    if (!zf_1) {
        zf_1 = r0_1 == 1u;
    }
    if (!zf_1) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r5_1;
    }
    r0_2 = *gptr<u32>(r0 + 4u);
    zf_2 = r0_2 == 0;
    if (!zf_2) {
        r1_1 = *gptr<u32>(r0 + 8u);
        zf_2 = r1_1 == 0;
    }
    if (zf_2) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r5_1;
    }
    if (r0_2 > r1_1) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r5_1;
    }
    r4_1 = r0 + 0xcu;  // (from the original)
    r0_3 = call_00718378(r4_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_3 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r5_1;
    }
    r0_4 = call_003026e8(r4_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_4 == 0x81u) {  // (from the original)
        r5_1 = 1u;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r5_1;
}

}  // namespace d_0070b3b8
GUEST_EXPORT(0x0070b3b8, d_0070b3b8::f_0070b3b8);

// f_0070b49c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070b49c {

struct __attribute__((packed)) Object_0070b49c_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0070b49c_0, byte_0, 0x0);  // (from the original)


u32 f_0070b49c(gptr<Object_0070b49c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    if (r1 == 3u) {
        r0_1 = u32(arg0->byte_0);
        goto L_70b4c0;
    }
    if (r1 == 4u) {
        r0_1 = u32(*gptr<u8>(r0 + 1u));
        goto L_70b4c0;
    }
    if (r1 == 5u) {
        r0_1 = u32(*gptr<u8>(r0 + 2u));
    } else {
        r0_1 = 0x1bu;  // (from the original)
    }
L_70b4c0:;
    r1_1 = r0_1 & 3u;
    if (r1_1 == 2u) {
        guest::cpu()->r[1] = r1_1;
        return 0x17u;  // (from the original)
    }
    r0_2 = r0_1 >> 2;
    r1_2 = r0_2 & 3u;
    if (r1_2 == 2u) {
        guest::cpu()->r[1] = r1_2;
        return 0x16u;  // (from the original)
    }
    r0_3 = r0_2 >> 2;
    r1_3 = r0_3 & 3u;
    if (r1_3 == 2u) {
        guest::cpu()->r[1] = r1_3;
        return 0x15u;  // (from the original)
    }
    if (r0_3 << 0x1c >> 0x1e == 2u) {  // (from the original)
        r0_4 = 0x14u;  // (from the original)
    } else {
        r0_4 = 0u;
    }
    guest::cpu()->r[1] = r1_3;
    return r0_4;
}

}  // namespace d_0070b49c
GUEST_EXPORT(0x0070b49c, d_0070b49c::f_0070b49c);

// f_0070b510: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070b510 {

struct __attribute__((packed)) Object_0070b510_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0070b510_0, byte_0, 0x0);  // (from the original)


u32 f_0070b510(gptr<Object_0070b510_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 res_1 = 0;
    u32 r0_4 = 0;
    if (r1 == 3u) {
        r0_1 = u32(arg0->byte_0);
        goto L_70b534;
    }
    if (r1 == 4u) {
        r0_1 = u32(*gptr<u8>(r0 + 1u));
        goto L_70b534;
    }
    if (r1 == 5u) {
        r0_1 = u32(*gptr<u8>(r0 + 2u));
    } else {
        r0_1 = 0x1bu;  // (from the original)
    }
L_70b534:;
    if ((r0_1 & 3u) == 0) {
        return 0x17u;  // (from the original)
    }
    r0_2 = r0_1 >> 2;
    if ((r0_2 & 3u) == 0) {
        return 0x16u;  // (from the original)
    }
    r0_3 = r0_2 >> 2;
    if ((r0_3 & 3u) == 0) {
        return 0x15u;  // (from the original)
    }
    res_1 = r0_3 << 0x1c >> 0x1e;  // (from the original)
    if (res_1 == 0) {
        r0_4 = 0x14u;  // (from the original)
    } else {
        r0_4 = 0u;
    }
    return r0_4;
}

}  // namespace d_0070b510
GUEST_EXPORT(0x0070b510, d_0070b510::f_0070b510);

// f_0070b574: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070b574 {

struct __attribute__((packed)) Object_0070b574_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0070b574_0, byte_0, 0x0);  // (from the original)


u32 f_0070b574(gptr<Object_0070b574_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    if (r1 == 3u) {
        r0_1 = u32(arg0->byte_0);
        goto L_70b598;
    }
    if (r1 == 4u) {
        r0_1 = u32(*gptr<u8>(r0 + 1u));
        goto L_70b598;
    }
    if (r1 == 5u) {
        r0_1 = u32(*gptr<u8>(r0 + 2u));
    } else {
        r0_1 = 0x1bu;  // (from the original)
    }
L_70b598:;
    r1_1 = r0_1 & 3u;
    if (r1_1 == 3u) {
        guest::cpu()->r[1] = r1_1;
        return 0x17u;  // (from the original)
    }
    r0_2 = r0_1 >> 2;
    r1_2 = r0_2 & 3u;
    if (r1_2 == 3u) {
        guest::cpu()->r[1] = r1_2;
        return 0x16u;  // (from the original)
    }
    r0_3 = r0_2 >> 2;
    r1_3 = r0_3 & 3u;
    if (r1_3 == 3u) {
        guest::cpu()->r[1] = r1_3;
        return 0x15u;  // (from the original)
    }
    if (r0_3 << 0x1c >> 0x1e == 3u) {  // (from the original)
        r0_4 = 0x14u;  // (from the original)
    } else {
        r0_4 = 0u;
    }
    guest::cpu()->r[1] = r1_3;
    return r0_4;
}

}  // namespace d_0070b574
GUEST_EXPORT(0x0070b574, d_0070b574::f_0070b574);

// f_0070b5e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070b5e8 {

struct __attribute__((packed)) Object_0070b5e8_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0070b5e8_0, byte_0, 0x0);  // (from the original)


u32 f_0070b5e8(gptr<Object_0070b5e8_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    if (r1 == 3u) {
        r0_1 = u32(arg0->byte_0);
        goto L_70b60c;
    }
    if (r1 == 4u) {
        r0_1 = u32(*gptr<u8>(r0 + 1u));
        goto L_70b60c;
    }
    if (r1 == 5u) {
        r0_1 = u32(*gptr<u8>(r0 + 2u));
    } else {
        r0_1 = 0x1bu;  // (from the original)
    }
L_70b60c:;
    r1_1 = r0_1 & 3u;
    if (r1_1 == 1u) {
        guest::cpu()->r[1] = r1_1;
        return 0x17u;  // (from the original)
    }
    r0_2 = r0_1 >> 2;
    r1_2 = r0_2 & 3u;
    if (r1_2 == 1u) {
        guest::cpu()->r[1] = r1_2;
        return 0x16u;  // (from the original)
    }
    r0_3 = r0_2 >> 2;
    r1_3 = r0_3 & 3u;
    if (r1_3 == 1u) {
        guest::cpu()->r[1] = r1_3;
        return 0x15u;  // (from the original)
    }
    if (r0_3 << 0x1c >> 0x1e == 1u) {  // (from the original)
        r0_4 = 0x14u;  // (from the original)
    } else {
        r0_4 = 0u;
    }
    guest::cpu()->r[1] = r1_3;
    return r0_4;
}

}  // namespace d_0070b5e8
GUEST_EXPORT(0x0070b5e8, d_0070b5e8::f_0070b5e8);

// f_0070b65c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070b65c {

struct __attribute__((packed)) Object_0070b65c_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0070b65c_0, byte_0, 0x0);  // (from the original)


u32 f_0070b65c(gptr<Object_0070b65c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    if (r1 == 3u) {
        r0_1 = u32(arg0->byte_0);
        r0_2 = *gptr<u32>(0x88e79cu + (r0_1 >> 6 << 2));  // (from the original)
        guest::cpu()->r[1] = 0x88e79cu;  // (from the original)
        return r0_2;
    }
    if (r1 == 4u) {
        r0_3 = u32(*gptr<u8>(r0 + 1u));
        r0_4 = *gptr<u32>(0x88e79cu + (r0_3 >> 6 << 2));  // (from the original)
        guest::cpu()->r[1] = 0x88e79cu;  // (from the original)
        return r0_4;
    }
    if (r1 == 5u) {
        r0_5 = u32(*gptr<u8>(r0 + 2u));
    } else {
        r0_5 = 0x1bu;  // (from the original)
    }
    r0_6 = *gptr<u32>(0x88e79cu + (r0_5 >> 6 << 2));  // (from the original)
    guest::cpu()->r[1] = 0x88e79cu;  // (from the original)
    return r0_6;
}

}  // namespace d_0070b65c
GUEST_EXPORT(0x0070b65c, d_0070b65c::f_0070b65c);

// f_0070b694: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070b694 {

struct __attribute__((packed)) Object_0070b694_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0070b694_0, byte_0, 0x0);  // (from the original)


u32 f_0070b694(gptr<Object_0070b694_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    if (r1 == 3u) {
        r0_1 = u32(arg0->byte_0);
        r0_2 = *gptr<u32>(0x88e79cu + (r0_1 << 0x1a >> 0x1e << 2));  // (from the original)
        guest::cpu()->r[1] = 0x88e79cu;  // (from the original)
        return r0_2;
    }
    if (r1 == 4u) {
        r0_3 = u32(*gptr<u8>(r0 + 1u));
        r0_4 = *gptr<u32>(0x88e79cu + (r0_3 << 0x1a >> 0x1e << 2));  // (from the original)
        guest::cpu()->r[1] = 0x88e79cu;  // (from the original)
        return r0_4;
    }
    if (r1 == 5u) {
        r0_5 = u32(*gptr<u8>(r0 + 2u));
    } else {
        r0_5 = 0x1bu;  // (from the original)
    }
    r0_6 = *gptr<u32>(0x88e79cu + (r0_5 << 0x1a >> 0x1e << 2));  // (from the original)
    guest::cpu()->r[1] = 0x88e79cu;  // (from the original)
    return r0_6;
}

}  // namespace d_0070b694
GUEST_EXPORT(0x0070b694, d_0070b694::f_0070b694);

// f_0070b6d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070b6d0 {

struct __attribute__((packed)) Object_0070b6d0_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0070b6d0_0, byte_0, 0x0);  // (from the original)


u32 f_0070b6d0(gptr<Object_0070b6d0_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    if (r1 == 3u) {
        r0_1 = u32(arg0->byte_0);
        r0_2 = *gptr<u32>(0x88e79cu + (r0_1 << 0x1c >> 0x1e << 2));  // (from the original)
        guest::cpu()->r[1] = 0x88e79cu;  // (from the original)
        return r0_2;
    }
    if (r1 == 4u) {
        r0_3 = u32(*gptr<u8>(r0 + 1u));
        r0_4 = *gptr<u32>(0x88e79cu + (r0_3 << 0x1c >> 0x1e << 2));  // (from the original)
        guest::cpu()->r[1] = 0x88e79cu;  // (from the original)
        return r0_4;
    }
    if (r1 == 5u) {
        r0_5 = u32(*gptr<u8>(r0 + 2u));
    } else {
        r0_5 = 0x1bu;  // (from the original)
    }
    r0_6 = *gptr<u32>(0x88e79cu + (r0_5 << 0x1c >> 0x1e << 2));  // (from the original)
    guest::cpu()->r[1] = 0x88e79cu;  // (from the original)
    return r0_6;
}

}  // namespace d_0070b6d0
GUEST_EXPORT(0x0070b6d0, d_0070b6d0::f_0070b6d0);

// f_0070b70c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070b70c {

struct __attribute__((packed)) Object_0070b70c_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0070b70c_0, byte_0, 0x0);  // (from the original)


u32 f_0070b70c(gptr<Object_0070b70c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    if (r1 == 3u) {
        r0_1 = u32(arg0->byte_0);
        r0_2 = *gptr<u32>(0x88e79cu + ((r0_1 & 3u) << 2));  // (from the original)
        guest::cpu()->r[1] = 0x88e79cu;  // (from the original)
        return r0_2;
    }
    if (r1 == 4u) {
        r0_3 = u32(*gptr<u8>(r0 + 1u));
        r0_4 = *gptr<u32>(0x88e79cu + ((r0_3 & 3u) << 2));  // (from the original)
        guest::cpu()->r[1] = 0x88e79cu;  // (from the original)
        return r0_4;
    }
    if (r1 == 5u) {
        r0_5 = u32(*gptr<u8>(r0 + 2u));
    } else {
        r0_5 = 0x1bu;  // (from the original)
    }
    r0_6 = *gptr<u32>(0x88e79cu + ((r0_5 & 3u) << 2));  // (from the original)
    guest::cpu()->r[1] = 0x88e79cu;  // (from the original)
    return r0_6;
}

}  // namespace d_0070b70c
GUEST_EXPORT(0x0070b70c, d_0070b70c::f_0070b70c);

// f_0070b744: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070b744 {


u32 f_0070b744(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (u32(*gptr<u8>(r0 + r1 + 0x40u)) == 0) {  // (from the original)
        r0_1 = r0 + (r1 << 2);
    } else {
        r0_1 = 0x95bfdcu;  // (from the original)
    }
    return r0_1;
}

}  // namespace d_0070b744
GUEST_EXPORT(0x0070b744, d_0070b744::f_0070b744);

// f_0070b7a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070b7a8 {

inline constexpr guest::Function<0x005caef4, u32(u32, u32, u32, u32)> call_005caef4;  // (from the original)

u32 f_0070b7a8(u32 r0) {
    u32 r1_1 = 0;
    r1_1 = r0 + 8u;
    return call_005caef4(r0, r1_1, r0, 0xc8b8u);  // (from the original)
}

}  // namespace d_0070b7a8
GUEST_EXPORT(0x0070b7a8, d_0070b7a8::f_0070b7a8);

// f_0070b7bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070b7bc {

inline constexpr guest::Function<0x005ca5d8, u32(u32, u32, u32, u32)> call_005ca5d8;  // (from the original)

u32 f_0070b7bc(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    *gptr<u32>(r13) = u32(r1);
    r1_1 = r0 + 8u;
    guest::cpu()->r[13] = r13;
    r0_1 = call_005ca5d8(r0, r1_1, r0, 0xc8b8u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_0070b7bc
GUEST_EXPORT(0x0070b7bc, d_0070b7bc::f_0070b7bc);

// f_0070b7dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070b7dc {


u32 f_0070b7dc(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    r0_1 = u32(*gptr<u8>(r0 + r1 + 0x58u));  // (from the original)
    return r0_1;
}

}  // namespace d_0070b7dc
GUEST_EXPORT(0x0070b7dc, d_0070b7dc::f_0070b7dc);

// f_0070b7e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070b7e8 {

struct __attribute__((packed)) Object_0070b7e8_0 {
    u8 unknown_0[0x69];  // (not used here)
    u8 byte_69;
};
GUEST_OFFSET(Object_0070b7e8_0, byte_69, 0x69);  // (from the original)

struct __attribute__((packed)) Object_0070b7e8_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 byte_10;
    u8 byte_11;
    u8 unknown_12[0x2];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Object_0070b7e8_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0070b7e8_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0070b7e8_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0070b7e8_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0070b7e8_1, byte_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0070b7e8_1, byte_11, 0x11);  // (from the original)
GUEST_OFFSET(Object_0070b7e8_1, word_14, 0x14);  // (from the original)


u32 f_0070b7e8(gptr<Object_0070b7e8_0> arg0, gptr<Object_0070b7e8_1> arg1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r4_1 = 0;
    u32 zf_1 = 0;
    u32 zf_2 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 zf_3 = 0;
    u32 r4_2 = 0;
    u32 r0_3 = 0;
    u32 zf_4 = 0;
    guest::cpu()->r[13] -= 8u;
    if (r1 == 0) {
        guest::cpu()->r[13] += 8u;
        return 0u;
    }
    arg1->word_8 = u32(0x20u);  // (from the original)
    r4_1 = u32(arg0->byte_69);
    if (r4_1 >= 6u) {
        arg1->word_0 = u32(0u);
        arg1->word_4 = u32(0u);
        arg1->word_c = u32(0x20u);  // (from the original)
        arg1->byte_10 = u8(0u);
        arg1->byte_11 = u8(0u);
        guest::cpu()->r[13] += 8u;
        return 1u;
    }
    zf_1 = r2 == 2u;
    if (!zf_1) {
        zf_1 = r2 == 3u;
    }
    if (zf_1) {
        goto L_70b874;
    }
    arg1->byte_10 = u8(0u);
    arg1->word_0 = u32(0u);
    arg1->word_c = u32(0x20u);  // (from the original)
    if (u32(*gptr<u8>(r0 + 0x69u)) > 2u) {  // (from the original)
        goto L_70b8c8;
    }
    zf_2 = r2 == 0;
    if (zf_2) {
        r0_1 = 0u;
    } else {
        r0_1 = 0x10u;  // (from the original)
    }
    arg1->byte_11 = u8(1u);
    arg1->word_14 = u32(r0_1);
    if (zf_2) {
        goto L_70b8d4;
    }
L_70b86c:;
    r0_2 = 1u;
    goto L_70b8d8;
L_70b874:;
    zf_3 = r4_1 == 2u;
    if (!zf_3) {
        zf_3 = r4_1 == 5u;
    }
    if (zf_3) {
        guest::cpu()->r[13] += 8u;
        return 0u;
    }
    arg1->word_c = u32(0x10u);  // (from the original)
    arg1->byte_10 = u8(1u);
    if (r2 == 2u) {
        r4_2 = 0x10u;  // (from the original)
    } else {
        r4_2 = 0u;
    }
    arg1->word_4 = u32(2u);
    arg1->word_0 = u32(r4_2);
    arg1->byte_11 = u8(0u);
    r0_3 = u32(*gptr<u8>(r0 + 0x69u));  // (from the original)
    zf_4 = r0_3 == 1u;
    if (!zf_4) {
        zf_4 = r0_3 == 4u;
    }
    if (zf_4) {
        arg1->word_8 = u32(0x10u);  // (from the original)
    }
    guest::cpu()->r[13] += 8u;
    return 1u;
L_70b8c8:;
    arg1->byte_11 = u8(0u);
    if (r2 != 0) {
        guest::preempt();
        goto L_70b86c;
    }
L_70b8d4:;
    r0_2 = 0u;
L_70b8d8:;
    arg1->word_4 = u32(r0_2);
    guest::cpu()->r[13] += 8u;
    return 1u;
}

}  // namespace d_0070b7e8
GUEST_EXPORT(0x0070b7e8, d_0070b7e8::f_0070b7e8);

// f_0070b8fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070b8fc {

struct __attribute__((packed)) Object_0070b8fc_0 {
    u8 unknown_0[0x69];  // (not used here)
    u8 byte_69;
};
GUEST_OFFSET(Object_0070b8fc_0, byte_69, 0x69);  // (from the original)

inline constexpr guest::Function<0x001c4bc8, u32(u32, u32, u32, u32)> call_001c4bc8;  // (from the original)
inline constexpr guest::Function<0x001c4c14, u32(u32, u32, u32, u32)> call_001c4c14;  // (from the original)

u32 f_0070b8fc(gptr<Object_0070b8fc_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
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
    u32 cf_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r0_5 = 0;
    u32 zf_1 = 0;
    u32 cf_2 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r3_1 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    u32 r10_1 = 0;
    u32 r11_1 = 0;
    if (r1 == 0) {
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
    ea_1 = r13 - 0x24;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r9);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r10);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r11);  // (from the original)
    *gptr<u32>(ea_1 + 0x20) = u32(r14);  // (from the original)
    r5 = r0;
    r13 = r13 - 0x40u;  // (from the original)
    r0_1 = u32(arg0->byte_69);
    cf_1 = r0_1 >= 0xcu;  // (from the original)
    if (!cf_1) {
        cf_1 = r0_1 >= 9u;
    }
    if (cf_1) {
        r0_2 = 0u;
    } else {
        r0_2 = 1u;
    }
    *gptr<u32>(r13 + 8u) = u32(r0_2);
    if (r2 == 0) {
        r0_3 = 4u;
    } else {
        r0_3 = 1u;
    }
    *gptr<u32>(r13 + 4u) = u32(r0_3);
    r0_4 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001c4c14(r0_4, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r0_5 = *gptr<u32>(r13 + 4u);
    zf_1 = r0_5 == 0;
    cf_2 = r0_5 >= 0u;
    if (cf_2 && !zf_1) {
        r11 = 0x95c010u;  // (from the original)
    }
    r0 = 0u;
    *gptr<u32>(r13) = u32(r0);
    if (!cf_2 || zf_1) {
        goto L_70b9f8;
    }
L_70b958:;
    r8 = r0 << 5;
    r7 = 0u;
    r9 = r0 * *gptr<u32>(r13 + 8u) << 0x1e >> 0x17;  // (from the original)
L_70b970:;
    r4 = 0u;
    r10 = r7 + r8;
    r6 = r9 + ((r7 & 0x1fu) << 2);  // (from the original)
    do {
L_70b980:;
        r0_6 = r4 & 0x1fu;  // (from the original)
        r0_7 = lsr_r(*gptr<u32>(r5 + (r6 + (r0_6 >> 3) << 2) + 0x6cu), r0_6 << 0x1d >> 0x1b & 0xff) & 0xfu;  // (from the original)
        if (r0_7 == 0xfu) {  // (from the original)
            r0_7 = 0u;
        }
        r3_1 = u32(*gptr<u16>(r11 + (u32(*gptr<u8>(r0_7 + r5 + 0x58u)) << 1)));  // (from the original)
        r0_8 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_001c4bc8(r0_8, r4, r10, r3_1);
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0x20u);  // (from the original)
    r7 = r7 + 1u;
    if (r7 < 0x20u) {  // (from the original)
        guest::preempt();
        goto L_70b970;
    }
    r1_1 = *gptr<u32>(r13 + 4u);
    r0 = *gptr<u32>(r13) + 1u;
    *gptr<u32>(r13) = u32(r0);
    if (r0 < r1_1) {
        guest::preempt();
        goto L_70b958;
    }
L_70b9f8:;
    r0_9 = r13 + 0xcu;  // (from the original)
    r13 = r13 + 0x1cu;  // (from the original)
    ea_2 = r13;
    r13 = r13 + 0x24;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_1 = *gptr<u32>(ea_2 + 4);
    r6_1 = *gptr<u32>(ea_2 + 8);
    r7_1 = *gptr<u32>(ea_2 + 0xc);  // (from the original)
    r8_1 = *gptr<u32>(ea_2 + 0x10);  // (from the original)
    r9_1 = *gptr<u32>(ea_2 + 0x14);  // (from the original)
    r10_1 = *gptr<u32>(ea_2 + 0x18);  // (from the original)
    r11_1 = *gptr<u32>(ea_2 + 0x1c);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
    guest::cpu()->r[13] = r13;
    return r0_9;
}

}  // namespace d_0070b8fc
GUEST_EXPORT(0x0070b8fc, d_0070b8fc::f_0070b8fc);

// f_0070ba0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070ba0c {

inline constexpr guest::Function<0x001c4bf4, u32(u32, u32, u32, u32)> call_001c4bf4;  // (from the original)
inline constexpr guest::Function<0x001c4c14, u32(u32, u32, u32, u32)> call_001c4c14;  // (from the original)
inline constexpr guest::Function<0x0070b7e8, u32(u32, u32, u32, u32)> call_0070b7e8;  // (from the original)

u32 f_0070ba0c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 sco = 0;
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
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 ea_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 res_1 = 0;
    u32 cf_2 = 0;
    u32 b_1 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r3_3 = 0;
    u32 r2_1 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r2_2 = 0;
    u32 r3_4 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 ea_3 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    u32 r10_1 = 0;
    u32 r11_1 = 0;
    if (r1 == 0) {
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
    ea_1 = r13 - 0x24;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r9);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r10);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r11);  // (from the original)
    *gptr<u32>(ea_1 + 0x20) = u32(r14);  // (from the original)
    r13 = r13 - 0x68u;  // (from the original)
    r7 = r0;
    r0_1 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001c4c14(r0_1, r1, r2, r3);
    r3_1 = guest::cpu()->r[3];
    r8 = 0x95c010u;  // (from the original)
    if (u32(*gptr<u8>(r7 + 0x69u)) == 8u) {  // (from the original)
        goto L_70bb00;
    }
    r1_1 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0070b7e8(r7, r1_1, r2, r3_1);
    r1 = guest::cpu()->r[1];
    r0_2 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    r5 = 0u;
    if (r0_2 < 0u || r0_2 == 0) {
        goto L_70bc24;
    }
L_70ba5c:;
    r0_3 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    r4 = 0u;
    zf_1 = r0_3 == 0;
    cf_1 = r0_3 >= 0u;
    if (cf_1 && !zf_1) {
        r6 = r5 << 0x1d >> 0x1b;  // (from the original)
    }
    if (!cf_1 || zf_1) {
        goto L_70bc14;
    }
L_70ba74:;
    ea_2 = r13 + 0x10u;  // (from the original)
    r1 = *gptr<u32>(ea_2 + 4) << 0x1e >> 0x17;  // (from the original)
    r0_4 = lsr_r(*gptr<u32>(r7 + (r1 + ((*gptr<u32>(ea_2) + r4 & 0x1fu) << 2) + ((r5 & 0x1fu) >> 3) << 2) + 0x6cu), r6 & 0xff) & 0xfu;  // (from the original)
    if (r0_4 == 0xfu) {  // (from the original)
        r0_4 = 0u;
    }
    r0_5 = r0_4 & 0xffu;  // (from the original)
    if (r0_5 == 0xfu) {  // (from the original)
        goto L_70bc04;
    }
    r3_2 = u32(*gptr<u16>(r8 + (u32(*gptr<u8>(r7 + r0_5 + 0x58u)) << 1))) & ~0xfu | r0_5;  // (from the original)
    if (u32(*gptr<u8>(r13 + 0x20u)) == 0) {  // (from the original)
        goto L_70bbf4;
    }
    r1_2 = *gptr<u32>(r13 + 0x1cu) - r4 - 1u;  // (from the original)
    r0_6 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001c4bf4(r0_6, r1_2, r5, r3_2);
    r1 = guest::cpu()->r[1];
    goto L_70bc04;
L_70bb00:;
    r10 = 0x88e9c8u;  // (from the original)
    r11 = 1u;
    *gptr<u32>(r13) = u32(0u);
L_70bb10:;
    r1_3 = *gptr<u32>(r13);
    r6 = 0u;
    r5 = 0x88e8c0u + (r1_3 << 1);  // (from the original)
    *gptr<u32>(r13 + 0x34u) = u32(r1_3 << 0x1e >> 0x17);  // (from the original)
L_70bb2c:;
    r4 = 0u;
    r9 = *gptr<u32>(r13 + 0x34u) + ((r6 & 0x1fu) << 2);  // (from the original)
    r8 = r6 + (*gptr<u32>(r13) << 5);
L_70bb44:;
    r1 = u32(*gptr<u8>(r5)) + r4;
    res_1 = r1 - 0x34u;  // (from the original)
    cf_2 = r1 >= 0x34u;  // (from the original)
    if (res_1 >> 0x1f == ((r1 ^ 0x34u) & (r1 ^ res_1)) >> 0x1f) {  // (from the original)
        goto L_70bbc4;
    }
    sco = cf_2;
    b_1 = lsl_rc(r11, r4 & 0xff, &sco);  // (from the original)
    if ((*gptr<u32>(r10 + (r8 << 2)) & b_1) != 0) {
        goto L_70bbc4;
    }
    r0_7 = r4 & 0x1fu;  // (from the original)
    r0_8 = lsr_r(*gptr<u32>(r7 + (r9 + (r0_7 >> 3) << 2) + 0x6cu), r0_7 << 0x1d >> 0x1b & 0xff) & 0xfu;  // (from the original)
    if (r0_8 == 0xfu) {  // (from the original)
        r0_8 = 0u;
    }
    r0_9 = r0_8 & 0xffu;  // (from the original)
    if (r0_9 == 0xfu) {  // (from the original)
        r3_3 = 0xfu;  // (from the original)
        goto L_70bbb4;
    }
    r3_3 = u32(*gptr<u16>(0x95c010u + (u32(*gptr<u8>(r7 + r0_9 + 0x58u)) << 1))) & ~0xfu | r0_9;  // (from the original)
L_70bbb4:;
    r2_1 = u32(*gptr<u8>(r5 + 1u)) + r6;
    r0_10 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001c4bf4(r0_10, r1, r2_1, r3_3);
    r1 = guest::cpu()->r[1];
L_70bbc4:;
    r4 = r4 + 1u;
    if (r4 < 0x20u) {  // (from the original)
        guest::preempt();
        goto L_70bb44;
    }
    r6 = r6 + 1u;
    if (r6 < 0x20u) {  // (from the original)
        guest::preempt();
        goto L_70bb2c;
    }
    r0_11 = *gptr<u32>(r13) + 1u;
    *gptr<u32>(r13) = u32(r0_11);
    if (r0_11 < 4u) {
        guest::preempt();
        goto L_70bb10;
    }
    goto L_70bcc0;
L_70bbf4:;
    r0_12 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001c4bf4(r0_12, r5, r4, r3_2);
    r1 = guest::cpu()->r[1];
L_70bc04:;
    r4 = r4 + 1u;
    if (*gptr<u32>(r13 + 0x1cu) > r4) {  // (from the original)
        guest::preempt();
        goto L_70ba74;
    }
L_70bc14:;
    r5 = r5 + 1u;
    if (*gptr<u32>(r13 + 0x18u) > r5) {  // (from the original)
        guest::preempt();
        goto L_70ba5c;
    }
L_70bc24:;
    if (u32(*gptr<u8>(r13 + 0x21u)) == 0) {  // (from the original)
        goto L_70bcc0;
    } else {
        r5 = 0u;
        r9 = 0x180u;  // (from the original)
    }
L_70bc38:;
    r4 = 0u;
    r6 = r5 << 0x1d >> 0x1b;  // (from the original)
    do {
L_70bc44:;
        r1 = r5 & 0x1fu;  // (from the original)
        r0_13 = lsr_r(*gptr<u32>(r7 + (r9 + ((*gptr<u32>(r13 + 0x24u) + r4 & 0x1fu) << 2) + (r1 >> 3) << 2) + 0x6cu), r6 & 0xff) & 0xfu;  // (from the original)
        if (r0_13 == 0xfu) {  // (from the original)
            r0_13 = 0u;
        }
        r0_14 = r0_13 & 0xffu;  // (from the original)
        if (!(r0_14 == 0xfu)) {  // (from the original)
            r2_2 = r4 + 0x20u;  // (from the original)
            r3_4 = u32(*gptr<u16>(r8 + (u32(*gptr<u8>(r7 + r0_14 + 0x58u)) << 1))) & ~0xfu | r0_14;  // (from the original)
            r0_15 = r13 + 0x28u;  // (from the original)
            guest::cpu()->r[13] = r13;
            call_001c4bf4(r0_15, r5, r2_2, r3_4);
            r1 = guest::cpu()->r[1];
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(0x10u));  // (from the original)
    r5 = r5 + 1u;
    if (s32(r5) < s32(0x20u)) {  // (from the original)
        guest::preempt();
        goto L_70bc38;
    }
L_70bcc0:;
    r0_16 = r13 + 0x28u;  // (from the original)
    r13 = r13 + 0x44u;  // (from the original)
    ea_3 = r13;
    r13 = r13 + 0x24;  // (from the original)
    r4_1 = *gptr<u32>(ea_3);
    r5_1 = *gptr<u32>(ea_3 + 4);
    r6_1 = *gptr<u32>(ea_3 + 8);
    r7_1 = *gptr<u32>(ea_3 + 0xc);  // (from the original)
    r8_1 = *gptr<u32>(ea_3 + 0x10);  // (from the original)
    r9_1 = *gptr<u32>(ea_3 + 0x14);  // (from the original)
    r10_1 = *gptr<u32>(ea_3 + 0x18);  // (from the original)
    r11_1 = *gptr<u32>(ea_3 + 0x1c);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
    guest::cpu()->r[13] = r13;
    return r0_16;
}

}  // namespace d_0070ba0c
GUEST_EXPORT(0x0070ba0c, d_0070ba0c::f_0070ba0c);

// f_0070bcdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070bcdc {


u32 f_0070bcdc(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r1 == 0xfu) {  // (from the original)
        return 0xfu;  // (from the original)
    }
    r0_1 = u32(*gptr<u16>(0x95c010u + (u32(*gptr<u8>(r0 + r1 + 0x58u)) << 1))) & ~0xfu | r1;  // (from the original)
    return r0_1;
}

}  // namespace d_0070bcdc
GUEST_EXPORT(0x0070bcdc, d_0070bcdc::f_0070bcdc);

// f_0070bd0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070bd0c {

struct __attribute__((packed)) Object_0070bd0c_0 {
    u8 unknown_0[0x69];  // (not used here)
    u8 byte_69;
};
GUEST_OFFSET(Object_0070bd0c_0, byte_69, 0x69);  // (from the original)


u32 f_0070bd0c(gptr<Object_0070bd0c_0> arg0) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    r0_1 = u32(arg0->byte_69);
    r1_1 = r0_1 - 6u;
    if (r1_1 >= 2u) {
        r0_1 = 0xbu;  // (from the original)
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0070bd0c
GUEST_EXPORT(0x0070bd0c, d_0070bd0c::f_0070bd0c);

// f_0070bd20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070bd20 {

struct __attribute__((packed)) Object_0070bd20_0 {
    u8 unknown_0[0x69];  // (not used here)
    u8 byte_69;
};
GUEST_OFFSET(Object_0070bd20_0, byte_69, 0x69);  // (from the original)


u32 f_0070bd20(gptr<Object_0070bd20_0> arg0) {
    u32 r0_1 = 0;
    r0_1 = u32(arg0->byte_69);
    if (r0_1 >= 6u) {
        r0_1 = 0xau;  // (from the original)
    }
    return r0_1;
}

}  // namespace d_0070bd20
GUEST_EXPORT(0x0070bd20, d_0070bd20::f_0070bd20);

// f_0070bd48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070bd48 {

inline constexpr guest::Function<0x002fe940, u32(u32, u32, u32, u32)> call_002fe940;  // (from the original)

u32 f_0070bd48(u32 r0) {
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    r2_1 = *gptr<u32>(0xaaef18u + 0x234u);  // (from the original)
    if (r2_1 == 0) {
        guest::cpu()->r[1] = 0xaaef18u;  // (from the original)
        return 0u;
    }
    r1_1 = r0 + 0x2au;  // (from the original)
    r0_1 = r2_1 + 0x55a6u;  // (from the original)
    return call_002fe940(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_0070bd48
GUEST_EXPORT(0x0070bd48, d_0070bd48::f_0070bd48);

// f_0070bd74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070bd74 {

struct __attribute__((packed)) Object_0070bd74_0 {
    u8 unknown_0[0x69];  // (not used here)
    u8 byte_69;
};
GUEST_OFFSET(Object_0070bd74_0, byte_69, 0x69);  // (from the original)

inline constexpr guest::Function<0x001c4bc8, u32(u32, u32, u32, u32)> call_001c4bc8;  // (from the original)
inline constexpr guest::Function<0x001c4c14, u32(u32, u32, u32, u32)> call_001c4c14;  // (from the original)

u32 f_0070bd74(gptr<Object_0070bd74_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
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
    u32 cf_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r0_5 = 0;
    u32 zf_1 = 0;
    u32 cf_2 = 0;
    u32 r2_1 = 0;
    u32 r6_1 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r3_1 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r2_2 = 0;
    u32 r0_10 = 0;
    u32 r1_2 = 0;
    u32 r3_2 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_2 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    u32 r10_1 = 0;
    u32 r11_1 = 0;
    if (r1 == 0) {
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
    ea_1 = r13 - 0x24;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r9);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r10);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r11);  // (from the original)
    *gptr<u32>(ea_1 + 0x20) = u32(r14);  // (from the original)
    r5 = r0;
    r13 = r13 - 0x68u;  // (from the original)
    r8 = 0x10u;  // (from the original)
    r0_1 = u32(arg0->byte_69);
    cf_1 = r0_1 >= 0xcu;  // (from the original)
    if (!cf_1) {
        cf_1 = r0_1 >= 9u;
    }
    if (cf_1) {
        r0_2 = 0u;
    } else {
        r0_2 = 1u;
    }
    *gptr<u32>(r13 + 0x24u) = u32(r0_2);  // (from the original)
    if (r2 == 0) {
        r0_3 = 4u;
    } else {
        r0_3 = 1u;
    }
    *gptr<u32>(r13 + 0x18u) = u32(r0_3);  // (from the original)
    r0_4 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001c4c14(r0_4, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r0_5 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    zf_1 = r0_5 == 0;
    cf_2 = r0_5 >= 0u;
    if (cf_2 && !zf_1) {
        r11 = 0x95c010u;  // (from the original)
    }
    r0 = 0u;
    *gptr<u32>(r13 + 8u) = u32(r0);
    if (!cf_2 || zf_1) {
        goto L_70bed4;
    }
L_70bdd4:;
    r10 = r0 << 5;
    r9 = 0u;
    *gptr<u32>(r13 + 0x3cu) = u32(r0 * *gptr<u32>(r13 + 0x24u) << 0x1e >> 0x17);  // (from the original)
L_70bdf0:;
    r4 = 0u;
    r7 = *gptr<u32>(r13 + 0x3cu) + ((r9 & 0x1fu) << 2);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r9 + r10);
    do {
L_70be08:;
        r2_1 = *gptr<u32>(r13 + 4u);
        r6_1 = r4 << 0x19 >> 0x18;  // (from the original)
        r0_6 = r6_1 & 0x1fu;  // (from the original)
        r0_7 = lsr_r(*gptr<u32>(r5 + (r7 + (r0_6 >> 3) << 2) + 0x6cu), r0_6 << 0x1d >> 0x1b & 0xff) & 0xfu;  // (from the original)
        if (r0_7 == 0xfu) {  // (from the original)
            r0_7 = 0u;
        }
        r3_1 = u32(*gptr<u16>(r11 + (u32(*gptr<u8>(r0_7 + r5 + 0x58u)) << 1)));  // (from the original)
        r0_8 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_001c4bc8(r0_8, r6_1, r2_1, r3_1);
        r0_9 = r6_1 + 1u & 0x1fu;  // (from the original)
        r2_2 = *gptr<u32>(r13 + 4u);
        r0_10 = lsr_r(*gptr<u32>(r5 + (r7 + (r0_9 >> 3) << 2) + 0x6cu), r0_9 << 0x1d >> 0x1b & 0xff) & 0xfu;  // (from the original)
        if (r0_10 == 0xfu) {  // (from the original)
            r0_10 = 0u;
        }
        r1_2 = r6_1 + 1u;
        r3_2 = u32(*gptr<u16>(r11 + (u32(*gptr<u8>(r0_10 + r5 + 0x58u)) << 1)));  // (from the original)
        r0_11 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_001c4bc8(r0_11, r1_2, r2_2, r3_2);
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < r8);
    r9 = r9 + 1u;
    if (r9 < 0x20u) {  // (from the original)
        guest::preempt();
        goto L_70bdf0;
    }
    r1_1 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    r0 = *gptr<u32>(r13 + 8u) + 1u;
    *gptr<u32>(r13 + 8u) = u32(r0);
    if (r0 < r1_1) {
        guest::preempt();
        goto L_70bdd4;
    }
L_70bed4:;
    r0_12 = r13 + 0x30u;  // (from the original)
    r13 = r13 + 0x44u;  // (from the original)
    ea_2 = r13;
    r13 = r13 + 0x24;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_1 = *gptr<u32>(ea_2 + 4);
    r6_2 = *gptr<u32>(ea_2 + 8);
    r7_1 = *gptr<u32>(ea_2 + 0xc);  // (from the original)
    r8_1 = *gptr<u32>(ea_2 + 0x10);  // (from the original)
    r9_1 = *gptr<u32>(ea_2 + 0x14);  // (from the original)
    r10_1 = *gptr<u32>(ea_2 + 0x18);  // (from the original)
    r11_1 = *gptr<u32>(ea_2 + 0x1c);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
    guest::cpu()->r[13] = r13;
    return r0_12;
}

}  // namespace d_0070bd74
GUEST_EXPORT(0x0070bd74, d_0070bd74::f_0070bd74);

// f_0070bf30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070bf30 {


u32 f_0070bf30(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r3_1 = 0;
    u32 res_1 = 0;
    u32 ea_2 = 0;
    u32 res_2 = 0;
    u32 ea_3 = 0;
    u32 res_3 = 0;
    u32 r4_1 = 0;
    u32 ea_4 = 0;
    u32 r2_1 = 0;
    u32 ea_5 = 0;
    u32 r4_2 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r0_1 = 0;
    goto L_70bf30;
L_561de0:;
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r7);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r6 = 0x9752c1u;  // (from the original)
    if (u32(*gptr<u8>(r6)) != 0) {
        goto L_561e40;
    }
    r5 = 0xedb88320u;  // (from the original)
    r7 = 0xae4e44u;  // (from the original)
    r12 = 0u;
L_561e00:;
    r2 = r12;
    r4 = 4u;
    do {
L_561e08:;
        if ((r2 & 1u) == 0) {
            r3_1 = r2 >> 1;
        } else {
            r3_1 = r5 ^ r2 >> 1;
        }
        if ((r3_1 & 1u) == 0) {
            r2 = r3_1 >> 1;
        } else {
            r2 = r5 ^ r3_1 >> 1;
        }
        res_1 = r4 - 1u;
        r4 = res_1;
        guest::preempt();
    } while (res_1 != 0);
    *gptr<u32>(r7 + (r12 << 2)) = u32(r2);
    r12 = r12 + 1u;
    if (r12 < 0x100u) {  // (from the original)
        guest::preempt();
        goto L_561e00;
    }
    *gptr<u8>(r6) = u8(1u);
L_561e40:;
    r3 = 0xae4e44u;  // (from the original)
    r2 = ~0u;
    if (r1 == 0) {
        goto L_561ea8;
    }
    r0 = r0 - 1u;
    if ((r1 & 1u) != 0) {
        ea_2 = r0 + 1u;
        r0 = ea_2;
        r2 = *gptr<u32>(r3 + (((u32(*gptr<u8>(ea_2)) ^ r2) & 0xffu) << 2)) ^ r2 >> 8;  // (from the original)
    }
    res_2 = r1 >> 1;
    r1 = res_2;
    if (res_2 == 0) {
        goto L_561ea8;
    }
    do {
L_561e78:;
        ea_3 = r0 + 1u;
        res_3 = r1 - 1u;
        r1 = res_3;
        r4_1 = (u32(*gptr<u8>(ea_3)) ^ r2) & 0xffu;  // (from the original)
        ea_4 = r0 + 2u;
        r0 = ea_4;
        r2_1 = *gptr<u32>(r3 + (r4_1 << 2)) ^ r2 >> 8;
        r2 = *gptr<u32>(r3 + (((u32(*gptr<u8>(ea_4)) ^ r2_1) & 0xffu) << 2)) ^ r2_1 >> 8;  // (from the original)
        guest::preempt();
    } while (res_3 != 0);
L_561ea8:;
    ea_5 = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4_2 = *gptr<u32>(ea_5);
    r5_1 = *gptr<u32>(ea_5 + 4);
    r6_1 = *gptr<u32>(ea_5 + 8);
    r7_1 = *gptr<u32>(ea_5 + 0xc);  // (from the original)
    r0_1 = ~r2;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
L_70bf30:;
    r1 = 0x2eu;  // (from the original)
    guest::preempt();
    goto L_561de0;
}

}  // namespace d_0070bf30
GUEST_EXPORT(0x0070bf30, d_0070bf30::f_0070bf30);

// f_0070c188: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070c188 {

struct __attribute__((packed)) Object_0070c188_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0070c188_0, byte_0, 0x0);  // (from the original)


u32 f_0070c188(gptr<Object_0070c188_0> arg0) {
    u32 r0_1 = 0;
    r0_1 = u32(s32(u32(s32(s8(arg0->byte_0)))) >> 0x1f) + 1u;  // (from the original)
    return r0_1;
}

}  // namespace d_0070c188
GUEST_EXPORT(0x0070c188, d_0070c188::f_0070c188);

// f_0070c23c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070c23c {

inline constexpr guest::Function<0x005fdf68, u32(u32, u32, u32, u32)> call_005fdf68;  // (from the original)

u32 f_0070c23c(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_005fdf68(r0, r1, 0x11u, guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_1) = u32(0x908b9cu);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0x908b9cu;  // (from the original)
    return r0_1;
}

}  // namespace d_0070c23c
GUEST_EXPORT(0x0070c23c, d_0070c23c::f_0070c23c);

// f_0070c258: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070c258 {


u32 f_0070c258(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    u32 r2 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    r2 = 0x88f984u;  // (from the original)
    r0 = 0u;
    do {
L_70c260:;
        r3_1 = r2 + (r0 << 1);
        if (!(u32(s32(s8(*gptr<u8>(r3_1 + 1u)))) != r1)) {
            r0_1 = u32(*gptr<u8>(r2 + (r0 << 1)));
            return r0_1;
        }
        if (!(u32(s32(s8(*gptr<u8>(r3_1 + 3u)))) != r1)) {
            r0_2 = u32(*gptr<u8>(r2 + (r0 << 1) + 2u));
            return r0_2;
        }
        r0 = r0 + 2u;
        guest::preempt();
    } while (s32(r0) < s32(0x12u));  // (from the original)
    return 0xfcu;  // (from the original)
}

}  // namespace d_0070c258
GUEST_EXPORT(0x0070c258, d_0070c258::f_0070c258);

// f_0070c2a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070c2a8 {

struct __attribute__((packed)) Object_0070c2a8_0 {
    u8 unknown_0[0xd2];  // (not used here)
    u8 byte_d2;
};
GUEST_OFFSET(Object_0070c2a8_0, byte_d2, 0xd2);  // (from the original)


u32 f_0070c2a8(gptr<Object_0070c2a8_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2_1 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 vf_1 = 0;
    r2_1 = u32(arg0->byte_d2);
    res_1 = r2_1 - r1;
    nf_1 = res_1 >> 0x1f;  // (from the original)
    zf_1 = res_1 == 0;
    vf_1 = ((r2_1 ^ r1) & (r2_1 ^ res_1)) >> 0x1f;  // (from the original)
    if (!zf_1 && nf_1 == vf_1) {
        r1 = r1 + (r1 << 1);
        r0 = r0 + (r1 << 1);
    }
    if (zf_1 || nf_1 != vf_1) {
        r0 = 0u;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0070c2a8
GUEST_EXPORT(0x0070c2a8, d_0070c2a8::f_0070c2a8);

// f_0070d7e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070d7e4 {

struct __attribute__((packed)) Object_0070d7e4_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0070d7e4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0070d7e4_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x006a6c78, u32(u32, u32, u32, u32)> call_006a6c78;  // (from the original)

u32 f_0070d7e4(u32 r0, gptr<Object_0070d7e4_1> arg1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4u) = u32(0u);
    r2_1 = arg1->word_0;
    r3_1 = arg1->word_4;
    r1_1 = r13 + 4u;
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_006a6c78(r0_1, r1_1, r2_1, r3_1);
    r1_2 = *gptr<u32>(r13);
    if (*gptr<u32>(r0) != r1_2) {
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r1_3 = *gptr<u32>(r13 + 4u);
    if (*gptr<u32>(r0 + 4u) == r1_3) {
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_0070d7e4
GUEST_EXPORT(0x0070d7e4, d_0070d7e4::f_0070d7e4);

// f_0070d904: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070d904 {

inline constexpr guest::Function<0x00757aa0, u32(u32, u32, u32, u32)> call_00757aa0;  // (from the original)

u32 f_0070d904(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_00757aa0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = *gptr<u32>(r0);
    r0_2 = u32(*gptr<u16>(r1_1 + (r0_1 << 1)));
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_0070d904
GUEST_EXPORT(0x0070d904, d_0070d904::f_0070d904);

// f_0070e484: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070e484 {

struct __attribute__((packed)) Object_0070e484_0 {
    u8 unknown_0[0xe];  // (not used here)
    u8 byte_e;
};
GUEST_OFFSET(Object_0070e484_0, byte_e, 0xe);  // (from the original)


u32 f_0070e484(gptr<Object_0070e484_0> arg0) {
    u32 r0_1 = 0;
    r0_1 = u32(arg0->byte_e) << 0x1a >> 0x1e;  // (from the original)
    return r0_1;
}

}  // namespace d_0070e484
GUEST_EXPORT(0x0070e484, d_0070e484::f_0070e484);

// f_0070e494: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070e494 {

struct __attribute__((packed)) Object_0070e494_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0070e494_0, word_8, 0x8);  // (from the original)


u32 f_0070e494(gptr<Object_0070e494_0> arg0) {
    u32 r0_1 = 0;
    r0_1 = arg0->word_8 >> 0x1e;  // (from the original)
    return r0_1;
}

}  // namespace d_0070e494
GUEST_EXPORT(0x0070e494, d_0070e494::f_0070e494);

// f_0070e4a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070e4a0 {

struct __attribute__((packed)) Object_0070e4a0_0 {
    u8 unknown_0[0xc];  // (not used here)
    u16 half_c;
};
GUEST_OFFSET(Object_0070e4a0_0, half_c, 0xc);  // (from the original)


u32 f_0070e4a0(gptr<Object_0070e4a0_0> arg0) {
    u32 r0_1 = 0;
    r0_1 = (u32(arg0->half_c) & 0x8000u) >> 0xf;  // (from the original)
    return r0_1;
}

}  // namespace d_0070e4a0
GUEST_EXPORT(0x0070e4a0, d_0070e4a0::f_0070e4a0);

// f_0070e4e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070e4e4 {

struct __attribute__((packed)) Object_0070e4e4_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0070e4e4_0, word_8, 0x8);  // (from the original)


u32 f_0070e4e4(gptr<Object_0070e4e4_0> arg0) {
    u32 r0_1 = 0;
    r0_1 = arg0->word_8 << 5 >> 0x1c;  // (from the original)
    return r0_1;
}

}  // namespace d_0070e4e4
GUEST_EXPORT(0x0070e4e4, d_0070e4e4::f_0070e4e4);

// f_0070e6c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070e6c0 {

inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x0071a844, u32(u32, u32, u32, u32)> call_0071a844;  // (from the original)

u32 f_0070e6c0(u32 r0, u32 r1) {
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    res_1 = r1 - 0x123u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    if (res_1 != 0) {
        guest::cpu()->r[13] += 8u;
        return 0u;
    }
    r0_1 = r0 + 0x200u;  // (from the original)
    r0_2 = call_0071a844(r0_1, r1, res_1, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r0_3 = call_002fcb34(r0_2, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_3 == 0x14u) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        return 1u;
    }
    guest::cpu()->r[13] += 8u;
    return 0u;
}

}  // namespace d_0070e6c0
GUEST_EXPORT(0x0070e6c0, d_0070e6c0::f_0070e6c0);

// f_0070e6f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070e6f0 {

inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x0030306c, u32(u32, u32, u32, u32)> call_0030306c;  // (from the original)
inline constexpr guest::Function<0x0071a3a8, u32(u32, u32, u32, u32)> call_0071a3a8;  // (from the original)
inline constexpr guest::Function<0x0071a868, u32(u32, u32, u32, u32)> call_0071a868;  // (from the original)
inline constexpr guest::Function<0x0076a4bc, u32(u32, u32, u32, u32)> call_0076a4bc;  // (from the original)

u32 f_0070e6f0(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 zf_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0x200u;  // (from the original)
    r0_2 = call_0071a868(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_3 = call_0076a4bc(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    zf_1 = r0_3 == 0;
    r0_4 = r0 + 0x200u;  // (from the original)
    if (!zf_1) {
        r0_5 = call_0071a868(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r0_6 = call_0030306c(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_6 == 0) {
            guest::cpu()->r[13] += 8u;
            return r0_6;
        }
        guest::cpu()->r[13] += 8u;
        return 1u;
    }
    r0_7 = call_0071a3a8(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_8 = call_002fcb34(r0_7, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_8 != 9u) {
        guest::cpu()->r[13] += 8u;
        return 1u;
    }
    r0_9 = r0 + 0x200u;  // (from the original)
    r0_10 = call_0071a3a8(r0_9, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_11 = call_0030306c(r0_10, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_11 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0_11;
    }
    guest::cpu()->r[13] += 8u;
    return 1u;
}

}  // namespace d_0070e6f0
GUEST_EXPORT(0x0070e6f0, d_0070e6f0::f_0070e6f0);

// f_0070ead8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070ead8 {

struct __attribute__((packed)) Object_0070ead8_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_0070ead8_0, word_c, 0xc);  // (from the original)


u32 f_0070ead8(gptr<Object_0070ead8_0> arg0) {
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    r0_1 = arg0->word_c;
    zf_1 = r0_1 == 3u;
    if (!zf_1) {
        zf_1 = r0_1 == 2u;
    }
    if (zf_1) {
        return 1u;
    }
    if (r0_1 != 4u) {
        return 0u;
    }
    return 1u;
}

}  // namespace d_0070ead8
GUEST_EXPORT(0x0070ead8, d_0070ead8::f_0070ead8);

// f_0070eafc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070eafc {


u32 f_0070eafc(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    if (r1 >= 0x5eu) {  // (from the original)
        r0_1 = 0x10002ccu;  // (from the original)
    } else {
        r0_1 = r1 + 0x10002ccu;  // (from the original)
    }
    return r0_1;
}

}  // namespace d_0070eafc
GUEST_EXPORT(0x0070eafc, d_0070eafc::f_0070eafc);

// f_0070eb14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070eb14 {


u32 f_0070eb14(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    if (r1 >= 0x5eu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0x1e5fu;  // (from the original)
    }
    r0_1 = r1 + (r1 << 2);
    r0_2 = *gptr<u32>(0x83a980u + (r0_1 << 2) + 8u);  // (from the original)
    guest::cpu()->r[1] = 0x83a980u;  // (from the original)
    return r0_2;
}

}  // namespace d_0070eb14
GUEST_EXPORT(0x0070eb14, d_0070eb14::f_0070eb14);

// f_0070eb3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070eb3c {


u32 f_0070eb3c(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    if (r1 >= 0x5eu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 2u;
    }
    r0_1 = r1 + (r1 << 2);
    r0_2 = u32(*gptr<u8>(0x83a980u + (r0_1 << 2) + 6u));  // (from the original)
    guest::cpu()->r[1] = 0x83a980u;  // (from the original)
    return r0_2;
}

}  // namespace d_0070eb3c
GUEST_EXPORT(0x0070eb3c, d_0070eb3c::f_0070eb3c);

// f_0070eb60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070eb60 {


u32 f_0070eb60(u32 r0, u32 r1) {
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    zf_1 = r1 == 0x5eu;  // (from the original)
    cf_1 = r1 >= 0x5eu;  // (from the original)
    if (cf_1 && !zf_1) {
        r0 = 0x28u;  // (from the original)
    }
    if (zf_1) {
        guest::cpu()->r[1] = r1;
        return 0x24u;  // (from the original)
    }
    if (cf_1) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0_1 = r1 + (r1 << 2);
    r0_2 = u32(*gptr<u8>(0x83a980u + (r0_1 << 2) + 0x11u));  // (from the original)
    guest::cpu()->r[1] = 0x83a980u;  // (from the original)
    return r0_2;
}

}  // namespace d_0070eb60
GUEST_EXPORT(0x0070eb60, d_0070eb60::f_0070eb60);

// f_0070eb8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070eb8c {


u32 f_0070eb8c(u32 r0, u32 r1) {
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    zf_1 = r1 == 0x5eu;  // (from the original)
    cf_1 = r1 >= 0x5eu;  // (from the original)
    if (cf_1 && !zf_1) {
        r0 = 0x20u;  // (from the original)
    }
    if (zf_1) {
        guest::cpu()->r[1] = r1;
        return 0x10u;  // (from the original)
    }
    if (cf_1) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0_1 = r1 + (r1 << 2);
    r0_2 = u32(*gptr<u8>(0x83a980u + (r0_1 << 2) + 0x10u));  // (from the original)
    guest::cpu()->r[1] = 0x83a980u;  // (from the original)
    return r0_2;
}

}  // namespace d_0070eb8c
GUEST_EXPORT(0x0070eb8c, d_0070eb8c::f_0070eb8c);

// f_0070ebb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070ebb8 {


u32 f_0070ebb8(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    if (r1 >= 0x5eu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0x10u;  // (from the original)
    }
    r0_1 = r1 + (r1 << 2);
    r0_2 = u32(*gptr<u8>(0x83a980u + (r0_1 << 2) + 0x12u));  // (from the original)
    guest::cpu()->r[1] = 0x83a980u;  // (from the original)
    return r0_2;
}

}  // namespace d_0070ebb8
GUEST_EXPORT(0x0070ebb8, d_0070ebb8::f_0070ebb8);

// f_0070eca8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070eca8 {


u32 f_0070eca8(u32 r0, u32 r1) {
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    zf_1 = r1 == 0x5eu;  // (from the original)
    cf_1 = r1 >= 0x5eu;  // (from the original)
    if (cf_1 && !zf_1) {
        r0 = 3u;
    }
    if (zf_1) {
        guest::cpu()->r[1] = r1;
        return 2u;
    }
    if (cf_1) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0_1 = r1 + (r1 << 2);
    r0_2 = u32(*gptr<u8>(0x83a980u + (r0_1 << 2) + 5u));  // (from the original)
    guest::cpu()->r[1] = 0x83a980u;  // (from the original)
    return r0_2;
}

}  // namespace d_0070eca8
GUEST_EXPORT(0x0070eca8, d_0070eca8::f_0070eca8);

// f_0070ecd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070ecd4 {


u32 f_0070ecd4(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    if (r1 == 0x5au) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 4u;
    }
    if (r1 < 0x5eu) {  // (from the original)
        r0_1 = r1 + (r1 << 2);
        r0_2 = u32(*gptr<u8>(0x83a980u + (r0_1 << 2) + 4u));  // (from the original)
        guest::cpu()->r[1] = 0x83a980u;  // (from the original)
        return r0_2;
    }
    guest::cpu()->r[1] = r1;
    return 4u;
}

}  // namespace d_0070ecd4
GUEST_EXPORT(0x0070ecd4, d_0070ecd4::f_0070ecd4);

// f_0070ed04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070ed04 {


u32 f_0070ed04(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    if (r1 >= 0x5bu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r0_1 = (r1 << 3) - r1;
    r0_2 = *gptr<u32>(0x83b4c0u + (r0_1 << 2) + 8u);  // (from the original)
    guest::cpu()->r[1] = 0x83b4c0u;  // (from the original)
    return r0_2;
}

}  // namespace d_0070ed04
GUEST_EXPORT(0x0070ed04, d_0070ed04::f_0070ed04);

// f_0070ed28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070ed28 {

inline guest::global<u32, 0x0070ed48> global_0070ed48;  // (from the original)

u32 f_0070ed28(u32 r0, u32 r1) {
    float S0_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    float S0_2 = 0;
    if (r1 >= 0x5bu) {  // (from the original)
        S0_1 = std::bit_cast<float>(*global_0070ed48);
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_1;
        return r0;
    }
    r0_1 = (r1 << 3) - r1;
    r0_2 = 0x83b4c0u + (r0_1 << 2);  // (from the original)
    S0_2 = std::bit_cast<float>(*gptr<u32>(r0_2 + 0xcu));  // (from the original)
    guest::cpu()->r[1] = 0x83b4c0u;  // (from the original)
    guest::cpu()->s[0] = S0_2;
    return r0_2;
}

}  // namespace d_0070ed28
GUEST_EXPORT(0x0070ed28, d_0070ed28::f_0070ed28);

// f_0070ed68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070ed68 {

inline constexpr guest::Function<0x002f86c0, u32(u32, u32, u32, u32)> call_002f86c0;  // (from the original)

u32 f_0070ed68(u32 r0_unused, u32 r1, u32 r2) {
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    if (r1 >= 0x5bu) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r2;
    }
    r2_1 = 0x83b4c0u + ((r1 << 3) - r1 << 2);  // (from the original)
    r1_1 = *gptr<u32>(r2_1 + 0x14u);  // (from the original)
    if (r2 < r1_1) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r2;
    }
    r4_1 = *gptr<u32>(r2_1 + 0x10u);  // (from the original)
    r0_1 = r2 - r4_1;
    r1_2 = r1_1 - r4_1;
    call_002f86c0(r0_1, r1_2, r2_1, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r0_2 = r1_3 + r4_1;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_3;
    return r0_2;
}

}  // namespace d_0070ed68
GUEST_EXPORT(0x0070ed68, d_0070ed68::f_0070ed68);

// f_0070edac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070edac {


u32 f_0070edac(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    if (r1 >= 0x5bu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0x1020u;  // (from the original)
    }
    r0_1 = (r1 << 3) - r1;
    r0_2 = *gptr<u32>(0x83b4c0u + (r0_1 << 2) + 0x18u);  // (from the original)
    guest::cpu()->r[1] = 0x83b4c0u;  // (from the original)
    return r0_2;
}

}  // namespace d_0070edac
GUEST_EXPORT(0x0070edac, d_0070edac::f_0070edac);

// f_0070edd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070edd4 {


u32 f_0070edd4(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    if (r1 >= 0x5bu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r0_1 = (r1 << 3) - r1;
    r0_2 = u32(*gptr<u8>(0x83b4c0u + (r0_1 << 2) + 4u));  // (from the original)
    guest::cpu()->r[1] = 0x83b4c0u;  // (from the original)
    return r0_2;
}

}  // namespace d_0070edd4
GUEST_EXPORT(0x0070edd4, d_0070edd4::f_0070edd4);

// f_0070edf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070edf8 {


u32 f_0070edf8(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    r0_1 = 0xfefffd8fu + r1;  // (from the original)
    if (r0_1 >= 0x5bu) {  // (from the original)
        r0_1 = ~0u;
    }
    return r0_1;
}

}  // namespace d_0070edf8
GUEST_EXPORT(0x0070edf8, d_0070edf8::f_0070edf8);

// f_0070ee10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070ee10 {


u32 f_0070ee10(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    if (r1 >= 0x5bu) {  // (from the original)
        r0_1 = 0x83b4c0u;  // (from the original)
    } else {
        r0_2 = (r1 << 3) - r1;
        r1 = 0x83b4c0u;  // (from the original)
        r0_1 = r1 + (r0_2 << 2);
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_0070ee10
GUEST_EXPORT(0x0070ee10, d_0070ee10::f_0070ee10);

// f_0070eed0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070eed0 {


u32 f_0070eed0(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    r1_1 = u32(s32(s16(r1)) * s32(s16(0x371u)));  // (from the original)
    r0_1 = r0 + (r1_1 << 3) + 0x2058u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0070eed0
GUEST_EXPORT(0x0070eed0, d_0070eed0::f_0070eed0);

// f_0070eeec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070eeec {


u32 f_0070eeec(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    r1_1 = (r1 << 4) - r1;
    r1_2 = r1_1 + (r1_1 << 1);
    r0_1 = r0 + (r1_2 << 5) + 0x8e78u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0_1;
}

}  // namespace d_0070eeec
GUEST_EXPORT(0x0070eeec, d_0070eeec::f_0070eeec);

// f_0070ef54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070ef54 {

inline constexpr guest::Function<0x003193e8, u32(u32, u32, u32, u32)> call_003193e8;  // (from the original)
inline constexpr guest::Function<0x0070f624, u32(u32, u32, u32, u32)> call_0070f624;  // (from the original)
inline constexpr guest::Function<0x0071c0d0, u32(u32, u32, u32, u32)> call_0071c0d0;  // (from the original)
inline constexpr guest::Function<0x0071fbec, u32(u32, u32, u32, u32)> call_0071fbec;  // (from the original)

u32 f_0070ef54(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_2 = 0;
    u32 r3_3 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 8u;
    call_0070f624(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_1 = r0 + 0x24u;  // (from the original)
    call_0071fbec(r0_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_2 = r0 + 0xc0cu;  // (from the original)
    call_0071c0d0(r0_2, r1_2, r2_2, r3_2);
    r3_3 = ~0u;
    r0_3 = r0 + 0x2058u;  // (from the original)
    r0_4 = call_003193e8(r0_3, 0x16188u, r3_3, r3_3);  // (from the original)
    *gptr<u32>(0x2054u + r0) = u32(r0_4);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0x2054u;  // (from the original)
    return r0_4;
}

}  // namespace d_0070ef54
GUEST_EXPORT(0x0070ef54, d_0070ef54::f_0070ef54);

// f_0070efa0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070efa0 {

inline constexpr guest::Function<0x003193e8, u32(u32, u32, u32, u32)> call_003193e8;  // (from the original)
inline constexpr guest::Function<0x0070f648, u32(u32, u32, u32, u32)> call_0070f648;  // (from the original)
inline constexpr guest::Function<0x0071c0f4, u32(u32, u32, u32, u32)> call_0071c0f4;  // (from the original)
inline constexpr guest::Function<0x0071fc14, u32(u32, u32, u32, u32)> call_0071fc14;  // (from the original)

u32 f_0070efa0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r0_8 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_0070f648(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    r0_2 = r0 + 0x24u;  // (from the original)
    r0_3 = call_0071fc14(r0_2, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return r0_3;
    }
    r0_4 = r0 + 0xc0cu;  // (from the original)
    r0_5 = call_0071c0f4(r0_4, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    if (r0_5 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_3;
        return r0_5;
    }
    r3_3 = ~0u;
    r0_6 = r0 + 0x2058u;  // (from the original)
    r0_7 = call_003193e8(r0_6, 0x16188u, r3_3, r3_3);  // (from the original)
    r1_4 = *gptr<u32>(0x2054u + r0);  // (from the original)
    if (r1_4 == r0_7) {
        r0_8 = 1u;
    } else {
        r0_8 = 0u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_4;
    return r0_8;
}

}  // namespace d_0070efa0
GUEST_EXPORT(0x0070efa0, d_0070efa0::f_0070efa0);

// f_0070f534: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070f534 {


u32 f_0070f534(u32 r0, u32 r1) {
    u32 sco = 0;
    u32 cf_1 = 0;
    u32 b_1 = 0;
    u32 res_1 = 0;
    u32 r0_1 = 0;
    cf_1 = r1 >= 4u;
    if (cf_1) {
        return 0u;
    }
    sco = cf_1;
    b_1 = lsl_rc(0x1000u, r1 & 0xff, &sco);  // (from the original)
    res_1 = u32(*gptr<u16>(r0 + 0x22u)) & b_1;  // (from the original)
    r0_1 = res_1;
    if (res_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_0070f534
GUEST_EXPORT(0x0070f534, d_0070f534::f_0070f534);

// f_0070f56c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070f56c {

struct __attribute__((packed)) Object_0070f56c_0 {
    u8 unknown_0[0x22];  // (not used here)
    u16 half_22;
};
GUEST_OFFSET(Object_0070f56c_0, half_22, 0x22);  // (from the original)

inline constexpr guest::Function<0x003506c8, u32(u32, u32, u32, u32)> call_003506c8;  // (from the original)

u32 f_0070f56c(gptr<Object_0070f56c_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    if ((u32(arg0->half_22) & 1u) == 0) {
        guest::cpu()->r[13] += 8u;
        return 0u;
    }
    r0_1 = call_003506c8(0x863u, r1, r2, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (*gptr<u32>(r0 + 8u) != r0_1) {
        guest::cpu()->r[13] += 8u;
        return 0u;
    }
    if (*gptr<u32>(r0 + 4u) == r1_1) {
        guest::cpu()->r[13] += 8u;
        return 1u;
    }
    guest::cpu()->r[13] += 8u;
    return 0u;
}

}  // namespace d_0070f56c
GUEST_EXPORT(0x0070f56c, d_0070f56c::f_0070f56c);

// f_0070f678: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070f678 {


u32 f_0070f678(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    r0_1 = u32(*gptr<u8>(r0 + (r2 << 4) + r1));
    return r0_1;
}

}  // namespace d_0070f678
GUEST_EXPORT(0x0070f678, d_0070f678::f_0070f678);
