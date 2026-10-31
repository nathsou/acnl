// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_00210c2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00210c2c {

struct __attribute__((packed)) Object_00210c2c_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
    u8 byte_b;
    u8 byte_c;
    u8 byte_d;
    u8 byte_e;
    u8 unknown_f[0x29];  // (not used here)
    u8 byte_38;
    u8 byte_39;
    u8 byte_3a;
    u8 unknown_3b[0x21];  // (not used here)
    u8 byte_5c;
    u8 byte_5d;
    u8 byte_5e;
    u8 unknown_5f[0x5];  // (not used here)
    u8 byte_64;
    u8 unknown_65[0xb];  // (not used here)
    u8 byte_70;
    u8 unknown_71[0x3];  // (not used here)
    u32 word_74;
    u8 unknown_78[0x10];  // (not used here)
    u8 byte_88;
};
GUEST_OFFSET(Object_00210c2c_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00210c2c_0, byte_9, 0x9);  // (from the original)
GUEST_OFFSET(Object_00210c2c_0, byte_a, 0xa);  // (from the original)
GUEST_OFFSET(Object_00210c2c_0, byte_b, 0xb);  // (from the original)
GUEST_OFFSET(Object_00210c2c_0, byte_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00210c2c_0, byte_d, 0xd);  // (from the original)
GUEST_OFFSET(Object_00210c2c_0, byte_e, 0xe);  // (from the original)
GUEST_OFFSET(Object_00210c2c_0, byte_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_00210c2c_0, byte_39, 0x39);  // (from the original)
GUEST_OFFSET(Object_00210c2c_0, byte_3a, 0x3a);  // (from the original)
GUEST_OFFSET(Object_00210c2c_0, byte_5c, 0x5c);  // (from the original)
GUEST_OFFSET(Object_00210c2c_0, byte_5d, 0x5d);  // (from the original)
GUEST_OFFSET(Object_00210c2c_0, byte_5e, 0x5e);  // (from the original)
GUEST_OFFSET(Object_00210c2c_0, byte_64, 0x64);  // (from the original)
GUEST_OFFSET(Object_00210c2c_0, byte_70, 0x70);  // (from the original)
GUEST_OFFSET(Object_00210c2c_0, word_74, 0x74);  // (from the original)
GUEST_OFFSET(Object_00210c2c_0, byte_88, 0x88);  // (from the original)

inline guest::global<u32, 0x00210e54> global_00210e54;  // (from the original)
inline guest::global<u32, 0x00845378> global_00845378;  // (from the original)
inline constexpr guest::Function<0x001435b4, u32(u32, u32, u32, u32)> call_001435b4;  // (from the original)
inline constexpr guest::Function<0x001f9684, u32(u32, u32, u32, u32)> call_001f9684;  // (from the original)
inline constexpr guest::Function<0x0034a784, u32(u32, u32, u32, u32)> call_0034a784;  // (from the original)
inline constexpr guest::Function<0x0034a8b4, u32(u32, u32, u32, u32)> call_0034a8b4;  // (from the original)
inline constexpr guest::Function<0x0052652c, u32(u32, u32, u32, u32)> call_0052652c;  // (from the original)

u32 f_00210c2c(gptr<Object_00210c2c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    float S0_1 = 0;
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    float S0_2 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    float S0_4 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    float S0_5 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    float S0_6 = 0;
    u32 r0_9 = 0;
    u32 r1_4 = 0;
    float S0_7 = 0;
    u32 r1_5 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r1_6 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r3_6 = 0;
    u32 r1_7 = 0;
    float S0_8 = 0;
    u32 r1_8 = 0;
    u32 r3_7 = 0;
    float S0_9 = 0;
    u32 r1_9 = 0;
    u32 r3_8 = 0;
    float S0_10 = 0;
    u32 r1_10 = 0;
    u32 r3_9 = 0;
    float S0_11 = 0;
    u32 r3_10 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r2_6 = 0;
    u32 r2_7 = 0;
    u32 r1_11 = 0;
    u32 r2_8 = 0;
    u32 r2_9 = 0;
    u32 r2_10 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_12 = 0;
    u32 r1_13 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    float S0_12 = 0;
    u32 r0_18 = 0;
    r13 = r13 - 0x38u;  // (from the original)
    arg0->byte_8 = u8(0u);
    arg0->byte_88 = u8(0u);
    arg0->byte_38 = u8(0u);
    arg0->byte_3a = u8(1u);
    arg0->byte_39 = u8(0u);
    arg0->byte_9 = u8(0u);
    arg0->byte_d = u8(1u);
    arg0->byte_b = u8(1u);
    arg0->byte_a = u8(0u);
    arg0->byte_e = u8(1u);
    S0_1 = std::bit_cast<float>(*global_00210e54);
    arg0->byte_c = u8(1u);
    arg0->byte_70 = u8(1u);
    arg0->word_74 = u32(std::bit_cast<u32>(S0_1));
    arg0->byte_5c = u8(1u);
    arg0->byte_5d = u8(1u);
    arg0->byte_5e = u8(4u);
    arg0->byte_64 = u8(0u);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    r0_1 = call_001f9684(4u, r1, r2, r3);
    r3_1 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    r0_2 = r0_1 + 0x24u;  // (from the original)
    r2_1 = r0 + 0x1458u;  // (from the original)
    r0_3 = r0 + 0x1450u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    call_0052652c(r0_3, r0_2, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    r0_4 = r0 + 0x1590u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    r0_5 = call_001435b4(r0_4, r1_1, r2_2, r3_2);
    S0_4 = guest::cpu()->s[0];
    r0_6 = r0 + 0x4e4u;  // (from the original)
    r1_2 = *gptr<u32>(r0_2 + 4u);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    call_0034a784(r0_6, r1_2, r0_5, 0xbu);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    S0_5 = guest::cpu()->s[0];
    r0_7 = r0 + 0x15f0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    r0_8 = call_001435b4(r0_7, r1_3, r2_3, r3_3);
    S0_6 = guest::cpu()->s[0];
    r0_9 = r0 + 0xc74u;  // (from the original)
    r1_4 = *gptr<u32>(r0_2 + 4u);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_6;
    call_0034a784(r0_9, r1_4, r0_8, 0xbu);  // (from the original)
    S0_7 = guest::cpu()->s[0];
    r1_5 = *global_00845378;
    r2_4 = *gptr<u32>(0x845378u + 4);  // (from the original)
    r3_4 = *gptr<u32>(0x845378u + 8);  // (from the original)
    ea_1 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(ea_1) = u32(r1_5);
    *gptr<u32>(ea_1 + 4) = u32(r2_4);
    *gptr<u32>(ea_1 + 8) = u32(r3_4);
    ea_2 = 0x845378u + 0xcu;  // (from the original)
    r1_6 = *gptr<u32>(ea_2);
    r2_5 = *gptr<u32>(ea_2 + 4);
    r3_5 = *gptr<u32>(ea_2 + 8);
    *gptr<u32>(r13 + 0xcu) = u32(*gptr<u32>(0x845378u + 0x18u));  // (from the original)
    *gptr<u32>(r13) = u32(r1_6);
    *gptr<u32>(r13 + 4) = u32(r2_5);
    *gptr<u32>(r13 + 8) = u32(r3_5);
    r3_6 = r13 + 0x10u;  // (from the original)
    r1_7 = *gptr<u32>(r0_2 + 8u);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_7;
    call_0034a8b4(r0_6, r1_7, 3u, r3_6);
    S0_8 = guest::cpu()->s[0];
    r1_8 = *gptr<u32>(r0_2 + 8u);
    r3_7 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_8;
    call_0034a8b4(r0_9, r1_8, 3u, r3_7);
    S0_9 = guest::cpu()->s[0];
    r1_9 = *gptr<u32>(r0_2 + 0x10u);  // (from the original)
    r3_8 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_9;
    call_0034a8b4(r0_6, r1_9, 4u, r3_8);
    S0_10 = guest::cpu()->s[0];
    r1_10 = *gptr<u32>(r0_2 + 0x10u);  // (from the original)
    r3_9 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_10;
    call_0034a8b4(r0_9, r1_10, 4u, r3_9);
    S0_11 = guest::cpu()->s[0];
    r3_10 = r0 + 0x1650u;  // (from the original)
    *gptr<u8>(r3_10) = u8(0u);
    *gptr<u8>(0x1651u + r0) = u8(1u);  // (from the original)
    r0_10 = 0x1651u + 1u;  // (from the original)
    *gptr<u8>(r0_10 + r0) = u8(2u);
    r0_11 = r0_10 | u32(s32(r0_10) >> 0xc);  // (from the original)
    *gptr<u8>(r0_11 + r0) = u8(2u);
    r0_12 = r0_11 + 1u;
    r2_6 = r0_12 | u32(s32(r0_12) >> 0xa);  // (from the original)
    *gptr<u8>(r0_12 + r0) = u8(1u);
    *gptr<u8>(r2_6 + r0) = u8(3u);
    r2_7 = r2_6 ^ 3u;
    *gptr<u8>(r2_7 + r0) = u8(2u);
    r1_11 = r2_7 | 3u;
    r2_8 = r1_11 + u32(s32(3u) >> 1);
    *gptr<u8>(r1_11 + r0) = u8(3u);
    *gptr<u8>(r2_8 + r0) = u8(4u);
    r2_9 = r2_8 | u32(s32(3u) >> 1);
    *gptr<u8>(r2_9 + r0) = u8(4u);
    r2_10 = r2_9 ^ 3u;
    *gptr<u8>(r2_10 + r0) = u8(3u);
    r0_13 = r2_10 | 3u;
    *gptr<u8>(r0_13 + r0) = u8(5u);
    r0_14 = r0_13 + 1u;
    *gptr<u8>(r0_14 + r0) = u8(4u);
    r0_15 = r0_14 | u32(s32(r0_14) >> 6);
    r1_12 = r0_15 + 1u;
    *gptr<u8>(r0_15 + r0) = u8(5u);
    *gptr<u8>(r1_12 + r0) = u8(6u);
    r1_13 = r1_12 | u32(s32(6u) >> 1);
    *gptr<u8>(r1_13 + r0) = u8(6u);
    r0_16 = r1_13 + u32(s32(6u) >> 2);
    *gptr<u8>(r0_16 + r0) = u8(5u);
    *gptr<u8>((r0_16 | u32(s32(r0_16) >> 0xc)) + r0) = u8(7u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_11;
    r0_17 = call_001435b4(r3_10, 7u, 5u, r3_10);
    S0_12 = guest::cpu()->s[0];
    *gptr<u32>(0x1404u + r0) = u32(r0_17);  // (from the original)
    r0_18 = 0x1404u + 4u;  // (from the original)
    *gptr<u32>(r0_18 + r0) = u32(0x12u);  // (from the original)
    *gptr<u8>(r0 + 0x140cu) = u8(1u);  // (from the original)
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = 0x12u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_12;
    return r0_18;
}

}  // namespace d_00210c2c
GUEST_EXPORT(0x00210c2c, d_00210c2c::f_00210c2c);

// f_002127f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002127f4 {

inline constexpr guest::Function<0x00210e64, u32(u32, u32, u32, u32)> call_00210e64;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x00726e94, u32(u32, u32, u32, u32)> call_00726e94;  // (from the original)
inline constexpr guest::Function<0x00726f34, u32(u32, u32, u32, u32)> call_00726f34;  // (from the original)

u32 f_002127f4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r6_1 = 0;
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r1_2 = 0;
    u32 r3_2 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r2_3 = 0;
    u32 r1_4 = 0;
    u32 r3_3 = 0;
    u32 r4_1 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    r13 = r13 - 0x18;  // (from the original)
    r5_1 = r0;
    guest::cpu()->r[13] = r13;
    call_00210e64(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r6_1 = r5_1 + 0x1662u;  // (from the original)
    r0_1 = u32(*gptr<u8>(r6_1));
    ea_1 = r5_1 + ((r0_1 << 7) - ((r0_1 << 3) - r0_1) << 4) + 0x4e4u;  // (from the original)
    r0_2 = *gptr<u32>(ea_1);
    if (r0_2 == 0) {
        r1_1 = ea_1 + 4u;
        guest::cpu()->r[13] = r13;
        r0_3 = call_00726f34(ea_1, r1_1, r2_1, r3_1);
        r3_1 = guest::cpu()->r[3];
        r0_2 = u32(s32(r0_3 - ea_1 - 4u) >> 2);
        *gptr<u32>(ea_1) = u32(r0_2);
    }
    r2_2 = r0_2 << 2;
    r1_2 = ea_1 + 4u;
    guest::cpu()->r[13] = r13;
    call_002fbb30(r1, r1_2, r2_2, r3_1);
    r3_2 = guest::cpu()->r[3];
    r1_3 = r1 + (*gptr<u32>(ea_1) << 2);
    r0_4 = u32(*gptr<u8>(r6_1));
    r0_5 = r5_1 + ((r0_4 << 7) - ((r0_4 << 3) - r0_4) << 4) + 0x4e4u;  // (from the original)
    r2_3 = r5_1 + 0x1404u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00726e94(r0_5, r1_3, r2_3, r3_2);
    r1_4 = u32(*gptr<u8>(r6_1));
    r12 = 0x803f0232u;  // (from the original)
    r3_3 = r5_1 + ((r1_4 << 7) - ((r1_4 << 3) - r1_4) << 4) + 0x400u;  // (from the original)
    r1 = 0u;
    r3 = r3_3 + 0xe4u;  // (from the original)
    r2 = r1;
    do {
L_2128a4:;
        r4_1 = r1 + (r1 << 1);
        if (!(*gptr<u32>(r3 + ((r1 << 3) - r1 << 4) + 0x160u) == 0)) {  // (from the original)
            *gptr<u32>(r0) = u32(r2);
            *gptr<u32>(r0 + 4) = u32(r4_1 + 0x203u | 0x80000000u | 0x2f0000u);  // (from the original)
            r0_6 = r0 + 8;
            *gptr<u32>(r0_6) = u32(r2);
            r0_7 = r0_6 + 4u;
            *gptr<u32>(r0_7) = u32(r2);
        } else {
            *gptr<u32>(r0) = u32(r2);
            *gptr<u32>(r0 + 4) = u32(r4_1 + 0x205u | 0xf0000u);  // (from the original)
            r0_7 = r0 + 4u;
        }
        r0 = r0_7 + 4u;
        if (!(u32(*gptr<u8>(r3 + (r1 + (r1 << 2) << 2) + 0x6a0u)) == 0)) {  // (from the original)
            *gptr<u32>(r0) = u32(r1);
            *gptr<u32>(r0 + 4) = u32(r12);
            r0_8 = r0 + 8;
            *gptr<u32>(r0_8) = u32(r2);
            r0_9 = r0_8 + 4u;
            *gptr<u32>(r0_9) = u32(r2);
            r0_10 = r0_9 + 4u;
            *gptr<u32>(r0_10) = u32(r2);
            r0_11 = r0_10 + 4u;
            *gptr<u32>(r0_11) = u32(r2);
            r0 = r0_11 + 4u;
        }
        r1 = r1 + 1u;
        guest::preempt();
    } while (s32(r1) < s32(0xcu));  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002127f4
GUEST_EXPORT(0x002127f4, d_002127f4::f_002127f4);

// f_00212ba4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00212ba4 {

inline constexpr guest::Function<0x00123678, u32(u32, u32, u32, u32)> call_00123678;  // (from the original)
inline constexpr guest::Function<0x00210c2c, u32(u32, u32, u32, u32)> call_00210c2c;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x0031758c, u32(u32, u32, u32, u32)> call_0031758c;  // (from the original)
inline constexpr guest::Function<0x003494fc, u32(u32, u32, u32, u32)> call_003494fc;  // (from the original)
inline constexpr guest::Function<0x0034af5c, u32(u32, u32, u32, u32)> call_0034af5c;  // (from the original)
inline constexpr guest::Function<0x005673c8, u32(u32, u32, u32, u32)> call_005673c8;  // (from the original)

u32 f_00212ba4(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r4_1 = 0;
    u32 ea_1 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_3 = 0;
    u32 ea_2 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 ea_3 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r2_6 = 0;
    u32 r12_1 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
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
    u32 r4_2 = 0;
    u32 r1_4 = 0;
    u32 r3_6 = 0;
    u32 r0_24 = 0;
    u32 r1_5 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r1_6 = 0;
    r5 = r0;
    r13 = r13 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fd108(0x166cu, r0, 4u, r3);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r0_1 + 4u) = u32(~0u);
    *gptr<u32>(r0_1) = u32(0x8edc28u);  // (from the original)
    r0_2 = r0_1 + 8u;
    guest::cpu()->r[13] = r13;
    r0_3 = call_00123678(r0_2, 0x8edc28u, r2_1, r3_1);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r4_1 = r0_3 - 8u;
    r6 = 0u;
    ea_1 = r0_3 + 0x80u;  // (from the original)
    *gptr<u8>(ea_1) = u8(r6);
    *gptr<u8>(ea_1 + 1u) = u8(r6);
    *gptr<u8>(ea_1 + 2u) = u8(r6);
    *gptr<u8>(ea_1 + 3u) = u8(r6);
    *gptr<u8>(ea_1 + 4u) = u8(r6);
    r0_4 = ea_1 + 8u;
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_4, 0x210u, r2_2, r3_2);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = r4_1 + 0x2a0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_0034af5c(r0_5, r1_1, r2_3, r3_3);
    r1_2 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_7 = r0_6 + 0x94u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_003494fc(r0_7, r1_2, r2_4, r3_4);
    r0_9 = r0_8 + 0x1b0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_00301d0c(r0_9, 0x34ab24u, 0x790u, 2u);  // (from the original)
    r1_3 = r0_10 - 0x400u;  // (from the original)
    ea_2 = r0_10 + 0xf20u;  // (from the original)
    *gptr<u32>(ea_2) = u32(r6);
    *gptr<u32>(ea_2 + 4u) = u32(r6);
    *gptr<u8>(ea_2 + 8u) = u8(r6);
    r0_11 = r1_3 + 0x132cu;  // (from the original)
    r0_12 = r0_11 + 4u;
    guest::cpu()->r[13] = r13;
    r0_13 = call_00301d0c(r0_12, 0x7e4470u, 1u, 0xcu);  // (from the original)
    r1 = 0u;
    ea_3 = r0_13 - 4u;
    *gptr<u8>(ea_3) = u8(r6);
    r0 = ea_3;
    do {
L_212c58:;
        r2_5 = r0 + r1;
        r1 = r1 + 1u;
        *gptr<u8>(r2_5 + 4u) = u8(r6);
        guest::preempt();
    } while (r1 < 0xcu);  // (from the original)
    r2 = 0u;
    r1 = r2;
    do {
L_212c74:;
        r3_5 = r0 + (r2 << 2);
        r2_6 = r2 + 1u;
        r1 = r1 + 2u;
        r12_1 = r0 + (r2_6 << 2);
        *gptr<u32>(r3_5 + 0x10u) = u32(r6);  // (from the original)
        r2 = r2_6 + 1u;
        *gptr<u32>(r12_1 + 0x10u) = u32(r6);  // (from the original)
        guest::preempt();
    } while (r1 < 0xcu);  // (from the original)
    ea_4 = r0 + 0x40u;  // (from the original)
    *gptr<u32>(ea_4) = u32(r6);
    ea_5 = ea_4 + 4u;
    *gptr<u32>(ea_5) = u32(r6);
    r0_14 = ea_5 + 4u;
    guest::cpu()->r[13] = r13;
    r0_15 = call_005673c8(r0_14, r1, r2, r3_5);
    r0_16 = r0_15 + 0x78u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_17 = call_00301d0c(r0_16, 0x3040fcu, 0xcu, 5u);  // (from the original)
    r0_18 = r0_17 + 0x3cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_19 = call_00301d0c(r0_18, 0x3040fcu, 0xcu, 5u);  // (from the original)
    r0_20 = r0_19 + 0x3cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_21 = call_00301d0c(r0_20, 0x3040fcu, 0xcu, 5u);  // (from the original)
    r0_22 = r0_21 + 0x48u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_23 = call_00301d0c(r0_22, 0x3040fcu, 0xcu, 0x10u);  // (from the original)
    r4_2 = r0_23 - 0x1590u;  // (from the original)
    *gptr<u8>(r0_23 + 0xd2u) = u8(r6);  // (from the original)
    *gptr<u16>(0x1664u + r4_2) = u16(r6);  // (from the original)
    *gptr<u16>(r0_23 + 0xd6u) = u16(r6);  // (from the original)
    *gptr<u8>(r0_23 + 0xd8u) = u8(0xffu);  // (from the original)
    r1_4 = 0x1664u + 5u;  // (from the original)
    *gptr<u8>(r1_4 + r4_2) = u8(r6);
    *gptr<u8>(r1_4 + 1u + r4_2) = u8(r6);
    *gptr<u32>(r13 + 0xcu) = u32(0x212d88u);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(0x9047f8u);  // (from the original)
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4) = u32(r6);
    r3_6 = r13 + 8u;
    r0_24 = r4_2 + 0x1458u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0031758c(r0_24, 0x1000u, r5, r3_6);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00210c2c(r4_2, r1_5, r2_7, r3_7);
    r1_6 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    return r4_2;
}

}  // namespace d_00212ba4
GUEST_EXPORT(0x00212ba4, d_00212ba4::f_00212ba4);

// f_00212ed0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00212ed0 {

struct __attribute__((packed)) Object_00212ed0_0 {
    u8 unknown_0[0x1669];  // (not used here)
    u8 byte_1669;
};
GUEST_OFFSET(Object_00212ed0_0, byte_1669, 0x1669);  // (from the original)

inline constexpr guest::Function<0x001f963c, u32(u32, u32, u32, u32)> call_001f963c;  // (from the original)
inline constexpr guest::Function<0x001f9684, u32(u32, u32, u32, u32)> call_001f9684;  // (from the original)

u32 f_00212ed0(gptr<Object_00212ed0_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = u32(arg0->byte_1669);
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r0_2 = call_001f9684(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    r0_3 = call_001f9684(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_001f963c(r0_3, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_00212ed0
GUEST_EXPORT(0x00212ed0, d_00212ed0::f_00212ed0);

// f_00213868: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00213868 {

struct __attribute__((packed)) Object_00213868_0 {
    u8 unknown_0[0x31c];  // (not used here)
    u32 word_31c;
    u8 unknown_320[0x68];  // (not used here)
    u32 word_388;
    u8 unknown_38c[0x4];  // (not used here)
    u32 word_390;
    u8 unknown_394[0x30];  // (not used here)
    u32 word_3c4;
    u32 word_3c8;
};
GUEST_OFFSET(Object_00213868_0, word_31c, 0x31c);  // (from the original)
GUEST_OFFSET(Object_00213868_0, word_388, 0x388);  // (from the original)
GUEST_OFFSET(Object_00213868_0, word_390, 0x390);  // (from the original)
GUEST_OFFSET(Object_00213868_0, word_3c4, 0x3c4);  // (from the original)
GUEST_OFFSET(Object_00213868_0, word_3c8, 0x3c8);  // (from the original)

struct __attribute__((packed)) Object_00213868_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00213868_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00213868_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00213868_1, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x00213918> global_00213918;  // (from the original)
inline guest::global<u32, 0x0021391c> global_0021391c;  // (from the original)
inline guest::global<u32, 0x00213924> global_00213924;  // (from the original)
inline guest::global<u32, 0x0021392c> global_0021392c;  // (from the original)

u32 f_00213868(gptr<Object_00213868_0> arg0, gptr<Object_00213868_1> arg1) {
    u32 r0 = arg0.addr();
    float S4_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S0_2 = 0;
    u32 r1_1 = 0;
    float S3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    S4_1 = std::bit_cast<float>(arg0->word_3c8);
    S0_1 = std::bit_cast<float>(arg1->word_0);
    S1_1 = std::bit_cast<float>(arg1->word_4);
    S2_1 = std::bit_cast<float>(arg1->word_8);
    S3_1 = (std::bit_cast<float>(arg0->word_388) + std::bit_cast<float>(arg0->word_390) - std::bit_cast<float>(arg0->word_3c4)) * S4_1;
    if (s32(std::bit_cast<u32>(S3_1)) > s32(0x43c80000u)) {  // (from the original)
        S0_2 = std::bit_cast<float>(*global_00213918) / S3_1 * S4_1;
        arg0->word_3c8 = u32(std::bit_cast<u32>(S0_2));
        r1_1 = arg0->word_31c;
        *gptr<u32>(r1_1 + 0x40u) = u32(std::bit_cast<u32>(S0_2));  // (from the original)
        *gptr<u32>(r1_1 + 0x44u) = u32(std::bit_cast<u32>(S0_2));  // (from the original)
        S0_1 = std::bit_cast<float>(*global_0021391c);
        *gptr<u8>(r1_1 + 0xb7u) = u8(u32(*gptr<u8>(r1_1 + 0xb7u)) & 0xcfu);  // (from the original)
    }
    S3_2 = std::bit_cast<float>(*gptr<u32>(r0 + 0x398u)) * std::bit_cast<float>(*gptr<u32>(r0 + 0x3c8u));  // (from the original)
    r1_2 = std::bit_cast<u32>(S0_1 + S3_2);
    if (s32(r1_2) > s32(0x43480000u)) {  // (from the original)
        S0_1 = std::bit_cast<float>(*global_00213924) - S3_2;
        r0_1 = r0 + 0x3ccu;  // (from the original)
        *gptr<u32>(r0_1) = u32(std::bit_cast<u32>(S0_1));
        *gptr<u32>(r0_1 + 4) = u32(std::bit_cast<u32>(S1_1));
        *gptr<u32>(r0_1 + 8) = u32(std::bit_cast<u32>(S2_1));
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0_1;
    }
    r1_2 = std::bit_cast<u32>(S0_1 - S3_2);
    if (r1_2 > 0xc3480000u) {  // (from the original)
        S0_1 = S3_2 + std::bit_cast<float>(*global_0021392c);
    }
    r0_1 = r0 + 0x3ccu;  // (from the original)
    *gptr<u32>(r0_1) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r0_1 + 4) = u32(std::bit_cast<u32>(S1_1));
    *gptr<u32>(r0_1 + 8) = u32(std::bit_cast<u32>(S2_1));
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r0_1;
}

}  // namespace d_00213868
GUEST_EXPORT(0x00213868, d_00213868::f_00213868);

// f_00213930: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00213930 {

struct __attribute__((packed)) Object_00213930_0 {
    u8 unknown_0[0x3cc];  // (not used here)
    u32 word_3cc;
    u32 word_3d0;
    u32 word_3d4;
    u32 word_3d8;
    u32 word_3dc;
    u32 word_3e0;
    u8 unknown_3e4[0x13];  // (not used here)
    u8 byte_3f7;
};
GUEST_OFFSET(Object_00213930_0, word_3cc, 0x3cc);  // (from the original)
GUEST_OFFSET(Object_00213930_0, word_3d0, 0x3d0);  // (from the original)
GUEST_OFFSET(Object_00213930_0, word_3d4, 0x3d4);  // (from the original)
GUEST_OFFSET(Object_00213930_0, word_3d8, 0x3d8);  // (from the original)
GUEST_OFFSET(Object_00213930_0, word_3dc, 0x3dc);  // (from the original)
GUEST_OFFSET(Object_00213930_0, word_3e0, 0x3e0);  // (from the original)
GUEST_OFFSET(Object_00213930_0, byte_3f7, 0x3f7);  // (from the original)

inline guest::global<u32, 0x00213a80> global_00213a80;  // (from the original)
inline constexpr guest::Function<0x004b71c8, u32(u32, u32, u32, u32)> call_004b71c8;  // (from the original)

u32 f_00213930(gptr<Object_00213930_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    float S3_1 = 0;
    float S2_1 = 0;
    float S1_1 = 0;
    u32 r2_1 = 0;
    float S0_1 = 0;
    float S0_2 = 0;
    float S3_2 = 0;
    u32 r1_1 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    float S0_3 = 0;
    float S6_1 = 0;
    u32 r1_2 = 0;
    float S3_3 = 0;
    float S4_1 = 0;
    float S5_1 = 0;
    u32 r1_3 = 0;
    float S2_3 = 0;
    float S1_3 = 0;
    float S0_4 = 0;
    u32 r1_4 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_5 = 0;
    float S0_5 = 0;
    float S1_4 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    if (u32(arg0->byte_3f7) != 0) {
        S3_1 = std::bit_cast<float>(arg0->word_3cc);
        S2_1 = std::bit_cast<float>(arg0->word_3d0);
        S1_1 = std::bit_cast<float>(arg0->word_3d8) - S3_1;
        r2_1 = 0x40c00000u;  // (from the original)
        S0_1 = std::bit_cast<float>(arg0->word_3dc) - S2_1;
        S0_2 = sqrtf(S1_1 * S1_1 + S0_1 * S0_1);
        if (s32(r2_1) <= s32(std::bit_cast<u32>(S0_2))) {
            goto L_2139b4;
        }
        arg0->word_3d8 = u32(std::bit_cast<u32>(S3_1));
        arg0->word_3dc = u32(arg0->word_3d0);
        r2_1 = arg0->word_3d4;
        arg0->word_3e0 = u32(r2_1);
        goto L_213a14;
    }
    *gptr<u32>(r0 + 0x3d8u) = u32(*gptr<u32>(r0 + 0x3ccu));  // (from the original)
    *gptr<u32>(r0 + 0x3dcu) = u32(*gptr<u32>(r0 + 0x3d0u));  // (from the original)
    r2_1 = *gptr<u32>(r0 + 0x3d4u);  // (from the original)
    *gptr<u32>(r0 + 0x3e0u) = u32(r2_1);  // (from the original)
    *gptr<u8>(r0 + 0x3f7u) = u8(1u);  // (from the original)
    goto L_213a14;
L_2139b4:;
    S3_2 = std::bit_cast<float>(*global_00213a80) / S0_2;
    r1_1 = r0 + 0x3d8u;  // (from the original)
    S1_2 = (S2_1 - std::bit_cast<float>(*gptr<u32>(r0 + 0x3dcu))) * S3_2;  // (from the original)
    S2_2 = (std::bit_cast<float>(*gptr<u32>(r0 + 0x3d4u)) - std::bit_cast<float>(*gptr<u32>(r0 + 0x3e0u))) * S3_2;  // (from the original)
    *gptr<u32>(r0 + 0x3d8u) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r0 + 0x3d8u)) + (std::bit_cast<float>(*gptr<u32>(r0 + 0x3ccu)) - std::bit_cast<float>(*gptr<u32>(r0 + 0x3d8u))) * S3_2));  // (from the original)
    *gptr<u32>(r1_1 + 4u) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r0 + 0x3dcu)) + S1_2));  // (from the original)
    *gptr<u32>(r1_1 + 8u) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r1_1 + 8u)) + S2_2));
L_213a14:;
    S0_3 = std::bit_cast<float>(*gptr<u32>(r0 + 0x3c8u));  // (from the original)
    S6_1 = std::bit_cast<float>(*gptr<u32>(r0 + 0x3bcu)) * S0_3;  // (from the original)
    r1_2 = r0 + 0x3d8u;  // (from the original)
    S3_3 = std::bit_cast<float>(*gptr<u32>(r1_2));
    S4_1 = std::bit_cast<float>(*gptr<u32>(r1_2 + 4));
    S5_1 = std::bit_cast<float>(*gptr<u32>(r1_2 + 8));
    r1_3 = r13 + 4u;
    S2_3 = S3_3 - float(s32(std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*gptr<u32>(r0 + 0x3b8u)) * S0_3)))));  // (from the original)
    S1_3 = S5_1 - float(s32(std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*gptr<u32>(r0 + 0x3c0u)) * S0_3)))));  // (from the original)
    S0_4 = S4_1 - float(s32(std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(S6_1)))));
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S2_3));
    *gptr<u32>(r1_3) = u32(std::bit_cast<u32>(S0_4));
    *gptr<u32>(r1_3 + 4) = u32(std::bit_cast<u32>(S1_3));
    r1_4 = r13;
    r0_1 = *gptr<u32>(r0 + 0x31cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_3;
    guest::cpu()->s[2] = S2_3;
    guest::cpu()->s[3] = S3_3;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    guest::cpu()->s[6] = S6_1;
    r0_2 = call_004b71c8(r0_1, r1_4, r2_1, guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    S0_5 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_4;
    return r0_2;
}

}  // namespace d_00213930
GUEST_EXPORT(0x00213930, d_00213930::f_00213930);

// f_00213b54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00213b54 {

struct __attribute__((packed)) Object_00213b54_0 {
    u8 unknown_0[0x3d0];  // (not used here)
    u32 word_3d0;
    u8 unknown_3d4[0x154];  // (not used here)
    u32 word_528;
};
GUEST_OFFSET(Object_00213b54_0, word_3d0, 0x3d0);  // (from the original)
GUEST_OFFSET(Object_00213b54_0, word_528, 0x528);  // (from the original)

struct __attribute__((packed)) Object_00213b54_1 {
    u8 unknown_0[0x3d0];  // (not used here)
    u32 word_3d0;
    u8 unknown_3d4[0x154];  // (not used here)
    u32 word_528;
    u32 word_52c;
};
GUEST_OFFSET(Object_00213b54_1, word_3d0, 0x3d0);  // (from the original)
GUEST_OFFSET(Object_00213b54_1, word_528, 0x528);  // (from the original)
GUEST_OFFSET(Object_00213b54_1, word_52c, 0x52c);  // (from the original)

inline constexpr guest::Function<0x00213b54, u32(u32, u32, u32, u32)> call_00213b54;  // (from the original)

u32 f_00213b54(gptr<Object_00213b54_0> arg0, gptr<Object_00213b54_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 fpsr = guest::cpu()->fpscr;
    float S1_1 = 0;
    float S0_1 = 0;
    u32 r0_1 = 0;
    u32 fpsr_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r5_1 = 0;
    guest::cpu()->r[13] -= 0xcu;  // (from the original)
    S1_1 = std::bit_cast<float>(arg1->word_3d0);
    S0_1 = std::bit_cast<float>(arg0->word_3d0);
    r0_1 = r1;
    fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S1_1, S0_1);  // (from the original)
    if (!(fpsr_1 >> 0x1e & 1) && fpsr_1 >> 0x1f == (fpsr_1 >> 0x1c & 1)) {  // (from the original)
        arg1->word_52c = u32(r0);
        r2_1 = arg0->word_528;
        r1_1 = r0 + 0x528u;  // (from the original)
        if (r2_1 != 0) {
            *gptr<u32>(r2_1 + 0x52cu) = u32(r0_1);  // (from the original)
            r1_1 = arg0->word_528;
            arg1->word_528 = u32(r1_1);
        }
        *gptr<u32>(r0 + 0x528u) = u32(r0_1);  // (from the original)
        guest::cpu()->r[13] += 0xcu;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0_1;
    }
    r2_2 = *gptr<u32>(r0 + 0x52cu);  // (from the original)
    r5_1 = r0 + 0x52cu;  // (from the original)
    if (r2_2 == 0) {
        *gptr<u32>(r0 + 0x52cu) = u32(r0_1);  // (from the original)
        *gptr<u32>(r0_1 + 0x528u) = u32(r0);  // (from the original)
        guest::cpu()->r[13] += 0xcu;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0;
    }
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    r0_1 = call_00213b54(r2_2, r1, r2_2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    *gptr<u32>(r5_1) = u32(r0_1);
    *gptr<u32>(r0_1 + 0x528u) = u32(r0);  // (from the original)
    guest::cpu()->r[13] += 0xcu;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r0;
}

}  // namespace d_00213b54
GUEST_EXPORT(0x00213b54, d_00213b54::f_00213b54);

// f_00214e88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00214e88 {

inline guest::global<u8, 0x0094f7e1> global_0094f7e1;  // (from the original)
inline guest::global<u8, 0x0094fd80> global_0094fd80;  // (from the original)
inline guest::global<u32, 0x00950058> global_00950058;  // (from the original)
inline constexpr guest::Function<0x00281cc8, u32(u32, u32, u32, u32)> call_00281cc8;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x004ee524, u32(u32, u32, u32, u32)> call_004ee524;  // (from the original)
inline constexpr guest::Function<0x005896c4, u32(u32, u32, u32, u32)> call_005896c4;  // (from the original)
inline constexpr guest::Function<0x006d1f38, u32(u32, u32, u32, u32)> call_006d1f38;  // (from the original)
inline constexpr guest::Function<0x0071e9e8, u32(u32, u32, u32, u32)> call_0071e9e8;  // (from the original)

u32 f_00214e88(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 r0_6 = 0;
    u32 r1_5 = 0;
    u32 r0_7 = 0;
    u32 r1_6 = 0;
    u32 r0_8 = 0;
    u32 r1_7 = 0;
    u32 r0_9 = 0;
    u32 r1_8 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_9 = 0;
    u32 r0_12 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = call_002f74e0(0x10u, r0_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    if (*global_00950058 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    r0_3 = call_006d1f38(0x80u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    if (r0_3 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    r0_4 = call_005896c4(r0_3, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    if (r0_4 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_3;
        return 1u;
    }
    r0_5 = call_00281cc8(r0_4, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r0_6 = call_0071e9e8(r0_5, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    if (r0_6 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_5;
        return 1u;
    }
    r0_7 = call_004ee524(r0_6, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    if (r0_7 == 1u) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_6;
        return r0_7;
    }
    r0_8 = call_006d1f38(0x63u, r1_6, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_7 = guest::cpu()->r[1];
    if (r0_8 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_7;
        return 1u;
    }
    r0_9 = call_006d1f38(0x7bu, r1_7, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_8 = guest::cpu()->r[1];
    if (r0_9 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_8;
        return 1u;
    }
    r0_10 = u32(*global_0094f7e1);
    if (r0_10 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_8;
        return 1u;
    }
    r0_11 = call_002f74c8(r0_10, r1_8, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_9 = guest::cpu()->r[1];
    if (r0_11 == 0x5cu) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_9;
        return 1u;
    }
    r0_12 = u32(*global_0094fd80);
    if (r0_12 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_9;
        return r0_12;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_9;
    return 1u;
}

}  // namespace d_00214e88
GUEST_EXPORT(0x00214e88, d_00214e88::f_00214e88);

// f_002161a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002161a4 {

inline guest::global<u8, 0x0094ed72> global_0094ed72;  // (from the original)
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> call_00305f2c;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32, u32)> call_0062512c;  // (from the original)

u32 f_002161a4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 sco = 0;
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 r3_3 = 0;
    u32 r1_4 = 0;
    u32 cf_1 = 0;
    u32 r1_5 = 0;
    u32 r4_2 = 0;
    u32 ea_1 = 0;
    u32 b_1 = 0;
    u32 r3_4 = 0;
    u32 zf_1 = 0;
    u32 ea_2 = 0;
    u32 r3_5 = 0;
    u32 r3_6 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r4_1 = r0;
    guest::cpu()->r[13] = r13;
    r0_1 = call_00305f2c(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 != 2u) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    *gptr<u32>(r13) = u32(0u);
    *gptr<u8>(r13 + 4u) = u8(0xau);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_00305f44(0u, 0xau, r2_1, r3_1);  // (from the original)
    r3_2 = guest::cpu()->r[3];
    r0_3 = u32(*gptr<u8>(0x8461b4u + r0_2));  // (from the original)
    r1_2 = r13;
    guest::cpu()->r[13] = r13;
    call_0062512c(r0_3, r1_2, 1u, r3_2);
    r1_3 = guest::cpu()->r[1];
    r0_4 = *gptr<u32>(0x2088u + r4_1);  // (from the original)
    if (r0_4 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return r0_4;
    }
    r0 = 0u;
    r12 = 1u;
    r2 = r4_1 + 0x2084u;  // (from the original)
L_216204:;
    r3_3 = r0 & 0xffu;  // (from the original)
    r1_4 = *gptr<u32>(r2);
    cf_1 = r1_4 >= r0;
    if (!cf_1 || r1_4 == r0) {
        r1_5 = *gptr<u32>(r2 + 4u);
        goto L_216228;
    }
    r1_5 = *gptr<u32>(r2 + 4u) + (r0 * 0xa7u << 2);  // (from the original)
L_216228:;
    r4_2 = u32(*global_0094ed72);
    ea_1 = r1_5 + 0x298u;  // (from the original)
    *gptr<u8>(ea_1) = u8(r0);
    sco = cf_1;
    b_1 = lsl_rc(r12, r3_3 & 0xff, &sco);  // (from the original)
    if ((r4_2 & b_1) == 0) {
        r3_4 = 1u;
    } else {
        r3_4 = 0u;
    }
    zf_1 = r3_4 == 0;
    ea_2 = r1_5 + 0x29bu;  // (from the original)
    r3_5 = u32(*gptr<u8>(ea_2));
    r0 = r0 + 1u;
    if (zf_1) {
        r3_6 = r3_5 & ~1u;
    } else {
        r3_6 = r3_5 | 1u;
    }
    *gptr<u8>(ea_2) = u8(r3_6);
    if (r0 < 4u) {
        guest::preempt();
        goto L_216204;
    }
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = ea_2;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002161a4
GUEST_EXPORT(0x002161a4, d_002161a4::f_002161a4);

// f_002170bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002170bc {

inline constexpr guest::Function<0x00569dc4, u32(u32, u32, u32, u32)> call_00569dc4;  // (from the original)
inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> call_0056a974;  // (from the original)

u32 f_002170bc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00569dc4(r0, r1, r2, r3);
    *gptr<u32>(r13 + 4u) = u32(0x2170f4u);  // (from the original)
    *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
    r2_1 = *gptr<u32>(r0_1 + 4u);
    r1_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_2 = call_0056a974(0x98a30cu, r1_1, r2_1, 0x80u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_002170bc
GUEST_EXPORT(0x002170bc, d_002170bc::f_002170bc);

// f_00218084: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00218084 {

inline guest::global<u32, 0x0021820c> global_0021820c;  // (from the original)
inline guest::global<u32, 0x0094f260> global_0094f260;  // (from the original)
inline guest::global<u32, 0x0098ad94> global_0098ad94;  // (from the original)
inline constexpr guest::Function<0x001e62dc, u32(u32, u32, u32, u32)> call_001e62dc;  // (from the original)
inline constexpr guest::Function<0x00218220, u32(u32, u32, u32, u32)> call_00218220;  // (from the original)
inline constexpr guest::Function<0x002198b4, u32(u32, u32, u32, u32)> call_002198b4;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x007207d8, u32(u32, u32, u32, u32)> call_007207d8;  // (from the original)

u32 f_00218084(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    float S2_1 = 0;
    u32 r0_2 = 0;
    float S3_1 = 0;
    float S2_2 = 0;
    u32 r0_3 = 0;
    float S1_1 = 0;
    u32 r2_1 = 0;
    float S0_1 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r0_5 = 0;
    u32 res_1 = 0;
    u32 r0_6 = 0;
    u32 res_2 = 0;
    u32 r0_7 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r6_1 = 0;
    u32 r1_4 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    float S2_3 = 0;
    float S3_2 = 0;
    u32 r3_1 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    float S2_4 = 0;
    float S3_3 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r5 = r0;
    r6 = r1;
    r4 = 0u;
    do {
L_218094:;
        r0 = *gptr<u32>(r5 + (r4 << 2) + 0x578u);  // (from the original)
        if (!(r0 != 0 && r0 >> 0x1f == (r0 & (r0 ^ r0)) >> 0x1f)) {  // (from the original)
            r1_1 = r4 + (r4 << 1);
            r0_1 = r5 + (r1_1 << 3) + 0x500u;  // (from the original)
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            guest::cpu()->s[3] = S3;
            r0 = call_007207d8(r0_1, r1_1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            S2 = guest::cpu()->s[2];
            S3 = guest::cpu()->s[3];
            if (r0 == 0) {
                goto L_2180d0;
            }
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(5u));
L_2180cc:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_2180d0:;
    if (r4 >> 0x1f != (r4 & (r4 ^ r4)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_2180cc;
    }
    r7 = r4 + (r4 << 1);
    S2_1 = std::bit_cast<float>(*global_0021820c);
    r0_2 = r5 + (r7 << 2);
    S3_1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r6))));
    *gptr<u32>(r0_2 + 0x59cu) = u32(*global_0098ad94);  // (from the original)
    r8 = r0_2 + 0x59cu;  // (from the original)
    *gptr<u32>(r0_2 + 0x5a0u) = u32(*gptr<u32>(0x98ad94u + 4u));  // (from the original)
    S2_2 = S3_1 - S2_1;
    *gptr<u32>(r0_2 + 0x5a4u) = u32(*gptr<u32>(0x98ad94u + 8u));  // (from the original)
    r0_3 = r0_2 + 0x400u;  // (from the original)
    S1_1 = std::bit_cast<float>(*global_0094f260);
    r2_1 = r5 + (r4 << 2);
    S0_1 = std::bit_cast<float>(*gptr<u32>(r0_3 + 0x19cu)) + S1_1 * S2_2;  // (from the original)
    *gptr<u32>(r0_3 + 0x19cu) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r2_1 + 0x578u) = u32(0x78u);  // (from the original)
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_2;
    guest::cpu()->s[3] = S3_1;
    r0_4 = call_002fb378(r0_3, 0x78u, r2_1, r3);  // (from the original)
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    r0 = *gptr<u32>(r0_4);
    r1 = 0x66666667u;  // (from the original)
    r2_2 = 3u - r6;
    if (r2_2 == 0 || r2_2 >> 0x1f != (r2_2 & (r2_2 ^ r2_2)) >> 0x1f) {  // (from the original)
        goto L_21818c;
    }
    if ((r2_2 & 1u) != 0) {
        r0_5 = u32(u64(s64(s32(r1)) * s32(r0)) >> 0x20);  // (from the original)
        r0 = u32(s32(r0_5) >> 2) - u32(s32(r0_5) >> 0x1f);  // (from the original)
    }
    res_1 = u32(s32(r2_2) >> 1);
    r2 = res_1;
    if (res_1 == 0) {
        goto L_21818c;
    }
    do {
L_21816c:;
        r0_6 = u32(u64(s64(s32(r1)) * s32(r0)) >> 0x20);  // (from the original)
        res_2 = r2 - 1u;
        r2 = res_2;
        r0_7 = u32(u64(s64(s32(r1)) * s32(u32(s32(r0_6) >> 2) - u32(s32(r0_6) >> 0x1f))) >> 0x20);  // (from the original)
        r0 = u32(s32(r0_7) >> 2) - u32(s32(r0_7) >> 0x1f);  // (from the original)
        guest::preempt();
    } while (res_2 != 0);
L_21818c:;
    r1_2 = u32(u64(s64(s32(r1)) * s32(r0)) >> 0x20);  // (from the original)
    r1_3 = 0u - (u32(s32(r1_2) >> 2) - u32(s32(r1_2) >> 0x1f));  // (from the original)
    r6_1 = *gptr<u32>(0x846ba0u + (r0 + (r1_3 + (r1_3 << 2) << 1) << 2));  // (from the original)
    r1_4 = r5 + (r7 << 3) + 0x500u;  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    call_00218220(r5, r1_4, r6_1, r8);
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    S2_3 = guest::cpu()->s[2];
    S3_2 = guest::cpu()->s[3];
    if (r6_1 == 0x24u) {  // (from the original)
        r3_1 = 0x82u;  // (from the original)
        goto L_2181e4;
    }
    if (r6_1 == 0x28u) {  // (from the original)
        r3_1 = 0x82u;  // (from the original)
    } else {
        r3_1 = 0x5au;  // (from the original)
        r2_3 = 0x28u;  // (from the original)
        goto L_2181e8;
    }
L_2181e4:;
    r2_3 = 0x50u;  // (from the original)
L_2181e8:;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_3;
    guest::cpu()->s[3] = S3_2;
    call_001e62dc(0u, 0x1eu, r2_3, r3_1);  // (from the original)
    r3_2 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    S2_4 = guest::cpu()->s[2];
    S3_3 = guest::cpu()->s[3];
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    guest::cpu()->s[2] = S2_4;
    guest::cpu()->s[3] = S3_3;
    return call_002198b4(r5, 0x1000796u, r4, r3_2);  // (from the original)
}

}  // namespace d_00218084
GUEST_EXPORT(0x00218084, d_00218084::f_00218084);

// f_002194d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002194d8 {

inline guest::global<u32, 0x0098ad64> global_0098ad64;  // (from the original)
inline guest::global<u32, 0x0098ad70> global_0098ad70;  // (from the original)
inline guest::global<u32, 0x0098ad7c> global_0098ad7c;  // (from the original)
inline constexpr guest::Function<0x001e62dc, u32(u32, u32, u32, u32)> call_001e62dc;  // (from the original)
inline constexpr guest::Function<0x00218220, u32(u32, u32, u32, u32)> call_00218220;  // (from the original)
inline constexpr guest::Function<0x002198b4, u32(u32, u32, u32, u32)> call_002198b4;  // (from the original)
inline constexpr guest::Function<0x007207d8, u32(u32, u32, u32, u32)> call_007207d8;  // (from the original)

u32 f_002194d8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r3_1 = 0;
    u32 zf_1 = 0;
    u32 r3_2 = 0;
    u32 r2_1 = 0;
    u32 r3_3 = 0;
    u32 r3_4 = 0;
    u32 r3_5 = 0;
    u32 r3_6 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r5 = r0;
    r6 = r1;
    r7 = r2;
    r4 = 0u;
    do {
L_2194ec:;
        r0 = *gptr<u32>(r5 + (r4 << 2) + 0x578u);  // (from the original)
        if (!(r0 != 0 && r0 >> 0x1f == (r0 & (r0 ^ r0)) >> 0x1f)) {  // (from the original)
            r1_1 = r4 + (r4 << 1);
            r0_1 = r5 + (r1_1 << 3) + 0x500u;  // (from the original)
            r0 = call_007207d8(r0_1, r1_1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0 == 0) {
                goto L_219528;
            }
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(5u));
L_219524:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_219528:;
    if (r4 >> 0x1f != (r4 & (r4 ^ r4)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_219524;
    }
    if (r7 != 1u) {
        if (r7 == 2u) {
            goto L_219574;
        }
        if (r7 != 3u) {
            goto L_2195c0;
        }
        goto L_21959c;
    }
    r0_2 = r5 + (r4 + (r4 << 1) << 2);
    *gptr<u32>(r0_2 + 0x59cu) = u32(*global_0098ad64);  // (from the original)
    *gptr<u32>(r0_2 + 0x5a0u) = u32(*gptr<u32>(0x98ad64u + 4u));  // (from the original)
    *gptr<u32>(r0_2 + 0x5a4u) = u32(*gptr<u32>(0x98ad64u + 8u));  // (from the original)
    goto L_2195c0;
L_219574:;
    r0_3 = r5 + (r4 + (r4 << 1) << 2);
    *gptr<u32>(r0_3 + 0x59cu) = u32(*global_0098ad70);  // (from the original)
    *gptr<u32>(r0_3 + 0x5a0u) = u32(*gptr<u32>(0x98ad70u + 4u));  // (from the original)
    *gptr<u32>(r0_3 + 0x5a4u) = u32(*gptr<u32>(0x98ad70u + 8u));  // (from the original)
    goto L_2195c0;
L_21959c:;
    r0_4 = r5 + (r4 + (r4 << 1) << 2);
    *gptr<u32>(r0_4 + 0x59cu) = u32(*global_0098ad7c);  // (from the original)
    *gptr<u32>(r0_4 + 0x5a0u) = u32(*gptr<u32>(0x98ad7cu + 4u));  // (from the original)
    *gptr<u32>(r0_4 + 0x5a4u) = u32(*gptr<u32>(0x98ad7cu + 8u));  // (from the original)
L_2195c0:;
    *gptr<u32>(r5 + (r4 << 2) + 0x578u) = u32(0x78u);  // (from the original)
    r0_5 = r4 + (r4 << 1);
    r1_2 = r5 + (r0_5 << 3) + 0x500u;  // (from the original)
    r3_1 = r5 + (r0_5 << 2) + 0x59cu;  // (from the original)
    call_00218220(r5, r1_2, r6, r3_1);
    if (r6 != 0x23u) {  // (from the original)
        if (r6 == 0x24u) {  // (from the original)
            goto L_219660;
        }
        if (r6 == 0x25u) {  // (from the original)
            goto L_219688;
        }
        if (r6 == 0x26u) {  // (from the original)
            goto L_2196b0;
        }
        zf_1 = r6 == 0x28u;  // (from the original)
        guest::cpu()->r[13] += 0x18u;  // (from the original)
        if (zf_1) {
            r3_2 = 0x82u;  // (from the original)
            r2_1 = 0x50u;  // (from the original)
        } else {
            r3_2 = 0x5au;  // (from the original)
            r2_1 = 0x28u;  // (from the original)
        }
        return call_001e62dc(0u, 0x1eu, r2_1, r3_2);  // (from the original)
    }
    call_001e62dc(4u, 0x1eu, 0x28u, 0x5au);  // (from the original)
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return call_002198b4(r5, 0x1000796u, r4, r3_3);  // (from the original)
L_219660:;
    call_001e62dc(8u, 0x1eu, 0x50u, 0x82u);  // (from the original)
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return call_002198b4(r5, 0x1000797u, r4, r3_4);  // (from the original)
L_219688:;
    call_001e62dc(1u, 0x1eu, 0x28u, 0x5au);  // (from the original)
    r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return call_002198b4(r5, 0x1000795u, r4, r3_5);  // (from the original)
L_2196b0:;
    call_001e62dc(8u, 0x1eu, 0x28u, 0x5au);  // (from the original)
    r3_6 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return call_002198b4(r5, 0x1000796u, r4, r3_6);  // (from the original)
}

}  // namespace d_002194d8
GUEST_EXPORT(0x002194d8, d_002194d8::f_002194d8);

// f_002198b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002198b4 {

inline guest::global<u32, 0x0094edd8> global_0094edd8;  // (from the original)
inline constexpr guest::Function<0x00250438, u32(u32, u32, u32, u32)> call_00250438;  // (from the original)
inline constexpr guest::Function<0x002504d4, u32(u32, u32, u32, u32)> call_002504d4;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x00583be8, u32(u32, u32, u32, u32)> call_00583be8;  // (from the original)

u32 f_002198b4(u32 r0, u32 r1, u32 r2, float S0, float S1, float S2, float S3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    float S3_2 = 0;
    u32 zf_1 = 0;
    u32 r0_3 = 0;
    u32 r4_1 = 0;
    u32 r1_1 = 0;
    u32 r5_1 = 0;
    u32 r0_4 = 0;
    float S2_3 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    float S3_3 = 0;
    float S2_4 = 0;
    float S0_4 = 0;
    float S0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    float S0_6 = 0;
    float S1_4 = 0;
    float S2_5 = 0;
    float S3_4 = 0;
    u32 r0_7 = 0;
    u32 r2_5 = 0;
    float S2_6 = 0;
    float S3_5 = 0;
    u32 ea_1 = 0;
    u32 r0_8 = 0;
    u32 ea_2 = 0;
    float S0_7 = 0;
    float S1_5 = 0;
    u32 r0_9 = 0;
    u32 res_1 = 0;
    u32 r0_10 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0_1 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    S2_1 = guest::cpu()->s[2];
    S3_1 = guest::cpu()->s[3];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    r0_2 = call_002f74e0(4u, r0_1, r2_1, guest::cpu()->r[3]);
    r2_2 = guest::cpu()->r[2];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    S3_2 = guest::cpu()->s[3];
    zf_1 = r0_2 == 0;
    r0_3 = r2 + (r2 << 1);
    r4_1 = r0 + (r2 << 2);
    r1_1 = r0 + (r0_3 << 2) + 0x59cu;  // (from the original)
    r5_1 = r0 + (r0_3 << 5) + 0x5e4u;  // (from the original)
    if (zf_1) {
        goto L_219988;
    }
    r0_4 = *global_0094edd8;
    if (r0_4 == 0) {
        goto L_219974;
    }
    S2_3 = std::bit_cast<float>(*gptr<u32>(r1_1));
    r1_2 = r1_1 + 4u;
    r2_3 = r13 + 4u;
    S0_3 = std::bit_cast<float>(*gptr<u32>(r1_2));
    S1_3 = std::bit_cast<float>(*gptr<u32>(r1_2 + 4));
    r1_3 = r13;
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S2_3));
    *gptr<u32>(r2_3) = u32(std::bit_cast<u32>(S0_3));
    *gptr<u32>(r2_3 + 4) = u32(std::bit_cast<u32>(S1_3));
    r0_5 = *gptr<u32>(r0_4 + 0x1a4u);  // (from the original)
    S3_3 = std::bit_cast<float>(*gptr<u32>(r0_5 + 0x24u));  // (from the original)
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S2_3 + S3_3));
    S2_4 = std::bit_cast<float>(*gptr<u32>(r0_5 + 0x28u));  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(S0_3 + S2_4));
    S0_4 = std::bit_cast<float>(*gptr<u32>(r0_5 + 0x2cu));  // (from the original)
    S0_5 = S1_3 + S0_4;
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0_5));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_3;
    guest::cpu()->s[2] = S2_4;
    guest::cpu()->s[3] = S3_3;
    r0_6 = call_00250438(r5_1, r1_3, r2_3, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    S0_6 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    S2_5 = guest::cpu()->s[2];
    S3_4 = guest::cpu()->s[3];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_6;
    guest::cpu()->s[1] = S1_4;
    guest::cpu()->s[2] = S2_5;
    guest::cpu()->s[3] = S3_4;
    r0_7 = call_00583be8(r0_6, r1_4, r2_4, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    S2_6 = guest::cpu()->s[2];
    S3_5 = guest::cpu()->s[3];
    if (r0_7 == 0) {
        goto L_219974;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_6;
    guest::cpu()->s[3] = S3_5;
    call_002504d4(r5_1, 0x1000794u, r2_5, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
L_219974:;
    ea_1 = 0x94f234u + 0x1cu;  // (from the original)
    r0_8 = *gptr<u32>(ea_1);
    ea_2 = r4_1 + 0x7c4u;  // (from the original)
    *gptr<u32>(ea_2) = u32(r0_8);
    *gptr<u32>(ea_2 + 0x14u) = u32(r1);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return r0_8;
L_219988:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    guest::cpu()->s[3] = S3_2;
    call_00250438(r5_1, r1_1, r2_2, guest::cpu()->r[3]);
    S0_7 = guest::cpu()->s[0];
    S1_5 = guest::cpu()->s[1];
    r0_9 = *gptr<u32>(0x94f234u + 0x1cu);  // (from the original)
    *gptr<u32>(r4_1 + 0x7c4u) = u32(r0_9);  // (from the original)
    res_1 = 0xfefff86bu + r1;  // (from the original)
    if (res_1 == 0) {
        r0_10 = 0x1000799u;  // (from the original)
        goto L_2199c8;
    }
    if (res_1 == 1u) {
        r0_10 = 0x100079au;  // (from the original)
        goto L_2199c8;
    }
    if (res_1 == 2u) {
        r0_9 = 0x100079bu;  // (from the original)
        *gptr<u32>(r4_1 + 0x7d8u) = u32(r0_9);  // (from the original)
    }
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = res_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_7;
    guest::cpu()->s[1] = S1_5;
    return r0_9;
L_2199c8:;
    *gptr<u32>(r4_1 + 0x7d8u) = u32(r0_10);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = res_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_7;
    guest::cpu()->s[1] = S1_5;
    return r0_10;
}

}  // namespace d_002198b4
GUEST_EXPORT(0x002198b4, d_002198b4::f_002198b4);

// f_0021cdc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0021cdc4 {

struct __attribute__((packed)) Object_0021cdc4_0 {
    u32 word_0;
    u8 unknown_4[0x24];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0x10d0];  // (not used here)
    u32 word_10fc;
    u8 unknown_1100[0x394];  // (not used here)
    u32 word_1494;
    u8 unknown_1498[0xe0];  // (not used here)
    u32 word_1578;
};
GUEST_OFFSET(Object_0021cdc4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0021cdc4_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_0021cdc4_0, word_10fc, 0x10fc);  // (from the original)
GUEST_OFFSET(Object_0021cdc4_0, word_1494, 0x1494);  // (from the original)
GUEST_OFFSET(Object_0021cdc4_0, word_1578, 0x1578);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f770c, u32(u32, u32, u32, u32)> call_002f770c;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32, u32, u32)> call_006aaa30;  // (from the original)

u32 f_0021cdc4(gptr<Object_0021cdc4_0> arg0) {
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
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r4_2 = 0;
    u32 r0_9 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r1_6 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_7 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r1_8 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r1_9 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r1_10 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r1_11 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
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
    u32 r1_18 = 0;
    u32 r2_19 = 0;
    u32 r3_19 = 0;
    u32 r0_38 = 0;
    u32 r0_39 = 0;
    u32 r1_19 = 0;
    u32 r2_20 = 0;
    u32 r3_20 = 0;
    u32 r0_40 = 0;
    u32 r0_41 = 0;
    u32 r1_20 = 0;
    u32 r2_21 = 0;
    u32 r3_21 = 0;
    u32 r0_42 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0x8edd1cu);  // (from the original)
    arg0->word_28 = u32(0x8edd1cu + 0x6cu);  // (from the original)
    arg0->word_10fc = u32(0x8ee228u);  // (from the original)
    r4_1 = r0 + 0x1494u;  // (from the original)
    arg0->word_1578 = u32(0x8ef284u + 0x44u);  // (from the original)
    arg0->word_1494 = u32(0x8ef284u);  // (from the original)
    r0_1 = r4_1 + 0x118u;  // (from the original)
    call_002f76ac(r0_1, 0x2e0b3cu, 0x518u, 2u);  // (from the original)
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
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_7 = r0_6 - 0xe8u;  // (from the original)
    r0_8 = call_002f7710(r0_7, r1_3, r2_4, r3_4);
    r4_2 = r0_8 - 0x1018u;  // (from the original)
    r0_9 = r0_8 - 0x540u;  // (from the original)
    call_002f76ac(r0_9, 0x2b6ef8u, 0xe0u, 6u);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_10 = r4_2 + 0xa08u;  // (from the original)
    r0_11 = call_005e3194(r0_10, r1_4, r2_5, r3_5);
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_12 = r0_11 - 0xc4u;  // (from the original)
    r0_13 = call_005e3194(r0_12, r1_5, r2_6, r3_6);
    r1_6 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_14 = r0_13 - 0xc4u;  // (from the original)
    r0_15 = call_005e3194(r0_14, r1_6, r2_7, r3_7);
    r1_7 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_16 = r0_15 - 0xc4u;  // (from the original)
    r0_17 = call_005e3194(r0_16, r1_7, r2_8, r3_8);
    r1_8 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_18 = r0_17 - 0x28u;  // (from the original)
    r0_19 = call_0056988c(r0_18, r1_8, r2_9, r3_9);
    r1_9 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_20 = r0_19 - 0x28u;  // (from the original)
    r0_21 = call_0056988c(r0_20, r1_9, r2_10, r3_10);
    r1_10 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_22 = r0_21 - 0x28u;  // (from the original)
    r0_23 = call_0056988c(r0_22, r1_10, r2_11, r3_11);
    r1_11 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_24 = r0_23 - 0x28u;  // (from the original)
    r0_25 = call_0056988c(r0_24, r1_11, r2_12, r3_12);
    r1_12 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_26 = r0_25 - 0x28u;  // (from the original)
    r0_27 = call_0056988c(r0_26, r1_12, r2_13, r3_13);
    r1_13 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_28 = r0_27 - 0x28u;  // (from the original)
    r0_29 = call_0056988c(r0_28, r1_13, r2_14, r3_14);
    r1_14 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r0_30 = r0_29 - 0x28u;  // (from the original)
    r0_31 = call_0056988c(r0_30, r1_14, r2_15, r3_15);
    r1_15 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    r0_32 = r0_31 - 0x28u;  // (from the original)
    r0_33 = call_0056988c(r0_32, r1_15, r2_16, r3_16);
    r1_16 = guest::cpu()->r[1];
    r2_17 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    r0_34 = r0_33 - 0x14cu;  // (from the original)
    r0_35 = call_005bf744(r0_34, r1_16, r2_17, r3_17);
    r1_17 = guest::cpu()->r[1];
    r2_18 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    r0_36 = r0_35 - 0x14cu;  // (from the original)
    r0_37 = call_005bf744(r0_36, r1_17, r2_18, r3_18);
    r1_18 = guest::cpu()->r[1];
    r2_19 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    r0_38 = r0_37 - 0x14cu;  // (from the original)
    r0_39 = call_005bf744(r0_38, r1_18, r2_19, r3_19);
    r1_19 = guest::cpu()->r[1];
    r2_20 = guest::cpu()->r[2];
    r3_20 = guest::cpu()->r[3];
    r0_40 = r0_39 - 0x248u;  // (from the original)
    r0_41 = call_00567ef0(r0_40, r1_19, r2_20, r3_20);
    r1_20 = guest::cpu()->r[1];
    r2_21 = guest::cpu()->r[2];
    r3_21 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 8u;
    r0_42 = r0_41 - 0x50u;  // (from the original)
    return call_006aaa30(r0_42, r1_20, r2_21, r3_21);
}

}  // namespace d_0021cdc4
GUEST_EXPORT(0x0021cdc4, d_0021cdc4::f_0021cdc4);

// f_0021d000: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0021d000 {

struct __attribute__((packed)) Object_0021d000_0 {
    u8 unknown_0[0xc833];  // (not used here)
    u8 byte_c833;
};
GUEST_OFFSET(Object_0021d000_0, byte_c833, 0xc833);  // (from the original)

inline guest::global<u32, 0x00848f44> global_00848f44;  // (from the original)
inline constexpr guest::Function<0x0026e250, u32(u32, u32, u32, u32)> call_0026e250;  // (from the original)
inline constexpr guest::Function<0x002cbccc, u32(u32, u32, u32, u32)> call_002cbccc;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002fe7f4, u32(u32, u32, u32, u32)> call_002fe7f4;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x0030b6b8, u32(u32, u32, u32, u32)> call_0030b6b8;  // (from the original)
inline constexpr guest::Function<0x004de5d4, u32(u32, u32, u32, u32)> call_004de5d4;  // (from the original)
inline constexpr guest::Function<0x005d4a78, u32(u32, u32, u32, u32)> call_005d4a78;  // (from the original)
inline constexpr guest::Function<0x005e34c4, u32(u32, u32, u32, u32)> call_005e34c4;  // (from the original)
inline constexpr guest::Function<0x005e4988, u32(u32, u32, u32, u32)> call_005e4988;  // (from the original)
inline constexpr guest::Function<0x005e4994, u32(u32, u32, u32, u32)> call_005e4994;  // (from the original)
inline constexpr guest::Function<0x005e49c0, u32(u32, u32, u32, u32)> call_005e49c0;  // (from the original)
inline constexpr guest::Function<0x005e8498, u32(u32, u32, u32, u32)> call_005e8498;  // (from the original)
inline constexpr guest::Function<0x0071348c, u32(u32, u32, u32, u32)> call_0071348c;  // (from the original)
inline constexpr guest::Function<0x00718c0c, u32(u32, u32, u32, u32)> call_00718c0c;  // (from the original)
inline constexpr guest::Function<0x0071af4c, u32(u32, u32, u32, u32)> call_0071af4c;  // (from the original)
inline constexpr guest::Function<0x0071ecc4, u32(u32, u32, u32, u32)> call_0071ecc4;  // (from the original)

u32 f_0021d000(gptr<Object_0021d000_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r1_1 = 0;
    u32 r0_6 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r3_4 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r6_1 = 0;
    u32 r1_2 = 0;
    u32 r2_5 = 0;
    u32 r0_11 = 0;
    u32 r1_3 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r1_4 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_12 = 0;
    u32 r2_8 = 0;
    u32 r1_5 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_6 = 0;
    u32 r3_8 = 0;
    u32 r2_9 = 0;
    u32 r1_7 = 0;
    u32 r2_10 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r1_8 = 0;
    r13 = r13 - 0x160u;  // (from the original)
    r7 = r0 + 0xc274u;  // (from the original)
    arg0->byte_c833 = u8(1u);
    r0_1 = r0 + 0x4cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_0071ecc4(r0_1, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        r0_3 = r0 + 0x4cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_4 = call_002cbccc(r0_3, r1, r2_1, r3_1);
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        goto L_21d074;
    }
    r0_5 = r0 + 0x3cf4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_00718c0c(r0_5, r1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        goto L_21d074;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_0026e250(r0_5, r1, r2_2, r3_2);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
L_21d074:;
    *gptr<u32>(r7 + 0x590u) = u32(r0_4);  // (from the original)
    r1_1 = r13 + 0x12cu;  // (from the original)
    r0_6 = r0 + 0xc15cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0071af4c(r0_6, r1_1, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_7 = r7 + 0xdcu;  // (from the original)
    *gptr<u32>(r0_7 + 0x4d4u) = u32(*gptr<u32>(r13 + 0x12cu));  // (from the original)
    *gptr<u32>(r0_7 + 0x4d8u) = u32(*gptr<u32>(r13 + 0x130u));  // (from the original)
    *gptr<u32>(r0_7 + 0x4dcu) = u32(*gptr<u32>(r13 + 0x134u));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_0071348c(r0, r1, r2_3, r3_3);
    r3_4 = guest::cpu()->r[3];
    *gptr<u8>(r7 + 0x5beu) = u8(1u);  // (from the original)
    r0_9 = r13 + 0xd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_002fe7f4(r0_9, r0_8, 0u, r3_4);
    r2_4 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_005e8498(r7, r0_10, r2_4, r3_5);
    *gptr<u32>(r13 + 0xd0u) = u32(0x909f18u);  // (from the original)
    r6_1 = r13 + 0x138u;  // (from the original)
    r1_2 = *gptr<u32>(0x848f44u + 4);  // (from the original)
    r2_5 = *gptr<u32>(0x848f44u + 8);  // (from the original)
    *gptr<u32>(r6_1) = u32(*global_00848f44);
    *gptr<u32>(r6_1 + 4) = u32(r1_2);
    *gptr<u32>(r6_1 + 8) = u32(r2_5);
    r0_11 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00301d0c(r0_11, 0x5e35dcu, 0x20u, 6u);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0030b6b8(r0_8, r1_3, r2_6, r3_6);
    r1_4 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_12 = call_004de5d4(r0_8, r1_4, r2_7, r3_7);
    *gptr<u32>(r13 + 8u) = u32(7u);
    if (r0_12 == 0) {
        r2_8 = 0x32u;  // (from the original)
    } else {
        r2_8 = 0x19u;  // (from the original)
    }
    r1_5 = r13 + 0x138u;  // (from the original)
    r0_13 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4u) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_005e34c4(r0_13, r1_5, r2_8, 0u);
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4) = u32(1u);
    r6 = r13 + 0x10u;  // (from the original)
    r0_14 = r13 + 0x30u;  // (from the original)
    r1_6 = r13 + 0x138u;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(1u);
    guest::cpu()->r[13] = r13;
    call_005e34c4(r0_14, r1_6, 0xbu, 0u);  // (from the original)
    r3_8 = guest::cpu()->r[3];
    r5 = 2u;
    guest::cpu()->r[13] = r13;
    call_005e49c0(r7, r5, 1u, r3_8);
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
L_21d1ac:;
        r2_9 = r6 + (r4 << 5);
        guest::cpu()->r[13] = r13;
        call_005e4994(r7, r4, r2_9, r3);
        r1_7 = guest::cpu()->r[1];
        r2_10 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(r5));
    guest::cpu()->r[13] = r13;
    call_005e4988(r7, r1_7, r2_10, r3);
    guest::cpu()->r[13] = r13;
    call_005d4a78(r7, 0u, 0u, 0u);
    r0_15 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_16 = call_002f76ac(r0_15, 0x5e3618u, 0x20u, 6u);  // (from the original)
    r1_8 = guest::cpu()->r[1];
    r13 = r13 + 0x160u;  // (from the original)
    guest::cpu()->r[1] = r1_8;
    guest::cpu()->r[13] = r13;
    return r0_16;
}

}  // namespace d_0021d000
GUEST_EXPORT(0x0021d000, d_0021d000::f_0021d000);

// f_0021e664: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0021e664 {

struct __attribute__((packed)) Object_0021e664_0 {
    u32 word_0;
    u8 unknown_4[0x24];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0xceac];  // (not used here)
    u32 word_ced8;
};
GUEST_OFFSET(Object_0021e664_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0021e664_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_0021e664_0, word_ced8, 0xced8);  // (from the original)

inline constexpr guest::Function<0x0022c5d8, u32(u32, u32, u32, u32)> call_0022c5d8;  // (from the original)
inline constexpr guest::Function<0x002684c0, u32(u32, u32, u32, u32)> call_002684c0;  // (from the original)
inline constexpr guest::Function<0x0026fe3c, u32(u32, u32, u32, u32)> call_0026fe3c;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)
inline constexpr guest::Function<0x005e8a7c, u32(u32, u32, u32, u32)> call_005e8a7c;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32, u32, u32)> call_006aaa30;  // (from the original)

u32 f_0021e664(gptr<Object_0021e664_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r3_5 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r2_7 = 0;
    u32 r3_6 = 0;
    u32 ea_1 = 0;
    u32 r0_13 = 0;
    u32 r1_6 = 0;
    u32 r2_8 = 0;
    u32 r3_7 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r3_8 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r2_9 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r1_7 = 0;
    u32 r2_10 = 0;
    u32 r3_9 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r1_8 = 0;
    u32 r2_11 = 0;
    u32 r3_10 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r1_9 = 0;
    u32 r2_12 = 0;
    u32 r3_11 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r1_10 = 0;
    u32 r2_13 = 0;
    u32 r3_12 = 0;
    u32 r0_27 = 0;
    u32 r0_28 = 0;
    u32 r4_1 = 0;
    u32 r0_29 = 0;
    u32 r1_11 = 0;
    u32 r2_14 = 0;
    u32 r3_13 = 0;
    u32 r0_30 = 0;
    u32 r1_12 = 0;
    u32 r2_15 = 0;
    u32 r3_14 = 0;
    u32 r0_31 = 0;
    r13 = r13 - 8;
    r2_1 = 0x8edd9cu + 0x6cu;  // (from the original)
    arg0->word_0 = u32(0x8edd9cu);  // (from the original)
    arg0->word_28 = u32(r2_1);
    arg0->word_ced8 = u32(0x8f47a0u);  // (from the original)
    r0_1 = r0 + 0xd2f4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_005e3194(r0_1, 0x8f47a0u, r2_1, r3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_3 = r0_2 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_0056988c(r0_3, r1_1, r2_2, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_5 = r0_4 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_0056988c(r0_5, r1_2, r2_3, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_7 = r0_6 - 0x15cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_005bf744(r0_7, r1_3, r2_4, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_9 = r0_8 - 0x24cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_00567ef0(r0_9, r1_4, r2_5, r3_4);
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_11 = r0_10 - 0xc88u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_12 = call_005e8a7c(r0_11, r1_5, r2_6, r3_5);
    r2_7 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    ea_1 = r0_12 - 0x118u;  // (from the original)
    *gptr<u32>(ea_1) = u32(0x8f08acu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_13 = call_002f7710(ea_1, 0x8f08acu, r2_7, r3_6);  // (from the original)
    r1_6 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_14 = r0_13 - 0x8468u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_15 = call_0026fe3c(r0_14, r1_6, r2_8, r3_7);
    r3_8 = guest::cpu()->r[3];
    r0_16 = r0_15 - 0x3ca8u;  // (from the original)
    *gptr<u32>(r0_16 + 0xa40u) = u32(0x8f2674u + 0x30u);  // (from the original)
    *gptr<u32>(r0_16) = u32(0x8f2674u);  // (from the original)
    r0_17 = r0_16 + 0x3ac0u;  // (from the original)
    r2_9 = 0x8f2a0cu + 0x10u;  // (from the original)
    *gptr<u32>(r0_17) = u32(0x8f2a0cu);  // (from the original)
    r0_18 = r0_17 + 0xcu;  // (from the original)
    *gptr<u32>(r0_18) = u32(r2_9);
    r0_19 = r0_18 + 0x1acu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_20 = call_0056988c(r0_19, 0x8f2a0cu, r2_9, r3_8);  // (from the original)
    r1_7 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_21 = r0_20 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_22 = call_0056988c(r0_21, r1_7, r2_10, r3_9);
    r1_8 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_23 = r0_22 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_24 = call_0056988c(r0_23, r1_8, r2_11, r3_10);
    r1_9 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_25 = r0_24 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_26 = call_0056988c(r0_25, r1_9, r2_12, r3_11);
    r1_10 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_27 = r0_26 - 0x140u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_28 = call_0022c5d8(r0_27, r1_10, r2_13, r3_12);
    r4_1 = r0_28 - 0x3ac0u;  // (from the original)
    r0_29 = r0_28 - 0x2238u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_29, 0x2b950cu, 0x36cu, 0xau);  // (from the original)
    r1_11 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_30 = call_002684c0(r4_1, r1_11, r2_14, r3_13);
    r1_12 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r13 = r13 + 8;
    r0_31 = r0_30 - 0x4cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_006aaa30(r0_31, r1_12, r2_15, r3_14);
}

}  // namespace d_0021e664
GUEST_EXPORT(0x0021e664, d_0021e664::f_0021e664);

// f_0021fa30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0021fa30 {

inline constexpr guest::Function<0x00274394, u32(u32, u32, u32, u32)> call_00274394;  // (from the original)
inline constexpr guest::Function<0x00320548, u32(u32, u32, u32, u32)> call_00320548;  // (from the original)
inline constexpr guest::Function<0x00718d98, u32(u32, u32, u32, u32)> call_00718d98;  // (from the original)
inline constexpr guest::Function<0x00723f84, u32(u32, u32, u32, u32)> call_00723f84;  // (from the original)

u32 f_0021fa30(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = r0 + 0xc8u;  // (from the original)
    r0_2 = call_00718d98(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 != 0) {
        r0_3 = r0 + 0xc8u;  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_00274394(r0_3, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0_4 = r0 + 0x2cbcu;  // (from the original)
    r0_5 = call_00723f84(r0_4, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_5 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_00320548(r0_4, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_5;
}

}  // namespace d_0021fa30
GUEST_EXPORT(0x0021fa30, d_0021fa30::f_0021fa30);

// f_0021fb60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0021fb60 {

struct __attribute__((packed)) Object_0021fb60_0 {
    u32 word_0;
    u8 unknown_4[0x24];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0x78];  // (not used here)
    u32 word_a4;
    u8 unknown_a8[0x5f40];  // (not used here)
    u32 word_5fe8;
};
GUEST_OFFSET(Object_0021fb60_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0021fb60_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_0021fb60_0, word_a4, 0xa4);  // (from the original)
GUEST_OFFSET(Object_0021fb60_0, word_5fe8, 0x5fe8);  // (from the original)

inline constexpr guest::Function<0x0027460c, u32(u32, u32, u32, u32)> call_0027460c;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x003170d0, u32(u32, u32, u32, u32)> call_003170d0;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)
inline constexpr guest::Function<0x005e8a7c, u32(u32, u32, u32, u32)> call_005e8a7c;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32, u32, u32)> call_006aaa30;  // (from the original)

u32 f_0021fb60(gptr<Object_0021fb60_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r3_5 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_6 = 0;
    u32 r2_7 = 0;
    u32 r3_6 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r2_8 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r1_7 = 0;
    u32 r2_9 = 0;
    u32 r3_7 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r1_8 = 0;
    u32 r2_10 = 0;
    u32 r3_8 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r2_11 = 0;
    u32 r3_9 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r3_10 = 0;
    u32 r2_12 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r1_9 = 0;
    u32 r2_13 = 0;
    u32 r3_11 = 0;
    u32 r0_27 = 0;
    u32 r0_28 = 0;
    u32 r1_10 = 0;
    u32 r2_14 = 0;
    u32 r3_12 = 0;
    u32 r0_29 = 0;
    u32 r0_30 = 0;
    u32 r1_11 = 0;
    u32 r2_15 = 0;
    u32 r3_13 = 0;
    u32 r0_31 = 0;
    u32 r0_32 = 0;
    u32 r1_12 = 0;
    u32 r2_16 = 0;
    u32 r3_14 = 0;
    u32 r0_33 = 0;
    u32 r0_34 = 0;
    u32 r1_13 = 0;
    u32 r2_17 = 0;
    u32 r3_15 = 0;
    u32 r0_35 = 0;
    u32 r0_36 = 0;
    u32 r1_14 = 0;
    u32 r2_18 = 0;
    u32 r3_16 = 0;
    u32 r0_37 = 0;
    u32 r0_38 = 0;
    u32 r4_1 = 0;
    u32 r0_39 = 0;
    u32 r1_15 = 0;
    u32 r2_19 = 0;
    u32 r3_17 = 0;
    u32 r0_40 = 0;
    u32 r0_41 = 0;
    u32 r1_16 = 0;
    u32 r2_20 = 0;
    u32 r3_18 = 0;
    u32 r0_42 = 0;
    u32 r0_43 = 0;
    u32 r1_17 = 0;
    u32 r2_21 = 0;
    u32 r3_19 = 0;
    u32 r0_44 = 0;
    u32 r0_45 = 0;
    u32 r1_18 = 0;
    u32 r2_22 = 0;
    u32 r3_20 = 0;
    u32 r0_46 = 0;
    u32 r0_47 = 0;
    u32 r1_19 = 0;
    u32 r2_23 = 0;
    u32 r3_21 = 0;
    u32 r0_48 = 0;
    u32 r0_49 = 0;
    u32 r1_20 = 0;
    u32 r2_24 = 0;
    u32 r3_22 = 0;
    u32 r0_50 = 0;
    guest::cpu()->r[13] -= 8u;
    r1_1 = 0x8ede1cu + 0x170u;  // (from the original)
    r2_1 = 0x8ede1cu + 0x6cu;  // (from the original)
    arg0->word_a4 = u32(r1_1);
    arg0->word_28 = u32(r2_1);
    arg0->word_0 = u32(0x8ede1cu);  // (from the original)
    r0_1 = r0 + 0x5fe8u;  // (from the original)
    arg0->word_5fe8 = u32(0x8f08acu);  // (from the original)
    r0_2 = call_002f7710(r0_1, r1_1, r2_1, 0x8ede1cu);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_3 = r0_2 - 0xc64u;  // (from the original)
    r0_4 = call_005e8a7c(r0_3, r1_2, r2_2, r3_1);
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u32>(r0_4 - 0x4f0u) = u32(0x8f47a0u);  // (from the original)
    r0_5 = r0_4 - 0xd4u;  // (from the original)
    r0_6 = call_005e3194(r0_5, 0x8f47a0u, r2_3, r3_2);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_7 = r0_6 - 0x28u;  // (from the original)
    r0_8 = call_0056988c(r0_7, r1_3, r2_4, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_9 = r0_8 - 0x28u;  // (from the original)
    r0_10 = call_0056988c(r0_9, r1_4, r2_5, r3_4);
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_11 = r0_10 - 0x15cu;  // (from the original)
    r0_12 = call_005bf744(r0_11, r1_5, r2_6, r3_5);
    r1_6 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_13 = r0_12 - 0x24cu;  // (from the original)
    r0_14 = call_00567ef0(r0_13, r1_6, r2_7, r3_6);
    r0_15 = r0_14 - 0x21fcu;  // (from the original)
    r2_8 = 0x8f47ecu + 0x28u;  // (from the original)
    *gptr<u32>(r0_15) = u32(0x8f47ecu);  // (from the original)
    *gptr<u32>(0x213cu + r0_15) = u32(r2_8);  // (from the original)
    r0_16 = r0_15 + 0x21b0u;  // (from the original)
    r0_17 = call_0056988c(r0_16, 0x8f47ecu, r2_8, 0x213cu);  // (from the original)
    r1_7 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_18 = r0_17 - 0x28u;  // (from the original)
    r0_19 = call_0056988c(r0_18, r1_7, r2_9, r3_7);
    r1_8 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_20 = r0_19 - 0x28u;  // (from the original)
    r0_21 = call_0056988c(r0_20, r1_8, r2_10, r3_8);
    r2_11 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_22 = r0_21 - 0x2160u;  // (from the original)
    *gptr<u32>(r0_22) = u32(0x8f4828u);  // (from the original)
    r0_23 = r0_22 + 0x201cu;  // (from the original)
    *gptr<u32>(r0_23) = u32(0x8f08acu);  // (from the original)
    r0_24 = call_002f7710(r0_23, 0x8f4828u, r2_11, r3_9);  // (from the original)
    r3_10 = guest::cpu()->r[3];
    r2_12 = 0x8ee248u + 0x10u;  // (from the original)
    *gptr<u32>(r0_24 - 0x134u) = u32(r2_12);  // (from the original)
    *gptr<u32>(r0_24 - 0x140u) = u32(0x8ee248u);  // (from the original)
    r0_25 = r0_24 - 0x2cu;  // (from the original)
    r0_26 = call_0056988c(r0_25, 0x8ee248u, r2_12, r3_10);  // (from the original)
    r1_9 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_27 = r0_26 - 0x28u;  // (from the original)
    r0_28 = call_0056988c(r0_27, r1_9, r2_13, r3_11);
    r1_10 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_29 = r0_28 - 0x28u;  // (from the original)
    r0_30 = call_0056988c(r0_29, r1_10, r2_14, r3_12);
    r1_11 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_31 = r0_30 - 0x28u;  // (from the original)
    r0_32 = call_0056988c(r0_31, r1_11, r2_15, r3_13);
    r1_12 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_33 = r0_32 - 0x28u;  // (from the original)
    r0_34 = call_0056988c(r0_33, r1_12, r2_16, r3_14);
    r1_13 = guest::cpu()->r[1];
    r2_17 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r0_35 = r0_34 - 0x28u;  // (from the original)
    r0_36 = call_0056988c(r0_35, r1_13, r2_17, r3_15);
    r1_14 = guest::cpu()->r[1];
    r2_18 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    r0_37 = r0_36 - 0x2cu;  // (from the original)
    r0_38 = call_0056988c(r0_37, r1_14, r2_18, r3_16);
    r4_1 = r0_38 - 0x1efcu;  // (from the original)
    r0_39 = r0_38 - 0x1b28u;  // (from the original)
    call_002f76ac(r0_39, 0x2e3854u, 0x2b4u, 0xau);  // (from the original)
    r1_15 = guest::cpu()->r[1];
    r2_19 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    r0_40 = r4_1 + 0x3a8u;  // (from the original)
    r0_41 = call_0056988c(r0_40, r1_15, r2_19, r3_17);
    r1_16 = guest::cpu()->r[1];
    r2_20 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    r0_42 = r0_41 - 0x150u;  // (from the original)
    r0_43 = call_005bf744(r0_42, r1_16, r2_20, r3_18);
    r1_17 = guest::cpu()->r[1];
    r2_21 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    r0_44 = r0_43 - 0x248u;  // (from the original)
    r0_45 = call_00567ef0(r0_44, r1_17, r2_21, r3_19);
    r1_18 = guest::cpu()->r[1];
    r2_22 = guest::cpu()->r[2];
    r3_20 = guest::cpu()->r[3];
    r0_46 = r0_45 - 0x2c04u;  // (from the original)
    r0_47 = call_0027460c(r0_46, r1_18, r2_22, r3_20);
    r1_19 = guest::cpu()->r[1];
    r2_23 = guest::cpu()->r[2];
    r3_21 = guest::cpu()->r[3];
    r0_48 = r0_47 - 0xa0u;  // (from the original)
    r0_49 = call_003170d0(r0_48, r1_19, r2_23, r3_21);
    r1_20 = guest::cpu()->r[1];
    r2_24 = guest::cpu()->r[2];
    r3_22 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 8u;
    r0_50 = r0_49 - 0x28u;  // (from the original)
    return call_006aaa30(r0_50, r1_20, r2_24, r3_22);
}

}  // namespace d_0021fb60
GUEST_EXPORT(0x0021fb60, d_0021fb60::f_0021fb60);

// f_0021fe04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0021fe04 {

struct __attribute__((packed)) Object_0021fe04_0 {
    u8 unknown_0[0xb2f4];  // (not used here)
    u32 word_b2f4;
};
GUEST_OFFSET(Object_0021fe04_0, word_b2f4, 0xb2f4);  // (from the original)

inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)

u32 f_0021fe04(gptr<Object_0021fe04_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r6_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r12_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r6_1 = r0 + 0xb000u;  // (from the original)
    r0_1 = arg0->word_b2f4;
    r1_1 = *gptr<u32>(0x94fc50u + (r1 << 2));  // (from the original)
    r0_2 = call_004b4fc0(r0_1, r1_1, 1u, r3);
    r12_1 = *gptr<u32>(r6_1 + 0x2f4u);  // (from the original)
    r1_2 = r0 + (r1 + (r1 << 2) << 3);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r1_3 = r1_2 + 0xb2fcu;  // (from the original)
    return call_00568984(r12_1, r1_3, r0_2, 0u);
}

}  // namespace d_0021fe04
GUEST_EXPORT(0x0021fe04, d_0021fe04::f_0021fe04);
