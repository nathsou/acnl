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

inline constexpr guest::Function<0x001435b4, u32(u32, u32, u32, u32)> call_001435b4;  // (from the original)
inline constexpr guest::Function<0x001f9684, u32(u32, u32, u32, u32)> call_001f9684;  // (from the original)
inline constexpr guest::Function<0x0034a784, u32(u32, u32, u32, u32)> call_0034a784;  // (from the original)
inline constexpr guest::Function<0x0034a8b4, u32(u32, u32, u32, u32)> call_0034a8b4;  // (from the original)
inline constexpr guest::Function<0x0052652c, u32(u32, u32, u32, u32)> call_0052652c;  // (from the original)

u32 f_00210c2c(gptr<Object_00210c2c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    r13 = r13 - 0x38u;  // (from the original)
    r8 = 0u;
    r4 = r0;
    arg0->byte_8 = u8(r8);
    arg0->byte_88 = u8(r8);
    arg0->byte_38 = u8(r8);
    r0 = 1u;
    arg0->byte_3a = u8(r0);
    arg0->byte_39 = u8(r8);
    arg0->byte_9 = u8(r8);
    arg0->byte_d = u8(r0);
    arg0->byte_b = u8(r0);
    arg0->byte_a = u8(r8);
    arg0->byte_e = u8(r0);
    S0 = std::bit_cast<float>(*gptr<u32>(0x210e54u));  // (from the original)
    arg0->byte_c = u8(r0);
    arg0->byte_70 = u8(r0);
    arg0->word_74 = u32(std::bit_cast<u32>(S0));
    arg0->byte_5c = u8(r0);
    r9 = r0;
    arg0->byte_5d = u8(r0);
    r0 = 4u;
    arg0->byte_5e = u8(r0);
    arg0->byte_64 = u8(r8);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_001f9684(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r0 + 0x24u;  // (from the original)
    r5 = r0;
    r1 = r0;
    r2 = r4 + 0x1458u;  // (from the original)
    r0 = r4 + 0x1450u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0052652c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r4 + 0x1590u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_001435b4(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r2 = r0;
    r0 = r4 + 0x4e4u;  // (from the original)
    r1 = *gptr<u32>(r5 + 4u);
    r3 = 0xbu;  // (from the original)
    r7 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0034a784(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r4 + 0x15f0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_001435b4(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r2 = r0;
    r0 = r4 + 0xc74u;  // (from the original)
    r1 = *gptr<u32>(r5 + 4u);
    r3 = 0xbu;  // (from the original)
    r6 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0034a784(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r0 = 0x845378u;  // (from the original)
    ea = r0;
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    r3 = *gptr<u32>(ea + 8);
    ea = r13 + 0x10u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    *gptr<u32>(ea + 8) = u32(r3);
    ea = r0 + 0xcu;  // (from the original)
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    r3 = *gptr<u32>(ea + 8);
    *gptr<u32>(r13 + 0xcu) = u32(*gptr<u32>(r0 + 0x18u));  // (from the original)
    r0 = r7;
    *gptr<u32>(r13) = u32(r1);
    *gptr<u32>(r13 + 4) = u32(r2);
    *gptr<u32>(r13 + 8) = u32(r3);
    r3 = r13 + 0x10u;  // (from the original)
    r1 = *gptr<u32>(r5 + 8u);
    r2 = 3u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0034a8b4(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r1 = *gptr<u32>(r5 + 8u);
    r3 = r13 + 0x10u;  // (from the original)
    r2 = 3u;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0034a8b4(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r1 = *gptr<u32>(r5 + 0x10u);  // (from the original)
    r3 = r13;
    r2 = 4u;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0034a8b4(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r1 = *gptr<u32>(r5 + 0x10u);  // (from the original)
    r3 = r13;
    r2 = 4u;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0034a8b4(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r0 = 0x1651u;  // (from the original)
    r3 = r4 + 0x1650u;  // (from the original)
    r1 = 2u;
    *gptr<u8>(r3) = u8(r8);
    *gptr<u8>(r0 + r4) = u8(r9);
    r0 = r0 + 1u;
    *gptr<u8>(r0 + r4) = u8(r1);
    r0 = r0 | u32(s32(r0) >> 0xc);  // (from the original)
    *gptr<u8>(r0 + r4) = u8(r1);
    r0 = r0 + 1u;
    r2 = r0 | u32(s32(r0) >> 0xa);  // (from the original)
    *gptr<u8>(r0 + r4) = u8(r9);
    r0 = 3u;
    *gptr<u8>(r2 + r4) = u8(r0);
    r2 = r2 ^ r0;
    *gptr<u8>(r2 + r4) = u8(r1);
    r1 = r2 | r0;
    r2 = r1 + u32(s32(r0) >> 1);
    *gptr<u8>(r1 + r4) = u8(r0);
    r1 = 4u;
    *gptr<u8>(r2 + r4) = u8(r1);
    r2 = r2 | u32(s32(r0) >> 1);
    *gptr<u8>(r2 + r4) = u8(r1);
    r2 = r2 ^ r0;
    *gptr<u8>(r2 + r4) = u8(r0);
    r0 = r2 | r0;
    r2 = 5u;
    *gptr<u8>(r0 + r4) = u8(r2);
    r0 = r0 + 1u;
    *gptr<u8>(r0 + r4) = u8(r1);
    r0 = r0 | u32(s32(r0) >> 6);
    r1 = r0 + 1u;
    *gptr<u8>(r0 + r4) = u8(r2);
    r0 = 6u;
    *gptr<u8>(r1 + r4) = u8(r0);
    r1 = r1 | u32(s32(r0) >> 1);
    *gptr<u8>(r1 + r4) = u8(r0);
    r0 = r1 + u32(s32(r0) >> 2);
    r1 = 7u;
    *gptr<u8>(r0 + r4) = u8(r2);
    *gptr<u8>((r0 | u32(s32(r0) >> 0xc)) + r4) = u8(r1);  // (from the original)
    r0 = r3;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_001435b4(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r1 = 0x1404u;  // (from the original)
    *gptr<u32>(r1 + r4) = u32(r0);
    r0 = r1 + 4u;
    r1 = 0x12u;  // (from the original)
    *gptr<u32>(r0 + r4) = u32(r1);
    *gptr<u8>(r4 + 0x140cu) = u8(r9);  // (from the original)
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
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
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18;  // (from the original)
    r5 = r0;
    r7 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_00210e64(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r5 + 0x1662u;  // (from the original)
    ea = r6;
    r0 = u32(*gptr<u8>(ea));
    ea = r5 + ((r0 << 7) - ((r0 << 3) - r0) << 4) + 0x4e4u;  // (from the original)
    r4 = ea;
    r0 = *gptr<u32>(ea);
    if (r0 == 0) {
        r1 = r4 + 4u;
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_00726f34(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        r0 = u32(s32(r0 - r4 - 4u) >> 2);
        *gptr<u32>(r4) = u32(r0);
    }
    r2 = r0 << 2;
    r1 = r4 + 4u;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002fbb30(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r7 + (*gptr<u32>(r4) << 2);
    r0 = u32(*gptr<u8>(r6));
    r0 = r5 + ((r0 << 7) - ((r0 << 3) - r0) << 4) + 0x4e4u;  // (from the original)
    r2 = r5 + 0x1404u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00726e94(r0, r1, r2, r3);
    r1 = u32(*gptr<u8>(r6));
    r12 = 0x803f0232u;  // (from the original)
    r3 = r5 + ((r1 << 7) - ((r1 << 3) - r1) << 4) + 0x400u;  // (from the original)
    r1 = 0u;
    r3 = r3 + 0xe4u;  // (from the original)
    r2 = r1;
    do {
L_2128a4:;
        r4 = r1 + (r1 << 1);
        if (!(*gptr<u32>(r3 + ((r1 << 3) - r1 << 4) + 0x160u) == 0)) {  // (from the original)
            *gptr<u32>(r0) = u32(r2);
            *gptr<u32>(r0 + 4) = u32(r4 + 0x203u | 0x80000000u | 0x2f0000u);  // (from the original)
            r0 = r0 + 8;
            *gptr<u32>(r0) = u32(r2);
            r0 = r0 + 4u;
            *gptr<u32>(r0) = u32(r2);
        } else {
            *gptr<u32>(r0) = u32(r2);
            *gptr<u32>(r0 + 4) = u32(r4 + 0x205u | 0xf0000u);  // (from the original)
            r0 = r0 + 4u;
        }
        r0 = r0 + 4u;
        if (!(u32(*gptr<u8>(r3 + (r1 + (r1 << 2) << 2) + 0x6a0u)) == 0)) {  // (from the original)
            *gptr<u32>(r0) = u32(r1);
            *gptr<u32>(r0 + 4) = u32(r12);
            r0 = r0 + 8;
            *gptr<u32>(r0) = u32(r2);
            r0 = r0 + 4u;
            *gptr<u32>(r0) = u32(r2);
            r0 = r0 + 4u;
            *gptr<u32>(r0) = u32(r2);
            r0 = r0 + 4u;
            *gptr<u32>(r0) = u32(r2);
            r0 = r0 + 4u;
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
    u32 ea = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r5 = r0;
    r1 = r0;
    r0 = 0x166cu;  // (from the original)
    r13 = r13 - 0x20u;  // (from the original)
    r2 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fd108(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r0 + 4u) = u32(~0u);
    r1 = 0x8edc28u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00123678(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 - 8u;
    r6 = 0u;
    ea = r0 + 0x80u;  // (from the original)
    *gptr<u8>(ea) = u8(r6);
    r0 = ea;
    r1 = 0x210u;  // (from the original)
    *gptr<u8>(r0 + 1u) = u8(r6);
    *gptr<u8>(r0 + 2u) = u8(r6);
    *gptr<u8>(r0 + 3u) = u8(r6);
    *gptr<u8>(r0 + 4u) = u8(r6);
    r0 = r0 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x2a0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0034af5c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x94u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003494fc(r0, r1, r2, r3);
    r1 = 0x34ab24u;  // (from the original)
    r3 = 2u;
    r2 = 0x790u;  // (from the original)
    r0 = r0 + 0x1b0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = r0 - 0x400u;  // (from the original)
    ea = r0 + 0xf20u;  // (from the original)
    *gptr<u32>(ea) = u32(r6);
    r0 = ea;
    *gptr<u32>(r0 + 4u) = u32(r6);
    *gptr<u8>(r0 + 8u) = u8(r6);
    r0 = r1 + 0x132cu;  // (from the original)
    r1 = 0x7e4470u;  // (from the original)
    r3 = 0xcu;  // (from the original)
    r2 = 1u;
    r0 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = 0u;
    ea = r0 - 4u;
    *gptr<u8>(ea) = u8(r6);
    r0 = ea;
    do {
L_212c58:;
        r2 = r0 + r1;
        r1 = r1 + 1u;
        *gptr<u8>(r2 + 4u) = u8(r6);
        guest::preempt();
    } while (r1 < 0xcu);  // (from the original)
    r2 = 0u;
    r1 = r2;
    do {
L_212c74:;
        r3 = r0 + (r2 << 2);
        r2 = r2 + 1u;
        r1 = r1 + 2u;
        r12 = r0 + (r2 << 2);
        *gptr<u32>(r3 + 0x10u) = u32(r6);  // (from the original)
        r2 = r2 + 1u;
        *gptr<u32>(r12 + 0x10u) = u32(r6);  // (from the original)
        guest::preempt();
    } while (r1 < 0xcu);  // (from the original)
    ea = r0 + 0x40u;  // (from the original)
    *gptr<u32>(ea) = u32(r6);
    ea = ea + 4u;
    *gptr<u32>(ea) = u32(r6);
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005673c8(r0, r1, r2, r3);
    r1 = 0x3040fcu;  // (from the original)
    r3 = 5u;
    r2 = 0xcu;  // (from the original)
    r0 = r0 + 0x78u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = 0x3040fcu;  // (from the original)
    r3 = 5u;
    r2 = 0xcu;  // (from the original)
    r0 = r0 + 0x3cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = 0x3040fcu;  // (from the original)
    r3 = 5u;
    r2 = 0xcu;  // (from the original)
    r0 = r0 + 0x3cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = 0x3040fcu;  // (from the original)
    r3 = 0x10u;  // (from the original)
    r2 = 0xcu;  // (from the original)
    r0 = r0 + 0x48u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = 0x1664u;  // (from the original)
    r4 = r0 - 0x1590u;  // (from the original)
    *gptr<u8>(r0 + 0xd2u) = u8(r6);  // (from the original)
    *gptr<u16>(r1 + r4) = u16(r6);
    *gptr<u16>(r0 + 0xd6u) = u16(r6);  // (from the original)
    *gptr<u8>(r0 + 0xd8u) = u8(0xffu);  // (from the original)
    r1 = r1 + 5u;
    *gptr<u8>(r1 + r4) = u8(r6);
    *gptr<u8>(r1 + 1u + r4) = u8(r6);
    *gptr<u32>(r13 + 0xcu) = u32(0x212d88u);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(0x9047f8u);  // (from the original)
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4) = u32(r6);
    r3 = r13 + 8u;
    r2 = r5;
    r1 = 0x1000u;  // (from the original)
    r0 = r4 + 0x1458u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0031758c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00210c2c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = u32(arg0->byte_1669);
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_001f9684(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_001f9684(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r4;
    r0 = call_001f963c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
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


u32 f_00213868(gptr<Object_00213868_0> arg0, gptr<Object_00213868_1> arg1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    float S4 = 0;
    S4 = std::bit_cast<float>(arg0->word_3c8);
    S0 = std::bit_cast<float>(arg1->word_0);
    S1 = std::bit_cast<float>(arg1->word_4);
    S2 = std::bit_cast<float>(arg1->word_8);
    S3 = (std::bit_cast<float>(arg0->word_388) + std::bit_cast<float>(arg0->word_390) - std::bit_cast<float>(arg0->word_3c4)) * S4;
    if (s32(std::bit_cast<u32>(S3)) > s32(0x43c80000u)) {  // (from the original)
        S0 = std::bit_cast<float>(*gptr<u32>(0x213918u)) / S3 * S4;  // (from the original)
        arg0->word_3c8 = u32(std::bit_cast<u32>(S0));
        r1 = arg0->word_31c;
        *gptr<u32>(r1 + 0x40u) = u32(std::bit_cast<u32>(S0));  // (from the original)
        *gptr<u32>(r1 + 0x44u) = u32(std::bit_cast<u32>(S0));  // (from the original)
        S0 = std::bit_cast<float>(*gptr<u32>(0x21391cu));  // (from the original)
        *gptr<u8>(r1 + 0xb7u) = u8(u32(*gptr<u8>(r1 + 0xb7u)) & 0xcfu);  // (from the original)
    }
    r2 = 0x43480000u;  // (from the original)
    S3 = std::bit_cast<float>(*gptr<u32>(r0 + 0x398u)) * std::bit_cast<float>(*gptr<u32>(r0 + 0x3c8u));  // (from the original)
    r1 = std::bit_cast<u32>(S0 + S3);
    res = r1 - r2;
    if (!u32(res == 0) && res >> 0x1f == ((r1 ^ r2) & (r1 ^ res)) >> 0x1f) {  // (from the original)
        S0 = std::bit_cast<float>(*gptr<u32>(0x213924u)) - S3;  // (from the original)
        goto L_213908;
    }
    r1 = std::bit_cast<u32>(S0 - S3);
    if (u32(r1 >= 0xc3480000u) && !u32(r1 == 0xc3480000u)) {  // (from the original)
        S0 = S3 + std::bit_cast<float>(*gptr<u32>(0x21392cu));  // (from the original)
    }
L_213908:;
    r0 = r0 + 0x3ccu;  // (from the original)
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r0 + 8) = u32(std::bit_cast<u32>(S2));
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
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

inline constexpr guest::Function<0x004b71c8, u32(u32, u32, u32, u32)> call_004b71c8;  // (from the original)

u32 f_00213930(gptr<Object_00213930_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    float S4 = 0;
    float S5 = 0;
    float S6 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    if (u32(arg0->byte_3f7) != 0) {
        S3 = std::bit_cast<float>(arg0->word_3cc);
        S2 = std::bit_cast<float>(arg0->word_3d0);
        S1 = std::bit_cast<float>(arg0->word_3d8) - S3;
        r2 = 0x40c00000u;  // (from the original)
        S0 = std::bit_cast<float>(arg0->word_3dc) - S2;
        S0 = sqrtf(S1 * S1 + S0 * S0);
        if (s32(r2) <= s32(std::bit_cast<u32>(S0))) {
            goto L_2139b4;
        }
        arg0->word_3d8 = u32(std::bit_cast<u32>(S3));
        arg0->word_3dc = u32(arg0->word_3d0);
        r2 = arg0->word_3d4;
        arg0->word_3e0 = u32(r2);
        goto L_213a14;
    }
    *gptr<u32>(r0 + 0x3d8u) = u32(*gptr<u32>(r0 + 0x3ccu));  // (from the original)
    *gptr<u32>(r0 + 0x3dcu) = u32(*gptr<u32>(r0 + 0x3d0u));  // (from the original)
    r2 = *gptr<u32>(r0 + 0x3d4u);  // (from the original)
    *gptr<u32>(r0 + 0x3e0u) = u32(r2);  // (from the original)
    *gptr<u8>(r0 + 0x3f7u) = u8(1u);  // (from the original)
    goto L_213a14;
L_2139b4:;
    S3 = std::bit_cast<float>(*gptr<u32>(0x213a80u)) / S0;  // (from the original)
    r1 = r0 + 0x3d8u;  // (from the original)
    S1 = (S2 - std::bit_cast<float>(*gptr<u32>(r0 + 0x3dcu))) * S3;  // (from the original)
    S2 = (std::bit_cast<float>(*gptr<u32>(r0 + 0x3d4u)) - std::bit_cast<float>(*gptr<u32>(r0 + 0x3e0u))) * S3;  // (from the original)
    *gptr<u32>(r0 + 0x3d8u) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r0 + 0x3d8u)) + (std::bit_cast<float>(*gptr<u32>(r0 + 0x3ccu)) - std::bit_cast<float>(*gptr<u32>(r0 + 0x3d8u))) * S3));  // (from the original)
    *gptr<u32>(r1 + 4u) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r0 + 0x3dcu)) + S1));  // (from the original)
    *gptr<u32>(r1 + 8u) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r1 + 8u)) + S2));
L_213a14:;
    S0 = std::bit_cast<float>(*gptr<u32>(r0 + 0x3c8u));  // (from the original)
    S6 = std::bit_cast<float>(*gptr<u32>(r0 + 0x3bcu)) * S0;  // (from the original)
    r1 = r0 + 0x3d8u;  // (from the original)
    S3 = std::bit_cast<float>(*gptr<u32>(r1));
    S4 = std::bit_cast<float>(*gptr<u32>(r1 + 4));
    S5 = std::bit_cast<float>(*gptr<u32>(r1 + 8));
    r1 = r13 + 4u;
    S2 = S3 - float(s32(std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*gptr<u32>(r0 + 0x3b8u)) * S0)))));  // (from the original)
    S1 = S5 - float(s32(std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*gptr<u32>(r0 + 0x3c0u)) * S0)))));  // (from the original)
    S0 = S4 - float(s32(std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(S6)))));
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r1) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r1 + 4) = u32(std::bit_cast<u32>(S1));
    r1 = r13;
    r0 = *gptr<u32>(r0 + 0x31cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    r0 = call_004b71c8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
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
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 fpsr = guest::cpu()->fpscr;
    float S0 = 0;
    float S1 = 0;
    guest::cpu()->r[13] -= 0xcu;  // (from the original)
    r4 = r0;
    S1 = std::bit_cast<float>(arg1->word_3d0);
    S0 = std::bit_cast<float>(arg0->word_3d0);
    r0 = r1;
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1, S0);  // (from the original)
    if (!(fpsr >> 0x1e & 1 || fpsr >> 0x1f != (fpsr >> 0x1c & 1))) {  // (from the original)
        arg1->word_52c = u32(r4);
        r2 = arg0->word_528;
        r1 = r4 + 0x528u;  // (from the original)
        if (r2 != 0) {
            *gptr<u32>(r2 + 0x52cu) = u32(r0);  // (from the original)
            r1 = arg0->word_528;
            arg1->word_528 = u32(r1);
        }
        *gptr<u32>(r4 + 0x528u) = u32(r0);  // (from the original)
        guest::cpu()->r[13] += 0xcu;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r2 = *gptr<u32>(r4 + 0x52cu);  // (from the original)
    r5 = r4 + 0x52cu;  // (from the original)
    if (r2 == 0) {
        *gptr<u32>(r4 + 0x52cu) = u32(r0);  // (from the original)
        goto L_213bc4;
    }
    r0 = r2;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00213b54(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    *gptr<u32>(r5) = u32(r0);
L_213bc4:;
    *gptr<u32>(r0 + 0x528u) = u32(r4);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] += 0xcu;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00213b54
GUEST_EXPORT(0x00213b54, d_00213b54::f_00213b54);

// f_00214e88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00214e88 {

inline constexpr guest::Function<0x00281cc8, u32(u32, u32, u32, u32)> call_00281cc8;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x004ee524, u32(u32, u32, u32, u32)> call_004ee524;  // (from the original)
inline constexpr guest::Function<0x005896c4, u32(u32, u32, u32, u32)> call_005896c4;  // (from the original)
inline constexpr guest::Function<0x006d1f38, u32(u32, u32, u32, u32)> call_006d1f38;  // (from the original)
inline constexpr guest::Function<0x0071e9e8, u32(u32, u32, u32, u32)> call_0071e9e8;  // (from the original)

u32 f_00214e88(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    r0 = 0x10u;  // (from the original)
    r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (*gptr<u32>(0x950058u) != 0) {  // (from the original)
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0x80u;  // (from the original)
    r0 = call_006d1f38(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_005896c4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_00281cc8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = call_0071e9e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_004ee524(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 1u) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0x63u;  // (from the original)
    r0 = call_006d1f38(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0x7bu;  // (from the original)
    r0 = call_006d1f38(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = u32(*gptr<u8>(0x94f7e1u));  // (from the original)
    if (r0 != 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0x5cu) {  // (from the original)
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = u32(*gptr<u8>(0x94fd80u));  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00214e88
GUEST_EXPORT(0x00214e88, d_00214e88::f_00214e88);

// f_002161a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002161a4 {

inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> call_00305f2c;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32, u32)> call_0062512c;  // (from the original)

u32 f_002161a4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 b = 0;
    u32 ea = 0;
    u32 sco = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    u32 cf = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00305f2c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 2u) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 0u;
    r1 = 0xau;  // (from the original)
    *gptr<u32>(r13) = u32(r0);
    *gptr<u8>(r13 + 4u) = u8(r1);
    guest::cpu()->r[13] = r13;
    r0 = call_00305f44(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 1u;
    r0 = u32(*gptr<u8>(0x8461b4u + r0));  // (from the original)
    r1 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0062512c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = *gptr<u32>(0x2088u + r4);  // (from the original)
    if (r0 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 0u;
    r12 = 1u;
    r2 = r4 + 0x2084u;  // (from the original)
L_216204:;
    r3 = r0 & 0xffu;  // (from the original)
    r1 = *gptr<u32>(r2);
    cf = r1 >= r0;
    if (!cf || u32(r1 == r0)) {
        r1 = *gptr<u32>(r2 + 4u);
        goto L_216228;
    }
    r1 = *gptr<u32>(r2 + 4u) + (r0 * 0xa7u << 2);  // (from the original)
L_216228:;
    r4 = u32(*gptr<u8>(0x94ed72u));  // (from the original)
    ea = r1 + 0x298u;  // (from the original)
    *gptr<u8>(ea) = u8(r0);
    sco = cf;
    b = lsl_rc(r12, r3 & 0xff, &sco);  // (from the original)
    if ((r4 & b) == 0) {
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    zf = r3 == 0;
    ea = r1 + 0x29bu;  // (from the original)
    r1 = ea;
    r3 = u32(*gptr<u8>(ea));
    r0 = r0 + 1u;
    if (zf) {
        r3 = r3 & ~1u;
    } else {
        r3 = r3 | 1u;
    }
    *gptr<u8>(r1) = u8(r3);
    if (r0 < 4u) {
        guest::preempt();
        goto L_216204;
    }
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
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
    r13 = r13 - 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00569dc4(r0, r1, r2, r3);
    *gptr<u32>(r13 + 4u) = u32(0x2170f4u);  // (from the original)
    *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
    r2 = *gptr<u32>(r0 + 4u);
    r0 = 0x98a30cu;  // (from the original)
    r1 = r13;
    r3 = 0x80u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056a974(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002170bc
GUEST_EXPORT(0x002170bc, d_002170bc::f_002170bc);

// f_002198b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002198b4 {

inline constexpr guest::Function<0x00250438, u32(u32, u32, u32, u32)> call_00250438;  // (from the original)
inline constexpr guest::Function<0x002504d4, u32(u32, u32, u32, u32)> call_002504d4;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x00583be8, u32(u32, u32, u32, u32)> call_00583be8;  // (from the original)

u32 f_002198b4(u32 r0, u32 r1, u32 r2, float S0, float S1, float S2, float S3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r5 = r0;
    r6 = r1;
    r4 = r2;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    r1 = r0;
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_002f74e0(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    zf = r0 == 0;
    r0 = r4 + (r4 << 1);
    r7 = 0x94f234u;  // (from the original)
    r4 = r5 + (r4 << 2);
    r1 = r5 + (r0 << 2) + 0x59cu;  // (from the original)
    r5 = r5 + (r0 << 5) + 0x5e4u;  // (from the original)
    if (zf) {
        goto L_219988;
    }
    r0 = *gptr<u32>(0x94edd8u);  // (from the original)
    if (r0 == 0) {
        goto L_219974;
    }
    S2 = std::bit_cast<float>(*gptr<u32>(r1));
    r1 = r1 + 4u;
    r2 = r13 + 4u;
    S0 = std::bit_cast<float>(*gptr<u32>(r1));
    S1 = std::bit_cast<float>(*gptr<u32>(r1 + 4));
    r1 = r13;
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r2) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r2 + 4) = u32(std::bit_cast<u32>(S1));
    r0 = *gptr<u32>(r0 + 0x1a4u);  // (from the original)
    S3 = std::bit_cast<float>(*gptr<u32>(r0 + 0x24u));  // (from the original)
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S2 + S3));
    S2 = std::bit_cast<float>(*gptr<u32>(r0 + 0x28u));  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(S0 + S2));
    S0 = std::bit_cast<float>(*gptr<u32>(r0 + 0x2cu));  // (from the original)
    r0 = r5;
    S0 = S1 + S0;
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_00250438(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_00583be8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    if (r0 == 0) {
        goto L_219974;
    }
    r1 = 0x1000794u;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_002504d4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
L_219974:;
    ea = r7 + 0x1cu;  // (from the original)
    r0 = *gptr<u32>(ea);
    ea = r4 + 0x7c4u;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 0x14u) = u32(r6);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_219988:;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_00250438(r0, r1, r2, guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r0 = *gptr<u32>(r7 + 0x1cu);  // (from the original)
    *gptr<u32>(r4 + 0x7c4u) = u32(r0);  // (from the original)
    res = 0xfefff86bu + r6;  // (from the original)
    r1 = res;
    if (res == 0) {
        r0 = 0x1000799u;  // (from the original)
        goto L_2199c8;
    }
    if (r1 == 1u) {
        r0 = 0x100079au;  // (from the original)
        goto L_2199c8;
    }
    if (r1 == 2u) {
        r0 = 0x100079bu;  // (from the original)
        *gptr<u32>(r4 + 0x7d8u) = u32(r0);  // (from the original)
    }
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_2199c8:;
    *gptr<u32>(r4 + 0x7d8u) = u32(r0);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
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
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    r1 = 0x8edd1cu;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(r1);
    arg0->word_28 = u32(r1 + 0x6cu);  // (from the original)
    r1 = 0x8ef284u;  // (from the original)
    r2 = 0x518u;  // (from the original)
    arg0->word_10fc = u32(0x8ee228u);  // (from the original)
    r4 = r0 + 0x1494u;  // (from the original)
    arg0->word_1578 = u32(r1 + 0x44u);  // (from the original)
    arg0->word_1494 = u32(r1);
    r1 = 0x2e0b3cu;  // (from the original)
    r3 = 2u;
    r0 = r4 + 0x118u;  // (from the original)
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
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xe8u;  // (from the original)
    r0 = call_002f7710(r0, r1, r2, r3);
    r1 = 0x2b6ef8u;  // (from the original)
    r4 = r0 - 0x1018u;  // (from the original)
    r3 = 6u;
    r2 = 0xe0u;  // (from the original)
    r0 = r0 - 0x540u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0xa08u;  // (from the original)
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc4u;  // (from the original)
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc4u;  // (from the original)
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc4u;  // (from the original)
    r0 = call_005e3194(r0, r1, r2, r3);
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
    r0 = r0 - 0x248u;  // (from the original)
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 8u;
    r0 = r0 - 0x50u;  // (from the original)
    return call_006aaa30(r0, r1, r2, r3);
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
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x160u;  // (from the original)
    r5 = r1;
    r7 = r0 + 0xc274u;  // (from the original)
    r8 = 1u;
    arg0->byte_c833 = u8(r8);
    r1 = r5;
    r0 = r4 + 0x4cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0071ecc4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5;
    if (r0 != 0) {
        r0 = r4 + 0x4cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002cbccc(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        goto L_21d074;
    }
    r0 = r4 + 0x3cf4u;  // (from the original)
    r6 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00718c0c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_21d074;
    }
    r1 = r5;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0026e250(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_21d074:;
    *gptr<u32>(r7 + 0x590u) = u32(r0);  // (from the original)
    r1 = r13 + 0x12cu;  // (from the original)
    r0 = r4 + 0xc15cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0071af4c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r7 + 0xdcu;  // (from the original)
    *gptr<u32>(r0 + 0x4d4u) = u32(*gptr<u32>(r13 + 0x12cu));  // (from the original)
    *gptr<u32>(r0 + 0x4d8u) = u32(*gptr<u32>(r13 + 0x130u));  // (from the original)
    *gptr<u32>(r0 + 0x4dcu) = u32(*gptr<u32>(r13 + 0x134u));  // (from the original)
    r1 = r5;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0071348c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r4 = r0;
    *gptr<u8>(r7 + 0x5beu) = u8(r8);  // (from the original)
    r2 = 0u;
    r1 = r4;
    r0 = r13 + 0xd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7f4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_005e8498(r0, r1, r2, r3);
    *gptr<u32>(r13 + 0xd0u) = u32(0x909f18u);  // (from the original)
    r6 = r13 + 0x138u;  // (from the original)
    r5 = 0u;
    r3 = 6u;
    r1 = *gptr<u32>(0x848f44u + 4);  // (from the original)
    r2 = *gptr<u32>(0x848f44u + 8);  // (from the original)
    *gptr<u32>(r6) = u32(*gptr<u32>(0x848f44u));  // (from the original)
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
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0030b6b8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_004de5d4(r0, r1, r2, r3);
    *gptr<u32>(r13 + 8u) = u32(7u);
    if (r0 == 0) {
        r2 = 0x32u;  // (from the original)
    } else {
        r2 = 0x19u;  // (from the original)
    }
    r3 = 0u;
    r1 = r13 + 0x138u;  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r13) = u32(r5);
    *gptr<u32>(r13 + 4u) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_005e34c4(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r5);
    *gptr<u32>(r13 + 4) = u32(r8);
    r6 = r13 + 0x10u;  // (from the original)
    r0 = r13 + 0x30u;  // (from the original)
    r3 = 0u;
    r2 = 0xbu;  // (from the original)
    r1 = r13 + 0x138u;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_005e34c4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r5 = 2u;
    r2 = 1u;
    r1 = r5;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_005e49c0(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
L_21d1ac:;
        r1 = r4;
        r2 = r6 + (r4 << 5);
        r0 = r7;
        guest::cpu()->r[13] = r13;
        r0 = call_005e4994(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(r5));
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_005e4988(r0, r1, r2, r3);
    r3 = 0u;
    r2 = r3;
    r1 = r3;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_005d4a78(r0, r1, r2, r3);
    r1 = 0x5e3618u;  // (from the original)
    r3 = 6u;
    r2 = 0x20u;  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x160u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r1 = 0x8edd9cu;  // (from the original)
    r13 = r13 - 8;
    r2 = r1 + 0x6cu;  // (from the original)
    arg0->word_0 = u32(r1);
    arg0->word_28 = u32(r2);
    r1 = 0x8f47a0u;  // (from the original)
    arg0->word_ced8 = u32(r1);
    r0 = r0 + 0xd2f4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x15cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x24cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc88u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e8a7c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f08acu;  // (from the original)
    ea = r0 - 0x118u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    r0 = ea;
    guest::cpu()->r[13] = r13;
    r0 = call_002f7710(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x8468u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0026fe3c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0x8f2674u;  // (from the original)
    r0 = r0 - 0x3ca8u;  // (from the original)
    *gptr<u32>(r0 + 0xa40u) = u32(r2 + 0x30u);  // (from the original)
    r1 = 0x8f2a0cu;  // (from the original)
    *gptr<u32>(r0) = u32(r2);
    r0 = r0 + 0x3ac0u;  // (from the original)
    r2 = r1 + 0x10u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 0xcu;  // (from the original)
    *gptr<u32>(r0) = u32(r2);
    r0 = r0 + 0x1acu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x140u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0022c5d8(r0, r1, r2, r3);
    r4 = r0 - 0x3ac0u;  // (from the original)
    r1 = 0x2b950cu;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x36cu;  // (from the original)
    r0 = r0 - 0x2238u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002684c0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r13 = r13 + 8;
    r0 = r0 - 0x4cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_006aaa30(r0, r1, r2, r3);
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
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = r0 + 0xc8u;  // (from the original)
    r0 = call_00718d98(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r5;
    if (r0 != 0) {
        r0 = r4 + 0xc8u;  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_00274394(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0 = r4 + 0x2cbcu;  // (from the original)
    r4 = r0;
    r0 = call_00723f84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r1 = r5;
        r0 = r4;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_00320548(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    r3 = 0x8ede1cu;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r4 = 0x8f08acu;  // (from the original)
    r1 = r3 + 0x170u;  // (from the original)
    r2 = r3 + 0x6cu;  // (from the original)
    arg0->word_a4 = u32(r1);
    arg0->word_28 = u32(r2);
    arg0->word_0 = u32(r3);
    r0 = r0 + 0x5fe8u;  // (from the original)
    arg0->word_5fe8 = u32(r4);
    r0 = call_002f7710(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc64u;  // (from the original)
    r0 = call_005e8a7c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f47a0u;  // (from the original)
    *gptr<u32>(r0 - 0x4f0u) = u32(r1);  // (from the original)
    r0 = r0 - 0xd4u;  // (from the original)
    r0 = call_005e3194(r0, r1, r2, r3);
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
    r0 = r0 - 0x15cu;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x24cu;  // (from the original)
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = 0x8f47ecu;  // (from the original)
    r3 = 0x213cu;  // (from the original)
    r0 = r0 - 0x21fcu;  // (from the original)
    r2 = r1 + 0x28u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r3 + r0) = u32(r2);
    r0 = r0 + 0x21b0u;  // (from the original)
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
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f4828u;  // (from the original)
    r0 = r0 - 0x2160u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 0x201cu;  // (from the original)
    *gptr<u32>(r0) = u32(r4);
    r0 = call_002f7710(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = 0x8ee248u;  // (from the original)
    r2 = r1 + 0x10u;  // (from the original)
    *gptr<u32>(r0 - 0x134u) = u32(r2);  // (from the original)
    *gptr<u32>(r0 - 0x140u) = u32(r1);  // (from the original)
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
    r0 = r0 - 0x2cu;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = 0x2e3854u;  // (from the original)
    r4 = r0 - 0x1efcu;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x2b4u;  // (from the original)
    r0 = r0 - 0x1b28u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x3a8u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x150u;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x248u;  // (from the original)
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x2c04u;  // (from the original)
    r0 = call_0027460c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xa0u;  // (from the original)
    r0 = call_003170d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 8u;
    r0 = r0 - 0x28u;  // (from the original)
    return call_006aaa30(r0, r1, r2, r3);
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
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r1;
    r6 = r0 + 0xb000u;  // (from the original)
    r4 = r0;
    r0 = arg0->word_b2f4;
    r1 = *gptr<u32>(0x94fc50u + (r5 << 2));  // (from the original)
    r2 = 1u;
    r0 = call_004b4fc0(r0, r1, r2, r3);
    r12 = *gptr<u32>(r6 + 0x2f4u);  // (from the original)
    r1 = r4 + (r5 + (r5 << 2) << 3);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r2 = r0;
    r1 = r1 + 0xb2fcu;  // (from the original)
    r3 = 0u;
    r0 = r12;
    return call_00568984(r0, r1, r2, r3);
}

}  // namespace d_0021fe04
GUEST_EXPORT(0x0021fe04, d_0021fe04::f_0021fe04);
