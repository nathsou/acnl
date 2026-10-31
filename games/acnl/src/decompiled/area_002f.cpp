// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_002f0c70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f0c70 {

inline guest::global<u32, 0x0094fd58> global_0094fd58;  // (from the original)
inline constexpr guest::Function<0x002efe0c, u32(u32, u32, u32, u32)> call_002efe0c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x00568a80, u32(u32, u32, u32, u32)> call_00568a80;  // (from the original)
inline constexpr guest::Function<0x005e2c98, u32(u32, u32, u32, u32)> call_005e2c98;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_002f0c70(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r7_1 = 0;
    u32 r6_1 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r3_3 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r3_4 = 0;
    u32 r2_2 = 0;
    u32 r0_7 = 0;
    u32 r3_5 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r0_9 = 0;
    u32 r1_5 = 0;
    u32 r2_3 = 0;
    u32 r3_6 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r2_4 = 0;
    u32 res_1 = 0;
    u32 ea_1 = 0;
    u32 r2_5 = 0;
    u32 ea_2 = 0;
    u32 r0_13 = 0;
    u32 r1_6 = 0;
    u32 r3_7 = 0;
    u32 r0_14 = 0;
    u32 r2_6 = 0;
    u32 r3_8 = 0;
    u32 r0_15 = 0;
    u32 r2_7 = 0;
    u32 r3_9 = 0;
    u32 r0_16 = 0;
    u32 r1_7 = 0;
    u32 r1_8 = 0;
    u32 r2_8 = 0;
    u32 r3_10 = 0;
    u32 r0_17 = 0;
    u32 r1_9 = 0;
    u32 r1_10 = 0;
    r13 = r13 - 0x88u;  // (from the original)
    r5 = r0;
    r4 = 0u;
    r8 = 0x94f768u;  // (from the original)
    r9 = r8 + 0x28u;  // (from the original)
    do {
L_2f0c88:;
        r1_1 = *gptr<u32>(r8 + (r4 << 2));
        r0_1 = r5 + 0x2e4u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_2 = call_00568a80(r0_1, r1_1, r2, r3);
        r7_1 = r5 + (r4 << 2);
        r6_1 = r7_1 + 0x1000u;  // (from the original)
        *gptr<u32>(r7_1 + 0x808u) = u32(r0_2);  // (from the original)
        r3_1 = *gptr<u32>(r6_1 + 0x1d8u);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_005e2c98(r3_1, r0_2, 0u, r3_1);
        r2_1 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        *gptr<u8>(*gptr<u32>(r6_1 + 0x1d8u) + 0x38u) = u8(1u);  // (from the original)
        r1_2 = *gptr<u32>(r9 + (r4 << 2));
        r0_3 = r5 + 0x2e4u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_4 = call_00568a80(r0_3, r1_2, r2_1, r3_2);
        *gptr<u32>(r7_1 + 0x830u) = u32(r0_4);  // (from the original)
        r3_3 = *gptr<u32>(r6_1 + 0x200u);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_005e2c98(r3_3, r0_4, 0u, r3_3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        *gptr<u8>(*gptr<u32>(r6_1 + 0x200u) + 0x38u) = u8(1u);  // (from the original)
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(0xau));  // (from the original)
    r11 = 0x94f748u;  // (from the original)
    r9 = 0x8906ecu;  // (from the original)
    r8 = 0x95deccu;  // (from the original)
    r7 = 0x909ee0u;  // (from the original)
    r4 = 0u;
    r10 = r4;
L_2f0d14:;
    r1_3 = *gptr<u32>(r11 + (r4 << 2));
    r0_5 = r5 + 0x198u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_00568a80(r0_5, r1_3, r2, r3);
    r3_4 = guest::cpu()->r[3];
    r2_2 = r5 + (r4 << 2);
    r6 = r2_2 + 0x1000u;  // (from the original)
    *gptr<u32>(r2_2 + 0x858u) = u32(r0_6);  // (from the original)
    r0_7 = *gptr<u32>(r6 + 0x228u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e2c98(r0_7, r0_6, 0u, r3_4);
    r3_5 = guest::cpu()->r[3];
    *gptr<u8>(*gptr<u32>(r6 + 0x228u) + 0x38u) = u8(1u);  // (from the original)
    r0_8 = r13 + 8u;
    r1_4 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_9 = call_003083bc(r0_8, r1_4, 0x20u, r3_5);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    *gptr<u32>(r0_9) = u32(r7);
    r0_10 = r0_9 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_11 = call_005f4bfc(r0_10, r1_5, r2_3, r3_6);
    r3 = guest::cpu()->r[3];
    r0_12 = r0_11 - 0xcu;  // (from the original)
    r1 = 0x10u;  // (from the original)
    *gptr<u32>(r0_12 + 0x18u) = u32(r10);  // (from the original)
    *gptr<u32>(r0_12 + 0x1cu) = u32(r10);  // (from the original)
    *gptr<u32>(r0_12 + 0x20u) = u32(r10);  // (from the original)
    *gptr<u32>(r0_12 + 0x24u) = u32(r10);  // (from the original)
    *gptr<u32>(r0_12 + 0x28u) = u32(r10);  // (from the original)
    *gptr<u32>(r0_12 + 0x2cu) = u32(r10);  // (from the original)
    *gptr<u32>(r0_12 + 0x30u) = u32(r10);  // (from the original)
    *gptr<u32>(r0_12 + 0x34u) = u32(r10);  // (from the original)
    *gptr<u32>(r0_12 + 0x38u) = u32(r10);  // (from the original)
    *gptr<u32>(r0_12 + 0x3cu) = u32(r10);  // (from the original)
    *gptr<u32>(r0_12 + 0x40u) = u32(r10);  // (from the original)
    *gptr<u32>(r0_12 + 0x44u) = u32(r10);  // (from the original)
    *gptr<u32>(r0_12 + 0x48u) = u32(r10);  // (from the original)
    *gptr<u32>(r0_12 + 0x4cu) = u32(r10);  // (from the original)
    *gptr<u32>(r0_12 + 0x50u) = u32(r10);  // (from the original)
    *gptr<u32>(r0_12 + 0x54u) = u32(r10);  // (from the original)
    r0 = r0_12 + 0x16u;  // (from the original)
    do {
L_2f0db0:;
        r2_4 = u32(*gptr<u16>(r9));
        res_1 = r1 - 1u;
        r1 = res_1;
        ea_1 = r0 + 2u;
        *gptr<u16>(ea_1) = u16(r2_4);
        r2_5 = u32(*gptr<u16>(r9));
        ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r2_5);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    r0_13 = *gptr<u32>(r8);
    guest::cpu()->r[13] = r13;
    call_005ea8f8(r0_13, 0u, r2_5, r3);
    *gptr<u32>(r13) = u32(r10);
    r1_6 = r13 + 8u;
    r3_7 = u32(*gptr<u16>(0x84884cu + (r4 << 1)));  // (from the original)
    r0_14 = *gptr<u32>(r8);
    guest::cpu()->r[13] = r13;
    call_005ea964(r0_14, r1_6, 0x2f0e74u, r3_7);  // (from the original)
    r2_6 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_15 = *gptr<u32>(r8);
    guest::cpu()->r[13] = r13;
    call_005ea8dc(r0_15, 0u, r2_6, r3_8);
    r2_7 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_16 = *gptr<u32>(r6 + 0x228u);  // (from the original)
    r1_7 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_005e2e50(r0_16, r1_7, r2_7, r3_9);
    r1_8 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_17 = *gptr<u32>(r6 + 0x228u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e2f94(r0_17, r1_8, r2_8, r3_10);
    r1_9 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 8u) = u32(r7);
    r4 = r4 + 1u;
    if (s32(r4) < s32(2u)) {
        guest::preempt();
        goto L_2f0d14;
    }
    guest::cpu()->r[13] = r13;
    call_002efe0c(r5, r1_9, r2, r3);
    r1_10 = *global_0094fd58 & ~0x10u;  // (from the original)
    *global_0094fd58 = u32(r1_10);
    r13 = r13 + 0x88u;  // (from the original)
    guest::cpu()->r[1] = r1_10;
    guest::cpu()->r[13] = r13;
    return 0x94fd58u;  // (from the original)
}

}  // namespace d_002f0c70
GUEST_EXPORT(0x002f0c70, d_002f0c70::f_002f0c70);

// f_002f10b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f10b4 {

struct __attribute__((packed)) Object_002f10b4_0 {
    u32 word_0;
    u8 unknown_4[0x24];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(Object_002f10b4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002f10b4_0, word_28, 0x28);  // (from the original)

inline constexpr guest::Function<0x001aebdc, u32(u32, u32, u32, u32)> call_001aebdc;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f770c, u32(u32, u32, u32, u32)> call_002f770c;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x002ffb64, u32(u32, u32, u32, u32)> call_002ffb64;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32, u32, u32)> call_006aaa30;  // (from the original)

u32 f_002f10b4(gptr<Object_002f10b4_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 res_1 = 0;
    u32 r5_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 res_2 = 0;
    u32 r0_7 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r4_1 = 0;
    u32 r0_11 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_6 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r1_7 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r1_8 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r1_9 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r4_2 = 0;
    u32 r0_24 = 0;
    u32 r1_10 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r4_3 = 0;
    u32 r0_27 = 0;
    u32 r1_11 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r0_28 = 0;
    u32 r1_12 = 0;
    u32 r2_13 = 0;
    u32 r3_13 = 0;
    u32 r0_29 = 0;
    u32 r0_30 = 0;
    u32 r1_13 = 0;
    u32 r2_14 = 0;
    u32 r3_14 = 0;
    u32 r0_31 = 0;
    u32 r0_32 = 0;
    u32 r4_4 = 0;
    u32 r0_33 = 0;
    u32 r1_14 = 0;
    u32 r2_15 = 0;
    u32 r3_15 = 0;
    u32 r0_34 = 0;
    u32 r0_35 = 0;
    u32 r1_15 = 0;
    u32 r2_16 = 0;
    u32 r3_16 = 0;
    u32 r0_36 = 0;
    u32 r0_37 = 0;
    u32 r1_16 = 0;
    u32 r2_17 = 0;
    u32 r3_17 = 0;
    u32 r0_38 = 0;
    u32 r0_39 = 0;
    u32 r1_17 = 0;
    u32 r2_18 = 0;
    u32 r3_18 = 0;
    u32 r0_40 = 0;
    u32 r0_41 = 0;
    u32 r1_18 = 0;
    u32 r2_19 = 0;
    u32 r3_19 = 0;
    u32 r0_42 = 0;
    u32 r0_43 = 0;
    u32 r1_19 = 0;
    u32 r2_20 = 0;
    u32 r3_20 = 0;
    u32 r0_44 = 0;
    u32 r0_45 = 0;
    u32 r1_20 = 0;
    u32 r2_21 = 0;
    u32 r3_21 = 0;
    u32 r0_46 = 0;
    u32 r0_47 = 0;
    u32 r1_21 = 0;
    u32 r2_22 = 0;
    u32 r3_22 = 0;
    u32 r0_48 = 0;
    u32 r0_49 = 0;
    u32 r1_22 = 0;
    u32 r2_23 = 0;
    u32 r3_23 = 0;
    u32 r0_50 = 0;
    u32 r0_51 = 0;
    u32 r1_23 = 0;
    u32 r2_24 = 0;
    u32 r3_24 = 0;
    u32 r0_52 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r6 = r0;
    r4 = 0u;
    r7 = r4;
    r1 = 0x8f3ce8u + 0x6cu;  // (from the original)
    arg0->word_0 = u32(0x8f3ce8u);  // (from the original)
    arg0->word_28 = u32(r1);
    do {
L_2f10d4:;
        r5_1 = r6 + (r4 << 2) + 0x1000u;  // (from the original)
        r0_1 = *gptr<u32>(r5_1 + 0x1d8u);  // (from the original)
        if (!(r0_1 == 0)) {
            r0_2 = call_005e3194(r0_1, r1, r2, r3);
            r1_1 = guest::cpu()->r[1];
            r2_1 = guest::cpu()->r[2];
            r3_1 = guest::cpu()->r[3];
            call_002ffb64(r0_2, r1_1, r2_1, r3_1);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r0_3 = *gptr<u32>(r5_1 + 0x200u);  // (from the original)
        *gptr<u32>(r5_1 + 0x1d8u) = u32(r7);  // (from the original)
        if (!(r0_3 == 0)) {
            r0_4 = call_005e3194(r0_3, r1, r2, r3);
            r1_2 = guest::cpu()->r[1];
            r2_2 = guest::cpu()->r[2];
            r3_2 = guest::cpu()->r[3];
            call_002ffb64(r0_4, r1_2, r2_2, r3_2);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 = r4 + 1u;
        res_1 = r4 - 0xau;  // (from the original)
        *gptr<u32>(r5_1 + 0x200u) = u32(r7);  // (from the original)
        guest::preempt();
    } while (res_1 >> 0x1f != ((r4 ^ 0xau) & (r4 ^ res_1)) >> 0x1f);  // (from the original)
    r4 = 0u;
    do {
L_2f112c:;
        r5_2 = r6 + (r4 << 2) + 0x1000u;  // (from the original)
        r0_5 = *gptr<u32>(r5_2 + 0x228u);  // (from the original)
        if (!(r0_5 == 0)) {
            r0_6 = call_005e3194(r0_5, r1, r2, r3);
            r1_3 = guest::cpu()->r[1];
            r2_3 = guest::cpu()->r[2];
            r3_3 = guest::cpu()->r[3];
            call_002ffb64(r0_6, r1_3, r2_3, r3_3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 = r4 + 1u;
        res_2 = r4 - 2u;
        *gptr<u32>(r5_2 + 0x228u) = u32(r7);  // (from the original)
        guest::preempt();
    } while (res_2 >> 0x1f != ((r4 ^ 2u) & (r4 ^ res_2)) >> 0x1f);  // (from the original)
    r0_7 = r6 + 0x229cu;  // (from the original)
    call_002f76ac(r0_7, 0x1c81ccu, 0x1cu, 2u);  // (from the original)
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_8 = r6 + 0x1b04u;  // (from the original)
    *gptr<u32>(r0_8) = u32(0x8f0888u);  // (from the original)
    r0_9 = r0_8 + 0x608u;  // (from the original)
    r0_10 = call_002f7710(r0_9, 0x8f0888u, r2_4, r3_4);  // (from the original)
    r4_1 = r0_10 - 0x608u;  // (from the original)
    r0_11 = r0_10 - 0x1c0u;  // (from the original)
    call_002f76ac(r0_11, 0x2b6ef8u, 0xe0u, 2u);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_12 = r4_1 + 0x410u;  // (from the original)
    r0_13 = call_0056988c(r0_12, r1_4, r2_5, r3_5);
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_14 = r0_13 - 0x28u;  // (from the original)
    r0_15 = call_0056988c(r0_14, r1_5, r2_6, r3_6);
    r1_6 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_16 = r0_15 - 0x28u;  // (from the original)
    r0_17 = call_0056988c(r0_16, r1_6, r2_7, r3_7);
    r1_7 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_18 = r0_17 - 0x28u;  // (from the original)
    r0_19 = call_0056988c(r0_18, r1_7, r2_8, r3_8);
    r1_8 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_20 = r0_19 - 0x14cu;  // (from the original)
    r0_21 = call_005bf744(r0_20, r1_8, r2_9, r3_9);
    r1_9 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_22 = r0_21 - 0x248u;  // (from the original)
    r0_23 = call_00567ef0(r0_22, r1_9, r2_10, r3_10);
    r4_2 = r0_23 - 0x1b08u;  // (from the original)
    r0_24 = r0_23 - 0x1c4u;  // (from the original)
    call_002f76ac(r0_24, 0x2b6ef8u, 0xe0u, 2u);  // (from the original)
    r1_10 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_25 = r4_2 + 0x1860u;  // (from the original)
    r0_26 = call_002f7710(r0_25, r1_10, r2_11, r3_11);
    r4_3 = r0_26 + 0xfffff9d0u;  // (from the original)
    *gptr<u32>(r4_3 + 0xe4u) = u32(0x8ef22cu + 0x44u);  // (from the original)
    *gptr<u32>(r4_3) = u32(0x8ef22cu);  // (from the original)
    r0_27 = r4_3 + 0x118u;  // (from the original)
    call_002f76ac(r0_27, 0x2e0b3cu, 0x518u, 1u);  // (from the original)
    r1_11 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_28 = call_002f770c(r4_3, r1_11, r2_12, r3_12);
    r1_12 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_29 = r0_28 - 0x514u;  // (from the original)
    r0_30 = call_001aebdc(r0_29, r1_12, r2_13, r3_13);
    r1_13 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_31 = r0_30 - 0x4bcu;  // (from the original)
    r0_32 = call_001aebdc(r0_31, r1_13, r2_14, r3_14);
    r4_4 = r0_32 - 0x860u;  // (from the original)
    r0_33 = r0_32 - 0x120u;  // (from the original)
    call_002f76ac(r0_33, 0x56988cu, 0x28u, 5u);  // (from the original)
    r1_14 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r0_34 = r4_4 + 0x718u;  // (from the original)
    r0_35 = call_0056988c(r0_34, r1_14, r2_15, r3_15);
    r1_15 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    r0_36 = r0_35 - 0x28u;  // (from the original)
    r0_37 = call_0056988c(r0_36, r1_15, r2_16, r3_16);
    r1_16 = guest::cpu()->r[1];
    r2_17 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    r0_38 = r0_37 - 0x28u;  // (from the original)
    r0_39 = call_0056988c(r0_38, r1_16, r2_17, r3_17);
    r1_17 = guest::cpu()->r[1];
    r2_18 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    r0_40 = r0_39 - 0x28u;  // (from the original)
    r0_41 = call_0056988c(r0_40, r1_17, r2_18, r3_18);
    r1_18 = guest::cpu()->r[1];
    r2_19 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    r0_42 = r0_41 - 0x28u;  // (from the original)
    r0_43 = call_0056988c(r0_42, r1_18, r2_19, r3_19);
    r1_19 = guest::cpu()->r[1];
    r2_20 = guest::cpu()->r[2];
    r3_20 = guest::cpu()->r[3];
    r0_44 = r0_43 - 0x248u;  // (from the original)
    r0_45 = call_00567ef0(r0_44, r1_19, r2_20, r3_20);
    r1_20 = guest::cpu()->r[1];
    r2_21 = guest::cpu()->r[2];
    r3_21 = guest::cpu()->r[3];
    r0_46 = r0_45 - 0x14cu;  // (from the original)
    r0_47 = call_005bf744(r0_46, r1_20, r2_21, r3_21);
    r1_21 = guest::cpu()->r[1];
    r2_22 = guest::cpu()->r[2];
    r3_22 = guest::cpu()->r[3];
    r0_48 = r0_47 - 0x14cu;  // (from the original)
    r0_49 = call_005bf744(r0_48, r1_21, r2_22, r3_22);
    r1_22 = guest::cpu()->r[1];
    r2_23 = guest::cpu()->r[2];
    r3_23 = guest::cpu()->r[3];
    r0_50 = r0_49 - 0x14cu;  // (from the original)
    r0_51 = call_005bf744(r0_50, r1_22, r2_23, r3_23);
    r1_23 = guest::cpu()->r[1];
    r2_24 = guest::cpu()->r[2];
    r3_24 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    r0_52 = r0_51 - 0x4cu;  // (from the original)
    return call_006aaa30(r0_52, r1_23, r2_24, r3_24);
}

}  // namespace d_002f10b4
GUEST_EXPORT(0x002f10b4, d_002f10b4::f_002f10b4);

// f_002f29ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f29ac {

struct __attribute__((packed)) Object_002f29ac_0 {
    u32 word_0;
    u8 unknown_4[0x24];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0x1d64];  // (not used here)
    u32 word_1d90;
    u8 unknown_1d94[0x394];  // (not used here)
    u32 word_2128;
    u8 unknown_212c[0xe0];  // (not used here)
    u32 word_220c;
};
GUEST_OFFSET(Object_002f29ac_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002f29ac_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_002f29ac_0, word_1d90, 0x1d90);  // (from the original)
GUEST_OFFSET(Object_002f29ac_0, word_2128, 0x2128);  // (from the original)
GUEST_OFFSET(Object_002f29ac_0, word_220c, 0x220c);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f770c, u32(u32, u32, u32, u32)> call_002f770c;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32, u32, u32)> call_006aaa30;  // (from the original)

u32 f_002f29ac(gptr<Object_002f29ac_0> arg0) {
    u32 r0 = arg0.addr();
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
    u32 r4_2 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r4_3 = 0;
    u32 r0_11 = 0;
    u32 r1_3 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r1_4 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_5 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r1_6 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r1_7 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r1_8 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r1_9 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    u32 r1_10 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r0_26 = 0;
    u32 r0_27 = 0;
    u32 r1_11 = 0;
    u32 r2_13 = 0;
    u32 r3_13 = 0;
    u32 r0_28 = 0;
    u32 r0_29 = 0;
    u32 r1_12 = 0;
    u32 r2_14 = 0;
    u32 r3_14 = 0;
    u32 r0_30 = 0;
    u32 r0_31 = 0;
    u32 r1_13 = 0;
    u32 r2_15 = 0;
    u32 r3_15 = 0;
    u32 r0_32 = 0;
    u32 r0_33 = 0;
    u32 r1_14 = 0;
    u32 r2_16 = 0;
    u32 r3_16 = 0;
    u32 r0_34 = 0;
    u32 r0_35 = 0;
    u32 r1_15 = 0;
    u32 r2_17 = 0;
    u32 r3_17 = 0;
    u32 r0_36 = 0;
    u32 r0_37 = 0;
    u32 r1_16 = 0;
    u32 r2_18 = 0;
    u32 r3_18 = 0;
    u32 r0_38 = 0;
    u32 r0_39 = 0;
    u32 r1_17 = 0;
    u32 r2_19 = 0;
    u32 r3_19 = 0;
    u32 r0_40 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_28 = u32(0x8f3d68u + 0x6cu);  // (from the original)
    arg0->word_0 = u32(0x8f3d68u);  // (from the original)
    r4_1 = r0 + 0x2128u;  // (from the original)
    arg0->word_1d90 = u32(0x8ee218u);  // (from the original)
    r0_1 = r0 + 0x2240u;  // (from the original)
    arg0->word_2128 = u32(0x8ef22cu);  // (from the original)
    arg0->word_220c = u32(0x8ef22cu + 0x44u);  // (from the original)
    call_002f76ac(r0_1, 0x2e0b3cu, 0x518u, 1u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = call_002f770c(r4_1, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u32>(r0_2 - 0x398u) = u32(0x8f18f4u);  // (from the original)
    r0_3 = r0_2 - 0x248u;  // (from the original)
    r0_4 = call_00567ef0(r0_3, 0x8f18f4u, r2_2, r3_2);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = r0_4 - 0x14cu;  // (from the original)
    r0_6 = call_005bf744(r0_5, r1_2, r2_3, r3_3);
    r4_2 = r0_6 - 0x1d94u;  // (from the original)
    r0_7 = r0_6 - 0xf7cu;  // (from the original)
    call_002f76ac(r0_7, 0x2cd9f4u, 0x314u, 5u);  // (from the original)
    r0_8 = r4_2 + 0xd8cu;  // (from the original)
    call_002f76ac(r0_8, 0x1c81ccu, 0x1cu, 5u);  // (from the original)
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_9 = r4_2 + 0xbfcu;  // (from the original)
    *gptr<u32>(r4_2 + 0x5f4u) = u32(0x8f0888u);  // (from the original)
    r0_10 = call_002f7710(r0_9, 0x8f0888u, r2_4, r3_4);  // (from the original)
    r4_3 = r0_10 - 0x608u;  // (from the original)
    r0_11 = r0_10 - 0x1c0u;  // (from the original)
    call_002f76ac(r0_11, 0x2b6ef8u, 0xe0u, 2u);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_12 = r4_3 + 0x410u;  // (from the original)
    r0_13 = call_0056988c(r0_12, r1_3, r2_5, r3_5);
    r1_4 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_14 = r0_13 - 0x28u;  // (from the original)
    r0_15 = call_0056988c(r0_14, r1_4, r2_6, r3_6);
    r1_5 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_16 = r0_15 - 0x28u;  // (from the original)
    r0_17 = call_0056988c(r0_16, r1_5, r2_7, r3_7);
    r1_6 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_18 = r0_17 - 0x28u;  // (from the original)
    r0_19 = call_0056988c(r0_18, r1_6, r2_8, r3_8);
    r1_7 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_20 = r0_19 - 0x14cu;  // (from the original)
    r0_21 = call_005bf744(r0_20, r1_7, r2_9, r3_9);
    r1_8 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_22 = r0_21 - 0x248u;  // (from the original)
    r0_23 = call_00567ef0(r0_22, r1_8, r2_10, r3_10);
    r1_9 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_24 = r0_23 - 0x2cu;  // (from the original)
    r0_25 = call_0056988c(r0_24, r1_9, r2_11, r3_11);
    r1_10 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_26 = r0_25 - 0x28u;  // (from the original)
    r0_27 = call_0056988c(r0_26, r1_10, r2_12, r3_12);
    r1_11 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_28 = r0_27 - 0x14cu;  // (from the original)
    r0_29 = call_005bf744(r0_28, r1_11, r2_13, r3_13);
    r1_12 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_30 = r0_29 - 0x28u;  // (from the original)
    r0_31 = call_0056988c(r0_30, r1_12, r2_14, r3_14);
    r1_13 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r0_32 = r0_31 - 0x28u;  // (from the original)
    r0_33 = call_0056988c(r0_32, r1_13, r2_15, r3_15);
    r1_14 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    r0_34 = r0_33 - 0x28u;  // (from the original)
    r0_35 = call_0056988c(r0_34, r1_14, r2_16, r3_16);
    r1_15 = guest::cpu()->r[1];
    r2_17 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    r0_36 = r0_35 - 0x14cu;  // (from the original)
    r0_37 = call_005bf744(r0_36, r1_15, r2_17, r3_17);
    r1_16 = guest::cpu()->r[1];
    r2_18 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    r0_38 = r0_37 - 0x248u;  // (from the original)
    r0_39 = call_00567ef0(r0_38, r1_16, r2_18, r3_18);
    r1_17 = guest::cpu()->r[1];
    r2_19 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 8u;
    r0_40 = r0_39 - 0x4cu;  // (from the original)
    return call_006aaa30(r0_40, r1_17, r2_19, r3_19);
}

}  // namespace d_002f29ac
GUEST_EXPORT(0x002f29ac, d_002f29ac::f_002f29ac);

// f_002f2b28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f2b28 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x005d6cc0, u32(u32, u32, u32, u32)> call_005d6cc0;  // (from the original)
inline constexpr guest::Function<0x005d6d28, u32(u32, u32, u32, u32)> call_005d6d28;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_002f2b28(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r1 = 0;
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
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r5_1 = 0;
    u32 r0_4 = 0;
    u32 res_1 = 0;
    u32 r2_3 = 0;
    u32 ea_1 = 0;
    u32 r2_4 = 0;
    u32 ea_2 = 0;
    u32 r0_5 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r2_6 = 0;
    u32 r3_5 = 0;
    u32 r0_8 = 0;
    u32 r1_3 = 0;
    u32 r2_7 = 0;
    u32 r3_6 = 0;
    u32 r3_7 = 0;
    u32 r1_4 = 0;
    u32 r0_9 = 0;
    u32 r1_5 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r5_2 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r2_10 = 0;
    u32 res_2 = 0;
    u32 ea_3 = 0;
    u32 r2_11 = 0;
    u32 ea_4 = 0;
    u32 r0_14 = 0;
    u32 r3_10 = 0;
    u32 r0_15 = 0;
    u32 r2_12 = 0;
    u32 r3_11 = 0;
    u32 r0_16 = 0;
    u32 r2_13 = 0;
    u32 r3_12 = 0;
    u32 r0_17 = 0;
    u32 r1_6 = 0;
    u32 r2_14 = 0;
    u32 r3_13 = 0;
    u32 r1_7 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r12);  // (from the original)
    r13 = r13 - 0x4e8u;  // (from the original)
    r4 = r0;
    r11 = r13 + 0x3a0u;  // (from the original)
    r1_1 = r13 + 0x3b8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_003083bc(r11, r1_1, 0x80u, r3);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r7 = 0x9099d8u;  // (from the original)
    *gptr<u32>(r0_1) = u32(r7);
    r0_2 = r0_1 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_005f4bfc(r0_2, r1_2, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r5_1 = r0_3 - 0xcu;  // (from the original)
    r0_4 = r0_3 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_4, 0x100u, r2_2, r3_2);  // (from the original)
    r3 = guest::cpu()->r[3];
    r8 = 0x8906ecu;  // (from the original)
    r0 = r5_1 + 0x16u;  // (from the original)
    r1 = 0x40u;  // (from the original)
    do {
L_2f2b70:;
        res_1 = r1 - 1u;
        r1 = res_1;
        r2_3 = u32(*gptr<u16>(r8));
        ea_1 = r0 + 2u;
        *gptr<u16>(ea_1) = u16(r2_3);
        r2_4 = u32(*gptr<u16>(r8));
        ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r2_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    r10 = 0x95deccu;  // (from the original)
    r0_5 = *gptr<u32>(r10);
    guest::cpu()->r[13] = r13;
    call_005ea8f8(r0_5, 0u, r2_4, r3);
    *gptr<u32>(r13) = u32(0u);
    r3_3 = *gptr<u32>(r4 + 0x630u);  // (from the original)
    r0_6 = *gptr<u32>(r10);
    guest::cpu()->r[13] = r13;
    call_005ea964(r0_6, r11, 0x2f2cccu, r3_3);  // (from the original)
    r2_5 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_7 = *gptr<u32>(r10);
    guest::cpu()->r[13] = r13;
    call_005ea8dc(r0_7, 0u, r2_5, r3_4);
    r2_6 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_8 = r4 + 0x41cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005d6cc0(r0_8, r11, r2_6, r3_5);
    r1_3 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_005d6d28(r0_8, r1_3, r2_7, r3_6);
    r3_7 = guest::cpu()->r[3];
    r9 = r13 + 4u;
    r1_4 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_9 = call_003083bc(r9, r1_4, 0x1c2u, r3_7);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r6 = 0x90a0a0u;  // (from the original)
    *gptr<u32>(r0_9) = u32(r6);
    r0_10 = r0_9 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_11 = call_005f4bfc(r0_10, r1_5, r2_8, r3_8);
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r5_2 = r0_11 - 0xcu;  // (from the original)
    r0_12 = r0_11 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_12, 0x384u, r2_9, r3_9);  // (from the original)
    r3 = guest::cpu()->r[3];
    r0_13 = r5_2 + 0x18u;  // (from the original)
    r5 = 0u;
    r0 = r0_13 - 2u;
    r1 = 0xe1u;  // (from the original)
    do {
L_2f2c20:;
        r2_10 = u32(*gptr<u16>(r8));
        res_2 = r1 - 1u;
        r1 = res_2;
        ea_3 = r0 + 2u;
        *gptr<u16>(ea_3) = u16(r2_10);
        r2_11 = u32(*gptr<u16>(r8));
        ea_4 = r0 + 4u;
        *gptr<u16>(ea_4) = u16(r2_11);
        r0 = ea_4;
        guest::preempt();
    } while (res_2 != 0);
    r0_14 = *gptr<u32>(r10);
    guest::cpu()->r[13] = r13;
    call_005ea8f8(r0_14, 0u, r2_11, r3);
    *gptr<u32>(r13) = u32(r5);
    r3_10 = *gptr<u32>(r4 + 0x630u);  // (from the original)
    r0_15 = *gptr<u32>(r10);
    guest::cpu()->r[13] = r13;
    call_005ea964(r0_15, r9, 0x2f2cecu, r3_10);  // (from the original)
    r2_12 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_16 = *gptr<u32>(r10);
    guest::cpu()->r[13] = r13;
    call_005ea8dc(r0_16, 0u, r2_12, r3_11);
    r2_13 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_17 = r4 + 0x51cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005d6cc0(r0_17, r9, r2_13, r3_12);
    r1_6 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_005d6d28(r0_17, r1_6, r2_14, r3_13);
    r1_7 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 4u) = u32(r6);
    *gptr<u32>(r13 + 0x3a0u) = u32(r7);  // (from the original)
    r13 = r13 + 0x4e8u;  // (from the original)
    guest::cpu()->r[1] = r1_7;
    guest::cpu()->r[13] = r13;
    return r11;
}

}  // namespace d_002f2b28
GUEST_EXPORT(0x002f2b28, d_002f2b28::f_002f2b28);

// f_002f3398: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f3398 {

inline guest::global<u8, 0x009500e0> global_009500e0;  // (from the original)
inline guest::global<u32, 0x00981ff4> global_00981ff4;  // (from the original)
inline constexpr guest::Function<0x001b95f8, u32(u32, u32, u32, u32)> call_001b95f8;  // (from the original)

u32 f_002f3398() {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = *global_00981ff4;
    r0_2 = call_001b95f8(r0_1, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    *global_009500e0 = u8(r0_2);
    if (r0_2 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    r0_3 = *gptr<u32>(0x9500e0u + 4u);  // (from the original)
    r0_4 = call_001b95f8(r0_3, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_4 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return r0_4;
    }
    *global_009500e0 = u8(1u);
    *gptr<u8>(0x9500e0u + 1u) = u8(1u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_002f3398
GUEST_EXPORT(0x002f3398, d_002f3398::f_002f3398);

// f_002f33e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f33e8 {

inline guest::global<u8, 0x009500e0> global_009500e0;  // (from the original)
inline guest::global<u32, 0x00981ff4> global_00981ff4;  // (from the original)
inline constexpr guest::Function<0x001b8008, u32(u32, u32, u32, u32)> call_001b8008;  // (from the original)

u32 f_002f33e8() {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = *global_00981ff4;
    call_001b8008(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = *gptr<u32>(0x9500e0u + 4u);  // (from the original)
    call_001b8008(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *global_009500e0 = u8(0u);
    *gptr<u8>(0x9500e0u + 1u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return 0u;
}

}  // namespace d_002f33e8
GUEST_EXPORT(0x002f33e8, d_002f33e8::f_002f33e8);

// f_002f341c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f341c {

inline guest::global<u32, 0x008c8ad8> global_008c8ad8;  // (from the original)
inline guest::global<u8, 0x009500e1> global_009500e1;  // (from the original)
inline guest::global<u32, 0x00952c3c> global_00952c3c;  // (from the original)
inline guest::global<u32, 0x00981fe0> global_00981fe0;  // (from the original)
inline guest::global<u8, 0x00981fec> global_00981fec;  // (from the original)
inline guest::global<u32, 0x00981ff0> global_00981ff0;  // (from the original)
inline constexpr guest::Function<0x001b26c8, u32(u32, u32, u32, u32)> call_001b26c8;  // (from the original)
inline constexpr guest::Function<0x0027ab40, u32(u32, u32, u32, u32)> call_0027ab40;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> call_002ff8b0;  // (from the original)
inline constexpr guest::Function<0x005cd270, u32(u32, u32, u32, u32)> call_005cd270;  // (from the original)

u32 f_002f341c(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 ea_2 = 0;
    r13 = r13 - 0x10;  // (from the original)
    if (*gptr<u32>(0xaf7618u + 0x2cu) == 1u) {  // (from the original)
        goto L_2f34b0;
    }
    if (u32(*global_00981fec) != 0) {
        goto L_2f34b0;
    }
    guest::cpu()->r[13] = r13;
    call_005cd270(0xaf7618u, r1, r2, guest::cpu()->r[3]);  // (from the original)
    ea_1 = 0xaf7618u + 8u;  // (from the original)
    *gptr<u32>(ea_1) = u32(0xc0000cu);  // (from the original)
    *gptr<u32>(ea_1 + 4) = u32(0u);
    r1 = r0;
    if (*global_00981ff0 != 0) {
        goto L_2f34b0;
    }
    if (r1 == 0) {
        r1 = *global_00952c3c;
    }
    r2_1 = *global_008c8ad8;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fd108(0xc8b8u, r1, r2_1, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_2 = call_001b26c8(r0_1, r1_1, r2_2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    *global_00981ff0 = u32(r0_2);
    guest::cpu()->r[13] = r13;
    r0_3 = call_002ff8b0(4u, r1_2, r2_3, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    *global_00981fe0 = u32(r0_3);
    guest::cpu()->r[13] = r13;
    r0_4 = call_0027ab40(r0_3, r1_3, r2_4, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_4 == 0) {
        *global_00981fe0 = u32(0u);
    }
L_2f34b0:;
    r0_5 = u32(*global_009500e1);
    if (r0_5 != 0) {
        r0_5 = 0xe0000cu;  // (from the original)
        r1 = 0u;
        ea_2 = 0xaf7618u + 8u;  // (from the original)
        *gptr<u32>(ea_2) = u32(r0_5);
        *gptr<u32>(ea_2 + 4) = u32(r1);
    }
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_5;
}

}  // namespace d_002f341c
GUEST_EXPORT(0x002f341c, d_002f341c::f_002f341c);

// f_002f4158: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f4158 {


u32 f_002f4158(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    r0_1 = r0 + 0x19d6u;  // (from the original)
    if (r1 == 0) {
        *gptr<u8>(r0_1) = u8(0xbu);  // (from the original)
        guest::cpu()->r[1] = 0xbu;  // (from the original)
        return r0_1;
    }
    if (r1 == 1u) {
        *gptr<u8>(r0_1) = u8(0xcu);  // (from the original)
        guest::cpu()->r[1] = 0xcu;  // (from the original)
        return r0_1;
    }
    if (r1 == 2u) {
        *gptr<u8>(r0_1) = u8(8u);
        guest::cpu()->r[1] = 8u;
        return r0_1;
    }
    if (r1 == 3u) {
    } else {
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    *gptr<u8>(r0_1) = u8(9u);
    guest::cpu()->r[1] = 9u;
    return r0_1;
}

}  // namespace d_002f4158
GUEST_EXPORT(0x002f4158, d_002f4158::f_002f4158);

// f_002f4ab0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f4ab0 {

struct __attribute__((packed)) Object_002f4ab0_0 {
    u8 unknown_0[0x19d6];  // (not used here)
    u8 byte_19d6;
};
GUEST_OFFSET(Object_002f4ab0_0, byte_19d6, 0x19d6);  // (from the original)

inline guest::global<u32, 0x002f4af4> global_002f4af4;  // (from the original)
inline guest::global<u32, 0x002f4af8> global_002f4af8;  // (from the original)
inline constexpr guest::Function<0x004ee9a8, u32(u32, u32, u32, u32)> call_004ee9a8;  // (from the original)
inline constexpr guest::Function<0x004ee9cc, u32(u32, u32, u32, u32)> call_004ee9cc;  // (from the original)

u32 f_002f4ab0(gptr<Object_002f4ab0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r5_1 = 0;
    float S0_1 = 0;
    u32 r0_1 = 0;
    float S0_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5_1 = r0 + 0x19d6u;  // (from the original)
    S0_1 = std::bit_cast<float>(*global_002f4af4);
    r0_1 = r0 + (u32(arg0->byte_19d6) << 5) + 0x1094u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    call_004ee9cc(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    S0_2 = std::bit_cast<float>(*global_002f4af8);
    r0_2 = r0 + (u32(*gptr<u8>(r5_1)) << 5);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r0_3 = r0_2 + 0x1094u;  // (from the original)
    guest::cpu()->s[0] = S0_2;
    return call_004ee9a8(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_002f4ab0
GUEST_EXPORT(0x002f4ab0, d_002f4ab0::f_002f4ab0);

// f_002f4d2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f4d2c {

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> call_002fa9d0;  // (from the original)
inline constexpr guest::Function<0x00317cc8, u32(u32, u32, u32, u32)> call_00317cc8;  // (from the original)
inline constexpr guest::Function<0x004f2ef0, u32(u32, u32, u32, u32)> call_004f2ef0;  // (from the original)
inline constexpr guest::Function<0x00736a1c, u32(u32, u32, u32, u32)> call_00736a1c;  // (from the original)

u32 f_002f4d2c(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r7_1 = 0;
    u32 r0_3 = 0;
    u32 r5_1 = 0;
    u32 r0_4 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 ea_2 = 0;
    u32 r1_2 = 0;
    u32 ea_3 = 0;
    u32 r3_3 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r0_1 = r1 + 8u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_00317cc8(r0_1, 0u, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    ea_1 = r0_2 + 0xc0u;  // (from the original)
    r1_1 = *gptr<u32>(ea_1);
    r7_1 = 0u;
    if (r1_1 == 0) {
        r0_3 = r7_1;
    } else {
        r0_3 = ea_1 + r1_1;
    }
    r5_1 = r13;
    *gptr<u32>(r13) = u32(r0_3);
    if (r0_3 == 0) {
        goto L_2f4d9c;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_002fa9d0(0x2f4db4u, r1_1, r2_1, r3_1);  // (from the original)
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_5 = call_00736a1c(r5_1, 0x2f4db4u, r0_4, r3_2);  // (from the original)
    if (r0_5 == 0) {
        goto L_2f4d9c;
    }
    ea_2 = r0_5 + 0xcu;  // (from the original)
    r1_2 = *gptr<u32>(ea_2);
    if (r1_2 != 0) {
        r7_1 = r1_2 + ea_2;
    }
    goto L_2f4da0;
L_2f4d9c:;
    r7_1 = 0u;
L_2f4da0:;
    ea_3 = r13;
    r13 = r13 + 0x18;  // (from the original)
    r3_3 = *gptr<u32>(ea_3);
    guest::cpu()->r[13] = r13;
    return call_004f2ef0(r7_1, 0x2f4dbcu, r2, r3_3);  // (from the original)
}

}  // namespace d_002f4d2c
GUEST_EXPORT(0x002f4d2c, d_002f4d2c::f_002f4d2c);

// f_002f4dcc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f4dcc {

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> call_002fa9d0;  // (from the original)
inline constexpr guest::Function<0x00317cc8, u32(u32, u32, u32, u32)> call_00317cc8;  // (from the original)
inline constexpr guest::Function<0x004f2ef0, u32(u32, u32, u32, u32)> call_004f2ef0;  // (from the original)
inline constexpr guest::Function<0x00736a1c, u32(u32, u32, u32, u32)> call_00736a1c;  // (from the original)

u32 f_002f4dcc(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r7_1 = 0;
    u32 r0_3 = 0;
    u32 r5_1 = 0;
    u32 r0_4 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 ea_2 = 0;
    u32 r1_2 = 0;
    u32 ea_3 = 0;
    u32 r3_3 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r0_1 = r1 + 8u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_00317cc8(r0_1, 0u, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    ea_1 = r0_2 + 0xc0u;  // (from the original)
    r1_1 = *gptr<u32>(ea_1);
    r7_1 = 0u;
    if (r1_1 == 0) {
        r0_3 = r7_1;
    } else {
        r0_3 = ea_1 + r1_1;
    }
    r5_1 = r13;
    *gptr<u32>(r13) = u32(r0_3);
    if (r0_3 == 0) {
        goto L_2f4e3c;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_002fa9d0(0x2f4e54u, r1_1, r2_1, r3_1);  // (from the original)
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_5 = call_00736a1c(r5_1, 0x2f4e54u, r0_4, r3_2);  // (from the original)
    if (r0_5 == 0) {
        goto L_2f4e3c;
    }
    ea_2 = r0_5 + 0xcu;  // (from the original)
    r1_2 = *gptr<u32>(ea_2);
    if (r1_2 != 0) {
        r7_1 = r1_2 + ea_2;
    }
    goto L_2f4e40;
L_2f4e3c:;
    r7_1 = 0u;
L_2f4e40:;
    ea_3 = r13;
    r13 = r13 + 0x18;  // (from the original)
    r3_3 = *gptr<u32>(ea_3);
    guest::cpu()->r[13] = r13;
    return call_004f2ef0(r7_1, 0x2f4e54u, r2, r3_3);  // (from the original)
}

}  // namespace d_002f4dcc
GUEST_EXPORT(0x002f4dcc, d_002f4dcc::f_002f4dcc);

// f_002f6a30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f6a30 {

struct __attribute__((packed)) Object_002f6a30_0 {
    u8 unknown_0[0xd4];  // (not used here)
    u32 word_d4;
};
GUEST_OFFSET(Object_002f6a30_0, word_d4, 0xd4);  // (from the original)

inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)

u32 f_002f6a30(gptr<Object_002f6a30_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_1 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = arg0->word_d4;
    if (r1 == 0) {
        r0_2 = r0_1 & ~0x10u;  // (from the original)
    } else {
        r0_2 = r0_1 | 0x10u;  // (from the original)
    }
    arg0->word_d4 = u32(r0_2);
    if ((*gptr<u32>(0x950868u + 4u) & 1u) != 0) {  // (from the original)
        goto L_2f6a88;
    }
    r0_3 = 0x950868u + 4u;  // (from the original)
    r0_4 = call_002fe7dc(r0_3, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_4 == 0) {
        goto L_2f6a88;
    }
    if ((*gptr<u32>(r0 + 0xc4u) & 0x1000u) == 0) {  // (from the original)
        r0_5 = 0x14000u;  // (from the original)
    } else {
        r0_5 = 0x60000u;  // (from the original)
    }
    *gptr<u32>(0x950868u + 8u) = u32(r0_5);  // (from the original)
L_2f6a88:;
    r1_1 = *gptr<u32>(0x950868u + 8u);  // (from the original)
    r0_6 = *gptr<u32>(r0 + 0xc4u);  // (from the original)
    if ((*gptr<u32>(r0 + 0xd4u) & 0x10u) == 0) {  // (from the original)
        r0_7 = r0_6 & ~r1_1;
    } else {
        r0_7 = r0_6 | r1_1;
    }
    *gptr<u32>(r0 + 0xc4u) = u32(r0_7);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_7;
}

}  // namespace d_002f6a30
GUEST_EXPORT(0x002f6a30, d_002f6a30::f_002f6a30);

// f_002f6b8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f6b8c {

struct __attribute__((packed)) Object_002f6b8c_0 {
    u8 unknown_0[0xc4];  // (not used here)
    u32 word_c4;
    u8 unknown_c8[0xc];  // (not used here)
    u32 word_d4;
};
GUEST_OFFSET(Object_002f6b8c_0, word_c4, 0xc4);  // (from the original)
GUEST_OFFSET(Object_002f6b8c_0, word_d4, 0xd4);  // (from the original)

inline constexpr guest::Function<0x002f6a30, u32(u32, u32, u32, u32)> call_002f6a30;  // (from the original)

u32 f_002f6b8c(gptr<Object_002f6b8c_0> arg0) {
    u32 r0 = arg0.addr();
    arg0->word_d4 = u32(arg0->word_d4 & ~4u);
    arg0->word_c4 = u32(0xc04u);  // (from the original)
    return call_002f6a30(r0, guest::cpu()->r[1], 0xc04u, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_002f6b8c
GUEST_EXPORT(0x002f6b8c, d_002f6b8c::f_002f6b8c);

// f_002f6d18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f6d18 {

inline constexpr guest::Function<0x001fa354, u32(u32, u32, u32, u32)> call_001fa354;  // (from the original)
inline constexpr guest::Function<0x006d1e64, u32(u32, u32, u32, u32)> call_006d1e64;  // (from the original)

u32 f_002f6d18(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_006d1e64(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r0_1 + 0x40u) = u8(0u);  // (from the original)
    r0_2 = call_006d1e64(r0_1, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_3 = *gptr<u32>(r0_2 + 0x1f4u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_001fa354(r0_3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_002f6d18
GUEST_EXPORT(0x002f6d18, d_002f6d18::f_002f6d18);

// f_002f6db4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f6db4 {

struct __attribute__((packed)) Object_002f6db4_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0xac];  // (not used here)
    u32 word_b4;
};
GUEST_OFFSET(Object_002f6db4_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002f6db4_0, word_b4, 0xb4);  // (from the original)


void f_002f6db4(gptr<Object_002f6db4_0> arg0, u32 r1, u32 r2) {
    u32 r3 = 0;
    u32 zf_1 = 0;
    r3 = 0u;
L_2f6db8:;
    if (r3 == 0) {
        r3 = arg0->word_4;
    } else {
        r3 = *gptr<u32>(r3 + 8u);
    }
    if (r3 == 0) {
        return;
    }
    zf_1 = r1 + 1u == 0;
    if (!zf_1) {
        zf_1 = *gptr<u32>(r3 + 0xc8u) == r1;  // (from the original)
    }
    if (zf_1) {
        *gptr<u8>(r3 + 0xd6u) = u8(r2);  // (from the original)
        arg0->word_b4 = u32(r3);
    }
    guest::preempt();
    goto L_2f6db8;
}

}  // namespace d_002f6db4
GUEST_EXPORT(0x002f6db4, d_002f6db4::f_002f6db4);

// f_002f7a2e: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f7a2e {

inline constexpr guest::Function<0x002f9235, u32(u32, u32, u32, u32)> call_002f9234;  // (from the original)

u32 f_002f7a2e(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    r13 = r13 - 0x40u;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r1);
    *gptr<u32>(r13 + 0x14u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r3);
    *gptr<u32>(r13 + 0xcu) = u32(0x2f7a25u);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r0);  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f9234(r0_1, r2, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_002f7a2e
GUEST_EXPORT(0x002f7a2f, d_002f7a2e::f_002f7a2e);

// f_002f7c90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f7c90 {

struct __attribute__((packed)) Object_002f7c90_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_002f7c90_1, word_0, 0x0);  // (from the original)


void f_002f7c90(u32 r0, gptr<Object_002f7c90_1> arg1) {
    u32 r2_1 = 0;
    r2_1 = arg1->word_0;
    *gptr<u8>(r2_1) = u8(r0);
    arg1->word_0 = u32(r2_1 + 1u);
    return;
}

}  // namespace d_002f7c90
GUEST_EXPORT(0x002f7c91, d_002f7c90::f_002f7c90);

// f_002f7ca6: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f7ca6 {

inline constexpr guest::Function<0x002f9235, u32(u32, u32, u32, u32)> call_002f9234;  // (from the original)

u32 f_002f7ca6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    r13 = r13 - 0x40u;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r1);
    *gptr<u32>(r13 + 0x14u) = u32(1u);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r3);
    *gptr<u32>(r13 + 0xcu) = u32(0x2f7c9du);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r0);  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f9234(r0_1, r2, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_002f7ca6
GUEST_EXPORT(0x002f7ca7, d_002f7ca6::f_002f7ca6);

// f_002f7ccc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f7ccc {

struct __attribute__((packed)) Object_002f7ccc_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_002f7ccc_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002f7ccc_1, word_4, 0x4);  // (from the original)


void f_002f7ccc(u32 r0, gptr<Object_002f7ccc_1> arg1) {
    u32 r2_1 = 0;
    r2_1 = arg1->word_0;
    if (r2_1 >= arg1->word_4) {
        return;
    }
    arg1->word_0 = u32(r2_1 + 2u);
    *gptr<u16>(r2_1) = u16(r0);
    return;
}

}  // namespace d_002f7ccc
GUEST_EXPORT(0x002f7ccd, d_002f7ccc::f_002f7ccc);

// f_002f7cdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f7cdc {

inline constexpr guest::Function<0x001032ef, u32(u32, u32, u32, u32)> call_001032ee;  // (from the original)
inline constexpr guest::Function<0x002f7a2f, u32(u32, u32, u32, u32)> call_002f7a2e;  // (from the original)

u32 f_002f7cdc(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_002f7a2e(r0, r1, guest::cpu()->r[2], 0x11c195u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    r0_2 = call_001032ee(r1, r1_1, guest::cpu()->r[2], r3_1);
    r1_2 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        r0_3 = ~0u;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return r0_3;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0_1;
}

}  // namespace d_002f7cdc
GUEST_EXPORT(0x002f7cdd, d_002f7cdc::f_002f7cdc);

// f_002f7d52: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f7d52 {

struct __attribute__((packed)) Object_002f7d52_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_002f7d52_1, word_0, 0x0);  // (from the original)


u32 f_002f7d52(u32 r0, gptr<Object_002f7d52_1> arg1) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 res_1 = 0;
    u32 r0_2 = 0;
    r1_1 = arg1->word_0;
    if (r1_1 & 0x400u) {  // (from the original)
        r0_1 = u32(s32(r0 << 0x18) >> 0x18);  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    res_1 = r1_1 << 0x17;  // (from the original)
    if (!(res_1 >> 0x1f)) {  // (from the original)
        guest::cpu()->r[1] = res_1;
        return r0;
    }
    r0_2 = u32(s32(r0 << 0x10) >> 0x10);  // (from the original)
    guest::cpu()->r[1] = res_1;
    return r0_2;
}

}  // namespace d_002f7d52
GUEST_EXPORT(0x002f7d53, d_002f7d52::f_002f7d52);

// f_002f7d68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f7d68 {

struct __attribute__((packed)) Object_002f7d68_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_002f7d68_1, word_0, 0x0);  // (from the original)


u32 f_002f7d68(u32 r0, gptr<Object_002f7d68_1> arg1) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 res_1 = 0;
    u32 r0_2 = 0;
    r1_1 = arg1->word_0;
    if (r1_1 & 0x400u) {  // (from the original)
        r0_1 = r0 << 0x18 >> 0x18;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    res_1 = r1_1 << 0x17;  // (from the original)
    if (!(res_1 >> 0x1f)) {  // (from the original)
        guest::cpu()->r[1] = res_1;
        return r0;
    }
    r0_2 = r0 << 0x10 >> 0x10;  // (from the original)
    guest::cpu()->r[1] = res_1;
    return r0_2;
}

}  // namespace d_002f7d68
GUEST_EXPORT(0x002f7d69, d_002f7d68::f_002f7d68);

// f_002f7d80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f7d80 {


u32 f_002f7d80(u32 r0) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 res_1 = 0;
    u32 r1_2 = 0;
    r1_1 = r0 - 0xau;  // (from the original)
    r0_1 = r0 - (r0 >> 2);
    r0_2 = r0_1 + (r0_1 >> 4);
    r0_3 = r0_2 + (r0_2 >> 8);
    r0_4 = r0_3 + (r0_3 >> 0x10) >> 3;  // (from the original)
    res_1 = r1_1 - (r0_4 + (r0_4 << 2) << 1);
    r1_2 = res_1;
    if (res_1 >> 0x1f) {  // (from the original)
        r1_2 = r1_2 + 0xau;  // (from the original)
    } else {
        r0_4 = r0_4 + 1u;
    }
    guest::cpu()->r[1] = r1_2;
    return r0_4;
}

}  // namespace d_002f7d80
GUEST_EXPORT(0x002f7d80, d_002f7d80::f_002f7d80);

// f_002f7e5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f7e5c {


u32 f_002f7e5c(u32 r0, u32 r1) {
    u32 r14 = guest::cpu()->r[14];
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 cf_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 cf_2 = 0;
    u32 r1_2 = 0;
    u32 res_2 = 0;
    u32 cf_3 = 0;
    u32 r1_3 = 0;
    u32 res_3 = 0;
    u32 cf_4 = 0;
    u32 r1_4 = 0;
    u32 res_4 = 0;
    u32 r1_5 = 0;
    u32 r0_2 = 0;
    u32 r1_6 = 0;
    u32 res_5 = 0;
    u32 r4_1 = 0;
    u32 res_6 = 0;
    u32 res_7 = 0;
    u32 res_8 = 0;
    u32 cf_5 = 0;
    u32 r1_7 = 0;
    guest::cpu()->r[13] -= 0xcu;  // (from the original)
    r2_1 = r0 - 0xau;  // (from the original)
    r3_1 = u32(u64(r1) + ~0u + u32(r0 >= 0xau));  // (from the original)
    r14 = r0 >> 2 | r1 << 0x1e;  // (from the original)
    cf_1 = r0 >= r14;
    r0_1 = r0 - r14;
    r1_1 = u32(u64(r1) + ~(r1 >> 2) + cf_1);
    res_1 = r0_1 + (r0_1 >> 4 | r1_1 << 0x1c);  // (from the original)
    cf_2 = res_1 < r0_1;
    r1_2 = u32(u64(r1_1) + (r1_1 >> 4) + cf_2);
    res_2 = res_1 + (res_1 >> 8 | r1_2 << 0x18);  // (from the original)
    cf_3 = res_2 < res_1;
    r1_3 = u32(u64(r1_2) + (r1_2 >> 8) + cf_3);
    res_3 = res_2 + (res_2 >> 0x10 | r1_3 << 0x10);  // (from the original)
    cf_4 = res_3 < res_2;
    r1_4 = u32(u64(r1_3) + (r1_3 >> 0x10) + cf_4);  // (from the original)
    res_4 = res_3 + r1_4;
    r1_5 = u32(u64(r1_4) + u32(res_4 < res_3));
    r0_2 = res_4 >> 3 | r1_5 << 0x1d;  // (from the original)
    r1_6 = r1_5 >> 3;
    res_5 = r0_2 + (r0_2 << 2);
    r4_1 = u32(u64(r1_6 << 2 | r0_2 >> 0x1e) + r1_6 + u32(res_5 < r0_2));  // (from the original)
    res_6 = res_5 + res_5;
    res_7 = u32(u64(r3_1) + ~u32(u64(r4_1) + r4_1 + u32(res_6 < res_5)) + u32(r2_1 >= res_6));
    if (res_7 >> 0x1f) {  // (from the original)
        guest::cpu()->r[13] += 0xcu;  // (from the original)
        guest::cpu()->r[1] = r1_6;
        return r0_2;
    }
    res_8 = r0_2 + 1u;
    cf_5 = res_8 < r0_2;
    r1_7 = u32(u64(r1_6) + cf_5);
    guest::cpu()->r[13] += 0xcu;  // (from the original)
    guest::cpu()->r[1] = r1_7;
    return res_8;
}

}  // namespace d_002f7e5c
GUEST_EXPORT(0x002f7e5c, d_002f7e5c::f_002f7e5c);

// f_002f7ef4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f7ef4 {

struct __attribute__((packed)) Object_002f7ef4_0 {
    u8 unknown_0[0x2434];  // (not used here)
    u32 word_2434;
};
GUEST_OFFSET(Object_002f7ef4_0, word_2434, 0x2434);  // (from the original)


u32 f_002f7ef4(gptr<Object_002f7ef4_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r0_2 = 0;
    u32 r1_4 = 0;
    r2_1 = arg0->word_2434;
    if (s32(r2_1) <= s32(r1)) {
        r3 = r1;
        if (r2_1 + 4u > r1) {
            r1_1 = r3 - r2_1;
            r2_2 = r1_1 + (r1_1 << 3);
            r0_1 = r0 + (r2_2 + (r1_1 << 5) << 4) + 0x18b4u;  // (from the original)
            r1_2 = *gptr<u32>(*gptr<u32>(r0_1) + 0x60u);  // (from the original)
            return guest::call_address<u32>(r1_2, r0_1, r1_2, r2_2, r3);
        }
    }
    r1_3 = ~0u;
    r2_3 = r1_3 + (r1_3 << 3);
    r0_2 = r0 + (r2_3 + (r1_3 << 5) << 4) + 0x18b4u;  // (from the original)
    r1_4 = *gptr<u32>(*gptr<u32>(r0_2) + 0x60u);  // (from the original)
    return guest::call_address<u32>(r1_4, r0_2, r1_4, r2_3, r3);
}

}  // namespace d_002f7ef4
GUEST_EXPORT(0x002f7ef4, d_002f7ef4::f_002f7ef4);

// f_002f7f40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f7f40 {


u32 f_002f7f40(u32 r0) {
    if (r0 - 0x30u >= 0xau) {  // (from the original)
        return 0u;
    }
    return 1u;
}

}  // namespace d_002f7f40
GUEST_EXPORT(0x002f7f41, d_002f7f40::f_002f7f40);

// f_002f80c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f80c8 {

struct __attribute__((packed)) Object_002f80c8_2 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0x8];  // (not used here)
    u32 word_20;
};
GUEST_OFFSET(Object_002f80c8_2, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002f80c8_2, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_002f80c8_2, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_002f80c8_2, word_20, 0x20);  // (from the original)

inline constexpr guest::Function<0x0010284d, u32(u32, u32, u32, u32)> call_0010284c;  // (from the original)

u32 f_002f80c8(u32 r0_unused, u32 r1, gptr<Object_002f80c8_2> arg2) {
    u32 r2 = arg2.addr();
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    arg2->word_c = u32(r1);
    arg2->word_14 = u32(0x2f80bdu);  // (from the original)
    arg2->word_20 = u32(0x1024edu);  // (from the original)
    arg2->word_10 = u32(0u);
    call_0010284c(guest::cpu()->r[0], r2, 0u, r1);
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return guest::cpu()->r[0];
}

}  // namespace d_002f80c8
GUEST_EXPORT(0x002f80c9, d_002f80c8::f_002f80c8);

// f_002f81e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f81e4 {

struct __attribute__((packed)) Object_002f81e4_0 {
    u8 unknown_0[0x2434];  // (not used here)
    u32 word_2434;
};
GUEST_OFFSET(Object_002f81e4_0, word_2434, 0x2434);  // (from the original)

inline constexpr guest::Function<0x001df368, u32(u32, u32, u32, u32)> call_001df368;  // (from the original)
inline constexpr guest::Function<0x006cce5c, u32(u32, u32, u32, u32)> call_006cce5c;  // (from the original)

u32 f_002f81e4(gptr<Object_002f81e4_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r6_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r5_1 = r2;
    r0_1 = arg0->word_2434;
    if (s32(r0_1) <= s32(r1)) {
        r3 = r0_1 + 4u;
        r2 = r1;
        if (r3 > r1) {
            r6_1 = r2 - r0_1;
            goto L_2f821c;
        }
    }
    r6_1 = ~0u;
L_2f821c:;
    guest::cpu()->r[13] = r13;
    r0_2 = call_001df368(r0_1, r1, r2, r3);
    *gptr<u32>(r13) = u32(r5_1);
    r1_1 = *gptr<u32>(0x185cu + r0);  // (from the original)
    r2_1 = *gptr<u32>(r0 + (r1_1 << 2) + 0x1860u) - 1u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_006cce5c(r0_2, r1_1, r2_1, r6_1);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_002f81e4
GUEST_EXPORT(0x002f81e4, d_002f81e4::f_002f81e4);

// f_002f83b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f83b0 {

inline guest::global<u32, 0x00974f28> global_00974f28;  // (from the original)
inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x0013e560, u32(u32, u32, u32, u32)> call_0013e560;  // (from the original)

u32 f_002f83b0(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r6_1 = 0;
    u32 r4_1 = 0;
    u32 r1_1 = 0;
    u32 ea_2 = 0;
    u32 r4_2 = 0;
    u32 r5_1 = 0;
    u32 r6_2 = 0;
    if (r0 == 0) {
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
    r6_1 = *global_00974f28;
    r4_1 = r6_1 + 0x58u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00135748(r4_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] = r13;
    call_0013e560(r6_1, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    ea_2 = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4_2 = *gptr<u32>(ea_2);
    r5_1 = *gptr<u32>(ea_2 + 4);
    r6_2 = *gptr<u32>(ea_2 + 8);
    r14 = *gptr<u32>(ea_2 + 0xc);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_2;
    return call_001357ec(r4_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_002f83b0
GUEST_EXPORT(0x002f83b0, d_002f83b0::f_002f83b0);

// f_002f83f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f83f0 {

inline guest::global<u32, 0x0087a2d8> global_0087a2d8;  // (from the original)
inline constexpr guest::Function<0x0022c53c, u32(u32, u32, u32, u32)> call_0022c53c;  // (from the original)
inline constexpr guest::Function<0x002682ac, u32(u32, u32, u32, u32)> call_002682ac;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x005673c8, u32(u32, u32, u32, u32)> call_005673c8;  // (from the original)

u32 f_002f83f0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r5_1 = 0;
    u32 r3_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    r13 = r13 - 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002682ac(r0, r1, r2, r3);
    r1_1 = r0_1 + 0x1888u;  // (from the original)
    *gptr<u32>(r1_1 + 4u) = u32(0u);
    *gptr<u8>(r1_1 + 8u) = u8(0u);
    r3_1 = *gptr<u32>(0x87a2d8u + 4);  // (from the original)
    r5_1 = r0_1 + 0x1894u;  // (from the original)
    *gptr<u32>(r5_1) = u32(*global_0087a2d8);
    *gptr<u32>(r5_1 + 4) = u32(r3_1);
    *gptr<u32>(r5_1 + 8) = u32(0u);
    *gptr<u8>(r1_1 + 0x18u) = u8(0u);  // (from the original)
    *gptr<u32>(r1_1 + 0x1cu) = u32(0u);  // (from the original)
    r3_2 = 0x8f3ef4u + 0x2cu;  // (from the original)
    *gptr<u32>(r1_1 + 0x20u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_1) = u32(0x8f3ef4u);  // (from the original)
    *gptr<u32>(r0_1 + 0xa40u) = u32(r3_2);  // (from the original)
    r0_2 = r0_1 + 0x18acu;  // (from the original)
    *gptr<u32>(r1_1) = u32(r3_2 + 0x14u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_005673c8(r0_2, r1_1, 0x8f3ef4u, r3_2);  // (from the original)
    r0_4 = r0_3 + 8u;
    guest::cpu()->r[13] = r13;
    r0_5 = call_00301d0c(r0_4, 0x320a80u, 0x290u, 4u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_6 = r0_5 + 0xa40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_7 = call_0022c53c(r0_6, r1_2, r2_1, r3_3);
    r0_8 = r0_7 - 0x22f4u;  // (from the original)
    *gptr<u32>(0x2434u + r0_8) = u32(0u);  // (from the original)
    *gptr<u8>(0x2434u + 4u + r0_8) = u8(0u);  // (from the original)
    ea_1 = r0_8 + 0x24u;  // (from the original)
    *gptr<u32>(ea_1) = u32(0x2f84b8u);  // (from the original)
    ea_2 = r0_8 + 0xa64u;  // (from the original)
    *gptr<u32>(ea_2) = u32(0x2f84c4u);  // (from the original)
    ea_3 = r0_8 + 0xa68u;  // (from the original)
    *gptr<u32>(ea_3) = u32(0x9533c4u);  // (from the original)
    *gptr<u32>(ea_3 + 4) = u32(0x2f84d0u);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = 0x9533c4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return r0_8;
}

}  // namespace d_002f83f0
GUEST_EXPORT(0x002f83f0, d_002f83f0::f_002f83f0);

// f_002f860c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f860c {

struct __attribute__((packed)) Object_002f860c_0 {
    u32 word_0;
    u8 unknown_4[0xa3c];  // (not used here)
    u32 word_a40;
    u8 unknown_a44[0xe44];  // (not used here)
    u32 word_1888;
    u8 unknown_188c[0xa68];  // (not used here)
    u32 word_22f4;
    u8 unknown_22f8[0x8];  // (not used here)
    u32 word_2300;
};
GUEST_OFFSET(Object_002f860c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002f860c_0, word_a40, 0xa40);  // (from the original)
GUEST_OFFSET(Object_002f860c_0, word_1888, 0x1888);  // (from the original)
GUEST_OFFSET(Object_002f860c_0, word_22f4, 0x22f4);  // (from the original)
GUEST_OFFSET(Object_002f860c_0, word_2300, 0x2300);  // (from the original)

inline constexpr guest::Function<0x002684c0, u32(u32, u32, u32, u32)> call_002684c0;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x00317dec, u32(u32, u32, u32, u32)> call_00317dec;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)

u32 f_002f860c(gptr<Object_002f860c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_6 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_7 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r4_1 = 0;
    u32 r0_15 = 0;
    u32 r1_8 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r1_9 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_18 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_a40 = u32(0x8f3ef4u + 0x2cu);  // (from the original)
    arg0->word_0 = u32(0x8f3ef4u);  // (from the original)
    arg0->word_1888 = u32(0x8f3ef4u + 0x40u);  // (from the original)
    r1_1 = 0x8ee248u + 0x10u;  // (from the original)
    arg0->word_22f4 = u32(0x8ee248u);  // (from the original)
    arg0->word_2300 = u32(r1_1);
    r0_1 = r0 + 0x2408u;  // (from the original)
    r0_2 = call_0056988c(r0_1, r1_1, 0x8ee248u, 0x8f3ef4u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_3 = r0_2 - 0x28u;  // (from the original)
    r0_4 = call_0056988c(r0_3, r1_2, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_5 = r0_4 - 0x28u;  // (from the original)
    r0_6 = call_0056988c(r0_5, r1_3, r2_2, r3_2);
    r1_4 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_7 = r0_6 - 0x28u;  // (from the original)
    r0_8 = call_0056988c(r0_7, r1_4, r2_3, r3_3);
    r1_5 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_9 = r0_8 - 0x28u;  // (from the original)
    r0_10 = call_0056988c(r0_9, r1_5, r2_4, r3_4);
    r1_6 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_11 = r0_10 - 0x28u;  // (from the original)
    r0_12 = call_0056988c(r0_11, r1_6, r2_5, r3_5);
    r1_7 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_13 = r0_12 - 0x2cu;  // (from the original)
    r0_14 = call_0056988c(r0_13, r1_7, r2_6, r3_6);
    r4_1 = r0_14 - 0x2314u;  // (from the original)
    r0_15 = r0_14 - 0xa60u;  // (from the original)
    call_002f76ac(r0_15, 0x320b0cu, 0x290u, 4u);  // (from the original)
    r1_8 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_16 = r4_1 + 0x18acu;  // (from the original)
    r0_17 = call_00317dec(r0_16, r1_8, r2_7, r3_7);
    r1_9 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 8u;
    r0_18 = r0_17 - 0x18acu;  // (from the original)
    return call_002684c0(r0_18, r1_9, r2_8, r3_8);
}

}  // namespace d_002f860c
GUEST_EXPORT(0x002f860c, d_002f860c::f_002f860c);

// f_002f86f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f86f0 {

struct __attribute__((packed)) Object_002f86f0_0 {
    u16 half_0;
    u8 byte_2;
};
GUEST_OFFSET(Object_002f86f0_0, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002f86f0_0, byte_2, 0x2);  // (from the original)

inline guest::global<u32, 0x0095386c> global_0095386c;  // (from the original)

u32 f_002f86f0(gptr<Object_002f86f0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    r1_1 = *global_0095386c;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return r0;
    }
    r2_1 = u32(arg0->byte_2);
    r0_1 = u32(arg0->half_0);
    if (r2_1 < 4u) {
        r1_1 = r1_1 + (r2_1 << 1);
        *gptr<u16>(r1_1 + 0xa0u) = u16(r0_1);  // (from the original)
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_002f86f0
GUEST_EXPORT(0x002f86f0, d_002f86f0::f_002f86f0);

// f_002f8720: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f8720 {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)

u32 f_002f8720(u32 r0) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r0);  // (from the original)
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    call_002f8574(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    ea_1 = r13;
    r13 = r13 + 8;
    r0_1 = *gptr<u32>(ea_1);
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_002f8720
GUEST_EXPORT(0x002f8720, d_002f8720::f_002f8720);

// f_002f872c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f872c {

struct __attribute__((packed)) Object_002f872c_0 {
    u16 half_0;
    u16 half_2;
    u16 half_4;
};
GUEST_OFFSET(Object_002f872c_0, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002f872c_0, half_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_002f872c_0, half_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)

u32 f_002f872c(gptr<Object_002f872c_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 res_1 = 0;
    u32 ea_3 = 0;
    u32 r7_1 = 0;
    u32 res_2 = 0;
    u32 res_3 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 r2_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 res_4 = 0;
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r5 = r0;
    r6 = 0u;
    r8 = 1u;
    r0_1 = u32(arg0->half_0);
    arg0->half_2 = u16(r1);
    arg0->half_4 = u16(r8);
    if ((r0_1 & 0xffu) == 1u) {  // (from the original)
        r0_2 = 0x94d86cu;  // (from the original)
    } else {
        r0_2 = 0x94d7b0u;  // (from the original)
    }
    r4 = *gptr<u32>(r0_2 + (r1 << 2));
    if (r1 >= 0x2fu) {  // (from the original)
        goto L_2f881c;
    }
    if (r4 == 0) {
        goto L_2f881c;
    }
    r9 = u32(*gptr<u8>(r4));
    r0 = 0u;
    r2 = r9 - 1u;
    if (r2 == 0 || r2 >> 0x1f != (r2 & (r2 ^ r2)) >> 0x1f) {  // (from the original)
        goto L_2f87bc;
    }
    ea_1 = r4 + 4u;
    r3 = 0u;
    r1 = *gptr<u32>(ea_1) - 1u;
    if ((r9 & 1u) == 0) {
        ea_2 = r1 + 2u;
        r1 = ea_2;
        r0 = u32(*gptr<u8>(ea_2));
    }
    res_1 = u32(s32(r2) >> 1);
    r2 = res_1;
    r12 = u32(*gptr<u8>(r1 + 2u));
    if (res_1 == 0) {
        goto L_2f87b8;
    }
    do {
L_2f87a0:;
        ea_3 = r1 + 4u;
        r1 = ea_3;
        r7_1 = u32(*gptr<u8>(ea_3));
        r0 = r0 + r12;
        r12 = u32(*gptr<u8>(r1 + 2u));
        res_2 = r2 - 1u;
        r2 = res_2;
        r3 = r3 + r7_1;
        guest::preempt();
    } while (res_2 != 0);
L_2f87b8:;
    r0 = r0 + r3;
L_2f87bc:;
    res_3 = r9 - 1u;
    r1_1 = res_3;
    if (!(res_3 >> 0x1f)) {  // (from the original)
        r2 = *gptr<u32>(r4 + 4u);
        r1_1 = u32(*gptr<u8>(r2 + (r8 + (r1_1 << 1))));
        r0 = r0 + r1_1;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_002ff6f8(r0, r1_1, r2, r3);
    r12 = guest::cpu()->r[12];
    r3 = u32(*gptr<u8>(r4));
    r1 = r0_3;
    r0 = 0u;
    nf_1 = r3 >> 0x1f;  // (from the original)
    zf_1 = r3 == 0;
    if (!zf_1 && nf_1 == 0u) {
        r12 = *gptr<u32>(r4 + 4u);
    }
    if (zf_1 || nf_1 != 0u) {
        goto L_2f8820;
    }
L_2f87f4:;
    *gptr<u16>(r13) = u16(u32(*gptr<u16>(r12 + (r0 << 1))));
    r2_1 = u32(*gptr<u8>(r13 + 1u));
    if (s32(r1) >= s32(r2_1)) {
        goto L_2f882c;
    }
    r0_4 = u32(*gptr<u8>(r13));
    *gptr<u16>(r5 + 2u) = u16(r0_4);
    if (r0_4 != 0) {
        goto L_2f8820;
    }
L_2f881c:;
    *gptr<u16>(r5 + 4u) = u16(r6);
L_2f8820:;
    r0_5 = u32(*gptr<u16>(r5 + 4u)) & 0xffu;  // (from the original)
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_5;
L_2f882c:;
    r0 = r0 + 1u;
    res_4 = r0 - r3;
    r1 = r1 - r2_1;
    if (res_4 >> 0x1f != ((r0 ^ r3) & (r0 ^ res_4)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_2f87f4;
    }
    guest::preempt();
    goto L_2f8820;
}

}  // namespace d_002f872c
GUEST_EXPORT(0x002f872c, d_002f872c::f_002f872c);

// f_002f8848: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f8848 {

inline constexpr guest::Function<0x00100dc5, u32(u32, u32, u32, u32)> call_00100dc4;  // (from the original)

u32 f_002f8848(u32 r0) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    if (r0 > 0x7fu) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0_1 = call_00100dc4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return r0_1;
}

}  // namespace d_002f8848
GUEST_EXPORT(0x002f8849, d_002f8848::f_002f8848);

// f_002f8b78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f8b78 {

struct __attribute__((packed)) Object_002f8b78_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_002f8b78_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002f8b78_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002f8b78_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_002f8b78_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_002f8b78_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002f8b78_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002f8b78_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00150d2c, u32(u32, u32, u32, u32)> call_00150d2c;  // (from the original)
inline constexpr guest::Function<0x001510d0, u32(u32, u32, u32, u32)> call_001510d0;  // (from the original)

u32 f_002f8b78(gptr<Object_002f8b78_0> arg0, gptr<Object_002f8b78_1> arg1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r3_1 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 nf_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 ea_3 = 0;
    u32 r4_2 = 0;
    u32 r5_2 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 ea_4 = 0;
    u32 r11_1 = 0;
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r6);
    *gptr<u32>(ea_1 + 4) = u32(r7);
    *gptr<u32>(ea_1 + 8) = u32(r11);
    *gptr<u32>(ea_1 + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    ea_2 = r13 - 8;
    *gptr<u32>(ea_2) = u32(r4);
    *gptr<u32>(ea_2 + 4) = u32(r5);
    r13 = r13 - 8;
    r3_1 = arg1->word_0;
    r4_1 = arg1->word_4;
    r5_1 = arg1->word_8;
    r0_1 = arg0->word_0;
    r1_1 = arg0->word_4;
    r2_1 = arg0->word_8;
    nf_1 = (r1_1 & ~(r0_1 << 1)) >> 0x1f;  // (from the original)
    if (nf_1) {
        nf_1 = (r4_1 & ~(r3_1 << 1)) >> 0x1f;  // (from the original)
    }
    if (nf_1) {
        guest::cpu()->r[13] = r13;
        r0_2 = call_00150d2c(r0_1, r1_1, r2_1, r3_1);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_1 = call_001510d0(r0_2, r1_2, r2_2, r3_2);
        r1_1 = guest::cpu()->r[1];
    }
    ea_3 = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4_2 = *gptr<u32>(ea_3);
    r5_2 = *gptr<u32>(ea_3 + 4);
    r6_1 = *gptr<u32>(ea_3 + 8);
    r7_1 = *gptr<u32>(ea_3 + 0xc);  // (from the original)
    ea_4 = r13;
    r13 = r13 + 8;
    r11_1 = *gptr<u32>(ea_4);
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[11] = r11_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_002f8b78
GUEST_EXPORT(0x002f8b78, d_002f8b78::f_002f8b78);

// f_002f8ba8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f8ba8 {

struct __attribute__((packed)) Object_002f8ba8_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_002f8ba8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002f8ba8_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002f8ba8_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_002f8ba8_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_002f8ba8_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002f8ba8_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002f8ba8_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x001510d0, u32(u32, u32, u32, u32)> call_001510d0;  // (from the original)
inline constexpr guest::Function<0x0015120c, u32(u32, u32, u32, u32)> call_0015120c;  // (from the original)

u32 f_002f8ba8(gptr<Object_002f8ba8_0> arg0, gptr<Object_002f8ba8_1> arg1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r3_1 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 zf_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 ea_3 = 0;
    u32 r4_2 = 0;
    u32 r5_2 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 ea_4 = 0;
    u32 r11_1 = 0;
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r6);
    *gptr<u32>(ea_1 + 4) = u32(r7);
    *gptr<u32>(ea_1 + 8) = u32(r11);
    *gptr<u32>(ea_1 + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    ea_2 = r13 - 8;
    *gptr<u32>(ea_2) = u32(r4);
    *gptr<u32>(ea_2 + 4) = u32(r5);
    r13 = r13 - 8;
    r3_1 = arg1->word_0;
    r4_1 = arg1->word_4;
    r5_1 = arg1->word_8;
    r0_1 = arg0->word_0;
    r1_1 = arg0->word_4;
    r2_1 = arg0->word_8;
    zf_1 = (r0_1 & 0x40000000u) == 0;  // (from the original)
    if (zf_1) {
        zf_1 = (r3_1 & 0x40000000u) == 0;  // (from the original)
    }
    if (zf_1) {
        guest::cpu()->r[13] = r13;
        r0_2 = call_0015120c(r0_1, r1_1, r2_1, r3_1);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_1 = call_001510d0(r0_2, r1_2, r2_2, r3_2);
        r1_1 = guest::cpu()->r[1];
    }
    ea_3 = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4_2 = *gptr<u32>(ea_3);
    r5_2 = *gptr<u32>(ea_3 + 4);
    r6_1 = *gptr<u32>(ea_3 + 8);
    r7_1 = *gptr<u32>(ea_3 + 0xc);  // (from the original)
    ea_4 = r13;
    r13 = r13 + 8;
    r11_1 = *gptr<u32>(ea_4);
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[11] = r11_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_002f8ba8
GUEST_EXPORT(0x002f8ba8, d_002f8ba8::f_002f8ba8);

// f_002f8bd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f8bd8 {


u32 f_002f8bd8(u32 r0, u32 r1) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 res_1 = 0;
    u32 r0_2 = 0;
    ea_1 = r13 - 8;
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    r13 = r13 - 8;
    r1_1 = *gptr<u32>(r13 + 4u) << 1;
    r0_1 = *gptr<u32>(r13);
    r13 = r13 + 8u;
    res_1 = r0_1 | r1_1 << 0xb;  // (from the original)
    r0_2 = res_1;
    if (res_1 != 0) {
        r0_2 = 4u;
    }
    if (r1_1 >> 0x15 != 0) {  // (from the original)
        r0_2 = r0_2 | 1u;
    }
    if (0x7ffu == r1_1 >> 0x15) {  // (from the original)
        r0_2 = r0_2 | 2u;
    }
    if (r0_2 == 1u) {
        r0_2 = 5u;
    }
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_002f8bd8
GUEST_EXPORT(0x002f8bd8, d_002f8bd8::f_002f8bd8);

// f_002f915c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f915c {

inline constexpr guest::Function<0x0022c53c, u32(u32, u32, u32, u32)> call_0022c53c;  // (from the original)

u32 f_002f915c(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_0022c53c(r0, r1, r2, guest::cpu()->r[3]);
    *gptr<u32>(r0_1) = u32(0x8f4008u);  // (from the original)
    *gptr<u32>(r0_1 + 0xcu) = u32(0x8f4008u + 0x10u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0x8f4008u;  // (from the original)
    return r0_1;
}

}  // namespace d_002f915c
GUEST_EXPORT(0x002f915c, d_002f915c::f_002f915c);

// f_002f93bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f93bc {

inline guest::global<u32, 0x00950148> global_00950148;  // (from the original)
inline guest::global<u32, 0x0095385c> global_0095385c;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x005c6f7c, u32(u32, u32, u32, u32)> call_005c6f7c;  // (from the original)
inline constexpr guest::Function<0x0069a91c, u32(u32, u32, u32, u32)> call_0069a91c;  // (from the original)
inline constexpr guest::Function<0x007d0d5c, u32(u32, u32, u32, u32)> call_007d0d5c;  // (from the original)

u32 f_002f93bc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r3_2 = 0;
    u32 r2_2 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r4_1 = *global_0095385c;
    guest::cpu()->r[13] = r13;
    call_005c6f7c(0x95385cu, r1, r2, r3);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u8>(r13) = u8(0u);
    *gptr<u8>(r13 + 1u) = u8(0u);
    *gptr<u8>(r13 + 2u) = u8(0u);
    r0_1 = *global_00950148;
    if (r0_1 != 0) {
        guest::cpu()->r[13] = r13;
        call_0069a91c(r0_1, r0, r2_1, r3_1);
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
    }
    r1_1 = r0 & 0xf0u;  // (from the original)
    *gptr<u8>(r13) = u8(u32(*gptr<u8>(r13)) & ~0xfu | 3u);  // (from the original)
    *gptr<u8>(r13 + 1u) = u8(u32(*gptr<u8>(r13 + 1u)) & ~0xf0u | r0 << 4);  // (from the original)
    r0_2 = u32(*gptr<u8>(r13 + 2u)) & ~0xfu | r1_1 >> 4;  // (from the original)
    *gptr<u8>(r13 + 2u) = u8(r0_2);
    guest::cpu()->r[13] = r13;
    r0_3 = call_00305f44(r0_2, r1_1, r2_1, r3_1);
    r3_2 = guest::cpu()->r[3];
    r2_2 = r0_3 & 7u;
    *gptr<u8>(r13 + 2u) = u8(u32(*gptr<u8>(r13 + 2u)) & ~0x70u | r2_2 << 4);  // (from the original)
    *gptr<u8>(r4_1 + 0x10u) = u8(0u);  // (from the original)
    *gptr<u8>(r4_1 + 0x11u) = u8(0u);  // (from the original)
    *gptr<u8>(r4_1 + 0x12u) = u8(4u);  // (from the original)
    *gptr<u8>(r4_1 + 0x13u) = u8(0x3fu);  // (from the original)
    r1_2 = r13;
    *gptr<u32>(r4_1 + 0x14u) = u32(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_007d0d5c(4u, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_4;
}

}  // namespace d_002f93bc
GUEST_EXPORT(0x002f93bc, d_002f93bc::f_002f93bc);

// f_002f9888: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f9888 {


u32 f_002f9888(u32 r0, u32 r1) {
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    if (r0 < 0x3au) {  // (from the original)
        r0 = r0 - 0x30u;  // (from the original)
    }
    r2_1 = r0 & ~0x20u;  // (from the original)
    if (r2_1 >= 0x41u) {  // (from the original)
        r0 = r2_1 - 0x37u;  // (from the original)
    }
    if (r0 < r1) {
        return r0;
    }
    r0_1 = ~0u;
    return r0_1;
}

}  // namespace d_002f9888
GUEST_EXPORT(0x002f9889, d_002f9888::f_002f9888);

// f_002f98a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f98a8 {

inline guest::global<u16, 0x0088f298> global_0088f298;  // (from the original)
inline constexpr guest::Function<0x002c2078, u32(u32, u32, u32, u32)> call_002c2078;  // (from the original)
inline constexpr guest::Function<0x002fe450, u32(u32, u32, u32, u32)> call_002fe450;  // (from the original)
inline constexpr guest::Function<0x0051d2e4, u32(u32, u32, u32, u32)> call_0051d2e4;  // (from the original)
inline constexpr guest::Function<0x0051d90c, u32(u32, u32, u32, u32)> call_0051d90c;  // (from the original)

u32 f_002f98a8(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 r0_3 = 0;
    u32 r2_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    call_002c2078(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r6 = 0u;
    r4 = r6;
    *gptr<u32>(r5 + 0x68u) = u32(r6);  // (from the original)
    do {
L_2f98c0:;
        r0_1 = r4 & 0xffu;  // (from the original)
        r0_2 = call_0051d2e4(r0_1, 1u, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r1_1 = r5 + (r4 << 1);
        r4 = r4 + 1u;
        res_1 = r4 - 0xbu;  // (from the original)
        *gptr<u16>(r1_1 + 0x6cu) = u16(r0_2);  // (from the original)
        guest::preempt();
    } while (res_1 >> 0x1f != ((r4 ^ 0xbu) & (r4 ^ res_1)) >> 0x1f);  // (from the original)
    r0_3 = call_0051d90c(1u, 1u, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    *gptr<u8>(r5 + 0x82u) = u8(r0_3);  // (from the original)
    r0_4 = call_0051d90c(0u, 1u, r2_1, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r4 = 0u;
    *gptr<u8>(r5 + 0x83u) = u8(r0_4);  // (from the original)
    do {
L_2f9904:;
        r0_5 = call_002fe450(r4, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (!(r0_5 == 0)) {
            r2 = u32(*gptr<u8>(r0_5 + 0x4eu));  // (from the original)
            r1 = r5 + r4;
            *gptr<u8>(r1 + 0x84u) = u8(r2);  // (from the original)
            *gptr<u8>(r1 + 0x8eu) = u8(u32(*gptr<u8>(r0_5 + 0x4fu)));  // (from the original)
        } else {
            r0_6 = r5 + r4;
            *gptr<u8>(r0_6 + 0x84u) = u8(r6);  // (from the original)
            *gptr<u8>(r0_6 + 0x8eu) = u8(r6);  // (from the original)
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(0xau));  // (from the original)
    *gptr<u16>(r5 + 0x98u) = u16(r6);  // (from the original)
    *gptr<u8>(r5 + 0x9bu) = u8(0xffu);  // (from the original)
    *gptr<u8>(r5 + 0x9cu) = u8(r6);  // (from the original)
    *gptr<u8>(r5 + 0x9eu) = u8(r6);  // (from the original)
    *gptr<u8>(r5 + 0x9fu) = u8(r6);  // (from the original)
    *gptr<u16>(r5 + 0xa0u) = u16(u32(*global_0088f298));  // (from the original)
    *gptr<u16>(r5 + 0xa2u) = u16(u32(*global_0088f298));  // (from the original)
    r1_2 = u32(*global_0088f298);
    *gptr<u16>(r5 + 0xa4u) = u16(r1_2);  // (from the original)
    *gptr<u16>(r5 + 0xa6u) = u16(u32(*global_0088f298));  // (from the original)
    *gptr<u16>(r5 + 0xa8u) = u16(0x7ffeu);  // (from the original)
    *gptr<u8>(r5 + 0x64u) = u8(r6);  // (from the original)
    *gptr<u8>(r5 + 0x65u) = u8(r6);  // (from the original)
    *gptr<u8>(r5 + 0xaau) = u8(r6);  // (from the original)
    *gptr<u8>(r5 + 0xacu) = u8(r6);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return 0x7ffeu;  // (from the original)
}

}  // namespace d_002f98a8
GUEST_EXPORT(0x002f98a8, d_002f98a8::f_002f98a8);

// f_002f99b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f99b8 {

struct __attribute__((packed)) Object_002f99b8_0 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_002f99b8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002f99b8_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_002f99b8_0, word_c, 0xc);  // (from the original)


void f_002f99b8(gptr<Object_002f99b8_0> arg0) {
    arg0->word_c = u32((arg0->word_c | 0x80u) & ~(0x80u << 0xe));  // (from the original)
    arg0->word_8 = u32(0u);
    arg0->word_0 = u32(0u);
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_002f99b8
GUEST_EXPORT(0x002f99b9, d_002f99b8::f_002f99b8);

// f_002f99cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f99cc {

struct __attribute__((packed)) Object_002f99cc_2 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 unknown_10[0x4];  // (not used here)
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Object_002f99cc_2, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002f99cc_2, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_002f99cc_2, word_18, 0x18);  // (from the original)

inline constexpr guest::Function<0x002f99b9, u32(u32, u32, u32, u32)> call_002f99b8;  // (from the original)
inline constexpr guest::Function<0x003fd604, u32(u32, u32, u32, u32)> call_003fd604;  // (from the original)
inline constexpr guest::Function<0x003fd608, u32(u32, u32, u32, u32)> call_003fd608;  // (from the original)

u32 f_002f99cc(u32 r0, u32 r1, gptr<Object_002f99cc_2> arg2, u32 r3) {
    u32 r2 = arg2.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r5_1 = 0;
    u32 r7_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_3 = 0;
    u32 r0_2 = 0;
    u32 r1_4 = 0;
    ea_1 = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    r13 = ea_1;
    r5_1 = arg2->word_c;
    r7_1 = arg2->word_14;
    if ((r5_1 & 0x20010u) != 0) {  // (from the original)
        r1_1 = arg2->word_18;
        guest::cpu()->r[13] = r13;
        r0_1 = call_003fd604(r7_1, r1_1, r2, r3);
        r1_2 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        if (r0_1 >> 0x1f != (r0_1 & (r0_1 ^ r0_1)) >> 0x1f) {  // (from the original)
            goto L_2f9a0c;
        }
        r5_1 = r5_1 & ~0x20010u;  // (from the original)
        *gptr<u32>(r2 + 0xcu) = u32(r5_1);  // (from the original)
    }
    r1_3 = *gptr<u32>(r13);
    guest::cpu()->r[13] = r13;
    r0_2 = call_003fd608(r7_1, r1_3, r1, r5_1);
    r3_1 = guest::cpu()->r[3];
    r2_1 = r1 - (r0_2 << 1 >> 1);
    r1_2 = *gptr<u32>(r2 + 0x18u) + r2_1;  // (from the original)
    *gptr<u32>(r2 + 0x18u) = u32(r1_2);  // (from the original)
    if (r0_2 == 0) {
        goto L_2f9a16;
    }
L_2f9a0c:;
    guest::cpu()->r[13] = r13;
    call_002f99b8(r2, r1_2, r2_1, r3_1);
    r0_2 = ~0u;
L_2f9a16:;
    r1_4 = *gptr<u32>(r13);
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_002f99cc
GUEST_EXPORT(0x002f99cd, d_002f99cc::f_002f99cc);

// f_002f9a18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f9a18 {

struct __attribute__((packed)) Object_002f9a18_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x8];  // (not used here)
    u32 word_10;
    u8 unknown_14[0x18];  // (not used here)
    u32 word_2c;
};
GUEST_OFFSET(Object_002f9a18_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002f9a18_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_002f9a18_0, word_2c, 0x2c);  // (from the original)

inline constexpr guest::Function<0x002f99cd, u32(u32, u32, u32, u32)> call_002f99cc;  // (from the original)

u32 f_002f9a18(gptr<Object_002f9a18_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 res_1 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r0_2 = 0;
    u32 r1_5 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5_1 = arg0->word_10;
    r0_1 = arg0->word_2c;
    r1_1 = arg0->word_4;
    if (r0_1 <= r1_1) {
        r0_1 = r1_1;
    }
    r1_2 = *gptr<u32>(r0 + 0xcu) & ~(5u << 0x13);  // (from the original)
    *gptr<u32>(r0 + 0xcu) = u32(r1_2);  // (from the original)
    res_1 = r1_2 << 0xf;  // (from the original)
    r1_3 = res_1;
    if (!(res_1 >> 0x1f)) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        return 0u;
    }
    if (r0_1 == r5_1) {
        goto L_2f9a4e;
    }
    r1_4 = r0_1 - r5_1;
    r0_2 = call_002f99cc(r5_1, r1_4, r0, guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        goto L_2f9a4e;
    }
    r0_3 = ~0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    return r0_3;
L_2f9a4e:;
    *gptr<u32>(r0 + 0x2cu) = u32(r5_1);  // (from the original)
    *gptr<u32>(r0 + 4u) = u32(r5_1);
    *gptr<u32>(r0 + 8u) = u32(0u);
    r1_3 = 1u << 0x10;  // (from the original)
    *gptr<u32>(r0 + 0xcu) = u32(*gptr<u32>(r0 + 0xcu) & ~r1_3);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return 0u;
}

}  // namespace d_002f9a18
GUEST_EXPORT(0x002f9a19, d_002f9a18::f_002f9a18);

// f_002f9a64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f9a64 {

struct __attribute__((packed)) Object_002f9a64_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 unknown_10[0x8];  // (not used here)
    u32 word_18;
    u8 unknown_1c[0xc];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(Object_002f9a64_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002f9a64_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_002f9a64_0, word_28, 0x28);  // (from the original)

inline constexpr guest::Function<0x002f9a19, u32(u32, u32, u32, u32)> call_002f9a18;  // (from the original)

u32 f_002f9a64(gptr<Object_002f9a64_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_c = u32(arg0->word_c & ~0x20u);  // (from the original)
    r1_1 = arg0->word_28;
    if (arg0->word_18 != r1_1) {
        call_002f9a18(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        *gptr<u32>(r0 + 0xcu) = u32(*gptr<u32>(r0 + 0xcu) & ~(3u << 0xc) | 0x10u);  // (from the original)
        *gptr<u32>(r0 + 0x18u) = u32(*gptr<u32>(r0 + 0x28u));  // (from the original)
        r0_1 = *gptr<u32>(r0 + 0x10u);  // (from the original)
        *gptr<u32>(r0 + 0x2cu) = u32(r0_1);  // (from the original)
        *gptr<u32>(r0 + 4u) = u32(r0_1);
    }
    r0_2 = *gptr<u32>(r0 + 0xcu) & 0xffffbfbfu;  // (from the original)
    *gptr<u32>(r0 + 0xcu) = u32(r0_2);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0xffffbfbfu;  // (from the original)
    return r0_2;
}

}  // namespace d_002f9a64
GUEST_EXPORT(0x002f9a65, d_002f9a64::f_002f9a64);

// f_002f9aa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f9aa8 {

struct __attribute__((packed)) Object_002f9aa8_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
    u8 byte_6;
    u8 byte_7;
    u8 byte_8;
    u8 byte_9;
    u8 unknown_a[0x2a];  // (not used here)
    u8 byte_34;
    u8 byte_35;
    u8 byte_36;
    u8 byte_37;
    u8 byte_38;
    u8 byte_39;
    u8 byte_3a;
    u8 byte_3b;
};
GUEST_OFFSET(Object_002f9aa8_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002f9aa8_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_002f9aa8_0, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_002f9aa8_0, byte_3, 0x3);  // (from the original)
GUEST_OFFSET(Object_002f9aa8_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002f9aa8_0, byte_5, 0x5);  // (from the original)
GUEST_OFFSET(Object_002f9aa8_0, byte_6, 0x6);  // (from the original)
GUEST_OFFSET(Object_002f9aa8_0, byte_7, 0x7);  // (from the original)
GUEST_OFFSET(Object_002f9aa8_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_002f9aa8_0, byte_9, 0x9);  // (from the original)
GUEST_OFFSET(Object_002f9aa8_0, byte_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_002f9aa8_0, byte_35, 0x35);  // (from the original)
GUEST_OFFSET(Object_002f9aa8_0, byte_36, 0x36);  // (from the original)
GUEST_OFFSET(Object_002f9aa8_0, byte_37, 0x37);  // (from the original)
GUEST_OFFSET(Object_002f9aa8_0, byte_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_002f9aa8_0, byte_39, 0x39);  // (from the original)
GUEST_OFFSET(Object_002f9aa8_0, byte_3a, 0x3a);  // (from the original)
GUEST_OFFSET(Object_002f9aa8_0, byte_3b, 0x3b);  // (from the original)

inline guest::global<u16, 0x0088f298> global_0088f298;  // (from the original)
inline constexpr guest::Function<0x002e6a3c, u32(u32, u32, u32, u32)> call_002e6a3c;  // (from the original)

u32 f_002f9aa8(gptr<Object_002f9aa8_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->byte_0 = u8(0u);
    arg0->byte_1 = u8(0u);
    arg0->byte_2 = u8(0u);
    arg0->byte_3 = u8(0u);
    arg0->byte_4 = u8(0u);
    arg0->byte_5 = u8(0u);
    arg0->byte_6 = u8(0u);
    arg0->byte_7 = u8(0u);
    arg0->byte_8 = u8(0u);
    arg0->byte_9 = u8(0u);
    arg0->byte_34 = u8(0u);
    arg0->byte_35 = u8(0u);
    arg0->byte_36 = u8(0u);
    arg0->byte_37 = u8(0u);
    arg0->byte_38 = u8(0u);
    arg0->byte_39 = u8(0u);
    arg0->byte_3a = u8(0u);
    arg0->byte_3b = u8(0u);
    r0_1 = r0 + 0x3cu;  // (from the original)
    r0_2 = call_002e6a3c(r0_1, r1, r2, guest::cpu()->r[3]);
    r0_3 = r0_2 - 0x3cu;  // (from the original)
    *gptr<u32>(r0_3 + 0x68u) = u32(0u);  // (from the original)
    *gptr<u16>(r0_3 + 0x98u) = u16(0u);  // (from the original)
    *gptr<u8>(r0_3 + 0x9au) = u8(0xffu);  // (from the original)
    *gptr<u8>(r0_3 + 0x9bu) = u8(0xffu);  // (from the original)
    *gptr<u8>(r0_3 + 0x9cu) = u8(0u);  // (from the original)
    *gptr<u8>(r0_3 + 0x9du) = u8(0u);  // (from the original)
    *gptr<u8>(r0_3 + 0x9eu) = u8(0u);  // (from the original)
    *gptr<u8>(r0_3 + 0x9fu) = u8(0u);  // (from the original)
    *gptr<u8>(r0_3 + 0xaau) = u8(0u);  // (from the original)
    *gptr<u8>(r0_3 + 0xabu) = u8(0u);  // (from the original)
    *gptr<u8>(r0_3 + 0xacu) = u8(0u);  // (from the original)
    *gptr<u16>(r0_3 + 0xaeu) = u16(0u);  // (from the original)
    *gptr<u16>(r0_3 + 0xb0u) = u16(0u);  // (from the original)
    *gptr<u8>(r0_3 + 0xb2u) = u8(0u);  // (from the original)
    *gptr<u16>(r0_3 + 0xa0u) = u16(u32(*global_0088f298));  // (from the original)
    *gptr<u16>(r0_3 + 0xa2u) = u16(u32(*global_0088f298));  // (from the original)
    *gptr<u16>(r0_3 + 0xa4u) = u16(u32(*global_0088f298));  // (from the original)
    *gptr<u16>(r0_3 + 0xa6u) = u16(u32(*global_0088f298));  // (from the original)
    *gptr<u16>(r0_3 + 0xa8u) = u16(0x7ffeu);  // (from the original)
    *gptr<u8>(r0_3 + 0x64u) = u8(0u);  // (from the original)
    *gptr<u8>(r0_3 + 0x65u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0x7ffeu;  // (from the original)
    return r0_3;
}

}  // namespace d_002f9aa8
GUEST_EXPORT(0x002f9aa8, d_002f9aa8::f_002f9aa8);

// f_002fa47c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fa47c {

struct __attribute__((packed)) Object_002fa47c_0 {
    u8 unknown_0[0x79];  // (not used here)
    u8 byte_79;
    u8 unknown_7a[0x6];  // (not used here)
    u32 word_80;
    u8 unknown_84[0x44];  // (not used here)
    u32 word_c8;
    u32 word_cc;
    u32 word_d0;
    u32 word_d4;
    u32 word_d8;
    u32 word_dc;
    u32 word_e0;
    u32 word_e4;
    u32 word_e8;
    u32 word_ec;
    u32 word_f0;
    u32 word_f4;
    u32 word_f8;
    u32 word_fc;
};
GUEST_OFFSET(Object_002fa47c_0, byte_79, 0x79);  // (from the original)
GUEST_OFFSET(Object_002fa47c_0, word_80, 0x80);  // (from the original)
GUEST_OFFSET(Object_002fa47c_0, word_c8, 0xc8);  // (from the original)
GUEST_OFFSET(Object_002fa47c_0, word_cc, 0xcc);  // (from the original)
GUEST_OFFSET(Object_002fa47c_0, word_d0, 0xd0);  // (from the original)
GUEST_OFFSET(Object_002fa47c_0, word_d4, 0xd4);  // (from the original)
GUEST_OFFSET(Object_002fa47c_0, word_d8, 0xd8);  // (from the original)
GUEST_OFFSET(Object_002fa47c_0, word_dc, 0xdc);  // (from the original)
GUEST_OFFSET(Object_002fa47c_0, word_e0, 0xe0);  // (from the original)
GUEST_OFFSET(Object_002fa47c_0, word_e4, 0xe4);  // (from the original)
GUEST_OFFSET(Object_002fa47c_0, word_e8, 0xe8);  // (from the original)
GUEST_OFFSET(Object_002fa47c_0, word_ec, 0xec);  // (from the original)
GUEST_OFFSET(Object_002fa47c_0, word_f0, 0xf0);  // (from the original)
GUEST_OFFSET(Object_002fa47c_0, word_f4, 0xf4);  // (from the original)
GUEST_OFFSET(Object_002fa47c_0, word_f8, 0xf8);  // (from the original)
GUEST_OFFSET(Object_002fa47c_0, word_fc, 0xfc);  // (from the original)

inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)

u32 f_002fa47c(gptr<Object_002fa47c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    *gptr<u8>(arg0->word_80) = u8(u32(*global_008c9f1c));
    r0_1 = ~0u;
    arg0->byte_79 = u8(0u);
    arg0->word_c8 = u32(r0_1);
    arg0->word_cc = u32(r0_1);
    arg0->word_d0 = u32(r0_1);
    arg0->word_e4 = u32(r0_1);
    arg0->word_e0 = u32(r0_1);
    arg0->word_dc = u32(r0_1);
    arg0->word_d8 = u32(r0_1);
    arg0->word_d4 = u32(r0_1);
    arg0->word_e8 = u32(0u);
    arg0->word_f0 = u32(r0_1);
    arg0->word_f4 = u32(r0_1);
    arg0->word_f8 = u32(r0_1);
    arg0->word_fc = u32(r0_1);
    arg0->word_ec = u32(r0_1);
    r0_2 = r0 + 0x100u;  // (from the original)
    r0_3 = call_002fc8e8(r0_2, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    *gptr<u32>(r0 + 0x104u) = u32(0u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_3;
}

}  // namespace d_002fa47c
GUEST_EXPORT(0x002fa47c, d_002fa47c::f_002fa47c);

// f_002fa5b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fa5b0 {


u32 f_002fa5b0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4_1 = 0;
    u32 cf_1 = 0;
    guest::cpu()->r[13] -= 8u;
    goto L_2fa5c8;
L_2fa5b4:;
    r4_1 = *gptr<u16>(r0);
    r0 = r0 + 2u;
    if (r4_1 != r3) {
        goto L_2fa5c8;
    }
    if (r2 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return 0u;
L_2fa5c8:;
    cf_1 = r1 >= 1u;
    r1 = r1 - 1u;
    if (cf_1) {
        guest::preempt();
        goto L_2fa5b4;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r2;
}

}  // namespace d_002fa5b0
GUEST_EXPORT(0x002fa5b1, d_002fa5b0::f_002fa5b0);

// f_002fac78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fac78 {

struct __attribute__((packed)) Object_002fac78_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_002fac78_0, byte_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002f91d4, u32(u32, u32, u32, u32)> call_002f91d4;  // (from the original)

u32 f_002fac78(gptr<Object_002fac78_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r2_1 = 0;
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 res_2 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 vf_1 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r0_9 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r6 = r0;
    r2_1 = u32(0) - r1;
    res_1 = r1 & ~r2_1;
    if (res_1 == 0) {
        goto L_2faca4;
    }
    r4 = r6 + 1u;
    r5 = 0u;
    arg0->byte_0 = u8(0x2au);  // (from the original)
    r0_1 = call_002f91d4(0x2au, r1, r2_1, r3);  // (from the original)
    r3 = r0_1;
L_2fac92:;
    r0 = 0u;
    r2 = *gptr<u32>(r3 + (r5 << 2));
L_2fac98:;
    r1_1 = r2 >> 0x1c;  // (from the original)
    r2 = r2 << 4;
    if (r1_1 <= 9u) {
        goto L_2facfc;
    }
    r1_2 = r1_1 + 0x57u;  // (from the original)
    goto L_2facfe;
L_2faca4:;
    res_2 = r1 - 4u;
    nf_1 = res_2 >> 0x1f;  // (from the original)
    zf_1 = res_2 == 0;
    vf_1 = ((r1 ^ 4u) & (r1 ^ res_2)) >> 0x1f;  // (from the original)
    if (zf_1) {
        goto L_2facd0;
    }
    if (!!zf_1 || nf_1 != vf_1) {
        if (r1 == 1u) {
            goto L_2facc0;
        }
        if (r1 != 2u) {
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1;
            return 0u;
        }
        goto L_2facc8;
    }
    if (r1 == 8u) {
        goto L_2facd8;
    }
    if (r1 == 0x10u) {  // (from the original)
        goto L_2face0;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
L_2facc0:;
    r0_2 = call_002f91d4(res_1, r1, r2_1, r3);
    r1_3 = guest::cpu()->r[1];
    r0_3 = *gptr<u32>(r0_2);
    goto L_2face6;
L_2facc8:;
    r0_4 = call_002f91d4(res_1, r1, r2_1, r3);
    r1_3 = guest::cpu()->r[1];
    r0_3 = *gptr<u32>(r0_4 + 4u);
    goto L_2face6;
L_2facd0:;
    r0_5 = call_002f91d4(res_1, r1, r2_1, r3);
    r1_3 = guest::cpu()->r[1];
    r0_3 = *gptr<u32>(r0_5 + 8u);
    goto L_2face6;
L_2facd8:;
    r0_6 = call_002f91d4(res_1, r1, r2_1, r3);
    r1_3 = guest::cpu()->r[1];
    r0_3 = *gptr<u32>(r0_6 + 0xcu);  // (from the original)
    goto L_2face6;
L_2face0:;
    r0_7 = call_002f91d4(res_1, r1, r2_1, r3);
    r1_3 = guest::cpu()->r[1];
    r0_3 = *gptr<u32>(r0_7 + 0x10u);  // (from the original)
L_2face6:;
    if (r0_3 != 0) {
        r0_8 = r0_3 >> 2 << 2;
        r1_4 = *gptr<u32>(r0_8 + 0xfffffffcu);  // (from the original)
        r0_9 = r1_4 + r0_8;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_4;
        return r0_9;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return 0x2fae10u;  // (from the original)
L_2facfc:;
    r1_2 = r1_1 + 0x30u;  // (from the original)
L_2facfe:;
    *gptr<u8>(r4) = u8(r1_2);
    r4 = r4 + 1u;
    r0 = r0 + 1u;
    if (s32(r0) < s32(8u)) {
        guest::preempt();
        goto L_2fac98;
    }
    r5 = r5 + 1u;
    if (s32(r5) < s32(5u)) {
        guest::preempt();
        goto L_2fac92;
    }
    *gptr<u8>(r4) = u8(0u);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r6;
}

}  // namespace d_002fac78
GUEST_EXPORT(0x002fac79, d_002fac78::f_002fac78);

// f_002fad7a: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fad7a {

inline constexpr guest::Function<0x0011d7ec, u32(u32, u32, u32, u32)> call_0011d7ec;  // (from the original)
inline constexpr guest::Function<0x00142104, u32(u32, u32, u32, u32)> call_00142104;  // (from the original)
inline constexpr guest::Function<0x002f91d4, u32(u32, u32, u32, u32)> call_002f91d4;  // (from the original)
inline constexpr guest::Function<0x002fac79, u32(u32, u32, u32, u32)> call_002fac78;  // (from the original)
inline constexpr guest::Function<0x003fdfd8, u32(u32, u32, u32, u32)> call_003fdfd8;  // (from the original)

u32 f_002fad7a(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r7_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    r5_1 = r2;
    if (r1 & 2u) {
        guest::cpu()->r[13] = r13;
        r0_1 = call_00142104(0x944434u, r2, r2, r3);  // (from the original)
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
        r0_2 = call_002f91d4(r0_1, r1_1, r2_1, r3_1);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r7_1 = r0_1 + 1u;
        *gptr<u32>(r0_2 + 4u) = u32(r7_1);
    }
    if ((r1 & 1u) != 0u) {
        guest::cpu()->r[13] = r13;
        r0_1 = call_003fdfd8(0x944434u, r5_1, r2, r3);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        if (r0_1 == 0) {
            r13 = r13 + 0x18;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->r[13] = r13;
            return r0_1;
        }
        guest::cpu()->r[13] = r13;
        r0_3 = call_002f91d4(r0_1, r1_1, r2_2, r3_2);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        *gptr<u32>(r0_3) = u32(r0_1);
    }
    if (r1 & 4u) {
        r1_1 = r5_1;
        r0_1 = 0x944434u;  // (from the original)
        if (r0_1 == 0) {
            r13 = r13 + 0x18;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->r[13] = r13;
            return r0_1;
        }
        guest::cpu()->r[13] = r13;
        r0_4 = call_002f91d4(r0_1, r1_1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        *gptr<u32>(r0_4 + 8u) = u32(r0_1);
    }
    if (r1 & 8u) {
        guest::cpu()->r[13] = r13;
        r0_1 = call_0011d7ec(0x944434u, r5_1, r2, r3);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        if (r0_1 == 0) {
            r13 = r13 + 0x18;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->r[13] = r13;
            return r0_1;
        }
        guest::cpu()->r[13] = r13;
        r0_5 = call_002f91d4(r0_1, r1_1, r2_3, r3_3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        *gptr<u32>(r0_5 + 0xcu) = u32(r0_1);  // (from the original)
    }
    if (r1 & 0x10u) {  // (from the original)
        r1_1 = r5_1;
        r0_1 = 0x944434u;  // (from the original)
        if (r0_1 == 0) {
            r13 = r13 + 0x18;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->r[13] = r13;
            return r0_1;
        }
        guest::cpu()->r[13] = r13;
        r0_6 = call_002f91d4(r0_1, r1_1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        *gptr<u32>(r0_6 + 0x10u) = u32(r0_1);  // (from the original)
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fac78(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_002fad7a
GUEST_EXPORT(0x002fad7b, d_002fad7a::f_002fad7a);

// f_002fae74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fae74 {

struct __attribute__((packed)) Object_002fae74_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_002fae74_0, word_0, 0x0);  // (from the original)


void f_002fae74(gptr<Object_002fae74_0> arg0) {
    arg0->word_0 = u32(0xaf7f3cu);  // (from the original)
    guest::cpu()->r[1] = 0xaf7f3cu;  // (from the original)
    return;
}

}  // namespace d_002fae74
GUEST_EXPORT(0x002fae75, d_002fae74::f_002fae74);

// f_002fb4d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fb4d8 {

inline constexpr guest::Function<0x001b21e0, u32(u32, u32, u32, u32)> call_001b21e0;  // (from the original)
inline constexpr guest::Function<0x001df350, u32(u32, u32, u32, u32)> call_001df350;  // (from the original)
inline constexpr guest::Function<0x002bf9cc, u32(u32, u32, u32, u32)> call_002bf9cc;  // (from the original)
inline constexpr guest::Function<0x002d49d8, u32(u32, u32, u32, u32)> call_002d49d8;  // (from the original)
inline constexpr guest::Function<0x002f777c, u32(u32, u32, u32, u32)> call_002f777c;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002faedd, u32(u32, u32, u32, u32)> call_002faedc;  // (from the original)
inline constexpr guest::Function<0x002fb7e8, u32(u32, u32, u32, u32)> call_002fb7e8;  // (from the original)
inline constexpr guest::Function<0x002fb918, u32(u32, u32, u32, u32)> call_002fb918;  // (from the original)
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> call_002fbd54;  // (from the original)
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x002fea95, u32(u32, u32, u32, u32)> call_002fea94;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x003fe3d4, u32(u32, u32, u32, u32)> call_003fe3d4;  // (from the original)
inline constexpr guest::Function<0x003fe3d8, u32(u32, u32, u32, u32)> call_003fe3d8;  // (from the original)
inline constexpr guest::Function<0x003fe3dc, u32(u32, u32, u32, u32)> call_003fe3dc;  // (from the original)
inline constexpr guest::Function<0x003fe3e0, u32(u32, u32, u32, u32)> call_003fe3e0;  // (from the original)
inline constexpr guest::Function<0x003fe3e4, u32(u32, u32, u32, u32)> call_003fe3e4;  // (from the original)
inline constexpr guest::Function<0x006ccd14, u32(u32, u32, u32, u32)> call_006ccd14;  // (from the original)
inline constexpr guest::Function<0x006ccf70, u32(u32, u32, u32, u32)> call_006ccf70;  // (from the original)

u32 f_002fb4d8(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_9 = 0;
    u32 r2_6 = 0;
    u32 r0_10 = 0;
    u32 r1_5 = 0;
    u32 r2_7 = 0;
    u32 r3_6 = 0;
    u32 r0_11 = 0;
    u32 r2_8 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_6 = 0;
    u32 r2_9 = 0;
    u32 r3_7 = 0;
    u32 r0_15 = 0;
    u32 r1_7 = 0;
    u32 r2_10 = 0;
    u32 r3_8 = 0;
    u32 r1_8 = 0;
    u32 r0_16 = 0;
    u32 r1_9 = 0;
    u32 r2_11 = 0;
    u32 r3_9 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r2_12 = 0;
    u32 r3_10 = 0;
    u32 r1_10 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r1_11 = 0;
    u32 r2_13 = 0;
    u32 r3_11 = 0;
    u32 r0_22 = 0;
    u32 r1_12 = 0;
    u32 r0_23 = 0;
    u32 r1_13 = 0;
    u32 r2_14 = 0;
    u32 r3_12 = 0;
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r0_27 = 0;
    u32 r0_28 = 0;
    u32 r1_14 = 0;
    u32 r2_15 = 0;
    u32 r3_13 = 0;
    u32 r0_29 = 0;
    u32 r0_30 = 0;
    u32 r1_15 = 0;
    u32 r0_31 = 0;
    u32 r0_32 = 0;
    u32 r0_33 = 0;
    u32 r0_34 = 0;
    u32 r1_16 = 0;
    u32 res_1 = 0;
    u32 r0_35 = 0;
    u32 r0_36 = 0;
    u32 r0_37 = 0;
    u32 r0_38 = 0;
    u32 r1_17 = 0;
    u32 r2_16 = 0;
    u32 r3_14 = 0;
    u32 r0_39 = 0;
    u32 r0_40 = 0;
    u32 r1_18 = 0;
    u32 r0_41 = 0;
    u32 r0_42 = 0;
    u32 r0_43 = 0;
    u32 r0_44 = 0;
    u32 r1_19 = 0;
    u32 res_2 = 0;
    u32 r0_45 = 0;
    u32 r0_46 = 0;
    u32 r1_20 = 0;
    u32 r2_17 = 0;
    u32 r3_15 = 0;
    u32 r0_47 = 0;
    u32 r1_21 = 0;
    u32 r2_18 = 0;
    u32 r0_48 = 0;
    u32 r0_49 = 0;
    u32 r1_22 = 0;
    r13 = r13 - 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002faedc(0x106141u, 0u, r2, r3);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_002fea94(0x106141u, 0u, r2_1, r3_1);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_1 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fcbb0(r0_1, 0x228du, r2_2, r3_2);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fae84(r0_2, r1_1, r2_3, r3_3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x18u) = u32(r0_3 + 0x20u);  // (from the original)
    r0 = 0u;
    *gptr<u32>(r13 + 0x20u) = u32(r0);  // (from the original)
L_2fb500:;
    r1_2 = uxtb(r0);
    r0_4 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_002fb7e8(r0_4, r1_2, r2, r3);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r5 = r0_5;
    r0_6 = r5 + 0x55a6u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_7 = call_002fbd54(r0_6, r1_3, r2_4, r3_4);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_7 == 0) {
        goto L_2fb604;
    }
    r4 = 0u;
    r7 = r5 + 0x6bd0u;  // (from the original)
    r6 = 1u;
    do {
L_2fb51e:;
        guest::cpu()->r[13] = r13;
        r0_8 = call_003fe3d4(r7, r4, 0u, r3);
        r1_4 = guest::cpu()->r[1];
        r2_5 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_9 = call_002fcb34(r0_8, r1_4, r2_5, r3_5);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0_9 != 0x39u)) {  // (from the original)
            r2_6 = r13 + 0x1cu;  // (from the original)
            *gptr<u32>(r13) = u32(r6);
            guest::cpu()->r[13] = r13;
            call_002bf9cc(r7, r4, r2_6, 0u);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0x10u);  // (from the original)
    r6 = r5 + 0x6f10u;  // (from the original)
    r4 = 0u;
    do {
L_2fb54a:;
        guest::cpu()->r[13] = r13;
        r0_10 = call_003fe3d8(r6, r4, r2, r3);
        r1_5 = guest::cpu()->r[1];
        r2_7 = guest::cpu()->r[2];
        r3_6 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_11 = call_002fcb34(r0_10, r1_5, r2_7, r3_6);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0_11 != 0x39u)) {  // (from the original)
            r2_8 = r13 + 0x1cu;  // (from the original)
            guest::cpu()->r[13] = r13;
            call_002d49d8(r6, r4, r2_8, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0x28u);  // (from the original)
    r0_12 = r5 + 0x92f0u;  // (from the original)
    r7 = 0u;
    r5 = r13 + 0x1cu;  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r0_12);  // (from the original)
L_2fb574:;
    r6 = 0u;
L_2fb576:;
    r4 = 0u;
    do {
L_2fb578:;
        r0_13 = *gptr<u32>(r13 + 0x10u);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_14 = call_003fe3dc(r0_13, r7, r6, r4);
        r1_6 = guest::cpu()->r[1];
        r2_9 = guest::cpu()->r[2];
        r3_7 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_15 = call_002fcb34(r0_14, r1_6, r2_9, r3_7);
        r1_7 = guest::cpu()->r[1];
        r2_10 = guest::cpu()->r[2];
        r3_8 = guest::cpu()->r[3];
        if (!(r0_15 != 0x39u)) {  // (from the original)
            r1_8 = *gptr<u32>(r13 + 0x10u);  // (from the original)
            r0_16 = r13 + 0x24u;  // (from the original)
            *gptr<u32>(r13 + 4u) = u32(r5);
            *gptr<u32>(r13) = u32(r4);
            guest::cpu()->r[13] = r13;
            call_006ccd14(r0_16, r1_8, r7, r6);
            r1_9 = guest::cpu()->r[1];
            r2_11 = guest::cpu()->r[2];
            r3_9 = guest::cpu()->r[3];
            r0_17 = r13 + 0x24u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0_15 = call_002f777c(r0_17, r1_9, r2_11, r3_9);
            r1_7 = guest::cpu()->r[1];
            r2_10 = guest::cpu()->r[2];
            r3_8 = guest::cpu()->r[3];
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0xau);  // (from the original)
    r6 = r6 + 1u;
    if (r6 < 6u) {
        guest::preempt();
        goto L_2fb576;
    }
    r7 = r7 + 1u;
    if (r7 < 3u) {
        guest::preempt();
        goto L_2fb574;
    }
    guest::cpu()->r[13] = r13;
    r0_18 = call_002fb918(r0_15, r1_7, r2_10, r3_8);
    r2_12 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r1_10 = uxtb(*gptr<u32>(r13 + 0x20u));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_19 = call_001df350(r0_18, r1_10, r2_12, r3_10);
    r7 = 0u;
    *gptr<u32>(r13 + 0x14u) = u32(r0_19);  // (from the original)
L_2fb5c4:;
    r6 = 0u;
L_2fb5c6:;
    r4 = 0u;
    do {
L_2fb5c8:;
        r0_20 = *gptr<u32>(r13 + 0x14u);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_21 = call_003fe3e0(r0_20, r7, r6, r4);
        r1_11 = guest::cpu()->r[1];
        r2_13 = guest::cpu()->r[2];
        r3_11 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_22 = call_002fcb34(r0_21, r1_11, r2_13, r3_11);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0_22 != 0x39u)) {  // (from the original)
            *gptr<u32>(r13) = u32(r4);
            r1_12 = *gptr<u32>(r13 + 0x14u);  // (from the original)
            r0_23 = r13 + 0x24u;  // (from the original)
            *gptr<u32>(r13 + 4u) = u32(r5);
            guest::cpu()->r[13] = r13;
            call_006ccf70(r0_23, r1_12, r7, r6);
            r1_13 = guest::cpu()->r[1];
            r2_14 = guest::cpu()->r[2];
            r3_12 = guest::cpu()->r[3];
            r0_24 = r13 + 0x24u;  // (from the original)
            guest::cpu()->r[13] = r13;
            call_002f777c(r0_24, r1_13, r2_14, r3_12);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0xau);  // (from the original)
    r6 = r6 + 1u;
    if (r6 < 9u) {
        guest::preempt();
        goto L_2fb5c6;
    }
    r7 = r7 + 1u;
    if (r7 < 4u) {
        guest::preempt();
        goto L_2fb5c4;
    }
L_2fb604:;
    r0 = *gptr<u32>(r13 + 0x20u) + 1u;  // (from the original)
    *gptr<u32>(r13 + 0x20u) = u32(r0);  // (from the original)
    if (r0 < 4u) {
        guest::preempt();
        goto L_2fb500;
    }
    r0 = 2u;
    r5 = 0u;
    r6 = 1u;
    *gptr<u32>(r13 + 0x10u) = u32(r0);  // (from the original)
L_2fb618:;
    r0_25 = uxtb(r0);
    guest::cpu()->r[13] = r13;
    r0_26 = call_002fe7cc(r0_25, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0xcu) = u32(r0_26);  // (from the original)
    if (r0_26 == 0) {
        goto L_2fb680;
    }
    r7 = 0u;
L_2fb626:;
    r4 = 0u;
L_2fb628:;
    r0_27 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_28 = call_002feb00(r0_27, r4, r7, 0u);
    r1_14 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    if (r0_28 == 0) {
        goto L_2fb64e;
    }
    guest::cpu()->r[13] = r13;
    r0_29 = call_002fcb34(r0_28, r1_14, r2_15, r3_13);
    if (r0_29 != 0x39u) {  // (from the original)
        goto L_2fb64e;
    }
    r0_30 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r1_15 = r13 + 0x1cu;  // (from the original)
    *gptr<u32>(r13) = u32(r5);
    guest::cpu()->r[13] = r13;
    call_002fc994(r0_30, r1_15, r4, r7);
L_2fb64e:;
    r0_31 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_32 = call_002feb00(r0_31, r4, r7, 1u);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_32 == 0) {
        goto L_2fb674;
    }
    guest::cpu()->r[13] = r13;
    r0_33 = call_002fcb34(r0_32, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_33 != 0x39u) {  // (from the original)
        goto L_2fb674;
    }
    r0_34 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r1_16 = r13 + 0x1cu;  // (from the original)
    *gptr<u32>(r13) = u32(r6);
    guest::cpu()->r[13] = r13;
    call_002fc994(r0_34, r1_16, r4, r7);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_2fb674:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(0x10u)) {  // (from the original)
        guest::preempt();
        goto L_2fb628;
    }
    r7 = r7 + 1u;
    if (s32(r7) < s32(0x10u)) {  // (from the original)
        guest::preempt();
        goto L_2fb626;
    }
L_2fb680:;
    r0 = *gptr<u32>(r13 + 0x10u) + 1u;  // (from the original)
    res_1 = r0 - 0x1au;  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r0);  // (from the original)
    if (res_1 >> 0x1f != ((r0 ^ 0x1au) & (r0 ^ res_1)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_2fb618;
    }
    r0 = 0x1au;  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r0);  // (from the original)
L_2fb68e:;
    r0_35 = uxtb(r0);
    guest::cpu()->r[13] = r13;
    r0_36 = call_002fe7cc(r0_35, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0xcu) = u32(r0_36);  // (from the original)
    if (r0_36 == 0) {
        goto L_2fb6f6;
    }
    r7 = 0u;
L_2fb69c:;
    r4 = 0u;
L_2fb69e:;
    r0_37 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_38 = call_002feb00(r0_37, r4, r7, 0u);
    r1_17 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    if (r0_38 == 0) {
        goto L_2fb6c4;
    }
    guest::cpu()->r[13] = r13;
    r0_39 = call_002fcb34(r0_38, r1_17, r2_16, r3_14);
    if (r0_39 != 0x39u) {  // (from the original)
        goto L_2fb6c4;
    }
    r0_40 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r1_18 = r13 + 0x1cu;  // (from the original)
    *gptr<u32>(r13) = u32(r5);
    guest::cpu()->r[13] = r13;
    call_002fc994(r0_40, r1_18, r4, r7);
L_2fb6c4:;
    r0_41 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_42 = call_002feb00(r0_41, r4, r7, 1u);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_42 == 0) {
        goto L_2fb6ea;
    }
    guest::cpu()->r[13] = r13;
    r0_43 = call_002fcb34(r0_42, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_43 != 0x39u) {  // (from the original)
        goto L_2fb6ea;
    }
    r0_44 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r1_19 = r13 + 0x1cu;  // (from the original)
    *gptr<u32>(r13) = u32(r6);
    guest::cpu()->r[13] = r13;
    call_002fc994(r0_44, r1_19, r4, r7);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_2fb6ea:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(0x10u)) {  // (from the original)
        guest::preempt();
        goto L_2fb69e;
    }
    r7 = r7 + 1u;
    if (s32(r7) < s32(0x10u)) {  // (from the original)
        guest::preempt();
        goto L_2fb69c;
    }
L_2fb6f6:;
    r0 = *gptr<u32>(r13 + 0x10u) + 1u;  // (from the original)
    res_2 = r0 - 0x1eu;  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r0);  // (from the original)
    if (res_2 >> 0x1f != ((r0 ^ 0x1eu) & (r0 ^ res_2)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_2fb68e;
    }
    guest::cpu()->r[13] = r13;
    r0_45 = call_002fae84(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0_45 + 0x62162u;  // (from the original)
    r4 = 0u;
    do {
L_2fb70a:;
        guest::cpu()->r[13] = r13;
        r0_46 = call_003fe3e4(r5, r4, r2, r3);
        r1_20 = guest::cpu()->r[1];
        r2_17 = guest::cpu()->r[2];
        r3_15 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_47 = call_002fcb34(r0_46, r1_20, r2_17, r3_15);
        r1_21 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0_47 != 0x39u)) {  // (from the original)
            r2_18 = r13 + 0x1cu;  // (from the original)
            guest::cpu()->r[13] = r13;
            call_001b21e0(r5, r4, r2_18, r3);
            r1_21 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0x10u);  // (from the original)
    r0_48 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_49 = call_002f777c(r0_48, r1_21, r2, r3);
    r1_22 = guest::cpu()->r[1];
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1_22;
    guest::cpu()->r[13] = r13;
    return r0_49;
}

}  // namespace d_002fb4d8
GUEST_EXPORT(0x002fb4d9, d_002fb4d8::f_002fb4d8);

// f_002fb7b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fb7b0 {

struct __attribute__((packed)) Object_002fb7b0_0 {
    u8 unknown_0[0x79];  // (not used here)
    u8 byte_79;
};
GUEST_OFFSET(Object_002fb7b0_0, byte_79, 0x79);  // (from the original)

inline constexpr guest::Function<0x00584134, u32(u32, u32, u32, u32)> call_00584134;  // (from the original)
inline constexpr guest::Function<0x0058c5f0, u32(u32, u32, u32, u32)> call_0058c5f0;  // (from the original)

u32 f_002fb7b0(gptr<Object_002fb7b0_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    res_1 = u32(arg0->byte_79) << 0x1d >> 0x1f;  // (from the original)
    if (res_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return res_1;
    }
    r0_1 = call_00584134(res_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = call_0058c5f0(r0_1, 0x24u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = u32(*gptr<u8>(r0 + 0x79u)) & ~4u & ~2u;  // (from the original)
    *gptr<u8>(r0 + 0x79u) = u8(r1_1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_002fb7b0
GUEST_EXPORT(0x002fb7b0, d_002fb7b0::f_002fb7b0);

// f_002fbf60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fbf60 {

inline constexpr guest::Function<0x001745f8, u32(u32, u32, u32, u32)> call_001745f8;  // (from the original)

u32 f_002fbf60(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    *gptr<u32>(r13) = u32(1u);
    guest::cpu()->r[13] = r13;
    call_001745f8(guest::cpu()->r[0], guest::cpu()->r[1], 0x2fbf7cu, 1u);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_002fbf60
GUEST_EXPORT(0x002fbf60, d_002fbf60::f_002fbf60);

// f_002fc194: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fc194 {

struct __attribute__((packed)) Object_002fc194_0 {
    u8 unknown_0[0x1];  // (not used here)
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
    u8 byte_6;
    u8 byte_7;
    u8 byte_8;
    u8 unknown_9[0x1];  // (not used here)
    u16 half_a;
    u8 byte_c;
    u8 byte_d;
    u8 byte_e;
    u8 byte_f;
    u8 byte_10;
    u8 byte_11;
    u8 byte_12;
    u8 byte_13;
    u8 byte_14;
    u8 byte_15;
};
GUEST_OFFSET(Object_002fc194_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_002fc194_0, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_002fc194_0, byte_3, 0x3);  // (from the original)
GUEST_OFFSET(Object_002fc194_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002fc194_0, byte_5, 0x5);  // (from the original)
GUEST_OFFSET(Object_002fc194_0, byte_6, 0x6);  // (from the original)
GUEST_OFFSET(Object_002fc194_0, byte_7, 0x7);  // (from the original)
GUEST_OFFSET(Object_002fc194_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_002fc194_0, half_a, 0xa);  // (from the original)
GUEST_OFFSET(Object_002fc194_0, byte_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002fc194_0, byte_d, 0xd);  // (from the original)
GUEST_OFFSET(Object_002fc194_0, byte_e, 0xe);  // (from the original)
GUEST_OFFSET(Object_002fc194_0, byte_f, 0xf);  // (from the original)
GUEST_OFFSET(Object_002fc194_0, byte_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_002fc194_0, byte_11, 0x11);  // (from the original)
GUEST_OFFSET(Object_002fc194_0, byte_12, 0x12);  // (from the original)
GUEST_OFFSET(Object_002fc194_0, byte_13, 0x13);  // (from the original)
GUEST_OFFSET(Object_002fc194_0, byte_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_002fc194_0, byte_15, 0x15);  // (from the original)

inline constexpr guest::Function<0x003052f0, u32(u32, u32, u32, u32)> call_003052f0;  // (from the original)

u32 f_002fc194(gptr<Object_002fc194_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    arg0->byte_1 = u8(0u);
    arg0->byte_2 = u8(0u);
    arg0->byte_3 = u8(0u);
    arg0->byte_4 = u8(0u);
    arg0->byte_5 = u8(0u);
    arg0->byte_6 = u8(0u);
    arg0->byte_7 = u8(0u);
    arg0->byte_8 = u8(0u);
    arg0->half_a = u16(0u);
    arg0->byte_c = u8(0u);
    arg0->byte_d = u8(0u);
    arg0->byte_e = u8(0u);
    arg0->byte_f = u8(0u);
    arg0->byte_10 = u8(0u);
    arg0->byte_11 = u8(0xffu);  // (from the original)
    arg0->byte_12 = u8(0u);
    arg0->byte_13 = u8(0u);
    arg0->byte_14 = u8(0u);
    arg0->byte_15 = u8(0u);
    r0_1 = r0 + 0x16u;  // (from the original)
    call_003052f0(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = ~0u;
    *gptr<u8>(r0 + 0x44u) = u8(0xffu);  // (from the original)
    *gptr<u32>(r0 + 0x48u) = u32(r0_2);  // (from the original)
    *gptr<u32>(r0 + 0x4cu) = u32(r0_2);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0_2;
}

}  // namespace d_002fc194
GUEST_EXPORT(0x002fc194, d_002fc194::f_002fc194);

// f_002fc2a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fc2a4 {

inline constexpr guest::Function<0x001b1b40, u32(u32, u32, u32, u32)> call_001b1b40;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> call_005361a8;  // (from the original)
inline constexpr guest::Function<0x006f2908, u32(u32, u32, u32, u32)> call_006f2908;  // (from the original)
inline constexpr guest::Function<0x0070b49c, u32(u32, u32, u32, u32)> call_0070b49c;  // (from the original)
inline constexpr guest::Function<0x0070b510, u32(u32, u32, u32, u32)> call_0070b510;  // (from the original)
inline constexpr guest::Function<0x0070b574, u32(u32, u32, u32, u32)> call_0070b574;  // (from the original)
inline constexpr guest::Function<0x0070b5e8, u32(u32, u32, u32, u32)> call_0070b5e8;  // (from the original)

u32 f_002fc2a4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 zf_1 = 0;
    u32 zf_2 = 0;
    u32 zf_3 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 zf_4 = 0;
    u32 zf_5 = 0;
    u32 zf_6 = 0;
    u32 zf_7 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 zf_8 = 0;
    u32 r1_5 = 0;
    u32 cf_1 = 0;
    u32 zf_9 = 0;
    u32 zf_10 = 0;
    u32 zf_11 = 0;
    u32 zf_12 = 0;
    u32 zf_13 = 0;
    u32 r0_8 = 0;
    u32 r1_6 = 0;
    u32 r0_9 = 0;
    u32 r1_7 = 0;
    u32 r0_10 = 0;
    u32 r1_8 = 0;
    u32 r0_11 = 0;
    u32 r1_9 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r1_10 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r1_11 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r0_27 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_28 = 0;
    u32 r0_29 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_30 = 0;
    u32 r0_31 = 0;
    u32 r1_12 = 0;
    u32 r0_32 = 0;
    u32 r0_33 = 0;
    u32 r0_34 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r0_35 = 0;
    u32 r0_36 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r0_37 = 0;
    u32 r0_38 = 0;
    u32 r1_13 = 0;
    u32 r0_39 = 0;
    u32 zf_14 = 0;
    u32 zf_15 = 0;
    u32 cf_2 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r8_2 = 0;
    u32 cf_3 = 0;
    u32 r0_40 = 0;
    r13 = r13 - 0x18;  // (from the original)
    zf_1 = r1 == 4u;
    r13 = r13 - 0x10u;  // (from the original)
    r5 = r0;
    r6 = r1;
    if (zf_1) {
        goto L_2fc364;
    }
    zf_2 = r6 == 3u;
    if (zf_2) {
        goto L_2fc440;
    }
    zf_3 = r6 == 1u;
    if (!zf_3) {
        zf_3 = r6 == 2u;
    }
    if (zf_3) {
        goto L_2fc554;
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fae84(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r1_1 = r0_1 + 0x62000u;  // (from the original)
    r1_2 = r1_1 + 0x1ccu;  // (from the original)
    r0_2 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_001b1b40(r0_2, r1_2, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    zf_4 = r6 == 5u;
    if (zf_4) {
        goto L_2fc5a0;
    }
    zf_5 = r6 == 6u;
    if (zf_5) {
        goto L_2fc628;
    }
    zf_6 = r6 == 7u;
    if (zf_6) {
        goto L_2fc6ac;
    }
    zf_7 = r6 == 8u;
    if (zf_7) {
        goto L_2fc734;
    }
    r0_3 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_002fcbb0(r0_3, 0x2000u, r2_2, r3_2);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_4 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_5 = call_005361a8(r0_4, r1_3, r2_3, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r4 = r0_5;
    guest::cpu()->r[13] = r13;
    r0_6 = call_002fae84(r0_5, r1_4, r2_4, r3_4);
    r3 = 0x172bu;  // (from the original)
    r12 = 1u;
    r0_7 = u32(*gptr<u8>(r0_6 + 0x6214eu));  // (from the original)
    zf_8 = r0_7 >> 4 == 0;
    if (zf_8) {
        r2 = 1u;
    } else {
        r2 = 0u;
    }
    r0 = 0u;
L_2fc344:;
    r1_5 = u32(*gptr<u8>(r4 + 0xdu));  // (from the original)
    cf_1 = r1_5 >= 0xb9u;  // (from the original)
    if (cf_1) {
        r1_5 = 0u;
    }
    zf_9 = r1_5 == r6;
    if (!zf_9) {
        goto L_2fc7e0;
    }
    zf_10 = r2 == 0;
    if (!zf_10) {
        goto L_2fc7c4;
    }
    goto L_2fc7b8;
L_2fc364:;
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_006f2908(r0, 3u, 5u, 0u);
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_006f2908(r5, 3u, 6u, 0u);
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_006f2908(r5, 3u, 7u, 0u);
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_006f2908(r5, 4u, 5u, 0u);
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_006f2908(r5, 4u, 6u, 0u);
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_006f2908(r5, 4u, 7u, 0u);
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_006f2908(r5, 5u, 5u, 0u);
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_006f2908(r5, 5u, 6u, 0u);
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0 = call_006f2908(r5, 5u, 7u, 0u);
    r1 = guest::cpu()->r[1];
L_2fc438:;
    r13 = r13 + 0x10u;  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_2fc440:;
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(3u, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    zf_11 = r0 == 0;
    if (!zf_11) {
        zf_12 = r0 == 1u;
        if (zf_12) {
            goto L_2fc504;
        }
        zf_13 = r0 == 2u;
        if (!zf_13) {
            guest::preempt();
            goto L_2fc438;
        }
        *gptr<u32>(r13) = u32(0u);
        guest::cpu()->r[13] = r13;
        call_006f2908(r5, 3u, 7u, 0u);
        *gptr<u32>(r13) = u32(0u);
        guest::cpu()->r[13] = r13;
        call_006f2908(r5, 4u, 7u, 0u);
        *gptr<u32>(r13) = u32(0u);
        guest::cpu()->r[13] = r13;
        r0_8 = call_006f2908(r5, 5u, 7u, 0u);
        r1_6 = guest::cpu()->r[1];
        r13 = r13 + 0x10u;  // (from the original)
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1_6;
        guest::cpu()->r[13] = r13;
        return r0_8;
    }
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_006f2908(r5, 3u, 5u, 0u);
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_006f2908(r5, 4u, 5u, 0u);
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_9 = call_006f2908(r5, 5u, 5u, 0u);
    r1_7 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_7;
    guest::cpu()->r[13] = r13;
    return r0_9;
L_2fc504:;
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_006f2908(r5, 3u, 6u, 0u);
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_006f2908(r5, 4u, 6u, 0u);
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_10 = call_006f2908(r5, 5u, 6u, 0u);
    r1_8 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_8;
    guest::cpu()->r[13] = r13;
    return r0_10;
L_2fc554:;
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_006f2908(r0, 3u, r1, 0u);
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_006f2908(r5, 4u, r6, 0u);
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_11 = call_006f2908(r5, 5u, r6, 0u);
    r1_9 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_9;
    guest::cpu()->r[13] = r13;
    return r0_11;
L_2fc5a0:;
    r0_12 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_13 = call_0070b510(r0_12, 3u, r2_2, r3_2);
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_006f2908(r5, 3u, r0_13, 0u);
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_14 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_15 = call_0070b510(r0_14, 4u, r2_5, r3_5);
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_006f2908(r5, 4u, r0_15, 0u);
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_16 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_17 = call_0070b510(r0_16, 5u, r2_6, r3_6);
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_006f2908(r5, 5u, r0_17, 0u);
    r1_10 = guest::cpu()->r[1];
    r0_18 = r13 + 4u;
    r13 = r13 + 0x10u;  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_10;
    guest::cpu()->r[13] = r13;
    return r0_18;
L_2fc628:;
    r0_19 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_20 = call_0070b5e8(r0_19, 3u, r2_2, r3_2);
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_006f2908(r5, 3u, r0_20, 0u);
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_21 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_22 = call_0070b5e8(r0_21, 4u, r2_7, r3_7);
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_006f2908(r5, 4u, r0_22, 0u);
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_23 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_24 = call_0070b5e8(r0_23, 5u, r2_8, r3_8);
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_006f2908(r5, 5u, r0_24, 0u);
    r1_11 = guest::cpu()->r[1];
    r0_25 = r13 + 4u;
    r13 = r13 + 0x10u;  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_11;
    guest::cpu()->r[13] = r13;
    return r0_25;
L_2fc6ac:;
    r0_26 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_27 = call_0070b49c(r0_26, 3u, r2_2, r3_2);
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_006f2908(r5, 3u, r0_27, 0u);
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_28 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_29 = call_0070b49c(r0_28, 4u, r2_9, r3_9);
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_006f2908(r5, 4u, r0_29, 0u);
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_30 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_31 = call_0070b49c(r0_30, 5u, r2_10, r3_10);
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_006f2908(r5, 5u, r0_31, 0u);
    r1_12 = guest::cpu()->r[1];
    r0_32 = r13 + 4u;
    r13 = r13 + 0x10u;  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_12;
    guest::cpu()->r[13] = r13;
    return r0_32;
L_2fc734:;
    r0_33 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_34 = call_0070b574(r0_33, 3u, r2_2, r3_2);
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_006f2908(r5, 3u, r0_34, 0u);
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_35 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_36 = call_0070b574(r0_35, 4u, r2_11, r3_11);
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_006f2908(r5, 4u, r0_36, 0u);
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_37 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_38 = call_0070b574(r0_37, 5u, r2_12, r3_12);
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_006f2908(r5, 5u, r0_38, 0u);
    r1_13 = guest::cpu()->r[1];
    r0_39 = r13 + 4u;
    r13 = r13 + 0x10u;  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_13;
    guest::cpu()->r[13] = r13;
    return r0_39;
L_2fc7b8:;
    r1_5 = u32(*gptr<u8>(r4 + 0x1bu));  // (from the original)
    zf_14 = (r1_5 & 1u) == 0;
    if (!zf_14) {
        goto L_2fc7e0;
    }
L_2fc7c4:;
    zf_15 = r0 == r3;
    cf_2 = r0 >= r3;
    if (cf_2 && !zf_15) {
        goto L_2fc7e0;
    }
    r1_5 = r0 >> 5;
    r7_1 = r0 & 0x1fu;  // (from the original)
    r8_1 = *gptr<u32>(r5 + (r1_5 << 2));
    r8_2 = r8_1 | lsl_r(r12, r7_1 & 0xff);  // (from the original)
    *gptr<u32>(r5 + (r1_5 << 2)) = u32(r8_2);
L_2fc7e0:;
    r0 = r0 + 1u;
    cf_3 = r0 >= r3;
    r4 = r4 + 0x1eu;  // (from the original)
    if (!cf_3) {
        guest::preempt();
        goto L_2fc344;
    }
    r0_40 = r13 + 4u;
    r13 = r13 + 0x10u;  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return r0_40;
}

}  // namespace d_002fc2a4
GUEST_EXPORT(0x002fc2a4, d_002fc2a4::f_002fc2a4);

// f_002fc948: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fc948 {

inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x002fe7f0, u32(u32, u32, u32, u32)> call_002fe7f0;  // (from the original)
inline constexpr guest::Function<0x005819ec, u32(u32, u32, u32, u32)> call_005819ec;  // (from the original)

u32 f_002fc948(u32 r0_unused, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = *gptr<u8>(0x952b9cu + 1u);  // (from the original)
    r0_2 = call_002fe7cc(r0_1, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_2 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    if ((*gptr<u32>(0x952b9cu + 0xcu) & 1u) != 0u) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 0xa14860u;  // (from the original)
    }
    r0_3 = call_002fe7dc(0x952ba8u, r1_1, r2_1, guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    if (r0_3 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 0xa14860u;  // (from the original)
    }
    r0_4 = call_005819ec(0xa14860u, r1_2, r2_2, guest::cpu()->r[3]);  // (from the original)
    call_002fe7f0(r0_4, 0x581a18u, 0x100000u, guest::cpu()->r[3]);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_3;
    return 0xa14860u;  // (from the original)
}

}  // namespace d_002fc948
GUEST_EXPORT(0x002fc949, d_002fc948::f_002fc948);

// f_002fcc54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fcc54 {

struct __attribute__((packed)) Object_002fcc54_0 {
    u32 word_0;
    u8 unknown_4[0x24];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(Object_002fcc54_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002fcc54_0, word_28, 0x28);  // (from the original)

inline constexpr guest::Function<0x004a669c, u32(u32, u32, u32, u32)> call_004a669c;  // (from the original)
inline constexpr guest::Function<0x004ee904, u32(u32, u32, u32, u32)> call_004ee904;  // (from the original)
inline constexpr guest::Function<0x004f26a4, u32(u32, u32, u32, u32)> call_004f26a4;  // (from the original)

u32 f_002fcc54(gptr<Object_002fcc54_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r5_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 ea_2 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 ea_3 = 0;
    u32 r4_1 = 0;
    u32 r5_2 = 0;
    u32 r6_1 = 0;
    u32 ea_4 = 0;
    u32 r4_2 = 0;
    u32 r5_3 = 0;
    u32 r6_2 = 0;
    if (r1 >= 0x16u) {  // (from the original)
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
    r0_1 = arg0->word_28;
    r5_1 = r1;
    if (r0_1 == r5_1) {
        ea_4 = r13;
        r13 = r13 + 0x10;  // (from the original)
        r4_2 = *gptr<u32>(ea_4);
        r5_3 = *gptr<u32>(ea_4 + 4);
        r6_2 = *gptr<u32>(ea_4 + 8);
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4_2;
        guest::cpu()->r[5] = r5_3;
        guest::cpu()->r[6] = r6_2;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r2_1 = r0 + 0xcu;  // (from the original)
    r1_1 = *gptr<u32>(0x953a94u + (r5_1 << 2));  // (from the original)
    r0_2 = *gptr<u32>(*gptr<u32>(arg0->word_0 - 0xcu) + r2_1) + 8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_004a669c(r0_2, r1_1, r2_1, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    if (r0_1 == 0) {
        ea_4 = r13;
        r13 = r13 + 0x10;  // (from the original)
        r4_2 = *gptr<u32>(ea_4);
        r5_3 = *gptr<u32>(ea_4 + 4);
        r6_2 = *gptr<u32>(ea_4 + 8);
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4_2;
        guest::cpu()->r[5] = r5_3;
        guest::cpu()->r[6] = r6_2;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r0_3 = r0 + 0x10u;  // (from the original)
    *gptr<u32>(r0 + 0x28u) = u32(r5_1);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_004f26a4(r0_3, r0_1, r2_2, guest::cpu()->r[3]);
    r2_3 = guest::cpu()->r[2];
    ea_2 = r0 + 0x2cu;  // (from the original)
    r1_2 = u32(*gptr<u8>(ea_2));
    r0_4 = r0 + 0x10u;  // (from the original)
    ea_3 = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4_1 = *gptr<u32>(ea_3);
    r5_2 = *gptr<u32>(ea_3 + 4);
    r6_1 = *gptr<u32>(ea_3 + 8);
    r14 = *gptr<u32>(ea_3 + 0xc);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    return call_004ee904(r0_4, r1_2, r2_3, guest::cpu()->r[3]);
}

}  // namespace d_002fcc54
GUEST_EXPORT(0x002fcc54, d_002fcc54::f_002fcc54);

// f_002fd11c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fd11c {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002ffc18, u32(u32, u32, u32, u32)> call_002ffc18;  // (from the original)

u32 f_002fd11c(u32 r0, u32 r1_unused, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r2_1 = 0;
    u32 r7_2 = 0;
    u32 r2_2 = 0;
    u32 r7_3 = 0;
    u32 r2_3 = 0;
    u32 r7_4 = 0;
    u32 r2_4 = 0;
    u32 r7_5 = 0;
    u32 r2_5 = 0;
    u32 r7_6 = 0;
    u32 r2_6 = 0;
    u32 r7_7 = 0;
    u32 r2_7 = 0;
    u32 r7_8 = 0;
    u32 r2_8 = 0;
    u32 r7_9 = 0;
    u32 r2_9 = 0;
    u32 r7_10 = 0;
    u32 r2_10 = 0;
    u32 r7_11 = 0;
    u32 r2_11 = 0;
    u32 r7_12 = 0;
    u32 r2_12 = 0;
    u32 r7_13 = 0;
    u32 r2_13 = 0;
    u32 r7_14 = 0;
    u32 r2_14 = 0;
    u32 r7_15 = 0;
    u32 r2_15 = 0;
    u32 r7_16 = 0;
    u32 r2_16 = 0;
    u32 r7_17 = 0;
    u32 r2_17 = 0;
    u32 r7_18 = 0;
    u32 r2_18 = 0;
    u32 r7_19 = 0;
    u32 r2_19 = 0;
    u32 r7_20 = 0;
    u32 r2_20 = 0;
    u32 r7_21 = 0;
    u32 r2_21 = 0;
    u32 r7_22 = 0;
    u32 r2_22 = 0;
    u32 r7_23 = 0;
    u32 r2_23 = 0;
    u32 r7_24 = 0;
    u32 r2_24 = 0;
    u32 r7_25 = 0;
    u32 r2_25 = 0;
    u32 r7_26 = 0;
    u32 r2_26 = 0;
    u32 r7_27 = 0;
    u32 r2_27 = 0;
    u32 r7_28 = 0;
    u32 r2_28 = 0;
    u32 r7_29 = 0;
    u32 r2_29 = 0;
    u32 r7_30 = 0;
    u32 r2_30 = 0;
    u32 r7_31 = 0;
    u32 r2_31 = 0;
    u32 r7_32 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    r6_1 = 5u << 7;
    r7_1 = r0 + 0x44u;  // (from the original)
    r4 = r0;
    r13 = r13 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r7_1, r6_1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    r5 = 0u;
    *gptr<u32>(r7_1 + r6_1) = u32(r5);
    r7_2 = r4 + (0x59u << 3);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r7_2, r6_1, r2_1, guest::cpu()->r[3]);
    r2_2 = guest::cpu()->r[2];
    *gptr<u32>(r7_2 + r6_1) = u32(r5);
    r7_3 = r4 + 0x54cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r7_3, r6_1, r2_2, guest::cpu()->r[3]);
    r2_3 = guest::cpu()->r[2];
    *gptr<u32>(r7_3 + r6_1) = u32(r5);
    r7_4 = r4 + (0x7du << 4);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r7_4, r6_1, r2_3, guest::cpu()->r[3]);
    r2_4 = guest::cpu()->r[2];
    *gptr<u32>(r7_4 + r6_1) = u32(r5);
    r7_5 = r4 + 0xa54u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r7_5, r6_1, r2_4, guest::cpu()->r[3]);
    r2_5 = guest::cpu()->r[2];
    *gptr<u32>(r7_5 + r6_1) = u32(r5);
    r7_6 = r4 + 0xcd8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r7_6, r6_1, r2_5, guest::cpu()->r[3]);
    r2_6 = guest::cpu()->r[2];
    *gptr<u32>(r7_6 + r6_1) = u32(r5);
    r7_7 = r4 + 0xf5cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r7_7, r6_1, r2_6, guest::cpu()->r[3]);
    r2_7 = guest::cpu()->r[2];
    *gptr<u32>(r7_7 + r6_1) = u32(r5);
    r7_8 = r4 + (0x8fu << 5);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r7_8, r6_1, r2_7, guest::cpu()->r[3]);
    r2_8 = guest::cpu()->r[2];
    *gptr<u32>(r7_8 + r6_1) = u32(r5);
    r7_9 = r4 + 0x1464u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r7_9, r6_1, r2_8, guest::cpu()->r[3]);
    r2_9 = guest::cpu()->r[2];
    *gptr<u32>(r7_9 + r6_1) = u32(r5);
    r7_10 = r4 + 0x16e8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r7_10, r6_1, r2_9, guest::cpu()->r[3]);
    r2_10 = guest::cpu()->r[2];
    *gptr<u32>(r7_10 + r6_1) = u32(r5);
    r7_11 = r4 + 0x196cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r7_11, r6_1, r2_10, guest::cpu()->r[3]);
    r2_11 = guest::cpu()->r[2];
    *gptr<u32>(r7_11 + r6_1) = u32(r5);
    r7_12 = r4 + 0x1bf0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r7_12, r6_1, r2_11, guest::cpu()->r[3]);
    r2_12 = guest::cpu()->r[2];
    *gptr<u32>(r7_12 + r6_1) = u32(r5);
    r7_13 = r4 + 0x1e74u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r7_13, r6_1, r2_12, guest::cpu()->r[3]);
    r2_13 = guest::cpu()->r[2];
    *gptr<u32>(r7_13 + r6_1) = u32(r5);
    r7_14 = r4 + 0x20f8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r7_14, r6_1, r2_13, guest::cpu()->r[3]);
    r2_14 = guest::cpu()->r[2];
    *gptr<u32>(r7_14 + r6_1) = u32(r5);
    r7_15 = r4 + 0x237cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r7_15, r6_1, r2_14, guest::cpu()->r[3]);
    r2_15 = guest::cpu()->r[2];
    *gptr<u32>(r7_15 + r6_1) = u32(r5);
    r7_16 = r4 + (0x13u << 9);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r7_16, r6_1, r2_15, guest::cpu()->r[3]);
    r2_16 = guest::cpu()->r[2];
    *gptr<u32>(r7_16 + r6_1) = u32(r5);
    r7_17 = r4 + 0x2884u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r7_17, r6_1, r2_16, guest::cpu()->r[3]);
    r2_17 = guest::cpu()->r[2];
    *gptr<u32>(r7_17 + r6_1) = u32(r5);
    r7_18 = r4 + 0x2b08u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r7_18, r6_1, r2_17, guest::cpu()->r[3]);
    r2_18 = guest::cpu()->r[2];
    *gptr<u32>(r7_18 + r6_1) = u32(r5);
    r7_19 = r4 + 0x2d8cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r7_19, r6_1, r2_18, guest::cpu()->r[3]);
    r2_19 = guest::cpu()->r[2];
    *gptr<u32>(r7_19 + r6_1) = u32(r5);
    r7_20 = r4 + 0x3010u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r7_20, r6_1, r2_19, guest::cpu()->r[3]);
    r2_20 = guest::cpu()->r[2];
    *gptr<u32>(r7_20 + r6_1) = u32(r5);
    r7_21 = r4 + 0x3294u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r7_21, r6_1, r2_20, guest::cpu()->r[3]);
    r2_21 = guest::cpu()->r[2];
    *gptr<u32>(r7_21 + r6_1) = u32(r5);
    r7_22 = r4 + 0x3518u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r7_22, r6_1, r2_21, guest::cpu()->r[3]);
    r2_22 = guest::cpu()->r[2];
    *gptr<u32>(r7_22 + r6_1) = u32(r5);
    r7_23 = r4 + 0x379cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r7_23, r6_1, r2_22, guest::cpu()->r[3]);
    r2_23 = guest::cpu()->r[2];
    *gptr<u32>(r7_23 + r6_1) = u32(r5);
    r7_24 = r4 + 0x3a20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r7_24, r6_1, r2_23, guest::cpu()->r[3]);
    r2_24 = guest::cpu()->r[2];
    *gptr<u32>(r7_24 + r6_1) = u32(r5);
    r7_25 = r4 + 0x3ca4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r7_25, r6_1, r2_24, guest::cpu()->r[3]);
    r2_25 = guest::cpu()->r[2];
    *gptr<u32>(r7_25 + r6_1) = u32(r5);
    r7_26 = r4 + 0x3f28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r7_26, r6_1, r2_25, guest::cpu()->r[3]);
    r2_26 = guest::cpu()->r[2];
    *gptr<u32>(r7_26 + r6_1) = u32(r5);
    r7_27 = r4 + 0x41acu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r7_27, r6_1, r2_26, guest::cpu()->r[3]);
    r2_27 = guest::cpu()->r[2];
    *gptr<u32>(r7_27 + r6_1) = u32(r5);
    r7_28 = r4 + 0x4430u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r7_28, r6_1, r2_27, guest::cpu()->r[3]);
    r2_28 = guest::cpu()->r[2];
    *gptr<u32>(r7_28 + r6_1) = u32(r5);
    r7_29 = r4 + 0x46b4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r7_29, r6_1, r2_28, guest::cpu()->r[3]);
    r2_29 = guest::cpu()->r[2];
    *gptr<u32>(r7_29 + r6_1) = u32(r5);
    r7_30 = r4 + 0x4938u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r7_30, r6_1, r2_29, guest::cpu()->r[3]);
    r2_30 = guest::cpu()->r[2];
    *gptr<u32>(r7_30 + r6_1) = u32(r5);
    r7_31 = r4 + 0x4bbcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r7_31, r6_1, r2_30, guest::cpu()->r[3]);
    r2_31 = guest::cpu()->r[2];
    *gptr<u32>(r7_31 + r6_1) = u32(r5);
    r7_32 = r4 + 0x4e40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r7_32, r6_1, r2_31, guest::cpu()->r[3]);
    *gptr<u32>(r7_32 + r6_1) = u32(r5);
    r0_1 = r4 + 0x5840u;  // (from the original)
    *gptr<u32>(r13) = u32(r0_1);
    *gptr<u32>(r0_1 + 0x14u) = u32(r5);  // (from the original)
    *gptr<u32>(*gptr<u32>(r13) + 0x18u) = u32(r5);  // (from the original)
    *gptr<u32>(*gptr<u32>(r13) + 0x1cu) = u32(r5);  // (from the original)
    *gptr<u32>(*gptr<u32>(r13) + 0x20u) = u32(r5);  // (from the original)
    *gptr<u32>(*gptr<u32>(r13) + 0x24u) = u32(r5);  // (from the original)
    *gptr<u32>(*gptr<u32>(r13) + 0x28u) = u32(r5);  // (from the original)
    r0_2 = r4 + 0x58a0u;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r0_2);
    *gptr<u8>(r0_2 + 0xau) = u8(r5);  // (from the original)
    r0_3 = r4 + 0x587cu;  // (from the original)
    r6 = 0u;
    *gptr<u32>(r0_3) = u32(r5);
    *gptr<u8>(r0_3 + 4u) = u8(r5);
L_2fd35e:;
    r7 = 0u;
    do {
L_2fd360:;
        r1_1 = r6 + 1u;
        r0_4 = r7 + 1u;
        guest::cpu()->r[13] = r13;
        r0_5 = call_002ffc18(r0_4, r1_1, 1u, guest::cpu()->r[3]);
        r1_2 = (r7 << 2) + r4 + r6 + (0xb1u << 7);  // (from the original)
        r7 = r7 + 1u;
        *gptr<u8>(r1_2 + 0x15u) = u8(r5);  // (from the original)
        *gptr<u8>(r1_2 + 1u) = u8(r0_5);
        guest::preempt();
    } while (r7 < 5u);
    r6 = r6 + 1u;
    if (r6 < 4u) {
        guest::preempt();
        goto L_2fd35e;
    }
    *gptr<u16>(*gptr<u32>(r13) + 0x10u) = u16(0x7ffeu);  // (from the original)
    *gptr<u8>(*gptr<u32>(r13 + 4u) + 0xbu) = u8(r5);  // (from the original)
    *gptr<u8>(0x952b9cu + 1u) = u8(1u);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = 1u;
    guest::cpu()->r[13] = r13;
    return 0x952b9cu;  // (from the original)
}

}  // namespace d_002fd11c
GUEST_EXPORT(0x002fd11d, d_002fd11c::f_002fd11c);

// f_002fd41c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fd41c {


u32 f_002fd41c(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 vf_1 = 0;
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 res_2 = 0;
    u32 nf_2 = 0;
    u32 vf_2 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    r2_1 = *gptr<u32>(r13);
    res_1 = r0 - r3;
    nf_1 = res_1 >> 0x1f;  // (from the original)
    vf_1 = ((r0 ^ r3) & (r0 ^ res_1)) >> 0x1f;  // (from the original)
    if (res_1 == 0) {
        r0_1 = sxtb(r1);
        r3_1 = sxtb(r2_1);
        res_2 = r0_1 - r3_1;
        nf_2 = res_2 >> 0x1f;  // (from the original)
        vf_2 = ((r0_1 ^ r3_1) & (r0_1 ^ res_2)) >> 0x1f;  // (from the original)
        if (res_2 == 0) {
            r0_2 = u32(s32(r1 << 0x10) >> 0x18);  // (from the original)
            r1_1 = u32(s32(r2_1 << 0x10) >> 0x18);  // (from the original)
            if (s32(r0_2) >= s32(r1_1)) {
                guest::cpu()->r[1] = r1_1;
                return 1u;
            }
            guest::cpu()->r[1] = r1_1;
            return 0u;
        }
        if (nf_2 == vf_2) {
            guest::cpu()->r[1] = r1;
            return 1u;
        }
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    if (nf_1 != vf_1) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_002fd41c
GUEST_EXPORT(0x002fd41c, d_002fd41c::f_002fd41c);

// f_002fdd50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fdd50 {

struct __attribute__((packed)) Object_002fdd50_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u16 half_10;
};
GUEST_OFFSET(Object_002fdd50_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002fdd50_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002fdd50_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_002fdd50_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002fdd50_1, half_10, 0x10);  // (from the original)


u32 f_002fdd50(u32 r0, gptr<Object_002fdd50_1> arg1, u32 r2) {
    u32 r3 = 0;
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r5_1 = 0;
    u32 r7_1 = 0;
    u32 r4_1 = 0;
    u32 res_1 = 0;
    u32 r4_2 = 0;
    u32 r4_3 = 0;
    u32 r4_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r3 = 0u;
    arg1->word_8 = u32(0x10u);  // (from the original)
    arg1->word_c = u32(0x10u);  // (from the original)
    r6 = 0x140u;  // (from the original)
    arg1->word_0 = u32(r3);
L_2fdd60:;
    if (u32(*gptr<u16>(r0)) == 0) {
        goto L_2fdd9a;
    }
    r5 = 1u;
    arg1->half_10 = u16(r5);
    arg1->word_4 = u32(0u);
    do {
L_2fdd6e:;
        r5_1 = uxth(r5);
        if (!((u32(*gptr<u16>(r0)) & r5_1) == 0)) {
            if (!(r2 != r3)) {
                guest::cpu()->r[13] += 0x10u;  // (from the original)
                return 1u;
            }
            r3 = r3 + 1u;
        }
        r5 = r5_1 << 1;
        r7_1 = arg1->word_8 + 1u;
        r4_1 = arg1->word_4 + 1u;
        arg1->half_10 = u16(r5);
        arg1->word_8 = u32(r7_1);
        res_1 = r4_1 - 0x10u;  // (from the original)
        arg1->word_4 = u32(r4_1);
        guest::preempt();
    } while (res_1 >> 0x1f != ((r4_1 ^ 0x10u) & (r4_1 ^ res_1)) >> 0x1f);  // (from the original)
    r4_2 = r7_1;
    goto L_2fdda0;
L_2fdd9a:;
    r4_2 = arg1->word_8 + 0x10u;  // (from the original)
    arg1->word_8 = u32(r4_2);
L_2fdda0:;
    if (r4_2 >= 0x60u) {  // (from the original)
        r4_3 = arg1->word_c + 1u;
        arg1->word_8 = u32(0x10u);  // (from the original)
        arg1->word_c = u32(r4_3);
    }
    r0 = r0 + 2u;
    r4_4 = arg1->word_0 + 1u;
    arg1->word_0 = u32(r4_4);
    if (r4_4 < r6) {
        guest::preempt();
        goto L_2fdd60;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return 0u;
}

}  // namespace d_002fdd50
GUEST_EXPORT(0x002fdd51, d_002fdd50::f_002fdd50);

// f_002fe7f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fe7f4 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x0056de54, u32(u32, u32, u32, u32)> call_0056de54;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_002fe7f4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r3_3 = 0;
    u32 res_1 = 0;
    u32 ea_1 = 0;
    u32 r3_4 = 0;
    u32 ea_2 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r5 = r1;
    r6 = r2;
    r1_1 = r0 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_003083bc(r0, r1_1, 0x21u, r3);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r0_1) = u32(0x909f18u);  // (from the original)
    r0_2 = r0_1 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_005f4bfc(r0_2, 0x909f18u, r2_1, r3_1);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r4 = r0_3 - 0xcu;  // (from the original)
    r0_4 = r0_3 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_4, 0x42u, r2_2, r3_2);  // (from the original)
    r1 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    *gptr<u16>(r4 + 0x18u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    r2 = 0x10u;  // (from the original)
    do {
L_2fe83c:;
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
    call_0056de54(r4, r5, r6, r3_4);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r4;
}

}  // namespace d_002fe7f4
GUEST_EXPORT(0x002fe7f4, d_002fe7f4::f_002fe7f4);

// f_002fe9c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fe9c8 {

inline constexpr guest::Function<0x006f2908, u32(u32, u32, u32, u32)> call_006f2908;  // (from the original)

u32 f_002fe9c8(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    *gptr<u32>(r13) = u32(r3);
    guest::cpu()->r[13] = r13;
    call_006f2908(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], 0u);
    r13 = r13 + 8;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_002fe9c8
GUEST_EXPORT(0x002fe9c8, d_002fe9c8::f_002fe9c8);

// f_002ff1cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ff1cc {

struct __attribute__((packed)) Object_002ff1cc_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_002ff1cc_0, byte_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb338, u32(u32, u32, u32, u32)> call_002fb338;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> call_002fb430;  // (from the original)
inline constexpr guest::Function<0x002fb4a0, u32(u32, u32, u32, u32)> call_002fb4a0;  // (from the original)
inline constexpr guest::Function<0x00300ff8, u32(u32, u32, u32, u32)> call_00300ff8;  // (from the original)
inline constexpr guest::Function<0x00302084, u32(u32, u32, u32, u32)> call_00302084;  // (from the original)
inline constexpr guest::Function<0x003022e8, u32(u32, u32, u32, u32)> call_003022e8;  // (from the original)
inline constexpr guest::Function<0x00303274, u32(u32, u32, u32, u32)> call_00303274;  // (from the original)
inline constexpr guest::Function<0x003037e8, u32(u32, u32, u32, u32)> call_003037e8;  // (from the original)
inline constexpr guest::Function<0x0030a488, u32(u32, u32, u32, u32)> call_0030a488;  // (from the original)

u32 f_002ff1cc(gptr<Object_002ff1cc_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r8_1 = 0;
    u32 ea_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 ea_2 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r9_1 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r0_9 = 0;
    u32 r1_6 = 0;
    u32 r2_5 = 0;
    u32 r3_3 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_7 = 0;
    u32 r0_12 = 0;
    u32 r2_6 = 0;
    u32 r3_4 = 0;
    u32 r1_8 = 0;
    u32 r0_13 = 0;
    u32 ea_3 = 0;
    u32 r0_14 = 0;
    u32 r1_9 = 0;
    u32 r2_7 = 0;
    u32 r0_15 = 0;
    u32 r1_10 = 0;
    u32 ea_4 = 0;
    u32 r1_11 = 0;
    u32 r3_5 = 0;
    u32 r0_16 = 0;
    u32 ea_5 = 0;
    u32 r1_12 = 0;
    u32 r3_6 = 0;
    u32 r1_13 = 0;
    u32 r2_8 = 0;
    u32 r3_7 = 0;
    u32 r2_9 = 0;
    u32 r3_8 = 0;
    u32 r2_10 = 0;
    u32 r3_9 = 0;
    r13 = r13 - 0x60u;  // (from the original)
    r5_1 = 0u;
    r0_1 = u32(arg0->byte_0);
    if ((r0_1 & 1u) == 0) {
        goto L_2ff2e4;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fb378(r0_1, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r8_1 = *gptr<u32>(r0_2);
    ea_1 = r0_2 + 4u;
    r6_1 = *gptr<u32>(ea_1);
    r7_1 = *gptr<u32>(ea_1 + 4);
    r1_1 = r0 + 0xeu;  // (from the original)
    r0_3 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fb430(r0_3, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r1_2 = r0 + 0x16u;  // (from the original)
    r0_4 = r13 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fb430(r0_4, r1_2, r2_2, r3_2);
    ea_2 = r13 + 0x14u;  // (from the original)
    r0_5 = *gptr<u32>(ea_2);
    r1_3 = *gptr<u32>(ea_2 + 4);
    r2_3 = *gptr<u32>(ea_2 + 8);
    r9_1 = r13 + 8u;
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r9_1) = u32(r0_5);
    *gptr<u32>(r9_1 + 4) = u32(r1_3);
    *gptr<u32>(r9_1 + 8) = u32(r2_3);
    r0_6 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_0030a488(r0_6, 0u, 0x15u, 0u);  // (from the original)
    *gptr<u32>(r13) = u32(r6_1);
    *gptr<u32>(r13 + 4) = u32(r7_1);
    r0_7 = *gptr<u32>(r9_1);
    r1_4 = *gptr<u32>(r9_1 + 4);
    r2_4 = *gptr<u32>(r9_1 + 8);
    guest::cpu()->r[13] = r13;
    r0_8 = call_002fb4a0(r0_7, r1_4, r2_4, r8_1);
    r1_5 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_8 == 0) {
        goto L_2ff2e4;
    }
    guest::cpu()->r[13] = r13;
    r0_9 = call_002fb328(r0_8, r1_5, r2, r3);
    r1_6 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_10 = r0_9 + 0x80u + 0x6e212u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_11 = call_002fb338(r0_10, r1_6, r2_5, r3_3);
    r1_7 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_11 == 0) {
        goto L_2ff2e4;
    }
    guest::cpu()->r[13] = r13;
    r0_12 = call_002fb328(r0_11, r1_7, r2, r3);
    r2_6 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r1_8 = r0_12 + 0x80u + 0x6e212u;  // (from the original)
    r0_13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fb430(r0_13, r1_8, r2_6, r3_4);
    ea_3 = r13 + 0x38u;  // (from the original)
    r0_14 = *gptr<u32>(ea_3);
    r1_9 = *gptr<u32>(ea_3 + 4);
    r2_7 = *gptr<u32>(ea_3 + 8);
    *gptr<u32>(r13) = u32(r6_1);
    *gptr<u32>(r13 + 4) = u32(r7_1);
    guest::cpu()->r[13] = r13;
    r0_15 = call_002fb4a0(r0_14, r1_9, r2_7, r8_1);
    r1_10 = guest::cpu()->r[1];
    if (r0_15 == 0) {
        goto L_2ff340;
    }
    ea_4 = r13 + 0x18u;  // (from the original)
    r1_11 = *gptr<u32>(ea_4 + 4);
    *gptr<u32>(r13) = u32(*gptr<u32>(ea_4));
    *gptr<u32>(r13 + 4) = u32(r1_11);
    r3_5 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_16 = call_002fb4a0(r8_1, r6_1, r7_1, r3_5);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_16 != 0) {
        ea_5 = r13 + 0x30u;  // (from the original)
        r1_12 = *gptr<u32>(ea_5 + 4);
        *gptr<u32>(r13) = u32(*gptr<u32>(ea_5));
        *gptr<u32>(r13 + 4) = u32(r1_12);
        r3_6 = *gptr<u32>(r13 + 0x2cu);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_15 = call_002fb4a0(r8_1, r6_1, r7_1, r3_6);
        r1_10 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_15 != 0) {
            goto L_2ff340;
        }
    }
    r5_1 = 1u;
L_2ff2e4:;
    guest::cpu()->r[13] = r13;
    call_00302084(r0, r5_1, r2, r3);
    r1_13 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_003022e8(r0, r1_13, r2_8, r3_7);
    guest::cpu()->r[13] = r13;
    call_00300ff8(r0, 1u, 0u, 1u);
    r2_9 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00303274(r0, 0u, r2_9, r3_8);
    r1_10 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_15 = u32(*gptr<u8>(r0));
    if ((r0_15 & 1u) == 0) {
        goto L_2ff340;
    }
    if ((r0_15 & 0x80u) != 0) {  // (from the original)
        goto L_2ff340;
    }
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_003037e8(r0, r1_10, r2_10, r3_9);
L_2ff340:;
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = r1_10;
    guest::cpu()->r[13] = r13;
    return r0_15;
}

}  // namespace d_002ff1cc
GUEST_EXPORT(0x002ff1cc, d_002ff1cc::f_002ff1cc);

// f_002ff368: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ff368 {

struct __attribute__((packed)) Object_002ff368_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u8 byte_30;
    u8 unknown_31[0x3];  // (not used here)
    u32 word_34;
    u32 word_38;
    u32 word_3c;
    u32 word_40;
    u32 word_44;
    u32 word_48;
    u32 word_4c;
    u32 word_50;
    u32 word_54;
    u32 word_58;
    u32 word_5c;
    u32 word_60;
    u8 byte_64;
};
GUEST_OFFSET(Object_002ff368_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, byte_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_44, 0x44);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_48, 0x48);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_4c, 0x4c);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_50, 0x50);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_54, 0x54);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_58, 0x58);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_5c, 0x5c);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_60, 0x60);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, byte_64, 0x64);  // (from the original)

inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> call_002ff408;  // (from the original)

u32 f_002ff368(gptr<Object_002ff368_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r4_1 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0u);
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(0u);
    arg0->word_c = u32(0u);
    arg0->word_10 = u32(0u);
    arg0->word_14 = u32(0u);
    arg0->word_18 = u32(0u);
    arg0->word_1c = u32(0u);
    arg0->word_20 = u32(0u);
    arg0->word_24 = u32(0u);
    arg0->word_28 = u32(0u);
    arg0->word_2c = u32(0u);
    arg0->byte_30 = u8(0u);
    arg0->word_34 = u32(0u);
    arg0->word_38 = u32(0u);
    arg0->word_3c = u32(0u);
    arg0->word_40 = u32(0u);
    arg0->word_44 = u32(0u);
    arg0->word_48 = u32(0u);
    arg0->word_4c = u32(0u);
    arg0->word_50 = u32(0u);
    arg0->word_54 = u32(0u);
    arg0->word_58 = u32(0u);
    arg0->word_5c = u32(0u);
    arg0->word_60 = u32(0u);
    arg0->byte_64 = u8(0u);
    r0_1 = r0 + 0x274u;  // (from the original)
    r0_2 = call_002fc20c(r0_1, guest::cpu()->r[1], 0u, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    r4_1 = r0_2 + 0xfffffd8cu;  // (from the original)
    call_002ff408(r4_1, guest::cpu()->r[1], r2_1, guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return r4_1;
}

}  // namespace d_002ff368
GUEST_EXPORT(0x002ff368, d_002ff368::f_002ff368);

// f_002ff408: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ff408 {

struct __attribute__((packed)) Object_002ff408_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u8 byte_30;
    u8 unknown_31[0x3];  // (not used here)
    u32 word_34;
    u32 word_38;
    u32 word_3c;
    u32 word_40;
    u32 word_44;
    u32 word_48;
    u32 word_4c;
    u32 word_50;
    u32 word_54;
    u32 word_58;
    u32 word_5c;
    u32 word_60;
    u8 byte_64;
};
GUEST_OFFSET(Object_002ff408_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, byte_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_44, 0x44);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_48, 0x48);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_4c, 0x4c);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_50, 0x50);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_54, 0x54);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_58, 0x58);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_5c, 0x5c);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_60, 0x60);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, byte_64, 0x64);  // (from the original)

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x006bc04c, u32(u32, u32, u32, u32)> call_006bc04c;  // (from the original)

u32 f_002ff408(gptr<Object_002ff408_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    arg0->word_0 = u32(0u);
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(0u);
    arg0->word_c = u32(0u);
    arg0->word_10 = u32(0u);
    arg0->word_14 = u32(0u);
    arg0->word_18 = u32(0u);
    arg0->word_1c = u32(0u);
    arg0->word_20 = u32(0u);
    arg0->word_24 = u32(0u);
    arg0->word_28 = u32(0u);
    arg0->word_2c = u32(0u);
    arg0->byte_30 = u8(0u);
    arg0->word_34 = u32(0u);
    arg0->word_38 = u32(0u);
    arg0->word_3c = u32(0u);
    arg0->word_40 = u32(0u);
    arg0->word_44 = u32(0u);
    arg0->word_48 = u32(0u);
    arg0->word_4c = u32(0u);
    arg0->word_50 = u32(0u);
    arg0->word_54 = u32(0u);
    arg0->word_58 = u32(0u);
    arg0->word_5c = u32(0u);
    arg0->word_60 = u32(0u);
    arg0->byte_64 = u8(0u);
    r0_1 = r0 + 0x68u;  // (from the original)
    call_002f825c(r0_1, 0x42u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r0_2 = r0 + 0xaau;  // (from the original)
    call_00301444(r0_2, 0x182u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r0_3 = r0 + 0x22cu;  // (from the original)
    call_002f825c(r0_3, 0x42u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u8>(r0 + 0x26eu) = u8(0u);  // (from the original)
    *gptr<u8>(r0 + 0x26fu) = u8(0u);  // (from the original)
    *gptr<u8>(r0 + 0x270u) = u8(0u);  // (from the original)
    *gptr<u8>(r0 + 0x271u) = u8(0u);  // (from the original)
    r0_4 = r0 + 0x274u;  // (from the original)
    *gptr<u8>(r0 + 0x272u) = u8(0u);  // (from the original)
    call_002fc8e8(r0_4, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_5 = r0 + 0x278u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_006bc04c(r0_5, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_002ff408
GUEST_EXPORT(0x002ff408, d_002ff408::f_002ff408);

// f_002ff724: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ff724 {

inline constexpr guest::Function<0x001b4a8c, u32(u32, u32, u32, u32)> call_001b4a8c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x003052f0, u32(u32, u32, u32, u32)> call_003052f0;  // (from the original)
inline constexpr guest::Function<0x003084d0, u32(u32, u32, u32, u32)> call_003084d0;  // (from the original)
inline constexpr guest::Function<0x00613de4, u32(u32, u32, u32, u32)> call_00613de4;  // (from the original)

u32 f_002ff724(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r5_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 r3_3 = 0;
    u32 r1_4 = 0;
    u32 r0_5 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r1_5 = 0;
    u32 r3_5 = 0;
    u32 r0_7 = 0;
    u32 r3_6 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r3_7 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r6_1 = r0 + 0x142u;  // (from the original)
    r7_1 = r0 + 0x146u;  // (from the original)
    r5_1 = r0 + 0x100u;  // (from the original)
    if (r1 != 0) {
        if (r1 == 1u) {
            goto L_2ff78c;
        }
        if (r1 != 2u) {
            r13 = r13 + 0x18;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
        goto L_2ff7b8;
    }
    r1_1 = r0 + 0x4cu;  // (from the original)
    r0_1 = r0 + 0x1eu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001b4a8c(r0_1, r1_1, guest::cpu()->r[2], r3);
    r3_1 = guest::cpu()->r[3];
    r1_2 = r0 + 0xd8u;  // (from the original)
    r0_2 = r0 + 0xa8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00613de4(r0_2, r1_2, guest::cpu()->r[2], r3_1);
    r3_2 = guest::cpu()->r[3];
    *gptr<u16>(r5_1 + 0x38u) = u16(u32(*gptr<u16>(r5_1 + 0x3au)));  // (from the original)
    r0_3 = r0 + 0x13eu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_3, r6_1, guest::cpu()->r[2], r3_2);
    r3 = guest::cpu()->r[3];
L_2ff78c:;
    r1_3 = r0 + 0x7au;  // (from the original)
    r0_4 = r0 + 0x4cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001b4a8c(r0_4, r1_3, guest::cpu()->r[2], r3);
    r3_3 = guest::cpu()->r[3];
    r1_4 = r0 + 0x108u;  // (from the original)
    r0_5 = r0 + 0xd8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00613de4(r0_5, r1_4, guest::cpu()->r[2], r3_3);
    r3_4 = guest::cpu()->r[3];
    *gptr<u16>(r5_1 + 0x3au) = u16(u32(*gptr<u16>(r5_1 + 0x3cu)));  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r6_1, r7_1, guest::cpu()->r[2], r3_4);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
L_2ff7b8:;
    r0_6 = r0 + 0x7au;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_003052f0(r0_6, r1, guest::cpu()->r[2], r3);
    r1_5 = guest::cpu()->r[1];
    r3_5 = guest::cpu()->r[3];
    r0_7 = r0 + 0x108u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_003084d0(r0_7, r1_5, guest::cpu()->r[2], r3_5);
    r3_6 = guest::cpu()->r[3];
    *gptr<u16>(r5_1 + 0x3cu) = u16(0u);  // (from the original)
    r0_8 = r13;
    guest::cpu()->r[13] = r13;
    r0_9 = call_002fc934(r0_8, 0x95bfdcu, guest::cpu()->r[2], r3_6);  // (from the original)
    r3_7 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r7_1, r0_9, guest::cpu()->r[2], r3_7);
    r1 = guest::cpu()->r[1];
    r0 = r13;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002ff724
GUEST_EXPORT(0x002ff724, d_002ff724::f_002ff724);

// f_002ff864: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ff864 {

inline constexpr guest::Function<0x00300ff8, u32(u32, u32, u32, u32)> call_00300ff8;  // (from the original)
inline constexpr guest::Function<0x00303274, u32(u32, u32, u32, u32)> call_00303274;  // (from the original)
inline constexpr guest::Function<0x003037e8, u32(u32, u32, u32, u32)> call_003037e8;  // (from the original)

u32 f_002ff864(u32 r0, u32 r1) {
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    call_00300ff8(r0, 1u, 0u, 0u);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    call_00303274(r0, r1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_1 = u32(*gptr<u8>(r0));
    if ((r0_1 & 1u) == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    if ((r0_1 & 0x80u) != 0) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_003037e8(r0, r1_1, r2_2, r3_2);
}

}  // namespace d_002ff864
GUEST_EXPORT(0x002ff864, d_002ff864::f_002ff864);

// f_002ff950: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ff950 {

inline constexpr guest::Function<0x001b4a8c, u32(u32, u32, u32, u32)> call_001b4a8c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x003052f0, u32(u32, u32, u32, u32)> call_003052f0;  // (from the original)
inline constexpr guest::Function<0x00613de4, u32(u32, u32, u32, u32)> call_00613de4;  // (from the original)

u32 f_002ff950(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r12 = guest::cpu()->r[12];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r5_1 = 0;
    u32 r7_1 = 0;
    u32 r2_1 = 0;
    u32 zf_1 = 0;
    u32 r9_1 = 0;
    u32 r8_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r1_5 = 0;
    u32 r0_5 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r1_6 = 0;
    u32 r0_6 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_7 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_8 = 0;
    u32 r1_7 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r1_8 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r1_9 = 0;
    u32 r0_9 = 0;
    u32 r1_10 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_10 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r1_11 = 0;
    u32 r0_11 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r0_12 = 0;
    u32 r2_13 = 0;
    u32 r3_13 = 0;
    u32 r0_13 = 0;
    u32 r2_14 = 0;
    u32 r3_14 = 0;
    u32 r1_12 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r2_15 = 0;
    u32 r3_15 = 0;
    u32 r0_16 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r12);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00301e20(r1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_2ffad4;
    }
    if (r3 >= 0x4000u) {  // (from the original)
        r0_1 = 0u;
        goto L_2ffad4;
    }
    r5_1 = r0 + 0x100u;  // (from the original)
    r7_1 = 1u;
    r2_1 = u32(*gptr<u16>(r5_1 + 0x38u));  // (from the original)
    zf_1 = r2_1 == r3;
    if (!zf_1) {
        r0_1 = u32(*gptr<u16>(r5_1 + 0x3au));  // (from the original)
        zf_1 = r0_1 == r3;
    }
    if (!zf_1) {
        r1_1 = u32(*gptr<u16>(r5_1 + 0x3cu));  // (from the original)
        zf_1 = r1_1 == r3;
    }
    if (zf_1) {
        r7_1 = 0u;
        goto L_2ffad0;
    }
    r9_1 = r0 + 0x146u;  // (from the original)
    r8_1 = r0 + 0x142u;  // (from the original)
    if (r3 > r2_1) {
        r1_2 = r0 + 0x4cu;  // (from the original)
        r0_2 = r0 + 0x7au;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_001b4a8c(r0_2, r1_2, r2_1, r3_1);
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        r1_3 = r0 + 0x1eu;  // (from the original)
        r0_3 = r0 + 0x4cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_001b4a8c(r0_3, r1_3, r2_2, r3_2);
        r1_4 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        r0_4 = r0 + 0x1eu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_003052f0(r0_4, r1_4, r2_3, r3_3);
        r2_4 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        r1_5 = r0 + 0xd8u;  // (from the original)
        r0_5 = r0 + 0x108u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00613de4(r0_5, r1_5, r2_4, r3_4);
        r2_5 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
        r1_6 = r0 + 0xa8u;  // (from the original)
        r0_6 = r0 + 0xd8u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00613de4(r0_6, r1_6, r2_5, r3_5);
        r2_6 = guest::cpu()->r[2];
        r3_6 = guest::cpu()->r[3];
        r0_7 = r0 + 0xa8u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00613de4(r0_7, r1, r2_6, r3_6);
        r2_7 = guest::cpu()->r[2];
        r3_7 = guest::cpu()->r[3];
        r0_8 = u32(*gptr<u16>(r5_1 + 0x3au));  // (from the original)
        r1_7 = u32(*gptr<u16>(r5_1 + 0x38u));  // (from the original)
        *gptr<u16>(r5_1 + 0x38u) = u16(r3);  // (from the original)
        *gptr<u16>(r5_1 + 0x3cu) = u16(r0_8);  // (from the original)
        *gptr<u16>(r5_1 + 0x3au) = u16(r1_7);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r9_1, r8_1, r2_7, r3_7);
        r2_8 = guest::cpu()->r[2];
        r3_8 = guest::cpu()->r[3];
        r1_8 = r0 + 0x13eu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r8_1, r1_8, r2_8, r3_8);
        r2_9 = guest::cpu()->r[2];
        r3_9 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r1_8, r2, r2_9, r3_9);
        r1_1 = guest::cpu()->r[1];
        goto L_2ffad0;
    }
    if (r0_1 < r3) {
        r1_9 = r0 + 0x4cu;  // (from the original)
        r0_9 = r0 + 0x7au;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_001b4a8c(r0_9, r1_9, r2_1, r3_1);
        r1_10 = guest::cpu()->r[1];
        r2_10 = guest::cpu()->r[2];
        r3_10 = guest::cpu()->r[3];
        r0_10 = r0 + 0x4cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_003052f0(r0_10, r1_10, r2_10, r3_10);
        r2_11 = guest::cpu()->r[2];
        r3_11 = guest::cpu()->r[3];
        r1_11 = r0 + 0xd8u;  // (from the original)
        r0_11 = r0 + 0x108u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00613de4(r0_11, r1_11, r2_11, r3_11);
        r2_12 = guest::cpu()->r[2];
        r3_12 = guest::cpu()->r[3];
        r0_12 = r0 + 0xd8u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00613de4(r0_12, r1, r2_12, r3_12);
        r2_13 = guest::cpu()->r[2];
        r3_13 = guest::cpu()->r[3];
        r0_13 = u32(*gptr<u16>(r5_1 + 0x3au));  // (from the original)
        *gptr<u16>(r5_1 + 0x3au) = u16(r3);  // (from the original)
        *gptr<u16>(r5_1 + 0x3cu) = u16(r0_13);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r9_1, r8_1, r2_13, r3_13);
        r2_14 = guest::cpu()->r[2];
        r3_14 = guest::cpu()->r[3];
        r1_12 = r2;
        r0_14 = r8_1;
    } else {
        if (r1_1 >= r3) {
            goto L_2ffad0;
        }
        r0_15 = r0 + 0x7au;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_003052f0(r0_15, r1_1, r2_1, r3_1);
        r2_15 = guest::cpu()->r[2];
        r3_15 = guest::cpu()->r[3];
        r0_16 = r0 + 0x108u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00613de4(r0_16, r1, r2_15, r3_15);
        r2_14 = guest::cpu()->r[2];
        r3_14 = guest::cpu()->r[3];
        r1_12 = r2;
        r0_14 = r9_1;
        *gptr<u16>(r5_1 + 0x3cu) = u16(r3);  // (from the original)
    }
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_14, r1_12, r2_14, r3_14);
    r1_1 = guest::cpu()->r[1];
L_2ffad0:;
    r0_1 = r7_1;
L_2ffad4:;
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_002ff950
GUEST_EXPORT(0x002ff950, d_002ff950::f_002ff950);

// f_002ffc08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ffc08 {

struct __attribute__((packed)) Object_002ffc08_0 {
    u8 unknown_0[0x18];  // (not used here)
    u8 byte_18;
};
GUEST_OFFSET(Object_002ffc08_0, byte_18, 0x18);  // (from the original)


void f_002ffc08(gptr<Object_002ffc08_0> arg0, u32 r1) {
    u32 r1_1 = 0;
    r1_1 = u32(arg0->byte_18) & ~r1;
    arg0->byte_18 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_002ffc08
GUEST_EXPORT(0x002ffc08, d_002ffc08::f_002ffc08);

// f_002ffde0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ffde0 {


u32 f_002ffde0(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (s32(r1) < s32(3u)) {
        r1 = r1 + (r1 << 1);
        r0 = r0 + (r1 << 4);
    }
    r0_1 = r0 + 0xa8u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_002ffde0
GUEST_EXPORT(0x002ffde0, d_002ffde0::f_002ffde0);

// f_002ffdf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ffdf4 {

inline constexpr guest::Function<0x001b4a8c, u32(u32, u32, u32, u32)> call_001b4a8c;  // (from the original)
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> call_002fbd54;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x003084d0, u32(u32, u32, u32, u32)> call_003084d0;  // (from the original)
inline constexpr guest::Function<0x00613de4, u32(u32, u32, u32, u32)> call_00613de4;  // (from the original)

u32 f_002ffdf4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r5_1 = 0;
    u32 r8_1 = 0;
    u32 r7_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r1_4 = 0;
    u32 r0_5 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r1_5 = 0;
    u32 r0_6 = 0;
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_7 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_8 = 0;
    u32 r1_7 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r1_8 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r1_9 = 0;
    u32 r0_9 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_10 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r1_10 = 0;
    u32 r0_11 = 0;
    u32 r1_11 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r0_12 = 0;
    u32 r2_13 = 0;
    u32 r3_13 = 0;
    u32 r0_13 = 0;
    u32 r2_14 = 0;
    u32 r3_14 = 0;
    u32 r0_14 = 0;
    u32 r1_12 = 0;
    u32 r2_15 = 0;
    u32 r3_15 = 0;
    u32 r0_15 = 0;
    u32 r2_16 = 0;
    u32 r3_16 = 0;
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r0_1 = call_002fbd54(r1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_2fff64;
    }
    if (r3 >= 0x4000u) {  // (from the original)
        goto L_2fff64;
    }
    r5_1 = r0 + 0x100u;  // (from the original)
    r8_1 = r0 + 0x146u;  // (from the original)
    r7_1 = r0 + 0x142u;  // (from the original)
    if (u32(*gptr<u16>(r5_1 + 0x38u)) < r3) {  // (from the original)
        r1_2 = r0 + 0x4cu;  // (from the original)
        r0_2 = r0 + 0x7au;  // (from the original)
        call_001b4a8c(r0_2, r1_2, r2_1, r3_1);
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        r1_3 = r0 + 0x1eu;  // (from the original)
        r0_3 = r0 + 0x4cu;  // (from the original)
        call_001b4a8c(r0_3, r1_3, r2_2, r3_2);
        r2_3 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        r0_4 = r0 + 0x1eu;  // (from the original)
        call_001b4a8c(r0_4, r1, r2_3, r3_3);
        r2_4 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        r1_4 = r0 + 0xd8u;  // (from the original)
        r0_5 = r0 + 0x108u;  // (from the original)
        call_00613de4(r0_5, r1_4, r2_4, r3_4);
        r2_5 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
        r1_5 = r0 + 0xa8u;  // (from the original)
        r0_6 = r0 + 0xd8u;  // (from the original)
        call_00613de4(r0_6, r1_5, r2_5, r3_5);
        r1_6 = guest::cpu()->r[1];
        r2_6 = guest::cpu()->r[2];
        r3_6 = guest::cpu()->r[3];
        r0_7 = r0 + 0xa8u;  // (from the original)
        call_003084d0(r0_7, r1_6, r2_6, r3_6);
        r2_7 = guest::cpu()->r[2];
        r3_7 = guest::cpu()->r[3];
        r0_8 = u32(*gptr<u16>(r5_1 + 0x3au));  // (from the original)
        r1_7 = u32(*gptr<u16>(r5_1 + 0x38u));  // (from the original)
        *gptr<u16>(r5_1 + 0x38u) = u16(r3);  // (from the original)
        *gptr<u16>(r5_1 + 0x3cu) = u16(r0_8);  // (from the original)
        *gptr<u16>(r5_1 + 0x3au) = u16(r1_7);  // (from the original)
        call_002fc8e8(r8_1, r7_1, r2_7, r3_7);
        r2_8 = guest::cpu()->r[2];
        r3_8 = guest::cpu()->r[3];
        r1_8 = r0 + 0x13eu;  // (from the original)
        call_002fc8e8(r7_1, r1_8, r2_8, r3_8);
        r2_9 = guest::cpu()->r[2];
        r3_9 = guest::cpu()->r[3];
        guest::cpu()->r[13] += 0x20u;  // (from the original)
        return call_002fc8e8(r1_8, r2, r2_9, r3_9);
    }
    if (u32(*gptr<u16>(r5_1 + 0x3au)) < r3) {  // (from the original)
        r1_9 = r0 + 0x4cu;  // (from the original)
        r0_9 = r0 + 0x7au;  // (from the original)
        call_001b4a8c(r0_9, r1_9, r2_1, r3_1);
        r2_10 = guest::cpu()->r[2];
        r3_10 = guest::cpu()->r[3];
        r0_10 = r0 + 0x4cu;  // (from the original)
        call_001b4a8c(r0_10, r1, r2_10, r3_10);
        r2_11 = guest::cpu()->r[2];
        r3_11 = guest::cpu()->r[3];
        r1_10 = r0 + 0xd8u;  // (from the original)
        r0_11 = r0 + 0x108u;  // (from the original)
        call_00613de4(r0_11, r1_10, r2_11, r3_11);
        r1_11 = guest::cpu()->r[1];
        r2_12 = guest::cpu()->r[2];
        r3_12 = guest::cpu()->r[3];
        r0_12 = r0 + 0xd8u;  // (from the original)
        call_003084d0(r0_12, r1_11, r2_12, r3_12);
        r2_13 = guest::cpu()->r[2];
        r3_13 = guest::cpu()->r[3];
        r0_13 = u32(*gptr<u16>(r5_1 + 0x3au));  // (from the original)
        *gptr<u16>(r5_1 + 0x3au) = u16(r3);  // (from the original)
        *gptr<u16>(r5_1 + 0x3cu) = u16(r0_13);  // (from the original)
        call_002fc8e8(r8_1, r7_1, r2_13, r3_13);
        r2_14 = guest::cpu()->r[2];
        r3_14 = guest::cpu()->r[3];
        guest::cpu()->r[13] += 0x20u;  // (from the original)
        return call_002fc8e8(r7_1, r2, r2_14, r3_14);
    }
    r0_1 = u32(*gptr<u16>(r5_1 + 0x3cu));  // (from the original)
    if (r0_1 >= r3) {
        goto L_2fff64;
    }
    r0_14 = r0 + 0x7au;  // (from the original)
    call_001b4a8c(r0_14, r1, r2_1, r3_1);
    r1_12 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r0_15 = r0 + 0x108u;  // (from the original)
    call_003084d0(r0_15, r1_12, r2_15, r3_15);
    r2_16 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    *gptr<u16>(r5_1 + 0x3cu) = u16(r3);  // (from the original)
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    return call_002fc8e8(r8_1, r2, r2_16, r3_16);
L_2fff64:;
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_002ffdf4
GUEST_EXPORT(0x002ffdf4, d_002ffdf4::f_002ffdf4);

// f_002fff68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fff68 {


u32 f_002fff68(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    if (s32(r1) >= s32(3u)) {
        r0_1 = r0 + 0x1eu;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r1_1 = (r1 << 3) - r1 + (r1 << 4);
    r0_2 = r0 + (r1_1 << 1) + 0x1eu;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_002fff68
GUEST_EXPORT(0x002fff68, d_002fff68::f_002fff68);
