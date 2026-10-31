// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_00130054: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00130054 {

inline constexpr guest::Function<0x00128c0c, u32(u32, u32, u32, u32)> call_00128c0c;  // (from the original)

u32 f_00130054() {
    return call_00128c0c(0x97d7e0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00130054
GUEST_EXPORT(0x00130054, d_00130054::f_00130054);

// f_00130060: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00130060 {

inline constexpr guest::Function<0x0012ef20, u32(u32, u32, u32, u32)> call_0012ef20;  // (from the original)

u32 f_00130060() {
    return call_0012ef20(0x97d7e0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00130060
GUEST_EXPORT(0x00130060, d_00130060::f_00130060);

// f_0013010c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013010c {

inline constexpr guest::Function<0x0012efe8, u32(u32, u32, u32, u32)> call_0012efe8;  // (from the original)

u32 f_0013010c() {
    return call_0012efe8(0x97d7e0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0013010c
GUEST_EXPORT(0x0013010c, d_0013010c::f_0013010c);

// f_001306e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001306e0 {

inline guest::global<u8, 0x0097d800> global_0097d800;  // (from the original)
inline constexpr guest::Function<0x00130750, u32(u32, u32, u32, u32)> call_00130750;  // (from the original)
inline constexpr guest::Function<0x0013078c, u32(u32, u32, u32, u32)> call_0013078c;  // (from the original)
inline constexpr guest::Function<0x001307c8, u32(u32, u32, u32, u32)> call_001307c8;  // (from the original)
inline constexpr guest::Function<0x00136598, u32(u32, u32, u32, u32)> call_00136598;  // (from the original)

u32 f_001306e0(u32 r0_unused, u32 r1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 res_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 res_2 = 0;
    u32 r1_1 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    r0_1 = u32(*gptr<u8>(0x97d800u + 1u));  // (from the original)
    if (r0_1 == 0) {
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r0_2 = r13;
    guest::cpu()->r[13] = r13;
    r0_3 = call_001307c8(r0_2, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    res_1 = r0_3 & 0x80000000u;  // (from the original)
    if (res_1 >> 0x1f) {  // (from the original)
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = res_1;
        guest::cpu()->r[13] = r13;
        return r0_3;
    }
    r0_4 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_5 = call_00130750(r0_4, res_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    res_2 = r0_5 & 0x80000000u;  // (from the original)
    if (res_2 >> 0x1f) {  // (from the original)
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = res_2;
        guest::cpu()->r[13] = r13;
        return r0_5;
    }
    r1_1 = u32(*gptr<u8>(r13 + 4u));
    *global_0097d800 = u8(u32(*gptr<u8>(r13)) | r1_1);
    guest::cpu()->r[13] = r13;
    r0_6 = call_00136598(0u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = 0xc9405001u;  // (from the original)
    if (r0_6 == r1_2) {
        guest::cpu()->r[13] = r13;
        r0_6 = call_0013078c(0u, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_6;
}

}  // namespace d_001306e0
GUEST_EXPORT(0x001306e0, d_001306e0::f_001306e0);

// f_00130c70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00130c70 {

struct __attribute__((packed)) Object_00130c70_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Object_00130c70_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00130c70_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00130c70_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00130c70_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00130c70_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00130c70_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00130c70_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_00130c70_0, word_1c, 0x1c);  // (from the original)

inline guest::global<u32, 0x00130ca8> global_00130ca8;  // (from the original)

void f_00130c70(gptr<Object_00130c70_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    float S0_1 = 0;
    r3_1 = r0 + 8u;
    arg0->word_0 = u32(0x901b9cu);  // (from the original)
    r1_1 = r0 + 4u;
    S0_1 = std::bit_cast<float>(*global_00130ca8);
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(r3_1);
    arg0->word_10 = u32(0u);
    arg0->word_c = u32(r3_1);
    arg0->word_14 = u32(0u);
    arg0->word_18 = u32(std::bit_cast<u32>(S0_1));
    arg0->word_1c = u32(std::bit_cast<u32>(S0_1));
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    return;
}

}  // namespace d_00130c70
GUEST_EXPORT(0x00130c70, d_00130c70::f_00130c70);

// f_00130d6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00130d6c {

struct __attribute__((packed)) Object_00130d6c_0 {
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
    u32 word_30;
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
    u32 word_64;
    u32 word_68;
    u32 word_6c;
    u32 word_70;
    u32 word_74;
    u32 word_78;
    u32 word_7c;
    u32 word_80;
    u32 word_84;
    u32 word_88;
    u32 word_8c;
    u32 word_90;
    u32 word_94;
    u32 word_98;
    u32 word_9c;
    u32 word_a0;
    u32 word_a4;
    u32 word_a8;
    u32 word_ac;
    u32 word_b0;
    u32 word_b4;
    u32 word_b8;
    u32 word_bc;
    u32 word_c0;
    u32 word_c4;
    u32 word_c8;
    u32 word_cc;
    u32 word_d0;
    u32 word_d4;
    u8 unknown_d8[0x18];  // (not used here)
    u32 word_f0;
    u32 word_f4;
    u32 word_f8;
    u32 word_fc;
    u32 word_100;
    u32 word_104;
    u32 word_108;
    u32 word_10c;
    u32 word_110;
    u32 word_114;
};
GUEST_OFFSET(Object_00130d6c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_44, 0x44);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_48, 0x48);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_4c, 0x4c);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_50, 0x50);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_54, 0x54);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_58, 0x58);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_5c, 0x5c);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_60, 0x60);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_64, 0x64);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_68, 0x68);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_6c, 0x6c);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_70, 0x70);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_74, 0x74);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_78, 0x78);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_7c, 0x7c);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_80, 0x80);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_84, 0x84);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_88, 0x88);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_8c, 0x8c);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_90, 0x90);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_94, 0x94);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_98, 0x98);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_9c, 0x9c);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_a0, 0xa0);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_a4, 0xa4);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_a8, 0xa8);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_ac, 0xac);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_b0, 0xb0);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_b4, 0xb4);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_b8, 0xb8);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_bc, 0xbc);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_c0, 0xc0);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_c4, 0xc4);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_c8, 0xc8);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_cc, 0xcc);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_d0, 0xd0);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_d4, 0xd4);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_f0, 0xf0);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_f4, 0xf4);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_f8, 0xf8);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_fc, 0xfc);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_100, 0x100);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_104, 0x104);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_108, 0x108);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_10c, 0x10c);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_110, 0x110);  // (from the original)
GUEST_OFFSET(Object_00130d6c_0, word_114, 0x114);  // (from the original)


void f_00130d6c(gptr<Object_00130d6c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r12_1 = 0;
    u32 r3_1 = 0;
    u32 r12_2 = 0;
    u32 r3_2 = 0;
    u32 r12_3 = 0;
    u32 r3_3 = 0;
    u32 r12_4 = 0;
    u32 r3_4 = 0;
    u32 r12_5 = 0;
    u32 r2_1 = 0;
    arg0->word_0 = u32(0x901f04u);  // (from the original)
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(0x901ef0u);  // (from the original)
    arg0->word_c = u32(r0);
    arg0->word_10 = u32(0u);
    arg0->word_14 = u32(0u);
    arg0->word_18 = u32(0u);
    arg0->word_1c = u32(0u);
    arg0->word_20 = u32(0u);
    r12_1 = r0 + 0x2cu;  // (from the original)
    arg0->word_24 = u32(0u);
    arg0->word_28 = u32(0u);
    arg0->word_2c = u32(r12_1);
    arg0->word_30 = u32(r12_1);
    r3_1 = r0 + 0x38u;  // (from the original)
    arg0->word_34 = u32(0u);
    arg0->word_38 = u32(r3_1);
    r12_2 = r0 + 0x58u;  // (from the original)
    arg0->word_44 = u32(0u);
    arg0->word_3c = u32(r3_1);
    arg0->word_48 = u32(0u);
    arg0->word_40 = u32(0x902060u);  // (from the original)
    arg0->word_4c = u32(0u);
    arg0->word_50 = u32(0u);
    arg0->word_54 = u32(0u);
    arg0->word_58 = u32(r12_2);
    arg0->word_5c = u32(r12_2);
    r3_2 = r0 + 0x64u;  // (from the original)
    arg0->word_60 = u32(0u);
    arg0->word_64 = u32(r3_2);
    r12_3 = r0 + 0x78u;  // (from the original)
    arg0->word_6c = u32(0u);
    arg0->word_68 = u32(r3_2);
    arg0->word_70 = u32(0u);
    arg0->word_74 = u32(0u);
    arg0->word_78 = u32(r12_3);
    arg0->word_7c = u32(r12_3);
    r3_3 = r0 + 0x84u;  // (from the original)
    arg0->word_80 = u32(0u);
    arg0->word_84 = u32(r3_3);
    r12_4 = r0 + 0xa4u;  // (from the original)
    arg0->word_90 = u32(0u);
    arg0->word_88 = u32(r3_3);
    arg0->word_94 = u32(0u);
    arg0->word_8c = u32(0x902048u);  // (from the original)
    arg0->word_98 = u32(0u);
    arg0->word_9c = u32(0u);
    arg0->word_a0 = u32(0u);
    arg0->word_a4 = u32(r12_4);
    arg0->word_a8 = u32(r12_4);
    r3_4 = r0 + 0xb0u;  // (from the original)
    arg0->word_ac = u32(0u);
    arg0->word_b0 = u32(r3_4);
    arg0->word_b8 = u32(0u);
    arg0->word_b4 = u32(r3_4);
    r12_5 = r0 + 0xc4u;  // (from the original)
    arg0->word_bc = u32(0u);
    arg0->word_c0 = u32(0u);
    arg0->word_c4 = u32(r12_5);
    arg0->word_c8 = u32(r12_5);
    r2_1 = r0 + 0xd0u;  // (from the original)
    arg0->word_cc = u32(0u);
    arg0->word_d0 = u32(r2_1);
    arg0->word_f0 = u32(0u);
    arg0->word_d4 = u32(r2_1);
    arg0->word_f8 = u32(r0 + 0x100u);  // (from the original)
    arg0->word_fc = u32(0u);
    arg0->word_100 = u32(0x902454u);  // (from the original)
    arg0->word_f4 = u32(0x902424u);  // (from the original)
    arg0->word_104 = u32(0u);
    arg0->word_108 = u32(0u);
    arg0->word_10c = u32(0u);
    arg0->word_110 = u32(0u);
    arg0->word_114 = u32(0u);
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_00130d6c
GUEST_EXPORT(0x00130d6c, d_00130d6c::f_00130d6c);

// f_0013121c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013121c {

inline guest::global<u32, 0x00131278> global_00131278;  // (from the original)
inline constexpr guest::Function<0x00135134, u32(u32, u32, u32, u32)> call_00135134;  // (from the original)

u32 f_0013121c(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r0_1 = 0;
    float S0_1 = 0;
    u32 r3_1 = 0;
    guest::cpu()->r[13] -= 8u;
    guest::cpu()->s[0] = S0;
    r0_1 = call_00135134(r0, r1, r2, r3);
    S0_1 = std::bit_cast<float>(*global_00131278);
    *gptr<u32>(r0_1) = u32(0x8f7210u);  // (from the original)
    *gptr<u8>(r0_1 + 0x12u) = u8(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0x13u) = u8(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0x14u) = u8(0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x18u) = u32(0x8eb474u);  // (from the original)
    *gptr<u32>(r0_1 + 0x1cu) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r0_1 + 0x20u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r0_1 + 0x24u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    r3_1 = ~0u;
    *gptr<u32>(r0_1 + 0x2cu) = u32(0x8eb474u);  // (from the original)
    *gptr<u32>(r0_1 + 0x28u) = u32(r3_1);  // (from the original)
    *gptr<u32>(r0_1 + 0x30u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r0_1 + 0x34u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r0_1 + 0x38u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r0_1 + 0x3cu) = u32(r3_1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0u;
    guest::cpu()->s[0] = S0_1;
    return r0_1;
}

}  // namespace d_0013121c
GUEST_EXPORT(0x0013121c, d_0013121c::f_0013121c);

// f_00131580: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00131580 {

inline constexpr guest::Function<0x00137848, u32(u32, u32, u32, u32)> call_00137848;  // (from the original)
inline constexpr guest::Function<0x0013bb80, u32(u32, u32, u32, u32)> call_0013bb80;  // (from the original)
inline constexpr guest::Function<0x0013bc00, u32(u32, u32, u32, u32)> call_0013bc00;  // (from the original)

u32 f_00131580(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
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
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r0_27 = 0;
    u32 r0_28 = 0;
    u32 r0_29 = 0;
    u32 r0_30 = 0;
    u32 r0_31 = 0;
    r0_1 = r0 + 0x7e8u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r0_2 = call_00137848(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_3 = r0_2 - 0x164u;  // (from the original)
    r0_4 = call_0013bc00(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_5 = r0_4 - 0x10u;  // (from the original)
    r0_6 = call_0013bb80(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_7 = r0_6 - 0x24u;  // (from the original)
    r0_8 = call_00137848(r0_7, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_9 = r0_8 - 0x164u;  // (from the original)
    r0_10 = call_0013bc00(r0_9, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_11 = r0_10 - 0x10u;  // (from the original)
    r0_12 = call_0013bb80(r0_11, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_13 = r0_12 - 0x24u;  // (from the original)
    r0_14 = call_00137848(r0_13, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_15 = r0_14 - 0x164u;  // (from the original)
    r0_16 = call_0013bc00(r0_15, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_17 = r0_16 - 0x10u;  // (from the original)
    r0_18 = call_0013bb80(r0_17, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_19 = r0_18 - 0x24u;  // (from the original)
    r0_20 = call_00137848(r0_19, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_21 = r0_20 - 0x164u;  // (from the original)
    r0_22 = call_0013bc00(r0_21, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_23 = r0_22 - 0x10u;  // (from the original)
    r0_24 = call_0013bb80(r0_23, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_25 = r0_24 - 0x24u;  // (from the original)
    r0_26 = call_00137848(r0_25, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_27 = r0_26 - 0x164u;  // (from the original)
    r0_28 = call_0013bc00(r0_27, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_29 = r0_28 - 0x10u;  // (from the original)
    r0_30 = call_0013bb80(r0_29, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_31 = r0_30 - 0x14u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0_31;
}

}  // namespace d_00131580
GUEST_EXPORT(0x00131580, d_00131580::f_00131580);

// f_001316b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001316b8 {

struct __attribute__((packed)) Object_001316b8_0 {
    u8 unknown_0[0x4c];  // (not used here)
    u8 byte_4c;
};
GUEST_OFFSET(Object_001316b8_0, byte_4c, 0x4c);  // (from the original)


u32 f_001316b8(gptr<Object_001316b8_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r2_1 = 0;
    if (u32(arg0->byte_4c) == 0) {
        return 0u;
    }
    r2_1 = *gptr<u32>(*gptr<u32>(r0) + 0x28u);  // (from the original)
    return guest::call_address<u32>(r2_1, r0, guest::cpu()->r[1], r2_1, guest::cpu()->r[3]);
}

}  // namespace d_001316b8
GUEST_EXPORT(0x001316b8, d_001316b8::f_001316b8);

// f_001316d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001316d8 {

struct __attribute__((packed)) Object_001316d8_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
};
GUEST_OFFSET(Object_001316d8_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_001316d8_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_001316d8_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_001316d8_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_001316d8_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_001316d8_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_001316d8_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_001316d8_0, word_2c, 0x2c);  // (from the original)

inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)
inline guest::global<u32, 0x00975338> global_00975338;  // (from the original)
inline constexpr guest::Function<0x00132174, u32(u32, u32, u32, u32)> call_00132174;  // (from the original)
inline constexpr guest::Function<0x00137c78, u32(u32, u32, u32, u32)> call_00137c78;  // (from the original)
inline constexpr guest::Function<0x00138fec, u32(u32, u32, u32, u32)> call_00138fec;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)

u32 f_001316d8(gptr<Object_001316d8_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r3_1 = 0;
    u32 r0_5 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r6_1 = 0;
    u32 r2_2 = 0;
    u32 r1_3 = 0;
    r0_1 = r0 + 0x10u;  // (from the original)
    r13 = r13 - 0x18u;  // (from the original)
    arg0->word_14 = u32(r0_1);
    arg0->word_18 = u32(0u);
    r1_1 = r0 + 0x20u;  // (from the original)
    arg0->word_10 = u32(r0_1);
    r0_2 = r0 + 0x1cu;  // (from the original)
    arg0->word_20 = u32(r0_2);
    arg0->word_24 = u32(0u);
    arg0->word_1c = u32(r0_2);
    arg0->word_28 = u32(0u);
    arg0->word_2c = u32(0u);
    r0_3 = *global_00975338;
    if (r0_3 != 0) {
        guest::cpu()->r[13] = r13;
        r0_4 = call_00138fec(r0_3, r0, r2, r3);
        r3_1 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_5 = call_002fd108(0x4cu, r0_4, 4u, r3_1);  // (from the original)
        r2_1 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        r1_2 = r0_5 + 0x18u;  // (from the original)
        *gptr<u32>(r0_5 + 0x10u) = u32(0u);  // (from the original)
        *gptr<u32>(r0_5 + 0x14u) = u32(0u);  // (from the original)
        *gptr<u32>(r1_2) = u32(r0_5);
        *gptr<u32>(r1_2 + 4) = u32(0u);
        guest::cpu()->r[13] = r13;
        r0_6 = call_00132174(r0_5, r1_2, r2_1, r3_2);
        *gptr<u32>(r0_6) = u32(0x904a10u);  // (from the original)
        r0_7 = r0_6 + 0x20u;  // (from the original)
        *gptr<u32>(r0_7 + 4u) = u32(r0_7 + 0xcu);  // (from the original)
        *gptr<u32>(r0_7) = u32(0x90558cu);  // (from the original)
        *gptr<u32>(r0_7 + 8u) = u32(0x20u);  // (from the original)
        r6_1 = u32(*global_008c9f1c);
        *gptr<u8>(0x20u + (*gptr<u32>(r0_7 + 4u) - 1u)) = u8(r6_1);  // (from the original)
        *gptr<u32>(r0_7) = u32(0x905120u);  // (from the original)
        *gptr<u8>(*gptr<u32>(r0_7 + 4u)) = u8(u32(*global_008c9f1c));
        *gptr<u32>(r0_7) = u32(0x9048ecu);  // (from the original)
        r2_2 = r13;
        *gptr<u32>(r0_6) = u32(0x905460u);  // (from the original)
        *gptr<u32>(r0 + 0x28u) = u32(r0_6);  // (from the original)
        *gptr<u32>(r0 + 0x2cu) = u32(r0_6);  // (from the original)
        *gptr<u32>(r13 + 4u) = u32(0x8ae110u);  // (from the original)
        *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
        r1_3 = *gptr<u32>(r0 + 0x2cu);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00137c78(r0, r1_3, r2_2, 0x9047f8u);  // (from the original)
        r1_1 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001316d8
GUEST_EXPORT(0x001316d8, d_001316d8::f_001316d8);

// f_0013187c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013187c {

inline constexpr guest::Function<0x001391c4, u32(u32, u32, u32, u32)> call_001391c4;  // (from the original)

u32 f_0013187c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = r2;
    r4_1 = r1;
    if (r1 != 0 && r1 >> 0x1f == (r1 & (r1 ^ r1)) >> 0x1f) {  // (from the original)
        r0_2 = r4_1 << 2;
        r0_1 = call_001391c4(r0_2, r0_1, r3, 0x8c8484u);  // (from the original)
        r1 = 0u;
        if (r0_1 != 0) {
            *gptr<u32>(r0 + 8u) = u32(r0_1);
            *gptr<u32>(r0) = u32(r1);
            *gptr<u32>(r0 + 4) = u32(r4_1);
        }
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_0013187c
GUEST_EXPORT(0x0013187c, d_0013187c::f_0013187c);

// f_001318c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001318c0 {

struct __attribute__((packed)) Object_001318c0_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_001318c0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001318c0_0, word_4, 0x4);  // (from the original)


void f_001318c0(gptr<Object_001318c0_0> arg0) {
    arg0->word_0 = u32(0x9041f4u);  // (from the original)
    arg0->word_4 = u32(0u);
    guest::cpu()->r[1] = 0x9041f4u;  // (from the original)
    return;
}

}  // namespace d_001318c0
GUEST_EXPORT(0x001318c0, d_001318c0::f_001318c0);

// f_00131a88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00131a88 {

inline guest::global<u32, 0x009753d0> global_009753d0;  // (from the original)
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00138c78, u32(u32, u32, u32, u32)> call_00138c78;  // (from the original)

u32 f_00131a88(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = *global_009753d0 + 0x40u;  // (from the original)
    r0_2 = call_00138c78(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = *gptr<u32>(r0 + 0x24u);  // (from the original)
    if (r1_1 == r0_2) {
        r0_3 = *gptr<u32>(r0 + 0x28u);  // (from the original)
        if (r0_3 != 0 && r0_3 >> 0x1f == (r0_3 & (r0_3 ^ r0_3)) >> 0x1f) {  // (from the original)
            r0_4 = r0_3 + 1u;
            *gptr<u32>(r0 + 0x28u) = u32(r0_4);  // (from the original)
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            return r0_4;
        }
    }
    r0_5 = r0 + 8u;
    call_00135740(r0_5, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_4 = 1u;
    *gptr<u32>(r0 + 0x24u) = u32(r0_2);  // (from the original)
    *gptr<u32>(r0 + 0x28u) = u32(r0_4);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_4;
}

}  // namespace d_00131a88
GUEST_EXPORT(0x00131a88, d_00131a88::f_00131a88);

// f_00131af8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00131af8 {

inline guest::global<u32, 0x009753d0> global_009753d0;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x00138c78, u32(u32, u32, u32, u32)> call_00138c78;  // (from the original)

u32 f_00131af8(u32 r0) {
    u32 r0_1 = 0;
    u32 res_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = *global_009753d0 + 0x40u;  // (from the original)
    call_00138c78(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    res_1 = *gptr<u32>(r0 + 0x28u) - 1u;  // (from the original)
    *gptr<u32>(r0 + 0x28u) = u32(res_1);  // (from the original)
    if (res_1 != 0) {
        guest::cpu()->r[13] += 8u;
        return res_1;
    }
    *gptr<u32>(r0 + 0x24u) = u32(0u);  // (from the original)
    r0_2 = r0 + 8u;
    guest::cpu()->r[13] += 8u;
    return call_00137e84(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00131af8
GUEST_EXPORT(0x00131af8, d_00131af8::f_00131af8);

// f_00131b3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00131b3c {

struct __attribute__((packed)) Object_00131b3c_0 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x20];  // (not used here)
    u8 byte_28;
};
GUEST_OFFSET(Object_00131b3c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00131b3c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00131b3c_0, byte_28, 0x28);  // (from the original)

inline constexpr guest::Function<0x00137c60, u32(u32, u32, u32, u32)> call_00137c60;  // (from the original)
inline constexpr guest::Function<0x00137e9c, u32(u32, u32, u32, u32)> call_00137e9c;  // (from the original)
inline constexpr guest::Function<0x001391d8, u32(u32, u32, u32, u32)> call_001391d8;  // (from the original)

u32 f_00131b3c(gptr<Object_00131b3c_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_3 = 0;
    u32 res_1 = 0;
    u32 r1_4 = 0;
    u32 res_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r6 = 0u;
    arg0->word_0 = u32(r6);
    arg0->word_4 = u32(r6);
    r4 = r0;
    arg0->byte_28 = u8(r6);
    r0_1 = call_001391d8(0x10u, r5, r2, r3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        r0_1 = call_00137c60(r0_1, r1_1, r2_1, r3_1);
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
    }
    *gptr<u32>(r4) = u32(r0_1);
    r0_2 = call_001391d8(0xcu, r5, r2_1, r3_1);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        r0_2 = call_00137e9c(r0_2, r1_2, r2_2, r3_2);
    }
    *gptr<u32>(r4 + 4u) = u32(r0_2);
    r0 = 0u;
L_131b88:;
    r2 = 0u;
    r3 = r4 + 8u + (r0 + (r0 << 1) << 2);
    do {
L_131b98:;
        r1_3 = r4 + 8u;
        if (r0 < 2u) {
            r1_3 = r3;
        }
        if (r2 < 3u) {
            r1_3 = r1_3 + (r2 << 2);
        }
        r2 = r2 + 1u;
        res_1 = r2 - 3u;
        *gptr<u32>(r1_3) = u32(r6);
        guest::preempt();
    } while (res_1 >> 0x1f != ((r2 ^ 3u) & (r2 ^ res_1)) >> 0x1f);  // (from the original)
    r1_4 = r4 + 0x20u;  // (from the original)
    if (r0 < 2u) {
        r1_4 = r1_4 + (r0 << 2);
    }
    r0 = r0 + 1u;
    res_2 = r0 - 2u;
    *gptr<u32>(r1_4) = u32(r6);
    if (res_2 >> 0x1f != ((r0 ^ 2u) & (r0 ^ res_2)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_131b88;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    return r4;
}

}  // namespace d_00131b3c
GUEST_EXPORT(0x00131b3c, d_00131b3c::f_00131b3c);

// f_00131be0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00131be0 {

inline constexpr guest::Function<0x00136e0c, u32(u32, u32, u32, u32)> call_00136e0c;  // (from the original)

u32 f_00131be0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_00136e0c(r0, r1, r2, r3);
    *gptr<u32>(r0_1 + 0x220u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_1) = u32(0x9052d0u);  // (from the original)
    *gptr<u32>(r0_1 + 0xcu) = u32(0x9052d0u + 0x20u);  // (from the original)
    *gptr<u32>(r0_1 + 0x224u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x228u) = u32(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0x22cu) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0u;
    return r0_1;
}

}  // namespace d_00131be0
GUEST_EXPORT(0x00131be0, d_00131be0::f_00131be0);

// f_00131c14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00131c14 {

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x00138560, u32(u32, u32, u32, u32)> call_00138560;  // (from the original)

u32 f_00131c14(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    u32 res_1 = 0;
    u32 r1_1 = 0;
    u32 r5_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    call_00135740(0xae53d4u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r0_1 = r0 + 0x54u;  // (from the original)
    r4_1 = 0u;
    res_1 = u32(*gptr<u16>(r0 + 0x70u)) & 1u;  // (from the original)
    r1_1 = res_1;
    if (res_1 != 0) {
        r1_1 = 1u;
    }
    if (r1_1 != 0) {
        r4_1 = r0_1;
        call_00135740(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r5_1 = r0 + 0x28u;  // (from the original)
    r1_2 = *gptr<u32>(r5_1 + 0xcu) + r1;  // (from the original)
    call_00138560(r5_1, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    *gptr<u32>(r5_1 + 8u) = u32(*gptr<u32>(r5_1 + 8u) + 1u);
    if (r4_1 != 0) {
        call_00137e84(r4_1, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_3 = guest::cpu()->r[1];
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return call_00137e84(0xae53d4u, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00131c14
GUEST_EXPORT(0x00131c14, d_00131c14::f_00131c14);

// f_00131e5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00131e5c {

inline constexpr guest::Function<0x00131dc4, u32(u32, u32, u32, u32)> call_00131dc4;  // (from the original)
inline constexpr guest::Function<0x00131eb8, u32(u32, u32, u32, u32)> call_00131eb8;  // (from the original)

u32 f_00131e5c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    r1_1 = r1 + 3u & ~3u;
    r13 = r13 - 0x18u;  // (from the original)
    if (r1_1 <= 0xa8u) {  // (from the original)
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    if (r0 == 0) {
        r4_1 = 0u;
        goto L_131ea4;
    }
    *gptr<u32>(r13) = u32(r1_1);
    *gptr<u32>(r13 + 4) = u32(1u);
    *gptr<u32>(r13 + 8) = u32(r3);
    guest::cpu()->r[13] = r13;
    r0_1 = call_00131eb8(r0, r2, 0u, r0);
    r1_1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4_1 = r0_1;
L_131ea4:;
    guest::cpu()->r[13] = r13;
    call_00131dc4(r4_1, r1_1, r2, r3);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r4_1;
}

}  // namespace d_00131e5c
GUEST_EXPORT(0x00131e5c, d_00131e5c::f_00131e5c);

// f_00131eb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00131eb8 {

inline constexpr guest::Function<0x00131c8c, u32(u32, u32, u32, u32)> call_00131c8c;  // (from the original)
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)

u32 f_00131eb8(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r12_1 = 0;
    u32 r0_1 = 0;
    u32 r5_2 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 ea_2 = 0;
    u32 r0_3 = 0;
    u32 ea_3 = 0;
    u32 r1_2 = 0;
    u32 res_1 = 0;
    u32 r0_4 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    ea_1 = r13 + 0x18u;  // (from the original)
    r4_1 = *gptr<u32>(ea_1);
    r5_1 = *gptr<u32>(ea_1 + 4);
    r12_1 = *gptr<u32>(ea_1 + 8);
    *gptr<u32>(r13) = u32(r4_1);
    *gptr<u32>(r13 + 4) = u32(r5_1);
    *gptr<u32>(r13 + 8) = u32(r12_1);
    guest::cpu()->r[13] = r13;
    r0_1 = call_00131c8c(r0, r1, r2, guest::cpu()->r[3]);
    r5_2 = 0u;
    r2_1 = 0x905adcu + 0x74u;  // (from the original)
    *gptr<u32>(r0_1) = u32(0x905adcu);  // (from the original)
    *gptr<u32>(r0_1 + 0x18u) = u32(r2_1);  // (from the original)
    *gptr<u8>(r0_1 + 0x74u) = u8(r5_2);  // (from the original)
    r0_2 = r0_1 + 0x78u;  // (from the original)
    r1_1 = ~0u;
    ea_2 = r0_2 + 4u;
    *gptr<u32>(ea_2) = u32(r0_2);
    *gptr<u32>(ea_2 + 4) = u32(r5_2);
    *gptr<u32>(r0_2) = u32(r0_2);
    *gptr<u32>(r0_2 + 0xcu) = u32(r1_1);  // (from the original)
    r0_3 = r0_1 + 0x88u;  // (from the original)
    ea_3 = r0_1 + 0x8cu;  // (from the original)
    *gptr<u32>(ea_3) = u32(r0_3);
    *gptr<u32>(ea_3 + 4) = u32(r5_2);
    *gptr<u32>(r0_1 + 0x88u) = u32(r0_3);  // (from the original)
    *gptr<u32>(r0_1 + 0x94u) = u32(r1_1);  // (from the original)
    r1_2 = r0_1 + 0x54u;  // (from the original)
    res_1 = u32(*gptr<u16>(r0_1 + 0x70u)) & 1u;  // (from the original)
    r0_4 = res_1;
    if (res_1 != 0) {
        r0_4 = 1u;
    }
    if (r0_4 != 0) {
        r5_2 = r1_2;
        guest::cpu()->r[13] = r13;
        call_00135740(r1_2, r1_2, r2_1, guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
    }
    *gptr<u32>(r0_1 + 0x84u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x94u) = u32(0u);  // (from the original)
    if (r5_2 != 0) {
        guest::cpu()->r[13] = r13;
        call_00137e84(r5_2, r1_2, r2_1, guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_00131eb8
GUEST_EXPORT(0x00131eb8, d_00131eb8::f_00131eb8);

// f_00131f64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00131f64 {

struct __attribute__((packed)) Object_00131f64_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_00131f64_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00131f64_0, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x00975338> global_00975338;  // (from the original)
inline guest::global<u32, 0x00ae53b8> global_00ae53b8;  // (from the original)
inline constexpr guest::Function<0x00131e5c, u32(u32, u32, u32, u32)> call_00131e5c;  // (from the original)

u32 f_00131f64(gptr<Object_00131f64_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r5_1 = 0x975338u + 0xcu;  // (from the original)
    ea_1 = 0x975338u + 4u;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    ea_2 = r5_1 + 4u;
    *gptr<u32>(ea_2) = u32(0u);
    r0_1 = arg0->word_0;
    r1_1 = arg0->word_4;
    *gptr<u32>(r13 + 4u) = u32(0x8a3bc4u);  // (from the original)
    r2_1 = r13;
    *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_00131e5c(r0_1, r1_1, r2_1, 0u);
    r2_2 = *global_00ae53b8;
    if (s32(r2_2) < s32(*gptr<u32>(0xae53b8u + 4))) {  // (from the original)
        *gptr<u32>(*gptr<u32>(0xae53b8u + 8u) + (r2_2 << 2)) = u32(r0_2);  // (from the original)
        r0_2 = *global_00ae53b8 + 1u;
        *global_00ae53b8 = u32(r0_2);
    }
    *global_00975338 = u32(r5_1);
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = 0xae53b8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_00131f64
GUEST_EXPORT(0x00131f64, d_00131f64::f_00131f64);

// f_00131fe0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00131fe0 {

inline guest::global<u32, 0x00975338> global_00975338;  // (from the original)
inline guest::global<u32, 0x00ae53b8> global_00ae53b8;  // (from the original)
inline constexpr guest::Function<0x00131e5c, u32(u32, u32, u32, u32)> call_00131e5c;  // (from the original)
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x001382cc, u32(u32, u32, u32, u32)> call_001382cc;  // (from the original)

u32 f_00131fe0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r5_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r2_2 = 0;
    u32 ea_3 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00135740(0xae53d4u, r1, r2, r3);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(0x975338u + 4u) = u32(0xae53acu);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001382cc(0xae53acu, r0, r2_1, r3_1);  // (from the original)
    r5_1 = 0x975338u + 0xcu;  // (from the original)
    ea_1 = r5_1 + 4u;
    *gptr<u32>(ea_1) = u32(0u);
    ea_2 = 0x975338u + 4u;  // (from the original)
    r2_2 = r13;
    ea_3 = *gptr<u32>(ea_2);
    r0_1 = *gptr<u32>(ea_3);
    r1_1 = *gptr<u32>(ea_3 + 4);
    *gptr<u32>(r13 + 4u) = u32(0x8a3bc4u);  // (from the original)
    *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_00131e5c(r0_1, r1_1, r2_2, 0u);
    r2_3 = *global_00ae53b8;
    r3_2 = *gptr<u32>(0xae53b8u + 4);  // (from the original)
    if (s32(r2_3) < s32(r3_2)) {
        r3_2 = *gptr<u32>(0xae53b8u + 8u);  // (from the original)
        *gptr<u32>(r3_2 + (r2_3 << 2)) = u32(r0_2);
        *global_00ae53b8 = u32(*global_00ae53b8 + 1u);
    }
    *global_00975338 = u32(r5_1);
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_00137e84(0xae53d4u, 0xae53b8u, r2_3, r3_2);  // (from the original)
}

}  // namespace d_00131fe0
GUEST_EXPORT(0x00131fe0, d_00131fe0::f_00131fe0);

// f_0013208c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013208c {

struct __attribute__((packed)) Object_0013208c_0 {
    u32 word_0;
    u8 byte_4;
    u8 unknown_5[0x3];  // (not used here)
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Object_0013208c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013208c_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0013208c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0013208c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0013208c_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0013208c_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0013208c_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0013208c_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0013208c_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_0013208c_0, word_24, 0x24);  // (from the original)


void f_0013208c(gptr<Object_0013208c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    arg0->word_0 = u32(0x905f9cu);  // (from the original)
    arg0->byte_4 = u8(0u);
    arg0->word_8 = u32(0u);
    arg0->word_c = u32(0x9043ccu);  // (from the original)
    r1_1 = r0 + 0x10u;  // (from the original)
    arg0->word_14 = u32(r1_1);
    arg0->word_18 = u32(0u);
    arg0->word_10 = u32(r1_1);
    arg0->word_1c = u32(0u);
    arg0->word_20 = u32(0u);
    arg0->word_24 = u32(0u);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_0013208c
GUEST_EXPORT(0x0013208c, d_0013208c::f_0013208c);

// f_001320cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001320cc {

struct __attribute__((packed)) Object_001320cc_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_001320cc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001320cc_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001320cc_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_001320cc_0, word_c, 0xc);  // (from the original)

inline guest::global<u32, 0x00975338> global_00975338;  // (from the original)
inline constexpr guest::Function<0x00137ec0, u32(u32, u32, u32, u32)> call_00137ec0;  // (from the original)
inline constexpr guest::Function<0x00138fec, u32(u32, u32, u32, u32)> call_00138fec;  // (from the original)
inline constexpr guest::Function<0x003045a8, u32(u32, u32, u32, u32)> call_003045a8;  // (from the original)

u32 f_001320cc(gptr<Object_001320cc_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0x905fecu);  // (from the original)
    arg0->word_4 = u32(r1);
    arg0->word_8 = u32(0u);
    arg0->word_c = u32(0u);
    r0_1 = arg0->word_4;
    if (r0_1 != 0) {
        goto L_13215c;
    }
    if (r2 == 0) {
        goto L_13211c;
    }
    if (r2 == 1u) {
        goto L_13211c;
    }
    if (r2 == 2u) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = 0u;
        return r0;
    }
    if (r2 == 3u) {
        goto L_132140;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0u;
    return r0;
L_13211c:;
    r0_2 = *global_00975338;
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = 0u;
        return r0;
    }
    r0_1 = call_00138fec(r0_2, r0, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r0 + 4u) = u32(r0_1);
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0;
    }
    goto L_13215c;
L_132140:;
    r0_3 = *global_00975338;
    if (r0_3 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = 0u;
        return r0;
    }
    r0_1 = call_003045a8(r0_3, 0u, r2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r0 + 4u) = u32(r0_1);
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return r0;
    }
L_13215c:;
    call_00137ec0(r0_1, r0, r2, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_3;
    return r0;
}

}  // namespace d_001320cc
GUEST_EXPORT(0x001320cc, d_001320cc::f_001320cc);

// f_00132174: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00132174 {

struct __attribute__((packed)) Object_00132174_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_00132174_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00132174_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00132174_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00132174_0, word_c, 0xc);  // (from the original)

inline guest::global<u32, 0x00975338> global_00975338;  // (from the original)
inline constexpr guest::Function<0x00137ec0, u32(u32, u32, u32, u32)> call_00137ec0;  // (from the original)
inline constexpr guest::Function<0x00138fec, u32(u32, u32, u32, u32)> call_00138fec;  // (from the original)

u32 f_00132174(gptr<Object_00132174_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 zf_1 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0x905fecu);  // (from the original)
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(0u);
    arg0->word_c = u32(0u);
    r0_1 = *global_00975338;
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = 0u;
        return r0;
    }
    r0_2 = call_00138fec(r0_1, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    zf_1 = r0_2 == 0;
    if (!zf_1) {
        r1_1 = r0;
    }
    *gptr<u32>(r0 + 4u) = u32(r0_2);
    if (!zf_1) {
        call_00137ec0(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0;
}

}  // namespace d_00132174
GUEST_EXPORT(0x00132174, d_00132174::f_00132174);

// f_001321c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001321c8 {

inline guest::global<u32, 0x009753d0> global_009753d0;  // (from the original)
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> call_00131280;  // (from the original)
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32, u32)> call_001320cc;  // (from the original)
inline constexpr guest::Function<0x001385fc, u32(u32, u32, u32, u32)> call_001385fc;  // (from the original)

u32 f_001321c8(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 res_1 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = *global_009753d0;
    if (r0_1 == 0) {
        r0_2 = call_00131280(0x44u, r0, 4u, guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        res_1 = r0_2 + 4u;
        r0_3 = res_1;
        if (res_1 != 0) {
            r0_3 = call_001320cc(r0_3, r0, 3u, guest::cpu()->r[3]);
            r2_1 = guest::cpu()->r[2];
            r1 = 0x90600cu;  // (from the original)
            *gptr<u32>(r0_3) = u32(r1);
        }
        *gptr<u32>(0x9753d0u + 4u) = u32(r0_3);  // (from the original)
        if (r0_2 == 0) {
            r0_1 = 0u;
        } else {
            r0_1 = call_001385fc(r0_2, r1, r2_1, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
        }
        *global_009753d0 = u32(r0_1);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_001321c8
GUEST_EXPORT(0x001321c8, d_001321c8::f_001321c8);

// f_001323b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001323b4 {

inline constexpr guest::Function<0x00136cb0, u32(u32, u32, u32, u32)> call_00136cb0;  // (from the original)

u32 f_001323b4(u32 r0) {
    u32 r0_1 = 0;
    r0_1 = r0 + 0x10u;  // (from the original)
    return call_00136cb0(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_001323b4
GUEST_EXPORT(0x001323b4, d_001323b4::f_001323b4);

// f_00132530: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00132530 {

struct __attribute__((packed)) Object_00132530_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00132530_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0013d040, u32(u32, u32, u32, u32)> call_0013d040;  // (from the original)

u32 f_00132530(gptr<Object_00132530_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = arg0->word_0;
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0_1;
    }
    call_0013d040(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0) = u32(0u);
    *gptr<u32>(r0 + 4u) = u32(0u);
    guest::cpu()->r[13] += 8u;
    return 0u;
}

}  // namespace d_00132530
GUEST_EXPORT(0x00132530, d_00132530::f_00132530);

// f_001325a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001325a0 {

inline constexpr guest::Function<0x00134fec, u32(u32, u32, u32, u32)> call_00134fec;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_001325a0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r4_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    r0_1 = r0 + 0xf0u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r0_2 = call_00134fec(r0_1, r1, r2, r3);
    r4_1 = r0_2 - 0xf0u;  // (from the original)
    r0_3 = r0_2 - 8u;
    call_002f76ac(r0_3, 0x134fe8u, 4u, 2u);  // (from the original)
    r0_4 = r4_1 + 8u;
    call_002f76ac(r0_4, 0x134fe8u, 4u, 0x38u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r4_1;
}

}  // namespace d_001325a0
GUEST_EXPORT(0x001325a0, d_001325a0::f_001325a0);

// f_0013293c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013293c {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_0013293c(u32 r0) {
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0x6480u;  // (from the original)
    r4_1 = r0_1 - 0x6480u;  // (from the original)
    r0_2 = r0_1 - 0x1428u;  // (from the original)
    call_002f76ac(r0_2, 0x134f6cu, 0x100u, 0x14u);  // (from the original)
    r0_3 = r4_1 + 0x58u;  // (from the original)
    call_002f76ac(r0_3, 0x138b98u, 0x400u, 0x14u);  // (from the original)
    r0_4 = r4_1 + 4u;
    call_002f76ac(r0_4, 0x138ab0u, 2u, 0x2au);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r4_1;
}

}  // namespace d_0013293c
GUEST_EXPORT(0x0013293c, d_0013293c::f_0013293c);

// f_001329a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001329a8 {

inline constexpr guest::Function<0x00138bbc, u32(u32, u32, u32, u32)> call_00138bbc;  // (from the original)

u32 f_001329a8(u32 r0, u32 r1) {
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    return call_00138bbc(0x986f10u, r0, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_001329a8
GUEST_EXPORT(0x001329a8, d_001329a8::f_001329a8);

// f_001330fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001330fc {

struct __attribute__((packed)) Object_001330fc_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_001330fc_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00138c88, u32(u32, u32, u32, u32)> call_00138c88;  // (from the original)

u32 f_001330fc(gptr<Object_001330fc_0> arg0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = arg0->word_4;
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0_1;
    }
    r0_2 = call_00138c88(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 != 0) {
        r0_2 = 1u;
    }
    guest::cpu()->r[13] += 8u;
    return r0_2;
}

}  // namespace d_001330fc
GUEST_EXPORT(0x001330fc, d_001330fc::f_001330fc);

// f_00133580: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00133580 {

inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)
inline constexpr guest::Function<0x00137fa4, u32(u32, u32, u32, u32)> call_00137fa4;  // (from the original)
inline constexpr guest::Function<0x0013805c, u32(u32, u32, u32, u32)> call_0013805c;  // (from the original)
inline constexpr guest::Function<0x00138f3c, u32(u32, u32, u32, u32)> call_00138f3c;  // (from the original)

u32 f_00133580(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r4_1 = 0;
    u32 r0_4 = 0;
    r13 = r13 - 0x40u;  // (from the original)
    ea_1 = r13 + 4u;
    *gptr<u32>(ea_1) = u32(r13 + 0xcu);  // (from the original)
    *gptr<u32>(ea_1 + 4) = u32(0x20u);  // (from the original)
    r3_1 = u32(*global_008c9f1c);
    *gptr<u8>(0x20u + (*gptr<u32>(r13 + 4u) - 1u)) = u8(r3_1);  // (from the original)
    *gptr<u8>(r13 + 0xcu) = u8(u32(*global_008c9f1c));  // (from the original)
    *gptr<u32>(r13) = u32(0x9048ecu);  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_2 = call_00137fa4(r0_1, r1, 0x20u, r3_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        r1_2 = r13;
        guest::cpu()->r[13] = r13;
        r0_3 = call_00138f3c(r0, r1_2, r2_1, r3_2);
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        r4_1 = r0_3;
    } else {
        r4_1 = *gptr<u32>(r0 + 0x1cu);  // (from the original)
        if (r4_1 == 0) {
            r0_4 = 0u;
            r13 = r13 + 0x40u;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->r[13] = r13;
            return r0_4;
        }
    }
    if (r2 != 0) {
        guest::cpu()->r[13] = r13;
        call_0013805c(r2, r1, r2_1, r3_2);
        r1_1 = guest::cpu()->r[1];
    }
    r0_4 = r4_1;
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_4;
}

}  // namespace d_00133580
GUEST_EXPORT(0x00133580, d_00133580::f_00133580);

// f_001342a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001342a4 {

inline constexpr guest::Function<0x00135f34, u32(u32, u32, u32, u32)> call_00135f34;  // (from the original)

u32 f_001342a4(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    *gptr<u32>(r13) = u32(1u);
    guest::cpu()->r[13] = r13;
    call_00135f34(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], r3);
    r13 = r13 + 8;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_001342a4
GUEST_EXPORT(0x001342a4, d_001342a4::f_001342a4);

// f_001342b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001342b8 {

inline constexpr guest::Function<0x00136344, u32(u32, u32, u32, u32)> call_00136344;  // (from the original)

u32 f_001342b8() {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r12_1 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    ea_1 = r13 + 0x18u;  // (from the original)
    r4_1 = *gptr<u32>(ea_1);
    r5_1 = *gptr<u32>(ea_1 + 4);
    r12_1 = *gptr<u32>(ea_1 + 8);
    *gptr<u32>(r13) = u32(r4_1);
    *gptr<u32>(r13 + 4) = u32(r5_1);
    *gptr<u32>(r13 + 8) = u32(r12_1);
    guest::cpu()->r[13] = r13;
    call_00136344(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_001342b8
GUEST_EXPORT(0x001342b8, d_001342b8::f_001342b8);

// f_001342d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001342d8 {

inline constexpr guest::Function<0x00136014, u32(u32, u32, u32, u32)> call_00136014;  // (from the original)

u32 f_001342d8() {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r12_1 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    ea_1 = r13 + 0x20u;  // (from the original)
    r4_1 = *gptr<u32>(ea_1);
    r5_1 = *gptr<u32>(ea_1 + 4);
    r6_1 = *gptr<u32>(ea_1 + 8);
    r12_1 = *gptr<u32>(ea_1 + 0xc);  // (from the original)
    *gptr<u32>(r13) = u32(r4_1);
    *gptr<u32>(r13 + 4) = u32(r5_1);
    *gptr<u32>(r13 + 8) = u32(r6_1);
    *gptr<u32>(r13 + 0xc) = u32(r12_1);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00136014(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_001342d8
GUEST_EXPORT(0x001342d8, d_001342d8::f_001342d8);

// f_001342f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001342f8 {

inline constexpr guest::Function<0x00136188, u32(u32, u32, u32, u32)> call_00136188;  // (from the original)

u32 f_001342f8() {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r12_1 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    ea_1 = r13 + 0x20u;  // (from the original)
    r4_1 = *gptr<u32>(ea_1);
    r5_1 = *gptr<u32>(ea_1 + 4);
    r6_1 = *gptr<u32>(ea_1 + 8);
    r12_1 = *gptr<u32>(ea_1 + 0xc);  // (from the original)
    *gptr<u32>(r13) = u32(r4_1);
    *gptr<u32>(r13 + 4) = u32(r5_1);
    *gptr<u32>(r13 + 8) = u32(r6_1);
    *gptr<u32>(r13 + 0xc) = u32(r12_1);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00136188(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_001342f8
GUEST_EXPORT(0x001342f8, d_001342f8::f_001342f8);

// f_00134318: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00134318 {


u32 f_00134318(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r12_1 = 0;
    u32 r12_2 = 0;
    u32 r2_1 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r5_1 = 0;
    u32 res_3 = 0;
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 res_4 = 0;
    u32 r0_2 = 0;
    r1 = 0u;
    r2 = r1;
    r3 = r1;
    r13 = r13 - 8;
L_134328:;
    r12_1 = u32(*gptr<u16>(r0 + (r3 << 1)));
    if (r12_1 != 0x3au) {  // (from the original)
        r12_2 = sxtb(r12_1);
        r3 = r3 + 1u;
        r2_1 = r1 >> 0x18 | r2 << 8;  // (from the original)
        res_1 = r3 - 8u;
        r1 = r12_2 | r1 << 8;
        r2 = r2_1 | u32(s32(r12_2) >> 0x1f);  // (from the original)
        if (res_1 >> 0x1f != ((r3 ^ 8u) & (r3 ^ res_1)) >> 0x1f) {  // (from the original)
            guest::preempt();
            goto L_134328;
        }
        r1 = 0u;
        r2 = r1;
    }
    res_2 = r1 | r2;
    if (res_2 == 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    } else {
        r3 = 0xae0cc8u;  // (from the original)
        r0 = 0u;
    }
L_134374:;
    r5_1 = r3 + (r0 << 4);
    res_3 = *gptr<u32>(r5_1) ^ r1 | *gptr<u32>(r5_1 + 4u) ^ r2;
    if (res_3 == 0) {
        r0_1 = r3 + (r0 << 4);
    } else {
        ea_1 = r5_1 + 0x10u;  // (from the original)
        res_4 = *gptr<u32>(ea_1 + 4) ^ r2 | *gptr<u32>(ea_1) ^ r1;
        if (res_4 != 0) {
            goto L_1343c8;
        }
        r0_1 = r3 + (r0 << 4) + 0x10u;  // (from the original)
    }
    if (r0_1 != 0) {
        r0_2 = *gptr<u32>(r0_1 + 8u);
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0u;
L_1343c8:;
    r0 = r0 + 2u;
    if (s32(r0) < s32(0x20u)) {  // (from the original)
        guest::preempt();
        goto L_134374;
    }
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_00134318
GUEST_EXPORT(0x00134318, d_00134318::f_00134318);

// f_001343e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001343e4 {

struct __attribute__((packed)) Object_001343e4_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_001343e4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001343e4_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001343e4_0, word_8, 0x8);  // (from the original)

inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)

void f_001343e4(gptr<Object_001343e4_0> arg0) {
    u32 r0 = arg0.addr();
    arg0->word_4 = u32(r0 + 0xcu);  // (from the original)
    arg0->word_0 = u32(0x90558cu);  // (from the original)
    arg0->word_8 = u32(0x100u);  // (from the original)
    *gptr<u8>(0x100u + (arg0->word_4 - 1u)) = u8(u32(*global_008c9f1c));  // (from the original)
    arg0->word_0 = u32(0x9050f8u);  // (from the original)
    *gptr<u8>(arg0->word_4) = u8(u32(*global_008c9f1c));
    arg0->word_0 = u32(0x9048b0u);  // (from the original)
    guest::cpu()->r[1] = 0x9048b0u;  // (from the original)
    return;
}

}  // namespace d_001343e4
GUEST_EXPORT(0x001343e4, d_001343e4::f_001343e4);

// f_00134440: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00134440 {

struct __attribute__((packed)) Object_00134440_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_00134440_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00134440_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00134440_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00134440_0, word_c, 0xc);  // (from the original)


void f_00134440(gptr<Object_00134440_0> arg0, float S0_unused, float S1) {
    float S0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    float S1_1 = 0;
    float S0_2 = 0;
    S0_1 = std::bit_cast<float>(arg0->word_4);
    r1_1 = arg0->word_8;
    r2_1 = arg0->word_c;
    if (s32(r2_1) >= s32(r1_1)) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1;
        return;
    }
    S1_1 = std::bit_cast<float>(arg0->word_0);
    S0_2 = (S0_1 - S1_1) * float(s32(std::bit_cast<u32>(std::bit_cast<float>(r2_1)))) / float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1_1)))) + S1_1;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    return;
}

}  // namespace d_00134440
GUEST_EXPORT(0x00134440, d_00134440::f_00134440);

// f_00134f04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00134f04 {

inline constexpr guest::Function<0x00139668, u32(u32, u32, u32, u32)> call_00139668;  // (from the original)

u32 f_00134f04() {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = *gptr<u32>(0x975268u + 8u);  // (from the original)
    call_00139668(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(0x975268u + 8u) = u32(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return 0u;
}

}  // namespace d_00134f04
GUEST_EXPORT(0x00134f04, d_00134f04::f_00134f04);

// f_00134f24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00134f24 {

inline guest::global<u8, 0x00975268> global_00975268;  // (from the original)
inline constexpr guest::Function<0x00135520, u32(u32, u32, u32, u32)> call_00135520;  // (from the original)

u32 f_00134f24() {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = u32(*global_00975268);
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0_1;
    }
    call_00135520(0x134f50u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *global_00975268 = u8(0u);
    guest::cpu()->r[13] += 8u;
    return 0u;
}

}  // namespace d_00134f24
GUEST_EXPORT(0x00134f24, d_00134f24::f_00134f24);

// f_00134f70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00134f70 {

struct __attribute__((packed)) Object_00134f70_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_00134f70_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00134f70_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00134f70_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00134f70_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00134f70_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00134f70_0, word_14, 0x14);  // (from the original)

inline guest::global<u32, 0x00134f9c> global_00134f9c;  // (from the original)

void f_00134f70(gptr<Object_00134f70_0> arg0) {
    float S0_1 = 0;
    S0_1 = std::bit_cast<float>(*global_00134f9c);
    arg0->word_4 = u32(std::bit_cast<u32>(S0_1));
    arg0->word_8 = u32(std::bit_cast<u32>(S0_1));
    arg0->word_c = u32(std::bit_cast<u32>(S0_1));
    arg0->word_10 = u32(~0u);
    arg0->word_14 = u32(0u);
    arg0->word_0 = u32(0x8ed7f4u);  // (from the original)
    guest::cpu()->r[1] = 0u;
    guest::cpu()->s[0] = S0_1;
    return;
}

}  // namespace d_00134f70
GUEST_EXPORT(0x00134f70, d_00134f70::f_00134f70);

// f_00134fec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00134fec {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_00134fec(u32 r0) {
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r2_1 = 8u + 0x870u;  // (from the original)
    call_002f76ac(r0, 0x139d20u, r2_1, 8u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0;
}

}  // namespace d_00134fec
GUEST_EXPORT(0x00134fec, d_00134fec::f_00134fec);

// f_00135010: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00135010 {

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x00138f30, u32(u32, u32, u32, u32)> call_00138f30;  // (from the original)
inline constexpr guest::Function<0x0013b6e0, u32(u32, u32, u32, u32)> call_0013b6e0;  // (from the original)
inline constexpr guest::Function<0x0013c0e8, u32(u32, u32, u32, u32)> call_0013c0e8;  // (from the original)

u32 f_00135010(u32 r0, u32 r1, u32 r2) {
    u32 r7_1 = 0;
    u32 r5_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r4_1 = 0;
    u32 r6_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r7_1 = r1;
    if (r2 >= 6u) {
        goto L_135048;
    }
    r5_1 = r0 + (r2 << 2);
    r1 = *gptr<u32>(r5_1 + 0x14u);  // (from the original)
    if (r1 == 0) {
        goto L_135048;
    }
    r1_1 = r2 + (r2 << 1);
    r0_1 = r0 + (r1_1 << 3) + 0x2cu;  // (from the original)
    r0_2 = call_0013c0e8(r0_1, r1_1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_2 == 0) {
        goto L_135050;
    }
L_135048:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
L_135050:;
    r4_1 = *gptr<u32>(r5_1 + 0x14u);  // (from the original)
    r6_1 = r4_1 + 4u;
    call_00135748(r6_1, r1, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r0_3 = r4_1 + 0x10u;  // (from the original)
    r0_4 = call_00138f30(r0_3, r1_2, r2_2, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    call_001357ec(r6_1, r1_3, r2_3, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    if (s32(r0_4) > s32(r7_1)) {
        r0_5 = *gptr<u32>(r5_1 + 0x14u);  // (from the original)
        call_0013b6e0(r0_5, r7_1, r2_4, guest::cpu()->r[3]);
        r1_4 = guest::cpu()->r[1];
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    return 1u;
}

}  // namespace d_00135010
GUEST_EXPORT(0x00135010, d_00135010::f_00135010);

// f_00135134: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00135134 {

struct __attribute__((packed)) Object_00135134_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 byte_10;
    u8 byte_11;
};
GUEST_OFFSET(Object_00135134_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00135134_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00135134_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00135134_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00135134_0, byte_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00135134_0, byte_11, 0x11);  // (from the original)


void f_00135134(gptr<Object_00135134_0> arg0) {
    arg0->word_0 = u32(0x8f701cu);  // (from the original)
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(0u);
    arg0->word_c = u32(0u);
    arg0->byte_10 = u8(0u);
    arg0->byte_11 = u8(0u);
    guest::cpu()->r[1] = 0x8f701cu;  // (from the original)
    return;
}

}  // namespace d_00135134
GUEST_EXPORT(0x00135134, d_00135134::f_00135134);

// f_001352dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001352dc {

inline guest::global<u32, 0x00974f10> global_00974f10;  // (from the original)
inline constexpr guest::Function<0x0013a1f0, u32(u32, u32, u32, u32)> call_0013a1f0;  // (from the original)

u32 f_001352dc(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    *global_00974f10 = u32(r0);
    *gptr<u32>(r13) = u32(r0);
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_0013a1f0(r0_1, 0xb0500c8u, guest::cpu()->r[2], r3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_001352dc
GUEST_EXPORT(0x001352dc, d_001352dc::f_001352dc);

// f_00135384: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00135384 {

inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> call_00134250;  // (from the original)

u32 f_00135384(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r2_1 = 0;
    u32 zf_1 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 res_3 = 0;
    u32 r0_1 = 0;
    u32 r2_2 = 0;
    u32 res_4 = 0;
    u32 r1_1 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r4 = r1;
    r6 = r3;
    r5 = r2;
    r1 = 0u;
    r3 = r13;
    do {
L_1353a0:;
        r2_1 = u32(s32(s8(*gptr<u8>(r0 + r1))));
        zf_1 = r2_1 == 0;
        if (!zf_1) {
            zf_1 = r2_1 == 0x3au;  // (from the original)
        }
        if (zf_1) {
            goto L_135404;
        }
        *gptr<u8>(r3 + r1) = u8(r2_1);
        r1 = r1 + 1u;
        guest::preempt();
    } while (s32(r1) < s32(8u));
    guest::cpu()->r[13] = r13;
    call_00134250(r0, r1, r2_1, r3);
    r2 = 0x89d9d8u;  // (from the original)
    r12 = 0u;
    r14 = r12;
    r0 = r12;
    do {
L_1353d4:;
        r1 = u32(s32(s8(*gptr<u8>(r2 + r0))));
        if (r1 == 0x3au) {  // (from the original)
            goto L_135450;
        }
        r0 = r0 + 1u;
        r14 = r12 >> 0x18 | r14 << 8;  // (from the original)
        res_1 = r0 - 8u;
        r12 = r1 | r12 << 8;
        r14 = r14 | u32(s32(r1) >> 0x1f);  // (from the original)
        guest::preempt();
    } while (res_1 >> 0x1f != ((r0 ^ 8u) & (r0 ^ res_1)) >> 0x1f);  // (from the original)
    goto L_135448;
L_135404:;
    r12 = 0u;
    *gptr<u8>(r3 + r1) = u8(0x3au);  // (from the original)
    r14 = r12;
    r2 = r3;
    r0 = r12;
    do {
L_13541c:;
        r1 = u32(s32(s8(*gptr<u8>(r2 + r0))));
        if (r1 == 0x3au) {  // (from the original)
            goto L_135450;
        }
        r0 = r0 + 1u;
        r14 = r12 >> 0x18 | r14 << 8;  // (from the original)
        res_2 = r0 - 8u;
        r12 = r1 | r12 << 8;
        r14 = r14 | u32(s32(r1) >> 0x1f);  // (from the original)
        guest::preempt();
    } while (res_2 >> 0x1f != ((r0 ^ 8u) & (r0 ^ res_2)) >> 0x1f);  // (from the original)
L_135448:;
    r12 = 0u;
    r14 = r12;
L_135450:;
    res_3 = r12 | r14;
    if (res_3 == 0) {
        r0_1 = 0xe0e046bcu;  // (from the original)
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    } else {
        r3 = 0xae0cc8u;  // (from the original)
        r1 = 0u;
    }
L_135464:;
    r2_2 = r3 + (r1 << 4);
    if (*gptr<u32>(r2_2 + 8u) == 0) {
        goto L_135494;
    }
    res_4 = *gptr<u32>(r2_2) ^ r12 | *gptr<u32>(r2_2 + 4) ^ r14;
    if (res_4 != 0) {
        goto L_1354b4;
    }
    r0_1 = 0xc82044b4u;  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_1;
L_135494:;
    r1_1 = r3 + (r1 << 4);
    *gptr<u32>(r1_1) = u32(r12);
    *gptr<u32>(r1_1 + 4) = u32(r14);
    *gptr<u32>(r2_2 + 8u) = u32(r4);
    *gptr<u8>(r2_2 + 0xcu) = u8(r5);  // (from the original)
    *gptr<u8>(r2_2 + 0xdu) = u8(r6);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return 0u;
L_1354b4:;
    r1 = r1 + 1u;
    if (s32(r1) < s32(0x20u)) {  // (from the original)
        guest::preempt();
        goto L_135464;
    }
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0xd8604659u;  // (from the original)
}

}  // namespace d_00135384
GUEST_EXPORT(0x00135384, d_00135384::f_00135384);

// f_00135720: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00135720 {

struct __attribute__((packed)) Object_00135720_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_00135720_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0013e0ec, u32(u32, u32, u32, u32)> call_0013e0ec;  // (from the original)

u32 f_00135720(gptr<Object_00135720_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    r1_1 = arg0->word_8;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return r0;
    }
    return call_0013e0ec(0xae0f64u, r0, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00135720
GUEST_EXPORT(0x00135720, d_00135720::f_00135720);

// f_00135748: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00135748 {

struct __attribute__((packed)) Object_00135748_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00135748_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0012f050, u32(u32, u32, u32, u32)> call_0012f050;  // (from the original)

u32 f_00135748(gptr<Object_00135748_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r1_1 = arg0->word_4;
    if (guest::cpu()->tls != r1_1) {
        call_0012f050(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        *gptr<u32>(r0 + 4u) = u32(guest::cpu()->tls);
    }
    r0_1 = *gptr<u32>(r0 + 8u) + 1u;
    *gptr<u32>(r0 + 8u) = u32(r0_1);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00135748
GUEST_EXPORT(0x00135748, d_00135748::f_00135748);

// f_001357ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001357ec {

struct __attribute__((packed)) Object_001357ec_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_001357ec_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001357ec_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00128c70, u32(u32, u32, u32, u32)> call_00128c70;  // (from the original)

u32 f_001357ec(gptr<Object_001357ec_0> arg0) {
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    res_1 = arg0->word_8 - 1u;
    arg0->word_8 = u32(res_1);
    if (res_1 != 0) {
        guest::cpu()->r[1] = res_1;
        return r0;
    }
    arg0->word_4 = u32(0u);
    return call_00128c70(r0, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_001357ec
GUEST_EXPORT(0x001357ec, d_001357ec::f_001357ec);

// f_0013580c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013580c {

inline guest::global<u32, 0x0097dff8> global_0097dff8;  // (from the original)
inline constexpr guest::Function<0x00134c68, u32(u32, u32, u32, u32)> call_00134c68;  // (from the original)

u32 f_0013580c(u32 r0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    do {
L_135814:;
        *gptr<u32>(r0) = u32(0u - *gptr<u32>(r0));
        guest::preempt();
    } while (u32(0) != 0);
    r0_1 = *global_0097dff8;
    r3_1 = ~0u;
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_2 = call_00134c68(r0_1, r0, 0u, r3_1);
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_0013580c
GUEST_EXPORT(0x0013580c, d_0013580c::f_0013580c);

// f_00135858: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00135858 {


u32 f_00135858(u32 r0) {
    u32 r1 = 0;
    r1 = ~0u;
    do {
L_13585c:;
        if (!(*gptr<u32>(r0) == 1u)) {
            guest::cpu()->r[1] = r1;
            return 0u;
        }
        *gptr<u32>(r0) = u32(r1);
        guest::preempt();
    } while (u32(0) != 0);
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_00135858
GUEST_EXPORT(0x00135858, d_00135858::f_00135858);

// f_001358c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001358c0 {

inline guest::global<u32, 0x0097dffc> global_0097dffc;  // (from the original)
inline constexpr guest::Function<0x00129270, u32(u32, u32, u32, u32)> call_00129270;  // (from the original)
inline constexpr guest::Function<0x00135520, u32(u32, u32, u32, u32)> call_00135520;  // (from the original)

u32 f_001358c0(u32 r0_unused, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = *global_0097dffc;
    r0_2 = call_00135520(r0_1, r1, r2, guest::cpu()->r[3]);
    res_1 = r0_2 & 0x80000000u;  // (from the original)
    if (!(res_1 >> 0x1f)) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = res_1;
        return r0_2;
    }
    res_2 = r0_2 >> 0x1f;  // (from the original)
    if (res_2 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = 0x1358e0u;  // (from the original)
        return r0_2;
    }
    guest::cpu()->r[13] += 8u;
    return call_00129270(r0_2, 0x1358e0u, res_2, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_001358c0
GUEST_EXPORT(0x001358c0, d_001358c0::f_001358c0);

// f_00135a8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00135a8c {

struct __attribute__((packed)) Object_00135a8c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00135a8c_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0013a63c, u32(u32, u32, u32, u32)> call_0013a63c;  // (from the original)

u32 f_00135a8c(gptr<Object_00135a8c_0> arg0) {
    u32 r0 = arg0.addr();
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0x8faf48u);  // (from the original)
    call_0013a63c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_00135a8c
GUEST_EXPORT(0x00135a8c, d_00135a8c::f_00135a8c);

// f_00135bb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00135bb8 {

struct __attribute__((packed)) Object_00135bb8_0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u8 unknown_1c[0x38];  // (not used here)
    u32 word_54;
};
GUEST_OFFSET(Object_00135bb8_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_00135bb8_0, word_54, 0x54);  // (from the original)

inline constexpr guest::Function<0x0013e6bc, u32(u32, u32, u32, u32)> call_0013e6bc;  // (from the original)

u32 f_00135bb8(gptr<Object_00135bb8_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    arg0->word_54 = u32(0u);
    r0_1 = arg0->word_18;
    if (r0_1 != 0) {
        r0_2 = r0 + 0x18u;  // (from the original)
        r0_1 = call_0013e6bc(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        *gptr<u32>(r0 + 0x18u) = u32(0u);  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0_1;
}

}  // namespace d_00135bb8
GUEST_EXPORT(0x00135bb8, d_00135bb8::f_00135bb8);

// f_00135be4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00135be4 {

struct __attribute__((packed)) Object_00135be4_0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
};
GUEST_OFFSET(Object_00135be4_0, word_18, 0x18);  // (from the original)

inline constexpr guest::Function<0x0013e6bc, u32(u32, u32, u32, u32)> call_0013e6bc;  // (from the original)

u32 f_00135be4(gptr<Object_00135be4_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = arg0->word_18;
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0_1;
    }
    r0_2 = r0 + 0x18u;  // (from the original)
    call_0013e6bc(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0 + 0x18u) = u32(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return 0u;
}

}  // namespace d_00135be4
GUEST_EXPORT(0x00135be4, d_00135be4::f_00135be4);

// f_00135efc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00135efc {

inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> call_00134250;  // (from the original)
inline constexpr guest::Function<0x0013a7c8, u32(u32, u32, u32, u32)> call_0013a7c8;  // (from the original)

u32 f_00135efc(u32 r0) {
    u32 r0_1 = 0;
    u32 res_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_0013a7c8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    res_1 = r0_1 >> 0x1f;  // (from the original)
    if (res_1 == 0) {
        guest::cpu()->r[13] += 8u;
        return res_1;
    }
    guest::cpu()->r[13] += 8u;
    return call_00134250(res_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00135efc
GUEST_EXPORT(0x00135efc, d_00135efc::f_00135efc);

// f_00135f18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00135f18 {

inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> call_00134250;  // (from the original)
inline constexpr guest::Function<0x0013a7f8, u32(u32, u32, u32, u32)> call_0013a7f8;  // (from the original)

u32 f_00135f18(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    u32 res_1 = 0;
    u32 r0_3 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_2 = call_0013a7f8(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], r3);
    r3_1 = guest::cpu()->r[3];
    res_1 = r0_2 >> 0x1f;  // (from the original)
    if (res_1 != 0) {
        guest::cpu()->r[13] = r13;
        call_00134250(res_1, guest::cpu()->r[1], guest::cpu()->r[2], r3_1);
    }
    r0_3 = u32(s32(s8(*gptr<u8>(r13))));
    r13 = r13 + 8;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_00135f18
GUEST_EXPORT(0x00135f18, d_00135f18::f_00135f18);

// f_00135f34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00135f34 {

inline guest::global<u8, 0x0097ea38> global_0097ea38;  // (from the original)
inline constexpr guest::Function<0x00136464, u32(u32, u32, u32, u32)> call_00136464;  // (from the original)
inline constexpr guest::Function<0x0013a834, u32(u32, u32, u32, u32)> call_0013a834;  // (from the original)

u32 f_00135f34(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r7_1 = 0;
    u32 r12_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_2 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 r12_2 = 0;
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    r13 = r13 - 0x38u;  // (from the original)
    if (*gptr<u32>(r13 + 0x38u) != 0) {  // (from the original)
        if (r0 + 0xe1000000u >= 0x600000u) {  // (from the original)
            r13 = r13 + 0x38u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
    }
    ea_1 = 0x97ea38u + 4u;  // (from the original)
    r7_1 = *gptr<u32>(ea_1);
    r12_1 = *gptr<u32>(r7_1);
    r5_1 = *gptr<u32>(r7_1 + 0x10u);  // (from the original)
    r6_1 = *gptr<u32>(r7_1 + 0x14u);  // (from the original)
    r7_2 = *gptr<u32>(r7_1 + 0x18u);  // (from the original)
    ea_2 = r13;
    *gptr<u32>(ea_2) = u32(r12_1);
    ea_3 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(ea_3) = u32(r5_1);
    *gptr<u32>(ea_3 + 4) = u32(r6_1);
    *gptr<u32>(ea_3 + 8) = u32(r7_2);
    *gptr<u8>(r13) = u8(0u);
    r12_2 = u32(*global_0097ea38);
    r4_1 = r13 + 8u;
    *gptr<u32>(r13 + 4u) = u32(r1);
    *gptr<u8>(r13 + 3u) = u8(r12_2);
    *gptr<u32>(r13 + 0x1cu) = u32(r3);  // (from the original)
    *gptr<u32>(r4_1) = u32(r0);
    *gptr<u32>(r4_1 + 4) = u32(r2);
    guest::cpu()->r[13] = r13;
    r0_1 = call_00136464(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r1_1 = r13;
    r0_2 = r0_1 + 0x58u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0013a834(r0_2, r1_1, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00135f34
GUEST_EXPORT(0x00135f34, d_00135f34::f_00135f34);

// f_00135fb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00135fb4 {

struct __attribute__((packed)) Object_00135fb4_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00135fb4_0, word_0, 0x0);  // (from the original)


void f_00135fb4(gptr<Object_00135fb4_0> arg0, u32 r1) {
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    guest::cpu()->r[13] -= 4u;
    arg0->word_0 = u32(r1);
    r1 = 0u;
    do {
L_135fc0:;
        r3_1 = arg0->word_0;
        r2_1 = *gptr<u32>(r3_1);
        if ((r2_1 & 0xffu) >= 0xfu) {  // (from the original)
            r2_1 = r2_1 & ~0xffu | r1;  // (from the original)
        }
        *gptr<u32>(r3_1) = u32(((r2_1 & ~0xff00u | r1 << 8 & 0xff00u) & ~0xff0000u | r1 << 0x10 & 0xff0000u) & ~0xff000000u | r1 << 0x18);  // (from the original)
        guest::preempt();
    } while (u32(0) != 0);
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_00135fb4
GUEST_EXPORT(0x00135fb4, d_00135fb4::f_00135fb4);

// f_00136014: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00136014 {

inline guest::global<u8, 0x0097ea38> global_0097ea38;  // (from the original)
inline constexpr guest::Function<0x00136464, u32(u32, u32, u32, u32)> call_00136464;  // (from the original)
inline constexpr guest::Function<0x0013a834, u32(u32, u32, u32, u32)> call_0013a834;  // (from the original)

u32 f_00136014(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 ea_2 = 0;
    u32 r9_1 = 0;
    u32 r12_1 = 0;
    u32 r9_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    u32 r12_2 = 0;
    u32 ea_6 = 0;
    u32 ea_7 = 0;
    u32 ea_8 = 0;
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x40u;  // (from the original)
    ea_1 = r13 + 0x40u;  // (from the original)
    r5_1 = *gptr<u32>(ea_1);
    r6_1 = *gptr<u32>(ea_1 + 4);
    r7_1 = *gptr<u32>(ea_1 + 8);
    r8_1 = *gptr<u32>(ea_1 + 0xc);  // (from the original)
    ea_2 = 0x97ea38u + 4u;  // (from the original)
    r9_1 = *gptr<u32>(ea_2);
    r12_1 = *gptr<u32>(r9_1);
    r9_2 = *gptr<u32>(r9_1 + 0x1cu);  // (from the original)
    ea_3 = r13;
    *gptr<u32>(ea_3) = u32(r12_1);
    ea_4 = r13 + 0x1cu;  // (from the original)
    *gptr<u32>(ea_4) = u32(r9_2);
    ea_5 = r13;
    *gptr<u8>(ea_5) = u8(2u);
    r12_2 = u32(*global_0097ea38);
    ea_6 = r13 + 0x18u;  // (from the original)
    *gptr<u32>(ea_6) = u32(r6_1);
    ea_7 = r13 + 3u;
    *gptr<u8>(ea_7) = u8(r12_2);
    ea_8 = r13 + 4u;
    *gptr<u32>(ea_8) = u32(r0);
    *gptr<u32>(ea_8 + 4) = u32(r2);
    r4_1 = r13 + 0xcu;  // (from the original)
    *gptr<u32>(r4_1) = u32(r1);
    *gptr<u32>(r4_1 + 4) = u32(r5_1);
    *gptr<u32>(r4_1 + 8) = u32(r7_1);
    *gptr<u16>(r13 + 0x1cu) = u16(r3);  // (from the original)
    *gptr<u16>(r13 + 0x1eu) = u16(r8_1);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00136464(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r1_1 = r13;
    r0_2 = r0_1 + 0x58u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_0013a834(r0_2, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_00136014
GUEST_EXPORT(0x00136014, d_00136014::f_00136014);

// f_00136188: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00136188 {

inline guest::global<u8, 0x0097ea38> global_0097ea38;  // (from the original)
inline constexpr guest::Function<0x00136464, u32(u32, u32, u32, u32)> call_00136464;  // (from the original)
inline constexpr guest::Function<0x0013a834, u32(u32, u32, u32, u32)> call_0013a834;  // (from the original)

u32 f_00136188(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r3_1 = 0;
    u32 r5_1 = 0;
    u32 r9_1 = 0;
    u32 r12_1 = 0;
    u32 r9_2 = 0;
    u32 r12_2 = 0;
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x40u;  // (from the original)
    ea_1 = r13 + 0x40u;  // (from the original)
    r6_1 = *gptr<u32>(ea_1 + 4);
    r7_1 = *gptr<u32>(ea_1 + 8);
    r8_1 = *gptr<u32>(ea_1 + 0xc);  // (from the original)
    r3_1 = r3 | *gptr<u32>(ea_1) << 0x10;  // (from the original)
    r5_1 = r6_1 | r7_1 << 0x10;  // (from the original)
    r9_1 = *gptr<u32>(0x97ea38u + 4u);  // (from the original)
    r12_1 = *gptr<u32>(r9_1);
    r9_2 = *gptr<u32>(r9_1 + 0x1cu);  // (from the original)
    *gptr<u32>(r13) = u32(r12_1);
    *gptr<u32>(r13 + 0x1cu) = u32(r9_2);  // (from the original)
    *gptr<u8>(r13) = u8(4u);
    r12_2 = u32(*global_0097ea38);
    r4_1 = r13 + 4u;
    *gptr<u8>(r13 + 3u) = u8(r12_2);
    *gptr<u32>(r4_1) = u32(r0);
    *gptr<u32>(r4_1 + 4) = u32(r1);
    *gptr<u32>(r4_1 + 8) = u32(r2);
    *gptr<u32>(r4_1 + 0xc) = u32(r3_1);  // (from the original)
    *gptr<u32>(r4_1 + 0x10) = u32(r5_1);  // (from the original)
    *gptr<u32>(r4_1 + 0x14) = u32(r8_1);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00136464(r0, r1, r2, r3_1);
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r1_1 = r13;
    r0_2 = r0_1 + 0x58u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_0013a834(r0_2, r1_1, r2_1, r3_2);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_00136188
GUEST_EXPORT(0x00136188, d_00136188::f_00136188);

// f_00136344: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00136344 {

inline guest::global<u8, 0x0097ea38> global_0097ea38;  // (from the original)
inline constexpr guest::Function<0x00136464, u32(u32, u32, u32, u32)> call_00136464;  // (from the original)
inline constexpr guest::Function<0x0013a834, u32(u32, u32, u32, u32)> call_0013a834;  // (from the original)

u32 f_00136344(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 ea_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r2_1 = 0;
    u32 ea_2 = 0;
    u32 r9_1 = 0;
    u32 r12_1 = 0;
    u32 ea_3 = 0;
    u32 r8_1 = 0;
    u32 r9_2 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    u32 ea_7 = 0;
    u32 ea_8 = 0;
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x40u;  // (from the original)
    r1_1 = r1 | r2 << 0x10;  // (from the original)
    ea_1 = r13 + 0x40u;  // (from the original)
    r5_1 = *gptr<u32>(ea_1);
    r6_1 = *gptr<u32>(ea_1 + 4);
    r7_1 = *gptr<u32>(ea_1 + 8);
    r2_1 = r5_1 | r6_1 << 0x10;  // (from the original)
    ea_2 = 0x97ea38u + 4u;  // (from the original)
    r9_1 = *gptr<u32>(ea_2);
    r12_1 = *gptr<u32>(r9_1);
    ea_3 = r9_1 + 0x18u;  // (from the original)
    r8_1 = *gptr<u32>(ea_3);
    r9_2 = *gptr<u32>(ea_3 + 4);
    ea_4 = r13;
    *gptr<u32>(ea_4) = u32(r12_1);
    ea_5 = r13 + 0x18u;  // (from the original)
    *gptr<u32>(ea_5) = u32(r8_1);
    *gptr<u32>(ea_5 + 4) = u32(r9_2);
    ea_6 = r13;
    *gptr<u8>(ea_6) = u8(3u);
    ea_7 = r13 + 3u;
    *gptr<u8>(ea_7) = u8(u32(*global_0097ea38));
    ea_8 = r13 + 4u;
    *gptr<u32>(ea_8) = u32(r0);
    *gptr<u32>(ea_8 + 4) = u32(r3);
    r4_1 = r13 + 0xcu;  // (from the original)
    *gptr<u32>(r4_1) = u32(r1_1);
    *gptr<u32>(r4_1 + 4) = u32(r2_1);
    *gptr<u32>(r4_1 + 8) = u32(r7_1);
    guest::cpu()->r[13] = r13;
    r0_1 = call_00136464(r0, r1_1, r2_1, r3);
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r1_2 = r13;
    r0_2 = r0_1 + 0x58u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_0013a834(r0_2, r1_2, r2_2, r3_1);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_00136344
GUEST_EXPORT(0x00136344, d_00136344::f_00136344);

// f_00136490: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00136490 {

inline guest::global<u32, 0x00974af0> global_00974af0;  // (from the original)

u32 f_00136490() {
    u32 r0_1 = 0;
    if ((*global_00974af0 & 7u) == 2u) {
        r0_1 = 1u;
    } else {
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_00136490
GUEST_EXPORT(0x00136490, d_00136490::f_00136490);

// f_00136530: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00136530 {

inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> call_00134250;  // (from the original)
inline constexpr guest::Function<0x0013a968, u32(u32, u32, u32, u32)> call_0013a968;  // (from the original)

u32 f_00136530(u32 r0) {
    u32 r0_1 = 0;
    u32 res_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_0013a968(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    res_1 = r0_1 >> 0x1f;  // (from the original)
    if (res_1 == 0) {
        guest::cpu()->r[13] += 8u;
        return res_1;
    }
    guest::cpu()->r[13] += 8u;
    return call_00134250(res_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00136530
GUEST_EXPORT(0x00136530, d_00136530::f_00136530);

// f_0013654c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013654c {

inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> call_00134250;  // (from the original)
inline constexpr guest::Function<0x0013a9a4, u32(u32, u32, u32, u32)> call_0013a9a4;  // (from the original)

u32 f_0013654c(u32 r0) {
    u32 r0_1 = 0;
    u32 res_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_0013a9a4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    res_1 = r0_1 >> 0x1f;  // (from the original)
    if (res_1 == 0) {
        guest::cpu()->r[13] += 8u;
        return res_1;
    }
    guest::cpu()->r[13] += 8u;
    return call_00134250(res_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0013654c
GUEST_EXPORT(0x0013654c, d_0013654c::f_0013654c);

// f_001365d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001365d4 {

inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> call_00134250;  // (from the original)
inline constexpr guest::Function<0x00136598, u32(u32, u32, u32, u32)> call_00136598;  // (from the original)

u32 f_001365d4(u32 r0, u32 r1_unused, u32 r2) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r0_1 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r8 = r0;
    r1 = 0x4000188u;  // (from the original)
    r5 = 0xf9605002u;  // (from the original)
    r7 = 0xc9405001u;  // (from the original)
    r4 = 0u;
    r6 = r5 + 0x3fcu;  // (from the original)
L_1365f8:;
    r0_1 = call_00136598(r8, r1, r2, guest::cpu()->r[3]);
    res_1 = r0_1 & 0x80000000u;  // (from the original)
    r1 = res_1;
    r2 = r0_1;
    if (res_1 >> 0x1f) {  // (from the original)
        if (r0_1 == r7) {
            goto L_136650;
        }
        r1 = r0_1 & 0x3fc00u;  // (from the original)
        if (r1 != 0x2c00u) {  // (from the original)
            if (r0_1 == r6) {
                goto L_13664c;
            }
            res_2 = r2 >> 0x1f;  // (from the original)
            if (res_2 != 0) {
                call_00134250(res_2, r1, r2, guest::cpu()->r[3]);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
            }
        }
        r4 = r4 + 1u;
        if (s32(r4) < s32(2u)) {
            guest::preempt();
            goto L_1365f8;
        }
        goto L_13664c;
    }
    if (s32(r4) < s32(2u)) {
        r0_1 = 0u;
        goto L_136650;
    }
L_13664c:;
    r0_1 = r5;
L_136650:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_001365d4
GUEST_EXPORT(0x001365d4, d_001365d4::f_001365d4);

// f_00136718: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00136718 {

struct __attribute__((packed)) Object_00136718_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_00136718_1, word_0, 0x0);  // (from the original)


u32 f_00136718(u32 r0, gptr<Object_00136718_1> arg1) {
    u32 r1 = arg1.addr();
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r2_1 = 0;
    u32 r12_1 = 0;
    r3 = r0;
    guest::cpu()->r[13] -= 4u;
    r0 = arg1->word_0;
    if (r1 == r0) {
        guest::cpu()->r[13] += 4u;
        guest::cpu()->r[1] = r1;
        return r0;
    } else {
        r4 = 0u;
    }
    do {
L_136730:;
        r2_1 = *gptr<u32>(r1);
        r12_1 = *gptr<u32>(r1 + 4);
        *gptr<u32>(r2_1 + 4u) = u32(r12_1);
        *gptr<u32>(r12_1) = u32(r2_1);
        *gptr<u32>(r3) = u32(*gptr<u32>(r3) - 1u);
        *gptr<u32>(r1) = u32(r4);
        *gptr<u32>(r1 + 4u) = u32(r4);
        r1 = r2_1;
        guest::preempt();
    } while (r2_1 != r0);
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00136718
GUEST_EXPORT(0x00136718, d_00136718::f_00136718);

// f_00136764: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00136764 {

struct __attribute__((packed)) Object_00136764_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00136764_0, word_0, 0x0);  // (from the original)

inline guest::global<u32, 0x00975100> global_00975100;  // (from the original)

u32 f_00136764(gptr<Object_00136764_0> arg0) {
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 vf_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 res_2 = 0;
    u32 r1_4 = 0;
    u32 r1_5 = 0;
    r0_1 = arg0->word_0;
    r2_1 = *gptr<u32>(r0_1);
    res_1 = r2_1 - 0x20000009u;  // (from the original)
    nf_1 = res_1 >> 0x1f;  // (from the original)
    zf_1 = res_1 == 0;
    vf_1 = ((r2_1 ^ 0x20000009u) & (r2_1 ^ res_1)) >> 0x1f;  // (from the original)
    if (zf_1) {
        r1_1 = *gptr<u32>(0x975100u + 4u);  // (from the original)
        return guest::call_address<u32>(r1_1, r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    }
    if (!!zf_1 || nf_1 != vf_1) {
        if (r2_1 == 0x20000002u) {  // (from the original)
            r1_2 = *gptr<u32>(0x975100u + 0xcu);  // (from the original)
            return guest::call_address<u32>(r1_2, r0_1, r1_2, r2_1, guest::cpu()->r[3]);
        }
        if (r2_1 != 0x20000004u) {  // (from the original)
            guest::cpu()->r[1] = 0x975100u;  // (from the original)
            return r0_1;
        }
        r1_3 = *gptr<u32>(0x975100u + 8u);  // (from the original)
        return guest::call_address<u32>(r1_3, r0_1, r1_3, r2_1, guest::cpu()->r[3]);
    }
    res_2 = r2_1 - 0x20000011u;  // (from the original)
    if (res_2 == 0) {
        r1_4 = *global_00975100;
        return guest::call_address<u32>(r1_4, r0_1, r1_4, res_2, guest::cpu()->r[3]);
    }
    if (res_2 != 0x10u) {  // (from the original)
        guest::cpu()->r[1] = 0x975100u;  // (from the original)
        return r0_1;
    }
    r1_5 = *gptr<u32>(0x975100u + 0x10u);  // (from the original)
    return guest::call_address<u32>(r1_5, r0_1, r1_5, res_2, guest::cpu()->r[3]);
}

}  // namespace d_00136764
GUEST_EXPORT(0x00136764, d_00136764::f_00136764);

// f_00136860: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00136860 {

struct __attribute__((packed)) Object_00136860_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00136860_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0013e9e4, u32(u32, u32, u32, u32)> call_0013e9e4;  // (from the original)

u32 f_00136860(gptr<Object_00136860_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    ea_1 = arg0->word_0 + 0xc4u;  // (from the original)
    r1_1 = *gptr<u32>(ea_1);
    if (r1_1 == 0) {
        r0_1 = 0u;
    } else {
        r0_1 = ea_1 + r1_1;
    }
    *gptr<u32>(r13) = u32(r0_1);
    if (r0_1 != 0) {
        r0_2 = r13;
        guest::cpu()->r[13] = r13;
        r0_1 = call_0013e9e4(r0_2, r1_1, guest::cpu()->r[2], r3);
        r1_1 = guest::cpu()->r[1];
    }
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_00136860
GUEST_EXPORT(0x00136860, d_00136860::f_00136860);

// f_00136c9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00136c9c {

struct __attribute__((packed)) Object_00136c9c_0 {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
};
GUEST_OFFSET(Object_00136c9c_0, word_20, 0x20);  // (from the original)


u32 f_00136c9c(gptr<Object_00136c9c_0> arg0) {
    u32 r1_1 = 0;
    r1_1 = arg0->word_20;
    arg0->word_20 = u32(0u);
    guest::cpu()->r[1] = r1_1;
    return r1_1;
}

}  // namespace d_00136c9c
GUEST_EXPORT(0x00136c9c, d_00136c9c::f_00136c9c);

// f_00136cb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00136cb0 {

struct __attribute__((packed)) Object_00136cb0_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00136cb0_0, word_0, 0x0);  // (from the original)


u32 f_00136cb0(gptr<Object_00136cb0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r2_1 = 0;
    r2_1 = *gptr<u32>(arg0->word_0 + 0x20u);  // (from the original)
    return guest::call_address<u32>(r2_1, r0, 0u, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_00136cb0
GUEST_EXPORT(0x00136cb0, d_00136cb0::f_00136cb0);

// f_00136d2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00136d2c {

struct __attribute__((packed)) Object_00136d2c_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u8 unknown_14[0x44];  // (not used here)
    u8 byte_58;
};
GUEST_OFFSET(Object_00136d2c_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00136d2c_0, byte_58, 0x58);  // (from the original)

struct __attribute__((packed)) Object_00136d2c_1 {
    u8 unknown_0[0x50];  // (not used here)
    u32 word_50;
    u8 unknown_54[0x49];  // (not used here)
    u8 byte_9d;
};
GUEST_OFFSET(Object_00136d2c_1, word_50, 0x50);  // (from the original)
GUEST_OFFSET(Object_00136d2c_1, byte_9d, 0x9d);  // (from the original)

inline constexpr guest::Function<0x0013e7d8, u32(u32, u32, u32, u32)> call_0013e7d8;  // (from the original)

u32 f_00136d2c(gptr<Object_00136d2c_0> arg0, gptr<Object_00136d2c_1> arg1, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r12 = 0;
    u32 r14 = guest::cpu()->r[14];
    u32 r3_1 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 vf_1 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 res_2 = 0;
    u32 res_3 = 0;
    u32 nf_2 = 0;
    u32 zf_2 = 0;
    u32 vf_2 = 0;
    u32 r5_2 = 0;
    u32 r4_2 = 0;
    u32 res_4 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r12 = r1;
    r1 = arg0->word_10;
    if (r1 == r0 + 0x10u) {  // (from the original)
        goto L_136dfc;
    }
    r14 = u32(s32(s8(arg0->byte_58)));
    r2 = u32(arg1->byte_9d) + arg1->word_50;
L_136d54:;
    r3_1 = r1 - 0x108u;  // (from the original)
    if (r14 == 0) {
        goto L_136da8;
    }
    res_1 = r2 - 0x7fu;  // (from the original)
    nf_1 = res_1 >> 0x1f;  // (from the original)
    zf_1 = res_1 == 0;
    vf_1 = ((r2 ^ 0x7fu) & (r2 ^ res_1)) >> 0x1f;  // (from the original)
    r4_1 = 0x7fu;  // (from the original)
    if (zf_1 || nf_1 != vf_1) {
        nf_1 = r2 >> 0x1f;  // (from the original)
        vf_1 = 0u;
        r4_1 = r2;
    }
    r5_1 = 0u;
    if (nf_1 == vf_1) {
        r5_1 = r4_1;
    }
    r3 = *gptr<u32>(r3_1 + 0x50u) + u32(*gptr<u8>(r3_1 + 0x9du));  // (from the original)
    res_2 = r3 - 0x7fu;  // (from the original)
    if (res_2 != 0 && res_2 >> 0x1f == ((r3 ^ 0x7fu) & (r3 ^ res_2)) >> 0x1f) {  // (from the original)
        r3 = 0x7fu;  // (from the original)
        goto L_136d9c;
    }
    if (r3 >> 0x1f != (r3 & (r3 ^ r3)) >> 0x1f) {  // (from the original)
        r3 = 0u;
    }
L_136d9c:;
    if (s32(r5_1) <= s32(r3)) {
        goto L_136dfc;
    }
    goto L_136dec;
L_136da8:;
    res_3 = r2 - 0x7fu;  // (from the original)
    nf_2 = res_3 >> 0x1f;  // (from the original)
    zf_2 = res_3 == 0;
    vf_2 = ((r2 ^ 0x7fu) & (r2 ^ res_3)) >> 0x1f;  // (from the original)
    r5_2 = 0x7fu;  // (from the original)
    if (zf_2 || nf_2 != vf_2) {
        nf_2 = r2 >> 0x1f;  // (from the original)
        vf_2 = 0u;
        r5_2 = r2;
    }
    r4_2 = 0u;
    if (nf_2 == vf_2) {
        r4_2 = r5_2;
    }
    r3 = *gptr<u32>(r3_1 + 0x50u) + u32(*gptr<u8>(r3_1 + 0x9du));  // (from the original)
    res_4 = r3 - 0x7fu;  // (from the original)
    if (res_4 != 0 && res_4 >> 0x1f == ((r3 ^ 0x7fu) & (r3 ^ res_4)) >> 0x1f) {  // (from the original)
        r3 = 0x7fu;  // (from the original)
        goto L_136de4;
    }
    if (r3 >> 0x1f != (r3 & (r3 ^ r3)) >> 0x1f) {  // (from the original)
        r3 = 0u;
    }
L_136de4:;
    if (s32(r4_2) < s32(r3)) {
        goto L_136dfc;
    }
L_136dec:;
    r1 = *gptr<u32>(r1);
    r3 = r0 + 0x10u;  // (from the original)
    if (r1 != r3) {
        guest::preempt();
        goto L_136d54;
    }
L_136dfc:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    r0_1 = r0 + 0xcu;  // (from the original)
    r2_1 = r12 + 0x108u;  // (from the original)
    return call_0013e7d8(r0_1, r1, r2_1, r3);
}

}  // namespace d_00136d2c
GUEST_EXPORT(0x00136d2c, d_00136d2c::f_00136d2c);

// f_00136e0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00136e0c {

struct __attribute__((packed)) Object_00136e0c_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00136e0c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00136e0c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00136e0c_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0013b560, u32(u32, u32, u32, u32)> call_0013b560;  // (from the original)

u32 f_00136e0c(gptr<Object_00136e0c_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    r13 = r13 - 8;
    arg0->word_0 = u32(0x902278u);  // (from the original)
    arg0->word_4 = u32(0u);
    ea_1 = r0 + 8u;
    arg0->word_8 = u32(0u);
    r0_1 = ea_1 + 4u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_0013b560(r0_1, 0x902278u, r2, guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_2 + 0x20cu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_2) = u32(0x901e94u + 0x20u);  // (from the original)
    r0_3 = r0_2 - 0xcu;  // (from the original)
    *gptr<u32>(r0_3) = u32(0x901e94u);  // (from the original)
    *gptr<u32>(r0_3 + 0x21cu) = u32(0u);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = 0x901e94u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_00136e0c
GUEST_EXPORT(0x00136e0c, d_00136e0c::f_00136e0c);

// f_00136f2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00136f2c {

struct __attribute__((packed)) Object_00136f2c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00136f2c_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00138f08, u32(u32, u32, u32, u32)> call_00138f08;  // (from the original)
inline constexpr guest::Function<0x0013aea0, u32(u32, u32, u32, u32)> call_0013aea0;  // (from the original)
inline constexpr guest::Function<0x0013b22c, u32(u32, u32, u32, u32)> call_0013b22c;  // (from the original)
inline constexpr guest::Function<0x0013b438, u32(u32, u32, u32, u32)> call_0013b438;  // (from the original)
inline constexpr guest::Function<0x0013c240, u32(u32, u32, u32, u32)> call_0013c240;  // (from the original)
inline constexpr guest::Function<0x0013c2f0, u32(u32, u32, u32, u32)> call_0013c2f0;  // (from the original)
inline constexpr guest::Function<0x0013c718, u32(u32, u32, u32, u32)> call_0013c718;  // (from the original)

u32 f_00136f2c(gptr<Object_00136f2c_0> arg0, u32 r1, u32 r2, u32 r3) {
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
    u32 r4_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r2_3 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    r13 = r13 - 0x58u;  // (from the original)
    r8 = r0;
    r4_1 = ~0u;
    ea_1 = r13 + 0x58u;  // (from the original)
    r5 = *gptr<u32>(ea_1);
    r11 = 0u;
    ea_2 = r13 + 8u;
    *gptr<u32>(ea_2) = u32(r4_1);
    ea_3 = r13 + 0xcu;  // (from the original)
    *gptr<u32>(ea_3) = u32(r4_1);
    *gptr<u32>(ea_3 + 4) = u32(r11);
    r10 = r2;
    r0_1 = arg0->word_4;
    r6 = r1;
    r7 = r3;
    r2_1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0013c2f0(r0_1, r1, r2_1, r3);
    r1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_137084;
    }
    r0_2 = *gptr<u32>(r13 + 8u);
    if (r0_2 + 1u == 0) {
        goto L_1370d0;
    }
    r0_3 = *gptr<u32>(r8 + 4u);
    guest::cpu()->r[13] = r13;
    r0_4 = call_00138f08(r0_3, r0_2, r2_2, r3_1);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_4 != 1u) {
        if (r0_4 == 3u) {
            goto L_13708c;
        }
        goto L_1370d0;
    }
    r6 = *gptr<u32>(r13 + 8u);
    if (*gptr<u32>(r13 + 0xcu) >= r6) {  // (from the original)
        r9 = r13 + 0x14u;  // (from the original)
    } else {
        goto L_1370d0;
    }
L_136fb0:;
    if ((r7 & 1u) != 0) {
        r0_5 = *gptr<u32>(r8 + 4u);
        guest::cpu()->r[13] = r13;
        r0_6 = call_0013c718(r0_5, r6, r2, r3);
        *gptr<u32>(r13) = u32(r11);
        guest::cpu()->r[13] = r13;
        r0_7 = call_0013b438(r8, r0_6, r10, r5);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_7 == 0) {
            goto L_137080;
        }
    }
    if ((r7 & 0xcu) == 0) {  // (from the original)
        goto L_13706c;
    }
    r0_8 = ~0u;
    *gptr<u8>(r13 + 0x2cu) = u8(r11);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r11);  // (from the original)
    *gptr<u8>(r13 + 0x2du) = u8(r11);  // (from the original)
    *gptr<u32>(r13 + 0x28u) = u32(r11);  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(r0_8);  // (from the original)
    *gptr<u32>(r13 + 0x1cu) = u32(r0_8);  // (from the original)
    *gptr<u32>(r13 + 0x20u) = u32(r0_8);  // (from the original)
    *gptr<u32>(r13 + 0x24u) = u32(r0_8);  // (from the original)
    r0_9 = *gptr<u32>(r8 + 4u);
    r2_3 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_0013c240(r0_9, r6, r2_3, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_10 == 0) {
        goto L_137080;
    } else {
        r4 = 0u;
    }
    do {
L_137030:;
        r1 = *gptr<u32>(r9 + (r4 << 2) + 4u);
        if (!(r1 + 1u == 0)) {
            *gptr<u32>(r13) = u32(r5);
            guest::cpu()->r[13] = r13;
            r0_11 = call_0013b22c(r8, r1, r10, r7);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_11 == 0) {
                goto L_137080;
            }
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 4u);
L_13706c:;
    r6 = r6 + 1u;
    if (r6 <= *gptr<u32>(r13 + 0xcu)) {  // (from the original)
        guest::preempt();
        goto L_136fb0;
    }
    goto L_1370d0;
L_137080:;
    r0 = 0u;
L_137084:;
    r13 = r13 + 0x58u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_13708c:;
    r4 = *gptr<u32>(r13 + 8u);
    if (*gptr<u32>(r13 + 0xcu) < r4) {  // (from the original)
        goto L_1370d0;
    }
    do {
L_13709c:;
        *gptr<u32>(r13) = u32(r5);
        *gptr<u32>(r13 + 4) = u32(r6);
        guest::cpu()->r[13] = r13;
        r0 = call_0013aea0(r8, r4, r10, r7);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            guest::preempt();
            goto L_137084;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 <= *gptr<u32>(r13 + 0xcu));  // (from the original)
L_1370d0:;
    r13 = r13 + 0x58u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_00136f2c
GUEST_EXPORT(0x00136f2c, d_00136f2c::f_00136f2c);

// f_001370dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001370dc {

struct __attribute__((packed)) Object_001370dc_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_001370dc_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0013b22c, u32(u32, u32, u32, u32)> call_0013b22c;  // (from the original)
inline constexpr guest::Function<0x0013b438, u32(u32, u32, u32, u32)> call_0013b438;  // (from the original)
inline constexpr guest::Function<0x0013c240, u32(u32, u32, u32, u32)> call_0013c240;  // (from the original)
inline constexpr guest::Function<0x0013c718, u32(u32, u32, u32, u32)> call_0013c718;  // (from the original)

u32 f_001370dc(gptr<Object_001370dc_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r2_1 = 0;
    r13 = r13 - 0x40u;  // (from the original)
    r6 = r0;
    r5 = *gptr<u32>(r13 + 0x40u);  // (from the original)
    r4_1 = r1;
    r8 = r2;
    r7 = r3;
    if ((r3 & 1u) != 0) {
        r0_1 = arg0->word_4;
        guest::cpu()->r[13] = r13;
        r0_2 = call_0013c718(r0_1, r1, r2, r3);
        *gptr<u32>(r13) = u32(0u);
        guest::cpu()->r[13] = r13;
        r0_3 = call_0013b438(r6, r0_2, r8, r5);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        if (r0_3 == 0) {
            goto L_1371b8;
        }
    }
    if ((r7 & 0xcu) == 0) {  // (from the original)
        goto L_1371b4;
    }
    r0_4 = ~0u;
    *gptr<u8>(r13 + 0x1cu) = u8(0u);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u8>(r13 + 0x1du) = u8(0u);  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r0_4);
    *gptr<u32>(r13 + 0xcu) = u32(r0_4);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r0_4);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r0_4);  // (from the original)
    r0_5 = *gptr<u32>(r6 + 4u);
    r2_1 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_3 = call_0013c240(r0_5, r4_1, r2_1, r3);
    r1 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        goto L_1371b8;
    } else {
        r4 = 0u;
        r9 = r13 + 4u;
    }
    do {
L_137178:;
        r1 = *gptr<u32>(r9 + (r4 << 2) + 4u);
        if (!(r1 + 1u == 0)) {
            *gptr<u32>(r13) = u32(r5);
            guest::cpu()->r[13] = r13;
            r0_3 = call_0013b22c(r6, r1, r8, r7);
            r1 = guest::cpu()->r[1];
            if (r0_3 == 0) {
                goto L_1371b8;
            }
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 4u);
L_1371b4:;
    r0_3 = 1u;
L_1371b8:;
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_001370dc
GUEST_EXPORT(0x001370dc, d_001370dc::f_001370dc);

// f_001376d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001376d8 {

struct __attribute__((packed)) Object_001376d8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_001376d8_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0013a9e0, u32(u32, u32, u32, u32)> call_0013a9e0;  // (from the original)
inline constexpr guest::Function<0x0013edb4, u32(u32, u32, u32, u32)> call_0013edb4;  // (from the original)
inline constexpr guest::Function<0x0014077c, u32(u32, u32, u32, u32)> call_0014077c;  // (from the original)
inline constexpr guest::Function<0x00140900, u32(u32, u32, u32, u32)> call_00140900;  // (from the original)
inline constexpr guest::Function<0x001412f8, u32(u32, u32, u32, u32)> call_001412f8;  // (from the original)

u32 f_001376d8(gptr<Object_001376d8_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    if (arg0->word_0 != 0) {
        call_001412f8(r0, r1, r2, guest::cpu()->r[3]);
        r2_1 = guest::cpu()->r[2];
        r0_1 = *gptr<u32>(r0);
        call_0014077c(r0_1, 3u, r2_1, guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r0_2 = *gptr<u32>(r0);
        call_00140900(r0_2, r1_1, r2_2, guest::cpu()->r[3]);
        *gptr<u32>(r0) = u32(0u);
    }
    r1_2 = r1 + r2;
    r0_3 = r1 + 3u & ~3u;
    if (r0_3 > r1_2) {
        r0_4 = 0u;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return r0_4;
    }
    r1_3 = r1_2 - r0_3;
    r0_4 = call_0013a9e0(r0_3, r1_3, 0u, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    *gptr<u32>(r0) = u32(r0_4);
    if (r0_4 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return r0_4;
    }
    r0_4 = call_0013edb4(r0, r1_2, r2_3, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_4 != 0) {
        r0_4 = 1u;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0_4;
}

}  // namespace d_001376d8
GUEST_EXPORT(0x001376d8, d_001376d8::f_001376d8);

// f_0013775c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013775c {

struct __attribute__((packed)) Object_0013775c_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_0013775c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013775c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0013775c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0013775c_0, word_c, 0xc);  // (from the original)


void f_0013775c(gptr<Object_0013775c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r3_1 = 0;
    r3_1 = r0 + 8u;
    arg0->word_0 = u32(0u);
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(r3_1);
    arg0->word_c = u32(r3_1);
    return;
}

}  // namespace d_0013775c
GUEST_EXPORT(0x0013775c, d_0013775c::f_0013775c);

// f_00137830: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00137830 {

struct __attribute__((packed)) Object_00137830_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00137830_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0013b72c, u32(u32, u32, u32, u32)> call_0013b72c;  // (from the original)

u32 f_00137830(gptr<Object_00137830_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    r1_1 = arg0->word_4;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    return call_0013b72c(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00137830
GUEST_EXPORT(0x00137830, d_00137830::f_00137830);

// f_00137848: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00137848 {

struct __attribute__((packed)) Object_00137848_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_00137848_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00137848_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0013b72c, u32(u32, u32, u32, u32)> call_0013b72c;  // (from the original)
inline constexpr guest::Function<0x0013ef10, u32(u32, u32, u32, u32)> call_0013ef10;  // (from the original)

u32 f_00137848(gptr<Object_00137848_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r1_1 = arg0->word_4;
    arg0->word_0 = u32(0x902720u);  // (from the original)
    if (r1_1 != 0) {
        call_0013b72c(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[13] += 8u;
    return call_0013ef10(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00137848
GUEST_EXPORT(0x00137848, d_00137848::f_00137848);

// f_00137878: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00137878 {

struct __attribute__((packed)) Object_00137878_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x4];  // (not used here)
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u8 unknown_24[0x4];  // (not used here)
    u32 word_28;
    u32 word_2c;
    u32 word_30;
    u8 unknown_34[0x4];  // (not used here)
    u32 word_38;
    u32 word_3c;
    u32 word_40;
    u8 unknown_44[0x4];  // (not used here)
    u32 word_48;
    u32 word_4c;
    u32 word_50;
    u32 word_54;
    u32 word_58;
    u32 word_5c;
    u8 byte_60;
    u8 byte_61;
};
GUEST_OFFSET(Object_00137878_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00137878_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00137878_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00137878_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00137878_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00137878_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_00137878_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_00137878_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_00137878_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_00137878_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_00137878_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_00137878_0, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_00137878_0, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_00137878_0, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_00137878_0, word_48, 0x48);  // (from the original)
GUEST_OFFSET(Object_00137878_0, word_4c, 0x4c);  // (from the original)
GUEST_OFFSET(Object_00137878_0, word_50, 0x50);  // (from the original)
GUEST_OFFSET(Object_00137878_0, word_54, 0x54);  // (from the original)
GUEST_OFFSET(Object_00137878_0, word_58, 0x58);  // (from the original)
GUEST_OFFSET(Object_00137878_0, word_5c, 0x5c);  // (from the original)
GUEST_OFFSET(Object_00137878_0, byte_60, 0x60);  // (from the original)
GUEST_OFFSET(Object_00137878_0, byte_61, 0x61);  // (from the original)


u32 f_00137878(gptr<Object_00137878_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    arg0->word_0 = u32(0u);
    arg0->word_4 = u32(0u);
    r2_1 = ~2u;
    arg0->word_10 = u32(0u);
    arg0->word_20 = u32(0u);
    arg0->word_30 = u32(0u);
    r3_1 = ~0u;
    arg0->word_40 = u32(0u);
    arg0->word_8 = u32(r2_1);
    arg0->word_c = u32(r3_1);
    arg0->word_18 = u32(r2_1);
    arg0->word_1c = u32(r3_1);
    arg0->word_38 = u32(r2_1);
    arg0->word_3c = u32(r3_1);
    arg0->word_28 = u32(r2_1);
    arg0->word_2c = u32(r3_1);
    arg0->word_58 = u32(0u);
    arg0->word_5c = u32(0u);
    arg0->byte_60 = u8(0u);
    arg0->byte_61 = u8(0u);
    r0_1 = r0 + 0x48u;  // (from the original)
    arg0->word_48 = u32(r2_1);
    arg0->word_4c = u32(r3_1);
    arg0->word_50 = u32(r2_1);
    arg0->word_54 = u32(r3_1);
    guest::cpu()->r[1] = 0u;
    return r0_1;
}

}  // namespace d_00137878
GUEST_EXPORT(0x00137878, d_00137878::f_00137878);

// f_0013796c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013796c {

struct __attribute__((packed)) Object_0013796c_0 {
    u8 unknown_0[0x2d0];  // (not used here)
    u8 byte_2d0;
};
GUEST_OFFSET(Object_0013796c_0, byte_2d0, 0x2d0);  // (from the original)

inline guest::global<u32, 0x0087bdb4> global_0087bdb4;  // (from the original)
inline guest::global<u32, 0x00953658> global_00953658;  // (from the original)
inline constexpr guest::Function<0x0013b7dc, u32(u32, u32, u32, u32)> call_0013b7dc;  // (from the original)

u32 f_0013796c(gptr<Object_0013796c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 ea_1 = 0;
    r13 = r13 - 8;
    r0_1 = u32(arg0->byte_2d0);
    if (r0_1 == 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r0_2 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0013b7dc(r0_2, r1, r2, r3);
    r1_1 = *global_0087bdb4;
    r2_1 = *gptr<u32>(0x87bdb4u + 4);  // (from the original)
    ea_1 = r0 + 0x2c8u;  // (from the original)
    *gptr<u32>(ea_1) = u32(r1_1);
    *gptr<u32>(ea_1 + 4) = u32(r2_1);
    *gptr<u8>(r0 + 0x2d0u) = u8(0u);  // (from the original)
    *global_00953658 = u32(0u);
    r13 = r13 + 8;
    guest::cpu()->r[1] = 0x953658u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_0013796c
GUEST_EXPORT(0x0013796c, d_0013796c::f_0013796c);

// f_001379b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001379b4 {

inline guest::global<u32, 0x00953658> global_00953658;  // (from the original)
inline constexpr guest::Function<0x0013b80c, u32(u32, u32, u32, u32)> call_0013b80c;  // (from the original)

u32 f_001379b4(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0xcu;  // (from the original)
    *gptr<u32>(0x953658u + 4u) = u32(0u);  // (from the original)
    *global_00953658 = u32(0u);
    r0_2 = call_0013b80c(r0_1, 0x953658u, 0u, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_3 = r0_2 - 0xcu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_3;
}

}  // namespace d_001379b4
GUEST_EXPORT(0x001379b4, d_001379b4::f_001379b4);

// f_001379e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001379e4 {

struct __attribute__((packed)) Object_001379e4_0 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u8 byte_8;
    u8 byte_9;
};
GUEST_OFFSET(Object_001379e4_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001379e4_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001379e4_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_001379e4_0, byte_9, 0x9);  // (from the original)


void f_001379e4(gptr<Object_001379e4_0> arg0) {
    u32 r1_1 = 0;
    r1_1 = u32(arg0->byte_0);
    if (r1_1 >= 4u) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    arg0->byte_0 = u8(0u);
    arg0->word_4 = u32(0u);
    arg0->byte_8 = u8(0u);
    arg0->byte_9 = u8(6u);
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_001379e4
GUEST_EXPORT(0x001379e4, d_001379e4::f_001379e4);

// f_00137c60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00137c60 {

struct __attribute__((packed)) Object_00137c60_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_00137c60_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00137c60_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00137c60_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00137c60_0, word_c, 0xc);  // (from the original)


void f_00137c60(gptr<Object_00137c60_0> arg0) {
    u32 r0 = arg0.addr();
    arg0->word_4 = u32(r0);
    arg0->word_8 = u32(0u);
    arg0->word_0 = u32(r0);
    arg0->word_c = u32(0x10u);  // (from the original)
    guest::cpu()->r[1] = 0x10u;  // (from the original)
    return;
}

}  // namespace d_00137c60
GUEST_EXPORT(0x00137c60, d_00137c60::f_00137c60);

// f_00137d88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00137d88 {

inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> call_00131280;  // (from the original)
inline constexpr guest::Function<0x0013cbdc, u32(u32, u32, u32, u32)> call_0013cbdc;  // (from the original)

u32 f_00137d88(u32 r0, u32 r1, u32 r2) {
    u32 vf_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    vf_1 = (r1 & (r1 ^ r1)) >> 0x1f;  // (from the original)
    if (r1 != 0 && r1 >> 0x1f == vf_1) {  // (from the original)
        r0_1 = r1 << 2;
        r0_2 = call_00131280(r0_1, r2, 4u, guest::cpu()->r[3]);
        *gptr<u32>(r0) = u32(r0_2);
        r0_3 = r0 + 4u;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_0013cbdc(r0_3, r0_2, r1, guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r2;
    return r0;
}

}  // namespace d_00137d88
GUEST_EXPORT(0x00137d88, d_00137d88::f_00137d88);

// f_00137dc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00137dc4 {

struct __attribute__((packed)) Object_00137dc4_0 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
    u16 half_c;
    u8 unknown_e[0x2];  // (not used here)
    u32 word_10;
    u16 half_14;
    u8 unknown_16[0x2];  // (not used here)
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u8 unknown_24[0xc];  // (not used here)
    u32 word_30;
    u32 word_34;
};
GUEST_OFFSET(Object_00137dc4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00137dc4_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00137dc4_0, half_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00137dc4_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00137dc4_0, half_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00137dc4_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_00137dc4_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_00137dc4_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_00137dc4_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_00137dc4_0, word_34, 0x34);  // (from the original)


void f_00137dc4(gptr<Object_00137dc4_0> arg0) {
    arg0->word_0 = u32(0u);
    arg0->word_8 = u32(0u);
    arg0->half_c = u16(0u);
    arg0->word_10 = u32(0u);
    arg0->half_14 = u16(0u);
    arg0->word_18 = u32(0u);
    arg0->word_1c = u32(0u);
    arg0->word_20 = u32(~0u);
    arg0->word_30 = u32(0u);
    arg0->word_34 = u32(0u);
    return;
}

}  // namespace d_00137dc4
GUEST_EXPORT(0x00137dc4, d_00137dc4::f_00137dc4);

// f_00137e84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00137e84 {

inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)

u32 f_00137e84(u32 r0) {
    u32 r0_1 = 0;
    r0_1 = r0 + 0x10u;  // (from the original)
    return call_001357ec(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00137e84
GUEST_EXPORT(0x00137e84, d_00137e84::f_00137e84);

// f_00137e8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00137e8c {

struct __attribute__((packed)) Object_00137e8c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00137e8c_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0013efb4, u32(u32, u32, u32, u32)> call_0013efb4;  // (from the original)

u32 f_00137e8c(gptr<Object_00137e8c_0> arg0) {
    u32 r0 = arg0.addr();
    arg0->word_0 = u32(0x904830u);  // (from the original)
    return call_0013efb4(r0, 0x904830u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00137e8c
GUEST_EXPORT(0x00137e8c, d_00137e8c::f_00137e8c);

// f_00137e9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00137e9c {

inline constexpr guest::Function<0x0013b910, u32(u32, u32, u32, u32)> call_0013b910;  // (from the original)

u32 f_00137e9c(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_0013b910(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_1) = u32(0x905018u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0x905018u;  // (from the original)
    return r0_1;
}

}  // namespace d_00137e9c
GUEST_EXPORT(0x00137e9c, d_00137e9c::f_00137e9c);

// f_00137ec0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00137ec0 {

struct __attribute__((packed)) Object_00137ec0_0 {
    u8 unknown_0[0x70];  // (not used here)
    u16 half_70;
};
GUEST_OFFSET(Object_00137ec0_0, half_70, 0x70);  // (from the original)

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x00138560, u32(u32, u32, u32, u32)> call_00138560;  // (from the original)

u32 f_00137ec0(gptr<Object_00137ec0_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    u32 res_1 = 0;
    u32 r1_1 = 0;
    u32 r5_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = r0 + 0x54u;  // (from the original)
    r4_1 = 0u;
    res_1 = u32(arg0->half_70) & 1u;
    r1_1 = res_1;
    if (res_1 != 0) {
        r1_1 = 1u;
    }
    if (r1_1 != 0) {
        r4_1 = r0_1;
        call_00135740(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r5_1 = r0 + 0x40u;  // (from the original)
    r1_2 = *gptr<u32>(r5_1 + 0xcu) + r1;  // (from the original)
    call_00138560(r5_1, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r0_2 = *gptr<u32>(r5_1 + 8u) + 1u;
    *gptr<u32>(r5_1 + 8u) = u32(r0_2);
    if (r4_1 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_00137e84(r4_1, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return r0_2;
}

}  // namespace d_00137ec0
GUEST_EXPORT(0x00137ec0, d_00137ec0::f_00137ec0);

// f_001382cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001382cc {

struct __attribute__((packed)) Object_001382cc_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_001382cc_0, word_4, 0x4);  // (from the original)

inline guest::global<u8, 0x0097e854> global_0097e854;  // (from the original)
inline constexpr guest::Function<0x0013ff84, u32(u32, u32, u32, u32)> call_0013ff84;  // (from the original)

u32 f_001382cc(gptr<Object_001382cc_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    *global_0097e854 = u8(1u);
    arg0->word_4 = u32(r1);
    r0_1 = call_0013ff84(1u, r1, 0x97e854u, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    *gptr<u32>(r0) = u32(r0_1);
    guest::cpu()->r[13] += 8u;
    return r0_1;
}

}  // namespace d_001382cc
GUEST_EXPORT(0x001382cc, d_001382cc::f_001382cc);

// f_00138398: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00138398 {

struct __attribute__((packed)) Object_00138398_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x3];  // (not used here)
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_00138398_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00138398_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00138398_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00138398_0, byte_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00138398_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00138398_0, word_14, 0x14);  // (from the original)


void f_00138398(gptr<Object_00138398_0> arg0) {
    arg0->word_4 = u32(0u);
    arg0->word_0 = u32(0x905ac4u);  // (from the original)
    arg0->word_8 = u32(0u);
    arg0->byte_c = u8(0xffu);  // (from the original)
    arg0->word_10 = u32(0u);
    arg0->word_14 = u32(0u);
    guest::cpu()->r[1] = 0xffu;  // (from the original)
    return;
}

}  // namespace d_00138398
GUEST_EXPORT(0x00138398, d_00138398::f_00138398);

// f_001385fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001385fc {

struct __attribute__((packed)) Object_001385fc_0 {
    u32 word_0;
    u8 unknown_4[0x10];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Object_001385fc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001385fc_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_001385fc_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_001385fc_0, word_1c, 0x1c);  // (from the original)

inline constexpr guest::Function<0x0012bfec, u32(u32, u32, u32, u32)> call_0012bfec;  // (from the original)
inline constexpr guest::Function<0x0013a37c, u32(u32, u32, u32, u32)> call_0013a37c;  // (from the original)
inline constexpr guest::Function<0x0013a38c, u32(u32, u32, u32, u32)> call_0013a38c;  // (from the original)

u32 f_001385fc(gptr<Object_001385fc_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 ea_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r2_1 = r0 + 0x14u;  // (from the original)
    arg0->word_0 = u32(0x90601cu);  // (from the original)
    r1_1 = r0 + 0x18u;  // (from the original)
    arg0->word_18 = u32(r2_1);
    arg0->word_1c = u32(0u);
    ea_1 = r0 + 0x14u;  // (from the original)
    arg0->word_14 = u32(r2_1);
    r0_1 = ea_1 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_0012bfec(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    ea_2 = r0_2 + 0x1cu;  // (from the original)
    *gptr<u32>(ea_2) = u32(0u);
    r0_3 = ea_2 + 4u;
    guest::cpu()->r[13] = r13;
    r0_4 = call_0013a38c(r0_3, r1_2, r2_2, guest::cpu()->r[3]);
    r2_3 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    call_0013a37c(r0_4, 0u, r2_3, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r0_5 = r0_4 - 0x40u;  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_5;
}

}  // namespace d_001385fc
GUEST_EXPORT(0x001385fc, d_001385fc::f_001385fc);

// f_001386f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001386f4 {

struct __attribute__((packed)) Object_001386f4_0 {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Object_001386f4_0, word_3c, 0x3c);  // (from the original)

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x0013bb88, u32(u32, u32, u32, u32)> call_0013bb88;  // (from the original)

u32 f_001386f4(gptr<Object_001386f4_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    r1_1 = arg0->word_3c;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0_1 = r0 + 0xcu;  // (from the original)
    ea_1 = r13 - 8;
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r14);
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    call_0013bb88(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    call_00135740(0xae55f0u, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_3 = u32(*gptr<u8>(0x975c30u + 2u)) - 1u;  // (from the original)
    *gptr<u8>(0x975c30u + 2u) = u8(r1_3);  // (from the original)
    ea_2 = r13;
    r13 = r13 + 8;
    r4_1 = *gptr<u32>(ea_2);
    r14 = *gptr<u32>(ea_2 + 4);
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4_1;
    return call_00137e84(0xae55f0u, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_001386f4
GUEST_EXPORT(0x001386f4, d_001386f4::f_001386f4);

// f_00138998: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00138998 {

struct __attribute__((packed)) Object_00138998_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00138998_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00139724, u32(u32, u32, u32, u32)> call_00139724;  // (from the original)

u32 f_00138998(gptr<Object_00138998_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = arg0->word_0;
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0_1;
    }
    call_00139724(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0) = u32(0u);
    *gptr<u32>(r0 + 4u) = u32(0u);
    guest::cpu()->r[13] += 8u;
    return 0u;
}

}  // namespace d_00138998
GUEST_EXPORT(0x00138998, d_00138998::f_00138998);

// f_001389c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001389c0 {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_001389c0(u32 r0) {
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    call_002f76ac(r0, 0x13bedcu, 0x40u, 8u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0;
}

}  // namespace d_001389c0
GUEST_EXPORT(0x001389c0, d_001389c0::f_001389c0);

// f_001389e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001389e4 {


void f_001389e4(u32 r0) {
    return;
}

}  // namespace d_001389e4
GUEST_EXPORT(0x001389e4, d_001389e4::f_001389e4);

// f_00138a00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00138a00 {


void f_00138a00(u32 r0) {
    return;
}

}  // namespace d_00138a00
GUEST_EXPORT(0x00138a00, d_00138a00::f_00138a00);

// f_00138a1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00138a1c {


void f_00138a1c(u32 r0) {
    return;
}

}  // namespace d_00138a1c
GUEST_EXPORT(0x00138a1c, d_00138a1c::f_00138a1c);

// f_00138c2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00138c2c {

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x00138f30, u32(u32, u32, u32, u32)> call_00138f30;  // (from the original)

u32 f_00138c2c(u32 r0, u32 r1) {
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    if (r1 >= 6u) {
        r0_3 = ~0u;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return r0_3;
    }
    r4_1 = *gptr<u32>(r0 + (r1 << 2) + 0x14u);  // (from the original)
    if (r4_1 == 0) {
        r0_3 = ~0u;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return r0_3;
    }
    r5_1 = r4_1 + 4u;
    call_00135748(r5_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_1 = r4_1 + 0x10u;  // (from the original)
    r0_2 = call_00138f30(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    call_001357ec(r5_1, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0_2;
}

}  // namespace d_00138c2c
GUEST_EXPORT(0x00138c2c, d_00138c2c::f_00138c2c);

// f_00138c78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00138c78 {

struct __attribute__((packed)) Object_00138c78_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00138c78_0, word_0, 0x0);  // (from the original)


u32 f_00138c78(gptr<Object_00138c78_0> arg0) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    r1_1 = guest::cpu()->tls;
    r0_1 = *gptr<u32>(r1_1 + (arg0->word_0 << 2));
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00138c78
GUEST_EXPORT(0x00138c78, d_00138c78::f_00138c78);

// f_00138f08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00138f08 {

struct __attribute__((packed)) Object_00138f08_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00138f08_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0013f718, u32(u32, u32, u32, u32)> call_0013f718;  // (from the original)
inline constexpr guest::Function<0x00141728, u32(u32, u32, u32, u32)> call_00141728;  // (from the original)

u32 f_00138f08(gptr<Object_00138f08_0> arg0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = *gptr<u32>(arg0->word_4 + 0x3cu);  // (from the original)
    r0_2 = call_00141728(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0_2;
    }
    guest::cpu()->r[13] += 8u;
    return call_0013f718(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00138f08
GUEST_EXPORT(0x00138f08, d_00138f08::f_00138f08);

// f_00138f30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00138f30 {

struct __attribute__((packed)) Object_00138f30_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00138f30_0, word_4, 0x4);  // (from the original)


u32 f_00138f30(gptr<Object_00138f30_0> arg0) {
    u32 r0_1 = 0;
    r0_1 = arg0->word_4 - 1u;
    return r0_1;
}

}  // namespace d_00138f30
GUEST_EXPORT(0x00138f30, d_00138f30::f_00138f30);

// f_001391c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001391c4 {

inline constexpr guest::Function<0x00131294, u32(u32, u32, u32, u32)> call_00131294;  // (from the original)

u32 f_001391c4(u32 r0, u32 r1) {
    return call_00131294(r1, r0, guest::cpu()->r[2], 0u);
}

}  // namespace d_001391c4
GUEST_EXPORT(0x001391c4, d_001391c4::f_001391c4);

// f_001391d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001391d8 {

inline constexpr guest::Function<0x00131294, u32(u32, u32, u32, u32)> call_00131294;  // (from the original)

u32 f_001391d8(u32 r0) {
    return call_00131294(0u, r0, 4u, 0u);
}

}  // namespace d_001391d8
GUEST_EXPORT(0x001391d8, d_001391d8::f_001391d8);

// f_001391ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001391ec {


void f_001391ec(u32 r0, u32 r1, u32 r2) {
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r12_1 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 r4_1 = 0;
    u32 r3_1 = 0;
    u32 res_1 = 0;
    u32 r3_2 = 0;
    u32 res_2 = 0;
    u32 nf_1 = 0;
    u32 zf_2 = 0;
    u32 ea_1 = 0;
    u32 res_3 = 0;
    u32 ea_2 = 0;
    r13 = r13 - 0x14;  // (from the original)
    r7 = 0x974a7cu;  // (from the original)
    r3 = *gptr<u32>(r7);
    r12_1 = *gptr<u32>(r7 + 4);
    if (r12_1 <= r3 + ((r1 & ~1u) + (r1 >> 7 << 1) << 2) + 8u) {
        *gptr<u32>(r7) = u32(r12_1);
        goto L_1392a8;
    }
    zf_1 = r1 == 0;
    cf_1 = r1 >= 0u;
    r6 = 0u;
    if (cf_1 && !zf_1) {
        r8 = r6 - 0x100000u;  // (from the original)
    }
    if (!cf_1 || zf_1) {
        goto L_1392a4;
    }
L_139228:;
    r4_1 = r1 - r6;
    if (r4_1 > 0x80u) {  // (from the original)
        r4_1 = 0x80u;  // (from the original)
    }
    r12 = r4_1 >> 1;
    *gptr<u32>(r3) = u32(r2);
    r3_1 = r3 + 4u;
    r4 = r8 + (r4_1 << 0x14) | r0 + r6 | 0x80000000u | 0xf0000u;  // (from the original)
    res_1 = r12 + 0x80000001u;  // (from the original)
    *gptr<u32>(r3_1) = u32(r4);
    r3 = r3_1 + 4u;
    if (res_1 >= r12 || res_1 == 0) {
        goto L_139270;
    }
    do {
L_13925c:;
        *gptr<u32>(r3) = u32(r2);
        r3_2 = r3 + 4u;
        res_2 = r12 - 1u;
        r12 = res_2;
        *gptr<u32>(r3_2) = u32(r2);
        r3 = r3_2 + 4u;
        guest::preempt();
    } while (res_2 != 0);
    goto L_139298;
L_139270:;
    r5 = r12 << 1;
    nf_1 = r5 >> 0x1f;  // (from the original)
    zf_2 = r5 == 0;
    if (!zf_2 && nf_1 == 0u) {
        r4 = r3 - 4u;
        r5 = u32(s32(r5) >> 1);
    }
    if (zf_2 || nf_1 != 0u) {
        goto L_139298;
    }
    do {
L_139284:;
        ea_1 = r4 + 4u;
        *gptr<u32>(ea_1) = u32(r2);
        res_3 = r5 - 1u;
        r5 = res_3;
        ea_2 = r4 + 8u;
        *gptr<u32>(ea_2) = u32(r2);
        r4 = ea_2;
        guest::preempt();
    } while (res_3 != 0);
    r3 = r3 + (r12 << 3);
L_139298:;
    r6 = r6 + 0x80u;  // (from the original)
    if (r6 < r1) {
        guest::preempt();
        goto L_139228;
    }
L_1392a4:;
    *gptr<u32>(r7) = u32(r3);
L_1392a8:;
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[13] = r13;
    return;
}

}  // namespace d_001391ec
GUEST_EXPORT(0x001391ec, d_001391ec::f_001391ec);

// f_00139448: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00139448 {


u32 f_00139448() {
    u32 r0_1 = 0;
    r0_1 = guest::cpu()->tls + 0x5cu;  // (from the original)
    return r0_1;
}

}  // namespace d_00139448
GUEST_EXPORT(0x00139448, d_00139448::f_00139448);

// f_00139454: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00139454 {

inline guest::global<u32, 0x0097d784> global_0097d784;  // (from the original)

u32 f_00139454(u32 r0) {
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r2_2 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    u32 zf_1 = 0;
    u32 res_2 = 0;
    u32 r0_3 = 0;
    u32 r3_2 = 0;
    r2_1 = *global_0097d784;
    r1_1 = r2_1 + 0x6a0u;  // (from the original)
    r3_1 = r2_1 + 0x458u;  // (from the original)
    if (r0 == 0x10u) {  // (from the original)
        *gptr<u32>(r1_1) = u32(0u);
        *gptr<u32>(r1_1 + 0x48u) = u32(0u);  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r2_2 = r1_1 + (r0 << 2);
    r1_2 = r3_1 + (r0 + (r0 << 1) << 3);
    r0_1 = *gptr<u32>(r1_2);
    *gptr<u32>(r2_2 + 4u) = u32(r0_1);
    *gptr<u32>(r2_2 + 0x4cu) = u32(r0_1);  // (from the original)
    r0_2 = *gptr<u32>(r1_2 + 8u);
    res_1 = r0_2 - 0x1400u;  // (from the original)
    zf_1 = res_1 == 0;
    if (!zf_1) {
        res_2 = r0_2 - 0x1401u;  // (from the original)
        zf_1 = res_2 == 0;
        r0_2 = res_2;
    }
    if (zf_1) {
        r0_3 = 1u;
        goto L_1394b8;
    }
    if (r0_2 == 1u) {
        r0_3 = 2u;
        goto L_1394b8;
    }
    if (r0_2 == 5u) {
        r0_3 = 4u;
    } else {
        r0_3 = 0u;
    }
L_1394b8:;
    r3_2 = *gptr<u32>(r1_2 + 0xcu);  // (from the original)
    if (r3_2 == 0) {
        r1_2 = *gptr<u32>(r1_2 + 4u);
        r3_2 = r1_2 * r0_3;
    }
    *gptr<u32>(r2_2 + 0x8cu) = u32(r3_2);  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0_3;
}

}  // namespace d_00139454
GUEST_EXPORT(0x00139454, d_00139454::f_00139454);

// f_0013959c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013959c {

inline guest::global<u32, 0x008fac7c> global_008fac7c;  // (from the original)
inline constexpr guest::Function<0x0012ede8, u32(u32, u32, u32, u32)> call_0012ede8;  // (from the original)
inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> call_00134250;  // (from the original)
inline constexpr guest::Function<0x0013d85c, u32(u32, u32, u32, u32)> call_0013d85c;  // (from the original)
inline constexpr guest::Function<0x0013df14, u32(u32, u32, u32, u32)> call_0013df14;  // (from the original)

u32 f_0013959c(u32 r0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r4_1 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u32>(r13 + 8u) = u32(0u);
    *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(0u);  // (from the original)
    r1_1 = *global_008fac7c;
    r3_1 = r13;
    *gptr<u32>(r13) = u32(r1_1);
    *gptr<u32>(r13 + *gptr<u32>(r1_1 - 0x30u)) = u32(*gptr<u32>(0x8fac7cu + 0xcu));  // (from the original)
    r0_1 = r3_1 + 4u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_0013df14(r0_1, r0, 1u, r3_1);
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r1_2 = (r0_2 & 0x3fc00u) >> 0xa;  // (from the original)
    if (r1_2 != 0x11u) {  // (from the original)
        goto L_139618;
    }
    r1_2 = r0_2 << 0x16 >> 0x16;  // (from the original)
    if (s32(r1_2) < s32(0x64u)) {  // (from the original)
        goto L_139618;
    }
    if (s32(r1_2) <= s32(0xb3u)) {  // (from the original)
        r4_1 = 0u;
        goto L_13961c;
    }
L_139618:;
    r4_1 = 1u;
L_13961c:;
    res_1 = r0_2 & 0x80000000u;  // (from the original)
    if (res_1 >> 0x1f) {  // (from the original)
        goto L_13964c;
    }
    res_2 = *gptr<u32>(r13 + 4u) & ~1u;
    if (res_2 == 0) {
        goto L_13964c;
    }
    r0_3 = *gptr<u32>(r13 + 4u);
    if ((r0_3 & 1u) != 0) {
        guest::cpu()->r[13] = r13;
        call_00134250(r0_3, r1_2, r2_1, r3_2);
        r1_2 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
    }
    r0_4 = *gptr<u32>(r13 + 4u) & ~1u;
    guest::cpu()->r[13] = r13;
    call_0012ede8(r0_4, r1_2, r2_1, r3_2);
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 4u) = u32(0u);
L_13964c:;
    r0_5 = r13;
    guest::cpu()->r[13] = r13;
    call_0013d85c(r0_5, 0u, r2_1, r3_2);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r4_1;
}

}  // namespace d_0013959c
GUEST_EXPORT(0x0013959c, d_0013959c::f_0013959c);

// f_00139674: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00139674 {

inline guest::global<u32, 0x00975284> global_00975284;  // (from the original)

u32 f_00139674(u32 r0) {
    u32 sco = 0;
    u32 r1_1 = 0;
    u32 cf_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 b_1 = 0;
    u32 res_1 = 0;
    u32 r0_1 = 0;
    r1_1 = *global_00975284;
    cf_1 = r1_1 >= 0u;
    if (r1_1 == 0u) {
        r1_2 = 0x975280u;  // (from the original)
    } else {
        r1_2 = r1_1 + 0xc4u;  // (from the original)
    }
    r1_3 = *gptr<u32>(r1_2);
    sco = cf_1;
    b_1 = lsl_rc(1u, r0 & 0xff, &sco);  // (from the original)
    res_1 = r1_3 & b_1;
    r0_1 = res_1;
    if (res_1 != 0) {
        r0_1 = 1u;
    }
    guest::cpu()->r[1] = r1_3;
    return r0_1;
}

}  // namespace d_00139674
GUEST_EXPORT(0x00139674, d_00139674::f_00139674);

// f_001396a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001396a4 {

inline constexpr guest::Function<0x0013d028, u32(u32, u32, u32, u32)> call_0013d028;  // (from the original)
inline constexpr guest::Function<0x0013d138, u32(u32, u32, u32, u32)> call_0013d138;  // (from the original)

u32 f_001396a4(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_0013d028(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0_1;
    }
    r0_2 = call_0013d138(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_3 = u32(*gptr<u8>(r0_2 + 0xc0u));  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0_3;
}

}  // namespace d_001396a4
GUEST_EXPORT(0x001396a4, d_001396a4::f_001396a4);

// f_001396c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001396c0 {

inline constexpr guest::Function<0x0013d028, u32(u32, u32, u32, u32)> call_0013d028;  // (from the original)
inline constexpr guest::Function<0x0013d138, u32(u32, u32, u32, u32)> call_0013d138;  // (from the original)
inline constexpr guest::Function<0x0013d24c, u32(u32, u32, u32, u32)> call_0013d24c;  // (from the original)

u32 f_001396c0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r3_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_0013d028(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        r0_2 = call_0013d138(r0_1, r1_1, r2_1, r3_1);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        *gptr<u8>(r0_2 + 0xc0u) = u8(1u);  // (from the original)
        r0_3 = call_0013d138(r0_2, r1_2, r2_2, r3_2);
        *gptr<u32>(r0_3 + 0xc8u) = u32(0xau);  // (from the original)
    }
    r3_3 = r0 + 0x24u;  // (from the original)
    *gptr<u32>(r3_3) = u32(0u);
    *gptr<u32>(r3_3 + 4) = u32(r1);
    *gptr<u32>(r0 + 0x18u) = u32(0u);  // (from the original)
    *gptr<u32>(r0 + 0x20u) = u32(0u);  // (from the original)
    *gptr<u32>(r0 + 0x1cu) = u32(0u);  // (from the original)
    *gptr<u32>(r0 + 0xcu) = u32(0x13d24cu);  // (from the original)
    *gptr<u8>(r0 + 0x10u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0013d24c(r0, 0u, 0x13d24cu, r3_3);  // (from the original)
}

}  // namespace d_001396c0
GUEST_EXPORT(0x001396c0, d_001396c0::f_001396c0);

// f_00139724: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00139724 {

struct __attribute__((packed)) Object_00139724_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_00139724_0, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x0013d060, u32(u32, u32, u32, u32)> call_0013d060;  // (from the original)

u32 f_00139724(gptr<Object_00139724_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = arg0->word_c;
    if (r0_1 != 0) {
        call_0013d060(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 8u;
    return call_0013d060(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00139724
GUEST_EXPORT(0x00139724, d_00139724::f_00139724);

// f_00139a90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00139a90 {

inline constexpr guest::Function<0x001396a4, u32(u32, u32, u32, u32)> call_001396a4;  // (from the original)

u32 f_00139a90(u32 r0_unused, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r4 = 0x975274u;  // (from the original)
L_139a98:;
    r0_1 = *gptr<u32>(r4 + 4u);
    if (*gptr<u32>(r4 + 0x10u) == 0) {  // (from the original)
        goto L_139af8;
    }
    r0_2 = call_001396a4(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        guest::preempt();
        goto L_139a98;
    }
    r0_3 = *gptr<u32>(r4 + 0x10u);  // (from the original)
    if (r0_3 == 0) {
        r1_1 = 0x975280u;  // (from the original)
    } else {
        r1_1 = r0_3 + 0xc4u;  // (from the original)
    }
    r1_2 = *gptr<u32>(r1_1);
    if ((r1_2 & 4u) != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 3u;
    }
    if (r0_3 == 0) {
        r1_3 = 0x975280u;  // (from the original)
    } else {
        r1_3 = r0_3 + 0xc4u;  // (from the original)
    }
    r1 = *gptr<u32>(r1_3);
    if ((r1 & 8u) == 0) {
        r0_1 = *gptr<u32>(r0_3 + 0xc8u);  // (from the original)
        goto L_139af8;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return 3u;
L_139af8:;
    if (r0_1 == 0xau) {  // (from the original)
        guest::preempt();
        goto L_139a98;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00139a90
GUEST_EXPORT(0x00139a90, d_00139a90::f_00139a90);

// f_00139bb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00139bb0 {


u32 f_00139bb0(u32 r0, u32 r1, u32 r2) {
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 r0_1 = 0;
    u32 res_1 = 0;
    u32 v_1 = 0;
    u32 r0_2 = 0;
    r13 = r13 - 0x10;  // (from the original)
    ea_1 = r1 + r2 - 2u;
    *gptr<u16>(ea_1) = u16(0u);
    r5 = ea_1;
    zf_1 = r2 == 0;
    cf_1 = r2 >= 0u;
    if (cf_1 && !zf_1) {
        r4 = 0x1021u;  // (from the original)
        r6 = 0xffffu;  // (from the original)
    }
    r0 = uxth(r0);
    r12 = 0u;
    if (!cf_1 || zf_1) {
        goto L_139c18;
    }
L_139bd8:;
    r3 = 4u;
    do {
L_139bdc:;
        if ((r0 & 0x8000u) == 0) {  // (from the original)
            r0_1 = r6 & r0 << 1;
        } else {
            r0_1 = uxth(r4 ^ r0 << 1);
        }
        if ((r0_1 & 0x8000u) == 0) {  // (from the original)
            r0 = r6 & r0_1 << 1;
        } else {
            r0 = uxth(r4 ^ r0_1 << 1);
        }
        res_1 = r3 - 1u;
        r3 = res_1;
        guest::preempt();
    } while (res_1 != 0);
    v_1 = *gptr<u8>(r1);
    r1 = r1 + 1u;
    r12 = r12 + 1u;
    r0 = r0 ^ v_1;
    if (r12 < r2) {
        guest::preempt();
        goto L_139bd8;
    }
L_139c18:;
    r0_2 = rev16(r0);
    *gptr<u16>(r5) = u16(r0_2);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_00139bb0
GUEST_EXPORT(0x00139bb0, d_00139bb0::f_00139bb0);

// f_00139c30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00139c30 {

inline constexpr guest::Function<0x001396a4, u32(u32, u32, u32, u32)> call_001396a4;  // (from the original)

u32 f_00139c30(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r1_5 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = *gptr<u32>(0x975274u + 4u);  // (from the original)
    if (*gptr<u32>(0x975274u + 0x10u) == 0) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r0_2 = call_001396a4(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 0xau;  // (from the original)
    }
    r0_3 = *gptr<u32>(0x975274u + 0x10u);  // (from the original)
    if (r0_3 == 0) {
        r1_2 = 0x975280u;  // (from the original)
    } else {
        r1_2 = r0_3 + 0xc4u;  // (from the original)
    }
    r1_3 = *gptr<u32>(r1_2);
    if ((r1_3 & 4u) != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_3;
        return 3u;
    }
    if (r0_3 == 0) {
        r1_4 = 0x975280u;  // (from the original)
    } else {
        r1_4 = r0_3 + 0xc4u;  // (from the original)
    }
    r1_5 = *gptr<u32>(r1_4);
    if ((r1_5 & 8u) == 0) {
        r0_4 = *gptr<u32>(r0_3 + 0xc8u);  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_5;
        return r0_4;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_5;
    return 3u;
}

}  // namespace d_00139c30
GUEST_EXPORT(0x00139c30, d_00139c30::f_00139c30);

// f_00139dac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00139dac {

struct __attribute__((packed)) Object_00139dac_0 {
    u8 unknown_0[0x14];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Object_00139dac_0, byte_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x0013fd78, u32(u32, u32, u32, u32)> call_0013fd78;  // (from the original)
inline constexpr guest::Function<0x0014041c, u32(u32, u32, u32, u32)> call_0014041c;  // (from the original)
inline constexpr guest::Function<0x001404f0, u32(u32, u32, u32, u32)> call_001404f0;  // (from the original)
inline constexpr guest::Function<0x00140530, u32(u32, u32, u32, u32)> call_00140530;  // (from the original)
inline constexpr guest::Function<0x00140564, u32(u32, u32, u32, u32)> call_00140564;  // (from the original)
inline constexpr guest::Function<0x002f88b8, u32(u32, u32, u32, u32)> call_002f88b8;  // (from the original)

u32 f_00139dac(gptr<Object_00139dac_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 res_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = u32(arg0->byte_14);
    if (r0_1 != 0) {
        r0_2 = r0 + 0x34u;  // (from the original)
        call_0013fd78(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r0_3 = u32(*gptr<u8>(r0 + 0x14u));  // (from the original)
        if (r0_3 == 2u) {
            r0_4 = call_00140530(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            res_1 = r0_4 & 0x80000000u;  // (from the original)
            if (!(res_1 >> 0x1f)) {  // (from the original)
                *gptr<u32>(r0 + 0x2cu) = u32(0u);  // (from the original)
                *gptr<u8>(r0 + 0x14u) = u8(1u);  // (from the original)
            }
            *gptr<u8>(r0 + 0x16u) = u8(0u);  // (from the original)
            *gptr<u8>(r0 + 0x17u) = u8(0u);  // (from the original)
        }
        r0_5 = call_001404f0(0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r0_6 = call_0014041c(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        call_00140564(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r0_7 = *gptr<u32>(r0 + 0x28u);  // (from the original)
        if (r0_7 != 0) {
            call_002f88b8(r0_7, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            *gptr<u32>(r0 + 0x28u) = u32(0u);  // (from the original)
        }
        r0_1 = 2u;
        *gptr<u8>(r0 + 0x15u) = u8(r0_1);  // (from the original)
        *gptr<u8>(r0 + 0x14u) = u8(0u);  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0_1;
}

}  // namespace d_00139dac
GUEST_EXPORT(0x00139dac, d_00139dac::f_00139dac);

// f_0013a37c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013a37c {

struct __attribute__((packed)) Object_0013a37c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0013a37c_0, word_0, 0x0);  // (from the original)


u32 f_0013a37c(gptr<Object_0013a37c_0> arg0, u32 r1) {
    u32 r0_1 = 0;
    r0_1 = arg0->word_0;
    *gptr<u32>(guest::cpu()->tls + (r0_1 << 2)) = u32(r1);
    return r0_1;
}

}  // namespace d_0013a37c
GUEST_EXPORT(0x0013a37c, d_0013a37c::f_0013a37c);

// f_0013a38c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013a38c {

inline constexpr guest::Function<0x0012f204, u32(u32, u32, u32, u32)> call_0012f204;  // (from the original)

u32 f_0013a38c(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 cf = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    r12 = 0x974f74u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = 0u;
    r2 = u32(*gptr<u16>(r12));
    for (;;) {
L_13a3ac:;
        r0 = lsr_r(r2, r1 & 0xff);  // (from the original)
        if ((r0 & 1u) == 0) {
            goto L_13a3cc;
        }
        r1 = r1 + 1u;
        res_1 = r1 - 0x10u;  // (from the original)
        cf = r1 >= 0x10u;  // (from the original)
        if (!(res_1 >> 0x1f != ((r1 ^ 0x10u) & (r1 ^ res_1)) >> 0x1f)) {  // (from the original)
            break;
        }
L_13a3a4:;
        if (cf) {
            goto L_13a3cc;
        }
        guest::preempt();
    }
    r1 = ~0u;
    goto L_13a3e0;
L_13a3cc:;
    if (r1 >= 0x10u) {  // (from the original)
        goto L_13a3e0;
    }
    r0 = r2 | lsl_r(1u, r1 & 0xff);  // (from the original)
    *gptr<u16>(r12) = u16(r0);
L_13a3e0:;
    nf_1 = r1 >> 0x1f;  // (from the original)
    if (nf_1 != 0u) {
        r0 = 0xd8601838u;  // (from the original)
    }
    *gptr<u32>(r4) = u32(r1);
    if (nf_1 != 0u) {
        call_0012f204(r0, r1, r2, guest::cpu()->r[3]);
    }
    *gptr<u32>(0xae0f94u + (*gptr<u32>(r4) << 2)) = u32(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0u;
    return r4;
}

}  // namespace d_0013a38c
GUEST_EXPORT(0x0013a38c, d_0013a38c::f_0013a38c);

// f_0013a414: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013a414 {

struct __attribute__((packed)) Object_0013a414_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_0013a414_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0013a414_0, word_c, 0xc);  // (from the original)

inline guest::global<u32, 0x008a27c4> global_008a27c4;  // (from the original)
inline constexpr guest::Function<0x0013a5a4, u32(u32, u32, u32, u32)> call_0013a5a4;  // (from the original)
inline constexpr guest::Function<0x0013a62c, u32(u32, u32, u32, u32)> call_0013a62c;  // (from the original)

u32 f_0013a414(gptr<Object_0013a414_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r4_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4_1 = arg0->word_c;
    r2_1 = *global_008a27c4;
    if (r4_1 == 0) {
        r4_1 = arg0->word_8;
    }
    r0_1 = call_0013a5a4(r2_1, r0, r2_1, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r0_2 = r0_1 & 0x80000000u;  // (from the original)
    if (r0_2 >> 0x1f == (r0_2 & (r0_2 ^ r0_2)) >> 0x1f) {  // (from the original)
        call_0013a62c(r4_1, r1_1, r2_2, guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0013a414
GUEST_EXPORT(0x0013a414, d_0013a414::f_0013a414);

// f_0013a63c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013a63c {

struct __attribute__((packed)) Object_0013a63c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0013a63c_0, word_4, 0x4);  // (from the original)

inline guest::global<u8, 0x00974b99> global_00974b99;  // (from the original)
inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x0013e360, u32(u32, u32, u32, u32)> call_0013e360;  // (from the original)
inline constexpr guest::Function<0x001400b4, u32(u32, u32, u32, u32)> call_001400b4;  // (from the original)
inline constexpr guest::Function<0x001402b0, u32(u32, u32, u32, u32)> call_001402b0;  // (from the original)

u32 f_0013a63c(gptr<Object_0013a63c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r0_2 = 0;
    u32 r1_4 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    arg0->word_4 = u32(0u);
    if (u32(*global_00974b99) != 0) {
        call_0013e360(r0, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    call_00135748(0xae0aa0u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (u32(*gptr<u8>(0x974b99u + 3u)) != 0) {  // (from the original)
        r0_1 = *gptr<u32>(r0 + 0x3a8u);  // (from the original)
        call_001402b0(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        *gptr<u8>(0x974b99u + 3u) = u8(0u);  // (from the original)
    }
    call_001357ec(0xae0aa0u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    call_00135748(0xae0aa0u, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    if (u32(*gptr<u8>(0x974b99u + 4u)) != 0) {  // (from the original)
        r0_2 = *gptr<u32>(r0 + 0x558u);  // (from the original)
        call_001402b0(r0_2, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_3 = guest::cpu()->r[1];
        *gptr<u8>(0x974b99u + 4u) = u8(0u);  // (from the original)
    }
    call_001357ec(0xae0aa0u, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    if (u32(*gptr<u8>(0x974b99u + 1u)) != 0) {  // (from the original)
        call_001400b4(0u, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_4 = guest::cpu()->r[1];
        *gptr<u8>(0x974b99u + 1u) = u8(0u);  // (from the original)
    }
    if (u32(*gptr<u8>(r0 + 8u)) != 0) {
        *gptr<u8>(r0 + 8u) = u8(0u);
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    return 0u;
}

}  // namespace d_0013a63c
GUEST_EXPORT(0x0013a63c, d_0013a63c::f_0013a63c);

// f_0013a6f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013a6f8 {

inline constexpr guest::Function<0x0013a6f8, u32(u32, u32, u32, u32)> call_0013a6f8;  // (from the original)
inline constexpr guest::Function<0x0013a750, u32(u32, u32, u32, u32)> call_0013a750;  // (from the original)

u32 f_0013a6f8(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r6 = r0;
    r5 = r1;
    r4 = 0u;
L_13a708:;
    r0_1 = call_0013a750(r6, r4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r4 = r0_1;
    if (r0_1 != 0) {
        if (*gptr<u32>(r4 + 0x18u) > r5) {  // (from the original)
            guest::preempt();
            goto L_13a708;
        }
        if (r5 >= *gptr<u32>(r4 + 0x1cu)) {  // (from the original)
            guest::preempt();
            goto L_13a708;
        }
        r0_2 = r4 + 0xcu;  // (from the original)
        r0_1 = call_0013a6f8(r0_2, r5, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        if (r0_1 == 0) {
            r0_1 = r4;
        }
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0013a6f8
GUEST_EXPORT(0x0013a6f8, d_0013a6f8::f_0013a6f8);

// f_0013a750: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013a750 {

struct __attribute__((packed)) Object_0013a750_0 {
    u32 word_0;
    u8 unknown_4[0x6];  // (not used here)
    u16 half_a;
};
GUEST_OFFSET(Object_0013a750_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013a750_0, half_a, 0xa);  // (from the original)


u32 f_0013a750(gptr<Object_0013a750_0> arg0, u32 r1) {
    u32 r0_1 = 0;
    if (r1 == 0) {
        r0_1 = arg0->word_0;
    } else {
        r1 = r1 + 4u;
        r0_1 = *gptr<u32>(u32(arg0->half_a) + r1);
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_0013a750
GUEST_EXPORT(0x0013a750, d_0013a750::f_0013a750);

// f_0013a768: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013a768 {


u32 f_0013a768(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    ea_1 = r13 - 0xc;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    r13 = r13 - 0xc;  // (from the original)
    r0 = *gptr<u32>(r13);
    r1_1 = *gptr<u32>(r13 + 4);
    if (r0 == r1_1) {
        r13 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    do {
L_13a778:;
        *gptr<u32>(r13) = u32(r0 + 4u);
        *gptr<u32>(r0) = u32(r2);
        r0 = *gptr<u32>(r13);
        r1_2 = *gptr<u32>(r13 + 4);
        guest::preempt();
    } while (r0 != r1_2);
    r13 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0013a768
GUEST_EXPORT(0x0013a768, d_0013a768::f_0013a768);

// f_0013a9e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013a9e0 {

inline constexpr guest::Function<0x0013e75c, u32(u32, u32, u32, u32)> call_0013e75c;  // (from the original)

u32 f_0013a9e0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 ea_1 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 ea_2 = 0;
    r1_1 = r1 + r0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r3_1 = r1_1 & ~3u;
    r4_1 = r0 + 3u & ~3u;
    r0_1 = r4_1 - r3_1;
    if (r0_1 == 0 || r0_1 >> 0x1f != (r0_1 & (r0_1 ^ r0_1)) >> 0x1f) {  // (from the original)
        if (r3_1 - r4_1 >= 0x34u) {  // (from the original)
            goto L_13aa14;
        }
    }
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return 0u;
L_13aa14:;
    if (r4_1 != 0) {
        *gptr<u32>(r4_1 + 4u) = u32(0u);
        r1_2 = r4_1 + 0x1cu;  // (from the original)
        *gptr<u32>(r4_1 + 8u) = u32(0u);
        *gptr<u32>(r4_1 + 0x1cu) = u32(r1_2);  // (from the original)
        *gptr<u32>(r4_1 + 0x18u) = u32(0u);  // (from the original)
        *gptr<u32>(r4_1) = u32(0x9012acu);  // (from the original)
        *gptr<u32>(r4_1 + 0x20u) = u32(r1_2);  // (from the original)
    }
    *gptr<u32>(r13) = u32(r2);
    r2_1 = r4_1 + 0x34u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0013e75c(r4_1, 0x46524d48u, r2_1, r3_1);  // (from the original)
    ea_1 = r4_1 + 0xcu;  // (from the original)
    r0_2 = *gptr<u32>(ea_1);
    r1_3 = *gptr<u32>(ea_1 + 4);
    ea_2 = r4_1 + 0x28u;  // (from the original)
    *gptr<u32>(ea_2) = u32(r0_2);
    *gptr<u32>(ea_2 + 4) = u32(r1_3);
    *gptr<u32>(ea_2 + 8) = u32(0u);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r4_1;
}

}  // namespace d_0013a9e0
GUEST_EXPORT(0x0013a9e0, d_0013a9e0::f_0013a9e0);

// f_0013ad90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013ad90 {

inline guest::global<u32, 0x00975138> global_00975138;  // (from the original)

u32 f_0013ad90(u32 r0) {
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    r0_1 = *global_00975138;
    r2_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0xcu);  // (from the original)
    return guest::call_address<u32>(r2_1, r0_1, r0, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_0013ad90
GUEST_EXPORT(0x0013ad90, d_0013ad90::f_0013ad90);

// f_0013adac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013adac {

struct __attribute__((packed)) Object_0013adac_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
};
GUEST_OFFSET(Object_0013adac_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013adac_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0013adac_0, byte_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_0013adac_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0013adac_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013adac_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0013c850, u32(u32, u32, u32, u32)> call_0013c850;  // (from the original)

u32 f_0013adac(gptr<Object_0013adac_0> arg0, gptr<Object_0013adac_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0u);
    arg0->word_4 = u32(0u);
    arg0->byte_8 = u8(0u);
    if (r1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1_1 = arg1->word_0;
    if (r1_1 != 0x4b4e4243u) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0;
    }
    r1_2 = arg1->word_8 + 0xff000000u;  // (from the original)
    if (r1_2 > 0x100u) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return r0;
    }
    arg0->word_0 = u32(r1);
    r0_1 = call_0013c850(r1, r1_2, 0x4b4e4243u, guest::cpu()->r[3]);  // (from the original)
    *gptr<u8>(r0 + 8u) = u8(1u);
    *gptr<u32>(r0 + 4u) = u32(r0_1 + 8u);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 1u;
    return r0;
}

}  // namespace d_0013adac
GUEST_EXPORT(0x0013adac, d_0013adac::f_0013adac);

// f_0013ae10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013ae10 {

struct __attribute__((packed)) Object_0013ae10_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0013ae10_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013ae10_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0013ae10_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_0013ae10_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0013ae10_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013ae10_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0013f8cc, u32(u32, u32, u32, u32)> call_0013f8cc;  // (from the original)
inline constexpr guest::Function<0x0013f934, u32(u32, u32, u32, u32)> call_0013f934;  // (from the original)
inline constexpr guest::Function<0x0013f9a0, u32(u32, u32, u32, u32)> call_0013f9a0;  // (from the original)

u32 f_0013ae10(gptr<Object_0013ae10_0> arg0, gptr<Object_0013ae10_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    arg0->word_0 = u32(0u);
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(0u);
    r2_1 = arg1->word_0;
    if (r2_1 != 0x50524743u) {  // (from the original)
        goto L_13ae94;
    }
    if (arg1->word_8 + 0xff000000u > 0x10000u) {  // (from the original)
        goto L_13ae94;
    }
    r0_1 = call_0013f934(r1, r1, r2_1, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r0_2 = call_0013f8cc(r1, r1_1, r2_2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r0_3 = call_0013f9a0(r1, r1_2, r2_3, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        goto L_13ae94;
    }
    if (r0_2 == 0) {
        goto L_13ae94;
    }
    r1 = r0_1 + 8u;
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r0 + 4) = u32(r0_2 + 8u);
    if (r0_3 != 0) {
        *gptr<u32>(r0 + 8u) = u32(r0_3 + 8u);
    }
L_13ae94:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0013ae10
GUEST_EXPORT(0x0013ae10, d_0013ae10::f_0013ae10);

// f_0013b034: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013b034 {

struct __attribute__((packed)) Object_0013b034_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0013b034_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0013b438, u32(u32, u32, u32, u32)> call_0013b438;  // (from the original)
inline constexpr guest::Function<0x0013c718, u32(u32, u32, u32, u32)> call_0013c718;  // (from the original)
inline constexpr guest::Function<0x0013ea78, u32(u32, u32, u32, u32)> call_0013ea78;  // (from the original)
inline constexpr guest::Function<0x0013f2e4, u32(u32, u32, u32, u32)> call_0013f2e4;  // (from the original)

u32 f_0013b034(gptr<Object_0013b034_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r6_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    r13 = r13 - 0x30u;  // (from the original)
    r4_1 = *gptr<u32>(r13 + 0x34u);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(~0u);
    *gptr<u8>(r13 + 0xcu) = u8(0u);  // (from the original)
    r6_1 = *gptr<u32>(r13 + 0x30u);  // (from the original)
    r0_1 = arg0->word_4;
    r2_1 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_0013f2e4(r0_1, r1, r2_1, r3);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_13b0ec;
    }
    if (u32(*gptr<u8>(r13 + 0xcu)) != 0) {  // (from the original)
        *gptr<u32>(r13) = u32(r4_1);
        guest::cpu()->r[13] = r13;
        r0_2 = call_0013ea78(r0, r1, r2, r3);
        r1_1 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            goto L_13b0ec;
        }
        goto L_13b0e8;
    }
    r1_1 = r1;
    if ((r6_1 & 8u) == 0) {
        goto L_13b0e8;
    }
    r0_3 = *gptr<u32>(r0 + 4u);
    guest::cpu()->r[13] = r13;
    r0_4 = call_0013c718(r0_3, r1_1, r2_2, r3_1);
    *gptr<u32>(r13) = u32(1u);
    guest::cpu()->r[13] = r13;
    r0_2 = call_0013b438(r0, r0_4, r3, r4_1);
    r1_1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        goto L_13b0ec;
    }
L_13b0e8:;
    r0_2 = 1u;
L_13b0ec:;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_0013b034
GUEST_EXPORT(0x0013b034, d_0013b034::f_0013b034);

// f_0013b560: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013b560 {

struct __attribute__((packed)) Object_0013b560_0 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x200];  // (not used here)
    u16 half_208;
    u8 byte_20a;
};
GUEST_OFFSET(Object_0013b560_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013b560_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0013b560_0, half_208, 0x208);  // (from the original)
GUEST_OFFSET(Object_0013b560_0, byte_20a, 0x20a);  // (from the original)


void f_0013b560(gptr<Object_0013b560_0> arg0) {
    arg0->word_4 = u32(0u);
    arg0->word_0 = u32(0x9021d0u);  // (from the original)
    arg0->half_208 = u16(0u);
    arg0->byte_20a = u8(0u);
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_0013b560
GUEST_EXPORT(0x0013b560, d_0013b560::f_0013b560);

// f_0013b584: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013b584 {

struct __attribute__((packed)) Object_0013b584_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0013b584_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013b584_0, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Object_0013b584_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0013b584_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013b584_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0013c348, u32(u32, u32, u32, u32)> call_0013c348;  // (from the original)

u32 f_0013b584(gptr<Object_0013b584_0> arg0, gptr<Object_0013b584_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0u);
    arg0->word_4 = u32(0u);
    r2_1 = arg1->word_0;
    if (r2_1 != 0x44535743u) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    if (arg1->word_8 + 0xff000000u > 0x100u) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    arg0->word_0 = u32(r1);
    r0_1 = call_0013c348(r1, r1, r2_1, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    *gptr<u32>(r0 + 4u) = u32(r0_1 + 8u);
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0013b584
GUEST_EXPORT(0x0013b584, d_0013b584::f_0013b584);

// f_0013b6e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013b6e0 {

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x0013ecd8, u32(u32, u32, u32, u32)> call_0013ecd8;  // (from the original)
inline constexpr guest::Function<0x00140f54, u32(u32, u32, u32, u32)> call_00140f54;  // (from the original)
inline constexpr guest::Function<0x00140fac, u32(u32, u32, u32, u32)> call_00140fac;  // (from the original)
inline constexpr guest::Function<0x001411ec, u32(u32, u32, u32, u32)> call_001411ec;  // (from the original)

u32 f_0013b6e0(u32 r0, u32 r1) {
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5_1 = r0 + 4u;
    call_00135748(r5_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_1 = r0 + 0x10u;  // (from the original)
    r0_2 = call_0013ecd8(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_3 = call_00140f54(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_4 = call_00140fac(r0_3, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_001411ec(r0_3, r0_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_001357ec(r5_1, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0013b6e0
GUEST_EXPORT(0x0013b6e0, d_0013b6e0::f_0013b6e0);

// f_0013b7a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013b7a0 {

struct __attribute__((packed)) Object_0013b7a0_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_0013b7a0_0, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x0013eeb8, u32(u32, u32, u32, u32)> call_0013eeb8;  // (from the original)
inline constexpr guest::Function<0x00142070, u32(u32, u32, u32, u32)> call_00142070;  // (from the original)

u32 f_0013b7a0(gptr<Object_0013b7a0_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4_1 = r1;
    r5_1 = arg0->word_c;
    r6_1 = r0;
    if (r5_1 == r4_1) {
        r0_1 = r1;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return r0_1;
    }
    if (r5_1 != 0) {
        r0 = call_0013eeb8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    zf_1 = r4_1 == 0;
    if (!zf_1) {
        r0 = r6_1;
    }
    *gptr<u32>(r6_1 + 0xcu) = u32(r4_1);  // (from the original)
    if (!zf_1) {
        call_00142070(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
    }
    r0_1 = r5_1;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0_1;
}

}  // namespace d_0013b7a0
GUEST_EXPORT(0x0013b7a0, d_0013b7a0::f_0013b7a0);

// f_0013b8e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013b8e0 {

inline constexpr guest::Function<0x0012f154, u32(u32, u32, u32, u32)> call_0012f154;  // (from the original)
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32, u32)> call_001320cc;  // (from the original)

u32 f_0013b8e0(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_001320cc(r0, r1, 1u, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    *gptr<u32>(r0_1) = u32(0x904830u);  // (from the original)
    r0_2 = r0_1 + 0x10u;  // (from the original)
    *gptr<u32>(r0_2) = u32(0u);
    call_0012f154(r0_2, 0u, r2_1, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0013b8e0
GUEST_EXPORT(0x0013b8e0, d_0013b8e0::f_0013b8e0);

// f_0013b910: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013b910 {

struct __attribute__((packed)) Object_0013b910_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0013b910_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013b910_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0013b910_0, word_8, 0x8);  // (from the original)


void f_0013b910(gptr<Object_0013b910_0> arg0) {
    arg0->word_4 = u32(0u);
    arg0->word_0 = u32(0x904ce0u);  // (from the original)
    arg0->word_8 = u32(0u);
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_0013b910
GUEST_EXPORT(0x0013b910, d_0013b910::f_0013b910);

// f_0013b92c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013b92c {

inline constexpr guest::Function<0x0012f204, u32(u32, u32, u32, u32)> call_0012f204;  // (from the original)
inline constexpr guest::Function<0x00132174, u32(u32, u32, u32, u32)> call_00132174;  // (from the original)
inline constexpr guest::Function<0x00137d88, u32(u32, u32, u32, u32)> call_00137d88;  // (from the original)
inline constexpr guest::Function<0x00137dc4, u32(u32, u32, u32, u32)> call_00137dc4;  // (from the original)
inline constexpr guest::Function<0x00137eb4, u32(u32, u32, u32, u32)> call_00137eb4;  // (from the original)
inline constexpr guest::Function<0x0013d00c, u32(u32, u32, u32, u32)> call_0013d00c;  // (from the original)
inline constexpr guest::Function<0x0013e164, u32(u32, u32, u32, u32)> call_0013e164;  // (from the original)

u32 f_0013b92c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r3_2 = 0;
    u32 r4_1 = 0;
    u32 r2_3 = 0;
    u32 ea_4 = 0;
    u32 r0_6 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    u32 r1_2 = 0;
    u32 r0_7 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 res_1 = 0;
    u32 r1_3 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r3_4 = 0;
    u32 ea_7 = 0;
    u32 ea_8 = 0;
    u32 r0_10 = 0;
    u32 r1_4 = 0;
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00132174(r0, r1, r2, r3);
    ea_1 = r0_1 + 0x10u;  // (from the original)
    *gptr<u32>(ea_1) = u32(0x9047f8u);  // (from the original)
    *gptr<u32>(ea_1 + 4u) = u32(0x8ae11cu);  // (from the original)
    r2_1 = 0x905a58u + 0x50u;  // (from the original)
    *gptr<u32>(r0_1) = u32(0x905a58u);  // (from the original)
    r0_2 = r0_1 + 0x1cu;  // (from the original)
    *gptr<u32>(r0_1 + 0x18u) = u32(r2_1);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_00137dc4(r0_2, r0_1, r2_1, 0x9047f8u);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r1_1 = r0_3 - 0x1cu;  // (from the original)
    ea_2 = r0_3 + 0x38u;  // (from the original)
    *gptr<u32>(ea_2) = u32(0u);
    ea_3 = r0_3 + 0x3cu;  // (from the original)
    *gptr<u32>(ea_3) = u32(0u);
    *gptr<u32>(ea_3 + 4u) = u32(0u);
    *gptr<u32>(ea_3 + 8u) = u32(0u);
    *gptr<u32>(ea_3 + 0xcu) = u32(0u);  // (from the original)
    r0_4 = r1_1 + 0x6cu;  // (from the original)
    *gptr<u32>(r1_1 + 0x68u) = u32(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_00137eb4(r0_4, r1_1, r2_2, r3_1);
    r3_2 = guest::cpu()->r[3];
    r4_1 = r0_5 - 0x6cu;  // (from the original)
    r2_3 = r4_1 + 0x74u;  // (from the original)
    ea_4 = r4_1 + 0x70u;  // (from the original)
    *gptr<u8>(ea_4) = u8(1u);
    *gptr<u32>(r2_3) = u32(~0x80000000u);  // (from the original)
    *gptr<u32>(r2_3 + 4) = u32(r3);
    r0_6 = r13;
    ea_5 = r4_1 + 0x7cu;  // (from the original)
    *gptr<u32>(ea_5) = u32(1u);
    ea_6 = r4_1 + 0x80u;  // (from the original)
    *gptr<u32>(ea_6) = u32(r2);
    *gptr<u32>(ea_6 + 4) = u32(0u);
    r1_2 = *gptr<u32>(r2);
    guest::cpu()->r[13] = r13;
    r0_7 = call_0013d00c(r0_6, r1_2, r2_3, r3_2);
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    res_1 = r0_7 >> 0x1f;  // (from the original)
    r1_3 = res_1;
    if (res_1 != 0) {
        guest::cpu()->r[13] = r13;
        call_0012f204(r0_7, r1_3, r2_4, r3_3);
        r1_3 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
    }
    r0_8 = *gptr<u32>(r13);
    guest::cpu()->r[13] = r13;
    r0_9 = call_0013e164(r0_8, r1_3, r2_4, r3_3);
    r3_4 = guest::cpu()->r[3];
    ea_7 = r4_1 + 0x60u;  // (from the original)
    *gptr<u32>(ea_7) = u32(r4_1);
    ea_8 = r4_1 + 0x88u;  // (from the original)
    *gptr<u32>(ea_8) = u32(r0_9);
    *gptr<u32>(ea_8 + 4) = u32(~1u);
    r0_10 = r4_1 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00137d88(r0_10, 0x20u, r1, r3_4);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return r4_1;
}

}  // namespace d_0013b92c
GUEST_EXPORT(0x0013b92c, d_0013b92c::f_0013b92c);

// f_0013bee0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013bee0 {

inline constexpr guest::Function<0x00136cc8, u32(u32, u32, u32, u32)> call_00136cc8;  // (from the original)
inline constexpr guest::Function<0x0013d408, u32(u32, u32, u32, u32)> call_0013d408;  // (from the original)
inline constexpr guest::Function<0x0013d59c, u32(u32, u32, u32, u32)> call_0013d59c;  // (from the original)
inline constexpr guest::Function<0x0013d7cc, u32(u32, u32, u32, u32)> call_0013d7cc;  // (from the original)
inline constexpr guest::Function<0x0013ef18, u32(u32, u32, u32, u32)> call_0013ef18;  // (from the original)
inline constexpr guest::Function<0x0013efa0, u32(u32, u32, u32, u32)> call_0013efa0;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_0013bee0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r5_1 = 0;
    u32 r4_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r5_2 = 0;
    u32 r4_2 = 0;
    u32 r0_10 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_11 = 0;
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_12 = 0;
    u32 r1_7 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_13 = 0;
    u32 r1_8 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_14 = 0;
    u32 r1_9 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r4_3 = 0;
    u32 r0_15 = 0;
    u32 r1_10 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r5_3 = 0;
    u32 r1_11 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r5_4 = 0;
    u32 r1_12 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r0_16 = 0;
    u32 r1_13 = 0;
    u32 r2_13 = 0;
    u32 r3_13 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r5_5 = 0;
    u32 r4_4 = 0;
    u32 r0_19 = 0;
    u32 r1_14 = 0;
    u32 r2_14 = 0;
    u32 r3_14 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r4_5 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r1_15 = 0;
    u32 r2_15 = 0;
    u32 r3_15 = 0;
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r1_16 = 0;
    u32 r0_27 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = r0 + 0xbc8u;  // (from the original)
    r0_2 = call_0013d59c(r0_1, r1, r2, r3);
    r5_1 = r0_2 - 0xbc8u;  // (from the original)
    *gptr<u32>(r5_1 + 0xb00u) = u32(0x8ebd04u);  // (from the original)
    r4_1 = r5_1 + 0xb00u;  // (from the original)
    r0_3 = r5_1 + 0xb98u;  // (from the original)
    call_002f76ac(r0_3, 0x13d404u, 0x14u, 2u);  // (from the original)
    r0_4 = r4_1 + 0x2cu;  // (from the original)
    call_002f76ac(r0_4, 0x137d74u, 4u, 2u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_5 = r4_1 + 0x28u;  // (from the original)
    call_00136cc8(r0_5, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_6 = r4_1 + 0x24u;  // (from the original)
    call_00136cc8(r0_6, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_7 = r4_1 + 0x20u;  // (from the original)
    call_00136cc8(r0_7, r1_3, r2_3, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_8 = r5_1 + 0x860u;  // (from the original)
    r0_9 = call_0013d408(r0_8, r1_4, r2_4, r3_4);
    r5_2 = r0_9 - 0x860u;  // (from the original)
    *gptr<u32>(r5_2 + 0x754u) = u32(0x8ebcacu);  // (from the original)
    r4_2 = r5_2 + 0x754u;  // (from the original)
    r0_10 = r5_2 + 0x824u;  // (from the original)
    call_002f76ac(r0_10, 0x137d74u, 4u, 2u);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_11 = r4_2 + 0x50u;  // (from the original)
    call_00136cc8(r0_11, r1_5, r2_5, r3_5);
    r1_6 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_12 = r4_2 + 0x40u;  // (from the original)
    call_00136cc8(r0_12, r1_6, r2_6, r3_6);
    r1_7 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_13 = r4_2 + 0x34u;  // (from the original)
    call_00136cc8(r0_13, r1_7, r2_7, r3_7);
    r1_8 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_14 = r4_2 + 0x10u;  // (from the original)
    call_00136cc8(r0_14, r1_8, r2_8, r3_8);
    r1_9 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r4_3 = r5_2 + 0x68cu;  // (from the original)
    *gptr<u32>(r5_2 + 0x68cu) = u32(0x8ef740u);  // (from the original)
    r0_15 = r5_2 + 0x748u;  // (from the original)
    call_00136cc8(r0_15, r1_9, r2_9, r3_9);
    r1_10 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r5_3 = r4_3 + 0x6cu;  // (from the original)
    *gptr<u32>(r4_3 + 0x6cu) = u32(0x8f7210u);  // (from the original)
    call_0013ef18(r5_3, r1_10, r2_10, r3_10);
    r1_11 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    *gptr<u32>(r5_3) = u32(0x8f701cu);  // (from the original)
    r5_4 = r5_3 + 8u;
    call_00136cc8(r5_4, r1_11, r2_11, r3_11);
    r1_12 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_16 = r4_3 + 0x60u;  // (from the original)
    *gptr<u32>(r4_3 + 0x58u) = u32(0x8f701cu);  // (from the original)
    call_00136cc8(r0_16, r1_12, r2_12, r3_12);
    r1_13 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_17 = r4_3 + 0xcu;  // (from the original)
    r0_18 = call_0013d7cc(r0_17, r1_13, r2_13, r3_13);
    r5_5 = r0_18 - 0x698u;  // (from the original)
    *gptr<u32>(r5_5 + 0x594u) = u32(0x8f39fcu);  // (from the original)
    r4_4 = r5_5 + 0x594u;  // (from the original)
    r0_19 = r5_5 + 0x664u;  // (from the original)
    call_002f76ac(r0_19, 0x137d74u, 4u, 9u);  // (from the original)
    r1_14 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_20 = r4_4 + 0x18u;  // (from the original)
    call_00136cc8(r0_20, r1_14, r2_14, r3_14);
    r0_21 = r4_4 + 0xcu;  // (from the original)
    call_002f76ac(r0_21, 0x137d74u, 4u, 3u);  // (from the original)
    r4_5 = r5_5 + 0x134u;  // (from the original)
    *gptr<u32>(r5_5 + 0x134u) = u32(0x8ef900u);  // (from the original)
    r0_22 = r5_5 + 0x328u;  // (from the original)
    call_002f76ac(r0_22, 0x13d598u, 0x1cu, 0x12u);  // (from the original)
    r0_23 = r4_5 + 0xcu;  // (from the original)
    call_002f76ac(r0_23, 0x13fd70u, 0x1cu, 0xbu);  // (from the original)
    r1_15 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r0_24 = r5_5 + 0x100u;  // (from the original)
    r0_25 = call_0013efa0(r0_24, r1_15, r2_15, r3_15);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0_25 - 0xe4u;  // (from the original)
    r4 = 0u;
    do {
L_13c080:;
        r0_26 = r5;
        if (r4 < 8u) {
            r0_26 = r5 + (r4 << 2);
        }
        call_00136cc8(r0_26, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(8u));
    call_002f76ac(r5, 0x137d74u, 4u, 8u);  // (from the original)
    r1_16 = guest::cpu()->r[1];
    r0_27 = r5 - 0x1cu;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_16;
    return r0_27;
}

}  // namespace d_0013bee0
GUEST_EXPORT(0x0013bee0, d_0013bee0::f_0013bee0);

// f_0013c0e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c0e8 {

struct __attribute__((packed)) Object_0013c0e8_0 {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
};
GUEST_OFFSET(Object_0013c0e8_0, byte_c, 0xc);  // (from the original)


u32 f_0013c0e8(gptr<Object_0013c0e8_0> arg0) {
    u32 r1_1 = 0;
    u32 zf_1 = 0;
    u32 r0_1 = 0;
    r1_1 = u32(arg0->byte_c);
    zf_1 = r1_1 == 1u;
    if (!zf_1) {
        zf_1 = u32(arg0->byte_c) == 2u;
    }
    if (zf_1) {
        r0_1 = 1u;
    } else {
        r0_1 = 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0013c0e8
GUEST_EXPORT(0x0013c0e8, d_0013c0e8::f_0013c0e8);

// f_0013c348: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c348 {

struct __attribute__((packed)) Object_0013c348_0 {
    u8 unknown_0[0x10];  // (not used here)
    u16 half_10;
};
GUEST_OFFSET(Object_0013c348_0, half_10, 0x10);  // (from the original)


u32 f_0013c348(gptr<Object_0013c348_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 res_1 = 0;
    u32 zf_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r12 = u32(arg0->half_10);
    r3 = r0 + 0x14u;  // (from the original)
    r5 = r0;
    r0 = 0u;
    r2 = 0x6800u;  // (from the original)
    r1 = r0;
    if (r12 == 0 || r12 >> 0x1f != (r12 & (r12 ^ r12)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    do {
L_13c36c:;
        if (!(u32(*gptr<u16>(r3 + (r1 + (r1 << 1) << 2))) != r2)) {
            res_1 = r3 + (r1 + (r1 << 1) << 2);
            zf_1 = res_1 == 0;
            r1_1 = res_1;
            if (!zf_1) {
                r1_1 = *gptr<u32>(r1_1 + 4u);
                zf_1 = r1_1 == 0;
            }
            if (zf_1) {
                guest::cpu()->r[13] += 8u;
                guest::cpu()->r[1] = r1_1;
                return r0;
            } else {
                r0_1 = r1_1 + r5;
            }
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_1;
            return r0_1;
        }
        r1 = r1 + 1u;
        guest::preempt();
    } while (s32(r12) > s32(r1));
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0013c348
GUEST_EXPORT(0x0013c348, d_0013c348::f_0013c348);

// f_0013c3c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c3c0 {

struct __attribute__((packed)) Object_0013c3c0_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_0013c3c0_0, word_c, 0xc);  // (from the original)


u32 f_0013c3c0(gptr<Object_0013c3c0_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    r0_1 = r0 + arg0->word_c;
    if (*gptr<u32>(r0_1) <= r1) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r1_1 = r0_1 + (r1 << 3);
    if (u32(*gptr<u16>(r1_1 + 4u)) == 0x4900u) {  // (from the original)
        r1_2 = *gptr<u32>(r1_1 + 8u);
        r0_2 = r0_1 + r1_2;
        guest::cpu()->r[1] = r1_2;
        return r0_2;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_0013c3c0
GUEST_EXPORT(0x0013c3c0, d_0013c3c0::f_0013c3c0);

// f_0013c3f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c3f4 {

struct __attribute__((packed)) Object_0013c3f4_0 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Object_0013c3f4_0, word_14, 0x14);  // (from the original)


u32 f_0013c3f4(gptr<Object_0013c3f4_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    r0_1 = r0 + arg0->word_14;
    if (*gptr<u32>(r0_1) <= r1) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r1_1 = r0_1 + (r1 << 3);
    if (u32(*gptr<u16>(r1_1 + 4u)) == 0x4902u) {  // (from the original)
        r1_2 = *gptr<u32>(r1_1 + 8u);
        r0_2 = r0_1 + r1_2;
        guest::cpu()->r[1] = r1_2;
        return r0_2;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_0013c3f4
GUEST_EXPORT(0x0013c3f4, d_0013c3f4::f_0013c3f4);

// f_0013c430: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c430 {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32, u32)> call_00141a9c;  // (from the original)

u32 f_0013c430(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r1_1 = r13;
    r0_1 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_00141a9c(r0_1, r1_1, 9u, r3);
    r1_2 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return 0x981880u;  // (from the original)
    }
    r0_3 = *gptr<u32>(r13) + r0;
    r1_3 = *gptr<u32>(r0_3 + 4u);
    r0_4 = r0_3 + r1_3;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_4;
}

}  // namespace d_0013c430
GUEST_EXPORT(0x0013c430, d_0013c430::f_0013c430);

// f_0013c46c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c46c {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32, u32)> call_00141a9c;  // (from the original)

u32 f_0013c46c(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    r1_1 = r13;
    r0_1 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_00141a9c(r0_1, r1_1, 0u, r3);
    r1_2 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        r0_3 = 0x40u;  // (from the original)
    } else {
        r0_3 = *gptr<u32>(r13) & 0xffu;  // (from the original)
    }
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_0013c46c
GUEST_EXPORT(0x0013c46c, d_0013c46c::f_0013c46c);

// f_0013c494: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c494 {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32, u32)> call_00141a9c;  // (from the original)

u32 f_0013c494(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    r1_1 = r13;
    r0_1 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_00141a9c(r0_1, r1_1, 2u, r3);
    r1_2 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    r0_3 = *gptr<u32>(r13) << 0x10 >> 0x18;  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_0013c494
GUEST_EXPORT(0x0013c494, d_0013c494::f_0013c494);

// f_0013c4c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c4c0 {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32, u32)> call_00141a9c;  // (from the original)

u32 f_0013c4c0(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    r1_1 = r13;
    r0_1 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_00141a9c(r0_1, r1_1, 2u, r3);
    r1_2 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        r0_3 = 0x40u;  // (from the original)
    } else {
        r0_3 = *gptr<u32>(r13) & 0xffu;  // (from the original)
    }
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_0013c4c0
GUEST_EXPORT(0x0013c4c0, d_0013c4c0::f_0013c4c0);

// f_0013c4e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c4e8 {

struct __attribute__((packed)) Object_0013c4e8_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0013c4e8_0, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0013c558> global_0013c558;  // (from the original)

u32 f_0013c4e8(gptr<Object_0013c4e8_0> arg0) {
    u32 sco = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 cf = guest::cpu()->cf;
    u32 b_1 = 0;
    u32 res_1 = 0;
    u32 r0_1 = 0;
    float S0_1 = 0;
    float S0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r6 = r0 + 4u;
    r12 = 0u;
    r4 = arg0->word_4;
    r2 = 3u;
    r0 = r12;
    r1 = r12;
    r3 = 4u;
    r5 = 1u;
    do {
L_13c50c:;
        sco = cf;
        b_1 = lsl_rc(r5, r1 & 0xff, &sco);  // (from the original)
        if (!((r4 & b_1) == 0)) {
            r0 = r0 + 1u;
            if (r1 == r2) {
                r12 = 1u;
            }
        }
        res_1 = r3 - 1u;
        cf = r3 >= 1u;
        r3 = res_1;
        r1 = r1 + 1u;
        guest::preempt();
    } while (res_1 != 0);
    if (r12 == 0) {
        goto L_13c54c;
    }
    if (r0 == 0) {
        goto L_13c54c;
    }
    r0_1 = r6 + (r0 << 2);
    S0_1 = std::bit_cast<float>(*gptr<u32>(r0_1));
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0_1;
    return r0_1;
L_13c54c:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    S0_2 = std::bit_cast<float>(*global_0013c558);
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0_2;
    return r0;
}

}  // namespace d_0013c4e8
GUEST_EXPORT(0x0013c4e8, d_0013c4e8::f_0013c4e8);

// f_0013c55c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c55c {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32, u32)> call_00141a9c;  // (from the original)

u32 f_0013c55c(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    r1_1 = r13;
    r0_1 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_00141a9c(r0_1, r1_1, 1u, r3);
    r1_2 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        r0_3 = 0x60u;  // (from the original)
    } else {
        r0_3 = *gptr<u32>(r13) & 0xffu;  // (from the original)
    }
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_0013c55c
GUEST_EXPORT(0x0013c55c, d_0013c55c::f_0013c55c);

// f_0013c584: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c584 {

struct __attribute__((packed)) Object_0013c584_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(Object_0013c584_0, byte_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0013c8bc, u32(u32, u32, u32, u32)> call_0013c8bc;  // (from the original)

u32 f_0013c584(gptr<Object_0013c584_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    r1_1 = u32(arg0->byte_8);
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r0_1 = *gptr<u32>(r0 + 4u);
    return call_0013c8bc(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0013c584
GUEST_EXPORT(0x0013c584, d_0013c584::f_0013c584);

// f_0013c5a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c5a0 {

struct __attribute__((packed)) Object_0013c5a0_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0013c5a0_0, word_8, 0x8);  // (from the original)


u32 f_0013c5a0(gptr<Object_0013c5a0_0> arg0) {
    u32 r0_1 = 0;
    r0_1 = arg0->word_8;
    if (r0_1 != 0) {
        r0_1 = *gptr<u32>(r0_1);
    }
    return r0_1;
}

}  // namespace d_0013c5a0
GUEST_EXPORT(0x0013c5a0, d_0013c5a0::f_0013c5a0);

// f_0013c5b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c5b0 {

struct __attribute__((packed)) Object_0013c5b0_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0013c5b0_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_0013c5b0_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0013c5b0_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013c5b0_1, word_4, 0x4);  // (from the original)


u32 f_0013c5b0(gptr<Object_0013c5b0_0> arg0, gptr<Object_0013c5b0_1> arg1, u32 r2) {
    u32 r0_1 = 0;
    u32 res_1 = 0;
    u32 r2_1 = 0;
    r0_1 = arg0->word_8;
    if (r0_1 == 0) {
        return r0_1;
    }
    if (*gptr<u32>(r0_1) <= r2) {
        return 0u;
    }
    res_1 = r0_1 + *gptr<u32>(r0_1 + (r2 << 3) + 8u);
    if (res_1 == 0) {
        return 0u;
    }
    r2_1 = *gptr<u32>(res_1 + 4);
    arg1->word_0 = u32(*gptr<u32>(res_1));
    arg1->word_4 = u32(r2_1);
    return 1u;
}

}  // namespace d_0013c5b0
GUEST_EXPORT(0x0013c5b0, d_0013c5b0::f_0013c5b0);

// f_0013c5f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c5f0 {

struct __attribute__((packed)) Object_0013c5f0_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0013c5f0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013c5f0_0, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Object_0013c5f0_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0013c5f0_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013c5f0_1, word_4, 0x4);  // (from the original)


u32 f_0013c5f0(gptr<Object_0013c5f0_0> arg0, gptr<Object_0013c5f0_1> arg1, u32 r2) {
    u32 r3_1 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 r12_1 = 0;
    u32 res_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    r3_1 = arg0->word_0;
    zf_1 = r3_1 == 0;
    cf_1 = r3_1 >= 0u;
    if (!zf_1) {
        r12_1 = *gptr<u32>(r3_1);
        zf_1 = r12_1 == r2;
        cf_1 = r12_1 >= r2;
    }
    if (!cf_1 || zf_1) {
        return 0u;
    }
    res_1 = *gptr<u32>(r3_1 + (r2 << 3) + 8u) + r3_1;
    if (res_1 == 0) {
        return 0u;
    }
    arg1->word_0 = u32(*gptr<u32>(res_1));
    r2_1 = *gptr<u32>(res_1 + 8u);
    r0_1 = arg0->word_4;
    if (r2_1 + 1u == 0) {
        r0_2 = 0u;
    } else {
        r0_2 = r0_1 + r2_1;
    }
    arg1->word_4 = u32(r0_2);
    return 1u;
}

}  // namespace d_0013c5f0
GUEST_EXPORT(0x0013c5f0, d_0013c5f0::f_0013c5f0);

// f_0013c644: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c644 {

struct __attribute__((packed)) Object_0013c644_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0013c644_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0013c3b4, u32(u32, u32, u32, u32)> call_0013c3b4;  // (from the original)
inline constexpr guest::Function<0x0013c3c0, u32(u32, u32, u32, u32)> call_0013c3c0;  // (from the original)
inline constexpr guest::Function<0x0013c3f4, u32(u32, u32, u32, u32)> call_0013c3f4;  // (from the original)
inline constexpr guest::Function<0x0013c430, u32(u32, u32, u32, u32)> call_0013c430;  // (from the original)
inline constexpr guest::Function<0x0013c46c, u32(u32, u32, u32, u32)> call_0013c46c;  // (from the original)
inline constexpr guest::Function<0x0013c494, u32(u32, u32, u32, u32)> call_0013c494;  // (from the original)
inline constexpr guest::Function<0x0013c4c0, u32(u32, u32, u32, u32)> call_0013c4c0;  // (from the original)
inline constexpr guest::Function<0x0013c4e8, u32(u32, u32, u32, u32)> call_0013c4e8;  // (from the original)
inline constexpr guest::Function<0x0013c55c, u32(u32, u32, u32, u32)> call_0013c55c;  // (from the original)
inline constexpr guest::Function<0x0013ca2c, u32(u32, u32, u32, u32)> call_0013ca2c;  // (from the original)

u32 f_0013c644(gptr<Object_0013c644_0> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r3_3 = 0;
    float S0_3 = 0;
    u32 r2_3 = 0;
    u32 r1_2 = 0;
    u32 res_1 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    float S0_4 = 0;
    u32 r0_6 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    float S0_5 = 0;
    u32 r0_7 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    float S0_6 = 0;
    u32 r0_8 = 0;
    u32 r1_6 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    float S0_7 = 0;
    u32 r0_9 = 0;
    u32 r1_7 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    float S0_8 = 0;
    u32 r0_10 = 0;
    u32 r1_8 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    float S0_9 = 0;
    u32 r0_11 = 0;
    u32 r1_9 = 0;
    float S0_10 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = arg0->word_4;
    guest::cpu()->s[0] = S0;
    r0_2 = call_0013c3c0(r0_1, r2, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    guest::cpu()->s[0] = S0_1;
    r0_3 = call_0013c3f4(r0_2, r3, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    r0_4 = *gptr<u32>(r0 + 4u);
    guest::cpu()->s[0] = S0_2;
    r0_5 = call_0013c3b4(r0_4, r1_1, r2_2, r3_2);
    r3_3 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    r2_3 = *gptr<u32>(r0_5);
    r1_2 = *gptr<u32>(r0_3);
    if (r2_3 <= r1_2) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    res_1 = r0_5 + (r1_2 << 3) + 4u;
    if (res_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    r1_3 = *gptr<u32>(res_1);
    *gptr<u32>(r1) = u32(r1_3);
    *gptr<u32>(r1 + 4u) = u32(*gptr<u32>(res_1 + 4u));
    guest::cpu()->s[0] = S0_3;
    call_0013c4e8(r0_3, r1_3, r2_3, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    S0_4 = guest::cpu()->s[0];
    *gptr<u32>(r1 + 0x14u) = u32(std::bit_cast<u32>(S0_4));  // (from the original)
    guest::cpu()->s[0] = S0_4;
    r0_6 = call_0013c430(r0_3, r1_4, r2_4, r3_4);
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    S0_5 = guest::cpu()->s[0];
    r0_7 = r1 + 8u;
    guest::cpu()->s[0] = S0_5;
    call_0013ca2c(r0_7, r0_6, r2_5, r3_5);
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    S0_6 = guest::cpu()->s[0];
    guest::cpu()->s[0] = S0_6;
    r0_8 = call_0013c46c(r0_3, r1_5, r2_6, r3_6);
    r1_6 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    S0_7 = guest::cpu()->s[0];
    *gptr<u8>(r1 + 0xdu) = u8(r0_8);  // (from the original)
    guest::cpu()->s[0] = S0_7;
    r0_9 = call_0013c4c0(r0_3, r1_6, r2_7, r3_7);
    r1_7 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    S0_8 = guest::cpu()->s[0];
    *gptr<u8>(r1 + 0xeu) = u8(r0_9);  // (from the original)
    guest::cpu()->s[0] = S0_8;
    r0_10 = call_0013c494(r0_3, r1_7, r2_8, r3_8);
    r1_8 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    S0_9 = guest::cpu()->s[0];
    *gptr<u8>(r1 + 0xfu) = u8(r0_10);  // (from the original)
    guest::cpu()->s[0] = S0_9;
    r0_11 = call_0013c55c(r0_3, r1_8, r2_9, r3_9);
    r1_9 = guest::cpu()->r[1];
    S0_10 = guest::cpu()->s[0];
    *gptr<u8>(r1 + 0x10u) = u8(r0_11);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_9;
    return 1u;
}

}  // namespace d_0013c644
GUEST_EXPORT(0x0013c644, d_0013c644::f_0013c644);

// f_0013c700: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c700 {

struct __attribute__((packed)) Object_0013c700_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x4];  // (not used here)
    u8 byte_c;
};
GUEST_OFFSET(Object_0013c700_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0013c700_0, byte_c, 0xc);  // (from the original)


u32 f_0013c700(gptr<Object_0013c700_0> arg0) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    r1_1 = u32(arg0->byte_c);
    if (r1_1 == 0) {
        r0_1 = 0u;
    } else {
        r0_1 = *gptr<u32>(arg0->word_4);
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0013c700
GUEST_EXPORT(0x0013c700, d_0013c700::f_0013c700);

// f_0013c728: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c728 {

struct __attribute__((packed)) Object_0013c728_0 {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Object_0013c728_0, word_3c, 0x3c);  // (from the original)

inline constexpr guest::Function<0x0013f5e8, u32(u32, u32, u32, u32)> call_0013f5e8;  // (from the original)
inline constexpr guest::Function<0x0013f610, u32(u32, u32, u32, u32)> call_0013f610;  // (from the original)
inline constexpr guest::Function<0x0013f718, u32(u32, u32, u32, u32)> call_0013f718;  // (from the original)
inline constexpr guest::Function<0x0013f748, u32(u32, u32, u32, u32)> call_0013f748;  // (from the original)
inline constexpr guest::Function<0x00141728, u32(u32, u32, u32, u32)> call_00141728;  // (from the original)

u32 f_0013c728(gptr<Object_0013c728_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r0_5 = 0;
    u32 r2_4 = 0;
    u32 r0_6 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = arg0->word_3c;
    r0_2 = call_00141728(r0_1, guest::cpu()->r[1], r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return r0_2;
    }
    r0_3 = call_0013f718(r0_2, guest::cpu()->r[1], r2_1, guest::cpu()->r[3]);
    r2_2 = guest::cpu()->r[2];
    if (r0_3 != 3u) {
        r0_2 = 0u;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return r0_2;
    }
    r0_4 = call_0013f748(r0_2, guest::cpu()->r[1], r2_2, guest::cpu()->r[3]);
    r2_3 = guest::cpu()->r[2];
    *gptr<u32>(r2) = u32(*gptr<u32>(r0_4));
    *gptr<u32>(r2 + 4u) = u32(*gptr<u32>(r0_4 + 4u));
    r0_5 = call_0013f5e8(r0_4, guest::cpu()->r[1], r2_3, guest::cpu()->r[3]);
    r2_4 = guest::cpu()->r[2];
    *gptr<u8>(r2 + 8u) = u8(r0_5);
    r0_6 = call_0013f610(r0_4, guest::cpu()->r[1], r2_4, guest::cpu()->r[3]);
    if (r0_6 != 0) {
        r0_6 = 1u;
    }
    *gptr<u8>(r2 + 9u) = u8(r0_6);
    r0_2 = 1u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0_2;
}

}  // namespace d_0013c728
GUEST_EXPORT(0x0013c728, d_0013c728::f_0013c728);

// f_0013c794: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c794 {

struct __attribute__((packed)) Object_0013c794_0 {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Object_0013c794_0, word_3c, 0x3c);  // (from the original)

inline constexpr guest::Function<0x00141764, u32(u32, u32, u32, u32)> call_00141764;  // (from the original)

u32 f_0013c794(gptr<Object_0013c794_0> arg0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = arg0->word_3c;
    r0_2 = call_00141764(r0_1, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    *gptr<u32>(r2) = u32(*gptr<u32>(r0_2));
    *gptr<u32>(r2 + 4u) = u32(*gptr<u32>(r0_2 + 4u));
    r1_2 = *gptr<u32>(r0_2 + 0xcu);  // (from the original)
    *gptr<u32>(r2 + 8u) = u32(r0_2 + r1_2);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_0013c794
GUEST_EXPORT(0x0013c794, d_0013c794::f_0013c794);

// f_0013c7e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c7e0 {

struct __attribute__((packed)) Object_0013c7e0_0 {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Object_0013c7e0_0, word_3c, 0x3c);  // (from the original)

inline constexpr guest::Function<0x0013f63c, u32(u32, u32, u32, u32)> call_0013f63c;  // (from the original)
inline constexpr guest::Function<0x0013f69c, u32(u32, u32, u32, u32)> call_0013f69c;  // (from the original)
inline constexpr guest::Function<0x0013f6bc, u32(u32, u32, u32, u32)> call_0013f6bc;  // (from the original)
inline constexpr guest::Function<0x0013f6e4, u32(u32, u32, u32, u32)> call_0013f6e4;  // (from the original)
inline constexpr guest::Function<0x0013f718, u32(u32, u32, u32, u32)> call_0013f718;  // (from the original)
inline constexpr guest::Function<0x0013f754, u32(u32, u32, u32, u32)> call_0013f754;  // (from the original)
inline constexpr guest::Function<0x00141728, u32(u32, u32, u32, u32)> call_00141728;  // (from the original)

u32 f_0013c7e0(gptr<Object_0013c7e0_0> arg0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r0_7 = 0;
    u32 r2_6 = 0;
    u32 r1_5 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = arg0->word_3c;
    r0_2 = call_00141728(r0_1, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    r0_3 = call_0013f718(r0_2, r1_1, r2_1, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    if (r0_3 != 1u) {
        r0_2 = 0u;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    r0_4 = call_0013f754(r0_2, r1_1, r2_2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r0_5 = call_0013f69c(r0_4, r1_2, r2_3, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    *gptr<u32>(r2) = u32(r0_5);
    *gptr<u32>(r2 + 0x14u) = u32(*gptr<u32>(r0_4 + 8u));  // (from the original)
    r0_6 = call_0013f6bc(r0_4, r1_3, r2_4, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    *gptr<u8>(r2 + 0x18u) = u8(r0_6);  // (from the original)
    r0_7 = call_0013f6e4(r0_4, r1_4, r2_5, guest::cpu()->r[3]);
    r2_6 = guest::cpu()->r[2];
    *gptr<u8>(r2 + 0x19u) = u8(r0_7);  // (from the original)
    r1_5 = r2 + 4u;
    call_0013f63c(r0_4, r1_5, r2_6, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_2 = 1u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_0013c7e0
GUEST_EXPORT(0x0013c7e0, d_0013c7e0::f_0013c7e0);

// f_0013c850: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c850 {

struct __attribute__((packed)) Object_0013c850_0 {
    u8 unknown_0[0x10];  // (not used here)
    u16 half_10;
};
GUEST_OFFSET(Object_0013c850_0, half_10, 0x10);  // (from the original)


u32 f_0013c850(gptr<Object_0013c850_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 res_1 = 0;
    u32 zf_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r12 = u32(arg0->half_10);
    r3 = r0 + 0x14u;  // (from the original)
    r5 = r0;
    r0 = 0u;
    r2 = 0x5800u;  // (from the original)
    r1 = r0;
    if (r12 == 0 || r12 >> 0x1f != (r12 & (r12 ^ r12)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    do {
L_13c874:;
        if (!(u32(*gptr<u16>(r3 + (r1 + (r1 << 1) << 2))) != r2)) {
            res_1 = r3 + (r1 + (r1 << 1) << 2);
            zf_1 = res_1 == 0;
            r1_1 = res_1;
            if (!zf_1) {
                r1_1 = *gptr<u32>(r1_1 + 4u);
                zf_1 = r1_1 == 0;
            }
            if (zf_1) {
                guest::cpu()->r[13] += 8u;
                guest::cpu()->r[1] = r1_1;
                return r0;
            } else {
                r0_1 = r1_1 + r5;
            }
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_1;
            return r0_1;
        }
        r1 = r1 + 1u;
        guest::preempt();
    } while (s32(r12) > s32(r1));
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0013c850
GUEST_EXPORT(0x0013c850, d_0013c850::f_0013c850);

// f_0013c8c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c8c8 {

struct __attribute__((packed)) Object_0013c8c8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0013c8c8_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_0013c8c8_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0013c8c8_1, word_0, 0x0);  // (from the original)


u32 f_0013c8c8(gptr<Object_0013c8c8_0> arg0, gptr<Object_0013c8c8_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r4_1 = 0;
    u32 r0_3 = 0;
    r12 = r0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = arg0->word_0;
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r1 = arg1->word_0;
    r2 = 0u;
    r3 = r0_1 - 1u;
L_13c8e8:;
    r0_2 = r2 + r3 >> 1;
    r4_1 = r12 + (r0_2 << 3);
    if (r1 < *gptr<u32>(r4_1 + 8u)) {
        if (r0_2 != r2) {
            r3 = r0_2 - 1u;
            guest::preempt();
            goto L_13c8e8;
        }
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0_2;
    }
    if (*gptr<u32>(r4_1 + 0xcu) >= r1) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0_2;
    }
    if (r0_2 != r3) {
        r2 = r0_2 + 1u;
        guest::preempt();
        goto L_13c8e8;
    }
    guest::cpu()->r[13] += 8u;
    r0_3 = r0_2 + 1u;
    guest::cpu()->r[1] = r1;
    return r0_3;
}

}  // namespace d_0013c8c8
GUEST_EXPORT(0x0013c8c8, d_0013c8c8::f_0013c8c8);

// f_0013c938: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c938 {

struct __attribute__((packed)) Object_0013c938_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0013c938_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_0013c938_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0013c938_1, word_4, 0x4);  // (from the original)


u32 f_0013c938(gptr<Object_0013c938_0> arg0, gptr<Object_0013c938_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 r4_1 = 0;
    guest::cpu()->r[13] -= 0xcu;  // (from the original)
    r12 = r0;
    r5 = arg0->word_0;
    if (r5 == 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 0xcu;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = arg1->word_4;
    r2 = 0u;
    r3 = r5 - 1u;
L_13c95c:;
    r0 = r2 + r3 >> 1;
    r4_1 = r12 + (r0 << 3);
    if (r1 >= *gptr<u32>(r4_1 + 8u)) {
        goto L_13c994;
    }
    if (r0 != r2) {
        r3 = r0 - 1u;
        guest::preempt();
        goto L_13c95c;
    }
    if (r0 == 0) {
        r0 = r5;
    } else {
        r0 = r0 - 1u;
    }
    guest::cpu()->r[13] += 0xcu;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_13c994:;
    if (r1 <= *gptr<u32>(r4_1 + 0xcu)) {  // (from the original)
        guest::cpu()->r[13] += 0xcu;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r0 != r3) {
        r2 = r0 + 1u;
        guest::preempt();
        goto L_13c95c;
    }
    guest::cpu()->r[13] += 0xcu;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0013c938
GUEST_EXPORT(0x0013c938, d_0013c938::f_0013c938);

// f_0013c9b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c9b8 {

struct __attribute__((packed)) Object_0013c9b8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0013c9b8_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_0013c9b8_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0013c9b8_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013c9b8_1, word_4, 0x4);  // (from the original)


u32 f_0013c9b8(gptr<Object_0013c9b8_0> arg0, gptr<Object_0013c9b8_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 0xcu;  // (from the original)
    r12 = r0;
    r0 = arg0->word_0;
    if (r0 == 0) {
        guest::cpu()->r[13] += 0xcu;  // (from the original)
        return r0;
    }
    r4 = arg1->word_4;
    r2 = 0u;
    r3 = r0 - 1u;
L_13c9d8:;
    r0 = r2 + r3 >> 1;
    r5_1 = r12 + (r0 << 3);
    if (r4 >= *gptr<u32>(r5_1 + 8u)) {
        goto L_13ca04;
    }
    if (r0 != r2) {
        r3 = r0 - 1u;
        guest::preempt();
        goto L_13c9d8;
    }
    guest::cpu()->r[13] += 0xcu;  // (from the original)
    return r0;
L_13ca04:;
    if (*gptr<u32>(r5_1 + 0xcu) >= arg1->word_0) {  // (from the original)
        guest::cpu()->r[13] += 0xcu;  // (from the original)
        return r0;
    }
    if (r0 != r3) {
        r2 = r0 + 1u;
        guest::preempt();
        goto L_13c9d8;
    }
    guest::cpu()->r[13] += 0xcu;  // (from the original)
    r0_1 = r0 + 1u;
    return r0_1;
}

}  // namespace d_0013c9b8
GUEST_EXPORT(0x0013c9b8, d_0013c9b8::f_0013c9b8);

// f_0013ca2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013ca2c {

struct __attribute__((packed)) Object_0013ca2c_0 {
    u32 word_0;
    u8 byte_4;
};
GUEST_OFFSET(Object_0013ca2c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013ca2c_0, byte_4, 0x4);  // (from the original)

struct __attribute__((packed)) Object_0013ca2c_1 {
    u32 word_0;
    u8 byte_4;
};
GUEST_OFFSET(Object_0013ca2c_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013ca2c_1, byte_4, 0x4);  // (from the original)


void f_0013ca2c(gptr<Object_0013ca2c_0> arg0, gptr<Object_0013ca2c_1> arg1) {
    arg0->word_0 = u32(arg1->word_0);
    arg0->byte_4 = u8(u32(arg1->byte_4));
    return;
}

}  // namespace d_0013ca2c
GUEST_EXPORT(0x0013ca2c, d_0013ca2c::f_0013ca2c);

// f_0013cbdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013cbdc {

struct __attribute__((packed)) Object_0013cbdc_0 {
    u32 word_0;
    u8 unknown_4[0x1c];  // (not used here)
    u32 word_20;
    u32 word_24;
    u32 word_28;
};
GUEST_OFFSET(Object_0013cbdc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013cbdc_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_0013cbdc_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_0013cbdc_0, word_28, 0x28);  // (from the original)

inline constexpr guest::Function<0x0012f154, u32(u32, u32, u32, u32)> call_0012f154;  // (from the original)

u32 f_0013cbdc(gptr<Object_0013cbdc_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    u32 r12 = 0;
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r3 = 0u;
    arg0->word_0 = u32(r1);
    arg0->word_20 = u32(r2);
    arg0->word_24 = u32(r3);
    r1 = r0 + 0x2cu;  // (from the original)
    arg0->word_28 = u32(r3);
    do {
L_13cbf4:;
        *gptr<u32>(r1) = u32(r3);
        guest::preempt();
    } while (u32(0) != 0);
    r1 = 0u;
    r2 = r0 + 0x30u;  // (from the original)
    do {
L_13cc0c:;
        *gptr<u32>(r2) = u32(r1);
        guest::preempt();
    } while (u32(0) != 0);
    r12 = 0x7fffu;  // (from the original)
    r14 = r0 + 4u;
    r2 = 0u;
    r1 = r14;
    do {
L_13cc2c:;
        *gptr<u32>(r1) = u32(r2);
        guest::preempt();
    } while (u32(0) != 0);
    r1 = r14 + 4u;
    do {
L_13cc40:;
        *gptr<u16>(r1) = u16(sxth(r3));
        guest::preempt();
    } while (u32(0) != 0);
    r2 = 0u;
    r1 = r0 + 0xcu;  // (from the original)
    *gptr<u16>(r14 + 6u) = u16(r12);
    do {
L_13cc60:;
        *gptr<u32>(r1) = u32(r2);
        guest::preempt();
    } while (u32(0) != 0);
    r2 = r1 + 4u;
    do {
L_13cc74:;
        *gptr<u16>(r2) = u16(sxth(r3));
        guest::preempt();
    } while (u32(0) != 0);
    *gptr<u16>(r1 + 6u) = u16(r12);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r0_1 = r0 + 0x14u;  // (from the original)
    return call_0012f154(r0_1, r1, r2, r3);
}

}  // namespace d_0013cbdc
GUEST_EXPORT(0x0013cbdc, d_0013cbdc::f_0013cbdc);

// f_0013cc9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013cc9c {

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x0013a768, u32(u32, u32, u32, u32)> call_0013a768;  // (from the original)

u32 f_0013cc9c(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r5_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = r0 + 0x30u;  // (from the original)
    call_00135748(r0_1, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r5_1 = *gptr<u32>(r0 + 0x24u);  // (from the original)
    if (r5_1 == 0) {
        goto L_13ccf0;
    }
    *gptr<u32>(r0 + 0x24u) = u32(*gptr<u32>(r5_1));  // (from the original)
    *gptr<u32>(r0 + 0x2cu) = u32(*gptr<u32>(r0 + 0x2cu) + 1u);  // (from the original)
    r1_1 = *gptr<u32>(r0 + 0x18u);  // (from the original)
    if ((*gptr<u32>(r0 + 0x14u) & 1u) == 0) {  // (from the original)
        goto L_13ccf0;
    }
    r1_2 = r1_1 + r5_1;
    call_0013a768(r5_1, r1_2, 0u, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
L_13ccf0:;
    call_001357ec(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return r5_1;
}

}  // namespace d_0013cc9c
GUEST_EXPORT(0x0013cc9c, d_0013cc9c::f_0013cc9c);

// f_0013d060: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013d060 {

inline guest::global<u32, 0x0095e0c4> global_0095e0c4;  // (from the original)

u32 f_0013d060() {
    u32 r1_1 = 0;
    r1_1 = *global_0095e0c4;
    return guest::call_address<u32>(r1_1, guest::cpu()->r[0], r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0013d060
GUEST_EXPORT(0x0013d060, d_0013d060::f_0013d060);

// f_0013d118: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013d118 {

inline guest::global<u32, 0x00975284> global_00975284;  // (from the original)
inline constexpr guest::Function<0x0013e560, u32(u32, u32, u32, u32)> call_0013e560;  // (from the original)

u32 f_0013d118(u32 r0) {
    u32 r0_1 = 0;
    if (r0 == 0) {
        guest::cpu()->r[1] = r0;
        return r0;
    }
    r0_1 = *gptr<u32>(*global_00975284);
    return call_0013e560(r0_1, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0013d118
GUEST_EXPORT(0x0013d118, d_0013d118::f_0013d118);

// f_0013d148: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013d148 {

inline guest::global<u32, 0x00975284> global_00975284;  // (from the original)
inline constexpr guest::Function<0x0012f600, u32(u32, u32, u32, u32)> call_0012f600;  // (from the original)

u32 f_0013d148(u32 r0, u32 r1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    r0_1 = *gptr<u32>(*global_00975284);
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_2 = call_0012f600(r0_1, r0, r1, 0u);
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_0013d148
GUEST_EXPORT(0x0013d148, d_0013d148::f_0013d148);

// f_0013d408: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013d408 {

struct __attribute__((packed)) Object_0013d408_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0013d408_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0014156c, u32(u32, u32, u32, u32)> call_0014156c;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_0013d408(gptr<Object_0013d408_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0x8eb490u);  // (from the original)
    r0_1 = r0 + 0x44u;  // (from the original)
    call_002f76ac(r0_1, 0x14152cu, 0x20u, 0xau);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r0 + 0x14u;  // (from the original)
    r0_3 = call_0014156c(r0_2, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r0_4 = r0_3 - 0x14u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return r0_4;
}

}  // namespace d_0013d408
GUEST_EXPORT(0x0013d408, d_0013d408::f_0013d408);

// f_0013d444: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013d444 {

struct __attribute__((packed)) Object_0013d444_0 {
    u8 unknown_0[0x14];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Object_0013d444_0, byte_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x0013fd78, u32(u32, u32, u32, u32)> call_0013fd78;  // (from the original)
inline constexpr guest::Function<0x0014041c, u32(u32, u32, u32, u32)> call_0014041c;  // (from the original)
inline constexpr guest::Function<0x001404f0, u32(u32, u32, u32, u32)> call_001404f0;  // (from the original)
inline constexpr guest::Function<0x00140530, u32(u32, u32, u32, u32)> call_00140530;  // (from the original)
inline constexpr guest::Function<0x00140564, u32(u32, u32, u32, u32)> call_00140564;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f88b8, u32(u32, u32, u32, u32)> call_002f88b8;  // (from the original)

u32 f_0013d444(gptr<Object_0013d444_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 res_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_5 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    if (u32(arg0->byte_14) != 0) {
        r0_1 = r0 + 0x34u;  // (from the original)
        call_0013fd78(r0_1, r1, r2, r3);
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        r0_2 = u32(*gptr<u8>(r0 + 0x14u));  // (from the original)
        if (r0_2 == 2u) {
            r0_3 = call_00140530(r0_2, r1_1, r2_1, r3_1);
            r1_1 = guest::cpu()->r[1];
            r2_1 = guest::cpu()->r[2];
            r3_1 = guest::cpu()->r[3];
            res_1 = r0_3 & 0x80000000u;  // (from the original)
            if (!(res_1 >> 0x1f)) {  // (from the original)
                r1_1 = 1u;
                *gptr<u32>(r0 + 0x2cu) = u32(0u);  // (from the original)
                *gptr<u8>(r0 + 0x14u) = u8(r1_1);  // (from the original)
            }
            *gptr<u8>(r0 + 0x16u) = u8(0u);  // (from the original)
            *gptr<u8>(r0 + 0x17u) = u8(0u);  // (from the original)
        }
        r0_4 = call_001404f0(0u, r1_1, r2_1, r3_1);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        r0_5 = call_0014041c(r0_4, r1_2, r2_2, r3_2);
        r1_3 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        call_00140564(r0_5, r1_3, r2_3, r3_3);
        r1_4 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        r0_6 = *gptr<u32>(r0 + 0x28u);  // (from the original)
        if (r0_6 != 0) {
            call_002f88b8(r0_6, r1_4, r2_4, r3_4);
            *gptr<u32>(r0 + 0x28u) = u32(0u);  // (from the original)
        }
        *gptr<u8>(r0 + 0x15u) = u8(2u);  // (from the original)
        *gptr<u8>(r0 + 0x14u) = u8(0u);  // (from the original)
    }
    r0_7 = r0 + 0x40u;  // (from the original)
    call_002f76ac(r0_7, 0x13bbfcu, 0xecu, 6u);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    return r0;
}

}  // namespace d_0013d444
GUEST_EXPORT(0x0013d444, d_0013d444::f_0013d444);

// f_0013d6d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013d6d0 {

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x0013f000, u32(u32, u32, u32, u32)> call_0013f000;  // (from the original)

u32 f_0013d6d0(u32 r0, u32 r1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 zf_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    r13 = r13 - 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00135740(0x982870u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    zf_1 = u32(*gptr<u8>(r0 + 0xcu)) == 1u;  // (from the original)
    if (!zf_1) {
        zf_1 = u32(*gptr<u8>(r0 + 0xcu)) == 2u;  // (from the original)
    }
    if (zf_1) {
        guest::cpu()->r[13] = r13;
        call_00135740(0x982870u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0013f000(0x982864u, r0, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        guest::cpu()->r[13] = r13;
        call_00137e84(0x982870u, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    }
    r1_3 = ~0u;
    ea_1 = r0 + 0xcu;  // (from the original)
    *gptr<u8>(ea_1) = u8(0u);
    ea_2 = r0 + 0x10u;  // (from the original)
    *gptr<u32>(ea_2) = u32(0u);
    *gptr<u32>(ea_2 + 4) = u32(r1_3);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_00137e84(0x982870u, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0013d6d0
GUEST_EXPORT(0x0013d6d0, d_0013d6d0::f_0013d6d0);

// f_0013d73c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013d73c {

struct __attribute__((packed)) Object_0013d73c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0013d73c_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x0013f000, u32(u32, u32, u32, u32)> call_0013f000;  // (from the original)

u32 f_0013d73c(gptr<Object_0013d73c_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r2_2 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r2_4 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    arg0->word_0 = u32(0x8f4a84u);  // (from the original)
    call_00135740(0x982870u, r1, r2, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (u32(*gptr<u8>(r0 + 0xcu)) != 1u) {  // (from the original)
        if (u32(*gptr<u8>(r0 + 0xcu)) != 2u) {  // (from the original)
            goto L_13d798;
        }
    }
    call_00135740(0x982870u, r1_1, r2_1, guest::cpu()->r[3]);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    call_0013f000(0x982864u, r0, r2_2, guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    call_00137e84(0x982870u, r1_2, r2_3, guest::cpu()->r[3]);  // (from the original)
L_13d798:;
    r2_4 = ~0u;
    *gptr<u8>(r0 + 0xcu) = u8(0u);  // (from the original)
    r1_3 = r0 + 0x10u;  // (from the original)
    *gptr<u32>(r1_3) = u32(0u);
    *gptr<u32>(r1_3 + 4) = u32(r2_4);
    call_00137e84(0x982870u, r1_3, r2_4, guest::cpu()->r[3]);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    return r0;
}

}  // namespace d_0013d73c
GUEST_EXPORT(0x0013d73c, d_0013d73c::f_0013d73c);

// f_0013d7cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013d7cc {

struct __attribute__((packed)) Object_0013d7cc_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0013d7cc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013d7cc_0, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0094cd20> global_0094cd20;  // (from the original)
inline constexpr guest::Function<0x00136cc8, u32(u32, u32, u32, u32)> call_00136cc8;  // (from the original)
inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> call_00136e58;  // (from the original)
inline constexpr guest::Function<0x00138c2c, u32(u32, u32, u32, u32)> call_00138c2c;  // (from the original)
inline constexpr guest::Function<0x0013d4f0, u32(u32, u32, u32, u32)> call_0013d4f0;  // (from the original)

u32 f_0013d7cc(gptr<Object_0013d7cc_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    arg0->word_0 = u32(0x8f54d0u);  // (from the original)
    r0_1 = arg0->word_4;
    if (r0_1 != 0) {
        call_00136e58(r0_1, 0u, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
    }
    if (*gptr<u32>(r0 + 0x44u) + 1u == 0) {  // (from the original)
        goto L_13d834;
    }
    r0_2 = *global_0094cd20;
    if (r0_2 == 0) {
        goto L_13d834;
    }
    r0_3 = call_00138c2c(r0_2, 0u, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = *gptr<u32>(r0 + 0x44u);  // (from the original)
    if (s32(r1) > s32(r0_3)) {
        goto L_13d834;
    }
    r0_4 = *global_0094cd20;
    r0_5 = call_0013d4f0(r0_4, r1, 0u, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_5 != 0) {
        *gptr<u32>(r0 + 0x44u) = u32(~0u);  // (from the original)
    }
L_13d834:;
    *gptr<u8>(r0 + 0x24u) = u8(0u);  // (from the original)
    r0_6 = r0 + 4u;
    call_00136cc8(r0_6, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0;
}

}  // namespace d_0013d7cc
GUEST_EXPORT(0x0013d7cc, d_0013d7cc::f_0013d7cc);

// f_0013d85c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013d85c {

struct __attribute__((packed)) Object_0013d85c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0013d85c_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0012ede8, u32(u32, u32, u32, u32)> call_0012ede8;  // (from the original)
inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> call_00134250;  // (from the original)

u32 f_0013d85c(gptr<Object_0013d85c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 res_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 8u;
    r4_1 = r0 + 4u;
    r0_1 = arg0->word_4;
    res_1 = r0_1 & ~1u;
    r1_1 = res_1;
    if (res_1 == 0) {
        r0_2 = r4_1 - 4u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    if ((r0_1 & 1u) != 0) {
        call_00134250(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
    }
    r0_3 = *gptr<u32>(r4_1) & ~1u;
    call_0012ede8(r0_3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r4_1) = u32(0u);
    r0_4 = r4_1 - 4u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0u;
    return r0_4;
}

}  // namespace d_0013d85c
GUEST_EXPORT(0x0013d85c, d_0013d85c::f_0013d85c);

// f_0013dc74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013dc74 {

inline constexpr guest::Function<0x0012f154, u32(u32, u32, u32, u32)> call_0012f154;  // (from the original)
inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x0013cc9c, u32(u32, u32, u32, u32)> call_0013cc9c;  // (from the original)
inline constexpr guest::Function<0x0014031c, u32(u32, u32, u32, u32)> call_0014031c;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)

u32 f_0013dc74(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r4_1 = 0;
    u32 r8_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r1_4 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00135748(0xae0cb8u, r1, r2, r3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if ((*gptr<u32>(0x974f00u + 0xcu) & 1u) != 0) {  // (from the original)
        goto L_13dd1c;
    }
    r0_1 = 0x974f00u + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fe7dc(r0_1, r1_1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_13dd1c;
    }
    r4_1 = 0xae0cb8u - 0xf0u;  // (from the original)
    *gptr<u32>(r4_1 + 4u) = u32(0u);
    *gptr<u32>(r4_1 + 8u) = u32(0u);
    *gptr<u32>(r4_1 + 0xcu) = u32(0u);  // (from the original)
    *gptr<u32>(r4_1 + 0x10u) = u32(0u);  // (from the original)
    *gptr<u32>(r4_1 + 0x14u) = u32(0u);  // (from the original)
    *gptr<u32>(r4_1 + 0x24u) = u32(0u);  // (from the original)
    *gptr<u32>(r4_1 + 0x30u) = u32(0u);  // (from the original)
    r8_1 = ~0u;
    *gptr<u32>(r4_1) = u32(0x8fb030u);  // (from the original)
    *gptr<u32>(r4_1 + 0x38u) = u32(r8_1);  // (from the original)
    *gptr<u32>(r4_1 + 0x34u) = u32(0u);  // (from the original)
    *gptr<u32>(r13) = u32(4u);
    *gptr<u32>(r13 + 4) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_0014031c(r4_1, 0x130u, 0x94a940u, 0x1300u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_3 = r4_1 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0012f154(r0_3, r1_2, r2_2, r3_2);
    r3_1 = guest::cpu()->r[3];
    r2_1 = 0x100000u;  // (from the original)
    r1_1 = 0x142430u;  // (from the original)
L_13dd1c:;
    *gptr<u32>(0x974f00u + 4u) = u32(0xae0bc8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_0013cc9c(0xae0bc8u, r1_1, r2_1, r3_1);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_001357ec(0xae0cb8u, r1_3, r2_3, r3_3);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return r0_4;
}

}  // namespace d_0013dc74
GUEST_EXPORT(0x0013dc74, d_0013dc74::f_0013dc74);

// f_0013dd5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013dd5c {

struct __attribute__((packed)) Object_0013dd5c_0 {
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
    u32 word_30;
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
    u32 word_64;
    u32 word_68;
    u32 word_6c;
    u8 unknown_70[0x48];  // (not used here)
    u32 word_b8;
    u32 word_bc;
    u32 word_c0;
    u32 word_c4;
    u32 word_c8;
    u32 word_cc;
    u8 unknown_d0[0xc];  // (not used here)
    u32 word_dc;
    u8 unknown_e0[0x8];  // (not used here)
    u32 word_e8;
    u32 word_ec;
    u32 word_f0;
    u32 word_f4;
    u32 word_f8;
    u32 word_fc;
    u32 word_100;
    u32 word_104;
    u32 word_108;
    u8 unknown_10c[0xc];  // (not used here)
    u32 word_118;
    u8 unknown_11c[0x8];  // (not used here)
    u32 word_124;
    u32 word_128;
    u32 word_12c;
};
GUEST_OFFSET(Object_0013dd5c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_44, 0x44);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_48, 0x48);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_4c, 0x4c);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_50, 0x50);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_54, 0x54);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_58, 0x58);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_5c, 0x5c);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_60, 0x60);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_64, 0x64);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_68, 0x68);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_6c, 0x6c);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_b8, 0xb8);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_bc, 0xbc);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_c0, 0xc0);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_c4, 0xc4);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_c8, 0xc8);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_cc, 0xcc);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_dc, 0xdc);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_e8, 0xe8);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_ec, 0xec);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_f0, 0xf0);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_f4, 0xf4);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_f8, 0xf8);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_fc, 0xfc);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_100, 0x100);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_104, 0x104);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_108, 0x108);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_118, 0x118);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_124, 0x124);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_128, 0x128);  // (from the original)
GUEST_OFFSET(Object_0013dd5c_0, word_12c, 0x12c);  // (from the original)


void f_0013dd5c(gptr<Object_0013dd5c_0> arg0) {
    u32 r12_1 = 0;
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(0u);
    arg0->word_20 = u32(0u);
    arg0->word_24 = u32(0u);
    arg0->word_28 = u32(0u);
    arg0->word_2c = u32(0u);
    arg0->word_30 = u32(0u);
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
    arg0->word_64 = u32(0u);
    arg0->word_68 = u32(0u);
    arg0->word_6c = u32(0u);
    arg0->word_bc = u32(0u);
    arg0->word_c0 = u32(0u);
    arg0->word_c4 = u32(0u);
    arg0->word_c8 = u32(0u);
    arg0->word_cc = u32(0u);
    arg0->word_dc = u32(0u);
    arg0->word_e8 = u32(0u);
    r12_1 = ~0u;
    arg0->word_ec = u32(0u);
    arg0->word_f0 = u32(r12_1);
    arg0->word_f8 = u32(0u);
    arg0->word_b8 = u32(0x8fb030u);  // (from the original)
    arg0->word_fc = u32(0u);
    arg0->word_100 = u32(0u);
    arg0->word_104 = u32(0u);
    arg0->word_108 = u32(0u);
    arg0->word_118 = u32(0u);
    arg0->word_124 = u32(0u);
    arg0->word_128 = u32(0u);
    arg0->word_12c = u32(r12_1);
    arg0->word_c = u32(0u);
    arg0->word_f4 = u32(0x8fb030u);  // (from the original)
    arg0->word_10 = u32(0u);
    arg0->word_14 = u32(0u);
    arg0->word_18 = u32(0u);
    arg0->word_0 = u32(0x8faed0u);  // (from the original)
    arg0->word_1c = u32(0u);
    guest::cpu()->r[1] = 0x8faed0u;  // (from the original)
    return;
}

}  // namespace d_0013dd5c
GUEST_EXPORT(0x0013dd5c, d_0013dd5c::f_0013dd5c);

// f_0013dee0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013dee0 {

inline guest::global<u32, 0x00974ef8> global_00974ef8;  // (from the original)
inline constexpr guest::Function<0x0012f598, u32(u32, u32, u32, u32)> call_0012f598;  // (from the original)

u32 f_0013dee0(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    if (*global_00974ef8 == 0) {
        call_0012f598(0xe0a046dbu, 0x13defcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
    }
    r0_1 = *global_00974ef8;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_0013dee0
GUEST_EXPORT(0x0013dee0, d_0013dee0::f_0013dee0);

// f_0013df14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013df14 {

inline constexpr guest::Function<0x00100cfd, u32(u32, u32, u32, u32)> call_00100cfc;  // (from the original)
inline constexpr guest::Function<0x00100d0f, u32(u32, u32, u32, u32)> call_00100d0e;  // (from the original)
inline constexpr guest::Function<0x00139ffc, u32(u32, u32, u32, u32)> call_00139ffc;  // (from the original)
inline constexpr guest::Function<0x002f7951, u32(u32, u32, u32, u32)> call_002f7950;  // (from the original)

u32 f_0013df14(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x238u;  // (from the original)
    r7 = r0;
    r9 = 0u;
    r6 = r1;
    r8 = r2;
    r5 = r13;
    r0_1 = r13 + 0x210u;  // (from the original)
    *gptr<u32>(r13 + 0x210u) = u32(r9);  // (from the original)
    *gptr<u32>(r13 + 0x214u) = u32(r9);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00100cfc(r0_1, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r10 = 0x105u;  // (from the original)
L_13df44:;
    r2_1 = r13 + 0x210u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_00100d0e(r6, r10, r2_1, r3);
    r3 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        r3_1 = r13 + 0x210u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_3 = call_002f7950(r5, r6, r0_2, r3_1);
        r3 = guest::cpu()->r[3];
        if (r0_3 != 0) {
            r5 = r5 + 2u;
            r6 = r6 + r0_2;
            guest::preempt();
            goto L_13df44;
        }
    }
    *gptr<u16>(r5) = u16(r9);
    *gptr<u32>(r7 + 0xcu) = u32(r9);  // (from the original)
    *gptr<u32>(r7 + 0x10u) = u32(r9);  // (from the original)
    *gptr<u32>(r7 + 4u) = u32(r9);
    r1_1 = r13;
    *gptr<u32>(r7 + 8u) = u32(r9);
    guest::cpu()->r[13] = r13;
    r0_4 = call_00139ffc(r7, r1_1, r8, r3);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x238u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_4;
}

}  // namespace d_0013df14
GUEST_EXPORT(0x0013df14, d_0013df14::f_0013df14);

// f_0013e164: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013e164 {


u32 f_0013e164(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 vf_1 = 0;
    u32 r0_2 = 0;
    if (s32(r0) >= s32(0x20u)) {  // (from the original)
        r0_1 = r0 - 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    res_1 = r0 - 0x18u;  // (from the original)
    nf_1 = res_1 >> 0x1f;  // (from the original)
    vf_1 = ((r0 ^ 0x18u) & (r0 ^ res_1)) >> 0x1f;  // (from the original)
    if (nf_1 == vf_1) {
        r1 = 0x5109d500u;  // (from the original)
    }
    if (nf_1 != vf_1) {
        r1 = 0x6c8da500u;  // (from the original)
    }
    if (nf_1 == vf_1) {
        r0 = r0 - 0x18u;  // (from the original)
    }
    r0_2 = r0 + r1;
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_0013e164
GUEST_EXPORT(0x0013e164, d_0013e164::f_0013e164);

// f_0013e258: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013e258 {


u32 f_0013e258(u32 r0) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    if (r0 < 0xaf9000u) {  // (from the original)
        guest::cpu()->r[1] = 0xaf9000u;  // (from the original)
        return r0;
    }
    r1_1 = 0x8000000u - 0xaf9000u;  // (from the original)
    r0_1 = r0 + r1_1;
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0013e258
GUEST_EXPORT(0x0013e258, d_0013e258::f_0013e258);

// f_0013e274: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013e274 {

inline guest::global<u8, 0x0097e038> global_0097e038;  // (from the original)
inline constexpr guest::Function<0x00134c80, u32(u32, u32, u32, u32)> call_00134c80;  // (from the original)
inline constexpr guest::Function<0x0013fff8, u32(u32, u32, u32, u32)> call_0013fff8;  // (from the original)
inline constexpr guest::Function<0x00140694, u32(u32, u32, u32, u32)> call_00140694;  // (from the original)

u32 f_0013e274(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r1_1 = 0;
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 r2_2 = 0;
    u32 ea_4 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 ea_5 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    r1_1 = u32(*global_0097e038);
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0xc;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r14);
    r13 = r13 - 0x50u;  // (from the original)
    r0_1 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00140694(r0_1, r0, 0x80u, r3);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r1_2 = r13 + 0x20u;  // (from the original)
    r0_2 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_0013fff8(r0_2, r1_2, r2_1, r3_1);
    r1_3 = r0_3;
    r5 = 0u;
    if (r0_3 >> 0x1f != (r0_3 & (r0_3 ^ r0_3)) >> 0x1f) {  // (from the original)
        r13 = r13 + 0x44u;  // (from the original)
        ea_5 = r13;
        r13 = r13 + 0xc;  // (from the original)
        r4_1 = *gptr<u32>(ea_5);
        r5_1 = *gptr<u32>(ea_5 + 4);
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_1;
        guest::cpu()->r[13] = r13;
        return r0_3;
    }
    r0_3 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    if (*gptr<u32>(r0_3 + 0x14u) == 0) {  // (from the original)
        r13 = r13 + 0x44u;  // (from the original)
        ea_5 = r13;
        r13 = r13 + 0xc;  // (from the original)
        r4_1 = *gptr<u32>(ea_5);
        r5_1 = *gptr<u32>(ea_5 + 4);
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_1;
        guest::cpu()->r[13] = r13;
        return r0_3;
    }
    ea_2 = r0_3 + 0x10u;  // (from the original)
    ea_3 = *gptr<u32>(ea_2) + r0_3;
    r12 = *gptr<u32>(ea_3 + 4);
    r2_2 = *gptr<u32>(ea_3) + r0_3;
    if (s32(r12) <= s32(r1_3)) {
        r13 = r13 + 0x44u;  // (from the original)
        ea_5 = r13;
        r13 = r13 + 0xc;  // (from the original)
        r4_1 = *gptr<u32>(ea_5);
        r5_1 = *gptr<u32>(ea_5 + 4);
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_1;
        guest::cpu()->r[13] = r13;
        return r0_3;
    }
    ea_4 = *gptr<u32>(r2_2 + (r1_3 << 3)) + r0_3;
    r1_3 = *gptr<u32>(ea_4 + 4u);
    res_1 = r0_3 + *gptr<u32>(ea_4);
    r0_3 = res_1;
    if (res_1 == 0) {
        r13 = r13 + 0x44u;  // (from the original)
        ea_5 = r13;
        r13 = r13 + 0xc;  // (from the original)
        r4_1 = *gptr<u32>(ea_5);
        r5_1 = *gptr<u32>(ea_5 + 4);
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_1;
        guest::cpu()->r[13] = r13;
        return r0_3;
    }
    r2 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r2) = u32(r0_3);
    *gptr<u32>(r2 + 4) = u32(r1_3 + 1u);
    *gptr<u32>(r2 + 8) = u32(r0);
    r1 = 0u;
    r3 = *gptr<u32>(r0 + 0xccu);  // (from the original)
    nf_1 = r3 >> 0x1f;  // (from the original)
    zf_1 = r3 == 0;
    if (!zf_1 && nf_1 == 0u) {
        r12 = *gptr<u32>(r0 + 0xc8u);  // (from the original)
    }
    if (zf_1 || nf_1 != 0u) {
        goto L_13e334;
    }
    do {
L_13e314:;
        r0_4 = r12 + (r1 + (r1 << 1) << 2);
        r2 = u32(*gptr<u8>(r0_4 + 8u));
        if (r2 == 2u) {
            goto L_13e34c;
        }
        r1 = r1 + 1u;
        guest::preempt();
    } while (s32(r3) > s32(r1));
L_13e334:;
    r0_5 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r13 + 0x1cu) = u32(r5);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_00134c80(r0_5, 0x10u, r2, r3);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x44u;  // (from the original)
    ea_5 = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4_1 = *gptr<u32>(ea_5);
    r5_1 = *gptr<u32>(ea_5 + 4);
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[13] = r13;
    return r0_3;
L_13e34c:;
    r5 = *gptr<u32>(r0_4);
    guest::preempt();
    goto L_13e334;
}

}  // namespace d_0013e274
GUEST_EXPORT(0x0013e274, d_0013e274::f_0013e274);

// f_0013e560: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013e560 {

inline constexpr guest::Function<0x0013e580, u32(u32, u32, u32, u32)> call_0013e580;  // (from the original)

u32 f_0013e560(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0x18u;  // (from the original)
    call_0013e580(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = *gptr<u32>(r0 + 0x54u) - 1u;  // (from the original)
    *gptr<u32>(r0 + 0x54u) = u32(r0_2);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0_2;
}

}  // namespace d_0013e560
GUEST_EXPORT(0x0013e560, d_0013e560::f_0013e560);

// f_0013e75c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013e75c {

struct __attribute__((packed)) Object_0013e75c_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0xc];  // (not used here)
    u32 word_24;
};
GUEST_OFFSET(Object_0013e75c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0013e75c_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0013e75c_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0013e75c_0, word_24, 0x24);  // (from the original)

inline guest::global<u32, 0x00981890> global_00981890;  // (from the original)
inline constexpr guest::Function<0x0013e7d8, u32(u32, u32, u32, u32)> call_0013e7d8;  // (from the original)
inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32, u32)> call_0013fac4;  // (from the original)
inline constexpr guest::Function<0x001432c8, u32(u32, u32, u32, u32)> call_001432c8;  // (from the original)

u32 f_0013e75c(gptr<Object_0013e75c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r5_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    r13 = r13 - 0x10;  // (from the original)
    ea_1 = r13 + 0x10u;  // (from the original)
    r0_1 = *gptr<u32>(ea_1) & 0xffu;  // (from the original)
    arg0->word_24 = u32(r0_1);
    zf_1 = (r0_1 & 2u) == 0;
    arg0->word_14 = u32(r1);
    arg0->word_c = u32(r2);
    arg0->word_10 = u32(r3);
    r1_1 = r3 - r2;
    if (!zf_1) {
        r2_1 = *global_00981890;
        guest::cpu()->r[13] = r13;
        call_0013fac4(r2, r1_1, r2_1, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r5_1 = 0xaf51c0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_001432c8(r5_1, r0, r2, r3);
    r3_1 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        r5_1 = r0_2 + 0x18u;  // (from the original)
    }
    r1_2 = r5_1 + 4u;
    r2_2 = r0 + 4u;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0013e7d8(r5_1, r1_2, r2_2, r3_1);
}

}  // namespace d_0013e75c
GUEST_EXPORT(0x0013e75c, d_0013e75c::f_0013e75c);

// f_0013ea18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013ea18 {

struct __attribute__((packed)) Object_0013ea18_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0013ea18_0, word_0, 0x0);  // (from the original)

inline guest::global<u32, 0x0097511c> global_0097511c;  // (from the original)

u32 f_0013ea18(gptr<Object_0013ea18_0> arg0) {
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    r0_1 = arg0->word_0;
    r2_1 = *gptr<u32>(r0_1);
    if (r2_1 == 0x80000000u) {  // (from the original)
        r1_1 = *global_0097511c;
        return guest::call_address<u32>(r1_1, r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    }
    if (r2_1 != 0x40000000u) {  // (from the original)
        guest::cpu()->r[1] = 0x97511cu;  // (from the original)
        return r0_1;
    }
    r1_2 = *gptr<u32>(0x97511cu + 4u);  // (from the original)
    return guest::call_address<u32>(r1_2, r0_1, r1_2, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_0013ea18
GUEST_EXPORT(0x0013ea18, d_0013ea18::f_0013ea18);

// f_0013ea4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013ea4c {

struct __attribute__((packed)) Object_0013ea4c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0013ea4c_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00140914, u32(u32, u32, u32, u32)> call_00140914;  // (from the original)

u32 f_0013ea4c(gptr<Object_0013ea4c_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    ea_1 = arg0->word_0 + 0x28u;  // (from the original)
    r1_1 = *gptr<u32>(ea_1);
    if (r1_1 == 0) {
        r0_1 = 0u;
    } else {
        r0_1 = ea_1 + r1_1;
    }
    *gptr<u32>(r13) = u32(r0_1);
    if (r0_1 != 0) {
        r0_2 = r13;
        guest::cpu()->r[13] = r13;
        r0_1 = call_00140914(r0_2, r1_1, guest::cpu()->r[2], r3);
        r1_1 = guest::cpu()->r[1];
    }
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_0013ea4c
GUEST_EXPORT(0x0013ea4c, d_0013ea4c::f_0013ea4c);

// f_0013ebec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013ebec {

struct __attribute__((packed)) Object_0013ebec_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u8 byte_c;
};
GUEST_OFFSET(Object_0013ebec_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0013ebec_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0013ebec_0, byte_c, 0xc);  // (from the original)


u32 f_0013ebec(gptr<Object_0013ebec_0> arg0, u32 r1, u32 r2) {
    u32 r3_1 = 0;
    u32 zf_1 = 0;
    u32 r0_1 = 0;
    r3_1 = u32(arg0->byte_c);
    zf_1 = r3_1 == 0;
    if (!zf_1) {
        r3_1 = arg0->word_8;
        zf_1 = r3_1 == 0;
    }
    if (zf_1) {
        return 0u;
    }
    if (*gptr<u32>(arg0->word_4) > r1) {
        r0_1 = *gptr<u32>(r3_1 + (r1 << 2));
        *gptr<u32>(r3_1 + (r1 << 2)) = u32(r2);
        return r0_1;
    }
    return 0u;
}

}  // namespace d_0013ebec
GUEST_EXPORT(0x0013ebec, d_0013ebec::f_0013ebec);

// f_0013ec20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013ec20 {

struct __attribute__((packed)) Object_0013ec20_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
};
GUEST_OFFSET(Object_0013ec20_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013ec20_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0013ec20_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0013ec20_0, byte_c, 0xc);  // (from the original)

struct __attribute__((packed)) Object_0013ec20_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0013ec20_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013ec20_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0013f3cc, u32(u32, u32, u32, u32)> call_0013f3cc;  // (from the original)
inline constexpr guest::Function<0x001416bc, u32(u32, u32, u32, u32)> call_001416bc;  // (from the original)

u32 f_0013ec20(gptr<Object_0013ec20_0> arg0, gptr<Object_0013ec20_1> arg1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r6_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r5_1 = r1;
    arg0->word_0 = u32(0u);
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(0u);
    arg0->byte_c = u8(0u);
    if (r1 == 0) {
        goto L_13ecc8;
    }
    r1 = 0x52415743u;  // (from the original)
    if (arg1->word_0 != r1) {
        goto L_13ecc8;
    }
    if (arg1->word_8 != 0x1000000u) {  // (from the original)
        goto L_13ecc8;
    }
    arg0->word_0 = u32(r5_1);
    r0_1 = call_0013f3cc(r5_1, r1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    r1 = r0_1 + 8u;
    *gptr<u32>(r0 + 4u) = u32(r1);
    *gptr<u8>(r0 + 0xcu) = u8(1u);  // (from the original)
    *gptr<u32>(r0 + 8u) = u32(0u);
    if (r2 == 0) {
        goto L_13ecc8;
    }
    if (1u == 0) {
        goto L_13ecc8;
    }
    r6_1 = *gptr<u32>(r0);
    r0_2 = call_001416bc(r6_1, r1, r2_1, guest::cpu()->r[3]);
    r2_2 = guest::cpu()->r[2];
    r1 = 0x54415743u;  // (from the original)
    if (*gptr<u32>(r6_1 + r0_2) != r1) {
        goto L_13ecc8;
    }
    r0_3 = *gptr<u32>(r0);
    r0_4 = call_001416bc(r0_3, r1, r2_2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r0 + 8u) = u32(r0_4 + 4u + r5_1);
L_13ecc8:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0013ec20
GUEST_EXPORT(0x0013ec20, d_0013ec20::f_0013ec20);

// f_0013edb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013edb4 {

struct __attribute__((packed)) Object_0013edb4_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0013edb4_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0013e7d8, u32(u32, u32, u32, u32)> call_0013e7d8;  // (from the original)
inline constexpr guest::Function<0x0013e92c, u32(u32, u32, u32, u32)> call_0013e92c;  // (from the original)
inline constexpr guest::Function<0x0014087c, u32(u32, u32, u32, u32)> call_0014087c;  // (from the original)

u32 f_0013edb4(gptr<Object_0013edb4_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    u32 r0_3 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_4 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r0_1 = arg0->word_0;
    guest::cpu()->r[13] = r13;
    r0_2 = call_0013e92c(r0_1, 0x18u, 4u, r3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        *gptr<u32>(r0_2) = u32(0u);
        ea_1 = r0_2 + 4u;
        *gptr<u32>(ea_1) = u32(0u);
        ea_2 = r0_2 + 8u;
        *gptr<u32>(ea_2) = u32(0u);
        ea_3 = r0_2 + 0xcu;  // (from the original)
        *gptr<u32>(ea_3) = u32(0u);
        ea_4 = r0_2 + 0x10u;  // (from the original)
        *gptr<u32>(ea_4) = u32(0u);
        ea_5 = r0_2 + 0x14u;  // (from the original)
        *gptr<u32>(ea_5) = u32(0u);
        *gptr<u32>(r0_2) = u32(0u);
        ea_6 = r0_2 + 4u;
        *gptr<u32>(ea_6) = u32(0u);
        r0_3 = ea_6 + 4u;
        r3_1 = r0_2 + 8u;
        r2_1 = r0_3 + 4u;
        *gptr<u32>(r3_1) = u32(0u);
        *gptr<u32>(r3_1 + 4) = u32(r2_1);
        *gptr<u32>(r0_3 + 8u) = u32(r2_1);
        *gptr<u8>(r0_2 + 0x14u) = u8(1u);  // (from the original)
        r1_2 = *gptr<u32>(r0_2 + 0xcu);  // (from the original)
        r2_2 = r0_2 + 0xcu;  // (from the original)
        r0_4 = r0_2 + 8u;
        guest::cpu()->r[13] = r13;
        call_0014087c(r0_4, r1_2, r2_2, r3_1);
        r3_2 = guest::cpu()->r[3];
        r0_5 = r0 + 4u;
        r1_3 = r0 + 8u;
        guest::cpu()->r[13] = r13;
        call_0013e7d8(r0_5, r1_3, r0_2, r3_2);
        r1_1 = guest::cpu()->r[1];
        r0_2 = 1u;
    }
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_0013edb4
GUEST_EXPORT(0x0013edb4, d_0013edb4::f_0013edb4);

// f_0013ee40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013ee40 {

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x00140f54, u32(u32, u32, u32, u32)> call_00140f54;  // (from the original)
inline constexpr guest::Function<0x00140fac, u32(u32, u32, u32, u32)> call_00140fac;  // (from the original)
inline constexpr guest::Function<0x001411ec, u32(u32, u32, u32, u32)> call_001411ec;  // (from the original)
inline constexpr guest::Function<0x00141490, u32(u32, u32, u32, u32)> call_00141490;  // (from the original)
inline constexpr guest::Function<0x001414b4, u32(u32, u32, u32, u32)> call_001414b4;  // (from the original)

u32 f_0013ee40(u32 r0, u32 r1) {
    u32 r5_1 = 0;
    u32 r1_1 = 0;
    u32 r6_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    u32 r1_3 = 0;
    u32 r0_2 = 0;
    u32 r1_4 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_5 = 0;
    u32 r0_5 = 0;
    u32 r1_6 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5_1 = r0 + 4u;
    call_00135748(r5_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (*gptr<u32>(r0 + 0x10u) != 0) {  // (from the original)
        r6_1 = r0 + 4u;
        call_00135748(r6_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        r0_1 = r0 + 0x10u;  // (from the original)
        call_00141490(r0_1, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_3 = guest::cpu()->r[1];
        r0_2 = call_001357ec(r6_1, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_4 = guest::cpu()->r[1];
        r0_3 = call_00140f54(r0_2, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
        r0_4 = call_00140fac(r0_3, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
        call_001411ec(r0_3, r0_4, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_5 = guest::cpu()->r[1];
        r0_5 = r0 + 0x10u;  // (from the original)
        call_001414b4(r0_5, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_6 = guest::cpu()->r[1];
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_001357ec(r5_1, r1_6, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_001357ec(r5_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0013ee40
GUEST_EXPORT(0x0013ee40, d_0013ee40::f_0013ee40);

// f_0013ef18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013ef18 {

struct __attribute__((packed)) Object_0013ef18_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0013ef18_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> call_00136e58;  // (from the original)

u32 f_0013ef18(gptr<Object_0013ef18_0> arg0) {
    u32 r0_1 = 0;
    r0_1 = arg0->word_8;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = 0u;
        return r0_1;
    }
    return call_00136e58(r0_1, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0013ef18
GUEST_EXPORT(0x0013ef18, d_0013ef18::f_0013ef18);

// f_0013efb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013efb4 {

struct __attribute__((packed)) Object_0013efb4_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0013efb4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013efb4_0, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x00975334> global_00975334;  // (from the original)
inline constexpr guest::Function<0x00141650, u32(u32, u32, u32, u32)> call_00141650;  // (from the original)

u32 f_0013efb4(gptr<Object_0013efb4_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    arg0->word_0 = u32(0x905fecu);  // (from the original)
    r0_1 = arg0->word_4;
    r1_1 = *global_00975334;
    if (r0_1 != r1_1) {
        if (r0_1 != 0) {
            call_00141650(r0_1, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1_1 = guest::cpu()->r[1];
        }
        *gptr<u32>(r0 + 4u) = u32(*global_00975334);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0;
}

}  // namespace d_0013efb4
GUEST_EXPORT(0x0013efb4, d_0013efb4::f_0013efb4);

// f_0013f398: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013f398 {

struct __attribute__((packed)) Object_0013f398_0 {
    u8 unknown_0[0x14];  // (not used here)
    u16 half_14;
    u8 unknown_16[0xa];  // (not used here)
    u16 half_20;
};
GUEST_OFFSET(Object_0013f398_0, half_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0013f398_0, half_20, 0x20);  // (from the original)


u32 f_0013f398(gptr<Object_0013f398_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r0_2 = 0;
    if (u32(arg0->half_14) == 0x6801u) {  // (from the original)
        r1_1 = r0 + 0x14u;  // (from the original)
        r1_2 = *gptr<u32>(r1_1 + 4u);
        r0_1 = r0 + r1_2;
        guest::cpu()->r[1] = r1_2;
        return r0_1;
    }
    if (u32(arg0->half_20) == 0x6801u) {  // (from the original)
        r1_3 = r0 + 0x20u;  // (from the original)
    } else {
        r1_3 = 0u;
    }
    r1_4 = *gptr<u32>(r1_3 + 4u);
    r0_2 = r0 + r1_4;
    guest::cpu()->r[1] = r1_4;
    return r0_2;
}

}  // namespace d_0013f398
GUEST_EXPORT(0x0013f398, d_0013f398::f_0013f398);

// f_0013f3cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013f3cc {

struct __attribute__((packed)) Object_0013f3cc_0 {
    u8 unknown_0[0x14];  // (not used here)
    u16 half_14;
    u8 unknown_16[0xa];  // (not used here)
    u16 half_20;
};
GUEST_OFFSET(Object_0013f3cc_0, half_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0013f3cc_0, half_20, 0x20);  // (from the original)


u32 f_0013f3cc(gptr<Object_0013f3cc_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r0_2 = 0;
    if (u32(arg0->half_14) == 0x6800u) {  // (from the original)
        r1_1 = r0 + 0x14u;  // (from the original)
        r1_2 = *gptr<u32>(r1_1 + 4u);
        r0_1 = r0 + r1_2;
        guest::cpu()->r[1] = r1_2;
        return r0_1;
    }
    if (u32(arg0->half_20) == 0x6800u) {  // (from the original)
        r1_3 = r0 + 0x20u;  // (from the original)
    } else {
        r1_3 = 0u;
    }
    r1_4 = *gptr<u32>(r1_3 + 4u);
    r0_2 = r0 + r1_4;
    guest::cpu()->r[1] = r1_4;
    return r0_2;
}

}  // namespace d_0013f3cc
GUEST_EXPORT(0x0013f3cc, d_0013f3cc::f_0013f3cc);

// f_0013f5e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013f5e8 {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32, u32)> call_00141a9c;  // (from the original)

u32 f_0013f5e8(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    r1_1 = r13;
    r0_1 = r0 + 8u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_00141a9c(r0_1, r1_1, 0u, r3);
    r1_2 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        r0_3 = 0x40u;  // (from the original)
    } else {
        r0_3 = *gptr<u32>(r13) & 0xffu;  // (from the original)
    }
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_0013f5e8
GUEST_EXPORT(0x0013f5e8, d_0013f5e8::f_0013f5e8);

// f_0013f610: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013f610 {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32, u32)> call_00141a9c;  // (from the original)

u32 f_0013f610(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    r1_1 = r13;
    r0_1 = r0 + 8u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_00141a9c(r0_1, r1_1, 0u, r3);
    r1_2 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    r0_3 = *gptr<u32>(r13) << 0x10 >> 0x18;  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_0013f610
GUEST_EXPORT(0x0013f610, d_0013f610::f_0013f610);

// f_0013f69c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013f69c {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32, u32)> call_00141a9c;  // (from the original)

u32 f_0013f69c(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    r1_1 = r13;
    r0_1 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_00141a9c(r0_1, r1_1, 0u, r3);
    r1_2 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        r0_2 = *gptr<u32>(r13);
    }
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_0013f69c
GUEST_EXPORT(0x0013f69c, d_0013f69c::f_0013f69c);

// f_0013f6bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013f6bc {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32, u32)> call_00141a9c;  // (from the original)

u32 f_0013f6bc(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    r1_1 = r13;
    r0_1 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_00141a9c(r0_1, r1_1, 1u, r3);
    r1_2 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        r0_3 = 0x40u;  // (from the original)
    } else {
        r0_3 = *gptr<u32>(r13) & 0xffu;  // (from the original)
    }
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_0013f6bc
GUEST_EXPORT(0x0013f6bc, d_0013f6bc::f_0013f6bc);

// f_0013f6e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013f6e4 {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32, u32)> call_00141a9c;  // (from the original)

u32 f_0013f6e4(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 res_1 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    r1_1 = r13;
    r0_1 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_00141a9c(r0_1, r1_1, 1u, r3);
    r1_2 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    res_1 = *gptr<u32>(r13) << 0x10 >> 0x18;  // (from the original)
    if (res_1 == 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return res_1;
    }
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_0013f6e4
GUEST_EXPORT(0x0013f6e4, d_0013f6e4::f_0013f6e4);

// f_0013f718: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013f718 {

struct __attribute__((packed)) Object_0013f718_0 {
    u8 unknown_0[0xc];  // (not used here)
    u16 half_c;
};
GUEST_OFFSET(Object_0013f718_0, half_c, 0xc);  // (from the original)


u32 f_0013f718(gptr<Object_0013f718_0> arg0) {
    u32 res_1 = 0;
    u32 r0_1 = 0;
    res_1 = u32(arg0->half_c) - 0x2201u;  // (from the original)
    if (res_1 == 0) {
        return 2u;
    }
    if (res_1 == 1u) {
        return 3u;
    }
    if (res_1 == 2u) {
        r0_1 = 1u;
    } else {
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_0013f718
GUEST_EXPORT(0x0013f718, d_0013f718::f_0013f718);

// f_0013f7b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013f7b8 {

struct __attribute__((packed)) Object_0013f7b8_0 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not used here)
    u8 byte_c;
};
GUEST_OFFSET(Object_0013f7b8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013f7b8_0, byte_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x001416bc, u32(u32, u32, u32, u32)> call_001416bc;  // (from the original)

u32 f_0013f7b8(gptr<Object_0013f7b8_0> arg0) {
    u32 r1_1 = 0;
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r1_1 = u32(arg0->byte_c);
    if (r1_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r4_1 = arg0->word_0;
    r0_1 = call_001416bc(r4_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (*gptr<u32>(r4_1 + r0_1) == 0x54415743u) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = 0x54415743u;  // (from the original)
        return 1u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0x54415743u;  // (from the original)
    return 0u;
}

}  // namespace d_0013f7b8
GUEST_EXPORT(0x0013f7b8, d_0013f7b8::f_0013f7b8);

// f_0013f7f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013f7f4 {

struct __attribute__((packed)) Object_0013f7f4_0 {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Object_0013f7f4_0, word_3c, 0x3c);  // (from the original)

inline constexpr guest::Function<0x001416ec, u32(u32, u32, u32, u32)> call_001416ec;  // (from the original)

u32 f_0013f7f4(gptr<Object_0013f7f4_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = arg0->word_3c;
    r0_2 = call_001416ec(r0_1, guest::cpu()->r[1], r2, guest::cpu()->r[3]);
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0_2;
    }
    *gptr<u32>(r2) = u32(*gptr<u32>(r0_2));
    guest::cpu()->r[13] += 8u;
    return 1u;
}

}  // namespace d_0013f7f4
GUEST_EXPORT(0x0013f7f4, d_0013f7f4::f_0013f7f4);

// f_0013f81c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013f81c {

struct __attribute__((packed)) Object_0013f81c_0 {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Object_0013f81c_0, word_3c, 0x3c);  // (from the original)

inline constexpr guest::Function<0x00141728, u32(u32, u32, u32, u32)> call_00141728;  // (from the original)
inline constexpr guest::Function<0x001417fc, u32(u32, u32, u32, u32)> call_001417fc;  // (from the original)
inline constexpr guest::Function<0x00141820, u32(u32, u32, u32, u32)> call_00141820;  // (from the original)
inline constexpr guest::Function<0x0014184c, u32(u32, u32, u32, u32)> call_0014184c;  // (from the original)
inline constexpr guest::Function<0x00141870, u32(u32, u32, u32, u32)> call_00141870;  // (from the original)
inline constexpr guest::Function<0x0014189c, u32(u32, u32, u32, u32)> call_0014189c;  // (from the original)

u32 f_0013f81c(gptr<Object_0013f81c_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r0_5 = 0;
    u32 r2_4 = 0;
    u32 r0_6 = 0;
    u32 r2_5 = 0;
    u32 r0_7 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = arg0->word_3c;
    r0_2 = call_00141728(r0_1, guest::cpu()->r[1], r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    if (r0_2 != 0) {
        *gptr<u32>(r2) = u32(*gptr<u32>(r0_2));
        *gptr<u32>(r2 + 4u) = u32(*gptr<u32>(r0_2 + 4u));
        *gptr<u32>(r2 + 0x10u) = u32(u32(*gptr<u8>(r0_2 + 8u)));  // (from the original)
        r0_3 = call_001417fc(r0_2, guest::cpu()->r[1], r2_1, guest::cpu()->r[3]);
        r2_2 = guest::cpu()->r[2];
        *gptr<u8>(r2 + 0x14u) = u8(r0_3);  // (from the original)
        r0_4 = call_00141820(r0_2, guest::cpu()->r[1], r2_2, guest::cpu()->r[3]);
        r2_3 = guest::cpu()->r[2];
        *gptr<u8>(r2 + 0x15u) = u8(r0_4);  // (from the original)
        r0_5 = call_0014189c(r0_2, guest::cpu()->r[1], r2_3, guest::cpu()->r[3]);
        r2_4 = guest::cpu()->r[2];
        *gptr<u32>(r2 + 0xcu) = u32(r0_5);  // (from the original)
        r0_6 = call_00141870(r0_2, guest::cpu()->r[1], r2_4, guest::cpu()->r[3]);
        r2_5 = guest::cpu()->r[2];
        *gptr<u32>(r2 + 8u) = u32(r0_6);
        r0_7 = call_0014184c(r0_2, guest::cpu()->r[1], r2_5, guest::cpu()->r[3]);
        *gptr<u8>(r2 + 0x16u) = u8(r0_7);  // (from the original)
        r0_2 = 1u;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0_2;
}

}  // namespace d_0013f81c
GUEST_EXPORT(0x0013f81c, d_0013f81c::f_0013f81c);

// f_0013f890: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013f890 {

struct __attribute__((packed)) Object_0013f890_0 {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Object_0013f890_0, word_3c, 0x3c);  // (from the original)

inline constexpr guest::Function<0x001417a0, u32(u32, u32, u32, u32)> call_001417a0;  // (from the original)
inline constexpr guest::Function<0x001417dc, u32(u32, u32, u32, u32)> call_001417dc;  // (from the original)

u32 f_0013f890(gptr<Object_0013f890_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = arg0->word_3c;
    r0_2 = call_001417a0(r0_1, guest::cpu()->r[1], r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    if (r0_2 != 0) {
        *gptr<u32>(r2) = u32(*gptr<u32>(r0_2));
        r0_3 = call_001417dc(r0_2, guest::cpu()->r[1], r2_1, guest::cpu()->r[3]);
        *gptr<u32>(r2 + 4u) = u32(r0_3);
        *gptr<u8>(r2 + 8u) = u8(u32(*gptr<u8>(r0_2 + 4u)));
        r0_2 = 1u;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0_2;
}

}  // namespace d_0013f890
GUEST_EXPORT(0x0013f890, d_0013f890::f_0013f890);

// f_0013f8cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013f8cc {

struct __attribute__((packed)) Object_0013f8cc_0 {
    u8 unknown_0[0x10];  // (not used here)
    u16 half_10;
};
GUEST_OFFSET(Object_0013f8cc_0, half_10, 0x10);  // (from the original)


u32 f_0013f8cc(gptr<Object_0013f8cc_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 res_1 = 0;
    u32 zf_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r3 = u32(arg0->half_10);
    r12 = 0x7801u;  // (from the original)
    r5 = 0u;
    r2 = r0 + 0x14u;  // (from the original)
    r1 = r5;
    if (r3 == 0 || r3 >> 0x1f != (r3 & (r3 ^ r3)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r5;
    }
L_13f8ec:;
    if (u32(*gptr<u16>(r2 + (r1 + (r1 << 1) << 2))) != r12) {
        goto L_13f920;
    }
    res_1 = r2 + (r1 + (r1 << 1) << 2);
    zf_1 = res_1 == 0;
    r1 = res_1;
    if (!zf_1) {
        r1 = *gptr<u32>(r1 + 4u);
        zf_1 = r1 == 0;
    }
    if (!zf_1) {
        r5 = r1 + r0;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r5;
L_13f920:;
    r1 = r1 + 1u;
    if (s32(r3) > s32(r1)) {
        guest::preempt();
        goto L_13f8ec;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r5;
}

}  // namespace d_0013f8cc
GUEST_EXPORT(0x0013f8cc, d_0013f8cc::f_0013f8cc);

// f_0013f934: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013f934 {

struct __attribute__((packed)) Object_0013f934_0 {
    u8 unknown_0[0x10];  // (not used here)
    u16 half_10;
};
GUEST_OFFSET(Object_0013f934_0, half_10, 0x10);  // (from the original)


u32 f_0013f934(gptr<Object_0013f934_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 res_1 = 0;
    u32 zf_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r12 = u32(arg0->half_10);
    r3 = r0 + 0x14u;  // (from the original)
    r5 = r0;
    r0 = 0u;
    r2 = 0x7800u;  // (from the original)
    r1 = r0;
    if (r12 == 0 || r12 >> 0x1f != (r12 & (r12 ^ r12)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    do {
L_13f958:;
        if (!(u32(*gptr<u16>(r3 + (r1 + (r1 << 1) << 2))) != r2)) {
            res_1 = r3 + (r1 + (r1 << 1) << 2);
            zf_1 = res_1 == 0;
            r1_1 = res_1;
            if (!zf_1) {
                r1_1 = *gptr<u32>(r1_1 + 4u);
                zf_1 = r1_1 == 0;
            }
            if (zf_1) {
                guest::cpu()->r[13] += 8u;
                guest::cpu()->r[1] = r1_1;
                return r0;
            } else {
                r0_1 = r1_1 + r5;
            }
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_1;
            return r0_1;
        }
        r1 = r1 + 1u;
        guest::preempt();
    } while (s32(r12) > s32(r1));
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0013f934
GUEST_EXPORT(0x0013f934, d_0013f934::f_0013f934);

// f_0013f9a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013f9a0 {

struct __attribute__((packed)) Object_0013f9a0_0 {
    u8 unknown_0[0x10];  // (not used here)
    u16 half_10;
};
GUEST_OFFSET(Object_0013f9a0_0, half_10, 0x10);  // (from the original)


u32 f_0013f9a0(gptr<Object_0013f9a0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 res_1 = 0;
    u32 zf_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r3 = u32(arg0->half_10);
    r12 = 0x7802u;  // (from the original)
    r5 = 0u;
    r2 = r0 + 0x14u;  // (from the original)
    r1 = r5;
    if (r3 == 0 || r3 >> 0x1f != (r3 & (r3 ^ r3)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r5;
    }
L_13f9c0:;
    if (u32(*gptr<u16>(r2 + (r1 + (r1 << 1) << 2))) != r12) {
        goto L_13f9f4;
    }
    res_1 = r2 + (r1 + (r1 << 1) << 2);
    zf_1 = res_1 == 0;
    r1 = res_1;
    if (!zf_1) {
        r1 = *gptr<u32>(r1 + 4u);
        zf_1 = r1 == 0;
    }
    if (!zf_1) {
        r5 = r1 + r0;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r5;
L_13f9f4:;
    r1 = r1 + 1u;
    if (s32(r3) > s32(r1)) {
        guest::preempt();
        goto L_13f9c0;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r5;
}

}  // namespace d_0013f9a0
GUEST_EXPORT(0x0013f9a0, d_0013f9a0::f_0013f9a0);

// f_0013fa08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013fa08 {


void f_0013fa08(u32 r0) {
    return;
}

}  // namespace d_0013fa08
GUEST_EXPORT(0x0013fa08, d_0013fa08::f_0013fa08);

// f_0013fad4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013fad4 {


void f_0013fad4() {
    return;
}

}  // namespace d_0013fad4
GUEST_EXPORT(0x0013fad4, d_0013fad4::f_0013fad4);

// f_0013fe18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013fe18 {

inline constexpr guest::Function<0x0013dee0, u32(u32, u32, u32, u32)> call_0013dee0;  // (from the original)
inline constexpr guest::Function<0x001429f4, u32(u32, u32, u32, u32)> call_001429f4;  // (from the original)

u32 f_0013fe18(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_0013dee0(r0, r1, guest::cpu()->r[2], r3);
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r13) = u32(r0_1);
    r0_2 = r13;
    guest::cpu()->r[13] = r13;
    r0_3 = call_001429f4(r0_2, r0, guest::cpu()->r[2], r3_1);
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_0013fe18
GUEST_EXPORT(0x0013fe18, d_0013fe18::f_0013fe18);

// f_0013fefc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013fefc {


u32 f_0013fefc(u32 r0, u32 r1) {
    u32 zf_1 = 0;
    u32 r3_1 = 0;
    zf_1 = r0 == 0;
    if (!zf_1) {
        zf_1 = r1 == 0;
    }
    if (zf_1) {
        guest::cpu()->r[1] = r1;
        return 0xe0e046bcu;  // (from the original)
    }
    r3_1 = *gptr<u32>(*gptr<u32>(r1) + 0xcu);  // (from the original)
    return guest::call_address<u32>(r3_1, r1, r0, r0, r3_1);
}

}  // namespace d_0013fefc
GUEST_EXPORT(0x0013fefc, d_0013fefc::f_0013fefc);

// f_0013ff94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013ff94 {

struct __attribute__((packed)) Object_0013ff94_0 {
    u8 unknown_0[0xa0];  // (not used here)
    u32 word_a0;
    u8 unknown_a4[0x24];  // (not used here)
    u32 word_c8;
    u32 word_cc;
};
GUEST_OFFSET(Object_0013ff94_0, word_a0, 0xa0);  // (from the original)
GUEST_OFFSET(Object_0013ff94_0, word_c8, 0xc8);  // (from the original)
GUEST_OFFSET(Object_0013ff94_0, word_cc, 0xcc);  // (from the original)


u32 f_0013ff94(gptr<Object_0013ff94_0> arg0, u32 r1, u32 r2) {
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r1_1 = arg0->word_a0;
    r3_1 = arg0->word_c8;
    r0_1 = r1_1 & 0xfu;  // (from the original)
    r1_2 = r1_1 >> 4;
    if (s32(arg0->word_cc) <= s32(r0_1)) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 0xd8e12c04u;  // (from the original)
    }
    r0_2 = r3_1 + (r0_1 + (r0_1 << 1) << 2);
    if (*gptr<u32>(r0_2 + 4u) <= r1_2) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 0xd8e12c04u;  // (from the original)
    }
    res_1 = *gptr<u32>(r0_2) + r1_2;
    if (res_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 0xd8e12c04u;  // (from the original)
    }
    guest::cpu()->r[13] += 8u;
    return guest::call_address<u32>(res_1, r1, r2, r2, res_1);
}

}  // namespace d_0013ff94
GUEST_EXPORT(0x0013ff94, d_0013ff94::f_0013ff94);
