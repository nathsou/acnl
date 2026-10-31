// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_00570544: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00570544 {

struct __attribute__((packed)) Object_00570544_0 {
    u8 unknown_0[0x5ec];  // (not used here)
    u8 byte_5ec;
    u8 unknown_5ed[0x3];  // (not used here)
    u32 word_5f0;
    u8 unknown_5f4[0x170];  // (not used here)
    u16 half_764;
};
GUEST_OFFSET(Object_00570544_0, byte_5ec, 0x5ec);  // (from the original)
GUEST_OFFSET(Object_00570544_0, word_5f0, 0x5f0);  // (from the original)
GUEST_OFFSET(Object_00570544_0, half_764, 0x764);  // (from the original)

inline guest::global<u32, 0x005706f8> global_005706f8;  // (from the original)
inline constexpr guest::Function<0x001e601c, u32(u32, u32, u32, u32)> call_001e601c;  // (from the original)
inline constexpr guest::Function<0x001e6df4, u32(u32, u32, u32, u32)> call_001e6df4;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x004f2c10, u32(u32, u32, u32, u32)> call_004f2c10;  // (from the original)
inline constexpr guest::Function<0x00693410, u32(u32, u32, u32, u32)> call_00693410;  // (from the original)
inline constexpr guest::Function<0x006a98b0, u32(u32, u32, u32, u32)> call_006a98b0;  // (from the original)
inline constexpr guest::Function<0x006a9a80, u32(u32, u32, u32, u32)> call_006a9a80;  // (from the original)
inline constexpr guest::Function<0x00768524, u32(u32, u32, u32, u32)> call_00768524;  // (from the original)

u32 f_00570544(gptr<Object_00570544_0> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r6_1 = 0;
    u32 r5_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 zf_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_1 = 0;
    u32 r0_6 = 0;
    u32 r3_1 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    float S0_1 = 0;
    u32 r7_1 = 0;
    u32 r0_10 = 0;
    float S0_2 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_3 = 0;
    u32 r3_3 = 0;
    float S0_3 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    float S0_4 = 0;
    u32 r0_15 = 0;
    u32 r1_4 = 0;
    r0_1 = arg0->word_5f0;
    r13 = r13 - 0x28u;  // (from the original)
    r6_1 = r0 + 0x768u;  // (from the original)
    if (r0_1 == 0) {
        goto L_5706b0;
    }
    r5_1 = r0 + 0x700u;  // (from the original)
    r1 = u32(*gptr<u8>(r0_1 + 0x1bu)) << 0x1a;  // (from the original)
    r0_2 = r1 >> 0x1e;  // (from the original)
    if (r0_2 >= 4u) {
        r0_3 = 0u;
        goto L_5705a4;
    }
    if (r0_2 == 0) {
        goto L_5706b0;
    }
    zf_1 = u32(arg0->half_764) << 0x16 >> 0x1f == 0;  // (from the original)
    if (!zf_1) {
        zf_1 = u32(arg0->byte_5ec) == 2u;
    }
    if (zf_1) {
        goto L_5706b0;
    } else {
        r0_3 = 1u;
    }
L_5705a4:;
    if (r0_3 == 0) {
        goto L_5706b0;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0_4 = call_00693410(r0_3, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    if (r0_4 == 0) {
        goto L_5706b0;
    }
    r0_5 = *gptr<u32>(r0 + 0x5f0u);  // (from the original)
    if (r0_5 == 0) {
        goto L_5705e4;
    }
    r1 = u32(*gptr<u8>(r0_5 + 0x1bu)) << 0x1a >> 0x1e;  // (from the original)
    if (r1 >= 4u) {
        goto L_5705e4;
    }
    if (r1 == 3u) {
        goto L_5706b0;
    }
L_5705e4:;
    r1_1 = u32(s32(s8(*gptr<u8>(r5_1 + 0xa3u))));  // (from the original)
    if (r0_5 == 0) {
        goto L_570614;
    }
    r0_6 = u32(*gptr<u8>(r0_5 + 0x1bu)) << 0x1a >> 0x1e;  // (from the original)
    if (r0_6 >= 4u) {
        goto L_570614;
    }
    if (r0_6 == 1u) {
        r3_1 = 1u;
        goto L_570618;
    }
L_570614:;
    r3_1 = 0u;
L_570618:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0_7 = call_006a98b0(r6_1, r1_1, 1u, r3_1);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    if (r0_7 == 0) {
        goto L_5706b0;
    }
    r0_8 = r0 + 0x5e4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0_9 = call_00768524(r0_8, r1, r2, r3);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    r7_1 = r0_9 & 0xffu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    r0_10 = call_002f74c8(r0_9, r1_2, r2_1, r3_2);
    S0_2 = guest::cpu()->s[0];
    if (u32(*gptr<u8>(r5_1 + 0xa3u)) == 0) {  // (from the original)
        goto L_5706a0;
    }
    r0_11 = *gptr<u32>(r0 + 0x5f0u);  // (from the original)
    if (r0_11 == 0) {
        goto L_57067c;
    }
    r0_12 = u32(*gptr<u8>(r0_11 + 0x1bu)) << 0x1a >> 0x1e;  // (from the original)
    if (r0_12 >= 4u) {
        goto L_57067c;
    }
    if (r0_12 == 1u) {
        goto L_570680;
    }
L_57067c:;
    r0_12 = 0u;
L_570680:;
    *gptr<u32>(r13) = u32(r0_12);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    call_001e601c(r7_1, 0u, r0_10, 1u);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    goto L_5706b0;
L_5706a0:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    call_001e6df4(r7_1, 0u, r0_10, 1u);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
L_5706b0:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    call_006a9a80(r6_1, r1, r2, r3);
    r1_3 = guest::cpu()->r[1];
    r3_3 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    r0_13 = *gptr<u32>(r6_1 + 0x1cu);  // (from the original)
    if (r0_13 != 0) {
        r0_14 = *gptr<u32>(r6_1 + 8u);
        S0_4 = std::bit_cast<float>(*global_005706f8);
        *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0_4));
        *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(S0_4));
        *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0_4));
        *gptr<u32>(r13 + 0xcu) = u32(r0_14);  // (from the original)
        r0_15 = *gptr<u32>(r6_1 + 0x1cu);  // (from the original)
        r1_4 = r13;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_4;
        r0_13 = call_004f2c10(r0_15, r1_4, 3u, r3_3);
        r1_3 = guest::cpu()->r[1];
        S0_3 = guest::cpu()->s[0];
    }
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    return r0_13;
}

}  // namespace d_00570544
GUEST_EXPORT(0x00570544, d_00570544::f_00570544);

// f_00570adc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00570adc {

struct __attribute__((packed)) Object_00570adc_0 {
    u8 unknown_0[0x1c8];  // (not used here)
    u32 word_1c8;
};
GUEST_OFFSET(Object_00570adc_0, word_1c8, 0x1c8);  // (from the original)


u32 f_00570adc(gptr<Object_00570adc_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r12_1 = 0;
    u32 zf_1 = 0;
    u32 r12_2 = 0;
    u32 zf_2 = 0;
    u32 r2_1 = 0;
    u32 zf_3 = 0;
    r0_1 = 1u;
    if ((r2 & 1u) != 0) {
        r12_1 = *gptr<u32>(arg0->word_1c8 + 0x64u);  // (from the original)
        zf_1 = r12_1 == 0;
        if (!zf_1) {
            zf_1 = r12_1 == r1;
        }
        if (!zf_1) {
            r0_1 = 0u;
        }
    }
    if ((r2 & 0xeu) != 0) {  // (from the original)
        r12_2 = *gptr<u32>(*gptr<u32>(r0 + 0x1c8u) + 0x6cu);  // (from the original)
        zf_2 = r12_2 == 0;
        if (!zf_2) {
            zf_2 = r12_2 == r1;
        }
        if (!zf_2) {
            r0_1 = 0u;
        }
    }
    if ((r2 & 0x10u) == 0) {  // (from the original)
        return r0_1;
    }
    r2_1 = *gptr<u32>(*gptr<u32>(r0 + 0x1c8u) + 0x74u);  // (from the original)
    zf_3 = r2_1 == 0;
    if (!zf_3) {
        zf_3 = r2_1 == r1;
    }
    if (zf_3) {
        return r0_1;
    } else {
    }
    return 0u;
}

}  // namespace d_00570adc
GUEST_EXPORT(0x00570adc, d_00570adc::f_00570adc);

// f_00571d28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00571d28 {

struct __attribute__((packed)) Object_00571d28_0 {
    u8 unknown_0[0x7b4];  // (not used here)
    u8 byte_7b4;
};
GUEST_OFFSET(Object_00571d28_0, byte_7b4, 0x7b4);  // (from the original)

inline guest::global<u32, 0x00571ea0> global_00571ea0;  // (from the original)
inline constexpr guest::Function<0x0014ecb0, u32(u32, u32, u32, u32)> call_0014ecb0;  // (from the original)
inline constexpr guest::Function<0x0014f3cc, u32(u32, u32, u32, u32)> call_0014f3cc;  // (from the original)
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x004e0cb0, u32(u32, u32, u32, u32)> call_004e0cb0;  // (from the original)
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> call_004e9a28;  // (from the original)
inline constexpr guest::Function<0x004ea048, u32(u32, u32, u32, u32)> call_004ea048;  // (from the original)
inline constexpr guest::Function<0x007455cc, u32(u32, u32, u32, u32)> call_007455cc;  // (from the original)
inline constexpr guest::Function<0x00751a64, u32(u32, u32, u32, u32)> call_00751a64;  // (from the original)

u32 f_00571d28(gptr<Object_00571d28_0> arg0, u32 r1, u32 r2_unused, u32 r3, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r7_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r0_4 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_2 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    u32 r0_6 = 0;
    u32 r2_5 = 0;
    u32 r3_3 = 0;
    float S0_4 = 0;
    float S1_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    float S0_5 = 0;
    u32 r3_4 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r3_5 = 0;
    float S0_6 = 0;
    float S1_5 = 0;
    u32 r0_9 = 0;
    u32 r3_6 = 0;
    float S0_7 = 0;
    float S1_6 = 0;
    u32 r1_6 = 0;
    u32 r2_7 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u64 t_1 = 0;
    u32 r4_1 = 0;
    r13 = r13 - 0x88u;  // (from the original)
    r0_1 = u32(arg0->byte_7b4);
    if (r0_1 >= 2u) {
        goto L_571e94;
    }
    if (r0_1 != 1u) {
        goto L_571e94;
    }
    r7_1 = r13 + 8u;
    r2_1 = r0 + 0x14u;  // (from the original)
    r1_1 = r13 + 0x18u;  // (from the original)
    r0_2 = r13 + 0x1cu;  // (from the original)
    *gptr<u16>(r13 + 0xau) = u16(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_3 = call_003171b4(r0_2, r1_1, r2_1, r3);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    r0_4 = call_004e0cb0(r0_3, r1_2, r2_2, r3_1);
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    r1_3 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    r2_3 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    r0_5 = call_004e9a28(r0_4, r1_3, r2_3, 0u);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    r0_6 = call_004ea048(r0_5, r1_4, r2_4, r3_2);
    r2_5 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    S0_4 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    r0_7 = call_007455cc(r0_6, r0_5, r2_5, r3_3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0_5 == 0) {
        goto L_571e94;
    }
    if (r0_7 + 1u == 0) {
        goto L_571e94;
    }
    *gptr<u32>(r13 + 0x58u) = u32(*gptr<u32>(r0 + 0x14u));  // (from the original)
    *gptr<u32>(r13 + 0x5cu) = u32(*gptr<u32>(r0 + 0x18u));  // (from the original)
    *gptr<u32>(r13 + 0x60u) = u32(*gptr<u32>(r0 + 0x1cu));  // (from the original)
    r0_8 = *gptr<u32>(r0_5 + 0x5f4u);  // (from the original)
    if (r0_8 == 0) {
        S0_5 = std::bit_cast<float>(*global_00571ea0);
        goto L_571dd8;
    }
    S1 = std::bit_cast<float>(*gptr<u32>(r0_5 + 0x18u));  // (from the original)
    S0_5 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(u32(s32(s8(*gptr<u8>(r0_8 + 3u)))))))) + S1;
L_571dd8:;
    r3_4 = r13 + 0x68u;  // (from the original)
    r1_5 = r13 + 0x28u;  // (from the original)
    *gptr<u32>(r13 + 0x5cu) = u32(std::bit_cast<u32>(S0_5));  // (from the original)
    *gptr<u16>(r13 + 0x68u) = u16(0u);  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1;
    call_00751a64(r0_5, r1_5, 0u, r3_4);
    r2_6 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    S0_6 = guest::cpu()->s[0];
    S1_5 = guest::cpu()->s[1];
    r0_9 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_6;
    guest::cpu()->s[1] = S1_5;
    call_0014ecb0(r0_9, r0_9, r2_6, r3_5);
    r3_6 = guest::cpu()->r[3];
    S0_7 = guest::cpu()->s[0];
    S1_6 = guest::cpu()->s[1];
    r1_6 = r13 + 0x28u;  // (from the original)
    r2_7 = r13 + 0x58u;  // (from the original)
    r0_10 = r7_1 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_7;
    guest::cpu()->s[1] = S1_6;
    call_0014f3cc(r0_10, r1_6, r2_7, r3_6);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    *gptr<u16>(r13 + 0xau) = u16(u32(*gptr<u16>(r0 + 0x2eu)) - u32(*gptr<u16>(r0_5 + 0x2eu)));  // (from the original)
    r0_11 = sxth(r0_7);
    *gptr<u16>(r13 + 8u) = u16(r0_11);
    r1 = u32(*gptr<u8>(r0 + 0x7b4u));  // (from the original)
    if (r1 >= 2u) {
        goto L_571e94;
    }
    if (r1 != 1u) {
        goto L_571e94;
    }
    if (r0_11 >> 0x1f != (r0_11 & (r0_11 ^ r0_11)) >> 0x1f) {  // (from the original)
        goto L_571e94;
    }
    t_1 = u64(u32(s32(r0_11) >> 0x1f)) + ~0u + u32(r0_11 >= 0x30u);  // (from the original)
    r1 = u32(t_1);
    if (u32(t_1 >> 0x20)) {  // (from the original)
        goto L_571e94;
    }
    r4_1 = r0 + 0x60cu;  // (from the original)
    *gptr<u16>(r4_1) = u16(r0_11);
    *gptr<u16>(r4_1 + 2u) = u16(u32(*gptr<u16>(r13 + 0xau)));  // (from the original)
    *gptr<u32>(r4_1 + 4u) = u32(*gptr<u32>(r13 + 0xcu));  // (from the original)
    *gptr<u32>(r4_1 + 8u) = u32(*gptr<u32>(r13 + 0x10u));  // (from the original)
    *gptr<u32>(r4_1 + 0xcu) = u32(*gptr<u32>(r13 + 0x14u));  // (from the original)
    r13 = r13 + 0x88u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 1u;
L_571e94:;
    r13 = r13 + 0x88u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 0u;
}

}  // namespace d_00571d28
GUEST_EXPORT(0x00571d28, d_00571d28::f_00571d28);

// f_00572624: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00572624 {

inline guest::global<u32, 0x00572778> global_00572778;  // (from the original)
inline guest::global<u32, 0x00572780> global_00572780;  // (from the original)
inline guest::global<u32, 0x00572784> global_00572784;  // (from the original)
inline guest::global<u32, 0x009843cc> global_009843cc;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x004e58e8, u32(u32, u32, u32, u32)> call_004e58e8;  // (from the original)
inline constexpr guest::Function<0x0059aab0, u32(u32, u32, u32, u32)> call_0059aab0;  // (from the original)

u32 f_00572624(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    float S2_3 = 0;
    u32 r0_5 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    float S0_4 = 0;
    float S1_4 = 0;
    float S2_4 = 0;
    u32 r0_6 = 0;
    float S0_5 = 0;
    float S1_5 = 0;
    float S2_5 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    float S0_6 = 0;
    u32 r0_9 = 0;
    float S0_7 = 0;
    u32 r0_10 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0_1 = call_002f74c8(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    S2_1 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    r0_2 = call_004e58e8(r0_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    if (r0_2 == 0) {
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        return r0_2;
    }
    if ((*gptr<u32>(0x94d670u + 0x70u) & 1u) != 0) {  // (from the original)
        goto L_5726b8;
    }
    r0_3 = 0x94d670u + 0x70u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    r0_4 = call_002fe7dc(r0_3, r1_2, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    if (r0_4 == 0) {
        goto L_5726b8;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    call_002fcbb0(0x9843b8u, 0x2079u, r2_2, r3_2);  // (from the original)
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    S2_3 = guest::cpu()->s[2];
    r0_5 = 0x9843b8u + 4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    guest::cpu()->s[2] = S2_3;
    call_002fcbb0(r0_5, 0x207au, r2_3, r3_3);  // (from the original)
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    S0_4 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    S2_4 = guest::cpu()->s[2];
    r0_6 = 0x9843b8u + 8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    guest::cpu()->s[2] = S2_4;
    call_002fcbb0(r0_6, 0x207au, r2_4, r3_4);  // (from the original)
    S0_5 = guest::cpu()->s[0];
    S1_5 = guest::cpu()->s[1];
    S2_5 = guest::cpu()->s[2];
    r0_7 = 0x9843b8u + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_5;
    guest::cpu()->s[2] = S2_5;
    call_00301d0c(r0_7, 0x2fc20cu, 4u, 2u);  // (from the original)
    r3_2 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    r2_2 = 0x100000u;  // (from the original)
    r1_2 = 0x151540u;  // (from the original)
L_5726b8:;
    if ((*gptr<u32>(0x94d670u + 0x6cu) & 1u) != 0) {  // (from the original)
        goto L_5726f8;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    r0_8 = call_002fe7dc(0x94d6dcu, r1_2, r2_2, r3_2);  // (from the original)
    S1_2 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    if (r0_8 == 0) {
        goto L_5726f8;
    }
    S0_6 = std::bit_cast<float>(*global_00572778);
    S2_2 = S0_6;
    S1_2 = S0_6;
    *global_009843cc = u32(std::bit_cast<u32>(S0_6));
    *gptr<u32>(0x9843ccu + 4) = u32(std::bit_cast<u32>(S1_2));  // (from the original)
    *gptr<u32>(0x9843ccu + 8) = u32(std::bit_cast<u32>(S2_2));  // (from the original)
L_5726f8:;
    r0_9 = *gptr<u32>(r0 + 0x5f0u);  // (from the original)
    if (r0_9 != 0) {
        r0_9 = u32(*gptr<u8>(r0_9 + 0x17u)) & 0xfu;  // (from the original)
        if (r0_9 >= 5u) {
            r0_9 = 0u;
        }
    }
    *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
    *gptr<u16>(r13 + 8u) = u16(0u);
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4) = u32(1u);
    *gptr<u16>(r13 + 0x10u) = u16(0u);  // (from the original)
    S0_7 = std::bit_cast<float>(*global_00572780);
    if (r0_9 == 1u) {
        S0_7 = std::bit_cast<float>(*global_00572784);
    }
    r0_10 = 0x9843b8u + (r0_9 << 2);  // (from the original)
    r1_3 = r0 + 0x7a8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_7;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    r0_2 = call_0059aab0(r0_10, r1_3, 0x9843ccu, r0);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return r0_2;
}

}  // namespace d_00572624
GUEST_EXPORT(0x00572624, d_00572624::f_00572624);

// f_00572fb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00572fb4 {

struct __attribute__((packed)) Object_00572fb4_0 {
    u8 unknown_0[0x2e0];  // (not used here)
    u32 word_2e0;
    u8 unknown_2e4[0x4];  // (not used here)
    u32 word_2e8;
};
GUEST_OFFSET(Object_00572fb4_0, word_2e0, 0x2e0);  // (from the original)
GUEST_OFFSET(Object_00572fb4_0, word_2e8, 0x2e8);  // (from the original)

inline guest::global<u32, 0x0085f2bc> global_0085f2bc;  // (from the original)
inline guest::global<u32, 0x0094edd8> global_0094edd8;  // (from the original)
inline constexpr guest::Function<0x002f74b0, u32(u32, u32, u32, u32)> call_002f74b0;  // (from the original)
inline constexpr guest::Function<0x005761c8, u32(u32, u32, u32, u32)> call_005761c8;  // (from the original)
inline constexpr guest::Function<0x00748534, u32(u32, u32, u32, u32)> call_00748534;  // (from the original)

u32 f_00572fb4(gptr<Object_00572fb4_0> arg0, u32 r1, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 fpsr = guest::cpu()->fpscr;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    float S2_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S4_1 = 0;
    float S3_1 = 0;
    float S5_1 = 0;
    float S4_2 = 0;
    float S6_1 = 0;
    float S3_2 = 0;
    float S1_2 = 0;
    float S0_2 = 0;
    u32 fpsr_1 = 0;
    u32 fpsr_2 = 0;
    u32 fpsr_3 = 0;
    u32 fpsr_4 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 res_1 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = *global_0094edd8;
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0_1;
    }
    r0_2 = *gptr<u32>(r0_1 + 0x1a4u);  // (from the original)
    r1_1 = 0x85f2c0u;  // (from the original)
    S2_1 = std::bit_cast<float>(arg0->word_2e0);
    S0_1 = std::bit_cast<float>(*gptr<u32>(r0_2 + 0x24u));  // (from the original)
    S1_1 = std::bit_cast<float>(*gptr<u32>(r0_2 + 0x2cu));  // (from the original)
    S4_1 = std::bit_cast<float>(*gptr<u32>(r1_1));
    S3_1 = std::bit_cast<float>(*global_0085f2bc);
    S5_1 = S4_1;
    S4_2 = S1_1 - S4_1;
    S6_1 = S3_1;
    S3_2 = S0_1 - S3_1;
    S1_2 = S1_1 + S5_1;
    S0_2 = S0_1 + S6_1;
    fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S2_1, S3_2);  // (from the original)
    if (!(fpsr_1 >> 0x1d & 1)) {  // (from the original)
        goto L_573038;
    }
    fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S2_1, S0_2);  // (from the original)
    if (!(fpsr_2 >> 0x1e & 1) && fpsr_2 >> 0x1f == (fpsr_2 >> 0x1c & 1)) {  // (from the original)
        goto L_573038;
    }
    S0_2 = std::bit_cast<float>(arg0->word_2e8);
    fpsr_3 = fpsr_2 & 0xfffffffu | vfp_cmpf(S0_2, S4_2);  // (from the original)
    if (!(fpsr_3 >> 0x1d & 1)) {  // (from the original)
        goto L_573038;
    }
    fpsr_4 = fpsr_3 & 0xfffffffu | vfp_cmpf(S0_2, S1_2);  // (from the original)
    if (fpsr_4 >> 0x1e & 1 || fpsr_4 >> 0x1f != (fpsr_4 >> 0x1c & 1)) {  // (from the original)
        goto L_57309c;
    }
L_573038:;
    r0_3 = u32(s32(s8(*gptr<u8>(r0 + 0x78u))));  // (from the original)
    if (r0_3 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        return r0_3;
    }
    r0_4 = *gptr<u32>(r0 + 0x5f0u);  // (from the original)
    if (r0_4 != 0) {
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        guest::cpu()->s[2] = S2_1;
        guest::cpu()->s[3] = S3_2;
        guest::cpu()->s[4] = S4_2;
        guest::cpu()->s[5] = S5_1;
        guest::cpu()->s[6] = S6_1;
        r0_5 = call_00748534(r0_4, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        S0_2 = guest::cpu()->s[0];
        S1_2 = guest::cpu()->s[1];
        S2_1 = guest::cpu()->s[2];
        S3_2 = guest::cpu()->s[3];
        S4_2 = guest::cpu()->s[4];
        S5_1 = guest::cpu()->s[5];
        S6_1 = guest::cpu()->s[6];
        if (r0_5 != 0) {
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->s[0] = S0_2;
            guest::cpu()->s[1] = S1_2;
            return r0_5;
        }
    }
    r0_6 = *gptr<u32>(r0 + 0x5f4u);  // (from the original)
    if (r0_6 != 0) {
        res_1 = u32(*gptr<u8>(r0_6 + 4u)) << 0x1d >> 0x1f;  // (from the original)
        if (res_1 != 0) {
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->s[0] = S0_2;
            guest::cpu()->s[1] = S1_2;
            return res_1;
        }
    }
    r0_7 = u32(*gptr<u8>(r0 + 0x5ecu));  // (from the original)
    if (r0_7 == 2u) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        return r0_7;
    }
    r0_8 = r0 + 0x68u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_2;
    guest::cpu()->s[4] = S4_2;
    guest::cpu()->s[5] = S5_1;
    guest::cpu()->s[6] = S6_1;
    return call_002f74b0(r0_8, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
L_57309c:;
    r0_9 = u32(s32(s8(*gptr<u8>(r0 + 0x78u))));  // (from the original)
    if (r0_9 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        return r0_9;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_2;
    guest::cpu()->s[4] = S4_2;
    guest::cpu()->s[5] = S5_1;
    guest::cpu()->s[6] = S6_1;
    return call_005761c8(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00572fb4
GUEST_EXPORT(0x00572fb4, d_00572fb4::f_00572fb4);

// f_00573214: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00573214 {

struct __attribute__((packed)) Object_00573214_0 {
    u8 unknown_0[0x2f8];  // (not used here)
    u32 word_2f8;
    u32 word_2fc;
    u8 unknown_300[0x4a4];  // (not used here)
    u8 byte_7a4;
};
GUEST_OFFSET(Object_00573214_0, word_2f8, 0x2f8);  // (from the original)
GUEST_OFFSET(Object_00573214_0, word_2fc, 0x2fc);  // (from the original)
GUEST_OFFSET(Object_00573214_0, byte_7a4, 0x7a4);  // (from the original)


u32 f_00573214(gptr<Object_00573214_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    arg0->byte_7a4 = u8(0u);
    arg0->word_2f8 = u32(r2);
    arg0->word_2fc = u32(r3);
    guest::cpu()->r[1] = 0u;
    return 0u;
}

}  // namespace d_00573214
GUEST_EXPORT(0x00573214, d_00573214::f_00573214);

// f_0057322c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057322c {

struct __attribute__((packed)) Object_0057322c_0 {
    u8 unknown_0[0x7a8];  // (not used here)
    u32 word_7a8;
    u32 word_7ac;
    u32 word_7b0;
};
GUEST_OFFSET(Object_0057322c_0, word_7a8, 0x7a8);  // (from the original)
GUEST_OFFSET(Object_0057322c_0, word_7ac, 0x7ac);  // (from the original)
GUEST_OFFSET(Object_0057322c_0, word_7b0, 0x7b0);  // (from the original)

inline guest::global<u32, 0x005733a8> global_005733a8;  // (from the original)
inline guest::global<u32, 0x0085f2d4> global_0085f2d4;  // (from the original)
inline guest::global<u32, 0x0085f2d8> global_0085f2d8;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x004e58e8, u32(u32, u32, u32, u32)> call_004e58e8;  // (from the original)
inline constexpr guest::Function<0x006c602c, u32(u32, u32, u32, u32)> call_006c602c;  // (from the original)
inline constexpr guest::Function<0x00748534, u32(u32, u32, u32, u32)> call_00748534;  // (from the original)

u32 f_0057322c(gptr<Object_0057322c_0> arg0, u32 r1, u32 r2, float S0_unused, float S1) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    float S0_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    float S0_2 = 0;
    float S1_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r2_3 = 0;
    u32 r5_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    float S0_3 = 0;
    float S1_2 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r2_4 = 0;
    float S0_4 = 0;
    float S1_3 = 0;
    u32 r5_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r4_1 = 0;
    u32 r0_8 = 0;
    r5_1 = r0 + 0x7a8u;  // (from the original)
    S0_1 = std::bit_cast<float>(*global_005733a8);
    r13 = r13 - 0x20u;  // (from the original)
    arg0->word_7a8 = u32(std::bit_cast<u32>(S0_1));
    arg0->word_7ac = u32(std::bit_cast<u32>(S0_1));
    arg0->word_7b0 = u32(std::bit_cast<u32>(S0_1));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1;
    r0_1 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    S0_2 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    r0_2 = *gptr<u32>(r0 + 0x5f0u);  // (from the original)
    if (r0_2 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_1;
        return r0_2;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    r0_2 = call_00748534(r0_2, r1_1, r2_1, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    S0_2 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    if (r0_2 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_1;
        return r0_2;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    r0_2 = call_004e58e8(r0_1, r1_1, r2_2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    S0_2 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    if (r0_2 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_1;
        return r0_2;
    }
    *gptr<u32>(r5_1) = u32(*gptr<u32>(r0 + 0x14u));  // (from the original)
    *gptr<u32>(r5_1 + 4u) = u32(*gptr<u32>(r0 + 0x18u));  // (from the original)
    *gptr<u32>(r5_1 + 8u) = u32(*gptr<u32>(r0 + 0x1cu));  // (from the original)
    r5_2 = r0 + 0x5e4u;  // (from the original)
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    r0_4 = call_002fc934(r0_3, r5_2, r2_3, guest::cpu()->r[3]);
    S0_3 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    *gptr<u8>(r0_4 + 4u) = u8(u32(*gptr<u8>(r5_2 + 4u)));
    *gptr<u8>(r0_4 + 5u) = u8(u32(*gptr<u8>(r5_2 + 5u)));
    *gptr<u8>(r0_4 + 6u) = u8(u32(*gptr<u8>(r5_2 + 6u)));
    *gptr<u8>(r0_4 + 7u) = u8(u32(*gptr<u8>(r5_2 + 7u)));
    *gptr<u8>(r0_4 + 8u) = u8(u32(*gptr<u8>(r5_2 + 8u)));
    r1_2 = u32(*gptr<u8>(r13 + 5u));
    r0_5 = u32(*gptr<u8>(r13 + 4u));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_2;
    call_006c602c(r0_5, r1_2, 0u, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    S0_4 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    r5_3 = r0 + 0x400u;  // (from the original)
    *gptr<u32>(r5_3 + 0x3acu) = u32(std::bit_cast<u32>(S0_4));  // (from the original)
    if (r0_1 != 0x2bu) {  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_4;
        guest::cpu()->s[1] = S1_3;
        r0_6 = call_002f74e0(0x10000000u, r0_1, r2_4, guest::cpu()->r[3]);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        S0_2 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
        if (r0_6 == 0) {
            goto L_57331c;
        }
    }
    S1_1 = std::bit_cast<float>(*global_0085f2d8);
    S0_2 = std::bit_cast<float>(*gptr<u32>(r5_3 + 0x3b0u)) - S1_1;  // (from the original)
    *gptr<u32>(r5_3 + 0x3b0u) = u32(std::bit_cast<u32>(S0_2));  // (from the original)
L_57331c:;
    r0_7 = *gptr<u32>(r0 + 0x5f0u);  // (from the original)
    if (r0_7 == 0) {
        goto L_573344;
    }
    r4_1 = u32(*gptr<u8>(r0_7 + 0x17u)) & 0xfu;  // (from the original)
    if (r4_1 >= 5u) {
        goto L_573344;
    }
    if (r4_1 != 1u) {
        goto L_573360;
    }
    goto L_57334c;
L_573344:;
    r4_1 = 0u;
    goto L_573360;
L_57334c:;
    S1_1 = std::bit_cast<float>(*global_0085f2d4);
    S0_2 = std::bit_cast<float>(*gptr<u32>(r5_3 + 0x3a8u)) + S1_1;  // (from the original)
    *gptr<u32>(r5_3 + 0x3a8u) = u32(std::bit_cast<u32>(S0_2));  // (from the original)
L_573360:;
    if (r0_1 != 0x2bu) {  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_1;
        r0_8 = call_002f74e0(0x10000000u, r0_1, r2_4, guest::cpu()->r[3]);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        S0_2 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
        if (r0_8 == 0) {
            goto L_573398;
        }
    }
    if (r4_1 != 0) {
        goto L_573398;
    }
    S1_1 = std::bit_cast<float>(*global_0085f2d8);
    S0_2 = std::bit_cast<float>(*gptr<u32>(r5_3 + 0x3a8u)) + S1_1;  // (from the original)
    *gptr<u32>(r5_3 + 0x3a8u) = u32(std::bit_cast<u32>(S0_2));  // (from the original)
L_573398:;
    r0_2 = r13;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    return r0_2;
}

}  // namespace d_0057322c
GUEST_EXPORT(0x0057322c, d_0057322c::f_0057322c);

// f_005739fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005739fc {

struct __attribute__((packed)) Object_005739fc_0 {
    u8 unknown_0[0x300];  // (not used here)
    u32 word_300;
    u8 unknown_304[0x2e8];  // (not used here)
    u8 byte_5ec;
};
GUEST_OFFSET(Object_005739fc_0, word_300, 0x300);  // (from the original)
GUEST_OFFSET(Object_005739fc_0, byte_5ec, 0x5ec);  // (from the original)


u32 f_005739fc(gptr<Object_005739fc_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 zf_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    r0_1 = arg0->word_300;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r0;
        return r0_1;
    }
    r1_1 = u32(arg0->byte_5ec);
    zf_1 = r1_1 == 1u;
    if (!zf_1) {
        zf_1 = r1_1 == 4u;
    }
    r2_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x1cu);  // (from the original)
    if (zf_1) {
        r1_2 = 1u;
    } else {
        r1_2 = 0u;
    }
    return guest::call_address<u32>(r2_1, r0_1, r1_2, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_005739fc
GUEST_EXPORT(0x005739fc, d_005739fc::f_005739fc);

// f_00573aac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00573aac {

struct __attribute__((packed)) Object_00573aac_0 {
    u8 unknown_0[0x7a4];  // (not used here)
    u8 byte_7a4;
};
GUEST_OFFSET(Object_00573aac_0, byte_7a4, 0x7a4);  // (from the original)


u32 f_00573aac(gptr<Object_00573aac_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    r1_1 = u32(arg0->byte_7a4);
    if (r1_1 != 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r1_2 = r0 + 0x700u;  // (from the original)
    if (u32(*gptr<u8>(r0 + 0x7a5u)) == 0) {  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    r1_3 = 1u & ~u32(s32(s8(*gptr<u8>(r1_2 + 0xa3u))));  // (from the original)
    *gptr<u8>(r0 + 0x7a3u) = u8(r1_3);  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return 1u;
}

}  // namespace d_00573aac
GUEST_EXPORT(0x00573aac, d_00573aac::f_00573aac);

// f_00573aec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00573aec {

inline guest::global<u32, 0x0085f2d0> global_0085f2d0;  // (from the original)
inline guest::global<u32, 0x0085f2d4> global_0085f2d4;  // (from the original)
inline guest::global<u32, 0x0085f2d8> global_0085f2d8;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x006c5fa0, u32(u32, u32, u32, u32)> call_006c5fa0;  // (from the original)
inline constexpr guest::Function<0x00751410, u32(u32, u32, u32, u32)> call_00751410;  // (from the original)

u32 f_00573aec(u32 r0, u32 r1, u32 r2_unused, u32 r3, float S0, float S1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    u32 r0_4 = 0;
    float S1_4 = 0;
    float S0_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_1 = call_00751410(r0, r1, 0u, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    r0_2 = call_002f74c8(r0_1, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    r0_3 = call_002f74e0(0x1000u, r0_2, r2_2, r3_2);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    if (r0_3 != 0) {
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_3;
        call_006c5fa0(r1, 0u, r2_3, r3_3);
        r1_2 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        S0_3 = guest::cpu()->s[0];
        S1_3 = guest::cpu()->s[1];
        *gptr<u32>(r1 + 4u) = u32(std::bit_cast<u32>(S0_3));
    }
    if (r0_2 != 0x2bu) {  // (from the original)
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_3;
        r0_4 = call_002f74e0(0x10000000u, r0_2, r2_3, r3_3);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        S0_3 = guest::cpu()->s[0];
        S1_3 = guest::cpu()->s[1];
        if (r0_4 == 0) {
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1_2;
            guest::cpu()->s[0] = S0_3;
            guest::cpu()->s[1] = S1_3;
            return r0_4;
        }
    }
    r0_4 = *gptr<u32>(r0 + 0x5f0u);  // (from the original)
    if (r0_4 == 0) {
        goto L_573b74;
    }
    r0_4 = u32(*gptr<u8>(r0_4 + 0x17u)) & 0xfu;  // (from the original)
    if (r0_4 >= 5u) {
        goto L_573b74;
    }
    if (r0_4 != 0) {
        goto L_573b84;
    }
L_573b74:;
    S1_3 = std::bit_cast<float>(*global_0085f2d8);
    S0_3 = std::bit_cast<float>(*gptr<u32>(r1)) + S1_3;
    *gptr<u32>(r1) = u32(std::bit_cast<u32>(S0_3));
L_573b84:;
    if (r0_2 != 0x2bu) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_3;
        return r0_4;
    }
    r0_4 = *gptr<u32>(r0 + 0x5f0u);  // (from the original)
    if (r0_4 == 0) {
        goto L_573bb4;
    }
    r1_2 = u32(*gptr<u8>(r0_4 + 0x17u)) & 0xfu;  // (from the original)
    if (r1_2 >= 5u) {
        goto L_573bb4;
    }
    if (r1_2 == 3u) {
        goto L_573bf8;
    }
L_573bb4:;
    if (r0_4 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_3;
        return r0_4;
    }
    r0_4 = u32(*gptr<u8>(r0_4 + 0x17u)) & 0xfu;  // (from the original)
    if (r0_4 >= 5u) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_3;
        return r0_4;
    }
    if (r0_4 != 4u) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_3;
        return r0_4;
    }
    *gptr<u32>(r1) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r1)) + std::bit_cast<float>(*global_0085f2d4)));
    S1_3 = std::bit_cast<float>(*global_0085f2d8);
    S0_3 = std::bit_cast<float>(*gptr<u32>(r1 + 8u)) - S1_3;
    *gptr<u32>(r1 + 8u) = u32(std::bit_cast<u32>(S0_3));
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    return r0_4;
L_573bf8:;
    *gptr<u32>(r1) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r1)) + std::bit_cast<float>(*global_0085f2d4)));
    S1_4 = std::bit_cast<float>(*global_0085f2d0);
    S0_4 = std::bit_cast<float>(*gptr<u32>(r1 + 8u)) - S1_4;
    *gptr<u32>(r1 + 8u) = u32(std::bit_cast<u32>(S0_4));
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    return 0x85f2d0u;  // (from the original)
}

}  // namespace d_00573aec
GUEST_EXPORT(0x00573aec, d_00573aec::f_00573aec);

// f_0057456c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057456c {

struct __attribute__((packed)) Object_0057456c_0 {
    u8 unknown_0[0x300];  // (not used here)
    u32 word_300;
};
GUEST_OFFSET(Object_0057456c_0, word_300, 0x300);  // (from the original)


u32 f_0057456c(gptr<Object_0057456c_0> arg0) {
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    r0_1 = arg0->word_300;
    if (r0_1 == 0) {
        return r0_1;
    }
    r2_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x1cu);  // (from the original)
    return guest::call_address<u32>(r2_1, r0_1, guest::cpu()->r[1], r2_1, guest::cpu()->r[3]);
}

}  // namespace d_0057456c
GUEST_EXPORT(0x0057456c, d_0057456c::f_0057456c);

// f_0057579c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057579c {

struct __attribute__((packed)) Object_0057579c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0057579c_0, word_4, 0x4);  // (from the original)


u32 f_0057579c(gptr<Object_0057579c_0> arg0) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    r1_1 = arg0->word_4;
    if (r1_1 == 0) {
        r0_1 = 1u;
    } else {
        r1_1 = r1_1 - 1u;
        arg0->word_4 = u32(r1_1);
        r0_1 = 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0057579c
GUEST_EXPORT(0x0057579c, d_0057579c::f_0057579c);

// f_005757b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005757b8 {

struct __attribute__((packed)) Object_005757b8_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_005757b8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005757b8_0, word_4, 0x4);  // (from the original)


void f_005757b8(gptr<Object_005757b8_0> arg0, u32 r1) {
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(r1);
    return;
}

}  // namespace d_005757b8
GUEST_EXPORT(0x005757b8, d_005757b8::f_005757b8);

// f_005757d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005757d4 {

struct __attribute__((packed)) Object_005757d4_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_005757d4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005757d4_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005757d4_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005757d4_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005757d4_0, word_10, 0x10);  // (from the original)

inline guest::global<u32, 0x00ae5658> global_00ae5658;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_005757d4(gptr<Object_005757d4_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r12_1 = 0;
    float S0_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    float S0_2 = 0;
    u32 r0_3 = 0;
    r13 = r13 - 8;
    arg0->word_0 = u32(0u);
    r12_1 = *gptr<u32>(0xae5658u + 4);  // (from the original)
    S0_1 = std::bit_cast<float>(*gptr<u32>(0xae5658u + 8u));  // (from the original)
    arg0->word_4 = u32(*global_00ae5658);
    arg0->word_8 = u32(r12_1);
    arg0->word_c = u32(std::bit_cast<u32>(S0_1));
    arg0->word_10 = u32(0u);
    r0_1 = r0 + 0x6cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    r0_2 = call_00301d0c(r0_1, 0x3040fcu, 0xcu, 9u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    S0_2 = guest::cpu()->s[0];
    r0_3 = r0_2 - 0x6cu;  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    return r0_3;
}

}  // namespace d_005757d4
GUEST_EXPORT(0x005757d4, d_005757d4::f_005757d4);

// f_005761c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005761c8 {

struct __attribute__((packed)) Object_005761c8_0 {
    u8 unknown_0[0x5f0];  // (not used here)
    u32 word_5f0;
};
GUEST_OFFSET(Object_005761c8_0, word_5f0, 0x5f0);  // (from the original)

inline constexpr guest::Function<0x004e10ac, u32(u32, u32, u32, u32)> call_004e10ac;  // (from the original)
inline constexpr guest::Function<0x0061479c, u32(u32, u32, u32, u32)> call_0061479c;  // (from the original)
inline constexpr guest::Function<0x00748534, u32(u32, u32, u32, u32)> call_00748534;  // (from the original)
inline constexpr guest::Function<0x00751578, u32(u32, u32, u32, u32)> call_00751578;  // (from the original)

u32 f_005761c8(gptr<Object_005761c8_0> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 res_1 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    float S0_2 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r3_2 = 0;
    float S0_3 = 0;
    u32 r2_2 = 0;
    u32 r1_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    float S0_4 = 0;
    r0_1 = arg0->word_5f0;
    r13 = r13 - 0x30u;  // (from the original)
    if (r0_1 != 0) {
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0_2 = call_00748534(r0_1, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        if (r0_2 != 0) {
            r13 = r13 + 0x30u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            return r0_2;
        }
    }
    r0_3 = *gptr<u32>(r0 + 0x5f4u);  // (from the original)
    if (r0_3 != 0) {
        res_1 = u32(*gptr<u8>(r0_3 + 4u)) << 0x1d >> 0x1f;  // (from the original)
        if (res_1 != 0) {
            r13 = r13 + 0x30u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            return res_1;
        }
    }
    r0_4 = u32(*gptr<u8>(r0 + 0x5ecu));  // (from the original)
    if (r0_4 == 2u) {
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        return r0_4;
    }
    *gptr<u32>(r13 + 0xcu) = u32(*gptr<u32>(r0 + 0x554u));  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(*gptr<u32>(r0 + 0x564u));  // (from the original)
    r1_1 = r13 + 0x18u;  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(*gptr<u32>(r0 + 0x574u));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0_5 = call_00751578(r0, r1_1, r2, r3);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    call_004e10ac(r0_5, r1_2, r2_1, r3_1);
    S0_2 = guest::cpu()->s[0];
    *gptr<u32>(r13 + 0x1cu) = u32(std::bit_cast<u32>(S0_2));  // (from the original)
    ea_1 = r13;
    *gptr<u32>(ea_1) = u32(8u);
    ea_2 = r13 + 4u;
    *gptr<u32>(ea_2) = u32(~0x80000000u);  // (from the original)
    *gptr<u32>(ea_2 + 4) = u32(r0);
    r3_2 = r0 + 0x2eu;  // (from the original)
    S0_3 = std::bit_cast<float>(*gptr<u32>(r0 + 0x5b4u));  // (from the original)
    r2_2 = r13 + 0x18u;  // (from the original)
    r1_3 = r13 + 0xcu;  // (from the original)
    r0_6 = r0 + 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    r0_7 = call_0061479c(r0_6, r1_3, r2_2, r3_2);
    r1_4 = guest::cpu()->r[1];
    S0_4 = guest::cpu()->s[0];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    return r0_7;
}

}  // namespace d_005761c8
GUEST_EXPORT(0x005761c8, d_005761c8::f_005761c8);

// f_005776fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005776fc {

struct __attribute__((packed)) Object_005776fc_0 {
    u32 word_0;
    u8 unknown_4[0x64];  // (not used here)
    u32 word_68;
    u8 unknown_6c[0x44];  // (not used here)
    u32 word_b0;
    u8 unknown_b4[0x78];  // (not used here)
    u32 word_12c;
};
GUEST_OFFSET(Object_005776fc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005776fc_0, word_68, 0x68);  // (from the original)
GUEST_OFFSET(Object_005776fc_0, word_b0, 0xb0);  // (from the original)
GUEST_OFFSET(Object_005776fc_0, word_12c, 0x12c);  // (from the original)

inline constexpr guest::Function<0x0023bc4c, u32(u32, u32, u32, u32)> call_0023bc4c;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x00317e28, u32(u32, u32, u32, u32)> call_00317e28;  // (from the original)
inline constexpr guest::Function<0x004ecbe0, u32(u32, u32, u32, u32)> call_004ecbe0;  // (from the original)
inline constexpr guest::Function<0x004edd84, u32(u32, u32, u32, u32)> call_004edd84;  // (from the original)
inline constexpr guest::Function<0x004ee8c0, u32(u32, u32, u32, u32)> call_004ee8c0;  // (from the original)
inline constexpr guest::Function<0x004efa0c, u32(u32, u32, u32, u32)> call_004efa0c;  // (from the original)
inline constexpr guest::Function<0x00537218, u32(u32, u32, u32, u32)> call_00537218;  // (from the original)
inline constexpr guest::Function<0x006148ac, u32(u32, u32, u32, u32)> call_006148ac;  // (from the original)
inline constexpr guest::Function<0x006e480c, u32(u32, u32, u32, u32)> call_006e480c;  // (from the original)

u32 f_005776fc(gptr<Object_005776fc_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r3_5 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 ea_1 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_6 = 0;
    u32 r2_7 = 0;
    u32 r3_6 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r1_7 = 0;
    u32 r2_8 = 0;
    u32 r3_7 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_8 = 0;
    u32 r2_9 = 0;
    u32 r3_8 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r1_9 = 0;
    u32 r2_10 = 0;
    u32 r3_9 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r1_10 = 0;
    u32 r2_11 = 0;
    u32 r3_10 = 0;
    u32 r0_20 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r2_1 = 0x8f7508u + 0x114u;  // (from the original)
    arg0->word_0 = u32(0x8f7508u);  // (from the original)
    arg0->word_12c = u32(r2_1 + 0x140u);  // (from the original)
    arg0->word_68 = u32(r2_1);
    arg0->word_b0 = u32(r2_1 + 0x18u);  // (from the original)
    r0_1 = r0 + 0x630u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_1, 0x5754ccu, 0x14u, 4u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r0 + 0x59cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_004ee8c0(r0_2, r1_1, r2_2, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_4 = r0_3 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_004ecbe0(r0_4, r1_2, r2_3, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_6 = r0_5 - 0x148u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_7 = call_00537218(r0_6, r1_3, r2_4, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_8 = r0_7 - 0x114u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_9 = call_00537218(r0_8, r1_4, r2_5, r3_4);
    r3_5 = guest::cpu()->r[3];
    r1_5 = r0_9 - 0x320u;  // (from the original)
    r2_6 = ~0u;
    ea_1 = r0_9 - 4u;
    *gptr<u32>(ea_1) = u32(r2_6);
    *gptr<u32>(ea_1 - 4u) = u32(0u);
    *gptr<u32>(r1_5 + 0x314u) = u32(r2_6);  // (from the original)
    *gptr<u32>(r1_5 + 0x310u) = u32(0u);  // (from the original)
    r0_10 = r1_5 + 0x2c8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_11 = call_004efa0c(r0_10, r1_5, r2_6, r3_5);
    r1_6 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_12 = r0_11 - 0x108u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_13 = call_00317e28(r0_12, r1_6, r2_7, r3_6);
    r1_7 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_14 = r0_13 - 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_15 = call_004edd84(r0_14, r1_7, r2_8, r3_7);
    r1_8 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_16 = r0_15 - 0x104u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_17 = call_0023bc4c(r0_16, r1_8, r2_9, r3_8);
    r1_9 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_18 = r0_17 - 0x48u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_19 = call_006148ac(r0_18, r1_9, r2_10, r3_9);
    r1_10 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r13 = r13 + 0x10;  // (from the original)
    r0_20 = r0_19 - 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_006e480c(r0_20, r1_10, r2_11, r3_10);
}

}  // namespace d_005776fc
GUEST_EXPORT(0x005776fc, d_005776fc::f_005776fc);

// f_00577810: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00577810 {

inline guest::global<u32, 0x0094f310> global_0094f310;  // (from the original)
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x00529ddc, u32(u32, u32, u32, u32)> call_00529ddc;  // (from the original)
inline constexpr guest::Function<0x00691538, u32(u32, u32, u32, u32)> call_00691538;  // (from the original)
inline constexpr guest::Function<0x00694178, u32(u32, u32, u32, u32)> call_00694178;  // (from the original)

u32 f_00577810(u32 r0) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r5_1 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r1_1 = *global_0094f310;
    if (r1_1 != 0) {
        r0_1 = call_00691538(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        r5_1 = *gptr<u32>(r0_1);
        r0_2 = call_00691538(r0_1, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_3 = guest::cpu()->r[1];
        r0_3 = call_00694178(r0_2, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_4 = guest::cpu()->r[1];
        if (r0_3 != 0) {
            call_00301444(r0_3, r5_1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1_4 = guest::cpu()->r[1];
            r0_3 = r0_3;
        }
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_4;
        return r0_3;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_00529ddc(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00577810
GUEST_EXPORT(0x00577810, d_00577810::f_00577810);

// f_00578018: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00578018 {

struct __attribute__((packed)) Object_00578018_0 {
    u8 unknown_0[0x70];  // (not used here)
    u32 word_70;
};
GUEST_OFFSET(Object_00578018_0, word_70, 0x70);  // (from the original)

struct __attribute__((packed)) Object_00578018_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_00578018_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00578018_1, word_4, 0x4);  // (from the original)


u32 f_00578018(gptr<Object_00578018_0> arg0, gptr<Object_00578018_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    ea_1 = r0 + 0x70u;  // (from the original)
    r0_1 = ea_1;
    r2 = arg0->word_70;
    if (r2 == r1) {
        *gptr<u32>(r0_1) = u32(arg1->word_4);
        arg1->word_0 = u32(0u);
        arg1->word_4 = u32(0u);
        return 0u;
    }
    do {
L_578024:;
        r0_2 = r2;
        r2 = *gptr<u32>(r2 + 4u);
        r0_1 = r0_2 + 4u;
        guest::preempt();
    } while (r2 != r1);
    *gptr<u32>(r0_1) = u32(arg1->word_4);
    arg1->word_0 = u32(0u);
    arg1->word_4 = u32(0u);
    return 0u;
}

}  // namespace d_00578018
GUEST_EXPORT(0x00578018, d_00578018::f_00578018);

// f_00578158: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00578158 {

struct __attribute__((packed)) Object_00578158_0 {
    u8 unknown_0[0x5d8];  // (not used here)
    u32 word_5d8;
    u32 word_5dc;
    u32 word_5e0;
};
GUEST_OFFSET(Object_00578158_0, word_5d8, 0x5d8);  // (from the original)
GUEST_OFFSET(Object_00578158_0, word_5dc, 0x5dc);  // (from the original)
GUEST_OFFSET(Object_00578158_0, word_5e0, 0x5e0);  // (from the original)

inline constexpr guest::Function<0x001ccf5c, u32(u32, u32, u32, u32)> call_001ccf5c;  // (from the original)

u32 f_00578158(gptr<Object_00578158_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r2_1 = arg0->word_5d8;
    r1_1 = arg0->word_5dc;
    r3_1 = arg0->word_5e0;
    r0_1 = u32(u64(s64(s32(0x66666667u)) * s32(r1_1 - r2_1)) >> 0x20);  // (from the original)
    r0_2 = u32(s32(r0_1) >> 4) - u32(s32(r0_1) >> 0x1f);  // (from the original)
    if (r0_2 != r3_1) {
        r3_1 = ~0x27u;  // (from the original)
        r0_3 = r3_1 + (r0_2 + (r0_2 << 2) << 3) + r2_1;
        if (r1_1 != 0) {
            *gptr<u8>(r1_1) = u8(u32(*gptr<u8>(r0_3)));
            *gptr<u8>(r1_1 + 1u) = u8(u32(*gptr<u8>(r0_3 + 1u)));
            *gptr<u8>(r1_1 + 2u) = u8(u32(*gptr<u8>(r0_3 + 2u)));
            *gptr<u32>(r1_1 + 4u) = u32(*gptr<u32>(r0_3 + 4u));
            *gptr<u32>(r1_1 + 8u) = u32(*gptr<u32>(r0_3 + 8u));
            *gptr<u32>(r1_1 + 0xcu) = u32(*gptr<u32>(r0_3 + 0xcu));  // (from the original)
            *gptr<u32>(r1_1 + 0x10u) = u32(*gptr<u32>(r0_3 + 0x10u));  // (from the original)
            r3_1 = *gptr<u32>(r0_3 + 0x14u);  // (from the original)
            *gptr<u32>(r1_1 + 0x14u) = u32(r3_1);  // (from the original)
            *gptr<u32>(r1_1 + 0x18u) = u32(*gptr<u32>(r0_3 + 0x18u));  // (from the original)
            *gptr<u16>(r1_1 + 0x1cu) = u16(u32(*gptr<u16>(r0_3 + 0x1cu)));  // (from the original)
            *gptr<u16>(r1_1 + 0x1eu) = u16(u32(*gptr<u16>(r0_3 + 0x1eu)));  // (from the original)
            *gptr<u16>(r1_1 + 0x20u) = u16(u32(*gptr<u16>(r0_3 + 0x20u)));  // (from the original)
            r2_1 = u32(*gptr<u16>(r0_3 + 0x22u));  // (from the original)
            *gptr<u16>(r1_1 + 0x22u) = u16(r2_1);  // (from the original)
            *gptr<u16>(r1_1 + 0x24u) = u16(u32(*gptr<u16>(r0_3 + 0x24u)));  // (from the original)
        }
        *gptr<u32>(r0 + 0x5dcu) = u32(*gptr<u32>(r0 + 0x5dcu) + 0x28u);  // (from the original)
    }
    if (u32(*gptr<u8>(r0 + 0x65cu)) == 0) {  // (from the original)
        r0_4 = r0 + 0x5d0u;  // (from the original)
        call_001ccf5c(r0_4, 1u, r2_1, r3_1);
    }
    *gptr<u32>(r0 + 0x92cu) = u32(*gptr<u32>(r0 + 0x928u));  // (from the original)
    *gptr<u8>(r0 + 0x94cu) = u8(0xau);  // (from the original)
    r1_2 = *gptr<u32>(r0 + 0x894u);  // (from the original)
    *gptr<u32>(r0 + 0x930u) = u32(r1_2);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return 0xau;  // (from the original)
}

}  // namespace d_00578158
GUEST_EXPORT(0x00578158, d_00578158::f_00578158);

// f_005783f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005783f4 {

struct __attribute__((packed)) Object_005783f4_0 {
    u8 unknown_0[0x660];  // (not used here)
    u32 word_660;
};
GUEST_OFFSET(Object_005783f4_0, word_660, 0x660);  // (from the original)

inline guest::global<u32, 0x0095385c> global_0095385c;  // (from the original)
inline constexpr guest::Function<0x002f93bc, u32(u32, u32, u32, u32)> call_002f93bc;  // (from the original)
inline constexpr guest::Function<0x00303fb4, u32(u32, u32, u32, u32)> call_00303fb4;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x0052c790, u32(u32, u32, u32, u32)> call_0052c790;  // (from the original)
inline constexpr guest::Function<0x0052cd58, u32(u32, u32, u32, u32)> call_0052cd58;  // (from the original)

u32 f_005783f4(gptr<Object_005783f4_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r6_1 = 0;
    u32 res_1 = 0;
    u32 r5_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = arg0->word_660;
    r1_1 = u32(*gptr<u8>(r0_1 + 0x20eu));  // (from the original)
    if (r1_1 != 0) {
        *gptr<u8>(r0_1 + 0x20eu) = u8(0u);  // (from the original)
        call_0052cd58(r0, 0u, r2, guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
    } else {
        call_0052c790(r0, r1_1, r2, guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
    }
    r6_1 = r0 + 0xb06u;  // (from the original)
    res_1 = u32(*gptr<u8>(r0 + 0xb08u)) << 0x1b >> 0x1f;  // (from the original)
    if (res_1 == 0) {
        goto L_578464;
    }
    r5_1 = *global_0095385c;
    if (r5_1 == 0) {
        goto L_578464;
    }
    r0_2 = call_00305f44(0x95385cu, r1_2, r2_1, guest::cpu()->r[3]);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r1_3 = u32(*gptr<u8>(r5_1 + 0x12u));  // (from the original)
    if (r0_2 == r1_3) {
        r0_3 = u32(*gptr<u8>(r0 + 0x95eu));  // (from the original)
        call_002f93bc(r0_3, r1_3, r2_2, guest::cpu()->r[3]);
    }
L_578464:;
    r0_4 = call_00303fb4(r6_1, 0x17u, 0u, guest::cpu()->r[3]);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    return r0_4;
}

}  // namespace d_005783f4
GUEST_EXPORT(0x005783f4, d_005783f4::f_005783f4);

// f_0057885c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057885c {

struct __attribute__((packed)) Object_0057885c_0 {
    u8 unknown_0[0xaa0];  // (not used here)
    u32 word_aa0;
};
GUEST_OFFSET(Object_0057885c_0, word_aa0, 0xaa0);  // (from the original)

inline guest::global<u32, 0x00578944> global_00578944;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x006c6640, u32(u32, u32, u32, u32)> call_006c6640;  // (from the original)

u32 f_0057885c(gptr<Object_0057885c_0> arg0, u32 r1, u32 r2, float S0, float S1, float S2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    float S2_1 = 0;
    float S0_1 = 0;
    u32 r0_3 = 0;
    u32 res_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r5 = arg0->word_aa0;
    r4 = r0;
    if (r5 == 0) {
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
    r0_1 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = u32(*gptr<u8>(r5 + 4u));
    if (r0_1 != r1) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return 0u;
    }
    r0_2 = u32(*gptr<u8>(r5 + 1u));
    S1 = std::bit_cast<float>(*global_00578944);
    r2_1 = r0_2 >> 4;
    r1 = u32(*gptr<u8>(r5));
    S2_1 = float(std::bit_cast<u32>(std::bit_cast<float>(r2_1 + (u32(*gptr<u8>(r5 + 2u)) << 4))));
    S0_1 = std::bit_cast<float>(r1 + ((r0_2 & 0xfu) << 8));  // (from the original)
    r0_3 = r13;
    S0 = float(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r0_3) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0_3 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r0_3 + 8) = u32(std::bit_cast<u32>(S2_1));
    res_1 = u32(*gptr<u8>(r4 + 0xb06u)) << 0x1c >> 0x1f;  // (from the original)
    if (res_1 == 0) {
        goto L_578920;
    } else {
        *gptr<u32>(r13 + 4u) = u32(*gptr<u32>(r4 + 0x18u));  // (from the original)
    }
L_5788d4:;
    r0_4 = u32(*gptr<u8>(r5 + 3u));
    *gptr<u32>(r4 + 0x14u) = u32(*gptr<u32>(r13));  // (from the original)
    r0_5 = r0_4 << 8;
    *gptr<u32>(r4 + 0x18u) = u32(*gptr<u32>(r13 + 4u));  // (from the original)
    *gptr<u32>(r4 + 0x1cu) = u32(*gptr<u32>(r13 + 8u));  // (from the original)
    *gptr<u32>(r4 + 0x20u) = u32(*gptr<u32>(r13));  // (from the original)
    *gptr<u32>(r4 + 0x24u) = u32(*gptr<u32>(r13 + 4u));  // (from the original)
    *gptr<u32>(r4 + 0x28u) = u32(*gptr<u32>(r13 + 8u));  // (from the original)
    *gptr<u16>(r4 + 0x2eu) = u16(r0_5);  // (from the original)
    *gptr<u16>(r4 + 0x3au) = u16(r0_5);  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 1u;
L_578920:;
    r0_6 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2_1;
    call_006c6640(r0_6, 0u, r2_1, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(S0));
    guest::preempt();
    goto L_5788d4;
}

}  // namespace d_0057885c
GUEST_EXPORT(0x0057885c, d_0057885c::f_0057885c);

// f_00578948: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00578948 {

struct __attribute__((packed)) Object_00578948_0 {
    u8 unknown_0[0x5d8];  // (not used here)
    u32 word_5d8;
    u32 word_5dc;
    u8 unknown_5e0[0x348];  // (not used here)
    u32 word_928;
    u32 word_92c;
    u8 unknown_930[0x1c];  // (not used here)
    u8 byte_94c;
};
GUEST_OFFSET(Object_00578948_0, word_5d8, 0x5d8);  // (from the original)
GUEST_OFFSET(Object_00578948_0, word_5dc, 0x5dc);  // (from the original)
GUEST_OFFSET(Object_00578948_0, word_928, 0x928);  // (from the original)
GUEST_OFFSET(Object_00578948_0, word_92c, 0x92c);  // (from the original)
GUEST_OFFSET(Object_00578948_0, byte_94c, 0x94c);  // (from the original)


void f_00578948(gptr<Object_00578948_0> arg0) {
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    r1_1 = arg0->word_92c;
    arg0->byte_94c = u8(0xffu);  // (from the original)
    arg0->word_928 = u32(r1_1);
    r1_2 = arg0->word_5dc;
    r2_1 = u32(u64(s64(s32(0x66666667u)) * s32(r1_2 - arg0->word_5d8)) >> 0x20);  // (from the original)
    if (u32(s32(r2_1) >> 4) - u32(s32(r2_1) >> 0x1f) > 1u) {  // (from the original)
        r1_2 = r1_2 - 0x28u;  // (from the original)
        arg0->word_5dc = u32(r1_2);
    }
    guest::cpu()->r[1] = r1_2;
    return;
}

}  // namespace d_00578948
GUEST_EXPORT(0x00578948, d_00578948::f_00578948);

// f_00578988: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00578988 {

struct __attribute__((packed)) Object_00578988_0 {
    u8 unknown_0[0xaa0];  // (not used here)
    u32 word_aa0;
    u8 unknown_aa4[0x63];  // (not used here)
    u8 byte_b07;
};
GUEST_OFFSET(Object_00578988_0, word_aa0, 0xaa0);  // (from the original)
GUEST_OFFSET(Object_00578988_0, byte_b07, 0xb07);  // (from the original)

inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)

u32 f_00578988(gptr<Object_00578988_0> arg0) {
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    u32 zf_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r5_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    res_1 = u32(arg0->byte_b07) << 0x1c >> 0x1f;  // (from the original)
    zf_1 = res_1 == 0;
    r0_1 = res_1;
    if (!zf_1) {
        r0_1 = arg0->word_aa0;
        zf_1 = r0_1 == 0;
    }
    if (zf_1) {
        goto L_5789d0;
    }
    r0_2 = u32(*gptr<u8>(r0_1 + 5u)) << 0x1a;  // (from the original)
    r5_1 = r0_2 >> 0x1d;  // (from the original)
    if (r5_1 == 4u) {
        goto L_5789d0;
    }
    r0_3 = call_00305f44(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_3 != r5_1) {
        r0_4 = 1u;
        *gptr<u8>(r0 + 0x94bu) = u8(r5_1);  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return r0_4;
    }
L_5789d0:;
    *gptr<u8>(r0 + 0x94bu) = u8(4u);  // (from the original)
    r0_4 = 0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0_4;
}

}  // namespace d_00578988
GUEST_EXPORT(0x00578988, d_00578988::f_00578988);

// f_00578af4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00578af4 {

struct __attribute__((packed)) Object_00578af4_0 {
    u8 unknown_0[0xafe];  // (not used here)
    u16 half_afe;
};
GUEST_OFFSET(Object_00578af4_0, half_afe, 0xafe);  // (from the original)


u32 f_00578af4(gptr<Object_00578af4_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    r1_1 = r0 + 0xa00u;  // (from the original)
    arg0->half_afe = u16(0x5fu);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return 0x5fu;  // (from the original)
}

}  // namespace d_00578af4
GUEST_EXPORT(0x00578af4, d_00578af4::f_00578af4);

// f_00578b38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00578b38 {

inline constexpr guest::Function<0x0029cf30, u32(u32, u32, u32, u32)> call_0029cf30;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x007523a8, u32(u32, u32, u32, u32)> call_007523a8;  // (from the original)

u32 f_00578b38(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 zf_1 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_007523a8(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    r0_2 = call_00300904(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    zf_1 = r0_2 == 0;
    if (!zf_1) {
        r0_2 = *gptr<u32>(r0 + 0xaa0u);  // (from the original)
        zf_1 = r0_2 == 0;
    }
    if (zf_1) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return r0_2;
    }
    r1_3 = u32(*gptr<u8>(r0 + 0x95eu));  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_0029cf30(r0_2, r1_3, 0u, guest::cpu()->r[3]);
}

}  // namespace d_00578b38
GUEST_EXPORT(0x00578b38, d_00578b38::f_00578b38);

// f_00578bc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00578bc8 {

struct __attribute__((packed)) Object_00578bc8_0 {
    u8 unknown_0[0xb0a];  // (not used here)
    u8 byte_b0a;
};
GUEST_OFFSET(Object_00578bc8_0, byte_b0a, 0xb0a);  // (from the original)

inline guest::global<u32, 0x00950148> global_00950148;  // (from the original)
inline constexpr guest::Function<0x00697e88, u32(u32, u32, u32, u32)> call_00697e88;  // (from the original)

u32 f_00578bc8(gptr<Object_00578bc8_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r4_1 = 0;
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r4_1 = r0 + 0xb06u;  // (from the original)
    res_1 = u32(arg0->byte_b0a) << 0x1b >> 0x1f;  // (from the original)
    if (res_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r0;
        return res_1;
    }
    r0_1 = *global_00950148;
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r0;
        return r0_1;
    }
    r0_2 = call_00697e88(r0_1, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    r0_3 = u32(*gptr<u8>(r4_1 + 4u)) & ~0x10u;  // (from the original)
    *gptr<u8>(r4_1 + 4u) = u8(r0_3);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_3;
}

}  // namespace d_00578bc8
GUEST_EXPORT(0x00578bc8, d_00578bc8::f_00578bc8);

// f_00578c6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00578c6c {

struct __attribute__((packed)) Object_00578c6c_0 {
    u8 unknown_0[0xaa0];  // (not used here)
    u32 word_aa0;
};
GUEST_OFFSET(Object_00578c6c_0, word_aa0, 0xaa0);  // (from the original)

inline constexpr guest::Function<0x006e8560, u32(u32, u32, u32, u32)> call_006e8560;  // (from the original)

u32 f_00578c6c(gptr<Object_00578c6c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r1_1 = arg0->word_aa0;
    if (r1_1 != 0) {
        r0_1 = r0 + 0x78u;  // (from the original)
        call_006e8560(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_00578c6c
GUEST_EXPORT(0x00578c6c, d_00578c6c::f_00578c6c);

// f_00579024: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00579024 {

inline constexpr guest::Function<0x0057ba08, u32(u32, u32, u32, u32)> call_0057ba08;  // (from the original)
inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> call_005c33cc;  // (from the original)

u32 f_00579024(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_005c33cc(r1, 0u, guest::cpu()->r[2], r3);
    r1_1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        r0_2 = u32(*gptr<u16>(r0 + 0x2eu));  // (from the original)
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_2;
    } else {
        *gptr<u16>(r13) = u16(0u);
    }
    r1_2 = r0_1 + 0x14u;  // (from the original)
    r0_3 = r0 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_0057ba08(r0_3, r1_2, guest::cpu()->r[2], r3_1);
    r1_3 = guest::cpu()->r[1];
    *gptr<u16>(r13) = u16(r0_4);
    *gptr<u32>(r13) = u32(uxth(r0_4));
    r0_5 = u32(*gptr<u16>(r13));
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_5;
}

}  // namespace d_00579024
GUEST_EXPORT(0x00579024, d_00579024::f_00579024);

// f_005791c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005791c4 {

inline constexpr guest::Function<0x0029d228, u32(u32, u32, u32, u32)> call_0029d228;  // (from the original)
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)

u32 f_005791c4(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002fc900(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    *gptr<u32>(r0 + 0x938u) = u32(~0u);  // (from the original)
    r1_2 = u32(*gptr<u8>(r0 + 0xb09u)) | 1u;  // (from the original)
    *gptr<u8>(r0 + 0xb09u) = u8(r1_2);  // (from the original)
    r0_2 = u32(*gptr<u8>(r0 + 0x95eu));  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_0029d228(r0_2, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005791c4
GUEST_EXPORT(0x005791c4, d_005791c4::f_005791c4);

// f_005792fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005792fc {

inline guest::global<u32, 0x005793c4> global_005793c4;  // (from the original)
inline guest::global<u32, 0x0088069c> global_0088069c;  // (from the original)
inline constexpr guest::Function<0x00303fb4, u32(u32, u32, u32, u32)> call_00303fb4;  // (from the original)
inline constexpr guest::Function<0x005bff78, u32(u32, u32, u32, u32)> call_005bff78;  // (from the original)
inline constexpr guest::Function<0x006ea834, u32(u32, u32, u32, u32)> call_006ea834;  // (from the original)

u32 f_005792fc(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r5_1 = 0;
    u32 zf_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    u32 r4_1 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    float S0_4 = 0;
    float S1_4 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r0_1 = r0 + 0xb06u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    call_00303fb4(r0_1, 0xfu, 1u, r3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    r5_1 = 2u;
    if (r1 == 0) {
        r5_1 = 0u;
        goto L_579348;
    }
    zf_1 = r1 == 1u;
    if (zf_1) {
        r5_1 = 1u;
    } else {
        zf_1 = r1 == 2u;
    }
    if (zf_1) {
        goto L_579348;
    }
    if (r1 == 3u) {
        r5_1 = 3u;
    }
L_579348:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    call_005bff78(r5_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    r4_1 = 0x135u;  // (from the original)
    if (r2 == 0) {
        r4_1 = r4_1 | u32(s32(r4_1) >> 3);
        goto L_579380;
    }
    if (r2 == 1u) {
        r4_1 = 0x136u;  // (from the original)
        goto L_579380;
    }
    if (r2 == 2u) {
        r4_1 = 0x138u;  // (from the original)
        goto L_579380;
    }
    if (r2 == 3u) {
        r4_1 = 0x139u;  // (from the original)
    }
L_579380:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    call_005bff78(r5_1, r1_2, r2_2, r3_2);
    *gptr<u32>(r13) = u32(0u);
    S0_3 = std::bit_cast<float>(*global_005793c4);
    S1_3 = std::bit_cast<float>(*global_0088069c);
    r0_2 = r0 + 0x78u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    r0_3 = call_006ea834(r0_2, 0u, r4_1, 2u);
    r1_3 = guest::cpu()->r[1];
    S0_4 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    return r0_3;
}

}  // namespace d_005792fc
GUEST_EXPORT(0x005792fc, d_005792fc::f_005792fc);

// f_00579514: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00579514 {

inline guest::global<u32, 0x0088069c> global_0088069c;  // (from the original)
inline constexpr guest::Function<0x00303fb4, u32(u32, u32, u32, u32)> call_00303fb4;  // (from the original)
inline constexpr guest::Function<0x005c1c7c, u32(u32, u32, u32, u32)> call_005c1c7c;  // (from the original)
inline constexpr guest::Function<0x006e9c2c, u32(u32, u32, u32, u32)> call_006e9c2c;  // (from the original)

u32 f_00579514(u32 r0, u32 r1_unused, u32 r2) {
    float S0_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    float S0_2 = 0;
    float S0_3 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    float S0_4 = 0;
    guest::cpu()->r[13] -= 8u;
    S0_1 = std::bit_cast<float>(*global_0088069c);
    r0_1 = r0 + 0x78u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    call_006e9c2c(r0_1, 0u, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    S0_2 = guest::cpu()->s[0];
    guest::cpu()->s[0] = S0_2;
    call_005c1c7c(1u, r1_1, r2_1, guest::cpu()->r[3]);
    S0_3 = guest::cpu()->s[0];
    r0_2 = r0 + 0xb06u;  // (from the original)
    guest::cpu()->s[0] = S0_3;
    r0_3 = call_00303fb4(r0_2, 0xfu, 0u, guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    S0_4 = guest::cpu()->s[0];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0_4;
    return r0_3;
}

}  // namespace d_00579514
GUEST_EXPORT(0x00579514, d_00579514::f_00579514);

// f_00579b98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00579b98 {

struct __attribute__((packed)) Object_00579b98_0 {
    u8 unknown_0[0xb07];  // (not used here)
    u8 byte_b07;
    u8 unknown_b08[0x1];  // (not used here)
    u8 byte_b09;
};
GUEST_OFFSET(Object_00579b98_0, byte_b07, 0xb07);  // (from the original)
GUEST_OFFSET(Object_00579b98_0, byte_b09, 0xb09);  // (from the original)

inline guest::global<u32, 0x00579c88> global_00579c88;  // (from the original)
inline guest::global<u32, 0x0085f2cc> global_0085f2cc;  // (from the original)
inline guest::global<u32, 0x00868478> global_00868478;  // (from the original)
inline guest::global<u32, 0x0086847c> global_0086847c;  // (from the original)
inline constexpr guest::Function<0x002f872c, u32(u32, u32, u32, u32)> call_002f872c;  // (from the original)
inline constexpr guest::Function<0x005c2ce0, u32(u32, u32, u32, u32)> call_005c2ce0;  // (from the original)
inline constexpr guest::Function<0x0070ae88, u32(u32, u32, u32, u32)> call_0070ae88;  // (from the original)

u32 f_00579b98(gptr<Object_00579b98_0> arg0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r6_1 = 0;
    u32 r5_1 = 0;
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 zf_1 = 0;
    u32 r2_1 = 0;
    float S0_1 = 0;
    float S2_1 = 0;
    float S1_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    float S2_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 zf_2 = 0;
    u32 r2_3 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 r3_2 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r6_1 = r1;
    r5_1 = r0 + 0xb06u;  // (from the original)
    res_1 = u32(arg0->byte_b09) << 0x19 >> 0x1f;  // (from the original)
    r0_1 = res_1;
    if (res_1 == 0) {
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0_1;
    }
    r0_1 = u32(arg0->byte_b07);
    if ((r0_1 & 1u) == 0) {
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0_1;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0_2 = call_005c2ce0(4u, 0u, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = *gptr<u32>(r0 + 0x68u);  // (from the original)
    zf_1 = r0_2 == 0;
    r0_1 = r1 + 4u;
    if (zf_1) {
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0_1;
    }
    *gptr<u32>(r13) = u32(0x4000u);  // (from the original)
    r2_1 = r0 + 0x2cu;  // (from the original)
    S0_1 = std::bit_cast<float>(*global_0085f2cc) * std::bit_cast<float>(*global_00579c88);
    S2_1 = std::bit_cast<float>(*global_0086847c);
    S1_1 = std::bit_cast<float>(*global_00868478);
    r1_1 = r0 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    r0_1 = call_0070ae88(r0_1, r1_1, r2_1, r0_2);
    r1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    if (r0_1 == 0) {
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0_1;
    }
    r0_3 = r0 + 0xb00u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2_2;
    r0_4 = call_002f872c(r0_3, r6_1, r2_2, r3_1);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    zf_2 = r0_4 == 0;
    r1 = r0_4;
    r0_1 = r0 + 0xa00u;  // (from the original)
    r2_3 = r0 + 0x980u;  // (from the original)
    if (zf_2) {
        *gptr<u16>(r0_1 + 0xfau) = u16(1u);  // (from the original)
        goto L_579c5c;
    }
    if (r1 == 1u) {
        *gptr<u16>(r0_1 + 0xfau) = u16(4u);  // (from the original)
    } else {
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0_1;
    }
L_579c5c:;
    ea_1 = r0_1 + 0xfcu;  // (from the original)
    *gptr<u16>(ea_1) = u16(0u);
    ea_2 = r5_1 + 3u;
    r0_1 = u32(*gptr<u8>(ea_2)) | 0x80u;  // (from the original)
    ea_3 = r5_1 + 3u;
    *gptr<u8>(ea_3) = u8(r0_1);
    ea_4 = 0x83f9d4u + 0x38u;  // (from the original)
    r1 = *gptr<u32>(ea_4);
    r3_2 = *gptr<u32>(ea_4 + 4);
    *gptr<u32>(r2_3 + 8u) = u32(r1);
    *gptr<u32>(r2_3 + 0xcu) = u32(r3_2);  // (from the original)
    *gptr<u32>(r2_3 + 4u) = u32(r0);
    *gptr<u32>(r0 + 0x964u) = u32(r2_3);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0_1;
}

}  // namespace d_00579b98
GUEST_EXPORT(0x00579b98, d_00579b98::f_00579b98);

// f_00579e44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00579e44 {

struct __attribute__((packed)) Object_00579e44_0 {
    u8 unknown_0[0x6];  // (not used here)
    u16 half_6;
    u8 unknown_8[0xa];  // (not used here)
    u8 byte_12;
    u8 unknown_13[0xd];  // (not used here)
    u16 half_20;
    u8 unknown_22[0x2];  // (not used here)
    u32 word_24;
    u16 half_28;
    u8 byte_2a;
};
GUEST_OFFSET(Object_00579e44_0, half_6, 0x6);  // (from the original)
GUEST_OFFSET(Object_00579e44_0, byte_12, 0x12);  // (from the original)
GUEST_OFFSET(Object_00579e44_0, half_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_00579e44_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_00579e44_0, half_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_00579e44_0, byte_2a, 0x2a);  // (from the original)

inline guest::global<u16, 0x00984634> global_00984634;  // (from the original)
inline guest::global<u16, 0x00984640> global_00984640;  // (from the original)

void f_00579e44(gptr<Object_00579e44_0> arg0, u32 r1) {
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    arg0->half_6 = u16(r1);
    if (r1 != 0xfu) {  // (from the original)
        if (r1 == 0) {
            arg0->byte_12 = u8(r1);
            guest::cpu()->r[1] = r1;
            return;
        }
        arg0->half_20 = u16(u32(*global_00984640));
        arg0->word_24 = u32(*gptr<u32>(0x984640u + 4u));  // (from the original)
        arg0->half_28 = u16(u32(*gptr<u16>(0x984640u + 8u)));  // (from the original)
        r1_1 = u32(*gptr<u8>(0x984640u + 0xau));  // (from the original)
        arg0->byte_2a = u8(r1_1);
        guest::cpu()->r[1] = r1_1;
        return;
    }
    arg0->half_20 = u16(u32(*global_00984634));
    arg0->word_24 = u32(*gptr<u32>(0x984634u + 4u));  // (from the original)
    arg0->half_28 = u16(u32(*gptr<u16>(0x984634u + 8u)));  // (from the original)
    r1_2 = u32(*gptr<u8>(0x984634u + 0xau));  // (from the original)
    arg0->byte_2a = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
    return;
}

}  // namespace d_00579e44
GUEST_EXPORT(0x00579e44, d_00579e44::f_00579e44);

// f_00579eb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00579eb4 {

struct __attribute__((packed)) Object_00579eb4_0 {
    u8 unknown_0[0x2];  // (not used here)
    u16 half_2;
    u8 unknown_4[0x4];  // (not used here)
    u16 half_8;
    u8 unknown_a[0x2];  // (not used here)
    u32 word_c;
    u16 half_10;
    u8 byte_12;
};
GUEST_OFFSET(Object_00579eb4_0, half_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_00579eb4_0, half_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00579eb4_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00579eb4_0, half_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00579eb4_0, byte_12, 0x12);  // (from the original)

inline guest::global<u16, 0x0098461c> global_0098461c;  // (from the original)
inline guest::global<u16, 0x0098464c> global_0098464c;  // (from the original)
inline guest::global<u16, 0x00984658> global_00984658;  // (from the original)
inline guest::global<u16, 0x00984664> global_00984664;  // (from the original)
inline guest::global<u16, 0x00984670> global_00984670;  // (from the original)

void f_00579eb4(gptr<Object_00579eb4_0> arg0, u32 r1) {
    u32 res_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 res_2 = 0;
    u32 r1_3 = 0;
    u32 res_3 = 0;
    u32 r1_4 = 0;
    u32 res_4 = 0;
    u32 r1_5 = 0;
    arg0->half_2 = u16(r1);
    if (r1 != 0xdu) {  // (from the original)
        res_1 = r1 - 0x19fu;  // (from the original)
        if (res_1 != 0) {
            goto L_579f1c;
        }
        arg0->half_8 = u16(u32(*global_0098464c));
        arg0->word_c = u32(*gptr<u32>(0x98464cu + 4u));  // (from the original)
        arg0->half_10 = u16(u32(*gptr<u16>(0x98464cu + 8u)));  // (from the original)
        r1_1 = u32(*gptr<u8>(0x98464cu + 0xau));  // (from the original)
        arg0->byte_12 = u8(r1_1);
        guest::cpu()->r[1] = r1_1;
        return;
    }
    arg0->half_8 = u16(u32(*global_0098461c));
    arg0->word_c = u32(*gptr<u32>(0x98461cu + 4u));  // (from the original)
    arg0->half_10 = u16(u32(*gptr<u16>(0x98461cu + 8u)));  // (from the original)
    r1_2 = u32(*gptr<u8>(0x98461cu + 0xau));  // (from the original)
    arg0->byte_12 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
    return;
L_579f1c:;
    res_2 = r1 - 0x1a1u;  // (from the original)
    if (res_2 == 0) {
        arg0->half_8 = u16(u32(*global_00984658));
        arg0->word_c = u32(*gptr<u32>(0x984658u + 4u));  // (from the original)
        arg0->half_10 = u16(u32(*gptr<u16>(0x984658u + 8u)));  // (from the original)
        r1_3 = u32(*gptr<u8>(0x984658u + 0xau));  // (from the original)
        arg0->byte_12 = u8(r1_3);
        guest::cpu()->r[1] = r1_3;
        return;
    }
    res_3 = r1 - 0x1a3u;  // (from the original)
    if (res_3 == 0) {
        arg0->half_8 = u16(u32(*global_00984664));
        arg0->word_c = u32(*gptr<u32>(0x984664u + 4u));  // (from the original)
        arg0->half_10 = u16(u32(*gptr<u16>(0x984664u + 8u)));  // (from the original)
        r1_4 = u32(*gptr<u8>(0x984664u + 0xau));  // (from the original)
        arg0->byte_12 = u8(r1_4);
        guest::cpu()->r[1] = r1_4;
        return;
    }
    res_4 = r1 - 0x1a5u;  // (from the original)
    if (res_4 != 0) {
        arg0->byte_12 = u8(0u);
        guest::cpu()->r[1] = 0u;
        return;
    }
    arg0->half_8 = u16(u32(*global_00984670));
    arg0->word_c = u32(*gptr<u32>(0x984670u + 4u));  // (from the original)
    arg0->half_10 = u16(u32(*gptr<u16>(0x984670u + 8u)));  // (from the original)
    r1_5 = u32(*gptr<u8>(0x984670u + 0xau));  // (from the original)
    arg0->byte_12 = u8(r1_5);
    guest::cpu()->r[1] = r1_5;
    return;
}

}  // namespace d_00579eb4
GUEST_EXPORT(0x00579eb4, d_00579eb4::f_00579eb4);

// f_00579fd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00579fd0 {

struct __attribute__((packed)) Object_00579fd0_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_00579fd0_0, half_0, 0x0);  // (from the original)

inline guest::global<u16, 0x00984628> global_00984628;  // (from the original)
inline guest::global<u16, 0x00984634> global_00984634;  // (from the original)
inline guest::global<u16, 0x00984640> global_00984640;  // (from the original)
inline constexpr guest::Function<0x00579eb4, u32(u32, u32, u32, u32)> call_00579eb4;  // (from the original)

u32 f_00579fd0(gptr<Object_00579fd0_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    r13 = r13 - 0xc;  // (from the original)
    r4 = r0;
    r5 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    arg0->half_0 = u16(r1);
    guest::cpu()->r[13] = r13;
    call_00579eb4(r0, r2, r2, r3);
    r3_1 = guest::cpu()->r[3];
    r1 = 0u;
    *gptr<u16>(r4 + 4u) = u16(r3_1);
    if (r3_1 == 0xeu) {  // (from the original)
        goto L_57a040;
    } else {
        r0 = r4;
        *gptr<u8>(r4 + 0x12u) = u8(r1);  // (from the original)
    }
L_57a000:;
    *gptr<u16>(r4 + 6u) = u16(r5);
    if (r5 == 0xfu) {  // (from the original)
        goto L_57a06c;
    }
    if (r5 == 0) {
        *gptr<u8>(r0 + 0x12u) = u8(r1);  // (from the original)
        r13 = r13 + 0xc;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    *gptr<u16>(r4 + 0x20u) = u16(u32(*global_00984640));  // (from the original)
    *gptr<u32>(r4 + 0x24u) = u32(*gptr<u32>(0x984640u + 4u));  // (from the original)
    r1_1 = u32(*gptr<u16>(0x984640u + 8u));  // (from the original)
    *gptr<u16>(r4 + 0x28u) = u16(r1_1);  // (from the original)
    r0_1 = u32(*gptr<u8>(0x984640u + 0xau));  // (from the original)
    *gptr<u8>(r4 + 0x2au) = u8(r0_1);  // (from the original)
    r13 = r13 + 0xc;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
L_57a040:;
    *gptr<u16>(r4 + 0x14u) = u16(u32(*global_00984628));  // (from the original)
    *gptr<u32>(r4 + 0x18u) = u32(*gptr<u32>(0x984628u + 4u));  // (from the original)
    *gptr<u16>(r4 + 0x1cu) = u16(u32(*gptr<u16>(0x984628u + 8u)));  // (from the original)
    r2_1 = u32(*gptr<u8>(0x984628u + 0xau));  // (from the original)
    r0 = r4;
    *gptr<u8>(r4 + 0x1eu) = u8(r2_1);  // (from the original)
    guest::preempt();
    goto L_57a000;
L_57a06c:;
    *gptr<u16>(r4 + 0x20u) = u16(u32(*global_00984634));  // (from the original)
    *gptr<u32>(r4 + 0x24u) = u32(*gptr<u32>(0x984634u + 4u));  // (from the original)
    r1_2 = u32(*gptr<u16>(0x984634u + 8u));  // (from the original)
    *gptr<u16>(r4 + 0x28u) = u16(r1_2);  // (from the original)
    r0_2 = u32(*gptr<u8>(0x984634u + 0xau));  // (from the original)
    *gptr<u8>(r4 + 0x2au) = u8(r0_2);  // (from the original)
    r13 = r13 + 0xc;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_00579fd0
GUEST_EXPORT(0x00579fd0, d_00579fd0::f_00579fd0);

// f_0057a0a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057a0a0 {

struct __attribute__((packed)) Object_0057a0a0_0 {
    u8 unknown_0[0x4];  // (not used here)
    u16 half_4;
    u8 unknown_6[0xc];  // (not used here)
    u8 byte_12;
    u8 unknown_13[0x1];  // (not used here)
    u16 half_14;
    u8 unknown_16[0x2];  // (not used here)
    u32 word_18;
    u16 half_1c;
    u8 byte_1e;
};
GUEST_OFFSET(Object_0057a0a0_0, half_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0057a0a0_0, byte_12, 0x12);  // (from the original)
GUEST_OFFSET(Object_0057a0a0_0, half_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0057a0a0_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0057a0a0_0, half_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0057a0a0_0, byte_1e, 0x1e);  // (from the original)

inline guest::global<u16, 0x00984628> global_00984628;  // (from the original)

void f_0057a0a0(gptr<Object_0057a0a0_0> arg0, u32 r1) {
    u32 r1_1 = 0;
    arg0->half_4 = u16(r1);
    if (r1 != 0xeu) {  // (from the original)
        arg0->byte_12 = u8(0u);
        guest::cpu()->r[1] = 0u;
        return;
    }
    arg0->half_14 = u16(u32(*global_00984628));
    arg0->word_18 = u32(*gptr<u32>(0x984628u + 4u));  // (from the original)
    arg0->half_1c = u16(u32(*gptr<u16>(0x984628u + 8u)));  // (from the original)
    r1_1 = u32(*gptr<u8>(0x984628u + 0xau));  // (from the original)
    arg0->byte_1e = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_0057a0a0
GUEST_EXPORT(0x0057a0a0, d_0057a0a0::f_0057a0a0);

// f_0057a3f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057a3f8 {

struct __attribute__((packed)) Object_0057a3f8_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_0057a3f8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0057a3f8_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0057a3f8_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0057a3f8_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0057a3f8_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0057a3f8_0, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Object_0057a3f8_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0057a3f8_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0057a3f8_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0057a3f8_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_0057a3f8_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0057a3f8_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0057a3f8_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0057a3f8_2, word_8, 0x8);  // (from the original)


void f_0057a3f8(gptr<Object_0057a3f8_0> arg0, gptr<Object_0057a3f8_1> arg1, gptr<Object_0057a3f8_2> arg2) {
    u32 r1_1 = 0;
    arg0->word_0 = u32(arg1->word_0);
    arg0->word_4 = u32(arg1->word_4);
    arg0->word_8 = u32(arg1->word_8);
    arg0->word_c = u32(arg2->word_0);
    arg0->word_10 = u32(arg2->word_4);
    r1_1 = arg2->word_8;
    arg0->word_14 = u32(r1_1);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_0057a3f8
GUEST_EXPORT(0x0057a3f8, d_0057a3f8::f_0057a3f8);

// f_0057a42c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057a42c {

struct __attribute__((packed)) Object_0057a42c_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_0057a42c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0057a42c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0057a42c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0057a42c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0057a42c_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0057a42c_0, word_14, 0x14);  // (from the original)

inline guest::global<u32, 0x0098467c> global_0098467c;  // (from the original)
inline guest::global<u32, 0x00984688> global_00984688;  // (from the original)

void f_0057a42c(gptr<Object_0057a42c_0> arg0) {
    u32 r1_1 = 0;
    arg0->word_0 = u32(*global_0098467c);
    arg0->word_4 = u32(*gptr<u32>(0x98467cu + 4u));  // (from the original)
    r1_1 = *gptr<u32>(0x98467cu + 8u);  // (from the original)
    arg0->word_8 = u32(r1_1);
    arg0->word_c = u32(*global_00984688);
    arg0->word_10 = u32(*gptr<u32>(0x984688u + 4u));  // (from the original)
    arg0->word_14 = u32(*gptr<u32>(0x984688u + 8u));  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_0057a42c
GUEST_EXPORT(0x0057a42c, d_0057a42c::f_0057a42c);

// f_0057afd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057afd4 {

inline constexpr guest::Function<0x00746f24, u32(u32, u32, u32, u32)> call_00746f24;  // (from the original)

u32 f_0057afd4(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_00746f24(0xa22020u, r1, r2, guest::cpu()->r[3]);  // (from the original)
    r0_2 = r0 + 0xb06u;  // (from the original)
    if (*gptr<u32>(r0 + 0x938u) > r0_1) {  // (from the original)
        r0_3 = u32(*gptr<u8>(r0_2 + 3u)) & 1u ^ 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r0_1;
        return r0_3;
    }
    *gptr<u8>(r0_2 + 3u) = u8(u32(*gptr<u8>(r0_2 + 3u)) & ~1u);
    r0_4 = u32(*gptr<u8>(r0_2 + 3u)) & 1u ^ 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r0_1;
    return r0_4;
}

}  // namespace d_0057afd4
GUEST_EXPORT(0x0057afd4, d_0057afd4::f_0057afd4);

// f_0057b988: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057b988 {

inline constexpr guest::Function<0x00520f64, u32(u32, u32, u32, u32)> call_00520f64;  // (from the original)

u32 f_0057b988() {
    return call_00520f64(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0057b988
GUEST_EXPORT(0x0057b988, d_0057b988::f_0057b988);

// f_0057b990: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057b990 {

inline constexpr guest::Function<0x00529cf4, u32(u32, u32, u32, u32)> call_00529cf4;  // (from the original)

u32 f_0057b990(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_00529cf4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    *gptr<u32>(r0 + 0x20u) = u32(*gptr<u32>(r0 + 0x14u));  // (from the original)
    *gptr<u32>(r0 + 0x24u) = u32(*gptr<u32>(r0 + 0x18u));  // (from the original)
    *gptr<u32>(r0 + 0x28u) = u32(*gptr<u32>(r0 + 0x1cu));  // (from the original)
    *gptr<u16>(r0 + 0x32u) = u16(u32(*gptr<u16>(r0 + 0x2cu)));  // (from the original)
    *gptr<u16>(r0 + 0x34u) = u16(u32(*gptr<u16>(r0 + 0x2eu)));  // (from the original)
    r1_2 = u32(*gptr<u16>(r0 + 0x30u));  // (from the original)
    *gptr<u16>(r0 + 0x36u) = u16(r1_2);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_0057b990
GUEST_EXPORT(0x0057b990, d_0057b990::f_0057b990);

// f_0057b9dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057b9dc {

inline guest::global<u32, 0x0094dfd8> global_0094dfd8;  // (from the original)
inline constexpr guest::Function<0x00529c80, u32(u32, u32, u32, u32)> call_00529c80;  // (from the original)

u32 f_0057b9dc(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r12_1 = 0;
    u32 ea_3 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    ea_1 = r13 - 8;
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    r13 = r13 - 8;
    ea_2 = r13 + 8u;
    r12_1 = *gptr<u32>(ea_2);
    *global_0094dfd8 = u32(r3);
    *gptr<u32>(0x94dfd8u + 4) = u32(r12_1);  // (from the original)
    ea_3 = r13;
    r13 = r13 + 8;
    r4_1 = *gptr<u32>(ea_3);
    r5_1 = *gptr<u32>(ea_3 + 4);
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    return call_00529c80(r0, r1, guest::cpu()->r[2], 2u);
}

}  // namespace d_0057b9dc
GUEST_EXPORT(0x0057b9dc, d_0057b9dc::f_0057b9dc);

// f_0057ba24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057ba24 {

inline constexpr guest::Function<0x00521068, u32(u32, u32, u32, u32)> call_00521068;  // (from the original)

u32 f_0057ba24() {
    return call_00521068(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0057ba24
GUEST_EXPORT(0x0057ba24, d_0057ba24::f_0057ba24);

// f_0057bb6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057bb6c {

inline constexpr guest::Function<0x00521ae0, u32(u32, u32, u32, u32)> call_00521ae0;  // (from the original)

u32 f_0057bb6c() {
    return call_00521ae0(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0057bb6c
GUEST_EXPORT(0x0057bb6c, d_0057bb6c::f_0057bb6c);

// f_0057bb70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057bb70 {


u32 f_0057bb70(u32 r0) {
    u32 zf_1 = 0;
    u32 r0_1 = 0;
    zf_1 = r0 == 0;
    if (!zf_1) {
        zf_1 = r0 == 2u;
    }
    if (zf_1) {
        r0_1 = 1u;
    } else {
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_0057bb70
GUEST_EXPORT(0x0057bb70, d_0057bb70::f_0057bb70);

// f_0057bb84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057bb84 {


u32 f_0057bb84(u32 r0) {
    u32 zf_1 = 0;
    u32 r0_1 = 0;
    zf_1 = r0 == 0;
    if (!zf_1) {
        zf_1 = r0 == 1u;
    }
    if (zf_1) {
        r0_1 = 1u;
    } else {
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_0057bb84
GUEST_EXPORT(0x0057bb84, d_0057bb84::f_0057bb84);

// f_0057bd78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057bd78 {

struct __attribute__((packed)) Object_0057bd78_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0057bd78_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0057bd78_0, word_8, 0x8);  // (from the original)


u32 f_0057bd78(gptr<Object_0057bd78_0> arg0) {
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(0u);
    guest::cpu()->r[1] = 0u;
    return 1u;
}

}  // namespace d_0057bd78
GUEST_EXPORT(0x0057bd78, d_0057bd78::f_0057bd78);

// f_0057bd94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057bd94 {

struct __attribute__((packed)) Object_0057bd94_0 {
    u16 half_0;
    u8 unknown_2[0x2];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0057bd94_0, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0057bd94_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0057bd94_0, word_8, 0x8);  // (from the original)


void f_0057bd94(gptr<Object_0057bd94_0> arg0) {
    arg0->half_0 = u16(0x169u);  // (from the original)
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(0u);
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_0057bd94
GUEST_EXPORT(0x0057bd94, d_0057bd94::f_0057bd94);

// f_0057d55c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057d55c {

inline guest::global<u32, 0x00854288> global_00854288;  // (from the original)
inline guest::global<u32, 0x0094fd58> global_0094fd58;  // (from the original)
inline constexpr guest::Function<0x005204b0, u32(u32, u32, u32, u32)> call_005204b0;  // (from the original)
inline constexpr guest::Function<0x00580490, u32(u32, u32, u32, u32)> call_00580490;  // (from the original)

u32 f_0057d55c(u32 r0, u32 r1_unused, u32 r2) {
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    call_00580490(r0, 1u, r2, guest::cpu()->r[3]);
    *global_0094fd58 = u32(*global_0094fd58 & ~0x40u);  // (from the original)
    *gptr<u8>(0x11c5u + r0) = u8(1u);  // (from the original)
    r1_1 = *gptr<u32>(0x854288u + 4u);  // (from the original)
    r2_1 = *global_00854288;
    r0_1 = *gptr<u32>(r0 + 0xb0u);  // (from the original)
    if (r0_1 != r2_1) {
        guest::cpu()->r[13] += 8u;
        return call_005204b0(r0, r1_1, r2_1, guest::cpu()->r[3]);
    }
    if (r0_1 == 0) {
        r0_2 = *gptr<u32>(r0 + 0xb4u) | r1_1;  // (from the original)
        if ((r0_2 & 1u) == 0) {
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_1;
            return r0_2;
        }
    }
    r0_3 = *gptr<u32>(r0 + 0xb4u);  // (from the original)
    if (r0_3 == r1_1) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_3;
    }
    guest::cpu()->r[13] += 8u;
    return call_005204b0(r0, r1_1, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_0057d55c
GUEST_EXPORT(0x0057d55c, d_0057d55c::f_0057d55c);

// f_0057ddf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057ddf4 {

inline constexpr guest::Function<0x00301484, u32(u32, u32, u32, u32)> call_00301484;  // (from the original)
inline constexpr guest::Function<0x005244c0, u32(u32, u32, u32, u32)> call_005244c0;  // (from the original)

u32 f_0057ddf4(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r0_1 = 0;
    u32 nf_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r7 = r0;
    r0_1 = call_00301484(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_1 == 0) {
        r5 = 9u;
    } else {
        r5 = 3u;
    }
    nf_1 = r5 >> 0x1f;  // (from the original)
    r10 = 0x950654u;  // (from the original)
    if (nf_1 == 0u) {
        r8 = 0x1150u;  // (from the original)
    }
    r9 = 0u;
    r6 = r7 + 0x1000u;  // (from the original)
    r4 = r9;
    *gptr<u32>(r6 + 0x14cu) = u32(r9);  // (from the original)
    if (nf_1 != 0u) {
        goto L_57de6c;
    }
    do {
L_57de2c:;
        r0_2 = *gptr<u32>(r10 + (r4 << 2));
        r0_3 = call_005244c0(r0_2, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r0_1 = u32(*gptr<u16>(r0_3));
        if (!(r0_1 == 0)) {
            r0_4 = *gptr<u32>(r6 + 0x14cu);  // (from the original)
            r1 = r0_4 + 1u;
            *gptr<u32>(r6 + 0x14cu) = u32(r1);  // (from the original)
            *gptr<u32>(r7 + (r0_4 << 2) + r8) = u32(r4);
            r0_1 = *gptr<u32>(r6 + 0x14cu);  // (from the original)
            if (r0_1 == 0xau) {  // (from the original)
                goto L_57de6c;
            }
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) <= s32(r5));
L_57de6c:;
    r0_5 = call_00301484(r0_1, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_5 == 0) {
        *gptr<u32>(r6 + 0x178u) = u32(r9);  // (from the original)
        goto L_57ded0;
    }
    r4 = 0x117cu;  // (from the original)
    r5 = 4u;
    r8 = 9u;
    *gptr<u32>(r6 + 0x178u) = u32(r9);  // (from the original)
    do {
L_57de90:;
        r0_6 = *gptr<u32>(r10 + (r5 << 2));
        r0_7 = call_005244c0(r0_6, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (!(u32(*gptr<u16>(r0_7)) == 0)) {
            r0_8 = *gptr<u32>(r6 + 0x178u);  // (from the original)
            r1 = r0_8 + 1u;
            *gptr<u32>(r6 + 0x178u) = u32(r1);  // (from the original)
            *gptr<u32>(r7 + (r0_8 << 2) + r4) = u32(r5);
            if (*gptr<u32>(r6 + 0x178u) == 0xau) {  // (from the original)
                goto L_57ded0;
            }
        }
        r5 = r5 + 1u;
        guest::preempt();
    } while (s32(r5) <= s32(r8));
L_57ded0:;
    r0_9 = *gptr<u32>(0xad6540u + 0x18u);  // (from the original)
    if (r0_9 >> 0x1f == (r0_9 & (r0_9 ^ r0_9)) >> 0x1f) {  // (from the original)
        if (s32(r0_9) < s32(*gptr<u32>(r6 + 0x14cu))) {  // (from the original)
            goto L_57def0;
        }
    }
    *gptr<u32>(0xad6540u + 0x18u) = u32(r9);  // (from the original)
L_57def0:;
    r0_10 = *gptr<u32>(0xad6540u + 0x14u);  // (from the original)
    if (r0_10 >> 0x1f == (r0_10 & (r0_10 ^ r0_10)) >> 0x1f) {  // (from the original)
        if (s32(r0_10) < s32(*gptr<u32>(r6 + 0x178u))) {  // (from the original)
            goto L_57df0c;
        }
    }
    *gptr<u32>(0xad6540u + 0x14u) = u32(r9);  // (from the original)
L_57df0c:;
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = 0xad6540u;  // (from the original)
    return r0_10;
}

}  // namespace d_0057ddf4
GUEST_EXPORT(0x0057ddf4, d_0057ddf4::f_0057ddf4);

// f_0057f2a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057f2a0 {

struct __attribute__((packed)) Object_0057f2a0_0 {
    u8 unknown_0[0x570];  // (not used here)
    u32 word_570;
};
GUEST_OFFSET(Object_0057f2a0_0, word_570, 0x570);  // (from the original)


u32 f_0057f2a0(gptr<Object_0057f2a0_0> arg0) {
    u32 r0_1 = 0;
    if (*gptr<u32>(arg0->word_570 + 0x14u) == 2u) {  // (from the original)
        r0_1 = 1u;
    } else {
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_0057f2a0
GUEST_EXPORT(0x0057f2a0, d_0057f2a0::f_0057f2a0);

// f_0057f2b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057f2b8 {

struct __attribute__((packed)) Object_0057f2b8_0 {
    u8 unknown_0[0x574];  // (not used here)
    u32 word_574;
};
GUEST_OFFSET(Object_0057f2b8_0, word_574, 0x574);  // (from the original)


u32 f_0057f2b8(gptr<Object_0057f2b8_0> arg0) {
    u32 r0_1 = 0;
    if (*gptr<u32>(arg0->word_574 + 0x14u) == 2u) {  // (from the original)
        r0_1 = 1u;
    } else {
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_0057f2b8
GUEST_EXPORT(0x0057f2b8, d_0057f2b8::f_0057f2b8);
