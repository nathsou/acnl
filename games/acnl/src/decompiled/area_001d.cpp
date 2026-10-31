// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_001d051c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001d051c {

struct __attribute__((packed)) Object_001d051c_0 {
    u8 unknown_0[0x1bc];  // (not used here)
    u8 byte_1bc;
};
GUEST_OFFSET(Object_001d051c_0, byte_1bc, 0x1bc);  // (from the original)

inline constexpr guest::Function<0x001aae00, u32(u32, u32, u32, u32)> call_001aae00;  // (from the original)

u32 f_001d051c(gptr<Object_001d051c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    guest::cpu()->r[13] -= 8u;
    if (u32(arg0->byte_1bc) != 0) {
        call_001aae00(r0, 2u, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    *gptr<u8>(r0 + 0x1bcu) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_001d051c
GUEST_EXPORT(0x001d051c, d_001d051c::f_001d051c);

// f_001d2694: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001d2694 {

inline guest::global<u32, 0x001d26c8> global_001d26c8;  // (from the original)
inline guest::global<u32, 0x001d26cc> global_001d26cc;  // (from the original)
inline constexpr guest::Function<0x001ce548, u32(u32, u32, u32, u32)> call_001ce548;  // (from the original)

u32 f_001d2694(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3, float S0, float S1, float S2) {
    u32 r13 = guest::cpu()->r[13];
    float S1_1 = 0;
    float S0_1 = 0;
    u32 r1_1 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    *gptr<u32>(r13) = u32(0u);
    S1_1 = std::bit_cast<float>(*global_001d26c8);
    S0_1 = std::bit_cast<float>(*global_001d26cc);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S0;
    guest::cpu()->s[3] = S1;
    guest::cpu()->s[4] = S2;
    call_001ce548(guest::cpu()->r[0], 0xaeu, 1u, 1u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return guest::cpu()->r[0];
}

}  // namespace d_001d2694
GUEST_EXPORT(0x001d2694, d_001d2694::f_001d2694);

// f_001d2e8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001d2e8c {

struct __attribute__((packed)) Object_001d2e8c_0 {
    u8 unknown_0[0x224];  // (not used here)
    u8 byte_224;
    u8 unknown_225[0x3];  // (not used here)
    u32 word_228;
};
GUEST_OFFSET(Object_001d2e8c_0, byte_224, 0x224);  // (from the original)
GUEST_OFFSET(Object_001d2e8c_0, word_228, 0x228);  // (from the original)


void f_001d2e8c(gptr<Object_001d2e8c_0> arg0, u32 r1, u32 r2) {
    arg0->byte_224 = u8(r1);
    arg0->word_228 = u32(r2);
    return;
}

}  // namespace d_001d2e8c
GUEST_EXPORT(0x001d2e8c, d_001d2e8c::f_001d2e8c);

// f_001d333c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001d333c {

inline guest::global<u32, 0x001d3450> global_001d3450;  // (from the original)
inline guest::global<u32, 0x001d3454> global_001d3454;  // (from the original)
inline constexpr guest::Function<0x001ac854, u32(u32, u32, u32, u32)> call_001ac854;  // (from the original)
inline constexpr guest::Function<0x0027b428, u32(u32, u32, u32, u32)> call_0027b428;  // (from the original)
inline constexpr guest::Function<0x0032a470, u32(u32, u32, u32, u32)> call_0032a470;  // (from the original)

u32 f_001d333c(u32 r0, u32 r1_unused, u32 r2, float S0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    float S0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 ea_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    float S0_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    float S0_3 = 0;
    u32 r0_7 = 0;
    float S0_4 = 0;
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0_1 = call_001ac854(r0, 0u, r2, guest::cpu()->r[3]);
    S0_1 = guest::cpu()->s[0];
    *gptr<u32>(r0_1) = u32(0x8ebc68u);  // (from the original)
    r0_2 = r0_1 + 0x144u;  // (from the original)
    r1_1 = ~0u;
    *gptr<u32>(r0_2) = u32(0u);
    ea_1 = r0_2 + 4u;
    *gptr<u32>(ea_1) = u32(r1_1);
    *gptr<u32>(ea_1 + 4) = u32(0u);
    *gptr<u32>(r0_2 + 0xcu) = u32(r1_1);  // (from the original)
    *gptr<u32>(r0_2 + 0x10u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_2 + 0x14u) = u32(r1_1);  // (from the original)
    *gptr<u32>(r0_2 + 0x18u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_2 + 0x1cu) = u32(r1_1);  // (from the original)
    *gptr<u32>(r0_2 + 0x20u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_2 + 0x24u) = u32(r1_1);  // (from the original)
    *gptr<u32>(r0_2 + 0x28u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_2 + 0x2cu) = u32(r1_1);  // (from the original)
    *gptr<u32>(r0_2 + 0x30u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_2 + 0x34u) = u32(r1_1);  // (from the original)
    *gptr<u32>(r0_2 + 0x38u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_2 + 0x3cu) = u32(r1_1);  // (from the original)
    *gptr<u32>(r0_2 + 0x40u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_2 + 0x44u) = u32(r1_1);  // (from the original)
    *gptr<u32>(r0_2 + 0x48u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_2 + 0x4cu) = u32(r1_1);  // (from the original)
    *gptr<u32>(r0_2 + 0x50u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_2 + 0x54u) = u32(r1_1);  // (from the original)
    *gptr<u32>(r0_2 + 0x58u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_2 + 0x5cu) = u32(r1_1);  // (from the original)
    *gptr<u32>(r0_2 + 0x60u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_2 + 0x64u) = u32(r1_1);  // (from the original)
    *gptr<u32>(r0_2 + 0x68u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_2 + 0x6cu) = u32(r1_1);  // (from the original)
    *gptr<u32>(r0_2 + 0x70u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_2 + 0x74u) = u32(r1_1);  // (from the original)
    *gptr<u8>(r0_1 + 0x1bcu) = u8(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0x1bdu) = u8(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0x1beu) = u8(0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x1c0u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x1c4u) = u32(0u);  // (from the original)
    r0_3 = r0_1 + 0x200u;  // (from the original)
    *gptr<u8>(r0_1 + 0x1c8u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    r0_4 = call_0027b428(r0_3, r1_1, r0_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    S0_2 = guest::cpu()->s[0];
    r0_5 = r0_4 + 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    r0_6 = call_0032a470(r0_5, r1_2, r2_1, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    S0_3 = std::bit_cast<float>(*global_001d3450);
    r0_7 = r0_6 - 0x224u;  // (from the original)
    *gptr<u32>(r0_7 + 0x238u) = u32(std::bit_cast<u32>(S0_3));  // (from the original)
    *gptr<u32>(r0_7 + 0x23cu) = u32(std::bit_cast<u32>(S0_3));  // (from the original)
    *gptr<u32>(r0_7 + 0x240u) = u32(std::bit_cast<u32>(S0_3));  // (from the original)
    S0_4 = std::bit_cast<float>(*global_001d3454);
    *gptr<u32>(r0_7 + 0x244u) = u32(std::bit_cast<u32>(S0_4));  // (from the original)
    *gptr<u32>(r0_7 + 0x248u) = u32(std::bit_cast<u32>(S0_4));  // (from the original)
    *gptr<u32>(r0_7 + 0x24cu) = u32(std::bit_cast<u32>(S0_4));  // (from the original)
    *gptr<u32>(r0_7 + 0x250u) = u32(std::bit_cast<u32>(S0_4));  // (from the original)
    *gptr<u32>(r0_7 + 0x254u) = u32(std::bit_cast<u32>(S0_4));  // (from the original)
    *gptr<u32>(r0_7 + 0x258u) = u32(std::bit_cast<u32>(S0_4));  // (from the original)
    *gptr<u32>(r0_7 + 0x25cu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_7 + 0x260u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_7 + 0x264u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_7 + 0x268u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_7 + 0x26cu) = u32(0u);  // (from the original)
    *gptr<u8>(r0_7 + 0x1c8u) = u8(0u);  // (from the original)
    *gptr<u32>(r0_7 + 0x1ccu) = u32(0u);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    return r0_7;
}

}  // namespace d_001d333c
GUEST_EXPORT(0x001d333c, d_001d333c::f_001d333c);

// f_001d3468: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001d3468 {

struct __attribute__((packed)) Object_001d3468_0 {
    u32 word_0;
    u8 unknown_4[0x140];  // (not used here)
    u32 word_144;
    u32 word_148;
    u32 word_14c;
    u32 word_150;
    u32 word_154;
    u32 word_158;
    u32 word_15c;
    u32 word_160;
    u32 word_164;
    u32 word_168;
    u32 word_16c;
    u32 word_170;
    u32 word_174;
    u32 word_178;
    u32 word_17c;
    u32 word_180;
    u32 word_184;
    u32 word_188;
    u32 word_18c;
    u32 word_190;
    u32 word_194;
    u32 word_198;
    u32 word_19c;
    u32 word_1a0;
    u32 word_1a4;
    u32 word_1a8;
    u32 word_1ac;
    u32 word_1b0;
    u32 word_1b4;
    u32 word_1b8;
};
GUEST_OFFSET(Object_001d3468_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001d3468_0, word_144, 0x144);  // (from the original)
GUEST_OFFSET(Object_001d3468_0, word_148, 0x148);  // (from the original)
GUEST_OFFSET(Object_001d3468_0, word_14c, 0x14c);  // (from the original)
GUEST_OFFSET(Object_001d3468_0, word_150, 0x150);  // (from the original)
GUEST_OFFSET(Object_001d3468_0, word_154, 0x154);  // (from the original)
GUEST_OFFSET(Object_001d3468_0, word_158, 0x158);  // (from the original)
GUEST_OFFSET(Object_001d3468_0, word_15c, 0x15c);  // (from the original)
GUEST_OFFSET(Object_001d3468_0, word_160, 0x160);  // (from the original)
GUEST_OFFSET(Object_001d3468_0, word_164, 0x164);  // (from the original)
GUEST_OFFSET(Object_001d3468_0, word_168, 0x168);  // (from the original)
GUEST_OFFSET(Object_001d3468_0, word_16c, 0x16c);  // (from the original)
GUEST_OFFSET(Object_001d3468_0, word_170, 0x170);  // (from the original)
GUEST_OFFSET(Object_001d3468_0, word_174, 0x174);  // (from the original)
GUEST_OFFSET(Object_001d3468_0, word_178, 0x178);  // (from the original)
GUEST_OFFSET(Object_001d3468_0, word_17c, 0x17c);  // (from the original)
GUEST_OFFSET(Object_001d3468_0, word_180, 0x180);  // (from the original)
GUEST_OFFSET(Object_001d3468_0, word_184, 0x184);  // (from the original)
GUEST_OFFSET(Object_001d3468_0, word_188, 0x188);  // (from the original)
GUEST_OFFSET(Object_001d3468_0, word_18c, 0x18c);  // (from the original)
GUEST_OFFSET(Object_001d3468_0, word_190, 0x190);  // (from the original)
GUEST_OFFSET(Object_001d3468_0, word_194, 0x194);  // (from the original)
GUEST_OFFSET(Object_001d3468_0, word_198, 0x198);  // (from the original)
GUEST_OFFSET(Object_001d3468_0, word_19c, 0x19c);  // (from the original)
GUEST_OFFSET(Object_001d3468_0, word_1a0, 0x1a0);  // (from the original)
GUEST_OFFSET(Object_001d3468_0, word_1a4, 0x1a4);  // (from the original)
GUEST_OFFSET(Object_001d3468_0, word_1a8, 0x1a8);  // (from the original)
GUEST_OFFSET(Object_001d3468_0, word_1ac, 0x1ac);  // (from the original)
GUEST_OFFSET(Object_001d3468_0, word_1b0, 0x1b0);  // (from the original)
GUEST_OFFSET(Object_001d3468_0, word_1b4, 0x1b4);  // (from the original)
GUEST_OFFSET(Object_001d3468_0, word_1b8, 0x1b8);  // (from the original)

inline constexpr guest::Function<0x001abcd4, u32(u32, u32, u32, u32)> call_001abcd4;  // (from the original)
inline constexpr guest::Function<0x004edd84, u32(u32, u32, u32, u32)> call_004edd84;  // (from the original)
inline constexpr guest::Function<0x004ef50c, u32(u32, u32, u32, u32)> call_004ef50c;  // (from the original)

u32 f_001d3468(gptr<Object_001d3468_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
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
    u32 r0_7 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0x8ebc68u);  // (from the original)
    r0_1 = r0 + 0x144u;  // (from the original)
    r2_1 = ~0u;
    arg0->word_1b4 = u32(0u);
    arg0->word_1b8 = u32(r2_1);
    arg0->word_1ac = u32(0u);
    arg0->word_1b0 = u32(r2_1);
    arg0->word_1a4 = u32(0u);
    arg0->word_1a8 = u32(r2_1);
    arg0->word_19c = u32(0u);
    arg0->word_1a0 = u32(r2_1);
    arg0->word_194 = u32(0u);
    arg0->word_198 = u32(r2_1);
    arg0->word_18c = u32(0u);
    arg0->word_190 = u32(r2_1);
    arg0->word_184 = u32(0u);
    arg0->word_188 = u32(r2_1);
    arg0->word_17c = u32(0u);
    arg0->word_180 = u32(r2_1);
    arg0->word_174 = u32(0u);
    arg0->word_178 = u32(r2_1);
    arg0->word_16c = u32(0u);
    arg0->word_170 = u32(r2_1);
    arg0->word_164 = u32(0u);
    arg0->word_168 = u32(r2_1);
    arg0->word_15c = u32(0u);
    arg0->word_160 = u32(r2_1);
    arg0->word_154 = u32(0u);
    arg0->word_158 = u32(r2_1);
    r3_1 = r0_1 + 8u;
    arg0->word_14c = u32(0u);
    arg0->word_150 = u32(r2_1);
    arg0->word_144 = u32(0u);
    arg0->word_148 = u32(r2_1);
    r0_2 = r0_1 - 0x144u;  // (from the original)
    arg0->word_0 = u32(0x8eb174u);  // (from the original)
    call_001abcd4(r0_2, 0x8eb174u, r2_1, r3_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_3 = r0_2 + 0xccu;  // (from the original)
    r0_4 = call_004ef50c(r0_3, r1_1, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = r0_4 - 0x54u;  // (from the original)
    r0_6 = call_004edd84(r0_5, r1_2, r2_3, r3_3);
    r1_3 = guest::cpu()->r[1];
    r0_7 = r0_6 - 0x78u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_3;
    return r0_7;
}

}  // namespace d_001d3468
GUEST_EXPORT(0x001d3468, d_001d3468::f_001d3468);

// f_001d5348: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001d5348 {

struct __attribute__((packed)) Object_001d5348_0 {
    u8 unknown_0[0x34];  // (not used here)
    u32 word_34;
};
GUEST_OFFSET(Object_001d5348_0, word_34, 0x34);  // (from the original)

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> call_00136e58;  // (from the original)
inline constexpr guest::Function<0x001d7f24, u32(u32, u32, u32, u32)> call_001d7f24;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)

u32 f_001d5348(gptr<Object_001d5348_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = arg0->word_34;
    if (r0_1 != 0) {
        call_00136e58(r0_1, r1, r2, guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        *gptr<u8>(r0 + 0x38u) = u8(5u);  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 5u;
    }
    *gptr<u8>(r0 + 0x38u) = u8(0u);  // (from the original)
    r0_2 = *gptr<u32>(r0 + 0x3cu);  // (from the original)
    res_1 = r0_2 + 0xfeffff5fu;  // (from the original)
    r1_2 = res_1;
    if (res_1 != 0) {
        r0_5 = ~0u;
        *gptr<u32>(r0 + 0x3cu) = u32(r0_5);  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return r0_5;
    }
    r0_3 = call_002f74c8(r0_2, r1_2, r2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_3 != 0x27u) {  // (from the original)
        r0_5 = ~0u;
        *gptr<u32>(r0 + 0x3cu) = u32(r0_5);  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return r0_5;
    }
    r0_4 = *global_0094d080 + 0xb00u;  // (from the original)
    call_001d7f24(r0_4, 0x100079eu, 0u, guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r0_5 = ~0u;
    *gptr<u32>(r0 + 0x3cu) = u32(r0_5);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return r0_5;
}

}  // namespace d_001d5348
GUEST_EXPORT(0x001d5348, d_001d5348::f_001d5348);

// f_001d560c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001d560c {

struct __attribute__((packed)) Object_001d560c_0 {
    u8 unknown_0[0xd0];  // (not used here)
    u32 word_d0;
};
GUEST_OFFSET(Object_001d560c_0, word_d0, 0xd0);  // (from the original)

inline guest::global<u32, 0x0094cd20> global_0094cd20;  // (from the original)
inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> call_00136e58;  // (from the original)
inline constexpr guest::Function<0x0013d4f0, u32(u32, u32, u32, u32)> call_0013d4f0;  // (from the original)
inline constexpr guest::Function<0x0071d2d4, u32(u32, u32, u32, u32)> call_0071d2d4;  // (from the original)

u32 f_001d560c(gptr<Object_001d560c_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r5_1 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r0_1 = arg0->word_d0;
    if (r0_1 != 0) {
        call_00136e58(r0_1, 0u, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
    }
    r0_2 = *gptr<u32>(r0 + 0xd4u);  // (from the original)
    if (r0_2 != 0) {
        call_00136e58(r0_2, 0u, r2, guest::cpu()->r[3]);
    }
    *gptr<u8>(r0 + 0xe0u) = u8(4u);  // (from the original)
    r5_1 = *global_0094cd20;
    r2_1 = ~0u;
    r0_3 = call_0071d2d4(r5_1, 0x100026bu, r2_1, guest::cpu()->r[3]);  // (from the original)
    if (r0_3 == 0) {
        r2_2 = ~0u;
        r0_4 = call_0071d2d4(r5_1, 0x100026cu, r2_2, guest::cpu()->r[3]);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        if (r0_4 == 0) {
            goto L_1d5684;
        }
    }
    r0_5 = *global_0094cd20;
    call_0013d4f0(r0_5, 0u, 1u, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
L_1d5684:;
    *gptr<u8>(r0 + 0xd8u) = u8(4u);  // (from the original)
    *gptr<u32>(r0 + 0xdcu) = u32(0u);  // (from the original)
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_001d560c
GUEST_EXPORT(0x001d560c, d_001d560c::f_001d560c);

// f_001d56a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001d56a0 {

inline guest::global<u32, 0x001d57b8> global_001d57b8;  // (from the original)
inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x006b1d88, u32(u32, u32, u32, u32)> call_006b1d88;  // (from the original)
inline constexpr guest::Function<0x006b1da4, u32(u32, u32, u32, u32)> call_006b1da4;  // (from the original)
inline constexpr guest::Function<0x00766e64, u32(u32, u32, u32, u32)> call_00766e64;  // (from the original)

u32 f_001d56a0(u32 r0, u32 r1, float S0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r7_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    float S0_1 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    u32 r1_1 = 0;
    u32 ea_7 = 0;
    u32 ea_8 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_7 = 0;
    u32 r1_3 = 0;
    float S0_2 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r0_9 = 0;
    u32 r1_5 = 0;
    float S0_3 = 0;
    r13 = r13 - 0xc0u;  // (from the original)
    r7_1 = ~0u;
    ea_1 = r13;
    *gptr<u32>(ea_1) = u32(0u);
    ea_2 = r13 + 0x18u;  // (from the original)
    *gptr<u32>(ea_2) = u32(0u);
    ea_3 = r13 + 0x1cu;  // (from the original)
    *gptr<u32>(ea_3) = u32(0u);
    *gptr<u32>(ea_3 + 4) = u32(r7_1);
    *gptr<u32>(r13 + 0x34u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x24u) = u32(r7_1);  // (from the original)
    *gptr<u32>(r13 + 0x28u) = u32(r7_1);  // (from the original)
    *gptr<u32>(r13 + 0x30u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x2cu) = u32(r7_1);  // (from the original)
    *gptr<u16>(r13 + 0x48u) = u16(0u);  // (from the original)
    r0_1 = r13 + 0x4cu;  // (from the original)
    *gptr<u32>(r13 + 0x38u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x3cu) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x40u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x44u) = u32(0u);  // (from the original)
    *gptr<u16>(r13 + 0x4au) = u16(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0_2 = call_00301d0c(r0_1, 0x4bfb50u, 0xdu, 4u);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_3 = r0_2 - 4u;
    S0_1 = std::bit_cast<float>(*global_001d57b8);
    *gptr<u32>(r0_3 + 0x38u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    ea_4 = r0_3 + 0x3cu;  // (from the original)
    *gptr<u8>(ea_4) = u8(0x7fu);  // (from the original)
    ea_5 = r0_3 + 0x3fu;  // (from the original)
    *gptr<u8>(ea_5) = u8(0u);
    ea_6 = r0_3 + 0x40u;  // (from the original)
    *gptr<u32>(ea_6) = u32(r7_1);
    r1_1 = r0_3 - 0x48u;  // (from the original)
    ea_7 = r0_3 + 0x3du;  // (from the original)
    *gptr<u16>(ea_7) = u16(0u);
    ea_8 = r0_3 + 0x44u;  // (from the original)
    *gptr<u8>(ea_8) = u8(0u);
    *gptr<u32>(ea_8 + 4u) = u32(0u);
    *gptr<u32>(ea_8 + 8u) = u32(0u);
    *gptr<u32>(r1_1 + 0x98u) = u32(0u);  // (from the original)
    *gptr<u8>(r1_1 + 0x9cu) = u8(0u);  // (from the original)
    *gptr<u32>(r1_1 + 0xa4u) = u32(0u);  // (from the original)
    if (r1 == 0) {
        goto L_1d579c;
    }
    r0_4 = *global_0094d080;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    r0_5 = call_00766e64(r0_4, 0x100009bu, r2_1, r3_1);  // (from the original)
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    if (r0_5 == 0) {
        goto L_1d579c;
    }
    *gptr<u32>(r13) = u32(1u);
    *gptr<u8>(r13 + 4u) = u8(2u);
    *gptr<u32>(r13 + 8u) = u32(r0_5);
    r0_6 = *global_0094d080;
    r3_2 = r13;
    r1_2 = r0 + 0xd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    r0_7 = call_006b1da4(r0_6, r1_2, 0x100009bu, r3_2);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    S0_2 = guest::cpu()->s[0];
    r13 = r13 + 0xc0u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    return r0_7;
L_1d579c:;
    r0_8 = *global_0094d080;
    r1_4 = r0 + 0xd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    r0_9 = call_006b1d88(r0_8, r1_4, 0x100009bu, r3_1);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    S0_3 = guest::cpu()->s[0];
    r13 = r13 + 0xc0u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    return r0_9;
}

}  // namespace d_001d56a0
GUEST_EXPORT(0x001d56a0, d_001d56a0::f_001d56a0);

// f_001d71c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001d71c8 {

struct __attribute__((packed)) Object_001d71c8_0 {
    u8 unknown_0[0x40];  // (not used here)
    u32 word_40;
};
GUEST_OFFSET(Object_001d71c8_0, word_40, 0x40);  // (from the original)

inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> call_00136e58;  // (from the original)

u32 f_001d71c8(gptr<Object_001d71c8_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = arg0->word_40;
    if (r0_1 != 0) {
        call_00136e58(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        *gptr<u8>(r0 + 0x48u) = u8(5u);  // (from the original)
        guest::cpu()->r[13] += 8u;
        return 5u;
    }
    r0_2 = u32(*gptr<u8>(r0 + 0x48u));  // (from the original)
    if (r0_2 != 0) {
        *gptr<u8>(r0 + 0x48u) = u8(2u);  // (from the original)
        guest::cpu()->r[13] += 8u;
        return 2u;
    }
    guest::cpu()->r[13] += 8u;
    return r0_2;
}

}  // namespace d_001d71c8
GUEST_EXPORT(0x001d71c8, d_001d71c8::f_001d71c8);

// f_001d7b90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001d7b90 {

struct __attribute__((packed)) Object_001d7b90_0 {
    u8 unknown_0[0x98];  // (not used here)
    u32 word_98;
};
GUEST_OFFSET(Object_001d7b90_0, word_98, 0x98);  // (from the original)


void f_001d7b90(gptr<Object_001d7b90_0> arg0, u32 r1) {
    if (arg0->word_98 == r1) {
        r1 = 0u;
        arg0->word_98 = u32(r1);
    }
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_001d7b90
GUEST_EXPORT(0x001d7b90, d_001d7b90::f_001d7b90);

// f_001d7ba4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001d7ba4 {

inline constexpr guest::Function<0x001d560c, u32(u32, u32, u32, u32)> call_001d560c;  // (from the original)

u32 f_001d7ba4() {
    return call_001d560c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_001d7ba4
GUEST_EXPORT(0x001d7ba4, d_001d7ba4::f_001d7ba4);

// f_001d7ee0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001d7ee0 {

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x006b1d88, u32(u32, u32, u32, u32)> call_006b1d88;  // (from the original)

u32 f_001d7ee0(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0x66u) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    r1_2 = r0 + 0x28u;  // (from the original)
    r0_2 = *global_0094d080;
    guest::cpu()->r[13] += 8u;
    return call_006b1d88(r0_2, r1_2, 0x100078du, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_001d7ee0
GUEST_EXPORT(0x001d7ee0, d_001d7ee0::f_001d7ee0);

// f_001d7f24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001d7f24 {

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> call_00136e58;  // (from the original)
inline constexpr guest::Function<0x006b1d88, u32(u32, u32, u32, u32)> call_006b1d88;  // (from the original)

u32 f_001d7f24(u32 r0, u32 r1, u32 r2) {
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4_1 = r0 + (r2 << 2);
    r0_1 = *gptr<u32>(r4_1 + 0x2cu);  // (from the original)
    if (r0_1 != 0) {
        call_00136e58(r0_1, 0u, r2, guest::cpu()->r[3]);
    }
    r1_1 = r4_1 + 0x2cu;  // (from the original)
    r0_2 = *global_0094d080;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_006b1d88(r0_2, r1_1, r1, guest::cpu()->r[3]);
}

}  // namespace d_001d7f24
GUEST_EXPORT(0x001d7f24, d_001d7f24::f_001d7f24);

// f_001d8760: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001d8760 {

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x00136cc8, u32(u32, u32, u32, u32)> call_00136cc8;  // (from the original)
inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> call_00136e58;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x005b4120, u32(u32, u32, u32, u32)> call_005b4120;  // (from the original)
inline constexpr guest::Function<0x006b1d88, u32(u32, u32, u32, u32)> call_006b1d88;  // (from the original)

u32 f_001d8760(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r5_1 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_5 = 0;
    u32 ea_1 = 0;
    u32 r3_5 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f74c8(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_005b4120(r0_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r5_1 = r0_2;
    if (r0_1 != 0x65u) {  // (from the original)
        if (r0_1 != 0x67u) {  // (from the original)
            goto L_1d8800;
        }
    } else {
        r0_2 = *gptr<u32>(r0 + 0x28u);  // (from the original)
        r1_2 = 0x14u;  // (from the original)
        if (r0_2 != 0) {
            guest::cpu()->r[13] = r13;
            r0_2 = call_00136e58(r0_2, r1_2, r2_2, r3_2);
            r1_2 = guest::cpu()->r[1];
        }
        goto L_1d8800;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_002f74e0(0x80000u, r0_2, r2_2, r3_2);  // (from the original)
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        guest::cpu()->r[13] = r13;
        r0_2 = call_002f74e0(0x200000u, r5_1, r2_3, r3_3);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        r3_3 = guest::cpu()->r[3];
        if (r0_2 == 0) {
            goto L_1d8800;
        }
    }
    *gptr<u32>(r13) = u32(0u);
    r0_4 = *global_0094d080;
    r1_3 = r13;
    guest::cpu()->r[13] = r13;
    call_006b1d88(r0_4, r1_3, 0x10004afu, r3_3);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_5 = r13;
    guest::cpu()->r[13] = r13;
    r0_2 = call_00136cc8(r0_5, r1_4, r2_4, r3_4);
    r1_2 = guest::cpu()->r[1];
L_1d8800:;
    if (r5_1 == 0x65u) {  // (from the original)
        r0_6 = *global_0094d080;
        r1_5 = r0 + 0x28u;  // (from the original)
        ea_1 = r13;
        r13 = r13 + 0x18;  // (from the original)
        r3_5 = *gptr<u32>(ea_1);
        guest::cpu()->r[13] = r13;
        return call_006b1d88(r0_6, r1_5, 0x100078du, r3_5);  // (from the original)
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_001d8760
GUEST_EXPORT(0x001d8760, d_001d8760::f_001d8760);

// f_001d9578: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001d9578 {

struct __attribute__((packed)) Object_001d9578_0 {
    u8 unknown_0[0x14];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Object_001d9578_0, byte_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x001404f0, u32(u32, u32, u32, u32)> call_001404f0;  // (from the original)
inline constexpr guest::Function<0x0035427c, u32(u32, u32, u32, u32)> call_0035427c;  // (from the original)

u32 f_001d9578(gptr<Object_001d9578_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 res_2 = 0;
    u32 r1_2 = 0;
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r5_1 = r1;
    r6_1 = 0u;
    r0_1 = u32(arg0->byte_14);
    zf_1 = r0_1 == 2u;
    if (!zf_1) {
        zf_1 = r0_1 == 0;
    }
    if (zf_1) {
        goto L_1d95fc;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_001404f0(1u, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    res_1 = r0_2 & 0x80000000u;  // (from the original)
    if (res_1 >> 0x1f) {  // (from the original)
        goto L_1d95fc;
    }
    *gptr<u32>(r0 + 0x20u) = u32(0x983000u);  // (from the original)
    *gptr<u32>(r13) = u32(1u);
    r3_1 = *gptr<u32>(r0 + 0x18u);  // (from the original)
    r1_1 = u32(*gptr<u8>(0x83b468u + r5_1));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_0035427c(3u, r1_1, 0u, r3_1);
    r1 = guest::cpu()->r[1];
    res_2 = r0_3 & 0x80000000u;  // (from the original)
    if (res_2 >> 0x1f) {  // (from the original)
        goto L_1d95fc;
    }
    r1_2 = u32(*gptr<u8>(0x83b468u + r5_1));  // (from the original)
    *gptr<u8>(r0 + 0x14u) = u8(2u);  // (from the original)
    *gptr<u8>(r0 + 0x25u) = u8(r1_2);  // (from the original)
    r1 = r0 + 0x16u;  // (from the original)
    if (r5_1 < 2u) {
        r1 = r1 + r5_1;
    }
    r6_1 = 1u;
    *gptr<u8>(r1) = u8(r6_1);
L_1d95fc:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r6_1;
}

}  // namespace d_001d9578
GUEST_EXPORT(0x001d9578, d_001d9578::f_001d9578);

// f_001d9a08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001d9a08 {

struct __attribute__((packed)) Object_001d9a08_0 {
    u8 unknown_0[0x63c];  // (not used here)
    u8 byte_63c;
};
GUEST_OFFSET(Object_001d9a08_0, byte_63c, 0x63c);  // (from the original)

inline constexpr guest::Function<0x0013fd78, u32(u32, u32, u32, u32)> call_0013fd78;  // (from the original)
inline constexpr guest::Function<0x00140530, u32(u32, u32, u32, u32)> call_00140530;  // (from the original)
inline constexpr guest::Function<0x0032c654, u32(u32, u32, u32, u32)> call_0032c654;  // (from the original)

u32 f_001d9a08(gptr<Object_001d9a08_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    if (u32(arg0->byte_63c) != 0) {
        r0_1 = r4 + 0x63cu;  // (from the original)
        call_0032c654(r0_1, r1, r2, guest::cpu()->r[3]);
    }
    r5 = 0u;
    r2 = r5;
    r0 = r5;
    *gptr<u8>(r4 + 0x17u) = u8(r5);  // (from the original)
    do {
L_1d9a34:;
        r1_1 = r4 + 0x16u;  // (from the original)
        if (r0 < 2u) {
            r1_1 = r1_1 + r0;
        }
        r0 = r0 + 1u;
        r1_2 = u32(*gptr<u8>(r1_1));
        if (r1_2 != 0) {
            r2 = 1u;
        }
        guest::preempt();
    } while (s32(r0) < s32(2u));
    r6 = 1u;
    if (r2 != 0) {
        goto L_1d9a8c;
    }
    r0_2 = u32(*gptr<u8>(r4 + 0x14u));  // (from the original)
    if (r0_2 == 0) {
        goto L_1d9a8c;
    }
    if (r0_2 != 2u) {
        goto L_1d9a8c;
    }
    r0_3 = call_00140530(r0_2, r1_2, r2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if ((r0_3 & 0x80000000u) >> 0x1f == 0u) {  // (from the original)
        *gptr<u32>(r4 + 0x2cu) = u32(r5);  // (from the original)
        *gptr<u8>(r4 + 0x14u) = u8(r6);  // (from the original)
    }
L_1d9a8c:;
    if (u32(*gptr<u8>(r4 + 0x34u)) >= 2u) {  // (from the original)
        r0_4 = r4 + 0x34u;  // (from the original)
        call_0013fd78(r0_4, r1_2, r2, guest::cpu()->r[3]);
    }
    r2 = 0u;
    r0 = r2;
    *gptr<u8>(r4 + 0x16u) = u8(r5);  // (from the original)
    do {
L_1d9aa8:;
        r1_3 = r4 + 0x16u;  // (from the original)
        if (r0 < 2u) {
            r1_3 = r1_3 + r0;
        }
        r0 = r0 + 1u;
        r1_4 = u32(*gptr<u8>(r1_3));
        if (r1_4 != 0) {
            r2 = 1u;
        }
        guest::preempt();
    } while (s32(r0) < s32(2u));
    if (r2 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_4;
        return r0;
    }
    r0 = u32(*gptr<u8>(r4 + 0x14u));  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_4;
        return r0;
    }
    if (r0 != 2u) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_4;
        return r0;
    }
    r0_5 = call_00140530(r0, r1_4, r2, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r0 = r0_5 & 0x80000000u;  // (from the original)
    if (r0 >> 0x1f == 0u) {  // (from the original)
        *gptr<u32>(r4 + 0x2cu) = u32(r5);  // (from the original)
        *gptr<u8>(r4 + 0x14u) = u8(r6);  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    return r0;
}

}  // namespace d_001d9a08
GUEST_EXPORT(0x001d9a08, d_001d9a08::f_001d9a08);

// f_001d9c9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001d9c9c {

struct __attribute__((packed)) Object_001d9c9c_0 {
    u8 unknown_0[0x34];  // (not used here)
    u8 byte_34;
};
GUEST_OFFSET(Object_001d9c9c_0, byte_34, 0x34);  // (from the original)

inline constexpr guest::Function<0x0020a4cc, u32(u32, u32, u32, u32)> call_0020a4cc;  // (from the original)
inline constexpr guest::Function<0x002a5fa8, u32(u32, u32, u32, u32)> call_002a5fa8;  // (from the original)

u32 f_001d9c9c(gptr<Object_001d9c9c_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = u32(arg0->byte_34);
    if (r0_1 == 0) {
        r0_2 = r0 + 0x74u;  // (from the original)
        call_002a5fa8(r0_2, r0, r2, guest::cpu()->r[3]);
        r0_1 = call_0020a4cc(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        *gptr<u32>(r0 + 0x90u) = u32(r0);  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_001d9c9c
GUEST_EXPORT(0x001d9c9c, d_001d9c9c::f_001d9c9c);

// f_001d9cdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001d9cdc {

struct __attribute__((packed)) Object_001d9cdc_0 {
    u8 unknown_0[0x80];  // (not used here)
    u32 word_80;
};
GUEST_OFFSET(Object_001d9cdc_0, word_80, 0x80);  // (from the original)


void f_001d9cdc(gptr<Object_001d9cdc_0> arg0, u32 r1) {
    if (r1 <= 2u) {
        arg0->word_80 = u32(r1);
    }
    return;
}

}  // namespace d_001d9cdc
GUEST_EXPORT(0x001d9cdc, d_001d9cdc::f_001d9cdc);

// f_001d9fb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001d9fb0 {

struct __attribute__((packed)) Object_001d9fb0_0 {
    u8 unknown_0[0x34];  // (not used here)
    u8 byte_34;
};
GUEST_OFFSET(Object_001d9fb0_0, byte_34, 0x34);  // (from the original)

inline constexpr guest::Function<0x00136cc8, u32(u32, u32, u32, u32)> call_00136cc8;  // (from the original)
inline constexpr guest::Function<0x0020aedc, u32(u32, u32, u32, u32)> call_0020aedc;  // (from the original)
inline constexpr guest::Function<0x002a6594, u32(u32, u32, u32, u32)> call_002a6594;  // (from the original)

u32 f_001d9fb0(gptr<Object_001d9fb0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 cf = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = u32(arg0->byte_34);
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return r0_1;
    }
    r0_2 = r0 + 0x74u;  // (from the original)
    call_002a6594(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r6 = r0;
    r5 = r0 + 0x44u;  // (from the original)
    *gptr<u32>(r0 + 0x90u) = u32(0u);  // (from the original)
    r4 = 0u;
    r0 = r5;
    goto L_1d9ff0;
L_1d9fe8:;
    if (cf) {
        goto L_1d9ff4;
    }
L_1d9ff0:;
    r0 = r0 + (r4 << 2);
L_1d9ff4:;
    call_00136cc8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r4 = r4 + 1u;
    res_1 = r4 - 2u;
    cf = r4 >= 2u;
    if (res_1 >> 0x1f != ((r4 ^ 2u) & (r4 ^ res_1)) >> 0x1f) {  // (from the original)
        r0 = r5;
        guest::preempt();
        goto L_1d9fe8;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0020aedc(r6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_001d9fb0
GUEST_EXPORT(0x001d9fb0, d_001d9fb0::f_001d9fb0);

// f_001da01c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001da01c {

inline guest::global<u32, 0x001da0a8> global_001da0a8;  // (from the original)
inline constexpr guest::Function<0x0020af18, u32(u32, u32, u32, u32)> call_0020af18;  // (from the original)
inline constexpr guest::Function<0x002a65d0, u32(u32, u32, u32, u32)> call_002a65d0;  // (from the original)
inline constexpr guest::Function<0x002e8444, u32(u32, u32, u32, u32)> call_002e8444;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_001da01c(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r0_1 = 0;
    float S0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    float S0_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_4 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    float S0_5 = 0;
    guest::cpu()->r[13] -= 8u;
    guest::cpu()->s[0] = S0;
    r0_1 = call_0020af18(r0, r1, r2, r3);
    S0_1 = guest::cpu()->s[0];
    *gptr<u32>(r0_1) = u32(0x8f8dc8u);  // (from the original)
    r0_2 = r0_1 + 0x44u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    r0_3 = call_00301d0c(r0_2, 0x131800u, 4u, 2u);  // (from the original)
    S0_2 = guest::cpu()->s[0];
    r0_4 = r0_3 + 8u;
    guest::cpu()->s[0] = S0_2;
    r0_5 = call_00301d0c(r0_4, 0x1287a8u, 0x14u, 2u);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    *gptr<u32>(r0_5 - 0x4cu) = u32(0x8ebd9cu);  // (from the original)
    r0_6 = r0_5 + 0x28u;  // (from the original)
    guest::cpu()->s[0] = S0_3;
    r0_7 = call_002a65d0(r0_6, 0x8ebd9cu, r2_1, r3_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_4 = guest::cpu()->s[0];
    r0_8 = r0_7 + 0x18u;  // (from the original)
    guest::cpu()->s[0] = S0_4;
    r0_9 = call_002e8444(r0_8, r1_1, r2_2, r3_2);
    r0_10 = r0_9 - 0x8cu;  // (from the original)
    S0_5 = std::bit_cast<float>(*global_001da0a8);
    *gptr<u8>(r0_10 + 0xd0u) = u8(0u);  // (from the original)
    *gptr<u32>(r0_10 + 0xd4u) = u32(std::bit_cast<u32>(S0_5));  // (from the original)
    *gptr<u32>(r0_10 + 0xd8u) = u32(std::bit_cast<u32>(S0_5));  // (from the original)
    *gptr<u32>(r0_10 + 0xdcu) = u32(std::bit_cast<u32>(S0_5));  // (from the original)
    *gptr<u16>(r0_10 + 0xe0u) = u16(~0u);  // (from the original)
    *gptr<u32>(r0_10 + 4u) = u32(1u);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 1u;
    guest::cpu()->s[0] = S0_5;
    return r0_10;
}

}  // namespace d_001da01c
GUEST_EXPORT(0x001da01c, d_001da01c::f_001da01c);

// f_001db5b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001db5b4 {

struct __attribute__((packed)) Object_001db5b4_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_001db5b4_0, word_0, 0x0);  // (from the original)

inline guest::global<u32, 0x001db634> global_001db634;  // (from the original)
inline constexpr guest::Function<0x002d1db0, u32(u32, u32, u32, u32)> call_002d1db0;  // (from the original)

u32 f_001db5b4(gptr<Object_001db5b4_0> arg0, u32 r1_unused, u32 r2, u32 r3, float S0) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    float S0_1 = 0;
    u32 r2_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    u32 ea_7 = 0;
    u32 ea_8 = 0;
    r13 = r13 - 8;
    arg0->word_0 = u32(0x8ebddcu);  // (from the original)
    r0_1 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0_2 = call_002d1db0(r0_1, 0x8ebddcu, r2, r3);  // (from the original)
    r0_3 = r0_2 - 4u;
    S0_1 = std::bit_cast<float>(*global_001db634);
    *gptr<u32>(r0_3 + 0xa0u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r0_3 + 0xa4u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r0_3 + 0xa8u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    r2_1 = ~0u;
    ea_1 = r0_3 + 0xacu;  // (from the original)
    *gptr<u16>(ea_1) = u16(0u);
    ea_2 = r0_3 + 0xb0u;  // (from the original)
    *gptr<u32>(ea_2) = u32(r2_1);
    ea_3 = r0_3 + 0xb4u;  // (from the original)
    *gptr<u8>(ea_3) = u8(0u);
    ea_4 = r0_3 + 0xb5u;  // (from the original)
    *gptr<u8>(ea_4) = u8(0u);
    ea_5 = r0_3 + 0xb6u;  // (from the original)
    *gptr<u8>(ea_5) = u8(6u);
    ea_6 = r0_3 + 0xb7u;  // (from the original)
    *gptr<u8>(ea_6) = u8(0u);
    ea_7 = r0_3 + 0xb8u;  // (from the original)
    *gptr<u32>(ea_7) = u32(0x8eb474u);  // (from the original)
    *gptr<u32>(r0_3 + 0xbcu) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r0_3 + 0xc0u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r0_3 + 0xc4u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    ea_8 = r0_3 + 0xc8u;  // (from the original)
    *gptr<u32>(ea_8) = u32(r2_1);
    *gptr<u32>(ea_8 + 4) = u32(0x8eb474u);  // (from the original)
    *gptr<u32>(r0_3 + 0xd0u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r0_3 + 0xd4u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r0_3 + 0xd8u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r0_3 + 0xdcu) = u32(r2_1);  // (from the original)
    *gptr<u8>(r0_3 + 0xe0u) = u8(1u);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = 1u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    return r0_3;
}

}  // namespace d_001db5b4
GUEST_EXPORT(0x001db5b4, d_001db5b4::f_001db5b4);

// f_001db650: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001db650 {

struct __attribute__((packed)) Object_001db650_0 {
    u32 word_0;
    u8 unknown_4[0x14];  // (not used here)
    u32 word_18;
    u8 unknown_1c[0x1c];  // (not used here)
    u8 byte_38;
    u8 unknown_39[0x7b];  // (not used here)
    u8 byte_b4;
    u8 byte_b5;
};
GUEST_OFFSET(Object_001db650_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001db650_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_001db650_0, byte_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_001db650_0, byte_b4, 0xb4);  // (from the original)
GUEST_OFFSET(Object_001db650_0, byte_b5, 0xb5);  // (from the original)

inline guest::global<u32, 0x001db7e0> global_001db7e0;  // (from the original)
inline guest::global<u32, 0x0094cd20> global_0094cd20;  // (from the original)
inline constexpr guest::Function<0x00136cc8, u32(u32, u32, u32, u32)> call_00136cc8;  // (from the original)
inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> call_00136e58;  // (from the original)
inline constexpr guest::Function<0x0013d4f0, u32(u32, u32, u32, u32)> call_0013d4f0;  // (from the original)
inline constexpr guest::Function<0x0020aedc, u32(u32, u32, u32, u32)> call_0020aedc;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x0071d314, u32(u32, u32, u32, u32)> call_0071d314;  // (from the original)

u32 f_001db650(gptr<Object_001db650_0> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 cf = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 res_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_1 = 0;
    u32 r0_6 = 0;
    u32 r2_1 = 0;
    u32 r0_7 = 0;
    u32 ea_1 = 0;
    u32 r0_8 = 0;
    u32 res_2 = 0;
    u32 r1_2 = 0;
    float S0_1 = 0;
    u32 r0_9 = 0;
    r13 = r13 - 0x18;  // (from the original)
    r7 = r0;
    arg0->word_0 = u32(0x8ebddcu);  // (from the original)
    if (u32(arg0->byte_b4) == 0) {
        goto L_1db758;
    }
    if (u32(arg0->byte_b5) == 0) {
        goto L_1db750;
    }
    r0_1 = r7 + 4u;
    S0 = std::bit_cast<float>(*global_001db7e0);
    r6 = 0u;
    arg0->word_18 = u32(std::bit_cast<u32>(S0));
    r1 = u32(arg0->byte_38);
    if (r1 == 0) {
        goto L_1db6e4;
    } else {
        r5 = r0_1 + 0x44u;  // (from the original)
        r4 = 0u;
    }
    goto L_1db6a8;
L_1db6a0:;
    if (cf) {
        goto L_1db6ac;
    }
L_1db6a8:;
    r0 = r5 + (r4 << 2);
L_1db6ac:;
    if (*gptr<u32>(r0) != 0) {
        r0_2 = r5;
        if (r4 < 2u) {
            r0_2 = r5 + (r4 << 2);
        }
        r1 = r6;
        r0_3 = *gptr<u32>(r0_2);
        if (r0_3 != 0) {
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            call_00136e58(r0_3, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
        }
    }
    r4 = r4 + 1u;
    res_1 = r4 - 2u;
    cf = r4 >= 2u;
    if (res_1 >> 0x1f != ((r4 ^ 2u) & (r4 ^ res_1)) >> 0x1f) {  // (from the original)
        r0 = r5;
        guest::preempt();
        goto L_1db6a0;
    }
L_1db6e4:;
    r6 = r7 + 4u;
    r5 = r7 + 0x48u;  // (from the original)
    r4 = 0u;
    do {
L_1db6f0:;
        if (r4 >= 2u) {
            r0_4 = r5;
        } else {
            r0_4 = r5 + (r4 << 2);
        }
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        call_00136cc8(r0_4, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(2u));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    call_0020aedc(r6, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0_5 = *global_0094cd20;
    if (r0_5 == 0) {
        goto L_1db748;
    }
    r1_1 = u32(*gptr<u8>(r7 + 0xb6u));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0_6 = call_0071d314(r0_5, r1_1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    if (r0_6 == 0) {
        goto L_1db748;
    }
    r2_1 = u32(*gptr<u8>(r7 + 0xb6u));  // (from the original)
    r0_7 = *global_0094cd20;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    call_0013d4f0(r0_7, 0u, r2_1, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
L_1db748:;
    *gptr<u8>(r7 + 0xb6u) = u8(6u);  // (from the original)
L_1db750:;
    r1 = 0u;
    *gptr<u8>(r7 + 0xb4u) = u8(r1);  // (from the original)
L_1db758:;
    r4 = 0u;
    ea_1 = r7 + 4u;
    *gptr<u32>(ea_1) = u32(0x8f8dc8u);  // (from the original)
    r7 = ea_1;
    r5 = r7 + 0x44u;  // (from the original)
    do {
L_1db768:;
        r0_8 = r5;
        if (r4 < 2u) {
            r0_8 = r5 + (r4 << 2);
        }
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        call_00136cc8(r0_8, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(2u));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    call_0020aedc(r7, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r5 = r7 + 0x44u;  // (from the original)
    r4 = 0u;
    r0 = r5;
    goto L_1db7a4;
L_1db79c:;
    if (cf) {
        goto L_1db7a8;
    }
L_1db7a4:;
    r0 = r0 + (r4 << 2);
L_1db7a8:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    call_00136cc8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r4 = r4 + 1u;
    res_2 = r4 - 2u;
    cf = r4 >= 2u;
    if (res_2 >> 0x1f != ((r4 ^ 2u) & (r4 ^ res_2)) >> 0x1f) {  // (from the original)
        r0 = r5;
        guest::preempt();
        goto L_1db79c;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    call_002f76ac(r5, 0x137d74u, 4u, 2u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    S0_1 = guest::cpu()->s[0];
    r0_9 = r5 - 0x48u;  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    return r0_9;
}

}  // namespace d_001db650
GUEST_EXPORT(0x001db650, d_001db650::f_001db650);

// f_001dc6e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001dc6e8 {

inline constexpr guest::Function<0x0052f0c0, u32(u32, u32, u32, u32)> call_0052f0c0;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x00540b14, u32(u32, u32, u32, u32)> call_00540b14;  // (from the original)
inline constexpr guest::Function<0x00540bd0, u32(u32, u32, u32, u32)> call_00540bd0;  // (from the original)
inline constexpr guest::Function<0x0062d4e0, u32(u32, u32, u32, u32)> call_0062d4e0;  // (from the original)
inline constexpr guest::Function<0x0062d970, u32(u32, u32, u32, u32)> call_0062d970;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)
inline constexpr guest::Function<0x00810aa0, u32(u32, u32, u32, u32)> call_00810aa0;  // (from the original)

u32 f_001dc6e8(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r0 = 0;
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
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_3 = 0;
    u32 r0_8 = 0;
    u32 r3_5 = 0;
    u32 r2_5 = 0;
    u32 r1_4 = 0;
    u32 r0_9 = 0;
    u32 r2_6 = 0;
    u32 r0_10 = 0;
    u32 r2_7 = 0;
    u32 r3_6 = 0;
    u32 r1_5 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r1_6 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 r0_14 = 0;
    u32 r3_7 = 0;
    u32 r0_15 = 0;
    u32 r5_1 = 0;
    u32 res_1 = 0;
    u32 r4_1 = 0;
    r13 = r13 - 0x160u;  // (from the original)
    r0_1 = r13;
    r10 = r1;
    r9 = r2;
    r11 = r3;
    guest::cpu()->r[13] = r13;
    r0_2 = call_00810aa0(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_3 = call_0062d4e0(r0_2, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_4 = r13 + 0x108u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0074824c(r0_4, r0_3, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = r13 + 0x118u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00748284(r0_5, r0_3, r2_3, r3_3);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r1_2 = r13 + 0x108u;  // (from the original)
    r0_6 = r13 + 0x118u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_7 = call_007481ec(r0_6, r1_2, r2_4, r3_4);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_7 == 0) {
        goto L_1dc7c0;
    }
L_1dc738:;
    r1_3 = r13 + 0x120u;  // (from the original)
    r0_8 = r13 + 0x130u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0052f0c0(r0_8, r1_3, r2, r3);
    r3_5 = guest::cpu()->r[3];
    r2_5 = *gptr<u32>(r13 + 4);
    r1_4 = r13 + 0x130u;  // (from the original)
    if (s32(*gptr<u32>(r13)) >= s32(r2_5)) {
        goto L_1dc794;
    }
    r0_9 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    if (r0_9 != 0) {
        r2_6 = *gptr<u32>(r0_9);
        *gptr<u32>(r13 + 0xcu) = u32(r2_6);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_9 = call_0052f0c0(r0_9, r1_4, r2_6, r3_5);
        r3_5 = guest::cpu()->r[3];
    }
    r1_4 = *gptr<u32>(r13);
    r2_5 = *gptr<u32>(r13 + 4);
    if (s32(r1_4) >= s32(r2_5)) {
        goto L_1dc794;
    }
    r1_4 = *gptr<u32>(r13 + 8u);
    r2_5 = *gptr<u32>(r13);
    *gptr<u32>(r1_4 + (r2_5 << 2)) = u32(r0_9);
    *gptr<u32>(r13) = u32(*gptr<u32>(r13) + 1u);
L_1dc794:;
    r0_10 = r13 + 0x118u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0052f144(r0_10, r1_4, r2_5, r3_5);
    r2_7 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r1_5 = r13 + 0x108u;  // (from the original)
    r0_11 = r13 + 0x118u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_12 = call_007481ec(r0_11, r1_5, r2_7, r3_6);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_12 != 0) {
        guest::preempt();
        goto L_1dc738;
    }
L_1dc7c0:;
    r8 = 0u;
    r0_13 = r13;
    guest::cpu()->r[13] = r13;
    call_00540bd0(r0_13, r9, r2, r3);
    r1_6 = guest::cpu()->r[1];
    r0 = *gptr<u32>(r13);
    if (r0 == 0 || r0 >> 0x1f != (r0 & (r0 ^ r0)) >> 0x1f) {  // (from the original)
        goto L_1dc868;
    }
    do {
L_1dc7e4:;
        zf_1 = r0 == 0;
        cf_1 = r0 >= 0u;
        if (cf_1 && !zf_1) {
            r0 = *gptr<u32>(r13 + 8u);
        }
        if (cf_1 && !zf_1) {
            r0 = *gptr<u32>(r0);
        }
        if (!cf_1 || zf_1) {
            r0 = 0u;
        }
        guest::cpu()->r[13] = r13;
        r0_14 = call_0062d970(r0, r10, r9, r11);
        r1_6 = guest::cpu()->r[1];
        r3_7 = guest::cpu()->r[3];
        if (!(r0_14 == 0)) {
            r8 = 1u;
            goto L_1dc868;
        }
        r0_15 = *gptr<u32>(r13);
        r5_1 = r13;
        res_1 = r0_15 - 1u;
        if (!(res_1 >> 0x1f != ((r0_15 ^ 1u) & (r0_15 ^ res_1)) >> 0x1f)) {  // (from the original)
            r4_1 = *gptr<u32>(*gptr<u32>(r13 + 8u));
            *gptr<u32>(r4_1) = u32(*gptr<u32>(r13 + 0xcu));  // (from the original)
            *gptr<u32>(r13 + 0xcu) = u32(r4_1);  // (from the original)
        }
        guest::cpu()->r[13] = r13;
        call_00540b14(r5_1, 0u, 1u, r3_7);
        r1_6 = guest::cpu()->r[1];
        r0 = *gptr<u32>(r13);
        guest::preempt();
    } while (r0 != 0 && r0 >> 0x1f == (r0 & (r0 ^ r0)) >> 0x1f);  // (from the original)
L_1dc868:;
    r13 = r13 + 0x160u;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    return r8;
}

}  // namespace d_001dc6e8
GUEST_EXPORT(0x001dc6e8, d_001dc6e8::f_001dc6e8);

// f_001de39c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001de39c {

inline guest::global<u32, 0x00952c54> global_00952c54;  // (from the original)
inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> call_0056a974;  // (from the original)

u32 f_001de39c(u32 r0_unused, u32 r1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r2_1 = 0;
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 v_1 = 0;
    r2_1 = *global_00952c54;
    if (r2_1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    ea_1 = r13 - 4u;
    *gptr<u32>(ea_1) = u32(r14);
    r13 = ea_1 - 0xcu;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(0x1de3e4u);  // (from the original)
    *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
    r1_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_1 = call_0056a974(0xac3750u, r1_1, r2_1, 0u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0xcu;  // (from the original)
    v_1 = *gptr<u32>(r13);
    r13 = r13 + 4u;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_001de39c
GUEST_EXPORT(0x001de39c, d_001de39c::f_001de39c);

// f_001de400: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001de400 {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)

u32 f_001de400(u32 r0, u32 r1, u32 r2) {
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 res_1 = 0;
    u32 ea_5 = 0;
    u32 r9_1 = 0;
    u32 ea_6 = 0;
    u32 r10_1 = 0;
    u32 res_2 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x20;  // (from the original)
    r6 = r0;
    r5 = 0xac3750u;  // (from the original)
    if (*gptr<u32>(r5 + 0xd0u) == 0) {  // (from the original)
        goto L_1de49c;
    }
    ea_1 = r5 + 0xd0u;  // (from the original)
    r3 = *gptr<u32>(ea_1);
    r0 = 0u;
    ea_2 = r5 + 0xd0u;  // (from the original)
    r4 = u32(*gptr<u8>(r3 + r2 + 2u));
    ea_3 = *gptr<u32>(ea_2);
    r7 = r4 << 2;
    r8 = u32(*gptr<u16>(ea_3)) + 2u;
    if (r2 == 0) {
        goto L_1de474;
    }
    r3 = r3 + 1u;
    if ((r2 & 1u) != 0) {
        ea_4 = r3 + 1u;
        r3 = ea_4;
        r0 = u32(*gptr<u8>(ea_4));
    }
    res_1 = r2 >> 1;
    r2 = res_1;
    r12 = 0u;
    if (res_1 == 0) {
        goto L_1de470;
    }
    do {
L_1de458:;
        ea_5 = r3 + 1u;
        r9_1 = u32(*gptr<u8>(ea_5));
        ea_6 = r3 + 2u;
        r3 = ea_6;
        r10_1 = u32(*gptr<u8>(ea_6));
        res_2 = r2 - 1u;
        r2 = res_2;
        r0 = r0 + r9_1;
        r12 = r12 + r10_1;
        guest::preempt();
    } while (res_2 != 0);
L_1de470:;
    r0 = r0 + r12;
L_1de474:;
    if (r1 < r4 << 2) {
        goto L_1de49c;
    }
    r1_1 = *gptr<u32>(r5 + 0xd0u) + (r8 + (r0 << 2));  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f8574(r6, r1_1, r7, r3);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r4;
L_1de49c:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_001de400
GUEST_EXPORT(0x001de400, d_001de400::f_001de400);

// f_001de4a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001de4a8 {

struct __attribute__((packed)) Object_001de4a8_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_001de4a8_0, half_0, 0x0);  // (from the original)


void f_001de4a8(gptr<Object_001de4a8_0> arg0, u32 r1, u32 r2) {
    u32 r1_1 = 0;
    r1_1 = u32(arg0->half_0) & ~lsl_r(r2 + 1u, r1 << 1 & 0xff);  // (from the original)
    arg0->half_0 = u16(r1_1);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_001de4a8
GUEST_EXPORT(0x001de4a8, d_001de4a8::f_001de4a8);

// f_001de4c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001de4c0 {

struct __attribute__((packed)) Object_001de4c0_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_001de4c0_0, half_0, 0x0);  // (from the original)


u32 f_001de4c0(gptr<Object_001de4c0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 r2_1 = 0;
    u32 r2_2 = 0;
    u32 res_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r3 = u32(arg0->half_0);
    r0 = 0u;
    r1 = r0;
    r12 = 2u;
    r4 = r0;
    r5 = 1u;
L_1de4e0:;
    r2_1 = lsr_r(r3, r1 << 1 & 0xff) & 3u;  // (from the original)
    if (r2_1 == 3u) {
        r2_2 = r12;
        goto L_1de504;
    }
    if (r2_1 == 0) {
        r2_2 = r4;
    } else {
        r2_2 = r5;
    }
L_1de504:;
    r1 = r1 + 1u;
    res_1 = r1 - 6u;
    r0 = r0 + r2_2;
    if (res_1 >> 0x1f != ((r1 ^ 6u) & (r1 ^ res_1)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_1de4e0;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001de4c0
GUEST_EXPORT(0x001de4c0, d_001de4c0::f_001de4c0);

// f_001de7d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001de7d0 {

struct __attribute__((packed)) Object_001de7d0_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_001de7d0_0, half_0, 0x0);  // (from the original)


u32 f_001de7d0(gptr<Object_001de7d0_0> arg0, u32 r1) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    r1_1 = r1 << 1;
    r0_1 = lsr_r(u32(arg0->half_0), r1_1 & 0xff) & 3u;  // (from the original)
    if (r0_1 == 3u) {
        guest::cpu()->r[1] = r1_1;
        return 2u;
    }
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_001de7d0
GUEST_EXPORT(0x001de7d0, d_001de7d0::f_001de7d0);

// f_001de7f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001de7f8 {

struct __attribute__((packed)) Object_001de7f8_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_001de7f8_0, half_0, 0x0);  // (from the original)


u32 f_001de7f8(gptr<Object_001de7f8_0> arg0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 r0_2 = 0;
    r0_1 = lsr_r(u32(arg0->half_0), r1 << 1 & 0xff);  // (from the original)
    r1_1 = r2 + 1u;
    res_1 = r0_1 & 3u & r1_1;
    r0_2 = res_1;
    if (res_1 != 0) {
        r0_2 = 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_001de7f8
GUEST_EXPORT(0x001de7f8, d_001de7f8::f_001de7f8);

// f_001de848: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001de848 {

inline constexpr guest::Function<0x0024da38, u32(u32, u32, u32, u32)> call_0024da38;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x00317ee0, u32(u32, u32, u32, u32)> call_00317ee0;  // (from the original)

u32 f_001de848(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002fae84(r0, r1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    r0_2 = r0_1 + 0x5d880u;  // (from the original)
    r0_3 = call_00317ee0(r0_2, 0u, r2_1, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r0_4 = call_0024da38(r0_3, r1_1, r2_2, guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    *gptr<u16>(r0_4) = u16(0u);
    *gptr<u8>(r0_4 + 2u) = u8(0x1eu);  // (from the original)
    guest::cpu()->r[1] = 0x1eu;  // (from the original)
    return r0_4;
}

}  // namespace d_001de848
GUEST_EXPORT(0x001de848, d_001de848::f_001de848);

// f_001de880: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001de880 {

inline constexpr guest::Function<0x001de664, u32(u32, u32, u32, u32)> call_001de664;  // (from the original)
inline constexpr guest::Function<0x002fb96c, u32(u32, u32, u32, u32)> call_002fb96c;  // (from the original)
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> call_002ff8b0;  // (from the original)

u32 f_001de880(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r3_2 = 0;
    u32 res_1 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4_1 = r1;
    r0_1 = u32(*gptr<u8>(0x94ee34u + r4_1));  // (from the original)
    if (r0_1 != 0) {
        goto L_1de8f4;
    }
    r0_1 = call_002ff8b0(4u, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 8u) {
        goto L_1de8f4;
    }
    *gptr<u8>(0x94ee34u + r4_1) = u8(1u);  // (from the original)
    r0_2 = r4_1 & 0xffu;  // (from the original)
    r0_1 = call_002fb96c(r0_2, r1, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    r3_2 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_1de8f4;
    }
    res_1 = u32(*gptr<u8>(r0_1 + 0x5701u)) << 0x1e;  // (from the original)
    r0_1 = res_1;
    if (!(res_1 >> 0x1f)) {  // (from the original)
        goto L_1de8f4;
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return call_001de664(r0, r2, r3, r3_2);
L_1de8f4:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_001de880
GUEST_EXPORT(0x001de880, d_001de880::f_001de880);

// f_001de99c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001de99c {

struct __attribute__((packed)) Object_001de99c_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_001de99c_1, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00100d2d, u32(u32, u32, u32, u32)> call_00100d2c;  // (from the original)
inline constexpr guest::Function<0x0020d848, u32(u32, u32, u32, u32)> call_0020d848;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x00728af8, u32(u32, u32, u32, u32)> call_00728af8;  // (from the original)
inline constexpr guest::Function<0x00728c48, u32(u32, u32, u32, u32)> call_00728c48;  // (from the original)
inline constexpr guest::Function<0x00728ca0, u32(u32, u32, u32, u32)> call_00728ca0;  // (from the original)

u32 f_001de99c(u32 r0, gptr<Object_001de99c_1> arg1, u32 r2, u32 r3) {
    u32 r1 = arg1.addr();
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_4 = 0;
    u32 r5_2 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 r3_5 = 0;
    u32 r6_1 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r5_1 = r1;
    r0_1 = arg1->word_0;
    if (r0_1 != 3u) {
        goto L_1dea90;
    }
    r0_2 = call_002fb328(r0_1, r1, r2, r3);
    r0_1 = r0_2 + 0x621b8u;  // (from the original)
    r1 = u32(*gptr<u16>(r0_1));
    r3_1 = r5_1 + 0x36u;  // (from the original)
    if (u32(*gptr<u16>(r5_1 + 0x36u)) != r1) {  // (from the original)
        goto L_1dea90;
    }
    r1 = u32(*gptr<u8>(r3_1 + 0x14u));  // (from the original)
    if (r1 != u32(*gptr<u8>(r0_1 + 0x14u))) {  // (from the original)
        goto L_1dea90;
    }
    r1_1 = r0_1 + 2u;
    r0_3 = r3_1 + 2u;
    r0_1 = call_00100d2c(r0_3, r1_1, 0x12u, r3_1);  // (from the original)
    r1 = guest::cpu()->r[1];
    r3_2 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        goto L_1dea90;
    }
    r0_4 = u32(*gptr<u8>(r0 + 0x218u));  // (from the original)
    r0_5 = r0 + (r0_4 + (r0_4 << 2) + (r0_4 << 3) << 3);
    call_002fbb30(r0_5, r5_1, 0x64u, r3_2);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_6 = call_00728af8(r2, r1_2, r2_1, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r5_2 = r0_6 & 0xffu;  // (from the original)
    r0_7 = call_00728ca0(r2, r1_3, r2_2, r3_4);
    r1_4 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r6_1 = r0_7 & 0xffu;  // (from the original)
    r0_8 = call_00728c48(r2, r1_4, r2_3, r3_5);
    r1_5 = uxth(r0_8);
    r0_9 = u32(*gptr<u8>(r0 + 0x218u));  // (from the original)
    r0_10 = r0 + (r0_9 + (r0_9 << 2) + (r0_9 << 3) << 3) + 0x64u;  // (from the original)
    call_0020d848(r0_10, r1_5, r6_1, r5_2);
    r0_11 = u32(*gptr<u8>(r0 + 0x218u));  // (from the original)
    r1 = u32(*gptr<u8>(r0 + 0x219u)) & ~lsl_r(1u, r0_11 & 0xff);  // (from the original)
    r0_1 = r0_11 + 1u & 0xffu;  // (from the original)
    *gptr<u8>(r0 + 0x219u) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0x218u) = u8(r0_1);  // (from the original)
    if (r0_1 >= 4u) {
        r0_1 = 0u;
        *gptr<u8>(r0 + 0x218u) = u8(r0_1);  // (from the original)
    }
L_1dea90:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_001de99c
GUEST_EXPORT(0x001de99c, d_001de99c::f_001de99c);

// f_001dec8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001dec8c {

struct __attribute__((packed)) Object_001dec8c_0 {
    u8 unknown_0[0x208];  // (not used here)
    u32 word_208;
    u32 word_20c;
    u8 byte_210;
    u8 byte_211;
    u8 byte_212;
    u8 byte_213;
};
GUEST_OFFSET(Object_001dec8c_0, word_208, 0x208);  // (from the original)
GUEST_OFFSET(Object_001dec8c_0, word_20c, 0x20c);  // (from the original)
GUEST_OFFSET(Object_001dec8c_0, byte_210, 0x210);  // (from the original)
GUEST_OFFSET(Object_001dec8c_0, byte_211, 0x211);  // (from the original)
GUEST_OFFSET(Object_001dec8c_0, byte_212, 0x212);  // (from the original)
GUEST_OFFSET(Object_001dec8c_0, byte_213, 0x213);  // (from the original)


void f_001dec8c(gptr<Object_001dec8c_0> arg0) {
    arg0->word_208 = u32(0u);
    arg0->word_20c = u32(0u);
    arg0->byte_210 = u8(0u);
    arg0->byte_211 = u8(0u);
    arg0->byte_212 = u8(0u);
    arg0->byte_213 = u8(0u);
    return;
}

}  // namespace d_001dec8c
GUEST_EXPORT(0x001dec8c, d_001dec8c::f_001dec8c);

// f_001decb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001decb0 {

struct __attribute__((packed)) Object_001decb0_0 {
    u8 unknown_0[0x1a0];  // (not used here)
    u32 word_1a0;
};
GUEST_OFFSET(Object_001decb0_0, word_1a0, 0x1a0);  // (from the original)

inline constexpr guest::Function<0x003052f0, u32(u32, u32, u32, u32)> call_003052f0;  // (from the original)
inline constexpr guest::Function<0x0030589c, u32(u32, u32, u32, u32)> call_0030589c;  // (from the original)

u32 f_001decb0(gptr<Object_001decb0_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r12_1 = 0;
    u32 res_1 = 0;
    u32 r0_3 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r5 = r0;
    r4 = r0 + 0x1a0u;  // (from the original)
    r6 = 0u;
    ea_1 = r0 + 0x1a0u;  // (from the original)
    arg0->word_1a0 = u32(r6);
    r0_1 = ea_1 + 4u;
    guest::cpu()->r[13] = r13;
    call_003052f0(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u16>(r4 + 0x32u) = u16(r6);  // (from the original)
    *gptr<u8>(r4 + 0x34u) = u8(r6);  // (from the original)
    r0_2 = r4 + 0x36u;  // (from the original)
    *gptr<u8>(r4 + 0x35u) = u8(r6);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030589c(r0_2, r1_1, r2_1, r3_1);
    r2 = 0xffffu;  // (from the original)
    r1 = 0u;
    r0 = r1;
    do {
L_1decec:;
        r3_2 = r4 + (r1 << 1);
        r1_2 = r1 + 1u;
        r0 = r0 + 2u;
        r12_1 = r4 + (r1_2 << 1);
        *gptr<u16>(r3_2 + 0x4cu) = u16(r2);  // (from the original)
        res_1 = r0 - 0xau;  // (from the original)
        r1 = r1_2 + 1u;
        *gptr<u16>(r12_1 + 0x4cu) = u16(r2);  // (from the original)
        guest::preempt();
    } while (res_1 >> 0x1f != ((r0 ^ 0xau) & (r0 ^ res_1)) >> 0x1f);  // (from the original)
    r0_3 = ~0u;
    *gptr<u32>(r4 + 0x60u) = u32(r0_3);  // (from the original)
    *gptr<u32>(r5 + 0x204u) = u32(r6);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_001decb0
GUEST_EXPORT(0x001decb0, d_001decb0::f_001decb0);

// f_001ded24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ded24 {

inline constexpr guest::Function<0x003052f0, u32(u32, u32, u32, u32)> call_003052f0;  // (from the original)
inline constexpr guest::Function<0x0030589c, u32(u32, u32, u32, u32)> call_0030589c;  // (from the original)

u32 f_001ded24(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 res_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    r13 = r13 - 0x20;  // (from the original)
    r5 = 0u;
    r6 = r0;
    r8 = r5;
    r7 = 0xffffu;  // (from the original)
    r9 = ~0u;
L_1ded3c:;
    r4 = r6 + (r5 + (r5 << 2) + (r5 << 3) << 3);
    r0_1 = r4 + 4u;
    *gptr<u32>(r4) = u32(r8);
    guest::cpu()->r[13] = r13;
    call_003052f0(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u16>(r4 + 0x32u) = u16(r8);  // (from the original)
    *gptr<u8>(r4 + 0x34u) = u8(r8);  // (from the original)
    r0_2 = r4 + 0x36u;  // (from the original)
    *gptr<u8>(r4 + 0x35u) = u8(r8);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030589c(r0_2, r1_1, r2_1, r3_1);
    r1 = 0u;
    r0 = r1;
    do {
L_1ded70:;
        r3 = r4 + (r1 << 1);
        r1_2 = r1 + 1u;
        r0 = r0 + 2u;
        r2 = r4 + (r1_2 << 1);
        *gptr<u16>(r3 + 0x4cu) = u16(r7);  // (from the original)
        res_1 = r0 - 0xau;  // (from the original)
        r1 = r1_2 + 1u;
        *gptr<u16>(r2 + 0x4cu) = u16(r7);  // (from the original)
        guest::preempt();
    } while (res_1 >> 0x1f != ((r0 ^ 0xau) & (r0 ^ res_1)) >> 0x1f);  // (from the original)
    ea_1 = r4 + 0x60u;  // (from the original)
    *gptr<u32>(ea_1) = u32(r9);
    ea_2 = r4 + 0x64u;  // (from the original)
    *gptr<u16>(ea_2) = u16(r8);
    r5 = r5 + 1u;
    *gptr<u8>(ea_2 + 2u) = u8(r8);
    *gptr<u8>(ea_2 + 3u) = u8(r8);
    if (r5 < 4u) {
        guest::preempt();
        goto L_1ded3c;
    }
    *gptr<u8>(r6 + 0x218u) = u8(r8);  // (from the original)
    *gptr<u8>(r6 + 0x219u) = u8(r8);  // (from the original)
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001ded24
GUEST_EXPORT(0x001ded24, d_001ded24::f_001ded24);

// f_001dedc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001dedc0 {

inline constexpr guest::Function<0x003052f0, u32(u32, u32, u32, u32)> call_003052f0;  // (from the original)
inline constexpr guest::Function<0x0030589c, u32(u32, u32, u32, u32)> call_0030589c;  // (from the original)

u32 f_001dedc0(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 res_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r1_5 = 0;
    u32 r3_3 = 0;
    u32 res_2 = 0;
    r13 = r13 - 0x20;  // (from the original)
    r5 = 0u;
    r7 = r0;
    r10 = ~0u;
    r9 = r5;
    r8 = r10 >> 0x10;  // (from the original)
L_1dedd8:;
    r1_1 = r5 + (r5 << 2) + (r5 << 3);
    r4 = r7 + (r1_1 << 3);
    r0_1 = r4 + 4u;
    *gptr<u32>(r4) = u32(r9);
    guest::cpu()->r[13] = r13;
    call_003052f0(r0_1, r1_1, r2, r3);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u16>(r4 + 0x32u) = u16(r9);  // (from the original)
    *gptr<u8>(r4 + 0x34u) = u8(r9);  // (from the original)
    r0_2 = r4 + 0x36u;  // (from the original)
    *gptr<u8>(r4 + 0x35u) = u8(r9);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030589c(r0_2, r1_2, r2_1, r3_1);
    r1 = 0u;
    r0 = r1;
    do {
L_1dee0c:;
        r2 = r4 + (r1 << 1);
        r1_3 = r1 + 1u;
        r0 = r0 + 2u;
        r3 = r4 + (r1_3 << 1);
        *gptr<u16>(r2 + 0x4cu) = u16(r8);  // (from the original)
        res_1 = r0 - 0xau;  // (from the original)
        r1 = r1_3 + 1u;
        *gptr<u16>(r3 + 0x4cu) = u16(r8);  // (from the original)
        guest::preempt();
    } while (res_1 >> 0x1f != ((r0 ^ 0xau) & (r0 ^ res_1)) >> 0x1f);  // (from the original)
    ea_1 = r4 + 0x60u;  // (from the original)
    *gptr<u32>(ea_1) = u32(r10);
    ea_2 = r4 + 0x64u;  // (from the original)
    *gptr<u16>(ea_2) = u16(r9);
    r5 = r5 + 1u;
    *gptr<u8>(ea_2 + 2u) = u8(r9);
    *gptr<u8>(ea_2 + 3u) = u8(r9);
    if (r5 < 4u) {
        guest::preempt();
        goto L_1dedd8;
    }
    *gptr<u8>(r7 + 0x218u) = u8(r9);  // (from the original)
    *gptr<u8>(r7 + 0x219u) = u8(r9);  // (from the original)
    r6 = r7 + 0x1a0u;  // (from the original)
    r0_3 = r7 + 0x1a4u;  // (from the original)
    *gptr<u32>(r7 + 0x1a0u) = u32(r9);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_003052f0(r0_3, r1, r2, r3);
    r1_4 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u16>(r6 + 0x32u) = u16(r9);  // (from the original)
    *gptr<u8>(r6 + 0x34u) = u8(r9);  // (from the original)
    r0_4 = r6 + 0x36u;  // (from the original)
    *gptr<u8>(r6 + 0x35u) = u8(r9);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030589c(r0_4, r1_4, r2_2, r3_2);
    r1 = 0u;
    r0 = r1;
    do {
L_1dee80:;
        r2_3 = r6 + (r1 << 1);
        r1_5 = r1 + 1u;
        r0 = r0 + 2u;
        r3_3 = r6 + (r1_5 << 1);
        *gptr<u16>(r2_3 + 0x4cu) = u16(r8);  // (from the original)
        res_2 = r0 - 0xau;  // (from the original)
        r1 = r1_5 + 1u;
        *gptr<u16>(r3_3 + 0x4cu) = u16(r8);  // (from the original)
        guest::preempt();
    } while (res_2 >> 0x1f != ((r0 ^ 0xau) & (r0 ^ res_2)) >> 0x1f);  // (from the original)
    *gptr<u32>(r6 + 0x60u) = u32(r10);  // (from the original)
    *gptr<u32>(r7 + 0x208u) = u32(0u);  // (from the original)
    *gptr<u32>(r7 + 0x204u) = u32(r9);  // (from the original)
    *gptr<u32>(r7 + 0x20cu) = u32(0u);  // (from the original)
    *gptr<u8>(r7 + 0x210u) = u8(r9);  // (from the original)
    *gptr<u8>(r7 + 0x211u) = u8(r9);  // (from the original)
    *gptr<u8>(r7 + 0x212u) = u8(r9);  // (from the original)
    *gptr<u8>(r7 + 0x213u) = u8(r9);  // (from the original)
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = 0u;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001dedc0
GUEST_EXPORT(0x001dedc0, d_001dedc0::f_001dedc0);

// f_001deecc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001deecc {

inline constexpr guest::Function<0x001dedc0, u32(u32, u32, u32, u32)> call_001dedc0;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x003052f0, u32(u32, u32, u32, u32)> call_003052f0;  // (from the original)
inline constexpr guest::Function<0x0030589c, u32(u32, u32, u32, u32)> call_0030589c;  // (from the original)

u32 f_001deecc(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 ea_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r3_3 = 0;
    u32 r1_3 = 0;
    u32 r12_1 = 0;
    u32 res_1 = 0;
    u32 r1_4 = 0;
    u32 r4_1 = 0;
    u32 r1_5 = 0;
    r13 = r13 - 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00301d0c(r0, 0x1de90cu, 0x68u, 4u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r0_1 + 0x1a4u;  // (from the original)
    r4 = r0_2 - 4u;
    ea_1 = r0_2 + 0x2eu;  // (from the original)
    *gptr<u16>(ea_1) = u16(0u);
    *gptr<u8>(ea_1 + 2u) = u8(0u);
    *gptr<u8>(ea_1 + 3u) = u8(0u);
    r0_3 = r4 + 4u;
    *gptr<u32>(r4) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_003052f0(r0_3, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u16>(r4 + 0x32u) = u16(0u);  // (from the original)
    *gptr<u8>(r4 + 0x34u) = u8(0u);  // (from the original)
    r0_4 = r4 + 0x36u;  // (from the original)
    *gptr<u8>(r4 + 0x35u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030589c(r0_4, r1_2, r2_2, r3_2);
    r2 = 0xffffu;  // (from the original)
    r1 = 0u;
    r0 = r1;
    do {
L_1def28:;
        r3_3 = r4 + (r1 << 1);
        r1_3 = r1 + 1u;
        r0 = r0 + 2u;
        r12_1 = r4 + (r1_3 << 1);
        *gptr<u16>(r3_3 + 0x4cu) = u16(r2);  // (from the original)
        res_1 = r0 - 0xau;  // (from the original)
        r1 = r1_3 + 1u;
        *gptr<u16>(r12_1 + 0x4cu) = u16(r2);  // (from the original)
        guest::preempt();
    } while (res_1 >> 0x1f != ((r0 ^ 0xau) & (r0 ^ res_1)) >> 0x1f);  // (from the original)
    r1_4 = ~0u;
    *gptr<u32>(r4 + 0x60u) = u32(r1_4);  // (from the original)
    r4_1 = r4 - 0x1a0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001dedc0(r4_1, r1_4, r2, r3_3);
    r1_5 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return r4_1;
}

}  // namespace d_001deecc
GUEST_EXPORT(0x001deecc, d_001deecc::f_001deecc);

// f_001def90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001def90 {

struct __attribute__((packed)) Object_001def90_0 {
    u8 unknown_0[0x4];  // (not used here)
    u16 half_4;
    u16 half_6;
    u16 half_8;
    u16 half_a;
    u16 half_c;
    u16 half_e;
    u16 half_10;
    u16 half_12;
    u8 unknown_14[0x2];  // (not used here)
    u8 byte_16;
    u8 byte_17;
    u8 byte_18;
    u8 byte_19;
    u8 unknown_1a[0x1];  // (not used here)
    u8 byte_1b;
    u8 unknown_1c[0x1];  // (not used here)
    u8 byte_1d;
    u8 byte_1e;
    u8 byte_1f;
    u8 unknown_20[0x1];  // (not used here)
    u8 byte_21;
    u8 byte_22;
    u8 byte_23;
    u8 byte_24;
    u8 byte_25;
    u8 byte_26;
};
GUEST_OFFSET(Object_001def90_0, half_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001def90_0, half_6, 0x6);  // (from the original)
GUEST_OFFSET(Object_001def90_0, half_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_001def90_0, half_a, 0xa);  // (from the original)
GUEST_OFFSET(Object_001def90_0, half_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_001def90_0, half_e, 0xe);  // (from the original)
GUEST_OFFSET(Object_001def90_0, half_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_001def90_0, half_12, 0x12);  // (from the original)
GUEST_OFFSET(Object_001def90_0, byte_16, 0x16);  // (from the original)
GUEST_OFFSET(Object_001def90_0, byte_17, 0x17);  // (from the original)
GUEST_OFFSET(Object_001def90_0, byte_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_001def90_0, byte_19, 0x19);  // (from the original)
GUEST_OFFSET(Object_001def90_0, byte_1b, 0x1b);  // (from the original)
GUEST_OFFSET(Object_001def90_0, byte_1d, 0x1d);  // (from the original)
GUEST_OFFSET(Object_001def90_0, byte_1e, 0x1e);  // (from the original)
GUEST_OFFSET(Object_001def90_0, byte_1f, 0x1f);  // (from the original)
GUEST_OFFSET(Object_001def90_0, byte_21, 0x21);  // (from the original)
GUEST_OFFSET(Object_001def90_0, byte_22, 0x22);  // (from the original)
GUEST_OFFSET(Object_001def90_0, byte_23, 0x23);  // (from the original)
GUEST_OFFSET(Object_001def90_0, byte_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_001def90_0, byte_25, 0x25);  // (from the original)
GUEST_OFFSET(Object_001def90_0, byte_26, 0x26);  // (from the original)


void f_001def90(gptr<Object_001def90_0> arg0) {
    arg0->byte_16 = u8(1u);
    arg0->byte_17 = u8(0u);
    arg0->byte_18 = u8(0u);
    arg0->byte_19 = u8(0u);
    arg0->byte_1b = u8(0u);
    arg0->byte_1d = u8(5u);
    arg0->byte_1e = u8(5u);
    arg0->byte_1f = u8(0u);
    arg0->half_4 = u16(0x7ffeu);  // (from the original)
    arg0->half_6 = u16(0x7ffeu);  // (from the original)
    arg0->half_8 = u16(0x7ffeu);  // (from the original)
    arg0->half_a = u16(0x7ffeu);  // (from the original)
    arg0->half_c = u16(0x7ffeu);  // (from the original)
    arg0->half_12 = u16(0x7ffeu);  // (from the original)
    arg0->half_e = u16(0x7ffeu);  // (from the original)
    arg0->half_10 = u16(0x7ffeu);  // (from the original)
    arg0->byte_21 = u8(0u);
    arg0->byte_22 = u8(0u);
    arg0->byte_23 = u8(0u);
    arg0->byte_24 = u8(0u);
    arg0->byte_25 = u8(0u);
    arg0->byte_26 = u8(0u);
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_001def90
GUEST_EXPORT(0x001def90, d_001def90::f_001def90);

// f_001df020: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001df020 {

struct __attribute__((packed)) Object_001df020_0 {
    u32 word_0;
    u16 half_4;
    u16 half_6;
    u16 half_8;
    u16 half_a;
    u16 half_c;
    u16 half_e;
    u16 half_10;
    u16 half_12;
    u8 byte_14;
    u8 byte_15;
    u8 byte_16;
    u8 byte_17;
    u8 byte_18;
    u8 byte_19;
    u8 unknown_1a[0x1];  // (not used here)
    u8 byte_1b;
    u8 unknown_1c[0x1];  // (not used here)
    u8 byte_1d;
    u8 byte_1e;
    u8 byte_1f;
    u8 unknown_20[0x1];  // (not used here)
    u8 byte_21;
    u8 byte_22;
    u8 byte_23;
    u8 byte_24;
    u8 byte_25;
    u8 byte_26;
    u8 byte_27;
    u8 byte_28;
    u8 byte_29;
    u8 byte_2a;
};
GUEST_OFFSET(Object_001df020_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001df020_0, half_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001df020_0, half_6, 0x6);  // (from the original)
GUEST_OFFSET(Object_001df020_0, half_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_001df020_0, half_a, 0xa);  // (from the original)
GUEST_OFFSET(Object_001df020_0, half_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_001df020_0, half_e, 0xe);  // (from the original)
GUEST_OFFSET(Object_001df020_0, half_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_001df020_0, half_12, 0x12);  // (from the original)
GUEST_OFFSET(Object_001df020_0, byte_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_001df020_0, byte_15, 0x15);  // (from the original)
GUEST_OFFSET(Object_001df020_0, byte_16, 0x16);  // (from the original)
GUEST_OFFSET(Object_001df020_0, byte_17, 0x17);  // (from the original)
GUEST_OFFSET(Object_001df020_0, byte_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_001df020_0, byte_19, 0x19);  // (from the original)
GUEST_OFFSET(Object_001df020_0, byte_1b, 0x1b);  // (from the original)
GUEST_OFFSET(Object_001df020_0, byte_1d, 0x1d);  // (from the original)
GUEST_OFFSET(Object_001df020_0, byte_1e, 0x1e);  // (from the original)
GUEST_OFFSET(Object_001df020_0, byte_1f, 0x1f);  // (from the original)
GUEST_OFFSET(Object_001df020_0, byte_21, 0x21);  // (from the original)
GUEST_OFFSET(Object_001df020_0, byte_22, 0x22);  // (from the original)
GUEST_OFFSET(Object_001df020_0, byte_23, 0x23);  // (from the original)
GUEST_OFFSET(Object_001df020_0, byte_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_001df020_0, byte_25, 0x25);  // (from the original)
GUEST_OFFSET(Object_001df020_0, byte_26, 0x26);  // (from the original)
GUEST_OFFSET(Object_001df020_0, byte_27, 0x27);  // (from the original)
GUEST_OFFSET(Object_001df020_0, byte_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_001df020_0, byte_29, 0x29);  // (from the original)
GUEST_OFFSET(Object_001df020_0, byte_2a, 0x2a);  // (from the original)


void f_001df020(gptr<Object_001df020_0> arg0) {
    arg0->byte_14 = u8(8u);
    arg0->word_0 = u32(0u);
    arg0->byte_15 = u8(0u);
    arg0->byte_16 = u8(1u);
    arg0->byte_17 = u8(0u);
    arg0->byte_18 = u8(0u);
    arg0->byte_19 = u8(0u);
    arg0->byte_1b = u8(0u);
    arg0->byte_1f = u8(0u);
    arg0->byte_21 = u8(0u);
    arg0->byte_22 = u8(0u);
    arg0->byte_23 = u8(0u);
    arg0->byte_24 = u8(0u);
    arg0->byte_25 = u8(0u);
    arg0->byte_26 = u8(0u);
    arg0->byte_1d = u8(5u);
    arg0->byte_1e = u8(5u);
    arg0->half_4 = u16(0x7ffeu);  // (from the original)
    arg0->half_6 = u16(0x7ffeu);  // (from the original)
    arg0->half_8 = u16(0x7ffeu);  // (from the original)
    arg0->half_a = u16(0x7ffeu);  // (from the original)
    arg0->half_c = u16(0x7ffeu);  // (from the original)
    arg0->half_12 = u16(0x7ffeu);  // (from the original)
    arg0->half_e = u16(0x7ffeu);  // (from the original)
    arg0->half_10 = u16(0x7ffeu);  // (from the original)
    arg0->byte_27 = u8(0u);
    arg0->byte_28 = u8(0u);
    arg0->byte_29 = u8(0u);
    arg0->byte_2a = u8(0u);
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_001df020
GUEST_EXPORT(0x001df020, d_001df020::f_001df020);

// f_001df0b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001df0b0 {

struct __attribute__((packed)) Object_001df0b0_0 {
    u32 word_0;
    u16 half_4;
    u16 half_6;
    u16 half_8;
    u16 half_a;
    u16 half_c;
    u16 half_e;
    u16 half_10;
    u16 half_12;
    u8 byte_14;
    u8 byte_15;
    u8 byte_16;
    u8 byte_17;
    u8 byte_18;
    u8 byte_19;
    u8 unknown_1a[0x1];  // (not used here)
    u8 byte_1b;
    u8 unknown_1c[0x1];  // (not used here)
    u8 byte_1d;
    u8 byte_1e;
    u8 byte_1f;
    u8 unknown_20[0x1];  // (not used here)
    u8 byte_21;
    u8 byte_22;
    u8 byte_23;
    u8 byte_24;
    u8 byte_25;
    u8 byte_26;
    u8 byte_27;
    u8 byte_28;
    u8 byte_29;
    u8 byte_2a;
};
GUEST_OFFSET(Object_001df0b0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001df0b0_0, half_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001df0b0_0, half_6, 0x6);  // (from the original)
GUEST_OFFSET(Object_001df0b0_0, half_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_001df0b0_0, half_a, 0xa);  // (from the original)
GUEST_OFFSET(Object_001df0b0_0, half_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_001df0b0_0, half_e, 0xe);  // (from the original)
GUEST_OFFSET(Object_001df0b0_0, half_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_001df0b0_0, half_12, 0x12);  // (from the original)
GUEST_OFFSET(Object_001df0b0_0, byte_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_001df0b0_0, byte_15, 0x15);  // (from the original)
GUEST_OFFSET(Object_001df0b0_0, byte_16, 0x16);  // (from the original)
GUEST_OFFSET(Object_001df0b0_0, byte_17, 0x17);  // (from the original)
GUEST_OFFSET(Object_001df0b0_0, byte_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_001df0b0_0, byte_19, 0x19);  // (from the original)
GUEST_OFFSET(Object_001df0b0_0, byte_1b, 0x1b);  // (from the original)
GUEST_OFFSET(Object_001df0b0_0, byte_1d, 0x1d);  // (from the original)
GUEST_OFFSET(Object_001df0b0_0, byte_1e, 0x1e);  // (from the original)
GUEST_OFFSET(Object_001df0b0_0, byte_1f, 0x1f);  // (from the original)
GUEST_OFFSET(Object_001df0b0_0, byte_21, 0x21);  // (from the original)
GUEST_OFFSET(Object_001df0b0_0, byte_22, 0x22);  // (from the original)
GUEST_OFFSET(Object_001df0b0_0, byte_23, 0x23);  // (from the original)
GUEST_OFFSET(Object_001df0b0_0, byte_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_001df0b0_0, byte_25, 0x25);  // (from the original)
GUEST_OFFSET(Object_001df0b0_0, byte_26, 0x26);  // (from the original)
GUEST_OFFSET(Object_001df0b0_0, byte_27, 0x27);  // (from the original)
GUEST_OFFSET(Object_001df0b0_0, byte_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_001df0b0_0, byte_29, 0x29);  // (from the original)
GUEST_OFFSET(Object_001df0b0_0, byte_2a, 0x2a);  // (from the original)


void f_001df0b0(gptr<Object_001df0b0_0> arg0) {
    arg0->byte_14 = u8(8u);
    arg0->word_0 = u32(0u);
    arg0->byte_15 = u8(0u);
    arg0->byte_16 = u8(1u);
    arg0->byte_17 = u8(0u);
    arg0->byte_18 = u8(0u);
    arg0->byte_19 = u8(0u);
    arg0->byte_1b = u8(0u);
    arg0->byte_1f = u8(0u);
    arg0->byte_21 = u8(0u);
    arg0->byte_22 = u8(0u);
    arg0->byte_23 = u8(0u);
    arg0->byte_24 = u8(0u);
    arg0->byte_25 = u8(0u);
    arg0->byte_26 = u8(0u);
    arg0->byte_1d = u8(5u);
    arg0->byte_1e = u8(5u);
    arg0->half_4 = u16(0x7ffeu);  // (from the original)
    arg0->half_6 = u16(0x7ffeu);  // (from the original)
    arg0->half_8 = u16(0x7ffeu);  // (from the original)
    arg0->half_a = u16(0x7ffeu);  // (from the original)
    arg0->half_c = u16(0x7ffeu);  // (from the original)
    arg0->half_12 = u16(0x7ffeu);  // (from the original)
    arg0->half_e = u16(0x7ffeu);  // (from the original)
    arg0->half_10 = u16(0x7ffeu);  // (from the original)
    arg0->byte_27 = u8(0u);
    arg0->byte_28 = u8(0u);
    arg0->byte_29 = u8(0u);
    arg0->byte_2a = u8(0u);
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_001df0b0
GUEST_EXPORT(0x001df0b0, d_001df0b0::f_001df0b0);

// f_001df14c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001df14c {

struct __attribute__((packed)) Object_001df14c_0 {
    u32 word_0;
    u8 unknown_4[0x10];  // (not used here)
    u8 byte_14;
    u8 byte_15;
    u8 unknown_16[0x11];  // (not used here)
    u8 byte_27;
    u8 unknown_28[0x1];  // (not used here)
    u8 byte_29;
};
GUEST_OFFSET(Object_001df14c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001df14c_0, byte_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_001df14c_0, byte_15, 0x15);  // (from the original)
GUEST_OFFSET(Object_001df14c_0, byte_27, 0x27);  // (from the original)
GUEST_OFFSET(Object_001df14c_0, byte_29, 0x29);  // (from the original)


void f_001df14c(gptr<Object_001df14c_0> arg0, u32 r1) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 cf_1 = 0;
    u32 r2_2 = 0;
    u32 r2_3 = 0;
    u32 res_1 = 0;
    u32 r1_1 = 0;
    u32 res_2 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 4u;
    r3_1 = u32(arg0->byte_14);
    r2_1 = u32(arg0->byte_15);
    arg0->word_0 = u32(r1);
    cf_1 = r3_1 >= 8u;
    r2_2 = r2_1 | 1u;
    arg0->byte_15 = u8(r2_2);
    if (cf_1) {
        r2_3 = r2_2 & ~2u;
        r4 = 0x88e6b4u;  // (from the original)
    } else {
        r2_3 = r2_2 | 2u;
        r4 = 0x88e6d8u;  // (from the original)
    }
    arg0->byte_15 = u8(r2_3);
    r12 = 0u;
    if (cf_1) {
        r2 = 8u;
        goto L_1df1bc;
    } else {
        r2 = 5u;
    }
L_1df18c:;
    if (*gptr<u32>(r4 + (r2 << 2)) <= r1) {
        r12 = r2 & 0xffu;  // (from the original)
    } else {
        res_1 = r2 - 1u;
        r2 = res_1;
        if (res_1 != 0) {
            guest::preempt();
            goto L_1df18c;
        }
    }
    r1_1 = u32(arg0->byte_29);
    if (r1_1 < r12) {
        arg0->byte_29 = u8(r12);
    }
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1_1;
    return;
L_1df1bc:;
    if (*gptr<u32>(r4 + (r2 << 2)) <= r1) {
        r12 = r2 & 0xffu;  // (from the original)
    } else {
        res_2 = r2 - 1u;
        r2 = res_2;
        if (res_2 != 0) {
            guest::preempt();
            goto L_1df1bc;
        }
    }
    r1_2 = u32(arg0->byte_27);
    if (r1_2 < r12) {
        arg0->byte_27 = u8(r12);
    }
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1_2;
    return;
}

}  // namespace d_001df14c
GUEST_EXPORT(0x001df14c, d_001df14c::f_001df14c);

// f_001df1f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001df1f4 {

struct __attribute__((packed)) Object_001df1f4_0 {
    u32 word_0;
    u16 half_4;
    u16 half_6;
    u16 half_8;
    u16 half_a;
    u16 half_c;
    u16 half_e;
    u16 half_10;
    u16 half_12;
    u8 byte_14;
    u8 byte_15;
    u8 byte_16;
    u8 byte_17;
    u8 byte_18;
    u8 byte_19;
    u8 unknown_1a[0x1];  // (not used here)
    u8 byte_1b;
    u8 unknown_1c[0x1];  // (not used here)
    u8 byte_1d;
    u8 byte_1e;
    u8 byte_1f;
    u8 unknown_20[0x1];  // (not used here)
    u8 byte_21;
    u8 byte_22;
    u8 byte_23;
    u8 byte_24;
    u8 byte_25;
    u8 byte_26;
};
GUEST_OFFSET(Object_001df1f4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001df1f4_0, half_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001df1f4_0, half_6, 0x6);  // (from the original)
GUEST_OFFSET(Object_001df1f4_0, half_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_001df1f4_0, half_a, 0xa);  // (from the original)
GUEST_OFFSET(Object_001df1f4_0, half_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_001df1f4_0, half_e, 0xe);  // (from the original)
GUEST_OFFSET(Object_001df1f4_0, half_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_001df1f4_0, half_12, 0x12);  // (from the original)
GUEST_OFFSET(Object_001df1f4_0, byte_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_001df1f4_0, byte_15, 0x15);  // (from the original)
GUEST_OFFSET(Object_001df1f4_0, byte_16, 0x16);  // (from the original)
GUEST_OFFSET(Object_001df1f4_0, byte_17, 0x17);  // (from the original)
GUEST_OFFSET(Object_001df1f4_0, byte_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_001df1f4_0, byte_19, 0x19);  // (from the original)
GUEST_OFFSET(Object_001df1f4_0, byte_1b, 0x1b);  // (from the original)
GUEST_OFFSET(Object_001df1f4_0, byte_1d, 0x1d);  // (from the original)
GUEST_OFFSET(Object_001df1f4_0, byte_1e, 0x1e);  // (from the original)
GUEST_OFFSET(Object_001df1f4_0, byte_1f, 0x1f);  // (from the original)
GUEST_OFFSET(Object_001df1f4_0, byte_21, 0x21);  // (from the original)
GUEST_OFFSET(Object_001df1f4_0, byte_22, 0x22);  // (from the original)
GUEST_OFFSET(Object_001df1f4_0, byte_23, 0x23);  // (from the original)
GUEST_OFFSET(Object_001df1f4_0, byte_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_001df1f4_0, byte_25, 0x25);  // (from the original)
GUEST_OFFSET(Object_001df1f4_0, byte_26, 0x26);  // (from the original)


void f_001df1f4(gptr<Object_001df1f4_0> arg0) {
    arg0->byte_14 = u8(8u);
    arg0->word_0 = u32(0u);
    arg0->byte_15 = u8(0u);
    arg0->byte_16 = u8(1u);
    arg0->byte_17 = u8(0u);
    arg0->byte_18 = u8(0u);
    arg0->byte_19 = u8(0u);
    arg0->byte_1b = u8(0u);
    arg0->byte_1f = u8(0u);
    arg0->byte_21 = u8(0u);
    arg0->byte_22 = u8(0u);
    arg0->byte_23 = u8(0u);
    arg0->byte_24 = u8(0u);
    arg0->byte_25 = u8(0u);
    arg0->byte_26 = u8(0u);
    arg0->byte_1d = u8(5u);
    arg0->byte_1e = u8(5u);
    arg0->half_4 = u16(0x7ffeu);  // (from the original)
    arg0->half_6 = u16(0x7ffeu);  // (from the original)
    arg0->half_8 = u16(0x7ffeu);  // (from the original)
    arg0->half_a = u16(0x7ffeu);  // (from the original)
    arg0->half_c = u16(0x7ffeu);  // (from the original)
    arg0->half_12 = u16(0x7ffeu);  // (from the original)
    arg0->half_e = u16(0x7ffeu);  // (from the original)
    arg0->half_10 = u16(0x7ffeu);  // (from the original)
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_001df1f4
GUEST_EXPORT(0x001df1f4, d_001df1f4::f_001df1f4);

// f_001df274: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001df274 {


u32 f_001df274(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    r1_1 = u32(s32(s16(r1)) * s32(s16(0x371u)));  // (from the original)
    r0_1 = r0 + (r1_1 << 3) + 0x2058u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_001df274
GUEST_EXPORT(0x001df274, d_001df274::f_001df274);

// f_001df324: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001df324 {

inline guest::global<u8, 0x0098203c> global_0098203c;  // (from the original)
inline guest::global<u32, 0x00982040> global_00982040;  // (from the original)
inline guest::global<u8, 0x00982055> global_00982055;  // (from the original)

u32 f_001df324() {
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 r0_1 = 0;
    r1_1 = u32(s32(s8(*global_00982055)));
    res_1 = u32(s32(s8(*global_0098203c))) & ~r1_1;
    r0_1 = res_1;
    if (res_1 != 0) {
        r0_1 = *global_00982040;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_001df324
GUEST_EXPORT(0x001df324, d_001df324::f_001df324);

// f_001df350: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001df350 {


u32 f_001df350(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    r1_1 = (r1 << 4) - r1;
    r1_2 = r1_1 + (r1_1 << 1);
    r0_1 = r0 + (r1_2 << 5) + 0x8e78u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0_1;
}

}  // namespace d_001df350
GUEST_EXPORT(0x001df350, d_001df350::f_001df350);

// f_001df368: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001df368 {

inline guest::global<u8, 0x00982064> global_00982064;  // (from the original)
inline guest::global<u32, 0x00982068> global_00982068;  // (from the original)
inline guest::global<u8, 0x0098207d> global_0098207d;  // (from the original)

u32 f_001df368() {
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 r0_1 = 0;
    r1_1 = u32(s32(s8(*global_0098207d)));
    res_1 = u32(s32(s8(*global_00982064))) & ~r1_1;
    r0_1 = res_1;
    if (res_1 != 0) {
        r0_1 = *global_00982068;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_001df368
GUEST_EXPORT(0x001df368, d_001df368::f_001df368);

// f_001df394: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001df394 {

inline guest::global<u8, 0x00982014> global_00982014;  // (from the original)
inline guest::global<u32, 0x00982018> global_00982018;  // (from the original)

u32 f_001df394() {
    u32 r0_1 = 0;
    r0_1 = u32(*global_00982014);
    if (r0_1 != 0) {
        r0_1 = *global_00982018;
    }
    return r0_1;
}

}  // namespace d_001df394
GUEST_EXPORT(0x001df394, d_001df394::f_001df394);

// f_001df3b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001df3b4 {

inline guest::global<u8, 0x0098203c> global_0098203c;  // (from the original)
inline guest::global<u32, 0x00982040> global_00982040;  // (from the original)

u32 f_001df3b4() {
    u32 r0_1 = 0;
    r0_1 = u32(*global_0098203c);
    if (r0_1 != 0) {
        r0_1 = *global_00982040;
    }
    return r0_1;
}

}  // namespace d_001df3b4
GUEST_EXPORT(0x001df3b4, d_001df3b4::f_001df3b4);

// f_001df4c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001df4c4 {

inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)

u32 f_001df4c4(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_5 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r4_1 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r1_6 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002fc20c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_2 = r0_1 + 4u;
    r0_3 = call_002fc20c(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_4 = r0_3 + 4u;
    r0_5 = call_002fc20c(r0_4, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r0_6 = r0_5 + 4u;
    r0_7 = call_002fc20c(r0_6, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r0_8 = r0_7 + 4u;
    r0_9 = call_002fc20c(r0_8, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r0_10 = r0_9 + 4u;
    r0_11 = call_002fc20c(r0_10, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
    r4_1 = r0_11 - 0x14u;  // (from the original)
    call_002fc8e8(r4_1, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r0_12 = r4_1 + 4u;
    call_002fc8e8(r0_12, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r0_13 = r4_1 + 8u;
    call_002fc8e8(r0_13, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r0_14 = r4_1 + 0xcu;  // (from the original)
    call_002fc8e8(r0_14, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r0_15 = r4_1 + 0x10u;  // (from the original)
    call_002fc8e8(r0_15, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r0_16 = r4_1 + 0x14u;  // (from the original)
    call_002fc8e8(r0_16, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_6 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_6;
    return r4_1;
}

}  // namespace d_001df4c4
GUEST_EXPORT(0x001df4c4, d_001df4c4::f_001df4c4);

// f_001df564: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001df564 {

struct __attribute__((packed)) Object_001df564_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_001df564_0, byte_0, 0x0);  // (from the original)


void f_001df564(gptr<Object_001df564_0> arg0, u32 r1) {
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 r1_2 = 0;
    r3_1 = u32(arg0->byte_0);
    r2_1 = (r3_1 & 7u) + r1;
    if (r2_1 <= 7u) {
        r1_1 = r3_1 & ~7u | r2_1 & 7u;
        arg0->byte_0 = u8(r1_1);
        guest::cpu()->r[1] = r1_1;
        return;
    }
    nf_1 = r1 >> 0x1f;  // (from the original)
    zf_1 = r1 == 0;
    if (!zf_1 && nf_1 == 0u) {
        r2_1 = 7u;
    }
    if (zf_1 || nf_1 != 0u) {
        r2_1 = 0u;
    }
    r1_2 = r3_1 & ~7u | r2_1 & 7u;
    arg0->byte_0 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
    return;
}

}  // namespace d_001df564
GUEST_EXPORT(0x001df564, d_001df564::f_001df564);

// f_001df598: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001df598 {

struct __attribute__((packed)) Object_001df598_0 {
    u8 unknown_0[0x3];  // (not used here)
    u8 byte_3;
    u8 byte_4;
};
GUEST_OFFSET(Object_001df598_0, byte_3, 0x3);  // (from the original)
GUEST_OFFSET(Object_001df598_0, byte_4, 0x4);  // (from the original)


void f_001df598(gptr<Object_001df598_0> arg0, u32 r1) {
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 r1_2 = 0;
    r3_1 = u32(arg0->byte_3);
    r2_1 = (r3_1 >> 1) + ((u32(arg0->byte_4) & 1u) << 7) + r1;
    if (r2_1 <= 0xffu) {  // (from the original)
        r1_1 = u32(arg0->byte_4) & ~1u | (r2_1 & 0x80u) >> 7;  // (from the original)
        arg0->byte_3 = u8(r3_1 & ~0xfeu | r2_1 << 1);  // (from the original)
        arg0->byte_4 = u8(r1_1);
        guest::cpu()->r[1] = r1_1;
        return;
    }
    nf_1 = r1 >> 0x1f;  // (from the original)
    zf_1 = r1 == 0;
    if (!zf_1 && nf_1 == 0u) {
        r2_1 = 0xffu;  // (from the original)
    }
    if (zf_1 || nf_1 != 0u) {
        r2_1 = 0u;
    }
    r1_2 = u32(arg0->byte_4) & ~1u | (r2_1 & 0x80u) >> 7;  // (from the original)
    arg0->byte_3 = u8(r3_1 & ~0xfeu | r2_1 << 1);  // (from the original)
    arg0->byte_4 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
    return;
}

}  // namespace d_001df598
GUEST_EXPORT(0x001df598, d_001df598::f_001df598);

// f_001df5e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001df5e8 {

struct __attribute__((packed)) Object_001df5e8_0 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
};
GUEST_OFFSET(Object_001df5e8_0, byte_4, 0x4);  // (from the original)


void f_001df5e8(gptr<Object_001df5e8_0> arg0, u32 r1) {
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 r1_2 = 0;
    r3_1 = u32(arg0->byte_4);
    r2_1 = r1 + (r3_1 << 0x1c >> 0x1d);  // (from the original)
    if (r2_1 <= 7u) {
        r1_1 = r3_1 & ~0xeu | (r2_1 & 7u) << 1;  // (from the original)
        arg0->byte_4 = u8(r1_1);
        guest::cpu()->r[1] = r1_1;
        return;
    }
    nf_1 = r1 >> 0x1f;  // (from the original)
    zf_1 = r1 == 0;
    if (!zf_1 && nf_1 == 0u) {
        r2_1 = 7u;
    }
    if (zf_1 || nf_1 != 0u) {
        r2_1 = 0u;
    }
    r1_2 = r3_1 & ~0xeu | (r2_1 & 7u) << 1;  // (from the original)
    arg0->byte_4 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
    return;
}

}  // namespace d_001df5e8
GUEST_EXPORT(0x001df5e8, d_001df5e8::f_001df5e8);

// f_001df61c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001df61c {

struct __attribute__((packed)) Object_001df61c_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_001df61c_0, byte_0, 0x0);  // (from the original)


void f_001df61c(gptr<Object_001df61c_0> arg0, u32 r1) {
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 r1_2 = 0;
    r3_1 = u32(arg0->byte_0);
    r2_1 = r1 + (r3_1 << 0x1a >> 0x1d);  // (from the original)
    if (r2_1 <= 7u) {
        r1_1 = r3_1 & ~0x38u | (r2_1 & 7u) << 3;  // (from the original)
        arg0->byte_0 = u8(r1_1);
        guest::cpu()->r[1] = r1_1;
        return;
    }
    nf_1 = r1 >> 0x1f;  // (from the original)
    zf_1 = r1 == 0;
    if (!zf_1 && nf_1 == 0u) {
        r2_1 = 7u;
    }
    if (zf_1 || nf_1 != 0u) {
        r2_1 = 0u;
    }
    r1_2 = r3_1 & ~0x38u | (r2_1 & 7u) << 3;  // (from the original)
    arg0->byte_0 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
    return;
}

}  // namespace d_001df61c
GUEST_EXPORT(0x001df61c, d_001df61c::f_001df61c);

// f_001df668: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001df668 {

struct __attribute__((packed)) Object_001df668_0 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
};
GUEST_OFFSET(Object_001df668_0, byte_4, 0x4);  // (from the original)


void f_001df668(gptr<Object_001df668_0> arg0, u32 r1) {
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 r1_2 = 0;
    r3_1 = u32(arg0->byte_4);
    r2_1 = r1 + (r3_1 << 0x19 >> 0x1d);  // (from the original)
    if (r2_1 <= 7u) {
        r1_1 = r3_1 & ~0x70u | (r2_1 & 7u) << 4;  // (from the original)
        arg0->byte_4 = u8(r1_1);
        guest::cpu()->r[1] = r1_1;
        return;
    }
    nf_1 = r1 >> 0x1f;  // (from the original)
    zf_1 = r1 == 0;
    if (!zf_1 && nf_1 == 0u) {
        r2_1 = 7u;
    }
    if (zf_1 || nf_1 != 0u) {
        r2_1 = 0u;
    }
    r1_2 = r3_1 & ~0x70u | (r2_1 & 7u) << 4;  // (from the original)
    arg0->byte_4 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
    return;
}

}  // namespace d_001df668
GUEST_EXPORT(0x001df668, d_001df668::f_001df668);
