// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_001904f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001904f0 {


u32 f_001904f0(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3_1 = 0;
    r2 = 0u;
    do {
L_1904f4:;
        r3_1 = *gptr<u32>(r0 + 0x4cu + (r2 << 2));  // (from the original)
        if (!(r3_1 != r1)) {
            return 1u;
        }
        if (r3_1 == 0) {
            *gptr<u32>(r0 + 0x4cu + (r2 << 2)) = u32(r1);  // (from the original)
            return 1u;
        }
        r2 = r2 + 1u;
        guest::preempt();
    } while (r2 < 4u);
    return 0u;
}

}  // namespace d_001904f0
GUEST_EXPORT(0x001904f0, d_001904f0::f_001904f0);

// f_001905b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001905b0 {


u32 f_001905b0(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3_1 = 0;
    r2 = 0u;
    do {
L_1905b4:;
        r3_1 = *gptr<u32>(r0 + 0x1cu + (r2 << 2));  // (from the original)
        if (!(r3_1 != r1)) {
            return 1u;
        }
        if (r3_1 == 0) {
            *gptr<u32>(r0 + 0x1cu + (r2 << 2)) = u32(r1);  // (from the original)
            return 1u;
        }
        r2 = r2 + 1u;
        guest::preempt();
    } while (r2 < 0xcu);  // (from the original)
    return 0u;
}

}  // namespace d_001905b0
GUEST_EXPORT(0x001905b0, d_001905b0::f_001905b0);

// f_00190670: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00190670 {


u32 f_00190670(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3_1 = 0;
    r2 = 0u;
    do {
L_190674:;
        r3_1 = *gptr<u32>(r0 + 0x5cu + (r2 << 2));  // (from the original)
        if (!(r3_1 != r1)) {
            return 1u;
        }
        if (r3_1 == 0) {
            *gptr<u32>(r0 + 0x5cu + (r2 << 2)) = u32(r1);  // (from the original)
            return 1u;
        }
        r2 = r2 + 1u;
        guest::preempt();
    } while (r2 < 4u);
    return 0u;
}

}  // namespace d_00190670
GUEST_EXPORT(0x00190670, d_00190670::f_00190670);

// f_00191368: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00191368 {

inline constexpr guest::Function<0x00297b60, u32(u32, u32, u32, u32)> call_00297b60;  // (from the original)
inline constexpr guest::Function<0x002999a0, u32(u32, u32, u32, u32)> call_002999a0;  // (from the original)
inline constexpr guest::Function<0x0031d258, u32(u32, u32, u32, u32)> call_0031d258;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)

u32 f_00191368(u32 r0, float S0, float S1, float S2, float S3, float S4, float S5, float S6, float S7, float S8) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_2 = 0;
    u32 r4_1 = 0;
    float S0_1 = 0;
    u32 r3_2 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S4_1 = 0;
    u32 r0_2 = 0;
    float S7_1 = 0;
    float S8_1 = 0;
    u32 r1_3 = 0;
    float S5_1 = 0;
    float S6_1 = 0;
    float S0_2 = 0;
    u32 r1_4 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    float S0_3 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    float S3_2 = 0;
    float S4_2 = 0;
    float S5_2 = 0;
    float S6_2 = 0;
    float S7_2 = 0;
    float S8_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    float S0_4 = 0;
    float S1_3 = 0;
    float S2_3 = 0;
    float S3_3 = 0;
    float S4_3 = 0;
    float S5_3 = 0;
    float S6_3 = 0;
    float S7_3 = 0;
    float S8_3 = 0;
    u32 r1_5 = 0;
    float S0_5 = 0;
    float S1_4 = 0;
    r13 = r13 - 0x30u;  // (from the original)
    r5 = r0;
    r4 = 0u;
    r6 = r0 + 0x78acu;  // (from the original)
    do {
L_191380:;
        r1_1 = r5 + ((r4 << 3) - r4 << 2);
        r0_1 = *gptr<u32>(r5 + ((r4 << 7) - ((r4 << 3) - r4) << 3) + 0x904u);  // (from the original)
        r2_1 = r1_1 + 0x8000u;  // (from the original)
        r3_1 = r0_1 + 0x28u;  // (from the original)
        *gptr<u32>(r2_1 + 0x50u) = u32(r0_1);  // (from the original)
        r1_2 = r1_1 + 0x8044u;  // (from the original)
        *gptr<u32>(r1_2 + 0x10u) = u32(*gptr<u32>(r0_1 + 0x28u));  // (from the original)
        *gptr<u32>(r1_2 + 0x14u) = u32(*gptr<u32>(r3_1 + 4u));  // (from the original)
        *gptr<u32>(r1_2 + 0x18u) = u32(*gptr<u32>(r3_1 + 8u));  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        guest::cpu()->s[5] = S5;
        guest::cpu()->s[6] = S6;
        guest::cpu()->s[7] = S7;
        guest::cpu()->s[8] = S8;
        call_002999a0(r6, r1_2, r2_1, r3_1);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        S3 = guest::cpu()->s[3];
        S4 = guest::cpu()->s[4];
        S5 = guest::cpu()->s[5];
        S6 = guest::cpu()->s[6];
        S7 = guest::cpu()->s[7];
        S8 = guest::cpu()->s[8];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(0x1bu));  // (from the original)
    r4_1 = 0x84839cu + 0x228u;  // (from the original)
    S0_1 = std::bit_cast<float>(*gptr<u32>(0x84839cu + 0x224u));  // (from the original)
    r3_2 = 0x84839cu + 0x238u;  // (from the original)
    S1_1 = std::bit_cast<float>(*gptr<u32>(r4_1));
    S2_1 = std::bit_cast<float>(*gptr<u32>(r4_1 + 4));
    S3_1 = std::bit_cast<float>(*gptr<u32>(r4_1 + 8));
    S4_1 = std::bit_cast<float>(*gptr<u32>(r4_1 + 0xc));  // (from the original)
    r0_2 = r5 + 0x7890u;  // (from the original)
    S7_1 = std::bit_cast<float>(*gptr<u32>(*gptr<u32>(0x145cu + r5) + 0x28u));  // (from the original)
    S8_1 = std::bit_cast<float>(*gptr<u32>(*gptr<u32>(r5 + 0x904u) + 0x28u));  // (from the original)
    r1_3 = r13 + 0x14u;  // (from the original)
    S5_1 = std::bit_cast<float>(*gptr<u32>(r3_2));
    S6_1 = std::bit_cast<float>(*gptr<u32>(r3_2 + 4));
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r13 + 4) = u32(std::bit_cast<u32>(S1_1));
    *gptr<u32>(r13 + 8) = u32(std::bit_cast<u32>(S2_1));
    *gptr<u32>(r13 + 0xc) = u32(std::bit_cast<u32>(S3_1));  // (from the original)
    *gptr<u32>(r13 + 0x10) = u32(std::bit_cast<u32>(S4_1));  // (from the original)
    S0_2 = S7_1 - S8_1;
    *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(S0_2));
    *gptr<u32>(r1_3) = u32(std::bit_cast<u32>(S5_1));
    *gptr<u32>(r1_3 + 4) = u32(std::bit_cast<u32>(S6_1));
    *gptr<u32>(r13 + 0xcu) = u32(*gptr<u32>(r0_2));  // (from the original)
    r1_4 = r13;
    *gptr<u32>(r13 + 0x10u) = u32(*gptr<u32>(r0_2));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    guest::cpu()->s[6] = S6_1;
    guest::cpu()->s[7] = S7_1;
    guest::cpu()->s[8] = S8_1;
    call_0031d258(r6, r1_4, 0u, r3_2);
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    S3_2 = guest::cpu()->s[3];
    S4_2 = guest::cpu()->s[4];
    S5_2 = guest::cpu()->s[5];
    S6_2 = guest::cpu()->s[6];
    S7_2 = guest::cpu()->s[7];
    S8_2 = guest::cpu()->s[8];
    r0_3 = r5 + 0x4e8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    guest::cpu()->s[3] = S3_2;
    guest::cpu()->s[4] = S4_2;
    guest::cpu()->s[5] = S5_2;
    guest::cpu()->s[6] = S6_2;
    guest::cpu()->s[7] = S7_2;
    guest::cpu()->s[8] = S8_2;
    r0_4 = call_0056878c(r0_3, 0x848798u, r2_2, r3_3);  // (from the original)
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    S0_4 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    S2_3 = guest::cpu()->s[2];
    S3_3 = guest::cpu()->s[3];
    S4_3 = guest::cpu()->s[4];
    S5_3 = guest::cpu()->s[5];
    S6_3 = guest::cpu()->s[6];
    S7_3 = guest::cpu()->s[7];
    S8_3 = guest::cpu()->s[8];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_3;
    guest::cpu()->s[2] = S2_3;
    guest::cpu()->s[3] = S3_3;
    guest::cpu()->s[4] = S4_3;
    guest::cpu()->s[5] = S5_3;
    guest::cpu()->s[6] = S6_3;
    guest::cpu()->s[7] = S7_3;
    guest::cpu()->s[8] = S8_3;
    call_00297b60(r6, r0_4, r2_3, r3_4);
    r1_5 = guest::cpu()->r[1];
    S0_5 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    *gptr<u8>(r5 + 0x7fa8u) = u8(0u);  // (from the original)
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_4;
    return 0u;
}

}  // namespace d_00191368
GUEST_EXPORT(0x00191368, d_00191368::f_00191368);

// f_001916f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001916f0 {

inline guest::global<u32, 0x00191884> global_00191884;  // (from the original)
inline guest::global<u32, 0x00191888> global_00191888;  // (from the original)
inline constexpr guest::Function<0x002b6a00, u32(u32, u32, u32, u32)> call_002b6a00;  // (from the original)
inline constexpr guest::Function<0x002f6a30, u32(u32, u32, u32, u32)> call_002f6a30;  // (from the original)
inline constexpr guest::Function<0x002f6e98, u32(u32, u32, u32, u32)> call_002f6e98;  // (from the original)
inline constexpr guest::Function<0x002f7508, u32(u32, u32, u32, u32)> call_002f7508;  // (from the original)
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)
inline constexpr guest::Function<0x006aa944, u32(u32, u32, u32, u32)> call_006aa944;  // (from the original)

u32 f_001916f0(u32 r0, float S0, float S1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r9_1 = 0;
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 r3_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r8_1 = 0;
    u32 r12_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 ea_4 = 0;
    u32 r0_3 = 0;
    u32 ea_5 = 0;
    u32 r1_4 = 0;
    u32 ea_6 = 0;
    u32 ea_7 = 0;
    u32 ea_8 = 0;
    u32 r0_4 = 0;
    u32 ea_9 = 0;
    u32 ea_10 = 0;
    u32 ea_11 = 0;
    u32 ea_12 = 0;
    u32 ea_13 = 0;
    u32 ea_14 = 0;
    u32 r0_5 = 0;
    u32 r1_5 = 0;
    u32 r2_2 = 0;
    u32 ea_15 = 0;
    u32 ea_16 = 0;
    u32 r1_6 = 0;
    u32 r1_7 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r3_2 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r1_8 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    u32 r1_9 = 0;
    u32 r6_2 = 0;
    u32 r5_2 = 0;
    u32 r3_4 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    u32 r0_10 = 0;
    u32 r1_10 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    float S0_4 = 0;
    float S1_4 = 0;
    u32 r0_11 = 0;
    u32 r6_3 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 res_1 = 0;
    u32 r0_14 = 0;
    float S0_5 = 0;
    float S1_5 = 0;
    r2_1 = r0 + 0x58u;  // (from the original)
    r7 = r0;
    r13 = r13 - 0x90u;  // (from the original)
    r0_1 = r0 + 0x4e8u;  // (from the original)
    r9_1 = r13 + 0x4cu;  // (from the original)
    ea_1 = 0x84839cu + 0x248u;  // (from the original)
    r1_1 = *gptr<u32>(ea_1);
    ea_2 = r13 + 0x1cu;  // (from the original)
    *gptr<u32>(ea_2) = u32(r0_1);
    ea_3 = 0x84839cu + 0x24cu;  // (from the original)
    r3_1 = *gptr<u32>(ea_3);
    r5_1 = *gptr<u32>(ea_3 + 4);
    r6_1 = *gptr<u32>(ea_3 + 8);
    r8_1 = *gptr<u32>(ea_3 + 0xc);  // (from the original)
    r12_1 = *gptr<u32>(ea_3 + 0x10);  // (from the original)
    *gptr<u32>(r9_1) = u32(r1_1);
    *gptr<u32>(r9_1 + 4) = u32(r3_1);
    *gptr<u32>(r9_1 + 8) = u32(r5_1);
    *gptr<u32>(r9_1 + 0xc) = u32(r6_1);  // (from the original)
    *gptr<u32>(r9_1 + 0x10) = u32(r8_1);  // (from the original)
    *gptr<u32>(r9_1 + 0x14) = u32(r12_1);  // (from the original)
    r1_2 = *gptr<u32>(0x84839cu + 0x260u);  // (from the original)
    *gptr<u32>(r13 + 0x48u) = u32(r0_1);  // (from the original)
    r0_2 = r7 + 0x7798u;  // (from the original)
    *gptr<u32>(r13 + 0x44u) = u32(r2_1);  // (from the original)
    *gptr<u32>(r13 + 0x64u) = u32(r1_2);  // (from the original)
    r1_3 = r13 + 0x44u;  // (from the original)
    *gptr<u32>(r13 + 0x20u) = u32(r0_2);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    call_002f6e98(r0_2, r1_3, 0u, r3_1);
    ea_4 = r13 + 0x20u;  // (from the original)
    r0_3 = *gptr<u32>(ea_4);
    r9 = 0u;
    S0 = std::bit_cast<float>(*global_00191884);
    S1 = std::bit_cast<float>(*global_00191888);
    ea_5 = r0_3 + 0xd4u;  // (from the original)
    r11 = 0x1000411u;  // (from the original)
    r1_4 = *gptr<u32>(ea_5) | 0x40u;  // (from the original)
    ea_6 = r0_3 + 0xd4u;  // (from the original)
    *gptr<u32>(ea_6) = u32(r1_4);
    ea_7 = r13;
    *gptr<u32>(ea_7) = u32(r9);
    ea_8 = r13 + 4u;
    *gptr<u32>(ea_8) = u32(r9);
    r0_4 = r13 + 8u;
    ea_9 = r13 + 8u;
    *gptr<u32>(ea_9) = u32(r9);
    ea_10 = r13 + 0xcu;  // (from the original)
    *gptr<u32>(ea_10) = u32(r9);
    ea_11 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(ea_11) = u32(r9);
    ea_12 = r13 + 0x14u;  // (from the original)
    *gptr<u32>(ea_12) = u32(r9);
    ea_13 = r13 + 0x18u;  // (from the original)
    *gptr<u32>(ea_13) = u32(r9);
    r8 = 1u;
    *gptr<u32>(r0_4) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0_4 + 4) = u32(std::bit_cast<u32>(S1));
    ea_14 = 0x84839cu + 0x264u;  // (from the original)
    r0_5 = *gptr<u32>(ea_14);
    r1_5 = *gptr<u32>(ea_14 + 4);
    r2_2 = *gptr<u32>(ea_14 + 8);
    r10 = r11 & ~r8;
    ea_15 = r13 + 0x2cu;  // (from the original)
    *gptr<u32>(ea_15) = u32(r0_5);
    *gptr<u32>(ea_15 + 4) = u32(r1_5);
    *gptr<u32>(ea_15 + 8) = u32(r2_2);
    r3 = r13 + 0x38u;  // (from the original)
    ea_16 = 0x84839cu + 0x270u;  // (from the original)
    r1_6 = *gptr<u32>(ea_16 + 4);
    r2 = *gptr<u32>(ea_16 + 8);
    r4 = 0u;
    *gptr<u32>(r3) = u32(*gptr<u32>(ea_16));
    *gptr<u32>(r3 + 4) = u32(r1_6);
    *gptr<u32>(r3 + 8) = u32(r2);
    do {
L_1917bc:;
        r1_7 = *gptr<u32>(r13 + 0x2cu + (r4 << 2));  // (from the original)
        r0_6 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0_7 = call_0056878c(r0_6, r1_7, r2, r3);
        r3_2 = guest::cpu()->r[3];
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
        *gptr<u32>(r13) = u32(r0_7);
        r1_8 = *gptr<u32>(r13 + 0x38u + (r4 << 2));  // (from the original)
        r0_8 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        r0_9 = call_004b4fc0(r0_8, r1_8, 1u, r3_2);
        r2_3 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        S0_2 = guest::cpu()->s[0];
        S1_2 = guest::cpu()->s[1];
        *gptr<u32>(r13 + 4u) = u32(r0_9);
        r1_9 = r13;
        r6_2 = r7 + ((r4 << 3) - r4 << 5);
        r5_2 = r6_2 + 0x74f8u;  // (from the original)
        *gptr<u32>(r13 + 0x14u) = u32(r4);  // (from the original)
        *gptr<u32>(r13 + 0x10u) = u32(r9);  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        call_002b6a00(r5_2, r1_9, r2_3, r3_3);
        r3_4 = guest::cpu()->r[3];
        S0_3 = guest::cpu()->s[0];
        S1_3 = guest::cpu()->s[1];
        r0_10 = *gptr<u32>(r13 + 0x20u);  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_3;
        call_002f7508(r0_10, r5_2, 1u, r3_4);
        r1_10 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
        S0_4 = guest::cpu()->s[0];
        S1_4 = guest::cpu()->s[1];
        r0_11 = r6_2 + 0x75c4u;  // (from the original)
        r6_3 = r6_2 + 0x75d2u;  // (from the original)
        *gptr<u32>(r0_11) = u32(r11);
        *gptr<u8>(r6_3) = u8(r8);
        *gptr<u32>(r5_2 + 0xd0u) = u32(r10);  // (from the original)
        *gptr<u8>(r5_2 + 0xdbu) = u8(r8);  // (from the original)
        *gptr<u8>(r5_2 + 0xdcu) = u8(r8);  // (from the original)
        r0_12 = *gptr<u32>(r13);
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_4;
        guest::cpu()->s[1] = S1_4;
        call_006aa944(r0_12, r1_10, r2_4, r3_5);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r0_13 = r7 + (r4 << 2) + 0x7800u;  // (from the original)
        r4 = r4 + 1u;
        res_1 = r4 - 3u;
        *gptr<u32>(r0_13 + 0x9cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
        guest::preempt();
    } while (res_1 >> 0x1f != ((r4 ^ 3u) & (r4 ^ res_1)) >> 0x1f);  // (from the original)
    r0_14 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    call_002f6a30(r0_14, 0u, r2, r3);
    S0_5 = guest::cpu()->s[0];
    S1_5 = guest::cpu()->s[1];
    *gptr<u16>(0x7868u + r7) = u16(3u);  // (from the original)
    r13 = r13 + 0x90u;  // (from the original)
    guest::cpu()->r[1] = 0x7868u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_5;
    return 3u;
}

}  // namespace d_001916f0
GUEST_EXPORT(0x001916f0, d_001916f0::f_001916f0);

// f_00194504: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00194504 {

struct __attribute__((packed)) Object_00194504_0 {
    u8 unknown_0[0x9c0];  // (not used here)
    u32 word_9c0;
    u8 unknown_9c4[0x6188];  // (not used here)
    u32 word_6b4c;
    u8 unknown_6b50[0x4];  // (not used here)
    u32 word_6b54;
    u8 unknown_6b58[0x18];  // (not used here)
    u32 word_6b70;
};
GUEST_OFFSET(Object_00194504_0, word_9c0, 0x9c0);  // (from the original)
GUEST_OFFSET(Object_00194504_0, word_6b4c, 0x6b4c);  // (from the original)
GUEST_OFFSET(Object_00194504_0, word_6b54, 0x6b54);  // (from the original)
GUEST_OFFSET(Object_00194504_0, word_6b70, 0x6b70);  // (from the original)

struct __attribute__((packed)) Object_00194504_2 {
    u32 word_0;
};
GUEST_OFFSET(Object_00194504_2, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_00194504_3 {
    u32 word_0;
};
GUEST_OFFSET(Object_00194504_3, word_0, 0x0);  // (from the original)

inline guest::global<u32, 0x001945fc> global_001945fc;  // (from the original)

u32 f_00194504(gptr<Object_00194504_0> arg0, u32 r1, gptr<Object_00194504_2> arg2, gptr<Object_00194504_3> arg3, float S0) {
    u32 r0 = arg0.addr();
    u32 r3 = arg3.addr();
    u32 r8_1 = 0;
    float S1_1 = 0;
    u32 r4_1 = 0;
    u32 r9_1 = 0;
    u32 r7_1 = 0;
    u32 r5_1 = 0;
    u32 r12_1 = 0;
    float S2_1 = 0;
    float S1_2 = 0;
    u32 r1_1 = 0;
    float S0_1 = 0;
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r8_1 = r0 + 0x6b54u;  // (from the original)
    S1_1 = std::bit_cast<float>(*global_001945fc);
    r4_1 = arg0->word_9c0 + 0x48u;  // (from the original)
    r9_1 = r0 + 0x6b4cu;  // (from the original)
    r7_1 = 0x849648u - 0x60u;  // (from the original)
    r5_1 = *gptr<u32>(r7_1 + (arg0->word_6b4c << 3)) - 1u;
    r12_1 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f((std::bit_cast<float>(arg3->word_0) + std::bit_cast<float>(*gptr<u32>(r4_1)) * S1_1) / std::bit_cast<float>(*gptr<u32>(0x849648u + (arg0->word_6b54 << 2))) + S0))) + arg0->word_6b70;  // (from the original)
    if (r12_1 >> 0x1f != (r12_1 & (r12_1 ^ r12_1)) >> 0x1f) {  // (from the original)
        r12_1 = 0u;
        goto L_19458c;
    }
    if (s32(r5_1) < s32(r12_1)) {
        r12_1 = r5_1;
    }
L_19458c:;
    *gptr<u32>(r1) = u32(r12_1);
    S2_1 = -std::bit_cast<float>(*gptr<u32>(r3 + 4u)) + std::bit_cast<float>(*gptr<u32>(r4_1 + 4u)) * S1_1;
    S1_2 = S2_1 / std::bit_cast<float>(*gptr<u32>(0x849648u + (*gptr<u32>(r8_1) << 2)));  // (from the original)
    r1_1 = *gptr<u32>(r7_1 + (*gptr<u32>(r9_1) << 3) + 4u) - 1u;
    S0_1 = std::bit_cast<float>(vcvt_sz_f(S1_2 + S0));
    r0_1 = std::bit_cast<u32>(S0_1) + *gptr<u32>(r0 + 0x6b74u);  // (from the original)
    if (r0_1 >> 0x1f != (r0_1 & (r0_1 ^ r0_1)) >> 0x1f) {  // (from the original)
        r0_1 = 0u;
        goto L_1945f0;
    }
    if (s32(r1_1) < s32(r0_1)) {
        r0_1 = r1_1;
    }
L_1945f0:;
    arg2->word_0 = u32(r0_1);
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_2;
    return r0_1;
}

}  // namespace d_00194504
GUEST_EXPORT(0x00194504, d_00194504::f_00194504);

// f_00194bc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00194bc0 {


u32 f_00194bc0(u32 r0, u32 r1) {
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    r2_1 = r1 & 0xfu;  // (from the original)
    r0_1 = r0 & 0xfu | r2_1 << 4;  // (from the original)
    *gptr<u32>(0x94f85cu + 4u) = u32(r0_1);  // (from the original)
    guest::cpu()->r[1] = 0x94f85cu;  // (from the original)
    return r0_1;
}

}  // namespace d_00194bc0
GUEST_EXPORT(0x00194bc0, d_00194bc0::f_00194bc0);

// f_00194ff4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00194ff4 {

struct __attribute__((packed)) Object_00194ff4_0 {
    u8 unknown_0[0x9c0];  // (not used here)
    u32 word_9c0;
    u8 unknown_9c4[0x6190];  // (not used here)
    u32 word_6b54;
    u8 unknown_6b58[0x18];  // (not used here)
    u32 word_6b70;
    u32 word_6b74;
};
GUEST_OFFSET(Object_00194ff4_0, word_9c0, 0x9c0);  // (from the original)
GUEST_OFFSET(Object_00194ff4_0, word_6b54, 0x6b54);  // (from the original)
GUEST_OFFSET(Object_00194ff4_0, word_6b70, 0x6b70);  // (from the original)
GUEST_OFFSET(Object_00194ff4_0, word_6b74, 0x6b74);  // (from the original)

struct __attribute__((packed)) Object_00194ff4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00194ff4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00194ff4_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00194ff4_1, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x00195094> global_00195094;  // (from the original)
inline guest::global<u32, 0x00195098> global_00195098;  // (from the original)

u32 f_00194ff4(gptr<Object_00194ff4_0> arg0, gptr<Object_00194ff4_1> arg1, u32 r2, u32 r3) {
    float S0_1 = 0;
    u32 r0_1 = 0;
    float S3_1 = 0;
    float S1_1 = 0;
    u32 r0_2 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    S0_1 = std::bit_cast<float>(*global_00195094);
    r0_1 = arg0->word_9c0 + 0x48u;  // (from the original)
    S3_1 = std::bit_cast<float>(*global_00195098);
    arg1->word_0 = u32(std::bit_cast<u32>((float(s32(std::bit_cast<u32>(std::bit_cast<float>(r2 - arg0->word_6b70)))) + S0_1) * std::bit_cast<float>(*gptr<u32>(0x849648u + (arg0->word_6b54 << 2))) - std::bit_cast<float>(*gptr<u32>(r0_1)) * S0_1));  // (from the original)
    S1_1 = std::bit_cast<float>(*gptr<u32>(r0_1 + 4u)) * S0_1;
    r0_2 = r3 - arg0->word_6b74;
    S0_2 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r0_2)))) + S0_1;
    S1_2 = S1_1 - S0_2 * std::bit_cast<float>(*gptr<u32>(0x849648u + (arg0->word_6b54 << 2)));  // (from the original)
    arg1->word_4 = u32(std::bit_cast<u32>(S1_2));
    arg1->word_8 = u32(std::bit_cast<u32>(S3_1));
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return r0_2;
}

}  // namespace d_00194ff4
GUEST_EXPORT(0x00194ff4, d_00194ff4::f_00194ff4);

// f_00195488: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00195488 {


u32 f_00195488(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    r0_1 = r1 & 0xfu | (r0 & 0xfu) << 8;  // (from the original)
    r0_2 = r0_1 | 0x1000u;  // (from the original)
    *gptr<u32>(0x94f85cu + 4u) = u32(r0_2);  // (from the original)
    guest::cpu()->r[1] = 0x94f85cu;  // (from the original)
    return r0_2;
}

}  // namespace d_00195488
GUEST_EXPORT(0x00195488, d_00195488::f_00195488);

// f_00195d74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00195d74 {

struct __attribute__((packed)) Object_00195d74_0 {
    u8 unknown_0[0x9f0];  // (not used here)
    u32 word_9f0;
    u8 unknown_9f4[0x6164];  // (not used here)
    u32 word_6b58;
    u32 word_6b5c;
    u8 unknown_6b60[0xc];  // (not used here)
    u32 word_6b6c;
};
GUEST_OFFSET(Object_00195d74_0, word_9f0, 0x9f0);  // (from the original)
GUEST_OFFSET(Object_00195d74_0, word_6b58, 0x6b58);  // (from the original)
GUEST_OFFSET(Object_00195d74_0, word_6b5c, 0x6b5c);  // (from the original)
GUEST_OFFSET(Object_00195d74_0, word_6b6c, 0x6b6c);  // (from the original)

inline constexpr guest::Function<0x001b3340, u32(u32, u32, u32, u32)> call_001b3340;  // (from the original)

u32 f_00195d74(gptr<Object_00195d74_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r4_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    r3_1 = arg0->word_6b5c;
    r2_1 = arg0->word_6b58;
    r13 = r13 - 0x18u;  // (from the original)
    *gptr<u32>(r13) = u32(arg0->word_9f0);
    *gptr<u32>(r13 + 4) = u32(r2_1);
    *gptr<u32>(r13 + 8) = u32(r3_1);
    r4_1 = r0 + 0x6b6cu;  // (from the original)
    r1_1 = r13;
    r2_2 = arg0->word_6b6c & 0xffu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001b3340(0x98b2b8u, r1_1, r2_2, r3_1);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r0_1 = r13;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_00195d74
GUEST_EXPORT(0x00195d74, d_00195d74::f_00195d74);

// f_00195dd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00195dd4 {

struct __attribute__((packed)) Object_00195dd4_0 {
    u8 unknown_0[0xa2c];  // (not used here)
    u8 byte_a2c;
    u8 unknown_a2d[0x613f];  // (not used here)
    u32 word_6b6c;
};
GUEST_OFFSET(Object_00195dd4_0, byte_a2c, 0xa2c);  // (from the original)
GUEST_OFFSET(Object_00195dd4_0, word_6b6c, 0x6b6c);  // (from the original)

inline guest::global<u8, 0x0094f85e> global_0094f85e;  // (from the original)
inline constexpr guest::Function<0x00134544, u32(u32, u32, u32, u32)> call_00134544;  // (from the original)
inline constexpr guest::Function<0x0070ba0c, u32(u32, u32, u32, u32)> call_0070ba0c;  // (from the original)

u32 f_00195dd4(gptr<Object_00195dd4_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r12 = guest::cpu()->r[12];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r4_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r2_2 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r5_1 = 0;
    u32 r12_1 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 res_3 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r12);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r4_1 = r0;
    r1_1 = *gptr<u32>(r4_1 + (u32(arg0->byte_a2c) << 2) + 0xa1cu);  // (from the original)
    r2_1 = arg0->word_6b6c & 0xffu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0070ba0c(0x98b2b8u, r1_1, r2_1, r3);  // (from the original)
    r3_1 = guest::cpu()->r[3];
    r2_2 = *gptr<u32>(0x6b60u + r4_1);  // (from the original)
    r0_1 = *gptr<u32>(r4_1 + 0x9f0u);  // (from the original)
    r1_2 = *gptr<u32>(r4_1 + (u32(*gptr<u8>(r4_1 + 0xa2cu)) << 2) + 0xa24u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00134544(r0_1, r1_2, r2_2, r3_1);
    r1 = guest::cpu()->r[1];
    r0 = u32(*global_0094f85e);
    if (r0 == 0) {
        goto L_195eb4;
    }
    r7 = 0x849148u;  // (from the original)
    r14 = *gptr<u32>(r4_1 + 0x9f0u);  // (from the original)
    r4 = 0u;
    r10 = 0x8fu;  // (from the original)
    r1 = r4;
    r6 = 1u;
    r8 = r7 + 0x200u;  // (from the original)
    r11 = r10 + 0x8800u;  // (from the original)
    r9 = 0xfu;  // (from the original)
L_195e4c:;
    r2 = 0u;
    r3 = 0x20u;  // (from the original)
    r0 = r14 + (r4 << 1);
L_195e58:;
    r5_1 = lsl_r(r6, r2 & 0xff);  // (from the original)
    if ((*gptr<u32>(r7 + (r1 << 2)) & r5_1) != 0) {
        if ((*gptr<u32>(r8 + (r1 << 2)) & r5_1) == 0) {
            *gptr<u16>(r0) = u16(r11);
        } else {
            *gptr<u16>(r0) = u16(r10);
        }
        goto L_195e94;
    }
    r12_1 = u32(*gptr<u16>(r0));
    res_1 = r9 & ~r12_1;
    if (res_1 != 0) {
        goto L_195e94;
    }
    *gptr<u16>(r0) = u16(r12_1 & ~0xfu | 0xcu);  // (from the original)
L_195e94:;
    res_2 = r3 - 1u;
    r3 = res_2;
    r0 = r0 + 2u;
    r2 = r2 + 1u;
    if (res_2 != 0) {
        guest::preempt();
        goto L_195e58;
    }
    r1 = r1 + 1u;
    res_3 = r1 - 0x80u;  // (from the original)
    r4 = r4 + 0x20u;  // (from the original)
    if (res_3 >> 0x1f != ((r1 ^ 0x80u) & (r1 ^ res_3)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_195e4c;
    }
L_195eb4:;
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00195dd4
GUEST_EXPORT(0x00195dd4, d_00195dd4::f_00195dd4);

// f_00197fa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00197fa4 {

inline constexpr guest::Function<0x001c4bf4, u32(u32, u32, u32, u32)> call_001c4bf4;  // (from the original)
inline constexpr guest::Function<0x001c4c14, u32(u32, u32, u32, u32)> call_001c4c14;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x0070d904, u32(u32, u32, u32, u32)> call_0070d904;  // (from the original)

u32 f_00197fa4(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r9_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r3_2 = 0;
    u32 r5_1 = 0;
    u32 res_1 = 0;
    u32 ea_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 res_2 = 0;
    u32 r0_6 = 0;
    u32 ea_3 = 0;
    u32 r4_1 = 0;
    u32 r5_2 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r9_2 = 0;
    u32 r10_1 = 0;
    u32 r11_1 = 0;
    u32 r0_7 = 0;
    u32 r2_2 = 0;
    ea_1 = r13 - 0x34;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r3);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r4);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x20) = u32(r8);  // (from the original)
    *gptr<u32>(ea_1 + 0x24) = u32(r9);  // (from the original)
    *gptr<u32>(ea_1 + 0x28) = u32(r10);  // (from the original)
    *gptr<u32>(ea_1 + 0x2c) = u32(r11);  // (from the original)
    *gptr<u32>(ea_1 + 0x30) = u32(r14);  // (from the original)
    r13 = r13 - 0x448u;  // (from the original)
    r6 = r1;
    r8 = r13;
    r7 = r2;
    guest::cpu()->r[13] = r13;
    call_002f825c(r8, 0x400u, r2, r3);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r9_1 = r13 + 0x400u;  // (from the original)
    r4 = 0u;
    r1_1 = *gptr<u32>(r0 + (u32(*gptr<u8>(r0 + 0x9f4u)) << 2) + 0x9e8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001c4c14(r9_1, r1_1, r2_1, r3_1);
    r0_1 = r0 + 0x900u;  // (from the original)
    *gptr<u32>(r13 + 0x40cu) = u32(r0_1);  // (from the original)
    r3_2 = u32(*gptr<u16>(r0_1 + 0xe6u));  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001c4bf4(r9_1, r6, r7, r3_2);
    r3 = guest::cpu()->r[3];
    r9 = 0x849ef0u;  // (from the original)
    r11 = r0 + 0x6b4cu;  // (from the original)
    r10 = r9 + 0x10u;  // (from the original)
L_198014:;
    r5_1 = lsr_r(u32(*gptr<u8>(r8 + u32(s32(r4) >> 2))), r4 << 0x1e >> 0x1d & 0xff) & 3u;  // (from the original)
    res_1 = r6 + *gptr<u32>(r9 + (r5_1 << 2));
    r6 = res_1;
    r7 = r7 + *gptr<u32>(r10 + (r5_1 << 2));
    if (res_1 >> 0x1f) {  // (from the original)
        goto L_1980cc;
    }
    ea_2 = 0x8495e8u + (*gptr<u32>(r11) << 3);  // (from the original)
    if (s32(r6) >= s32(*gptr<u32>(ea_2))) {
        goto L_1980cc;
    }
    if (r7 >> 0x1f != (r7 & (r7 ^ r7)) >> 0x1f) {  // (from the original)
        goto L_1980cc;
    }
    if (s32(*gptr<u32>(ea_2 + 4u)) <= s32(r7)) {
        goto L_1980cc;
    }
    r0_2 = r13 + 0x400u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_0070d904(r0_2, r6, r7, r3);
    if (r0_3 != *gptr<u32>(r13 + 0x420u)) {  // (from the original)
        goto L_1980cc;
    }
    r3_3 = u32(*gptr<u16>(*gptr<u32>(r13 + 0x40cu) + 0xe6u));  // (from the original)
    r0_4 = r13 + 0x400u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001c4bf4(r0_4, r6, r7, r3_3);
    r4 = r4 + 1u;
    r0_5 = r4 & 3u;
    r1_2 = r8 + u32(s32(r4) >> 2);
    r3 = u32(*gptr<u8>(0x848f53u + r0_5));  // (from the original)
    *gptr<u8>(r1_2) = u8(u32(*gptr<u8>(r1_2)) & r3 | lsl_r(0u, r0_5 << 1 & 0xff));  // (from the original)
    guest::preempt();
    goto L_198014;
L_1980cc:;
    r1 = *gptr<u32>(r10 + (r5_1 << 2));
    r6 = r6 - *gptr<u32>(r9 + (r5_1 << 2));
    r7 = r7 - r1;
    if (r5_1 != 3u) {
        goto L_19812c;
    }
    do {
L_1980e4:;
        res_2 = r4 - 1u;
        r4 = res_2;
        if (res_2 >> 0x1f) {  // (from the original)
            r0_6 = r13 + 0x400u;  // (from the original)
            r13 = r13 + 0x424u;  // (from the original)
            ea_3 = r13;
            r13 = r13 + 0x24;  // (from the original)
            r4_1 = *gptr<u32>(ea_3);
            r5_2 = *gptr<u32>(ea_3 + 4);
            r6_1 = *gptr<u32>(ea_3 + 8);
            r7_1 = *gptr<u32>(ea_3 + 0xc);  // (from the original)
            r8_1 = *gptr<u32>(ea_3 + 0x10);  // (from the original)
            r9_2 = *gptr<u32>(ea_3 + 0x14);  // (from the original)
            r10_1 = *gptr<u32>(ea_3 + 0x18);  // (from the original)
            r11_1 = *gptr<u32>(ea_3 + 0x1c);  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[4] = r4_1;
            guest::cpu()->r[5] = r5_2;
            guest::cpu()->r[6] = r6_1;
            guest::cpu()->r[7] = r7_1;
            guest::cpu()->r[8] = r8_1;
            guest::cpu()->r[9] = r9_2;
            guest::cpu()->r[10] = r10_1;
            guest::cpu()->r[11] = r11_1;
            guest::cpu()->r[13] = r13;
            return r0_6;
        }
        r5_1 = lsr_r(u32(*gptr<u8>(r8 + u32(s32(r4) >> 2))), r4 << 0x1e >> 0x1d & 0xff) & 3u;  // (from the original)
        r1 = *gptr<u32>(r10 + (r5_1 << 2));
        r6 = r6 - *gptr<u32>(r9 + (r5_1 << 2));
        r7 = r7 - r1;
        guest::preempt();
    } while (r5_1 == 3u);
L_19812c:;
    r0_7 = r4 & 3u;
    r2_2 = r8 + u32(s32(r4) >> 2);
    r3 = u32(*gptr<u8>(0x848f53u + r0_7));  // (from the original)
    *gptr<u8>(r2_2) = u8(u32(*gptr<u8>(r2_2)) & r3 | lsl_r(r5_1 + 1u & 3u, r0_7 << 1 & 0xff));  // (from the original)
    guest::preempt();
    goto L_198014;
}

}  // namespace d_00197fa4
GUEST_EXPORT(0x00197fa4, d_00197fa4::f_00197fa4);

// f_001982d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001982d0 {

struct __attribute__((packed)) Object_001982d0_0 {
    u8 unknown_0[0x9f4];  // (not used here)
    u8 byte_9f4;
};
GUEST_OFFSET(Object_001982d0_0, byte_9f4, 0x9f4);  // (from the original)

inline constexpr guest::Function<0x001c4bf4, u32(u32, u32, u32, u32)> call_001c4bf4;  // (from the original)
inline constexpr guest::Function<0x001c4c14, u32(u32, u32, u32, u32)> call_001c4c14;  // (from the original)
inline constexpr guest::Function<0x0070d904, u32(u32, u32, u32, u32)> call_0070d904;  // (from the original)

u32 f_001982d0(gptr<Object_001982d0_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 res_3 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    r13 = r13 - 0x38u;  // (from the original)
    r11 = r3;
    *gptr<u32>(r13 + 0xcu) = u32(r1 - 8u);  // (from the original)
    r6 = r2 - 8u;
    r1_1 = *gptr<u32>(r0 + (u32(arg0->byte_9f4) << 2) + 0x9e8u);  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_001c4c14(r0_1, r1_1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r8 = 0u;
    r7 = r0 + 0x6b4cu;  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r0 + 0x900u);  // (from the original)
L_198314:;
    res_1 = *gptr<u32>(r13 + 0xcu) + r8;  // (from the original)
    r9 = res_1;
    if (res_1 >> 0x1f) {  // (from the original)
        goto L_1983b0;
    }
    r1 = *gptr<u32>(0x8495e8u + (*gptr<u32>(r7) << 3));  // (from the original)
    if (s32(r1) <= s32(r9)) {
        goto L_1983b0;
    }
    r1 = 1u;
    r10 = lsl_r(r1, r8 & 0xff);  // (from the original)
    r4 = 0u;
L_198340:;
    res_2 = r6 + r4;
    if (res_2 >> 0x1f) {  // (from the original)
        goto L_1983a4;
    }
    r1 = *gptr<u32>(r7);
    if (s32(*gptr<u32>(0x8495e8u + (r1 << 3) + 4u)) <= s32(res_2)) {  // (from the original)
        goto L_1983a4;
    }
    if ((u32(*gptr<u16>(r11 + (r4 << 1))) & r10) == 0) {
        goto L_1983a4;
    }
    r0_2 = r13;
    guest::cpu()->r[13] = r13;
    r0_3 = call_0070d904(r0_2, r9, res_2, r3);
    r3 = guest::cpu()->r[3];
    r1 = 0xfu;  // (from the original)
    res_3 = r1 & ~r0_3;
    if (res_3 == 0) {
        goto L_1983a4;
    }
    r3_1 = u32(*gptr<u16>(*gptr<u32>(r13 + 0x10u) + 0xe6u));  // (from the original)
    r0_4 = r13;
    guest::cpu()->r[13] = r13;
    call_001c4bf4(r0_4, r9, res_2, r3_1);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
L_1983a4:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(0x10u)) {  // (from the original)
        guest::preempt();
        goto L_198340;
    }
L_1983b0:;
    r8 = r8 + 1u;
    if (s32(r8) < s32(0x10u)) {  // (from the original)
        guest::preempt();
        goto L_198314;
    }
    r0_5 = r13;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_5;
}

}  // namespace d_001982d0
GUEST_EXPORT(0x001982d0, d_001982d0::f_001982d0);

// f_00198d64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00198d64 {

struct __attribute__((packed)) Object_00198d64_0 {
    u32 word_0;
    u8 unknown_4[0x24];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0x5c40];  // (not used here)
    u32 word_5c6c;
    u8 unknown_5c70[0x394];  // (not used here)
    u32 word_6004;
    u8 unknown_6008[0xe0];  // (not used here)
    u32 word_60e8;
};
GUEST_OFFSET(Object_00198d64_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00198d64_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_00198d64_0, word_5c6c, 0x5c6c);  // (from the original)
GUEST_OFFSET(Object_00198d64_0, word_6004, 0x6004);  // (from the original)
GUEST_OFFSET(Object_00198d64_0, word_60e8, 0x60e8);  // (from the original)

inline constexpr guest::Function<0x0023fb5c, u32(u32, u32, u32, u32)> call_0023fb5c;  // (from the original)
inline constexpr guest::Function<0x002b6ef8, u32(u32, u32, u32, u32)> call_002b6ef8;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f770c, u32(u32, u32, u32, u32)> call_002f770c;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x00317dec, u32(u32, u32, u32, u32)> call_00317dec;  // (from the original)
inline constexpr guest::Function<0x0031c92c, u32(u32, u32, u32, u32)> call_0031c92c;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32, u32, u32)> call_006aaa30;  // (from the original)

u32 f_00198d64(gptr<Object_00198d64_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_3 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_4 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_5 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r4_2 = 0;
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
    u32 r0_41 = 0;
    u32 r1_18 = 0;
    u32 r2_20 = 0;
    u32 r3_20 = 0;
    u32 r0_42 = 0;
    u32 r0_43 = 0;
    u32 r1_19 = 0;
    u32 r2_21 = 0;
    u32 r3_21 = 0;
    u32 r0_44 = 0;
    u32 r0_45 = 0;
    u32 r4_3 = 0;
    u32 r0_46 = 0;
    u32 r1_20 = 0;
    u32 r2_22 = 0;
    u32 r3_22 = 0;
    u32 r0_47 = 0;
    u32 r0_48 = 0;
    u32 r3_23 = 0;
    u32 r2_23 = 0;
    u32 r0_49 = 0;
    u32 r0_50 = 0;
    u32 r1_21 = 0;
    u32 r2_24 = 0;
    u32 r3_24 = 0;
    u32 r0_51 = 0;
    u32 r0_52 = 0;
    u32 r1_22 = 0;
    u32 r2_25 = 0;
    u32 r3_25 = 0;
    u32 r0_53 = 0;
    u32 r0_54 = 0;
    u32 r1_23 = 0;
    u32 r2_26 = 0;
    u32 r3_26 = 0;
    u32 r0_55 = 0;
    u32 r0_56 = 0;
    u32 r4_4 = 0;
    u32 r0_57 = 0;
    u32 r1_24 = 0;
    u32 r2_27 = 0;
    u32 r3_27 = 0;
    u32 r0_58 = 0;
    u32 r2_28 = 0;
    u32 r3_28 = 0;
    u32 r0_59 = 0;
    u32 r0_60 = 0;
    u32 r1_25 = 0;
    u32 r2_29 = 0;
    u32 r3_29 = 0;
    u32 r0_61 = 0;
    u32 r0_62 = 0;
    u32 r1_26 = 0;
    u32 r2_30 = 0;
    u32 r3_30 = 0;
    u32 r0_63 = 0;
    u32 r0_64 = 0;
    u32 r1_27 = 0;
    u32 r2_31 = 0;
    u32 r3_31 = 0;
    u32 r0_65 = 0;
    u32 r0_66 = 0;
    u32 r1_28 = 0;
    u32 r2_32 = 0;
    u32 r3_32 = 0;
    u32 r0_67 = 0;
    u32 r0_68 = 0;
    u32 r1_29 = 0;
    u32 r2_33 = 0;
    u32 r3_33 = 0;
    u32 r0_69 = 0;
    u32 r0_70 = 0;
    u32 r1_30 = 0;
    u32 r2_34 = 0;
    u32 r3_34 = 0;
    u32 r0_71 = 0;
    u32 r0_72 = 0;
    u32 r1_31 = 0;
    u32 r2_35 = 0;
    u32 r3_35 = 0;
    u32 r0_73 = 0;
    u32 r0_74 = 0;
    u32 r1_32 = 0;
    u32 r2_36 = 0;
    u32 r3_36 = 0;
    u32 r0_75 = 0;
    u32 r0_76 = 0;
    u32 r1_33 = 0;
    u32 r2_37 = 0;
    u32 r3_37 = 0;
    u32 r0_77 = 0;
    u32 r0_78 = 0;
    u32 r1_34 = 0;
    u32 r2_38 = 0;
    u32 r3_38 = 0;
    u32 r0_79 = 0;
    u32 r0_80 = 0;
    u32 r1_35 = 0;
    u32 r2_39 = 0;
    u32 r3_39 = 0;
    u32 r0_81 = 0;
    u32 r0_82 = 0;
    u32 r1_36 = 0;
    u32 r2_40 = 0;
    u32 r3_40 = 0;
    u32 r0_83 = 0;
    u32 r0_84 = 0;
    u32 r1_37 = 0;
    u32 r2_41 = 0;
    u32 r3_41 = 0;
    u32 r0_85 = 0;
    u32 r0_86 = 0;
    u32 r1_38 = 0;
    u32 r2_42 = 0;
    u32 r3_42 = 0;
    u32 r0_87 = 0;
    u32 r0_88 = 0;
    u32 r1_39 = 0;
    u32 r2_43 = 0;
    u32 r3_43 = 0;
    u32 r0_89 = 0;
    u32 r0_90 = 0;
    u32 r1_40 = 0;
    u32 r2_44 = 0;
    u32 r3_44 = 0;
    u32 r0_91 = 0;
    u32 r0_92 = 0;
    u32 r1_41 = 0;
    u32 r2_45 = 0;
    u32 r3_45 = 0;
    u32 r0_93 = 0;
    u32 r0_94 = 0;
    u32 r1_42 = 0;
    u32 r2_46 = 0;
    u32 r3_46 = 0;
    u32 r0_95 = 0;
    u32 r0_96 = 0;
    u32 r1_43 = 0;
    u32 r2_47 = 0;
    u32 r3_47 = 0;
    u32 r0_97 = 0;
    u32 r0_98 = 0;
    u32 r1_44 = 0;
    u32 r2_48 = 0;
    u32 r3_48 = 0;
    u32 r0_99 = 0;
    u32 r0_100 = 0;
    u32 r1_45 = 0;
    u32 r2_49 = 0;
    u32 r3_49 = 0;
    u32 r0_101 = 0;
    u32 r0_102 = 0;
    u32 r1_46 = 0;
    u32 r2_50 = 0;
    u32 r3_50 = 0;
    u32 r0_103 = 0;
    u32 r0_104 = 0;
    u32 r1_47 = 0;
    u32 r2_51 = 0;
    u32 r3_51 = 0;
    u32 r0_105 = 0;
    u32 r0_106 = 0;
    u32 r1_48 = 0;
    u32 r2_52 = 0;
    u32 r3_52 = 0;
    u32 r0_107 = 0;
    u32 r0_108 = 0;
    u32 r1_49 = 0;
    u32 r2_53 = 0;
    u32 r3_53 = 0;
    u32 r0_109 = 0;
    u32 r0_110 = 0;
    u32 r1_50 = 0;
    u32 r2_54 = 0;
    u32 r3_54 = 0;
    u32 r0_111 = 0;
    u32 r0_112 = 0;
    u32 r1_51 = 0;
    u32 r2_55 = 0;
    u32 r3_55 = 0;
    u32 r0_113 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0x8eae94u);  // (from the original)
    arg0->word_28 = u32(0x8eae94u + 0x6cu);  // (from the original)
    r0_1 = r0 + 0x5c6cu;  // (from the original)
    r4_1 = r0_1 + 0x398u;  // (from the original)
    arg0->word_5c6c = u32(0x8ee228u);  // (from the original)
    arg0->word_6004 = u32(0x8ef284u);  // (from the original)
    arg0->word_60e8 = u32(0x8ef284u + 0x44u);  // (from the original)
    r0_2 = r0_1 + 0x4b0u;  // (from the original)
    call_002f76ac(r0_2, 0x2e0b3cu, 0x518u, 2u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_3 = call_002f770c(r4_1, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u32>(r0_3 - 0x398u) = u32(0x8f18f4u);  // (from the original)
    r0_4 = r0_3 - 0x248u;  // (from the original)
    r0_5 = call_00567ef0(r0_4, 0x8f18f4u, r2_2, r3_2);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_6 = r0_5 - 0x14cu;  // (from the original)
    r0_7 = call_005bf744(r0_6, r1_2, r2_3, r3_3);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_8 = r0_7 - 0x1f54u;  // (from the original)
    *gptr<u32>(r0_8) = u32(0x8f80dcu);  // (from the original)
    r0_9 = r0_8 + 0x1e5cu;  // (from the original)
    r0_10 = call_005e3194(r0_9, 0x8f80dcu, r2_4, r3_4);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_11 = r0_10 - 0xc4u;  // (from the original)
    r0_12 = call_005e3194(r0_11, r1_3, r2_5, r3_5);
    r1_4 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_13 = r0_12 - 0x140u;  // (from the original)
    r0_14 = call_002f7710(r0_13, r1_4, r2_6, r3_6);
    r1_5 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_15 = r0_14 - 0xe4u;  // (from the original)
    r0_16 = call_002f7710(r0_15, r1_5, r2_7, r3_7);
    r4_2 = r0_16 - 0x1b74u;  // (from the original)
    r0_17 = r0_16 - 0x1260u;  // (from the original)
    call_002f76ac(r0_17, 0x2b6ef8u, 0xe0u, 0x15u);  // (from the original)
    r1_6 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_18 = r4_2 + 0x408u;  // (from the original)
    r0_19 = call_005bf744(r0_18, r1_6, r2_8, r3_8);
    r1_7 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_20 = r0_19 - 0x2cu;  // (from the original)
    r0_21 = call_0056988c(r0_20, r1_7, r2_9, r3_9);
    r1_8 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_22 = r0_21 - 0x28u;  // (from the original)
    r0_23 = call_0056988c(r0_22, r1_8, r2_10, r3_10);
    r1_9 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_24 = r0_23 - 0x28u;  // (from the original)
    r0_25 = call_0056988c(r0_24, r1_9, r2_11, r3_11);
    r1_10 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_26 = r0_25 - 0x28u;  // (from the original)
    r0_27 = call_0056988c(r0_26, r1_10, r2_12, r3_12);
    r1_11 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_28 = r0_27 - 0x28u;  // (from the original)
    r0_29 = call_0056988c(r0_28, r1_11, r2_13, r3_13);
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
    r0_38 = r0_37 - 0x14cu;  // (from the original)
    r0_39 = call_005bf744(r0_38, r1_16, r2_18, r3_18);
    r1_17 = guest::cpu()->r[1];
    r2_19 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    r0_40 = r0_39 - 8u;
    r0_41 = call_00317dec(r0_40, r1_17, r2_19, r3_19);
    r1_18 = guest::cpu()->r[1];
    r2_20 = guest::cpu()->r[2];
    r3_20 = guest::cpu()->r[3];
    r0_42 = r0_41 - 0x108u;  // (from the original)
    r0_43 = call_002f7710(r0_42, r1_18, r2_20, r3_20);
    r1_19 = guest::cpu()->r[1];
    r2_21 = guest::cpu()->r[2];
    r3_21 = guest::cpu()->r[3];
    r0_44 = r0_43 - 0xe0u;  // (from the original)
    r0_45 = call_0031c92c(r0_44, r1_19, r2_21, r3_21);
    r4_3 = r0_45 - 0x3b58u;  // (from the original)
    r0_46 = r0_45 - 0x2a0u;  // (from the original)
    call_002f76ac(r0_46, 0x2b6ef8u, 0xe0u, 3u);  // (from the original)
    r1_20 = guest::cpu()->r[1];
    r2_22 = guest::cpu()->r[2];
    r3_22 = guest::cpu()->r[3];
    r0_47 = r4_3 + 0x1c04u;  // (from the original)
    r0_48 = call_0023fb5c(r0_47, r1_20, r2_22, r3_22);
    r3_23 = guest::cpu()->r[3];
    r2_23 = 0x8ef958u + 0x48u;  // (from the original)
    *gptr<u32>(r0_48 - 0xd80u) = u32(r2_23);  // (from the original)
    *gptr<u32>(r0_48 - 0xe60u) = u32(0x8ef958u);  // (from the original)
    r0_49 = r0_48 - 0x84u;  // (from the original)
    r0_50 = call_0056988c(r0_49, 0x8ef958u, r2_23, r3_23);  // (from the original)
    r1_21 = guest::cpu()->r[1];
    r2_24 = guest::cpu()->r[2];
    r3_24 = guest::cpu()->r[3];
    r0_51 = r0_50 - 0x28u;  // (from the original)
    r0_52 = call_0056988c(r0_51, r1_21, r2_24, r3_24);
    r1_22 = guest::cpu()->r[1];
    r2_25 = guest::cpu()->r[2];
    r3_25 = guest::cpu()->r[3];
    r0_53 = r0_52 - 0x14cu;  // (from the original)
    r0_54 = call_005bf744(r0_53, r1_22, r2_25, r3_25);
    r1_23 = guest::cpu()->r[1];
    r2_26 = guest::cpu()->r[2];
    r3_26 = guest::cpu()->r[3];
    r0_55 = r0_54 - 0xe4u;  // (from the original)
    r0_56 = call_002f7710(r0_55, r1_23, r2_26, r3_26);
    r4_4 = r0_56 - 0xb84u;  // (from the original)
    r0_57 = r0_56 - 0xa80u;  // (from the original)
    call_002f76ac(r0_57, 0x2b6ef8u, 0xe0u, 0xcu);  // (from the original)
    r1_24 = guest::cpu()->r[1];
    r2_27 = guest::cpu()->r[2];
    r3_27 = guest::cpu()->r[3];
    r0_58 = call_002b6ef8(r4_4, r1_24, r2_27, r3_27);
    r2_28 = guest::cpu()->r[2];
    r3_28 = guest::cpu()->r[3];
    *gptr<u32>(r0_58 - 0x36cu) = u32(0x8ef364u);  // (from the original)
    r0_59 = r0_58 - 0x14cu;  // (from the original)
    r0_60 = call_005bf744(r0_59, 0x8ef364u, r2_28, r3_28);  // (from the original)
    r1_25 = guest::cpu()->r[1];
    r2_29 = guest::cpu()->r[2];
    r3_29 = guest::cpu()->r[3];
    r0_61 = r0_60 - 0x28u;  // (from the original)
    r0_62 = call_0056988c(r0_61, r1_25, r2_29, r3_29);
    r1_26 = guest::cpu()->r[1];
    r2_30 = guest::cpu()->r[2];
    r3_30 = guest::cpu()->r[3];
    r0_63 = r0_62 - 0x28u;  // (from the original)
    r0_64 = call_0056988c(r0_63, r1_26, r2_30, r3_30);
    r1_27 = guest::cpu()->r[1];
    r2_31 = guest::cpu()->r[2];
    r3_31 = guest::cpu()->r[3];
    r0_65 = r0_64 - 0x28u;  // (from the original)
    r0_66 = call_0056988c(r0_65, r1_27, r2_31, r3_31);
    r1_28 = guest::cpu()->r[1];
    r2_32 = guest::cpu()->r[2];
    r3_32 = guest::cpu()->r[3];
    r0_67 = r0_66 - 0x28u;  // (from the original)
    r0_68 = call_0056988c(r0_67, r1_28, r2_32, r3_32);
    r1_29 = guest::cpu()->r[1];
    r2_33 = guest::cpu()->r[2];
    r3_33 = guest::cpu()->r[3];
    r0_69 = r0_68 - 0x28u;  // (from the original)
    r0_70 = call_0056988c(r0_69, r1_29, r2_33, r3_33);
    r1_30 = guest::cpu()->r[1];
    r2_34 = guest::cpu()->r[2];
    r3_34 = guest::cpu()->r[3];
    r0_71 = r0_70 - 0x28u;  // (from the original)
    r0_72 = call_0056988c(r0_71, r1_30, r2_34, r3_34);
    r1_31 = guest::cpu()->r[1];
    r2_35 = guest::cpu()->r[2];
    r3_35 = guest::cpu()->r[3];
    r0_73 = r0_72 - 0x28u;  // (from the original)
    r0_74 = call_0056988c(r0_73, r1_31, r2_35, r3_35);
    r1_32 = guest::cpu()->r[1];
    r2_36 = guest::cpu()->r[2];
    r3_36 = guest::cpu()->r[3];
    r0_75 = r0_74 - 0x28u;  // (from the original)
    r0_76 = call_0056988c(r0_75, r1_32, r2_36, r3_36);
    r1_33 = guest::cpu()->r[1];
    r2_37 = guest::cpu()->r[2];
    r3_37 = guest::cpu()->r[3];
    r0_77 = r0_76 - 0xe0u;  // (from the original)
    r0_78 = call_002b6ef8(r0_77, r1_33, r2_37, r3_37);
    r1_34 = guest::cpu()->r[1];
    r2_38 = guest::cpu()->r[2];
    r3_38 = guest::cpu()->r[3];
    r0_79 = r0_78 - 0xd8u;  // (from the original)
    r0_80 = call_0056988c(r0_79, r1_34, r2_38, r3_38);
    r1_35 = guest::cpu()->r[1];
    r2_39 = guest::cpu()->r[2];
    r3_39 = guest::cpu()->r[3];
    r0_81 = r0_80 - 0x28u;  // (from the original)
    r0_82 = call_0056988c(r0_81, r1_35, r2_39, r3_39);
    r1_36 = guest::cpu()->r[1];
    r2_40 = guest::cpu()->r[2];
    r3_40 = guest::cpu()->r[3];
    r0_83 = r0_82 - 0x28u;  // (from the original)
    r0_84 = call_0056988c(r0_83, r1_36, r2_40, r3_40);
    r1_37 = guest::cpu()->r[1];
    r2_41 = guest::cpu()->r[2];
    r3_41 = guest::cpu()->r[3];
    r0_85 = r0_84 - 0x28u;  // (from the original)
    r0_86 = call_0056988c(r0_85, r1_37, r2_41, r3_41);
    r1_38 = guest::cpu()->r[1];
    r2_42 = guest::cpu()->r[2];
    r3_42 = guest::cpu()->r[3];
    r0_87 = r0_86 - 0x28u;  // (from the original)
    r0_88 = call_0056988c(r0_87, r1_38, r2_42, r3_42);
    r1_39 = guest::cpu()->r[1];
    r2_43 = guest::cpu()->r[2];
    r3_43 = guest::cpu()->r[3];
    r0_89 = r0_88 - 0x28u;  // (from the original)
    r0_90 = call_0056988c(r0_89, r1_39, r2_43, r3_43);
    r1_40 = guest::cpu()->r[1];
    r2_44 = guest::cpu()->r[2];
    r3_44 = guest::cpu()->r[3];
    r0_91 = r0_90 - 0x28u;  // (from the original)
    r0_92 = call_0056988c(r0_91, r1_40, r2_44, r3_44);
    r1_41 = guest::cpu()->r[1];
    r2_45 = guest::cpu()->r[2];
    r3_45 = guest::cpu()->r[3];
    r0_93 = r0_92 - 0x28u;  // (from the original)
    r0_94 = call_0056988c(r0_93, r1_41, r2_45, r3_45);
    r1_42 = guest::cpu()->r[1];
    r2_46 = guest::cpu()->r[2];
    r3_46 = guest::cpu()->r[3];
    r0_95 = r0_94 - 0x28u;  // (from the original)
    r0_96 = call_0056988c(r0_95, r1_42, r2_46, r3_46);
    r1_43 = guest::cpu()->r[1];
    r2_47 = guest::cpu()->r[2];
    r3_47 = guest::cpu()->r[3];
    r0_97 = r0_96 - 0x28u;  // (from the original)
    r0_98 = call_0056988c(r0_97, r1_43, r2_47, r3_47);
    r1_44 = guest::cpu()->r[1];
    r2_48 = guest::cpu()->r[2];
    r3_48 = guest::cpu()->r[3];
    r0_99 = r0_98 - 0x28u;  // (from the original)
    r0_100 = call_0056988c(r0_99, r1_44, r2_48, r3_48);
    r1_45 = guest::cpu()->r[1];
    r2_49 = guest::cpu()->r[2];
    r3_49 = guest::cpu()->r[3];
    r0_101 = r0_100 - 0x14cu;  // (from the original)
    r0_102 = call_005bf744(r0_101, r1_45, r2_49, r3_49);
    r1_46 = guest::cpu()->r[1];
    r2_50 = guest::cpu()->r[2];
    r3_50 = guest::cpu()->r[3];
    r0_103 = r0_102 - 0x14cu;  // (from the original)
    r0_104 = call_005bf744(r0_103, r1_46, r2_50, r3_50);
    r1_47 = guest::cpu()->r[1];
    r2_51 = guest::cpu()->r[2];
    r3_51 = guest::cpu()->r[3];
    r0_105 = r0_104 - 0x14cu;  // (from the original)
    r0_106 = call_005bf744(r0_105, r1_47, r2_51, r3_51);
    r1_48 = guest::cpu()->r[1];
    r2_52 = guest::cpu()->r[2];
    r3_52 = guest::cpu()->r[3];
    r0_107 = r0_106 - 0x14cu;  // (from the original)
    r0_108 = call_005bf744(r0_107, r1_48, r2_52, r3_52);
    r1_49 = guest::cpu()->r[1];
    r2_53 = guest::cpu()->r[2];
    r3_53 = guest::cpu()->r[3];
    r0_109 = r0_108 - 0x248u;  // (from the original)
    r0_110 = call_00567ef0(r0_109, r1_49, r2_53, r3_53);
    r1_50 = guest::cpu()->r[1];
    r2_54 = guest::cpu()->r[2];
    r3_54 = guest::cpu()->r[3];
    r0_111 = r0_110 - 8u;
    r0_112 = call_00317dec(r0_111, r1_50, r2_54, r3_54);
    r1_51 = guest::cpu()->r[1];
    r2_55 = guest::cpu()->r[2];
    r3_55 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 8u;
    r0_113 = r0_112 - 0x50u;  // (from the original)
    return call_006aaa30(r0_113, r1_51, r2_55, r3_55);
}

}  // namespace d_00198d64
GUEST_EXPORT(0x00198d64, d_00198d64::f_00198d64);

// f_001990f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001990f0 {

inline constexpr guest::Function<0x0026d644, u32(u32, u32, u32, u32)> call_0026d644;  // (from the original)
inline constexpr guest::Function<0x002bf9cc, u32(u32, u32, u32, u32)> call_002bf9cc;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fd050, u32(u32, u32, u32, u32)> call_002fd050;  // (from the original)
inline constexpr guest::Function<0x0030b6b8, u32(u32, u32, u32, u32)> call_0030b6b8;  // (from the original)
inline constexpr guest::Function<0x00724400, u32(u32, u32, u32, u32)> call_00724400;  // (from the original)

u32 f_001990f0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r6_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r1_1 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_2 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r5_1 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r5_2 = 0;
    u32 r0_14 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r1_3 = 0;
    u32 r0_15 = 0;
    u32 r1_4 = 0;
    u32 r0_16 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r1_5 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r5_3 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r5_4 = 0;
    u32 r0_21 = 0;
    u32 r2_13 = 0;
    u32 r3_13 = 0;
    u32 r1_6 = 0;
    u32 r0_22 = 0;
    u32 r1_7 = 0;
    u32 r0_23 = 0;
    u32 r2_14 = 0;
    u32 r3_14 = 0;
    u32 r0_24 = 0;
    u32 r2_15 = 0;
    u32 r2_16 = 0;
    u32 r2_17 = 0;
    u32 r3_15 = 0;
    u32 r0_25 = 0;
    u32 r2_18 = 0;
    u32 r3_16 = 0;
    u32 r0_26 = 0;
    u32 r1_8 = 0;
    u32 r0_27 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb94c(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r6_1 = r0_1 + 0x6bd0u;  // (from the original)
    r0_2 = r0 + 0x1ec0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_00724400(r0_2, r1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_4 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_4, r0_3, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = r0 + 0x1ec0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_00724400(r0_5, r2, r2_3, r3_3);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_7 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_7, r0_6, r2_4, r3_4);
    r1_1 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_8 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_9 = call_0030b6b8(r0_8, r1_1, r2_5, r3_5);
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    zf_1 = r0_9 == 0x20b4u;  // (from the original)
    cf_1 = r0_9 >= 0x20b4u;  // (from the original)
    r0_10 = r13 + 4u;
    if (!cf_1 || !!zf_1) {
        guest::cpu()->r[13] = r13;
        r0_11 = call_0030b6b8(r0_10, 0x20b4u, r2_6, r3_6);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        r2_7 = guest::cpu()->r[2];
        r3_7 = guest::cpu()->r[3];
        r5_1 = r0_11 - 0x20abu;  // (from the original)
        r0_12 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        r0_13 = call_0030b6b8(r0_12, r1_2, r2_7, r3_7);
        r2_8 = guest::cpu()->r[2];
        r3_8 = guest::cpu()->r[3];
        r5_2 = r5_1 + (r0_13 - 0x20abu);  // (from the original)
        if (s32(r5_2) > s32(0xau)) {  // (from the original)
            r0_14 = r13 + 8u;
            guest::cpu()->r[13] = r13;
            call_002fd050(r0_14, 0x20b5u, r2_8, r3_8);  // (from the original)
            r2_9 = guest::cpu()->r[2];
            r3_9 = guest::cpu()->r[3];
            r1_3 = uxth(r5_2 + 0x20a1u);  // (from the original)
            r0_15 = r13 + 4u;
            guest::cpu()->r[13] = r13;
            call_002fd050(r0_15, r1_3, r2_9, r3_9);
            goto L_199248;
        }
        r1_4 = uxth(r5_2 + 0x20abu);  // (from the original)
        r0_16 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        call_002fd050(r0_16, r1_4, r2_8, r3_8);
        r2_10 = guest::cpu()->r[2];
        r3_10 = guest::cpu()->r[3];
        r0_17 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r0_17, 0x95bfdcu, r2_10, r3_10);  // (from the original)
        goto L_199248;
    }
    guest::cpu()->r[13] = r13;
    r0_18 = call_0030b6b8(r0_10, 0x20b4u, r2_6, r3_6);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r5_3 = r0_18 - 0x20b4u;  // (from the original)
    r0_19 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_20 = call_0030b6b8(r0_19, r1_5, r2_11, r3_11);
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r5_4 = r5_3 + (r0_20 - 0x20b4u);  // (from the original)
    if (s32(r5_4) > s32(0x63u)) {  // (from the original)
        r0_21 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        call_002fd050(r0_21, 0x2117u, r2_12, r3_12);  // (from the original)
        r2_13 = guest::cpu()->r[2];
        r3_13 = guest::cpu()->r[3];
        r1_6 = uxth(r5_4 + 0x2051u);  // (from the original)
        r0_22 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        call_002fd050(r0_22, r1_6, r2_13, r3_13);
        goto L_199248;
    }
    r1_7 = uxth(r5_4 + 0x20b4u);  // (from the original)
    r0_23 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_002fd050(r0_23, r1_7, r2_12, r3_12);
    r2_14 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_24 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_24, 0x95bfdcu, r2_14, r3_14);  // (from the original)
L_199248:;
    r2_15 = r13 + 4u;
    *gptr<u32>(r13) = u32(1u);
    guest::cpu()->r[13] = r13;
    call_002bf9cc(r6_1, r1, r2_15, 0u);
    r2_16 = r13 + 8u;
    *gptr<u32>(r13) = u32(1u);
    guest::cpu()->r[13] = r13;
    call_002bf9cc(r6_1, r2, r2_16, 0u);
    r2_17 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r0_25 = r0 + 0x1ec0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0026d644(r0_25, r1, r2_17, r3_15);
    r2_18 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    r0_26 = r0 + 0x1ec0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0026d644(r0_26, r2, r2_18, r3_16);
    r1_8 = guest::cpu()->r[1];
    r0_27 = r13 + 4u;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_8;
    guest::cpu()->r[13] = r13;
    return r0_27;
}

}  // namespace d_001990f0
GUEST_EXPORT(0x001990f0, d_001990f0::f_001990f0);

// f_00199704: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00199704 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x0030b6b8, u32(u32, u32, u32, u32)> call_0030b6b8;  // (from the original)
inline constexpr guest::Function<0x00718c0c, u32(u32, u32, u32, u32)> call_00718c0c;  // (from the original)
inline constexpr guest::Function<0x00724400, u32(u32, u32, u32, u32)> call_00724400;  // (from the original)
inline constexpr guest::Function<0x007693d0, u32(u32, u32, u32, u32)> call_007693d0;  // (from the original)
inline constexpr guest::Function<0x0076b9b0, u32(u32, u32, u32, u32)> call_0076b9b0;  // (from the original)

u32 f_00199704(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r2_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r2_4 = 0;
    u32 r0_8 = 0;
    u32 r2_5 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r2_6 = 0;
    u32 r0_11 = 0;
    u32 r1_2 = 0;
    u32 r2_7 = 0;
    u32 r4_1 = 0;
    u32 r0_12 = 0;
    u32 r2_8 = 0;
    u32 zf_1 = 0;
    u32 zf_2 = 0;
    u32 r0_13 = 0;
    u32 r4_2 = 0;
    u32 r0_14 = 0;
    u32 r2_9 = 0;
    u32 zf_3 = 0;
    u32 zf_4 = 0;
    u32 r0_15 = 0;
    u32 r4_3 = 0;
    u32 r0_16 = 0;
    u32 zf_5 = 0;
    u32 zf_6 = 0;
    u32 r4_4 = 0;
    u32 r0_17 = 0;
    u32 r2_10 = 0;
    u32 zf_7 = 0;
    u32 zf_8 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r1_3 = 0;
    u32 r2_11 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r1_4 = 0;
    u32 r2_12 = 0;
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_1 == 0x77u) {  // (from the original)
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_2 = r0 + 0x1ec0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_00718c0c(r0_2, r1, r2_1, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    if (r0_3 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_4 = r0 + 0x1ec0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_00718c0c(r0_4, r2, r2_2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    if (r0_5 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_6 = r0 + 0x1ec0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_7 = call_00724400(r0_6, r1, r2_3, guest::cpu()->r[3]);
    r2_4 = guest::cpu()->r[2];
    r0_8 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_8, r0_7, r2_4, guest::cpu()->r[3]);
    r2_5 = guest::cpu()->r[2];
    r0_9 = r0 + 0x1ec0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_00724400(r0_9, r2, r2_5, guest::cpu()->r[3]);
    r2_6 = guest::cpu()->r[2];
    r0_11 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_11, r0_10, r2_6, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r4_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_12 = call_002fcb34(r4_1, r1_2, r2_7, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    zf_1 = r0_12 == 0x75u;  // (from the original)
    if (!zf_1) {
        zf_1 = r0_12 == 0x76u;  // (from the original)
    }
    if (zf_1) {
        goto L_1997b0;
    }
    zf_2 = r0_12 == 0x33u;  // (from the original)
    if (!zf_2) {
        zf_2 = r0_12 == 0x34u;  // (from the original)
    }
    if (zf_2) {
        goto L_1997c4;
    }
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0u;
L_1997b0:;
    guest::cpu()->r[13] = r13;
    r0_13 = call_0076b9b0(r4_1, r1, r2_8, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    if (r0_13 >= 9u) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
L_1997c4:;
    r4_2 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_14 = call_002fcb34(r4_2, r1, r2_8, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    zf_3 = r0_14 == 0x75u;  // (from the original)
    if (!zf_3) {
        zf_3 = r0_14 == 0x76u;  // (from the original)
    }
    if (!zf_3) {
        zf_4 = r0_14 == 0x33u;  // (from the original)
        if (!zf_4) {
            zf_4 = r0_14 == 0x34u;  // (from the original)
        }
        if (zf_4) {
            goto L_199800;
        }
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    guest::cpu()->r[13] = r13;
    r0_15 = call_0076b9b0(r4_2, r1, r2_9, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    if (r0_15 >= 9u) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
L_199800:;
    r4_3 = r13;
    guest::cpu()->r[13] = r13;
    r0_16 = call_002fcb34(r4_3, r1, r2_9, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r6 = 0x7ffeu;  // (from the original)
    zf_5 = r0_16 == 0x33u;  // (from the original)
    if (!zf_5) {
        zf_5 = r0_16 == 0x34u;  // (from the original)
    }
    if (zf_5) {
        goto L_19987c;
    }
    zf_6 = r0_16 == 0x75u;  // (from the original)
    if (!zf_6) {
        zf_6 = r0_16 == 0x76u;  // (from the original)
    }
    if (zf_6) {
        goto L_199890;
    } else {
        r5 = r6;
    }
L_19982c:;
    r4_4 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_17 = call_002fcb34(r4_4, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    zf_7 = r0_17 == 0x33u;  // (from the original)
    if (!zf_7) {
        zf_7 = r0_17 == 0x34u;  // (from the original)
    }
    if (zf_7) {
        goto L_1998c0;
    }
    zf_8 = r0_17 == 0x75u;  // (from the original)
    if (!zf_8) {
        zf_8 = r0_17 == 0x76u;  // (from the original)
    }
    if (zf_8) {
        goto L_1998d4;
    } else {
        r4 = r6;
    }
L_199854:;
    if (r5 != r4) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 1u;
L_19987c:;
    guest::cpu()->r[13] = r13;
    r0_18 = call_0030b6b8(r4_3, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r5 = r0_18;
    guest::preempt();
    goto L_19982c;
L_199890:;
    r0_19 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_19, r4_3, r2, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r0_20 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_21 = call_007693d0(r0_20, r1_3, r2_11, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r5 = r0_21;
    guest::preempt();
    goto L_19982c;
L_1998c0:;
    guest::cpu()->r[13] = r13;
    r0_22 = call_0030b6b8(r4_4, r1, r2_10, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r0_22;
    guest::preempt();
    goto L_199854;
L_1998d4:;
    r0_23 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_23, r4_4, r2_10, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r0_24 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_25 = call_007693d0(r0_24, r1_4, r2_12, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r0_25;
    guest::preempt();
    goto L_199854;
}

}  // namespace d_00199704
GUEST_EXPORT(0x00199704, d_00199704::f_00199704);

// f_00199928: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00199928 {

struct __attribute__((packed)) Object_00199928_0 {
    u8 unknown_0[0x69f];  // (not used here)
    u8 byte_69f;
};
GUEST_OFFSET(Object_00199928_0, byte_69f, 0x69f);  // (from the original)

inline constexpr guest::Function<0x0019b288, u32(u32, u32, u32, u32)> call_0019b288;  // (from the original)
inline constexpr guest::Function<0x0019c440, u32(u32, u32, u32, u32)> call_0019c440;  // (from the original)
inline constexpr guest::Function<0x0019cfd8, u32(u32, u32, u32, u32)> call_0019cfd8;  // (from the original)
inline constexpr guest::Function<0x0019d500, u32(u32, u32, u32, u32)> call_0019d500;  // (from the original)
inline constexpr guest::Function<0x0029b464, u32(u32, u32, u32, u32)> call_0029b464;  // (from the original)
inline constexpr guest::Function<0x00718c0c, u32(u32, u32, u32, u32)> call_00718c0c;  // (from the original)
inline constexpr guest::Function<0x0071af4c, u32(u32, u32, u32, u32)> call_0071af4c;  // (from the original)
inline constexpr guest::Function<0x00723f84, u32(u32, u32, u32, u32)> call_00723f84;  // (from the original)

u32 f_00199928(gptr<Object_00199928_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r1_6 = 0;
    u32 r0_9 = 0;
    u32 r1_7 = 0;
    u32 r0_10 = 0;
    u32 r1_8 = 0;
    u32 r0_11 = 0;
    u32 r1_9 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    arg0->byte_69f = u8(1u);
    r0_1 = r0 + 0xa1b0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_0029b464(r0_1, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0 + 0x670u) = u32(r0_2);  // (from the original)
    r1_1 = r13;
    guest::cpu()->r[13] = r13;
    call_0071af4c(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_3 = r0 + 0x1bcu;  // (from the original)
    *gptr<u32>(r0_3 + 0x4d4u) = u32(*gptr<u32>(r13));  // (from the original)
    *gptr<u32>(r0_3 + 0x4d8u) = u32(*gptr<u32>(r13 + 4u));  // (from the original)
    *gptr<u32>(r0_3 + 0x4dcu) = u32(*gptr<u32>(r13 + 8u));  // (from the original)
    r1_2 = *gptr<u32>(r0 + 0xccu);  // (from the original)
    r0_4 = r0 + 0x1ec0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_00718c0c(r0_4, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = *gptr<u32>(r0 + 0xccu);  // (from the original)
    if (r0_5 != 0) {
        guest::cpu()->r[13] = r13;
        r0_6 = call_0019b288(r0, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_4 = guest::cpu()->r[1];
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->r[13] = r13;
        return r0_6;
    }
    if (r1_3 != 0x11u) {  // (from the original)
        if (r1_3 == 0x10u) {  // (from the original)
            goto L_199a08;
        }
        r0_7 = *gptr<u32>(0xa328u + r0);  // (from the original)
        if (r0_7 == 0) {
            r13 = r13 + 0x18u;  // (from the original)
            guest::cpu()->r[1] = r1_3;
            guest::cpu()->r[13] = r13;
            return r0_7;
        }
        guest::cpu()->r[13] = r13;
        r0_8 = call_00723f84(r0_7, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_5 = guest::cpu()->r[1];
        if (r0_8 == 0) {
            r13 = r13 + 0x18u;  // (from the original)
            guest::cpu()->r[1] = r1_5;
            guest::cpu()->r[13] = r13;
            return r0_8;
        }
        r1_6 = *gptr<u32>(r0 + 0xccu);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_9 = call_0019cfd8(r0, r1_6, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_7 = guest::cpu()->r[1];
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_7;
        guest::cpu()->r[13] = r13;
        return r0_9;
    }
    guest::cpu()->r[13] = r13;
    r0_10 = call_0019d500(r0, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_8 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_8;
    guest::cpu()->r[13] = r13;
    return r0_10;
L_199a08:;
    guest::cpu()->r[13] = r13;
    r0_11 = call_0019c440(r0, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_9 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_9;
    guest::cpu()->r[13] = r13;
    return r0_11;
}

}  // namespace d_00199928
GUEST_EXPORT(0x00199928, d_00199928::f_00199928);

// f_0019a938: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0019a938 {

struct __attribute__((packed)) Object_0019a938_0 {
    u8 unknown_0[0xcc];  // (not used here)
    u32 word_cc;
};
GUEST_OFFSET(Object_0019a938_0, word_cc, 0xcc);  // (from the original)

inline guest::global<u32, 0x0084a538> global_0084a538;  // (from the original)
inline constexpr guest::Function<0x0026d644, u32(u32, u32, u32, u32)> call_0026d644;  // (from the original)
inline constexpr guest::Function<0x002bf9cc, u32(u32, u32, u32, u32)> call_002bf9cc;  // (from the original)
inline constexpr guest::Function<0x002bfcb8, u32(u32, u32, u32, u32)> call_002bfcb8;  // (from the original)
inline constexpr guest::Function<0x002bfcfc, u32(u32, u32, u32, u32)> call_002bfcfc;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x00303660, u32(u32, u32, u32, u32)> call_00303660;  // (from the original)
inline constexpr guest::Function<0x00305630, u32(u32, u32, u32, u32)> call_00305630;  // (from the original)
inline constexpr guest::Function<0x006bba30, u32(u32, u32, u32, u32)> call_006bba30;  // (from the original)
inline constexpr guest::Function<0x00724400, u32(u32, u32, u32, u32)> call_00724400;  // (from the original)
inline constexpr guest::Function<0x008165e4, u32(u32, u32, u32, u32)> call_008165e4;  // (from the original)

u32 f_0019a938(gptr<Object_0019a938_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r5_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r1_5 = 0;
    u32 r0_7 = 0;
    u32 r3_5 = 0;
    u32 r0_8 = 0;
    u32 r2_5 = 0;
    u32 r3_6 = 0;
    u32 r1_6 = 0;
    u32 r3_7 = 0;
    u32 r1_7 = 0;
    u32 r2_6 = 0;
    u32 r0_9 = 0;
    u32 r1_8 = 0;
    u32 r1_9 = 0;
    u32 r2_7 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r1_10 = 0;
    u32 r1_11 = 0;
    u32 r0_10 = 0;
    u32 r3_9 = 0;
    u32 r9_1 = 0;
    u32 r0_11 = 0;
    u32 r1_12 = 0;
    u32 r2_9 = 0;
    u32 r1_13 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r1_1 = arg0->word_cc;
    r0_1 = r0 + 0x1ec0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_00724400(r0_1, r1_1, r2, r3);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_3 = call_00305630(r0_2, r1_2, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_4 = call_002fb94c(r0_3, r1_3, r2_2, r3_2);
    r1_4 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r5_1 = r0_4 + 0x6bd0u;  // (from the original)
    r0_5 = r0_4 + 0x6f08u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_00303660(r0_5, r1_4, r2_3, r3_3);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r1_5 = r0_6 + r0_3;
    guest::cpu()->r[13] = r13;
    r0_7 = call_002bfcb8(r5_1, r1_5, r2_4, r3_4);
    if (r0_7 != 0) {
        r3_5 = r13 + 8u;
        r0_8 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        call_006bba30(r0_8, r0_7, 1u, r3_5);
        r2_5 = guest::cpu()->r[2];
        r3_6 = guest::cpu()->r[3];
        r1_6 = *gptr<u32>(r13 + 8u);
        if (r0_7 + r1_6 == r0_3) {
            guest::cpu()->r[13] = r13;
            call_002bfcfc(r5_1, r1_6, r2_5, r3_6);
            r3_7 = guest::cpu()->r[3];
            *gptr<u32>(r0 + 0xdcu) = u32(0x26u);  // (from the original)
            r1_7 = *global_0084a538;
            r2_6 = *gptr<u32>(0x84a538u + 4);  // (from the original)
            r0_9 = r0 + 0xa4u;  // (from the original)
            guest::cpu()->r[13] = r13;
            call_008165e4(r0_9, r1_7, r2_6, r3_7);
            r1_8 = guest::cpu()->r[1];
            r13 = r13 + 0x28u;  // (from the original)
            guest::cpu()->r[1] = r1_8;
            guest::cpu()->r[13] = r13;
            return 0u;
        }
        guest::cpu()->r[13] = r13;
        call_002bfcfc(r5_1, r1_6, r2_5, r3_6);
        *gptr<u32>(r13) = u32(1u);
        r1_9 = *gptr<u32>(r0 + 0xccu);  // (from the original)
        r2_7 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        call_002bf9cc(r5_1, r1_9, r2_7, 0u);
        r2_8 = guest::cpu()->r[2];
        r3_8 = guest::cpu()->r[3];
    } else {
        r1_10 = *gptr<u32>(r0 + 0xccu);  // (from the original)
        *gptr<u32>(r13) = u32(1u);
        guest::cpu()->r[13] = r13;
        call_002bf9cc(r5_1, r1_10, 0x95bfdcu, 0u);  // (from the original)
        r2_8 = guest::cpu()->r[2];
        r3_8 = guest::cpu()->r[3];
    }
    r1_11 = *gptr<u32>(r0 + 0xccu);  // (from the original)
    r0_10 = r0 + 0x1ec0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0026d644(r0_10, r1_11, r2_8, r3_8);
    r3_9 = guest::cpu()->r[3];
    r9_1 = 0x84a538u + 0x10u;  // (from the original)
    r0_11 = r0 + 0xa4u;  // (from the original)
    r1_12 = *gptr<u32>(r9_1);
    r2_9 = *gptr<u32>(r9_1 + 4);
    guest::cpu()->r[13] = r13;
    call_008165e4(r0_11, r1_12, r2_9, r3_9);
    r1_13 = guest::cpu()->r[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_13;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_0019a938
GUEST_EXPORT(0x0019a938, d_0019a938::f_0019a938);

// f_0019b14c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0019b14c {

inline constexpr guest::Function<0x002bff84, u32(u32, u32, u32, u32)> call_002bff84;  // (from the original)
inline constexpr guest::Function<0x002e354c, u32(u32, u32, u32, u32)> call_002e354c;  // (from the original)
inline constexpr guest::Function<0x002f77e8, u32(u32, u32, u32, u32)> call_002f77e8;  // (from the original)
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002ff368, u32(u32, u32, u32, u32)> call_002ff368;  // (from the original)
inline constexpr guest::Function<0x00311c70, u32(u32, u32, u32, u32)> call_00311c70;  // (from the original)
inline constexpr guest::Function<0x00723f68, u32(u32, u32, u32, u32)> call_00723f68;  // (from the original)
inline constexpr guest::Function<0x00723fa0, u32(u32, u32, u32, u32)> call_00723fa0;  // (from the original)

u32 f_0019b14c(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r8_1 = 0;
    u32 r7_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r8_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r0_6 = 0;
    u32 r6_1 = 0;
    u32 r1_4 = 0;
    u32 r0_7 = 0;
    u32 r1_5 = 0;
    u32 r0_8 = 0;
    u32 r1_6 = 0;
    u32 r0_9 = 0;
    u32 r1_7 = 0;
    u32 r0_10 = 0;
    u32 r2_4 = 0;
    u32 r1_8 = 0;
    u32 r0_11 = 0;
    u32 r2_5 = 0;
    u32 r1_9 = 0;
    u32 r0_12 = 0;
    u32 r2_6 = 0;
    u32 r1_10 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r2_7 = 0;
    u32 r1_11 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r2_8 = 0;
    u32 r2_9 = 0;
    u32 r1_12 = 0;
    u32 r0_17 = 0;
    u32 r2_10 = 0;
    u32 r1_13 = 0;
    u32 r0_18 = 0;
    u32 r1_14 = 0;
    u32 r2_11 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r1_15 = 0;
    r13 = r13 - 0x2a0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb94c(r0, r1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    r8_1 = r0_1 + 0x7000u;  // (from the original)
    r7_1 = r0 + 0xa000u;  // (from the original)
    r1_1 = *gptr<u32>(r0 + 0xd0u);  // (from the original)
    r0_2 = *gptr<u32>(r7_1 + 0x328u);  // (from the original)
    r8_2 = r8_1 + 8u;
    guest::cpu()->r[13] = r13;
    r0_3 = call_00723f68(r0_2, r1_1, r2_1, guest::cpu()->r[3]);
    r2_2 = guest::cpu()->r[2];
    r1_2 = *gptr<u32>(r0 + 0xccu);  // (from the original)
    r0_4 = *gptr<u32>(r7_1 + 0x328u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_00723f68(r0_4, r1_2, r2_2, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r0_6 = r13;
    guest::cpu()->r[13] = r13;
    call_002ff368(r0_6, r1_3, r2_3, guest::cpu()->r[3]);
    r6_1 = r13;
    guest::cpu()->r[13] = r13;
    call_002fbb30(r6_1, r0_3, 0x31u, guest::cpu()->r[3]);  // (from the original)
    r1_4 = r0_3 + 0x34u;  // (from the original)
    r0_7 = r6_1 + 0x34u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fbb30(r0_7, r1_4, 0x31u, guest::cpu()->r[3]);  // (from the original)
    r1_5 = r0_3 + 0x68u;  // (from the original)
    r0_8 = r6_1 + 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fbb30(r0_8, r1_5, 0x42u, guest::cpu()->r[3]);  // (from the original)
    r1_6 = r0_3 + 0xaau;  // (from the original)
    r0_9 = r6_1 + 0xaau;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f8574(r0_9, r1_6, 0x182u, guest::cpu()->r[3]);  // (from the original)
    r1_7 = r0_3 + 0x22cu;  // (from the original)
    r0_10 = r6_1 + 0x22cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fbb30(r0_10, r1_7, 0x42u, guest::cpu()->r[3]);  // (from the original)
    r2_4 = guest::cpu()->r[2];
    r1_8 = r0_3 + 0x274u;  // (from the original)
    *gptr<u8>(r13 + 0x26eu) = u8(u32(*gptr<u8>(r0_3 + 0x26eu)));  // (from the original)
    *gptr<u8>(r13 + 0x26fu) = u8(u32(*gptr<u8>(r0_3 + 0x26fu)));  // (from the original)
    *gptr<u8>(r13 + 0x270u) = u8(u32(*gptr<u8>(r0_3 + 0x270u)));  // (from the original)
    *gptr<u8>(r13 + 0x271u) = u8(u32(*gptr<u8>(r0_3 + 0x271u)));  // (from the original)
    *gptr<u8>(r13 + 0x272u) = u8(u32(*gptr<u8>(r0_3 + 0x272u)));  // (from the original)
    r0_11 = r6_1 + 0x274u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_11, r1_8, r2_4, guest::cpu()->r[3]);
    r2_5 = guest::cpu()->r[2];
    r1_9 = r0_3 + 0x278u;  // (from the original)
    r0_12 = r6_1 + 0x278u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00311c70(r0_12, r1_9, r2_5, guest::cpu()->r[3]);
    r2_6 = guest::cpu()->r[2];
    r1_10 = *gptr<u32>(r0 + 0xd0u);  // (from the original)
    r0_13 = *gptr<u32>(r7_1 + 0x328u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_14 = call_00723fa0(r0_13, r1_10, r2_6, guest::cpu()->r[3]);
    guest::cpu()->r[13] = r13;
    call_002bff84(r8_2, r0_14, r0_5, guest::cpu()->r[3]);
    r2_7 = guest::cpu()->r[2];
    r1_11 = *gptr<u32>(r0 + 0xccu);  // (from the original)
    r0_15 = *gptr<u32>(r7_1 + 0x328u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_16 = call_00723fa0(r0_15, r1_11, r2_7, guest::cpu()->r[3]);
    r2_8 = r13;
    guest::cpu()->r[13] = r13;
    call_002bff84(r8_2, r0_16, r2_8, guest::cpu()->r[3]);
    r2_9 = guest::cpu()->r[2];
    r1_12 = *gptr<u32>(r0 + 0xd0u);  // (from the original)
    r0_17 = *gptr<u32>(r7_1 + 0x328u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002e354c(r0_17, r1_12, r2_9, guest::cpu()->r[3]);
    r2_10 = guest::cpu()->r[2];
    r1_13 = *gptr<u32>(r0 + 0xccu);  // (from the original)
    r0_18 = *gptr<u32>(r7_1 + 0x328u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002e354c(r0_18, r1_13, r2_10, guest::cpu()->r[3]);
    r1_14 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r0_19 = r13;
    guest::cpu()->r[13] = r13;
    r0_20 = call_002f77e8(r0_19, r1_14, r2_11, guest::cpu()->r[3]);
    r1_15 = guest::cpu()->r[1];
    r13 = r13 + 0x2a0u;  // (from the original)
    guest::cpu()->r[1] = r1_15;
    guest::cpu()->r[13] = r13;
    return r0_20;
}

}  // namespace d_0019b14c
GUEST_EXPORT(0x0019b14c, d_0019b14c::f_0019b14c);

// f_0019c440: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0019c440 {

inline guest::global<u32, 0x0084a878> global_0084a878;  // (from the original)
inline constexpr guest::Function<0x002b9aa4, u32(u32, u32, u32, u32)> call_002b9aa4;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x00303660, u32(u32, u32, u32, u32)> call_00303660;  // (from the original)
inline constexpr guest::Function<0x005d4a78, u32(u32, u32, u32, u32)> call_005d4a78;  // (from the original)
inline constexpr guest::Function<0x005e34c4, u32(u32, u32, u32, u32)> call_005e34c4;  // (from the original)
inline constexpr guest::Function<0x005e4988, u32(u32, u32, u32, u32)> call_005e4988;  // (from the original)
inline constexpr guest::Function<0x005e4994, u32(u32, u32, u32, u32)> call_005e4994;  // (from the original)
inline constexpr guest::Function<0x005e49c0, u32(u32, u32, u32, u32)> call_005e49c0;  // (from the original)
inline constexpr guest::Function<0x0068f114, u32(u32, u32, u32, u32)> call_0068f114;  // (from the original)

u32 f_0019c440(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r6_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 res_1 = 0;
    u32 r4_2 = 0;
    u32 r1_4 = 0;
    u32 r0_7 = 0;
    u32 r1_5 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r0_8 = 0;
    u32 r1_6 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 r0_9 = 0;
    u32 r1_7 = 0;
    u32 r0_10 = 0;
    u32 r1_8 = 0;
    u32 r3_4 = 0;
    u32 r0_11 = 0;
    u32 r1_9 = 0;
    u32 r2_5 = 0;
    u32 r2_6 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_10 = 0;
    r13 = r13 - 0xf8u;  // (from the original)
    r5 = r0;
    guest::cpu()->r[13] = r13;
    call_0068f114(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_1 = r5 + 0x1bcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002b9aa4(r0_1, 0u, r2_1, r3_1);
    *gptr<u8>(r0_1 + 0x4e2u) = u8(0u);  // (from the original)
    r6_1 = r13 + 0xd0u;  // (from the original)
    r1_1 = *gptr<u32>(0x84a878u + 4);  // (from the original)
    r2_2 = *gptr<u32>(0x84a878u + 8);  // (from the original)
    r4_1 = 0u;
    *gptr<u32>(r6_1) = u32(*global_0084a878);
    *gptr<u32>(r6_1 + 4) = u32(r1_1);
    *gptr<u32>(r6_1 + 8) = u32(r2_2);
    r0_2 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_00301d0c(r0_2, 0x5e35dcu, 0x20u, 6u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_4 = call_002fb94c(r0_3, r1_2, r2_3, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = r0_4 + 0x6f08u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_00303660(r0_5, r1_3, r2_4, r3_3);
    res_1 = r0_6 - 0x64u;  // (from the original)
    r7 = r13 + 0x10u;  // (from the original)
    if (res_1 >> 0x1f == ((r0_6 ^ 0x64u) & (r0_6 ^ res_1)) >> 0x1f) {  // (from the original)
        r4_2 = r13 + 4u;
        *gptr<u32>(r13) = u32(0u);
        *gptr<u32>(r4_2) = u32(0x1eu);  // (from the original)
        *gptr<u32>(r4_2 + 4) = u32(7u);
        r1_4 = r13 + 0xd0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_005e34c4(r7, r1_4, 0xe5u, 0u);  // (from the original)
        *gptr<u32>(r13) = u32(0u);
        *gptr<u32>(r4_2) = u32(0x1fu);  // (from the original)
        *gptr<u32>(r4_2 + 4) = u32(7u);
        r0_7 = r7 + 0x20u;  // (from the original)
        r1_5 = r13 + 0xd0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_005e34c4(r0_7, r1_5, 0xe6u, 0u);  // (from the original)
        r4_1 = 2u;
    }
    if (s32(r0_6) >= s32(0x3e8u)) {  // (from the original)
        ea_1 = r13;
        *gptr<u32>(ea_1) = u32(0u);
        ea_2 = r13 + 4u;
        *gptr<u32>(ea_2) = u32(0x20u);  // (from the original)
        *gptr<u32>(ea_2 + 4) = u32(7u);
        r0_8 = r7 + (r4_1 << 5);
        r1_6 = r13 + 0xd0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_005e34c4(r0_8, r1_6, 0xe7u, 0u);  // (from the original)
        r4_1 = r4_1 + 1u;
    }
    if (s32(r0_6) >= s32(0x2710u)) {  // (from the original)
        ea_3 = r13;
        *gptr<u32>(ea_3) = u32(0u);
        ea_4 = r13 + 4u;
        *gptr<u32>(ea_4) = u32(0x21u);  // (from the original)
        *gptr<u32>(ea_4 + 4) = u32(7u);
        r0_9 = r7 + (r4_1 << 5);
        r1_7 = r13 + 0xd0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_005e34c4(r0_9, r1_7, 0xe8u, 0u);  // (from the original)
        r4_1 = r4_1 + 1u;
    }
    *gptr<u32>(r13 + 8u) = u32(1u);
    *gptr<u32>(r13 + 4u) = u32(0x29u);  // (from the original)
    r0_10 = r7 + (r4_1 << 5);
    r1_8 = r13 + 0xd0u;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_005e34c4(r0_10, r1_8, 0xbu, 0u);  // (from the original)
    r3_4 = guest::cpu()->r[3];
    r6 = r4_1 + 1u;
    r0_11 = r5 + 0xe0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e49c0(r0_11, r6, r4_1, r3_4);
    r1_9 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    if (r6 == 0 || r6 >> 0x1f != (r6 & (r6 ^ r6)) >> 0x1f) {  // (from the original)
        goto L_19c5c8;
    }
    do {
L_19c5ac:;
        r2_6 = r7 + (r4 << 5);
        r0_12 = r5 + 0xe0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_005e4994(r0_12, r4, r2_6, r3);
        r1_9 = guest::cpu()->r[1];
        r2_5 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r6) > s32(r4));
L_19c5c8:;
    r0_13 = r5 + 0xe0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e4988(r0_13, r1_9, r2_5, r3);
    r0_14 = r5 + 0xe0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005d4a78(r0_14, 0u, 0u, 0u);
    r0_15 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_15, 0x5e3618u, 0x20u, 6u);  // (from the original)
    r1_10 = guest::cpu()->r[1];
    r13 = r13 + 0xf8u;  // (from the original)
    guest::cpu()->r[1] = r1_10;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_0019c440
GUEST_EXPORT(0x0019c440, d_0019c440::f_0019c440);
