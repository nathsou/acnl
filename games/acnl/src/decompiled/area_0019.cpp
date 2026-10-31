// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_00191368: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00191368 {

inline constexpr guest::Function<0x00297b60, u32(u32, u32, u32, u32)> call_00297b60;  // (from the original)
inline constexpr guest::Function<0x002999a0, u32(u32, u32, u32, u32)> call_002999a0;  // (from the original)
inline constexpr guest::Function<0x0031d258, u32(u32, u32, u32, u32)> call_0031d258;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)

u32 f_00191368(u32 r0, float S0, float S1, float S2, float S3, float S4, float S5, float S6, float S7, float S8) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x30u;  // (from the original)
    r5 = r0;
    r4 = 0u;
    r6 = r0 + 0x78acu;  // (from the original)
    do {
L_191380:;
        r1 = r5 + ((r4 << 3) - r4 << 2);
        r0 = *gptr<u32>(r5 + ((r4 << 7) - ((r4 << 3) - r4) << 3) + 0x904u);  // (from the original)
        r2 = r1 + 0x8000u;  // (from the original)
        r3 = r0 + 0x28u;  // (from the original)
        *gptr<u32>(r2 + 0x50u) = u32(r0);  // (from the original)
        r1 = r1 + 0x8044u;  // (from the original)
        *gptr<u32>(r1 + 0x10u) = u32(*gptr<u32>(r0 + 0x28u));  // (from the original)
        *gptr<u32>(r1 + 0x14u) = u32(*gptr<u32>(r3 + 4u));  // (from the original)
        *gptr<u32>(r1 + 0x18u) = u32(*gptr<u32>(r3 + 8u));  // (from the original)
        r0 = r6;
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
        r0 = call_002999a0(r0, r1, r2, r3);
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
    r3 = 0x84839cu;  // (from the original)
    r4 = r3 + 0x228u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r3 + 0x224u));  // (from the original)
    r3 = r3 + 0x238u;  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(r4));
    S2 = std::bit_cast<float>(*gptr<u32>(r4 + 4));
    S3 = std::bit_cast<float>(*gptr<u32>(r4 + 8));
    S4 = std::bit_cast<float>(*gptr<u32>(r4 + 0xc));  // (from the original)
    r0 = r5 + 0x7890u;  // (from the original)
    S7 = std::bit_cast<float>(*gptr<u32>(*gptr<u32>(0x145cu + r5) + 0x28u));  // (from the original)
    S8 = std::bit_cast<float>(*gptr<u32>(*gptr<u32>(r5 + 0x904u) + 0x28u));  // (from the original)
    r1 = r13 + 0x14u;  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(r3));
    S6 = std::bit_cast<float>(*gptr<u32>(r3 + 4));
    r2 = 0u;
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r13 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r13 + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r13 + 0xc) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(r13 + 0x10) = u32(std::bit_cast<u32>(S4));  // (from the original)
    S0 = S7 - S8;
    *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r1) = u32(std::bit_cast<u32>(S5));
    *gptr<u32>(r1 + 4) = u32(std::bit_cast<u32>(S6));
    *gptr<u32>(r13 + 0xcu) = u32(*gptr<u32>(r0));  // (from the original)
    r1 = r13;
    *gptr<u32>(r13 + 0x10u) = u32(*gptr<u32>(r0));  // (from the original)
    r0 = r6;
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
    r0 = call_0031d258(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    S7 = guest::cpu()->s[7];
    S8 = guest::cpu()->s[8];
    r1 = 0x848798u;  // (from the original)
    r0 = r5 + 0x4e8u;  // (from the original)
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
    r0 = call_0056878c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    S7 = guest::cpu()->s[7];
    S8 = guest::cpu()->s[8];
    r1 = r0;
    r0 = r6;
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
    r0 = call_00297b60(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r0 = 0u;
    *gptr<u8>(r5 + 0x7fa8u) = u8(r0);  // (from the original)
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00191368
GUEST_EXPORT(0x00191368, d_00191368::f_00191368);

// f_001916f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001916f0 {

inline constexpr guest::Function<0x002b6a00, u32(u32, u32, u32, u32)> call_002b6a00;  // (from the original)
inline constexpr guest::Function<0x002f6a30, u32(u32, u32, u32, u32)> call_002f6a30;  // (from the original)
inline constexpr guest::Function<0x002f6e98, u32(u32, u32, u32, u32)> call_002f6e98;  // (from the original)
inline constexpr guest::Function<0x002f7508, u32(u32, u32, u32, u32)> call_002f7508;  // (from the original)
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)
inline constexpr guest::Function<0x006aa944, u32(u32, u32, u32, u32)> call_006aa944;  // (from the original)

u32 f_001916f0(u32 r0, float S0, float S1) {
    u32 ea = 0;
    u32 res = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r2 = r0 + 0x58u;  // (from the original)
    r7 = r0;
    r13 = r13 - 0x90u;  // (from the original)
    r4 = 0x84839cu;  // (from the original)
    r0 = r0 + 0x4e8u;  // (from the original)
    r9 = r13 + 0x4cu;  // (from the original)
    ea = r4 + 0x248u;  // (from the original)
    r1 = *gptr<u32>(ea);
    ea = r13 + 0x1cu;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    ea = r4 + 0x24cu;  // (from the original)
    r3 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r8 = *gptr<u32>(ea + 0xc);  // (from the original)
    r12 = *gptr<u32>(ea + 0x10);  // (from the original)
    *gptr<u32>(r9) = u32(r1);
    *gptr<u32>(r9 + 4) = u32(r3);
    *gptr<u32>(r9 + 8) = u32(r5);
    *gptr<u32>(r9 + 0xc) = u32(r6);  // (from the original)
    *gptr<u32>(r9 + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(r9 + 0x14) = u32(r12);  // (from the original)
    r1 = *gptr<u32>(r4 + 0x260u);  // (from the original)
    *gptr<u32>(r13 + 0x48u) = u32(r0);  // (from the original)
    r0 = r7 + 0x7798u;  // (from the original)
    *gptr<u32>(r13 + 0x44u) = u32(r2);  // (from the original)
    *gptr<u32>(r13 + 0x64u) = u32(r1);  // (from the original)
    r2 = 0u;
    r1 = r13 + 0x44u;  // (from the original)
    *gptr<u32>(r13 + 0x20u) = u32(r0);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002f6e98(r0, r1, r2, r3);
    ea = r13 + 0x20u;  // (from the original)
    r0 = *gptr<u32>(ea);
    r9 = 0u;
    S0 = std::bit_cast<float>(*gptr<u32>(0x191884u));  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(0x191888u));  // (from the original)
    ea = r0 + 0xd4u;  // (from the original)
    r11 = 0x1000411u;  // (from the original)
    r1 = *gptr<u32>(ea) | 0x40u;  // (from the original)
    ea = r0 + 0xd4u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    ea = r13;
    *gptr<u32>(ea) = u32(r9);
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(r9);
    r0 = r13 + 8u;
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(r9);
    ea = r13 + 0xcu;  // (from the original)
    *gptr<u32>(ea) = u32(r9);
    ea = r13 + 0x10u;  // (from the original)
    *gptr<u32>(ea) = u32(r9);
    ea = r13 + 0x14u;  // (from the original)
    *gptr<u32>(ea) = u32(r9);
    ea = r13 + 0x18u;  // (from the original)
    *gptr<u32>(ea) = u32(r9);
    r8 = 1u;
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    ea = r4 + 0x264u;  // (from the original)
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    r10 = r11 & ~r8;
    ea = r13 + 0x2cu;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    r3 = r13 + 0x38u;  // (from the original)
    ea = r4 + 0x270u;  // (from the original)
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    r4 = 0u;
    *gptr<u32>(r3) = u32(*gptr<u32>(ea));
    *gptr<u32>(r3 + 4) = u32(r1);
    *gptr<u32>(r3 + 8) = u32(r2);
    do {
L_1917bc:;
        r1 = *gptr<u32>(r13 + 0x2cu + (r4 << 2));  // (from the original)
        r0 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_0056878c(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        *gptr<u32>(r13) = u32(r0);
        r2 = 1u;
        r1 = *gptr<u32>(r13 + 0x38u + (r4 << 2));  // (from the original)
        r0 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_004b4fc0(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        *gptr<u32>(r13 + 4u) = u32(r0);
        r1 = r13;
        r6 = r7 + ((r4 << 3) - r4 << 5);
        r5 = r6 + 0x74f8u;  // (from the original)
        r0 = r5;
        *gptr<u32>(r13 + 0x14u) = u32(r4);  // (from the original)
        *gptr<u32>(r13 + 0x10u) = u32(r9);  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_002b6a00(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r0 = *gptr<u32>(r13 + 0x20u);  // (from the original)
        r2 = 1u;
        r1 = r5;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_002f7508(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r0 = r6 + 0x75c4u;  // (from the original)
        r6 = r6 + 0x75d2u;  // (from the original)
        *gptr<u32>(r0) = u32(r11);
        *gptr<u8>(r6) = u8(r8);
        *gptr<u32>(r5 + 0xd0u) = u32(r10);  // (from the original)
        *gptr<u8>(r5 + 0xdbu) = u8(r8);  // (from the original)
        *gptr<u8>(r5 + 0xdcu) = u8(r8);  // (from the original)
        r0 = *gptr<u32>(r13);
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_006aa944(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r0 = r7 + (r4 << 2) + 0x7800u;  // (from the original)
        r4 = r4 + 1u;
        res = r4 - 3u;
        *gptr<u32>(r0 + 0x9cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
        guest::preempt();
    } while (res >> 0x1f != ((r4 ^ 3u) & (r4 ^ res)) >> 0x1f);  // (from the original)
    r0 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002f6a30(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = 0x7868u;  // (from the original)
    r0 = 3u;
    *gptr<u16>(r1 + r7) = u16(r0);
    r13 = r13 + 0x90u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
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


u32 f_00194504(gptr<Object_00194504_0> arg0, u32 r1, gptr<Object_00194504_2> arg2, gptr<Object_00194504_3> arg3, float S0) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r3 = arg3.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r11 = guest::cpu()->r[11];
    u32 r12 = 0;
    float S1 = 0;
    float S2 = 0;
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r8 = r0 + 0x6b54u;  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(0x1945fcu));  // (from the original)
    r4 = arg0->word_9c0 + 0x48u;  // (from the original)
    r6 = 0x849648u;  // (from the original)
    r9 = r0 + 0x6b4cu;  // (from the original)
    r7 = r6 - 0x60u;  // (from the original)
    r11 = 0u;
    r5 = *gptr<u32>(r7 + (arg0->word_6b4c << 3)) - 1u;
    r12 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f((std::bit_cast<float>(arg3->word_0) + std::bit_cast<float>(*gptr<u32>(r4)) * S1) / std::bit_cast<float>(*gptr<u32>(r6 + (arg0->word_6b54 << 2))) + S0))) + arg0->word_6b70;
    res = r12;
    if (res >> 0x1f != (r12 & (r12 ^ res)) >> 0x1f) {  // (from the original)
        r12 = r11;
        goto L_19458c;
    }
    if (s32(r5) < s32(r12)) {
        r12 = r5;
    }
L_19458c:;
    *gptr<u32>(r1) = u32(r12);
    S2 = -std::bit_cast<float>(*gptr<u32>(r3 + 4u)) + std::bit_cast<float>(*gptr<u32>(r4 + 4u)) * S1;
    r3 = 0u;
    S1 = S2 / std::bit_cast<float>(*gptr<u32>(r6 + (*gptr<u32>(r8) << 2)));
    r1 = *gptr<u32>(r7 + (*gptr<u32>(r9) << 3) + 4u) - 1u;
    S0 = std::bit_cast<float>(vcvt_sz_f(S1 + S0));
    r0 = std::bit_cast<u32>(S0) + *gptr<u32>(r0 + 0x6b74u);  // (from the original)
    res = r0;
    if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r0 = r3;
        goto L_1945f0;
    }
    if (s32(r1) < s32(r0)) {
        r0 = r1;
    }
L_1945f0:;
    arg2->word_0 = u32(r0);
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00194504
GUEST_EXPORT(0x00194504, d_00194504::f_00194504);

// f_00194bc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00194bc0 {


u32 f_00194bc0(u32 r0, u32 r1) {
    u32 r2 = 0;
    r2 = r1 & 0xfu;  // (from the original)
    r1 = 0x94f85cu;  // (from the original)
    r0 = r0 & 0xfu | r2 << 4;  // (from the original)
    *gptr<u32>(r1 + 4u) = u32(r0);
    guest::cpu()->r[1] = r1;
    return r0;
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


u32 f_00194ff4(gptr<Object_00194ff4_0> arg0, gptr<Object_00194ff4_1> arg1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r5 = guest::cpu()->r[5];
    float S0 = 0;
    float S1 = 0;
    float S3 = 0;
    S0 = std::bit_cast<float>(*gptr<u32>(0x195094u));  // (from the original)
    r5 = 0x849648u;  // (from the original)
    r0 = arg0->word_9c0 + 0x48u;  // (from the original)
    S3 = std::bit_cast<float>(*gptr<u32>(0x195098u));  // (from the original)
    arg1->word_0 = u32(std::bit_cast<u32>((float(s32(std::bit_cast<u32>(std::bit_cast<float>(r2 - arg0->word_6b70)))) + S0) * std::bit_cast<float>(*gptr<u32>(r5 + (arg0->word_6b54 << 2))) - std::bit_cast<float>(*gptr<u32>(r0)) * S0));
    S1 = std::bit_cast<float>(*gptr<u32>(r0 + 4u)) * S0;
    r0 = r3 - arg0->word_6b74;
    S0 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r0)))) + S0;
    S1 = S1 - S0 * std::bit_cast<float>(*gptr<u32>(r5 + (arg0->word_6b54 << 2)));
    arg1->word_4 = u32(std::bit_cast<u32>(S1));
    arg1->word_8 = u32(std::bit_cast<u32>(S3));
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00194ff4
GUEST_EXPORT(0x00194ff4, d_00194ff4::f_00194ff4);

// f_00195488: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00195488 {


u32 f_00195488(u32 r0, u32 r1) {
    r0 = r1 & 0xfu | (r0 & 0xfu) << 8;  // (from the original)
    r1 = 0x94f85cu;  // (from the original)
    r0 = r0 | 0x1000u;  // (from the original)
    *gptr<u32>(r1 + 4u) = u32(r0);
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r3 = arg0->word_6b5c;
    r2 = arg0->word_6b58;
    r13 = r13 - 0x18u;  // (from the original)
    *gptr<u32>(r13) = u32(arg0->word_9f0);
    *gptr<u32>(r13 + 4) = u32(r2);
    *gptr<u32>(r13 + 8) = u32(r3);
    r4 = r0 + 0x6b6cu;  // (from the original)
    r1 = r13;
    r2 = arg0->word_6b6c & 0xffu;  // (from the original)
    r0 = 0x98b2b8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001b3340(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r13;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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

inline constexpr guest::Function<0x00134544, u32(u32, u32, u32, u32)> call_00134544;  // (from the original)
inline constexpr guest::Function<0x0070ba0c, u32(u32, u32, u32, u32)> call_0070ba0c;  // (from the original)

u32 f_00195dd4(gptr<Object_00195dd4_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
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
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r12);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r4 = r0;
    r1 = *gptr<u32>(r4 + (u32(arg0->byte_a2c) << 2) + 0xa1cu);  // (from the original)
    r2 = arg0->word_6b6c & 0xffu;  // (from the original)
    r0 = 0x98b2b8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0070ba0c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = *gptr<u32>(0x6b60u + r4);  // (from the original)
    r0 = *gptr<u32>(r4 + 0x9f0u);  // (from the original)
    r1 = *gptr<u32>(r4 + (u32(*gptr<u8>(r4 + 0xa2cu)) << 2) + 0xa24u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00134544(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = u32(*gptr<u8>(0x94f85eu));  // (from the original)
    if (r0 == 0) {
        goto L_195eb4;
    }
    r7 = 0x849148u;  // (from the original)
    r14 = *gptr<u32>(r4 + 0x9f0u);  // (from the original)
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
    r5 = lsl_r(r6, r2 & 0xff);  // (from the original)
    if ((*gptr<u32>(r7 + (r1 << 2)) & r5) != 0) {
        if ((*gptr<u32>(r8 + (r1 << 2)) & r5) == 0) {
            *gptr<u16>(r0) = u16(r11);
        } else {
            *gptr<u16>(r0) = u16(r10);
        }
        goto L_195e94;
    }
    r12 = u32(*gptr<u16>(r0));
    res = r9 & ~r12;
    if (res != 0) {
        goto L_195e94;
    }
    *gptr<u16>(r0) = u16(r12 & ~0xfu | 0xcu);  // (from the original)
L_195e94:;
    res = r3 - 1u;
    r3 = res;
    r0 = r0 + 2u;
    r2 = r2 + 1u;
    if (res != 0) {
        guest::preempt();
        goto L_195e58;
    }
    r1 = r1 + 1u;
    res = r1 - 0x80u;  // (from the original)
    r4 = r4 + 0x20u;  // (from the original)
    if (res >> 0x1f != ((r1 ^ 0x80u) & (r1 ^ res)) >> 0x1f) {  // (from the original)
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
    r13 = r13 - 0x448u;  // (from the original)
    r5 = r0;
    r6 = r1;
    r8 = r13;
    r7 = r2;
    r1 = 0x400u;  // (from the original)
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r9 = r13 + 0x400u;  // (from the original)
    r4 = 0u;
    r1 = *gptr<u32>(r5 + (u32(*gptr<u8>(r5 + 0x9f4u)) << 2) + 0x9e8u);  // (from the original)
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_001c4c14(r0, r1, r2, r3);
    r0 = r5 + 0x900u;  // (from the original)
    *gptr<u32>(r13 + 0x40cu) = u32(r0);  // (from the original)
    r3 = u32(*gptr<u16>(r0 + 0xe6u));  // (from the original)
    r2 = r7;
    r1 = r6;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_001c4bf4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r9 = 0x849ef0u;  // (from the original)
    r11 = r5 + 0x6b4cu;  // (from the original)
    r10 = r9 + 0x10u;  // (from the original)
L_198014:;
    r5 = lsr_r(u32(*gptr<u8>(r8 + u32(s32(r4) >> 2))), r4 << 0x1e >> 0x1d & 0xff) & 3u;  // (from the original)
    res = r6 + *gptr<u32>(r9 + (r5 << 2));
    r6 = res;
    r7 = r7 + *gptr<u32>(r10 + (r5 << 2));
    if (res >> 0x1f) {  // (from the original)
        goto L_1980cc;
    }
    ea = r11;
    ea = 0x8495e8u + (*gptr<u32>(ea) << 3);  // (from the original)
    r0 = ea;
    if (s32(r6) >= s32(*gptr<u32>(ea))) {
        goto L_1980cc;
    }
    res = r7;
    if (res >> 0x1f != (r7 & (r7 ^ res)) >> 0x1f) {  // (from the original)
        goto L_1980cc;
    }
    if (s32(*gptr<u32>(r0 + 4u)) <= s32(r7)) {
        goto L_1980cc;
    }
    r2 = r7;
    r1 = r6;
    r0 = r13 + 0x400u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0070d904(r0, r1, r2, r3);
    if (r0 != *gptr<u32>(r13 + 0x420u)) {  // (from the original)
        goto L_1980cc;
    }
    r2 = r7;
    r1 = r6;
    r3 = u32(*gptr<u16>(*gptr<u32>(r13 + 0x40cu) + 0xe6u));  // (from the original)
    r0 = r13 + 0x400u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001c4bf4(r0, r1, r2, r3);
    r4 = r4 + 1u;
    r0 = r4 & 3u;
    r1 = r8 + u32(s32(r4) >> 2);
    r3 = u32(*gptr<u8>(0x848f53u + r0));  // (from the original)
    *gptr<u8>(r1) = u8(u32(*gptr<u8>(r1)) & r3 | lsl_r(0u, r0 << 1 & 0xff));  // (from the original)
    guest::preempt();
    goto L_198014;
L_1980cc:;
    r1 = *gptr<u32>(r10 + (r5 << 2));
    r6 = r6 - *gptr<u32>(r9 + (r5 << 2));
    r7 = r7 - r1;
    if (r5 != 3u) {
        goto L_19812c;
    }
    do {
L_1980e4:;
        res = r4 - 1u;
        r4 = res;
        if (res >> 0x1f) {  // (from the original)
            r0 = r13 + 0x400u;  // (from the original)
            r13 = r13 + 0x424u;  // (from the original)
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
        r5 = lsr_r(u32(*gptr<u8>(r8 + u32(s32(r4) >> 2))), r4 << 0x1e >> 0x1d & 0xff) & 3u;  // (from the original)
        r1 = *gptr<u32>(r10 + (r5 << 2));
        r6 = r6 - *gptr<u32>(r9 + (r5 << 2));
        r7 = r7 - r1;
        guest::preempt();
    } while (r5 == 3u);
L_19812c:;
    r0 = r4 & 3u;
    r2 = r8 + u32(s32(r4) >> 2);
    r3 = u32(*gptr<u8>(0x848f53u + r0));  // (from the original)
    *gptr<u8>(r2) = u8(u32(*gptr<u8>(r2)) & r3 | lsl_r(r5 + 1u & 3u, r0 << 1 & 0xff));  // (from the original)
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
    u32 res = 0;
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
    r13 = r13 - 0x38u;  // (from the original)
    r4 = r0;
    r11 = r3;
    *gptr<u32>(r13 + 0xcu) = u32(r1 - 8u);  // (from the original)
    r6 = r2 - 8u;
    r1 = *gptr<u32>(r4 + (u32(arg0->byte_9f4) << 2) + 0x9e8u);  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_001c4c14(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r8 = 0u;
    r7 = r4 + 0x6b4cu;  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r4 + 0x900u);  // (from the original)
L_198314:;
    res = *gptr<u32>(r13 + 0xcu) + r8;  // (from the original)
    r9 = res;
    if (res >> 0x1f) {  // (from the original)
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
    res = r6 + r4;
    r5 = res;
    if (res >> 0x1f) {  // (from the original)
        goto L_1983a4;
    }
    r1 = *gptr<u32>(r7);
    if (s32(*gptr<u32>(0x8495e8u + (r1 << 3) + 4u)) <= s32(r5)) {  // (from the original)
        goto L_1983a4;
    }
    if ((u32(*gptr<u16>(r11 + (r4 << 1))) & r10) == 0) {
        goto L_1983a4;
    }
    r2 = r5;
    r1 = r9;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0070d904(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = 0xfu;  // (from the original)
    res = r1 & ~r0;
    if (res == 0) {
        goto L_1983a4;
    }
    r2 = r5;
    r1 = r9;
    r3 = u32(*gptr<u16>(*gptr<u32>(r13 + 0x10u) + 0xe6u));  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_001c4bf4(r0, r1, r2, r3);
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
    r0 = r13;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    r1 = 0x8eae94u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r3 = 2u;
    arg0->word_0 = u32(r1);
    arg0->word_28 = u32(r1 + 0x6cu);  // (from the original)
    r2 = 0x8ef284u;  // (from the original)
    r0 = r0 + 0x5c6cu;  // (from the original)
    r4 = r0 + 0x398u;  // (from the original)
    arg0->word_5c6c = u32(0x8ee228u);  // (from the original)
    arg0->word_6004 = u32(r2);
    arg0->word_60e8 = u32(r2 + 0x44u);  // (from the original)
    r2 = 0x518u;  // (from the original)
    r1 = 0x2e0b3cu;  // (from the original)
    r0 = r0 + 0x4b0u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    r0 = call_002f770c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f18f4u;  // (from the original)
    *gptr<u32>(r0 - 0x398u) = u32(r1);  // (from the original)
    r0 = r0 - 0x248u;  // (from the original)
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14cu;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f80dcu;  // (from the original)
    r0 = r0 - 0x1f54u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 0x1e5cu;  // (from the original)
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc4u;  // (from the original)
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x140u;  // (from the original)
    r0 = call_002f7710(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xe4u;  // (from the original)
    r0 = call_002f7710(r0, r1, r2, r3);
    r1 = 0x2b6ef8u;  // (from the original)
    r4 = r0 - 0x1b74u;  // (from the original)
    r3 = 0x15u;  // (from the original)
    r2 = 0xe0u;  // (from the original)
    r0 = r0 - 0x1260u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x408u;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x2cu;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14cu;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14cu;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 8u;
    r0 = call_00317dec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x108u;  // (from the original)
    r0 = call_002f7710(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xe0u;  // (from the original)
    r0 = call_0031c92c(r0, r1, r2, r3);
    r1 = 0x2b6ef8u;  // (from the original)
    r4 = r0 - 0x3b58u;  // (from the original)
    r3 = 3u;
    r2 = 0xe0u;  // (from the original)
    r0 = r0 - 0x2a0u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x1c04u;  // (from the original)
    r0 = call_0023fb5c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = 0x8ef958u;  // (from the original)
    r2 = r1 + 0x48u;  // (from the original)
    *gptr<u32>(r0 - 0xd80u) = u32(r2);  // (from the original)
    *gptr<u32>(r0 - 0xe60u) = u32(r1);  // (from the original)
    r0 = r0 - 0x84u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14cu;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xe4u;  // (from the original)
    r0 = call_002f7710(r0, r1, r2, r3);
    r1 = 0x2b6ef8u;  // (from the original)
    r4 = r0 - 0xb84u;  // (from the original)
    r3 = 0xcu;  // (from the original)
    r2 = 0xe0u;  // (from the original)
    r0 = r0 - 0xa80u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    r0 = call_002b6ef8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8ef364u;  // (from the original)
    *gptr<u32>(r0 - 0x36cu) = u32(r1);  // (from the original)
    r0 = r0 - 0x14cu;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xe0u;  // (from the original)
    r0 = call_002b6ef8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xd8u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14cu;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14cu;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14cu;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14cu;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x248u;  // (from the original)
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 8u;
    r0 = call_00317dec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 8u;
    r0 = r0 - 0x50u;  // (from the original)
    return call_006aaa30(r0, r1, r2, r3);
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
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    u32 cf = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r4 = r0;
    r8 = r1;
    r7 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb94c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0 + 0x6bd0u;  // (from the original)
    r1 = r8;
    r0 = r4 + 0x1ec0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00724400(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r7;
    r0 = r4 + 0x1ec0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00724400(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0030b6b8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x20b4u;  // (from the original)
    zf = r0 == r1;
    cf = r0 >= r1;
    r0 = r13 + 4u;
    if (!(cf && !zf)) {
        guest::cpu()->r[13] = r13;
        r0 = call_0030b6b8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = r0 - 0x20abu;  // (from the original)
        r0 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        r0 = call_0030b6b8(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = r5 + (r0 - 0x20abu);  // (from the original)
        if (s32(r5) > s32(0xau)) {  // (from the original)
            r1 = 0x20b5u;  // (from the original)
            r0 = r13 + 8u;
            guest::cpu()->r[13] = r13;
            r0 = call_002fd050(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r1 = uxth(r5 + 0x20a1u);  // (from the original)
            r0 = r13 + 4u;
            guest::cpu()->r[13] = r13;
            r0 = call_002fd050(r0, r1, r2, r3);
            goto L_199248;
        }
        r1 = uxth(r5 + 0x20abu);  // (from the original)
        r0 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        r0 = call_002fd050(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = 0x95bfdcu;  // (from the original)
        r0 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, r2, r3);
        goto L_199248;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0030b6b8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0 - 0x20b4u;  // (from the original)
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0030b6b8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r5 + (r0 - 0x20b4u);  // (from the original)
    if (s32(r5) > s32(0x63u)) {  // (from the original)
        r1 = 0x2117u;  // (from the original)
        r0 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        r0 = call_002fd050(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = uxth(r5 + 0x2051u);  // (from the original)
        r0 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_002fd050(r0, r1, r2, r3);
        goto L_199248;
    }
    r1 = uxth(r5 + 0x20b4u);  // (from the original)
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fd050(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
L_199248:;
    r5 = 1u;
    r3 = 0u;
    r2 = r13 + 4u;
    r1 = r8;
    r0 = r6;
    *gptr<u32>(r13) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_002bf9cc(r0, r1, r2, r3);
    r3 = 0u;
    r2 = r13 + 8u;
    r1 = r7;
    r0 = r6;
    *gptr<u32>(r13) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_002bf9cc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r8;
    r0 = r4 + 0x1ec0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0026d644(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r7;
    r0 = r4 + 0x1ec0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0026d644(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r13 + 4u;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 zf = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r4 = r0;
    r6 = r1;
    r5 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0x77u) {  // (from the original)
        goto L_1997a4;
    }
    r1 = r6;
    r0 = r4 + 0x1ec0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00718c0c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_1997a4;
    }
    r1 = r5;
    r0 = r4 + 0x1ec0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00718c0c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_1997a4;
    }
    r1 = r6;
    r0 = r4 + 0x1ec0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00724400(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r5;
    r0 = r4 + 0x1ec0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00724400(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r4 = r13;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb34(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    zf = r0 == 0x75u;  // (from the original)
    if (!zf) {
        zf = r0 == 0x76u;  // (from the original)
    }
    if (zf) {
        goto L_1997b0;
    }
    zf = r0 == 0x33u;  // (from the original)
    if (!zf) {
        zf = r0 == 0x34u;  // (from the original)
    }
    if (zf) {
        goto L_1997c4;
    }
    goto L_199904;
L_1997a4:;
    r0 = 0u;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_1997b0:;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0076b9b0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 >= 9u) {
        goto L_199904;
    }
L_1997c4:;
    r4 = r13 + 4u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb34(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    zf = r0 == 0x75u;  // (from the original)
    if (!zf) {
        zf = r0 == 0x76u;  // (from the original)
    }
    if (!zf) {
        zf = r0 == 0x33u;  // (from the original)
        if (!zf) {
            zf = r0 == 0x34u;  // (from the original)
        }
        if (zf) {
            goto L_199800;
        }
        goto L_199904;
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0076b9b0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 >= 9u) {
        goto L_199904;
    }
L_199800:;
    r4 = r13;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb34(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r6 = 0x7ffeu;  // (from the original)
    zf = r0 == 0x33u;  // (from the original)
    if (!zf) {
        zf = r0 == 0x34u;  // (from the original)
    }
    if (zf) {
        goto L_19987c;
    }
    zf = r0 == 0x75u;  // (from the original)
    if (!zf) {
        zf = r0 == 0x76u;  // (from the original)
    }
    if (zf) {
        goto L_199890;
    } else {
        r5 = r6;
    }
L_19982c:;
    r4 = r13 + 4u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb34(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    zf = r0 == 0x33u;  // (from the original)
    if (!zf) {
        zf = r0 == 0x34u;  // (from the original)
    }
    if (zf) {
        goto L_1998c0;
    }
    zf = r0 == 0x75u;  // (from the original)
    if (!zf) {
        zf = r0 == 0x76u;  // (from the original)
    }
    if (zf) {
        goto L_1998d4;
    } else {
        r4 = r6;
    }
L_199854:;
    if (r5 != r4) {
        goto L_199904;
    }
    r0 = 1u;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_19987c:;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0030b6b8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r5 = r0;
    guest::preempt();
    goto L_19982c;
L_199890:;
    r1 = r4;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_007693d0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r5 = r0;
    guest::preempt();
    goto L_19982c;
L_1998c0:;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0030b6b8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    guest::preempt();
    goto L_199854;
L_1998d4:;
    r1 = r4;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_007693d0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    guest::preempt();
    goto L_199854;
L_199904:;
    r0 = 0u;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x18u;  // (from the original)
    r1 = 1u;
    arg0->byte_69f = u8(r1);
    r0 = r4 + 0xa1b0u;  // (from the original)
    r5 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_0029b464(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r4 + 0x670u) = u32(r0);  // (from the original)
    r1 = r13;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0071af4c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4 + 0x1bcu;  // (from the original)
    *gptr<u32>(r0 + 0x4d4u) = u32(*gptr<u32>(r13));  // (from the original)
    *gptr<u32>(r0 + 0x4d8u) = u32(*gptr<u32>(r13 + 4u));  // (from the original)
    *gptr<u32>(r0 + 0x4dcu) = u32(*gptr<u32>(r13 + 8u));  // (from the original)
    r1 = *gptr<u32>(r4 + 0xccu);  // (from the original)
    r0 = r4 + 0x1ec0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00718c0c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = *gptr<u32>(r4 + 0xccu);  // (from the original)
    if (r0 != 0) {
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_0019b288(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    if (r1 != 0x11u) {  // (from the original)
        if (r1 == 0x10u) {  // (from the original)
            goto L_199a08;
        }
        r0 = *gptr<u32>(0xa328u + r4);  // (from the original)
        if (r0 == 0) {
            r13 = r13 + 0x18u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
        guest::cpu()->r[13] = r13;
        r0 = call_00723f84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            r13 = r13 + 0x18u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
        r1 = *gptr<u32>(r4 + 0xccu);  // (from the original)
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_0019cfd8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0019d500(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_199a08:;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0019c440(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x28u;  // (from the original)
    r1 = arg0->word_cc;
    r0 = r0 + 0x1ec0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00724400(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00305630(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb94c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0 + 0x6bd0u;  // (from the original)
    r7 = r5;
    r0 = r0 + 0x6f08u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00303660(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0 + r6;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002bfcb8(r0, r1, r2, r3);
    r9 = 0x84a538u;  // (from the original)
    r5 = r0;
    r8 = 1u;
    if (r0 != 0) {
        r1 = r0;
        r3 = r13 + 8u;
        r2 = 1u;
        r0 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_006bba30(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = *gptr<u32>(r13 + 8u);
        r0 = r7;
        if (r5 + r1 == r6) {
            guest::cpu()->r[13] = r13;
            r0 = call_002bfcfc(r0, r1, r2, r3);
            r3 = guest::cpu()->r[3];
            *gptr<u32>(r4 + 0xdcu) = u32(0x26u);  // (from the original)
            r1 = *gptr<u32>(r9);
            r2 = *gptr<u32>(r9 + 4);
            r0 = r4 + 0xa4u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_008165e4(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r0 = 0u;
            r13 = r13 + 0x28u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
        guest::cpu()->r[13] = r13;
        r0 = call_002bfcfc(r0, r1, r2, r3);
        *gptr<u32>(r13) = u32(r8);
        r1 = *gptr<u32>(r4 + 0xccu);  // (from the original)
        r3 = 0u;
        r2 = r13 + 4u;
        r0 = r7;
        guest::cpu()->r[13] = r13;
        r0 = call_002bf9cc(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    } else {
        r1 = *gptr<u32>(r4 + 0xccu);  // (from the original)
        r2 = 0x95bfdcu;  // (from the original)
        r3 = 0u;
        r0 = r7;
        *gptr<u32>(r13) = u32(r8);
        guest::cpu()->r[13] = r13;
        r0 = call_002bf9cc(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r1 = *gptr<u32>(r4 + 0xccu);  // (from the original)
    r0 = r4 + 0x1ec0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0026d644(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r9 = r9 + 0x10u;  // (from the original)
    r0 = r4 + 0xa4u;  // (from the original)
    r1 = *gptr<u32>(r9);
    r2 = *gptr<u32>(r9 + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_008165e4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x2a0u;  // (from the original)
    r5 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb94c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r8 = r0 + 0x7000u;  // (from the original)
    r7 = r5 + 0xa000u;  // (from the original)
    r1 = *gptr<u32>(r5 + 0xd0u);  // (from the original)
    r0 = *gptr<u32>(r7 + 0x328u);  // (from the original)
    r8 = r8 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00723f68(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r4 = r0;
    r1 = *gptr<u32>(r5 + 0xccu);  // (from the original)
    r0 = *gptr<u32>(r7 + 0x328u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00723f68(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r9 = r0;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002ff368(r0, r1, r2, guest::cpu()->r[3]);
    r6 = r13;
    r2 = 0x31u;  // (from the original)
    r1 = r4;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x31u;  // (from the original)
    r1 = r4 + 0x34u;  // (from the original)
    r0 = r6 + 0x34u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x42u;  // (from the original)
    r1 = r4 + 0x68u;  // (from the original)
    r0 = r6 + 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x182u;  // (from the original)
    r1 = r4 + 0xaau;  // (from the original)
    r0 = r6 + 0xaau;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f8574(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x42u;  // (from the original)
    r1 = r4 + 0x22cu;  // (from the original)
    r0 = r6 + 0x22cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r4 + 0x274u;  // (from the original)
    *gptr<u8>(r13 + 0x26eu) = u8(u32(*gptr<u8>(r4 + 0x26eu)));  // (from the original)
    *gptr<u8>(r13 + 0x26fu) = u8(u32(*gptr<u8>(r4 + 0x26fu)));  // (from the original)
    *gptr<u8>(r13 + 0x270u) = u8(u32(*gptr<u8>(r4 + 0x270u)));  // (from the original)
    *gptr<u8>(r13 + 0x271u) = u8(u32(*gptr<u8>(r4 + 0x271u)));  // (from the original)
    *gptr<u8>(r13 + 0x272u) = u8(u32(*gptr<u8>(r4 + 0x272u)));  // (from the original)
    r0 = r6 + 0x274u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r4 + 0x278u;  // (from the original)
    r0 = r6 + 0x278u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00311c70(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = *gptr<u32>(r5 + 0xd0u);  // (from the original)
    r0 = *gptr<u32>(r7 + 0x328u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00723fa0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r0;
    r2 = r9;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_002bff84(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = *gptr<u32>(r5 + 0xccu);  // (from the original)
    r0 = *gptr<u32>(r7 + 0x328u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00723fa0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r0;
    r2 = r13;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_002bff84(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = *gptr<u32>(r5 + 0xd0u);  // (from the original)
    r0 = *gptr<u32>(r7 + 0x328u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e354c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = *gptr<u32>(r5 + 0xccu);  // (from the original)
    r0 = *gptr<u32>(r7 + 0x328u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e354c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002f77e8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x2a0u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0019b14c
GUEST_EXPORT(0x0019b14c, d_0019b14c::f_0019b14c);

// f_0019c440: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0019c440 {

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
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0xf8u;  // (from the original)
    r5 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_0068f114(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5 + 0x1bcu;  // (from the original)
    r6 = r0;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_002b9aa4(r0, r1, r2, r3);
    r8 = 0u;
    *gptr<u8>(r6 + 0x4e2u) = u8(r8);  // (from the original)
    r6 = r13 + 0xd0u;  // (from the original)
    r1 = *gptr<u32>(0x84a878u + 4);  // (from the original)
    r2 = *gptr<u32>(0x84a878u + 8);  // (from the original)
    r4 = r8;
    r3 = 6u;
    *gptr<u32>(r6) = u32(*gptr<u32>(0x84a878u));  // (from the original)
    *gptr<u32>(r6 + 4) = u32(r1);
    *gptr<u32>(r6 + 8) = u32(r2);
    r2 = 0x20u;  // (from the original)
    r1 = 0x5e35dcu;  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb94c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x6f08u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00303660(r0, r1, r2, r3);
    res = r0 - 0x64u;  // (from the original)
    r6 = r0;
    r9 = 7u;
    r7 = r13 + 0x10u;  // (from the original)
    if (res >> 0x1f == ((r0 ^ 0x64u) & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r4 = r13 + 4u;
        *gptr<u32>(r13) = u32(r8);
        *gptr<u32>(r4) = u32(0x1eu);  // (from the original)
        *gptr<u32>(r4 + 4) = u32(r9);
        r3 = 0u;
        r2 = 0xe5u;  // (from the original)
        r1 = r13 + 0xd0u;  // (from the original)
        r0 = r7;
        guest::cpu()->r[13] = r13;
        r0 = call_005e34c4(r0, r1, r2, r3);
        *gptr<u32>(r13) = u32(r8);
        *gptr<u32>(r4) = u32(0x1fu);  // (from the original)
        *gptr<u32>(r4 + 4) = u32(r9);
        r0 = r7 + 0x20u;  // (from the original)
        r3 = 0u;
        r2 = 0xe6u;  // (from the original)
        r1 = r13 + 0xd0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_005e34c4(r0, r1, r2, r3);
        r4 = 2u;
    }
    if (s32(r6) >= s32(0x3e8u)) {  // (from the original)
        ea = r13;
        *gptr<u32>(ea) = u32(r8);
        ea = r13 + 4u;
        *gptr<u32>(ea) = u32(0x20u);  // (from the original)
        *gptr<u32>(ea + 4) = u32(r9);
        r0 = r7 + (r4 << 5);
        r3 = 0u;
        r2 = 0xe7u;  // (from the original)
        r1 = r13 + 0xd0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_005e34c4(r0, r1, r2, r3);
        r4 = r4 + 1u;
    }
    if (s32(r6) >= s32(0x2710u)) {  // (from the original)
        ea = r13;
        *gptr<u32>(ea) = u32(r8);
        ea = r13 + 4u;
        *gptr<u32>(ea) = u32(0x21u);  // (from the original)
        *gptr<u32>(ea + 4) = u32(r9);
        r0 = r7 + (r4 << 5);
        r3 = 0u;
        r2 = 0xe8u;  // (from the original)
        r1 = r13 + 0xd0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_005e34c4(r0, r1, r2, r3);
        r4 = r4 + 1u;
    }
    *gptr<u32>(r13 + 8u) = u32(1u);
    *gptr<u32>(r13 + 4u) = u32(0x29u);  // (from the original)
    r0 = r7 + (r4 << 5);
    r3 = 0u;
    r2 = 0xbu;  // (from the original)
    r1 = r13 + 0xd0u;  // (from the original)
    *gptr<u32>(r13) = u32(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_005e34c4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r6 = r4 + 1u;
    r2 = r4;
    r1 = r6;
    r0 = r5 + 0xe0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e49c0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r6;
    r4 = 0u;
    if (u32(res == 0) || res >> 0x1f != (r6 & (r6 ^ res)) >> 0x1f) {  // (from the original)
        goto L_19c5c8;
    }
    do {
L_19c5ac:;
        r2 = r7 + (r4 << 5);
        r1 = r4;
        r0 = r5 + 0xe0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_005e4994(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        res = r6 - r4;
        guest::preempt();
    } while (!u32(res == 0) && res >> 0x1f == ((r6 ^ r4) & (r6 ^ res)) >> 0x1f);  // (from the original)
L_19c5c8:;
    r0 = r5 + 0xe0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e4988(r0, r1, r2, r3);
    r3 = 0u;
    r2 = r3;
    r1 = r3;
    r0 = r5 + 0xe0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005d4a78(r0, r1, r2, r3);
    r1 = 0x5e3618u;  // (from the original)
    r3 = 6u;
    r2 = 0x20u;  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    r13 = r13 + 0xf8u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0019c440
GUEST_EXPORT(0x0019c440, d_0019c440::f_0019c440);
